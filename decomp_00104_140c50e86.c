// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c50e86 FUN_140c50e86 body=22 status=ok
// SIG undefined FUN_140c50e86(void)

undefined8 FUN_140c50e86(undefined8 param_1)

{
  FUN_140c50e9c();
  return param_1;
}



// FUNCTION 140c50e9c FUN_140c50e9c body=352 status=ok
// SIG undefined FUN_140c50e9c(void)

longlong * FUN_140c50e9c(longlong *param_1,undefined8 *param_2,char param_3)

{
  void *pvVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  if (param_3 == '\0') {
    *param_1 = 0;
    iVar4 = *(int *)(param_2 + 1);
    pvVar1 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((longlong)iVar4 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      iVar4 = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar4,0);
      memcpy((void *)*param_1,pvVar1,(longlong)iVar4 * 2);
      iVar4 = (int)param_1[1];
    }
    uVar8 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    if (0 < (int)uVar8) {
      uVar6 = (ulonglong)(uVar8 - 1);
      lVar7 = *param_1;
      uVar5 = uVar8;
      do {
        if (*(short *)(lVar7 + uVar6 * 2) == 0x2e) {
          if (uVar6 == 0xffffffff) {
            return param_1;
          }
          uVar11 = (ulonglong)uVar8 * 2;
          goto LAB_140c50fb7;
        }
        uVar6 = uVar6 - 1;
        uVar9 = uVar5 - 1;
        bVar3 = 0 < (int)uVar5;
        uVar5 = uVar9;
      } while (uVar9 != 0 && bVar3);
    }
  }
  else {
    FUN_144a06ecc();
    iVar4 = (int)param_1[1];
    uVar8 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    if (0 < (int)uVar8) {
      uVar6 = (ulonglong)(uVar8 - 1);
      lVar7 = *param_1;
      uVar5 = uVar8;
      do {
        if (*(short *)(lVar7 + uVar6 * 2) == 0x2e) {
          if (uVar6 == 0xffffffff) {
            return param_1;
          }
          goto LAB_140c50eed;
        }
        uVar6 = uVar6 - 1;
        uVar9 = uVar5 - 1;
        bVar3 = 0 < (int)uVar5;
        uVar5 = uVar9;
      } while (uVar9 != 0 && bVar3);
    }
  }
  return param_1;
  while( true ) {
    sVar2 = *(short *)(lVar7 + -2 + uVar11);
    uVar11 = uVar11 - 2;
    if ((sVar2 == 0x5c) || (sVar2 == 0x2f)) break;
LAB_140c50fb7:
    if (uVar11 == 0) goto LAB_140c50eed;
  }
  iVar10 = (int)(uVar11 >> 1);
  if ((iVar10 != -1) && ((int)uVar6 <= iVar10)) {
    return param_1;
  }
LAB_140c50eed:
  uVar5 = (uint)uVar6;
  if ((int)uVar8 <= (int)(uint)uVar6) {
    uVar5 = uVar8;
  }
  uVar6 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    uVar6 = 0;
  }
  uVar8 = uVar8 - (int)uVar6;
  if ((int)uVar8 < 1) {
    return param_1;
  }
  iVar10 = iVar4 - (uVar8 + (int)uVar6);
  if (iVar10 != 0) {
    pvVar1 = (void *)(lVar7 + uVar6 * 2);
    memmove(pvVar1,(void *)((longlong)pvVar1 + (ulonglong)uVar8 * 2),(longlong)iVar10 * 2);
    iVar4 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar4 - uVar8;
  FUN_1449649ae(param_1);
  return param_1;
}



// FUNCTION 140c51004 FUN_140c51004 body=465 status=ok
// SIG undefined FUN_140c51004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c51004(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 _Src;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c511d6();
  *param_1 = &PTR_FUN_14b95e230;
  *(undefined1 *)((longlong)param_1 + 0x6f1) = 0;
  auVar5 = ZEXT816(0);
  *(undefined1 (*) [16])(param_1 + 0xdf) = auVar5;
  *(undefined1 (*) [16])((longlong)param_1 + 0x705) = auVar5;
  *(undefined2 *)((longlong)param_1 + 0x715) = 0x101;
  auVar2 = _DAT_149931e80;
  auVar5 = pmovsxbq(auVar5,0x100);
  lVar4 = 0;
  auVar7 = pmovsxbq(in_XMM3,0x202);
  do {
    if (SUB168(auVar5 ^ auVar2,0) < -0x7ffffffffffffffa) {
      *(char *)((longlong)param_1 + lVar4 + 0x717) = (char)lVar4;
    }
    if (SUB168(auVar5 ^ auVar2,8) < -0x7ffffffffffffffa) {
      *(char *)((longlong)param_1 + lVar4 + 0x718) = (char)lVar4 + '\x01';
    }
    lVar4 = lVar4 + 2;
    lVar6 = auVar5._8_8_;
    auVar5._0_8_ = auVar5._0_8_ + auVar7._0_8_;
    auVar5._8_8_ = lVar6 + auVar7._8_8_;
  } while (lVar4 != 6);
  *(undefined2 *)((longlong)param_1 + 0x71d) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0x71f) = 0;
  FUN_1400b22c2(&local_68,"/Script/OakGame.OakProjectile");
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(local_58);
  param_1[0x12] = 0;
  param_1[0x13] = local_58._0_8_;
  param_1[0x14] = local_58._8_8_;
  puVar1 = param_1 + 0x15;
  if (puVar1 != (undefined8 *)local_48) {
    uVar3 = local_48._8_4_;
    lVar4 = (longlong)(int)local_48._8_4_;
    _Src = local_48._0_8_;
    *(undefined4 *)(param_1 + 0x16) = local_48._8_4_;
    if (local_48._8_4_ == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_48._8_4_);
      if (uVar3 != 0) {
        memcpy((void *)*puVar1,(void *)_Src,lVar4 * 2);
      }
    }
  }
  if (local_48._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0xde) = *(byte *)(param_1 + 0xde) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x71d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x714) = 1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c511d6 FUN_140c511d6 body=1933 status=ok
// SIG undefined FUN_140c511d6(void)

undefined8 * FUN_140c511d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  void *_Src;
  int iVar9;
  undefined2 uVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_70;
  int local_68;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(param_1 + 1,0,0x88);
  *param_1 = &PTR_FUN_14ab51200;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x44610000;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  uStack_c0 = (longlong *)FUN_14001cc68(0x98,0x10);
  uStack_c0[1] = (longlong)&DAT_100000001;
  *uStack_c0 = (longlong)&PTR_FUN_14a1b6cc0;
  local_c8 = uStack_c0 + 2;
  uStack_c0[2] = (longlong)&PTR_FUN_14a18e458;
  uStack_c0[3] = 0;
  uStack_c0[4] = 0;
  uStack_c0[5] = 0;
  uStack_c0[6] = 0;
  uStack_c0[7] = 0;
  uStack_c0[8] = 0;
  uStack_c0[9] = 0;
  uStack_c0[10] = 0;
  uStack_c0[0xb] = 0;
  uStack_c0[0xc] = 0;
  uStack_c0[0xd] = 0;
  uStack_c0[0xe] = 0;
  uStack_c0[0xf] = 0;
  uStack_c0[0x10] = 0;
  uStack_c0[0x11] = 0;
  uStack_c0[0x12] = 0;
  FUN_1404e24cc(&local_c8);
  FUN_1404e256a(param_1 + 5);
  plVar8 = uStack_c0;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_c0)(uStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_14aff4df0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) | 0x7f;
  ppvVar3 = (void **)(param_1 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0x3f8000003f19999a;
  param_1[0x26] = 0x40a000003e4ccccd;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x43fa0000;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0x43fa0000442f0000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0x4234000043fa0000;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  FUN_140c51964(param_1 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined2 *)((longlong)param_1 + 0x27a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27e) = 1;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3002;
  param_1[0x54] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0x200000000;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x3005;
  param_1[0x5f] = 0;
  *(undefined2 *)((longlong)param_1 + 0x302) = 0;
  param_1[99] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x65) = *(uint *)(param_1 + 0x65) & 0xffffffe0 | 3;
  FUN_1405c5fa2();
  param_1[0x67] = &DAT_14cb769e8;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = &PTR_FUN_14b0394b0;
  FUN_1405c5fa2();
  param_1[0x6b] = &DAT_14cb769e8;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = &PTR_FUN_14b0394b0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x379) = 0;
  *(undefined8 *)((longlong)param_1 + 0x381) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3b1) = 0;
  param_1[0x77] = &PTR_FUN_14affd590;
  *(undefined4 *)(param_1 + 0x78) = 1;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0xf00d1e03;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined2 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3ea) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x1010001;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xf00000d0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8e] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x479) = 0x1010000010101;
  *(undefined2 *)((longlong)param_1 + 0x481) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = &PTR_FUN_14aff4f48;
  param_1[0x93] = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 1;
  param_1[0x95] = 0x433400003f000000;
  param_1[0x96] = 0x4234000041f00000;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0x3f800000;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0xaaad1010;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
  memset(param_1 + 0x9e,0,0x98);
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0xc5daac38;
  param_1[0xba] = 0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xbb] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xbc] = uVar4;
  param_1[0xbd] = DAT_14c8464f0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0xc5daac38;
  param_1[0xc9] = 0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xca) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x654) = uVar5;
  *(undefined4 *)(param_1 + 0xcb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x65c) = uVar7;
  param_1[0xcc] = DAT_14c8464f0;
  *(undefined2 *)((longlong)param_1 + 0x68a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x694) = 0x100;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  param_1[0xdd] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  FUN_1400b22c2(&local_70,"/Script/GbxGame.Projectile");
  local_c8 = (longlong *)0x0;
  uStack_c0 = (longlong *)0x0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_60 = local_70;
  local_58 = local_68 + -1;
  if (local_68 == 0) {
    local_58 = 0;
  }
  FUN_14475bf92(&local_c8);
  _Src = local_b8;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_1 + 0x9c) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_c0._4_4_;
  if (ppvVar3 != &local_b8) {
    iVar9 = (int)uStack_b0;
    lVar11 = (longlong)(int)uStack_b0;
    *(int *)(param_1 + 0x16) = (int)uStack_b0;
    if ((int)uStack_b0 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar3,uStack_b0 & 0xffffffff);
      if (iVar9 != 0) {
        memcpy(*ppvVar3,_Src,lVar11 * 2);
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  *(byte *)((longlong)param_1 + 0xbe) = (*(byte *)((longlong)param_1 + 0xbe) & 0xf8) + 1;
  *(byte *)((longlong)param_1 + 0x124) = *(byte *)((longlong)param_1 + 0x124) & 0xfe;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfc;
  *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) | 1;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  *(byte *)((longlong)param_1 + 0x286) = *(byte *)((longlong)param_1 + 0x286) & 0xfe;
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xf0 | 3;
  *(undefined1 *)(param_1 + 0x4a) = 0x31;
  *(byte *)((longlong)param_1 + 0x251) = *(byte *)((longlong)param_1 + 0x251) & 0xf0;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf0;
  *(undefined2 *)((longlong)param_1 + 0x302) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 1;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(byte *)((longlong)param_1 + 0x259) = *(byte *)((longlong)param_1 + 0x259) & 0xfe;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe;
  *(byte *)((longlong)param_1 + 0x48c) = *(byte *)((longlong)param_1 + 0x48c) & 0xfe;
  *(byte *)(param_1 + 0x8f) = (*(byte *)(param_1 + 0x8f) & 0xf8) + 1;
  *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) & 0xf0 | 8;
  *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) & 0xfe;
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) & 0xf0;
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xf8;
  *(byte *)((longlong)param_1 + 0x27c) = *(byte *)((longlong)param_1 + 0x27c) & 0xe0;
  local_c8 = (longlong *)CONCAT44(local_c8._4_4_,0x447a0000);
  uStack_c0 = (longlong *)0x0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0xf00000d0;
  local_88 = 0;
  local_80 = 0x3f800000;
  uVar10 = FUN_1449148e0();
  *(undefined2 *)((longlong)param_1 + 0xba) = uVar10;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c51964 FUN_140c51964 body=156 status=ok
// SIG undefined FUN_140c51964(void)

void FUN_140c51964(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14aff4f50;
  param_1[1] = 0x43340000;
  param_1[2] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x240000000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x240000000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x240000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xf8;
  param_1[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf8;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}



// FUNCTION 140c51a00 FUN_140c51a00 body=38 status=ok
// SIG undefined FUN_140c51a00(void)

undefined8 FUN_140c51a00(undefined8 param_1,int param_2)

{
  FUN_140c51a26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c51a26 FUN_140c51a26 body=264 status=ok
// SIG undefined FUN_140c51a26(void)

void FUN_140c51a26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0ad300;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c51b3c FUN_140c51b3c body=36 status=ok
// SIG undefined FUN_140c51b3c(void)

undefined8 FUN_140c51b3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140c51b60 FUN_140c51b60 body=96 status=ok
// SIG undefined FUN_140c51b60(void)

void FUN_140c51b60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c51bc0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae9abd0;
  *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x49) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x91) = 0;
  return;
}



// FUNCTION 140c51bc0 FUN_140c51bc0 body=94 status=ok
// SIG undefined FUN_140c51bc0(void)

undefined8 * FUN_140c51bc0(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a87e160;
  return param_1;
}



// FUNCTION 140c51c1e FUN_140c51c1e body=596 status=ok
// SIG undefined FUN_140c51c1e(void)

void FUN_140c51c1e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  byte local_171;
  byte *local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  undefined4 local_148;
  longlong local_140;
  int local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [24];
  longlong local_108;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_130 = *param_2;
  local_128 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_120);
  lVar4 = FUN_140fa5e12(local_120);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (lVar4 != 0) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined4 *)(lVar7 + 0xc7c);
    uVar2 = *puVar1;
    pbVar8 = (byte *)(lVar7 + 0xc80);
    local_171 = *pbVar8;
    if ((local_171 & 1) != 0) {
      *pbVar8 = 0;
      *puVar1 = 0;
    }
    local_150 = *param_2;
    local_148 = *(undefined4 *)(param_2 + 1);
    uVar5 = FUN_1447210f0(param_1);
    uVar5 = FUN_1406f625c(uVar5);
    local_188 = 1;
    FUN_140c51ed6(lVar4,&local_140,uVar5,&local_150);
    local_168 = 0;
    uStack_160 = 0;
    uVar6 = 0;
    if ((longlong)local_138 != 0) {
      lVar7 = (longlong)local_138 * 0x38;
      lVar4 = local_140;
      local_170 = pbVar8;
      do {
        FUN_140eeff92(lVar4,&local_168,param_1);
        pbVar8 = local_170;
        lVar4 = lVar4 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
      if ((longlong)(int)uStack_160 != 0) {
        lVar7 = (longlong)(int)uStack_160 * 0xe0;
        lVar4 = local_168;
        do {
          if (*(longlong *)(lVar4 + 8) != 0) {
            FUN_140c5254a(lVar4,local_120);
            iVar3 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
              FUN_140c71e7a(param_3,iVar3);
            }
            FUN_140c541bc((longlong)iVar3 * 0xd8 + *param_3,local_120);
            FUN_1407dde54(local_120);
          }
          lVar4 = lVar4 + 0xe0;
          lVar7 = lVar7 + -0xe0;
        } while (lVar7 != 0);
        uVar6 = (int)uStack_160;
      }
    }
    FUN_14087acb9(local_168,uVar6);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    FUN_140c51e73(local_140,local_138);
    if (local_140 != 0) {
      FUN_1400020a8();
    }
    if ((local_171 & 1) != 0) {
      *puVar1 = uVar2;
      *pbVar8 = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c51e73 FUN_140c51e73 body=98 status=ok
// SIG undefined FUN_140c51e73(void)

void FUN_140c51e73(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    FUN_140679ffe(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 140c51ed6 FUN_140c51ed6 body=459 status=ok
// SIG undefined FUN_140c51ed6(void)

longlong *
FUN_140c51ed6(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [56];
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  local_b0 = param_3;
  local_a8 = param_4;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x70);
    local_b8 = plVar8 + (longlong)*(int *)(param_1 + 0x78) * 0xc;
    do {
      if (((param_5 == '\0') || (*plVar8 == 0)) && (0 < (int)plVar8[0xb])) {
        lVar9 = 0;
        lVar7 = 0;
        do {
          FUN_140c5218a(plVar8[10] + lVar9,local_a0,local_b0,local_a8);
          puVar5 = (undefined8 *)FUN_140c520a2(local_a0);
          if (puVar5 != (undefined8 *)0x0) {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_140c523dc(param_2,iVar2);
            }
            lVar3 = *param_2;
            lVar6 = (longlong)iVar2 * 0x38;
            puVar1 = (undefined8 *)(lVar3 + lVar6);
            *(undefined8 *)(lVar3 + lVar6) = 0;
            iVar2 = *(int *)(puVar5 + 1);
            uVar4 = *puVar5;
            *(int *)(lVar3 + 8 + lVar6) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_140d2386a(puVar1,iVar2,0);
              FUN_140d2381e(*puVar1,uVar4,iVar2);
            }
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            FUN_1401f3db8(puVar1 + 2,puVar5 + 2);
            puVar1[5] = puVar5[5];
            *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar5 + 6);
          }
          (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_68])(local_a0);
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 0x58;
        } while (lVar7 < (int)plVar8[0xb]);
      }
      plVar8 = plVar8 + 0xc;
    } while (plVar8 != local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c520a2 FUN_140c520a2 body=174 status=ok
// SIG undefined FUN_140c520a2(void)

longlong * FUN_140c520a2(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((char)param_1[7] == '\0') {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar3 = FUN_140c52150();
      lVar4 = FUN_14477b664(uVar3);
      param_1[1] = lVar4;
    }
    if (param_1[2] != 0) {
      return (longlong *)(param_1[2] + 0x18);
    }
    if ((lVar4 != 0) && (*param_1 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_1[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1);
        param_1[2] = lVar4;
        if (lVar4 != 0) {
          return (longlong *)(lVar4 + 0x18);
        }
      }
    }
  }
  else if ((char)param_1[7] == '\x01') {
    return param_1;
  }
  return (longlong *)0x0;
}



// FUNCTION 140c52150 FUN_140c52150 body=57 status=ok
// SIG undefined FUN_140c52150(void)

void FUN_140c52150(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb628e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb628e0 = FUN_140002ddd(FUN_1464f9069,uVar1,L"GbxRewardsDef");
  }
  return;
}



// FUNCTION 140c5218a FUN_140c5218a body=592 status=ok
// SIG undefined FUN_140c5218a(void)

undefined8 * FUN_140c5218a(char *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0 [3];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_1 == '\0') {
    bVar2 = param_1[0x40];
    *(byte *)(param_2 + 7) = bVar2;
    (*(code *)(&PTR_caseD_2_14b1f3420)[bVar2])(param_2,param_1 + 8);
  }
  else {
    if (param_3 != (longlong *)0x0) {
      lVar3 = (**(code **)(*param_3 + 0x2b0))(param_3);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_14039ffc6(lVar3);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x78))(plVar4,&local_70,param_4);
          if (local_70 != 0) {
            lVar3 = FUN_140ca9be8(local_70,param_1 + 0x48);
            if (lVar3 != 0) {
              *(undefined1 *)(param_2 + 7) = 0;
              *param_2 = 0;
              param_2[1] = 0;
              param_2[2] = 0;
              FUN_1411a0e4c(lVar3 + 0x10,local_a0);
              local_88 = local_a0[0];
              FUN_1446dcdd4(local_58,&local_88);
              uVar5 = FUN_1418a5ca4(local_58);
              local_78 = 0;
              uVar6 = FUN_140c52150();
              lVar3 = FUN_14477b664(uVar6);
              uVar6 = FUN_140c52150();
              uVar7 = FUN_140c52150();
              FUN_1402d1bfa(&local_60,uVar7,uVar5);
              if (local_60 != 0) {
                local_78 = 0;
              }
              local_88 = local_60;
              uVar7 = FUN_140c52150();
              lVar8 = FUN_141459e9e(uVar6,uVar7);
              if (lVar3 != lVar8) {
                local_78 = 0;
              }
              uVar6 = FUN_14477b664(lVar8);
              local_80 = FUN_14477b664(uVar6);
              if (local_80 != 0 && local_60 != 0) {
                local_78 = uVar5;
              }
              (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_2 + 7)])
                        (param_2);
              FUN_14581caea(param_2,&local_88);
              *(undefined1 *)(param_2 + 7) = 0;
              if (local_40 != 0) {
                FUN_1400020a8();
              }
              goto LAB_140c52265;
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
LAB_140c52265:
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_68 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)local_68 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
          if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
}



// FUNCTION 140c523dc FUN_140c523dc body=366 status=ok
// SIG undefined FUN_140c523dc(void)

void FUN_140c523dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140c52461;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140c52461:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140c5254a FUN_140c5254a body=6954 status=ok
// SIG undefined FUN_140c5254a(void)

void * FUN_140c5254a(longlong param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  void *_Src;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined4 local_180;
  longlong *local_178 [2];
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined2 *local_158;
  ulonglong uStack_150;
  undefined2 *local_148;
  uint local_140;
  undefined4 local_13c;
  bool local_138;
  undefined2 *local_130;
  ulonglong uStack_128;
  undefined2 *local_120;
  uint local_118;
  undefined4 local_114;
  longlong local_110;
  int local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *local_a0;
  int local_98;
  int local_94;
  undefined8 local_90;
  longlong *local_88;
  undefined2 **local_80;
  ulonglong *local_78;
  undefined2 *local_70;
  undefined8 uStack_68;
  undefined2 *local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 8) == 0) {
    memset(param_2,0,0xd8);
    FUN_140c5455a(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1d8);
  }
  FUN_140c5455a(&local_168);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_140c54370(DAT_14caa8580,param_1 + 8,&local_110);
  FUN_1400021e4((longlong)(local_108 + -1) * 8 + local_110,&local_60);
  puVar14 = local_60;
  local_160 = (uint)uStack_58;
  uVar8 = (uint)uStack_58 - 1;
  if ((uint)uStack_58 == 0) {
    uVar8 = 0;
  }
  if (0 < (int)uVar8) {
    uVar13 = 0;
    do {
      local_60[uVar13] = (ushort)((ushort)local_60[uVar13] - 0x41 < 0x1a) * 0x20 + local_60[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar8 != uVar13);
  }
  iVar16 = (uint)uStack_58;
  uVar3 = uStack_58._4_4_;
  local_60 = (undefined2 *)0x0;
  uStack_58 = 0;
  if (local_168 == (undefined2 *)0x0) {
    local_168 = puVar14;
    local_15c = uVar3;
  }
  else {
    FUN_1400020a8();
    local_168 = puVar14;
    local_15c = uVar3;
    local_160 = iVar16;
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x88);
  if (lVar11 == 0) {
    uVar9 = FUN_140c54336();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x88) = lVar11;
  }
  plVar18 = (longlong *)(param_1 + 0x80);
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (lVar10 == 0) {
    if ((lVar11 != 0) && (*plVar18 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
        *(longlong *)(param_1 + 0x90) = lVar10;
        if (lVar10 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x88);
          goto LAB_140c526d8;
        }
      }
    }
LAB_140c535fc:
    plVar17 = (longlong *)(param_1 + 0xb8);
  }
  else {
LAB_140c526d8:
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x88) = lVar11;
      lVar10 = *(longlong *)(param_1 + 0x90);
      if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
        plVar17 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar10 = FUN_144aff482(uVar9,plVar18);
        }
        *(longlong *)(param_1 + 0x90) = lVar10;
      }
    }
    plVar17 = *(longlong **)(lVar10 + 0x28);
    if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
    }
    FUN_1447a1fc0(plVar17);
    plVar17 = *(longlong **)(lVar10 + 0x28);
    pcVar4 = *(code **)(*plVar17 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = plVar17 + 3;
      if (plVar17[5] != 0) {
        plVar12 = (longlong *)(plVar17[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar17 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar17);
    }
    if ((int)plVar12[1] < 2) goto LAB_140c535fc;
    lVar11 = *(longlong *)(param_1 + 0x88);
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x88) = lVar11;
    }
    lVar10 = *(longlong *)(param_1 + 0x90);
    if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
      }
      *(longlong *)(param_1 + 0x90) = lVar10;
    }
    plVar17 = (longlong *)(lVar10 + 0x28);
  }
  plVar5 = local_d8;
  plVar12 = (longlong *)*plVar17;
  if (local_d8 != plVar12) {
    local_d8 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  local_d0 = (undefined4)plVar17[1];
  lVar11 = *(longlong *)(param_1 + 0x88);
  if (lVar11 == 0) {
    uVar9 = FUN_140c54336();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x88) = lVar11;
  }
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (lVar10 == 0) {
    if ((*plVar18 != 0) && (lVar11 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
        *(longlong *)(param_1 + 0x90) = lVar10;
        if (lVar10 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x88);
          goto LAB_140c527ba;
        }
      }
    }
LAB_140c5281b:
    plVar18 = (longlong *)(param_1 + 200);
  }
  else {
LAB_140c527ba:
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x88) = lVar11;
      lVar10 = *(longlong *)(param_1 + 0x90);
      if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
        plVar17 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar10 = FUN_144aff482(uVar9,plVar18);
        }
        *(longlong *)(param_1 + 0x90) = lVar10;
      }
    }
    plVar17 = *(longlong **)(lVar10 + 0x18);
    if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
    }
    FUN_1447a1fc0(plVar17);
    plVar17 = *(longlong **)(lVar10 + 0x18);
    pcVar4 = *(code **)(*plVar17 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = plVar17 + 3;
      if (plVar17[5] != 0) {
        plVar12 = (longlong *)(plVar17[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar17 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar17);
    }
    if ((int)plVar12[1] < 2) goto LAB_140c5281b;
    lVar11 = *(longlong *)(param_1 + 0x88);
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x88) = lVar11;
    }
    lVar10 = *(longlong *)(param_1 + 0x90);
    if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
      }
      *(longlong *)(param_1 + 0x90) = lVar10;
    }
    plVar18 = (longlong *)(lVar10 + 0x18);
  }
  plVar12 = local_c8;
  plVar17 = (longlong *)*plVar18;
  if (local_c8 != plVar17) {
    local_c8 = plVar17;
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  local_c0 = (undefined4)plVar18[1];
  lVar11 = *(longlong *)(param_1 + 0x48);
  if (lVar11 == 0) {
    uVar9 = FUN_140c54336();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x48) = lVar11;
  }
  plVar18 = (longlong *)(param_1 + 0x40);
  lVar10 = *(longlong *)(param_1 + 0x50);
  if (lVar10 == 0) {
    if ((lVar11 != 0) && (*plVar18 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
        *(longlong *)(param_1 + 0x50) = lVar10;
        if (lVar10 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x48);
          goto LAB_140c528bd;
        }
      }
    }
LAB_140c5296a:
    lVar11 = *(longlong *)(param_1 + 0x48);
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x48) = lVar11;
    }
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (lVar10 == 0) {
      if ((*plVar18 != 0) && (lVar11 != 0)) {
        plVar17 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar10 = FUN_144aff482(uVar9,plVar18);
          *(longlong *)(param_1 + 0x50) = lVar10;
          if (lVar10 != 0) {
            lVar11 = *(longlong *)(param_1 + 0x48);
            goto LAB_140c52984;
          }
        }
      }
    }
    else {
LAB_140c52984:
      if (lVar11 == 0) {
        uVar9 = FUN_140c54336();
        lVar11 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x48) = lVar11;
        lVar10 = *(longlong *)(param_1 + 0x50);
        if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
          plVar17 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar17 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
            lVar10 = FUN_144aff482(uVar9,plVar18);
          }
          *(longlong *)(param_1 + 0x50) = lVar10;
        }
      }
      plVar17 = *(longlong **)(lVar10 + 0x28);
      if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
        plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
      }
      FUN_1447a1fc0(plVar17);
      plVar17 = *(longlong **)(lVar10 + 0x28);
      pcVar4 = *(code **)(*plVar17 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar12 = plVar17 + 3;
        if (plVar17[5] != 0) {
          plVar12 = (longlong *)(plVar17[5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar12 = plVar17 + 2;
      }
      else {
        plVar12 = (longlong *)(*pcVar4)(plVar17);
      }
      if (1 < (int)plVar12[1]) {
        lVar11 = *(longlong *)(param_1 + 0x48);
        if (lVar11 == 0) {
          uVar9 = FUN_140c54336();
          lVar11 = FUN_14477b664(uVar9);
          *(longlong *)(param_1 + 0x48) = lVar11;
        }
        lVar10 = *(longlong *)(param_1 + 0x50);
        if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
          plVar17 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar17 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
            lVar10 = FUN_144aff482(uVar9,plVar18);
          }
          *(longlong *)(param_1 + 0x50) = lVar10;
        }
        plVar12 = local_f8;
        plVar17 = *(longlong **)(lVar10 + 0x28);
        if (local_f8 != plVar17) {
          local_f8 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        local_f0 = *(undefined4 *)(lVar10 + 0x30);
        goto LAB_140c52a3d;
      }
    }
    plVar12 = local_f8;
    plVar17 = *(longlong **)(param_1 + 0x98);
    if (local_f8 != plVar17) {
      local_f8 = plVar17;
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    local_f0 = *(undefined4 *)(param_1 + 0xa0);
  }
  else {
LAB_140c528bd:
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x48) = lVar11;
      lVar10 = *(longlong *)(param_1 + 0x50);
      if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
        plVar17 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar10 = FUN_144aff482(uVar9,plVar18);
        }
        *(longlong *)(param_1 + 0x50) = lVar10;
      }
    }
    plVar17 = *(longlong **)(lVar10 + 0x28);
    if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
    }
    FUN_1447a1fc0(plVar17);
    plVar17 = *(longlong **)(lVar10 + 0x28);
    pcVar4 = *(code **)(*plVar17 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = plVar17 + 3;
      if (plVar17[5] != 0) {
        plVar12 = (longlong *)(plVar17[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar17 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar17);
    }
    if ((int)plVar12[1] < 2) goto LAB_140c5296a;
    plVar17 = *(longlong **)(param_1 + 200);
    if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
    }
    FUN_1447a1fc0(plVar17);
    plVar17 = *(longlong **)(param_1 + 200);
    pcVar4 = *(code **)(*plVar17 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = plVar17 + 3;
      if (plVar17[5] != 0) {
        plVar12 = (longlong *)(plVar17[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar17 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar17);
    }
    if ((int)plVar12[1] < 2) goto LAB_140c5296a;
    local_188 = *(longlong **)(param_1 + 200);
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 8))();
    }
    local_180 = *(undefined4 *)(param_1 + 0xd0);
    lVar11 = *(longlong *)(param_1 + 0x48);
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x48) = lVar11;
    }
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
      }
      *(longlong *)(param_1 + 0x50) = lVar10;
    }
    FUN_14023409e(&local_198,lVar10 + 0x28,1);
    local_60 = (undefined2 *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,&local_188);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_198;
    local_88 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_178,&local_90,&local_70);
    FUN_14007f2db(local_70,uStack_68 & 0xffffffff);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_190 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
    }
    FUN_140008f88(&local_f8,local_178);
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
  }
LAB_140c52a3d:
  lVar11 = *(longlong *)(param_1 + 0x48);
  if (lVar11 == 0) {
    uVar9 = FUN_140c54336();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x48) = lVar11;
  }
  lVar10 = *(longlong *)(param_1 + 0x50);
  if (lVar10 == 0) {
    if ((*plVar18 != 0) && (lVar11 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
        *(longlong *)(param_1 + 0x50) = lVar10;
        if (lVar10 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x48);
          goto LAB_140c52a57;
        }
      }
    }
LAB_140c52b04:
    lVar11 = *(longlong *)(param_1 + 0x48);
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x48) = lVar11;
    }
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (lVar10 == 0) {
      if ((*plVar18 != 0) && (lVar11 != 0)) {
        plVar17 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar10 = FUN_144aff482(uVar9,plVar18);
          *(longlong *)(param_1 + 0x50) = lVar10;
          if (lVar10 != 0) {
            lVar11 = *(longlong *)(param_1 + 0x48);
            goto LAB_140c52b1e;
          }
        }
      }
    }
    else {
LAB_140c52b1e:
      if (lVar11 == 0) {
        uVar9 = FUN_140c54336();
        lVar11 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x48) = lVar11;
        lVar10 = *(longlong *)(param_1 + 0x50);
        if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
          plVar17 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar17 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
            lVar10 = FUN_144aff482(uVar9,plVar18);
          }
          *(longlong *)(param_1 + 0x50) = lVar10;
        }
      }
      plVar17 = *(longlong **)(lVar10 + 0x18);
      if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
        plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
      }
      FUN_1447a1fc0(plVar17);
      plVar17 = *(longlong **)(lVar10 + 0x18);
      pcVar4 = *(code **)(*plVar17 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar12 = plVar17 + 3;
        if (plVar17[5] != 0) {
          plVar12 = (longlong *)(plVar17[5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar12 = plVar17 + 2;
      }
      else {
        plVar12 = (longlong *)(*pcVar4)(plVar17);
      }
      if (1 < (int)plVar12[1]) {
        lVar11 = *(longlong *)(param_1 + 0x48);
        if (lVar11 == 0) {
          uVar9 = FUN_140c54336();
          lVar11 = FUN_14477b664(uVar9);
          *(longlong *)(param_1 + 0x48) = lVar11;
        }
        lVar10 = *(longlong *)(param_1 + 0x50);
        if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
          plVar17 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar17 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
            lVar10 = FUN_144aff482(uVar9,plVar18);
          }
          *(longlong *)(param_1 + 0x50) = lVar10;
        }
        plVar17 = local_e8;
        plVar18 = *(longlong **)(lVar10 + 0x18);
        if (local_e8 != plVar18) {
          local_e8 = plVar18;
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 8))();
          }
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        local_e0 = *(undefined4 *)(lVar10 + 0x20);
        goto LAB_140c52bd5;
      }
    }
    plVar17 = local_e8;
    plVar18 = *(longlong **)(param_1 + 0xa8);
    if (local_e8 != plVar18) {
      local_e8 = plVar18;
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    local_e0 = *(undefined4 *)(param_1 + 0xb0);
  }
  else {
LAB_140c52a57:
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x48) = lVar11;
      lVar10 = *(longlong *)(param_1 + 0x50);
      if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
        plVar17 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar10 = FUN_144aff482(uVar9,plVar18);
        }
        *(longlong *)(param_1 + 0x50) = lVar10;
      }
    }
    plVar17 = *(longlong **)(lVar10 + 0x18);
    if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
    }
    FUN_1447a1fc0(plVar17);
    plVar17 = *(longlong **)(lVar10 + 0x18);
    pcVar4 = *(code **)(*plVar17 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = plVar17 + 3;
      if (plVar17[5] != 0) {
        plVar12 = (longlong *)(plVar17[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar17 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar17);
    }
    if ((int)plVar12[1] < 2) goto LAB_140c52b04;
    plVar17 = *(longlong **)(param_1 + 200);
    if (*(code **)(*plVar17 + 0x50) != FUN_144828418) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x50))();
    }
    FUN_1447a1fc0(plVar17);
    plVar17 = *(longlong **)(param_1 + 200);
    pcVar4 = *(code **)(*plVar17 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = plVar17 + 3;
      if (plVar17[5] != 0) {
        plVar12 = (longlong *)(plVar17[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar17 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar17);
    }
    if ((int)plVar12[1] < 2) goto LAB_140c52b04;
    local_1a8 = *(longlong **)(param_1 + 200);
    if (local_1a8 != (longlong *)0x0) {
      (**(code **)(*local_1a8 + 8))();
    }
    local_1a0 = *(undefined4 *)(param_1 + 0xd0);
    lVar11 = *(longlong *)(param_1 + 0x48);
    if (lVar11 == 0) {
      uVar9 = FUN_140c54336();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x48) = lVar11;
    }
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*plVar18 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar10 = FUN_144aff482(uVar9,plVar18);
      }
      *(longlong *)(param_1 + 0x50) = lVar10;
    }
    FUN_14023409e(&local_1b8,lVar10 + 0x18,1);
    local_60 = (undefined2 *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,&local_1a8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_1b8;
    local_88 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_178,&local_90,&local_70);
    FUN_14007f2db(local_70,uStack_68 & 0xffffffff);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_1b0 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b0 + 0x10))(local_1b0);
        }
      }
    }
    if (local_1a8 != (longlong *)0x0) {
      (**(code **)(*local_1a8 + 0x10))();
    }
    FUN_140008f88(&local_e8,local_178);
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
  }
LAB_140c52bd5:
  local_100 = *(undefined4 *)(param_1 + 0xd8);
  local_b8 = *(undefined8 *)(param_1 + 0x58);
  local_b0 = *(undefined4 *)(param_1 + 0x60);
  uStack_ac = *(undefined4 *)(param_1 + 100);
  uStack_a8 = *(undefined4 *)(param_1 + 0x68);
  uStack_a4 = *(undefined4 *)(param_1 + 0x6c);
  if (&local_a0 != (void **)(param_1 + 0x70)) {
    iVar16 = *(int *)(param_1 + 0x78);
    _Src = *(void **)(param_1 + 0x70);
    local_98 = iVar16;
    if (iVar16 == 0 && local_94 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,iVar16);
      if (iVar16 != 0) {
        memcpy(local_a0,_Src,(longlong)iVar16 * 2);
      }
    }
  }
  local_70 = *(undefined2 **)(param_1 + 0x10);
  FUN_1400021e4(&local_70,&local_60);
  puVar14 = local_60;
  local_140 = (uint)uStack_58;
  uVar8 = (uint)uStack_58 - 1;
  if ((uint)uStack_58 == 0) {
    uVar8 = 0;
  }
  if (0 < (int)uVar8) {
    uVar13 = 0;
    do {
      local_60[uVar13] = (ushort)((ushort)local_60[uVar13] - 0x41 < 0x1a) * 0x20 + local_60[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar8 != uVar13);
  }
  uVar3 = uStack_58._4_4_;
  local_13c = uStack_58._4_4_;
  local_60 = (undefined2 *)0x0;
  uStack_58 = 0;
  bVar19 = local_148 != (undefined2 *)0x0;
  local_148 = puVar14;
  if (bVar19) {
    FUN_1400020a8();
    local_148 = puVar14;
    local_13c = uVar3;
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1400b22c2(&local_60,"reward_");
  iVar16 = (uint)uStack_58 + -1;
  puVar14 = local_60;
  if ((uint)uStack_58 == 0) {
    puVar14 = &DAT_149dfb77a;
    iVar16 = 0;
  }
  FUN_140c540b4(&local_148,puVar14,iVar16,1);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_70,"tint-");
  uVar13 = uStack_68;
  puVar14 = local_148;
  iVar16 = (int)uStack_68;
  if ((int)uStack_68 < 2) {
    local_60 = (undefined2 *)0x0;
    lVar11 = (longlong)(int)local_140;
    uStack_58 = CONCAT44(uStack_58._4_4_,local_140);
    if (lVar11 == 0) {
      uStack_58 = (ulonglong)local_140;
    }
    else {
      FUN_1446dd670(&local_60,local_140,0);
      memcpy(local_60,puVar14,lVar11 * 2);
    }
  }
  else {
    iVar15 = local_140 - 1;
    if (local_140 == 0) {
      iVar15 = 0;
    }
    local_60 = local_70;
    iVar6 = uStack_68._4_4_;
    local_70 = (undefined2 *)0x0;
    uStack_68 = 0;
    uStack_58 = uVar13;
    iVar2 = iVar15 + iVar16;
    if (iVar2 < iVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar15);
    }
    if (iVar6 < iVar2) {
      FUN_1446f8c06(&local_60);
    }
    FUN_1400020e8(&local_60,local_148,iVar15);
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_158 = local_60;
  uStack_150 = uStack_58;
  local_60 = (undefined2 *)0x0;
  uStack_58 = 0;
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  if (lVar11 == 0) {
    uVar9 = FUN_140c5407a();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x30) = lVar11;
  }
  plVar18 = (longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((*plVar18 != 0) && (lVar11 != 0)) {
      plVar17 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar17 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 != '\0')) {
        uVar9 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar11 = FUN_144aff482(uVar9,plVar18);
        *(longlong *)(param_1 + 0x38) = lVar11;
        local_138 = lVar11 != 0;
        if (lVar11 == 0) goto LAB_140c52e7d;
        goto LAB_140c533f4;
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    local_138 = false;
  }
  else {
    local_138 = true;
LAB_140c533f4:
    local_70 = (undefined2 *)*plVar18;
    FUN_1400021e4(&local_70,&local_60);
    puVar14 = local_60;
    local_118 = (uint)uStack_58;
    uVar8 = (uint)uStack_58 - 1;
    if ((uint)uStack_58 == 0) {
      uVar8 = 0;
    }
    if (0 < (int)uVar8) {
      uVar13 = 0;
      do {
        local_60[uVar13] =
             (ushort)((ushort)local_60[uVar13] - 0x41 < 0x1a) * 0x20 + local_60[uVar13];
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
    uVar3 = uStack_58._4_4_;
    local_114 = uStack_58._4_4_;
    local_60 = (undefined2 *)0x0;
    uStack_58 = 0;
    bVar19 = local_120 != (undefined2 *)0x0;
    local_120 = puVar14;
    if (bVar19) {
      FUN_1400020a8();
      local_120 = puVar14;
      local_114 = uVar3;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1400b22c2(&local_60,"reward_");
    iVar16 = (uint)uStack_58 + -1;
    puVar14 = local_60;
    if ((uint)uStack_58 == 0) {
      puVar14 = &DAT_149dfb77a;
      iVar16 = 0;
    }
    FUN_140c540b4(&local_120,puVar14,iVar16,1);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_70,"tint-");
    uVar13 = uStack_68;
    puVar14 = local_120;
    iVar16 = (int)uStack_68;
    if ((int)uStack_68 < 2) {
      local_60 = (undefined2 *)0x0;
      lVar11 = (longlong)(int)local_118;
      uStack_58 = CONCAT44(uStack_58._4_4_,local_118);
      if (lVar11 == 0) {
        uStack_58 = (ulonglong)local_118;
      }
      else {
        FUN_1446dd670(&local_60,local_118,0);
        memcpy(local_60,puVar14,lVar11 * 2);
      }
    }
    else {
      iVar15 = local_118 - 1;
      if (local_118 == 0) {
        iVar15 = 0;
      }
      local_60 = local_70;
      iVar6 = uStack_68._4_4_;
      local_70 = (undefined2 *)0x0;
      uStack_68 = 0;
      uStack_58 = uVar13;
      iVar2 = iVar15 + iVar16;
      if (iVar2 < iVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar15);
      }
      if (iVar6 < iVar2) {
        FUN_1446f8c06(&local_60);
      }
      FUN_1400020e8(&local_60,local_120,iVar15);
    }
    if (local_130 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_130 = local_60;
    uStack_128 = uStack_58;
    local_60 = (undefined2 *)0x0;
    uStack_58 = 0;
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140c52e7d:
  FUN_140c541bc(param_2,&local_168);
  FUN_1407dde54(&local_168);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c5407a FUN_140c5407a body=57 status=ok
// SIG undefined FUN_140c5407a(void)

void FUN_140c5407a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb687b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb687b8 = FUN_140002ddd(FUN_14651bc7b,uVar1,L"UIDisplayDataDef_RewardTier");
  }
  return;
}



// FUNCTION 140c540b4 FUN_140c540b4 body=264 status=ok
// SIG undefined FUN_140c540b4(void)

undefined8 FUN_140c540b4(undefined8 *param_1,wchar_t *param_2,uint param_3,int param_4)

{
  int iVar1;
  ulonglong _MaxCount;
  undefined2 *puVar2;
  wchar_t *_Str1;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  if (param_3 != 0) {
    _MaxCount = (ulonglong)param_3;
    if (param_4 == 1) {
      if (0 < (int)param_3) {
        iVar3 = *(int *)(param_1 + 1);
        if (iVar3 == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        else {
          puVar2 = (undefined2 *)*param_1;
        }
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)((longlong)puVar2 + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)((longlong)param_2 + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_140c54155;
LAB_140c54108:
          _MaxCount = _MaxCount - 1;
          if (_MaxCount == 0) goto LAB_140c54155;
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_140c54108;
        }
        if (uVar7 != uVar9) {
          return 0;
        }
LAB_140c54155:
        uVar4 = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        if ((int)param_3 < (int)uVar4) {
          uVar4 = param_3;
        }
        uVar5 = CONCAT71((uint7)(uint3)(param_3 >> 8),1);
        if (0 < (int)uVar4) {
          if (iVar3 - uVar4 != 0) {
            memmove((void *)*param_1,(void *)((longlong)*param_1 + (ulonglong)uVar4 * 2),
                    (longlong)(int)(iVar3 - uVar4) * 2);
            iVar3 = *(int *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = iVar3 - uVar4;
          FUN_1449649ae(param_1);
          return uVar5;
        }
        return uVar5;
      }
    }
    else if (0 < (int)param_3) {
      iVar3 = *(int *)(param_1 + 1);
      if (iVar3 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)*param_1;
      }
      iVar1 = wcsncmp(_Str1,param_2,_MaxCount);
      if (iVar1 == 0) goto LAB_140c54155;
    }
  }
  return 0;
}



// FUNCTION 140c541bc FUN_140c541bc body=377 status=ok
// SIG undefined FUN_140c541bc(void)

undefined8 * FUN_140c541bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
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
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[9] = param_2[9];
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_2[10] = 0;
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  FUN_14023423e(param_1 + 0xe,param_2 + 0xe);
  FUN_14023423e(param_1 + 0x10,param_2 + 0x10);
  FUN_14023423e(param_1 + 0x12,param_2 + 0x12);
  FUN_14023423e(param_1 + 0x14,param_2 + 0x14);
  param_1[0x16] = param_2[0x16];
  uVar1 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar1;
  param_1[0x19] = 0;
  param_1[0x19] = param_2[0x19];
  param_2[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_2[0x1a] = 0;
  return param_1;
}



// FUNCTION 140c54336 FUN_140c54336 body=57 status=ok
// SIG undefined FUN_140c54336(void)

void FUN_140c54336(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91ec8 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91ec8 = FUN_140002ddd(FUN_14656b583,uVar1,L"GbxUIDisplayDataDef_HeaderBodyText");
  }
  return;
}



// FUNCTION 140c54370 FUN_140c54370 body=489 status=ok
// SIG undefined FUN_140c54370(void)

void FUN_140c54370(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    lVar4 = *param_2;
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar10 = (uint)lVar4 & 0xffff;
    lVar9 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x168);
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 0x170) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar10) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x128) + (longlong)iVar11 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar11 * 0x20) == lVar4) {
          if ((lVar9 != 0) && (lVar9 != -8)) {
            puVar13 = *(undefined8 **)(lVar9 + 8);
            plVar12 = *(longlong **)(lVar9 + 0x10);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            LeaveCriticalSection(lpCriticalSection);
            if (puVar13 != (undefined8 *)0x0) goto LAB_140c5445b;
            goto LAB_140c544bb;
          }
          break;
        }
        iVar11 = *(int *)(lVar9 + 0x18);
      } while (iVar11 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c544df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
LAB_140c5445b:
  uVar5 = *puVar13;
  uVar3 = *(uint *)(param_3 + 1);
  *(uint *)(param_3 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_3 + 0xc) < uVar3 + 1) {
    FUN_1446f84a2(param_3,(ulonglong)uVar3);
  }
  memmove((void *)((longlong)*param_3 + 8),(void *)*param_3,(ulonglong)uVar3 << 3);
  *(undefined8 *)*param_3 = uVar5;
  puVar6 = (undefined8 *)puVar13[7];
  plVar7 = (longlong *)puVar13[8];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (plVar7 == plVar12) {
    if (plVar12 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar8 = plVar12;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar11 = *piVar2;
        UNLOCK();
        plVar1 = plVar7;
        plVar7 = plVar12;
        goto joined_r0x000140c54549;
      }
    }
  }
  else {
    plVar8 = plVar7;
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
        iVar11 = *piVar2;
        UNLOCK();
        plVar1 = plVar12;
joined_r0x000140c54549:
        plVar8 = plVar7;
        if (iVar11 == 0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
    }
  }
  plVar12 = plVar8;
  puVar13 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_140c544bb:
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar12 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c5452d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x10))(plVar12);
          return;
        }
      }
    }
    return;
  }
  goto LAB_140c5445b;
}



// FUNCTION 140c5455a FUN_140c5455a body=951 status=ok
// SIG undefined FUN_140c5455a(void)

longlong FUN_140c5455a(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1400b22c2(param_1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x10,"tint-common");
  FUN_1400b22c2(param_1 + 0x20,"common");
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1400b22c2(param_1 + 0x38,"tint-common");
  FUN_1400b22c2(param_1 + 0x48,"common");
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x70) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x78) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x80) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x88) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x90) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x98) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0xa0) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0xa8) = DAT_14c844848;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return param_1;
}



// FUNCTION 140c54912 FUN_140c54912 body=45 status=ok
// SIG undefined FUN_140c54912(void)

void FUN_140c54912(undefined8 param_1,longlong param_2)

{
  FUN_140c5493f(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c5493f FUN_140c5493f body=48 status=ok
// SIG undefined FUN_140c5493f(void)

void FUN_140c5493f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c5497e FUN_140c5497e body=166 status=ok
// SIG undefined FUN_140c5497e(void)

undefined8 * FUN_140c5497e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b91ce20;
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c54a24 FUN_140c54a24 body=494 status=ok
// SIG undefined FUN_140c54a24(void)

ulonglong FUN_140c54a24(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar1 = (int)param_2[1];
  uVar3 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar3 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar5) & 0xff) * 4);
      uVar3 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar4 != (int)lVar6);
  }
  iVar1 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar1 == -1) {
LAB_140c54af0:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar6 = *param_1 + (longlong)local_4c * 0x40;
    plVar8 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0x15;
    *(undefined8 *)(lVar6 + 0x18) = 1;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 1;
    if (param_1[0xc] == lVar6) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    *(undefined1 *)(param_1[10] + lVar6) = 0;
    *plVar8 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar1 * 0x40;
    if (lVar6 == 0) goto LAB_140c54af0;
    uVar3 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0x15) goto LAB_140c54b7b;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar1 * 0x40 + 0x10);
    uVar3 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_140c54b7b;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = param_4;
  uVar3 = FUN_140c54c14(param_1,plVar8,local_60);
  if ((uVar3 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_140c54b7b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140c54c14 FUN_140c54c14 body=218 status=ok
// SIG undefined FUN_140c54c14(void)

undefined8 FUN_140c54c14(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else if ((int)param_2[2] == 0x15) {
    if (param_2[1] == 1) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
    else {
      uVar1 = 0x200000;
    }
  }
  else {
    uVar1 = 0x100000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c54cf0 FUN_140c54cf0 body=136 status=ok
// SIG undefined FUN_140c54cf0(void)

uint * FUN_140c54cf0(uint *param_1)

{
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  uint local_3c;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x67452301;
  uStack_9c = 0xefcdab89;
  uStack_98 = 0x98badcfe;
  uStack_94 = 0x10325476;
  local_90 = 0xc3d2e1f0;
  local_88 = 0;
  FUN_140c54e34(&local_a0);
  FUN_140c54d7a(&local_a0);
  *param_1 = local_2c ^ local_3c;
  *(undefined8 *)(param_1 + 1) = local_38;
  param_1[3] = local_30;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c54d7a FUN_140c54d7a body=184 status=ok
// SIG undefined FUN_140c54d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c54d7a(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x18);
  auVar5._8_4_ = (uint)lVar3;
  auVar5._0_8_ = lVar3;
  auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
  auVar4._0_8_ = lVar3 << 3;
  auVar4._8_8_ = auVar5._8_8_ << 3;
  auVar5 = pshufb(auVar4,_DAT_149e313b0);
  local_20 = auVar5._0_8_;
  uVar2 = (ulonglong)((uint)lVar3 & 0x3f);
  FUN_140c54e34(local_20,&DAT_149e34680,((ulonglong)(0x37 < uVar2) << 6 | 0x38) - uVar2);
  FUN_140c54e34(param_1,&local_20,8);
  bVar1 = 0;
  lVar3 = 0;
  do {
    *(char *)(param_1 + 100 + lVar3) =
         (char)(*(uint *)(param_1 + (ulonglong)((uint)lVar3 & 0xfffffffc)) >> (~bVar1 & 0x18));
    lVar3 = lVar3 + 1;
    bVar1 = bVar1 + 8;
  } while (lVar3 != 0x14);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c54e34 FUN_140c54e34 body=196 status=ok
// SIG undefined FUN_140c54e34(void)

void FUN_140c54e34(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = (ulonglong)((uint)*(longlong *)(param_1 + 0x18) & 0x3f);
  *(ulonglong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
  if (uVar1 != 0) {
    _Size = 0x40 - uVar1;
    if (param_3 < _Size) goto LAB_140c54e77;
    memcpy((void *)(param_1 + uVar1 + 0x24),param_2,_Size);
    FUN_140c54ef8(param_1,param_1 + 0x24,0x40);
    param_2 = (void *)((longlong)param_2 + _Size);
    param_3 = param_3 - _Size;
  }
  if (0x3f < param_3) {
    FUN_140c54ef8(param_1,param_2,param_3);
    param_2 = (void *)((longlong)param_2 + (param_3 & 0xffffffffffffffc0));
    param_3 = (ulonglong)((uint)param_3 & 0x3f);
  }
  uVar1 = 0;
LAB_140c54e77:
  memcpy((void *)(param_1 + uVar1 + 0x24),param_2,param_3);
  return;
}



// FUNCTION 140c54ef8 FUN_140c54ef8 body=5042 status=ok
// SIG undefined FUN_140c54ef8(void)

/* WARNING: Removing unreachable block (ram,0x000140c54f8e) */
/* WARNING: Removing unreachable block (ram,0x000140c54f7c) */

void FUN_140c54ef8(uint *param_1,uint *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8732a8) && (FUN_144b3d300(&DAT_14c8732a8), DAT_14c8732a8 == -1)) {
    lVar1 = cpuid_Version_info(1);
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
    DAT_14c8732a4 =
         (byte)((uint)*(undefined4 *)(lVar2 + 4) >> 0x1d) & (byte)(*(uint *)(lVar1 + 0xc) >> 9) & 1;
    _Init_thread_footer(&DAT_14c8732a8,*(undefined4 *)(lVar2 + 8));
  }
  if (DAT_14c8732a4 != 1) {
    uVar13 = *param_1;
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar22 = param_1[3];
    uVar10 = param_1[4];
    for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
      uVar14 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar28 = param_2[4];
      uVar16 = param_2[5];
      uVar17 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar14 = (uVar13 << 5 | uVar13 >> 0x1b) + uVar10 + ((uVar22 ^ uVar9) & uVar8 ^ uVar22) +
               0x5a827999 + uVar17;
      uVar18 = uVar8 << 0x1e | uVar8 >> 2;
      uVar11 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar23 = ((uVar18 ^ uVar9) & uVar13 ^ uVar9) + uVar22 + uVar11 + 0x5a827999 +
               (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar27 = uVar13 << 0x1e | uVar13 >> 2;
      uVar31 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar6 = ((uVar18 ^ uVar27) & uVar14 ^ uVar18) + uVar9 + uVar31 + 0x5a827999 +
              (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar15 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar19 = uVar18 + uVar3 + ((uVar15 ^ uVar27) & uVar23 ^ uVar27) + 0x5a827999 +
               (uVar6 * 0x20 | uVar6 >> 0x1b);
      uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar4 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      uVar14 = param_2[6];
      uVar18 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar28 = uVar27 + uVar4 + ((uVar23 ^ uVar15) & uVar6 ^ uVar15) + 0x5a827999 +
               (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar5 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
      uVar16 = uVar15 + uVar5 + ((uVar18 ^ uVar23) & uVar19 ^ uVar23) + 0x5a827999 +
               (uVar28 * 0x20 | uVar28 >> 0x1b);
      uVar6 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar12 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar27 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar19 = uVar23 + uVar12 + ((uVar6 ^ uVar18) & uVar28 ^ uVar18) + 0x5a827999 +
               (uVar16 * 0x20 | uVar16 >> 0x1b);
      uVar14 = param_2[7];
      uVar28 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar18 = uVar18 + uVar28 + ((uVar27 ^ uVar6) & uVar16 ^ uVar6) + 0x5a827999 +
               (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar15 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar14 = param_2[8];
      uVar16 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar23 = uVar6 + uVar16 + ((uVar15 ^ uVar27) & uVar19 ^ uVar27) + 0x5a827999 +
               (uVar18 * 0x20 | uVar18 >> 0x1b);
      uVar24 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar14 = param_2[9];
      uVar6 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar29 = uVar27 + uVar6 + ((uVar24 ^ uVar15) & uVar18 ^ uVar15) + 0x5a827999 +
               (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar14 = param_2[10];
      uVar27 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar23 = uVar15 + uVar27 + ((uVar19 ^ uVar24) & uVar23 ^ uVar24) + 0x5a827999 +
               (uVar29 * 0x20 | uVar29 >> 0x1b);
      uVar14 = param_2[0xb];
      uVar18 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar25 = uVar24 + uVar18 + ((uVar20 ^ uVar19) & uVar29 ^ uVar19) + 0x5a827999 +
               (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar30 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar14 = param_2[0xc];
      uVar15 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar19 = uVar19 + uVar15 + ((uVar30 ^ uVar20) & uVar23 ^ uVar20) + 0x5a827999 +
               (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar29 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar14 = param_2[0xd];
      uVar24 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar21 = uVar20 + uVar24 + ((uVar29 ^ uVar30) & uVar25 ^ uVar30) + 0x5a827999 +
               (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar26 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar14 = param_2[0xe];
      uVar20 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar23 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar30 = uVar30 + uVar20 + ((uVar26 ^ uVar29) & uVar19 ^ uVar29) + 0x5a827999 +
               (uVar21 * 0x20 | uVar21 >> 0x1b);
      uVar14 = param_2[0xf];
      uVar19 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar25 = uVar29 + uVar19 + ((uVar23 ^ uVar26) & uVar21 ^ uVar26) + 0x5a827999 +
               (uVar30 * 0x20 | uVar30 >> 0x1b);
      uVar14 = uVar16 ^ uVar24 ^ uVar17 ^ uVar31;
      uVar17 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar21 = uVar26 + uVar14 + ((uVar17 ^ uVar23) & uVar30 ^ uVar23) + 0x5a827999 +
               (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar11 = uVar6 ^ uVar20 ^ uVar11 ^ uVar3;
      uVar30 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar23 = uVar23 + uVar11 + ((uVar30 ^ uVar17) & uVar25 ^ uVar17) + 0x5a827999 +
               (uVar21 * 0x20 | uVar21 >> 0x1b);
      uVar29 = uVar27 ^ uVar19 ^ uVar31 ^ uVar4;
      uVar25 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar29 = uVar29 << 1 | (uint)((int)uVar29 < 0);
      uVar26 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar17 = uVar17 + uVar29 + ((uVar25 ^ uVar30) & uVar21 ^ uVar30) + 0x5a827999 +
               (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar3 = uVar3 ^ uVar5 ^ uVar18 ^ uVar14;
      uVar31 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar21 = uVar30 + uVar31 + ((uVar26 ^ uVar25) & uVar23 ^ uVar25) + 0x5a827999 +
               (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar4 = uVar4 ^ uVar12 ^ uVar15 ^ uVar11;
      uVar30 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar4 = uVar25 + uVar30 + (uVar3 ^ uVar26 ^ uVar17) + 0x6ed9eba1 +
              (uVar21 * 0x20 | uVar21 >> 0x1b);
      uVar25 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar5 = uVar5 ^ uVar28 ^ uVar24 ^ uVar29;
      uVar32 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar17 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar5 = uVar26 + uVar32 + (uVar25 ^ uVar3 ^ uVar21) + 0x6ed9eba1 +
              (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar23 = uVar12 ^ uVar16 ^ uVar20 ^ uVar31;
      uVar33 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      uVar3 = uVar3 + uVar33 + (uVar17 ^ uVar25 ^ uVar4) + 0x6ed9eba1 +
              (uVar5 * 0x20 | uVar5 >> 0x1b);
      uVar23 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = uVar28 ^ uVar6 ^ uVar19 ^ uVar30;
      uVar34 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar28 = uVar25 + uVar34 + (uVar23 ^ uVar17 ^ uVar5) + 0x6ed9eba1 +
               (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar25 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar4 = uVar16 ^ uVar27 ^ uVar14 ^ uVar32;
      uVar21 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar16 = uVar17 + uVar21 + (uVar25 ^ uVar23 ^ uVar3) + 0x6ed9eba1 +
               (uVar28 * 0x20 | uVar28 >> 0x1b);
      uVar3 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar4 = uVar6 ^ uVar18 ^ uVar11 ^ uVar33;
      uVar5 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar12 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar28 = uVar23 + uVar5 + (uVar3 ^ uVar25 ^ uVar28) + 0x6ed9eba1 +
               (uVar16 * 0x20 | uVar16 >> 0x1b);
      uVar4 = uVar27 ^ uVar15 ^ uVar29 ^ uVar34;
      uVar23 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar27 = uVar25 + uVar23 + (uVar12 ^ uVar3 ^ uVar16) + 0x6ed9eba1 +
               (uVar28 * 0x20 | uVar28 >> 0x1b);
      uVar25 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar4 = uVar18 ^ uVar24 ^ uVar31 ^ uVar21;
      uVar17 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar3 = uVar3 + uVar17 + (uVar25 ^ uVar12 ^ uVar28) + 0x6ed9eba1 +
              (uVar27 * 0x20 | uVar27 >> 0x1b);
      uVar6 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar4 = uVar15 ^ uVar20 ^ uVar30 ^ uVar5;
      uVar16 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar18 = uVar12 + uVar16 + (uVar6 ^ uVar25 ^ uVar27) + 0x6ed9eba1 +
               (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar12 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar4 = uVar24 ^ uVar19 ^ uVar32 ^ uVar23;
      uVar28 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar24 = uVar25 + uVar28 + (uVar12 ^ uVar6 ^ uVar3) + 0x6ed9eba1 +
               (uVar18 * 0x20 | uVar18 >> 0x1b);
      uVar3 = uVar20 ^ uVar14 ^ uVar33 ^ uVar17;
      uVar15 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar6 = uVar6 + uVar15 + (uVar4 ^ uVar12 ^ uVar18) + 0x6ed9eba1 +
              (uVar24 * 0x20 | uVar24 >> 0x1b);
      uVar27 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar3 = uVar19 ^ uVar11 ^ uVar34 ^ uVar16;
      uVar18 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar19 = uVar12 + uVar18 + (uVar27 ^ uVar4 ^ uVar24) + 0x6ed9eba1 +
               (uVar6 * 0x20 | uVar6 >> 0x1b);
      uVar24 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar14 = uVar14 ^ uVar29 ^ uVar21 ^ uVar28;
      uVar26 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar4 + uVar26 + (uVar24 ^ uVar27 ^ uVar6) + 0x6ed9eba1 +
               (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar3 = uVar11 ^ uVar31 ^ uVar5 ^ uVar15;
      uVar6 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar12 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar19 = uVar27 + uVar6 + (uVar4 ^ uVar24 ^ uVar19) + 0x6ed9eba1 +
               (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar3 = uVar29 ^ uVar30 ^ uVar23 ^ uVar18;
      uVar11 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar27 = uVar24 + uVar11 + (uVar12 ^ uVar4 ^ uVar14) + 0x6ed9eba1 +
               (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar14 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar3 = uVar31 ^ uVar32 ^ uVar17 ^ uVar26;
      uVar24 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar3 = uVar4 + uVar24 + (uVar14 ^ uVar12 ^ uVar19) + 0x6ed9eba1 +
              (uVar27 * 0x20 | uVar27 >> 0x1b);
      uVar4 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar19 = uVar30 ^ uVar33 ^ uVar16 ^ uVar6;
      uVar30 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar20 = uVar12 + uVar30 + (uVar4 ^ uVar14 ^ uVar27) + 0x6ed9eba1 +
               (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar19 = uVar32 ^ uVar34 ^ uVar28 ^ uVar11;
      uVar31 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar27 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar3 = uVar14 + uVar31 + (uVar29 ^ uVar4 ^ uVar3) + 0x6ed9eba1 +
              (uVar20 * 0x20 | uVar20 >> 0x1b);
      uVar14 = uVar33 ^ uVar21 ^ uVar15 ^ uVar24;
      uVar19 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar12 = uVar4 + uVar19 + (uVar27 ^ uVar29 ^ uVar20) + 0x6ed9eba1 +
               (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar14 = uVar34 ^ uVar5 ^ uVar18 ^ uVar30;
      uVar33 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar25 = uVar29 + uVar33 + (uVar20 ^ uVar27 ^ uVar3) + 0x6ed9eba1 +
               (uVar12 * 0x20 | uVar12 >> 0x1b);
      uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar14 = uVar21 ^ uVar23 ^ uVar26 ^ uVar31;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar27 = uVar27 + uVar14 + (uVar12 & uVar4 | (uVar12 | uVar4) & uVar20) + -0x70e44324 +
               (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar12 = uVar12 * 0x40000000 | uVar12 >> 2;
      uVar3 = uVar5 ^ uVar17 ^ uVar6 ^ uVar19;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar29 = uVar20 + uVar3 + (uVar25 & uVar12 | (uVar25 | uVar12) & uVar4) + -0x70e44324 +
               (uVar27 * 0x20 | uVar27 >> 0x1b);
      uVar25 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar5 = uVar23 ^ uVar16 ^ uVar11 ^ uVar33;
      uVar32 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar5 = uVar4 + uVar32 + (uVar27 & uVar25 | (uVar27 | uVar25) & uVar12) + -0x70e44324 +
              (uVar29 * 0x20 | uVar29 >> 0x1b);
      uVar23 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar4 = uVar17 ^ uVar28 ^ uVar24 ^ uVar14;
      uVar20 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar27 = uVar12 + uVar20 + (uVar29 & uVar23 | (uVar29 | uVar23) & uVar25) + -0x70e44324 +
               (uVar5 * 0x20 | uVar5 >> 0x1b);
      uVar29 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar4 = uVar16 ^ uVar15 ^ uVar30 ^ uVar3;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar25 = uVar25 + uVar4 + (uVar5 & uVar29 | (uVar5 | uVar29) & uVar23) + -0x70e44324 +
               (uVar27 * 0x20 | uVar27 >> 0x1b);
      uVar16 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar5 = uVar28 ^ uVar18 ^ uVar31 ^ uVar32;
      uVar12 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar23 = uVar23 + uVar12 + (uVar27 & uVar16 | (uVar27 | uVar16) & uVar29) + -0x70e44324 +
               (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar27 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar5 = uVar15 ^ uVar26 ^ uVar19 ^ uVar20;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar15 = uVar29 + uVar5 + (uVar25 & uVar27 | (uVar25 | uVar27) & uVar16) + -0x70e44324 +
               (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar17 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar28 = uVar18 ^ uVar6 ^ uVar33 ^ uVar4;
      uVar28 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      uVar18 = uVar16 + uVar28 + (uVar23 & uVar17 | (uVar23 | uVar17) & uVar27) + -0x70e44324 +
               (uVar15 * 0x20 | uVar15 >> 0x1b);
      uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar16 = uVar26 ^ uVar11 ^ uVar14 ^ uVar12;
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar29 = uVar27 + uVar16 + (uVar15 & uVar23 | (uVar15 | uVar23) & uVar17) + -0x70e44324 +
               (uVar18 * 0x20 | uVar18 >> 0x1b);
      uVar25 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar6 = uVar6 ^ uVar24 ^ uVar3 ^ uVar5;
      uVar27 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar21 = uVar17 + uVar27 + (uVar18 & uVar25 | (uVar18 | uVar25) & uVar23) + -0x70e44324 +
               (uVar29 * 0x20 | uVar29 >> 0x1b);
      uVar15 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar6 = uVar11 ^ uVar30 ^ uVar32 ^ uVar28;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar23 = uVar23 + uVar6 + (uVar29 & uVar15 | (uVar29 | uVar15) & uVar25) + -0x70e44324 +
               (uVar21 * 0x20 | uVar21 >> 0x1b);
      uVar29 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar18 = uVar24 ^ uVar31 ^ uVar20 ^ uVar16;
      uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      uVar17 = uVar25 + uVar18 + (uVar21 & uVar29 | (uVar21 | uVar29) & uVar15) + -0x70e44324 +
               (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar26 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar11 = uVar30 ^ uVar19 ^ uVar4 ^ uVar27;
      uVar30 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar11 = uVar15 + uVar30 + (uVar23 & uVar26 | (uVar23 | uVar26) & uVar29) + -0x70e44324 +
               (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar15 = uVar31 ^ uVar33 ^ uVar12 ^ uVar6;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      uVar25 = uVar29 + uVar15 + (uVar17 & uVar24 | (uVar17 | uVar24) & uVar26) + -0x70e44324 +
               (uVar11 * 0x20 | uVar11 >> 0x1b);
      uVar21 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar19 = uVar19 ^ uVar14 ^ uVar5 ^ uVar18;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar26 = uVar26 + uVar19 + (uVar11 & uVar21 | (uVar11 | uVar21) & uVar24) + -0x70e44324 +
               (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar23 = uVar11 * 0x40000000 | uVar11 >> 2;
      uVar11 = uVar33 ^ uVar3 ^ uVar28 ^ uVar30;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar29 = uVar24 + uVar11 + (uVar25 & uVar23 | (uVar25 | uVar23) & uVar21) + -0x70e44324 +
               (uVar26 * 0x20 | uVar26 >> 0x1b);
      uVar17 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar14 = uVar14 ^ uVar32 ^ uVar16 ^ uVar15;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar21 = uVar21 + uVar14 + (uVar26 & uVar17 | (uVar26 | uVar17) & uVar23) + -0x70e44324 +
               (uVar29 * 0x20 | uVar29 >> 0x1b);
      uVar26 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar3 = uVar3 ^ uVar20 ^ uVar27 ^ uVar19;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar24 = uVar23 + uVar3 + (uVar29 & uVar26 | (uVar29 | uVar26) & uVar17) + -0x70e44324 +
               (uVar21 * 0x20 | uVar21 >> 0x1b);
      uVar25 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar23 = uVar32 ^ uVar4 ^ uVar6 ^ uVar11;
      uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      uVar17 = uVar17 + uVar23 + (uVar21 & uVar25 | (uVar21 | uVar25) & uVar26) + -0x70e44324 +
               (uVar24 * 0x20 | uVar24 >> 0x1b);
      uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar20 = uVar20 ^ uVar12 ^ uVar18 ^ uVar14;
      uVar31 = uVar20 << 1 | (uint)((int)uVar20 < 0);
      uVar20 = uVar26 + uVar31 + (uVar24 & uVar21 | (uVar24 | uVar21) & uVar25) + -0x70e44324 +
               (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar24 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar4 = uVar4 ^ uVar5 ^ uVar30 ^ uVar3;
      uVar29 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar25 = uVar25 + uVar29 + (uVar24 ^ uVar21 ^ uVar17) + -0x359d3e2a +
               (uVar20 * 0x20 | uVar20 >> 0x1b);
      uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar4 = uVar12 ^ uVar28 ^ uVar15 ^ uVar23;
      uVar12 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar26 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar21 = uVar21 + uVar12 + (uVar17 ^ uVar24 ^ uVar20) + -0x359d3e2a +
               (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar4 = uVar5 ^ uVar16 ^ uVar19 ^ uVar31;
      uVar20 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar4 = uVar24 + uVar20 + (uVar26 ^ uVar17 ^ uVar25) + -0x359d3e2a +
              (uVar21 * 0x20 | uVar21 >> 0x1b);
      uVar25 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar5 = uVar28 ^ uVar27 ^ uVar11 ^ uVar29;
      uVar24 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar28 = uVar17 + uVar24 + (uVar25 ^ uVar26 ^ uVar21) + -0x359d3e2a +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar5 = uVar16 ^ uVar6 ^ uVar14 ^ uVar12;
      uVar32 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar26 = uVar26 + uVar32 + (uVar21 ^ uVar25 ^ uVar4) + -0x359d3e2a +
               (uVar28 * 0x20 | uVar28 >> 0x1b);
      uVar5 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = uVar27 ^ uVar18 ^ uVar3 ^ uVar20;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar17 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar27 = uVar25 + uVar4 + (uVar5 ^ uVar21 ^ uVar28) + -0x359d3e2a +
               (uVar26 * 0x20 | uVar26 >> 0x1b);
      uVar28 = uVar6 ^ uVar30 ^ uVar23 ^ uVar24;
      uVar16 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      uVar28 = uVar21 + uVar16 + (uVar17 ^ uVar5 ^ uVar26) + -0x359d3e2a +
               (uVar27 * 0x20 | uVar27 >> 0x1b);
      uVar6 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar18 = uVar18 ^ uVar15 ^ uVar31 ^ uVar32;
      uVar21 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      uVar5 = uVar5 + uVar21 + (uVar6 ^ uVar17 ^ uVar27) + -0x359d3e2a +
              (uVar28 * 0x20 | uVar28 >> 0x1b);
      uVar18 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar27 = uVar30 ^ uVar19 ^ uVar29 ^ uVar4;
      uVar26 = uVar27 << 1 | (uint)((int)uVar27 < 0);
      uVar27 = uVar17 + uVar26 + (uVar18 ^ uVar6 ^ uVar28) + -0x359d3e2a +
               (uVar5 * 0x20 | uVar5 >> 0x1b);
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar28 = uVar15 ^ uVar11 ^ uVar12 ^ uVar16;
      uVar30 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      uVar28 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar17 = uVar6 + uVar30 + (uVar25 ^ uVar18 ^ uVar5) + -0x359d3e2a +
               (uVar27 * 0x20 | uVar27 >> 0x1b);
      uVar5 = uVar19 ^ uVar14 ^ uVar20 ^ uVar21;
      uVar6 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar15 = uVar18 + uVar6 + (uVar28 ^ uVar25 ^ uVar27) + -0x359d3e2a +
               (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar19 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar5 = uVar11 ^ uVar3 ^ uVar24 ^ uVar26;
      uVar18 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar11 = uVar25 + uVar18 + (uVar19 ^ uVar28 ^ uVar17) + -0x359d3e2a +
               (uVar15 * 0x20 | uVar15 >> 0x1b);
      uVar27 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar14 = uVar14 ^ uVar23 ^ uVar32 ^ uVar30;
      uVar5 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar28 + uVar5 + (uVar27 ^ uVar19 ^ uVar15) + -0x359d3e2a +
               (uVar11 * 0x20 | uVar11 >> 0x1b);
      uVar15 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar3 = uVar3 ^ uVar31 ^ uVar4 ^ uVar6;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar19 = uVar19 + uVar3 + (uVar15 ^ uVar27 ^ uVar11) + -0x359d3e2a +
               (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar11 = uVar11 * 0x40000000 | uVar11 >> 2;
      uVar28 = uVar23 ^ uVar29 ^ uVar16 ^ uVar18;
      uVar28 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      uVar23 = uVar27 + uVar28 + (uVar11 ^ uVar15 ^ uVar14) + -0x359d3e2a +
               (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar14 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar5 = uVar31 ^ uVar12 ^ uVar21 ^ uVar5;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar16 = uVar15 + uVar5 + (uVar14 ^ uVar11 ^ uVar19) + -0x359d3e2a +
               (uVar23 * 0x20 | uVar23 >> 0x1b);
      uVar3 = uVar29 ^ uVar20 ^ uVar26 ^ uVar3;
      uVar15 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar19 = uVar11 + uVar3 + (uVar15 ^ uVar14 ^ uVar23) + -0x359d3e2a +
               (uVar16 * 0x20 | uVar16 >> 0x1b);
      uVar28 = uVar12 ^ uVar24 ^ uVar30 ^ uVar28;
      uVar11 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar28 = (uVar28 << 1 | (uint)((int)uVar28 < 0)) + uVar14 + (uVar11 ^ uVar15 ^ uVar16) +
               -0x359d3e2a + (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar5 = uVar32 ^ uVar20 ^ uVar6 ^ uVar5;
      uVar16 = uVar16 * 0x40000000 | uVar16 >> 2;
      iVar7 = (uVar5 << 1 | (uint)((int)uVar5 < 0)) + uVar15 + (uVar16 ^ uVar11 ^ uVar19) +
              (uVar28 * 0x20 | uVar28 >> 0x1b);
      uVar3 = uVar4 ^ uVar24 ^ uVar18 ^ uVar3;
      uVar4 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar22 = uVar22 + uVar4;
      uVar14 = iVar7 + 0xca62c1d6;
      uVar13 = (uVar3 << 1 | (uint)((int)uVar3 < 0)) + uVar13 + uVar11 + (uVar4 ^ uVar16 ^ uVar28) +
               -0x359d3e2a + (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar8 = uVar8 + iVar7 + 0xca62c1d6;
      uVar9 = (uVar28 * 0x40000000 | uVar28 >> 2) + uVar9;
      uVar10 = uVar10 + uVar16;
      param_2 = param_2 + 0x10;
    }
    *param_1 = uVar13;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar22;
    param_1[4] = uVar10;
    return;
  }
  FUN_140c562aa(param_1,param_2,param_3);
  return;
}



// FUNCTION 140c562aa FUN_140c562aa body=655 status=ok
// SIG undefined FUN_140c562aa(void)

/* WARNING: Removing unreachable block (ram,0x000140c562cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c562aa(int *param_1,undefined1 (*param_2) [16],ulonglong param_3)

{
  int iVar2;
  int iVar3;
  undefined1 auVar1 [16];
  int iVar4;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar8 = ZEXT416((uint)param_1[4]) << 0x60;
  auVar1._4_4_ = param_1[2];
  auVar1._0_4_ = param_1[3];
  auVar1._8_4_ = param_1[1];
  auVar1._12_4_ = *param_1;
  while( true ) {
    iVar2 = auVar1._4_4_;
    iVar3 = auVar1._8_4_;
    iVar4 = auVar1._12_4_;
    if (param_3 < 0x40) break;
    auVar13 = pshufb(*param_2,_DAT_1499d77f0);
    auVar9 = pshufb(param_2[1],_DAT_1499d77f0);
    auVar6 = pshufb(param_2[2],_DAT_1499d77f0);
    auVar5 = pshufb(param_2[3],_DAT_1499d77f0);
    auVar17._0_4_ = auVar8._0_4_ + auVar13._0_4_;
    auVar17._4_4_ = auVar8._4_4_ + auVar13._4_4_;
    auVar17._8_4_ = auVar8._8_4_ + auVar13._8_4_;
    auVar17._12_4_ = auVar8._12_4_ + auVar13._12_4_;
    auVar19 = sha1rnds4_sha(auVar1,auVar17,0);
    auVar18 = sha1nexte_sha(auVar1,auVar9);
    auVar20 = sha1rnds4_sha(auVar19,auVar18,0);
    auVar13 = sha1msg1_sha(auVar13,auVar9);
    auVar18 = sha1nexte_sha(auVar19,auVar6);
    auVar19 = sha1rnds4_sha(auVar20,auVar18,0);
    auVar9 = sha1msg1_sha(auVar9,auVar6);
    auVar20 = sha1nexte_sha(auVar20,auVar5);
    auVar18 = sha1msg2_sha(auVar13 ^ auVar6,auVar5);
    auVar20 = sha1rnds4_sha(auVar19,auVar20,0);
    auVar6 = sha1msg1_sha(auVar6,auVar5);
    auVar19 = sha1nexte_sha(auVar19,auVar18);
    auVar13 = sha1msg2_sha(auVar9 ^ auVar5,auVar18);
    auVar21 = sha1rnds4_sha(auVar20,auVar19,0);
    auVar5 = sha1msg1_sha(auVar5,auVar18);
    auVar19._0_4_ = auVar6._0_4_ ^ auVar18._0_4_;
    auVar19._4_4_ = auVar6._4_4_ ^ auVar18._4_4_;
    auVar19._8_4_ = auVar6._8_4_ ^ auVar18._8_4_;
    auVar19._12_4_ = auVar6._12_4_ ^ auVar18._12_4_;
    auVar6 = sha1nexte_sha(auVar20,auVar13);
    auVar9 = sha1msg2_sha(auVar19,auVar13);
    auVar19 = sha1rnds4_sha(auVar21,auVar6,1);
    auVar18 = sha1msg1_sha(auVar18,auVar13);
    auVar6._0_4_ = auVar5._0_4_ ^ auVar13._0_4_;
    auVar6._4_4_ = auVar5._4_4_ ^ auVar13._4_4_;
    auVar6._8_4_ = auVar5._8_4_ ^ auVar13._8_4_;
    auVar6._12_4_ = auVar5._12_4_ ^ auVar13._12_4_;
    auVar20 = sha1nexte_sha(auVar21,auVar9);
    auVar5 = sha1msg2_sha(auVar6,auVar9);
    auVar20 = sha1rnds4_sha(auVar19,auVar20,1);
    auVar13 = sha1msg1_sha(auVar13,auVar9);
    auVar14._0_4_ = auVar18._0_4_ ^ auVar9._0_4_;
    auVar14._4_4_ = auVar18._4_4_ ^ auVar9._4_4_;
    auVar14._8_4_ = auVar18._8_4_ ^ auVar9._8_4_;
    auVar14._12_4_ = auVar18._12_4_ ^ auVar9._12_4_;
    auVar6 = sha1nexte_sha(auVar19,auVar5);
    auVar18 = sha1msg2_sha(auVar14,auVar5);
    auVar21 = sha1rnds4_sha(auVar20,auVar6,1);
    auVar6 = sha1msg1_sha(auVar9,auVar5);
    auVar10._0_4_ = auVar13._0_4_ ^ auVar5._0_4_;
    auVar10._4_4_ = auVar13._4_4_ ^ auVar5._4_4_;
    auVar10._8_4_ = auVar13._8_4_ ^ auVar5._8_4_;
    auVar10._12_4_ = auVar13._12_4_ ^ auVar5._12_4_;
    auVar9 = sha1nexte_sha(auVar20,auVar18);
    auVar13 = sha1msg2_sha(auVar10,auVar18);
    auVar19 = sha1rnds4_sha(auVar21,auVar9,1);
    auVar5 = sha1msg1_sha(auVar5,auVar18);
    auVar20._0_4_ = auVar6._0_4_ ^ auVar18._0_4_;
    auVar20._4_4_ = auVar6._4_4_ ^ auVar18._4_4_;
    auVar20._8_4_ = auVar6._8_4_ ^ auVar18._8_4_;
    auVar20._12_4_ = auVar6._12_4_ ^ auVar18._12_4_;
    auVar9 = sha1nexte_sha(auVar21,auVar13);
    auVar6 = sha1msg2_sha(auVar20,auVar13);
    auVar20 = sha1rnds4_sha(auVar19,auVar9,1);
    auVar18 = sha1msg1_sha(auVar18,auVar13);
    auVar9._0_4_ = auVar5._0_4_ ^ auVar13._0_4_;
    auVar9._4_4_ = auVar5._4_4_ ^ auVar13._4_4_;
    auVar9._8_4_ = auVar5._8_4_ ^ auVar13._8_4_;
    auVar9._12_4_ = auVar5._12_4_ ^ auVar13._12_4_;
    auVar19 = sha1nexte_sha(auVar19,auVar6);
    auVar5 = sha1msg2_sha(auVar9,auVar6);
    auVar19 = sha1rnds4_sha(auVar20,auVar19,2);
    auVar9 = sha1msg1_sha(auVar13,auVar6);
    auVar15._0_4_ = auVar18._0_4_ ^ auVar6._0_4_;
    auVar15._4_4_ = auVar18._4_4_ ^ auVar6._4_4_;
    auVar15._8_4_ = auVar18._8_4_ ^ auVar6._8_4_;
    auVar15._12_4_ = auVar18._12_4_ ^ auVar6._12_4_;
    auVar18 = sha1nexte_sha(auVar20,auVar5);
    auVar13 = sha1msg2_sha(auVar15,auVar5);
    auVar18 = sha1rnds4_sha(auVar19,auVar18,2);
    auVar6 = sha1msg1_sha(auVar6,auVar5);
    auVar11._0_4_ = auVar9._0_4_ ^ auVar5._0_4_;
    auVar11._4_4_ = auVar9._4_4_ ^ auVar5._4_4_;
    auVar11._8_4_ = auVar9._8_4_ ^ auVar5._8_4_;
    auVar11._12_4_ = auVar9._12_4_ ^ auVar5._12_4_;
    auVar19 = sha1nexte_sha(auVar19,auVar13);
    auVar9 = sha1msg2_sha(auVar11,auVar13);
    auVar19 = sha1rnds4_sha(auVar18,auVar19,2);
    auVar5 = sha1msg1_sha(auVar5,auVar13);
    auVar21._0_4_ = auVar6._0_4_ ^ auVar13._0_4_;
    auVar21._4_4_ = auVar6._4_4_ ^ auVar13._4_4_;
    auVar21._8_4_ = auVar6._8_4_ ^ auVar13._8_4_;
    auVar21._12_4_ = auVar6._12_4_ ^ auVar13._12_4_;
    auVar18 = sha1nexte_sha(auVar18,auVar9);
    auVar6 = sha1msg2_sha(auVar21,auVar9);
    auVar20 = sha1rnds4_sha(auVar19,auVar18,2);
    auVar18 = sha1msg1_sha(auVar13,auVar9);
    auVar13._0_4_ = auVar5._0_4_ ^ auVar9._0_4_;
    auVar13._4_4_ = auVar5._4_4_ ^ auVar9._4_4_;
    auVar13._8_4_ = auVar5._8_4_ ^ auVar9._8_4_;
    auVar13._12_4_ = auVar5._12_4_ ^ auVar9._12_4_;
    auVar19 = sha1nexte_sha(auVar19,auVar6);
    auVar5 = sha1msg2_sha(auVar13,auVar6);
    auVar19 = sha1rnds4_sha(auVar20,auVar19,2);
    auVar9 = sha1msg1_sha(auVar9,auVar6);
    auVar16._0_4_ = auVar18._0_4_ ^ auVar6._0_4_;
    auVar16._4_4_ = auVar18._4_4_ ^ auVar6._4_4_;
    auVar16._8_4_ = auVar18._8_4_ ^ auVar6._8_4_;
    auVar16._12_4_ = auVar18._12_4_ ^ auVar6._12_4_;
    auVar18 = sha1nexte_sha(auVar20,auVar5);
    auVar13 = sha1msg2_sha(auVar16,auVar5);
    auVar20 = sha1rnds4_sha(auVar19,auVar18,3);
    auVar6 = sha1msg1_sha(auVar6,auVar5);
    auVar12._0_4_ = auVar9._0_4_ ^ auVar5._0_4_;
    auVar12._4_4_ = auVar9._4_4_ ^ auVar5._4_4_;
    auVar12._8_4_ = auVar9._8_4_ ^ auVar5._8_4_;
    auVar12._12_4_ = auVar9._12_4_ ^ auVar5._12_4_;
    auVar18 = sha1nexte_sha(auVar19,auVar13);
    auVar9 = sha1msg2_sha(auVar12,auVar13);
    auVar19 = sha1rnds4_sha(auVar20,auVar18,3);
    auVar5 = sha1msg1_sha(auVar5,auVar13);
    auVar7._0_4_ = auVar6._0_4_ ^ auVar13._0_4_;
    auVar7._4_4_ = auVar6._4_4_ ^ auVar13._4_4_;
    auVar7._8_4_ = auVar6._8_4_ ^ auVar13._8_4_;
    auVar7._12_4_ = auVar6._12_4_ ^ auVar13._12_4_;
    auVar13 = sha1nexte_sha(auVar20,auVar9);
    auVar6 = sha1msg2_sha(auVar7,auVar9);
    auVar13 = sha1rnds4_sha(auVar19,auVar13,3);
    auVar18._0_4_ = auVar5._0_4_ ^ auVar9._0_4_;
    auVar18._4_4_ = auVar5._4_4_ ^ auVar9._4_4_;
    auVar18._8_4_ = auVar5._8_4_ ^ auVar9._8_4_;
    auVar18._12_4_ = auVar5._12_4_ ^ auVar9._12_4_;
    auVar9 = sha1nexte_sha(auVar19,auVar6);
    auVar5 = sha1msg2_sha(auVar18,auVar6);
    auVar6 = sha1rnds4_sha(auVar13,auVar9,3);
    auVar5 = sha1nexte_sha(auVar13,auVar5);
    auVar5 = sha1rnds4_sha(auVar6,auVar5,3);
    auVar8 = sha1nexte_sha(auVar6,auVar8);
    auVar1._0_4_ = auVar1._0_4_ + auVar5._0_4_;
    auVar1._4_4_ = iVar2 + auVar5._4_4_;
    auVar1._8_4_ = iVar3 + auVar5._8_4_;
    auVar1._12_4_ = iVar4 + auVar5._12_4_;
    param_2 = param_2 + 4;
    param_3 = param_3 - 0x40;
  }
  *param_1 = iVar4;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  param_1[3] = auVar1._0_4_;
  param_1[4] = auVar8._12_4_;
  return;
}



// FUNCTION 140c5653a FUN_140c5653a body=432 status=ok
// SIG undefined FUN_140c5653a(void)

undefined4 *
FUN_140c5653a(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c567f4(param_1,local_50);
  FUN_140c566ec(param_3);
  *(undefined4 *)(local_48 + 7) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  uVar8 = 0;
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_140c56754(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x3c) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 7) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140c569d0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c566ec FUN_140c566ec body=104 status=ok
// SIG undefined FUN_140c566ec(void)

undefined8 * FUN_140c566ec(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
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
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 140c56754 FUN_140c56754 body=160 status=ok
// SIG undefined FUN_140c56754(void)

void FUN_140c56754(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
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
  undefined1 uVar14;
  int iVar15;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar15 = FUN_140c4443c();
    if (iVar15 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
      if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14930d81a(param_1,*param_4,1);
      *param_4 = iVar15;
      uVar14 = 1;
      goto LAB_140c56788;
    }
  }
  uVar14 = 0;
LAB_140c56788:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 140c567f4 FUN_140c567f4 body=476 status=ok
// SIG undefined FUN_140c567f4(void)

int * FUN_140c567f4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1406cd6a8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x40);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x40) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 140c569d0 FUN_140c569d0 body=788 status=ok
// SIG undefined FUN_140c569d0(void)

void FUN_140c569d0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 *puVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_140c56a36;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_140c56a36:
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar6 = 0;
    uVar10 = 1;
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar15;
    if (uVar8 == 0) {
      iVar9 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar9 = iVar11 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar6;
      }
      iVar7 = 0;
      do {
        if (uVar10 == uVar6) {
          return;
        }
        iVar7 = iVar7 + 0x20;
        uVar8 = puVar15[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar6 = 0;
      iVar7 = 0;
    }
    uVar10 = (ulonglong)(-uVar8 & uVar8);
    uVar14 = uVar10 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar9) {
      iVar9 = iVar11;
    }
  }
  if (iVar9 < iVar11) {
    uVar8 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x40);
      iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar9 * 0x40);
      iVar12 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar18 = &DAT_149dfb77a;
        if (iVar11 != 0) {
          puVar18 = (undefined2 *)*puVar2;
        }
        lVar16 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar18[lVar16] +
                  (uint)(0x19 < (ushort)puVar18[lVar16] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar16 = lVar16 + 1;
        } while (iVar12 != (int)lVar16);
      }
      uVar14 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar11 = (int)uVar14;
      *(int *)((longlong)puVar2 + 0x3c) = iVar11;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 7) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar8 = uVar8 & ~(uint)uVar10;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = (uint *)(param_1 + 2);
      }
      iVar11 = (int)param_1[5];
      iVar9 = (int)uVar6;
      lVar16 = (longlong)iVar9;
      uVar3 = puVar15[lVar16] & uVar8;
      if (uVar3 == 0) {
        iVar12 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar12 = iVar11 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar12 <= iVar9) {
          return;
        }
        lVar17 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar3 = puVar15[lVar16 + lVar17 + 1];
          if (uVar3 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar13 - lVar16 == lVar17) {
            return;
          }
        }
        uVar6 = (ulonglong)(iVar9 + (int)lVar17 + 1);
        uVar8 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar3 & uVar3);
      uVar14 = uVar10 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar9 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar11);
  }
  return;
}



// FUNCTION 140c56ce4 FUN_140c56ce4 body=2529 status=ok
// SIG undefined FUN_140c56ce4(void)

void FUN_140c56ce4(longlong param_1,longlong param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined8 *local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined8 **local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((DAT_14cb259f8 == 0) || (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 == 0))
  goto LAB_140c572ef;
  plVar7 = (longlong *)FUN_14001cc68(0x10,0x10);
  lVar8 = *(longlong *)(lVar5 + 0xf8);
  *plVar7 = lVar8;
  lVar11 = *(longlong *)(lVar5 + 0x100);
  plVar7[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
    lVar8 = *plVar7;
  }
  if (lVar8 != 0) {
    lVar8 = FUN_14073751e();
    if (DAT_14c951858 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    plVar9 = *(longlong **)(lVar5 + 0x20);
    if (plVar9 == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      do {
        if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (plVar16 = plVar9,
           *(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
           lVar8 + 0x30)) {
          plVar16 = (longlong *)0x0;
        }
      } while ((plVar16 == (longlong *)0x0) &&
              (plVar9 = (longlong *)plVar9[4], plVar9 != (longlong *)0x0));
    }
    uVar10 = (**(code **)(*plVar16 + 0x180))();
    lVar8 = *plVar7;
    *(undefined8 *)(lVar8 + 0x118) = uVar10;
    lVar11 = FUN_14073751e();
    if (DAT_14c951858 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = *(longlong *)(lVar5 + 0x20);
    if (lVar13 == 0) {
      lVar12 = 0;
    }
    else {
      do {
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
           (lVar12 = lVar13,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
          lVar12 = 0;
        }
      } while ((lVar12 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
    }
    lVar11 = *(longlong *)(lVar12 + 0x118);
    *(float *)(lVar8 + 0x110) =
         (float)(((double)((lVar11 >> 0x20) * (longlong)*(int *)(lVar12 + 0x114)) +
                 (double)((ulonglong)(double)(int)((ulonglong)lVar11 >> 0x20) & 0x8000000000000000))
                / (double)(int)lVar11);
    *(undefined1 *)(lVar8 + 0x10c) = *(undefined1 *)(lVar5 + 0x110);
    local_68 = (undefined8 **)CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + 0x150));
    local_70 = *(code **)(lVar5 + 0x148);
    local_60 = *(longlong *)(lVar5 + 0x158);
    uVar10 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x160));
    local_58 = FUN_14477b664(uVar10);
    local_50 = *(undefined8 *)(lVar5 + 0x168);
    local_48 = *(longlong *)(lVar5 + 0x170);
    FUN_140942716(&local_48);
    *(undefined4 *)(lVar8 + 0x60) = local_68._0_4_;
    *(code **)(lVar8 + 0x58) = local_70;
    if (*(longlong *)(lVar8 + 0x68) != local_60) {
      *(undefined8 *)(lVar8 + 0x78) = 0;
    }
    *(longlong *)(lVar8 + 0x68) = local_60;
    if (*(longlong *)(lVar8 + 0x70) != local_58) {
      *(undefined8 *)(lVar8 + 0x78) = 0;
    }
    uVar10 = FUN_14477b664();
    uVar10 = FUN_14477b664(uVar10);
    *(undefined8 *)(lVar8 + 0x70) = uVar10;
    *(undefined8 *)(lVar8 + 0x78) = local_50;
    if ((*(longlong *)(lVar8 + 0x80) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x80) + 0x50));
    }
    *(longlong *)(lVar8 + 0x80) = local_48;
    FUN_140942716((longlong *)(lVar8 + 0x80));
    if ((local_48 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_48 + 0x50));
    }
    lVar11 = FUN_14073751e();
    if (DAT_14c951858 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = *(longlong *)(lVar5 + 0x20);
    if (lVar13 == 0) {
      lVar12 = 0;
    }
    else {
      do {
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
           (lVar12 = lVar13,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
          lVar12 = 0;
        }
      } while ((lVar12 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
    }
    lVar11 = *(longlong *)(lVar12 + 0x118);
    *(float *)(lVar8 + 0xf0) =
         (float)(((double)((lVar11 >> 0x20) * (longlong)*(int *)(lVar5 + 0x9c)) +
                 (double)((ulonglong)(double)(int)((ulonglong)lVar11 >> 0x20) & 0x8000000000000000))
                / (double)(int)lVar11);
    lVar11 = FUN_14073751e();
    if (DAT_14c951858 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = *(longlong *)(lVar5 + 0x20);
    if (lVar13 == 0) {
      lVar12 = 0;
    }
    else {
      do {
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
           (lVar12 = lVar13,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
          lVar12 = 0;
        }
      } while ((lVar12 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
    }
    lVar11 = *(longlong *)(lVar12 + 0x118);
    *(float *)(lVar8 + 0xf4) =
         (float)(((double)((lVar11 >> 0x20) * (longlong)*(int *)(lVar5 + 0xa4)) +
                 (double)((ulonglong)(double)(int)((ulonglong)lVar11 >> 0x20) & 0x8000000000000000))
                / (double)(int)lVar11);
    *(undefined1 *)(lVar8 + 0x10d) = *(undefined1 *)(lVar5 + 0x130);
    *(undefined1 *)(lVar8 + 0x10e) = *(undefined1 *)(lVar5 + 0x144);
    *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(lVar5 + 0x13c);
    *(undefined8 *)(lVar8 + 0x90) = *(undefined8 *)(lVar5 + 0x134);
    FUN_14073751e();
    if (DAT_14c951858 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_68 = (undefined8 **)CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + 0x150));
    local_70 = *(code **)(lVar5 + 0x148);
    local_60 = *(undefined8 *)(lVar5 + 0x158);
    uVar10 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x160));
    local_58 = FUN_14477b664(uVar10);
    local_50 = *(undefined8 *)(lVar5 + 0x168);
    local_48 = *(longlong *)(lVar5 + 0x170);
    FUN_140942716(&local_48);
    FUN_140c576fe(&local_80,&local_70);
    *(undefined8 **)(lVar8 + 0x40) = local_80;
    *(undefined8 *)(lVar8 + 0x48) = uStack_78;
    bVar4 = *(byte *)(lVar5 + 0x178);
    *(uint *)(lVar8 + 0x50) = (uint)bVar4;
    uVar2 = *(undefined4 *)(&DAT_14acb7f28 + (ulonglong)(bVar4 == 0) * 4);
    *(undefined4 *)(lVar8 + 0x120) = uVar2;
    *(undefined4 *)(lVar8 + 0x100) = uVar2;
    *(undefined4 *)(lVar8 + 0xfc) = uVar2;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar8 + 0xa0);
    EnterCriticalSection(lpCriticalSection);
    FUN_140c576e0(*(undefined8 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x18));
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if (*(int *)(lVar8 + 0x1c) != 0) {
      FUN_140c5785e(lVar8 + 0x10);
    }
    LeaveCriticalSection(lpCriticalSection);
    EnterCriticalSection(lpCriticalSection);
    *(undefined4 *)(lVar8 + 0x38) = 0;
    if (*(int *)(lVar8 + 0x3c) != 0) {
      FUN_147f848b0(lVar8 + 0x30);
    }
    LeaveCriticalSection(lpCriticalSection);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 200));
    FUN_140c576e0(*(undefined8 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x28));
    *(undefined4 *)(lVar8 + 0x28) = 0;
    if (*(int *)(lVar8 + 0x2c) != 0) {
      FUN_140c5785e(lVar8 + 0x20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 200));
  }
  puVar14 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar14 = &PTR_FUN_14acb88d0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  local_68 = &local_80;
  local_80 = puVar14;
  local_70 = (code *)(param_2 + 0x24);
  FUN_1401ac3b6(*(undefined8 *)(param_2 + 8),local_3c,&local_70,0);
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  puVar15 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar15[1] = &DAT_100000001;
  *puVar15 = &PTR_FUN_14acb88e0;
  puVar15[2] = plVar7;
  puVar14[1] = plVar7;
  puVar6 = (undefined8 *)puVar14[2];
  if (puVar15 == puVar6) {
    if (puVar15 == (undefined8 *)0x0) goto LAB_140c572ef;
    LOCK();
    piVar1 = (int *)(puVar15 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140c572ef;
    (**(code **)*puVar15)(puVar15);
    LOCK();
    piVar1 = (int *)((longlong)puVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    puVar14[2] = puVar15;
    if (puVar6 == (undefined8 *)0x0) goto LAB_140c572ef;
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140c572ef;
    (**(code **)*puVar6)(puVar6);
    LOCK();
    piVar1 = (int *)((longlong)puVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
LAB_140c572ef:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c576e0 FUN_140c576e0 body=30 status=ok
// SIG undefined FUN_140c576e0(void)

void FUN_140c576e0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffffffffffff;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140c576fe FUN_140c576fe body=348 status=ok
// SIG undefined FUN_140c576fe(void)

undefined4 * FUN_140c576fe(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 == 0) {
    uVar5 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_2 + 0x18) = lVar4;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,param_2 + 0x10);
        *(longlong *)(param_2 + 0x20) = lVar4;
        if (lVar4 != 0) goto LAB_140c57730;
      }
    }
    if ((*param_2 == '\x01') && (*(longlong *)(param_2 + 4) != 0)) goto LAB_140c57730;
  }
  else {
LAB_140c57730:
    local_38 = 0;
    uStack_30 = 0;
    lVar4 = FUN_140206ee8(param_2);
    if (lVar4 != 0) {
      fVar6 = *(float *)(lVar4 + 0x48);
      if (720000.0 <= fVar6) {
        fVar6 = 720000.0;
      }
      if (fVar6 <= 0.05) {
        fVar6 = 0.05;
      }
      uVar1 = *(undefined4 *)(lVar4 + 0x44);
      *param_1 = 1;
      param_1[1] = uVar1;
      param_1[2] = 1;
      param_1[3] = fVar6;
      goto LAB_140c5779a;
    }
  }
  *(undefined1 *)param_1 = 1;
  param_1[1] = 0x3f000000;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0x3f000000;
LAB_140c5779a:
  if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c5785e FUN_140c5785e body=48 status=ok
// SIG undefined FUN_140c5785e(void)

void FUN_140c5785e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 140c5788e FUN_140c5788e body=184 status=ok
// SIG undefined FUN_140c5788e(void)

void FUN_140c5788e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 + 8);
    if (*(char *)(param_2 + 0x10) != '\0') {
      if (*(char *)(param_2 + 0x10) != '\x02') goto LAB_140c57910;
      plVar2 = (longlong *)(*plVar2 + 0x30);
    }
    if (*plVar2 != 0) {
      FUN_14030ff28(param_1,&local_48,*plVar2 + 0x48);
      uVar1 = 0;
      if (((local_48 != 0) && (local_44 != 0)) && (local_48 != DAT_14c948000)) {
        uVar1 = FUN_144837462(param_1,&local_48);
      }
      FUN_140c57948(param_2,uVar1);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140c57910:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c57948 FUN_140c57948 body=146 status=ok
// SIG undefined FUN_140c57948(void)

void FUN_140c57948(undefined8 ****param_1,undefined8 ***param_2)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_48 [32];
  undefined8 ***local_28;
  undefined8 ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pppuVar1 = param_1[0x14];
  if (pppuVar1 != param_2) {
    if (pppuVar1 != (undefined8 ***)0x0) {
      local_20 = &local_28;
      local_28 = param_1;
      FUN_14887e1ac(pppuVar1 + 0x15);
    }
    param_1[0x14] = param_2;
    if (param_2 != (undefined8 ***)0x0) {
      local_20 = param_1;
      FUN_140c579dc(param_2 + 0x15);
    }
    FUN_140c57a44(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c579dc FUN_140c579dc body=103 status=ok
// SIG undefined FUN_140c579dc(void)

ulonglong FUN_140c579dc(longlong *param_1,longlong *param_2)

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
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_140c57a30;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140c57bca(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_140c57a30:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140c57a44 FUN_140c57a44 body=388 status=ok
// SIG undefined FUN_140c57a44(void)

void FUN_140c57a44(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 8);
    }
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_1400b2348(puVar3,&local_38,1);
    uVar7 = (longlong)(int)uStack_30 * 2;
    do {
      if (uVar7 == 0) goto LAB_140c57b82;
      uVar6 = uVar7 - 2;
      lVar2 = uVar7 - 2;
      uVar7 = uVar6;
    } while (*(short *)((longlong)local_38 + lVar2) != 0x3c);
    iVar5 = (int)(uVar6 >> 1);
    if (iVar5 != -1) {
      uVar8 = (int)uStack_30 - 1;
      if ((int)uStack_30 == 0) {
        uVar8 = 0;
      }
      uVar7 = (ulonglong)(int)uVar8;
      if (local_38[uVar7 - 1] == 0x3e) {
        uVar9 = (uVar8 - iVar5) - 2;
        if ((int)uVar9 < 0) {
          local_58 = (undefined2 *)0x0;
          uStack_50 = 0;
          puVar4 = &DAT_149dfb77a;
        }
        else {
          if ((int)(iVar5 + 1U) < (int)uVar8) {
            uVar8 = iVar5 + 1U;
          }
          uVar1 = 0;
          if (0 < (int)uVar8) {
            uVar1 = uVar8;
          }
          uVar10 = (ulonglong)uVar1;
          uVar6 = (longlong)iVar5 + (ulonglong)uVar9 + 1;
          if ((longlong)uVar6 < (longlong)uVar7) {
            uVar7 = uVar6;
          }
          if ((longlong)uVar7 < (longlong)uVar10) {
            uVar7 = uVar10;
          }
          puVar4 = local_38;
          if ((int)uStack_30 == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          FUN_14006620a(&local_58,puVar4 + uVar10,(int)uVar7 - uVar1);
          puVar4 = &DAT_149dfb77a;
          if ((int)uStack_50 != 0) {
            puVar4 = local_58;
          }
        }
        FUN_1446f470e(&local_40,puVar4,1);
        *(undefined8 *)(param_1 + 0xb8) = local_40;
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_140c57b82:
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c57bca FUN_140c57bca body=353 status=ok
// SIG undefined FUN_140c57bca(void)

void FUN_140c57bca(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c57c4f;
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
LAB_140c57c4f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c57d2c FUN_140c57d2c body=233 status=ok
// SIG undefined FUN_140c57d2c(void)

undefined4 FUN_140c57d2c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_98 [32];
  char local_78 [16];
  longlong *local_68;
  undefined4 local_50 [2];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = '\0';
  local_50[0] = 0;
  FUN_1456bb102(local_78,*param_3);
  FUN_1448729ea(param_2,local_48,local_78);
  uVar3 = FUN_1405d5f74(local_48);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar4 = local_48;
    if (0x18 < local_30) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    (*pcVar2)(pppuVar4);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_1448173f8(local_50);
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c57e16 FUN_140c57e16 body=270 status=ok
// SIG undefined FUN_140c57e16(void)

undefined8 FUN_140c57e16(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c57f1e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c57f1e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140c57f1e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c57ecc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140c57ecc;
    }
  }
  uVar6 = 0;
LAB_140c57ecc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c57f2c FUN_140c57f2c body=600 status=ok
// SIG undefined FUN_140c57f2c(void)

void FUN_140c57f2c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_1447210f0();
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x3c8) == 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    puVar4 = local_a0;
    local_98 = 3;
    *local_a0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_a0[2] = lVar5;
    *local_a0 = &PTR_FUN_14b50ce70;
    local_a0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar6 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar6;
    puVar4[4] = FUN_140c44548;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    FUN_14016fdb0(uVar2,&local_90,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    *(undefined8 *)(param_1 + 0x3c8) = local_90;
    if (local_98 != 0) {
      if (local_a0 == (undefined8 *)0x0) goto LAB_140c580af;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140c580af:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c58186 FUN_140c58186 body=21 status=ok
// SIG undefined FUN_140c58186(void)

undefined8 FUN_140c58186(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140c5819c FUN_140c5819c body=61 status=ok
// SIG undefined FUN_140c5819c(void)

void FUN_140c5819c(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x30);
  if (0 < (longlong)uVar2) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + -8 + uVar2 * 8) == 0) {
        FUN_1400cbc52(param_1,(int)uVar2 + -1);
      }
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 140c581d9 FUN_140c581d9 body=203 status=ok
// SIG undefined FUN_140c581d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140c581d9(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined1 local_60 [24];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = 0;
  do {
    FUN_140c582a6(param_2 + 0x10,local_60,*(undefined8 *)((longlong)&PTR_DAT_149e34340 + lVar1),0);
    if (local_48 == '\x01') {
      local_a8 = _DAT_14c75d618;
      uStack_a4 = uRam000000014c75d61c;
      uStack_a0 = uRam000000014c75d620;
      uStack_9c = uRam000000014c75d624;
      local_98 = &PTR_FUN_149e34e90;
      FUN_140079082(param_2,local_60,&local_a8);
      FUN_1448f2150(&local_a8);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c582a6 FUN_140c582a6 body=186 status=ok
// SIG undefined FUN_140c582a6(void)

undefined8 *
FUN_140c582a6(undefined8 *param_1,undefined8 *param_2,wchar_t *param_3,longlong param_4)

{
  wchar_t *pwVar1;
  wchar_t *_Str1;
  wchar_t *pwVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  
  if (param_4 == 0) {
    puVar5 = param_1 + 2;
  }
  else {
    puVar5 = (undefined8 *)(param_4 + 8);
  }
  _Str1 = (wchar_t *)*puVar5;
  pwVar2 = (wchar_t *)*param_1;
  if (pwVar2 <= _Str1) {
    sVar6 = wcslen(param_3);
    sVar6 = (size_t)(int)sVar6;
    if ((_Str1 <= (wchar_t *)(param_1[1] + sVar6 * -2)) && (*_Str1 == *param_3)) {
      iVar4 = wcsncmp(_Str1,param_3,sVar6);
      if (iVar4 == 0) {
        pwVar1 = _Str1 + sVar6;
        if ((param_4 != 0) && (*(wchar_t **)(param_4 + 8) < pwVar1)) {
          *(wchar_t **)(param_4 + 8) = pwVar1;
        }
        *param_2 = _Str1;
        param_2[1] = pwVar1;
        *(undefined4 *)(param_2 + 2) = 0;
        *(int *)((longlong)param_2 + 0x14) =
             (int)((ulonglong)((longlong)_Str1 - (longlong)pwVar2) >> 1);
        uVar3 = 1;
        goto LAB_140c582fd;
      }
    }
  }
  uVar3 = 0;
LAB_140c582fd:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return param_2;
}



// FUNCTION 140c58360 FUN_140c58360 body=1422 status=ok
// SIG undefined FUN_140c58360(void)

ulonglong FUN_140c58360(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *_Src;
  int *piVar16;
  uint uVar17;
  undefined1 auStack_108 [40];
  int local_e0 [2];
  int local_d8;
  undefined4 uStack_d4;
  ushort local_c0;
  byte local_b8;
  undefined2 local_a8 [2];
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  _Src = (char *)(param_2 + 8);
  uVar6 = *(ushort *)(param_2 + 0x20);
  pcVar11 = _Src;
  if (0x18 < uVar6) {
    pcVar11 = *(char **)_Src;
  }
  uVar17 = (uint)*(byte *)(param_2 + 0x28);
  if (*(code **)(&DAT_14c9a8620 + uVar17 * 0x120) == (code *)0x0) {
    pcVar15 = pcVar11 + *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar17 * 0x120));
    do {
      if (pcVar15 <= pcVar11) goto LAB_140c5873f;
      cVar5 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar5 == '\0');
  }
  else {
    cVar5 = (**(code **)(&DAT_14c9a8620 + uVar17 * 0x120))();
    if (cVar5 != '\0') {
LAB_140c5873f:
      uVar8 = 0;
      goto LAB_140c587c2;
    }
    uVar17 = (uint)*(byte *)(param_2 + 0x28);
    uVar6 = *(ushort *)(param_2 + 0x20);
  }
  local_58 = uVar6;
  if (uVar6 < 0x19) {
    ppppuVar9 = local_70;
  }
  else {
    ppppuVar9 = (undefined8 ****)FUN_14001cc68(uVar6,0);
    _Src = *(char **)_Src;
    local_70[0] = ppppuVar9;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar17 * 0x120));
  if (pcVar4 == (code *)0x0) {
    memcpy(ppppuVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar17 * 0x120))
          );
  }
  else {
    (*pcVar4)(ppppuVar9,_Src);
  }
  local_50 = *(byte *)(param_2 + 0x28);
  if (local_50 == 0x11) {
    param_2 = param_1 + 0x90;
    do {
      FUN_140c58b60(local_70,local_a8);
      lVar7 = FUN_140c58ad8(local_a8,param_2);
      if ((lVar7 == 0) &&
         (lVar7 = FUN_140c58ad8(local_a8,*(longlong *)(param_1 + 0x40) + 0x58), lVar7 == 0)) break;
      puVar14 = (undefined8 *)(lVar7 + 8);
      if (local_50 == *(byte *)(lVar7 + 0x28)) {
        if (0x18 < *(ushort *)(lVar7 + 0x20)) {
          puVar14 = *(undefined8 **)(lVar7 + 8);
        }
        ppppuVar9 = (undefined8 ****)local_70[0];
        if (local_58 < 0x19) {
          ppppuVar9 = local_70;
        }
        uVar8 = (ulonglong)((uint)local_50 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
        if (pcVar4 == (code *)0x0) {
          memcpy(ppppuVar9,puVar14,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (*pcVar4)(ppppuVar9,puVar14);
        }
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar9 = local_70;
          if (0x18 < local_58) {
            ppppuVar9 = (undefined8 ****)local_70[0];
          }
          (*pcVar4)(ppppuVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        bVar1 = *(byte *)(lVar7 + 0x28);
        local_58 = *(ushort *)(lVar7 + 0x20);
        ppppuVar9 = local_70;
        if (0x18 < local_58) {
          local_70[0] = (undefined8 ***)FUN_14001cc68(local_58,0);
          puVar14 = (undefined8 *)*puVar14;
          ppppuVar9 = (undefined8 ****)local_70[0];
        }
        uVar8 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8);
        if (pcVar4 == (code *)0x0) {
          memcpy(ppppuVar9,puVar14,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (*pcVar4)(ppppuVar9,puVar14);
        }
        local_50 = *(byte *)(lVar7 + 0x28);
      }
    } while (local_50 == 0x11);
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if ((local_50 == 0x16) || (local_50 == 0x13)) {
    local_a8[0] = 0;
    local_a4 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_140c5894c(local_e0,local_70);
    piVar16 = (int *)&DAT_14c948618;
    cVar5 = FUN_140c589d6(param_1,local_e0,local_a8,&DAT_14c948618);
    if (cVar5 == '\0') {
      FUN_144a2da94(local_e0);
    }
    else {
      cVar5 = (char)local_a8[0];
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (local_c0 < 0x19) {
          piVar12 = &local_d8;
        }
        else {
          piVar12 = (int *)CONCAT44(uStack_d4,local_d8);
        }
        (*pcVar4)(piVar12);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(CONCAT44(uStack_d4,local_d8));
      }
      if (cVar5 == '\x01') {
        if ((char)local_a8[0] == '\x01') {
          piVar12 = (int *)&DAT_14c948618;
          piVar10 = &DAT_14c948620;
          if ((((int)local_98 != 0) && (1 < local_98._4_4_)) && ((int)local_98 != DAT_14c948000)) {
            piVar12 = (int *)(local_80 + 0xc);
            piVar10 = (int *)(local_80 + 0x14);
          }
          if ((*piVar12 != (int)DAT_14cb7bb98) || (*piVar10 != DAT_14cb7bba0)) goto LAB_140c58513;
        }
        else {
LAB_140c58513:
          piVar12 = &DAT_14c948620;
          if (((int)local_98 != 0) && ((1 < local_98._4_4_ && ((int)local_98 != DAT_14c948000)))) {
            piVar16 = (int *)(local_80 + 0xc);
            piVar12 = (int *)(local_80 + 0x14);
          }
          iVar2 = *piVar16;
          iVar3 = *piVar12;
          if (*(int *)(param_1 + 0x4c) == 0) {
LAB_140c58716:
            uVar13 = 0;
          }
          else {
            uVar17 = *(uint *)(param_1 + 0x48);
            uVar13 = 0;
            if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
              puVar14 = (undefined8 *)
                        ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
              if ((puVar14 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 0x4c) ||
                  ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_140c58716;
              uVar13 = *puVar14;
            }
          }
          FUN_140c588ef(local_e0,uVar13);
          if ((iVar2 != local_e0[0]) || (iVar3 != local_d8)) goto LAB_140c58769;
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        goto LAB_140c5877c;
      }
    }
LAB_140c58769:
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    uVar8 = 0;
  }
LAB_140c5877c:
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar9 = (undefined8 ****)local_70[0];
    if (local_58 < 0x19) {
      ppppuVar9 = local_70;
    }
    (*pcVar4)(ppppuVar9);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
LAB_140c587c2:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140c588ef FUN_140c588ef body=93 status=ok
// SIG undefined FUN_140c588ef(void)

undefined8 * FUN_140c588ef(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((param_2 != (longlong *)0x0) &&
      (lVar1 = (**(code **)(*param_2 + 0x2b0))(param_2), lVar1 != 0)) &&
     (plVar2 = (longlong *)FUN_1401499e8(lVar1), plVar2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*plVar2 + 0xe0))(plVar2);
    *param_1 = *(undefined8 *)(lVar1 + 0x2c);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0x34);
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 140c5894c FUN_140c5894c body=138 status=ok
// SIG undefined FUN_140c5894c(void)

undefined8 * FUN_140c5894c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  *param_1 = 0;
  _Dst = param_1 + 1;
  bVar1 = *(byte *)(param_2 + 4);
  uVar3 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 4) = uVar3;
  _Src = param_2;
  if (0x18 < uVar3) {
    puVar5 = (undefined8 *)FUN_14001cc68(uVar3,0);
    *_Dst = puVar5;
    _Src = (undefined8 *)*param_2;
    _Dst = puVar5;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar4 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar4)(_Dst);
  }
  uVar2 = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = uVar2;
  *(undefined1 *)(param_1 + 6) = uVar2;
  return param_1;
}



// FUNCTION 140c589d6 FUN_140c589d6 body=257 status=ok
// SIG undefined FUN_140c589d6(void)

undefined4 FUN_140c589d6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uVar2 = FUN_140c58c2c(*(undefined8 *)(param_1 + 0x40));
  if ((char)uVar2 == '\0') goto LAB_140c58a8d;
  if (*(int *)(param_1 + 0x160) == 0) {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xb8);
    FUN_1401533ba(&local_38,&local_28,1);
  }
  else {
    local_30 = *(undefined4 *)(param_1 + 0x168);
    local_38 = *(undefined8 *)(param_1 + 0x160);
  }
  if ((int)local_38 == 0) goto LAB_140c58a8d;
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_140c58aae:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x48);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x4c) ||
          ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_140c58aae;
      uVar4 = *puVar3;
    }
  }
  FUN_140d84843(param_3,&local_38,&DAT_14c948618,uVar4);
LAB_140c58a8d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c58ad8 FUN_140c58ad8 body=136 status=ok
// SIG undefined FUN_140c58ad8(void)

longlong FUN_140c58ad8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  if ((((longlong)iVar1 < 0) || (iVar2 <= iVar1)) ||
     (lVar4 = (longlong)iVar1 * 0x58, *(longlong *)(lVar3 + 0x38 + lVar4) != *param_1)) {
    if (iVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x38 + lVar6) == *param_1) {
          uVar5 = (int)(lVar6 >> 3) * -0x45d1745d;
          if ((int)uVar5 < 0) {
            return 0;
          }
          if (iVar2 <= (int)uVar5) {
            return 0;
          }
          *(uint *)(param_1 + 1) = uVar5;
          return (ulonglong)(uVar5 & 0x7fffffff) * 0x58 + *param_2;
        }
        lVar6 = lVar6 + 0x58;
      } while ((longlong)iVar2 * 0x58 - lVar6 != 0);
    }
  }
  else {
    lVar4 = lVar3 + lVar4;
  }
  return lVar4;
}



// FUNCTION 140c58b60 FUN_140c58b60 body=203 status=ok
// SIG undefined FUN_140c58b60(void)

undefined8 * FUN_140c58b60(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 4) == '\x11') {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *param_2 = *param_1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0x11);
  pppuVar2 = (undefined8 ***)&DAT_14c9a8408;
  if (local_20 != 0) {
    pppuVar2 = local_40;
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pppuVar2 + 1);
  *param_2 = *pppuVar2;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c58c2c FUN_140c58c2c body=1240 status=ok
// SIG undefined FUN_140c58c2c(void)

bool FUN_140c58c2c(longlong param_1,longlong param_2,char *param_3,int *param_4,char param_5)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_f0;
  undefined8 local_e8;
  int local_e0;
  int local_d8 [2];
  undefined4 local_d0;
  int local_b4;
  char local_a8;
  char cStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_80;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_3 = '\0';
  param_3[4] = '\0';
  param_3[5] = '\0';
  param_3[6] = '\0';
  param_3[7] = '\0';
  param_3[8] = '\0';
  param_3[9] = '\0';
  param_3[10] = '\0';
  param_3[0xb] = '\0';
  param_3[0x30] = '\0';
  param_3[0x31] = '\0';
  param_3[0x32] = '\0';
  param_3[0x33] = '\0';
  param_3[0x10] = '\0';
  param_3[0x11] = '\0';
  param_3[0x12] = '\0';
  param_3[0x13] = '\0';
  param_3[0x14] = '\0';
  param_3[0x15] = '\0';
  param_3[0x16] = '\0';
  param_3[0x17] = '\0';
  param_3[0x18] = '\0';
  param_3[0x19] = '\0';
  param_3[0x1a] = '\0';
  param_3[0x1b] = '\0';
  param_3[0x1c] = '\0';
  param_3[0x1d] = '\0';
  param_3[0x1e] = '\0';
  param_3[0x1f] = '\0';
  param_3[0x20] = '\0';
  param_3[0x21] = '\0';
  param_3[0x22] = '\0';
  param_3[0x23] = '\0';
  if (*(int *)(param_3 + 0x34) != 0) {
    FUN_1446dda88(param_3 + 0x28,0);
  }
  param_3[1] = '\0';
  bVar2 = *(byte *)(param_2 + 0x28);
  if (bVar2 != 0) {
    puVar7 = (undefined8 *)(param_2 + 8);
    local_58 = *(ushort *)(param_2 + 0x20);
    if (local_58 < 0x19) {
      ppppuVar5 = local_70;
    }
    else {
      ppppuVar5 = (undefined8 ****)FUN_14001cc68(local_58,0);
      puVar7 = (undefined8 *)*puVar7;
      local_70[0] = ppppuVar5;
    }
    uVar4 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(ppppuVar5,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(ppppuVar5,puVar7);
    }
    local_50 = *(byte *)(param_2 + 0x28);
    if (local_50 == 0x11) {
      do {
        FUN_140c58b60(local_70,&local_a8);
        lVar6 = FUN_140c58ad8(&local_a8,param_1 + 0x58);
        if (lVar6 == 0) break;
        puVar7 = (undefined8 *)(lVar6 + 8);
        if (local_50 == *(byte *)(lVar6 + 0x28)) {
          if (0x18 < *(ushort *)(lVar6 + 0x20)) {
            puVar7 = *(undefined8 **)(lVar6 + 8);
          }
          ppppuVar5 = local_70;
          if (0x18 < local_58) {
            ppppuVar5 = (undefined8 ****)local_70[0];
          }
          uVar4 = (ulonglong)((uint)local_50 * 0x120);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
          if (pcVar3 == (code *)0x0) {
            memcpy(ppppuVar5,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
          }
          else {
            (*pcVar3)(ppppuVar5,puVar7);
          }
        }
        else {
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar5 = local_70;
            if (0x18 < local_58) {
              ppppuVar5 = (undefined8 ****)local_70[0];
            }
            (*pcVar3)(ppppuVar5);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
          bVar2 = *(byte *)(lVar6 + 0x28);
          local_58 = *(ushort *)(lVar6 + 0x20);
          if (local_58 < 0x19) {
            ppppuVar5 = local_70;
          }
          else {
            ppppuVar5 = (undefined8 ****)FUN_14001cc68(local_58,0);
            puVar7 = (undefined8 *)*puVar7;
            local_70[0] = ppppuVar5;
          }
          uVar4 = (ulonglong)((uint)bVar2 * 0x120);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
          if (pcVar3 == (code *)0x0) {
            memcpy(ppppuVar5,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
          }
          else {
            (*pcVar3)(ppppuVar5,puVar7);
          }
          local_50 = *(byte *)(lVar6 + 0x28);
        }
      } while (local_50 == 0x11);
    }
    pcVar1 = param_3 + 0x10;
    if (local_50 == 0x16) {
      FUN_140c59106(local_70,local_d8);
      if (local_d8[0] != 0) {
        *param_3 = '\v';
        FUN_140c25b54(param_3);
        local_f0 = local_d0;
        FUN_144928d62(pcVar1,0);
        if (*param_4 != 0) {
          local_100 = param_4[2];
          local_108 = *(undefined8 *)param_4;
          FUN_1402939f8(param_3);
        }
        if (param_5 != '\0') {
          local_110 = *(undefined8 *)(param_1 + 0xb8);
          FUN_1446dcdd4(&local_a8);
          lVar6 = FUN_14060eaf6(&local_a8);
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          if (lVar6 != 0) {
            FUN_140b7a400(lVar6,&local_a8,param_3);
            if (local_a8 != '\0') {
              *(undefined4 *)(param_3 + 8) = local_a0;
              *(ulonglong *)param_3 =
                   CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(cStack_a7,local_a8)));
              FUN_1447715ec(pcVar1);
            }
            if (local_80 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
    else if ((local_50 == 0x13) && (FUN_140c591d2(local_70,local_d8), local_b4 != 0)) {
      FUN_1409c4e4e(local_d8,&local_a8);
      *param_3 = local_a8;
      local_a8 = '\0';
      *(ulonglong *)(param_3 + 4) = CONCAT44(local_a0,uStack_a4);
      uStack_a4 = 0;
      local_a0 = 0;
      FUN_1404e49fa(pcVar1,local_98);
      param_3[1] = cStack_a7;
      cStack_a7 = '\0';
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*param_4 != 0) {
        local_e0 = param_4[2];
        local_e8 = *(undefined8 *)param_4;
        FUN_1402939f8(param_3);
      }
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar5 = (undefined8 ****)local_70[0];
      if (local_58 < 0x19) {
        ppppuVar5 = local_70;
      }
      (*pcVar3)(ppppuVar5);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_3 != '\0';
}



// FUNCTION 140c59106 FUN_140c59106 body=203 status=ok
// SIG undefined FUN_140c59106(void)

undefined8 * FUN_140c59106(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 4) == '\x16') {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *param_2 = *param_1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0x16);
  pppuVar2 = (undefined8 ***)&DAT_14cb861e8;
  if (local_20 != 0) {
    pppuVar2 = local_40;
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pppuVar2 + 1);
  *param_2 = *pppuVar2;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c591d2 FUN_140c591d2 body=226 status=ok
// SIG undefined FUN_140c591d2(void)

undefined4 * FUN_140c591d2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
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
  undefined8 ***pppuVar14;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\x13') {
    puVar1 = (undefined4 *)*param_1;
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    uVar7 = puVar1[4];
    uVar8 = puVar1[5];
    uVar9 = puVar1[6];
    uVar10 = puVar1[7];
    uVar11 = puVar1[9];
    uVar12 = puVar1[10];
    uVar13 = puVar1[0xb];
    param_2[8] = puVar1[8];
    param_2[9] = uVar11;
    param_2[10] = uVar12;
    param_2[0xb] = uVar13;
    param_2[4] = uVar7;
    param_2[5] = uVar8;
    param_2[6] = uVar9;
    param_2[7] = uVar10;
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0x13);
  pppuVar14 = (undefined8 ***)&DAT_14cb7c590;
  if (local_20 != 0) {
    pppuVar14 = (undefined8 ***)local_40[0];
  }
  uVar3 = *(undefined4 *)pppuVar14;
  uVar4 = *(undefined4 *)((longlong)pppuVar14 + 4);
  uVar5 = *(undefined4 *)(pppuVar14 + 1);
  uVar6 = *(undefined4 *)((longlong)pppuVar14 + 0xc);
  uVar7 = *(undefined4 *)(pppuVar14 + 2);
  uVar8 = *(undefined4 *)((longlong)pppuVar14 + 0x14);
  uVar9 = *(undefined4 *)(pppuVar14 + 3);
  uVar10 = *(undefined4 *)((longlong)pppuVar14 + 0x1c);
  uVar11 = *(undefined4 *)((longlong)pppuVar14 + 0x24);
  uVar12 = *(undefined4 *)(pppuVar14 + 5);
  uVar13 = *(undefined4 *)((longlong)pppuVar14 + 0x2c);
  param_2[8] = *(undefined4 *)(pppuVar14 + 4);
  param_2[9] = uVar11;
  param_2[10] = uVar12;
  param_2[0xb] = uVar13;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  param_2[6] = uVar9;
  param_2[7] = uVar10;
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar14 = local_40;
    if (0x18 < local_28) {
      pppuVar14 = (undefined8 ***)local_40[0];
    }
    (*pcVar2)(pppuVar14);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c592bc FUN_140c592bc body=57 status=ok
// SIG undefined FUN_140c592bc(void)

void FUN_140c592bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23030 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23030 = FUN_140002ddd(FUN_14643c9e7,uVar1,L"GpsTest_Attackers");
  }
  return;
}



// FUNCTION 140c592fc FUN_140c592fc body=57 status=ok
// SIG undefined FUN_140c592fc(void)

void FUN_140c592fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23798 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23798 = FUN_140002ddd(FUN_14643f49e,uVar1,L"GpsTest_TargetScoringBoost");
  }
  return;
}



// FUNCTION 140c59336 FUN_140c59336 body=663 status=ok
// SIG undefined FUN_140c59336(void)

void FUN_140c59336(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1447c0e7a();
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) goto LAB_140c594cf;
  if ((*(char *)(lVar1 + 0x84d) == '\x01') &&
     (*(undefined4 *)(param_1 + 0x660) = 0, *(int *)(param_1 + 0x664) != 0)) {
    FUN_145fd96a4(param_1 + 0x658,0);
  }
  lVar1 = FUN_1447210f0(lVar1);
  if (lVar1 == 0) goto LAB_140c594cf;
  lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x390) + 0x18))
                    (*(longlong *)(param_1 + 0x20) + 0x390);
  if (lVar2 != 0) {
    FUN_140c00c02(lVar2,param_1);
  }
  if (DAT_14caa7a28 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_14588a134;
    local_48 = &LAB_147473291;
    local_50 = FUN_1457f6a1e;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x88;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
  }
  lVar2 = DAT_14caa7a28;
  if ((DAT_14caa7a28 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14caa7a28 != 0) goto LAB_140c593db;
LAB_140c595dc:
    lVar3 = 0;
  }
  else {
    FUN_1456cec3c(DAT_14caa7a28);
    if (DAT_14caa7a28 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_14588a134;
      local_48 = &LAB_147473291;
      local_50 = FUN_1457f6a1e;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x88;
      FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
      if (DAT_14caa7a28 == 0) goto LAB_140c595dc;
    }
LAB_140c593db:
    if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14caa7a28 + 0x38)) goto LAB_140c595dc;
    lVar3 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caa7a28 + 0x38) * 8) ==
        DAT_14caa7a28 + 0x30) {
      lVar3 = lVar2;
    }
  }
  lVar1 = FUN_1448a6f9c(lVar1 + 0x870,lVar3);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_140c594cf:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c5969a FUN_140c5969a body=684 status=ok
// SIG undefined FUN_140c5969a(void)

void FUN_140c5969a(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,8);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar5 = (ulonglong)uVar4 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_140c596eb;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_140c596eb:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == param_1[1]) goto LAB_140c5973e;
      puVar3 = puVar3 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_140c5973e:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar6 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar6 + 0x1e) == param_1[2]) {
        if ((longlong)puVar1 + lVar6 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar6)) {
            *(int *)(lVar5 + 8 + lVar7 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar6) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar5 = *param_3;
            uVar4 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x20;
    } while ((ulonglong)uVar4 << 5 != lVar6);
    if (uVar4 != 0) {
      uVar2 = (uint)uVar4;
      lVar6 = 0;
      do {
        if (*(short *)((longlong)puVar1 + lVar6 + 0x1e) == param_1[3]) {
          if ((longlong)puVar1 + lVar6 != 0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar6)) {
              *(int *)(lVar5 + 0xc + lVar7 * 4) =
                   (int)*(ulonglong *)((longlong)puVar1 + lVar6) -
                   (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        lVar6 = lVar6 + 0x20;
      } while ((ulonglong)uVar4 << 5 != lVar6);
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[4]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar5 + 0x10 + lVar7 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[5]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar5 + 0x14 + lVar7 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[6]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar5 + 0x18 + lVar7 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
      puVar3 = (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1);
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[7]) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
            return;
          }
          *(int *)(lVar5 + 0x1c + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
          return;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar3);
    }
  }
  return;
}



// FUNCTION 140c59946 FUN_140c59946 body=220 status=ok
// SIG undefined FUN_140c59946(void)

int FUN_140c59946(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  iVar6 = 0;
  if (lVar5 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar6 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar4 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar4;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar3;
        if (lVar5 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar2[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar6;
    iVar6 = iVar1 - iVar6;
  }
  return iVar6;
}



// FUNCTION 140c59a2c FUN_140c59a2c body=181 status=ok
// SIG undefined FUN_140c59a2c(void)

undefined8 FUN_140c59a2c(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    local_28 = DAT_14c8464f0;
    local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_38 = *(undefined8 *)(lVar1 + 0x260);
    uStack_30 = *(undefined8 *)(lVar1 + 0x268);
    local_28 = *(undefined8 *)(lVar1 + 0x270);
  }
  uVar2 = FUN_14086aacd(param_1,&local_38);
  plVar3 = (longlong *)FUN_1405c6693(param_1);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 1;
  }
  else {
    local_38._0_5_ = (uint5)(uint)local_38;
    uVar4 = (**(code **)(*plVar3 + 0x7a0))(plVar3,param_1,uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c59ae2 FUN_140c59ae2 body=65 status=ok
// SIG undefined FUN_140c59ae2(void)

undefined4 FUN_140c59ae2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_144a06846(param_2,&DAT_14cb75260);
    (**(code **)(*param_1 + 0x58))(param_1,uVar2);
  }
  return uVar1;
}



// FUNCTION 140c59c06 FUN_140c59c06 body=9011 status=ok
// SIG undefined FUN_140c59c06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140c59c06(undefined8 param_1,longlong param_2,double *param_3,
                       undefined1 (*param_4) [16],double *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  char cVar9;
  undefined4 extraout_EAX;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined7 uVar14;
  longlong lVar13;
  uint uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar59;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar61;
  double dVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auStack_4d8 [32];
  double *local_4b8;
  longlong *local_4b0;
  uint local_49c;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_390;
  double local_388;
  double dStack_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368 [2];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
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
  undefined1 local_178 [16];
  double local_168;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if ((param_2 == 0) || (plVar17 = *(longlong **)(param_2 + 0x1c8), plVar17 == (longlong *)0x0)) {
    uVar21 = 0;
    goto LAB_140c5a4f2;
  }
  auVar77 = *param_4;
  auVar38 = divpd(auVar77,_DAT_1499387d0);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *(double *)param_4[1];
  auVar43 = divpd(auVar43,_DAT_1499387d0);
  auVar38 = roundpd(auVar38,auVar38,3);
  auVar43 = roundpd(auVar43,auVar43,3);
  dVar26 = (auVar77._0_8_ - auVar38._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar27 = (auVar77._8_8_ - auVar38._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar67 = (*(double *)param_4[1] - auVar43._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar68 = (0.0 - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  uVar12 = param_1;
  dVar23 = sin(dVar26);
  uVar72 = (undefined4)uVar12;
  dVar24 = sin(dVar27);
  dVar25 = sin(dVar67);
  sin(dVar68);
  dVar26 = cos(dVar26);
  dVar27 = cos(dVar27);
  dVar28 = cos(dVar67);
  cos(dVar68);
  dVar67 = -(dVar27 * dVar23 * dVar25) + dVar24 * dVar26 * dVar28;
  dVar68 = dVar24 * dVar23 * dVar25 + dVar27 * dVar26 * dVar28;
  uVar71 = (undefined4)((ulonglong)dVar68 >> 0x20);
  local_428 = dVar23 * dVar24 * dVar28 - dVar26 * dVar27 * dVar25;
  dStack_420 = -(dVar23 * dVar27 * dVar28) - dVar26 * dVar24 * dVar25;
  local_2e8._8_4_ = SUB84(dVar68,0);
  local_2e8._0_8_ = dVar67;
  local_2e8._12_4_ = uVar71;
  local_3b8 = *param_3;
  dStack_3b0 = param_3[1];
  local_3a8 = param_3[2];
  uStack_2c0 = 0;
  dVar26 = (double)DAT_149934d80;
  dVar27 = DAT_149934d80._8_8_;
  local_2b8 = _DAT_149934d80;
  local_2a8 = 0x3ff0000000000000;
  uStack_2a0 = 0;
  auVar77 = *(undefined1 (*) [16])(plVar17 + 0x50);
  auVar38 = *(undefined1 (*) [16])(plVar17 + 0x52);
  auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar77._8_8_));
  auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar77._0_8_));
  iVar10 = movmskpd(extraout_EAX,auVar50);
  auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar38._8_8_));
  auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_));
  uVar15 = movmskpd(uVar72,auVar51);
  if ((uVar15 & 0x3fffffff) == 0 && iVar10 == 0) {
    local_448._8_8_ = DAT_14c8464a8;
    local_448._0_8_ = DAT_14c8464a0;
    dStack_3f0 = DAT_14c8464b8;
    local_3f8 = DAT_14c8464b0;
    local_458 = DAT_14c8464c0;
    dStack_450 = DAT_14c8464c8;
    auVar77 = _DAT_14c8464d0;
    dVar23 = DAT_14c846480;
    dVar24 = DAT_14c846488;
    dVar25 = DAT_14c846490;
    dVar28 = DAT_14c846498;
  }
  else {
    auVar50 = divpd(_DAT_149934d80,auVar77);
    auVar43 = divpd(ZEXT816(0x3ff0000000000000),auVar38);
    local_458 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar77._0_8_)) & auVar50._0_8_);
    dStack_450 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar77._8_8_)) & auVar50._8_8_);
    dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_)) & auVar43._0_8_);
    auVar77._8_8_ = 0;
    auVar77._0_8_ = dVar29;
    dVar23 = -(double)plVar17[0x48];
    dVar24 = -(double)plVar17[0x49];
    dVar25 = (double)plVar17[0x4a] * -1.0;
    dVar28 = (double)plVar17[0x4b] * 1.0;
    dVar48 = (double)plVar17[0x4c] * local_458;
    dVar59 = (double)plVar17[0x4d] * dStack_450;
    dVar29 = (double)plVar17[0x4e] * dVar29;
    dVar42 = dVar59 * dVar23 - dVar24 * dVar48;
    dVar46 = dVar29 * dVar24 - dVar25 * dVar59;
    dVar47 = dVar48 * dVar25 - dVar23 * dVar29;
    dVar46 = dVar46 + dVar46;
    dVar47 = dVar47 + dVar47;
    dVar42 = dVar42 + dVar42;
    local_448._8_8_ =
         0.0 - (dVar42 * (double)plVar17[0x48] + dVar25 * dVar46 + dVar28 * dVar47 + dVar59);
    local_448._0_8_ = 0.0 - ((dVar42 * dVar24 - dVar47 * dVar25) + dVar28 * dVar46 + dVar48);
    local_3f8 = 0.0 - (dVar28 * dVar42 + dVar29 + (dVar47 * dVar23 - dVar46 * dVar24));
    dStack_3f0 = 0.0;
  }
  local_2f8 = local_428;
  dStack_2f0 = dStack_420;
  local_2d8 = local_3b8;
  dStack_2d0 = dStack_3b0;
  local_2c8 = local_3a8;
  lVar11 = FUN_1406c47dc(param_2);
  dStack_3a0 = 0.0;
  if ((lVar11 == 0) || (plVar1 = *(longlong **)(lVar11 + 0x118), plVar1 == (longlong *)0x0)) {
    local_368[0] = 0;
    local_368[1] = 0;
    lVar11 = FUN_144a3a302();
    dVar47 = 0.0;
    if (((*(int *)(plVar17[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
        (*(longlong *)(*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
         lVar11 + 0x30)) ||
       (((iVar10 = (**(code **)(*plVar17 + 0x570))(plVar17), iVar10 != 3 && (iVar10 != 5)) &&
        (iVar10 != 1)))) {
      local_49c = 0;
      uVar72 = 0;
      uVar71 = 0;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = local_498._8_8_;
      local_498 = auVar38 << 0x40;
      uVar21 = 0;
    }
    else {
      FUN_140c5bf3a(param_2,local_368,1);
      local_4b8 = param_5;
      local_4b0 = local_368;
      uVar12 = FUN_140c5c9ba(param_1,param_2,plVar17,&local_2f8);
      uVar14 = (undefined7)((ulonglong)uVar12 >> 8);
      if ((char)uVar12 == '\0') {
        local_49c = (uint)CONCAT71(uVar14,1);
        uVar21 = 0;
        uVar72 = 0;
        uVar71 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_498._8_8_;
        local_498 = auVar7 << 0x40;
      }
      else {
        if (param_5 == (double *)0x0) {
          dVar47 = 0.0;
          uVar21 = 0;
          uVar72 = 0;
          uVar71 = 0;
          uVar69 = 0;
          uVar70 = 0;
          bVar6 = false;
          lVar11 = local_368[0];
          goto LAB_140c5a4cb;
        }
        dVar47 = *param_5;
        uVar72 = SUB84(param_5[1],0);
        uVar71 = (undefined4)((ulonglong)param_5[1] >> 0x20);
        local_498._0_8_ = param_5[2];
        local_49c = (uint)CONCAT71(uVar14,1);
        uVar21 = CONCAT71((int7)((ulonglong)local_368 >> 8),1);
      }
    }
    uVar70 = 0;
    uVar69 = 0;
    local_378 = 0;
    uStack_370 = 0;
    bVar6 = true;
    FUN_1407329d4(plVar17,1,&local_378);
    lVar11 = local_378;
    lVar19 = (longlong)(int)uStack_370;
    if (lVar19 != 0) {
      lVar20 = 0;
      local_408 = auVar77;
      local_3d8 = dVar25;
      dStack_3d0 = dVar28;
      do {
        dVar25 = (double)CONCAT44(uVar71,uVar72);
        auVar76._8_8_ = CONCAT44(uVar70,uVar69);
        auVar76._0_8_ = dVar25;
        plVar17 = *(longlong **)(lVar11 + lVar20);
        uVar15 = (**(code **)(*plVar17 + 0x570))(plVar17);
        if (((uVar15 < 6) && ((0x2aU >> (uVar15 & 0x1f) & 1) != 0)) && (plVar17 != (longlong *)0x0))
        {
          lVar13 = FUN_144a3a302();
          if (*(int *)(lVar13 + 0x38) <= *(int *)(plVar17[2] + 0x38)) {
            lVar2 = *(longlong *)(plVar17[2] + 0x30);
            if (*(longlong *)(lVar2 + (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30) {
              local_3e8 = *(undefined1 (*) [16])(plVar17 + 0x50);
              auVar77 = *(undefined1 (*) [16])(plVar17 + 0x52);
              auVar5._8_8_ = dStack_450;
              auVar5._0_8_ = local_458;
              auVar38 = minpd(local_3e8,auVar5);
              auVar43 = minpd(auVar77,local_408);
              auVar41._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
              auVar41._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
              iVar10 = movmskpd((int)(lVar13 + 0x30),auVar41);
              auVar55._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
              auVar55._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
              uVar15 = movmskpd((int)lVar2,auVar55);
              local_468._0_8_ = auVar77._0_8_;
              local_468._8_8_ = auVar77._8_8_;
              if ((uVar15 & 0x3fffffff) == 0 && iVar10 == 0) {
                dVar28 = (double)plVar17[0x48];
                dVar29 = (double)plVar17[0x49];
                dVar42 = (double)plVar17[0x4a];
                dVar46 = (double)plVar17[0x4b];
                auVar3._8_4_ = SUB84(dStack_3d0,0);
                auVar3._0_8_ = dStack_3d0;
                auVar3._12_4_ = (int)((ulonglong)dStack_3d0 >> 0x20);
                local_3c8 = dVar29 * local_3d8 * -1.0 +
                            dVar23 * dVar46 * 1.0 + dStack_3d0 * dVar28 + dVar24 * dVar42;
                dStack_3c0 = dVar28 * local_3d8 * 1.0 +
                             dVar23 * dVar42 * -1.0 + dStack_3d0 * dVar29 + dVar24 * dVar46;
                local_478._8_8_ =
                     dVar42 * local_3d8 * -1.0 +
                     ((dVar23 * dVar28 * -1.0 + dStack_3d0 * dVar46) - dVar24 * dVar29);
                local_478._0_8_ =
                     dVar46 * local_3d8 * 1.0 +
                     ((dVar23 * dVar29 * 1.0 + dStack_3d0 * dVar42) - dVar24 * dVar28);
                dVar61 = (double)plVar17[0x4c] * local_458;
                dVar60 = (double)plVar17[0x4d] * dStack_450;
                dVar46 = (double)plVar17[0x4e] * (double)local_408._0_8_;
                dVar48 = (double)plVar17[0x4f] * (double)local_408._8_8_;
                dVar42 = dVar60 * dVar23 - dVar24 * dVar61;
                dVar59 = dVar46 * dVar24 - local_3d8 * dVar60;
                dVar28 = dVar61 * local_3d8 - dVar23 * dVar46;
                dVar29 = dVar48 * dStack_3d0 - dStack_3d0 * dVar48;
                dVar59 = dVar59 + dVar59;
                dVar28 = dVar28 + dVar28;
                local_418._8_8_ = auVar3._8_8_;
                dVar42 = dVar42 + dVar42;
                dVar29 = dVar29 + dVar29;
                local_438 = (dVar42 * dVar24 - local_3d8 * dVar28) + dStack_3d0 * dVar59 + dVar61 +
                            (double)local_448._0_8_;
                dStack_430 = (dVar59 * local_3d8 - dVar42 * dVar23) +
                             (double)local_418._8_8_ * dVar28 + dVar60 + (double)local_448._8_8_;
                local_418._8_8_ =
                     (dVar29 * dStack_3d0 - dVar29 * dStack_3d0) +
                     (double)local_418._8_8_ * dVar29 + dVar48 + dStack_3f0;
                local_418._0_8_ =
                     (dVar28 * dVar23 - dVar24 * dVar59) + dStack_3d0 * dVar42 + dVar46 + local_3f8;
                local_488._8_8_ = (double)local_468._8_8_ * (double)local_408._8_8_;
                local_488._0_8_ = (double)local_468._0_8_ * (double)local_408._0_8_;
                local_468._8_8_ = (double)local_3e8._8_8_ * dStack_450;
                local_468._0_8_ = (double)local_3e8._0_8_ * local_458;
                uVar16 = 0;
                local_388 = dVar23;
                dStack_380 = dVar24;
              }
              else {
                dVar28 = dVar24 + dVar24;
                dVar42 = local_3d8 + local_3d8;
                dVar29 = dVar23 * (dVar23 + dVar23);
                local_1f8 = (dVar26 - (local_3d8 * dVar42 + dVar24 * dVar28)) * local_458;
                dStack_1d0 = (dVar27 - (local_3d8 * dVar42 + dVar29)) * dStack_450;
                local_438 = (1.0 - (dVar29 + dVar24 * dVar28)) * (double)local_408._0_8_;
                dVar29 = (dVar23 + dVar23) * dStack_3d0;
                dStack_1f0 = (dVar28 * dVar23 + dVar42 * dStack_3d0) * local_458;
                local_1c8 = (dVar42 * dVar24 + dVar29) * dStack_450;
                local_1b8 = (dVar23 * dVar42 + dVar28 * dStack_3d0) * (double)local_408._0_8_;
                local_1d8 = (dVar28 * dVar23 - dVar42 * dStack_3d0) * dStack_450;
                dStack_1b0 = (dVar42 * dVar24 - dVar29) * (double)local_408._0_8_;
                local_1e8 = (dVar23 * dVar42 - dVar28 * dStack_3d0) * local_458;
                dStack_430 = 0.0;
                local_488._8_8_ = (double)local_408._8_8_ * (double)local_468._8_8_;
                local_488._0_8_ = (double)local_408._0_8_ * (double)local_468._0_8_;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = (double)local_448._0_8_;
                dStack_190 = (double)local_448._8_8_;
                local_188 = local_3f8;
                uStack_180 = 0x3ff0000000000000;
                dVar29 = (double)plVar17[0x48];
                dVar42 = (double)plVar17[0x49];
                dVar46 = (double)plVar17[0x4a];
                dVar48 = dVar42 + dVar42;
                dVar59 = dVar46 + dVar46;
                dVar49 = dVar29 * (dVar29 + dVar29);
                dVar65 = dVar42 * dVar48;
                local_228 = (1.0 - (dVar49 + dVar65)) * (double)local_468._0_8_;
                local_478._8_8_ = (0.0 - (dVar49 + dVar65)) * (double)local_468._8_8_;
                local_478._0_8_ = local_228;
                dVar28 = (double)plVar17[0x4b];
                dVar61 = dVar59 * dVar28;
                dVar60 = (dVar29 + dVar29) * (double)plVar17[0x4b];
                dVar28 = dVar48 * dVar28;
                local_238 = (dVar28 + (double)plVar17[0x48] * dVar59) * (double)local_468._0_8_;
                local_258 = (dVar48 * dVar29 - dVar61) * (double)local_3e8._8_8_;
                dStack_230 = (dVar59 * dVar42 - dVar60) * (double)local_468._0_8_;
                local_468._8_8_ = dStack_450 * (double)local_3e8._8_8_;
                local_468._0_8_ = local_458 * (double)local_3e8._0_8_;
                local_278 = (1.0 - (dVar46 * dVar59 + dVar65)) * (double)local_3e8._0_8_;
                dStack_250 = (1.0 - (dVar46 * dVar59 + dVar49)) * (double)local_3e8._8_8_;
                dStack_270 = (dVar48 * dVar29 + dVar61) * (double)local_3e8._0_8_;
                local_248 = (dVar59 * dVar42 + dVar60) * (double)local_3e8._8_8_;
                local_268 = ((double)plVar17[0x48] * dVar59 - dVar28) * (double)local_3e8._0_8_;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = *(undefined1 (*) [16])(plVar17 + 0x4c);
                local_208._8_8_ = 0x3ff0000000000000;
                local_208._0_8_ = plVar17[0x4e];
                local_1a8 = local_438;
                FUN_1447fea8d(local_178);
                FUN_144a1c686(local_178,0x3e45798ee0000000);
                auVar77 = _DAT_149934d80;
                auVar34._8_8_ = -(ulonglong)(0.0 <= (double)local_468._8_8_);
                auVar34._0_8_ = -(ulonglong)(0.0 <= (double)local_468._0_8_);
                auVar38 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
                dVar28 = (double)(~-(ulonglong)(0.0 <= (double)local_488._0_8_) & 0xbff0000000000000
                                 | -(ulonglong)(0.0 <= (double)local_488._0_8_) & 0x3ff0000000000000
                                 );
                dVar29 = auVar38._0_8_;
                local_168 = local_168 * dVar29;
                local_178._8_8_ = (double)local_178._8_8_ * dVar29;
                local_178._0_8_ = (double)local_178._0_8_ * dVar29;
                dVar29 = auVar38._8_8_;
                local_148 = local_148 * dVar29;
                local_150 = local_150 * dVar29;
                local_158 = dVar29 * local_158;
                local_128 = local_128 * dVar28;
                local_130 = local_130 * dVar28;
                local_138 = dVar28 * local_138;
                uVar16 = SUB84(local_358,0);
                FUN_14481fd10();
                dVar28 = (double)local_348._0_8_ * (double)local_348._0_8_ +
                         (double)local_358._0_8_ * (double)local_358._0_8_;
                dVar29 = (double)local_348._8_8_ * (double)local_348._8_8_ +
                         (double)local_358._8_8_ * (double)local_358._8_8_;
                auVar56._0_8_ = dVar28 + dVar29;
                auVar56._8_8_ = dVar28 + dVar29;
                auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar56._8_8_);
                auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar56._0_8_);
                auVar38 = sqrtpd(auVar56,auVar56);
                auVar77 = divpd(auVar77,auVar38);
                auVar63._0_8_ = auVar77._0_8_ * (double)local_348._0_8_;
                auVar63._8_8_ = auVar77._8_8_ * (double)local_348._8_8_;
                local_3c8 = (double)((ulonglong)((double)local_358._0_8_ * auVar77._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar56._0_8_));
                dStack_3c0 = (double)((ulonglong)((double)local_358._8_8_ * auVar77._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar56._8_8_));
                local_478 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar35);
                local_438 = local_118;
                dStack_430 = dStack_110;
                local_418._8_8_ = 0;
                local_418._0_8_ = local_108;
              }
              local_328 = ZEXT816(0);
              local_338 = 0.0;
              dStack_330 = 0.0;
              auVar77 = minpd(local_468,_DAT_149934d80);
              auVar38 = minpd(local_488,ZEXT816(0x3ff0000000000000));
              auVar57._8_8_ = -(ulonglong)(auVar77._8_8_ < 0.0);
              auVar57._0_8_ = -(ulonglong)(auVar77._0_8_ < 0.0);
              iVar10 = movmskpd((int)&local_338,auVar57);
              auVar66._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
              auVar66._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
              uVar15 = movmskpd(uVar16,auVar66);
              if ((uVar15 & 0x3fffffff) == 0 && iVar10 == 0) {
                local_3e8._8_8_ = dVar68;
                local_3e8._0_8_ = dVar68;
                local_358._8_8_ =
                     local_3c8 * dVar67 * 1.0 +
                     local_428 * (double)local_478._0_8_ * -1.0 + dVar68 * dStack_3c0 +
                     dStack_420 * (double)local_478._8_8_;
                local_358._0_8_ =
                     dStack_3c0 * dVar67 * -1.0 +
                     local_428 * (double)local_478._8_8_ * 1.0 + dVar68 * local_3c8 +
                     dStack_420 * (double)local_478._0_8_;
                local_348._8_8_ =
                     (double)local_478._0_8_ * dVar67 * -1.0 +
                     ((local_428 * local_3c8 * -1.0 + dVar68 * (double)local_478._8_8_) -
                     dStack_420 * dStack_3c0);
                local_348._0_8_ =
                     (double)local_478._8_8_ * dVar67 * 1.0 +
                     ((local_428 * dStack_3c0 * 1.0 + dVar68 * (double)local_478._0_8_) -
                     dStack_420 * local_3c8);
                dVar46 = (double)local_418._0_8_ * 1.0;
                dVar48 = (double)local_418._8_8_ * 0.0;
                dVar28 = dStack_430 * local_428 - dStack_420 * local_438;
                dVar29 = dVar46 * dStack_420 - dVar67 * dStack_430;
                dVar42 = local_438 * dVar67 - local_428 * dVar46;
                dVar59 = dVar48 * dVar68 - dVar68 * dVar48;
                dVar29 = dVar29 + dVar29;
                dVar42 = dVar42 + dVar42;
                dVar28 = dVar28 + dVar28;
                dVar59 = dVar59 + dVar59;
                local_338 = (dVar28 * dStack_420 - dVar67 * dVar42) + dVar68 * dVar29 + local_438 +
                            local_3b8;
                dStack_330 = (dVar29 * dVar67 - dVar28 * local_428) + dVar68 * dVar42 + dStack_430 +
                             dStack_3b0;
                local_328._0_8_ =
                     (dVar42 * local_428 - dStack_420 * dVar29) + dVar68 * dVar28 + dVar46 +
                     local_3a8;
                local_328._8_8_ =
                     (dVar59 * dVar68 - dVar59 * dVar68) + dVar68 * dVar59 + dVar48 + dStack_3a0;
                local_488._8_8_ = (double)local_488._8_8_ * 0.0;
                local_488._0_8_ = (double)local_488._0_8_ * 1.0;
              }
              else {
                dVar42 = dStack_420 + dStack_420;
                dVar28 = dVar67 + dVar67;
                dVar29 = local_428 * (local_428 + local_428);
                local_1f8 = dVar26 - (dVar67 * dVar28 + dStack_420 * dVar42);
                dStack_1d0 = dVar27 - (dVar67 * dVar28 + dVar29);
                local_1a8 = 1.0 - (dVar29 + dStack_420 * dVar42);
                dStack_1b0 = (local_428 + local_428) * dVar68;
                dStack_1f0 = dVar42 * local_428 + dVar28 * dVar68;
                local_1c8 = dVar28 * dStack_420 + dStack_1b0;
                local_1d8 = dVar42 * local_428 - dVar28 * dVar68;
                dStack_1b0 = dVar28 * dStack_420 - dStack_1b0;
                local_1b8 = dVar42 * dVar68 + local_428 * dVar28;
                local_1e8 = local_428 * dVar28 - dVar42 * dVar68;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = local_2d8;
                dStack_190 = dStack_2d0;
                local_188 = local_2c8;
                uStack_180 = 0x3ff0000000000000;
                dVar42 = dStack_3c0 + dStack_3c0;
                dVar28 = (double)local_478._0_8_ + (double)local_478._0_8_;
                dVar46 = local_3c8 * (local_3c8 + local_3c8);
                uVar12 = local_468._0_8_;
                uVar8 = local_468._8_8_;
                local_278 = (1.0 - ((double)local_478._0_8_ * dVar28 + dStack_3c0 * dVar42)) *
                            (double)local_468._0_8_;
                dStack_250 = (1.0 - ((double)local_478._0_8_ * dVar28 + dVar46)) *
                             (double)local_468._8_8_;
                dVar29 = (local_3c8 + local_3c8) * (double)local_478._8_8_;
                local_258 = (dVar42 * local_3c8 - dVar28 * (double)local_478._8_8_) *
                            (double)local_468._8_8_;
                dStack_230 = (dVar28 * dStack_3c0 - dVar29) * (double)local_488._0_8_;
                local_238 = (local_3c8 * dVar28 + dVar42 * (double)local_478._8_8_) *
                            (double)local_488._0_8_;
                dStack_270 = (dVar42 * local_3c8 + dVar28 * (double)local_478._8_8_) *
                             (double)local_468._0_8_;
                local_248 = (dVar28 * dStack_3c0 + dVar29) * (double)local_468._8_8_;
                local_268 = (local_3c8 * dVar28 - dVar42 * (double)local_478._8_8_) *
                            (double)local_468._0_8_;
                uStack_260 = 0;
                uStack_240 = 0;
                local_228 = (1.0 - (dVar46 + dStack_3c0 * dVar42)) * (double)local_488._0_8_;
                uStack_220 = 0;
                local_218._8_8_ = dStack_430;
                local_218._0_8_ = local_438;
                local_208._8_8_ = 0x3ff0000000000000;
                local_208._0_8_ = local_418._0_8_;
                dVar28 = (double)local_488._0_8_ * 1.0;
                dVar29 = (double)local_488._8_8_ * 0.0;
                FUN_1447fea8d(local_178);
                FUN_144a1c686(local_178,0x3e45798ee0000000);
                auVar77 = _DAT_149934d80;
                auVar36._8_8_ = -(ulonglong)(0.0 <= (double)uVar8);
                auVar36._0_8_ = -(ulonglong)(0.0 <= (double)uVar12);
                auVar38 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
                local_488._8_4_ = SUB84(dVar29,0);
                local_488._0_8_ = dVar28;
                local_488._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
                uVar22 = -(ulonglong)(0.0 <= dVar28);
                dVar28 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
                dVar29 = auVar38._0_8_;
                local_168 = local_168 * dVar29;
                local_178._8_8_ = (double)local_178._8_8_ * dVar29;
                local_178._0_8_ = (double)local_178._0_8_ * dVar29;
                dVar29 = auVar38._8_8_;
                local_148 = local_148 * dVar29;
                local_150 = local_150 * dVar29;
                local_158 = dVar29 * local_158;
                local_128 = local_128 * dVar28;
                local_130 = local_130 * dVar28;
                local_138 = dVar28 * local_138;
                FUN_14481fd10(&local_298);
                dVar28 = local_288 * local_288 + local_298 * local_298;
                dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar58._0_8_ = dVar28 + dVar29;
                auVar58._8_8_ = dVar28 + dVar29;
                auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
                auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
                auVar38 = sqrtpd(auVar58,auVar58);
                auVar77 = divpd(auVar77,auVar38);
                auVar64._0_8_ = auVar77._0_8_ * local_288;
                auVar64._8_8_ = auVar77._8_8_ * dStack_280;
                local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar37);
                local_358._8_8_ =
                     (ulonglong)(dStack_290 * auVar77._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
                local_358._0_8_ =
                     (ulonglong)(local_298 * auVar77._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
                local_338 = local_118;
                dStack_330 = dStack_110;
                local_328._8_8_ = 0;
                local_328._0_8_ = local_108;
              }
              local_318 = local_468._0_8_;
              uStack_310 = local_468._8_8_;
              local_308 = local_488;
              if ((local_49c & 1) == 0) {
                FUN_140c5bf3a(param_2,local_368,1);
              }
              local_4b0 = local_368;
              local_4b8 = param_5;
              uVar12 = FUN_140c5c9ba(param_1,param_2,plVar17,local_358);
              if ((char)uVar12 != '\0') {
                if (param_5 == (double *)0x0) {
                  bVar6 = false;
                  break;
                }
                dVar28 = *param_5;
                dVar29 = param_5[1];
                dVar42 = param_5[2];
                uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
                if (((dVar47 != 0.0) || (NAN(dVar47))) ||
                   ((dVar25 != 0.0 ||
                    (((NAN(dVar25) || ((double)local_498._0_8_ != 0.0)) ||
                     (NAN((double)local_498._0_8_))))))) {
                  dVar60 = (double)local_498._0_8_ * (double)local_498._0_8_ +
                           dVar47 * dVar47 + dVar25 * dVar25;
                  dVar46 = SQRT(dVar60);
                  dVar48 = DAT_14c8464e0;
                  dVar59 = DAT_14c8464f0;
                  dVar61 = DAT_14c8464e8;
                  if (9.999999747378752e-05 <= dVar46) {
                    dVar60 = (dVar42 * (double)local_498._0_8_ + dVar28 * dVar47 + dVar25 * dVar29)
                             / dVar60;
                    dVar59 = (double)local_498._0_8_ * dVar60;
                    dVar61 = dVar25 * dVar60;
                    dVar48 = dVar60 * dVar47;
                    dVar60 = dVar59 * dVar59 + dVar48 * dVar48 + dVar61 * dVar61;
                    local_390 = dVar47;
                    if (dVar46 * dVar46 < dVar60) {
                      dVar46 = dVar46 * (1.0 / SQRT(dVar60));
                      dVar48 = dVar48 * dVar46;
                      dVar59 = dVar59 * dVar46;
                      dVar61 = dVar61 * dVar46;
                    }
                  }
                  local_498._0_8_ = (double)local_498._0_8_ + (dVar42 - dVar59);
                  auVar76._0_8_ = dVar25 + (dVar29 - dVar61);
                  dVar47 = dVar47 + (dVar28 - dVar48);
                }
                else {
                  auVar76._8_8_ = 0;
                  auVar76._0_8_ = dVar29;
                  local_498._0_8_ = dVar42;
                  dVar47 = dVar28;
                }
              }
              local_49c = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
            }
          }
        }
        lVar20 = lVar20 + 8;
        bVar6 = true;
        uVar72 = auVar76._0_4_;
        uVar71 = auVar76._4_4_;
        uVar69 = auVar76._8_4_;
        uVar70 = auVar76._12_4_;
      } while (lVar19 * 8 != lVar20);
    }
    uVar69 = local_498._0_4_;
    uVar70 = local_498._4_4_;
    lVar11 = local_368[0];
    if (local_378 != 0) {
      FUN_1400020a8(local_378);
      lVar11 = local_368[0];
    }
LAB_140c5a4cb:
    if (lVar11 != 0) {
      FUN_1400020a8();
    }
    if (!bVar6) {
      uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
      goto LAB_140c5a4f2;
    }
  }
  else {
    plVar17 = plVar1;
    iVar10 = (**(code **)(*plVar1 + 0x570))();
    auVar38 = _DAT_149934d80;
    if (((iVar10 == 3) || (iVar10 == 5)) || (iVar10 == 1)) {
      local_498._8_4_ = SUB84(dVar68,0);
      local_498._0_8_ = dVar67;
      local_498._12_4_ = uVar71;
      auVar43 = *(undefined1 (*) [16])(plVar1 + 0x50);
      dVar26 = auVar43._0_8_;
      dVar67 = auVar43._8_8_;
      auVar50 = *(undefined1 (*) [16])(plVar1 + 0x52);
      dVar27 = auVar50._0_8_;
      auVar4._8_8_ = dStack_450;
      auVar4._0_8_ = local_458;
      auVar43 = minpd(auVar43,auVar4);
      auVar51 = minpd(auVar50,auVar77);
      auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
      iVar10 = movmskpd(iVar10,auVar44);
      auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
      auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
      uVar15 = movmskpd((int)plVar17,auVar52);
      dVar68 = auVar77._0_8_;
      if ((uVar15 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar47 = (double)plVar1[0x48];
        dVar46 = (double)plVar1[0x49];
        dVar48 = (double)plVar1[0x4a];
        dVar59 = (double)plVar1[0x4b];
        dVar29 = dVar46 * dVar25 * -1.0 + dVar48 * dVar24 + dVar23 * dVar59 * 1.0 + dVar28 * dVar47;
        dVar42 = dVar47 * dVar25 * 1.0 + dVar59 * dVar24 + dVar23 * dVar48 * -1.0 + dVar28 * dVar46;
        auVar75._0_8_ =
             dVar59 * dVar25 * 1.0 + ((dVar23 * dVar46 * 1.0 + dVar28 * dVar48) - dVar24 * dVar47);
        auVar75._8_8_ =
             dVar48 * dVar25 * -1.0 + ((dVar23 * dVar47 * -1.0 + dVar28 * dVar59) - dVar24 * dVar46)
        ;
        dVar46 = (double)plVar1[0x4c] * local_458;
        dVar48 = (double)plVar1[0x4d] * dStack_450;
        dVar59 = (double)plVar1[0x4e] * dVar68;
        dVar47 = (double)plVar1[0x4f] * auVar77._8_8_;
        dVar61 = dVar48 * dVar23 - dVar24 * dVar46;
        dVar65 = dVar59 * dVar24 - dVar25 * dVar48;
        dVar49 = dVar46 * dVar25 - dVar23 * dVar59;
        dVar60 = dVar47 * dVar28 - dVar28 * dVar47;
        dVar65 = dVar65 + dVar65;
        dVar49 = dVar49 + dVar49;
        dVar61 = dVar61 + dVar61;
        dVar60 = dVar60 + dVar60;
        dVar47 = dStack_3f0 + (dVar60 * dVar28 - dVar60 * dVar28) + dVar28 * dVar60 + dVar47;
        auVar73._8_8_ = dVar67 * dStack_450;
        auVar73._0_8_ = dVar26 * local_458;
        uVar72 = 0;
        dVar67 = (double)local_448._0_8_ +
                 (dVar61 * dVar24 - dVar25 * dVar49) + dVar28 * dVar65 + dVar46;
        dVar25 = (double)local_448._8_8_ +
                 (dVar65 * dVar25 - dVar61 * dVar23) + dVar28 * dVar49 + dVar48;
        dVar26 = local_3f8 + (dVar49 * dVar23 - dVar24 * dVar65) + dVar28 * dVar61 + dVar59;
      }
      else {
        dVar42 = dVar24 + dVar24;
        dVar47 = dVar25 + dVar25;
        dVar29 = dVar23 * (dVar23 + dVar23);
        local_1f8 = ((double)DAT_149934d80 - (dVar25 * dVar47 + dVar24 * dVar42)) * local_458;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar25 * dVar47 + dVar29)) * dStack_450;
        dVar25 = (dVar23 + dVar23) * dVar28;
        local_1d8 = (dVar42 * dVar23 - dVar47 * dVar28) * dStack_450;
        dStack_1b0 = (dVar47 * dVar24 - dVar25) * dVar68;
        local_1b8 = (dVar23 * dVar47 + dVar42 * dVar28) * dVar68;
        local_1a8 = (1.0 - (dVar29 + dVar24 * dVar42)) * dVar68;
        dStack_1f0 = (dVar42 * dVar23 + dVar47 * dVar28) * local_458;
        local_1c8 = (dVar47 * dVar24 + dVar25) * dStack_450;
        local_1e8 = (dVar23 * dVar47 - dVar42 * dVar28) * local_458;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = (double)local_448._0_8_;
        dStack_190 = (double)local_448._8_8_;
        local_188 = local_3f8;
        uStack_180 = 0x3ff0000000000000;
        dVar25 = (double)plVar1[0x48];
        dVar28 = (double)plVar1[0x49];
        dVar47 = (double)plVar1[0x4a];
        dVar29 = dVar28 + dVar28;
        dVar42 = dVar47 + dVar47;
        dVar24 = dVar25 * (dVar25 + dVar25);
        local_228 = (1.0 - (dVar24 + dVar28 * dVar29)) * dVar27;
        dVar23 = (double)plVar1[0x4b];
        dVar46 = dVar42 * dVar23;
        dVar48 = (dVar25 + dVar25) * (double)plVar1[0x4b];
        dVar23 = dVar29 * dVar23;
        local_238 = (dVar23 + (double)plVar1[0x48] * dVar42) * dVar27;
        local_258 = (dVar29 * dVar25 - dVar46) * dVar67;
        dStack_230 = (dVar42 * dVar28 - dVar48) * dVar27;
        auVar73._0_8_ = local_458 * dVar26;
        auVar73._8_8_ = dStack_450 * dVar67;
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar42 + dVar28 * dVar29)) * dVar26;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar42 + dVar24)) * dVar67;
        dStack_270 = (dVar29 * dVar25 + dVar46) * dVar26;
        local_248 = (dVar42 * dVar28 + dVar48) * dVar67;
        local_268 = ((double)plVar1[0x48] * dVar42 - dVar23) * dVar26;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined1 (*) [16])(plVar1 + 0x4c);
        local_208._8_8_ = 0x3ff0000000000000;
        local_208._0_8_ = plVar1[0x4e];
        FUN_1447fea8d(local_178);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar30._8_8_ = -(ulonglong)(0.0 <= auVar73._8_8_);
        auVar30._0_8_ = -(ulonglong)(0.0 <= auVar73._0_8_);
        auVar43 = blendvpd(_DAT_149936790,auVar38,auVar30);
        uVar21 = -(ulonglong)(0.0 <= dVar68 * dVar27);
        dVar26 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
        dVar67 = auVar43._0_8_;
        local_168 = local_168 * dVar67;
        local_178._8_8_ = (double)local_178._8_8_ * dVar67;
        local_178._0_8_ = (double)local_178._0_8_ * dVar67;
        dVar67 = auVar43._8_8_;
        local_148 = local_148 * dVar67;
        local_150 = local_150 * dVar67;
        local_158 = dVar67 * local_158;
        local_128 = local_128 * dVar26;
        local_130 = local_130 * dVar26;
        local_138 = dVar26 * local_138;
        puVar18 = local_358;
        iVar10 = FUN_14481fd10(puVar18,local_178);
        uVar72 = SUB84(puVar18,0);
        dVar26 = (double)local_348._0_8_ * (double)local_348._0_8_ +
                 (double)local_358._0_8_ * (double)local_358._0_8_;
        dVar67 = (double)local_348._8_8_ * (double)local_348._8_8_ +
                 (double)local_358._8_8_ * (double)local_358._8_8_;
        auVar53._0_8_ = dVar26 + dVar67;
        auVar53._8_8_ = dVar26 + dVar67;
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
        auVar43 = sqrtpd(auVar53,auVar53);
        auVar38 = divpd(auVar38,auVar43);
        auVar62._0_8_ = auVar38._0_8_ * (double)local_348._0_8_;
        auVar62._8_8_ = auVar38._8_8_ * (double)local_348._8_8_;
        dVar29 = (double)((ulonglong)((double)local_358._0_8_ * auVar38._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_));
        dVar42 = (double)((ulonglong)((double)local_358._8_8_ * auVar38._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_));
        auVar75 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar31);
        dVar47 = 0.0;
        dVar67 = local_118;
        dVar25 = dStack_110;
        dVar26 = local_108;
      }
      auVar38 = _DAT_149934d80;
      dVar23 = auVar50._8_8_ * auVar77._8_8_;
      dVar27 = dVar27 * dVar68;
      local_328 = ZEXT816(0);
      local_338 = 0.0;
      dStack_330 = 0.0;
      auVar43 = minpd(auVar73,_DAT_149934d80);
      auVar39._8_8_ = dVar23;
      auVar39._0_8_ = dVar27;
      auVar77 = minpd(auVar39,ZEXT816(0x3ff0000000000000));
      auVar74._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
      auVar74._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
      iVar10 = movmskpd(iVar10,auVar74);
      auVar40._8_8_ = -(ulonglong)(auVar77._8_8_ < 0.0);
      auVar40._0_8_ = -(ulonglong)(auVar77._0_8_ < 0.0);
      uVar15 = movmskpd(uVar72,auVar40);
      dVar68 = auVar75._0_8_;
      dVar24 = auVar75._8_8_;
      local_448 = auVar73;
      if ((uVar15 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar28 = dVar29 * (double)local_498._0_8_ * 1.0 +
                 dVar24 * dStack_420 + local_428 * dVar68 * -1.0 + (double)local_498._8_8_ * dVar42;
        local_358._8_4_ = SUB84(dVar28,0);
        local_358._0_8_ =
             dVar42 * (double)local_498._0_8_ * -1.0 +
             dVar68 * dStack_420 + local_428 * dVar24 * 1.0 + (double)local_498._8_8_ * dVar29;
        local_358._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        local_348._8_8_ =
             dVar68 * (double)local_498._0_8_ * -1.0 +
             ((local_428 * dVar29 * -1.0 + (double)local_498._8_8_ * dVar24) - dStack_420 * dVar42);
        local_348._0_8_ =
             dVar24 * (double)local_498._0_8_ * 1.0 +
             ((local_428 * dVar42 * 1.0 + (double)local_498._8_8_ * dVar68) - dStack_420 * dVar29);
        dVar26 = dVar26 * 1.0;
        dVar47 = dVar47 * 0.0;
        dVar68 = dVar25 * local_428 - dStack_420 * dVar67;
        dVar24 = dVar26 * dStack_420 - (double)local_498._0_8_ * dVar25;
        dVar28 = dVar67 * (double)local_498._0_8_ - local_428 * dVar26;
        dVar29 = dVar47 * (double)local_498._8_8_ - (double)local_498._8_8_ * dVar47;
        dVar24 = dVar24 + dVar24;
        dVar28 = dVar28 + dVar28;
        dVar68 = dVar68 + dVar68;
        dVar29 = dVar29 + dVar29;
        local_338 = local_3b8 +
                    (dVar68 * dStack_420 - (double)local_498._0_8_ * dVar28) +
                    (double)local_498._8_8_ * dVar24 + dVar67;
        dStack_330 = dStack_3b0 +
                     (dVar24 * (double)local_498._0_8_ - dVar68 * local_428) +
                     (double)local_498._8_8_ * dVar28 + dVar25;
        local_328._8_8_ =
             dStack_3a0 +
             (dVar29 * (double)local_498._8_8_ - dVar29 * (double)local_498._8_8_) +
             (double)local_498._8_8_ * dVar29 + dVar47;
        local_328._0_8_ =
             local_3a8 +
             (dVar28 * local_428 - dStack_420 * dVar24) + (double)local_498._8_8_ * dVar68 + dVar26;
      }
      else {
        dVar28 = dStack_420 + dStack_420;
        dVar46 = (double)local_498._0_8_ + (double)local_498._0_8_;
        dVar47 = local_428 * (local_428 + local_428);
        local_1f8 = (double)DAT_149934d80 - ((double)local_498._0_8_ * dVar46 + dStack_420 * dVar28)
        ;
        dStack_1d0 = DAT_149934d80._8_8_ - ((double)local_498._0_8_ * dVar46 + dVar47);
        local_1a8 = 1.0 - (dVar47 + dStack_420 * dVar28);
        dStack_1b0 = (local_428 + local_428) * (double)local_498._8_8_;
        dStack_1f0 = dVar28 * local_428 + dVar46 * (double)local_498._8_8_;
        local_1c8 = dVar46 * dStack_420 + dStack_1b0;
        local_1d8 = dVar28 * local_428 - dVar46 * (double)local_498._8_8_;
        dStack_1b0 = dVar46 * dStack_420 - dStack_1b0;
        local_1b8 = dVar28 * (double)local_498._8_8_ + local_428 * dVar46;
        local_1e8 = local_428 * dVar46 - dVar28 * (double)local_498._8_8_;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_3b8;
        dStack_190 = dStack_3b0;
        local_188 = local_3a8;
        uStack_180 = 0x3ff0000000000000;
        dVar28 = dVar42 + dVar42;
        dVar46 = dVar68 + dVar68;
        dVar47 = dVar29 * (dVar29 + dVar29);
        local_448._0_8_ = auVar73._0_8_;
        uVar12 = local_448._0_8_;
        local_448._8_8_ = auVar73._8_8_;
        uVar8 = local_448._8_8_;
        local_278 = ((double)DAT_149934d80 - (dVar68 * dVar46 + dVar42 * dVar28)) *
                    (double)local_448._0_8_;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar68 * dVar46 + dVar47)) * (double)local_448._8_8_;
        dVar68 = (dVar29 + dVar29) * dVar24;
        local_258 = (dVar28 * dVar29 - dVar46 * dVar24) * (double)local_448._8_8_;
        dStack_230 = (dVar46 * dVar42 - dVar68) * dVar27;
        local_238 = (dVar29 * dVar46 + dVar28 * dVar24) * dVar27;
        dStack_270 = (dVar28 * dVar29 + dVar46 * dVar24) * (double)local_448._0_8_;
        local_248 = (dVar46 * dVar42 + dVar68) * (double)local_448._8_8_;
        local_268 = (dVar29 * dVar46 - dVar28 * dVar24) * (double)local_448._0_8_;
        uStack_260 = 0;
        uStack_240 = 0;
        local_228 = (1.0 - (dVar47 + dVar42 * dVar28)) * dVar27;
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar25,0);
        local_218._0_8_ = dVar67;
        local_218._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        local_208._8_4_ = 0;
        local_208._0_8_ = dVar26;
        local_208._12_4_ = 0x3ff00000;
        FUN_1447fea8d(local_178);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar32._8_8_ = -(ulonglong)(0.0 <= (double)uVar8);
        auVar32._0_8_ = -(ulonglong)(0.0 <= (double)uVar12);
        auVar77 = blendvpd(_DAT_149936790,auVar38,auVar32);
        uVar21 = -(ulonglong)(0.0 <= dVar27 * 1.0);
        dVar26 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
        dVar67 = auVar77._0_8_;
        local_168 = local_168 * dVar67;
        local_178._8_8_ = (double)local_178._8_8_ * dVar67;
        local_178._0_8_ = (double)local_178._0_8_ * dVar67;
        dVar67 = auVar77._8_8_;
        local_148 = local_148 * dVar67;
        local_150 = local_150 * dVar67;
        local_158 = dVar67 * local_158;
        local_128 = local_128 * dVar26;
        local_130 = local_130 * dVar26;
        local_138 = dVar26 * local_138;
        FUN_14481fd10(&local_298,local_178);
        auVar45._0_8_ = local_298 * local_298;
        auVar45._8_8_ = dStack_290 * dStack_290;
        dVar26 = local_288 * local_288 + auVar45._0_8_;
        dVar67 = dStack_280 * dStack_280 + auVar45._8_8_;
        auVar54._0_8_ = dVar26 + dVar67;
        auVar54._8_8_ = dVar26 + dVar67;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
        auVar77 = sqrtpd(auVar45,auVar54);
        auVar77 = divpd(auVar38,auVar77);
        auVar78._0_8_ = auVar77._0_8_ * local_288;
        auVar78._8_8_ = auVar77._8_8_ * dStack_280;
        local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar78,auVar33);
        local_358._8_8_ =
             (ulonglong)(dStack_290 * auVar77._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
        local_358._0_8_ =
             (ulonglong)(local_298 * auVar77._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
        local_338 = local_118;
        dStack_330 = dStack_110;
        local_328._8_8_ = 0;
        local_328._0_8_ = local_108;
      }
      dVar23 = dVar23 * 0.0;
      local_318 = local_448._0_8_;
      uStack_310 = local_448._8_8_;
      local_308._8_4_ = SUB84(dVar23,0);
      local_308._0_8_ = dVar27 * 1.0;
      local_308._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_178 = (undefined1  [16])0x0;
      bVar6 = true;
      FUN_140c5bf3a(param_2,local_178,1);
      local_4b8 = param_5;
      local_4b0 = (longlong *)local_178;
      cVar9 = FUN_140c5c9ba(param_1,param_2,plVar1,local_358);
      dVar47 = 0.0;
      if (cVar9 == '\0') {
        uVar21 = 0;
        uVar72 = 0;
        uVar71 = 0;
        uVar69 = 0;
        uVar70 = 0;
      }
      else if (param_5 == (double *)0x0) {
        uVar21 = 0;
        uVar72 = 0;
        uVar71 = 0;
        uVar69 = 0;
        uVar70 = 0;
        bVar6 = false;
      }
      else {
        dVar47 = *param_5;
        uVar72 = SUB84(param_5[1],0);
        uVar71 = (undefined4)((ulonglong)param_5[1] >> 0x20);
        uVar69 = SUB84(param_5[2],0);
        uVar70 = (undefined4)((ulonglong)param_5[2] >> 0x20);
        uVar21 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
        bVar6 = true;
      }
      lVar11 = local_178._0_8_;
      goto LAB_140c5a4cb;
    }
    dVar47 = 0.0;
    uVar21 = 0;
    uVar72 = 0;
    uVar71 = 0;
    uVar69 = 0;
    uVar70 = 0;
  }
  if (param_5 != (double *)0x0) {
    *param_5 = dVar47;
    param_5[1] = (double)CONCAT44(uVar71,uVar72);
    param_5[2] = (double)CONCAT44(uVar70,uVar69);
  }
LAB_140c5a4f2:
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffff01;
}



// FUNCTION 140c5bf3a FUN_140c5bf3a body=350 status=ok
// SIG undefined FUN_140c5bf3a(void)

void FUN_140c5bf3a(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1800000000;
  if (param_1 == 0) {
    local_48._0_4_ = 0;
  }
  else {
    FUN_140c5c09a(param_1,local_110,0);
  }
  iVar3 = (int)param_2[1] + (int)local_48;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  iVar1 = (int)local_48;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_140c5c1ec(param_2);
    iVar1 = (int)local_48;
  }
  puVar5 = local_110;
  if (local_50 != (undefined1 *)0x0) {
    puVar5 = local_50;
  }
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(puVar5 + lVar4) + 0x5d8))();
      if (lVar2 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447d05f2(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
        if (param_3 != '\0') {
          FUN_140c5bf3a(lVar2,param_2,1);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c5c09a FUN_140c5c09a body=336 status=ok
// SIG undefined FUN_140c5c09a(void)

void FUN_140c5c09a(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1478c7ede(param_2,0);
  }
  if (DAT_14cabf8d0 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b47bc4;
    local_58 = &LAB_147860ffd;
    local_60 = FUN_1463713dc;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000005;
    local_80 = 0x10;
    local_88 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
  }
  local_30 = DAT_14cabf8d0;
  if ((DAT_14cabf8d0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140c5c320(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c5c1ec FUN_140c5c1ec body=307 status=ok
// SIG undefined FUN_140c5c1ec(void)

void FUN_140c5c1ec(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140c5c280;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140c5c280:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140c5c320 FUN_140c5c320 body=1659 status=ok
// SIG undefined FUN_140c5c320(void)

void FUN_140c5c320(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  bool local_79;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_140c5c7c4:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
    }
LAB_140c5c38f:
    lVar15 = *param_2;
    local_79 = lVar15 != 0;
    if (lVar12 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar15);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
      local_58 = lVar15;
      if ((lVar15 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar15);
      }
      FUN_1478c7fd4(param_1,&local_58,param_4);
      goto LAB_140c5c8e7;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140c5c7c4;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar12 = *param_2;
      goto LAB_140c5c38f;
    }
    lVar15 = *param_2;
    local_79 = lVar15 != 0;
  }
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & local_79) == 1) {
      FUN_1456cec3c(lVar15);
    }
    puVar13 = (uint *)(param_1 + 0x250);
    iVar2 = *(int *)(param_1 + 0x268);
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar10 = 0;
      iVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar16 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar16 = uVar10;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar10) goto LAB_140c5c8e7;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar5[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar10 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar16 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar14 = 0xffffffff;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
        if (lVar12 != 0) {
          if ((DAT_14c950c29 & local_79) == 1) {
            local_78 = param_1;
            local_70 = param_4;
            FUN_1456cec3c(lVar15);
            param_1 = local_78;
            param_4 = local_70;
LAB_140c5c47d:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_78 = param_1;
              local_70 = param_4;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              param_1 = local_78;
              param_4 = local_70;
              if (DAT_14cad00c8 == 0) goto LAB_140c5c692;
            }
            if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140c5c692;
            lVar11 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar11 = lVar15;
            }
          }
          else {
            if (lVar15 != 0) goto LAB_140c5c47d;
LAB_140c5c692:
            lVar11 = 0;
          }
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            iVar4 = *(int *)(param_4 + 200);
            *(uint *)(param_4 + 200) = iVar4 + 1U;
            if (*(uint *)(param_4 + 0xcc) < iVar4 + 1U) {
              local_78 = param_1;
              local_70 = param_4;
              local_68 = puVar13;
              FUN_1478c86b0(param_4,iVar4);
              param_1 = local_78;
              puVar13 = local_68;
              param_4 = local_70;
            }
            lVar11 = *(longlong *)(param_4 + 0xc0);
            if (*(longlong *)(param_4 + 0xc0) == 0) {
              lVar11 = param_4;
            }
            *(longlong *)(lVar11 + (longlong)iVar4 * 8) = lVar12;
          }
        }
        uVar14 = uVar14 & ~(uint)uVar16;
        puVar5 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar5 = puVar13;
        }
        iVar3 = *(int *)(param_1 + 0x268);
        iVar4 = (int)uVar10;
        lVar12 = (longlong)iVar4;
        uVar8 = puVar5[lVar12] & uVar14;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar4 < iVar6) {
            lVar11 = 0;
            do {
              uVar8 = puVar5[lVar12 + lVar11 + 1];
              if (uVar8 != 0) {
                uVar10 = (ulonglong)(iVar4 + (int)lVar11 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140c5c549;
              }
              iVar9 = iVar9 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar7 - lVar12 != lVar11);
            uVar14 = 0xffffffff;
            iVar4 = iVar7;
          }
          uVar10 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_140c5c549:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar16 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
  }
  else {
    local_60 = lVar15;
    if ((local_79 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
    FUN_1478c83aa(param_1,&local_60,param_4);
  }
LAB_140c5c8e7:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c5c9ba FUN_140c5c9ba body=4946 status=ok
// SIG undefined FUN_140c5c9ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140c5c9ba(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       double *param_5,longlong *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  byte bVar19;
  undefined7 uVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auStack_238 [32];
  longlong *local_218;
  char **local_210;
  char **local_208;
  undefined4 *local_200;
  undefined4 *local_1f8;
  longlong *local_1e8;
  ulonglong local_1e0;
  undefined1 *local_1d8 [2];
  undefined1 *local_1c8 [2];
  int local_1b8 [4];
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  undefined1 local_168 [9];
  char acStack_15f [7];
  undefined1 local_158 [8];
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  code *local_130;
  char **local_128;
  char local_119;
  undefined1 *local_118;
  undefined1 local_109;
  longlong *local_108;
  longlong *local_100;
  undefined1 local_f8;
  undefined2 uStack_f7;
  undefined1 uStack_f5;
  undefined2 uStack_f4;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 **local_e8;
  undefined1 **local_e0;
  undefined1 **local_d8;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [4];
  undefined4 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  ulonglong local_80;
  ulonglong uVar20;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_5 == (double *)0x0) {
    if (param_1 == 0) goto LAB_140c5ccbc;
    uVar13 = *DAT_14cae8be0;
    uVar12 = (**(code **)(*param_3 + 0x580))(param_3);
    (**(code **)(*param_3 + 0x820))(param_3,&local_130,CONCAT44(0x80000000,uVar13 ^ 0x80000000));
    if ((int)local_130 == 1) {
      lVar15 = FUN_14088b378();
      if ((*(int *)(param_3[2] + 0x38) < *(int *)(lVar15 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
          lVar15 + 0x30)) {
        if ((*(byte *)((longlong)param_3 + 0x9c) & 1) != 0) {
          local_148 = 0;
          uStack_140 = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cae8c90) && (FUN_144b3d300(), DAT_14cae8c90 == -1)) {
            local_108 = (longlong *)0x14a9b18f3;
            local_100 = (longlong *)CONCAT35(local_100._5_3_,0x30);
            uVar13 = FUN_14001a6c0(&local_108,1);
            DAT_14cae8c88 = (longlong *)(ulonglong)uVar13;
            _Init_thread_footer();
          }
          local_e8._1_7_ = (uint7)((ulonglong)local_e8 >> 8) & 0xffffff;
          local_100 = (longlong *)0x0;
          local_e0 = (undefined1 **)CONCAT62(local_e0._2_6_,0x101);
          local_b8 = 0;
          local_b0 = 0x800000000;
          local_98 = (undefined4 *)0x0;
          local_90 = 0x400000000;
          local_f8 = 0;
          uStack_ec = 0;
          local_108 = DAT_14cae8c88;
          uStack_f7 = 1;
          uStack_f5 = 0;
          local_e8 = (undefined1 **)((ulonglong)local_e8._1_7_ << 8);
          uStack_f4 = 0;
          uStack_f2 = 0;
          if (param_2 != 0) {
            local_a8[0] = *(undefined4 *)(param_2 + 0xc);
            local_90 = 0x400000001;
            local_100 = *(longlong **)(param_2 + 0x18);
          }
          uStack_f1 = 1;
          uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
          local_88 = 0;
          stack0xfffffffffffffea0 = 5.377940751268117e-299;
          local_168._0_8_ = 0x202020202020202;
          uStack_150 = 0x202020202020202;
          local_158 = (undefined1  [8])0x202020202020202;
          FUN_14485d390(param_3,&local_108);
          iVar14 = (int)param_6[1];
          if (0 < iVar14) {
            lVar15 = 0;
            do {
              uVar20 = local_90;
              lVar22 = *(longlong *)(*param_6 + lVar15 * 8);
              if (lVar22 != 0) {
                uVar1 = *(undefined4 *)(lVar22 + 0xc);
                lVar22 = (longlong)(int)local_90;
                uVar13 = (int)local_90 + 1;
                local_90 = CONCAT44(local_90._4_4_,uVar13);
                if (local_90._4_4_ < uVar13) {
                  FUN_1447de67e(local_a8,uVar20 & 0xffffffff);
                }
                puVar17 = local_98;
                if (local_98 == (undefined4 *)0x0) {
                  puVar17 = local_a8;
                }
                puVar17[lVar22] = uVar1;
                iVar14 = (int)param_6[1];
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar14);
          }
          local_188 = *param_4;
          lStack_180 = param_4[1];
          local_178 = param_4[2];
          lStack_170 = param_4[3];
          local_1a8 = param_4[4];
          lStack_1a0 = param_4[5];
          local_198 = param_4[6];
          local_210 = (char **)CONCAT44(local_210._4_4_,uVar12);
          goto LAB_140c5da49;
        }
        goto LAB_140c5ccbc;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cae8ca0) && (FUN_144b3d300(), DAT_14cae8ca0 == -1)) {
      local_108 = (longlong *)0x14a9b18f3;
      local_100 = (longlong *)CONCAT35(local_100._5_3_,0x30);
      uVar13 = FUN_14001a6c0(&local_108,1);
      DAT_14cae8c98 = (longlong *)(ulonglong)uVar13;
      _Init_thread_footer();
    }
    local_100 = (longlong *)0x0;
    local_e0 = (undefined1 **)CONCAT62(local_e0._2_6_,0x101);
    local_b8 = 0;
    local_b0 = 0x800000000;
    local_98 = (undefined4 *)0x0;
    local_90 = 0x400000000;
    local_f8 = 0;
    uStack_ec = 0;
    local_108 = DAT_14cae8c98;
    uStack_f7 = 1;
    uStack_f5 = 0;
    local_e8 = (undefined1 **)((ulonglong)(uint3)((uint)local_e8._0_4_ >> 8) << 8);
    uStack_f4 = 0;
    uStack_f2 = 0;
    if (param_2 != 0) {
      local_a8[0] = *(undefined4 *)(param_2 + 0xc);
      local_90 = 0x400000001;
      local_100 = *(longlong **)(param_2 + 0x18);
    }
    uStack_f1 = 1;
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uStack_150 = uRam000000014cad0ee8;
    local_158 = (undefined1  [8])_DAT_14cad0ee0;
    stack0xfffffffffffffea0 = (double)_DAT_14cad0ed8;
    local_168._0_8_ = _DAT_14cad0ed0;
    lVar15 = 0;
    do {
      bVar2 = local_168[lVar15] == DAT_149c360b0;
      bVar3 = local_168[lVar15 + 1] == DAT_149c360b0._1_1_;
      bVar4 = local_168[lVar15 + 2] == DAT_149c360b0._2_1_;
      bVar5 = local_168[lVar15 + 3] == DAT_149c360b0._3_1_;
      bVar6 = local_168[lVar15 + 4] == DAT_149c360b0._4_1_;
      bVar7 = local_168[lVar15 + 5] == DAT_149c360b0._5_1_;
      bVar8 = local_168[lVar15 + 6] == DAT_149c360b0._6_1_;
      bVar9 = local_168[lVar15 + 7] == DAT_149c360b0._7_1_;
      if ((bool)(~bVar2 & 1)) {
        local_168[lVar15] = 2;
      }
      if ((bool)(~bVar3 & 1)) {
        local_168[lVar15 + 1] = 2;
      }
      if ((bool)(~bVar4 & 1)) {
        local_168[lVar15 + 2] = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        local_168[lVar15 + 3] = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        local_168[lVar15 + 4] = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        local_168[lVar15 + 5] = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        local_168[lVar15 + 6] = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        local_168[lVar15 + 7] = 2;
      }
      if ((bool)(~bVar2 & 1)) {
        local_168[lVar15 + 8] = 2;
      }
      if ((bool)(~bVar3 & 1)) {
        local_168[lVar15 + 9] = 2;
      }
      if ((bool)(~bVar4 & 1)) {
        local_168[lVar15 + 10] = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        local_168[lVar15 + 0xb] = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        local_168[lVar15 + 0xc] = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        local_168[lVar15 + 0xd] = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        local_168[lVar15 + 0xe] = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        local_168[lVar15 + 0xf] = 2;
      }
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x20);
    FUN_14485d390(param_3,&local_108,local_168);
    iVar14 = (int)param_6[1];
    if (0 < iVar14) {
      lVar15 = 0;
      do {
        uVar20 = local_90;
        lVar22 = *(longlong *)(*param_6 + lVar15 * 8);
        if (lVar22 != 0) {
          uVar1 = *(undefined4 *)(lVar22 + 0xc);
          lVar22 = (longlong)(int)local_90;
          uVar13 = (int)local_90 + 1;
          local_90 = CONCAT44(local_90._4_4_,uVar13);
          local_1e8 = param_4;
          if (local_90._4_4_ < uVar13) {
            FUN_1447de67e(local_a8,uVar20 & 0xffffffff);
          }
          puVar17 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar17 = local_a8;
          }
          puVar17[lVar22] = uVar1;
          iVar14 = (int)param_6[1];
          param_4 = local_1e8;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar14);
    }
    local_188 = *param_4;
    lStack_180 = param_4[1];
    local_178 = param_4[2];
    lStack_170 = param_4[3];
    local_1a8 = param_4[4];
    lStack_1a0 = param_4[5];
    local_198 = param_4[6];
    local_200 = &DAT_14cad0f08;
    local_218 = (longlong *)CONCAT44(local_218._4_4_,uVar12);
    local_210 = (char **)&local_108;
    local_208 = (char **)local_168;
    uVar13 = FUN_140ad65d6(param_1,&local_130);
    uVar20 = (ulonglong)uVar13;
    lVar15 = local_b8;
    if (local_98 != (undefined4 *)0x0) {
      FUN_1400020a8();
      lVar15 = local_b8;
    }
  }
  else {
    param_5[2] = DAT_14c8464f0;
    dVar23 = DAT_14c8464e8;
    *param_5 = DAT_14c8464e0;
    param_5[1] = dVar23;
    if (param_1 == 0) {
LAB_140c5ccbc:
      uVar20 = 0;
      goto LAB_140c5dac0;
    }
    uVar13 = *DAT_14cae8be0;
    local_148 = 0;
    uStack_140 = 0;
    uVar12 = (**(code **)(*param_3 + 0x580))(param_3);
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,uVar12);
    (**(code **)(*param_3 + 0x820))(param_3,local_1b8,CONCAT44(0x80000000,uVar13 ^ 0x80000000));
    if (local_1b8[0] == 1) {
      lVar15 = FUN_14088b378();
      if ((*(int *)(lVar15 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
          lVar15 + 0x30)) goto LAB_140c5ccc3;
      if ((*(byte *)((longlong)param_3 + 0x9c) & 1) != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cae8c70) && (FUN_144b3d300(), DAT_14cae8c70 == -1)) {
          local_108 = (longlong *)0x14a9b18c0;
          local_100 = (longlong *)CONCAT35(local_100._5_3_,0x32);
          uVar13 = FUN_14001a6c0(&local_108,1);
          DAT_14cae8c68 = (longlong *)(ulonglong)uVar13;
          _Init_thread_footer();
        }
        local_e8._1_7_ = (uint7)((ulonglong)local_e8 >> 8) & 0xffffff;
        local_100 = (longlong *)0x0;
        local_e0 = (undefined1 **)CONCAT62(local_e0._2_6_,0x101);
        local_b8 = 0;
        local_b0 = 0x800000000;
        local_98 = (undefined4 *)0x0;
        local_90 = 0x400000000;
        local_f8 = 0;
        uStack_ec = 0;
        local_108 = DAT_14cae8c68;
        uStack_f7 = 1;
        uStack_f5 = 0;
        local_e8 = (undefined1 **)((ulonglong)local_e8._1_7_ << 8);
        uStack_f4 = 0;
        uStack_f2 = 0;
        if (param_2 != 0) {
          local_a8[0] = *(undefined4 *)(param_2 + 0xc);
          local_90 = 0x400000001;
          local_100 = *(longlong **)(param_2 + 0x18);
        }
        uStack_f1 = 1;
        uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
        local_88 = 0;
        stack0xfffffffffffffea0 = 5.377940751268117e-299;
        local_168._0_8_ = 0x202020202020202;
        uStack_150 = 0x202020202020202;
        local_158 = (undefined1  [8])0x202020202020202;
        FUN_14485d390(param_3,&local_108);
        iVar14 = (int)param_6[1];
        if (0 < iVar14) {
          lVar15 = 0;
          do {
            uVar20 = local_90;
            lVar22 = *(longlong *)(*param_6 + lVar15 * 8);
            if (lVar22 != 0) {
              uVar12 = *(undefined4 *)(lVar22 + 0xc);
              lVar22 = (longlong)(int)local_90;
              uVar13 = (int)local_90 + 1;
              local_90 = CONCAT44(local_90._4_4_,uVar13);
              if (local_90._4_4_ < uVar13) {
                FUN_1447de67e(local_a8,uVar20 & 0xffffffff);
              }
              puVar17 = local_98;
              if (local_98 == (undefined4 *)0x0) {
                puVar17 = local_a8;
              }
              puVar17[lVar22] = uVar12;
              iVar14 = (int)param_6[1];
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 < iVar14);
        }
        local_188 = *param_4;
        lStack_180 = param_4[1];
        local_178 = param_4[2];
        lStack_170 = param_4[3];
        local_1a8 = param_4[4];
        lStack_1a0 = param_4[5];
        local_198 = param_4[6];
        local_210 = (char **)CONCAT44(local_210._4_4_,local_1e8._0_4_);
LAB_140c5da49:
        local_208 = (char **)&local_108;
        local_200 = &DAT_14cad0f08;
        local_218 = &local_188;
        uVar13 = FUN_143428d76(param_1,&local_148,param_3);
        uVar20 = (ulonglong)uVar13;
        if (local_98 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = local_148;
        if (local_b8 != 0) {
          FUN_1400020a8();
          lVar15 = local_148;
        }
        goto LAB_140c5dab6;
      }
    }
    else {
LAB_140c5ccc3:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cae8c80) && (FUN_144b3d300(), DAT_14cae8c80 == -1)) {
        local_108 = (longlong *)0x14a9b18c0;
        local_100 = (longlong *)CONCAT35(local_100._5_3_,0x32);
        uVar13 = FUN_14001a6c0(&local_108,1);
        DAT_14cae8c78 = (longlong *)(ulonglong)uVar13;
        _Init_thread_footer();
      }
      local_100 = (longlong *)0x0;
      local_e0 = (undefined1 **)CONCAT62(local_e0._2_6_,0x101);
      local_b8 = 0;
      local_b0 = 0x800000000;
      local_98 = (undefined4 *)0x0;
      local_90 = 0x400000000;
      local_f8 = 0;
      uStack_ec = 0;
      local_108 = DAT_14cae8c78;
      uStack_f7 = 1;
      uStack_f5 = 0;
      local_e8 = (undefined1 **)((ulonglong)(uint3)((uint)local_e8._0_4_ >> 8) << 8);
      uStack_f4 = 0;
      uStack_f2 = 0;
      if (param_2 != 0) {
        local_a8[0] = *(undefined4 *)(param_2 + 0xc);
        local_90 = 0x400000001;
        local_100 = *(longlong **)(param_2 + 0x18);
      }
      uStack_f1 = 1;
      uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
      uStack_150 = uRam000000014cad0ee8;
      local_158 = (undefined1  [8])_DAT_14cad0ee0;
      stack0xfffffffffffffea0 = (double)_DAT_14cad0ed8;
      local_168._0_8_ = _DAT_14cad0ed0;
      lVar15 = 0;
      do {
        if ((local_168[lVar15] == DAT_149c360b0) != true) {
          local_168[lVar15] = 2;
        }
        if ((local_168[lVar15 + 1] == DAT_149c360b0._1_1_) != true) {
          local_168[lVar15 + 1] = 2;
        }
        if ((local_168[lVar15 + 2] == DAT_149c360b0._2_1_) != true) {
          local_168[lVar15 + 2] = 2;
        }
        if ((local_168[lVar15 + 3] == DAT_149c360b0._3_1_) != true) {
          local_168[lVar15 + 3] = 2;
        }
        if ((local_168[lVar15 + 4] == DAT_149c360b0._4_1_) != true) {
          local_168[lVar15 + 4] = 2;
        }
        if ((local_168[lVar15 + 5] == DAT_149c360b0._5_1_) != true) {
          local_168[lVar15 + 5] = 2;
        }
        if ((local_168[lVar15 + 6] == DAT_149c360b0._6_1_) != true) {
          local_168[lVar15 + 6] = 2;
        }
        if ((local_168[lVar15 + 7] == DAT_149c360b0._7_1_) != true) {
          local_168[lVar15 + 7] = 2;
        }
        if ((local_168[lVar15 + 8] == DAT_149c360b0._8_1_) != true) {
          local_168[lVar15 + 8] = 2;
        }
        if ((local_168[lVar15 + 9] == DAT_149c360b0._9_1_) != true) {
          local_168[lVar15 + 9] = 2;
        }
        if ((local_168[lVar15 + 10] == DAT_149c360b0._10_1_) != true) {
          local_168[lVar15 + 10] = 2;
        }
        if ((local_168[lVar15 + 0xb] == DAT_149c360b0._11_1_) != true) {
          local_168[lVar15 + 0xb] = 2;
        }
        if ((local_168[lVar15 + 0xc] == DAT_149c360b0._12_1_) != true) {
          local_168[lVar15 + 0xc] = 2;
        }
        if ((local_168[lVar15 + 0xd] == DAT_149c360b0._13_1_) != true) {
          local_168[lVar15 + 0xd] = 2;
        }
        if ((local_168[lVar15 + 0xe] == DAT_149c360b0._14_1_) != true) {
          local_168[lVar15 + 0xe] = 2;
        }
        if ((local_168[lVar15 + 0xf] == DAT_149c360b0._15_1_) != true) {
          local_168[lVar15 + 0xf] = 2;
        }
        lVar15 = lVar15 + 0x10;
      } while (lVar15 != 0x20);
      FUN_14485d390(param_3,&local_108,local_168);
      iVar14 = (int)param_6[1];
      if (0 < iVar14) {
        lVar15 = 0;
        do {
          uVar20 = local_90;
          lVar22 = *(longlong *)(*param_6 + lVar15 * 8);
          if (lVar22 != 0) {
            uVar12 = *(undefined4 *)(lVar22 + 0xc);
            lVar22 = (longlong)(int)local_90;
            uVar13 = (int)local_90 + 1;
            local_90 = CONCAT44(local_90._4_4_,uVar13);
            if (local_90._4_4_ < uVar13) {
              FUN_1447de67e(local_a8,uVar20 & 0xffffffff);
            }
            puVar17 = local_98;
            if (local_98 == (undefined4 *)0x0) {
              puVar17 = local_a8;
            }
            puVar17[lVar22] = uVar12;
            iVar14 = (int)param_6[1];
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar14);
      }
      local_188 = *param_4;
      lStack_180 = param_4[1];
      local_178 = param_4[2];
      lStack_170 = param_4[3];
      local_1a8 = param_4[4];
      lStack_1a0 = param_4[5];
      local_198 = param_4[6];
      local_1f8 = &DAT_14cad0f08;
      local_200 = (undefined4 *)local_168;
      local_208 = (char **)&local_108;
      local_210 = (char **)CONCAT44(local_210._4_4_,local_1e8._0_4_);
      local_218 = &local_148;
      cVar10 = FUN_14052f4ca(param_1,local_1b8);
      if (local_98 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (cVar10 != '\0') {
        _local_168 = ZEXT816(0);
        _local_158 = _local_168;
        if ((int)uStack_140 < 1) {
LAB_140c5d855:
          param_5[2] = DAT_14c8464f0;
          dVar23 = DAT_14c8464e8;
          *param_5 = DAT_14c8464e0;
          param_5[1] = dVar23;
          bVar19 = 0;
          uVar21 = 0;
          bVar11 = 0;
        }
        else {
          lVar15 = 0;
          lVar22 = 0;
          local_1e0 = 0;
          do {
            iVar14 = *(int *)(local_148 + 0x24 + lVar15);
            if (((((iVar14 != 0) &&
                  (uVar13 = *(uint *)(local_148 + 0x20 + lVar15), -1 < (int)uVar13)) &&
                 ((int)uVar13 < DAT_14c9647dc)) &&
                ((plVar18 = (longlong *)
                            ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                 plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar14)))) &&
               (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
                ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
                 (iVar14 = (**(code **)(*plVar18 + 0x578))
                                     (plVar18,(ulonglong)local_1e8 & 0xffffffff), iVar14 == 2))))))
            {
              (**(code **)(*param_3 + 0x820))(param_3,local_1c8,0);
              lVar16 = (**(code **)(*plVar18 + 0x7b8))
                                 (plVar18,0,1,*(undefined4 *)(local_148 + 0x28 + lVar15));
              if (lVar16 != 0) {
                local_188 = *param_4;
                lStack_180 = param_4[1];
                local_178 = param_4[2];
                lStack_170 = param_4[3];
                local_1a8 = param_4[4];
                lStack_1a0 = param_4[5];
                local_198 = param_4[6];
                local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffffffffff00);
                local_1d8[0] = local_168;
                local_109 = '\0';
                local_108 = &local_188;
                local_100 = &local_1a8;
                local_f8 = SUB81(&local_109,0);
                uStack_f7 = (undefined2)((ulonglong)&local_109 >> 8);
                uStack_f5 = (undefined1)((ulonglong)&local_109 >> 0x18);
                uStack_f4 = (undefined2)((ulonglong)&local_109 >> 0x20);
                uStack_f2 = (undefined1)((ulonglong)&local_109 >> 0x30);
                uStack_f1 = (undefined1)((ulonglong)&local_109 >> 0x38);
                uStack_f0 = (undefined4)lVar16;
                uVar12 = uStack_f0;
                uStack_ec = (undefined4)((ulonglong)lVar16 >> 0x20);
                uVar1 = uStack_ec;
                local_e0 = local_1d8;
                local_d8 = &local_118;
                local_128 = (char **)&local_108;
                local_130 = FUN_143623154;
                local_e8 = local_1c8;
                FUN_1448e6002(lVar16 + 0x138,&local_130);
                if (local_109 == '\x01') {
                  dVar23 = (double)(float)uStack_150;
                  *param_5 = dVar23 * (double)local_168._0_8_ + *param_5;
                  iVar14 = (int)local_1e0;
                  param_5[1] = stack0xfffffffffffffea0 * dVar23 + param_5[1];
                  param_5[2] = (double)local_158 * dVar23 + param_5[2];
                  if (ABS((float)uStack_150) <= 1e-08) {
                    (**(code **)(*param_3 + 0x820))(param_3,local_1d8);
                    local_188 = *param_4;
                    lStack_180 = param_4[1];
                    local_178 = param_4[2];
                    lStack_170 = param_4[3];
                    local_1a8 = param_4[4];
                    lStack_1a0 = param_4[5];
                    local_198 = param_4[6];
                    local_109 = '\0';
                    local_118 = local_168;
                    local_119 = '\0';
                    local_108 = &local_188;
                    local_100 = &local_1a8;
                    local_f8 = SUB81(&local_119,0);
                    uStack_f7 = (undefined2)((ulonglong)&local_119 >> 8);
                    uStack_f5 = (undefined1)((ulonglong)&local_119 >> 0x18);
                    uStack_f4 = (undefined2)((ulonglong)&local_119 >> 0x20);
                    uStack_f2 = (undefined1)((ulonglong)&local_119 >> 0x30);
                    uStack_f1 = (undefined1)((ulonglong)&local_119 >> 0x38);
                    local_e8 = local_1d8;
                    local_e0 = &local_118;
                    local_d8 = (undefined1 **)&local_109;
                    local_128 = (char **)&local_108;
                    local_130 = FUN_143623154;
                    uStack_f0 = uVar12;
                    uStack_ec = uVar1;
                    FUN_1448e6002(lVar16 + 0x138,&local_130);
                    if (local_119 != '\x01') goto LAB_140c5d42f;
                    dVar23 = (double)(float)uStack_150;
                    *param_5 = dVar23 * (double)local_168._0_8_ + *param_5;
                    param_5[1] = stack0xfffffffffffffea0 * dVar23 + param_5[1];
                    param_5[2] = (double)local_158 * dVar23 + param_5[2];
                  }
                  local_1e0 = (ulonglong)(iVar14 + 1);
                  goto LAB_140c5d42f;
                }
              }
              param_5[2] = DAT_14c8464f0;
              dVar23 = DAT_14c8464e8;
              *param_5 = DAT_14c8464e0;
              param_5[1] = dVar23;
              uVar21 = (undefined7)((ulonglong)param_4 >> 8);
              bVar19 = 1;
              bVar11 = 1;
              goto LAB_140c5daab;
            }
LAB_140c5d42f:
            lVar22 = lVar22 + 1;
            lVar15 = lVar15 + 0x48;
          } while (lVar22 < (int)uStack_140);
          if ((int)local_1e0 == 0) goto LAB_140c5d855;
          bVar11 = 1;
          bVar19 = 0;
          uVar21 = 0;
        }
LAB_140c5daab:
        uVar20 = CONCAT71(uVar21,bVar19 | bVar11);
        lVar15 = local_148;
        goto LAB_140c5dab6;
      }
    }
    uVar20 = 0;
    lVar15 = local_148;
  }
LAB_140c5dab6:
  if (lVar15 != 0) {
    FUN_1400020a8();
  }
LAB_140c5dac0:
  if ((local_80 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 140c5dd0e FUN_140c5dd0e body=206 status=ok
// SIG undefined FUN_140c5dd0e(void)

void FUN_140c5dd0e(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_140c5ddde(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_1408bc66e(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146edff50(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140c5ddde FUN_140c5ddde body=353 status=ok
// SIG undefined FUN_140c5ddde(void)

void FUN_140c5ddde(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c5de63;
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
LAB_140c5de63:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c5df40 FUN_140c5df40 body=38 status=ok
// SIG undefined FUN_140c5df40(void)

void FUN_140c5df40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140c5df62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 140c5dfce FUN_140c5dfce body=105 status=ok
// SIG undefined FUN_140c5dfce(void)

void FUN_140c5dfce(longlong param_1,int param_2)

{
  float fVar1;
  
  *(int *)(param_1 + 0x4e220) = param_2;
  memset((void *)(param_1 + 0x14),0,320000);
  fVar1 = (float)param_2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  if (192000.0 <= fVar1) {
    fVar1 = 192000.0;
  }
  *(float *)(param_1 + 0x4e224) = fVar1;
  *(float *)(param_1 + 0x4e228) = 1.0 / fVar1;
  *(float *)(param_1 + 0x4e320) = 3.1415927 / fVar1;
  return;
}



// FUNCTION 140c5e038 FUN_140c5e038 body=185 status=ok
// SIG undefined FUN_140c5e038(void)

void FUN_140c5e038(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x4e214) = 0;
  *(undefined8 *)(param_1 + 0x4f358) = 0;
  memset((void *)(param_1 + 0x4f388),0,0x40000);
  *(undefined8 *)(param_1 + 0x4e22c) = 0;
  *(undefined8 *)(param_1 + 0x4e234) = 0;
  *(undefined8 *)(param_1 + 0x4e23c) = 0;
  memset((void *)(param_1 + 0x4e248),0,0xb8);
  *(undefined8 *)(param_1 + 0x4e304) = 0;
  *(undefined8 *)(param_1 + 0x4e30c) = 0;
  *(undefined8 *)(param_1 + 0x4e314) = 0;
  *(undefined8 *)(param_1 + 0x4e324) = 0;
  *(undefined8 *)(param_1 + 0x4e32c) = 0;
  *(undefined8 *)(param_1 + 0x4e334) = 0;
  *(undefined8 *)(param_1 + 0x4e33c) = 0;
  *(undefined8 *)(param_1 + 0x4e344) = 0;
  memset((void *)(param_1 + 0x4e350),0,0x1004);
  *(undefined8 *)(param_1 + 0x4f368) = 0;
  *(undefined8 *)(param_1 + 0x4f370) = 0;
  *(undefined8 *)(param_1 + 0x8f394) = 0;
  *(undefined8 *)(param_1 + 0x8f39c) = 0;
  return;
}



// FUNCTION 140c5e0f2 FUN_140c5e0f2 body=157 status=ok
// SIG undefined FUN_140c5e0f2(void)

undefined8 * FUN_140c5e0f2(longlong *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  float fVar5;
  
  if ((param_1[0x76c] != 0) && ((char)param_1[0x779] == '\x01')) {
    dVar2 = (double)param_1[0x25];
    dVar3 = (double)param_1[0x26];
    fVar1 = *(float *)(param_1[0x76c] + 0x104);
    fVar5 = (float)(**(code **)(*param_1 + 0xcf8))(param_1);
    if ((double)(fVar5 * fVar5 * fVar1) <= dVar2 * dVar2 + dVar3 * dVar3) {
      return &DAT_14cb75f40;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c5e12f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0xe08))(param_1);
  return puVar4;
}



// FUNCTION 140c5e198 FUN_140c5e198 body=271 status=ok
// SIG undefined FUN_140c5e198(void)

void FUN_140c5e198(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar3 + 0xb8))(plVar3);
  FUN_140011d52(plVar3);
  plVar3 = *(longlong **)(param_1 + 0x78);
  (**(code **)(*plVar3 + 0xb8))(plVar3,param_2);
  FUN_140011d52(plVar3);
  plVar3 = *(longlong **)(param_1 + 0x70);
  iVar7 = *(int *)((longlong)plVar3 + 0x34);
  lVar4 = plVar3[6];
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x30);
  uVar5 = (**(code **)(*plVar3 + 0x178))();
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  uVar8 = -uVar6 & (iVar7 * (int)lVar4 + uVar6) - 1;
  if ((int)uVar6 < (int)uVar5) {
    uVar6 = uVar5;
  }
  uVar5 = 0;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  uVar5 = (-uVar5 & (uVar5 + iVar1 * iVar2 + uVar8) - 1) + 3 & 0xfffffffc;
  uVar9 = 4;
  if (4 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
  }
  iVar7 = uVar5 + 4;
  uVar6 = -(int)uVar9 & (int)uVar9 + iVar7 + 3U;
  uVar10 = 8;
  if (8 < (int)uVar6) {
    uVar10 = (ulonglong)uVar6;
  }
  *(uint *)(param_1 + 0x80) = uVar8;
  *(uint *)(param_1 + 0x84) = uVar5;
  *(int *)(param_1 + 0x88) = iVar7;
  *(uint *)(param_1 + 0x8c) = uVar6;
  *(ulonglong *)(param_1 + 0x90) = uVar9 | uVar10 << 0x20;
  *(uint *)(*(longlong *)(param_1 + 0x78) + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = 0x50;
  return;
}



// FUNCTION 140c5e2e6 FUN_140c5e2e6 body=57 status=ok
// SIG undefined FUN_140c5e2e6(void)

void FUN_140c5e2e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217c0 = FUN_140002ddd(FUN_146434175,uVar1,L"GbxBrainAspect_Orbit");
  }
  return;
}



// FUNCTION 140c5e320 FUN_140c5e320 body=69 status=ok
// SIG undefined FUN_140c5e320(void)

longlong FUN_140c5e320(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e1f830(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xf8 + *param_1;
  FUN_140c5e365(lVar2,1);
  return lVar2;
}



// FUNCTION 140c5e365 FUN_140c5e365 body=624 status=ok
// SIG undefined FUN_140c5e365(void)

void FUN_140c5e365(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    do {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
      }
      plVar1 = DAT_14c844840;
      *param_1 = DAT_14c844840;
      if (plVar1 != (longlong *)0x0) {
        if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      FUN_140056680(&local_60,&DAT_149dfb77a);
      param_1[4] = local_60;
      *(undefined4 *)(param_1 + 5) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_54;
      *(undefined4 *)(param_1 + 6) = 0;
      FUN_140056680(&local_60,&DAT_149dfb77a);
      param_1[7] = local_60;
      *(undefined4 *)(param_1 + 8) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x44) = local_54;
      *(undefined4 *)(param_1 + 9) = 0;
      FUN_140056680(&local_60,&DAT_149dfb77a);
      param_1[10] = local_60;
      *(undefined4 *)(param_1 + 0xb) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x5c) = local_54;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
      FUN_1446f470e(&local_60,&DAT_149dfb77a,1);
      param_1[0xe] = local_60;
      *(undefined4 *)(param_1 + 0xf) = 0;
      FUN_140056680(&local_60,&DAT_149dfb77a);
      param_1[0x10] = local_60;
      *(undefined4 *)(param_1 + 0x11) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x8c) = local_54;
      *(undefined4 *)(param_1 + 0x12) = 0;
      param_1[0x19] = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
      *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
      param_1[0x1d] = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      param_1 = param_1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c5e5d6 FUN_140c5e5d6 body=22 status=ok
// SIG undefined FUN_140c5e5d6(void)

undefined1 FUN_140c5e5d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c5e5ec(param_2,param_3);
  return 1;
}



// FUNCTION 140c5e5ec FUN_140c5e5ec body=791 status=ok
// SIG undefined FUN_140c5e5ec(void)

longlong * FUN_140c5e5ec(longlong *param_1,double *param_2)

{
  float *pfVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_24);
      }
    }
    else {
      local_24 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_28);
      }
    }
    else {
      local_28 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    *param_2 = (double)local_1c;
    param_2[1] = (double)local_20;
    param_2[2] = (double)local_24;
    param_2[3] = (double)local_28;
  }
  else {
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[1] = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[2] = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    param_2 = param_2 + 3;
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c5e904 FUN_140c5e904 body=297 status=ok
// SIG undefined FUN_140c5e904(void)

undefined8 FUN_140c5e904(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c5ea26;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c5ea26;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140c5ea26:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c5e9d1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140c5e9d1;
    }
  }
  uVar6 = 0;
LAB_140c5e9d1:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c5ea2e FUN_140c5ea2e body=230 status=ok
// SIG undefined FUN_140c5ea2e(void)

void FUN_140c5ea2e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((((((longlong *)param_1[0x8b] != (longlong *)0x0) &&
        (*(int *)((longlong)param_1 + 0x454) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x8a), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)((longlong)param_1 + 0x454) &&
      (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 &&
       (lVar4 = (**(code **)(*(longlong *)param_1[0x8b] + 0x18))(), lVar4 != 0)))))) {
    iVar3 = 0x7fffffff;
    if ((param_2 != 0) && (0 < (int)*(uint *)(lVar4 + 0xa8))) {
      plVar5 = (longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x28);
      uVar2 = 0;
      do {
        if ((plVar5[-1] == param_2) || (*plVar5 == param_2)) {
          iVar3 = (int)uVar2;
          break;
        }
        uVar2 = uVar2 + 1;
        plVar5 = plVar5 + 0x2e;
      } while (*(uint *)(lVar4 + 0xa8) != uVar2);
    }
    if (iVar3 == *(int *)((longlong)param_1 + 0x464)) {
      *(undefined1 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140c5eb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x660))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140c5eb1c FUN_140c5eb1c body=166 status=ok
// SIG undefined FUN_140c5eb1c(void)

undefined8 * FUN_140c5eb1c(undefined8 *param_1)

{
  FUN_140c5ebc2();
  *param_1 = &PTR_FUN_14b94e320;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  *(undefined4 *)(param_1 + 0x1f) = 0x1e;
  FUN_140841e14(param_1 + 0x1e,1);
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x78;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x78;
  *(byte *)((longlong)param_1 + 0x111) = *(byte *)((longlong)param_1 + 0x111) & 0xfe;
  param_1[0x23] = 0xffffffff00000000;
  param_1[0x24] = 0xffffffff;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xf0;
  return param_1;
}



// FUNCTION 140c5ebc2 FUN_140c5ebc2 body=168 status=ok
// SIG undefined FUN_140c5ebc2(void)

undefined8 * FUN_140c5ebc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b49c290;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  param_1[0x1b] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xc0;
  return param_1;
}



// FUNCTION 140c5ec6a FUN_140c5ec6a body=777 status=ok
// SIG undefined FUN_140c5ec6a(void)

undefined4 FUN_140c5ec6a(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = (longlong *)0x0;
  local_88 = (code *)0x0;
  local_78 = (longlong *)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = (code *)0x0;
  uVar3 = (**(code **)(*param_1 + 0xa8))();
  if ((char)uVar3 != '\0') {
    FUN_140c5f8ba(param_1,&local_d8);
    pcVar1 = local_88;
    *(undefined4 *)(param_2 + 100) = (undefined4)uStack_d0;
    if (local_88 == (code *)0x0) {
      iVar11 = (int)param_1[0x2c];
      iVar4 = iVar11;
    }
    else {
      plVar8 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar8 = local_68;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      iVar4 = (*pcVar1)(uVar6,param_2);
      iVar11 = (int)param_1[0x2c];
    }
    plVar8 = param_1 + 0x2b;
    *(int *)(param_1 + 0x2c) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0x164) == iVar11) {
      FUN_140c5f744(plVar8,iVar11);
    }
    lVar10 = (longlong)iVar4 * 0x14;
    memmove((void *)(*plVar8 + lVar10 + 0x14),(void *)(*plVar8 + lVar10),
            (ulonglong)(uint)(iVar11 - iVar4) * 0x14);
    puVar12 = (undefined4 *)(lVar10 + *plVar8);
    FUN_140c5ef75(puVar12);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      plVar8 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar8 = local_a8;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      (*pcVar1)(uVar6,puVar12,param_2);
    }
    *puVar12 = *(undefined4 *)(param_2 + 0x20);
    if ((longlong)(int)param_1[0x2e] != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      puVar7 = (uint *)param_1[0x2d];
      lVar10 = (longlong)(int)param_1[0x2e] << 4;
      do {
        cVar2 = FUN_1409d2f40(puVar7,uVar6);
        if (cVar2 != '\0') {
          if (puVar7 != (uint *)0x0) {
            uVar5 = puVar7[2];
            goto LAB_140c5ede9;
          }
          break;
        }
        puVar7 = puVar7 + 4;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    puVar7 = (uint *)FUN_140c5f5f4(param_1 + 0x2d);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *puVar7 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xc);
      *puVar7 = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar5 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar5 = *(uint *)(lVar10 + 0x10);
        bVar13 = uVar5 == 0;
        if (bVar13) {
          *(uint *)(lVar10 + 0x10) = uVar9;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar13) {
          uVar5 = uVar9;
        }
      }
    }
    puVar7[1] = uVar5;
    uVar5 = *(int *)((longlong)param_1 + 0xe4) + (uint)(*(int *)((longlong)param_1 + 0xe4) == 0);
    *(uint *)((longlong)param_1 + 0xe4) = uVar5 + 1;
    puVar7[2] = uVar5;
LAB_140c5ede9:
    puVar7[3] = puVar7[3] + 1;
    puVar12[1] = uVar5;
    (**(code **)(*param_1 + 0xb0))(param_1,puVar12,param_2);
    FUN_140c5ef80(param_1,(int)param_1[0x2c],iVar11);
  }
  if (local_88 != (code *)0x0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_c8 != (code *)0x0) {
    plVar8 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar8 = local_a8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140c5ef75 FUN_140c5ef75 body=11 status=ok
// SIG undefined FUN_140c5ef75(void)

void FUN_140c5ef75(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  return;
}



// FUNCTION 140c5ef80 FUN_140c5ef80 body=128 status=ok
// SIG undefined FUN_140c5ef80(void)

void FUN_140c5ef80(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x88))();
  if ((longlong)(int)param_1[10] != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(param_1[9] + 8 + lVar2) != 0) && (*(longlong *)(param_1[9] + lVar2) != 0)) {
        FUN_1401f8a0e(param_1 + 9,param_2,param_3);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[10] * 0x10 != lVar2);
  }
  cVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_140c5f00a(param_1 + 1);
  return;
}



// FUNCTION 140c5f00a FUN_140c5f00a body=231 status=ok
// SIG undefined FUN_140c5f00a(void)

void FUN_140c5f00a(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_58 [32];
  float local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_1[3] != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(param_1[2] + 8 + lVar2) != 0) && (*(longlong *)(param_1[2] + lVar2) != 0)) {
        (**(code **)(*param_1 + 0x18))(param_1,&local_38);
        if (local_34 == '\x01') {
          fVar3 = local_38;
          if (1.0 <= local_38) {
            fVar3 = 1.0;
          }
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
          if (((*(char *)((longlong)param_1 + 0xc) == '\0') || (fVar3 != *(float *)(param_1 + 1)))
             || (NAN(fVar3) || NAN(*(float *)(param_1 + 1)))) {
            uVar1 = (**(code **)(*param_1 + 8))(param_1);
            FUN_140c5f0f2(param_1 + 2,uVar1,fVar3);
            *(float *)(param_1 + 1) = fVar3;
            *(undefined1 *)((longlong)param_1 + 0xc) = 1;
          }
        }
        goto LAB_140c5f093;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[3] * 0x10 != lVar2);
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
LAB_140c5f093:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c5f0f2 FUN_140c5f0f2 body=183 status=ok
// SIG undefined FUN_140c5f0f2(void)

void FUN_140c5f0f2(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140c5f18f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140c5f18f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140c5f1aa FUN_140c5f1aa body=103 status=ok
// SIG undefined FUN_140c5f1aa(void)

ulonglong FUN_140c5f1aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140c5f1f4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140c5f1f4;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140c5f212 FUN_140c5f212 body=78 status=ok
// SIG undefined FUN_140c5f212(void)

void FUN_140c5f212(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x58);
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x78;
    do {
      if (*plVar3 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        cVar1 = FUN_140c5f260(plVar3,param_3);
        if (cVar1 == '\0') {
          return;
        }
        FUN_140c5f474(param_1);
        return;
      }
      plVar3 = plVar3 + 0xf;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140c5f260 FUN_140c5f260 body=440 status=ok
// SIG undefined FUN_140c5f260(void)

undefined4 FUN_140c5f260(longlong param_1,float param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 100);
  *(undefined1 *)(param_1 + 0x60) = 1;
  cVar2 = *(char *)(param_1 + 8);
  iVar5 = 0;
  if (cVar2 == '\x02') {
    uVar7 = (ulonglong)DAT_14cb8c940;
    iVar6 = DAT_14cb8c940;
    if ((longlong)uVar7 < 1) {
LAB_140c5f40f:
      iVar5 = iVar6 + -1;
      goto LAB_140c5f2e9;
    }
    if (3.4028235e+38 < ABS(param_2 - *DAT_14cb8c938)) goto LAB_140c5f2e9;
    uVar9 = 0;
    fVar11 = ABS(param_2 - *DAT_14cb8c938);
    do {
      if (uVar7 - 1 == uVar9) goto LAB_140c5f40f;
      lVar4 = uVar9 + 1;
      uVar9 = uVar9 + 1;
      bVar8 = ABS(param_2 - DAT_14cb8c938[lVar4]) <= fVar11;
      fVar11 = ABS(param_2 - DAT_14cb8c938[lVar4]);
    } while (bVar8);
  }
  else if (cVar2 == '\x01') {
    uVar7 = (ulonglong)DAT_14cb8c930;
    iVar6 = DAT_14cb8c930;
    if ((longlong)uVar7 < 1) goto LAB_140c5f40f;
    if (3.4028235e+38 < ABS(param_2 - *DAT_14cb8c928)) goto LAB_140c5f2e9;
    uVar9 = 0;
    fVar11 = ABS(param_2 - *DAT_14cb8c928);
    do {
      if (uVar7 - 1 == uVar9) goto LAB_140c5f40f;
      lVar4 = uVar9 + 1;
      uVar9 = uVar9 + 1;
      bVar8 = ABS(param_2 - DAT_14cb8c928[lVar4]) <= fVar11;
      fVar11 = ABS(param_2 - DAT_14cb8c928[lVar4]);
    } while (bVar8);
  }
  else {
    if (cVar2 != '\0') goto LAB_140c5f2e9;
    uVar7 = (ulonglong)DAT_14cb8c920;
    iVar6 = DAT_14cb8c920;
    if ((longlong)uVar7 < 1) goto LAB_140c5f40f;
    if (3.4028235e+38 < ABS(param_2 - *DAT_14cb8c918)) goto LAB_140c5f2e9;
    uVar9 = 0;
    fVar11 = ABS(param_2 - *DAT_14cb8c918);
    do {
      if (uVar7 - 1 == uVar9) goto LAB_140c5f40f;
      lVar4 = uVar9 + 1;
      uVar9 = uVar9 + 1;
      bVar8 = ABS(param_2 - DAT_14cb8c918[lVar4]) <= fVar11;
      fVar11 = ABS(param_2 - DAT_14cb8c918[lVar4]);
    } while (bVar8);
  }
  iVar5 = (int)uVar9;
  if (uVar7 <= uVar9) {
    iVar5 = (int)uVar7 + -1;
  }
LAB_140c5f2e9:
  *(int *)(param_1 + 100) = iVar5;
  uVar10 = FUN_140326fd8(param_1,iVar5);
  *(undefined4 *)(param_1 + 0x68) = uVar10;
  bVar8 = iVar3 != iVar5 || cVar1 != '\x01';
  if (bVar8) {
    FUN_140327094(param_1 + 0x40,param_1 + 0x60);
    *(ulonglong *)(param_1 + 0x70) =
         ((ulonglong)*(byte *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 100) * 2 &
         *(ulonglong *)(param_1 + 0x10)) << (*(byte *)(param_1 + 0x18) & 0x3f);
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),bVar8);
}



// FUNCTION 140c5f474 FUN_140c5f474 body=283 status=ok
// SIG undefined FUN_140c5f474(void)

void FUN_140c5f474(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0xf1) & 8) != 0) {
    uVar6 = (ulonglong)(*(byte *)(param_1 + 0xf1) >> 6 & 1);
    local_20 = uVar6 + 2;
    if (*(int *)(param_1 + 0x50) < 1) {
      local_20 = uVar6;
    }
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar7 = 0;
      do {
        local_20 = local_20 | *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 0x70 + lVar7);
        lVar7 = lVar7 + 0x78;
      } while ((longlong)*(int *)(param_1 + 0x60) * 0x78 - lVar7 != 0);
    }
    if (local_20 != *(ulonglong *)(param_1 + 0xe8)) {
      local_28 = *(longlong **)(param_1 + 0x10);
      if (local_28 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
        local_30 = 0;
      }
      else {
        iVar5 = (int)local_28[1];
        local_30 = 0;
        do {
          if (iVar5 == 0) {
            local_28 = (longlong *)0x0;
            goto LAB_140c5f502;
          }
          LOCK();
          iVar4 = (int)local_28[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(local_28 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_30 = *(undefined8 *)(param_1 + 8);
      }
LAB_140c5f502:
      if ((*(int *)(param_1 + 0x90) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x88), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,&local_20);
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      *(ulonglong *)(param_1 + 0xe8) = local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c5f590 FUN_140c5f590 body=21 status=ok
// SIG undefined FUN_140c5f590(void)

undefined8 FUN_140c5f590(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140c5f5f4 FUN_140c5f5f4 body=59 status=ok
// SIG undefined FUN_140c5f5f4(void)

longlong FUN_140c5f5f4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140c5f636(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_140c5f62f(lVar2);
  return lVar2;
}



// FUNCTION 140c5f62f FUN_140c5f62f body=7 status=ok
// SIG undefined FUN_140c5f62f(void)

void FUN_140c5f62f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 140c5f636 FUN_140c5f636 body=269 status=ok
// SIG undefined FUN_140c5f636(void)

void FUN_140c5f636(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c5f744 FUN_140c5f744 body=373 status=ok
// SIG undefined FUN_140c5f744(void)

void FUN_140c5f744(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c5f7cd;
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
LAB_140c5f7cd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 140c5f8ba FUN_140c5f8ba body=885 status=ok
// SIG undefined FUN_140c5f8ba(void)

void FUN_140c5f8ba(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined **ppuVar5;
  byte bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  int iVar15;
  int iVar16;
  undefined **ppuVar17;
  ulonglong uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStack_378 [40];
  undefined **local_350;
  undefined **local_348;
  int *local_340;
  longlong *local_338;
  undefined4 local_330;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar16 = (int)param_2[1];
  if ((longlong)iVar16 < 1) goto LAB_140c5f8e8;
  ppuVar13 = (undefined **)*param_2;
  if (iVar16 == 1) {
    ppuVar7 = (undefined **)((longlong)ppuVar13 + 4);
LAB_140c5f92d:
    do {
      iVar16 = *(int *)ppuVar13;
      if ((-1 < (longlong)iVar16) && (iVar16 < *(int *)(param_1 + 0x160))) {
        FUN_140c5fc30(param_1,*(undefined4 *)
                               (*(longlong *)(param_1 + 0x158) + 4 + (longlong)iVar16 * 0x14));
      }
      ppuVar13 = (undefined **)((longlong)ppuVar13 + 4);
    } while (ppuVar13 != ppuVar7);
  }
  else {
    memset(&local_338,0,0x2f0);
    local_340 = (int *)((longlong)ppuVar13 + ((longlong)iVar16 + -1) * 4);
    local_348 = ppuVar13;
    fVar22 = logf((float)iVar16);
    local_338 = (longlong *)CONCAT44(local_338._4_4_,(int)(longlong)(fVar22 + fVar22));
    pppuVar10 = &local_348;
    do {
      ppuVar7 = *pppuVar10;
      ppuVar13 = pppuVar10[1];
      iVar16 = *(int *)(pppuVar10 + 2);
      iVar9 = (int)((ulonglong)((longlong)ppuVar13 - (longlong)ppuVar7) >> 2);
      ppuVar11 = ppuVar13;
      ppuVar17 = ppuVar7;
      if (iVar16 != 0) {
LAB_140c5fa66:
        if (8 < (int)(iVar9 + 1U)) {
          uVar18 = (ulonglong)(iVar9 + 1U >> 1);
          iVar9 = *(int *)((longlong)ppuVar7 + uVar18 * 4);
          *(int *)((longlong)ppuVar7 + uVar18 * 4) = *(int *)ppuVar7;
          *(int *)ppuVar7 = iVar9;
          ppuVar12 = (undefined **)((longlong)ppuVar13 + 4);
          ppuVar8 = ppuVar7;
          do {
            ppuVar5 = (undefined **)((longlong)ppuVar8 + 4);
            ppuVar14 = (undefined **)((longlong)ppuVar8 + 4);
            do {
              ppuVar8 = ppuVar14;
              ppuVar19 = ppuVar5;
              if (ppuVar13 < ppuVar8) break;
              ppuVar5 = (undefined **)((longlong)ppuVar19 + 4);
              ppuVar14 = (undefined **)((longlong)ppuVar8 + 4);
            } while (*(int *)ppuVar7 <= *(int *)ppuVar8);
            ppuVar5 = ppuVar12 + -1;
            do {
              ppuVar14 = ppuVar12;
              ppuVar20 = ppuVar5;
              ppuVar12 = (undefined **)((longlong)ppuVar14 + -4);
              if (ppuVar12 <= ppuVar7) break;
              ppuVar5 = (undefined **)((longlong)ppuVar20 + -4);
            } while (*(int *)ppuVar12 <= *(int *)ppuVar7);
            if (ppuVar12 < ppuVar8) goto LAB_140c5fb9a;
            iVar9 = *(int *)ppuVar8;
            *(int *)ppuVar8 = *(int *)ppuVar12;
            *(int *)ppuVar12 = iVar9;
          } while( true );
        }
        ppuVar19 = local_350;
        if (ppuVar7 < ppuVar13) {
          do {
            ppuVar11 = ppuVar7;
            if ((undefined **)((longlong)ppuVar7 + 4U) <= ppuVar13) {
              ppuVar17 = (undefined **)((longlong)ppuVar7 + 4U);
              iVar16 = *(int *)ppuVar7;
              do {
                iVar9 = *(int *)ppuVar17;
                iVar15 = iVar16;
                if (iVar9 <= iVar16) {
                  iVar15 = iVar9;
                }
                if (iVar9 < iVar16) {
                  ppuVar11 = ppuVar17;
                }
                ppuVar17 = (undefined **)((longlong)ppuVar17 + 4);
                iVar16 = iVar15;
              } while (ppuVar17 <= ppuVar13);
            }
            iVar16 = *(int *)ppuVar11;
            *(int *)ppuVar11 = *(int *)ppuVar13;
            *(int *)ppuVar13 = iVar16;
            ppuVar13 = (undefined **)((longlong)ppuVar13 - 4);
          } while (ppuVar7 < ppuVar13);
        }
        goto LAB_140c5fab8;
      }
LAB_140c5fb1c:
      FUN_14899c7be(ppuVar7);
      ppuVar19 = local_350;
LAB_140c5fab8:
      local_350 = ppuVar19;
      pppuVar10 = pppuVar10 + -3;
    } while (&local_348 <= pppuVar10);
    if ((longlong)(int)param_2[1] != 0) {
      ppuVar13 = (undefined **)*param_2;
      ppuVar7 = (undefined **)((longlong)ppuVar13 + (longlong)(int)param_2[1] * 4);
      goto LAB_140c5f92d;
    }
  }
  pppuVar10 = &local_348;
  local_348 = &PTR_FUN_14b42f0a0;
  local_330 = 0;
  local_340 = (int *)(param_1 + 0x158);
  local_338 = param_2;
  FUN_140c5fd14(param_1);
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar21 = 0;
    bVar6 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar21);
      uVar18 = (ulonglong)(int)uVar1;
      if (((longlong)uVar18 < 0) || (iVar16 = *(int *)(param_1 + 0x160), iVar16 <= (int)uVar1)) {
        uVar18 = (ulonglong)pppuVar10 & 0xffffffff;
      }
      else {
        bVar3 = (bool)(bVar6 & (int)pppuVar10 <= (int)uVar1);
        bVar6 = 1;
        if (!bVar3) {
          if (~uVar1 + iVar16 != 0) {
            memmove((void *)(*(longlong *)(param_1 + 0x158) + uVar18 * 0x14),
                    (void *)(*(longlong *)(param_1 + 0x158) + uVar18 * 0x14 + 0x14),
                    (longlong)(int)(~uVar1 + iVar16) * 0x14);
            iVar16 = *(int *)(param_1 + 0x160);
          }
          *(int *)(param_1 + 0x160) = iVar16 + -1;
          FUN_140c5fe52((int *)(param_1 + 0x158));
        }
      }
      lVar21 = lVar21 + 4;
      pppuVar10 = (undefined ***)(uVar18 & 0xffffffff);
    } while ((longlong)(int)lVar4 * 4 != lVar21);
  }
LAB_140c5f8e8:
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140c5fb9a:
  iVar9 = *(int *)ppuVar7;
  *(int *)ppuVar7 = *(int *)ppuVar12;
  *(int *)ppuVar12 = iVar9;
  iVar16 = iVar16 + -1;
  ppuVar14 = ppuVar14 + -1;
  if ((longlong)ppuVar20 - (longlong)ppuVar17 < (longlong)ppuVar11 - (longlong)ppuVar19) {
    if (ppuVar8 < ppuVar13) {
      *pppuVar10 = ppuVar8;
      pppuVar10[1] = ppuVar13;
      *(int *)(pppuVar10 + 2) = iVar16;
      pppuVar10 = pppuVar10 + 3;
    }
    local_350 = ppuVar7;
    if (ppuVar12 <= (undefined **)((longlong)ppuVar7 + 4U)) goto LAB_140c5fab8;
  }
  else {
    if ((undefined **)((longlong)ppuVar7 + 4U) < ppuVar12) {
      *pppuVar10 = ppuVar7;
      pppuVar10[1] = ppuVar14;
      *(int *)(pppuVar10 + 2) = iVar16;
      pppuVar10 = pppuVar10 + 3;
    }
    ppuVar7 = ppuVar8;
    ppuVar14 = ppuVar13;
    ppuVar20 = ppuVar13;
    local_350 = ppuVar19;
    if (ppuVar13 <= ppuVar8) goto LAB_140c5fab8;
  }
  iVar9 = (int)((ulonglong)((longlong)ppuVar20 - (longlong)local_350) >> 2);
  ppuVar13 = ppuVar14;
  ppuVar11 = ppuVar20;
  ppuVar17 = local_350;
  if (iVar16 == 0) goto LAB_140c5fb1c;
  goto LAB_140c5fa66;
}



// FUNCTION 140c5fc30 FUN_140c5fc30 body=227 status=ok
// SIG undefined FUN_140c5fc30(void)

void FUN_140c5fc30(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    lVar3 = 0;
    uVar2 = 0;
    do {
      if (*(int *)(lVar1 + 8 + lVar3) == param_2) {
        if ((int)uVar2 < 0) {
          return;
        }
        if (iVar4 <= (int)uVar2) {
          return;
        }
        lVar3 = (ulonglong)(uVar2 & 0x7fffffff) * 0x10;
        iVar4 = *(int *)(lVar1 + 0xc + lVar3);
        iVar5 = 1;
        if (1 < iVar4) {
          iVar5 = iVar4;
        }
        *(int *)(lVar1 + 0xc + lVar3) = iVar5 + -1;
        lVar1 = *(longlong *)(param_1 + 0x168);
        if (*(int *)(lVar1 + 0xc + lVar3) != 0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x170);
        if (iVar4 - 1U != uVar2) {
          iVar6 = (iVar4 - 1U) - uVar2;
          iVar5 = 1;
          if (iVar6 < 1) {
            iVar5 = iVar6;
          }
          memmove((void *)(lVar3 + lVar1),(void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar1),
                  (longlong)iVar5 << 4);
          iVar4 = *(int *)(param_1 + 0x170);
        }
        *(int *)(param_1 + 0x170) = iVar4 + -1;
        FUN_140c5fdc4((longlong *)(param_1 + 0x168));
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar4 << 4 != lVar3);
  }
  return;
}



// FUNCTION 140c5fd14 FUN_140c5fd14 body=175 status=ok
// SIG undefined FUN_140c5fd14(void)

void FUN_140c5fd14(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (*(int *)(param_1 + 100) != 0)) &&
        (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
      ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 100) &&
       (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 &&
        (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))(), lVar4 != 0)))))) &&
     ((lVar4 = FUN_1447210f0(lVar4), lVar4 != 0 &&
      (iVar2 = *(int *)(param_1 + 0x88), (longlong)iVar2 != 0)))) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar4 + lVar5);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 140c5fdc4 FUN_140c5fdc4 body=142 status=ok
// SIG undefined FUN_140c5fdc4(void)

void FUN_140c5fdc4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,4);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,4);
    }
  }
  return;
}



// FUNCTION 140c5fe52 FUN_140c5fe52 body=158 status=ok
// SIG undefined FUN_140c5fe52(void)

void FUN_140c5fe52(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x14)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x14,4);
      uVar3 = uVar3 / 0x14;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
    }
  }
  return;
}



// FUNCTION 140c5fef0 FUN_140c5fef0 body=730 status=ok
// SIG undefined FUN_140c5fef0(void)

undefined8 FUN_140c5fef0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [40];
  float local_d0;
  char local_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  ulonglong uStack_a0;
  uint local_98;
  undefined1 uStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140c601cc(&local_d0,param_2 + 0x48);
  if (local_cc == '\x01') {
    if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
      local_88 = param_1;
      uStack_80 = param_2;
      local_78 = param_3;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x178) + 0x10))();
      if (cVar6 == '\0') goto LAB_140c60199;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uStack_a0 = CONCAT44(local_d0,(int)CONCAT71(uStack_a0._1_7_,-(local_d0 == 0.0))) &
                0xffffffffffffff01;
    uStack_94 = (undefined1)uVar1;
    uStack_93 = (undefined2)((uint)uVar1 >> 8);
    uStack_91 = (undefined1)((uint)uVar1 >> 0x18);
    local_c8 = param_3[2];
    uStack_80 = param_3[3];
    local_b8 = (longlong *)param_3[4];
    uStack_70 = param_3[5];
    local_68 = param_3[6];
    lStack_60 = param_3[7];
    local_58 = param_3[8];
    lStack_50 = param_3[9];
    lVar4 = local_58;
    lVar5 = lStack_50;
    local_78 = local_b8;
    lVar3 = uStack_70;
    local_88 = local_c8;
    lVar2 = uStack_80;
    *(undefined1 *)(param_3 + 8) = 1;
    *(ulonglong *)((longlong)param_3 + 0x41) =
         CONCAT17((undefined1)uStack_90,
                  CONCAT16(uStack_91,CONCAT24(uStack_93,CONCAT13(uStack_94,local_98._1_3_))));
    *(uint *)((longlong)param_3 + 0x49) = CONCAT13(uStack_8c,uStack_90._1_3_);
    *(undefined2 *)((longlong)param_3 + 0x4d) = uStack_8b;
    *(undefined1 *)((longlong)param_3 + 0x4f) = uStack_89;
    param_3[6] = (longlong)&PTR_LAB_14b42f060;
    param_3[7] = uStack_a0;
    param_3[4] = 0;
    param_3[5] = CONCAT44(uStack_ac,uStack_b0);
    param_3[2] = (longlong)&LAB_143e457d4;
    param_3[3] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = (undefined1)((ulonglong)local_58 >> 0x20);
    uStack_93 = (undefined2)((ulonglong)local_58 >> 0x28);
    uStack_91 = (undefined1)((ulonglong)local_58 >> 0x38);
    uStack_90 = (undefined4)lStack_50;
    uStack_8c = (undefined1)((ulonglong)lStack_50 >> 0x20);
    uStack_8b = (undefined2)((ulonglong)lStack_50 >> 0x28);
    uStack_89 = (undefined1)((ulonglong)lStack_50 >> 0x38);
    local_a8 = local_68;
    uStack_a0 = lStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    if (local_c8 != 0) {
      plVar8 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar8 = &local_a8;
      }
      uStack_80 = lVar2;
      uStack_70 = lVar3;
      local_58 = lVar4;
      lStack_50 = lVar5;
      (**(code **)(*plVar8 + 0x10))();
    }
    local_98 = CONCAT31(local_98._1_3_,-(local_d0 == 0.0)) & 0xffffff01;
    uStack_94 = SUB41(local_d0,0);
    uStack_93 = (undefined2)((uint)local_d0 >> 8);
    uStack_91 = (undefined1)((uint)local_d0 >> 0x18);
    local_c8 = param_3[10];
    uStack_80 = param_3[0xb];
    local_b8 = (longlong *)param_3[0xc];
    uStack_70 = param_3[0xd];
    local_68 = param_3[0xe];
    lStack_60 = param_3[0xf];
    local_58 = param_3[0x10];
    lStack_50 = param_3[0x11];
    lVar4 = local_58;
    lVar5 = lStack_50;
    local_78 = local_b8;
    lVar3 = uStack_70;
    local_88 = local_c8;
    lVar2 = uStack_80;
    *(undefined1 *)(param_3 + 0x10) = (undefined1)local_98;
    *(uint *)((longlong)param_3 + 0x81) = CONCAT13(uStack_94,local_98._1_3_);
    *(undefined2 *)((longlong)param_3 + 0x85) = uStack_93;
    *(undefined1 *)((longlong)param_3 + 0x87) = uStack_91;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(uint *)((longlong)param_3 + 0x89) = CONCAT13(uStack_8c,uStack_90._1_3_);
    *(undefined2 *)((longlong)param_3 + 0x8d) = uStack_8b;
    *(undefined1 *)((longlong)param_3 + 0x8f) = uStack_89;
    param_3[0xe] = (longlong)&PTR_LAB_14b42f080;
    param_3[0xf] = param_1;
    param_3[0xc] = 0;
    param_3[0xd] = CONCAT44(uStack_ac,uStack_b0);
    param_3[10] = (longlong)&LAB_143e45874;
    param_3[0xb] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = (undefined1)((ulonglong)local_58 >> 0x20);
    uStack_93 = (undefined2)((ulonglong)local_58 >> 0x28);
    uStack_91 = (undefined1)((ulonglong)local_58 >> 0x38);
    uStack_90 = (undefined4)lStack_50;
    uStack_8c = (undefined1)((ulonglong)lStack_50 >> 0x20);
    uStack_8b = (undefined2)((ulonglong)lStack_50 >> 0x28);
    uStack_89 = (undefined1)((ulonglong)lStack_50 >> 0x38);
    local_a8 = local_68;
    uStack_a0 = lStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = lVar2;
    uStack_70 = lVar3;
    local_58 = lVar4;
    lStack_50 = lVar5;
    if (local_c8 != 0) {
      plVar8 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar8 = local_b8;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    uVar7 = 1;
  }
  else {
LAB_140c60199:
    uVar7 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c601cc FUN_140c601cc body=272 status=ok
// SIG undefined FUN_140c601cc(void)

undefined4 * FUN_140c601cc(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = FUN_140c602de();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  lVar3 = FUN_140528a12(param_2,&local_60);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x28) == '\x03') {
      uVar5 = *(undefined4 *)(lVar3 + 8);
    }
    else {
      puVar4 = &local_58;
      FUN_1400b56fe(puVar4,(undefined4 *)(lVar3 + 8),3);
      uVar5 = 0;
      if (local_38 != 0) {
        uVar5 = local_58;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar4);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    *param_1 = uVar5;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c602de FUN_140c602de body=228 status=ok
// SIG undefined FUN_140c602de(void)

longlong FUN_140c602de(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67650 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458993da;
    local_38 = &LAB_14873bdb0;
    local_40 = &LAB_145beafe3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_Duration",&DAT_14cb67650,
                  FUN_1465169d8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67650;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c603c4 FUN_140c603c4 body=1250 status=ok
// SIG undefined FUN_140c603c4(void)

ulonglong FUN_140c603c4(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  longlong *unaff_R14;
  undefined8 ****ppppuVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [32];
  float local_98;
  char local_94;
  longlong *local_88;
  undefined4 local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    iVar9 = (int)param_1[1];
    plVar10 = param_1;
  }
  else {
    local_98 = (float)((uint)local_98 & 0xffffff00);
    local_70[0] = 0;
    FUN_14575a19a(&local_98,0);
    FUN_1448729ea(param_1 + 2,local_68,&local_98);
    iVar9 = FUN_14005fbd2(local_68,1);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar18 = local_68;
      if (0x18 < local_50) {
        ppppuVar18 = (undefined8 ****)local_68[0];
      }
      (*pcVar2)(ppppuVar18);
    }
    unaff_R14 = (longlong *)local_70;
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    plVar10 = unaff_R14;
    FUN_1448173f8();
    if ((local_98._0_1_ == '\x03') && (plVar10 = local_88, local_88 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
        plVar10 = local_88;
      }
    }
  }
  fVar20 = SUB84(plVar10,0);
  lVar17 = *param_2;
  if ((char)param_1[0xc] == '\x01') {
    uVar14 = 0;
    if ((longlong)*(int *)(lVar17 + 0x170) != 0) {
      uVar3 = *(undefined8 *)(param_2[1] + 0x18);
      unaff_R14 = *(longlong **)(lVar17 + 0x168);
      lVar17 = (longlong)*(int *)(lVar17 + 0x170) << 4;
      do {
        plVar10 = unaff_R14;
        cVar7 = FUN_1409d2f40(unaff_R14,uVar3);
        fVar20 = SUB84(plVar10,0);
        if (cVar7 != '\0') {
          uVar14 = 0;
          if (unaff_R14 != (longlong *)0x0) {
            uVar14 = (ulonglong)*(uint *)((longlong)unaff_R14 + 0xc);
          }
          break;
        }
        unaff_R14 = unaff_R14 + 2;
        lVar17 = lVar17 + -0x10;
        uVar14 = 0;
      } while (lVar17 != 0);
    }
  }
  else {
    uVar14 = (ulonglong)*(uint *)(lVar17 + 0x160);
  }
  iVar13 = (int)uVar14;
  if (iVar13 < iVar9) {
    uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
    if (iVar9 - iVar13 == 1) {
      FUN_140c608a8(param_2[1] + 0x68,&DAT_14cb8c2b0);
    }
    goto LAB_140c604b0;
  }
  cVar7 = (char)param_1[0xc];
  if (cVar7 == '\x01') {
    lVar17 = (longlong)*(int *)(*param_2 + 0x170);
    fVar20 = DAT_14cb8c3a0;
    if (lVar17 != 0) {
      unaff_R14 = *(longlong **)(param_2[1] + 0x18);
      lVar12 = *(longlong *)(*param_2 + 0x168);
      lVar17 = lVar17 << 4;
      do {
        cVar8 = FUN_1409d2f40(lVar12,unaff_R14);
        fVar20 = DAT_14cb8c3a0;
        if (cVar8 != '\0') {
          if (lVar12 != 0) {
            fVar20 = *(float *)(lVar12 + 8);
          }
          break;
        }
        lVar12 = lVar12 + 0x10;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
  }
  cVar8 = *(char *)((longlong)param_1 + 0x61);
  if (cVar8 == '\x02') {
    lVar17 = *param_2;
    uVar15 = (ulonglong)*(int *)(lVar17 + 0x160);
    if (0 < (longlong)uVar15) {
      pfVar16 = (float *)(*(longlong *)(lVar17 + 0x158) + uVar15 * 0x14 + -8);
      fVar19 = 0.0;
      bVar5 = false;
      do {
        if ((cVar7 == '\0') || (pfVar16[-2] == fVar20)) {
          if ((!bVar5) || (*pfVar16 < fVar19)) {
            bVar5 = true;
            unaff_R14 = (longlong *)(uVar15 - 1 & 0xffffffff);
            fVar19 = *pfVar16;
          }
        }
        pfVar16 = pfVar16 + -5;
        bVar4 = 1 < uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar4);
LAB_140c606c8:
      if (bVar5) goto LAB_140c606cd;
    }
  }
  else if (cVar8 == '\0') {
    lVar17 = *param_2;
    uVar6 = *(uint *)(lVar17 + 0x160);
    do {
      uVar11 = uVar6;
      if ((int)uVar11 < 1) goto LAB_140c6071a;
      uVar6 = uVar11 - 1;
      fVar19 = *(float *)(*(longlong *)(lVar17 + 0x158) + 8 + (ulonglong)uVar6 * 0x14);
      if ((fVar19 == 0.0) && (!NAN(fVar19))) goto LAB_140c6071a;
    } while ((cVar7 != '\0') &&
            (*(float *)(*(longlong *)(lVar17 + 0x158) + (ulonglong)uVar6 * 0x14 + 4) != fVar20));
    unaff_R14 = (longlong *)(ulonglong)(uVar11 - 1);
LAB_140c606cd:
    iVar9 = (int)unaff_R14;
    if ((-1 < iVar9) && (iVar9 < *(int *)(lVar17 + 0x160))) {
      lVar17 = ((ulonglong)unaff_R14 & 0xffffffff) * 0x14 + *(longlong *)(lVar17 + 0x158);
      FUN_140c601cc(&local_98,param_2[1] + 0x48);
      if (local_94 == '\x01') {
        cVar7 = *(char *)((longlong)param_1 + 0x62);
        if (cVar7 == '\x02') {
          fVar20 = 0.0;
          if ((*(byte *)(lVar17 + 0x10) & 1) != 0) {
            fVar19 = *(float *)(lVar17 + 8) -
                     (*(float *)(*param_2 + 0x14c) - *(float *)(lVar17 + 0xc));
            fVar20 = 0.0;
            if (0.0 <= fVar19) {
              fVar20 = fVar19;
            }
          }
          if (local_98 < fVar20) goto LAB_140c60791;
        }
        else if (cVar7 == '\x01') {
          fVar20 = 0.0;
          if ((*(byte *)(lVar17 + 0x10) & 1) != 0) {
            fVar19 = *(float *)(lVar17 + 8) -
                     (*(float *)(*param_2 + 0x14c) - *(float *)(lVar17 + 0xc));
            fVar20 = 0.0;
            if (0.0 <= fVar19) {
              fVar20 = fVar19;
            }
          }
          if (fVar20 < local_98) goto LAB_140c60791;
        }
        else if (cVar7 == '\0') {
LAB_140c60791:
          plVar10 = (longlong *)param_2[2];
          iVar13 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar13 + 1U) {
            FUN_1446f48e2(plVar10,iVar13);
          }
          *(int *)(*plVar10 + (longlong)iVar13 * 4) = iVar9;
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
          goto LAB_140c604b0;
        }
      }
    }
  }
  else if (cVar8 == '\x03') {
    lVar17 = *param_2;
    uVar15 = (ulonglong)*(int *)(lVar17 + 0x160);
    if (0 < (longlong)uVar15) {
      pfVar16 = (float *)(*(longlong *)(lVar17 + 0x158) + uVar15 * 0x14 + -8);
      fVar19 = 0.0;
      bVar5 = false;
      do {
        if ((cVar7 == '\0') || (pfVar16[-2] == fVar20)) {
          if ((!bVar5) || (fVar19 < *pfVar16)) {
            bVar5 = true;
            unaff_R14 = (longlong *)(uVar15 - 1 & 0xffffffff);
            fVar19 = *pfVar16;
          }
        }
        pfVar16 = pfVar16 + -5;
        bVar4 = 1 < uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar4);
      goto LAB_140c606c8;
    }
  }
  else if (cVar8 == '\x01') {
    lVar17 = *param_2;
    if (0 < (longlong)*(int *)(lVar17 + 0x160)) {
      pfVar16 = (float *)(*(longlong *)(lVar17 + 0x158) + 8);
      unaff_R14 = (longlong *)0x0;
      uVar14 = 0;
      do {
        if (((*pfVar16 != 0.0) || (NAN(*pfVar16))) && ((cVar7 == '\0' || (pfVar16[-1] == fVar20))))
        goto LAB_140c606cd;
        unaff_R14 = (longlong *)((longlong)unaff_R14 + 1);
        pfVar16 = pfVar16 + 5;
      } while ((longlong *)(longlong)*(int *)(lVar17 + 0x160) != unaff_R14);
      goto LAB_140c604b0;
    }
  }
LAB_140c6071a:
  uVar14 = 0;
LAB_140c604b0:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 140c608a8 FUN_140c608a8 body=84 status=ok
// SIG undefined FUN_140c608a8(void)

int FUN_140c608a8(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_140c608fc();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_140c60952(param_1,iVar3);
    }
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  return iVar3;
}



// FUNCTION 140c608fc FUN_140c608fc body=85 status=ok
// SIG undefined FUN_140c608fc(void)

int FUN_140c608fc(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar1 = (int *)*param_1;
    piVar2 = piVar1 + (longlong)*(int *)(param_1 + 1) * 4;
    iVar3 = 0;
    do {
      if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) &&
         (piVar1[3] == param_2[3])) {
        return iVar3;
      }
      piVar1 = piVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (piVar1 != piVar2);
  }
  return -1;
}



// FUNCTION 140c60952 FUN_140c60952 body=269 status=ok
// SIG undefined FUN_140c60952(void)

void FUN_140c60952(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c60a60 FUN_140c60a60 body=122 status=ok
// SIG undefined FUN_140c60a60(void)

void FUN_140c60a60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c60ae2 FUN_140c60ae2 body=122 status=ok
// SIG undefined FUN_140c60ae2(void)

void FUN_140c60ae2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c60b64 FUN_140c60b64 body=122 status=ok
// SIG undefined FUN_140c60b64(void)

void FUN_140c60b64(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c60be6 FUN_140c60be6 body=122 status=ok
// SIG undefined FUN_140c60be6(void)

void FUN_140c60be6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c60c68 FUN_140c60c68 body=122 status=ok
// SIG undefined FUN_140c60c68(void)

void FUN_140c60c68(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c60cea FUN_140c60cea body=122 status=ok
// SIG undefined FUN_140c60cea(void)

void FUN_140c60cea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c60d7a FUN_140c60d7a body=40 status=ok
// SIG undefined FUN_140c60d7a(void)

undefined8 FUN_140c60d7a(undefined8 param_1,int param_2)

{
  FUN_140c60da2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c60da2 FUN_140c60da2 body=240 status=ok
// SIG undefined FUN_140c60da2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c60da2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b465ec0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140c60e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c60e9c FUN_140c60e9c body=392 status=ok
// SIG undefined FUN_140c60e9c(void)

void FUN_140c60e9c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408ed768(local_38);
  if (*param_2 == '\x01') {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_40 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_48 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_40 = 1;
      local_48 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_140c60f48;
    }
  }
  local_30 = (char *)(lVar6 + 0x50);
LAB_140c60f48:
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    uVar4 = *(undefined4 *)(local_30 + 8);
    iVar9 = 0;
    do {
      puVar1 = local_48 + (int)local_40;
      *local_48 = uVar4;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c61030 FUN_140c61030 body=3016 status=ok
// SIG undefined FUN_140c61030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c61030(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a471d40;
  param_1[5] = &PTR_FUN_14a471510;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3e] = 0x10000000000;
  param_1[0x43] = 0x10000000000;
  param_1[0x48] = 0x10000000000;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = &DAT_ff000000ff;
  FUN_14020fad6(param_1 + 0x4c,L"UE::MovieScene::FEntityManager");
  *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
  param_1[0x4e] = 1;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  FUN_140c61c70(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x531) = 0;
  *(undefined8 *)((longlong)param_1 + 0x539) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0xffffffff00000080;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x80;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0;
  param_1[0xd9] = 2;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xdf] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x80;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0x8000000000;
  param_1[0xe1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x704) = 0;
  param_1[0xdc] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_140c618a6;
  param_1[0xa7] = param_1;
  local_88 = (undefined8 **)(param_1 + 0x4c);
  FUN_140c61d68(param_1 + 0xd1,&local_70,param_1 + 0x86,FUN_1405b7262);
  uVar6 = FUN_140c61bfa();
  local_70 = (undefined8 *)0x0;
  local_68._0_4_ = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar3 = local_70;
  local_68._0_4_ = 3;
  iVar14 = (int)local_68;
  local_68._0_4_ = 3;
  *local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_70[2] = lVar9;
  *local_70 = &PTR_FUN_14a4756e0;
  local_70[3] = 0;
  iVar15 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_70 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar15 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar15 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar15;
      local_68._0_4_ = iVar14;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar15 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar15 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar5;
        iVar15 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar15 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar15;
  puVar3[4] = &DAT_1403b27da;
  FUN_1448b6402(uVar6,&local_80,&local_70);
  if ((int)local_68 == 0) {
LAB_140c6151f:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68._0_4_ = 0;
    goto LAB_140c6151f;
  }
  uVar6 = FUN_140b631de();
  local_70 = (undefined8 *)0x0;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar3 = local_70;
  local_68._0_4_ = 3;
  *local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_70[2] = lVar9;
  *local_70 = &PTR_FUN_14a4756e0;
  local_70[3] = 0;
  iVar14 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_70 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar14 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar14 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar14 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar14 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar14;
  puVar3[4] = FUN_1403b27dc;
  FUN_1448b6402(uVar6,&local_80,&local_70);
  ppuVar4 = local_88;
  if ((int)local_68 == 0) {
LAB_140c61609:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68._0_4_ = 0;
    goto LAB_140c61609;
  }
  local_70 = (undefined8 *)param_1[3];
  FUN_1400021e4(&local_70);
  iVar14 = (int)local_78;
  iVar5 = ((int)local_78 == 0) + 0x10;
  local_70 = local_80;
  local_80 = (undefined8 *)0x0;
  iVar15 = local_78._4_4_;
  local_68 = local_78;
  local_78 = 0;
  iVar11 = iVar5 + iVar14;
  if (iVar11 < iVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar15 < iVar11) {
    FUN_1446f8c06(&local_70);
  }
  FUN_1400020e8(&local_70,L"[Entity Manager]",0x10);
  if (ppuVar4 == &local_70) {
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x4c] != 0) {
      FUN_1400020a8();
    }
    param_1[0x4c] = local_70;
    local_70 = (undefined8 *)0x0;
    *(int *)(param_1 + 0x4d) = (int)local_68;
    *(uint *)((longlong)param_1 + 0x26c) = local_68._4_4_;
    local_68 = 0;
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  param_1[0x4b] = &DAT_14cab29b8;
  puVar7 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  *puVar7 = param_1;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  *(undefined2 *)(puVar7 + 8) = 0;
  puVar7[0xd] = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = 0;
  puVar7[0x11] = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  puVar3 = (undefined8 *)param_1[0xa9];
  if ((puVar3 != puVar7) && (param_1[0xa9] = puVar7, puVar3 != (undefined8 *)0x0)) {
    FUN_1409561e0(puVar3);
    FUN_1400020a8(puVar3);
  }
  plVar8 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar13 = plVar8 + 2;
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a475750;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  iVar14 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(plVar8 + 4) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar14 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar14 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar14 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar14 = iVar15;
      }
    }
  }
  *(int *)((longlong)plVar8 + 0x24) = iVar14;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 2;
  *(undefined4 *)(plVar8 + 0x11) = 0x101;
  *(undefined1 *)((longlong)plVar8 + 0x8c) = 0;
  plVar8[0x12] = 0;
  *(undefined2 *)((longlong)plVar8 + 0x99) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  if ((plVar13 == (longlong *)0x0) ||
     (((*plVar13 != 0 && (plVar8[3] != 0)) && (0 < *(int *)(plVar8[3] + 8))))) {
    if (plVar8 == (longlong *)0x0) goto LAB_140c61ab2;
LAB_140c61871:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0xbb] = plVar13;
    plVar13 = (longlong *)param_1[0xbc];
    if (plVar8 == plVar13) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else {
      param_1[0xbc] = plVar8;
      if (plVar13 != (longlong *)0x0) {
        bVar17 = false;
        goto LAB_140c61b21;
      }
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[2] = (longlong)plVar13;
      if ((longlong *)plVar8[3] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[3] != (longlong *)0x0) {
          plVar12 = plVar8 + 3;
          plVar10 = (longlong *)plVar8[3];
          goto LAB_140c61a9a;
        }
        plVar8[3] = (longlong)plVar8;
      }
LAB_140c61867:
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_140c61871;
    }
    _DAT_00000010 = 0x10;
    plVar12 = (longlong *)&DAT_00000018;
    plVar10 = _DAT_00000018;
    if (_DAT_00000018 != (longlong *)0x0) {
LAB_140c61a9a:
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      *plVar12 = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_140c61867;
    }
LAB_140c61ab2:
    param_1[0xbb] = plVar13;
    plVar13 = (longlong *)param_1[0xbc];
    if (plVar13 == (longlong *)0x0) goto LAB_140c618a6;
    param_1[0xbc] = plVar8;
    bVar17 = true;
LAB_140c61b21:
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    if (bVar17) goto LAB_140c618a6;
  }
  LOCK();
  plVar13 = plVar8 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_140c618a6:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c61bfa FUN_140c61bfa body=117 status=ok
// SIG undefined FUN_140c61bfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c61bfa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9641f0) {
    FUN_144b3d300(&DAT_14c9641f0);
    if (DAT_14c9641f0 == -1) {
      DAT_14c9641d8 = 0;
      _DAT_14c9641e0 = 0;
      _DAT_14c9641e8 = 2;
      atexit(FUN_14283ccba);
      _Init_thread_footer(&DAT_14c9641f0);
    }
  }
  return &DAT_14c9641d8;
}



// FUNCTION 140c61c70 FUN_140c61c70 body=248 status=ok
// SIG undefined FUN_140c61c70(void)

void FUN_140c61c70(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x400000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x800000000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x1000000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x1000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0x200000000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 140c61d68 FUN_140c61d68 body=604 status=ok
// SIG undefined FUN_140c61d68(void)

undefined8 * FUN_140c61d68(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14a481140;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14a480f10;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140c61ec9;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140c61eb3;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_140c61eb3:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140c61ec9:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c61fd0 FUN_140c61fd0 body=677 status=ok
// SIG undefined FUN_140c61fd0(void)

void FUN_140c61fd0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  longlong *plStack_1d0;
  longlong local_1c8 [3];
  undefined8 local_1b0;
  undefined2 local_1a2;
  undefined1 local_1a0 [48];
  short local_170 [4];
  undefined1 local_168 [32];
  longlong local_148;
  undefined1 local_138 [224];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_1d8 = 0;
    plStack_1d0 = (longlong *)0x0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,local_138);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_1a2 = 0;
  (**(code **)(*param_1 + 0x480))(param_1,&local_1a2);
  (**(code **)(*param_1 + 0x488))(param_1,&local_1a2);
  (**(code **)(*param_1 + 0x490))(param_1,&local_1a2);
  cVar3 = FUN_140c62276();
  if ((cVar3 != '\0') && (lVar5 = (**(code **)(*param_1 + 0x388))(param_1), lVar5 != 0)) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar7 = DAT_14c760db4;
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar7 = (uint)*(byte *)(lVar5 + 0x150);
    }
    iVar4 = (**(code **)(*param_1 + 0x428))(param_1,0);
    plStack_1d0 = (longlong *)CONCAT44(plStack_1d0._4_4_,uVar7);
    local_1d8 = local_1d8 & 0xffffffffffffff00;
    FUN_1448d1550(param_1,local_138,0,iVar4);
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x388))(param_1);
    local_1b0 = 0x208e00;
    if (iVar4 < (int)plVar6[1]) {
      lVar5 = (longlong)iVar4;
      do {
        lVar1 = *(longlong *)(*plVar6 + lVar5 * 8);
        lVar9 = (longlong)*(int *)(lVar1 + 0x18);
        if (lVar9 != 0) {
          lVar10 = 0;
          do {
            if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0xd + lVar10) != '\0') {
              local_1b0 = 0x209e00;
              goto LAB_140c62187;
            }
            lVar10 = lVar10 + 0xf8;
          } while (lVar9 * 0xf8 - lVar10 != 0);
        }
        lVar5 = lVar5 + 1;
      } while ((int)plVar6[1] != (int)lVar5);
    }
LAB_140c62187:
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x3b8))(param_1);
    local_1c8[0] = 0;
    local_1c8[1] = 0;
    puVar8 = local_138;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if ((longlong)local_50 != 0) {
      lVar5 = (longlong)local_50 * 0x38;
      do {
        FUN_147d2518a(local_170,puVar8);
        plVar2 = *(longlong **)(*plVar6 + (longlong)local_170[0] * 0x28);
        if (plVar2 != (longlong *)0x0) {
          local_1d8 = local_1d8 & 0xffffffffffffff00;
          plStack_1d0 = local_1c8;
          (**(code **)(*plVar2 + 0x368))(plVar2,local_1a0,local_168,&local_1b0);
          FUN_14588b8d6(local_1a0);
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        puVar8 = puVar8 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      if (local_1c8[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14472bf0c(local_138);
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c62276 FUN_140c62276 body=246 status=ok
// SIG undefined FUN_140c62276(void)

undefined8 FUN_140c62276(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 0;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      return 0;
    }
LAB_140c622b1:
    if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
      cVar1 = FUN_1406917e6();
      if (cVar1 == '\0') {
        return 0;
      }
      if (DAT_14cafb260 == 0) {
        return 0;
      }
    }
    else if (DAT_14cafb260 == 0) goto LAB_140c622cc;
    uVar2 = 1;
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_140c622b1;
LAB_140c622cc:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140c6236c FUN_140c6236c body=364 status=ok
// SIG undefined FUN_140c6236c(void)

undefined4 * FUN_140c6236c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6259c(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(int *)(local_40 + 2) = (int)puVar1[1];
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = 0;
  cVar2 = FUN_140c624da(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140c62772(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c624da FUN_140c624da body=193 status=ok
// SIG undefined FUN_140c624da(void)

void FUN_140c624da(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
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
          FUN_14016e594(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_140c6254d;
    }
  }
  uVar6 = 0;
LAB_140c6254d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140c6259c FUN_140c6259c body=470 status=ok
// SIG undefined FUN_140c6259c(void)

int * FUN_140c6259c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x20);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140c62772 FUN_140c62772 body=590 status=ok
// SIG undefined FUN_140c62772(void)

void FUN_140c62772(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140c6297b;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140c6297b:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c629c2 FUN_140c629c2 body=75 status=ok
// SIG undefined FUN_140c629c2(void)

undefined1 FUN_140c629c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140c62a0e(param_2,param_3);
    FUN_140c62aa8(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 140c62a0e FUN_140c62a0e body=154 status=ok
// SIG undefined FUN_140c62a0e(void)

longlong FUN_140c62a0e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140c62a3a;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140c62a3a:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140c62b42(param_1,param_2);
  return param_1;
}



// FUNCTION 140c62aa8 FUN_140c62aa8 body=154 status=ok
// SIG undefined FUN_140c62aa8(void)

longlong FUN_140c62aa8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140c62ad4;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140c62ad4:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140c62c94(param_1,param_2);
  return param_1;
}



// FUNCTION 140c62b42 FUN_140c62b42 body=337 status=ok
// SIG undefined FUN_140c62b42(void)

undefined8 * FUN_140c62b42(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *_Dst;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1408e6a6e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar6 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar5 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar5 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar5,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar8 = (undefined4 *)*param_1;
      puVar9 = (undefined4 *)*param_2;
      uVar7 = 0;
      do {
        puVar5 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
        }
        else {
          FUN_14107d9f8(puVar8,puVar9);
          uVar3 = *(undefined8 *)(puVar9 + 8);
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar9 + 6);
          *(undefined8 *)(puVar8 + 8) = uVar3;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar9 + 10);
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 0xc;
        puVar8 = puVar8 + 0xc;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 140c62c94 FUN_140c62c94 body=340 status=ok
// SIG undefined FUN_140c62c94(void)

undefined8 * FUN_140c62c94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1408e6aea(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14488f93c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_14107d9f8(puVar7,puVar8);
          FUN_143c3e224(puVar7 + 6,puVar8 + 6);
          *(undefined8 *)(puVar7 + 0x16) = *(undefined8 *)(puVar8 + 0x16);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0x18;
        puVar7 = puVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140c62df6 FUN_140c62df6 body=31 status=ok
// SIG undefined FUN_140c62df6(void)

undefined8 FUN_140c62df6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c62e16 FUN_140c62e16 body=821 status=ok
// SIG undefined FUN_140c62e16(void)

void FUN_140c62e16(longlong *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c632cc();
  *(undefined4 *)(param_1 + 0x65) = 0;
  lVar3 = param_1[6];
  bVar1 = *(byte *)(lVar3 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) &&
     (lVar3 = *(longlong *)
               (*(longlong *)(lVar3 + 0xbe8) + 0x20 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               ), lVar3 != 0)) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar4 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_50[2] = lVar6;
    *local_50 = &PTR_FUN_14b4aa3c0;
    local_50[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_50 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar8 + 0x10) = iVar9;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = param_1;
    FUN_140c6314c(lVar3 + 0x40,local_58,&local_50);
    if (local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_140c62f63;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140c62f63:
  if (((0.0 < *(float *)((longlong)param_1 + 0x1c4)) || (0.0 < *(float *)(param_1 + 0x3a))) &&
     (*(byte *)(param_1 + 7) != param_2)) {
    if (((int)(uint)param_2 < *(int *)(param_1[6] + 0xbf0)) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)(param_1[6] + 0xbe8) + 8 +
                 (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8), lVar3 != 0)) {
      lVar8 = FUN_140086c3a();
      if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
         (((0.0 < *(float *)(lVar3 + 0x1c4) || (0.0 < *(float *)(lVar3 + 0x1d0))) &&
          (param_1[0x2f] == *(longlong *)(lVar3 + 0x178))))) {
        *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(lVar3 + 0x2d8);
        *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)(lVar3 + 0x2d4);
      }
    }
  }
  if ((((*(byte *)(param_1 + 5) & 1) == 0) &&
      (cVar5 = (**(code **)(*param_1 + 0x480))(param_1), cVar5 != '\0')) &&
     ((*(byte *)(param_1 + 5) & 1) == 0)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
    if (param_1[6] != 0) {
      FUN_140b8222c(param_1[6],param_1,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6314c FUN_140c6314c body=370 status=ok
// SIG undefined FUN_140c6314c(void)

undefined8 * FUN_140c6314c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c632cc FUN_140c632cc body=267 status=ok
// SIG undefined FUN_140c632cc(void)

void FUN_140c632cc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2d0))();
  }
  uVar1 = *(uint *)(param_1 + 0xd8);
  if ((0 < (int)uVar1) && (*(int *)(param_1 + 0xe8) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      local_a8[0] = 0;
      local_80 = 0;
      FUN_1456bb102(local_a8,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      local_78[0] = 0;
      local_50 = 0;
      local_c0 = 0;
      local_b8 = 1;
      local_c8 = local_a8;
      (**(code **)(*plVar3 + 0x68))
                (plVar3,*(undefined1 *)(param_1 + 0x38),param_1 + 0xe0,
                 *(undefined8 *)(param_1 + 0x30));
      FUN_144a5ac3a(local_78);
      FUN_144a5ac3a(local_a8);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c633e6 FUN_140c633e6 body=45 status=ok
// SIG undefined FUN_140c633e6(void)

undefined8 FUN_140c633e6(undefined8 param_1,int param_2)

{
  FUN_140c63414();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 140c63414 FUN_140c63414 body=1144 status=ok
// SIG undefined FUN_140c63414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c63414(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b0755f0;
  param_1[0x44] = &PTR_FUN_14a1701c0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x48);
  param_1[0x44] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (*(int *)((longlong)param_1 + 0x23c) != 0) {
    FUN_140115c12(param_1 + 0x46,0);
  }
  param_1[0x45] = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140c6388c(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_140c638d7(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x36;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x39)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x39)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1447cd778(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x28;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2b)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x21;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1d)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xb;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xf) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 4;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 7)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 7)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140c637a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c6388c FUN_140c6388c body=75 status=ok
// SIG undefined FUN_140c6388c(void)

void FUN_140c6388c(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c638d7 FUN_140c638d7 body=163 status=ok
// SIG undefined FUN_140c638d7(void)

void FUN_140c638d7(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      FUN_1447cd778(puVar3[10],*(undefined4 *)(puVar3 + 0xb));
      if (puVar3[10] != 0) {
        FUN_1400020a8();
      }
      if (puVar3[8] != 0) {
        FUN_1400020a8();
      }
      if (puVar3[6] != 0) {
        FUN_1400020a8();
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c6397e FUN_140c6397e body=40 status=ok
// SIG undefined FUN_140c6397e(void)

undefined8 FUN_140c6397e(undefined8 param_1,int param_2)

{
  FUN_140c639a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c639a6 FUN_140c639a6 body=175 status=ok
// SIG undefined FUN_140c639a6(void)

void FUN_140c639a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a51e0;
  param_1[5] = &PTR_FUN_14b3a5be0;
  param_1[6] = &PTR_LAB_14b3a5c20;
  param_1[0x55] = &PTR_FUN_14b3a5c70;
  param_1[0x56] = &PTR_FUN_14b3a5cf0;
  param_1[0x57] = &PTR_FUN_14b3a5d00;
  param_1[0xc4] = &PTR_FUN_14b3a5d30;
  param_1[0xc5] = &PTR_FUN_14b3a5d50;
  FUN_140c63a56(param_1 + 0xd7,1);
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140c63a56 FUN_140c63a56 body=124 status=ok
// SIG undefined FUN_140c63a56(void)

void FUN_140c63a56(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140c63ad2 FUN_140c63ad2 body=103 status=ok
// SIG undefined FUN_140c63ad2(void)

void FUN_140c63ad2(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000140c63b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c63b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 140c63b3a FUN_140c63b3a body=69 status=ok
// SIG undefined FUN_140c63b3a(void)

void FUN_140c63b3a(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *(undefined4 *)(param_2 + 0x58);
  FUN_1447cd2ec(param_1 + 0x80);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c63b80 FUN_140c63b80 body=88 status=ok
// SIG undefined FUN_140c63b80(void)

void FUN_140c63b80(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140c63bd8(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar1 + 1;
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = (longlong)iVar1 * 0xb0;
  *(undefined4 *)(lVar2 + lVar3) = param_2;
  *(undefined4 *)(lVar2 + 4 + lVar3) = param_3;
  *(undefined1 *)(lVar2 + 9 + lVar3) = 4;
  FUN_140da48c8(param_1 + -0x68);
  return;
}



// FUNCTION 140c63bd8 FUN_140c63bd8 body=57 status=ok
// SIG undefined FUN_140c63bd8(void)

void FUN_140c63bd8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457a99fc(param_1,iVar1);
  }
  FUN_140da5051((longlong)iVar1 * 0xb0 + *param_1);
  return;
}



// FUNCTION 140c63c12 FUN_140c63c12 body=2870 status=ok
// SIG undefined FUN_140c63c12(void)

void FUN_140c63c12(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  code **ppcVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  undefined8 in_R11;
  longlong lVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  bool local_b1;
  longlong local_b0;
  uint local_a4;
  longlong local_a0;
  uint *local_98;
  undefined1 local_90 [8];
  code *local_88;
  int local_80;
  code *local_78 [4];
  code **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140c6474a();
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) goto LAB_140c645b4;
  local_b0 = lVar8;
  if (DAT_14cac9ca8 == 0) {
    local_d0 = local_78;
    local_78[0] = FUN_141030f22;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1478c0a72;
    local_e0 = &LAB_1417b2375;
    local_e8 = L"Engine";
    local_f0 = 0x1000000000;
    local_f8 = 0x10000004;
    local_100 = 8;
    local_108 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((*(int *)(*(longlong *)(local_b0 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_b0 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_140c645b4;
  local_58 = (code **)0x0;
  local_50 = 0x400000000;
  lVar8 = FUN_1407be990();
  bVar24 = lVar8 != 0;
  local_a0 = param_1;
  if ((lVar8 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar8 != 0) goto LAB_140c63ce0;
    uVar16 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140c641fb;
    lVar18 = 0;
    uVar16 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_140c63d0f:
    local_b1 = bVar24;
    if (lVar18 != DAT_14cad00c8) goto LAB_140c63d1d;
    if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar8);
    }
    FUN_14899a010(local_b0,local_78);
  }
  else {
    FUN_1456cec3c(lVar8);
LAB_140c63ce0:
    if (DAT_14cad00c8 == 0) {
      local_d0 = &local_88;
      local_88 = FUN_144a7958c;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1479b7a0c;
      local_e0 = &LAB_1463b464e;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10000005;
      local_100 = 8;
      local_108 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        uVar16 = 0;
LAB_140c641fb:
        local_d0 = &local_88;
        local_88 = FUN_144a7958c;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_1479b7a0c;
        local_e0 = &LAB_1463b464e;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10000005;
        local_100 = 8;
        local_108 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar18 = 0;
        uVar16 = uVar16 & 0xffffffff;
        goto LAB_140c63d0f;
      }
    }
    local_b1 = true;
    if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      lVar18 = lVar8;
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_140c63d0f;
    }
LAB_140c63d1d:
    bVar22 = local_b1;
    if ((local_b1 != false) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar8);
      uVar16 = uVar16 & 0xffffffff;
    }
    puVar19 = (uint *)(local_b0 + 0x250);
    iVar7 = *(int *)(local_b0 + 0x268);
    if (iVar7 == 0) {
      uVar21 = 1;
      uVar15 = 0;
      iVar6 = 0;
      iVar17 = 0;
    }
    else {
      puVar9 = *(uint **)(local_b0 + 0x260);
      if (*(uint **)(local_b0 + 0x260) == (uint *)0x0) {
        puVar9 = puVar19;
      }
      uVar23 = *puVar9;
      if (uVar23 == 0) {
        iVar6 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar6 = iVar7 + -1;
        }
        uVar15 = 0;
        uVar21 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar21 = uVar15;
        }
        iVar17 = 0;
        do {
          if (uVar21 == uVar15) goto LAB_140c642c5;
          iVar17 = iVar17 + 0x20;
          uVar23 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar23 == 0);
      }
      else {
        uVar15 = 0;
        iVar17 = 0;
      }
      uVar21 = (ulonglong)(-uVar23 & uVar23);
      uVar1 = uVar21 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar6 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar6) {
        iVar6 = iVar7;
      }
    }
    if (iVar6 != iVar7) {
      uVar23 = 0xffffffff;
      do {
        pcVar3 = *(code **)(*(longlong *)(local_b0 + 0x240) + (longlong)iVar6 * 0x10);
        if (pcVar3 != (code *)0x0) {
          if ((DAT_14c950c29 & bVar22) == 1) {
            local_a4 = (uint)uVar16;
            FUN_1456cec3c(lVar8);
            uVar16 = (ulonglong)local_a4;
            bVar22 = local_b1;
LAB_140c63df7:
            if (DAT_14cad00c8 == 0) {
              local_d0 = &local_88;
              local_88 = FUN_144a7958c;
              local_c0 = FUN_14081d0ea;
              local_c8 = FUN_14081d0ea;
              local_d8 = &LAB_1479b7a0c;
              local_e0 = &LAB_1463b464e;
              local_e8 = L"Engine";
              local_f0 = 0;
              local_f8 = 0x10000005;
              local_100 = 8;
              local_108 = 0x110;
              local_a4 = (uint)uVar16;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              uVar16 = (ulonglong)local_a4;
              bVar22 = local_b1;
              if (DAT_14cad00c8 == 0) goto LAB_140c64003;
            }
            if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140c64003;
            lVar18 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar18 = lVar8;
            }
          }
          else {
            if ((char)uVar16 == '\0') goto LAB_140c63df7;
LAB_140c64003:
            lVar18 = 0;
          }
          uVar1 = local_50;
          if ((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(pcVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30)) {
            lVar18 = (longlong)(int)local_50;
            uVar14 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar14);
            if (local_50._4_4_ < uVar14) {
              local_a4 = (uint)uVar16;
              local_98 = puVar19;
              FUN_14899a152(local_78,uVar1 & 0xffffffff);
              uVar16 = (ulonglong)local_a4;
              puVar19 = local_98;
            }
            ppcVar10 = local_58;
            if (local_58 == (code **)0x0) {
              ppcVar10 = local_78;
            }
            ppcVar10[lVar18] = pcVar3;
            bVar22 = local_b1;
          }
        }
        uVar23 = uVar23 & ~(uint)uVar21;
        puVar9 = *(uint **)(local_b0 + 0x260);
        if (*(uint **)(local_b0 + 0x260) == (uint *)0x0) {
          puVar9 = puVar19;
        }
        iVar2 = *(int *)(local_b0 + 0x268);
        iVar6 = (int)uVar15;
        lVar18 = (longlong)iVar6;
        uVar14 = puVar9[lVar18] & uVar23;
        if (uVar14 == 0) {
          iVar12 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar12 = iVar2 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar6) {
            iVar13 = iVar6;
          }
          if (iVar6 < iVar12) {
            lVar20 = 0;
            do {
              uVar14 = puVar9[lVar18 + lVar20 + 1];
              if (uVar14 != 0) {
                uVar15 = (ulonglong)(iVar6 + (int)lVar20 + 1);
                uVar23 = 0xffffffff;
                goto LAB_140c63ebf;
              }
              iVar17 = iVar17 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar13 - lVar18 != lVar20);
            uVar23 = 0xffffffff;
            iVar6 = iVar13;
          }
          uVar15 = (ulonglong)(iVar6 + 1);
          bVar22 = local_b1;
          iVar6 = iVar2;
        }
        else {
LAB_140c63ebf:
          uVar21 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar21 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar6 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar6) {
            iVar6 = iVar2;
          }
        }
      } while (iVar6 != iVar7);
    }
  }
LAB_140c642c5:
  ppcVar10 = local_58;
  if (local_58 == (code **)0x0) {
    ppcVar10 = local_78;
  }
  lVar8 = (longlong)(int)local_50;
  if (lVar8 != 0) {
    lVar20 = 0;
    lVar18 = local_a0;
    do {
      lVar4 = *(longlong *)((longlong)ppcVar10 + lVar20);
      if (lVar4 != 0) {
        local_88 = (code *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,3,0x10);
        pcVar3 = local_88;
        local_80 = 3;
        *(undefined ***)local_88 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        *(longlong *)(local_88 + 0x10) = lVar11;
        *(undefined ***)local_88 = &PTR_FUN_14b42e340;
        *(undefined8 *)(local_88 + 0x18) = 0;
        if (lVar18 == 0) {
          iVar7 = 0;
        }
        else {
          uVar23 = *(uint *)(lVar18 + 0xc);
          *(uint *)(local_88 + 0x18) = uVar23;
          if ((int)uVar23 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          iVar7 = *(int *)(lVar18 + 0x10);
          if (*(int *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar24) {
              local_b0 = CONCAT44(local_b0._4_4_,iVar6);
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
              iVar6 = (int)local_b0;
            }
            LOCK();
            iVar7 = *(int *)(lVar18 + 0x10);
            bVar24 = iVar7 == 0;
            if (bVar24) {
              *(int *)(lVar18 + 0x10) = iVar6;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar24) {
              iVar7 = iVar6;
            }
          }
        }
        *(int *)(pcVar3 + 0x1c) = iVar7;
        *(code **)(pcVar3 + 0x20) = FUN_141094ca0;
        *(undefined4 *)(pcVar3 + 0x28) = 0;
        FUN_1448b6402(lVar4 + 0x638,local_90,&local_88);
        lVar18 = local_a0;
        if (local_80 == 0) {
LAB_140c6440b:
          if (local_88 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_88 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_88)(local_88,0);
          FUN_1446efa72(&local_88,0,0,0x10);
          local_80 = 0;
          goto LAB_140c6440b;
        }
        local_88 = (code *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,3,0x10);
        pcVar3 = local_88;
        local_80 = 3;
        *(undefined ***)local_88 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        *(longlong *)(local_88 + 0x10) = lVar11;
        *(undefined ***)local_88 = &PTR_FUN_14b42e340;
        *(undefined8 *)(local_88 + 0x18) = 0;
        if (lVar18 == 0) {
          iVar7 = 0;
        }
        else {
          uVar23 = *(uint *)(lVar18 + 0xc);
          *(uint *)(local_88 + 0x18) = uVar23;
          if ((int)uVar23 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          iVar7 = *(int *)(lVar18 + 0x10);
          if (*(int *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar24) {
              local_b0 = CONCAT44(local_b0._4_4_,iVar6);
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
              iVar6 = (int)local_b0;
            }
            LOCK();
            iVar7 = *(int *)(lVar18 + 0x10);
            bVar24 = iVar7 == 0;
            if (bVar24) {
              *(int *)(lVar18 + 0x10) = iVar6;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar24) {
              iVar7 = iVar6;
            }
          }
        }
        *(int *)(pcVar3 + 0x1c) = iVar7;
        *(code **)(pcVar3 + 0x20) = FUN_141094d50;
        *(undefined4 *)(pcVar3 + 0x28) = 0;
        FUN_1448b6402(lVar4 + 0x650,local_90,&local_88);
        if (local_80 != 0) {
          lVar18 = local_a0;
          if (local_88 == (code *)0x0) goto LAB_140c64523;
          (*(code *)**(undefined8 **)local_88)();
          FUN_1446efa72(&local_88,0,0,0x10);
          local_80 = 0;
        }
        lVar18 = local_a0;
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
          lVar18 = local_a0;
        }
      }
LAB_140c64523:
      lVar20 = lVar20 + 8;
    } while (lVar8 * 8 != lVar20);
  }
  if (local_58 != (code **)0x0) {
    FUN_1400020a8();
  }
LAB_140c645b4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6474a FUN_140c6474a body=1294 status=ok
// SIG undefined FUN_140c6474a(void)

void FUN_140c6474a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 == (longlong *)0x0) {
    local_78 = (code *)0x0;
    uStack_70 = 0;
    cVar6 = FUN_14493c216(&local_78,0);
    if (cVar6 == '\0') {
      uStack_70 = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x4c) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x54) = uStack_70._4_4_;
    local_78 = (code *)0x0;
    uStack_70 = 0;
    cVar6 = FUN_14493c216(&local_78,0);
    if (cVar6 == '\0') {
      uStack_70 = 0;
    }
    *(code **)(param_1 + 0x58) = local_78;
    *(undefined8 *)(param_1 + 0x60) = uStack_70;
  }
  else {
    uVar9 = FUN_140d4a144();
    lVar10 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar9);
    if (lVar10 == 0) {
LAB_140c647d2:
      local_78 = (code *)0x0;
      uStack_70 = 0;
      cVar6 = FUN_14493c216(&local_78,0);
      if (cVar6 == '\0') {
        uStack_70 = 0;
      }
      *(code **)(param_1 + 0x48) = local_78;
      *(undefined8 *)(param_1 + 0x50) = uStack_70;
    }
    else {
      uVar9 = FUN_140d4a144();
      lVar11 = FUN_144718840(lVar10,uVar9);
      if (lVar10 == lVar11) goto LAB_140c647d2;
      FUN_140a69016(&local_78,lVar11);
      *(undefined4 *)(param_1 + 0x48) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0x4c) = local_78._4_4_;
      *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x54) = uStack_70._4_4_;
    }
    uVar9 = FUN_140437988();
    lVar10 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar9);
    if (lVar10 == 0) {
LAB_140c64855:
      local_78 = (code *)0x0;
      uStack_70 = 0;
      cVar6 = FUN_14493c216(&local_78,0);
      if (cVar6 == '\0') {
        uStack_70 = 0;
      }
      *(code **)(param_1 + 0x58) = local_78;
      *(undefined8 *)(param_1 + 0x60) = uStack_70;
    }
    else {
      uVar9 = FUN_140437988();
      lVar11 = FUN_144718840(lVar10,uVar9);
      if (lVar10 == lVar11) goto LAB_140c64855;
      FUN_14078a6f4(&local_78,lVar11);
      *(undefined4 *)(param_1 + 0x58) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0x5c) = local_78._4_4_;
      *(undefined4 *)(param_1 + 0x60) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 100) = uStack_70._4_4_;
    }
    if (DAT_14cac9ca8 == 0) {
      local_90 = &local_78;
      local_78 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1478c0a72;
      local_a0 = &LAB_1417b2375;
      local_a8 = L"Engine";
      local_b0 = 0x1000000000;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      bVar15 = (char)plVar5[0x2f] == '\x03';
      goto LAB_140c6491c;
    }
  }
  bVar15 = false;
LAB_140c6491c:
  *(bool *)(param_1 + 0x68) = bVar15;
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (lVar10 != 0) {
    lVar11 = FUN_1409220ae();
    if ((((((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
          (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) &&
         ((*(int *)(param_1 + 0x5c) != 0 && (uVar7 = *(uint *)(param_1 + 0x58), -1 < (int)uVar7))))
        && (((int)uVar7 < DAT_14c9647dc &&
            ((lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar11 != 0 &&
             (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x5c))))))) &&
       ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
      plVar12 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
      plVar5 = (longlong *)(param_1 + 0x70);
      iVar3 = *(int *)(lVar10 + 0x3c0);
      iVar4 = *(int *)(param_1 + 0x78);
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x78) = iVar3;
        if ((uint)(*(int *)(param_1 + 0x7c) - iVar4) < (uint)(iVar3 - iVar4)) {
          FUN_141865f82(plVar5,iVar4);
        }
        FUN_143c9ad52((longlong)iVar4 * 0x28 + *plVar5,iVar3 - iVar4);
      }
      else {
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar3);
        }
        if (iVar3 < iVar4) {
          FUN_1487c0378(plVar5,iVar3,iVar4 - iVar3);
          FUN_1487c03da(plVar5);
        }
      }
      if (0 < *(int *)(param_1 + 0x78)) {
        lVar11 = 0;
        do {
          lVar14 = *(longlong *)(lVar10 + 0x3b8);
          lVar13 = lVar11 * 0x30;
          plVar1 = (longlong *)(lVar14 + lVar13);
          plVar2 = (longlong *)(*plVar5 + lVar11 * 0x28);
          *plVar2 = (longlong)plVar1;
          *(undefined1 *)((longlong)plVar2 + 0x19) = *(undefined1 *)(lVar14 + 0x20 + lVar13);
          *(undefined4 *)((longlong)plVar2 + 0x1c) = 0xffffffff;
          lVar14 = *(longlong *)(lVar14 + 8 + lVar13);
          if ((lVar14 != 0) && ((longlong)(int)plVar12[1] != 0)) {
            lVar13 = 0;
            do {
              if (*(longlong *)(*plVar12 + 0x68 + lVar13) == lVar14) {
                uVar7 = (int)(lVar13 >> 3) * -0xf0f0f0f;
                *(uint *)((longlong)plVar2 + 0x1c) = uVar7;
                if (((int)uVar7 < 0) || ((int)plVar12[1] <= (int)uVar7)) break;
                lVar14 = (ulonglong)(uVar7 & 0x7fffffff) * 0x88 + *plVar12;
                if (*(longlong *)((longlong)plVar1 + 0x24) == 0) {
                  *(undefined4 *)(plVar2 + 4) = 0xffffffff;
                  bVar15 = 0 < *(int *)(lVar14 + 0x80);
                }
                else {
                  local_78 = (code *)0x0;
                  if ((code *)*plVar1 != DAT_14cb71210) {
                    local_78 = (code *)*plVar1;
                  }
                  uVar8 = FUN_140640158(lVar14,&local_78);
                  *(undefined4 *)(plVar2 + 4) = uVar8;
                  cVar6 = FUN_1408c826c(lVar14,uVar8);
                  if (cVar6 == '\0') break;
                  bVar15 = *(int *)(lVar14 + 0x80) == (int)plVar2[4];
                }
                *(bool *)((longlong)plVar2 + 0x19) = bVar15;
                break;
              }
              lVar13 = lVar13 + 0x88;
            } while ((longlong)(int)plVar12[1] * 0x88 != lVar13);
          }
          if (*plVar1 == DAT_14cb711b8) {
            *(undefined2 *)(plVar2 + 3) = 0x101;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(param_1 + 0x78));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c64c5a FUN_140c64c5a body=83 status=ok
// SIG undefined FUN_140c64c5a(void)

void FUN_140c64c5a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140c64cae(param_1 + 0x18);
  FUN_1456d172d(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c64cae FUN_140c64cae body=55 status=ok
// SIG undefined FUN_140c64cae(void)

void FUN_140c64cae(longlong *param_1)

{
  FUN_14578a71e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c64ce6 FUN_140c64ce6 body=3214 status=ok
// SIG undefined FUN_140c64ce6(void)

void FUN_140c64ce6(longlong param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  code *pcVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  wchar_t *local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  char local_151;
  code *local_150;
  longlong local_148;
  longlong *local_140;
  code *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  code *local_108;
  longlong *local_100;
  code *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (((param_3 & 1) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_140c65237;
  local_140 = (longlong *)(param_1 + 0x38);
  puVar1 = (uint *)(param_1 + 0x50);
  local_148 = param_1;
  if ((*(int *)(param_1 + 0x54) == 0) ||
     (((((uVar18 = *puVar1, (int)uVar18 < 0 || (DAT_14c9647dc <= (int)uVar18)) ||
        (puVar12 = (undefined8 *)
                   ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
        puVar12 == (undefined8 *)0x0)) ||
       ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x54) ||
        ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) ||
      (pcVar8 = (code *)*puVar12, pcVar8 == (code *)0x0)))) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      pcVar8 = (code *)FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((pcVar8 == (code *)0x0) || (cVar4 == '\0')) {
        if (pcVar8 == (code *)0x0) {
          *(undefined8 *)(param_1 + 0x50) = 0;
          goto LAB_140c653bc;
        }
        uVar18 = *(uint *)(pcVar8 + 0xc);
        *puVar1 = uVar18;
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar5 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar5 = *(int *)(lVar6 + 0x10);
          bVar19 = iVar5 == 0;
          if (bVar19) {
            *(int *)(lVar6 + 0x10) = iVar15;
            iVar5 = 0;
          }
          UNLOCK();
          param_1 = local_148;
          if (bVar19) {
            iVar5 = iVar15;
          }
        }
        *(int *)(param_1 + 0x54) = iVar5;
      }
      else {
        uVar18 = *(uint *)(pcVar8 + 0xc);
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,pcVar8);
        }
      }
      if ((*(uint *)(pcVar8 + 8) >> 0x1e & 1) == 0) goto LAB_140c64da9;
    }
LAB_140c653bc:
    local_150 = (code *)0x0;
  }
  else {
LAB_140c64da9:
    if (DAT_14c949118 == 0) {
      local_108 = FUN_140631fbe;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar6;
      FUN_1446f470e(&local_f8,L"Class",1);
      local_178 = &LAB_146891e90;
      local_180 = (code *)&LAB_146273097;
      local_190 = L"Engine";
      local_188 = (wchar_t *)CONCAT44(local_188._4_4_,199);
      local_198 = 0x20;
      local_1a0 = 0x10000000;
      local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,8);
      local_170 = &local_108;
      FUN_14574b4b2(lVar6);
      DAT_14c949118 = lVar6;
      uVar9 = FUN_144a7a812();
      lVar6 = DAT_14c949118;
      uVar10 = FUN_1449e2fb2();
      local_1a8 = L"Class";
      FUN_14574b446(uVar10,lVar6,uVar9,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(pcVar8 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_140c653bc;
    if (DAT_14cb93bd8 == 0) {
      local_170 = &local_f8;
      local_f8 = FUN_1449e2820;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_148a11b2b;
      local_180 = FUN_146573d7d;
      local_188 = L"Engine";
      local_190 = (wchar_t *)0x0;
      local_198 = CONCAT44(local_198._4_4_,0x10000001);
      local_1a0 = 8;
      local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,0x38);
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
      if (DAT_14cb93bd8 == 0) goto LAB_140c653bc;
    }
    if (*(int *)(pcVar8 + 0x38) < *(int *)(DAT_14cb93bd8 + 0x38)) goto LAB_140c653bc;
    local_150 = (code *)0x0;
    if (*(longlong *)(*(longlong *)(pcVar8 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8)
        == DAT_14cb93bd8 + 0x30) {
      local_150 = pcVar8;
    }
  }
  lVar6 = *local_140;
  if (lVar6 == 0) goto LAB_140c65237;
  puVar1 = (uint *)(lVar6 + 8);
  if ((((*(int *)(lVar6 + 0xc) == 0) || (uVar18 = *puVar1, (int)uVar18 < 0)) ||
      (DAT_14c9647dc <= (int)uVar18)) ||
     (((puVar12 = (undefined8 *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
       puVar12 == (undefined8 *)0x0 || (*(int *)(puVar12 + 2) != *(int *)(lVar6 + 0xc))) ||
      (((*(uint *)(puVar12 + 1) & 0x10200000) != 0 ||
       (pcVar8 = (code *)*puVar12, pcVar8 == (code *)0x0)))))) {
    if (*(longlong *)(lVar6 + 0x10) == 0) goto LAB_140c65237;
    pcVar8 = (code *)FUN_140007850();
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if ((pcVar8 == (code *)0x0) || (cVar4 == '\0')) {
      if (pcVar8 == (code *)0x0) {
        *(undefined8 *)(lVar6 + 8) = 0;
        goto LAB_140c65237;
      }
      uVar18 = *(uint *)(pcVar8 + 0xc);
      *puVar1 = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar19 = iVar5 == 0;
        if (bVar19) {
          *(int *)(lVar14 + 0x10) = iVar15;
          iVar5 = 0;
        }
        UNLOCK();
        param_1 = local_148;
        if (bVar19) {
          iVar5 = iVar15;
        }
      }
      *(int *)(lVar6 + 0xc) = iVar5;
    }
    else {
      uVar18 = *(uint *)(pcVar8 + 0xc);
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,pcVar8);
      }
    }
    if ((*(uint *)(pcVar8 + 8) >> 0x1e & 1) != 0) goto LAB_140c65237;
  }
  if (DAT_14c949118 == 0) {
    local_108 = FUN_140631fbe;
    lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar6;
    FUN_1446f470e(&local_f8,L"Class",1);
    local_178 = &LAB_146891e90;
    local_180 = (code *)&LAB_146273097;
    local_190 = L"Engine";
    local_188 = (wchar_t *)CONCAT44(local_188._4_4_,199);
    local_198 = 0x20;
    local_1a0 = 0x10000000;
    local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,8);
    local_170 = &local_108;
    FUN_14574b4b2(lVar6);
    DAT_14c949118 = lVar6;
    uVar9 = FUN_144a7a812();
    lVar6 = DAT_14c949118;
    uVar10 = FUN_1449e2fb2();
    param_1 = local_148;
    local_1a8 = L"Class";
    FUN_14574b446(uVar10,lVar6,uVar9,L"/Script/CoreUObject");
  }
  if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(pcVar8 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(pcVar8 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
    if (DAT_14cb93bd8 == 0) {
      local_170 = &local_f8;
      local_f8 = FUN_1449e2820;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_148a11b2b;
      local_180 = FUN_146573d7d;
      local_188 = L"Engine";
      local_190 = (wchar_t *)0x0;
      local_198 = CONCAT44(local_198._4_4_,0x10000001);
      local_1a0 = 8;
      local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,0x38);
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
      if (DAT_14cb93bd8 == 0) goto LAB_140c65237;
    }
    if (*(int *)(DAT_14cb93bd8 + 0x38) <= *(int *)(pcVar8 + 0x38)) {
      pcVar13 = (code *)0x0;
      if (*(longlong *)(*(longlong *)(pcVar8 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8)
          == DAT_14cb93bd8 + 0x30) {
        pcVar13 = pcVar8;
      }
      if (((param_2 != (longlong *)0x0) && (local_150 != (code *)0x0)) && (pcVar13 != (code *)0x0))
      {
        if (DAT_14cb939a8 == 0) {
          local_170 = &local_f8;
          local_f8 = FUN_140940982;
          local_160 = FUN_14081d0ea;
          local_168 = (code *)&LAB_146522c26;
          local_178 = &LAB_148a0db91;
          local_180 = (code *)&LAB_146572ba7;
          local_188 = L"Engine";
          local_190 = (wchar_t *)0x0;
          local_198 = CONCAT44(local_198._4_4_,0x10000004);
          local_1a0 = 8;
          local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,0xdd8);
          FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
        }
        if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) ==
            DAT_14cb939a8 + 0x30)) {
          FUN_140c65a04(param_2 + 0x7e,&local_108);
          if (*(uint *)(param_1 + 0x30) != 0) {
            local_151 = *(char *)(param_1 + 0x35);
            pcVar8 = local_150 + 0x30;
            uVar16 = 0;
            plVar17 = (longlong *)0x0;
            uVar18 = *(uint *)(param_1 + 0x30);
            local_138 = pcVar8;
            do {
              if ((((uVar18 & 1) != 0) && ((int)((uint)uVar16 & 0xff) < (int)param_2[0x17e])) &&
                 (lVar6 = param_2[0x17d],
                 *(longlong *)
                  (lVar6 + 8 + (ulonglong)(uint)((int)(uVar16 & 0xff) << 7) + (uVar16 & 0xff) * 8)
                 != 0)) {
                if (*(char *)(param_1 + 0x36) == '\x01') {
                  local_f8 = local_150;
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(local_150);
                  }
                  FUN_140c66a60(lVar6 + uVar16 * 0x88 + 0x58,&local_f8);
                }
                else {
                  cVar4 = FUN_140c65ab2(param_2,uVar16 & 0xffffffff,local_150);
                  if (cVar4 != '\0') {
                    if (*(char *)(param_1 + 0x34) == '\0') {
                      lVar6 = (longlong)*(int *)(param_2[0x17d] + 0x50 + uVar16 * 0x88);
                      if (lVar6 != 0) {
                        plVar7 = *(longlong **)(param_2[0x17d] + 0x48 + uVar16 * 0x88);
                        lVar6 = lVar6 << 3;
                        do {
                          if ((*(int *)(local_150 + 0x38) <=
                               *(int *)(*(longlong *)(*plVar7 + 0x10) + 0x38)) &&
                             (*(code **)(*(longlong *)(*(longlong *)(*plVar7 + 0x10) + 0x30) +
                                        (longlong)*(int *)(local_150 + 0x38) * 8) == pcVar8)) {
                            if (plVar7 != (longlong *)0x0) goto LAB_140c6520b;
                            break;
                          }
                          plVar7 = plVar7 + 1;
                          lVar6 = lVar6 + -8;
                        } while (lVar6 != 0);
                      }
                    }
                    plVar7 = plVar17;
                    if (plVar17 == (longlong *)0x0) {
                      FUN_140002266(&local_f8,L"UM%d_%dB",uVar16 & 0xffffffff,
                                    *(undefined4 *)(param_2[0x17d] + 0x50 + uVar16 * 0x88));
                      pcVar8 = (code *)&DAT_149dfb77a;
                      if ((int)local_f0 != 0) {
                        pcVar8 = local_f8;
                      }
                      FUN_1446f470e(&local_110,pcVar8,1);
                      if (local_f8 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                      lVar6 = local_110;
                      if (local_110 == 0) {
                        FUN_14058b40c(param_2,
                                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                     );
                      }
                      local_a8 = (longlong *)0x0;
                      local_78 = 0;
                      local_d8 = 0;
                      local_b8 = 0;
                      local_e8 = lVar6;
                      uStack_e0 = 0x41;
                      local_c0 = 0;
                      local_d0 = 0;
                      uStack_c8 = 0;
                      local_f8 = pcVar13;
                      local_f0 = param_2;
                      plVar7 = (longlong *)FUN_1402710dd(&local_f8);
                      if (local_b8 != 0) {
                        plVar11 = local_a8;
                        if (local_a8 == (longlong *)0x0) {
                          plVar11 = local_98;
                        }
                        (**(code **)(*plVar11 + 0x10))();
                      }
                      pcVar8 = local_138;
                      if (*local_140 != 0) {
                        local_f8 = local_108;
                        local_f0 = local_100;
                        if (local_100 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                          UNLOCK();
                        }
                        FUN_140c65976(local_140,&local_130);
                        local_120 = local_130;
                        uStack_11c = uStack_12c;
                        uStack_118 = uStack_128;
                        uStack_114 = uStack_124;
                        (**(code **)(*plVar7 + 0x2a0))
                                  (plVar7,&local_120,&local_f8,uVar16 & 0xffffffff);
                        plVar11 = local_f0;
                        if (local_f0 != (longlong *)0x0) {
                          LOCK();
                          plVar3 = local_f0 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 == 0) {
                            (**(code **)*local_f0)(local_f0);
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
                      if (plVar7 == (longlong *)0x0) {
                        plVar17 = (longlong *)0x0;
                        param_1 = local_148;
                        goto LAB_140c6520b;
                      }
                    }
                    FUN_140c660e6(param_2,uVar16 & 0xffffffff,plVar7);
                    param_1 = local_148;
                    if (local_151 != '\0') {
                      plVar17 = plVar7;
                    }
                  }
                }
              }
LAB_140c6520b:
              uVar16 = uVar16 + 1;
              bVar19 = 1 < uVar18;
              uVar18 = (int)uVar18 >> 1;
            } while (bVar19);
          }
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_100 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar2 = (int *)((longlong)local_100 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_100 + 0x10))(local_100);
              }
            }
          }
        }
      }
    }
  }
LAB_140c65237:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c65976 FUN_140c65976 body=83 status=ok
// SIG undefined FUN_140c65976(void)

longlong * FUN_140c65976(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140c659ca();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140c659ca FUN_140c659ca body=57 status=ok
// SIG undefined FUN_140c659ca(void)

void FUN_140c659ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93bf8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93bf8 = FUN_140002ddd(FUN_146573dd6,uVar1,L"WeaponBehaviorDef");
  }
  return;
}



// FUNCTION 140c65a04 FUN_140c65a04 body=172 status=ok
// SIG undefined FUN_140c65a04(void)

longlong * FUN_140c65a04(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c65c56(param_1,&local_28);
  lVar3 = local_28;
  if (local_28 != 0) {
    uVar5 = FUN_140082ff6();
    cVar4 = FUN_1448093f4(lVar3,uVar5);
    if (cVar4 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_140c65a5f;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140c65a5f:
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c65ab2 FUN_140c65ab2 body=418 status=ok
// SIG undefined FUN_140c65ab2(void)

bool FUN_140c65ab2(longlong param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_3 == 0) || (*(int *)(param_1 + 0xbf0) <= (int)(uint)param_2)) ||
     (lVar2 = *(longlong *)(param_1 + 0xbe8),
     *(longlong *)(lVar2 + 8 + (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8) == 0)) {
    bVar5 = false;
  }
  else {
    lVar1 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8;
    lVar4 = (longlong)*(int *)(lVar2 + 0x60 + lVar1);
    bVar5 = true;
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x58 + lVar1);
      lVar4 = lVar4 << 3;
      do {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          if (DAT_14cb93bd8 == 0) {
            local_50 = &local_30;
            local_30 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_148a11b2b;
            local_60 = FUN_146573d7d;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000001;
            local_80 = 8;
            local_88 = 0x38;
            FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
            if (DAT_14cb93bd8 == 0) goto LAB_140c65b97;
          }
          if (((*(int *)(DAT_14cb93bd8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8) ==
               DAT_14cb93bd8 + 0x30)) &&
             ((lVar2 = *plVar3, lVar2 != 0 &&
              ((*(int *)(lVar2 + 0x38) <= *(int *)(param_3 + 0x38) &&
               (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                == lVar2 + 0x30)))))) goto LAB_140c65ba3;
        }
LAB_140c65b97:
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
      plVar3 = (longlong *)0x0;
LAB_140c65ba3:
      bVar5 = plVar3 == (longlong *)0x0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 140c65c56 FUN_140c65c56 body=1167 status=ok
// SIG undefined FUN_140c65c56(void)

longlong * FUN_140c65c56(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_a8 [48];
  ulonglong local_78;
  longlong *local_70;
  longlong *plStack_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (ulonglong *)(param_1 + 0x12);
  plVar6 = (longlong *)param_1[0x12];
  if (plVar6 == (longlong *)0x0) {
    if (*param_1 != 0) {
      plVar6 = (longlong *)FUN_140c6653e();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_78);
        plVar6 = local_70;
        if (puVar2 != &local_78) {
          param_1[0x12] = local_78;
          local_78 = 0;
          plVar3 = (longlong *)param_1[0x13];
          if (local_70 != plVar3) {
            local_70 = (longlong *)0x0;
            param_1[0x13] = (longlong)plVar6;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar3 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
        plVar6 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_70)(local_70);
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
      plVar6 = (longlong *)*puVar2;
      if (plVar6 != (longlong *)0x0) goto LAB_140c65c8e;
    }
    plVar6 = (longlong *)0x0;
  }
  else {
LAB_140c65c8e:
    if ((char)plVar6[0x3f] == '\0') {
      plVar3 = (longlong *)param_1[0x13];
      bVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar4 = *(byte *)(plVar6 + 0x3f);
      }
      if ((bVar4 & 1) != 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if ((*param_1 != 0) && (plVar6[0x40] != 0)) {
        lVar7 = FUN_140c6653e();
        if (lVar7 == plVar6[0x40]) {
          plVar6[0x3d] = (longlong)plVar6;
          plVar9 = (longlong *)plVar6[0x3e];
          if (plVar9 != plVar3) {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
              UNLOCK();
              plVar9 = (longlong *)plVar6[0x3e];
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
            plVar6[0x3e] = (longlong)plVar3;
          }
          (**(code **)(*plVar6 + 0x80))(plVar6,param_1);
          (**(code **)(*plVar6 + 0x88))(plVar6,*param_1);
          lVar7 = param_1[3];
          if ((longlong)(int)lVar7 != 0) {
            lVar11 = param_1[2];
            lVar12 = 0;
            do {
              if (*(longlong *)(lVar11 + lVar12) != 0) {
                (**(code **)(*plVar6 + 0x90))(plVar6);
              }
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)lVar7 * 8 != lVar12);
          }
          if (param_1[1] != 0) {
            (**(code **)(*plVar6 + 0x98))(plVar6);
          }
          lVar7 = param_1[5];
          if ((longlong)(int)lVar7 != 0) {
            lVar11 = param_1[4];
            lVar12 = 0;
            do {
              if (*(longlong *)(lVar11 + lVar12) != 0) {
                (**(code **)(*plVar6 + 0xa0))(plVar6);
              }
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)lVar7 * 8 != lVar12);
          }
          local_78 = CONCAT44(local_78._4_4_,1);
          plVar9 = plVar6 + 3;
          local_70 = (longlong *)0x0;
          plStack_68 = (longlong *)0x0;
          FUN_144911a4e(&local_78,plVar9);
          FUN_1402562f1(local_70,(ulonglong)plStack_68 & 0xffffffff);
          iVar13 = *(int *)((longlong)plVar6 + 0x24);
          FUN_140255aed(plVar6[3],(int)plVar6[4]);
          *(undefined4 *)(plVar6 + 4) = 0;
          if ((iVar13 < 0) && (*(int *)((longlong)plVar6 + 0x24) != 0)) {
            FUN_1488ca408(plVar9,0);
          }
          FUN_140255d84(plVar9,&local_70);
          FUN_140255aed(local_70,(ulonglong)plStack_68 & 0xffffffff);
          if (local_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          (**(code **)(*plVar6 + 0xa8))(plVar6,param_1);
          local_78 = local_78 & 0xffffffffffffff00;
          local_50 = 0;
          FUN_140217b36(&local_78,plVar6 + 0x3d);
          uVar5 = (**(code **)(*plVar6 + 0x60))(plVar6,param_1,&local_78);
          *(undefined4 *)(plVar6 + 8) = uVar5;
          lVar7 = DAT_14c9a3da0;
          if ((longlong)local_50 != 0) {
            lVar12 = (longlong)local_50 + -1;
            lVar11 = lVar12 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
            if (*(longlong *)(lVar7 + lVar11) != 0) {
              FUN_1400020a8();
            }
            lVar7 = DAT_14c9a3da0;
            iVar13 = (int)lVar12;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
            }
            *(undefined4 *)(lVar7 + lVar11) = 0xffffffff;
            iVar8 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar8 = DAT_14c9a3dd0;
            }
            *(int *)(lVar7 + 4 + lVar11) = iVar8;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar10 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar10 = DAT_14c9a3dc0;
            }
            iVar8 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar8 = iVar13;
            }
            bVar4 = (byte)lVar12 & 0x1f;
            DAT_14c9a3dd0 = iVar13;
            *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
                 *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
                 (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            local_50 = 0;
          }
          if (((char)local_78 == '\x03') && (plStack_68 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_68 + 0x10))();
            }
          }
          (**(code **)(*plVar6 + 0xb0))(plVar6);
          *(undefined1 *)(plVar6 + 0x3f) = 1;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      plVar6 = (longlong *)*puVar2;
    }
  }
  *param_2 = (longlong)plVar6;
  lVar7 = param_1[0x13];
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c660e6 FUN_140c660e6 body=1066 status=ok
// SIG undefined FUN_140c660e6(void)

void FUN_140c660e6(longlong param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_3 != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0))) &&
     (lVar4 = *(longlong *)(param_1 + 0xbe8),
     *(longlong *)(lVar4 + 8 + (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8) != 0)) {
    lVar1 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8;
    lVar2 = lVar4 + lVar1;
    lVar5 = *(longlong *)(lVar4 + 0x48 + lVar1);
    iVar3 = *(int *)(lVar4 + 0x50 + lVar1);
    lVar7 = (longlong)iVar3;
    if (lVar7 != 0) {
      uVar6 = 0;
      do {
        if (*(longlong *)(lVar5 + uVar6) == param_3) {
          if ((int)(~uVar6 >> 3) != 0) goto LAB_140c6618a;
          break;
        }
        uVar6 = uVar6 + 8;
      } while (lVar7 * 8 - uVar6 != 0);
    }
    *(uint *)(lVar2 + 0x50) = iVar3 + 1U;
    if (*(uint *)(lVar2 + 0x54) < iVar3 + 1U) {
      plVar8 = (longlong *)(lVar4 + lVar1 + 0x48);
      FUN_140a4b488(plVar8,iVar3);
      lVar5 = *plVar8;
    }
    *(longlong *)(lVar5 + lVar7 * 8) = param_3;
LAB_140c6618a:
    lVar4 = FUN_14143f458();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30)) {
      lVar4 = FUN_1403e5dae();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
        lVar4 = FUN_141402fec();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          lVar4 = FUN_14143f372();
          if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
            lVar4 = FUN_141419f28();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
              FUN_141419f28();
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
            }
            lVar4 = FUN_1414cc84a();
            if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
              lVar4 = FUN_1414838dc();
              if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
                lVar4 = FUN_1414cc930();
                if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                  lVar4 = FUN_1414cc930();
                  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
                    param_3 = 0;
                  }
                  *(longlong *)(lVar2 + 0x40) = param_3;
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
                }
              }
              else {
                lVar4 = FUN_1414838dc();
                if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
                  param_3 = 0;
                }
                *(longlong *)(lVar2 + 0x38) = param_3;
              }
            }
            else {
              lVar4 = FUN_1414cc84a();
              if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
                param_3 = 0;
              }
              *(longlong *)(lVar2 + 0x30) = param_3;
            }
          }
          else {
            lVar4 = FUN_14143f372();
            if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
              param_3 = 0;
            }
            *(longlong *)(lVar2 + 0x20) = param_3;
            FUN_140457ffc(param_3 + 0x58,param_1);
            local_48 = &LAB_140e36120;
            local_40 = 0;
            FUN_14127566c(*(longlong *)(lVar2 + 0x20) + 0x58,local_38,param_1);
          }
        }
        else {
          lVar4 = FUN_141402fec();
          if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
            param_3 = 0;
          }
          *(longlong *)(lVar2 + 0x18) = param_3;
        }
      }
      else {
        lVar4 = FUN_1403e5dae();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          param_3 = 0;
        }
        *(longlong *)(lVar2 + 0x10) = param_3;
        *(byte *)(param_1 + 0xd50) =
             *(byte *)(param_1 + 0xd50) & 0xbf |
             ((*(byte *)(param_1 + 0xd50) & 0x40) != 0 || (*(byte *)(param_3 + 0x91) & 8) != 0) << 6
        ;
        if ((*(byte *)(*(longlong *)(lVar2 + 0x10) + 0x91) & 4) != 0) {
          local_48 = (undefined1 *)FUN_14143f372();
          if ((local_48 != (undefined1 *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_48);
          }
          FUN_140c66a60(lVar2 + 0x58,&local_48);
        }
      }
    }
    else {
      lVar4 = FUN_14143f458();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
        param_3 = 0;
      }
      *(longlong *)(lVar2 + 0x28) = param_3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6653e FUN_140c6653e body=1181 status=ok
// SIG undefined FUN_140c6653e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140c6653e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  undefined1 local_50 [8];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *(longlong *)(param_1 + 0x108);
  if (lVar6 == 0) {
    uVar5 = FUN_140ae74fa();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x108) = lVar6;
  }
  plVar7 = *(longlong **)(param_1 + 0x110);
  if (((plVar7 == (longlong *)0x0) && (plVar7 = (longlong *)0x0, lVar6 != 0)) &&
     (*(longlong *)(param_1 + 0x100) != 0)) {
    plVar7 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
      plVar7 = (longlong *)0x0;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
      plVar7 = (longlong *)FUN_144aff482(uVar5,(longlong *)(param_1 + 0x100));
    }
    *(longlong **)(param_1 + 0x110) = plVar7;
  }
  if (((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      ((((plVar9 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x74))) ||
        ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
       (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)))))) {
    if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_140c667c6;
    plVar9 = (longlong *)FUN_140007850(param_1 + 0x78);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    lVar6 = DAT_14c9647c8;
    if ((plVar9 == (longlong *)0x0) || (cVar3 == '\0')) {
      if (plVar9 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x70) = 0;
        goto LAB_140c667c6;
      }
      uVar1 = *(uint *)((longlong)plVar9 + 0xc);
      *(uint *)(param_1 + 0x70) = uVar1;
      if (DAT_14c9647dc <= (int)uVar1) goto LAB_140c667f8;
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_140c6679d:
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar6 + 0x10) = iVar10;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar10;
        }
      }
      *(int *)(param_1 + 0x74) = iVar4;
    }
    else {
      uVar1 = *(uint *)((longlong)plVar9 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(param_1 + 0x70) = uVar1;
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar6 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_140c6679d;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(param_1 + 0x70) = uVar1;
LAB_140c667f8:
        lVar6 = 0;
        goto LAB_140c6679d;
      }
    }
    if ((*(uint *)(plVar9 + 1) >> 0x1e & 1) != 0) goto LAB_140c667c6;
  }
  if (DAT_14c949118 == 0) {
    local_58 = FUN_140631fbe;
    lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar6;
    FUN_1446f470e(local_50,L"Class",1);
    local_78 = &LAB_146891e90;
    local_80 = (code *)&LAB_146273097;
    local_90 = L"Engine";
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,199);
    local_98 = 0x20;
    local_a0 = 0x10000000;
    local_a8._0_4_ = 8;
    local_70 = &local_58;
    FUN_14574b4b2(lVar6);
    DAT_14c949118 = lVar6;
    if (DAT_14c951858 == 0) {
      local_70 = &local_48;
      local_48 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1468c5283;
      local_80 = FUN_142809da0;
      local_88 = L"Engine";
      local_90 = (wchar_t *)0x400000000;
      local_98 = CONCAT44(local_98._4_4_,0x10000000);
      local_a0 = 8;
      local_a8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar2 = DAT_14c951858;
    lVar6 = DAT_14c949118;
    uVar5 = FUN_1449e2fb2();
    local_a8 = L"Class";
    FUN_14574b446(uVar5,lVar6,lVar2,L"/Script/CoreUObject");
  }
  if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
      (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
       == DAT_14c949118 + 0x30)) &&
     ((lVar6 = FUN_140126fc0(), lVar6 != 0 &&
      ((*(int *)(lVar6 + 0x38) <= (int)plVar9[7] &&
       (*(longlong *)(plVar9[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)))))) {
    plVar8 = (longlong *)plVar9[0x22];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar9 + 1000))(plVar9);
      plVar8 = (longlong *)plVar9[0x22];
    }
    plVar9 = (longlong *)(**(code **)(*plVar8 + 0x680))();
    if (plVar9 != (longlong *)0x0) {
      if (plVar7 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        cVar3 = FUN_1448093f4(plVar7,uVar5);
        if (cVar3 != '\0') goto LAB_140c667c6;
      }
      plVar7 = plVar9;
    }
  }
LAB_140c667c6:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 140c669dc FUN_140c669dc body=132 status=ok
// SIG undefined FUN_140c669dc(void)

longlong * FUN_140c669dc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x218,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b412ab0;
  FUN_140ae760a(plVar3 + 2,param_1);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 140c66a60 FUN_140c66a60 body=102 status=ok
// SIG undefined FUN_140c66a60(void)

int FUN_140c66a60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_140c677aa();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_140c6822e(param_1,iVar2);
    }
    lVar1 = *param_2;
    *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  return iVar2;
}



// FUNCTION 140c66ac6 FUN_140c66ac6 body=1062 status=ok
// SIG undefined FUN_140c66ac6(void)

void FUN_140c66ac6(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  undefined8 ***local_b0;
  longlong *local_a8;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88;
  longlong *local_80;
  ushort local_70;
  undefined6 uStack_6e;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = uVar8;
    plVar11 = *(longlong **)(param_1 + 0xb8);
    if (plVar11 == (longlong *)0x0) goto LAB_140c66b4f;
    *(undefined8 *)(param_1 + 0xb8) = 0;
LAB_140c66cfd:
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_140c66b4f;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xb0) = uVar8;
    plVar11 = *(longlong **)(param_1 + 0xb8);
    if (plVar3 == plVar11) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xb8) = plVar3;
      if (plVar11 != (longlong *)0x0) goto LAB_140c66cfd;
    }
  }
  LOCK();
  plVar11 = plVar3 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140c66b4f:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  lVar4 = *param_3;
  uVar8 = FUN_1408c0af2();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar5,uVar8,0);
  }
  lVar5 = param_1 + 0x38;
  FUN_140ccc900(lVar4,&local_b0,uVar8,param_4);
  if (local_90 == 3) {
    uVar13 = local_b0._0_4_;
  }
  else {
    FUN_1400b56fe(&local_88,&local_b0,3);
    uVar13 = 0;
    if (local_68 != 0) {
      uVar13 = local_88._0_4_;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar10 = &local_88;
      if (0x18 < local_70) {
        ppppuVar10 = (undefined8 ****)local_88;
      }
      (*pcVar6)(ppppuVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uVar13;
  FUN_14020a6cc(param_1 + 0x40,1);
  FUN_140c67048(lVar5);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar10 = &local_b0;
    if (0x18 < local_98) {
      ppppuVar10 = (undefined8 ****)local_b0;
    }
    (*pcVar6)(ppppuVar10);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  FUN_140c66eee(lVar5,lVar4);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0xb0) + 0x40);
    if (lVar9 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38);
      lVar12 = 0;
      do {
        local_b0 = *(undefined8 ****)(lVar7 + lVar12);
        FUN_1446dcdd4(&local_88,&local_b0);
        FUN_140f600ec(&local_b0,&local_88);
        if (CONCAT62(uStack_6e,local_70) != 0) {
          FUN_1400020a8();
        }
        if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
          local_88 = local_b0;
          local_80 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
          }
          FUN_140c67300(lVar5,&local_88,lVar4);
          plVar3 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_80 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_80)(local_80);
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
        plVar3 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_a8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar12 = lVar12 + 0x18;
      } while (lVar9 * 0x18 != lVar12);
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c66eee FUN_140c66eee body=344 status=ok
// SIG undefined FUN_140c66eee(void)

void FUN_140c66eee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    FUN_1402a453c((int *)(param_1 + 8));
    iVar3 = *(int *)(param_1 + 8);
  }
  lVar1 = DAT_14c9a3d60 + (longlong)iVar3 * 0x88;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1c8700;
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
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14b3f6fb0;
  local_30[3] = param_1;
  local_30[4] = &LAB_14881cf9e;
  FUN_140c67310(lVar1 + -0x18,local_38,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140c66fd3;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140c66fd3:
  FUN_140c67048(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c67048 FUN_140c67048 body=694 status=ok
// SIG undefined FUN_140c67048(void)

void FUN_140c67048(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar6 = *(float *)((longlong)param_1 + 0xc);
  lVar5 = param_1[3];
  if (1e-08 < ABS(fVar6)) {
    if (lVar5 == 0) {
      FUN_140c67490(&local_30);
      plVar4 = local_28;
      if (param_1 + 3 != &local_30) {
        param_1[3] = local_30;
        local_30 = 0;
        plVar3 = (longlong *)param_1[4];
        if (local_28 != plVar3) {
          local_28 = (longlong *)0x0;
          param_1[4] = (longlong)plVar4;
          if (plVar3 != (longlong *)0x0) {
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
          }
        }
      }
      plVar4 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      *(undefined1 *)(param_1[3] + 0x1c0) = 3;
      local_30 = param_1[3];
      plVar4 = (longlong *)param_1[4];
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
      (**(code **)(*param_1 + 0x18))(param_1,&local_30,0);
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
      if (plVar4 != (longlong *)0x0) {
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
      lVar5 = param_1[3];
      fVar6 = *(float *)((longlong)param_1 + 0xc);
    }
    *(float *)(lVar5 + 0x230) = fVar6;
  }
  else if (lVar5 != 0) {
    plVar4 = (longlong *)param_1[4];
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
    local_30 = lVar5;
    (**(code **)(*param_1 + 0x20))(param_1,&local_30);
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
    if (plVar4 != (longlong *)0x0) {
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
    param_1[3] = 0;
    plVar4 = (longlong *)param_1[4];
    if (plVar4 != (longlong *)0x0) {
      param_1[4] = 0;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c67300 FUN_140c67300 body=15 status=ok
// SIG undefined FUN_140c67300(void)

void FUN_140c67300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c679ea(param_1 + 0x28,param_2,0,param_3);
  return;
}



// FUNCTION 140c67310 FUN_140c67310 body=370 status=ok
// SIG undefined FUN_140c67310(void)

undefined8 * FUN_140c67310(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c67490 FUN_140c67490 body=152 status=ok
// SIG undefined FUN_140c67490(void)

undefined8 * FUN_140c67490(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_14049c336();
  FUN_140c6752c(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6752c FUN_140c6752c body=183 status=ok
// SIG undefined FUN_140c6752c(void)

undefined8 * FUN_140c6752c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c675e6(&local_30);
  uVar3 = FUN_14012ad82(local_30);
  *param_1 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_14b3f8850;
  puVar4[2] = uVar3;
  param_1[1] = puVar4;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c675e6 FUN_140c675e6 body=378 status=ok
// SIG undefined FUN_140c675e6(void)

longlong * FUN_140c675e6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)(int)DAT_14cb77d60 != 0) {
    lVar6 = (longlong)(int)DAT_14cb77d60 << 4;
    plVar5 = DAT_14cb77d58;
    do {
      lVar4 = FUN_140c67760(*plVar5);
      if (lVar4 == param_2) {
        if (plVar5 != (longlong *)0x0) {
          lVar6 = *plVar5;
          *param_1 = lVar6;
          lVar4 = plVar5[1];
          param_1[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
            lVar6 = *param_1;
          }
          if (lVar6 != 0) {
            return param_1;
          }
          goto LAB_140c6765a;
        }
        break;
      }
      plVar5 = plVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_140c6765a:
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a1ca340;
  FUN_14012c1dc(plVar5 + 2,param_2);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = DAT_14cb77d60;
  lVar6 = (longlong)(int)DAT_14cb77d60;
  DAT_14cb77d60 = DAT_14cb77d60 + 1;
  if (DAT_14cb77d64 < DAT_14cb77d60) {
    FUN_14012c348(&DAT_14cb77d58,iVar3);
  }
  plVar1 = DAT_14cb77d58;
  DAT_14cb77d58[lVar6 * 2] = (longlong)(plVar5 + 2);
  plVar1[lVar6 * 2 + 1] = (longlong)plVar5;
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
  lVar6 = DAT_14cb77d58[(longlong)(int)(DAT_14cb77d60 - 1) * 2];
  lVar4 = DAT_14cb77d58[(longlong)(int)(DAT_14cb77d60 - 1) * 2 + 1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = lVar4;
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
  return param_1;
}



// FUNCTION 140c67760 FUN_140c67760 body=73 status=ok
// SIG undefined FUN_140c67760(void)

undefined8 FUN_140c67760(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x3c)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140c677aa FUN_140c677aa body=575 status=ok
// SIG undefined FUN_140c677aa(void)

ulonglong FUN_140c677aa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
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
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = 0xffffffff;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar3 = (longlong)(int)param_1[1] << 3;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      if (lVar5 == 0) {
LAB_140c67942:
        lVar5 = 0;
      }
      else {
        if (DAT_14cb93bd8 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_148a11b2b;
          local_70 = FUN_146573d7d;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10000001;
          local_90 = 8;
          local_98 = 0x38;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
          if (DAT_14cb93bd8 == 0) goto LAB_140c67942;
        }
        if ((*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cb93bd8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8) !=
            DAT_14cb93bd8 + 0x30)) goto LAB_140c67942;
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      }
      lVar2 = *param_2;
      if (lVar2 == 0) {
LAB_140c67862:
        lVar2 = 0;
      }
      else {
        if (DAT_14cb93bd8 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_148a11b2b;
          local_70 = FUN_146573d7d;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10000001;
          local_90 = 8;
          local_98 = 0x38;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
          if (DAT_14cb93bd8 == 0) goto LAB_140c67862;
        }
        if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cb93bd8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8) !=
            DAT_14cb93bd8 + 0x30)) goto LAB_140c67862;
        lVar2 = *param_2;
      }
      if (lVar5 == lVar2) {
        uVar4 = uVar6 & 0xffffffff;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140c679ea FUN_140c679ea body=2089 status=ok
// SIG undefined FUN_140c679ea(void)

void FUN_140c679ea(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar8 = FUN_141845ccc();
  if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) {
    lVar7 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar8 = FUN_141845d40();
    if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) {
      lVar7 = (**(code **)(*(longlong *)*param_2 + 8))();
      lVar8 = FUN_14049c336();
      if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) {
        lVar7 = (**(code **)(*(longlong *)*param_2 + 8))();
        lVar8 = FUN_141845d06();
        if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) {
          plVar13 = param_1 + 6;
          cVar5 = FUN_1488242ab(plVar13,param_2,param_3);
          if (cVar5 != '\0') goto LAB_140c67f5e;
          local_58 = *param_2;
          local_50 = (longlong *)param_2[1];
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          iVar6 = (int)param_1[7];
          *(uint *)(param_1 + 7) = iVar6 + 1U;
          if (*(uint *)((longlong)param_1 + 0x3c) < iVar6 + 1U) {
            FUN_148829efe(plVar13,iVar6);
          }
          FUN_148829eac((longlong)iVar6 * 0x20 + *plVar13,&local_58,param_3,param_4);
          goto LAB_140c67fd7;
        }
        lVar7 = (**(code **)(*(longlong *)*param_2 + 8))();
        lVar8 = FUN_143c38d58();
        if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)) goto LAB_140c67f5e;
        plVar13 = param_1 + 8;
        local_58 = *param_2;
        plVar4 = (longlong *)param_2[1];
        if (plVar4 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          local_48 = param_3;
          lVar7 = FUN_143d174c0(plVar13);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_50 = plVar4;
          local_48 = param_3;
          lVar7 = FUN_143d174c0(plVar13);
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
        if (lVar7 != 0) goto LAB_140c67f5e;
        uVar10 = *param_2;
        puVar11 = (undefined8 *)param_2[1];
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
        }
        iVar6 = (int)param_1[9];
        lVar7 = (longlong)iVar6;
        *(uint *)(param_1 + 9) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0x4c) < iVar6 + 1U) {
          FUN_143d17530(plVar13,iVar6);
        }
      }
      else {
        plVar13 = param_1 + 2;
        local_58 = *param_2;
        plVar4 = (longlong *)param_2[1];
        if (plVar4 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          local_48 = param_3;
          lVar7 = FUN_143d17440(plVar13);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_50 = plVar4;
          local_48 = param_3;
          lVar7 = FUN_143d17440(plVar13);
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
        if (lVar7 != 0) goto LAB_140c67f5e;
        uVar10 = *param_2;
        puVar11 = (undefined8 *)param_2[1];
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
        }
        iVar6 = (int)param_1[3];
        lVar7 = (longlong)iVar6;
        *(uint *)(param_1 + 3) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar6 + 1U) {
          FUN_14187efb4(plVar13,iVar6);
        }
      }
      lVar12 = *plVar13;
      lVar7 = lVar7 * 0x20;
      lVar8 = lVar12 + lVar7;
      *(undefined8 *)(lVar12 + lVar7) = uVar10;
      *(undefined8 **)(lVar12 + 8 + lVar7) = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
      }
      *(undefined8 *)(lVar8 + 0x10) = 0;
      iVar6 = 0;
      if (param_3 != 0) {
        uVar3 = *(uint *)(param_3 + 0xc);
        *(uint *)(lVar8 + 0x10) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar7 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)(lVar8 + 0x14) = iVar6;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      iVar6 = 0;
      if (param_4 != 0) {
        uVar3 = *(uint *)(param_4 + 0xc);
        *(uint *)(lVar8 + 0x18) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar7 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)(lVar8 + 0x1c) = iVar6;
    }
    else {
      local_58 = *param_2;
      plVar13 = (longlong *)param_2[1];
      if (plVar13 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        local_48 = param_3;
        lVar7 = FUN_14187ee34(param_1);
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        local_50 = plVar13;
        local_48 = param_3;
        lVar7 = FUN_14187ee34(param_1);
        LOCK();
        plVar4 = plVar13 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        LOCK();
        plVar4 = plVar13 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (lVar7 != 0) goto LAB_140c67f5e;
      uVar10 = *param_2;
      puVar11 = (undefined8 *)param_2[1];
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
      }
      iVar6 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_14187eeb4(param_1,iVar6);
      }
      lVar8 = *param_1;
      lVar12 = (longlong)iVar6 * 0x20;
      lVar7 = lVar8 + lVar12;
      *(undefined8 *)(lVar8 + lVar12) = uVar10;
      *(undefined8 **)(lVar8 + 8 + lVar12) = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
      }
      *(undefined8 *)(lVar7 + 0x10) = 0;
      iVar6 = 0;
      if (param_3 != 0) {
        uVar3 = *(uint *)(param_3 + 0xc);
        *(uint *)(lVar7 + 0x10) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)(lVar7 + 0x14) = iVar6;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      iVar6 = 0;
      if (param_4 != 0) {
        uVar3 = *(uint *)(param_4 + 0xc);
        *(uint *)(lVar7 + 0x18) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)(lVar7 + 0x1c) = iVar6;
    }
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar11 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar11)(puVar11);
        LOCK();
        piVar2 = (int *)((longlong)puVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  else {
    plVar13 = param_1 + 4;
    cVar5 = FUN_145934c31(plVar13,param_2,param_3);
    if (cVar5 != '\0') goto LAB_140c67f5e;
    local_58 = *param_2;
    local_50 = (longlong *)param_2[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    iVar6 = (int)param_1[5];
    *(uint *)(param_1 + 5) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2c) < iVar6 + 1U) {
      FUN_14654b342(plVar13,iVar6);
    }
    FUN_14654b2f0((longlong)iVar6 * 0x20 + *plVar13,&local_58,param_3,param_4);
LAB_140c67fd7:
    plVar13 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_50)(local_50);
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
LAB_140c67f5e:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6822e FUN_140c6822e body=353 status=ok
// SIG undefined FUN_140c6822e(void)

void FUN_140c6822e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c682b3;
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
LAB_140c682b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c68390 FUN_140c68390 body=1794 status=ok
// SIG undefined FUN_140c68390(void)

void FUN_140c68390(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  byte bVar14;
  int iVar15;
  undefined2 uVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  short local_8a;
  undefined1 local_88;
  byte local_87;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  undefined1 local_80;
  undefined1 uStack_7f;
  uint uStack_7e;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  longlong lStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined2 local_54;
  short local_52;
  undefined1 local_50;
  byte local_4f;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_2 + 0x10) == 0) {
    iVar12 = 0;
    iVar15 = 0;
  }
  else {
    lVar6 = (longlong)*(int *)(param_2 + 0x10) * 8;
    lVar11 = 0;
    iVar12 = 0;
    do {
      iVar12 = iVar12 + (uint)*(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + lVar11) + 0x36ce)
      ;
      lVar11 = lVar11 + 8;
    } while (lVar6 != lVar11);
    lVar11 = 0;
    iVar15 = 0;
    do {
      iVar15 = iVar15 + (uint)*(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + lVar11) + 0x36cf)
      ;
      lVar11 = lVar11 + 8;
    } while (lVar6 != lVar11);
  }
  lVar6 = *(longlong *)(param_2 + 0x348);
  cVar4 = FUN_140105312();
  if (cVar4 == '\0') {
    bVar14 = 0;
  }
  else {
    bVar14 = *(byte *)(DAT_14ca431e8 + 1);
  }
  cVar4 = FUN_1400b7021();
  if (cVar4 == '\0') {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(DAT_14ca43200 + 1);
  }
  if ((byte)(iVar12 != 0 & bVar14 | iVar15 != 0 & bVar5) != 1) {
    uVar7 = FUN_14476842e(param_1,&DAT_14ca63ba8,L"DepthDummy",2);
    *(undefined8 *)(lVar6 + 0x1e0) = uVar7;
    *(undefined8 *)(lVar6 + 0x1e8) = uVar7;
    lVar11 = FUN_14476842e(param_1,&DAT_14ca63bb0,L"StencilDummy",2);
    if ((*(char *)(lVar11 + 0x92) == '\x04') || (*(char *)(lVar11 + 0x92) == '\x01')) {
      uVar16 = *(undefined2 *)(lVar11 + 0x8e);
    }
    else {
      uVar16 = 0;
    }
    uVar3 = *(undefined1 *)(lVar11 + 0x90);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar13 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    puVar13[1] = *(undefined8 *)(lVar11 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 1;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *puVar13 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar13 + 5) = 0x3c;
    *(undefined1 *)((longlong)puVar13 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2e) = uVar16;
    *(undefined1 *)(puVar13 + 6) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
    puVar13[7] = lVar11;
    iVar12 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar12);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *(undefined8 **)(lVar6 + 0x208) = puVar13;
    goto LAB_140c6855e;
  }
  iVar12 = *(int *)(param_2 + 0x1dc);
  if (iVar12 == 1) {
    local_c8 = 1;
    FUN_140c68a93(&local_80,*(uint *)(param_2 + 0x330) >> 8 & 1,*(undefined8 *)(param_2 + 0x1c8),
                  0x8000000);
    lVar11 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT42(uStack_7e,CONCAT11(uStack_7f,local_80)))
                     );
    if (lVar11 == 0) {
      iVar12 = *(int *)(param_2 + 0x1dc);
      goto LAB_140c685d4;
    }
    lStack_70 = FUN_1447ebf30(param_1,lVar11,L"GbxDigistructSceneDepthZ",0);
    *(longlong *)(lVar6 + 0x1e0) = lStack_70;
    *(longlong *)(lVar6 + 0x1e8) = lStack_70;
    uStack_7f = 0;
    uStack_76 = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_7e = (uint)*(byte *)(lStack_70 + 0x90);
    if ((*(char *)(lStack_70 + 0x92) == '\x04') || (*(char *)(lStack_70 + 0x92) == '\x01')) {
      uStack_7a = (undefined1)*(undefined2 *)(lStack_70 + 0x8e);
      uStack_79 = (undefined1)((ushort)*(undefined2 *)(lStack_70 + 0x8e) >> 8);
    }
    local_80 = 0x2c;
    uVar7 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,lStack_70 + 8);
    *(undefined8 *)(lVar6 + 0x208) = uVar7;
  }
  else {
LAB_140c685d4:
    uVar17 = (ulonglong)((*(uint *)(param_2 + 0x330) & 4) == 0) << 0xc | DAT_14ca4af90;
    uVar9 = uVar17 | 0x20c;
    local_b8 = uVar17 | 0x2020c;
    if ((DAT_14ca84e22 & 1) == 0) {
      local_b8 = uVar9;
    }
    if (iVar12 != 1) {
      local_b8 = uVar9;
    }
    uVar10 = *(uint *)(param_2 + 0x330) & 1;
    local_a0 = *(undefined4 *)(param_2 + 0x22c);
    uVar7 = *(undefined8 *)(param_2 + 0x21c);
    lStack_a8 = *(longlong *)(param_2 + 0x224);
    local_8a = (short)uVar10 + 1;
    local_94 = *(undefined8 *)(lVar6 + 0x20);
    local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_98 = 0;
    local_8c = 1;
    local_88 = 1;
    local_86 = (undefined1)uVar10;
    local_85 = 0xb;
    local_83 = 0xff;
    bVar14 = (byte)iVar12;
    local_80 = (undefined1)local_b8;
    uStack_7f = (undefined1)(local_b8 >> 8);
    uStack_7e = (uint)(local_b8 >> 0x10);
    uStack_7a = (undefined1)(local_b8 >> 0x30);
    uStack_79 = (undefined1)(local_b8 >> 0x38);
    local_4d = 0xb;
    local_54 = 1;
    local_50 = 1;
    local_b0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_78 = (undefined1)uVar7;
    uStack_77 = (undefined1)((ulonglong)uVar7 >> 8);
    uStack_76 = (undefined1)((ulonglong)uVar7 >> 0x10);
    uStack_75 = (undefined1)((ulonglong)uVar7 >> 0x18);
    uStack_74 = local_b0._4_4_;
    local_60 = 0;
    local_4b = 0xff;
    local_5c = DAT_14ca84e40;
    if ((int)local_94 < DAT_14ca84e40) {
      local_5c = (int)local_94;
    }
    if (local_5c < 2) {
      local_5c = 1;
    }
    iVar12 = (int)((ulonglong)local_94 >> 0x20);
    local_58 = DAT_14ca84e40;
    if (iVar12 < DAT_14ca84e40) {
      local_58 = iVar12;
    }
    if (local_58 < 2) {
      local_58 = 1;
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar17 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar9 = uVar17 + 0x120;
    local_b0 = uVar7;
    local_87 = bVar14;
    lStack_70 = lStack_a8;
    local_68 = local_a0;
    local_64 = local_9c;
    local_52 = local_8a;
    local_4f = bVar14;
    local_4e = local_86;
    if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
      FUN_140023dd8(plVar1,0x128);
      uVar17 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar9 = uVar17 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar9;
    FUN_1456bbb8c(uVar17,L"GbxDigistructSceneDepthZ",&local_80,0);
    iVar12 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar12);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar17;
    *(int *)(uVar17 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    *(ulonglong *)(lVar6 + 0x1e0) = uVar17;
    *(ulonglong *)(lVar6 + 0x1e8) = uVar17;
    if (bVar14 < 2) {
      lVar11 = 0;
    }
    else {
      local_87 = 1;
      local_c8 = 1;
      FUN_140c68a93(&local_80,*(uint *)(param_2 + 0x330) >> 8 & 1,*(undefined8 *)(param_2 + 0x1c8),
                    0x8000000);
      lVar11 = CONCAT17(uStack_79,
                        CONCAT16(uStack_7a,CONCAT42(uStack_7e,CONCAT11(uStack_7f,local_80))));
      if (lVar11 == 0) {
        uVar7 = FUN_14472bf7a(param_1,&local_b8,L"GbxDigistructSceneDepthZ",0);
      }
      else {
        uVar7 = FUN_1447ebf30(param_1,lVar11,L"GbxDigistructSceneDepthZ",0);
      }
      *(undefined8 *)(lVar6 + 0x1e8) = uVar7;
      uVar17 = *(ulonglong *)(lVar6 + 0x1e0);
    }
    if ((*(char *)(uVar17 + 0x92) == '\x04') || (*(char *)(uVar17 + 0x92) == '\x01')) {
      uVar16 = *(undefined2 *)(uVar17 + 0x8e);
    }
    else {
      uVar16 = 0;
    }
    uVar3 = *(undefined1 *)(uVar17 + 0x90);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(plVar1,0x48);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar13 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    puVar13[1] = *(undefined8 *)(uVar17 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 1;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *puVar13 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar13 + 5) = 0x2c;
    *(undefined1 *)((longlong)puVar13 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2e) = uVar16;
    *(undefined1 *)(puVar13 + 6) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
    puVar13[7] = uVar17;
    iVar12 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar12);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *(undefined8 **)(lVar6 + 0x208) = puVar13;
    if (lVar11 == 0) goto LAB_140c6855e;
  }
  LOCK();
  puVar2 = (uint *)(lVar11 + 8);
  uVar10 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar10 & 0x3fffffff) == 1) {
    FUN_144a54812(lVar11);
  }
LAB_140c6855e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c68a93 FUN_140c68a93 body=366 status=ok
// SIG undefined FUN_140c68a93(void)

undefined8 *
FUN_140c68a93(undefined8 *param_1,int param_2,ulonglong param_3,undefined8 param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 *local_50;
  uint local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_2 == 1) && (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) &&
      (cVar5 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))(), cVar5 != '\0')) &&
     (plVar6 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x78))(),
     plVar6 != (longlong *)0x0)) {
    local_58 = &local_38;
    local_38 = 0;
    local_50 = &local_40;
    local_40 = 0;
    local_48 = (uint)param_5;
    local_60 = 0x20c;
    local_70 = 1;
    local_78 = 0xb;
    local_68 = param_4;
    (**(code **)(*plVar6 + 0x60))(plVar6,0,param_3 & 0xffffffff,param_3 >> 0x20);
    lVar4 = local_38;
    *param_1 = local_40;
    if (local_38 != 0) {
      LOCK();
      puVar1 = (uint *)(local_38 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_38 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_38 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c8;
              plVar6 = plVar7;
              if (bVar9) {
                plVar8 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    *param_1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c68c08 FUN_140c68c08 body=221 status=ok
// SIG undefined FUN_140c68c08(void)

longlong FUN_140c68c08(void)

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
  if (DAT_14cb4dc98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14855e49b;
    local_40 = FUN_1464964f2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GeometryScriptingCore",L"GeometryScriptDebug",&DAT_14cb4dc98,
                  &DAT_14855e49a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4dc98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c68cf4 FUN_140c68cf4 body=40 status=ok
// SIG undefined FUN_140c68cf4(void)

undefined8 FUN_140c68cf4(undefined8 param_1,int param_2)

{
  FUN_140c68d1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c68d1c FUN_140c68d1c body=260 status=ok
// SIG undefined FUN_140c68d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c68d1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b72ce30;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x11);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b72e020;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140c68df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c68e20 FUN_140c68e20 body=40 status=ok
// SIG undefined FUN_140c68e20(void)

undefined8 FUN_140c68e20(undefined8 param_1,int param_2)

{
  FUN_140c68e48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c68e48 FUN_140c68e48 body=96 status=ok
// SIG undefined FUN_140c68e48(void)

void FUN_140c68e48(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b8380c0;
  param_1[6] = &PTR_FUN_14b838380;
  param_1[7] = &PTR_FUN_14b838410;
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_14127b218(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140c68ea8 FUN_140c68ea8 body=627 status=ok
// SIG undefined FUN_140c68ea8(void)

void FUN_140c68ea8(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffc000 | 0x800;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_140c692ee(param_1,0);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_140c6998c(param_1 + 0x160,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xffffff10 | 8;
  *(undefined1 *)(param_1 + 400) = 0;
  FUN_14010afec(param_1 + 0x1a8,0);
  plVar1 = (longlong *)(param_1 + 0x1f8);
  iVar5 = *(int *)(param_1 + 0x240);
  if (iVar5 < 2) {
    lVar6 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x238);
    }
    iVar4 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    if (*(int *)(param_1 + 0x200) - *(int *)(param_1 + 0x22c) < iVar4 >> 2) {
      lVar3 = param_1 + 0x208;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar3;
      if (*(int *)(param_1 + 0x220) == 0) {
        iVar5 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar5 = *(int *)(param_1 + 0x220);
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar2 = local_68;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar4 = local_68._4_4_;
      local_80 = plVar1;
      if ((local_68._4_4_ != iVar5) || (local_68 = local_48, uStack_50 != lVar3)) {
        do {
          local_68 = uVar2;
          *(undefined4 *)(lVar6 + (longlong)*(int *)(*local_80 + 0x24 + (longlong)iVar4 * 0x28) * 4)
               = 0xffffffff;
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar2 = local_68;
        } while (local_80 != plVar1 ||
                 (CONCAT44(uStack_6c,uStack_70) != lVar3 || local_68._4_4_ != iVar5));
      }
    }
    else if (iVar5 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x240));
    }
    FUN_140c69132(plVar1);
  }
  else {
    FUN_140c69132(plVar1);
    *(undefined4 *)(param_1 + 0x240) = 1;
    FUN_1417c3f86(plVar1);
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c69132 FUN_140c69132 body=442 status=ok
// SIG undefined FUN_140c69132(void)

void FUN_140c69132(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar7 = local_50._4_4_;
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_140c691a3;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140c691a3:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c692ee FUN_140c692ee body=1693 status=ok
// SIG undefined FUN_140c692ee(void)

void FUN_140c692ee(longlong param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong *plVar24;
  bool bVar25;
  undefined1 auStack_128 [47];
  char local_f9;
  longlong local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  plVar20 = (longlong *)(param_1 + 0xa8);
  puVar2 = (uint *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0xd0);
  local_f9 = param_2;
  local_f8 = param_1;
  local_f0 = plVar20;
  if (iVar5 == 0) {
    uVar21 = 1;
    uVar13 = 0;
    iVar14 = 0;
    iVar7 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar22 = *puVar10;
    if (uVar22 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar13 = 0;
      uVar21 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar21 = uVar13;
      }
      iVar14 = 0;
      do {
        if (uVar21 == uVar13) goto LAB_140c69681;
        iVar14 = iVar14 + 0x20;
        uVar22 = puVar10[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar13 = 0;
      iVar14 = 0;
    }
    uVar21 = (ulonglong)(-uVar22 & uVar22);
    uVar19 = uVar21 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar5 <= iVar7) goto LAB_140c69681;
  uVar22 = 0xffffffff;
  do {
    uVar19 = local_50;
    plVar24 = (longlong *)(*plVar20 + (longlong)iVar7 * 0x20 + 8);
    lVar18 = *plVar24;
    lVar11 = *(longlong *)(lVar18 + 0x48);
    if (local_f9 == '\0') {
LAB_140c694bc:
      if (*(longlong *)(param_1 + 0x68) != lVar11) {
        uVar4 = *(undefined8 *)(lVar18 + 0xd8);
        lVar18 = (longlong)(int)local_50;
        uVar8 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar8);
        if (local_50._4_4_ < uVar8) {
          FUN_1457a2cc6(local_d8,uVar19 & 0xffffffff);
        }
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_d8;
        }
        *(undefined8 *)(puVar6 + lVar18 * 8) = uVar4;
        lVar18 = *plVar24;
        param_1 = local_f8;
        plVar20 = local_f0;
      }
      FUN_140441966(lVar18);
    }
    else {
      if (lVar11 == 0) {
        if ((*(int *)(lVar18 + 0xdc) != 0) && (uVar8 = *(uint *)(lVar18 + 0xd8), -1 < (int)uVar8)) {
          lVar11 = 0;
          if (DAT_14c9647dc <= (int)uVar8) goto LAB_140c694bc;
          plVar17 = (longlong *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if ((((plVar17 != (longlong *)0x0) && ((int)plVar17[2] == *(int *)(lVar18 + 0xdc))) &&
              ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (lVar11 = *plVar17, lVar11 != 0)) {
            lVar23 = *(longlong *)(param_1 + 0x28);
            if ((*(uint *)(plVar17 + 1) & 0x10200000) != 0) {
              lVar11 = 0;
            }
            goto LAB_140c6948d;
          }
        }
        lVar11 = 0;
        goto LAB_140c694bc;
      }
      lVar23 = *(longlong *)(param_1 + 0x28);
LAB_140c6948d:
      lVar3 = *(longlong *)(param_1 + 0x68);
      *(undefined8 *)(lVar18 + 0x48) = 0;
      if (lVar3 != 0) {
        FUN_140dc7722(lVar23 + 0x15d0,lVar3,lVar11,plVar24);
      }
      FUN_1404422c0(*plVar24);
    }
    uVar22 = uVar22 & ~(uint)uVar21;
    puVar10 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    iVar5 = *(int *)(param_1 + 0xd0);
    iVar7 = (int)uVar13;
    lVar18 = (longlong)iVar7;
    uVar8 = puVar10[lVar18] & uVar22;
    if (uVar8 == 0) {
      iVar9 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar9 = iVar5 + -1;
      }
      iVar9 = iVar9 >> 5;
      iVar15 = iVar9;
      if (iVar9 < iVar7) {
        iVar15 = iVar7;
      }
      if (iVar9 <= iVar7) break;
      lVar11 = 0;
      while( true ) {
        iVar14 = iVar14 + 0x20;
        uVar8 = puVar10[lVar18 + lVar11 + 1];
        if (uVar8 != 0) break;
        lVar11 = lVar11 + 1;
        if (iVar15 - lVar18 == lVar11) goto LAB_140c695c8;
      }
      uVar13 = (ulonglong)(iVar7 + (int)lVar11 + 1);
      uVar22 = 0xffffffff;
    }
    uVar21 = (ulonglong)(-uVar8 & uVar8);
    uVar19 = uVar21 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  } while (iVar7 < iVar5);
LAB_140c695c8:
  if ((int)local_50 < 1) goto LAB_140c69681;
  uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x858);
  local_e8 = local_d8;
  if (local_58 != (undefined1 *)0x0) {
    local_e8 = local_58;
  }
  local_e0 = (int)local_50;
  lVar18 = *(longlong *)(param_1 + 0x68);
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar18);
LAB_140c69623:
    uVar22 = *(uint *)(lVar18 + 0xc);
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar5 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar18 + 0x10);
      bVar25 = iVar5 == 0;
      if (bVar25) {
        *(int *)(lVar18 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar25) {
        iVar5 = iVar7;
      }
    }
    uVar12 = CONCAT44(iVar5,uVar22);
  }
  else {
    if (lVar18 != 0) goto LAB_140c69623;
    uVar12 = 0;
  }
  FUN_1403cc6be(uVar4,uVar12,&local_e8,param_1);
LAB_140c69681:
  iVar5 = *(int *)(param_1 + 0xf0);
  if (iVar5 < 2) {
    lVar18 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar18 = *(longlong *)(param_1 + 0xe8);
    }
    iVar7 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
    if (*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc) < iVar7 >> 2) {
      iVar5 = *(int *)(param_1 + 0xd0);
      if (iVar5 != 0) {
        puVar10 = *(uint **)(param_1 + 200);
        if (*(uint **)(param_1 + 200) == (uint *)0x0) {
          puVar10 = puVar2;
        }
        uVar22 = *puVar10;
        param_1 = local_f8;
        plVar20 = local_f0;
        if (uVar22 == 0) {
          iVar7 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar7 = iVar5 + -1;
          }
          uVar13 = 0;
          uVar21 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar21 = uVar13;
          }
          iVar7 = 0;
          do {
            if (uVar21 == uVar13) goto LAB_140c696e5;
            iVar7 = iVar7 + 0x20;
            uVar22 = puVar10[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar13 = 0;
          iVar7 = 0;
        }
        uVar19 = (ulonglong)(-uVar22 & uVar22);
        uVar21 = uVar19 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar14 = (iVar7 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar14 < iVar5) {
          uVar22 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar18 + (longlong)
                       *(int *)(*(longlong *)(local_f8 + 0xa8) + 0x1c + (longlong)iVar14 * 0x20) * 4
             ) = 0xffffffff;
            uVar22 = ~(uint)uVar19 & uVar22;
            puVar10 = *(uint **)(local_f8 + 200);
            if (*(uint **)(local_f8 + 200) == (uint *)0x0) {
              puVar10 = puVar2;
            }
            iVar9 = *(int *)(local_f8 + 0xd0);
            iVar14 = (int)uVar13;
            lVar11 = (longlong)iVar14;
            uVar8 = puVar10[lVar11] & uVar22;
            if (uVar8 == 0) {
              iVar15 = iVar9 + 0x1e;
              if (-1 < iVar9 + -1) {
                iVar15 = iVar9 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar7 = iVar7 + 0x20;
              iVar16 = iVar15;
              if (iVar15 < iVar14) {
                iVar16 = iVar14;
              }
              if (iVar14 < iVar15) {
                lVar23 = 0;
                do {
                  uVar8 = puVar10[lVar11 + lVar23 + 1];
                  if (uVar8 != 0) {
                    uVar13 = (ulonglong)(iVar14 + (int)lVar23 + 1);
                    uVar22 = 0xffffffff;
                    goto LAB_140c6990d;
                  }
                  iVar7 = iVar7 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar16 - lVar11 != lVar23);
                uVar22 = 0xffffffff;
                iVar14 = iVar16;
              }
              uVar13 = (ulonglong)(iVar14 + 1);
              iVar14 = iVar9;
            }
            else {
LAB_140c6990d:
              uVar19 = (ulonglong)(-uVar8 & uVar8);
              uVar21 = uVar19 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar14 = (iVar7 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (iVar9 <= iVar14) {
                iVar14 = iVar9;
              }
            }
          } while (iVar14 != iVar5);
        }
      }
    }
    else if (iVar5 == 1) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar18 + lVar11 * 4) = 0xffffffff;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0xf0));
    }
LAB_140c696e5:
    FUN_1410f2a36(plVar20);
  }
  else {
    FUN_1410f2a36(plVar20);
    *(undefined4 *)(param_1 + 0xf0) = 1;
    FUN_1417c3bac(plVar20);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  plVar20 = *(longlong **)(param_1 + 0xa0);
  if (plVar20 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    LOCK();
    plVar24 = plVar20 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6998c FUN_140c6998c body=96 status=ok
// SIG undefined FUN_140c6998c(void)

void FUN_140c6998c(longlong param_1,int param_2)

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



// FUNCTION 140c699fa FUN_140c699fa body=40 status=ok
// SIG undefined FUN_140c699fa(void)

undefined8 FUN_140c699fa(undefined8 param_1,int param_2)

{
  FUN_140c69a22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c69a22 FUN_140c69a22 body=527 status=ok
// SIG undefined FUN_140c69a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c69a22(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b72ce60;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x40);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x39] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x39] + 0x50));
  }
  if ((param_1[0x33] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x33] + 0x50));
  }
  if ((param_1[0x2d] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2d] + 0x50));
  }
  if ((param_1[0x27] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x27] + 0x50));
  }
  if ((param_1[0x21] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x21] + 0x50));
  }
  *param_1 = &PTR_FUN_14b72e020;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140c69b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c69c32 FUN_140c69c32 body=24 status=ok
// SIG undefined FUN_140c69c32(void)

void FUN_140c69c32(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c69c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140c69c4a FUN_140c69c4a body=189 status=ok
// SIG undefined FUN_140c69c4a(void)

undefined8 * FUN_140c69c4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9b0a08;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69d08(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69d08(param_1 + 0x15);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b9a70e8;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69d40(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c69d08 FUN_140c69d08 body=55 status=ok
// SIG undefined FUN_140c69d08(void)

void FUN_140c69d08(longlong *param_1)

{
  FUN_140c69df2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c69d40 FUN_140c69d40 body=55 status=ok
// SIG undefined FUN_140c69d40(void)

void FUN_140c69d40(longlong *param_1)

{
  FUN_140c69d78(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c69d78 FUN_140c69d78 body=121 status=ok
// SIG undefined FUN_140c69d78(void)

void FUN_140c69d78(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140c69df2 FUN_140c69df2 body=421 status=ok
// SIG undefined FUN_140c69df2(void)

void FUN_140c69df2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x18 + (longlong)iStack_5c * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c69f9a FUN_140c69f9a body=152 status=ok
// SIG undefined FUN_140c69f9a(void)

void FUN_140c69f9a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x20 + 0x18);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x18);
  plVar5 = *(longlong **)(*param_1 + 0x10 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140c6a032(param_1,param_2);
  return;
}



// FUNCTION 140c6a032 FUN_140c6a032 body=114 status=ok
// SIG undefined FUN_140c6a032(void)

void FUN_140c6a032(longlong *param_1,int param_2)

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



// FUNCTION 140c6a0a4 FUN_140c6a0a4 body=57 status=ok
// SIG undefined FUN_140c6a0a4(void)

void FUN_140c6a0a4(longlong param_1,undefined8 param_2)

{
  FUN_140c6a0de();
  if (*(char *)(param_1 + 0x3e0) != '\x01') {
    return;
  }
  FUN_1433eddd8(param_1 + 0x400,param_2);
  return;
}



// FUNCTION 140c6a0de FUN_140c6a0de body=104 status=ok
// SIG undefined FUN_140c6a0de(void)

void FUN_140c6a0de(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    FUN_1433eddd8(param_1 + 0x210,param_2);
  }
  if (*(char *)(param_1 + 0x120) == '\x01') {
    FUN_1433eddd8(param_1 + 0x140,param_2);
  }
  if (*(char *)(param_1 + 0x2d0) != '\x01') {
    return;
  }
  FUN_1433eddd8(param_1 + 0x2f0,param_2);
  return;
}



// FUNCTION 140c6a146 FUN_140c6a146 body=26 status=ok
// SIG undefined FUN_140c6a146(void)

void FUN_140c6a146(undefined8 param_1)

{
  FUN_140c6a160();
  FUN_140c6a768(param_1);
  return;
}



// FUNCTION 140c6a160 FUN_140c6a160 body=1542 status=ok
// SIG undefined FUN_140c6a160(void)

void FUN_140c6a160(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  float *pfVar14;
  undefined *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_108 [39];
  char local_e1;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  char local_b8 [16];
  longlong *local_a8;
  int local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_1 + 0xe0) == 0) ||
      (plVar18 = *(longlong **)(param_1 + 0xe8), plVar18 == (longlong *)0x0)) ||
     ((int)plVar18[1] < 1)) goto LAB_140c6a3d0;
  lVar20 = 0;
  iVar7 = (int)plVar18[1];
  do {
    iVar6 = iVar7;
    if (iVar6 == 0) {
      plVar18 = (longlong *)0x0;
      goto LAB_140c6a1db;
    }
    LOCK();
    iVar7 = (int)plVar18[1];
    bVar22 = iVar6 == iVar7;
    if (bVar22) {
      *(int *)(plVar18 + 1) = iVar6 + 1;
      iVar7 = iVar6;
    }
    UNLOCK();
  } while (!bVar22);
  lVar20 = *(longlong *)(param_1 + 0xe0);
LAB_140c6a1db:
  lVar16 = *(longlong *)(lVar20 + 0x20);
  if (lVar16 == 0) {
    uVar11 = FUN_145cd2a6e();
    lVar16 = FUN_14477b664(uVar11);
    *(longlong *)(lVar20 + 0x20) = lVar16;
  }
  lVar21 = *(longlong *)(lVar20 + 0x28);
  if (lVar21 == 0) {
    if ((lVar16 != 0) && (*(longlong *)(lVar20 + 0x18) != 0)) {
      plVar3 = *(longlong **)(lVar16 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
        *(undefined8 *)(lVar20 + 0x28) = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar21 = FUN_144aff482(uVar11,(longlong *)(lVar20 + 0x18));
        *(longlong *)(lVar20 + 0x28) = lVar21;
        if (lVar21 != 0) goto LAB_140c6a1f5;
      }
    }
  }
  else {
LAB_140c6a1f5:
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    FUN_1402e0c9c(*(undefined8 *)(param_1 + 8),local_b8);
    if (0 < *(int *)(lVar21 + 0x20)) {
      uVar17 = 0;
      do {
        lVar16 = *(longlong *)(lVar21 + 0x18) + uVar17 * 0xb8;
        pcVar13 = (char *)(lVar16 + 0x18);
        if (0x18 < *(ushort *)(lVar16 + 0x30)) {
          pcVar13 = *(char **)pcVar13;
        }
        lVar16 = *(longlong *)(lVar21 + 0x18) + uVar17 * 0xb8;
        uVar10 = (ulonglong)((uint)*(byte *)(lVar16 + 0x38) * 0x120);
        if (*(code **)(&DAT_14c9a8620 + uVar10) != (code *)0x0) {
          cVar5 = (**(code **)(&DAT_14c9a8620 + uVar10))();
          if (cVar5 == '\0') goto LAB_140c6a5c0;
LAB_140c6a26c:
          *(int *)(param_1 + 0x38) = (int)uVar17;
          goto LAB_140c6a26f;
        }
        pcVar12 = pcVar13 + *(int *)((longlong)&DAT_14c9a8510 + uVar10);
        do {
          if (pcVar12 <= pcVar13) goto LAB_140c6a26c;
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 == '\0');
LAB_140c6a5c0:
        pfVar14 = &local_88;
        FUN_1447c3578(lVar16 + 0x10,pfVar14,local_b8);
        local_e1 = FUN_144a7fca4(pfVar14);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_70) {
            pfVar14 = (float *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar2)(pfVar14);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        if (local_e1 != '\0') goto LAB_140c6a26c;
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < (longlong)*(int *)(lVar21 + 0x20));
    }
    uVar17 = (ulonglong)*(uint *)(param_1 + 0x38);
LAB_140c6a26f:
    if (((int)uVar17 < 0) || (*(int *)(lVar21 + 0x20) <= (int)uVar17)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      iVar7 = 0;
    }
    else {
      pfVar14 = &local_88;
      FUN_1447c3578(lVar20 + 0x30,pfVar14,local_b8);
      iVar7 = FUN_1405d5f74(pfVar14);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_70) {
          pfVar14 = (float *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar2)(pfVar14);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      pfVar14 = &local_88;
      FUN_1447c3578(lVar20 + 0x68,pfVar14,local_b8);
      iVar8 = FUN_1405d5f74(pfVar14);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_70) {
          pfVar14 = (float *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar2)(pfVar14);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      pfVar14 = &local_e0;
      FUN_1447c3578(*(longlong *)(lVar21 + 0x18) + (longlong)*(int *)(param_1 + 0x38) * 0xb8 + 0x48,
                    pfVar14,local_b8);
      if (local_c0 == 3) {
        uVar9 = 3;
        fVar23 = local_e0;
      }
      else {
        pfVar19 = &local_88;
        FUN_1400b56fe(pfVar19,&local_e0,3);
        fVar23 = 0.0;
        if (local_68 != 0) {
          fVar23 = local_88;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_70) {
            pfVar19 = (float *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar2)(pfVar19);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        uVar9 = (uint)local_c0;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_c8) {
          pfVar14 = (float *)CONCAT44(uStack_dc,local_e0);
        }
        (*pcVar2)(pfVar14);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
      }
      *(int *)(param_1 + 0x28) = (int)((float)iVar7 * fVar23);
      iVar7 = (int)((float)iVar8 * fVar23);
    }
    *(int *)(param_1 + 0x30) = iVar7;
    lVar20 = DAT_14c9a3da0;
    if ((longlong)local_90 != 0) {
      lVar16 = (longlong)local_90 + -1;
      lVar21 = lVar16 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar21),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar21));
      if (*(longlong *)(lVar20 + lVar21) != 0) {
        FUN_1400020a8();
      }
      lVar20 = DAT_14c9a3da0;
      iVar7 = (int)lVar16;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar20 + lVar21) = 0xffffffff;
      iVar8 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar8 = DAT_14c9a3dd0;
      }
      *(int *)(lVar20 + 4 + lVar21) = iVar8;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar15 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar15 = DAT_14c9a3dc0;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      bVar4 = (byte)lVar16 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar15 + (longlong)(iVar8 >> 5) * 4) =
           *(uint *)(puVar15 + (longlong)(iVar8 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_90 = 0;
    }
    if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
  }
  if (iVar6 != 0) {
    LOCK();
    plVar3 = plVar18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
LAB_140c6a3d0:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6a768 FUN_140c6a768 body=3278 status=ok
// SIG undefined FUN_140c6a768(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140c6a768(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  double *pdVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  longlong *plVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  longlong *plVar35;
  longlong *plVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  longlong *plVar40;
  undefined4 *puVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined1 auStack_de8 [32];
  longlong **local_dc8;
  longlong local_dc0;
  longlong local_db8;
  longlong *local_db0;
  longlong local_da8 [320];
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  ulonglong uStack_378;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_de8;
  iVar37 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28);
  iVar27 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  iVar38 = (*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x48)) + iVar27 + iVar37;
  if (0 < iVar38) {
    plVar19 = *(longlong **)(param_1 + 0xe8);
    bVar42 = true;
    if (plVar19 == (longlong *)0x0) {
      plVar19 = (longlong *)0x0;
      lVar39 = 0;
    }
    else {
      iVar31 = (int)plVar19[1];
      lVar39 = 0;
      do {
        if (iVar31 == 0) {
          plVar19 = (longlong *)0x0;
          goto LAB_140c6a839;
        }
        LOCK();
        iVar14 = (int)plVar19[1];
        bVar43 = iVar31 == iVar14;
        if (bVar43) {
          *(int *)(plVar19 + 1) = iVar31 + 1;
          iVar14 = iVar31;
        }
        iVar31 = iVar14;
        UNLOCK();
      } while (!bVar43);
      lVar39 = *(longlong *)(param_1 + 0xe0);
      bVar42 = false;
    }
LAB_140c6a839:
    lVar18 = *(longlong *)(lVar39 + 0x20);
    if (lVar18 == 0) {
      uVar17 = FUN_145cd2a6e();
      lVar18 = FUN_14477b664(uVar17);
      *(longlong *)(lVar39 + 0x20) = lVar18;
    }
    local_dc0 = *(longlong *)(lVar39 + 0x28);
    if (((local_dc0 == 0) && (local_dc0 = 0, lVar18 != 0)) &&
       (local_dc8 = (longlong **)(lVar39 + 0x18), *local_dc8 != (longlong *)0x0)) {
      plVar20 = *(longlong **)(lVar18 + 0xb8);
      if ((plVar20 == (longlong *)0x0) ||
         (cVar13 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar13 == '\0')) {
        local_dc0 = 0;
      }
      else {
        uVar17 = (**(code **)(*plVar20 + 0x110))(plVar20);
        local_dc0 = FUN_144aff482(uVar17);
      }
      *(longlong *)(lVar39 + 0x28) = local_dc0;
    }
    if (!bVar42) {
      LOCK();
      plVar20 = plVar19 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    if (local_dc0 != 0) {
      local_3a8 = (longlong *)0x0;
      local_3a0 = 0x4000000000;
      plVar19 = (longlong *)FUN_147e24ad8(param_1);
      lVar18 = *plVar19;
      lVar39 = lVar18 + 0x38;
      local_98 = (longlong *)&DAT_100000000;
      uStack_90 = lVar39;
      local_88 = 0xffffffff;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (*(int *)(lVar18 + 0x50) == 0) {
        iVar31 = 0;
      }
      else {
        FUN_1449c0562(&local_98);
        iVar31 = *(int *)(lVar18 + 0x50);
      }
      local_db8 = param_1 + 0x40;
      local_380 = local_88;
      lVar22 = local_380;
      uStack_378 = uStack_80;
      uStack_390 = local_98;
      uStack_388 = (undefined4)uStack_90;
      uStack_384 = uStack_90._4_4_;
      local_398 = (longlong *)(lVar18 + 0x28);
      local_380._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      iVar14 = local_380._4_4_;
      if ((local_380._4_4_ != iVar31) || (local_380 = lVar22, uStack_90 != lVar39)) {
        do {
          local_380 = lVar22;
          if (*(char *)(*local_398 + 0x40 + (longlong)iVar14 * 0x58) == '\0') {
            puVar41 = (undefined4 *)(*local_398 + (longlong)iVar14 * 0x58);
            uVar15 = FUN_140b95084(puVar41);
            iVar14 = FUN_145a16fec(local_db8,uVar15,puVar41);
            if ((iVar14 == -1) &&
               (local_dc8 = (longlong **)FUN_14479d2ce(puVar41 + 0xc), local_dc8 != (longlong **)0x0
               )) {
              plVar19 = local_dc8[0x39];
              if (plVar19 == (longlong *)0x0) {
                pauVar24 = (undefined1 (*) [16])&DAT_14c8464e0;
                uVar15 = (undefined4)DAT_14c8464f0;
                uVar49 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              }
              else {
                uVar15 = (undefined4)plVar19[0x4e];
                uVar49 = (undefined4)((ulonglong)plVar19[0x4e] >> 0x20);
                pauVar24 = (undefined1 (*) [16])(plVar19 + 0x4c);
              }
              auVar4 = *pauVar24;
              local_db0 = (longlong *)(longlong)(int)local_3a0;
              uVar16 = (int)local_3a0 + 1;
              local_3a0 = CONCAT44(local_3a0._4_4_,uVar16);
              if (local_3a0._4_4_ < uVar16) {
                FUN_144237c96(local_da8,local_db0);
              }
              plVar19 = local_3a8;
              if (local_3a8 == (longlong *)0x0) {
                plVar19 = local_da8;
              }
              local_db0 = plVar19 + (longlong)local_db0 * 5;
              FUN_144237c7c();
              *local_db0 = (longlong)local_dc8;
              *(undefined8 *)((longlong)local_db0 + 0x1c) = *(undefined8 *)(puVar41 + 4);
              uVar5 = puVar41[1];
              uVar6 = puVar41[2];
              uVar7 = puVar41[3];
              *(undefined4 *)((longlong)local_db0 + 0xc) = *puVar41;
              *(undefined4 *)(local_db0 + 2) = uVar5;
              *(undefined4 *)((longlong)local_db0 + 0x14) = uVar6;
              *(undefined4 *)(local_db0 + 3) = uVar7;
              lVar22 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
              lVar25 = (longlong)*(int *)(lVar22 + 0x1b8);
              if (lVar25 != 0) {
                pdVar23 = *(double **)(lVar22 + 0x1b0);
                pdVar3 = pdVar23 + lVar25 * 3;
                fVar44 = *(float *)(local_db0 + 1);
                do {
                  dVar46 = auVar4._0_8_ - *pdVar23;
                  dVar48 = auVar4._8_8_ - pdVar23[1];
                  dVar47 = (double)CONCAT44(uVar49,uVar15) - pdVar23[2];
                  fVar45 = (float)(dVar47 * dVar47 + dVar48 * dVar48 + dVar46 * dVar46);
                  if (fVar45 <= fVar44) {
                    fVar44 = fVar45;
                  }
                  *(float *)(local_db0 + 1) = fVar44;
                  pdVar23 = pdVar23 + 3;
                } while (pdVar23 != pdVar3);
              }
            }
          }
          local_380 = CONCAT44(local_380._4_4_,(uint)local_380 & ~uStack_390._4_4_);
          FUN_1449c0562(&uStack_390);
          iVar14 = local_380._4_4_;
          lVar22 = local_380;
        } while (local_398 != (longlong *)(lVar18 + 0x28) ||
                 (CONCAT44(uStack_384,uStack_388) != lVar39 || local_380._4_4_ != iVar31));
      }
      iVar31 = (int)local_3a0;
      lVar39 = (longlong)(int)local_3a0;
      if (1 < lVar39) {
        plVar19 = local_3a8;
        if (local_3a8 == (longlong *)0x0) {
          plVar19 = local_da8;
        }
        memset(&uStack_388,0,0x2f0);
        uStack_390 = plVar19 + lVar39 * 5 + -5;
        local_398 = plVar19;
        fVar44 = logf((float)iVar31);
        uStack_388 = (int)(longlong)(fVar44 + fVar44);
        local_dc8 = &local_398;
        do {
          plVar20 = *local_dc8;
          plVar21 = local_dc8[1];
          iVar31 = *(int *)(local_dc8 + 2);
          iVar14 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar20) >> 3) * -0x33333333;
          uVar29 = (ulonglong)(iVar14 + 1);
          plVar19 = plVar21;
          plVar40 = plVar20;
          if (iVar31 != 0) {
LAB_140c6aa0a:
            if (8 < (int)(uint)uVar29) {
              uVar29 = (ulonglong)((uint)uVar29 >> 1);
              lVar39 = plVar20[uVar29 * 5 + 4];
              lVar18 = plVar20[uVar29 * 5];
              lVar22 = (plVar20 + uVar29 * 5)[1];
              lVar25 = plVar20[uVar29 * 5 + 2];
              lVar8 = (plVar20 + uVar29 * 5 + 2)[1];
              plVar20[uVar29 * 5 + 4] = plVar20[4];
              lVar9 = *plVar20;
              lVar10 = plVar20[1];
              lVar11 = plVar20[3];
              plVar20[uVar29 * 5 + 2] = plVar20[2];
              (plVar20 + uVar29 * 5 + 2)[1] = lVar11;
              plVar20[uVar29 * 5] = lVar9;
              (plVar20 + uVar29 * 5)[1] = lVar10;
              plVar20[4] = lVar39;
              plVar20[2] = lVar25;
              plVar20[3] = lVar8;
              *plVar20 = lVar18;
              plVar20[1] = lVar22;
              plVar35 = plVar19 + 5;
              plVar26 = plVar20;
              do {
                plVar12 = plVar26 + 5;
                plVar30 = plVar26 + 5;
                do {
                  plVar26 = plVar30;
                  plVar36 = plVar12;
                  if (plVar19 < plVar26) break;
                  plVar12 = plVar36 + 5;
                  plVar30 = plVar26 + 5;
                } while (*(float *)(plVar20 + 1) < *(float *)(plVar26 + 1) ||
                         *(float *)(plVar20 + 1) == *(float *)(plVar26 + 1));
                plVar12 = plVar35 + -10;
                do {
                  plVar30 = plVar35;
                  plVar28 = plVar12;
                  plVar35 = plVar30 + -5;
                  if (plVar35 <= plVar20) break;
                  plVar12 = plVar28 + -5;
                } while (*(float *)(plVar30 + -4) < *(float *)(plVar20 + 1) ||
                         *(float *)(plVar30 + -4) == *(float *)(plVar20 + 1));
                if (plVar35 < plVar26) goto LAB_140c6ab4b;
                lVar39 = plVar26[4];
                lVar18 = *plVar26;
                lVar22 = plVar26[1];
                lVar25 = plVar26[2];
                lVar8 = plVar26[3];
                plVar26[4] = plVar30[-1];
                lVar9 = *plVar35;
                lVar10 = plVar30[-4];
                lVar11 = plVar30[-2];
                plVar26[2] = plVar30[-3];
                plVar26[3] = lVar11;
                *plVar26 = lVar9;
                plVar26[1] = lVar10;
                plVar30[-1] = lVar39;
                plVar30[-3] = lVar25;
                plVar30[-2] = lVar8;
                *plVar35 = lVar18;
                plVar30[-4] = lVar22;
              } while( true );
            }
            for (; plVar40 = plVar20, plVar21 = plVar20, plVar20 < plVar19; plVar19 = plVar19 + -5)
            {
              while (plVar35 = plVar40, plVar21 = plVar21 + 5, plVar21 <= plVar19) {
                plVar40 = plVar21;
                if (*(float *)(plVar35 + 1) < *(float *)(plVar21 + 1) ||
                    *(float *)(plVar35 + 1) == *(float *)(plVar21 + 1)) {
                  plVar40 = plVar35;
                }
              }
              local_78 = plVar35[4];
              local_98 = (longlong *)*plVar35;
              uStack_90 = plVar35[1];
              local_88 = plVar35[2];
              uStack_80 = plVar35[3];
              plVar21 = local_98;
              lVar25 = uStack_90;
              plVar35[4] = plVar19[4];
              lVar39 = *plVar19;
              lVar18 = plVar19[1];
              lVar22 = plVar19[3];
              plVar35[2] = plVar19[2];
              plVar35[3] = lVar22;
              *plVar35 = lVar39;
              plVar35[1] = lVar18;
              plVar19[4] = local_78;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              plVar19[2] = local_88;
              plVar19[3] = uStack_80;
              *(undefined4 *)plVar19 = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar19 + 4) = local_98._4_4_;
              *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_90._4_4_;
              local_98 = plVar21;
              uStack_90 = lVar25;
            }
            goto LAB_140c6afd3;
          }
LAB_140c6ac53:
          iVar31 = (int)uVar29;
          if (iVar31 != 0) {
            iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
            iVar34 = iVar14;
joined_r0x000140c6ac78:
            do {
              iVar33 = iVar14 * 2 + 1;
              if (iVar33 < iVar31) {
                iVar32 = iVar14 * 2 + 2;
                if ((iVar32 < iVar31) &&
                   (*(float *)(plVar20 + (longlong)iVar32 * 5 + 1) <
                    *(float *)(plVar20 + (longlong)iVar33 * 5 + 1) ||
                    *(float *)(plVar20 + (longlong)iVar32 * 5 + 1) ==
                    *(float *)(plVar20 + (longlong)iVar33 * 5 + 1))) {
                  iVar33 = iVar32;
                }
                if (*(float *)(plVar20 + (longlong)iVar33 * 5 + 1) <=
                    *(float *)(plVar20 + (longlong)iVar14 * 5 + 1) &&
                    *(float *)(plVar20 + (longlong)iVar14 * 5 + 1) !=
                    *(float *)(plVar20 + (longlong)iVar33 * 5 + 1)) {
                  plVar19 = plVar20 + (longlong)iVar14 * 5;
                  plVar21 = plVar20 + (longlong)iVar33 * 5;
                  local_78 = plVar19[4];
                  local_98 = (longlong *)*plVar19;
                  uStack_90 = plVar19[1];
                  local_88 = plVar19[2];
                  uStack_80 = plVar19[3];
                  plVar40 = local_98;
                  lVar25 = uStack_90;
                  plVar19[4] = plVar21[4];
                  lVar39 = *plVar21;
                  lVar18 = plVar21[1];
                  lVar22 = plVar21[3];
                  plVar19[2] = plVar21[2];
                  plVar19[3] = lVar22;
                  *plVar19 = lVar39;
                  plVar19[1] = lVar18;
                  plVar21[4] = local_78;
                  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                  plVar21[2] = local_88;
                  plVar21[3] = uStack_80;
                  *(undefined4 *)plVar21 = (undefined4)local_98;
                  *(undefined4 *)((longlong)plVar21 + 4) = local_98._4_4_;
                  *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_90._4_4_;
                  iVar14 = iVar33;
                  local_98 = plVar40;
                  uStack_90 = lVar25;
                  goto joined_r0x000140c6ac78;
                }
              }
              bVar42 = iVar34 != 0;
              iVar14 = iVar34 + -1;
              iVar34 = iVar14;
            } while (bVar42);
            if (1 < iVar31) {
              uVar29 = uVar29 - 1;
              local_78 = plVar20[4];
              local_98 = (longlong *)*plVar20;
              uStack_90 = plVar20[1];
              local_88 = plVar20[2];
              uStack_80 = plVar20[3];
              plVar21 = local_98;
              lVar25 = uStack_90;
              plVar20[4] = plVar20[uVar29 * 5 + 4];
              lVar39 = plVar20[uVar29 * 5];
              lVar18 = (plVar20 + uVar29 * 5)[1];
              lVar22 = (plVar20 + uVar29 * 5 + 2)[1];
              plVar20[2] = plVar20[uVar29 * 5 + 2];
              plVar20[3] = lVar22;
              *plVar20 = lVar39;
              plVar20[1] = lVar18;
              plVar20[uVar29 * 5 + 4] = local_78;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              plVar20[uVar29 * 5 + 2] = local_88;
              (plVar20 + uVar29 * 5 + 2)[1] = uStack_80;
              plVar19 = plVar20 + uVar29 * 5;
              *(undefined4 *)plVar19 = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar19 + 4) = local_98._4_4_;
              *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_90._4_4_;
              local_98 = plVar21;
              uStack_90 = lVar25;
              if (iVar31 != 2) {
                do {
                  iVar31 = 0;
                  iVar34 = 1;
                  iVar14 = 0;
                  do {
                    iVar31 = iVar31 + 2;
                    iVar33 = iVar34;
                    if (((longlong)iVar31 < (longlong)uVar29) &&
                       (*(float *)(plVar20 + (longlong)iVar31 * 5 + 1) <
                        *(float *)(plVar20 + (longlong)iVar34 * 5 + 1) ||
                        *(float *)(plVar20 + (longlong)iVar31 * 5 + 1) ==
                        *(float *)(plVar20 + (longlong)iVar34 * 5 + 1))) {
                      iVar33 = iVar31;
                    }
                    if (*(float *)(plVar20 + (longlong)iVar14 * 5 + 1) <
                        *(float *)(plVar20 + (longlong)iVar33 * 5 + 1) ||
                        *(float *)(plVar20 + (longlong)iVar14 * 5 + 1) ==
                        *(float *)(plVar20 + (longlong)iVar33 * 5 + 1)) break;
                    plVar19 = plVar20 + (longlong)iVar14 * 5;
                    plVar21 = plVar20 + (longlong)iVar33 * 5;
                    lVar39 = plVar19[4];
                    lVar18 = *plVar19;
                    lVar22 = plVar19[1];
                    lVar25 = plVar19[2];
                    lVar8 = plVar19[3];
                    plVar19[4] = plVar21[4];
                    lVar9 = *plVar21;
                    lVar10 = plVar21[1];
                    lVar11 = plVar21[3];
                    plVar19[2] = plVar21[2];
                    plVar19[3] = lVar11;
                    *plVar19 = lVar9;
                    plVar19[1] = lVar10;
                    plVar21[4] = lVar39;
                    plVar21[2] = lVar25;
                    plVar21[3] = lVar8;
                    *plVar21 = lVar18;
                    plVar21[1] = lVar22;
                    iVar31 = iVar33 * 2;
                    iVar34 = iVar33 * 2 + 1;
                    iVar14 = iVar33;
                  } while ((longlong)iVar34 < (longlong)uVar29);
                  uVar2 = uVar29 - 1;
                  local_78 = plVar20[4];
                  local_98 = (longlong *)*plVar20;
                  uStack_90 = plVar20[1];
                  local_88 = plVar20[2];
                  uStack_80 = plVar20[3];
                  plVar21 = local_98;
                  lVar25 = uStack_90;
                  plVar20[4] = plVar20[uVar2 * 5 + 4];
                  lVar39 = plVar20[uVar2 * 5];
                  lVar18 = (plVar20 + uVar2 * 5)[1];
                  lVar22 = (plVar20 + uVar2 * 5 + 2)[1];
                  plVar20[2] = plVar20[uVar2 * 5 + 2];
                  plVar20[3] = lVar22;
                  *plVar20 = lVar39;
                  plVar20[1] = lVar18;
                  plVar20[uVar2 * 5 + 4] = local_78;
                  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                  plVar20[uVar2 * 5 + 2] = local_88;
                  (plVar20 + uVar2 * 5 + 2)[1] = uStack_80;
                  plVar19 = plVar20 + uVar2 * 5;
                  *(undefined4 *)plVar19 = (undefined4)local_98;
                  *(undefined4 *)((longlong)plVar19 + 4) = local_98._4_4_;
                  *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_90._4_4_;
                  bVar42 = 2 < uVar29;
                  uVar29 = uVar2;
                  local_98 = plVar21;
                  uStack_90 = lVar25;
                } while (bVar42);
              }
            }
          }
LAB_140c6afd3:
          local_dc8 = local_dc8 + -3;
        } while (&local_398 <= local_dc8);
      }
      if (0 < (int)local_3a0) {
        fVar44 = *(float *)(local_dc0 + 0x28);
        lVar18 = 1;
        lVar39 = 0xc;
        do {
          plVar19 = local_3a8;
          if (local_3a8 == (longlong *)0x0) {
            plVar19 = local_da8;
          }
          if (fVar44 * fVar44 < *(float *)((longlong)plVar19 + lVar39 + -4)) {
            lVar22 = (longlong)plVar19 + lVar39;
            uVar15 = FUN_140b95084(lVar22);
            iVar31 = FUN_145a16fec(param_1 + 0x90,uVar15,lVar22);
            if ((iVar31 == -1) || (iVar27 < 1)) {
              if (iVar37 < 1) goto LAB_140c6b0db;
              iVar37 = iVar37 + -1;
            }
            else {
              iVar27 = iVar27 + -1;
            }
            iVar38 = iVar38 + -1;
            FUN_145a16e66(local_db8,&local_398,lVar22);
            plVar19 = *(longlong **)((longlong)plVar19 + lVar39 + -0xc);
            (**(code **)(*plVar19 + 0x5c8))(plVar19,0);
          }
          else {
            plVar20 = *(longlong **)((longlong)plVar19 + lVar39 + -0xc);
            if (plVar20 != (longlong *)0x0) {
              uVar17 = FUN_140b040c0();
              plVar20 = (longlong *)(**(code **)(*plVar20 + 0x288))(plVar20,uVar17);
              if (plVar20 != (longlong *)0x0) {
                uVar17 = FUN_140b040c0();
                plVar21 = (longlong *)FUN_144718840(plVar20,uVar17);
                if ((plVar21 != (longlong *)0x0 && plVar20 != plVar21) &&
                   (lVar22 = (**(code **)(*plVar21 + 0x20))(plVar21), lVar22 != 0)) {
                  local_398 = (longlong *)0x0;
                  uStack_390 = (longlong *)0x0;
                  cVar13 = FUN_140b068ec(lVar22,2,&DAT_14cb24298,&local_398);
                  FUN_1449db362(&local_398);
                  if (cVar13 != '\0') {
                    lVar22 = (longlong)plVar19 + lVar39;
                    uVar15 = FUN_140b95084(lVar22);
                    iVar31 = FUN_145a16fec(param_1 + 0x90,uVar15,lVar22);
                    if ((iVar31 == -1) || (iVar27 < 1)) {
                      if (iVar37 < 1) goto LAB_140c6b0db;
                      iVar37 = iVar37 + -1;
                    }
                    else {
                      iVar27 = iVar27 + -1;
                    }
                    iVar38 = iVar38 + -1;
                    FUN_145a16e66(local_db8,&local_398,lVar22);
                  }
                }
              }
            }
          }
LAB_140c6b0db:
          if ((int)local_3a0 <= lVar18) break;
          lVar18 = lVar18 + 1;
          lVar39 = lVar39 + 0x28;
        } while (0 < iVar38);
      }
      if (local_3a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_de8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140c6ab4b:
  local_78 = plVar20[4];
  local_98 = (longlong *)*plVar20;
  uStack_90 = plVar20[1];
  local_88 = plVar20[2];
  uStack_80 = plVar20[3];
  plVar12 = local_98;
  lVar25 = uStack_90;
  plVar20[4] = plVar30[-1];
  lVar39 = *plVar35;
  lVar18 = plVar30[-4];
  lVar22 = plVar30[-2];
  plVar20[2] = plVar30[-3];
  plVar20[3] = lVar22;
  *plVar20 = lVar39;
  plVar20[1] = lVar18;
  plVar30[-1] = local_78;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  plVar30[-3] = local_88;
  plVar30[-2] = uStack_80;
  *(undefined4 *)plVar35 = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar30 + -0x24) = local_98._4_4_;
  *(undefined4 *)(plVar30 + -4) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)plVar30 + -0x1c) = uStack_90._4_4_;
  iVar31 = iVar31 + -1;
  plVar30 = plVar30 + -10;
  local_98 = plVar12;
  uStack_90 = lVar25;
  if ((longlong)plVar28 - (longlong)plVar40 < (longlong)plVar21 - (longlong)plVar36) {
    if (plVar26 < plVar19) {
      *local_dc8 = plVar26;
      local_dc8[1] = plVar19;
      *(int *)(local_dc8 + 2) = iVar31;
      local_dc8 = local_dc8 + 3;
    }
    plVar21 = plVar28;
    plVar36 = plVar20;
    if (plVar35 <= plVar20 + 5) goto LAB_140c6afd3;
  }
  else {
    if (plVar20 + 5 < plVar35) {
      *local_dc8 = plVar20;
      local_dc8[1] = plVar30;
      *(int *)(local_dc8 + 2) = iVar31;
      local_dc8 = local_dc8 + 3;
    }
    plVar21 = plVar19;
    plVar20 = plVar26;
    plVar30 = plVar19;
    if (plVar19 <= plVar26) goto LAB_140c6afd3;
  }
  iVar14 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar36) >> 3) * -0x33333333;
  uVar29 = (ulonglong)(iVar14 + 1);
  plVar19 = plVar30;
  plVar40 = plVar36;
  if (iVar31 == 0) goto LAB_140c6ac53;
  goto LAB_140c6aa0a;
}



// FUNCTION 140c6b438 FUN_140c6b438 body=194 status=ok
// SIG undefined FUN_140c6b438(void)

void FUN_140c6b438(void *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_178 [40];
  undefined1 local_150 [156];
  undefined1 local_b4 [156];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (1 < (int)DAT_14cb026c0) {
    plVar1 = (longlong *)(DAT_14cb026b8 + 0x148);
    uVar2 = 1;
    do {
      if (*plVar1 == param_2) {
        memcpy(local_b4,param_1,0x9c);
        FUN_140c6b4fc(&DAT_14cb026a8,uVar2 & 0xffffffff,local_b4);
        goto LAB_140c6b4a1;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x15;
    } while (DAT_14cb026c0 != uVar2);
  }
  memcpy(local_150,param_1,0x9c);
  FUN_14578a928(&DAT_14cb026a8,local_150,param_2);
LAB_140c6b4a1:
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6b4fc FUN_140c6b4fc body=113 status=ok
// SIG undefined FUN_140c6b4fc(void)

void FUN_140c6b4fc(longlong param_1,int param_2,void *param_3)

{
  longlong *plVar1;
  
  if (param_2 != -1) {
    memcpy((void *)((longlong)param_2 * 0xa8 + *(longlong *)(param_1 + 0x10)),param_3,0x9c);
    plVar1 = DAT_14cb01860;
    if (DAT_14cb01860 != (longlong *)0x0) {
      DAT_14cb01860 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = DAT_14cb01868;
    if (DAT_14cb01868 != (longlong *)0x0) {
      DAT_14cb01868 = (longlong *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000140c6b569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}



// FUNCTION 140c6b56d FUN_140c6b56d body=49 status=ok
// SIG undefined FUN_140c6b56d(void)

longlong FUN_140c6b56d(void)

{
  if (DAT_14caa9cd8 == 0) {
    FUN_140f50038(&DAT_14caa9cd8,&PTR_s__Script_AnimGraphRuntime_14a4192f8);
  }
  return DAT_14caa9cd8;
}



// FUNCTION 140c6b59e FUN_140c6b59e body=377 status=ok
// SIG undefined FUN_140c6b59e(void)

void FUN_140c6b59e(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(DAT_14c9f2960 + 4)) {
    lVar3 = *(longlong *)(param_1 + 1000);
    if (*(longlong *)(lVar3 + 0x13ad8) == 0) {
      uVar1 = *(uint *)(lVar3 + 0x1de0);
      if (uVar1 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
          }
        }
      }
      if (*(longlong *)(lVar3 + 0x3108) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(longlong *)(lVar3 + 0x3108) + 0x24);
      }
      FUN_140c6b718(*(undefined8 *)(param_1 + 8),uVar5,iVar8);
      lVar3 = *(longlong *)(param_1 + 1000);
    }
    if ((longlong)*(int *)(param_1 + 0x3f0) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 + lVar3;
      lVar6 = param_1 + 0xe38;
      if (*(longlong *)(param_1 + 0xe58) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xe58);
      }
      bVar2 = false;
      do {
        bVar7 = bVar2;
        iVar8 = -1;
        if (0 < (int)*(uint *)(param_1 + 0x410)) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x408) + uVar9 * 8) == lVar3) {
              iVar8 = (int)uVar9;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (*(uint *)(param_1 + 0x410) != uVar9);
        }
        bVar10 = *(int *)(lVar6 + (longlong)iVar8 * 0x20) == 2;
        lVar3 = lVar3 + 0x13c10;
        bVar2 = (bool)(bVar7 | bVar10);
      } while (lVar3 != lVar4);
      if ((bVar7 || bVar10) && (DAT_14c9f2968 == '\x01')) {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_40 = 1;
        local_38 = 1;
        FUN_1401a4871(param_2,*(undefined8 *)(param_3 + 0x58));
        DAT_14c9f2968 = '\0';
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6b718 FUN_140c6b718 body=511 status=ok
// SIG undefined FUN_140c6b718(void)

ulonglong FUN_140c6b718(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x4b70) != *(int *)(param_1 + 0x4b9c)) {
    uVar1 = (int)param_2 + 1U ^ 0x7ffff;
    uVar7 = uVar1 << 8 ^ 0x9e3779ba - uVar1;
    uVar8 = uVar7 >> 0xd ^ uVar7 + uVar1;
    uVar9 = ~uVar8 >> 0xc ^ (uVar1 - uVar7) + uVar8 + 1;
    uVar1 = uVar9 << 0x10 ^ (uVar8 + 1 + uVar7) - uVar9;
    uVar7 = uVar1 >> 5 ^ (~uVar8 - uVar9) - uVar1;
    uVar8 = uVar7 >> 3 ^ (uVar9 - uVar1) - uVar7;
    uVar1 = uVar8 << 10 ^ (uVar1 - uVar7) - uVar8;
    lVar3 = param_1 + 0x4ba0;
    if (*(longlong *)(param_1 + 0x4ba8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x4ba8);
    }
    uVar9 = *(int *)(param_1 + 0x4bb0) - 1;
    iVar6 = *(int *)(lVar3 + (ulonglong)((uVar1 >> 0xf ^ uVar7 - (uVar8 + uVar1)) & uVar9) * 4);
    if (iVar6 != -1) {
      do {
        puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x4b68) + (longlong)iVar6 * 0x18);
        if (*puVar4 == (param_2 | 0xffffffff00000000)) {
          if (puVar4 != (ulonglong *)0x0) {
            puVar4 = puVar4 + 1;
            goto LAB_140c6b742;
          }
          break;
        }
        iVar6 = (int)puVar4[2];
      } while (iVar6 != -1);
    }
    iVar6 = (int)param_3;
    uVar1 = (uint)(param_3 >> 0xd) & 0x7ffff ^ -iVar6;
    uVar8 = uVar1 << 8 ^ (-0x61c88647 - uVar1) - iVar6;
    uVar10 = uVar8 >> 0xd ^ (iVar6 - uVar1) - uVar8;
    uVar7 = uVar10 >> 0xc ^ (uVar1 - uVar8) - uVar10;
    uVar1 = uVar7 << 0x10 ^ (uVar8 - uVar10) - uVar7;
    uVar8 = uVar1 >> 5 ^ (uVar10 - uVar7) - uVar1;
    uVar7 = uVar8 >> 3 ^ (uVar7 - uVar1) - uVar8;
    uVar1 = uVar7 << 10 ^ (uVar1 - uVar8) - uVar7;
    iVar6 = *(int *)(lVar3 + (ulonglong)(uVar9 & (uVar1 >> 0xf ^ uVar8 - (uVar7 + uVar1))) * 4);
    if (iVar6 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x4b68) + (longlong)iVar6 * 0x18);
        if (*plVar2 == param_3 << 0x20) break;
        iVar6 = (int)plVar2[2];
        plVar2 = (longlong *)0x0;
      } while (iVar6 != -1);
      goto LAB_140c6b729;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_140c6b729:
  puVar5 = (ulonglong *)(plVar2 + 1);
  if (plVar2 == (longlong *)0x0) {
    puVar5 = (ulonglong *)0x0;
  }
  puVar4 = (ulonglong *)(param_1 + 0x4b60);
  if (puVar5 != (ulonglong *)0x0) {
    puVar4 = puVar5;
  }
LAB_140c6b742:
  return *puVar4;
}



// FUNCTION 140c6b918 FUN_140c6b918 body=72 status=ok
// SIG undefined FUN_140c6b918(void)

void FUN_140c6b918(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x730))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140c6b948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x738))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerRestartAutoUse_Validate");
  return;
}



// FUNCTION 140c6b96a FUN_140c6b96a body=142 status=ok
// SIG undefined FUN_140c6b96a(void)

undefined8 * FUN_140c6b96a(undefined8 *param_1)

{
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14a1c2190;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  return param_1;
}



// FUNCTION 140c6b9f8 FUN_140c6b9f8 body=209 status=ok
// SIG undefined FUN_140c6b9f8(void)

undefined8 * FUN_140c6b9f8(undefined8 *param_1)

{
  FUN_140c6baca();
  *param_1 = &PTR_FUN_14a165ec0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0x1ffffffff;
  return param_1;
}



// FUNCTION 140c6baca FUN_140c6baca body=359 status=ok
// SIG undefined FUN_140c6baca(void)

undefined8 * FUN_140c6baca(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a1704f0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0xffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xc0;
  *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffff;
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xc0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14f) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return param_1;
}



// FUNCTION 140c6bc32 FUN_140c6bc32 body=287 status=ok
// SIG undefined FUN_140c6bc32(void)

void FUN_140c6bc32(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14577e4bc();
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x2198));
  *(undefined1 *)(lVar2 + 0x21a0) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x2198));
  local_40 = 0;
  local_38._0_4_ = (uint)local_38 & 0xff000000;
  local_38 = CONCAT44(0xffffffff,(uint)local_38);
  lVar4 = **(longlong **)(lVar2 + 0x21b8);
  if (lVar4 != 0) {
    do {
      lVar3 = *(longlong *)(lVar4 + 8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(lVar4 + 8);
        }
      }
      local_38 = *(undefined8 *)(lVar4 + 0x10);
      local_30 = *(undefined4 *)(lVar4 + 0x18);
      lVar1 = *(longlong *)(lVar2 + 0x21b8);
      *(longlong *)(lVar2 + 0x21b8) = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0xffffffff00000000;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      local_40 = lVar3;
      if (lVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_140c6bd52(&local_40,local_30);
      lVar4 = **(longlong **)(lVar2 + 0x21b8);
    } while (lVar4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6bd52 FUN_140c6bd52 body=929 status=ok
// SIG undefined FUN_140c6bd52(void)

void FUN_140c6bd52(ulonglong *param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_54;
  uint *local_50;
  undefined4 *local_48;
  uint local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14577e4bc();
  SRWLock = (PSRWLOCK)(lVar3 + 0x2198);
  AcquireSRWLockShared(SRWLock);
  if (*(char *)(lVar3 + 0x21a0) == '\0') {
    local_50 = (uint *)*param_1;
    if ((local_50 != (uint *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_48 = (undefined4 *)param_1[1];
    local_40 = param_2;
    FUN_140c6c1fa(lVar3 + 0x21b0);
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    ReleaseSRWLockShared(SRWLock);
    cVar2 = FUN_144a644ea(param_1);
    if (cVar2 != '\0') {
      uVar4 = FUN_144a64b50(param_1);
      lVar5 = FUN_140c6ca38(uVar4);
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      FUN_140c6c26c(lVar5,0);
    }
    AcquireSRWLockExclusive(SRWLock);
    local_54 = FUN_1401220aa(lVar3 + 0x10,param_1);
    local_48 = &local_54;
    uVar1 = (ushort)param_1[1];
    uVar6 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = (uint)(uVar1 >> 0xd) ^ (uVar6 >> 0x10 ^ uVar6) - (uint)uVar1;
    uVar8 = uVar6 << 8 ^ (-0x61c88647 - uVar6) - (uint)uVar1;
    uVar9 = uVar8 >> 0xd ^ (uVar1 - uVar6) - uVar8;
    uVar6 = uVar9 >> 0xc ^ (uVar6 - uVar8) - uVar9;
    uVar8 = uVar6 << 0x10 ^ (uVar8 - uVar9) - uVar6;
    uVar9 = uVar8 >> 5 ^ (uVar9 - uVar6) - uVar8;
    uVar10 = uVar9 >> 3 ^ (uVar6 - uVar8) - uVar9;
    uVar6 = uVar10 << 10 ^ (uVar8 - uVar9) - uVar10;
    uVar6 = uVar6 >> 0xf ^ uVar9 - (uVar10 + uVar6);
    iVar7 = uVar6 - *(byte *)((longlong)param_1 + 10);
    uVar9 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar6;
    uVar8 = uVar9 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 10) - iVar7) - uVar9;
    uVar6 = uVar8 >> 0xc ^ (iVar7 - uVar9) - uVar8;
    uVar9 = uVar6 << 0x10 ^ (uVar9 - uVar8) - uVar6;
    uVar10 = uVar9 >> 5 ^ (uVar8 - uVar6) - uVar9;
    uVar8 = uVar10 >> 3 ^ (uVar6 - uVar9) - uVar10;
    uVar6 = uVar8 << 10 ^ (uVar9 - uVar10) - uVar8;
    local_58 = uVar6 >> 0xf ^ uVar10 - (uVar8 + uVar6);
    local_50 = &local_58;
    FUN_140c6c4b2(lVar3 + 0x20a8,local_34,&local_50,0);
    if ((param_2 & 1) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2018,param_1);
    }
    if ((param_2 & 2) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2028,param_1);
    }
    if ((param_2 & 4) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2038,param_1);
    }
    if ((param_2 & 8) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2048,param_1);
    }
    if ((param_2 & 0x10) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2058,param_1);
    }
    if ((param_2 & 0x20) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2068,param_1);
    }
    if ((param_2 & 0x40) != 0) {
      FUN_140c6c0f4(lVar3 + 0x2078,param_1);
    }
    cVar2 = FUN_140c6c5e8(param_1);
    if (cVar2 != '\0') {
      FUN_140c6c0f4(lVar3 + 0x2088,param_1);
    }
    if (((*param_1 == DAT_14cb420c0) || (*param_1 == DAT_14cb420c8)) || ((short)param_1[1] == 3)) {
      FUN_140c6c0f4(lVar3 + 0x2098,param_1);
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6c0f4 FUN_140c6c0f4 body=120 status=ok
// SIG undefined FUN_140c6c0f4(void)

int FUN_140c6c0f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_140c6c16c();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_140c6c92a(param_1,iVar3);
    }
    lVar1 = *param_1;
    lVar2 = *param_2;
    *(longlong *)(lVar1 + (longlong)iVar3 * 0x10) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(lVar1 + (longlong)iVar3 * 0x10 + 8) = param_2[1];
  }
  return iVar3;
}



// FUNCTION 140c6c16c FUN_140c6c16c body=141 status=ok
// SIG undefined FUN_140c6c16c(void)

int FUN_140c6c16c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    iVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (((*(longlong *)(lVar1 + lVar6) == lVar2) &&
          (*(short *)(lVar1 + 8 + lVar6) == (short)param_2[1])) &&
         (*(char *)(lVar1 + 10 + lVar6) == *(char *)((longlong)param_2 + 10))) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return -1;
}



// FUNCTION 140c6c1fa FUN_140c6c1fa body=113 status=ok
// SIG undefined FUN_140c6c1fa(void)

undefined8 FUN_140c6c1fa(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  lVar1 = *param_2;
  puVar2[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2[2] = param_2[1];
  puVar3 = (undefined8 *)(ulonglong)*(uint *)(param_2 + 2);
  *(uint *)(puVar2 + 3) = *(uint *)(param_2 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    UNLOCK();
    LOCK();
    *puVar3 = puVar2;
    UNLOCK();
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),puVar2 != (undefined8 *)0x0);
}



// FUNCTION 140c6c26c FUN_140c6c26c body=25 status=ok
// SIG undefined FUN_140c6c26c(void)

bool FUN_140c6c26c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c6c286();
  return lVar1 == param_1;
}



// FUNCTION 140c6c286 FUN_140c6c286 body=554 status=ok
// SIG undefined FUN_140c6c286(void)

longlong FUN_140c6c286(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x18);
    lVar2 = DAT_14cb41330;
    if (uVar1 != DAT_14cb43d30) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      lVar2 = DAT_14cb41338;
      if ((((((uVar1 != DAT_14c892c18) &&
             (uVar1 = *(ulonglong *)(param_1 + 0x18), uVar1 != DAT_14c892cac)) &&
            (lVar2 = DAT_14cb41340, uVar1 != DAT_14c892c2c)) &&
           ((uVar1 != DAT_14c892c64 && (lVar2 = DAT_14cb41348, uVar1 != DAT_14c892c24)))) &&
          ((uVar1 != DAT_14c892c9c &&
           ((lVar2 = DAT_14cb41350, uVar1 != DAT_14c892c54 && (uVar1 != DAT_14c892c7c)))))) &&
         (lVar2 = DAT_14cb413d0, uVar1 != DAT_14cb43d38)) {
        if (DAT_14cb3a798 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_145a7874c;
          local_48 = &LAB_14811919b;
          local_50 = FUN_14646e15f;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000001;
          local_70 = 8;
          local_78 = 0x38;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterface",&DAT_14cb3a798,&DAT_14811919a);
        }
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cb3a798 + 0x38)) {
          bVar3 = false;
        }
        else {
          bVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14cb3a798 + 0x38) * 8) == DAT_14cb3a798 + 0x30;
        }
        lVar2 = param_1;
        if ((param_2 != '\0') && (!bVar3)) {
          lVar2 = FUN_140c6ca38(param_1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140c6c4b2 FUN_140c6c4b2 body=308 status=ok
// SIG undefined FUN_140c6c4b2(void)

undefined4 *
FUN_140c6c4b2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
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
  FUN_14028411c(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140284086(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
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
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1402843ec(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6c5e8 FUN_140c6c5e8 body=833 status=ok
// SIG undefined FUN_140c6c5e8(void)

ulonglong FUN_140c6c5e8(ulonglong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((short)param_1[1] == 3) {
    uVar8 = DAT_14cb420c0;
    if (DAT_14cb420c0 == 0) goto LAB_140c6c74a;
LAB_140c6c65f:
    if (DAT_14c948fa0 == 0) {
      local_38 = &DAT_1427db2a2;
      lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar3;
      FUN_1446f470e(local_30,L"ScriptStruct",1);
      local_48 = &LAB_1468915ce;
      local_50 = FUN_1427dc742;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x10;
      local_70 = 0x10000020;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar3);
      DAT_14c948fa0 = lVar3;
      uVar4 = FUN_1446f8646();
      lVar3 = DAT_14c948fa0;
      uVar5 = FUN_1449e2fb2();
      local_78 = L"ScriptStruct";
      FUN_14574b446(uVar5,lVar3,uVar4,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30)) goto LAB_140c6c74a;
  }
  else {
    uVar8 = *param_1;
    if (uVar8 != 0) {
      if (DAT_14c948f88 == 0) {
        local_38 = &DAT_1427db2a2;
        lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar3;
        FUN_1446f470e(local_30,L"Struct",1);
        local_48 = &LAB_146891313;
        local_50 = FUN_146272f63;
        local_60 = L"Engine";
        local_58 = 199;
        local_68 = 8;
        local_70 = 0x10000020;
        local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
        local_40 = &local_38;
        FUN_14574b4b2(lVar3);
        DAT_14c948f88 = lVar3;
        uVar4 = FUN_1446f8646();
        lVar3 = DAT_14c948f88;
        uVar5 = FUN_1400163b0();
        local_78 = L"Struct";
        FUN_14574b446(uVar5,lVar3,uVar4,L"/Script/CoreUObject");
        uVar8 = *param_1;
        if (uVar8 == 0) goto LAB_140c6c74a;
      }
      if ((((DAT_14c948f88 != 0) && (lVar3 = *(longlong *)(uVar8 + 0x10), lVar3 != 0)) &&
          (*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
          == DAT_14c948f88 + 0x30)) goto LAB_140c6c65f;
    }
LAB_140c6c74a:
    uVar8 = 0;
  }
  if (DAT_14cb3ee08 != DAT_14cb3ee34) {
    uVar1 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    puVar7 = &DAT_14cb3ee38;
    if (DAT_14cb3ee40 != (undefined *)0x0) {
      puVar7 = DAT_14cb3ee40;
    }
    uVar2 = (ulonglong)(DAT_14cb3ee48 - 1U & (uVar1 >> 0x10 ^ uVar1));
    iVar6 = *(int *)(puVar7 + uVar2 * 4);
    if (iVar6 != -1) {
      do {
        bVar9 = *(ulonglong *)(DAT_14cb3ee00 + (longlong)iVar6 * 0x10) == uVar8;
        uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar9);
        if (bVar9) break;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + DAT_14cb3ee00 + 8);
      } while (iVar6 != -1);
      goto LAB_140c6c715;
    }
  }
  uVar2 = 0;
LAB_140c6c715:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140c6c92a FUN_140c6c92a body=269 status=ok
// SIG undefined FUN_140c6c92a(void)

void FUN_140c6c92a(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c6ca38 FUN_140c6ca38 body=4623 status=ok
// SIG undefined FUN_140c6ca38(void)

longlong * FUN_140c6ca38(longlong *param_1)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  code *local_80;
  code *local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb43da0);
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)((longlong)param_1 + 0xc);
    uVar5 = (ulonglong)uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar10 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar10 = *(uint *)(lVar16 + 0x10);
      bVar18 = uVar10 == 0;
      if (bVar18) {
        *(uint *)(lVar16 + 0x10) = uVar6;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar18) {
        uVar10 = uVar6;
      }
    }
  }
  local_78 = (code *)(uVar5 | (ulonglong)uVar10 << 0x20);
  iVar2 = FUN_141494e8a(uVar10 ^ (uint)uVar5);
  lVar16 = (longlong)iVar2 * 0x18 + DAT_14cb43da8;
  if (lVar16 == 0 || iVar2 == -1) {
LAB_140c6cae9:
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb43da0);
  }
  else {
    if ((((*(int *)(lVar16 + 0xc) == 0) || (uVar10 = *(uint *)(lVar16 + 8), (int)uVar10 < 0)) ||
        (DAT_14c9647dc <= (int)uVar10)) ||
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar16 + 0xc))) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
      LOCK();
      DAT_14cb43df8 = 1;
      UNLOCK();
      goto LAB_140c6cae9;
    }
    plVar8 = (longlong *)*plVar8;
    LOCK();
    DAT_14cb43df8 = 1;
    UNLOCK();
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb43da0);
    if (plVar8 != (longlong *)0x0) goto LAB_140c6cc65;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cb43da0);
  if (param_1 == (longlong *)0x0) {
    uVar6 = 0;
    uVar10 = 0;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar10 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar10 = *(uint *)(lVar16 + 0x10);
      bVar18 = uVar10 == 0;
      if (bVar18) {
        *(uint *)(lVar16 + 0x10) = uVar12;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar18) {
        uVar10 = uVar12;
      }
    }
  }
  local_78 = (code *)CONCAT44(uVar10,uVar6);
  iVar2 = FUN_141494e8a(uVar10 ^ uVar6,&local_78);
  if ((iVar2 == -1) || (lVar16 = (longlong)iVar2 * 0x18 + DAT_14cb43da8, lVar16 == 0)) {
LAB_140c6ccb0:
    cVar1 = FUN_14647b67e(param_1);
    plVar8 = param_1;
    if (cVar1 != '\0') {
      if (DAT_14cb43b10 == (longlong *)0x0) {
        uVar3 = FUN_140aec9fd();
        DAT_14cb43b10 = (longlong *)FUN_140002ddd(FUN_14647ad65,uVar3,L"NiagaraDouble");
      }
      if (DAT_14cb43b10 == param_1) {
        plVar8 = DAT_14cb43a20;
        if (DAT_14cb43a20 == (longlong *)0x0) {
          uVar3 = FUN_140aec9fd();
          plVar8 = (longlong *)FUN_140002ddd(FUN_14647a789,uVar3,L"NiagaraFloat");
          DAT_14cb43a20 = plVar8;
        }
      }
      else {
        FUN_1408c4b6c();
        plVar8 = DAT_14cb43d40;
        if ((DAT_14cb43d40 != (longlong *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb43d40);
        }
        plVar4 = DAT_14cb420c0;
        if (DAT_14cb43d48 != 3) {
          if (plVar8 == (longlong *)0x0) {
LAB_140c6d4c7:
            plVar4 = (longlong *)0x0;
          }
          else {
            if (DAT_14c948f88 == 0) {
              local_50 = (code *)&DAT_1427db2a2;
              lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c948f88 = lVar16;
              FUN_1446f470e(&local_60,L"Struct",1);
              local_a8 = &LAB_146891313;
              local_b0 = FUN_146272f63;
              local_c0 = L"Engine";
              local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
              local_c8 = 8;
              local_d0 = CONCAT44(local_d0._4_4_,0x10000020);
              local_d8._0_4_ = 8;
              local_a0 = &local_50;
              FUN_14574b4b2(lVar16);
              DAT_14c948f88 = lVar16;
              if (DAT_14c927740 == 0) {
                local_78 = FUN_1449e2820;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a8 = &LAB_146856450;
                local_b0 = FUN_1427b121c;
                local_b8 = L"Engine";
                local_c0 = (wchar_t *)0x0;
                local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
                local_d0 = CONCAT44(local_d0._4_4_,8);
                local_d8._0_4_ = 0x28;
                local_a0 = &local_78;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              }
              lVar17 = DAT_14c948f88;
              lVar16 = DAT_14c927740;
              uVar3 = FUN_1400163b0();
              local_d8 = L"Struct";
              FUN_14574b446(uVar3,lVar17,lVar16,L"/Script/CoreUObject");
            }
            plVar4 = (longlong *)0x0;
            if ((DAT_14c948f88 != 0) && (lVar16 = plVar8[2], lVar16 != 0)) {
              if (*(int *)(lVar16 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_140c6d4c7;
              plVar4 = (longlong *)0x0;
              if (*(longlong *)
                   (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) ==
                  DAT_14c948f88 + 0x30) {
                plVar4 = plVar8;
              }
            }
          }
        }
        plVar8 = DAT_14cb41338;
        if (plVar4 != param_1) {
          FUN_1408c4b6c();
          plVar8 = DAT_14cb43d50;
          if ((DAT_14cb43d50 != (longlong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb43d50);
          }
          plVar4 = DAT_14cb420c0;
          if (DAT_14cb43d58 != 3) {
            if (plVar8 == (longlong *)0x0) {
LAB_140c6d4da:
              plVar4 = (longlong *)0x0;
            }
            else {
              if (DAT_14c948f88 == 0) {
                local_50 = (code *)&DAT_1427db2a2;
                lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = lVar16;
                FUN_1446f470e(&local_60,L"Struct",1);
                local_a8 = &LAB_146891313;
                local_b0 = FUN_146272f63;
                local_c0 = L"Engine";
                local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
                local_c8 = 8;
                local_d0 = CONCAT44(local_d0._4_4_,0x10000020);
                local_d8._0_4_ = 8;
                local_a0 = &local_50;
                FUN_14574b4b2(lVar16);
                DAT_14c948f88 = lVar16;
                if (DAT_14c927740 == 0) {
                  local_78 = FUN_1449e2820;
                  local_90 = FUN_14081d0ea;
                  local_98 = FUN_14081d0ea;
                  local_a8 = &LAB_146856450;
                  local_b0 = FUN_1427b121c;
                  local_b8 = L"Engine";
                  local_c0 = (wchar_t *)0x0;
                  local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
                  local_d0 = CONCAT44(local_d0._4_4_,8);
                  local_d8._0_4_ = 0x28;
                  local_a0 = &local_78;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                }
                lVar17 = DAT_14c948f88;
                lVar16 = DAT_14c927740;
                uVar3 = FUN_1400163b0();
                local_d8 = L"Struct";
                FUN_14574b446(uVar3,lVar17,lVar16,L"/Script/CoreUObject");
              }
              plVar4 = (longlong *)0x0;
              if ((DAT_14c948f88 != 0) && (lVar16 = plVar8[2], lVar16 != 0)) {
                if (*(int *)(lVar16 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_140c6d4da;
                plVar4 = (longlong *)0x0;
                if (*(longlong *)
                     (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
                    == DAT_14c948f88 + 0x30) {
                  plVar4 = plVar8;
                }
              }
            }
          }
          plVar8 = DAT_14cb41340;
          if (plVar4 != param_1) {
            FUN_1408c4b6c();
            plVar8 = DAT_14cb43d60;
            if ((DAT_14cb43d60 != (longlong *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(DAT_14cb43d60);
            }
            plVar4 = DAT_14cb420c0;
            if (DAT_14cb43d68 != 3) {
              if (plVar8 == (longlong *)0x0) {
LAB_140c6d4ed:
                plVar4 = (longlong *)0x0;
              }
              else {
                if (DAT_14c948f88 == 0) {
                  local_50 = (code *)&DAT_1427db2a2;
                  lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c948f88 = lVar16;
                  FUN_1446f470e(&local_60,L"Struct",1);
                  local_a8 = &LAB_146891313;
                  local_b0 = FUN_146272f63;
                  local_c0 = L"Engine";
                  local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
                  local_c8 = 8;
                  local_d0 = CONCAT44(local_d0._4_4_,0x10000020);
                  local_d8._0_4_ = 8;
                  local_a0 = &local_50;
                  FUN_14574b4b2(lVar16);
                  DAT_14c948f88 = lVar16;
                  if (DAT_14c927740 == 0) {
                    local_78 = FUN_1449e2820;
                    local_90 = FUN_14081d0ea;
                    local_98 = FUN_14081d0ea;
                    local_a8 = &LAB_146856450;
                    local_b0 = FUN_1427b121c;
                    local_b8 = L"Engine";
                    local_c0 = (wchar_t *)0x0;
                    local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
                    local_d0 = CONCAT44(local_d0._4_4_,8);
                    local_d8._0_4_ = 0x28;
                    local_a0 = &local_78;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  }
                  lVar17 = DAT_14c948f88;
                  lVar16 = DAT_14c927740;
                  uVar3 = FUN_1400163b0();
                  local_d8 = L"Struct";
                  FUN_14574b446(uVar3,lVar17,lVar16,L"/Script/CoreUObject");
                }
                plVar4 = (longlong *)0x0;
                if ((DAT_14c948f88 != 0) && (lVar16 = plVar8[2], lVar16 != 0)) {
                  if (*(int *)(lVar16 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_140c6d4ed;
                  plVar4 = (longlong *)0x0;
                  if (*(longlong *)
                       (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
                      == DAT_14c948f88 + 0x30) {
                    plVar4 = plVar8;
                  }
                }
              }
            }
            plVar8 = DAT_14cb41348;
            if (plVar4 != param_1) {
              FUN_1408c4b6c();
              plVar8 = DAT_14cb43d70;
              if ((DAT_14cb43d70 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(DAT_14cb43d70);
              }
              plVar4 = DAT_14cb420c0;
              if (DAT_14cb43d78 != 3) {
                if (plVar8 == (longlong *)0x0) {
LAB_140c6d500:
                  plVar4 = (longlong *)0x0;
                }
                else {
                  if (DAT_14c948f88 == 0) {
                    local_50 = (code *)&DAT_1427db2a2;
                    lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                    DAT_14c948f88 = lVar16;
                    FUN_1446f470e(&local_60,L"Struct",1);
                    local_a8 = &LAB_146891313;
                    local_b0 = FUN_146272f63;
                    local_c0 = L"Engine";
                    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
                    local_c8 = 8;
                    local_d0 = CONCAT44(local_d0._4_4_,0x10000020);
                    local_d8._0_4_ = 8;
                    local_a0 = &local_50;
                    FUN_14574b4b2(lVar16);
                    DAT_14c948f88 = lVar16;
                    if (DAT_14c927740 == 0) {
                      local_78 = FUN_1449e2820;
                      local_90 = FUN_14081d0ea;
                      local_98 = FUN_14081d0ea;
                      local_a8 = &LAB_146856450;
                      local_b0 = FUN_1427b121c;
                      local_b8 = L"Engine";
                      local_c0 = (wchar_t *)0x0;
                      local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
                      local_d0 = CONCAT44(local_d0._4_4_,8);
                      local_d8._0_4_ = 0x28;
                      local_a0 = &local_78;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                    }
                    lVar17 = DAT_14c948f88;
                    lVar16 = DAT_14c927740;
                    uVar3 = FUN_1400163b0();
                    local_d8 = L"Struct";
                    FUN_14574b446(uVar3,lVar17,lVar16,L"/Script/CoreUObject");
                  }
                  plVar4 = (longlong *)0x0;
                  if ((DAT_14c948f88 != 0) && (lVar16 = plVar8[2], lVar16 != 0)) {
                    if (*(int *)(lVar16 + 0x38) < *(int *)(DAT_14c948f88 + 0x38))
                    goto LAB_140c6d500;
                    plVar4 = (longlong *)0x0;
                    if (*(longlong *)
                         (*(longlong *)(lVar16 + 0x30) +
                         (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) == DAT_14c948f88 + 0x30) {
                      plVar4 = plVar8;
                    }
                  }
                }
              }
              plVar8 = DAT_14cb41350;
              if (plVar4 != param_1) {
                local_78 = (code *)param_1[3];
                FUN_1400021e4(&local_78,&local_60);
                _Src = DAT_14cb43d90;
                local_70 = (int)uStack_58;
                if ((int)uStack_58 < 2) {
                  local_78 = (code *)0x0;
                  lVar16 = (longlong)DAT_14cb43d98;
                  local_70 = DAT_14cb43d98;
                  if (lVar16 == 0) {
                    iStack_6c = 0;
                  }
                  else {
                    FUN_1446dd670(&local_78,DAT_14cb43d98,0);
                    memcpy(local_78,_Src,lVar16 * 2);
                  }
                }
                else {
                  iVar2 = DAT_14cb43d98 + -1;
                  if (DAT_14cb43d98 == 0) {
                    iVar2 = 0;
                  }
                  local_78 = local_60;
                  iStack_6c = uStack_58._4_4_;
                  local_60 = (code *)0x0;
                  uStack_58 = 0;
                  if (iVar2 + local_70 < local_70) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4((longlong)iVar2);
                  }
                  if (iStack_6c < iVar2 + local_70) {
                    FUN_1446f8c06(&local_78);
                  }
                  FUN_1400020e8(&local_78,DAT_14cb43d90,iVar2);
                }
                iVar2 = local_70 + -1;
                if (local_70 == 0) {
                  iVar2 = 0;
                }
                FUN_1446f82e2(&local_50,iVar2,local_78,1);
                local_80 = local_50;
                if (local_78 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_60 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (DAT_14cb43dd0 == 0) {
                  uVar15 = 1;
                  uVar5 = 0;
                  iVar2 = 0;
                  iVar11 = 0;
                }
                else {
                  puVar13 = &DAT_14cb43db8;
                  if (DAT_14cb43dc8 != (uint *)0x0) {
                    puVar13 = DAT_14cb43dc8;
                  }
                  uVar10 = *puVar13;
                  if (uVar10 == 0) {
                    iVar2 = DAT_14cb43dd0 + 0x1e;
                    if (-1 < DAT_14cb43dd0 + -1) {
                      iVar2 = DAT_14cb43dd0 + -1;
                    }
                    uVar5 = 0;
                    uVar14 = (ulonglong)(uint)(iVar2 >> 5);
                    if (iVar2 >> 5 < 1) {
                      uVar14 = uVar5;
                    }
                    iVar2 = 0;
                    do {
                      if (uVar14 == uVar5) goto LAB_140c6d2c7;
                      iVar2 = iVar2 + 0x20;
                      uVar10 = puVar13[uVar5 + 1];
                      uVar5 = uVar5 + 1;
                    } while (uVar10 == 0);
                  }
                  else {
                    uVar5 = 0;
                    iVar2 = 0;
                  }
                  uVar15 = (ulonglong)(-uVar10 & uVar10);
                  uVar14 = uVar15 * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  iVar11 = (iVar2 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                  if (DAT_14cb43dd0 <= iVar11) {
                    iVar11 = DAT_14cb43dd0;
                  }
                }
                if (iVar11 < DAT_14cb43dd0) {
                  local_84 = DAT_14c9647dc;
                  puVar13 = &DAT_14cb43db8;
                  if (DAT_14cb43dc8 != (uint *)0x0) {
                    puVar13 = DAT_14cb43dc8;
                  }
                  iVar9 = DAT_14cb43dd0 + 0x1e;
                  if (-1 < DAT_14cb43dd0 + -1) {
                    iVar9 = DAT_14cb43dd0 + -1;
                  }
                  iVar9 = iVar9 >> 5;
                  uVar10 = 0xffffffff;
                  do {
                    uVar14 = *(ulonglong *)(DAT_14cb43da8 + 8 + (longlong)iVar11 * 0x18);
                    if ((((uVar14 >> 0x20 != 0) && (uVar6 = (uint)uVar14, -1 < (int)uVar6)) &&
                        ((int)uVar6 < DAT_14c9647dc)) &&
                       (((plVar8 = (longlong *)
                                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                                   *(longlong *)
                                    (DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
                         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(uVar14 >> 0x20))) &&
                        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
                      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                        lVar16 = *plVar8;
                      }
                      else {
                        lVar16 = 0;
                      }
                      if (*(code **)(lVar16 + 0x18) == local_80) {
                        if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                          plVar8 = (longlong *)*plVar8;
                          FUN_1482074da(&DAT_14cb43da8);
                          LOCK();
                          DAT_14cb43df8 = 1;
                          UNLOCK();
                          if (plVar8 != (longlong *)0x0) goto LAB_140c6d323;
                        }
                        else {
                          FUN_1482074da(&DAT_14cb43da8);
                          LOCK();
                          DAT_14cb43df8 = 1;
                          UNLOCK();
                        }
                        break;
                      }
                    }
                    uVar10 = uVar10 & ~(uint)uVar15;
                    iVar11 = (int)uVar5;
                    lVar16 = (longlong)iVar11;
                    uVar6 = puVar13[lVar16] & uVar10;
                    if (uVar6 == 0) {
                      iVar7 = iVar9;
                      if (iVar9 < iVar11) {
                        iVar7 = iVar11;
                      }
                      if (iVar9 <= iVar11) break;
                      lVar17 = 0;
                      while( true ) {
                        iVar2 = iVar2 + 0x20;
                        uVar6 = puVar13[lVar16 + lVar17 + 1];
                        if (uVar6 != 0) break;
                        lVar17 = lVar17 + 1;
                        if (iVar7 - lVar16 == lVar17) goto LAB_140c6d2c7;
                      }
                      uVar5 = (ulonglong)(iVar11 + (int)lVar17 + 1);
                      uVar10 = 0xffffffff;
                    }
                    uVar15 = (ulonglong)(-uVar6 & uVar6);
                    uVar14 = uVar15 * 2 + 1;
                    lVar16 = 0x3f;
                    if (uVar14 != 0) {
                      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    iVar11 = (iVar2 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                  } while (iVar11 < DAT_14cb43dd0);
                }
LAB_140c6d2c7:
                local_d0 = 0;
                local_d8 = (wchar_t *)((ulonglong)local_d8 & 0xffffffffffffff00);
                lVar16 = 0;
                plVar8 = (longlong *)FUN_145a2e582(DAT_14c951640,local_80,0,0);
                uVar10 = *(uint *)((longlong)plVar8 + 0xc);
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                FUN_1447f71cc(lVar16,0x40000000);
LAB_140c6d323:
                FUN_1414577f3(&local_78,plVar8,param_1);
                FUN_14183ade4(&local_60,param_1);
                FUN_145cebe3c(&local_60,&local_78);
                (**(code **)(*plVar8 + 0x2a8))(plVar8);
                (**(code **)(*plVar8 + 0x358))(plVar8);
                FUN_140010366(plVar8,1);
                if (CONCAT44(iStack_6c,local_70) != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
        }
      }
    }
    if (param_1 == (longlong *)0x0) {
      local_60._0_4_ = 0;
      iVar2 = 0;
      uVar10 = (uint)local_60;
    }
    else {
      uVar10 = *(uint *)((longlong)param_1 + 0xc);
      local_60 = (code *)(ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar2 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar2 = *(int *)(lVar16 + 0x10);
        bVar18 = iVar2 == 0;
        if (bVar18) {
          *(int *)(lVar16 + 0x10) = iVar11;
          iVar2 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_60;
        if (bVar18) {
          iVar2 = iVar11;
        }
      }
    }
    local_60._0_4_ = uVar10;
    local_78 = (code *)&local_60;
    local_60 = (code *)CONCAT44(iVar2,(uint)local_60);
    FUN_145abd2ee(&local_50);
    lVar16 = DAT_14cb43da8 + (longlong)(int)local_50 * 0x18;
    puVar13 = (uint *)(lVar16 + 8);
    if (plVar8 == (longlong *)0x0) {
      *puVar13 = 0;
      iVar2 = 0;
    }
    else {
      uVar10 = *(uint *)((longlong)plVar8 + 0xc);
      *puVar13 = uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar2 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar2 = *(int *)(lVar17 + 0x10);
        bVar18 = iVar2 == 0;
        if (bVar18) {
          *(int *)(lVar17 + 0x10) = iVar11;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar2 = iVar11;
        }
      }
    }
    *(int *)(lVar16 + 0xc) = iVar2;
  }
  else {
    if ((*(int *)(lVar16 + 0xc) == 0) ||
       ((((uVar10 = *(uint *)(lVar16 + 8), (int)uVar10 < 0 || (DAT_14c9647dc <= (int)uVar10)) ||
         (plVar8 = (longlong *)
                   ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0)) ||
        (((int)plVar8[2] != *(int *)(lVar16 + 0xc) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
       )) {
      LOCK();
      DAT_14cb43df8 = 1;
      UNLOCK();
      goto LAB_140c6ccb0;
    }
    plVar8 = (longlong *)*plVar8;
    LOCK();
    DAT_14cb43df8 = 1;
    UNLOCK();
    if (plVar8 == (longlong *)0x0) goto LAB_140c6ccb0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cb43da0);
LAB_140c6cc65:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6dc48 FUN_140c6dc48 body=5041 status=ok
// SIG undefined FUN_140c6dc48(void)

/* WARNING: Removing unreachable block (ram,0x000140c6efbe) */
/* WARNING: Removing unreachable block (ram,0x000140c6efc6) */

void FUN_140c6dc48(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 uVar16;
  PSRWLOCK SRWLock;
  ulonglong uVar17;
  ushort uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ushort uVar23;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_108 [40];
  longlong local_e0;
  PSRWLOCK local_d8;
  float local_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(int *)(param_1 + 0x208) == 0) || ((*(byte *)(param_1 + 0x8c) & 0x80) == 0)) ||
     (lVar7 = *(longlong *)(param_1 + 0x288), lVar7 == 0)) goto LAB_140c6dde2;
  lVar4 = param_1 + 0x208;
  FUN_1448d5e3c(&local_d0,lVar4);
  lVar11 = *(longlong *)(CONCAT44(uStack_cc,local_d0) + 0x3e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0xc0));
  plVar8 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x2b0) != *(int *)(lVar11 + 0xb8)) {
    *(int *)(param_1 + 0x2b0) = *(int *)(lVar11 + 0xb8);
    if (*(int *)(lVar7 + 0xc4) != *(int *)(lVar11 + 0xc)) {
      *(undefined4 *)(lVar7 + 0xc0) = *(undefined4 *)(lVar11 + 8);
      *(undefined4 *)(lVar7 + 0xc4) = *(undefined4 *)(lVar11 + 0xc);
      puVar9 = *(ushort **)(lVar7 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
    if (*(int *)(lVar7 + 0xcc) != *(int *)(lVar11 + 0x34)) {
      *(undefined1 *)(lVar7 + 200) = *(undefined1 *)(lVar11 + 0x30);
      *(undefined4 *)(lVar7 + 0xcc) = *(undefined4 *)(lVar11 + 0x34);
      puVar9 = *(ushort **)(lVar7 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0xc0));
  FUN_1448d5e3c(&local_d0,lVar4);
  plVar8 = *(longlong **)(CONCAT44(uStack_cc,local_d0) + 0x520);
  SRWLock = (PSRWLOCK)(plVar8 + 0x2d);
  AcquireSRWLockShared(SRWLock);
  plVar1 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (*(int *)(lVar7 + 0xac) != (int)plVar8[0x2c]) {
    *(int *)(lVar7 + 0xac) = (int)plVar8[0x2c];
    puVar9 = *(ushort **)(lVar7 + 0x80);
    if (puVar9 != (ushort *)0x0) {
      *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
    }
    if ((int)plVar8[1] < 1) {
      iVar12 = *(int *)(lVar7 + 0xd4);
      if ((*(int *)(lVar7 + 0xd0) != 0) || (bVar25 = iVar12 == 0, iVar12 = 0, bVar25)) {
        *(undefined4 *)(lVar7 + 0xd0) = 0;
        *(int *)(lVar7 + 0xd4) = iVar12 + 1;
      }
      iVar12 = *(int *)(lVar7 + 0xdc);
      if ((*(int *)(lVar7 + 0xd8) != 0) || (bVar25 = iVar12 == 0, iVar12 = 0, bVar25)) {
        *(undefined4 *)(lVar7 + 0xd8) = 0;
        *(int *)(lVar7 + 0xdc) = iVar12 + 1;
      }
    }
    else {
      lVar11 = *plVar8;
      iVar12 = *(int *)(lVar7 + 0xd4);
      if (*(int *)(lVar7 + 0xd0) == (int)*(float *)(lVar11 + 0x28)) {
        if (iVar12 == 0) {
          iVar12 = 0;
          goto LAB_140c6ef30;
        }
      }
      else {
LAB_140c6ef30:
        *(int *)(lVar7 + 0xd0) = (int)*(float *)(lVar11 + 0x28);
        *(int *)(lVar7 + 0xd4) = iVar12 + 1;
        lVar11 = *plVar8;
      }
      fVar26 = *(float *)(lVar11 + 0x38);
      iVar12 = *(int *)(lVar7 + 0xdc);
      if (*(int *)(lVar7 + 0xd8) == (int)fVar26) {
        if (iVar12 == 0) {
          iVar12 = 0;
          goto LAB_140c6ef03;
        }
      }
      else {
LAB_140c6ef03:
        *(int *)(lVar7 + 0xd8) = (int)fVar26;
        *(int *)(lVar7 + 0xdc) = iVar12 + 1;
        lVar11 = *plVar8;
        fVar26 = *(float *)(lVar11 + 0x38);
      }
      fVar26 = (*(float *)(lVar11 + 0x28) / fVar26) * 100.0;
      iVar12 = *(int *)(lVar7 + 0xe4);
      if ((fVar26 != *(float *)(lVar7 + 0xe0)) || (NAN(fVar26) || NAN(*(float *)(lVar7 + 0xe0)))) {
LAB_140c6ea6f:
        *(float *)(lVar7 + 0xe0) = fVar26;
        *(int *)(lVar7 + 0xe4) = iVar12 + 1;
        lVar11 = *plVar8;
      }
      else if (iVar12 == 0) {
        iVar12 = 0;
        goto LAB_140c6ea6f;
      }
      fVar26 = *(float *)(lVar11 + 0x40) * 100.0;
      iVar12 = *(int *)(lVar7 + 0x184);
      if ((fVar26 != *(float *)(lVar7 + 0x180)) || (NAN(fVar26) || NAN(*(float *)(lVar7 + 0x180))))
      {
LAB_140c6eb24:
        *(float *)(lVar7 + 0x180) = fVar26;
        *(int *)(lVar7 + 0x184) = iVar12 + 1;
      }
      else if (iVar12 == 0) {
        iVar12 = 0;
        goto LAB_140c6eb24;
      }
      if (*(int *)(lVar7 + 0x1ac) != (int)plVar8[0x28]) {
        *(undefined1 *)(lVar7 + 0x1a8) = *(undefined1 *)((longlong)plVar8 + 0x13c);
        *(int *)(lVar7 + 0x1ac) = (int)plVar8[0x28];
      }
    }
    puVar14 = &DAT_14cbda718;
    if (*(char *)((longlong)plVar8 + 0x144) != '\0') {
      puVar14 = &DAT_14cbda708;
    }
    FUN_1449a0272(lVar7 + 0x1d8,puVar14);
    if (((char)plVar8[0x21] != '\x01') || (*(float *)(plVar8 + 0x1f) <= 0.0)) {
      iVar12 = *(int *)(lVar7 + 0x19c);
      if (*(char *)(lVar7 + 0x198) == '\0') {
        if (iVar12 == 0) {
          iVar12 = 0;
          goto LAB_140c6eafe;
        }
      }
      else {
LAB_140c6eafe:
        *(undefined1 *)(lVar7 + 0x198) = 0;
        *(int *)(lVar7 + 0x19c) = iVar12 + 1;
      }
      fVar26 = *(float *)(lVar7 + 0xe0);
      iVar12 = *(int *)(lVar7 + 0xec);
      if ((fVar26 == *(float *)(lVar7 + 0xe8)) && (!NAN(fVar26) && !NAN(*(float *)(lVar7 + 0xe8))))
      {
        if (iVar12 != 0) goto LAB_140c6dfbf;
        iVar12 = 0;
      }
      *(float *)(lVar7 + 0xe8) = fVar26;
LAB_140c6eaed:
      *(int *)(lVar7 + 0xec) = iVar12 + 1;
    }
    else if (*(char *)(lVar7 + 0x198) == '\0') {
      *(undefined1 *)(lVar7 + 0x198) = 1;
      *(int *)(lVar7 + 0x19c) = *(int *)(lVar7 + 0x19c) + 1;
      fVar26 = *(float *)(lVar7 + 0xe8);
      iVar19 = (int)((*(float *)(plVar8 + 0x20) / (float)*(int *)(lVar7 + 0xd8)) * 100.0 + fVar26);
      iVar10 = (int)(100.0 - *(float *)(lVar7 + 0x180));
      iVar12 = *(int *)(lVar7 + 0xec);
      if (iVar19 <= iVar10) {
        iVar10 = iVar19;
      }
      fVar27 = (float)iVar10;
      if ((fVar26 == fVar27) && (!NAN(fVar26) && !NAN(fVar27))) {
        if (iVar12 != 0) goto LAB_140c6dfbf;
        iVar12 = 0;
      }
      *(float *)(lVar7 + 0xe8) = fVar27;
      goto LAB_140c6eaed;
    }
LAB_140c6dfbf:
    if ((int)plVar8[1] < 2) {
      iVar12 = *(int *)(lVar7 + 0xf4);
      if ((*(int *)(lVar7 + 0xf0) != 0) || (bVar25 = iVar12 == 0, iVar12 = 0, bVar25)) {
        *(undefined4 *)(lVar7 + 0xf0) = 0;
        *(int *)(lVar7 + 0xf4) = iVar12 + 1;
      }
      iVar12 = *(int *)(lVar7 + 0xfc);
      if ((*(int *)(lVar7 + 0xf8) != 0) || (bVar25 = iVar12 == 0, iVar12 = 0, bVar25)) {
        *(undefined4 *)(lVar7 + 0xf8) = 0;
        *(int *)(lVar7 + 0xfc) = iVar12 + 1;
      }
      *(undefined1 *)(param_1 + 0x2ad) = 0;
    }
    else {
      lVar11 = *plVar8;
      fVar26 = *(float *)(lVar11 + 0x80);
      local_d0 = 0.0;
      fVar27 = modff(fVar26,&local_d0);
      bVar25 = fVar27 < 0.5;
      if (fVar26 < 0.0) {
        bVar25 = -0.5 < fVar27;
      }
      if (!bVar25) {
        local_d0 = local_d0 + *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar26 < 0.0) * 4);
      }
      iVar12 = *(int *)(lVar7 + 0xf4);
      if (*(int *)(lVar7 + 0xf0) == (int)local_d0) {
        if (iVar12 == 0) {
          iVar12 = 0;
          goto LAB_140c6ec41;
        }
      }
      else {
LAB_140c6ec41:
        *(int *)(lVar7 + 0xf0) = (int)local_d0;
        *(int *)(lVar7 + 0xf4) = iVar12 + 1;
        lVar11 = *plVar8;
      }
      fVar26 = *(float *)(lVar11 + 0x90);
      local_d0 = 0.0;
      fVar27 = modff(fVar26,&local_d0);
      bVar25 = fVar27 < 0.5;
      if (fVar26 < 0.0) {
        bVar25 = -0.5 < fVar27;
      }
      fVar27 = local_d0;
      if (!bVar25) {
        fVar27 = local_d0 + *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar26 < 0.0) * 4);
      }
      iVar10 = (int)fVar27;
      iVar12 = *(int *)(lVar7 + 0xfc);
      if (*(int *)(lVar7 + 0xf8) == iVar10) {
        if (iVar12 == 0) {
          iVar12 = 0;
          goto LAB_140c6eddd;
        }
      }
      else {
LAB_140c6eddd:
        *(int *)(lVar7 + 0xf8) = iVar10;
        *(int *)(lVar7 + 0xfc) = iVar12 + 1;
      }
      *(byte *)(param_1 + 0x2ad) = 0 < iVar10 & *(byte *)((longlong)plVar8 + 300);
      fVar27 = (float)*(int *)((longlong)plVar8 + 0x154);
      fVar26 = *(float *)(lVar7 + 0x110);
      iVar12 = *(int *)(lVar7 + 0x114);
      if ((fVar26 != fVar27) || (NAN(fVar26) || NAN(fVar27))) {
LAB_140c6eb86:
        *(float *)(lVar7 + 0x110) = fVar27;
        *(int *)(lVar7 + 0x114) = iVar12 + 1;
        fVar26 = fVar27;
      }
      else if (iVar12 == 0) {
        iVar12 = 0;
        goto LAB_140c6eb86;
      }
      if (fVar26 < 1.0) {
        if (*(char *)(param_1 + 0x2ad) == '\x01') {
          fVar26 = (*(float *)(*plVar8 + 0x80) / *(float *)(*plVar8 + 0x90)) * 100.0;
          iVar12 = *(int *)(lVar7 + 0x104);
          if ((fVar26 == *(float *)(lVar7 + 0x100)) &&
             (!NAN(fVar26) && !NAN(*(float *)(lVar7 + 0x100)))) {
            if (iVar12 != 0) goto LAB_140c6e2dc;
            iVar12 = 0;
          }
          *(float *)(lVar7 + 0x100) = fVar26;
          *(int *)(lVar7 + 0x104) = iVar12 + 1;
        }
      }
      else {
        fVar27 = *(float *)(*plVar8 + 0x80);
        fVar6 = *(float *)(*plVar8 + 0x90);
        lVar11 = lVar7 + 0x128;
        *(undefined4 *)(lVar7 + 0x130) = 0;
        if (*(int *)(lVar7 + 0x134) < 0) {
          FUN_148e77092(lVar11);
        }
        iVar12 = *(int *)(lVar7 + 0x11c);
        if (*(int *)(lVar7 + 0x118) == -1) {
          if (iVar12 == 0) {
            iVar12 = 0;
            goto LAB_140c6ec03;
          }
        }
        else {
LAB_140c6ec03:
          *(undefined4 *)(lVar7 + 0x118) = 0xffffffff;
          *(int *)(lVar7 + 0x11c) = iVar12 + 1;
        }
        iVar12 = *(int *)(lVar7 + 0x124);
        if (*(int *)(lVar7 + 0x120) == -1) {
          if (iVar12 == 0) {
            iVar12 = 0;
            goto LAB_140c6ebcc;
          }
        }
        else {
LAB_140c6ebcc:
          *(undefined4 *)(lVar7 + 0x120) = 0xffffffff;
          *(int *)(lVar7 + 0x124) = iVar12 + 1;
        }
        fVar28 = *(float *)(lVar7 + 0x110);
        local_d8 = SRWLock;
        if (0.0 < fVar28) {
          fVar26 = 100.0 / fVar26;
          uVar17 = 0;
          do {
            iVar12 = (int)uVar17;
            fVar28 = (fVar27 / fVar6) * 100.0 - (fVar28 - (float)(iVar12 + 1)) * fVar26;
            if (fVar26 <= fVar28) {
              uVar16 = 0;
              fVar28 = 100.0;
            }
            else if (1.0 <= fVar28) {
              fVar28 = (fVar28 / fVar26) * 100.0;
              uVar16 = 1;
            }
            else {
              if ((((longlong)uVar17 < (longlong)*(int *)(param_1 + 0x2a0)) &&
                  (0.0 < *(float *)(*(longlong *)(param_1 + 0x298) + uVar17 * 8))) &&
                 ((uVar17 != *(uint *)(lVar7 + 0x118) || (*(int *)(lVar7 + 0x11c) == 0)))) {
                *(int *)(lVar7 + 0x118) = iVar12;
                *(int *)(lVar7 + 0x11c) = *(int *)(lVar7 + 0x11c) + 1;
              }
              fVar28 = 0.0;
              uVar16 = 0;
            }
            if ((((longlong)uVar17 < (longlong)*(int *)(param_1 + 0x2a0)) && (99.9 <= fVar28)) &&
               (pfVar5 = (float *)(*(longlong *)(param_1 + 0x298) + uVar17 * 8),
               *pfVar5 <= 99.9 && *pfVar5 != 99.9)) {
              if ((uVar17 != *(uint *)(lVar7 + 0x120)) || (*(int *)(lVar7 + 0x124) == 0)) {
                *(int *)(lVar7 + 0x120) = iVar12;
                *(int *)(lVar7 + 0x124) = *(int *)(lVar7 + 0x124) + 1;
              }
              if (((*(float *)(lVar7 + 0x178) != 100.0) || (NAN(*(float *)(lVar7 + 0x178)))) ||
                 (*(int *)(lVar7 + 0x17c) == 0)) {
                *(undefined4 *)(lVar7 + 0x178) = 0x42c80000;
                *(int *)(lVar7 + 0x17c) = *(int *)(lVar7 + 0x17c) + 1;
              }
            }
            iVar10 = *(int *)(lVar7 + 0x130);
            lVar15 = (longlong)iVar10;
            *(uint *)(lVar7 + 0x130) = iVar10 + 1U;
            if (*(uint *)(lVar7 + 0x134) < iVar10 + 1U) {
              local_e0 = lVar11;
              FUN_145742970(lVar11,iVar10);
              lVar11 = local_e0;
            }
            lVar22 = *(longlong *)(lVar7 + 0x128);
            *(float *)(lVar22 + lVar15 * 8) = fVar28;
            *(bool *)(lVar22 + 4 + lVar15 * 8) = uVar17 == 0;
            *(undefined1 *)(lVar22 + 5 + lVar15 * 8) = uVar16;
            fVar28 = *(float *)(lVar7 + 0x110);
            uVar17 = uVar17 + 1;
          } while ((float)(iVar12 + 1) < fVar28);
        }
        FUN_140c6effa(param_1 + 0x298);
        SRWLock = local_d8;
      }
    }
LAB_140c6e2dc:
    if (*(int *)(lVar7 + 0x10c) != (int)plVar8[0x2a]) {
      *(undefined4 *)(lVar7 + 0x108) = *(undefined4 *)((longlong)plVar8 + 0x14c);
      *(int *)(lVar7 + 0x10c) = (int)plVar8[0x2a];
    }
    iVar12 = *(int *)(lVar7 + 0x16c);
    if (*(int *)(lVar7 + 0x168) == (int)*(float *)(plVar8 + 0xe)) {
      if (iVar12 == 0) {
        iVar12 = 0;
        goto LAB_140c6eab1;
      }
    }
    else {
LAB_140c6eab1:
      *(int *)(lVar7 + 0x168) = (int)*(float *)(plVar8 + 0xe);
      *(int *)(lVar7 + 0x16c) = iVar12 + 1;
    }
    iVar10 = (int)*(float *)(plVar8 + 0x10);
    iVar12 = *(int *)(lVar7 + 0x174);
    if (*(int *)(lVar7 + 0x170) == iVar10) {
      if (iVar12 == 0) {
        iVar12 = 0;
        goto LAB_140c6eaca;
      }
    }
    else {
LAB_140c6eaca:
      *(int *)(lVar7 + 0x170) = iVar10;
      *(int *)(lVar7 + 0x174) = iVar12 + 1;
    }
    if (0 < iVar10) {
      fVar26 = (*(float *)(plVar8 + 0xe) / *(float *)(plVar8 + 0x10)) * 100.0;
      iVar12 = *(int *)(lVar7 + 0x17c);
      if ((fVar26 == *(float *)(lVar7 + 0x178)) && (!NAN(fVar26) && !NAN(*(float *)(lVar7 + 0x178)))
         ) {
        if (iVar12 != 0) goto LAB_140c6e344;
        iVar12 = 0;
      }
      *(float *)(lVar7 + 0x178) = fVar26;
      *(int *)(lVar7 + 0x17c) = iVar12 + 1;
    }
LAB_140c6e344:
    iVar10 = (int)*(float *)(plVar8 + 2);
    iVar12 = *(int *)(lVar7 + 0x13c);
    if (*(int *)(lVar7 + 0x138) == iVar10) {
      if (iVar12 == 0) {
        iVar12 = 0;
        goto LAB_140c6e360;
      }
    }
    else {
LAB_140c6e360:
      *(int *)(lVar7 + 0x138) = iVar10;
      iVar12 = iVar12 + 1;
      *(int *)(lVar7 + 0x13c) = iVar12;
    }
    iVar13 = (int)*(float *)(plVar8 + 4);
    iVar19 = *(int *)(lVar7 + 0x144);
    if (*(int *)(lVar7 + 0x140) == iVar13) {
      if (iVar19 == 0) {
        iVar19 = 0;
        goto LAB_140c6e38e;
      }
    }
    else {
LAB_140c6e38e:
      *(int *)(lVar7 + 0x140) = iVar13;
      iVar19 = iVar19 + 1;
      *(int *)(lVar7 + 0x144) = iVar19;
    }
    if (*(int *)(lVar7 + 0x194) != (int)plVar8[0x25]) {
      *(undefined1 *)(lVar7 + 400) = *(undefined1 *)((longlong)plVar8 + 0x124);
      *(int *)(lVar7 + 0x194) = (int)plVar8[0x25];
    }
    if (0 < iVar13) {
      fVar26 = (*(float *)(plVar8 + 2) / *(float *)(plVar8 + 4)) * 100.0;
      iVar21 = *(int *)(lVar7 + 0x14c);
      if ((fVar26 == *(float *)(lVar7 + 0x148)) && (!NAN(fVar26) && !NAN(*(float *)(lVar7 + 0x148)))
         ) {
        if (iVar21 != 0) goto LAB_140c6e3be;
        iVar21 = 0;
      }
      *(float *)(lVar7 + 0x148) = fVar26;
      *(int *)(lVar7 + 0x14c) = iVar21 + 1;
    }
LAB_140c6e3be:
    if (0.0 < *(float *)(lVar7 + 0x110)) {
      iVar21 = (int)*(float *)(plVar8 + 8);
      if ((iVar10 != iVar21) || (iVar12 == 0)) {
        *(int *)(lVar7 + 0x138) = iVar21;
        *(int *)(lVar7 + 0x13c) = iVar12 + 1;
        iVar10 = iVar21;
      }
      fVar26 = *(float *)(plVar8 + 10);
      iVar12 = (int)fVar26;
      if ((iVar13 != iVar12) || (iVar19 == 0)) {
        *(int *)(lVar7 + 0x140) = iVar12;
        *(int *)(lVar7 + 0x144) = iVar19 + 1;
        fVar26 = *(float *)(plVar8 + 10);
        iVar13 = iVar12;
      }
      if (0 < iVar13) {
        fVar27 = (*(float *)(plVar8 + 8) / fVar26) * 100.0;
        iVar12 = *(int *)(lVar7 + 0x14c);
        if ((fVar27 == *(float *)(lVar7 + 0x148)) &&
           (!NAN(fVar27) && !NAN(*(float *)(lVar7 + 0x148)))) {
          if (iVar12 != 0) goto LAB_140c6e46e;
          iVar12 = 0;
        }
        *(float *)(lVar7 + 0x148) = fVar27;
        *(int *)(lVar7 + 0x14c) = iVar12 + 1;
        fVar26 = *(float *)(plVar8 + 10);
      }
LAB_140c6e46e:
      if ((((float)iVar10 < fVar26) && (fVar26 + -1e-08 <= *(float *)(param_1 + 0x2a8))) &&
         (*(int *)(lVar7 + 0x120) == -1)) {
        *(undefined4 *)(lVar7 + 0x120) = 0;
        *(int *)(lVar7 + 0x124) = *(int *)(lVar7 + 0x124) + 1;
      }
      *(float *)(param_1 + 0x2a8) = (float)iVar10;
    }
    if ((int)plVar8[1] < 3) {
      if (*(int *)(lVar7 + 0x150) == 0) {
        iVar12 = 1;
        if (*(int *)(lVar7 + 0x154) == 0) goto LAB_140c6ed59;
      }
      else {
        iVar12 = *(int *)(lVar7 + 0x154) + 1;
LAB_140c6ed59:
        *(undefined4 *)(lVar7 + 0x150) = 0;
        *(int *)(lVar7 + 0x154) = iVar12;
      }
      if (*(int *)(lVar7 + 0x158) == 0) {
        iVar12 = 1;
        if (*(int *)(lVar7 + 0x15c) == 0) goto LAB_140c6ed8d;
      }
      else {
        iVar12 = *(int *)(lVar7 + 0x15c) + 1;
LAB_140c6ed8d:
        *(undefined4 *)(lVar7 + 0x158) = 0;
        *(int *)(lVar7 + 0x15c) = iVar12;
      }
      if (*(char *)(lVar7 + 0x1b8) == '\0') {
        iVar12 = 1;
        if (*(int *)(lVar7 + 0x1bc) == 0) goto LAB_140c6edc5;
      }
      else {
        iVar12 = *(int *)(lVar7 + 0x1bc) + 1;
LAB_140c6edc5:
        *(undefined1 *)(lVar7 + 0x1b8) = 0;
        *(int *)(lVar7 + 0x1bc) = iVar12;
      }
LAB_140c6e551:
      *(undefined1 *)(param_1 + 0x2ac) = 0;
      if (*(char *)(param_1 + 0x2ad) != '\0') goto LAB_140c6e565;
      if (*(char *)(lVar7 + 0x1a0) == '\0') {
        if (*(int *)(lVar7 + 0x1a4) != 0) goto LAB_140c6dd7f;
        iVar12 = 1;
      }
      else {
        iVar12 = *(int *)(lVar7 + 0x1a4) + 1;
      }
      *(undefined1 *)(lVar7 + 0x1a0) = 0;
    }
    else {
      lVar11 = *plVar8;
      iVar12 = (int)*(float *)(lVar11 + 0xd8);
      if (*(int *)(lVar7 + 0x150) == iVar12) {
        if (*(int *)(lVar7 + 0x154) == 0) {
          iVar10 = 1;
          goto LAB_140c6eba8;
        }
      }
      else {
        iVar10 = *(int *)(lVar7 + 0x154) + 1;
LAB_140c6eba8:
        *(int *)(lVar7 + 0x150) = iVar12;
        *(int *)(lVar7 + 0x154) = iVar10;
        lVar11 = *plVar8;
      }
      fVar26 = *(float *)(lVar11 + 0xe8);
      if (*(int *)(lVar7 + 0x158) == (int)fVar26) {
        if (*(int *)(lVar7 + 0x15c) == 0) {
          iVar10 = 1;
          goto LAB_140c6ea0e;
        }
      }
      else {
        iVar10 = *(int *)(lVar7 + 0x15c) + 1;
LAB_140c6ea0e:
        *(int *)(lVar7 + 0x158) = (int)fVar26;
        *(int *)(lVar7 + 0x15c) = iVar10;
        lVar11 = *plVar8;
        fVar26 = *(float *)(lVar11 + 0xe8);
      }
      fVar26 = (*(float *)(lVar11 + 0xd8) / fVar26) * 100.0;
      if ((fVar26 != *(float *)(lVar7 + 0x160)) || (NAN(fVar26) || NAN(*(float *)(lVar7 + 0x160))))
      {
        iVar10 = *(int *)(lVar7 + 0x164) + 1;
LAB_140c6eb42:
        *(float *)(lVar7 + 0x160) = fVar26;
        *(int *)(lVar7 + 0x164) = iVar10;
      }
      else if (*(int *)(lVar7 + 0x164) == 0) {
        iVar10 = 1;
        goto LAB_140c6eb42;
      }
      if (*(int *)(lVar7 + 0x1bc) != (int)plVar8[0x27]) {
        *(undefined1 *)(lVar7 + 0x1b8) = *(undefined1 *)((longlong)plVar8 + 0x134);
        *(int *)(lVar7 + 0x1bc) = (int)plVar8[0x27];
      }
      if (iVar12 < 1) goto LAB_140c6e551;
      *(undefined1 *)(param_1 + 0x2ac) = 1;
LAB_140c6e565:
      if (*(char *)(lVar7 + 0x1a0) == '\0') {
        iVar12 = *(int *)(lVar7 + 0x1a4) + 1;
      }
      else {
        if (*(int *)(lVar7 + 0x1a4) != 0) goto LAB_140c6dd7f;
        iVar12 = 1;
      }
      *(undefined1 *)(lVar7 + 0x1a0) = 1;
    }
    *(int *)(lVar7 + 0x1a4) = iVar12;
  }
LAB_140c6dd7f:
  ReleaseSRWLockShared(SRWLock);
  FUN_1448d5e3c(&local_d0,lVar4);
  lVar11 = *(longlong *)(CONCAT44(uStack_cc,local_d0) + 0x1b0);
  AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x1c0));
  plVar8 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x2b4) != *(int *)(lVar11 + 0x1b8)) {
    *(int *)(param_1 + 0x2b4) = *(int *)(lVar11 + 0x1b8);
    FUN_1448d5e3c(&local_d0,lVar4);
    lVar4 = *(longlong *)(CONCAT44(uStack_cc,local_d0) + 0x1f0);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1478));
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_c8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar3 = (int *)((longlong)local_c8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (0 < *(int *)(lVar4 + 0x1450)) {
      uVar17 = 0;
      do {
        if ((uVar17 < 0x32) && (lVar15 = uVar17 * 0x68 + lVar4, lVar15 != 0)) {
          iVar12 = *(int *)(lVar15 + 0x38);
          if (iVar12 == DAT_14cbdaf10) {
            if (1 < iVar12) {
              lVar22 = 0;
              while( true ) {
                uVar18 = *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar22);
                uVar20 = (ulonglong)uVar18;
                uVar23 = *(ushort *)(DAT_14cbdaf08 + lVar22);
                if (uVar18 != uVar23) break;
                if (uVar18 == 0) goto LAB_140c6e899;
LAB_140c6e865:
                lVar22 = lVar22 + 2;
              }
              if ((uVar23 | uVar18) < 0x80) {
                uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                uVar24 = (ulonglong)uVar23;
                uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_140c6e865;
              }
              if (uVar18 != uVar23) goto LAB_140c6e829;
            }
          }
          else if (DAT_14cbdaf10 + iVar12 != 1) goto LAB_140c6e829;
LAB_140c6e899:
          lVar15 = FUN_140c6f194(lVar11,lVar15 + 0x58);
          if (lVar15 == 0) {
            FUN_14020fad6(lVar7 + 0xb0,&DAT_149dfb77a);
          }
          else {
            FUN_144a787a6(lVar7 + 0xb0,lVar15 + 0xb8);
          }
          puVar9 = *(ushort **)(lVar7 + 0x80);
          if (puVar9 != (ushort *)0x0) {
            *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
          }
        }
LAB_140c6e829:
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < (longlong)*(int *)(lVar4 + 0x1450));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1478));
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x1c0));
LAB_140c6dde2:
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6effa FUN_140c6effa body=88 status=ok
// SIG undefined FUN_140c6effa(void)

undefined8 * FUN_140c6effa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140c6f052(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c6f052 FUN_140c6f052 body=322 status=ok
// SIG undefined FUN_140c6f052(void)

void FUN_140c6f052(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c6f0c0;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140c6f0c0:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c6f194 FUN_140c6f194 body=106 status=ok
// SIG undefined FUN_140c6f194(void)

longlong FUN_140c6f194(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    lVar2 = (longlong)*(int *)(param_1 + 0x88) * 0x430;
    do {
      if (*(int *)(lVar1 + 8) == *param_2) {
        if (lVar1 != 0) {
          return lVar1;
        }
        break;
      }
      lVar1 = lVar1 + 0x430;
      lVar2 = lVar2 + -0x430;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x430;
  do {
    if (*(int *)(lVar1 + 8) == *param_2) {
      return lVar1;
    }
    lVar1 = lVar1 + 0x430;
    lVar2 = lVar2 + -0x430;
  } while (lVar2 != 0);
  return 0;
}



// FUNCTION 140c6f1fe FUN_140c6f1fe body=139 status=ok
// SIG undefined FUN_140c6f1fe(void)

void FUN_140c6f1fe(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_145984818(param_1,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x18 + *param_1);
    lVar3 = *param_2;
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + lVar6 * 8);
      *puVar5 = &PTR_FUN_14b2e1720;
      puVar5[1] = uVar4;
      *(undefined1 *)(puVar5 + 2) = 0;
      lVar6 = lVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar1 != (uint)lVar6);
    return;
  }
  return;
}



// FUNCTION 140c6f28a FUN_140c6f28a body=270 status=ok
// SIG undefined FUN_140c6f28a(void)

undefined8 FUN_140c6f28a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c6f392;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c6f392;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140c6f392:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c6f340;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140c6f340;
    }
  }
  uVar6 = 0;
LAB_140c6f340:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c6f3ae FUN_140c6f3ae body=1299 status=ok
// SIG undefined FUN_140c6f3ae(void)

void FUN_140c6f3ae(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  code *local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(char *)(param_1 + 0x48) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) goto LAB_140c6f48f;
  iVar5 = 0;
  if (*(char *)(param_1 + 0x4a) == '\0') {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      local_118[0] = FUN_1403e5dae();
      if ((local_118[0] != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_118[0]);
      }
      lVar10 = FUN_140c6f988(lVar2,local_118,param_1);
      if ((lVar10 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0xa8) = lVar10;
        if (lVar10 == 0) goto LAB_140c6f48f;
      }
      else {
        FUN_1456cec3c(lVar10);
        *(longlong *)(param_1 + 0xa8) = lVar10;
      }
      *(byte *)(lVar10 + 0x91) = *(byte *)(lVar10 + 0x91) | 2;
    }
    if ((*(char *)(lVar2 + 0x178) == '\x03') ||
       ((*(longlong **)(lVar2 + 0x1b0) != (longlong *)0x0 &&
        (cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x1b0) + 0x700))(), cVar4 != '\0')))) {
      if (*(char *)(param_1 + 0x48) == '\0') {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x2c0))();
      }
      else {
        iVar5 = 0;
        if (*(char *)(param_1 + 0x48) == '\x01') {
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x2f0))();
        }
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x50);
    }
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x49) == '\x03') {
      if (*(int *)(param_1 + 0x4c) <= iVar5) goto LAB_140c6f48f;
    }
    else if ((*(char *)(param_1 + 0x49) == '\x02') && (iVar5 < *(int *)(param_1 + 0x4c)))
    goto LAB_140c6f48f;
  }
  if (iVar5 != *(int *)(param_1 + 0x4c)) {
    iVar9 = *(int *)(param_1 + 0x70) * iVar5;
    if ((*(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x68)) ||
       (iVar9 < *(int *)(param_1 + 0x68))) {
      local_58 = (longlong *)0x0;
      local_50 = 0x1800000000;
      FUN_140e99fbc(lVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x90),local_118);
      plVar6 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar6 = local_118;
      }
      if ((longlong)(int)local_50 != 0) {
        plVar8 = plVar6 + (int)local_50;
        iVar1 = *(int *)(param_1 + 0x68);
        local_128 = param_1 + 0x90;
        local_130 = param_1 + 0x78;
        do {
          plVar3 = (longlong *)*plVar6;
          if (plVar3 != (longlong *)0x0) {
            if (DAT_14cac7cb8 == 0) {
              local_160 = &local_120;
              local_120 = FUN_144a7958c;
              local_150 = FUN_14081d0ea;
              local_158 = &LAB_1417963e0;
              local_168 = &LAB_1478a2d90;
              local_170 = &LAB_146395589;
              local_178 = L"Engine";
              local_180 = 0x20000000000;
              local_188 = CONCAT44(local_188._4_4_,0x10000005);
              local_190 = CONCAT44(local_190._4_4_,0x10);
              local_198 = CONCAT44(local_198._4_4_,0xad0);
              FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
            }
            if (((*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8)
                 == DAT_14cac7cb8 + 0x30)) && (0 < *(int *)(param_1 + 0x68))) {
              lVar10 = 0;
              do {
                cVar4 = FUN_140c6f8de(plVar3,*(undefined4 *)
                                              (*(longlong *)(param_1 + 0x60) + lVar10 * 4));
                if (lVar10 < (longlong)iVar1 - (longlong)iVar9) {
                  if (cVar4 == '\0') {
                    (**(code **)(*plVar3 + 0xb88))
                              (plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar10 * 4),0)
                    ;
                    if (*(longlong *)(param_1 + 0x90) != 0) {
                      local_138 = param_1 + 0x98;
                      local_140 = *(longlong *)(param_1 + 0x38) + 0x160;
                      local_148 = *(longlong *)(param_1 + 0x38) + 0xf0;
                      FUN_14041807a(plVar3,&local_120,
                                    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar10 * 4));
                      lVar7 = local_128;
LAB_140c6f834:
                      local_198 = local_148;
                      local_190 = local_140;
                      local_188 = local_138;
                      FUN_148a1a9b0(param_1,plVar3,&local_120,lVar7);
                    }
                  }
                }
                else if (cVar4 != '\0') {
                  (**(code **)(*plVar3 + 0xb90))
                            (plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar10 * 4));
                  if (*(longlong *)(param_1 + 0x78) != 0) {
                    local_138 = param_1 + 0x80;
                    local_140 = *(longlong *)(param_1 + 0x38) + 0x220;
                    local_148 = *(longlong *)(param_1 + 0x38) + 0x1b0;
                    FUN_14041807a(plVar3,&local_120,
                                  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar10 * 4));
                    lVar7 = local_130;
                    goto LAB_140c6f834;
                  }
                }
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)(param_1 + 0x68));
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar8);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x90) != '\x01') &&
         (*(char *)(lVar2 + 0x178) == '\x03')) {
        FUN_14578aacc(lVar2,*(undefined1 *)(param_1 + 0x54),iVar5);
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  *(int *)(param_1 + 0x4c) = iVar5;
LAB_140c6f48f:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c6f8de FUN_140c6f8de body=169 status=ok
// SIG undefined FUN_140c6f8de(void)

undefined8 FUN_140c6f8de(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  while( true ) {
    if (((((*(int *)(param_1 + 0x66c) == 0) || (uVar1 = *(uint *)(param_1 + 0x668), (int)uVar1 < 0))
         || (DAT_14c9647dc <= (int)uVar1)) ||
        (((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 == 0 ||
          (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x66c))) ||
         ((*(uint *)(lVar2 + 8) & 0x10200000) != 0)))) &&
       (lVar2 = (longlong)*(int *)(param_1 + 0x714) * 0x10,
       param_2 < *(int *)(param_1 + 0x880 + lVar2))) break;
    param_1 = FUN_14479d2ce((uint *)(param_1 + 0x668));
    if (param_1 == 0) {
      return 0;
    }
  }
  if (param_2 == -1) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + lVar2 + 0x878);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(char *)(lVar2 + param_2) != '\x01');
}



// FUNCTION 140c6f988 FUN_140c6f988 body=226 status=ok
// SIG undefined FUN_140c6f988(void)

longlong FUN_140c6f988(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar1) {
    uVar4 = 0;
    do {
      if (param_3 == 0) {
LAB_140c6fa0a:
        local_38 = *param_2;
        if ((local_38 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        lVar2 = FUN_1448a09a2(param_1,&local_38,uVar4 & 0xffffffff);
        if (lVar2 != 0) goto LAB_140c6fa35;
        iVar1 = *(int *)(param_1 + 0xbf0);
      }
      else {
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0xbe8) + 0x50 + uVar4 * 0x88);
        if (lVar2 != 0) {
          lVar3 = 0;
          do {
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xbe8) + 0x48 + uVar4 * 0x88) + lVar3) ==
                param_3) goto LAB_140c6fa0a;
            lVar3 = lVar3 + 8;
          } while (lVar2 * 8 != lVar3);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)iVar1);
  }
  lVar2 = 0;
LAB_140c6fa35:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140c6fa7a FUN_140c6fa7a body=66 status=ok
// SIG undefined FUN_140c6fa7a(void)

undefined8 * FUN_140c6fa7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afdaa20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140c6fabc FUN_140c6fabc body=140 status=ok
// SIG undefined FUN_140c6fabc(void)

undefined8 * FUN_140c6fabc(undefined8 *param_1,undefined8 param_2)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xf0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_140c6fb48(param_2,param_1 + 0xf,0);
  return param_1;
}



// FUNCTION 140c6fb48 FUN_140c6fb48 body=2104 status=ok
// SIG undefined FUN_140c6fb48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c6fb48(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *unaff_R14;
  ulonglong uVar28;
  bool bVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  undefined1 local_119;
  longlong local_118;
  longlong local_110;
  code *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_108 = (code *)0x0;
  uStack_100 = 0;
  local_119 = param_3;
  FUN_1401031ac(*(undefined8 *)(param_1 + 0x20),0,&local_108);
  if ((code **)(param_2 + 0x70) == &local_108) {
    if (local_108 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_2 + 0x70) = local_108;
    local_108 = (code *)0x0;
    *(undefined4 *)(param_2 + 0x78) = (undefined4)uStack_100;
    *(undefined4 *)(param_2 + 0x7c) = uStack_100._4_4_;
  }
  *(undefined1 *)(param_2 + 0x82) = 0;
  lVar30 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    unaff_R14 = (longlong *)FUN_145a62958();
    lVar30 = unaff_R14[0x22];
    if (lVar30 == 0) {
      (**(code **)(*unaff_R14 + 1000))(unaff_R14);
      lVar30 = unaff_R14[0x22];
    }
  }
  bVar18 = *(byte *)(param_1 + 0x31);
  plVar23 = (longlong *)(ulonglong)bVar18;
  bVar16 = *(byte *)(lVar30 + 0x75);
  if (bVar18 != 0) {
    bVar16 = bVar18;
  }
  if ((bVar16 == 3) || (*(int *)(param_1 + 0x70) < 1)) {
    *(undefined2 *)(param_2 + 0x80) = 0;
  }
  else {
    *(byte *)(param_2 + 0x80) = *(byte *)(param_1 + 0xb8) >> 4 & 1;
    *(byte *)(param_2 + 0x81) = *(byte *)(param_1 + 0xb8) >> 6 & 1;
    if (0 < *(int *)(param_1 + 0x70)) {
      local_110 = param_2 + 0x50;
      lVar30 = param_2 + 0x60;
      lVar26 = 0;
      local_118 = lVar30;
      do {
        lVar21 = *(longlong *)(param_1 + 0x68);
        unaff_R14 = (longlong *)(lVar26 * 0x100);
        uVar4 = *(uint *)(lVar21 + 0x38 + (longlong)unaff_R14);
        if ((*(byte *)(param_1 + 0xb8) & 0x10) == 0) {
          plVar24 = (longlong *)0x0;
        }
        else {
          iVar19 = *(int *)(param_2 + 0x58);
          *(uint *)(param_2 + 0x58) = iVar19 + 1U;
          if (*(uint *)(param_2 + 0x5c) < iVar19 + 1U) {
            FUN_147c64112(local_110,iVar19);
          }
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x50) + (longlong)iVar19 * 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          plVar23 = *(longlong **)(param_2 + 0x50);
          lVar20 = (longlong)(*(int *)(param_2 + 0x58) + -1);
          lVar30 = lVar20 * 0x10;
          plVar24 = plVar23 + lVar20 * 2;
          lVar5 = plVar23[lVar20 * 2 + 1];
          iVar19 = *(int *)((longlong)plVar23 + lVar30 + 0xc);
          *(uint *)(plVar23 + lVar20 * 2 + 1) = (int)lVar5 + uVar4;
          if ((uint)(iVar19 - (int)lVar5) < uVar4) {
            plVar23 = plVar24;
            lVar30 = FUN_1403e3958();
          }
        }
        if ((*(byte *)(param_1 + 0xb8) & 0x40) == 0) {
          plVar27 = (longlong *)0x0;
        }
        else {
          iVar19 = *(int *)(param_2 + 0x68);
          *(uint *)(param_2 + 0x68) = iVar19 + 1U;
          if (*(uint *)(param_2 + 0x6c) < iVar19 + 1U) {
            FUN_147c64112(local_118,iVar19);
          }
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x60) + (longlong)iVar19 * 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          plVar23 = *(longlong **)(param_2 + 0x60);
          lVar20 = (longlong)(*(int *)(param_2 + 0x68) + -1);
          lVar30 = lVar20 * 0x10;
          plVar27 = plVar23 + lVar20 * 2;
          lVar5 = plVar23[lVar20 * 2 + 1];
          iVar19 = *(int *)((longlong)plVar23 + lVar30 + 0xc);
          *(uint *)(plVar23 + lVar20 * 2 + 1) = (int)lVar5 + uVar4;
          if ((uint)(iVar19 - (int)lVar5) < uVar4) {
            plVar23 = plVar27;
            lVar30 = FUN_1403e3958();
          }
        }
        dVar31 = *(double *)((longlong)unaff_R14 + lVar21 + 0x90);
        dVar32 = *(double *)((longlong)unaff_R14 + lVar21 + 0x98);
        auVar53 = *(undefined1 (*) [16])((longlong)unaff_R14 + lVar21 + 0xa0);
        dVar51 = auVar53._0_8_;
        dVar43 = auVar53._8_8_;
        auVar45._8_8_ = -(ulonglong)((double)((ulonglong)dVar32 & 0x7ff0000000000000) == INFINITY);
        auVar45._0_8_ = -(ulonglong)((double)((ulonglong)dVar31 & 0x7ff0000000000000) == INFINITY);
        iVar19 = movmskpd((int)lVar30,auVar45);
        auVar6._8_8_ = -(ulonglong)((double)((ulonglong)dVar43 & 0x7ff0000000000000) == INFINITY);
        auVar6._0_8_ = -(ulonglong)((double)((ulonglong)dVar51 & 0x7ff0000000000000) == INFINITY);
        uVar25 = movmskpd((int)plVar23,auVar6);
        if ((uVar25 & 0x3fffffff) == 0 && iVar19 == 0) {
          dVar37 = *(double *)((longlong)unaff_R14 + lVar21 + 0xb0);
          dVar38 = *(double *)((longlong)unaff_R14 + lVar21 + 0xb8);
          dVar39 = *(double *)((longlong)unaff_R14 + lVar21 + 0xc0);
          dVar46 = (double)DAT_149931eb0;
          dVar49 = DAT_149931eb0._8_8_;
          auVar7._8_8_ = -(ulonglong)((double)((ulonglong)dVar38 & 0x7ff0000000000000) == dVar49);
          auVar7._0_8_ = -(ulonglong)((double)((ulonglong)dVar37 & 0x7ff0000000000000) == dVar46);
          iVar19 = movmskpd(iVar19,auVar7);
          auVar8._8_8_ = -(ulonglong)
                          ((double)(*(ulonglong *)((longlong)unaff_R14 + lVar21 + 200) &
                                   0x7ff0000000000000) == dVar49);
          auVar8._0_8_ = -(ulonglong)((double)((ulonglong)dVar39 & 0x7ff0000000000000) == dVar46);
          uVar25 = movmskpd(0,auVar8);
          if ((uVar25 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_140c6fef8;
          dVar40 = *(double *)((longlong)unaff_R14 + lVar21 + 0xd0);
          dVar41 = *(double *)((longlong)unaff_R14 + lVar21 + 0xd8);
          dVar42 = *(double *)((longlong)unaff_R14 + lVar21 + 0xe0);
          auVar47._8_8_ = -(ulonglong)((double)((ulonglong)dVar41 & 0x7ff0000000000000) == dVar49);
          auVar47._0_8_ = -(ulonglong)((double)((ulonglong)dVar40 & 0x7ff0000000000000) == dVar46);
          iVar19 = movmskpd(iVar19,auVar47);
          lVar30 = -(ulonglong)
                    ((double)(*(ulonglong *)((longlong)unaff_R14 + lVar21 + 0xe8) &
                             0x7ff0000000000000) == dVar49);
          auVar10._8_4_ = (int)lVar30;
          auVar10._0_8_ = -(ulonglong)((double)((ulonglong)dVar42 & 0x7ff0000000000000) == dVar46);
          auVar10._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
          uVar25 = movmskpd(0,auVar10);
          if ((uVar25 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_140c6fef8;
          dVar51 = dVar51 * dVar51 + dVar31 * dVar31;
          dVar43 = dVar43 * dVar43 + dVar32 * dVar32;
          auVar11._8_4_ = SUB84(dVar43,0);
          auVar11._0_8_ = dVar51;
          auVar11._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          lVar30 = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar51 + auVar11._8_8_)));
          auVar12._8_4_ = (int)lVar30;
          auVar12._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar51 + dVar43)));
          auVar12._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
          iVar19 = movmskpd(iVar19,auVar12);
          uVar33 = auVar53._0_4_;
          uVar34 = auVar53._4_4_;
          uVar35 = auVar53._8_4_;
          uVar36 = auVar53._12_4_;
          if (iVar19 != 0) goto LAB_140c6fef8;
        }
        else {
LAB_140c6fef8:
          dVar31 = DAT_14c846480;
          dVar32 = DAT_14c846488;
          uVar33 = (undefined4)DAT_14c846490;
          uVar34 = DAT_14c846490._4_4_;
          uVar35 = (undefined4)DAT_14c846498;
          uVar36 = DAT_14c846498._4_4_;
          dVar37 = DAT_14c8464a0;
          dVar38 = DAT_14c8464a8;
          dVar39 = DAT_14c8464b0;
          dVar40 = DAT_14c8464c0;
          dVar41 = DAT_14c8464c8;
          dVar42 = DAT_14c8464d0;
        }
        if (0 < (int)uVar4) {
          auVar52._8_8_ = dVar32;
          auVar52._0_8_ = dVar31;
          auVar53._4_4_ = uVar34;
          auVar53._0_4_ = uVar33;
          auVar53._8_4_ = uVar35;
          auVar53._12_4_ = uVar36;
          auVar53 = blendpd(auVar52,auVar53,2);
          lVar30 = 0;
          do {
            lVar5 = *(longlong *)((longlong)unaff_R14 + lVar21 + 0x30);
            pdVar2 = (double *)(lVar5 + lVar30);
            dVar43 = *pdVar2 * dVar40;
            dVar46 = pdVar2[1] * dVar41;
            dVar15 = *(double *)(lVar5 + 0x10 + lVar30) * dVar42;
            dVar49 = dVar46 * dVar31 - dVar43 * dVar32;
            dVar50 = dVar15 * dVar32 - dVar46 * (double)CONCAT44(uVar34,uVar33);
            dVar51 = dVar43 * (double)CONCAT44(uVar34,uVar33) - dVar15 * auVar53._0_8_;
            dVar50 = dVar50 + dVar50;
            dVar51 = dVar51 + dVar51;
            dVar49 = dVar49 + dVar49;
            auVar9._8_4_ = uVar35;
            auVar9._0_8_ = CONCAT44(uVar36,uVar35);
            auVar9._12_4_ = uVar36;
            dVar43 = (dVar49 * dVar32 - dVar51 * (double)CONCAT44(uVar34,uVar33)) +
                     (double)CONCAT44(uVar36,uVar35) * dVar50 + dVar43 + dVar37;
            dVar46 = (dVar50 * (double)CONCAT44(uVar34,uVar33) - dVar49 * auVar53._0_8_) +
                     auVar9._8_8_ * dVar51 + dVar46 + dVar38;
            uVar48 = (undefined4)((ulonglong)dVar46 >> 0x20);
            dVar51 = (double)CONCAT44(uVar36,uVar35) * dVar49 + dVar15 +
                     (dVar51 * dVar31 - dVar50 * dVar32) + dVar39;
            if (plVar24 != (longlong *)0x0) {
              lVar5 = *plVar24;
              auVar13._8_4_ = SUB84(dVar46,0);
              auVar13._0_8_ = dVar43;
              auVar13._12_4_ = uVar48;
              *(undefined1 (*) [16])(lVar5 + lVar30) = auVar13;
              *(double *)(lVar5 + 0x10 + lVar30) = dVar51;
            }
            if (plVar27 != (longlong *)0x0) {
              auVar44._0_8_ = -dVar43;
              auVar44._8_8_ = -dVar46;
              lVar5 = *plVar27;
              auVar14._8_4_ = SUB84(dVar46,0);
              auVar14._0_8_ = dVar43;
              auVar14._12_4_ = uVar48;
              auVar45 = blendpd(auVar44,auVar14,2);
              *(undefined1 (*) [16])(lVar5 + lVar30) = auVar45;
              *(double *)(lVar5 + 0x10 + lVar30) = dVar51;
            }
            lVar30 = lVar30 + 0x18;
          } while ((ulonglong)uVar4 * 0x18 != lVar30);
        }
        *(undefined1 *)(param_2 + 0x49) = local_119;
        lVar30 = *(longlong *)(param_1 + 0x20);
        lVar21 = FUN_141235872();
        plVar23 = *(longlong **)(lVar30 + 0x10);
        if ((int)plVar23[7] < *(int *)(lVar21 + 0x38)) {
          bVar29 = false;
        }
        else {
          plVar23 = (longlong *)plVar23[6];
          bVar29 = plVar23[*(int *)(lVar21 + 0x38)] == lVar21 + 0x30;
        }
        *(bool *)(param_2 + 0x82) = bVar29;
        lVar26 = lVar26 + 1;
        lVar30 = (longlong)*(int *)(param_1 + 0x70);
      } while (lVar26 < lVar30);
    }
  }
  uVar3 = *(undefined1 *)(param_1 + 0xb8);
  plVar23 = (longlong *)0x0;
  *(undefined1 *)(param_2 + 0x83) = 0;
  *(undefined1 *)(param_2 + 0x86) = 0;
  lVar30 = *(longlong *)(param_1 + 0x20);
  if (lVar30 != 0) {
    uVar22 = FUN_1401cf56e();
    plVar23 = (longlong *)FUN_144718840(lVar30,uVar22);
  }
  lVar30 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar24 = (longlong *)FUN_145a62958();
    lVar30 = plVar24[0x22];
    if (lVar30 == 0) {
      (**(code **)(*plVar24 + 1000))(plVar24);
      lVar30 = plVar24[0x22];
    }
  }
  cVar17 = *(char *)(lVar30 + 0x75);
  if (*(char *)(param_1 + 0x31) != '\0') {
    cVar17 = *(char *)(param_1 + 0x31);
  }
  if ((plVar23 != (longlong *)0x0) && (cVar17 != '\x02')) {
    uVar28 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar3) & 0xffffffffffffff04;
    uVar28 = CONCAT71((int7)(uVar28 >> 8),(byte)uVar28 >> 2);
    cVar17 = (**(code **)(*plVar23 + 0x20))(plVar23,uVar28 & 0xffffffff);
    if (cVar17 != '\0') {
      cVar17 = (**(code **)(*plVar23 + 0x10))(plVar23,param_2,uVar28 & 0xffffffff);
      *(char *)(param_2 + 0x83) = cVar17;
      if (cVar17 != '\0') {
        if (((*(int *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) == 0)) ||
           (*(int *)(param_2 + 0x18) < *(int *)(param_2 + 0x28))) {
          *(undefined1 *)(param_2 + 0x86) = 1;
        }
        *(undefined1 *)(param_2 + 0x48) = local_119;
        *(byte *)(param_2 + 0x85) = *(byte *)(param_1 + 0xb8) >> 7;
      }
    }
  }
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_108 = FUN_1449e2820;
    local_130 = FUN_14081d0ea;
    local_138 = &LAB_145a62952;
    local_140 = &local_108;
    local_148 = &LAB_147c8cd45;
    local_150 = &LAB_1461468ae;
    local_158 = L"Engine";
    local_160 = 0;
    local_168 = 0x10000006;
    local_170 = 8;
    local_178 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar23 = DAT_14caf84d0;
  lVar30 = DAT_14caf84d0[0x22];
  if (lVar30 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar30 = plVar23[0x22];
  }
  bVar18 = 1;
  if (*(char *)(lVar30 + 0x14f) == '\0') {
    bVar18 = *(byte *)(param_1 + 0xb8) >> 7;
  }
  *(byte *)(param_2 + 0x84) = bVar18;
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c70382 FUN_140c70382 body=167 status=ok
// SIG undefined FUN_140c70382(void)

void FUN_140c70382(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 * 0x68;
  FUN_140c7042a(lVar2 + lVar7 + 0x28);
  if (*(longlong *)(lVar2 + lVar7 + 0x18) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + lVar7) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + lVar7 + 4) = uVar5;
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



// FUNCTION 140c7042a FUN_140c7042a body=485 status=ok
// SIG undefined FUN_140c7042a(void)

void FUN_140c7042a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_44 = 1;
  if (iVar2 == 0) {
    local_30 = 0;
    local_48 = 0;
    local_34 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar4 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar4;
      }
      local_48 = (int)uVar8 + 1;
      local_30 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_34 = iVar2;
        if (uVar8 == uVar4) goto LAB_140c704df;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar5 == 0);
      local_48 = (int)uVar4;
      local_30 = iVar7;
    }
    else {
      local_30 = 0;
      local_48 = 0;
    }
    local_44 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_44 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_34 = (local_30 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_34) {
      local_34 = iVar2;
    }
  }
LAB_140c704df:
  local_38 = 0xffffffff;
  local_50 = param_1;
  local_40 = puVar1;
  if (local_34 < iVar2) {
    do {
      if (*(longlong *)(*local_50 + 0x10 + (longlong)local_34 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_38 = local_38 & ~local_44;
      FUN_1449c0562(&local_48);
    } while (local_34 < (int)local_40[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c70626 FUN_140c70626 body=57 status=ok
// SIG undefined FUN_140c70626(void)

void FUN_140c70626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23768 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23768 = FUN_140002ddd(FUN_14643f3a8,uVar1,L"GpsTest_Targeters");
  }
  return;
}



// FUNCTION 140c70666 FUN_140c70666 body=57 status=ok
// SIG undefined FUN_140c70666(void)

void FUN_140c70666(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f60 = FUN_140002ddd(FUN_1465bc31b,uVar1,L"GpsTest_IsFocuser");
  }
  return;
}



// FUNCTION 140c706a0 FUN_140c706a0 body=367 status=ok
// SIG undefined FUN_140c706a0(void)

void FUN_140c706a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  int iStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 8;
  iStack_44 = 0;
  if (param_2 == 0) {
    local_48 = 0;
    iVar2 = 0;
  }
  else {
    local_48 = *(uint *)(param_2 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_48 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
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
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_28 = 7;
  iStack_44 = iVar2;
  local_50 = FUN_140c70810();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  puVar5 = &local_48;
  FUN_14095c1ce(param_1,&local_50,puVar5,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_30) {
      puVar5 = (uint *)CONCAT44(iStack_44,local_48);
    }
    (*pcVar1)(puVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(iStack_44,local_48));
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c70810 FUN_140c70810 body=228 status=ok
// SIG undefined FUN_140c70810(void)

longlong FUN_140c70810(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14599715a;
    local_38 = &LAB_14873bdb6;
    local_40 = &LAB_145b0436a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_DmgInstigator",&DAT_14cb67690,
                  FUN_146516ae4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c708f6 FUN_140c708f6 body=562 status=ok
// SIG undefined FUN_140c708f6(void)

void FUN_140c708f6(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_24 = param_2;
    uVar4 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_24);
    if ((DAT_14c761388 != 0) &&
       ((lVar5 = param_1[0x16], lVar5 != 0 || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) {
      uVar4 = FUN_14119d0a4(lVar5);
      FUN_140e65914(uVar4,param_1,*(undefined4 *)(lVar5 + 0x6f4));
    }
  }
  cVar1 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xd14);
  }
  else {
    iVar2 = (**(code **)(*DAT_14cad2328 + 0xb0))();
    iVar3 = 0x40;
    if (iVar2 < 0x40) {
      iVar3 = iVar2;
    }
    iVar2 = 1;
    if (1 < iVar3) {
      iVar2 = iVar3;
    }
  }
  cVar1 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
  if (cVar1 == '\0') {
    iVar6 = (int)param_1[0x1a3];
  }
  else {
    iVar6 = (**(code **)(*DAT_14cad2340 + 0xb0))();
    iVar3 = 0x40;
    if (iVar6 < 0x40) {
      iVar3 = iVar6;
    }
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
  }
  iVar6 = iVar6 * iVar2;
  if ((*(byte *)((longlong)param_1 + 0x2aa) & 1) == 0) {
    cVar1 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0xd11) == '\x01') {
LAB_140c70b18:
        if ((int)param_1[0x1b2] < iVar6) goto LAB_140c70972;
      }
    }
    else {
      cVar1 = (**(code **)(*DAT_14cad2310 + 0xa8))();
      if (cVar1 != '\0') goto LAB_140c70b18;
    }
  }
  else {
LAB_140c70972:
    FUN_140c70b2a(param_1);
  }
  cVar1 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_1 + 0xd11) != '\x01') goto LAB_140c7099f;
  }
  else {
    cVar1 = (**(code **)(*DAT_14cad2310 + 0xa8))();
    if (cVar1 == '\0') goto LAB_140c7099f;
  }
  iVar3 = (int)param_1[0x1b2];
  if ((*(byte *)((longlong)param_1 + 0x2aa) & 1) == 0) {
    if (iVar6 <= iVar3) goto LAB_140c7099f;
    iVar3 = iVar3 + 1;
  }
  else {
    iVar3 = (iVar3 + 1) % iVar6;
  }
  *(int *)(param_1 + 0x1b2) = iVar3;
LAB_140c7099f:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c70b2a FUN_140c70b2a body=490 status=ok
// SIG undefined FUN_140c70b2a(void)

void FUN_140c70b2a(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_1[0x16];
  if ((((lVar6 != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) &&
      (*(longlong *)(lVar6 + 0x218) != 0)) &&
     ((cVar1 = (**(code **)(*param_1 + 0x4e8))(param_1), cVar1 != '\0' &&
      (cVar1 = FUN_140c70d96(param_1), cVar1 == '\0')))) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
    local_24 = 0;
    if (param_1 == (longlong *)0x0) {
      local_28 = 0;
      iVar2 = 0;
    }
    else {
      local_28 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)local_28 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((local_28 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar7 = iVar2 == 0;
        if (bVar7) {
          *(int *)(lVar3 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar2 = iVar5;
        }
      }
    }
    local_2c = 0;
    local_30 = *(uint *)(lVar6 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    local_24 = iVar2;
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar4;
      }
    }
    local_2c = iVar5;
    FUN_140c70d16(&DAT_14cad2278,&local_30,&local_28);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


