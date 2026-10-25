// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c563d0 FUN_146c563d0 body=442 status=ok
// SIG undefined FUN_146c563d0(void)

void FUN_146c563d0(longlong param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146c565a0();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar3 < 0x38) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_48[0] = param_4 & 0xff;
    (**(code **)(*param_2 + 0x170))(param_2,local_48);
    uVar6 = local_48[0];
    if (1 < local_48[0]) {
      FUN_14572541c(param_2);
      uVar6 = local_48[0];
    }
  }
  else {
    uVar6 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((param_3 == (longlong *)0x0) || ((int)param_3[1] == 0)) {
    if (uVar6 == 0) {
      FUN_146c44560();
    }
    else {
      FUN_146c4431c(param_1 + 0x18,param_2);
    }
  }
  else {
    FUN_14582f01a(local_48);
    FUN_146bfd442(local_48,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x50));
    uVar4 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        if (*(int *)(*param_3 + uVar5 * 4) != -1) {
          *(undefined4 *)
           (*(longlong *)(local_40[0] + (ulonglong)(uVar7 >> 9) * 8) +
           (ulonglong)(uVar7 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar5 >> 9 & 0x7fffff) * 8) +
                (ulonglong)((uint)uVar5 & 0x1ff) * 4);
          uVar7 = uVar7 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    if (uVar6 == 0) {
      FUN_146c44560();
    }
    else {
      FUN_146c4431c(local_48,param_2);
    }
    FUN_1457ed392(local_40,0);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c565a0 FUN_146c565a0 body=164 status=ok
// SIG undefined FUN_146c565a0(void)

void FUN_146c565a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_d8 [32];
  undefined **local_b8 [19];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar1 < 0x3e) goto LAB_146c56620;
  }
  FUN_140713482(local_b8,param_2);
  local_b8[0] = &PTR_FUN_149f3b840;
  FUN_14170c100(local_b8,param_1 + 8);
  FUN_14041e0ea(local_b8);
LAB_146c56620:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c56646 FUN_146c56646 body=336 status=ok
// SIG undefined FUN_146c56646(void)

undefined4 * FUN_146c56646(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c55e86(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar3 = FUN_146c55f6c(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146c560ce(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c56798 FUN_146c56798 body=556 status=ok
// SIG undefined FUN_146c56798(void)

void FUN_146c56798(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    uVar7 = (ulonglong)local_2c << 6 | 4;
    (**(code **)(*param_2 + 0x10))(param_2,uVar7,uVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c56b24(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c56bc4(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c569dc(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
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



// FUNCTION 146c569dc FUN_146c569dc body=326 status=ok
// SIG undefined FUN_146c569dc(void)

void FUN_146c569dc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_3c = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_3c);
      }
    }
    else {
      local_3c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_146becdc4(param_1,local_3c);
    if (0 < local_3c) {
      iVar6 = 0;
      do {
        lVar4 = FUN_14001cc68(0x8000,0x10);
        lVar5 = 0x3c;
        do {
          *(undefined8 *)(lVar4 + -0xc + lVar5) = 0;
          *(undefined8 *)(lVar4 + -4 + lVar5) = 0xc00000000;
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != 0x803c);
        lVar5 = 0;
        do {
          FUN_146c56f4a(param_2,lVar4 + lVar5);
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != 0x8000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146bea1b0(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c56b24 FUN_146c56b24 body=159 status=ok
// SIG undefined FUN_146c56b24(void)

void FUN_146c56b24(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  longlong lVar2;
  
  puVar1 = param_1 + 1;
  FUN_146bea3d4(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x8000);
    memset(_Dst,0,0x8000);
    lVar2 = 0x3c;
    do {
      *(undefined8 *)((longlong)_Dst + lVar2 + -0xc) = 0;
      *(undefined8 *)((longlong)_Dst + lVar2 + -4) = 0xc00000000;
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != 0x803c);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_146bea1b0(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 146c56bc4 FUN_146c56bc4 body=901 status=ok
// SIG undefined FUN_146c56bc4(void)

void FUN_146c56bc4(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *_Dst_00;
  ulonglong uVar11;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  uint local_74;
  ulonglong local_70;
  void *local_68;
  ulonglong uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar8 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar8 = (uint)local_68;
    }
  }
  else {
    uVar8 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar4 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  local_74 = uVar4;
  if (uVar8 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar4 != 0) {
        uVar11 = 0;
        do {
          iVar7 = (int)uVar9;
          if (0x1ff < uVar9) {
            uVar9 = 0x200;
          }
          lVar10 = uVar9 + (uVar9 == 0);
          if (iVar7 != 0) {
            lVar5 = *(longlong *)(*param_1 + uVar11 * 8);
            do {
              FUN_146c56f4a(param_2,lVar5);
              lVar5 = lVar5 + 0x40;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          uVar9 = (ulonglong)(iVar7 - 0x200);
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar4);
      }
    }
    else {
      FUN_146becdc4(param_1,uVar4);
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          iVar7 = (int)uVar9;
          if (0x1ff < uVar9) {
            uVar9 = 0x200;
          }
          lVar6 = uVar9 + (uVar9 == 0);
          lVar10 = FUN_14001cc68(0x8000,0x10);
          lVar5 = 0x3c;
          do {
            *(undefined8 *)(lVar10 + -0xc + lVar5) = 0;
            *(undefined8 *)(lVar10 + -4 + lVar5) = 0xc00000000;
            lVar5 = lVar5 + 0x40;
          } while (lVar5 != 0x803c);
          lVar5 = lVar10;
          if (iVar7 != 0) {
            do {
              FUN_146c56f4a(param_2,lVar5);
              lVar6 = lVar6 + -1;
              lVar5 = lVar5 + 0x40;
            } while (lVar6 != 0);
          }
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_146bea1b0(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar10;
          uVar9 = (ulonglong)(iVar7 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar8 != local_74);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c57222(&local_68,uVar9);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar4 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar11 = 0x200;
        if (param_3 < 0x200) {
          uVar11 = param_3;
        }
        uVar11 = (ulonglong)(uint)((int)uVar11 << 6);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar11);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar11);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 6,local_4c);
    uVar8 = local_74;
    if (((*(byte *)(param_2 + 5) & 1) != 0) && (FUN_146becdc4(param_1,local_74), uVar8 != 0)) {
      uVar8 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x8000,0x10);
        lVar10 = 0x3c;
        do {
          *(undefined8 *)((longlong)_Dst + lVar10 + -0xc) = 0;
          *(undefined8 *)((longlong)_Dst + lVar10 + -4) = 0xc00000000;
          lVar10 = lVar10 + 0x40;
        } while (lVar10 != 0x803c);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 << 6));
        iVar7 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
          FUN_146bea1b0(param_1,iVar7);
        }
        *(void **)(*param_1 + (longlong)iVar7 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 0x40);
        param_3 = param_3 - 0x200;
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_74);
    }
    FUN_146c573a5(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c56f4a FUN_146c56f4a body=370 status=ok
// SIG undefined FUN_146c56f4a(void)

longlong * FUN_146c56f4a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x38) << 2,(longlong)*(int *)(param_2 + 0x3c) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x38);
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
       (*(undefined4 *)(param_2 + 0x38) = 0, *(int *)(param_2 + 0x3c) != 0)) {
      FUN_146c57106(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x38) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar4 = param_2;
      }
      FUN_146c5716c(lVar4 + lVar6,param_1);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (lVar7 < *(int *)(param_2 + 0x38));
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = 0;
    if ((*(uint *)(param_2 + 0x3c) == local_2c) || (FUN_146c57106(param_2), 0 < (int)local_2c)) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146c570be(param_2);
        FUN_146c5716c(uVar3,param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c570be FUN_146c570be body=72 status=ok
// SIG undefined FUN_146c570be(void)

longlong FUN_146c570be(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_146beb76e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 4;
  FUN_146c57221(lVar2,1);
  return lVar2;
}



// FUNCTION 146c57106 FUN_146c57106 body=101 status=ok
// SIG undefined FUN_146c57106(void)

void FUN_146c57106(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xc;
    if (0xc < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = (int)uVar2;
    FUN_146bea5d8(param_1,*(undefined4 *)(param_1 + 0x38),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146c5716c FUN_146c5716c body=181 status=ok
// SIG undefined FUN_146c5716c(void)

void FUN_146c5716c(undefined2 *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  param_1 = param_1 + 1;
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146c571eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1,2);
      return;
    }
    thunk_FUN_1457251a8(param_2,param_1);
    return;
  }
  *param_1 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  return;
}



// FUNCTION 146c57221 FUN_146c57221 body=1 status=ok
// SIG undefined FUN_146c57221(void)

void FUN_146c57221(void)

{
  return;
}



// FUNCTION 146c57222 FUN_146c57222 body=92 status=ok
// SIG undefined FUN_146c57222(void)

void FUN_146c57222(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c57280(param_1,iVar1);
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      FUN_146c57306(param_1);
      FUN_146c57366(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 146c57280 FUN_146c57280 body=132 status=ok
// SIG undefined FUN_146c57280(void)

void FUN_146c57280(longlong param_1,int param_2)

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



// FUNCTION 146c57306 FUN_146c57306 body=95 status=ok
// SIG undefined FUN_146c57306(void)

void FUN_146c57306(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x40 + *param_1);
  FUN_146c573a5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c57366 FUN_146c57366 body=63 status=ok
// SIG undefined FUN_146c57366(void)

void FUN_146c57366(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c573d4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 146c573a5 FUN_146c573a5 body=47 status=ok
// SIG undefined FUN_146c573a5(void)

void FUN_146c573a5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c573d4 FUN_146c573d4 body=97 status=ok
// SIG undefined FUN_146c573d4(void)

ulonglong FUN_146c573d4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146c57436 FUN_146c57436 body=147 status=ok
// SIG undefined FUN_146c57436(void)

void FUN_146c57436(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c574ca FUN_146c574ca body=132 status=ok
// SIG undefined FUN_146c574ca(void)

void FUN_146c574ca(longlong param_1,int param_2)

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



// FUNCTION 146c57550 FUN_146c57550 body=147 status=ok
// SIG undefined FUN_146c57550(void)

void FUN_146c57550(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c575e4 FUN_146c575e4 body=132 status=ok
// SIG undefined FUN_146c575e4(void)

void FUN_146c575e4(longlong param_1,int param_2)

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



// FUNCTION 146c5766a FUN_146c5766a body=147 status=ok
// SIG undefined FUN_146c5766a(void)

void FUN_146c5766a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c576fe FUN_146c576fe body=132 status=ok
// SIG undefined FUN_146c576fe(void)

void FUN_146c576fe(longlong param_1,int param_2)

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



// FUNCTION 146c57784 FUN_146c57784 body=147 status=ok
// SIG undefined FUN_146c57784(void)

void FUN_146c57784(longlong param_1,int param_2)

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



// FUNCTION 146c57818 FUN_146c57818 body=132 status=ok
// SIG undefined FUN_146c57818(void)

void FUN_146c57818(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c5789d FUN_146c5789d body=22 status=ok
// SIG undefined FUN_146c5789d(void)

void FUN_146c5789d(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x60);
    return;
  }
  return;
}



// FUNCTION 146c578b4 FUN_146c578b4 body=147 status=ok
// SIG undefined FUN_146c578b4(void)

void FUN_146c578b4(longlong param_1,int param_2)

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



// FUNCTION 146c57948 FUN_146c57948 body=101 status=ok
// SIG undefined FUN_146c57948(void)

void FUN_146c57948(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x60 + *param_1);
  FUN_146c441db(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c579ae FUN_146c579ae body=62 status=ok
// SIG undefined FUN_146c579ae(void)

void FUN_146c579ae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c579ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 146c579ec FUN_146c579ec body=112 status=ok
// SIG undefined FUN_146c579ec(void)

ulonglong FUN_146c579ec(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c57a26;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_146c57a26:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c57a5c FUN_146c57a5c body=22 status=ok
// SIG undefined FUN_146c57a5c(void)

void FUN_146c57a5c(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x60);
    return;
  }
  return;
}



// FUNCTION 146c57a72 FUN_146c57a72 body=147 status=ok
// SIG undefined FUN_146c57a72(void)

void FUN_146c57a72(longlong param_1,int param_2)

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



// FUNCTION 146c57b06 FUN_146c57b06 body=101 status=ok
// SIG undefined FUN_146c57b06(void)

void FUN_146c57b06(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x60 + *param_1);
  FUN_146c4414d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c57b6c FUN_146c57b6c body=62 status=ok
// SIG undefined FUN_146c57b6c(void)

void FUN_146c57b6c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c57baa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 146c57baa FUN_146c57baa body=112 status=ok
// SIG undefined FUN_146c57baa(void)

ulonglong FUN_146c57baa(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c57be4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_146c57be4:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c57c1a FUN_146c57c1a body=45 status=ok
// SIG undefined FUN_146c57c1a(void)

void FUN_146c57c1a(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x44;
    do {
      *(undefined8 *)(param_1 + -0x2c) = 0;
      *(undefined8 *)(param_1 + -0x24) = 0x8000000000;
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x8000000000;
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c57c48 FUN_146c57c48 body=147 status=ok
// SIG undefined FUN_146c57c48(void)

void FUN_146c57c48(longlong param_1,int param_2)

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



// FUNCTION 146c57cdc FUN_146c57cdc body=98 status=ok
// SIG undefined FUN_146c57cdc(void)

void FUN_146c57cdc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x48 + *param_1);
  FUN_146c43c3a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c57d3e FUN_146c57d3e body=62 status=ok
// SIG undefined FUN_146c57d3e(void)

void FUN_146c57d3e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c57d7c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146c57d7c FUN_146c57d7c body=112 status=ok
// SIG undefined FUN_146c57d7c(void)

ulonglong FUN_146c57d7c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c57db6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_146c57db6:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c57dec FUN_146c57dec body=34 status=ok
// SIG undefined FUN_146c57dec(void)

void FUN_146c57dec(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_149f3baa0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 146c57e0e FUN_146c57e0e body=147 status=ok
// SIG undefined FUN_146c57e0e(void)

void FUN_146c57e0e(longlong param_1,int param_2)

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



// FUNCTION 146c57ea2 FUN_146c57ea2 body=98 status=ok
// SIG undefined FUN_146c57ea2(void)

void FUN_146c57ea2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_146c43d80(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c57f04 FUN_146c57f04 body=62 status=ok
// SIG undefined FUN_146c57f04(void)

void FUN_146c57f04(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c57f42(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 146c57f42 FUN_146c57f42 body=112 status=ok
// SIG undefined FUN_146c57f42(void)

ulonglong FUN_146c57f42(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c57f7c;
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
LAB_146c57f7c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c57fb2 FUN_146c57fb2 body=132 status=ok
// SIG undefined FUN_146c57fb2(void)

void FUN_146c57fb2(longlong param_1,int param_2)

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



// FUNCTION 146c58037 FUN_146c58037 body=170 status=ok
// SIG undefined FUN_146c58037(void)

ulonglong FUN_146c58037(int *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  int iVar8;
  undefined7 uVar7;
  
  iVar5 = *param_1;
  uVar1 = param_1[1];
  if (iVar5 * 0x200 + uVar1 == *param_2 * 0x200 + param_2[1]) {
    uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if (uVar1 != 0 || iVar5 != 0) {
      if (iVar5 != 0) {
        lVar2 = *(longlong *)(param_2 + 2);
        lVar3 = *(longlong *)(param_1 + 2);
        iVar8 = 0;
        do {
          iVar4 = memcmp(*(void **)(lVar3 + (longlong)iVar8 * 8),
                         *(void **)(lVar2 + (longlong)iVar8 * 8),0x800);
          if (iVar4 != 0) goto LAB_146c580cc;
          iVar8 = iVar8 + 1;
        } while (iVar5 != iVar8);
      }
      if ((ulonglong)uVar1 != 0) {
        iVar5 = memcmp(*(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar5 * 8),
                       *(void **)(*(longlong *)(param_2 + 2) + (longlong)iVar5 * 8),
                       (ulonglong)uVar1 << 2);
        uVar6 = CONCAT71(uVar7,iVar5 == 0);
      }
    }
  }
  else {
LAB_146c580cc:
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146c580e1 FUN_146c580e1 body=170 status=ok
// SIG undefined FUN_146c580e1(void)

ulonglong FUN_146c580e1(int *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  int iVar8;
  undefined7 uVar7;
  
  iVar5 = *param_1;
  uVar1 = param_1[1];
  if (iVar5 * 0x200 + uVar1 == *param_2 * 0x200 + param_2[1]) {
    uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if (uVar1 != 0 || iVar5 != 0) {
      if (iVar5 != 0) {
        lVar2 = *(longlong *)(param_2 + 2);
        lVar3 = *(longlong *)(param_1 + 2);
        iVar8 = 0;
        do {
          iVar4 = memcmp(*(void **)(lVar3 + (longlong)iVar8 * 8),
                         *(void **)(lVar2 + (longlong)iVar8 * 8),0x800);
          if (iVar4 != 0) goto LAB_146c58176;
          iVar8 = iVar8 + 1;
        } while (iVar5 != iVar8);
      }
      if ((ulonglong)uVar1 != 0) {
        iVar5 = memcmp(*(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar5 * 8),
                       *(void **)(*(longlong *)(param_2 + 2) + (longlong)iVar5 * 8),
                       (ulonglong)uVar1 << 2);
        uVar6 = CONCAT71(uVar7,iVar5 == 0);
      }
    }
  }
  else {
LAB_146c58176:
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146c5818c FUN_146c5818c body=556 status=ok
// SIG undefined FUN_146c5818c(void)

void FUN_146c5818c(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 4 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c2cf40(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c583d0(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c447a4(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
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



// FUNCTION 146c583d0 FUN_146c583d0 body=758 status=ok
// SIG undefined FUN_146c583d0(void)

void FUN_146c583d0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst_00;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  uint local_74;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar7 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar7 = (uint)local_68;
    }
  }
  else {
    uVar7 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar5 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar7 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar6 = (uint)uVar9;
          uVar7 = 0x200;
          if (uVar6 < 0x200) {
            uVar7 = uVar6;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar7 << 2);
          uVar9 = (ulonglong)(uVar6 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
    else {
      FUN_1457ed392(param_1,uVar5);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar4 = FUN_14001cc68(0x800,0x10);
        uVar6 = (uint)uVar9;
        uVar7 = 0x200;
        if (uVar6 < 0x200) {
          uVar7 = uVar6;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,uVar7 << 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        uVar9 = (ulonglong)(uVar6 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a12820(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_74 = uVar5;
    local_70 = param_3;
    if (uVar5 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 2,local_4c);
    uVar7 = local_74;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1457ed392(param_1,local_74);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 * 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 4);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c586d0 FUN_146c586d0 body=149 status=ok
// SIG undefined FUN_146c586d0(void)

void FUN_146c586d0(longlong *param_1,int param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = *param_1;
  iVar7 = 0;
  do {
    uVar1 = param_2 * 3 + iVar7;
    uVar6 = (ulonglong)(uVar1 >> 9);
    uVar5 = (ulonglong)(uVar1 & 0x1ff);
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar6 * 8) + uVar5 * 4);
    if (iVar3 == (int)param_1[1]) {
      FUN_146c09a68(lVar4 + 8,iVar3,1);
      psVar2 = (short *)(*(longlong *)
                          (*(longlong *)(lVar4 + 0x10) +
                          (ulonglong)(*(uint *)((longlong)param_1 + 0xc) >> 9) * 8) +
                        (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x1ff) * 2);
      *psVar2 = *psVar2 + 1;
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar6 * 8) + uVar5 * 4) =
           *(undefined4 *)((longlong)param_1 + 0xc);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 3);
  return;
}



// FUNCTION 146c58786 FUN_146c58786 body=5 status=ok
// SIG undefined FUN_146c58786(void)

longlong FUN_146c58786(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 146c58798 FUN_146c58798 body=29 status=ok
// SIG undefined FUN_146c58798(void)

undefined8 FUN_146c58798(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c587b6 FUN_146c587b6 body=8 status=ok
// SIG undefined FUN_146c587b6(void)

void FUN_146c587b6(undefined8 *param_1,byte *param_2)

{
  *(byte *)*param_1 = *(byte *)*param_1 & *param_2;
  return;
}



// FUNCTION 146c587e8 FUN_146c587e8 body=29 status=ok
// SIG undefined FUN_146c587e8(void)

undefined8 FUN_146c587e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c58838 FUN_146c58838 body=29 status=ok
// SIG undefined FUN_146c58838(void)

undefined8 FUN_146c58838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c5885e FUN_146c5885e body=149 status=ok
// SIG undefined FUN_146c5885e(void)

void FUN_146c5885e(longlong *param_1,int param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = *param_1;
  iVar7 = 0;
  do {
    uVar1 = param_2 * 3 + iVar7;
    uVar6 = (ulonglong)(uVar1 >> 9);
    uVar5 = (ulonglong)(uVar1 & 0x1ff);
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar6 * 8) + uVar5 * 4);
    if (iVar3 == (int)param_1[1]) {
      FUN_146c09a68(lVar4 + 8,iVar3,1);
      psVar2 = (short *)(*(longlong *)
                          (*(longlong *)(lVar4 + 0x10) +
                          (ulonglong)(*(uint *)((longlong)param_1 + 0xc) >> 9) * 8) +
                        (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x1ff) * 2);
      *psVar2 = *psVar2 + 1;
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar6 * 8) + uVar5 * 4) =
           *(undefined4 *)((longlong)param_1 + 0xc);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 3);
  return;
}



// FUNCTION 146c58914 FUN_146c58914 body=5 status=ok
// SIG undefined FUN_146c58914(void)

longlong FUN_146c58914(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 146c58926 FUN_146c58926 body=29 status=ok
// SIG undefined FUN_146c58926(void)

undefined8 FUN_146c58926(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c58944 FUN_146c58944 body=8 status=ok
// SIG undefined FUN_146c58944(void)

void FUN_146c58944(undefined8 *param_1,byte *param_2)

{
  *(byte *)*param_1 = *(byte *)*param_1 & *param_2;
  return;
}



// FUNCTION 146c58976 FUN_146c58976 body=29 status=ok
// SIG undefined FUN_146c58976(void)

undefined8 FUN_146c58976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c589c6 FUN_146c589c6 body=29 status=ok
// SIG undefined FUN_146c589c6(void)

undefined8 FUN_146c589c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c58a04 FUN_146c58a04 body=5 status=ok
// SIG undefined FUN_146c58a04(void)

longlong FUN_146c58a04(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 146c58a16 FUN_146c58a16 body=29 status=ok
// SIG undefined FUN_146c58a16(void)

undefined8 FUN_146c58a16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c58a34 FUN_146c58a34 body=8 status=ok
// SIG undefined FUN_146c58a34(void)

void FUN_146c58a34(undefined8 *param_1,byte *param_2)

{
  *(byte *)*param_1 = *(byte *)*param_1 & *param_2;
  return;
}



// FUNCTION 146c58a66 FUN_146c58a66 body=29 status=ok
// SIG undefined FUN_146c58a66(void)

undefined8 FUN_146c58a66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c58ab6 FUN_146c58ab6 body=29 status=ok
// SIG undefined FUN_146c58ab6(void)

undefined8 FUN_146c58ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c58ad4 FUN_146c58ad4 body=120 status=ok
// SIG undefined FUN_146c58ad4(void)

ulonglong FUN_146c58ad4(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 4;
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4 * 4) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_146c58b39;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_1401fcbb6(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + uVar5 * 4) = *param_2;
LAB_146c58b39:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146c58b4c FUN_146c58b4c body=323 status=ok
// SIG undefined FUN_146c58b4c(void)

undefined4 *
FUN_146c58b4c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14014832a(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  *puVar1 = 0;
  local_48[4] = *(uint *)(puVar1 + 1);
  local_48[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_140147e3a(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140148e72(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c58c90 FUN_146c58c90 body=138 status=ok
// SIG undefined FUN_146c58c90(void)

void FUN_146c58c90(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c58d1a FUN_146c58d1a body=100 status=ok
// SIG undefined FUN_146c58d1a(void)

void FUN_146c58d1a(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xa1;
    do {
      *(undefined8 *)(param_1 + -0x81) = 0;
      *(undefined4 *)(param_1 + -0x79) = 0;
      *(undefined8 *)(param_1 + -0xa1) = 0;
      *(undefined8 *)(param_1 + -0x99) = 0;
      *(undefined8 *)(param_1 + -0x75) = 0xffffffff00000080;
      *(undefined4 *)(param_1 + -0x6d) = 0;
      *(undefined8 *)(param_1 + -0x61) = 0;
      *(undefined4 *)(param_1 + -0x59) = 0;
      *(undefined8 *)(param_1 + -0x31) = 0;
      *(undefined4 *)(param_1 + -0x29) = 0;
      *(undefined8 *)(param_1 + -0x51) = 0;
      *(undefined8 *)(param_1 + -0x49) = 0;
      *(undefined8 *)(param_1 + -0x25) = 0xffffffff00000080;
      *(undefined4 *)(param_1 + -0x1d) = 0;
      *(undefined8 *)(param_1 + -0x11) = 0;
      *(undefined4 *)(param_1 + -9) = 0;
      *(undefined2 *)(param_1 + -1) = 0x101;
      param_1 = param_1 + 0xa8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c58d7e FUN_146c58d7e body=146 status=ok
// SIG undefined FUN_146c58d7e(void)

void FUN_146c58d7e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c58e12 FUN_146c58e12 body=98 status=ok
// SIG undefined FUN_146c58e12(void)

void FUN_146c58e12(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xa8 + *param_1);
  FUN_146bfddd1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xa8 + (longlong)_Dst),(longlong)iVar2 * 0xa8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c58e74 FUN_146c58e74 body=62 status=ok
// SIG undefined FUN_146c58e74(void)

void FUN_146c58e74(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c58eb2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa8,8);
  }
  return;
}



// FUNCTION 146c58eb2 FUN_146c58eb2 body=110 status=ok
// SIG undefined FUN_146c58eb2(void)

ulonglong FUN_146c58eb2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c58eeb;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa8,8);
      param_2 = param_2 / 0xa8;
    }
  }
LAB_146c58eeb:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c58f20 FUN_146c58f20 body=601 status=ok
// SIG undefined FUN_146c58f20(void)

void FUN_146c58f20(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if (uVar8 != 0xffffffff) {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar8 >> 9) * 8) +
                    (ulonglong)(uVar8 & 0x1ff) * 4);
    if (iVar6 < 8) {
      if (0 < iVar6) {
        iVar6 = iVar6 + uVar8;
        do {
          uVar8 = uVar8 + 1;
          uVar9 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar8 >> 9) * 8) +
                           (ulonglong)(uVar8 & 0x1ff) * 4);
          uVar2 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(*param_3 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                   (ulonglong)((uVar9 & 0x1ff) << 4));
          iVar5 = (int)((ulonglong)uVar2 >> 0x20);
          iVar3 = (int)uVar2;
          local_44 = -1;
          if ((int)param_3[2] == iVar5) {
            local_44 = iVar3;
          }
          if ((int)param_3[2] == iVar3) {
            local_44 = iVar5;
          }
          (**(code **)param_3[1])(((undefined8 *)param_3[1])[1],&local_44);
        } while ((int)uVar8 < iVar6);
      }
    }
    else {
      uVar9 = uVar8 + 7;
      if ((int)(uVar8 + 7) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar7 = uVar8;
      do {
        uVar7 = uVar7 + 1;
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar7 >> 9) * 8)
                         + (ulonglong)(uVar7 & 0x1ff) * 4);
        uVar2 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*param_3 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)((uVar1 & 0x1ff) << 4));
        iVar3 = (int)((ulonglong)uVar2 >> 0x20);
        iVar6 = (int)uVar2;
        local_44 = -1;
        if ((int)param_3[2] == iVar3) {
          local_44 = iVar6;
        }
        if ((int)param_3[2] == iVar6) {
          local_44 = iVar3;
        }
        (**(code **)param_3[1])(((undefined8 *)param_3[1])[1],&local_44);
      } while (uVar7 - uVar9 != 1);
      uVar8 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar8 + 9 >> 9) * 8) +
                       (ulonglong)(uVar8 + 9 & 0x1ff) * 4);
      if (uVar8 != 0xffffffff) {
        lVar4 = *(longlong *)(param_1 + 0x58);
        do {
          uVar9 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                           (ulonglong)(uVar8 & 0x1ff) * 4);
          uVar2 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(*param_3 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                   (ulonglong)((uVar9 & 0x1ff) << 4));
          iVar3 = (int)((ulonglong)uVar2 >> 0x20);
          iVar6 = (int)uVar2;
          local_44 = -1;
          if ((int)param_3[2] == iVar3) {
            local_44 = iVar6;
          }
          if ((int)param_3[2] == iVar6) {
            local_44 = iVar3;
          }
          (**(code **)param_3[1])(((undefined8 *)param_3[1])[1],&local_44);
          lVar4 = *(longlong *)(param_1 + 0x58);
          uVar8 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                           (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        } while (uVar8 != 0xffffffff);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c59188 FUN_146c59188 body=257 status=ok
// SIG undefined FUN_146c59188(void)

undefined8 FUN_146c59188(longlong *param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar5 = (ulonglong)(param_3 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_4 >> 9) * 8);
  uVar7 = (ulonglong)(param_4 & 0x1ff);
  iVar2 = 0;
  iVar6 = 0;
  if ((*(int *)(lVar1 + uVar5 * 0xc) != param_2) &&
     (iVar6 = 1, *(int *)(lVar1 + uVar5 * 0xc + 4) != param_2)) {
    iVar6 = (uint)(*(int *)(lVar1 + 8 + uVar5 * 0xc) == param_2) * 3 + -1;
  }
  if ((*(int *)(lVar3 + uVar7 * 0xc) != param_2) &&
     (iVar2 = 1, *(int *)(lVar3 + 4 + uVar7 * 0xc) != param_2)) {
    iVar2 = (uint)(*(int *)(lVar3 + 8 + uVar7 * 0xc) == param_2) * 3 + -1;
  }
  lVar1 = *(longlong *)param_1[1];
  lVar4 = (longlong)(int)(iVar6 + param_3 * 3);
  lVar3 = (longlong)(int)(param_4 * 3 + iVar2);
  fVar8 = *(float *)(lVar1 + lVar3 * 0xc) - *(float *)(lVar1 + lVar4 * 0xc);
  fVar9 = *(float *)(lVar1 + 4 + lVar3 * 0xc) - *(float *)(lVar1 + 4 + lVar4 * 0xc);
  fVar10 = *(float *)(lVar1 + 8 + lVar3 * 0xc) - *(float *)(lVar1 + 8 + lVar4 * 0xc);
  return CONCAT71((int7)((ulonglong)(lVar3 * 3) >> 8),
                  fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 < 1e-06);
}



// FUNCTION 146c59292 FUN_146c59292 body=1503 status=ok
// SIG undefined FUN_146c59292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c59292(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 local_208 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined1 local_1c1;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  float local_178 [3];
  undefined1 local_16c [12];
  undefined1 local_160 [24];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar14 = (uint)param_2;
  if (-1 < (int)uVar14) {
    plVar4 = (longlong *)*param_1;
    lVar13 = *plVar4;
    if ((int)uVar14 < *(int *)(lVar13 + 0x140) * 0x200 + *(int *)(lVar13 + 0x144)) {
      uVar17 = param_2 >> 9 & 0x7fffff;
      uVar16 = (ulonglong)(uVar14 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar13 + 0x148) + uVar17 * 8) + uVar16 * 2
                             ) - 1U) < 0xfffe) {
        uVar14 = uVar14 * 3;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)param_1[1] + 0x78) +
                           (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4)) {
          lVar15 = *(longlong *)(lVar13 + 0x10);
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x130) + uVar17 * 8);
          uVar3 = *(uint *)(lVar13 + uVar16 * 0xc);
          lVar5 = *(longlong *)(lVar15 + (ulonglong)(uVar3 >> 9) * 8);
          uVar17 = (ulonglong)uVar3 & 0x1ff;
          local_118 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar1 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_128 = *puVar1;
          uStack_120 = puVar1[1];
          uVar3 = *(uint *)(lVar13 + 4 + uVar16 * 0xc);
          lVar5 = *(longlong *)(lVar15 + (ulonglong)(uVar3 >> 9) * 8);
          uVar17 = (ulonglong)uVar3 & 0x1ff;
          local_100 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar1 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_110 = *puVar1;
          uStack_108 = puVar1[1];
          uVar3 = *(uint *)(lVar13 + 8 + uVar16 * 0xc);
          lVar13 = *(longlong *)(lVar15 + (ulonglong)(uVar3 >> 9) * 8);
          uVar17 = (ulonglong)uVar3 & 0x1ff;
          local_e8 = *(undefined8 *)(lVar13 + 0x10 + uVar17 * 0x18);
          puVar2 = (undefined4 *)(lVar13 + uVar17 * 0x18);
          local_f8 = *puVar2;
          uStack_f4 = puVar2[1];
          uStack_f0 = puVar2[2];
          uStack_ec = puVar2[3];
          local_228 = local_138;
          FUN_146c35244(*(longlong *)param_1[1],param_2 & 0xffffffff,local_148,local_140);
          local_228 = local_160;
          FUN_146c3574a(*(undefined8 *)param_1[2],param_2 & 0xffffffff,local_178,local_16c);
          local_218 = &local_1c1;
          local_220 = local_1c0;
          local_228 = local_1b8;
          FUN_142974fb9(&local_128,local_148,&local_190,&local_1a8);
          uVar17 = DAT_149931e80;
          uStack_1f0 = 0;
          local_208._8_4_ = DAT_149931e80._8_4_;
          local_208._0_8_ = (ulonglong)local_198 ^ uVar17;
          local_208._12_4_ = DAT_149931e80._12_4_;
          uStack_1d0 = 0;
          uStack_1e0 = 0;
          lVar13 = 8;
          do {
            dVar10 = (double)*(float *)((longlong)local_178 + lVar13);
            dVar11 = (double)*(float *)((longlong)local_178 + lVar13 + -4);
            dVar12 = (double)*(float *)((longlong)local_178 + lVar13 + -8);
            dVar6 = local_180 * dVar10 + local_190 * dVar12 + local_188 * dVar11;
            dVar9 = local_180 - dVar6 * dVar10;
            dVar8 = local_188 - dVar6 * dVar11;
            dVar6 = local_190 - dVar6 * dVar12;
            dVar21 = SQRT(dVar9 * dVar9 + dVar6 * dVar6 + dVar8 * dVar8);
            dVar7 = 1.0 / dVar21;
            if (0.0 < dVar21) {
              dVar9 = dVar9 * dVar7;
              dVar8 = dVar8 * dVar7;
            }
            else {
              dVar8 = 0.0;
              dVar9 = 0.0;
            }
            dVar7 = (double)(-(ulonglong)(0.0 < dVar21) & (ulonglong)(dVar6 * dVar7));
            dVar6 = *(double *)
                     (&DAT_149931170 +
                     (ulonglong)
                     ((local_1a8 * dVar11 + (double)(uVar17 ^ (ulonglong)local_1a0) * dVar12) *
                      dVar9 + (local_1a0 * dVar10 + (double)((ulonglong)local_198 ^ uVar17) * dVar11
                              ) * dVar7 +
                              (local_198 * dVar12 + (double)((ulonglong)local_1a8 ^ uVar17) * dVar10
                              ) * dVar8 < 0.0) * 8);
            fVar28 = (float)((dVar12 * dVar8 - dVar7 * dVar11) * dVar6);
            fVar27 = (float)((dVar10 * dVar7 - dVar9 * dVar12) * dVar6);
            fVar18 = (float)((dVar11 * dVar9 - dVar8 * dVar10) * dVar6);
            fVar19 = SQRT(fVar28 * fVar28 + fVar18 * fVar18 + fVar27 * fVar27);
            fVar24 = 1.0 / fVar19;
            if (0.0 < fVar19) {
              fVar28 = fVar28 * fVar24;
              fVar27 = fVar27 * fVar24;
            }
            else {
              fVar27 = 0.0;
              fVar28 = 0.0;
            }
            fVar26 = (float)dVar9;
            fVar25 = (float)dVar8;
            fVar23 = (float)dVar7;
            fVar20 = SQRT(fVar26 * fVar26 + fVar23 * fVar23 + fVar25 * fVar25);
            fVar22 = 1.0 / fVar20;
            if (0.0 < fVar20) {
              fVar26 = fVar26 * fVar22;
              fVar25 = fVar25 * fVar22;
            }
            else {
              fVar26 = 0.0;
              fVar25 = 0.0;
            }
            lVar15 = plVar4[1] + (ulonglong)uVar14 * 0xc;
            *(uint *)(lVar13 + -8 + lVar15) = -(uint)(0.0 < fVar20) & (uint)(fVar22 * fVar23);
            *(float *)(lVar13 + -4 + lVar15) = fVar25;
            *(float *)(lVar13 + lVar15) = fVar26;
            lVar15 = plVar4[3] + (ulonglong)uVar14 * 0xc;
            *(uint *)(lVar13 + -8 + lVar15) = -(uint)(0.0 < fVar19) & (uint)(fVar24 * fVar18);
            *(float *)(lVar13 + -4 + lVar15) = fVar27;
            *(float *)(lVar13 + lVar15) = fVar28;
            lVar13 = lVar13 + 0xc;
          } while (lVar13 != 0x2c);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5987a FUN_146c5987a body=658 status=ok
// SIG undefined FUN_146c5987a(void)

void FUN_146c5987a(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 *local_120;
  char *local_118;
  char local_101;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((-1 < (int)param_2) &&
     (lVar5 = *(longlong *)*param_1,
     (int)param_2 < *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144))) {
    uVar9 = (ulonglong)(param_2 & 0x1ff);
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar5 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                            uVar9 * 2) - 1U) < 0xfffe) &&
       (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(*(longlong *)param_1[1] + 0x78) +
                       (ulonglong)(param_2 * 3 >> 9) * 8) + (ulonglong)(param_2 * 3 & 0x1ff) * 4)))
    {
      lVar6 = *(longlong *)(lVar5 + 0x10);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      uVar3 = *(uint *)(lVar5 + uVar9 * 0xc);
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_88 = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
      puVar10 = (undefined8 *)(lVar7 + uVar11 * 0x18);
      local_98 = *puVar10;
      uStack_90 = puVar10[1];
      uVar3 = *(uint *)(lVar5 + 4 + uVar9 * 0xc);
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_70 = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
      puVar10 = (undefined8 *)(lVar7 + uVar11 * 0x18);
      local_80 = *puVar10;
      uStack_78 = puVar10[1];
      uVar3 = *(uint *)(lVar5 + 8 + uVar9 * 0xc);
      lVar5 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar9 = (ulonglong)uVar3 & 0x1ff;
      local_58 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
      puVar1 = (undefined4 *)(lVar5 + uVar9 * 0x18);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_128 = (undefined8 *)local_a8;
      FUN_146c35244(*(longlong *)param_1[1],param_2,local_b8,local_b0);
      local_118 = &local_101;
      local_120 = local_100;
      puVar12 = &local_f8;
      local_128 = puVar12;
      FUN_142974fb9(&local_98,local_b8,&local_d0,&local_e8);
      lVar5 = *(longlong *)param_1[2];
      lVar6 = (ulonglong)param_2 * 0x18;
      *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_c0;
      puVar10 = (undefined8 *)(lVar5 + lVar6);
      *puVar10 = local_d0;
      puVar10[1] = uStack_c8;
      lVar5 = *(longlong *)param_1[3];
      *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_d8;
      puVar10 = (undefined8 *)(lVar5 + lVar6);
      *puVar10 = local_e8;
      puVar10[1] = uStack_e0;
      puVar10 = &local_f0;
      if (local_101 == '\0') {
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        uVar13 = (undefined4)DAT_14c8464f0;
        uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        puVar10 = &DAT_14c8464e8;
        puVar12 = &DAT_14c8464e0;
      }
      uVar2 = *puVar10;
      lVar5 = *(longlong *)param_1[4];
      *(undefined8 *)(lVar5 + lVar6) = *puVar12;
      *(undefined8 *)(lVar5 + 8 + lVar6) = uVar2;
      *(ulonglong *)(lVar5 + 0x10 + lVar6) = CONCAT44(uVar14,uVar13);
      if (local_101 == '\x01') {
        EnterCriticalSection((LPCRITICAL_SECTION)param_1[5]);
        plVar8 = (longlong *)param_1[6];
        iVar4 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
          FUN_1446f48e2(plVar8,iVar4);
        }
        *(uint *)(*plVar8 + (longlong)iVar4 * 4) = param_2;
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1[5]);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c59b16 FUN_146c59b16 body=1817 status=ok
// SIG undefined FUN_146c59b16(void)

void FUN_146c59b16(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  double *pdVar13;
  undefined1 *puVar14;
  double *pdVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined1 auStack_458 [40];
  longlong *local_430;
  int *local_428;
  float local_420 [3];
  int local_414 [3];
  double local_408;
  longlong *local_400;
  uint *local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined1 *local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  longlong local_3a8;
  int **local_3a0;
  undefined1 *local_398;
  double *local_390;
  int *local_388;
  undefined8 uStack_380;
  uint local_374;
  undefined1 local_370 [192];
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [192];
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [192];
  undefined1 *local_110;
  undefined8 local_108;
  undefined1 local_100 [96];
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_374 = (uint)param_2;
  if (-1 < (int)local_374) {
    plVar3 = (longlong *)*param_1;
    lVar6 = *plVar3;
    if (((int)local_374 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar6 + 0x28) + (param_2 >> 9 & 0x7fffff) * 8) +
                           (ulonglong)(local_374 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      local_3c8 = local_100;
      local_a0 = 0;
      local_98 = 0x800000000;
      local_110 = (undefined1 *)0x0;
      local_108 = 0x800000000;
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = 0x800000000;
      local_2b0 = (undefined1 *)0x0;
      local_2a8 = 0x800000000;
      local_3a0 = &local_388;
      local_388 = (int *)0x0;
      uStack_380 = 0;
      local_408 = (double)param_1[1];
      local_390 = &local_408;
      local_3f8 = &local_374;
      local_3f0 = param_1[2];
      local_3e8 = param_1[3];
      local_3e0 = param_1[4];
      local_3d8 = param_1[5];
      local_3d0 = param_1[6];
      local_3a8 = param_1[7];
      local_398 = &LAB_146c5a230;
      local_430 = param_1;
      local_400 = plVar3;
      local_3c0 = local_1d0;
      local_3b8 = local_2a0;
      local_3b0 = local_370;
      FUN_146c03fd0();
      lVar6 = (longlong)(int)local_108;
      if (0 < lVar6) {
        lVar7 = 0;
        do {
          puVar8 = local_110;
          if (local_110 == (undefined1 *)0x0) {
            puVar8 = local_1d0;
          }
          dVar19 = *(double *)(puVar8 + lVar7);
          dVar20 = *(double *)(puVar8 + lVar7 + 8);
          dVar1 = *(double *)(puVar8 + lVar7 + 0x10);
          dVar23 = SQRT(dVar1 * dVar1 + dVar19 * dVar19 + dVar20 * dVar20);
          dVar4 = 1.0 / dVar23;
          if (0.0 < dVar23) {
            dVar19 = dVar19 * dVar4;
            dVar20 = dVar20 * dVar4;
          }
          else {
            dVar19 = 0.0;
            dVar20 = 0.0;
          }
          *(double *)(puVar8 + lVar7) = dVar19;
          *(double *)(puVar8 + lVar7 + 8) = dVar20;
          *(ulonglong *)(puVar8 + lVar7 + 0x10) =
               -(ulonglong)(0.0 < dVar23) & (ulonglong)(dVar1 * dVar4);
          puVar8 = local_1e0;
          if (local_1e0 == (undefined1 *)0x0) {
            puVar8 = local_2a0;
          }
          dVar19 = *(double *)(puVar8 + lVar7);
          dVar20 = *(double *)(puVar8 + lVar7 + 8);
          dVar1 = *(double *)(puVar8 + lVar7 + 0x10);
          dVar23 = SQRT(dVar1 * dVar1 + dVar19 * dVar19 + dVar20 * dVar20);
          dVar4 = 1.0 / dVar23;
          if (0.0 < dVar23) {
            dVar19 = dVar19 * dVar4;
            dVar20 = dVar20 * dVar4;
          }
          else {
            dVar19 = 0.0;
            dVar20 = 0.0;
          }
          *(double *)(puVar8 + lVar7) = dVar19;
          *(double *)(puVar8 + lVar7 + 8) = dVar20;
          *(ulonglong *)(puVar8 + lVar7 + 0x10) =
               -(ulonglong)(0.0 < dVar23) & (ulonglong)(dVar1 * dVar4);
          puVar8 = local_2b0;
          if (local_2b0 == (undefined1 *)0x0) {
            puVar8 = local_370;
          }
          if (0.0 < *(double *)(puVar8 + lVar7 + 0x10)) {
            *(double *)(puVar8 + lVar7) =
                 *(double *)(puVar8 + lVar7) / *(double *)(puVar8 + lVar7 + 0x10);
            puVar8 = local_2b0;
            if (local_2b0 == (undefined1 *)0x0) {
              puVar8 = local_370;
            }
            *(double *)(puVar8 + lVar7 + 8) =
                 *(double *)(puVar8 + lVar7 + 8) / *(double *)(puVar8 + lVar7 + 0x10);
          }
          lVar7 = lVar7 + 0x18;
        } while (lVar6 * 0x18 != lVar7);
      }
      if ((longlong)(int)uStack_380 != 0) {
        local_428 = local_388 + (longlong)(int)uStack_380 * 3;
        piVar11 = local_388;
        do {
          puVar8 = local_110;
          if (local_110 == (undefined1 *)0x0) {
            puVar8 = local_1d0;
          }
          lVar6 = (longlong)piVar11[2] * 0x18;
          fVar16 = (float)*(double *)(puVar8 + lVar6 + 0x10);
          fVar17 = (float)*(double *)(puVar8 + lVar6 + 8);
          fVar18 = (float)*(double *)(puVar8 + lVar6);
          puVar14 = local_1e0;
          if (local_1e0 == (undefined1 *)0x0) {
            puVar14 = local_2a0;
          }
          fVar21 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17);
          fVar22 = 1.0 / fVar21;
          if (0.0 < fVar21) {
            fVar16 = fVar16 * fVar22;
            fVar17 = fVar17 * fVar22;
          }
          else {
            fVar17 = 0.0;
            fVar16 = 0.0;
          }
          iVar2 = piVar11[1];
          uVar5 = (longlong)*piVar11 * 3;
          lVar9 = uVar5 + (longlong)iVar2;
          lVar7 = plVar3[1];
          *(uint *)(lVar7 + lVar9 * 0xc) = -(uint)(0.0 < fVar21) & (uint)(fVar22 * fVar18);
          *(float *)(lVar7 + 4 + lVar9 * 0xc) = fVar17;
          *(float *)(lVar7 + 8 + lVar9 * 0xc) = fVar16;
          uVar12 = (uint)uVar5;
          lVar7 = *(longlong *)(*(longlong *)local_430[3] + 0x78);
          local_414[0] = *(int *)(*(longlong *)(lVar7 + (uVar5 >> 9 & 0x7fffff) * 8) +
                                 (ulonglong)(uVar12 & 0x1ff) * 4);
          local_414[1] = *(undefined4 *)
                          (*(longlong *)(lVar7 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                          (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
          local_414[2] = *(undefined4 *)
                          (*(longlong *)(lVar7 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                          (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
          if (local_414[0] < 0) {
            FUN_146c13dec(*plVar3,&local_408);
          }
          else {
            iVar2 = local_414[iVar2];
            lVar7 = *(longlong *)(*(longlong *)local_430[3] + 0x48);
            lVar10 = 0;
            do {
              uVar12 = iVar2 * 3 + (int)lVar10;
              local_420[lVar10] =
                   *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar12 >> 9) * 8) +
                             (ulonglong)(uVar12 & 0x1ff) * 4);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 3);
            local_408 = (double)local_420[0];
            local_400 = (longlong *)(double)local_420[1];
            local_3f8 = (uint *)(double)local_420[2];
          }
          pdVar13 = (double *)(puVar8 + lVar6);
          pdVar15 = (double *)(puVar14 + lVar6);
          dVar19 = *pdVar13;
          dVar20 = pdVar13[1];
          dVar1 = pdVar13[2];
          dVar4 = *(double *)
                   (&DAT_149931170 +
                   (ulonglong)
                   ((*pdVar15 * (double)local_400 - local_408 * pdVar15[1]) * dVar1 +
                    (pdVar15[1] * (double)local_3f8 - (double)local_400 * pdVar15[2]) * dVar19 +
                    (pdVar15[2] * local_408 - (double)local_3f8 * *pdVar15) * dVar20 < 0.0) * 8);
          fVar17 = (float)((local_408 * dVar20 - dVar19 * (double)local_400) * dVar4);
          fVar18 = (float)(((double)local_3f8 * dVar19 - dVar1 * local_408) * dVar4);
          fVar16 = (float)(((double)local_400 * dVar1 - dVar20 * (double)local_3f8) * dVar4);
          fVar21 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18);
          fVar22 = 1.0 / fVar21;
          if (0.0 < fVar21) {
            fVar17 = fVar17 * fVar22;
            fVar18 = fVar18 * fVar22;
          }
          else {
            fVar17 = 0.0;
            fVar18 = 0.0;
          }
          lVar6 = plVar3[3];
          *(uint *)(lVar6 + lVar9 * 0xc) = -(uint)(0.0 < fVar21) & (uint)(fVar22 * fVar16);
          *(float *)(lVar6 + 4 + lVar9 * 0xc) = fVar18;
          *(float *)(lVar6 + 8 + lVar9 * 0xc) = fVar17;
          piVar11 = piVar11 + 3;
        } while (piVar11 != local_428);
      }
      if (local_388 != (int *)0x0) {
        FUN_1400020a8(local_388);
      }
      if (local_2b0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5a238 FUN_146c5a238 body=3400 status=ok
// SIG undefined FUN_146c5a238(void)

void FUN_146c5a238(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  double dVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  double *pdVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_1e8 [36];
  int local_1c4;
  double local_1c0;
  double local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  double adStack_130 [4];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1a8 = (longlong *)param_1[1];
  lVar29 = *(longlong *)*param_1;
  uVar20 = (uint)param_2;
  lVar16 = (longlong)(int)uVar20;
  uVar14 = param_2 >> 9 & 0x7fffff;
  lVar26 = *(longlong *)(*(longlong *)(*local_1a8 + 0x130) + uVar14 * 8);
  uVar11 = (ulonglong)(uVar20 & 0x1ff);
  local_1a0 = (double)(uVar11 * 3);
  iVar18 = *(int *)param_1[2];
  iVar17 = 0;
  if ((*(int *)(lVar26 + uVar11 * 0xc) != iVar18) &&
     (iVar17 = 1, *(int *)(lVar26 + uVar11 * 0xc + 4) != iVar18)) {
    iVar17 = (uint)(*(int *)(lVar26 + 8 + uVar11 * 0xc) == iVar18) * 3 + -1;
  }
  dVar2 = *(double *)(lVar29 + lVar16 * 0x18);
  dVar3 = *(double *)(lVar29 + 8 + lVar16 * 0x18);
  uVar4 = *(undefined8 *)(lVar29 + 0x10 + lVar16 * 0x18);
  uVar47 = (undefined4)uVar4;
  uVar48 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar27 = uVar20 * 3 + 2;
  lVar29 = *(longlong *)(*(longlong *)param_1[3] + 0x78);
  uVar21 = (ulonglong)(uVar27 >> 9);
  uVar28 = (ulonglong)((uVar27 & 0x1ff) << 2);
  uVar27 = uVar20 * 3 + 1;
  uVar25 = (ulonglong)(uVar27 >> 9);
  uVar23 = (ulonglong)((uVar27 & 0x1ff) << 2);
  uVar19 = (ulonglong)(uVar20 * 3 >> 9);
  uVar11 = (ulonglong)((uVar20 * 3 & 0x1ff) << 2);
  local_148._4_4_ = *(undefined4 *)(*(longlong *)(lVar29 + uVar19 * 8) + uVar11);
  local_140 = *(undefined4 *)(*(longlong *)(lVar29 + uVar25 * 8) + uVar23);
  local_13c = *(undefined4 *)(*(longlong *)(lVar29 + uVar21 * 8) + uVar28);
  lVar26 = (longlong)iVar17;
  iVar18 = *(int *)((longlong)&local_148 + lVar26 * 4 + 4);
  lVar29 = *(longlong *)(*(longlong *)param_1[4] + 0x78);
  local_150._0_4_ = *(int *)(*(longlong *)(lVar29 + uVar19 * 8) + uVar11);
  local_150._4_4_ = *(undefined4 *)(*(longlong *)(lVar29 + uVar25 * 8) + uVar23);
  local_148._0_4_ = *(undefined4 *)(*(longlong *)(lVar29 + uVar21 * 8) + uVar28);
  iVar7 = *(int *)((longlong)&local_150 + lVar26 * 4);
  local_1c4 = iVar17;
  local_1b0 = param_2;
  if ((int)local_150 < 0) {
    FUN_146c13dec(*local_1a8,&local_168,param_2);
  }
  else {
    lVar29 = *(longlong *)(*(longlong *)param_1[4] + 0x48);
    lVar13 = 0;
    do {
      uVar20 = iVar7 * 3 + (int)lVar13;
      *(undefined4 *)((longlong)&local_138 + lVar13 * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4)
      ;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_158 = (double)adStack_130[0]._0_4_;
    local_160 = (double)local_138._4_4_;
    local_168 = (double)(float)local_138;
  }
  lVar29 = *(longlong *)param_1[5];
  lVar16 = lVar16 * 0x18;
  dVar5 = *(double *)(lVar29 + 8 + lVar16);
  dVar6 = *(double *)(lVar29 + 0x10 + lVar16);
  dVar36 = dVar6 * local_158 + *(double *)(lVar29 + lVar16) * local_168 + local_160 * dVar5;
  dVar6 = dVar6 - local_158 * dVar36;
  dVar5 = dVar5 - local_160 * dVar36;
  dVar35 = *(double *)(lVar29 + lVar16) - dVar36 * local_168;
  dVar39 = SQRT(dVar6 * dVar6 + dVar35 * dVar35 + dVar5 * dVar5);
  dVar36 = 0.0;
  uVar43 = 0;
  uVar44 = 0x3ff00000;
  dVar37 = 1.0 / dVar39;
  if (0.0 < dVar39) {
    dVar6 = dVar6 * dVar37;
    dVar5 = dVar5 * dVar37;
  }
  else {
    dVar5 = 0.0;
    dVar6 = 0.0;
  }
  dVar31 = (double)(-(ulonglong)(0.0 < dVar39) & (ulonglong)(dVar35 * dVar37));
  uVar45 = 0;
  uVar46 = 0;
  lVar29 = *(longlong *)param_1[6];
  dVar35 = *(double *)(lVar29 + 8 + lVar16);
  dVar37 = *(double *)(lVar29 + 0x10 + lVar16);
  dVar39 = dVar37 * local_158 + *(double *)(lVar29 + lVar16) * local_168 + local_160 * dVar35;
  dVar37 = dVar37 - local_158 * dVar39;
  dVar35 = dVar35 - local_160 * dVar39;
  dVar39 = *(double *)(lVar29 + lVar16) - dVar39 * local_168;
  dVar32 = SQRT(dVar37 * dVar37 + dVar39 * dVar39 + dVar35 * dVar35);
  dVar30 = 1.0 / dVar32;
  dVar39 = (double)(-(ulonglong)(0.0 < dVar32) & (ulonglong)(dVar39 * dVar30));
  if (0.0 < dVar32) {
    dVar37 = dVar37 * dVar30;
    dVar36 = dVar35 * dVar30;
  }
  else {
    dVar37 = 0.0;
  }
  if (*(char *)(param_1[7] + 1) == '\x01') {
    local_188._8_8_ = 0;
    local_188._0_8_ = dVar31;
    local_198._8_8_ = 0;
    local_198._0_8_ = dVar39;
    lVar29 = *(longlong *)(*local_1a8 + 0x10);
    lVar16 = *(longlong *)(*(longlong *)(*local_1a8 + 0x130) + uVar14 * 8);
    uVar20 = *(uint *)(lVar16 + (longlong)local_1a0 * 4);
    lVar13 = *(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8);
    uVar14 = (ulonglong)uVar20 & 0x1ff;
    adStack_130[1] = (double)*(undefined8 *)(lVar13 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar13 + uVar14 * 0x18);
    local_138 = *puVar1;
    adStack_130[0] = (double)puVar1[1];
    uVar20 = *(uint *)(lVar16 + 4 + (longlong)local_1a0 * 4);
    lVar13 = *(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8);
    uVar14 = (ulonglong)uVar20 & 0x1ff;
    local_110 = *(undefined8 *)(lVar13 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar13 + uVar14 * 0x18);
    adStack_130[2] = (double)*puVar1;
    adStack_130[3] = (double)puVar1[1];
    uVar20 = *(uint *)(lVar16 + 8 + (longlong)local_1a0 * 4);
    lVar29 = *(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8);
    uVar14 = (ulonglong)uVar20 & 0x1ff;
    local_f8 = *(undefined8 *)(lVar29 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar29 + uVar14 * 0x18);
    local_108 = *puVar1;
    uStack_100 = puVar1[1];
    uVar14 = (ulonglong)(((iVar17 + 1U) / 3) * -3 + iVar17 + 1);
    uVar11 = (ulonglong)(((iVar17 + 2U) / 3) * -3 + iVar17 + 2);
    dVar30 = adStack_130[uVar11 * 3 + 1] - adStack_130[lVar26 * 3 + 1];
    dVar32 = adStack_130[uVar11 * 3] - adStack_130[lVar26 * 3];
    dVar35 = (double)(&local_138)[uVar11 * 3] - (double)(&local_138)[lVar26 * 3];
    dVar31 = SQRT(dVar30 * dVar30 + dVar35 * dVar35 + dVar32 * dVar32);
    dVar40 = 1.0 / dVar31;
    if (0.0 < dVar31) {
      dVar32 = dVar32 * dVar40;
    }
    else {
      dVar32 = 0.0;
    }
    dVar33 = adStack_130[uVar14 * 3 + 1] - adStack_130[lVar26 * 3 + 1];
    dVar42 = adStack_130[uVar14 * 3] - adStack_130[lVar26 * 3];
    dVar34 = (double)(&local_138)[uVar14 * 3] - (double)(&local_138)[lVar26 * 3];
    if (0.0 < dVar31) {
      dVar30 = dVar30 * dVar40;
    }
    else {
      dVar30 = 0.0;
    }
    dVar10 = SQRT(dVar33 * dVar33 + dVar34 * dVar34 + dVar42 * dVar42);
    dVar41 = 1.0 / dVar10;
    if (0.0 < dVar10) {
      dVar33 = dVar33 * dVar41;
      dVar42 = dVar42 * dVar41;
    }
    else {
      dVar33 = 0.0;
      dVar42 = 0.0;
    }
    dVar31 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar34 * dVar41)) *
             (double)(-(ulonglong)(0.0 < dVar31) & (ulonglong)(dVar35 * dVar40)) + dVar42 * dVar32 +
             dVar33 * dVar30;
    dVar35 = 1.0;
    if (dVar31 <= 1.0) {
      dVar35 = dVar31;
    }
    local_1c0 = dVar2;
    local_1b8 = dVar3;
    local_178 = uVar4;
    local_170 = dVar36;
    dVar35 = acos((double)(-(ulonglong)(dVar31 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar31 < -1.0) & (ulonglong)dVar35));
    uVar43 = SUB84(dVar35,0);
    uVar44 = (undefined4)((ulonglong)dVar35 >> 0x20);
    uVar45 = local_188._8_4_;
    uVar46 = local_188._12_4_;
    dVar31 = local_188._0_8_ * dVar35;
    dVar5 = dVar5 * dVar35;
    dVar6 = dVar6 * dVar35;
    dVar39 = dVar39 * dVar35;
    dVar36 = local_170 * dVar35;
    dVar37 = dVar37 * dVar35;
    dVar2 = dVar2 * dVar35;
    dVar3 = dVar3 * dVar35;
    uVar47 = (undefined4)local_178;
    uVar48 = (undefined4)((ulonglong)local_178 >> 0x20);
  }
  iVar17 = (uint)(0.0 < (double)CONCAT44(uVar48,uVar47) || (double)CONCAT44(uVar48,uVar47) == 0.0) *
           2 + -1;
  lVar29 = param_1[8];
  lVar26 = *(longlong *)(lVar29 + 0x60);
  lVar16 = lVar26;
  if (lVar26 == 0) {
    lVar16 = lVar29;
  }
  iVar8 = *(int *)(lVar29 + 0x68);
  lVar13 = (longlong)iVar8;
  if (lVar13 != 0) {
    lVar15 = 0;
    do {
      if (((*(int *)(lVar16 + lVar15) == iVar18) && (*(int *)(lVar16 + 4 + lVar15) == iVar7)) &&
         (*(int *)(lVar16 + 8 + lVar15) == iVar17)) {
        iVar12 = (int)(lVar15 >> 2) * -0x55555555;
        if (iVar12 != -1) {
          local_188._8_4_ = uVar45;
          local_188._0_8_ = dVar31;
          local_188._12_4_ = uVar46;
          local_198._8_8_ = 0;
          local_198._0_8_ = dVar39;
          lVar16 = *(longlong *)(param_1[9] + 0xc0);
          if (lVar16 == 0) {
            lVar16 = param_1[9];
          }
          lVar15 = (longlong)iVar12 * 0x18;
          dVar35 = *(double *)(lVar16 + lVar15);
          local_1a0 = *(double *)(lVar16 + 8 + lVar15);
          local_1a8 = *(longlong **)(lVar16 + 0x10 + lVar15);
          dVar32 = SQRT((double)local_1a8 * (double)local_1a8 +
                        dVar35 * dVar35 + local_1a0 * local_1a0);
          dVar30 = 1.0 / dVar32;
          if (0.0 < dVar32) {
            dVar42 = (double)local_1a8 * dVar30;
            dVar40 = dVar30 * local_1a0;
          }
          else {
            dVar42 = 0.0;
            dVar40 = 0.0;
          }
          lVar24 = *(longlong *)(param_1[10] + 0xc0);
          if (lVar24 == 0) {
            lVar24 = param_1[10];
          }
          dVar33 = *(double *)(lVar24 + lVar15);
          dVar34 = *(double *)(lVar24 + 8 + lVar15);
          dVar10 = *(double *)(lVar24 + 0x10 + lVar15);
          dVar41 = SQRT(dVar10 * dVar10 + dVar33 * dVar33 + dVar34 * dVar34);
          dVar38 = 1.0 / dVar41;
          if (0.0 < dVar41) {
            dVar10 = dVar10 * dVar38;
            dVar34 = dVar34 * dVar38;
          }
          else {
            dVar10 = 0.0;
            dVar34 = 0.0;
          }
          local_1c0 = dVar2;
          local_1b8 = dVar3;
          if ((*(double *)param_1[0xc] <
               dVar42 * dVar6 +
               (double)(-(ulonglong)(0.0 < dVar32) & (ulonglong)(dVar35 * dVar30)) * dVar31 +
               dVar40 * dVar5) &&
             (*(double *)param_1[0xc] <
              dVar10 * dVar37 +
              (double)(-(ulonglong)(0.0 < dVar41) & (ulonglong)(dVar33 * dVar38)) * dVar39 +
              dVar34 * dVar36)) {
            pdVar22 = (double *)(lVar16 + lVar15);
            *pdVar22 = dVar31 + dVar35;
            pdVar22[1] = dVar5 + local_1a0;
            pdVar22[2] = dVar6 + (double)local_1a8;
            lVar29 = *(longlong *)(param_1[10] + 0xc0);
            if (lVar29 == 0) {
              lVar29 = param_1[10];
            }
            *(double *)(lVar29 + lVar15) = dVar39 + *(double *)(lVar29 + lVar15);
            *(double *)(lVar29 + 8 + lVar15) = dVar36 + *(double *)(lVar29 + 8 + lVar15);
            *(double *)(lVar29 + 0x10 + lVar15) = dVar37 + *(double *)(lVar29 + 0x10 + lVar15);
            lVar29 = *(longlong *)(param_1[0xb] + 0xc0);
            if (lVar29 == 0) {
              lVar29 = param_1[0xb];
            }
            *(double *)(lVar29 + lVar15) = dVar2 + *(double *)(lVar29 + lVar15);
            *(double *)(lVar29 + 8 + lVar15) = dVar3 + *(double *)(lVar29 + 8 + lVar15);
            *(double *)(lVar29 + 0x10 + lVar15) =
                 (double)CONCAT44(uVar44,uVar43) + *(double *)(lVar29 + 0x10 + lVar15);
            uVar47 = (undefined4)local_1b0;
            iVar18 = local_1c4;
            goto LAB_146c5aa69;
          }
          *(uint *)(lVar29 + 0x68) = iVar8 + 1U;
          if (*(uint *)(lVar29 + 0x6c) < iVar8 + 1U) {
            FUN_146c5af82(lVar29,iVar8);
            lVar26 = *(longlong *)(lVar29 + 0x60);
          }
          if (lVar26 != 0) {
            lVar29 = lVar26;
          }
          *(int *)(lVar29 + lVar13 * 0xc) = iVar18;
          *(int *)(lVar29 + 4 + lVar13 * 0xc) = iVar7;
          *(int *)(lVar29 + 8 + lVar13 * 0xc) = iVar17;
          lVar29 = param_1[9];
          iVar18 = *(int *)(lVar29 + 200);
          lVar26 = (longlong)iVar18;
          *(uint *)(lVar29 + 200) = iVar18 + 1U;
          uVar4 = local_188._0_8_;
          if (*(uint *)(lVar29 + 0xcc) < iVar18 + 1U) {
            FUN_146c5b08e(lVar29,iVar18);
          }
          dVar3 = local_1b8;
          dVar2 = local_1c0;
          iVar18 = local_1c4;
          lVar16 = *(longlong *)(lVar29 + 0xc0);
          if (*(longlong *)(lVar29 + 0xc0) == 0) {
            lVar16 = lVar29;
          }
          *(undefined8 *)(lVar16 + lVar26 * 0x18) = uVar4;
          *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar5;
          *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar6;
          lVar29 = param_1[10];
          iVar17 = *(int *)(lVar29 + 200);
          lVar26 = (longlong)iVar17;
          *(uint *)(lVar29 + 200) = iVar17 + 1U;
          uVar47 = (undefined4)local_1b0;
          if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
            FUN_146c5b08e(lVar29,iVar17);
          }
          lVar16 = *(longlong *)(lVar29 + 0xc0);
          if (*(longlong *)(lVar29 + 0xc0) == 0) {
            lVar16 = lVar29;
          }
          *(undefined8 *)(lVar16 + lVar26 * 0x18) = local_198._0_8_;
          *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar36;
          *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar37;
          lVar29 = param_1[0xb];
          iVar17 = *(int *)(lVar29 + 200);
          lVar26 = (longlong)iVar17;
          *(uint *)(lVar29 + 200) = iVar17 + 1U;
          if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
            FUN_146c5b08e(lVar29,iVar17);
          }
          lVar16 = *(longlong *)(lVar29 + 0xc0);
          if (*(longlong *)(lVar29 + 0xc0) == 0) {
            lVar16 = lVar29;
          }
          *(double *)(lVar16 + lVar26 * 0x18) = dVar2;
          *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar3;
          goto LAB_146c5aa63;
        }
        break;
      }
      lVar15 = lVar15 + 0xc;
    } while (lVar13 * 0xc != lVar15);
  }
  *(uint *)(lVar29 + 0x68) = iVar8 + 1U;
  if (*(uint *)(lVar29 + 0x6c) < iVar8 + 1U) {
    FUN_146c5af82(lVar29,iVar8);
    lVar26 = *(longlong *)(lVar29 + 0x60);
  }
  if (lVar26 != 0) {
    lVar29 = lVar26;
  }
  *(int *)(lVar29 + lVar13 * 0xc) = iVar18;
  *(int *)(lVar29 + 4 + lVar13 * 0xc) = iVar7;
  *(int *)(lVar29 + 8 + lVar13 * 0xc) = iVar17;
  lVar29 = param_1[9];
  iVar18 = *(int *)(lVar29 + 200);
  lVar26 = (longlong)iVar18;
  *(uint *)(lVar29 + 200) = iVar18 + 1U;
  if (*(uint *)(lVar29 + 0xcc) < iVar18 + 1U) {
    FUN_146c5b08e(lVar29,iVar18);
  }
  iVar18 = local_1c4;
  lVar16 = *(longlong *)(lVar29 + 0xc0);
  if (*(longlong *)(lVar29 + 0xc0) == 0) {
    lVar16 = lVar29;
  }
  *(double *)(lVar16 + lVar26 * 0x18) = dVar31;
  *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar5;
  *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar6;
  lVar29 = param_1[10];
  iVar17 = *(int *)(lVar29 + 200);
  lVar26 = (longlong)iVar17;
  *(uint *)(lVar29 + 200) = iVar17 + 1U;
  uVar47 = (undefined4)local_1b0;
  if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
    FUN_146c5b08e(lVar29,iVar17);
  }
  lVar16 = *(longlong *)(lVar29 + 0xc0);
  if (*(longlong *)(lVar29 + 0xc0) == 0) {
    lVar16 = lVar29;
  }
  *(double *)(lVar16 + lVar26 * 0x18) = dVar39;
  *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar36;
  *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar37;
  lVar29 = param_1[0xb];
  iVar17 = *(int *)(lVar29 + 200);
  lVar26 = (longlong)iVar17;
  *(uint *)(lVar29 + 200) = iVar17 + 1U;
  if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
    FUN_146c5b08e(lVar29,iVar17);
  }
  lVar16 = *(longlong *)(lVar29 + 0xc0);
  if (*(longlong *)(lVar29 + 0xc0) == 0) {
    lVar16 = lVar29;
  }
  *(double *)(lVar16 + lVar26 * 0x18) = dVar2;
  *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar3;
LAB_146c5aa63:
  *(ulonglong *)(lVar16 + 0x10 + lVar26 * 0x18) = CONCAT44(uVar44,uVar43);
  iVar12 = iVar8;
LAB_146c5aa69:
  plVar9 = (longlong *)param_1[0xd];
  iVar17 = (int)plVar9[1];
  lVar29 = (longlong)iVar17;
  *(uint *)(plVar9 + 1) = iVar17 + 1U;
  if (*(uint *)((longlong)plVar9 + 0xc) < iVar17 + 1U) {
    FUN_146bd78c8(plVar9,iVar17);
  }
  lVar26 = *plVar9;
  *(undefined4 *)(lVar26 + lVar29 * 0xc) = uVar47;
  *(int *)(lVar26 + 4 + lVar29 * 0xc) = iVar18;
  *(int *)(lVar26 + 8 + lVar29 * 0xc) = iVar12;
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5af82 FUN_146c5af82 body=127 status=ok
// SIG undefined FUN_146c5af82(void)

void FUN_146c5af82(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_146c5b002(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146c5b002 FUN_146c5b002 body=140 status=ok
// SIG undefined FUN_146c5b002(void)

void FUN_146c5b002(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0xc);
  return;
}



// FUNCTION 146c5b08e FUN_146c5b08e body=142 status=ok
// SIG undefined FUN_146c5b08e(void)

void FUN_146c5b08e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_146c5b11e(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146c5b11e FUN_146c5b11e body=150 status=ok
// SIG undefined FUN_146c5b11e(void)

void FUN_146c5b11e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146c5b1c2 FUN_146c5b1c2 body=258 status=ok
// SIG undefined FUN_146c5b1c2(void)

undefined8 FUN_146c5b1c2(longlong *param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar5 = (ulonglong)(param_3 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_4 >> 9) * 8);
  uVar7 = (ulonglong)(param_4 & 0x1ff);
  iVar2 = 0;
  iVar6 = 0;
  if ((*(int *)(lVar1 + uVar5 * 0xc) != param_2) &&
     (iVar6 = 1, *(int *)(lVar1 + uVar5 * 0xc + 4) != param_2)) {
    iVar6 = (uint)(*(int *)(lVar1 + 8 + uVar5 * 0xc) == param_2) * 3 + -1;
  }
  if ((*(int *)(lVar3 + uVar7 * 0xc) != param_2) &&
     (iVar2 = 1, *(int *)(lVar3 + 4 + uVar7 * 0xc) != param_2)) {
    iVar2 = (uint)(*(int *)(lVar3 + 8 + uVar7 * 0xc) == param_2) * 3 + -1;
  }
  lVar1 = *(longlong *)param_1[1];
  lVar4 = (longlong)(int)(iVar6 + param_3 * 3);
  lVar3 = (longlong)(int)(param_4 * 3 + iVar2);
  dVar8 = *(double *)(lVar1 + lVar3 * 0x18) - *(double *)(lVar1 + lVar4 * 0x18);
  dVar9 = *(double *)(lVar1 + 8 + lVar3 * 0x18) - *(double *)(lVar1 + 8 + lVar4 * 0x18);
  dVar10 = *(double *)(lVar1 + 0x10 + lVar3 * 0x18) - *(double *)(lVar1 + 0x10 + lVar4 * 0x18);
  return CONCAT71((int7)((ulonglong)(lVar3 * 3) >> 8),
                  dVar10 * dVar10 + dVar8 * dVar8 + dVar9 * dVar9 < 1e-08);
}



// FUNCTION 146c5b2cc FUN_146c5b2cc body=1498 status=ok
// SIG undefined FUN_146c5b2cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c5b2cc(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined1 local_1c1;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  float local_178 [3];
  undefined1 local_16c [12];
  undefined1 local_160 [24];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar13 = (uint)param_2;
  if (-1 < (int)uVar13) {
    plVar4 = (longlong *)*param_1;
    lVar12 = *plVar4;
    if ((int)uVar13 < *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144)) {
      uVar16 = param_2 >> 9 & 0x7fffff;
      uVar15 = (ulonglong)(uVar13 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar12 + 0x148) + uVar16 * 8) + uVar15 * 2
                             ) - 1U) < 0xfffe) {
        uVar13 = uVar13 * 3;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)param_1[1] + 0x78) +
                           (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4)) {
          lVar14 = *(longlong *)(lVar12 + 0x10);
          lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + uVar16 * 8);
          uVar3 = *(uint *)(lVar12 + uVar15 * 0xc);
          lVar5 = *(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8);
          uVar16 = (ulonglong)uVar3 & 0x1ff;
          local_118 = *(undefined8 *)(lVar5 + 0x10 + uVar16 * 0x18);
          puVar1 = (undefined8 *)(lVar5 + uVar16 * 0x18);
          local_128 = *puVar1;
          uStack_120 = puVar1[1];
          uVar3 = *(uint *)(lVar12 + 4 + uVar15 * 0xc);
          lVar5 = *(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8);
          uVar16 = (ulonglong)uVar3 & 0x1ff;
          local_100 = *(undefined8 *)(lVar5 + 0x10 + uVar16 * 0x18);
          puVar1 = (undefined8 *)(lVar5 + uVar16 * 0x18);
          local_110 = *puVar1;
          uStack_108 = puVar1[1];
          uVar3 = *(uint *)(lVar12 + 8 + uVar15 * 0xc);
          lVar12 = *(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8);
          uVar16 = (ulonglong)uVar3 & 0x1ff;
          local_e8 = *(undefined8 *)(lVar12 + 0x10 + uVar16 * 0x18);
          puVar2 = (undefined4 *)(lVar12 + uVar16 * 0x18);
          local_f8 = *puVar2;
          uStack_f4 = puVar2[1];
          uStack_f0 = puVar2[2];
          uStack_ec = puVar2[3];
          local_238 = local_138;
          FUN_146c35244(*(longlong *)param_1[1],param_2 & 0xffffffff,local_148,local_140);
          local_238 = local_160;
          FUN_146c3574a(*(undefined8 *)param_1[2],param_2 & 0xffffffff,local_178,local_16c);
          local_228 = &local_1c1;
          local_230 = local_1c0;
          local_238 = local_1b8;
          FUN_142974fb9(&local_128,local_148,&local_190,&local_1a8);
          uVar16 = DAT_149931e80;
          uStack_210 = DAT_149931e80._8_8_;
          uStack_1f0 = 0;
          local_208._8_4_ = DAT_149931e80._8_4_;
          local_208._0_8_ = (ulonglong)local_198 ^ uVar16;
          local_208._12_4_ = DAT_149931e80._12_4_;
          uStack_1d0 = 0;
          local_218 = (double)((ulonglong)local_1a8 ^ uVar16);
          uStack_1e0 = 0;
          lVar12 = 8;
          do {
            dVar8 = (double)*(float *)((longlong)local_178 + lVar12);
            dVar20 = (double)*(float *)((longlong)local_178 + lVar12 + -4);
            dVar9 = (double)*(float *)((longlong)local_178 + lVar12 + -8);
            dVar17 = local_180 * dVar8 + local_190 * dVar9 + local_188 * dVar20;
            dVar10 = local_180 - dVar17 * dVar8;
            dVar11 = local_188 - dVar17 * dVar20;
            dVar19 = local_190 - dVar17 * dVar9;
            dVar17 = SQRT(dVar10 * dVar10 + dVar19 * dVar19 + dVar11 * dVar11);
            dVar18 = 1.0 / dVar17;
            if (0.0 < dVar17) {
              dVar10 = dVar10 * dVar18;
              dVar11 = dVar11 * dVar18;
            }
            else {
              dVar11 = 0.0;
              dVar10 = 0.0;
            }
            dVar19 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar19 * dVar18));
            dVar17 = *(double *)
                      (&DAT_149931170 +
                      (ulonglong)
                      ((local_1a8 * dVar20 + (double)(uVar16 ^ (ulonglong)local_1a0) * dVar9) *
                       dVar10 + (local_1a0 * dVar8 +
                                (double)((ulonglong)local_198 ^ uVar16) * dVar20) * dVar19 +
                                (local_198 * dVar9 + local_218 * dVar8) * dVar11 < 0.0) * 8);
            dVar18 = (dVar9 * dVar11 - dVar19 * dVar20) * dVar17;
            dVar9 = (dVar8 * dVar19 - dVar10 * dVar9) * dVar17;
            dVar17 = (dVar20 * dVar10 - dVar11 * dVar8) * dVar17;
            dVar20 = SQRT(dVar18 * dVar18 + dVar17 * dVar17 + dVar9 * dVar9);
            dVar8 = 1.0 / dVar20;
            if (0.0 < dVar20) {
              dVar18 = dVar18 * dVar8;
              dVar9 = dVar9 * dVar8;
            }
            else {
              dVar9 = 0.0;
              dVar18 = 0.0;
            }
            dVar7 = SQRT(dVar10 * dVar10 + dVar19 * dVar19 + dVar11 * dVar11);
            dVar6 = 1.0 / dVar7;
            if (0.0 < dVar7) {
              dVar10 = dVar10 * dVar6;
              dVar11 = dVar11 * dVar6;
            }
            else {
              dVar10 = 0.0;
              dVar11 = 0.0;
            }
            lVar14 = plVar4[1] + (ulonglong)uVar13 * 0x18;
            *(ulonglong *)(lVar14 + -0x10 + lVar12 * 2) =
                 -(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar19 * dVar6);
            *(double *)(lVar14 + -8 + lVar12 * 2) = dVar11;
            *(double *)(lVar14 + lVar12 * 2) = dVar10;
            lVar14 = plVar4[3] + (ulonglong)uVar13 * 0x18;
            *(ulonglong *)(lVar14 + -0x10 + lVar12 * 2) =
                 -(ulonglong)(0.0 < dVar20) & (ulonglong)(dVar17 * dVar8);
            *(double *)(lVar14 + -8 + lVar12 * 2) = dVar9;
            *(double *)(lVar14 + lVar12 * 2) = dVar18;
            lVar12 = lVar12 + 0xc;
          } while (lVar12 != 0x2c);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5b8b0 FUN_146c5b8b0 body=658 status=ok
// SIG undefined FUN_146c5b8b0(void)

void FUN_146c5b8b0(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 *local_120;
  char *local_118;
  char local_101;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((-1 < (int)param_2) &&
     (lVar5 = *(longlong *)*param_1,
     (int)param_2 < *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144))) {
    uVar9 = (ulonglong)(param_2 & 0x1ff);
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar5 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                            uVar9 * 2) - 1U) < 0xfffe) &&
       (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(*(longlong *)param_1[1] + 0x78) +
                       (ulonglong)(param_2 * 3 >> 9) * 8) + (ulonglong)(param_2 * 3 & 0x1ff) * 4)))
    {
      lVar6 = *(longlong *)(lVar5 + 0x10);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      uVar3 = *(uint *)(lVar5 + uVar9 * 0xc);
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_88 = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
      puVar10 = (undefined8 *)(lVar7 + uVar11 * 0x18);
      local_98 = *puVar10;
      uStack_90 = puVar10[1];
      uVar3 = *(uint *)(lVar5 + 4 + uVar9 * 0xc);
      lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_70 = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
      puVar10 = (undefined8 *)(lVar7 + uVar11 * 0x18);
      local_80 = *puVar10;
      uStack_78 = puVar10[1];
      uVar3 = *(uint *)(lVar5 + 8 + uVar9 * 0xc);
      lVar5 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
      uVar9 = (ulonglong)uVar3 & 0x1ff;
      local_58 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
      puVar1 = (undefined4 *)(lVar5 + uVar9 * 0x18);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_128 = (undefined8 *)local_a8;
      FUN_146c35244(*(longlong *)param_1[1],param_2,local_b8,local_b0);
      local_118 = &local_101;
      local_120 = local_100;
      puVar12 = &local_f8;
      local_128 = puVar12;
      FUN_142974fb9(&local_98,local_b8,&local_d0,&local_e8);
      lVar5 = *(longlong *)param_1[2];
      lVar6 = (ulonglong)param_2 * 0x18;
      *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_c0;
      puVar10 = (undefined8 *)(lVar5 + lVar6);
      *puVar10 = local_d0;
      puVar10[1] = uStack_c8;
      lVar5 = *(longlong *)param_1[3];
      *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_d8;
      puVar10 = (undefined8 *)(lVar5 + lVar6);
      *puVar10 = local_e8;
      puVar10[1] = uStack_e0;
      puVar10 = &local_f0;
      if (local_101 == '\0') {
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        uVar13 = (undefined4)DAT_14c8464f0;
        uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        puVar10 = &DAT_14c8464e8;
        puVar12 = &DAT_14c8464e0;
      }
      uVar2 = *puVar10;
      lVar5 = *(longlong *)param_1[4];
      *(undefined8 *)(lVar5 + lVar6) = *puVar12;
      *(undefined8 *)(lVar5 + 8 + lVar6) = uVar2;
      *(ulonglong *)(lVar5 + 0x10 + lVar6) = CONCAT44(uVar14,uVar13);
      if (local_101 == '\x01') {
        EnterCriticalSection((LPCRITICAL_SECTION)param_1[5]);
        plVar8 = (longlong *)param_1[6];
        iVar4 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
          FUN_1446f48e2(plVar8,iVar4);
        }
        *(uint *)(*plVar8 + (longlong)iVar4 * 4) = param_2;
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1[5]);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5bb4c FUN_146c5bb4c body=1801 status=ok
// SIG undefined FUN_146c5bb4c(void)

void FUN_146c5bb4c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  double *pdVar11;
  undefined1 *puVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_458 [40];
  longlong *local_430;
  int *local_428;
  float local_420 [3];
  int local_414 [3];
  double local_408;
  longlong *local_400;
  uint *local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined1 *local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  longlong local_3a8;
  int **local_3a0;
  undefined1 *local_398;
  double *local_390;
  int *local_388;
  undefined8 uStack_380;
  uint local_374;
  undefined1 local_370 [192];
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [192];
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [192];
  undefined1 *local_110;
  undefined8 local_108;
  undefined1 local_100 [96];
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_374 = (uint)param_2;
  if (-1 < (int)local_374) {
    plVar2 = (longlong *)*param_1;
    lVar4 = *plVar2;
    if (((int)local_374 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar4 + 0x28) + (param_2 >> 9 & 0x7fffff) * 8) +
                           (ulonglong)(local_374 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      local_3c8 = local_100;
      local_a0 = 0;
      local_98 = 0x800000000;
      local_110 = (undefined1 *)0x0;
      local_108 = 0x800000000;
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = 0x800000000;
      local_2b0 = (undefined1 *)0x0;
      local_2a8 = 0x800000000;
      local_3a0 = &local_388;
      local_388 = (int *)0x0;
      uStack_380 = 0;
      local_408 = (double)param_1[1];
      local_390 = &local_408;
      local_3f8 = &local_374;
      local_3f0 = param_1[2];
      local_3e8 = param_1[3];
      local_3e0 = param_1[4];
      local_3d8 = param_1[5];
      local_3d0 = param_1[6];
      local_3a8 = param_1[7];
      local_398 = &LAB_146c5c256;
      local_430 = param_1;
      local_400 = plVar2;
      local_3c0 = local_1d0;
      local_3b8 = local_2a0;
      local_3b0 = local_370;
      FUN_146c03fd0();
      lVar4 = (longlong)(int)local_108;
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          puVar6 = local_110;
          if (local_110 == (undefined1 *)0x0) {
            puVar6 = local_1d0;
          }
          dVar15 = *(double *)(puVar6 + lVar5);
          dVar16 = *(double *)(puVar6 + lVar5 + 8);
          dVar14 = *(double *)(puVar6 + lVar5 + 0x10);
          dVar19 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16);
          dVar17 = 1.0 / dVar19;
          if (0.0 < dVar19) {
            dVar15 = dVar15 * dVar17;
            dVar16 = dVar16 * dVar17;
          }
          else {
            dVar15 = 0.0;
            dVar16 = 0.0;
          }
          *(double *)(puVar6 + lVar5) = dVar15;
          *(double *)(puVar6 + lVar5 + 8) = dVar16;
          *(ulonglong *)(puVar6 + lVar5 + 0x10) =
               -(ulonglong)(0.0 < dVar19) & (ulonglong)(dVar14 * dVar17);
          puVar6 = local_1e0;
          if (local_1e0 == (undefined1 *)0x0) {
            puVar6 = local_2a0;
          }
          dVar15 = *(double *)(puVar6 + lVar5);
          dVar16 = *(double *)(puVar6 + lVar5 + 8);
          dVar14 = *(double *)(puVar6 + lVar5 + 0x10);
          dVar19 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16);
          dVar17 = 1.0 / dVar19;
          if (0.0 < dVar19) {
            dVar15 = dVar15 * dVar17;
            dVar16 = dVar16 * dVar17;
          }
          else {
            dVar15 = 0.0;
            dVar16 = 0.0;
          }
          *(double *)(puVar6 + lVar5) = dVar15;
          *(double *)(puVar6 + lVar5 + 8) = dVar16;
          *(ulonglong *)(puVar6 + lVar5 + 0x10) =
               -(ulonglong)(0.0 < dVar19) & (ulonglong)(dVar14 * dVar17);
          puVar6 = local_2b0;
          if (local_2b0 == (undefined1 *)0x0) {
            puVar6 = local_370;
          }
          if (0.0 < *(double *)(puVar6 + lVar5 + 0x10)) {
            *(double *)(puVar6 + lVar5) =
                 *(double *)(puVar6 + lVar5) / *(double *)(puVar6 + lVar5 + 0x10);
            puVar6 = local_2b0;
            if (local_2b0 == (undefined1 *)0x0) {
              puVar6 = local_370;
            }
            *(double *)(puVar6 + lVar5 + 8) =
                 *(double *)(puVar6 + lVar5 + 8) / *(double *)(puVar6 + lVar5 + 0x10);
          }
          lVar5 = lVar5 + 0x18;
        } while (lVar4 * 0x18 != lVar5);
      }
      if ((longlong)(int)uStack_380 != 0) {
        local_428 = local_388 + (longlong)(int)uStack_380 * 3;
        piVar9 = local_388;
        do {
          puVar6 = local_110;
          if (local_110 == (undefined1 *)0x0) {
            puVar6 = local_1d0;
          }
          lVar4 = (longlong)piVar9[2] * 0x18;
          puVar12 = local_1e0;
          if (local_1e0 == (undefined1 *)0x0) {
            puVar12 = local_2a0;
          }
          dVar15 = *(double *)(puVar6 + lVar4);
          dVar16 = *(double *)(puVar6 + lVar4 + 8);
          dVar14 = *(double *)(puVar6 + lVar4 + 0x10);
          dVar17 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16);
          dVar19 = 1.0 / dVar17;
          if (0.0 < dVar17) {
            dVar14 = dVar14 * dVar19;
            dVar16 = dVar16 * dVar19;
          }
          else {
            dVar16 = 0.0;
            dVar14 = 0.0;
          }
          iVar1 = piVar9[1];
          uVar3 = (longlong)*piVar9 * 3;
          lVar7 = uVar3 + (longlong)iVar1;
          lVar5 = plVar2[1];
          *(ulonglong *)(lVar5 + lVar7 * 0x18) =
               -(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar15 * dVar19);
          *(double *)(lVar5 + 8 + lVar7 * 0x18) = dVar16;
          *(double *)(lVar5 + 0x10 + lVar7 * 0x18) = dVar14;
          uVar10 = (uint)uVar3;
          lVar5 = *(longlong *)(*(longlong *)local_430[3] + 0x78);
          local_414[0] = *(int *)(*(longlong *)(lVar5 + (uVar3 >> 9 & 0x7fffff) * 8) +
                                 (ulonglong)(uVar10 & 0x1ff) * 4);
          local_414[1] = *(undefined4 *)
                          (*(longlong *)(lVar5 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                          (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_414[2] = *(undefined4 *)
                          (*(longlong *)(lVar5 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                          (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
          if (local_414[0] < 0) {
            FUN_146c13dec(*plVar2,&local_408);
          }
          else {
            iVar1 = local_414[iVar1];
            lVar5 = *(longlong *)(*(longlong *)local_430[3] + 0x48);
            lVar8 = 0;
            do {
              uVar10 = iVar1 * 3 + (int)lVar8;
              local_420[lVar8] =
                   *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar10 >> 9) * 8) +
                             (ulonglong)(uVar10 & 0x1ff) * 4);
              lVar8 = lVar8 + 1;
            } while (lVar8 != 3);
            local_408 = (double)local_420[0];
            local_400 = (longlong *)(double)local_420[1];
            local_3f8 = (uint *)(double)local_420[2];
          }
          pdVar11 = (double *)(puVar6 + lVar4);
          pdVar13 = (double *)(puVar12 + lVar4);
          dVar15 = *pdVar11;
          dVar16 = pdVar11[1];
          dVar14 = pdVar11[2];
          dVar17 = *(double *)
                    (&DAT_149931170 +
                    (ulonglong)
                    ((*pdVar13 * (double)local_400 - local_408 * pdVar13[1]) * dVar14 +
                     (pdVar13[1] * (double)local_3f8 - (double)local_400 * pdVar13[2]) * dVar15 +
                     (pdVar13[2] * local_408 - (double)local_3f8 * *pdVar13) * dVar16 < 0.0) * 8);
          dVar19 = (local_408 * dVar16 - dVar15 * (double)local_400) * dVar17;
          dVar18 = ((double)local_3f8 * dVar15 - dVar14 * local_408) * dVar17;
          dVar17 = ((double)local_400 * dVar14 - dVar16 * (double)local_3f8) * dVar17;
          dVar15 = SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
          dVar16 = 1.0 / dVar15;
          if (0.0 < dVar15) {
            dVar19 = dVar19 * dVar16;
            dVar18 = dVar18 * dVar16;
          }
          else {
            dVar19 = 0.0;
            dVar18 = 0.0;
          }
          lVar4 = plVar2[3];
          *(ulonglong *)(lVar4 + lVar7 * 0x18) =
               -(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar17 * dVar16);
          *(double *)(lVar4 + 8 + lVar7 * 0x18) = dVar18;
          *(double *)(lVar4 + 0x10 + lVar7 * 0x18) = dVar19;
          piVar9 = piVar9 + 3;
        } while (piVar9 != local_428);
      }
      if (local_388 != (int *)0x0) {
        FUN_1400020a8(local_388);
      }
      if (local_2b0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5c25e FUN_146c5c25e body=3400 status=ok
// SIG undefined FUN_146c5c25e(void)

void FUN_146c5c25e(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  double dVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  double *pdVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_1e8 [36];
  int local_1c4;
  double local_1c0;
  double local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  double adStack_130 [4];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1a8 = (longlong *)param_1[1];
  lVar29 = *(longlong *)*param_1;
  uVar20 = (uint)param_2;
  lVar16 = (longlong)(int)uVar20;
  uVar14 = param_2 >> 9 & 0x7fffff;
  lVar26 = *(longlong *)(*(longlong *)(*local_1a8 + 0x130) + uVar14 * 8);
  uVar11 = (ulonglong)(uVar20 & 0x1ff);
  local_1a0 = (double)(uVar11 * 3);
  iVar18 = *(int *)param_1[2];
  iVar17 = 0;
  if ((*(int *)(lVar26 + uVar11 * 0xc) != iVar18) &&
     (iVar17 = 1, *(int *)(lVar26 + uVar11 * 0xc + 4) != iVar18)) {
    iVar17 = (uint)(*(int *)(lVar26 + 8 + uVar11 * 0xc) == iVar18) * 3 + -1;
  }
  dVar2 = *(double *)(lVar29 + lVar16 * 0x18);
  dVar3 = *(double *)(lVar29 + 8 + lVar16 * 0x18);
  uVar4 = *(undefined8 *)(lVar29 + 0x10 + lVar16 * 0x18);
  uVar47 = (undefined4)uVar4;
  uVar48 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar27 = uVar20 * 3 + 2;
  lVar29 = *(longlong *)(*(longlong *)param_1[3] + 0x78);
  uVar21 = (ulonglong)(uVar27 >> 9);
  uVar28 = (ulonglong)((uVar27 & 0x1ff) << 2);
  uVar27 = uVar20 * 3 + 1;
  uVar25 = (ulonglong)(uVar27 >> 9);
  uVar23 = (ulonglong)((uVar27 & 0x1ff) << 2);
  uVar19 = (ulonglong)(uVar20 * 3 >> 9);
  uVar11 = (ulonglong)((uVar20 * 3 & 0x1ff) << 2);
  local_148._4_4_ = *(undefined4 *)(*(longlong *)(lVar29 + uVar19 * 8) + uVar11);
  local_140 = *(undefined4 *)(*(longlong *)(lVar29 + uVar25 * 8) + uVar23);
  local_13c = *(undefined4 *)(*(longlong *)(lVar29 + uVar21 * 8) + uVar28);
  lVar26 = (longlong)iVar17;
  iVar18 = *(int *)((longlong)&local_148 + lVar26 * 4 + 4);
  lVar29 = *(longlong *)(*(longlong *)param_1[4] + 0x78);
  local_150._0_4_ = *(int *)(*(longlong *)(lVar29 + uVar19 * 8) + uVar11);
  local_150._4_4_ = *(undefined4 *)(*(longlong *)(lVar29 + uVar25 * 8) + uVar23);
  local_148._0_4_ = *(undefined4 *)(*(longlong *)(lVar29 + uVar21 * 8) + uVar28);
  iVar7 = *(int *)((longlong)&local_150 + lVar26 * 4);
  local_1c4 = iVar17;
  local_1b0 = param_2;
  if ((int)local_150 < 0) {
    FUN_146c13dec(*local_1a8,&local_168,param_2);
  }
  else {
    lVar29 = *(longlong *)(*(longlong *)param_1[4] + 0x48);
    lVar13 = 0;
    do {
      uVar20 = iVar7 * 3 + (int)lVar13;
      *(undefined4 *)((longlong)&local_138 + lVar13 * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4)
      ;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_158 = (double)adStack_130[0]._0_4_;
    local_160 = (double)local_138._4_4_;
    local_168 = (double)(float)local_138;
  }
  lVar29 = *(longlong *)param_1[5];
  lVar16 = lVar16 * 0x18;
  dVar5 = *(double *)(lVar29 + 8 + lVar16);
  dVar6 = *(double *)(lVar29 + 0x10 + lVar16);
  dVar36 = dVar6 * local_158 + *(double *)(lVar29 + lVar16) * local_168 + local_160 * dVar5;
  dVar6 = dVar6 - local_158 * dVar36;
  dVar5 = dVar5 - local_160 * dVar36;
  dVar35 = *(double *)(lVar29 + lVar16) - dVar36 * local_168;
  dVar39 = SQRT(dVar6 * dVar6 + dVar35 * dVar35 + dVar5 * dVar5);
  dVar36 = 0.0;
  uVar43 = 0;
  uVar44 = 0x3ff00000;
  dVar37 = 1.0 / dVar39;
  if (0.0 < dVar39) {
    dVar6 = dVar6 * dVar37;
    dVar5 = dVar5 * dVar37;
  }
  else {
    dVar5 = 0.0;
    dVar6 = 0.0;
  }
  dVar31 = (double)(-(ulonglong)(0.0 < dVar39) & (ulonglong)(dVar35 * dVar37));
  uVar45 = 0;
  uVar46 = 0;
  lVar29 = *(longlong *)param_1[6];
  dVar35 = *(double *)(lVar29 + 8 + lVar16);
  dVar37 = *(double *)(lVar29 + 0x10 + lVar16);
  dVar39 = dVar37 * local_158 + *(double *)(lVar29 + lVar16) * local_168 + local_160 * dVar35;
  dVar37 = dVar37 - local_158 * dVar39;
  dVar35 = dVar35 - local_160 * dVar39;
  dVar39 = *(double *)(lVar29 + lVar16) - dVar39 * local_168;
  dVar32 = SQRT(dVar37 * dVar37 + dVar39 * dVar39 + dVar35 * dVar35);
  dVar30 = 1.0 / dVar32;
  dVar39 = (double)(-(ulonglong)(0.0 < dVar32) & (ulonglong)(dVar39 * dVar30));
  if (0.0 < dVar32) {
    dVar37 = dVar37 * dVar30;
    dVar36 = dVar35 * dVar30;
  }
  else {
    dVar37 = 0.0;
  }
  if (*(char *)(param_1[7] + 1) == '\x01') {
    local_188._8_8_ = 0;
    local_188._0_8_ = dVar31;
    local_198._8_8_ = 0;
    local_198._0_8_ = dVar39;
    lVar29 = *(longlong *)(*local_1a8 + 0x10);
    lVar16 = *(longlong *)(*(longlong *)(*local_1a8 + 0x130) + uVar14 * 8);
    uVar20 = *(uint *)(lVar16 + (longlong)local_1a0 * 4);
    lVar13 = *(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8);
    uVar14 = (ulonglong)uVar20 & 0x1ff;
    adStack_130[1] = (double)*(undefined8 *)(lVar13 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar13 + uVar14 * 0x18);
    local_138 = *puVar1;
    adStack_130[0] = (double)puVar1[1];
    uVar20 = *(uint *)(lVar16 + 4 + (longlong)local_1a0 * 4);
    lVar13 = *(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8);
    uVar14 = (ulonglong)uVar20 & 0x1ff;
    local_110 = *(undefined8 *)(lVar13 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar13 + uVar14 * 0x18);
    adStack_130[2] = (double)*puVar1;
    adStack_130[3] = (double)puVar1[1];
    uVar20 = *(uint *)(lVar16 + 8 + (longlong)local_1a0 * 4);
    lVar29 = *(longlong *)(lVar29 + (ulonglong)(uVar20 >> 9) * 8);
    uVar14 = (ulonglong)uVar20 & 0x1ff;
    local_f8 = *(undefined8 *)(lVar29 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar29 + uVar14 * 0x18);
    local_108 = *puVar1;
    uStack_100 = puVar1[1];
    uVar14 = (ulonglong)(((iVar17 + 1U) / 3) * -3 + iVar17 + 1);
    uVar11 = (ulonglong)(((iVar17 + 2U) / 3) * -3 + iVar17 + 2);
    dVar30 = adStack_130[uVar11 * 3 + 1] - adStack_130[lVar26 * 3 + 1];
    dVar32 = adStack_130[uVar11 * 3] - adStack_130[lVar26 * 3];
    dVar35 = (double)(&local_138)[uVar11 * 3] - (double)(&local_138)[lVar26 * 3];
    dVar31 = SQRT(dVar30 * dVar30 + dVar35 * dVar35 + dVar32 * dVar32);
    dVar40 = 1.0 / dVar31;
    if (0.0 < dVar31) {
      dVar32 = dVar32 * dVar40;
    }
    else {
      dVar32 = 0.0;
    }
    dVar33 = adStack_130[uVar14 * 3 + 1] - adStack_130[lVar26 * 3 + 1];
    dVar42 = adStack_130[uVar14 * 3] - adStack_130[lVar26 * 3];
    dVar34 = (double)(&local_138)[uVar14 * 3] - (double)(&local_138)[lVar26 * 3];
    if (0.0 < dVar31) {
      dVar30 = dVar30 * dVar40;
    }
    else {
      dVar30 = 0.0;
    }
    dVar10 = SQRT(dVar33 * dVar33 + dVar34 * dVar34 + dVar42 * dVar42);
    dVar41 = 1.0 / dVar10;
    if (0.0 < dVar10) {
      dVar33 = dVar33 * dVar41;
      dVar42 = dVar42 * dVar41;
    }
    else {
      dVar33 = 0.0;
      dVar42 = 0.0;
    }
    dVar31 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar34 * dVar41)) *
             (double)(-(ulonglong)(0.0 < dVar31) & (ulonglong)(dVar35 * dVar40)) + dVar42 * dVar32 +
             dVar33 * dVar30;
    dVar35 = 1.0;
    if (dVar31 <= 1.0) {
      dVar35 = dVar31;
    }
    local_1c0 = dVar2;
    local_1b8 = dVar3;
    local_178 = uVar4;
    local_170 = dVar36;
    dVar35 = acos((double)(-(ulonglong)(dVar31 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar31 < -1.0) & (ulonglong)dVar35));
    uVar43 = SUB84(dVar35,0);
    uVar44 = (undefined4)((ulonglong)dVar35 >> 0x20);
    uVar45 = local_188._8_4_;
    uVar46 = local_188._12_4_;
    dVar31 = local_188._0_8_ * dVar35;
    dVar5 = dVar5 * dVar35;
    dVar6 = dVar6 * dVar35;
    dVar39 = dVar39 * dVar35;
    dVar36 = local_170 * dVar35;
    dVar37 = dVar37 * dVar35;
    dVar2 = dVar2 * dVar35;
    dVar3 = dVar3 * dVar35;
    uVar47 = (undefined4)local_178;
    uVar48 = (undefined4)((ulonglong)local_178 >> 0x20);
  }
  iVar17 = (uint)(0.0 < (double)CONCAT44(uVar48,uVar47) || (double)CONCAT44(uVar48,uVar47) == 0.0) *
           2 + -1;
  lVar29 = param_1[8];
  lVar26 = *(longlong *)(lVar29 + 0x60);
  lVar16 = lVar26;
  if (lVar26 == 0) {
    lVar16 = lVar29;
  }
  iVar8 = *(int *)(lVar29 + 0x68);
  lVar13 = (longlong)iVar8;
  if (lVar13 != 0) {
    lVar15 = 0;
    do {
      if (((*(int *)(lVar16 + lVar15) == iVar18) && (*(int *)(lVar16 + 4 + lVar15) == iVar7)) &&
         (*(int *)(lVar16 + 8 + lVar15) == iVar17)) {
        iVar12 = (int)(lVar15 >> 2) * -0x55555555;
        if (iVar12 != -1) {
          local_188._8_4_ = uVar45;
          local_188._0_8_ = dVar31;
          local_188._12_4_ = uVar46;
          local_198._8_8_ = 0;
          local_198._0_8_ = dVar39;
          lVar16 = *(longlong *)(param_1[9] + 0xc0);
          if (lVar16 == 0) {
            lVar16 = param_1[9];
          }
          lVar15 = (longlong)iVar12 * 0x18;
          dVar35 = *(double *)(lVar16 + lVar15);
          local_1a0 = *(double *)(lVar16 + 8 + lVar15);
          local_1a8 = *(longlong **)(lVar16 + 0x10 + lVar15);
          dVar32 = SQRT((double)local_1a8 * (double)local_1a8 +
                        dVar35 * dVar35 + local_1a0 * local_1a0);
          dVar30 = 1.0 / dVar32;
          if (0.0 < dVar32) {
            dVar42 = (double)local_1a8 * dVar30;
            dVar40 = dVar30 * local_1a0;
          }
          else {
            dVar42 = 0.0;
            dVar40 = 0.0;
          }
          lVar24 = *(longlong *)(param_1[10] + 0xc0);
          if (lVar24 == 0) {
            lVar24 = param_1[10];
          }
          dVar33 = *(double *)(lVar24 + lVar15);
          dVar34 = *(double *)(lVar24 + 8 + lVar15);
          dVar10 = *(double *)(lVar24 + 0x10 + lVar15);
          dVar41 = SQRT(dVar10 * dVar10 + dVar33 * dVar33 + dVar34 * dVar34);
          dVar38 = 1.0 / dVar41;
          if (0.0 < dVar41) {
            dVar10 = dVar10 * dVar38;
            dVar34 = dVar34 * dVar38;
          }
          else {
            dVar10 = 0.0;
            dVar34 = 0.0;
          }
          local_1c0 = dVar2;
          local_1b8 = dVar3;
          if ((*(double *)param_1[0xc] <
               dVar42 * dVar6 +
               (double)(-(ulonglong)(0.0 < dVar32) & (ulonglong)(dVar35 * dVar30)) * dVar31 +
               dVar40 * dVar5) &&
             (*(double *)param_1[0xc] <
              dVar10 * dVar37 +
              (double)(-(ulonglong)(0.0 < dVar41) & (ulonglong)(dVar33 * dVar38)) * dVar39 +
              dVar34 * dVar36)) {
            pdVar22 = (double *)(lVar16 + lVar15);
            *pdVar22 = dVar31 + dVar35;
            pdVar22[1] = dVar5 + local_1a0;
            pdVar22[2] = dVar6 + (double)local_1a8;
            lVar29 = *(longlong *)(param_1[10] + 0xc0);
            if (lVar29 == 0) {
              lVar29 = param_1[10];
            }
            *(double *)(lVar29 + lVar15) = dVar39 + *(double *)(lVar29 + lVar15);
            *(double *)(lVar29 + 8 + lVar15) = dVar36 + *(double *)(lVar29 + 8 + lVar15);
            *(double *)(lVar29 + 0x10 + lVar15) = dVar37 + *(double *)(lVar29 + 0x10 + lVar15);
            lVar29 = *(longlong *)(param_1[0xb] + 0xc0);
            if (lVar29 == 0) {
              lVar29 = param_1[0xb];
            }
            *(double *)(lVar29 + lVar15) = dVar2 + *(double *)(lVar29 + lVar15);
            *(double *)(lVar29 + 8 + lVar15) = dVar3 + *(double *)(lVar29 + 8 + lVar15);
            *(double *)(lVar29 + 0x10 + lVar15) =
                 (double)CONCAT44(uVar44,uVar43) + *(double *)(lVar29 + 0x10 + lVar15);
            uVar47 = (undefined4)local_1b0;
            iVar18 = local_1c4;
            goto LAB_146c5ca8f;
          }
          *(uint *)(lVar29 + 0x68) = iVar8 + 1U;
          if (*(uint *)(lVar29 + 0x6c) < iVar8 + 1U) {
            FUN_146c5af82(lVar29,iVar8);
            lVar26 = *(longlong *)(lVar29 + 0x60);
          }
          if (lVar26 != 0) {
            lVar29 = lVar26;
          }
          *(int *)(lVar29 + lVar13 * 0xc) = iVar18;
          *(int *)(lVar29 + 4 + lVar13 * 0xc) = iVar7;
          *(int *)(lVar29 + 8 + lVar13 * 0xc) = iVar17;
          lVar29 = param_1[9];
          iVar18 = *(int *)(lVar29 + 200);
          lVar26 = (longlong)iVar18;
          *(uint *)(lVar29 + 200) = iVar18 + 1U;
          uVar4 = local_188._0_8_;
          if (*(uint *)(lVar29 + 0xcc) < iVar18 + 1U) {
            FUN_146c5b08e(lVar29,iVar18);
          }
          dVar3 = local_1b8;
          dVar2 = local_1c0;
          iVar18 = local_1c4;
          lVar16 = *(longlong *)(lVar29 + 0xc0);
          if (*(longlong *)(lVar29 + 0xc0) == 0) {
            lVar16 = lVar29;
          }
          *(undefined8 *)(lVar16 + lVar26 * 0x18) = uVar4;
          *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar5;
          *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar6;
          lVar29 = param_1[10];
          iVar17 = *(int *)(lVar29 + 200);
          lVar26 = (longlong)iVar17;
          *(uint *)(lVar29 + 200) = iVar17 + 1U;
          uVar47 = (undefined4)local_1b0;
          if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
            FUN_146c5b08e(lVar29,iVar17);
          }
          lVar16 = *(longlong *)(lVar29 + 0xc0);
          if (*(longlong *)(lVar29 + 0xc0) == 0) {
            lVar16 = lVar29;
          }
          *(undefined8 *)(lVar16 + lVar26 * 0x18) = local_198._0_8_;
          *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar36;
          *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar37;
          lVar29 = param_1[0xb];
          iVar17 = *(int *)(lVar29 + 200);
          lVar26 = (longlong)iVar17;
          *(uint *)(lVar29 + 200) = iVar17 + 1U;
          if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
            FUN_146c5b08e(lVar29,iVar17);
          }
          lVar16 = *(longlong *)(lVar29 + 0xc0);
          if (*(longlong *)(lVar29 + 0xc0) == 0) {
            lVar16 = lVar29;
          }
          *(double *)(lVar16 + lVar26 * 0x18) = dVar2;
          *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar3;
          goto LAB_146c5ca89;
        }
        break;
      }
      lVar15 = lVar15 + 0xc;
    } while (lVar13 * 0xc != lVar15);
  }
  *(uint *)(lVar29 + 0x68) = iVar8 + 1U;
  if (*(uint *)(lVar29 + 0x6c) < iVar8 + 1U) {
    FUN_146c5af82(lVar29,iVar8);
    lVar26 = *(longlong *)(lVar29 + 0x60);
  }
  if (lVar26 != 0) {
    lVar29 = lVar26;
  }
  *(int *)(lVar29 + lVar13 * 0xc) = iVar18;
  *(int *)(lVar29 + 4 + lVar13 * 0xc) = iVar7;
  *(int *)(lVar29 + 8 + lVar13 * 0xc) = iVar17;
  lVar29 = param_1[9];
  iVar18 = *(int *)(lVar29 + 200);
  lVar26 = (longlong)iVar18;
  *(uint *)(lVar29 + 200) = iVar18 + 1U;
  if (*(uint *)(lVar29 + 0xcc) < iVar18 + 1U) {
    FUN_146c5b08e(lVar29,iVar18);
  }
  iVar18 = local_1c4;
  lVar16 = *(longlong *)(lVar29 + 0xc0);
  if (*(longlong *)(lVar29 + 0xc0) == 0) {
    lVar16 = lVar29;
  }
  *(double *)(lVar16 + lVar26 * 0x18) = dVar31;
  *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar5;
  *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar6;
  lVar29 = param_1[10];
  iVar17 = *(int *)(lVar29 + 200);
  lVar26 = (longlong)iVar17;
  *(uint *)(lVar29 + 200) = iVar17 + 1U;
  uVar47 = (undefined4)local_1b0;
  if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
    FUN_146c5b08e(lVar29,iVar17);
  }
  lVar16 = *(longlong *)(lVar29 + 0xc0);
  if (*(longlong *)(lVar29 + 0xc0) == 0) {
    lVar16 = lVar29;
  }
  *(double *)(lVar16 + lVar26 * 0x18) = dVar39;
  *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar36;
  *(double *)(lVar16 + 0x10 + lVar26 * 0x18) = dVar37;
  lVar29 = param_1[0xb];
  iVar17 = *(int *)(lVar29 + 200);
  lVar26 = (longlong)iVar17;
  *(uint *)(lVar29 + 200) = iVar17 + 1U;
  if (*(uint *)(lVar29 + 0xcc) < iVar17 + 1U) {
    FUN_146c5b08e(lVar29,iVar17);
  }
  lVar16 = *(longlong *)(lVar29 + 0xc0);
  if (*(longlong *)(lVar29 + 0xc0) == 0) {
    lVar16 = lVar29;
  }
  *(double *)(lVar16 + lVar26 * 0x18) = dVar2;
  *(double *)(lVar16 + 8 + lVar26 * 0x18) = dVar3;
LAB_146c5ca89:
  *(ulonglong *)(lVar16 + 0x10 + lVar26 * 0x18) = CONCAT44(uVar44,uVar43);
  iVar12 = iVar8;
LAB_146c5ca8f:
  plVar9 = (longlong *)param_1[0xd];
  iVar17 = (int)plVar9[1];
  lVar29 = (longlong)iVar17;
  *(uint *)(plVar9 + 1) = iVar17 + 1U;
  if (*(uint *)((longlong)plVar9 + 0xc) < iVar17 + 1U) {
    FUN_146bd78c8(plVar9,iVar17);
  }
  lVar26 = *plVar9;
  *(undefined4 *)(lVar26 + lVar29 * 0xc) = uVar47;
  *(int *)(lVar26 + 4 + lVar29 * 0xc) = iVar18;
  *(int *)(lVar26 + 8 + lVar29 * 0xc) = iVar12;
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5cfa8 FUN_146c5cfa8 body=282 status=ok
// SIG undefined FUN_146c5cfa8(void)

undefined8 FUN_146c5cfa8(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar2 = *(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x40);
  dVar1 = *(double *)(param_1 + 0x48);
  local_30 = 0.0;
  dVar3 = *(double *)(&DAT_149931170 + (ulonglong)(dVar2 * dVar1 < 0.0) * 8);
  local_28 = dVar2 * dVar3 * param_3[2];
  dVar2 = *(double *)(param_1 + 0x38) * dVar1 * dVar3 * param_3[1];
  dVar3 = *(double *)(param_1 + 0x40) * dVar1 * dVar3 * *param_3;
  dVar1 = SQRT(local_28 * local_28 + dVar3 * dVar3 + dVar2 * dVar2);
  dVar4 = 1.0 / dVar1;
  local_38 = -(ulonglong)(0.0 < dVar1) & (ulonglong)(dVar3 * dVar4);
  if (0.0 < dVar1) {
    local_28 = local_28 * dVar4;
    local_30 = dVar2 * dVar4;
  }
  else {
    local_28 = 0.0;
  }
  FUN_146bed047(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5d0c4 FUN_146c5d0c4 body=223 status=ok
// SIG undefined FUN_146c5d0c4(void)

ulonglong * FUN_146c5d0c4(longlong param_1,ulonglong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146bf2028(param_1,&local_48);
  local_38 = *(double *)(param_1 + 0x48) * local_38;
  local_40 = *(double *)(param_1 + 0x40) * local_40;
  local_48 = *(double *)(param_1 + 0x38) * local_48;
  dVar1 = SQRT(local_38 * local_38 + local_48 * local_48 + local_40 * local_40);
  dVar2 = 0.0;
  dVar3 = 1.0 / dVar1;
  if (0.0 < dVar1) {
    local_38 = local_38 * dVar3;
    dVar2 = local_40 * dVar3;
  }
  else {
    local_38 = 0.0;
  }
  *param_2 = -(ulonglong)(0.0 < dVar1) & (ulonglong)(local_48 * dVar3);
  param_2[1] = (ulonglong)dVar2;
  param_2[2] = (ulonglong)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5d1a4 FUN_146c5d1a4 body=319 status=ok
// SIG undefined FUN_146c5d1a4(void)

double * FUN_146c5d1a4(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x40);
  uVar4 = -(ulonglong)(-dVar1 <= dVar1);
  uVar5 = -(ulonglong)(-dVar2 <= dVar2);
  dVar3 = *(double *)(param_1 + 0x48);
  dVar6 = -dVar3;
  FUN_146bf2028(dVar6,&local_68);
  *param_2 = (double)(-(ulonglong)
                       (1e-08 < (double)(uVar4 & (ulonglong)dVar1 | ~uVar4 & (ulonglong)-dVar1)) &
                     (ulonglong)(1.0 / dVar1)) * local_68;
  param_2[1] = (double)(-(ulonglong)
                         (1e-08 < (double)(uVar5 & (ulonglong)dVar2 | ~uVar5 & (ulonglong)-dVar2)) &
                       (ulonglong)(1.0 / dVar2)) * local_60;
  param_2[2] = (double)(-(ulonglong)
                         (1e-08 < (double)(-(ulonglong)(dVar6 <= dVar3) & (ulonglong)dVar3 |
                                          ~-(ulonglong)(dVar6 <= dVar3) & (ulonglong)dVar6)) &
                       (ulonglong)(1.0 / dVar3)) * local_58;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5d2e4 FUN_146c5d2e4 body=95 status=ok
// SIG undefined FUN_146c5d2e4(void)

void FUN_146c5d2e4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146c5d344 FUN_146c5d344 body=132 status=ok
// SIG undefined FUN_146c5d344(void)

void FUN_146c5d344(longlong param_1,int param_2)

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



// FUNCTION 146c5d3ce FUN_146c5d3ce body=74 status=ok
// SIG undefined FUN_146c5d3ce(void)

void FUN_146c5d3ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  *param_1 = param_2;
  FUN_14054c6c4(param_1 + 1,param_3);
  FUN_14054c6c4(param_1 + 3,param_4);
  if (param_5 != 0) {
    FUN_14054c6c4(param_1 + 5,param_5);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return;
}



// FUNCTION 146c5d418 FUN_146c5d418 body=241 status=ok
// SIG undefined FUN_146c5d418(void)

void FUN_146c5d418(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  FUN_14054c6c4(param_1 + 3);
  iVar3 = (int)param_1[4];
  plVar1 = param_1 + 1;
  FUN_144a1a59e(plVar1,iVar3,1);
  uVar4 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(*(uint *)param_1[3] >> 9) * 8) +
           (ulonglong)((*(uint *)param_1[3] & 0x1ff) << 4));
  if (1 < (longlong)iVar3) {
    lVar7 = 1;
    uVar9 = uVar4;
    do {
      uVar2 = *(uint *)(param_1[3] + lVar7 * 4);
      uVar5 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
               (ulonglong)((uVar2 & 0x1ff) << 4));
      uVar8 = uVar9;
      if (((int)uVar9 != (int)uVar5) && (iVar10 = (int)(uVar5 >> 0x20), (int)uVar9 != iVar10)) {
        iVar6 = (int)(uVar9 >> 0x20);
        uVar8 = uVar9 >> 0x20;
        if ((iVar6 != (int)uVar5) && (uVar8 = 0xffffffff, iVar6 == iVar10)) {
          uVar8 = uVar9 >> 0x20;
        }
      }
      *(int *)(*plVar1 + lVar7 * 4) = (int)uVar8;
      lVar7 = lVar7 + 1;
      uVar9 = uVar5;
    } while (iVar3 != lVar7);
  }
  iVar3 = ((int *)*plVar1)[1];
  iVar6 = (int)(uVar4 >> 0x20);
  iVar10 = -1;
  if (iVar3 == iVar6) {
    iVar10 = (int)uVar4;
  }
  if (iVar3 == (int)uVar4) {
    iVar10 = iVar6;
  }
  *(int *)*plVar1 = iVar10;
  return;
}



// FUNCTION 146c5d50a FUN_146c5d50a body=182 status=ok
// SIG undefined FUN_146c5d50a(void)

undefined8 FUN_146c5d50a(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  FUN_14054c6c4(param_1 + 1);
  uVar2 = *(uint *)(param_1 + 2);
  FUN_144a1a59e(param_1 + 3,uVar2,1);
  uVar6 = 0;
  if (0 < (int)uVar2) {
    uVar6 = (ulonglong)uVar2;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    if (uVar5 - uVar6 == -1) {
      uVar4 = uVar6;
      if (param_3 != '\0') {
        FUN_146c5d5c0(param_1);
      }
      break;
    }
    uVar3 = FUN_146c061e0(*param_1,*(undefined4 *)(param_1[1] + 4 + uVar5 * 4),
                          *(undefined4 *)
                           (param_1[1] +
                           ((longlong)((int)uVar5 + 2) % (longlong)(int)uVar2 & 0xffffffffU) * 4));
    *(undefined4 *)(param_1[3] + 4 + uVar5 * 4) = uVar3;
    uVar4 = uVar5 + 1;
    lVar1 = uVar5 * 4;
    uVar5 = uVar4;
  } while (*(int *)(param_1[3] + 4 + lVar1) != -1);
  return CONCAT71((int7)(uVar4 >> 8),(longlong)(int)uVar2 <= (longlong)uVar4);
}



// FUNCTION 146c5d5c0 FUN_146c5d5c0 body=184 status=ok
// SIG undefined FUN_146c5d5c0(void)

ulonglong FUN_146c5d5c0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (longlong)(int)uVar1) {
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(param_1[3] + lVar7 * 4);
      if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                   0xc + (ulonglong)((uVar2 & 0x1ff) << 4)) == -1) {
        iVar3 = *(int *)(param_1[1] + lVar7 * 4);
        iVar4 = *(int *)(param_1[1] + ((ulonglong)((int)lVar7 + 1) % (ulonglong)uVar1) * 4);
        FUN_146c13626(*param_1,&local_30);
        bVar5 = iVar3 == local_2c;
        bVar6 = iVar4 == local_30;
        uVar8 = CONCAT71((int7)((ulonglong)&local_30 >> 8),bVar5 && bVar6);
        if (bVar5 && bVar6) {
          FUN_146c5d67a(param_1);
        }
        goto LAB_146c5d620;
      }
      lVar7 = lVar7 + 1;
    } while ((int)uVar1 != lVar7);
  }
  uVar8 = 0;
LAB_146c5d620:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5d67a FUN_146c5d67a body=118 status=ok
// SIG undefined FUN_146c5d67a(void)

void FUN_146c5d67a(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar5 = (longlong)(int)uVar1;
  if (1 < lVar5) {
    puVar3 = *(undefined4 **)(param_1 + 8);
    lVar6 = 0;
    puVar4 = puVar3;
    do {
      uVar2 = *puVar4;
      *puVar4 = puVar3[lVar5 + lVar6 + -1];
      puVar3[lVar5 + lVar6 + -1] = uVar2;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (-lVar6 != (ulonglong)(uVar1 >> 1));
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar5 = (longlong)(int)uVar1;
  if (1 < lVar5) {
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    lVar6 = 0;
    puVar4 = puVar3;
    do {
      uVar2 = *puVar4;
      *puVar4 = puVar3[lVar5 + lVar6 + -1];
      puVar3[lVar5 + lVar6 + -1] = uVar2;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (-lVar6 != (ulonglong)(uVar1 >> 1));
  }
  return;
}



// FUNCTION 146c5d6f0 FUN_146c5d6f0 body=128 status=ok
// SIG undefined FUN_146c5d6f0(void)

undefined8 FUN_146c5d6f0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int7 iVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    param_2 = *param_1;
  }
  uVar3 = (ulonglong)(int)param_1[4];
  iVar5 = (int7)(int3)((uint)(int)param_1[4] >> 8);
  if ((longlong)uVar3 < 1) {
    uVar4 = CONCAT71(iVar5,1);
  }
  else {
    uVar1 = *(uint *)param_1[3];
    if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                (ulonglong)((uVar1 & 0x1ff) << 4)) == -1) {
      uVar2 = 1;
      do {
        uVar6 = uVar2;
        if (uVar3 == uVar6) break;
        uVar1 = ((uint *)param_1[3])[uVar6];
        uVar2 = uVar6 + 1;
      } while (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8)
                        + 0xc + (ulonglong)((uVar1 & 0x1ff) << 4)) == -1);
      uVar4 = CONCAT71(iVar5,uVar3 <= uVar6);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 146c5d770 FUN_146c5d770 body=1675 status=ok
// SIG undefined FUN_146c5d770(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000146c5d8cd */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_146c5d770(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined ***pppuVar10;
  uint uVar11;
  code *pcVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  code cVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  ulonglong local_118;
  undefined1 local_109;
  undefined1 *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_109 = 1;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f3c680;
  puStack_a0 = &local_109;
  local_c8 = (code *)&LAB_14297f3a2;
  if (param_2 == 2) {
    local_e8 = &PTR_LAB_149f3c6c0;
    local_c8 = (code *)&LAB_14297f442;
  }
  else {
    if (param_2 != 1) goto LAB_146c5d8d3;
    local_e8 = &PTR_LAB_149f3c6a0;
    local_c8 = FUN_14297f3f2;
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0x49f3c680;
  uStack_64 = 1;
  uStack_60 = &local_109;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = uStack_b0;
  local_88 = 0x4297f3a2;
  uStack_84 = 1;
  iStack_80 = iStack_c0;
  uStack_7c = uStack_bc;
  local_b8 = (undefined ***)0x0;
  local_a8 = local_e8;
  local_108 = &LAB_14297f3a2;
  iStack_100 = iStack_c0;
  uStack_fc = uStack_bc;
  local_e8 = &PTR_LAB_149f3c680;
  puStack_e0 = &local_109;
  local_d8 = local_98;
  uStack_d4 = uStack_94;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  local_f8 = 0;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  (*(code *)&LAB_14297f3c8)();
LAB_146c5d8d3:
  pcVar4 = local_c8;
  pcVar12 = (code *)&local_88;
  local_88 = CONCAT31(local_88._1_3_,(int)param_1[2] == (int)param_1[4]);
  pppuVar10 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar10 = &local_a8;
  }
  uVar7 = (*(code *)(*pppuVar10)[1])();
  (*pcVar4)(uVar7,pcVar12);
  if (0 < (int)param_1[4]) {
    pcVar12 = (code *)0x0;
    do {
      pcVar4 = local_c8;
      lVar8 = *param_1;
      uVar16 = *(uint *)(param_1[3] + (longlong)pcVar12 * 4);
      uVar13 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x1c0) + (ulonglong)(uVar16 >> 9) * 8) +
                (ulonglong)((uVar16 & 0x1ff) << 4));
      uVar16 = (uint)uVar13;
      if (((int)uVar16 < 0) ||
         (*(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24) <= (int)uVar16)) {
        cVar17 = (code)0x0;
      }
      else {
        cVar17 = (code)((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar8 + 0x28) +
                                             (ulonglong)((uint)(uVar13 >> 6) & 0x1fffff8)) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe);
      }
      local_88._0_1_ = cVar17;
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar4)(uVar7,&local_88);
      pcVar4 = local_c8;
      uVar11 = (uint)(uVar13 >> 0x20);
      if (((longlong)uVar13 < 0) ||
         (lVar8 = *param_1, *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24) <= (int)uVar11))
      {
        local_88._0_1_ = (code)0x0;
      }
      else {
        local_88._0_1_ =
             (code)((ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar8 + 0x28) + (uVar13 >> 0x29) * 8) +
                                       (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe);
      }
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar4)(uVar7,&local_88);
      iVar5 = FUN_146c061e0(*param_1,uVar13 & 0xffffffff,uVar13 >> 0x20);
      pcVar4 = local_c8;
      local_88._0_1_ = (code)(iVar5 != -1);
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar4)(uVar7,&local_88);
      pcVar4 = local_c8;
      uVar2 = *(uint *)(param_1[1] + (longlong)pcVar12 * 4);
      local_88._0_1_ = (code)(uVar2 == uVar11 || uVar2 == uVar16);
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar4)(uVar7,&local_88);
      pcVar4 = local_c8;
      pcVar12 = pcVar12 + 1;
      uVar2 = *(uint *)(param_1[1] +
                       ((longlong)
                        ((ulonglong)(uint)((int)pcVar12 >> 0x1f) << 0x20 |
                        (ulonglong)pcVar12 & 0xffffffff) % (longlong)(int)param_1[4] & 0xffffffffU)
                       * 4);
      local_88 = CONCAT31(local_88._1_3_,uVar2 == uVar11 || uVar2 == uVar16);
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar4)(uVar7,&local_88);
    } while ((longlong)pcVar12 < (longlong)(int)param_1[4]);
  }
  uVar13 = (ulonglong)*(uint *)(param_1 + 2);
  if (0 < (int)*(uint *)(param_1 + 2)) {
    uVar15 = 0;
    do {
      pcVar12 = local_c8;
      uVar16 = *(uint *)(param_1[1] + uVar15 * 4);
      uVar1 = uVar15 + 1;
      uVar11 = (int)uVar1 >> 0x1f;
      if (((int)uVar16 < 0) ||
         (lVar8 = *param_1, *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24) <= (int)uVar16))
      {
        cVar17 = (code)0x0;
      }
      else {
        cVar17 = (code)((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar8 + 0x28) +
                                             (ulonglong)(uVar16 >> 9) * 8) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe);
      }
      uVar2 = *(uint *)(param_1[1] +
                       ((longlong)((ulonglong)uVar11 << 0x20 | uVar1 & 0xffffffff) %
                        (longlong)(int)uVar13 & 0xffffffffU) * 4);
      local_88._0_1_ = cVar17;
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar12)(uVar7,&local_88);
      pcVar12 = local_c8;
      iVar5 = 0;
      local_88._0_1_ = (code)0x0;
      if (-1 < (int)uVar2) {
        lVar8 = *param_1;
        if ((int)uVar2 < *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24)) {
          local_88._0_1_ =
               (code)((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar8 + 0x28) +
                                           (ulonglong)(uVar2 >> 9) * 8) +
                                         (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe);
        }
        else {
          local_88._0_1_ = (code)0x0;
        }
      }
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      local_120 = (ulonglong)uVar2;
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar12)(uVar7,&local_88);
      iVar6 = FUN_146c061e0(*param_1,uVar16,local_120);
      pcVar12 = local_c8;
      local_88 = CONCAT31(local_88._1_3_,iVar6 != -1);
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar12)(uVar7,&local_88);
      iVar6 = *(int *)(param_1[3] + uVar15 * 4);
      iVar3 = *(int *)(param_1[3] +
                      ((longlong)((ulonglong)uVar11 << 0x20 | uVar1 & 0xffffffff) %
                       (longlong)(int)param_1[2] & 0xffffffffU) * 4);
      lVar14 = *param_1 + 0xb8;
      local_118 = uVar1;
      FUN_146be983e(&local_88,lVar14,local_120,0);
      lVar8 = CONCAT44(uStack_84,local_88);
      if ((((lVar8 != lVar14) || (iStack_80 != (int)local_120)) || ((int)uStack_70 != -1)) ||
         (uStack_70._4_4_ != -1)) {
        iVar5 = 0;
        uVar13 = local_120;
        iVar9 = iStack_80;
        do {
          bVar18 = local_68 == iVar6;
          bVar19 = local_68 == iVar3;
          if (local_78 == 0) {
            uStack_7c = 0xffffffff;
            uStack_70 = 0xffffffffffffffff;
            uStack_70._4_4_ = -1;
            uStack_70._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_88);
            lVar8 = CONCAT44(uStack_84,local_88);
            uVar13 = local_120;
            iVar9 = iStack_80;
          }
          iVar5 = iVar5 + (uint)(bVar18 || bVar19);
        } while (((lVar8 != lVar14) || (iVar9 != (int)uVar13)) ||
                (((int)uStack_70 != -1 || (uStack_70._4_4_ != -1))));
      }
      pcVar12 = local_c8;
      local_88 = CONCAT31(local_88._1_3_,iVar5 == 2);
      pppuVar10 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar10 = &local_a8;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      (*pcVar12)(uVar7,&local_88);
      uVar13 = (ulonglong)(int)param_1[2];
      uVar15 = local_118;
    } while ((longlong)local_118 < (longlong)uVar13);
  }
  uVar13 = CONCAT71((int7)((ulonglong)pcVar12 >> 8),local_109);
  if (local_c8 != (code *)0x0) {
    pppuVar10 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar10 = local_b8;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5ddfc FUN_146c5ddfc body=128 status=ok
// SIG undefined FUN_146c5ddfc(void)

void FUN_146c5ddfc(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = (longlong)(int)param_2[1];
  FUN_144a1a59e(param_3,(int)param_2[1],1);
  if (0 < lVar3) {
    lVar4 = 1;
    do {
      lVar2 = lVar4;
      if (lVar4 == lVar3) {
        lVar2 = 0;
      }
      uVar1 = FUN_146c061e0(param_1,*(undefined4 *)(*param_2 + -4 + lVar4 * 4),
                            *(undefined4 *)(*param_2 + lVar2 * 4));
      *(undefined4 *)(*param_3 + -4 + lVar4 * 4) = uVar1;
      bVar5 = lVar4 != lVar3;
      lVar4 = lVar4 + 1;
    } while (bVar5);
  }
  return;
}



// FUNCTION 146c5de7c FUN_146c5de7c body=83 status=ok
// SIG undefined FUN_146c5de7c(void)

void FUN_146c5de7c(void)

{
  undefined8 in_R9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = &LAB_14297f492;
  local_28 = in_R9;
  FUN_146c5ded0();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5ded0 FUN_146c5ded0 body=527 status=ok
// SIG undefined FUN_146c5ded0(void)

ulonglong FUN_146c5ded0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                       longlong *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong unaff_R13;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1;
  local_60 = param_4;
  if ((int)param_3[1] == (int)param_2[1]) {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) < 0) {
      FUN_146c7eb00(param_5,0);
    }
    iVar7 = (int)param_3[1];
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
      FUN_146c7eb00();
      iVar7 = (int)param_3[1];
    }
    if (iVar7 < 1) {
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
    }
    else {
      uVar9 = 0;
      do {
        lVar5 = local_68;
        local_54 = *(uint *)(*param_3 + uVar9 * 4);
        uVar4 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(local_68 + 0x1c0) + (ulonglong)(local_54 >> 9) * 8) +
                  8 + (ulonglong)((local_54 & 0x1ff) << 4));
        local_50 = (undefined4)uVar4;
        local_4c = (undefined4)((ulonglong)uVar4 >> 0x20);
        uVar6 = (*(code *)*local_60)(local_60[1],&local_54,&local_50,&local_4c);
        iVar7 = *(int *)(*param_2 + uVar9 * 4);
        uVar9 = uVar9 + 1;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
        uVar8 = (ulonglong)(uVar6 & 0x1ff);
        iVar1 = *(int *)(lVar5 + uVar8 * 0xc);
        iVar2 = *(int *)(lVar5 + 4 + uVar8 * 0xc);
        iVar3 = *(int *)(lVar5 + 8 + uVar8 * 0xc);
        uVar10 = 0;
        if ((iVar1 != iVar7) && (uVar10 = 1, iVar2 != iVar7)) {
          uVar10 = (uint)(iVar3 == iVar7) * 3 - 1;
        }
        iVar7 = *(int *)(*param_2 +
                        ((longlong)
                         ((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
                         (longlong)(int)param_2[1] & 0xffffffffU) * 4);
        uVar11 = 0;
        if ((iVar1 != iVar7) && (uVar11 = 1, iVar2 != iVar7)) {
          uVar11 = (uint)(iVar3 == iVar7) * 3 - 1;
        }
        bVar12 = (int)(uVar11 | uVar10) < 0;
        unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),!bVar12);
        if (bVar12) break;
        iVar7 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
          FUN_146c7eb60(param_5,iVar7);
        }
        *(ulonglong *)(*param_5 + (longlong)iVar7 * 8) =
             CONCAT44((uVar10 & 3) + (uVar11 & 3) * 4,uVar6);
      } while ((longlong)uVar9 < (longlong)(int)param_3[1]);
    }
  }
  else {
    unaff_R13 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_R13 & 0xffffffff;
}



// FUNCTION 146c5e0e1 FUN_146c5e0e1 body=593 status=ok
// SIG undefined FUN_146c5e0e1(void)

undefined8 FUN_146c5e0e1(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = *(uint *)(param_2 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  uVar10 = uVar6 - 1;
  if ((int)uVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  uVar3 = *(uint *)((longlong)param_3 + 0xc);
  if ((int)uVar3 < (int)uVar10) {
    FUN_14481578e(param_3,uVar10);
    uVar3 = *(uint *)((longlong)param_3 + 0xc);
  }
  uVar2 = *(uint *)*param_2;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
  uVar9 = (ulonglong)(uVar2 & 0x1ff);
  local_50 = *(undefined4 *)(lVar11 + 8 + uVar9 * 0xc);
  local_58 = *(undefined8 *)(lVar11 + uVar9 * 0xc);
  uVar2 = ((uint *)*param_2)[1];
  lVar11 = param_3[1];
  uVar8 = (int)lVar11 + 1;
  *(uint *)(param_3 + 1) = uVar8;
  if (uVar3 < uVar8) {
    FUN_1446f48e2(param_3);
  }
  *(undefined4 *)(*param_3 + (longlong)(int)lVar11 * 4) =
       *(undefined4 *)((longlong)&local_58 + (ulonglong)(uVar2 & 3) * 4);
  uVar3 = *(uint *)(*param_2 + 4);
  lVar11 = param_3[1];
  uVar2 = (int)lVar11 + 1;
  *(uint *)(param_3 + 1) = uVar2;
  if (*(uint *)((longlong)param_3 + 0xc) < uVar2) {
    FUN_1446f48e2(param_3);
  }
  lVar7 = *param_3;
  *(undefined4 *)(lVar7 + (longlong)(int)lVar11 * 4) =
       *(undefined4 *)((longlong)&local_58 + (ulonglong)(uVar3 >> 2 & 3) * 4);
  local_70 = (ulonglong)uVar6;
  if (2 < uVar6) {
    lVar11 = 0;
    do {
      uVar6 = *(uint *)(*param_2 + 8 + lVar11 * 8);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
      uVar9 = (ulonglong)(uVar6 & 0x1ff);
      local_60 = *(undefined4 *)(lVar7 + 8 + uVar9 * 0xc);
      local_68 = *(undefined8 *)(lVar7 + uVar9 * 0xc);
      uVar6 = *(uint *)(*param_2 + 0xc + lVar11 * 8);
      lVar1 = param_3[1];
      uVar3 = (int)lVar1 + 1;
      *(uint *)(param_3 + 1) = uVar3;
      if (*(uint *)((longlong)param_3 + 0xc) < uVar3) {
        FUN_1446f48e2(param_3);
      }
      lVar7 = *param_3;
      *(undefined4 *)(lVar7 + (longlong)(int)lVar1 * 4) =
           *(undefined4 *)((longlong)&local_68 + (ulonglong)(uVar6 >> 2 & 3) * 4);
      lVar11 = lVar11 + 1;
    } while ((ulonglong)uVar10 - 1 != lVar11);
  }
  uVar9 = local_70;
  if (param_4 != (longlong *)0x0) {
    iVar4 = *(int *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_4 + 1) = 0;
    if (iVar4 < 0) {
      FUN_14481578e(param_4);
      iVar4 = *(int *)((longlong)param_4 + 0xc);
    }
    if (iVar4 < (int)uVar9) {
      FUN_14481578e(param_4);
    }
    uVar12 = 0;
    do {
      uVar13 = uVar12 + 1;
      uVar5 = FUN_146c085f4(param_1,*(undefined4 *)(*param_3 + uVar12 * 4),
                            *(undefined4 *)
                             (*param_3 + ((uVar13 & 0xffffffff) % (uVar9 & 0xffffffff)) * 4),
                            *(undefined4 *)(*param_2 + uVar12 * 8));
      lVar11 = param_4[1];
      uVar6 = (int)lVar11 + 1;
      *(uint *)(param_4 + 1) = uVar6;
      if (*(uint *)((longlong)param_4 + 0xc) < uVar6) {
        FUN_1446f48e2(param_4);
      }
      lVar7 = *param_4;
      *(undefined4 *)(lVar7 + (longlong)(int)lVar11 * 4) = uVar5;
      uVar12 = uVar13;
    } while (uVar9 != uVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5e334 FUN_146c5e334 body=340 status=ok
// SIG undefined FUN_146c5e334(void)

void FUN_146c5e334(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  FUN_14054c6c4(param_1 + 3);
  lVar7 = param_1[4];
  plVar1 = param_1 + 1;
  FUN_144a1a59e(plVar1,(int)lVar7 + 1,1);
  uVar10 = *(ulonglong *)
            (*(longlong *)
              (*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(*(uint *)param_1[3] >> 9) * 8) +
            (ulonglong)((*(uint *)param_1[3] & 0x1ff) << 4));
  iVar3 = (int)(uVar10 >> 0x20);
  iVar4 = (int)uVar10;
  if ((int)lVar7 < 2) {
    *(int *)*plVar1 = iVar4;
    *(int *)(*plVar1 + 4) = iVar3;
  }
  else {
    uVar5 = uVar10 & 0xffffffff;
    iVar8 = iVar3;
    if (1 < (int)param_1[4]) {
      lVar7 = 1;
      uVar5 = uVar10 & 0xffffffff;
      uVar10 = uVar10 >> 0x20;
      do {
        iVar9 = (int)uVar10;
        iVar6 = (int)uVar5;
        uVar2 = *(uint *)(param_1[3] + lVar7 * 4);
        uVar5 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                 (ulonglong)((uVar2 & 0x1ff) << 4));
        iVar8 = (int)(uVar5 >> 0x20);
        if (((iVar6 != iVar8 && iVar6 != (int)uVar5) && (iVar6 = iVar9, iVar9 != (int)uVar5)) &&
           (uVar10 != uVar5 >> 0x20)) {
          iVar6 = -1;
        }
        *(int *)(param_1[1] + lVar7 * 4) = iVar6;
        lVar7 = lVar7 + 1;
        uVar10 = uVar5 >> 0x20;
      } while (lVar7 < (int)param_1[4]);
    }
    iVar6 = ((int *)param_1[1])[1];
    iVar9 = -1;
    if (iVar6 == iVar3) {
      iVar9 = iVar4;
    }
    if (iVar6 == iVar4) {
      iVar9 = iVar3;
    }
    *(int *)param_1[1] = iVar9;
    iVar3 = *(int *)(param_1[1] + -8 + (longlong)(int)param_1[2] * 4);
    iVar4 = -1;
    if (iVar3 == iVar8) {
      iVar4 = (int)uVar5;
    }
    if (iVar3 == (int)uVar5) {
      iVar4 = iVar8;
    }
    *(int *)(param_1[1] + -4 + (longlong)(int)param_1[2] * 4) = iVar4;
  }
  return;
}



// FUNCTION 146c5e488 FUN_146c5e488 body=171 status=ok
// SIG undefined FUN_146c5e488(void)

undefined8 FUN_146c5e488(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  FUN_14054c6c4(param_1 + 1);
  uVar4 = (longlong)*(int *)(param_1 + 2) - 1;
  FUN_144a1a59e(param_1 + 3,uVar4 & 0xffffffff,1);
  uVar6 = 0;
  if (0 < (int)uVar4) {
    uVar6 = uVar4 & 0xffffffff;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    if (uVar5 - uVar6 == -1) {
      uVar3 = uVar6;
      if (param_3 != '\0') {
        FUN_146c5e534(param_1);
      }
      break;
    }
    uVar2 = FUN_146c061e0(*param_1,*(undefined4 *)(param_1[1] + 4 + uVar5 * 4),
                          *(undefined4 *)(param_1[1] + 8 + uVar5 * 4));
    *(undefined4 *)(param_1[3] + 4 + uVar5 * 4) = uVar2;
    uVar3 = uVar5 + 1;
    lVar1 = uVar5 * 4;
    uVar5 = uVar3;
  } while (*(int *)(param_1[3] + 4 + lVar1) != -1);
  return CONCAT71((int7)(uVar3 >> 8),(longlong)uVar4 <= (longlong)uVar3);
}



// FUNCTION 146c5e534 FUN_146c5e534 body=176 status=ok
// SIG undefined FUN_146c5e534(void)

ulonglong FUN_146c5e534(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)(int)param_1[4]) {
    lVar6 = 0;
    do {
      uVar1 = *(uint *)(param_1[3] + lVar6 * 4);
      if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
                   0xc + (ulonglong)((uVar1 & 0x1ff) << 4)) == -1) {
        iVar2 = *(int *)(param_1[1] + lVar6 * 4);
        iVar3 = *(int *)(param_1[1] + 4 + lVar6 * 4);
        FUN_146c13626(*param_1,&local_30);
        bVar4 = iVar2 == local_2c;
        bVar5 = iVar3 == local_30;
        uVar7 = CONCAT71((int7)((ulonglong)&local_30 >> 8),bVar4 && bVar5);
        if (bVar4 && bVar5) {
          FUN_146c5e6ba(param_1);
        }
        goto LAB_146c5e594;
      }
      lVar6 = lVar6 + 1;
    } while ((int)param_1[4] != lVar6);
  }
  uVar7 = 0;
LAB_146c5e594:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5e5e6 FUN_146c5e5e6 body=210 status=ok
// SIG undefined FUN_146c5e5e6(void)

void FUN_146c5e5e6(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1447a8aa0(param_2,0);
  }
  if (0 < (int)param_1[2]) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(param_1[1] + lVar6 * 4);
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      uVar5 = (ulonglong)(uVar2 & 0x1ff);
      local_38 = *(undefined8 *)(lVar4 + 0x10 + uVar5 * 0x18);
      puVar1 = (undefined4 *)(lVar4 + uVar5 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_2,iVar3);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_38;
      puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[2]);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5e6ba FUN_146c5e6ba body=118 status=ok
// SIG undefined FUN_146c5e6ba(void)

void FUN_146c5e6ba(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar5 = (longlong)(int)uVar1;
  if (1 < lVar5) {
    puVar3 = *(undefined4 **)(param_1 + 8);
    lVar6 = 0;
    puVar4 = puVar3;
    do {
      uVar2 = *puVar4;
      *puVar4 = puVar3[lVar5 + lVar6 + -1];
      puVar3[lVar5 + lVar6 + -1] = uVar2;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (-lVar6 != (ulonglong)(uVar1 >> 1));
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar5 = (longlong)(int)uVar1;
  if (1 < lVar5) {
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    lVar6 = 0;
    puVar4 = puVar3;
    do {
      uVar2 = *puVar4;
      *puVar4 = puVar3[lVar5 + lVar6 + -1];
      puVar3[lVar5 + lVar6 + -1] = uVar2;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (-lVar6 != (ulonglong)(uVar1 >> 1));
  }
  return;
}



// FUNCTION 146c5e730 FUN_146c5e730 body=110 status=ok
// SIG undefined FUN_146c5e730(void)

void FUN_146c5e730(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  lVar3 = param_2[1];
  uVar1 = (int)lVar3 - 1;
  FUN_144a1a59e(param_3,uVar1,1);
  if (1 < (int)lVar3) {
    uVar5 = 0;
    do {
      uVar2 = uVar5 + 1;
      uVar4 = FUN_146c061e0(param_1,*(undefined4 *)(*param_2 + uVar5 * 4),
                            *(undefined4 *)(*param_2 + 4 + uVar5 * 4));
      *(undefined4 *)(*param_3 + uVar5 * 4) = uVar4;
      uVar5 = uVar2;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146c5e79e FUN_146c5e79e body=138 status=ok
// SIG undefined FUN_146c5e79e(void)

undefined8 * FUN_146c5e79e(undefined8 *param_1)

{
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f3c3c0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = DAT_14c846364;
  *(undefined4 *)((longlong)param_1 + 0xac) = DAT_14c84636c;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x100000000;
  param_1[0x16] = 0x20000000a;
  param_1[0x17] = 0x43b4000000000000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  return param_1;
}



// FUNCTION 146c5e828 FUN_146c5e828 body=158 status=ok
// SIG undefined FUN_146c5e828(void)

undefined8 * FUN_146c5e828(undefined8 *param_1)

{
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f3c3c0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = DAT_14c846364;
  *(undefined4 *)((longlong)param_1 + 0xac) = DAT_14c84636c;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x100000000;
  param_1[0x16] = 0x20000000a;
  param_1[0x17] = 0x43b4000000000000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *param_1 = &PTR_FUN_149f3c3d0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f000000;
  return param_1;
}



// FUNCTION 146c5e8c6 FUN_146c5e8c6 body=186 status=ok
// SIG undefined FUN_146c5e8c6(void)

void FUN_146c5e8c6(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  if (0 < (int)param_2) {
    FUN_14051b394(param_1 + 8,param_2,1);
  }
  if (0 < param_3) {
    FUN_146bd783c(param_1 + 0x58,param_3,1);
    FUN_146bd783c(param_1 + 0x68,param_3,1);
    FUN_146bd783c(param_1 + 0x78,param_3,1);
    FUN_144a1a59e(param_1 + 0x88,param_3,1);
  }
  if (0 < param_4) {
    FUN_1407524e2(param_1 + 0x18,param_4,1);
    FUN_144a1a59e(param_1 + 0x28,param_4,1);
  }
  if (param_5 < 1) {
    return;
  }
  FUN_146bca1c8(param_1 + 0x38,param_5,1);
  FUN_144a1a59e(param_1 + 0x48,param_5,1);
  return;
}



// FUNCTION 146c5e980 FUN_146c5e980 body=1678 status=ok
// SIG undefined FUN_146c5e980(void)

longlong FUN_146c5e980(longlong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_178 [32];
  int local_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar17 = 3;
  if (3 < (int)*(uint *)(param_1 + 0xb0)) {
    uVar17 = (ulonglong)*(uint *)(param_1 + 0xb0);
  }
  uVar28 = 2;
  if (2 < (int)*(uint *)(param_1 + 0xb4)) {
    uVar28 = (ulonglong)*(uint *)(param_1 + 0xb4);
  }
  uVar14 = (uint)uVar28;
  iVar16 = (int)uVar17;
  local_158 = uVar14 * iVar16;
  fVar34 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb8);
  iVar18 = iVar16 - (uint)(fVar34 < 359.999);
  FUN_146c5e8c6(param_1,local_158,(uVar14 - 1) * iVar18 * 2,local_158);
  fVar2 = *(float *)(param_1 + 0xa0);
  fVar3 = *(float *)(param_1 + 0xb8);
  fVar4 = *(float *)(param_1 + 0xbc);
  fVar5 = *(float *)(param_1 + 0xd0);
  dVar6 = 0.5 / (double)fVar2;
  lVar32 = 4;
  lVar26 = 0;
  uVar27 = 0;
  do {
    dVar36 = (double)(int)uVar27 *
             (((double)(fVar4 - fVar3) * 0.017453292519943295) / (double)iVar18) +
             (double)fVar3 * 0.017453292519943295;
    dVar35 = cos(dVar36);
    dVar36 = sin(dVar36);
    uVar15 = 0;
    lVar12 = lVar26;
    lVar13 = lVar32;
    do {
      dVar37 = (double)(int)uVar15 * ((double)(fVar2 - fVar5) / (double)(int)(uVar14 - 1)) +
               (double)fVar5;
      dVar38 = dVar36 * dVar37;
      dVar37 = dVar37 * dVar35;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      (&local_108)[*(int *)(param_1 + 0xc4)] = dVar37;
      (&local_108)[*(int *)(param_1 + 200)] = dVar38;
      lVar29 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar29 + 0x10 + lVar12) = local_f8;
      puVar1 = (undefined4 *)(lVar29 + lVar12);
      *puVar1 = (undefined4)local_108;
      puVar1[1] = local_108._4_4_;
      puVar1[2] = (undefined4)uStack_100;
      puVar1[3] = uStack_100._4_4_;
      lVar29 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar29 + -4 + lVar13) = (float)(dVar37 * dVar6 + 0.5);
      *(float *)(lVar29 + lVar13) = (float)(dVar38 * dVar6 + 0.5);
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + uVar17 * 8;
      lVar12 = lVar12 + uVar17 * 0x18;
    } while (uVar28 != uVar15);
    uVar27 = uVar27 + 1;
    lVar32 = lVar32 + 8;
    lVar26 = lVar26 + 0x18;
  } while (uVar27 != uVar17);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar26 = 0;
    lVar32 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x28) + lVar32 * 4) = (int)lVar32;
      *(int *)(*(longlong *)(param_1 + 0x48) + lVar32 * 4) = (int)lVar32;
      lVar12 = *(longlong *)(param_1 + 0x38);
      *(undefined4 *)(lVar12 + 8 + lVar26) = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(lVar12 + lVar26) = *(undefined8 *)(param_1 + 0xa4);
      lVar32 = lVar32 + 1;
      lVar26 = lVar26 + 0xc;
    } while (lVar32 < *(int *)(param_1 + 0x10));
  }
  local_140 = (ulonglong)(iVar16 - 1U);
  iVar18 = 0;
  lVar32 = 0;
  uVar27 = 1;
  uVar15 = uVar17;
  uVar23 = 0;
  lVar26 = 0;
  do {
    local_150 = lVar26;
    local_118 = uVar15;
    local_148 = uVar27;
    uVar19 = (int)uVar23 * iVar16;
    local_120 = (ulonglong)uVar19;
    uVar9 = uVar19 + iVar16;
    local_128 = (ulonglong)uVar9;
    lVar12 = (longlong)(int)lVar32;
    lVar29 = -(lVar32 << 0x20);
    local_110 = lVar12 * 4;
    lVar26 = lVar12 * 0xc;
    lVar13 = 0;
    do {
      lVar30 = lVar12;
      iVar7 = (int)lVar13;
      iVar20 = (int)local_118 + iVar7;
      iVar25 = (int)local_118 + iVar7 + 1;
      iVar31 = (int)local_150 + iVar7;
      bVar33 = *(char *)(param_1 + 0x98) != '\0';
      iVar21 = iVar31;
      if (bVar33) {
        iVar21 = iVar20;
      }
      lVar32 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar32 + lVar26) = iVar21;
      iVar21 = iVar20;
      if (bVar33) {
        iVar21 = iVar31;
      }
      *(int *)(lVar32 + 4 + lVar26) = iVar25;
      *(int *)(lVar32 + 8 + lVar26) = iVar21;
      bVar33 = *(char *)(param_1 + 0x98) != '\0';
      iVar21 = iVar31;
      if (bVar33) {
        iVar21 = iVar20;
      }
      lVar32 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar32 + lVar26) = iVar21;
      iVar21 = iVar20;
      if (bVar33) {
        iVar21 = iVar31;
      }
      *(int *)(lVar32 + 4 + lVar26) = iVar25;
      *(int *)(lVar32 + 8 + lVar26) = iVar21;
      iVar21 = iVar20;
      iVar8 = iVar31;
      if (*(char *)(param_1 + 0x98) == '\0') {
        iVar21 = iVar31;
        iVar8 = iVar20;
      }
      lVar32 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar32 + lVar26) = iVar21;
      *(int *)(lVar32 + 4 + lVar26) = iVar25;
      *(int *)(lVar32 + 8 + lVar26) = iVar8;
      *(int *)(*(longlong *)(param_1 + 0x88) + local_110 + lVar13 * 8) = iVar18;
      iVar21 = (int)local_150 + iVar7 + 1;
      bVar33 = *(char *)(param_1 + 0x98) != '\0';
      iVar7 = iVar31;
      if (bVar33) {
        iVar7 = iVar25;
      }
      lVar32 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar32 + 0xc + lVar26) = iVar7;
      iVar7 = iVar25;
      if (bVar33) {
        iVar7 = iVar31;
      }
      *(int *)(lVar32 + 0x10 + lVar26) = iVar21;
      *(int *)(lVar32 + 0x14 + lVar26) = iVar7;
      bVar33 = *(char *)(param_1 + 0x98) != '\0';
      iVar7 = iVar31;
      if (bVar33) {
        iVar7 = iVar25;
      }
      lVar32 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar32 + 0xc + lVar26) = iVar7;
      iVar7 = iVar25;
      if (bVar33) {
        iVar7 = iVar31;
      }
      *(int *)(lVar32 + 0x10 + lVar26) = iVar21;
      *(int *)(lVar32 + 0x14 + lVar26) = iVar7;
      iVar7 = iVar31;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar7 = iVar25;
        iVar25 = iVar31;
      }
      lVar32 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar32 + 0xc + lVar26) = iVar7;
      *(int *)(lVar32 + 0x10 + lVar26) = iVar21;
      *(int *)(lVar32 + 0x14 + lVar26) = iVar25;
      *(int *)(*(longlong *)(param_1 + 0x88) + local_110 + 4 + lVar13 * 8) = iVar18;
      iVar18 = (*(byte *)(param_1 + 0xc0) ^ 1) + iVar18;
      lVar32 = lVar30 + 2;
      lVar29 = lVar29 + -0x200000000;
      lVar13 = lVar13 + 1;
      lVar26 = lVar26 + 0x18;
      lVar12 = lVar32;
    } while (iVar16 + -1 != (int)lVar13);
    if (359.999 <= fVar34) {
      uVar22 = (iVar16 - 1U) + uVar9;
      uVar10 = uVar9 - 1;
      uVar11 = uVar10;
      uVar24 = uVar22;
      if (*(char *)(param_1 + 0x98) != '\0') {
        uVar11 = uVar22;
        uVar24 = uVar10;
      }
      lVar26 = *(longlong *)(param_1 + 0x58);
      lVar32 = (-lVar29 >> 0x1e) * 3;
      *(uint *)(lVar26 + lVar32) = uVar11;
      *(uint *)(lVar26 + 4 + lVar32) = uVar9;
      *(uint *)(lVar26 + 8 + lVar32) = uVar24;
      uVar11 = uVar10;
      uVar24 = uVar22;
      if (*(char *)(param_1 + 0x98) != '\0') {
        uVar11 = uVar22;
        uVar24 = uVar10;
      }
      lVar26 = *(longlong *)(param_1 + 0x78);
      *(uint *)(lVar26 + lVar32) = uVar11;
      *(uint *)(lVar26 + 4 + lVar32) = uVar9;
      *(uint *)(lVar26 + 8 + lVar32) = uVar24;
      uVar11 = uVar22;
      uVar24 = uVar10;
      if (*(char *)(param_1 + 0x98) == '\0') {
        uVar11 = uVar10;
        uVar24 = uVar22;
      }
      lVar26 = *(longlong *)(param_1 + 0x68);
      *(uint *)(lVar26 + lVar32) = uVar11;
      *(uint *)(lVar26 + 4 + lVar32) = uVar9;
      *(uint *)(lVar26 + 8 + lVar32) = uVar24;
      *(int *)(*(longlong *)(param_1 + 0x88) + (-lVar29 >> 0x1e)) = iVar18;
      uVar24 = uVar10;
      uVar11 = uVar9;
      if (*(char *)(param_1 + 0x98) != '\0') {
        uVar24 = uVar9;
        uVar11 = uVar10;
      }
      lVar26 = *(longlong *)(param_1 + 0x58);
      lVar12 = 0x100000000 - lVar29 >> 0x1e;
      lVar32 = lVar12 * 3;
      *(uint *)(lVar26 + lVar32) = uVar24;
      *(uint *)(lVar26 + 4 + lVar32) = uVar19;
      *(uint *)(lVar26 + 8 + lVar32) = uVar11;
      uVar24 = uVar10;
      uVar11 = uVar9;
      if (*(char *)(param_1 + 0x98) != '\0') {
        uVar24 = uVar9;
        uVar11 = uVar10;
      }
      lVar26 = *(longlong *)(param_1 + 0x78);
      *(uint *)(lVar26 + lVar32) = uVar24;
      *(uint *)(lVar26 + 4 + lVar32) = uVar19;
      *(uint *)(lVar26 + 8 + lVar32) = uVar11;
      uVar11 = uVar10;
      if (*(char *)(param_1 + 0x98) != '\0') {
        uVar11 = uVar9;
        uVar9 = uVar10;
      }
      lVar26 = *(longlong *)(param_1 + 0x68);
      *(uint *)(lVar26 + lVar32) = uVar11;
      *(uint *)(lVar26 + 4 + lVar32) = uVar19;
      *(uint *)(lVar26 + 8 + lVar32) = uVar9;
      *(int *)(*(longlong *)(param_1 + 0x88) + lVar12) = iVar18;
      lVar32 = lVar30 + 4;
      iVar18 = iVar18 + (*(byte *)(param_1 + 0xc0) ^ 1);
    }
    uVar9 = (int)local_148 + 1;
    uVar27 = (ulonglong)uVar9;
    uVar15 = local_118 + uVar17;
    uVar23 = local_148;
    lVar26 = local_150 + uVar17;
  } while (uVar9 != uVar14);
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
  local_138 = uVar28;
  local_130 = uVar17;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5f010 FUN_146c5f010 body=111 status=ok
// SIG undefined FUN_146c5f010(void)

undefined8 * FUN_146c5f010(undefined8 *param_1)

{
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f3c3e0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = DAT_14c846364;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c84636c;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x100000000;
  return param_1;
}



// FUNCTION 146c5f080 FUN_146c5f080 body=82 status=ok
// SIG undefined FUN_146c5f080(void)

void FUN_146c5f080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f3c3e0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd8050(param_1);
  return;
}



// FUNCTION 146c5f0d2 FUN_146c5f0d2 body=403 status=ok
// SIG undefined FUN_146c5f0d2(void)

ulonglong *
FUN_146c5f0d2(ulonglong *param_1,double param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = (param_4[1] - param_3[1]) * 0.5;
  dVar3 = (*param_4 - *param_3) * 0.5;
  dVar8 = SQRT(dVar3 * dVar3 + dVar5 * dVar5);
  dVar6 = param_2 * param_2 - dVar8 * dVar8;
  if (dVar6 < 0.0) {
    dVar6 = sqrt(dVar6);
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar7 = -dVar3 * (dVar6 / dVar8);
  dVar6 = (dVar6 / dVar8) * dVar5;
  dVar8 = dVar5 + dVar2 + dVar7;
  dVar9 = dVar3 + dVar1 + dVar6;
  dVar7 = (dVar5 + dVar2) - dVar7;
  dVar6 = (dVar3 + dVar1) - dVar6;
  dVar5 = ABS((dVar9 - dVar1) * *param_5 + (dVar8 - dVar2) * param_5[1]);
  dVar3 = ABS((dVar6 - dVar1) * *param_5 + (dVar7 - dVar2) * param_5[1]);
  uVar4 = -(ulonglong)(dVar5 < dVar3);
  if (dVar3 <= dVar5) {
    dVar8 = dVar7;
  }
  *param_1 = ~uVar4 & (ulonglong)dVar6 | (ulonglong)dVar9 & uVar4;
  param_1[1] = (ulonglong)dVar8;
  return param_1;
}



// FUNCTION 146c5f265 FUN_146c5f265 body=423 status=ok
// SIG undefined FUN_146c5f265(void)

void FUN_146c5f265(double *param_1,double *param_2,double *param_3,double param_4,int param_5,
                  longlong *param_6)

{
  int iVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar7 = (double)FUN_144afd35e(param_1[1] - param_3[1],(*param_1 - *param_3) + param_4);
  dVar7 = dVar7 + dVar7;
  dVar8 = (double)FUN_144afd35e(param_2[1] - param_3[1],(*param_2 - *param_3) + param_4);
  dVar8 = dVar8 + dVar8;
  if (3.1415927410125732 < ABS(dVar8 - dVar7)) {
    if (dVar8 <= dVar7) {
      dVar8 = dVar8 + 6.2831854820251465;
    }
    else {
      dVar7 = dVar7 + 6.2831854820251465;
    }
  }
  iVar1 = param_5 + -1;
  dVar6 = 0.0;
  do {
    dVar5 = dVar6 * ((dVar8 - dVar7) / (double)iVar1) + dVar7;
    dVar9 = cos(dVar5);
    dVar10 = sin(dVar5);
    dVar5 = param_3[1];
    dVar2 = *param_3;
    iVar3 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar3 + 1U) {
      FUN_14489624a(param_6,iVar3);
    }
    lVar4 = *param_6;
    *(double *)(lVar4 + (longlong)iVar3 * 0x10) = dVar9 * param_4 + dVar2;
    *(double *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = dVar10 * param_4 + dVar5;
    dVar6 = dVar6 + 1.0;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}



// FUNCTION 146c5f40c FUN_146c5f40c body=853 status=ok
// SIG undefined FUN_146c5f40c(void)

void FUN_146c5f40c(double *param_1,double *param_2,double *param_3,double param_4,int param_5,
                  longlong *param_6)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  ulonglong *local_e8;
  longlong *local_e0;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (1 < param_5) {
    dVar3 = param_1[1] - param_2[1];
    dVar5 = *param_1 - *param_2;
    dVar8 = SQRT(dVar5 * dVar5 + dVar3 * dVar3);
    dVar7 = 0.0;
    if (0.0 < dVar8) {
      dVar3 = dVar3 * (1.0 / dVar8);
    }
    else {
      dVar3 = 0.0;
    }
    dVar5 = (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar5 * (1.0 / dVar8)));
    dVar6 = param_3[1] - param_2[1];
    dVar8 = *param_3 - *param_2;
    dVar4 = SQRT(dVar8 * dVar8 + dVar6 * dVar6);
    dVar8 = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar8 * (1.0 / dVar4)));
    if (0.0 < dVar4) {
      dVar7 = dVar6 * (1.0 / dVar4);
    }
    dVar4 = dVar5 * dVar8 + dVar3 * dVar7;
    if (1e-08 < ABS(ABS(dVar4) + -1.0)) {
      dVar6 = 1.0;
      if (dVar4 <= 1.0) {
        dVar6 = dVar4;
      }
      dVar4 = acos((double)(-(ulonglong)(dVar4 < -1.0) & 0xbff0000000000000 |
                           ~-(ulonglong)(dVar4 < -1.0) & (ulonglong)dVar6));
      dVar4 = tan(dVar4 * 0.5);
      dVar4 = (double)(~-(ulonglong)(ABS(dVar4) <= 1e-08) & (ulonglong)(param_4 / dVar4));
      local_98 = dVar3 * dVar4 + param_2[1];
      local_a0 = dVar5 * dVar4 + *param_2;
      local_a8 = dVar7 * dVar4 + param_2[1];
      local_b0 = dVar4 * dVar8 + *param_2;
      dVar3 = param_1[1] - local_98;
      dVar7 = *param_1 - local_a0;
      dVar5 = SQRT(dVar7 * dVar7 + dVar3 * dVar3);
      local_b8 = 0.0;
      local_c0 = -(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar7 * (1.0 / dVar5));
      if (0.0 < dVar5) {
        local_b8 = dVar3 * (1.0 / dVar5);
      }
      local_e8 = &local_c0;
      FUN_146c5f0d2(local_d0,param_4,&local_a0,&local_b0);
      local_e0 = param_6;
      local_e8 = (ulonglong *)CONCAT44(local_e8._4_4_,param_5);
      FUN_146c5f265(&local_a0,&local_b0,local_d0,param_4);
      if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  iVar2 = (int)param_6[1];
  *(uint *)(param_6 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
    FUN_14489624a(param_6,iVar2);
  }
  dVar3 = param_2[1];
  pdVar1 = (double *)(*param_6 + (longlong)iVar2 * 0x10);
  *pdVar1 = *param_2;
  pdVar1[1] = dVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_108);
}



// FUNCTION 146c5f762 FUN_146c5f762 body=803 status=ok
// SIG undefined FUN_146c5f762(void)

void FUN_146c5f762(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  double dVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  local_c0 = 3.3999999521443642e+38;
  FUN_146bfae00(param_3,&local_c0,uVar5);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    uVar6 = 1;
    do {
      FUN_146bca7ae(param_2,&local_c0,
                    (longlong)((int)(uVar1 + (int)uVar6 + -2) % (int)uVar1) * 0x18 + *param_1,2);
      FUN_146bca7ae(param_2,&local_d0,*param_1 + lVar4,2);
      uVar3 = 0;
      if (uVar5 != uVar6) {
        uVar3 = uVar6;
      }
      FUN_146bca7ae(param_2,&local_e0,uVar3 * 0x18 + *param_1,2);
      dVar8 = local_d8 - local_c8;
      dVar10 = local_e0 - local_d0;
      dVar11 = SQRT(dVar10 * dVar10 + dVar8 * dVar8);
      if (0.0 < dVar11) {
        dVar8 = dVar8 * (1.0 / dVar11);
      }
      else {
        dVar8 = 0.0;
      }
      dVar2 = local_b8 - local_c8;
      dVar12 = local_c0 - local_d0;
      dVar9 = SQRT(dVar12 * dVar12 + dVar2 * dVar2);
      if (0.0 < dVar9) {
        dVar2 = dVar2 * (1.0 / dVar9);
      }
      else {
        dVar2 = 0.0;
      }
      dVar10 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar12 * (1.0 / dVar9))) *
               (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar10 * (1.0 / dVar11))) +
               dVar8 * dVar2;
      dVar8 = 1.0;
      if (dVar10 <= 1.0) {
        dVar8 = dVar10;
      }
      dVar10 = acos((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar8));
      dVar11 = local_d0 - local_c0;
      dVar9 = local_c8 - local_b8;
      dVar8 = tan(dVar10 * 0.5);
      dVar8 = dVar8 * SQRT(dVar11 * dVar11 + dVar9 * dVar9) * 0.5;
      dVar11 = local_e0 - local_d0;
      dVar9 = local_d8 - local_c8;
      dVar10 = tan(dVar10 * 0.5);
      dVar10 = dVar10 * SQRT(dVar11 * dVar11 + dVar9 * dVar9) * 0.5;
      if (dVar10 <= dVar8) {
        dVar8 = dVar10;
      }
      *(double *)(*param_3 + -8 + uVar6 * 8) = dVar8;
      lVar4 = lVar4 + 0x18;
      bVar7 = uVar6 != uVar5;
      uVar6 = uVar6 + 1;
    } while (bVar7);
  }
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5fa86 FUN_146c5fa86 body=196 status=ok
// SIG undefined FUN_146c5fa86(void)

double FUN_146c5fa86(undefined8 *param_1,double param_2)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = *(int *)(param_1 + 1);
  pdVar2 = (double *)*param_1;
  dVar5 = 0.0;
  if (1 < (longlong)iVar1) {
    lVar3 = 0x18;
    do {
      dVar4 = *(double *)((longlong)pdVar2 + lVar3 + -0x18) - *(double *)((longlong)pdVar2 + lVar3);
      dVar6 = *(double *)((longlong)pdVar2 + lVar3 + -0x10) -
              *(double *)((longlong)pdVar2 + lVar3 + 8);
      dVar7 = *(double *)((longlong)pdVar2 + lVar3 + -8) -
              *(double *)((longlong)pdVar2 + lVar3 + 0x10);
      dVar4 = SQRT(dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6);
      if (dVar4 <= param_2) {
        dVar4 = param_2;
      }
      dVar5 = dVar5 + dVar4;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  lVar3 = (longlong)(iVar1 + -1);
  dVar4 = SQRT((pdVar2[2] - pdVar2[lVar3 * 3 + 2]) * (pdVar2[2] - pdVar2[lVar3 * 3 + 2]) +
               (*pdVar2 - pdVar2[lVar3 * 3]) * (*pdVar2 - pdVar2[lVar3 * 3]) +
               (pdVar2[1] - pdVar2[lVar3 * 3 + 1]) * (pdVar2[1] - pdVar2[lVar3 * 3 + 1]));
  if (dVar4 <= param_2) {
    dVar4 = param_2;
  }
  return dVar4 + dVar5;
}



// FUNCTION 146c5fb4a FUN_146c5fb4a body=132 status=ok
// SIG undefined FUN_146c5fb4a(void)

double FUN_146c5fb4a(longlong *param_1,uint param_2,double param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(uint *)(param_1 + 1) == param_2) {
    dVar3 = (double)FUN_146c5fa86(param_1,0x3fb999999999999a);
    return dVar3;
  }
  if (0 < (int)param_2) {
    lVar1 = *param_1;
    dVar3 = 0.0;
    lVar2 = 0x18;
    do {
      dVar4 = *(double *)(lVar1 + -0x18 + lVar2) - *(double *)(lVar1 + lVar2);
      dVar5 = *(double *)(lVar1 + -0x10 + lVar2) - *(double *)(lVar1 + 8 + lVar2);
      dVar6 = *(double *)(lVar1 + -8 + lVar2) - *(double *)(lVar1 + 0x10 + lVar2);
      dVar4 = SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
      if (dVar4 <= param_3) {
        dVar4 = param_3;
      }
      dVar3 = dVar3 + dVar4;
      lVar2 = lVar2 + 0x18;
    } while ((ulonglong)param_2 * 0x18 + 0x18 != lVar2);
    return dVar3;
  }
  return 0.0;
}



// FUNCTION 146c5fbce FUN_146c5fbce body=414 status=ok
// SIG undefined FUN_146c5fbce(void)

undefined8 *
FUN_146c5fbce(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f3c3f0;
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_146c7ebe6(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 * 0x38);
  }
  *(undefined1 *)(param_1 + 0x16) = param_3;
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_1408fdf90(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x19] = param_5;
  uVar3 = param_6[1];
  param_1[0x1a] = *param_6;
  param_1[0x1b] = uVar3;
  param_1[0x1c] = param_6[2];
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x1f) = 1;
  *(undefined1 *)((longlong)param_1 + 0xfa) = param_7;
  param_1[0x20] = param_8;
  *(undefined1 *)(param_1 + 0x21) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x10c) = param_10;
  return param_1;
}



// FUNCTION 146c5fd6c FUN_146c5fd6c body=65 status=ok
// SIG undefined FUN_146c5fd6c(void)

void FUN_146c5fd6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f3c3f0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd8050(param_1);
  return;
}



// FUNCTION 146c5fdae FUN_146c5fdae body=1231 status=ok
// SIG undefined FUN_146c5fdae(void)

void FUN_146c5fdae(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,double *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 **local_170;
  longlong *local_160;
  longlong *local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong *local_138;
  double *local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar5 = *(uint *)(param_2 + 1);
  local_160 = param_4;
  local_138 = param_3;
  if (2 < (int)uVar5) {
    uVar9 = *(byte *)(param_1 + 0xb0) ^ 1;
    local_158 = param_2;
    if (*(byte *)(param_1 + 0xb0) == 0) {
      puVar8 = (undefined8 *)*param_2;
      iVar10 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar10 + 1U) {
        FUN_1403e3958(param_7,iVar10);
      }
      lVar7 = *param_7;
      *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar10 * 0x18) = puVar8[2];
      uVar3 = puVar8[1];
      puVar1 = (undefined8 *)(lVar7 + (longlong)iVar10 * 0x18);
      *puVar1 = *puVar8;
      puVar1[1] = uVar3;
    }
    local_150 = (ulonglong)(uVar5 - 1);
    local_130 = param_6 + 3;
    uVar12 = (ulonglong)uVar9;
    local_140 = (ulonglong)(uVar5 - uVar9);
    plVar14 = local_158;
    local_148 = (ulonglong)uVar5;
    do {
      iVar10 = (int)uVar12;
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        iVar6 = ((int)local_150 + iVar10) % (int)local_148;
        iVar10 = (int)((ulonglong)(iVar10 + 1) % (local_148 & 0xffffffff));
      }
      else {
        iVar6 = iVar10 + -1;
        iVar10 = iVar10 + 1;
      }
      FUN_146bca7ae(param_6,local_f0,(longlong)iVar6 * 0x18 + *plVar14,2);
      FUN_146bca7ae(param_6,&local_100,uVar12 * 0x18 + *plVar14,2);
      FUN_146bca7ae(param_6,local_110,(longlong)iVar10 * 0x18 + *plVar14,2);
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      dVar17 = *(double *)(param_1 + 0x100);
      if (*(char *)(param_1 + 0x108) == '\x01') {
        dVar15 = *(double *)(*param_5 + uVar12 * 8);
        if (*(char *)(*local_138 + uVar12) == '\0') {
          dVar16 = *(double *)(*local_160 + uVar12 * 8);
          dVar15 = dVar15 + *(double *)(param_1 + 200);
          if (dVar15 <= dVar16) {
            dVar16 = dVar15;
          }
          if (dVar16 <= dVar17) {
            dVar17 = dVar16;
          }
          goto LAB_146c60056;
        }
        if (dVar15 <= dVar17) {
          dVar17 = dVar15;
        }
        dVar17 = dVar17 - *(double *)(param_1 + 200);
        dVar16 = *(double *)(*local_160 + uVar12 * 8);
        if (dVar16 <= dVar17) {
          dVar17 = dVar16;
        }
        if (0.0 < dVar17) goto LAB_146c60056;
LAB_146c60072:
        if ((9.999999747378752e-05 < dVar15) ||
           (9.999999747378752e-05 < *(double *)(*local_160 + uVar12 * 8))) {
          if (0 < *(int *)(param_1 + 0x10c)) {
            iVar10 = 0;
            do {
              uVar4 = uStack_120;
              lVar7 = (longlong)(int)uStack_120;
              uVar5 = (int)uStack_120 + 1;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
              if (uStack_120._4_4_ < uVar5) {
                FUN_14489624a(&local_128,uVar4 & 0xffffffff);
              }
              local_128[lVar7 * 2] = local_100;
              (local_128 + lVar7 * 2)[1] = uStack_f8;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 0x10c));
          }
        }
        else {
          uStack_120 = 1;
          FUN_14489624a(&local_128,0);
          *local_128 = local_100;
          local_128[1] = uStack_f8;
        }
      }
      else {
        if (*(char *)(*local_138 + uVar12) != '\0') {
          dVar17 = dVar17 - *(double *)(param_1 + 200);
        }
LAB_146c60056:
        if (dVar17 <= 9.999999747378752e-05) {
          dVar15 = *(double *)(*param_5 + uVar12 * 8);
          goto LAB_146c60072;
        }
        local_178 = *(undefined4 *)(param_1 + 0x10c);
        local_170 = &local_128;
        FUN_146c5f40c(local_f0,&local_100,local_110);
      }
      puVar8 = local_128;
      lVar7 = (longlong)(int)uStack_120;
      if (lVar7 != 0) {
        lVar11 = 0;
        do {
          local_c8 = *(undefined8 *)((longlong)puVar8 + lVar11);
          uStack_c0 = ((undefined8 *)((longlong)puVar8 + lVar11))[1];
          local_b8 = 0;
          FUN_146bed047(&local_e0,local_130,&local_c8);
          dVar17 = local_d0 + param_6[2];
          dVar15 = local_d8 + param_6[1];
          dVar16 = local_e0 + *param_6;
          iVar10 = (int)param_7[1];
          lVar13 = (longlong)iVar10;
          *(uint *)(param_7 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar10 + 1U) {
            FUN_1403e3958(param_7,iVar10);
          }
          lVar2 = *param_7;
          *(double *)(lVar2 + lVar13 * 0x18) = dVar16;
          *(double *)(lVar2 + 8 + lVar13 * 0x18) = dVar15;
          *(double *)(lVar2 + 0x10 + lVar13 * 0x18) = dVar17;
          lVar11 = lVar11 + 0x10;
          plVar14 = local_158;
        } while (lVar7 * 0x10 != lVar11);
      }
      if (local_128 != (undefined8 *)0x0) {
        FUN_1400020a8(local_128);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != local_140);
    if (*(char *)(param_1 + 0xb0) == '\0') {
      puVar8 = (undefined8 *)((longlong)((int)plVar14[1] + -1) * 0x18 + *plVar14);
      iVar10 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar10 + 1U) {
        FUN_1403e3958(param_7,iVar10);
      }
      lVar7 = *param_7;
      *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar10 * 0x18) = puVar8[2];
      uVar3 = puVar8[1];
      puVar1 = (undefined8 *)(lVar7 + (longlong)iVar10 * 0x18);
      *puVar1 = *puVar8;
      puVar1[1] = uVar3;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c6027e FUN_146c6027e body=170 status=ok
// SIG undefined FUN_146c6027e(void)

undefined8 * FUN_146c6027e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f3c400;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x14] = DAT_14c8464e0;
  param_1[0x15] = uVar1;
  param_1[0x16] = DAT_14c8464f0;
  param_1[0x19] = 0x4024000000000000;
  param_1[0x1a] = 0x4024000000000000;
  param_1[0x1b] = 0x800000008;
  param_1[0x17] = DAT_14c846364;
  *(undefined4 *)(param_1 + 0x18) = DAT_14c84636c;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x100000000;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}



// FUNCTION 146c60328 FUN_146c60328 body=218 status=ok
// SIG undefined FUN_146c60328(void)

undefined8 * FUN_146c60328(undefined8 *param_1)

{
  undefined8 uVar1;
  
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f3c400;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x14] = DAT_14c8464e0;
  param_1[0x15] = uVar1;
  param_1[0x16] = DAT_14c8464f0;
  param_1[0x19] = 0x4024000000000000;
  param_1[0x1a] = 0x4024000000000000;
  param_1[0x1b] = 0x800000008;
  param_1[0x17] = DAT_14c846364;
  *(undefined4 *)(param_1 + 0x18) = DAT_14c84636c;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x100000000;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *param_1 = &PTR_FUN_149f3c420;
  param_1[0x1e] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x1f) = 0x10;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 146c60402 FUN_146c60402 body=3516 status=ok
// SIG undefined FUN_146c60402(void)

longlong * FUN_146c60402(longlong *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  float fVar13;
  byte bVar14;
  float fVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  undefined4 uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_278 [32];
  double local_258;
  float local_24c;
  uint local_248;
  int local_244;
  ulonglong local_240;
  int local_234;
  ulonglong local_230;
  ulonglong local_228;
  double local_220;
  ulonglong local_218;
  uint local_20c;
  int local_208;
  uint local_204;
  float local_200;
  float local_1fc;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
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
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  uVar22 = *(uint *)(param_1 + 0x1b);
  if ((int)*(uint *)(param_1 + 0x1b) < 3) {
    uVar22 = 2;
  }
  local_240 = (ulonglong)uVar22;
  uVar28 = *(uint *)((longlong)param_1 + 0xdc);
  if ((int)*(uint *)((longlong)param_1 + 0xdc) < 3) {
    uVar28 = 2;
  }
  uVar32 = (ulonglong)uVar28;
  local_220 = 4.94065645841247e-324;
  if (1 < (int)*(uint *)(param_1 + 0x1f)) {
    local_220 = (double)(ulonglong)*(uint *)(param_1 + 0x1f);
  }
  local_248 = uVar22 + 2;
  uVar20 = uVar28 + 2;
  iVar7 = 4;
  for (bVar14 = *(byte *)((longlong)param_1 + 0xfc); bVar14 != 0; bVar14 = bVar14 - 1 & bVar14) {
    iVar7 = iVar7 + -1;
  }
  iVar17 = uVar20 * local_248;
  iVar7 = (SUB84(local_220,0) + -1) * iVar7;
  local_234 = uVar22 + 1;
  local_244 = uVar28 + 1;
  local_258 = (double)CONCAT44(local_258._4_4_,iVar7 + iVar17);
  FUN_146c5e8c6(param_1);
  uVar22 = iVar7 + iVar17;
  if (uVar22 != 0 && SCARRY4(iVar7,iVar17) == (int)uVar22 < 0) {
    lVar16 = 0;
    uVar26 = 0;
    do {
      *(int *)(param_1[9] + uVar26 * 4) = (int)uVar26;
      *(int *)(param_1[5] + uVar26 * 4) = (int)uVar26;
      lVar9 = param_1[7];
      *(int *)(lVar9 + 8 + lVar16) = (int)param_1[0x18];
      *(longlong *)(lVar9 + lVar16) = param_1[0x17];
      uVar26 = uVar26 + 1;
      lVar16 = lVar16 + 0xc;
    } while (uVar22 != uVar26);
  }
  dVar3 = (double)param_1[0x1e] + (double)param_1[0x1e];
  fVar38 = (float)((double)param_1[0x19] + dVar3);
  fVar39 = 1e-06;
  if (1e-06 <= fVar38) {
    fVar39 = fVar38;
  }
  fVar37 = (float)(dVar3 + (double)param_1[0x1a]);
  fVar38 = 1e-06;
  if (1e-06 <= fVar37) {
    fVar38 = fVar37;
  }
  local_258 = (double)(fVar38 * -0.5);
  (**(code **)(*param_1 + 0x10))(param_1,&local_108,0,(double)(fVar39 * -0.5));
  local_258 = (double)(fVar38 * -0.5);
  (**(code **)(*param_1 + 0x10))(param_1,&local_120,1,(double)(fVar39 * 0.5));
  local_258 = (double)(fVar38 * 0.5);
  (**(code **)(*param_1 + 0x10))(param_1,&local_138,2,(double)(fVar39 * 0.5));
  local_258 = (double)(fVar38 * 0.5);
  (**(code **)(*param_1 + 0x10))(param_1,&local_150,3,(double)(fVar39 * -0.5));
  fVar37 = 1.0;
  if (((fVar39 == fVar38) && (!NAN(fVar39) && !NAN(fVar38))) || ((char)param_1[0x1c] == '\0')) {
    local_24c = 1.0;
  }
  else if (fVar39 <= fVar38) {
    local_24c = 1.0;
    fVar37 = fVar39 / fVar38;
  }
  else {
    local_24c = fVar38 / fVar39;
  }
  local_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  local_178 = (undefined8 *)0x0;
  uStack_170 = 0;
  FUN_1400bd09c(&local_168,local_248,1);
  FUN_1400bd09c(&local_178,uVar20,1);
  *local_168 = 0;
  local_168[(int)uStack_160 + -1] = 0x3ff0000000000000;
  *local_178 = 0;
  local_178[(int)uStack_170 + -1] = 0x3ff0000000000000;
  if (2 < (int)uStack_160) {
    lVar16 = 0;
    do {
      local_168[lVar16 + 1] =
           (((double)(int)lVar16 * (double)param_1[0x19]) / (double)((int)local_240 + -1) +
           (double)param_1[0x1e]) / (double)fVar39;
      lVar9 = lVar16 + 3;
      lVar16 = lVar16 + 1;
    } while (lVar9 < (int)uStack_160);
  }
  if (2 < (int)uStack_170) {
    lVar16 = 0;
    do {
      local_178[lVar16 + 1] =
           (((double)(int)lVar16 * (double)param_1[0x1a]) / (double)(int)(uVar28 - 1) +
           (double)param_1[0x1e]) / (double)fVar38;
      lVar9 = lVar16 + 3;
      lVar16 = lVar16 + 1;
    } while (lVar9 < (int)uStack_170);
  }
  uVar27 = 0;
  uVar26 = 0;
  do {
    local_228 = uVar26;
    dVar3 = (double)local_178[uVar27];
    fVar39 = (float)dVar3;
    fVar40 = (1.0 - fVar39) * 0.0;
    fVar38 = local_24c * fVar39 + fVar40;
    dVar4 = 1.0 - dVar3;
    lVar9 = (longlong)(int)local_228;
    lVar16 = lVar9 * 0x18;
    uVar10 = 0;
    do {
      dVar1 = (double)local_168[uVar10];
      fVar41 = (float)dVar1;
      lVar24 = param_1[3] + lVar9 * 8 + 4;
      *(float *)(lVar24 + -4 + uVar10 * 8) =
           (1.0 - fVar41) * (fVar39 * 0.0 + fVar40) +
           fVar41 * ((1.0 - fVar39) * fVar37 + fVar37 * fVar39);
      *(float *)(lVar24 + uVar10 * 8) = (1.0 - fVar41) * fVar38 + fVar38 * fVar41;
      dVar5 = 1.0 - dVar1;
      lVar24 = param_1[1];
      *(double *)(lVar24 + lVar16) =
           dVar5 * (local_108 * dVar4 + local_150 * dVar3) +
           (local_120 * dVar4 + local_138 * dVar3) * dVar1;
      *(double *)(lVar24 + 8 + lVar16) =
           (local_100 * dVar4 + local_148 * dVar3) * dVar5 +
           (local_118 * dVar4 + local_130 * dVar3) * dVar1;
      *(double *)(lVar24 + 0x10 + lVar16) =
           (local_f8 * dVar4 + local_140 * dVar3) * dVar5 +
           (local_110 * dVar4 + local_128 * dVar3) * dVar1;
      uVar10 = uVar10 + 1;
      lVar16 = lVar16 + 0x18;
    } while (local_248 != uVar10);
    uVar27 = uVar27 + 1;
    uVar26 = lVar9 + uVar10;
  } while (uVar27 != uVar20);
  iVar7 = 0;
  uVar31 = 0;
  iVar17 = 0;
  uVar26 = 0;
  uVar27 = local_240;
  do {
    local_218 = uVar26;
    uVar22 = (uint)local_218;
    bVar35 = uVar22 == 0;
    local_24c = (float)CONCAT31(local_24c._1_3_,uVar22 == uVar28 || bVar35);
    local_230 = CONCAT44(local_230._4_4_,uVar22 + 1);
    iVar23 = 0;
    do {
      iVar8 = (int)uVar27;
      if (((uVar22 != uVar28 && !bVar35) || (iVar23 != 0 && (int)local_240 != iVar23)) ||
         (uVar19 = 0,
         (2 - (uint)(iVar23 == 0) << !bVar35 * '\x02' & (uint)*(byte *)((longlong)param_1 + 0xfc))
         != 0)) {
        uVar18 = iVar7 + iVar23;
        uVar33 = iVar7 + 1 + iVar23;
        uVar20 = uVar18;
        uVar6 = uVar33;
        if ((char)param_1[0x13] != '\0') {
          uVar20 = uVar33;
          uVar6 = uVar18;
        }
        uVar21 = iVar8 + 3 + iVar23;
        lVar16 = param_1[0xb];
        lVar24 = (longlong)(int)uVar31;
        lVar9 = lVar24 * 0xc;
        *(uint *)(lVar16 + lVar9) = uVar20;
        *(uint *)(lVar16 + 4 + lVar9) = uVar21;
        *(uint *)(lVar16 + 8 + lVar9) = uVar6;
        *(int *)(param_1[0x11] + lVar24 * 4) = iVar17;
        uVar20 = uVar18;
        uVar6 = uVar33;
        if ((char)param_1[0x13] != '\0') {
          uVar20 = uVar33;
          uVar6 = uVar18;
        }
        lVar16 = param_1[0xd];
        *(uint *)(lVar16 + lVar9) = uVar20;
        *(uint *)(lVar16 + 4 + lVar9) = uVar21;
        *(uint *)(lVar16 + 8 + lVar9) = uVar6;
        uVar20 = uVar33;
        uVar6 = uVar18;
        if ((char)param_1[0x13] == '\0') {
          uVar20 = uVar18;
          uVar6 = uVar33;
        }
        lVar16 = param_1[0xf];
        *(uint *)(lVar16 + lVar9) = uVar20;
        *(uint *)(lVar16 + 4 + lVar9) = uVar21;
        *(uint *)(lVar16 + 8 + lVar9) = uVar6;
        bVar36 = (char)param_1[0x13] != '\0';
        uVar20 = uVar21;
        if (bVar36) {
          uVar20 = uVar18;
        }
        iVar34 = iVar8 + 2 + iVar23;
        uVar6 = uVar18;
        if (bVar36) {
          uVar6 = uVar21;
        }
        lVar16 = param_1[0xb];
        *(uint *)(lVar16 + 0xc + lVar9) = uVar6;
        *(int *)(lVar16 + 0x10 + lVar9) = iVar34;
        *(uint *)(lVar16 + 0x14 + lVar9) = uVar20;
        *(int *)(param_1[0x11] + 4 + lVar24 * 4) = iVar17;
        uVar20 = uVar18;
        uVar6 = uVar21;
        if ((char)param_1[0x13] != '\0') {
          uVar20 = uVar21;
          uVar6 = uVar18;
        }
        lVar16 = param_1[0xd];
        *(uint *)(lVar16 + 0xc + lVar9) = uVar20;
        *(int *)(lVar16 + 0x10 + lVar9) = iVar34;
        *(uint *)(lVar16 + 0x14 + lVar9) = uVar6;
        uVar20 = uVar18;
        if ((char)param_1[0x13] != '\0') {
          uVar20 = uVar21;
          uVar21 = uVar18;
        }
        uVar19 = (ulonglong)uVar20;
        lVar16 = param_1[0xf];
        *(uint *)(lVar16 + 0xc + lVar9) = uVar20;
        *(int *)(lVar16 + 0x10 + lVar9) = iVar34;
        *(uint *)(lVar16 + 0x14 + lVar9) = uVar21;
        uVar31 = (ulonglong)((int)uVar31 + 2);
        iVar17 = iVar17 + (*(byte *)((longlong)param_1 + 0xe1) ^ 1);
      }
      iVar23 = iVar23 + 1;
    } while (local_234 != iVar23);
    uVar27 = (ulonglong)(iVar8 + local_248);
    iVar7 = iVar7 + local_248;
    uVar26 = (ulonglong)(uVar22 + 1);
  } while (uVar22 != uVar28);
  uVar26 = (ulonglong)(uint)((int)local_228 + (int)uVar10);
  iVar7 = SUB84(local_220,0);
  local_244 = local_244 * local_248;
  uVar25 = 0;
  uVar12 = CONCAT71((uint7)(uint3)((uint)local_244 >> 8),1);
  local_1f8 = uVar32;
  do {
    local_20c = (uint)uVar12;
    local_208 = 2 - (local_20c & 0xff);
    local_1e8 = (ulonglong)(uint)((int)uVar25 * local_234);
    local_1f0 = local_240 & 0xffffffff;
    if ((char)uVar12 != '\0') {
      local_1f0 = 1;
    }
    uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
    iVar8 = 0;
    local_1e0 = uVar25;
    iVar23 = local_208;
    do {
      if ((iVar23 << (~(byte)uVar19 & 1) * '\x02' & (uint)*(byte *)((longlong)param_1 + 0xfc)) == 0)
      {
        iVar23 = (int)uVar32;
        if ((byte)uVar19 != 0) {
          iVar23 = 1;
        }
        local_24c = (float)(local_244 * iVar8 + (int)local_1e8);
        local_230 = (ulonglong)(iVar23 * local_248 + (int)local_1f0);
        uVar20 = iVar23 * local_248 + (int)local_1e8;
        uVar28 = local_244 * iVar8 + (int)local_1f0;
        bVar35 = iVar8 == (int)uVar25;
        uVar22 = uVar20;
        if (bVar35) {
          uVar22 = uVar28;
        }
        uVar32 = (ulonglong)uVar22;
        if (bVar35) {
          uVar28 = uVar20;
        }
        local_1d8 = (ulonglong)uVar28;
        lVar16 = param_1[1];
        lVar9 = param_1[3];
        local_220 = *(double *)(lVar16 + local_230 * 0x18);
        local_180 = *(double *)(lVar16 + 8 + local_230 * 0x18);
        local_188 = *(double *)(lVar16 + 0x10 + local_230 * 0x18);
        local_190 = *(double *)(lVar16 + 0x10 + uVar32 * 0x18) - local_188;
        local_1a0 = *(double *)(lVar16 + 8 + uVar32 * 0x18) - local_180;
        local_198 = *(double *)(lVar16 + uVar32 * 0x18) - local_220;
        local_1a8 = *(double *)(lVar16 + 0x10 + local_1d8 * 0x18) - local_188;
        local_1b8 = *(double *)(lVar16 + 8 + local_1d8 * 0x18) - local_180;
        local_1b0 = *(double *)(lVar16 + local_1d8 * 0x18) - local_220;
        fVar39 = *(float *)(lVar9 + local_230 * 8);
        local_1fc = *(float *)(lVar9 + 4 + local_230 * 8);
        fVar40 = *(float *)(lVar9 + 4 + uVar32 * 8) - local_1fc;
        local_200 = *(float *)(lVar9 + uVar32 * 8) - fVar39;
        fVar38 = *(float *)(lVar9 + local_1d8 * 8);
        fVar37 = *(float *)(lVar9 + 4 + local_1d8 * 8) - local_1fc;
        local_1c0 = (longlong)(int)uVar31;
        lVar16 = local_1c0 << 0x20;
        lVar24 = local_1c0 * 3 + 2;
        local_1c0 = local_1c0 << 2;
        lVar9 = 0;
        dVar3 = 1.0;
        local_228 = uVar26;
        local_204 = (uint)uVar19;
        local_1d0 = uVar31;
        local_1c8 = uVar26;
        do {
          fVar41 = local_24c;
          local_24c = (float)((int)local_1c8 + (int)lVar9);
          dVar1 = (dVar3 * 1.5707963267948966) / (double)(iVar7 + 1);
          local_218 = uVar32;
          dVar4 = cos(dVar1);
          dVar1 = sin(dVar1);
          lVar2 = param_1[1];
          lVar11 = (longlong)(int)fVar41;
          *(double *)(lVar2 + lVar11 * 0x18) = local_1b0 * dVar1 + local_198 * dVar4 + local_220;
          *(double *)(lVar2 + 8 + lVar11 * 0x18) = local_1b8 * dVar1 + local_1a0 * dVar4 + local_180
          ;
          *(double *)(lVar2 + 0x10 + lVar11 * 0x18) =
               local_1a8 * dVar1 + local_190 * dVar4 + local_188;
          lVar2 = param_1[3];
          *(float *)(lVar2 + lVar11 * 8) =
               (float)dVar1 * (fVar38 - fVar39) + (float)dVar4 * local_200 + fVar39;
          *(float *)(lVar2 + 4 + lVar11 * 8) =
               fVar37 * (float)dVar1 + fVar40 * (float)dVar4 + local_1fc;
          bVar35 = (char)param_1[0x13] != '\0';
          fVar29 = (float)local_230;
          fVar13 = fVar41;
          if (bVar35) {
            fVar13 = fVar29;
          }
          lVar2 = param_1[0xb];
          fVar15 = fVar29;
          if (bVar35) {
            fVar15 = fVar41;
          }
          *(float *)(lVar2 + -8 + lVar24 * 4) = fVar15;
          uVar30 = (undefined4)local_218;
          *(undefined4 *)(lVar2 + -4 + lVar24 * 4) = uVar30;
          *(float *)(lVar2 + lVar24 * 4) = fVar13;
          *(int *)(param_1[0x11] + local_1c0 + lVar9 * 4) = iVar17;
          fVar15 = fVar29;
          fVar13 = fVar41;
          if ((char)param_1[0x13] != '\0') {
            fVar15 = fVar41;
            fVar13 = fVar29;
          }
          lVar2 = param_1[0xd];
          *(float *)(lVar2 + -8 + lVar24 * 4) = fVar15;
          *(undefined4 *)(lVar2 + -4 + lVar24 * 4) = uVar30;
          *(float *)(lVar2 + lVar24 * 4) = fVar13;
          fVar15 = fVar41;
          fVar13 = fVar29;
          if ((char)param_1[0x13] == '\0') {
            fVar15 = fVar29;
            fVar13 = fVar41;
          }
          lVar2 = param_1[0xf];
          *(float *)(lVar2 + -8 + lVar24 * 4) = fVar15;
          *(undefined4 *)(lVar2 + -4 + lVar24 * 4) = uVar30;
          dVar3 = dVar3 + 1.0;
          lVar9 = lVar9 + 1;
          *(float *)(lVar2 + lVar24 * 4) = fVar13;
          lVar16 = lVar16 + 0x100000000;
          lVar24 = lVar24 + 3;
          uVar32 = (ulonglong)(uint)fVar41;
          iVar23 = (int)lVar9;
        } while (iVar7 != iVar23);
        fVar38 = (float)local_1d8;
        fVar37 = fVar29;
        fVar39 = fVar38;
        if ((char)param_1[0x13] != '\0') {
          fVar37 = fVar38;
          fVar39 = fVar29;
        }
        lVar9 = param_1[0xb];
        lVar24 = (lVar16 >> 0x1e) * 3;
        *(float *)(lVar9 + lVar24) = fVar37;
        *(float *)(lVar9 + 4 + lVar24) = fVar41;
        *(float *)(lVar9 + 8 + lVar24) = fVar39;
        *(int *)(param_1[0x11] + (lVar16 >> 0x1e)) = iVar17;
        fVar37 = fVar29;
        fVar39 = fVar38;
        if ((char)param_1[0x13] != '\0') {
          fVar37 = fVar38;
          fVar39 = fVar29;
        }
        lVar16 = param_1[0xd];
        *(float *)(lVar16 + lVar24) = fVar37;
        *(float *)(lVar16 + 4 + lVar24) = fVar41;
        *(float *)(lVar16 + 8 + lVar24) = fVar39;
        fVar39 = fVar29;
        if ((char)param_1[0x13] != '\0') {
          fVar39 = fVar38;
          fVar38 = fVar29;
        }
        lVar16 = param_1[0xf];
        *(float *)(lVar16 + lVar24) = fVar39;
        *(float *)(lVar16 + 4 + lVar24) = fVar41;
        *(float *)(lVar16 + 8 + lVar24) = fVar38;
        uVar31 = (ulonglong)((int)local_1d0 + iVar23 + 1);
        iVar17 = iVar17 + (*(byte *)((longlong)param_1 + 0xe1) ^ 1);
        uVar26 = (ulonglong)(((int)local_228 + iVar23) - 1);
        uVar19 = (ulonglong)local_204;
        uVar25 = local_1e0;
        uVar32 = local_1f8;
        iVar23 = local_208;
      }
      iVar8 = 1;
      uVar27 = uVar19 & 1;
      uVar19 = 0;
    } while (uVar27 != 0);
    uVar25 = 1;
    uVar12 = 0;
  } while ((local_20c & 1) != 0);
  if (local_178 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c611c0 FUN_146c611c0 body=158 status=ok
// SIG undefined FUN_146c611c0(void)

void FUN_146c611c0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f3c638;
  lVar1 = 0x178;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x158);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd8050(param_1);
  return;
}



// FUNCTION 146c6125e FUN_146c6125e body=134 status=ok
// SIG undefined FUN_146c6125e(void)

void FUN_146c6125e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149f3c440;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd8050(param_1);
  return;
}



// FUNCTION 146c612e4 FUN_146c612e4 body=5416 status=ok
// SIG undefined FUN_146c612e4(void)

longlong * FUN_146c612e4(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  bool bVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_138 [32];
  int local_118;
  float local_110;
  longlong *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  uint local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar14 = *(int *)((longlong)param_1 + 0xac);
  *(int *)(param_1 + 0x22) = iVar14 * 4;
  *(int *)((longlong)param_1 + 0x114) = iVar14 * 8;
  local_118 = iVar14 * 0x18 + -4;
  *(int *)(param_1 + 0x21) = iVar14 * 2 + -1;
  iVar19 = iVar14 * 8 + -2;
  *(int *)((longlong)param_1 + 0x10c) = iVar19;
  *(int *)(param_1 + 0x23) = local_118;
  FUN_146c5e8c6(param_1,iVar14 * 8,iVar19 * 2);
  local_68[0] = 0;
  local_68[1] = 1;
  *(int *)(param_1 + 0x24) = *(int *)((longlong)param_1 + 0xac) + 1;
  plVar13 = param_1 + 0x17;
  FUN_140bfc200(plVar13,*(int *)((longlong)param_1 + 0xac) * 2 + 2,1);
  FUN_146c63922(param_1 + 0x19,*(undefined4 *)((longlong)param_1 + 0x114),1);
  uVar9 = 0;
  uVar29 = 0;
  local_100 = param_1;
  local_e8 = plVar13;
  do {
    uVar10 = *(uint *)((longlong)local_68 + uVar29);
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar18 = *(uint *)(param_1 + 0x24);
    }
    uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xac);
    if (-1 < (int)*(uint *)((longlong)param_1 + 0xac)) {
      local_a8 = CONCAT44(local_a8._4_4_,uVar10);
      local_c8 = (longlong *)(longlong)(int)uVar18;
      uVar26 = 0;
      local_d0 = uVar29;
      do {
        if ((int)uVar26 == 0) {
          uVar29 = 2;
        }
        else if (((int)uVar26 == 1) || (uVar29 = 4, uVar26 == (uVar11 & 0xffffffff))) {
          uVar29 = 3;
        }
        uVar15 = (ulonglong)uVar18;
        local_f0 = (uVar26 + (longlong)local_c8) * 0x10;
        local_f8 = uVar26;
        FUN_144a1a59e(*plVar13 + local_f0,uVar29,1);
        uVar11 = local_a8;
        local_e0 = (ulonglong)uVar9;
        lVar16 = (longlong)(int)uVar9 * 0x18;
        uVar30 = 0;
        local_d8 = uVar29;
        local_a0 = (ulonglong)uVar9;
        local_98 = uVar15;
        do {
          local_118 = (int)uVar30;
          (**(code **)(*param_1 + 0x18))(param_1,&local_80,uVar11 & 0xffffffff,local_f8);
          lVar27 = param_1[1];
          *(undefined8 *)(lVar27 + 0x10 + lVar16) = local_70;
          puVar3 = (undefined4 *)(lVar27 + lVar16);
          *puVar3 = local_80;
          puVar3[1] = uStack_7c;
          puVar3[2] = uStack_78;
          puVar3[3] = uStack_74;
          *(int *)(*(longlong *)(param_1[0x17] + local_f0) + uVar30 * 4) =
               (int)local_e0 + (int)uVar30;
          *(ulonglong *)(param_1[0x19] + (longlong)(int)uVar9 * 8 + uVar30 * 8) = uVar15;
          uVar30 = uVar30 + 1;
          uVar15 = uVar15 + 0x100000000;
          lVar16 = lVar16 + 0x18;
        } while (local_d8 != uVar30);
        uVar9 = (int)local_a0 + (int)uVar30;
        uVar26 = local_f8 + 1;
        uVar11 = (ulonglong)*(int *)((longlong)param_1 + 0xac);
        uVar18 = (int)local_98 + 1;
        plVar13 = local_e8;
      } while ((longlong)local_f8 < (longlong)uVar11);
      uVar9 = (int)local_a0 + (int)uVar30;
      uVar29 = local_d0;
      uVar10 = uVar9;
    }
    uVar29 = uVar29 + 4;
  } while (uVar29 != 8);
  plVar1 = param_1 + 0x1b;
  FUN_144a1a59e(plVar1,*(int *)((longlong)param_1 + 0x10c) << 2,
                CONCAT71((uint7)(uint3)(uVar10 >> 8),1));
  iVar14 = 0;
  lVar16 = 0;
  do {
    uVar11 = (ulonglong)*(uint *)((longlong)&DAT_149f3c480 + lVar16);
    uVar29 = uVar11;
    if (5 < uVar11) goto LAB_146c61ba1;
    uVar29 = (longlong)&switchD_146c615cd::switchdataD_149f3c9a8 +
             (longlong)(int)(&switchD_146c615cd::switchdataD_149f3c9a8)[uVar11];
    switch(uVar11) {
    case 0:
      *(int *)((longlong)param_1 + 0x124) = iVar14;
      uVar29 = 0;
      goto LAB_146c618fa;
    case 1:
      uVar29 = (ulonglong)*(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x25) = iVar14;
LAB_146c618fa:
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        uVar29 = (ulonglong)(int)uVar29;
        lVar27 = *plVar13;
        uVar11 = 0;
        do {
          lVar12 = uVar11 + uVar29;
          lVar21 = lVar12 * 0x10;
          plVar28 = (longlong *)(lVar27 + lVar21);
          iVar19 = *(int *)(lVar27 + 8 + lVar21);
          if (uVar11 < 2) {
            if (1 < iVar19) {
              lVar24 = (longlong)iVar14 * 4;
              lVar17 = (lVar12 + 1) * 0x10;
              lVar23 = 0;
              lVar12 = 0;
              do {
                *(undefined4 *)(*plVar1 + lVar24 + lVar23 * 4) = *(undefined4 *)(*plVar28 + lVar23);
                lVar12 = lVar12 + 1;
                *(undefined4 *)(*plVar1 + lVar24 + 4 + lVar23 * 4) =
                     *(undefined4 *)(*(longlong *)(*local_e8 + lVar21) + 4 + lVar23);
                *(undefined4 *)(*plVar1 + lVar24 + 8 + lVar23 * 4) =
                     *(undefined4 *)(*(longlong *)(*local_e8 + lVar17) + 4 + lVar23);
                *(undefined4 *)(*plVar1 + lVar24 + 0xc + lVar23 * 4) =
                     *(undefined4 *)(*(longlong *)(*local_e8 + lVar17) + lVar23);
                lVar27 = *local_e8;
                plVar28 = (longlong *)(lVar27 + lVar21);
                lVar23 = lVar23 + 4;
              } while (lVar12 < (longlong)*(int *)(lVar27 + 8 + lVar21) + -1);
              iVar14 = iVar14 + (int)lVar23;
              plVar13 = local_e8;
            }
          }
          else if (2 < iVar19) {
            lVar24 = (longlong)iVar14 * 4;
            lVar17 = 1;
            lVar12 = (lVar12 + 1) * 0x10;
            lVar23 = 0;
            do {
              *(undefined4 *)(*plVar1 + lVar24 + lVar23 * 4) =
                   *(undefined4 *)(*plVar28 + 4 + lVar23);
              lVar17 = lVar17 + 1;
              *(undefined4 *)(*plVar1 + lVar24 + 4 + lVar23 * 4) =
                   *(undefined4 *)(*(longlong *)(*plVar13 + lVar21) + 8 + lVar23);
              *(undefined4 *)(*plVar1 + lVar24 + 8 + lVar23 * 4) =
                   *(undefined4 *)(*(longlong *)(*plVar13 + lVar12) + 4 + lVar23);
              *(undefined4 *)(*plVar1 + lVar24 + 0xc + lVar23 * 4) =
                   *(undefined4 *)(*(longlong *)(*plVar13 + lVar12) + lVar23);
              lVar27 = *plVar13;
              plVar28 = (longlong *)(lVar27 + lVar21);
              lVar23 = lVar23 + 4;
            } while (lVar17 < (longlong)*(int *)(lVar27 + 8 + lVar21) + -1);
            iVar14 = iVar14 + (int)lVar23;
          }
          uVar11 = uVar11 + 1;
          param_1 = local_100;
        } while ((longlong)uVar11 < (longlong)*(int *)((longlong)local_100 + 0xac));
      }
      break;
    case 2:
      *(int *)((longlong)param_1 + 300) = iVar14;
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        uVar29 = (longlong)iVar14 * 4;
        lVar27 = 0;
        lVar12 = 0;
        do {
          lVar21 = (longlong)*(int *)(local_100[0x17] + 8 + lVar27 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + lVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(local_100[0x17] + ((int)local_100[0x24] + lVar12) * 0x10) + -8 +
                lVar21 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 4 + lVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(local_100[0x17] + ((int)local_100[0x24] + lVar12) * 0x10) + -4 +
                lVar21 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 8 + lVar27 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar27 * 4) + -4 + lVar21 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 0xc + lVar27 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar27 * 4) + -8 + lVar21 * 4);
          lVar12 = lVar12 + 1;
          lVar27 = lVar27 + 4;
        } while (lVar12 < *(int *)((longlong)local_100 + 0xac));
LAB_146c61b9e:
        iVar14 = iVar14 + (int)lVar27;
        param_1 = local_100;
      }
      break;
    case 3:
      *(int *)(param_1 + 0x26) = iVar14;
      puVar2 = (uint *)((longlong)param_1 + 0xac);
      uVar11 = (ulonglong)*puVar2;
      param_1 = local_100;
      if (0 < (int)*puVar2) {
        uVar29 = (longlong)iVar14 * 4;
        lVar27 = 0;
        lVar12 = 0;
        do {
          lVar21 = local_100[0x17];
          lVar17 = (longlong)*(int *)(lVar21 + 8 + lVar27 * 4);
          lVar24 = ~(ulonglong)(lVar12 < (int)uVar11 + -1) +
                   (longlong)*(int *)(lVar21 + 0x18 + lVar27 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + lVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(lVar21 + ((int)local_100[0x24] + lVar12) * 0x10) + -4 + lVar17 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 4 + lVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(local_100[0x17] + 0x10 + ((int)local_100[0x24] + lVar12) * 0x10) +
                lVar24 * 4);
          lVar12 = lVar12 + 1;
          *(undefined4 *)(local_100[0x1b] + uVar29 + 8 + lVar27 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + 0x10 + lVar27 * 4) + lVar24 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 0xc + lVar27 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar27 * 4) + -4 + lVar17 * 4);
          uVar11 = (ulonglong)*(int *)((longlong)local_100 + 0xac);
          lVar27 = lVar27 + 4;
        } while (lVar12 < (longlong)uVar11);
        iVar14 = iVar14 + (int)lVar27;
      }
      break;
    case 4:
      *(int *)((longlong)param_1 + 0x134) = iVar14;
      iVar19 = *(int *)((longlong)param_1 + 0xac);
      param_1 = local_100;
      if (0 < iVar19) {
        lVar27 = (longlong)iVar14 * 4;
        uVar29 = 0;
        iVar22 = 0;
        do {
          iVar8 = iVar22 + 2;
          if (iVar19 <= iVar22 + 2) {
            iVar8 = iVar19;
          }
          lVar12 = (longlong)iVar8;
          lVar21 = (ulonglong)(iVar19 + -1 <= iVar22) * 4;
          *(undefined4 *)(local_100[0x1b] + lVar27 + uVar29 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar12 * 0x10) + lVar21);
          *(undefined4 *)(local_100[0x1b] + lVar27 + 4 + uVar29 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar12 * 0x10) + 4 + lVar21);
          *(undefined4 *)(local_100[0x1b] + lVar27 + 8 + uVar29 * 4) =
               *(undefined4 *)
                (*(longlong *)(local_100[0x17] + ((int)local_100[0x24] + lVar12) * 0x10) + 4 +
                lVar21);
          *(undefined4 *)(local_100[0x1b] + lVar27 + 0xc + uVar29 * 4) =
               *(undefined4 *)
                (*(longlong *)(local_100[0x17] + ((int)local_100[0x24] + lVar12) * 0x10) + lVar21);
          iVar22 = iVar22 + 1;
          iVar19 = *(int *)((longlong)local_100 + 0xac);
          uVar29 = uVar29 + 4;
        } while (iVar22 < iVar19);
        iVar14 = iVar14 + (int)uVar29;
        plVar13 = local_e8;
      }
      break;
    case 5:
      *(int *)(param_1 + 0x27) = iVar14;
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        uVar29 = (longlong)iVar14 * 4;
        lVar27 = 0;
        uVar11 = 0;
        do {
          lVar21 = (ulonglong)(1 < uVar11) * 4;
          *(undefined4 *)(local_100[0x1b] + uVar29 + lVar27 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar27 * 4) + lVar21);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 4 + lVar27 * 4) =
               **(undefined4 **)(local_100[0x17] + 0x10 + lVar27 * 4);
          *(undefined4 *)(local_100[0x1b] + uVar29 + 8 + lVar27 * 4) =
               **(undefined4 **)
                 (((longlong)(int)local_100[0x24] + uVar11) * 0x10 + 0x10 + local_100[0x17]);
          lVar12 = (longlong)(int)local_100[0x24] + uVar11;
          uVar11 = uVar11 + 1;
          *(undefined4 *)(local_100[0x1b] + uVar29 + 0xc + lVar27 * 4) =
               *(undefined4 *)(*(longlong *)(local_100[0x17] + lVar12 * 0x10) + lVar21);
          lVar27 = lVar27 + 4;
        } while ((longlong)uVar11 < (longlong)*(int *)((longlong)local_100 + 0xac));
        goto LAB_146c61b9e;
      }
    }
LAB_146c61ba1:
    lVar16 = lVar16 + 4;
  } while (lVar16 != 0x18);
  *(int *)((longlong)param_1 + 0x13c) = iVar14;
  plVar13 = param_1 + 0x1d;
  FUN_144a1a59e(plVar13,*(int *)((longlong)param_1 + 0x10c) << 2,CONCAT71((int7)(uVar29 >> 8),1));
  plVar28 = param_1 + 0x1f;
  FUN_144a1a59e(plVar28,*(int *)((longlong)param_1 + 0x10c) << 2,1);
  fVar33 = (float)(**(code **)(*param_1 + 0x30))(param_1);
  fVar34 = 1.0;
  if ((char)param_1[0x14] != '\0') {
    fVar34 = 1.0 / fVar33;
  }
  local_88 = (int)param_1[0x27] - *(int *)((longlong)param_1 + 0x134);
  local_84 = *(int *)((longlong)param_1 + 0x134) - (int)param_1[0x26];
  local_8c = (int)param_1[0x26] - *(int *)((longlong)param_1 + 300);
  local_90 = *(int *)((longlong)param_1 + 0x13c) - (int)param_1[0x27];
  plVar20 = (longlong *)0x0;
  uVar29 = 0;
  lVar16 = 0;
  local_b8 = plVar28;
  local_b0 = plVar13;
  do {
    uVar9 = *(uint *)((longlong)&DAT_149f3c480 + lVar16);
    local_f8 = CONCAT44(local_f8._4_4_,uVar9);
    if (uVar9 < 6) {
      iVar14 = (int)plVar20;
      if ((3U >> (uVar9 & 0x1f) & 1) == 0) {
        if ((0xcU >> (uVar9 & 0x1f) & 1) == 0) {
          uVar10 = local_90;
          if (uVar9 == 4) {
            uVar10 = local_88;
          }
          uVar11 = (ulonglong)*(int *)((longlong)param_1 + (ulonglong)(uVar9 != 4) * 4 + 0x134);
          local_e0 = CONCAT44(local_e0._4_4_,iVar14);
          local_d0 = uVar29;
          local_c8 = plVar20;
          local_c0 = lVar16;
          if (0 < (int)uVar10) {
            local_98 = (ulonglong)uVar10;
            local_e8 = (longlong *)(uVar11 * 4);
            uVar26 = 0;
            uVar15 = 0;
            local_e0 = CONCAT44(local_e0._4_4_,iVar14);
            local_a8 = uVar11;
            do {
              plVar13 = local_e8;
              uVar30 = local_f8;
              uVar9 = (uint)local_f8;
              iVar14 = (int)uVar29;
              local_d8 = uVar26;
              if ((uint)local_f8 < 2) {
LAB_146c61fe9:
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,local_f8 & 0xffffffff,
                           *(undefined4 *)((longlong)local_e8 + uVar15 * 4 + param_1[0x1b]));
                lVar16 = param_1[7];
                iVar19 = (uint)local_e0;
                uVar29 = (ulonglong)(int)(uint)local_e0;
                lVar27 = uVar29 * 0xc;
                *(undefined4 *)(lVar16 + 8 + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + lVar27) = CONCAT44(uStack_7c,local_80);
                (**(code **)(*local_100 + 0x20))
                          (local_100,&local_80,uVar30 & 0xffffffff,
                           *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + local_100[0x1b] + 0xc));
                param_1 = local_100;
                local_e0 = CONCAT44(local_e0._4_4_,iVar19 + 2);
                lVar16 = local_100[7];
                *(undefined4 *)(lVar16 + 0x14 + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + 0xc + lVar27) = CONCAT44(uStack_7c,local_80);
                local_118 = *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + local_100[0x1b]);
                local_110 = fVar34;
                local_a0 = uVar29;
                (**(code **)(*local_100 + 0x28))(local_100,&local_80,uVar30 & 0xffffffff,local_d8);
                uVar26 = local_d8;
                lVar16 = (longlong)iVar14;
                *(ulonglong *)(param_1[3] + lVar16 * 8) = CONCAT44(uStack_7c,local_80);
                local_118 = *(int *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 0xc);
                local_110 = fVar34;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,uVar30 & 0xffffffff,local_d8 & 0xffffffff);
                plVar13 = local_e8;
                uVar29 = local_f8;
                local_f0 = CONCAT44(local_f0._4_4_,iVar14 + 2);
                *(ulonglong *)(param_1[3] + 8 + lVar16 * 8) = CONCAT44(uStack_7c,local_80);
                uVar11 = local_a8;
                if (uVar9 == 4) {
                  if (uVar26 == *(int *)((longlong)param_1 + 0xac) - 1) {
LAB_146c62159:
                    (**(code **)(*param_1 + 0x20))
                              (param_1,&local_80,local_f8 & 0xffffffff,
                               *(undefined4 *)((longlong)local_e8 + uVar15 * 4 + param_1[0x1b] + 4))
                    ;
                    lVar27 = param_1[7];
                    *(undefined4 *)(lVar27 + 8 + (longlong)(int)(uint)local_e0 * 0xc) = uStack_78;
                    *(ulonglong *)(lVar27 + (longlong)(int)(uint)local_e0 * 0xc) =
                         CONCAT44(uStack_7c,local_80);
                    (**(code **)(*param_1 + 0x20))
                              (param_1,&local_80,uVar29 & 0xffffffff,
                               *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 8));
                    local_e0 = CONCAT44(local_e0._4_4_,(int)local_a0 + 4);
                    lVar27 = param_1[7];
                    *(undefined4 *)(lVar27 + 0x2c + local_a0 * 0xc) = uStack_78;
                    *(ulonglong *)(lVar27 + 0x24 + local_a0 * 0xc) = CONCAT44(uStack_7c,local_80);
                    local_118 = *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 4);
                    local_110 = fVar34;
                    (**(code **)(*param_1 + 0x28))(param_1,&local_80,uVar29 & 0xffffffff,local_d8);
                    uVar26 = local_d8;
                    *(ulonglong *)(param_1[3] + (longlong)(int)local_f0 * 8) =
                         CONCAT44(uStack_7c,local_80);
                    local_118 = *(int *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 8);
                    local_110 = fVar34;
                    (**(code **)(*param_1 + 0x28))
                              (param_1,&local_80,uVar29 & 0xffffffff,local_d8 & 0xffffffff);
                    local_f0 = CONCAT44(local_f0._4_4_,iVar14 + 4);
                    *(ulonglong *)(param_1[3] + 0x18 + lVar16 * 8) = CONCAT44(uStack_7c,local_80);
                    uVar11 = local_a8;
                  }
                }
                else if (uVar15 == 4 && (uint)local_f8 == 5) goto LAB_146c62159;
              }
              else {
                if ((uint)local_f8 == 4) {
                  if (*(int *)((longlong)param_1 + 0xac) + -2 <= (int)uVar26) goto LAB_146c61fe9;
                }
                else if (((uint)local_f8 == 5) && (uVar15 < 5)) goto LAB_146c61fe9;
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,local_f8 & 0xffffffff,
                           *(undefined4 *)((longlong)local_e8 + uVar15 * 4 + param_1[0x1b]));
                plVar13 = local_e8;
                lVar16 = param_1[7];
                iVar19 = (uint)local_e0;
                lVar27 = (longlong)(int)(uint)local_e0 * 0xc;
                *(undefined4 *)(lVar16 + 8 + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + lVar27) = CONCAT44(uStack_7c,local_80);
                local_f0._0_4_ = iVar14;
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,local_f8 & 0xffffffff,
                           *(undefined4 *)((longlong)local_e8 + uVar15 * 4 + param_1[0x1b] + 0xc));
                lVar16 = param_1[7];
                *(undefined4 *)(lVar16 + 0x14 + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + 0xc + lVar27) = CONCAT44(uStack_7c,local_80);
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,local_f8 & 0xffffffff,
                           *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 4));
                lVar16 = param_1[7];
                *(undefined4 *)(lVar16 + 0x20 + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + 0x18 + lVar27) = CONCAT44(uStack_7c,local_80);
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,local_f8 & 0xffffffff,
                           *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 8));
                uVar26 = local_d8;
                plVar13 = local_e8;
                uVar29 = local_f8;
                local_e0 = CONCAT44(local_e0._4_4_,iVar19 + 4);
                lVar16 = param_1[7];
                *(undefined4 *)(lVar16 + 0x2c + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + 0x24 + lVar27) = CONCAT44(uStack_7c,local_80);
                local_118 = *(undefined4 *)((longlong)local_e8 + uVar15 * 4 + param_1[0x1b]);
                local_110 = fVar34;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,local_f8 & 0xffffffff,local_d8 & 0xffffffff);
                local_a0 = (ulonglong)(int)local_f0;
                *(ulonglong *)(param_1[3] + local_a0 * 8) = CONCAT44(uStack_7c,local_80);
                local_118 = *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 0xc);
                local_110 = fVar34;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,uVar29 & 0xffffffff,uVar26 & 0xffffffff);
                uVar30 = local_a0;
                *(ulonglong *)(param_1[3] + 8 + local_a0 * 8) = CONCAT44(uStack_7c,local_80);
                local_118 = *(undefined4 *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 4);
                local_110 = fVar34;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,uVar29 & 0xffffffff,uVar26 & 0xffffffff);
                *(ulonglong *)(param_1[3] + 0x10 + uVar30 * 8) = CONCAT44(uStack_7c,local_80);
                local_118 = *(int *)((longlong)plVar13 + uVar15 * 4 + param_1[0x1b] + 8);
                local_110 = fVar34;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,uVar29 & 0xffffffff,uVar26 & 0xffffffff);
                local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 4);
                *(ulonglong *)(param_1[3] + 0x18 + uVar30 * 8) = CONCAT44(uStack_7c,local_80);
              }
              uVar15 = uVar15 + 4;
              uVar26 = uVar26 + 1;
              uVar29 = local_f0 & 0xffffffff;
            } while (uVar15 < local_98);
          }
          uVar9 = (uint)local_e0;
          if (*(int *)((longlong)param_1 + 0xac) < 1) goto LAB_146c61de8;
          local_f0 = CONCAT44(local_f0._4_4_,(int)uVar29);
          lVar16 = uVar11 << 2;
          iVar14 = 0;
          plVar13 = local_c8;
          uVar11 = local_d0;
          do {
            iVar19 = (int)plVar13;
            *(int *)(*local_b0 + lVar16) = iVar19;
            uVar9 = iVar19 + 2;
            *(uint *)(*local_b0 + 4 + lVar16) = uVar9;
            *(int *)(*local_b0 + 8 + lVar16) = iVar19 + 3;
            *(int *)(*local_b0 + 0xc + lVar16) = iVar19 + 1;
            iVar22 = (int)uVar11;
            *(int *)(*local_b8 + lVar16) = iVar22;
            uVar10 = iVar22 + 2;
            *(uint *)(*local_b8 + 4 + lVar16) = uVar10;
            *(int *)(*local_b8 + 8 + lVar16) = iVar22 + 3;
            *(int *)(*local_b8 + 0xc + lVar16) = iVar22 + 1;
            if (1 < (uint)local_f8) {
              if ((uint)local_f8 == 4) {
                if (iVar14 < *(int *)((longlong)param_1 + 0xac) + -2) goto LAB_146c625ab;
              }
              else if (((uint)local_f8 != 5) || (iVar14 != 0)) {
LAB_146c625ab:
                uVar9 = iVar19 + 4;
                uVar10 = iVar22 + 4;
              }
            }
            iVar14 = iVar14 + 1;
            lVar16 = lVar16 + 0x10;
            uVar11 = (ulonglong)uVar10;
            plVar13 = (longlong *)(ulonglong)uVar9;
          } while (iVar14 < *(int *)((longlong)param_1 + 0xac));
          plVar20 = (longlong *)(local_e0 & 0xffffffff);
          plVar13 = local_b0;
          lVar16 = local_c0;
          plVar28 = local_b8;
        }
        else {
          uVar10 = local_84;
          if (uVar9 == 2) {
            uVar10 = local_8c;
          }
          plVar13 = local_b0;
          plVar28 = local_b8;
          if (0 < (int)uVar10) {
            local_d8 = (ulonglong)uVar10;
            lVar12 = (longlong)*(int *)((longlong)param_1 + (ulonglong)(uVar9 != 2) * 4 + 300) * 4;
            local_f0 = (longlong)(int)uVar29 << 3;
            lVar27 = (longlong)iVar14 * 0xc;
            uVar11 = 0;
            local_e8 = plVar20;
            local_e0 = uVar29;
            local_d0 = uVar29;
            local_c8 = plVar20;
            local_c0 = lVar16;
            do {
              uVar29 = local_f8;
              iVar14 = *(int *)(param_1[0x1b] + lVar12 + uVar11 * 4);
              (**(code **)(*param_1 + 0x20))(param_1,&local_80,local_f8 & 0xffffffff,iVar14);
              lVar16 = param_1[7];
              *(undefined4 *)(lVar16 + 8 + lVar27) = uStack_78;
              *(ulonglong *)(lVar16 + lVar27) = CONCAT44(uStack_7c,local_80);
              *(int *)(param_1[0x1d] + lVar12 + uVar11 * 4) = (int)local_e8 + (int)uVar11;
              local_118 = iVar14;
              local_110 = fVar34;
              (**(code **)(*param_1 + 0x28))
                        (param_1,&local_80,uVar29 & 0xffffffff,uVar11 >> 2 & 0x3fffffff);
              *(ulonglong *)(param_1[3] + local_f0 + uVar11 * 8) = CONCAT44(uStack_7c,local_80);
              *(int *)(param_1[0x1f] + lVar12 + uVar11 * 4) = (int)local_e0 + (int)uVar11;
              uVar11 = uVar11 + 1;
              lVar27 = lVar27 + 0xc;
            } while (local_d8 != uVar11);
            uVar29 = (ulonglong)(uint)((int)local_d0 + (int)uVar11);
            uVar9 = (int)local_c8 + (int)uVar11;
LAB_146c61de8:
            plVar20 = (longlong *)(ulonglong)uVar9;
            plVar13 = local_b0;
            lVar16 = local_c0;
            plVar28 = local_b8;
          }
        }
      }
      else {
        iVar19 = (int)param_1[0x22];
        if (uVar9 == 0) {
          iVar19 = 0;
        }
        if (0 < (int)param_1[0x22]) {
          local_f0 = (longlong)(int)uVar29 << 3;
          lVar27 = (longlong)iVar14 * 0xc;
          uVar11 = 0;
          local_d0 = uVar29;
          local_c8 = plVar20;
          local_c0 = lVar16;
          do {
            uVar29 = local_f8;
            iVar14 = iVar19 + (int)uVar11;
            (**(code **)(*param_1 + 0x20))(param_1,&local_80,local_f8 & 0xffffffff,iVar14);
            lVar16 = param_1[7];
            *(undefined4 *)(lVar16 + 8 + lVar27) = uStack_78;
            *(ulonglong *)(lVar16 + lVar27) = CONCAT44(uStack_7c,local_80);
            local_118 = iVar14;
            local_110 = fVar34;
            (**(code **)(*param_1 + 0x28))
                      (param_1,&local_80,uVar29 & 0xffffffff,uVar11 & 0xffffffff);
            *(ulonglong *)(param_1[3] + local_f0 + uVar11 * 8) = CONCAT44(uStack_7c,local_80);
            uVar11 = uVar11 + 1;
            lVar27 = lVar27 + 0xc;
            iVar14 = (int)uVar11;
          } while (iVar14 < (int)param_1[0x22]);
          uVar29 = (ulonglong)(uint)((int)local_d0 + iVar14);
          plVar20 = (longlong *)(ulonglong)(uint)((int)local_c8 + iVar14);
          plVar13 = local_b0;
          lVar16 = local_c0;
          plVar28 = local_b8;
        }
        if (0 < (int)param_1[0x21]) {
          uVar10 = (int)param_1[0x21] * 4;
          uVar9 = 0;
          if ((uint)local_f8 != 0) {
            uVar9 = uVar10;
          }
          lVar27 = (longlong)(int)uVar9;
          uVar11 = (ulonglong)uVar10;
          if ((int)uVar10 < 2) {
            uVar11 = 1;
          }
          do {
            *(undefined4 *)(*plVar13 + lVar27 * 4) = *(undefined4 *)(*plVar1 + lVar27 * 4);
            *(undefined4 *)(*plVar28 + lVar27 * 4) = *(undefined4 *)(*plVar1 + lVar27 * 4);
            lVar27 = lVar27 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
    lVar16 = lVar16 + 4;
    if (lVar16 == 0x18) {
      if (0 < *(int *)((longlong)param_1 + 0x10c)) {
        iVar14 = 0;
        lVar16 = 0;
        uVar29 = 0;
        do {
          uVar9 = FUN_146c63996(param_1,uVar29);
          local_f0 = CONCAT44(local_f0._4_4_,uVar9);
          bVar31 = uVar9 == 1;
          lVar27 = (longlong)(int)uVar29 * 4;
          lVar16 = (longlong)(int)lVar16;
          lVar12 = lVar16 * 3 + 2;
          iVar19 = 2;
          lVar21 = (longlong)(int)lVar27;
          lVar24 = 0;
          do {
            lVar23 = (int)(&DAT_149f3c4a0)[lVar24 * 3] + lVar27;
            lVar25 = (int)(&DAT_149f3c4a4)[lVar24 * 3] + lVar21;
            lVar17 = (int)(&DAT_149f3c4a8)[lVar24 * 3] + lVar21;
            lVar24 = local_100[0x1b];
            uVar4 = *(undefined4 *)(lVar24 + lVar23 * 4);
            uVar5 = *(undefined4 *)(lVar24 + lVar25 * 4);
            uVar6 = *(undefined4 *)(lVar24 + lVar17 * 4);
            uVar7 = uVar6;
            if ((bool)(char)local_100[0x13] == bVar31) {
              uVar7 = uVar4;
              uVar4 = uVar6;
            }
            lVar24 = local_100[0xb];
            *(undefined4 *)(lVar24 + -8 + lVar12 * 4) = uVar7;
            *(undefined4 *)(lVar24 + -4 + lVar12 * 4) = uVar5;
            *(undefined4 *)(lVar24 + lVar12 * 4) = uVar4;
            lVar24 = local_100[0x1d];
            uVar4 = *(undefined4 *)(lVar24 + lVar23 * 4);
            bVar32 = (bool)(char)local_100[0x13] == bVar31;
            uVar5 = *(undefined4 *)(lVar24 + lVar17 * 4);
            uVar6 = uVar4;
            if (bVar32) {
              uVar6 = uVar5;
            }
            uVar7 = *(undefined4 *)(lVar24 + lVar25 * 4);
            if (bVar32) {
              uVar5 = uVar4;
            }
            lVar24 = local_100[0xf];
            *(undefined4 *)(lVar24 + -8 + lVar12 * 4) = uVar5;
            *(undefined4 *)(lVar24 + -4 + lVar12 * 4) = uVar7;
            *(undefined4 *)(lVar24 + lVar12 * 4) = uVar6;
            lVar24 = local_100[0x1f];
            uVar4 = *(undefined4 *)(lVar24 + lVar23 * 4);
            uVar5 = *(undefined4 *)(lVar24 + lVar25 * 4);
            uVar6 = *(undefined4 *)(lVar24 + lVar17 * 4);
            uVar7 = uVar6;
            if ((bool)(char)local_100[0x13] == bVar31) {
              uVar7 = uVar4;
              uVar4 = uVar6;
            }
            lVar24 = local_100[0xd];
            *(undefined4 *)(lVar24 + -8 + lVar12 * 4) = uVar7;
            *(undefined4 *)(lVar24 + -4 + lVar12 * 4) = uVar5;
            *(undefined4 *)(lVar24 + lVar12 * 4) = uVar4;
            *(int *)(local_100[0x11] + lVar16 * 4) = iVar14;
            lVar16 = lVar16 + 1;
            lVar12 = lVar12 + 3;
            lVar24 = 1;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar18 = (int)uVar29 + 1;
          iVar19 = *(int *)((longlong)local_100 + 0x10c);
          uVar10 = 1;
          local_f8 = uVar29;
          if ((uVar9 < 2) && (*(char *)((longlong)local_100 + 0xa1) == '\0')) {
            if ((int)uVar18 < iVar19) {
              uVar29 = (ulonglong)uVar18;
            }
            uVar10 = FUN_146c63996(local_100,uVar29);
            uVar10 = (uint)(uVar10 != uVar9);
          }
          iVar14 = iVar14 + uVar10;
          param_1 = local_100;
          uVar29 = (ulonglong)uVar18;
        } while ((int)uVar18 < iVar19);
      }
      if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 146c6280e FUN_146c6280e body=4371 status=ok
// SIG undefined FUN_146c6280e(void)

longlong * FUN_146c6280e(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_148 [32];
  int local_128;
  float local_120;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  longlong *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar21 = *(int *)((longlong)param_1 + 0xac);
  iVar10 = ((iVar21 + 2) * (iVar21 + 1)) / 2 + iVar21;
  *(int *)(param_1 + 0x22) = iVar10;
  *(int *)((longlong)param_1 + 0x114) = iVar10 * 2;
  iVar20 = (iVar21 + 1) * iVar21;
  *(int *)(param_1 + 0x21) = iVar20 / 2;
  iVar20 = (iVar20 - (iVar20 >> 0x1f) & 0xfffffffeU) + iVar21 * 4;
  *(int *)((longlong)param_1 + 0x10c) = iVar20;
  local_128 = iVar21 * 0xc + iVar10 * 2 + 4;
  *(int *)(param_1 + 0x23) = local_128;
  FUN_146c5e8c6(param_1,iVar10 * 2,iVar20 * 2);
  local_68[0] = 0;
  local_68[1] = 1;
  *(int *)(param_1 + 0x24) = *(int *)((longlong)param_1 + 0xac) + 1;
  plVar15 = param_1 + 0x17;
  FUN_140bfc200(plVar15,*(int *)((longlong)param_1 + 0xac) * 2 + 2,1);
  FUN_146c63922(param_1 + 0x19,*(undefined4 *)((longlong)param_1 + 0x114),1);
  uVar19 = 0;
  lVar16 = 0;
  local_e8 = plVar15;
  do {
    uVar12 = 0;
    if (*(int *)((longlong)local_68 + lVar16) != 0) {
      uVar12 = *(uint *)(param_1 + 0x24);
    }
    uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0xac);
    if (-1 < (int)*(uint *)((longlong)param_1 + 0xac)) {
      local_a8 = CONCAT44(local_a8._4_4_,*(int *)((longlong)local_68 + lVar16));
      local_108 = (ulonglong)(int)uVar12;
      local_c0 = 0;
      local_f8 = lVar16;
      do {
        uVar14 = (ulonglong)uVar12;
        uVar25 = local_c0 + 1 & 0xffffffff;
        if (local_c0 != (uVar9 & 0xffffffff)) {
          uVar25 = (ulonglong)((int)local_c0 + 2);
        }
        local_e0 = (local_c0 + local_108) * 0x10;
        local_100 = local_c0;
        local_c0 = local_c0 + 1;
        FUN_144a1a59e(*plVar15 + local_e0,uVar25,1);
        local_f0 = (ulonglong)((int)uVar25 + (uint)((int)uVar25 == 0));
        local_110 = (ulonglong)uVar19;
        lVar16 = (longlong)(int)uVar19 * 0x18;
        uVar25 = 0;
        uVar9 = local_a8 & 0xffffffff;
        local_b8 = uVar14;
        do {
          local_128 = (int)uVar25;
          (**(code **)(*param_1 + 0x18))(param_1,&local_80,uVar9);
          lVar27 = param_1[1];
          *(undefined8 *)(lVar27 + 0x10 + lVar16) = local_70;
          puVar2 = (undefined4 *)(lVar27 + lVar16);
          *puVar2 = local_80;
          puVar2[1] = uStack_7c;
          puVar2[2] = uStack_78;
          puVar2[3] = uStack_74;
          iVar20 = (int)local_110;
          *(int *)(*(longlong *)(param_1[0x17] + local_e0) + uVar25 * 4) = iVar20 + (int)uVar25;
          *(ulonglong *)(param_1[0x19] + (longlong)(int)uVar19 * 8 + uVar25 * 8) = uVar14;
          uVar25 = uVar25 + 1;
          uVar14 = uVar14 + 0x100000000;
          lVar16 = lVar16 + 0x18;
        } while (local_f0 != uVar25);
        uVar19 = iVar20 + (int)uVar25;
        uVar9 = (ulonglong)*(int *)((longlong)param_1 + 0xac);
        uVar12 = (int)local_b8 + 1;
        plVar15 = local_e8;
      } while ((longlong)local_100 < (longlong)uVar9);
      uVar19 = iVar20 + (int)uVar25;
      lVar16 = local_f8;
    }
    lVar16 = lVar16 + 4;
  } while (lVar16 != 8);
  plVar15 = param_1 + 0x1b;
  FUN_144a1a59e(plVar15,*(int *)((longlong)param_1 + 0x10c) << 2,1);
  iVar20 = 0;
  lVar16 = 0;
  do {
    uVar14 = (ulonglong)*(uint *)((longlong)&DAT_149f3c480 + lVar16);
    uVar9 = uVar14;
    if (5 < uVar14) goto LAB_146c62f57;
    uVar9 = (longlong)&switchD_146c62ae5::switchdataD_149f3c9c0 +
            (longlong)(int)(&switchD_146c62ae5::switchdataD_149f3c9c0)[uVar14];
    switch(uVar14) {
    case 0:
      *(int *)((longlong)param_1 + 0x124) = iVar20;
      uVar9 = 0;
      goto LAB_146c62da9;
    case 1:
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x25) = iVar20;
LAB_146c62da9:
      iVar21 = *(int *)((longlong)param_1 + 0xac);
      if (0 < iVar21) {
        uVar9 = (ulonglong)(int)uVar9;
        lVar27 = *local_e8;
        lVar13 = 0;
        do {
          lVar18 = (lVar13 + uVar9) * 0x10;
          if (1 < *(int *)(lVar27 + 8 + lVar18)) {
            lVar28 = (longlong)iVar20 * 4;
            lVar22 = (lVar13 + uVar9 + 1) * 0x10;
            lVar29 = 0;
            lVar23 = 0;
            do {
              *(undefined4 *)(*plVar15 + lVar28 + lVar29 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar27 + lVar18) + lVar29);
              lVar23 = lVar23 + 1;
              *(undefined4 *)(*plVar15 + lVar28 + 4 + lVar29 * 4) =
                   *(undefined4 *)(*(longlong *)(*local_e8 + lVar18) + 4 + lVar29);
              *(undefined4 *)(*plVar15 + lVar28 + 8 + lVar29 * 4) =
                   *(undefined4 *)(*(longlong *)(*local_e8 + lVar22) + 4 + lVar29);
              *(undefined4 *)(*plVar15 + lVar28 + 0xc + lVar29 * 4) =
                   *(undefined4 *)(*(longlong *)(*local_e8 + lVar22) + lVar29);
              lVar27 = *local_e8;
              lVar29 = lVar29 + 4;
            } while (lVar23 < (longlong)*(int *)(lVar27 + 8 + lVar18) + -1);
            iVar20 = iVar20 + (int)lVar29;
            iVar21 = *(int *)((longlong)param_1 + 0xac);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar21);
      }
      break;
    case 2:
      *(int *)((longlong)param_1 + 300) = iVar20;
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        uVar9 = (longlong)iVar20 * 4;
        lVar13 = 0;
        lVar27 = 0;
        do {
          lVar18 = (longlong)*(int *)(param_1[0x17] + 8 + lVar13 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[0x17] + ((int)param_1[0x24] + lVar27) * 0x10) + -8 +
                lVar18 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 4 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[0x17] + ((int)param_1[0x24] + lVar27) * 0x10) + -4 +
                lVar18 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 8 + lVar13 * 4) =
               *(undefined4 *)(*(longlong *)(param_1[0x17] + lVar13 * 4) + -4 + lVar18 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 0xc + lVar13 * 4) =
               *(undefined4 *)(*(longlong *)(param_1[0x17] + lVar13 * 4) + -8 + lVar18 * 4);
          lVar27 = lVar27 + 1;
          lVar13 = lVar13 + 4;
        } while (lVar27 < *(int *)((longlong)param_1 + 0xac));
LAB_146c62f54:
        iVar20 = iVar20 + (int)lVar13;
      }
      break;
    case 3:
      *(int *)(param_1 + 0x26) = iVar20;
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        uVar9 = (longlong)iVar20 * 4;
        lVar13 = 0;
        lVar27 = 0;
        do {
          lVar18 = (longlong)*(int *)(param_1[0x17] + 8 + lVar13 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[0x17] + ((int)param_1[0x24] + lVar27) * 0x10) + -4 +
                lVar18 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 4 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[0x17] + 0x10 + ((int)param_1[0x24] + lVar27) * 0x10) + -4 +
                lVar18 * 4);
          lVar27 = lVar27 + 1;
          *(undefined4 *)(param_1[0x1b] + uVar9 + 8 + lVar13 * 4) =
               *(undefined4 *)(*(longlong *)(param_1[0x17] + 0x10 + lVar13 * 4) + -4 + lVar18 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 0xc + lVar13 * 4) =
               *(undefined4 *)(*(longlong *)(param_1[0x17] + lVar13 * 4) + -4 + lVar18 * 4);
          lVar13 = lVar13 + 4;
        } while (lVar27 < *(int *)((longlong)param_1 + 0xac));
        goto LAB_146c62f54;
      }
      break;
    case 4:
      *(int *)((longlong)param_1 + 0x134) = iVar20;
      uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0xac);
      if (0 < (int)*(uint *)((longlong)param_1 + 0xac)) {
        uVar9 = (longlong)iVar20 * 4;
        lVar13 = 0;
        lVar27 = 0;
        do {
          *(undefined4 *)(param_1[0x1b] + uVar9 + lVar13 * 4) =
               *(undefined4 *)(*(longlong *)(param_1[0x17] + (longlong)(int)uVar14 * 0x10) + lVar13)
          ;
          lVar27 = lVar27 + 1;
          *(undefined4 *)(param_1[0x1b] + uVar9 + 4 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[0x17] + (longlong)*(int *)((longlong)param_1 + 0xac) * 0x10)
                 + 4 + lVar13);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 8 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)
                  (param_1[0x17] +
                  ((longlong)*(int *)((longlong)param_1 + 0xac) + (longlong)(int)param_1[0x24]) *
                  0x10) + 4 + lVar13);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 0xc + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)
                  (param_1[0x17] +
                  ((longlong)*(int *)((longlong)param_1 + 0xac) + (longlong)(int)param_1[0x24]) *
                  0x10) + lVar13);
          uVar14 = (ulonglong)*(int *)((longlong)param_1 + 0xac);
          lVar13 = lVar13 + 4;
        } while (lVar27 < (longlong)uVar14);
        goto LAB_146c62f54;
      }
      break;
    case 5:
      *(int *)(param_1 + 0x27) = iVar20;
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        uVar9 = (longlong)iVar20 * 4;
        lVar13 = 0;
        lVar27 = 0;
        do {
          *(undefined4 *)(param_1[0x1b] + uVar9 + lVar13 * 4) =
               **(undefined4 **)(param_1[0x17] + lVar13 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 4 + lVar13 * 4) =
               **(undefined4 **)(param_1[0x17] + 0x10 + lVar13 * 4);
          *(undefined4 *)(param_1[0x1b] + uVar9 + 8 + lVar13 * 4) =
               **(undefined4 **)(((int)param_1[0x24] + lVar27) * 0x10 + 0x10 + param_1[0x17]);
          lVar18 = (int)param_1[0x24] + lVar27;
          lVar27 = lVar27 + 1;
          *(undefined4 *)(param_1[0x1b] + uVar9 + 0xc + lVar13 * 4) =
               **(undefined4 **)(param_1[0x17] + lVar18 * 0x10);
          lVar13 = lVar13 + 4;
        } while (lVar27 < *(int *)((longlong)param_1 + 0xac));
        goto LAB_146c62f54;
      }
    }
LAB_146c62f57:
    lVar16 = lVar16 + 4;
    if (lVar16 == 0x18) {
      *(int *)((longlong)param_1 + 0x13c) = iVar20;
      plVar17 = param_1 + 0x1d;
      FUN_144a1a59e(plVar17,*(int *)((longlong)param_1 + 0x10c) << 2,CONCAT71((int7)(uVar9 >> 8),1))
      ;
      plVar26 = param_1 + 0x1f;
      FUN_144a1a59e(plVar26,*(int *)((longlong)param_1 + 0x10c) << 2,1);
      fVar32 = (float)(**(code **)(*param_1 + 0x30))(param_1);
      fVar33 = 1.0;
      if ((char)param_1[0x14] != '\0') {
        fVar33 = 1.0 / fVar32;
      }
      local_98 = *(int *)((longlong)param_1 + 0x13c) - (int)param_1[0x27];
      local_9c = (int)param_1[0x27] - *(int *)((longlong)param_1 + 0x134);
      local_94 = *(int *)((longlong)param_1 + 0x134) - (int)param_1[0x26];
      local_a0 = (int)param_1[0x26] - *(int *)((longlong)param_1 + 300);
      uVar14 = 0;
      uVar9 = 0;
      lVar16 = 0;
      local_d8 = param_1;
      local_c8 = plVar17;
      local_b0 = plVar26;
      local_90 = plVar15;
      do {
        uVar19 = *(uint *)((longlong)&DAT_149f3c480 + lVar16);
        if (uVar19 < 6) {
          iVar20 = (int)uVar14;
          iVar21 = (int)uVar9;
          if ((3U >> (uVar19 & 0x1f) & 1) == 0) {
            if ((0xcU >> (uVar19 & 0x1f) & 1) == 0) {
              uVar12 = local_98;
              if (uVar19 == 4) {
                uVar12 = local_9c;
              }
              lVar27 = (longlong)*(int *)((longlong)param_1 + (ulonglong)(uVar19 != 4) * 4 + 0x134);
              uVar25 = uVar14;
              uVar11 = uVar9;
              if (0 < (int)uVar12) {
                local_e0 = (longlong)iVar21 * 8;
                local_b8 = (longlong)iVar21 << 0x20;
                lVar13 = (longlong)iVar20 * 0xc;
                uVar25 = (longlong)iVar20 << 0x20;
                local_c0 = lVar27 * 4;
                local_110 = CONCAT44(local_110._4_4_,0xffffffff);
                lVar18 = 0;
                uVar11 = 0;
                local_e8 = (longlong *)CONCAT44(local_e8._4_4_,uVar19);
                local_108 = uVar14;
                local_f8 = lVar16;
                local_d0 = uVar9;
                local_a8 = (ulonglong)uVar12;
                local_88 = lVar27;
                do {
                  uVar14 = local_c0;
                  plVar15 = local_e8;
                  local_100 = uVar25;
                  local_f0 = uVar11;
                  (**(code **)(*param_1 + 0x20))
                            (param_1,&local_80,(ulonglong)local_e8 & 0xffffffff,
                             *(undefined4 *)(param_1[0x1b] + local_c0 + lVar18 * 8));
                  lVar16 = param_1[7];
                  *(undefined4 *)(lVar16 + 8 + lVar13) = uStack_78;
                  *(ulonglong *)(lVar16 + lVar13) = CONCAT44(uStack_7c,local_80);
                  (**(code **)(*param_1 + 0x20))
                            (param_1,&local_80,(ulonglong)plVar15 & 0xffffffff,
                             *(undefined4 *)(param_1[0x1b] + uVar14 + 0xc + lVar18 * 8));
                  lVar16 = param_1[7];
                  *(undefined4 *)(lVar16 + 0x14 + lVar13) = uStack_78;
                  *(ulonglong *)(lVar16 + 0xc + lVar13) = CONCAT44(uStack_7c,local_80);
                  local_128 = *(undefined4 *)(param_1[0x1b] + uVar14 + lVar18 * 8);
                  iVar20 = (int)local_110 + 1;
                  local_120 = fVar33;
                  (**(code **)(*param_1 + 0x28))
                            (param_1,&local_80,(ulonglong)plVar15 & 0xffffffff,iVar20);
                  uVar9 = local_e0;
                  uVar25 = local_100;
                  *(ulonglong *)(param_1[3] + local_e0 + lVar18 * 8) = CONCAT44(uStack_7c,local_80);
                  local_128 = *(int *)(param_1[0x1b] + uVar14 + 0xc + lVar18 * 8);
                  local_110 = CONCAT44(local_110._4_4_,iVar20);
                  local_120 = fVar33;
                  (**(code **)(*param_1 + 0x28))
                            (param_1,&local_80,(ulonglong)plVar15 & 0xffffffff,iVar20);
                  uVar14 = local_c0;
                  plVar15 = local_e8;
                  *(ulonglong *)(param_1[3] + uVar9 + 8 + lVar18 * 8) = CONCAT44(uStack_7c,local_80)
                  ;
                  uVar11 = local_f0 + 4;
                  lVar18 = lVar18 + 2;
                  local_b8 = local_b8 + 0x200000000;
                  lVar13 = lVar13 + 0x18;
                  uVar25 = uVar25 + 0x200000000;
                } while (uVar11 < local_a8);
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,(ulonglong)local_e8 & 0xffffffff,
                           *(undefined4 *)(param_1[0x1b] + local_c0 + -0xc + lVar18 * 8));
                lVar16 = param_1[7];
                *(undefined4 *)(lVar16 + 8 + ((longlong)uVar25 >> 0x20) * 0xc) = uStack_78;
                *(ulonglong *)(lVar16 + ((longlong)uVar25 >> 0x20) * 0xc) =
                     CONCAT44(uStack_7c,local_80);
                (**(code **)(*param_1 + 0x20))
                          (param_1,&local_80,(ulonglong)plVar15 & 0xffffffff,
                           *(undefined4 *)(param_1[0x1b] + uVar14 + -8 + lVar18 * 8));
                uVar9 = local_110;
                iVar20 = (int)local_108;
                lVar16 = param_1[7];
                *(undefined4 *)(lVar16 + 0x14 + lVar13) = uStack_78;
                *(ulonglong *)(lVar16 + 0xc + lVar13) = CONCAT44(uStack_7c,local_80);
                local_128 = *(undefined4 *)(param_1[0x1b] + uVar14 + -0xc + lVar18 * 8);
                local_120 = fVar33;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,(ulonglong)plVar15 & 0xffffffff,local_110 & 0xffffffff)
                ;
                *(ulonglong *)(param_1[3] + ((longlong)local_b8 >> 0x1d)) =
                     CONCAT44(uStack_7c,local_80);
                local_128 = *(int *)(uVar14 + param_1[0x1b] + -8 + lVar18 * 8);
                uVar14 = (ulonglong)((int)lVar18 + iVar20 + 2);
                local_120 = fVar33;
                (**(code **)(*param_1 + 0x28))
                          (param_1,&local_80,(ulonglong)plVar15 & 0xffffffff,uVar9 & 0xffffffff);
                uVar9 = (ulonglong)((int)local_d0 + (int)lVar18 + 2);
                *(ulonglong *)(local_e0 + param_1[3] + 8 + lVar18 * 8) =
                     CONCAT44(uStack_7c,local_80);
                plVar15 = local_90;
                uVar25 = local_108;
                uVar11 = local_d0;
                plVar26 = local_b0;
                lVar16 = local_f8;
                lVar27 = local_88;
              }
              piVar1 = (int *)((longlong)param_1 + 0xac);
              param_1 = local_d8;
              plVar17 = local_c8;
              if (0 < *piVar1) {
                lVar27 = lVar27 * 4;
                lVar13 = 0;
                iVar20 = 0;
                do {
                  iVar21 = (int)uVar11;
                  iVar10 = (int)lVar13;
                  iVar7 = (int)uVar25;
                  *(int *)(local_d8[0x1d] + lVar27 + lVar13 * 8) = iVar7 + iVar10;
                  *(int *)(local_d8[0x1d] + lVar27 + 4 + lVar13 * 8) = iVar7 + iVar10 + 2;
                  *(int *)(local_d8[0x1d] + lVar27 + 8 + lVar13 * 8) = iVar7 + iVar10 + 3;
                  *(int *)(local_d8[0x1d] + lVar27 + 0xc + lVar13 * 8) = iVar7 + iVar10 + 1;
                  *(int *)(local_d8[0x1f] + lVar27 + lVar13 * 8) = iVar21 + iVar10;
                  *(int *)(local_d8[0x1f] + lVar27 + 4 + lVar13 * 8) = iVar21 + iVar10 + 2;
                  *(int *)(local_d8[0x1f] + lVar27 + 8 + lVar13 * 8) = iVar21 + iVar10 + 3;
                  *(int *)(local_d8[0x1f] + lVar27 + 0xc + lVar13 * 8) = iVar21 + iVar10 + 1;
                  iVar20 = iVar20 + 1;
                  lVar13 = lVar13 + 2;
                } while (iVar20 < *(int *)((longlong)local_d8 + 0xac));
              }
            }
            else {
              uVar12 = local_94;
              if (uVar19 == 2) {
                uVar12 = local_a0;
              }
              if (0 < (int)uVar12) {
                local_100 = (ulonglong)uVar12;
                lVar13 = (longlong)*(int *)((longlong)param_1 + (ulonglong)(uVar19 != 2) * 4 + 300)
                         * 4;
                local_110 = (longlong)iVar21 << 3;
                lVar27 = (longlong)iVar20 * 0xc;
                uVar25 = 0;
                local_108 = uVar14;
                local_f8 = lVar16;
                local_f0 = uVar9;
                local_e0 = uVar14;
                local_d0 = uVar9;
                do {
                  iVar20 = *(int *)(param_1[0x1b] + lVar13 + uVar25 * 4);
                  (**(code **)(*param_1 + 0x20))(param_1,&local_80,uVar19,iVar20);
                  lVar16 = param_1[7];
                  *(undefined4 *)(lVar16 + 8 + lVar27) = uStack_78;
                  *(ulonglong *)(lVar16 + lVar27) = CONCAT44(uStack_7c,local_80);
                  *(int *)(param_1[0x1d] + lVar13 + uVar25 * 4) = (int)local_e0 + (int)uVar25;
                  local_128 = iVar20;
                  local_120 = fVar33;
                  (**(code **)(*param_1 + 0x28))(param_1,&local_80,uVar19,uVar25 >> 2 & 0x3fffffff);
                  *(ulonglong *)(param_1[3] + local_110 + uVar25 * 8) = CONCAT44(uStack_7c,local_80)
                  ;
                  *(int *)(param_1[0x1f] + lVar13 + uVar25 * 4) = (int)local_f0 + (int)uVar25;
                  uVar25 = uVar25 + 1;
                  lVar27 = lVar27 + 0xc;
                } while (local_100 != uVar25);
                uVar9 = (ulonglong)(uint)((int)local_d0 + (int)uVar25);
                uVar14 = (ulonglong)(uint)((int)local_108 + (int)uVar25);
                plVar17 = local_c8;
                plVar26 = local_b0;
                lVar16 = local_f8;
              }
            }
          }
          else {
            iVar10 = (int)param_1[0x22];
            if (uVar19 == 0) {
              iVar10 = 0;
            }
            if (0 < (int)param_1[0x22]) {
              local_110 = (longlong)iVar21 << 3;
              lVar27 = (longlong)iVar20 * 0xc;
              uVar25 = 0;
              local_108 = uVar14;
              local_f8 = lVar16;
              local_d0 = uVar9;
              do {
                iVar20 = iVar10 + (int)uVar25;
                (**(code **)(*param_1 + 0x20))(param_1,&local_80,uVar19,iVar20);
                lVar16 = param_1[7];
                *(undefined4 *)(lVar16 + 8 + lVar27) = uStack_78;
                *(ulonglong *)(lVar16 + lVar27) = CONCAT44(uStack_7c,local_80);
                local_128 = iVar20;
                local_120 = fVar33;
                (**(code **)(*param_1 + 0x28))(param_1,&local_80,uVar19,uVar25 & 0xffffffff);
                *(ulonglong *)(param_1[3] + local_110 + uVar25 * 8) = CONCAT44(uStack_7c,local_80);
                uVar25 = uVar25 + 1;
                lVar27 = lVar27 + 0xc;
                iVar20 = (int)uVar25;
              } while (iVar20 < (int)param_1[0x22]);
              uVar9 = (ulonglong)(uint)((int)local_d0 + iVar20);
              uVar14 = (ulonglong)(uint)((int)local_108 + iVar20);
              plVar17 = local_c8;
              plVar26 = local_b0;
              lVar16 = local_f8;
            }
            if (0 < (int)param_1[0x21]) {
              uVar24 = (int)param_1[0x21] * 4;
              uVar12 = 0;
              if (uVar19 != 0) {
                uVar12 = uVar24;
              }
              lVar27 = (longlong)(int)uVar12;
              uVar25 = (ulonglong)uVar24;
              if ((int)uVar24 < 2) {
                uVar25 = 1;
              }
              do {
                *(undefined4 *)(*plVar17 + lVar27 * 4) = *(undefined4 *)(*plVar15 + lVar27 * 4);
                *(undefined4 *)(*plVar26 + lVar27 * 4) = *(undefined4 *)(*plVar15 + lVar27 * 4);
                lVar27 = lVar27 + 1;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
          }
        }
        plVar8 = local_d8;
        lVar16 = lVar16 + 4;
      } while (lVar16 != 0x18);
      if (0 < *(int *)((longlong)param_1 + 0x10c)) {
        iVar20 = 0;
        lVar16 = 0;
        uVar9 = 0;
        do {
          uVar19 = FUN_146c63996(plVar8,uVar9);
          local_f0 = CONCAT44(local_f0._4_4_,uVar19);
          bVar30 = uVar19 == 1;
          local_110 = (longlong)(int)uVar9 * 4;
          lVar16 = (longlong)(int)lVar16;
          lVar27 = lVar16 * 3 + 2;
          iVar21 = 2;
          lVar13 = 0;
          do {
            lVar22 = (longlong)(int)(&DAT_149f3c4a0)[lVar13 * 3] + local_110;
            lVar23 = (longlong)(int)(&DAT_149f3c4a4)[lVar13 * 3] + (longlong)(int)local_110;
            lVar18 = (longlong)(int)(&DAT_149f3c4a8)[lVar13 * 3] + (longlong)(int)local_110;
            lVar13 = plVar8[0x1b];
            uVar3 = *(undefined4 *)(lVar13 + lVar22 * 4);
            uVar4 = *(undefined4 *)(lVar13 + lVar23 * 4);
            uVar5 = *(undefined4 *)(lVar13 + lVar18 * 4);
            uVar6 = uVar5;
            if ((bool)(char)plVar8[0x13] == bVar30) {
              uVar6 = uVar3;
              uVar3 = uVar5;
            }
            lVar13 = plVar8[0xb];
            *(undefined4 *)(lVar13 + -8 + lVar27 * 4) = uVar6;
            *(undefined4 *)(lVar13 + -4 + lVar27 * 4) = uVar4;
            *(undefined4 *)(lVar13 + lVar27 * 4) = uVar3;
            lVar13 = plVar8[0x1d];
            uVar3 = *(undefined4 *)(lVar13 + lVar22 * 4);
            bVar31 = (bool)(char)plVar8[0x13] == bVar30;
            uVar4 = *(undefined4 *)(lVar13 + lVar18 * 4);
            uVar5 = uVar3;
            if (bVar31) {
              uVar5 = uVar4;
            }
            uVar6 = *(undefined4 *)(lVar13 + lVar23 * 4);
            if (bVar31) {
              uVar4 = uVar3;
            }
            lVar13 = plVar8[0xf];
            *(undefined4 *)(lVar13 + -8 + lVar27 * 4) = uVar4;
            *(undefined4 *)(lVar13 + -4 + lVar27 * 4) = uVar6;
            *(undefined4 *)(lVar13 + lVar27 * 4) = uVar5;
            lVar13 = plVar8[0x1f];
            uVar3 = *(undefined4 *)(lVar13 + lVar22 * 4);
            uVar4 = *(undefined4 *)(lVar13 + lVar23 * 4);
            uVar5 = *(undefined4 *)(lVar13 + lVar18 * 4);
            uVar6 = uVar5;
            if ((bool)(char)plVar8[0x13] == bVar30) {
              uVar6 = uVar3;
              uVar3 = uVar5;
            }
            lVar13 = plVar8[0xd];
            *(undefined4 *)(lVar13 + -8 + lVar27 * 4) = uVar6;
            *(undefined4 *)(lVar13 + -4 + lVar27 * 4) = uVar4;
            *(undefined4 *)(lVar13 + lVar27 * 4) = uVar3;
            *(int *)(plVar8[0x11] + lVar16 * 4) = iVar20;
            lVar16 = lVar16 + 1;
            lVar27 = lVar27 + 3;
            lVar13 = 1;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          uVar24 = (int)uVar9 + 1;
          iVar21 = *(int *)((longlong)plVar8 + 0x10c);
          uVar12 = 1;
          local_100 = uVar9;
          if (((uVar19 & 0xfffffffe) != 2) && (*(char *)((longlong)plVar8 + 0xa1) == '\0')) {
            if ((int)uVar24 < iVar21) {
              uVar9 = (ulonglong)uVar24;
            }
            uVar12 = FUN_146c63996(local_d8,uVar9);
            uVar12 = (uint)(uVar12 != uVar19);
          }
          iVar20 = iVar20 + uVar12;
          uVar9 = (ulonglong)uVar24;
        } while ((int)uVar24 < iVar21);
      }
      if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
        return local_d8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 146c63922 FUN_146c63922 body=115 status=ok
// SIG undefined FUN_146c63922(void)

void FUN_146c63922(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146be54b8(param_1,iVar1);
    }
    FUN_146c7ecc3((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146c7ecd6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c63996 FUN_146c63996 body=176 status=ok
// SIG undefined FUN_146c63996(void)

char FUN_146c63996(longlong param_1,int param_2)

{
  char cVar1;
  
  param_2 = param_2 * 4;
  cVar1 = '\0';
  if (param_2 < *(int *)(param_1 + 0x124) || *(int *)(param_1 + 0x128) <= param_2) {
    cVar1 = '\x01';
    if (param_2 < *(int *)(param_1 + 0x128) || *(int *)(param_1 + 300) <= param_2) {
      cVar1 = '\x02';
      if (param_2 < *(int *)(param_1 + 300) || *(int *)(param_1 + 0x130) <= param_2) {
        cVar1 = '\x03';
        if (param_2 < *(int *)(param_1 + 0x130) || *(int *)(param_1 + 0x134) <= param_2) {
          if (param_2 < *(int *)(param_1 + 0x138)) {
            return (*(int *)(param_1 + 0x134) <= param_2 && param_2 < *(int *)(param_1 + 0x138)) <<
                   2;
          }
          cVar1 = (param_2 < *(int *)(param_1 + 0x13c)) * '\x05';
        }
      }
    }
  }
  return cVar1;
}



// FUNCTION 146c63a46 FUN_146c63a46 body=352 status=ok
// SIG undefined FUN_146c63a46(void)

void FUN_146c63a46(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xac) < 2) {
    *(undefined4 *)(param_1 + 0xac) = 2;
  }
  iVar1 = *(int *)(param_1 + 0xc4);
  FUN_144716727(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    FUN_1403b10bc(param_1 + 0xb8,0);
  }
  if (*(int *)(param_1 + 0xd4) < 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_146be5458(param_1 + 200,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(int *)(param_1 + 0xe4) < 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_14481578e(param_1 + 0xd8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(int *)(param_1 + 0xf4) < 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    FUN_14481578e(param_1 + 0xe8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0x104) < 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    FUN_14481578e(param_1 + 0xf8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}



// FUNCTION 146c63cda FUN_146c63cda body=790 status=ok
// SIG undefined FUN_146c63cda(void)

float * FUN_146c63cda(longlong param_1,float *param_2,undefined4 param_3,int param_4,int param_5,
                     float param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)param_5 * 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 200) + 4 + (longlong)param_5 * 8);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  switch(param_3) {
  case 0:
  case 1:
    fVar6 = (float)*(int *)(param_1 + 0xac);
    fVar4 = *(float *)(param_1 + 0xa8);
    fVar5 = (float)(*(int *)(param_1 + 0xac) + 1);
    fVar3 = (float)(iVar1 % *(int *)(param_1 + 0x120)) / fVar5;
    fVar7 = 1.0;
    if (fVar3 <= 1.0) {
      fVar7 = fVar3;
    }
    fVar7 = (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar7);
    *param_2 = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) * *(float *)(param_1 + 0x140) * fVar6 * param_6
               + 0.5;
    fVar5 = (float)iVar2 / fVar5;
    fVar7 = 1.0;
    if (fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    fVar7 = (float)(~-(uint)(fVar5 < 0.0) & (uint)fVar7);
    fVar7 = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) * fVar6 * fVar4 * param_6;
    break;
  case 2:
    fVar4 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar1) {
      fVar4 = -0.5;
    }
    fVar7 = 0.5;
    if (iVar2 != *(int *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)iVar1 * 0x10) + -1) {
      fVar7 = -0.5;
    }
    fVar7 = fVar7 * param_6 * *(float *)(param_1 + 0xa8);
    fVar4 = fVar4 * *(float *)(param_1 + 0xa4) * param_6;
    goto LAB_146c63ead;
  case 3:
    fVar7 = -0.5;
    fVar4 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar1) {
      fVar4 = -0.5;
    }
    if (iVar1 % *(int *)(param_1 + 0x120) <= param_4) {
      fVar7 = 0.5;
    }
    fVar7 = fVar7 * param_6 * *(float *)(param_1 + 0x140);
    fVar4 = fVar4 * *(float *)(param_1 + 0xa4) * param_6;
LAB_146c63ead:
    *param_2 = fVar4 + 0.5;
    break;
  case 4:
    fVar4 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar1) {
      fVar4 = -0.5;
    }
    fVar6 = (float)iVar2 / (float)(*(int *)(param_1 + 0xac) + 1);
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar7 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar7);
    fVar7 = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) *
            (float)*(int *)(param_1 + 0xac) * *(float *)(param_1 + 0xa8) * param_6;
    *param_2 = fVar4 * *(float *)(param_1 + 0xa4) * param_6 + 0.5;
    break;
  case 5:
    fVar4 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar1) {
      fVar4 = -0.5;
    }
    fVar6 = (float)(iVar1 % *(int *)(param_1 + 0x120)) / (float)(*(int *)(param_1 + 0xac) + 1);
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar7 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar7);
    fVar7 = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) *
            (float)*(int *)(param_1 + 0xac) * *(float *)(param_1 + 0x140) * param_6;
    *param_2 = fVar4 * *(float *)(param_1 + 0xa4) * param_6 + 0.5;
    break;
  default:
    goto switchD_146c63d2d_default;
  }
  param_2[1] = fVar7 + 0.5;
switchD_146c63d2d_default:
  return param_2;
}



// FUNCTION 146c640a4 FUN_146c640a4 body=515 status=ok
// SIG undefined FUN_146c640a4(void)

float * FUN_146c640a4(longlong param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                     float param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)param_5 * 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 200) + 4 + (longlong)param_5 * 8);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  if ((uint)param_3 < 2) {
    fVar5 = (float)*(int *)(param_1 + 0xac);
    fVar1 = *(float *)(param_1 + 0xa8);
    iVar4 = iVar4 % *(int *)(param_1 + 0x120);
    fVar8 = (float)iVar4;
    fVar6 = (float)iVar2;
    if (2 < iVar4) {
      fVar6 = fVar6 + fVar8 + -2.0;
    }
    fVar7 = (float)(*(int *)(param_1 + 0xac) + 1);
    fVar8 = fVar8 / fVar7;
    fVar6 = fVar6 / fVar7;
    fVar7 = 1.0;
    if (fVar8 <= 1.0) {
      fVar7 = fVar8;
    }
    fVar7 = (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar7);
    *param_2 = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) * *(float *)(param_1 + 0x140) * fVar5 * param_6
               + 0.5;
    fVar8 = 1.0;
    if (fVar6 <= 1.0) {
      fVar8 = fVar6;
    }
    fVar8 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar8);
    param_2[1] = ((1.0 - fVar8) * -0.5 + fVar8 * 0.5) * fVar5 * fVar1 * param_6 + 0.5;
  }
  else if ((uint)param_3 == 4) {
    iVar3 = *(int *)(param_1 + 0xac);
    fVar1 = *(float *)(param_1 + 0xa8);
    fVar5 = (float)(int)((iVar2 + param_4) - (uint)(iVar3 + -1 <= param_4)) / (float)(iVar3 + 1);
    fVar6 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar4) {
      fVar6 = -0.5;
    }
    fVar8 = 1.0;
    if (fVar5 <= 1.0) {
      fVar8 = fVar5;
    }
    fVar8 = (float)(~-(uint)(fVar5 < 0.0) & (uint)fVar8);
    *param_2 = fVar6 * *(float *)(param_1 + 0xa4) * param_6 + 0.5;
    param_2[1] = ((1.0 - fVar8) * -0.5 + fVar8 * 0.5) * (float)iVar3 * fVar1 * param_6 + 0.5;
  }
  else {
    FUN_146c63cda(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return param_2;
}



// FUNCTION 146c642a8 FUN_146c642a8 body=145 status=ok
// SIG undefined FUN_146c642a8(void)

void FUN_146c642a8(longlong param_1)

{
  float fVar1;
  
  FUN_146c63a46();
  *(bool *)(param_1 + 0x148) = 0.0 < *(float *)(param_1 + 0x144);
  fVar1 = *(float *)(param_1 + 0x144) * 0.017453292;
  *(float *)(param_1 + 0x14c) = fVar1;
  *(float *)(param_1 + 0x150) = fVar1 / (float)*(int *)(param_1 + 0xac);
  fVar1 = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x140);
  *(float *)(param_1 + 0x154) = fVar1;
  *(float *)(param_1 + 0x158) = fVar1 / *(float *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x15c) = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x164) = DAT_14c846338;
  return;
}



// FUNCTION 146c6433a FUN_146c6433a body=237 status=ok
// SIG undefined FUN_146c6433a(void)

double * FUN_146c6433a(longlong param_1,double *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xa8);
  fVar3 = cosf(*(float *)(param_1 + 0x150) * (float)param_4);
  fVar4 = sinf((float)param_4 * *(float *)(param_1 + 0x150));
  if (*(char *)(param_1 + 0x148) == '\x01') {
    pfVar2 = (float *)(param_1 + 0x140);
    if (param_3 != 0) {
      pfVar2 = (float *)(param_1 + 0x154);
    }
    fVar5 = *pfVar2;
  }
  else {
    if (param_3 == 0) {
      fVar5 = *(float *)(param_1 + 0x154);
    }
    else {
      fVar5 = *(float *)(param_1 + 0x140);
    }
    fVar5 = -fVar5;
  }
  *param_2 = (double)(fVar3 * fVar5);
  param_2[1] = (double)(fVar4 * fVar5);
  param_2[2] = (double)(fVar1 * (float)param_5);
  return param_2;
}



// FUNCTION 146c64428 FUN_146c64428 body=662 status=ok
// SIG undefined FUN_146c64428(void)

float * FUN_146c64428(longlong param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)param_4 * 8);
  param_2[2] = DAT_14c846338;
  *(ulonglong *)param_2 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
  switch(param_3) {
  case 0:
  case 1:
    fVar3 = cosf((float)(iVar1 % (*(int *)(param_1 + 0xac) + 1)) * *(float *)(param_1 + 0x150));
    fVar5 = sinf((float)(iVar1 % (*(int *)(param_1 + 0xac) + 1)) * *(float *)(param_1 + 0x150));
    if (param_3 == 0) {
      fVar5 = -fVar5;
      fVar3 = -fVar3;
    }
    fVar4 = SQRT(fVar3 * fVar3 + fVar5 * fVar5);
    if (fVar4 <= 0.0) {
LAB_146c645bd:
      param_2[2] = 0.0;
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      return param_2;
    }
    fVar4 = 1.0 / fVar4;
    *param_2 = fVar3 * fVar4;
    param_2[1] = fVar5 * fVar4;
    break;
  case 2:
    fVar3 = cosf((float)(iVar1 % (*(int *)(param_1 + 0xac) + 1)) * *(float *)(param_1 + 0x150));
    fVar5 = sinf((float)(iVar1 % (*(int *)(param_1 + 0xac) + 1)) * *(float *)(param_1 + 0x150));
    fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    if (fVar4 <= 0.0) goto LAB_146c645bd;
    fVar4 = 1.0 / fVar4;
    *param_2 = fVar5 * fVar4;
    param_2[1] = -fVar3 * fVar4;
    break;
  case 3:
    param_2[2] = DAT_14c84636c;
    uVar2 = CONCAT44(DAT_14c846364._4_4_,(float)DAT_14c846364);
    goto LAB_146c646aa;
  case 4:
    if ((*(float *)(param_1 + 0x15c) == (float)DAT_14c846330) &&
       (!NAN(*(float *)(param_1 + 0x15c)) && !NAN((float)DAT_14c846330))) {
      if ((*(float *)(param_1 + 0x160) == DAT_14c846330._4_4_) &&
         (!NAN(*(float *)(param_1 + 0x160)) && !NAN(DAT_14c846330._4_4_))) {
        if ((*(float *)(param_1 + 0x164) == DAT_14c846338) &&
           (!NAN(*(float *)(param_1 + 0x164)) && !NAN(DAT_14c846338))) {
          fVar3 = cosf((float)*(int *)(param_1 + 0xac) * *(float *)(param_1 + 0x150));
          fVar5 = sinf((float)*(int *)(param_1 + 0xac) * *(float *)(param_1 + 0x150));
          *(float *)(param_1 + 0x15c) = -fVar5;
          *(float *)(param_1 + 0x160) = fVar3;
          *(undefined4 *)(param_1 + 0x164) = 0;
        }
      }
    }
    param_2[2] = *(float *)(param_1 + 0x164);
    uVar2 = *(undefined8 *)(param_1 + 0x15c);
LAB_146c646aa:
    *(undefined8 *)param_2 = uVar2;
    return param_2;
  case 5:
    fVar3 = -DAT_14c84636c;
    fVar5 = -DAT_14c846364._4_4_;
    *param_2 = -(float)DAT_14c846364;
    param_2[1] = fVar5;
    param_2[2] = fVar3;
  default:
    goto switchD_146c64479_default;
  }
  param_2[2] = fVar4 * 0.0;
switchD_146c64479_default:
  return param_2;
}



// FUNCTION 146c646be FUN_146c646be body=1064 status=ok
// SIG undefined FUN_146c646be(void)

float * FUN_146c646be(longlong param_1,float *param_2,uint param_3,int param_4,int param_5,
                     float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (5 < param_3) {
    return param_2;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)param_5 * 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 200) + 4 + (longlong)param_5 * 8);
  switch(param_3) {
  default:
    iVar3 = *(int *)(param_1 + 0xac);
    fVar8 = *(float *)(param_1 + 0x154) * param_6;
    fVar4 = *(float *)(param_1 + 0xa8);
    fVar6 = (float)(iVar3 + 1);
    fVar7 = (float)(iVar1 % *(int *)(param_1 + 0x120)) / fVar6;
    fVar9 = fVar8 * *(float *)(param_1 + 0x158);
    fVar5 = 1.0;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7;
    }
    fVar5 = (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar5);
    fVar7 = (1.0 - fVar5) * -0.5 + fVar5 * 0.5;
    fVar6 = (float)iVar2 / fVar6;
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar5 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar5);
    if (fVar9 <= 1.0) {
      if (param_3 == 1) {
        fVar7 = fVar7 * *(float *)(param_1 + 0x158);
      }
    }
    else {
      fVar6 = fVar8;
      if (param_3 != 1) {
        fVar6 = fVar9;
      }
      fVar7 = fVar7 / fVar6;
    }
    *param_2 = fVar7 * fVar8 + 0.5;
    fVar7 = ((1.0 - fVar5) * -0.5 + fVar5 * 0.5) * (float)iVar3 * fVar4 * param_6;
    break;
  case 2:
    fVar4 = -0.5;
    fVar5 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar1) {
      fVar5 = -0.5;
    }
    if (iVar2 != *(int *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)iVar1 * 0x10) + -1) {
      fVar4 = 0.5;
    }
    fVar4 = fVar4 * param_6 * *(float *)(param_1 + 0xa8);
    *param_2 = fVar5 * *(float *)(param_1 + 0xa4) * param_6 + 0.5;
    goto LAB_146c64ac8;
  case 3:
    iVar2 = *(int *)(param_1 + 0x120);
    fVar4 = -0.5;
    fVar5 = 0.5;
    if (iVar2 <= iVar1) {
      fVar5 = -0.5;
    }
    fVar8 = (*(float *)(param_1 + 0x154) / (float)*(int *)(param_1 + 0xac)) * param_6;
    if (iVar1 % iVar2 <= param_4) {
      fVar4 = 0.5;
    }
    fVar7 = *(float *)(param_1 + 0x158);
    if (fVar8 * fVar7 <= 1.0) {
      if (iVar1 < iVar2) {
        fVar7 = 1.0;
      }
      fVar4 = fVar4 * fVar7;
    }
    else {
      fVar7 = fVar8 * fVar7;
      if (iVar2 <= iVar1) {
        fVar7 = fVar8;
      }
      fVar4 = fVar4 / fVar7;
    }
    *param_2 = fVar5 * param_6 * *(float *)(param_1 + 0xa4) + 0.5;
    fVar4 = fVar4 * fVar8;
LAB_146c64ac8:
    param_2[1] = fVar4 + 0.5;
    return param_2;
  case 4:
    iVar3 = *(int *)(param_1 + 0xac);
    fVar4 = *(float *)(param_1 + 0xa8);
    fVar5 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar1) {
      fVar5 = -0.5;
    }
    fVar7 = (float)iVar2 / (float)(iVar3 + 1);
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    fVar8 = (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar8);
    *param_2 = fVar5 * *(float *)(param_1 + 0xa4) * param_6 + 0.5;
    param_2[1] = ((1.0 - fVar8) * -0.5 + fVar8 * 0.5) * (float)iVar3 * fVar4 * param_6 + 0.5;
    return param_2;
  case 5:
    fVar4 = *(float *)(param_1 + 0x154) * param_6;
    iVar2 = *(int *)(param_1 + 0x120);
    fVar5 = 0.5;
    if (iVar2 <= iVar1) {
      fVar5 = -0.5;
    }
    fVar6 = (float)(iVar1 % iVar2) / (float)(*(int *)(param_1 + 0xac) + 1);
    fVar8 = fVar4 * *(float *)(param_1 + 0x158);
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar7 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar7);
    fVar7 = (1.0 - fVar7) * -0.5 + fVar7 * 0.5;
    if (fVar8 <= 1.0) {
      if (iVar2 <= iVar1) {
        fVar7 = fVar7 * *(float *)(param_1 + 0x158);
      }
    }
    else {
      if (iVar2 <= iVar1) {
        fVar8 = fVar4;
      }
      fVar7 = fVar7 / fVar8;
    }
    *param_2 = fVar5 * param_6 * *(float *)(param_1 + 0xa4) + 0.5;
    fVar7 = fVar7 * fVar4;
  }
  param_2[1] = fVar7 + 0.5;
  return param_2;
}



// FUNCTION 146c64b52 FUN_146c64b52 body=259 status=ok
// SIG undefined FUN_146c64b52(void)

double * FUN_146c64b52(longlong param_1,double *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0xa8);
  fVar4 = cosf(*(float *)(param_1 + 0x150) * (float)param_4);
  fVar5 = sinf((float)param_4 * *(float *)(param_1 + 0x150));
  if (*(char *)(param_1 + 0x148) == '\x01') {
    pfVar3 = (float *)(param_1 + 0x140);
    if (param_3 != 0) {
      pfVar3 = (float *)(param_1 + 0x154);
    }
    fVar6 = *pfVar3;
  }
  else {
    if (param_3 == 0) {
      fVar6 = *(float *)(param_1 + 0x154);
    }
    else {
      fVar6 = *(float *)(param_1 + 0x140);
    }
    fVar6 = -fVar6;
  }
  iVar2 = 0;
  if (1 < param_4) {
    iVar2 = param_4 + -2;
  }
  *param_2 = (double)(fVar4 * fVar6);
  param_2[1] = (double)(fVar5 * fVar6);
  param_2[2] = (double)(fVar1 * (float)(iVar2 + param_5));
  return param_2;
}



// FUNCTION 146c64c56 FUN_146c64c56 body=641 status=ok
// SIG undefined FUN_146c64c56(void)

float * FUN_146c64c56(longlong param_1,float *param_2,uint param_3,undefined8 param_4,int param_5,
                     float param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)param_5 * 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 200) + 4 + (longlong)param_5 * 8);
  if (param_3 < 2) {
    iVar3 = *(int *)(param_1 + 0xac);
    fVar5 = *(float *)(param_1 + 0x154) * param_6;
    fVar1 = *(float *)(param_1 + 0xa8);
    iVar4 = iVar4 % *(int *)(param_1 + 0x120);
    fVar7 = (float)iVar4;
    fVar6 = (float)iVar2;
    if (2 < iVar4) {
      fVar6 = fVar6 + fVar7 + -2.0;
    }
    fVar9 = (float)(iVar3 + 1);
    fVar7 = fVar7 / fVar9;
    fVar10 = fVar5 * *(float *)(param_1 + 0x158);
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    fVar8 = (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar8);
    fVar8 = (1.0 - fVar8) * -0.5 + fVar8 * 0.5;
    fVar6 = fVar6 / fVar9;
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar7 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar7);
    if (fVar10 <= 1.0) {
      if (param_3 == 1) {
        fVar8 = fVar8 * *(float *)(param_1 + 0x158);
      }
    }
    else {
      fVar6 = fVar5;
      if (param_3 != 1) {
        fVar6 = fVar10;
      }
      fVar8 = fVar8 / fVar6;
    }
    *param_2 = fVar8 * fVar5 + 0.5;
    param_2[1] = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) * (float)iVar3 * fVar1 * param_6 + 0.5;
  }
  else if (param_3 == 4) {
    iVar3 = *(int *)(param_1 + 0xac);
    fVar1 = *(float *)(param_1 + 0xa8);
    fVar5 = (float)(int)((iVar2 + (int)param_4) - (uint)(iVar3 + -1 <= (int)param_4)) /
            (float)(iVar3 + 1);
    fVar6 = 0.5;
    if (*(int *)(param_1 + 0x120) <= iVar4) {
      fVar6 = -0.5;
    }
    fVar7 = 1.0;
    if (fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    fVar7 = (float)(~-(uint)(fVar5 < 0.0) & (uint)fVar7);
    *param_2 = fVar6 * *(float *)(param_1 + 0xa4) * param_6 + 0.5;
    param_2[1] = ((1.0 - fVar7) * -0.5 + fVar7 * 0.5) * (float)iVar3 * fVar1 * param_6 + 0.5;
  }
  else {
    FUN_146c646be(param_1,param_2,param_6,param_4,param_5,param_6);
  }
  return param_2;
}



// FUNCTION 146c64ed8 FUN_146c64ed8 body=270 status=ok
// SIG undefined FUN_146c64ed8(void)

void FUN_146c64ed8(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  ulonglong *local_58;
  ulonglong local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)param_4;
  lVar4 = (longlong)param_3;
  local_38 = *(double *)(lVar1 + 0x10 + lVar3 * 0x18) - *(double *)(lVar1 + 0x10 + lVar4 * 0x18);
  dVar5 = *(double *)(lVar1 + 8 + lVar3 * 0x18) - *(double *)(lVar1 + 8 + lVar4 * 0x18);
  dVar7 = *(double *)(lVar1 + lVar3 * 0x18) - *(double *)(lVar1 + lVar4 * 0x18);
  dVar2 = SQRT(local_38 * local_38 + dVar7 * dVar7 + dVar5 * dVar5);
  local_40 = 0.0;
  dVar6 = 1.0 / dVar2;
  local_48 = -(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar7 * dVar6);
  if (0.0 < dVar2) {
    local_38 = local_38 * dVar6;
    local_40 = dVar5 * dVar6;
  }
  else {
    local_38 = 0.0;
  }
  local_58 = &local_48;
  local_60 = param_6;
  local_68 = param_5;
  FUN_146c64fe8();
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c64fe8 FUN_146c64fe8 body=1123 status=ok
// SIG undefined FUN_146c64fe8(void)

void FUN_146c64fe8(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                  longlong *param_6,double *param_7)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
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
  
  lVar6 = (longlong)param_5;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar5 = (longlong)param_4;
  dVar18 = *(double *)(lVar1 + 0x10 + lVar6 * 0x18);
  dVar15 = dVar18 - *(double *)(lVar1 + 0x10 + lVar5 * 0x18);
  dVar19 = *(double *)(lVar1 + 8 + lVar6 * 0x18);
  dVar2 = dVar19 - *(double *)(lVar1 + 8 + lVar5 * 0x18);
  dVar8 = *(double *)(lVar1 + lVar6 * 0x18);
  dVar7 = dVar8 - *(double *)(lVar1 + lVar5 * 0x18);
  dVar9 = SQRT(dVar15 * dVar15 + dVar7 * dVar7 + dVar2 * dVar2);
  dVar14 = 0.0;
  dVar11 = 1.0 / dVar9;
  if (0.0 < dVar9) {
    dVar15 = dVar15 * dVar11;
    dVar2 = dVar2 * dVar11;
  }
  else {
    dVar2 = 0.0;
    dVar15 = 0.0;
  }
  lVar5 = (longlong)param_3;
  dVar18 = dVar18 - *(double *)(lVar1 + 0x10 + lVar5 * 0x18);
  dVar19 = dVar19 - *(double *)(lVar1 + 8 + lVar5 * 0x18);
  dVar8 = dVar8 - *(double *)(lVar1 + lVar5 * 0x18);
  dVar12 = SQRT(dVar18 * dVar18 + dVar8 * dVar8 + dVar19 * dVar19);
  dVar10 = 1.0 / dVar12;
  dVar8 = (double)(-(ulonglong)(0.0 < dVar12) & (ulonglong)(dVar8 * dVar10));
  if (0.0 < dVar12) {
    dVar18 = dVar18 * dVar10;
    dVar19 = dVar19 * dVar10;
  }
  else {
    dVar19 = 0.0;
    dVar18 = 0.0;
  }
  dVar12 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar7 * dVar11));
  dVar7 = *param_7;
  dVar9 = param_7[1];
  dVar3 = dVar8 * dVar9 - dVar7 * dVar19;
  dVar11 = param_7[2];
  dVar13 = dVar18 * dVar7 - dVar11 * dVar8;
  dVar17 = dVar19 * dVar11 - dVar9 * dVar18;
  dVar10 = SQRT(dVar3 * dVar3 + dVar17 * dVar17 + dVar13 * dVar13);
  dVar16 = 1.0 / dVar10;
  dVar17 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar17 * dVar16));
  if (0.0 < dVar10) {
    dVar3 = dVar3 * dVar16;
    dVar14 = dVar13 * dVar16;
  }
  else {
    dVar3 = 0.0;
  }
  dVar9 = dVar11 * dVar18 + dVar7 * dVar8 + dVar9 * dVar19;
  dVar7 = 1.0;
  if (dVar9 <= 1.0) {
    dVar7 = dVar9;
  }
  dVar7 = acos((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar7));
  lVar1 = *param_6;
  lVar5 = (longlong)(param_2 * 3) * 0x18;
  *(double *)(lVar1 + lVar5) = dVar7 * dVar17;
  *(double *)(lVar1 + 8 + lVar5) = dVar7 * dVar14;
  *(double *)(lVar1 + 0x10 + lVar5) = dVar7 * dVar3;
  dVar9 = (-*param_7 * dVar12 - param_7[1] * dVar2) - param_7[2] * dVar15;
  dVar7 = 1.0;
  if (dVar9 <= 1.0) {
    dVar7 = dVar9;
  }
  dVar7 = acos((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar7));
  lVar1 = *param_6;
  *(double *)(lVar1 + 0x18 + lVar5) = dVar7 * dVar17;
  *(double *)(lVar1 + 0x20 + lVar5) = dVar7 * dVar14;
  *(double *)(lVar1 + 0x28 + lVar5) = dVar7 * dVar3;
  dVar19 = dVar18 * dVar15 + dVar8 * dVar12 + dVar2 * dVar19;
  dVar18 = 1.0;
  if (dVar19 <= 1.0) {
    dVar18 = dVar19;
  }
  dVar18 = acos((double)(-(ulonglong)(dVar19 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar19 < -1.0) & (ulonglong)dVar18));
  lVar1 = *param_6;
  *(double *)(lVar1 + 0x30 + lVar5) = dVar17 * dVar18;
  *(double *)(lVar1 + 0x38 + lVar5) = dVar14 * dVar18;
  *(double *)(lVar1 + 0x40 + lVar5) = dVar3 * dVar18;
  iVar4 = param_3;
  if (*(char *)(param_1 + 0x98) != '\0') {
    iVar4 = param_5;
    param_5 = param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar5 = (longlong)param_2;
  *(int *)(lVar1 + lVar5 * 0xc) = iVar4;
  *(int *)(lVar1 + 4 + lVar5 * 0xc) = param_4;
  *(int *)(lVar1 + 8 + lVar5 * 0xc) = param_5;
  return;
}



// FUNCTION 146c6544c FUN_146c6544c body=398 status=ok
// SIG undefined FUN_146c6544c(void)

void FUN_146c6544c(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_1447a8aa0(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_14171ef34(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_14481578e(param_1 + 0x28,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_140678446(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_14481578e(param_1 + 0x48,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_146be7820(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_146be7820(param_1 + 0x68,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_146be7820(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_14481578e(param_1 + 0x88,0);
  return;
}



// FUNCTION 146c655da FUN_146c655da body=1742 status=ok
// SIG undefined FUN_146c655da(void)

void FUN_146c655da(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined8 *local_158;
  uint local_14c;
  int local_148;
  int local_144;
  int *local_140;
  int *local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 **local_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [2];
  undefined8 *local_b8;
  undefined8 uStack_b0;
  code *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar2 = *(int *)(param_1 + 0xa8);
  local_144 = *(int *)(param_1 + 0xb8);
  uVar15 = iVar2 - (*(byte *)(param_1 + 0x149) ^ 1);
  local_14c = (uint)*(byte *)(param_1 + 0x148);
  local_148 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 1;
  local_140 = param_4;
  local_138 = param_3;
  local_130 = param_2;
  FUN_144941252(&local_b8,0);
  *local_b8 = 0;
  dVar8 = 0.0;
  dVar6 = 0.0;
  if (0 < (int)uVar15) {
    uVar20 = 0;
    do {
      uVar11 = uStack_b0;
      uVar1 = uVar20 + 1;
      uVar14 = (longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
               (longlong)iVar2;
      if ((*(char *)(param_1 + 0x14b) == '\x01') &&
         (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104))) {
        lVar18 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar18 = param_1 + 0x108;
        }
        uVar12 = *(int *)(param_1 + 0x118) + 0x7fffffff;
        iVar17 = *(int *)(lVar18 + (ulonglong)((uint)uVar20 & uVar12) * 4);
        if (iVar17 != -1) {
          lVar4 = *(longlong *)(param_1 + 0xd0);
          do {
            if (uVar20 == *(uint *)(lVar4 + (longlong)iVar17 * 0xc)) {
              uVar13 = (uint)uVar14;
              iVar17 = *(int *)(lVar18 + (ulonglong)(uVar12 & uVar13) * 4);
              goto LAB_146c657d0;
            }
            iVar17 = *(int *)(lVar4 + (longlong)iVar17 * 0xc + 4);
          } while (iVar17 != -1);
        }
      }
LAB_146c656dc:
      lVar18 = *(longlong *)(param_1 + 0xa0);
      uVar14 = uVar14 & 0xffffffff;
      dVar6 = *(double *)(lVar18 + uVar14 * 0x18) - *(double *)(lVar18 + uVar20 * 0x18);
      dVar7 = *(double *)(lVar18 + 8 + uVar14 * 0x18) - *(double *)(lVar18 + 8 + uVar20 * 0x18);
      dVar21 = *(double *)(lVar18 + 0x10 + uVar14 * 0x18) -
               *(double *)(lVar18 + 0x10 + uVar20 * 0x18);
      dVar8 = dVar8 + SQRT(dVar21 * dVar21 + dVar6 * dVar6 + dVar7 * dVar7);
LAB_146c6572e:
      lVar18 = (longlong)(int)uStack_b0;
      uVar12 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar12);
      if (uStack_b0._4_4_ < uVar12) {
        FUN_144941252(&local_b8,uVar11 & 0xffffffff);
      }
      local_b8[lVar18] = dVar8;
      uVar20 = uVar1;
      dVar6 = dVar8;
    } while (uVar1 != uVar15);
  }
  iVar17 = local_144;
  if (*(char *)(param_1 + 0x140) == '\0') {
    bVar5 = dVar6 != 0.0;
  }
  else {
    bVar5 = *(float *)(param_1 + 0x144) != 0.0;
    dVar6 = (double)*(float *)(param_1 + 0x144);
  }
  if (bVar5) {
    dVar6 = *(double *)(param_1 + 0x128) / dVar6;
  }
  else {
    dVar6 = 0.0;
  }
  uVar15 = local_144 - (local_14c ^ 1);
  iVar19 = iVar2 - local_148;
  if (0 < (int)uStack_b0) {
    lVar18 = 0;
    do {
      local_b8[lVar18] = (double)local_b8[lVar18] * dVar6 + *(double *)(param_1 + 0x138);
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_b0);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_146be4e92(local_c8,uVar15,1);
  local_120 = iVar17;
  local_118 = local_148;
  local_110 = local_130;
  local_158 = &local_90;
  local_90 = 0;
  uVar12 = 0;
  local_88 = 0;
  local_a0 = FUN_14298020c;
  local_160 = 0;
  local_14c = iVar19;
  local_128 = param_1;
  local_11c = iVar2;
  local_114 = iVar19;
  local_108 = local_c8;
  local_98 = &local_128;
  FUN_1401f8d10(L"ParallelFor Task",uVar15,1);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 1;
  FUN_144941252(&local_e8,0);
  *local_e8 = 0;
  if ((int)uVar15 < 1) {
    dVar6 = 0.0;
    iVar19 = 0;
  }
  else {
    dVar6 = 0.0;
    uVar20 = 0;
    do {
      uVar1 = uStack_e0;
      dVar6 = dVar6 + *(double *)(local_c8[0] + uVar20 * 8);
      lVar18 = (longlong)(int)uStack_e0;
      uVar12 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar12);
      if (uStack_e0._4_4_ < uVar12) {
        FUN_144941252(&local_e8,uVar1 & 0xffffffff);
      }
      uVar1 = uStack_d0;
      local_e8[lVar18] = dVar6;
      dVar8 = *(double *)(local_c8[0] + uVar20 * 8);
      lVar18 = (longlong)(int)uStack_d0;
      uVar12 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar12);
      if (uStack_d0._4_4_ < uVar12) {
        FUN_144941252(&local_d8,uVar1 & 0xffffffff);
      }
      *(double *)(local_d8 + lVar18 * 8) = dVar8 * -0.5 + dVar6;
      uVar20 = uVar20 + 1;
    } while (uVar15 != uVar20);
    iVar17 = local_144;
    iVar19 = (int)uStack_d0;
    uVar12 = uStack_d0._4_4_;
  }
  uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar19 + 1U);
  if (uVar12 < iVar19 + 1U) {
    FUN_144941252(&local_d8,iVar19);
  }
  piVar10 = local_138;
  piVar9 = local_140;
  uVar15 = local_14c;
  *(undefined8 *)(local_d8 + (longlong)iVar19 * 8) = 0;
  if (*(char *)(param_1 + 0x140) == '\0') {
    bVar5 = dVar6 != 0.0;
  }
  else {
    bVar5 = *(float *)(param_1 + 0x144) != 0.0;
    dVar6 = (double)((float)iVar2 * *(float *)(param_1 + 0x144));
  }
  if (bVar5) {
    dVar6 = *(double *)(param_1 + 0x120) / dVar6;
  }
  else {
    dVar6 = 0.0;
  }
  if (1 < (int)uStack_e0) {
    lVar18 = 1;
    do {
      local_e8[lVar18] = (double)local_e8[lVar18] * dVar6 + *(double *)(param_1 + 0x130);
      *(double *)(local_d8 + -8 + lVar18 * 8) =
           *(double *)(local_d8 + -8 + lVar18 * 8) * dVar6 + *(double *)(param_1 + 0x130);
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_e0);
  }
  *local_138 = (int)uStack_e0;
  *local_140 = (int)uStack_b0;
  iVar3 = *local_138;
  iVar16 = iVar3 * (int)uStack_b0;
  iVar19 = (int)uStack_b0;
  if (0 < iVar16) {
    FUN_1407524e2(param_1 + 0x18,iVar16,1);
    FUN_144a1a59e(param_1 + 0x28,iVar16,1);
    iVar19 = *piVar9;
    iVar3 = *piVar10;
  }
  local_114 = local_148;
  local_110 = CONCAT44(local_110._4_4_,uVar15);
  local_108 = (longlong *)local_130;
  local_100 = &local_d8;
  local_f8 = &local_e8;
  local_f0 = &local_b8;
  local_90 = 0;
  local_88 = 0;
  local_a0 = FUN_142980334;
  local_158 = &local_90;
  local_160 = 0;
  local_128 = param_1;
  local_120 = iVar17;
  local_11c = iVar2;
  local_118 = iVar19;
  local_98 = &local_128;
  FUN_1401f8d10(L"ParallelFor Task",iVar3,1);
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c657d0:
  if (iVar17 == -1) goto LAB_146c656dc;
  if (*(uint *)(lVar4 + (longlong)iVar17 * 0xc) == uVar13) goto LAB_146c6572e;
  iVar17 = *(int *)(lVar4 + (longlong)iVar17 * 0xc + 4);
  goto LAB_146c657d0;
}



// FUNCTION 146c65cab FUN_146c65cab body=875 status=ok
// SIG undefined FUN_146c65cab(void)

double FUN_146c65cab(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  dVar9 = param_4[2];
  dVar1 = param_2[2] - dVar9;
  dVar11 = *param_4;
  dVar12 = param_4[1];
  dVar5 = param_2[1] - dVar12;
  dVar16 = *param_2 - dVar11;
  dVar8 = param_3[1] - dVar12;
  dVar13 = *param_3 - dVar11;
  dVar2 = dVar1 * dVar1 + dVar16 * dVar16 + dVar5 * dVar5;
  dVar14 = param_1[1] - dVar12;
  dVar3 = *param_1 - dVar11;
  dVar6 = param_3[2] - dVar9;
  dVar15 = param_1[2] - dVar9;
  dVar7 = dVar6 * dVar6 + dVar13 * dVar13 + dVar8 * dVar8;
  dVar4 = dVar1 * dVar6 + dVar16 * dVar13 + dVar5 * dVar8;
  dVar1 = dVar1 * dVar15 + dVar16 * dVar3 + dVar5 * dVar14;
  dVar16 = dVar15 * dVar6 + dVar3 * dVar13 + dVar14 * dVar8;
  dVar14 = dVar2 * dVar7 - dVar4 * dVar4;
  if (dVar14 <= 1e-30) {
    dVar14 = 1e-30;
  }
  dVar3 = (dVar7 * dVar1 - dVar16 * dVar4) * (1.0 / dVar14);
  dVar1 = (dVar2 * dVar16 - dVar1 * dVar4) * (1.0 / dVar14);
  if (((0.0 <= dVar3) && (0.0 <= dVar1)) && (dVar14 = (1.0 - dVar3) - dVar1, 0.0 <= dVar14)) {
    dVar11 = (dVar11 * dVar14 + *param_3 * dVar1 + *param_2 * dVar3) - *param_1;
    dVar12 = (dVar12 * dVar14 + param_3[1] * dVar1 + param_2[1] * dVar3) - param_1[1];
    dVar9 = (dVar9 * dVar14 + param_3[2] * dVar1 + param_2[2] * dVar3) - param_1[2];
    return SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12);
  }
  if (dVar3 <= 0.0) {
    uVar10 = FUN_146c66016(param_1,param_3,param_4);
    uVar17 = (undefined4)uVar10;
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (dVar1 <= 0.0) goto LAB_146c65fe3;
  }
  else {
    uVar10 = FUN_146c66016(param_1,param_2,param_4);
    uVar17 = (undefined4)uVar10;
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  param_4 = param_3;
LAB_146c65fe3:
  dVar9 = (double)FUN_146c66016(param_1,param_2,param_4);
  if ((double)CONCAT44(uVar18,uVar17) <= dVar9) {
    dVar9 = (double)CONCAT44(uVar18,uVar17);
  }
  return dVar9;
}



// FUNCTION 146c66016 FUN_146c66016 body=404 status=ok
// SIG undefined FUN_146c66016(void)

double FUN_146c66016(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_3[2];
  dVar3 = dVar4 - param_2[2];
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar1 = dVar6 - param_2[1];
  dVar2 = dVar5 - *param_2;
  dVar1 = ((dVar4 - param_1[2]) * dVar3 + (dVar5 - *param_1) * dVar2 + (dVar6 - param_1[1]) * dVar1)
          / (dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  dVar2 = 0.0;
  if ((0.0 <= dVar1) && (dVar2 = dVar1, 1.0 < dVar1)) {
    dVar2 = 1.0;
  }
  dVar1 = 1.0 - dVar2;
  dVar5 = (dVar5 * dVar1 + *param_2 * dVar2) - *param_1;
  dVar6 = (dVar6 * dVar1 + param_2[1] * dVar2) - param_1[1];
  dVar4 = (dVar4 * dVar1 + param_2[2] * dVar2) - param_1[2];
  return SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6);
}



// FUNCTION 146c661aa FUN_146c661aa body=556 status=ok
// SIG undefined FUN_146c661aa(void)

undefined8
FUN_146c661aa(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,double *param_9,double *param_10,
             double *param_11)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  *param_11 = 0.0;
  *param_10 = 0.0;
  param_5 = param_5 - param_1;
  param_7 = param_7 - param_1;
  param_6 = param_6 - param_2;
  param_8 = param_8 - param_2;
  dVar3 = param_6 * param_7 - param_8 * param_5;
  *param_9 = dVar3;
  iVar1 = 1;
  if (dVar3 <= 0.0) {
    if (dVar3 < 0.0) {
LAB_146c662f3:
      iVar1 = -1;
    }
    else if (param_8 <= param_6) {
      if (param_8 < param_6) goto LAB_146c662f3;
      if ((param_5 <= param_7) && (iVar1 = -1, param_7 <= param_5)) {
        return 0;
      }
    }
  }
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  dVar3 = param_8 * param_3 - param_4 * param_7;
  *param_10 = dVar3;
  if (dVar3 <= 0.0) {
    iVar2 = -1;
    if (0.0 <= dVar3) {
      if (param_8 < param_4) goto LAB_146c66271;
      if ((param_8 <= param_4) && (iVar2 = 1, param_7 <= param_3)) {
        iVar2 = -(uint)(param_7 < param_3);
      }
    }
  }
  else {
LAB_146c66271:
    iVar2 = 1;
  }
  if (iVar2 != iVar1) {
    return 0;
  }
  dVar3 = param_4 * param_5 - param_6 * param_3;
  *param_11 = dVar3;
  if (dVar3 <= 0.0) {
    iVar2 = -1;
    if (dVar3 < 0.0) goto LAB_146c662ac;
    if (param_6 <= param_4) {
      if ((param_4 <= param_6) && (iVar2 = 1, param_3 <= param_5)) {
        iVar2 = -(uint)(param_3 < param_5);
      }
      goto LAB_146c662ac;
    }
  }
  iVar2 = 1;
LAB_146c662ac:
  if (iVar2 != iVar1) {
    return 0;
  }
  dVar3 = dVar3 + *param_10 + *param_9;
  *param_9 = *param_9 / dVar3;
  *param_10 = *param_10 / dVar3;
  *param_11 = *param_11 / dVar3;
  return 1;
}



// FUNCTION 146c663d6 FUN_146c663d6 body=73 status=ok
// SIG undefined FUN_146c663d6(void)

bool FUN_146c663d6(double *param_1,double *param_2)

{
  return SQRT((param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) +
              (*param_2 - *param_1) * (*param_2 - *param_1) +
              (param_2[1] - param_1[1]) * (param_2[1] - param_1[1])) + param_2[3] <= param_1[3];
}



// FUNCTION 146c6641f FUN_146c6641f body=313 status=ok
// SIG undefined FUN_146c6641f(void)

bool FUN_146c6641f(double *param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = param_2[6];
  dVar1 = (*param_2 - dVar3 * param_2[3]) - *param_1;
  dVar5 = (param_2[1] - param_2[4] * dVar3) - param_1[1];
  dVar4 = (param_2[2] - param_2[5] * dVar3) - param_1[2];
  if (SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar5 * dVar5) + param_2[7] <= param_1[3]) {
    dVar4 = (dVar3 * param_2[3] + *param_2) - *param_1;
    dVar5 = (param_2[4] * dVar3 + param_2[1]) - param_1[1];
    dVar3 = (param_2[5] * dVar3 + param_2[2]) - param_1[2];
    bVar2 = param_2[7] + SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5) <= param_1[3];
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 146c66558 FUN_146c66558 body=14 status=ok
// SIG undefined FUN_146c66558(void)

void FUN_146c66558(undefined8 param_1,undefined8 param_2)

{
  FUN_146c66566(param_2,param_1);
  return;
}



// FUNCTION 146c66566 FUN_146c66566 body=1695 status=ok
// SIG undefined FUN_146c66566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146c66566(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
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
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  dVar1 = param_1[3];
  dVar25 = param_1[4];
  dVar5 = dVar25 + dVar25;
  dVar34 = param_1[5];
  dVar23 = dVar34 + dVar34;
  dVar2 = param_1[6];
  dVar26 = dVar1 * (dVar1 + dVar1);
  dVar29 = (dVar1 + dVar1) * dVar2;
  dVar6 = dVar1 * dVar23 + dVar5 * dVar2;
  dVar27 = dVar1 * dVar5 - dVar2 * dVar23;
  dVar15 = 1.0 - (dVar5 * dVar25 + dVar23 * dVar34);
  dVar28 = dVar25 * dVar23 - dVar29;
  dVar17 = 1.0 - (dVar23 * dVar34 + dVar26);
  dVar21 = dVar1 * dVar5 + dVar2 * dVar23;
  dVar24 = 1.0 - (dVar5 * dVar25 + dVar26);
  dVar29 = dVar25 * dVar23 + dVar29;
  dVar19 = dVar1 * dVar23 - dVar5 * dVar2;
  dVar1 = param_1[7];
  dVar25 = param_1[8];
  dVar13 = (double)((ulonglong)dVar25 ^ DAT_149931e80);
  dVar14 = dVar29 * dVar13;
  dVar18 = dVar17 * dVar13;
  dVar22 = dVar21 * dVar1;
  dVar30 = dVar18 - dVar22;
  dVar34 = param_1[9];
  dVar8 = dVar28 * dVar34;
  dVar13 = dVar13 * dVar27;
  dVar10 = dVar15 * dVar1;
  dVar16 = dVar13 - dVar10;
  dVar7 = dVar6 * dVar34;
  dVar2 = param_1[1];
  dVar5 = *param_1;
  dVar26 = *param_2;
  dVar33 = ((dVar16 - dVar7) + dVar5) - dVar26;
  dVar23 = param_2[1];
  dVar31 = ((dVar30 - dVar8) + dVar2) - dVar23;
  dVar20 = dVar19 * dVar1;
  dVar9 = dVar14 - dVar20;
  dVar11 = dVar24 * dVar34;
  dVar3 = param_1[2];
  dVar4 = param_2[2];
  dVar32 = ((dVar9 - dVar11) + dVar3) - dVar4;
  dVar12 = param_2[3] * param_2[3];
  if (dVar32 * dVar32 + dVar33 * dVar33 + dVar31 * dVar31 <= dVar12) {
    dVar34 = -dVar34;
    dVar14 = dVar14 + dVar20;
    dVar24 = dVar24 * dVar34;
    dVar18 = dVar18 + dVar22;
    dVar28 = dVar28 * dVar34;
    dVar13 = dVar13 + dVar10;
    dVar6 = dVar6 * dVar34;
    dVar34 = (dVar6 + dVar13 + dVar5) - dVar26;
    dVar33 = (dVar28 + dVar18 + dVar2) - dVar23;
    dVar31 = (dVar24 + dVar14 + dVar3) - dVar4;
    if (dVar31 * dVar31 + dVar34 * dVar34 + dVar33 * dVar33 <= dVar12) {
      dVar29 = dVar29 * dVar25;
      dVar20 = dVar20 + dVar29;
      dVar17 = dVar17 * dVar25;
      dVar22 = dVar22 + dVar17;
      dVar27 = dVar27 * dVar25;
      dVar10 = dVar10 + dVar27;
      dVar25 = (dVar6 + dVar10 + dVar5) - dVar26;
      dVar34 = (dVar28 + dVar22 + dVar2) - dVar23;
      dVar33 = (dVar24 + dVar20 + dVar3) - dVar4;
      if (dVar33 * dVar33 + dVar25 * dVar25 + dVar34 * dVar34 <= dVar12) {
        dVar1 = -dVar1;
        dVar29 = dVar19 * dVar1 + dVar29;
        dVar17 = dVar21 * dVar1 + dVar17;
        dVar27 = dVar15 * dVar1 + dVar27;
        dVar1 = (dVar6 + dVar27 + dVar5) - dVar26;
        dVar34 = (dVar28 + dVar17 + dVar2) - dVar23;
        dVar25 = (dVar24 + dVar29 + dVar3) - dVar4;
        if ((((dVar25 * dVar25 + dVar1 * dVar1 + dVar34 * dVar34 <= dVar12) &&
             (dVar25 = (dVar16 + dVar7 + dVar5) - dVar26, dVar34 = (dVar30 + dVar8 + dVar2) - dVar23
             , dVar1 = (dVar9 + dVar11 + dVar3) - dVar4,
             dVar1 * dVar1 + dVar25 * dVar25 + dVar34 * dVar34 <= dVar12)) &&
            (dVar1 = (dVar13 + dVar7 + dVar5) - dVar26, dVar34 = (dVar18 + dVar8 + dVar2) - dVar23,
            dVar25 = (dVar14 + dVar11 + dVar3) - dVar4,
            dVar25 * dVar25 + dVar1 * dVar1 + dVar34 * dVar34 <= dVar12)) &&
           (dVar25 = (dVar10 + dVar7 + dVar5) - dVar26, dVar34 = (dVar22 + dVar8 + dVar2) - dVar23,
           dVar1 = (dVar20 + dVar11 + dVar3) - dVar4,
           dVar1 * dVar1 + dVar25 * dVar25 + dVar34 * dVar34 <= dVar12)) {
          dVar26 = (dVar7 + dVar27 + dVar5) - dVar26;
          dVar23 = (dVar2 + dVar8 + dVar17) - dVar23;
          dVar4 = (dVar3 + dVar11 + dVar29) - dVar4;
          return dVar4 * dVar4 + dVar26 * dVar26 + dVar23 * dVar23 <= dVar12;
        }
      }
    }
  }
  return false;
}



// FUNCTION 146c66c05 FUN_146c66c05 body=317 status=ok
// SIG undefined FUN_146c66c05(void)

bool FUN_146c66c05(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = param_2[6];
  local_50 = param_2[2] - param_2[5] * dVar1;
  local_60 = *param_2 - dVar1 * param_2[3];
  local_58 = param_2[1] - param_2[4] * dVar1;
  dVar1 = (double)FUN_146c7eea6(local_58,&local_60,local_48);
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  dVar2 = param_2[6];
  local_50 = param_2[5] * dVar2 + param_2[2];
  local_58 = param_2[4] * dVar2 + param_2[1];
  local_60 = dVar2 * param_2[3] + *param_2;
  dVar2 = (double)FUN_146c7eea6(param_1,&local_60,local_48);
  if (dVar2 < 0.0) {
    dVar2 = sqrt(dVar2);
  }
  else {
    dVar2 = SQRT(dVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (double)(~-(ulonglong)(dVar2 <= dVar1) & (ulonglong)dVar2 |
                   (ulonglong)dVar1 & -(ulonglong)(dVar2 <= dVar1)) + param_2[7] <=
           *(double *)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c66d43 FUN_146c66d43 body=104 status=ok
// SIG undefined FUN_146c66d43(void)

bool FUN_146c66d43(longlong param_1,longlong param_2)

{
  double dVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar1 = (double)FUN_146c7eea6(param_1,param_2,local_20);
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return dVar1 + *(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c66dac FUN_146c66dac body=14 status=ok
// SIG undefined FUN_146c66dac(void)

void FUN_146c66dac(undefined8 param_1,undefined8 param_2)

{
  FUN_146c66dba(param_2,param_1);
  return;
}



// FUNCTION 146c66dba FUN_146c66dba body=1844 status=ok
// SIG undefined FUN_146c66dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146c66dba(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double extraout_XMM0_Qa;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_288 [40];
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
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
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  dVar13 = param_1[3];
  dVar14 = param_1[4];
  dVar15 = dVar14 + dVar14;
  dVar1 = param_1[5];
  dVar18 = dVar1 + dVar1;
  dVar2 = param_1[6];
  dVar17 = dVar13 * (dVar13 + dVar13);
  dVar11 = (dVar13 + dVar13) * dVar2;
  local_1d0 = dVar13 * dVar18 + dVar15 * dVar2;
  local_200 = dVar13 * dVar15 - dVar2 * dVar18;
  local_210 = 1.0 - (dVar15 * dVar14 + dVar18 * dVar1);
  local_1d8 = dVar14 * dVar18 - dVar11;
  local_208 = 1.0 - (dVar18 * dVar1 + dVar17);
  local_218 = dVar13 * dVar15 + dVar2 * dVar18;
  local_248 = 1.0 - (dVar15 * dVar14 + dVar17);
  dVar11 = dVar14 * dVar18 + dVar11;
  dVar18 = dVar13 * dVar18 - dVar15 * dVar2;
  dVar13 = param_1[7];
  local_1a8 = param_1[8];
  uStack_1a0 = 0;
  local_238 = (double)((ulonglong)local_1a8 ^ DAT_149931e80);
  uStack_230 = DAT_149931e80._8_8_;
  local_1e0 = dVar11 * local_238;
  local_1e8 = dVar18 * dVar13;
  dVar15 = local_1e0 - local_1e8;
  local_198 = param_1[9];
  dVar3 = local_248 * local_198;
  local_1f0 = local_208 * local_238;
  local_1f8 = local_218 * dVar13;
  dVar6 = local_1f0 - local_1f8;
  dVar2 = local_1d8 * local_198;
  local_238 = local_238 * local_200;
  dVar14 = local_210 * dVar13;
  uVar19 = DAT_149931e80._8_4_;
  uVar20 = DAT_149931e80._12_4_;
  dVar7 = local_238 - dVar14;
  uStack_190 = 0;
  dVar4 = local_1d0 * local_198;
  local_d0 = (dVar15 - dVar3) + param_1[2];
  local_d8 = (dVar6 - dVar2) + param_1[1];
  local_e0 = (dVar7 - dVar4) + *param_1;
  dVar12 = (double)FUN_146c7eea6(param_2,&local_e0,&local_f8);
  dVar1 = local_1e8;
  dVar17 = local_1f8;
  uVar9 = uStack_230;
  if (dVar12 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
    uStack_1b0 = 0;
    local_1c8._8_4_ = uVar19;
    local_1c8._0_8_ = dVar7;
    local_1c8._12_4_ = uVar20;
    dVar7 = -local_198;
    dVar5 = local_1e0 + local_1e8;
    local_248 = local_248 * dVar7;
    dVar8 = local_1f0 + local_1f8;
    dVar16 = local_1d8 * dVar7;
    dVar12 = local_238 + dVar14;
    dVar7 = local_1d0 * dVar7;
    local_e8 = local_248 + dVar5 + param_1[2];
    local_f0 = dVar16 + dVar8 + param_1[1];
    local_f8 = dVar7 + dVar12 + *param_1;
    local_260 = dVar3;
    local_258 = dVar4;
    local_250 = dVar2;
    local_240 = dVar18;
    local_228 = dVar6;
    local_220 = dVar15;
    local_1b8 = dVar13;
    dVar13 = (double)FUN_146c7eea6(param_2,&local_f8,&local_110);
    if (dVar13 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
      dVar11 = dVar11 * local_1a8;
      dVar1 = dVar1 + dVar11;
      dVar13 = local_208 * local_1a8;
      dVar17 = dVar17 + dVar13;
      dVar2 = local_200 * local_1a8;
      dVar14 = dVar14 + dVar2;
      local_100 = local_248 + dVar1 + param_1[2];
      local_108 = dVar16 + dVar17 + param_1[1];
      local_110 = dVar7 + dVar14 + *param_1;
      local_238 = dVar12;
      uStack_230 = uVar9;
      dVar15 = (double)FUN_146c7eea6(param_2,&local_110,&local_128);
      if (dVar15 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
        dVar15 = -local_1b8;
        local_240 = local_240 * dVar15 + dVar11;
        dVar13 = local_218 * dVar15 + dVar13;
        dVar2 = local_210 * dVar15 + dVar2;
        local_118 = local_248 + local_240 + param_1[2];
        local_120 = dVar16 + dVar13 + param_1[1];
        local_128 = dVar7 + dVar2 + *param_1;
        dVar11 = (double)FUN_146c7eea6(param_2,&local_128,&local_140);
        dVar18 = local_238;
        dVar15 = local_240;
        if (dVar11 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
          local_130 = local_220 + local_260 + param_1[2];
          local_138 = local_228 + local_250 + param_1[1];
          local_140 = (double)local_1c8._0_8_ + local_258 + *param_1;
          dVar11 = (double)FUN_146c7eea6(param_2,&local_140,&local_158);
          if (dVar11 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
            local_148 = dVar5 + local_260 + param_1[2];
            local_150 = dVar8 + local_250 + param_1[1];
            local_158 = dVar18 + local_258 + *param_1;
            dVar18 = (double)FUN_146c7eea6(param_2,&local_158,&local_170);
            if (dVar18 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
              local_160 = dVar1 + local_260 + param_1[2];
              local_168 = dVar17 + local_250 + param_1[1];
              local_170 = dVar14 + local_258 + *param_1;
              dVar14 = (double)FUN_146c7eea6(param_2,&local_170,&local_188);
              if (dVar14 <= *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38)) {
                local_178 = local_260 + dVar15 + param_1[2];
                local_180 = local_250 + dVar13 + param_1[1];
                local_188 = local_258 + dVar2 + *param_1;
                FUN_146c7eea6(param_2,&local_188,local_c8);
                bVar10 = extraout_XMM0_Qa <=
                         *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38);
                goto LAB_146c67040;
              }
            }
          }
        }
      }
    }
  }
  bVar10 = false;
LAB_146c67040:
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c674ef FUN_146c674ef body=795 status=ok
// SIG undefined FUN_146c674ef(void)

bool FUN_146c674ef(double *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  ulonglong uVar8;
  double *pdVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar1 = param_1[3];
  dVar2 = param_1[4];
  dVar5 = dVar2 + dVar2;
  dVar3 = param_1[5];
  dVar6 = dVar3 + dVar3;
  dVar4 = param_1[6];
  dVar12 = dVar1 * (dVar1 + dVar1);
  dVar11 = (dVar1 + dVar1) * dVar4;
  pdVar9 = &local_108;
  local_108 = 1.0 - (dVar5 * dVar2 + dVar6 * dVar3);
  dStack_100 = dVar1 * dVar5 + dVar4 * dVar6;
  local_f8 = dVar1 * dVar6 - dVar5 * dVar4;
  local_f0 = dVar1 * dVar5 - dVar4 * dVar6;
  local_e8 = 1.0 - (dVar6 * dVar3 + dVar12);
  local_e0 = dVar2 * dVar6 + dVar11;
  local_d8 = dVar1 * dVar6 + dVar5 * dVar4;
  local_d0 = dVar2 * dVar6 - dVar11;
  local_c8 = 1.0 - (dVar5 * dVar2 + dVar12);
  uVar8 = 0;
  bVar10 = false;
  do {
    dVar1 = param_1[uVar8 + 7];
    dVar2 = pdVar9[2];
    dVar3 = *pdVar9;
    dVar4 = pdVar9[1];
    local_128 = *pdVar9;
    dStack_120 = pdVar9[1];
    local_118 = pdVar9[2];
    local_110 = (dVar1 * dVar2 + param_1[2]) * local_118 +
                (dVar1 * dVar3 + *param_1) * local_128 + (dVar1 * dVar4 + param_1[1]) * dStack_120;
    cVar7 = FUN_146c6780b(&local_128,param_2);
    if (cVar7 != '\0') break;
    dVar1 = param_1[uVar8 + 7];
    local_118 = -dVar2;
    dStack_120 = -dVar4;
    local_128 = -dVar3;
    local_110 = (local_128 * (*param_1 - dVar1 * dVar3) - (param_1[1] - dVar4 * dVar1) * dVar4) -
                (param_1[2] - dVar2 * dVar1) * dVar2;
    cVar7 = FUN_146c6780b(&local_128,param_2);
    if (cVar7 != '\0') break;
    bVar10 = 1 < uVar8;
    uVar8 = uVar8 + 1;
    pdVar9 = pdVar9 + 3;
  } while (uVar8 != 3);
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6780b FUN_146c6780b body=621 status=ok
// SIG undefined FUN_146c6780b(void)

bool FUN_146c6780b(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
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
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_2[3];
  dVar5 = param_2[4];
  dVar9 = dVar5 + dVar5;
  dVar6 = param_2[5];
  dVar12 = dVar6 + dVar6;
  dVar7 = param_2[6];
  dVar10 = dVar4 * (dVar4 + dVar4);
  dVar8 = (dVar4 + dVar4) * dVar7;
  dVar11 = ((dVar4 * dVar12 - dVar9 * dVar7) * dVar3 +
           (1.0 - (dVar9 * dVar5 + dVar12 * dVar6)) * dVar1 +
           (dVar4 * dVar9 + dVar7 * dVar12) * dVar2) * param_2[7];
  uVar13 = -(ulonglong)(-dVar11 <= dVar11);
  dVar6 = ((dVar5 * dVar12 + dVar8) * dVar3 +
          (dVar4 * dVar9 - dVar7 * dVar12) * dVar1 + (1.0 - (dVar12 * dVar6 + dVar10)) * dVar2) *
          param_2[8];
  uVar14 = -(ulonglong)(-dVar6 <= dVar6);
  dVar4 = ((1.0 - (dVar9 * dVar5 + dVar10)) * dVar3 +
          (dVar4 * dVar12 + dVar9 * dVar7) * dVar1 + (dVar5 * dVar12 - dVar8) * dVar2) * param_2[9];
  uVar15 = -(ulonglong)(-dVar4 <= dVar4);
  return 0.0 <= (double)(~uVar15 & (ulonglong)-dVar4 | (ulonglong)dVar4 & uVar15) +
                (double)(~uVar14 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar14) +
                (double)(~uVar13 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar13) +
                ((param_2[2] * dVar3 + *param_2 * dVar1 + param_2[1] * dVar2) - param_1[3]);
}



// FUNCTION 146c67a78 FUN_146c67a78 body=815 status=ok
// SIG undefined FUN_146c67a78(void)

bool FUN_146c67a78(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double *pdVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar1 = param_1[3];
  dVar2 = param_1[4];
  dVar10 = dVar2 + dVar2;
  dVar3 = param_1[5];
  dVar5 = dVar3 + dVar3;
  dVar4 = param_1[6];
  dVar11 = dVar1 * (dVar1 + dVar1);
  dVar9 = (dVar1 + dVar1) * dVar4;
  pdVar7 = &local_e8;
  local_f8 = 1.0 - (dVar10 * dVar2 + dVar5 * dVar3);
  local_f0 = dVar1 * dVar10 + dVar4 * dVar5;
  local_e8 = dVar1 * dVar5 - dVar10 * dVar4;
  local_e0 = dVar1 * dVar10 - dVar4 * dVar5;
  local_d8 = 1.0 - (dVar5 * dVar3 + dVar11);
  local_d0 = dVar2 * dVar5 + dVar9;
  local_c8 = dVar1 * dVar5 + dVar10 * dVar4;
  local_c0 = dVar2 * dVar5 - dVar9;
  local_b8 = 1.0 - (dVar10 * dVar2 + dVar11);
  local_100 = param_2[2];
  uVar6 = 0;
  bVar8 = false;
  do {
    dVar1 = param_1[uVar6 + 7];
    dVar2 = *pdVar7;
    dVar3 = pdVar7[-2];
    dVar4 = pdVar7[-1];
    if ((0.0 <= ((dVar3 * *param_2 + param_2[1] * dVar4 + dVar2 * local_100) -
                ((param_1[2] + dVar1 * dVar2) * dVar2 +
                (*param_1 + dVar1 * dVar3) * dVar3 + (param_1[1] + dVar1 * dVar4) * dVar4)) +
                param_2[3]) ||
       (0.0 <= (((-dVar3 * *param_2 - param_2[1] * dVar4) - dVar2 * local_100) -
               (((*param_1 - dVar1 * dVar3) * -dVar3 - (param_1[1] - dVar1 * dVar4) * dVar4) -
               dVar2 * (param_1[2] - dVar1 * dVar2))) + param_2[3])) break;
    bVar8 = 1 < uVar6;
    uVar6 = uVar6 + 1;
    pdVar7 = pdVar7 + 3;
  } while (uVar6 != 3);
  if ((DAT_14c707940 ^ (ulonglong)auStack_128 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c67da8 FUN_146c67da8 body=58 status=ok
// SIG undefined FUN_146c67da8(void)

bool FUN_146c67da8(double *param_1,double *param_2)

{
  return 0.0 <= ((param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1]) -
                param_1[3]) + param_2[3];
}



// FUNCTION 146c67de2 FUN_146c67de2 body=1100 status=ok
// SIG undefined FUN_146c67de2(void)

bool FUN_146c67de2(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double *pdVar5;
  bool bVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_158 [32];
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
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = param_1[3];
  dVar10 = param_1[4];
  dVar11 = dVar10 + dVar10;
  dVar2 = param_1[5];
  dVar3 = dVar2 + dVar2;
  dVar8 = param_1[6];
  dVar12 = dVar1 * (dVar1 + dVar1);
  dVar9 = (dVar1 + dVar1) * dVar8;
  pdVar5 = &local_e8;
  local_f8 = 1.0 - (dVar11 * dVar10 + dVar3 * dVar2);
  local_f0 = dVar1 * dVar11 + dVar8 * dVar3;
  local_e8 = dVar1 * dVar3 - dVar11 * dVar8;
  local_e0 = dVar1 * dVar11 - dVar8 * dVar3;
  local_d8 = 1.0 - (dVar3 * dVar2 + dVar12);
  local_d0 = dVar10 * dVar3 + dVar9;
  local_c8 = dVar1 * dVar3 + dVar11 * dVar8;
  local_c0 = dVar10 * dVar3 - dVar9;
  local_b8 = 1.0 - (dVar11 * dVar10 + dVar12);
  local_138 = param_1[2];
  local_128 = param_1[1];
  dVar1 = param_2[6];
  local_110 = param_2[2] - param_2[5] * dVar1;
  local_118 = param_2[1] - param_2[4] * dVar1;
  local_130 = *param_2 - dVar1 * param_2[3];
  local_100 = param_2[5] * dVar1 + param_2[2];
  local_108 = param_2[4] * dVar1 + param_2[1];
  dVar1 = dVar1 * param_2[3] + *param_2;
  local_120 = param_2[7];
  uVar4 = 0;
  bVar6 = false;
  do {
    dVar10 = param_1[uVar4 + 7];
    dVar2 = *pdVar5;
    dVar8 = pdVar5[-2];
    dVar3 = pdVar5[-1];
    dVar11 = (local_138 + dVar10 * dVar2) * dVar2 +
             (*param_1 + dVar10 * dVar8) * dVar8 + (local_128 + dVar10 * dVar3) * dVar3;
    dVar9 = (dVar8 * local_130 + local_118 * dVar3 + dVar2 * local_110) - dVar11;
    dVar11 = (dVar8 * dVar1 + local_108 * dVar3 + dVar2 * local_100) - dVar11;
    uVar7 = -(ulonglong)(dVar11 <= dVar9);
    if (0.0 <= (double)(~uVar7 & (ulonglong)dVar11 | (ulonglong)dVar9 & uVar7) + local_120) break;
    dVar9 = -dVar8;
    dVar10 = ((*param_1 - dVar10 * dVar8) * dVar9 - (local_128 - dVar10 * dVar3) * dVar3) -
             dVar2 * (local_138 - dVar10 * dVar2);
    dVar8 = ((dVar9 * local_130 - local_118 * dVar3) - dVar2 * local_110) - dVar10;
    dVar10 = ((dVar9 * dVar1 - local_108 * dVar3) - dVar2 * local_100) - dVar10;
    uVar7 = -(ulonglong)(dVar10 <= dVar8);
    if (0.0 <= (double)(~uVar7 & (ulonglong)dVar10 | (ulonglong)dVar8 & uVar7) + local_120) break;
    bVar6 = 1 < uVar4;
    uVar4 = uVar4 + 1;
    pdVar5 = pdVar5 + 3;
  } while (uVar4 != 3);
  if ((DAT_14c707940 ^ (ulonglong)auStack_158 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6822f FUN_146c6822f body=258 status=ok
// SIG undefined FUN_146c6822f(void)

bool FUN_146c6822f(double *param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_2[6];
  dVar3 = ((param_2[2] - param_2[5] * dVar2) * param_1[2] +
          (*param_2 - dVar2 * param_2[3]) * *param_1 +
          (param_2[1] - param_2[4] * dVar2) * param_1[1]) - param_1[3];
  dVar2 = ((param_2[5] * dVar2 + param_2[2]) * param_1[2] +
          (dVar2 * param_2[3] + *param_2) * *param_1 +
          (param_2[4] * dVar2 + param_2[1]) * param_1[1]) - param_1[3];
  uVar1 = -(ulonglong)(dVar2 <= dVar3);
  return 0.0 <= (double)(~uVar1 & (ulonglong)dVar2 | (ulonglong)dVar3 & uVar1) + param_2[7];
}



// FUNCTION 146c68331 FUN_146c68331 body=793 status=ok
// SIG undefined FUN_146c68331(void)

ulonglong FUN_146c68331(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar8 = param_1[3] * param_1[4];
  dVar10 = param_1[4] * param_1[2];
  dVar1 = *param_1 - dVar10;
  dVar9 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((((dVar1 < dVar9) || (dVar2 = param_1[1] - dVar8, dVar2 < dVar6)) || (dVar7 < dVar1)) ||
      (param_2[3] < dVar2)) &&
     (((dVar10 = dVar10 + *param_1, dVar10 < dVar9 || (dVar8 = dVar8 + param_1[1], dVar8 < dVar6))
      || ((dVar7 < dVar10 || (param_2[3] < dVar8)))))) {
    local_80 = (dVar6 + dVar6) * 0.5;
    local_88 = (dVar9 + dVar7) * 0.5;
    dVar6 = dVar6 - dVar6;
    dVar7 = dVar7 - dVar9;
    dVar9 = SQRT(dVar7 * dVar7 + dVar6 * dVar6);
    if (0.0 < dVar9) {
      local_78 = dVar7 * (1.0 / dVar9);
      local_70 = dVar6 * (1.0 / dVar9);
    }
    else {
      local_78 = 0.0;
      local_70 = 0.0;
    }
    local_68 = -(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar9 * 0.5);
    cVar3 = FUN_146c6864c(param_1,&local_88,0x3cb0000000000000,0);
    if (cVar3 == '\0') {
      local_78 = param_2[2];
      local_80 = (param_2[3] + param_2[1]) * 0.5;
      local_88 = (local_78 + local_78) * 0.5;
      local_70 = param_2[3] - param_2[1];
      local_78 = local_78 - local_78;
      dVar9 = SQRT(local_78 * local_78 + local_70 * local_70);
      if (0.0 < dVar9) {
        local_78 = local_78 * (1.0 / dVar9);
        local_70 = local_70 * (1.0 / dVar9);
      }
      else {
        local_78 = 0.0;
        local_70 = 0.0;
      }
      local_68 = -(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar9 * 0.5);
      cVar3 = FUN_146c6864c(param_1,&local_88,0x3cb0000000000000,0);
      if (cVar3 == '\0') {
        local_70 = param_2[3];
        local_80 = (local_70 + local_70) * 0.5;
        local_88 = (param_2[2] + *param_2) * 0.5;
        local_70 = local_70 - local_70;
        local_78 = param_2[2] - *param_2;
        dVar9 = SQRT(local_78 * local_78 + local_70 * local_70);
        if (0.0 < dVar9) {
          local_78 = local_78 * (1.0 / dVar9);
          local_70 = local_70 * (1.0 / dVar9);
        }
        else {
          local_78 = 0.0;
          local_70 = 0.0;
        }
        local_68 = -(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar9 * 0.5);
        uVar4 = FUN_146c6864c(param_1,&local_88,0x3cb0000000000000,0);
        uVar5 = (ulonglong)uVar4;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6864c FUN_146c6864c body=838 status=ok
// SIG undefined FUN_146c6864c(void)

ulonglong FUN_146c6864c(double *param_1,double *param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  bool bVar7;
  ulonglong uVar8;
  double dVar9;
  double extraout_XMM0_Qa;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar9 = param_1[4];
  dVar1 = param_2[4];
  if ((((dVar9 != 0.0) || (NAN(dVar9))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    if ((dVar9 == 0.0) != (dVar1 == 0.0)) {
      pdVar6 = param_1;
      if ((dVar9 == 0.0) && (!NAN(dVar9))) {
        pdVar6 = param_2;
        param_2 = param_1;
      }
      param_1 = (double *)FUN_146c7f000(pdVar6,param_2,local_98);
      dVar9 = extraout_XMM0_Qa;
      goto LAB_146c686ef;
    }
    dVar12 = param_2[1] - param_1[1];
    dVar10 = *param_2 - *param_1;
    dVar11 = param_1[2];
    dVar2 = param_1[3];
    dVar3 = param_2[3];
    dVar4 = param_2[2];
    dVar13 = dVar11 * dVar3 - dVar4 * dVar2;
    uVar8 = -(ulonglong)(-dVar13 <= dVar13);
    if ((double)(~uVar8 & (ulonglong)-dVar13 | uVar8 & (ulonglong)dVar13) <= param_3) {
      dVar13 = SQRT(dVar10 * dVar10 + dVar12 * dVar12);
      if (0.0 < dVar13) {
        dVar5 = dVar10 * (1.0 / dVar13);
      }
      else {
        dVar5 = 0.0;
      }
      dVar3 = dVar5 * dVar3 -
              dVar4 * (double)(-(ulonglong)(0.0 < dVar13) & (ulonglong)((1.0 / dVar13) * dVar12));
      uVar8 = -(ulonglong)(-dVar3 <= dVar3);
      if ((double)(~uVar8 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar8) <= param_3) {
        dVar11 = dVar11 * dVar10 + dVar12 * dVar2;
        uVar8 = (ulonglong)-(uint)(dVar11 - dVar1 <= dVar9 && -dVar9 <= dVar11 + dVar1);
        goto LAB_146c686fa;
      }
LAB_146c6892b:
      uVar8 = 0;
      goto LAB_146c686fa;
    }
    dVar3 = (dVar3 * dVar10 - dVar4 * dVar12) * (1.0 / dVar13);
    uVar8 = -(ulonglong)(-dVar3 <= dVar3);
    if (dVar9 + param_4 < (double)(~uVar8 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar8))
    goto LAB_146c6892b;
    dVar9 = (dVar10 * dVar2 + dVar11 * -dVar12) * (1.0 / dVar13);
    uVar8 = -(ulonglong)(-dVar9 <= dVar9);
    bVar7 = dVar1 + param_4 < (double)(~uVar8 & (ulonglong)-dVar9 | (ulonglong)dVar9 & uVar8);
  }
  else {
    dVar9 = (*param_2 - *param_1) * (*param_2 - *param_1) +
            (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]);
LAB_146c686ef:
    bVar7 = param_4 * param_4 < dVar9;
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),!bVar7);
LAB_146c686fa:
  if ((local_90 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffffffffff01;
}



// FUNCTION 146c68994 FUN_146c68994 body=70 status=ok
// SIG undefined FUN_146c68994(void)

ulonglong FUN_146c68994(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (1 < (longlong)*(int *)(param_1 + 0x10)) {
    piVar3 = (int *)(*(longlong *)(param_1 + 8) + 0x50);
    uVar1 = 0;
    uVar4 = 1;
    do {
      uVar2 = uVar4 & 0xffffffff;
      if (*piVar3 <= *(int *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)(int)uVar1 * 0x40)) {
        uVar2 = (ulonglong)uVar1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0x10;
      uVar1 = (uint)uVar2;
    } while ((longlong)*(int *)(param_1 + 0x10) != uVar4);
  }
  return uVar2;
}



// FUNCTION 146c689da FUN_146c689da body=291 status=ok
// SIG undefined FUN_146c689da(void)

ulonglong FUN_146c689da(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if ((longlong)(int)param_1[2] < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    dVar13 = 0.0;
    uVar5 = 0xffffffff;
    uVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(param_1[1] + 0x10 + uVar7 * 0x40);
      dVar14 = 0.0;
      if (0 < lVar8) {
        lVar3 = *(longlong *)(param_1[1] + 8 + uVar7 * 0x40);
        lVar6 = 1;
        do {
          lVar10 = 0;
          if (lVar6 != lVar8) {
            lVar10 = lVar6;
          }
          uVar1 = *(uint *)(lVar3 + lVar10 * 4);
          uVar11 = (ulonglong)uVar1 & 0x1ff;
          uVar2 = *(uint *)(lVar3 + -4 + lVar6 * 4);
          lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
          lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar9 = (ulonglong)uVar2 & 0x1ff;
          dVar15 = *(double *)(lVar10 + uVar11 * 0x18) - *(double *)(lVar4 + uVar9 * 0x18);
          dVar16 = *(double *)(lVar10 + 8 + uVar11 * 0x18) - *(double *)(lVar4 + 8 + uVar9 * 0x18);
          dVar17 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18) -
                   *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
          dVar14 = dVar14 + SQRT(dVar17 * dVar17 + dVar15 * dVar15 + dVar16 * dVar16);
          bVar12 = lVar6 != lVar8;
          lVar6 = lVar6 + 1;
        } while (bVar12);
      }
      if (dVar13 < dVar14) {
        uVar5 = uVar7 & 0xffffffff;
        dVar13 = dVar14;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != (longlong)(int)param_1[2]);
  }
  return uVar5;
}



// FUNCTION 146c68afe FUN_146c68afe body=78 status=ok
// SIG undefined FUN_146c68afe(void)

ulonglong FUN_146c68afe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0x10)) {
    uVar1 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar1 * 0x40);
      if (lVar3 != 0) {
        lVar2 = 0;
        do {
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18 + uVar1 * 0x40) + lVar2) ==
              param_2) {
            return uVar1 & 0xffffffff;
          }
          lVar2 = lVar2 + 4;
        } while (lVar3 * 4 != lVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != (longlong)*(int *)(param_1 + 0x10));
  }
  return 0xffffffff;
}



// FUNCTION 146c68b4c FUN_146c68b4c body=2760 status=ok
// SIG undefined FUN_146c68b4c(void)

ulonglong FUN_146c68b4c(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  uint **ppuVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 unaff_R13;
  undefined7 uVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  longlong *local_140;
  uint *local_130;
  uint local_124;
  longlong *local_120;
  longlong *local_118;
  uint local_10c;
  longlong *local_108;
  longlong *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar7 = *(int *)((longlong)param_1 + 0x14);
  FUN_146be9485(param_1[1],(int)param_1[2]);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
    FUN_146c7f0ca(param_1 + 1,0);
  }
  plVar23 = param_1 + 3;
  iVar7 = *(int *)((longlong)param_1 + 0x24);
  FUN_146c7d72c(param_1[3],(int)param_1[4]);
  *(undefined4 *)(param_1 + 4) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
    FUN_146c7f12a(plVar23,0);
  }
  *(undefined2 *)((longlong)param_1 + 0x29) = 0;
  cVar4 = FUN_146c047ec(*param_1);
  uVar22 = (undefined7)((ulonglong)unaff_R13 >> 8);
  puVar11 = (uint *)CONCAT71(uVar22,1);
  if (cVar4 == '\0') {
    uVar16 = *(int *)(*param_1 + 0x1d0) * 0x200 + *(int *)(*param_1 + 0x1d4);
    local_78[0] = 0;
    local_78[1] = 0;
    local_e8 = local_e8 & 0xffffffffffffff00;
    FUN_14475e60e(local_78,&local_e8,uVar16);
    local_88 = (uint *)0x0;
    uStack_80 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_14481578e(&local_b8,0x20);
    if (0 < (int)uVar16) {
      local_100 = param_1 + 8;
      plVar13 = param_1 + 0xc;
      uVar19 = (ulonglong)uVar16;
      uVar15 = 0;
      puVar11 = (uint *)0x0;
      local_118 = param_1 + 1;
LAB_146c68ca3:
      lVar21 = *param_1;
      if ((longlong)uVar15 < (longlong)(*(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))
         ) {
        uVar16 = (uint)uVar15;
        uVar14 = uVar15 >> 9 & 0x7fffff;
        if ((((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar21 + 0x1d8) + uVar14 * 8) +
                                 (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe) &&
            (*(char *)(local_78[0] + uVar15) == '\0')) &&
           (*(int *)(*(longlong *)(*(longlong *)(lVar21 + 0x1c0) + uVar14 * 8) + 0xc +
                    (ulonglong)((uVar16 & 0x1ff) << 4)) == -1)) {
          pcVar2 = (code *)*local_100;
          if (pcVar2 == (code *)0x0) {
LAB_146c68d7f:
            uVar14 = uStack_80;
            *(undefined1 *)(local_78[0] + uVar15) = 1;
            lVar21 = (longlong)(int)(uint)uStack_80;
            uVar6 = (uint)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
            local_f0 = uVar19;
            if (uStack_80._4_4_ < uVar6) {
              FUN_1446f48e2(&local_88,uVar14 & 0xffffffff);
            }
            local_88[lVar21] = uVar16;
            uVar19 = 0;
            uVar14 = uVar15 & 0xffffffff;
            local_130 = puVar11;
            local_120 = plVar13;
            local_108 = plVar23;
            local_f8 = uVar15;
LAB_146c68dda:
            local_124 = (uint)uVar19;
            do {
              FUN_146c13626(*param_1,&local_e8,uVar14);
              uVar3 = uStack_90;
              uVar16 = (uint)local_e8;
              uVar6 = (uint)local_e8;
              if ((uVar19 & 1) == 0) {
                uVar6 = local_e8._4_4_;
                lVar21 = (longlong)(int)uStack_90;
                uVar12 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar12);
                if (uStack_90._4_4_ < uVar12) {
                  FUN_1446f48e2(&local_98,uVar3 & 0xffffffff);
                }
                local_98[lVar21] = uVar16;
              }
              local_bc = 0xffffffff;
              local_c0 = 1;
              iVar7 = FUN_146c12992(*param_1,uVar6,&local_bc,&local_c0);
              plVar23 = local_120;
              pcVar2 = (code *)param_1[8];
              if (pcVar2 == (code *)0x0) {
LAB_146c68fb2:
                if (iVar7 < 2) goto LAB_146c69149;
                if (iVar7 != 2) goto LAB_146c68fd5;
                uVar16 = local_bc;
                if (local_bc == (uint)uVar14) {
                  uVar16 = local_c0;
                }
              }
              else {
                if (iVar7 < 3) {
                  local_64 = local_bc;
                  plVar13 = (longlong *)param_1[10];
                  if ((longlong *)param_1[10] == (longlong *)0x0) {
                    plVar13 = local_120;
                  }
                  uVar10 = (**(code **)(*plVar13 + 8))();
                  uVar16 = (*pcVar2)(uVar10,&local_64);
                  local_64 = local_c0;
                  pcVar2 = (code *)param_1[8];
                  plVar13 = (longlong *)param_1[10];
                  if ((longlong *)param_1[10] == (longlong *)0x0) {
                    plVar13 = plVar23;
                  }
                  uVar19 = (ulonglong)local_124;
                  uVar10 = (**(code **)(*plVar13 + 8))();
                  uVar15 = local_f8;
                  bVar5 = (*pcVar2)(uVar10);
                  iVar7 = iVar7 + (uVar16 & 0xff) + (uint)bVar5 + -2;
                  goto LAB_146c68fb2;
                }
                bVar24 = (longlong)uStack_b0 < 0;
                uStack_b0 = uStack_b0 & 0xffffffff00000000;
                if (bVar24) {
                  FUN_14481578e(&local_b8,0);
                }
                uVar16 = FUN_146c12af6(*param_1);
                plVar23 = local_120;
                if (uVar16 == 0xffffffff) {
                  uVar16 = (uint)uStack_b0;
                }
                if (0 < (int)uVar16) {
                  uVar15 = 0;
                  local_10c = (uint)uVar14;
                  do {
                    local_64 = *(uint *)(local_b8 + uVar15 * 4);
                    pcVar2 = (code *)param_1[8];
                    plVar13 = (longlong *)param_1[10];
                    if ((longlong *)param_1[10] == (longlong *)0x0) {
                      plVar13 = plVar23;
                    }
                    uVar10 = (**(code **)(*plVar13 + 8))();
                    (*pcVar2)(uVar10);
                    uVar15 = uVar15 + 1;
                  } while (uVar16 != uVar15);
                  uVar19 = (ulonglong)local_124;
                  uVar14 = (ulonglong)local_10c;
                  uVar15 = local_f8;
                  goto LAB_146c68fb2;
                }
LAB_146c68fd5:
                uVar16 = 0xfffffffe;
                if (uVar6 != *local_98) {
                  bVar24 = (longlong)uStack_b0 < 0;
                  uStack_b0 = uStack_b0 & 0xffffffff00000000;
                  if (bVar24) {
                    FUN_14481578e(&local_b8,0);
                  }
                  uVar8 = FUN_146c12af6(*param_1,uVar6,&local_b8);
                  if (param_1[8] != 0) {
                    uVar8 = FUN_146c69615(&local_b8,local_100,uVar8);
                  }
                  local_140 = local_78;
                  local_148 = (undefined8 *)CONCAT44(local_148._4_4_,uVar8);
                  uVar16 = FUN_146c696ca(param_1,uVar14,uVar6,&local_b8);
                  uVar19 = (ulonglong)local_124;
                  if (uVar16 == 0xffffffff) {
                    puVar11 = local_130;
                    if (((int)param_1[6] == 0) || (*(int *)((longlong)param_1 + 0x2c) == 1))
                    goto LAB_146c695fd;
                    uVar16 = local_124 & 0xff;
                    if ((local_124 & 1) == 0) {
                      uVar16 = 1;
                    }
                    uVar19 = (ulonglong)uVar16;
                    goto LAB_146c691c2;
                  }
                }
                uVar14 = uStack_a0;
                lVar21 = (longlong)(int)uStack_a0;
                if (lVar21 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(uint *)(local_a8 + lVar20) == uVar6) goto LAB_146c6904a;
                    lVar20 = lVar20 + 4;
                  } while (lVar21 * 4 - lVar20 != 0);
                }
                uVar12 = (int)uStack_a0 + 1;
                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar12);
                if (uStack_a0._4_4_ < uVar12) {
                  FUN_1446f48e2(&local_a8,uVar14 & 0xffffffff);
                }
                *(uint *)(local_a8 + lVar21 * 4) = uVar6;
              }
LAB_146c6904a:
              uVar14 = uStack_80;
              if ((uVar16 == 0xfffffffe) || (uVar15 == uVar16)) goto LAB_146c691c2;
              if (*(char *)(local_78[0] + (int)uVar16) == '\x01') {
                puVar11 = local_130;
                if (((int)param_1[6] == 0) || (uVar19 = 1, *(int *)((longlong)param_1 + 0x2c) == 1))
                goto LAB_146c695fd;
                goto LAB_146c691c2;
              }
              lVar21 = (longlong)(int)(uint)uStack_80;
              uVar6 = (uint)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
              if (uStack_80._4_4_ < uVar6) {
                FUN_1446f48e2(&local_88,uVar14 & 0xffffffff);
              }
              local_88[lVar21] = uVar16;
              *(undefined1 *)(local_78[0] + (int)uVar16) = 1;
              uVar14 = (ulonglong)uVar16;
            } while( true );
          }
          local_e8 = CONCAT44(local_e8._4_4_,uVar16);
          plVar17 = (longlong *)param_1[10];
          if ((longlong *)param_1[10] == (longlong *)0x0) {
            plVar17 = plVar13;
          }
          uVar10 = (**(code **)(*plVar17 + 8))();
          cVar4 = (*pcVar2)(uVar10,&local_e8);
          if (cVar4 != '\0') goto LAB_146c68d7f;
          *(undefined1 *)(local_78[0] + uVar15) = 1;
        }
      }
      goto LAB_146c68d0c;
    }
    puVar11 = (uint *)CONCAT71(uVar22,1);
LAB_146c693da:
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar11 & 0xffffff01;
LAB_146c69149:
  if (*(int *)((longlong)param_1 + 0x2c) == 1) {
    *(undefined1 *)((longlong)param_1 + 0x29) = 1;
    puVar11 = local_130;
    goto LAB_146c695fd;
  }
  if ((uVar19 & 1) != 0) goto LAB_146c691c2;
  uVar14 = (ulonglong)*local_88;
  lVar21 = (longlong)(int)(uint)uStack_80;
  if (1 < lVar21) {
    lVar20 = 0;
    puVar11 = local_88;
    do {
      uVar16 = *puVar11;
      *puVar11 = local_88[lVar21 + lVar20 + -1];
      local_88[lVar21 + lVar20 + -1] = uVar16;
      lVar20 = lVar20 + -1;
      puVar11 = puVar11 + 1;
    } while (-lVar20 != (ulonglong)((uint)uStack_80 >> 1));
  }
  uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
  goto LAB_146c68dda;
LAB_146c691c2:
  plVar23 = local_108;
  plVar13 = local_120;
  puVar11 = local_130;
  if ((uVar19 & 1) == 0) {
    if ((int)uStack_a0 < 1) {
      iVar7 = (int)param_1[2];
      *(uint *)(param_1 + 2) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14) < iVar7 + 1U) {
        FUN_146c7f410(local_118,iVar7);
      }
      puVar9 = local_98;
      lVar21 = param_1[1];
      lVar20 = (longlong)iVar7 * 0x40;
      puVar1 = (undefined8 *)(lVar21 + 0x29 + lVar20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar21 + lVar20) = 0;
      ((undefined8 *)(lVar21 + lVar20))[1] = 0;
      lVar21 = param_1[1] + lVar20;
      plVar17 = (longlong *)(lVar20 + param_1[1]);
      ppuVar18 = (uint **)(plVar17 + 1);
      *plVar17 = *param_1;
      if (ppuVar18 != &local_98) {
        iVar7 = (int)uStack_90;
        lVar20 = (longlong)(int)uStack_90;
        *(int *)(lVar21 + 0x10) = (int)uStack_90;
        puVar11 = puVar9;
        if ((int)uStack_90 == 0 && *(int *)(lVar21 + 0x14) == 0) {
          *(undefined4 *)(lVar21 + 0x14) = 0;
        }
        else {
          FUN_144a06ca8(ppuVar18,uStack_90 & 0xffffffff);
          if (iVar7 != 0) {
            memcpy(*ppuVar18,puVar9,lVar20 << 2);
          }
        }
      }
      puVar9 = local_88;
      ppuVar18 = (uint **)(lVar21 + 0x18);
      if (ppuVar18 != &local_88) {
        iVar7 = (uint)uStack_80;
        lVar20 = (longlong)(int)(uint)uStack_80;
        *(uint *)(lVar21 + 0x20) = (uint)uStack_80;
        puVar11 = puVar9;
        if ((uint)uStack_80 == 0 && *(int *)(lVar21 + 0x24) == 0) {
          *(undefined4 *)(lVar21 + 0x24) = 0;
        }
        else {
          FUN_144a06ca8(ppuVar18,uStack_80 & 0xffffffff);
          if (iVar7 != 0) {
            memcpy(*ppuVar18,puVar9,lVar20 << 2);
          }
        }
      }
    }
    else {
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_148 = &local_e8;
      cVar4 = FUN_146c69936(param_1,&local_98,&local_88,&local_a8);
      if (cVar4 == '\0') {
        if ((int)param_1[6] == 0) {
          FUN_146c69f1c(&local_e8);
LAB_146c695fd:
          *(undefined1 *)(param_1 + 5) = 1;
          goto LAB_146c693da;
        }
        if (0 < (longlong)(int)uStack_d0) {
          *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
          lVar20 = (longlong)(int)uStack_d0 << 6;
          lVar21 = local_d8;
          do {
            iVar7 = (int)param_1[4];
            *(uint *)(param_1 + 4) = iVar7 + 1U;
            if (*(uint *)((longlong)param_1 + 0x24) < iVar7 + 1U) {
              FUN_146c7f18a(plVar23,iVar7);
            }
            FUN_146c7f210((longlong)iVar7 * 0x40 + *plVar23,lVar21);
            lVar21 = lVar21 + 0x40;
            lVar20 = lVar20 + -0x40;
          } while (lVar20 != 0);
        }
      }
      else if ((longlong)(int)uStack_e0 != 0) {
        lVar21 = (longlong)(int)uStack_e0 << 6;
        uVar19 = local_e8;
        do {
          iVar7 = (int)param_1[2];
          *(uint *)(param_1 + 2) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0x14) < iVar7 + 1U) {
            FUN_146c7f410(local_118,iVar7);
          }
          FUN_146c7f310((longlong)iVar7 * 0x40 + *local_118,uVar19);
          uVar19 = uVar19 + 0x40;
          lVar21 = lVar21 + -0x40;
        } while (lVar21 != 0);
      }
      FUN_146c69f1c(&local_e8);
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x29) = 1;
    if (*(int *)((longlong)param_1 + 0x2c) == 2) {
      lVar21 = (longlong)(int)(uint)uStack_80;
      if (1 < lVar21) {
        lVar20 = 0;
        puVar9 = local_88;
        do {
          uVar16 = *puVar9;
          *puVar9 = local_88[lVar21 + lVar20 + -1];
          local_88[lVar21 + lVar20 + -1] = uVar16;
          lVar20 = lVar20 + -1;
          puVar9 = puVar9 + 1;
        } while (-(ulonglong)((uint)uStack_80 >> 1) != lVar20);
      }
      iVar7 = (int)param_1[4];
      *(uint *)(param_1 + 4) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar7 + 1U) {
        FUN_146c7f18a(local_108,iVar7);
      }
      lVar21 = param_1[3];
      lVar20 = (longlong)iVar7 * 0x40;
      puVar1 = (undefined8 *)(lVar21 + 0x29 + lVar20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar21 + lVar20) = 0;
      ((undefined8 *)(lVar21 + lVar20))[1] = 0;
      lVar21 = param_1[3];
      *(longlong *)(lVar21 + lVar20) = *param_1;
      FUN_146c5e334(lVar21 + lVar20,&local_88);
    }
  }
  bVar24 = (longlong)uStack_80 < 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (bVar24) {
    FUN_14481578e(&local_88,0);
  }
  uVar19 = local_f0;
  bVar24 = (longlong)uStack_90 < 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if (bVar24) {
    FUN_14481578e(&local_98,0);
  }
  bVar24 = (longlong)uStack_a0 < 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if (bVar24) {
    FUN_14481578e(&local_a8,0);
  }
LAB_146c68d0c:
  uVar15 = uVar15 + 1;
  puVar11 = (uint *)CONCAT71((int7)((ulonglong)puVar11 >> 8),uVar19 <= uVar15);
  if (uVar15 == uVar19) goto LAB_146c693da;
  goto LAB_146c68ca3;
}



// FUNCTION 146c69615 FUN_146c69615 body=180 status=ok
// SIG undefined FUN_146c69615(void)

int FUN_146c69615(longlong *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_1 + 1);
  }
  if ((int)param_3 < 1) {
    iVar6 = 0;
  }
  else {
    uVar7 = 0;
    iVar6 = 0;
    do {
      local_4c = *(undefined4 *)(*param_1 + uVar7 * 4);
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_4c);
      if (cVar2 != '\0') {
        lVar5 = (longlong)iVar6;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*param_1 + lVar5 * 4) = *(undefined4 *)(*param_1 + uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
    } while (param_3 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c696ca FUN_146c696ca body=619 status=ok
// SIG undefined FUN_146c696ca(void)

int FUN_146c696ca(longlong *param_1,uint param_2,ulonglong param_3,longlong *param_4,uint param_5,
                 longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_108 [36];
  int local_e4;
  longlong local_e0;
  ulonglong local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  uint local_b8;
  uint local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146c69f62(param_1,local_98);
  uVar7 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)((param_2 & 0x1ff) << 4));
  uVar5 = (uint)param_3;
  uVar4 = uVar7 >> 0x20;
  if ((uint)uVar7 != uVar5) {
    uVar4 = uVar7;
  }
  local_d8 = param_3 >> 9 & 0x7fffff;
  lVar1 = *(longlong *)(*param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + local_d8 * 8);
  uVar6 = (ulonglong)(uVar5 & 0x1ff);
  local_e0 = uVar6 * 3;
  lVar1 = *(longlong *)(lVar1 + ((uVar4 & 0xffffffff) >> 9) * 8);
  uVar7 = (ulonglong)((uint)uVar4 & 0x1ff);
  local_a0 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18) - *(double *)(lVar1 + 0x10 + uVar7 * 0x18);
  local_a8 = *(double *)(lVar2 + 8 + uVar6 * 0x18) - *(double *)(lVar1 + 8 + uVar7 * 0x18);
  local_b0 = *(double *)(lVar2 + uVar6 * 0x18) - *(double *)(lVar1 + uVar7 * 0x18);
  if ((int)param_5 < 1) {
    local_e4 = -1;
  }
  else {
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
    local_e4 = -1;
    uVar7 = 0;
    do {
      iVar3 = *(int *)(*param_4 + uVar7 * 4);
      if ((*(char *)(*param_6 + (longlong)iVar3) == '\0') &&
         (FUN_146c13626(*param_1,&local_b8,iVar3), local_b8 == uVar5)) {
        lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(local_b4 >> 9) * 8);
        uVar4 = (ulonglong)(local_b4 & 0x1ff);
        lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + local_d8 * 8);
        local_c0 = *(double *)(lVar1 + 0x10 + uVar4 * 0x18) -
                   *(double *)(lVar2 + 0x10 + local_e0 * 8);
        local_c8 = *(double *)(lVar1 + 8 + uVar4 * 0x18) - *(double *)(lVar2 + 8 + local_e0 * 8);
        local_d0 = *(double *)(lVar1 + uVar4 * 0x18) - *(double *)(lVar2 + local_e0 * 8);
        dVar8 = (double)FUN_146c6a283(&local_b0,&local_d0,local_98);
        dVar8 = -dVar8;
        if ((double)CONCAT44(uVar10,uVar9) != 1.79769313486232e+308 &&
            (double)CONCAT44(uVar10,uVar9) <= dVar8) {
          dVar8 = (double)CONCAT44(uVar10,uVar9);
          iVar3 = local_e4;
        }
        uVar9 = SUB84(dVar8,0);
        uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_e4 = iVar3;
      }
      uVar7 = uVar7 + 1;
    } while (param_5 != uVar7);
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_e4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c69936 FUN_146c69936 body=1509 status=ok
// SIG undefined FUN_146c69936(void)

ulonglong FUN_146c69936(undefined8 *param_1,longlong *param_2,undefined8 param_3,uint *param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint local_b4;
  uint *local_b0;
  uint local_a4;
  longlong *local_a0;
  ulonglong local_98;
  void *local_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  void *local_78;
  undefined8 uStack_70;
  uint *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_b0 = param_4;
  if ((longlong)(int)param_4[2] != 0) {
    puVar13 = *(uint **)param_4;
    puVar2 = puVar13 + (int)param_4[2];
    do {
      if (0 < (longlong)(int)param_2[1]) {
        uVar12 = *puVar13;
        unaff_RBP = (ulonglong)uVar12;
        lVar6 = 0;
        uVar10 = 0;
        do {
          uVar10 = uVar10 + (*(uint *)(*param_2 + lVar6 * 4) == uVar12);
          lVar6 = lVar6 + 1;
        } while ((int)param_2[1] != lVar6);
        if (1 < uVar10) {
          lVar6 = (longlong)(int)(uint)uStack_70;
          uVar10 = (uint)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
          if (uStack_70._4_4_ < uVar10) {
            FUN_1446f48e2(&local_78);
          }
          *(uint *)((longlong)local_78 + lVar6 * 4) = uVar12;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
    if ((uint)uStack_70 != 0) {
      if (0 < (int)(uint)uStack_70) {
        plVar1 = param_1 + 0x12;
        local_a0 = param_5 + 2;
        do {
          local_80 = 0xffffffff;
          local_b4 = 0xffffffff;
          local_84 = 0xffffffff;
          local_90 = local_78;
          lVar8 = param_2[1];
          lVar6 = *param_2;
          local_98 = (ulonglong)(uint)uStack_70;
          iVar11 = 0x7fffffff;
          uVar14 = 0;
          local_a4 = (uint)uStack_70;
          do {
            uVar12 = *(uint *)((longlong)local_90 + uVar14 * 4);
            local_c8 = &local_84;
            local_7c = uVar12;
            cVar4 = FUN_146c6a5d2(param_2,&local_78,uVar12,&local_80);
            if (cVar4 != '\0') {
              uVar7 = (ulonglong)local_80;
              iVar5 = 0;
              if (local_80 != local_84) {
                iVar5 = 0;
                do {
                  iVar5 = iVar5 + (uint)(*(int *)(lVar6 + (longlong)(int)uVar7 * 4) != -1);
                  uVar3 = (longlong)((int)uVar7 + 1) % (longlong)(int)lVar8;
                  uVar7 = uVar3 & 0xffffffff;
                } while ((uint)uVar3 != local_84);
              }
              if (iVar5 < iVar11) {
                iVar11 = iVar5;
                local_b4 = uVar12;
              }
            }
            uVar10 = local_b4;
            uVar14 = uVar14 + 1;
          } while (uVar14 != local_98);
          unaff_RBP = (ulonglong)local_b4;
          if (local_b4 == 0xffffffff) {
            if (*(int *)(param_1 + 6) != 0) {
              *(undefined4 *)(param_1 + 0x13) = 0;
              if (*(int *)((longlong)param_1 + 0x9c) < 0) {
                FUN_14481578e(plVar1,0);
              }
              iVar11 = (int)param_2[1];
              if (0 < iVar11) {
                lVar6 = 0;
                do {
                  lVar8 = *param_2;
                  if (*(int *)(lVar8 + lVar6 * 4) != -1) {
                    iVar11 = *(int *)(param_1 + 0x13);
                    *(uint *)(param_1 + 0x13) = iVar11 + 1U;
                    if (*(uint *)((longlong)param_1 + 0x9c) < iVar11 + 1U) {
                      FUN_1446f48e2(plVar1,iVar11);
                    }
                    *(undefined4 *)(*plVar1 + (longlong)iVar11 * 4) =
                         *(undefined4 *)(lVar8 + lVar6 * 4);
                    iVar11 = (int)param_2[1];
                  }
                  lVar6 = lVar6 + 1;
                } while (lVar6 < iVar11);
              }
              iVar11 = (int)param_5[3];
              *(uint *)(param_5 + 3) = iVar11 + 1U;
              if (*(uint *)((longlong)param_5 + 0x1c) < iVar11 + 1U) {
                FUN_146c7f18a(local_a0,iVar11);
              }
              lVar6 = *local_a0;
              lVar8 = (longlong)iVar11 * 0x40;
              puVar9 = (undefined8 *)(lVar6 + 0x29 + lVar8);
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9 = (undefined8 *)(lVar6 + 0x20 + lVar8);
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
              *puVar9 = 0;
              puVar9[1] = 0;
              *(undefined8 *)(lVar6 + lVar8) = 0;
              ((undefined8 *)(lVar6 + lVar8))[1] = 0;
              lVar6 = *local_a0;
              puVar9 = (undefined8 *)(lVar8 + lVar6);
              *puVar9 = *param_1;
              FUN_146c5e488(lVar6 + lVar8,plVar1);
              FUN_14054c6c4(puVar9 + 5);
              *(undefined1 *)(puVar9 + 7) = 1;
              goto LAB_146c69be0;
            }
            if ((void **)(param_1 + 0x10) != &local_78) {
              *(uint *)(param_1 + 0x11) = local_a4;
              FUN_144a06ca8(param_1 + 0x10,local_a4,*(undefined4 *)((longlong)param_1 + 0x8c));
              memcpy((void *)param_1[0x10],local_90,local_98 << 2);
            }
            *(undefined1 *)(param_1 + 5) = 1;
LAB_146c69c5c:
            uVar14 = 0;
            goto LAB_146c69c5e;
          }
          if (uVar12 != local_b4) {
            local_7c = local_b4;
            local_c8 = &local_84;
            FUN_146c6a5d2(param_2,&local_78,local_b4,&local_80);
          }
          iVar11 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar11 + 1U) {
            FUN_146c7f410(param_5,iVar11);
          }
          lVar6 = *param_5;
          lVar8 = (longlong)iVar11 * 0x40;
          puVar9 = (undefined8 *)(lVar6 + 0x29 + lVar8);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x20 + lVar8);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)(lVar6 + lVar8) = 0;
          ((undefined8 *)(lVar6 + lVar8))[1] = 0;
          puVar9 = (undefined8 *)(lVar8 + *param_5);
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_14481578e(plVar1,0);
          }
          FUN_146c6a706(param_2,local_80);
          *puVar9 = *param_1;
          FUN_146c5d50a(puVar9,plVar1);
          FUN_14054c6c4(puVar9 + 5,local_b0);
          *(undefined1 *)(puVar9 + 7) = 1;
          if (0 < (longlong)(int)param_2[1]) {
            lVar6 = 0;
            uVar12 = 0;
            do {
              uVar12 = uVar12 + (*(uint *)(*param_2 + lVar6 * 4) == local_7c);
              lVar6 = lVar6 + 1;
            } while ((int)param_2[1] != lVar6);
            if (1 < uVar12) goto LAB_146c69be0;
          }
          local_68 = &local_7c;
          FUN_144a9d2f8(&local_78);
LAB_146c69be0:
          if (uVar10 == 0xffffffff) goto LAB_146c69c5c;
        } while (0 < (int)(uint)uStack_70);
      }
      uVar14 = CONCAT71((int7)(unaff_RBP >> 8),1);
      if (0 < (longlong)(int)param_2[1]) {
        lVar6 = 0;
        iVar11 = 0;
        do {
          iVar11 = iVar11 + (uint)(*(int *)(*param_2 + lVar6 * 4) != -1);
          lVar6 = lVar6 + 1;
        } while ((int)param_2[1] != lVar6);
        if (iVar11 != 0) {
          iVar11 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar11 + 1U) {
            FUN_146c7f410(param_5,iVar11);
          }
          lVar6 = *param_5;
          lVar8 = (longlong)iVar11 * 0x40;
          puVar9 = (undefined8 *)(lVar6 + 0x29 + lVar8);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x20 + lVar8);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)(lVar6 + lVar8) = 0;
          ((undefined8 *)(lVar6 + lVar8))[1] = 0;
          puVar9 = (undefined8 *)(lVar8 + *param_5);
          plVar1 = param_1 + 0x12;
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_14481578e(plVar1,0);
          }
          iVar11 = (int)param_2[1];
          if (0 < iVar11) {
            lVar6 = 0;
            do {
              lVar8 = *param_2;
              if (*(int *)(lVar8 + lVar6 * 4) != -1) {
                iVar11 = *(int *)(param_1 + 0x13);
                *(uint *)(param_1 + 0x13) = iVar11 + 1U;
                if (*(uint *)((longlong)param_1 + 0x9c) < iVar11 + 1U) {
                  FUN_1446f48e2(plVar1,iVar11);
                }
                *(undefined4 *)(*plVar1 + (longlong)iVar11 * 4) = *(undefined4 *)(lVar8 + lVar6 * 4)
                ;
                iVar11 = (int)param_2[1];
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar11);
          }
          *puVar9 = *param_1;
          FUN_146c5d50a(puVar9,plVar1,0);
          FUN_14054c6c4(puVar9 + 5,local_b0);
          *(undefined1 *)(puVar9 + 7) = 1;
        }
      }
      goto LAB_146c69c5e;
    }
  }
  iVar11 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar11 + 1U) {
    FUN_146c7f410(param_5,iVar11);
  }
  lVar6 = *param_5;
  lVar8 = (longlong)iVar11 * 0x40;
  puVar9 = (undefined8 *)(lVar6 + 0x29 + lVar8);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)(lVar6 + 0x20 + lVar8);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 *)(lVar6 + lVar8) = 0;
  ((undefined8 *)(lVar6 + lVar8))[1] = 0;
  local_c8 = local_b0;
  FUN_146c5d3ce(lVar8 + *param_5,*param_1,param_2,param_3);
  uVar14 = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_146c69c5e:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c69f1c FUN_146c69f1c body=70 status=ok
// SIG undefined FUN_146c69f1c(void)

void FUN_146c69f1c(longlong *param_1)

{
  FUN_146c7d72c(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c69f62 FUN_146c69f62 body=800 status=ok
// SIG undefined FUN_146c69f62(void)

double * FUN_146c69f62(longlong *param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  double dVar9;
  undefined1 auStack_298 [40];
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  int iStack_240;
  int iStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong local_1f8 [2];
  longlong *local_1e8;
  longlong local_1d8 [4];
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  undefined **local_198;
  longlong local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158 [2];
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  code *local_d8;
  undefined8 uStack_d0;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  param_2[2] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  local_190 = *param_1;
  local_1a8 = 0;
  local_198 = &PTR_LAB_149f3aae0;
  _uStack_188 = CONCAT44(uStack_184,param_3);
  local_1b8 = FUN_146be9588;
  local_258 = (code *)(local_190 + 0xb8);
  iStack_250 = param_3;
  FUN_146be94ac(local_118,&local_258,&local_1b8);
  local_168 = 0xffffffffffffffff;
  local_158[0] = 0;
  local_148 = (longlong *)0x0;
  local_1b8 = local_d8;
  uStack_1b0 = uStack_d0;
  iStack_1a0 = iStack_c0;
  iStack_19c = iStack_bc;
  local_198 = (undefined **)local_b8;
  local_180 = local_a0;
  uStack_17c = uStack_9c;
  iStack_178 = iStack_98;
  iStack_174 = iStack_94;
  local_170 = local_90;
  FUN_146be971a(local_158,local_118);
  local_15c = 0;
  FUN_146bfd1f0(&local_1b8);
  local_208 = 0xffffffffffffffff;
  local_1f8[0] = 0;
  local_1e8 = (longlong *)0x0;
  local_258 = (code *)CONCAT44(uStack_ac,local_b0);
  iStack_250 = iStack_a8;
  uStack_24c = uStack_a4;
  local_248 = local_a0;
  uStack_244 = uStack_9c;
  iStack_240 = iStack_98;
  iStack_23c = iStack_94;
  local_238 = local_90;
  local_230 = local_b0;
  uStack_22c = uStack_ac;
  iStack_228 = iStack_a8;
  uStack_224 = uStack_a4;
  local_220 = local_a0;
  uStack_21c = uStack_9c;
  iStack_218 = iStack_98;
  iStack_214 = iStack_94;
  local_210 = local_90;
  FUN_146be971a(local_1f8,local_118);
  local_1fc = 0;
  FUN_146bfd1f0(&local_258);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  while ((((local_1b8 != local_258 || ((int)uStack_1b0 != iStack_250)) || (iStack_1a0 != iStack_240)
          ) || (iStack_19c != iStack_23c))) {
    FUN_146c13dec(*param_1,&local_270,local_160);
    dVar1 = dVar1 + local_270;
    dVar2 = dVar2 + local_268;
    dVar3 = dVar3 + local_260;
    FUN_146bfd1f0(&local_1b8);
  }
  if (local_1f8[0] != 0) {
    plVar8 = local_1e8;
    if (local_1e8 == (longlong *)0x0) {
      plVar8 = local_1d8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_158[0] != 0) {
    plVar8 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar8 = local_138;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_118[0] != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar9 = 1.0 / dVar4;
  if (0.0 < dVar4) {
    dVar1 = dVar1 * dVar9;
    dVar2 = dVar2 * dVar9;
  }
  else {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  *param_2 = dVar1;
  param_2[1] = dVar2;
  param_2[2] = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar3 * dVar9));
  if ((local_80 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6a283 FUN_146c6a283 body=846 status=ok
// SIG undefined FUN_146c6a283(void)

ulonglong FUN_146c6a283(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
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
  ulonglong uVar13;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar5 = param_1[2] * dVar3 + *param_1 * dVar1 + param_1[1] * dVar2;
  dVar11 = param_1[2] - dVar3 * dVar5;
  dVar10 = param_1[1] - dVar2 * dVar5;
  dVar9 = *param_1 - dVar5 * dVar1;
  dVar5 = param_2[2] * dVar3 + *param_2 * dVar1 + dVar2 * param_2[1];
  dVar4 = param_2[2] - dVar3 * dVar5;
  dVar8 = param_2[1] - dVar2 * dVar5;
  dVar5 = *param_2 - dVar5 * dVar1;
  dVar7 = SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
  dVar6 = 1.0 / dVar7;
  if (0.0 < dVar7) {
    dVar9 = dVar9 * dVar6;
    dVar10 = dVar10 * dVar6;
  }
  else {
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  dVar12 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar8 * dVar8);
  dVar7 = (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar11 * dVar6));
  dVar6 = 1.0 / dVar12;
  if (0.0 < dVar12) {
    dVar5 = dVar5 * dVar6;
    dVar8 = dVar8 * dVar6;
  }
  else {
    dVar5 = 0.0;
    dVar8 = 0.0;
  }
  dVar4 = (double)(-(ulonglong)(0.0 < dVar12) & (ulonglong)(dVar4 * dVar6));
  dVar12 = dVar9 * dVar8 - dVar5 * dVar10;
  dVar11 = dVar7 * dVar5 - dVar4 * dVar9;
  dVar6 = dVar10 * dVar4 - dVar8 * dVar7;
  if (1e-08 <= dVar12 * dVar12 + dVar6 * dVar6 + dVar11 * dVar11) {
    dVar8 = dVar7 * dVar4 + dVar9 * dVar5 + dVar10 * dVar8;
    dVar5 = 1.0;
    if (dVar8 <= 1.0) {
      dVar5 = dVar8;
    }
    dVar5 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar5));
    uVar13 = -(ulonglong)(dVar12 * dVar3 + dVar6 * dVar1 + dVar2 * dVar11 < 0.0);
    uVar13 = uVar13 & (ulonglong)-(dVar5 * 57.29577951308232) |
             ~uVar13 & (ulonglong)(dVar5 * 57.29577951308232);
  }
  else {
    uVar13 = -(ulonglong)(dVar7 * dVar4 + dVar9 * dVar5 + dVar10 * dVar8 < 0.0) & 0x4066800000000000
    ;
  }
  return uVar13;
}



// FUNCTION 146c6a5d2 FUN_146c6a5d2 body=308 status=ok
// SIG undefined FUN_146c6a5d2(void)

ulonglong FUN_146c6a5d2(longlong *param_1,longlong *param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = 0xffffffff;
  if (0 < (longlong)(int)param_1[1]) {
    uVar7 = 0;
    do {
      if (*(int *)(*param_1 + uVar7 * 4) == param_3) {
        uVar9 = uVar7 & 0xffffffff;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)(int)param_1[1] != uVar7);
  }
  *param_4 = (uint)uVar9;
  lVar3 = *param_1;
  lVar6 = (longlong)(int)(uint)uVar9;
  do {
    lVar6 = lVar6 + 1;
    if ((int)param_1[1] <= lVar6) {
      uVar8 = 0xffffffff;
      break;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while (*(int *)(lVar3 + lVar6 * 4) != param_3);
  *param_5 = uVar8;
  uVar1 = *param_4;
  uVar9 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  if (uVar1 != uVar8) {
    lVar3 = (longlong)(int)param_2[1] * 4;
    uVar5 = uVar1;
    do {
      iVar2 = *(int *)(*param_1 + (longlong)(int)uVar5 * 4);
      if ((iVar2 != param_3 && iVar2 != -1) && (int)param_2[1] != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*param_2 + lVar6) == iVar2) {
            uVar7 = (ulonglong)uVar8;
            goto LAB_146c6a6b5;
          }
          lVar6 = lVar6 + 4;
        } while (lVar3 - lVar6 != 0);
      }
      uVar5 = (int)(uVar5 + 1) % (int)param_1[1];
    } while (uVar5 != uVar8);
  }
LAB_146c6a646:
  return uVar9 & 0xffffffff;
LAB_146c6a6b5:
  do {
    iVar2 = *(int *)(*param_1 + (longlong)(int)uVar7 * 4);
    if (iVar2 != param_3 && iVar2 != -1) {
      lVar6 = 0;
      do {
        if (*(int *)(*param_2 + lVar6) == iVar2) {
          uVar9 = 0;
          goto LAB_146c6a646;
        }
        lVar6 = lVar6 + 4;
      } while (lVar3 - lVar6 != 0);
    }
    uVar4 = (longlong)((int)uVar7 + 1) % (longlong)(int)param_1[1];
    uVar7 = uVar4 & 0xffffffff;
  } while ((uint)uVar4 != uVar1);
  *param_4 = uVar8;
  *param_5 = uVar1;
  goto LAB_146c6a646;
}



// FUNCTION 146c6a706 FUN_146c6a706 body=158 status=ok
// SIG undefined FUN_146c6a706(void)

ulonglong FUN_146c6a706(longlong *param_1,uint param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == param_3) {
    uVar4 = FUN_144a1a59e(param_4,0,1);
    return uVar4;
  }
  uVar4 = (ulonglong)param_2;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + (uint)(*(int *)(*param_1 + (longlong)(int)param_2 * 4) != -1);
    param_2 = (int)(param_2 + 1) % (int)param_1[1];
  } while (param_2 != param_3);
  FUN_144a1a59e(param_4,iVar6);
  lVar3 = param_1[1];
  iVar6 = 0;
  do {
    iVar5 = (int)uVar4;
    iVar1 = *(int *)(*param_1 + (longlong)iVar5 * 4);
    if (iVar1 != -1) {
      *(int *)(*param_4 + (longlong)iVar6 * 4) = iVar1;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 4) = 0xffffffff;
    }
    uVar2 = (longlong)(iVar5 + 1) % (longlong)(int)lVar3;
    uVar4 = uVar2 & 0xffffffff;
  } while ((uint)uVar2 != param_3);
  return (longlong)(iVar5 + 1) / (longlong)(int)lVar3 & 0xffffffff;
}



// FUNCTION 146c6a7a4 FUN_146c6a7a4 body=255 status=ok
// SIG undefined FUN_146c6a7a4(void)

undefined8 * FUN_146c6a7a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  param_1[4] = 0;
  param_1[5] = 0xffffffff00000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_146be9a22(param_1 + 4,1,0xffffffff);
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff00000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff00000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_146be9a22(param_1 + 0x11,1,0xffffffff);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_146c6a8a4(param_1,param_2,param_3);
  if (param_4 != '\0') {
    FUN_146c6abd6(param_1);
  }
  return param_1;
}



// FUNCTION 146c6a8a4 FUN_146c6a8a4 body=817 status=ok
// SIG undefined FUN_146c6a8a4(void)

void FUN_146c6a8a4(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [39];
  char local_a1;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [4];
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = param_2;
  iVar8 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  plVar7 = param_1 + 4;
  FUN_146be9a22(plVar7,(float)(int)param_3[1] / (float)iVar8 < 0.05 && 31999 < iVar8);
  iVar8 = (int)param_3[1];
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      iVar8 = *(int *)(*param_3 + lVar6 * 4);
      local_78 = CONCAT44(local_78._4_4_,iVar8);
      if (*(int *)((longlong)param_1 + 0x2c) == -1) {
        FUN_1447cbafe(param_1 + 7,&local_64,&local_78,0);
      }
      else if (*(char *)(*plVar7 + (longlong)iVar8) == '\0') {
        *(undefined1 *)(*plVar7 + (longlong)iVar8) = 1;
        *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      }
      lVar6 = lVar6 + 1;
      iVar8 = (int)param_3[1];
    } while (lVar6 < iVar8);
  }
  iVar9 = *(int *)(*param_1 + 0x1d0) * 0x200 + *(int *)(*param_1 + 0x1d4);
  plVar1 = param_1 + 0x11;
  local_98 = plVar7;
  FUN_146be9a22(plVar1,(float)iVar8 / (float)iVar9 < 0.05 && 31999 < iVar9);
  if (0 < (int)param_3[1]) {
    plVar7 = param_1 + 0x14;
    local_88 = param_1 + 0x1b;
    local_80 = param_1 + 0x1e;
    lVar6 = 0;
    local_a0 = plVar7;
    do {
      uVar2 = *(uint *)(*param_3 + lVar6 * 4);
      lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(uVar2 >> 9) * 8);
      uVar11 = (ulonglong)(uVar2 & 0x1ff);
      local_70 = *(undefined4 *)(lVar10 + 8 + uVar11 * 0xc);
      local_78 = *(undefined8 *)(lVar10 + uVar11 * 0xc);
      lVar10 = 0;
      local_90 = lVar6;
      do {
        plVar3 = local_98;
        uVar2 = *(uint *)((longlong)&local_78 + lVar10 * 4);
        lVar6 = (longlong)(int)uVar2;
        if (*(int *)((longlong)param_1 + 0x94) == -1) {
          if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
            plVar5 = (longlong *)param_1[0x1c];
            if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
              plVar5 = local_88;
            }
            iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x1d] - 1U & uVar2) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*plVar7 + (longlong)iVar8 * 0xc) == uVar2) goto LAB_146c6aa45;
                iVar8 = *(int *)(*plVar7 + (longlong)iVar8 * 0xc + 4);
              } while (iVar8 != -1);
            }
          }
LAB_146c6aa65:
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                     8 + (ulonglong)((uVar2 & 0x1ff) << 4)) >> 0x20;
          if (uVar11 != 0xffffffff) {
            local_a1 = FUN_146bc9736(local_98);
            plVar7 = local_a0;
            cVar4 = FUN_146bc9736(plVar3,uVar11);
            if (local_a1 == cVar4) goto LAB_146c6aa45;
          }
          iVar8 = (int)param_1[0x1f];
          *(uint *)(param_1 + 0x1f) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xfc) < iVar8 + 1U) {
            FUN_1446f48e2(local_80,iVar8);
          }
          *(uint *)(param_1[0x1e] + (longlong)iVar8 * 4) = uVar2;
          local_64 = uVar2;
          if (*(int *)((longlong)param_1 + 0x94) == -1) {
            FUN_1447cbafe(plVar7,local_68,&local_64,0);
          }
          else if (*(char *)(*plVar1 + lVar6) == '\0') {
            *(undefined1 *)(*plVar1 + lVar6) = 1;
            *(int *)(param_1 + 0x13) = (int)param_1[0x13] + 1;
          }
        }
        else if (*(char *)(*plVar1 + lVar6) == '\0') goto LAB_146c6aa65;
LAB_146c6aa45:
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      lVar6 = local_90 + 1;
    } while (lVar6 < (int)param_3[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c6abd6 FUN_146c6abd6 body=1869 status=ok
// SIG undefined FUN_146c6abd6(void)

ulonglong FUN_146c6abd6(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int *_Src;
  void *_Src_00;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong *local_180;
  uint *local_178;
  longlong *local_170;
  undefined8 local_168;
  void *pvStack_160;
  ulonglong local_158;
  void *local_150;
  ulonglong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined1 local_cc [4];
  longlong local_c8;
  undefined8 local_c0;
  int iStack_bc;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_146c6b324(param_1 + 1,0,1);
  local_c8 = 0;
  local_c0 = 0xffffffff00000000;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_90 = 0;
  local_88 = 0;
  uStack_84 = 0x80;
  uStack_80 = 0xffffffff;
  uStack_7c = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_146be9a22(&local_c8,1,0xffffffff);
  iVar13 = *(int *)(*param_1 + 0x1d0) * 0x200 + *(int *)(*param_1 + 0x1d4);
  FUN_146be9a22(&local_c8,(float)(int)param_1[0x1f] / (float)iVar13 < 0.05 && 31999 < iVar13);
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  FUN_144a1a59e(&local_118,0x10,1);
  if ((longlong)(int)param_1[0x1f] == 0) {
LAB_146c6acfc:
    uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1[3]) ^ 1;
LAB_146c6ad04:
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_146bc9838(&local_c8);
    if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar8 & 0xffffffff;
  }
  puVar14 = (uint *)param_1[0x1e];
  puVar12 = puVar14 + (int)param_1[0x1f];
  local_178 = puVar12;
  local_170 = param_1 + 1;
LAB_146c6ada4:
  uVar1 = *puVar14;
  cVar4 = FUN_146bc9736(&local_c8,uVar1);
  if ((cVar4 == '\0') && (cVar4 = FUN_146c6b3ac(param_1,uVar1), cVar4 != '\0')) {
    local_168 = CONCAT44(local_168._4_4_,uVar1);
    if (iStack_bc == -1) {
      FUN_1447cbafe(&local_b0,local_cc,&local_168,0);
    }
    else if (*(char *)(local_c8 + (int)uVar1) == '\0') {
      *(undefined1 *)(local_c8 + (int)uVar1) = 1;
      local_b8 = local_b8 + 1;
    }
    uVar8 = uStack_e0;
    lVar10 = (longlong)(int)uStack_e0;
    uVar5 = (int)uStack_e0 + 1;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
    if (uStack_e0._4_4_ < uVar5) {
      FUN_1446f48e2(&local_e8,uVar8 & 0xffffffff);
    }
    *(uint *)((longlong)local_e8 + lVar10 * 4) = uVar1;
    uVar5 = uVar1;
    iVar13 = -1;
    do {
      local_11c = 0xffffffff;
      local_120 = 0xffffffff;
      FUN_146c6b428(param_1,uVar5,&local_11c,&local_120);
      if (iVar13 == -1) {
        FUN_146c6b53c(param_1,&local_168,uVar5,local_11c);
        iVar9 = local_168._4_4_;
        iVar13 = (int)local_168;
      }
      else {
        uVar2 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) +
                 (ulonglong)((uVar5 & 0x1ff) << 4));
        iVar6 = (int)uVar2;
        iVar9 = (int)((ulonglong)uVar2 >> 0x20);
        if (iVar13 != iVar6) {
          iVar9 = iVar6;
        }
      }
      uVar8 = uStack_f0;
      lVar10 = (longlong)(int)uStack_f0;
      uVar7 = (int)uStack_f0 + 1;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
      if (uStack_f0._4_4_ < uVar7) {
        FUN_1446f48e2(&local_f8,uVar8 & 0xffffffff);
      }
      local_f8[lVar10] = iVar13;
      local_124 = 0xffffffff;
      local_128 = 1;
      iVar13 = FUN_146c6b660(param_1);
      if (iVar13 < 2) {
LAB_146c6b27e:
        *(undefined1 *)(param_1 + 3) = 1;
        uVar8 = 0;
        goto LAB_146c6ad04;
      }
      if (iVar13 == 2) {
        bVar16 = local_124 == uVar5;
        uVar5 = local_124;
        if (bVar16) {
          uVar5 = local_128;
        }
      }
      else {
        uVar5 = 0xfffffffe;
        if (iVar9 != *local_f8) {
          if ((int)uStack_110 <= iVar13) {
            FUN_144a1a59e(&local_118,iVar13,1);
          }
          local_188 = FUN_146c6b782(param_1,iVar9,&local_118);
          local_180 = &local_c8;
          uVar5 = FUN_146c6b886(param_1);
          if (uVar5 == 0xffffffff) goto LAB_146c6b27e;
        }
        uVar8 = uStack_100;
        lVar10 = (longlong)(int)uStack_100;
        if (lVar10 != 0) {
          lVar15 = 0;
          do {
            if (*(int *)(local_108 + lVar15) == iVar9) goto LAB_146c6b004;
            lVar15 = lVar15 + 4;
          } while (lVar10 * 4 - lVar15 != 0);
        }
        uVar7 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar7);
        if (uStack_100._4_4_ < uVar7) {
          FUN_1446f48e2(&local_108,uVar8 & 0xffffffff);
        }
        *(int *)(local_108 + lVar10 * 4) = iVar9;
      }
LAB_146c6b004:
      uVar8 = uStack_e0;
      _Src = local_f8;
      plVar3 = local_170;
      if ((uVar5 == 0xfffffffe) || (uVar5 == uVar1)) goto LAB_146c6b14d;
      lVar10 = (longlong)(int)uStack_e0;
      uVar7 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
      if (uStack_e0._4_4_ < uVar7) {
        FUN_1446f48e2(&local_e8,uVar8 & 0xffffffff);
      }
      *(uint *)((longlong)local_e8 + lVar10 * 4) = uVar5;
      local_168 = CONCAT44(local_168._4_4_,uVar5);
      iVar13 = iVar9;
      if (iStack_bc == -1) {
        FUN_1447cbafe(&local_b0,local_cc,&local_168,0);
      }
      else if (*(char *)(local_c8 + (int)uVar5) == '\0') {
        *(undefined1 *)(local_c8 + (int)uVar5) = 1;
        local_b8 = local_b8 + 1;
      }
    } while( true );
  }
  goto LAB_146c6b1fd;
LAB_146c6b14d:
  if ((int)uStack_100 < 1) {
    local_168 = *param_1;
    pvStack_160 = (void *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = (void *)0x0;
    uStack_148 = 0;
    local_130 = 0;
    lVar10 = (longlong)(int)uStack_f0;
    iVar13 = 0;
    local_158 = uStack_f0 & 0xffffffff;
    if (lVar10 != 0) {
      FUN_144a06ca8(&pvStack_160,uStack_f0 & 0xffffffff,0);
      memcpy(pvStack_160,_Src,lVar10 << 2);
      iVar13 = (int)(uStack_148 >> 0x20);
    }
    _Src_00 = local_e8;
    iVar9 = (int)uStack_e0;
    lVar10 = (longlong)(int)uStack_e0;
    uStack_148 = CONCAT44(uStack_148._4_4_,(int)uStack_e0);
    if ((int)uStack_e0 == 0 && iVar13 == 0) {
      uStack_148 = uStack_e0 & 0xffffffff;
    }
    else {
      FUN_144a06ca8(&local_150,uStack_e0 & 0xffffffff);
      if (iVar9 != 0) {
        memcpy(local_150,_Src_00,lVar10 << 2);
      }
    }
    iVar13 = (int)param_1[2];
    *(uint *)(param_1 + 2) = iVar13 + 1U;
    if (*(uint *)((longlong)param_1 + 0x14) < iVar13 + 1U) {
      FUN_146c7f410(plVar3,iVar13);
    }
    FUN_146c7f310((longlong)iVar13 * 0x40 + *plVar3,&local_168);
    FUN_146bc7c1a(&local_168);
    puVar12 = local_178;
  }
  else {
    local_168 = 0;
    pvStack_160 = (void *)0x0;
    cVar4 = FUN_146c6bb00(param_1,&local_f8,&local_108);
    plVar3 = local_170;
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 3) = 1;
      uVar8 = (ulonglong)pvStack_160 & 0xffffffff;
    }
    else {
      uVar8 = (ulonglong)pvStack_160 & 0xffffffff;
      if (0 < (int)pvStack_160) {
        lVar10 = 0;
        lVar15 = 0;
        do {
          lVar11 = local_168 + lVar10;
          iVar13 = (int)param_1[2];
          *(uint *)(param_1 + 2) = iVar13 + 1U;
          if (*(uint *)((longlong)param_1 + 0x14) < iVar13 + 1U) {
            FUN_146c7f410(plVar3,iVar13);
          }
          FUN_146c7f310((longlong)iVar13 * 0x40 + *plVar3,lVar11);
          lVar15 = lVar15 + 1;
          uVar8 = (ulonglong)(int)pvStack_160;
          lVar10 = lVar10 + 0x40;
        } while (lVar15 < (longlong)uVar8);
      }
    }
    puVar12 = local_178;
    FUN_146be9485(local_168,uVar8);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_144a1a59e(&local_e8,0,1);
  FUN_144a1a59e(&local_f8,0,1);
  FUN_144a1a59e(&local_108,0,1);
LAB_146c6b1fd:
  puVar14 = puVar14 + 1;
  if (puVar14 == puVar12) goto LAB_146c6acfc;
  goto LAB_146c6ada4;
}



// FUNCTION 146c6b324 FUN_146c6b324 body=134 status=ok
// SIG undefined FUN_146c6b324(void)

void FUN_146c6b324(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c7f410(param_1,iVar1);
    }
    FUN_146c7f495((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146c7f4b4(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146c7f514(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c6b3ac FUN_146c6b3ac body=124 status=ok
// SIG undefined FUN_146c6b3ac(void)

undefined8 FUN_146c6b3ac(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x94) == -1) {
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      lVar2 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar2 = *(longlong *)(param_1 + 0xe0);
      }
      iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & param_2) * 4);
      if (iVar3 != -1) {
        do {
          bVar4 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0xc) == param_2;
          uVar1 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
          if (bVar4) {
            return uVar1;
          }
          iVar3 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0xc + 4);
        } while (iVar3 != -1);
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x88) >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)param_2));
  }
  return uVar1;
}



// FUNCTION 146c6b428 FUN_146c6b428 body=276 status=ok
// SIG undefined FUN_146c6b428(void)

void FUN_146c6b428(longlong *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (*(int *)((longlong)param_1 + 0x94) == -1) {
    if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
      plVar5 = param_1 + 0x1b;
      if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x1c];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x1d] - 1U & param_2) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(param_1[0x14] + (longlong)iVar6 * 0xc) == param_2) goto LAB_146c6b456;
          iVar6 = *(int *)(param_1[0x14] + (longlong)iVar6 * 0xc + 4);
        } while (iVar6 != -1);
      }
    }
  }
  else if (*(char *)(param_1[0x11] + (longlong)(int)param_2) != '\0') {
LAB_146c6b456:
    uVar4 = 0xffffffff;
    *param_4 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar1 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 8 +
             (ulonglong)((param_2 & 0x1ff) << 4));
    uVar7 = uVar1 >> 0x20;
    if (uVar7 == 0xffffffff) {
      *param_3 = (int)uVar1;
    }
    else {
      cVar2 = FUN_146bc9736(param_1 + 4,uVar1 & 0xffffffff);
      cVar3 = FUN_146bc9736(param_1 + 4,uVar7);
      if (cVar2 == cVar3) {
        return;
      }
      uVar4 = (int)(uVar1 >> 0x20);
      if (cVar2 != '\0') {
        uVar4 = (int)uVar1;
      }
      *param_3 = uVar4;
      if (cVar2 == '\0') {
        uVar7 = uVar1;
      }
      uVar4 = (undefined4)uVar7;
    }
    *param_4 = uVar4;
  }
  return;
}



// FUNCTION 146c6b53c FUN_146c6b53c body=291 status=ok
// SIG undefined FUN_146c6b53c(void)

undefined4 * FUN_146c6b53c(longlong *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)((param_3 & 0x1ff) << 4));
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_4 >> 9) * 8);
  uVar4 = *(undefined8 *)(lVar3 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  local_20 = uVar4;
  uVar4 = local_20;
  local_18 = *(int *)(lVar3 + 8 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  local_20._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  iVar8 = (int)uVar4;
  iVar6 = (int)uVar2;
  iVar5 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar8 == iVar6) {
    if (local_20._4_4_ != iVar5) {
LAB_146c6b606:
      if (local_20._4_4_ == iVar6) {
        uVar9 = 1;
        if (local_18 == iVar5) goto LAB_146c6b5ba;
      }
      else {
        uVar9 = 1;
        if (local_20._4_4_ == iVar5 && local_18 == iVar6) goto LAB_146c6b5ba;
      }
      if (local_18 == iVar6) {
        bVar10 = iVar8 == iVar5;
      }
      else {
        bVar10 = local_18 == iVar5 && iVar8 == iVar6;
      }
      uVar9 = bVar10 - 1 | 2;
      goto LAB_146c6b5ba;
    }
  }
  else if (iVar8 != iVar5 || local_20._4_4_ != iVar6) goto LAB_146c6b606;
  uVar9 = 0;
LAB_146c6b5ba:
  uVar7 = uVar9 - 2;
  if (uVar9 + 1 < 3) {
    uVar7 = uVar9 + 1;
  }
  uVar1 = *(undefined4 *)((longlong)&local_20 + (longlong)(int)uVar7 * 4);
  *param_2 = *(undefined4 *)((longlong)&local_20 + (longlong)(int)uVar9 * 4);
  param_2[1] = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
    local_20 = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146c6b660 FUN_146c6b660 body=289 status=ok
// SIG undefined FUN_146c6b660(void)

int FUN_146c6b660(longlong *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *param_1 + 0xb8;
  iVar4 = 0;
  local_78 = param_4;
  FUN_146be983e(&local_70,lVar7,param_2,0);
  if ((((local_70 != lVar7) || (local_68 != param_2)) || ((int)local_58 != -1)) ||
     (local_58._4_4_ != -1)) {
    iVar4 = 0;
    lVar5 = local_70;
    iVar6 = local_68;
    do {
      uVar1 = local_50;
      cVar2 = FUN_146c6b3ac(param_1,local_50);
      if (cVar2 != '\0') {
        puVar3 = param_3;
        if ((iVar4 == 0) || (puVar3 = local_78, iVar4 == 1)) {
          *puVar3 = uVar1;
        }
        iVar4 = iVar4 + 1;
      }
      if (local_60 == 0) {
        local_64 = 0xffffffff;
        local_58 = 0xffffffffffffffff;
        local_58._4_4_ = -1;
        local_58._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_70);
        lVar5 = local_70;
        iVar6 = local_68;
      }
    } while (((lVar5 != lVar7) || (iVar6 != param_2)) ||
            (((int)local_58 != -1 || (local_58._4_4_ != -1))));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146c6b782 FUN_146c6b782 body=258 status=ok
// SIG undefined FUN_146c6b782(void)

int FUN_146c6b782(longlong *param_1,int param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_1 + 0xb8;
  iVar4 = 0;
  FUN_146be983e(&local_68,lVar5,param_2,0);
  if ((((local_68 != lVar5) || (local_60 != param_2)) || ((int)local_50 != -1)) ||
     (local_50._4_4_ != -1)) {
    iVar4 = 0;
    do {
      uVar1 = local_48;
      cVar2 = FUN_146c6b3ac(param_1,local_48);
      if (cVar2 != '\0') {
        lVar3 = (longlong)iVar4;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*param_3 + lVar3 * 4) = uVar1;
      }
      if (local_58 == 0) {
        local_5c = 0xffffffff;
        local_50 = 0xffffffffffffffff;
        local_50._4_4_ = -1;
        local_50._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_68);
      }
    } while (((local_68 != lVar5) || (local_60 != param_2)) ||
            (((int)local_50 != -1 || (local_50._4_4_ != -1))));
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146c6b886 FUN_146c6b886 body=633 status=ok
// SIG undefined FUN_146c6b886(void)

undefined4
FUN_146c6b886(longlong *param_1,uint param_2,ulonglong param_3,longlong *param_4,uint param_5,
             undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_108 [44];
  undefined4 local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  uint local_c0;
  uint local_bc;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146c6bf9e(param_1,local_98);
  uVar6 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)((param_2 & 0x1ff) << 4));
  uVar7 = (uint)param_3;
  uVar5 = uVar6 >> 0x20;
  if ((uint)uVar6 != uVar7) {
    uVar5 = uVar6;
  }
  uVar9 = param_3 >> 9 & 0x7fffff;
  lVar1 = *(longlong *)(*param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + uVar9 * 8);
  uVar8 = (ulonglong)(uVar7 & 0x1ff);
  lVar1 = *(longlong *)(lVar1 + ((uVar5 & 0xffffffff) >> 9) * 8);
  uVar6 = (ulonglong)((uint)uVar5 & 0x1ff);
  local_a0 = *(double *)(lVar2 + 0x10 + uVar8 * 0x18) - *(double *)(lVar1 + 0x10 + uVar6 * 0x18);
  local_a8 = *(double *)(lVar2 + 8 + uVar8 * 0x18) - *(double *)(lVar1 + 8 + uVar6 * 0x18);
  local_b0 = *(double *)(lVar2 + uVar8 * 0x18) - *(double *)(lVar1 + uVar6 * 0x18);
  if ((int)param_5 < 1) {
    local_dc = 0xffffffff;
  }
  else {
    uVar11 = 0xffffffff;
    uVar12 = 0x7fefffff;
    local_dc = 0xffffffff;
    uVar6 = 0;
    do {
      uVar4 = *(undefined4 *)(*param_4 + uVar6 * 4);
      cVar3 = FUN_146bc9736(param_6,uVar4);
      if (cVar3 == '\0') {
        local_b4 = 0xffffffff;
        FUN_146c6b428(param_1,uVar4,&local_b4,local_b8);
        FUN_146c6b53c(param_1,&local_c0,uVar4,local_b4);
        if (local_c0 == uVar7) {
          lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(local_bc >> 9) * 8);
          uVar5 = (ulonglong)(local_bc & 0x1ff);
          lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + uVar9 * 8);
          local_c8 = *(double *)(lVar1 + 0x10 + uVar5 * 0x18) -
                     *(double *)(lVar2 + 0x10 + uVar8 * 0x18);
          local_d0 = *(double *)(lVar1 + 8 + uVar5 * 0x18) - *(double *)(lVar2 + 8 + uVar8 * 0x18);
          local_d8 = *(double *)(lVar1 + uVar5 * 0x18) - *(double *)(lVar2 + uVar8 * 0x18);
          dVar10 = (double)FUN_146c6a283(&local_b0,&local_d8,local_98);
          dVar10 = -dVar10;
          if ((double)CONCAT44(uVar12,uVar11) != 1.79769313486232e+308 &&
              (double)CONCAT44(uVar12,uVar11) <= dVar10) {
            dVar10 = (double)CONCAT44(uVar12,uVar11);
            uVar4 = local_dc;
          }
          uVar11 = SUB84(dVar10,0);
          uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
          local_dc = uVar4;
        }
      }
      uVar6 = uVar6 + 1;
    } while (param_5 != uVar6);
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_dc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6bb00 FUN_146c6bb00 body=1180 status=ok
// SIG undefined FUN_146c6bb00(void)

undefined4
FUN_146c6bb00(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [40];
  undefined8 *local_140;
  longlong *local_138;
  uint local_130;
  int local_12c;
  uint *local_128;
  undefined8 uStack_120;
  undefined1 local_10c [4];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_128 = (uint *)*param_3;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  uStack_120 = (int *)CONCAT44(uStack_120._4_4_,*(undefined4 *)(param_3 + 1));
  local_140 = param_1;
  local_138 = param_4;
  FUN_146bc855c();
  local_12c = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 1) {
LAB_146c6bd68:
    local_128 = (uint *)0x0;
    uStack_120 = (int *)0x0;
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    else {
      lVar7 = *param_2;
      lVar11 = 0;
      do {
        uVar3 = (ulonglong)uStack_120;
        uVar1 = *(uint *)(lVar7 + lVar11);
        if (-1 < (int)uVar1) {
          lVar12 = (longlong)(int)uStack_120;
          uVar5 = (int)uStack_120 + 1;
          uStack_120 = (int *)CONCAT44(uStack_120._4_4_,uVar5);
          if (uStack_120._4_4_ < uVar5) {
            FUN_1446f48e2(&local_128,uVar3 & 0xffffffff);
          }
          local_128[lVar12] = uVar1;
        }
        plVar2 = local_138;
        lVar11 = lVar11 + 4;
      } while ((longlong)iVar4 * 4 != lVar11);
      uVar8 = CONCAT31((int3)(uVar1 >> 8),2 < (int)uStack_120);
      if (2 < (int)uStack_120) {
        iVar4 = (int)local_138[1];
        *(uint *)(local_138 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)local_138 + 0xc) < iVar4 + 1U) {
          FUN_146c7f410(local_138,iVar4);
        }
        lVar7 = *plVar2;
        lVar11 = (longlong)iVar4 * 0x40;
        puVar9 = (undefined8 *)(lVar7 + 0x29 + lVar11);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = (undefined8 *)(lVar7 + 0x20 + lVar11);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = (undefined8 *)(lVar7 + 0x10 + lVar11);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)(lVar7 + lVar11) = 0;
        ((undefined8 *)(lVar7 + lVar11))[1] = 0;
        lVar7 = *plVar2;
        puVar9 = (undefined8 *)(lVar7 + lVar11);
        *puVar9 = *local_140;
        FUN_146c5d50a(lVar7 + lVar11,&local_128,0);
        FUN_14054c6c4(puVar9 + 5,param_3);
        *(undefined1 *)(puVar9 + 7) = 1;
      }
      if (local_128 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_108);
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_b8);
    if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_146c6bbe8:
  local_128 = &local_130;
  local_130 = *(uint *)(*param_2 + (longlong)local_12c * 4);
  if ((int)uStack_b0 != local_84) {
    puVar6 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar6 = local_80;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & local_130) * 4);
    while (iVar4 != -1) {
      lVar7 = local_b8 + (longlong)iVar4 * 0x10;
      if (*(uint *)(local_b8 + (longlong)iVar4 * 0x10) == local_130) {
        piVar10 = (int *)(lVar7 + 4);
        if (piVar10 != (int *)0x0 && lVar7 != 0) {
          if (-1 < *(int *)(*param_2 + (longlong)*piVar10 * 4)) {
            local_128 = (uint *)0x0;
            uStack_120 = (int *)0x0;
            FUN_146c6a706(param_2,*piVar10,local_12c,&local_128);
            plVar2 = local_138;
            iVar4 = (int)local_138[1];
            *(uint *)(local_138 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)local_138 + 0xc) < iVar4 + 1U) {
              FUN_146c7f410(local_138,iVar4);
            }
            lVar7 = *plVar2;
            lVar11 = (longlong)iVar4 * 0x40;
            puVar9 = (undefined8 *)(lVar7 + 0x29 + lVar11);
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9 = (undefined8 *)(lVar7 + 0x20 + lVar11);
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9 = (undefined8 *)(lVar7 + 0x10 + lVar11);
            *puVar9 = 0;
            puVar9[1] = 0;
            *(undefined8 *)(lVar7 + lVar11) = 0;
            ((undefined8 *)(lVar7 + lVar11))[1] = 0;
            lVar7 = *plVar2;
            puVar9 = (undefined8 *)(lVar11 + lVar7);
            *puVar9 = *local_140;
            FUN_146c5d50a(lVar7 + lVar11,&local_128,0);
            FUN_14054c6c4(puVar9 + 5,param_3);
            *(undefined1 *)(puVar9 + 7) = 1;
            if (local_128 != (uint *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((int)uStack_b0 == local_84) goto LAB_146c6bce9;
          puVar6 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar6 = local_80;
          }
          iVar4 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & local_130) * 4);
          if (iVar4 == -1) goto LAB_146c6bce9;
          goto LAB_146c6bd4d;
        }
        break;
      }
      iVar4 = *(int *)(lVar7 + 8);
    }
  }
  if ((int)uStack_100 != local_d4) {
    puVar6 = local_c8;
    if (local_c8 == (undefined1 *)0x0) {
      puVar6 = local_d0;
    }
    for (iVar4 = *(int *)(puVar6 + (ulonglong)(local_c0 - 1U & local_130) * 4); iVar4 != -1;
        iVar4 = *(int *)(local_108 + (longlong)iVar4 * 0xc + 4)) {
      if (*(uint *)(local_108 + (longlong)iVar4 * 0xc) == local_130) {
        uStack_120 = &local_12c;
        FUN_140263e2a(&local_b8,local_10c,&local_128,0);
        break;
      }
    }
  }
  goto LAB_146c6bc15;
  while (iVar4 = *(int *)(lVar7 + 8), iVar4 != -1) {
LAB_146c6bd4d:
    lVar7 = local_b8 + (longlong)iVar4 * 0x10;
    if (*(uint *)(local_b8 + (longlong)iVar4 * 0x10) == local_130) goto LAB_146c6bceb;
  }
LAB_146c6bce9:
  lVar7 = 0;
LAB_146c6bceb:
  *(int *)(lVar7 + 4) = local_12c;
LAB_146c6bc15:
  local_12c = local_12c + 1;
  iVar4 = (int)param_2[1];
  if (iVar4 <= local_12c) goto LAB_146c6bd68;
  goto LAB_146c6bbe8;
}



// FUNCTION 146c6bf9e FUN_146c6bf9e body=800 status=ok
// SIG undefined FUN_146c6bf9e(void)

double * FUN_146c6bf9e(longlong *param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  double dVar9;
  undefined1 auStack_298 [40];
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  int iStack_240;
  int iStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong local_1f8 [2];
  longlong *local_1e8;
  longlong local_1d8 [4];
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  undefined **local_198;
  longlong local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158 [2];
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  code *local_d8;
  undefined8 uStack_d0;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  param_2[2] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  local_190 = *param_1;
  local_1a8 = 0;
  local_198 = &PTR_LAB_149f3aae0;
  _uStack_188 = CONCAT44(uStack_184,param_3);
  local_1b8 = FUN_146be9588;
  local_258 = (code *)(local_190 + 0xb8);
  iStack_250 = param_3;
  FUN_146be94ac(local_118,&local_258,&local_1b8);
  local_168 = 0xffffffffffffffff;
  local_158[0] = 0;
  local_148 = (longlong *)0x0;
  local_1b8 = local_d8;
  uStack_1b0 = uStack_d0;
  iStack_1a0 = iStack_c0;
  iStack_19c = iStack_bc;
  local_198 = (undefined **)local_b8;
  local_180 = local_a0;
  uStack_17c = uStack_9c;
  iStack_178 = iStack_98;
  iStack_174 = iStack_94;
  local_170 = local_90;
  FUN_146be971a(local_158,local_118);
  local_15c = 0;
  FUN_146bfd1f0(&local_1b8);
  local_208 = 0xffffffffffffffff;
  local_1f8[0] = 0;
  local_1e8 = (longlong *)0x0;
  local_258 = (code *)CONCAT44(uStack_ac,local_b0);
  iStack_250 = iStack_a8;
  uStack_24c = uStack_a4;
  local_248 = local_a0;
  uStack_244 = uStack_9c;
  iStack_240 = iStack_98;
  iStack_23c = iStack_94;
  local_238 = local_90;
  local_230 = local_b0;
  uStack_22c = uStack_ac;
  iStack_228 = iStack_a8;
  uStack_224 = uStack_a4;
  local_220 = local_a0;
  uStack_21c = uStack_9c;
  iStack_218 = iStack_98;
  iStack_214 = iStack_94;
  local_210 = local_90;
  FUN_146be971a(local_1f8,local_118);
  local_1fc = 0;
  FUN_146bfd1f0(&local_258);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  while ((((local_1b8 != local_258 || ((int)uStack_1b0 != iStack_250)) || (iStack_1a0 != iStack_240)
          ) || (iStack_19c != iStack_23c))) {
    FUN_146c13dec(*param_1,&local_270,local_160);
    dVar1 = dVar1 + local_270;
    dVar2 = dVar2 + local_268;
    dVar3 = dVar3 + local_260;
    FUN_146bfd1f0(&local_1b8);
  }
  if (local_1f8[0] != 0) {
    plVar8 = local_1e8;
    if (local_1e8 == (longlong *)0x0) {
      plVar8 = local_1d8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_158[0] != 0) {
    plVar8 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar8 = local_138;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_118[0] != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar9 = 1.0 / dVar4;
  if (0.0 < dVar4) {
    dVar1 = dVar1 * dVar9;
    dVar2 = dVar2 * dVar9;
  }
  else {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  *param_2 = dVar1;
  param_2[1] = dVar2;
  param_2[2] = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar3 * dVar9));
  if ((local_80 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6c2c0 FUN_146c6c2c0 body=510 status=ok
// SIG undefined FUN_146c6c2c0(void)

ulonglong FUN_146c6c2c0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  uint local_84;
  undefined4 local_80;
  uint local_7c [4];
  undefined1 local_6c [4];
  uint local_68;
  int local_64;
  int *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_90 = param_4;
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar5 = 0;
    do {
      local_64 = *(int *)(*(longlong *)(param_2 + 8) + lVar5 * 4);
      FUN_146c6b428(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar5 * 4),&local_68,
                    local_6c);
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(local_68 >> 9) * 8);
      uVar3 = (ulonglong)(local_68 & 0x1ff);
      if (*(int *)(lVar1 + uVar3 * 0xc) == local_64) {
        lVar4 = 0;
      }
      else {
        lVar4 = 1;
        if (*(int *)(lVar1 + uVar3 * 0xc + 4) != local_64) {
          lVar4 = (ulonglong)(*(int *)(lVar1 + 8 + uVar3 * 0xc) == local_64) * 3 + -1;
        }
      }
      uVar7 = local_68 * 3 + 2;
      lVar1 = *(longlong *)(param_3 + 0x78);
      uVar2 = local_68 * 3 + 1;
      local_7c[1] = *(undefined4 *)
                     (*(longlong *)(lVar1 + (ulonglong)(local_68 * 3 >> 9) * 8) +
                     (ulonglong)(local_68 * 3 & 0x1ff) * 4);
      local_7c[2] = *(undefined4 *)
                     (*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
      local_7c[3] = *(undefined4 *)
                     (*(longlong *)(lVar1 + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar2 = local_7c[lVar4 + 1];
      if ((((int)uVar2 < 0) ||
          (*(int *)(param_3 + 8) * 0x200 + *(int *)(param_3 + 0xc) <= (int)uVar2)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8
                                        ) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
        uVar6 = 0;
        break;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)(uVar2 >> 8) * 8);
      uVar3 = (ulonglong)((uVar2 & 0xff) << 3);
      local_80 = *(undefined4 *)(lVar1 + uVar3);
      local_7c[0] = *(uint *)(lVar1 + 4 + uVar3);
      local_60 = &local_64;
      local_58 = &local_84;
      local_84 = uVar2;
      FUN_146c7f5b6(local_90,local_4c,&local_60,0);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0x10));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146c6c4c0 FUN_146c6c4c0 body=330 status=ok
// SIG undefined FUN_146c6c4c0(void)

void FUN_146c6c4c0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      uVar2 = *(uint *)(*local_78 + 4 + (longlong)iStack_5c * 0x18);
      if ((((int)uVar2 < 0) ||
          (*(int *)(param_3 + 8) * 0x200 + *(int *)(param_3 + 0xc) <= (int)uVar2)) ||
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 2) + 1U) < 2)) {
        *(undefined4 *)(*local_78 + (longlong)iStack_5c * 0x18 + 4) = 0xffffffff;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6c60c FUN_146c6c60c body=475 status=ok
// SIG undefined FUN_146c6c60c(void)

void FUN_146c6c60c(uint *param_1,double *param_2,longlong param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar18 = (ulonglong)(*param_1 >> 9);
  uVar16 = *param_1 & 0x1ff;
  uVar17 = (ulonglong)uVar16;
  if (param_1[8] == 1) {
    uVar17 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(param_3 + 0x1c0) + uVar18 * 8) + (ulonglong)(uVar16 << 4)
              );
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (uVar17 >> 9 & 0x7fffff) * 8);
    uVar18 = uVar17 & 0x1ff;
    lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (uVar17 >> 0x29) * 8);
    uVar17 = uVar17 >> 0x20 & 0x1ff;
    dVar2 = *(double *)(param_1 + 2);
    dVar3 = *(double *)(param_1 + 4);
    dVar4 = *(double *)(lVar12 + 0x10 + uVar18 * 0x18);
    dVar5 = *(double *)(lVar12 + 8 + uVar18 * 0x18);
    dVar6 = *(double *)(lVar13 + 0x10 + uVar17 * 0x18);
    dVar7 = *(double *)(lVar13 + 8 + uVar17 * 0x18);
    *param_2 = dVar3 * *(double *)(lVar13 + uVar17 * 0x18) +
               dVar2 * *(double *)(lVar12 + uVar18 * 0x18);
    param_2[1] = dVar7 * dVar3 + dVar5 * dVar2;
    param_2[2] = dVar6 * dVar3 + dVar4 * dVar2;
  }
  else if (param_1[8] == 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x10) + uVar18 * 8);
    param_2[2] = *(double *)(lVar12 + 0x10 + uVar17 * 0x18);
    pdVar1 = (double *)(lVar12 + uVar17 * 0x18);
    dVar2 = pdVar1[1];
    *param_2 = *pdVar1;
    param_2[1] = dVar2;
  }
  else {
    lVar12 = *(longlong *)(param_3 + 0x10);
    lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x130) + uVar18 * 8);
    uVar16 = *(uint *)(lVar13 + uVar17 * 0xc);
    uVar11 = *(uint *)(lVar13 + 4 + uVar17 * 0xc);
    lVar14 = *(longlong *)(lVar12 + (ulonglong)(uVar16 >> 9) * 8);
    uVar18 = (ulonglong)uVar16 & 0x1ff;
    lVar15 = *(longlong *)(lVar12 + (ulonglong)(uVar11 >> 9) * 8);
    uVar19 = (ulonglong)uVar11 & 0x1ff;
    uVar16 = *(uint *)(lVar13 + 8 + uVar17 * 0xc);
    lVar12 = *(longlong *)(lVar12 + (ulonglong)(uVar16 >> 9) * 8);
    uVar17 = (ulonglong)uVar16 & 0x1ff;
    dVar2 = *(double *)(param_1 + 2);
    dVar3 = *(double *)(param_1 + 4);
    dVar4 = *(double *)(lVar14 + 0x10 + uVar18 * 0x18);
    dVar5 = *(double *)(lVar14 + 8 + uVar18 * 0x18);
    dVar6 = *(double *)(lVar15 + 0x10 + uVar19 * 0x18);
    dVar7 = *(double *)(lVar15 + 8 + uVar19 * 0x18);
    dVar8 = *(double *)(param_1 + 6);
    dVar9 = *(double *)(lVar12 + 0x10 + uVar17 * 0x18);
    dVar10 = *(double *)(lVar12 + 8 + uVar17 * 0x18);
    *param_2 = dVar8 * *(double *)(lVar12 + uVar17 * 0x18) +
               dVar3 * *(double *)(lVar15 + uVar19 * 0x18) +
               dVar2 * *(double *)(lVar14 + uVar18 * 0x18);
    param_2[1] = dVar10 * dVar8 + dVar7 * dVar3 + dVar5 * dVar2;
    param_2[2] = dVar9 * dVar8 + dVar6 * dVar3 + dVar4 * dVar2;
  }
  return;
}



// FUNCTION 146c6c7e7 FUN_146c6c7e7 body=1107 status=ok
// SIG undefined FUN_146c6c7e7(void)

void FUN_146c6c7e7(longlong param_1,double *param_2,uint *param_3,double param_4)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_3[8] == 2) {
    uVar4 = (ulonglong)(*param_3 >> 9);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar4 * 8);
    uVar8 = (ulonglong)(*param_3 & 0x1ff);
    local_f0 = *(undefined4 *)(lVar6 + 8 + uVar8 * 0xc);
    local_f8 = *(undefined8 *)(lVar6 + uVar8 * 0xc);
    dVar3 = 0.0;
    uVar5 = 0xffffffff;
    lVar6 = 0;
    do {
      uVar1 = *(uint *)((longlong)&local_f8 + lVar6 * 4);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
      uVar7 = (ulonglong)(uVar1 & 0x1ff);
      dVar13 = *(double *)(lVar2 + uVar7 * 0x18) - *param_2;
      dVar14 = *(double *)(lVar2 + 8 + uVar7 * 0x18) - param_2[1];
      dVar12 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18) - param_2[2];
      dVar12 = dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14;
      if ((dVar12 <= param_4) && ((uVar5 == 0xffffffff || (dVar12 < dVar3)))) {
        uVar5 = (uint)lVar6;
        dVar3 = dVar12;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    if ((int)uVar5 < 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar4 * 8);
      local_100 = *(undefined4 *)(lVar6 + 8 + uVar8 * 0xc);
      local_108 = *(undefined8 *)(lVar6 + uVar8 * 0xc);
      lVar6 = 0;
      uVar15 = 0;
      uVar16 = 0;
      do {
        uVar1 = *(uint *)((longlong)&local_108 + lVar6 * 4);
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)((uVar1 & 0x1ff) << 4));
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar4 >> 9 & 0x7fffff) * 8);
        uVar8 = uVar4 & 0x1ff;
        dVar12 = *(double *)(lVar2 + uVar8 * 0x18);
        dVar13 = *(double *)(lVar2 + 8 + uVar8 * 0x18);
        dVar14 = *(double *)(lVar2 + 0x10 + uVar8 * 0x18);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar4 >> 0x29) * 8);
        uVar4 = uVar4 >> 0x20 & 0x1ff;
        dVar9 = *(double *)(lVar2 + uVar4 * 0x18);
        dVar10 = *(double *)(lVar2 + 8 + uVar4 * 0x18);
        dVar11 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18);
        local_130 = (dVar14 + dVar11) * 0.5;
        local_138 = (dVar13 + dVar10) * 0.5;
        local_140 = (dVar12 + dVar9) * 0.5;
        dVar11 = dVar11 - dVar14;
        dVar10 = dVar10 - dVar13;
        dVar9 = dVar9 - dVar12;
        dVar12 = SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
        local_128 = 0.0;
        local_120 = 0.0;
        local_118 = 0.0;
        local_110 = 0.0;
        if (0.0 < dVar12) {
          local_118 = 1.0 / dVar12;
          local_128 = dVar9 * local_118;
          local_120 = dVar10 * local_118;
          local_118 = dVar11 * local_118;
          local_110 = dVar12 * 0.5;
        }
        dVar12 = (double)FUN_146c7eea6(&local_140,param_2,local_e8);
        if ((dVar12 <= param_4) && ((uVar5 == 0xffffffff || (dVar12 < dVar3)))) {
          dVar3 = (((param_2[2] - local_130) * local_118 +
                   (*param_2 - local_140) * local_128 + (param_2[1] - local_138) * local_120) /
                   local_110 + 1.0) * 0.5;
          dVar13 = 1.0;
          if (dVar3 <= 1.0) {
            dVar13 = dVar3;
          }
          uVar4 = ~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar13;
          uVar15 = (undefined4)uVar4;
          uVar16 = (undefined4)(uVar4 >> 0x20);
          uVar5 = (uint)lVar6;
          dVar3 = dVar12;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      if (-1 < (int)uVar5) {
        *param_3 = *(uint *)((longlong)&local_108 + (ulonglong)uVar5 * 4);
        param_3[8] = 1;
        *(ulonglong *)(param_3 + 2) = CONCAT44(uVar16,uVar15);
        *(double *)(param_3 + 4) = 1.0 - (double)CONCAT44(uVar16,uVar15);
        param_3[6] = 0;
        param_3[7] = 0;
      }
    }
    else {
      *param_3 = *(uint *)((longlong)&local_f8 + (ulonglong)uVar5 * 4);
      param_3[8] = 0;
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6cc3b FUN_146c6cc3b body=603 status=ok
// SIG undefined FUN_146c6cc3b(void)

uint * FUN_146c6cc3b(uint *param_1,longlong param_2,undefined4 *param_3,longlong *param_4,
                    undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStack_1d8 [44];
  uint local_1ac;
  longlong *local_1a8;
  longlong local_1a0;
  uint *local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130 [9];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_b8 [4];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a0 = (longlong)(int)param_4[1];
  local_1ac = 0xffffffff;
  local_1a8 = param_4;
  local_198 = param_1;
  if (local_1a0 != 0) {
    local_190 = *param_4;
    local_1a0 = local_1a0 << 2;
    local_1ac = 0xffffffff;
    dVar6 = 0.0;
    lVar12 = 0;
    do {
      uVar1 = *(uint *)(local_190 + lVar12);
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
      uVar8 = (ulonglong)uVar1 & 0x1ff;
      uVar2 = *(uint *)(lVar9 + uVar8 * 0xc);
      uVar3 = *(uint *)(lVar9 + 4 + uVar8 * 0xc);
      uVar4 = *(uint *)(lVar9 + 8 + uVar8 * 0xc);
      lVar9 = *(longlong *)(param_2 + 0x10);
      lVar5 = *(longlong *)(lVar9 + (ulonglong)(uVar4 >> 9) * 8);
      uVar8 = (ulonglong)uVar4 & 0x1ff;
      local_78 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
      puVar10 = (undefined8 *)(lVar5 + uVar8 * 0x18);
      local_88 = *puVar10;
      uStack_80 = puVar10[1];
      lVar5 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
      uVar8 = (ulonglong)uVar3 & 0x1ff;
      local_90 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
      puVar10 = (undefined8 *)(lVar5 + uVar8 * 0x18);
      local_b8[3] = *puVar10;
      uStack_98 = puVar10[1];
      lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar2 >> 9) * 8);
      uVar8 = (ulonglong)uVar2 & 0x1ff;
      local_b8[2] = *(undefined8 *)(lVar9 + 0x10 + uVar8 * 0x18);
      puVar10 = (undefined8 *)(lVar9 + uVar8 * 0x18);
      local_b8[0] = *puVar10;
      local_b8[1] = puVar10[1];
      local_138 = *(undefined8 *)(param_3 + 4);
      local_148 = *param_3;
      uStack_144 = param_3[1];
      uStack_140 = param_3[2];
      uStack_13c = param_3[3];
      puVar10 = local_b8;
      puVar11 = local_130;
      for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      dVar13 = (double)FUN_146bd2a7a(&local_148);
      if ((local_1ac == 0xffffffff) || (dVar13 < dVar6)) {
        local_158 = local_d8;
        local_168 = local_e8;
        uStack_160 = uStack_e0;
        local_1ac = uVar1;
        dVar6 = dVar13;
      }
      lVar12 = lVar12 + 4;
    } while (local_1a0 != lVar12);
  }
  puVar7 = local_198;
  *local_198 = local_1ac;
  *(undefined8 *)(local_198 + 2) = local_168;
  *(undefined8 *)(local_198 + 4) = uStack_160;
  *(undefined8 *)(local_198 + 6) = local_158;
  local_198[8] = 2;
  local_178 = *(undefined8 *)(param_3 + 4);
  local_188 = *param_3;
  uStack_184 = param_3[1];
  uStack_180 = param_3[2];
  uStack_17c = param_3[3];
  FUN_146c6c7e7(param_2,&local_188,local_198,param_5);
  if (*local_1a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6ce97 FUN_146c6ce97 body=5714 status=ok
// SIG undefined FUN_146c6ce97(void)

ulonglong FUN_146c6ce97(longlong param_1,uint param_2,int param_3,double *param_4,uint param_5,
                       double *param_6,double *param_7,longlong *param_8,double param_9,
                       longlong *param_10)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  double *pdVar19;
  longlong *plVar20;
  double dVar21;
  uint *puVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint *puVar26;
  double *pdVar27;
  int iVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 local_5e8 [36];
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  longlong local_5b8;
  int local_5b0;
  int local_5ac;
  ulonglong local_5a8;
  double local_5a0;
  undefined1 local_598 [24];
  undefined1 local_580 [24];
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  double local_538;
  uint local_52c;
  undefined8 local_528;
  undefined4 local_520;
  int iStack_51c;
  undefined8 local_518;
  uint local_510;
  uint local_508;
  int local_504;
  int local_500;
  int local_4fc;
  longlong local_4f8;
  undefined8 uStack_4f0;
  uint *local_4e8;
  undefined8 uStack_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  longlong local_4c8 [3];
  double local_4b0 [6];
  uint uStack_47c;
  double local_478;
  double dStack_470;
  double local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_430;
  undefined8 local_428;
  undefined4 local_41c;
  longlong local_418 [2];
  longlong *local_408;
  longlong local_3f8 [4];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  int iStack_3c0;
  int iStack_3bc;
  undefined **local_3b8;
  longlong local_3b0;
  uint uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined4 local_37c;
  longlong local_378 [2];
  longlong *local_368;
  longlong local_358 [4];
  longlong local_338 [2];
  longlong *local_328;
  longlong local_318 [4];
  double local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  int aiStack_2a8 [2];
  double local_2a0 [5];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  double local_260 [9];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e0 [9];
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_5e8;
  local_4d0 = local_4c8;
  local_4d8 = param_8;
  local_4e8 = (uint *)0x0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar29 = (ulonglong)(param_2 & 0x1ff);
  iVar11 = *(int *)(lVar17 + uVar29 * 0xc);
  iVar28 = *(int *)(lVar17 + 4 + uVar29 * 0xc);
  iVar14 = *(int *)(lVar17 + 8 + uVar29 * 0xc);
  local_504 = iVar11;
  local_500 = iVar28;
  local_4fc = iVar14;
  local_4c8[0] = param_1;
  FUN_14297ca1e(&local_4d8,&local_504,local_1e0);
  local_268 = param_4[2];
  local_278 = *(undefined4 *)param_4;
  uStack_274 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_270 = *(undefined4 *)(param_4 + 1);
  uStack_26c = *(undefined4 *)((longlong)param_4 + 0xc);
  pdVar19 = local_1e0;
  pdVar27 = local_260;
  for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar27 = *pdVar19;
    pdVar19 = pdVar19 + 1;
    pdVar27 = pdVar27 + 1;
  }
  local_5a8 = 0;
  if ((param_3 == -1) ||
     (((iVar11 != param_3 && (local_5a8 = 1, iVar28 != param_3)) &&
      (local_5a8 = 2, iVar14 != param_3)))) {
    FUN_146bd2a7a(&local_278);
    uVar29 = uStack_4e0;
    local_468 = param_4[2];
    local_478 = *param_4;
    dStack_470 = param_4[1];
    uStack_3c8._4_4_ = (undefined4)local_208;
    iStack_3c0 = (int)((ulonglong)local_208 >> 0x20);
    local_3d8 = (code *)CONCAT44((undefined4)local_218,(uint)local_3d8);
    uStack_3d0._0_4_ = local_218._4_4_;
    uStack_3d0._4_4_ = (undefined4)uStack_210;
    uStack_3c8._0_4_ = uStack_210._4_4_;
    lVar17 = (longlong)(int)(uint)uStack_4e0;
    uVar10 = (uint)uStack_4e0 + 1;
    uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar10);
    if (uStack_4e0._4_4_ < uVar10) {
      FUN_142980454(&local_4e8,uVar29 & 0xffffffff);
    }
    local_4e8[lVar17 * 0x12] = param_2;
    *(code **)(local_4e8 + lVar17 * 0x12 + 1) = local_3d8;
    *(ulonglong *)((longlong)(local_4e8 + lVar17 * 0x12 + 1) + 8) =
         CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0);
    *(ulonglong *)(local_4e8 + lVar17 * 0x12 + 4) =
         CONCAT44((undefined4)uStack_3c8,uStack_3d0._4_4_);
    *(ulonglong *)(local_4e8 + lVar17 * 0x12 + 4 + 2) = CONCAT44(iStack_3c0,uStack_3c8._4_4_);
    local_4e8[lVar17 * 0x12 + 8] = 2;
    *(double *)(local_4e8 + lVar17 * 0x12 + 10) = local_478;
    *(double *)((longlong)(local_4e8 + lVar17 * 0x12 + 10) + 8) = dStack_470;
    *(double *)(local_4e8 + lVar17 * 0x12 + 0xe) = local_468;
    local_4e8[lVar17 * 0x12 + 0x10] = 0xffffffff;
    local_4e8[lVar17 * 0x12 + 0x11] = param_2;
    local_5a8 = 0xffffffff;
  }
  else {
    local_208 = DAT_14c8464f0;
    local_218 = DAT_14c8464e0;
    uStack_210 = DAT_14c8464e8;
    (&local_218)[local_5a8] = 0x3ff0000000000000;
    local_1f0 = param_4[2];
    local_200 = *param_4;
    dStack_1f8 = param_4[1];
    local_468 = param_4[2];
    local_478 = *param_4;
    dStack_470 = param_4[1];
    uStack_3c8._4_4_ = (undefined4)local_208;
    iStack_3c0 = (int)((ulonglong)local_208 >> 0x20);
    local_3d8 = (code *)CONCAT44((undefined4)local_218,(uint)local_3d8);
    uStack_3d0._0_4_ = local_218._4_4_;
    uStack_3d0._4_4_ = (undefined4)uStack_210;
    uStack_3c8._0_4_ = uStack_210._4_4_;
    uStack_4e0 = CONCAT44(uStack_4e0._4_4_,1);
    FUN_142980454(&local_4e8,0);
    *local_4e8 = param_2;
    *(code **)(local_4e8 + 1) = local_3d8;
    *(ulonglong *)(local_4e8 + 3) = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0);
    *(ulonglong *)(local_4e8 + 4) = CONCAT44((undefined4)uStack_3c8,uStack_3d0._4_4_);
    *(ulonglong *)(local_4e8 + 6) = CONCAT44(iStack_3c0,uStack_3c8._4_4_);
    local_4e8[8] = 2;
    *(double *)(local_4e8 + 10) = local_478;
    *(double *)(local_4e8 + 0xc) = dStack_470;
    *(double *)(local_4e8 + 0xe) = local_468;
    local_4e8[0x10] = 0xffffffff;
    local_4e8[0x11] = param_2;
  }
  uVar29 = uStack_4f0;
  dVar21 = param_6[2] - param_4[2];
  dVar8 = param_6[1] - param_4[1];
  dVar7 = *param_6 - *param_4;
  lVar17 = (longlong)(int)uStack_4f0;
  uVar10 = (int)uStack_4f0 + 1;
  uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar10);
  if (uStack_4f0._4_4_ < uVar10) {
    FUN_146c7fb0a(&local_4f8,uVar29 & 0xffffffff);
  }
  *(undefined4 *)(local_4f8 + lVar17 * 0x18) = 0;
  *(undefined8 *)(local_4f8 + 8 + lVar17 * 0x18) = 0;
  *(double *)(local_4f8 + 0x10 + lVar17 * 0x18) =
       SQRT(dVar21 * dVar21 + dVar7 * dVar7 + dVar8 * dVar8);
  uVar29 = 0;
  uStack_3d0 = (double)CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0);
  uStack_3c8 = (double)CONCAT44(uStack_3c8._4_4_,(undefined4)uStack_3c8);
  if ((0 < *(int *)(local_4c8[0] + 0x170)) &&
     (uStack_3d0 = (double)CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0),
     uStack_3c8 = (double)CONCAT44(uStack_3c8._4_4_,(undefined4)uStack_3c8), (int)uStack_4f0 != 0))
  {
    local_5b0 = *(int *)(local_4c8[0] + 0x170) * 2;
    iVar28 = 1;
    iVar11 = local_5b0;
    do {
      FUN_146c7fb9e(&local_4f8,&local_3d8);
      dVar2 = uStack_3d0;
      local_5c4 = (uint)local_3d8;
      lVar18 = (longlong)(int)(uint)local_3d8;
      local_5bc = local_4e8[lVar18 * 0x12];
      local_5c0 = local_4e8[lVar18 * 0x12 + 8];
      local_508 = local_4e8[lVar18 * 0x12 + 0x11];
      lVar17 = *(longlong *)(*(longlong *)(local_4c8[0] + 0x130) + (ulonglong)(local_508 >> 9) * 8);
      uVar29 = (ulonglong)(local_508 & 0x1ff);
      local_518 = *(undefined8 *)(lVar17 + uVar29 * 0xc);
      local_510 = *(uint *)(lVar17 + 8 + uVar29 * 0xc);
      local_528 = *(undefined8 *)(lVar17 + uVar29 * 0xc);
      local_520 = *(undefined4 *)(lVar17 + 8 + uVar29 * 0xc);
      FUN_14297ca1e(&local_4d8,&local_528,local_1e0);
      uVar29 = uStack_4e0;
      uVar10 = local_508;
      if (-1 < (int)param_5) {
        if ((((uint)local_518 == param_5) || (local_518._4_4_ == param_5)) || (local_510 == param_5)
           ) {
          local_3d8 = (code *)*param_6;
          uStack_3d0._0_4_ = *(uint *)(param_6 + 1);
          uStack_3d0._4_4_ = *(undefined4 *)((longlong)param_6 + 0xc);
          uStack_3c8._0_4_ = SUB84(param_6[2],0);
          uStack_3c8._4_4_ = (undefined4)((ulonglong)param_6[2] >> 0x20);
          uVar12 = (uint)uStack_4e0;
          lVar17 = (longlong)(int)(uint)uStack_4e0;
          uVar15 = (uint)uStack_4e0 + 1;
          uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar15);
          if (uStack_4e0._4_4_ < uVar15) {
            FUN_142980454(&local_4e8,uVar29 & 0xffffffff);
          }
          local_4e8[lVar17 * 0x12] = param_5;
          (local_4e8 + lVar17 * 0x12 + 2)[0] = 0;
          (local_4e8 + lVar17 * 0x12 + 2)[1] = 0x3ff00000;
          puVar22 = local_4e8 + lVar17 * 0x12 + 4;
          puVar22[0] = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          local_4e8[lVar17 * 0x12 + 8] = 0;
          *(code **)(local_4e8 + lVar17 * 0x12 + 10) = local_3d8;
          *(ulonglong *)((longlong)(local_4e8 + lVar17 * 0x12 + 10) + 8) =
               CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0);
          dVar21 = (double)CONCAT44(uStack_3c8._4_4_,(undefined4)uStack_3c8);
        }
        else {
          lVar17 = lVar18 * 9;
          if (local_508 != 0xffffffff) goto LAB_146c6d346;
          pdVar19 = local_1e0;
          pdVar27 = local_260;
          for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
            *pdVar27 = *pdVar19;
            pdVar19 = pdVar19 + 1;
            pdVar27 = pdVar27 + 1;
          }
          local_268 = param_6[2];
          local_278 = *(undefined4 *)param_6;
          uStack_274 = *(undefined4 *)((longlong)param_6 + 4);
          uStack_270 = *(undefined4 *)(param_6 + 1);
          uStack_26c = *(undefined4 *)((longlong)param_6 + 0xc);
          FUN_146bd2a7a();
LAB_146c6e389:
          uVar29 = uStack_4e0;
          uVar10 = local_508;
          local_478 = *param_6;
          dStack_470 = param_6[1];
          local_468 = param_6[2];
          uStack_3c8._4_4_ = (undefined4)local_208;
          iStack_3c0 = (int)((ulonglong)local_208 >> 0x20);
          local_3d8 = (code *)CONCAT44((undefined4)local_218,(uint)local_3d8);
          uStack_3d0._0_4_ = local_218._4_4_;
          uStack_3d0._4_4_ = (undefined4)uStack_210;
          uStack_3c8._0_4_ = uStack_210._4_4_;
          uVar12 = (uint)uStack_4e0;
          lVar17 = (longlong)(int)(uint)uStack_4e0;
          uVar15 = (uint)uStack_4e0 + 1;
          uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar15);
          if (uStack_4e0._4_4_ < uVar15) {
            FUN_142980454(&local_4e8,uVar29 & 0xffffffff);
          }
          local_4e8[lVar17 * 0x12] = uVar10;
          *(code **)(local_4e8 + lVar17 * 0x12 + 1) = local_3d8;
          *(ulonglong *)((longlong)(local_4e8 + lVar17 * 0x12 + 1) + 8) =
               CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0);
          *(ulonglong *)(local_4e8 + lVar17 * 0x12 + 4) =
               CONCAT44((undefined4)uStack_3c8,uStack_3d0._4_4_);
          *(ulonglong *)(local_4e8 + lVar17 * 0x12 + 4 + 2) = CONCAT44(iStack_3c0,uStack_3c8._4_4_);
          local_4e8[lVar17 * 0x12 + 8] = 2;
          *(double *)(local_4e8 + lVar17 * 0x12 + 10) = local_478;
          *(double *)((longlong)(local_4e8 + lVar17 * 0x12 + 10) + 8) = dStack_470;
          dVar21 = local_468;
        }
        uVar29 = (ulonglong)uVar12;
        *(double *)(local_4e8 + lVar17 * 0x12 + 0xe) = dVar21;
        local_4e8[lVar17 * 0x12 + 0x10] = local_5c4;
        local_4e8[lVar17 * 0x12 + 0x11] = uVar10;
        local_3d8 = (code *)0x0;
        uStack_3d0._0_4_ = 0;
        uStack_3d0._4_4_ = 0;
        if ((int)uVar12 < 0) {
LAB_146c6e12a:
          *(undefined4 *)(param_10 + 1) = 0;
          if (*(int *)((longlong)param_10 + 0xc) < 0) {
            FUN_146c7fa98(param_10,0);
          }
          if (0 < (longlong)(int)(uint)uStack_3d0) {
            uVar25 = (longlong)(int)(uint)uStack_3d0 + 1;
            do {
              puVar22 = local_4e8 + (longlong)*(int *)((longlong)local_3d8 + -8 + uVar25 * 4) * 0x12
              ;
              iVar11 = (int)param_10[1];
              uVar29 = (ulonglong)iVar11;
              *(uint *)(param_10 + 1) = iVar11 + 1U;
              if (*(uint *)((longlong)param_10 + 0xc) < iVar11 + 1U) {
                FUN_146c7feae(param_10,iVar11);
              }
              lVar17 = *param_10;
              lVar18 = uVar29 * 0x30;
              *(undefined8 *)(lVar17 + 0x20 + lVar18) = *(undefined8 *)(puVar22 + 8);
              uVar10 = *puVar22;
              uVar12 = puVar22[1];
              uVar15 = puVar22[2];
              uVar23 = puVar22[3];
              uVar9 = *(undefined8 *)(puVar22 + 6);
              puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar18);
              *puVar1 = *(undefined8 *)(puVar22 + 4);
              puVar1[1] = uVar9;
              puVar26 = (uint *)(lVar17 + lVar18);
              *puVar26 = uVar10;
              puVar26[1] = uVar12;
              puVar26[2] = uVar15;
              puVar26[3] = uVar23;
              *(uint *)(lVar17 + 0x28 + lVar18) = puVar22[0x11];
              uVar25 = uVar25 - 1;
            } while (1 < uVar25);
          }
          iVar11 = (int)param_10[1];
          uVar29 = CONCAT71((int7)(uVar29 >> 8),1);
          if (iVar11 != 0) {
            puVar22 = (uint *)*param_10;
            puVar26 = puVar22;
            if (puVar22[8] == 2) {
              if ((int)local_5a8 < 0) {
LAB_146c6e459:
                FUN_146c6c60c(puVar22,local_580,local_4c8[0]);
                FUN_146c6c7e7(local_4c8[0],local_580,puVar22,param_9);
              }
              else {
                if ((*(double *)(puVar22 + (local_5a8 & 0xffffffff) * 2 + 2) != 1.0) ||
                   (NAN(*(double *)(puVar22 + (local_5a8 & 0xffffffff) * 2 + 2))))
                goto LAB_146c6e459;
                lVar17 = *(longlong *)
                          (*(longlong *)(local_4c8[0] + 0x130) + (ulonglong)(*puVar22 >> 9) * 8);
                uVar25 = (ulonglong)(*puVar22 & 0x1ff);
                local_478 = *(double *)(lVar17 + uVar25 * 0xc);
                dStack_470 = (double)CONCAT44(dStack_470._4_4_,
                                              *(undefined4 *)(lVar17 + 8 + uVar25 * 0xc));
                *puVar22 = *(uint *)((longlong)&local_478 + (local_5a8 & 0xffffffff) * 4);
                puVar22[8] = 0;
              }
              iVar11 = (int)param_10[1];
              if (1 < iVar11) {
                uVar10 = puVar22[8];
                puVar26 = (uint *)*param_10;
                if (((uVar10 == 2) || (uVar10 != puVar26[0x14])) || (*puVar22 != puVar26[0xc]))
                goto LAB_146c6e280;
                if (uVar10 == 1) {
                  *(undefined8 *)(puVar26 + 0x12) = *(undefined8 *)(puVar22 + 6);
                  uVar9 = *(undefined8 *)(puVar22 + 4);
                  *(undefined8 *)(puVar26 + 0xe) = *(undefined8 *)(puVar22 + 2);
                  *(undefined8 *)(puVar26 + 0x10) = uVar9;
                  iVar11 = (int)param_10[1];
                }
                iVar28 = 0;
                if (iVar11 + -1 != 0) {
                  memmove((void *)*param_10,(void *)(*param_10 + 0x30),
                          (longlong)(iVar11 + -1) * 0x30);
                  iVar28 = (int)param_10[1] + -1;
                }
                *(int *)(param_10 + 1) = iVar28;
                FUN_146c7ff42(param_10);
                iVar11 = (int)param_10[1];
              }
              if (iVar11 == 0) goto LAB_146c6e331;
              puVar26 = (uint *)*param_10;
            }
LAB_146c6e280:
            if (puVar26[(longlong)(iVar11 + -1) * 0xc + 8] == 2) {
              puVar26 = puVar26 + (longlong)(iVar11 + -1) * 0xc;
              FUN_146c6c60c(puVar26,local_598,local_4c8[0]);
              FUN_146c6c7e7(local_4c8[0],local_598,puVar26,param_9);
              iVar11 = (int)param_10[1];
              if ((1 < (longlong)iVar11) && (uVar10 = puVar26[8], uVar10 != 2)) {
                lVar17 = (longlong)iVar11 * 0x30;
                if ((uVar10 == *(uint *)(*param_10 + -0x40 + lVar17)) &&
                   (lVar17 = *param_10 + lVar17, *puVar26 == *(uint *)(lVar17 + -0x60))) {
                  if (uVar10 == 1) {
                    *(undefined8 *)(lVar17 + -0x48) = *(undefined8 *)(puVar26 + 6);
                    uVar10 = puVar26[3];
                    uVar12 = puVar26[4];
                    uVar15 = puVar26[5];
                    *(uint *)(lVar17 + -0x58) = puVar26[2];
                    *(uint *)(lVar17 + -0x54) = uVar10;
                    *(uint *)(lVar17 + -0x50) = uVar12;
                    *(uint *)(lVar17 + -0x4c) = uVar15;
                    iVar11 = (int)param_10[1];
                  }
                  *(int *)(param_10 + 1) = iVar11 + -1;
                  FUN_146c7ff42();
                }
              }
            }
          }
        }
        else {
          iVar11 = -1;
          while( true ) {
            uVar10 = (uint)uStack_3d0;
            iVar11 = iVar11 + 1;
            if ((int)((uint)uStack_4e0 * 2) <= iVar11) break;
            lVar17 = (longlong)(int)(uint)uStack_3d0;
            uStack_3d0._0_4_ = (uint)uStack_3d0 + 1;
            if (uStack_3d0._4_4_ < (uint)uStack_3d0) {
              FUN_1446f48e2(&local_3d8,uVar10);
            }
            *(int *)((longlong)local_3d8 + lVar17 * 4) = (int)uVar29;
            lVar17 = uVar29 * 0x12;
            uVar29 = (ulonglong)local_4e8[lVar17 + 0x10];
            if ((int)local_4e8[lVar17 + 0x10] < 0) goto LAB_146c6e12a;
          }
          uVar29 = 0;
        }
LAB_146c6e331:
        if (local_3d8 != (code *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      pdVar19 = local_1e0;
      pdVar27 = local_260;
      for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
        *pdVar27 = *pdVar19;
        pdVar19 = pdVar19 + 1;
        pdVar27 = pdVar27 + 1;
      }
      local_268 = param_6[2];
      local_278 = *(undefined4 *)param_6;
      uStack_274 = *(undefined4 *)((longlong)param_6 + 4);
      uStack_270 = *(undefined4 *)(param_6 + 1);
      uStack_26c = *(undefined4 *)((longlong)param_6 + 0xc);
      local_5b8 = lVar18 * 9;
      dVar30 = (double)FUN_146bd2a7a(&local_278);
      if ((dVar30 < 1e-08) || (lVar17 = local_5b8, uVar10 == 0xffffffff)) goto LAB_146c6e389;
LAB_146c6d346:
      if ((int)uStack_140 != local_114) {
        puVar16 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar16 = local_110;
        }
        for (iVar14 = *(int *)(puVar16 + (ulonglong)(local_100 - 1U & local_508) * 4); iVar14 != -1;
            iVar14 = *(int *)(local_148 + (longlong)iVar14 * 0xc + 4)) {
          if (*(uint *)(local_148 + (longlong)iVar14 * 0xc) == local_508) goto LAB_146c6dd63;
        }
      }
      local_5b8 = lVar17;
      local_5ac = iVar28;
      local_5a0 = dVar2;
      FUN_1447cbafe(&local_148,&local_3d8,&local_508,0);
      iVar14 = (uint)uStack_4e0;
      lVar17 = (longlong)(int)(uint)uStack_4e0;
      lVar18 = 0;
      uVar10 = local_5c0;
      uVar12 = local_5bc;
      do {
        dVar2 = local_1e0[lVar18 * 3 + 2];
        dVar30 = param_4[2];
        dVar31 = local_1e0[lVar18 * 3];
        dVar3 = local_1e0[lVar18 * 3 + 1];
        dVar4 = param_4[1];
        dVar5 = *param_4;
        dVar32 = param_7[2] * (dVar2 - dVar30) +
                 *param_7 * (dVar31 - dVar5) + param_7[1] * (dVar3 - dVar4);
        local_2a0[lVar18 + 1] = dVar32;
        uVar29 = -(ulonglong)(-dVar32 <= dVar32);
        if ((double)(~uVar29 & (ulonglong)-dVar32 | uVar29 & (ulonglong)dVar32) <= param_9) {
          *(undefined4 *)((longlong)local_2a0 + lVar18 * 4 + -4) = 0;
          uVar15 = *(uint *)((longlong)&local_518 + lVar18 * 4);
          local_52c = uVar15;
          if (uVar15 != uVar12 || uVar10 != 0) {
            local_538 = local_1e0[lVar18 * 3 + 2];
            local_548 = local_1e0[lVar18 * 3];
            uStack_540 = local_1e0[lVar18 * 3 + 1];
            if (-0.001 <= (dVar2 - dVar30) * dVar21 +
                          (dVar31 - dVar5) * dVar7 + (dVar3 - dVar4) * dVar8) {
              if ((int)uStack_190 != local_164) {
                puVar16 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar16 = local_160;
                }
                for (iVar11 = *(int *)(puVar16 + (ulonglong)(local_150 - 1U & uVar15) * 4);
                    iVar11 != -1; iVar11 = *(int *)(local_198 + (longlong)iVar11 * 0xc + 4)) {
                  if (*(uint *)(local_198 + (longlong)iVar11 * 0xc) == uVar15) goto LAB_146c6d455;
                }
              }
              FUN_1447cbafe(&local_198,&local_3d8,&local_52c,0);
              uStack_3c8._0_4_ = 0;
              uStack_3c8._4_4_ = 0;
              local_3b8 = &PTR_LAB_149f3aae0;
              local_3b0 = local_4c8[0];
              uStack_3a8 = local_52c;
              local_3d8 = FUN_146be9588;
              local_478 = (double)(local_4c8[0] + 0xb8);
              dStack_470 = (double)CONCAT44(dStack_470._4_4_,local_52c);
              FUN_146be94ac(local_338,&local_478,&local_3d8);
              local_388 = 0xffffffffffffffff;
              local_378[0] = 0;
              local_368 = (longlong *)0x0;
              local_3b8 = (undefined **)local_2d8;
              uStack_3c8._0_4_ = (undefined4)local_2e8;
              uStack_3c8._4_4_ = (undefined4)((ulonglong)local_2e8 >> 0x20);
              iStack_3c0 = (int)uStack_2e0;
              iStack_3bc = (int)((ulonglong)uStack_2e0 >> 0x20);
              local_3d8 = (code *)local_2f8;
              uStack_3d0._0_4_ = (uint)uStack_2f0;
              uStack_3d0._4_4_ = (uint)((ulonglong)uStack_2f0 >> 0x20);
              uStack_3a8 = uStack_2c8;
              uStack_3a4 = uStack_2c4;
              local_3a0 = local_2c0;
              uStack_39c = uStack_2bc;
              uStack_398 = uStack_2b8;
              uStack_394 = uStack_2b4;
              local_390 = local_2b0;
              FUN_146be971a(local_378,local_338);
              local_37c = 0;
              FUN_146bfd1f0(&local_3d8);
              local_428 = 0xffffffffffffffff;
              local_418[0] = 0;
              local_408 = (longlong *)0x0;
              local_458 = local_2b0;
              local_478 = (double)CONCAT44(uStack_2cc,local_2d0);
              dStack_470 = (double)CONCAT44(uStack_2c4,uStack_2c8);
              local_468 = (double)CONCAT44(uStack_2bc,local_2c0);
              uStack_460 = CONCAT44(uStack_2b4,uStack_2b8);
              local_450 = local_2d0;
              uStack_44c = uStack_2cc;
              uStack_448 = uStack_2c8;
              uStack_444 = uStack_2c4;
              local_440 = local_2c0;
              uStack_43c = uStack_2bc;
              uStack_438 = uStack_2b8;
              uStack_434 = uStack_2b4;
              local_430 = local_2b0;
              FUN_146be971a(local_418,local_338);
              local_41c = 0;
              pdVar19 = &local_478;
              while (((FUN_146bfd1f0(pdVar19), uVar10 = local_380, local_3d8 != (code *)local_478 ||
                      ((uint)uStack_3d0 != dStack_470._0_4_)) ||
                     ((iStack_3c0 != (int)uStack_460 || (iStack_3bc != uStack_460._4_4_))))) {
                pdVar19 = (double *)&local_3d8;
                if (local_380 != local_508) {
                  lVar24 = *(longlong *)
                            (*(longlong *)(local_4c8[0] + 0x130) + (ulonglong)(local_380 >> 9) * 8);
                  uVar29 = (ulonglong)(local_380 & 0x1ff);
                  local_558 = *(undefined8 *)(lVar24 + uVar29 * 0xc);
                  local_550 = *(undefined4 *)(lVar24 + 8 + uVar29 * 0xc);
                  local_560 = *(undefined4 *)(lVar24 + 8 + uVar29 * 0xc);
                  local_568 = *(undefined8 *)(lVar24 + uVar29 * 0xc);
                  FUN_14297ca1e(&local_4d8,&local_568);
                  uVar29 = uStack_4e0;
                  iVar11 = 1;
                  pdVar19 = local_4b0;
                  lVar24 = 0;
                  do {
                    if (*(uint *)((longlong)&local_558 + lVar24 * 4) != local_52c) {
                      dVar2 = (*pdVar19 - param_4[2]) * param_7[2] +
                              (pdVar19[-2] - *param_4) * *param_7 +
                              (pdVar19[-1] - param_4[1]) * param_7[1];
                      dVar30 = -dVar2;
                      iVar28 = ((dVar30 < dVar2) - 1) + (uint)(dVar30 < dVar2);
                      if ((double)(~-(ulonglong)(dVar30 <= dVar2) & (ulonglong)dVar30 |
                                  -(ulonglong)(dVar30 <= dVar2) & (ulonglong)dVar2) <= param_9) {
                        iVar28 = 0;
                      }
                      iVar11 = iVar11 * iVar28;
                    }
                    lVar24 = lVar24 + 1;
                    pdVar19 = pdVar19 + 3;
                  } while (lVar24 != 3);
                  if (iVar11 < 1) {
                    lVar24 = (longlong)(int)(uint)uStack_4e0;
                    uVar12 = (uint)uStack_4e0 + 1;
                    uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar12);
                    if (uStack_4e0._4_4_ < uVar12) {
                      FUN_142980454(&local_4e8,uVar29 & 0xffffffff);
                    }
                    local_4e8[lVar24 * 0x12] = uVar15;
                    (local_4e8 + lVar24 * 0x12 + 2)[0] = 0;
                    (local_4e8 + lVar24 * 0x12 + 2)[1] = 0x3ff00000;
                    puVar22 = local_4e8 + lVar24 * 0x12 + 4;
                    puVar22[0] = 0;
                    puVar22[1] = 0;
                    puVar22[2] = 0;
                    puVar22[3] = 0;
                    local_4e8[lVar24 * 0x12 + 8] = 0;
                    puVar22 = local_4e8 + lVar24 * 0x12 + 10;
                    *puVar22 = (uint)local_548;
                    puVar22[1] = local_548._4_4_;
                    puVar22[2] = (uint)uStack_540;
                    puVar22[3] = uStack_540._4_4_;
                    *(double *)(local_4e8 + lVar24 * 0x12 + 0xe) = local_538;
                    local_4e8[lVar24 * 0x12 + 0x10] = local_5c4;
                    local_4e8[lVar24 * 0x12 + 0x11] = uVar10;
                  }
                  pdVar19 = (double *)&local_3d8;
                }
              }
              if (local_418[0] != 0) {
                plVar20 = local_408;
                if (local_408 == (longlong *)0x0) {
                  plVar20 = local_3f8;
                }
                (**(code **)(*plVar20 + 0x10))();
              }
              if (local_378[0] != 0) {
                plVar20 = local_368;
                if (local_368 == (longlong *)0x0) {
                  plVar20 = local_358;
                }
                (**(code **)(*plVar20 + 0x10))();
              }
              if (local_338[0] != 0) {
                plVar20 = local_328;
                if (local_328 == (longlong *)0x0) {
                  plVar20 = local_318;
                }
                (**(code **)(*plVar20 + 0x10))();
              }
              uVar10 = local_5c0;
              uVar12 = local_5bc;
            }
          }
        }
        else {
          *(uint *)((longlong)local_2a0 + lVar18 * 4 + -4) = (uint)(0.0 < dVar32) * 2 + -1;
        }
LAB_146c6d455:
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      lVar18 = *(longlong *)(*(longlong *)(local_4c8[0] + 0x180) + (ulonglong)(local_508 >> 9) * 8);
      local_478 = *(double *)(lVar18 + (ulonglong)(local_508 & 0x1ff) * 0xc);
      dStack_470 = (double)CONCAT44(dStack_470._4_4_,
                                    *(undefined4 *)
                                     (lVar18 + 8 + (ulonglong)(local_508 & 0x1ff) * 0xc));
      lVar18 = 1;
      pdVar19 = local_1e0 + 2;
      do {
        uVar29 = uStack_4e0;
        lVar24 = 0;
        if (lVar18 != 3) {
          lVar24 = lVar18;
        }
        if ((*(int *)((longlong)local_2a0 + lVar24 * 4 + -4) * aiStack_2a8[lVar18] < 0) &&
           ((uVar15 = (&uStack_47c)[lVar18], uVar10 != 1 || (uVar15 != uVar12)))) {
          dVar30 = local_2a0[lVar18] / (local_2a0[lVar18] - local_2a0[lVar24 + 1]);
          dVar2 = 1.0 - dVar30;
          lVar6 = *(longlong *)(*(longlong *)(local_4c8[0] + 0x1c0) + (ulonglong)(uVar15 >> 9) * 8);
          uVar25 = (ulonglong)((uVar15 & 0x1ff) << 4);
          dVar31 = dVar30;
          if (*(int *)(lVar6 + uVar25) != (&iStack_51c)[lVar18]) {
            dVar31 = dVar2;
          }
          uVar23 = *(uint *)(lVar6 + 8 + uVar25);
          if (uVar23 == local_508) {
            uVar23 = *(uint *)(lVar6 + 0xc + uVar25);
          }
          if (uVar23 != 0xffffffff) {
            dVar4 = local_1e0[lVar24 * 3 + 2] * dVar30 + *pdVar19 * dVar2;
            dVar3 = local_1e0[lVar24 * 3 + 1] * dVar30 + pdVar19[-1] * dVar2;
            dVar2 = dVar30 * local_1e0[lVar24 * 3] + dVar2 * pdVar19[-2];
            if (-0.001 <= (dVar4 - param_4[2]) * dVar21 +
                          (dVar2 - *param_4) * dVar7 + (dVar3 - param_4[1]) * dVar8) {
              lVar24 = (longlong)(int)(uint)uStack_4e0;
              uVar13 = (uint)uStack_4e0 + 1;
              uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar13);
              if (uStack_4e0._4_4_ < uVar13) {
                FUN_142980454(&local_4e8,uVar29 & 0xffffffff);
                uVar10 = local_5c0;
                uVar12 = local_5bc;
              }
              local_4e8[lVar24 * 0x12] = uVar15;
              *(double *)(local_4e8 + lVar24 * 0x12 + 2) = dVar31;
              *(double *)(local_4e8 + lVar24 * 0x12 + 4) = 1.0 - dVar31;
              (local_4e8 + lVar24 * 0x12 + 6)[0] = 0;
              (local_4e8 + lVar24 * 0x12 + 6)[1] = 0;
              local_4e8[lVar24 * 0x12 + 8] = 1;
              *(double *)(local_4e8 + lVar24 * 0x12 + 10) = dVar2;
              *(double *)(local_4e8 + lVar24 * 0x12 + 0xc) = dVar3;
              *(double *)(local_4e8 + lVar24 * 0x12 + 0xe) = dVar4;
              local_4e8[lVar24 * 0x12 + 0x10] = local_5c4;
              local_4e8[lVar24 * 0x12 + 0x11] = uVar23;
            }
          }
        }
        puVar22 = local_4e8;
        dVar2 = local_5a0;
        iVar28 = local_5ac;
        iVar11 = local_5b0;
        lVar24 = local_5b8;
        lVar18 = lVar18 + 1;
        pdVar19 = pdVar19 + 3;
      } while (lVar18 != 4);
      if (iVar14 < (int)(uint)uStack_4e0) {
        pdVar19 = (double *)(local_4e8 + local_5b8 * 2 + 10);
        lVar18 = lVar17 * 0x48 + 0x38;
        iVar14 = (uint)uStack_4e0;
        do {
          dVar30 = *(double *)((longlong)local_4e8 + lVar18);
          dVar31 = *(double *)((longlong)local_4e8 + lVar18 + -8);
          dVar3 = *(double *)((longlong)local_4e8 + lVar18 + -0x10);
          if (-0.001 <= (dVar30 - param_4[2]) * dVar21 +
                        (dVar3 - *param_4) * dVar7 + (dVar31 - param_4[1]) * dVar8) {
            uStack_3c8 = SQRT((dVar30 - param_6[2]) * (dVar30 - param_6[2]) +
                              (dVar3 - *param_6) * (dVar3 - *param_6) +
                              (dVar31 - param_6[1]) * (dVar31 - param_6[1]));
            dVar30 = dVar30 - *(double *)(puVar22 + lVar24 * 2 + 0xe);
            dVar31 = dVar31 - *(double *)(puVar22 + lVar24 * 2 + 0xc);
            uStack_3d0 = SQRT(dVar30 * dVar30 +
                              (dVar3 - *pdVar19) * (dVar3 - *pdVar19) + dVar31 * dVar31) + dVar2;
            local_3d8 = (code *)CONCAT44(local_3d8._4_4_,(int)lVar17);
            FUN_146c7fdb8(&local_4f8,&local_3d8);
            iVar14 = (uint)uStack_4e0;
          }
          lVar17 = lVar17 + 1;
          lVar18 = lVar18 + 0x48;
        } while (lVar17 < iVar14);
      }
LAB_146c6dd63:
      uVar29 = 0;
      if (iVar11 <= iVar28) break;
      iVar28 = iVar28 + 1;
      uVar29 = 0;
    } while ((int)uStack_4f0 != 0);
  }
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_198);
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_148);
  if (local_4f8 != 0) {
    FUN_1400020a8();
  }
  if (local_4e8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (*param_8 != 0) {
    plVar20 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar20 = (longlong *)param_8[2];
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)local_5e8) == DAT_14c707940) {
    return uVar29 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6e4ea FUN_146c6e4ea body=328 status=ok
// SIG undefined FUN_146c6e4ea(void)

uint FUN_146c6e4ea(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar14 = *(byte *)(param_1 + 0x20) ^ 1;
  uVar10 = 1;
  if ((int)uVar14 < (int)uVar2) {
    uVar10 = 0;
    uVar11 = uVar2 - 1;
    if (*(byte *)(param_1 + 0x20) == 0) {
      uVar11 = uVar10;
    }
    lVar5 = *(longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x10);
    while ((uVar3 = *(uint *)(lVar6 + 0x28 + (longlong)(int)uVar11 * 0x30), -1 < (int)uVar3 &&
           ((int)uVar3 < *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144)))) {
      uVar13 = (ulonglong)(uVar3 & 0x1ff);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(lVar5 + 0x148) + (ulonglong)(uVar3 >> 9) * 8)
                                      + uVar13 * 2) - 1U)) {
        return uVar10;
      }
      bVar9 = true;
      do {
        bVar12 = bVar9;
        puVar1 = (uint *)(lVar6 + (longlong)(int)uVar11 * 0x30);
        iVar4 = *(int *)(lVar6 + 0x20 + (longlong)(int)uVar11 * 0x30);
        if (iVar4 == 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
          uVar11 = *puVar1;
          if (((*(uint *)(lVar8 + uVar13 * 0xc) != uVar11) &&
              (*(uint *)(lVar8 + 4 + uVar13 * 0xc) != uVar11)) &&
             (*(uint *)(lVar8 + 8 + uVar13 * 0xc) != uVar11)) {
            return uVar10;
          }
        }
        else if (iVar4 == 1) {
          uVar7 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (ulonglong)(*puVar1 >> 9) * 8) + 8
                   + (ulonglong)((*puVar1 & 0x1ff) << 4));
          if (uVar3 != (uint)uVar7) {
            uVar11 = (uint)((ulonglong)uVar7 >> 0x20);
            goto joined_r0x000146c6e5ed;
          }
        }
        else if (iVar4 == 2) {
          uVar11 = *puVar1;
joined_r0x000146c6e5ed:
          if (uVar3 != uVar11) {
            return uVar10;
          }
        }
        bVar9 = false;
        uVar11 = uVar14;
      } while (bVar12);
      uVar14 = uVar14 + 1;
      uVar10 = (uint)((int)uVar2 <= (int)uVar14);
      if (uVar14 == uVar2) {
        return uVar10;
      }
    }
  }
  return uVar10;
}



// FUNCTION 146c6e632 FUN_146c6e632 body=675 status=ok
// SIG undefined FUN_146c6e632(void)

undefined4
FUN_146c6e632(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
             undefined4 param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
             undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong local_128 [2];
  undefined8 local_118 [6];
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_128[0] = *param_8;
  if (local_128[0] == 0) {
    local_e8 = *param_8;
    uStack_a0 = param_8[1];
    local_d8 = (longlong *)param_8[2];
    uStack_90 = param_8[3];
    local_88 = param_8[4];
    lStack_80 = param_8[5];
    local_78 = param_8[6];
    uStack_70 = param_8[7];
    lVar3 = local_78;
    lVar4 = uStack_70;
    local_98 = local_d8;
    lVar2 = uStack_90;
    local_a8 = local_e8;
    lVar1 = uStack_a0;
    param_8[6] = CONCAT44(uStack_b4,local_b8);
    param_8[7] = CONCAT44(uStack_ac,uStack_b0);
    param_8[4] = (longlong)&PTR_FUN_149f3c790;
    param_8[5] = (longlong)&LAB_1429805c0;
    param_8[2] = 0;
    param_8[3] = CONCAT44(uStack_cc,uStack_d0);
    *param_8 = (longlong)FUN_146c7fff0;
    param_8[1] = CONCAT44(uStack_dc,uStack_e0);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = local_88;
    lStack_c0 = lStack_80;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_a0 = lVar1;
    uStack_90 = lVar2;
    local_78 = lVar3;
    uStack_70 = lVar4;
    if (local_e8 != 0) {
      plVar6 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar6 = &local_c8;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    local_128[0] = *param_8;
    local_118[0] = 0;
    if (local_128[0] == 0) goto LAB_146c6e7ff;
  }
  local_118[0] = 0;
  plVar6 = param_8 + 4;
  if ((longlong *)param_8[2] != (longlong *)0x0) {
    plVar6 = (longlong *)param_8[2];
  }
  (**(code **)*plVar6)(plVar6,local_118);
LAB_146c6e7ff:
  local_190 = param_1 + 0x10;
  local_138 = param_7[2];
  local_1a8 = &local_148;
  local_148 = *param_7;
  uStack_140 = param_7[1];
  local_158 = param_6[2];
  local_1b0 = &local_168;
  local_168 = *param_6;
  uStack_160 = param_6[1];
  local_188 = *param_4;
  uStack_184 = param_4[1];
  uStack_180 = param_4[2];
  uStack_17c = param_4[3];
  local_178 = *(undefined8 *)(param_4 + 4);
  local_198 = param_9;
  local_1a0 = local_128;
  local_1b8 = param_5;
  uVar5 = FUN_146c6ce97(*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (*param_8 != 0) {
    plVar6 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_8[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146c6e8d6 FUN_146c6e8d6 body=1568 status=ok
// SIG undefined FUN_146c6e8d6(void)

ulonglong FUN_146c6e8d6(longlong param_1,undefined8 param_2,longlong *param_3,char param_4,
                       undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 unaff_R12;
  ulonglong *puVar11;
  size_t _Size;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  char local_169;
  int *local_168;
  ulonglong local_160;
  longlong local_158;
  ulonglong local_150;
  void *local_148;
  uint local_140;
  undefined4 local_13c;
  int *local_138;
  uint local_130;
  uint local_12c;
  undefined8 *local_128;
  undefined4 local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_cc [7];
  undefined1 local_b0 [24];
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar2 = *(int *)(param_1 + 0x18);
  puVar11 = (ulonglong *)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if ((longlong)iVar2 != 0) {
    local_160 = (ulonglong)*(uint *)(param_3 + 1);
    uVar8 = (longlong)iVar2 - 1;
    lVar9 = *(longlong *)(param_1 + 0x10);
    lVar10 = uVar8 * 0x30;
    bVar13 = *(int *)(lVar9 + 0x20 + lVar10) == 2;
    local_169 = bVar13 && 1 < iVar2;
    uVar12 = (ulonglong)(iVar2 - 2);
    if (!bVar13 || 1 >= iVar2) {
      uVar12 = uVar8 & 0xffffffff;
    }
    local_78 = *(undefined8 *)(lVar9 + 0x20 + lVar10);
    local_98 = *(ulonglong *)(lVar9 + lVar10);
    uStack_90 = ((ulonglong *)(lVar9 + lVar10))[1];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
    local_88 = *puVar1;
    uStack_80 = puVar1[1];
    FUN_146c6c60c(lVar9 + lVar10,local_b0,*(undefined8 *)(param_1 + 8));
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    uVar5 = 0;
    if (puVar3[8] == 2) {
      local_ec = 0xffffffffffffffff;
      uStack_e4 = 0xffffffff;
      local_dc = 0xffffffffffffffff;
      uStack_d4 = 0xffffffff;
      uStack_d0 = 0xffffffff;
      local_cc[0] = -1;
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                (*(longlong **)(param_1 + 8),*puVar3,puVar3 + 2);
      uVar4 = local_dc;
      if (((int)local_78 == 2) && (**(int **)(param_1 + 0x10) == (int)local_98)) {
        local_128 = (undefined8 *)0x0;
        local_120 = 3;
        FUN_144a06ca8(&local_128,3,0);
        *local_128 = uVar4;
        *(undefined4 *)(local_128 + 1) = local_f0;
        local_178 = param_5;
        puVar11 = &local_118;
        FUN_146c6cc3b(puVar11,*(undefined8 *)(param_1 + 8),local_b0,&local_128);
        local_78 = local_f8;
        local_98 = local_118;
        uStack_90 = uStack_110;
        local_88 = CONCAT44(uStack_104,local_108);
        uStack_80 = CONCAT44(uStack_fc,uStack_100);
      }
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uStack_e0;
      uVar5 = 1;
    }
    puVar11 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
    if ((int)uVar5 <= (int)uVar12) {
      uVar8 = (ulonglong)uVar5;
      local_158 = (longlong)((int)local_160 + -1);
      lVar9 = (ulonglong)(uVar5 << 4) * 3;
      puVar11 = (ulonglong *)0x0;
      local_150 = uVar12;
      do {
        lVar10 = *(longlong *)(param_1 + 0x10);
        iVar2 = *(int *)(lVar10 + 0x20 + lVar9);
        if (iVar2 == 1) {
          local_ec = 0xffffffffffffffff;
          uStack_e4 = 0xffffffff;
          uStack_e0 = 0xffffffff;
          local_dc = 0xffffffffffffffff;
          local_cc[0] = -1;
          local_cc[1] = 0xffffffff;
          local_cc[2] = 0xffffffff;
          local_cc[3] = 0xffffffff;
          local_cc[4] = 0xffffffff;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),*(undefined4 *)(lVar10 + lVar9),&local_f0,
                     *(undefined8 *)(lVar10 + 8 + lVar9));
          iVar2 = (int)param_3[1];
          _Size = (size_t)iVar2;
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(param_3,iVar2);
          }
          *(undefined4 *)(*param_3 + _Size * 4) = uStack_d0;
          if ((int)local_78 == 2) {
            iVar2 = (int)local_98;
            if (((int)local_dc == (int)local_98) || (local_dc._4_4_ == (int)local_98)) {
              local_138 = (int *)0x0;
              local_130 = 1;
              FUN_144a06ca8(&local_138,1,0);
              uVar5 = local_130;
              *local_138 = iVar2;
              lVar10 = (longlong)(int)local_130;
              local_130 = local_130 + 1;
              iVar6 = (int)local_dc;
              if (local_12c < local_130) {
                local_168 = (int *)CONCAT44(local_168._4_4_,(int)local_dc);
                FUN_1446f48e2(&local_138,uVar5);
                iVar6 = (int)local_168;
              }
              local_138[lVar10] = local_cc[iVar6 != iVar2];
              local_148 = (void *)0x0;
              lVar10 = (longlong)(int)local_130;
              local_140 = local_130;
              if (lVar10 == 0) {
                local_13c = 0;
                _Size = 0;
              }
              else {
                local_168 = local_138;
                FUN_144a06ca8(&local_148,local_130,0);
                _Size = lVar10 << 2;
                memcpy(local_148,local_168,_Size);
              }
              local_178 = param_5;
              FUN_146c6cc3b(&local_118,*(undefined8 *)(param_1 + 8),local_b0,&local_148);
              local_78 = local_f8;
              local_98 = local_118;
              uStack_90 = uStack_110;
              local_88 = CONCAT44(uStack_104,local_108);
              uStack_80 = CONCAT44(uStack_fc,uStack_100);
              if (local_138 != (int *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
        else {
          if (iVar2 == 2) goto LAB_146c6e918;
          iVar2 = (int)param_3[1];
          _Size = (size_t)iVar2;
          if (((param_4 == '\0') || (iVar2 == 0 || iVar2 != (int)local_160)) ||
             (*(int *)(*param_3 + local_158 * 4) != *(int *)(lVar10 + lVar9))) {
            *(uint *)(param_3 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
              FUN_1446f48e2(param_3,iVar2);
            }
            *(undefined4 *)(*param_3 + _Size * 4) = *(undefined4 *)(lVar10 + lVar9);
          }
        }
        bVar13 = local_150 <= uVar8;
        uVar8 = uVar8 + 1;
        puVar11 = (ulonglong *)CONCAT71((int7)(_Size >> 8),bVar13);
        lVar9 = lVar9 + 0x30;
      } while ((int)uVar12 + 1 != uVar8);
    }
    if (local_169 != '\0') {
      if ((int)local_78 == 1) {
        local_ec = 0xffffffffffffffff;
        uStack_e4 = 0xffffffff;
        uStack_e0 = 0xffffffff;
        local_dc = 0xffffffffffffffff;
        local_cc[0] = -1;
        local_cc[1] = 0xffffffff;
        local_cc[2] = 0xffffffff;
        local_cc[3] = 0xffffffff;
        local_cc[4] = 0xffffffff;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                  (*(longlong **)(param_1 + 8),local_98 & 0xffffffff,&local_f0,uStack_90);
        iVar2 = (int)param_3[1];
        lVar9 = (longlong)iVar2;
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        lVar10 = *param_3;
        uVar7 = uStack_d0;
      }
      else if ((int)local_78 == 2) {
        local_ec = 0xffffffffffffffff;
        uStack_e4 = 0xffffffff;
        local_dc = 0xffffffffffffffff;
        uStack_d4 = 0xffffffff;
        uStack_d0 = 0xffffffff;
        local_cc[0] = -1;
        (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                  (*(longlong **)(param_1 + 8),local_98 & 0xffffffff);
        iVar2 = (int)param_3[1];
        lVar9 = (longlong)iVar2;
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        lVar10 = *param_3;
        uVar7 = uStack_e0;
      }
      else {
        iVar2 = (int)param_3[1];
        lVar9 = (longlong)iVar2;
        if ((lVar9 != 0) && (*(int *)(*param_3 + (longlong)(iVar2 + -1) * 4) == (int)local_98))
        goto LAB_146c6e918;
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        lVar10 = *param_3;
        uVar7 = (int)local_98;
      }
      *(undefined4 *)(lVar10 + lVar9 * 4) = uVar7;
    }
  }
LAB_146c6e918:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar11 & 0xffffffff;
}



// FUNCTION 146c6eef8 FUN_146c6eef8 body=442 status=ok
// SIG undefined FUN_146c6eef8(void)

byte FUN_146c6eef8(longlong param_1,double param_2,double param_3,double param_4,double *param_5,
                  byte *param_6)

{
  ulonglong uVar1;
  byte bVar2;
  uint in_EDX;
  undefined4 in_R8D;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  byte local_80;
  code *local_78;
  undefined8 *local_70;
  byte local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(in_EDX >> 9) * 8) + 8 +
           (ulonglong)((in_EDX & 0x1ff) << 4));
  FUN_146c13dec(param_1,&local_d0,uVar1 & 0xffffffff);
  param_5[2] = local_c0;
  *(undefined4 *)param_5 = (undefined4)local_d0;
  *(undefined4 *)((longlong)param_5 + 4) = local_d0._4_4_;
  *(undefined4 *)(param_5 + 1) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)param_5 + 0xc) = uStack_c8._4_4_;
  *param_6 = 1;
  if (uVar1 >> 0x20 == 0xffffffff) {
    local_80 = 1;
    uVar3 = (undefined4)local_d0;
    uVar4 = local_d0._4_4_;
  }
  else {
    FUN_146c13dec(param_1,&local_d0,uVar1 >> 0x20);
    uVar3 = SUB84(local_c0,0);
    uVar4 = (undefined4)((ulonglong)local_c0 >> 0x20);
    param_2 = uStack_c8;
    param_3 = (double)local_d0;
    if (param_4 <= param_5[2] * local_c0 + *param_5 * (double)local_d0 + param_5[1] * uStack_c8) {
      local_80 = *param_6;
    }
    else {
      *param_6 = 0;
      local_80 = 0;
    }
  }
  local_d0 = &local_61;
  local_61 = 1;
  local_b8 = *(undefined4 *)param_5;
  uStack_b4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_b0 = *(undefined4 *)(param_5 + 1);
  uStack_ac = *(undefined4 *)((longlong)param_5 + 0xc);
  local_a8 = param_5[2];
  local_90 = CONCAT44(uVar4,uVar3);
  local_78 = FUN_1429806b0;
  uStack_c8 = (double)uVar1;
  local_c0 = (double)param_1;
  local_a0 = param_3;
  local_98 = param_2;
  local_88 = param_4;
  local_70 = &local_d0;
  FUN_146c03fd0(param_1,in_R8D);
  bVar2 = 0;
  if (*param_6 != 0) {
    bVar2 = local_61;
  }
  *param_6 = bVar2;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_61 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6f0b4 FUN_146c6f0b4 body=328 status=ok
// SIG undefined FUN_146c6f0b4(void)

ulonglong FUN_146c6f0b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                       double param_5,double param_6,undefined1 param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [40];
  code *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  char *local_98;
  double local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  double local_78;
  double *local_70;
  undefined1 local_68;
  code *local_60;
  undefined8 *local_58;
  char local_49;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = &local_48;
  local_48 = 1.79769313486232e+308;
  local_49 = '\0';
  local_90 = param_5;
  local_78 = param_6;
  local_68 = param_7;
  local_60 = FUN_142980782;
  local_a0 = param_1;
  local_98 = &local_49;
  local_88 = param_3;
  local_84 = param_4;
  local_80 = param_2;
  local_58 = &local_a0;
  uVar1 = FUN_146c03fd0(param_1,param_3);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  if (local_49 == '\0') {
    if (param_6 <= (local_48 + local_48) * 0.5773502691896258) {
      uVar2 = 0;
    }
    else {
      local_49 = '\x01';
      local_90 = local_48;
      local_b0 = FUN_142980b90;
      local_a8 = &local_a0;
      local_a0 = param_1;
      local_98 = &local_49;
      uVar1 = FUN_146c03fd0(param_1,param_3);
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_49);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6f1fe FUN_146c6f1fe body=578 status=ok
// SIG undefined FUN_146c6f1fe(void)

undefined1
FUN_146c6f1fe(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined1 param_10,undefined1 param_11,undefined1 param_12,undefined1 param_13,
             undefined8 param_14,undefined1 param_15)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  uint *local_118;
  longlong local_110;
  undefined1 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_61;
  undefined8 local_60;
  uint local_54;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  uVar4 = param_9;
  uVar3 = param_8;
  uVar2 = param_6;
  uVar1 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_49 = param_15;
  local_4a = param_13;
  local_4b = param_12;
  local_4c = param_11;
  local_4d = param_10;
  local_61 = 0;
  local_68 = 0xffffffff;
  uVar5 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_4 >> 9) * 8) + 8 +
           (ulonglong)((param_4 & 0x1ff) << 4)) >> 0x20;
  local_60 = param_3;
  local_54 = param_4;
  local_6c = FUN_146bc96d4(param_1);
  local_70 = 0xffffffff;
  if (uVar5 != 0xffffffff) {
    local_70 = FUN_146bc96d4(param_1,uVar5);
  }
  local_120 = &local_61;
  local_78 = &local_120;
  local_118 = &local_54;
  local_108 = &local_4d;
  local_100 = &local_6c;
  local_f8 = &local_70;
  local_e8 = &local_68;
  local_e0 = &param_5;
  local_d8 = uVar2;
  local_d0 = uVar4;
  local_c8 = &local_60;
  local_c0 = uVar3;
  local_b8 = &local_49;
  local_b0 = (undefined1 *)&param_7;
  local_a8 = &stack0x00000080;
  local_a0 = &local_4c;
  local_98 = &local_4b;
  local_90 = (undefined1 *)&param_14;
  local_88 = &local_4a;
  local_80 = FUN_142980dd4;
  local_110 = param_1;
  local_f0 = param_2;
  FUN_146bd7d34(param_1 + 0xb8,uVar1);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return local_61;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c6f442 FUN_146c6f442 body=1694 status=ok
// SIG undefined FUN_146c6f442(void)

void FUN_146c6f442(double *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  double *pdVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  uint **ppuVar15;
  uint *puVar16;
  longlong *plVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar21;
  uint *puVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_238 [32];
  uint **local_218;
  double *local_210;
  uint local_208;
  uint **local_200;
  double *local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  float local_1d0;
  undefined1 local_1c8;
  float local_1c0;
  byte local_1b6 [2];
  int local_1b4;
  int local_1b0;
  uint local_1ac;
  uint *local_1a8;
  uint local_19c;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  double *local_180;
  uint *local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined8 local_150;
  double local_140;
  double local_138;
  double local_130;
  uint *local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined1 local_da [2];
  uint *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_180 = param_1;
  dVar6 = cos(*param_1 * 0.017453292519943295);
  FUN_140619b9c(param_3,&local_f0);
  local_190 = param_4 + 4;
  local_1b4 = 0;
  bVar8 = true;
  local_198 = param_3;
  local_188 = param_4;
  do {
    if (!bVar8) break;
    local_1b0 = local_1b4;
    if ((longlong)(int)local_e8 != 0) {
      puVar20 = local_f0 + (int)local_e8;
      local_1a8 = puVar20;
      puVar22 = local_f0;
      do {
        uVar1 = *puVar22;
        if ((-1 < (int)uVar1) &&
           ((int)uVar1 < (int)param_2[0x3a] * 0x200 + *(int *)((longlong)param_2 + 0x1d4))) {
          if ((ushort)(*(short *)(*(longlong *)(param_2[0x3b] + (ulonglong)(uVar1 >> 9) * 8) +
                                 (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
            lVar4 = *(longlong *)(param_2[0x38] + (ulonglong)(uVar1 >> 9) * 8);
            uVar11 = (ulonglong)((uVar1 & 0x1ff) << 4);
            local_1ac = *(uint *)(lVar4 + uVar11);
            local_19c = *(uint *)(lVar4 + 4 + uVar11);
            iVar18 = 0;
            local_1b6[1] = 0;
            local_1b6[0] = 0;
            local_c8 = DAT_14c8464f0;
            local_d8 = (uint *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            local_b0 = DAT_14c8464f0;
            local_c0 = (undefined4)DAT_14c8464e0;
            uStack_bc = DAT_14c8464e0._4_4_;
            uStack_b8 = (undefined4)DAT_14c8464e8;
            uStack_b4 = DAT_14c8464e8._4_4_;
            local_da = (undefined1  [2])0x0;
            pdVar12 = (double *)local_da;
            puVar16 = &local_1ac;
            ppuVar15 = &local_d8;
            pbVar21 = local_1b6 + 1;
            bVar8 = true;
            do {
              bVar23 = bVar8;
              local_218 = ppuVar15;
              local_210 = pdVar12;
              bVar9 = FUN_146c6eef8(param_2,uVar1,*puVar16,dVar6);
              puVar16 = &local_19c;
              pdVar12 = (double *)(local_da + 1);
              *pbVar21 = bVar9;
              iVar18 = iVar18 + (uint)bVar9;
              ppuVar15 = (uint **)&local_c0;
              pbVar21 = local_1b6;
              bVar8 = false;
            } while (bVar23);
            puVar20 = local_1a8;
            if (iVar18 != 0) {
              puVar13 = local_da;
              ppuVar15 = &local_d8;
              pbVar21 = local_1b6 + 1;
              puVar19 = &local_1ac;
              bVar8 = true;
              do {
                bVar23 = bVar8;
                if (*pbVar21 == 1) {
                  uVar2 = *puVar19;
                  lVar4 = *(longlong *)(param_2[2] + (ulonglong)(uVar2 >> 9) * 8);
                  local_f8 = *(double *)(lVar4 + 0x10 + ((ulonglong)uVar2 & 0x1ff) * 0x18);
                  pdVar12 = (double *)(lVar4 + ((ulonglong)uVar2 & 0x1ff) * 0x18);
                  local_108 = *pdVar12;
                  dStack_100 = pdVar12[1];
                  uVar3 = *puVar16;
                  lVar4 = *(longlong *)(param_2[2] + (ulonglong)(uVar3 >> 9) * 8);
                  local_118 = *(double *)(lVar4 + 0x10 + ((ulonglong)uVar3 & 0x1ff) * 0x18);
                  pdVar12 = (double *)(lVar4 + ((ulonglong)uVar3 & 0x1ff) * 0x18);
                  local_128 = (uint *)*pdVar12;
                  dStack_120 = pdVar12[1];
                  dVar7 = local_118 - local_f8;
                  dVar24 = dStack_120 - dStack_100;
                  dVar25 = (double)local_128 - local_108;
                  dVar26 = SQRT(dVar7 * dVar7 + dVar25 * dVar25 + dVar24 * dVar24);
                  puVar20 = local_1a8;
                  if (dVar26 <= 0.0) break;
                  dVar26 = 1.0 / dVar26;
                  local_140 = dVar25 * dVar26;
                  local_138 = dVar24 * dVar26;
                  local_130 = dVar7 * dVar26;
                  local_210 = (double *)local_180[1];
                  local_208 = CONCAT31(local_208._1_3_,*puVar13) ^ 1;
                  local_218 = &local_128;
                  cVar10 = FUN_146c6f0b4(param_2,ppuVar15,uVar2,uVar3);
                  pdVar12 = local_180;
                  if (cVar10 == '\0') {
                    local_1c0 = cosf(*(float *)((longlong)local_180 + 0x1c) * 0.017453292);
                    local_1c8 = *(undefined1 *)(pdVar12 + 3);
                    local_1d0 = *(float *)((longlong)pdVar12 + 0x14) *
                                *(float *)((longlong)pdVar12 + 0x14);
                    local_1d8 = *(undefined1 *)((longlong)pdVar12 + 0x12);
                    local_1f0 = *(undefined1 *)(pdVar12 + 2);
                    local_1e0 = *(undefined1 *)((longlong)pdVar12 + 0x11);
                    local_1f8 = &local_140;
                    local_200 = &local_128;
                    local_210 = &local_108;
                    local_218 = (uint **)CONCAT44(local_218._4_4_,uVar2);
                    local_1e8 = 1;
                    local_208 = uVar3;
                    cVar10 = FUN_146c6f1fe(param_2,local_198,dVar6,uVar1);
                    if (cVar10 == '\0') {
                      local_170 = 0xffffffffffffffff;
                      local_160 = 0xffffffff;
                      uStack_15c = 0xffffffff;
                      uStack_158 = 0xffffffff;
                      iStack_154 = -1;
                      local_150 = 0xffffffffffffffff;
                      local_218 = &local_178;
                      iVar18 = (**(code **)(*param_2 + 0x70))(param_2,uVar3,uVar2,0);
                      puVar20 = local_1a8;
                      if (iVar18 == 0) {
                        pcVar5 = (code *)*local_188;
                        if (pcVar5 != (code *)0x0) {
                          plVar17 = (longlong *)local_188[2];
                          if ((longlong *)local_188[2] == (longlong *)0x0) {
                            plVar17 = local_190;
                          }
                          uVar14 = (**(code **)(*plVar17 + 8))();
                          (*pcVar5)(uVar14,&local_178);
                        }
                        uVar14 = local_198;
                        local_1b0 = local_1b0 + 1;
                        FUN_144a7cc9e(local_198,local_164);
                        FUN_144a7cc9e(uVar14,uStack_158);
                        puVar20 = local_1a8;
                        if (iStack_154 != -1) {
                          FUN_144a7cc9e(uVar14);
                          puVar20 = local_1a8;
                        }
                      }
                      break;
                    }
                  }
                }
                ppuVar15 = (uint **)&local_c0;
                puVar19 = &local_19c;
                puVar13 = local_da + 1;
                pbVar21 = local_1b6;
                puVar16 = &local_1ac;
                puVar20 = local_1a8;
                bVar8 = false;
              } while (bVar23);
            }
          }
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar20);
    }
    FUN_140619b9c(local_198,&local_178);
    if (local_f0 != (uint *)0x0) {
      FUN_1400020a8();
    }
    local_f0 = local_178;
    local_e8 = local_170;
    bVar8 = false;
    bVar23 = local_1b0 != local_1b4;
    local_1b4 = local_1b0;
  } while (bVar23);
  if (local_f0 != (uint *)0x0) {
    FUN_1400020a8(local_f0);
  }
  if (*local_188 != 0) {
    plVar17 = local_190;
    if ((longlong *)local_188[2] != (longlong *)0x0) {
      plVar17 = (longlong *)local_188[2];
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if ((local_a0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c6fae2 FUN_146c6fae2 body=12519 status=ok
// SIG undefined FUN_146c6fae2(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146c6fae2(longlong *param_1)

{
  void **ppvVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  void *pvVar6;
  undefined1 ****ppppuVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *****pppppuVar12;
  undefined1 *****pppppuVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 ***pppuVar18;
  longlong *plVar19;
  uint **ppuVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 *****pppppuVar26;
  int iVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined1 *****pppppuVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  bool bVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 ****ppppuVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 local_de8 [32];
  undefined1 *****local_dc8;
  undefined8 *local_dc0;
  undefined1 **local_db8;
  longlong *local_db0;
  undefined1 *****local_da8;
  undefined1 *****local_da0;
  undefined1 *****local_d98;
  undefined1 *****local_d90;
  void **local_d88;
  ulonglong local_d80;
  uint local_d78;
  uint local_d74;
  undefined1 ****local_d70;
  undefined1 *****local_d68;
  longlong *local_d60;
  longlong *local_d58;
  double *local_d50;
  double local_d48;
  ulonglong local_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined4 uStack_d28;
  int iStack_d24;
  uint uStack_d20;
  int iStack_d1c;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined4 uStack_d08;
  undefined4 local_d04;
  undefined1 ***local_cf8;
  undefined1 **ppuStack_cf0;
  undefined1 **local_ce8;
  uint local_cdc;
  uint local_cd8 [2];
  double local_cd0;
  undefined1 ***local_cc8;
  undefined1 **ppuStack_cc0;
  undefined1 **local_cb8;
  uint local_cac;
  undefined1 *****local_ca8;
  undefined8 uStack_ca0;
  undefined1 *****local_c98;
  undefined8 local_c90;
  undefined4 local_c88;
  int local_c84;
  undefined8 local_c78;
  ulonglong uStack_c70;
  int local_c64;
  undefined1 ****local_c60 [6];
  double local_c30;
  double local_c28;
  double local_c20;
  double local_c18;
  double local_c10;
  double local_c08;
  double local_c00;
  double local_bf8;
  double local_bf0;
  double local_be8;
  double local_be0;
  double local_bd8;
  undefined1 local_bcc [4];
  undefined8 local_bc8;
  undefined1 *****pppppuStack_bc0;
  undefined1 **local_bb8;
  undefined1 ****local_bb0;
  undefined1 *****local_ba8;
  undefined1 **local_ba0;
  undefined8 local_b98;
  undefined8 local_b88;
  undefined1 ****local_b58 [2];
  undefined8 local_b48;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined1 *****local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined1 *****local_ad8;
  double local_ad0;
  ulonglong local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined4 local_ab0;
  undefined8 local_aa8;
  undefined4 local_aa0;
  undefined8 local_a9c;
  undefined4 local_a94;
  undefined8 local_a88;
  undefined4 local_a80;
  undefined2 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a50;
  undefined4 local_a48;
  undefined8 local_a44;
  undefined4 local_a3c;
  undefined8 local_a30;
  undefined4 local_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a00;
  undefined4 local_9f8;
  undefined8 local_9f4;
  undefined4 local_9ec;
  undefined8 local_9e0;
  undefined4 local_9d8;
  undefined2 local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9a8;
  undefined4 local_9a0;
  undefined8 local_99c;
  undefined4 local_994;
  undefined8 local_988;
  undefined4 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_958;
  undefined4 local_950;
  undefined8 local_94c;
  undefined4 local_944;
  undefined8 local_938;
  undefined4 local_930;
  undefined2 local_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_900;
  undefined4 local_8f8;
  undefined8 local_8f4;
  undefined4 local_8ec;
  undefined8 local_8e0;
  undefined4 local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined8 local_8a4;
  undefined4 local_89c;
  undefined8 local_890;
  undefined4 local_888;
  undefined2 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined1 local_858 [8];
  undefined1 *****local_850;
  double local_848;
  double local_840;
  double local_838;
  double local_830;
  undefined1 **local_828;
  undefined8 uStack_820;
  longlong local_818;
  longlong *local_808;
  undefined4 local_800;
  undefined1 auStack_7fc [8];
  undefined4 uStack_7f4;
  undefined8 local_7e8;
  undefined4 local_7e0 [2];
  undefined1 local_7d8 [40];
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined8 uStack_7a0;
  undefined1 *****local_798;
  undefined8 uStack_790;
  undefined1 ***local_788;
  undefined8 *local_780;
  undefined1 ***local_778;
  undefined8 *local_770;
  undefined8 local_768;
  uint *local_760;
  uint **local_758;
  undefined1 *****local_750;
  undefined1 ****local_748;
  longlong *local_740;
  undefined1 *local_738;
  longlong local_708 [2];
  undefined1 ****local_6f8;
  int aiStack_6f0 [2];
  longlong local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined8 local_6cc;
  undefined4 local_6c4;
  longlong local_6b8;
  undefined4 local_6b0;
  undefined8 local_6a8;
  undefined8 local_698;
  undefined1 *apuStack_670 [5];
  undefined1 local_648 [8];
  undefined8 local_640;
  undefined8 uStack_630;
  undefined1 *****local_628;
  undefined8 local_620;
  longlong local_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  longlong *plStack_608;
  undefined8 local_600;
  longlong local_5f8 [4];
  undefined1 ****local_5d8 [8];
  longlong local_598 [2];
  void *local_588;
  undefined8 uStack_580;
  void *local_578;
  undefined8 uStack_570;
  undefined1 *****local_568;
  undefined1 *****pppppuStack_560;
  longlong local_558;
  undefined1 local_550;
  undefined1 local_54f;
  undefined1 local_54e;
  longlong local_548;
  int aiStack_540 [14];
  undefined1 *local_508 [2];
  undefined8 local_4f8;
  undefined **local_4e8;
  longlong *local_4e0;
  undefined1 ****local_4c8 [12];
  longlong local_468;
  longlong local_3f8 [12];
  longlong local_398;
  undefined1 *****local_328 [71];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_de8;
  FUN_146bff712(local_328 + 3,param_1[2]);
  local_328[0] = (undefined1 *****)param_1[0x24];
  if (local_328[0] != (undefined1 *****)param_1[1]) {
    FUN_146c005ca();
    local_328[0] = (undefined1 *****)param_1[0x24];
  }
  local_328[1] = (undefined1 *****)(local_328 + 3);
  FUN_145c688c4(local_328[0],&local_b18,1);
  FUN_146c72bca(&local_c00,&local_b18,param_1 + 3);
  local_db0 = param_1;
  FUN_145c688c4(local_328[1],&local_b18,1);
  FUN_146c72bca(&local_c30,&local_b18,param_1 + 0xd);
  if (local_c30 <= local_c00) {
    local_c00 = local_c30;
  }
  if (local_c28 <= local_bf8) {
    local_bf8 = local_c28;
  }
  if (local_c20 <= local_bf0) {
    local_bf0 = local_c20;
  }
  if (local_be8 <= local_c18) {
    local_be8 = local_c18;
  }
  if (local_be0 <= local_c10) {
    local_be0 = local_c10;
  }
  if (local_bd8 <= local_c08) {
    local_bd8 = local_c08;
  }
  dVar48 = (double)(-(ulonglong)(0.0 <= local_bd8 - local_bf0) & (ulonglong)(local_bd8 - local_bf0))
  ;
  dVar47 = (double)(-(ulonglong)(0.0 <= local_be0 - local_bf8) & (ulonglong)(local_be0 - local_bf8))
  ;
  uVar41 = -(ulonglong)(dVar48 <= dVar47);
  dVar47 = (double)(~uVar41 & (ulonglong)dVar48 | uVar41 & (ulonglong)dVar47);
  dVar48 = (double)(-(ulonglong)(0.0 <= local_be8 - local_c00) & (ulonglong)(local_be8 - local_c00))
  ;
  uVar41 = -(ulonglong)(dVar47 <= dVar48);
  dVar47 = (double)(uVar41 & (ulonglong)dVar48 | ~uVar41 & (ulonglong)dVar47);
  if (1000000.0 <= dVar47) {
    dVar47 = 1000000.0;
  }
  if (dVar47 <= 0.01) {
    dVar47 = 0.01;
  }
  dVar47 = 1.0 / dVar47;
  lVar17 = 0;
  pppppuVar12 = (undefined1 *****)local_328;
  bVar40 = true;
  do {
    bVar25 = bVar40;
    plVar28 = param_1 + 3 + lVar17 * 10;
    plVar19 = &local_b18;
    for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
      *plVar19 = *plVar28;
      plVar28 = plVar28 + 1;
      plVar19 = plVar19 + 1;
    }
    dVar48 = (local_ae8 - (local_bf0 + local_bd8) * 0.5) * dVar47;
    local_af0 = (local_af0 - (local_bf8 + local_be0) * 0.5) * dVar47;
    local_af8 = (longlong *)(((double)local_af8 - (local_c00 + local_be8) * 0.5) * dVar47);
    local_ae8._0_4_ = SUB84(dVar48,0);
    local_ae8._4_4_ = (int)((ulonglong)dVar48 >> 0x20);
    ppppuVar44 = (undefined1 ****)((double)local_ae0 * dVar47);
    local_ae0._0_4_ = SUB84(ppppuVar44,0);
    local_ae0._4_4_ = (undefined4)((ulonglong)ppppuVar44 >> 0x20);
    local_ad8 = (undefined1 *****)((double)local_ad8 * dVar47);
    local_ad0 = local_ad0 * dVar47;
    local_ae8 = dVar48;
    local_ae0 = ppppuVar44;
    FUN_146c3cd49(*pppppuVar12,&local_b18,1);
    plVar28 = local_db0;
    lVar17 = 1;
    pppppuVar12 = (undefined1 *****)(local_328 + 1);
    bVar40 = false;
  } while (bVar25);
  local_db0[0x25] = 0;
  local_db0[0x26] = 0;
  local_db0[0x27] = 0;
  local_db0[0x28] = 0x3ff0000000000000;
  local_db0[0x29] = (longlong)((local_c00 + local_be8) * 0.5);
  local_db0[0x2a] = (longlong)((local_bf8 + local_be0) * 0.5);
  local_db0[0x2b] = (longlong)((local_bf0 + local_bd8) * 0.5);
  dVar47 = 1.0 / dVar47;
  dVar48 = DAT_14c846520 * dVar47;
  dVar45 = DAT_14c846518 * dVar47;
  local_db0[0x2c] = (longlong)(dVar47 * DAT_14c846510);
  local_db0[0x2d] = (longlong)dVar45;
  local_db0[0x2e] = (longlong)dVar48;
  cVar8 = (**(code **)(*local_db0 + 8))(local_db0);
  if (cVar8 == '\0') {
    FUN_146ba21d6(local_4c8,local_328[0],1);
    FUN_146ba21d6(local_3f8,local_328[1],1);
    local_468 = plVar28[0x18];
    local_db8 = local_508;
    local_4f8 = 0;
    local_4e8 = &PTR_LAB_149f3c7b0;
    local_4e0 = plVar28;
    local_508[0] = &LAB_14298194c;
    local_b18 = (undefined1 *****)0x7fefffffffffffff;
    local_b08 = (undefined1 *****)0x0;
    local_af8 = (longlong *)0x0;
    local_ac8 = local_ac8 & 0xffffffffffffff00;
    local_dc8 = (undefined1 *****)&local_628;
    local_628 = (undefined1 *****)0x7fefffffffffffff;
    local_618 = 0;
    plStack_608 = (longlong *)0x0;
    local_5d8[0]._0_1_ = 0;
    local_798 = (undefined1 *****)0x0;
    local_788 = (undefined1 ***)0x0;
    local_dc0 = &local_b18;
    local_398 = local_468;
    (*(code *)local_4c8[0][0x14])(local_4c8,local_c60,local_3f8,&local_798);
    local_d98 = (undefined1 *****)&local_798;
    if (local_798 != (undefined1 *****)0x0) {
      pppuVar18 = local_788;
      if (local_788 == (undefined1 ***)0x0) {
        pppuVar18 = (undefined1 ***)&local_778;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    if (local_618 != 0) {
      plVar19 = plStack_608;
      if (plStack_608 == (longlong *)0x0) {
        plVar19 = local_5f8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_b08 != (undefined1 *****)0x0) {
      plVar19 = local_af8;
      if (local_af8 == (longlong *)0x0) {
        plVar19 = &local_ae8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    cVar8 = (**(code **)(*plVar28 + 8))(plVar28);
    if (cVar8 == '\0') {
      uVar30 = (int)plVar28[0x17] - 7;
      local_568 = local_328[0];
      pppppuStack_560 = local_328[1];
      local_54f = 0;
      local_550 = uVar30 < 0xfffffffc;
      local_548 = 0;
      aiStack_540[0] = 0;
      aiStack_540[1] = 0;
      aiStack_540[2] = 0;
      aiStack_540[3] = 0;
      aiStack_540[4] = 0;
      aiStack_540[5] = 0;
      aiStack_540[6] = 0;
      aiStack_540[7] = 0;
      aiStack_540[8] = 0;
      aiStack_540[9] = 0;
      aiStack_540[10] = 0;
      aiStack_540[0xb] = 0;
      aiStack_540[0xc] = 0;
      aiStack_540[0xd] = 0;
      local_54e = (undefined1)plVar28[0x19];
      local_558 = plVar28[0x18];
      pppppuVar12 = local_c60;
      FUN_146c72d70(&local_568,pppppuVar12);
      cVar8 = (**(code **)(*plVar28 + 8))();
      uVar41 = 0;
      if (cVar8 == '\0') {
        local_c64 = (uVar30 < 0xfffffffc) + 1;
        local_d88 = &local_578;
        if ((char)plVar28[0x19] == '\x01') {
          dVar47 = (double)local_db0[0x1a] * (double)local_db0[0x1a] * (double)local_db0[0x18] *
                   (double)local_db0[0x18];
          lVar17 = 0;
          do {
            local_798 = (undefined1 *****)0x0;
            uStack_790 = (undefined1 ****)0x0;
            iVar15 = aiStack_540[lVar17 * 4];
            if (iVar15 < 1) {
              uStack_790._0_4_ = 0;
            }
            else {
              iVar10 = 0;
              do {
                iVar27 = *(int *)((&local_548)[lVar17 * 2] + (longlong)iVar10 * 4);
                iVar38 = iVar27 + iVar10 + 1;
                if (iVar10 + 2 < iVar38) {
                  lVar16 = (longlong)iVar10 + 2;
                  iVar27 = iVar27 + -1;
                  do {
                    lVar39 = (&local_548)[lVar17 * 2];
                    uVar30 = *(uint *)(lVar39 + -4 + lVar16 * 4);
                    uVar22 = *(uint *)(lVar39 + lVar16 * 4);
                    ppuVar4 = (undefined1 **)local_328[lVar17][2][uVar22 >> 9];
                    uVar36 = (ulonglong)uVar22 & 0x1ff;
                    ppuVar5 = (undefined1 **)local_328[lVar17][2][uVar30 >> 9];
                    uVar41 = (ulonglong)uVar30 & 0x1ff;
                    if (((double)ppuVar4[uVar36 * 3 + 2] - (double)ppuVar5[uVar41 * 3 + 2]) *
                        ((double)ppuVar4[uVar36 * 3 + 2] - (double)ppuVar5[uVar41 * 3 + 2]) +
                        ((double)ppuVar4[uVar36 * 3] - (double)ppuVar5[uVar41 * 3]) *
                        ((double)ppuVar4[uVar36 * 3] - (double)ppuVar5[uVar41 * 3]) +
                        ((double)ppuVar4[uVar36 * 3 + 1] - (double)ppuVar5[uVar41 * 3 + 1]) *
                        ((double)ppuVar4[uVar36 * 3 + 1] - (double)ppuVar5[uVar41 * 3 + 1]) < dVar47
                       ) {
                      uVar9 = FUN_146c061e0();
                      ppppuVar44 = uStack_790;
                      lVar39 = (longlong)(int)uStack_790;
                      uVar30 = (int)uStack_790 + 1;
                      uStack_790 = (undefined1 ****)CONCAT44(uStack_790._4_4_,uVar30);
                      if (uStack_790._4_4_ < uVar30) {
                        FUN_1446f48e2(&local_798,(ulonglong)ppppuVar44 & 0xffffffff);
                      }
                      *(undefined4 *)((longlong)local_798 + lVar39 * 4) = uVar9;
                    }
                    lVar16 = lVar16 + 1;
                    iVar27 = iVar27 + -1;
                  } while (iVar27 != 0);
                  iVar15 = aiStack_540[lVar17 * 4];
                }
                iVar10 = iVar38;
              } while (iVar38 < iVar15);
            }
            local_af8 = (longlong *)0x0;
            local_af0._0_4_ = 0;
            local_b18 = (undefined1 *****)0x0;
            uStack_b10 = (undefined8 *)0x0;
            local_af0._4_4_ = 0x80;
            local_ae8._0_4_ = 0xffffffff;
            local_ae8._4_4_ = 0;
            local_ad8 = (undefined1 *****)0x0;
            local_ad0 = (double)((ulonglong)local_ad0 & 0xffffffff00000000);
            local_620 = CONCAT44(local_620._4_4_,(int)uStack_790);
            pppppuVar12 = (undefined1 *****)&local_628;
            local_628 = local_798;
            FUN_146bc855c(&local_b18,pppppuVar12);
            if (0 < (int)uStack_790) {
              lVar16 = 0;
              do {
                uVar30 = *(uint *)((longlong)local_798 + lVar16 * 4);
                if (-1 < (int)uVar30) {
                  ppppuVar44 = (undefined1 ****)local_328[lVar17];
                  uVar22 = *(int *)(ppppuVar44 + 0x3a) * 0x200 +
                           *(int *)((longlong)ppppuVar44 + 0x1d4);
                  pppppuVar12 = (undefined1 *****)(ulonglong)uVar22;
                  if ((int)uVar30 < (int)uVar22) {
                    pppppuVar12 = (undefined1 *****)(ulonglong)(uVar30 >> 9);
                    if ((ushort)(*(short *)((longlong)ppppuVar44[0x3b][(longlong)pppppuVar12] +
                                           (ulonglong)(uVar30 & 0x1ff) * 2) - 1U) < 0xfffe) {
                      uVar41 = *(ulonglong *)
                                ((longlong)ppppuVar44[0x38][(longlong)pppppuVar12] +
                                (ulonglong)((uVar30 & 0x1ff) << 4));
                      uVar31 = uVar41 >> 0x20;
                      ppuVar4 = ppppuVar44[2][uVar41 >> 9 & 0x7fffff];
                      uVar36 = uVar41 & 0x1ff;
                      pppppuVar12 = (undefined1 *****)(uVar36 * 3);
                      ppuVar5 = ppppuVar44[2][uVar41 >> 0x29];
                      uVar35 = uVar31 & 0x1ff;
                      if (((double)ppuVar5[uVar35 * 3 + 2] - (double)ppuVar4[uVar36 * 3 + 2]) *
                          ((double)ppuVar5[uVar35 * 3 + 2] - (double)ppuVar4[uVar36 * 3 + 2]) +
                          ((double)ppuVar5[uVar35 * 3] - (double)ppuVar4[uVar36 * 3]) *
                          ((double)ppuVar5[uVar35 * 3] - (double)ppuVar4[uVar36 * 3]) +
                          ((double)ppuVar5[uVar35 * 3 + 1] - (double)ppuVar4[uVar36 * 3 + 1]) *
                          ((double)ppuVar5[uVar35 * 3 + 1] - (double)ppuVar4[uVar36 * 3 + 1]) <=
                          dVar47) {
                        pppuVar18 = ppppuVar44[0x41];
                        uVar35 = uVar31;
                        uVar36 = uVar41;
                        if (pppuVar18 != (undefined1 ***)0x0) {
                          cVar8 = (*(code *)(*pppuVar18)[0x12])(pppuVar18,uVar31,0);
                          ppppuVar44 = (undefined1 ****)local_328[lVar17];
                          if ((cVar8 != '\0') &&
                             (pppuVar18 = ppppuVar44[0x41], uVar35 = uVar41, uVar36 = uVar31,
                             pppuVar18 != (undefined1 ***)0x0)) {
                            pppppuVar12 = (undefined1 *****)(uVar41 & 0xffffffff);
                            cVar8 = (*(code *)(*pppuVar18)[0x12])(pppuVar18,pppppuVar12,0);
                            if (cVar8 != '\0') goto LAB_146c704bf;
                            ppppuVar44 = (undefined1 ****)local_328[lVar17];
                          }
                        }
                        pppppuVar12 = (undefined1 *****)(uVar36 & 0xffffffff);
                        local_620 = 0xffffffffffffffff;
                        local_600 = 0xffffffffffffffff;
                        local_610 = 0xffffffff;
                        uStack_60c = 0xffffffff;
                        plStack_608 = (longlong *)0xffffffffffffffff;
                        local_dc8 = (undefined1 *****)&local_628;
                        iVar15 = (*(code *)(*ppppuVar44)[0xe])
                                           (ppppuVar44,pppppuVar12,uVar35 & 0xffffffff);
                        if (iVar15 == 0) {
                          lVar39 = 0;
                          bVar40 = true;
                          do {
                            bVar25 = bVar40;
                            if ((int)uStack_b10 != local_ae8._4_4_) {
                              uVar30 = *(uint *)((longlong)&plStack_608 + lVar39 * 4);
                              pppppuVar12 = local_ad8;
                              if (local_ad8 == (undefined1 *****)0x0) {
                                pppppuVar12 = (undefined1 *****)&local_ae0;
                              }
                              iVar15 = *(int *)((longlong)pppppuVar12 +
                                               (ulonglong)(local_ad0._0_4_ - 1U & uVar30) * 4);
                              for (; iVar15 != -1;
                                  iVar15 = *(int *)((longlong)local_b18 + (longlong)iVar15 * 0xc + 4
                                                   )) {
                                if (*(uint *)((longlong)local_b18 + (longlong)iVar15 * 0xc) ==
                                    uVar30) {
                                  local_828 = (undefined1 **)
                                              CONCAT44(local_828._4_4_,
                                                       *(undefined4 *)
                                                        ((longlong)local_5f8 + lVar39 * 4 + -8));
                                  pppppuVar12 = (undefined1 *****)(local_708 + 2);
                                  FUN_1447cbafe(&local_b18,pppppuVar12,&local_828,&local_d38);
                                  ppppuVar44 = uStack_790;
                                  if ((char)local_d38 == '\0') {
                                    lVar39 = (longlong)(int)uStack_790;
                                    uVar30 = (int)uStack_790 + 1;
                                    uStack_790 = (undefined1 ****)CONCAT44(uStack_790._4_4_,uVar30);
                                    if (uStack_790._4_4_ < uVar30) {
                                      pppppuVar12 = (undefined1 *****)
                                                    ((ulonglong)ppppuVar44 & 0xffffffff);
                                      FUN_1446f48e2(&local_798,pppppuVar12);
                                    }
                                    *(undefined4 *)((longlong)local_798 + lVar39 * 4) =
                                         local_828._0_4_;
                                  }
                                  break;
                                }
                                pppppuVar12 = local_b18;
                              }
                            }
                            lVar39 = 1;
                            bVar40 = false;
                          } while (bVar25);
                        }
                      }
                    }
                  }
                }
LAB_146c704bf:
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)uStack_790);
            }
            local_ad0 = (double)((ulonglong)local_ad0 & 0xffffffff00000000);
            if (local_ad8 != (undefined1 *****)0x0) {
              FUN_1400020a8();
            }
            FUN_1447a082e(&local_b18);
            if (local_798 != (undefined1 *****)0x0) {
              FUN_1400020a8();
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < local_c64);
        }
        plVar28 = local_db0;
        cVar8 = (**(code **)(*local_db0 + 8))();
        uVar41 = 0;
        if (cVar8 == '\0') {
          local_d60 = plVar28 + 0x25;
          local_d58 = plVar28 + 0x29;
          local_d50 = (double *)(plVar28 + 0x2c);
          local_578 = (void *)0x0;
          uStack_570 = 0;
          local_588 = (void *)0x0;
          uStack_580 = 0;
          lVar17 = 0x48;
          do {
            *(undefined8 *)((longlong)apuStack_670 + lVar17 + 0x20U) = 0;
            *(undefined4 *)(local_648 + lVar17) = 0;
            *(undefined8 *)((longlong)apuStack_670 + lVar17) = 0;
            *(undefined8 *)((longlong)apuStack_670 + lVar17 + 8U) = 0;
            *(undefined8 *)(local_648 + lVar17 + 4) = 0xffffffff00000080;
            *(undefined4 *)((longlong)&local_640 + lVar17 + 4) = 0;
            *(undefined8 *)((longlong)&uStack_630 + lVar17) = 0;
            *(undefined4 *)((longlong)&local_628 + lVar17) = 0;
            lVar17 = lVar17 + 0x50;
          } while (lVar17 != 0xe8);
          local_6e8 = 0;
          uStack_6e0 = 0;
          local_6f8 = (undefined1 ****)0x0;
          aiStack_6f0[0] = 0;
          aiStack_6f0[1] = 0;
          local_ca8 = (undefined1 *****)0x0;
          uStack_ca0 = (uint *)0x0;
          if (1 < local_c64) {
            pppppuVar12 = (undefined1 *****)&local_b18;
            local_b18 = (undefined1 *****)CONCAT44(local_b18._4_4_,0xffffffff);
            FUN_1448156a8(&local_ca8,pppppuVar12,
                          *(int *)(local_328[0] + 0x28) * 0x200 +
                          *(int *)((longlong)local_328[0] + 0x144));
          }
          plVar28 = local_db0;
          local_c78 = (ulonglong)local_c78._4_4_ << 0x20;
          iVar15 = local_c64;
          if (0 < local_c64) {
            iVar15 = 0;
            do {
              local_b18 = local_4c8 + (longlong)(1 - iVar15) * 0x1a;
              local_af0._0_4_ = 0;
              local_af0._4_4_ = 0;
              local_ae8._0_4_ = 0;
              uStack_b10 = (undefined8 *)0x0;
              local_b08 = (undefined1 *****)0x0;
              local_ae8._4_4_ = 0x80;
              local_ae0._0_4_ = 0xffffffff;
              local_ae0._4_4_ = 0;
              local_ad0 = 0.0;
              local_ac8 = local_ac8 & 0xffffffff00000000;
              uStack_ac0 = 0;
              local_ab8 = 0x4000000000000000;
              local_ab0 = 2;
              FUN_146bef8a8(&local_b18,1);
              lVar17 = (longlong)(int)local_c78;
              pppppuVar13 = local_328[lVar17];
              uVar22 = *(int *)(pppppuVar13 + 0x28) * 0x200 +
                       *(int *)((longlong)pppppuVar13 + 0x144);
              FUN_144aa2a62(local_708 + lVar17 * 2 + 2,uVar22,1);
              uVar30 = *(uint *)(local_db0 + 0x17);
              local_bcc[0] = 1;
              uVar21 = (undefined1)(0x100010001 >> ((char)uVar30 * '\b' & 0x3fU));
              if (5 < uVar30) {
                uVar21 = 1;
              }
              local_cd8[0] = CONCAT31(local_cd8[0]._1_3_,uVar21);
              if (((uVar30 < 7) && ((0x54U >> (uVar30 & 0x1f) & 1) != 0)) ||
                 ((uVar30 == 1 && ((int)local_c78 == 1)))) {
                local_bcc[0] = 0;
              }
              local_d38 = (undefined1 *****)local_4c8[(1 - lVar17) * 0x1a + 1];
              uStack_d30 = (undefined1 *****)0x0;
              uStack_d28 = 0;
              iStack_d24 = 0;
              FUN_146c38358(&local_d38);
              local_cc8 = (undefined1 ***)plVar28[0x18];
              apuStack_670[3] = (undefined1 *)0x0;
              local_648 = (undefined1  [8])&PTR_LAB_149f3c7d0;
              apuStack_670[1] = &LAB_1429819ba;
              local_640 = &local_d38;
              FUN_146bee698(&local_828,local_cc8,apuStack_670 + 1);
              local_778 = (undefined1 ***)&local_cc8;
              local_770 = &local_c78;
              local_768 = local_708 + 2;
              local_760 = local_cd8;
              local_758 = (uint **)&local_c64;
              local_750 = (undefined1 *****)&local_ca8;
              local_748 = (undefined1 ****)&local_b18;
              local_740 = plVar28;
              local_738 = local_bcc;
              local_bc8 = (undefined1 ****)0x0;
              pppppuStack_bc0 = (undefined1 *****)((ulonglong)pppppuStack_bc0 & 0xffffffff00000000);
              local_858 = (undefined1  [8])FUN_142981a44;
              local_850 = (undefined1 *****)&local_798;
              local_db8 = (undefined1 **)&local_bc8;
              local_dc0 = (undefined8 *)((ulonglong)local_dc0 & 0xffffffff00000000);
              pppppuVar12 = (undefined1 *****)(ulonglong)uVar22;
              local_798 = pppppuVar13;
              uStack_790 = (undefined1 ****)(local_4c8 + (1 - lVar17) * 0x1a);
              local_788 = &local_828;
              local_780 = &local_d38;
              FUN_1401f8d10(L"ParallelFor Task",pppppuVar12,1,local_858);
              if (local_818 != 0) {
                plVar19 = local_808;
                if (local_808 == (longlong *)0x0) {
                  plVar19 = (longlong *)(auStack_7fc + 4);
                }
                (**(code **)(*plVar19 + 0x10))();
              }
              if (uStack_d30 != (undefined1 *****)0x0) {
                FUN_1400020a8();
              }
              local_ac8 = local_ac8 & 0xffffffff00000000;
              if (local_ad0 != 0.0) {
                FUN_1400020a8();
              }
              FUN_146bddd50(&uStack_b10);
              iVar15 = (int)local_c78 + 1;
              local_c78 = CONCAT44(local_c78._4_4_,iVar15);
            } while (iVar15 < local_c64);
            if (1 < local_c64) {
              puVar34 = (undefined1 *)0x0;
              uVar30 = *(int *)(local_328[0] + 0x28) * 0x200 +
                       *(int *)((longlong)local_328[0] + 0x144);
              pppppuVar12 = (undefined1 *****)(ulonglong)uVar30;
              if ((uVar30 != 0) && (0xfffd < (ushort)(*(short *)*local_328[0][0x29] - 1U))) {
                puVar34 = &DAT_00000001;
                uVar22 = 1;
                if (1 < (int)uVar30) {
                  puVar34 = (undefined1 *)(ulonglong)uVar30;
                }
                do {
                  uVar32 = uVar22;
                  if ((uint)puVar34 == uVar32) goto LAB_146c70b9e;
                  uVar22 = uVar32 + 1;
                } while (0xfffd < (ushort)(*(short *)((longlong)local_328[0][0x29][uVar32 >> 9] +
                                                     (ulonglong)(uVar32 & 0x1ff) * 2) - 1U));
                puVar34 = (undefined1 *)(ulonglong)uVar32;
              }
LAB_146c70b9e:
              uVar22 = (uint)puVar34;
              while (uVar22 != uVar30) {
                iVar15 = (int)puVar34;
                lVar17 = (longlong)*(int *)((longlong)local_ca8 + (longlong)iVar15 * 4);
                if ((-1 < lVar17) && (*(char *)(local_6e8 + lVar17) == '\x01')) {
                  *(undefined1 *)((longlong)local_6f8 + (longlong)iVar15) = 0;
                }
                uVar22 = iVar15 + 1U;
                if ((int)(iVar15 + 1U) < (int)uVar30) {
                  uVar22 = uVar30;
                }
                do {
                  if (uVar22 - 1 == (int)puVar34) {
                    puVar34 = (undefined1 *)(ulonglong)uVar22;
                    break;
                  }
                  uVar32 = (int)puVar34 + 1;
                  puVar34 = (undefined1 *)(ulonglong)uVar32;
                } while (0xfffd < (ushort)(*(short *)((longlong)local_328[0][0x29][uVar32 >> 9] +
                                                     (ulonglong)(uVar32 & 0x1ff) * 2) - 1U));
                uVar22 = (uint)puVar34;
              }
            }
            iVar15 = local_c64;
            if (0 < local_c64) {
              lVar17 = 0;
              do {
                ppppuVar44 = (undefined1 ****)local_328[lVar17];
                uVar22 = *(int *)(ppppuVar44 + 0x3a) * 0x200 +
                         *(int *)((longlong)ppppuVar44 + 0x1d4);
                uVar30 = 0;
                if (uVar22 != 0) {
                  uVar32 = *(ushort *)*ppppuVar44[0x3b] - 1;
                  pppppuVar12 = (undefined1 *****)(ulonglong)uVar32;
                  uVar30 = 0;
                  if (0xfffd < (ushort)uVar32) {
                    pppppuVar13 = (undefined1 *****)&DAT_00000001;
                    uVar32 = 1;
                    if (1 < (int)uVar22) {
                      uVar32 = uVar22;
                    }
                    do {
                      pppppuVar12 = pppppuVar13;
                      uVar24 = (uint)pppppuVar12;
                      uVar30 = uVar32;
                      if (uVar32 == uVar24) break;
                      pppppuVar13 = (undefined1 *****)(ulonglong)(uVar24 + 1);
                      uVar30 = uVar24;
                    } while (0xfffd < (ushort)(*(short *)((longlong)
                                                          ppppuVar44[0x3b]
                                                          [(ulonglong)pppppuVar12 >> 9] +
                                                         (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
                  }
                }
                if (uVar30 != uVar22) {
                  do {
                    puVar29 = (undefined8 *)
                              ((longlong)ppppuVar44[0x38][uVar30 >> 9] +
                              (ulonglong)((uVar30 & 0x1ff) << 4));
                    local_b18 = (undefined1 *****)*puVar29;
                    puVar29 = (undefined8 *)puVar29[1];
                    uStack_b10._4_4_ = (uint)((ulonglong)puVar29 >> 0x20);
                    lVar16 = (longlong)(int)uStack_b10._4_4_;
                    uStack_b10 = puVar29;
                    if (lVar16 != -1) {
                      uStack_b10._0_4_ = (int)puVar29;
                      lVar39 = (longlong)(int)uStack_b10;
                      pppppuVar12 = (undefined1 *****)local_708[lVar17 * 2 + 2];
                      if (*(char *)((longlong)pppppuVar12 + lVar39) !=
                          *(char *)((longlong)pppppuVar12 + lVar16)) {
                        iVar15 = *(int *)(&uStack_580 + lVar17 * 2);
                        *(uint *)(&uStack_580 + lVar17 * 2) = iVar15 + 1U;
                        if (*(uint *)((longlong)&uStack_580 + lVar17 * 0x10 + 4) < iVar15 + 1U) {
                          FUN_1446f48e2(&local_588 + lVar17 * 2,iVar15);
                        }
                        *(uint *)((longlong)(&local_588)[lVar17 * 2] + (longlong)iVar15 * 4) =
                             uVar30;
                        pppppuVar12 = (undefined1 *****)&local_798;
                        FUN_1447cbafe(&local_628 + lVar17 * 10,pppppuVar12,&local_b18,0);
                        FUN_1447cbafe(&local_628 + lVar17 * 10,pppppuVar12,(longlong)&local_b18 + 4)
                        ;
                      }
                    }
                    uVar32 = uVar30 + 1;
                    if ((int)(uVar30 + 1) < (int)uVar22) {
                      uVar32 = uVar22;
                    }
                    do {
                      uVar24 = uVar32;
                      if (uVar32 - 1 == uVar30) break;
                      uVar30 = uVar30 + 1;
                      uVar23 = *(ushort *)
                                ((longlong)ppppuVar44[0x3b][uVar30 >> 9] +
                                (ulonglong)(uVar30 & 0x1ff) * 2) - 1;
                      pppppuVar12 = (undefined1 *****)(ulonglong)uVar23;
                      uVar24 = uVar30;
                    } while (0xfffd < (ushort)uVar23);
                    uVar30 = uVar24;
                    iVar15 = local_c64;
                  } while (uVar30 != uVar22);
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 < iVar15);
            }
          }
          uVar30 = (int)local_db0[0x17] - 5;
          local_798 = (undefined1 *****)0x0;
          uStack_790 = (undefined1 ****)0x0;
          iVar10 = -1;
          if (uVar30 < 2) {
            iVar10 = *(int *)(local_328[0] + 0x36);
            pppppuVar12 = (undefined1 *****)(ulonglong)(iVar10 + 1U);
            *(uint *)(local_328[0] + 0x36) = iVar10 + 1U;
          }
          plVar28 = local_db0;
          if (0 < iVar15) {
            lVar17 = 0;
            do {
              if (0 < aiStack_6f0[lVar17 * 4]) {
                ppppuVar44 = (undefined1 ****)local_328[lVar17];
                uVar41 = 0;
                do {
                  ppppuVar7 = uStack_790;
                  if ((longlong)uVar41 <
                      (longlong)
                      (*(int *)(ppppuVar44 + 0x28) * 0x200 + *(int *)((longlong)ppppuVar44 + 0x144))
                     ) {
                    uVar36 = uVar41 >> 9 & 0x7fffff;
                    uVar22 = (uint)uVar41 & 0x1ff;
                    uVar32 = *(ushort *)((longlong)ppppuVar44[0x29][uVar36] + (ulonglong)uVar22 * 2)
                             - 1;
                    pppppuVar12 = (undefined1 *****)(ulonglong)uVar32;
                    if (((ushort)uVar32 < 0xfffe) &&
                       (pppppuVar12 = (undefined1 *****)local_708[lVar17 * 2 + 2],
                       *(char *)((longlong)pppppuVar12 + uVar41) == '\0')) {
                      if (uVar30 < 2) {
                        if (*(char *)(ppppuVar44 + 0x35) == '\x01') {
                          pppppuVar12 = (undefined1 *****)ppppuVar44[0x33];
                          *(int *)((longlong)pppppuVar12[uVar36] + (ulonglong)uVar22 * 4) = iVar10;
                          iVar15 = *(int *)(ppppuVar44 + 0x36);
                          if (*(int *)(ppppuVar44 + 0x36) < iVar10 + 1) {
                            iVar15 = iVar10 + 1;
                          }
                          *(int *)(ppppuVar44 + 0x36) = iVar15;
                        }
                        lVar16 = (longlong)(int)uStack_790;
                        uVar22 = (int)uStack_790 + 1;
                        uStack_790 = (undefined1 ****)CONCAT44(uStack_790._4_4_,uVar22);
                        if (uStack_790._4_4_ < uVar22) {
                          pppppuVar12 = (undefined1 *****)((ulonglong)ppppuVar7 & 0xffffffff);
                          FUN_1446f48e2(&local_798,pppppuVar12);
                        }
                        *(uint *)((longlong)local_798 + lVar16 * 4) = (uint)uVar41;
                      }
                      else {
                        pppppuVar12 = (undefined1 *****)(uVar41 & 0xffffffff);
                        FUN_146c0b65a(ppppuVar44,pppppuVar12,CONCAT71((uint7)(uint3)(uVar22 >> 8),1)
                                      ,0);
                      }
                    }
                  }
                  uVar41 = uVar41 + 1;
                  plVar28 = local_db0;
                  iVar15 = local_c64;
                } while ((longlong)uVar41 < (longlong)aiStack_6f0[lVar17 * 4]);
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 < iVar15);
          }
          if (uVar30 < 2) {
            local_b18 = local_328[0];
            uStack_b10 = (undefined8 *)0x0;
            local_b08 = (undefined1 *****)0x0;
            local_6a8 = 0;
            local_698 = 0;
            pppppuVar12 = (undefined1 *****)&local_798;
            FUN_142984384(&local_b18,pppppuVar12);
            if (1 < (int)local_b08) {
              lVar17 = 1;
              do {
                iVar15 = *(int *)(local_328[0] + 0x36);
                uVar30 = iVar15 + 1;
                pppppuVar12 = (undefined1 *****)(ulonglong)uVar30;
                *(uint *)(local_328[0] + 0x36) = uVar30;
                lVar16 = (longlong)(int)((longlong *)uStack_b10[lVar17])[1];
                if (lVar16 != 0) {
                  lVar39 = *(longlong *)uStack_b10[lVar17];
                  lVar37 = 0;
                  do {
                    if (*(char *)(local_328[0] + 0x35) == '\x01') {
                      uVar22 = *(uint *)(lVar39 + lVar37);
                      *(int *)((longlong)local_328[0][0x33][uVar22 >> 9] +
                              (ulonglong)(uVar22 & 0x1ff) * 4) = iVar15;
                      uVar22 = *(uint *)(local_328[0] + 0x36);
                      if ((int)*(uint *)(local_328[0] + 0x36) < (int)uVar30) {
                        uVar22 = uVar30;
                      }
                      *(uint *)(local_328[0] + 0x36) = uVar22;
                    }
                    lVar37 = lVar37 + 4;
                  } while (lVar16 * 4 != lVar37);
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 < (int)local_b08);
            }
            FUN_146be9400(&uStack_b10);
          }
          if (local_798 != (undefined1 *****)0x0) {
            FUN_1400020a8();
          }
          if (local_ca8 != (undefined1 *****)0x0) {
            FUN_1400020a8();
          }
          lVar17 = 0x20;
          do {
            if (*(longlong *)((longlong)local_708 + lVar17) != 0) {
              FUN_1400020a8();
            }
            lVar17 = lVar17 + -0x10;
          } while (lVar17 != 0);
          cVar8 = (**(code **)(*plVar28 + 8))();
          uVar41 = 0;
          if (cVar8 == '\0') {
            local_6d8 = 0;
            local_6d0 = 0;
            local_6f8 = (undefined1 ****)0x0;
            aiStack_6f0[0] = 0;
            aiStack_6f0[1] = 0;
            local_6cc = 0xffffffff00000080;
            local_6c4 = 0;
            local_6b8 = 0;
            local_6b0 = 0;
            if (local_c64 == 2) {
              lVar17 = 0x48;
              do {
                *(undefined8 *)(local_7d8 + lVar17 + 0x18) = 0;
                *(undefined4 *)(local_7d8 + lVar17 + 0x20) = 0;
                *(undefined8 *)((longlong)local_7e0 + lVar17) = 0;
                *(undefined8 *)(local_7d8 + lVar17) = 0;
                *(undefined8 *)(local_7d8 + lVar17 + 0x24) = 0xffffffff00000080;
                *(undefined4 *)((longlong)&local_7b0 + lVar17 + 4) = 0;
                *(undefined8 *)((longlong)&uStack_7a0 + lVar17) = 0;
                *(undefined4 *)((longlong)&local_798 + lVar17) = 0;
                lVar17 = lVar17 + 0x50;
              } while (lVar17 != 0xe8);
              dVar47 = (double)plVar28[0x18] * (double)plVar28[0x18];
              local_d90 = (undefined1 *****)local_328;
              local_d68 = (undefined1 *****)local_858;
              uVar14 = CONCAT71((int7)((ulonglong)pppppuVar12 >> 8),1);
              local_da8 = (void **)0x0;
              pppppuVar12 = (undefined1 *****)&local_628;
              local_da0 = local_5d8;
              pppppuVar13 = (undefined1 *****)(local_328 + 1);
              local_d70 = (undefined1 ****)(local_858 + 4);
              local_d48 = dVar47;
              do {
                local_d74 = (uint)uVar14;
                pppppuVar13 = (undefined1 *****)*pppppuVar13;
                FUN_145c688c4(pppppuVar13,&local_b18,1);
                dVar48 = (double)(-(ulonglong)(0.0 <= local_af0 - (double)local_b08) &
                                 (ulonglong)(local_af0 - (double)local_b08));
                dVar45 = (double)(-(ulonglong)(0.0 <= (double)local_af8 - (double)uStack_b10) &
                                 (ulonglong)((double)local_af8 - (double)uStack_b10));
                uVar41 = -(ulonglong)(dVar48 <= dVar45);
                dVar48 = (double)(~uVar41 & (ulonglong)dVar48 | uVar41 & (ulonglong)dVar45);
                dVar45 = (double)(-(ulonglong)(0.0 <= local_b00 - (double)local_b18) &
                                 (ulonglong)(local_b00 - (double)local_b18));
                uVar41 = -(ulonglong)(dVar48 <= dVar45);
                dVar48 = (double)(uVar41 & (ulonglong)dVar45 | ~uVar41 & (ulonglong)dVar48) *
                         0.015625;
                local_808 = (longlong *)0x0;
                local_800 = 0;
                local_828 = (undefined1 **)0x0;
                uStack_820 = 0;
                auStack_7fc = (undefined1  [8])0xffffffff00000080;
                uStack_7f4 = 0;
                local_7e8 = 0;
                local_7e0[0] = 0;
                InitializeCriticalSection((LPCRITICAL_SECTION)local_7d8);
                SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_7d8,4000);
                local_7a8 = 0xffffffff;
                pppppuVar26 = local_da0 + 2;
                local_d38 = (undefined1 *****)&DAT_100000000;
                uStack_d28 = 0xffffffff;
                iStack_d24 = 0;
                uStack_d20 = 0;
                iVar15 = 0;
                uStack_d30 = pppppuVar26;
                local_7b0 = dVar48;
                if (*(int *)(local_da0 + 5) != 0) {
                  FUN_1449c0562(&local_d38);
                  iVar15 = *(int *)(local_da0 + 5);
                }
                local_b00 = (double)CONCAT44(iStack_d24,uStack_d28);
                local_af8 = (longlong *)CONCAT44(iStack_d1c,uStack_d20);
                uStack_b10 = local_d38;
                local_b08 = uStack_d30;
                local_b18 = local_da0;
                iVar10 = iStack_d24;
                if ((iStack_d24 != iVar15) || (uStack_d30 != pppppuVar26)) {
                  do {
                    uVar30 = *(uint *)((longlong)*local_b18 + (longlong)iVar10 * 0xc);
                    local_ca8 = (undefined1 *****)CONCAT44(local_ca8._4_4_,uVar30);
                    pppuVar18 = pppppuVar13[2][uVar30 >> 9];
                    uVar41 = (ulonglong)(uVar30 & 0x1ff);
                    auVar46._0_8_ = (double)pppuVar18[uVar41 * 3 + 2] / local_7b0;
                    auVar46._8_8_ = 0;
                    auVar46 = roundsd(auVar46,auVar46,9);
                    auVar43._0_8_ = (double)pppuVar18[uVar41 * 3 + 1] / local_7b0;
                    auVar43._8_8_ = 0;
                    auVar43 = roundsd(auVar43,auVar43,9);
                    auVar42._0_8_ = (double)pppuVar18[uVar41 * 3] / local_7b0;
                    auVar42._8_8_ = 0;
                    auVar42 = roundsd(auVar42,auVar42,9);
                    local_bc8 = (undefined1 ****)CONCAT44((int)auVar43._0_8_,(int)auVar42._0_8_);
                    pppppuStack_bc0 =
                         (undefined1 *****)CONCAT44(pppppuStack_bc0._4_4_,(int)auVar46._0_8_);
                    uStack_d30 = (undefined1 *****)&local_ca8;
                    local_d38 = (undefined1 *****)&local_bc8;
                    FUN_146be634e(&local_828,local_858,&local_d38,0);
                    local_b00 = (double)CONCAT44(local_b00._4_4_,(uint)local_b00 & ~uStack_b10._4_4_
                                                );
                    FUN_1449c0562(&uStack_b10);
                    iVar10 = local_b00._4_4_;
                  } while (local_b18 != local_da0 ||
                           (local_b08 != pppppuVar26 || local_b00._4_4_ != iVar15));
                }
                FUN_1458481c0(&local_b18);
                local_b18 = (undefined1 *****)0x3fd0000000000000;
                local_b08 = (undefined1 *****)CONCAT44(local_b08._4_4_,7);
                iVar15 = *(int *)(local_d88 + 1);
                if ((longlong)iVar15 != 0) {
                  pvVar6 = *local_d88;
                  lVar17 = 0;
                  do {
                    uVar30 = *(uint *)((longlong)pvVar6 + lVar17);
                    uVar41 = (ulonglong)((uVar30 & 0x1ff) << 4);
                    uVar22 = *(uint *)((longlong)pppppuVar13[0x38][uVar30 >> 9] + uVar41);
                    uVar32 = *(uint *)((longlong)pppppuVar13[0x38][uVar30 >> 9] + uVar41 + 4);
                    pppuVar18 = pppppuVar13[2][uVar22 >> 9];
                    uVar41 = (ulonglong)uVar22 & 0x1ff;
                    ppuVar4 = pppuVar18[uVar41 * 3];
                    ppppuVar44 = (undefined1 ****)pppuVar18[uVar41 * 3 + 1];
                    ppuVar5 = pppuVar18[uVar41 * 3 + 2];
                    pppuVar18 = pppppuVar13[2][uVar32 >> 9];
                    uVar41 = (ulonglong)uVar32 & 0x1ff;
                    local_d38 = (undefined1 *****)pppuVar18[uVar41 * 3];
                    uStack_d30 = (undefined1 *****)pppuVar18[uVar41 * 3 + 1];
                    ppuVar2 = pppuVar18[uVar41 * 3 + 2];
                    ppuVar3 = ppuVar4;
                    if ((double)ppuVar4 <= (double)local_d38) {
                      ppuVar3 = (undefined1 **)local_d38;
                      local_d38 = (undefined1 *****)ppuVar4;
                    }
                    local_d18 = ppppuVar44;
                    if ((double)ppppuVar44 <= (double)uStack_d30) {
                      local_d18 = (undefined1 ****)uStack_d30;
                      uStack_d30 = (undefined1 *****)ppppuVar44;
                    }
                    uStack_d10 = ppuVar5;
                    if ((double)ppuVar5 <= (double)ppuVar2) {
                      uStack_d10 = ppuVar2;
                      ppuVar2 = ppuVar5;
                    }
                    uStack_d28 = SUB84(ppuVar2,0);
                    iStack_d24 = (int)((ulonglong)ppuVar2 >> 0x20);
                    uStack_d20 = (uint)ppuVar3;
                    iStack_d1c = (int)((ulonglong)ppuVar3 >> 0x20);
                    FUN_146c86256(&local_b18,uVar30,&local_d38);
                    lVar17 = lVar17 + 4;
                  } while ((longlong)iVar15 * 4 != lVar17);
                }
                local_c78 = 0;
                uStack_c70 = 0;
                pppppuVar26 = pppppuVar12 + 2;
                local_d38 = (undefined1 *****)&DAT_100000000;
                uStack_d28 = 0xffffffff;
                iStack_d24 = 0;
                uStack_d20 = 0;
                iVar15 = 0;
                uStack_d30 = pppppuVar26;
                if (*(int *)(pppppuVar12 + 5) != 0) {
                  FUN_1449c0562(&local_d38);
                  iVar15 = *(int *)(pppppuVar12 + 5);
                }
                local_c90 = CONCAT44(iStack_d24,uStack_d28);
                local_c88 = uStack_d20;
                local_c84 = iStack_d1c;
                uStack_ca0 = (uint *)local_d38;
                local_c98 = uStack_d30;
                local_ca8 = pppppuVar12;
                if ((iStack_d24 != iVar15) || (uStack_d30 != pppppuVar26)) {
                  local_da0 = local_d98 + 7;
                  plVar28 = local_db0;
                  iVar10 = iStack_d24;
                  do {
                    local_cac = *(uint *)((longlong)*local_ca8 + (longlong)iVar10 * 0xc);
                    if (((ulonglong)local_da8 & 1) != 0) {
                      if ((int)uStack_790 != local_768._4_4_) {
                        ppuVar20 = local_758;
                        if (local_758 == (uint **)0x0) {
                          ppuVar20 = &local_760;
                        }
                        for (iVar10 = *(int *)((longlong)ppuVar20 +
                                              (ulonglong)((int)local_750 - 1U & local_cac) * 4);
                            iVar10 != -1; iVar10 = *(int *)(local_798 + (longlong)iVar10 * 2 + 1)) {
                          if (*(uint *)(local_798 + (longlong)iVar10 * 2) == local_cac)
                          goto LAB_146c71b95;
                        }
                      }
                    }
                    local_cb8 = (undefined1 **)
                                (*local_d90)[2][local_cac >> 9]
                                [(ulonglong)(local_cac & 0x1ff) * 3 + 2];
                    ppuVar4 = (*local_d90)[2][local_cac >> 9] + (ulonglong)(local_cac & 0x1ff) * 3;
                    local_cc8 = (undefined1 ***)*ppuVar4;
                    ppuStack_cc0 = (undefined1 **)ppuVar4[1];
                    uStack_d30 = (undefined1 *****)local_bcc;
                    local_d38 = (undefined1 *****)&LAB_146c80466;
                    local_bc8 = (undefined1 ****)&LAB_142981e2e;
                    pppppuStack_bc0 = (undefined1 *****)local_858;
                    local_dc0 = &local_d38;
                    local_dc8 = (undefined1 *****)&local_bc8;
                    local_858 = (undefined1  [8])&local_cc8;
                    local_850 = pppppuVar13;
                    FUN_146c80058(&local_828,local_cd8,&local_cc8);
                    local_cdc = local_cd8[0];
                    if ((ulonglong)local_cd8[0] == 0xffffffff) {
LAB_146c71d4c:
                      local_840 = (double)plVar28[0x18];
                      local_848 = (double)local_cb8 - local_840;
                      local_850 = (undefined1 *****)((double)ppuStack_cc0 - local_840);
                      local_858 = (undefined1  [8])((double)local_cc8 - local_840);
                      local_830 = (double)local_cb8 + local_840;
                      local_838 = (double)ppuStack_cc0 + local_840;
                      local_840 = local_840 + (double)local_cc8;
                      bVar40 = (longlong)uStack_c70 < 0;
                      uStack_c70 = uStack_c70 & 0xffffffff00000000;
                      if (bVar40) {
                        FUN_14481578e(&local_c78,0);
                      }
                      FUN_146c88a30(&local_b18,local_858,&local_c78);
                      local_ce8 = local_cb8;
                      local_cf8 = local_cc8;
                      ppuStack_cf0 = ppuStack_cc0;
                      uVar30 = FUN_146c72e58(plVar28,pppppuVar13,&local_c78);
                      if (uVar30 != 0xffffffff) {
                        uVar41 = *(ulonglong *)
                                  ((longlong)pppppuVar13[0x38][uVar30 >> 9] +
                                  (ulonglong)((uVar30 & 0x1ff) << 4));
                        pppuVar18 = pppppuVar13[2][uVar41 >> 9 & 0x7fffff];
                        uVar36 = uVar41 & 0x1ff;
                        if (dVar47 < ((double)local_cb8 - (double)pppuVar18[uVar36 * 3 + 2]) *
                                     ((double)local_cb8 - (double)pppuVar18[uVar36 * 3 + 2]) +
                                     ((double)local_cc8 - (double)pppuVar18[uVar36 * 3]) *
                                     ((double)local_cc8 - (double)pppuVar18[uVar36 * 3]) +
                                     ((double)ppuStack_cc0 - (double)pppuVar18[uVar36 * 3 + 1]) *
                                     ((double)ppuStack_cc0 - (double)pppuVar18[uVar36 * 3 + 1])) {
                          pppuVar18 = pppppuVar13[2][uVar41 >> 0x29];
                          uVar41 = uVar41 >> 0x20 & 0x1ff;
                          if (dVar47 < ((double)local_cb8 - (double)pppuVar18[uVar41 * 3 + 2]) *
                                       ((double)local_cb8 - (double)pppuVar18[uVar41 * 3 + 2]) +
                                       ((double)local_cc8 - (double)pppuVar18[uVar41 * 3]) *
                                       ((double)local_cc8 - (double)pppuVar18[uVar41 * 3]) +
                                       ((double)ppuStack_cc0 - (double)pppuVar18[uVar41 * 3 + 1]) *
                                       ((double)ppuStack_cc0 - (double)pppuVar18[uVar41 * 3 + 1])) {
                            local_d38 = (undefined1 *****)CONCAT44(0xffffffff,(undefined4)local_d38)
                            ;
                            uStack_d30 = (undefined1 *****)0xffffffffffffffff;
                            uStack_d28 = 0xffffffff;
                            iStack_d24 = -1;
                            uStack_d20 = 0xffffffff;
                            local_d18 = (undefined1 ****)CONCAT44(0xffffffff,(uint)local_d18);
                            uStack_d10 = (undefined1 **)0xffffffffffffffff;
                            uStack_d08 = 0xffffffff;
                            local_d04 = 0xffffffff;
                            local_d80 = (ulonglong)(uVar30 >> 9);
                            local_d40 = (ulonglong)(uVar30 & 0x1ff);
                            iVar10 = (*(code *)(*pppppuVar13)[6])(pppppuVar13,uVar30,&local_d38);
                            dVar47 = local_d48;
                            if (iVar10 == 0) {
                              local_bc8 = (undefined1 ****)&local_d18;
                              local_d78 = uVar30;
                              pppppuStack_bc0 = (undefined1 *****)&local_cac;
                              FUN_140263e2a(local_d98,local_bcc,&local_bc8,0);
                              uVar30 = (uint)local_d18;
                              cVar8 = FUN_146bfed03(&local_cc8);
                              ppvVar1 = local_d88;
                              if (cVar8 != '\0') {
                                pppuVar18 = pppppuVar13[2][uVar30 >> 9];
                                uVar41 = (ulonglong)(uVar30 & 0x1ff);
                                pppuVar18[uVar41 * 3 + 2] = local_cb8;
                                pppuVar18 = pppuVar18 + uVar41 * 3;
                                *pppuVar18 = (undefined1 **)local_cc8;
                                pppuVar18[1] = ppuStack_cc0;
                                if (*(char *)(pppppuVar13 + 0x42) == '\x01') {
                                  LOCK();
                                  *(int *)((longlong)pppppuVar13 + 0x214) =
                                       *(int *)((longlong)pppppuVar13 + 0x214) + 1;
                                  UNLOCK();
                                }
                              }
                              iVar10 = *(int *)(local_d88 + 1);
                              *(uint *)(local_d88 + 1) = iVar10 + 1U;
                              if (*(uint *)((longlong)local_d88 + 0xc) < iVar10 + 1U) {
                                FUN_1446f48e2(local_d88,iVar10);
                              }
                              *(uint *)((longlong)*ppvVar1 + (longlong)iVar10 * 4) =
                                   uStack_d10._4_4_;
                              uVar41 = (ulonglong)(uint)((int)local_d40 << 4);
                              uVar30 = *(uint *)((longlong)pppppuVar13[0x38][local_d80] + uVar41);
                              uVar22 = *(uint *)((longlong)pppppuVar13[0x38][local_d80] + uVar41 + 4
                                                );
                              pppuVar18 = pppppuVar13[2][uVar30 >> 9];
                              uVar41 = (ulonglong)uVar30 & 0x1ff;
                              ppppuVar44 = (undefined1 ****)pppuVar18[uVar41 * 3];
                              ppuVar4 = pppuVar18[uVar41 * 3 + 1];
                              ppuVar5 = pppuVar18[uVar41 * 3 + 2];
                              pppuVar18 = pppppuVar13[2][uVar22 >> 9];
                              uVar41 = (ulonglong)uVar22 & 0x1ff;
                              local_bc8 = (undefined1 ****)pppuVar18[uVar41 * 3];
                              pppppuStack_bc0 = (undefined1 *****)pppuVar18[uVar41 * 3 + 1];
                              local_bb8 = pppuVar18[uVar41 * 3 + 2];
                              local_bb0 = ppppuVar44;
                              if ((double)ppppuVar44 <= (double)local_bc8) {
                                local_bb0 = local_bc8;
                                local_bc8 = ppppuVar44;
                              }
                              local_ba8 = (undefined1 *****)ppuVar4;
                              if ((double)ppuVar4 <= (double)pppppuStack_bc0) {
                                local_ba8 = pppppuStack_bc0;
                                pppppuStack_bc0 = (undefined1 *****)ppuVar4;
                              }
                              local_ba0 = ppuVar5;
                              if ((double)ppuVar5 <= (double)local_bb8) {
                                local_ba0 = local_bb8;
                                local_bb8 = ppuVar5;
                              }
                              FUN_146c87142(&local_b18,local_d78,&local_bc8,0xffffffff);
                              uVar41 = (ulonglong)((uStack_d10._4_4_ & 0x1ff) << 4);
                              uVar30 = *(uint *)((longlong)pppppuVar13[0x38][uStack_d10._4_4_ >> 9]
                                                + uVar41);
                              uVar22 = *(uint *)((longlong)pppppuVar13[0x38][uStack_d10._4_4_ >> 9]
                                                + uVar41 + 4);
                              pppuVar18 = pppppuVar13[2][uVar30 >> 9];
                              uVar41 = (ulonglong)uVar30 & 0x1ff;
                              ppppuVar44 = (undefined1 ****)pppuVar18[uVar41 * 3];
                              pppppuVar33 = (undefined1 *****)pppuVar18[uVar41 * 3 + 1];
                              ppuVar4 = pppuVar18[uVar41 * 3 + 2];
                              pppuVar18 = pppppuVar13[2][uVar22 >> 9];
                              uVar41 = (ulonglong)uVar22 & 0x1ff;
                              local_bc8 = (undefined1 ****)pppuVar18[uVar41 * 3];
                              pppppuStack_bc0 = (undefined1 *****)pppuVar18[uVar41 * 3 + 1];
                              local_bb8 = pppuVar18[uVar41 * 3 + 2];
                              local_bb0 = ppppuVar44;
                              if ((double)ppppuVar44 <= (double)local_bc8) {
                                local_bb0 = local_bc8;
                                local_bc8 = ppppuVar44;
                              }
                              local_ba8 = pppppuVar33;
                              if ((double)pppppuVar33 <= (double)pppppuStack_bc0) {
                                local_ba8 = pppppuStack_bc0;
                                pppppuStack_bc0 = pppppuVar33;
                              }
                              local_ba0 = ppuVar4;
                              if ((double)ppuVar4 <= (double)local_bb8) {
                                local_ba0 = local_bb8;
                                local_bb8 = ppuVar4;
                              }
                              FUN_146c86256(&local_b18,uStack_d10._4_4_,&local_bc8);
                              plVar28 = local_db0;
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (*(int *)(local_d98 + 1) != *(int *)((longlong)local_d98 + 0x34)) {
                        pppppuVar33 = (undefined1 *****)local_d98[8];
                        if ((undefined1 *****)local_d98[8] == (undefined1 *****)0x0) {
                          pppppuVar33 = local_da0;
                        }
                        iVar10 = *(int *)((longlong)pppppuVar33 +
                                         (ulonglong)(*(int *)(local_d98 + 9) - 1U & local_cd8[0]) *
                                         4);
                        if (iVar10 != -1) {
                          do {
                            ppppuVar44 = *local_d98 + (longlong)iVar10 * 2;
                            if (*(uint *)(*local_d98 + (longlong)iVar10 * 2) == local_cd8[0]) {
                              if ((uint *)((longlong)ppppuVar44 + 4) != (uint *)0x0 &&
                                  ppppuVar44 != (undefined1 ****)0x0) {
                                pppuVar18 = pppppuVar13[2][local_cd8[0] >> 9];
                                uVar41 = (ulonglong)local_cd8[0] & 0x1ff;
                                uVar30 = *(uint *)((longlong)ppppuVar44 + 4);
                                ppuVar4 = (*local_d90)[2][uVar30 >> 9];
                                uVar36 = (ulonglong)uVar30 & 0x1ff;
                                if (local_cd0 <
                                    ((double)pppuVar18[uVar41 * 3 + 2] -
                                    (double)ppuVar4[uVar36 * 3 + 2]) *
                                    ((double)pppuVar18[uVar41 * 3 + 2] -
                                    (double)ppuVar4[uVar36 * 3 + 2]) +
                                    ((double)pppuVar18[uVar41 * 3] - (double)ppuVar4[uVar36 * 3]) *
                                    ((double)pppuVar18[uVar41 * 3] - (double)ppuVar4[uVar36 * 3]) +
                                    ((double)pppuVar18[uVar41 * 3 + 1] -
                                    (double)ppuVar4[uVar36 * 3 + 1]) *
                                    ((double)pppuVar18[uVar41 * 3 + 1] -
                                    (double)ppuVar4[uVar36 * 3 + 1])) {
                                  local_d38 = (undefined1 *****)&local_cdc;
                                  local_d80 = (ulonglong)(uVar30 >> 9);
                                  uStack_d30 = (undefined1 *****)&local_cac;
                                  FUN_140263e2a(local_d98,&local_bc8,&local_d38,0);
                                  ppuVar4 = (*local_d90)[2][local_d80] + uVar36 * 3;
                                  local_cc8 = (undefined1 ***)*ppuVar4;
                                  ppuStack_cc0 = (undefined1 **)ppuVar4[1];
                                  local_cb8 = (undefined1 **)
                                              (*local_d90)[2][local_d80][uVar36 * 3 + 2];
                                  local_cac = uVar30;
                                }
                                local_cdc = 0xffffffff;
                                plVar28 = local_db0;
                                goto LAB_146c71d4c;
                              }
                              break;
                            }
                            iVar10 = *(int *)(ppppuVar44 + 1);
                          } while (iVar10 != -1);
                        }
                      }
                      local_d38 = (undefined1 *****)&local_cdc;
                      uStack_d30 = (undefined1 *****)&local_cac;
                      FUN_140263e2a(local_d98,&local_bc8,&local_d38,0);
                      if (local_cdc == 0xffffffff) goto LAB_146c71d4c;
                    }
LAB_146c71b95:
                    local_c90 = CONCAT44(local_c90._4_4_,(uint)local_c90 & ~uStack_ca0._4_4_);
                    FUN_1449c0562(&uStack_ca0);
                    iVar10 = local_c90._4_4_;
                  } while (local_ca8 != pppppuVar12 ||
                           (local_c98 != pppppuVar26 || local_c90._4_4_ != iVar15));
                }
                local_da8 = local_d98 + 2;
                local_bc8 = (undefined1 ****)&DAT_100000000;
                local_bb8 = (undefined1 **)0xffffffff;
                local_bb0 = (undefined1 ****)((ulonglong)local_bb0 & 0xffffffff00000000);
                iVar15 = 0;
                pppppuStack_bc0 = local_da8;
                if (*(int *)(local_d98 + 5) != 0) {
                  FUN_1449c0562(&local_bc8);
                  iVar15 = *(int *)(local_d98 + 5);
                }
                uStack_d20 = (uint)local_bb8;
                iStack_d1c = (int)((ulonglong)local_bb8 >> 0x20);
                local_d18 = local_bb0;
                uStack_d30 = (undefined1 *****)local_bc8;
                uStack_d28 = SUB84(pppppuStack_bc0,0);
                iStack_d24 = (int)((ulonglong)pppppuStack_bc0 >> 0x20);
                local_d38 = local_d98;
                if ((iStack_d1c != iVar15) || (pppppuStack_bc0 != local_da8)) {
                  do {
                    ppppuVar44 = *local_d38;
                    lVar17 = (longlong)iStack_d1c;
                    ppppuVar7 = *local_d90;
                    uVar41 = (ulonglong)(*(uint *)(ppppuVar44 + lVar17 * 2) & 0x1ff);
                    local_bb8 = pppppuVar13[2][*(uint *)(ppppuVar44 + lVar17 * 2) >> 9]
                                [uVar41 * 3 + 2];
                    pppuVar18 = pppppuVar13[2][*(uint *)(ppppuVar44 + lVar17 * 2) >> 9] + uVar41 * 3
                    ;
                    local_bc8 = (undefined1 ****)*pppuVar18;
                    pppppuStack_bc0 = (undefined1 *****)pppuVar18[1];
                    uVar30 = *(uint *)((longlong)ppppuVar44 + lVar17 * 0x10 + 4);
                    cVar8 = FUN_146bfed03(&local_bc8);
                    if (cVar8 != '\0') {
                      ppuVar4 = ppppuVar7[2][uVar30 >> 9];
                      uVar41 = (ulonglong)(uVar30 & 0x1ff);
                      ppuVar4[uVar41 * 3 + 2] = (undefined1 *)local_bb8;
                      ppuVar4 = ppuVar4 + uVar41 * 3;
                      *ppuVar4 = (undefined1 *)local_bc8;
                      ppuVar4[1] = (undefined1 *)pppppuStack_bc0;
                      if (*(char *)(ppppuVar7 + 0x42) == '\x01') {
                        LOCK();
                        *(int *)((longlong)ppppuVar7 + 0x214) =
                             *(int *)((longlong)ppppuVar7 + 0x214) + 1;
                        UNLOCK();
                      }
                    }
                    local_858 = (undefined1  [8])ppppuVar44[lVar17 * 2];
                    local_bc8 = local_d70;
                    pppppuStack_bc0 = local_d68;
                    FUN_140263e2a(local_708 + 2,&local_ca8,&local_bc8);
                    uStack_d20 = uStack_d20 & ~uStack_d30._4_4_;
                    FUN_1449c0562(&uStack_d30);
                  } while (local_d38 != local_d98 ||
                           ((undefined1 *****)CONCAT44(iStack_d24,uStack_d28) != local_da8 ||
                           iStack_d1c != iVar15));
                }
                if (local_c78 != 0) {
                  FUN_1400020a8();
                }
                FUN_145820e5c(&local_b18);
                uVar14 = FUN_146be6294(&local_828);
                plVar28 = local_db0;
                local_da8 = (undefined1 *****)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                local_d68 = (undefined1 *****)(local_858 + 4);
                pppppuVar26 = &local_748;
                pppppuVar12 = local_5d8;
                local_d90 = (undefined1 *****)(local_328 + 1);
                local_d70 = (undefined1 ****)local_858;
                local_da0 = (undefined1 *****)&local_628;
                local_d88 = &local_588;
                pppppuVar13 = (undefined1 *****)local_328;
                uVar14 = 0;
                local_d98 = pppppuVar26;
              } while ((local_d74 & 1) != 0);
              lVar17 = -0xa0;
              do {
                *(undefined4 *)(pppppuVar26 + 9) = 0;
                if (pppppuVar26[8] != (undefined1 ****)0x0) {
                  FUN_1400020a8();
                }
                FUN_144a6bfa8(pppppuVar26);
                pppppuVar26 = pppppuVar26 + -10;
                lVar17 = lVar17 + 0x50;
              } while (lVar17 != 0);
            }
            puVar29 = (undefined8 *)0x0;
            if ((char)plVar28[0x1e] == '\x01') {
              local_dc8 = (undefined1 *****)(local_708 + 2);
              FUN_146c730d0(plVar28,local_c64,local_328,&local_588);
            }
            pppppuVar12 = local_328[1];
            if ((int)plVar28[0x17] == 1) {
              local_b18 = (undefined1 *****)0x0;
              uStack_b10 = (undefined8 *)0x0;
              uVar22 = *(int *)(local_328[1] + 0x28) * 0x200 +
                       *(int *)((longlong)local_328[1] + 0x144);
              uVar30 = 0;
              if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)*local_328[1][0x29] - 1U))) {
                uVar32 = 1;
                uVar24 = 1;
                if (1 < (int)uVar22) {
                  uVar24 = uVar22;
                }
                do {
                  uVar23 = uVar32;
                  uVar30 = uVar24;
                  if (uVar24 == uVar23) break;
                  uVar32 = uVar23 + 1;
                  uVar30 = uVar23;
                } while (0xfffd < (ushort)(*(short *)((longlong)local_328[1][0x29][uVar23 >> 9] +
                                                     (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
              }
              if (uVar30 != uVar22) {
                do {
                  puVar29 = uStack_b10;
                  lVar17 = (longlong)(int)uStack_b10;
                  uVar32 = (int)uStack_b10 + 1;
                  uStack_b10 = (undefined8 *)CONCAT44(uStack_b10._4_4_,uVar32);
                  if (uStack_b10._4_4_ < uVar32) {
                    FUN_1446f48e2(&local_b18,(ulonglong)puVar29 & 0xffffffff);
                  }
                  *(uint *)((longlong)local_b18 + lVar17 * 4) = uVar30;
                  uVar32 = uVar30 + 1;
                  if ((int)(uVar30 + 1) < (int)uVar22) {
                    uVar32 = uVar22;
                  }
                  do {
                    uVar24 = uVar32;
                    if (uVar32 - 1 == uVar30) break;
                    uVar30 = uVar30 + 1;
                    uVar24 = uVar30;
                  } while (0xfffd < (ushort)(*(short *)((longlong)pppppuVar12[0x29][uVar30 >> 9] +
                                                       (ulonglong)(uVar30 & 0x1ff) * 2) - 1U));
                  uVar30 = uVar24;
                } while (uVar30 != uVar22);
              }
              local_798 = local_328[1];
              puVar29 = &local_b18;
              FUN_146bcb306(&local_798,puVar29,1);
              if (local_b18 != (undefined1 *****)0x0) {
                FUN_1400020a8();
              }
            }
            cVar8 = (**(code **)(*plVar28 + 8))(plVar28);
            pvVar6 = local_588;
            if (cVar8 == '\0') {
              if (local_c64 < 2) {
                uVar41 = CONCAT71((int7)((ulonglong)puVar29 >> 8),1);
                if ((1 < (int)plVar28[0x17] - 5U) &&
                   (ppvVar1 = (void **)(plVar28 + 0x2f), ppvVar1 != &local_588)) {
                  iVar15 = (int)uStack_580;
                  lVar17 = (longlong)(int)uStack_580;
                  *(int *)(plVar28 + 0x30) = (int)uStack_580;
                  if ((int)uStack_580 == 0 && *(int *)((longlong)plVar28 + 0x184) == 0) {
                    *(undefined4 *)((longlong)local_db0 + 0x184) = 0;
                    plVar28 = local_db0;
                  }
                  else {
                    FUN_144a06ca8(ppvVar1,uStack_580 & 0xffffffff);
                    plVar28 = local_db0;
                    if (iVar15 != 0) {
                      memcpy(*ppvVar1,pvVar6,lVar17 << 2);
                      plVar28 = local_db0;
                    }
                  }
                }
              }
              else {
                local_798 = (undefined1 *****)plVar28[0x24];
                local_af8 = (longlong *)0x0;
                local_af0._0_4_ = 0;
                local_b18 = (undefined1 *****)0x0;
                uStack_b10 = (undefined8 *)0x0;
                local_af0._4_4_ = 0x80;
                local_ae8._0_4_ = 0xffffffff;
                local_ae8._4_4_ = 0;
                local_ad8 = (undefined1 *****)0x0;
                local_ad0 = (double)((ulonglong)local_ad0 & 0xffffffff00000000);
                local_aa8 = 0;
                local_aa0 = 0;
                local_ac8 = 0;
                uStack_ac0 = 0;
                local_a9c = 0xffffffff00000080;
                local_a94 = 0;
                local_a88 = 0;
                local_a80 = 0;
                local_a78 = 0x101;
                local_a50 = 0;
                local_a48 = 0;
                local_a70 = 0;
                uStack_a68 = 0;
                local_a44 = 0xffffffff00000080;
                local_a3c = 0;
                local_a30 = 0;
                local_a28 = 0;
                local_a00 = 0;
                local_9f8 = 0;
                local_a20 = 0;
                uStack_a18 = 0;
                local_9f4 = 0xffffffff00000080;
                local_9ec = 0;
                local_9e0 = 0;
                local_9d8 = 0;
                local_9d0 = 0x101;
                local_9a8 = 0;
                local_9a0 = 0;
                local_9c8 = 0;
                uStack_9c0 = 0;
                local_99c = 0xffffffff00000080;
                local_994 = 0;
                local_988 = 0;
                local_980 = 0;
                local_958 = 0;
                local_950 = 0;
                local_978 = 0;
                uStack_970 = 0;
                local_94c = 0xffffffff00000080;
                local_944 = 0;
                local_938 = 0;
                local_930 = 0;
                local_928 = 0x101;
                local_900 = 0;
                local_8f8 = 0;
                local_920 = 0;
                uStack_918 = 0;
                local_8f4 = 0xffffffff00000080;
                local_8ec = 0;
                local_8e0 = 0;
                local_8d8 = 0;
                local_8b0 = 0;
                local_8a8 = 0;
                local_8d0 = 0;
                uStack_8c8 = 0;
                local_8a4 = 0xffffffff00000080;
                local_89c = 0;
                local_890 = 0;
                local_888 = 0;
                local_880 = 0x101;
                local_878 = 0;
                uStack_870 = 0;
                local_868 = 0;
                uStack_860 = 0;
                local_dc8 = local_b58;
                local_b58[0] = (undefined1 ****)0x0;
                local_b48 = 0;
                local_b98 = 0;
                local_b88 = 0;
                local_dc0 = (undefined8 *)((ulonglong)local_dc0 & 0xffffffffffffff00);
                FUN_146bcbbdc(&local_798,local_328[1]);
                if ((char)plVar28[0x3b] == '\x01') {
                  puVar29 = &local_978;
                  FUN_140cae46a(plVar28 + 0x3c,&local_9c8);
                  FUN_140cae46a(plVar28 + 0x46,puVar29);
                  *(undefined2 *)(plVar28 + 0x50) = local_928;
                }
                pvVar6 = local_588;
                if (*(char *)((longlong)plVar28 + 0xe1) == '\x01') {
                  local_dc8 = (undefined1 *****)(local_708 + 2);
                  uVar30 = FUN_146c74188(plVar28,&local_b18,local_328,&local_588);
                  uVar41 = (ulonglong)uVar30;
                }
                else {
                  local_da8 = (undefined1 *****)(plVar28 + 0x2f);
                  if (local_da8 != &local_588) {
                    iVar15 = (int)uStack_580;
                    puVar29 = (undefined8 *)(longlong)(int)uStack_580;
                    *(int *)(plVar28 + 0x30) = (int)uStack_580;
                    if ((int)uStack_580 == 0 && *(int *)((longlong)plVar28 + 0x184) == 0) {
                      *(undefined4 *)((longlong)plVar28 + 0x184) = 0;
                    }
                    else {
                      FUN_144a06ca8(local_da8,uStack_580 & 0xffffffff);
                      if (iVar15 != 0) {
                        puVar29 = (undefined8 *)((longlong)puVar29 << 2);
                        memcpy(*local_da8,pvVar6,(size_t)puVar29);
                      }
                    }
                  }
                  pvVar6 = local_578;
                  lVar17 = (longlong)(int)uStack_570;
                  uVar41 = CONCAT71((int7)((ulonglong)puVar29 >> 8),1);
                  if (lVar17 != 0) {
                    lVar16 = 0;
                    do {
                      uVar30 = *(uint *)((longlong)pvVar6 + lVar16);
                      if ((-1 < (int)uVar30) &&
                         ((int)uVar30 <
                          *(int *)(local_328[1] + 0x3a) * 0x200 +
                          *(int *)((longlong)local_328[1] + 0x1d4))) {
                        if ((ushort)(*(short *)((longlong)local_328[1][0x3b][uVar30 >> 9] +
                                               (ulonglong)(uVar30 & 0x1ff) * 2) - 1U) < 0xfffe) {
                          uVar36 = *(ulonglong *)
                                    ((longlong)local_328[1][0x38][uVar30 >> 9] +
                                    (ulonglong)((uVar30 & 0x1ff) << 4));
                          lVar39 = plVar28[0x24];
                          uVar9 = FUN_146bcd1d8(&local_b18,uVar36 >> 0x20);
                          uVar11 = FUN_146bcd1d8(&local_b18,uVar36 & 0xffffffff);
                          uVar9 = FUN_146c061e0(lVar39,uVar11,uVar9);
                          iVar15 = (int)plVar28[0x30];
                          *(uint *)(plVar28 + 0x30) = iVar15 + 1U;
                          if (*(uint *)((longlong)plVar28 + 0x184) < iVar15 + 1U) {
                            FUN_1446f48e2(local_da8,iVar15);
                          }
                          *(undefined4 *)((longlong)*local_da8 + (longlong)iVar15 * 4) = uVar9;
                          plVar28 = local_db0;
                        }
                      }
                      lVar16 = lVar16 + 4;
                    } while (lVar17 * 4 != lVar16);
                  }
                }
                FUN_146bfdcfe(&local_b18);
              }
              if ((*(char *)((longlong)plVar28 + 0xe2) == '\x01') &&
                 (lVar17 = local_db0[0x30], (longlong)(int)lVar17 != 0)) {
                lVar16 = local_db0[0x2f];
                plVar28 = local_db0 + 0x31;
                lVar39 = 0;
                do {
                  local_b18 = (undefined1 *****)
                              CONCAT44(local_b18._4_4_,*(undefined4 *)(lVar16 + lVar39));
                  FUN_1447cbafe(plVar28,&local_798,&local_b18,0);
                  lVar39 = lVar39 + 4;
                } while ((longlong)(int)lVar17 * 4 != lVar39);
              }
              plVar19 = local_d60;
              plVar28 = local_db0;
              if ((char)local_db0[0x1c] == '\x01') {
                FUN_146c3cd49(local_db0[0x24],local_d60,0);
                *plVar19 = 0;
                plVar19[1] = 0;
                plVar19[2] = 0;
                plVar28[0x28] = 0x3ff0000000000000;
                local_d58[2] = DAT_14c8464f0;
                lVar17 = DAT_14c8464e8;
                *local_d58 = DAT_14c8464e0;
                local_d58[1] = lVar17;
                local_d50[2] = DAT_14c846520;
                dVar47 = DAT_14c846518;
                *local_d50 = DAT_14c846510;
                local_d50[1] = dVar47;
              }
            }
            else {
              uVar41 = 0;
            }
            local_6b0 = 0;
            if (local_6b8 != 0) {
              FUN_1400020a8();
            }
            FUN_144a6bfa8(local_708 + 2);
          }
          lVar17 = -0xa0;
          puVar34 = (undefined1 *)local_5d8;
          do {
            *(undefined4 *)(puVar34 + 0x48) = 0;
            if (*(longlong *)(puVar34 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1447a082e(puVar34);
            puVar34 = puVar34 + 0xffffffffffffffb0;
            lVar17 = lVar17 + 0x50;
          } while (lVar17 != 0);
          lVar17 = 0x20;
          do {
            if (*(longlong *)((longlong)local_598 + lVar17) != 0) {
              FUN_1400020a8();
            }
            lVar17 = lVar17 + -0x10;
          } while (lVar17 != 0);
        }
      }
      FUN_146c74d9e(&local_568);
    }
    else {
      uVar41 = 0;
    }
    FUN_146c74de8(local_c60);
    lVar17 = 0xd0;
    do {
      FUN_1457e5b52((longlong)local_4c8 + lVar17);
      lVar17 = lVar17 + -0xd0;
    } while (lVar17 != -0xd0);
  }
  else {
    uVar41 = 0;
  }
  FUN_141082778(local_328 + 3);
  if ((local_f0 ^ (ulonglong)local_de8) == DAT_14c707940) {
    return uVar41 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c72bca FUN_146c72bca body=421 status=ok
// SIG undefined FUN_146c72bca(void)

double * FUN_146c72bca(double *param_1,double *param_2,longlong param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_b8 [32];
  double *local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_2[2] * *(double *)(param_3 + 0x48);
  local_70 = param_2[1] * *(double *)(param_3 + 0x40);
  local_78 = *param_2 * *(double *)(param_3 + 0x38);
  FUN_146bed047(&local_60,param_3);
  dVar5 = local_50 + *(double *)(param_3 + 0x30);
  dVar6 = local_58 + *(double *)(param_3 + 0x28);
  dVar7 = local_60 + *(double *)(param_3 + 0x20);
  *param_1 = dVar7;
  param_1[1] = dVar6;
  param_1[2] = dVar5;
  param_1[3] = dVar7;
  param_1[4] = dVar6;
  param_1[5] = dVar5;
  uVar4 = 1;
  local_98 = param_2 + 3;
  do {
    pdVar1 = param_2;
    if (((uVar4 >> 1 ^ uVar4) & 1) != 0) {
      pdVar1 = local_98;
    }
    pdVar2 = param_2 + 4;
    if ((uVar4 & 2) == 0) {
      pdVar2 = param_2 + 1;
    }
    pdVar3 = param_2 + 5;
    if (uVar4 < 4) {
      pdVar3 = param_2 + 2;
    }
    local_68 = *pdVar3 * *(double *)(param_3 + 0x48);
    local_70 = *pdVar2 * *(double *)(param_3 + 0x40);
    local_78 = *pdVar1 * *(double *)(param_3 + 0x38);
    FUN_146bed047(&local_60,param_3,&local_78);
    local_80 = local_50 + *(double *)(param_3 + 0x30);
    local_88 = local_58 + *(double *)(param_3 + 0x28);
    local_90 = local_60 + *(double *)(param_3 + 0x20);
    FUN_146ba5262(param_1,&local_90);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c72d70 FUN_146c72d70 body=230 status=ok
// SIG undefined FUN_146c72d70(void)

void FUN_146c72d70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_146c76422();
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = true;
  lVar4 = 0;
  do {
    FUN_146c74ef6(local_128,*(undefined8 *)(param_1 + lVar4 * 8),*(undefined8 *)(param_1 + 0x10));
    FUN_146c74f84(local_128,param_2,lVar4);
    FUN_146c75472(local_128);
    FUN_146c75826(local_128);
    lVar3 = lVar4 * 0x10 + param_1 + 0x20;
    lVar4 = param_1 + 0x40 + lVar4 * 0x10;
    if (*(char *)(param_1 + 0x1a) == '\0') {
      lVar3 = 0;
      lVar4 = 0;
    }
    FUN_146c75d1a(local_128,lVar3,lVar4);
    FUN_146c76398(local_128);
    if (!bVar2) break;
    lVar4 = 1;
    bVar2 = false;
  } while (cVar1 != '\0');
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c72e58 FUN_146c72e58 body=631 status=ok
// SIG undefined FUN_146c72e58(void)

uint FUN_146c72e58(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = param_3[1];
  if ((longlong)(int)lVar7 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    lVar4 = *param_3;
    uVar9 = 0xffffffff;
    lVar10 = 0;
    dVar6 = *(double *)(param_1 + 0xc0) * *(double *)(param_1 + 0xc0);
    do {
      uVar3 = *(uint *)(lVar4 + lVar10);
      uVar8 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
               (ulonglong)((uVar3 & 0x1ff) << 4));
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar8 >> 9 & 0x7fffff) * 8);
      uVar11 = uVar8 & 0x1ff;
      dVar15 = *(double *)(lVar5 + uVar11 * 0x18);
      dVar1 = *(double *)(lVar5 + 8 + uVar11 * 0x18);
      dVar2 = *(double *)(lVar5 + 0x10 + uVar11 * 0x18);
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar8 >> 0x29) * 8);
      uVar8 = uVar8 >> 0x20 & 0x1ff;
      dVar12 = *(double *)(lVar5 + uVar8 * 0x18);
      dVar13 = *(double *)(lVar5 + 8 + uVar8 * 0x18);
      dVar14 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
      local_e0 = (dVar2 + dVar14) * 0.5;
      local_e8 = (dVar1 + dVar13) * 0.5;
      local_f0 = (dVar15 + dVar12) * 0.5;
      dVar14 = dVar14 - dVar2;
      dVar13 = dVar13 - dVar1;
      dVar12 = dVar12 - dVar15;
      dVar15 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
      local_d8 = 0.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c0 = 0.0;
      if (0.0 < dVar15) {
        local_c8 = 1.0 / dVar15;
        local_d8 = dVar12 * local_c8;
        local_d0 = dVar13 * local_c8;
        local_c8 = dVar14 * local_c8;
        local_c0 = dVar15 * 0.5;
      }
      dVar15 = (double)FUN_146c7eea6(&local_f0,param_4,local_b8);
      if (dVar6 <= dVar15) {
        dVar15 = dVar6;
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
      lVar10 = lVar10 + 4;
      dVar6 = dVar15;
    } while ((longlong)(int)lVar7 * 4 != lVar10);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c730d0 FUN_146c730d0 body=4279 status=ok
// SIG undefined FUN_146c730d0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c730d0(longlong param_1,uint param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 *puVar6;
  double dVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  byte *pbVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 local_3f8 [32];
  code **local_3d8;
  longlong **local_3d0;
  uint local_3c8;
  code **local_3c0;
  double *local_3b8;
  undefined1 local_3b0;
  undefined1 local_3a8;
  undefined1 local_3a0;
  undefined1 local_398;
  float local_390;
  undefined1 local_388;
  float local_380;
  byte local_376 [2];
  uint local_374;
  ulonglong local_370;
  longlong local_368;
  uint *local_360;
  uint *local_358;
  int local_34c;
  longlong *local_348;
  int local_33c;
  ulonglong local_338;
  uint *local_330;
  uint local_324;
  ulonglong local_320;
  uint *local_318;
  longlong *local_310;
  longlong *local_308;
  longlong local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  uint *local_2e8;
  code *local_2e0;
  code **local_2d8;
  uint local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined8 local_2b8 [2];
  code *local_2a8;
  undefined4 *local_2a0;
  undefined8 local_298;
  longlong **local_290;
  undefined8 uStack_288;
  undefined8 local_280 [2];
  code *local_270;
  code **local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  uint local_248;
  undefined1 local_241;
  double local_240;
  double local_238;
  double local_230;
  code *local_228;
  double dStack_220;
  double local_218;
  longlong *local_208;
  double dStack_200;
  double local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190 [4];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 auStack_164 [8];
  uint auStack_15c [3];
  undefined8 local_150;
  uint local_148 [20];
  undefined1 local_f8 [88];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)local_3f8;
  local_374 = param_2;
  local_368 = param_1;
  local_1c0 = param_3;
  puVar6 = (undefined4 *)cos(*(double *)(param_1 + 0xf8) * 0.017453292519943295);
  lVar14 = 0x48;
  do {
    *(undefined8 *)((longlong)&local_170 + lVar14) = 0;
    *(undefined4 *)((longlong)&uStack_168 + lVar14) = 0;
    *(undefined8 *)((longlong)local_190 + lVar14) = 0;
    *(undefined8 *)((longlong)local_190 + lVar14 + 8U) = 0;
    *(undefined8 *)(auStack_164 + lVar14) = 0xffffffff00000080;
    *(undefined4 *)((longlong)auStack_15c + lVar14) = 0;
    *(undefined8 *)((longlong)local_148 + lVar14 + -8) = 0;
    *(undefined4 *)((longlong)local_148 + lVar14) = 0;
    lVar14 = lVar14 + 0x50;
  } while (lVar14 != 0xe8);
  if (0 < (int)local_374) {
    uVar30 = (ulonglong)local_374;
    puVar16 = local_148;
    lVar14 = 0;
    do {
      local_1d0 = *(undefined8 *)((longlong)param_4 + lVar14);
      local_1c8 = *(undefined4 *)((longlong)param_4 + lVar14 + 8);
      FUN_146bc855c(puVar16,&local_1d0);
      lVar14 = lVar14 + 0x10;
      puVar16 = puVar16 + 0x14;
    } while (uVar30 << 4 != lVar14);
  }
  local_308 = param_5 + 7;
  local_310 = param_4 + 2;
  local_300 = (longlong)(int)local_374;
  uVar30 = 0;
  bVar8 = true;
  local_348 = param_4;
  do {
    if (!bVar8) break;
    local_33c = (int)uVar30;
    if ((longlong)(int)param_4[1] != 0) {
      puVar26 = (uint *)*param_4;
      puVar16 = puVar26 + (int)param_4[1];
      uVar30 = uVar30 & 0xffffffff;
      local_360 = puVar16;
LAB_146c732b0:
      uVar19 = *puVar26;
      uVar17 = (ulonglong)uVar19;
      if ((-1 < (int)uVar19) &&
         (lVar14 = *local_1c0,
         (int)uVar19 < *(int *)(lVar14 + 0x1d0) * 0x200 + *(int *)(lVar14 + 0x1d4))) {
        uVar20 = (ulonglong)(uVar19 >> 9);
        uVar19 = uVar19 & 0x1ff;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + uVar20 * 8) +
                               (ulonglong)uVar19 * 2) - 1U) < 0xfffe) {
          if (*(int *)(lVar14 + 0x170) < 2) goto LAB_146c73ccb;
          local_370 = uVar30;
          local_358 = puVar26;
          local_320 = uVar17;
          if (local_374 == 2) {
            lVar4 = local_1c0[1];
            if (1 < *(int *)(lVar4 + 0x170)) {
              puVar1 = (undefined8 *)
                       (*(longlong *)(*(longlong *)(lVar14 + 0x1c0) + uVar20 * 8) +
                       (ulonglong)(uVar19 << 4));
              local_1e8 = *puVar1;
              uStack_1e0 = puVar1[1];
              local_150 = 0xffffffffffffffff;
              plVar15 = (longlong *)param_5[8];
              if ((longlong *)param_5[8] == (longlong *)0x0) {
                plVar15 = local_308;
              }
              puVar16 = local_360;
              if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
                lVar25 = param_5[9];
                lVar14 = *param_5;
                puVar28 = (uint *)&local_1e8;
                puVar27 = (uint *)&local_150;
                bVar8 = true;
                do {
                  bVar22 = bVar8;
                  iVar21 = *(int *)((longlong)plVar15 + (ulonglong)(*puVar28 & (int)lVar25 - 1U) * 4
                                   );
                  while( true ) {
                    if (iVar21 == -1) goto LAB_146c733ad;
                    lVar3 = lVar14 + (longlong)iVar21 * 0x10;
                    if (*(uint *)(lVar14 + (longlong)iVar21 * 0x10) == *puVar28) break;
                    iVar21 = *(int *)(lVar3 + 8);
                  }
                  if ((lVar3 == 0) || ((uint *)(lVar3 + 4) == (uint *)0x0)) goto LAB_146c733ad;
                  *puVar27 = *(uint *)(lVar3 + 4);
                  puVar28 = (uint *)((longlong)&local_1e8 + 4);
                  puVar27 = (uint *)((longlong)&local_150 + 4);
                  bVar8 = false;
                } while (bVar22);
                local_34c = FUN_146c061e0(lVar4,local_150 & 0xffffffff,local_150._4_4_);
                uVar30 = local_370;
                puVar26 = local_358;
                puVar16 = local_360;
                if (local_34c != -1) goto LAB_146c733f0;
              }
              goto LAB_146c733ad;
            }
            goto LAB_146c73ccb;
          }
          puVar1 = (undefined8 *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x1c0) + uVar20 * 8) +
                   (ulonglong)(uVar19 << 4));
          local_1e8 = *puVar1;
          uStack_1e0 = puVar1[1];
          local_150 = 0xffffffffffffffff;
          local_34c = -1;
LAB_146c733f0:
          iVar21 = 0;
          local_376[1] = 0;
          local_376[0] = 0;
          local_1a8 = DAT_14c8464f0;
          local_1b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_1b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_190[0] = DAT_14c8464f0;
          local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_190[3] = DAT_14c8464f0;
          local_190[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          local_190[2] = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          stack0xfffffffffffffea0 = DAT_14c8464f0;
          local_170 = (undefined4)DAT_14c8464e0;
          uStack_16c = DAT_14c8464e0._4_4_;
          uStack_168 = (undefined4)DAT_14c8464e8;
          auStack_164._0_4_ = DAT_14c8464e8._4_4_;
          pbVar18 = local_376 + 1;
          puVar16 = (uint *)&local_1e8;
          puVar26 = (uint *)&local_1b8;
          puVar28 = (uint *)&local_150;
          bVar8 = true;
          do {
            bVar22 = bVar8;
            uVar17 = (ulonglong)*puVar16;
            local_2a8 = (code *)*local_1c0;
            local_208 = (longlong *)((ulonglong)local_208 & 0xffffffffffffff00);
            local_228 = (code *)CONCAT71(local_228._1_7_,1);
            local_290 = &local_208;
            uStack_288 = &local_228;
            local_2d8 = &local_2a8;
            local_2e0 = FUN_1429805ee;
            local_2a0 = puVar6;
            local_298 = puVar26;
            FUN_146c03fd0(local_2a8,uVar17,&local_2e0);
            if ((byte)local_228 == '\0') {
              bVar9 = *pbVar18;
            }
            else {
              uVar17 = (ulonglong)*puVar28;
              if (*puVar28 == 0xffffffff) {
                bVar9 = 1;
              }
              else {
                local_298 = puVar26 + 6;
                local_2a8 = (code *)local_1c0[1];
                local_208 = (longlong *)((ulonglong)local_208 & 0xffffffffffffff00);
                local_228 = (code *)CONCAT71(local_228._1_7_,1);
                local_290 = &local_208;
                uStack_288 = &local_228;
                local_2d8 = &local_2a8;
                local_2e0 = FUN_1429805ee;
                local_2a0 = puVar6;
                FUN_146c03fd0(local_2a8,uVar17,&local_2e0);
                bVar9 = (byte)local_228;
              }
              *pbVar18 = bVar9;
            }
            iVar21 = iVar21 + (uint)bVar9;
            pbVar18 = local_376;
            puVar16 = (uint *)((longlong)&local_1e8 + 4);
            puVar26 = (uint *)(local_190 + 1);
            puVar28 = (uint *)((longlong)&local_150 + 4);
            bVar8 = false;
          } while (bVar22);
          uVar30 = local_370;
          puVar26 = local_358;
          puVar16 = local_360;
          param_4 = local_348;
          if (iVar21 != 0) {
            uVar20 = CONCAT71((int7)(uVar17 >> 8),1);
            pbVar18 = local_376 + 1;
            puVar28 = (uint *)&local_150;
            puVar27 = (uint *)&local_1e8;
            uVar17 = 0;
            lVar14 = local_368;
            do {
              puVar29 = local_148;
              if (*pbVar18 == 1) {
                local_324 = (uint)uVar20;
                uVar23 = uVar17 ^ 1;
                uVar20 = (ulonglong)*puVar27;
                lVar4 = *(longlong *)
                         (*(longlong *)(*local_1c0 + 0x10) + (ulonglong)(*puVar27 >> 9) * 8);
                pdVar2 = (double *)(lVar4 + (uVar20 & 0x1ff) * 0x18);
                local_208 = (longlong *)*pdVar2;
                dStack_200 = pdVar2[1];
                local_1f8 = *(double *)(lVar4 + 0x10 + (uVar20 & 0x1ff) * 0x18);
                uVar19 = *(uint *)((longlong)&local_1e8 + uVar23 * 4);
                local_2f0 = (ulonglong)uVar19;
                lVar4 = *(longlong *)
                         (*(longlong *)(*local_1c0 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
                pdVar2 = (double *)(lVar4 + (local_2f0 & 0x1ff) * 0x18);
                local_228 = (code *)*pdVar2;
                dStack_220 = pdVar2[1];
                local_218 = *(double *)(lVar4 + 0x10 + (local_2f0 & 0x1ff) * 0x18);
                dVar7 = local_218 - local_1f8;
                dVar31 = dStack_220 - dStack_200;
                dVar32 = (double)local_228 - (double)local_208;
                dVar33 = SQRT(dVar7 * dVar7 + dVar32 * dVar32 + dVar31 * dVar31);
                uVar30 = local_370;
                param_4 = local_348;
                if (dVar33 <= 0.0) break;
                dVar33 = 1.0 / dVar33;
                local_240 = dVar32 * dVar33;
                local_238 = dVar31 * dVar33;
                local_230 = dVar7 * dVar33;
                local_338 = uVar20;
                local_330 = puVar28;
                local_2f8 = uVar23;
                if ((int)local_374 < 1) {
                  local_241 = (code)0x1;
                  goto LAB_146c73b02;
                }
                local_2e8 = (uint *)((longlong)&local_1e8 + uVar23 * 4);
                local_318 = local_148 + (uVar23 - 2);
                plVar15 = &local_1b8 + uVar17 * 6;
                uVar30 = 0;
                do {
                  puVar16 = local_330;
                  if (uVar30 == 0) {
                    puVar16 = puVar27;
                  }
                  uVar19 = *puVar16;
                  puVar16 = local_318;
                  if (uVar30 == 0) {
                    puVar16 = local_2e8;
                  }
                  uVar13 = *puVar16;
                  local_3d0 = *(longlong ***)(lVar14 + 0x100);
                  local_3c8 = local_3c8 & 0xffffff00;
                  local_3d8 = &local_228;
                  cVar10 = FUN_146c6f0b4(local_1c0[uVar30],plVar15,uVar19,uVar13);
                  if (cVar10 != '\0') goto LAB_146c7394f;
                  iVar21 = local_34c;
                  if (uVar30 == 0) {
                    iVar21 = (int)local_320;
                  }
                  local_380 = cosf(*(float *)(local_368 + 0x114) * 0.017453292);
                  lVar14 = local_368;
                  local_388 = *(undefined1 *)(local_368 + 0x110);
                  local_390 = *(float *)(local_368 + 0x10c) * *(float *)(local_368 + 0x10c);
                  local_398 = *(undefined1 *)(local_368 + 0x10a);
                  local_3b0 = *(undefined1 *)(local_368 + 0x108);
                  local_3a0 = *(undefined1 *)(local_368 + 0x109);
                  local_3a8 = uVar30 == *(uint *)(local_368 + 0x118) ||
                              (ulonglong)*(uint *)(local_368 + 0x118) == 0xffffffff;
                  local_3b8 = &local_240;
                  local_3d0 = &local_208;
                  local_3d8 = (code **)CONCAT44(local_3d8._4_4_,uVar19);
                  local_3c8 = uVar13;
                  local_3c0 = &local_228;
                  cVar10 = FUN_146c6f1fe(local_1c0[uVar30],puVar29,puVar6,iVar21);
                  if (cVar10 != '\0') break;
                  uVar30 = uVar30 + 1;
                  puVar29 = puVar29 + 0x14;
                  plVar15 = plVar15 + 3;
                } while ((longlong)uVar30 < local_300);
                if (cVar10 == '\0') {
                  local_241 = (code)0x1;
                  param_4 = local_348;
                  if (local_374 != 2) goto LAB_146c73b02;
                  uVar19 = *local_330;
                  local_248 = *local_318;
                  uVar13 = FUN_146c061e0(local_1c0[1],uVar19);
                  param_4 = local_348;
                  uVar30 = local_370;
                  pcVar5 = (code *)local_1c0[1];
                  uVar13 = *(uint *)(*(longlong *)
                                      (*(longlong *)(pcVar5 + 0x1c0) + (ulonglong)(uVar13 >> 9) * 8)
                                     + 8 + (ulonglong)((uVar13 & 0x1ff) << 4));
                  puVar26 = local_358;
                  puVar16 = local_360;
                  if (uVar13 != 0xffffffff) {
                    lVar14 = *(longlong *)
                              (*(longlong *)(pcVar5 + 0x130) + (ulonglong)(uVar13 >> 9) * 8);
                    local_250 = *(undefined4 *)(lVar14 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
                    local_258 = *(undefined8 *)(lVar14 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
                    lVar14 = 0;
                    goto LAB_146c73a36;
                  }
                  break;
                }
LAB_146c7394f:
                uVar20 = (ulonglong)local_324;
                puVar26 = local_358;
                puVar16 = local_360;
              }
              puVar28 = (uint *)((longlong)&local_150 + 4);
              uVar17 = 1;
              pbVar18 = local_376;
              puVar27 = (uint *)((longlong)&local_1e8 + 4);
              uVar23 = uVar20 & 1;
              uVar20 = 0;
              uVar30 = local_370;
              param_4 = local_348;
            } while (uVar23 != 0);
          }
        }
      }
      goto LAB_146c733ad;
    }
LAB_146c73ccb:
    FUN_140619b9c(local_148,&local_1b8);
    if (&local_1b8 == param_4) {
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = local_1b8;
      local_1b8 = 0;
      *(undefined4 *)(param_4 + 1) = (undefined4)uStack_1b0;
      *(undefined4 *)((longlong)param_4 + 0xc) = uStack_1b0._4_4_;
    }
    FUN_140619b9c(local_f8,&local_1b8);
    if (local_310 == &local_1b8) {
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*local_310 != 0) {
        FUN_1400020a8();
      }
      param_4[2] = local_1b8;
      local_1b8 = 0;
      *(undefined4 *)(param_4 + 3) = (undefined4)uStack_1b0;
      *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_1b0._4_4_;
    }
    bVar8 = false;
  } while ((int)uVar30 != local_33c);
  lVar14 = -0xa0;
  puVar24 = local_f8;
  do {
    *(undefined4 *)(puVar24 + 0x48) = 0;
    if (*(longlong *)(puVar24 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(puVar24);
    puVar24 = puVar24 + -0x50;
    lVar14 = lVar14 + 0x50;
  } while (lVar14 != 0);
  if ((local_a0 ^ (ulonglong)local_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c73a36:
  do {
    lVar4 = lVar14 + 1;
    lVar25 = 0;
    if (lVar14 != 2) {
      lVar25 = lVar4;
    }
    uVar13 = *(uint *)((longlong)&local_258 + lVar25 * 4);
    uVar12 = *(uint *)((longlong)&local_258 + lVar14 * 4);
    if (uVar12 == uVar19) {
      if (uVar13 == local_248) {
LAB_146c740b5:
        uVar17 = (ulonglong)((int)lVar14 - 1);
        if (lVar14 == 0) {
          uVar17 = 2;
        }
        local_25c = *(undefined4 *)((longlong)&local_258 + uVar17 * 4);
        goto LAB_146c740d2;
      }
    }
    else if (uVar12 == local_248 && uVar13 == uVar19) goto LAB_146c740b5;
    lVar14 = lVar4;
  } while (lVar4 != 3);
  local_25c = 0xffffffff;
LAB_146c740d2:
  local_2a8 = (code *)&local_241;
  local_2a0 = &local_25c;
  local_298 = &local_248;
  local_290 = &local_1c0;
  local_268 = &local_2a8;
  local_270 = FUN_142981e84;
  local_2d8 = &local_270;
  local_2e0 = pcVar5;
  local_2d0 = uVar19;
  FUN_146c58f20(pcVar5 + 0xb8,uVar19,&local_2e0);
  puVar26 = local_358;
  puVar16 = local_360;
  if (((byte)local_241 & 1) != 0) {
LAB_146c73b02:
    uVar30 = local_338;
    local_2a0 = (undefined4 *)0xffffffffffffffff;
    local_280[0] = 0xffffffffffffffff;
    local_290 = (longlong **)0xffffffffffffffff;
    uStack_288 = (code **)0xffffffffffffffff;
    lVar14 = *local_1c0;
    FUN_146c12888(lVar14,&local_2e0,local_320);
    uVar19 = FUN_146c061e0(lVar14,uVar30 & 0xffffffff,(ulonglong)local_2e0 & 0xffffffff);
    iVar21 = *(int *)(*(longlong *)(*(longlong *)(lVar14 + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8) +
                      0xc + (ulonglong)((uVar19 & 0x1ff) << 4));
    local_3d8 = &local_2a8;
    iVar11 = (**(code **)(*(longlong *)*local_1c0 + 0x70))
                       ((longlong *)*local_1c0,local_2f0,uVar30 & 0xffffffff,0);
    uVar30 = local_370;
    puVar26 = local_358;
    puVar16 = local_360;
    if (iVar11 == 0) {
      if ((iVar21 == -1) &&
         (*(int *)(*(longlong *)
                    (*(longlong *)(*local_1c0 + 0x1c0) + (ulonglong)((uint)local_280[0] >> 9) * 8) +
                   0xc + (ulonglong)(((uint)local_280[0] & 0x1ff) << 4)) == -1)) {
        FUN_1447cbafe(local_148,&local_2e0,local_280,0);
      }
      iVar21 = (int)local_370;
      if (local_374 == 2) {
        uVar19 = *local_330;
        uVar13 = local_148[local_2f8 - 2];
        lVar14 = local_1c0[1];
        FUN_146c12888(lVar14,&local_2e0,local_34c);
        uVar12 = FUN_146c061e0(lVar14,uVar19,(ulonglong)local_2e0 & 0xffffffff);
        iVar21 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar14 + 0x1c0) + (ulonglong)(uVar12 >> 9) * 8) + 0xc +
                         (ulonglong)((uVar12 & 0x1ff) << 4));
        local_2d8 = (code **)0xffffffffffffffff;
        local_2c8 = 0xffffffff;
        uStack_2c4 = 0xffffffff;
        uStack_2c0 = 0xffffffff;
        iStack_2bc = -1;
        local_2b8[0] = 0xffffffffffffffff;
        local_3d8 = &local_2e0;
        iVar11 = (**(code **)(*(longlong *)local_1c0[1] + 0x70))
                           ((longlong *)local_1c0[1],uVar13,uVar19,0);
        if (iVar11 == 0) {
          if ((iVar21 == -1) &&
             (*(int *)(*(longlong *)
                        (*(longlong *)(local_1c0[1] + 0x1c0) +
                        (ulonglong)((uint)local_2b8[0] >> 9) * 8) + 0xc +
                      (ulonglong)(((uint)local_2b8[0] & 0x1ff) << 4)) == -1)) {
            FUN_1447cbafe(local_f8,&local_258,local_2b8,0);
          }
          FUN_14573a2c8(param_5,local_338);
          FUN_144a7cc9e(local_f8,local_2cc);
          FUN_144a7cc9e(local_f8,uStack_2c0);
          if (iStack_2bc != -1) {
            FUN_144a7cc9e(local_f8);
          }
        }
        iVar21 = (int)local_370;
      }
      FUN_144a7cc9e(local_148,local_298._4_4_);
      FUN_144a7cc9e(local_148,(ulonglong)uStack_288 & 0xffffffff);
      uVar30 = (ulonglong)(iVar21 + 1);
      puVar26 = local_358;
      puVar16 = local_360;
      if (uStack_288._4_4_ != -1) {
        FUN_144a7cc9e(local_148);
        puVar26 = local_358;
        puVar16 = local_360;
      }
    }
  }
LAB_146c733ad:
  puVar26 = puVar26 + 1;
  if (puVar26 == puVar16) goto LAB_146c73ccb;
  goto LAB_146c732b0;
}



// FUNCTION 146c74188 FUN_146c74188 body=3092 status=ok
// SIG undefined FUN_146c74188(void)

ulonglong FUN_146c74188(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                       longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  undefined7 uVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined4 *puVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  longlong local_198;
  ulonglong local_190;
  undefined4 local_188;
  undefined1 local_184 [4];
  ulonglong local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_140 [8];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_108;
  undefined8 local_100;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_158 = (undefined1  [16])0x0;
  puVar18 = (uint *)0x0;
  local_198 = param_2;
  if ((longlong)*(int *)(param_4 + 3) != 0) {
    lVar17 = param_4[2];
    puVar18 = (uint *)((longlong)*(int *)(param_4 + 3) * 4);
    puVar16 = (uint *)0x0;
    do {
      lVar27 = local_198;
      uVar9 = *(uint *)(lVar17 + (longlong)puVar16);
      if ((-1 < (int)uVar9) &&
         (lVar21 = *(longlong *)(param_3 + 8),
         (int)uVar9 < *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar21 + 0x1d8) + (ulonglong)(uVar9 >> 9) * 8) +
                               (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lVar21 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                    (ulonglong)((uVar9 & 0x1ff) << 4));
          local_190 = *(ulonglong *)(param_1 + 0x120);
          local_188 = FUN_146bcd1d8(local_198,uVar11 >> 0x20);
          uVar8 = FUN_146bcd1d8(lVar27,uVar11 & 0xffffffff);
          uVar9 = FUN_146c061e0(local_190,uVar8,local_188);
          if (*(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x1c0) +
                        (ulonglong)(uVar9 >> 9) * 8) + 0xc + (ulonglong)((uVar9 & 0x1ff) << 4)) ==
              -1) {
            uVar8 = local_158._8_4_;
            lVar27 = (longlong)(int)local_158._8_4_;
            uVar13 = local_158._8_4_ + 1;
            local_158._8_4_ = uVar13;
            if ((uint)local_158._12_4_ < uVar13) {
              FUN_1446f48e2(local_158,uVar8);
            }
            *(uint *)(local_158._0_8_ + lVar27 * 4) = uVar9;
          }
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar18 != puVar16);
  }
  local_168 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar16 = (uint *)*param_4;
    puVar18 = puVar16 + *(int *)(param_4 + 1);
    do {
      lVar27 = local_198;
      uVar9 = *puVar16;
      lVar17 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8
                );
      if (*(int *)(lVar17 + 0xc + (ulonglong)((uVar9 & 0x1ff) << 4)) == -1) {
        if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
          uVar7 = *(undefined8 *)(lVar17 + (ulonglong)((uVar9 & 0x1ff) << 4));
          lVar17 = *param_5;
          plVar20 = (longlong *)param_5[8];
          if ((longlong *)param_5[8] == (longlong *)0x0) {
            plVar20 = param_5 + 7;
          }
          uVar23 = (int)param_5[9] - 1;
          uVar13 = (uint)uVar7;
          iVar10 = *(int *)((longlong)plVar20 + (ulonglong)(uVar23 & uVar13) * 4);
          if (iVar10 == -1) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            do {
              lVar21 = lVar17 + (longlong)iVar10 * 0x10;
              if (*(uint *)(lVar17 + (longlong)iVar10 * 0x10) == uVar13) goto LAB_146c7440e;
              iVar10 = *(int *)(lVar21 + 8);
            } while (iVar10 != -1);
            lVar21 = 0;
LAB_146c7440e:
            puVar14 = (undefined4 *)(lVar21 + 4);
            if (lVar21 == 0) {
              puVar14 = (undefined4 *)0x0;
            }
          }
          uVar13 = (uint)((ulonglong)uVar7 >> 0x20);
          iVar10 = *(int *)((longlong)plVar20 + (ulonglong)(uVar23 & uVar13) * 4);
          while (iVar10 != -1) {
            lVar21 = lVar17 + (longlong)iVar10 * 0x10;
            if (*(uint *)(lVar17 + (longlong)iVar10 * 0x10) == uVar13) goto LAB_146c74444;
            iVar10 = *(int *)(lVar21 + 8);
          }
          lVar21 = 0;
LAB_146c74444:
          puVar28 = (undefined4 *)(lVar21 + 4);
          if (lVar21 == 0) {
            puVar28 = (undefined4 *)0x0;
          }
          if ((puVar14 != (undefined4 *)0x0) && (puVar28 != (undefined4 *)0x0)) {
            uVar8 = FUN_146bcd1d8(local_198,*puVar14);
            local_190 = CONCAT44(local_190._4_4_,uVar8);
            uVar8 = FUN_146bcd1d8(lVar27,*puVar28);
            iVar10 = FUN_146c061e0(*(undefined8 *)(param_1 + 0x120),local_190 & 0xffffffff,uVar8);
            if (iVar10 != -1) {
              uVar8 = local_168._8_4_;
              lVar17 = (longlong)(int)local_168._8_4_;
              uVar13 = local_168._8_4_ + 1;
              local_168._8_4_ = uVar13;
              if ((uint)local_168._12_4_ < uVar13) {
                FUN_146be54b8(local_168,uVar8);
              }
              *(ulonglong *)(local_168._0_8_ + lVar17 * 8) = CONCAT44(iVar10,uVar9);
              goto LAB_146c74382;
            }
          }
        }
        uVar8 = local_178._8_4_;
        lVar17 = (longlong)(int)local_178._8_4_;
        uVar13 = local_178._8_4_ + 1;
        local_178._8_4_ = uVar13;
        if ((uint)local_178._12_4_ < uVar13) {
          FUN_1446f48e2(local_178,uVar8);
        }
        *(uint *)(local_178._0_8_ + lVar17 * 4) = uVar9;
      }
LAB_146c74382:
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar18);
    lVar17 = (longlong)(int)local_168._8_4_;
    if (lVar17 != 0) {
      uVar7 = local_168._0_8_;
      local_198 = param_1 + 0x188;
      puVar18 = (uint *)0x0;
      do {
        local_180 = *(ulonglong *)(uVar7 + (longlong)puVar18);
        uVar9 = (uint)local_180;
        if ((-1 < (int)uVar9) &&
           (plVar20 = *(longlong **)(param_1 + 0x120),
           (int)uVar9 < (int)plVar20[0x3a] * 0x200 + *(int *)((longlong)plVar20 + 0x1d4))) {
          uVar11 = (ulonglong)((uint)(local_180 >> 9) & 0x3fffff);
          if (((ushort)(*(short *)(*(longlong *)(plVar20[0x3b] + uVar11 * 8) +
                                  (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (*(int *)(*(longlong *)(plVar20[0x38] + uVar11 * 8) + 0xc +
                      (ulonglong)((uVar9 & 0x1ff) << 4)) == -1)) {
            local_128 = 0xffffffff;
            uStack_124 = 0xffffffff;
            uStack_120 = 0xffffffff;
            uStack_11c = 0xffffffff;
            local_138 = 0xffffffff;
            uStack_134 = 0xffffffff;
            uStack_130 = 0xffffffff;
            uStack_12c = 0xffffffff;
            local_108 = 0;
            local_100 = 0x400000000;
            local_e8 = 0;
            local_e0 = 0x400000000;
            local_d8 = 0;
            local_1a8 = 1;
            iVar10 = (**(code **)(*plVar20 + 0x88))(plVar20,local_180,local_180 >> 0x20,local_140);
            if (iVar10 == 0) {
              if (*(char *)(param_1 + 0xe2) == '\x01') {
                FUN_1447cbafe(local_198,local_184,&local_180,0);
              }
            }
            else {
              uVar8 = local_178._8_4_;
              lVar27 = (longlong)(int)local_178._8_4_;
              uVar9 = local_178._8_4_ + 1;
              local_178._8_4_ = uVar9;
              if ((uint)local_178._12_4_ < uVar9) {
                FUN_1446f48e2(local_178,uVar8);
              }
              *(undefined4 *)(local_178._0_8_ + lVar27 * 4) = (undefined4)local_180;
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            if (local_108 != 0) {
              FUN_1400020a8();
            }
          }
        }
        puVar18 = puVar18 + 2;
      } while ((uint *)(lVar17 * 8) != puVar18);
    }
  }
  puVar16 = (uint *)local_158._0_8_;
  if ((longlong)(int)local_158._8_4_ != 0) {
    puVar15 = (uint *)(local_158._0_8_ + (longlong)(int)local_158._8_4_ * 4);
    puVar12 = (uint *)local_158._0_8_;
LAB_146c7469a:
    lVar17 = *(longlong *)(param_1 + 0x120);
    while ((uVar9 = *puVar12, -1 < (int)uVar9 &&
           ((int)uVar9 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4)))) {
      if ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar17 + 0x1d8) +
                                         (ulonglong)(uVar9 >> 9) * 8) +
                                       (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)) ||
         (*(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) + 0xc
                  + (ulonglong)((uVar9 & 0x1ff) << 4)) != -1)) break;
      puVar12 = puVar12 + 1;
      puVar16 = puVar15;
      if (puVar12 == puVar15) goto LAB_146c74782;
    }
    do {
      puVar15 = puVar15 + -1;
      uVar9 = *puVar15;
      if ((-1 < (int)uVar9) &&
         ((int)uVar9 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4))) {
        uVar13 = *(ushort *)
                  (*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + (ulonglong)(uVar9 >> 9) * 8) +
                  (ulonglong)(uVar9 & 0x1ff) * 2) - 1;
        puVar18 = (uint *)(ulonglong)uVar13;
        if (((ushort)uVar13 < 0xfffe) &&
           (puVar18 = *(uint **)(lVar17 + 0x1c0),
           *(int *)(*(longlong *)(puVar18 + (ulonglong)(uVar9 >> 9) * 2) + 0xc +
                   (ulonglong)((uVar9 & 0x1ff) << 4)) == -1)) goto LAB_146c74d37;
      }
      puVar16 = puVar12;
      if (puVar15 == puVar12) break;
    } while( true );
  }
LAB_146c74782:
  uVar19 = (undefined7)((ulonglong)puVar18 >> 8);
  uVar11 = CONCAT71(uVar19,1);
  FUN_144a1a59e(local_158,(ulonglong)((longlong)puVar16 - local_158._0_8_) >> 2,1);
  lVar17 = (longlong)(int)local_178._8_4_;
  if (0 < lVar17) {
    if ((longlong)(int)local_158._8_4_ != 0) {
      dVar32 = *(double *)(param_1 + 0xc0) * *(double *)(param_1 + 0xc0);
      puVar16 = (uint *)(local_158._0_8_ + (longlong)(int)local_158._8_4_ * 4);
      puVar18 = (uint *)local_158._0_8_;
      do {
        uVar9 = *puVar18;
        if ((-1 < (int)uVar9) &&
           (lVar17 = *(longlong *)(param_1 + 0x120),
           (int)uVar9 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4))) {
          uVar13 = uVar9 & 0x1ff;
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar17 + 0x1d8) + (ulonglong)(uVar9 >> 9) * 8) +
                                  (ulonglong)uVar13 * 2) - 1U) < 0xfffe) &&
             ((lVar27 = *(longlong *)(*(longlong *)(lVar17 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8),
              *(int *)(lVar27 + 0xc + (ulonglong)(uVar13 << 4)) == -1 && (0 < (int)local_178._8_4_))
             )) {
            uVar22 = *(ulonglong *)(lVar27 + (ulonglong)(uVar13 << 4));
            lVar27 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (uVar22 >> 9 & 0x7fffff) * 8);
            uVar26 = uVar22 & 0x1ff;
            dVar1 = *(double *)(lVar27 + uVar26 * 0x18);
            dVar2 = *(double *)(lVar27 + 8 + uVar26 * 0x18);
            dVar3 = *(double *)(lVar27 + 0x10 + uVar26 * 0x18);
            lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (uVar22 >> 0x29) * 8);
            uVar22 = uVar22 >> 0x20 & 0x1ff;
            dVar4 = *(double *)(lVar17 + uVar22 * 0x18);
            dVar5 = *(double *)(lVar17 + 8 + uVar22 * 0x18);
            dVar6 = *(double *)(lVar17 + 0x10 + uVar22 * 0x18);
            uVar13 = 0;
            iVar10 = local_178._8_4_;
            do {
              lVar17 = (longlong)(int)uVar13;
              uVar23 = *(uint *)(local_178._0_8_ + lVar17 * 4);
              local_180 = CONCAT44(local_180._4_4_,uVar23);
              if (((int)uVar23 < 0) ||
                 (plVar20 = *(longlong **)(param_1 + 0x120),
                 (int)plVar20[0x3a] * 0x200 + *(int *)((longlong)plVar20 + 0x1d4) <= (int)uVar23)) {
LAB_146c74933:
                iVar25 = ~uVar13 + iVar10;
                if (iVar25 != 0) {
                  if (0 < iVar25) {
                    iVar25 = 1;
                  }
                  memmove((void *)(local_178._0_8_ + lVar17 * 4),
                          (void *)(local_178._0_8_ + (longlong)(iVar10 - iVar25) * 4),
                          (longlong)iVar25 << 2);
                  iVar10 = local_178._8_4_;
                }
                local_178._8_4_ = iVar10 + -1;
                uVar13 = uVar13 - 1;
                iVar10 = iVar10 + -1;
              }
              else {
                uVar24 = uVar23 & 0x1ff;
                if ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (plVar20[0x3b] + (ulonglong)(uVar23 >> 9) * 8) +
                                                 (ulonglong)uVar24 * 2) - 1U)) ||
                   (lVar27 = *(longlong *)(plVar20[0x38] + (ulonglong)(uVar23 >> 9) * 8),
                   *(int *)(lVar27 + 0xc + (ulonglong)(uVar24 << 4)) != -1)) goto LAB_146c74933;
                uVar22 = *(ulonglong *)(lVar27 + (ulonglong)(uVar24 << 4));
                lVar27 = *(longlong *)(plVar20[2] + (uVar22 >> 9 & 0x7fffff) * 8);
                uVar26 = (ulonglong)((uint)uVar22 & 0x1ff);
                dVar29 = *(double *)(lVar27 + uVar26 * 0x18) - dVar1;
                dVar30 = *(double *)(lVar27 + 8 + uVar26 * 0x18) - dVar2;
                dVar31 = *(double *)(lVar27 + 0x10 + uVar26 * 0x18) - dVar3;
                if (dVar31 * dVar31 + dVar29 * dVar29 + dVar30 * dVar30 < dVar32) {
                  lVar27 = *(longlong *)(plVar20[2] + (uVar22 >> 0x29) * 8);
                  uVar22 = (ulonglong)((uint)(uVar22 >> 0x20) & 0x1ff);
                  dVar29 = *(double *)(lVar27 + 0x10 + uVar22 * 0x18) - dVar6;
                  dVar30 = *(double *)(lVar27 + uVar22 * 0x18) - dVar4;
                  dVar31 = *(double *)(lVar27 + 8 + uVar22 * 0x18) - dVar5;
                  if (dVar29 * dVar29 + dVar30 * dVar30 + dVar31 * dVar31 < dVar32) {
                    local_128 = 0xffffffff;
                    uStack_124 = 0xffffffff;
                    uStack_120 = 0xffffffff;
                    uStack_11c = 0xffffffff;
                    local_138 = 0xffffffff;
                    uStack_134 = 0xffffffff;
                    uStack_130 = 0xffffffff;
                    uStack_12c = 0xffffffff;
                    local_108 = 0;
                    local_100 = 0x400000000;
                    local_e8 = 0;
                    local_e0 = 0x400000000;
                    local_d8 = 0;
                    local_1a8 = 1;
                    iVar10 = (**(code **)(*plVar20 + 0x88))(plVar20,uVar23,uVar9,local_140);
                    local_198 = CONCAT44(local_198._4_4_,iVar10);
                    if (iVar10 == 0) {
                      iVar10 = ~uVar13 + local_178._8_4_;
                      if (iVar10 != 0) {
                        if (0 < iVar10) {
                          iVar10 = 1;
                        }
                        memmove((void *)(local_178._0_8_ + lVar17 * 4),
                                (void *)(local_178._0_8_ + (longlong)(local_178._8_4_ - iVar10) * 4)
                                ,(longlong)iVar10 << 2);
                      }
                      local_178._8_4_ = local_178._8_4_ + -1;
                      if (*(char *)(param_1 + 0xe2) == '\x01') {
                        FUN_1447cbafe(param_1 + 0x188,local_184,&local_180,0);
                      }
                    }
                    if (local_e8 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_108 != 0) {
                      FUN_1400020a8();
                    }
                    if ((int)local_198 == 0) break;
                    iVar10 = local_178._8_4_;
                  }
                }
              }
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < iVar10);
          }
        }
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar16);
      lVar17 = (longlong)(int)local_178._8_4_;
      if (lVar17 == 0) goto LAB_146c74bd2;
    }
    puVar18 = (uint *)(local_178._0_8_ + lVar17 * 4);
    uVar11 = CONCAT71(uVar19,1);
    puVar16 = (uint *)local_178._0_8_;
    do {
      uVar9 = *puVar16;
      if ((-1 < (int)uVar9) &&
         (lVar17 = *(longlong *)(param_1 + 0x120),
         (int)uVar9 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4))) {
        if (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar17 + 0x1d8) + (ulonglong)(uVar9 >> 9) * 8) +
                                (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                     0xc + (ulonglong)((uVar9 & 0x1ff) << 4)) == -1)) {
          iVar10 = *(int *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x180) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x184) < iVar10 + 1U) {
            FUN_1446f48e2((longlong *)(param_1 + 0x178),iVar10);
          }
          *(uint *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar10 * 4) = uVar9;
          uVar11 = 0;
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar18);
  }
LAB_146c74bd2:
  lVar17 = (longlong)(int)local_158._8_4_;
  if (lVar17 != 0) {
    uVar7 = local_158._0_8_;
    lVar27 = 0;
    do {
      uVar9 = *(uint *)(uVar7 + lVar27);
      if ((-1 < (int)uVar9) &&
         (lVar21 = *(longlong *)(param_1 + 0x120),
         (int)uVar9 < *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))) {
        if (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar21 + 0x1d8) + (ulonglong)(uVar9 >> 9) * 8) +
                                (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)(*(longlong *)(lVar21 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                     0xc + (ulonglong)((uVar9 & 0x1ff) << 4)) == -1)) {
          iVar10 = *(int *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x180) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x184) < iVar10 + 1U) {
            FUN_1446f48e2((longlong *)(param_1 + 0x178),iVar10);
          }
          *(uint *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar10 * 4) = uVar9;
          uVar11 = 0;
        }
      }
      lVar27 = lVar27 + 4;
    } while (lVar17 * 4 != lVar27);
  }
  if (local_178._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_158._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
LAB_146c74d37:
  *puVar12 = uVar9;
  puVar12 = puVar12 + 1;
  puVar16 = puVar15;
  if (puVar15 == puVar12) goto LAB_146c74782;
  goto LAB_146c7469a;
}



// FUNCTION 146c74d9e FUN_146c74d9e body=74 status=ok
// SIG undefined FUN_146c74d9e(void)

void FUN_146c74d9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x50;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
  lVar1 = 0x30;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x10);
  return;
}



// FUNCTION 146c74de8 FUN_146c74de8 body=61 status=ok
// SIG undefined FUN_146c74de8(void)

void FUN_146c74de8(longlong *param_1)

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



// FUNCTION 146c74e26 FUN_146c74e26 body=206 status=ok
// SIG undefined FUN_146c74e26(void)

void FUN_146c74e26(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_138 [40];
  undefined1 local_110 [224];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_14481578e(param_1 + 3,0);
  }
  FUN_146c74ef6(local_110,*param_1,param_1[1]);
  FUN_146c74f84(local_110,param_2,0);
  FUN_146c74f84(local_110,param_2,1);
  FUN_146c75472(local_110);
  FUN_146c75826(local_110);
  puVar1 = param_1 + 3;
  if (*(char *)((longlong)param_1 + 0x11) == '\0') {
    puVar1 = (undefined8 *)0x0;
  }
  FUN_146c75d1a(local_110,puVar1,0);
  FUN_146c76398(local_110);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c74ef6 FUN_146c74ef6 body=141 status=ok
// SIG undefined FUN_146c74ef6(void)

undefined8 * FUN_146c74ef6(undefined8 *param_1,undefined8 param_2,double param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3 * param_3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_146c7d7de(param_1);
  return param_1;
}



// FUNCTION 146c74f84 FUN_146c74f84 body=1261 status=ok
// SIG undefined FUN_146c74f84(void)

void FUN_146c74f84(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  double *pdVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined1 auStack_188 [44];
  uint local_15c;
  longlong *local_158;
  longlong local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  uint local_114;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  uint *local_f8;
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar11 = param_1[0x1b];
  FUN_146c7da4e(param_1 + 0x1a,*(int *)(param_2 + 0x18) + (int)lVar11);
  local_140 = (longlong)*(int *)(param_2 + 0x18);
  local_138 = param_2;
  if (0 < local_140) {
    local_128 = param_1 + 0x18;
    local_158 = param_1 + 2;
    local_130 = param_1 + 0xc;
    lVar19 = 0;
    local_150 = (longlong)(int)lVar11 * 3;
    local_148 = param_3 & 0xffffffff;
    do {
      lVar11 = *(longlong *)(local_138 + 0x10);
      puVar1 = (uint *)(lVar19 * 0xc + param_1[0x1a] + local_150 * 4);
      uVar7 = *(uint *)(lVar11 + lVar19 * 0x38 + local_148 * 4);
      *puVar1 = uVar7;
      lVar17 = *param_1;
      lVar8 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
      uVar18 = (ulonglong)uVar7 & 0x1ff;
      uVar7 = *(uint *)(lVar8 + uVar18 * 0xc);
      lVar9 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar16 = (ulonglong)uVar7 & 0x1ff;
      local_d8 = *(double *)(lVar9 + 0x10 + uVar16 * 0x18);
      puVar2 = (undefined8 *)(lVar9 + uVar16 * 0x18);
      local_e8 = *puVar2;
      uStack_e0 = puVar2[1];
      uVar7 = *(uint *)(lVar8 + 4 + uVar18 * 0xc);
      lVar9 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar16 = (ulonglong)uVar7 & 0x1ff;
      local_c0 = *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18);
      puVar2 = (undefined8 *)(lVar9 + uVar16 * 0x18);
      local_d0 = *puVar2;
      uStack_c8 = puVar2[1];
      uVar7 = *(uint *)(lVar8 + 8 + uVar18 * 0xc);
      lVar8 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar16 = (ulonglong)uVar7 & 0x1ff;
      local_a8 = *(undefined8 *)(lVar8 + 0x10 + uVar16 * 0x18);
      puVar3 = (undefined4 *)(lVar8 + uVar16 * 0x18);
      local_b8 = *puVar3;
      uStack_b4 = puVar3[1];
      uStack_b0 = puVar3[2];
      uStack_ac = puVar3[3];
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + (ulonglong)(*puVar1 >> 9) * 8);
      uVar16 = (ulonglong)*puVar1 & 0x1ff;
      local_108 = *(undefined4 *)(lVar17 + 8 + uVar16 * 0xc);
      local_110 = *(undefined8 *)(lVar17 + uVar16 * 0xc);
      lVar11 = lVar11 + lVar19 * 0x38;
      local_15c = 0xffffffff;
      lVar17 = 0;
      bVar12 = true;
      local_120 = lVar19;
      do {
        bVar15 = bVar12;
        local_114 = *(uint *)(param_1 + 0x19);
        lVar19 = (longlong)(int)local_114;
        *(uint *)(param_1 + 0x19) = local_114 + 1;
        if (*(uint *)((longlong)param_1 + 0xcc) < local_114 + 1) {
          FUN_146c7dd80(local_128);
        }
        pdVar14 = &local_d8;
        pdVar4 = (double *)(param_1[0x18] + lVar19 * 0x20);
        pdVar5 = (double *)(param_1[0x18] + lVar19 * 0x20);
        *pdVar5 = 0.0;
        pdVar5[1] = 0.0;
        pdVar5[2] = 0.0;
        pdVar5[3] = -NAN;
        pdVar6 = (double *)(lVar11 + 8 + lVar17 * 0x18);
        dVar21 = pdVar6[1];
        *pdVar5 = *pdVar6;
        pdVar5[1] = dVar21;
        pdVar5[2] = *(double *)(lVar11 + 0x18 + lVar17 * 0x18);
        puVar1[lVar17 + 1] = local_114;
        dVar21 = (double)param_1[1];
        uVar16 = 0xffffffff;
        uVar18 = 0;
        do {
          dVar10 = (pdVar5[2] - *pdVar14) * (pdVar5[2] - *pdVar14) +
                   (*pdVar5 - pdVar14[-2]) * (*pdVar5 - pdVar14[-2]) +
                   (pdVar5[1] - pdVar14[-1]) * (pdVar5[1] - pdVar14[-1]);
          if (dVar10 < dVar21) {
            uVar16 = uVar18 & 0xffffffff;
            dVar21 = dVar10;
          }
          uVar18 = uVar18 + 1;
          pdVar14 = pdVar14 + 3;
        } while (uVar18 != 3);
        if ((int)uVar16 < 0) {
          uVar13 = FUN_146c7da96(param_1,&local_e8,pdVar4);
          uVar7 = local_15c;
          if ((int)uVar13 < 0) {
            *(undefined4 *)(pdVar4 + 3) = 2;
            *(uint *)((longlong)pdVar4 + 0x1c) = *puVar1;
            local_f8 = &local_114;
            local_100 = (longlong)pdVar5 + 0x1c;
            FUN_1406b2a14(local_158,local_ec,&local_100,0);
          }
          else {
            uVar16 = (ulonglong)uVar13;
            if (local_15c == uVar13) {
              dVar21 = *pdVar4 - (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
              dVar20 = pdVar4[1] - (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
              dVar10 = pdVar4[2] - (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
              if (dVar10 * dVar10 + dVar20 * dVar20 + dVar21 * dVar21 < (double)param_1[1]) {
                uVar13 = FUN_146c7db5e(param_1,&local_e8,pdVar4);
                if ((int)uVar13 < 0) {
                  uVar13 = uVar7;
                }
                uVar16 = (ulonglong)uVar13;
              }
              else {
                uVar16 = (ulonglong)local_15c;
              }
            }
            *(undefined4 *)(pdVar4 + 3) = 1;
            *(undefined4 *)((longlong)pdVar4 + 0x1c) =
                 *(undefined4 *)
                  ((ulonglong)(*puVar1 & 0x1ff) * 0xc +
                   *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(*puVar1 >> 9) * 8) +
                  uVar16 * 4);
            local_f8 = &local_114;
            local_100 = (longlong)pdVar5 + 0x1c;
            FUN_1406b2a14(local_130,local_ec,&local_100,0);
            unaff_XMM9_Da = SUB84(*pdVar4,0);
            unaff_XMM9_Db = (undefined4)((ulonglong)*pdVar4 >> 0x20);
            unaff_XMM8_Da = SUB84(pdVar4[1],0);
            unaff_XMM8_Db = (undefined4)((ulonglong)pdVar4[1] >> 0x20);
            unaff_XMM7_Da = SUB84(pdVar4[2],0);
            unaff_XMM7_Db = (undefined4)((ulonglong)pdVar4[2] >> 0x20);
            local_15c = (uint)uVar16;
          }
        }
        else {
          *(undefined4 *)(pdVar4 + 3) = 0;
          *(undefined4 *)((longlong)pdVar4 + 0x1c) =
               *(undefined4 *)((longlong)&local_110 + uVar16 * 4);
        }
        lVar17 = 1;
        bVar12 = false;
      } while (bVar15);
      lVar19 = local_120 + 1;
    } while (lVar19 != local_140);
  }
  if ((local_a0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c75472 FUN_146c75472 body=946 status=ok
// SIG undefined FUN_146c75472(void)

void FUN_146c75472(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_178 [32];
  uint *local_158;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  uint local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined1 local_f0 [24];
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c0;
  int *local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_d8 = 0;
  uStack_d0 = 0;
  if (*(int *)((longlong)param_1 + 0x44) < (int)param_1[3]) {
    plVar17 = param_1 + 2;
    local_148 = param_1 + 4;
    local_150 = plVar17;
    do {
      local_130 = 0;
      uStack_12c = 1;
      local_128 = SUB84(local_148,0);
      uStack_124 = (undefined4)((ulonglong)local_148 >> 0x20);
      local_120 = 0xffffffff;
      iStack_11c = 0;
      uStack_118 = 0;
      if ((int)param_1[7] != 0) {
        FUN_1449c0562(&local_130);
      }
      uVar5 = *(uint *)(*plVar17 + (longlong)iStack_11c * 0x10);
      uVar21 = (ulonglong)uVar5;
      iVar6 = *(int *)(*plVar17 + 4 + (longlong)iStack_11c * 0x10);
      bVar24 = (longlong)uStack_d0 < 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      if (bVar24) {
        FUN_14481578e(&local_d8,0);
      }
      FUN_146be72fa(plVar17,uVar21,&local_d8,0);
      puVar22 = (undefined4 *)((longlong)iVar6 * 0x20 + param_1[0x18]);
      lVar9 = *param_1;
      lVar23 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
      uVar18 = uVar21 & 0x1ff;
      uVar7 = *(uint *)(lVar23 + uVar18 * 0xc);
      lVar16 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar19 = (ulonglong)uVar7 & 0x1ff;
      local_98 = *(undefined8 *)(lVar16 + 0x10 + uVar19 * 0x18);
      puVar1 = (undefined8 *)(lVar16 + uVar19 * 0x18);
      local_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      uVar7 = *(uint *)(lVar23 + 4 + uVar18 * 0xc);
      lVar16 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar19 = (ulonglong)uVar7 & 0x1ff;
      local_80 = *(undefined8 *)(lVar16 + 0x10 + uVar19 * 0x18);
      puVar1 = (undefined8 *)(lVar16 + uVar19 * 0x18);
      local_90 = *puVar1;
      uStack_88 = puVar1[1];
      uVar7 = *(uint *)(lVar23 + 8 + uVar18 * 0xc);
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar19 = (ulonglong)uVar7 & 0x1ff;
      local_68 = *(undefined8 *)(lVar9 + 0x10 + uVar19 * 0x18);
      local_158 = &local_78;
      puVar2 = (uint *)(lVar9 + uVar19 * 0x18);
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      FUN_146c7de05(local_f0,puVar22,&local_a8);
      uStack_12c = 0xffffffff;
      local_128 = 0xffffffff;
      uStack_124 = 0xffffffff;
      local_10c = 0xffffffff;
      iStack_11c = 0xffffffff;
      uStack_118 = 0xffffffff;
      uStack_114 = 0xffffffff;
      uStack_110 = 0xffffffff;
      (**(code **)(*(longlong *)*param_1 + 0xb8))((longlong *)*param_1,uVar21,local_f0);
      uVar7 = local_120;
      lVar9 = *param_1;
      cVar14 = FUN_146bfed03(puVar22);
      if (cVar14 != '\0') {
        lVar23 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
        *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18) =
             *(undefined8 *)(puVar22 + 4);
        uVar11 = puVar22[1];
        uVar12 = puVar22[2];
        uVar13 = puVar22[3];
        puVar3 = (undefined4 *)(lVar23 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
        *puVar3 = *puVar22;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        if (*(char *)(lVar9 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar9 + 0x214) = *(int *)(lVar9 + 0x214) + 1;
          UNLOCK();
        }
      }
      puVar22[7] = uVar7;
      puVar22[6] = 0;
      FUN_146be73f8(plVar17);
      lVar9 = local_d8;
      local_138 = CONCAT44(uStack_118,iStack_11c);
      lVar23 = (longlong)(int)uStack_d0;
      local_13c = uVar5;
      if (1 < lVar23) {
        lVar16 = 0;
        do {
          local_140 = *(int *)(lVar9 + lVar16);
          lVar20 = (longlong)local_140;
          if (iVar6 != local_140) {
            lVar10 = param_1[0x18];
            lVar4 = lVar10 + lVar20 * 0x20;
            local_158 = &local_13c;
            FUN_146c7dfa2(param_1,lVar4,local_120);
            plVar17 = local_150;
            iVar8 = *(int *)(lVar10 + 0x18 + lVar20 * 0x20);
            plVar15 = local_150;
            if (iVar8 != 2) {
              if (iVar8 != 1) goto LAB_146c75724;
              plVar15 = param_1 + 0xc;
            }
            local_b8 = &local_140;
            local_c0 = lVar4 + 0x1c;
            FUN_1406b2a14(plVar15,local_ac,&local_c0);
          }
LAB_146c75724:
          lVar16 = lVar16 + 4;
        } while (lVar23 * 4 != lVar16);
      }
    } while (*(int *)((longlong)param_1 + 0x44) < (int)param_1[3]);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c75826 FUN_146c75826 body=1267 status=ok
// SIG undefined FUN_146c75826(void)

void FUN_146c75826(longlong *param_1)

{
  longlong *plVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  char cVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *local_170;
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  longlong *plStack_150;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 local_140;
  uint local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined1 local_118 [16];
  longlong local_108;
  int *local_100;
  undefined1 local_f4 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_118 = (undefined1  [16])0x0;
  if (*(int *)((longlong)param_1 + 0x94) < (int)param_1[0xd]) {
    plVar1 = param_1 + 0xc;
    plVar28 = param_1 + 0xe;
    local_178 = param_1;
    local_170 = plVar28;
    do {
      local_158 = 0x100000000;
      uStack_148 = 0xffffffff;
      iStack_144 = 0;
      local_140 = 0;
      plStack_150 = plVar28;
      if ((int)param_1[0x11] != 0) {
        FUN_1449c0562(&local_158);
      }
      uVar8 = *(uint *)(*plVar1 + (longlong)iStack_144 * 0x10);
      iVar9 = *(int *)(*plVar1 + 4 + (longlong)iStack_144 * 0x10);
      local_118._8_4_ = 0;
      if ((int)local_118._12_4_ < 0) {
        FUN_14481578e(local_118,0);
      }
      FUN_146be72fa(plVar1,uVar8,local_118,0);
      plVar10 = (longlong *)*param_1;
      uVar23 = *(ulonglong *)
                (*(longlong *)(plVar10[0x38] + (ulonglong)(uVar8 >> 9) * 8) +
                (ulonglong)((uVar8 & 0x1ff) << 4));
      lVar22 = *(longlong *)(plVar10[2] + (uVar23 >> 9 & 0x7fffff) * 8);
      uVar24 = uVar23 & 0x1ff;
      dVar29 = *(double *)(lVar22 + uVar24 * 0x18);
      dVar30 = *(double *)(lVar22 + 8 + uVar24 * 0x18);
      dVar4 = *(double *)(lVar22 + 0x10 + uVar24 * 0x18);
      lVar22 = *(longlong *)(plVar10[2] + (uVar23 >> 0x29) * 8);
      uVar23 = uVar23 >> 0x20 & 0x1ff;
      dVar5 = *(double *)(lVar22 + uVar23 * 0x18);
      dVar6 = *(double *)(lVar22 + 8 + uVar23 * 0x18);
      dVar7 = *(double *)(lVar22 + 0x10 + uVar23 * 0x18);
      dVar15 = dVar7 - dVar4;
      dVar16 = dVar6 - dVar30;
      dVar18 = dVar5 - dVar29;
      dVar13 = SQRT(dVar15 * dVar15 + dVar18 * dVar18 + dVar16 * dVar16);
      dVar12 = 0.0;
      dVar17 = 0.0;
      dVar19 = 0.0;
      dVar14 = 0.0;
      pdVar25 = (double *)((longlong)iVar9 * 0x20 + param_1[0x18]);
      if (0.0 < dVar13) {
        dVar12 = 1.0 / dVar13;
        dVar19 = dVar18 * dVar12;
        dVar17 = dVar16 * dVar12;
        dVar12 = dVar15 * dVar12;
        dVar14 = dVar13 * 0.5;
      }
      dVar30 = (((pdVar25[1] - (dVar30 + dVar6) * 0.5) * dVar17 +
                 (*pdVar25 - (dVar29 + dVar5) * 0.5) * dVar19 +
                (pdVar25[2] - (dVar4 + dVar7) * 0.5) * dVar12) / dVar14 + 1.0) * 0.5;
      dVar29 = 1.0;
      if (dVar30 <= 1.0) {
        dVar29 = dVar30;
      }
      local_158 = CONCAT44(0xffffffff,(undefined4)local_158);
      plStack_150 = (longlong *)0xffffffffffffffff;
      uStack_148 = 0xffffffff;
      iStack_144 = 0xffffffff;
      local_140 = 0xffffffff;
      local_134 = 0xffffffff;
      uStack_130 = 0xffffffff;
      uStack_12c = 0xffffffff;
      uStack_128 = 0xffffffff;
      local_124 = 0xffffffff;
      (**(code **)(*plVar10 + 0x30))
                (plVar10,uVar8,&local_158,~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar29);
      uVar8 = local_138;
      lVar22 = *param_1;
      cVar21 = FUN_146bfed03(pdVar25);
      if (cVar21 != '\0') {
        lVar26 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
        uVar23 = (ulonglong)(uVar8 & 0x1ff);
        *(double *)(lVar26 + 0x10 + uVar23 * 0x18) = pdVar25[2];
        dVar29 = pdVar25[1];
        pdVar2 = (double *)(lVar26 + uVar23 * 0x18);
        *pdVar2 = *pdVar25;
        pdVar2[1] = dVar29;
        if (*(char *)(lVar22 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar22 + 0x214) = *(int *)(lVar22 + 0x214) + 1;
          UNLOCK();
        }
      }
      *(uint *)((longlong)pdVar25 + 0x1c) = local_138;
      *(undefined4 *)(pdVar25 + 3) = 0;
      FUN_146be73f8(plVar1);
      lVar22 = (longlong)(int)local_118._8_4_;
      if (1 < lVar22) {
        local_160 = (undefined4)local_158;
        local_15c = uStack_12c;
        uVar20 = local_118._0_8_;
        lVar26 = 0;
        do {
          local_164 = *(int *)(uVar20 + lVar26);
          lVar27 = (longlong)local_164;
          if (iVar9 != local_164) {
            lVar11 = local_178[0x18];
            lVar3 = lVar11 + lVar27 * 0x20;
            FUN_146c7e49a(local_178,lVar3,local_138);
            if (*(int *)(lVar11 + 0x18 + lVar27 * 0x20) == 1) {
              local_108 = lVar3 + 0x1c;
              local_100 = &local_164;
              FUN_1406b2a14(plVar1,local_f4,&local_108);
            }
          }
          lVar26 = lVar26 + 4;
          param_1 = local_178;
          plVar28 = local_170;
        } while (lVar22 * 4 != lVar26);
      }
    } while (*(int *)((longlong)param_1 + 0x94) < (int)param_1[0xd]);
    if (local_118._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c75d1a FUN_146c75d1a body=1660 status=ok
// SIG undefined FUN_146c75d1a(void)

ulonglong FUN_146c75d1a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  ulonglong uVar14;
  double *pdVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 *local_1e0;
  double *local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  uint local_1b4;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined **local_120;
  longlong local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  void *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  void *local_a0;
  
  pvVar10 = (void *)(DAT_14c707940 ^ (ulonglong)auStack_208);
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_a0 = pvVar10;
  if (param_3 != (longlong *)0x0) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x1b);
    pvVar10 = (void *)FUN_144a127d2(param_3,uVar11,1);
    if ((longlong)(int)param_3[1] != 0) {
      pvVar10 = memset((void *)*param_3,(int)CONCAT71((int7)(uVar11 >> 8),0xff),
                       (longlong)(int)param_3[1] << 2);
    }
  }
  lVar6 = param_1[0x1b];
  uVar12 = (undefined7)((ulonglong)pvVar10 >> 8);
  if ((longlong)(int)lVar6 < 1) {
    uVar11 = CONCAT71(uVar12,1);
  }
  else {
    uVar11 = CONCAT71(uVar12,1);
    lVar20 = 8;
    lVar21 = 0;
    local_1b0 = param_3;
    do {
      lVar18 = param_1[0x1a];
      iVar8 = *(int *)(lVar18 + -4 + lVar20);
      if (iVar8 == *(int *)(lVar18 + lVar20)) goto LAB_146c75df6;
      lVar13 = param_1[0x18];
      lVar16 = (longlong)iVar8 * 0x20;
      lVar19 = (longlong)*(int *)(lVar18 + lVar20) * 0x20;
      if (*(int *)(lVar13 + 0x18 + lVar19) == 0 && *(int *)(lVar13 + 0x18 + lVar16) == 0) {
        pdVar17 = (double *)(lVar16 + lVar13);
        if (*(int *)((longlong)pdVar17 + 0x1c) == -1) goto LAB_146c75eb6;
        pdVar15 = (double *)(lVar13 + lVar19);
        if (*(int *)((longlong)pdVar15 + 0x1c) == -1) goto LAB_146c75eb6;
        if (*(int *)((longlong)pdVar17 + 0x1c) == *(int *)((longlong)pdVar15 + 0x1c)) {
          if (param_2 != (longlong *)0x0) {
            iVar8 = (int)param_2[1];
            if (local_1b0 != (longlong *)0x0) {
              *(int *)(*local_1b0 + lVar21 * 4) = iVar8;
            }
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              uVar11 = uVar11 & 0xffffffff;
              FUN_1446f48e2(param_2,iVar8);
            }
            *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 1;
            iVar8 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              uVar11 = uVar11 & 0xffffffff;
              FUN_1446f48e2(param_2,iVar8);
            }
            *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) =
                 *(undefined4 *)((longlong)pdVar17 + 0x1c);
          }
        }
        else {
          local_1b4 = (uint)uVar11;
          iVar8 = FUN_146c061e0(*param_1);
          if (iVar8 == -1) {
            local_118 = *param_1;
            local_120 = &PTR_FUN_149f3c670;
            local_110 = 0;
            uStack_108 = 0;
            local_100 = 0;
            uVar9 = FUN_146c12f82(local_118,*(undefined4 *)((longlong)pdVar17 + 0x1c));
            lVar13 = (longlong)*(int *)(lVar18 + -8 + lVar20);
            lVar18 = param_1[0x16];
            dVar25 = pdVar15[2] - pdVar17[2];
            dVar28 = pdVar15[1] - pdVar17[1];
            dVar29 = *pdVar15 - *pdVar17;
            dVar26 = *(double *)(lVar18 + lVar13 * 0x18);
            dVar27 = *(double *)(lVar18 + 8 + lVar13 * 0x18);
            dVar23 = dVar26 * dVar28 - dVar29 * dVar27;
            dVar3 = *(double *)(lVar18 + 0x10 + lVar13 * 0x18);
            dVar24 = dVar3 * dVar29 - dVar25 * dVar26;
            dVar26 = dVar27 * dVar25 - dVar3 * dVar28;
            dVar27 = SQRT(dVar23 * dVar23 + dVar26 * dVar26 + dVar24 * dVar24);
            if (0.0 < dVar27) {
LAB_146c76198:
              dVar27 = 1.0 / dVar27;
              local_170 = dVar26 * dVar27;
              local_168 = dVar24 * dVar27;
              local_160 = dVar27 * dVar23;
              local_1c8 = param_1[1];
              uVar11 = 0;
              local_e8[0] = 0;
              local_d8 = 0;
              uVar4 = *(uint *)((longlong)pdVar15 + 0x1c);
              lVar18 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
              local_178 = *(undefined8 *)(lVar18 + 0x10 + ((ulonglong)uVar4 & 0x1ff) * 0x18);
              puVar1 = (undefined8 *)(lVar18 + ((ulonglong)uVar4 & 0x1ff) * 0x18);
              local_188 = *puVar1;
              uStack_180 = puVar1[1];
              uVar5 = *(uint *)((longlong)pdVar17 + 0x1c);
              lVar18 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
              uVar14 = (ulonglong)uVar5 & 0x1ff;
              local_198 = *(undefined8 *)(lVar18 + 0x10 + uVar14 * 0x18);
              puVar2 = (undefined4 *)(lVar18 + uVar14 * 0x18);
              local_1a8 = *puVar2;
              uStack_1a4 = puVar2[1];
              uStack_1a0 = puVar2[2];
              uStack_19c = puVar2[3];
              local_1d0 = local_e8;
              local_1d8 = &local_170;
              local_1e0 = &local_188;
              local_1e8 = CONCAT44(local_1e8._4_4_,uVar4);
              cVar7 = FUN_146c6e632(&local_120,uVar9,(ulonglong)uVar5,&local_1a8);
              if (cVar7 != '\0') {
                bVar22 = (longlong)uStack_f0 < 0;
                uStack_f0 = uStack_f0 & 0xffffffff00000000;
                if (bVar22) {
                  FUN_14481578e(&local_f8,0);
                }
                local_1e8 = param_1[1];
                uVar9 = FUN_146c6e8d6(&local_120,0,&local_f8,0);
                if ((byte)uVar9 == 1 && param_2 != (longlong *)0x0) {
                  iVar8 = (int)param_2[1];
                  if (local_1b0 != (longlong *)0x0) {
                    *(int *)(*local_1b0 + lVar21 * 4) = iVar8;
                  }
                  uVar9 = (uint)uStack_f0;
                  *(uint *)(param_2 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                    FUN_1446f48e2(param_2,iVar8);
                  }
                  *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = uVar9;
                  lVar18 = (longlong)(int)(uint)uStack_f0;
                  if (lVar18 != 0) {
                    iVar8 = (int)param_2[1];
                    *(uint *)(param_2 + 1) = iVar8 + (uint)uStack_f0;
                    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar8) < (uint)uStack_f0) {
                      FUN_1446f48e2(param_2,iVar8);
                    }
                    memcpy((void *)((longlong)iVar8 * 4 + *param_2),local_f8,lVar18 << 2);
                  }
                  goto LAB_146c76069;
                }
                uVar11 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),(byte)uVar9 & (byte)local_1b4)
                ;
              }
            }
            else {
              dVar26 = dVar25 * dVar25 + dVar28 * dVar28 + dVar29 * dVar29;
              if (dVar26 < (double)param_1[1] || dVar26 == (double)param_1[1]) {
                local_158 = (undefined4)DAT_14c8463b8;
                uStack_154 = DAT_14c8463b8._4_4_;
                uStack_150 = (undefined4)DAT_14c8463c0;
                uStack_14c = DAT_14c8463c0._4_4_;
                local_148 = DAT_14c8463c8;
                FUN_146c7e798(&local_138,*param_1,uVar9,&local_158);
                dVar27 = SQRT(local_128 * local_128 + local_138 * local_138 + local_130 * local_130)
                ;
                dVar23 = local_128;
                dVar24 = local_130;
                dVar26 = local_138;
                if (0.0 < dVar27) goto LAB_146c76198;
              }
LAB_146c76069:
              uVar11 = (ulonglong)local_1b4;
            }
            local_120 = &PTR_FUN_149f3c670;
            if (local_110 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_2 != (longlong *)0x0) {
              iVar8 = (int)param_2[1];
              if (local_1b0 != (longlong *)0x0) {
                *(int *)(*local_1b0 + lVar21 * 4) = iVar8;
              }
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_1446f48e2(param_2,iVar8);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 2;
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_1446f48e2(param_2,iVar8);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) =
                   *(undefined4 *)((longlong)pdVar17 + 0x1c);
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_1446f48e2(param_2,iVar8);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) =
                   *(undefined4 *)((longlong)pdVar15 + 0x1c);
            }
            uVar11 = (ulonglong)local_1b4;
          }
        }
      }
      else {
LAB_146c75eb6:
        uVar11 = 0;
      }
LAB_146c75df6:
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0xc;
    } while ((int)lVar6 != lVar21);
    if (local_f8 != (void *)0x0) {
      uVar11 = uVar11 & 0xffffffff;
      FUN_1400020a8();
    }
  }
  if (((ulonglong)local_a0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffffffffff01;
}



// FUNCTION 146c76398 FUN_146c76398 body=138 status=ok
// SIG undefined FUN_146c76398(void)

void FUN_146c76398(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x10);
  return;
}



// FUNCTION 146c76422 FUN_146c76422 body=107 status=ok
// SIG undefined FUN_146c76422(void)

void FUN_146c76422(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    lVar3 = lVar3 * 0x10;
    *(undefined4 *)(param_1 + 0x28 + lVar3) = 0;
    if (*(int *)(param_1 + 0x2c + lVar3) < 0) {
      FUN_14481578e(param_1 + 0x20 + lVar3,0);
    }
    *(undefined4 *)(param_1 + 0x48 + lVar3) = 0;
    if (*(int *)(param_1 + 0x4c + lVar3) < 0) {
      FUN_14481578e(lVar3 + param_1 + 0x40,0);
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar2);
  return;
}



// FUNCTION 146c7648e FUN_146c7648e body=8722 status=ok
// SIG undefined FUN_146c7648e(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146c7648e(longlong ****param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  double dVar10;
  longlong *****ppppplVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong ***ppplVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  longlong ****pppplVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  int iVar34;
  bool bVar35;
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_8a8 [32];
  longlong *****local_888;
  undefined8 local_880;
  undefined8 **local_878;
  double local_868;
  ulonglong local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined4 uStack_848;
  int iStack_844;
  uint local_840;
  int iStack_83c;
  uint local_838;
  undefined4 local_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 local_824;
  double local_818;
  double dStack_810;
  double local_808;
  longlong ****local_7f8;
  double *pdStack_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  uint local_7c4;
  longlong ***local_7c0;
  uint local_7b8 [2];
  double local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  uint local_784;
  longlong ****local_780;
  undefined8 local_778;
  longlong ****local_770;
  undefined8 local_768;
  undefined4 local_760;
  int local_75c;
  longlong **local_758;
  undefined8 uStack_750;
  longlong local_748;
  ulonglong uStack_740;
  longlong local_738;
  ulonglong uStack_730;
  longlong *****local_728;
  longlong ****local_720;
  longlong *****local_718;
  longlong ****local_710;
  longlong local_708;
  undefined8 uStack_700;
  longlong local_6f8;
  undefined8 uStack_6f0;
  longlong ***local_6e8;
  longlong local_6e0;
  undefined8 uStack_6d8;
  longlong ***local_6d0;
  longlong local_6c8;
  undefined8 uStack_6c0;
  longlong local_6b8;
  undefined8 uStack_6b0;
  longlong ***local_6a0;
  longlong ***local_698;
  undefined1 local_690;
  undefined1 local_68f;
  longlong local_688;
  undefined8 uStack_680;
  undefined1 local_678 [48];
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 local_630;
  double local_628;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  double local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  longlong ****local_578;
  longlong ****pppplStack_570;
  longlong local_568;
  uint local_560;
  undefined4 local_55c;
  undefined8 *local_548;
  undefined8 uStack_540;
  longlong ***local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined8 local_528;
  int local_520;
  undefined8 local_51c;
  int local_514;
  undefined1 local_510 [8];
  undefined1 *local_508;
  int local_500;
  longlong ****local_4f8;
  undefined8 uStack_4f0;
  longlong ****local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined8 uStack_4c4;
  undefined4 local_4bc;
  longlong local_4b8;
  ulonglong local_4b0;
  uint local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_328;
  longlong ****pppplStack_320;
  longlong ***local_318;
  longlong *local_310;
  longlong *****ppppplStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  _RTL_CRITICAL_SECTION local_2d8;
  double local_2b0;
  undefined4 local_2a8;
  undefined8 local_298;
  undefined8 local_288;
  longlong ****local_258;
  undefined8 uStack_250;
  longlong ***local_248 [2];
  undefined8 local_238;
  uint local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  longlong ****local_208 [2];
  undefined8 local_1f8;
  undefined **local_1e8;
  longlong ****local_1e0;
  longlong ***local_1c8 [12];
  longlong ***local_168;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  FUN_145c688c4(param_1[0xd],&local_5a8,1);
  dVar44 = (double)(-(ulonglong)(0.0 <= local_580 - local_598) & (ulonglong)(local_580 - local_598))
  ;
  dVar47 = (double)(-(ulonglong)(0.0 <= local_588 - local_5a0) & (ulonglong)(local_588 - local_5a0))
  ;
  uVar36 = -(ulonglong)(dVar44 <= dVar47);
  dVar44 = (double)(~uVar36 & (ulonglong)dVar44 | uVar36 & (ulonglong)dVar47);
  dVar47 = (double)(-(ulonglong)(0.0 <= local_590 - local_5a8) & (ulonglong)(local_590 - local_5a8))
  ;
  uVar36 = -(ulonglong)(dVar44 <= dVar47);
  local_610 = (double)(uVar36 & (ulonglong)dVar47 | ~uVar36 & (ulonglong)dVar44);
  if (1000000.0 <= local_610) {
    local_610 = 1000000.0;
  }
  if (local_610 <= 0.01) {
    local_610 = 0.01;
  }
  local_610 = 1.0 / local_610;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  local_5e0 = 0x3ff0000000000000;
  local_5c8 = (DAT_14c8464f0 - (local_580 + local_598) * 0.5) * local_610;
  dStack_5d0 = (DAT_14c8464e8 - (local_588 + local_5a0) * 0.5) * local_610;
  local_5d8 = (DAT_14c8464e0 - (local_590 + local_5a8) * 0.5) * local_610;
  local_5b0 = DAT_14c846520 * local_610;
  local_5b8 = DAT_14c846518 * local_610;
  local_5c0 = DAT_14c846510 * local_610;
  FUN_146c3cd49(param_1[0xd],&local_5f8,0);
  local_618 = (local_598 + local_580) * 0.5;
  local_620 = (local_5a0 + local_588) * 0.5;
  local_628 = (local_5a8 + local_590) * 0.5;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  local_630 = 0x3ff0000000000000;
  local_610 = 1.0 / local_610;
  local_600 = DAT_14c846520 * local_610;
  local_608 = DAT_14c846518 * local_610;
  local_610 = local_610 * DAT_14c846510;
  FUN_146ba21d6(local_1c8,param_1[0xd],1);
  local_168 = param_1[3];
  local_888 = local_208;
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_149f3c7f0;
  local_208[0] = (longlong ****)&LAB_142981f36;
  local_4f8 = (longlong ****)0x7fefffffffffffff;
  local_4e8 = (longlong ****)0x0;
  local_4d8 = (longlong *)0x0;
  local_4a8 = local_4a8 & 0xffffff00;
  local_1e0 = param_1;
  FUN_146bdf272(local_1c8,local_678,1);
  if (local_4e8 != (longlong ****)0x0) {
    plVar18 = local_4d8;
    if (local_4d8 == (longlong *)0x0) {
      plVar18 = (longlong *)&local_4c8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  cVar12 = (*(code *)(*param_1)[1])(param_1);
  if (cVar12 == '\0') {
    local_6a0 = param_1[0xd];
    local_690 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_698 = param_1[3];
    local_68f = *(undefined1 *)(param_1 + 1);
    FUN_146c74e26(&local_6a0,local_678);
    cVar12 = (*(code *)(*param_1)[1])(param_1);
    if (cVar12 == '\0') {
      if (*(char *)(param_1 + 1) == '\x01') {
        dVar44 = (double)param_1[2] * (double)param_1[2] * (double)param_1[3] * (double)param_1[3];
        local_258 = (longlong ****)0x0;
        uStack_250 = 0;
        if ((int)uStack_680 < 1) {
          uStack_250._0_4_ = 0;
        }
        else {
          iVar20 = (int)uStack_680;
          iVar26 = 0;
          do {
            iVar34 = *(int *)(local_688 + (longlong)iVar26 * 4);
            iVar23 = iVar34 + iVar26 + 1;
            if (iVar26 + 2 < iVar23) {
              lVar31 = (longlong)iVar26 + 2;
              iVar34 = iVar34 + -1;
              do {
                uVar14 = *(uint *)(local_688 + -4 + lVar31 * 4);
                uVar15 = *(uint *)(local_688 + lVar31 * 4);
                plVar18 = param_1[0xd][2][uVar15 >> 9];
                uVar29 = (ulonglong)uVar15 & 0x1ff;
                plVar7 = param_1[0xd][2][uVar14 >> 9];
                uVar36 = (ulonglong)uVar14 & 0x1ff;
                if (((double)plVar18[uVar29 * 3 + 2] - (double)plVar7[uVar36 * 3 + 2]) *
                    ((double)plVar18[uVar29 * 3 + 2] - (double)plVar7[uVar36 * 3 + 2]) +
                    ((double)plVar18[uVar29 * 3] - (double)plVar7[uVar36 * 3]) *
                    ((double)plVar18[uVar29 * 3] - (double)plVar7[uVar36 * 3]) +
                    ((double)plVar18[uVar29 * 3 + 1] - (double)plVar7[uVar36 * 3 + 1]) *
                    ((double)plVar18[uVar29 * 3 + 1] - (double)plVar7[uVar36 * 3 + 1]) < dVar44) {
                  uVar13 = FUN_146c061e0();
                  uVar36 = uStack_250;
                  lVar32 = (longlong)(int)uStack_250;
                  uVar14 = (int)uStack_250 + 1;
                  uStack_250 = CONCAT44(uStack_250._4_4_,uVar14);
                  if (uStack_250._4_4_ < uVar14) {
                    FUN_1446f48e2(&local_258,uVar36 & 0xffffffff);
                  }
                  *(undefined4 *)((longlong)local_258 + lVar32 * 4) = uVar13;
                }
                lVar31 = lVar31 + 1;
                iVar34 = iVar34 + -1;
              } while (iVar34 != 0);
              iVar20 = (int)uStack_680;
            }
            iVar26 = iVar23;
          } while (iVar23 < iVar20);
        }
        local_4d8 = (longlong *)0x0;
        local_4d0 = 0;
        local_4f8 = (longlong ****)0x0;
        uStack_4f0 = (undefined8 *)0x0;
        uStack_4cc = 0x80;
        local_4c8 = 0xffffffff;
        uStack_4c4 = uStack_4c4 & 0xffffffff00000000;
        local_4b8 = 0;
        local_4b0 = local_4b0 & 0xffffffff00000000;
        pppplStack_320 = (longlong ****)CONCAT44(pppplStack_320._4_4_,(int)uStack_250);
        local_328 = local_258;
        FUN_146bc855c();
        if (0 < (int)uStack_250) {
          lVar31 = 0;
          do {
            uVar14 = *(uint *)((longlong)local_258 + lVar31 * 4);
            if ((-1 < (int)uVar14) &&
               (ppplVar17 = param_1[0xd],
               (int)uVar14 <
               *(int *)(ppplVar17 + 0x3a) * 0x200 + *(int *)((longlong)ppplVar17 + 0x1d4))) {
              if ((ushort)(*(short *)((longlong)ppplVar17[0x3b][uVar14 >> 9] +
                                     (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe) {
                uVar36 = *(ulonglong *)
                          ((longlong)ppplVar17[0x38][uVar14 >> 9] +
                          (ulonglong)((uVar14 & 0x1ff) << 4));
                uVar33 = uVar36 >> 0x20;
                plVar18 = ppplVar17[2][uVar36 >> 9 & 0x7fffff];
                uVar29 = uVar36 & 0x1ff;
                plVar7 = ppplVar17[2][uVar36 >> 0x29];
                uVar28 = uVar33 & 0x1ff;
                if (((double)plVar7[uVar28 * 3 + 2] - (double)plVar18[uVar29 * 3 + 2]) *
                    ((double)plVar7[uVar28 * 3 + 2] - (double)plVar18[uVar29 * 3 + 2]) +
                    ((double)plVar7[uVar28 * 3] - (double)plVar18[uVar29 * 3]) *
                    ((double)plVar7[uVar28 * 3] - (double)plVar18[uVar29 * 3]) +
                    ((double)plVar7[uVar28 * 3 + 1] - (double)plVar18[uVar29 * 3 + 1]) *
                    ((double)plVar7[uVar28 * 3 + 1] - (double)plVar18[uVar29 * 3 + 1]) <= dVar44) {
                  pplVar8 = ppplVar17[0x41];
                  uVar28 = uVar33;
                  uVar29 = uVar36;
                  if (pplVar8 != (longlong **)0x0) {
                    cVar12 = (*(code *)(*pplVar8)[0x12])(pplVar8,uVar33,0);
                    ppplVar17 = param_1[0xd];
                    if ((cVar12 != '\0') &&
                       (pplVar8 = ppplVar17[0x41], uVar28 = uVar36, uVar29 = uVar33,
                       pplVar8 != (longlong **)0x0)) {
                      cVar12 = (*(code *)(*pplVar8)[0x12])(pplVar8,uVar36 & 0xffffffff,0);
                      if (cVar12 != '\0') goto LAB_146c76bea;
                      ppplVar17 = param_1[0xd];
                    }
                  }
                  pppplStack_320 = (longlong ****)0xffffffffffffffff;
                  local_300._0_4_ = 0xffffffff;
                  local_300._4_4_ = 0xffffffff;
                  local_310 = (longlong *)0xffffffffffffffff;
                  ppppplStack_308 = (longlong *****)0xffffffffffffffff;
                  local_888 = (longlong *****)&local_328;
                  iVar20 = (*(code *)(*ppplVar17)[0xe])
                                     (ppplVar17,uVar29 & 0xffffffff,uVar28 & 0xffffffff,
                                      0x3fe0000000000000);
                  if (iVar20 == 0) {
                    lVar32 = 0;
                    bVar35 = true;
                    do {
                      bVar22 = bVar35;
                      if ((int)uStack_4f0 != (int)uStack_4c4) {
                        uVar14 = *(uint *)((longlong)&ppppplStack_308 + lVar32 * 4);
                        lVar30 = local_4b8;
                        if (local_4b8 == 0) {
                          lVar30 = (longlong)&uStack_4c4 + 4;
                        }
                        for (iVar20 = *(int *)(lVar30 + (ulonglong)((int)local_4b0 - 1U & uVar14) *
                                                        4); iVar20 != -1;
                            iVar20 = *(int *)((longlong)local_4f8 + (longlong)iVar20 * 0xc + 4)) {
                          if (*(uint *)((longlong)local_4f8 + (longlong)iVar20 * 0xc) == uVar14) {
                            local_548 = (undefined8 *)
                                        CONCAT44(local_548._4_4_,
                                                 *(undefined4 *)((longlong)&local_300 + lVar32 * 4))
                            ;
                            FUN_1447cbafe(&local_4f8,&local_858,&local_548,&local_578);
                            uVar36 = uStack_250;
                            if ((char)local_578 == '\0') {
                              lVar32 = (longlong)(int)uStack_250;
                              uVar14 = (int)uStack_250 + 1;
                              uStack_250 = CONCAT44(uStack_250._4_4_,uVar14);
                              if (uStack_250._4_4_ < uVar14) {
                                FUN_1446f48e2(&local_258,uVar36 & 0xffffffff);
                              }
                              *(undefined4 *)((longlong)local_258 + lVar32 * 4) = local_548._0_4_;
                            }
                            break;
                          }
                        }
                      }
                      lVar32 = 1;
                      bVar35 = false;
                    } while (bVar22);
                  }
                }
              }
            }
LAB_146c76bea:
            lVar31 = lVar31 + 1;
          } while (lVar31 < (int)uStack_250);
        }
        local_4b0 = local_4b0 & 0xffffffff00000000;
        if (local_4b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_4f8);
        if (local_258 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
      }
      cVar12 = (*(code *)(*param_1)[1])(param_1);
      uVar36 = 0;
      if (cVar12 == '\0') {
        local_6b8 = 0;
        uStack_6b0 = 0;
        local_238 = 0;
        local_230 = 0;
        local_258 = (longlong ****)0x0;
        uStack_250 = 0;
        local_22c = 0xffffffff00000080;
        local_224 = 0;
        local_218 = 0;
        local_210 = 0;
        local_6d0 = param_1[0xd];
        local_6c8 = 0;
        uStack_6c0 = 0;
        FUN_146c38358();
        local_6e8 = param_1[0xd];
        local_6e0 = 0;
        uStack_6d8 = 0;
        local_298 = 0;
        local_288 = 0;
        FUN_142984024(&local_6e8);
        local_6f8 = 0;
        uStack_6f0 = 0;
        local_4f8._0_4_ = 0xffffffff;
        FUN_1448156a8(&local_6f8,&local_4f8,
                      *(int *)(param_1[0xd] + 0x28) * 0x200 +
                      *(int *)((longlong)param_1[0xd] + 0x144));
        if (0 < (int)uStack_6d8) {
          lVar31 = 0;
          do {
            plVar18 = *(longlong **)(local_6e0 + lVar31 * 8);
            lVar32 = (longlong)(int)plVar18[1];
            if (lVar32 != 0) {
              lVar30 = *plVar18;
              lVar27 = 0;
              do {
                *(int *)(local_6f8 + (longlong)*(int *)(lVar30 + lVar27) * 4) = (int)lVar31;
                lVar27 = lVar27 + 4;
              } while (lVar32 * 4 != lVar27);
            }
            lVar31 = lVar31 + 1;
          } while (lVar31 < (int)uStack_6d8);
        }
        local_708 = 0;
        uStack_700 = 0;
        local_4f8 = (longlong ****)CONCAT44(local_4f8._4_4_,0xffffffff);
        FUN_1448156a8();
        ppplVar17 = param_1[0xd];
        if (0 < *(int *)(ppplVar17 + 0x28) * 0x200 + *(int *)((longlong)ppplVar17 + 0x144)) {
          lVar31 = 0;
          iVar20 = 0;
          do {
            lVar32 = (longlong)*(int *)(local_6f8 + lVar31 * 4);
            if ((lVar32 != -1) && (*(int *)(local_708 + lVar32 * 4) == -1)) {
              *(int *)(local_708 + lVar32 * 4) = iVar20;
              iVar20 = iVar20 + 1;
              ppplVar17 = param_1[0xd];
            }
            lVar31 = lVar31 + 1;
            iVar26 = *(int *)(ppplVar17 + 0x28) * 0x200 + *(int *)((longlong)ppplVar17 + 0x144);
          } while (lVar31 < iVar26);
          if (0 < iVar26) {
            lVar31 = 0;
            do {
              lVar32 = (longlong)*(int *)(local_6f8 + lVar31 * 4);
              if (-1 < lVar32) {
                *(undefined4 *)(local_6f8 + lVar31 * 4) = *(undefined4 *)(local_708 + lVar32 * 4);
                ppplVar17 = param_1[0xd];
              }
              lVar31 = lVar31 + 1;
            } while (lVar31 < *(int *)(ppplVar17 + 0x28) * 0x200 +
                              *(int *)((longlong)ppplVar17 + 0x144));
          }
        }
        local_578 = (longlong ****)0x0;
        pppplStack_570 = (longlong ****)0x0;
        local_7f8 = (longlong ****)0x0;
        pdStack_7f0 = (double *)0x0;
        local_4d0 = 0;
        uStack_4cc = 0;
        local_4c8 = 0;
        uStack_4f0 = (undefined8 *)0x0;
        local_4e8 = (longlong ****)0x0;
        uStack_4c4 = 0xffffffff00000080;
        local_4bc = 0;
        local_4b0 = 0;
        local_4a8 = 0;
        local_4a0 = 0;
        local_498 = 0x4000000000000000;
        local_490 = 2;
        local_4f8 = local_1c8;
        FUN_146bef8a8(&local_4f8,1);
        iVar20 = *(int *)(param_1[0xd] + 0x28) * 0x200 + *(int *)((longlong)param_1[0xd] + 0x144);
        FUN_144aa2a62(&local_578,iVar20,1);
        local_328 = (longlong ****)CONCAT44(local_328._4_4_,0xffffffff);
        FUN_1448156a8(&local_7f8,&local_328,iVar20);
        local_318 = (longlong ***)&local_6d0;
        local_310 = &local_6f8;
        local_878 = &local_548;
        local_548 = (undefined8 *)0x0;
        uStack_540 = (longlong ****)((ulonglong)uStack_540._4_4_ << 0x20);
        local_858 = FUN_142981fa0;
        local_880 = (undefined8 *)((ulonglong)local_880._4_4_ << 0x20);
        uStack_850 = (longlong ****)&local_328;
        local_328 = param_1;
        pppplStack_320 = local_1c8;
        ppppplStack_308 = &local_578;
        local_300 = (longlong ****)&local_7f8;
        local_2f8 = &local_4f8;
        FUN_1401f8d10(L"ParallelFor Task",iVar20,1);
        ppplVar17 = param_1[0xd];
        uVar15 = *(int *)(ppplVar17 + 0x28) * 0x200 + *(int *)((longlong)ppplVar17 + 0x144);
        uVar14 = 0;
        if ((uVar15 != 0) && (0xfffd < (ushort)((short)**ppplVar17[0x29] - 1U))) {
          uVar24 = 1;
          uVar16 = 1;
          if (1 < (int)uVar15) {
            uVar16 = uVar15;
          }
          do {
            uVar21 = uVar24;
            uVar14 = uVar16;
            if (uVar16 == uVar21) break;
            uVar24 = uVar21 + 1;
            uVar14 = uVar21;
          } while (0xfffd < (ushort)(*(short *)((longlong)ppplVar17[0x29][uVar21 >> 9] +
                                               (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        }
        if (uVar14 != uVar15) {
          do {
            lVar31 = (longlong)*(int *)((longlong)local_7f8 + (longlong)(int)uVar14 * 4);
            if ((-1 < lVar31) && (*(char *)((longlong)local_578 + lVar31) == '\x01')) {
              *(undefined1 *)((longlong)local_578 + (longlong)(int)uVar14) = 0;
            }
            uVar24 = uVar14 + 1;
            if ((int)(uVar14 + 1) < (int)uVar15) {
              uVar24 = uVar15;
            }
            do {
              uVar16 = uVar24;
              if (uVar24 - 1 == uVar14) break;
              uVar14 = uVar14 + 1;
              uVar16 = uVar14;
            } while (0xfffd < (ushort)(*(short *)((longlong)ppplVar17[0x29][uVar14 >> 9] +
                                                 (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
            uVar14 = uVar16;
          } while (uVar14 != uVar15);
          ppplVar17 = param_1[0xd];
        }
        uVar15 = *(int *)(ppplVar17 + 0x3a) * 0x200 + *(int *)((longlong)ppplVar17 + 0x1d4);
        uVar14 = 0;
        uVar36 = uStack_6b0;
        if ((uVar15 != 0) && (uVar14 = 0, 0xfffd < (ushort)((short)**ppplVar17[0x3b] - 1U))) {
          uVar24 = 1;
          uVar16 = 1;
          if (1 < (int)uVar15) {
            uVar24 = uVar15;
          }
          do {
            uVar21 = uVar16;
            uVar14 = uVar24;
            if (uVar24 == uVar21) break;
            uVar16 = uVar21 + 1;
            uVar14 = uVar21;
          } while (0xfffd < (ushort)(*(short *)((longlong)ppplVar17[0x3b][uVar21 >> 9] +
                                               (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        }
joined_r0x000146c771f6:
        uVar24 = uVar14;
        uStack_6b0 = uVar36;
        if (uVar24 != uVar15) {
          uVar29 = *(ulonglong *)
                    ((longlong)param_1[0xd][0x38][uVar24 >> 9] +
                    (ulonglong)((uVar24 & 0x1ff) << 4) + 8);
          if ((uVar29 < 0xffffffff00000000) &&
             (*(char *)((longlong)local_578 + (longlong)(int)uVar29) !=
              *(char *)((longlong)local_578 + ((longlong)uVar29 >> 0x20)))) {
            uStack_6b0._0_4_ = (int)uVar36;
            lVar31 = (longlong)(int)uStack_6b0;
            uVar14 = (int)uStack_6b0 + 1;
            uStack_6b0._4_4_ = (uint)(uVar36 >> 0x20);
            uStack_6b0 = CONCAT44(uStack_6b0._4_4_,uVar14);
            if (uStack_6b0._4_4_ < uVar14) {
              FUN_1446f48e2(&local_6b8,uVar36 & 0xffffffff);
            }
            *(uint *)(local_6b8 + lVar31 * 4) = uVar24;
            local_328 = *(longlong *****)
                         ((longlong)param_1[0xd][0x38][uVar24 >> 9] +
                         (ulonglong)((uVar24 & 0x1ff) << 4));
            FUN_1447cbafe(&local_258,&local_548,&local_328,0);
            FUN_1447cbafe(&local_258,&local_548,(longlong)&local_328 + 4);
          }
          uVar16 = uVar24 + 1;
          if ((int)(uVar24 + 1) < (int)uVar15) {
            uVar16 = uVar15;
          }
          do {
            uVar14 = uVar16;
            uVar36 = uStack_6b0;
            if (uVar16 - 1 == uVar24) break;
            uVar24 = uVar24 + 1;
            uVar14 = uVar24;
          } while (0xfffd < (ushort)(*(short *)((longlong)ppplVar17[0x3b][uVar24 >> 9] +
                                               (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
          goto joined_r0x000146c771f6;
        }
        if (0 < (int)pppplStack_570) {
          uVar36 = 0;
          iVar20 = (int)pppplStack_570;
          do {
            ppplVar17 = param_1[0xd];
            if ((((longlong)uVar36 <
                  (longlong)
                  (*(int *)(ppplVar17 + 0x28) * 0x200 + *(int *)((longlong)ppplVar17 + 0x144))) &&
                (uVar14 = (uint)uVar36 & 0x1ff,
                (ushort)(*(short *)((longlong)ppplVar17[0x29][uVar36 >> 9 & 0x7fffff] +
                                   (ulonglong)uVar14 * 2) - 1U) < 0xfffe)) &&
               (*(char *)((longlong)local_578 + uVar36) == '\0')) {
              FUN_146c0b65a(ppplVar17,uVar36 & 0xffffffff,CONCAT71((uint7)(uint3)(uVar14 >> 8),1),0)
              ;
              iVar20 = (int)pppplStack_570;
            }
            uVar36 = uVar36 + 1;
          } while ((longlong)uVar36 < (longlong)iVar20);
        }
        local_4a8 = 0;
        if (local_4b0 != 0) {
          FUN_1400020a8();
        }
        FUN_146bddd50(&uStack_4f0);
        if (local_7f8 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        if (local_578 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        cVar12 = (*(code *)(*param_1)[1])(param_1);
        uVar36 = 0;
        if (cVar12 == '\0') {
          FUN_145c688c4(param_1[0xd],&local_4f8,1);
          dVar44 = (double)CONCAT44(uStack_4cc,local_4d0) - (double)local_4e8;
          dVar44 = (double)(-(ulonglong)(0.0 <= dVar44) & (ulonglong)dVar44);
          dVar47 = (double)(-(ulonglong)(0.0 <= (double)local_4d8 - (double)uStack_4f0) &
                           (ulonglong)((double)local_4d8 - (double)uStack_4f0));
          uVar36 = -(ulonglong)(dVar44 <= dVar47);
          dVar44 = (double)(~uVar36 & (ulonglong)dVar44 | uVar36 & (ulonglong)dVar47);
          dVar47 = (double)(-(ulonglong)(0.0 <= (double)local_4e0 - (double)local_4f8) &
                           (ulonglong)((double)local_4e0 - (double)local_4f8));
          uVar36 = -(ulonglong)(dVar44 <= dVar47);
          ppppplStack_308 = (longlong *****)0x0;
          local_300._0_4_ = 0;
          local_328 = (longlong ****)0x0;
          pppplStack_320 = (longlong ****)0x0;
          local_300._4_4_ = 0x80;
          local_2f8._0_4_ = 0xffffffff;
          local_2f8._4_4_ = 0;
          local_2e8 = 0;
          local_2e0 = 0;
          InitializeCriticalSection(&local_2d8);
          SetCriticalSectionSpinCount(&local_2d8,4000);
          local_2b0 = (double)(uVar36 & (ulonglong)dVar47 | ~uVar36 & (ulonglong)dVar44) * 0.015625;
          local_2a8 = 0xffffffff;
          local_548 = (undefined8 *)&DAT_100000000;
          uStack_540 = local_248;
          local_538 = (longlong ***)0xffffffff;
          local_530 = 0;
          uVar14 = 0;
          if (local_230 != 0) {
            FUN_1449c0562(&local_548);
            uVar14 = local_230;
          }
          local_4e0 = local_538;
          ppplVar17 = local_4e0;
          local_4d8 = (longlong *)CONCAT44(local_52c,local_530);
          uStack_4f0 = local_548;
          local_4e8 = uStack_540;
          local_4f8 = (longlong ****)&local_258;
          local_4e0._4_4_ = (uint)((ulonglong)local_538 >> 0x20);
          if ((local_4e0._4_4_ != uVar14) || (uStack_540 != local_248)) {
            uVar15 = local_4e0._4_4_;
            local_4e0 = ppplVar17;
            do {
              uVar15 = *(uint *)((longlong)*local_4f8 + (longlong)(int)uVar15 * 0xc);
              local_7f8 = (longlong ****)CONCAT44(local_7f8._4_4_,uVar15);
              plVar18 = param_1[0xd][2][uVar15 >> 9];
              uVar36 = (ulonglong)(uVar15 & 0x1ff);
              auVar41._0_8_ = (double)plVar18[uVar36 * 3 + 2] / local_2b0;
              auVar41._8_8_ = 0;
              auVar41 = roundsd(auVar41,auVar41,9);
              auVar38._0_8_ = (double)plVar18[uVar36 * 3 + 1] / local_2b0;
              auVar38._8_8_ = 0;
              auVar38 = roundsd(auVar38,auVar38,9);
              auVar37._0_8_ = (double)plVar18[uVar36 * 3] / local_2b0;
              auVar37._8_8_ = 0;
              auVar37 = roundsd(auVar37,auVar37,9);
              local_858 = (code *)CONCAT44((int)auVar38._0_8_,(int)auVar37._0_8_);
              uStack_850 = (longlong ****)CONCAT44(uStack_850._4_4_,(int)auVar41._0_8_);
              local_548 = &local_858;
              uStack_540 = (longlong ****)&local_7f8;
              FUN_146be634e(&local_328,&local_578,&local_548,0);
              local_4e0 = (longlong ***)
                          CONCAT44(local_4e0._4_4_,(uint)local_4e0 & ~uStack_4f0._4_4_);
              FUN_1449c0562(&uStack_4f0);
              uVar15 = local_4e0._4_4_;
              ppplVar17 = local_4e0;
            } while ((longlong *****)local_4f8 != &local_258 ||
                     (local_4e8 != local_248 || local_4e0._4_4_ != uVar14));
          }
          local_4e0 = ppplVar17;
          FUN_1458481c0(&local_4f8);
          lVar31 = local_6b8;
          local_4f8 = (longlong ****)0x3fd0000000000000;
          local_4e8 = (longlong ****)CONCAT44(local_4e8._4_4_,7);
          lVar32 = (longlong)(int)uStack_6b0;
          local_728 = &local_4f8;
          local_720 = param_1;
          local_718 = &local_4f8;
          local_710 = param_1;
          if (lVar32 != 0) {
            lVar30 = 0;
            do {
              uVar13 = *(undefined4 *)(lVar31 + lVar30);
              FUN_14297f2cc(&local_710,&local_548,uVar13);
              FUN_146c86256(&local_4f8,uVar13,&local_548);
              lVar30 = lVar30 + 4;
            } while (lVar32 * 4 != lVar30);
          }
          local_738 = 0;
          uStack_730 = 0;
          uVar36 = 0;
          local_528 = 0;
          local_520 = 0;
          local_548 = (undefined8 *)0x0;
          uStack_540 = (longlong ****)0x0;
          local_51c = 0xffffffff00000080;
          local_514 = 0;
          local_508 = (undefined1 *)0x0;
          local_500 = 0;
          ppplVar17 = param_1[3];
          local_748 = 0;
          uStack_740 = 0;
          local_758 = (longlong **)0x0;
          uStack_750 = 0;
          local_858 = (code *)&DAT_100000000;
          uStack_848 = 0xffffffff;
          iStack_844 = 0;
          local_840 = 0;
          uStack_850 = local_248;
          if (local_230 != 0) {
            FUN_1449c0562(&local_858);
            uVar36 = (ulonglong)local_230;
          }
          local_768 = CONCAT44(iStack_844,uStack_848);
          local_760 = local_840;
          local_75c = iStack_83c;
          local_778 = (longlong ***)local_858;
          local_770 = uStack_850;
          local_780 = (longlong ****)&local_258;
          if ((iStack_844 != (int)uVar36) || (uStack_850 != local_248)) {
            dVar44 = (double)ppplVar17 * (double)ppplVar17;
            iVar20 = iStack_844;
            local_868 = dVar44;
            local_860 = uVar36;
            do {
              local_784 = *(uint *)((longlong)*local_780 + (longlong)iVar20 * 0xc);
              if ((int)uStack_540 != local_514) {
                puVar19 = local_508;
                if (local_508 == (undefined1 *)0x0) {
                  puVar19 = local_510;
                }
                for (iVar20 = *(int *)(puVar19 + (ulonglong)(local_500 - 1U & local_784) * 4);
                    iVar20 != -1; iVar20 = *(int *)(local_548 + (longlong)iVar20 * 2 + 1)) {
                  if (*(uint *)(local_548 + (longlong)iVar20 * 2) == local_784) goto LAB_146c77cf4;
                }
              }
              local_798 = (double)param_1[0xd][2][local_784 >> 9]
                                  [(ulonglong)(local_784 & 0x1ff) * 3 + 2];
              pdVar1 = (double *)
                       (param_1[0xd][2][local_784 >> 9] + (ulonglong)(local_784 & 0x1ff) * 3);
              local_7a8 = *pdVar1;
              dStack_7a0 = pdVar1[1];
              bVar35 = (longlong)uStack_740 < 0;
              uStack_740 = uStack_740 & 0xffffffff00000000;
              if (bVar35) {
                FUN_14481578e(&local_748,0);
              }
              uVar36 = 0;
              uVar14 = uStack_750._4_4_;
              if ((longlong)uStack_750 < 0) {
                uStack_750 = (ulonglong)uStack_750._4_4_ << 0x20;
                FUN_14481578e(&local_758,0);
                uVar36 = uStack_750 & 0xffffffff;
                uVar14 = uStack_750._4_4_;
              }
              uVar15 = (int)uVar36 + 1;
              uStack_750 = CONCAT44(uStack_750._4_4_,uVar15);
              if (uVar14 < uVar15) {
                FUN_1446f48e2(&local_758,uVar36);
              }
              *(uint *)((longlong)local_758 + (longlong)(int)uVar36 * 4) = local_784;
              FUN_146c12af6(param_1[0xd],local_784,&local_748);
              lVar31 = local_748;
              lVar32 = (longlong)(int)uStack_740;
              if (lVar32 != 0) {
                lVar30 = 0;
                do {
                  uVar36 = uStack_750;
                  uVar24 = local_784;
                  uVar29 = (ulonglong)((*(uint *)(lVar31 + lVar30) & 0x1ff) << 4);
                  uVar14 = *(uint *)((longlong)param_1[0xd][0x38][*(uint *)(lVar31 + lVar30) >> 9] +
                                    uVar29);
                  uVar15 = *(uint *)((longlong)param_1[0xd][0x38][*(uint *)(lVar31 + lVar30) >> 9] +
                                    uVar29 + 4);
                  lVar27 = (longlong)(int)uStack_750;
                  uVar16 = (int)uStack_750 + 1;
                  uStack_750 = CONCAT44(uStack_750._4_4_,uVar16);
                  if (uStack_750._4_4_ < uVar16) {
                    FUN_1446f48e2(&local_758,uVar36 & 0xffffffff);
                  }
                  if (uVar14 != uVar24) {
                    uVar15 = uVar14;
                  }
                  *(uint *)((longlong)local_758 + lVar27 * 4) = uVar15;
                  lVar30 = lVar30 + 4;
                } while (lVar32 * 4 != lVar30);
              }
              local_7c0 = &local_758;
              pdStack_7f0 = &local_7a8;
              local_858 = (code *)&LAB_142982522;
              uStack_850 = &local_7c0;
              local_578 = (longlong ****)&LAB_1429824c8;
              pppplStack_570 = (longlong ****)&local_7f8;
              local_880 = &local_858;
              local_888 = &local_578;
              local_7f8 = param_1;
              FUN_146c80058(&local_328,local_7b8,pdStack_7f0,param_1[3]);
              local_7c4 = local_7b8[0];
              if ((ulonglong)local_7b8[0] == 0xffffffff) {
LAB_146c77ef7:
                ppplVar17 = param_1[3];
                local_7e8 = local_798 - (double)ppplVar17;
                pdStack_7f0 = (double *)(dStack_7a0 - (double)ppplVar17);
                local_7f8 = (longlong ****)(local_7a8 - (double)ppplVar17);
                local_7d0 = local_798 + (double)ppplVar17;
                local_7d8 = dStack_7a0 + (double)ppplVar17;
                local_7e0 = (double)ppplVar17 + local_7a8;
                bVar35 = (longlong)uStack_730 < 0;
                uStack_730 = uStack_730 & 0xffffffff00000000;
                if (bVar35) {
                  FUN_14481578e(&local_738,0);
                }
                FUN_146c88a30(&local_4f8,&local_7f8,&local_738);
                local_808 = local_798;
                local_818 = local_7a8;
                dStack_810 = dStack_7a0;
                uVar14 = FUN_146c786a2(param_1,&local_738,&local_748);
                uVar36 = local_860;
                if (uVar14 != 0xffffffff) {
                  ppplVar17 = param_1[0xd];
                  uVar29 = *(ulonglong *)
                            ((longlong)ppplVar17[0x38][uVar14 >> 9] +
                            (ulonglong)((uVar14 & 0x1ff) << 4));
                  plVar18 = ppplVar17[2][uVar29 >> 9 & 0x7fffff];
                  uVar28 = uVar29 & 0x1ff;
                  dVar47 = (double)plVar18[uVar28 * 3];
                  dVar2 = (double)plVar18[uVar28 * 3 + 1];
                  dVar3 = (double)plVar18[uVar28 * 3 + 2];
                  if (dVar44 < (local_798 - dVar3) * (local_798 - dVar3) +
                               (local_7a8 - dVar47) * (local_7a8 - dVar47) +
                               (dStack_7a0 - dVar2) * (dStack_7a0 - dVar2)) {
                    plVar18 = ppplVar17[2][uVar29 >> 0x29];
                    uVar29 = uVar29 >> 0x20 & 0x1ff;
                    dVar4 = (double)plVar18[uVar29 * 3];
                    dVar5 = (double)plVar18[uVar29 * 3 + 1];
                    dVar6 = (double)plVar18[uVar29 * 3 + 2];
                    if (dVar44 < (local_798 - dVar6) * (local_798 - dVar6) +
                                 (local_7a8 - dVar4) * (local_7a8 - dVar4) +
                                 (dStack_7a0 - dVar5) * (dStack_7a0 - dVar5)) {
                      dVar10 = dVar6 - dVar3;
                      dVar45 = dVar5 - dVar2;
                      dVar42 = dVar4 - dVar47;
                      dVar44 = SQRT(dVar10 * dVar10 + dVar42 * dVar42 + dVar45 * dVar45);
                      dVar40 = 0.0;
                      dVar46 = 0.0;
                      dVar43 = 0.0;
                      dVar39 = 0.0;
                      if (0.0 < dVar44) {
                        dVar40 = 1.0 / dVar44;
                        dVar43 = dVar42 * dVar40;
                        dVar46 = dVar45 * dVar40;
                        dVar40 = dVar10 * dVar40;
                        dVar39 = dVar44 * 0.5;
                      }
                      dVar47 = (((local_7a8 - (dVar47 + dVar4) * 0.5) * dVar43 +
                                 (dStack_7a0 - (dVar2 + dVar5) * 0.5) * dVar46 +
                                (local_798 - (dVar3 + dVar6) * 0.5) * dVar40) / dVar39 + 1.0) * 0.5;
                      dVar44 = 1.0;
                      if (dVar47 <= 1.0) {
                        dVar44 = dVar47;
                      }
                      local_858 = (code *)CONCAT44(0xffffffff,(undefined4)local_858);
                      uStack_850 = (longlong ****)0xffffffffffffffff;
                      uStack_848 = 0xffffffff;
                      iStack_844 = -1;
                      local_840 = 0xffffffff;
                      local_834 = 0xffffffff;
                      uStack_830 = 0xffffffff;
                      uStack_82c = 0xffffffff;
                      uStack_828 = 0xffffffff;
                      local_824 = 0xffffffff;
                      iVar20 = (*(code *)(*ppplVar17)[6])
                                         (ppplVar17,uVar14,&local_858,
                                          ~-(ulonglong)(dVar47 < 0.0) & (ulonglong)dVar44);
                      dVar44 = local_868;
                      uVar36 = local_860;
                      if (iVar20 == 0) {
                        local_578 = (longlong ****)&local_838;
                        pppplStack_570 = (longlong ****)&local_784;
                        FUN_140263e2a(&local_548,&local_7c0,&local_578,0);
                        local_578 = (longlong ****)&local_784;
                        pppplStack_570 = (longlong ****)&local_838;
                        FUN_140263e2a(&local_548,&local_7c0,&local_578,0);
                        uVar15 = local_838;
                        ppplVar17 = param_1[0xd];
                        cVar12 = FUN_146bfed03(&local_7a8);
                        uVar36 = uStack_6b0;
                        if (cVar12 != '\0') {
                          plVar18 = ppplVar17[2][uVar15 >> 9];
                          uVar29 = (ulonglong)(uVar15 & 0x1ff);
                          plVar18[uVar29 * 3 + 2] = (longlong)local_798;
                          pdVar1 = (double *)(plVar18 + uVar29 * 3);
                          *pdVar1 = local_7a8;
                          pdVar1[1] = dStack_7a0;
                          if (*(char *)(ppplVar17 + 0x42) == '\x01') {
                            LOCK();
                            *(int *)((longlong)ppplVar17 + 0x214) =
                                 *(int *)((longlong)ppplVar17 + 0x214) + 1;
                            UNLOCK();
                          }
                        }
                        lVar31 = (longlong)(int)uStack_6b0;
                        uVar15 = (int)uStack_6b0 + 1;
                        uStack_6b0 = CONCAT44(uStack_6b0._4_4_,uVar15);
                        if (uStack_6b0._4_4_ < uVar15) {
                          FUN_1446f48e2(&local_6b8,uVar36 & 0xffffffff);
                        }
                        ppppplVar11 = local_728;
                        *(undefined4 *)(local_6b8 + lVar31 * 4) = uStack_82c;
                        FUN_14297f2cc(&local_720,&local_578,uVar14);
                        FUN_146c87142(ppppplVar11,uVar14,&local_578);
                        ppppplVar11 = local_718;
                        uVar13 = uStack_82c;
                        FUN_14297f2cc(&local_710,&local_578,uStack_82c);
                        FUN_146c86256(ppppplVar11,uVar13,&local_578);
                        uVar36 = local_860;
                      }
                    }
                  }
                }
              }
              else {
                if ((int)uStack_540 != local_514) {
                  puVar19 = local_508;
                  if (local_508 == (undefined1 *)0x0) {
                    puVar19 = local_510;
                  }
                  iVar20 = *(int *)(puVar19 + (ulonglong)(local_500 - 1U & local_7b8[0]) * 4);
                  while (iVar20 != -1) {
                    puVar9 = local_548 + (longlong)iVar20 * 2;
                    if (*(uint *)(local_548 + (longlong)iVar20 * 2) == local_7b8[0]) {
                      if ((uint *)((longlong)puVar9 + 4) != (uint *)0x0 &&
                          puVar9 != (undefined8 *)0x0) {
                        plVar18 = param_1[0xd][2][local_7b8[0] >> 9];
                        uVar36 = (ulonglong)local_7b8[0] & 0x1ff;
                        uVar14 = *(uint *)((longlong)puVar9 + 4);
                        plVar7 = param_1[0xd][2][uVar14 >> 9];
                        uVar29 = (ulonglong)uVar14 & 0x1ff;
                        if (local_7b0 <
                            ((double)plVar18[uVar36 * 3 + 2] - (double)plVar7[uVar29 * 3 + 2]) *
                            ((double)plVar18[uVar36 * 3 + 2] - (double)plVar7[uVar29 * 3 + 2]) +
                            ((double)plVar18[uVar36 * 3] - (double)plVar7[uVar29 * 3]) *
                            ((double)plVar18[uVar36 * 3] - (double)plVar7[uVar29 * 3]) +
                            ((double)plVar18[uVar36 * 3 + 1] - (double)plVar7[uVar29 * 3 + 1]) *
                            ((double)plVar18[uVar36 * 3 + 1] - (double)plVar7[uVar29 * 3 + 1])) {
                          uStack_850 = (longlong ****)&local_784;
                          local_858 = (code *)&local_7c4;
                          FUN_140263e2a(&local_548,&local_578,&local_858,0);
                          local_858 = (code *)&local_784;
                          uStack_850 = (longlong ****)&local_7c4;
                          FUN_140263e2a(&local_548,&local_578,&local_858,0);
                          FUN_14573a2c8(&local_548,uVar14);
                          local_784 = uVar14;
                          FUN_146c12af6(param_1[0xd],uVar14,&local_748);
                          pdVar1 = (double *)
                                   (param_1[0xd][2][local_784 >> 9] +
                                   (ulonglong)(local_784 & 0x1ff) * 3);
                          local_7a8 = *pdVar1;
                          dStack_7a0 = pdVar1[1];
                          local_798 = (double)param_1[0xd][2][local_784 >> 9]
                                              [(ulonglong)(local_784 & 0x1ff) * 3 + 2];
                        }
                        local_7c4 = 0xffffffff;
                        goto LAB_146c77ef7;
                      }
                      break;
                    }
                    iVar20 = *(int *)(puVar9 + 1);
                  }
                }
                local_858 = (code *)&local_7c4;
                uStack_850 = (longlong ****)&local_784;
                FUN_140263e2a(&local_548,&local_578,&local_858,0);
                local_858 = (code *)&local_784;
                uStack_850 = (longlong ****)&local_7c4;
                FUN_140263e2a(&local_548,&local_578,&local_858);
                uVar36 = local_860;
                if (local_7c4 == 0xffffffff) goto LAB_146c77ef7;
              }
LAB_146c77cf4:
              local_768 = CONCAT44(local_768._4_4_,(uint)local_768 & ~local_778._4_4_);
              FUN_1449c0562(&local_778);
              iVar20 = local_768._4_4_;
            } while ((longlong *****)local_780 != &local_258 ||
                     (local_770 != local_248 || local_768._4_4_ != (int)uVar36));
          }
          pppplVar25 = local_248;
          if (local_758 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          if (local_748 != 0) {
            FUN_1400020a8();
          }
          local_578 = (longlong ****)&DAT_100000000;
          local_568 = 0xffffffff;
          local_560 = 0;
          iVar20 = 0;
          pppplStack_570 = &local_538;
          if (local_520 != 0) {
            FUN_1449c0562(&local_578);
            iVar20 = local_520;
          }
          local_840 = (uint)local_568;
          iStack_83c = (int)((ulonglong)local_568 >> 0x20);
          local_838 = local_560;
          local_834 = local_55c;
          uStack_850 = local_578;
          uStack_848 = SUB84(pppplStack_570,0);
          iStack_844 = (int)((ulonglong)pppplStack_570 >> 0x20);
          local_858 = (code *)&local_548;
          if ((iStack_83c != iVar20) || (pppplStack_570 != &local_538)) {
            pppplVar25 = (longlong ****)&uStack_850;
            do {
              puVar9 = *(undefined8 **)local_858;
              lVar31 = (longlong)iStack_83c * 0x10;
              uVar14 = *(uint *)(puVar9 + (longlong)iStack_83c * 2);
              if ((int)uVar14 <= *(int *)((longlong)puVar9 + lVar31 + 4)) {
                ppplVar17 = param_1[0xd];
                local_568 = ppplVar17[2][uVar14 >> 9][(ulonglong)(uVar14 & 0x1ff) * 3 + 2];
                plVar18 = ppplVar17[2][uVar14 >> 9] + (ulonglong)(uVar14 & 0x1ff) * 3;
                local_578 = (longlong ****)*plVar18;
                pppplStack_570 = (longlong ****)plVar18[1];
                uVar14 = *(uint *)((longlong)puVar9 + lVar31 + 4);
                cVar12 = FUN_146bfed03(&local_578);
                if (cVar12 != '\0') {
                  plVar18 = ppplVar17[2][uVar14 >> 9];
                  uVar36 = (ulonglong)(uVar14 & 0x1ff);
                  plVar18[uVar36 * 3 + 2] = local_568;
                  plVar18 = plVar18 + uVar36 * 3;
                  *plVar18 = (longlong)local_578;
                  plVar18[1] = (longlong)pppplStack_570;
                  if (*(char *)(ppplVar17 + 0x42) == '\x01') {
                    LOCK();
                    *(int *)((longlong)ppplVar17 + 0x214) =
                         *(int *)((longlong)ppplVar17 + 0x214) + 1;
                    UNLOCK();
                  }
                }
              }
              local_840 = local_840 & ~uStack_850._4_4_;
              FUN_1449c0562(pppplVar25);
            } while ((undefined8 **)local_858 != &local_548 ||
                     ((longlong ****)CONCAT44(iStack_844,uStack_848) != &local_538 ||
                     iStack_83c != iVar20));
          }
          if (*(char *)(param_1 + 8) != '\0') {
            FUN_146c78940(param_1,&local_6b8,&local_548);
          }
          cVar12 = (*(code *)(*param_1)[1])(param_1);
          if (cVar12 == '\0') {
            uVar36 = CONCAT71((int7)((ulonglong)pppplVar25 >> 8),1);
            if (*(char *)((longlong)param_1 + 0x31) == '\x01') {
              uVar14 = FUN_146c793fc(param_1,&local_6b8,&local_548);
              uVar36 = (ulonglong)uVar14;
            }
            if ((*(char *)((longlong)param_1 + 0x32) == '\x01') &&
               (iVar20 = *(int *)(param_1 + 0xf), (longlong)iVar20 != 0)) {
              ppplVar17 = param_1[0xe];
              lVar31 = 0;
              do {
                local_858 = (code *)CONCAT44(local_858._4_4_,
                                             *(undefined4 *)((longlong)ppplVar17 + lVar31));
                FUN_1447cbafe(param_1 + 0x10,&local_578,&local_858,0);
                lVar31 = lVar31 + 4;
              } while ((longlong)iVar20 * 4 != lVar31);
            }
            FUN_146c3cd49(param_1[0xd],&local_648,0);
          }
          else {
            uVar36 = 0;
          }
          local_500 = 0;
          if (local_508 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_144a6bfa8(&local_548);
          if (local_738 != 0) {
            FUN_1400020a8();
          }
          FUN_145820e5c(&local_4f8);
          FUN_146be6294(&local_328);
        }
        if (local_708 != 0) {
          FUN_1400020a8();
        }
        if (local_6f8 != 0) {
          FUN_1400020a8();
        }
        FUN_146be9400(&local_6e0);
        if (local_6c8 != 0) {
          FUN_1400020a8();
        }
        local_210 = 0;
        if (local_218 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_258);
        if (local_6b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      uVar36 = 0;
    }
    if (local_688 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar36 = 0;
  }
  FUN_146c74de8(local_678);
  FUN_1457e5b52(local_1c8);
  if ((local_f0 ^ (ulonglong)auStack_8a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar36 & 0xffffffff;
}



// FUNCTION 146c786a2 FUN_146c786a2 body=669 status=ok
// SIG undefined FUN_146c786a2(void)

uint FUN_146c786a2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    puVar11 = (uint *)*param_2;
    puVar1 = puVar11 + *(int *)(param_2 + 1);
    dVar6 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x18);
    uVar9 = 0xffffffff;
    do {
      uVar4 = *puVar11;
      if ((longlong)(int)param_3[1] != 0) {
        lVar7 = 0;
        do {
          if (*(uint *)(*param_3 + lVar7) == uVar4) goto LAB_146c788ce;
          lVar7 = lVar7 + 4;
        } while ((longlong)(int)param_3[1] * 4 != lVar7);
      }
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
      uVar8 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8
                 ) + (ulonglong)((uVar4 & 0x1ff) << 4));
      lVar5 = *(longlong *)(lVar7 + (uVar8 >> 9 & 0x7fffff) * 8);
      uVar10 = uVar8 & 0x1ff;
      dVar15 = *(double *)(lVar5 + uVar10 * 0x18);
      dVar2 = *(double *)(lVar5 + 8 + uVar10 * 0x18);
      dVar3 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
      lVar7 = *(longlong *)(lVar7 + (uVar8 >> 0x29) * 8);
      uVar8 = uVar8 >> 0x20 & 0x1ff;
      dVar12 = *(double *)(lVar7 + uVar8 * 0x18);
      dVar13 = *(double *)(lVar7 + 8 + uVar8 * 0x18);
      dVar14 = *(double *)(lVar7 + 0x10 + uVar8 * 0x18);
      local_e0 = (dVar3 + dVar14) * 0.5;
      local_e8 = (dVar2 + dVar13) * 0.5;
      local_f0 = (dVar15 + dVar12) * 0.5;
      dVar14 = dVar14 - dVar3;
      dVar13 = dVar13 - dVar2;
      dVar12 = dVar12 - dVar15;
      dVar15 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
      local_d8 = 0.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c0 = 0.0;
      if (0.0 < dVar15) {
        local_c8 = 1.0 / dVar15;
        local_d8 = dVar12 * local_c8;
        local_d0 = dVar13 * local_c8;
        local_c8 = dVar14 * local_c8;
        local_c0 = dVar15 * 0.5;
      }
      dVar15 = (double)FUN_146c7eea6(&local_f0,param_4,local_b8);
      if (dVar15 < dVar6) {
        uVar9 = uVar4;
        dVar6 = dVar15;
      }
LAB_146c788ce:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c78940 FUN_146c78940 body=2747 status=ok
// SIG undefined FUN_146c78940(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c78940(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  longlong *plVar15;
  uint *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  uint *puVar27;
  bool bVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_348 [32];
  code **local_328;
  double *local_320;
  uint local_318;
  code **local_310;
  double *local_308;
  undefined1 local_300;
  undefined1 local_2f8;
  undefined1 local_2f0;
  undefined1 local_2e8;
  float local_2e0;
  undefined1 local_2d8;
  float local_2d0;
  undefined1 local_2ba [2];
  uint *local_2b8;
  int local_2ac;
  longlong *local_2a8;
  longlong *local_2a0;
  ulonglong local_298;
  uint *local_290;
  ulonglong local_288;
  uint *local_280;
  uint *local_278;
  uint local_270;
  uint local_26c;
  ulonglong local_268;
  ulonglong local_260;
  longlong *local_258;
  code *local_250;
  code **local_248;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  undefined8 local_228;
  code *local_218;
  double local_210;
  undefined8 local_208;
  double *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  code *local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  uint local_188 [4];
  longlong local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  dVar7 = cos(*(double *)(param_1 + 0x48) * 0.017453292519943295);
  uVar24 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_178 = *param_2;
  local_170 = (undefined4)param_2[1];
  FUN_146bc855c(&local_f8);
  local_258 = param_3 + 7;
  bVar12 = true;
  do {
    if (!bVar12) break;
    local_2ac = (int)uVar24;
    local_288 = uVar24 & 0xffffffff;
    if ((longlong)(int)param_2[1] != 0) {
      puVar27 = (uint *)*param_2;
      puVar19 = puVar27 + (int)param_2[1];
      local_288 = uVar24 & 0xffffffff;
      local_2b8 = puVar19;
      do {
        uVar3 = *puVar27;
        if ((-1 < (int)uVar3) &&
           (lVar21 = *(longlong *)(param_1 + 0x68),
           (int)uVar3 < *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))) {
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar21 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                                 (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
            puVar16 = (uint *)(*(longlong *)
                                (*(longlong *)(lVar21 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                              (ulonglong)((uVar3 & 0x1ff) << 4));
            local_188[0] = *puVar16;
            local_188[1] = puVar16[1];
            local_188[2] = puVar16[2];
            local_188[3] = puVar16[3];
            local_100 = (undefined1  [8])0xffffffffffffffff;
            plVar15 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar15 = local_258;
            }
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              lVar11 = param_3[9];
              lVar6 = *param_3;
              puVar25 = (undefined8 *)local_100;
              puVar16 = local_188;
              bVar12 = true;
              do {
                bVar28 = bVar12;
                iVar20 = *(int *)((longlong)plVar15 + (ulonglong)(*puVar16 & (int)lVar11 - 1U) * 4);
                while( true ) {
                  puVar19 = local_2b8;
                  if (iVar20 == -1) goto LAB_146c78b82;
                  lVar1 = lVar6 + (longlong)iVar20 * 0x10;
                  if (*(uint *)(lVar6 + (longlong)iVar20 * 0x10) == *puVar16) break;
                  iVar20 = *(int *)(lVar1 + 8);
                }
                if ((lVar1 == 0) || ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0))
                goto LAB_146c78b82;
                *(undefined4 *)puVar25 = *(undefined4 *)(lVar1 + 4);
                puVar25 = (undefined8 *)((longlong)local_100 + 4);
                puVar16 = local_188 + 1;
                bVar12 = false;
              } while (bVar28);
              uVar24 = (ulonglong)local_100 & 0xffffffff;
              local_270 = FUN_146c061e0(lVar21,uVar24,local_100._4_4_);
              puVar19 = local_2b8;
              if (local_270 != 0xffffffff) {
                iVar20 = 0;
                local_2ba[1] = 0;
                local_2ba[0] = '\0';
                local_158 = DAT_14c8464f0;
                local_168 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_160 = (undefined4)DAT_14c8464e8;
                uStack_15c = DAT_14c8464e8._4_4_;
                local_150 = (undefined4)DAT_14c8464e0;
                uStack_14c = DAT_14c8464e0._4_4_;
                uStack_148 = (undefined4)DAT_14c8464e8;
                uStack_144 = DAT_14c8464e8._4_4_;
                local_140 = DAT_14c8464f0;
                local_138 = (undefined4)DAT_14c8464e0;
                uStack_134 = DAT_14c8464e0._4_4_;
                uStack_130 = (undefined4)DAT_14c8464e8;
                uStack_12c = DAT_14c8464e8._4_4_;
                local_128 = DAT_14c8464f0;
                local_120 = (undefined4)DAT_14c8464e0;
                uStack_11c = DAT_14c8464e0._4_4_;
                uStack_118 = (undefined4)DAT_14c8464e8;
                uStack_114 = DAT_14c8464e8._4_4_;
                local_110 = DAT_14c8464f0;
                uVar22 = CONCAT71((int7)(uVar24 >> 8),1);
                puVar25 = &local_168;
                puVar19 = (uint *)(local_2ba + 1);
                puVar23 = (undefined8 *)local_100;
                puVar16 = local_188;
                local_2a8 = param_3;
                local_2a0 = param_2;
                local_298 = param_1;
                do {
                  uVar24 = local_298;
                  local_278 = (uint *)CONCAT44(local_278._4_4_,(int)uVar22);
                  local_290 = (uint *)CONCAT44(local_290._4_4_,iVar20);
                  local_218 = *(code **)(local_298 + 0x68);
                  local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
                  local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
                  local_250 = FUN_1429805ee;
                  local_280 = puVar19;
                  local_248 = &local_218;
                  local_210 = dVar7;
                  local_208 = puVar25;
                  local_200 = &local_1a8;
                  uStack_1f8 = &local_1c8;
                  FUN_146c03fd0(local_218,*puVar16,&local_250);
                  if ((byte)local_1c8 == '\x01') {
                    local_208 = puVar25 + 3;
                    local_218 = *(code **)(uVar24 + 0x68);
                    local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
                    local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
                    local_250 = FUN_1429805ee;
                    local_248 = &local_218;
                    local_210 = dVar7;
                    local_200 = &local_1a8;
                    uStack_1f8 = &local_1c8;
                    FUN_146c03fd0(local_218,*(undefined4 *)puVar23,&local_250);
                    bVar14 = (byte)local_1c8;
                  }
                  else {
                    bVar14 = 0;
                  }
                  *(byte *)local_280 = bVar14;
                  param_1 = local_298;
                  iVar20 = (int)local_290 + (uint)bVar14;
                  puVar25 = (undefined8 *)&local_138;
                  puVar19 = (uint *)local_2ba;
                  puVar23 = (undefined8 *)((longlong)local_100 + 4);
                  puVar16 = local_188 + 1;
                  uVar22 = 0;
                } while (((ulonglong)local_278 & 1) != 0);
                puVar19 = local_2b8;
                param_2 = local_2a0;
                param_3 = local_2a8;
                if (iVar20 != 0) {
                  uVar24 = CONCAT71((int7)((ulonglong)puVar23 >> 8),1);
                  pcVar17 = local_2ba + 1;
                  local_290 = (uint *)local_100;
                  puVar16 = local_188;
                  uVar29 = 0;
                  do {
                    if (*pcVar17 == '\x01') {
                      uVar18 = uVar29 ^ 1;
                      uVar4 = *puVar16;
                      lVar21 = *(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) +
                                (ulonglong)(uVar4 >> 9) * 8);
                      uVar26 = (ulonglong)uVar4 & 0x1ff;
                      local_198 = *(double *)(lVar21 + 0x10 + uVar26 * 0x18);
                      pdVar2 = (double *)(lVar21 + uVar26 * 0x18);
                      local_1a8 = *pdVar2;
                      dStack_1a0 = pdVar2[1];
                      uVar5 = local_188[uVar18];
                      lVar21 = *(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) +
                                (ulonglong)(uVar5 >> 9) * 8);
                      uVar26 = (ulonglong)uVar5 & 0x1ff;
                      pdVar2 = (double *)(lVar21 + uVar26 * 0x18);
                      local_1c8 = (code *)*pdVar2;
                      dStack_1c0 = pdVar2[1];
                      local_1b8 = *(double *)(lVar21 + 0x10 + uVar26 * 0x18);
                      dVar8 = local_1b8 - local_198;
                      dVar30 = dStack_1c0 - dStack_1a0;
                      dVar31 = (double)local_1c8 - local_1a8;
                      dVar32 = SQRT(dVar8 * dVar8 + dVar31 * dVar31 + dVar30 * dVar30);
                      param_3 = local_2a8;
                      local_278 = puVar16;
                      if (dVar32 <= 0.0) break;
                      local_26c = (uint)uVar24;
                      dVar32 = 1.0 / dVar32;
                      local_1e0 = dVar31 * dVar32;
                      local_1d8 = dVar30 * dVar32;
                      local_1d0 = dVar8 * dVar32;
                      local_280 = (uint *)((longlong)local_100 + uVar18 * 4);
                      bVar12 = true;
                      bVar28 = false;
                      lVar21 = 0;
                      local_298 = uVar29;
                      local_268 = (ulonglong)uVar5;
                      local_260 = (ulonglong)uVar4;
                      do {
                        puVar19 = local_290;
                        if (bVar12) {
                          puVar19 = local_278;
                        }
                        uVar4 = *puVar19;
                        puVar19 = local_280;
                        if (bVar12) {
                          puVar19 = local_188 + uVar18;
                        }
                        uVar5 = *puVar19;
                        local_320 = *(double **)(param_1 + 0x50);
                        local_328 = &local_1c8;
                        local_318 = local_318 & 0xffffff00;
                        cVar13 = FUN_146c6f0b4(*(undefined8 *)(param_1 + 0x68),
                                               &local_168 + local_298 * 6 + lVar21 * 3,uVar4,uVar5);
                        if (cVar13 != '\0') goto LAB_146c78faa;
                        uVar9 = local_270;
                        if (bVar12) {
                          uVar9 = uVar3;
                        }
                        local_2d0 = cosf(*(float *)(param_1 + 100) * 0.017453292);
                        local_2d8 = *(undefined1 *)(param_1 + 0x60);
                        local_2e0 = *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c);
                        local_2e8 = *(undefined1 *)(param_1 + 0x5a);
                        local_300 = *(undefined1 *)(param_1 + 0x58);
                        local_2f0 = *(undefined1 *)(param_1 + 0x59);
                        local_308 = &local_1e0;
                        local_310 = &local_1c8;
                        local_320 = &local_1a8;
                        local_328 = (code **)CONCAT44(local_328._4_4_,uVar4);
                        local_2f8 = 1;
                        local_318 = uVar5;
                        bVar14 = FUN_146c6f1fe(*(undefined8 *)(param_1 + 0x68),&local_f8,dVar7,uVar9
                                              );
                        uVar24 = local_260;
                        lVar21 = 1;
                        bVar12 = false;
                        bVar10 = !bVar28;
                        bVar28 = true;
                      } while (bVar10 && (bVar14 & 1) == 0);
                      if (bVar14 == 0) {
                        local_210 = -NAN;
                        local_200 = (double *)0xffffffffffffffff;
                        uStack_1f8 = (code **)0xffffffffffffffff;
                        local_1f0 = 0xffffffffffffffff;
                        local_328 = &local_218;
                        iVar20 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))
                                           (*(longlong **)(param_1 + 0x68),local_268,
                                            local_260 & 0xffffffff,0);
                        puVar19 = local_2b8;
                        param_2 = local_2a0;
                        param_3 = local_2a8;
                        if (iVar20 == 0) {
                          uVar3 = *local_290;
                          local_248 = (code **)0xffffffffffffffff;
                          local_238 = 0xffffffff;
                          uStack_234 = 0xffffffff;
                          uStack_230 = 0xffffffff;
                          iStack_22c = -1;
                          local_228 = 0xffffffffffffffff;
                          local_328 = &local_250;
                          iVar20 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))
                                             (*(longlong **)(param_1 + 0x68),*local_280,uVar3,0);
                          param_3 = local_2a8;
                          puVar19 = local_2b8;
                          if (iVar20 == 0) {
                            FUN_14573a2c8(local_2a8,uVar3);
                            FUN_144a7cc9e(&local_f8,local_23c);
                            FUN_144a7cc9e(&local_f8,uStack_230);
                            if (iStack_22c != -1) {
                              FUN_144a7cc9e(&local_f8);
                            }
                          }
                          FUN_14573a2c8(param_3,uVar24 & 0xffffffff);
                          FUN_144a7cc9e(&local_f8,local_208._4_4_);
                          FUN_144a7cc9e(&local_f8,(ulonglong)uStack_1f8 & 0xffffffff);
                          if (uStack_1f8._4_4_ != -1) {
                            FUN_144a7cc9e(&local_f8);
                          }
                          local_288 = (ulonglong)((int)local_288 + 1);
                          param_2 = local_2a0;
                        }
                        break;
                      }
LAB_146c78faa:
                      uVar24 = (ulonglong)local_26c;
                      puVar19 = local_2b8;
                      param_2 = local_2a0;
                    }
                    uVar29 = 1;
                    pcVar17 = local_2ba;
                    local_290 = (uint *)((longlong)local_100 + 4);
                    puVar16 = local_188 + 1;
                    uVar18 = uVar24 & 1;
                    uVar24 = 0;
                    param_3 = local_2a8;
                  } while (uVar18 != 0);
                }
              }
            }
          }
        }
LAB_146c78b82:
        puVar27 = puVar27 + 1;
      } while (puVar27 != puVar19);
    }
    FUN_140619b9c(&local_f8,&local_168);
    uVar24 = local_288;
    iVar20 = local_2ac;
    if (&local_168 == param_2) {
      if (local_168 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_168;
      local_168 = 0;
      *(undefined4 *)(param_2 + 1) = uStack_160;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_15c;
    }
    bVar12 = false;
  } while ((int)uVar24 != iVar20);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_f8);
  if ((local_a0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c793fc FUN_146c793fc body=2283 status=ok
// SIG undefined FUN_146c793fc(void)

ulonglong FUN_146c793fc(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong *unaff_RBX;
  undefined7 uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong local_190;
  longlong *local_188;
  undefined1 local_17c [4];
  ulonglong local_178;
  undefined8 uStack_170;
  uint local_15c;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_108;
  undefined8 local_100;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_158 = 0;
  uStack_150 = 0;
  if ((longlong)(int)param_2[1] == 0) {
LAB_146c79b55:
    param_3 = unaff_RBX;
    uStack_170 = 0;
    local_178 = 0;
    uStack_170._0_4_ = 0;
  }
  else {
    puVar26 = (uint *)*param_2;
    puVar18 = puVar26 + (int)param_2[1];
    local_188 = param_2;
    do {
      uVar14 = *puVar26;
      lVar20 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1c0) + (ulonglong)(uVar14 >> 9) * 8
                );
      if ((*(int *)(lVar20 + 0xc + (ulonglong)((uVar14 & 0x1ff) << 4)) == -1) &&
         ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
        uVar7 = *(undefined8 *)(lVar20 + (ulonglong)((uVar14 & 0x1ff) << 4));
        lVar20 = *param_3;
        plVar21 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar21 = param_3 + 7;
        }
        uVar24 = (int)param_3[9] - 1;
        uVar16 = (uint)uVar7;
        iVar11 = *(int *)((longlong)plVar21 + (ulonglong)(uVar24 & uVar16) * 4);
        if (iVar11 == -1) {
          puVar22 = (undefined4 *)0x0;
        }
        else {
          do {
            lVar19 = lVar20 + (longlong)iVar11 * 0x10;
            if (*(uint *)(lVar20 + (longlong)iVar11 * 0x10) == uVar16) goto LAB_146c79538;
            iVar11 = *(int *)(lVar19 + 8);
          } while (iVar11 != -1);
          lVar19 = 0;
LAB_146c79538:
          puVar22 = (undefined4 *)(lVar19 + 4);
          if (lVar19 == 0) {
            puVar22 = (undefined4 *)0x0;
          }
        }
        uVar16 = (uint)((ulonglong)uVar7 >> 0x20);
        iVar11 = *(int *)((longlong)plVar21 + (ulonglong)(uVar24 & uVar16) * 4);
        while (iVar11 != -1) {
          lVar19 = lVar20 + (longlong)iVar11 * 0x10;
          if (*(uint *)(lVar20 + (longlong)iVar11 * 0x10) == uVar16) goto LAB_146c7956e;
          iVar11 = *(int *)(lVar19 + 8);
        }
        lVar19 = 0;
LAB_146c7956e:
        puVar13 = (undefined4 *)(lVar19 + 4);
        if (lVar19 == 0) {
          puVar13 = (undefined4 *)0x0;
        }
        if (((puVar22 != (undefined4 *)0x0) && (puVar13 != (undefined4 *)0x0)) &&
           (iVar11 = FUN_146c061e0(*(longlong *)(param_1 + 0x68),*puVar22,*puVar13),
           uVar28 = uStack_150, (int)uVar14 < iVar11)) {
          lVar20 = (longlong)(int)uStack_150;
          uVar16 = (int)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
          if (uStack_150._4_4_ < uVar16) {
            FUN_146be54b8(&local_158,uVar28 & 0xffffffff);
          }
          *(ulonglong *)(local_158 + lVar20 * 8) = CONCAT44(iVar11,uVar14);
        }
      }
      lVar20 = local_158;
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar18);
    lVar19 = (longlong)(int)uStack_150;
    if (lVar19 != 0) {
      param_3 = &local_140;
      local_190 = param_1 + 0x80;
      lVar27 = 0;
      do {
        local_178 = *(ulonglong *)(lVar20 + lVar27);
        uVar14 = (uint)local_178;
        if ((-1 < (int)uVar14) &&
           (plVar21 = *(longlong **)(param_1 + 0x68),
           (int)uVar14 < (int)plVar21[0x3a] * 0x200 + *(int *)((longlong)plVar21 + 0x1d4))) {
          uVar28 = (ulonglong)((uint)(local_178 >> 9) & 0x3fffff);
          if (((ushort)(*(short *)(*(longlong *)(plVar21[0x3b] + uVar28 * 8) +
                                  (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (*(int *)(*(longlong *)(plVar21[0x38] + uVar28 * 8) + 0xc +
                      (ulonglong)((uVar14 & 0x1ff) << 4)) == -1)) {
            local_128 = 0xffffffff;
            uStack_124 = 0xffffffff;
            uStack_120 = 0xffffffff;
            uStack_11c = 0xffffffff;
            local_138 = 0xffffffff;
            uStack_134 = 0xffffffff;
            uStack_130 = 0xffffffff;
            uStack_12c = 0xffffffff;
            local_108 = 0;
            local_100 = 0x400000000;
            local_e8 = 0;
            local_e0 = 0x400000000;
            local_d8 = 0;
            local_198 = 1;
            iVar11 = (**(code **)(*plVar21 + 0x88))(plVar21,local_178,local_178 >> 0x20,param_3);
            if ((iVar11 == 0) && (*(char *)(param_1 + 0x32) == '\x01')) {
              FUN_1447cbafe(local_190,&local_15c,&local_178,0);
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            if (local_108 != 0) {
              FUN_1400020a8();
            }
          }
        }
        lVar27 = lVar27 + 8;
      } while (lVar19 * 8 != lVar27);
    }
    lVar20 = local_188[1];
    local_178 = 0;
    uStack_170 = 0;
    unaff_RBX = param_3;
    if ((longlong)(int)lVar20 == 0) goto LAB_146c79b55;
    lVar19 = *local_188;
    lVar27 = 0;
    do {
      uVar28 = uStack_170;
      uVar14 = *(uint *)(lVar19 + lVar27);
      if ((-1 < (int)uVar14) &&
         (lVar8 = *(longlong *)(param_1 + 0x68),
         (int)uVar14 < *(int *)(lVar8 + 0x1d0) * 0x200 + *(int *)(lVar8 + 0x1d4))) {
        if (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar8 + 0x1d8) + (ulonglong)(uVar14 >> 9) * 8) +
                                (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x1c0) + (ulonglong)(uVar14 >> 9) * 8) +
                     0xc + (ulonglong)((uVar14 & 0x1ff) << 4)) == -1)) {
          param_3 = (longlong *)(longlong)(int)uStack_170;
          uVar16 = (int)uStack_170 + 1;
          uStack_170 = CONCAT44(uStack_170._4_4_,uVar16);
          if (uStack_170._4_4_ < uVar16) {
            FUN_1446f48e2(&local_178,uVar28 & 0xffffffff);
          }
          *(uint *)(local_178 + (longlong)param_3 * 4) = uVar14;
        }
      }
      lVar27 = lVar27 + 4;
    } while ((longlong)(int)lVar20 * 4 != lVar27);
    if (1 < (int)uStack_170) {
      dVar9 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x18);
      uVar28 = 1;
      lVar20 = 0;
      iVar11 = (int)uStack_170;
      iVar15 = (int)uStack_170;
      do {
        local_15c = *(uint *)(local_178 + lVar20 * 4);
        iVar10 = iVar15;
        if ((-1 < (int)local_15c) &&
           (lVar19 = *(longlong *)(param_1 + 0x68),
           (int)local_15c < *(int *)(lVar19 + 0x1d0) * 0x200 + *(int *)(lVar19 + 0x1d4))) {
          uVar14 = local_15c & 0x1ff;
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar19 + 0x1d8) + (ulonglong)(local_15c >> 9) * 8
                                    ) + (ulonglong)uVar14 * 2) - 1U) < 0xfffe) &&
             ((lVar27 = *(longlong *)
                         (*(longlong *)(lVar19 + 0x1c0) + (ulonglong)(local_15c >> 9) * 8),
              *(int *)(lVar27 + 0xc + (ulonglong)(uVar14 << 4)) == -1 &&
              ((longlong)uVar28 < (longlong)iVar15)))) {
            uVar23 = *(ulonglong *)(lVar27 + (ulonglong)(uVar14 << 4));
            lVar27 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (uVar23 >> 9 & 0x7fffff) * 8);
            uVar25 = uVar23 & 0x1ff;
            dVar1 = *(double *)(lVar27 + uVar25 * 0x18);
            dVar2 = *(double *)(lVar27 + 8 + uVar25 * 0x18);
            dVar3 = *(double *)(lVar27 + 0x10 + uVar25 * 0x18);
            lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + (uVar23 >> 0x29) * 8);
            uVar23 = uVar23 >> 0x20 & 0x1ff;
            dVar4 = *(double *)(lVar19 + uVar23 * 0x18);
            dVar5 = *(double *)(lVar19 + 8 + uVar23 * 0x18);
            dVar6 = *(double *)(lVar19 + 0x10 + uVar23 * 0x18);
            param_3 = (longlong *)(uVar28 & 0xffffffff);
            do {
              uVar16 = (uint)param_3;
              lVar19 = (longlong)(int)uVar16;
              uVar14 = *(uint *)(local_178 + lVar19 * 4);
              if (((int)uVar14 < 0) ||
                 (plVar21 = *(longlong **)(param_1 + 0x68),
                 (int)plVar21[0x3a] * 0x200 + *(int *)((longlong)plVar21 + 0x1d4) <= (int)uVar14)) {
LAB_146c79976:
                iVar11 = ~uVar16 + iVar15;
                if (iVar11 != 0) {
                  if (0 < iVar11) {
                    iVar11 = 1;
                  }
                  memmove((void *)(local_178 + lVar19 * 4),
                          (void *)(local_178 + (longlong)(iVar15 - iVar11) * 4),
                          (longlong)iVar11 << 2);
                  iVar15 = (int)uStack_170;
                }
                iVar11 = iVar15 + -1;
                uStack_170 = CONCAT44(uStack_170._4_4_,iVar11);
                uVar16 = uVar16 - 1;
                iVar15 = iVar11;
              }
              else {
                uVar24 = uVar14 & 0x1ff;
                if ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (plVar21[0x3b] + (ulonglong)(uVar14 >> 9) * 8) +
                                                 (ulonglong)uVar24 * 2) - 1U)) ||
                   (lVar27 = *(longlong *)(plVar21[0x38] + (ulonglong)(uVar14 >> 9) * 8),
                   *(int *)(lVar27 + 0xc + (ulonglong)(uVar24 << 4)) != -1)) goto LAB_146c79976;
                uVar23 = *(ulonglong *)(lVar27 + (ulonglong)(uVar24 << 4));
                lVar27 = *(longlong *)(plVar21[2] + (uVar23 >> 9 & 0x7fffff) * 8);
                uVar25 = (ulonglong)((uint)uVar23 & 0x1ff);
                dVar29 = dVar1 - *(double *)(lVar27 + uVar25 * 0x18);
                dVar30 = dVar2 - *(double *)(lVar27 + 8 + uVar25 * 0x18);
                dVar31 = dVar3 - *(double *)(lVar27 + 0x10 + uVar25 * 0x18);
                if (dVar31 * dVar31 + dVar29 * dVar29 + dVar30 * dVar30 < dVar9) {
                  lVar27 = *(longlong *)(plVar21[2] + (uVar23 >> 0x29) * 8);
                  uVar23 = (ulonglong)((uint)(uVar23 >> 0x20) & 0x1ff);
                  dVar29 = dVar4 - *(double *)(lVar27 + uVar23 * 0x18);
                  dVar30 = dVar5 - *(double *)(lVar27 + 8 + uVar23 * 0x18);
                  dVar31 = dVar6 - *(double *)(lVar27 + 0x10 + uVar23 * 0x18);
                  if (dVar31 * dVar31 + dVar29 * dVar29 + dVar30 * dVar30 < dVar9) {
                    local_128 = 0xffffffff;
                    uStack_124 = 0xffffffff;
                    uStack_120 = 0xffffffff;
                    uStack_11c = 0xffffffff;
                    local_138 = 0xffffffff;
                    uStack_134 = 0xffffffff;
                    uStack_130 = 0xffffffff;
                    uStack_12c = 0xffffffff;
                    local_108 = 0;
                    local_100 = 0x400000000;
                    local_e8 = 0;
                    local_e0 = 0x400000000;
                    local_d8 = 0;
                    local_198 = 1;
                    iVar12 = (**(code **)(*plVar21 + 0x88))(plVar21,local_15c,uVar14,&local_140);
                    if (iVar12 == 0) {
                      iVar11 = ~uVar16 + (int)uStack_170;
                      if (iVar11 != 0) {
                        if (0 < iVar11) {
                          iVar11 = 1;
                        }
                        memmove((void *)(local_178 + lVar19 * 4),
                                (void *)(local_178 + (longlong)((int)uStack_170 - iVar11) * 4),
                                (longlong)iVar11 << 2);
                      }
                      uStack_170 = CONCAT44(uStack_170._4_4_,(int)uStack_170 + -1);
                      if (*(char *)(param_1 + 0x32) == '\x01') {
                        FUN_1447cbafe(param_1 + 0x80,local_17c,&local_15c,0);
                      }
                    }
                    if (local_e8 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_108 != 0) {
                      FUN_1400020a8();
                    }
                    iVar11 = (int)uStack_170;
                    iVar15 = (int)uStack_170;
                    iVar10 = (int)uStack_170;
                    if (iVar12 == 0) break;
                  }
                }
              }
              param_3 = (longlong *)(ulonglong)(uVar16 + 1);
              iVar10 = iVar11;
            } while ((int)(uVar16 + 1) < iVar15);
          }
        }
        iVar15 = iVar10;
        uVar28 = uVar28 + 1;
        lVar19 = (longlong)iVar15;
        lVar20 = lVar20 + 1;
      } while ((longlong)uVar28 < lVar19);
      goto LAB_146c79b5c;
    }
  }
  lVar19 = (longlong)(int)uStack_170;
  iVar15 = (int)uStack_170;
LAB_146c79b5c:
  uVar28 = local_178;
  uVar17 = (undefined7)((ulonglong)param_3 >> 8);
  if (iVar15 == 0) {
    uVar23 = CONCAT71(uVar17,1);
  }
  else {
    uVar23 = CONCAT71(uVar17,1);
    lVar20 = 0;
    do {
      uVar14 = *(uint *)(uVar28 + lVar20);
      if ((-1 < (int)uVar14) &&
         (lVar27 = *(longlong *)(param_1 + 0x68),
         (int)uVar14 < *(int *)(lVar27 + 0x1d0) * 0x200 + *(int *)(lVar27 + 0x1d4))) {
        if (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar27 + 0x1d8) + (ulonglong)(uVar14 >> 9) * 8) +
                                (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)(*(longlong *)(lVar27 + 0x1c0) + (ulonglong)(uVar14 >> 9) * 8) +
                     0xc + (ulonglong)((uVar14 & 0x1ff) << 4)) == -1)) {
          iVar11 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar11 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar11 + 1U) {
            FUN_1446f48e2((longlong *)(param_1 + 0x70),iVar11);
          }
          *(uint *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar11 * 4) = uVar14;
          uVar23 = 0;
        }
      }
      lVar20 = lVar20 + 4;
    } while (lVar19 * 4 != lVar20);
  }
  if (local_178 != 0) {
    FUN_1400020a8(local_178);
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffff01;
}



// FUNCTION 146c79ce8 FUN_146c79ce8 body=95 status=ok
// SIG undefined FUN_146c79ce8(void)

undefined8 * FUN_146c79ce8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146c80469(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146c8049c(param_1,iVar1);
      FUN_146c80511(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146c79d48 FUN_146c79d48 body=4025 status=ok
// SIG undefined FUN_146c79d48(void)

void FUN_146c79d48(longlong param_1,longlong *param_2,double param_3)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  ulonglong uVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_4e8 [32];
  longlong *local_4c8;
  ulonglong local_4c0;
  int *local_4b8;
  int *local_4b0;
  longlong local_4a8;
  longlong *local_4a0;
  longlong local_498;
  longlong local_490;
  undefined4 local_488 [188];
  undefined1 local_198 [184];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (0 < (int)param_2[1]) {
    lVar10 = 0x50;
    lVar14 = 0;
    do {
      lVar1 = *param_2;
      dVar26 = DAT_14c846328 * param_3;
      dVar27 = *(double *)(lVar1 + -0x10 + lVar10);
      *(double *)(lVar1 + -8 + lVar10) = DAT_14c846320 * param_3 * dVar27;
      *(double *)(lVar1 + lVar10) = dVar26 * dVar27;
      lVar14 = lVar14 + 1;
      iVar21 = (int)param_2[1];
      lVar10 = lVar10 + 0xb8;
    } while (lVar14 < iVar21);
    if (1 < iVar21) {
      lVar10 = *param_2;
      local_4a8 = param_1;
      local_4a0 = param_2;
      memset(local_488,0,0x2f0);
      local_490 = (longlong)iVar21 * 0xb8 + lVar10 + -0xb8;
      local_498 = lVar10;
      fVar25 = logf((float)iVar21);
      local_488[0] = (int)(longlong)(fVar25 + fVar25);
      plVar16 = &local_498;
      do {
        piVar19 = (int *)*plVar16;
        piVar18 = (int *)plVar16[1];
        iVar21 = (int)plVar16[2];
        iVar7 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar19) >> 3) * -0x1642c859;
        uVar9 = iVar7 + 1;
        piVar22 = piVar18;
        piVar15 = piVar19;
        local_4c8 = plVar16;
        if (iVar21 != 0) {
LAB_146c79ec1:
          if (8 < (int)uVar9) {
            local_4c0 = CONCAT44(local_4c0._4_4_,iVar21);
            local_4b8 = piVar15;
            local_4b0 = piVar22;
            memcpy(local_198,piVar19 + (ulonglong)(uVar9 >> 1) * 0x2e,0xb8);
            memcpy(piVar19 + (ulonglong)(uVar9 >> 1) * 0x2e,piVar19,0xb8);
            memcpy(piVar19,local_198,0xb8);
            piVar23 = piVar18 + 0x2e;
            piVar20 = piVar19;
            do {
              piVar22 = piVar20 + 0x2e;
              piVar6 = piVar20 + 0x2e;
              do {
                piVar20 = piVar6;
                piVar15 = piVar22;
                if (piVar18 < piVar20) break;
                piVar22 = piVar15 + 0x2e;
                piVar6 = piVar20 + 0x2e;
              } while (*piVar20 <= *piVar19);
              piVar6 = piVar23 + -0x5c;
              do {
                piVar17 = piVar23;
                piVar22 = piVar6;
                piVar23 = piVar17 + -0x2e;
                if (piVar23 <= piVar19) break;
                piVar6 = piVar22 + -0x2e;
              } while (*piVar19 <= *piVar23);
              if (piVar23 < piVar20) goto LAB_146c79fc4;
              memcpy(local_198,piVar20,0xb8);
              memcpy(piVar20,piVar23,0xb8);
              memcpy(piVar23,local_198,0xb8);
            } while( true );
          }
          plVar16 = local_4c8;
          if (piVar19 < piVar18) {
            do {
              piVar22 = piVar19;
              if (piVar19 + 0x2e <= piVar18) {
                piVar15 = piVar19 + 0x2e;
                iVar21 = *piVar19;
                do {
                  iVar7 = *piVar15;
                  iVar13 = iVar21;
                  if (iVar21 <= iVar7) {
                    iVar13 = iVar7;
                  }
                  if (iVar21 < iVar7) {
                    piVar22 = piVar15;
                  }
                  piVar15 = piVar15 + 0x2e;
                  iVar21 = iVar13;
                } while (piVar15 <= piVar18);
              }
              piVar15 = piVar18 + -0x2e;
              memcpy(local_198,piVar22,0xb8);
              memcpy(piVar22,piVar18,0xb8);
              memcpy(piVar18,local_198,0xb8);
              plVar16 = local_4c8;
              piVar18 = piVar15;
            } while (piVar19 < piVar15);
          }
          goto LAB_146c7a377;
        }
LAB_146c7a0b5:
        plVar16 = local_4c8;
        if (uVar9 != 0) {
          uVar8 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar24 = (ulonglong)uVar8;
            local_4c0 = uVar24;
            while (uVar5 = uVar8 * 2 + 1, (int)uVar5 < (int)uVar9) {
              uVar11 = uVar8 * 2 + 2;
              uVar8 = uVar5;
              if (((int)uVar11 < (int)uVar9) &&
                 (piVar19[(longlong)(int)uVar5 * 0x2e] <= piVar19[(longlong)(int)uVar11 * 0x2e])) {
                uVar8 = uVar11;
              }
              if (piVar19[(longlong)(int)uVar8 * 0x2e] <= piVar19[(longlong)(int)uVar24 * 0x2e])
              break;
              memcpy(local_198,piVar19 + (longlong)(int)uVar24 * 0x2e,0xb8);
              memcpy(piVar19 + (longlong)(int)uVar24 * 0x2e,piVar19 + (longlong)(int)uVar8 * 0x2e,
                     0xb8);
              memcpy(piVar19 + (longlong)(int)uVar8 * 0x2e,local_198,0xb8);
              uVar24 = (ulonglong)uVar8;
            }
            uVar8 = (int)local_4c0 - 1;
          } while ((int)local_4c0 != 0);
          plVar16 = local_4c8;
          if (1 < (int)uVar9) {
            memcpy(local_198,piVar19,0xb8);
            memcpy(piVar19,piVar19 + ((ulonglong)uVar9 - 1) * 0x2e,0xb8);
            memcpy(piVar19 + ((ulonglong)uVar9 - 1) * 0x2e,local_198,0xb8);
            plVar16 = local_4c8;
            uVar24 = (ulonglong)uVar9 - 1;
            if (uVar9 != 2) {
              do {
                iVar21 = 0;
                iVar13 = 1;
                iVar7 = 0;
                do {
                  iVar21 = iVar21 + 2;
                  iVar12 = iVar13;
                  if (((longlong)iVar21 < (longlong)uVar24) &&
                     (piVar19[(longlong)iVar13 * 0x2e] <= piVar19[(longlong)iVar21 * 0x2e])) {
                    iVar12 = iVar21;
                  }
                  if (piVar19[(longlong)iVar12 * 0x2e] <= piVar19[(longlong)iVar7 * 0x2e]) break;
                  memcpy(local_198,piVar19 + (longlong)iVar7 * 0x2e,0xb8);
                  memcpy(piVar19 + (longlong)iVar7 * 0x2e,piVar19 + (longlong)iVar12 * 0x2e,0xb8);
                  memcpy(piVar19 + (longlong)iVar12 * 0x2e,local_198,0xb8);
                  iVar21 = iVar12 * 2;
                  iVar13 = iVar12 * 2 + 1;
                  iVar7 = iVar12;
                } while ((longlong)iVar13 < (longlong)uVar24);
                memcpy(local_198,piVar19,0xb8);
                memcpy(piVar19,piVar19 + (uVar24 - 1) * 0x2e,0xb8);
                memcpy(piVar19 + (uVar24 - 1) * 0x2e,local_198,0xb8);
                bVar2 = 2 < uVar24;
                plVar16 = local_4c8;
                uVar24 = uVar24 - 1;
              } while (bVar2);
            }
          }
        }
LAB_146c7a377:
        plVar16 = plVar16 + -3;
        param_2 = local_4a0;
        param_1 = local_4a8;
      } while (&local_498 <= plVar16);
    }
  }
  iVar21 = 0;
  dVar27 = 1.0;
  while (0 < (int)param_2[1]) {
    dVar26 = 0.0;
    lVar10 = 0;
    lVar14 = 0x50;
    uVar9 = 0;
    do {
      lVar1 = *param_2;
      dVar31 = *(double *)(lVar1 + -0x20 + lVar14) - *(double *)(lVar1 + -0x30 + lVar14);
      dVar30 = *(double *)(lVar1 + -0x28 + lVar14) - *(double *)(lVar1 + -0x38 + lVar14);
      dVar28 = *(double *)(lVar1 + -8 + lVar14);
      dVar3 = dVar31 * *(double *)(lVar1 + lVar14) * dVar27;
      dVar4 = dVar30 * dVar28 * dVar27;
      dVar29 = (double)*(uint *)(param_1 + 8) + -1.0;
      uVar24 = -(ulonglong)(dVar3 <= dVar4);
      if ((double)(~uVar24 & (ulonglong)dVar3 | (ulonglong)dVar4 & uVar24) + 0.009999999776482582 <=
          dVar29) {
        dVar29 = dVar28 * dVar27;
        dVar28 = *(double *)(lVar1 + lVar14) * dVar27;
      }
      else {
        dVar29 = dVar29 / (double)(~-(ulonglong)(dVar31 <= dVar30) & (ulonglong)dVar31 |
                                  (ulonglong)dVar30 & -(ulonglong)(dVar31 <= dVar30));
        uVar9 = uVar9 + 1;
        dVar28 = dVar29;
      }
      *(double *)(lVar1 + -8 + lVar14) = dVar29;
      *(double *)(lVar1 + lVar14) = dVar28;
      dVar26 = dVar26 + dVar29 * *(double *)(lVar1 + -0x18 + lVar14) * dVar28;
      lVar10 = lVar10 + 1;
      uVar8 = *(uint *)(param_2 + 1);
      lVar14 = lVar14 + 0xb8;
    } while (lVar10 < (int)uVar8);
    if ((uVar9 == 0) || (uVar9 == uVar8)) goto LAB_146c7a4f5;
    dVar26 = *(double *)(param_1 + 0x10) / dVar26;
    if (dVar26 < 0.0) {
      dVar26 = sqrt(dVar26);
    }
    else {
      dVar26 = SQRT(dVar26);
    }
    dVar27 = dVar26 * param_3;
    if ((dVar27 < 1.0099999904632568) || (iVar21 = iVar21 + 1, iVar21 == 1000)) goto LAB_146c7a4f2;
  }
LAB_146c7ac85:
  if ((local_e0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c79fc4:
  memcpy(local_198,piVar19,0xb8);
  memcpy(piVar19,piVar23,0xb8);
  memcpy(piVar23,local_198,0xb8);
  iVar21 = (int)local_4c0 + -1;
  piVar17 = piVar17 + -0x5c;
  if ((longlong)piVar22 - (longlong)local_4b8 < (longlong)local_4b0 - (longlong)piVar15) {
    plVar16 = local_4c8;
    if (piVar20 < piVar18) {
      *local_4c8 = (longlong)piVar20;
      local_4c8[1] = (longlong)piVar18;
      *(int *)(local_4c8 + 2) = iVar21;
      plVar16 = local_4c8 + 3;
    }
    piVar15 = piVar19;
    if (piVar23 <= piVar19 + 0x2e) goto LAB_146c7a377;
  }
  else {
    if (piVar19 + 0x2e < piVar23) {
      *local_4c8 = (longlong)piVar19;
      local_4c8[1] = (longlong)piVar17;
      *(int *)(local_4c8 + 2) = iVar21;
      local_4c8 = local_4c8 + 3;
    }
    plVar16 = local_4c8;
    piVar17 = piVar18;
    piVar19 = piVar20;
    piVar22 = piVar18;
    if (piVar18 <= piVar20) goto LAB_146c7a377;
  }
  local_4c8 = plVar16;
  iVar7 = (int)((ulonglong)((longlong)piVar22 - (longlong)piVar15) >> 3) * -0x1642c859;
  uVar9 = iVar7 + 1;
  piVar18 = piVar17;
  if (iVar21 == 0) goto LAB_146c7a0b5;
  goto LAB_146c79ec1;
LAB_146c7a4f2:
  uVar8 = *(uint *)(param_2 + 1);
LAB_146c7a4f5:
  if (1 < (int)uVar8) {
    lVar10 = *param_2;
    memset(local_488,0,0x2f0);
    local_490 = (ulonglong)uVar8 * 0xb8 + lVar10 + -0xb8;
    local_498 = lVar10;
    fVar25 = logf((float)(int)uVar8);
    local_488[0] = (int)(longlong)(fVar25 + fVar25);
    plVar16 = &local_498;
    do {
      piVar18 = (int *)*plVar16;
      piVar19 = (int *)plVar16[1];
      iVar21 = (int)plVar16[2];
      iVar7 = (int)((ulonglong)((longlong)piVar19 - (longlong)piVar18) >> 3) * -0x1642c859;
      uVar9 = iVar7 + 1;
      piVar22 = piVar18;
      piVar15 = piVar19;
      local_4c8 = plVar16;
      if (iVar21 != 0) {
LAB_146c7a58d:
        if (8 < (int)uVar9) {
          local_4c0 = CONCAT44(local_4c0._4_4_,iVar21);
          local_4b8 = piVar22;
          local_4b0 = piVar15;
          memcpy(local_198,piVar18 + (ulonglong)(uVar9 >> 1) * 0x2e,0xb8);
          memcpy(piVar18 + (ulonglong)(uVar9 >> 1) * 0x2e,piVar18,0xb8);
          memcpy(piVar18,local_198,0xb8);
          piVar23 = piVar19 + 0x2e;
          piVar20 = piVar18;
          do {
            piVar15 = piVar20 + 0x2e;
            piVar6 = piVar20 + 0x2e;
            do {
              piVar20 = piVar6;
              piVar22 = piVar15;
              if (piVar19 < piVar20) break;
              piVar15 = piVar22 + 0x2e;
              piVar6 = piVar20 + 0x2e;
            } while ((*(double *)(piVar18 + 10) - *(double *)(piVar18 + 6)) *
                     *(double *)(piVar18 + 0x12) *
                     (*(double *)(piVar18 + 0xc) - *(double *)(piVar18 + 8)) *
                     *(double *)(piVar18 + 0x14) <=
                     (*(double *)(piVar20 + 10) - *(double *)(piVar20 + 6)) *
                     *(double *)(piVar20 + 0x12) *
                     (*(double *)(piVar20 + 0xc) - *(double *)(piVar20 + 8)) *
                     *(double *)(piVar20 + 0x14));
            piVar6 = piVar23 + -0x5c;
            do {
              piVar17 = piVar23;
              piVar15 = piVar6;
              piVar23 = piVar17 + -0x2e;
              if (piVar23 <= piVar18) break;
              piVar6 = piVar15 + -0x2e;
            } while ((*(double *)(piVar17 + -0x24) - *(double *)(piVar17 + -0x28)) *
                     *(double *)(piVar17 + -0x1c) *
                     (*(double *)(piVar17 + -0x22) - *(double *)(piVar17 + -0x26)) *
                     *(double *)(piVar17 + -0x1a) <=
                     (*(double *)(piVar18 + 10) - *(double *)(piVar18 + 6)) *
                     *(double *)(piVar18 + 0x12) *
                     (*(double *)(piVar18 + 0xc) - *(double *)(piVar18 + 8)) *
                     *(double *)(piVar18 + 0x14));
            if (piVar23 < piVar20) goto LAB_146c7a71b;
            memcpy(local_198,piVar20,0xb8);
            memcpy(piVar20,piVar23,0xb8);
            memcpy(piVar23,local_198,0xb8);
          } while( true );
        }
        for (; plVar16 = local_4c8, piVar15 = piVar18, piVar22 = piVar18, piVar18 < piVar19;
            piVar19 = piVar19 + -0x2e) {
          while (piVar23 = piVar15, piVar22 = piVar22 + 0x2e, piVar22 <= piVar19) {
            piVar15 = piVar22;
            if ((*(double *)(piVar23 + 10) - *(double *)(piVar23 + 6)) * *(double *)(piVar23 + 0x12)
                * (*(double *)(piVar23 + 0xc) - *(double *)(piVar23 + 8)) *
                  *(double *)(piVar23 + 0x14) <=
                (*(double *)(piVar22 + 10) - *(double *)(piVar22 + 6)) * *(double *)(piVar22 + 0x12)
                * (*(double *)(piVar22 + 0xc) - *(double *)(piVar22 + 8)) *
                  *(double *)(piVar22 + 0x14)) {
              piVar15 = piVar23;
            }
          }
          memcpy(local_198,piVar23,0xb8);
          memcpy(piVar23,piVar19,0xb8);
          memcpy(piVar19,local_198,0xb8);
        }
        goto LAB_146c7ac73;
      }
LAB_146c7a80c:
      plVar16 = local_4c8;
      if (uVar9 != 0) {
        uVar8 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar24 = (ulonglong)uVar8;
          local_4c0 = uVar24;
          while (uVar5 = uVar8 * 2 + 1, (int)uVar5 < (int)uVar9) {
            uVar11 = uVar8 * 2 + 2;
            uVar8 = uVar5;
            if ((int)uVar11 < (int)uVar9) {
              lVar10 = (longlong)(int)uVar11;
              lVar14 = (longlong)(int)uVar5;
              if ((*(double *)(piVar18 + lVar10 * 0x2e + 10) -
                  *(double *)(piVar18 + lVar10 * 0x2e + 6)) *
                  *(double *)(piVar18 + lVar10 * 0x2e + 0x12) *
                  (*(double *)(piVar18 + lVar10 * 0x2e + 0xc) -
                  *(double *)(piVar18 + lVar10 * 0x2e + 8)) *
                  *(double *)(piVar18 + lVar10 * 0x2e + 0x14) <=
                  (*(double *)(piVar18 + lVar14 * 0x2e + 10) -
                  *(double *)(piVar18 + lVar14 * 0x2e + 6)) *
                  *(double *)(piVar18 + lVar14 * 0x2e + 0x12) *
                  (*(double *)(piVar18 + lVar14 * 0x2e + 0xc) -
                  *(double *)(piVar18 + lVar14 * 0x2e + 8)) *
                  *(double *)(piVar18 + lVar14 * 0x2e + 0x14)) {
                uVar8 = uVar11;
              }
            }
            lVar10 = (longlong)(int)uVar24;
            lVar14 = (longlong)(int)uVar8;
            if ((*(double *)(piVar18 + lVar10 * 0x2e + 10) -
                *(double *)(piVar18 + lVar10 * 0x2e + 6)) *
                *(double *)(piVar18 + lVar10 * 0x2e + 0x12) *
                (*(double *)(piVar18 + lVar10 * 0x2e + 0xc) -
                *(double *)(piVar18 + lVar10 * 0x2e + 8)) *
                *(double *)(piVar18 + lVar10 * 0x2e + 0x14) <=
                (*(double *)(piVar18 + lVar14 * 0x2e + 10) -
                *(double *)(piVar18 + lVar14 * 0x2e + 6)) *
                *(double *)(piVar18 + lVar14 * 0x2e + 0x12) *
                (*(double *)(piVar18 + lVar14 * 0x2e + 0xc) -
                *(double *)(piVar18 + lVar14 * 0x2e + 8)) *
                *(double *)(piVar18 + lVar14 * 0x2e + 0x14)) break;
            memcpy(local_198,piVar18 + lVar10 * 0x2e,0xb8);
            memcpy(piVar18 + lVar10 * 0x2e,piVar18 + lVar14 * 0x2e,0xb8);
            memcpy(piVar18 + lVar14 * 0x2e,local_198,0xb8);
            uVar24 = (ulonglong)uVar8;
          }
          uVar8 = (int)local_4c0 - 1;
        } while ((int)local_4c0 != 0);
        plVar16 = local_4c8;
        if (1 < (int)uVar9) {
          memcpy(local_198,piVar18,0xb8);
          memcpy(piVar18,piVar18 + ((ulonglong)uVar9 - 1) * 0x2e,0xb8);
          memcpy(piVar18 + ((ulonglong)uVar9 - 1) * 0x2e,local_198,0xb8);
          plVar16 = local_4c8;
          uVar24 = (ulonglong)uVar9 - 1;
          if (uVar9 != 2) {
            do {
              iVar21 = 0;
              iVar13 = 1;
              iVar7 = 0;
              do {
                lVar10 = (longlong)(iVar21 + 2);
                iVar12 = iVar13;
                if ((lVar10 < (longlong)uVar24) &&
                   (lVar14 = (longlong)iVar13,
                   (*(double *)(piVar18 + lVar10 * 0x2e + 10) -
                   *(double *)(piVar18 + lVar10 * 0x2e + 6)) *
                   *(double *)(piVar18 + lVar10 * 0x2e + 0x12) *
                   (*(double *)(piVar18 + lVar10 * 0x2e + 0xc) -
                   *(double *)(piVar18 + lVar10 * 0x2e + 8)) *
                   *(double *)(piVar18 + lVar10 * 0x2e + 0x14) <=
                   (*(double *)(piVar18 + lVar14 * 0x2e + 10) -
                   *(double *)(piVar18 + lVar14 * 0x2e + 6)) *
                   *(double *)(piVar18 + lVar14 * 0x2e + 0x12) *
                   (*(double *)(piVar18 + lVar14 * 0x2e + 0xc) -
                   *(double *)(piVar18 + lVar14 * 0x2e + 8)) *
                   *(double *)(piVar18 + lVar14 * 0x2e + 0x14))) {
                  iVar12 = iVar21 + 2;
                }
                lVar10 = (longlong)iVar7;
                lVar14 = (longlong)iVar12;
                if ((*(double *)(piVar18 + lVar10 * 0x2e + 10) -
                    *(double *)(piVar18 + lVar10 * 0x2e + 6)) *
                    *(double *)(piVar18 + lVar10 * 0x2e + 0x12) *
                    (*(double *)(piVar18 + lVar10 * 0x2e + 0xc) -
                    *(double *)(piVar18 + lVar10 * 0x2e + 8)) *
                    *(double *)(piVar18 + lVar10 * 0x2e + 0x14) <=
                    (*(double *)(piVar18 + lVar14 * 0x2e + 10) -
                    *(double *)(piVar18 + lVar14 * 0x2e + 6)) *
                    *(double *)(piVar18 + lVar14 * 0x2e + 0x12) *
                    (*(double *)(piVar18 + lVar14 * 0x2e + 0xc) -
                    *(double *)(piVar18 + lVar14 * 0x2e + 8)) *
                    *(double *)(piVar18 + lVar14 * 0x2e + 0x14)) break;
                memcpy(local_198,piVar18 + lVar10 * 0x2e,0xb8);
                memcpy(piVar18 + lVar10 * 0x2e,piVar18 + lVar14 * 0x2e,0xb8);
                memcpy(piVar18 + lVar14 * 0x2e,local_198,0xb8);
                iVar21 = iVar12 * 2;
                iVar13 = iVar12 * 2 + 1;
                iVar7 = iVar12;
              } while ((longlong)iVar13 < (longlong)uVar24);
              memcpy(local_198,piVar18,0xb8);
              memcpy(piVar18,piVar18 + (uVar24 - 1) * 0x2e,0xb8);
              memcpy(piVar18 + (uVar24 - 1) * 0x2e,local_198,0xb8);
              bVar2 = 2 < uVar24;
              plVar16 = local_4c8;
              uVar24 = uVar24 - 1;
            } while (bVar2);
          }
        }
      }
LAB_146c7ac73:
      plVar16 = plVar16 + -3;
    } while (&local_498 <= plVar16);
  }
  goto LAB_146c7ac85;
LAB_146c7a71b:
  memcpy(local_198,piVar18,0xb8);
  memcpy(piVar18,piVar23,0xb8);
  memcpy(piVar23,local_198,0xb8);
  iVar21 = (int)local_4c0 + -1;
  piVar17 = piVar17 + -0x5c;
  if ((longlong)piVar15 - (longlong)local_4b8 < (longlong)local_4b0 - (longlong)piVar22) {
    plVar16 = local_4c8;
    if (piVar20 < piVar19) {
      *local_4c8 = (longlong)piVar20;
      local_4c8[1] = (longlong)piVar19;
      *(int *)(local_4c8 + 2) = iVar21;
      plVar16 = local_4c8 + 3;
    }
    piVar22 = piVar18;
    if (piVar23 <= piVar18 + 0x2e) goto LAB_146c7ac73;
  }
  else {
    if (piVar18 + 0x2e < piVar23) {
      *local_4c8 = (longlong)piVar18;
      local_4c8[1] = (longlong)piVar17;
      *(int *)(local_4c8 + 2) = iVar21;
      local_4c8 = local_4c8 + 3;
    }
    plVar16 = local_4c8;
    piVar18 = piVar20;
    piVar17 = piVar19;
    piVar15 = piVar19;
    if (piVar19 <= piVar20) goto LAB_146c7ac73;
  }
  local_4c8 = plVar16;
  iVar7 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar22) >> 3) * -0x1642c859;
  uVar9 = iVar7 + 1;
  piVar19 = piVar17;
  if (iVar21 == 0) goto LAB_146c7a80c;
  goto LAB_146c7a58d;
}



// FUNCTION 146c7ad02 FUN_146c7ad02 body=228 status=ok
// SIG undefined FUN_146c7ad02(void)

undefined4 * FUN_146c7ad02(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar1 = param_3 + 0x3fU >> 6;
  param_1[3] = uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1405f2930(param_1 + 0xe,uVar1 * param_4 + 1,1);
  FUN_146c7caf4(param_1 + 6,param_1[2],1);
  FUN_140d04a4c(param_1 + 0x12,param_1[2],1);
  if (param_1[2] != 0) {
    uVar1 = 0;
    do {
      *(short *)(*(longlong *)(param_1 + 0x12) + (longlong)(int)uVar1 * 2) = (short)uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  FUN_146c7caf4(param_1 + 10,param_1[1],1);
  FUN_140d04a4c(param_1 + 0x16,param_1[1],1);
  if (param_1[1] != 0) {
    uVar1 = 0;
    do {
      *(short *)(*(longlong *)(param_1 + 0x16) + (longlong)(int)uVar1 * 2) = (short)uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  FUN_146c7ade6(param_1);
  return param_1;
}



// FUNCTION 146c7ade6 FUN_146c7ade6 body=83 status=ok
// SIG undefined FUN_146c7ade6(void)

void FUN_146c7ade6(longlong param_1)

{
  FUN_146c7ce64(param_1,param_1 + 0x18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14))
  ;
  FUN_146c7ce64(param_1,param_1 + 0x28,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10))
  ;
  memset(*(void **)(param_1 + 0x38),0,
         (ulonglong)(uint)(*(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) * 8));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 146c7ae3a FUN_146c7ae3a body=402 status=ok
// SIG undefined FUN_146c7ae3a(void)

void FUN_146c7ae3a(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0xa8) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  switch(param_2) {
  case 0:
    uVar2 = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    break;
  case 1:
    *(undefined8 *)(param_1 + 0x58) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar2 = 0x3ff0000000000000;
    goto LAB_146c7af5d;
  case 2:
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x68) = 0xbff0000000000000;
LAB_146c7af5d:
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x20);
    uVar4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) ^ 0x80000000;
    puVar1 = (ulonglong *)(param_1 + 0x28);
    goto LAB_146c7af26;
  case 3:
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
    break;
  case 4:
    uVar2 = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x58) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    goto LAB_146c7af12;
  case 5:
    *(undefined8 *)(param_1 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar2 = 0xbff0000000000000;
    goto LAB_146c7afb3;
  case 6:
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
LAB_146c7afb3:
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uVar4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) ^ 0x80000000;
    puVar1 = (ulonglong *)(param_1 + 0x18);
    goto LAB_146c7af26;
  case 7:
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x68) = 0xbff0000000000000;
LAB_146c7af12:
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    puVar1 = (ulonglong *)(param_1 + 0x28);
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uVar4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    goto LAB_146c7af1f;
  default:
    goto switchD_146c7ae82_default;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  puVar1 = (ulonglong *)(param_1 + 0x18);
  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  uVar4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
LAB_146c7af1f:
  uVar4 = uVar4 ^ 0x80000000;
LAB_146c7af26:
  *(ulonglong *)(param_1 + 0x98) = *puVar1 ^ 0x8000000000000000;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uVar4,uVar3);
switchD_146c7ae82_default:
  return;
}



// FUNCTION 146c7afcc FUN_146c7afcc body=336 status=ok
// SIG undefined FUN_146c7afcc(void)

void FUN_146c7afcc(longlong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0 && uVar2 == 0) {
    return;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10 + 1;
    if (1 < uVar2) {
      uVar8 = 0;
      uVar12 = uVar2;
      do {
        uVar13 = uVar12 - 1;
        uVar7 = (uint)uVar8;
        iVar14 = *(int *)(param_1 + 0xc) * uVar10;
        iVar6 = (int)(uVar8 >> 6);
        lVar4 = *(longlong *)(param_1 + 0x38);
        uVar16 = 1L << ((byte)uVar8 & 0x3f);
        lVar15 = (longlong)(int)((uVar13 >> 6) + iVar14);
        uVar5 = *(ulonglong *)(lVar4 + lVar15 * 8);
        uVar9 = 1L << ((byte)uVar13 & 0x3f);
        if ((*(ulonglong *)(lVar4 + (longlong)(iVar14 + iVar6) * 8) >> (uVar8 & 0x3f) & 1) == 0) {
          *(ulonglong *)(lVar4 + lVar15 * 8) = ~uVar9 & uVar5;
        }
        else {
          *(ulonglong *)(lVar4 + lVar15 * 8) = uVar5 | uVar9;
          if (*(uint *)(param_1 + 0x14) <= uVar10) {
            *(uint *)(param_1 + 0x14) = uVar11;
          }
          if (*(uint *)(param_1 + 0x10) <= uVar13) {
            *(uint *)(param_1 + 0x10) = uVar12;
          }
        }
        if ((uVar5 & uVar9) == 0) {
          puVar1 = (ulonglong *)
                   (*(longlong *)(param_1 + 0x38) +
                   (longlong)(int)(*(int *)(param_1 + 0xc) * uVar10 + iVar6) * 8);
          *puVar1 = *puVar1 & ~uVar16;
        }
        else {
          puVar1 = (ulonglong *)
                   (*(longlong *)(param_1 + 0x38) +
                   (longlong)(int)(*(int *)(param_1 + 0xc) * uVar10 + iVar6) * 8);
          *puVar1 = *puVar1 | uVar16;
          if (*(uint *)(param_1 + 0x14) <= uVar10) {
            *(uint *)(param_1 + 0x14) = uVar11;
          }
          if (*(uint *)(param_1 + 0x10) <= uVar7) {
            *(uint *)(param_1 + 0x10) = uVar7 + 1;
          }
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar12 = uVar13;
      } while (uVar2 >> 1 != uVar7 + 1);
    }
    uVar10 = uVar11;
  } while (uVar11 != iVar3 + (uint)(iVar3 == 0));
  FUN_146c7be06(param_1);
  return;
}



// FUNCTION 146c7b11c FUN_146c7b11c body=352 status=ok
// SIG undefined FUN_146c7b11c(void)

void FUN_146c7b11c(longlong param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
  }
  else if (uVar3 != 1) {
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar8 = 0;
    do {
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 1;
        do {
          uVar1 = uVar7 - 1;
          uVar6 = uVar1 >> 6;
          lVar4 = *(longlong *)(param_1 + 0x38);
          uVar10 = 1L << ((byte)uVar1 & 0x3f);
          lVar9 = (longlong)(int)(*(int *)(param_1 + 0xc) * (~uVar8 + uVar3) + uVar6);
          uVar5 = *(ulonglong *)(lVar4 + lVar9 * 8);
          if ((*(ulonglong *)(lVar4 + (longlong)(int)(*(int *)(param_1 + 0xc) * uVar8 + uVar6) * 8)
               >> ((ulonglong)uVar1 & 0x3f) & 1) == 0) {
            *(ulonglong *)(lVar4 + lVar9 * 8) = ~uVar10 & uVar5;
          }
          else {
            *(ulonglong *)(lVar4 + lVar9 * 8) = uVar5 | uVar10;
            if (*(uint *)(param_1 + 0x14) <= ~uVar8 + uVar3) {
              *(uint *)(param_1 + 0x14) = uVar3 - uVar8;
            }
            if (*(uint *)(param_1 + 0x10) <= uVar1) {
              *(uint *)(param_1 + 0x10) = uVar7;
            }
          }
          if ((uVar5 & uVar10) == 0) {
            puVar2 = (ulonglong *)
                     (*(longlong *)(param_1 + 0x38) +
                     (longlong)(int)(*(int *)(param_1 + 0xc) * uVar8 + uVar6) * 8);
            *puVar2 = *puVar2 & ~uVar10;
            uVar6 = *(uint *)(param_1 + 0x10);
          }
          else {
            puVar2 = (ulonglong *)
                     (*(longlong *)(param_1 + 0x38) +
                     (longlong)(int)(*(int *)(param_1 + 0xc) * uVar8 + uVar6) * 8);
            *puVar2 = *puVar2 | uVar10;
            if (*(uint *)(param_1 + 0x14) <= uVar8) {
              *(uint *)(param_1 + 0x14) = uVar8 + 1;
            }
            uVar6 = *(uint *)(param_1 + 0x10);
            if (uVar6 <= uVar1) {
              *(uint *)(param_1 + 0x10) = uVar7;
              uVar6 = uVar7;
              break;
            }
          }
          bVar11 = uVar7 < uVar6;
          uVar7 = uVar7 + 1;
        } while (bVar11);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3 >> 1);
  }
  FUN_146c7be06(param_1);
  return;
}



// FUNCTION 146c7b27c FUN_146c7b27c body=786 status=ok
// SIG undefined FUN_146c7b27c(void)

void FUN_146c7b27c(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  float local_11c;
  float local_118;
  int local_114 [3];
  float local_108 [6];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = param_4;
  FUN_146c7ade6(param_5);
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    puVar11 = *(undefined4 **)(param_2 + 8);
    puVar10 = puVar11 + *(int *)(param_2 + 0x10);
    do {
      (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,local_114,*puVar11);
      if (((-1 < local_114[0]) && (-1 < local_114[1])) && (-1 < local_114[2])) {
        lVar12 = 0;
        do {
          (**(code **)(*(longlong *)*param_1 + 0x20))
                    ((longlong *)*param_1,&local_11c,local_114[lVar12]);
          dVar1 = *(double *)(param_2 + 0x78);
          dVar2 = *(double *)(param_2 + 0x58);
          dVar3 = *(double *)(param_2 + 0x60);
          dVar4 = *(double *)(param_2 + 0x88);
          dVar5 = *(double *)(param_2 + 0x80);
          dVar6 = *(double *)(param_2 + 0x90);
          dVar7 = *(double *)(param_2 + 0x68);
          dVar8 = *(double *)(param_2 + 0x70);
          dVar14 = dVar4 * *(double *)(param_2 + 0x98) + dVar6 * *(double *)(param_2 + 0xa0);
          dVar13 = dVar1 * *(double *)(param_2 + 0x98) + dVar5 * *(double *)(param_2 + 0xa0);
          dVar9 = *(double *)(param_2 + 0xb0);
          local_108[lVar12 * 2] =
               (float)(dVar13 * dVar2 + dVar14 * dVar3 + 0.5 + *(double *)(param_2 + 0xa8) +
                      (dVar2 * dVar1 + dVar3 * dVar4) * (double)local_11c +
                      (dVar2 * dVar5 + dVar3 * dVar6) * (double)local_118);
          local_108[lVar12 * 2 + 1] =
               (float)(dVar7 * dVar13 + dVar8 * dVar14 + 0.5 + dVar9 +
                      (dVar7 * dVar1 + dVar4 * dVar8) * (double)local_11c +
                      (dVar7 * dVar5 + dVar6 * dVar8) * (double)local_118);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        FUN_146c7b988(param_5,local_108,param_3,local_120);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar10);
  }
  FUN_146c7be06(param_5);
  if ((local_f0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c7b590 FUN_146c7b590 body=207 status=ok
// SIG undefined FUN_146c7b590(void)

undefined1 * FUN_146c7b590(longlong param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_b8 [44];
  int local_8c;
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145c422f6(local_88);
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    uVar1 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x14) * 0x28;
    do {
      local_8c = *(int *)(uVar2 + 0x10);
      FUN_145c4230c(local_88,&local_8c,4);
      FUN_145c4230c(local_88,*(undefined8 *)(uVar2 + 8),local_8c << 3);
      uVar2 = uVar2 + 0x28;
    } while (uVar2 < uVar1);
  }
  *param_2 = 0;
  FUN_1414fe9a8(local_88,param_2 + 1);
  *param_2 = 1;
  FUN_145c422f4(local_88);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c7b660 FUN_146c7b660 body=335 status=ok
// SIG undefined FUN_146c7b660(void)

undefined4 FUN_146c7b660(longlong param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  uVar5 = *(int *)(param_1 + 4) - uStack_50;
  uVar6 = *(int *)(param_1 + 8) - uStack_4c;
  local_68 = param_3;
  if (uStack_50 < uStack_4c) {
    if (uVar3 <= uVar5) {
      do {
        local_5c = 1;
        uStack_54 = 0;
        local_58 = uVar3;
        do {
          uVar4 = uStack_54;
          uVar2 = (*(code *)*param_4)(param_4[1],param_2);
          if ((char)uVar2 == '\0') goto LAB_146c7b71f;
          cVar1 = FUN_146c7cbe4(param_1,&local_58,local_68,&local_5c);
          if (cVar1 != '\0') goto LAB_146c7b749;
          uStack_54 = uVar4 + local_5c;
        } while (uStack_54 <= uVar6);
        uVar3 = uVar3 + 1;
        uVar2 = 0;
        local_58 = uVar3;
      } while (uVar3 <= uVar5);
      goto LAB_146c7b71f;
    }
  }
  else if (uVar4 <= uVar6) {
    do {
      local_5c = 1;
      local_58 = 0;
      uStack_54 = uVar4;
      do {
        uVar3 = local_58;
        uVar2 = (*(code *)*param_4)(param_4[1],param_2);
        if ((char)uVar2 == '\0') goto LAB_146c7b71f;
        cVar1 = FUN_146c7cc62(param_1,&local_58,local_68,&local_5c);
        if (cVar1 != '\0') goto LAB_146c7b749;
        local_58 = uVar3 + local_5c;
      } while (local_58 <= uVar5);
      uVar4 = uVar4 + 1;
      uVar2 = 0;
      uStack_54 = uVar4;
    } while (uVar4 <= uVar6);
    goto LAB_146c7b71f;
  }
  uVar2 = 0;
  local_58 = uVar3;
  uStack_54 = uVar4;
  goto LAB_146c7b71f;
LAB_146c7b749:
  *param_2 = local_58;
  param_2[1] = uStack_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
LAB_146c7b71f:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146c7b7b0 FUN_146c7b7b0 body=172 status=ok
// SIG undefined FUN_146c7b7b0(void)

longlong FUN_146c7b7b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    memcpy(*(void **)(param_1 + 0x38),*(void **)(param_2 + 0x38),
           (ulonglong)(uint)(*(int *)(param_1 + 0xc) * *(int *)(param_2 + 0x14) * 8));
    uVar1 = *(uint *)(param_2 + 0x14);
    iVar2 = *(uint *)(param_1 + 0x14) - uVar1;
    if (uVar1 <= *(uint *)(param_1 + 0x14) && iVar2 != 0) {
      memset((void *)((ulonglong)(uVar1 * *(int *)(param_1 + 0xc)) * 8 +
                     *(longlong *)(param_1 + 0x38)),0,
             (ulonglong)(uint)(iVar2 * *(int *)(param_1 + 0xc) * 8));
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    FUN_146c7cb7c(param_1 + 0x18,param_2 + 0x18);
    FUN_140816ffa(param_1 + 0x48,param_2 + 0x48);
    FUN_146c7cb7c(param_1 + 0x28,param_2 + 0x28,*(undefined4 *)(param_2 + 0x10));
    FUN_140816ffa(param_1 + 0x58,param_2 + 0x58);
  }
  return param_1;
}



// FUNCTION 146c7b85c FUN_146c7b85c body=185 status=ok
// SIG undefined FUN_146c7b85c(void)

void FUN_146c7b85c(longlong param_1,int *param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar3 = param_2[3];
  if (uVar3 != 0) {
    uVar4 = param_2[2];
    uVar5 = 0;
    do {
      bVar8 = uVar4 != 0;
      uVar4 = 0;
      if (bVar8) {
        uVar7 = 0;
        do {
          iVar6 = (int)uVar7;
          if ((*(ulonglong *)
                (*(longlong *)(param_3 + 0x38) +
                (longlong)(int)(*(int *)(param_3 + 0xc) * uVar5 + (int)(uVar7 >> 6)) * 8) >>
               (uVar7 & 0x3f) & 1) != 0) {
            iVar2 = *param_2;
            uVar3 = iVar6 + iVar2;
            uVar4 = param_2[1] + uVar5;
            puVar1 = (ulonglong *)
                     (*(longlong *)(param_1 + 0x38) +
                     (longlong)(int)(*(int *)(param_1 + 0xc) * uVar4 + (uVar3 >> 6)) * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar3 & 0x3f);
            if (*(uint *)(param_1 + 0x14) <= uVar4) {
              *(uint *)(param_1 + 0x14) = uVar4 + 1;
            }
            if (*(uint *)(param_1 + 0x10) <= uVar3) {
              *(int *)(param_1 + 0x10) = iVar6 + iVar2 + 1;
            }
          }
          uVar7 = (ulonglong)(iVar6 + 1U);
          uVar4 = param_2[2];
        } while (iVar6 + 1U < uVar4);
        uVar3 = param_2[3];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  FUN_146c7cce0(param_1);
  return;
}



// FUNCTION 146c7b916 FUN_146c7b916 body=114 status=ok
// SIG undefined FUN_146c7b916(void)

void FUN_146c7b916(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_146c7ea09(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_146c7ea09(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c7b988 FUN_146c7b988 body=1150 status=ok
// SIG undefined FUN_146c7b988(void)

void FUN_146c7b988(longlong param_1,float *param_2,uint param_3,uint param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar28 = param_2[1] + -0.5;
  fVar30 = *param_2 + -0.5;
  fVar33 = param_2[5] + -0.5;
  fVar32 = param_2[4] + -0.5;
  fVar29 = fVar33;
  fVar31 = fVar32;
  if ((fVar33 - fVar28) * (fVar30 - (param_2[2] + -0.5)) -
      (fVar32 - fVar30) * (fVar28 - (param_2[3] + -0.5)) < 0.0) {
    fVar29 = fVar28;
    fVar31 = fVar30;
    fVar28 = fVar33;
    fVar30 = fVar32;
  }
  iVar12 = (int)(fVar30 * 16.0 + 0.5);
  iVar20 = (int)((param_2[2] + -0.5) * 16.0 + 0.5);
  iVar5 = (int)(fVar31 * 16.0 + 0.5);
  iVar21 = (int)(fVar28 * 16.0 + 0.5);
  iVar9 = (int)((param_2[3] + -0.5) * 16.0 + 0.5);
  iVar17 = (int)(fVar29 * 16.0 + 0.5);
  iVar18 = iVar20;
  if (iVar12 < iVar20) {
    iVar18 = iVar12;
  }
  if (iVar5 <= iVar18) {
    iVar18 = iVar5;
  }
  iVar22 = iVar18 + 0xe;
  if (-1 < iVar18 + -1) {
    iVar22 = iVar18 + -1;
  }
  iVar23 = iVar20 - iVar12;
  iVar18 = iVar12;
  if (iVar23 != 0 && iVar12 <= iVar20) {
    iVar18 = iVar20;
  }
  if (iVar18 < iVar5) {
    iVar18 = iVar5;
  }
  iVar6 = iVar18 + 0x2e;
  if (-1 < iVar18 + 0x1f) {
    iVar6 = iVar18 + 0x1f;
  }
  iVar18 = iVar9;
  if (iVar21 < iVar9) {
    iVar18 = iVar21;
  }
  if (iVar17 <= iVar18) {
    iVar18 = iVar17;
  }
  iVar11 = iVar18 + 0xe;
  if (-1 < iVar18 + -1) {
    iVar11 = iVar18 + -1;
  }
  iVar18 = iVar21;
  if (iVar21 < iVar9) {
    iVar18 = iVar9;
  }
  if (iVar18 < iVar17) {
    iVar18 = iVar17;
  }
  iVar13 = iVar18 + 0x2e;
  if (-1 < iVar18 + 0x1f) {
    iVar13 = iVar18 + 0x1f;
  }
  uVar19 = iVar22 >> 4;
  if ((int)param_3 <= iVar22 >> 4) {
    uVar19 = param_3;
  }
  if ((int)uVar19 < 1) {
    uVar19 = 0;
  }
  uVar2 = iVar6 >> 4;
  if ((int)param_3 <= iVar6 >> 4) {
    uVar2 = param_3;
  }
  uVar10 = iVar11 >> 4;
  if ((int)param_4 <= iVar11 >> 4) {
    uVar10 = param_4;
  }
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  uVar3 = iVar13 >> 4;
  if ((int)param_4 <= iVar13 >> 4) {
    uVar3 = param_4;
  }
  if ((int)uVar10 < (int)uVar3) {
    iVar24 = -iVar23;
    iVar13 = iVar20 - iVar5;
    iVar14 = iVar5 - iVar12;
    iVar11 = iVar17 - iVar21;
    iVar22 = -iVar11;
    iVar25 = iVar9 - iVar17;
    iVar6 = iVar21 - iVar9;
    iVar18 = iVar12 - iVar5;
    if (iVar12 - iVar5 <= iVar14) {
      iVar18 = iVar14;
    }
    if (iVar22 == iVar11 || SBORROW4(iVar22,iVar11) != iVar11 * -2 < 0) {
      iVar22 = iVar11;
    }
    iVar4 = iVar5 - iVar20;
    if (iVar5 - iVar20 <= iVar13) {
      iVar4 = iVar13;
    }
    iVar26 = -iVar25;
    if (-iVar25 <= iVar25) {
      iVar26 = iVar25;
    }
    iVar7 = -iVar6;
    if (-iVar6 <= iVar6) {
      iVar7 = iVar6;
    }
    if (iVar23 <= iVar24) {
      iVar23 = iVar24;
    }
    do {
      if ((int)uVar19 < (int)uVar2) {
        uVar15 = (uVar10 * iVar14 + ((iVar22 + iVar18) - iVar11 * uVar19)) * 0x10 +
                 ((iVar11 * iVar5 -
                  (uint)(((iVar11 != 0) + 1U & (iVar14 < 1) + 1U) + 1 & -1 < iVar11)) -
                 iVar14 * iVar17);
        uVar27 = (uVar10 * iVar13 + ((iVar26 + iVar4) - iVar25 * uVar19)) * 0x10 +
                 ((iVar25 * iVar20 -
                  (uint)(((iVar25 != 0) + 1U & (iVar13 < 1) + 1U) + 1 & -1 < iVar25)) -
                 iVar13 * iVar9);
        uVar16 = (uVar10 * iVar24 + ((iVar23 + iVar7) - iVar6 * uVar19)) * 0x10 +
                 ((iVar6 * iVar12 - (uint)(((iVar6 != 0) + 1U & (iVar24 < 1) + 1U) + 1 & -1 < iVar6)
                  ) - iVar24 * iVar21);
        uVar8 = uVar19;
        do {
          if (-1 < (int)(uVar16 | uVar27 | uVar15)) {
            puVar1 = (ulonglong *)
                     (*(longlong *)(param_1 + 0x38) +
                     (longlong)(int)(*(int *)(param_1 + 0xc) * uVar10 + (uVar8 >> 6)) * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar8 & 0x3f);
            if (*(uint *)(param_1 + 0x14) <= uVar10) {
              *(uint *)(param_1 + 0x14) = uVar10 + 1;
            }
            if (*(uint *)(param_1 + 0x10) <= uVar8) {
              *(uint *)(param_1 + 0x10) = uVar8 + 1;
            }
          }
          uVar8 = uVar8 + 1;
          uVar15 = uVar15 + iVar21 * 0x10 + iVar17 * -0x10;
          uVar27 = uVar27 + iVar17 * 0x10 + iVar9 * -0x10;
          uVar16 = uVar16 + iVar9 * 0x10 + iVar21 * -0x10;
        } while (uVar2 != uVar8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  return;
}



// FUNCTION 146c7be06 FUN_146c7be06 body=3076 status=ok
// SIG undefined FUN_146c7be06(void)

void FUN_146c7be06(longlong param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  int iVar19;
  int iVar20;
  ulonglong *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ushort *puVar28;
  ulonglong uVar29;
  ushort *puVar30;
  uint uVar31;
  ulonglong uVar32;
  ushort *puVar33;
  ushort *puVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_398 [40];
  longlong *local_370;
  undefined4 *local_368;
  uint local_35c;
  ulonglong local_358;
  ulonglong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_140d04a4c(param_1 + 0x48,*(undefined4 *)(param_1 + 0x14),0);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar21 = *(ulonglong **)(param_1 + 0x38);
    uVar31 = 0;
    do {
      local_35c = uVar31;
      lVar11 = (longlong)(int)local_35c;
      *(short *)(*(longlong *)(param_1 + 0x48) + lVar11 * 2) = (short)local_35c;
      lVar10 = *(longlong *)(param_1 + 0x18);
      puVar1 = (undefined4 *)(lVar10 + lVar11 * 0x28);
      local_368 = puVar1 + 2;
      *puVar1 = 0;
      puVar1[4] = 0;
      if ((int)puVar1[5] < 0) {
        FUN_146c81112(local_368);
      }
      uVar9 = (ulonglong)*(uint *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 0xc) != 0) {
        puVar2 = (uint *)(lVar10 + lVar11 * 0x28);
        uVar17 = 0xffffffff;
        uVar29 = 0;
        uVar27 = 0;
        do {
          uVar31 = (int)uVar27 * 0x40;
          uVar4 = *puVar21;
          iVar24 = (int)uVar17;
          if (uVar4 == 0xffffffffffffffff) {
            if (iVar24 < 0) {
              uVar17 = (ulonglong)uVar31;
            }
            if (uVar27 == (int)uVar9 - 1) {
              uVar7 = puVar2[4];
              puVar2[4] = uVar7 + 1;
              if (puVar2[5] < uVar7 + 1) {
                FUN_146c81142(local_368,uVar7);
              }
              uVar31 = (uVar31 - (int)uVar17) + 0x40;
LAB_146c7bed4:
              *(ulonglong *)(*(longlong *)(puVar2 + 2) + (longlong)(int)uVar7 * 8) =
                   uVar17 | (ulonglong)uVar31 << 0x20;
              uVar17 = 0xffffffff;
              if (*puVar2 < uVar31) {
                *puVar2 = uVar31;
                uVar17 = 0xffffffff;
              }
            }
          }
          else if (uVar4 == 0) {
            if (-1 < iVar24) {
              uVar7 = puVar2[4];
              puVar2[4] = uVar7 + 1;
              if (puVar2[5] < uVar7 + 1) {
                FUN_146c81142(local_368,uVar7);
              }
              uVar31 = uVar31 - iVar24;
              goto LAB_146c7bed4;
            }
          }
          else {
            uVar9 = uVar29 & 0xffffffff;
            local_370 = (longlong *)(ulonglong)uVar31;
            uVar32 = 0;
            local_358 = uVar9;
            local_350 = puVar21;
            do {
              iVar24 = (int)uVar17;
              if ((uVar4 >> (uVar32 & 0x3f) & 1) == 0) {
                if (-1 < iVar24) {
                  uVar31 = puVar2[4];
                  puVar2[4] = uVar31 + 1;
                  if (puVar2[5] < uVar31 + 1) {
                    FUN_146c81142(local_368,uVar31);
                    puVar21 = local_350;
                    uVar9 = local_358;
                  }
                  lVar10 = (uint)-iVar24 + uVar29 + uVar32;
                  *(ulonglong *)(*(longlong *)(puVar2 + 2) + (longlong)(int)uVar31 * 8) =
                       uVar17 | lVar10 << 0x20;
                  uVar17 = 0xffffffff;
                  uVar31 = (uint)lVar10;
                  if (*puVar2 < uVar31) goto LAB_146c7bfd2;
                }
              }
              else {
                uVar6 = (ulonglong)((uint)uVar32 + (int)uVar29);
                if (-1 < iVar24) {
                  uVar6 = uVar17;
                }
                uVar17 = uVar6;
                iVar24 = (int)uVar17;
                if (uVar9 + uVar32 == (ulonglong)(*(int *)(param_1 + 4) - 1)) {
                  uVar31 = puVar2[4];
                  puVar2[4] = uVar31 + 1;
                  if (puVar2[5] < uVar31 + 1) {
                    FUN_146c81142(local_368,uVar31);
                    puVar21 = local_350;
                    uVar9 = local_358;
                  }
                  lVar10 = (ulonglong)(uint)-iVar24 + uVar32 + uVar29 + 1;
                  *(ulonglong *)(*(longlong *)(puVar2 + 2) + (longlong)(int)uVar31 * 8) =
                       uVar17 | lVar10 << 0x20;
                  uVar17 = 0xffffffff;
                  if (*puVar2 < (uint)lVar10) {
                    uVar31 = (((uint)uVar32 | (uint)local_370) - iVar24) + 1;
LAB_146c7bfd2:
                    *puVar2 = uVar31;
                    uVar17 = 0xffffffff;
                  }
                }
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 != 0x40);
          }
          uVar27 = uVar27 + 1;
          puVar21 = puVar21 + 1;
          uVar9 = (ulonglong)*(uint *)(param_1 + 0xc);
          uVar29 = uVar29 + 0x40;
        } while (uVar27 < uVar9);
      }
      uVar31 = local_35c + 1;
    } while (local_35c + 1 < *(uint *)(param_1 + 0x14));
  }
  iVar24 = *(int *)(param_1 + 0x50);
  if (1 < (longlong)iVar24) {
    lVar10 = *(longlong *)(param_1 + 0x48);
    memset(local_338,0,0x2f0);
    local_340 = lVar10 + (longlong)iVar24 * 2 + -2;
    local_348 = lVar10;
    fVar36 = logf((float)iVar24);
    local_338[0] = (int)(longlong)(fVar36 + fVar36);
    plVar12 = &local_348;
    do {
      puVar13 = (ushort *)*plVar12;
      puVar15 = (ushort *)plVar12[1];
      iVar24 = (int)plVar12[2];
      iVar19 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar13) >> 1);
      uVar9 = (ulonglong)(iVar19 + 1);
      puVar22 = puVar15;
      puVar33 = puVar13;
      local_370 = plVar12;
      if (iVar24 != 0) {
LAB_146c7c157:
        puVar18 = puVar13;
        if (8 < (int)(uint)uVar9) {
          uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffe);
          uVar3 = *(ushort *)((longlong)puVar18 + uVar9);
          *(ushort *)((longlong)puVar18 + uVar9) = *puVar18;
          *puVar18 = uVar3;
          puVar28 = puVar22 + 1;
          puVar13 = puVar18;
          do {
            puVar5 = puVar13 + 1;
            puVar23 = puVar13 + 1;
            do {
              puVar34 = puVar23;
              puVar13 = puVar5;
              if (puVar22 < puVar13) break;
              puVar5 = puVar13 + 1;
              puVar23 = puVar34 + 1;
            } while (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar18 * 0x28) <=
                     *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar13 * 0x28));
            puVar5 = puVar28 + -2;
            do {
              puVar23 = puVar28;
              puVar30 = puVar5;
              puVar28 = puVar23 + -1;
              if (puVar28 <= puVar18) break;
              puVar5 = puVar30 + -1;
            } while (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar28 * 0x28) <=
                     *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar18 * 0x28));
            if (puVar28 < puVar13) goto LAB_146c7c20f;
            uVar3 = *puVar13;
            *puVar13 = *puVar28;
            *puVar28 = uVar3;
          } while( true );
        }
        if (puVar18 < puVar22) {
          do {
            puVar13 = puVar18;
            if (puVar18 + 1 <= puVar22) {
              uVar9 = (ulonglong)*puVar18;
              puVar15 = puVar18 + 1;
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar15 * 0x28) <
                    *(uint *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x28)) {
                  puVar13 = puVar15;
                  uVar9 = (ulonglong)*puVar15;
                }
                puVar15 = puVar15 + 1;
              } while (puVar15 <= puVar22);
            }
            uVar3 = *puVar13;
            *puVar13 = *puVar22;
            *puVar22 = uVar3;
            puVar22 = puVar22 + -1;
          } while (puVar18 < puVar22);
        }
        goto LAB_146c7c4a4;
      }
LAB_146c7c2b9:
      iVar24 = (int)uVar9;
      if (iVar24 != 0) {
        iVar19 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
        iVar26 = iVar19;
joined_r0x000146c7c2e0:
        do {
          iVar20 = iVar19 * 2 + 1;
          if (iVar20 < iVar24) {
            iVar25 = iVar19 * 2 + 2;
            lVar10 = *(longlong *)(param_1 + 0x18);
            if ((iVar25 < iVar24) &&
               (*(uint *)(lVar10 + (ulonglong)puVar13[iVar25] * 0x28) <=
                *(uint *)(lVar10 + (ulonglong)puVar13[iVar20] * 0x28))) {
              iVar20 = iVar25;
            }
            uVar3 = puVar13[iVar19];
            if (*(uint *)(lVar10 + (ulonglong)puVar13[iVar20] * 0x28) <
                *(uint *)(lVar10 + (ulonglong)uVar3 * 0x28)) {
              puVar13[iVar19] = puVar13[iVar20];
              puVar13[iVar20] = uVar3;
              iVar19 = iVar20;
              goto joined_r0x000146c7c2e0;
            }
          }
          bVar35 = iVar26 != 0;
          iVar19 = iVar26 + -1;
          iVar26 = iVar19;
        } while (bVar35);
        if (1 < iVar24) {
          uVar3 = *puVar13;
          *puVar13 = puVar13[uVar9 - 1];
          puVar13[uVar9 - 1] = uVar3;
          if (iVar24 != 2) {
            do {
              uVar17 = uVar9 - 1;
              iVar24 = 0;
              iVar26 = 1;
              iVar19 = 0;
              do {
                iVar24 = iVar24 + 2;
                lVar10 = *(longlong *)(param_1 + 0x18);
                iVar20 = iVar26;
                if (((longlong)iVar24 < (longlong)uVar17) &&
                   (*(uint *)(lVar10 + (ulonglong)puVar13[iVar24] * 0x28) <=
                    *(uint *)(lVar10 + (ulonglong)puVar13[iVar26] * 0x28))) {
                  iVar20 = iVar24;
                }
                uVar3 = puVar13[iVar19];
                if (*(uint *)(lVar10 + (ulonglong)uVar3 * 0x28) <=
                    *(uint *)(lVar10 + (ulonglong)puVar13[iVar20] * 0x28)) break;
                puVar13[iVar19] = puVar13[iVar20];
                puVar13[iVar20] = uVar3;
                iVar24 = iVar20 * 2;
                iVar26 = iVar20 * 2 + 1;
                iVar19 = iVar20;
              } while ((longlong)iVar26 < (longlong)uVar17);
              uVar3 = *puVar13;
              *puVar13 = puVar13[uVar9 - 2];
              puVar13[uVar9 - 2] = uVar3;
              uVar9 = uVar17;
            } while (2 < uVar17);
          }
        }
      }
LAB_146c7c4a4:
      plVar12 = local_370 + -3;
    } while (&local_348 <= plVar12);
  }
  FUN_140d04a4c(param_1 + 0x58,*(undefined4 *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar31 = 0;
    do {
      lVar11 = (longlong)(int)uVar31;
      *(short *)(*(longlong *)(param_1 + 0x58) + lVar11 * 2) = (short)uVar31;
      lVar10 = *(longlong *)(param_1 + 0x28);
      puVar1 = (undefined4 *)(lVar10 + lVar11 * 0x28);
      plVar12 = (longlong *)(puVar1 + 2);
      *puVar1 = 0;
      puVar1[4] = 0;
      if ((int)puVar1[5] < 0) {
        FUN_146c81112(plVar12);
      }
      uVar7 = *(uint *)(param_1 + 0x14);
      if (uVar7 != 0) {
        puVar2 = (uint *)(lVar10 + lVar11 * 0x28);
        uVar14 = 0xffffffff;
        uVar16 = 0;
        local_370 = plVar12;
        do {
          if ((*(ulonglong *)
                (*(longlong *)(param_1 + 0x38) +
                (longlong)(int)(*(int *)(param_1 + 0xc) * uVar16 + (uVar31 >> 6)) * 8) &
              1L << ((byte)uVar31 & 0x3f)) == 0) {
            if (-1 < (int)uVar14) {
              uVar7 = puVar2[4];
              puVar2[4] = uVar7 + 1;
              if (puVar2[5] < uVar7 + 1) {
                FUN_146c81142(plVar12,uVar7);
                plVar12 = local_370;
              }
              uVar8 = uVar16 - uVar14;
              goto LAB_146c7c56b;
            }
          }
          else {
            if ((int)uVar14 < 0) {
              uVar14 = uVar16;
            }
            if (uVar16 == uVar7 - 1) {
              uVar7 = puVar2[4];
              puVar2[4] = uVar7 + 1;
              if (puVar2[5] < uVar7 + 1) {
                FUN_146c81142(plVar12,uVar7);
                plVar12 = local_370;
              }
              uVar8 = (uVar16 - uVar14) + 1;
LAB_146c7c56b:
              *(ulonglong *)(*(longlong *)(puVar2 + 2) + (longlong)(int)uVar7 * 8) =
                   CONCAT44(uVar8,uVar14);
              uVar14 = 0xffffffff;
              if (*puVar2 < uVar8) {
                *puVar2 = uVar8;
              }
            }
          }
          uVar16 = uVar16 + 1;
          uVar7 = *(uint *)(param_1 + 0x14);
        } while (uVar16 < uVar7);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < *(uint *)(param_1 + 0x10));
  }
  iVar24 = *(int *)(param_1 + 0x60);
  if (1 < (longlong)iVar24) {
    lVar10 = *(longlong *)(param_1 + 0x58);
    memset(local_338,0,0x2f0);
    local_340 = lVar10 + (longlong)iVar24 * 2 + -2;
    local_348 = lVar10;
    fVar36 = logf((float)iVar24);
    local_338[0] = (int)(longlong)(fVar36 + fVar36);
    plVar12 = &local_348;
    do {
      puVar13 = (ushort *)*plVar12;
      puVar15 = (ushort *)plVar12[1];
      iVar24 = (int)plVar12[2];
      iVar19 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar13) >> 1);
      uVar9 = (ulonglong)(iVar19 + 1);
      puVar22 = puVar15;
      puVar33 = puVar13;
      local_370 = plVar12;
      if (iVar24 != 0) {
LAB_146c7c679:
        puVar18 = puVar13;
        if (8 < (int)(uint)uVar9) {
          uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffe);
          uVar3 = *(ushort *)((longlong)puVar18 + uVar9);
          *(ushort *)((longlong)puVar18 + uVar9) = *puVar18;
          *puVar18 = uVar3;
          puVar28 = puVar22 + 1;
          puVar13 = puVar18;
          do {
            puVar5 = puVar13 + 1;
            puVar23 = puVar13 + 1;
            do {
              puVar34 = puVar23;
              puVar13 = puVar5;
              if (puVar22 < puVar13) break;
              puVar5 = puVar13 + 1;
              puVar23 = puVar34 + 1;
            } while (*(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*puVar18 * 0x28) <=
                     *(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*puVar13 * 0x28));
            puVar5 = puVar28 + -2;
            do {
              puVar23 = puVar28;
              puVar30 = puVar5;
              puVar28 = puVar23 + -1;
              if (puVar28 <= puVar18) break;
              puVar5 = puVar30 + -1;
            } while (*(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*puVar28 * 0x28) <=
                     *(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*puVar18 * 0x28));
            if (puVar28 < puVar13) goto LAB_146c7c731;
            uVar3 = *puVar13;
            *puVar13 = *puVar28;
            *puVar28 = uVar3;
          } while( true );
        }
        if (puVar18 < puVar22) {
          do {
            puVar13 = puVar18;
            if (puVar18 + 1 <= puVar22) {
              uVar9 = (ulonglong)*puVar18;
              puVar15 = puVar18 + 1;
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)*puVar15 * 0x28) <
                    *(uint *)(*(longlong *)(param_1 + 0x28) + uVar9 * 0x28)) {
                  puVar13 = puVar15;
                  uVar9 = (ulonglong)*puVar15;
                }
                puVar15 = puVar15 + 1;
              } while (puVar15 <= puVar22);
            }
            uVar3 = *puVar13;
            *puVar13 = *puVar22;
            *puVar22 = uVar3;
            puVar22 = puVar22 + -1;
          } while (puVar18 < puVar22);
        }
        goto LAB_146c7c9c6;
      }
LAB_146c7c7db:
      iVar24 = (int)uVar9;
      if (iVar24 != 0) {
        iVar19 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
        iVar26 = iVar19;
joined_r0x000146c7c802:
        do {
          iVar20 = iVar19 * 2 + 1;
          if (iVar20 < iVar24) {
            iVar25 = iVar19 * 2 + 2;
            lVar10 = *(longlong *)(param_1 + 0x28);
            if ((iVar25 < iVar24) &&
               (*(uint *)(lVar10 + (ulonglong)puVar13[iVar25] * 0x28) <=
                *(uint *)(lVar10 + (ulonglong)puVar13[iVar20] * 0x28))) {
              iVar20 = iVar25;
            }
            uVar3 = puVar13[iVar19];
            if (*(uint *)(lVar10 + (ulonglong)puVar13[iVar20] * 0x28) <
                *(uint *)(lVar10 + (ulonglong)uVar3 * 0x28)) {
              puVar13[iVar19] = puVar13[iVar20];
              puVar13[iVar20] = uVar3;
              iVar19 = iVar20;
              goto joined_r0x000146c7c802;
            }
          }
          bVar35 = iVar26 != 0;
          iVar19 = iVar26 + -1;
          iVar26 = iVar19;
        } while (bVar35);
        if (1 < iVar24) {
          uVar3 = *puVar13;
          *puVar13 = puVar13[uVar9 - 1];
          puVar13[uVar9 - 1] = uVar3;
          if (iVar24 != 2) {
            do {
              uVar17 = uVar9 - 1;
              iVar24 = 0;
              iVar26 = 1;
              iVar19 = 0;
              do {
                iVar24 = iVar24 + 2;
                lVar10 = *(longlong *)(param_1 + 0x28);
                iVar20 = iVar26;
                if (((longlong)iVar24 < (longlong)uVar17) &&
                   (*(uint *)(lVar10 + (ulonglong)puVar13[iVar24] * 0x28) <=
                    *(uint *)(lVar10 + (ulonglong)puVar13[iVar26] * 0x28))) {
                  iVar20 = iVar24;
                }
                uVar3 = puVar13[iVar19];
                if (*(uint *)(lVar10 + (ulonglong)uVar3 * 0x28) <=
                    *(uint *)(lVar10 + (ulonglong)puVar13[iVar20] * 0x28)) break;
                puVar13[iVar19] = puVar13[iVar20];
                puVar13[iVar20] = uVar3;
                iVar24 = iVar20 * 2;
                iVar26 = iVar20 * 2 + 1;
                iVar19 = iVar20;
              } while ((longlong)iVar26 < (longlong)uVar17);
              uVar3 = *puVar13;
              *puVar13 = puVar13[uVar9 - 2];
              puVar13[uVar9 - 2] = uVar3;
              uVar9 = uVar17;
            } while (2 < uVar17);
          }
        }
      }
LAB_146c7c9c6:
      plVar12 = local_370 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146c7c20f:
  uVar3 = *puVar18;
  *puVar18 = *puVar28;
  *puVar28 = uVar3;
  iVar24 = iVar24 + -1;
  puVar23 = puVar23 + -2;
  if ((longlong)puVar30 - (longlong)puVar33 < (longlong)puVar15 - (longlong)puVar34) {
    if (puVar13 < puVar22) {
      *local_370 = (longlong)puVar13;
      local_370[1] = (longlong)puVar22;
      *(int *)(local_370 + 2) = iVar24;
      local_370 = local_370 + 3;
    }
    puVar13 = puVar18;
    puVar15 = puVar30;
    if (puVar28 <= puVar18 + 1) goto LAB_146c7c4a4;
  }
  else {
    if (puVar18 + 1 < puVar28) {
      *local_370 = (longlong)puVar18;
      local_370[1] = (longlong)puVar23;
      *(int *)(local_370 + 2) = iVar24;
      local_370 = local_370 + 3;
    }
    puVar18 = puVar34;
    puVar23 = puVar22;
    puVar15 = puVar22;
    if (puVar22 <= puVar13) goto LAB_146c7c4a4;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar18) >> 1);
  uVar9 = (ulonglong)(iVar19 + 1);
  puVar22 = puVar23;
  puVar33 = puVar18;
  if (iVar24 == 0) goto LAB_146c7c2b9;
  goto LAB_146c7c157;
LAB_146c7c731:
  uVar3 = *puVar18;
  *puVar18 = *puVar28;
  *puVar28 = uVar3;
  iVar24 = iVar24 + -1;
  puVar23 = puVar23 + -2;
  if ((longlong)puVar30 - (longlong)puVar33 < (longlong)puVar15 - (longlong)puVar34) {
    if (puVar13 < puVar22) {
      *local_370 = (longlong)puVar13;
      local_370[1] = (longlong)puVar22;
      *(int *)(local_370 + 2) = iVar24;
      local_370 = local_370 + 3;
    }
    puVar13 = puVar18;
    puVar15 = puVar30;
    if (puVar28 <= puVar18 + 1) goto LAB_146c7c9c6;
  }
  else {
    if (puVar18 + 1 < puVar28) {
      *local_370 = (longlong)puVar18;
      local_370[1] = (longlong)puVar23;
      *(int *)(local_370 + 2) = iVar24;
      local_370 = local_370 + 3;
    }
    puVar18 = puVar34;
    puVar23 = puVar22;
    puVar15 = puVar22;
    if (puVar22 <= puVar13) goto LAB_146c7c9c6;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar18) >> 1);
  uVar9 = (ulonglong)(iVar19 + 1);
  puVar22 = puVar23;
  puVar33 = puVar18;
  if (iVar24 == 0) goto LAB_146c7c7db;
  goto LAB_146c7c679;
}



// FUNCTION 146c7ca0c FUN_146c7ca0c body=121 status=ok
// SIG undefined FUN_146c7ca0c(void)

void FUN_146c7ca0c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c80c5a(param_1,iVar1);
    }
    FUN_146c80c3f((longlong)iVar1 * 0xb8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c80cf0(param_1,param_2,iVar1 - param_2);
    FUN_146c80d52(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c7ca86 FUN_146c7ca86 body=109 status=ok
// SIG undefined FUN_146c7ca86(void)

void FUN_146c7ca86(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c80e32(param_1,iVar1);
    }
    FUN_146c80e01((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146c80eb8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c7caf4 FUN_146c7caf4 body=135 status=ok
// SIG undefined FUN_146c7caf4(void)

void FUN_146c7caf4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c80f6e(param_1,iVar1);
    }
    FUN_146c80f53((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146c81002(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146c81064(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c7cb7c FUN_146c7cb7c body=103 status=ok
// SIG undefined FUN_146c7cb7c(void)

void FUN_146c7cb7c(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_146c7caf4(param_1,(int)param_2[1],0);
  if ((int)param_1[1] < param_3) {
    param_3 = (int)param_1[1];
  }
  if (0 < param_3) {
    lVar2 = *param_2 + 8;
    lVar1 = *param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar2 + -8);
      FUN_146c7ea46(lVar1,lVar2);
      FUN_140816ffa(lVar1 + 0x10,lVar2 + 0x10);
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c7cbe4 FUN_146c7cbe4 body=126 status=ok
// SIG undefined FUN_146c7cbe4(void)

char FUN_146c7cbe4(longlong param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    cVar2 = '\x01';
  }
  else {
    uVar3 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x58) + uVar3 * 2);
      cVar2 = FUN_146c7cd90((ulonglong)(*param_2 + (uint)uVar1) * 0x28 +
                            *(longlong *)(param_1 + 0x28),
                            (ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_3 + 0x28),
                            param_2[1],param_2[3],*(undefined4 *)(param_1 + 8),param_4);
      if (cVar2 == '\0') {
        return '\0';
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x10));
  }
  return cVar2;
}



// FUNCTION 146c7cc62 FUN_146c7cc62 body=126 status=ok
// SIG undefined FUN_146c7cc62(void)

char FUN_146c7cc62(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    cVar2 = '\x01';
  }
  else {
    uVar3 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x48) + uVar3 * 2);
      cVar2 = FUN_146c7cd90((ulonglong)(param_2[1] + (uint)uVar1) * 0x28 +
                            *(longlong *)(param_1 + 0x18),
                            (ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_3 + 0x18),*param_2
                            ,param_2[2],*(undefined4 *)(param_1 + 4),param_4);
      if (cVar2 == '\0') {
        return '\0';
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x14));
  }
  return cVar2;
}



// FUNCTION 146c7cce0 FUN_146c7cce0 body=175 status=ok
// SIG undefined FUN_146c7cce0(void)

void FUN_146c7cce0(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  
  if (*(int *)(param_3 + 0x14) != 0) {
    uVar1 = 0;
    do {
      FUN_146c7cf7c((longlong)(int)(param_2[1] + uVar1) * 0x28 + *(longlong *)(param_1 + 0x18),
                    (longlong)(int)uVar1 * 0x28 + *(longlong *)(param_3 + 0x18),*param_2,param_2[2],
                    *(undefined4 *)(param_1 + 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_3 + 0x14));
  }
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar1 = 0;
    do {
      FUN_146c7cf7c((longlong)(int)(*param_2 + uVar1) * 0x28 + *(longlong *)(param_1 + 0x28),
                    (longlong)(int)uVar1 * 0x28 + *(longlong *)(param_3 + 0x28),param_2[1],
                    param_2[3],*(undefined4 *)(param_1 + 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_3 + 0x10));
  }
  return;
}



// FUNCTION 146c7cd90 FUN_146c7cd90 body=212 status=ok
// SIG undefined FUN_146c7cd90(void)

undefined8
FUN_146c7cd90(uint *param_1,uint *param_2,int param_3,uint param_4,int param_5,int *param_6)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  
  if (*param_1 < *param_2) {
LAB_146c7cda5:
    *param_6 = param_5;
    uVar5 = 0;
  }
  else {
    if ((longlong)(int)param_1[4] < 0x11) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 6);
    }
    uVar5 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1);
    if (0 < (longlong)(int)param_2[4]) {
      puVar4 = *(uint **)(param_1 + 2);
      puVar2 = puVar4 + (longlong)(int)param_1[4] * 2;
      puVar7 = *(uint **)(param_2 + 2);
      puVar3 = puVar7 + (longlong)(int)param_2[4] * 2;
      do {
        uVar6 = *puVar7;
        if (param_4 <= uVar6) {
          return uVar5;
        }
        uVar1 = puVar7[1] + uVar6;
        uVar6 = uVar6 + param_3;
        if (param_4 <= uVar1) {
          uVar1 = param_4;
        }
        puVar9 = puVar4;
        if (lVar8 != 0) {
          puVar9 = puVar4 + (ulonglong)*(ushort *)(lVar8 + (ulonglong)uVar6 * 2) * 2;
        }
        if (puVar2 <= puVar9) goto LAB_146c7ce4f;
        while( true ) {
          if (uVar6 < *puVar9) goto LAB_146c7ce4f;
          if (uVar1 + param_3 <= *puVar9 + puVar9[1]) break;
          puVar9 = puVar9 + 2;
          if (puVar2 <= puVar9) goto LAB_146c7ce4f;
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 < puVar3);
    }
  }
  return uVar5;
LAB_146c7ce4f:
  if (puVar2 <= puVar9) goto LAB_146c7cda5;
  if (puVar7[1] <= puVar9[1]) {
    param_5 = *puVar9 - uVar6;
    goto LAB_146c7cda5;
  }
  puVar9 = puVar9 + 2;
  goto LAB_146c7ce4f;
}



// FUNCTION 146c7ce64 FUN_146c7ce64 body=279 status=ok
// SIG undefined FUN_146c7ce64(void)

void FUN_146c7ce64(int *param_1,longlong *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = *param_2;
  if (*param_1 == 0) {
    if ((longlong)(int)param_2[1] != 0) {
      lVar4 = (longlong)(int)param_2[1] * 0x28;
      lVar2 = lVar2 + 0x18;
      do {
        uVar1 = *(uint *)(lVar2 + -4);
        iVar3 = 0;
        if ((int)uVar1 < 0) {
          *(undefined4 *)(lVar2 + -8) = 0;
          FUN_146c81112(lVar2 + -0x10);
          iVar3 = *(int *)(lVar2 + -8);
          uVar1 = *(uint *)(lVar2 + -4);
        }
        *(uint *)(lVar2 + -8) = iVar3 + 1U;
        if (uVar1 < iVar3 + 1U) {
          FUN_146c81142(lVar2 + -0x10,iVar3);
        }
        *(ulonglong *)(*(longlong *)(lVar2 + -0x10) + (longlong)iVar3 * 8) =
             (ulonglong)param_3 << 0x20;
        *(uint *)(lVar2 + -0x18) = param_3;
        if (*(int *)(lVar2 + 0xc) < 0) {
          *(undefined4 *)(lVar2 + 8) = 0;
          FUN_1448759c8(lVar2,0);
        }
        else {
          *(undefined4 *)(lVar2 + 8) = 0;
        }
        lVar2 = lVar2 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
  }
  else if (param_4 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x14 + lVar4) < 0) {
        *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0;
        FUN_146c81112(lVar2 + 8 + lVar4);
      }
      else {
        *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0;
      }
      *(undefined4 *)(lVar2 + lVar4) = 0;
      lVar4 = lVar4 + 0x28;
    } while ((ulonglong)param_4 * 0x28 != lVar4);
  }
  return;
}


