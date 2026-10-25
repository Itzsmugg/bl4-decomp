// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147aee50a FUN_147aee50a body=160 status=ok
// SIG undefined FUN_147aee50a(void)

void FUN_147aee50a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x640))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee5ac FUN_147aee5ac body=218 status=ok
// SIG undefined FUN_147aee5ac(void)

void FUN_147aee5ac(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
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
  lVar2 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_20);
  }
  bVar1 = DAT_14c950c29;
  *(byte *)(param_1 + 0x3a0) = *(byte *)(param_1 + 0x3a0) ^ 8;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x400) = lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee688 FUN_147aee688 body=156 status=ok
// SIG undefined FUN_147aee688(void)

void FUN_147aee688(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147aee726(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee726 FUN_147aee726 body=271 status=ok
// SIG undefined FUN_147aee726(void)

void FUN_147aee726(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14cae4628 == param_2) {
    if (*(int *)(param_1 + 0x3dc) < 0) {
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      FUN_1402191ca(param_1 + 0x3d0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x3d8) = 0;
    }
    local_38 = 1;
    FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  plVar1 = (longlong *)(param_1 + 0x3d0);
  local_28 = &local_30;
  iVar2 = FUN_1408ff3be(plVar1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x3d8);
    *(uint *)(param_1 + 0x3d8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x3dc) < iVar2 + 1U) {
      FUN_1446f84a2(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = local_30;
  }
  local_38 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aee884 FUN_147aee884 body=371 status=ok
// SIG undefined FUN_147aee884(void)

double * FUN_147aee884(longlong param_1,double *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined1 local_280 [24];
  undefined1 local_268 [72];
  longlong local_220;
  byte local_1e4;
  undefined **local_1e0 [55];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x430) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x390) + 0x430);
    uVar2 = FUN_1449db7f2();
    bVar1 = FUN_144a7ca96(plVar5,uVar2);
    plVar5 = (longlong *)*plVar5;
    if ((plVar5 != (longlong *)0x0 & bVar1) == 1) {
      lVar4 = plVar5[0xf];
      lVar3 = FUN_1447210f0(param_1);
      FUN_14031f39e(local_268,*(undefined8 *)(plVar5[0xf] + 0xf8),*(undefined8 *)(lVar3 + 0x218),
                    lVar4 + 0xb8);
      local_1e4 = local_1e4 | 2;
      FUN_14031f528(local_1e0,local_268);
      local_1e0[0] = &PTR_FUN_14a2b3168;
      if (local_220 != 0) {
        FUN_1400020a8();
      }
      local_298 = *(undefined8 *)(plVar5[0xf] + 0xf8);
      local_288 = 0xffffffff;
      local_290 = 0;
      lVar4 = (**(code **)(*plVar5 + 0x2d0))(plVar5,local_1e0,local_268,local_280);
      if (lVar4 != 0) {
        *param_2 = (double)-*(int *)(lVar4 + 0x4d8);
        param_2[1] = (double)-*(int *)(lVar4 + 0x4dc);
      }
      FUN_14005d108(local_1e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee9f8 FUN_147aee9f8 body=1166 status=ok
// SIG undefined FUN_147aee9f8(void)

void FUN_147aee9f8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  uint local_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = param_1 + 0x84;
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (*(int *)((longlong)param_1 + 0x42c) < 0) {
    FUN_147af4018(local_130,0);
  }
  if ((longlong)(int)param_1[0x83] != 0) {
    lVar14 = param_1[0x82];
    local_128 = (longlong)(int)param_1[0x83] * 0x30 + lVar14;
    uVar11 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      if (0 < (int)uVar11) {
        iVar10 = -(int)uVar11;
        lVar9 = uVar11 << 4;
        bVar12 = false;
        do {
          lVar9 = lVar9 + -0x10;
          puVar2 = (undefined4 *)(*param_2 + lVar9);
          local_e8 = *puVar2;
          uStack_e4 = puVar2[1];
          uStack_e0 = puVar2[2];
          uStack_dc = puVar2[3];
          cVar5 = FUN_147a9a11a(lVar14,&local_e8);
          if (cVar5 != '\0') {
            if (!bVar12) {
              iVar4 = (int)param_1[0x85];
              *(uint *)(param_1 + 0x85) = iVar4 + 1U;
              if (*(uint *)((longlong)param_1 + 0x42c) < iVar4 + 1U) {
                FUN_147af422a(local_130,iVar4);
              }
              *(longlong *)(*local_130 + (longlong)iVar4 * 8) = lVar14;
            }
            if (*(char *)(lVar14 + 0x28) != '\x01') break;
            uVar6 = *(uint *)(param_2 + 1);
            if (uVar11 != uVar6) {
              iVar4 = uVar6 + iVar10;
              if (0 < (int)(uVar6 + iVar10)) {
                iVar4 = 1;
              }
              memmove((void *)(*param_2 + lVar9),
                      (void *)((longlong)(int)(uVar6 - iVar4) * 0x10 + *param_2),
                      (longlong)iVar4 << 4);
              uVar6 = *(uint *)(param_2 + 1);
            }
            *(uint *)(param_2 + 1) = uVar6 - 1;
            FUN_146fa2938(param_2);
            bVar12 = true;
          }
          iVar10 = iVar10 + 1;
          bVar3 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar3);
        uVar11 = (ulonglong)*(uint *)(param_2 + 1);
      }
    } while (((int)uVar11 != 0) && (lVar14 = lVar14 + 0x30, lVar14 != local_128));
  }
  plVar1 = param_1 + 0x86;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_144881636(local_b8,plVar1);
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  if ((longlong)(int)param_1[0x85] != 0) {
    plVar13 = (longlong *)param_1[0x84];
    plVar15 = plVar13 + (int)param_1[0x85];
    do {
      local_120 = *(longlong **)(*plVar13 + 0x20);
      if ((int)param_1[0x87] != *(int *)((longlong)param_1 + 0x464)) {
        uVar6 = (uint)((ulonglong)local_120 >> 0x10);
        uVar8 = (uint)local_120 & 0xffff;
        plVar7 = (longlong *)param_1[0x8e];
        if ((longlong *)param_1[0x8e] == (longlong *)0x0) {
          plVar7 = param_1 + 0x8d;
        }
        iVar10 = *(int *)((longlong)plVar7 +
                         (ulonglong)
                         ((int)param_1[0x8f] - 1U &
                         (int)((ulonglong)local_120 >> 0x20) + ((uint)local_120 << 0x10 | uVar8) +
                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong **)(*plVar1 + (longlong)iVar10 * 0x10) == local_120) {
              FUN_144a8b5fe(local_b8);
              goto LAB_147aeec13;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar1 + 8);
          } while (iVar10 != -1);
        }
      }
      FUN_140721fbe(&local_f8,&local_120);
LAB_147aeec13:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar15);
  }
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  iVar10 = 0;
  local_d0 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    iVar10 = local_90;
  }
  local_108 = local_c8;
  iStack_104 = iStack_c4;
  local_100 = local_c0;
  local_fc = local_bc;
  local_118 = local_d8;
  local_110 = local_d0;
  local_120 = local_b8;
  if ((iStack_c4 != iVar10) || (local_d0 != local_a8)) {
    do {
      lVar14 = *local_120;
      lVar9 = (longlong)iStack_104;
      (**(code **)(*param_1 + 0x660))(param_1,*(undefined8 *)(lVar14 + lVar9 * 0x10));
      FUN_144a8b5fe(plVar1,*(undefined8 *)(lVar14 + lVar9 * 0x10));
      local_108 = local_108 & ~local_118._4_4_;
      FUN_1449c0562(&local_118);
    } while (local_120 != local_b8 || (local_110 != local_a8 || iStack_104 != iVar10));
  }
  if ((longlong)(int)uStack_f0 != 0) {
    lVar14 = (longlong)(int)uStack_f0 << 3;
    puVar16 = local_f8;
    do {
      (**(code **)(*param_1 + 0x658))(param_1,*puVar16);
      FUN_144a13f80(plVar1,&local_120,puVar16,0);
      puVar16 = puVar16 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8(local_f8);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(local_b8);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aeee88 FUN_147aeee88 body=200 status=ok
// SIG undefined FUN_147aeee88(void)

void FUN_147aeee88(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *puStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x410);
    lVar3 = (longlong)*(int *)(param_1 + 0x418) * 0x30 + lVar2;
    do {
      local_58 = &DAT_3f8000003f800000;
      puStack_50 = &DAT_3f8000003f800000;
      if ((longlong)*(int *)(param_1 + 0x428) != 0) {
        lVar1 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x420) + lVar1) == lVar2) {
            local_58 = (undefined1 *)0x3f800000;
            puStack_50 = (undefined1 *)0x3f80000000000000;
            break;
          }
          lVar1 = lVar1 + 8;
        } while ((longlong)*(int *)(param_1 + 0x428) * 8 != lVar1);
      }
      FUN_147a9a156(lVar2,param_2,&local_58);
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aeef52 FUN_147aeef52 body=280 status=ok
// SIG undefined FUN_147aeef52(void)

void FUN_147aeef52(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a76660(param_3,&local_50);
  iVar3 = *(int *)(param_1 + 0x3b0);
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x3a8);
      lVar2 = *(longlong *)(lVar1 + (longlong)iVar5 * 8);
      if (lVar2 == 0) {
        iVar4 = iVar3 - (iVar5 + 1);
        if (iVar4 != 0) {
          _Dst = (void *)(lVar1 + (longlong)iVar5 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x3b0);
        }
        *(int *)(param_1 + 0x3b0) = iVar3 + -1;
        FUN_14021c7da((longlong *)(param_1 + 0x3a8));
      }
      else {
        local_58 = local_40;
        local_68 = local_50;
        uStack_60 = uStack_48;
        local_88 = *param_2;
        uStack_84 = param_2[1];
        uStack_80 = param_2[2];
        uStack_7c = param_2[3];
        local_78 = *(undefined8 *)(param_2 + 4);
        local_98 = &local_68;
        FUN_1478b84c4(lVar2,*(undefined8 *)(param_1 + 0x390),*(undefined8 *)(param_1 + 0x3e0),
                      &local_88);
        iVar5 = iVar5 + 1;
      }
      iVar3 = *(int *)(param_1 + 0x3b0);
    } while (iVar5 < iVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aef09c FUN_147aef09c body=224 status=ok
// SIG undefined FUN_147aef09c(void)

void FUN_147aef09c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x3a8);
  iVar4 = *(int *)(param_1 + 0x3b0);
  lVar5 = (longlong)iVar4;
  if (0 < lVar5) {
    lVar2 = *plVar1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3 * 8) == param_2) {
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3 * 8) == 0) {
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(lVar2 + lVar3 * 8) = param_2;
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    iVar4 = *(int *)(param_1 + 0x3b0);
  }
  *(uint *)(param_1 + 0x3b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3b4) < iVar4 + 1U) {
    FUN_140b51998(plVar1,iVar4);
  }
  *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 147aef17c FUN_147aef17c body=335 status=ok
// SIG undefined FUN_147aef17c(void)

void FUN_147aef17c(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_1 + 0x398);
  local_38 = param_2;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x398) = bVar1 ^ 4;
    goto LAB_147aef1c3;
  }
  if (DAT_14cae4630 == param_2) {
    *(byte *)(param_1 + 0x3a0) = *(byte *)(param_1 + 0x3a0) ^ 1;
    goto LAB_147aef1c3;
  }
  if (DAT_14cae4628 == param_2) {
    if (*(int *)(param_1 + 0x3cc) < 0) {
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      FUN_1402191ca(param_1 + 0x3c0,0);
      bVar2 = *(byte *)(param_1 + 0x398);
    }
    else {
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      bVar2 = bVar1;
    }
    *(byte *)(param_1 + 0x398) = bVar2 & 0xfb;
  }
  else {
    if ((bVar1 & 4) == 0) {
LAB_147aef22d:
      iVar3 = *(int *)(param_1 + 0x3c8);
      *(uint *)(param_1 + 0x3c8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x3cc) < iVar3 + 1U) {
        FUN_1446f84a2((longlong *)(param_1 + 0x3c0),iVar3);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x3c0) + (longlong)iVar3 * 8) = local_38;
    }
    else {
      local_30 = &local_38;
      iVar3 = FUN_1408ff3be(param_1 + 0x3c0);
      if (iVar3 == 0) goto LAB_147aef22d;
    }
    *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) | 4;
  }
  local_48 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
LAB_147aef1c3:
  if (((bVar1 ^ *(byte *)(param_1 + 0x398)) & 4) != 0) {
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aef2cc FUN_147aef2cc body=811 status=ok
// SIG undefined FUN_147aef2cc(void)

void FUN_147aef2cc(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_f8 [32];
  double local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  uint local_90;
  undefined4 uStack_8c;
  int local_88;
  ulonglong local_80 [2];
  undefined4 local_6c;
  longlong local_68 [2];
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = param_1[0x7d];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x2e0) != 0)) {
    local_b0 = &local_48;
    local_48 = 0;
    uStack_40 = 0x3e4ccccd00000000;
    local_d8 = (double)*(float *)(lVar3 + 0x34);
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_a0 = 1;
    local_a8 = 0;
    FUN_1401e0402(*(longlong *)(lVar3 + 0x2e0),0,0,(double)*(float *)(lVar3 + 0x30));
    FUN_147aef5f8(local_68,param_1 + 0x78,param_1 + 0x7a);
    lVar3 = (**(code **)(*param_1 + 0x6a0))(param_1);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x81] = lVar3;
    lVar3 = param_1[0x7d];
    *(undefined4 *)(lVar3 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0xdc) = 0;
    *(undefined4 *)(lVar3 + 0xe0) = 0;
    *(undefined4 *)(lVar3 + 0xe4) = 0x3f800000;
    local_6c = 0;
    if (param_1[0x81] == 0) {
      FUN_140056680(&local_90,&DAT_149e01fe8);
    }
    else {
      local_80[0] = *(ulonglong *)(param_1[0x81] + 0x18);
      FUN_1400021e4(local_80,&local_90);
    }
    if (local_88 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)CONCAT44(uStack_8c,local_90);
    }
    FUN_140002266(local_80,
                  L"Showing Debug for %s, Press [PageUp] and [PageDown] to cycle between targets.",
                  puVar4);
    FUN_147d8f316(lVar3 + 0xa8,local_80,&local_6c);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_8c,local_90) != 0) {
      FUN_1400020a8();
    }
    plVar1 = (longlong *)param_1[0x81];
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
      local_d8 = param_3;
      (**(code **)(*plVar1 + 0x5a0))(plVar1,param_1[0x7d],local_68,param_2);
      if (((*(byte *)(param_1 + 0x74) & 8) == 0) && (*(char *)(param_1[0x81] + 0x178) == '\x01')) {
        local_d8 = param_3;
        (**(code **)(*(longlong *)param_1[0x72] + 0x5a0))
                  ((longlong *)param_1[0x72],param_1[0x7d],local_68,param_2);
      }
    }
    FUN_1401a700c(&local_90,0xdd);
    local_80[0] = (ulonglong)local_90;
    cVar2 = (**(code **)(*param_1 + 0x690))(param_1);
    if (cVar2 != '\0') {
      lVar3 = FUN_1447210f0(param_1);
      plVar1 = *(longlong **)(lVar3 + 0x170);
      if (plVar1 != (longlong *)0x0) {
        local_d8 = param_3;
        (**(code **)(*plVar1 + 0x5a0))(plVar1,param_1[0x7d],local_68,param_2);
      }
      lVar3 = FUN_1447210f0(param_1);
      plVar1 = *(longlong **)(lVar3 + 0x178);
      if (plVar1 != (longlong *)0x0) {
        local_d8 = param_3;
        (**(code **)(*plVar1 + 0x5a0))(plVar1,param_1[0x7d],local_68,param_2);
      }
    }
    if ((*(byte *)(param_1 + 0x73) & 4) != 0) {
      local_d8 = param_3;
      FUN_147af3ea8(param_1,param_1[0x7d],local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aef5f8 FUN_147aef5f8 body=157 status=ok
// SIG undefined FUN_147aef5f8(void)

undefined8 * FUN_147aef5f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 147aef696 FUN_147aef696 body=128 status=ok
// SIG undefined FUN_147aef696(void)

void FUN_147aef696(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 == param_3) {
      cVar1 = FUN_14096f7c8(param_1,0x3e4ccccd);
      if (cVar1 != '\0') {
        FUN_1447d0588(param_2,&local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aef718 FUN_147aef718 body=635 status=ok
// SIG undefined FUN_147aef718(void)

void FUN_147aef718(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  int local_80 [2];
  uint local_78;
  char local_64;
  undefined8 local_58;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_1447210f0();
  local_90 = FUN_144a7cbb2();
  if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_90);
  }
  FUN_140946424(&local_88,uVar3,&local_90,5);
  if (local_64 == '\0') {
    do {
      FUN_147aef696(local_58,param_2,uVar3);
      FUN_1409464a8(&local_88);
    } while (local_64 == '\0');
  }
  if (local_30 == '\x01') {
    FUN_14024445c(local_80);
  }
  cVar2 = (**(code **)(*param_1 + 0x690))(param_1,&DAT_14cae4638);
  if (cVar2 != '\0') {
    FUN_1463cfdf6(&local_88,0x10,1,0);
    uVar8 = (ulonglong)local_78;
    if ((-1 < (int)local_78) && ((int)local_78 < local_80[0])) {
      do {
        lVar4 = FUN_144a7a45a(*(undefined8 *)(local_88 + (uVar8 & 0xffffffff) * 8));
        if ((lVar4 != 0) &&
           ((lVar4 = *(longlong *)(local_88 + (longlong)(int)local_78 * 8), lVar4 != 0 &&
            (lVar4 = *(longlong *)(lVar4 + 0xa8), lVar4 != 0)))) {
          FUN_147aef696(lVar4,param_2,uVar3);
        }
        uVar8 = (longlong)(int)local_78;
        do {
          uVar6 = uVar8;
          uVar8 = uVar6 + 1;
          local_78 = (uint)uVar8;
          if ((longlong)local_80[0] <= (longlong)uVar8) break;
        } while (*(longlong *)(local_88 + uVar8 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_78 < local_80[0]));
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x690))(param_1,&DAT_14cae4640);
  if (cVar2 != '\0') {
    FUN_147aef994(&local_88);
    uVar8 = (ulonglong)local_78;
    lVar4 = local_88;
    iVar5 = local_80[0];
    if ((int)local_78 < local_80[0] && -1 < (int)local_78) {
      do {
        lVar1 = *(longlong *)(lVar4 + (uVar8 & 0xffffffff) * 8);
        uVar7 = (uint)uVar8;
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0xa8), lVar1 != 0)) {
          FUN_147aef696(lVar1,param_2,uVar3);
          lVar4 = local_88;
          uVar7 = local_78;
          iVar5 = local_80[0];
        }
        uVar8 = (longlong)(int)uVar7;
        do {
          uVar6 = uVar8;
          uVar8 = uVar6 + 1;
          local_78 = (uint)uVar8;
          if ((longlong)iVar5 <= (longlong)uVar8) break;
        } while (*(longlong *)(lVar4 + uVar8 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_78 < iVar5));
    }
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aef994 FUN_147aef994 body=168 status=ok
// SIG undefined FUN_147aef994(void)

longlong * FUN_147aef994(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1406c4844();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefa3e FUN_147aefa3e body=327 status=ok
// SIG undefined FUN_147aefa3e(void)

void FUN_147aefa3e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x6a8))(0,&local_38);
  lVar1 = param_1[0x81];
  if (lVar1 == 0) {
LAB_147aefabc:
    if ((int)uStack_30 < 1) goto LAB_147aefaf8;
    uVar2 = (longlong)(*(int *)((longlong)param_1 + 0x39c) + 1) % (longlong)(int)uStack_30;
    iVar3 = (int)uVar2;
    *(int *)((longlong)param_1 + 0x39c) = iVar3;
    if (iVar3 < 0) goto LAB_147aefb02;
    lVar5 = *(longlong *)(local_38 + (uVar2 & 0xffffffff) * 8);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0x39c);
    if (((-1 < (longlong)iVar3) && (iVar3 < (int)uStack_30)) &&
       (lVar1 == *(longlong *)(local_38 + (longlong)iVar3 * 8))) goto LAB_147aefabc;
    if ((int)uStack_30 != 0) {
      lVar5 = (longlong)(int)uStack_30 * 8;
      lVar4 = 0;
      do {
        if (*(longlong *)(local_38 + lVar4 * 8) == lVar1) {
          if ((int)lVar4 != -1) {
            *(int *)((longlong)param_1 + 0x39c) = (int)lVar4;
          }
          break;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      goto LAB_147aefabc;
    }
LAB_147aefaf8:
    *(undefined4 *)((longlong)param_1 + 0x39c) = 0xffffffff;
LAB_147aefb02:
    lVar1 = *(longlong *)(param_1[0x72] + 0x448);
    if ((lVar1 == 0) || (lVar5 = *(longlong *)(lVar1 + 0x430), lVar5 == 0)) goto LAB_147aefb31;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar5);
      lVar5 = *(longlong *)(lVar1 + 0x430);
    }
  }
  param_1[0x81] = lVar5;
LAB_147aefb31:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefb86 FUN_147aefb86 body=338 status=ok
// SIG undefined FUN_147aefb86(void)

void FUN_147aefb86(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x6a8))();
  lVar1 = param_1[0x81];
  uVar2 = *(uint *)((longlong)param_1 + 0x39c);
  uVar3 = (uint)uStack_30;
  if ((lVar1 != 0) &&
     (((int)(uint)uStack_30 <= (int)uVar2 || (int)uVar2 < 0 ||
      (lVar1 != *(longlong *)(local_38 + (ulonglong)uVar2 * 8))))) {
    if ((uint)uStack_30 == 0) {
      uVar3 = 0;
    }
    else {
      lVar5 = (longlong)(int)(uint)uStack_30 << 3;
      lVar4 = 0;
      do {
        if (*(longlong *)(local_38 + lVar4 * 8) == lVar1) {
          if ((uint)lVar4 != 0xffffffff) {
            uVar2 = (uint)lVar4;
          }
          break;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  if ((int)uVar2 < 1) {
    uVar2 = uVar3;
  }
  *(uint *)((longlong)param_1 + 0x39c) = uVar2 - 1;
  if ((int)uVar3 < (int)uVar2 || (int)uVar2 < 1) {
    lVar1 = *(longlong *)(param_1[0x72] + 0x448);
    if ((lVar1 == 0) || (lVar4 = *(longlong *)(lVar1 + 0x430), lVar4 == 0)) goto LAB_147aefc86;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
      lVar4 = *(longlong *)(lVar1 + 0x430);
    }
  }
  else {
    lVar4 = *(longlong *)(local_38 + (ulonglong)(uVar2 - 1) * 8);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
  }
  param_1[0x81] = lVar4;
LAB_147aefc86:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aefd0a FUN_147aefd0a body=123 status=ok
// SIG undefined FUN_147aefd0a(void)

void FUN_147aefd0a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x398) & 1) != (byte)param_2) {
    iVar1 = FUN_14487fd02();
    if (iVar1 != 3) {
      *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) & 0xfe | (byte)param_2;
      local_28 = 0;
      uStack_20 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x390) + 0xb20))
                (*(longlong **)(param_1 + 0x390),param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefd86 FUN_147aefd86 body=92 status=ok
// SIG undefined FUN_147aefd86(void)

void FUN_147aefd86(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cae4540);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefde4 FUN_147aefde4 body=92 status=ok
// SIG undefined FUN_147aefde4(void)

void FUN_147aefde4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cae4560);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefe42 FUN_147aefe42 body=92 status=ok
// SIG undefined FUN_147aefe42(void)

void FUN_147aefe42(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cae4530);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefea0 FUN_147aefea0 body=92 status=ok
// SIG undefined FUN_147aefea0(void)

void FUN_147aefea0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cae4550);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aefefe FUN_147aefefe body=278 status=ok
// SIG undefined FUN_147aefefe(void)

undefined8 *
FUN_147aefefe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
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
  undefined8 uVar13;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar2 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14a8bd0b0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = *param_4;
  uVar7 = param_4[1];
  uVar8 = *param_5;
  uVar9 = param_5[1];
  uVar10 = *param_6;
  uVar11 = param_6[1];
  uVar12 = *param_7;
  uVar13 = param_7[1];
  *(undefined4 *)(param_1 + 0xc) = 1;
  FUN_147a66e18(param_1 + 0xb,0);
  puVar1 = (undefined8 *)param_1[0xb];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1[4] = &DAT_3f8000003f800000;
  puVar1[5] = &DAT_3f8000003f800000;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar1[8] = uVar10;
  puVar1[9] = uVar11;
  puVar1[10] = &DAT_3f8000003f800000;
  puVar1[0xb] = &DAT_3f8000003f800000;
  puVar1[0xc] = uVar6;
  puVar1[0xd] = uVar7;
  puVar1[0xe] = uVar12;
  puVar1[0xf] = uVar13;
  puVar1[0x10] = &DAT_3f8000003f800000;
  puVar1[0x11] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 147af0014 FUN_147af0014 body=222 status=ok
// SIG undefined FUN_147af0014(void)

longlong FUN_147af0014(longlong param_1,double *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x418)) {
    FUN_147aee884(param_1,&local_48);
    *param_2 = *param_2 - local_48;
    param_2[1] = param_2[1] - local_40;
    if ((longlong)*(int *)(param_1 + 0x418) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x410);
      lVar3 = (longlong)*(int *)(param_1 + 0x418) * 0x30;
      do {
        if ((param_3 == '\0') || (*(char *)(lVar4 + 0x28) == '\x01')) {
          local_58 = *param_2;
          dStack_50 = param_2[1];
          cVar1 = FUN_147a9a11a(lVar4,&local_58);
          lVar2 = lVar4;
          if (cVar1 != '\0') break;
        }
        lVar4 = lVar4 + 0x30;
        lVar3 = lVar3 + -0x30;
        lVar2 = 0;
      } while (lVar3 != 0);
      goto LAB_147af003b;
    }
  }
  lVar2 = 0;
LAB_147af003b:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 147af00f4 FUN_147af00f4 body=394 status=ok
// SIG undefined FUN_147af00f4(void)

undefined8 FUN_147af00f4(longlong *param_1,double *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 3) || (param_3 == 0)) {
    if ((int)param_1[0x83] != 0) {
      if ((param_3 != 0) && (param_3 != 3)) goto LAB_147af0138;
      goto LAB_147af0171;
    }
  }
  else {
LAB_147af0138:
    if ((int)param_1[0x85] != 0) {
LAB_147af0171:
      FUN_147aee884(param_1,&local_58);
      *param_2 = local_58 + *param_2;
      param_2[1] = local_50 + param_2[1];
      if ((param_3 == 3) || (param_3 == 0)) {
        if ((longlong)(int)param_1[0x83] != 0) {
          lVar3 = param_1[0x82];
          lVar6 = (longlong)(int)param_1[0x83] * 0x30;
          uVar4 = 0;
          do {
            local_68 = *param_2;
            dStack_60 = param_2[1];
            cVar2 = FUN_147a9a11a(lVar3,&local_68);
            if (cVar2 != '\0') {
              (**(code **)(*param_1 + 0x648))(param_1,*(undefined8 *)(lVar3 + 0x20));
              uVar4 = 1;
              if (*(char *)(lVar3 + 0x28) != '\0') break;
            }
            lVar3 = lVar3 + 0x30;
            lVar6 = lVar6 + -0x30;
          } while (lVar6 != 0);
          goto LAB_147af0143;
        }
      }
      else {
        lVar3 = param_1[0x85];
        if ((longlong)(int)lVar3 != 0) {
          lVar6 = param_1[0x84];
          lVar5 = 0;
          uVar4 = 0;
          do {
            lVar1 = *(longlong *)(lVar6 + lVar5);
            local_78 = *param_2;
            dStack_70 = param_2[1];
            cVar2 = FUN_147a9a11a(lVar1,&local_78);
            if (cVar2 != '\0') {
              if (param_3 == 1) {
                (**(code **)(*param_1 + 0x650))(param_1,*(undefined8 *)(lVar1 + 0x20));
              }
              uVar4 = 1;
              if (*(char *)(lVar1 + 0x28) != '\0') break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar5);
          goto LAB_147af0143;
        }
      }
    }
  }
  uVar4 = 0;
LAB_147af0143:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147af0424 FUN_147af0424 body=65 status=ok
// SIG undefined FUN_147af0424(void)

undefined8 FUN_147af0424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14352f5d4();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147af0458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147af0466 FUN_147af0466 body=172 status=ok
// SIG undefined FUN_147af0466(void)

undefined4 FUN_147af0466(wchar_t *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar3 = wcschr(param_1,L'.');
  if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38[3] ^ (ulonglong)auStack_58);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  cVar1 = FUN_147af0528(local_38,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_14054d1d4();
    uVar2 = FUN_146810dee(local_38,param_1,uVar4,0);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af0528 FUN_147af0528 body=109 status=ok
// SIG undefined FUN_147af0528(void)

undefined8 FUN_147af0528(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_14352f5d4();
  if (plVar2 != (longlong *)0x0) {
    if ((param_2 == 0) || (uVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,param_2), (char)uVar1 == -1)
       ) {
      uVar1 = (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined1 *)(param_3 + 0xc));
    }
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,uVar1,param_3,param_4);
    return uVar3;
  }
  return 0;
}



// FUNCTION 147af0596 FUN_147af0596 body=1926 status=ok
// SIG undefined FUN_147af0596(void)

ulonglong FUN_147af0596(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  char local_170;
  byte local_161;
  ulonglong local_160;
  uint local_154;
  ulonglong local_150;
  undefined8 local_148;
  int local_13c [2];
  undefined1 local_134;
  undefined2 local_133;
  undefined1 local_131;
  undefined4 local_130;
  undefined2 local_12c;
  int local_128;
  undefined4 local_124;
  ulonglong local_120;
  ulonglong local_118;
  int local_10c [2];
  undefined1 local_104;
  undefined2 local_103;
  undefined1 local_101;
  undefined4 local_100;
  undefined2 local_fc;
  int local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  ulonglong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 local_d4;
  void *local_d0;
  int local_c4 [2];
  undefined1 local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined2 local_b4;
  int local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined2 local_83;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)((longlong)param_2 + 0xc) = 0x201;
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  lVar9 = thunk_FUN_1447b4020(param_1);
  plVar12 = (longlong *)(lVar9 + 0x50);
  if (lVar9 == 0) {
    plVar12 = (longlong *)0x0;
  }
  uVar6 = (**(code **)(*param_1 + 0x3b8))(param_1);
  cVar4 = FUN_147d71380(uVar6,0);
  bVar5 = (**(code **)(*param_1 + 0x3b0))(param_1);
  fVar23 = (float)(**(code **)(*param_1 + 0x350))(param_1);
  uVar22 = (longlong)ROUND(fVar23 + fVar23 + 0.5) >> 1;
  fVar23 = (float)(**(code **)(*param_1 + 0x358))(param_1);
  fVar24 = (float)(**(code **)(*param_1 + 0x360))(param_1);
  iVar7 = (**(code **)(*param_1 + 0x368))(param_1);
  uVar13 = 0;
  if (((longlong)uVar22 < 1) || (lVar9 = (longlong)ROUND(fVar23 + fVar23 + 0.5) >> 1, lVar9 < 1))
  goto LAB_147af076e;
  uVar17 = 6;
  uVar18 = (uint)bVar5;
  if ((bVar5 != 2) && (uVar18 != 4)) {
    uVar17 = (ulonglong)ROUND(fVar24 + fVar24 + 0.5);
    if (uVar17 < 2) {
      uVar17 = (ulonglong)(iVar7 + (uint)(iVar7 == 0));
    }
    else {
      uVar17 = (longlong)uVar17 >> 1;
    }
  }
  uVar13 = *param_3;
  uVar1 = param_3[1];
  uVar15 = lVar9 << 0x20 | uVar22 & 0xffffffff;
  if (uVar13 != 0 || uVar1 != 0) {
    uVar15 = uVar1;
  }
  uVar16 = 0;
  if (uVar13 != 0 || uVar1 != 0) {
    uVar16 = uVar13;
  }
  uVar13 = 0;
  local_161 = bVar5;
  if ((((uVar16 & 0x8000000080000000) != 0) ||
      (iVar7 = (int)uVar15, uVar13 = 0, (longlong)uVar22 < (longlong)iVar7)) ||
     (uVar13 = 0, lVar9 < (longlong)uVar15 >> 0x20)) goto LAB_147af076e;
  uVar20 = iVar7 - (int)uVar16;
  iVar8 = (int)(uVar15 >> 0x20);
  iVar11 = (int)(uVar16 >> 0x20);
  uVar21 = iVar8 - iVar11;
  if ((int)(uVar21 | uVar20) < 0) goto LAB_147af076e;
  if (iVar8 != iVar11 && iVar7 != (int)uVar16) {
    uVar13 = 1;
    local_160 = uVar17;
    local_154 = uVar18;
    local_150 = uVar16;
    if (cVar4 == '\x01') {
      local_148 = (**(code **)(*param_1 + 0x3c0))(param_1);
      local_170 = (char)local_148 * '\x02';
      local_178 = 1;
      FUN_146987806(param_2,uVar20,uVar21,local_160);
      local_98 = (void *)0x0;
      uStack_90 = 0;
      if ((longlong)local_160 < 1) goto LAB_147af076e;
      uVar22 = 0;
      do {
        local_f8 = (int)uVar22;
        if ((local_161 == 2) || (local_154 == 4)) {
          local_10c[0] = (int)((uVar22 & 0xffffffff) / 6) * -6 + local_f8;
        }
        else {
          local_10c[0] = 6;
        }
        if ((local_161 == 4) || (local_154 == 2)) {
          local_f8 = (int)((uVar22 & 0xffffffff) / 6);
        }
        local_f0 = local_150;
        local_10c[1] = 3;
        local_104 = (undefined1)local_148;
        local_101 = local_81;
        local_103 = local_83;
        local_100 = 0x467a0000;
        local_fc = 0;
        local_f4 = 0;
        local_e8 = uVar15;
        cVar4 = (**(code **)(*plVar12 + 0x60))(plVar12,&local_98,local_10c,&local_f0);
        if (cVar4 == '\0') goto LAB_147af0ce7;
        FUN_146987944(param_2,&local_e0,uVar22 & 0xffffffff);
        pvVar3 = local_98;
        pvVar2 = local_d0;
        lVar9 = (longlong)local_e0;
        lVar14 = (longlong)local_dc;
        lVar19 = (longlong)local_d8;
        lVar10 = FUN_146987ac9(local_d4);
        uVar13 = CONCAT71((int7)((ulonglong)(lVar14 * lVar9) >> 8),1);
        memcpy(pvVar2,pvVar3,lVar19 * lVar10 * lVar14 * lVar9);
        uVar22 = uVar22 + 1;
      } while (local_160 != uVar22);
    }
    else if (cVar4 == '\x05') {
      local_170 = '\0';
      local_178 = 5;
      FUN_146987806(param_2,uVar20,uVar21);
      local_98 = (void *)0x0;
      uStack_90 = 0;
      if ((longlong)local_160 < 1) goto LAB_147af076e;
      uVar22 = 0;
      do {
        local_128 = (int)uVar22;
        if ((local_161 == 2) || (local_154 == 4)) {
          local_13c[0] = (int)((uVar22 & 0xffffffff) / 6) * -6 + local_128;
        }
        else {
          local_13c[0] = 6;
        }
        if ((local_161 == 4) || (local_154 == 2)) {
          local_128 = (int)((uVar22 & 0xffffffff) / 6);
        }
        local_120 = local_150;
        local_13c[1] = 3;
        local_134 = 1;
        local_131 = local_81;
        local_133 = local_83;
        local_130 = 0x467a0000;
        local_12c = 0;
        local_124 = 0;
        local_118 = uVar15;
        cVar4 = (**(code **)(*plVar12 + 0x70))(plVar12,&local_98,local_13c,&local_120);
        if (cVar4 == '\0') goto LAB_147af0ce7;
        FUN_146987944(param_2,&local_e0,uVar22 & 0xffffffff);
        pvVar3 = local_98;
        pvVar2 = local_d0;
        lVar9 = (longlong)local_e0;
        lVar14 = (longlong)local_dc;
        lVar19 = (longlong)local_d8;
        lVar10 = FUN_146987ac9(local_d4);
        uVar13 = CONCAT71((int7)((ulonglong)(lVar14 * lVar9) >> 8),1);
        memcpy(pvVar2,pvVar3,lVar19 * lVar10 * lVar14 * lVar9);
        uVar22 = uVar22 + 1;
      } while (local_160 != uVar22);
    }
    else {
      if (cVar4 != '\x04') goto LAB_147af076e;
      local_170 = '\0';
      local_178 = 4;
      FUN_146987806(param_2,uVar20,uVar21);
      local_98 = (void *)0x0;
      uStack_90 = 0;
      if ((longlong)local_160 < 1) goto LAB_147af076e;
      uVar22 = 0;
      do {
        local_b0 = (int)uVar22;
        if ((local_161 == 2) || (local_154 == 4)) {
          local_c4[0] = (int)((uVar22 & 0xffffffff) / 6) * -6 + local_b0;
        }
        else {
          local_c4[0] = 6;
        }
        if ((local_161 == 4) || (local_154 == 2)) {
          local_b0 = (int)((uVar22 & 0xffffffff) / 6);
        }
        local_a8 = local_150;
        local_c4[1] = 3;
        local_bc = 1;
        local_b9 = local_81;
        local_bb = local_83;
        local_b8 = 0x467a0000;
        local_b4 = 0;
        local_ac = 0;
        local_a0 = uVar15;
        cVar4 = (**(code **)(*plVar12 + 0x68))(plVar12,&local_98,local_c4,&local_a8);
        if (cVar4 == '\0') goto LAB_147af0ce7;
        FUN_146987944(param_2,&local_e0,uVar22 & 0xffffffff);
        pvVar3 = local_98;
        pvVar2 = local_d0;
        lVar9 = (longlong)local_e0;
        lVar14 = (longlong)local_dc;
        lVar19 = (longlong)local_d8;
        lVar10 = FUN_146987ac9(local_d4);
        uVar13 = CONCAT71((int7)((ulonglong)(lVar14 * lVar9) >> 8),1);
        memcpy(pvVar2,pvVar3,lVar19 * lVar10 * lVar14 * lVar9);
        uVar22 = uVar22 + 1;
      } while (local_160 != uVar22);
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_147af076e;
  }
LAB_147af076c:
  uVar13 = 0;
LAB_147af076e:
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
LAB_147af0ce7:
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_147af076c;
}



// FUNCTION 147af0d1e FUN_147af0d1e body=256 status=ok
// SIG undefined FUN_147af0d1e(void)

undefined4 FUN_147af0d1e(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_78 [4];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = CONCAT22(uStack_4c._2_2_,0x201);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  cVar1 = FUN_147af0596();
  if (cVar1 != '\0') {
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_88 = local_48;
    uVar2 = FUN_147af0528(local_78,&DAT_14a392fde,&local_98,0);
    if ((char)uVar2 != '\0') {
      (**(code **)(*param_2 + 0x170))(param_2,local_78[0],local_78[2]);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af0e20 FUN_147af0e20 body=256 status=ok
// SIG undefined FUN_147af0e20(void)

undefined4 FUN_147af0e20(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_78 [4];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = CONCAT22(uStack_4c._2_2_,0x201);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  cVar1 = FUN_147af0596();
  if (cVar1 != '\0') {
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_88 = local_48;
    uVar2 = FUN_147af0528(local_78,&DAT_14a92061e,&local_98,0);
    if ((char)uVar2 != '\0') {
      (**(code **)(*param_2 + 0x170))(param_2,local_78[0],local_78[2]);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af0f22 FUN_147af0f22 body=256 status=ok
// SIG undefined FUN_147af0f22(void)

undefined4 FUN_147af0f22(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_78 [4];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = CONCAT22(uStack_4c._2_2_,0x201);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  cVar1 = FUN_147af0596();
  if (cVar1 != '\0') {
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_88 = local_48;
    uVar2 = FUN_147af0528(local_78,&DAT_14a91e3bc,&local_98,0);
    if ((char)uVar2 != '\0') {
      (**(code **)(*param_2 + 0x170))(param_2,local_78[0],local_78[2]);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af1024 FUN_147af1024 body=70 status=ok
// SIG undefined FUN_147af1024(void)

void FUN_147af1024(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (longlong)*(int *)(param_1 + 1);
  local_18 = *param_1;
  FUN_14352f81e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af108c FUN_147af108c body=103 status=ok
// SIG undefined FUN_147af108c(void)

void FUN_147af108c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar3 = FUN_147af10f4(plVar1);
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
      FUN_147af4382(plVar1,iVar3);
    }
    lVar2 = *plVar1;
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    ((undefined8 *)(lVar2 + lVar4))[1] = 0;
    *(undefined8 *)(lVar2 + lVar4) = *param_2;
    *(undefined8 *)(lVar2 + 8 + lVar4) = param_2[1];
  }
  return;
}



// FUNCTION 147af10f4 FUN_147af10f4 body=172 status=ok
// SIG undefined FUN_147af10f4(void)

int FUN_147af10f4(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = -1;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar3 = (int *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    iVar4 = 0;
    do {
      local_48 = *param_2;
      lVar1 = param_2[1];
      if ((((*piVar3 == (int)local_48) && (piVar3[1] == (int)((ulonglong)local_48 >> 0x20))) ||
          ((cVar2 = FUN_144729dda(piVar3), cVar2 == '\0' &&
           (cVar2 = FUN_144729dda(&local_48), cVar2 == '\0')))) &&
         (iVar5 = iVar4, *(longlong *)(piVar3 + 2) == lVar1)) break;
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -0x10;
      iVar5 = -1;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 147af11a2 FUN_147af11a2 body=102 status=ok
// SIG undefined FUN_147af11a2(void)

void FUN_147af11a2(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_147af10f4(param_1 + 0x40);
  if (iVar1 == -1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  iVar3 = iVar2 - (iVar1 + 1);
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 0x10),
            (void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 0x10 + 0x10),
            (longlong)iVar3 << 4);
    iVar2 = *(int *)(param_1 + 0x48);
  }
  *(int *)(param_1 + 0x48) = iVar2 + -1;
  FUN_147af4408(param_1 + 0x40);
  return;
}



// FUNCTION 147af1208 FUN_147af1208 body=103 status=ok
// SIG undefined FUN_147af1208(void)

void FUN_147af1208(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar3 = FUN_147af1270(plVar1);
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
      FUN_147af44a4(plVar1,iVar3);
    }
    lVar2 = *plVar1;
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    ((undefined8 *)(lVar2 + lVar4))[1] = 0;
    *(undefined8 *)(lVar2 + lVar4) = *param_2;
    *(undefined8 *)(lVar2 + 8 + lVar4) = param_2[1];
  }
  return;
}



// FUNCTION 147af1270 FUN_147af1270 body=172 status=ok
// SIG undefined FUN_147af1270(void)

int FUN_147af1270(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = -1;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar3 = (int *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    iVar4 = 0;
    do {
      local_48 = *param_2;
      lVar1 = param_2[1];
      if ((((*piVar3 == (int)local_48) && (piVar3[1] == (int)((ulonglong)local_48 >> 0x20))) ||
          ((cVar2 = FUN_144729dda(piVar3), cVar2 == '\0' &&
           (cVar2 = FUN_144729dda(&local_48), cVar2 == '\0')))) &&
         (iVar5 = iVar4, *(longlong *)(piVar3 + 2) == lVar1)) break;
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -0x10;
      iVar5 = -1;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 147af131e FUN_147af131e body=102 status=ok
// SIG undefined FUN_147af131e(void)

void FUN_147af131e(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_147af1270(param_1 + 0x50);
  if (iVar1 == -1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar3 = iVar2 - (iVar1 + 1);
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x10),
            (void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x10 + 0x10),
            (longlong)iVar3 << 4);
    iVar2 = *(int *)(param_1 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar2 + -1;
  FUN_147af452a(param_1 + 0x50);
  return;
}



// FUNCTION 147af1384 FUN_147af1384 body=77 status=ok
// SIG undefined FUN_147af1384(void)

ulonglong FUN_147af1384(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = param_1[3];
  param_1[3] = *param_1 + lVar2;
  param_1[3] = (*param_1 + lVar2) - *(longlong *)(param_1[1] + (longlong)(int)param_1[5] * 8);
  *(longlong *)(param_1[1] + (longlong)(int)param_1[5] * 8) = *param_1;
  LOCK();
  *param_1 = 0;
  UNLOCK();
  *(int *)(param_1 + 5) = ((int)param_1[5] + 1) % (int)param_1[2];
  LOCK();
  uVar1 = param_1[4];
  param_1[4] = (ulonglong)param_1[3] / (ulonglong)(longlong)(int)param_1[2];
  UNLOCK();
  return uVar1;
}



// FUNCTION 147af13d2 FUN_147af13d2 body=220 status=ok
// SIG undefined FUN_147af13d2(void)

longlong * FUN_147af13d2(longlong *param_1,longlong param_2,byte param_3,byte param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == 0 || param_5 != '\x01') || (*(longlong *)(param_2 + 0x790) == 0)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    *param_1 = *(longlong *)(param_2 + 0x790) +
               (ulonglong)param_4 * 0x38 + (ulonglong)param_3 * 0xa8;
    *(undefined4 *)(param_1 + 1) = 0;
    if (DAT_14cae4680 != 0) {
      cVar3 = FUN_144a61b4f();
      if (cVar3 == '\0') {
        QueryPerformanceCounter(&local_28);
        *(DWORD *)(param_1 + 1) = local_28.s.LowPart;
      }
      else {
        lVar2 = *param_1;
        iVar1 = *(int *)(lVar2 + 0x30);
        *(int *)(lVar2 + 0x30) = iVar1 + 1;
        if ((iVar1 == 0) && (DAT_14cae4680 != 0)) {
          QueryPerformanceCounter(&local_28);
          *(DWORD *)(lVar2 + 0x34) = local_28.s.LowPart;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af14b0 FUN_147af14b0 body=159 status=ok
// SIG undefined FUN_147af14b0(void)

void FUN_147af14b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_1 != 0) && (DAT_14cae4680 != 0)) {
    cVar2 = FUN_144a61b4f();
    if (cVar2 == '\0') {
      QueryPerformanceCounter(&local_20);
      LOCK();
      *(longlong *)*param_1 =
           *(longlong *)*param_1 + (ulonglong)(local_20.s.LowPart - (int)param_1[1]);
      UNLOCK();
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      param_1 = (longlong *)*param_1;
      plVar1 = param_1 + 6;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if (((int)*plVar1 == 0) && (DAT_14cae4680 != 0)) {
        QueryPerformanceCounter(&local_20);
        LOCK();
        *param_1 = *param_1 + (ulonglong)(local_20.s.LowPart - *(int *)((longlong)param_1 + 0x34));
        UNLOCK();
        *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af1554 FUN_147af1554 body=124 status=ok
// SIG undefined FUN_147af1554(void)

void FUN_147af1554(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e38ef4);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af15d2 FUN_147af15d2 body=133 status=ok
// SIG undefined FUN_147af15d2(void)

longlong * FUN_147af15d2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar1 + 0x18 + lVar3) == param_3) ||
         ((lVar2 = *(longlong *)(lVar1 + 8 + lVar3), lVar2 != 0 &&
          (*(longlong *)(lVar2 + 0x18) == param_3)))) {
        lVar1 = lVar1 + lVar3;
        lVar3 = *(longlong *)(lVar1 + 0x10);
        *param_2 = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        param_2[3] = *(longlong *)(lVar1 + 0x28);
        lVar3 = *(longlong *)(lVar1 + 0x20);
        param_2[1] = *(longlong *)(lVar1 + 0x18);
        param_2[2] = lVar3;
        return param_2;
      }
      lVar3 = lVar3 + 0x78;
    } while ((longlong)*(int *)(param_1 + 0x30) * 0x78 - lVar3 != 0);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147af1658 FUN_147af1658 body=111 status=ok
// SIG undefined FUN_147af1658(void)

longlong FUN_147af1658(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28) + 0x10;
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x78;
    do {
      cVar1 = FUN_147af1712(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0x10) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar2 + -8);
        if (DAT_14c950c29 == '\x01') {
          if (lVar2 == 0) {
            return 0;
          }
          FUN_1456cec3c(lVar2);
          return lVar2;
        }
        return lVar2;
      }
      lVar2 = lVar2 + 0x78;
      lVar3 = lVar3 + -0x78;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 147af16c8 FUN_147af16c8 body=74 status=ok
// SIG undefined FUN_147af16c8(void)

longlong FUN_147af16c8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x78;
    do {
      cVar1 = FUN_147af1712(lVar3 + 0x10,param_2);
      if (cVar1 != '\0') goto LAB_147af16ff;
      lVar3 = lVar3 + 0x78;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_147af16ff:
  lVar2 = lVar3 + 0x30;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147af1712 FUN_147af1712 body=95 status=ok
// SIG undefined FUN_147af1712(void)

undefined4 FUN_147af1712(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (*param_1 == lVar1) {
    uVar2 = CONCAT31((int3)((*(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2)) >> 8),
                     *(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c) &&
                     ((int)param_1[3] == (int)param_2[3] &&
                     (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14) &&
                     (*(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2)) == 0)));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147af1772 FUN_147af1772 body=115 status=ok
// SIG undefined FUN_147af1772(void)

longlong * FUN_147af1772(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_147d11e46();
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
    }
    *param_1 = lVar1;
    lVar1 = *(longlong *)(param_2 + 200);
    param_1[2] = *(longlong *)(param_2 + 0xc0);
    param_1[3] = lVar1;
    param_1[1] = *(longlong *)(param_2 + 0xd0);
  }
  return param_1;
}



// FUNCTION 147af17ea FUN_147af17ea body=66 status=ok
// SIG undefined FUN_147af17ea(void)

undefined8 * FUN_147af17ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a919210;
  FUN_145e201aa();
  FUN_147aea2b8(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147af182c FUN_147af182c body=21 status=ok
// SIG undefined FUN_147af182c(void)

undefined * FUN_147af182c(void)

{
  FUN_147aea1da();
  return &DAT_14cae43e0;
}



// FUNCTION 147af1842 FUN_147af1842 body=63 status=ok
// SIG undefined FUN_147af1842(void)

void FUN_147af1842(longlong *param_1)

{
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147af1882 FUN_147af1882 body=276 status=ok
// SIG undefined FUN_147af1882(void)

undefined4 * FUN_147af1882(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147af1998(local_30);
  FUN_147af1aae(param_2,local_28);
  *(undefined4 *)(local_28 + 9) = 0xffffffff;
  uVar4 = DAT_14cae3fe8 - DAT_14cae4014;
  iVar6 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  uVar1 = *local_28;
  if (((int)uVar4 < 1) || (iVar6 <= DAT_14cae4028)) {
    uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar7 = (uint)uVar1 & 0xffff;
    uVar4 = DAT_14cae4028 - 1U &
            (uVar7 >> 4) +
            ((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar4 << 0x13 | uVar4 & 0xffff);
    *(uint *)((longlong)local_28 + 0x4c) = uVar4;
    puVar5 = &DAT_14cae4018;
    if (DAT_14cae4020 != (undefined *)0x0) {
      puVar5 = DAT_14cae4020;
    }
    *(undefined4 *)(local_28 + 9) = *(undefined4 *)(puVar5 + (longlong)(int)uVar4 * 4);
    *(undefined4 *)(puVar5 + ((longlong)DAT_14cae4028 - 1U & (longlong)(int)uVar4) * 4) =
         local_30[0];
  }
  else {
    DAT_14cae4028 = iVar6;
    FUN_147af1bba();
  }
  *param_1 = local_30[0];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af1998 FUN_147af1998 body=278 status=ok
// SIG undefined FUN_147af1998(void)

int * FUN_147af1998(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae4010;
  iVar4 = DAT_14cae3fe8;
  if (DAT_14cae4014 == 0) {
    iVar2 = DAT_14cae3fe8 + 1;
    bVar7 = DAT_14cae3fec == DAT_14cae3fe8;
    DAT_14cae3fe8 = iVar2;
    if (bVar7) {
      FUN_1406fba42(&DAT_14cae3fe0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae3ff0,1);
    puVar3 = DAT_14cae4000;
    if (DAT_14cae4000 == (undefined *)0x0) {
      puVar3 = &DAT_14cae3ff0;
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
    lVar6 = (longlong)DAT_14cae4010;
    DAT_14cae4010 = *(int *)(DAT_14cae3fe0 + 4 + lVar6 * 0x50);
    DAT_14cae4014 = DAT_14cae4014 + -1;
    iVar4 = iVar2;
    if (DAT_14cae4014 != 0) {
      *(undefined4 *)(DAT_14cae3fe0 + (longlong)DAT_14cae4010 * 0x50) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae3ff0;
  if (DAT_14cae4000 != (undefined *)0x0) {
    puVar3 = DAT_14cae4000;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x50 + DAT_14cae3fe0;
  return param_1;
}



// FUNCTION 147af1aae FUN_147af1aae body=163 status=ok
// SIG undefined FUN_147af1aae(void)

undefined8 FUN_147af1aae(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_58[2] = 0;
  plStack_40 = (longlong *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a5dc74();
  FUN_144a5dc74(&plStack_30);
  FUN_147af1b52(param_2,*param_1,local_58);
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x10))();
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af1b52 FUN_147af1b52 body=104 status=ok
// SIG undefined FUN_147af1b52(void)

undefined8 * FUN_147af1b52(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[3] = param_3[2];
  FUN_14023423e(param_1 + 4,param_3 + 3);
  FUN_14023423e(param_1 + 6,param_3 + 5);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_3 + 7);
  return param_1;
}



// FUNCTION 147af1bba FUN_147af1bba body=518 status=ok
// SIG undefined FUN_147af1bba(void)

void FUN_147af1bba(void)

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
  if (DAT_14cae4020 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cae4020,0,0,4);
  }
  uVar3 = DAT_14cae4028;
  uVar2 = local_50;
  if (DAT_14cae4028 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cae4018,0,DAT_14cae4028,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14cae4020;
        if (DAT_14cae4020 == (undefined *)0x0) {
          puVar5 = &DAT_14cae4018;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cae4028 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cae3ff0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cae4008 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cae3fe0;
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
        lVar6 = (longlong)iVar4 * 0x50;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cae4028 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x4c + lVar6) = iVar8;
        puVar5 = DAT_14cae4020;
        if (DAT_14cae4020 == (undefined *)0x0) {
          puVar5 = &DAT_14cae4018;
        }
        *(undefined4 *)(lVar1 + 0x48 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cae4028 - 1U & uVar9) * 4);
        puVar5 = DAT_14cae4020;
        if (DAT_14cae4020 == (undefined *)0x0) {
          puVar5 = &DAT_14cae4018;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cae4028 - 1U) * 4) = iVar4;
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



// FUNCTION 147af1dc2 FUN_147af1dc2 body=120 status=ok
// SIG undefined FUN_147af1dc2(void)

void FUN_147af1dc2(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cae47a0;
  if (DAT_14cae47d4 != 0) {
    *(int *)(DAT_14cae47a0 + (longlong)DAT_14cae47d0 * 8) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 8) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cae47d4) {
    iVar4 = DAT_14cae47d0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 8) = iVar4;
  DAT_14cae47d4 = DAT_14cae47d4 + 1;
  puVar3 = &DAT_14cae47b0;
  if (DAT_14cae47c0 != (undefined *)0x0) {
    puVar3 = DAT_14cae47c0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cae47d0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147af1e3a FUN_147af1e3a body=254 status=ok
// SIG undefined FUN_147af1e3a(void)

int * FUN_147af1e3a(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae47d0;
  iVar4 = DAT_14cae47a8;
  if (DAT_14cae47d4 == 0) {
    iVar2 = DAT_14cae47a8 + 1;
    bVar7 = DAT_14cae47ac == DAT_14cae47a8;
    DAT_14cae47a8 = iVar2;
    if (bVar7) {
      FUN_14055ddfe(&DAT_14cae47a0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae47b0,1);
    puVar3 = DAT_14cae47c0;
    if (DAT_14cae47c0 == (undefined *)0x0) {
      puVar3 = &DAT_14cae47b0;
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
    lVar6 = (longlong)DAT_14cae47d0;
    DAT_14cae47d0 = *(int *)(DAT_14cae47a0 + 4 + lVar6 * 8);
    DAT_14cae47d4 = DAT_14cae47d4 + -1;
    iVar4 = iVar2;
    if (DAT_14cae47d4 != 0) {
      *(undefined4 *)(DAT_14cae47a0 + (longlong)DAT_14cae47d0 * 8) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae47b0;
  if (DAT_14cae47c0 != (undefined *)0x0) {
    puVar3 = DAT_14cae47c0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 8 + DAT_14cae47a0;
  return param_1;
}



// FUNCTION 147af1f76 FUN_147af1f76 body=54 status=ok
// SIG undefined FUN_147af1f76(void)

undefined1 FUN_147af1f76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147af20f2(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147af1fd4 FUN_147af1fd4 body=59 status=ok
// SIG undefined FUN_147af1fd4(void)

undefined8 FUN_147af1fd4(longlong *param_1)

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



// FUNCTION 147af201a FUN_147af201a body=34 status=ok
// SIG undefined FUN_147af201a(void)

void FUN_147af201a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_147af208a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147af208a FUN_147af208a body=60 status=ok
// SIG undefined FUN_147af208a(void)

void FUN_147af208a(longlong param_1)

{
  FUN_147af20c6(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147af20c6 FUN_147af20c6 body=43 status=ok
// SIG undefined FUN_147af20c6(void)

void FUN_147af20c6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147af20f2 FUN_147af20f2 body=120 status=ok
// SIG undefined FUN_147af20f2(void)

longlong * FUN_147af20f2(longlong *param_1,longlong *param_2)

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
  FUN_144756208(param_1 + 2,param_2 + 2);
  FUN_147af216a(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 147af216a FUN_147af216a body=95 status=ok
// SIG undefined FUN_147af216a(void)

undefined8 * FUN_147af216a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147af20c6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147af21ca(param_1,iVar1);
      FUN_147af222c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147af21ca FUN_147af21ca body=98 status=ok
// SIG undefined FUN_147af21ca(void)

void FUN_147af21ca(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147af222c FUN_147af222c body=119 status=ok
// SIG undefined FUN_147af222c(void)

void FUN_147af222c(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147af22e4 FUN_147af22e4 body=129 status=ok
// SIG undefined FUN_147af22e4(void)

undefined1 FUN_147af22e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar8) = *(undefined8 *)(param_3 + 0x10 + lVar8);
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x18) = lVar7;
      *(undefined8 *)(param_2 + lVar8 + 0x20) = *(undefined8 *)(param_3 + 0x20 + lVar8);
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147af238e FUN_147af238e body=59 status=ok
// SIG undefined FUN_147af238e(void)

undefined8 FUN_147af238e(longlong *param_1)

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



// FUNCTION 147af2460 FUN_147af2460 body=112 status=ok
// SIG undefined FUN_147af2460(void)

undefined1 FUN_147af2460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147af24f8 FUN_147af24f8 body=59 status=ok
// SIG undefined FUN_147af24f8(void)

undefined8 FUN_147af24f8(longlong *param_1)

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



// FUNCTION 147af25e0 FUN_147af25e0 body=54 status=ok
// SIG undefined FUN_147af25e0(void)

undefined1 FUN_147af25e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147af26f4(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147af263e FUN_147af263e body=59 status=ok
// SIG undefined FUN_147af263e(void)

undefined8 FUN_147af263e(longlong *param_1)

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



// FUNCTION 147af2684 FUN_147af2684 body=33 status=ok
// SIG undefined FUN_147af2684(void)

void FUN_147af2684(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1400d0e42(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147af26f4 FUN_147af26f4 body=201 status=ok
// SIG undefined FUN_147af26f4(void)

longlong * FUN_147af26f4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[1];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar4;
  lVar4 = param_2[2];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[2];
    }
  }
  param_1[2] = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar4 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 4) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  param_1[5] = param_2[5];
  FUN_147985cbc(param_1 + 6,param_2 + 6);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar4 = param_2[9];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(int *)(param_1 + 9) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  *(short *)(param_1 + 10) = (short)param_2[10];
  FUN_147985d0c(param_1 + 0xb,param_2 + 0xb);
  FUN_1447a122a(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 147af27be FUN_147af27be body=75 status=ok
// SIG undefined FUN_147af27be(void)

undefined8 * FUN_147af27be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a920000;
  FUN_144725486();
  *param_1 = &PTR_FUN_14a920030;
  FUN_14476820c(param_1 + 2);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147af280a FUN_147af280a body=60 status=ok
// SIG undefined FUN_147af280a(void)

undefined8 * FUN_147af280a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a920030;
  FUN_14476820c(param_1 + 2);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147af2846 FUN_147af2846 body=110 status=ok
// SIG undefined FUN_147af2846(void)

void FUN_147af2846(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_147af28b6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147af28b6 FUN_147af28b6 body=132 status=ok
// SIG undefined FUN_147af28b6(void)

void FUN_147af28b6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 147af293a FUN_147af293a body=132 status=ok
// SIG undefined FUN_147af293a(void)

void FUN_147af293a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0xe8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0xec)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xec) = iVar6;
    FUN_147af29c0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147af29c0 FUN_147af29c0 body=141 status=ok
// SIG undefined FUN_147af29c0(void)

void FUN_147af29c0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xe0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xe0,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0xe0),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xe0,param_2,param_3,0x38);
  return;
}



// FUNCTION 147af2a4e FUN_147af2a4e body=136 status=ok
// SIG undefined FUN_147af2a4e(void)

void FUN_147af2a4e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0xac)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_147af2ad8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147af2ad8 FUN_147af2ad8 body=149 status=ok
// SIG undefined FUN_147af2ad8(void)

void FUN_147af2ad8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x28);
  return;
}



// FUNCTION 147af2b6e FUN_147af2b6e body=124 status=ok
// SIG undefined FUN_147af2b6e(void)

void FUN_147af2b6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147af2bec(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147af2bec FUN_147af2bec body=131 status=ok
// SIG undefined FUN_147af2bec(void)

void FUN_147af2bec(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147af2c70 FUN_147af2c70 body=64 status=ok
// SIG undefined FUN_147af2c70(void)

void FUN_147af2c70(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147af2cb0 FUN_147af2cb0 body=48 status=ok
// SIG undefined FUN_147af2cb0(void)

void FUN_147af2cb0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147af2ce0 FUN_147af2ce0 body=297 status=ok
// SIG undefined FUN_147af2ce0(void)

void FUN_147af2ce0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000147af2d01:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(int *)(param_1 + iVar5) <= *(int *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(int *)(param_1 + iVar2) < *(int *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000147af2d01;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
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
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(int *)(param_1 + iVar5) <= *(int *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(int *)(param_1 + iVar6) <= *(int *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
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



// FUNCTION 147af2e0a FUN_147af2e0a body=48 status=ok
// SIG undefined FUN_147af2e0a(void)

void FUN_147af2e0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147af2e3a FUN_147af2e3a body=132 status=ok
// SIG undefined FUN_147af2e3a(void)

void FUN_147af2e3a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147af2ec0 FUN_147af2ec0 body=121 status=ok
// SIG undefined FUN_147af2ec0(void)

void FUN_147af2ec0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a920140;
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a920148;
  lVar1 = 0x100;
  do {
    FUN_1400200e4((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x80);
  lVar1 = 0x80;
  do {
    FUN_1400200e4((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 147af2f3a FUN_147af2f3a body=38 status=ok
// SIG undefined FUN_147af2f3a(void)

undefined8 FUN_147af2f3a(undefined8 param_1,int param_2)

{
  FUN_147af2ec0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147af2f60 FUN_147af2f60 body=92 status=ok
// SIG undefined FUN_147af2f60(void)

undefined8 * FUN_147af2f60(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a920148;
  lVar1 = 0x100;
  do {
    FUN_1400200e4((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x80);
  lVar1 = 0x80;
  do {
    FUN_1400200e4((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147af2fbc FUN_147af2fbc body=38 status=ok
// SIG undefined FUN_147af2fbc(void)

undefined8 FUN_147af2fbc(undefined8 param_1,int param_2)

{
  FUN_147af2fe2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147af2fe2 FUN_147af2fe2 body=78 status=ok
// SIG undefined FUN_147af2fe2(void)

void FUN_147af2fe2(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a920148;
  lVar1 = 0x100;
  do {
    FUN_1400200e4(param_1 + 0x10 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x80);
  lVar1 = 0x80;
  do {
    FUN_1400200e4(param_1 + 0x10 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 147af3030 FUN_147af3030 body=68 status=ok
// SIG undefined FUN_147af3030(void)

void FUN_147af3030(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147af3074(param_1);
  return;
}



// FUNCTION 147af3074 FUN_147af3074 body=423 status=ok
// SIG undefined FUN_147af3074(void)

void FUN_147af3074(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 147af321c FUN_147af321c body=95 status=ok
// SIG undefined FUN_147af321c(void)

void FUN_147af321c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_147af327c();
  return;
}



// FUNCTION 147af327c FUN_147af327c body=56 status=ok
// SIG undefined FUN_147af327c(void)

void FUN_147af327c(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_147af32b4(param_1,param_2);
  return;
}



// FUNCTION 147af32b4 FUN_147af32b4 body=122 status=ok
// SIG undefined FUN_147af32b4(void)

void FUN_147af32b4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147af332e FUN_147af332e body=324 status=ok
// SIG undefined FUN_147af332e(void)

undefined4 * FUN_147af332e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_147af3474(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[8] = *(uint *)(puVar1 + 3);
  *(undefined8 *)(local_40 + 6) = puVar1[2];
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147af3562(param_1,uVar5,local_40,&local_4c);
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
      local_40[0xb] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[10] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147af3074(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af3474 FUN_147af3474 body=238 status=ok
// SIG undefined FUN_147af3474(void)

int * FUN_147af3474(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147af3562 FUN_147af3562 body=172 status=ok
// SIG undefined FUN_147af3562(void)

undefined8 FUN_147af3562(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_3 + 8);
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147af32b4(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = piVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147af360e FUN_147af360e body=370 status=ok
// SIG undefined FUN_147af360e(void)

longlong * FUN_147af360e(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
      FUN_147af39c6(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147af3781(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147af39c6(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147af38d4(param_2);
        FUN_147af3781(param_1,uVar3);
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



// FUNCTION 147af3781 FUN_147af3781 body=339 status=ok
// SIG undefined FUN_147af3781(void)

longlong * FUN_147af3781(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1447712aa();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447712aa(param_1,param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x24);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147af38d4 FUN_147af38d4 body=63 status=ok
// SIG undefined FUN_147af38d4(void)

longlong FUN_147af38d4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147af3932(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147af3913(lVar2);
  return lVar2;
}



// FUNCTION 147af3913 FUN_147af3913 body=30 status=ok
// SIG undefined FUN_147af3913(void)

void FUN_147af3913(undefined8 *param_1)

{
  *param_1 = 0x7f7fffff7f7fffff;
  param_1[1] = 0xffffffff7f7fffff;
  param_1[2] = 0x80000000800000;
  param_1[3] = 0xffffffff00800000;
  param_1[4] = 0xffffffffffffffff;
  return;
}



// FUNCTION 147af3932 FUN_147af3932 body=147 status=ok
// SIG undefined FUN_147af3932(void)

void FUN_147af3932(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147af39c6 FUN_147af39c6 body=112 status=ok
// SIG undefined FUN_147af39c6(void)

void FUN_147af39c6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,4);
  }
  return;
}



// FUNCTION 147af3a36 FUN_147af3a36 body=360 status=ok
// SIG undefined FUN_147af3a36(void)

longlong * FUN_147af3a36(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
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
      FUN_140b46408(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147af3b9f(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140b46408(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147af3d0a(param_2);
        FUN_147af3b9f(param_1,uVar3);
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



// FUNCTION 147af3b9f FUN_147af3b9f body=363 status=ok
// SIG undefined FUN_147af3b9f(void)

longlong * FUN_147af3b9f(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1447712aa();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447712aa(param_1,param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x24),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447712aa(param_1,param_2 + 0x28);
  FUN_1447712aa(param_1,param_2 + 0x34);
  return param_1;
}



// FUNCTION 147af3d0a FUN_147af3d0a body=59 status=ok
// SIG undefined FUN_147af3d0a(void)

longlong FUN_147af3d0a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147af2e3a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_147af3d45(lVar2);
  return lVar2;
}



// FUNCTION 147af3d45 FUN_147af3d45 body=78 status=ok
// SIG undefined FUN_147af3d45(void)

void FUN_147af3d45(undefined8 *param_1)

{
  *param_1 = 0x7f7fffff7f7fffff;
  param_1[1] = 0xffffffff7f7fffff;
  param_1[2] = 0x80000000800000;
  param_1[3] = 0xffffffff00800000;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0x7f7fffff7f7fffff;
  param_1[6] = 0xff7fffff7f7fffff;
  param_1[7] = &DAT_ff7fffffff7fffff;
  return;
}



// FUNCTION 147af3dbc FUN_147af3dbc body=93 status=ok
// SIG undefined FUN_147af3dbc(void)

void FUN_147af3dbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a920210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9201a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147af3e1a FUN_147af3e1a body=126 status=ok
// SIG undefined FUN_147af3e1a(void)

void FUN_147af3e1a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a920210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9201a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147af3e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147af3ea8 FUN_147af3ea8 body=253 status=ok
// SIG undefined FUN_147af3ea8(void)

void FUN_147af3ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae4848);
  uVar4 = (ulonglong)DAT_14cae4878;
  if (0 < (longlong)uVar4) {
    bVar5 = false;
    DAT_14cae4884 = DAT_14cae4884 + 1;
    do {
      lVar6 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while (((*(int *)(DAT_14cae4870 + lVar6) != 0 &&
              (plVar1 = *(longlong **)(DAT_14cae4870 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4,param_5),
             cVar3 != '\0'))) {
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          DAT_14cae4884 = DAT_14cae4884 + -1;
          if (!bVar5) goto LAB_147af3f87;
          goto LAB_147af3f71;
        }
      }
      uVar4 = uVar7 - 1;
      bVar5 = true;
    } while (1 < uVar7);
    DAT_14cae4884 = DAT_14cae4884 + -1;
LAB_147af3f71:
    FUN_14109be94(&DAT_14cae4848,0);
  }
LAB_147af3f87:
                    /* WARNING: Could not recover jumptable at 0x000147af3f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae4848);
  return;
}



// FUNCTION 147af3fa6 FUN_147af3fa6 body=113 status=ok
// SIG undefined FUN_147af3fa6(void)

void FUN_147af3fa6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 147af4018 FUN_147af4018 body=96 status=ok
// SIG undefined FUN_147af4018(void)

void FUN_147af4018(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 147af4078 FUN_147af4078 body=95 status=ok
// SIG undefined FUN_147af4078(void)

void FUN_147af4078(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x80 + *param_1);
  FUN_145894e19(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar2 << 7);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147af40d8 FUN_147af40d8 body=62 status=ok
// SIG undefined FUN_147af40d8(void)

void FUN_147af40d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147af4116(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}



// FUNCTION 147af4116 FUN_147af4116 body=93 status=ok
// SIG undefined FUN_147af4116(void)

ulonglong FUN_147af4116(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,8);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 147af4174 FUN_147af4174 body=132 status=ok
// SIG undefined FUN_147af4174(void)

void FUN_147af4174(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147af41fa FUN_147af41fa body=48 status=ok
// SIG undefined FUN_147af41fa(void)

void FUN_147af41fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,8);
  }
  return;
}



// FUNCTION 147af422a FUN_147af422a body=132 status=ok
// SIG undefined FUN_147af422a(void)

void FUN_147af422a(longlong param_1,int param_2)

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



// FUNCTION 147af42b0 FUN_147af42b0 body=147 status=ok
// SIG undefined FUN_147af42b0(void)

void FUN_147af42b0(longlong param_1,int param_2)

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



// FUNCTION 147af4344 FUN_147af4344 body=61 status=ok
// SIG undefined FUN_147af4344(void)

void FUN_147af4344(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 147af4382 FUN_147af4382 body=132 status=ok
// SIG undefined FUN_147af4382(void)

void FUN_147af4382(longlong param_1,int param_2)

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



// FUNCTION 147af4408 FUN_147af4408 body=62 status=ok
// SIG undefined FUN_147af4408(void)

void FUN_147af4408(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147af4446(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147af4446 FUN_147af4446 body=93 status=ok
// SIG undefined FUN_147af4446(void)

ulonglong FUN_147af4446(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147af44a4 FUN_147af44a4 body=132 status=ok
// SIG undefined FUN_147af44a4(void)

void FUN_147af44a4(longlong param_1,int param_2)

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



// FUNCTION 147af452a FUN_147af452a body=62 status=ok
// SIG undefined FUN_147af452a(void)

void FUN_147af452a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147af4568(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147af4568 FUN_147af4568 body=93 status=ok
// SIG undefined FUN_147af4568(void)

ulonglong FUN_147af4568(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147af45ca FUN_147af45ca body=786 status=ok
// SIG undefined FUN_147af45ca(void)

void FUN_147af45ca(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  byte local_c0;
  byte local_bf;
  char cStack_be;
  undefined1 uStack_bd;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  uStack_70 = 0;
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x28);
      cStack_be = *(char *)(lVar6 + 0xc + lVar5 * 0x18);
      uVar1 = *(undefined8 *)(lVar6 + 4 + lVar5 * 0x18);
      local_bf = local_bf & 0xfe;
      uStack_bc = (undefined4)uVar1;
      uStack_b8 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uStack_b4 = 0xffffffff;
      local_90 = 0;
      lStack_88 = 0;
      local_a0 = 0;
      lStack_98 = 0;
      local_b0 = 0;
      lStack_a8 = 0;
      local_80 = 0;
      local_c0 = *(byte *)(lVar6 + lVar5 * 0x18) & 2 | *(byte *)(lVar6 + lVar5 * 0x18) & 1;
      FUN_147af48de(&local_b0,param_3,*(undefined8 *)(lVar6 + 0x10 + lVar5 * 0x18));
      if (((*(byte *)(lVar6 + lVar5 * 0x18) & 4) != 0) &&
         (uVar7 = (ulonglong)*(int *)(param_2 + 0x178), 0 < (longlong)uVar7)) {
        lVar6 = uVar7 << 4;
        do {
          lVar6 = lVar6 + -0x10;
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x170) + lVar6);
          if ((*(longlong *)(lVar2 + 4) == CONCAT44(uStack_b8,uStack_bc)) &&
             (*(char *)(lVar2 + 2) == cStack_be)) {
            FUN_1479e0cd4(param_2,(int)uVar7 + -1);
          }
          bVar3 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar3);
      }
      uVar7 = uStack_70;
      lVar6 = (longlong)(int)uStack_70;
      uVar4 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
      if (uStack_70._4_4_ < uVar4) {
        FUN_147b4d966(&local_78,uVar7 & 0xffffffff);
      }
      *(byte *)(local_78 + lVar6 * 0x48) = local_c0;
      *(ulonglong *)(local_78 + 1 + lVar6 * 0x48) =
           CONCAT17((undefined1)uStack_b8,
                    CONCAT43(uStack_bc,CONCAT12(uStack_bd,CONCAT11(cStack_be,local_bf))));
      *(ulonglong *)(local_78 + 8 + lVar6 * 0x48) = CONCAT44(uStack_b4,uStack_b8);
      *(undefined8 *)(local_78 + 0x10 + lVar6 * 0x48) = local_b0;
      *(longlong *)(local_78 + 0x18 + lVar6 * 0x48) = lStack_a8;
      if (lStack_a8 != 0) {
        LOCK();
        *(int *)(lStack_a8 + 8) = *(int *)(lStack_a8 + 8) + 1;
        UNLOCK();
      }
      lVar6 = local_78 + lVar6 * 0x48;
      *(undefined8 *)(lVar6 + 0x20) = local_a0;
      *(longlong *)(lVar6 + 0x28) = lStack_98;
      if (lStack_98 != 0) {
        LOCK();
        *(int *)(lStack_98 + 8) = *(int *)(lStack_98 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(lVar6 + 0x30) = local_90;
      *(longlong *)(lVar6 + 0x38) = lStack_88;
      if (lStack_88 != 0) {
        LOCK();
        *(int *)(lStack_88 + 8) = *(int *)(lStack_88 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(lVar6 + 0x40) = local_80;
      FUN_14128edda(&local_b0);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x30));
    uVar7 = uStack_70 & 0xffffffff;
    if (0 < (int)uStack_70) {
      lVar5 = 0x40;
      lVar6 = 0;
      do {
        local_108 = *(undefined1 *)(local_78 + -0x40 + lVar5);
        uVar1 = *(undefined8 *)(local_78 + -0x3f + lVar5);
        uStack_ff = (undefined7)((ulonglong)*(undefined8 *)(local_78 + -0x38 + lVar5) >> 8);
        local_107 = (undefined7)uVar1;
        uStack_100 = (undefined1)((ulonglong)uVar1 >> 0x38);
        local_f8 = *(undefined8 *)(local_78 + -0x30 + lVar5);
        local_f0 = *(longlong *)(local_78 + -0x28 + lVar5);
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
          UNLOCK();
        }
        local_e8 = *(undefined8 *)(local_78 + -0x20 + lVar5);
        local_e0 = *(longlong *)(local_78 + -0x18 + lVar5);
        if (local_e0 != 0) {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        local_d8 = *(undefined8 *)(local_78 + -0x10 + lVar5);
        local_d0 = *(longlong *)(local_78 + -8 + lVar5);
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
          UNLOCK();
        }
        local_c8 = *(undefined1 *)(local_78 + lVar5);
        FUN_1479e08fa(param_2,&local_108);
        lVar6 = lVar6 + 1;
        uVar7 = (ulonglong)(int)uStack_70;
        lVar5 = lVar5 + 0x48;
      } while (lVar6 < (longlong)uVar7);
    }
  }
  FUN_147b4d93b(local_78,uVar7);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af48de FUN_147af48de body=284 status=ok
// SIG undefined FUN_147af48de(void)

void FUN_147af48de(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1477aa018();
  *(undefined1 *)(param_1 + 0x30) = 3;
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a9727a0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x28);
    if (plVar5 == (longlong *)0x0) goto LAB_147af499f;
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_147af495e:
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
    if (plVar4 == (longlong *)0x0) goto LAB_147af499f;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x20) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x28);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x28) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_147af495e;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_147af499f:
  lVar3 = *(longlong *)(param_1 + 0x20);
  FUN_14485c47a(lVar3,param_2);
  *(undefined8 *)(lVar3 + 8) = param_3;
  return;
}



// FUNCTION 147af49fe FUN_147af49fe body=908 status=ok
// SIG undefined FUN_147af49fe(void)

void FUN_147af49fe(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  byte local_b0;
  longlong local_ac;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_c8 = param_3;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar14 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x130);
    lVar15 = 0;
    local_d0 = param_2;
    local_c0 = param_1;
    do {
      pbVar2 = (byte *)(*(longlong *)(local_c0 + 0x28) + lVar15 * 0x14);
      local_b8 = lVar15;
      if ((*(longlong *)(pbVar2 + 0xc) == 0) &&
         (iVar3 = *(int *)(local_d0 + 0x138), (longlong)iVar3 != 0)) {
        lVar15 = *(longlong *)(local_d0 + 0x130);
        lVar13 = 0;
        do {
          if (*(longlong *)(pbVar2 + 4) == *(longlong *)(lVar15 + 4 + lVar13)) {
            plVar9 = *(longlong **)(lVar15 + 0x10 + lVar13);
            puVar12 = *(undefined **)(lVar15 + 0x20 + lVar13);
            if (puVar12 == (undefined *)0x0) {
              puVar12 = &DAT_14a97262c;
            }
            if (plVar9 == (longlong *)0x0) {
              plVar9 = &DAT_14cae6e60;
            }
            if (((((int)plVar9[1] == 0) || ((longlong *)*plVar9 == (longlong *)0x0)) ||
                (cVar7 = (**(code **)(*(longlong *)*plVar9 + 0x30))(), cVar7 == '\0')) &&
               (*(longlong *)(puVar12 + 8) == 0)) goto LAB_147af4c55;
          }
          lVar13 = lVar13 + 0x38;
        } while ((longlong)iVar3 * 0x38 - lVar13 != 0);
      }
      local_ac = *(longlong *)(pbVar2 + 4);
      local_90 = 0;
      lStack_88 = 0;
      local_a0 = 0;
      lStack_98 = 0;
      local_80 = 0;
      local_b0 = *pbVar2 & 2 | *pbVar2 & 1;
      FUN_147af4d8c(&local_a0,local_c8,*(undefined8 *)(pbVar2 + 0xc));
      if (((*pbVar2 & 4) != 0) &&
         (uVar14 = (ulonglong)*(int *)(local_d0 + 0x138), 0 < (longlong)uVar14)) {
        lVar15 = uVar14 * 0x38 + -0x18;
        do {
          lVar13 = *plVar1;
          if (*(longlong *)(lVar13 + -0x1c + lVar15) == local_ac) {
            plVar9 = *(longlong **)(lVar13 + -0x10 + lVar15);
            puVar12 = *(undefined **)(lVar13 + lVar15);
            if (puVar12 == (undefined *)0x0) {
              puVar12 = &DAT_14a97262c;
            }
            if (plVar9 == (longlong *)0x0) {
              plVar9 = &DAT_14cae6e60;
            }
            if (((((int)plVar9[1] != 0) && ((longlong *)*plVar9 != (longlong *)0x0)) &&
                (cVar7 = (**(code **)(*(longlong *)*plVar9 + 0x30))(), cVar7 != '\0')) ||
               (*(longlong *)(puVar12 + 8) != 0)) {
              FUN_147af4ed4(plVar1,(int)uVar14 + -1);
            }
          }
          lVar15 = lVar15 + -0x38;
          bVar5 = 1 < uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar5);
      }
      uVar14 = uStack_70;
      lVar15 = (longlong)(int)uStack_70;
      uVar8 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      if (uStack_70._4_4_ < uVar8) {
        FUN_145963e4e(&local_78,uVar14 & 0xffffffff);
      }
      lVar15 = lVar15 * 0x38;
      *(byte *)(local_78 + lVar15) = local_b0;
      *(longlong *)(local_78 + 4 + lVar15) = local_ac;
      *(undefined8 *)(local_78 + 0x10 + lVar15) = local_a0;
      *(longlong *)(local_78 + 0x18 + lVar15) = lStack_98;
      if (lStack_98 != 0) {
        LOCK();
        *(int *)(lStack_98 + 8) = *(int *)(lStack_98 + 8) + 1;
        UNLOCK();
      }
      lVar15 = local_78 + lVar15;
      *(undefined8 *)(lVar15 + 0x20) = local_90;
      *(longlong *)(lVar15 + 0x28) = lStack_88;
      if (lStack_88 != 0) {
        LOCK();
        *(int *)(lStack_88 + 8) = *(int *)(lStack_88 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(lVar15 + 0x30) = local_80;
      FUN_1457dfb3e(&local_a0);
LAB_147af4c55:
      lVar13 = local_d0;
      lVar15 = local_b8 + 1;
    } while (lVar15 < *(int *)(local_c0 + 0x30));
    uVar14 = uStack_70 & 0xffffffff;
    if (0 < (int)uStack_70) {
      lVar15 = 0x30;
      lVar16 = 0;
      do {
        lVar6 = local_78;
        iVar3 = *(int *)(lVar13 + 0x138);
        *(uint *)(lVar13 + 0x138) = iVar3 + 1U;
        if (*(uint *)(lVar13 + 0x13c) < iVar3 + 1U) {
          FUN_145963e4e(plVar1,iVar3);
        }
        lVar10 = *plVar1;
        lVar11 = (longlong)iVar3 * 0x38;
        *(undefined1 *)(lVar10 + lVar11) = *(undefined1 *)(lVar6 + -0x30 + lVar15);
        *(undefined8 *)(lVar10 + 4 + lVar11) = *(undefined8 *)(lVar6 + -0x2c + lVar15);
        *(undefined8 *)(lVar10 + 0x10 + lVar11) = *(undefined8 *)(lVar6 + -0x20 + lVar15);
        lVar4 = *(longlong *)(lVar6 + -0x18 + lVar15);
        *(longlong *)(lVar10 + 0x18 + lVar11) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        lVar10 = lVar10 + lVar11;
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar6 + -0x10 + lVar15);
        lVar4 = *(longlong *)(lVar6 + -8 + lVar15);
        *(longlong *)(lVar10 + 0x28) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar6 + lVar15);
        lVar16 = lVar16 + 1;
        uVar14 = (ulonglong)(int)uStack_70;
        lVar15 = lVar15 + 0x38;
      } while (lVar16 < (longlong)uVar14);
    }
  }
  FUN_140ffc2c1(local_78,uVar14);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af4d8c FUN_147af4d8c body=327 status=ok
// SIG undefined FUN_147af4d8c(void)

void FUN_147af4d8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    param_1[1] = 0;
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
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a974ff0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar5 = (longlong *)param_1[3];
    if (plVar5 == (longlong *)0x0) goto LAB_147af4e78;
    param_1[3] = 0;
LAB_147af4e37:
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
    if (plVar4 == (longlong *)0x0) goto LAB_147af4e78;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[2] = plVar4 + 2;
    plVar5 = (longlong *)param_1[3];
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
      param_1[3] = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_147af4e37;
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
LAB_147af4e78:
  lVar3 = param_1[2];
  FUN_14485c47a(lVar3,param_2);
  *(undefined8 *)(lVar3 + 8) = param_3;
  return;
}



// FUNCTION 147af4ed4 FUN_147af4ed4 body=91 status=ok
// SIG undefined FUN_147af4ed4(void)

void FUN_147af4ed4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_1457dfb3e(lVar1 + (longlong)(int)param_2 * 0x38 + 0x10);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x38);
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar2) * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_147b4da1a(param_1);
  return;
}



// FUNCTION 147af4f34 FUN_147af4f34 body=649 status=ok
// SIG undefined FUN_147af4f34(void)

void FUN_147af4f34(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  byte local_98 [4];
  undefined4 local_94;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar8 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x140);
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x28);
      local_b0 = *(undefined8 *)(lVar7 + 8 + lVar9 * 0x28);
      local_a8 = *(undefined8 *)(lVar7 + 0x10 + lVar9 * 0x28);
      local_a0 = *(longlong *)(lVar7 + 0x18 + lVar9 * 0x28);
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      pbVar2 = (byte *)(lVar7 + lVar9 * 0x28);
      FUN_147af51be(local_98,&local_b0);
      local_98[0] = local_98[0] & 0xfc | *pbVar2 & 1 | *pbVar2 & 2;
      FUN_147af4d8c(&local_78,param_3,*(undefined8 *)(pbVar2 + 0x20));
      if (((*pbVar2 & 4) != 0) &&
         (uVar8 = (ulonglong)*(int *)(param_2 + 0x148), 0 < (longlong)uVar8)) {
        lVar7 = uVar8 * 0x40 + -0x38;
        do {
          if (*(longlong *)(*plVar1 + lVar7) == local_90) {
            FUN_147af523e(plVar1,(int)uVar8 + -1);
          }
          lVar7 = lVar7 + -0x40;
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar4);
      }
      uVar8 = uStack_50;
      lVar7 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_147b4dbc2(&local_58,uVar8 & 0xffffffff);
      }
      lVar7 = lVar7 * 0x40;
      *(byte *)(local_58 + lVar7) = local_98[0];
      *(undefined4 *)(local_58 + 4 + lVar7) = local_94;
      *(longlong *)(local_58 + 8 + lVar7) = local_90;
      *(undefined8 *)(local_58 + 0x10 + lVar7) = local_88;
      *(longlong *)(local_58 + 0x18 + lVar7) = local_80;
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      lVar7 = local_58 + lVar7;
      *(undefined8 *)(lVar7 + 0x20) = local_78;
      *(longlong *)(lVar7 + 0x28) = local_70;
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(lVar7 + 0x30) = local_68;
      *(longlong *)(lVar7 + 0x38) = local_60;
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1479f6d90(local_98);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x30));
    uVar8 = uStack_50 & 0xffffffff;
    if (0 < (int)uStack_50) {
      lVar7 = 0;
      lVar9 = 0;
      do {
        lVar6 = local_58 + lVar7;
        iVar3 = *(int *)(param_2 + 0x148);
        *(uint *)(param_2 + 0x148) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x14c) < iVar3 + 1U) {
          FUN_147b4dbc2(plVar1,iVar3);
        }
        FUN_147b4db5c((longlong)iVar3 * 0x40 + *plVar1,lVar6);
        lVar9 = lVar9 + 1;
        uVar8 = (ulonglong)(int)uStack_50;
        lVar7 = lVar7 + 0x40;
      } while (lVar9 < (longlong)uVar8);
    }
  }
  FUN_140ffc271(local_58,uVar8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af51be FUN_147af51be body=127 status=ok
// SIG undefined FUN_147af51be(void)

byte * FUN_147af51be(byte *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = (*param_1 & 0xfc) + 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  lVar3 = param_2[2];
  *(longlong *)(param_1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_140f47498(param_1 + 8);
  plVar4 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 147af523e FUN_147af523e body=82 status=ok
// SIG undefined FUN_147af523e(void)

void FUN_147af523e(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + *param_1);
  FUN_1479f6d90(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147b4dac0(param_1);
  return;
}



// FUNCTION 147af52a6 FUN_147af52a6 body=223 status=ok
// SIG undefined FUN_147af52a6(void)

void FUN_147af52a6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c == local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af538c FUN_147af538c body=223 status=ok
// SIG undefined FUN_147af538c(void)

void FUN_147af538c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c == local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af546c FUN_147af546c body=199 status=ok
// SIG undefined FUN_147af546c(void)

void FUN_147af546c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,plVar3);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5534 FUN_147af5534 body=199 status=ok
// SIG undefined FUN_147af5534(void)

void FUN_147af5534(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,plVar3);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af55fc FUN_147af55fc body=199 status=ok
// SIG undefined FUN_147af55fc(void)

void FUN_147af55fc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,plVar3);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af56c4 FUN_147af56c4 body=286 status=ok
// SIG undefined FUN_147af56c4(void)

void FUN_147af56c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  uVar1 = local_2c;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2,uVar1,plVar3);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af57e4 FUN_147af57e4 body=96 status=ok
// SIG undefined FUN_147af57e4(void)

void FUN_147af57e4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x50))(plVar1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5846 FUN_147af5846 body=165 status=ok
// SIG undefined FUN_147af5846(void)

void FUN_147af5846(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  uVar1 = local_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_144a81a0a();
  uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,uVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af58ec FUN_147af58ec body=184 status=ok
// SIG undefined FUN_147af58ec(void)

void FUN_147af58ec(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar2 + 0x58))(plVar2,&local_24,uVar1);
  uVar3 = FUN_1435331ae(local_24);
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af59a6 FUN_147af59a6 body=154 status=ok
// SIG undefined FUN_147af59a6(void)

void FUN_147af59a6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1435331ae(local_1c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5a42 FUN_147af5a42 body=178 status=ok
// SIG undefined FUN_147af5a42(void)

void FUN_147af5a42(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  uVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_28,uVar1);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5af6 FUN_147af5af6 body=96 status=ok
// SIG undefined FUN_147af5af6(void)

void FUN_147af5af6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x48))(plVar1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5b58 FUN_147af5b58 body=178 status=ok
// SIG undefined FUN_147af5b58(void)

void FUN_147af5b58(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  uVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar2 + 0x58))(plVar2,&local_28,uVar1);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5c0c FUN_147af5c0c body=96 status=ok
// SIG undefined FUN_147af5c0c(void)

void FUN_147af5c0c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5c8c FUN_147af5c8c body=172 status=ok
// SIG undefined FUN_147af5c8c(void)

void FUN_147af5c8c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a9b908(local_24);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar2 = local_24;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a9b916(puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5d40 FUN_147af5d40 body=165 status=ok
// SIG undefined FUN_147af5d40(void)

void FUN_147af5d40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  uVar1 = local_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_144a81a0a();
  uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5dec FUN_147af5dec body=165 status=ok
// SIG undefined FUN_147af5dec(void)

void FUN_147af5dec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  uVar1 = local_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_144a81a0a();
  uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,uVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5e98 FUN_147af5e98 body=150 status=ok
// SIG undefined FUN_147af5e98(void)

void FUN_147af5e98(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = -1 < local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5f36 FUN_147af5f36 body=150 status=ok
// SIG undefined FUN_147af5f36(void)

void FUN_147af5f36(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c != -1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af5fd4 FUN_147af5fd4 body=223 status=ok
// SIG undefined FUN_147af5fd4(void)

void FUN_147af5fd4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c != local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af60ba FUN_147af60ba body=223 status=ok
// SIG undefined FUN_147af60ba(void)

void FUN_147af60ba(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = -1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c != local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af61ba FUN_147af61ba body=727 status=ok
// SIG undefined FUN_147af61ba(void)

void FUN_147af61ba(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  byte local_d8;
  char local_d7;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar13 = 0;
  }
  else {
    plVar3 = (longlong *)(param_2 + 0x110);
    lVar11 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x28);
      lVar10 = lVar11 * 0x38;
      local_d7 = *(char *)(lVar9 + 0x28 + lVar10);
      local_d0 = *(longlong *)(lVar9 + 8 + lVar10);
      local_c8 = *(undefined8 *)(lVar9 + 0x10 + lVar10);
      plVar6 = *(longlong **)(lVar9 + 0x18 + lVar10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        param_4 = local_d8;
      }
      pbVar12 = (byte *)(lVar9 + lVar10);
      param_4 = (param_4 & 0xfc) + 1;
      bVar4 = pbVar12[0x20];
      local_d8 = param_4;
      local_c0 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        local_b8 = CONCAT31(local_b8._1_3_,bVar4);
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_80 = 0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_b8 = CONCAT31(local_b8._1_3_,bVar4);
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_80 = 0;
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
      local_d8 = local_d8 & 0xfc | *pbVar12 & 1 | *pbVar12 & 2;
      FUN_147af48de(&local_b0,param_3,*(undefined8 *)(pbVar12 + 0x2c));
      if (((*pbVar12 & 4) != 0) &&
         (uVar13 = (ulonglong)*(int *)(param_2 + 0x118), 0 < (longlong)uVar13)) {
        lVar9 = uVar13 * 0x60 + -0x5f;
        do {
          lVar10 = *plVar3;
          if (((*(longlong *)(lVar10 + 7 + lVar9) == local_d0) &&
              (((local_b8 ^ *(uint *)(lVar10 + 0x1f + lVar9)) & 0xf) == 0)) &&
             (*(char *)(lVar10 + lVar9) == local_d7)) {
            FUN_147af6492(plVar3,(int)uVar13 + -1);
          }
          lVar9 = lVar9 + -0x60;
          bVar7 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar7);
      }
      uVar13 = uStack_70;
      lVar9 = (longlong)(int)uStack_70;
      uVar8 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      if (uStack_70._4_4_ < uVar8) {
        FUN_1463df508(&local_78,uVar13 & 0xffffffff);
      }
      FUN_147b4dcf6(lVar9 * 0x60 + local_78,&local_d8);
      FUN_140ffc3da(&local_d8);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x30));
    uVar13 = uStack_70 & 0xffffffff;
    if (0 < (int)uStack_70) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        lVar10 = local_78 + lVar9;
        iVar5 = *(int *)(param_2 + 0x118);
        *(uint *)(param_2 + 0x118) = iVar5 + 1U;
        if (*(uint *)(param_2 + 0x11c) < iVar5 + 1U) {
          FUN_1463df508(plVar3,iVar5);
        }
        FUN_147b4dcf6((longlong)iVar5 * 0x60 + *plVar3,lVar10);
        lVar11 = lVar11 + 1;
        uVar13 = (ulonglong)(int)uStack_70;
        lVar9 = lVar9 + 0x60;
      } while (lVar11 < (longlong)uVar13);
    }
  }
  FUN_140ffc299(local_78,uVar13);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af6492 FUN_147af6492 body=87 status=ok
// SIG undefined FUN_147af6492(void)

void FUN_147af6492(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x60 + *param_1);
  FUN_140ffc3da(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x60),(longlong)(int)(~param_2 + iVar1) * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147b4dc48(param_1);
  return;
}



// FUNCTION 147af64ee FUN_147af64ee body=623 status=ok
// SIG undefined FUN_147af64ee(void)

void FUN_147af64ee(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [40];
  byte local_a0;
  char local_9f;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar11 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x120);
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x28);
      lVar10 = lVar8 * 0x10;
      local_9f = *(char *)(lVar9 + 4 + lVar10);
      local_88 = 0;
      lStack_80 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_a0 = *(byte *)(lVar9 + lVar10) & 2 | *(byte *)(lVar9 + lVar10) & 1;
      FUN_147af675e(&local_98,param_3,*(undefined8 *)(lVar9 + 8 + lVar10));
      if (((*(byte *)(lVar9 + lVar10) & 4) != 0) &&
         (uVar11 = (ulonglong)*(int *)(param_2 + 0x128), 0 < (longlong)uVar11)) {
        lVar9 = uVar11 * 0x28 + -0x27;
        do {
          if (*(char *)(*plVar1 + lVar9) != local_9f) {
            FUN_147af68a6(plVar1,(int)uVar11 + -1);
          }
          lVar9 = lVar9 + -0x28;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      uVar11 = uStack_70;
      lVar9 = (longlong)(int)uStack_70;
      uVar6 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
      if (uStack_70._4_4_ < uVar6) {
        FUN_147a6e446(&local_78,uVar11 & 0xffffffff);
      }
      *(byte *)(local_78 + lVar9 * 0x28) = local_a0;
      *(char *)(local_78 + 1 + lVar9 * 0x28) = local_9f;
      *(undefined8 *)(local_78 + 8 + lVar9 * 0x28) = local_98;
      *(longlong *)(local_78 + 0x10 + lVar9 * 0x28) = lStack_90;
      if (lStack_90 != 0) {
        LOCK();
        *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
        UNLOCK();
      }
      lVar9 = local_78 + lVar9 * 0x28;
      *(undefined8 *)(lVar9 + 0x18) = local_88;
      *(longlong *)(lVar9 + 0x20) = lStack_80;
      if (lStack_80 != 0) {
        LOCK();
        *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
        UNLOCK();
      }
      FUN_1479f6d2c(&local_98);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x30));
    uVar11 = uStack_70 & 0xffffffff;
    if (0 < (int)uStack_70) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        lVar10 = local_78;
        iVar2 = *(int *)(param_2 + 0x128);
        lVar7 = (longlong)iVar2;
        *(uint *)(param_2 + 0x128) = iVar2 + 1U;
        if (*(uint *)(param_2 + 300) < iVar2 + 1U) {
          FUN_147a6e446(plVar1,iVar2);
        }
        lVar3 = *plVar1;
        *(undefined1 *)(lVar3 + lVar7 * 0x28) = *(undefined1 *)(lVar10 + lVar8);
        *(undefined1 *)(lVar3 + 1 + lVar7 * 0x28) = *(undefined1 *)(lVar10 + 1 + lVar8);
        *(undefined8 *)(lVar3 + 8 + lVar7 * 0x28) = *(undefined8 *)(lVar10 + 8 + lVar8);
        lVar4 = *(longlong *)(lVar10 + 0x10 + lVar8);
        *(longlong *)(lVar3 + 0x10 + lVar7 * 0x28) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar10 + 0x18 + lVar8);
        lVar10 = *(longlong *)(lVar10 + 0x20 + lVar8);
        *(longlong *)(lVar3 + 0x20) = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        lVar9 = lVar9 + 1;
        uVar11 = (ulonglong)(int)uStack_70;
        lVar8 = lVar8 + 0x28;
      } while (lVar9 < (longlong)uVar11);
    }
  }
  FUN_140ffc2ed(local_78,uVar11);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af675e FUN_147af675e body=327 status=ok
// SIG undefined FUN_147af675e(void)

void FUN_147af675e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    param_1[1] = 0;
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
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a975010;
  plVar4[2] = 0;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar5 = (longlong *)param_1[3];
    if (plVar5 == (longlong *)0x0) goto LAB_147af684a;
    param_1[3] = 0;
LAB_147af6809:
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
    if (plVar4 == (longlong *)0x0) goto LAB_147af684a;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[2] = plVar4 + 2;
    plVar5 = (longlong *)param_1[3];
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
      param_1[3] = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_147af6809;
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
LAB_147af684a:
  lVar3 = param_1[2];
  FUN_14485c47a(lVar3,param_2);
  *(undefined8 *)(lVar3 + 8) = param_3;
  return;
}



// FUNCTION 147af68a6 FUN_147af68a6 body=93 status=ok
// SIG undefined FUN_147af68a6(void)

void FUN_147af68a6(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  FUN_1479f6d2c(lVar1 + (longlong)(int)param_2 * 0x28 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_147b4dd66(param_1);
  return;
}



// FUNCTION 147af6908 FUN_147af6908 body=685 status=ok
// SIG undefined FUN_147af6908(void)

void FUN_147af6908(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  byte local_b0 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = 0;
  uStack_50 = 0;
  local_d0 = param_3;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar8 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x150);
    lVar10 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x28);
      local_c8 = *(undefined8 *)(lVar9 + 8 + lVar10 * 0x28);
      local_c0 = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 0x28);
      local_b8 = *(longlong *)(lVar9 + 0x18 + lVar10 * 0x28);
      if (local_b8 != 0) {
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
        UNLOCK();
      }
      pbVar2 = (byte *)(lVar9 + lVar10 * 0x28);
      FUN_147af6bb6(local_b0,&local_c8);
      local_b0[0] = local_b0[0] & 0xfc | *pbVar2 & 1 | *pbVar2 & 2;
      FUN_147af6c40(&local_78,local_d0,*(undefined8 *)(pbVar2 + 0x20));
      if (((*pbVar2 & 4) != 0) &&
         (uVar8 = (ulonglong)*(int *)(param_2 + 0x158), 0 < (longlong)uVar8)) {
        lVar9 = uVar8 * 0x58 + -0x38;
        do {
          if (*(longlong *)(*plVar1 + lVar9) == local_90) {
            FUN_147af6d88(plVar1,(int)uVar8 + -1);
          }
          lVar9 = lVar9 + -0x58;
          bVar5 = 1 < uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar5);
      }
      uVar8 = uStack_50;
      lVar9 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_147b4df46(&local_58,uVar8 & 0xffffffff);
      }
      lVar9 = lVar9 * 0x58;
      *(byte *)(local_58 + lVar9) = local_b0[0];
      puVar3 = (undefined4 *)(local_58 + 8 + lVar9);
      *puVar3 = local_a8;
      puVar3[1] = uStack_a4;
      puVar3[2] = uStack_a0;
      puVar3[3] = uStack_9c;
      *(undefined8 *)(local_58 + 0x18 + lVar9) = local_98;
      *(longlong *)(local_58 + 0x20 + lVar9) = local_90;
      *(undefined8 *)(local_58 + 0x28 + lVar9) = local_88;
      *(longlong *)(local_58 + 0x30 + lVar9) = local_80;
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      lVar9 = local_58 + lVar9;
      *(undefined8 *)(lVar9 + 0x38) = local_78;
      *(longlong *)(lVar9 + 0x40) = local_70;
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(lVar9 + 0x48) = local_68;
      *(longlong *)(lVar9 + 0x50) = local_60;
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1479f6dd4(local_b0);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x30));
    uVar8 = uStack_50 & 0xffffffff;
    if (0 < (int)uStack_50) {
      lVar9 = 0;
      lVar10 = 0;
      do {
        lVar7 = local_58 + lVar9;
        iVar4 = *(int *)(param_2 + 0x158);
        *(uint *)(param_2 + 0x158) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x15c) < iVar4 + 1U) {
          FUN_147b4df46(plVar1,iVar4);
        }
        FUN_147b4deda((longlong)iVar4 * 0x58 + *plVar1,lVar7);
        lVar10 = lVar10 + 1;
        uVar8 = (ulonglong)(int)uStack_50;
        lVar9 = lVar9 + 0x58;
      } while (lVar10 < (longlong)uVar8);
    }
  }
  FUN_140ffc249(local_58,uVar8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af6bb6 FUN_147af6bb6 body=137 status=ok
// SIG undefined FUN_147af6bb6(void)

byte * FUN_147af6bb6(byte *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  
  *param_1 = (*param_1 & 0xfc) + 1;
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  lVar3 = param_2[2];
  *(longlong *)(param_1 + 0x30) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  cVar5 = FUN_144a8fce0(param_1 + 0x20);
  if (cVar5 == '\0') {
    FUN_144aa26b8(param_1 + 0x20);
  }
  plVar4 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 147af6c40 FUN_147af6c40 body=327 status=ok
// SIG undefined FUN_147af6c40(void)

void FUN_147af6c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    param_1[1] = 0;
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
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a975030;
  plVar4[2] = 0;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar5 = (longlong *)param_1[3];
    if (plVar5 == (longlong *)0x0) goto LAB_147af6d2c;
    param_1[3] = 0;
LAB_147af6ceb:
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
    if (plVar4 == (longlong *)0x0) goto LAB_147af6d2c;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[2] = plVar4 + 2;
    plVar5 = (longlong *)param_1[3];
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
      param_1[3] = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_147af6ceb;
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
LAB_147af6d2c:
  lVar3 = param_1[2];
  FUN_14485c47a(lVar3,param_2);
  *(undefined8 *)(lVar3 + 8) = param_3;
  return;
}



// FUNCTION 147af6d88 FUN_147af6d88 body=79 status=ok
// SIG undefined FUN_147af6d88(void)

void FUN_147af6d88(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x58 + *param_1);
  FUN_1479f6dd4(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x58),(longlong)(int)(~param_2 + iVar1) * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147b4de34(param_1);
  return;
}



// FUNCTION 147af6dd8 FUN_147af6dd8 body=138 status=ok
// SIG undefined FUN_147af6dd8(void)

undefined8 FUN_147af6dd8(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(param_1 + 0x68) + -1;
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  lVar3 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  local_18 = *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18);
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_144b1ca16(&local_28,param_2,(longlong)param_3 * 0x30 + *(longlong *)(param_1 + 0xd0));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af6e64 FUN_147af6e64 body=301 status=ok
// SIG undefined FUN_147af6e64(void)

void FUN_147af6e64(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(ushort *)(param_1 + 0x118) =
       (ushort)*(undefined4 *)(param_1 + 0x118) & 0xfbff | (ushort)((int)param_2[1] != 0) << 10;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a975050;
  plVar3[2] = *param_2;
  *param_2 = 0;
  *(int *)(plVar3 + 3) = (int)param_2[1];
  *(undefined4 *)((longlong)plVar3 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x128);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x120) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x128);
    if (plVar3 == plVar4) {
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
      goto LAB_147af6f25;
    }
    *(longlong **)(param_1 + 0x128) = plVar3;
    if (plVar4 == (longlong *)0x0) goto LAB_147af6f25;
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
LAB_147af6f25:
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
      return;
    }
  }
  return;
}



// FUNCTION 147af6fac FUN_147af6fac body=219 status=ok
// SIG undefined FUN_147af6fac(void)

void FUN_147af6fac(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  
  param_2[10] = *(longlong *)(param_1 + 0x40);
  param_2[0xb] = *(longlong *)(param_1 + 0x60);
  param_2[0xc] = *(longlong *)(param_1 + 0x80);
  param_2[0xd] = *(longlong *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x44);
  *param_2 = param_1 + 0x28;
  param_2[1] = 0x504100000000000;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x48);
  lVar1 = param_1 + 0x48;
  uVar4 = 0x30;
  if (bVar2 != 0) {
    uVar4 = 0x18;
  }
  cVar5 = (bVar2 != 0) * '\t' + '\x04';
  param_2[2] = lVar1;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1d) = uVar4;
  *(char *)((longlong)param_2 + 0x1e) = cVar5;
  *(undefined1 *)((longlong)param_2 + 0x1f) = 5;
  cVar3 = (bVar2 ^ 1) * '\b' + '\b';
  param_2[4] = lVar1;
  *(undefined4 *)(param_2 + 5) = 0;
  *(char *)((longlong)param_2 + 0x2c) = cVar3;
  *(undefined1 *)((longlong)param_2 + 0x2d) = uVar4;
  *(char *)((longlong)param_2 + 0x2e) = cVar5;
  *(undefined1 *)((longlong)param_2 + 0x2f) = 5;
  param_2[6] = lVar1;
  *(undefined4 *)(param_2 + 7) = 0;
  *(char *)((longlong)param_2 + 0x3c) = cVar3 * '\x02';
  *(undefined1 *)((longlong)param_2 + 0x3d) = uVar4;
  *(char *)((longlong)param_2 + 0x3e) = cVar5;
  *(undefined1 *)((longlong)param_2 + 0x3f) = 5;
  param_2[8] = param_1 + 0x68;
  param_2[9] = 0x50e080000000000;
  return;
}



// FUNCTION 147af7088 FUN_147af7088 body=253 status=ok
// SIG undefined FUN_147af7088(void)

void FUN_147af7088(void)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong in_stack_00000028;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 *local_c0;
  undefined1 local_b0 [128];
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = local_b0;
  local_30 = 0;
  local_28 = 0x800000000;
  local_c8 = in_stack_00000028;
  FUN_1417ca9f0();
  uVar4 = (uint)DAT_14ca85550;
  cVar2 = FUN_144a798df(uVar4,DAT_14c760db4);
  if ((cVar2 != '\0') &&
     (((&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf] != 1 ||
      ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)uVar4 * 0x3c + 1) & 0x10) == 0)))) {
    uVar3 = local_28 & 0xff;
    iVar1 = *(int *)(in_stack_00000028 + 0x88);
    *(uint *)(in_stack_00000028 + 0x88) = iVar1 + 1U;
    if (*(uint *)(in_stack_00000028 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(in_stack_00000028,iVar1);
    }
    *(ulonglong *)(in_stack_00000028 + (longlong)iVar1 * 8) = uVar3 | 0x100040d140000;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af7186 FUN_147af7186 body=57 status=ok
// SIG undefined FUN_147af7186(void)

void FUN_147af7186(undefined8 *param_1,int param_2)

{
  FUN_1407602ab(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147b4e356(param_1,param_2);
  return;
}



// FUNCTION 147af71c0 FUN_147af71c0 body=83 status=ok
// SIG undefined FUN_147af71c0(void)

void FUN_147af71c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x20))();
  if (lVar1 != 0) {
    FUN_1405ec298(param_1 + 0x8c8,param_2,lVar1);
  }
  FUN_143658c62(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147af7214 FUN_147af7214 body=74 status=ok
// SIG undefined FUN_147af7214(void)

undefined8
FUN_147af7214(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 < *(int *)(param_1 + 0x8e0)) &&
     (uVar2 = param_5, cVar1 = FUN_147d5b9d0(), cVar1 != '\0')) {
    FUN_140aa9642(param_1,param_2,param_3,param_5,uVar2,param_6);
    return 1;
  }
  return 0;
}



// FUNCTION 147af725e FUN_147af725e body=94 status=ok
// SIG undefined FUN_147af725e(void)

undefined8
FUN_147af725e(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 < *(int *)(param_1 + 0x8e0)) &&
     (uVar2 = param_7, cVar1 = FUN_147d5bb6c(param_1), cVar1 != '\0')) {
    FUN_140aa9642(param_1,param_2,param_3,param_7,param_5,param_6,uVar2);
    return 1;
  }
  return 0;
}



// FUNCTION 147af72e2 FUN_147af72e2 body=6239 status=ok
// SIG undefined FUN_147af72e2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147af72e2(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  void *pvVar14;
  double *pdVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  longlong *plVar35;
  undefined8 *puVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_818 [32];
  undefined1 local_7f8;
  undefined1 local_7f0;
  undefined1 local_7e8;
  double *local_7e0;
  ulonglong local_7d8;
  undefined4 local_7cc;
  ulonglong local_7c8;
  longlong local_7c0;
  longlong local_7b8;
  longlong *local_7b0;
  undefined8 local_7a8;
  longlong local_7a0;
  longlong local_798;
  double local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined4 local_778;
  undefined4 local_774;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined4 local_744;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 local_710;
  undefined1 local_708 [128];
  undefined8 *local_688;
  undefined8 uStack_680;
  double local_678;
  undefined8 uStack_670;
  void *local_668;
  undefined8 uStack_660;
  undefined1 local_658 [8];
  longlong local_650;
  uint local_648;
  uint local_644;
  undefined4 uStack_640;
  undefined8 uStack_63c;
  undefined1 local_630;
  byte local_62f;
  undefined4 local_62e;
  undefined4 local_628;
  undefined8 local_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined8 uStack_60c;
  undefined8 local_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined8 uStack_5ec;
  undefined8 local_5e0;
  undefined1 local_5d8 [8];
  longlong local_5d0;
  uint local_5c8;
  uint local_5c4;
  undefined4 uStack_5c0;
  undefined8 uStack_5bc;
  undefined1 local_5b0;
  byte local_5af;
  undefined4 local_5ae;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined8 uStack_58c;
  undefined8 local_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined8 uStack_56c;
  undefined8 local_560;
  longlong local_558;
  longlong local_550;
  uint local_548;
  uint local_544;
  undefined4 uStack_540;
  undefined8 uStack_53c;
  undefined1 local_530;
  byte local_52f;
  undefined4 local_52e;
  undefined4 local_528;
  longlong local_520;
  uint uStack_518;
  uint uStack_514;
  undefined4 uStack_510;
  undefined8 uStack_50c;
  undefined8 local_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined8 uStack_4ec;
  undefined8 local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  undefined8 local_458;
  uint local_450;
  undefined4 local_44c;
  undefined1 local_448;
  undefined4 local_444;
  int local_440;
  undefined4 local_43c;
  longlong local_438;
  undefined8 local_430;
  undefined1 local_428;
  uint local_424;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  double local_3d8;
  double local_3d0;
  double local_3c8 [3];
  double local_3b0;
  double local_3a8;
  undefined8 local_3a0;
  double local_398;
  double local_390;
  double local_388;
  undefined8 local_380;
  double local_378;
  double local_370;
  double local_368;
  undefined8 local_360;
  double *local_330;
  ulonglong local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  uint uStack_2f8;
  uint uStack_2f4;
  byte local_2f0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_818;
  if ((*(int *)(DAT_14cae4d28 + 4) != 0) && ((*(byte *)((longlong)param_1 + 0x2cc) & 1) != 0)) {
    FUN_1400ec47a(param_1,&local_3d8);
    local_7d8 = (ulonglong)local_3d8 & 0xffffffff;
    if (local_7d8 != 0) {
      FUN_147ceea04(param_2);
      lVar28 = param_1[0x53];
      plVar35 = *(longlong **)(lVar28 + 0x48);
      uVar10 = 0;
      if ((char)plVar35[3] == '\x01') {
        uVar10 = *(int *)(lVar28 + 8) - 1;
        if ((int)*(uint *)(DAT_14cae4d40 + 4) < (int)uVar10) {
          uVar10 = *(uint *)(DAT_14cae4d40 + 4);
        }
        if ((int)uVar10 <= (int)(uint)*(byte *)(lVar28 + 0x8f)) {
          uVar10 = (uint)*(byte *)(lVar28 + 0x8f);
        }
      }
      if ((int)uVar10 < (int)plVar35[1]) {
        uVar34 = (ulonglong)uVar10;
        lVar28 = uVar34 * 0x450;
        do {
          lVar23 = **(longlong **)(*plVar35 + uVar34 * 8);
          cVar9 = FUN_147428482(lVar23);
          if (cVar9 == '\0') {
            cVar9 = FUN_1474283cc(lVar23);
            if ((cVar9 != '\0') && (cVar9 = FUN_1474283d8(lVar23), cVar9 == '\0')) {
              if (lVar23 != 0) {
                uStack_540 = 0;
                uStack_53c = 0;
                local_550 = 0;
                local_548 = 0;
                local_544 = 0;
                local_530 = 0xff;
                local_52f = local_52f & 0xe0;
                local_52e = 0x1000000;
                local_528 = 0;
                local_4e0 = 0;
                local_520 = 0;
                uStack_518 = 0;
                uStack_514 = 0;
                uStack_510 = 0;
                uStack_50c = 0;
                local_500 = 0;
                uStack_4f8 = 0;
                uStack_4f4 = 0;
                uStack_4f0 = 0;
                uStack_4ec = 0;
                uStack_5c0 = 0;
                uStack_5bc = 0;
                local_5d0 = 0;
                local_5c8 = 0;
                local_5c4 = 0;
                local_5b0 = 0xff;
                local_5af = local_5af & 0xe0;
                local_5ae = 0x1000000;
                local_5a8 = 0;
                local_560 = 0;
                local_5a0 = 0;
                uStack_598 = 0;
                uStack_594 = 0;
                uStack_590 = 0;
                uStack_58c = 0;
                uStack_640 = 0;
                uStack_63c = 0;
                local_650 = 0;
                local_648 = 0;
                local_644 = 0;
                local_630 = 0xff;
                local_62f = local_62f & 0xe0;
                local_580 = 0;
                uStack_578 = 0;
                uStack_574 = 0;
                uStack_570 = 0;
                uStack_56c = 0;
                local_62e = 0x1000000;
                local_628 = 0;
                local_5e0 = 0;
                local_620 = 0;
                uStack_618 = 0;
                uStack_614 = 0;
                uStack_610 = 0;
                uStack_60c = 0;
                local_600 = 0;
                uStack_5f8 = 0;
                uStack_5f4 = 0;
                uStack_5f0 = 0;
                uStack_5ec = 0;
                local_668 = (void *)0x0;
                uStack_660 = 0;
                local_678 = 0.0;
                uStack_670 = 0;
                local_688 = (undefined8 *)0x0;
                uStack_680 = 0;
                uVar10 = *(uint *)(DAT_14cae4e18 + 4);
                uVar12 = (uint)local_7d8;
                uVar11 = uVar12;
                if (uVar10 != 0xffffffff) {
                  if (uVar12 <= uVar10) {
                    uVar10 = uVar12;
                  }
                  uVar11 = uVar10 + (uVar10 == 0);
                }
                uVar10 = 0x100;
                if (uVar11 < 0x100) {
                  uVar10 = uVar11;
                }
                local_7c8 = (ulonglong)uVar10;
                bVar37 = *(int *)(DAT_14cae4de8 + 4) == 0;
                if (*(int *)(DAT_14cae4de8 + 4) < 0) {
                  bVar37 = (*(byte *)((longlong)param_1 + 0x2cc) & 2) == 0;
                }
                local_7b8 = param_2;
                local_7b0 = param_1;
                local_558 = lVar23;
                if ((bVar37) || ((char)param_1[0x117] != '\x01')) {
                  local_7cc = 0;
                }
                else {
                  iVar25 = *(int *)(*(longlong *)(*(longlong *)param_1[0x11d] + uVar34 * 8) + 0x38);
                  local_7c0 = CONCAT44(local_7c0._4_4_,iVar25);
                  if (0 < iVar25) {
                    iVar25 = 0;
                    do {
                      local_330 = (double *)0x0;
                      local_328 = 0x100000000;
                      local_310 = 0;
                      local_320 = 0;
                      uStack_318 = 0;
                      uStack_308 = 0xffffffff;
                      local_300 = 0xff0000ffffffff;
                      uStack_2f8 = uStack_2f8 & 0xffffff00;
                      uStack_2f4 = 0x40c00f07;
                      local_2f0 = local_2f0 & 0xfc;
                      FUN_141793e06(&local_3d8);
                      local_7e8 = 0;
                      local_7f0 = 0;
                      local_7f8 = 0;
                      local_7e0 = &local_3d8;
                      cVar9 = FUN_14015294c(param_1,uVar34 & 0xffffffff,0,iVar25);
                      if (cVar9 == '\0') {
                        FUN_14003fbd6();
                        uStack_318 = (**(code **)(*DAT_14caea080 + 0x2f0))();
                        local_320 = *(longlong *)(param_1[0x53] + 0x10) + lVar28;
                        local_300._0_6_ = CONCAT24((short)iVar25,iVar25);
                      }
                      uVar10 = local_5c8;
                      uStack_2f4 = uStack_2f4 & 0xffffffbf | (*(uint *)(param_1 + 0x110) & 2) << 5;
                      lVar23 = (longlong)(int)local_5c8;
                      local_5c8 = local_5c8 + 1;
                      if (local_5c4 < local_5c8) {
                        FUN_147471df6(&local_5d0,uVar10);
                      }
                      lVar13 = local_5d0;
                      lVar23 = lVar23 * 0xf0;
                      *(undefined8 *)(local_5d0 + 0xa8 + lVar23) = 0;
                      pdVar15 = local_330;
                      if (local_330 == (double *)0x0) {
                        pdVar15 = &local_3d8;
                      }
                      FUN_144739392(local_5d0 + lVar23,pdVar15,local_328 & 0xffffffff,0);
                      *(byte *)(lVar13 + 0xe8 + lVar23) = local_2f0;
                      puVar3 = (undefined4 *)(lVar13 + 0xd8 + lVar23);
                      *puVar3 = (undefined4)local_300;
                      puVar3[1] = local_300._4_4_;
                      puVar3[2] = uStack_2f8;
                      puVar3[3] = uStack_2f4;
                      puVar3 = (undefined4 *)(lVar13 + 200 + lVar23);
                      *puVar3 = (undefined4)local_310;
                      puVar3[1] = local_310._4_4_;
                      puVar3[2] = (undefined4)uStack_308;
                      puVar3[3] = uStack_308._4_4_;
                      puVar3 = (undefined4 *)(lVar13 + 0xb8 + lVar23);
                      *puVar3 = (undefined4)local_320;
                      puVar3[1] = local_320._4_4_;
                      puVar3[2] = (undefined4)uStack_318;
                      puVar3[3] = uStack_318._4_4_;
                      FUN_1446fc232(&local_3d8);
                      local_330 = (double *)0x0;
                      local_328 = 0x100000000;
                      local_310 = 0;
                      local_320 = 0;
                      uStack_318 = 0;
                      uStack_308 = 0xffffffff;
                      local_300 = 0xff0000ffffffff;
                      uStack_2f8 = uStack_2f8 & 0xffffff00;
                      uStack_2f4 = 0x40c00f07;
                      local_2f0 = local_2f0 & 0xfc;
                      FUN_141793e06(&local_3d8);
                      param_1 = local_7b0;
                      local_7e8 = 0;
                      local_7f0 = 0;
                      local_7f8 = 0;
                      local_7e0 = &local_3d8;
                      cVar9 = (**(code **)(*local_7b0 + 0x250))
                                        (local_7b0,uVar34 & 0xffffffff,0,iVar25);
                      if (cVar9 == '\0') {
                        FUN_14003fbd6();
                        uStack_318 = (**(code **)(*DAT_14caea080 + 0x2f0))();
                        local_300._0_6_ = CONCAT24((short)iVar25,iVar25);
                      }
                      uVar10 = local_648;
                      uStack_2f4 = uStack_2f4 & 0xffffffbf | (*(uint *)(param_1 + 0x110) & 2) << 5;
                      local_320 = *(longlong *)(param_1[0x11b] + uVar34 * 8);
                      lVar23 = (longlong)(int)local_648;
                      local_648 = local_648 + 1;
                      if (local_644 < local_648) {
                        FUN_147471df6(&local_650,uVar10);
                      }
                      lVar13 = local_650;
                      lVar23 = lVar23 * 0xf0;
                      *(undefined8 *)(local_650 + 0xa8 + lVar23) = 0;
                      pdVar15 = local_330;
                      if (local_330 == (double *)0x0) {
                        pdVar15 = &local_3d8;
                      }
                      FUN_144739392(local_650 + lVar23,pdVar15,local_328 & 0xffffffff,0);
                      *(byte *)(lVar13 + 0xe8 + lVar23) = local_2f0;
                      puVar3 = (undefined4 *)(lVar13 + 0xd8 + lVar23);
                      *puVar3 = (undefined4)local_300;
                      puVar3[1] = local_300._4_4_;
                      puVar3[2] = uStack_2f8;
                      puVar3[3] = uStack_2f4;
                      puVar3 = (undefined4 *)(lVar13 + 200 + lVar23);
                      *puVar3 = (undefined4)local_310;
                      puVar3[1] = local_310._4_4_;
                      puVar3[2] = (undefined4)uStack_308;
                      puVar3[3] = uStack_308._4_4_;
                      puVar3 = (undefined4 *)(lVar13 + 0xb8 + lVar23);
                      *puVar3 = (undefined4)local_320;
                      puVar3[1] = local_320._4_4_;
                      puVar3[2] = (undefined4)uStack_318;
                      puVar3[3] = uStack_318._4_4_;
                      FUN_1446fc232(&local_3d8);
                      iVar25 = iVar25 + 1;
                    } while ((int)local_7c0 != iVar25);
                  }
                  uVar21 = local_7c8;
                  uVar10 = (uint)local_7c8;
                  FUN_147af8b44(param_1,local_7c8 & 0xffffffff,uVar34 & 0xffffffff);
                  iVar25 = (int)uStack_660;
                  lVar23 = (longlong)(int)uStack_660;
                  uStack_660 = CONCAT44(uStack_660._4_4_,(int)uStack_660 + uVar10);
                  if ((uint)(uStack_660._4_4_ - iVar25) < uVar10) {
                    FUN_1447808da(&local_668);
                  }
                  uVar20 = 0;
                  pvVar14 = memset((void *)(lVar23 * 4 + (longlong)local_668),0,
                                   (ulonglong)(uVar10 * 4));
                  param_2 = local_7b8;
                  if ((longlong)(int)uStack_660 != 0) {
                    pvVar14 = memset(local_668,(int)CONCAT71((int7)((ulonglong)uVar20 >> 8),0xff),
                                     (longlong)(int)uStack_660 << 2);
                  }
                  local_7cc = (undefined4)CONCAT71((int7)((ulonglong)pvVar14 >> 8),1);
                  if ((int)uStack_680._4_4_ < (int)uVar10) {
                    FUN_1472bff88(&local_688,uVar21 & 0xffffffff);
                  }
                  uVar12 = (uint)local_7d8;
                }
                pdVar15 = &local_3d8;
                if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4();
                }
                if ((int)uStack_670._4_4_ < (int)uVar12) {
                  FUN_14354139c(&local_678,local_7d8);
                }
                lVar23 = *(longlong *)(param_2 + 0x148);
                dVar4 = *(double *)(lVar23 + 0x10a0);
                dVar5 = *(double *)(lVar23 + 0x10a8);
                dVar6 = *(double *)(lVar23 + 0x10b0);
                lVar23 = (**(code **)(*param_1 + 0x220))(param_1);
                if (lVar23 != 0) {
                  FUN_144ae2964(lVar23);
                }
                local_7c0 = param_1[0x12];
                if (*(int *)(DAT_14cae4d58 + 4) < 1) {
                  iVar25 = 0;
                  uVar21 = local_7d8;
                  do {
                    uVar22 = uStack_670;
                    lVar23 = (longlong)(int)(uint)uStack_670;
                    uVar10 = (uint)uStack_670 + 1;
                    uStack_670 = CONCAT44(uStack_670._4_4_,uVar10);
                    if (uStack_670._4_4_ < uVar10) {
                      FUN_1435414cc(&local_678,uVar22 & 0xffffffff);
                      uVar21 = local_7d8;
                    }
                    *(int *)((longlong)local_678 + lVar23 * 8) = iVar25;
                    *(undefined4 *)((longlong)local_678 + 4 + lVar23 * 8) = 0xbf800000;
                    iVar25 = iVar25 + 1;
                    iVar19 = (int)uVar21;
                  } while (iVar19 != iVar25);
                }
                else {
                  fVar38 = *(float *)(DAT_14cae4dd0 + 4);
                  if (179.9 <= fVar38) {
                    fVar38 = 179.9;
                  }
                  if (0.0 <= fVar38 * 0.5) {
                    fVar38 = (fVar38 * 0.5) / 360.0;
                    fVar38 = tanf((fVar38 + fVar38) * 3.1415927);
                    iVar25 = 0;
                    do {
                      FUN_144b24146(local_7c0,&local_3d8,iVar25);
                      uVar21 = uStack_670;
                      iVar19 = (int)local_7d8;
                      fVar39 = (float)SQRT((dVar6 - local_3c8[0]) * (dVar6 - local_3c8[0]) +
                                           (dVar4 - local_3d8) * (dVar4 - local_3d8) +
                                           (dVar5 - local_3d0) * (dVar5 - local_3d0));
                      fVar40 = (float)local_3a8;
                      if (fVar38 * fVar39 <= fVar40) {
                        lVar23 = (longlong)(int)(uint)uStack_670;
                        uVar10 = (uint)uStack_670 + 1;
                        uStack_670 = CONCAT44(uStack_670._4_4_,uVar10);
                        if (uStack_670._4_4_ < uVar10) {
                          FUN_1435414cc(&local_678,uVar21 & 0xffffffff);
                          iVar19 = (int)local_7d8;
                        }
                        *(int *)((longlong)local_678 + lVar23 * 8) = iVar25;
                        *(float *)((longlong)local_678 + 4 + lVar23 * 8) = fVar39 - fVar40;
                      }
                      iVar25 = iVar25 + 1;
                    } while (iVar19 != iVar25);
                  }
                  else {
                    fVar38 = *(float *)(DAT_14cae4d88 + 4);
                    fVar39 = *(float *)(DAT_14cae4da0 + 4);
                    fVar40 = *(float *)(DAT_14cae4db8 + 4);
                    iVar25 = 0;
                    do {
                      FUN_144b24146(local_7c0,&local_3d8,iVar25);
                      uVar21 = uStack_670;
                      iVar19 = (int)local_7d8;
                      fVar41 = (float)SQRT((dVar6 - local_3c8[0]) * (dVar6 - local_3c8[0]) +
                                           (dVar4 - local_3d8) * (dVar4 - local_3d8) +
                                           (dVar5 - local_3d0) * (dVar5 - local_3d0)) -
                               (float)local_3a8;
                      if (((fVar38 <= 0.0) || (fVar41 <= fVar38)) &&
                         (((bool)(fVar39 <= (float)local_3a8 | ~(0.0 < fVar39 && 0.0 < fVar40) & 1U)
                          || (fVar41 <= fVar40)))) {
                        lVar23 = (longlong)(int)(uint)uStack_670;
                        uVar10 = (uint)uStack_670 + 1;
                        uStack_670 = CONCAT44(uStack_670._4_4_,uVar10);
                        if (uStack_670._4_4_ < uVar10) {
                          FUN_1435414cc(&local_678,uVar21 & 0xffffffff);
                          iVar19 = (int)local_7d8;
                        }
                        *(int *)((longlong)local_678 + lVar23 * 8) = iVar25;
                        *(float *)((longlong)local_678 + 4 + lVar23 * 8) = fVar41;
                      }
                      iVar25 = iVar25 + 1;
                    } while (iVar19 != iVar25);
                  }
                }
                lVar23 = local_7c0;
                if (((((char)local_7cc != '\0') && (0 < (int)(uint)uStack_670)) &&
                    ((uint)local_7c8 < (uint)uStack_670)) &&
                   (fVar38 = *(float *)(DAT_14cae4e00 + 4), 0.0 < fVar38)) {
                  if (*(int *)(DAT_14cae4d58 + 4) == 0) {
                    uVar10 = 0;
                    do {
                      FUN_144b24146(lVar23,&local_3d8,uVar10);
                      *(float *)((longlong)local_678 + 4 + (longlong)(int)uVar10 * 8) =
                           (float)SQRT((dVar6 - local_3c8[0]) * (dVar6 - local_3c8[0]) +
                                       (dVar4 - local_3d8) * (dVar4 - local_3d8) +
                                       (dVar5 - local_3d0) * (dVar5 - local_3d0)) - (float)local_3a8
                      ;
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < (uint)uStack_670);
                  }
                  dVar4 = local_678;
                  uVar10 = (uint)uStack_670 - 1;
                  iVar19 = (int)local_7d8;
                  if (uVar10 != 0) {
                    uVar21 = 0;
                    do {
                      lVar23 = (longlong)(int)uVar10;
                      if (*(float *)((longlong)local_678 + 4 + lVar23 * 8) <= fVar38) {
                        iVar25 = (int)uVar21;
                        uVar20 = *(undefined8 *)((longlong)local_678 + (longlong)iVar25 * 8);
                        *(undefined8 *)((longlong)local_678 + (longlong)iVar25 * 8) =
                             *(undefined8 *)((longlong)local_678 + lVar23 * 8);
                        *(undefined8 *)((longlong)local_678 + lVar23 * 8) = uVar20;
                        uVar21 = (ulonglong)(iVar25 + 1);
                      }
                      else {
                        uVar10 = uVar10 - 1;
                      }
                      uVar12 = (uint)uVar21;
                    } while (uVar12 < uVar10);
                    if (1 < (int)uVar12) {
                      memset(local_3c8,0,0x2f0);
                      local_3d8 = dVar4;
                      local_3d0 = (double)((longlong)dVar4 + uVar21 * 8 + -8);
                      fVar38 = logf((float)(int)uVar12);
                      local_3c8[0] = (double)CONCAT44(local_3c8[0]._4_4_,
                                                      (int)(longlong)(fVar38 + fVar38));
                      do {
                        puVar18 = (undefined8 *)*pdVar15;
                        puVar24 = (undefined8 *)pdVar15[1];
                        iVar25 = *(int *)(pdVar15 + 2);
                        iVar19 = (int)((ulonglong)((longlong)puVar24 - (longlong)puVar18) >> 3);
                        uVar10 = iVar19 + 1;
                        puVar26 = puVar24;
                        puVar36 = puVar18;
                        if (iVar25 != 0) {
LAB_147af884a:
                          if (8 < (int)uVar10) {
                            uVar20 = puVar18[uVar10 >> 1];
                            puVar18[uVar10 >> 1] = *puVar18;
                            *puVar18 = uVar20;
                            puVar32 = puVar26 + 1;
                            puVar17 = puVar18;
                            do {
                              puVar8 = puVar17 + 1;
                              puVar29 = puVar17 + 1;
                              do {
                                puVar17 = puVar29;
                                puVar33 = puVar8;
                                if (puVar26 < puVar17) break;
                                puVar8 = puVar33 + 1;
                                puVar29 = puVar17 + 1;
                              } while (*(float *)((longlong)puVar17 + 4) <
                                       *(float *)((longlong)puVar18 + 4) ||
                                       *(float *)((longlong)puVar17 + 4) ==
                                       *(float *)((longlong)puVar18 + 4));
                              puVar8 = puVar32 + -2;
                              do {
                                puVar29 = puVar32;
                                puVar27 = puVar8;
                                puVar32 = puVar29 + -1;
                                if (puVar32 <= puVar18) break;
                                puVar8 = puVar27 + -1;
                              } while (*(float *)((longlong)puVar18 + 4) <
                                       *(float *)((longlong)puVar29 + -4) ||
                                       *(float *)((longlong)puVar18 + 4) ==
                                       *(float *)((longlong)puVar29 + -4));
                              if (puVar32 < puVar17) goto LAB_147af88d2;
                              uVar20 = *puVar17;
                              *puVar17 = *puVar32;
                              *puVar32 = uVar20;
                            } while( true );
                          }
                          for (; puVar24 = puVar18, puVar36 = puVar18, puVar18 < puVar26;
                              puVar26 = puVar26 + -1) {
                            while (puVar32 = puVar24, puVar24 = puVar36 + 1, puVar24 <= puVar26) {
                              pfVar1 = (float *)((longlong)puVar36 + 0xc);
                              puVar36 = puVar24;
                              if (*pfVar1 < *(float *)((longlong)puVar32 + 4) ||
                                  *pfVar1 == *(float *)((longlong)puVar32 + 4)) {
                                puVar24 = puVar32;
                              }
                            }
                            uVar20 = *puVar32;
                            *puVar32 = *puVar26;
                            *puVar26 = uVar20;
                          }
                          goto LAB_147af8ac2;
                        }
LAB_147af896d:
                        if (uVar10 != 0) {
                          iVar25 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
                          iVar19 = iVar25;
joined_r0x000147af8990:
                          do {
                            iVar31 = iVar25 * 2 + 1;
                            if (iVar31 < (int)uVar10) {
                              iVar30 = iVar25 * 2 + 2;
                              if ((iVar30 < (int)uVar10) &&
                                 (fVar38 = *(float *)((longlong)puVar18 + (longlong)iVar31 * 8 + 4),
                                 pfVar1 = (float *)((longlong)puVar18 + (longlong)iVar30 * 8 + 4),
                                 fVar38 < *pfVar1 || fVar38 == *pfVar1)) {
                                iVar31 = iVar30;
                              }
                              lVar13 = (longlong)iVar25;
                              lVar23 = (longlong)iVar31;
                              fVar38 = *(float *)((longlong)puVar18 + lVar23 * 8 + 4);
                              pfVar1 = (float *)((longlong)puVar18 + lVar13 * 8 + 4);
                              if (*pfVar1 <= fVar38 && fVar38 != *pfVar1) {
                                uVar20 = puVar18[lVar13];
                                puVar18[lVar13] = puVar18[lVar23];
                                puVar18[lVar23] = uVar20;
                                iVar25 = iVar31;
                                goto joined_r0x000147af8990;
                              }
                            }
                            bVar37 = iVar19 != 0;
                            iVar25 = iVar19 + -1;
                            iVar19 = iVar25;
                          } while (bVar37);
                          if (1 < (int)uVar10) {
                            uVar21 = (ulonglong)uVar10;
                            uVar20 = *puVar18;
                            *puVar18 = puVar18[uVar21 - 1];
                            puVar18[uVar21 - 1] = uVar20;
                            if (uVar10 != 2) {
                              do {
                                uVar22 = uVar21 - 1;
                                iVar25 = 0;
                                iVar31 = 1;
                                iVar19 = 0;
                                do {
                                  iVar25 = iVar25 + 2;
                                  iVar30 = iVar31;
                                  if (((longlong)iVar25 < (longlong)uVar22) &&
                                     (fVar38 = *(float *)((longlong)puVar18 +
                                                         (longlong)iVar31 * 8 + 4),
                                     pfVar1 = (float *)((longlong)puVar18 + (longlong)iVar25 * 8 + 4
                                                       ), fVar38 < *pfVar1 || fVar38 == *pfVar1)) {
                                    iVar30 = iVar25;
                                  }
                                  lVar23 = (longlong)iVar19;
                                  lVar13 = (longlong)iVar30;
                                  fVar38 = *(float *)((longlong)puVar18 + lVar13 * 8 + 4);
                                  pfVar1 = (float *)((longlong)puVar18 + lVar23 * 8 + 4);
                                  if (fVar38 < *pfVar1 || fVar38 == *pfVar1) break;
                                  uVar20 = puVar18[lVar23];
                                  puVar18[lVar23] = puVar18[lVar13];
                                  puVar18[lVar13] = uVar20;
                                  iVar25 = iVar30 * 2;
                                  iVar31 = iVar30 * 2 + 1;
                                  iVar19 = iVar30;
                                } while ((longlong)iVar31 < (longlong)uVar22);
                                uVar20 = *puVar18;
                                *puVar18 = puVar18[uVar21 - 2];
                                puVar18[uVar21 - 2] = uVar20;
                                uVar21 = uVar22;
                              } while (2 < uVar22);
                            }
                          }
                        }
LAB_147af8ac2:
                        pdVar15 = pdVar15 + -3;
                      } while (&local_3d8 <= pdVar15);
                      iVar19 = (int)local_7d8;
                      param_1 = local_7b0;
                    }
                  }
                }
                uVar21 = local_7c8;
                if ((int)uStack_514 < iVar19) {
                  FUN_14480809c(&local_520,local_7d8);
                }
                local_798 = (longlong)(int)(uint)uStack_670;
                if (local_798 != 0) {
                  local_790 = local_678;
                  local_798 = local_798 << 3;
                  lVar23 = 0;
                  do {
                    uVar10 = *(uint *)((longlong)local_790 + lVar23);
                    lVar13 = *(longlong *)(local_7c0 + 0xd0);
                    lVar16 = (longlong)(int)uVar10 * 0x30;
                    pfVar1 = (float *)(lVar13 + 0xc + lVar16);
                    pfVar2 = (float *)(lVar13 + 0x18 + lVar16);
                    local_3d8 = (double)*(float *)(lVar13 + lVar16);
                    local_3d0 = (double)((float *)(lVar13 + lVar16))[1];
                    local_3c8[0] = (double)*(float *)(lVar13 + 8 + lVar16);
                    local_3c8[1] = 0.0;
                    local_3c8[2] = (double)*pfVar1;
                    local_3b0 = (double)pfVar1[1];
                    local_3a8 = (double)*(float *)(lVar13 + 0x14 + lVar16);
                    local_3a0 = 0;
                    local_398 = (double)*pfVar2;
                    local_390 = (double)pfVar2[1];
                    local_388 = (double)*(float *)(lVar13 + 0x20 + lVar16);
                    local_380 = 0;
                    local_378 = (double)pfVar2[3] + *(double *)(local_7c0 + 0x30);
                    local_370 = (double)*(float *)(lVar13 + 0x28 + lVar16) +
                                *(double *)(local_7c0 + 0x38);
                    local_368 = (double)*(float *)(lVar13 + 0x2c + lVar16) +
                                *(double *)(local_7c0 + 0x40);
                    local_360 = 0x3ff0000000000000;
                    uVar22 = (ulonglong)uVar10 % (uVar21 & 0xffffffff);
                    if (((char)local_7cc == '\0') ||
                       (lVar13 = (**(code **)(**(longlong **)(param_1[0x11b] + uVar34 * 8) + 0x30))
                                           (), uVar7 = uStack_680,
                       (*(byte *)(lVar13 + 0x29) & 4) == 0)) {
                      uVar12 = uStack_518;
                      uStack_518 = uStack_518 + 1;
                      if (uStack_514 < uStack_518) {
                        plVar35 = &local_520;
                        FUN_1447808da(plVar35,uVar12);
                      }
                      else {
                        plVar35 = &local_520;
                      }
                    }
                    else {
                      lVar13 = (longlong)*(int *)((longlong)local_668 + uVar22 * 4);
                      if (lVar13 == -1) {
                        local_7a8 = *(undefined8 *)(*(longlong *)param_1[0x53] + uVar34 * 8);
                        local_7a0 = uVar22 * 0xe0 + param_1[0x141];
                        lVar13 = (longlong)(int)uStack_680;
                        *(int *)((longlong)local_668 + uVar22 * 4) = (int)uStack_680;
                        uVar12 = (int)uStack_680 + 1;
                        uStack_680 = CONCAT44(uStack_680._4_4_,uVar12);
                        if (uStack_680._4_4_ < uVar12) {
                          FUN_147b4e3c6(&local_688,uVar7 & 0xffffffff);
                        }
                        puVar18 = local_688;
                        puVar26 = local_688 + lVar13 * 0x10;
                        FUN_147af8d7c(puVar26,local_5d8);
                        puVar18[lVar13 * 0x10] = local_7a0;
                        if (*(int *)((longlong)puVar18 + lVar13 * 0x80 + 0x44) < (int)local_7d8) {
                          FUN_14480809c(puVar26 + 7,local_7d8);
                        }
                        lVar13 = local_650;
                        local_458 = 0;
                        local_450 = local_648;
                        if (local_648 == 0) {
                          local_44c = 0;
                        }
                        else {
                          FUN_147471e8a(&local_458,local_648,0);
                          FUN_147471efc(local_458,lVar13);
                        }
                        uVar20 = local_7a8;
                        local_448 = 0;
                        local_444 = FUN_144b2ab14(local_7a8);
                        local_440 = FUN_144b2ab14(uVar20);
                        local_440 = local_440 * 0xc;
                        local_43c = *(undefined4 *)(local_7a0 + 0x50);
                        local_438 = local_7a0;
                        local_430 = 0;
                        local_428 = 1;
                        local_424 = uVar10;
                        FUN_14494412e(&local_3d8,&local_4d8);
                        local_418 = (float)local_4d8;
                        local_414 = (float)local_4d0;
                        local_410 = (float)local_4c8;
                        local_40c = (float)local_4c0;
                        local_408 = (float)local_4b8;
                        local_404 = (float)local_4b0;
                        local_400 = (float)local_4a8;
                        local_3fc = (float)local_4a0;
                        local_3f8 = (float)local_498;
                        local_3f4 = (float)local_490;
                        local_3f0 = (float)local_488;
                        local_3ec = (float)local_480;
                        local_3e8 = (float)local_478;
                        local_3e4 = (float)local_470;
                        local_3e0 = (float)local_468;
                        local_3dc = (float)local_460;
                        FUN_147ceea5a(local_7b8,&local_458);
                      }
                      else {
                        puVar26 = local_688 + lVar13 * 0x10;
                      }
                      plVar35 = puVar26 + 7;
                      uVar12 = *(uint *)(puVar26 + 8);
                      *(uint *)(puVar26 + 8) = uVar12 + 1;
                      uVar21 = local_7c8;
                      if (*(uint *)((longlong)puVar26 + 0x44) < uVar12 + 1) {
                        FUN_1447808da(plVar35,uVar12);
                        uVar21 = local_7c8;
                      }
                    }
                    *(uint *)(*plVar35 + (longlong)(int)uVar12 * 4) = uVar10;
                    lVar23 = lVar23 + 8;
                  } while (local_798 != lVar23);
                }
                if (0 < (int)uStack_518) {
                  iVar25 = *(int *)(*(longlong *)(*(longlong *)param_1[0x11d] + uVar34 * 8) + 0x38);
                  local_7d8 = CONCAT44(local_7d8._4_4_,iVar25);
                  if (0 < iVar25) {
                    iVar25 = 0;
                    do {
                      local_330 = (double *)0x0;
                      local_328 = 0x100000000;
                      local_310 = 0;
                      local_320 = 0;
                      uStack_318 = 0;
                      uStack_308 = 0xffffffff;
                      local_300 = 0xff0000ffffffff;
                      uStack_2f8 = uStack_2f8 & 0xffffff00;
                      uStack_2f4 = 0x40c00f07;
                      local_2f0 = local_2f0 & 0xfc;
                      FUN_141793e06(&local_3d8);
                      plVar35 = local_7b0;
                      local_7e8 = 0;
                      local_7f0 = 0;
                      local_7f8 = 0;
                      local_7e0 = &local_3d8;
                      cVar9 = FUN_14015294c(local_7b0,uVar34 & 0xffffffff,0,iVar25);
                      if (cVar9 == '\0') {
                        FUN_14003fbd6();
                        uStack_318 = (**(code **)(*DAT_14caea080 + 0x2f0))();
                        local_320 = *(longlong *)(plVar35[0x53] + 0x10) + lVar28;
                        local_300._0_6_ = CONCAT24((short)iVar25,iVar25);
                      }
                      uVar10 = local_548;
                      uStack_2f4 = uStack_2f4 & 0xffffffbf | (*(uint *)(plVar35 + 0x110) & 2) << 5;
                      lVar23 = (longlong)(int)local_548;
                      local_548 = local_548 + 1;
                      if (local_544 < local_548) {
                        FUN_147471df6(&local_550,uVar10);
                      }
                      lVar13 = local_550;
                      lVar23 = lVar23 * 0xf0;
                      *(undefined8 *)(local_550 + 0xa8 + lVar23) = 0;
                      pdVar15 = local_330;
                      if (local_330 == (double *)0x0) {
                        pdVar15 = &local_3d8;
                      }
                      FUN_144739392(local_550 + lVar23,pdVar15,local_328 & 0xffffffff,0);
                      *(byte *)(lVar13 + 0xe8 + lVar23) = local_2f0;
                      puVar3 = (undefined4 *)(lVar13 + 0xd8 + lVar23);
                      *puVar3 = (undefined4)local_300;
                      puVar3[1] = local_300._4_4_;
                      puVar3[2] = uStack_2f8;
                      puVar3[3] = uStack_2f4;
                      puVar3 = (undefined4 *)(lVar13 + 200 + lVar23);
                      *puVar3 = (undefined4)local_310;
                      puVar3[1] = local_310._4_4_;
                      puVar3[2] = (undefined4)uStack_308;
                      puVar3[3] = uStack_308._4_4_;
                      puVar3 = (undefined4 *)(lVar13 + 0xb8 + lVar23);
                      *puVar3 = (undefined4)local_320;
                      puVar3[1] = local_320._4_4_;
                      puVar3[2] = (undefined4)uStack_318;
                      puVar3[3] = uStack_318._4_4_;
                      FUN_1446fc232(&local_3d8);
                      iVar25 = iVar25 + 1;
                    } while ((int)local_7d8 != iVar25);
                  }
                  FUN_147af8d7c(local_708,&local_558);
                  FUN_147cee9b0(local_7b8,local_708);
                }
                lVar28 = local_7b8;
                uVar34 = 0;
                if ((longlong)(int)uStack_680 != 0) {
                  puVar18 = local_688 + (longlong)(int)uStack_680 * 0x10;
                  puVar26 = local_688;
                  do {
                    local_788 = *puVar26;
                    local_780 = puVar26[1];
                    puVar26[1] = 0;
                    local_778 = *(undefined4 *)(puVar26 + 2);
                    local_774 = *(undefined4 *)((longlong)puVar26 + 0x14);
                    puVar26[2] = 0;
                    local_770 = puVar26[3];
                    uStack_768 = puVar26[4];
                    uStack_760 = *(undefined4 *)(puVar26 + 5);
                    uStack_75c = *(undefined4 *)((longlong)puVar26 + 0x2c);
                    uStack_758 = *(undefined4 *)(puVar26 + 6);
                    local_750 = puVar26[7];
                    puVar26[7] = 0;
                    local_748 = *(undefined4 *)(puVar26 + 8);
                    local_744 = *(undefined4 *)((longlong)puVar26 + 0x44);
                    puVar26[8] = 0;
                    local_740 = puVar26[9];
                    uStack_738 = puVar26[10];
                    local_730 = puVar26[0xb];
                    puVar26[0xb] = 0;
                    local_728 = *(undefined4 *)(puVar26 + 0xc);
                    local_724 = *(undefined4 *)((longlong)puVar26 + 100);
                    puVar26[0xc] = 0;
                    local_720 = *(undefined4 *)(puVar26 + 0xd);
                    uStack_71c = *(undefined4 *)((longlong)puVar26 + 0x6c);
                    uStack_718 = *(undefined4 *)(puVar26 + 0xe);
                    uStack_714 = *(undefined4 *)((longlong)puVar26 + 0x74);
                    local_710 = puVar26[0xf];
                    puVar26[0xf] = 0;
                    FUN_147cee9b0(lVar28,&local_788);
                    puVar26 = puVar26 + 0x10;
                  } while (puVar26 != puVar18);
                  uVar34 = uStack_680 & 0xffffffff;
                }
                FUN_1472bbb4b(local_688,uVar34);
                if (local_688 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_678 != 0.0) {
                  FUN_1400020a8();
                }
                if (local_668 != (void *)0x0) {
                  FUN_1400020a8();
                }
                FUN_1472aaabe(local_658);
                FUN_1472aaabe(local_5d8);
                FUN_1472aaabe(&local_558);
              }
              break;
            }
          }
          else {
            FUN_1474284c0(lVar23);
          }
          uVar34 = uVar34 + 1;
          lVar28 = lVar28 + 0x450;
        } while ((longlong)uVar34 < (longlong)(int)plVar35[1]);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_818) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147af88d2:
  uVar20 = *puVar18;
  *puVar18 = *puVar32;
  *puVar32 = uVar20;
  iVar25 = iVar25 + -1;
  puVar29 = puVar29 + -2;
  if ((longlong)puVar27 - (longlong)puVar36 < (longlong)puVar24 - (longlong)puVar33) {
    if (puVar17 < puVar26) {
      *pdVar15 = (double)puVar17;
      pdVar15[1] = (double)puVar26;
      *(int *)(pdVar15 + 2) = iVar25;
      pdVar15 = pdVar15 + 3;
    }
    puVar33 = puVar18;
    puVar24 = puVar27;
    if (puVar32 <= puVar18 + 1) goto LAB_147af8ac2;
  }
  else {
    if (puVar18 + 1 < puVar32) {
      *pdVar15 = (double)puVar18;
      pdVar15[1] = (double)puVar29;
      *(int *)(pdVar15 + 2) = iVar25;
      pdVar15 = pdVar15 + 3;
    }
    puVar18 = puVar17;
    puVar29 = puVar26;
    puVar24 = puVar26;
    if (puVar26 <= puVar17) goto LAB_147af8ac2;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar24 - (longlong)puVar33) >> 3);
  uVar10 = iVar19 + 1;
  puVar26 = puVar29;
  puVar36 = puVar33;
  if (iVar25 == 0) goto LAB_147af896d;
  goto LAB_147af884a;
}



// FUNCTION 147af8b44 FUN_147af8b44 body=566 status=ok
// SIG undefined FUN_147af8b44(void)

void FUN_147af8b44(longlong param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(int *)(param_1 + 0xa10) != param_2) || (*(uint *)(param_1 + 0xa18) != param_3)) {
    *(uint *)(param_1 + 0xa18) = param_3;
    if (0 < *(int *)(param_1 + 0xa10)) {
      lVar7 = 0xb0;
      lVar9 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0xa08);
        FUN_14052082e(lVar5 + lVar7 + -0xb0);
        FUN_1407f1458(lVar5 + lVar7);
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0xe0;
      } while (lVar9 < *(int *)(param_1 + 0xa10));
    }
    FUN_147af7186(param_1 + 0xa08,param_2);
    plVar3 = *(longlong **)
              (**(longlong **)(*(longlong *)(param_1 + 0x298) + 0x48) + (ulonglong)param_3 * 8);
    iVar10 = 0;
    do {
      lVar9 = FUN_147af8ea4(param_1 + 0xa08);
      FUN_147377468(&local_98,*plVar3 + 0x40);
      lVar7 = local_80;
      lVar5 = (longlong)local_78;
      if (lVar5 == 0) {
        lVar8 = local_80;
        iVar4 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar8 = *(longlong *)(lVar7 + lVar6);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar7 + lVar6) = 0;
            LOCK();
            puVar1 = (uint *)(lVar8 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar6 = lVar6 + 0x28;
          lVar8 = local_80;
          iVar4 = local_78;
        } while (lVar5 * 0x28 != lVar6);
      }
      uStack_84 = 0x101;
      local_e8 = local_98;
      local_98 = 0;
      uStack_d8 = CONCAT26(uStack_82,CONCAT24(0x101,uStack_88));
      local_e0 = local_90;
      local_80 = 0;
      local_c4 = local_74;
      local_78 = 0;
      local_74 = 0;
      local_a0 = local_50;
      local_b0 = local_60;
      uStack_ac = uStack_5c;
      uStack_a8 = uStack_58;
      uStack_a4 = uStack_54;
      local_c0 = local_70;
      uStack_bc = uStack_6c;
      uStack_b8 = uStack_68;
      uStack_b4 = uStack_64;
      local_d0 = lVar8;
      local_c8 = iVar4;
      FUN_141793e86(lVar9 + 0x40,&local_e8);
      FUN_14005bca4(&local_e8);
      FUN_14742848e(lVar9,&DAT_14ca85100);
      FUN_14005bca4(&local_98);
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147af8d7c FUN_147af8d7c body=296 status=ok
// SIG undefined FUN_147af8d7c(void)

undefined8 * FUN_147af8d7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_147471e8a(param_1 + 1,iVar1,0);
    FUN_147471efc(param_1[1],uVar2,iVar1);
  }
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 5);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar11 = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 6) = uVar11;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar3 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar3,(longlong)iVar1 << 2);
  }
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar3 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_140aa14ca(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar3,(longlong)iVar1 << 7);
  }
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  lVar4 = param_2[0xf];
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 147af8ea4 FUN_147af8ea4 body=62 status=ok
// SIG undefined FUN_147af8ea4(void)

longlong FUN_147af8ea4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b4e476(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xe0 + *param_1;
  FUN_147b4e44b(lVar2);
  return lVar2;
}



// FUNCTION 147af8ee2 FUN_147af8ee2 body=281 status=ok
// SIG undefined FUN_147af8ee2(void)

void FUN_147af8ee2(longlong param_1,float param_2,float param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_80;
  undefined4 local_78;
  int local_6c;
  longlong local_68;
  int *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = (int)param_2;
  iVar4 = (int)param_3;
  *(int *)(param_1 + 0x908) = iVar3;
  *(int *)(param_1 + 0x90c) = iVar4;
  *(int *)(param_1 + 0x960) = iVar3;
  *(int *)(param_1 + 0x964) = iVar4;
  *(int *)(param_1 + 0x9b8) = iVar3;
  *(int *)(param_1 + 0x9bc) = iVar4;
  if (0 < *(int *)(param_1 + 0x2a8)) {
    iVar3 = 0;
    do {
      local_78 = 2;
      local_88 = 0;
      local_80 = iVar3;
      FUN_1405ecb94();
      local_6c = iVar3;
      local_60 = &local_6c;
      local_58 = &local_68;
      FUN_1405ec5ce(param_1 + 0xa58,local_4c,&local_60,0);
      if (local_68 != 0) {
        LOCK();
        puVar1 = (uint *)(local_68 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2a8));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af8ffc FUN_147af8ffc body=35 status=ok
// SIG undefined FUN_147af8ffc(void)

undefined8 * FUN_147af8ffc(undefined8 param_1,undefined8 *param_2)

{
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  return param_2;
}



// FUNCTION 147af9022 FUN_147af9022 body=1 status=ok
// SIG undefined FUN_147af9022(void)

void FUN_147af9022(void)

{
  return;
}



// FUNCTION 147af9024 FUN_147af9024 body=1 status=ok
// SIG undefined FUN_147af9024(void)

void FUN_147af9024(void)

{
  return;
}



// FUNCTION 147af9036 FUN_147af9036 body=7 status=ok
// SIG undefined FUN_147af9036(void)

undefined4 FUN_147af9036(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x728);
}



// FUNCTION 147af903e FUN_147af903e body=17 status=ok
// SIG undefined FUN_147af903e(void)

bool FUN_147af903e(longlong param_1,int param_2)

{
  if (-1 < param_2) {
    return param_2 < *(int *)(param_1 + 0x728);
  }
  return false;
}



// FUNCTION 147af9082 FUN_147af9082 body=138 status=ok
// SIG undefined FUN_147af9082(void)

longlong * FUN_147af9082(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = (int)param_1[0xb1];
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      FUN_14071ff8a(param_2);
      if (0 < (int)param_1[0xb1]) {
        iVar3 = 0;
        do {
          uVar2 = (**(code **)(*param_1 + 0x10))(param_1,iVar3);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14075a758(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)param_1[0xb1]);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 147af9112 FUN_147af9112 body=148 status=ok
// SIG undefined FUN_147af9112(void)

void FUN_147af9112(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    (**(code **)(*param_1 + 0x340))(param_1);
    local_28 = param_1;
    FUN_1405edac7(param_1,0);
  }
  if (*(char *)((longlong)param_1 + 0x95d) != '\x02') {
    *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) | 2;
    FUN_1402d2c26(param_1 + 0x118);
  }
  FUN_1405ed516(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af91a8 FUN_147af91a8 body=47 status=ok
// SIG undefined FUN_147af91a8(void)

void FUN_147af91a8(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  FUN_147a308ce();
  iVar1 = *(int *)(param_1 + 0x728);
  *param_2 = *param_2 * iVar1;
  *param_3 = iVar1 * *param_3;
  return;
}



// FUNCTION 147af91d8 FUN_147af91d8 body=191 status=ok
// SIG undefined FUN_147af91d8(void)

void FUN_147af91d8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = *param_2;
  *(int *)(local_20 + 0x94) = *(int *)(local_20 + 0x94) + 1;
  FUN_1468be722();
  cVar1 = FUN_144a792c0(param_1,0x30);
  if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) {
    FUN_14014d556(param_1,local_58,&DAT_14c846480,2);
    FUN_14014d556(param_1,local_58,param_1 + 0x240,0);
    FUN_14014d556(param_1,local_58,param_1 + 0x240,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xa50) = 0;
    *(undefined1 *)(param_1 + 0xa90) = 0;
    *(undefined1 *)(param_1 + 0xad0) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af9298 FUN_147af9298 body=109 status=ok
// SIG undefined FUN_147af9298(void)

void FUN_147af9298(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x728) + param_2;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_1 + 0x72c) < iVar1) {
    FUN_1401989ec(param_1 + 0x720);
  }
  iVar1 = param_2 * *(int *)(param_1 + 0x7a0) + *(int *)(param_1 + 0x7b0);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x7b4) < iVar1) {
      FUN_14482f6fa(param_1 + 0x7a8,iVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 147af9306 FUN_147af9306 body=108 status=ok
// SIG undefined FUN_147af9306(void)

undefined8
FUN_147af9306(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  local_30 = param_6;
  local_38 = param_5;
  FUN_14353718e(param_1,param_2,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af9374 FUN_147af9374 body=235 status=ok
// SIG undefined FUN_147af9374(void)

longlong *
FUN_147af9374(longlong param_1,longlong *param_2,undefined4 *param_3,undefined1 param_4,
             undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_70 = param_5;
  local_78 = param_4;
  FUN_14353718e(param_1,&local_50,&local_68,1);
  lVar2 = local_50;
  if ((longlong)local_48 != 0) {
    lVar4 = 0;
    do {
      iVar3 = *(int *)(lVar2 + lVar4);
      if (*(int *)(param_1 + 0x8c8) != 0) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x8c0) + (longlong)iVar3 * 4);
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14067df04(param_2,iVar1);
      }
      *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar3;
      lVar4 = lVar4 + 4;
    } while ((longlong)local_48 * 4 != lVar4);
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147af9460 FUN_147af9460 body=137 status=ok
// SIG undefined FUN_147af9460(void)

undefined8 FUN_147af9460(longlong param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  if (-1 < param_2) {
    if (param_3 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x728) <= param_2) {
      return 0;
    }
    if (param_3 < *(int *)(param_1 + 0x7a0)) {
      FUN_147b010e6(param_1 + 0x8c0,param_2);
      *(undefined4 *)
       (*(longlong *)(param_1 + 0x7a8) +
       (longlong)(param_2 * *(int *)(param_1 + 0x7a0) + param_3) * 4) = param_4;
      if (param_5 == '\0') {
        return 1;
      }
      FUN_1448215fa(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147af94ea FUN_147af94ea body=151 status=ok
// SIG undefined FUN_147af94ea(void)

void FUN_147af94ea(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  if (iVar1 != *(int *)(param_1 + 0x7a0)) {
    *(int *)(param_1 + 0x7a0) = iVar1;
    iVar1 = iVar1 * *(int *)(param_1 + 0x728);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    if (*(int *)(param_1 + 0x7b4) != iVar1) {
      FUN_14482f6fa(param_1 + 0x7a8);
      iVar1 = *(int *)(param_1 + 0x7a0) * *(int *)(param_1 + 0x728);
    }
    FUN_144aa29e6(param_1 + 0x7a8,iVar1,1);
    if (*(char *)(param_1 + 0x95d) != '\x02') {
      *(byte *)(param_1 + 0x95e) = *(byte *)(param_1 + 0x95e) | 1;
      FUN_1402d2c26(param_1 + 0x8c0);
      return;
    }
  }
  return;
}



// FUNCTION 147af959c FUN_147af959c body=1359 status=ok
// SIG undefined FUN_147af959c(void)

void FUN_147af959c(longlong *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  
  if (*(char *)((longlong)param_1 + 0x9d) == '\x02') {
    return;
  }
  uVar17 = *(uint *)(param_1 + 1);
  if (uVar17 == 0) {
    uVar17 = *(uint *)(param_1 + 4);
    uVar10 = param_2;
  }
  else {
    uVar10 = *(uint *)(*param_1 + (longlong)(int)param_2 * 4);
  }
  if ((int)uVar17 <= (int)param_2) {
    uVar17 = param_2;
  }
  iVar12 = uVar17 + 0xe;
  if (-1 < (int)(uVar17 + 7)) {
    iVar12 = uVar17 + 7;
  }
  plVar5 = param_1 + 5;
  if ((int)param_1[6] < iVar12 >> 3) {
    FUN_1402d2c96(plVar5,iVar12 >> 3,1);
  }
  *(uint *)(param_1 + 0xb) = uVar17;
  uVar17 = *(uint *)((longlong)param_1 + 0x5c);
  if ((int)uVar10 <= (int)*(uint *)((longlong)param_1 + 0x5c)) {
    uVar17 = uVar10;
  }
  *(uint *)((longlong)param_1 + 0x5c) = uVar17;
  if ((int)param_1[10] <= (int)uVar10) {
    uVar17 = uVar10 + 0x3f;
    if (-1 < (int)(uVar10 + 0x20)) {
      uVar17 = uVar10 + 0x20;
    }
    FUN_14476b79c(param_1 + 7,uVar17 & 0xffffffe0,0);
  }
  uVar17 = 1 << ((byte)uVar10 & 0x1f);
  plVar21 = param_1 + 7;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[9];
  }
  uVar3 = uVar10 + 0x1f;
  if (-1 < (int)uVar10) {
    uVar3 = uVar10;
  }
  puVar1 = (uint *)((longlong)plVar21 + (longlong)((int)uVar3 >> 5) * 4);
  *puVar1 = *puVar1 | uVar17;
  uVar6 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar6 = param_2;
  }
  iVar12 = (int)uVar6 >> 3;
  lVar9 = param_1[5];
  lVar13 = (longlong)iVar12;
  uVar6 = *(uint *)(lVar9 + lVar13 * 4);
  uVar4 = (int)param_2 % 8;
  bVar2 = (byte)(uVar4 * 4);
  uVar14 = uVar6 >> (bVar2 & 0x1f);
  if ((uVar6 >> (uVar4 * 4 & 0x1f) & 1) == 0) {
    if ((uVar14 & 4) != 0) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
    }
    if ((uVar14 & 2) != 0) {
      *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + -1;
    }
    if ((uVar14 & 8) != 0) {
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
    }
  }
  else {
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + -1;
  }
  iVar11 = (int)param_1[0xb];
  uVar6 = iVar11 - 1;
  if (uVar6 != param_2) {
    uVar14 = iVar11 + 6;
    if (-1 < (int)uVar6) {
      uVar14 = uVar6;
    }
    iVar20 = (int)uVar14 >> 3;
    uVar14 = *(uint *)(lVar9 + lVar13 * 4);
    iVar7 = iVar12 + 1;
    uVar16 = 0;
    if (iVar12 != iVar20) {
      iVar15 = iVar11 + iVar7 * -8;
      iVar8 = 8;
      if (iVar15 < 8) {
        iVar8 = iVar15;
      }
      uVar16 = *(uint *)(lVar9 + (longlong)iVar7 * 4);
      uVar18 = (uVar16 * 8 | uVar16) & 0x88888888;
      uVar19 = (ulonglong)uVar18 - (ulonglong)(uVar18 >> 1);
      uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333330);
      *(uint *)((longlong)param_1 + 0x74) =
           (iVar8 + *(int *)((longlong)param_1 + 0x74)) -
           (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      uVar16 = uVar16 | 0x88888888;
    }
    if (uVar4 + 1 < 8) {
      iVar11 = iVar11 + iVar12 * -8;
      iVar8 = 8;
      if (iVar11 < 8) {
        iVar8 = iVar11;
      }
      uVar18 = ((uVar14 * 8 | uVar14) & 0x88888888) >> ((char)(uVar4 + 1) * '\x04' & 0x1fU);
      uVar19 = (ulonglong)uVar18 - (ulonglong)(uVar18 >> 1);
      uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333330);
      *(int *)((longlong)param_1 + 0x74) =
           *(int *)((longlong)param_1 + 0x74) +
           ((~uVar4 + iVar8) -
           (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38));
    }
    uVar18 = uVar14 >> 4 | 0x88888888;
    if (uVar4 != 0) {
      uVar18 = ((uVar18 ^ uVar14) >> (bVar2 & 0x1f)) << (bVar2 & 0x1f) ^ uVar14;
    }
    *(uint *)(lVar9 + lVar13 * 4) = uVar16 << 0x1c | uVar18;
    if (iVar7 < iVar20) {
      lVar13 = lVar13 + 1;
      iVar11 = iVar12 * -8 + -0x10;
      uVar4 = uVar16;
      do {
        iVar7 = (int)param_1[0xb] + iVar11;
        if (7 < iVar7) {
          iVar7 = 8;
        }
        uVar16 = *(uint *)(param_1[5] + 4 + lVar13 * 4);
        uVar14 = (uVar16 * 8 | uVar16) & 0x88888888;
        uVar19 = (ulonglong)uVar14 - (ulonglong)(uVar14 >> 1);
        uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333330);
        *(uint *)((longlong)param_1 + 0x74) =
             (iVar7 + *(int *)((longlong)param_1 + 0x74)) -
             (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
        uVar16 = uVar16 | 0x88888888;
        *(uint *)(param_1[5] + lVar13 * 4) = uVar4 >> 4 | uVar16 << 0x1c;
        lVar13 = lVar13 + 1;
        iVar11 = iVar11 + -8;
        uVar4 = uVar16;
      } while (iVar20 != lVar13);
    }
    if (iVar12 != iVar20) {
      *(uint *)(*plVar5 + (longlong)iVar20 * 4) = uVar16 >> 4;
    }
    iVar11 = (int)param_1[0xb];
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0xc)) {
      uVar4 = param_2;
    }
    *(uint *)(param_1 + 0xc) = uVar4;
    uVar4 = *(uint *)((longlong)param_1 + 100);
    if ((int)*(uint *)((longlong)param_1 + 100) < (int)uVar6) {
      uVar4 = uVar6;
    }
    *(uint *)((longlong)param_1 + 100) = uVar4;
    uVar6 = iVar11 + 6;
    if (-1 < (int)(iVar11 - 1U)) {
      uVar6 = iVar11 - 1U;
    }
    iVar12 = (int)uVar6 >> 3;
    uVar4 = (iVar11 - (uVar6 & 0xfffffff8)) - 1;
  }
  if ((int)uVar4 < 1) {
    *(undefined4 *)(*plVar5 + (longlong)iVar12 * 4) = 0;
  }
  else {
    bVar2 = -(char)(uVar4 << 2);
    *(uint *)(*plVar5 + (longlong)iVar12 * 4) =
         (uint)(*(int *)(*plVar5 + (longlong)iVar12 * 4) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
  }
  *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
  if (((int)param_1[4] - 1U != param_2) && ((int)param_1[1] == 0)) {
    FUN_141064484(param_1);
  }
  FUN_1402d2c26(param_1);
  if ((int)param_1[1] != 0) {
    *(undefined4 *)(param_1[2] + (longlong)(int)uVar10 * 4) = 0xffffffff;
    plVar5 = param_1 + 0xf;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x11];
    }
    puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & ~uVar17;
    iVar12 = (int)param_1[1];
    if ((int)*(uint *)(param_1 + 0x13) < (int)uVar10) {
      uVar10 = *(uint *)(param_1 + 0x13);
    }
    *(uint *)(param_1 + 0x13) = uVar10;
    if (iVar12 != 0) {
      uVar17 = iVar12 - 1;
      if (uVar17 == param_2) {
        FUN_1474b0276(param_1,param_2,1);
        iVar12 = (int)param_1[1];
      }
      else {
        if (iVar12 + ~param_2 != 0) {
          memmove((void *)(*param_1 + (longlong)(int)param_2 * 4),
                  (void *)(*param_1 + (longlong)(int)param_2 * 4 + 4),
                  (longlong)(int)(iVar12 + ~param_2) << 2);
          uVar17 = (int)param_1[1] - 1;
        }
        *(uint *)(param_1 + 1) = uVar17;
        FUN_1410643e4(param_1);
        iVar12 = (int)param_1[1];
        if ((int)param_2 < iVar12) {
          lVar9 = (longlong)(int)param_2;
          do {
            *(int *)(param_1[2] + (longlong)*(int *)(*param_1 + lVar9 * 4) * 4) = (int)lVar9;
            lVar9 = lVar9 + 1;
            iVar12 = (int)param_1[1];
          } while (lVar9 < iVar12);
        }
      }
      goto LAB_147af9ab2;
    }
  }
  iVar12 = (int)param_1[4] + -1;
LAB_147af9ab2:
  *(int *)(param_1 + 4) = iVar12;
  return;
}



// FUNCTION 147af9aec FUN_147af9aec body=27 status=ok
// SIG undefined FUN_147af9aec(void)

undefined1 FUN_147af9aec(undefined8 param_1,undefined8 param_2)

{
  FUN_14106388a(param_1,param_2,0,0,1);
  return 1;
}



// FUNCTION 147af9b18 FUN_147af9b18 body=184 status=ok
// SIG undefined FUN_147af9b18(void)

undefined4 FUN_147af9b18(undefined8 param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined1 auStack_68 [48];
  void *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 1);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_28 = param_1;
    if (param_3 == '\0') {
      local_38 = (void *)0x0;
      _Src = (void *)*param_2;
      local_30 = iVar1;
      FUN_144a06ca8(&local_38,iVar1,0);
      memcpy(local_38,_Src,(longlong)iVar1 << 2);
      FUN_144a521da(local_38,local_30);
      uVar2 = FUN_143537776(&local_28,&local_38);
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar2 = FUN_143537776(&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147af9bd2 FUN_147af9bd2 body=7523 status=ok
// SIG undefined FUN_147af9bd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_147af9bd2(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4,char param_5,
             char param_6,undefined1 param_7)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong *plVar24;
  undefined4 uVar25;
  int iVar26;
  undefined8 uVar27;
  undefined7 uVar28;
  uint uVar29;
  double *pdVar30;
  longlong lVar31;
  longlong lVar32;
  double *pdVar33;
  double *pdVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar50 [16];
  double dVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar65;
  double dVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar73;
  double dVar74;
  undefined1 auVar70 [16];
  double dVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auStack_4b8 [40];
  undefined4 local_490;
  undefined4 local_48c;
  longlong *local_488;
  double *local_480;
  undefined1 local_478 [16];
  ulonglong local_468;
  longlong *local_460;
  longlong *local_458;
  longlong *local_450;
  ulonglong local_448;
  longlong local_440;
  undefined1 local_438 [16];
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  longlong local_3e8;
  undefined4 local_3e0;
  double local_3d8 [2];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378 [4];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  double local_338;
  double dStack_330;
  double local_328;
  double local_318 [4];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_450 = param_4;
  if ((((int)param_2 < 0) || ((int)*(uint *)(param_1 + 0xe5) <= (int)param_2)) ||
     (uVar29 = (int)param_3[1] + param_2,
     *(uint *)(param_1 + 0xe5) < uVar29 ||
     (uVar29 == 0 || SCARRY4((int)param_3[1],param_2) != (int)uVar29 < 0))) {
    uVar27 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x14a) = 0;
    *(undefined1 *)(param_1 + 0x152) = 0;
    *(undefined1 *)(param_1 + 0x15a) = 0;
    if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) ||
       ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) {
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_48c = 0;
      local_490 = 0;
    }
    else {
      uVar27 = (**(code **)(*param_1 + 0xbd0))(param_1);
      local_2a8 = 0;
      uStack_2a0 = 0;
      uVar28 = (undefined7)((ulonglong)uVar27 >> 8);
      if ((char)uVar27 == '\0') {
        local_490 = (undefined4)CONCAT71(uVar28,1);
        local_48c = 0;
      }
      else {
        iVar26 = (int)param_3[1];
        if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar26);
        }
        uVar27 = CONCAT71(uVar28,1);
        local_48c = (undefined4)uVar27;
        if (iVar26 != 0) {
          uVar27 = FUN_1401a2688(&local_2a8);
        }
        local_490 = (undefined4)CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
      }
    }
    local_2b8 = 0.0;
    uStack_2b0 = 0;
    if (0 < (int)param_3[1]) {
      local_488 = param_1 + 0x48;
      local_460 = param_1 + 0x118;
      local_468 = (ulonglong)param_2;
      lVar35 = local_468 << 7;
      lVar36 = 0;
      lVar32 = 0;
      local_458 = param_3;
      do {
        uVar37 = uStack_2b0;
        plVar24 = local_458;
        lVar31 = (longlong)(int)uStack_2b0;
        uVar29 = (int)uStack_2b0 + 1;
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar29);
        if (uStack_2b0._4_4_ < uVar29) {
          FUN_147b4eafa(&local_2b8,uVar37 & 0xffffffff);
        }
        local_448 = local_468 + lVar32;
        *(int *)((longlong)local_2b8 + lVar31 * 4) = (int)local_448;
        lVar31 = *plVar24;
        local_480 = (double *)(*local_450 + lVar36);
        lVar5 = param_1[0xe4];
        lVar6 = param_1[0xe6];
        local_440 = lVar32;
        if ((char)local_48c != '\0') {
          pdVar34 = local_318;
          uVar25 = FUN_1448ac920(pdVar34,lVar35 + lVar5);
          auVar49 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar48 = auVar49._0_8_;
          dVar56 = auVar49._8_8_;
          auVar45 = *(undefined1 (*) [16])(param_1 + 0x52);
          dVar55 = auVar45._0_8_;
          dVar65 = auVar45._8_8_;
          auVar59._8_8_ = dStack_2d0;
          auVar59._0_8_ = local_2d8;
          auVar4._8_8_ = dStack_2c0;
          auVar4._0_8_ = local_2c8;
          auVar49 = minpd(auVar59,auVar49);
          auVar59 = minpd(auVar4,auVar45);
          auVar45._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
          auVar45._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
          iVar26 = movmskpd(uVar25,auVar45);
          auVar49._8_8_ = -(ulonglong)(auVar59._8_8_ < 0.0);
          auVar49._0_8_ = -(ulonglong)(auVar59._0_8_ < 0.0);
          uVar29 = movmskpd((int)pdVar34,auVar49);
          if ((uVar29 & 0x3fffffff) == 0 && iVar26 == 0) {
            dVar78 = (double)param_1[0x48];
            dVar66 = (double)param_1[0x49];
            dVar13 = (double)param_1[0x4a];
            dVar12 = (double)param_1[0x4b];
            dVar47 = (double)param_1[0x4b];
            dVar69 = (double)param_1[0x4b];
            dVar75 = (double)param_1[0x48];
            dVar74 = (double)param_1[0x48];
            dVar77 = (double)param_1[0x49];
            dVar3 = (double)param_1[0x49];
            dVar54 = (double)param_1[0x4a];
            dVar67 = (double)param_1[0x4a];
            dVar68 = local_318[1] * dVar54 * -1.0 +
                     local_318[2] * dVar77 + local_318[3] * dVar75 * 1.0 + local_318[0] * dVar47;
            dVar73 = local_318[0] * dVar67 * 1.0 +
                     local_318[3] * dVar3 + local_318[2] * dVar74 * -1.0 + local_318[1] * dVar69;
            auVar79._0_8_ =
                 local_318[3] * dVar54 * 1.0 +
                 ((dVar75 * local_318[1] * 1.0 + local_318[2] * dVar47) - local_318[0] * dVar77);
            auVar79._8_8_ =
                 local_318[2] * dVar67 * -1.0 +
                 ((dVar74 * local_318[0] * -1.0 + local_318[3] * dVar69) - local_318[1] * dVar3);
            dVar77 = local_2f8 * dVar48;
            dVar3 = dStack_2f0 * dVar56;
            dVar75 = local_2e8 * dVar55;
            dVar74 = dStack_2e0 * dVar65;
            dVar54 = dVar3 * dVar78 - dVar66 * dVar77;
            dVar67 = dVar75 * dVar66 - dVar13 * dVar3;
            dVar76 = dVar77 * dVar13 - dVar78 * dVar75;
            dVar57 = dVar74 * dVar12 - dVar12 * dVar74;
            dVar67 = dVar67 + dVar67;
            dVar76 = dVar76 + dVar76;
            dVar54 = dVar54 + dVar54;
            dVar57 = dVar57 + dVar57;
            dVar77 = (dVar54 * dVar66 - dVar13 * dVar76) + dVar47 * dVar67 + dVar77 +
                     (double)param_1[0x4c];
            dVar3 = (dVar67 * dVar13 - dVar54 * dVar78) + dVar69 * dVar76 + dVar3 +
                    (double)param_1[0x4d];
            local_428 = (dVar76 * dVar78 - dVar66 * dVar67) + dVar47 * dVar54 + dVar75 +
                        (double)param_1[0x4e];
            dStack_420 = (dVar57 * dVar12 - dVar57 * dVar12) + dVar69 * dVar57 + dVar74 +
                         (double)param_1[0x4f];
            local_408._8_8_ = dStack_2c0 * dVar65;
            local_408._0_8_ = local_2c8 * dVar55;
            local_418._8_8_ = dStack_2d0 * dVar56;
            local_418._0_8_ = local_2d8 * dVar48;
            uVar25 = 0;
          }
          else {
            dVar74 = (double)param_1[0x48];
            dVar77 = (double)param_1[0x49];
            dVar3 = (double)param_1[0x4a];
            dVar54 = dVar77 + dVar77;
            dVar67 = dVar3 + dVar3;
            dVar69 = dVar74 * (dVar74 + dVar74);
            local_1a8 = (1.0 - (dVar69 + dVar77 * dVar54)) * dVar55;
            dVar47 = (double)param_1[0x4b];
            dVar68 = dVar67 * dVar47;
            dVar73 = (dVar74 + dVar74) * (double)param_1[0x4b];
            dVar47 = dVar54 * dVar47;
            local_1b8 = (dVar47 + (double)param_1[0x48] * dVar67) * dVar55;
            dVar75 = dVar55 * local_2c8;
            dVar65 = dVar65 * dStack_2c0;
            local_1c8 = (dVar67 * dVar77 + dVar73) * dVar56;
            dStack_1b0 = (dVar67 * dVar77 - dVar73) * dVar55;
            local_1e8 = ((double)param_1[0x48] * dVar67 - dVar47) * dVar48;
            local_1f8._8_8_ = (dVar54 * dVar74 + dVar68) * dVar48;
            local_1f8._0_8_ = (1.0 - (dVar3 * dVar67 + dVar77 * dVar54)) * dVar48;
            uStack_1e0 = 0;
            local_1d8._8_8_ = (1.0 - (dVar3 * dVar67 + dVar69)) * dVar56;
            local_1d8._0_8_ = (dVar54 * dVar74 - dVar68) * dVar56;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0x4c];
            lStack_190 = param_1[0x4d];
            local_188 = param_1[0x4e];
            uStack_180 = 0x3ff0000000000000;
            dVar47 = local_318[1] + local_318[1];
            dVar69 = local_318[2] + local_318[2];
            dVar55 = local_318[0] * (local_318[0] + local_318[0]);
            local_228 = (1.0 - (dVar55 + local_318[1] * dVar47)) * local_2c8;
            dVar74 = (local_318[0] + local_318[0]) * local_318[3];
            local_238 = (dVar47 * local_318[3] + local_318[0] * dVar69) * local_2c8;
            dStack_230 = (dVar69 * local_318[1] - dVar74) * local_2c8;
            dVar48 = dVar48 * local_2d8;
            dVar56 = dVar56 * dStack_2d0;
            local_278 = (1.0 - (local_318[2] * dVar69 + local_318[1] * dVar47)) * local_2d8;
            dStack_270 = (dVar47 * local_318[0] + dVar69 * local_318[3]) * local_2d8;
            local_248 = (dVar69 * local_318[1] + dVar74) * dStack_2d0;
            local_268 = (local_318[0] * dVar69 - dVar47 * local_318[3]) * local_2d8;
            uStack_260 = 0;
            local_258._8_8_ = (1.0 - (local_318[2] * dVar69 + dVar55)) * dStack_2d0;
            local_258._0_8_ = (dVar47 * local_318[0] - dVar69 * local_318[3]) * dStack_2d0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_2f8;
            dStack_210 = dStack_2f0;
            local_208 = local_2e8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            local_418._8_4_ = SUB84(dVar56,0);
            local_418._0_8_ = dVar48;
            local_418._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            auVar39._8_8_ = -(ulonglong)(0.0 <= dVar56);
            auVar39._0_8_ = -(ulonglong)(0.0 <= dVar48);
            auVar51._12_4_ = 0x3ff00000;
            auVar51._0_12_ = ZEXT812(0x3ff0000000000000);
            auVar49 = blendvpd(_DAT_149936790,auVar51,auVar39);
            local_408._8_4_ = SUB84(dVar65,0);
            local_408._0_8_ = dVar75;
            local_408._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
            uVar37 = -(ulonglong)(0.0 <= dVar75);
            dVar48 = (double)(~uVar37 & 0xbff0000000000000 | uVar37 & 0x3ff0000000000000);
            dVar55 = auVar49._0_8_;
            local_168 = local_168 * dVar55;
            local_170 = local_170 * dVar55;
            local_178 = local_178 * dVar55;
            dVar55 = auVar49._8_8_;
            local_148 = local_148 * dVar55;
            local_150 = local_150 * dVar55;
            local_158 = dVar55 * local_158;
            local_128 = local_128 * dVar48;
            local_130 = local_130 * dVar48;
            local_138 = dVar48 * local_138;
            pdVar34 = local_378;
            iVar26 = FUN_14481fd10(pdVar34,&local_178);
            uVar25 = SUB84(pdVar34,0);
            dVar48 = local_378[2] * local_378[2] + local_378[0] * local_378[0];
            dVar55 = local_378[3] * local_378[3] + local_378[1] * local_378[1];
            auVar50._0_8_ = dVar48 + dVar55;
            auVar50._8_8_ = dVar48 + dVar55;
            auVar40._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
            auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
            auVar49 = sqrtpd(auVar50,auVar50);
            auVar60._8_8_ = 0x3ff0000000000000;
            auVar60._0_8_ = 0x3ff0000000000000;
            auVar49 = divpd(auVar60,auVar49);
            auVar61._0_8_ = auVar49._0_8_ * local_378[2];
            auVar61._8_8_ = auVar49._8_8_ * local_378[3];
            dVar68 = (double)((ulonglong)(local_378[0] * auVar49._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
            dVar73 = (double)((ulonglong)(local_378[1] * auVar49._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
            auVar79 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar40);
            local_428 = local_108;
            dStack_420 = 0.0;
            dVar77 = local_118;
            dVar3 = dStack_110;
          }
          auVar49 = _DAT_149934d80;
          if (param_5 == '\0') {
            auVar45 = *(undefined1 (*) [16])(param_1 + 0x50);
            dVar48 = auVar45._0_8_;
            dVar65 = auVar45._8_8_;
            auVar59 = *(undefined1 (*) [16])(param_1 + 0x52);
            dVar55 = auVar59._0_8_;
            dVar47 = auVar59._8_8_;
            local_478 = *(undefined1 (*) [16])(lVar31 + 0x40 + lVar36);
            dVar56 = local_478._0_8_;
            auVar4 = *(undefined1 (*) [16])(lVar31 + 0x50 + lVar36);
            auVar45 = minpd(local_478,auVar45);
            auVar51 = minpd(auVar4,auVar59);
            auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
            auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
            iVar26 = movmskpd(iVar26,auVar46);
            auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
            auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
            uVar29 = movmskpd(uVar25,auVar52);
            if ((uVar29 & 0x3fffffff) == 0 && iVar26 == 0) {
              dVar57 = *(double *)(lVar31 + lVar36);
              dVar16 = ((double *)(lVar31 + lVar36))[1];
              pdVar34 = (double *)(lVar31 + 0x10 + lVar36);
              dVar58 = *pdVar34;
              dVar17 = pdVar34[1];
              dVar18 = (double)param_1[0x48];
              dVar19 = (double)param_1[0x49];
              dVar20 = (double)param_1[0x4a];
              dVar21 = (double)param_1[0x4b];
              dVar69 = (double)param_1[0x4b];
              dVar75 = (double)param_1[0x4b];
              dVar54 = (double)param_1[0x48];
              dVar74 = (double)param_1[0x48];
              dVar76 = (double)param_1[0x49];
              dVar67 = (double)param_1[0x49];
              dVar66 = (double)param_1[0x4a];
              dVar78 = (double)param_1[0x4a];
              dVar13 = dVar16 * dVar66 * -1.0 +
                       dVar58 * dVar76 + dVar17 * dVar54 * 1.0 + dVar57 * dVar69;
              dVar12 = dVar57 * dVar78 * 1.0 +
                       dVar17 * dVar67 + dVar58 * dVar74 * -1.0 + dVar16 * dVar75;
              auVar80._0_8_ =
                   dVar17 * dVar66 * 1.0 +
                   ((dVar54 * dVar16 * 1.0 + dVar58 * dVar69) - dVar57 * dVar76);
              auVar80._8_8_ =
                   dVar58 * dVar78 * -1.0 +
                   ((dVar74 * dVar57 * -1.0 + dVar17 * dVar75) - dVar16 * dVar67);
              pdVar34 = (double *)(lVar31 + 0x20 + lVar36);
              dVar76 = *pdVar34 * dVar48;
              dVar78 = pdVar34[1] * dVar65;
              pdVar34 = (double *)(lVar31 + 0x30 + lVar36);
              dVar66 = *pdVar34 * dVar55;
              dVar57 = pdVar34[1] * dVar47;
              dVar74 = dVar78 * dVar18 - dVar19 * dVar76;
              dVar54 = dVar66 * dVar19 - dVar20 * dVar78;
              dVar67 = dVar76 * dVar20 - dVar18 * dVar66;
              dVar58 = dVar57 * dVar21 - dVar21 * dVar57;
              dVar54 = dVar54 + dVar54;
              dVar67 = dVar67 + dVar67;
              dVar74 = dVar74 + dVar74;
              dVar58 = dVar58 + dVar58;
              dVar56 = dVar56 * dVar48;
              dVar65 = local_478._8_8_ * dVar65;
              dVar16 = auVar4._0_8_ * dVar55;
              dVar47 = auVar4._8_8_ * dVar47;
              dVar48 = (dVar74 * dVar19 - dVar20 * dVar67) + dVar69 * dVar54 + dVar76 +
                       (double)param_1[0x4c];
              dVar55 = (dVar54 * dVar20 - dVar74 * dVar18) + dVar75 * dVar67 + dVar78 +
                       (double)param_1[0x4d];
              dVar69 = (dVar67 * dVar18 - dVar19 * dVar54) + dVar69 * dVar74 + dVar66 +
                       (double)param_1[0x4e];
              dVar75 = (dVar58 * dVar21 - dVar58 * dVar21) + dVar75 * dVar58 + dVar57 +
                       (double)param_1[0x4f];
              local_438 = auVar59;
              local_3f8 = auVar4;
            }
            else {
              local_478._8_8_ = local_478._8_8_ * dVar65;
              local_478._0_8_ = dVar56 * dVar48;
              dVar16 = auVar4._0_8_ * dVar55;
              dVar47 = auVar4._8_8_ * dVar47;
              dVar69 = (double)param_1[0x48];
              dVar75 = (double)param_1[0x49];
              dVar74 = (double)param_1[0x4a];
              dVar67 = dVar75 + dVar75;
              dVar76 = dVar74 + dVar74;
              dVar54 = dVar69 * (dVar69 + dVar69);
              local_1a8 = (1.0 - (dVar54 + dVar75 * dVar67)) * dVar55;
              dVar56 = (double)param_1[0x4b];
              dVar78 = dVar76 * dVar56;
              dVar66 = (dVar69 + dVar69) * (double)param_1[0x4b];
              dVar56 = dVar67 * dVar56;
              local_1c8 = (dVar76 * dVar75 + dVar66) * dVar65;
              local_1b8 = (dVar56 + (double)param_1[0x48] * dVar76) * dVar55;
              dStack_1b0 = (dVar76 * dVar75 - dVar66) * dVar55;
              local_1e8 = ((double)param_1[0x48] * dVar76 - dVar56) * dVar48;
              local_1f8._8_8_ = (dVar67 * dVar69 + dVar78) * dVar48;
              local_1f8._0_8_ = (1.0 - (dVar74 * dVar76 + dVar75 * dVar67)) * dVar48;
              uStack_1e0 = 0;
              local_1d8._8_8_ = (1.0 - (dVar74 * dVar76 + dVar54)) * dVar65;
              local_1d8._0_8_ = (dVar67 * dVar69 - dVar78) * dVar65;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_1[0x4c];
              lStack_190 = param_1[0x4d];
              local_188 = param_1[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar65 = *(double *)(lVar31 + lVar36);
              dVar69 = ((double *)(lVar31 + lVar36))[1];
              dVar75 = *(double *)(lVar31 + 0x10 + lVar36);
              pdVar34 = (double *)(lVar31 + 0x40 + lVar36);
              local_268 = *pdVar34;
              dVar74 = pdVar34[1];
              dStack_230 = *(double *)(lVar31 + 0x50 + lVar36);
              dVar78 = dVar69 + dVar69;
              dVar54 = dVar75 + dVar75;
              dVar55 = dVar65 * (dVar65 + dVar65);
              local_278 = ((double)DAT_149934d80 - (dVar75 * dVar54 + dVar69 * dVar78)) * local_268;
              local_228 = (1.0 - (dVar55 + dVar69 * dVar78)) * dStack_230;
              dVar56 = *(double *)(lVar31 + lVar36) * dVar54;
              pdVar34 = (double *)(lVar31 + 0x18 + lVar36);
              dVar48 = *pdVar34;
              dVar67 = dVar54 * dVar48;
              dVar76 = (dVar65 + dVar65) * *pdVar34;
              dVar48 = dVar78 * dVar48;
              dStack_270 = (dVar78 * dVar65 + dVar67) * local_268;
              local_248 = (dVar54 * dVar69 + dVar76) * dVar74;
              local_238 = (dVar48 + dVar56) * dStack_230;
              local_268 = (dVar56 - dVar48) * local_268;
              dStack_230 = (dVar54 * dVar69 - dVar76) * dStack_230;
              uStack_260 = 0;
              local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar75 * dVar54 + dVar55)) * dVar74;
              local_258._0_8_ = (dVar78 * dVar65 - dVar67) * dVar74;
              uStack_240 = 0;
              uStack_220 = 0;
              pdVar34 = (double *)(lVar31 + 0x20 + lVar36);
              local_218 = *pdVar34;
              dStack_210 = pdVar34[1];
              local_208 = *(double *)(lVar31 + 0x30 + lVar36);
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar41._8_8_ = -(ulonglong)(0.0 <= (double)local_478._8_8_);
              auVar41._0_8_ = -(ulonglong)(0.0 <= (double)local_478._0_8_);
              auVar45 = blendvpd(_DAT_149936790,auVar49,auVar41);
              dVar48 = (double)(~-(ulonglong)(0.0 <= dVar16) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= dVar16) & 0x3ff0000000000000);
              dVar55 = auVar45._0_8_;
              local_168 = local_168 * dVar55;
              local_170 = local_170 * dVar55;
              local_178 = local_178 * dVar55;
              dVar55 = auVar45._8_8_;
              local_148 = local_148 * dVar55;
              local_150 = local_150 * dVar55;
              local_158 = dVar55 * local_158;
              local_128 = local_128 * dVar48;
              local_130 = local_130 * dVar48;
              local_138 = dVar48 * local_138;
              FUN_14481fd10(local_378,&local_178);
              dVar48 = local_378[2] * local_378[2] + local_378[0] * local_378[0];
              dVar55 = local_378[3] * local_378[3] + local_378[1] * local_378[1];
              auVar53._0_8_ = dVar48 + dVar55;
              auVar53._8_8_ = dVar48 + dVar55;
              auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
              auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
              auVar45 = sqrtpd(auVar53,auVar53);
              auVar49 = divpd(auVar49,auVar45);
              auVar62._0_8_ = auVar49._0_8_ * local_378[2];
              auVar62._8_8_ = auVar49._8_8_ * local_378[3];
              dVar13 = (double)((ulonglong)(local_378[0] * auVar49._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_));
              dVar12 = (double)((ulonglong)(local_378[1] * auVar49._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_));
              auVar80 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar42);
              dVar75 = 0.0;
              dVar48 = local_118;
              dVar55 = dStack_110;
              dVar69 = local_108;
              dVar56 = (double)local_478._0_8_;
              dVar65 = (double)local_478._8_8_;
            }
          }
          else {
            dVar13 = *(double *)(lVar31 + lVar36);
            dVar12 = ((double *)(lVar31 + lVar36))[1];
            auVar80 = *(undefined1 (*) [16])(lVar31 + 0x10 + lVar36);
            pdVar34 = (double *)(lVar31 + 0x20 + lVar36);
            pdVar30 = (double *)(lVar31 + 0x30 + lVar36);
            dVar75 = pdVar30[1];
            pdVar33 = (double *)(lVar31 + 0x40 + lVar36);
            pdVar1 = (double *)(lVar31 + 0x50 + lVar36);
            dVar16 = *pdVar1;
            dVar47 = pdVar1[1];
            dVar48 = *pdVar34;
            dVar55 = pdVar34[1];
            dVar69 = *pdVar30;
            dVar56 = *pdVar33;
            dVar65 = pdVar33[1];
          }
          uVar37 = uStack_2a0;
          iVar26 = (int)uStack_2a0;
          lVar32 = (longlong)(int)uStack_2a0;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + 2);
          if ((uint)(uStack_2a0._4_4_ - iVar26) < 2) {
            FUN_144a2c682(&local_2a8,uVar37 & 0xffffffff);
          }
          lVar32 = lVar32 * 0x60;
          auVar9._8_4_ = SUB84(dVar73,0);
          auVar9._0_8_ = dVar68;
          auVar9._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + lVar32) = auVar9;
          *(undefined1 (*) [16])(local_2a8 + 0x10 + lVar32) = auVar79;
          auVar10._8_4_ = SUB84(dVar3,0);
          auVar10._0_8_ = dVar77;
          auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x20 + lVar32) = auVar10;
          pdVar34 = (double *)(local_2a8 + 0x30 + lVar32);
          *pdVar34 = local_428;
          pdVar34[1] = dStack_420;
          puVar2 = (undefined8 *)(local_2a8 + 0x40 + lVar32);
          *puVar2 = local_418._0_8_;
          puVar2[1] = local_418._8_8_;
          puVar2 = (undefined8 *)(local_2a8 + 0x50 + lVar32);
          *puVar2 = local_408._0_8_;
          puVar2[1] = local_408._8_8_;
          auVar7._8_4_ = SUB84(dVar12,0);
          auVar7._0_8_ = dVar13;
          auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x60 + lVar32) = auVar7;
          *(undefined1 (*) [16])(local_2a8 + 0x70 + lVar32) = auVar80;
          auVar8._8_4_ = SUB84(dVar55,0);
          auVar8._0_8_ = dVar48;
          auVar8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x80 + lVar32) = auVar8;
          auVar15._8_4_ = SUB84(dVar75,0);
          auVar15._0_8_ = dVar69;
          auVar15._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x90 + lVar32) = auVar15;
          pdVar34 = (double *)(local_2a8 + 0xa0 + lVar32);
          *pdVar34 = dVar56;
          pdVar34[1] = dVar65;
          auVar14._8_4_ = SUB84(dVar47,0);
          auVar14._0_8_ = dVar16;
          auVar14._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0xb0 + lVar32) = auVar14;
        }
        pdVar34 = (double *)(lVar31 + lVar36);
        if (param_5 == '\0') {
          pdVar30 = pdVar34;
          pdVar33 = local_318;
          for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
            *pdVar33 = *pdVar30;
            pdVar30 = pdVar30 + 1;
            pdVar33 = pdVar33 + 1;
          }
        }
        else {
          FUN_1449437a2(pdVar34,local_318,local_488);
        }
        uVar37 = local_448;
        dVar65 = local_318[1] + local_318[1];
        dVar55 = local_318[2] + local_318[2];
        dVar48 = local_318[0] * (local_318[0] + local_318[0]);
        dVar56 = (local_318[0] + local_318[0]) * local_318[3];
        *(double *)(lVar5 + lVar35) =
             (1.0 - (local_318[2] * dVar55 + local_318[1] * dVar65)) * local_2d8;
        ((double *)(lVar5 + lVar35))[1] =
             (dVar65 * local_318[0] + dVar55 * local_318[3]) * local_2d8;
        pdVar30 = (double *)(lVar5 + 0x10 + lVar35);
        *pdVar30 = (local_318[0] * dVar55 - dVar65 * local_318[3]) * local_2d8;
        pdVar30[1] = 0.0;
        pdVar30 = (double *)(lVar5 + 0x20 + lVar35);
        *pdVar30 = (dVar65 * local_318[0] - dVar55 * local_318[3]) * dStack_2d0;
        pdVar30[1] = (1.0 - (local_318[2] * dVar55 + dVar48)) * dStack_2d0;
        pdVar30 = (double *)(lVar5 + 0x30 + lVar35);
        *pdVar30 = (dVar55 * local_318[1] + dVar56) * dStack_2d0;
        pdVar30[1] = 0.0;
        pdVar30 = (double *)(lVar5 + 0x40 + lVar35);
        *pdVar30 = (dVar65 * local_318[3] + local_318[0] * dVar55) * local_2c8;
        pdVar30[1] = (dVar55 * local_318[1] - dVar56) * local_2c8;
        pdVar30 = (double *)(lVar5 + 0x50 + lVar35);
        *pdVar30 = (1.0 - (dVar48 + local_318[1] * dVar65)) * local_2c8;
        pdVar30[1] = 0.0;
        pdVar30 = (double *)(lVar5 + 0x60 + lVar35);
        *pdVar30 = local_2f8;
        pdVar30[1] = dStack_2f0;
        pdVar30 = (double *)(lVar5 + 0x70 + lVar35);
        *pdVar30 = local_2e8;
        pdVar30[1] = 1.0;
        FUN_147b0101a(local_460);
        if (param_5 == '\0') {
          pdVar30 = local_480;
          pdVar33 = local_378;
          for (lVar32 = 0xc; uVar25 = 0, lVar32 != 0; lVar32 = lVar32 + -1) {
            *pdVar33 = *pdVar30;
            pdVar30 = pdVar30 + 1;
            pdVar33 = pdVar33 + 1;
          }
        }
        else {
          pdVar30 = local_480;
          FUN_1449437a2(local_480,local_378,local_488);
          uVar25 = SUB84(pdVar30,0);
        }
        dVar56 = dStack_2c0;
        dVar55 = local_2c8;
        dVar69 = local_378[1] + local_378[1];
        dVar65 = local_378[2] + local_378[2];
        dVar48 = local_378[0] * (local_378[0] + local_378[0]);
        dVar47 = (local_378[0] + local_378[0]) * local_378[3];
        *(double *)(lVar6 + lVar35) =
             (1.0 - (local_378[2] * dVar65 + local_378[1] * dVar69)) * local_338;
        ((double *)(lVar6 + lVar35))[1] =
             (dVar69 * local_378[0] + dVar65 * local_378[3]) * local_338;
        pdVar30 = (double *)(lVar6 + 0x10 + lVar35);
        *pdVar30 = (local_378[0] * dVar65 - dVar69 * local_378[3]) * local_338;
        pdVar30[1] = 0.0;
        pdVar30 = (double *)(lVar6 + 0x20 + lVar35);
        *pdVar30 = (dVar69 * local_378[0] - dVar65 * local_378[3]) * dStack_330;
        pdVar30[1] = (1.0 - (local_378[2] * dVar65 + dVar48)) * dStack_330;
        pdVar30 = (double *)(lVar6 + 0x30 + lVar35);
        *pdVar30 = (dVar65 * local_378[1] + dVar47) * dStack_330;
        pdVar30[1] = 0.0;
        pdVar30 = (double *)(lVar6 + 0x40 + lVar35);
        *pdVar30 = (dVar69 * local_378[3] + local_378[0] * dVar65) * local_328;
        pdVar30[1] = (dVar65 * local_378[1] - dVar47) * local_328;
        pdVar30 = (double *)(lVar6 + 0x50 + lVar35);
        *pdVar30 = (1.0 - (dVar48 + local_378[1] * dVar69)) * local_328;
        pdVar30[1] = 0.0;
        puVar2 = (undefined8 *)(lVar6 + 0x60 + lVar35);
        *puVar2 = local_358;
        puVar2[1] = uStack_350;
        puVar2 = (undefined8 *)(lVar6 + 0x70 + lVar35);
        *puVar2 = local_348;
        puVar2[1] = 0x3ff0000000000000;
        if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
          if (param_5 == '\0') {
            local_3a8 = ZEXT816(0);
            local_3b8 = ZEXT816(0);
            auVar49 = *(undefined1 (*) [16])(param_1 + 0x50);
            dVar48 = auVar49._0_8_;
            dVar47 = auVar49._8_8_;
            auVar45 = *(undefined1 (*) [16])(param_1 + 0x52);
            dVar65 = auVar45._0_8_;
            auVar22._8_8_ = dStack_2d0;
            auVar22._0_8_ = local_2d8;
            auVar23._8_8_ = dStack_2c0;
            auVar23._0_8_ = local_2c8;
            auVar49 = minpd(auVar22,auVar49);
            auVar59 = minpd(auVar23,auVar45);
            auVar63._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
            auVar63._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
            iVar26 = movmskpd((int)local_3b8,auVar63);
            auVar70._8_8_ = -(ulonglong)(auVar59._8_8_ < 0.0);
            auVar70._0_8_ = -(ulonglong)(auVar59._0_8_ < 0.0);
            uVar29 = movmskpd(uVar25,auVar70);
            if ((uVar29 & 0x3fffffff) == 0 && iVar26 == 0) {
              dVar58 = (double)param_1[0x48];
              dVar17 = (double)param_1[0x49];
              dVar18 = (double)param_1[0x4a];
              dVar19 = (double)param_1[0x4b];
              dVar69 = (double)param_1[0x4b];
              dVar75 = (double)param_1[0x4b];
              dVar77 = (double)param_1[0x48];
              dVar74 = (double)param_1[0x48];
              dVar54 = (double)param_1[0x49];
              dVar3 = (double)param_1[0x49];
              dVar68 = (double)param_1[0x4a];
              dVar67 = (double)param_1[0x4a];
              local_3d8[0] = local_318[1] * dVar68 * -1.0 +
                             local_318[2] * dVar54 +
                             local_318[3] * dVar77 * 1.0 + local_318[0] * dVar69;
              local_3d8[1] = local_318[0] * dVar67 * 1.0 +
                             local_318[3] * dVar3 +
                             local_318[2] * dVar74 * -1.0 + local_318[1] * dVar75;
              dVar57 = local_2f8 * dVar48;
              dVar13 = dStack_2f0 * dVar47;
              dVar12 = local_2e8 * dVar65;
              dVar73 = dStack_2e0 * auVar45._8_8_;
              dVar76 = dVar13 * dVar58 - dVar17 * dVar57;
              dVar78 = dVar12 * dVar17 - dVar18 * dVar13;
              dVar66 = dVar57 * dVar18 - dVar58 * dVar12;
              dVar16 = dVar73 * dVar19 - dVar19 * dVar73;
              dVar78 = dVar78 + dVar78;
              dVar66 = dVar66 + dVar66;
              dVar76 = dVar76 + dVar76;
              dVar16 = dVar16 + dVar16;
              dVar13 = (dVar78 * dVar18 - dVar76 * dVar58) + dVar75 * dVar66 + dVar13 +
                       (double)param_1[0x4d];
              dVar73 = (dVar16 * dVar19 - dVar16 * dVar19) + dVar75 * dVar16 + dVar73 +
                       (double)param_1[0x4f];
              local_3c8._8_8_ =
                   local_318[2] * dVar67 * -1.0 +
                   ((dVar74 * local_318[0] * -1.0 + local_318[3] * dVar75) - local_318[1] * dVar3);
              local_3c8._0_8_ =
                   local_318[3] * dVar68 * 1.0 +
                   ((dVar77 * local_318[1] * 1.0 + local_318[2] * dVar69) - local_318[0] * dVar54);
              local_3b8._8_4_ = SUB84(dVar13,0);
              local_3b8._0_8_ =
                   (dVar76 * dVar17 - dVar18 * dVar66) + dVar69 * dVar78 + dVar57 +
                   (double)param_1[0x4c];
              local_3b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              local_3a8._8_4_ = SUB84(dVar73,0);
              local_3a8._0_8_ =
                   (dVar66 * dVar58 - dVar17 * dVar78) + dVar69 * dVar76 + dVar12 +
                   (double)param_1[0x4e];
              local_3a8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              local_398._8_8_ = dStack_2d0 * dVar47;
              local_398._0_8_ = local_2d8 * dVar48;
            }
            else {
              dVar77 = (double)param_1[0x48];
              dVar3 = (double)param_1[0x49];
              dVar54 = (double)param_1[0x4a];
              dVar67 = dVar3 + dVar3;
              dVar68 = dVar54 + dVar54;
              dVar75 = dVar77 * (dVar77 + dVar77);
              local_1a8 = (1.0 - (dVar75 + dVar3 * dVar67)) * dVar65;
              dVar69 = (double)param_1[0x4b];
              dVar73 = dVar68 * dVar69;
              dVar76 = (dVar77 + dVar77) * (double)param_1[0x4b];
              dVar69 = dVar67 * dVar69;
              local_1b8 = (dVar69 + (double)param_1[0x48] * dVar68) * dVar65;
              dVar78 = dVar65 * local_2c8;
              dVar75 = (1.0 - (dVar54 * dVar68 + dVar75)) * dVar47;
              dVar74 = (dVar67 * dVar77 + dVar73) * dVar48;
              local_1c8 = (dVar68 * dVar3 + dVar76) * dVar47;
              dStack_1b0 = (dVar68 * dVar3 - dVar76) * dVar65;
              local_1e8 = ((double)param_1[0x48] * dVar68 - dVar69) * dVar48;
              local_1f8._8_4_ = SUB84(dVar74,0);
              local_1f8._0_8_ = (1.0 - (dVar54 * dVar68 + dVar3 * dVar67)) * dVar48;
              local_1f8._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar75,0);
              local_1d8._0_8_ = (dVar67 * dVar77 - dVar73) * dVar47;
              local_1d8._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_1[0x4c];
              lStack_190 = param_1[0x4d];
              local_188 = param_1[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar75 = local_318[1] + local_318[1];
              dVar74 = local_318[2] + local_318[2];
              dVar69 = local_318[0] * (local_318[0] + local_318[0]);
              local_228 = (1.0 - (dVar69 + local_318[1] * dVar75)) * local_2c8;
              dVar77 = (local_318[0] + local_318[0]) * local_318[3];
              local_238 = (dVar75 * local_318[3] + local_318[0] * dVar74) * local_2c8;
              dStack_230 = (dVar74 * local_318[1] - dVar77) * local_2c8;
              dVar48 = dVar48 * local_2d8;
              dVar47 = dVar47 * dStack_2d0;
              local_278 = (1.0 - (local_318[2] * dVar74 + local_318[1] * dVar75)) * local_2d8;
              dVar69 = (1.0 - (local_318[2] * dVar74 + dVar69)) * dStack_2d0;
              dStack_270 = (dVar75 * local_318[0] + dVar74 * local_318[3]) * local_2d8;
              local_248 = (dVar74 * local_318[1] + dVar77) * dStack_2d0;
              local_268 = (local_318[0] * dVar74 - dVar75 * local_318[3]) * local_2d8;
              uStack_260 = 0;
              local_258._8_4_ = SUB84(dVar69,0);
              local_258._0_8_ = (dVar75 * local_318[0] - dVar74 * local_318[3]) * dStack_2d0;
              local_258._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = local_2f8;
              dStack_210 = dStack_2f0;
              local_208 = local_2e8;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar43._8_8_ = -(ulonglong)(0.0 <= dVar47);
              auVar43._0_8_ = -(ulonglong)(0.0 <= dVar48);
              auVar11._12_4_ = 0x3ff00000;
              auVar11._0_12_ = ZEXT812(0x3ff0000000000000);
              auVar49 = blendvpd(_DAT_149936790,auVar11,auVar43);
              uVar38 = -(ulonglong)(0.0 <= dVar78);
              dVar69 = (double)(~uVar38 & 0xbff0000000000000 | uVar38 & 0x3ff0000000000000);
              dVar75 = auVar49._0_8_;
              local_168 = local_168 * dVar75;
              local_170 = local_170 * dVar75;
              local_178 = local_178 * dVar75;
              dVar75 = auVar49._8_8_;
              local_148 = local_148 * dVar75;
              local_150 = local_150 * dVar75;
              local_158 = dVar75 * local_158;
              local_128 = local_128 * dVar69;
              local_130 = local_130 * dVar69;
              local_138 = dVar69 * local_138;
              FUN_14481fd10(&local_298,&local_178);
              dVar69 = local_288 * local_288 + local_298 * local_298;
              dVar75 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar64._0_8_ = dVar69 + dVar75;
              auVar64._8_8_ = dVar69 + dVar75;
              auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
              auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
              auVar49 = sqrtpd(auVar64,auVar64);
              auVar71._8_8_ = 0x3ff0000000000000;
              auVar71._0_8_ = 0x3ff0000000000000;
              auVar49 = divpd(auVar71,auVar49);
              auVar72._0_8_ = auVar49._0_8_ * local_288;
              auVar72._8_8_ = auVar49._8_8_ * dStack_280;
              local_3d8[0] = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_));
              local_3d8[1] = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_));
              local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar72,auVar44);
              local_398._8_4_ = SUB84(dVar47,0);
              local_398._0_8_ = dVar48;
              local_398._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
              local_3b8._8_8_ = dStack_110;
              local_3b8._0_8_ = local_118;
              local_3a8._8_8_ = 0;
              local_3a8._0_8_ = local_108;
            }
            dStack_380 = auVar45._8_8_ * dVar56;
            local_388 = dVar65 * dVar55;
          }
          else {
            pdVar30 = local_3d8;
            for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
              *pdVar30 = *pdVar34;
              pdVar34 = pdVar34 + 1;
              pdVar30 = pdVar30 + 1;
            }
          }
          FUN_14086e618(param_1,uVar37 & 0xffffffff,local_3d8,param_7);
        }
        lVar32 = local_440 + 1;
        lVar36 = lVar36 + 0x60;
        lVar35 = lVar35 + 0x80;
      } while (lVar32 < (int)local_458[1]);
    }
    if ((longlong)DAT_14cae4f58 != 0) {
      lVar32 = 0;
      do {
        if ((*(int *)(DAT_14cae4f50 + 8 + lVar32) != 0) &&
           (*(longlong *)(DAT_14cae4f50 + lVar32) != 0)) {
          local_178 = local_2b8;
          local_170 = (double)CONCAT44(local_170._4_4_,(int)uStack_2b0);
          FUN_147b4ea06(param_1);
          break;
        }
        lVar32 = lVar32 + 0x10;
      } while ((longlong)DAT_14cae4f58 * 0x10 != lVar32);
    }
    if ((char)local_490 != '\0') {
      if ((char)local_48c == '\0') {
        (**(code **)(*param_1 + 0xbc8))(param_1);
      }
      else {
        local_3e8 = local_2a8;
        local_3e0 = (int)uStack_2a0;
        (**(code **)(*param_1 + 0xbc0))(param_1);
      }
    }
    if (param_6 != '\0') {
      FUN_1448215fa(param_1);
    }
    if (local_2b8 != 0.0) {
      FUN_1400020a8();
    }
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    uVar27 = 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27;
}



// FUNCTION 147afb938 FUN_147afb938 body=101 status=ok
// SIG undefined FUN_147afb938(void)

void FUN_147afb938(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  local_30 = param_6;
  local_38 = param_5;
  FUN_14353a368(param_1,param_2,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147afb99e FUN_147afb99e body=82 status=ok
// SIG undefined FUN_147afb99e(void)

void FUN_147afb99e(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = param_6;
  local_28 = param_5;
  FUN_14353a368();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147afb9f2 FUN_147afb9f2 body=6699 status=ok
// SIG undefined FUN_147afb9f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_147afb9f2(longlong *param_1,uint param_2,int param_3,double *param_4,char param_5,char param_6,
             undefined1 param_7)

{
  undefined8 *puVar1;
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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined8 uVar23;
  undefined7 uVar24;
  uint uVar25;
  double *pdVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  double *pdVar30;
  longlong lVar31;
  ulonglong uVar32;
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
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar61;
  undefined1 auVar58 [16];
  double dVar62;
  undefined1 auVar59 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar70;
  double dVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auStack_428 [36];
  undefined4 local_404;
  undefined4 local_400;
  uint local_3fc;
  longlong *local_3f8;
  longlong *local_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  longlong local_378;
  undefined4 local_370;
  double local_368 [2];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308 [4];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((((int)param_2 < 0) || ((int)*(uint *)(param_1 + 0xe5) <= (int)param_2)) ||
     (local_3fc = param_3 + param_2,
     *(uint *)(param_1 + 0xe5) < local_3fc ||
     (local_3fc == 0 || SCARRY4(param_3,param_2) != (int)local_3fc < 0))) {
    uVar23 = 0;
    goto LAB_147afbaaa;
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) ||
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) {
    local_2a8 = 0;
    uStack_2a0 = 0;
    if (0 < param_3) {
      local_400 = 0;
LAB_147afbb7a:
      uStack_2a0 = 0;
      local_2a8 = 0;
      local_404 = 0;
LAB_147afbb82:
      local_3f8 = param_1 + 0x48;
      local_3f0 = param_1 + 0x118;
      lVar31 = (ulonglong)param_2 << 7;
      do {
        lVar28 = param_1[0xe4];
        if ((char)local_404 != '\0') {
          pdVar26 = local_308;
          uVar21 = FUN_1448ac920(pdVar26,lVar31 + lVar28);
          dVar51 = dStack_2b0;
          dVar61 = local_2b8;
          auVar45 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar43 = auVar45._0_8_;
          dVar50 = auVar45._8_8_;
          auVar66 = *(undefined1 (*) [16])(param_1 + 0x52);
          dVar53 = auVar66._0_8_;
          auVar54._8_8_ = dStack_2c0;
          auVar54._0_8_ = local_2c8;
          auVar40._8_8_ = dStack_2b0;
          auVar40._0_8_ = local_2b8;
          auVar45 = minpd(auVar54,auVar45);
          auVar54 = minpd(auVar40,auVar66);
          auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
          auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
          iVar22 = movmskpd(uVar21,auVar46);
          auVar45._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
          auVar45._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
          uVar25 = movmskpd((int)pdVar26,auVar45);
          if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
            dVar72 = (double)param_1[0x48];
            dVar75 = (double)param_1[0x49];
            dVar44 = (double)param_1[0x4a];
            dVar52 = (double)param_1[0x4b];
            dVar60 = (double)param_1[0x4b];
            dVar42 = (double)param_1[0x4b];
            dVar65 = (double)param_1[0x48];
            dVar12 = (double)param_1[0x48];
            dVar71 = (double)param_1[0x49];
            dVar62 = (double)param_1[0x49];
            dVar73 = (double)param_1[0x4a];
            dVar49 = (double)param_1[0x4a];
            dVar63 = local_308[1] * dVar73 * -1.0 +
                     local_308[2] * dVar71 + local_308[3] * dVar65 * 1.0 + local_308[0] * dVar60;
            dVar64 = local_308[0] * dVar49 * 1.0 +
                     local_308[3] * dVar62 + local_308[2] * dVar12 * -1.0 + local_308[1] * dVar42;
            auVar76._0_8_ =
                 local_308[3] * dVar73 * 1.0 +
                 ((dVar65 * local_308[1] * 1.0 + local_308[2] * dVar60) - local_308[0] * dVar71);
            auVar76._8_8_ =
                 local_308[2] * dVar49 * -1.0 +
                 ((dVar12 * local_308[0] * -1.0 + local_308[3] * dVar42) - local_308[1] * dVar62);
            dVar71 = local_2e8 * dVar43;
            dVar62 = dStack_2e0 * dVar50;
            dVar65 = local_2d8 * dVar53;
            dVar12 = dStack_2d0 * auVar66._8_8_;
            dVar73 = dVar62 * dVar72 - dVar75 * dVar71;
            dVar49 = dVar65 * dVar75 - dVar44 * dVar62;
            dVar70 = dVar71 * dVar44 - dVar72 * dVar65;
            dVar74 = dVar12 * dVar52 - dVar52 * dVar12;
            dVar49 = dVar49 + dVar49;
            dVar70 = dVar70 + dVar70;
            dVar73 = dVar73 + dVar73;
            dVar74 = dVar74 + dVar74;
            dVar71 = (dVar73 * dVar75 - dVar44 * dVar70) + dVar60 * dVar49 + dVar71 +
                     (double)param_1[0x4c];
            dVar62 = (dVar49 * dVar44 - dVar73 * dVar72) + dVar42 * dVar70 + dVar62 +
                     (double)param_1[0x4d];
            local_3b8 = (dVar70 * dVar72 - dVar75 * dVar49) + dVar60 * dVar73 + dVar65 +
                        (double)param_1[0x4e];
            dStack_3b0 = (dVar74 * dVar52 - dVar74 * dVar52) + dVar42 * dVar74 + dVar12 +
                         (double)param_1[0x4f];
            local_3a8._8_8_ = dStack_2c0 * dVar50;
            local_3a8._0_8_ = local_2c8 * dVar43;
            uVar21 = 0;
          }
          else {
            dVar71 = (double)param_1[0x48];
            dVar62 = (double)param_1[0x49];
            dVar73 = (double)param_1[0x4a];
            dVar49 = dVar62 + dVar62;
            dVar63 = dVar73 + dVar73;
            dVar60 = dVar71 * (dVar71 + dVar71);
            local_1a8 = (1.0 - (dVar60 + dVar62 * dVar49)) * dVar53;
            dVar42 = (double)param_1[0x4b];
            dVar64 = dVar63 * dVar42;
            dVar70 = (dVar71 + dVar71) * (double)param_1[0x4b];
            dVar42 = dVar49 * dVar42;
            local_1b8 = (dVar42 + (double)param_1[0x48] * dVar63) * dVar53;
            dVar12 = dVar53 * local_2b8;
            dVar65 = (dVar49 * dVar71 + dVar64) * dVar43;
            local_1c8 = (dVar63 * dVar62 + dVar70) * dVar50;
            dStack_1b0 = (dVar63 * dVar62 - dVar70) * dVar53;
            local_1e8 = ((double)param_1[0x48] * dVar63 - dVar42) * dVar43;
            local_1f8._8_4_ = SUB84(dVar65,0);
            local_1f8._0_8_ = (1.0 - (dVar73 * dVar63 + dVar62 * dVar49)) * dVar43;
            local_1f8._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_8_ = (1.0 - (dVar73 * dVar63 + dVar60)) * dVar50;
            local_1d8._0_8_ = (dVar49 * dVar71 - dVar64) * dVar50;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0x4c];
            lStack_190 = param_1[0x4d];
            local_188 = param_1[0x4e];
            uStack_180 = 0x3ff0000000000000;
            dVar60 = local_308[1] + local_308[1];
            dVar65 = local_308[2] + local_308[2];
            dVar42 = local_308[0] * (local_308[0] + local_308[0]);
            local_228 = (1.0 - (dVar42 + local_308[1] * dVar60)) * local_2b8;
            dVar71 = (local_308[0] + local_308[0]) * local_308[3];
            local_238 = (dVar60 * local_308[3] + local_308[0] * dVar65) * local_2b8;
            dStack_230 = (dVar65 * local_308[1] - dVar71) * local_2b8;
            dVar43 = dVar43 * local_2c8;
            dVar50 = dVar50 * dStack_2c0;
            local_278 = (1.0 - (local_308[2] * dVar65 + local_308[1] * dVar60)) * local_2c8;
            dVar42 = (1.0 - (local_308[2] * dVar65 + dVar42)) * dStack_2c0;
            dStack_270 = (dVar60 * local_308[0] + dVar65 * local_308[3]) * local_2c8;
            local_248 = (dVar65 * local_308[1] + dVar71) * dStack_2c0;
            local_268 = (local_308[0] * dVar65 - dVar60 * local_308[3]) * local_2c8;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar42,0);
            local_258._0_8_ = (dVar60 * local_308[0] - dVar65 * local_308[3]) * dStack_2c0;
            local_258._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_2e8;
            dStack_210 = dStack_2e0;
            local_208 = local_2d8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            local_3a8._8_4_ = SUB84(dVar50,0);
            local_3a8._0_8_ = dVar43;
            local_3a8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
            auVar33._8_8_ = -(ulonglong)(0.0 <= dVar50);
            auVar33._0_8_ = -(ulonglong)(0.0 <= dVar43);
            auVar6._12_4_ = 0x3ff00000;
            auVar6._0_12_ = ZEXT812(0x3ff0000000000000);
            auVar45 = blendvpd(_DAT_149936790,auVar6,auVar33);
            uVar32 = -(ulonglong)(0.0 <= dVar12);
            dVar43 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
            dVar50 = auVar45._0_8_;
            local_168 = local_168 * dVar50;
            local_170 = local_170 * dVar50;
            local_178 = local_178 * dVar50;
            dVar50 = auVar45._8_8_;
            local_148 = local_148 * dVar50;
            local_150 = local_150 * dVar50;
            local_158 = dVar50 * local_158;
            local_128 = local_128 * dVar43;
            local_130 = local_130 * dVar43;
            local_138 = dVar43 * local_138;
            pdVar26 = local_368;
            iVar22 = FUN_14481fd10(local_368,&local_178);
            uVar21 = SUB84(pdVar26,0);
            dVar43 = (double)local_358._0_8_ * (double)local_358._0_8_ + local_368[0] * local_368[0]
            ;
            dVar50 = (double)local_358._8_8_ * (double)local_358._8_8_ + local_368[1] * local_368[1]
            ;
            auVar47._0_8_ = dVar43 + dVar50;
            auVar47._8_8_ = dVar43 + dVar50;
            auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
            auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
            auVar45 = sqrtpd(auVar47,auVar47);
            auVar55._8_8_ = 0x3ff0000000000000;
            auVar55._0_8_ = 0x3ff0000000000000;
            auVar45 = divpd(auVar55,auVar45);
            auVar56._0_8_ = auVar45._0_8_ * (double)local_358._0_8_;
            auVar56._8_8_ = auVar45._8_8_ * (double)local_358._8_8_;
            dVar63 = (double)((ulonglong)(local_368[0] * auVar45._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
            dVar64 = (double)((ulonglong)(local_368[1] * auVar45._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
            auVar76 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar34);
            local_3b8 = local_108;
            dStack_3b0 = 0.0;
            dVar71 = local_118;
            dVar62 = dStack_110;
          }
          dVar51 = auVar66._8_8_ * dVar51;
          if (param_5 == '\0') {
            local_3c8._8_4_ = SUB84(dVar51,0);
            local_3c8._0_8_ = dVar53 * dVar61;
            local_3c8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            auVar45 = *(undefined1 (*) [16])(param_1 + 0x50);
            dVar43 = auVar45._0_8_;
            dVar42 = auVar45._8_8_;
            auVar66 = *(undefined1 (*) [16])(param_1 + 0x52);
            dVar50 = auVar66._0_8_;
            local_3d8 = *(undefined1 (*) [16])(param_4 + 8);
            local_3e8 = *(undefined1 (*) [16])(param_4 + 10);
            auVar54 = minpd(local_3d8,auVar45);
            auVar40 = minpd(local_3e8,auVar66);
            auVar35._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
            auVar35._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
            iVar22 = movmskpd(iVar22,auVar35);
            auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
            auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
            uVar25 = movmskpd(uVar21,auVar41);
            uVar23 = local_3e8._0_8_;
            uVar18 = local_3e8._8_8_;
            uVar19 = local_3d8._0_8_;
            uVar20 = local_3d8._8_8_;
            if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
              dVar72 = *param_4;
              dVar75 = param_4[1];
              dVar44 = param_4[2];
              dVar52 = param_4[3];
              dVar13 = (double)param_1[0x48];
              dVar14 = (double)param_1[0x49];
              local_398 = (double)param_1[0x4a];
              dStack_390 = (double)param_1[0x4b];
              dVar51 = (double)param_1[0x4b];
              dVar53 = (double)param_1[0x4b];
              dVar61 = (double)param_1[0x48];
              dVar60 = (double)param_1[0x48];
              dVar65 = (double)param_1[0x49];
              dVar12 = (double)param_1[0x49];
              dVar73 = (double)param_1[0x4a];
              dVar49 = (double)param_1[0x4a];
              dVar70 = dVar75 * dVar73 * -1.0 +
                       dVar44 * dVar65 + dVar52 * dVar61 * 1.0 + dVar72 * dVar51;
              dVar74 = dVar72 * dVar49 * 1.0 +
                       dVar52 * dVar12 + dVar44 * dVar60 * -1.0 + dVar75 * dVar53;
              auVar77._0_8_ =
                   dVar52 * dVar73 * 1.0 +
                   ((dVar61 * dVar75 * 1.0 + dVar44 * dVar51) - dVar72 * dVar65);
              auVar77._8_8_ =
                   dVar44 * dVar49 * -1.0 +
                   ((dVar60 * dVar72 * -1.0 + dVar52 * dVar53) - dVar75 * dVar12);
              dVar61 = param_4[4] * dVar43;
              dVar60 = param_4[5] * dVar42;
              dVar44 = param_4[6] * dVar50;
              dVar52 = param_4[7] * auVar66._8_8_;
              dVar65 = dVar60 * dVar13 - dVar14 * dVar61;
              dVar12 = dVar44 * dVar14 - local_398 * dVar60;
              dVar49 = dVar61 * local_398 - dVar13 * dVar44;
              dVar75 = dVar52 * dStack_390 - dStack_390 * dVar52;
              dVar12 = dVar12 + dVar12;
              dVar49 = dVar49 + dVar49;
              dVar65 = dVar65 + dVar65;
              dVar75 = dVar75 + dVar75;
              dVar73 = (dVar65 * dVar14 - local_398 * dVar49) + dVar51 * dVar12 + dVar61 +
                       (double)param_1[0x4c];
              dVar72 = (dVar12 * local_398 - dVar65 * dVar13) + dVar53 * dVar49 + dVar60 +
                       (double)param_1[0x4d];
              dVar60 = (dVar49 * dVar13 - dVar14 * dVar12) + dVar51 * dVar65 + dVar44 +
                       (double)param_1[0x4e];
              dVar65 = (dVar75 * dStack_390 - dVar75 * dStack_390) + dVar53 * dVar75 + dVar52 +
                       (double)param_1[0x4f];
              local_388 = auVar45;
            }
            else {
              dVar61 = (double)param_1[0x48];
              dVar60 = (double)param_1[0x49];
              dVar12 = (double)param_1[0x4a];
              dVar73 = dVar60 + dVar60;
              dVar49 = dVar12 + dVar12;
              dVar51 = dVar61 * (dVar61 + dVar61);
              local_1a8 = (1.0 - (dVar51 + dVar60 * dVar73)) * dVar50;
              dVar53 = (double)param_1[0x4b];
              dVar70 = dVar49 * dVar53;
              dVar74 = (dVar61 + dVar61) * (double)param_1[0x4b];
              dVar53 = dVar73 * dVar53;
              local_1b8 = (dVar53 + (double)param_1[0x48] * dVar49) * dVar50;
              dVar65 = dVar50 * (double)local_3e8._0_8_;
              dVar51 = (1.0 - (dVar12 * dVar49 + dVar51)) * dVar42;
              local_1c8 = (dVar49 * dVar60 + dVar74) * dVar42;
              dStack_1b0 = (dVar49 * dVar60 - dVar74) * dVar50;
              local_1e8 = ((double)param_1[0x48] * dVar49 - dVar53) * dVar43;
              local_1f8._8_8_ = (dVar73 * dVar61 + dVar70) * dVar43;
              local_1f8._0_8_ = (1.0 - (dVar12 * dVar49 + dVar60 * dVar73)) * dVar43;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar51,0);
              local_1d8._0_8_ = (dVar73 * dVar61 - dVar70) * dVar42;
              local_1d8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_1[0x4c];
              lStack_190 = param_1[0x4d];
              local_188 = param_1[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar12 = *param_4;
              dVar73 = param_4[1];
              dVar60 = param_4[2];
              dVar70 = dVar73 + dVar73;
              dVar74 = dVar60 + dVar60;
              dVar49 = dVar12 * (dVar12 + dVar12);
              local_228 = (1.0 - (dVar49 + dVar73 * dVar70)) * (double)local_3e8._0_8_;
              dVar53 = param_4[3];
              dVar72 = dVar74 * dVar53;
              dVar75 = (dVar12 + dVar12) * param_4[3];
              dVar53 = dVar70 * dVar53;
              local_238 = (dVar53 + *param_4 * dVar74) * (double)local_3e8._0_8_;
              dStack_230 = (dVar74 * dVar73 - dVar75) * (double)local_3e8._0_8_;
              dVar51 = dVar43 * (double)local_3d8._0_8_;
              dVar61 = dVar42 * (double)local_3d8._8_8_;
              local_278 = (1.0 - (dVar60 * dVar74 + dVar73 * dVar70)) * (double)local_3d8._0_8_;
              dVar60 = (1.0 - (dVar60 * dVar74 + dVar49)) * (double)local_3d8._8_8_;
              dStack_270 = (dVar70 * dVar12 + dVar72) * (double)local_3d8._0_8_;
              local_248 = (dVar74 * dVar73 + dVar75) * (double)local_3d8._8_8_;
              local_268 = (*param_4 * dVar74 - dVar53) * (double)local_3d8._0_8_;
              uStack_260 = 0;
              local_258._8_4_ = SUB84(dVar60,0);
              local_258._0_8_ = (dVar70 * dVar12 - dVar72) * (double)local_3d8._8_8_;
              local_258._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = param_4[4];
              dStack_210 = param_4[5];
              local_208 = param_4[6];
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar45 = _DAT_149934d80;
              auVar36._8_8_ = -(ulonglong)(0.0 <= dVar61);
              auVar36._0_8_ = -(ulonglong)(0.0 <= dVar51);
              auVar54 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
              uVar32 = -(ulonglong)(0.0 <= dVar65);
              dVar53 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
              dVar51 = auVar54._0_8_;
              local_168 = local_168 * dVar51;
              local_170 = local_170 * dVar51;
              local_178 = local_178 * dVar51;
              dVar51 = auVar54._8_8_;
              local_148 = local_148 * dVar51;
              local_150 = local_150 * dVar51;
              local_158 = dVar51 * local_158;
              local_128 = local_128 * dVar53;
              local_130 = local_130 * dVar53;
              local_138 = dVar53 * local_138;
              FUN_14481fd10(local_368,&local_178);
              dVar53 = (double)local_358._0_8_ * (double)local_358._0_8_ +
                       local_368[0] * local_368[0];
              dVar51 = (double)local_358._8_8_ * (double)local_358._8_8_ +
                       local_368[1] * local_368[1];
              auVar48._0_8_ = dVar53 + dVar51;
              auVar48._8_8_ = dVar53 + dVar51;
              auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
              auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
              auVar54 = sqrtpd(auVar48,auVar48);
              auVar45 = divpd(auVar45,auVar54);
              auVar57._0_8_ = auVar45._0_8_ * (double)local_358._0_8_;
              auVar57._8_8_ = auVar45._8_8_ * (double)local_358._8_8_;
              dVar70 = (double)((ulonglong)(local_368[0] * auVar45._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
              dVar74 = (double)((ulonglong)(local_368[1] * auVar45._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
              auVar77 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar37);
              dVar65 = 0.0;
              dVar73 = local_118;
              dVar72 = dStack_110;
              dVar60 = local_108;
            }
            dVar42 = dVar42 * (double)uVar20;
            dVar43 = dVar43 * (double)uVar19;
            dVar50 = dVar50 * (double)uVar23;
            dVar12 = auVar66._8_8_ * (double)uVar18;
            dVar53 = (double)local_3c8._0_8_;
            dVar51 = (double)local_3c8._8_8_;
          }
          else {
            dVar70 = *param_4;
            dVar74 = param_4[1];
            auVar77 = *(undefined1 (*) [16])(param_4 + 2);
            dVar73 = param_4[4];
            dVar72 = param_4[5];
            dVar60 = param_4[6];
            dVar65 = param_4[7];
            dVar43 = param_4[8];
            dVar42 = param_4[9];
            dVar50 = param_4[10];
            dVar12 = param_4[0xb];
            dVar53 = dVar53 * dVar61;
          }
          uVar32 = uStack_2a0;
          iVar22 = (int)uStack_2a0;
          lVar29 = (longlong)(int)uStack_2a0;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + 2);
          if ((uint)(uStack_2a0._4_4_ - iVar22) < 2) {
            FUN_144a2c682(&local_2a8,uVar32 & 0xffffffff);
          }
          lVar29 = lVar29 * 0x60;
          auVar4._8_4_ = SUB84(dVar64,0);
          auVar4._0_8_ = dVar63;
          auVar4._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + lVar29) = auVar4;
          *(undefined1 (*) [16])(local_2a8 + 0x10 + lVar29) = auVar76;
          auVar7._8_4_ = SUB84(dVar62,0);
          auVar7._0_8_ = dVar71;
          auVar7._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x20 + lVar29) = auVar7;
          pdVar26 = (double *)(local_2a8 + 0x30 + lVar29);
          *pdVar26 = local_3b8;
          pdVar26[1] = dStack_3b0;
          puVar1 = (undefined8 *)(local_2a8 + 0x40 + lVar29);
          *puVar1 = local_3a8._0_8_;
          puVar1[1] = local_3a8._8_8_;
          auVar9._8_4_ = SUB84(dVar51,0);
          auVar9._0_8_ = dVar53;
          auVar9._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x50 + lVar29) = auVar9;
          auVar5._8_4_ = SUB84(dVar74,0);
          auVar5._0_8_ = dVar70;
          auVar5._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x60 + lVar29) = auVar5;
          *(undefined1 (*) [16])(local_2a8 + 0x70 + lVar29) = auVar77;
          auVar10._8_4_ = SUB84(dVar72,0);
          auVar10._0_8_ = dVar73;
          auVar10._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x80 + lVar29) = auVar10;
          auVar66._8_4_ = SUB84(dVar65,0);
          auVar66._0_8_ = dVar60;
          auVar66._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x90 + lVar29) = auVar66;
          auVar3._8_4_ = SUB84(dVar42,0);
          auVar3._0_8_ = dVar43;
          auVar3._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0xa0 + lVar29) = auVar3;
          auVar11._8_4_ = SUB84(dVar12,0);
          auVar11._0_8_ = dVar50;
          auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0xb0 + lVar29) = auVar11;
        }
        if (param_5 == '\0') {
          pdVar26 = param_4;
          pdVar30 = local_308;
          for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
            *pdVar30 = *pdVar26;
            pdVar26 = pdVar26 + 1;
            pdVar30 = pdVar30 + 1;
          }
        }
        else {
          FUN_1449437a2(param_4,local_308,local_3f8);
        }
        dVar61 = local_308[1] + local_308[1];
        dVar50 = local_308[2] + local_308[2];
        dVar43 = local_308[0] * (local_308[0] + local_308[0]);
        dVar51 = (local_308[0] + local_308[0]) * local_308[3];
        dVar53 = (dVar61 * local_308[0] + dVar50 * local_308[3]) * local_2c8;
        auVar2._8_4_ = SUB84(dVar53,0);
        auVar2._0_8_ = (1.0 - (local_308[2] * dVar50 + local_308[1] * dVar61)) * local_2c8;
        auVar2._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        *(undefined1 (*) [16])(lVar28 + lVar31) = auVar2;
        pdVar26 = (double *)(lVar28 + 0x10 + lVar31);
        *pdVar26 = (local_308[0] * dVar50 - dVar61 * local_308[3]) * local_2c8;
        pdVar26[1] = 0.0;
        pdVar26 = (double *)(lVar28 + 0x20 + lVar31);
        *pdVar26 = (dVar61 * local_308[0] - dVar50 * local_308[3]) * dStack_2c0;
        pdVar26[1] = (1.0 - (local_308[2] * dVar50 + dVar43)) * dStack_2c0;
        pdVar26 = (double *)(lVar28 + 0x30 + lVar31);
        *pdVar26 = (dVar50 * local_308[1] + dVar51) * dStack_2c0;
        pdVar26[1] = 0.0;
        pdVar26 = (double *)(lVar28 + 0x40 + lVar31);
        *pdVar26 = (dVar61 * local_308[3] + local_308[0] * dVar50) * local_2b8;
        pdVar26[1] = (dVar50 * local_308[1] - dVar51) * local_2b8;
        pdVar26 = (double *)(lVar28 + 0x50 + lVar31);
        *pdVar26 = (1.0 - (dVar43 + local_308[1] * dVar61)) * local_2b8;
        pdVar26[1] = 0.0;
        pdVar26 = (double *)(lVar28 + 0x60 + lVar31);
        *pdVar26 = local_2e8;
        pdVar26[1] = dStack_2e0;
        pdVar26 = (double *)(lVar28 + 0x70 + lVar31);
        *pdVar26 = local_2d8;
        pdVar26[1] = 1.0;
        plVar27 = local_3f0;
        FUN_147b0101a(local_3f0,param_2);
        if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
          if (param_5 == '\0') {
            local_338 = ZEXT816(0);
            local_348 = ZEXT816(0);
            auVar45 = *(undefined1 (*) [16])(param_1 + 0x50);
            dVar43 = auVar45._0_8_;
            dVar50 = auVar45._8_8_;
            auVar66 = *(undefined1 (*) [16])(param_1 + 0x52);
            dVar53 = auVar66._0_8_;
            dVar51 = auVar66._8_8_;
            auVar16._8_8_ = dStack_2c0;
            auVar16._0_8_ = local_2c8;
            auVar17._8_8_ = dStack_2b0;
            auVar17._0_8_ = local_2b8;
            auVar45 = minpd(auVar16,auVar45);
            auVar66 = minpd(auVar17,auVar66);
            auVar58._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
            auVar58._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
            iVar22 = movmskpd((int)local_348,auVar58);
            auVar67._8_8_ = -(ulonglong)(auVar66._8_8_ < 0.0);
            auVar67._0_8_ = -(ulonglong)(auVar66._0_8_ < 0.0);
            uVar25 = movmskpd((int)plVar27,auVar67);
            if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
              dVar52 = (double)param_1[0x48];
              dVar13 = (double)param_1[0x49];
              dVar14 = (double)param_1[0x4a];
              dVar15 = (double)param_1[0x4b];
              dVar42 = (double)param_1[0x4b];
              dVar61 = (double)param_1[0x4b];
              dVar65 = (double)param_1[0x48];
              dVar60 = (double)param_1[0x48];
              dVar12 = (double)param_1[0x49];
              dVar71 = (double)param_1[0x49];
              dVar73 = (double)param_1[0x4a];
              dVar62 = (double)param_1[0x4a];
              local_368[0] = local_308[1] * dVar73 * -1.0 +
                             local_308[2] * dVar12 +
                             local_308[3] * dVar65 * 1.0 + local_308[0] * dVar42;
              local_368[1] = local_308[0] * dVar62 * 1.0 +
                             local_308[3] * dVar71 +
                             local_308[2] * dVar60 * -1.0 + local_308[1] * dVar61;
              dVar75 = local_2e8 * dVar43;
              dVar74 = dStack_2e0 * dVar50;
              dVar72 = local_2d8 * dVar53;
              dVar49 = dStack_2d0 * dVar51;
              dVar63 = dVar74 * dVar52 - dVar13 * dVar75;
              dVar64 = dVar72 * dVar13 - dVar14 * dVar74;
              dVar70 = dVar75 * dVar14 - dVar52 * dVar72;
              dVar44 = dVar49 * dVar15 - dVar15 * dVar49;
              dVar64 = dVar64 + dVar64;
              dVar70 = dVar70 + dVar70;
              dVar63 = dVar63 + dVar63;
              dVar44 = dVar44 + dVar44;
              dVar74 = (dVar64 * dVar14 - dVar63 * dVar52) + dVar61 * dVar70 + dVar74 +
                       (double)param_1[0x4d];
              dVar49 = (dVar44 * dVar15 - dVar44 * dVar15) + dVar61 * dVar44 + dVar49 +
                       (double)param_1[0x4f];
              local_358._8_8_ =
                   local_308[2] * dVar62 * -1.0 +
                   ((dVar60 * local_308[0] * -1.0 + local_308[3] * dVar61) - local_308[1] * dVar71);
              local_358._0_8_ =
                   local_308[3] * dVar73 * 1.0 +
                   ((dVar65 * local_308[1] * 1.0 + local_308[2] * dVar42) - local_308[0] * dVar12);
              local_348._8_4_ = SUB84(dVar74,0);
              local_348._0_8_ =
                   (dVar63 * dVar13 - dVar14 * dVar70) + dVar42 * dVar64 + dVar75 +
                   (double)param_1[0x4c];
              local_348._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
              local_338._8_4_ = SUB84(dVar49,0);
              local_338._0_8_ =
                   (dVar70 * dVar52 - dVar13 * dVar64) + dVar42 * dVar63 + dVar72 +
                   (double)param_1[0x4e];
              local_338._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
              local_328._8_8_ = dStack_2c0 * dVar50;
              local_328._0_8_ = local_2c8 * dVar43;
              local_318._8_8_ = dStack_2b0 * dVar51;
              local_318._0_8_ = local_2b8 * dVar53;
            }
            else {
              dVar65 = (double)param_1[0x48];
              dVar12 = (double)param_1[0x49];
              dVar71 = (double)param_1[0x4a];
              dVar62 = dVar12 + dVar12;
              dVar73 = dVar71 + dVar71;
              dVar60 = dVar65 * (dVar65 + dVar65);
              local_1a8 = (1.0 - (dVar60 + dVar12 * dVar62)) * dVar53;
              dVar61 = (double)param_1[0x4b];
              dVar49 = dVar73 * dVar61;
              dVar63 = (dVar65 + dVar65) * (double)param_1[0x4b];
              dVar61 = dVar62 * dVar61;
              local_1b8 = (dVar61 + (double)param_1[0x48] * dVar73) * dVar53;
              dVar42 = dVar53 * local_2b8;
              dVar51 = dVar51 * dStack_2b0;
              dVar60 = (1.0 - (dVar71 * dVar73 + dVar60)) * dVar50;
              local_1c8 = (dVar73 * dVar12 + dVar63) * dVar50;
              dStack_1b0 = (dVar73 * dVar12 - dVar63) * dVar53;
              local_1e8 = ((double)param_1[0x48] * dVar73 - dVar61) * dVar43;
              local_1f8._8_8_ = (dVar62 * dVar65 + dVar49) * dVar43;
              local_1f8._0_8_ = (1.0 - (dVar71 * dVar73 + dVar12 * dVar62)) * dVar43;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar60,0);
              local_1d8._0_8_ = (dVar62 * dVar65 - dVar49) * dVar50;
              local_1d8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_1[0x4c];
              lStack_190 = param_1[0x4d];
              local_188 = param_1[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar61 = local_308[1] + local_308[1];
              dVar60 = local_308[2] + local_308[2];
              dVar53 = local_308[0] * (local_308[0] + local_308[0]);
              local_228 = (1.0 - (dVar53 + local_308[1] * dVar61)) * local_2b8;
              dVar65 = (local_308[0] + local_308[0]) * local_308[3];
              local_238 = (dVar61 * local_308[3] + local_308[0] * dVar60) * local_2b8;
              dStack_230 = (dVar60 * local_308[1] - dVar65) * local_2b8;
              dVar43 = dVar43 * local_2c8;
              dVar50 = dVar50 * dStack_2c0;
              local_278 = (1.0 - (local_308[2] * dVar60 + local_308[1] * dVar61)) * local_2c8;
              dVar53 = (1.0 - (local_308[2] * dVar60 + dVar53)) * dStack_2c0;
              dStack_270 = (dVar61 * local_308[0] + dVar60 * local_308[3]) * local_2c8;
              local_248 = (dVar60 * local_308[1] + dVar65) * dStack_2c0;
              local_268 = (local_308[0] * dVar60 - dVar61 * local_308[3]) * local_2c8;
              uStack_260 = 0;
              local_258._8_4_ = SUB84(dVar53,0);
              local_258._0_8_ = (dVar61 * local_308[0] - dVar60 * local_308[3]) * dStack_2c0;
              local_258._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = local_2e8;
              dStack_210 = dStack_2e0;
              local_208 = local_2d8;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar38._8_8_ = -(ulonglong)(0.0 <= dVar50);
              auVar38._0_8_ = -(ulonglong)(0.0 <= dVar43);
              auVar8._12_4_ = 0x3ff00000;
              auVar8._0_12_ = ZEXT812(0x3ff0000000000000);
              auVar45 = blendvpd(_DAT_149936790,auVar8,auVar38);
              uVar32 = -(ulonglong)(0.0 <= dVar42);
              dVar53 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
              dVar61 = auVar45._0_8_;
              local_168 = local_168 * dVar61;
              local_170 = local_170 * dVar61;
              local_178 = local_178 * dVar61;
              dVar61 = auVar45._8_8_;
              local_148 = local_148 * dVar61;
              local_150 = local_150 * dVar61;
              local_158 = dVar61 * local_158;
              local_128 = local_128 * dVar53;
              local_130 = local_130 * dVar53;
              local_138 = dVar53 * local_138;
              FUN_14481fd10(&local_298,&local_178);
              dVar53 = local_288 * local_288 + local_298 * local_298;
              dVar61 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar59._0_8_ = dVar53 + dVar61;
              auVar59._8_8_ = dVar53 + dVar61;
              auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
              auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
              auVar45 = sqrtpd(auVar59,auVar59);
              auVar68._8_8_ = 0x3ff0000000000000;
              auVar68._0_8_ = 0x3ff0000000000000;
              auVar45 = divpd(auVar68,auVar45);
              auVar69._0_8_ = auVar45._0_8_ * local_288;
              auVar69._8_8_ = auVar45._8_8_ * dStack_280;
              local_368[0] = (double)((ulonglong)(local_298 * auVar45._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_));
              local_368[1] = (double)((ulonglong)(dStack_290 * auVar45._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_));
              local_358 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar39);
              local_328._8_4_ = SUB84(dVar50,0);
              local_328._0_8_ = dVar43;
              local_328._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
              local_318._8_4_ = SUB84(dVar51,0);
              local_318._0_8_ = dVar42;
              local_318._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
              local_348._8_8_ = dStack_110;
              local_348._0_8_ = local_118;
              local_338._8_8_ = 0;
              local_338._0_8_ = local_108;
            }
          }
          else {
            pdVar26 = param_4;
            pdVar30 = local_368;
            for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
              *pdVar30 = *pdVar26;
              pdVar26 = pdVar26 + 1;
              pdVar30 = pdVar30 + 1;
            }
          }
          FUN_14086e618(param_1,param_2,local_368,param_7);
        }
        param_2 = param_2 + 1;
        lVar31 = lVar31 + 0x80;
      } while ((int)param_2 < (int)local_3fc);
      if ((char)local_400 != '\0') {
        if ((char)local_404 == '\0') goto LAB_147afd3d9;
        goto LAB_147afd364;
      }
    }
  }
  else {
    uVar23 = (**(code **)(*param_1 + 0xbd0))(param_1);
    local_2a8 = 0;
    uStack_2a0 = 0;
    if ((char)uVar23 == '\0') {
      if (0 < param_3) {
        local_400 = (undefined4)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
        goto LAB_147afbb7a;
      }
LAB_147afd3d9:
      (**(code **)(*param_1 + 0xbc8))(param_1);
    }
    else {
      if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_3);
      }
      if (param_3 != 0) {
        uVar23 = FUN_1401a2688(&local_2a8,param_3);
        uVar24 = (undefined7)((ulonglong)uVar23 >> 8);
        local_400 = (undefined4)CONCAT71(uVar24,1);
        local_404 = (undefined4)CONCAT71(uVar24,1);
        goto LAB_147afbb82;
      }
LAB_147afd364:
      local_370 = (int)uStack_2a0;
      local_378 = local_2a8;
      (**(code **)(*param_1 + 0xbc0))(param_1);
    }
  }
  if (param_6 != '\0') {
    FUN_1448215fa(param_1);
  }
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  uVar23 = 1;
LAB_147afbaaa:
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 147afd420 FUN_147afd420 body=6263 status=ok
// SIG undefined FUN_147afd420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_147afd420(longlong *param_1,uint param_2,uint param_3,undefined8 *param_4,char param_5,
             undefined1 param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined7 uVar18;
  uint uVar19;
  undefined1 *puVar20;
  double *pdVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar58;
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auStack_408 [32];
  undefined4 local_3e8;
  undefined4 local_3e4;
  longlong *local_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [32];
  longlong local_378;
  undefined4 local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  longlong local_2a8;
  undefined8 uStack_2a0;
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)*(uint *)(param_1 + 0xe5))) {
    uVar26 = (ulonglong)param_3;
    uVar19 = param_3 + param_2;
    if (uVar19 <= *(uint *)(param_1 + 0xe5) &&
        (uVar19 != 0 && SCARRY4(param_3,param_2) == (int)uVar19 < 0)) {
      *(undefined1 *)(param_1 + 0x14a) = 0;
      *(undefined1 *)(param_1 + 0x152) = 0;
      *(undefined1 *)(param_1 + 0x15a) = 0;
      if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) ||
         ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) {
        local_2a8 = 0;
        uStack_2a0 = 0;
        if (0 < (int)param_3) {
          local_3e4 = 0;
LAB_147afd5a4:
          uStack_2a0 = 0;
          local_2a8 = 0;
          local_3e8 = 0;
LAB_147afd5ac:
          local_3e0 = param_1 + 0x118;
          lVar25 = (ulonglong)param_2 << 7;
          do {
            puVar27 = (undefined8 *)(param_1[0xe4] + lVar25);
            if ((char)local_3e8 != '\0') {
              puVar20 = local_308;
              uVar15 = FUN_1448ac920(puVar20,puVar27);
              auVar45 = _DAT_149934d80;
              auVar36 = *(undefined1 (*) [16])(param_1 + 0x50);
              dVar35 = auVar36._0_8_;
              dVar9 = auVar36._8_8_;
              auVar37 = *(undefined1 (*) [16])(param_1 + 0x52);
              dVar42 = auVar37._0_8_;
              dVar11 = auVar37._8_8_;
              dVar51 = local_2c8._0_8_;
              dVar12 = local_2c8._8_8_;
              dVar1 = local_2b8._0_8_;
              auVar36 = minpd(local_2c8,auVar36);
              auVar44 = minpd(local_2b8,auVar37);
              auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              iVar16 = movmskpd(uVar15,auVar37);
              auVar36._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
              auVar36._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
              uVar19 = movmskpd((int)puVar20,auVar36);
              if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
                dVar62 = (double)param_1[0x48];
                dVar60 = (double)param_1[0x49];
                dVar2 = (double)param_1[0x4a];
                dVar6 = (double)param_1[0x4b];
                dVar34 = (double)param_1[0x4b];
                dVar50 = (double)param_1[0x4b];
                dVar59 = (double)param_1[0x48];
                dVar55 = (double)param_1[0x48];
                dVar53 = (double)param_1[0x49];
                dVar41 = (double)param_1[0x49];
                dVar58 = (double)param_1[0x4a];
                dVar54 = (double)param_1[0x4a];
                dVar61 = (double)local_308._0_8_ * dVar54 * 1.0 +
                         (double)local_2f8._8_8_ * dVar41 +
                         (double)local_2f8._0_8_ * dVar55 * -1.0 + (double)local_308._8_8_ * dVar50;
                local_3a8._8_4_ = SUB84(dVar61,0);
                local_3a8._0_8_ =
                     (double)local_308._8_8_ * dVar58 * -1.0 +
                     (double)local_2f8._0_8_ * dVar53 +
                     (double)local_2f8._8_8_ * dVar59 * 1.0 + (double)local_308._0_8_ * dVar34;
                local_3a8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
                local_3c8._8_8_ =
                     (double)local_2f8._0_8_ * dVar54 * -1.0 +
                     ((dVar55 * (double)local_308._0_8_ * -1.0 + (double)local_2f8._8_8_ * dVar50) -
                     (double)local_308._8_8_ * dVar41);
                local_3c8._0_8_ =
                     (double)local_2f8._8_8_ * dVar58 * 1.0 +
                     ((dVar59 * (double)local_308._8_8_ * 1.0 + (double)local_2f8._0_8_ * dVar34) -
                     (double)local_308._0_8_ * dVar53);
                dVar55 = (double)local_2e8._0_8_ * dVar35;
                dVar59 = (double)local_2e8._8_8_ * dVar9;
                dVar61 = (double)local_2d8._0_8_ * dVar42;
                dVar65 = (double)local_2d8._8_8_ * dVar11;
                dVar41 = dVar59 * dVar62 - dVar60 * dVar55;
                dVar58 = dVar61 * dVar60 - dVar2 * dVar59;
                dVar54 = dVar55 * dVar2 - dVar62 * dVar61;
                dVar53 = dVar65 * dVar6 - dVar6 * dVar65;
                dVar58 = dVar58 + dVar58;
                dVar54 = dVar54 + dVar54;
                dVar41 = dVar41 + dVar41;
                dVar53 = dVar53 + dVar53;
                dVar55 = (dVar41 * dVar60 - dVar2 * dVar54) + dVar34 * dVar58 + dVar55 +
                         (double)param_1[0x4c];
                dVar59 = (dVar58 * dVar2 - dVar41 * dVar62) + dVar50 * dVar54 + dVar59 +
                         (double)param_1[0x4d];
                local_3d8 = (dVar54 * dVar62 - dVar60 * dVar58) + dVar34 * dVar41 + dVar61 +
                            (double)param_1[0x4e];
                dStack_3d0 = (dVar53 * dVar6 - dVar53 * dVar6) + dVar50 * dVar53 + dVar65 +
                             (double)param_1[0x4f];
                local_398._8_8_ = local_2b8._8_8_ * dVar11;
                local_398._0_8_ = dVar1 * dVar42;
                local_3b8._8_8_ = dVar12 * dVar9;
                local_3b8._0_8_ = dVar51 * dVar35;
              }
              else {
                dVar50 = (double)param_1[0x48];
                dVar55 = (double)param_1[0x49];
                dVar59 = (double)param_1[0x4a];
                dVar41 = dVar55 + dVar55;
                dVar53 = dVar59 + dVar59;
                dVar61 = dVar50 * (dVar50 + dVar50);
                local_1a8 = (1.0 - (dVar61 + dVar55 * dVar41)) * dVar42;
                dVar34 = (double)param_1[0x4b];
                dVar54 = dVar53 * dVar34;
                dVar58 = (dVar50 + dVar50) * (double)param_1[0x4b];
                dVar34 = dVar41 * dVar34;
                local_1b8 = (dVar34 + (double)param_1[0x48] * dVar53) * dVar42;
                dVar11 = dVar11 * local_2b8._8_8_;
                dVar62 = (dVar41 * dVar50 + dVar54) * dVar35;
                local_1c8 = (dVar53 * dVar55 + dVar58) * dVar9;
                dStack_1b0 = (dVar53 * dVar55 - dVar58) * dVar42;
                local_1e8 = ((double)param_1[0x48] * dVar53 - dVar34) * dVar35;
                local_1f8._8_4_ = SUB84(dVar62,0);
                local_1f8._0_8_ =
                     ((double)DAT_149934d80 - (dVar59 * dVar53 + dVar55 * dVar41)) * dVar35;
                local_1f8._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                uStack_1e0 = 0;
                local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar59 * dVar53 + dVar61)) * dVar9;
                local_1d8._0_8_ = (dVar41 * dVar50 - dVar54) * dVar9;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = param_1[0x4c];
                lStack_190 = param_1[0x4d];
                local_188 = param_1[0x4e];
                uStack_180 = 0x3ff0000000000000;
                dVar50 = (double)local_308._8_8_ + (double)local_308._8_8_;
                dVar55 = (double)local_2f8._0_8_ + (double)local_2f8._0_8_;
                dVar34 = (double)local_308._0_8_ *
                         ((double)local_308._0_8_ + (double)local_308._0_8_);
                local_228 = (1.0 - (dVar34 + (double)local_308._8_8_ * dVar50)) * dVar1;
                dVar59 = ((double)local_308._0_8_ + (double)local_308._0_8_) *
                         (double)local_2f8._8_8_;
                local_238 = (dVar50 * (double)local_2f8._8_8_ + (double)local_308._0_8_ * dVar55) *
                            dVar1;
                dStack_230 = (dVar55 * (double)local_308._8_8_ - dVar59) * dVar1;
                dVar9 = dVar9 * dVar12;
                local_278 = ((double)DAT_149934d80 -
                            ((double)local_2f8._0_8_ * dVar55 + (double)local_308._8_8_ * dVar50)) *
                            dVar51;
                dVar34 = (DAT_149934d80._8_8_ - ((double)local_2f8._0_8_ * dVar55 + dVar34)) *
                         dVar12;
                dStack_270 = (dVar50 * (double)local_308._0_8_ + dVar55 * (double)local_2f8._8_8_) *
                             dVar51;
                local_248 = (dVar55 * (double)local_308._8_8_ + dVar59) * dVar12;
                local_268 = ((double)local_308._0_8_ * dVar55 - dVar50 * (double)local_2f8._8_8_) *
                            dVar51;
                uStack_260 = 0;
                local_258._8_4_ = SUB84(dVar34,0);
                local_258._0_8_ =
                     (dVar50 * (double)local_308._0_8_ - dVar55 * (double)local_2f8._8_8_) * dVar12;
                local_258._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = (double)local_2e8._0_8_;
                dStack_210 = (double)local_2e8._8_8_;
                local_208 = (double)local_2d8._0_8_;
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                local_3b8._8_4_ = SUB84(dVar9,0);
                local_3b8._0_8_ = dVar35 * dVar51;
                local_3b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                auVar44._8_8_ = -(ulonglong)(0.0 <= dVar9);
                auVar44._0_8_ = -(ulonglong)(0.0 <= dVar35 * dVar51);
                auVar36 = blendvpd(_DAT_149936790,auVar45,auVar44);
                local_398._8_4_ = SUB84(dVar11,0);
                local_398._0_8_ = dVar42 * dVar1;
                local_398._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                uVar28 = -(ulonglong)(0.0 <= dVar42 * dVar1);
                dVar35 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar42 = auVar36._0_8_;
                local_168 = local_168 * dVar42;
                local_170 = local_170 * dVar42;
                local_178 = local_178 * dVar42;
                dVar42 = auVar36._8_8_;
                local_148 = local_148 * dVar42;
                local_150 = local_150 * dVar42;
                local_158 = dVar42 * local_158;
                local_128 = local_128 * dVar35;
                local_130 = local_130 * dVar35;
                local_138 = dVar35 * local_138;
                FUN_14481fd10(&local_368,&local_178);
                dVar35 = local_358 * local_358 + local_368 * local_368;
                dVar42 = dStack_350 * dStack_350 + dStack_360 * dStack_360;
                auVar38._0_8_ = dVar35 + dVar42;
                auVar38._8_8_ = dVar35 + dVar42;
                auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                auVar36 = sqrtpd(auVar38,auVar38);
                auVar36 = divpd(auVar45,auVar36);
                auVar45._0_8_ = auVar36._0_8_ * local_358;
                auVar45._8_8_ = auVar36._8_8_ * dStack_350;
                local_3a8._8_8_ =
                     (ulonglong)(dStack_360 * auVar36._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                local_3a8._0_8_ =
                     (ulonglong)(local_368 * auVar36._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar29);
                local_3d8 = local_108;
                dStack_3d0 = 0.0;
                dVar55 = local_118;
                dVar59 = dStack_110;
              }
              pdVar21 = &local_368;
              uVar15 = FUN_1448ac920(&local_368,param_4);
              auVar36 = *(undefined1 (*) [16])(param_1 + 0x50);
              dVar35 = auVar36._0_8_;
              dVar9 = auVar36._8_8_;
              auVar37 = *(undefined1 (*) [16])(param_1 + 0x52);
              dVar42 = auVar37._0_8_;
              dVar51 = local_328._0_8_;
              dVar11 = local_328._8_8_;
              dVar1 = local_318._0_8_;
              dVar12 = local_318._8_8_;
              auVar36 = minpd(local_328,auVar36);
              auVar45 = minpd(local_318,auVar37);
              auVar39._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar39._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              iVar16 = movmskpd(uVar15,auVar39);
              auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
              auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
              uVar19 = movmskpd((int)pdVar21,auVar46);
              if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
                dVar13 = (double)param_1[0x48];
                dVar14 = (double)param_1[0x49];
                dVar60 = SUB168(*(undefined1 (*) [16])(param_1 + 0x4a),0);
                dVar2 = SUB168(*(undefined1 (*) [16])(param_1 + 0x4a),8);
                dVar34 = (double)param_1[0x4b];
                dVar50 = (double)param_1[0x4b];
                dVar53 = (double)param_1[0x48];
                dVar41 = (double)param_1[0x48];
                dVar58 = (double)param_1[0x49];
                dVar54 = (double)param_1[0x49];
                dVar62 = (double)param_1[0x4a];
                dVar61 = (double)param_1[0x4a];
                dVar6 = dStack_360 * dVar62 * -1.0 +
                        local_358 * dVar58 + dStack_350 * dVar53 * 1.0 + local_368 * dVar34;
                dVar65 = local_368 * dVar61 * 1.0 +
                         dStack_350 * dVar54 + local_358 * dVar41 * -1.0 + dStack_360 * dVar50;
                auVar63._0_8_ =
                     dStack_350 * dVar62 * 1.0 +
                     ((dVar53 * dStack_360 * 1.0 + local_358 * dVar34) - local_368 * dVar58);
                auVar63._8_8_ =
                     local_358 * dVar61 * -1.0 +
                     ((dVar41 * local_368 * -1.0 + dStack_350 * dVar50) - dStack_360 * dVar54);
                dVar61 = local_348 * dVar35;
                dVar43 = dStack_340 * dVar9;
                dVar41 = local_338 * dVar42;
                dVar53 = dStack_330 * auVar37._8_8_;
                dVar54 = dVar43 * dVar13 - dVar14 * dVar61;
                dVar58 = dVar41 * dVar14 - dVar60 * dVar43;
                dVar62 = dVar61 * dVar60 - dVar13 * dVar41;
                dVar52 = dVar53 * dVar2 - dVar2 * dVar53;
                dVar58 = dVar58 + dVar58;
                dVar62 = dVar62 + dVar62;
                dVar54 = dVar54 + dVar54;
                dVar52 = dVar52 + dVar52;
                dVar61 = (dVar54 * dVar14 - dVar60 * dVar62) + dVar34 * dVar58 + dVar61 +
                         (double)param_1[0x4c];
                dVar60 = (dVar58 * dVar60 - dVar54 * dVar13) + dVar50 * dVar62 + dVar43 +
                         (double)param_1[0x4d];
                dVar34 = (dVar62 * dVar13 - dVar14 * dVar58) + dVar34 * dVar54 + dVar41 +
                         (double)param_1[0x4e];
                dVar50 = (dVar52 * dVar2 - dVar52 * dVar2) + dVar50 * dVar52 + dVar53 +
                         (double)param_1[0x4f];
              }
              else {
                dVar41 = (double)param_1[0x48];
                dVar53 = (double)param_1[0x49];
                dVar54 = (double)param_1[0x4a];
                dVar58 = dVar53 + dVar53;
                dVar61 = dVar54 + dVar54;
                dVar50 = dVar41 * (dVar41 + dVar41);
                local_1a8 = (1.0 - (dVar50 + dVar53 * dVar58)) * dVar42;
                dVar34 = (double)param_1[0x4b];
                dVar62 = dVar61 * dVar34;
                dVar60 = (dVar41 + dVar41) * (double)param_1[0x4b];
                dVar34 = dVar58 * dVar34;
                local_1b8 = (dVar34 + (double)param_1[0x48] * dVar61) * dVar42;
                dVar50 = (1.0 - (dVar54 * dVar61 + dVar50)) * dVar9;
                local_1c8 = (dVar61 * dVar53 + dVar60) * dVar9;
                dStack_1b0 = (dVar61 * dVar53 - dVar60) * dVar42;
                local_1e8 = ((double)param_1[0x48] * dVar61 - dVar34) * dVar35;
                local_1f8._8_8_ = (dVar58 * dVar41 + dVar62) * dVar35;
                local_1f8._0_8_ = (1.0 - (dVar54 * dVar61 + dVar53 * dVar58)) * dVar35;
                uStack_1e0 = 0;
                local_1d8._8_4_ = SUB84(dVar50,0);
                local_1d8._0_8_ = (dVar58 * dVar41 - dVar62) * dVar9;
                local_1d8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = param_1[0x4c];
                lStack_190 = param_1[0x4d];
                local_188 = param_1[0x4e];
                uStack_180 = 0x3ff0000000000000;
                dVar50 = dStack_360 + dStack_360;
                dVar41 = local_358 + local_358;
                dVar34 = local_368 * (local_368 + local_368);
                local_228 = (1.0 - (dVar34 + dStack_360 * dVar50)) * dVar1;
                dVar53 = (local_368 + local_368) * dStack_350;
                local_238 = (dVar50 * dStack_350 + local_368 * dVar41) * dVar1;
                dStack_230 = (dVar41 * dStack_360 - dVar53) * dVar1;
                local_278 = (1.0 - (local_358 * dVar41 + dStack_360 * dVar50)) * dVar51;
                dStack_270 = (dVar50 * local_368 + dVar41 * dStack_350) * dVar51;
                local_248 = (dVar41 * dStack_360 + dVar53) * dVar11;
                local_268 = (local_368 * dVar41 - dVar50 * dStack_350) * dVar51;
                uStack_260 = 0;
                local_258._8_8_ = (1.0 - (local_358 * dVar41 + dVar34)) * dVar11;
                local_258._0_8_ = (dVar50 * local_368 - dVar41 * dStack_350) * dVar11;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = local_348;
                dStack_210 = dStack_340;
                local_208 = local_338;
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar36 = _DAT_149934d80;
                auVar30._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar11);
                auVar30._0_8_ = -(ulonglong)(0.0 <= dVar35 * dVar51);
                auVar45 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
                uVar28 = -(ulonglong)(0.0 <= dVar42 * dVar1);
                dVar34 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar50 = auVar45._0_8_;
                local_168 = local_168 * dVar50;
                local_170 = local_170 * dVar50;
                local_178 = local_178 * dVar50;
                dVar50 = auVar45._8_8_;
                local_148 = local_148 * dVar50;
                local_150 = local_150 * dVar50;
                local_158 = dVar50 * local_158;
                local_128 = local_128 * dVar34;
                local_130 = local_130 * dVar34;
                local_138 = dVar34 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar34 = local_288 * local_288 + local_298 * local_298;
                dVar50 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar40._0_8_ = dVar34 + dVar50;
                auVar40._8_8_ = dVar34 + dVar50;
                auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
                auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
                auVar45 = sqrtpd(auVar40,auVar40);
                auVar36 = divpd(auVar36,auVar45);
                auVar47._0_8_ = auVar36._0_8_ * local_288;
                auVar47._8_8_ = auVar36._8_8_ * dStack_280;
                dVar6 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
                dVar65 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
                auVar63 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar31);
                dVar50 = 0.0;
                dVar61 = local_118;
                dVar60 = dStack_110;
                dVar34 = local_108;
              }
              uVar28 = uStack_2a0;
              dVar12 = auVar37._8_8_ * dVar12;
              iVar16 = (int)uStack_2a0;
              lVar22 = (longlong)(int)uStack_2a0;
              uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + 2);
              if ((uint)(uStack_2a0._4_4_ - iVar16) < 2) {
                FUN_144a2c682(&local_2a8,uVar28 & 0xffffffff);
              }
              lVar22 = lVar22 * 0x60;
              *(undefined8 *)(local_2a8 + lVar22) = local_3a8._0_8_;
              ((undefined8 *)(local_2a8 + lVar22))[1] = local_3a8._8_8_;
              puVar23 = (undefined8 *)(local_2a8 + 0x10 + lVar22);
              *puVar23 = local_3c8._0_8_;
              puVar23[1] = local_3c8._8_8_;
              auVar8._8_4_ = SUB84(dVar59,0);
              auVar8._0_8_ = dVar55;
              auVar8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
              *(undefined1 (*) [16])(local_2a8 + 0x20 + lVar22) = auVar8;
              pdVar21 = (double *)(local_2a8 + 0x30 + lVar22);
              *pdVar21 = local_3d8;
              pdVar21[1] = dStack_3d0;
              puVar23 = (undefined8 *)(local_2a8 + 0x40 + lVar22);
              *puVar23 = local_3b8._0_8_;
              puVar23[1] = local_3b8._8_8_;
              puVar23 = (undefined8 *)(local_2a8 + 0x50 + lVar22);
              *puVar23 = local_398._0_8_;
              puVar23[1] = local_398._8_8_;
              auVar5._8_4_ = SUB84(dVar65,0);
              auVar5._0_8_ = dVar6;
              auVar5._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
              *(undefined1 (*) [16])(local_2a8 + 0x60 + lVar22) = auVar5;
              *(undefined1 (*) [16])(local_2a8 + 0x70 + lVar22) = auVar63;
              auVar10._8_4_ = SUB84(dVar60,0);
              auVar10._0_8_ = dVar61;
              auVar10._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              *(undefined1 (*) [16])(local_2a8 + 0x80 + lVar22) = auVar10;
              auVar3._8_4_ = SUB84(dVar50,0);
              auVar3._0_8_ = dVar34;
              auVar3._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
              *(undefined1 (*) [16])(local_2a8 + 0x90 + lVar22) = auVar3;
              auVar7._8_4_ = SUB84(dVar9 * dVar11,0);
              auVar7._0_8_ = dVar35 * dVar51;
              auVar7._12_4_ = (int)((ulonglong)(dVar9 * dVar11) >> 0x20);
              *(undefined1 (*) [16])(local_2a8 + 0xa0 + lVar22) = auVar7;
              auVar4._8_4_ = SUB84(dVar12,0);
              auVar4._0_8_ = dVar42 * dVar1;
              auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(local_2a8 + 0xb0 + lVar22) = auVar4;
            }
            puVar23 = param_4;
            puVar24 = puVar27;
            for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
              *puVar24 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar24 = puVar24 + 1;
            }
            FUN_147b0101a(local_3e0,param_2);
            if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
              pdVar21 = &local_368;
              FUN_1448ac920(&local_368,puVar27);
              auVar45 = _DAT_149934d80;
              local_2d8 = ZEXT816(0);
              local_2e8 = ZEXT816(0);
              auVar36 = *(undefined1 (*) [16])(param_1 + 0x50);
              dVar35 = auVar36._0_8_;
              dVar9 = auVar36._8_8_;
              auVar37 = *(undefined1 (*) [16])(param_1 + 0x52);
              dVar42 = auVar37._0_8_;
              dVar51 = local_328._0_8_;
              dVar11 = local_328._8_8_;
              dVar1 = local_318._0_8_;
              dVar12 = local_318._8_8_;
              auVar36 = minpd(local_328,auVar36);
              auVar44 = minpd(local_318,auVar37);
              auVar48._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar48._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              iVar16 = movmskpd((int)local_2e8,auVar48);
              auVar56._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
              auVar56._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
              uVar19 = movmskpd((int)pdVar21,auVar56);
              if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
                dVar60 = (double)param_1[0x48];
                dVar2 = (double)param_1[0x49];
                dVar6 = (double)param_1[0x4a];
                dVar65 = (double)param_1[0x4b];
                dVar50 = (double)param_1[0x4b];
                dVar34 = (double)param_1[0x4b];
                dVar59 = (double)param_1[0x48];
                dVar55 = (double)param_1[0x48];
                dVar41 = (double)param_1[0x49];
                dVar53 = (double)param_1[0x49];
                dVar54 = (double)param_1[0x4a];
                dVar58 = (double)param_1[0x4a];
                local_308._0_8_ =
                     dStack_360 * dVar54 * -1.0 +
                     local_358 * dVar41 + dStack_350 * dVar59 * 1.0 + local_368 * dVar50;
                local_308._8_8_ =
                     local_368 * dVar58 * 1.0 +
                     dStack_350 * dVar53 + local_358 * dVar55 * -1.0 + dStack_360 * dVar34;
                local_2f8._0_8_ =
                     dStack_350 * dVar54 * 1.0 +
                     ((dVar59 * dStack_360 * 1.0 + local_358 * dVar50) - local_368 * dVar41);
                local_2f8._8_8_ =
                     local_358 * dVar58 * -1.0 +
                     ((dVar55 * local_368 * -1.0 + dStack_350 * dVar34) - dStack_360 * dVar53);
                dVar61 = local_348 * dVar35;
                dVar53 = dStack_340 * dVar9;
                dVar54 = local_338 * dVar42;
                dVar58 = dStack_330 * auVar37._8_8_;
                dVar55 = dVar53 * dVar60 - dVar2 * dVar61;
                dVar59 = dVar54 * dVar2 - dVar6 * dVar53;
                dVar41 = dVar61 * dVar6 - dVar60 * dVar54;
                dVar62 = dVar58 * dVar65 - dVar65 * dVar58;
                dVar59 = dVar59 + dVar59;
                dVar41 = dVar41 + dVar41;
                dVar55 = dVar55 + dVar55;
                dVar62 = dVar62 + dVar62;
                dVar53 = (dVar59 * dVar6 - dVar55 * dVar60) + dVar34 * dVar41 + dVar53 +
                         (double)param_1[0x4d];
                local_2e8._8_4_ = SUB84(dVar53,0);
                local_2e8._0_8_ =
                     (dVar55 * dVar2 - dVar6 * dVar41) + dVar50 * dVar59 + dVar61 +
                     (double)param_1[0x4c];
                local_2e8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
                local_2d8._8_8_ =
                     (dVar62 * dVar65 - dVar62 * dVar65) + dVar34 * dVar62 + dVar58 +
                     (double)param_1[0x4f];
                local_2d8._0_8_ =
                     (dVar41 * dVar60 - dVar2 * dVar59) + dVar50 * dVar55 + dVar54 +
                     (double)param_1[0x4e];
                auVar64._8_8_ = dVar11 * dVar9;
                auVar64._0_8_ = dVar51 * dVar35;
              }
              else {
                dVar59 = (double)param_1[0x48];
                dVar41 = (double)param_1[0x49];
                dVar53 = (double)param_1[0x4a];
                dVar54 = dVar41 + dVar41;
                dVar58 = dVar53 + dVar53;
                dVar50 = dVar59 * (dVar59 + dVar59);
                local_1a8 = (1.0 - (dVar50 + dVar41 * dVar54)) * dVar42;
                dVar34 = (double)param_1[0x4b];
                dVar61 = dVar58 * dVar34;
                dVar62 = (dVar59 + dVar59) * (double)param_1[0x4b];
                dVar34 = dVar54 * dVar34;
                local_1b8 = (dVar34 + (double)param_1[0x48] * dVar58) * dVar42;
                dVar55 = (dVar54 * dVar59 + dVar61) * dVar35;
                local_1c8 = (dVar58 * dVar41 + dVar62) * dVar9;
                dStack_1b0 = (dVar58 * dVar41 - dVar62) * dVar42;
                local_1e8 = ((double)param_1[0x48] * dVar58 - dVar34) * dVar35;
                local_1f8._8_4_ = SUB84(dVar55,0);
                local_1f8._0_8_ =
                     ((double)DAT_149934d80 - (dVar53 * dVar58 + dVar41 * dVar54)) * dVar35;
                local_1f8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
                uStack_1e0 = 0;
                local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar53 * dVar58 + dVar50)) * dVar9;
                local_1d8._0_8_ = (dVar54 * dVar59 - dVar61) * dVar9;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = param_1[0x4c];
                lStack_190 = param_1[0x4d];
                local_188 = param_1[0x4e];
                uStack_180 = 0x3ff0000000000000;
                dVar50 = dStack_360 + dStack_360;
                dVar55 = local_358 + local_358;
                dVar34 = local_368 * (local_368 + local_368);
                local_228 = (1.0 - (dVar34 + dStack_360 * dVar50)) * dVar1;
                dVar59 = (local_368 + local_368) * dStack_350;
                local_238 = (dVar50 * dStack_350 + local_368 * dVar55) * dVar1;
                dStack_230 = (dVar55 * dStack_360 - dVar59) * dVar1;
                auVar64._0_8_ = dVar35 * dVar51;
                auVar64._8_8_ = dVar9 * dVar11;
                local_278 = ((double)DAT_149934d80 - (local_358 * dVar55 + dStack_360 * dVar50)) *
                            dVar51;
                dVar35 = (DAT_149934d80._8_8_ - (local_358 * dVar55 + dVar34)) * dVar11;
                dStack_270 = (dVar50 * local_368 + dVar55 * dStack_350) * dVar51;
                local_248 = (dVar55 * dStack_360 + dVar59) * dVar11;
                local_268 = (local_368 * dVar55 - dVar50 * dStack_350) * dVar51;
                uStack_260 = 0;
                local_258._8_4_ = SUB84(dVar35,0);
                local_258._0_8_ = (dVar50 * local_368 - dVar55 * dStack_350) * dVar11;
                local_258._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = local_348;
                dStack_210 = dStack_340;
                local_208 = local_338;
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar32._8_8_ = -(ulonglong)(0.0 <= auVar64._8_8_);
                auVar32._0_8_ = -(ulonglong)(0.0 <= auVar64._0_8_);
                auVar36 = blendvpd(_DAT_149936790,auVar45,auVar32);
                uVar28 = -(ulonglong)(0.0 <= dVar42 * dVar1);
                dVar35 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar51 = auVar36._0_8_;
                local_168 = local_168 * dVar51;
                local_170 = local_170 * dVar51;
                local_178 = local_178 * dVar51;
                dVar51 = auVar36._8_8_;
                local_148 = local_148 * dVar51;
                local_150 = local_150 * dVar51;
                local_158 = dVar51 * local_158;
                local_128 = local_128 * dVar35;
                local_130 = local_130 * dVar35;
                local_138 = dVar35 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar35 = local_288 * local_288 + local_298 * local_298;
                dVar51 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar49._0_8_ = dVar35 + dVar51;
                auVar49._8_8_ = dVar35 + dVar51;
                auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
                auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
                auVar36 = sqrtpd(auVar49,auVar49);
                auVar36 = divpd(auVar45,auVar36);
                auVar57._0_8_ = auVar36._0_8_ * local_288;
                auVar57._8_8_ = auVar36._8_8_ * dStack_280;
                local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar33);
                local_308._8_8_ =
                     (ulonglong)(dStack_290 * auVar36._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
                local_308._0_8_ =
                     (ulonglong)(local_298 * auVar36._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
                local_2d8._8_8_ = 0;
                local_2d8._0_8_ = local_108;
                local_2e8._8_8_ = dStack_110;
                local_2e8._0_8_ = local_118;
              }
              dVar12 = auVar37._8_8_ * dVar12;
              local_2b8._8_4_ = SUB84(dVar12,0);
              local_2b8._0_8_ = dVar42 * dVar1;
              local_2b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              local_2c8 = auVar64;
              FUN_14086e618(param_1,param_2,local_308,param_6);
            }
            param_4 = param_4 + 0x10;
            param_2 = param_2 + 1;
            lVar25 = lVar25 + 0x80;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          if ((char)local_3e4 != '\0') {
            if ((char)local_3e8 == '\0') goto LAB_147afec53;
            goto LAB_147afebde;
          }
        }
      }
      else {
        uVar17 = (**(code **)(*param_1 + 0xbd0))(param_1);
        local_2a8 = 0;
        uStack_2a0 = 0;
        if ((char)uVar17 == '\0') {
          if (0 < (int)param_3) {
            local_3e4 = (undefined4)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
            goto LAB_147afd5a4;
          }
LAB_147afec53:
          (**(code **)(*param_1 + 0xbc8))(param_1);
        }
        else {
          if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar26);
          }
          if (param_3 != 0) {
            uVar17 = FUN_1401a2688(&local_2a8,uVar26);
            uVar18 = (undefined7)((ulonglong)uVar17 >> 8);
            local_3e4 = (undefined4)CONCAT71(uVar18,1);
            local_3e8 = (undefined4)CONCAT71(uVar18,1);
            goto LAB_147afd5ac;
          }
LAB_147afebde:
          local_370 = (int)uStack_2a0;
          local_378 = local_2a8;
          (**(code **)(*param_1 + 0xbc0))(param_1);
        }
      }
      if (param_5 != '\0') {
        FUN_1448215fa(param_1);
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
      uVar17 = 1;
      goto LAB_147afd4d4;
    }
  }
  uVar17 = 0;
LAB_147afd4d4:
  if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 147afec9a FUN_147afec9a body=1392 status=ok
// SIG undefined FUN_147afec9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_147afec9a(longlong param_1,longlong *param_2,double *param_3,float param_4,char param_5)

{
  undefined1 auVar1 [32];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  ulonglong uVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_2 = 0;
  param_2[1] = 0;
  lVar11 = *(longlong *)(param_1 + 0x660);
  bVar7 = lVar11 != 0 & DAT_14c950c29;
  uVar9 = (undefined4)CONCAT71((int7)(local_f0 >> 8),bVar7);
  if (bVar7 == 1) {
    lVar12 = lVar11;
    uVar9 = FUN_1456cec3c();
  }
  else {
    lVar12 = param_1;
    if (lVar11 == 0) goto LAB_147aff124;
  }
  dVar6 = (double)param_4;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar28 = param_3[2];
  if (param_5 != '\0') {
    auVar14 = *(undefined1 (*) [16])(param_1 + 0x280);
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x290);
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar14._8_8_));
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar14._0_8_));
    iVar8 = movmskpd(uVar9,auVar20);
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_));
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_));
    uVar10 = movmskpd((int)lVar12,auVar25);
    if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
      uVar9 = (undefined4)DAT_14c846498;
      uVar26 = (undefined4)((ulonglong)DAT_14c846498 >> 0x20);
      dVar22 = DAT_14c846480;
      dVar23 = DAT_14c846488;
      dVar13 = DAT_14c8464c0;
      dVar15 = DAT_14c8464c8;
      dVar21 = DAT_14c8464d0;
      uVar19 = uRam000000014c8464d8;
      dVar17 = DAT_14c8464a0;
      dVar5 = DAT_14c8464a8;
      dVar16 = DAT_14c8464b0;
      dVar2 = DAT_14c846490;
    }
    else {
      auVar25 = divpd(_DAT_149934d80,auVar14);
      auVar20 = divpd(ZEXT816(0x3ff0000000000000),auVar18);
      dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar14._0_8_)) & auVar25._0_8_);
      dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar14._8_8_)) & auVar25._8_8_);
      dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_)) & auVar20._0_8_);
      dVar22 = -*(double *)(param_1 + 0x240);
      dVar23 = -*(double *)(param_1 + 0x248);
      dVar2 = *(double *)(param_1 + 0x250) * -1.0;
      dVar16 = *(double *)(param_1 + 600) * 1.0;
      dVar17 = *(double *)(param_1 + 0x260) * dVar13;
      dVar5 = *(double *)(param_1 + 0x268) * dVar15;
      dVar24 = *(double *)(param_1 + 0x270) * dVar21;
      uVar9 = SUB84(dVar16,0);
      uVar26 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar27 = dVar5 * dVar22 - dVar23 * dVar17;
      dVar29 = dVar24 * dVar23 - dVar2 * dVar5;
      dVar30 = dVar17 * dVar2 - dVar22 * dVar24;
      dVar29 = dVar29 + dVar29;
      dVar30 = dVar30 + dVar30;
      dVar27 = dVar27 + dVar27;
      uVar19 = 0;
      dVar17 = 0.0 - ((dVar27 * dVar23 - dVar30 * dVar2) + dVar16 * dVar29 + dVar17);
      dVar5 = 0.0 - (dVar27 * *(double *)(param_1 + 0x240) + dVar2 * dVar29 +
                    dVar16 * dVar30 + dVar5);
      dVar16 = 0.0 - (dVar16 * dVar27 + dVar24 + (dVar30 * dVar22 - dVar29 * dVar23));
      local_140 = dVar6;
    }
    dVar3 = dVar3 * dVar13;
    dVar4 = dVar4 * dVar15;
    dVar28 = dVar28 * dVar21;
    dVar24 = dVar4 * dVar22 - dVar23 * dVar3;
    dVar30 = dVar28 * dVar23 - dVar2 * dVar4;
    dVar27 = dVar3 * dVar2 - dVar22 * dVar28;
    dVar30 = dVar30 + dVar30;
    dVar27 = dVar27 + dVar27;
    dVar24 = dVar24 + dVar24;
    dVar3 = (dVar24 * dVar23 - dVar27 * dVar2) + (double)CONCAT44(uVar26,uVar9) * dVar30 + dVar3 +
            dVar17;
    dVar4 = (dVar2 * dVar30 - dVar22 * dVar24) + (double)CONCAT44(uVar26,uVar9) * dVar27 + dVar4 +
            dVar5;
    dVar28 = dVar24 * (double)CONCAT44(uVar26,uVar9) + dVar28 + (dVar27 * dVar22 - dVar30 * dVar23)
             + dVar16;
    auVar14._0_8_ = ABS(dVar13);
    auVar14._8_8_ = ABS(dVar15);
    auVar18._0_8_ = ABS(dVar21);
    auVar1._24_8_ = uVar19 & 0x7fffffffffffffff;
    auVar1._16_8_ = auVar18._0_8_;
    auVar1._0_16_ = auVar14;
    auVar18._8_8_ = auVar14._0_8_;
    auVar14 = maxpd(auVar14,auVar1._8_16_);
    auVar14 = maxpd(auVar14,auVar18);
    dVar6 = dVar6 * (double)(float)auVar14._0_8_;
  }
  local_100 = *(undefined8 *)(lVar11 + 0x230);
  local_108 = *(undefined8 *)(lVar11 + 0x210);
  local_118 = *(undefined8 *)(lVar11 + 0x200);
  uStack_110 = *(undefined8 *)(lVar11 + 0x208);
  iVar8 = *(int *)(param_1 + 0x728);
  if (0 < iVar8) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      FUN_147aff20c(&local_118,&local_138,*(longlong *)(param_1 + 0x720) + lVar11);
      dVar17 = local_120 + dVar6 + 9.999999747378752e-05;
      dVar2 = 0.0;
      if (0.0 <= dVar17) {
        dVar2 = dVar17;
      }
      if ((dVar28 - local_128) * (dVar28 - local_128) +
          (dVar3 - local_138) * (dVar3 - local_138) + (dVar4 - local_130) * (dVar4 - local_130) <=
          dVar2 * dVar2) {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_1446f48e2(param_2,iVar8);
        }
        *(int *)(*param_2 + (longlong)iVar8 * 4) = (int)lVar12;
        iVar8 = *(int *)(param_1 + 0x728);
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x80;
    } while (lVar12 < iVar8);
  }
LAB_147aff124:
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aff20c FUN_147aff20c body=293 status=ok
// SIG undefined FUN_147aff20c(void)

undefined1 (*) [16] FUN_147aff20c(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar14 = param_1[2];
  dVar15 = *param_1;
  dVar1 = param_1[1];
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar10 = param_3[4];
  dVar11 = param_3[5];
  dVar12 = param_3[8];
  dVar13 = param_3[9];
  dVar7 = dVar14 * dVar13 + dVar1 * dVar11 + dVar15 * dVar9 + param_3[0xd];
  dVar2 = param_3[10];
  dVar3 = param_3[6];
  dVar4 = param_3[2];
  dVar5 = param_3[0xe];
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar14 * dVar12 + dVar1 * dVar10 + dVar15 * dVar8 + param_3[0xc];
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar6;
  *(double *)param_2[1] = dVar15 * dVar4 + dVar1 * dVar3 + dVar14 * dVar2 + dVar5;
  dVar15 = dVar2 * dVar2 + dVar12 * dVar12 + dVar13 * dVar13;
  dVar14 = dVar3 * dVar3 + dVar10 * dVar10 + dVar11 * dVar11;
  if (dVar14 <= dVar15) {
    dVar14 = dVar15;
  }
  dVar15 = dVar4 * dVar4 + dVar8 * dVar8 + dVar9 * dVar9;
  if (dVar15 <= dVar14) {
    dVar15 = dVar14;
  }
  *(double *)(param_2[1] + 8) = SQRT(dVar15) * param_1[3];
  return param_2;
}



// FUNCTION 147aff332 FUN_147aff332 body=1273 status=ok
// SIG undefined FUN_147aff332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147aff332(longlong param_1,longlong *param_2,double *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_1b8 [32];
  double local_198 [2];
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar15 = *(longlong *)(param_1 + 0x660);
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    lVar16 = lVar15;
    FUN_1456cec3c();
  }
  else {
    lVar16 = param_1;
    if (lVar15 == 0) goto LAB_147aff790;
  }
  local_c8 = param_3[6];
  local_f8 = *param_3;
  dStack_f0 = param_3[1];
  local_e8 = param_3[2];
  dStack_e0 = param_3[3];
  local_d8 = param_3[4];
  dStack_d0 = param_3[5];
  if (param_4 != '\0') {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x290);
    lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar19._8_4_ = (int)lVar17;
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    auVar19._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar11 = movmskpd(SUB84(local_c8,0),auVar19);
    lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar21._8_4_ = (int)lVar17;
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    auVar21._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar12 = movmskpd((int)lVar16,auVar21);
    if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
      pdVar13 = (double *)&DAT_14c846480;
      pdVar14 = local_198;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
    }
    else {
      auVar21 = divpd(_DAT_149934d80,auVar1);
      auVar19 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar21._0_8_);
      dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar21._8_8_);
      local_148 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar19._0_8_);
      local_198[0] = -*(double *)(param_1 + 0x240);
      local_198[1] = -*(double *)(param_1 + 0x248);
      dVar6 = *(double *)(param_1 + 0x250) * -1.0;
      dVar7 = *(double *)(param_1 + 600) * 1.0;
      dVar18 = *(double *)(param_1 + 0x260) * dVar3;
      dVar20 = *(double *)(param_1 + 0x268) * dVar4;
      dVar5 = *(double *)(param_1 + 0x270) * local_148;
      local_188._8_4_ = SUB84(dVar7,0);
      local_188._0_8_ = dVar6;
      local_188._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar9 = dVar20 * local_198[0] - local_198[1] * dVar18;
      dVar10 = dVar5 * local_198[1] - dVar6 * dVar20;
      dVar8 = dVar18 * dVar6 - local_198[0] * dVar5;
      dVar10 = dVar10 + dVar10;
      dVar8 = dVar8 + dVar8;
      dVar9 = dVar9 + dVar9;
      local_178 = 0.0 - ((dVar9 * local_198[1] - dVar8 * dVar6) + dVar7 * dVar10 + dVar18);
      dStack_170 = 0.0 - (dVar9 * *(double *)(param_1 + 0x240) + dVar6 * dVar10 +
                         dVar7 * dVar8 + dVar20);
      local_168 = 0.0 - (dVar7 * dVar9 + dVar5 + (dVar8 * local_198[0] - dVar10 * local_198[1]));
      uStack_160 = 0;
      local_158._8_4_ = SUB84(dVar4,0);
      local_158._0_8_ = dVar3;
      local_158._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_140 = 0;
    }
    FUN_144a1c3a2(&local_f8,&local_130,local_198);
    local_c8 = local_100;
    local_d8 = local_110;
    dStack_d0 = dStack_108;
    local_e8 = local_120;
    dStack_e0 = dStack_118;
    local_f8 = local_130;
    dStack_f0 = dStack_128;
  }
  dStack_170 = *(double *)(lVar15 + 0x210) + *(double *)(lVar15 + 0x228);
  local_178 = *(double *)(lVar15 + 0x208) + *(double *)(lVar15 + 0x220);
  local_198[1] = *(double *)(lVar15 + 0x208) - *(double *)(lVar15 + 0x220);
  local_198[0] = *(double *)(lVar15 + 0x200) - *(double *)(lVar15 + 0x218);
  local_188._8_8_ = *(double *)(lVar15 + 0x200) + *(double *)(lVar15 + 0x218);
  local_188._0_8_ = *(double *)(lVar15 + 0x210) - *(double *)(lVar15 + 0x228);
  local_168 = (double)CONCAT71(local_168._1_7_,1);
  if (0 < *(int *)(param_1 + 0x728)) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      FUN_144b12ece(local_198,&local_130,*(longlong *)(param_1 + 0x720) + lVar15);
      if ((((local_f8 <= dStack_118) && (local_130 <= dStack_e0)) && (dStack_f0 <= local_110)) &&
         (((dStack_128 <= local_d8 && (local_e8 <= dStack_108)) && (local_120 <= dStack_d0)))) {
        iVar11 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar11 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
          FUN_1446f48e2(param_2,iVar11);
        }
        *(int *)(*param_2 + (longlong)iVar11 * 4) = (int)lVar16;
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x80;
    } while (lVar16 < *(int *)(param_1 + 0x728));
  }
LAB_147aff790:
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147aff82c FUN_147aff82c body=317 status=ok
// SIG undefined FUN_147aff82c(void)

ulonglong FUN_147aff82c(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  if (*(int *)(param_1 + 0x728) < 1) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar7 = FUN_147a2e7d0();
    if ((longlong)*(int *)(param_1 + 0x728) < 1) {
      fVar10 = 0.0;
      fVar8 = 0.0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x720);
      fVar8 = 0.0;
      lVar6 = 0;
      fVar10 = 0.0;
      do {
        dVar13 = *(double *)(lVar5 + 0x50 + lVar6);
        dVar1 = *(double *)(lVar5 + 0x48 + lVar6);
        dVar2 = *(double *)(lVar5 + 0x40 + lVar6);
        dVar12 = *(double *)(lVar5 + 0x30 + lVar6);
        dVar3 = *(double *)(lVar5 + 0x28 + lVar6);
        dVar4 = *(double *)(lVar5 + 0x20 + lVar6);
        dVar2 = dVar13 * dVar13 + dVar2 * dVar2 + dVar1 * dVar1;
        dVar13 = *(double *)(lVar5 + 0x10 + lVar6);
        dVar12 = dVar12 * dVar12 + dVar4 * dVar4 + dVar3 * dVar3;
        dVar1 = *(double *)(lVar5 + 8 + lVar6);
        if (dVar12 <= dVar2) {
          dVar12 = dVar2;
        }
        dVar13 = dVar13 * dVar13 +
                 *(double *)(lVar5 + lVar6) * *(double *)(lVar5 + lVar6) + dVar1 * dVar1;
        if (dVar13 <= dVar12) {
          dVar13 = dVar12;
        }
        fVar11 = (float)SQRT(dVar13);
        fVar10 = fVar10 + fVar11;
        fVar8 = fVar8 + fVar11 * fVar11;
        lVar6 = lVar6 + 0x80;
      } while ((longlong)*(int *)(param_1 + 0x728) * 0x80 != lVar6);
    }
    uVar9 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),~-(uint)(1e-08 < fVar10) & (uint)(float)uVar7)
            | (ulonglong)((uint)((float)uVar7 * (fVar8 / fVar10)) & -(uint)(1e-08 < fVar10));
  }
  return uVar9;
}



// FUNCTION 147aff974 FUN_147aff974 body=531 status=ok
// SIG undefined FUN_147aff974(void)

undefined8 FUN_147aff974(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x3b8);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
    lVar5 = *(longlong *)(param_1 + 0x3b8);
  }
  else if (lVar5 == 0) goto LAB_147affb10;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  if (*(longlong *)(lVar5 + 0x248) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x3b8);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    plVar1 = *(longlong **)(lVar5 + 0x248);
    cVar3 = FUN_147a30bfa(param_1 + -0x2a8,plVar1);
    if (cVar3 == '\0') {
      if ((*(byte *)(plVar1 + 5) & 2) == 0) {
        lVar5 = *(longlong *)(param_1 + 0x3b8);
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
        if (*(longlong *)(lVar5 + 0x188) != 0) {
          (**(code **)(*param_2 + 0x28))(param_2,*(longlong *)(lVar5 + 0x188),&DAT_14c846480);
        }
      }
      else {
        (**(code **)(*plVar1 + 0x2b0))(plVar1,&DAT_14c846480,param_2);
      }
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar2 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14a975290;
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
      local_38[2] = lVar4;
      *local_38 = &PTR_FUN_14a975220;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1 + -0x2a8);
      puVar2[4] = &LAB_147affb88;
      *(undefined4 *)(puVar2 + 5) = 0;
      (**(code **)(*param_2 + 0x40))(param_2,&local_38);
      FUN_1449db362(&local_38);
    }
  }
LAB_147affb10:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147affb96 FUN_147affb96 body=332 status=ok
// SIG undefined FUN_147affb96(void)

undefined8
FUN_147affb96(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_180;
  void *local_178;
  undefined1 local_170 [4];
  float local_16c;
  undefined4 local_cc;
  undefined4 local_a0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar7 = 0;
  local_178 = param_2;
  memset(local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_16c = 1.0;
  local_cc = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x840);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x838);
    fVar8 = 3.4028235e+38;
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        local_188 = *(undefined1 *)(param_5 + 0x10);
        local_180 = *(undefined1 *)(param_5 + 0x13);
        cVar5 = FUN_143606068(lVar3,local_170,param_3,param_4);
        fVar4 = local_16c;
        if ((cVar5 != '\0') && (uVar7 = 1, local_16c < fVar8)) {
          memcpy(local_178,local_170,0x100);
          fVar8 = fVar4;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147affce4 FUN_147affce4 body=307 status=ok
// SIG undefined FUN_147affce4(void)

longlong FUN_147affce4(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_148 [4];
  float local_144;
  undefined4 local_a4;
  undefined4 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar6 = 0;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 1.0;
  local_a4 = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x840);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x838);
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        local_158 = param_7;
        local_160 = param_6;
        local_168 = param_5;
        cVar4 = FUN_14597c210(lVar3,local_148,param_3,param_4);
        if ((cVar4 != '\0') &&
           ((lVar6 == 0 || (lVar6 = 1, local_144 < *(float *)((longlong)param_2 + 4))))) {
          memcpy(param_2,local_148,0x100);
          lVar6 = 1;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147affe18 FUN_147affe18 body=118 status=ok
// SIG undefined FUN_147affe18(void)

undefined8 FUN_147affe18(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x840);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x838);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (cVar4 = FUN_143606076(lVar3,param_2,param_3,param_4,0,0), cVar4 != '\0'))
      {
        return 1;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147affe8e FUN_147affe8e body=591 status=ok
// SIG undefined FUN_147affe8e(void)

void FUN_147affe8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x36) & 2) != 0) {
    local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffff00000000);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_24 = 3;
    local_28 = 0x10;
    FUN_1479eeac4(param_2 + 0x88,&local_70);
    FUN_1479eeb62(&local_70);
  }
  lVar5 = *(longlong *)(param_1 + 0x3b8);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
    lVar5 = *(longlong *)(param_1 + 0x3b8);
  }
  else if (lVar5 == 0) goto LAB_147b00010;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
    lVar5 = *(longlong *)(param_1 + 0x3b8);
  }
  if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  if (*(longlong *)(lVar5 + 0x248) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x3b8);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    plVar1 = *(longlong **)(lVar5 + 0x248);
    cVar3 = FUN_147a30bfa(param_1 + -0x2a8,plVar1);
    if (cVar3 != '\0') {
      *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 8;
      (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2 + 0x88,&DAT_14c846480);
      local_70 = (undefined8 *)0x0;
      local_68 = local_68 & 0xffffffff00000000;
      FUN_1446efa72(&local_70,0,3,0x10);
      puVar2 = local_70;
      local_68 = CONCAT44(local_68._4_4_,3);
      *local_70 = &PTR_LAB_14a975290;
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
      local_70[2] = lVar4;
      *local_70 = &PTR_FUN_14a975220;
      local_70[3] = 0;
      FUN_14485c47a(local_70 + 3,param_1 + -0x2a8);
      puVar2[4] = &LAB_147affb88;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_144a450dc(param_2 + 0x68,&local_70);
      FUN_1449db362(&local_70);
    }
  }
LAB_147b00010:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b000f4 FUN_147b000f4 body=2476 status=ok
// SIG undefined FUN_147b000f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b000f4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_388 [32];
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined1 local_2d0 [48];
  char local_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_14014d9c6(param_1,local_2d0);
  if (local_2a0 != '\0') {
    FUN_146eacf4c(param_2,&local_308,param_1 + 0x240);
    if ((longlong)*(int *)(param_1 + 0x728) != 0) {
      lVar23 = *(longlong *)(param_1 + 0x720);
      lVar24 = (longlong)*(int *)(param_1 + 0x728) << 7;
      do {
        FUN_1448ac920(&local_368,lVar23);
        if ((((local_328 != 0.0) || (dStack_320 != 0.0)) || (local_318 != 0.0)) || (NAN(local_318)))
        {
          puVar21 = local_2d0;
          uVar18 = FUN_144b12ece(local_2d0,&local_178,lVar23);
          dVar9 = dStack_310;
          dVar17 = local_318;
          dVar16 = dStack_320;
          dVar15 = local_328;
          auVar36 = _DAT_149934d80;
          dVar28 = (local_160 - local_178) * 0.5;
          if ((local_308 <= dVar28 + local_178 + dVar28) &&
             ((local_178 + dVar28) - dVar28 <= local_2f0)) {
            dVar28 = (local_158 - local_170) * 0.5;
            if ((local_300 <= dVar28 + local_170 + dVar28) &&
               ((local_170 + dVar28) - dVar28 <= local_2e8)) {
              dVar28 = (local_150 - local_168) * 0.5;
              if ((local_2f8 <= dVar28 + local_168 + dVar28) &&
                 ((local_168 + dVar28) - dVar28 <= local_2e0)) {
                auVar34 = *(undefined1 (*) [16])(param_1 + 0x280);
                dVar28 = auVar34._0_8_;
                dVar4 = auVar34._8_8_;
                auVar1 = *(undefined1 (*) [16])(param_1 + 0x290);
                dVar3 = auVar1._0_8_;
                auVar39._8_8_ = dStack_320;
                auVar39._0_8_ = local_328;
                auVar14._8_8_ = dStack_310;
                auVar14._0_8_ = local_318;
                auVar34 = minpd(auVar39,auVar34);
                auVar39 = minpd(auVar14,auVar1);
                auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
                auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
                iVar19 = movmskpd(uVar18,auVar35);
                auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                uVar20 = movmskpd((int)puVar21,auVar34);
                if ((uVar20 & 0x3fffffff) == 0 && iVar19 == 0) {
                  dVar10 = *(double *)(param_1 + 0x240);
                  dVar11 = *(double *)(param_1 + 0x248);
                  dVar12 = *(double *)(param_1 + 0x250);
                  dVar13 = *(double *)(param_1 + 600);
                  dVar33 = *(double *)(param_1 + 600);
                  dVar29 = *(double *)(param_1 + 600);
                  dVar30 = *(double *)(param_1 + 0x240);
                  dVar32 = *(double *)(param_1 + 0x240);
                  dVar40 = *(double *)(param_1 + 0x248);
                  dVar43 = *(double *)(param_1 + 0x248);
                  dVar45 = *(double *)(param_1 + 0x250);
                  dVar38 = *(double *)(param_1 + 0x250);
                  dVar41 = dStack_360 * dVar45 * -1.0 +
                           local_358 * dVar40 + dStack_350 * dVar30 * 1.0 + local_368 * dVar33;
                  dVar42 = local_368 * dVar38 * 1.0 +
                           dStack_350 * dVar43 + local_358 * dVar32 * -1.0 + dStack_360 * dVar29;
                  auVar36._0_8_ =
                       dStack_350 * dVar45 * 1.0 +
                       ((dVar30 * dStack_360 * 1.0 + local_358 * dVar33) - local_368 * dVar40);
                  auVar36._8_8_ =
                       local_358 * dVar38 * -1.0 +
                       ((dVar32 * local_368 * -1.0 + dStack_350 * dVar29) - dStack_360 * dVar43);
                  dVar38 = local_348 * dVar28;
                  dVar46 = dStack_340 * dVar4;
                  dVar40 = local_338 * dVar3;
                  dVar43 = dStack_330 * auVar1._8_8_;
                  dVar30 = dVar46 * dVar10 - dVar11 * dVar38;
                  dVar45 = dVar40 * dVar11 - dVar12 * dVar46;
                  dVar44 = dVar38 * dVar12 - dVar10 * dVar40;
                  dVar32 = dVar43 * dVar13 - dVar13 * dVar43;
                  dVar45 = dVar45 + dVar45;
                  dVar44 = dVar44 + dVar44;
                  dVar30 = dVar30 + dVar30;
                  dVar32 = dVar32 + dVar32;
                  dVar38 = (dVar30 * dVar11 - dVar12 * dVar44) + dVar33 * dVar45 + dVar38 +
                           *(double *)(param_1 + 0x260);
                  dVar46 = (dVar45 * dVar12 - dVar30 * dVar10) + dVar29 * dVar44 + dVar46 +
                           *(double *)(param_1 + 0x268);
                  dVar33 = (dVar44 * dVar10 - dVar11 * dVar45) + dVar33 * dVar30 + dVar40 +
                           *(double *)(param_1 + 0x270);
                  dVar29 = (dVar32 * dVar13 - dVar32 * dVar13) + dVar29 * dVar32 + dVar43 +
                           *(double *)(param_1 + 0x278);
                }
                else {
                  dVar40 = *(double *)(param_1 + 0x240);
                  dVar43 = *(double *)(param_1 + 0x248);
                  dVar45 = *(double *)(param_1 + 0x250);
                  dVar38 = dVar43 + dVar43;
                  dVar41 = dVar45 + dVar45;
                  dVar29 = dVar40 * (dVar40 + dVar40);
                  local_1a8 = (1.0 - (dVar29 + dVar43 * dVar38)) * dVar3;
                  dVar46 = *(double *)(param_1 + 0x240) * dVar41;
                  dVar33 = *(double *)(param_1 + 600);
                  dVar42 = dVar41 * dVar33;
                  dVar44 = (dVar40 + dVar40) * *(double *)(param_1 + 600);
                  dVar33 = dVar38 * dVar33;
                  local_1b8 = (dVar33 + dVar46) * dVar3;
                  dVar32 = dVar3 * local_318;
                  dVar29 = (1.0 - (dVar45 * dVar41 + dVar29)) * dVar4;
                  dVar30 = (dVar38 * dVar40 + dVar42) * dVar28;
                  local_1c8 = (dVar41 * dVar43 + dVar44) * dVar4;
                  dStack_1b0 = (dVar41 * dVar43 - dVar44) * dVar3;
                  local_1e8 = (dVar46 - dVar33) * dVar28;
                  local_1f8._8_4_ = SUB84(dVar30,0);
                  local_1f8._0_8_ = (1.0 - (dVar45 * dVar41 + dVar43 * dVar38)) * dVar28;
                  local_1f8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                  uStack_1e0 = 0;
                  local_1d8._8_4_ = SUB84(dVar29,0);
                  local_1d8._0_8_ = (dVar38 * dVar40 - dVar42) * dVar4;
                  local_1d8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = *(undefined8 *)(param_1 + 0x260);
                  uStack_190 = *(undefined8 *)(param_1 + 0x268);
                  local_188 = *(undefined8 *)(param_1 + 0x270);
                  uStack_180 = 0x3ff0000000000000;
                  dVar40 = dStack_360 + dStack_360;
                  dVar43 = local_358 + local_358;
                  dVar33 = local_368 * (local_368 + local_368);
                  local_228 = (1.0 - (dVar33 + dStack_360 * dVar40)) * local_318;
                  dVar45 = (local_368 + local_368) * dStack_350;
                  local_238 = (dVar40 * dStack_350 + local_368 * dVar43) * local_318;
                  dStack_230 = (dVar43 * dStack_360 - dVar45) * local_318;
                  dVar29 = dVar28 * local_328;
                  dVar30 = dVar4 * dStack_320;
                  local_278 = ((double)DAT_149934d80 - (local_358 * dVar43 + dStack_360 * dVar40)) *
                              local_328;
                  dVar33 = (DAT_149934d80._8_8_ - (local_358 * dVar43 + dVar33)) * dStack_320;
                  dStack_270 = (dVar40 * local_368 + dVar43 * dStack_350) * local_328;
                  local_248 = (dVar43 * dStack_360 + dVar45) * dStack_320;
                  local_268 = (local_368 * dVar43 - dVar40 * dStack_350) * local_328;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar33,0);
                  local_258._0_8_ = (dVar40 * local_368 - dVar43 * dStack_350) * dStack_320;
                  local_258._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = local_348;
                  dStack_210 = dStack_340;
                  local_208 = local_338;
                  uStack_200 = 0x3ff0000000000000;
                  FUN_1447fea8d(&local_178,&local_278,local_1f8);
                  FUN_144a1c686(&local_178,0x3e45798ee0000000);
                  auVar26._8_8_ = -(ulonglong)(0.0 <= dVar30);
                  auVar26._0_8_ = -(ulonglong)(0.0 <= dVar29);
                  auVar34 = blendvpd(_DAT_149936790,auVar36,auVar26);
                  uVar25 = -(ulonglong)(0.0 <= dVar32);
                  dVar33 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
                  dVar29 = auVar34._0_8_;
                  local_168 = local_168 * dVar29;
                  local_170 = local_170 * dVar29;
                  local_178 = local_178 * dVar29;
                  dVar29 = auVar34._8_8_;
                  local_148 = local_148 * dVar29;
                  local_150 = local_150 * dVar29;
                  local_158 = dVar29 * local_158;
                  local_128 = local_128 * dVar33;
                  local_130 = local_130 * dVar33;
                  local_138 = dVar33 * local_138;
                  FUN_14481fd10(&local_298,&local_178);
                  dVar33 = local_288._0_8_;
                  dVar29 = local_288._8_8_;
                  dVar30 = dVar33 * dVar33 + local_298 * local_298;
                  dVar32 = dVar29 * dVar29 + dStack_290 * dStack_290;
                  auVar31._0_8_ = dVar30 + dVar32;
                  auVar31._8_8_ = dVar30 + dVar32;
                  auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
                  auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
                  auVar34 = sqrtpd(auVar31,auVar31);
                  auVar36 = divpd(auVar36,auVar34);
                  auVar37._0_8_ = auVar36._0_8_ * dVar33;
                  auVar37._8_8_ = auVar36._8_8_ * dVar29;
                  dVar41 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_));
                  dVar42 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_));
                  auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar27);
                  dVar29 = 0.0;
                  dVar38 = local_118;
                  dVar46 = dStack_110;
                  dVar33 = local_108;
                }
                dVar9 = auVar1._8_8_ * dVar9;
                iVar19 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
                  FUN_144a2c682(param_3,iVar19);
                }
                lVar2 = *param_3;
                lVar22 = (longlong)iVar19 * 0x60;
                auVar1._8_4_ = SUB84(dVar42,0);
                auVar1._0_8_ = dVar41;
                auVar1._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                *(undefined1 (*) [16])(lVar2 + lVar22) = auVar1;
                *(undefined1 (*) [16])(lVar2 + 0x10 + lVar22) = auVar36;
                auVar5._8_4_ = SUB84(dVar46,0);
                auVar5._0_8_ = dVar38;
                auVar5._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                *(undefined1 (*) [16])(lVar2 + 0x20 + lVar22) = auVar5;
                auVar6._8_4_ = SUB84(dVar29,0);
                auVar6._0_8_ = dVar33;
                auVar6._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
                *(undefined1 (*) [16])(lVar2 + 0x30 + lVar22) = auVar6;
                auVar7._8_4_ = SUB84(dVar4 * dVar16,0);
                auVar7._0_8_ = dVar28 * dVar15;
                auVar7._12_4_ = (int)((ulonglong)(dVar4 * dVar16) >> 0x20);
                *(undefined1 (*) [16])(lVar2 + 0x40 + lVar22) = auVar7;
                auVar8._8_4_ = SUB84(dVar9,0);
                auVar8._0_8_ = dVar3 * dVar17;
                auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                *(undefined1 (*) [16])(lVar2 + 0x50 + lVar22) = auVar8;
              }
            }
          }
        }
        lVar23 = lVar23 + 0x80;
        lVar24 = lVar24 + -0x80;
      } while (lVar24 != 0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b00aa2 FUN_147b00aa2 body=240 status=ok
// SIG undefined FUN_147b00aa2(void)

void FUN_147b00aa2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1479f20c4();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x844) << 3);
  if (0 < *(int *)(param_1 + 0x840)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x838) + lVar2 * 8) != 0) {
        cVar1 = FUN_144727810();
        if (cVar1 != '\0') {
          FUN_147c48a58(*(undefined8 *)(*(longlong *)(param_1 + 0x838) + lVar2 * 8),param_2);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x840));
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x72c) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x7b4) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x7e4) << 2);
  FUN_14484255c(param_2,(ulonglong)(*(int *)(param_1 + 0x954) + 0x1fU >> 3 & 0xfffffffc) +
                        (longlong)*(int *)(param_1 + 0x8f4) * 4 +
                        (ulonglong)(*(int *)(param_1 + 0x914) + 0x1fU >> 5) * 4);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x854) << 2);
  return;
}



// FUNCTION 147b00b92 FUN_147b00b92 body=29 status=ok
// SIG undefined FUN_147b00b92(void)

void FUN_147b00b92(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x7c8) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x7c8)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x7c8) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147b00c06 FUN_147b00c06 body=234 status=ok
// SIG undefined FUN_147b00c06(void)

undefined4 FUN_147b00c06(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14481578e(&local_48);
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar8 = 0;
      do {
        uVar4 = uStack_40;
        lVar7 = (longlong)(int)uStack_40;
        uVar5 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
        if (uStack_40._4_4_ < uVar5) {
          FUN_1446f48e2(&local_48,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_48 + lVar7 * 4) = *(undefined4 *)(lVar2 + 8 + lVar8);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar8);
    }
  }
  uVar6 = (**(code **)(*(longlong *)(param_1 + -0x718) + 0xb78))(param_1 + -0x718,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b00cf2 FUN_147b00cf2 body=467 status=ok
// SIG undefined FUN_147b00cf2(void)

undefined8 FUN_147b00cf2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar1 = (int)param_2[1];
  local_c0 = param_3;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  local_c8 = (longlong *)(param_1 + -0x718);
  if (iVar1 != 0) {
    FUN_1401a2688(&local_b8);
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar11 = *param_2;
      lVar6 = 0;
      do {
        uVar4 = uStack_b0;
        lVar7 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_144a2c682(&local_b8,uVar4 & 0xffffffff);
        }
        plVar10 = (longlong *)(lVar7 * 0x60 + local_b8);
        plVar8 = &DAT_14c846480;
        plVar9 = plVar10;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        iVar1 = *(int *)(lVar11 + 8 + lVar6);
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x10))) {
          FUN_1448ac920(&local_a8,(longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 8));
          plVar8 = &local_a8;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *plVar10 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar10 = plVar10 + 1;
          }
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar6);
    }
  }
  plVar8 = local_c8;
  local_d0 = 1;
  local_d8 = 0;
  (**(code **)(*local_c8 + 0xb00))(local_c8,&local_a8,&local_b8,1);
  plVar10 = local_c0;
  FUN_147b00ec8(local_c0,local_a0);
  lVar3 = local_a8;
  if ((longlong)local_a0 != 0) {
    lVar11 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar3 + lVar11);
      iVar1 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar1 + 1U) {
        FUN_147b4eec8(plVar10,iVar1);
      }
      lVar6 = *plVar10;
      *(longlong **)(lVar6 + (longlong)iVar1 * 0x10) = plVar8;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0x10) = uVar2;
      lVar11 = lVar11 + 4;
    } while ((longlong)local_a0 * 4 != lVar11);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147b00ec8 FUN_147b00ec8 body=41 status=ok
// SIG undefined FUN_147b00ec8(void)

void FUN_147b00ec8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147b4ee68();
  return;
}



// FUNCTION 147b00ef2 FUN_147b00ef2 body=68 status=ok
// SIG undefined FUN_147b00ef2(void)

void FUN_147b00ef2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14480809c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0x7fffffff00000000;
  *(undefined8 *)(param_1 + 0x38) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 147b00f36 FUN_147b00f36 body=102 status=ok
// SIG undefined FUN_147b00f36(void)

longlong * FUN_147b00f36(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_147b00f9c();
  puVar2 = (undefined4 *)(param_2 + 0x20);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147b00f9c FUN_147b00f9c body=126 status=ok
// SIG undefined FUN_147b00f9c(void)

longlong * FUN_147b00f9c(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_1408383eb();
  uVar2 = FUN_1408383eb(uVar2,param_2 + 8);
  FUN_1408383eb(uVar2,param_2 + 0x10);
  puVar3 = (undefined4 *)(param_2 + 0x18);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147b0101a FUN_147b0101a body=203 status=ok
// SIG undefined FUN_147b0101a(void)

void FUN_147b0101a(longlong param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x9d) == '\x01') {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x20);
    }
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    iVar3 = iVar4 + 0xe;
    if (-1 < iVar4 + 7) {
      iVar3 = iVar4 + 7;
    }
    if (*(int *)(param_1 + 0x30) < iVar3 >> 3) {
      FUN_1402d2c96(param_1 + 0x28,iVar3 >> 3,1);
    }
    *(int *)(param_1 + 0x58) = iVar4;
    iVar4 = *(int *)(param_1 + 0x60);
    if (param_2 <= *(int *)(param_1 + 0x60)) {
      iVar4 = param_2;
    }
    *(int *)(param_1 + 0x60) = iVar4;
    iVar4 = *(int *)(param_1 + 100);
    if (*(int *)(param_1 + 100) < param_2) {
      iVar4 = param_2;
    }
    *(int *)(param_1 + 100) = iVar4;
    iVar4 = param_2 + 7;
    if (-1 < param_2) {
      iVar4 = param_2;
    }
    bVar2 = ((char)param_2 - ((byte)iVar4 & 0xf8)) * '\x04';
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 >> 3) * 4);
    if ((uVar1 >> (bVar2 & 0x1f) & 3) == 0) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 >> 3) * 4) =
         uVar1 | 2 << (bVar2 & 0x1f);
  }
  else {
    if (*(char *)(param_1 + 0x9d) == '\x02') {
      return;
    }
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x10;
  }
  FUN_1402d2c26(param_1);
  return;
}



// FUNCTION 147b010e6 FUN_147b010e6 body=178 status=ok
// SIG undefined FUN_147b010e6(void)

void FUN_147b010e6(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x9d) == '\x01') {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    if ((int)uVar3 <= (int)param_2) {
      uVar3 = param_2;
    }
    uVar2 = uVar3 + 7 >> 3;
    if (*(int *)(param_1 + 0x30) < (int)uVar2) {
      FUN_1402d2c96(param_1 + 0x28,uVar2,1);
    }
    *(uint *)(param_1 + 0x58) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x60);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x60)) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 0x60) = uVar3;
    uVar3 = *(uint *)(param_1 + 100);
    if ((int)*(uint *)(param_1 + 100) < (int)param_2) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 100) = uVar3;
    bVar1 = (char)param_2 * '\x04' & 0x1c;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 3) * 4);
    if ((uVar3 >> bVar1 & 5) == 0) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 3) * 4) = uVar3 | 4 << bVar1;
  }
  else {
    if (*(char *)(param_1 + 0x9d) == '\x02') {
      return;
    }
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x10;
  }
  FUN_1402d2c26(param_1);
  return;
}



// FUNCTION 147b01198 FUN_147b01198 body=548 status=ok
// SIG undefined FUN_147b01198(void)

void FUN_147b01198(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x28;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147b4ef76(param_2,param_1);
    goto LAB_147b0135f;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0x28,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x28);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147b0135f;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147b01348:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 * 0x28);
  }
  else {
    if (local_1c == 0x28) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x3333334) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147b4f1b4(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147b4f120(param_1,iVar4);
        }
        goto LAB_147b01348;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147b0135f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b013be FUN_147b013be body=643 status=ok
// SIG undefined FUN_147b013be(void)

void FUN_147b013be(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x1e) & 2) == 0) {
    **(undefined4 **)(param_3 + 0x70) = 0;
    lVar13 = *(longlong *)(param_3 + 0x20);
    iVar3 = *(int *)(lVar13 + 0xc);
    *(undefined4 *)(lVar13 + 8) = 0;
joined_r0x000147b01460:
    if (iVar3 < 0) {
      FUN_14482f6fa(lVar13,0);
    }
  }
  else {
    lVar10 = param_1[0x15];
    **(int **)(param_3 + 0x70) = (int)lVar10;
    lVar13 = *(longlong *)(param_3 + 0x20);
    if ((*(ushort *)(param_1 + 0x1e) & 2) == 0 || (int)lVar10 == 0) {
      local_48 = 1;
      plStack_40 = (longlong *)0x0;
      if ((*(ushort *)(param_1 + 0x1e) & 2) == 0) {
        iVar3 = *(int *)(lVar13 + 0xc);
        *(undefined4 *)(lVar13 + 8) = 0;
        goto joined_r0x000147b01460;
      }
    }
    else {
      plStack_40 = param_1 + 8;
      iVar3 = (int)param_1[0x36];
      local_48 = CONCAT44(iVar3,(undefined4)local_48);
      if ((char)param_1[0x12] == '\0') {
        iVar12 = (int)param_1[0x11] + (int)param_1[0x10];
        local_48 = CONCAT71(local_48._1_7_,iVar12 == iVar3);
        if (iVar12 != iVar3) {
          local_48 = CONCAT44(iVar12,(undefined4)local_48);
        }
      }
      else {
        local_48 = CONCAT71(local_48._1_7_,1);
      }
    }
    local_58 = param_2;
    local_50 = **(undefined4 **)(param_3 + 0x70);
    FUN_147b4f30f(&local_48,lVar13,*(undefined4 *)((longlong)param_1 + 0x1b4),param_1 + 0x1a);
  }
  plVar11 = *(longlong **)(param_3 + 0x30);
  if ((*(byte *)(param_1 + 0x1e) & 0x10) == 0) {
    *(undefined4 *)(plVar11 + 1) = 0;
    if (*(int *)((longlong)plVar11 + 0xc) < 0) {
      FUN_14499148c(plVar11,0);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x1d);
    FUN_140330574(plVar11,*(undefined4 *)((longlong)param_1 + 0x1b4),1);
    if (0 < (int)uVar4) {
      lVar13 = 0;
      do {
        puVar1 = (undefined4 *)
                 (param_1[0x1c] + (longlong)*(int *)(*(longlong *)*param_2 + lVar13) * 0x10);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)(*plVar11 + lVar13 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        lVar13 = lVar13 + 4;
      } while ((ulonglong)uVar4 << 2 != lVar13);
    }
  }
  lVar13 = *(longlong *)(param_3 + 0x28);
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    *(undefined4 *)(lVar13 + 8) = 0;
    if (*(int *)(lVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  else {
    FUN_144aa29e6(lVar13,*(undefined4 *)((longlong)param_1 + 0x1b4),1);
    if (*param_1 != 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      FUN_144aa29e6(&local_48,*(undefined4 *)((longlong)param_1 + 0x1b4),1);
      pcVar5 = (code *)*param_1;
      plVar11 = param_1 + 4;
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[2];
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar5)(uVar9,&local_48);
      lVar13 = (longlong)(int)plStack_40;
      plVar11 = *(longlong **)(param_3 + 0x28);
      FUN_144a12820(plVar11,*(undefined4 *)((longlong)param_1 + 0x1b4),1);
      if (0 < lVar13) {
        lVar10 = 0;
        do {
          *(undefined4 *)(*plVar11 + lVar10 * 4) =
               *(undefined4 *)
                (local_48 + (longlong)*(int *)(*(longlong *)*param_2 + lVar10 * 4) * 4);
          lVar10 = lVar10 + 1;
        } while (lVar13 != lVar10);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b01658 FUN_147b01658 body=575 status=ok
// SIG undefined FUN_147b01658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b01658(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  longlong lVar10;
  
  piVar9 = (int *)(param_1 + 0xe0);
  if ((*(byte *)(param_1 + 0x122) & 1) != 0) {
    piVar9 = (int *)(param_1 + 0x118);
  }
  if (*piVar9 == param_2) {
    return;
  }
  lVar1 = param_1 + 0x50;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x70) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cae5058) && (FUN_144b3d300(&DAT_14cae5058), DAT_14cae5058 == -1)) {
      _DAT_14cae5048 = DAT_14c846338;
      _DAT_14cae5040 = DAT_14c846330;
      _DAT_14cae504c = (undefined4)DAT_14c846330;
      DAT_14cae5050._0_4_ = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
      DAT_14cae5050._4_4_ = DAT_14c846338;
      _Init_thread_footer(&DAT_14cae5058);
    }
    iVar4 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar4 + 1U) {
      FUN_1474bf2b2(lVar1,iVar4);
    }
    lVar10 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar10 = lVar1;
    }
    *(ulonglong *)(lVar10 + 0x10 + (longlong)iVar4 * 0x18) =
         CONCAT44(DAT_14cae5050._4_4_,(undefined4)DAT_14cae5050);
    uVar8 = _DAT_14cae504c;
    uVar7 = _DAT_14cae5048;
    uVar6 = DAT_14cae5040_4;
    puVar2 = (undefined4 *)(lVar10 + (longlong)iVar4 * 0x18);
    *puVar2 = _DAT_14cae5040;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
  }
  if ((char)*(ushort *)(param_1 + 0x120) < '\0') {
    iVar4 = *(int *)(param_1 + 0xd0);
    if (iVar4 != 0) {
      iVar5 = *(int *)(param_1 + 0xe0);
      if ((iVar5 != 0) && (iVar4 % iVar5 == 0)) {
        FUN_140ccfae8(param_1 + 200,(iVar4 / iVar5) * param_2,
                      CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1));
        goto LAB_147b01717;
      }
    }
    *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) & 0xff7f;
  }
LAB_147b01717:
  FUN_147b01898(param_1 + 0xd8,param_2);
  uVar3 = *(ushort *)(param_1 + 0x120);
  if ((uVar3 & 2) != 0) {
    FUN_144aa29e6(param_1 + 0x78,*(int *)(param_1 + 0x11c) * param_2,1);
    uVar3 = *(ushort *)(param_1 + 0x120);
  }
  if ((uVar3 & 4) != 0) {
    FUN_147b01898(param_1 + 0xe8,param_2);
    uVar3 = *(ushort *)(param_1 + 0x120);
  }
  if ((uVar3 & 0x40) != 0) {
    FUN_1402d2c96(param_1 + 0xb8,param_2,1);
    uVar3 = *(ushort *)(param_1 + 0x120);
  }
  if ((uVar3 & 0x10) != 0) {
    FUN_140ccfae8(param_1 + 0x98,param_2,1);
    uVar3 = *(ushort *)(param_1 + 0x120);
  }
  if ((uVar3 & 0x20) != 0) {
    FUN_140330788(lVar1,param_2,1);
    uVar3 = *(ushort *)(param_1 + 0x120);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144aa29e6(param_1 + 0x88,param_2,1);
    uVar3 = *(ushort *)(param_1 + 0x120);
  }
  if ((uVar3 >> 8 & 1) == 0) {
    return;
  }
  FUN_14476b79c(param_1 + 0xf8,param_2,0);
  return;
}



// FUNCTION 147b01898 FUN_147b01898 body=122 status=ok
// SIG undefined FUN_147b01898(void)

void FUN_147b01898(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14026f43e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x30 + *param_1),0,(longlong)(param_2 - iVar1) * 0x30);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_14026fa70(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147b01926 FUN_147b01926 body=841 status=ok
// SIG undefined FUN_147b01926(void)

void FUN_147b01926(ulonglong param_1,longlong param_2)

{
  void *pvVar1;
  longlong *plVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  void *local_60;
  longlong local_58;
  longlong local_50;
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar9 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_b8 = param_1 + 8;
  local_c0 = (ulonglong)(uVar9 >> 0x10 ^ uVar9) | 0x100000000;
  local_b0 = param_1 + 0x38;
  local_a8 = param_1 + 0x50;
  local_a0 = param_1 + 0x78;
  local_98 = param_1 + 0x88;
  local_90 = param_1 + 0x98;
  local_88 = param_1 + 0xa8;
  local_80 = param_1 + 0xb8;
  local_78 = param_1 + 200;
  local_70 = param_1 + 0xd8;
  local_68 = param_1 + 0xe8;
  pvVar1 = (void *)(param_1 + 0xf8);
  local_58 = param_1 + 0x118;
  local_50 = param_1 + 0x11c;
  puVar3 = (ushort *)(param_1 + 0x120);
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0xf0);
  local_60 = pvVar1;
  local_48 = puVar3;
  FUN_14067d924(param_1);
  plVar2 = (longlong *)(param_1 + 0x1c0);
  if (plVar2 != (longlong *)(param_2 + 0x120)) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_2 + 0x128) = 0;
  }
  iVar5 = *(int *)(param_2 + 0x1b4);
  local_d0 = plVar2;
  local_c8 = iVar5;
  FUN_14067e066(param_2,&local_d0,iVar5,&local_c0);
  if ((*(char *)(param_1 + 0x1d0) == '\x01') &&
     (iVar6 = *(int *)(param_2 + 0x1b4), iVar6 != *(int *)(param_1 + 0x1c8))) {
    *(int *)(param_1 + 0x110) = iVar6;
    uVar9 = iVar6 + 0x1f;
    if (0x1f < uVar9) {
      uVar15 = uVar9 >> 5;
      if (*(int *)(param_1 + 0x114) + 0x1fU >> 5 < uVar15) {
        FUN_14499171c(pvVar1,0,uVar15,4);
        *(uint *)(param_1 + 0x114) = uVar9 & 0xffffffe0;
      }
      pvVar12 = *(void **)(param_1 + 0x108);
      if (*(void **)(param_1 + 0x108) == (void *)0x0) {
        pvVar12 = pvVar1;
      }
      if (uVar9 < 0x120) {
        uVar15 = uVar9 >> 3 & 0x3c;
      }
      else {
        uVar15 = uVar15 << 2;
      }
      memset(pvVar12,0,(ulonglong)uVar15);
      iVar6 = *(int *)(param_1 + 0x110);
      iVar11 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar11 = iVar6;
      }
      if (iVar6 % 0x20 != 0) {
        pvVar12 = *(void **)(param_1 + 0x108);
        if (*(void **)(param_1 + 0x108) == (void *)0x0) {
          pvVar12 = pvVar1;
        }
        bVar10 = -(char)(iVar6 % 0x20);
        *(uint *)((longlong)pvVar12 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar12 + (longlong)(iVar11 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    iVar6 = *(int *)(param_1 + 0x1c8);
    if ((longlong)iVar6 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1c0);
      lVar13 = 0;
      do {
        iVar11 = *(int *)(lVar7 + lVar13);
        if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(param_1 + 0x1c8))) {
          iVar11 = *(int *)(*plVar2 + (longlong)iVar11 * 4);
        }
        if ((iVar11 < iVar5) && (iVar11 != -1)) {
          pvVar12 = *(void **)(param_1 + 0x108);
          if (*(void **)(param_1 + 0x108) == (void *)0x0) {
            pvVar12 = pvVar1;
          }
          iVar14 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar14 = iVar11;
          }
          puVar4 = (uint *)((longlong)pvVar12 + (longlong)(iVar14 >> 5) * 4);
          *puVar4 = *puVar4 | 1 << ((byte)iVar11 & 0x1f);
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)iVar6 * 4 != lVar13);
    }
    uVar8 = (ushort)*(undefined4 *)puVar3 | 0x100;
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0;
    uVar8 = *(ushort *)(param_1 + 0x120) & 0xfeff;
  }
  *puVar3 = uVar8;
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b01c70 FUN_147b01c70 body=2664 status=ok
// SIG undefined FUN_147b01c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b01c70(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort *puVar11;
  undefined1 (*pauVar12) [16];
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auStack_248 [40];
  float local_220;
  float local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  longlong local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar29 = *(longlong *)(param_1 + 0x58);
  *(undefined4 *)(lVar29 + 8) = 0;
  if (*(int *)(lVar29 + 0xc) != 0) {
    FUN_140250e1e(lVar29,0);
  }
  lVar29 = (longlong)*(int *)(param_2 + 8);
  FUN_140250dc8(*(undefined8 *)(param_1 + 0x50));
  local_200 = lVar29;
  if (0 < lVar29) {
    local_200 = lVar29 << 4;
    lVar36 = 0x30;
    lVar37 = 0;
    lVar29 = 0;
    local_1f8 = param_1;
    local_1f0 = param_2;
    do {
      cVar1 = *(char *)(param_2 + 9);
      lVar25 = param_2[3];
      iVar22 = (**(code **)(*(longlong *)param_2[2] + 0x28))();
      iVar23 = (**(code **)(*(longlong *)param_2[2] + 0x20))();
      puVar19 = local_1f0;
      puVar11 = (ushort *)param_2[3];
      uVar24 = (ulonglong)(uint)(iVar23 * iVar22) + (longlong)puVar11;
      if (cVar1 == '\x01') {
        local_1d0 = 0;
        uStack_1c8 = 0x3f800000;
        if ((ushort *)(lVar37 + lVar25) < puVar11) {
LAB_147b01fed:
          local_1d0 = 0;
          uStack_1c8 = 0x3f800000;
          uStack_1cc = 0;
          uStack_1dc = 0;
          local_1d8 = 0x3f800000;
          local_1d4 = 0;
          local_1e8 = 0x3f800000;
          uStack_1e4 = 0;
          uStack_1e0 = 0;
        }
        else {
          uStack_1cc = 0;
          uStack_1dc = 0;
          local_1d8 = 0x3f800000;
          local_1d4 = 0;
          uStack_1e4 = 0;
          uStack_1e0 = 0;
          local_1e8 = 0x3f800000;
          if (lVar37 + lVar25 + 0x18U <= uVar24) {
            uVar2 = *(ushort *)(lVar37 + lVar25);
            local_21c = (float)(uint)uVar2;
            uVar33 = (uint)uVar2 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              local_220 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              local_220 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              local_220 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar3 = *(ushort *)(lVar25 + 2 + lVar37);
            local_204 = (uint)uVar3;
            uVar33 = (uint)uVar3 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar26 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar26 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar26 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar4 = *(ushort *)(lVar25 + 4 + lVar37);
            local_208 = (uint)uVar4;
            uVar33 = (uint)uVar4 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar30 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar30 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar30 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar5 = *(ushort *)(lVar25 + 8 + lVar37);
            local_20c = (uint)uVar5;
            uVar33 = (uint)uVar5 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar31 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar31 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar31 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar6 = *(ushort *)(lVar25 + 10 + lVar37);
            local_210 = (uint)uVar6;
            uVar33 = (uint)uVar6 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar32 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar32 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar32 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar7 = *(ushort *)(lVar25 + 0xc + lVar37);
            local_214 = (uint)uVar7;
            uVar33 = (uint)uVar7 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar28 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar28 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar28 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar8 = *(ushort *)(lVar25 + 0x10 + lVar37);
            local_218 = (uint)uVar8;
            uVar33 = (uint)uVar8 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar27 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar27 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar27 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar9 = *(ushort *)(lVar25 + 0x12 + lVar37);
            uVar33 = (uint)uVar9 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar34 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar34 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar34 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            uVar10 = *(ushort *)(lVar25 + 0x14 + lVar37);
            uVar33 = (uint)uVar10 << 0xd;
            if ((uVar33 & 0xf800000) == 0xf800000) {
              fVar35 = (float)(uVar33 | 0x70000000);
            }
            else if ((uVar33 & 0xf800000) == 0) {
              fVar35 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar35 = (float)((uVar33 & 0xfffe000) + 0x38000000);
            }
            local_1e8 = (uint)local_220 | (int)(short)uVar2 & 0x80000000U;
            uStack_1e4 = (uint)fVar26 | (int)(short)uVar3 & 0x80000000U;
            uStack_1e0 = (uint)fVar30 | (int)(short)uVar4 & 0x80000000U;
            uStack_1dc = (uint)fVar31 | (int)(short)uVar5 & 0x80000000U;
            local_1d8 = (uint)fVar32 | (int)(short)uVar6 & 0x80000000U;
            local_1d4 = (uint)fVar28 | (int)(short)uVar7 & 0x80000000U;
            local_1d0 = (uint)fVar27 | (int)(short)uVar8 & 0x80000000U;
            uStack_1cc = (uint)fVar34 | (int)(short)uVar9 & 0x80000000U;
            uStack_1c8 = (int)(short)uVar10 & 0x80000000U | (uint)fVar35;
          }
        }
      }
      else {
        local_1d0 = 0;
        uStack_1c8 = 0x3f800000;
        if ((ushort *)(lVar36 + lVar25 + -0x30) < puVar11) goto LAB_147b01fed;
        uStack_1cc = 0;
        uStack_1dc = 0;
        local_1d8 = 0x3f800000;
        local_1d4 = 0;
        uStack_1e4 = 0;
        uStack_1e0 = 0;
        local_1e8 = 0x3f800000;
        if ((ulonglong)(lVar36 + lVar25) <= uVar24) {
          local_1e8 = *(uint *)(lVar25 + -0x30 + lVar36);
          uStack_1e4 = *(uint *)(lVar25 + -0x2c + lVar36);
          uStack_1e0 = *(uint *)(lVar25 + -0x28 + lVar36);
          uStack_1dc = *(uint *)(lVar25 + -0x20 + lVar36);
          local_1d8 = *(uint *)(lVar25 + -0x1c + lVar36);
          local_1d4 = *(uint *)(lVar25 + -0x18 + lVar36);
          local_1d0 = *(uint *)(lVar25 + -0x10 + lVar36);
          uStack_1cc = *(uint *)(lVar25 + -0xc + lVar36);
          uStack_1c8 = *(uint *)(lVar25 + -8 + lVar36);
        }
      }
      lVar25 = local_1f0[1];
      iVar22 = (**(code **)(*(longlong *)*local_1f0 + 0x28))();
      iVar23 = (**(code **)(*(longlong *)*puVar19 + 0x20))();
      lVar14 = local_1f8;
      auVar38 = ZEXT816(0);
      if ((ulonglong)(lVar25 + lVar29) < (ulonglong)puVar19[1]) {
        auVar39 = ZEXT816(0);
        auVar40 = ZEXT816(0);
      }
      else {
        auVar39 = ZEXT816(0);
        auVar40 = ZEXT816(0);
        if (lVar25 + lVar29 + 0x10U <= puVar19[1] + (ulonglong)(uint)(iVar23 * iVar22)) {
          auVar38 = ZEXT416(*(uint *)(lVar25 + lVar29));
          auVar39 = ZEXT416(*(uint *)(lVar25 + 4 + lVar29));
          auVar40 = ZEXT416(*(uint *)(lVar25 + 8 + lVar29));
        }
      }
      uStack_1c4 = auVar38._0_4_;
      pauVar12 = *(undefined1 (**) [16])(local_1f8 + 8);
      auVar16._4_4_ = uStack_1e4;
      auVar16._0_4_ = local_1e8;
      auVar16._8_4_ = uStack_1e0;
      auVar16._12_4_ = uStack_1dc;
      local_138 = blendps(auVar16,ZEXT816(0),8);
      auVar17._4_4_ = local_1d8;
      auVar17._0_4_ = uStack_1dc;
      auVar17._8_4_ = local_1d4;
      auVar17._12_4_ = local_1d0;
      local_128 = blendps(auVar17,ZEXT816(0),8);
      auVar18._4_4_ = uStack_1cc;
      auVar18._0_4_ = local_1d0;
      auVar18._8_4_ = uStack_1c8;
      auVar18._12_4_ = uStack_1c4;
      local_118 = blendps(auVar18,ZEXT816(0),8);
      auVar38 = blendps(auVar38,_DAT_149932320,0xc);
      auVar38 = insertps(auVar38,auVar39,0x10);
      local_108 = insertps(auVar38,auVar40,0x20);
      uVar15 = SUB164(*(undefined1 (*) [16])(pauVar12[1] + 8),0xc);
      local_178 = blendps(*pauVar12,ZEXT816(0),8);
      local_168 = blendps(*(undefined1 (*) [16])(*pauVar12 + 0xc),ZEXT816(0),8);
      local_158 = blendps(*(undefined1 (*) [16])(pauVar12[1] + 8),ZEXT816(0),8);
      auVar38._4_4_ = uVar15;
      auVar38._0_4_ = uVar15;
      auVar38._8_4_ = DAT_149932320._12_4_;
      auVar38._12_4_ = DAT_149932320._12_4_;
      auVar38 = insertps(auVar38,*(undefined4 *)(pauVar12[2] + 8),0x10);
      local_148 = insertps(auVar38,*(undefined4 *)(pauVar12[2] + 0xc),0x20);
      FUN_144afeb32(&local_1b8);
      uVar21 = local_180;
      uVar20 = local_184;
      uVar15 = local_188;
      fVar26 = local_1b0;
      fVar30 = local_1a4;
      fVar31 = local_194;
      fVar32 = local_190;
      fVar28 = local_1a0;
      fVar27 = local_1a8;
      fVar34 = local_198;
      if (((((local_1b8 != 0.0) || (local_1b4 != 0.0)) || (NAN(local_1b4))) ||
          ((local_1b0 != 0.0 || (NAN(local_1b0))))) &&
         ((((local_1a8 != 0.0 || ((NAN(local_1a8) || (local_1a4 != 0.0)))) || (NAN(local_1a4))) ||
          ((local_1a0 != 0.0 || (NAN(local_1a0))))))) {
        fVar32 = local_1b0 * local_1b0 + local_1b8 * local_1b8 + local_1b4 * local_1b4;
        fVar31 = (local_1a0 * local_1b0 + local_1a8 * local_1b8 + local_1b4 * local_1a4) / fVar32;
        fVar27 = local_1a8 - fVar31 * local_1b8;
        fVar30 = local_1a4 - local_1b4 * fVar31;
        fVar28 = local_1a0 - local_1b0 * fVar31;
        fVar32 = (local_190 * local_1b0 + local_198 * local_1b8 + local_1b4 * local_194) / fVar32;
        fVar34 = local_198 - fVar32 * local_1b8;
        fVar31 = local_194 - local_1b4 * fVar32;
        fVar32 = local_190 - local_1b0 * fVar32;
        fVar35 = (fVar32 * fVar28 + fVar34 * fVar27 + fVar30 * fVar31) /
                 (fVar28 * fVar28 + fVar27 * fVar27 + fVar30 * fVar30);
        fVar34 = fVar34 - fVar35 * fVar27;
        fVar31 = fVar31 - fVar30 * fVar35;
        fVar32 = fVar32 - fVar28 * fVar35;
      }
      plVar13 = *(longlong **)(lVar14 + 0x50);
      lVar25 = plVar13[1];
      uVar33 = (int)lVar25 + 1;
      *(uint *)(plVar13 + 1) = uVar33;
      fVar35 = local_1b4;
      fVar41 = local_1b8;
      if (*(uint *)((longlong)plVar13 + 0xc) < uVar33) {
        local_220 = local_1b8;
        local_21c = local_1b4;
        FUN_14026f43e(plVar13);
        fVar35 = local_21c;
        fVar41 = local_220;
      }
      lVar14 = *plVar13;
      lVar25 = (longlong)(int)lVar25 * 0x30;
      *(float *)(lVar14 + lVar25) = fVar41;
      *(float *)(lVar14 + 4 + lVar25) = fVar35;
      *(float *)(lVar14 + 8 + lVar25) = fVar26;
      *(float *)(lVar14 + 0xc + lVar25) = fVar27;
      *(float *)(lVar14 + 0x10 + lVar25) = fVar30;
      *(float *)(lVar14 + 0x14 + lVar25) = fVar28;
      *(float *)(lVar14 + 0x18 + lVar25) = fVar34;
      *(float *)(lVar14 + 0x1c + lVar25) = fVar31;
      *(float *)(lVar14 + 0x20 + lVar25) = fVar32;
      *(undefined4 *)(lVar14 + 0x24 + lVar25) = uVar15;
      *(undefined4 *)(lVar14 + 0x28 + lVar25) = uVar20;
      *(undefined4 *)(lVar14 + 0x2c + lVar25) = uVar21;
      lVar29 = lVar29 + 0x10;
      lVar36 = lVar36 + 0x30;
      lVar37 = lVar37 + 0x18;
      param_2 = puVar19;
    } while (local_200 != lVar29);
  }
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b026da FUN_147b026da body=366 status=ok
// SIG undefined FUN_147b026da(void)

void FUN_147b026da(ulonglong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    uVar10 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    local_90 = param_1 + 8;
    local_98 = (ulonglong)(uVar10 >> 0x10 ^ uVar10) | 0x100000000;
    local_88 = param_1 + 0x38;
    local_80 = param_1 + 0x50;
    local_78 = param_1 + 0x78;
    local_70 = param_1 + 0x88;
    local_68 = param_1 + 0x98;
    local_60 = param_1 + 0xa8;
    local_58 = param_1 + 0xb8;
    local_50 = param_1 + 200;
    local_48 = param_1 + 0xd8;
    local_40 = param_1 + 0xe8;
    local_38 = param_1 + 0xf8;
    local_30 = param_1 + 0x118;
    local_28 = param_1 + 0x11c;
    local_20 = param_1 + 0x120;
    uVar8 = *(undefined8 *)(param_2 + 0x130);
    uVar9 = *(undefined8 *)(param_2 + 0x138);
    uVar1 = *(undefined4 *)(param_2 + 0x140);
    uVar2 = *(undefined4 *)(param_2 + 0x144);
    uVar3 = *(undefined4 *)(param_2 + 0x148);
    uVar4 = *(undefined4 *)(param_2 + 0x14c);
    uVar5 = *(undefined4 *)(param_2 + 0x154);
    uVar6 = *(undefined4 *)(param_2 + 0x158);
    uVar7 = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    uVar1 = *(undefined4 *)(param_2 + 0x164);
    uVar2 = *(undefined4 *)(param_2 + 0x168);
    uVar3 = *(undefined4 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x170);
    FUN_147b01c70();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_147b01658(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8,*(undefined4 *)(param_2 + 0x1b4));
}



// FUNCTION 147b0284a FUN_147b0284a body=58 status=ok
// SIG undefined FUN_147b0284a(void)

void FUN_147b0284a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a927460;
  FUN_14353e3f0();
  puVar1 = (undefined8 *)param_1[0x3c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_147b02884(param_1);
  return;
}



// FUNCTION 147b02884 FUN_147b02884 body=78 status=ok
// SIG undefined FUN_147b02884(void)

void FUN_147b02884(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a927410;
  lVar1 = param_1[0x3b];
  if (lVar1 != 0) {
    FUN_14006ea12(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_147b49a9e(param_1);
  return;
}



// FUNCTION 147b028d2 FUN_147b028d2 body=51 status=ok
// SIG undefined FUN_147b028d2(void)

undefined8 FUN_147b028d2(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x140) == '\x01') {
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_144740518();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147b02906 FUN_147b02906 body=1128 status=ok
// SIG undefined FUN_147b02906(void)

void FUN_147b02906(ulonglong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong *local_118;
  int local_10c;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint local_ec;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_d8 = param_1 + 8;
  local_e0 = (ulonglong)(uVar6 >> 0x10 ^ uVar6) | 0x100000000;
  local_d0 = param_1 + 0x38;
  local_c8 = param_1 + 0x50;
  local_c0 = param_1 + 0x78;
  local_b8 = param_1 + 0x88;
  local_b0 = param_1 + 0x98;
  local_a8 = param_1 + 0xa8;
  local_a0 = param_1 + 0xb8;
  local_98 = param_1 + 200;
  local_90 = param_1 + 0xd8;
  local_88 = param_1 + 0xe8;
  local_80 = param_1 + 0xf8;
  local_78 = param_1 + 0x118;
  local_70 = param_1 + 0x11c;
  local_68 = param_1 + 0x120;
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0xf0);
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x10) + 0x40);
  local_118 = (longlong *)(param_1 + 0x1c0);
  FUN_14476b79c(local_80,*(undefined4 *)(param_2 + 0x1b4),1);
  *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) | 1;
  local_108 = param_2;
  FUN_14067ddc4(param_2 + 0x40,&local_100);
  if ((int)local_ec < *(int *)(CONCAT44(uStack_f4,local_f8) + 0x18)) {
    local_10c = iVar7;
    do {
      uVar6 = local_ec;
      if (*(int *)(param_1 + 0x170) != 0) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x178) + (longlong)(int)local_ec * 4);
      }
      if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x1c8))) {
        uVar6 = *(uint *)(*local_118 + (ulonglong)uVar6 * 4);
      }
      if (((int)uVar6 < iVar7) && (uVar6 != 0xffffffff)) {
        puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x1e0) + 0x10);
        lVar13 = puVar5[1];
        iVar7 = (**(code **)(*(longlong *)*puVar5 + 0x28))();
        iVar8 = (**(code **)(*(longlong *)*puVar5 + 0x20))();
        lVar12 = (longlong)(int)uVar6;
        puVar1 = (undefined8 *)(lVar13 + lVar12 * 0x10);
        if ((undefined8 *)puVar5[1] <= puVar1) {
          if (lVar12 * 0x10 + lVar13 + 0x10U <=
              (longlong)puVar5[1] + (ulonglong)(uint)(iVar8 * iVar7)) {
            *puVar1 = 0;
            puVar1[1] = 0;
          }
        }
        cVar4 = *(char *)(puVar5 + 9);
        lVar13 = puVar5[3];
        iVar7 = (**(code **)(*(longlong *)puVar5[2] + 0x28))();
        iVar8 = (**(code **)(*(longlong *)puVar5[2] + 0x20))();
        puVar1 = (undefined8 *)puVar5[3];
        uVar11 = (ulonglong)(uint)(iVar8 * iVar7) + (longlong)puVar1;
        if (cVar4 == '\x01') {
          puVar2 = (undefined8 *)(lVar13 + lVar12 * 0x18);
          if ((puVar1 <= puVar2) && (lVar13 + lVar12 * 0x18 + 0x18U <= uVar11)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
          }
        }
        else {
          puVar2 = (undefined8 *)(lVar13 + lVar12 * 0x30);
          if ((puVar1 <= puVar2) && (lVar13 + lVar12 * 0x30 + 0x30U <= uVar11)) {
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
          }
        }
        lVar13 = puVar5[5];
        iVar8 = (**(code **)(*(longlong *)puVar5[4] + 0x28))();
        iVar9 = (**(code **)(*(longlong *)puVar5[4] + 0x20))();
        iVar7 = local_10c;
        puVar1 = (undefined8 *)(lVar13 + lVar12 * 8);
        if (((undefined8 *)puVar5[5] <= puVar1) &&
           (lVar13 + lVar12 * 8 + 8U <= (longlong)puVar5[5] + (ulonglong)(uint)(iVar9 * iVar8))) {
          *puVar1 = 0;
        }
        if (0 < *(int *)((longlong)puVar5 + 0x44)) {
          lVar13 = 0;
          do {
            lVar12 = puVar5[7];
            iVar9 = (**(code **)(*(longlong *)puVar5[6] + 0x28))();
            iVar10 = (**(code **)(*(longlong *)puVar5[6] + 0x20))();
            iVar8 = *(int *)((longlong)puVar5 + 0x44);
            lVar14 = (int)(iVar8 * uVar6) + lVar13;
            puVar3 = (undefined4 *)(lVar12 + lVar14 * 4);
            if (((undefined4 *)puVar5[7] <= puVar3) &&
               (lVar12 + lVar14 * 4 + 4U <= (longlong)puVar5[7] + (ulonglong)(uint)(iVar10 * iVar9))
               ) {
              *puVar3 = 0;
              iVar8 = *(int *)((longlong)puVar5 + 0x44);
            }
            lVar13 = lVar13 + 1;
          } while ((int)lVar13 < iVar8);
        }
      }
      local_f0 = local_f0 & ~local_100._4_4_;
      FUN_1449c0562(&local_100);
    } while ((int)local_ec < *(int *)(CONCAT44(uStack_f4,local_f8) + 0x18));
  }
  lVar13 = local_108;
  FUN_14067d924(param_1,local_108);
  if (local_118 != (longlong *)(lVar13 + 0x120)) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar13 + 0x120);
    *(undefined8 *)(lVar13 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(lVar13 + 0x128);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(lVar13 + 300);
    *(undefined8 *)(lVar13 + 0x128) = 0;
  }
  local_f8 = *(undefined4 *)(lVar13 + 0x1b4);
  local_100 = local_118;
  local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x10);
  FUN_147b02d70(lVar13,&local_100,local_f8,&local_e0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x21) = 1;
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b02d70 FUN_147b02d70 body=5070 status=ok
// SIG undefined FUN_147b02d70(void)

void FUN_147b02d70(undefined8 *param_1,longlong *param_2,ulonglong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  undefined8 *puVar8;
  float *pfVar9;
  code *pcVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  undefined2 uVar23;
  ushort uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  float *pfVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong *plVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  longlong lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  uint local_230;
  uint local_22c;
  longlong *local_228;
  ulonglong local_220;
  undefined8 local_218;
  longlong *local_210;
  undefined8 *local_208;
  longlong local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  uint local_1e4;
  ulonglong local_1e0;
  longlong local_1d8 [2];
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  uVar33 = param_3 & 0xffffffff;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar25 = *(ushort *)(param_1 + 0x1e) & 2;
  if ((*(ushort *)(param_1 + 0x1e) & 2) != 0) {
    uVar25 = *(uint *)(param_1 + 0x15);
  }
  **(uint **)(param_4 + 0x70) = uVar25;
  local_238 = 0;
  local_200 = param_4;
  FUN_140aa0f16(param_5,uVar33,**(undefined4 **)(param_4 + 0x70),0);
  puVar8 = *(undefined8 **)(param_4 + 8);
  uVar32 = param_1[0x26];
  uVar18 = param_1[0x27];
  uVar53 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x144);
  uVar4 = *(undefined4 *)(param_1 + 0x29);
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x14c);
  uVar19 = param_1[0x2b];
  puVar8[4] = param_1[0x2a];
  puVar8[5] = uVar19;
  *(undefined4 *)(puVar8 + 2) = uVar53;
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
  *(undefined4 *)(puVar8 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar12;
  *puVar8 = uVar32;
  puVar8[1] = uVar18;
  puVar8 = *(undefined8 **)(param_4 + 0x10);
  puVar8[2] = param_1[0x2e];
  uVar32 = param_1[0x2d];
  *puVar8 = param_1[0x2c];
  puVar8[1] = uVar32;
  FUN_14026f2d2(*(undefined8 *)(param_4 + 0x18),param_1 + 0x1f);
  FUN_14026f33c(&local_1c4,*(undefined8 *)(param_4 + 8));
  pfVar9 = *(float **)(param_4 + 0x18);
  pfVar31 = *(float **)(pfVar9 + 6);
  if (*(float **)(pfVar9 + 6) == (float *)0x0) {
    pfVar31 = pfVar9;
  }
  if ((longlong)(int)pfVar9[8] != 0) {
    pfVar9 = pfVar31 + (longlong)(int)pfVar9[8] * 6;
    do {
      *pfVar31 = *pfVar31 - local_1c4;
      pfVar31[1] = pfVar31[1] - local_1c0;
      pfVar31[2] = pfVar31[2] - local_1bc;
      pfVar31[3] = pfVar31[3] + local_1c4;
      pfVar31[4] = pfVar31[4] + local_1c0;
      pfVar31[5] = pfVar31[5] + local_1bc;
      pfVar31 = pfVar31 + 6;
    } while (pfVar31 != pfVar9);
  }
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
    FUN_144aa29e6(local_1d8,param_3 & 0xffffffff,1);
    pcVar10 = (code *)*param_1;
    if (pcVar10 != (code *)0x0) {
      plVar36 = param_1 + 4;
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        plVar36 = (longlong *)param_1[2];
      }
      uVar32 = (**(code **)(*plVar36 + 8))();
      (*pcVar10)(uVar32,local_1d8);
    }
  }
  FUN_14026f28a(*(undefined8 *)(local_200 + 0x50),uVar33);
  local_228 = param_1 + 8;
  iVar26 = *(int *)(param_1 + 0x36);
  uVar33 = CONCAT71((int7)(uVar33 >> 8),1);
  if ((*(char *)(param_1 + 0x12) == '\0' && *(char *)((longlong)param_1 + 0x91) == '\0') &&
     (*(int *)((longlong)param_1 + 0x84) + *(int *)(param_1 + 0x10) != iVar26)) {
    uVar25 = *(uint *)(param_1 + 9);
    iVar26 = *(int *)(param_1 + 0xf);
    if (*(int *)(param_1 + 0xe) < *(int *)(param_1 + 0xf)) {
      iVar26 = *(int *)(param_1 + 0xe);
    }
    iVar29 = iVar26 + 7;
    if (-1 < iVar26) {
      iVar29 = iVar26;
    }
    uVar44 = iVar29 >> 3;
    uVar34 = (ulonglong)uVar44;
    uVar38 = iVar26 % 8;
    local_220 = (ulonglong)uVar38;
    uVar33 = 0;
    uVar30 = 0;
    if ((int)uVar44 < (int)uVar25 && -8 < iVar26) {
      uVar30 = *(uint *)(*local_228 + (longlong)(int)uVar44 * 4) & 0x33333333;
    }
    bVar11 = (char)uVar38 * '\x04' & 0x1f;
    local_22c = uVar30 >> bVar11;
    local_210 = local_228;
    if ((int)uVar44 < (int)uVar25) {
      local_220._0_4_ = uVar38;
      if (uVar30 >> bVar11 == 0) {
        uVar33 = (longlong)(int)uVar44;
        do {
          if ((longlong)(int)uVar25 - 1U == uVar33) {
            uVar33 = 0;
            iVar26 = 0;
            local_22c = 0;
            local_220 = 0;
            uVar34 = (ulonglong)uVar25;
            goto LAB_147b02fe9;
          }
          uVar34 = uVar33 + 1;
          local_22c = *(uint *)(*local_228 + 4 + uVar33 * 4) & 0x33333333;
          uVar33 = uVar34;
        } while (local_22c == 0);
        local_220._0_4_ = 0;
      }
      uVar25 = 0;
      if (local_22c != 0) {
        for (; (local_22c >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
        }
      }
      local_220 = (ulonglong)((uVar25 >> 2) + (uint)local_220);
      local_22c = local_22c >> ((byte)uVar25 & 0x1c);
      uVar33 = 0;
      iVar26 = 0;
    }
    else {
      iVar26 = 0;
    }
  }
  else {
    local_210 = (longlong *)0x0;
    local_220 = 0;
    uVar34 = 0;
  }
LAB_147b02fe9:
  local_1f0 = (ulonglong)iVar26;
  uVar42 = 0;
  local_1e4 = (uint)uVar33;
  local_208 = param_1;
  local_1f8 = param_2;
LAB_147b0300a:
  do {
    local_230 = (int)local_220 + (int)uVar34 * 8;
    uVar39 = (ulonglong)local_230;
    local_1e0 = uVar34;
    do {
      do {
        if ((char)uVar33 == '\0') {
          iVar26 = *(int *)((longlong)local_210 + 0x3c) + 1;
          if ((int)local_210[6] < iVar26) {
            iVar26 = (int)local_210[6];
          }
          if (iVar26 <= (int)uVar39) goto LAB_147b03a9e;
        }
        else if ((longlong)local_1f0 <= (longlong)uVar42) {
LAB_147b03a9e:
          uVar24 = *(ushort *)(param_1 + 0x1e);
          if ((uVar24 & 2) == 0) goto LAB_147b03d29;
          uVar25 = 0;
          bVar20 = true;
          if (*(int *)(param_1 + 0x15) == 0) {
            local_1f0 = 0;
            local_210 = (longlong *)0x0;
            local_228 = (longlong *)0x0;
            goto LAB_147b03bbf;
          }
          if ((*(char *)(param_1 + 0x12) != '\0') ||
             (*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x36))) {
            local_218 = CONCAT44(local_218._4_4_,*(int *)(param_1 + 0x36));
            local_1f0 = 0;
            local_210 = (longlong *)0x0;
            local_228 = (longlong *)0x0;
            uVar25 = 0;
            goto LAB_147b03bc7;
          }
          uVar44 = *(uint *)(param_1 + 9);
          local_210 = (longlong *)(ulonglong)uVar44;
          iVar26 = *(int *)(param_1 + 0xf);
          if (*(int *)(param_1 + 0xe) < *(int *)(param_1 + 0xf)) {
            iVar26 = *(int *)(param_1 + 0xe);
          }
          iVar29 = iVar26 + 7;
          if (-1 < iVar26) {
            iVar29 = iVar26;
          }
          uVar30 = iVar29 >> 3;
          uVar33 = (ulonglong)uVar30;
          uVar38 = iVar26 % 8;
          uVar41 = 0;
          if ((int)uVar30 < (int)uVar44 && -8 < iVar26) {
            uVar41 = *(uint *)(*local_228 + (longlong)(int)uVar30 * 4) & 0x55555555;
          }
          bVar11 = (char)uVar38 * '\x04' & 0x1f;
          local_230 = uVar41 >> bVar11;
          if ((int)uVar44 <= (int)uVar30) goto LAB_147b04012;
          if (uVar41 >> bVar11 != 0) goto LAB_147b03fb3;
          uVar34 = (longlong)(int)uVar30;
          goto LAB_147b040c9;
        }
        uVar34 = uVar39;
        if ((char)uVar33 != '\0') {
          uVar34 = uVar42 & 0xffffffff;
        }
        iVar26 = (int)uVar34;
        if (iVar26 < 0) {
          iVar29 = (int)param_2[1];
        }
        else {
          iVar29 = (int)param_2[1];
          if (iVar26 < (int)((longlong *)*param_2)[1]) {
            iVar26 = *(int *)(*(longlong *)*param_2 + uVar34 * 4);
          }
        }
        if ((iVar26 < iVar29) && (iVar26 != -1)) {
          if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
            uVar53 = 0;
          }
          else {
            uVar53 = *(undefined4 *)(local_1d8[0] + (longlong)iVar26 * 4);
          }
          lVar43 = param_1[0x16];
          lVar37 = uVar42 * 0x30;
          auVar50 = *(undefined1 (*) [16])(lVar43 + lVar37);
          fVar47 = auVar50._4_4_;
          fVar57 = auVar50._8_4_;
          uVar12 = auVar50._12_4_;
          auVar5 = *(undefined1 (*) [16])(lVar43 + 0xc + lVar37);
          fVar54 = auVar5._4_4_;
          fVar48 = auVar5._8_4_;
          uVar13 = auVar5._12_4_;
          auVar6 = *(undefined1 (*) [16])(lVar43 + 0x18 + lVar37);
          fVar55 = auVar6._4_4_;
          fVar52 = auVar6._8_4_;
          uVar14 = auVar6._12_4_;
          uVar3 = *(undefined4 *)(lVar43 + 0x2c + lVar37);
          uVar4 = *(undefined4 *)(lVar43 + 0x28 + lVar37);
          lVar43 = param_5[1];
          iVar29 = (**(code **)(*(longlong *)*param_5 + 0x28))();
          iVar27 = (**(code **)(*(longlong *)*param_5 + 0x20))();
          lVar45 = (longlong)iVar26 * 0x10;
          puVar8 = (undefined8 *)(lVar43 + lVar45);
          if (((undefined8 *)param_5[1] <= puVar8) &&
             (lVar43 + lVar45 + 0x10U <= (longlong)param_5[1] + (ulonglong)(uint)(iVar27 * iVar29)))
          {
            uVar32 = extractps(auVar6,3);
            *puVar8 = uVar32;
            *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
            *(undefined4 *)(puVar8 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0xc) = uVar53;
          }
          cVar7 = *(char *)(param_5 + 9);
          lVar43 = param_5[3];
          local_218 = (longlong)iVar26;
          iVar29 = (**(code **)(*(longlong *)param_5[2] + 0x28))();
          iVar27 = (**(code **)(*(longlong *)param_5[2] + 0x20))();
          pfVar9 = (float *)param_5[3];
          uVar33 = (ulonglong)(uint)(iVar27 * iVar29) + (longlong)pfVar9;
          if (cVar7 == '\x01') {
            pfVar31 = (float *)(lVar43 + local_218 * 0x18);
            if ((pfVar9 <= pfVar31) && (lVar43 + local_218 * 0x18 + 0x18U <= uVar33)) {
              fVar46 = ABS(auVar50._0_4_);
              if ((uint)fVar46 < 0x47800000) {
                if ((uint)fVar46 < 0x38800000) {
                  fVar56 = fVar46 + 0.5;
                }
                else {
                  fVar46 = (float)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar56 = fVar46;
                }
              }
              else {
                fVar56 = (float)((0x7f800000 < (uint)fVar46 | 0x3e) << 9);
              }
              iVar29 = movmskps(fVar46,auVar50);
              *(ushort *)pfVar31 = (ushort)(iVar29 << 0xf) | SUB42(fVar56,0);
              fVar46 = ABS(fVar47);
              if ((uint)fVar46 < 0x47800000) {
                if ((uint)fVar46 < 0x38800000) {
                  fVar56 = fVar46 + 0.5;
                }
                else {
                  fVar46 = (float)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar56 = fVar46;
                }
              }
              else {
                fVar56 = (float)((0x7f800000 < (uint)fVar46 | 0x3e) << 9);
              }
              auVar16._4_4_ = fVar47;
              auVar16._0_4_ = fVar47;
              auVar16._8_4_ = uVar12;
              auVar16._12_4_ = uVar12;
              iVar29 = movmskps(fVar46,auVar16);
              *(ushort *)((longlong)pfVar31 + 2) = (ushort)(iVar29 << 0xf) | SUB42(fVar56,0);
              fVar47 = ABS(fVar57);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar46 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar46 = fVar47;
                }
              }
              else {
                fVar46 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              auVar50._8_4_ = fVar57;
              auVar50._0_8_ = auVar50._8_8_;
              auVar50._12_4_ = uVar12;
              iVar29 = movmskps(fVar47,auVar50);
              *(ushort *)(pfVar31 + 1) = (ushort)(iVar29 << 0xf) | SUB42(fVar46,0);
              *(undefined2 *)((longlong)pfVar31 + 6) = 0;
              fVar47 = ABS(auVar5._0_4_);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar57 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar57 = fVar47;
                }
              }
              else {
                fVar57 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              iVar29 = movmskps(fVar47,auVar5);
              *(ushort *)(pfVar31 + 2) = (ushort)(iVar29 << 0xf) | SUB42(fVar57,0);
              fVar47 = ABS(fVar54);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar57 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar57 = fVar47;
                }
              }
              else {
                fVar57 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              auVar15._4_4_ = fVar54;
              auVar15._0_4_ = fVar54;
              auVar15._8_4_ = uVar13;
              auVar15._12_4_ = uVar13;
              iVar29 = movmskps(fVar47,auVar15);
              *(ushort *)((longlong)pfVar31 + 10) = (ushort)(iVar29 << 0xf) | SUB42(fVar57,0);
              fVar47 = ABS(fVar48);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar54 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar54 = fVar47;
                }
              }
              else {
                fVar54 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              auVar5._8_4_ = fVar48;
              auVar5._0_8_ = auVar5._8_8_;
              auVar5._12_4_ = uVar13;
              iVar29 = movmskps(fVar47,auVar5);
              *(ushort *)(pfVar31 + 3) = (ushort)(iVar29 << 0xf) | SUB42(fVar54,0);
              *(undefined2 *)((longlong)pfVar31 + 0xe) = 0;
              fVar47 = ABS(auVar6._0_4_);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar54 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar54 = fVar47;
                }
              }
              else {
                fVar54 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              iVar29 = movmskps(fVar47,auVar6);
              *(ushort *)(pfVar31 + 4) = (ushort)(iVar29 << 0xf) | SUB42(fVar54,0);
              fVar47 = ABS(fVar55);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar54 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar54 = fVar47;
                }
              }
              else {
                fVar54 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              auVar17._4_4_ = fVar55;
              auVar17._0_4_ = fVar55;
              auVar17._8_4_ = uVar14;
              auVar17._12_4_ = uVar14;
              iVar29 = movmskps(fVar47,auVar17);
              *(ushort *)((longlong)pfVar31 + 0x12) = (ushort)(iVar29 << 0xf) | SUB42(fVar54,0);
              fVar47 = ABS(fVar52);
              if ((uint)fVar47 < 0x47800000) {
                if ((uint)fVar47 < 0x38800000) {
                  fVar54 = fVar47 + 0.5;
                }
                else {
                  fVar47 = (float)((int)fVar47 + 0x8000fff + (uint)(((uint)fVar47 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar54 = fVar47;
                }
              }
              else {
                fVar54 = (float)((0x7f800000 < (uint)fVar47 | 0x3e) << 9);
              }
              auVar6._8_4_ = fVar52;
              auVar6._0_8_ = auVar6._8_8_;
              auVar6._12_4_ = uVar14;
              iVar29 = movmskps(fVar47,auVar6);
              *(ushort *)(pfVar31 + 5) = (ushort)(iVar29 << 0xf) | SUB42(fVar54,0);
              *(undefined2 *)((longlong)pfVar31 + 0x16) = 0;
            }
          }
          else {
            pfVar31 = (float *)(lVar43 + local_218 * 0x30);
            if ((pfVar9 <= pfVar31) && (lVar43 + local_218 * 0x30 + 0x30U <= uVar33)) {
              *pfVar31 = auVar50._0_4_;
              pfVar31[1] = fVar47;
              pfVar31[2] = fVar57;
              pfVar31[3] = 0.0;
              pfVar31[4] = auVar5._0_4_;
              pfVar31[5] = fVar54;
              pfVar31[6] = fVar48;
              pfVar31[7] = 0.0;
              pfVar31[8] = auVar6._0_4_;
              pfVar31[9] = fVar55;
              pfVar31[10] = fVar52;
              pfVar31[0xb] = 0.0;
            }
          }
          dVar22 = DAT_14c8463f8;
          dVar21 = DAT_14c8463f0;
          lVar43 = param_5[5];
          iVar29 = (**(code **)(*(longlong *)param_5[4] + 0x28))();
          iVar27 = (**(code **)(*(longlong *)param_5[4] + 0x20))();
          puVar2 = (undefined2 *)(lVar43 + local_218 * 8);
          if (((undefined2 *)param_5[5] <= puVar2) &&
             (lVar43 + local_218 * 8 + 8U <=
              (longlong)param_5[5] + (ulonglong)(uint)(iVar27 * iVar29))) {
            iVar29 = (int)((float)dVar21 * 32767.0);
            if (0x7ffe < iVar29) {
              iVar29 = 0x7fff;
            }
            uVar23 = (undefined2)iVar29;
            if (iVar29 < -0x7fff) {
              uVar23 = 0x8000;
            }
            iVar29 = (int)((float)dVar22 * 32767.0);
            if (0x7ffe < iVar29) {
              iVar29 = 0x7fff;
            }
            if (iVar29 < -0x7fff) {
              iVar29 = -0x8000;
            }
            *puVar2 = uVar23;
            puVar2[1] = (short)iVar29;
            puVar2[2] = uVar23;
            puVar2[3] = (short)iVar29;
          }
          if (0 < *(int *)((longlong)param_5 + 0x44)) {
            lVar43 = 0;
            do {
              lVar45 = param_5[7];
              iVar27 = (**(code **)(*(longlong *)param_5[6] + 0x28))();
              iVar28 = (**(code **)(*(longlong *)param_5[6] + 0x20))();
              iVar29 = *(int *)((longlong)param_5 + 0x44);
              lVar40 = iVar29 * iVar26 + lVar43;
              puVar1 = (undefined4 *)(lVar45 + lVar40 * 4);
              if (((undefined4 *)param_5[7] <= puVar1) &&
                 (lVar45 + lVar40 * 4 + 4U <=
                  (longlong)param_5[7] + (ulonglong)(uint)(iVar28 * iVar27))) {
                *puVar1 = 0;
                iVar29 = *(int *)((longlong)param_5 + 0x44);
              }
              lVar43 = lVar43 + 1;
            } while ((int)lVar43 < iVar29);
          }
          param_1 = local_208;
          lVar43 = local_208[0x16];
          auVar50 = *(undefined1 (*) [16])(lVar43 + 0x18 + lVar37);
          uVar53 = auVar50._12_4_;
          local_138 = blendps(*(undefined1 (*) [16])(lVar43 + lVar37),ZEXT816(0),8);
          local_128 = blendps(*(undefined1 (*) [16])(lVar43 + 0xc + lVar37),ZEXT816(0),8);
          local_118 = blendps(auVar50,ZEXT816(0),8);
          auVar49._4_4_ = uVar53;
          auVar49._0_4_ = uVar53;
          auVar49._8_4_ = 0x3f800000;
          auVar49._12_4_ = 0x3f800000;
          auVar50 = insertps(auVar49,*(undefined4 *)(lVar43 + 0x28 + lVar37),0x10);
          local_108 = insertps(auVar50,*(undefined4 *)(lVar43 + 0x2c + lVar37),0x20);
          local_178 = blendps(*(undefined1 (*) [16])(local_208 + 0x26),ZEXT816(0),8);
          uVar53 = SUB164(*(undefined1 (*) [16])(local_208 + 0x29),0xc);
          local_168 = blendps(*(undefined1 (*) [16])((longlong)local_208 + 0x13c),ZEXT816(0),8);
          local_158 = blendps(*(undefined1 (*) [16])(local_208 + 0x29),ZEXT816(0),8);
          auVar51._4_4_ = uVar53;
          auVar51._0_4_ = uVar53;
          auVar51._8_4_ = 0x3f800000;
          auVar51._12_4_ = 0x3f800000;
          auVar50 = insertps(auVar51,*(undefined4 *)(local_208 + 0x2b),0x10);
          local_148 = insertps(auVar50,*(undefined4 *)((longlong)local_208 + 0x15c),0x20);
          FUN_144afeb32(&local_1b8,local_138,local_178);
          uVar33 = (ulonglong)local_1e4;
          fVar47 = local_194;
          fVar54 = local_1a4;
          fVar55 = local_198;
          fVar57 = local_1a8;
          fVar48 = local_190;
          fVar52 = local_1a0;
          if (((((local_1b8 != 0.0) || (NAN(local_1b8))) || (local_1b4 != 0.0)) ||
              (((NAN(local_1b4) || (local_1b0 != 0.0)) || (NAN(local_1b0))))) &&
             (((local_1a8 != 0.0 || (NAN(local_1a8))) ||
              ((local_1a4 != 0.0 || (((NAN(local_1a4) || (local_1a0 != 0.0)) || (NAN(local_1a0))))))
              ))) {
            fVar55 = local_1b0 * local_1b0 + local_1b8 * local_1b8 + local_1b4 * local_1b4;
            fVar47 = (local_1a0 * local_1b0 + local_1a8 * local_1b8 + local_1b4 * local_1a4) /
                     fVar55;
            fVar57 = local_1a8 - fVar47 * local_1b8;
            fVar54 = local_1a4 - local_1b4 * fVar47;
            fVar52 = local_1a0 - local_1b0 * fVar47;
            fVar55 = (local_190 * local_1b0 + local_198 * local_1b8 + local_1b4 * local_194) /
                     fVar55;
            fVar56 = local_198 - fVar55 * local_1b8;
            fVar47 = local_194 - local_1b4 * fVar55;
            fVar48 = local_190 - local_1b0 * fVar55;
            fVar46 = (fVar48 * fVar52 + fVar56 * fVar57 + fVar54 * fVar47) /
                     (fVar52 * fVar52 + fVar57 * fVar57 + fVar54 * fVar54);
            fVar47 = fVar47 - fVar54 * fVar46;
            fVar55 = fVar56 - fVar46 * fVar57;
            fVar48 = fVar48 - fVar52 * fVar46;
          }
          uVar39 = (ulonglong)local_230;
          lVar43 = **(longlong **)(local_200 + 0x50);
          lVar45 = local_218 * 0x30;
          *(float *)(lVar43 + lVar45) = local_1b8;
          *(float *)(lVar43 + 4 + lVar45) = local_1b4;
          *(float *)(lVar43 + 8 + lVar45) = local_1b0;
          *(float *)(lVar43 + 0xc + lVar45) = fVar57;
          *(float *)(lVar43 + 0x10 + lVar45) = fVar54;
          *(float *)(lVar43 + 0x14 + lVar45) = fVar52;
          *(float *)(lVar43 + 0x18 + lVar45) = fVar55;
          *(float *)(lVar43 + 0x1c + lVar45) = fVar47;
          *(float *)(lVar43 + 0x20 + lVar45) = fVar48;
          *(undefined4 *)(lVar43 + 0x24 + lVar45) = local_188;
          *(undefined4 *)(lVar43 + 0x28 + lVar45) = local_184;
          *(undefined4 *)(lVar43 + 0x2c + lVar45) = local_180;
          param_2 = local_1f8;
        }
        uVar42 = uVar42 + 1;
      } while ((char)uVar33 != '\0');
      uVar25 = *(uint *)(local_210 + 1);
      uVar34 = (ulonglong)uVar25;
    } while ((int)uVar25 <= (int)local_1e0);
    local_22c = local_22c & 0xfffffffc;
    uVar39 = (longlong)(int)local_1e0;
    if (local_22c == 0) {
      uVar35 = (longlong)(int)local_1e0;
      do {
        if ((longlong)(int)uVar25 - 1U == uVar35) {
          local_22c = 0;
          local_220 = 0;
          goto LAB_147b0300a;
        }
        uVar39 = uVar35 + 1;
        local_22c = *(uint *)(*local_210 + 4 + uVar35 * 4) & 0x33333333;
        uVar35 = uVar39;
      } while (local_22c == 0);
      local_220 = 0;
    }
    uVar34 = uVar39;
    uVar25 = 0;
    if (local_22c != 0) {
      for (; (local_22c >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
      }
    }
    local_220 = (ulonglong)((uVar25 >> 2) + (uint)local_220);
    local_22c = local_22c >> ((byte)uVar25 & 0x1c);
  } while( true );
  while( true ) {
    uVar33 = uVar34 + 1;
    local_230 = *(uint *)(*local_228 + 4 + uVar34 * 4) & 0x55555555;
    uVar34 = uVar33;
    if (local_230 != 0) break;
LAB_147b040c9:
    if ((longlong)(int)uVar44 - 1U == uVar34) {
      bVar20 = false;
      local_1f0 = 0;
      local_230 = 0;
      goto LAB_147b03bbf;
    }
  }
  uVar38 = 0;
LAB_147b03fb3:
  uVar30 = (uint)uVar33;
  uVar44 = 0;
  if (local_230 != 0) {
    for (; (local_230 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
    }
  }
  uVar38 = (uVar44 >> 2) + uVar38;
  local_230 = local_230 >> ((byte)uVar44 & 0x1c);
LAB_147b04012:
  bVar20 = false;
  local_1f0 = (ulonglong)uVar38;
  local_210 = (longlong *)(ulonglong)uVar30;
LAB_147b03bbf:
  local_218 = (ulonglong)local_218._4_4_ << 0x20;
LAB_147b03bc7:
  do {
    uVar44 = (int)local_1f0 + (int)local_210 * 8;
    do {
      do {
        if (bVar20) {
          uVar38 = uVar25;
          if ((int)local_218 <= (int)uVar25) {
LAB_147b03d1d:
            uVar24 = *(ushort *)(local_208 + 0x1e);
LAB_147b03d29:
            if (((uVar24 & 0x10) == 0) ||
               (iVar26 = *(int *)(local_208 + 0x1d), (longlong)iVar26 < 1)) goto LAB_147b03e94;
            lVar43 = 0xc;
            lVar45 = 0;
            do {
              if (lVar45 < (int)((longlong *)*param_2)[1]) {
                iVar29 = *(int *)(*(longlong *)*param_2 + lVar45 * 4);
                if ((iVar29 != -1) && (iVar29 < (int)local_1f8[1])) {
LAB_147b03d92:
                  lVar37 = local_208[0x1c];
                  fVar47 = *(float *)(lVar37 + -0xc + lVar43);
                  fVar54 = *(float *)(lVar37 + -8 + lVar43);
                  fVar55 = *(float *)(lVar37 + -4 + lVar43);
                  fVar57 = *(float *)(lVar37 + lVar43);
                  lVar37 = param_5[5];
                  iVar27 = (**(code **)(*(longlong *)param_5[4] + 0x28))();
                  iVar28 = (**(code **)(*(longlong *)param_5[4] + 0x20))();
                  puVar2 = (undefined2 *)(lVar37 + (longlong)iVar29 * 8);
                  if (((undefined2 *)param_5[5] <= puVar2) &&
                     (lVar37 + (longlong)iVar29 * 8 + 8U <=
                      (longlong)param_5[5] + (ulonglong)(uint)(iVar28 * iVar27))) {
                    iVar29 = (int)(fVar47 * 32767.0);
                    if (0x7ffe < iVar29) {
                      iVar29 = 0x7fff;
                    }
                    uVar23 = (undefined2)iVar29;
                    if (iVar29 < -0x7fff) {
                      uVar23 = 0x8000;
                    }
                    iVar29 = (int)(fVar54 * 32767.0);
                    if (0x7ffe < iVar29) {
                      iVar29 = 0x7fff;
                    }
                    if (iVar29 < -0x7fff) {
                      iVar29 = -0x8000;
                    }
                    iVar27 = (int)(fVar55 * 32767.0);
                    if (0x7ffe < iVar27) {
                      iVar27 = 0x7fff;
                    }
                    *puVar2 = uVar23;
                    if (iVar27 < -0x7fff) {
                      iVar27 = -0x8000;
                    }
                    puVar2[1] = (short)iVar29;
                    iVar29 = (int)(fVar57 * 32767.0);
                    puVar2[2] = (short)iVar27;
                    if (0x7ffe < iVar29) {
                      iVar29 = 0x7fff;
                    }
                    uVar23 = (undefined2)iVar29;
                    if (iVar29 < -0x7fff) {
                      uVar23 = 0x8000;
                    }
                    puVar2[3] = uVar23;
                  }
                }
              }
              else if (lVar45 < (int)param_2[1]) {
                iVar29 = (int)lVar45;
                goto LAB_147b03d92;
              }
              lVar45 = lVar45 + 1;
              lVar43 = lVar43 + 0x10;
              param_2 = local_1f8;
              if (iVar26 == lVar45) {
LAB_147b03e94:
                if (local_1d8[0] != 0) {
                  FUN_1400020a8();
                }
                if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0();
                }
                return;
              }
            } while( true );
          }
        }
        else {
          iVar26 = *(int *)((longlong)local_228 + 0x3c) + 1;
          if ((int)local_228[6] < iVar26) {
            iVar26 = (int)local_228[6];
          }
          uVar38 = uVar44;
          if (iVar26 <= (int)uVar44) goto LAB_147b03d1d;
        }
        if ((int)uVar38 < 0) {
          iVar26 = (int)param_2[1];
        }
        else {
          iVar26 = (int)param_2[1];
          if ((int)uVar38 < (int)((longlong *)*param_2)[1]) {
            uVar38 = *(uint *)(*(longlong *)*param_2 + (ulonglong)uVar38 * 4);
          }
        }
        if ((((int)uVar38 < iVar26) && (uVar38 != 0xffffffff)) &&
           (iVar26 = **(int **)(local_200 + 0x70), 0 < iVar26)) {
          lVar43 = 0;
          do {
            if ((int)lVar43 < *(int *)((longlong)param_5 + 0x44)) {
              uVar53 = *(undefined4 *)(local_208[0x1a] + ((int)(iVar26 * uVar25) + lVar43) * 4);
              lVar45 = param_5[7];
              iVar26 = (**(code **)(*(longlong *)param_5[6] + 0x28))();
              iVar29 = (**(code **)(*(longlong *)param_5[6] + 0x20))();
              lVar37 = (longlong)*(int *)((longlong)param_5 + 0x44) * (longlong)(int)uVar38 + lVar43
              ;
              puVar1 = (undefined4 *)(lVar45 + lVar37 * 4);
              if (((undefined4 *)param_5[7] <= puVar1) &&
                 (lVar45 + lVar37 * 4 + 4U <=
                  (longlong)param_5[7] + (ulonglong)(uint)(iVar29 * iVar26))) {
                *puVar1 = uVar53;
              }
            }
            iVar26 = **(int **)(local_200 + 0x70);
            lVar43 = lVar43 + 1;
          } while ((int)lVar43 < iVar26);
        }
        uVar25 = uVar25 + 1;
        param_2 = local_1f8;
      } while (bVar20);
      uVar38 = *(uint *)(local_228 + 1);
    } while ((int)uVar38 <= (int)local_210);
    local_210 = (longlong *)(longlong)(int)local_210;
    local_230 = local_230 & 0xfffffffa;
    if (local_230 == 0) {
      plVar36 = local_210;
      do {
        if ((longlong *)((longlong)(int)uVar38 + -1) == plVar36) {
          local_1f0 = 0;
          local_230 = 0;
          local_210 = (longlong *)(ulonglong)uVar38;
          goto LAB_147b03bc7;
        }
        local_210 = (longlong *)((longlong)plVar36 + 1);
        local_230 = *(uint *)(*local_228 + 4 + (longlong)plVar36 * 4) & 0x55555555;
        plVar36 = local_210;
      } while (local_230 == 0);
      iVar26 = 0;
    }
    else {
      iVar26 = (int)local_1f0;
    }
    uVar44 = 0;
    if (local_230 != 0) {
      for (; (local_230 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
      }
    }
    local_230 = local_230 >> ((byte)uVar44 & 0x1c);
    local_1f0 = (ulonglong)((uVar44 >> 2) + iVar26);
  } while( true );
}



// FUNCTION 147b04140 FUN_147b04140 body=1350 status=ok
// SIG undefined FUN_147b04140(void)

void FUN_147b04140(ulonglong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 auStack_1a8 [32];
  longlong **local_188;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined4 local_150;
  longlong *local_148;
  undefined8 *puStack_140;
  longlong *local_138;
  undefined8 *puStack_130;
  longlong *local_128;
  undefined8 *puStack_120;
  longlong *local_118;
  undefined4 *puStack_110;
  undefined8 local_108;
  char local_100;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14067d924();
  if (param_1 + 0x1c0 != param_2 + 0x120) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_2 + 0x128) = 0;
  }
  uVar8 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  local_e8 = param_1 + 8;
  local_f0 = (ulonglong)(uVar8 >> 0x10 ^ uVar8) | 0x100000000;
  local_e0 = param_1 + 0x38;
  local_d8 = param_1 + 0x50;
  local_d0 = param_1 + 0x78;
  local_c8 = param_1 + 0x88;
  local_c0 = param_1 + 0x98;
  local_b8 = param_1 + 0xa8;
  local_b0 = param_1 + 0xb8;
  local_a8 = param_1 + 200;
  local_a0 = param_1 + 0xd8;
  local_98 = param_1 + 0xe8;
  local_90 = param_1 + 0xf8;
  local_88 = param_1 + 0x118;
  local_80 = param_1 + 0x11c;
  local_78 = param_1 + 0x120;
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0xf0);
  local_118 = (longlong *)0x0;
  puStack_110 = (undefined4 *)0x0;
  local_128 = (longlong *)0x0;
  puStack_120 = (undefined8 *)0x0;
  local_138 = (longlong *)0x0;
  puStack_130 = (undefined8 *)0x0;
  local_148 = (longlong *)0x0;
  puStack_140 = (undefined8 *)0x0;
  local_108 = 0;
  local_100 = '\x01';
  FUN_1407edadc(&local_148,0,0);
  local_150 = *(undefined4 *)(param_2 + 0x1b4);
  local_188 = &local_148;
  local_158 = param_1 + 0x1c0;
  FUN_147b02d70(param_2,&local_158,local_150,&local_f0);
  if ((*(char *)(param_1 + 0x1d0) == '\x01') &&
     (*(int *)(param_2 + 0x1b4) != *(int *)(param_1 + 0x1c8))) {
    local_60 = (undefined1 *)0x0;
    local_58 = 0x8000000000;
    FUN_14476b79c(local_70);
    iVar13 = *(int *)(param_1 + 0x1c8);
    if ((longlong)iVar13 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x1c0);
      lVar14 = 0;
      do {
        iVar9 = *(int *)(lVar12 + lVar14);
        if (iVar9 != -1) {
          puVar15 = local_60;
          if (local_60 == (undefined1 *)0x0) {
            puVar15 = local_70;
          }
          iVar10 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar10 = iVar9;
          }
          bVar4 = (byte)iVar9 & 0x1f;
          *(uint *)(puVar15 + (longlong)(iVar10 >> 5) * 4) =
               *(uint *)(puVar15 + (longlong)(iVar10 >> 5) * 4) &
               (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        }
        lVar14 = lVar14 + 4;
      } while ((longlong)iVar13 * 4 != lVar14);
    }
    local_178 = 0x100000000;
    local_168 = 0xffffffff;
    local_160 = 0;
    local_170 = local_70;
    if ((int)local_58 != 0) {
      FUN_1449c0562(&local_178);
      if (local_168._4_4_ < *(int *)(local_170 + 0x18)) {
        iVar13 = local_168._4_4_;
        do {
          puVar11 = puStack_140;
          iVar9 = (**(code **)(*local_148 + 0x28))();
          iVar10 = (**(code **)(*local_148 + 0x20))();
          cVar7 = local_100;
          puVar5 = puStack_130;
          lVar12 = (longlong)iVar13;
          puVar3 = puVar11 + lVar12 * 2;
          if (puStack_140 <= puVar3) {
            if (puVar11 + lVar12 * 2 + 2 <=
                (undefined8 *)((longlong)puStack_140 + (ulonglong)(uint)(iVar10 * iVar9))) {
              *puVar3 = 0;
              puVar3[1] = 0;
            }
          }
          iVar9 = (**(code **)(*local_138 + 0x28))();
          iVar10 = (**(code **)(*local_138 + 0x20))();
          puVar3 = puStack_120;
          puVar11 = (undefined8 *)((ulonglong)(uint)(iVar10 * iVar9) + (longlong)puStack_130);
          if (cVar7 == '\x01') {
            puVar1 = puVar5 + lVar12 * 3;
            if ((puStack_130 <= puVar1) && (puVar5 + lVar12 * 3 + 3 <= puVar11)) {
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
            }
          }
          else {
            puVar1 = puVar5 + lVar12 * 6;
            if ((puStack_130 <= puVar1) && (puVar5 + lVar12 * 6 + 6 <= puVar11)) {
              puVar1[4] = 0;
              puVar1[5] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
            }
          }
          iVar9 = (**(code **)(*local_128 + 0x28))();
          iVar10 = (**(code **)(*local_128 + 0x20))();
          puVar11 = puVar3 + lVar12;
          if ((puStack_120 <= puVar11) &&
             (puVar3 + lVar12 + 1 <=
              (undefined8 *)((longlong)puStack_120 + (ulonglong)(uint)(iVar10 * iVar9)))) {
            *puVar11 = 0;
          }
          if (0 < local_108._4_4_) {
            lVar12 = 0;
            do {
              puVar6 = puStack_110;
              iVar9 = (**(code **)(*local_118 + 0x28))();
              iVar10 = (**(code **)(*local_118 + 0x20))();
              lVar14 = local_108._4_4_ * iVar13 + lVar12;
              puVar2 = puVar6 + lVar14;
              if ((puStack_110 <= puVar2) &&
                 (puVar6 + lVar14 + 1 <=
                  (undefined4 *)((longlong)puStack_110 + (ulonglong)(uint)(iVar10 * iVar9)))) {
                *puVar2 = 0;
              }
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 < local_108._4_4_);
          }
          local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
          FUN_1449c0562(&local_178);
          iVar13 = local_168._4_4_;
        } while (local_168._4_4_ < *(int *)(local_170 + 0x18));
      }
    }
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x1e0);
  if (lVar12 == 0) {
    lVar12 = FUN_14001cc68(0xa8,0x10);
    FUN_1457485dc(lVar12,*(undefined4 *)(param_1 + 0x13c));
    puVar3 = *(undefined8 **)(param_1 + 0x1e0);
    *(longlong *)(param_1 + 0x1e0) = lVar12;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
      lVar12 = *(longlong *)(param_1 + 0x1e0);
    }
  }
  FUN_14353388e(lVar12,&local_148);
  *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x21) = 1;
  FUN_14006ea12(&local_148);
  if ((local_50 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b04688 FUN_147b04688 body=567 status=ok
// SIG undefined FUN_147b04688(void)

void FUN_147b04688(ulonglong param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)(param_1 + 0x1d8);
  if (plVar2 != param_2) {
    lVar9 = *plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (lVar9 != 0) {
      FUN_14006ea12(lVar9);
      FUN_1400020a8(lVar9);
    }
  }
  if ((undefined8 *)(param_1 + 0x1c0) != param_4) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c0) = *param_4;
    *param_4 = 0;
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
  }
  uVar7 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_a0 = param_1 + 8;
  local_a8 = (ulonglong)(uVar7 >> 0x10 ^ uVar7) | 0x100000000;
  local_98 = param_1 + 0x38;
  puVar1 = (undefined4 *)(param_1 + 0x50);
  local_88 = param_1 + 0x78;
  local_80 = param_1 + 0x88;
  local_78 = param_1 + 0x98;
  local_70 = param_1 + 0xa8;
  local_68 = param_1 + 0xb8;
  local_60 = param_1 + 200;
  local_58 = param_1 + 0xd8;
  local_50 = param_1 + 0xe8;
  local_48 = param_1 + 0xf8;
  local_40 = param_1 + 0x118;
  local_38 = param_1 + 0x11c;
  local_30 = param_1 + 0x120;
  *(undefined4 *)(param_1 + 0x70) = 1;
  local_90 = puVar1;
  FUN_140ccfaac(puVar1,*(undefined4 *)(param_1 + 0x74));
  puVar8 = *(undefined4 **)(param_1 + 0x68);
  if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
    puVar8 = puVar1;
  }
  *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_3 + 4);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar8 = *param_3;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  FUN_147b01c70(&local_a8,*(undefined8 *)(param_1 + 0x1d8));
  lVar9 = *(longlong *)(param_1 + 0x1e0);
  if (lVar9 == 0) {
    lVar9 = FUN_14001cc68(0xa8,0x10);
    FUN_1457485dc(lVar9,*(undefined4 *)(param_1 + 0x13c));
    puVar3 = *(undefined8 **)(param_1 + 0x1e0);
    *(longlong *)(param_1 + 0x1e0) = lVar9;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
      lVar9 = *(longlong *)(param_1 + 0x1e0);
    }
  }
  FUN_14353388e(lVar9,*(undefined8 *)(param_1 + 0x1d8));
  *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x21) = 1;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b048c0 FUN_147b048c0 body=359 status=ok
// SIG undefined FUN_147b048c0(void)

void FUN_147b048c0(ulonglong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    uVar10 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    local_80 = param_1 + 8;
    local_88 = (ulonglong)(uVar10 >> 0x10 ^ uVar10) | 0x100000000;
    local_78 = param_1 + 0x38;
    local_70 = param_1 + 0x50;
    local_68 = param_1 + 0x78;
    local_60 = param_1 + 0x88;
    local_58 = param_1 + 0x98;
    local_50 = param_1 + 0xa8;
    local_48 = param_1 + 0xb8;
    local_40 = param_1 + 200;
    local_38 = param_1 + 0xd8;
    local_30 = param_1 + 0xe8;
    local_28 = param_1 + 0xf8;
    local_20 = param_1 + 0x118;
    local_18 = param_1 + 0x11c;
    local_10 = param_1 + 0x120;
    uVar8 = *(undefined8 *)(param_2 + 0x130);
    uVar9 = *(undefined8 *)(param_2 + 0x138);
    uVar1 = *(undefined4 *)(param_2 + 0x140);
    uVar2 = *(undefined4 *)(param_2 + 0x144);
    uVar3 = *(undefined4 *)(param_2 + 0x148);
    uVar4 = *(undefined4 *)(param_2 + 0x14c);
    uVar5 = *(undefined4 *)(param_2 + 0x154);
    uVar6 = *(undefined4 *)(param_2 + 0x158);
    uVar7 = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    uVar1 = *(undefined4 *)(param_2 + 0x164);
    uVar2 = *(undefined4 *)(param_2 + 0x168);
    uVar3 = *(undefined4 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x170);
    FUN_147b01c70(&local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x10));
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b04a28 FUN_147b04a28 body=1544 status=ok
// SIG undefined FUN_147b04a28(void)

void FUN_147b04a28(longlong param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1b8 [40];
  uint local_190;
  int local_18c;
  longlong *local_188;
  longlong *local_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  char local_130;
  undefined7 uStack_12f;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  ulonglong local_70;
  ulonglong uVar11;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = (longlong *)(param_1 + 0xb0);
  iVar18 = *(int *)(param_1 + 0x1b0);
  local_168 = param_3;
  if ((*(char *)(param_1 + 0x90) == '\0' && *(char *)(param_1 + 0x91) == '\0') &&
     (iVar13 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x80), iVar13 != iVar18)) {
    if (iVar13 == 0) goto LAB_147b04f18;
    local_188 = (longlong *)(param_1 + 0x40);
    FUN_140250dc8(local_180);
    uVar5 = *(uint *)(param_1 + 0x48);
    local_178 = (ulonglong)uVar5;
    iVar18 = *(int *)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x78)) {
      iVar18 = *(int *)(param_1 + 0x70);
    }
    iVar13 = iVar18 + 7;
    if (-1 < iVar18) {
      iVar13 = iVar18;
    }
    uVar10 = iVar13 >> 3;
    uVar11 = (ulonglong)uVar10;
    uVar15 = iVar18 % 8;
    local_170 = (ulonglong)uVar15;
    bVar8 = false;
    uVar17 = 0;
    if (-8 < iVar18 && (int)uVar10 < (int)uVar5) {
      uVar17 = *(uint *)(*local_188 + (longlong)(int)uVar10 * 4) & 0x33333333;
    }
    bVar7 = (char)uVar15 * '\x04' & 0x1f;
    local_190 = uVar17 >> bVar7;
    if ((int)uVar10 < (int)uVar5) {
      if (uVar17 >> bVar7 == 0) {
        uVar16 = (longlong)(int)uVar10;
        do {
          if ((longlong)(int)uVar5 - 1U == uVar16) {
            bVar8 = false;
            local_18c = 0;
            local_190 = 0;
            goto LAB_147b04acb;
          }
          uVar11 = uVar16 + 1;
          local_190 = *(uint *)(*local_188 + 4 + uVar16 * 4) & 0x33333333;
          uVar16 = uVar11;
        } while (local_190 == 0);
        uVar15 = 0;
      }
      uVar5 = 0;
      if (local_190 != 0) {
        for (; (local_190 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      local_190 = local_190 >> ((byte)uVar5 & 0x1c);
      bVar8 = false;
      local_18c = 0;
      local_178 = uVar11 & 0xffffffff;
      local_170 = (ulonglong)((uVar5 >> 2) + uVar15);
    }
    else {
      local_18c = 0;
      local_178 = (ulonglong)uVar10;
    }
  }
  else {
    if (iVar18 == 0) {
LAB_147b04f18:
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (*(int *)(param_1 + 0xbc) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_1b8);
      }
LAB_147b04f2b:
      if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    local_18c = iVar18;
    FUN_140250dc8(local_180,iVar18);
    local_188 = (longlong *)0x0;
    bVar8 = true;
    local_178 = 0;
LAB_147b04acb:
    local_170 = 0;
  }
  iVar18 = 0;
LAB_147b04ad4:
  do {
    iVar13 = (int)local_170 + (int)local_178 * 8;
    do {
      do {
        if (bVar8) {
          iVar9 = iVar18;
          if (local_18c <= iVar18) goto LAB_147b04f2b;
        }
        else {
          iVar12 = *(int *)((longlong)local_188 + 0x3c) + 1;
          if ((int)local_188[6] < iVar12) {
            iVar12 = (int)local_188[6];
          }
          iVar9 = iVar13;
          if (iVar12 <= iVar13) goto LAB_147b04f2b;
        }
        lVar6 = *param_2;
        lVar14 = (longlong)(int)param_2[1] * (longlong)iVar9;
        fStack_120 = (float)*(double *)(lVar6 + 0x10 + lVar14);
        fStack_124 = (float)*(double *)(lVar6 + 8 + lVar14);
        local_128 = (float)*(double *)(lVar6 + lVar14);
        fStack_114 = (float)*(double *)(lVar6 + 0x30 + lVar14);
        local_118 = (float)*(double *)(lVar6 + 0x28 + lVar14);
        fStack_11c = (float)*(double *)(lVar6 + 0x20 + lVar14);
        fStack_108 = (float)*(double *)(lVar6 + 0x50 + lVar14);
        fStack_10c = (float)*(double *)(lVar6 + 0x48 + lVar14);
        fStack_110 = (float)*(double *)(lVar6 + 0x40 + lVar14);
        fVar21 = (float)*(double *)(lVar6 + 0x70 + lVar14);
        fVar22 = (float)*(double *)(lVar6 + 0x68 + lVar14);
        fStack_104 = (float)*(double *)(lVar6 + 0x60 + lVar14);
        local_f8 = (double)local_128;
        local_f0 = (double)fStack_124;
        local_e8 = (double)fStack_120;
        local_e0 = 0;
        local_d8 = (double)fStack_11c;
        local_d0 = (double)local_118;
        local_c8 = (double)fStack_114;
        local_c0 = 0;
        local_b8 = (double)fStack_110;
        local_b0 = (double)fStack_10c;
        local_a8 = (double)fStack_108;
        local_a0 = 0;
        local_98 = (double)fStack_104;
        local_90 = (double)fVar22;
        local_88 = (double)fVar21;
        local_80 = 0x3ff0000000000000;
        FUN_144b12ece(local_168,&local_160);
        if (local_130 == '\0' || *(char *)(param_4 + 6) == '\0') {
          if (local_130 != '\0') {
            param_4[6] = (double)CONCAT71(uStack_12f,local_130);
            param_4[4] = local_140;
            param_4[5] = dStack_138;
            param_4[2] = local_150;
            param_4[3] = dStack_148;
            *(undefined4 *)param_4 = local_160;
            *(undefined4 *)((longlong)param_4 + 4) = uStack_15c;
            *(undefined4 *)(param_4 + 1) = uStack_158;
            *(undefined4 *)((longlong)param_4 + 0xc) = uStack_154;
          }
        }
        else {
          dVar3 = *param_4;
          dVar4 = param_4[1];
          uVar19 = SUB84(dVar3,0);
          uVar20 = (int)((ulonglong)dVar3 >> 0x20);
          if ((double)CONCAT44(uStack_15c,local_160) <= dVar3) {
            uVar19 = local_160;
            uVar20 = uStack_15c;
          }
          *param_4 = (double)CONCAT44(uVar20,uVar19);
          uVar19 = SUB84(dVar4,0);
          uVar20 = (int)((ulonglong)dVar4 >> 0x20);
          if ((double)CONCAT44(uStack_154,uStack_158) <= dVar4) {
            uVar19 = uStack_158;
            uVar20 = uStack_154;
          }
          param_4[1] = (double)CONCAT44(uVar20,uVar19);
          dVar3 = param_4[2];
          uVar19 = SUB84(dVar3,0);
          uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (local_150 <= dVar3) {
            uVar19 = SUB84(local_150,0);
            uVar20 = (undefined4)((ulonglong)local_150 >> 0x20);
          }
          param_4[2] = (double)CONCAT44(uVar20,uVar19);
          dVar3 = param_4[3];
          uVar19 = SUB84(dVar3,0);
          uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= dStack_148) {
            uVar19 = SUB84(dStack_148,0);
            uVar20 = (undefined4)((ulonglong)dStack_148 >> 0x20);
          }
          param_4[3] = (double)CONCAT44(uVar20,uVar19);
          dVar3 = param_4[4];
          uVar19 = SUB84(dVar3,0);
          uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= local_140) {
            uVar19 = SUB84(local_140,0);
            uVar20 = (undefined4)((ulonglong)local_140 >> 0x20);
          }
          param_4[4] = (double)CONCAT44(uVar20,uVar19);
          dVar3 = param_4[5];
          uVar19 = SUB84(dVar3,0);
          uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= dStack_138) {
            uVar19 = SUB84(dStack_138,0);
            uVar20 = (undefined4)((ulonglong)dStack_138 >> 0x20);
          }
          param_4[5] = (double)CONCAT44(uVar20,uVar19);
        }
        iVar12 = *(int *)(param_1 + 0xb8);
        *(uint *)(param_1 + 0xb8) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0xbc) < iVar12 + 1U) {
          FUN_14026f43e(local_180,iVar12);
        }
        lVar6 = *local_180;
        lVar14 = (longlong)iVar12 * 0x30;
        *(ulonglong *)(lVar6 + 0x20 + lVar14) = CONCAT44(fStack_104,fStack_108);
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar14);
        *puVar2 = CONCAT44(fStack_114,local_118);
        puVar2[1] = CONCAT44(fStack_10c,fStack_110);
        pfVar1 = (float *)(lVar6 + lVar14);
        *pfVar1 = local_128;
        pfVar1[1] = fStack_124;
        pfVar1[2] = fStack_120;
        pfVar1[3] = fStack_11c;
        *(float *)(lVar6 + 0x28 + lVar14) = fVar22;
        *(float *)(lVar6 + 0x2c + lVar14) = fVar21;
        iVar18 = iVar18 + 1;
      } while (bVar8);
      uVar5 = *(uint *)(local_188 + 1);
    } while ((int)uVar5 <= (int)local_178);
    local_178 = (ulonglong)(int)local_178;
    local_190 = local_190 & 0xfffffffc;
    if (local_190 == 0) {
      uVar11 = local_178;
      do {
        if ((longlong)(int)uVar5 - 1U == uVar11) {
          local_190 = 0;
          local_178 = (ulonglong)uVar5;
          local_170 = 0;
          goto LAB_147b04ad4;
        }
        local_178 = uVar11 + 1;
        local_190 = *(uint *)(*local_188 + 4 + uVar11 * 4) & 0x33333333;
        uVar11 = local_178;
      } while (local_190 == 0);
      iVar13 = 0;
    }
    else {
      iVar13 = (int)local_170;
    }
    uVar5 = 0;
    if (local_190 != 0) {
      for (; (local_190 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    local_190 = local_190 >> ((byte)uVar5 & 0x1c);
    local_170 = (ulonglong)((uVar5 >> 2) + iVar13);
  } while( true );
}



// FUNCTION 147b05068 FUN_147b05068 body=75 status=ok
// SIG undefined FUN_147b05068(void)

void FUN_147b05068(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1402d084a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b050c0 FUN_147b050c0 body=2386 status=ok
// SIG undefined FUN_147b050c0(void)

void FUN_147b050c0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,undefined1 (*param_8) [16],undefined1 (*param_9) [16],char param_10)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_208 [32];
  float local_1e8 [4];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint local_1bc;
  float local_1b8 [4];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  uint local_188;
  uint local_184;
  uint local_180;
  undefined8 local_178;
  uint uStack_170;
  ushort uStack_16c;
  ushort uStack_16a;
  ushort local_168;
  undefined2 uStack_166;
  undefined6 uStack_164;
  short sStack_15e;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [4];
  float afStack_134 [3];
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar2 = SUB164(*(undefined1 (*) [16])(param_8[1] + 8),0xc);
  auVar16 = ZEXT816(0);
  _local_138 = blendps(*param_8,auVar16,8);
  _local_128 = blendps(*(undefined1 (*) [16])(*param_8 + 0xc),auVar16,8);
  local_118 = blendps(*(undefined1 (*) [16])(param_8[1] + 8),auVar16,8);
  auVar15._4_4_ = uVar2;
  auVar15._0_4_ = uVar2;
  auVar15._8_4_ = 0x3f800000;
  auVar15._12_4_ = 0x3f800000;
  auVar15 = insertps(auVar15,*(undefined4 *)(param_8[2] + 8),0x10);
  local_108 = insertps(auVar15,*(undefined4 *)(param_8[2] + 0xc),0x20);
  uVar2 = SUB164(*(undefined1 (*) [16])(param_9[1] + 8),0xc);
  auVar15 = blendps(*param_9,auVar16,8);
  auVar13 = blendps(*(undefined1 (*) [16])(*param_9 + 0xc),auVar16,8);
  local_158 = blendps(auVar16,*(undefined1 (*) [16])(param_9[1] + 8),7);
  auVar16._4_4_ = uVar2;
  auVar16._0_4_ = uVar2;
  auVar16._8_4_ = 0x3f800000;
  auVar16._12_4_ = 0x3f800000;
  auVar16 = insertps(auVar16,*(undefined4 *)(param_9[2] + 8),0x10);
  local_148 = insertps(auVar16,*(undefined4 *)(param_9[2] + 0xc),0x20);
  local_178 = auVar15._0_8_;
  uStack_170 = auVar15._8_4_;
  uStack_16c = auVar15._12_2_;
  uStack_16a = auVar15._14_2_;
  local_168 = auVar13._0_2_;
  uStack_166 = auVar13._2_2_;
  uStack_164 = auVar13._4_6_;
  sStack_15e = auVar13._10_2_;
  uStack_15c = auVar13._12_4_;
  pfVar9 = local_1b8;
  FUN_144afeb32(pfVar9);
  local_1e8[0] = local_1b8[0];
  local_1e8[1] = local_1b8[1];
  local_1e8[2] = local_1b8[2];
  local_1e8[3] = local_1a8;
  local_1d8 = local_1a4;
  local_1d4 = local_1a0;
  local_1d0 = local_198;
  fStack_1cc = local_194;
  fStack_1c8 = local_190;
  uStack_1c4 = local_188;
  uStack_1c0 = local_184;
  local_1bc = local_180;
  if (((((local_1b8[0] != 0.0) || (NAN(local_1b8[0]))) || (local_1b8[1] != 0.0)) ||
      (((NAN(local_1b8[1]) || (local_1b8[2] != 0.0)) || (NAN(local_1b8[2]))))) &&
     (((local_1a8 != 0.0 || (NAN(local_1a8))) ||
      ((local_1a4 != 0.0 || (((NAN(local_1a4) || (local_1a0 != 0.0)) || (NAN(local_1a0))))))))) {
    fVar14 = local_1b8[2] * local_1b8[2] + local_1b8[0] * local_1b8[0] + local_1b8[1] * local_1b8[1]
    ;
    fVar19 = (local_1a0 * local_1b8[2] + local_1a8 * local_1b8[0] + local_1b8[1] * local_1a4) /
             fVar14;
    local_1e8[3] = local_1a8 - fVar19 * local_1b8[0];
    local_1d8 = local_1a4 - local_1b8[1] * fVar19;
    local_1d4 = local_1a0 - local_1b8[2] * fVar19;
    fVar14 = (local_190 * local_1b8[2] + local_198 * local_1b8[0] + local_1b8[1] * local_194) /
             fVar14;
    local_198 = local_198 - fVar14 * local_1b8[0];
    local_194 = local_194 - local_1b8[1] * fVar14;
    local_190 = local_190 - local_1b8[2] * fVar14;
    fVar14 = (local_190 * local_1d4 + local_198 * local_1e8[3] + local_1d8 * local_194) /
             (local_1d4 * local_1d4 + local_1e8[3] * local_1e8[3] + local_1d8 * local_1d8);
    local_1d0 = local_198 - fVar14 * local_1e8[3];
    fStack_1cc = local_194 - local_1d8 * fVar14;
    fStack_1c8 = local_190 - local_1d4 * fVar14;
  }
  fVar14 = (local_1b8[1] * local_1d4 - local_1d8 * local_1b8[2]) * local_1d0 +
           (local_1b8[0] * (local_1d8 * fStack_1c8 - fStack_1cc * local_1d4) -
           (fStack_1c8 * local_1b8[1] - fStack_1cc * local_1b8[2]) * local_1e8[3]);
  uVar7 = ((uint)(fVar14 < 0.0) | param_4 & 0xffe) << 0x14;
  uVar8 = uVar7 | 0x40000000;
  if (param_10 == '\0') {
    uVar7 = uVar8;
  }
  if (fVar14 != 0.0) {
    uVar8 = uVar7;
  }
  if (NAN(fVar14)) {
    uVar8 = uVar7;
  }
  bVar1 = *(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf);
  *param_1 = uVar8 | param_2;
  param_1[1] = param_6 << 0x18 | param_3;
  param_1[2] = param_5;
  param_1[3] = param_7;
  if ((bVar1 & 0x40) == 0) {
    auVar16 = insertps(ZEXT416(local_188),ZEXT416(local_184),0x10);
    uVar12 = auVar16._0_8_;
    param_1[4] = (uint)local_1b8[0];
    param_1[5] = (uint)local_1e8[3];
    param_1[6] = (uint)local_1d0;
    param_1[7] = auVar16._0_4_;
    param_1[8] = (uint)local_1b8[1];
    param_1[9] = (uint)local_1d8;
    param_1[10] = (uint)fStack_1cc;
    param_1[0xb] = auVar16._4_4_;
    param_1[0xc] = (uint)local_1b8[2];
    param_1[0xd] = (uint)local_1d4;
    param_1[0xe] = (uint)fStack_1c8;
    param_1[0xf] = local_180;
  }
  else {
    uStack_170 = local_180;
    local_178 = CONCAT44(local_184,local_188);
    lVar6 = 0;
    do {
      *(undefined8 *)(local_138 + lVar6 * 4) = *(undefined8 *)(local_1e8 + lVar6);
      *(float *)(local_138 + lVar6 * 4 + 8) = local_1e8[lVar6 + 2];
      fVar14 = *(float *)(local_138 + lVar6 * 4);
      fVar19 = *(float *)(local_138 + lVar6 * 4 + 4);
      fVar11 = *(float *)(local_138 + lVar6 * 4 + 8);
      fVar17 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar19 * fVar19);
      *pfVar9 = fVar17;
      fVar17 = (float)(~-(uint)(fVar17 != 0.0) & 0x3f800000 |
                      (uint)(1.0 / fVar17) & -(uint)(fVar17 != 0.0));
      *(float *)(local_138 + lVar6 * 4) = fVar14 * fVar17;
      *(float *)(local_138 + lVar6 * 4 + 4) = fVar19 * fVar17;
      *(float *)(local_138 + lVar6 * 4 + 8) = fVar17 * fVar11;
      lVar6 = lVar6 + 3;
      pfVar9 = pfVar9 + 1;
    } while (lVar6 != 9);
    fVar14 = fStack_11c;
    fVar19 = (float)local_118._0_4_;
    fVar11 = fStack_120;
    if ((float)local_118._0_4_ < 0.0) {
      local_1b8[2] = -local_1b8[2];
      fVar14 = -fStack_11c;
      fVar19 = -(float)local_118._0_4_;
      fVar11 = -fStack_120;
    }
    fVar18 = 1.0 / (ABS(fVar19) + ABS(fVar14) + ABS(fVar11));
    fVar17 = 1.0 / (fVar19 + 1.0);
    fVar22 = fVar14 * -fVar11 * fVar17;
    fVar21 = -fVar11 * afStack_134[1];
    fVar23 = (1.0 - fVar11 * fVar11 * fVar17) * (float)local_138 + afStack_134[0] * fVar22 + fVar21;
    fVar22 = (fVar22 * (float)local_138 + (1.0 - fVar14 * fVar14 * fVar17) * afStack_134[0]) -
             afStack_134[1] * fVar14;
    fVar20 = ABS(fVar22);
    fVar17 = fVar23;
    if (fVar20 <= ABS(fVar23)) {
      fVar17 = fVar22;
      fVar22 = fVar23;
    }
    fVar22 = *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar22 < 0.0) * 4);
    local_1b8[0] = local_1b8[0] * fVar22;
    uVar7 = -(uint)((fVar11 * afStack_134[0] - fVar14 * (float)local_138) * (float)local_128._4_4_ +
                    (afStack_134[1] * fVar14 - afStack_134[0] * fVar19) * afStack_134[2] +
                    ((float)local_138 * fVar19 + fVar21) * (float)local_128._0_4_ < 0.0);
    local_1b8[1] = (float)(uVar7 & (uint)-fVar22 | ~uVar7 & (uint)fVar22) * local_1b8[1];
    fVar19 = fVar18 * (fVar14 + fVar11) * 32767.0;
    uVar3 = (ushort)((uint)(int)ROUND(fVar19 + fVar19 + 0.5) >> 1);
    uStack_16c = uVar3 ^ 0x8000;
    fVar14 = (fVar11 - fVar14) * fVar18 * 32767.0;
    uVar4 = (ushort)((uint)(int)ROUND(fVar14 + fVar14 + 0.5) >> 1);
    uStack_16a = uVar4 ^ 0x8000;
    fVar14 = fVar17 * fVar22 * 16383.0 * 1.4142135;
    uVar5 = (ushort)(ABS(fVar23) < fVar20) << 0xf |
            (ushort)((uint)(int)ROUND(fVar14 + fVar14 + 0.5) >> 1) & 0x7fff;
    local_168 = uVar5 ^ 0x4000;
    fVar19 = ABS(local_1b8[1]);
    fVar14 = ABS(local_1b8[0]);
    if (fVar14 <= fVar19) {
      fVar14 = fVar19;
    }
    if (fVar14 <= ABS(local_1b8[2])) {
      fVar14 = ABS(local_1b8[2]);
    }
    fVar19 = (float)(0x6000000 - ((uint)fVar14 & 0x7f800000) & 0x7f800000);
    bVar10 = ((int)ROUND(fVar14 * fVar19 + fVar14 * fVar19 + 0.5) & 0xfffffffeU) == 0x10000;
    sStack_15e = bVar10 + 1 + (ushort)((uint)fVar14 >> 0x17);
    if (bVar10) {
      fVar19 = fVar19 * 0.5;
    }
    lVar6 = 0;
    do {
      fVar14 = local_1b8[lVar6] * fVar19 + local_1b8[lVar6] * fVar19 + 0.5;
      uVar12 = (ulonglong)(uint)fVar14;
      *(ushort *)((longlong)&uStack_164 + lVar6 * 2) =
           (ushort)((uint)(int)ROUND(fVar14) >> 1) ^ 0x8000;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    *(ulonglong *)(param_1 + 4) =
         CONCAT26(uStack_166,CONCAT24(uVar5,CONCAT22(uVar4,uVar3))) ^ 0x400080008000;
    *(ulonglong *)(param_1 + 6) = CONCAT26(sStack_15e,uStack_164);
    *(undefined8 *)(param_1 + 8) = local_178;
    param_1[10] = uStack_170;
    param_1[0xb] = 0x3f800000;
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_208,uVar12);
  }
  return;
}



// FUNCTION 147b05a14 FUN_147b05a14 body=195 status=ok
// SIG undefined FUN_147b05a14(void)

void FUN_147b05a14(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_1400021e4(param_2,local_48);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar4 = 0;
      do {
        bVar3 = FUN_14686ea50(*(undefined8 *)(lVar2 + 0x10 + lVar4),local_48);
        *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | bVar3;
        lVar4 = lVar4 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b05ad8 FUN_147b05ad8 body=173 status=ok
// SIG undefined FUN_147b05ad8(void)

void FUN_147b05ad8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,local_48);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      bVar3 = FUN_14686ee30(*(undefined8 *)(lVar2 + 0x10 + lVar4),local_48);
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | bVar3;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b05b86 FUN_147b05b86 body=232 status=ok
// SIG undefined FUN_147b05b86(void)

void FUN_147b05b86(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,local_50);
  FUN_14064b666(local_60,param_3);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      bVar3 = FUN_14686ee30(*(undefined8 *)(lVar2 + 0x10 + lVar4),local_60);
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | bVar3;
      bVar3 = FUN_14686ea50(*(undefined8 *)(lVar2 + 0x10 + lVar4),local_50);
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | bVar3;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b05c70 FUN_147b05c70 body=1213 status=ok
// SIG undefined FUN_147b05c70(void)

/* WARNING: Removing unreachable block (ram,0x000147b05dae) */

void FUN_147b05c70(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_238 [32];
  int local_218;
  undefined8 *local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong local_1f0 [2];
  undefined2 local_1e0 [4];
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b0;
  undefined2 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_200 = DAT_14c9485b8;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_208 = param_3;
  local_1f8 = param_1;
  local_1b0 = param_2;
  FUN_1412fac7e(&local_198,0,0,0);
  lVar10 = local_198;
  lVar6 = (longlong)(int)uStack_190;
  uVar7 = 0;
  if (lVar6 != 0) {
    lVar9 = 0;
    puVar1 = local_1a0;
    do {
      local_1a0 = puVar1;
      iVar11 = *(int *)(lVar10 + 8 + lVar9);
      local_218 = (iVar11 == 0) + 5;
      local_1a8 = (undefined2 *)0x0;
      FUN_14125bce8(&local_1a8,*(undefined8 *)(lVar10 + lVar9),iVar11,0);
      FUN_1401aebe8(&local_1a8,&DAT_149e5ef80,4);
      uVar5 = uStack_1c0;
      lVar8 = (longlong)(int)uStack_1c0;
      uVar3 = (int)uStack_1c0 + 1;
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar3);
      if (uStack_1c0._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_1c8,uVar5 & 0xffffffff);
      }
      lVar8 = lVar8 * 0x10;
      *(undefined8 *)(local_1c8 + lVar8) = 0;
      *(undefined2 **)(local_1c8 + lVar8) = local_1a8;
      *(int *)(local_1c8 + 8 + lVar8) = (int)local_1a0;
      *(undefined4 *)(local_1c8 + 0xc + lVar8) = local_1a0._4_4_;
      local_1a0 = (undefined8 *)0x0;
      puVar1 = local_1a0;
      local_1a0 = (undefined8 *)0x0;
      local_1a8 = (undefined2 *)0x0;
      lVar9 = lVar9 + 0x10;
    } while (lVar6 * 0x10 != lVar9);
    uVar7 = (int)uStack_190;
  }
  FUN_1447a1747(local_198,uVar7);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  lVar10 = local_1c8;
  local_128 = 0;
  local_120 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_57 = 0;
  local_54 = 0;
  local_58 = 1;
  lVar6 = (longlong)(int)uStack_1c0;
  iVar11 = 0;
  uVar3 = 0;
  if (lVar6 != 0) {
    lVar9 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar10 + 8 + lVar9) != 0) {
        puVar4 = *(undefined2 **)(lVar10 + lVar9);
      }
      FUN_1446f470e(&local_1a8,puVar4,1);
      uVar5 = uStack_180;
      lVar8 = (longlong)(int)uStack_180;
      uVar3 = (int)uStack_180 + 1;
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar3);
      if (uStack_180._4_4_ < uVar3) {
        FUN_1446f84a2(&local_188,uVar5 & 0xffffffff);
      }
      *(undefined2 **)(local_188 + lVar8 * 8) = local_1a8;
      lVar9 = lVar9 + 0x10;
    } while (lVar6 * 0x10 != lVar9);
    iVar11 = (int)uStack_150;
    uVar3 = uStack_150._4_4_;
  }
  local_57._1_1_ = 1;
  uStack_150 = CONCAT44(uStack_150._4_4_,iVar11 + 1U);
  if (uVar3 < iVar11 + 1U) {
    FUN_1401d5364(&local_158,iVar11);
  }
  uVar2 = local_208[1];
  puVar1 = (undefined8 *)(local_158 + (longlong)iVar11 * 0x10);
  *puVar1 = *local_208;
  puVar1[1] = uVar2;
  local_57 = (ushort)local_57._1_1_ << 8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  (**(code **)(*local_200 + 0x50))(local_200,&local_198,&local_1d8,1);
  if ((longlong)(int)uStack_1d0 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = local_1f8 + 0x60;
    lVar9 = (longlong)(int)uStack_1d0 * 0x70;
    lVar10 = local_1d8;
    do {
      FUN_1400021e4(lVar10,local_1f0);
      FUN_146271a9e(&local_1a8,local_1f0);
      puVar4 = &DAT_149dfb77a;
      if ((int)local_1a0 != 0) {
        puVar4 = local_1a8;
      }
      FUN_1446f470e(local_1e0,puVar4,1);
      if (local_1a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1f0[0] != 0) {
        FUN_1400020a8();
      }
      local_1a8 = local_1e0;
      local_1a0 = &local_1b0;
      FUN_140906722(lVar6,local_1f0,&local_1a8,0);
      lVar10 = lVar10 + 0x70;
      lVar9 = lVar9 + -0x70;
    } while (lVar9 != 0);
    uVar5 = uStack_1d0 & 0xffffffff;
  }
  FUN_140195631(local_1d8,uVar5);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_198);
  FUN_1447a1747(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b06132 FUN_147b06132 body=92 status=ok
// SIG undefined FUN_147b06132(void)

void FUN_147b06132(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,uVar1);
  FUN_1467cdd48(*(undefined8 *)(param_1 + 0x28),uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b06190 FUN_147b06190 body=35 status=ok
// SIG undefined FUN_147b06190(void)

void FUN_147b06190(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_21();
  FUN_1467cdd48(*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



// FUNCTION 147b061b4 FUN_147b061b4 body=154 status=ok
// SIG undefined FUN_147b061b4(void)

void FUN_147b061b4(longlong param_1,longlong param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_147b4b1f2((longlong *)(param_1 + 0x90),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000147b06226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}


