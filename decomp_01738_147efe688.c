// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147efe688 FUN_147efe688 body=167 status=ok
// SIG undefined FUN_147efe688(void)

undefined1 * FUN_147efe688(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if ((((lVar2 != 0) && (lVar1 = FUN_1411a19f0(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (lVar2 = *param_2, lVar2 != 0)))) {
    lVar1 = FUN_1411a19f0();
    if ((lVar1 == 0) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    lVar1 = *(longlong *)(lVar2 + 0x110);
    if (lVar1 == 0) {
      FUN_140aa6c08(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x110);
    }
    *param_1 = *(undefined1 *)(lVar1 + 0x3c);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar1 + 0x40);
    return param_1;
  }
  FUN_1458872f0(param_1);
  return param_1;
}



// FUNCTION 147efe730 FUN_147efe730 body=264 status=ok
// SIG undefined FUN_147efe730(void)

void FUN_147efe730(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_78 [36];
  byte local_54 [4];
  undefined8 local_50;
  longlong local_48;
  byte local_3c [4];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x2a0))(param_2,&local_30);
  lVar1 = local_30;
  if (local_30 != 0) {
    lVar2 = FUN_1411a19f0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (local_30 != 0 &&
          *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        local_48 = local_30;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        FUN_147efec68(param_3,local_3c,&local_48);
        if ((*(byte *)(param_2 + 6) & 1) != 0) {
          *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) | 1 << (local_3c[0] & 0x1f);
        }
        uVar3 = -(uint)(*(float *)((longlong)param_2 + 0x2c) == 0.0);
        local_54[0] = local_3c[0];
        local_50 = local_38;
        FUN_147efe83a(param_1,local_54,
                      ~uVar3 & (uint)*(float *)((longlong)param_2 + 0x2c) | uVar3 & 0x7f7fffff);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe83a FUN_147efe83a body=157 status=ok
// SIG undefined FUN_147efe83a(void)

void FUN_147efe83a(longlong param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_78 [44];
  byte local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *param_2;
  FUN_1458872f0(local_4c);
  if (bVar1 != local_4c[0]) {
    bVar1 = *param_2;
    iVar2 = *(int *)(param_1 + 0x1b0);
    if ((iVar2 <= (int)(uint)bVar1) &&
       (*(uint *)(param_1 + 0x1b0) = bVar1 + 1,
       (uint)(*(int *)(param_1 + 0x1b4) - iVar2) < ((uint)bVar1 - iVar2) + 1)) {
      FUN_14475e4ac((longlong *)(param_1 + 0x1a8));
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)*param_2 * 4) = param_3;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe8d8 FUN_147efe8d8 body=115 status=ok
// SIG undefined FUN_147efe8d8(void)

undefined8 FUN_147efe8d8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  local_28 = local_20;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(param_2,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe94c FUN_147efe94c body=421 status=ok
// SIG undefined FUN_147efe94c(void)

void FUN_147efe94c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a3ee64();
  *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) & 0xfd;
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 != 0) {
    FUN_147efebb6(&local_48);
    FUN_147efeb24(lVar6 + 0x20f,param_1,local_48);
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  lVar5 = FUN_147efe474(lVar5);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    iVar1 = *(int *)(param_1 + 0x118);
    if (0 < (longlong)iVar1) {
      lVar2 = *(longlong *)(param_1 + 0x110);
      lVar7 = 0;
      bVar4 = DAT_14c950c29;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar7);
        if ((lVar3 != 0 & bVar4) == 1) {
          FUN_1456cec3c(lVar3);
LAB_147efea1e:
          FUN_147efe730(param_1,lVar3,lVar5);
          bVar4 = DAT_14c950c29;
        }
        else if (lVar3 != 0) goto LAB_147efea1e;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
      FUN_14385946c(lVar5,param_1);
    }
  }
  if (lVar6 != 0) {
    lVar5 = FUN_14104c5c4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar6);
      }
      *(longlong *)(param_1 + 0x138) = lVar6;
      if (*(longlong *)(lVar6 + 0x478) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
      if (*(longlong *)(lVar6 + 0x478) != param_1) {
        lVar6 = FUN_1447210f0(lVar6);
        if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
      }
      goto LAB_147efea6f;
    }
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
LAB_147efea6f:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efeb24 FUN_147efeb24 body=145 status=ok
// SIG undefined FUN_147efeb24(void)

void FUN_147efeb24(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1402599be(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x20f,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efebb6 FUN_147efebb6 body=176 status=ok
// SIG undefined FUN_147efebb6(void)

undefined8 * FUN_147efebb6(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20be8) {
    FUN_144b3d300(&DAT_14cb20be8);
    if (DAT_14cb20be8 == -1) {
      builtin_wcsncpy(local_38,L"OnOwnerEndPlay",0xf);
      FUN_1446f470e(&DAT_14cb20be0,local_38,1);
      _Init_thread_footer(&DAT_14cb20be8);
    }
  }
  *param_1 = DAT_14cb20be0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efec68 FUN_147efec68 body=895 status=ok
// SIG undefined FUN_147efec68(void)

byte * FUN_147efec68(longlong *param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  byte local_a4 [4];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = *param_3;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_a4);
  bVar8 = local_a4[0];
  FUN_1458872f0(&local_98);
  if (bVar8 == (byte)local_98) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
LAB_147efede0:
      lVar7 = 0;
    }
    else {
      lVar4 = FUN_1411a19f0();
      if (((lVar4 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) goto LAB_147efede0;
      lVar7 = *param_3;
    }
    plVar6 = *(longlong **)(lVar7 + 0x110);
    if (plVar6 == (longlong *)0x0) {
      FUN_140aa6c08(lVar7);
      plVar6 = *(longlong **)(lVar7 + 0x110);
    }
    (**(code **)(*plVar6 + 0x2b8))();
    bVar8 = (byte)local_98;
    local_a4[0] = (byte)local_98;
    local_a0 = CONCAT44(local_90,uStack_94);
    FUN_1458872f0(&local_98);
    if (bVar8 == (byte)local_98) {
      FUN_1458872f0(param_2);
      goto LAB_147efed49;
    }
  }
  plVar6 = param_1 + 0x11;
  iVar1 = (int)param_1[0x12];
  if (iVar1 <= (int)(uint)bVar8) {
    uVar9 = ((uint)bVar8 - iVar1) + 1;
    *(uint *)(param_1 + 0x12) = bVar8 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0x94) - iVar1) < uVar9) {
      FUN_147f0e194(plVar6);
    }
    memset((void *)((longlong)iVar1 * 8 + *plVar6),0,(longlong)(int)uVar9 << 3);
  }
  if (*(longlong *)(*plVar6 + (ulonglong)bVar8 * 8) == 0) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
LAB_147efee43:
      lVar7 = 0;
    }
    else {
      lVar4 = FUN_1411a19f0();
      if (((lVar4 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) goto LAB_147efee43;
      lVar7 = *param_3;
    }
    lVar4 = FUN_147f0116e(param_1,lVar7);
    bVar8 = local_a4[0];
    lVar7 = param_1[0x11];
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    lVar10 = (ulonglong)bVar8 * 8;
    *(longlong *)(lVar7 + lVar10) = lVar4;
    *(uint *)(param_1 + 0x20) =
         *(uint *)(param_1 + 0x20) |
         (uint)((*(byte *)(*(longlong *)(param_1[0x11] + lVar10) + 0x2c) & 3) != 0);
    if ((*(byte *)(*(longlong *)(param_1[0x11] + lVar10) + 0x2c) & 2) != 0) {
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      cVar3 = FUN_140e50f4a(uVar5);
      if (cVar3 != '\0') {
        uVar5 = FUN_144a88394(uVar5);
        local_c0 = (undefined8 *)0x0;
        local_b8 = 0;
        FUN_1446efa72(&local_c0,0,4,0x10);
        puVar2 = local_c0;
        local_b8 = 4;
        *local_c0 = &PTR_LAB_14ac25a10;
        *(byte *)(local_c0 + 1) = bVar8;
        *(undefined8 *)((longlong)local_c0 + 0xc) = local_a0;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_c0[3] = lVar4;
        *local_c0 = &PTR_FUN_14ac259a0;
        local_c0[4] = 0;
        FUN_14485c47a(local_c0 + 4,param_1);
        *(undefined4 *)(puVar2 + 6) = 0;
        puVar2[5] = &LAB_143859c2a;
        local_98 = 0;
        uStack_94 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_c0);
        local_58 = 1;
        FUN_14016fdb0(uVar5,local_c8,&local_98);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_c0);
        bVar8 = local_a4[0];
      }
    }
  }
  *param_2 = bVar8;
  *(undefined8 *)(param_2 + 4) = local_a0;
LAB_147efed49:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efefe8 FUN_147efefe8 body=30 status=ok
// SIG undefined FUN_147efefe8(void)

void FUN_147efefe8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x480))();
  FUN_1448b6576(param_1);
  return;
}



// FUNCTION 147eff006 FUN_147eff006 body=219 status=ok
// SIG undefined FUN_147eff006(void)

void FUN_147eff006(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
    FUN_147efd2cc();
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    lVar1 = FUN_147efe474(lVar1);
    if (lVar1 != 0) {
      FUN_1438596ca(lVar1,param_1);
      lVar2 = FUN_147eff7e6(param_1);
      if (lVar2 != 0) {
        local_28 = 0;
        FUN_147eff0e2(lVar1,lVar2);
      }
    }
    if ((-1 < (short)*(undefined4 *)(param_1 + 8)) &&
       (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 != 0)) {
      FUN_147efebb6(&local_30);
      FUN_1461f7214(lVar1 + 0x20f,param_1,local_30);
    }
    *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) | 2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eff0e2 FUN_147eff0e2 body=791 status=ok
// SIG undefined FUN_147eff0e2(void)

void FUN_147eff0e2(longlong param_1,ulonglong param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  byte local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar8 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xf0);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & (uVar6 >> 0x10 ^ uVar6)) *
                              4);
    if (iVar10 != -1) {
      lVar8 = *(longlong *)(param_1 + 0xb0);
LAB_147eff26c:
      lVar2 = lVar8 + (longlong)iVar10 * 0x20;
      if (*(ulonglong *)(lVar8 + (longlong)iVar10 * 0x20) != param_2) goto code_r0x000147eff27d;
      if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
        lVar8 = *param_3;
        if ((((lVar8 == 0) || (lVar7 = FUN_1411a19f0(), lVar7 == 0)) ||
            (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) ||
           ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
             lVar7 + 0x30 || (lVar8 = *param_3, lVar8 == 0)))) {
          iVar10 = *(int *)(param_1 + 0x90);
          if ((longlong)iVar10 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x88);
            lVar7 = 0;
            do {
              plVar3 = *(longlong **)(lVar8 + lVar7);
              if ((plVar3 != (longlong *)0x0) &&
                 ((*(uint *)(lVar2 + 0x10) >> (*(uint *)((longlong)plVar3 + 0x3c) & 0x1f) & 1) != 0)
                 ) {
                (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar10 * 8 != lVar7);
          }
          *(undefined4 *)(lVar2 + 0x10) = 0;
LAB_147eff327:
          FUN_147f01468(param_2 + 0x20f,param_1 + 0x9c);
          FUN_147f0f210((longlong *)(param_1 + 0xb0),param_2);
          goto LAB_147eff11c;
        }
        local_60 = lVar8;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        FUN_147efe688(local_54,&local_60);
        bVar1 = local_54[0];
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + (ulonglong)local_54[0] * 8);
        if (plVar3 == (longlong *)0x0) {
          uVar6 = *(uint *)(lVar2 + 0x10);
        }
        else {
          uVar6 = *(uint *)(lVar2 + 0x10);
          if ((uVar6 >> (*(uint *)((longlong)plVar3 + 0x3c) & 0x1f) & 1) != 0) {
            (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
            uVar6 = *(uint *)(lVar2 + 0x10) & ~(1 << (bVar1 & 0x1f));
            *(uint *)(lVar2 + 0x10) = uVar6;
          }
        }
        if (uVar6 == 0) goto LAB_147eff327;
      }
    }
  }
LAB_147eff11c:
  uVar9 = (ulonglong)*(int *)(param_1 + 0x120);
  if (0 < (longlong)uVar9) {
    iVar10 = -*(int *)(param_1 + 0x120);
    lVar8 = uVar9 * 0x14 + -8;
    do {
      cVar5 = FUN_14069eaf4(*(longlong *)(param_1 + 0x118) + lVar8,param_2);
      if (cVar5 != '\0') {
        lVar2 = *param_3;
        if ((((lVar2 != 0) && (lVar7 = FUN_1411a19f0(), lVar7 != 0)) &&
            (*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30 && (lVar2 = *param_3, lVar2 != 0)))) {
          bVar1 = *(byte *)(*(longlong *)(param_1 + 0x118) + -0xc + lVar8);
          local_68 = lVar2;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c();
          }
          FUN_147efe688(local_54,&local_68);
          if (bVar1 != local_54[0]) goto LAB_147eff1d0;
        }
        uVar6 = *(uint *)(param_1 + 0x120);
        if (uVar9 != uVar6) {
          memmove((void *)(*(longlong *)(param_1 + 0x118) + lVar8 + -0xc),
                  (void *)(*(longlong *)(param_1 + 0x118) + lVar8 + 8),
                  (longlong)(int)(uVar6 + iVar10) * 0x14);
          uVar6 = *(uint *)(param_1 + 0x120);
        }
        *(uint *)(param_1 + 0x120) = uVar6 - 1;
      }
LAB_147eff1d0:
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + -0x14;
      bVar4 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147eff27d:
  iVar10 = *(int *)(lVar2 + 0x18);
  if (iVar10 == -1) goto LAB_147eff11c;
  goto LAB_147eff26c;
}



// FUNCTION 147eff3fa FUN_147eff3fa body=93 status=ok
// SIG undefined FUN_147eff3fa(void)

void FUN_147eff3fa(longlong param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FUN_147efe5b2();
  if (lVar4 != 0) {
    uVar2 = 1 << ((byte)*param_2 & 0x1f);
    uVar1 = *(uint *)(param_1 + 0x140);
    if (((uVar1 >> (*param_2 & 0x1f) & 1) != 0) != (bool)param_3) {
      uVar3 = uVar2 | uVar1;
      if (param_3 == '\0') {
        uVar3 = ~uVar2 & uVar1;
      }
      *(uint *)(param_1 + 0x140) = uVar3;
      FUN_147efe1ba(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147eff458 FUN_147eff458 body=390 status=ok
// SIG undefined FUN_147eff458(void)

undefined8 FUN_147eff458(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
    FUN_140c5c1ec(param_3);
  }
  local_50 = param_1 + 0x158;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = (longlong *)(param_1 + 0x148);
  if (iStack_44 < *(int *)(local_50 + 0x18)) {
    uVar3 = 0;
    do {
      lVar4 = *local_80 + (longlong)iStack_64 * 0x38 + 8;
      cVar1 = (*(code *)*param_2)(param_2[1],lVar4);
      if (cVar1 != '\0') {
        lVar4 = FUN_14479d2ce(lVar4);
        if (lVar4 == 0) {
          uVar3 = 1;
        }
        else {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1447d05f2(param_3,iVar2);
          }
          *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar4;
        }
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
  }
  else {
    uVar3 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147eff5e0 FUN_147eff5e0 body=344 status=ok
// SIG undefined FUN_147eff5e0(void)

void FUN_147eff5e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x148);
  local_28 = param_1 + 0x158;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_38 = 0;
  local_70 = plVar1;
  local_48 = plVar1;
  local_40 = plVar1;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      cVar2 = FUN_144729dda(*local_70 + (longlong)iStack_54 * 0x38 + 8);
      if (cVar2 == '\0') {
        FUN_147f0dc6a(local_48,iStack_54);
        local_38 = CONCAT11(local_38._1_1_,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_147f0d1b6(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eff73a FUN_147eff73a body=171 status=ok
// SIG undefined FUN_147eff73a(void)

void FUN_147eff73a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      (**(code **)(*plVar1 + 0x588))(plVar1,param_2,&local_48);
      FUN_144a76660(&local_48,&local_60);
      *(undefined8 *)(param_3 + 4) = local_50;
      *param_3 = local_60;
      param_3[1] = uStack_5c;
      param_3[2] = uStack_58;
      param_3[3] = uStack_54;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eff7e6 FUN_147eff7e6 body=112 status=ok
// SIG undefined FUN_147eff7e6(void)

longlong FUN_147eff7e6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14490fee6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(longlong *)(lVar1 + 0x3d0);
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 147eff856 FUN_147eff856 body=279 status=ok
// SIG undefined FUN_147eff856(void)

void FUN_147eff856(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    local_90[0] = 0;
    FUN_14485c47a(local_90);
    uVar10 = local_90[0];
  }
  puVar7 = param_3;
  puVar9 = local_90;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar1 = *(undefined1 *)(param_3 + 9);
  uVar4 = *(undefined8 *)((longlong)param_3 + 0x4c);
  uVar2 = *(undefined1 *)((longlong)param_3 + 0x54);
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_147f0d6f8(param_1 + 0x198,iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x198);
  puVar7 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x60);
  *puVar7 = uVar10;
  puVar8 = local_90;
  puVar9 = puVar7;
  for (lVar6 = 9; puVar9 = puVar9 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)(puVar7 + 10) = uVar1;
  *(undefined8 *)((longlong)puVar7 + 0x54) = uVar4;
  *(undefined1 *)((longlong)puVar7 + 0x5c) = uVar2;
  if ((int)(uint)*(byte *)(param_3 + 9) < *(int *)(param_1 + 0x1b0)) {
    *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x60 + 0xc) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)*(byte *)(param_3 + 9) * 4);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eff96e FUN_147eff96e body=70 status=ok
// SIG undefined FUN_147eff96e(void)

undefined8 * FUN_147eff96e(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_14485c47a();
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1458872f0(param_1 + 3);
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xfc;
  FUN_147eff9b4(param_1 + 1,DAT_14cb20780);
  return param_1;
}



// FUNCTION 147eff9b4 FUN_147eff9b4 body=62 status=ok
// SIG undefined FUN_147eff9b4(void)

void FUN_147eff9b4(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147f0d126(param_1,iVar1);
  }
  FUN_147f0d0b0((longlong)iVar1 * 0x58 + *param_1,param_2);
  return;
}



// FUNCTION 147eff9f2 FUN_147eff9f2 body=181 status=ok
// SIG undefined FUN_147eff9f2(void)

undefined8 FUN_147eff9f2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  char local_5c [12];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      cVar1 = *(char *)(lVar3 + 0x48 + lVar5);
      FUN_1458872f0(local_5c);
      if ((((cVar1 != local_5c[0]) && (0.0 < *(float *)(lVar3 + 8 + lVar5))) &&
          (*(float *)(lVar3 + lVar5) <= 3.4028235e+38 && *(float *)(lVar3 + lVar5) != 3.4028235e+38)
          ) && ((*(uint *)(lVar3 + 0x54 + lVar5) & 6) == 2)) {
        uVar4 = 1;
        goto LAB_147effa78;
      }
      lVar5 = lVar5 + 0x58;
    } while ((longlong)iVar2 * 0x58 - lVar5 != 0);
  }
  uVar4 = 0;
LAB_147effa78:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147effaa8 FUN_147effaa8 body=188 status=ok
// SIG undefined FUN_147effaa8(void)

void FUN_147effaa8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [40];
  undefined8 local_f0 [9];
  undefined8 local_a8;
  undefined8 local_a0 [9];
  undefined1 local_58 [4];
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar5 = param_3;
  puVar6 = local_f0;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = *(undefined1 *)(param_3 + 9);
  uVar3 = *(undefined8 *)((longlong)param_3 + 0x4c);
  uVar2 = *(undefined1 *)((longlong)param_3 + 0x54);
  FUN_1458872f0(local_58);
  local_4c = local_4c & 0xf8;
  local_a8 = param_2;
  puVar5 = local_f0;
  puVar6 = local_a0;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_58[0] = uVar1;
  local_54 = uVar3;
  local_4c = uVar2;
  FUN_1447cd2ec(param_1,&local_a8);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147effb66 FUN_147effb66 body=202 status=ok
// SIG undefined FUN_147effb66(void)

void FUN_147effb66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x150) <= *(int *)(param_1 + 0x17c)) goto LAB_147effb8a;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  lVar1 = FUN_147efe474(lVar1);
  if (param_2 == 0 || lVar1 == 0) {
    local_30 = 0;
    if (param_2 != 0) goto LAB_147effbf0;
  }
  else {
    FUN_147efff06(lVar1,param_1,param_2);
LAB_147effbf0:
    local_28 = 0;
    FUN_14485c47a(&local_28,param_2);
    local_30 = local_28;
  }
  FUN_147f0dbea(param_1 + 0x148,&local_30);
LAB_147effb8a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147effc32 FUN_147effc32 body=113 status=ok
// SIG undefined FUN_147effc32(void)

void FUN_147effc32(undefined8 param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (((float)param_2[2] < (float)param_3[2]) ||
     (uVar4 = -(uint)(0.0 < (float)param_3[2]), uVar5 = -(uint)(0.0 < (float)param_2[2]),
     (float)(~uVar4 & 0x7f7fffff | *param_3 & uVar4) <=
     (float)(~uVar5 & 0x7f7fffff | *param_2 & uVar5))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    }
    *(char *)(param_2 + 0x12) = (char)param_3[0x12];
    *(undefined8 *)(param_2 + 0x13) = *(undefined8 *)(param_3 + 0x13);
    *(char *)(param_2 + 0x15) = (char)param_3[0x15];
  }
  return;
}



// FUNCTION 147effca6 FUN_147effca6 body=606 status=ok
// SIG undefined FUN_147effca6(void)

undefined8 FUN_147effca6(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  longlong *local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x148);
  local_98 = param_1 + 0x158;
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  local_88 = 0;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_1449c0562(&local_a0);
  }
  local_c8 = local_90;
  iStack_c4 = iStack_8c;
  local_c0 = local_88;
  local_bc = local_84;
  local_d8 = local_a0;
  local_d0 = local_98;
  local_a8 = 0;
  local_e0 = plVar1;
  local_b8 = plVar1;
  local_b0 = plVar1;
  if (iStack_8c < *(int *)(local_98 + 0x18)) {
    uVar7 = 0;
    do {
      lVar5 = (longlong)*(int *)(*local_e0 + 0x18 + (longlong)iStack_c4 * 0x38);
      if (lVar5 != 0) {
        lVar2 = *local_e0 + (longlong)iStack_c4 * 0x38;
        pfVar8 = *(float **)(lVar2 + 0x10);
        lVar5 = lVar5 * 0x58;
        do {
          fVar4 = *pfVar8;
          *pfVar8 = fVar4 + param_2;
          if (pfVar8[1] <= fVar4 + param_2) {
            fVar4 = pfVar8[0x15];
            if (((uint)fVar4 & 2) == 0) {
LAB_147effe05:
              if (((uint)fVar4 & 1) == 0) goto LAB_147effdf0;
            }
            else {
              cVar3 = *(char *)(pfVar8 + 0x12);
              FUN_1458872f0(&local_a0);
              if ((cVar3 == (char)local_a0) || (pfVar8[2] <= 0.0)) {
                fVar4 = pfVar8[0x15];
                goto LAB_147effe05;
              }
              fVar4 = pfVar8[0x15];
              if (3.4028235e+38 < *pfVar8 || *pfVar8 == 3.4028235e+38) goto LAB_147effe05;
            }
            if ((((uint)fVar4 & 4) == 0) && (lVar6 = FUN_14479d2ce(lVar2 + 8), lVar6 != 0)) {
              pfVar8[0x15] = (float)((uint)pfVar8[0x15] & 0xfffffff9 | 4);
              FUN_147eff856(param_1,lVar6,pfVar8);
              uVar7 = 1;
            }
          }
LAB_147effdf0:
          pfVar8 = pfVar8 + 0x16;
          lVar5 = lVar5 + -0x58;
        } while (lVar5 != 0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < *(int *)(local_d0 + 0x18));
    if (((local_a8 & 1) != 0) && (local_a8._1_1_ == '\x01')) {
      FUN_147f0d1b6(local_b0,(int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34));
    }
  }
  else {
    uVar7 = 0;
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147efff06 FUN_147efff06 body=264 status=ok
// SIG undefined FUN_147efff06(void)

void FUN_147efff06(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_2 + 0x144);
  FUN_145eea1a4(&local_44);
  if (uVar1 != local_44) {
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar4 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x78);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x60) == uVar1)
          goto LAB_147efff6b;
          iVar5 = *(int *)(lVar4 + 0x58);
        } while (iVar5 != -1);
      }
    }
    lVar4 = 0;
LAB_147efff6b:
    iVar5 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if (((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0x2c) & 4) != 0)) &&
           ((*(uint *)(lVar4 + 0x10) >> (*(uint *)((longlong)plVar3 + 0x3c) & 0x1f) & 1) != 0)) {
          (**(code **)(*plVar3 + 0x2c0))(plVar3,lVar4 + 8,param_3);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar5 * 8 != lVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f00010 FUN_147f00010 body=251 status=ok
// SIG undefined FUN_147f00010(void)

void FUN_147f00010(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_2 + 0x144);
  FUN_145eea1a4(&local_3c);
  if (uVar1 != local_3c) {
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar4 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x78);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x60) == uVar1)
          goto LAB_147f0006d;
          iVar5 = *(int *)(lVar4 + 0x58);
        } while (iVar5 != -1);
      }
    }
    lVar4 = 0;
LAB_147f0006d:
    iVar5 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if (((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0x2c) & 4) != 0)) &&
           ((*(uint *)(lVar4 + 0x10) >> (*(uint *)((longlong)plVar3 + 0x3c) & 0x1f) & 1) != 0)) {
          (**(code **)(*plVar3 + 0x2c8))(plVar3,lVar4 + 8);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar5 * 8 != lVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f0010c FUN_147f0010c body=181 status=ok
// SIG undefined FUN_147f0010c(void)

undefined8 FUN_147f0010c(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  char local_5c [12];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      cVar1 = *(char *)(lVar3 + 0x48 + lVar5);
      FUN_1458872f0(local_5c);
      if ((((cVar1 != local_5c[0]) && (0.0 < *(float *)(lVar3 + 8 + lVar5))) &&
          (*(float *)(lVar3 + lVar5) <= 3.4028235e+38 && *(float *)(lVar3 + lVar5) != 3.4028235e+38)
          ) && ((*(uint *)(lVar3 + 0x54 + lVar5) & 6) != 4)) {
        uVar4 = 1;
        goto LAB_147f00192;
      }
      lVar5 = lVar5 + 0x58;
    } while ((longlong)iVar2 * 0x58 - lVar5 != 0);
  }
  uVar4 = 0;
LAB_147f00192:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f001c2 FUN_147f001c2 body=109 status=ok
// SIG undefined FUN_147f001c2(void)

longlong * FUN_147f001c2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 147f00234 FUN_147f00234 body=185 status=ok
// SIG undefined FUN_147f00234(void)

void FUN_147f00234(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147f002ee(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f002ee FUN_147f002ee body=222 status=ok
// SIG undefined FUN_147f002ee(void)

void FUN_147f002ee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1411a19f0();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && ((*param_2 != 0 && (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 != 0))))
    {
      lVar2 = FUN_1447210f0(lVar1);
      if (lVar2 != 0) {
        lVar2 = FUN_147efe474(lVar2);
        if (lVar2 != 0) {
          local_30 = *param_2;
          if ((local_30 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_147f008ca(lVar2,&local_30,lVar1);
          FUN_147f0dff4(param_1 + 0x118,param_2);
          *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 2;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f003e4 FUN_147f003e4 body=289 status=ok
// SIG undefined FUN_147f003e4(void)

void FUN_147f003e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 0x110) & 2) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      if ((((lVar2 != 0) && (lVar5 = FUN_1447210f0(lVar2), lVar5 != 0)) &&
          (lVar5 = FUN_147efe474(lVar5), lVar5 != 0)) &&
         (iVar1 = *(int *)(param_1 + 0x120), (longlong)iVar1 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x118);
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar7);
          if (((lVar4 != 0) && (lVar6 = FUN_1411a19f0(), lVar6 != 0)) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
              ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30 && (lVar4 = *(longlong *)(lVar3 + lVar7), lVar4 != 0)))))) {
            local_50 = lVar4;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c();
            }
            FUN_147f008ca(lVar5,&local_50,lVar2);
            *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 2;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f0051c FUN_147f0051c body=217 status=ok
// SIG undefined FUN_147f0051c(void)

void FUN_147f0051c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x110) & 2) != 0) && (lVar2 = *(longlong *)(param_1 + 0xa8), lVar2 != 0)
     ) {
    lVar4 = FUN_1447210f0(lVar2);
    if ((lVar4 != 0) &&
       ((lVar4 = FUN_147efe474(lVar4), lVar4 != 0 &&
        (iVar1 = *(int *)(param_1 + 0x120), (longlong)iVar1 != 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      lVar5 = 0;
      do {
        local_48 = *(longlong *)(lVar3 + lVar5);
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147eff0e2(lVar4,lVar2,&local_48);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfd;
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f005f6 FUN_147f005f6 body=185 status=ok
// SIG undefined FUN_147f005f6(void)

void FUN_147f005f6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147f006b0(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f006b0 FUN_147f006b0 body=245 status=ok
// SIG undefined FUN_147f006b0(void)

void FUN_147f006b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1411a19f0();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && ((*param_2 != 0 && (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 != 0))))
    {
      lVar2 = FUN_1447210f0(lVar1);
      if (lVar2 != 0) {
        lVar2 = FUN_147efe474(lVar2);
        if (lVar2 != 0) {
          local_30 = *param_2;
          if ((local_30 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_147eff0e2(lVar2,lVar1,&local_30);
          FUN_147f009c4(param_1 + 0x118,param_2);
          *(uint *)(param_1 + 0x110) =
               (*(uint *)(param_1 + 0x110) & 0xfffffffd) + (uint)(0 < *(int *)(param_1 + 0x120)) * 2
          ;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f007b2 FUN_147f007b2 body=279 status=ok
// SIG undefined FUN_147f007b2(void)

void FUN_147f007b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  FUN_144a3ee64();
  if (0 < *(int *)(param_1 + 0x120)) {
    lVar5 = 0;
    bVar7 = false;
    do {
      while( true ) {
        lVar1 = *(longlong *)(param_1 + 0x118);
        lVar2 = *(longlong *)(lVar1 + lVar5 * 8);
        if ((((lVar2 != 0) && (lVar4 = FUN_1411a19f0(), lVar4 != 0)) &&
            (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30 && (*(longlong *)(lVar1 + lVar5 * 8) != 0)))) break;
        iVar3 = *(int *)(param_1 + 0x120);
        iVar6 = iVar3 + ~(uint)lVar5;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x118) + lVar5 * 8),
                  (void *)(*(longlong *)(param_1 + 0x118) + (longlong)(iVar3 - iVar6) * 8),
                  (longlong)iVar6 << 3);
          iVar3 = *(int *)(param_1 + 0x120);
        }
        *(int *)(param_1 + 0x120) = iVar3 + -1;
        bVar7 = true;
        if (iVar3 + -1 <= lVar5) goto LAB_147f0088f;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x120));
    if (bVar7) {
LAB_147f0088f:
      FUN_147f0df58((longlong *)(param_1 + 0x118));
    }
  }
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
    FUN_147f003e4(param_1);
    return;
  }
  return;
}



// FUNCTION 147f008ca FUN_147f008ca body=248 status=ok
// SIG undefined FUN_147f008ca(void)

void FUN_147f008ca(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [12];
  longlong local_58;
  longlong local_50;
  byte local_48 [12];
  byte local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_2;
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_48,&local_50);
  FUN_1458872f0(local_3c);
  if (((local_48[0] == local_3c[0]) || (*(int *)(param_1 + 0x90) <= (int)(uint)local_48[0])) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)local_48[0] * 8) == 0)) {
    local_58 = *param_2;
    if ((local_58 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147efec68(param_1,local_3c,&local_58);
  }
  FUN_147f0121e(param_1,local_64,param_3);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f009c4 FUN_147f009c4 body=86 status=ok
// SIG undefined FUN_147f009c4(void)

void FUN_147f009c4(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_147f0e054();
  if (uVar1 != 0xffffffff) {
    iVar3 = (int)param_1[1];
    iVar2 = ~uVar1 + iVar3;
    if (iVar2 != 0) {
      iVar4 = 1;
      if (iVar2 < 1) {
        iVar4 = iVar2;
      }
      memmove((void *)(*param_1 + (longlong)(int)uVar1 * 8),
              (void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),(longlong)iVar4 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
  }
  return;
}



// FUNCTION 147f00a1a FUN_147f00a1a body=375 status=ok
// SIG undefined FUN_147f00a1a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147f00a1a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [12];
  byte local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[1] = 0x7f7fffff7f7fffff;
  local_78 = 0xbf800000;
  local_70 = (undefined4)DAT_14cb203d0;
  uStack_6c = DAT_14cb203d0._4_4_;
  uStack_68 = (undefined4)DAT_14cb203d8;
  uStack_64 = DAT_14cb203d8._4_4_;
  local_60 = DAT_14cb203e0;
  local_58 = (undefined4)DAT_14cb203d0;
  uStack_54 = DAT_14cb203d0._4_4_;
  uStack_50 = (undefined4)DAT_14cb203d8;
  uStack_4c = DAT_14cb203d8._4_4_;
  local_48 = DAT_14cb203e0;
  local_40 = 0;
  FUN_1458872f0(local_38);
  local_2c = local_2c & 0xf8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 1);
  }
  plVar1 = local_88 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f00b92(local_88,local_28,plVar1);
  if ((local_88[0] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_88[0]);
  }
  *param_3 = local_88[0];
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f00b92 FUN_147f00b92 body=101 status=ok
// SIG undefined FUN_147f00b92(void)

longlong * FUN_147f00b92(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_147efe474(param_2);
  if (((lVar1 != 0) && ((int)(uint)*(byte *)(param_3 + 0x48) < *(int *)(lVar1 + 0x90))) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x88) + (ulonglong)*(byte *)(param_3 + 0x48) * 8),
     lVar1 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_1 = lVar1;
  }
  return param_1;
}



// FUNCTION 147f00bf8 FUN_147f00bf8 body=235 status=ok
// SIG undefined FUN_147f00bf8(void)

void FUN_147f00bf8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  FUN_147eff0e2(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f00cea FUN_147f00cea body=339 status=ok
// SIG undefined FUN_147f00cea(void)

void FUN_147f00cea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar2 = FUN_147f00e3e(local_20,&local_38,uVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f00e3e FUN_147f00e3e body=260 status=ok
// SIG undefined FUN_147f00e3e(void)

undefined8 FUN_147f00e3e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1411a19f0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      uVar3 = 0;
      if ((param_3 == 0) || (*param_2 == 0)) goto LAB_147f00e8b;
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x180), lVar2 != 0)) {
        lVar1 = FUN_1413f6fa8();
        if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
           (lVar2 = *(longlong *)(lVar2 + 0x118), lVar2 != 0)) {
          local_30 = *param_2;
          if ((local_30 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_147f008ca(lVar2,&local_30,param_3);
          uVar3 = 1;
          goto LAB_147f00e8b;
        }
      }
    }
  }
  uVar3 = 0;
LAB_147f00e8b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f00f44 FUN_147f00f44 body=156 status=ok
// SIG undefined FUN_147f00f44(void)

void FUN_147f00f44(undefined8 param_1,longlong param_2)

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
  FUN_147f00fe2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f00fe2 FUN_147f00fe2 body=149 status=ok
// SIG undefined FUN_147f00fe2(void)

void FUN_147f00fe2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 auStack_68 [40];
  byte local_40 [12];
  byte local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x2a0))(param_2,local_40);
    bVar2 = local_40[0];
    FUN_1458872f0(local_34);
    if (((bVar2 != local_34[0]) && ((int)(uint)local_40[0] < *(int *)(param_1 + 0x90))) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + (ulonglong)local_40[0] * 8),
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01078 FUN_147f01078 body=242 status=ok
// SIG undefined FUN_147f01078(void)

void FUN_147f01078(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147efe474(local_18);
  if (lVar2 != 0) {
    FUN_147f00fe2(lVar2,uVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0116e FUN_147f0116e body=175 status=ok
// SIG undefined FUN_147f0116e(void)

undefined8 FUN_147f0116e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0121e FUN_147f0121e body=131 status=ok
// SIG undefined FUN_147f0121e(void)

void FUN_147f0121e(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458872f0(local_3c);
  local_3c[0] = *param_2;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_30 = 0;
  FUN_14485c47a(&local_30,param_3);
  FUN_147f0e526(param_1 + 0x118,local_3c);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f012a2 FUN_147f012a2 body=101 status=ok
// SIG undefined FUN_147f012a2(void)

void FUN_147f012a2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((((lVar3 != 0) && ((*(uint *)(param_2 + 8) >> (*(uint *)(lVar3 + 0x3c) & 0x1f) & 1) != 0))
          && (*(int *)(lVar3 + 0x50) != 0)) &&
         (plVar4 = *(longlong **)(lVar3 + 0x48), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147f01308 FUN_147f01308 body=55 status=ok
// SIG undefined FUN_147f01308(void)

void FUN_147f01308(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda();
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = FUN_14479d2ce(param_1);
  FUN_147eff73a(uVar1,param_1 + 0x10,param_1 + 0x28);
  return;
}



// FUNCTION 147f01340 FUN_147f01340 body=101 status=ok
// SIG undefined FUN_147f01340(void)

void FUN_147f01340(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((((lVar3 != 0) && ((*(uint *)(param_2 + 8) >> (*(uint *)(lVar3 + 0x3c) & 0x1f) & 1) != 0))
          && (*(int *)(lVar3 + 0x70) != 0)) &&
         (plVar4 = *(longlong **)(lVar3 + 0x68), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147f013a6 FUN_147f013a6 body=192 status=ok
// SIG undefined FUN_147f013a6(void)

undefined8 * FUN_147f013a6(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  FUN_14485c47a();
  *(undefined4 *)(param_1 + 1) = 0;
  uVar4 = DAT_14c8464e8;
  param_1[2] = DAT_14c8464e0;
  param_1[3] = uVar4;
  param_1[4] = DAT_14c8464f0;
  uVar3 = DAT_14c8462c8._4_4_;
  uVar2 = (undefined4)DAT_14c8462c8;
  uVar1 = DAT_14c8462c0._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  param_1[7] = DAT_14c8462d0;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) & 0xfe;
  FUN_145eea1a4(param_1 + 9);
  FUN_14479d2ce(param_1);
  FUN_147ea553e(&local_21,*(undefined8 *)(param_2 + 0xa8));
  *(undefined1 *)(param_1 + 8) = local_21;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x144);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01468 FUN_147f01468 body=93 status=ok
// SIG undefined FUN_147f01468(void)

void FUN_147f01468(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402599be(param_1,&local_20);
  if (*param_1 == '\x01') {
    cVar1 = FUN_140ec0d80(param_1 + -0x20f,local_20,param_2);
    *param_1 = cVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f014c6 FUN_147f014c6 body=329 status=ok
// SIG undefined FUN_147f014c6(void)

void FUN_147f014c6(longlong param_1,undefined4 *param_2,float param_3,undefined8 param_4,
                  double *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_f8 [40];
  double local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  double local_b8 [9];
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c4 = 0;
  FUN_1458872f0(local_70);
  local_d0 = (double)param_3 + *(double *)(param_1 + 0x130);
  local_c8 = *param_2;
  FUN_14485c47a(&local_c4,param_4);
  pdVar7 = param_5;
  pdVar8 = local_b8;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  uVar1 = *(undefined1 *)(param_5 + 9);
  uVar4 = *(undefined8 *)((longlong)param_5 + 0x4c);
  uVar2 = *(undefined1 *)((longlong)param_5 + 0x54);
  iVar3 = *(int *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x110) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x114) < iVar3 + 1U) {
    FUN_147f0f2ee((longlong *)(param_1 + 0x108),iVar3);
  }
  pdVar5 = (double *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar3 * 0x70);
  *pdVar5 = local_d0;
  *(undefined4 *)(pdVar5 + 1) = local_c8;
  *(undefined8 *)((longlong)pdVar5 + 0xc) = local_c4;
  pdVar7 = local_b8;
  pdVar8 = pdVar5 + 3;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  *(undefined1 *)(pdVar5 + 0xc) = uVar1;
  *(undefined8 *)((longlong)pdVar5 + 100) = uVar4;
  *(undefined1 *)((longlong)pdVar5 + 0x6c) = uVar2;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01610 FUN_147f01610 body=202 status=ok
// SIG undefined FUN_147f01610(void)

void FUN_147f01610(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 0x100) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x90), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)plVar3 + 0x2c);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar3 + 0x2d8))(plVar3,param_2);
          uVar4 = *(uint *)((longlong)plVar3 + 0x2c);
        }
        if ((uVar4 & 2) != 0) {
          local_4c[0] = *(undefined1 *)((longlong)plVar3 + 0x3c);
          local_48 = plVar3[8];
          FUN_147f0121e(param_1,local_4c,param_2);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f016dc FUN_147f016dc body=237 status=ok
// SIG undefined FUN_147f016dc(void)

void FUN_147f016dc(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [28];
  char local_64;
  undefined8 local_58;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  local_90 = FUN_144a7cbb2();
  if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_90);
  }
  FUN_140946424(local_88,uVar1,&local_90,5);
  if (local_64 == '\0') {
    do {
      local_9c[0] = *param_2;
      local_98 = *(undefined8 *)(param_2 + 4);
      FUN_147f0121e(param_1,local_9c,local_58);
      FUN_1409464a8(local_88);
    } while (local_64 == '\0');
  }
  if (local_30 == '\x01') {
    FUN_14024445c(local_80);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f017dc FUN_147f017dc body=58 status=ok
// SIG undefined FUN_147f017dc(void)

undefined4 FUN_147f017dc(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_144729dda();
  uVar4 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1);
    lVar3 = FUN_147eff7e6(uVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 0xc);
    }
  }
  return uVar4;
}



// FUNCTION 147f01816 FUN_147f01816 body=46 status=ok
// SIG undefined FUN_147f01816(void)

undefined8 FUN_147f01816(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_14479d2ce(param_1);
  uVar2 = FUN_147eff7e6(uVar2);
  return uVar2;
}



// FUNCTION 147f01844 FUN_147f01844 body=101 status=ok
// SIG undefined FUN_147f01844(void)

longlong FUN_147f01844(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0xa8);
    if (lVar3 != 0) {
      uVar2 = FUN_145a74f10();
      lVar3 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar1 = FUN_147eff7e6(lVar1);
    if (lVar1 != 0) {
      uVar2 = FUN_145a74f10();
      lVar1 = FUN_144718840(lVar1,uVar2);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147f018d2 FUN_147f018d2 body=126 status=ok
// SIG undefined FUN_147f018d2(void)

char * FUN_147f018d2(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_58 [36];
  char local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(param_1 + 0x3c);
  FUN_1458872f0(local_34);
  cVar3 = DAT_14cb20780;
  if (cVar1 == local_34[0]) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    cVar1 = DAT_14cb20780 + '\x01';
    *(char *)(param_1 + 0x3c) = DAT_14cb20780;
    DAT_14cb20780 = cVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  else {
    cVar3 = *(char *)(param_1 + 0x3c);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  *param_2 = cVar3;
  *(undefined8 *)(param_2 + 4) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01954 FUN_147f01954 body=49 status=ok
// SIG undefined FUN_147f01954(void)

longlong * FUN_147f01954(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1411a19f0();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 147f01986 FUN_147f01986 body=101 status=ok
// SIG undefined FUN_147f01986(void)

longlong * FUN_147f01986(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((((lVar1 == 0) || (lVar2 = FUN_145a76444(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    *param_2 = 0;
    return param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  *param_2 = lVar1;
  if (lVar1 == 0) {
    return param_2;
  }
  if (DAT_14c950c29 == '\0') {
    return param_2;
  }
  FUN_1456cec3c();
  return param_2;
}



// FUNCTION 147f019ec FUN_147f019ec body=101 status=ok
// SIG undefined FUN_147f019ec(void)

longlong * FUN_147f019ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((((lVar1 == 0) || (lVar2 = FUN_1459ebbd2(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    *param_2 = 0;
    return param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  *param_2 = lVar1;
  if (lVar1 == 0) {
    return param_2;
  }
  if (DAT_14c950c29 == '\0') {
    return param_2;
  }
  FUN_1456cec3c();
  return param_2;
}



// FUNCTION 147f01a52 FUN_147f01a52 body=49 status=ok
// SIG undefined FUN_147f01a52(void)

longlong * FUN_147f01a52(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a7626c();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 147f01a84 FUN_147f01a84 body=101 status=ok
// SIG undefined FUN_147f01a84(void)

longlong * FUN_147f01a84(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((((lVar1 == 0) || (lVar2 = FUN_1459eb9fa(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    *param_2 = 0;
    return param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  *param_2 = lVar1;
  if (lVar1 == 0) {
    return param_2;
  }
  if (DAT_14c950c29 == '\0') {
    return param_2;
  }
  FUN_1456cec3c();
  return param_2;
}



// FUNCTION 147f01aea FUN_147f01aea body=49 status=ok
// SIG undefined FUN_147f01aea(void)

longlong * FUN_147f01aea(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a76358();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 147f01b20 FUN_147f01b20 body=47 status=ok
// SIG undefined FUN_147f01b20(void)

longlong * FUN_147f01b20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 147f01b54 FUN_147f01b54 body=67 status=ok
// SIG undefined FUN_147f01b54(void)

undefined1 * FUN_147f01b54(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1459ebbd2();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *param_2 = *(undefined1 *)(lVar2 + 0x3c);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar2 + 0x40);
  return param_2;
}



// FUNCTION 147f01b98 FUN_147f01b98 body=67 status=ok
// SIG undefined FUN_147f01b98(void)

undefined1 * FUN_147f01b98(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1459ebae6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *param_2 = *(undefined1 *)(lVar2 + 0x3c);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar2 + 0x40);
  return param_2;
}



// FUNCTION 147f01bdc FUN_147f01bdc body=180 status=ok
// SIG undefined FUN_147f01bdc(void)

void FUN_147f01bdc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147f01c92(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01c92 FUN_147f01c92 body=177 status=ok
// SIG undefined FUN_147f01c92(void)

void FUN_147f01c92(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_1 + 0x88);
  iVar5 = (int)param_2[1] + iVar4;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_140c5c1ec(param_2);
    iVar4 = *(int *)(param_1 + 0x88);
  }
  if (iVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1447d05f2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar3;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar4 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147f01d44 FUN_147f01d44 body=184 status=ok
// SIG undefined FUN_147f01d44(void)

void FUN_147f01d44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147f02422(plVar1,param_1 + 0x80);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01dfe FUN_147f01dfe body=144 status=ok
// SIG undefined FUN_147f01dfe(void)

undefined4 FUN_147f01dfe(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_147f01e90(local_48);
  uVar2 = FUN_14477b072(param_1,DAT_14cb20870);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,local_48);
  uVar1 = local_38;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01e90 FUN_147f01e90 body=88 status=ok
// SIG undefined FUN_147f01e90(void)

undefined8 * FUN_147f01e90(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f0f37e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f01eec FUN_147f01eec body=182 status=ok
// SIG undefined FUN_147f01eec(void)

void FUN_147f01eec(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_2);
  if (lVar1 != 0) {
    local_38 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    FUN_147f0f664(param_1 + 0x10,&local_38);
    local_38 = *(longlong *)(lVar1 + 0xa8);
    local_30 = lVar1;
    uVar2 = FUN_14477b072(param_1,DAT_14cb20840);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_38);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f01fa4 FUN_147f01fa4 body=175 status=ok
// SIG undefined FUN_147f01fa4(void)

void FUN_147f01fa4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_2);
  if (lVar1 != 0) {
    local_38 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    FUN_147f020cc(param_1 + 0x10,&local_38);
    local_38 = *(longlong *)(lVar1 + 0xa8);
    local_30 = lVar1;
    uVar2 = FUN_14477b072(param_1,DAT_14cb20850);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f02054 FUN_147f02054 body=119 status=ok
// SIG undefined FUN_147f02054(void)

void FUN_147f02054(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_2);
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(lVar1 + 0xa8);
    local_20 = lVar1;
    uVar2 = FUN_14477b072(param_1,DAT_14cb20860);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f020cc FUN_147f020cc body=241 status=ok
// SIG undefined FUN_147f020cc(void)

void FUN_147f020cc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        FUN_147f0f7a8(param_1);
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return;
}



// FUNCTION 147f021be FUN_147f021be body=132 status=ok
// SIG undefined FUN_147f021be(void)

void FUN_147f021be(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_147f0f844((longlong *)(param_1 + 0x90),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147f02242 FUN_147f02242 body=92 status=ok
// SIG undefined FUN_147f02242(void)

void FUN_147f02242(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb20830);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f022a0 FUN_147f022a0 body=76 status=ok
// SIG undefined FUN_147f022a0(void)

undefined4 FUN_147f022a0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147f01dfe(param_1,param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) < 0) {
    FUN_147f0f8ca(param_1 + 0x90);
  }
  return uVar1;
}



// FUNCTION 147f022ec FUN_147f022ec body=308 status=ok
// SIG undefined FUN_147f022ec(void)

undefined1 * FUN_147f022ec(longlong param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  undefined1 auStack_68 [40];
  char local_40 [4];
  undefined8 local_3c;
  uint local_34;
  uint *local_30;
  char *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  cVar4 = DAT_14cb20780;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd4) & 1) == 0) {
    local_34 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18);
    if (DAT_14cb208a0 != DAT_14cb208cc) {
      puVar6 = &DAT_14cb208d0;
      if (DAT_14cb208d8 != (undefined *)0x0) {
        puVar6 = DAT_14cb208d8;
      }
      uVar2 = *(uint *)(puVar6 + (ulonglong)
                                 (DAT_14cb208e0 - 1U &
                                 (local_34 << 0x10 | local_34 & 0xffff) + ((local_34 & 0xffff) >> 4)
                                 + ((local_34 >> 0x10) << 0x13 | local_34 >> 0x10)) * 4);
      while (uVar2 != 0xffffffff) {
        puVar1 = (uint *)(DAT_14cb20898 + (longlong)(int)uVar2 * 0x18);
        if (*puVar1 == local_34) {
          if ((puVar1 != (uint *)0x0) && (puVar1 != (uint *)0xfffffffffffffffc)) {
            uVar3 = *(undefined8 *)(puVar1 + 2);
            *(char *)(param_1 + 0x3c) = (char)puVar1[1];
            *(undefined8 *)(param_1 + 0x40) = uVar3;
            goto LAB_147f023f3;
          }
          break;
        }
        uVar2 = puVar1[4];
      }
    }
    local_3c = *(undefined8 *)(param_1 + 0x18);
    cVar5 = DAT_14cb20780 + '\x01';
    *(char *)(param_1 + 0x3c) = DAT_14cb20780;
    DAT_14cb20780 = cVar5;
    *(undefined8 *)(param_1 + 0x40) = local_3c;
    local_28 = local_40;
    local_40[0] = cVar4;
    local_30 = &local_34;
    FUN_147f0f8fa(local_1c);
  }
LAB_147f023f3:
  *param_2 = *(undefined1 *)(param_1 + 0x3c);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f02422 FUN_147f02422 body=88 status=ok
// SIG undefined FUN_147f02422(void)

undefined8 * FUN_147f02422(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f0fe5c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f0247a FUN_147f0247a body=733 status=ok
// SIG undefined FUN_147f0247a(void)

void FUN_147f0247a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = &local_88;
  local_88 = local_60;
  uStack_80 = uStack_58;
  local_78 = local_50;
  local_c8 = &local_a8;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uStack_9c = uStack_3c;
  local_98 = local_38;
  local_b8 = local_68;
  FUN_147f02758(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f02758 FUN_147f02758 body=180 status=ok
// SIG undefined FUN_147f02758(void)

void FUN_147f02758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_147efe474();
  if (lVar1 != 0) {
    local_98 = param_7;
    local_a0 = param_6;
    local_a8 = param_5;
    FUN_147f02810(local_90,param_2,param_3,param_4);
    FUN_147f02dcc(lVar1,local_90);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f02810 FUN_147f02810 body=147 status=ok
// SIG undefined FUN_147f02810(void)

undefined4 *
FUN_147f02810(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 *param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  *param_1 = param_4;
  uVar4 = param_5[1];
  *(undefined8 *)(param_1 + 2) = *param_5;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = param_5[2];
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  param_1[8] = *param_6;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_6 + 4);
  *(longlong *)(param_1 + 0xe) = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar5 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x10) = param_3;
  if ((param_3 != 0) && ((bVar5 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(undefined8 *)(param_1 + 0x12) = param_7;
  FUN_147f028a4(param_1);
  return param_1;
}



// FUNCTION 147f028a4 FUN_147f028a4 body=354 status=ok
// SIG undefined FUN_147f028a4(void)

void FUN_147f028a4(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  bVar5 = false;
  if ((-DAT_14cb203d0 < *(double *)(param_1 + 0x20)) &&
     (bVar5 = false, *(double *)(param_1 + 0x20) < DAT_14cb203d0)) {
    bVar5 = false;
    if ((-DAT_14cb203d8 < *(double *)(param_1 + 0x28)) &&
       (*(double *)(param_1 + 0x28) < DAT_14cb203d8)) {
      if (*(double *)(param_1 + 0x30) <= -DAT_14cb203e0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(double *)(param_1 + 0x30) < DAT_14cb203e0;
      }
    }
  }
  if ((((*(double *)(param_1 + 8) <= -DAT_14cb203d0) || (DAT_14cb203d0 <= *(double *)(param_1 + 8)))
      || (*(double *)(param_1 + 0x10) <= -DAT_14cb203d8)) ||
     ((DAT_14cb203d8 <= *(double *)(param_1 + 0x10) ||
      (*(double *)(param_1 + 0x18) <= -DAT_14cb203e0)))) {
    if (bVar5 != false) goto LAB_147f029b1;
    bVar2 = false;
  }
  else {
    bVar2 = *(double *)(param_1 + 0x18) < DAT_14cb203e0;
    if (bVar5 != bVar2) {
      if (bVar5 == false) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
        return;
      }
      goto LAB_147f029b1;
    }
  }
  if (bVar5 != false || bVar2) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
  if (lVar1 == 0) {
    puVar4 = &DAT_14c8464e0;
    uVar6 = (undefined4)DAT_14c8464f0;
    uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    puVar4 = (undefined8 *)(lVar1 + 0x260);
  }
  uVar3 = puVar4[1];
  *(undefined8 *)(param_1 + 8) = *puVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar7,uVar6);
LAB_147f029b1:
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  return;
}



// FUNCTION 147f02a06 FUN_147f02a06 body=124 status=ok
// SIG undefined FUN_147f02a06(void)

longlong FUN_147f02a06(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar2 = FUN_145a76094();
    lVar3 = FUN_144718840(lVar3,uVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
    plVar4 = (longlong *)(param_1 + 0x38);
    if (*plVar4 != 0) {
      uVar2 = FUN_144a7cbb2();
      bVar1 = FUN_144a7ca96(plVar4,uVar2);
      if (((*plVar4 != 0 & bVar1) == 1) && (lVar3 = *(longlong *)(*plVar4 + 0x3c0), lVar3 != 0)) {
        uVar2 = FUN_145a76094();
        lVar3 = FUN_144718840(lVar3,uVar2);
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147f02a82 FUN_147f02a82 body=604 status=ok
// SIG undefined FUN_147f02a82(void)

void FUN_147f02a82(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar6 = *(undefined4 **)(param_1 + 0x78);
    puVar8 = puVar6 + (longlong)*(int *)(param_1 + 0x80) * 0x14;
    lVar9 = lVar1 + 0x70;
    do {
      plVar2 = (longlong *)FUN_147f02a06(puVar6);
      if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0)
         ) {
        iVar7 = *(int *)(lVar3 + 0x144);
        local_a8 = lVar9;
        FUN_145eea1a4(&local_a0);
        lVar9 = local_a8;
        if (iVar7 != (int)local_a0) {
          if (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c)) {
            lVar5 = *(longlong *)(lVar1 + 0x78);
            if (*(longlong *)(lVar1 + 0x78) == 0) {
              lVar5 = local_a8;
            }
            iVar7 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(lVar1 + 0x80) - 1U & *(uint *)(lVar3 + 0x144)) * 4);
            if (iVar7 != -1) {
              do {
                lVar5 = *(longlong *)(lVar1 + 0x38) + (longlong)iVar7 * 0x60;
                if (*(uint *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar7 * 0x60) ==
                    *(uint *)(lVar3 + 0x144)) goto LAB_147f02bc7;
                iVar7 = *(int *)(lVar5 + 0x58);
              } while (iVar7 != -1);
            }
          }
          lVar5 = 0;
LAB_147f02bc7:
          if ((*(uint *)(lVar5 + 0x10) >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) != 0) {
            local_b0 = lVar5 + 8;
            local_60 = *(undefined8 *)(puVar6 + 0x12);
            local_98 = *puVar6;
            local_a0 = 0x7f7fffff00000000;
            local_90 = *(undefined8 *)(puVar6 + 2);
            uStack_88 = *(undefined8 *)(puVar6 + 4);
            local_80 = *(undefined8 *)(puVar6 + 6);
            local_78 = puVar6[8];
            uStack_74 = puVar6[9];
            uStack_70 = puVar6[10];
            uStack_6c = puVar6[0xb];
            local_68 = *(undefined8 *)(puVar6 + 0xc);
            local_58 = 0xff;
            FUN_1446f470e(&local_54,L"Invalid",1);
            local_4c = (uint)(*(char *)(param_1 + 0x28) == '\x01') + (local_4c & 0xfffffff8) + 2;
            local_58 = *(undefined1 *)(param_1 + 0x3c);
            local_54 = *(undefined8 *)(param_1 + 0x40);
            local_b8 = *(undefined8 *)(puVar6 + 0x10);
            *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) | 1;
            uVar4 = FUN_14479d2ce(local_b0);
            FUN_147eff856(uVar4,local_b8,&local_a0);
          }
        }
      }
      puVar6 = puVar6 + 0x14;
    } while (puVar6 != puVar8);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_147f0febe(param_1 + 0x78);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(0x7f7fffff);
  }
  return;
}



// FUNCTION 147f02ce0 FUN_147f02ce0 body=92 status=ok
// SIG undefined FUN_147f02ce0(void)

void FUN_147f02ce0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_2 + 0x38) != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
      FUN_147f0feee(param_1 + 0x78,iVar1);
    }
    FUN_147f0a348((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x78),param_2);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f02d3c FUN_147f02d3c body=142 status=ok
// SIG undefined FUN_147f02d3c(void)

void FUN_147f02d3c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar1 = FUN_145b6020a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_147f028a4(param_2 + 0x28);
      FUN_147f0a348(local_70,param_2 + 0x28);
      FUN_147f02ce0(param_1,local_70);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f02dcc FUN_147f02dcc body=99 status=ok
// SIG undefined FUN_147f02dcc(void)

void FUN_147f02dcc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1459ebae6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  if (((int)(uint)*(byte *)(lVar2 + 0x3c) < *(int *)(param_1 + 0x90)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)*(byte *)(lVar2 + 0x3c) * 8),
     lVar2 != 0)) {
    FUN_147f02ce0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147f02e30 FUN_147f02e30 body=571 status=ok
// SIG undefined FUN_147f02e30(void)

void FUN_147f02e30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  local_70 = local_50;
  local_78 = local_44;
  FUN_147f0306c(local_18,&local_68,local_34,local_40);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0306c FUN_147f0306c body=217 status=ok
// SIG undefined FUN_147f0306c(void)

void FUN_147f0306c(undefined8 param_1,undefined4 *param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_147efe474();
  if (lVar1 != 0) {
    local_80[0] = 0;
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_68 = *(undefined8 *)(param_2 + 4);
    local_5c = param_5;
    local_60 = param_3;
    local_58 = param_4;
    if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_4);
    }
    local_50 = param_6;
    local_48 = DAT_14cb1f000;
    FUN_147f0314a(local_80);
    FUN_147f03574(lVar1,local_80);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0314a FUN_147f0314a body=252 status=ok
// SIG undefined FUN_147f0314a(void)

void FUN_147f0314a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147ea553e(&local_19,*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x38) = local_19;
  if ((-DAT_14cb203d0 < *(double *)(param_1 + 8)) && (*(double *)(param_1 + 8) < DAT_14cb203d0)) {
    if ((-DAT_14cb203d8 < *(double *)(param_1 + 0x10)) &&
       (*(double *)(param_1 + 0x10) < DAT_14cb203d8)) {
      if ((-DAT_14cb203e0 < *(double *)(param_1 + 0x18)) &&
         (*(double *)(param_1 + 0x18) < DAT_14cb203e0)) goto LAB_147f03218;
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
    if (lVar1 == 0) {
      puVar3 = &DAT_14c8464e0;
      uVar4 = DAT_14c8464f0;
    }
    else {
      puVar3 = (undefined8 *)(lVar1 + 0x260);
      uVar4 = *(undefined8 *)(lVar1 + 0x270);
    }
    uVar2 = puVar3[1];
    *(undefined8 *)(param_1 + 8) = *puVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
LAB_147f03218:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03248 FUN_147f03248 body=240 status=ok
// SIG undefined FUN_147f03248(void)

void FUN_147f03248(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  float local_40;
  byte local_3c;
  undefined8 local_38;
  float *pfStack_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14479d2ce(param_2);
  local_38._0_4_ = CONCAT31(local_38._1_3_,*(undefined1 *)(param_1 + 0x3c));
  local_38._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x40);
  pfStack_30._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  lVar3 = FUN_147efe5b2(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_145b5fd78();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_147f032b0;
  }
  lVar3 = 0;
LAB_147f032b0:
  local_40 = *(float *)(lVar3 + 0x50) * *(float *)(lVar3 + 0x50);
  pfStack_30 = &local_40;
  bVar1 = *(byte *)(lVar3 + 0x5c) << 4;
  local_3c = (byte)((bVar1 | *(byte *)(lVar3 + 0x5c) >> 4) * '\x02' & 0x40 |
                   ((bVar1 & 0x10) << 2 | (bVar1 & 0x40) >> 2) * '\x02') >> 5;
  local_44 = *(undefined4 *)(param_2 + 0x48);
  local_38 = &local_44;
  FUN_147f101f8(param_1 + 0x90,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0333a FUN_147f0333a body=255 status=ok
// SIG undefined FUN_147f0333a(void)

void FUN_147f0333a(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  local_24 = uVar2;
  if ((*(uint *)(param_2 + 8) >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) == 0) {
    FUN_147f10864(param_1 + 0x90,&local_24);
    goto LAB_147f0341b;
  }
  uVar4 = FUN_14479d2ce(param_2);
  local_30 = *(undefined1 *)(param_1 + 0x3c);
  local_2c = *(undefined8 *)(param_1 + 0x40);
  lVar5 = FUN_147efe5b2(uVar4);
  if (lVar5 == 0) {
LAB_147f033c8:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_145b5fd78();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_147f033c8;
  }
  pfVar7 = (float *)FUN_147f10698(param_1 + 0x90,uVar2,&local_24);
  bVar1 = *(byte *)(lVar5 + 0x5c);
  bVar3 = bVar1 << 4;
  *pfVar7 = *(float *)(lVar5 + 0x50) * *(float *)(lVar5 + 0x50);
  *(byte *)(pfVar7 + 1) =
       (byte)((bVar3 | bVar1 >> 4) * '\x02' & 0x40 |
             ((bVar3 & 0x10) << 2 | (bVar3 & 0x40) >> 2) * '\x02') >> 5;
LAB_147f0341b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f034ae FUN_147f034ae body=196 status=ok
// SIG undefined FUN_147f034ae(void)

void FUN_147f034ae(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  FUN_1446efa72(&local_20,0,2,0x10);
  local_18 = 2;
  *local_20 = &PTR_LAB_14a78dae0;
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
  local_20[2] = lVar2;
  *local_20 = &PTR_FUN_14a78da70;
  local_20[3] = FUN_14385b562;
  FUN_1478b87d8(&local_20);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03574 FUN_147f03574 body=99 status=ok
// SIG undefined FUN_147f03574(void)

void FUN_147f03574(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1459ebbd2();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  if (((int)(uint)*(byte *)(lVar2 + 0x3c) < *(int *)(param_1 + 0x90)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)*(byte *)(lVar2 + 0x3c) * 8),
     lVar2 != 0)) {
    FUN_147f03b68(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147f035d8 FUN_147f035d8 body=1177 status=ok
// SIG undefined FUN_147f035d8(void)

void FUN_147f035d8(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong local_150;
  longlong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_ec;
  uint local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  longlong *local_b0;
  undefined2 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar12 = *(longlong *)(param_1 + 0x30);
  if (0.0 < *(float *)(param_1 + 0x88)) {
    dVar4 = (double)(1.0 / *(float *)(param_1 + 0x88));
  }
  else {
    dVar4 = 0.0;
  }
  plVar1 = (longlong *)(lVar12 + 0x38);
  local_130 = lVar12 + 0x48;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  if (*(int *)(lVar12 + 0x60) != 0) {
    FUN_1449c0562(&local_138);
  }
  local_c8 = local_128;
  uVar5 = local_c8;
  local_c0 = (undefined4)uStack_120;
  local_bc = uStack_120._4_4_;
  local_d8 = local_138;
  local_d0 = local_130;
  local_a8 = 0;
  local_c8._4_4_ = (int)((ulonglong)local_128 >> 0x20);
  local_e0 = plVar1;
  local_b8 = plVar1;
  local_b0 = plVar1;
  if (local_c8._4_4_ < *(int *)(local_130 + 0x18)) {
    local_148 = param_1 + 200;
    iVar7 = local_c8._4_4_;
    local_150 = lVar12;
    local_c8 = uVar5;
    do {
      if ((*(uint *)(*local_e0 + 0x10 + (longlong)iVar7 * 0x60) >>
           (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) != 0) {
        lVar12 = *local_e0 + (longlong)iVar7 * 0x60;
        if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
          lVar9 = *(longlong *)(param_1 + 0xd0);
          if (*(longlong *)(param_1 + 0xd0) == 0) {
            lVar9 = local_148;
          }
          uVar10 = *(uint *)(lVar9 + (ulonglong)
                                     (*(int *)(param_1 + 0xd8) - 1U & *(uint *)(lVar12 + 0x50)) * 4)
          ;
          if (uVar10 != 0xffffffff) {
            do {
              puVar13 = (uint *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar10 * 0x14);
              if (*puVar13 == *(uint *)(lVar12 + 0x50)) goto LAB_147f0376e;
              uVar10 = puVar13[3];
            } while (uVar10 != 0xffffffff);
          }
        }
        puVar13 = (uint *)0x0;
LAB_147f0376e:
        iVar7 = *(int *)(param_1 + 0x80);
        if ((longlong)iVar7 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x78);
          lVar11 = 0;
          do {
            fVar14 = *(float *)(lVar9 + 0x20 + lVar11);
            fVar16 = 0.0;
            if (0.0 <= fVar14) {
              fVar16 = fVar14;
            }
            dVar2 = *(double *)(lVar12 + 0x18) - *(double *)(lVar9 + 8 + lVar11);
            dVar15 = *(double *)(lVar12 + 0x20) - *(double *)(lVar9 + 0x10 + lVar11);
            dVar3 = *(double *)(lVar12 + 0x28) - *(double *)(lVar9 + 0x18 + lVar11);
            dVar2 = dVar3 * dVar3 + dVar15 * dVar15 + dVar2 * dVar2;
            if ((dVar2 <= (double)(fVar16 * fVar16 * (float)puVar13[1])) &&
               (((fVar14 = *(float *)(lVar9 + 0x24 + lVar11), fVar14 <= 0.0 ||
                 (fVar14 = fVar14 * fVar16, dVar2 <= (double)(fVar14 * fVar14))) &&
                (cVar6 = FUN_147f03a72(*(undefined1 *)(lVar12 + 0x48),
                                       *(undefined1 *)(lVar9 + 0x38 + lVar11),(char)puVar13[2]),
                cVar6 != '\0')))) {
              dVar2 = dVar2 * dVar4;
              if (dVar2 < 0.0) {
                dVar2 = sqrt(dVar2);
              }
              else {
                dVar2 = SQRT(dVar2);
              }
              puVar8 = (undefined8 *)(lVar9 + 8 + lVar11);
              local_f8 = *(undefined8 *)(lVar9 + 0x30 + lVar11);
              local_138 = 0x7f7fffff00000000;
              local_130 = CONCAT44(local_130._4_4_,fVar16);
              local_118 = puVar8[2];
              local_128 = *puVar8;
              uStack_120 = puVar8[1];
              local_100 = *(undefined8 *)(lVar12 + 0x28);
              local_110 = *(undefined4 *)(lVar12 + 0x18);
              uStack_10c = *(undefined4 *)(lVar12 + 0x1c);
              uStack_108 = *(undefined4 *)(lVar12 + 0x20);
              uStack_104 = *(undefined4 *)(lVar12 + 0x24);
              local_f0 = 0xff;
              FUN_1446f470e(&local_ec,L"Invalid",1);
              local_e4 = (uint)(*(char *)(param_1 + 0x28) == '\x01') + (local_e4 & 0xfffffff8) + 2;
              local_f0 = *(undefined1 *)(param_1 + 0x3c);
              local_ec = *(undefined8 *)(param_1 + 0x40);
              local_13c = *(undefined4 *)(lVar12 + 0x50);
              local_158 = &local_138;
              FUN_147f014c6(local_150,&local_13c,(float)dVar2,*(undefined8 *)(lVar9 + 0x28 + lVar11)
                           );
            }
            lVar11 = lVar11 + 0x40;
          } while ((longlong)iVar7 * 0x40 != lVar11);
        }
      }
      local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
      FUN_1449c0562(&local_d8);
      iVar7 = local_c8._4_4_;
    } while (local_c8._4_4_ < *(int *)(local_d0 + 0x18));
    uVar5 = local_c8;
    if (((local_a8 & 1) != 0) && (local_a8._1_1_ == '\x01')) {
      FUN_147f0ec2e(local_b0,(int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34));
      uVar5 = local_c8;
    }
  }
  local_c8 = uVar5;
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_147f1090c(param_1 + 0x78);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(0x7f7fffff);
}



// FUNCTION 147f03a72 FUN_147f03a72 body=245 status=ok
// SIG undefined FUN_147f03a72(void)

bool FUN_147f03a72(undefined1 param_1,undefined1 param_2,byte param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_58 [38];
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20b7c) {
    FUN_144b3d300(&DAT_14cb20b7c);
    if (DAT_14cb20b7c == -1) {
      DAT_14cb20b78 = 7;
      _Init_thread_footer(&DAT_14cb20b7c);
    }
  }
  pcVar1 = DAT_14cb1f010;
  bVar5 = true;
  if (DAT_14cb20b78 != param_3) {
    if (DAT_14cb1f010 == (code *)0x0) {
      uVar2 = 1;
    }
    else {
      plVar4 = &DAT_14cb1f030;
      if (DAT_14cb1f020 != (longlong *)0x0) {
        plVar4 = DAT_14cb1f020;
      }
      local_32 = param_2;
      local_31 = param_1;
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar2 = (*pcVar1)(uVar3,&local_31,&local_32);
    }
    bVar5 = (param_3 >> (uVar2 & 0x1f) & 1) != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03b68 FUN_147f03b68 body=155 status=ok
// SIG undefined FUN_147f03b68(void)

void FUN_147f03b68(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  
  iVar2 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar2 + 1U) {
    FUN_147f1093c((longlong *)(param_1 + 0x78),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar12 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + 0x20 + lVar12) = *(undefined8 *)(param_2 + 8);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar12);
  *puVar1 = param_2[4];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar3 + lVar12);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar4 = *(longlong *)(param_2 + 10);
  *(longlong *)(lVar3 + 0x28 + lVar12) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(lVar3 + lVar12 + 0x38) = *(undefined1 *)(param_2 + 0xe);
  *(undefined8 *)(lVar3 + lVar12 + 0x30) = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147f03c04 FUN_147f03c04 body=188 status=ok
// SIG undefined FUN_147f03c04(void)

void FUN_147f03c04(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_145b602f4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_147f0314a(param_2 + 0x28);
      local_38 = *(undefined8 *)(param_2 + 0x48);
      local_58 = *(undefined4 *)(param_2 + 0x28);
      uStack_54 = *(undefined4 *)(param_2 + 0x2c);
      uStack_50 = *(undefined4 *)(param_2 + 0x30);
      uStack_4c = *(undefined4 *)(param_2 + 0x34);
      local_48 = *(undefined4 *)(param_2 + 0x38);
      uStack_44 = *(undefined4 *)(param_2 + 0x3c);
      uStack_40 = *(undefined4 *)(param_2 + 0x40);
      uStack_3c = *(undefined4 *)(param_2 + 0x44);
      local_30 = *(longlong *)(param_2 + 0x50);
      if ((local_30 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_20 = *(undefined1 *)(param_2 + 0x60);
      local_28 = *(undefined8 *)(param_2 + 0x58);
      FUN_147f03b68(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03cc2 FUN_147f03cc2 body=300 status=ok
// SIG undefined FUN_147f03cc2(void)

void FUN_147f03cc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f03df0(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03df0 FUN_147f03df0 body=166 status=ok
// SIG undefined FUN_147f03df0(void)

void FUN_147f03df0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_147efe474();
  if (lVar1 != 0) {
    local_48 = param_1;
    if (param_1 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_1);
    }
    local_40 = param_2;
    if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    local_38 = param_3;
    FUN_147f043bc(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03e98 FUN_147f03e98 body=300 status=ok
// SIG undefined FUN_147f03e98(void)

void FUN_147f03e98(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f03fc6(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f03fc6 FUN_147f03fc6 body=164 status=ok
// SIG undefined FUN_147f03fc6(void)

void FUN_147f03fc6(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147efe474();
  if ((lVar2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x3c0), lVar1 != 0)) {
    local_48 = lVar1;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c();
    }
    local_40 = param_2;
    if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    local_38 = param_3;
    FUN_147f043bc(lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0406e FUN_147f0406e body=761 status=ok
// SIG undefined FUN_147f0406e(void)

void FUN_147f0406e(longlong param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  double *pdVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  double local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_8c;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((longlong)*(int *)(param_1 + 0x80) == 0) {
LAB_147f041b2:
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      FUN_147f109c2(param_1 + 0x78);
    }
    if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(0x7f7fffff);
    }
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  plVar11 = *(longlong **)(param_1 + 0x78);
  plVar13 = plVar11 + (longlong)*(int *)(param_1 + 0x80) * 3;
LAB_147f040e9:
  lVar8 = *plVar11;
  if ((lVar8 != 0) && (plVar11[1] != 0)) {
    uVar6 = FUN_145a76094();
    plVar7 = (longlong *)FUN_144718840(lVar8,uVar6);
    if ((plVar7 != (longlong *)0x0) &&
       ((lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 != 0 &&
        (*(int *)(lVar4 + 0x40) != *(int *)(lVar4 + 0x6c))))) {
      uVar3 = *(uint *)(lVar8 + 0x144);
      lVar8 = *(longlong *)(lVar4 + 0x78);
      if (*(longlong *)(lVar4 + 0x78) == 0) {
        lVar8 = lVar4 + 0x70;
      }
      iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar4 + 0x80) - 1U & uVar3) * 4);
      if (iVar10 != -1) {
        lVar8 = *(longlong *)(lVar4 + 0x38);
        iVar12 = iVar10;
        do {
          if (*(uint *)(lVar8 + (longlong)iVar12 * 0x60) == uVar3) goto LAB_147f04127;
          iVar12 = *(int *)((longlong)iVar12 * 0x60 + lVar8 + 0x58);
        } while (iVar12 != -1);
      }
    }
  }
  goto LAB_147f040f9;
  while (iVar10 = *(int *)(lVar14 + 0x58), iVar10 != -1) {
LAB_147f04127:
    lVar14 = lVar8 + (longlong)iVar10 * 0x60;
    if (*(uint *)(lVar8 + (longlong)iVar10 * 0x60) == uVar3) goto LAB_147f04225;
  }
  lVar14 = 0;
LAB_147f04225:
  if ((*(uint *)(lVar14 + 0x10) >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) != 0) {
    plVar7 = (longlong *)plVar11[1];
    lVar8 = plVar7[0x39];
    if (lVar8 == 0) {
      uVar15 = (undefined4)DAT_14c8464f0;
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      pdVar9 = (double *)&DAT_14c8464e0;
    }
    else {
      uVar15 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
      pdVar9 = (double *)(lVar8 + 0x260);
    }
    local_e0 = lVar14 + 8;
    dVar1 = *pdVar9;
    dVar2 = pdVar9[1];
    (**(code **)(*plVar7 + 0x328))(plVar7,&local_d8);
    dVar5 = (double)*(float *)(plVar11 + 2);
    local_b8 = local_c8 * dVar5 + (double)CONCAT44(uVar16,uVar15);
    local_c0 = (double)CONCAT44(uStack_cc,local_d0) * dVar5 + dVar2;
    local_c8 = dVar5 * local_d8 + dVar1;
    local_d8 = 1.4044470919183048e+306;
    local_d0 = 0x3f800000;
    local_b0 = *(undefined4 *)(lVar14 + 0x18);
    uStack_ac = *(undefined4 *)(lVar14 + 0x1c);
    uStack_a8 = *(undefined4 *)(lVar14 + 0x20);
    uStack_a4 = *(undefined4 *)(lVar14 + 0x24);
    local_a0 = *(undefined8 *)(lVar14 + 0x28);
    local_98 = 0;
    local_90 = 0xff;
    FUN_1446f470e(&local_8c,L"Invalid",1);
    local_84 = (uint)(*(char *)(param_1 + 0x28) == '\x01') + (local_84 & 0xfffffff8) + 2;
    local_90 = *(undefined1 *)(param_1 + 0x3c);
    local_8c = *(undefined8 *)(param_1 + 0x40);
    local_e8 = plVar11[1];
    *(uint *)(lVar14 + 0x4c) = *(uint *)(lVar14 + 0x4c) | 1;
    uVar6 = FUN_14479d2ce(local_e0);
    FUN_147eff856(uVar6,local_e8,&local_d8);
  }
LAB_147f040f9:
  plVar11 = plVar11 + 3;
  if (plVar11 == plVar13) goto LAB_147f041b2;
  goto LAB_147f040e9;
}



// FUNCTION 147f04368 FUN_147f04368 body=83 status=ok
// SIG undefined FUN_147f04368(void)

void FUN_147f04368(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_147f10a54(param_1 + 0x78,iVar1);
  }
  FUN_147f109f2((longlong)iVar1 * 0x18 + *(longlong *)(param_1 + 0x78),param_2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147f043bc FUN_147f043bc body=99 status=ok
// SIG undefined FUN_147f043bc(void)

void FUN_147f043bc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145a7626c();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  if (((int)(uint)*(byte *)(lVar2 + 0x3c) < *(int *)(param_1 + 0x90)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)*(byte *)(lVar2 + 0x3c) * 8),
     lVar2 != 0)) {
    FUN_147f04368(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147f0442c FUN_147f0442c body=443 status=ok
// SIG undefined FUN_147f0442c(void)

void FUN_147f0442c(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  float local_88;
  float local_84;
  byte local_80;
  undefined1 local_7c [4];
  undefined8 local_78;
  float *pfStack_70;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14479d2ce(param_2);
  local_78._0_4_ = CONCAT31(local_78._1_3_,*(undefined1 *)(param_1 + 0x3c));
  local_78._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x40);
  pfStack_70._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  lVar3 = FUN_147efe5b2(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_145b5ff4c();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_147f0449f;
  }
  lVar3 = 0;
LAB_147f0449f:
  local_88 = *(float *)(lVar3 + 100);
  local_94 = *(float *)(lVar3 + 0x50) + local_88;
  local_94 = local_94 * local_94;
  local_8c = *(float *)(lVar3 + 0x54) + local_88;
  local_8c = local_8c * local_8c;
  local_84 = *(float *)(lVar3 + 0x68) * *(float *)(lVar3 + 0x68);
  fVar6 = *(float *)(lVar3 + 0x58) * 0.017453292;
  if (3.1415927 <= fVar6) {
    fVar6 = 3.1415927;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_98 = cosf(fVar6);
  bVar1 = *(byte *)(lVar3 + 0x5c) << 4;
  local_80 = (byte)((bVar1 | *(byte *)(lVar3 + 0x5c) >> 4) * '\x02' & 0x40 |
                   ((bVar1 & 0x10) << 2 | (bVar1 & 0x40) >> 2) * '\x02') >> 5;
  fVar6 = *(float *)(lVar3 + 0x60);
  local_90 = ~-(uint)(fVar6 == -1.0) & (uint)(fVar6 * fVar6) | -(uint)(fVar6 == -1.0) & 0xbf800000;
  local_9c = *(undefined4 *)(param_2 + 0x48);
  local_78 = &local_9c;
  pfStack_70 = &local_98;
  FUN_147f1221e(param_1 + 200,local_7c,&local_78);
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_68 = (longlong *)0x0;
  FUN_147f052ba(param_1,param_2,&local_98,&local_78);
  if (CONCAT44(local_78._4_4_,(undefined4)local_78) != 0) {
    plVar5 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar5 = local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f045e8 FUN_147f045e8 body=219 status=ok
// SIG undefined FUN_147f045e8(void)

void FUN_147f045e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  FUN_14385deb2(param_1,param_2,local_68);
  if (local_68[0] != 0) {
    plVar1 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & *(uint *)(param_2 + 0x48))
                             * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 200);
      do {
        if (*(uint *)(lVar3 + (longlong)iVar2 * 0x28) == *(uint *)(param_2 + 0x48))
        goto LAB_147f04680;
        iVar2 = *(int *)(lVar3 + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_147f04680:
  FUN_147f12e88((longlong *)(param_1 + 200),iVar2);
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f046c4 FUN_147f046c4 body=129 status=ok
// SIG undefined FUN_147f046c4(void)

float FUN_147f046c4(longlong param_1,longlong param_2,double *param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *param_3 - *(double *)(param_2 + 0x10);
  dVar4 = param_3[1] - *(double *)(param_2 + 0x18);
  dVar3 = param_3[2] - *(double *)(param_2 + 0x20);
  dVar2 = dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2;
  fVar1 = *(float *)(param_1 + 0x170);
  if ((double)*(float *)(param_1 + 0x16c) < dVar2) {
    dVar3 = (double)fVar1;
    dVar2 = (double)((*(float *)(param_1 + 0x174) - fVar1) / param_4) * dVar2 + dVar3;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    fVar1 = (float)dVar2;
  }
  return fVar1;
}



// FUNCTION 147f04808 FUN_147f04808 body=635 status=ok
// SIG undefined FUN_147f04808(void)

void FUN_147f04808(longlong param_1,longlong param_2,longlong param_3,char param_4,double *param_5,
                  undefined4 param_6,undefined8 param_7,double *param_8)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_4 == '\0') {
    if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
      local_a0 = 0x7f7fffff00000000;
      local_98 = 0xbf800000;
      local_90 = *param_8;
      dStack_88 = param_8[1];
      local_80 = param_8[2];
      local_78 = *(undefined4 *)(param_3 + 0x10);
      uStack_74 = *(undefined4 *)(param_3 + 0x14);
      uStack_70 = *(undefined4 *)(param_3 + 0x18);
      uStack_6c = *(undefined4 *)(param_3 + 0x1c);
      local_68 = *(undefined8 *)(param_3 + 0x20);
      local_60 = 0;
      local_58 = 0xff;
      FUN_1446f470e(&local_54,L"Invalid",1);
      local_4c = local_4c & 0xfffffff8 | (uint)(*(char *)(param_1 + 0x28) == '\x01');
      local_58 = *(undefined1 *)(param_1 + 0x3c);
      local_54 = *(undefined8 *)(param_1 + 0x40);
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) | 1;
      uVar7 = FUN_14479d2ce(param_3);
      FUN_147eff856(uVar7,param_7,&local_a0);
      *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfe;
      uVar5 = DAT_14cb203d8._4_4_;
      uVar4 = DAT_14cb203d8._0_4_;
      uVar3 = DAT_14cb203d0._4_4_;
      *(undefined4 *)(param_2 + 0x10) = DAT_14cb203d0._0_4_;
      *(undefined4 *)(param_2 + 0x14) = uVar3;
      *(undefined4 *)(param_2 + 0x18) = uVar4;
      *(undefined4 *)(param_2 + 0x1c) = uVar5;
      *(double *)(param_2 + 0x20) = DAT_14cb203e0;
    }
    goto LAB_147f0484d;
  }
  if ((*param_5 != DAT_14cb203d0) || (NAN(*param_5) || NAN(DAT_14cb203d0))) {
LAB_147f048b5:
    bVar2 = true;
    pdVar6 = param_5;
  }
  else {
    if ((param_5[1] != DAT_14cb203d8) || (NAN(param_5[1]) || NAN(DAT_14cb203d8)))
    goto LAB_147f048b5;
    dVar1 = param_5[2];
    bVar2 = dVar1 != DAT_14cb203e0;
    pdVar6 = (double *)(param_2 + 0x10);
    if (dVar1 != DAT_14cb203e0) {
      pdVar6 = param_5;
    }
    if (NAN(dVar1) || NAN(DAT_14cb203e0)) {
      pdVar6 = param_5;
    }
  }
  local_a0 = 0x7f7fffff00000000;
  local_98 = param_6;
  local_90 = *pdVar6;
  dStack_88 = pdVar6[1];
  local_80 = pdVar6[2];
  local_78 = *(undefined4 *)(param_3 + 0x10);
  uStack_74 = *(undefined4 *)(param_3 + 0x14);
  uStack_70 = *(undefined4 *)(param_3 + 0x18);
  uStack_6c = *(undefined4 *)(param_3 + 0x1c);
  local_68 = *(undefined8 *)(param_3 + 0x20);
  local_60 = 0;
  local_58 = 0xff;
  FUN_1446f470e(&local_54,L"Invalid",1);
  local_4c = (uint)(*(char *)(param_1 + 0x28) == '\x01') + (local_4c & 0xfffffff8) + 2;
  local_58 = *(undefined1 *)(param_1 + 0x3c);
  local_54 = *(undefined8 *)(param_1 + 0x40);
  *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) | 1;
  uVar7 = FUN_14479d2ce(param_3);
  FUN_147eff856(uVar7,param_7,&local_a0);
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 1;
  if (bVar2) {
    *(double *)(param_2 + 0x20) = param_5[2];
    uVar3 = *(undefined4 *)((longlong)param_5 + 4);
    uVar4 = *(undefined4 *)(param_5 + 1);
    uVar5 = *(undefined4 *)((longlong)param_5 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)param_5;
    *(undefined4 *)(param_2 + 0x14) = uVar3;
    *(undefined4 *)(param_2 + 0x18) = uVar4;
    *(undefined4 *)(param_2 + 0x1c) = uVar5;
  }
LAB_147f0484d:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f04a84 FUN_147f04a84 body=128 status=ok
// SIG undefined FUN_147f04a84(void)

int FUN_147f04a84(longlong *param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_147f11a2a(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_4 * 0x38);
  memmove((void *)((ulonglong)param_3 * 0x38 + (longlong)_Src),_Src,
          (ulonglong)(uint)(iVar1 - param_4) * 0x38);
  FUN_147f11aba((longlong)param_4 * 0x38 + *param_1,param_2,param_3);
  return param_4;
}



// FUNCTION 147f04b04 FUN_147f04b04 body=1014 status=ok
// SIG undefined FUN_147f04b04(void)

void FUN_147f04b04(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_98;
  uint local_94;
  uint uStack_90;
  float fStack_8c;
  uint uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar10 = *(longlong *)(param_1 + 0x140);
  lVar5 = (longlong)(int)param_2 * 0x38;
  uVar3 = *(uint *)(lVar10 + lVar5);
  uStack_68._4_4_ = *(undefined4 *)(lVar10 + 0x34 + lVar5);
  puVar6 = (uint *)(lVar10 + 4 + lVar5);
  local_94 = *puVar6;
  uStack_90 = puVar6[1];
  fStack_8c = (float)puVar6[2];
  uStack_88 = puVar6[3];
  puVar1 = (undefined8 *)(lVar10 + 0x14 + lVar5);
  local_84 = *puVar1;
  uStack_7c = puVar1[1];
  puVar1 = (undefined8 *)(lVar10 + 0x24 + lVar5);
  local_74 = *puVar1;
  uVar2 = puVar1[1];
  uStack_6c = (undefined4)uVar2;
  uStack_68._0_4_ = (uint)((ulonglong)uVar2 >> 0x20);
  iVar8 = *(int *)(param_1 + 0x148);
  iVar12 = ~param_2 + iVar8;
  local_98 = uVar3;
  if (iVar12 != 0) {
    iVar13 = 1;
    if (iVar12 < 1) {
      iVar13 = iVar12;
    }
    memmove((void *)(lVar5 + lVar10),(void *)((longlong)(iVar8 - iVar13) * 0x38 + lVar10),
            (longlong)iVar13 * 0x38);
    iVar8 = *(int *)(param_1 + 0x148);
  }
  *(int *)(param_1 + 0x148) = iVar8 + -1;
  lVar10 = *(longlong *)(param_1 + 0x30);
  uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
  if (*(int *)(lVar10 + 0x40) != *(int *)(lVar10 + 0x6c)) {
    lVar5 = lVar10 + 0x70;
    if (*(longlong *)(lVar10 + 0x78) != 0) {
      lVar5 = *(longlong *)(lVar10 + 0x78);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar10 + 0x80) - 1U & uVar3) * 4);
    uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
    if (iVar8 != -1) {
      do {
        lVar5 = *(longlong *)(lVar10 + 0x38) + (longlong)iVar8 * 0x60;
        if (*(uint *)(*(longlong *)(lVar10 + 0x38) + (longlong)iVar8 * 0x60) == uVar3) {
          lVar10 = lVar5 + 8;
          uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
          if (lVar10 != 0 && lVar5 != 0) {
            if ((char)param_7[1] == '\x01') {
              lVar5 = *param_7;
              goto LAB_147f04c90;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
            if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
              lVar5 = param_1 + 0xb0;
              if (*(longlong *)(param_1 + 0xb8) != 0) {
                lVar5 = *(longlong *)(param_1 + 0xb8);
              }
              iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & local_94) * 4);
              uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
              if (iVar8 != -1) {
                goto LAB_147f04d0b;
              }
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x58);
        uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
      } while (iVar8 != -1);
    }
  }
  goto LAB_147f04bd4;
  while (iVar8 = *(int *)(lVar5 + 0x30), uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68),
        iVar8 != -1) {
LAB_147f04d0b:
    lVar5 = *(longlong *)(param_1 + 0x78) + (longlong)iVar8 * 0x38;
    if (*(uint *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar8 * 0x38) == local_94) {
      uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
      if (lVar5 != -8 && lVar5 != 0) {
        lVar5 = FUN_14479d2ce();
LAB_147f04c90:
        uVar3 = (uint)uStack_68;
        uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68);
        if (lVar5 == 0) break;
        lVar7 = *(longlong *)(lVar5 + 0x1c8);
        if (lVar7 == 0) {
          local_a8 = DAT_14c8464f0;
          local_b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_b8 = *(undefined8 *)(lVar7 + 0x260);
          uStack_b0 = *(undefined8 *)(lVar7 + 0x268);
          local_a8 = *(undefined8 *)(lVar7 + 0x270);
        }
        local_c0 = &local_b8;
        local_d8 = param_5;
        local_d0 = param_4;
        local_c8 = lVar5;
        FUN_147f04808(param_1,&local_98,lVar10,param_3);
        if (*(char *)(param_6 + 1) == '\x01') {
          local_74 = CONCAT44(*param_6,(undefined4)local_74);
        }
        uStack_68 = (ulonglong)((uint)uStack_68 & 1) + DAT_14c872be0 * 2;
        if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xfc)) {
LAB_147f04e01:
          puVar6 = (uint *)0x0;
        }
        else {
          lVar5 = param_1 + 0x100;
          if (*(longlong *)(param_1 + 0x108) != 0) {
            lVar5 = *(longlong *)(param_1 + 0x108);
          }
          uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & local_98) * 4);
          if (uVar4 == 0xffffffff) goto LAB_147f04e01;
          while (puVar6 = (uint *)(*(longlong *)(param_1 + 200) + (longlong)(int)uVar4 * 0x28),
                *puVar6 != local_98) {
            uVar4 = puVar6[8];
            if (uVar4 == 0xffffffff) goto LAB_147f04e01;
          }
        }
        fStack_8c = (float)FUN_147f046c4(param_1,lVar10,&local_b8,
                                         puVar6[(ulonglong)(uVar3 & 1) * 2 + 2]);
        lVar10 = uStack_68;
        if (fStack_8c <= 0.0) {
          plVar11 = (longlong *)(param_1 + 0x120);
          if (*(char *)(param_1 + 0x11c) != '\x01') {
            FUN_147f04efc(plVar11,&local_98,*(undefined4 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
            break;
          }
          uVar9 = (ulonglong)*(int *)(param_1 + 0x128);
          uVar3 = *(int *)(param_1 + 0x128) + 1;
          *(uint *)(param_1 + 0x128) = uVar3;
          if (*(uint *)(param_1 + 300) < uVar3) goto LAB_147f04ea9;
        }
        else {
          plVar11 = (longlong *)(param_1 + 0x130);
          uVar9 = (ulonglong)*(int *)(param_1 + 0x138);
          uVar3 = *(int *)(param_1 + 0x138) + 1;
          *(uint *)(param_1 + 0x138) = uVar3;
          if (*(uint *)(param_1 + 0x13c) < uVar3) {
LAB_147f04ea9:
            FUN_147f11a2a(plVar11,uVar9 & 0xffffffff);
            lVar10 = uStack_68;
          }
        }
        uStack_68._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_68._0_4_ = (uint)lVar10;
        lVar5 = *plVar11;
        lVar7 = uVar9 * 0x38;
        *(uint *)(lVar5 + lVar7) = local_98;
        puVar1 = (undefined8 *)(lVar5 + 4 + lVar7);
        *puVar1 = CONCAT44(uStack_90,local_94);
        puVar1[1] = CONCAT44(uStack_88,fStack_8c);
        puVar1 = (undefined8 *)(lVar5 + 0x14 + lVar7);
        *puVar1 = local_84;
        puVar1[1] = uStack_7c;
        puVar1 = (undefined8 *)(lVar5 + 0x24 + lVar7);
        *puVar1 = local_74;
        puVar1[1] = CONCAT44((uint)uStack_68,uStack_6c);
        *(undefined4 *)(lVar5 + 0x34 + lVar7) = uStack_68._4_4_;
        uStack_68 = lVar10;
      }
      break;
    }
  }
LAB_147f04bd4:
  if ((char)param_7[1] == '\x01') {
    *(undefined1 *)(param_7 + 1) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f04efc FUN_147f04efc body=143 status=ok
// SIG undefined FUN_147f04efc(void)

int FUN_147f04efc(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147f11a2a(param_1,iVar2);
  }
  lVar9 = (longlong)param_3 * 0x38;
  memmove((void *)(*param_1 + lVar9 + 0x38),(void *)(*param_1 + lVar9),
          (ulonglong)(uint)(iVar2 - param_3) * 0x38);
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar9) = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 3);
  uVar5 = *(undefined8 *)(param_2 + 5);
  uVar6 = *(undefined8 *)(param_2 + 7);
  uVar7 = *(undefined8 *)(param_2 + 9);
  uVar8 = *(undefined8 *)(param_2 + 0xb);
  puVar1 = (undefined8 *)(lVar3 + 4 + lVar9);
  *puVar1 = *(undefined8 *)(param_2 + 1);
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x14 + lVar9);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + 0x24 + lVar9);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  *(undefined4 *)(lVar3 + 0x34 + lVar9) = param_2[0xd];
  return param_3;
}



// FUNCTION 147f04f8c FUN_147f04f8c body=99 status=ok
// SIG undefined FUN_147f04f8c(void)

void FUN_147f04f8c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_48 = (longlong *)0x0;
  FUN_14385d6d4(param_1,param_2,local_58);
  if (local_58[0] != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f04ff0 FUN_147f04ff0 body=353 status=ok
// SIG undefined FUN_147f04ff0(void)

void FUN_147f04ff0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  uint *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_34 = *(uint *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar5 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & local_34) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x78);
      do {
        lVar6 = (longlong)iVar3 * 0x38;
        if (*(uint *)(lVar5 + lVar6) == local_34) {
          local_48 = *(undefined8 *)(lVar5 + 0x28 + lVar6);
          puVar1 = (undefined4 *)(lVar5 + 8 + lVar6);
          local_68 = *puVar1;
          uStack_64 = puVar1[1];
          uStack_60 = puVar1[2];
          uStack_5c = puVar1[3];
          puVar1 = (undefined4 *)(lVar5 + 0x18 + lVar6);
          local_58 = *puVar1;
          uStack_54 = puVar1[1];
          uStack_50 = puVar1[2];
          uStack_4c = puVar1[3];
          FUN_147f11b48();
          iVar3 = *(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x138);
          iVar4 = iVar3 + *(int *)(param_1 + 0x148);
          if (iVar4 != 0 && SCARRY4(iVar3,*(int *)(param_1 + 0x148)) == iVar4 < 0) {
            local_70 = FUN_14479d2ce(&local_68);
            local_78 = &local_70;
            local_88 = *(longlong *)(param_1 + 0x30) + 0x38;
            local_80 = &local_34;
            local_90 = param_1;
            FUN_14385dc34(param_1 + 0x130,&local_90);
            cVar2 = FUN_14385dc34(param_1 + 0x120,&local_90);
            if (cVar2 != '\0') {
              *(undefined1 *)(param_1 + 0x11c) = 1;
            }
            FUN_14385dc34(param_1 + 0x140,&local_90);
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + lVar5 + 0x30);
      } while (iVar3 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f05152 FUN_147f05152 body=126 status=ok
// SIG undefined FUN_147f05152(void)

undefined8 FUN_147f05152(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b64782();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_144881120(param_1,&local_18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_145b64782();
    uVar2 = FUN_144718840(lVar1,uVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f051d2 FUN_147f051d2 body=231 status=ok
// SIG undefined FUN_147f051d2(void)

undefined4
FUN_147f051d2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,longlong param_7,undefined8 *param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  
  uVar2 = FUN_147f054ae(param_3,param_4,*(undefined1 *)(param_7 + 0x18));
  if ((char)uVar2 != '\0') {
    fVar7 = (float)FUN_147f046c4(param_1,param_2,param_6,*(undefined4 *)(param_7 + 4));
    lVar3 = 0x130;
    if (fVar7 <= 0.0) {
      *(undefined1 *)(param_1 + 0x11c) = 1;
      lVar3 = 0x120;
    }
    puVar4 = (undefined4 *)FUN_147f05544(param_1 + lVar3);
    *puVar4 = *(undefined4 *)(param_2 + 0x48);
    puVar4[1] = *param_5;
    puVar4[3] = fVar7;
    pcVar1 = (code *)*param_8;
    if (pcVar1 != (code *)0x0) {
      plVar6 = param_8 + 4;
      if ((longlong *)param_8[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_8[2];
      }
      uVar5 = (**(code **)(*plVar6 + 8))(plVar6);
      (*pcVar1)(uVar5,puVar4);
    }
  }
  return uVar2;
}



// FUNCTION 147f052ba FUN_147f052ba body=498 status=ok
// SIG undefined FUN_147f052ba(void)

void FUN_147f052ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_147f01844(param_2);
  lVar6 = FUN_147f01816(param_2);
  local_90 = (longlong *)(param_1 + 0x78);
  uStack_60 = param_1 + 0x88;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  uVar2 = local_78;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = uStack_60;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  if (local_78._4_4_ < *(int *)(uStack_60 + 0x18)) {
    bVar8 = 0;
    iVar4 = local_78._4_4_;
    local_78 = uVar2;
    do {
      lVar7 = FUN_14479d2ce(*local_90 + (longlong)iVar4 * 0x38 + 8);
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        lVar1 = *(longlong *)(lVar7 + 0x1c8);
        if (lVar1 == 0) {
          local_58 = DAT_14c8464f0;
          local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_68 = *(undefined8 *)(lVar1 + 0x260);
          uStack_60 = *(longlong *)(lVar1 + 0x268);
          local_58 = *(undefined8 *)(lVar1 + 0x270);
        }
        local_b8 = (longlong)local_78._4_4_ * 0x38 + *local_90;
        local_b0 = &local_68;
        local_a8 = param_3;
        local_a0 = param_4;
        bVar3 = FUN_147f051d2(param_1,param_2,uVar5,lVar7);
        bVar8 = bVar8 | bVar3;
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
    } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
    uVar2 = local_78;
    if ((bVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  local_78 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f054ae FUN_147f054ae body=150 status=ok
// SIG undefined FUN_147f054ae(void)

bool FUN_147f054ae(longlong *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20b90) {
    FUN_144b3d300(&DAT_14cb20b90);
    if (DAT_14cb20b90 == -1) {
      DAT_14cb20b8c = '\a';
      _Init_thread_footer(&DAT_14cb20b90);
    }
  }
  bVar2 = true;
  if (DAT_14cb20b8c != (char)param_3) {
    if (param_1 == (longlong *)0x0) {
      param_3 = param_3 & 2;
    }
    else {
      bVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      param_3 = param_3 & 0xff & 1 << (bVar1 & 0x1f);
    }
    bVar2 = param_3 != 0;
  }
  return bVar2;
}



// FUNCTION 147f05544 FUN_147f05544 body=59 status=ok
// SIG undefined FUN_147f05544(void)

longlong FUN_147f05544(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f11a2a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_147f126ca(lVar2);
  return lVar2;
}



// FUNCTION 147f05580 FUN_147f05580 body=506 status=ok
// SIG undefined FUN_147f05580(void)

void FUN_147f05580(longlong param_1,longlong param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [44];
  undefined1 local_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar6 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x108);
    }
    uVar7 = *(uint *)(lVar6 + (ulonglong)
                              (*(int *)(param_1 + 0x110) - 1U & *(uint *)(param_2 + 0x48)) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 200) + (longlong)(int)uVar7 * 0x28);
        if (*puVar1 == *(uint *)(param_2 + 0x48)) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) != 0) {
            uVar5 = FUN_14479d2ce(param_2);
            local_7c = *(undefined1 *)(param_1 + 0x3c);
            local_78 = *(undefined8 *)(param_1 + 0x40);
            lVar6 = FUN_147efe5b2(uVar5);
            fVar2 = *(float *)(lVar6 + 100);
            fVar10 = *(float *)(lVar6 + 0x50) + fVar2;
            fVar11 = *(float *)(lVar6 + 0x54) + fVar2;
            fVar3 = *(float *)(lVar6 + 0x68);
            fVar8 = *(float *)(lVar6 + 0x58) * 0.017453292;
            if (3.1415927 <= fVar8) {
              fVar8 = 3.1415927;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
            fVar9 = cosf(fVar8);
            bVar4 = *(byte *)(lVar6 + 0x5c) << 4;
            bVar4 = (byte)((bVar4 | *(byte *)(lVar6 + 0x5c) >> 4) * '\x02' & 0x40 |
                          ((bVar4 & 0x10) << 2 | (bVar4 & 0x40) >> 2) * '\x02') >> 5;
            fVar8 = *(float *)(lVar6 + 0x60);
            uVar7 = puVar1[7];
            puVar1[1] = (uint)fVar9;
            puVar1[2] = (uint)(fVar10 * fVar10);
            puVar1[3] = -(uint)(fVar8 == -1.0) & 0xbf800000 |
                        ~-(uint)(fVar8 == -1.0) & (uint)(fVar8 * fVar8);
            puVar1[4] = (uint)(fVar11 * fVar11);
            puVar1[5] = (uint)fVar2;
            puVar1[6] = (uint)(fVar3 * fVar3);
            *(byte *)(puVar1 + 7) = bVar4;
            if ((byte)uVar7 == bVar4) goto LAB_147f0576f;
          }
          break;
        }
        uVar7 = puVar1[8];
      } while (uVar7 != 0xffffffff);
    }
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
  }
LAB_147f0576f:
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f0595a FUN_147f0595a body=799 status=ok
// SIG undefined FUN_147f0595a(void)

void FUN_147f0595a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  uint local_8c;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x30);
  plVar1 = (longlong *)(lVar4 + 0x38);
  local_d8 = lVar4 + 0x48;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (*(int *)(lVar4 + 0x60) != 0) {
    FUN_1449c0562(&local_e0);
  }
  local_70 = local_d0;
  uVar6 = local_70;
  local_68 = (undefined4)uStack_c8;
  local_64 = uStack_c8._4_4_;
  local_80 = local_e0;
  local_78 = local_d8;
  local_50 = 0;
  local_70._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
  local_88 = plVar1;
  local_60 = plVar1;
  local_58 = plVar1;
  if (local_70._4_4_ < *(int *)(local_d8 + 0x18)) {
    iVar9 = local_70._4_4_;
    local_70 = uVar6;
    do {
      lVar4 = *local_88;
      lVar10 = (longlong)iVar9 * 0x60;
      if (((*(uint *)(lVar4 + 0x10 + lVar10) >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) != 0) &&
         (iVar9 = *(int *)(param_1 + 0x80), (longlong)iVar9 != 0)) {
        lVar2 = lVar4 + lVar10;
        lVar5 = *(longlong *)(param_1 + 0x78);
        lVar12 = 0;
        do {
          if ((*(char *)(lVar2 + 0x48) == *(char *)(lVar5 + 0x38 + lVar12)) &&
             (dVar7 = *(double *)(lVar2 + 0x18) - *(double *)(lVar5 + 0x18 + lVar12),
             dVar13 = *(double *)(lVar2 + 0x20) - *(double *)(lVar5 + 0x20 + lVar12),
             dVar8 = *(double *)(lVar2 + 0x28) - *(double *)(lVar5 + 0x28 + lVar12),
             dVar8 * dVar8 + dVar13 * dVar13 + dVar7 * dVar7 <=
             (double)*(float *)(lVar5 + 0x30 + lVar12))) {
            puVar3 = (undefined8 *)(lVar5 + 0x48 + lVar12);
            local_e0 = 0x7f7fffff00000000;
            local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)((longlong)puVar3 + -0xc));
            local_c0 = puVar3[-7];
            local_d0 = puVar3[-9];
            uStack_c8 = puVar3[-8];
            local_a8 = puVar3[-4];
            local_b8 = *(undefined4 *)(puVar3 + -6);
            uStack_b4 = *(undefined4 *)((longlong)puVar3 + -0x2c);
            uStack_b0 = *(undefined4 *)(puVar3 + -5);
            uStack_ac = *(undefined4 *)((longlong)puVar3 + -0x24);
            local_a0 = 0;
            local_98 = 0xff;
            FUN_1446f470e(&local_94,L"Invalid",1);
            local_8c = (uint)(*(char *)(param_1 + 0x28) == '\x01') + (local_8c & 0xfffffff8) + 2;
            local_98 = *(undefined1 *)(param_1 + 0x3c);
            local_94 = *(undefined8 *)(param_1 + 0x40);
            local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)((longlong)puVar3 + -0x14));
            uVar6 = *puVar3;
            *(uint *)(lVar2 + 0x4c) = *(uint *)(lVar2 + 0x4c) | 1;
            uVar11 = FUN_14479d2ce(lVar4 + lVar10 + 8);
            FUN_147eff856(uVar11,uVar6,&local_e0);
          }
          lVar12 = lVar12 + 0x50;
        } while ((longlong)iVar9 * 0x50 != lVar12);
      }
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
      FUN_1449c0562(&local_80);
      iVar9 = local_70._4_4_;
    } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    uVar6 = local_70;
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_147f0ec2e(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
      uVar6 = local_70;
    }
  }
  local_70 = uVar6;
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_147f12ee0(param_1 + 0x78);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(0x7f7fffff);
  }
  return;
}



// FUNCTION 147f05c7a FUN_147f05c7a body=385 status=ok
// SIG undefined FUN_147f05c7a(void)

void FUN_147f05c7a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_147f05dfc(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f05dfc FUN_147f05dfc body=117 status=ok
// SIG undefined FUN_147f05dfc(void)

void FUN_147f05dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_147efe474();
  if (lVar1 != 0) {
    FUN_147f06468(local_60,param_2,param_3,param_4);
    FUN_147f06512(lVar1,local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f05e76 FUN_147f05e76 body=124 status=ok
// SIG undefined FUN_147f05e76(void)

longlong FUN_147f05e76(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar2 = FUN_145a76094();
    lVar3 = FUN_144718840(lVar3,uVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
    plVar4 = (longlong *)(param_1 + 0x18);
    if (*plVar4 != 0) {
      uVar2 = FUN_144a7cbb2();
      bVar1 = FUN_144a7ca96(plVar4,uVar2);
      if (((*plVar4 != 0 & bVar1) == 1) && (lVar3 = *(longlong *)(*plVar4 + 0x3c0), lVar3 != 0)) {
        uVar2 = FUN_145a76094();
        lVar3 = FUN_144718840(lVar3,uVar2);
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147f05ef2 FUN_147f05ef2 body=218 status=ok
// SIG undefined FUN_147f05ef2(void)

void FUN_147f05ef2(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  byte local_39;
  undefined8 local_38;
  byte *pbStack_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14479d2ce(param_2);
  local_38._0_4_ = CONCAT31(local_38._1_3_,*(undefined1 *)(param_1 + 0x3c));
  local_38._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x40);
  pbStack_30._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  lVar3 = FUN_147efe5b2(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_145b60120();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_147f05f5a;
  }
  lVar3 = 0;
LAB_147f05f5a:
  bVar1 = *(byte *)(lVar3 + 0x48) << 4;
  local_39 = (byte)((bVar1 | *(byte *)(lVar3 + 0x48) >> 4) * '\x02' & 0x40 |
                   ((bVar1 & 0x10) << 2 | (bVar1 & 0x40) >> 2) * '\x02') >> 5;
  pbStack_30 = &local_39;
  local_40 = *(undefined4 *)(param_2 + 0x48);
  local_38 = &local_40;
  FUN_147f13186(param_1 + 0x88,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f05fce FUN_147f05fce body=241 status=ok
// SIG undefined FUN_147f05fce(void)

void FUN_147f05fce(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  local_24 = uVar1;
  if ((*(uint *)(param_2 + 8) >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) == 0) {
    FUN_147f137e8(param_1 + 0x88,&local_24);
    goto LAB_147f060a1;
  }
  uVar3 = FUN_14479d2ce(param_2);
  local_30 = *(undefined1 *)(param_1 + 0x3c);
  local_2c = *(undefined8 *)(param_1 + 0x40);
  lVar4 = FUN_147efe5b2(uVar3);
  if (lVar4 == 0) {
LAB_147f0605c:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_145b60120();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147f0605c;
  }
  pbVar6 = (byte *)FUN_147f13620(param_1 + 0x88,uVar1,&local_24);
  bVar2 = *(byte *)(lVar4 + 0x48) << 4;
  *pbVar6 = (byte)((bVar2 | *(byte *)(lVar4 + 0x48) >> 4) * '\x02' & 0x40 |
                  ((bVar2 & 0x10) << 2 | (bVar2 & 0x40) >> 2) * '\x02') >> 5;
LAB_147f060a1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f06134 FUN_147f06134 body=734 status=ok
// SIG undefined FUN_147f06134(void)

void FUN_147f06134(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x80) == 0) {
LAB_147f0625d:
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      FUN_147f13892(param_1 + 0x78);
    }
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(0x7f7fffff);
    }
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar11 = *(undefined8 **)(param_1 + 0x78);
  puVar14 = puVar11 + (longlong)*(int *)(param_1 + 0x80) * 6;
LAB_147f0618f:
  if ((((puVar11[3] != 0) && (puVar11[4] != 0)) &&
      (plVar5 = (longlong *)FUN_147f05e76(puVar11), plVar5 != (longlong *)0x0)) &&
     ((lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 != 0 &&
      (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c))))) {
    uVar2 = *(uint *)(lVar6 + 0x144);
    lVar6 = *(longlong *)(lVar3 + 0x78);
    if (*(longlong *)(lVar3 + 0x78) == 0) {
      lVar6 = lVar3 + 0x70;
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x80) - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(lVar3 + 0x38);
      iVar12 = iVar8;
      do {
        if (*(uint *)(lVar6 + (longlong)iVar12 * 0x60) == uVar2) goto LAB_147f061cb;
        iVar12 = *(int *)((longlong)iVar12 * 0x60 + lVar6 + 0x58);
      } while (iVar12 != -1);
    }
  }
  goto LAB_147f0619d;
  while (iVar8 = *(int *)(lVar10 + 0x58), iVar8 != -1) {
LAB_147f061cb:
    lVar10 = lVar6 + (longlong)iVar8 * 0x60;
    if (*(uint *)(lVar6 + (longlong)iVar8 * 0x60) == uVar2) goto LAB_147f062c2;
  }
  lVar10 = 0;
LAB_147f062c2:
  if ((*(uint *)(lVar10 + 0x10) >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) != 0) {
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar6 = param_1 + 0xc0;
      if (*(longlong *)(param_1 + 200) != 0) {
        lVar6 = *(longlong *)(param_1 + 200);
      }
      iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & *(uint *)(lVar10 + 0x50))
                               * 4);
      if (iVar8 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x88);
        do {
          lVar13 = (longlong)iVar8 * 0x10;
          lVar1 = lVar6 + lVar13;
          if (*(uint *)(lVar6 + lVar13) == *(uint *)(lVar10 + 0x50)) {
            puVar9 = (undefined1 *)(lVar1 + 4);
            if ((puVar9 != (undefined1 *)0x0 && lVar1 != 0) &&
               (cVar4 = FUN_147f03a72(CONCAT71((int7)((ulonglong)lVar6 >> 8),
                                               *(undefined1 *)(lVar10 + 0x48)),
                                      CONCAT71((int7)((ulonglong)puVar9 >> 8),
                                               *(undefined1 *)(puVar11 + 5)),
                                      CONCAT71((int7)((ulonglong)lVar13 >> 8),*puVar9)),
               cVar4 == '\0')) goto LAB_147f0619d;
            break;
          }
          iVar8 = *(int *)(lVar1 + 8);
        } while (iVar8 != -1);
      }
    }
    local_a8 = lVar10 + 8;
    local_a0 = 0x7f7fffff00000000;
    local_98 = 0x3f800000;
    local_90 = *puVar11;
    uStack_88 = puVar11[1];
    local_80 = puVar11[2];
    local_78 = *(undefined4 *)puVar11;
    uStack_74 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_70 = *(undefined4 *)(puVar11 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar11 + 0xc);
    local_68 = puVar11[2];
    local_60 = 0;
    local_58 = 0xff;
    FUN_1446f470e(&local_54,L"Invalid",1);
    local_4c = (uint)(*(char *)(param_1 + 0x28) == '\x01') + (local_4c & 0xfffffff8) + 2;
    local_58 = *(undefined1 *)(param_1 + 0x3c);
    local_54 = *(undefined8 *)(param_1 + 0x40);
    local_b0 = puVar11[4];
    *(uint *)(lVar10 + 0x4c) = *(uint *)(lVar10 + 0x4c) | 1;
    uVar7 = FUN_14479d2ce(local_a8);
    FUN_147eff856(uVar7,local_b0,&local_a0);
  }
LAB_147f0619d:
  puVar11 = puVar11 + 6;
  if (puVar11 == puVar14) goto LAB_147f0625d;
  goto LAB_147f0618f;
}



// FUNCTION 147f06414 FUN_147f06414 body=83 status=ok
// SIG undefined FUN_147f06414(void)

void FUN_147f06414(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_147f13930(param_1 + 0x78,iVar1);
  }
  FUN_147f138c2((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x78),param_2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147f06468 FUN_147f06468 body=168 status=ok
// SIG undefined FUN_147f06468(void)

undefined4 *
FUN_147f06468(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(longlong *)(param_1 + 6) = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = param_3;
  if ((param_3 != 0) && ((bVar4 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(undefined1 *)(param_1 + 10) = DAT_14cb1f000;
  FUN_147ea553e(&local_21,param_3);
  *(undefined1 *)(param_1 + 10) = local_21;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f06512 FUN_147f06512 body=99 status=ok
// SIG undefined FUN_147f06512(void)

void FUN_147f06512(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145a76358();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  if (((int)(uint)*(byte *)(lVar2 + 0x3c) < *(int *)(param_1 + 0x90)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)*(byte *)(lVar2 + 0x3c) * 8),
     lVar2 != 0)) {
    FUN_147f06414(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147f065b6 FUN_147f065b6 body=160 status=ok
// SIG undefined FUN_147f065b6(void)

void FUN_147f065b6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x488))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f06658 FUN_147f06658 body=160 status=ok
// SIG undefined FUN_147f06658(void)

void FUN_147f06658(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x478))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f066fe FUN_147f066fe body=162 status=ok
// SIG undefined FUN_147f066fe(void)

void FUN_147f066fe(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x480))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f067c4 FUN_147f067c4 body=47 status=ok
// SIG undefined FUN_147f067c4(void)

void FUN_147f067c4(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x150) = param_2;
  fVar1 = cosf(param_2 * 0.017453292);
  *(float *)(param_1 + 0x154) = fVar1;
  return;
}



// FUNCTION 147f067f4 FUN_147f067f4 body=81 status=ok
// SIG undefined FUN_147f067f4(void)

void FUN_147f067f4(longlong *param_1)

{
  FUN_14134c582();
  (**(code **)(*param_1 + 0x488))(param_1,(int)param_1[0x2a]);
  if ((*(uint *)((longlong)param_1 + 0x124) & 1) == 0) {
    return;
  }
  *(uint *)((longlong)param_1 + 0x124) = *(uint *)((longlong)param_1 + 0x124) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x000147f06842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x480))(param_1,1);
  return;
}



// FUNCTION 147f06846 FUN_147f06846 body=119 status=ok
// SIG undefined FUN_147f06846(void)

void FUN_147f06846(longlong *param_1,byte param_2)

{
  float fVar1;
  float fVar2;
  
  if (((byte)*(uint *)((longlong)param_1 + 0x124) & 1) != param_2) {
    *(uint *)((longlong)param_1 + 0x124) =
         *(uint *)((longlong)param_1 + 0x124) & 0xfffffffe | (uint)param_2;
    fVar2 = 0.0;
    if ((param_2 != 0) && (fVar1 = *(float *)((longlong)param_1 + 0x11c), 0.0 < fVar1)) {
      fVar2 = (float)FUN_140ce4006();
      fVar2 = fVar1 * fVar2 + 0.0001;
    }
                    /* WARNING: Could not recover jumptable at 0x000147f068af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4e8))(param_1,fVar2);
    return;
  }
  return;
}



// FUNCTION 147f068be FUN_147f068be body=434 status=ok
// SIG undefined FUN_147f068be(void)

void FUN_147f068be(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  uVar5 = DAT_14cb0d2b0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    iVar3 = FUN_14640a438(uVar5,lVar4);
    if (iVar3 < 3) {
      uVar5 = FUN_1401b4c98(lVar1);
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      FUN_1446efa72(&local_a8,0,3,0x10);
      puVar2 = local_a8;
      local_a0 = 3;
      *local_a8 = &PTR_LAB_14a1c8830;
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
      local_a8[2] = lVar4;
      *local_a8 = &PTR_FUN_14ac25e80;
      local_a8[3] = 0;
      FUN_14485c47a(local_a8 + 3,param_1);
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = &LAB_147f06a72;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_a8);
      local_58 = 1;
      local_b0 = 0xbf800000;
      local_b8 = 0;
      FUN_1406f3fee(uVar5,param_1 + 0x128,&local_98,param_2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_a8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f06a80 FUN_147f06a80 body=242 status=ok
// SIG undefined FUN_147f06a80(void)

void FUN_147f06a80(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(float *)((longlong)param_1 + 0x11c) != param_2) ||
     (NAN(*(float *)((longlong)param_1 + 0x11c)) || NAN(param_2))) {
    *(float *)((longlong)param_1 + 0x11c) = param_2;
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) >> 0x1e & 1) == 0)) {
      if (param_2 <= 0.0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
      if ((*(byte *)((longlong)param_1 + 0x124) & 1) != 0) {
        uVar1 = FUN_1401b4c98();
        local_20 = param_1[0x25];
        uVar2 = FUN_144a61814(uVar1);
        fVar4 = (float)FUN_14084d52a(uVar1,uVar2);
        fVar5 = 0.0;
        if (0.0 <= fVar4) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)((longlong)param_1 + 0x11c);
        if (fVar4 <= fVar5) {
          if (fVar5 <= fVar4) goto LAB_147f06ad5;
          lVar3 = *param_1;
          fVar4 = 0.0001;
        }
        else {
          fVar4 = fVar4 - fVar5;
          lVar3 = *param_1;
        }
        (**(code **)(lVar3 + 0x4e8))(param_1,fVar4);
      }
    }
  }
LAB_147f06ad5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f06b86 FUN_147f06b86 body=93 status=ok
// SIG undefined FUN_147f06b86(void)

longlong FUN_147f06b86(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_14490fee6();
    if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) != lVar1 + 0x30)) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) ||
       (lVar2 = *(longlong *)(lVar2 + 0x3d0), lVar2 != 0)) {
      if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0) {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 147f06be4 FUN_147f06be4 body=139 status=ok
// SIG undefined FUN_147f06be4(void)

longlong FUN_147f06be4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_14490fee6();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
      return lVar1;
    }
    lVar2 = FUN_144a7cbb2();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) &&
       (((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0 &&
        (lVar1 = *(longlong *)(lVar1 + 0x3c0), lVar1 != 0)))) {
      if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147f06c70 FUN_147f06c70 body=25 status=ok
// SIG undefined FUN_147f06c70(void)

bool FUN_147f06c70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147f06b86();
  return lVar1 == param_2;
}



// FUNCTION 147f06c8a FUN_147f06c8a body=111 status=ok
// SIG undefined FUN_147f06c8a(void)

undefined8 FUN_147f06c8a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_147f06be4();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = (undefined4)DAT_14c8464e8;
    uStack_1c = DAT_14c8464e8._4_4_;
    uVar2 = (**(code **)(*plVar1 + 0x698))(plVar1,param_2,&local_28,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f06d26 FUN_147f06d26 body=435 status=ok
// SIG undefined FUN_147f06d26(void)

void FUN_147f06d26(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  uint local_78 [7];
  char local_5c;
  undefined8 local_50;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_1[0x15];
  if ((*(byte *)((longlong)param_1 + 0x124) & 2) == 0) {
    lVar4 = FUN_144a7cbb2();
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    local_90 = FUN_1447210f0(lVar6);
    local_98[0] = 5;
    local_88 = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    FUN_1409463b0(&local_80,local_98);
    if (local_5c == '\0') {
      do {
        uVar5 = local_50;
        cVar3 = (**(code **)(*param_1 + 0x490))(param_1,local_50);
        if (cVar3 == '\0') {
          (**(code **)(*param_1 + 0x4d8))(param_1,uVar5);
        }
        FUN_1409464a8(&local_80);
      } while (local_5c == '\0');
    }
    if ((local_28 & 1) != 0) {
      FUN_14024445c(local_78);
    }
  }
  else {
    uVar5 = FUN_1447210f0(lVar6);
    FUN_144a7d35a(uVar5,&local_80);
    if (-1 < (int)local_78[0]) {
      do {
        if ((int)local_80[1] <= (int)local_78[0]) break;
        lVar6 = FUN_14479d2ce((ulonglong)local_78[0] * 8 + *local_80);
        if ((((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) &&
            (lVar6 = *(longlong *)(lVar6 + 0x3d0), lVar6 != 0)) &&
           (((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0 &&
            (cVar3 = (**(code **)(*param_1 + 0x490))(param_1,lVar6), cVar3 == '\0')))) {
          (**(code **)(*param_1 + 0x4d8))(param_1,lVar6);
        }
        uVar1 = local_78[0] + 1;
        bVar2 = -2 < (int)local_78[0];
        local_78[0] = uVar1;
      } while (bVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f06eda FUN_147f06eda body=571 status=ok
// SIG undefined FUN_147f06eda(void)

void FUN_147f06eda(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x124) & 4) == 0) {
LAB_147f06f6e:
    uVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4a0))(param_1,param_2);
    if (cVar2 == '\0') goto LAB_147f06f6e;
    uVar5 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    cVar2 = (**(code **)(*param_1 + 0x4a8))(param_1,param_2,1);
    if (cVar2 == '\0') goto LAB_147f06f6e;
    cVar2 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2);
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x124) & 8) != 0) && (0 < (int)param_1[0x29])) {
    lVar3 = (**(code **)(*param_2 + 0x648))(param_2);
    if (lVar3 != 0) {
      cVar2 = (**(code **)(*param_1 + 0x4b0))(param_1,param_2);
      if (cVar2 != '\0') {
        cVar2 = FUN_147f0712c(param_1,param_2,lVar3,1);
        if (cVar2 != '\0') {
          uVar4 = FUN_1479ea4ee(lVar3,1);
          lVar1 = param_2[0x39];
          if (lVar1 == 0) {
            local_38 = DAT_14c8464f0;
            local_48 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_40 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_48 = *(undefined8 *)(lVar1 + 0x260);
            uStack_40 = *(undefined8 *)(lVar1 + 0x268);
            local_38 = *(undefined8 *)(lVar1 + 0x270);
          }
          cVar2 = (**(code **)(*param_1 + 0x4c0))(param_1,&local_48,uVar4,uVar5);
          if (cVar2 != '\0') {
            uVar5 = FUN_1479ea4ee(lVar3,1);
            lVar3 = param_2[0x39];
            if (lVar3 == 0) {
              local_38 = DAT_14c8464f0;
              local_48 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_40 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_48 = *(undefined8 *)(lVar3 + 0x260);
              uStack_40 = *(undefined8 *)(lVar3 + 0x268);
              local_38 = *(undefined8 *)(lVar3 + 0x270);
            }
            (**(code **)(*param_1 + 0x500))(param_1,param_2,&local_48,uVar5);
            goto LAB_147f06f79;
          }
        }
        cVar2 = FUN_147f0712c(param_1,param_2,lVar3,0);
        if (cVar2 != '\0') {
          uVar5 = FUN_1479ea4ee(lVar3,0);
          cVar2 = (**(code **)(*param_1 + 0x4c0))(param_1,lVar3 + 0x118,uVar5,0);
          if (cVar2 != '\0') {
            uVar5 = FUN_1479ea4ee(lVar3,0);
            (**(code **)(*param_1 + 0x508))(param_1,param_2,lVar3 + 0x118,uVar5);
          }
        }
      }
    }
  }
LAB_147f06f79:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0712c FUN_147f0712c body=149 status=ok
// SIG undefined FUN_147f0712c(void)

undefined8 FUN_147f0712c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_1479ea4ee(param_3,param_4);
  if (0.0 < fVar2) {
    fVar2 = (float)FUN_1479ea4fc(param_3,param_4);
    lVar1 = FUN_1447210f0(param_2);
    if (((*(double *)(lVar1 + 0x6d0) - (double)fVar2 <= (double)*(float *)(param_1 + 0x120)) &&
        (lVar1 = FUN_147f06b86(param_1), lVar1 != 0)) && (*(float *)(lVar1 + 0x180) <= fVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147f071c2 FUN_147f071c2 body=69 status=ok
// SIG undefined FUN_147f071c2(void)

void FUN_147f071c2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x130,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f07208 FUN_147f07208 body=90 status=ok
// SIG undefined FUN_147f07208(void)

void FUN_147f07208(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_2;
  local_10 = param_4;
  FUN_1447cd2ec(param_1 + 0x140,&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f07264 FUN_147f07264 body=90 status=ok
// SIG undefined FUN_147f07264(void)

void FUN_147f07264(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_2;
  local_10 = param_4;
  FUN_1447cd2ec(param_1 + 0x140,&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f072c0 FUN_147f072c0 body=566 status=ok
// SIG undefined FUN_147f072c0(void)

bool FUN_147f072c0(longlong *param_1,longlong param_2,char param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  double *pdVar9;
  float fVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != 0) && (param_1[0x15] != 0)) {
    lVar3 = *(longlong *)(param_2 + 0x1c8);
    if (lVar3 == 0) {
      pdVar9 = &DAT_14c8464e0;
      uVar12 = SUB84(DAT_14c8464f0,0);
      uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar12 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
      pdVar9 = (double *)(lVar3 + 0x260);
    }
    dVar1 = *pdVar9;
    dVar2 = pdVar9[1];
    (**(code **)(*param_1 + 0x4c8))(param_1,&local_78);
    local_68 = (double)CONCAT44(uVar13,uVar12) - local_68;
    dVar2 = dVar2 - local_70;
    dVar1 = dVar1 - local_78;
    dVar11 = local_68 * local_68 + dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar11 <= (double)(*(float *)(param_1 + 0x23) * *(float *)(param_1 + 0x23))) &&
       ((param_3 == '\0' ||
        (uVar8 = rand(), fVar10 = (float)(uVar8 & 0x7fff) / 32767.0,
        (double)(fVar10 * fVar10) * dVar11 <=
        (double)(*(float *)(param_1 + 0x23) * 0.4 * *(float *)(param_1 + 0x23) * 0.4))))) {
      if (((dVar11 != 1.0) || (dVar4 = local_68, dVar5 = dVar2, dVar6 = dVar1, NAN(dVar11))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar4 = local_68 * dVar11;
        dVar5 = dVar2 * dVar11;
        dVar6 = dVar1 * dVar11;
      }
      (**(code **)(*param_1 + 0x4d0))(param_1,local_a8);
      FUN_144a76660(local_a8,&local_90);
      bVar7 = (double)*(float *)((longlong)param_1 + 0x154) <=
              dVar4 * local_80 + dVar6 * local_90 + dVar5 * local_88;
      goto LAB_147f073a2;
    }
  }
  bVar7 = false;
LAB_147f073a2:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 147f074f8 FUN_147f074f8 body=106 status=ok
// SIG undefined FUN_147f074f8(void)

undefined4 * FUN_147f074f8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  plVar4 = (longlong *)FUN_147f06b86();
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x588))(plVar4,param_2,local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f07564 FUN_147f07564 body=383 status=ok
// SIG undefined FUN_147f07564(void)

undefined4 * FUN_147f07564(undefined4 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double dVar12;
  double *pdVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(double *)(param_2 + 4) = DAT_14c846508;
  uVar10 = DAT_14c846500._4_4_;
  uVar9 = (undefined4)DAT_14c846500;
  uVar8 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar8;
  param_2[2] = uVar9;
  param_2[3] = uVar10;
  dVar12 = (double)FUN_147f06b86();
  if (dVar12 != 0.0) {
    lVar1 = *(longlong *)((longlong)dVar12 + 0x1c8);
    if (lVar1 == 0) {
      local_48 = DAT_14c846508;
      local_58 = (undefined4)DAT_14c8464f8;
      uStack_54 = DAT_14c8464f8._4_4_;
      uStack_50 = (undefined4)DAT_14c846500;
      uStack_4c = DAT_14c846500._4_4_;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar13 = *(double **)(lVar1 + 0x228);
      local_78 = dVar4;
      uStack_70 = dVar5;
      local_68 = dVar6;
      uStack_60 = dVar7;
      if (pdVar13 == (double *)0x0) {
        param_1 = 0x40;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar12;
        dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar13[5] = dVar12;
        dVar12 = DAT_14c846508;
        pdVar13[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar13;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar13[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar13);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar13[1]) >> 0x20);
      iVar11 = movmskpd(SUB84(dVar12,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar13[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
      uVar14 = movmskpd(param_1,auVar3);
      if ((uVar14 & 0x3fffffff) != 0 || iVar11 != 0) {
        *(undefined4 *)(pdVar13 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar13 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar13 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar13 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar13[6] = local_48;
        pdVar13[4] = (double)CONCAT44(uStack_54,local_58);
        pdVar13[5] = (double)CONCAT44(uStack_4c,uStack_50);
      }
      local_48 = pdVar13[6];
      local_58 = *(undefined4 *)(pdVar13 + 4);
      uStack_54 = *(undefined4 *)((longlong)pdVar13 + 0x24);
      uStack_50 = *(undefined4 *)(pdVar13 + 5);
      uStack_4c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
    }
    *(double *)(param_2 + 4) = local_48;
    *param_2 = local_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
    param_2[3] = uStack_4c;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f07780 FUN_147f07780 body=129 status=ok
// SIG undefined FUN_147f07780(void)

longlong FUN_147f07780(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14104c5c4();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_144a7cbb2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30 &&
        (lVar1 = *(longlong *)(param_1 + 0x3c0), lVar1 != 0)))) {
      lVar2 = FUN_14104c5c4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 147f07802 FUN_147f07802 body=82 status=ok
// SIG undefined FUN_147f07802(void)

void FUN_147f07802(longlong param_1)

{
  longlong lVar1;
  
  FUN_147e95cfe();
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar1 = FUN_147e9586e(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_147f07780(lVar1);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x68) = lVar1;
    }
  }
  return;
}



// FUNCTION 147f07854 FUN_147f07854 body=95 status=ok
// SIG undefined FUN_147f07854(void)

void FUN_147f07854(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  FUN_147e95746(param_1,param_3,param_4);
  if ((char)param_4 != '\x7f') {
    return;
  }
  FUN_147f078b4(param_1);
  return;
}



// FUNCTION 147f078b4 FUN_147f078b4 body=98 status=ok
// SIG undefined FUN_147f078b4(void)

void FUN_147f078b4(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b6095a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145cc80ae(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f07918 FUN_147f07918 body=49 status=ok
// SIG undefined FUN_147f07918(void)

void FUN_147f07918(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  FUN_147f07854(param_1,param_2,param_3,uVar1);
  return;
}



// FUNCTION 147f0794a FUN_147f0794a body=98 status=ok
// SIG undefined FUN_147f0794a(void)

void FUN_147f0794a(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b6095a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145cc80d2(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f079c4 FUN_147f079c4 body=1063 status=ok
// SIG undefined FUN_147f079c4(void)

void FUN_147f079c4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6e;
  byte local_6d;
  int local_6c;
  int local_68;
  int local_64;
  byte local_5e;
  byte local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_5d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d);
  }
  local_5e = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5e);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar3 = local_64;
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar2 = local_68;
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar1 = local_6c;
  local_6d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6d);
  }
  local_6e = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6e);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_78 = local_40;
  local_b0 = iVar2 != 0;
  local_a8 = iVar1 != 0;
  local_b8 = iVar3 != 0;
  local_98 = (uint)local_6e;
  local_a0 = (uint)local_6d;
  local_c0 = (uint)local_5e;
  local_c8 = (uint)local_5d;
  uVar4 = FUN_147f07dec(local_38,&local_88,local_58,local_5c);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f07dec FUN_147f07dec body=578 status=ok
// SIG undefined FUN_147f07dec(void)

longlong FUN_147f07dec(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                      int param_5,int param_6,byte param_7,char param_8,byte param_9,int param_10,
                      int param_11)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [32];
  longlong local_90;
  uint local_88;
  undefined4 local_84;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != 0) {
    lVar5 = FUN_147f08032();
    if (lVar5 != 0) {
      FUN_145cc8164(local_b0);
      if (param_3 == 0) {
        FUN_147ea0894(local_b0,param_2);
      }
      else {
        FUN_147ea0876(local_b0,param_3);
      }
      uVar4 = (uint)(param_5 == 1);
      if (param_5 == 0) {
        uVar4 = local_88 >> 8 & 1;
      }
      uVar7 = (uint)(param_6 == 1);
      if (param_6 == 0) {
        uVar7 = (local_88 & 8) >> 3;
      }
      uVar8 = (uint)(param_10 == 1);
      if (param_10 == 0) {
        uVar8 = (local_88 & 0x40) >> 6;
      }
      uVar6 = (uint)(param_11 == 1);
      if (param_11 == 0) {
        uVar6 = (local_88 & 0x10) >> 4;
      }
      local_88 = ((local_88 & 0xfffffea3) + (uint)param_7 * 4 | uVar4 << 8) + uVar7 * 8 | uVar8 << 6
                 | uVar6 << 4;
      lVar3 = *(longlong *)(param_1 + 0x498);
      local_84 = param_4;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      local_90 = lVar3;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_1);
      }
      *(longlong *)(lVar5 + 0x68) = param_1;
      FUN_147e9ba4c(lVar5 + 0x90,local_b0);
      *(byte *)(lVar5 + 0x119) = *(byte *)(lVar5 + 0x119) & 0xfe | param_9;
      if (param_8 != '\0') {
        FUN_147f0794a(lVar5);
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      goto LAB_147f07e1d;
    }
  }
  lVar5 = 0;
LAB_147f07e1d:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f08032 FUN_147f08032 body=107 status=ok
// SIG undefined FUN_147f08032(void)

longlong FUN_147f08032(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_14599402a();
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_147ed4a76(uVar2,uVar1,0,0,0,0,0,0);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  FUN_147f07854(lVar3,param_1,param_1 + 0x430,0xc0);
  return lVar3;
}



// FUNCTION 147f0809e FUN_147f0809e body=67 status=ok
// SIG undefined FUN_147f0809e(void)

void FUN_147f0809e(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  FUN_147e9ba4c(param_1 + 0x90,param_3);
  return;
}



// FUNCTION 147f080e2 FUN_147f080e2 body=205 status=ok
// SIG undefined FUN_147f080e2(void)

void FUN_147f080e2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((int)param_1[0x20] != -1) && (param_1[0xd] != 0)) &&
      (plVar1 = *(longlong **)(param_1[0xd] + 0x468), plVar1 != (longlong *)0x0)) &&
     (*(char *)((longlong)plVar1 + 0x2a4) != '\0')) {
    (**(code **)(*param_1 + 0x2f8))(param_1);
    local_38 = 0;
    (**(code **)(*plVar1 + 0x498))(plVar1,param_1,0x10,(int)param_1[0x20]);
  }
  *(char *)(param_1 + 0x23) = (char)param_2;
  FUN_147e95552(param_1);
  if (param_2 == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_28 = param_1[0xd];
  local_30 = (char)param_2;
  FUN_1447cd2ec(param_1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f081c0 FUN_147f081c0 body=38 status=ok
// SIG undefined FUN_147f081c0(void)

void FUN_147f081c0(longlong param_1)

{
  FUN_147f07802();
  *(undefined4 *)(param_1 + 0x100) = DAT_14cb1eff8;
  FUN_147f081e6(param_1);
  return;
}



// FUNCTION 147f081e6 FUN_147f081e6 body=427 status=ok
// SIG undefined FUN_147f081e6(void)

void FUN_147f081e6(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(byte *)(param_1 + 0x17) & 4) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x390) + 0x40))(lVar1 + 0x390);
    if (cVar3 != '\0') {
      uVar4 = FUN_1401b4c98(param_1[0xd]);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar2 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_98[2] = lVar5;
      *local_98 = &PTR_FUN_14ac25ef0;
      local_98[3] = 0;
      FUN_14485c47a(local_98 + 3,param_1);
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = FUN_147f081e6;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      local_a0 = 0xbf800000;
      local_a8 = 0;
      FUN_1406f3fee(uVar4,param_1 + 0x1e,&local_88,0x3e4ccccd);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_98);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
    }
  }
  param_1[0x1e] = 0;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147f08249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x308))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f083a2 FUN_147f083a2 body=391 status=ok
// SIG undefined FUN_147f083a2(void)

void FUN_147f083a2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  char local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1[0xd] == 0) || (lVar3 = *(longlong *)(param_1[0xd] + 0x468), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  (**(code **)(*param_1 + 0x2f8))(param_1);
  (**(code **)(*param_1 + 0x300))(param_1);
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  (**(code **)(*(longlong *)param_1[0xd] + 0x7a8))
            ((longlong *)param_1[0xd],&local_40,param_1 + 0x12);
  if (local_3c == '\x01') {
    *(undefined4 *)(param_1 + 0x20) = local_40;
    uVar4 = (ulonglong)local_58 >> 0x10;
    local_58 = (undefined1 *)CONCAT62((uint6)uVar4 & 0xffffffffff00,0x201);
    (**(code **)(*param_1 + 0x318))(param_1);
  }
  else if (local_3c == '\x02') {
    *(undefined4 *)(param_1 + 0x20) = local_40;
    local_58 = &LAB_147f0863e;
    local_50 = 0;
    FUN_147f0853e(lVar3 + 0x130,&local_48,param_1);
    param_1[0x1c] = local_48;
    local_68 = local_38;
    local_60 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    FUN_147f0864c(param_1,&local_68);
  }
  else if (local_3c == '\0') {
    FUN_147f080e2(param_1,5);
  }
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0853e FUN_147f0853e body=254 status=ok
// SIG undefined FUN_147f0853e(void)

undefined8
FUN_147f0853e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14abe5a90;
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
  *local_48 = &PTR_FUN_14ac25f60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ac7d0c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f0864c FUN_147f0864c body=491 status=ok
// SIG undefined FUN_147f0864c(void)

void FUN_147f0864c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0xe8) != 0) && (*(longlong *)(param_1 + 0x108) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x108) + 0x80);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  lVar6 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
  *(longlong *)(param_1 + 0x108) = lVar6;
  *(longlong *)(param_1 + 0x110) = lVar3;
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
    lVar6 = *(longlong *)(param_1 + 0x108);
  }
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x98) = *(byte *)(lVar6 + 0x98) & 0xef;
    lVar6 = *(longlong *)(param_1 + 0x108);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar5 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14abb6f40;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_60[2] = lVar7;
    *local_60 = &PTR_FUN_14ac25fd0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[4] = &LAB_147f088b0;
    local_48 = 0;
    local_40 = 0;
    FUN_147e85030(&local_48,&local_60);
    FUN_147e80bea(lVar6 + 0x80,&local_50,&local_48);
    FUN_1449db362(&local_48);
    FUN_1449db362(&local_60);
    *(undefined8 *)(param_1 + 0xe8) = local_50;
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f08838 FUN_147f08838 body=58 status=ok
// SIG undefined FUN_147f08838(void)

void FUN_147f08838(longlong *param_1)

{
  if ((param_1[0xd] != 0) && ((int)param_1[0x20] != -1)) {
    FUN_147ea0a26();
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  FUN_147e95d00(param_1);
  return;
}



// FUNCTION 147f08872 FUN_147f08872 body=61 status=ok
// SIG undefined FUN_147f08872(void)

void FUN_147f08872(longlong param_1)

{
  char cVar1;
  
  FUN_14384376a();
  if (*(int *)(param_1 + 0x100) != -1) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      cVar1 = FUN_147ea0b62();
      if (cVar1 == '\0') goto LAB_147f088a2;
    }
    return;
  }
LAB_147f088a2:
  FUN_147f081e6(param_1);
  return;
}



// FUNCTION 147f088be FUN_147f088be body=131 status=ok
// SIG undefined FUN_147f088be(void)

void FUN_147f088be(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_147e73efe();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    if ((*(longlong *)(param_1 + 0x68) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x468), lVar1 != 0)) {
      FUN_14480f766(lVar1 + 0x130);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x108) + 0x80);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f08942 FUN_147f08942 body=54 status=ok
// SIG undefined FUN_147f08942(void)

void FUN_147f08942(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar1 = FUN_1401b4c98();
    if (param_1 != 0) {
      FUN_1410d4dde(uVar1,param_1);
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 147f08978 FUN_147f08978 body=181 status=ok
// SIG undefined FUN_147f08978(void)

void FUN_147f08978(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147e9597e();
  (**(code **)(*param_1 + 0x2f8))(param_1);
  (**(code **)(*param_1 + 0x300))(param_1);
  if (((((int)param_1[0x20] != -1) && (param_1[0xd] != 0)) &&
      (plVar3 = *(longlong **)(param_1[0xd] + 0x468), plVar3 != (longlong *)0x0)) &&
     (*(char *)((longlong)plVar3 + 0x2a4) != '\0')) {
    (**(code **)(*plVar3 + 0x498))(plVar3,param_1,0x10,(int)param_1[0x20],0);
  }
  param_1[0x21] = 0;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x22] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f08a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f08a2e FUN_147f08a2e body=422 status=ok
// SIG undefined FUN_147f08a2e(void)

void FUN_147f08a2e(longlong *param_1,int param_2,ushort *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_1[0x20] == param_2) && ((*param_3 & 0x188) != 0x88)) {
    *(undefined4 *)(param_1 + 0x20) = DAT_14cb1eff8;
    if (((*(byte *)((longlong)param_1 + 0x119) & 1) == 0) ||
       (((*(byte *)(param_1 + 0x17) & 2) == 0 || ((*param_3 & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    }
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar3 = FUN_144a88394(uVar3);
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar1 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar4;
    *local_88 = &PTR_FUN_14ac25ef0;
    local_88[3] = 0;
    FUN_14485c47a(local_88 + 3,param_1);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &LAB_14385e452;
    local_78 = 0;
    local_70 = 0;
    FUN_14487d8d8(&local_78,&local_88);
    local_38 = 1;
    FUN_14016fdb0(uVar3,local_90,&local_78);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    FUN_1449db362(&local_88);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f08bec FUN_147f08bec body=206 status=ok
// SIG undefined FUN_147f08bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f08bec(longlong param_1,longlong param_2,int param_3)

{
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20b10) && (FUN_144b3d300(&DAT_14cb20b10), DAT_14cb20b10 == -1)) {
    _DAT_14cb20b08 = FUN_1478cd6e8();
    _Init_thread_footer(&DAT_14cb20b10);
  }
  if (param_3 - 1U < 3) {
    if (((param_2 == 0) || ((*(byte *)(param_2 + 0x98) & 4) == 0)) ||
       ((*(uint *)(param_1 + 0xb8) & 8) != 0)) {
      return;
    }
    if ((*(uint *)(param_1 + 0xb8) & 2) != 0) {
      FUN_14479d2ce(param_1 + 0x90);
    }
  }
  else if (param_3 != 0) {
    if (param_3 == 4) {
      FUN_147f08cba(param_1);
      return;
    }
    if (param_3 != 5) {
      return;
    }
  }
  FUN_147f080e2(param_1,3);
  return;
}



// FUNCTION 147f08cba FUN_147f08cba body=528 status=ok
// SIG undefined FUN_147f08cba(void)

void FUN_147f08cba(longlong param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x108) + 0x99);
    *pbVar1 = *pbVar1 | 1;
  }
  if (((*(byte *)(param_1 + 0xb8) & 4) != 0) && (lVar5 = *(longlong *)(param_1 + 0x68), lVar5 != 0))
  {
    cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x390) + 0x40))(lVar5 + 0x390);
    if (cVar3 != '\0') {
      uVar4 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x68));
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar2 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_98[2] = lVar6;
      *local_98 = &PTR_FUN_14ac25ef0;
      local_98[3] = 0;
      FUN_14485c47a(local_98 + 3,param_1);
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = FUN_147f08cba;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      local_b0 = 0xbf800000;
      local_b8 = 0;
      FUN_1406f3fee(uVar4,param_1 + 0xf8,&local_88,0x3e4ccccd);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_98);
      goto LAB_147f08e1d;
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x108) + 0x9c);
    if (lVar5 != 0) {
      local_a8 = *(undefined8 *)(param_1 + 0x108);
      local_a0 = *(longlong *)(param_1 + 0x110);
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      FUN_147e73f18(lVar5,&local_a8,1);
LAB_147f08e1d:
      if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
}



// FUNCTION 147f08ee6 FUN_147f08ee6 body=275 status=ok
// SIG undefined FUN_147f08ee6(void)

void FUN_147f08ee6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  if (local_20 != 0 && local_28 != 0) {
    lVar2 = FUN_147f090e4();
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x70) = lVar1;
      goto LAB_147f08f81;
    }
  }
  lVar2 = 0;
LAB_147f08f81:
  *param_3 = lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f08ffe FUN_147f08ffe body=229 status=ok
// SIG undefined FUN_147f08ffe(void)

void FUN_147f08ffe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x39) != '\x04') {
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    *(longlong *)(param_1 + 0xe0) = lVar5;
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
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_147ed098a(param_1 + 200,&local_30);
    FUN_147e95552(param_1);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f090e4 FUN_147f090e4 body=80 status=ok
// SIG undefined FUN_147f090e4(void)

longlong FUN_147f090e4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_145994116();
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_147f1475a(uVar2,uVar1);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  FUN_147f07854(lVar3,param_1,param_1 + 0x430,0xc0);
  return lVar3;
}



// FUNCTION 147f09134 FUN_147f09134 body=106 status=ok
// SIG undefined FUN_147f09134(void)

void FUN_147f09134(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_1 + 0x70) != 0) && (lVar1 = *(longlong *)(param_1 + 0x68), lVar1 != 0))
      && (*(longlong *)(lVar1 + 0x488) != 0)) && (*(longlong *)(lVar1 + 0x3d0) != 0)) {
    FUN_147f07802(param_1);
    FUN_147ee03dc(param_1 + 0x70,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x3d0),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x488),param_1 + 0xb8);
    return;
  }
  return;
}



// FUNCTION 147f091b2 FUN_147f091b2 body=45 status=ok
// SIG undefined FUN_147f091b2(void)

longlong FUN_147f091b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f091e0 FUN_147f091e0 body=48 status=ok
// SIG undefined FUN_147f091e0(void)

longlong FUN_147f091e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f09210 FUN_147f09210 body=48 status=ok
// SIG undefined FUN_147f09210(void)

longlong FUN_147f09210(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f09240 FUN_147f09240 body=45 status=ok
// SIG undefined FUN_147f09240(void)

longlong FUN_147f09240(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145f98470(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f09278 FUN_147f09278 body=45 status=ok
// SIG undefined FUN_147f09278(void)

longlong FUN_147f09278(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14593e990(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f092b8 FUN_147f092b8 body=56 status=ok
// SIG undefined FUN_147f092b8(void)

undefined8 FUN_147f092b8(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\AIModule\\Classes\\Perception/AISenseEvent.h",0x12,
                L"Pure virtual not implemented (%s)",L"UAISenseEvent::GetSenseID");
  FUN_1458872f0(param_2);
  return param_2;
}



// FUNCTION 147f092f0 FUN_147f092f0 body=45 status=ok
// SIG undefined FUN_147f092f0(void)

longlong FUN_147f092f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cddae6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f0931e FUN_147f0931e body=45 status=ok
// SIG undefined FUN_147f0931e(void)

longlong FUN_147f0931e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f0934c FUN_147f0934c body=45 status=ok
// SIG undefined FUN_147f0934c(void)

longlong FUN_147f0934c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f0937a FUN_147f0937a body=45 status=ok
// SIG undefined FUN_147f0937a(void)

longlong FUN_147f0937a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459b59ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f093a8 FUN_147f093a8 body=45 status=ok
// SIG undefined FUN_147f093a8(void)

longlong FUN_147f093a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d71496(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f093d6 FUN_147f093d6 body=69 status=ok
// SIG undefined FUN_147f093d6(void)

void FUN_147f093d6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147f0941c(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f0941c FUN_147f0941c body=52 status=ok
// SIG undefined FUN_147f0941c(void)

void FUN_147f0941c(longlong *param_1)

{
  FUN_147f09450();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f09450 FUN_147f09450 body=90 status=ok
// SIG undefined FUN_147f09450(void)

void FUN_147f09450(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147f094aa(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_147f0950a(param_1 + 0x10,0);
  return;
}



// FUNCTION 147f094aa FUN_147f094aa body=95 status=ok
// SIG undefined FUN_147f094aa(void)

void FUN_147f094aa(longlong param_1,uint param_2)

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



// FUNCTION 147f0950a FUN_147f0950a body=95 status=ok
// SIG undefined FUN_147f0950a(void)

void FUN_147f0950a(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_147f0956a(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x1c) + 0x1fU >> 5,4);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 147f0956a FUN_147f0956a body=133 status=ok
// SIG undefined FUN_147f0956a(void)

void FUN_147f0956a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f095f0 FUN_147f095f0 body=31 status=ok
// SIG undefined FUN_147f095f0(void)

undefined8 FUN_147f095f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f09626 FUN_147f09626 body=93 status=ok
// SIG undefined FUN_147f09626(void)

void FUN_147f09626(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac24470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f09684 FUN_147f09684 body=93 status=ok
// SIG undefined FUN_147f09684(void)

void FUN_147f09684(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac24470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f096e2 FUN_147f096e2 body=123 status=ok
// SIG undefined FUN_147f096e2(void)

void FUN_147f096e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a798d90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac24470;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f09768 FUN_147f09768 body=20 status=ok
// SIG undefined FUN_147f09768(void)

undefined8 FUN_147f09768(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147f0977c FUN_147f0977c body=31 status=ok
// SIG undefined FUN_147f0977c(void)

undefined8 FUN_147f0977c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f097b2 FUN_147f097b2 body=93 status=ok
// SIG undefined FUN_147f097b2(void)

void FUN_147f097b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798e70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac244e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f09810 FUN_147f09810 body=93 status=ok
// SIG undefined FUN_147f09810(void)

void FUN_147f09810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798e70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac244e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f0986e FUN_147f0986e body=123 status=ok
// SIG undefined FUN_147f0986e(void)

void FUN_147f0986e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a798e70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac244e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f098f4 FUN_147f098f4 body=20 status=ok
// SIG undefined FUN_147f098f4(void)

undefined8 FUN_147f098f4(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147f09930 FUN_147f09930 body=90 status=ok
// SIG undefined FUN_147f09930(void)

undefined1 FUN_147f09930(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147f099b2 FUN_147f099b2 body=59 status=ok
// SIG undefined FUN_147f099b2(void)

undefined8 FUN_147f099b2(longlong *param_1)

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



// FUNCTION 147f09a54 FUN_147f09a54 body=127 status=ok
// SIG undefined FUN_147f09a54(void)

void FUN_147f09a54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = 0xffffffff;
  param_2[2] = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_2 + 3) = 0xbf800000;
  uVar1 = CONCAT44(DAT_14cb203d8._4_4_,(undefined4)DAT_14cb203d8);
  param_2[4] = CONCAT44(DAT_14cb203d0._4_4_,(undefined4)DAT_14cb203d0);
  param_2[5] = uVar1;
  param_2[6] = DAT_14cb203e0;
  uVar4 = DAT_14cb203d8._4_4_;
  uVar3 = (undefined4)DAT_14cb203d8;
  uVar2 = DAT_14cb203d0._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)DAT_14cb203d0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
  param_2[9] = DAT_14cb203e0;
  FUN_1458872f0(param_2 + 0xb);
  *(byte *)((longlong)param_2 + 100) = *(byte *)((longlong)param_2 + 100) & 0xf8;
  return;
}



// FUNCTION 147f09ad4 FUN_147f09ad4 body=115 status=ok
// SIG undefined FUN_147f09ad4(void)

void FUN_147f09ad4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = 0xffffffff;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_2 + 3) = 0xbf800000;
  uVar1 = CONCAT44(DAT_14cb203d8._4_4_,(undefined4)DAT_14cb203d8);
  param_2[4] = CONCAT44(DAT_14cb203d0._4_4_,(undefined4)DAT_14cb203d0);
  param_2[5] = uVar1;
  param_2[6] = DAT_14cb203e0;
  uVar4 = DAT_14cb203d8._4_4_;
  uVar3 = (undefined4)DAT_14cb203d8;
  uVar2 = DAT_14cb203d0._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)DAT_14cb203d0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
  param_2[9] = DAT_14cb203e0;
  param_2[10] = 0;
  FUN_1458872f0(param_2 + 0xb);
  *(byte *)((longlong)param_2 + 100) = *(byte *)((longlong)param_2 + 100) & 0xf8;
  return;
}



// FUNCTION 147f09b60 FUN_147f09b60 body=88 status=ok
// SIG undefined FUN_147f09b60(void)

undefined8 FUN_147f09b60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar6);
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(puVar1 + 1);
      puVar2[-2] = *puVar1;
      puVar4 = puVar1 + 2;
      puVar5 = puVar2;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(puVar1 + 0xb);
      *(undefined8 *)((longlong)puVar2 + 0x4c) = *(undefined8 *)((longlong)puVar1 + 0x5c);
      *(undefined1 *)((longlong)puVar2 + 0x54) = *(undefined1 *)((longlong)puVar1 + 100);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f09be0 FUN_147f09be0 body=59 status=ok
// SIG undefined FUN_147f09be0(void)

undefined8 FUN_147f09be0(longlong *param_1)

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



// FUNCTION 147f09cce FUN_147f09cce body=54 status=ok
// SIG undefined FUN_147f09cce(void)

undefined1 FUN_147f09cce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f09de6(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147f09d2c FUN_147f09d2c body=59 status=ok
// SIG undefined FUN_147f09d2c(void)

undefined8 FUN_147f09d2c(longlong *param_1)

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



// FUNCTION 147f09d72 FUN_147f09d72 body=38 status=ok
// SIG undefined FUN_147f09d72(void)

void FUN_147f09d72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147f09de6 FUN_147f09de6 body=73 status=ok
// SIG undefined FUN_147f09de6(void)

longlong * FUN_147f09de6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_147efe424(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 147f09e30 FUN_147f09e30 body=99 status=ok
// SIG undefined FUN_147f09e30(void)

void FUN_147f09e30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_2 + 1) = 0xbf800000;
  uVar1 = CONCAT44(DAT_14cb203d8._4_4_,(undefined4)DAT_14cb203d8);
  param_2[2] = CONCAT44(DAT_14cb203d0._4_4_,(undefined4)DAT_14cb203d0);
  param_2[3] = uVar1;
  param_2[4] = DAT_14cb203e0;
  uVar4 = DAT_14cb203d8._4_4_;
  uVar3 = (undefined4)DAT_14cb203d8;
  uVar2 = DAT_14cb203d0._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)DAT_14cb203d0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 6) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar4;
  param_2[7] = DAT_14cb203e0;
  param_2[8] = 0;
  FUN_1458872f0(param_2 + 9);
  *(byte *)((longlong)param_2 + 0x54) = *(byte *)((longlong)param_2 + 0x54) & 0xf8;
  return;
}



// FUNCTION 147f09e94 FUN_147f09e94 body=99 status=ok
// SIG undefined FUN_147f09e94(void)

void FUN_147f09e94(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_2 + 1) = 0xbf800000;
  uVar1 = CONCAT44(DAT_14cb203d8._4_4_,(undefined4)DAT_14cb203d8);
  param_2[2] = CONCAT44(DAT_14cb203d0._4_4_,(undefined4)DAT_14cb203d0);
  param_2[3] = uVar1;
  param_2[4] = DAT_14cb203e0;
  uVar4 = DAT_14cb203d8._4_4_;
  uVar3 = (undefined4)DAT_14cb203d8;
  uVar2 = DAT_14cb203d0._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)DAT_14cb203d0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 6) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar4;
  param_2[7] = DAT_14cb203e0;
  param_2[8] = 0;
  FUN_1458872f0(param_2 + 9);
  *(byte *)((longlong)param_2 + 0x54) = *(byte *)((longlong)param_2 + 0x54) & 0xf8;
  return;
}



// FUNCTION 147f09f10 FUN_147f09f10 body=67 status=ok
// SIG undefined FUN_147f09f10(void)

undefined8 FUN_147f09f10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + 0x48 + lVar1) = *(undefined1 *)(param_3 + 0x48 + lVar1);
      *(undefined8 *)(param_2 + 0x4c + lVar1) = *(undefined8 *)(param_3 + 0x4c + lVar1);
      *(undefined1 *)(param_2 + 0x54 + lVar1) = *(undefined1 *)(param_3 + 0x54 + lVar1);
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f09f7c FUN_147f09f7c body=59 status=ok
// SIG undefined FUN_147f09f7c(void)

undefined8 FUN_147f09f7c(longlong *param_1)

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



// FUNCTION 147f0a086 FUN_147f0a086 body=59 status=ok
// SIG undefined FUN_147f0a086(void)

undefined8 FUN_147f0a086(longlong *param_1)

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



// FUNCTION 147f0a1c4 FUN_147f0a1c4 body=54 status=ok
// SIG undefined FUN_147f0a1c4(void)

undefined1 FUN_147f0a1c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f0a2c2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f0a222 FUN_147f0a222 body=59 status=ok
// SIG undefined FUN_147f0a222(void)

undefined8 FUN_147f0a222(longlong *param_1)

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



// FUNCTION 147f0a2c2 FUN_147f0a2c2 body=132 status=ok
// SIG undefined FUN_147f0a2c2(void)

undefined4 * FUN_147f0a2c2(undefined4 *param_1,undefined4 *param_2)

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
  byte bVar12;
  longlong lVar13;
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar13 = *(longlong *)(param_2 + 0xe);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0xe);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xe) = lVar13;
  lVar13 = *(longlong *)(param_2 + 0x10);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar13;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 147f0a348 FUN_147f0a348 body=128 status=ok
// SIG undefined FUN_147f0a348(void)

undefined4 * FUN_147f0a348(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
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
  byte bVar13;
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
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
  param_1[8] = param_2[8];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar1 = *(longlong *)(param_2 + 0xe);
  *(longlong *)(param_1 + 0xe) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar13 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0 & bVar13) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 147f0a44c FUN_147f0a44c body=149 status=ok
// SIG undefined FUN_147f0a44c(void)

undefined1 FUN_147f0a44c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x20 + lVar13) = *(undefined8 *)(param_3 + 0x20 + lVar13);
      puVar2 = (undefined4 *)(param_3 + lVar13);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar13);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x10 + lVar13);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar2 = (undefined4 *)(param_2 + lVar13);
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar12 = *(longlong *)(param_3 + 0x28 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + 0x28 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar13;
      *(longlong *)(lVar1 + 0x28) = lVar12;
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 0x30 + lVar13);
      *(undefined1 *)(lVar1 + 0x38) = *(undefined1 *)(param_3 + 0x38 + lVar13);
      lVar13 = lVar13 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f0a50a FUN_147f0a50a body=59 status=ok
// SIG undefined FUN_147f0a50a(void)

undefined8 FUN_147f0a50a(longlong *param_1)

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



// FUNCTION 147f0a5d4 FUN_147f0a5d4 body=54 status=ok
// SIG undefined FUN_147f0a5d4(void)

undefined1 FUN_147f0a5d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f0a6d2(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147f0a632 FUN_147f0a632 body=59 status=ok
// SIG undefined FUN_147f0a632(void)

undefined8 FUN_147f0a632(longlong *param_1)

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



// FUNCTION 147f0a6d2 FUN_147f0a6d2 body=101 status=ok
// SIG undefined FUN_147f0a6d2(void)

longlong * FUN_147f0a6d2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
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
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 147f0a760 FUN_147f0a760 body=54 status=ok
// SIG undefined FUN_147f0a760(void)

undefined1 FUN_147f0a760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f0a85e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147f0a7be FUN_147f0a7be body=59 status=ok
// SIG undefined FUN_147f0a7be(void)

undefined8 FUN_147f0a7be(longlong *param_1)

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



// FUNCTION 147f0a85e FUN_147f0a85e body=100 status=ok
// SIG undefined FUN_147f0a85e(void)

undefined8 * FUN_147f0a85e(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 147f0a8f4 FUN_147f0a8f4 body=54 status=ok
// SIG undefined FUN_147f0a8f4(void)

undefined1 FUN_147f0a8f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f0a9f2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f0a952 FUN_147f0a952 body=59 status=ok
// SIG undefined FUN_147f0a952(void)

undefined8 FUN_147f0a952(longlong *param_1)

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



// FUNCTION 147f0a9f2 FUN_147f0a9f2 body=124 status=ok
// SIG undefined FUN_147f0a9f2(void)

undefined4 * FUN_147f0a9f2(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  longlong lVar17;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar17 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x10);
    }
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x10) = lVar17;
  lVar17 = *(longlong *)(param_2 + 0x12);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x12);
    }
  }
  *(longlong *)(param_1 + 0x12) = lVar17;
  return param_1;
}



// FUNCTION 147f0aadc FUN_147f0aadc body=54 status=ok
// SIG undefined FUN_147f0aadc(void)

undefined1 FUN_147f0aadc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f0abda(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147f0ab3a FUN_147f0ab3a body=59 status=ok
// SIG undefined FUN_147f0ab3a(void)

undefined8 FUN_147f0ab3a(longlong *param_1)

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



// FUNCTION 147f0abda FUN_147f0abda body=114 status=ok
// SIG undefined FUN_147f0abda(void)

undefined4 * FUN_147f0abda(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 6);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 6) = lVar5;
  lVar5 = *(longlong *)(param_2 + 8);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar5;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 147f0ac4e FUN_147f0ac4e body=31 status=ok
// SIG undefined FUN_147f0ac4e(void)

undefined8 FUN_147f0ac4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f0ac88 FUN_147f0ac88 body=29 status=ok
// SIG undefined FUN_147f0ac88(void)

bool FUN_147f0ac88(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f0aca6 FUN_147f0aca6 body=26 status=ok
// SIG undefined FUN_147f0aca6(void)

bool FUN_147f0aca6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f0acc0 FUN_147f0acc0 body=24 status=ok
// SIG undefined FUN_147f0acc0(void)

bool FUN_147f0acc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147f0ace4 FUN_147f0ace4 body=101 status=ok
// SIG undefined FUN_147f0ace4(void)

void FUN_147f0ace4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac25640;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac255d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f0ad4a FUN_147f0ad4a body=131 status=ok
// SIG undefined FUN_147f0ad4a(void)

void FUN_147f0ad4a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac25640;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac255d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f0adce FUN_147f0adce body=62 status=ok
// SIG undefined FUN_147f0adce(void)

void FUN_147f0adce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f0ae09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}


