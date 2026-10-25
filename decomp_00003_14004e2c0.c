// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14004e2c0 FUN_14004e2c0 body=331 status=ok
// SIG undefined FUN_14004e2c0(void)

void FUN_14004e2c0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 6;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14004e32d;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
      }
    }
LAB_14004e32d:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 6)) {
      uVar5 = uVar3 / 6 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,6,2);
  }
  return;
}



// FUNCTION 14004e40b FUN_14004e40b body=518 status=ok
// SIG undefined FUN_14004e40b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004e40b(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar22 [16];
  
  auVar7 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar8 = (ulonglong)param_2 - 1;
    auVar10._8_4_ = (int)lVar8;
    auVar10._0_8_ = lVar8;
    auVar10._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    uVar9 = 0;
    auVar12 = pmovsxbq(in_XMM1,0x706);
    auVar13 = pmovsxbq(in_XMM2,0x504);
    auVar14 = pmovsxbq(in_XMM3,0x302);
    auVar15 = pmovsxbq(in_XMM4,0x100);
    auVar10 = auVar10 ^ _DAT_149931e80;
    do {
      auVar16._8_4_ = (int)uVar9;
      auVar16._0_8_ = uVar9;
      auVar16._12_4_ = (int)(uVar9 >> 0x20);
      auVar18 = (auVar16 | auVar15) ^ auVar7;
      lVar8 = auVar10._0_8_;
      auVar19._0_8_ = -(ulonglong)(lVar8 < auVar18._0_8_);
      lVar11 = auVar10._8_8_;
      auVar19._8_8_ = -(ulonglong)(lVar11 < auVar18._8_8_);
      auVar22 = pshuflw(unaff_XMM9,auVar19,0xe8);
      auVar18._8_4_ = 0xffffffff;
      auVar18._0_8_ = 0xffffffffffffffff;
      auVar18._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar22 ^ auVar18,auVar22 ^ auVar18);
      if ((auVar18._0_4_ & 1) != 0) {
        *(undefined2 *)(param_1 + 6 + uVar9 * 8) = 0;
      }
      auVar19 = packssdw(auVar19,auVar19);
      auVar22._8_4_ = 0xffffffff;
      auVar22._0_8_ = 0xffffffffffffffff;
      auVar22._12_4_ = 0xffffffff;
      auVar19 = packssdw(auVar19 ^ auVar22,auVar19 ^ auVar22);
      if ((auVar19[2] & 1) != 0) {
        *(undefined2 *)(param_1 + 0xe + uVar9 * 8) = 0;
      }
      auVar19 = (auVar16 | auVar14) ^ auVar7;
      auVar20._0_8_ = -(ulonglong)(lVar8 < auVar19._0_8_);
      auVar20._8_8_ = -(ulonglong)(lVar11 < auVar19._8_8_);
      auVar18 = packssdw(auVar18,auVar20);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar1,auVar18 ^ auVar1);
      if ((auVar18[4] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x16 + uVar9 * 8) = 0;
      }
      auVar19 = pshufhw(auVar20,auVar20,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar19 = packssdw(auVar19 ^ auVar2,auVar19 ^ auVar2);
      if ((auVar19[6] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x1e + uVar9 * 8) = 0;
      }
      auVar19 = (auVar16 | auVar13) ^ auVar7;
      auVar21._0_8_ = -(ulonglong)(lVar8 < auVar19._0_8_);
      auVar21._8_8_ = -(ulonglong)(lVar11 < auVar19._8_8_);
      auVar18 = pshuflw(auVar18,auVar21,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      unaff_XMM9 = packssdw(auVar18 ^ auVar3,auVar18 ^ auVar3);
      if ((unaff_XMM9[8] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x26 + uVar9 * 8) = 0;
      }
      auVar18 = packssdw(auVar21,auVar21);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar4,auVar18 ^ auVar4);
      if ((auVar18[10] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x2e + uVar9 * 8) = 0;
      }
      auVar16 = (auVar16 | auVar12) ^ auVar7;
      auVar17._0_8_ = -(ulonglong)(lVar8 < auVar16._0_8_);
      auVar17._8_8_ = -(ulonglong)(lVar11 < auVar16._8_8_);
      auVar18 = packssdw(auVar18,auVar17);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar5,auVar18 ^ auVar5);
      if ((auVar18[0xc] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x36 + uVar9 * 8) = 0;
      }
      auVar18 = pshufhw(auVar17,auVar17,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar18 = packssdw(auVar18 ^ auVar6,auVar18 ^ auVar6);
      if ((auVar18[0xe] & 1) != 0) {
        *(undefined2 *)(param_1 + 0x3e + uVar9 * 8) = 0;
      }
      uVar9 = uVar9 + 8;
    } while (((ulonglong)param_2 + 7 & 0xfffffffffffffff8) != uVar9);
  }
  return;
}



// FUNCTION 14004e612 FUN_14004e612 body=353 status=ok
// SIG undefined FUN_14004e612(void)

void FUN_14004e612(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14004e697;
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
LAB_14004e697:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14004e774 FUN_14004e774 body=3715 status=ok
// SIG undefined FUN_14004e774(void)

undefined8 * FUN_14004e774(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  code *pcVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [36];
  undefined2 local_34;
  short local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  if (param_2 == (longlong *)0x0) goto LAB_14004f289;
  uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
  *(undefined4 *)param_1 = uVar6;
  (**(code **)(*param_2 + 0x288))(param_2,&local_34);
  *(undefined2 *)((longlong)param_1 + 4) = local_34;
  uVar6 = (**(code **)(*param_2 + 0x270))(param_2);
  *(undefined4 *)(param_1 + 1) = uVar6;
  uVar2 = (**(code **)(*param_2 + 0xd0))(param_2);
  *(undefined1 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(char *)((longlong)param_1 + 0x14) = (char)param_2[4];
  uVar5 = (**(code **)(*param_2 + 0x488))(param_2);
  *(undefined2 *)((longlong)param_1 + 0x16) = uVar5;
  uVar6 = (**(code **)(*param_2 + 0x410))(param_2);
  *(undefined4 *)(param_1 + 3) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x408))(param_2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x440))(param_2);
  *(undefined4 *)(param_1 + 4) = uVar6;
  bVar3 = (**(code **)(*param_2 + 0x400))(param_2);
  param_1[5] = param_1[5] & 0xfffffffffffffffe | (ulonglong)bVar3;
  bVar3 = (**(code **)(*param_2 + 0x110))(param_2);
  param_1[5] = (param_1[5] & 0xfffffffffffffffd) + (ulonglong)bVar3 * 2;
  bVar3 = (**(code **)(*param_2 + 600))(param_2);
  param_1[5] = (param_1[5] & 0xfffffffffffffffb) + (ulonglong)bVar3 * 4;
  bVar3 = (**(code **)(*param_2 + 0x260))(param_2);
  param_1[5] = (param_1[5] & 0xfffffffffffffff7) + (ulonglong)bVar3 * 8;
  bVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  param_1[5] = param_1[5] & 0xffffffffffffffef | (ulonglong)bVar3 << 4;
  bVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  param_1[5] = param_1[5] & 0xffffffffffffffdf | (ulonglong)bVar3 << 5;
  bVar3 = (**(code **)(*param_2 + 0x2b0))(param_2);
  param_1[5] = param_1[5] & 0xffffffffffffffbf | (ulonglong)bVar3 << 6;
  pcVar10 = *(code **)(*param_2 + 0x270);
  plVar11 = param_2;
  if (pcVar10 == (code *)&LAB_1447f82f4) {
    plVar11 = (longlong *)param_2[9];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)param_2[8];
      pcVar10 = *(code **)(*plVar11 + 0x408);
      if (pcVar10 != (code *)&LAB_14470b702) goto LAB_14004f419;
      bVar3 = *(byte *)((longlong)plVar11 + 0x129);
      if (bVar3 == 1) {
        bVar3 = ~*(byte *)((longlong)plVar11 + 0x1d6) & 1;
      }
      uVar7 = (uint)bVar3;
    }
    else {
      pcVar10 = *(code **)(*plVar11 + 0x408);
      if (pcVar10 != (code *)&LAB_14497e176) goto LAB_14004f419;
      uVar7 = (uint)*(byte *)(plVar11 + 0x2b);
    }
  }
  else {
LAB_14004f419:
    uVar7 = (*pcVar10)(plVar11);
  }
  pcVar10 = *(code **)(*param_2 + 0x288);
  plVar11 = param_2;
  if (pcVar10 == FUN_144927896) {
    plVar11 = (longlong *)param_2[9];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)param_2[8];
      pcVar10 = *(code **)(*plVar11 + 0x410);
      if (pcVar10 != (code *)&LAB_144b24e3e) goto LAB_14004f5c8;
      if (*(byte *)(plVar11 + 0x25) == 0) {
LAB_14004f310:
        local_32 = *(short *)((longlong)plVar11 + 0x17a);
      }
      else {
        uVar12 = (uint)*(byte *)(plVar11 + 0x25);
        if (uVar12 < 7) {
          local_32 = 2;
          if ((0x42U >> (uVar12 & 0x1f) & 1) != 0) goto LAB_14004e9ad;
          if (((0x34U >> (uVar12 & 0x1f) & 1) == 0) && (uVar12 == 3)) goto LAB_14004f310;
        }
        local_32 = 1;
      }
    }
    else {
      pcVar10 = *(code **)(*plVar11 + 0x410);
      if (pcVar10 != (code *)&LAB_14497e114) goto LAB_14004f5c8;
      local_32 = (short)plVar11[0x2c];
    }
  }
  else {
LAB_14004f5c8:
    (*pcVar10)(plVar11,&local_32);
  }
LAB_14004e9ad:
  puVar1 = param_1 + 5;
  if (local_32 == 0x400) goto LAB_14004f5e6;
  if (uVar7 < 2) {
    uVar13 = *puVar1;
LAB_14004e9cb:
    uVar9 = 0x80;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf1e74) && (FUN_144b3d300(&DAT_14caf1e74), DAT_14caf1e74 == -1)) {
      DAT_14caf1e71 = FUN_14473b0f0();
      _Init_thread_footer(&DAT_14caf1e74);
    }
    if (DAT_14caf1e71 == '\x01') {
      if ((uVar7 == 2) || (uVar7 == 7)) goto LAB_14004f357;
LAB_14004f5e6:
      uVar13 = *puVar1;
    }
    else {
      if (uVar7 != 2) goto LAB_14004f5e6;
LAB_14004f357:
      if (*(code **)(*param_2 + 0x2a8) == (code *)&LAB_140690b5e) {
        plVar11 = (longlong *)param_2[9];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)param_2[8];
        }
        cVar4 = (**(code **)(*plVar11 + 0x400))();
      }
      else {
        cVar4 = (**(code **)(*param_2 + 0x2a8))(param_2);
      }
      uVar13 = *puVar1;
      if (cVar4 != '\0') goto LAB_14004e9cb;
    }
    uVar9 = 0;
  }
  *puVar1 = uVar13 & 0xffffffffffffff7f | uVar9;
  uVar7 = (**(code **)(*param_2 + 0x178))(param_2);
  uVar13 = 0;
  cVar4 = FUN_1447e4184(param_2,0,uVar7 ^ 1);
  if (cVar4 != '\0') {
    bVar3 = (**(code **)(*param_2 + 200))(param_2);
    uVar13 = (ulonglong)(bVar3 ^ 1) << 8;
  }
  *puVar1 = *puVar1 & 0xfffffffffffffeff | uVar13;
  uVar7 = (**(code **)(*param_2 + 0x178))(param_2);
  bVar3 = FUN_1447e4184(param_2,1,uVar7 ^ 1);
  *puVar1 = *puVar1 & 0xfffffffffffffdff | (ulonglong)bVar3 << 9;
  cVar4 = FUN_14473b0f0();
  if (cVar4 == '\0') {
    bVar3 = (**(code **)(*param_2 + 0x398))();
    *puVar1 = *puVar1 & 0xffffffffffffefff | (ulonglong)bVar3 << 0xc;
    bVar3 = (**(code **)(*param_2 + 0x3a0))(param_2);
    *puVar1 = *puVar1 & 0xffffffffffffdfff | (ulonglong)bVar3 << 0xd;
    bVar3 = (**(code **)(*param_2 + 0x3a8))(param_2);
    *puVar1 = *puVar1 & 0xffffffffffffbfff | (ulonglong)bVar3 << 0xe;
    bVar3 = (**(code **)(*param_2 + 0x3b0))(param_2);
    *puVar1 = *puVar1 & 0xffffffffffff7fff | (ulonglong)bVar3 << 0xf;
    bVar3 = (**(code **)(*param_2 + 0x3b8))(param_2);
    *puVar1 = *puVar1 & 0xfffffffffffeffff | (ulonglong)bVar3 << 0x10;
    bVar3 = (**(code **)(*param_2 + 0x3c0))(param_2);
    *puVar1 = *puVar1 & 0xfffffffffffdffff | (ulonglong)bVar3 << 0x11;
    bVar3 = (**(code **)(*param_2 + 0x3d0))(param_2);
    *puVar1 = *puVar1 & 0xfffffffffffbffff | (ulonglong)bVar3 << 0x12;
    bVar3 = (**(code **)(*param_2 + 1000))(param_2);
    *puVar1 = *puVar1 & 0xfffffffffff7ffff | (ulonglong)bVar3 << 0x13;
    bVar3 = (**(code **)(*param_2 + 0x3c8))(param_2);
  }
  else {
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,3);
    *puVar1 = *puVar1 & 0xfffffffffffffbff | (ulonglong)bVar3 << 10;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,4);
    *puVar1 = *puVar1 & 0xfffffffffffff7ff | (ulonglong)bVar3 << 0xb;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,5);
    *puVar1 = *puVar1 & 0xffffffffffffefff | (ulonglong)bVar3 << 0xc;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,10);
    *puVar1 = *puVar1 & 0xffffffffffffdfff | (ulonglong)bVar3 << 0xd;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,8);
    *puVar1 = *puVar1 & 0xffffffffffffbfff | (ulonglong)bVar3 << 0xe;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,7);
    *puVar1 = *puVar1 & 0xffffffffffff7fff | (ulonglong)bVar3 << 0xf;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,6);
    *puVar1 = *puVar1 & 0xfffffffffffeffff | (ulonglong)bVar3 << 0x10;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,0);
    *puVar1 = *puVar1 & 0xfffffffffffdffff | (ulonglong)bVar3 << 0x11;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,0x12);
    *puVar1 = *puVar1 & 0xfffffffffffbffff | (ulonglong)bVar3 << 0x12;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,0x21);
    *puVar1 = *puVar1 & 0xfffffffffff7ffff | (ulonglong)bVar3 << 0x13;
    bVar3 = (**(code **)(*param_2 + 0x3d8))(param_2,9);
  }
  *puVar1 = *puVar1 & 0xffffffffffefffff | (ulonglong)bVar3 << 0x14;
  bVar3 = (**(code **)(*param_2 + 0x380))(param_2);
  *puVar1 = *puVar1 & 0xffffffffff7fffff | (ulonglong)bVar3 << 0x17;
  bVar3 = (**(code **)(*param_2 + 0x388))(param_2);
  *puVar1 = *puVar1 & 0xfffffffffeffffff | (ulonglong)bVar3 << 0x18;
  bVar3 = (**(code **)(*param_2 + 0x478))(param_2);
  *puVar1 = *puVar1 & 0xffffffffffdfffff | (ulonglong)bVar3 << 0x15;
  bVar3 = (**(code **)(*param_2 + 0x3e0))(param_2);
  *puVar1 = *puVar1 & 0xffffffffffbfffff | (ulonglong)bVar3 << 0x16;
  cVar4 = (**(code **)(*param_2 + 0x380))(param_2);
  uVar13 = 0x2000000;
  if (((cVar4 == '\0') && (cVar4 = (**(code **)(*param_2 + 0x388))(param_2), cVar4 == '\0')) &&
     (cVar4 = (**(code **)(*param_2 + 0x3e0))(param_2), cVar4 == '\0')) {
    bVar3 = (**(code **)(*param_2 + 0x468))(param_2);
    uVar13 = (ulonglong)((uint)bVar3 << 0x19);
  }
  *puVar1 = *puVar1 & 0xfffffffffdffffff | uVar13;
  bVar3 = (**(code **)(*param_2 + 0x160))(param_2);
  *puVar1 = *puVar1 & 0xfffffffffbffffff | (ulonglong)((uint)bVar3 << 0x1a);
  bVar3 = (**(code **)(*param_2 + 0x130))(param_2);
  *puVar1 = *puVar1 & 0xfffffffff7ffffff | (ulonglong)((uint)bVar3 << 0x1b);
  bVar3 = (**(code **)(*param_2 + 0x140))(param_2);
  *puVar1 = *puVar1 & 0xffffffffefffffff | (ulonglong)((uint)bVar3 << 0x1c);
  bVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  *puVar1 = *puVar1 & 0xffffffffdfffffff | (ulonglong)((uint)bVar3 << 0x1d);
  bVar3 = (**(code **)(*param_2 + 0x158))(param_2);
  *puVar1 = *puVar1 & 0xffffffffbfffffff | (ulonglong)((uint)bVar3 << 0x1e);
  bVar3 = (**(code **)(*param_2 + 0x150))(param_2);
  *puVar1 = *puVar1 & 0xffffffff7fffffff | (ulonglong)((uint)bVar3 << 0x1f);
  bVar3 = (**(code **)(*param_2 + 0x120))(param_2);
  *puVar1 = *puVar1 & 0xfffffffeffffffff | (ulonglong)bVar3 << 0x20;
  bVar3 = (**(code **)(*param_2 + 0x138))(param_2);
  *puVar1 = *puVar1 & 0xfffffffdffffffff | (ulonglong)bVar3 << 0x21;
  bVar3 = (**(code **)(*param_2 + 0x170))(param_2);
  *puVar1 = *puVar1 & 0xfffffffbffffffff | (ulonglong)bVar3 << 0x22;
  bVar3 = (**(code **)(*param_2 + 0x118))(param_2);
  *puVar1 = *puVar1 & 0xfffffff7ffffffff | (ulonglong)bVar3 << 0x23;
  bVar3 = (**(code **)(*param_2 + 0x168))(param_2);
  *puVar1 = *puVar1 & 0xffffffefffffffff | (ulonglong)bVar3 << 0x24;
  bVar3 = (**(code **)(*param_2 + 0x188))(param_2);
  *puVar1 = *puVar1 & 0xffffffdfffffffff | (ulonglong)bVar3 << 0x25;
  bVar3 = (**(code **)(*param_2 + 0x1c8))(param_2);
  *puVar1 = *puVar1 & 0xffffffbfffffffff | (ulonglong)bVar3 << 0x26;
  bVar3 = (**(code **)(*param_2 + 0x180))(param_2);
  *puVar1 = *puVar1 & 0xffffff7fffffffff | (ulonglong)bVar3 << 0x27;
  bVar3 = (**(code **)(*param_2 + 0x1d8))(param_2);
  *puVar1 = *puVar1 & 0xfffffeffffffffff | (ulonglong)bVar3 << 0x28;
  bVar3 = (**(code **)(*param_2 + 0x1d0))(param_2);
  *puVar1 = *puVar1 & 0xfffffdffffffffff | (ulonglong)bVar3 << 0x29;
  bVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  *puVar1 = *puVar1 & 0xfffffbffffffffff | (ulonglong)bVar3 << 0x2a;
  bVar3 = (**(code **)(*param_2 + 0x50))(param_2);
  *puVar1 = *puVar1 & 0xfffff7ffffffffff | (ulonglong)bVar3 << 0x2b;
  bVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  *puVar1 = *puVar1 & 0xffffefffffffffff | (ulonglong)bVar3 << 0x2c;
  bVar3 = (**(code **)(*param_2 + 0x178))(param_2);
  *puVar1 = *puVar1 & 0xffffdfffffffffff | (ulonglong)bVar3 << 0x2d;
  bVar3 = (**(code **)(*param_2 + 0x448))(param_2);
  *puVar1 = *puVar1 & 0xffffbfffffffffff | (ulonglong)bVar3 << 0x2e;
  bVar3 = (**(code **)(*param_2 + 0x450))(param_2);
  *puVar1 = *puVar1 & 0xffff7fffffffffff | (ulonglong)bVar3 << 0x2f;
  bVar3 = (**(code **)(*param_2 + 0x458))(param_2);
  *puVar1 = *puVar1 & 0xfffeffffffffffff | (ulonglong)bVar3 << 0x30;
  bVar3 = (**(code **)(*param_2 + 0x460))(param_2);
  *puVar1 = *puVar1 & 0xfffdffffffffffff | (ulonglong)bVar3 << 0x31;
  bVar3 = (**(code **)(*param_2 + 0x1e0))(param_2);
  *puVar1 = *puVar1 & 0xfffbffffffffffff | (ulonglong)bVar3 << 0x32;
  bVar3 = (**(code **)(*param_2 + 0x1e8))(param_2);
  *puVar1 = *puVar1 & 0xfff7ffffffffffff | (ulonglong)bVar3 << 0x33;
  bVar3 = (**(code **)(*param_2 + 0x1f0))(param_2);
  *puVar1 = *puVar1 & 0xffefffffffffffff | (ulonglong)bVar3 << 0x34;
  bVar3 = (**(code **)(*param_2 + 400))(param_2);
  *puVar1 = *puVar1 & 0xffdfffffffffffff | (ulonglong)bVar3 << 0x35;
  bVar3 = (**(code **)(*param_2 + 0x430))(param_2);
  *puVar1 = *puVar1 & 0xffbfffffffffffff | (ulonglong)bVar3 << 0x36;
  iVar8 = (**(code **)(*param_2 + 0x298))(param_2);
  uVar13 = 0x80000000000000;
  if (iVar8 != 4) {
    iVar8 = (**(code **)(*param_2 + 0x298))();
    if (iVar8 != 5) {
      uVar13 = 0;
    }
  }
  param_1[5] = param_1[5] & 0xff7fffffffffffff | uVar13;
  bVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  param_1[5] = param_1[5] & 0xfeffffffffffffff | (ulonglong)bVar3 << 0x38;
  bVar3 = (**(code **)(*param_2 + 0x480))(param_2);
  param_1[5] = param_1[5] & 0xfdffffffffffffff | (ulonglong)bVar3 << 0x39;
  bVar3 = (**(code **)(*param_2 + 0x198))(param_2);
  param_1[5] = param_1[5] & 0xfbffffffffffffff | (ulonglong)bVar3 << 0x3a;
  bVar3 = (**(code **)(*param_2 + 0x1a0))(param_2);
  param_1[5] = param_1[5] & 0xf7ffffffffffffff | (ulonglong)bVar3 << 0x3b;
  bVar3 = (**(code **)(*param_2 + 0x328))(param_2);
  param_1[5] = param_1[5] & 0xefffffffffffffff | (ulonglong)bVar3 << 0x3c;
  bVar3 = (**(code **)(*param_2 + 0x358))(param_2);
  param_1[5] = param_1[5] & 0xdfffffffffffffff | (ulonglong)bVar3 << 0x3d;
  bVar3 = (**(code **)(*param_2 + 0x428))(param_2);
  param_1[5] = param_1[5] & 0xbfffffffffffffff | (ulonglong)bVar3 << 0x3e;
  cVar4 = (**(code **)(*param_2 + 0x4a0))(param_2);
  uVar13 = 0;
  if (cVar4 != '\0') {
    uVar13 = 0x8000000000000000;
  }
  param_1[5] = param_1[5] & 0x7fffffffffffffff | uVar13;
  bVar3 = (**(code **)(*param_2 + 200))(param_2);
  param_1[6] = param_1[6] & 0xfffffffffffffffe | (ulonglong)bVar3;
  bVar3 = (**(code **)(*param_2 + 0x1b0))(param_2);
  param_1[6] = (param_1[6] & 0xfffffffffffffffd) + (ulonglong)bVar3 * 2;
  bVar3 = (**(code **)(*param_2 + 0x1b8))(param_2);
  param_1[6] = (param_1[6] & 0xfffffffffffffffb) + (ulonglong)bVar3 * 4;
LAB_14004f289:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14004f808 FUN_14004f808 body=30 status=ok
// SIG undefined FUN_14004f808(void)

void FUN_14004f808(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x00014004f81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x550))(plVar1);
  return;
}



// FUNCTION 14004f832 FUN_14004f832 body=42 status=ok
// SIG undefined FUN_14004f832(void)

undefined1 FUN_14004f832(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x30))();
  uVar1 = 0;
  if (iVar2 == 4) {
    uVar1 = *(undefined1 *)(param_1[8] + 0x1fd);
  }
  return uVar1;
}



// FUNCTION 14004f85c FUN_14004f85c body=41 status=ok
// SIG undefined FUN_14004f85c(void)

ulonglong FUN_14004f85c(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 4) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[8] >> 8),*(undefined1 *)(param_1[8] + 500)) &
            0xffffffffffffff01;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14004f886 FUN_14004f886 body=79 status=ok
// SIG undefined FUN_14004f886(void)

uint FUN_14004f886(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2d0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *(uint *)(lVar1 + 0x46c) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004f8d6 FUN_14004f8d6 body=104 status=ok
// SIG undefined FUN_14004f8d6(void)

undefined8 FUN_14004f8d6(longlong *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x4c0))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = &DAT_14caea5a0;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x2d0))(plVar1);
  }
  uVar3 = CONCAT71((int7)((ulonglong)puVar2 >> 8),puVar2[0x469]) & 0xffffffffffffff10;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004f940 FUN_14004f940 body=58 status=ok
// SIG undefined FUN_14004f940(void)

ulonglong FUN_14004f940(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (((*(byte *)(param_1[8] + 0x18c) & 1) != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0xf0))(), cVar1 == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 14004f97a FUN_14004f97a body=72 status=ok
// SIG undefined FUN_14004f97a(void)

ulonglong FUN_14004f97a(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(code **)(*param_1 + 0x30) == (code *)&LAB_14473a65e) {
    uVar1 = (uint)*(byte *)(param_1[8] + 0x128);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  }
  if (uVar1 == 4) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[8] >> 8),*(undefined1 *)(param_1[8] + 0x1fc)) &
            0xffffffffffffff01;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14004f9c2 FUN_14004f9c2 body=122 status=ok
// SIG undefined FUN_14004f9c2(void)

uint FUN_14004f9c2(longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x40);
  local_18 = 0;
  uStack_10 = 0;
  if (*(code **)(*plVar1 + 0x2d0) == (code *)&LAB_14470b6e8) {
    puVar2 = &DAT_14caea5a0;
    if ((undefined *)plVar1[0x18] != (undefined *)0x0) {
      puVar2 = (undefined *)plVar1[0x18];
    }
  }
  else {
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x2d0))(plVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *(uint *)(puVar2 + 0x468) >> 0x1c & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004fa3e FUN_14004fa3e body=82 status=ok
// SIG undefined FUN_14004fa3e(void)

uint FUN_14004fa3e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2d0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *(uint *)(lVar1 + 0x468) >> 9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004fa92 FUN_14004fa92 body=103 status=ok
// SIG undefined FUN_14004fa92(void)

undefined8 FUN_14004fa92(longlong *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x4c0))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = &DAT_14caea5a0;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x2d0))(plVar1);
  }
  uVar3 = CONCAT71((int7)((ulonglong)puVar2 >> 8),puVar2[0x460]) & 0xffffffffffffff02;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004fafa FUN_14004fafa body=104 status=ok
// SIG undefined FUN_14004fafa(void)

undefined8 FUN_14004fafa(longlong *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x4c0))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = &DAT_14caea5a0;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x2d0))(plVar1);
  }
  uVar3 = CONCAT71((int7)((ulonglong)puVar2 >> 8),puVar2[0x460]) & 0xffffffffffffff20;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004fb64 FUN_14004fb64 body=104 status=ok
// SIG undefined FUN_14004fb64(void)

undefined8 FUN_14004fb64(longlong *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x4c0))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = &DAT_14caea5a0;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x2d0))(plVar1);
  }
  uVar3 = CONCAT71((int7)((ulonglong)puVar2 >> 8),puVar2[0x460]) & 0xffffffffffffff10;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004fbd8 FUN_14004fbd8 body=451 status=ok
// SIG undefined FUN_14004fbd8(void)

ulonglong FUN_14004fbd8(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x1c4) & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caefea0) {
      FUN_144b3d300(&DAT_14caefea0);
      if (DAT_14caefea0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar3 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ForceEnableMeshes",1);
        if (plVar3 == (longlong *)0x0) {
          DAT_14caefe98 = 0;
        }
        else {
          DAT_14caefe98 = (**(code **)(*plVar3 + 0x68))(plVar3);
        }
        _Init_thread_footer(&DAT_14caefea0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caefea8) {
      FUN_144b3d300(&DAT_14caefea8);
      lVar1 = DAT_14caefe98;
      if (DAT_14caefea8 == -1) {
        if (DAT_14caefe98 == 0) {
          DAT_14caefea4 = false;
        }
        else {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
              == 0x40000002) {
            uVar4 = 0;
          }
          else {
            bVar2 = FUN_144a61b4f();
            uVar4 = (ulonglong)(bVar2 ^ 1);
          }
          DAT_14caefea4 = *(int *)(lVar1 + uVar4 * 4) != 0;
        }
        _Init_thread_footer(&DAT_14caefea8);
      }
    }
    if (DAT_14caefea4 == '\x01') {
      bVar2 = FUN_144a61b4f();
      if (*(longlong *)
           (param_1 + 0x10 +
           (ulonglong)
           (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) != 0x40000002 & ~bVar2) * 8) != 0) {
        uVar5 = CONCAT71(uVar6,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x1c4)) &
                0xffffffffffffff10;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 4);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14004fd9c FUN_14004fd9c body=75 status=ok
// SIG undefined FUN_14004fd9c(void)

void FUN_14004fd9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x28))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)local_18 / (float)local_14);
}



// FUNCTION 14004fde8 FUN_14004fde8 body=720 status=ok
// SIG undefined FUN_14004fde8(void)

void FUN_14004fde8(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  longlong lVar2;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_1d8 [32];
  byte local_1b8 [8];
  LARGE_INTEGER local_1b0;
  code *local_1a8 [2];
  undefined8 *local_198;
  code *local_168 [2];
  undefined8 local_158;
  undefined **local_148;
  longlong *local_140;
  longlong *local_120;
  undefined1 local_118 [192];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((longlong)(int)param_1[0x37] != 0) {
    plVar11 = (longlong *)param_1[0x36];
    plVar10 = plVar11 + (longlong)(int)param_1[0x37] * 2;
    do {
      FUN_1400501a4(*plVar11);
      lVar9 = *plVar11;
      lVar5 = (longlong)DAT_14c760da4;
      if (lVar5 != 0) {
        plVar8 = (longlong *)(lVar9 + 2000);
        do {
          lVar2 = *plVar8;
          lVar7 = 0;
          do {
            FUN_14493e5fa(*(undefined8 *)(lVar2 + 0x14c0 + lVar7 * 8),0x14,0);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 4);
          FUN_140050140(*plVar8 + 0x13e8,0x14);
          lVar2 = *plVar8;
          lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x1488);
          EnterCriticalSection(lpCriticalSection);
          FUN_140135e5e(lVar2 + 0x1448,10);
          LeaveCriticalSection(lpCriticalSection);
          plVar8 = plVar8 + 1;
        } while (plVar8 != (longlong *)(lVar9 + lVar5 * 8 + 2000));
        lVar9 = *plVar11;
      }
      FUN_1400502bc(*(undefined8 *)(lVar9 + 0x538));
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar10);
  }
  (**(code **)(*param_1 + 0x5d8))(param_1);
  local_58 = 0;
  lVar9 = param_1[0x33];
  local_120 = param_1;
  if (lVar9 == 0) {
    memcpy(local_118,param_1 + 0x1b,0xc0);
  }
  param_1[0x33] = 0;
  lVar5 = param_1[0x34];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1a4);
  param_1[0x34] = 0x1800000000;
  local_158 = 0;
  local_148 = &PTR_LAB_14a34ff90;
  local_168[0] = FUN_1431790ea;
  local_1a8[0] = (code *)0x0;
  local_140 = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,8);
  *puVar6 = &PTR_LAB_14a34ff70;
  puVar6[1] = param_1;
  local_198 = puVar6;
  if (lVar9 == 0) {
    memcpy(puVar6 + 2,local_118,0xc0);
  }
  puVar6[0x1a] = lVar9;
  local_58 = 0;
  *(int *)(puVar6 + 0x1b) = (int)lVar5;
  *(undefined4 *)((longlong)puVar6 + 0xdc) = uVar1;
  local_50 = 0x1800000000;
  if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_1a8[0] = FUN_143178db8;
  }
  FUN_14019e9d8(param_1,local_1a8,local_168);
  if (param_1[5] == 0) {
    QueryPerformanceCounter(&local_1b0);
    local_1b0.s.HighPart._0_1_ = 1;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
    if (BVar3 != 0) {
      DVar4 = GetCurrentThreadId();
      lVar9 = param_1[6];
      *(DWORD *)(param_1 + 6) = DVar4;
      do {
        FUN_1400bd744(param_1,local_1b8);
      } while ((local_1b8[0] & 1) != 0);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
      *(int *)(param_1 + 6) = (int)lVar9;
    }
    FUN_140248952(&local_1b0);
  }
  FUN_1400500bc(local_118);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400500bc FUN_1400500bc body=61 status=ok
// SIG undefined FUN_1400500bc(void)

void FUN_1400500bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_1400500f9(lVar1,*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400500f9 FUN_1400500f9 body=70 status=ok
// SIG undefined FUN_1400500f9(void)

void FUN_1400500f9(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140050140 FUN_140050140 body=100 status=ok
// SIG undefined FUN_140050140(void)

void FUN_140050140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_14493e5fa(lVar3,param_2,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00014005019d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1400501a4 FUN_1400501a4 body=189 status=ok
// SIG undefined FUN_1400501a4(void)

void FUN_1400501a4(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_14c760da4 != 0) {
    uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar3 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    do {
      FUN_140050262(*(undefined8 *)(param_1 + 0x4e0 + (ulonglong)uVar3 * 8),0x14);
      bVar1 = (byte)uVar3 & 0x1f;
      uVar2 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar2;
      if (uVar2 == 0) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
    } while (uVar2 != 0);
  }
  if (*(longlong **)(param_1 + 0x7c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 8))();
  }
  if (DAT_14c760da4 != 0) {
    uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar3 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 2000 + (ulonglong)uVar3 * 8) + 0x6c0) != 0) {
        FUN_14315b11a();
      }
      bVar1 = (byte)uVar3 & 0x1f;
      uVar2 = uVar2 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
      if (uVar2 == 0) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 140050262 FUN_140050262 body=90 status=ok
// SIG undefined FUN_140050262(void)

void FUN_140050262(longlong param_1,undefined8 param_2)

{
  FUN_14473b502(param_1 + 0x20);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  FUN_14493e5fa(param_1 + 0xe8,param_2,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  FUN_14473b502(param_1 + 0x1e8,param_2);
  return;
}



// FUNCTION 1400502bc FUN_1400502bc body=935 status=ok
// SIG undefined FUN_1400502bc(void)

void FUN_1400502bc(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  uint *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *(longlong *)(param_1 + 0x60) + 1;
  *(longlong *)(param_1 + 0x60) = local_80;
  local_78 = 0;
  uStack_70 = 0;
  iVar10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_14473c118(&local_78);
  }
  uVar5 = *(uint *)(param_1 + 0x30);
  if (uVar5 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    uVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x18);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar10 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar10 = uVar5 - 1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1400505b2;
        iVar10 = iVar10 + 0x20;
        uVar4 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar4) {
      uVar4 = uVar5;
    }
  }
  if (uVar4 != uVar5) {
    uVar13 = 0xffffffff;
    local_98 = (ulonglong)uVar5;
    local_90 = param_1;
    local_88 = (uint *)(param_1 + 0x18);
    do {
      lVar11 = *(longlong *)(local_90 + 8);
      puVar7 = (undefined8 *)FUN_14001cc68(0x310,0x10);
      puVar7[1] = *(undefined8 *)(lVar11 + (longlong)(int)uVar4 * 0x18);
      puVar7[0x35] = 0;
      puVar7[0x36] = 0x1800000000;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[0x3c] = 0;
      puVar7[0x3e] = 0;
      *(undefined1 *)(puVar7 + 0x4d) = 0;
      *(undefined1 *)(puVar7 + 0x4f) = 0;
      puVar7[0x5c] = 0;
      *(undefined4 *)(puVar7 + 0x5d) = 0;
      puVar7[0x39] = 0;
      puVar7[0x3a] = 0;
      puVar7[0x37] = 0;
      puVar7[0x38] = 0;
      *(undefined2 *)(puVar7 + 0x3b) = 0;
      puVar7[0x4a] = 0;
      puVar7[0x4b] = 0;
      puVar7[0x48] = 0;
      puVar7[0x49] = 0;
      puVar7[0x46] = 0;
      puVar7[0x47] = 0;
      puVar7[0x44] = 0;
      puVar7[0x45] = 0;
      puVar7[0x58] = 0;
      puVar7[0x59] = 0;
      puVar7[0x56] = 0;
      puVar7[0x57] = 0;
      puVar7[0x54] = 0;
      puVar7[0x55] = 0;
      puVar7[0x52] = 0;
      puVar7[0x53] = 0;
      puVar7[0x50] = 0;
      puVar7[0x51] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x2ec) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar7 + 0x2f4) = 0;
      puVar7[0x60] = 0;
      *(undefined4 *)(puVar7 + 0x61) = 0;
      *puVar7 = &PTR_FUN_14a349180;
      plVar2 = *(longlong **)(lVar11 + 8 + (longlong)(int)uVar4 * 0x18);
      *(undefined4 *)(puVar7 + 0x47) = 1;
      FUN_140050664(puVar7 + 0x46,0);
      plVar3 = (longlong *)puVar7[0x46];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      uVar1 = uStack_70;
      *plVar3 = (longlong)plVar2;
      plVar3[1] = local_80;
      lVar11 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_1447183c0(&local_78,uVar1 & 0xffffffff);
      }
      *(undefined8 **)(local_78 + lVar11 * 8) = puVar7;
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar6 = *(uint **)(local_90 + 0x28);
      if (*(uint **)(local_90 + 0x28) == (uint *)0x0) {
        puVar6 = local_88;
      }
      uVar5 = *(uint *)(local_90 + 0x30);
      iVar14 = (int)uVar15;
      lVar11 = (longlong)iVar14;
      uVar4 = puVar6[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar8 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar8 = uVar5 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar14) {
          iVar9 = iVar14;
        }
        if (iVar14 < iVar8) {
          lVar12 = 0;
          do {
            uVar4 = puVar6[lVar11 + lVar12 + 1];
            if (uVar4 != 0) {
              uVar15 = (ulonglong)(iVar14 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_14005057e;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar14 = iVar9;
        }
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar4 = uVar5;
      }
      else {
LAB_14005057e:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
    } while (uVar4 != (uint)local_98);
  }
LAB_1400505b2:
  FUN_14473bfcc(DAT_14ca77418,&local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140050664 FUN_140050664 body=269 status=ok
// SIG undefined FUN_140050664(void)

void FUN_140050664(longlong param_1,int param_2)

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



// FUNCTION 140050772 FUN_140050772 body=129 status=ok
// SIG undefined FUN_140050772(void)

void FUN_140050772(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x1ffffffffffff800U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 3,8);
      uVar2 = uVar2 >> 3;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,8,8);
    }
  }
  return;
}



// FUNCTION 1400507f4 FUN_1400507f4 body=256 status=ok
// SIG undefined FUN_1400507f4(void)

ulonglong FUN_1400507f4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar7 = 0;
    do {
      FUN_14473b84c(param_1,*(undefined4 *)(lVar3 + 0x10 + lVar7),
                    *(undefined4 *)(lVar3 + 0x14 + lVar7));
      iVar5 = *(int *)(param_1 + 0x7c) << (*(byte *)(lVar3 + 0x14 + lVar7) & 0x1f);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - iVar5;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - *(int *)(lVar3 + 0x18 + lVar7);
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) - iVar5;
      if (*(int *)(param_1 + 0x80) == 0) {
        puVar4 = *(undefined8 **)(lVar3 + lVar7);
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (puVar4 != (undefined8 *)0x0 && *piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        *(undefined8 *)(lVar3 + lVar7) = 0;
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar7);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_141789f32(param_1 + 0x98);
  }
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 8);
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400508e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)*puVar4)(puVar4,1);
        return uVar6;
      }
    }
  }
  return uVar6;
}



// FUNCTION 1400508f4 FUN_1400508f4 body=2013 status=ok
// SIG undefined FUN_1400508f4(void)

longlong * FUN_1400508f4(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined *puVar15;
  ulonglong uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 auStack_608 [47];
  char local_5d9;
  longlong local_5d8;
  longlong local_5d0;
  longlong *local_5c8;
  ushort local_5ba;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined1 local_599;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588 [1280];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_608;
  local_5d9 = param_3;
  local_5d8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb00210) && (FUN_144b3d300(&DAT_14cb00210), DAT_14cb00210 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ForceEnableMeshes",1);
    if (plVar14 == (longlong *)0x0) {
      DAT_14cb00208 = 0;
    }
    else {
      DAT_14cb00208 = (**(code **)(*plVar14 + 0x68))(plVar14);
    }
    _Init_thread_footer(&DAT_14cb00210);
    param_1 = local_5d8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb00218) &&
     (FUN_144b3d300(&DAT_14cb00218), lVar23 = DAT_14cb00208, DAT_14cb00218 == -1)) {
    if (DAT_14cb00208 == 0) {
      DAT_14cb00214 = false;
    }
    else {
      iVar24 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar24 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar24 == 2)) {
        uVar16 = 0;
      }
      else if (iVar24 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar16 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar16 = 1;
      }
      DAT_14cb00214 = *(int *)(lVar23 + uVar16 * 4) != 0;
    }
    _Init_thread_footer(&DAT_14cb00218);
    param_1 = local_5d8;
  }
  *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) & 0xfe;
  local_5c8 = param_2 + 2;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (*(int *)((longlong)param_2 + 0xe4) < 0) {
    FUN_147cd488e(local_5c8,0);
  }
  if (param_1 != 0) {
    local_88 = (undefined1 *)0x0;
    local_80 = 0x2000000000;
    lVar23 = *(longlong *)(param_1 + 0x660);
    if ((lVar23 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar23);
    }
    else if (lVar23 == 0) goto LAB_140050f6a;
    if ((longlong)*(int *)(lVar23 + 0x160) != 0) {
      lVar20 = *(longlong *)(lVar23 + 0x158);
      local_5d0 = (longlong)*(int *)(lVar23 + 0x160) * 0x30;
      lVar23 = 0;
      uVar19 = 0;
      do {
        if ((((int)uVar19 < 0) || (*(int *)(param_1 + 0x628) <= (int)uVar19)) ||
           (plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x620) + (ulonglong)uVar19 * 8),
           plVar14 == (longlong *)0x0)) {
          lVar22 = *(longlong *)(param_1 + 0x660);
          if ((lVar22 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar22);
            lVar22 = *(longlong *)(param_1 + 0x660);
LAB_140050a6c:
            if ((lVar22 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar22);
            }
            if (((-1 < (int)uVar19) && ((int)uVar19 < *(int *)(lVar22 + 0x160))) &&
               (plVar14 = *(longlong **)(*(longlong *)(lVar22 + 0x158) + (ulonglong)uVar19 * 0x30),
               plVar14 != (longlong *)0x0)) goto LAB_140050aad;
          }
          else if (lVar22 != 0) goto LAB_140050a6c;
          plVar14 = (longlong *)0x0;
        }
        else {
LAB_140050aad:
          FUN_1400337aa(plVar14);
          if (DAT_14c761bc8 != 0) {
            local_78 = 0;
            uStack_70 = 0;
            plVar13 = (longlong *)(**(code **)(*plVar14 + 0x360))(plVar14,&local_78);
            if (plVar13 != (longlong *)0x0) {
              plVar14 = plVar13;
            }
          }
        }
        uVar16 = local_80;
        uVar3 = *(undefined8 *)(lVar20 + 8 + lVar23);
        local_68 = *(undefined4 *)(lVar20 + 0x28 + lVar23);
        plVar13 = (longlong *)(lVar20 + 0x18 + lVar23);
        local_78 = *plVar13;
        uStack_70 = plVar13[1];
        lVar22 = (longlong)(int)local_80;
        uVar9 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,uVar9);
        if (local_80._4_4_ < uVar9) {
          FUN_147cd476e(local_588,uVar16 & 0xffffffff);
        }
        puVar12 = local_88;
        if (local_88 == (undefined1 *)0x0) {
          puVar12 = local_588;
        }
        *(longlong **)(puVar12 + lVar22 * 0x28) = plVar14;
        *(undefined8 *)(puVar12 + lVar22 * 0x28 + 8) = uVar3;
        uVar4 = local_78._4_4_;
        uVar5 = (undefined4)uStack_70;
        uVar6 = uStack_70._4_4_;
        puVar1 = (undefined4 *)(puVar12 + lVar22 * 0x28 + 0x10);
        *puVar1 = (undefined4)local_78;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined4 *)(puVar12 + lVar22 * 0x28 + 0x20) = local_68;
        uVar19 = uVar19 + 1;
        lVar23 = lVar23 + 0x30;
        param_1 = local_5d8;
      } while (local_5d0 != lVar23);
      puVar12 = local_588;
      if (local_88 != (undefined1 *)0x0) {
        puVar12 = local_88;
      }
      if ((longlong)(int)local_80 != 0) {
        local_5d0 = (longlong)(int)local_80 * 0x28;
        lVar23 = 0;
        iVar24 = 0;
        do {
          iVar2 = (int)param_2[0x1c];
          lVar20 = (longlong)iVar2;
          *(uint *)(param_2 + 0x1c) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xe4) < iVar2 + 1U) {
            FUN_144ae8bb8(local_5c8,iVar2);
          }
          plVar14 = (longlong *)param_2[0x1a];
          if ((longlong *)param_2[0x1a] == (longlong *)0x0) {
            plVar14 = local_5c8;
          }
          plVar21 = plVar14 + lVar20 * 6;
          FUN_144b26f1b(plVar21,1);
          plVar14[lVar20 * 6 + 1] = *(longlong *)(puVar12 + lVar23 + 8);
          *(int *)(plVar14 + lVar20 * 6 + 2) = iVar24;
          plVar13 = *(longlong **)(puVar12 + lVar23);
          bVar8 = *(byte *)((longlong)plVar14 + lVar20 * 0x30 + 0x14);
          plVar14[lVar20 * 6] = (longlong)plVar13;
          *(byte *)((longlong)plVar14 + lVar20 * 0x30 + 0x14) =
               bVar8 & 0xfd | (plVar13 == (longlong *)0x0) * '\x02';
          puVar1 = (undefined4 *)(puVar12 + lVar23 + 0x14);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          plVar14 = plVar14 + lVar20 * 6 + 4;
          *(undefined4 *)plVar14 = *puVar1;
          *(undefined4 *)((longlong)plVar14 + 4) = uVar4;
          *(undefined4 *)(plVar14 + 1) = uVar5;
          *(undefined4 *)((longlong)plVar14 + 0xc) = uVar6;
          if (plVar13 == (longlong *)0x0) {
            FUN_14003fbd6();
            plVar13 = DAT_14caea080;
            *plVar21 = (longlong)DAT_14caea080;
          }
          local_598 = 0;
          uStack_590 = 0;
          plVar14 = (longlong *)(**(code **)(*plVar13 + 0x2c0))(plVar13,&local_598);
          uVar19 = (**(code **)(*(longlong *)*plVar21 + 0x408))();
          local_599 = 0;
          local_5b8 = 0;
          uStack_5b0 = 0;
          lVar20 = (**(code **)(*plVar14 + 0x2d0))(plVar14,&local_5b8);
          bVar8 = *(byte *)((longlong)plVar21 + 0x15);
          *(byte *)((longlong)plVar21 + 0x14) =
               *(byte *)((longlong)plVar21 + 0x14) & 0x7f |
               *(char *)(lVar20 + 0x460) * '\x02' & 0x80U;
          bVar17 = *(byte *)(lVar20 + 0x460) >> 4 & 2;
          *(byte *)((longlong)plVar21 + 0x15) = bVar8 & 0xfd | bVar17;
          bVar18 = *(byte *)(lVar20 + 0x460) >> 2 & 4;
          *(byte *)((longlong)plVar21 + 0x15) = bVar8 & 0xf9 | bVar17 | bVar18;
          *(byte *)((longlong)plVar21 + 0x15) =
               bVar8 & 0xf8 | bVar17 | bVar18 | *(byte *)(lVar20 + 0x460) >> 7;
          local_78 = 0;
          uStack_70 = 0;
          if (*(code **)(*plVar14 + 0x2d0) == (code *)&LAB_14470b6e8) {
            puVar15 = (undefined *)plVar14[0x18];
            if (puVar15 == (undefined *)0x0) {
              puVar15 = &DAT_14caea5a0;
            }
          }
          else {
            puVar15 = (undefined *)(**(code **)(*plVar14 + 0x2d0))(plVar14,&local_78);
          }
          *(byte *)((longlong)plVar21 + 0x14) =
               *(byte *)((longlong)plVar21 + 0x14) & 0xdf |
               (byte)(*(uint *)(puVar15 + 0x468) >> 0x17) & 0x20;
          local_78 = 0;
          uStack_70 = 0;
          if (*(code **)(*plVar14 + 0x2d0) == (code *)&LAB_14470b6e8) {
            puVar15 = (undefined *)plVar14[0x18];
            if (puVar15 == (undefined *)0x0) {
              puVar15 = &DAT_14caea5a0;
            }
          }
          else {
            puVar15 = (undefined *)(**(code **)(*plVar14 + 0x2d0))(plVar14,&local_78);
          }
          *(byte *)((longlong)plVar21 + 0x14) =
               *(byte *)((longlong)plVar21 + 0x14) & 0xfb |
               (byte)(*(uint *)(puVar15 + 0x468) >> 10) & 4;
          cVar7 = (**(code **)(*plVar14 + 0x550))(plVar14);
          *(byte *)((longlong)plVar21 + 0x14) =
               (1 < uVar19) << 3 | cVar7 << 6 | *(byte *)((longlong)plVar21 + 0x14) & 0xb7;
          (**(code **)(*plVar14 + 0x410))(plVar14,&local_5ba);
          *(byte *)((longlong)plVar21 + 0x14) =
               *(byte *)((longlong)plVar21 + 0x14) & 0xef | (byte)(local_5ba >> 6) & 0x10;
          if (local_5d9 == '\0') {
            bVar8 = FUN_144b24cd0(plVar14,&local_599,0x12);
          }
          else {
            bVar8 = (**(code **)(*plVar14 + 0x340))(plVar14,0x12);
            bVar8 = bVar8 ^ 1;
          }
          *(byte *)((longlong)plVar21 + 0x15) =
               *(byte *)((longlong)plVar21 + 0x15) & 0xf7 | bVar8 << 3;
          if (uVar19 == 1) {
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 2;
          }
          if ((*(byte *)((longlong)plVar14 + 0x1d7) & 4) != 0) {
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 4;
          }
          bVar8 = *(byte *)((longlong)plVar21 + 0x14);
          bVar18 = ((*(byte *)((longlong)plVar21 + 0x15) | bVar8) >> 3 | bVar8 >> 4) & 1;
          bVar17 = bVar8 & 0xfe | bVar18;
          *(byte *)((longlong)plVar21 + 0x14) = bVar17;
          bVar8 = *(byte *)(param_2 + 0x1f);
          if (((bVar8 & 1) == 0 & bVar18) == 1) {
            FUN_1417ea750(&local_78,local_5d8);
            if (&local_78 == param_2) {
              if (local_78 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_2 != 0) {
                FUN_1400020a8();
              }
              *param_2 = local_78;
              local_78 = 0;
              *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
            }
            FUN_14003fbd6();
            param_2[0x1e] = (longlong)DAT_14caea080;
            bVar17 = *(byte *)((longlong)plVar21 + 0x14);
            bVar8 = *(byte *)(param_2 + 0x1f);
          }
          *(byte *)(param_2 + 0x1f) = bVar17 & 1 | bVar8;
          lVar23 = lVar23 + 0x28;
          iVar24 = iVar24 + 1;
        } while (local_5d0 != lVar23);
      }
      if (local_88 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140050f6a:
  if ((local_60 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400510f2 FUN_1400510f2 body=1368 status=ok
// SIG undefined FUN_1400510f2(void)

undefined8 * FUN_1400510f2(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c760a84 == -1) {
    local_68 = 0x66;
    FUN_140002266(local_58,L"%s %s %d",L"FRDGSystemTextures",
                  L".\\Runtime/Renderer/Private/SystemTextures.cpp");
    DAT_14c760a84 = FUN_145d12cf0(local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = DAT_14c760a84;
  if (*(int *)(param_1 + 0x130) <= DAT_14c760a84) {
    FUN_140051998(param_1 + 0x128,DAT_14c760a84 + 1,1);
  }
  puVar4 = *(ulonglong **)(param_1 + 0x120);
  local_60 = *(longlong *)(param_1 + 0x128);
  puVar10 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
  puVar6 = puVar10 + 0x13;
  if ((undefined8 *)puVar4[1] < puVar6) {
    FUN_140023dd8(puVar4);
    puVar10 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar10 + 0x13;
  }
  *puVar4 = (ulonglong)puVar6;
  *puVar10 = &PTR_FUN_14a31a1e0;
  puVar10[1] = &PTR_FUN_14a31a1e8;
  puVar6 = puVar10 + 2;
  memset(puVar6,0,0x88);
  iVar2 = (int)puVar4[6];
  *(uint *)(puVar4 + 6) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x34) < iVar2 + 1U) {
    FUN_1448cfae8(puVar4 + 5,iVar2);
  }
  *(undefined8 **)(puVar4[5] + (longlong)iVar2 * 8) = puVar10;
  *(undefined8 **)(local_60 + (longlong)iVar3 * 8) = puVar10 + 1;
  if (DAT_14ca63b20 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63b20,2);
  }
  *puVar6 = uVar7;
  if (DAT_14ca63b28 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63b28,2);
  }
  puVar10[3] = uVar7;
  if (DAT_14ca63b30 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63b30,2);
  }
  puVar10[4] = uVar7;
  if (DAT_14ca63b38 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63b38,2);
  }
  puVar10[5] = uVar7;
  if (DAT_14ca63ba0 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63ba0,2);
  }
  puVar10[6] = uVar7;
  if (DAT_14ca63ba8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63ba8,2);
  }
  puVar10[7] = uVar7;
  if (DAT_14ca63bb8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bb8,2);
  }
  puVar10[9] = uVar7;
  if (DAT_14ca63bb0 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bb0,2);
  }
  puVar10[8] = uVar7;
  if (DAT_14ca63bc0 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bc0,2);
  }
  puVar10[10] = uVar7;
  if (DAT_14ca63bc8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bc8,2);
  }
  puVar10[0xb] = uVar7;
  if (DAT_14ca63bd0 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bd0,2);
  }
  puVar10[0xc] = uVar7;
  if (DAT_14ca63bd8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bd8,2);
  }
  puVar10[0xd] = uVar7;
  if (DAT_14ca63be0 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63be0,2);
  }
  puVar10[0xe] = uVar7;
  if (DAT_14ca63be8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63be8,2);
  }
  puVar10[0xf] = uVar7;
  if (DAT_14ca63bf0 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bf0,2);
  }
  puVar10[0x10] = uVar7;
  if (DAT_14ca63bf8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_14473c272(param_1,&DAT_14ca63bf8,2);
  }
  puVar10[0x11] = uVar7;
  lVar5 = puVar10[8];
  if ((*(char *)(lVar5 + 0x92) == '\x04') || (*(char *)(lVar5 + 0x92) == '\x01')) {
    uVar9 = *(undefined2 *)(lVar5 + 0x8e);
  }
  else {
    uVar9 = 0;
  }
  uVar1 = *(undefined1 *)(lVar5 + 0x90);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 1;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar11 + 5) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar1;
  *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar9;
  *(undefined1 *)(puVar11 + 6) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
  puVar11[7] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[0x12] = puVar11;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140051652 FUN_140051652 body=85 status=ok
// SIG undefined FUN_140051652(void)

void FUN_140051652(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1400517d6();
  return;
}



// FUNCTION 1400516a8 FUN_1400516a8 body=301 status=ok
// SIG undefined FUN_1400516a8(void)

void FUN_1400516a8(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,0x10);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 0x10;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 1400517d6 FUN_1400517d6 body=450 status=ok
// SIG undefined FUN_1400517d6(void)

void FUN_1400517d6(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400518f1:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14005192e:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14005182c;
LAB_140051821:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14005182c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x000140051858;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400518ae:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14005192e;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400518f1;
code_r0x000140051858:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400518ae;
    }
  }
  goto LAB_140051821;
}



// FUNCTION 140051998 FUN_140051998 body=122 status=ok
// SIG undefined FUN_140051998(void)

void FUN_140051998(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140051a14(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14714cca4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140051a14 FUN_140051a14 body=93 status=ok
// SIG undefined FUN_140051a14(void)

void FUN_140051a14(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_140051a72();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140051a72 FUN_140051a72 body=265 status=ok
// SIG undefined FUN_140051a72(void)

void FUN_140051a72(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar4 = (int)param_4 * param_3;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,(uint)(0xf < iVar4) * 8 + 8 + iVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 140051b7c FUN_140051b7c body=80 status=ok
// SIG undefined FUN_140051b7c(void)

void FUN_140051b7c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x490);
    do {
      plVar1 = plVar2 + -0x90;
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)*plVar2;
      }
      FUN_14473dd6f(plVar1,(int)plVar2[1]);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0x94;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140051bcc FUN_140051bcc body=66 status=ok
// SIG undefined FUN_140051bcc(void)

void FUN_140051bcc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x438) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x430);
    lVar1 = (longlong)*(int *)(param_1 + 0x438) * 0x30;
    do {
      FUN_140051c0e(lVar2,*(undefined4 *)(param_1 + 8));
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 140051c0e FUN_140051c0e body=147 status=ok
// SIG undefined FUN_140051c0e(void)

void FUN_140051c0e(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  if ((((*param_1 != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
      (*(int *)((longlong)param_1 + 0xc) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x10) == *(int *)((longlong)param_1 + 0xc) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
      if ((cVar2 != '\0') && (*(int *)*param_1 != param_2)) {
        *(int *)*param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x000140051c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],param_1[4],param_1[3]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140051ca2 FUN_140051ca2 body=58 status=ok
// SIG undefined FUN_140051ca2(void)

void FUN_140051ca2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 140051cdd FUN_140051cdd body=75 status=ok
// SIG undefined FUN_140051cdd(void)

ulonglong FUN_140051cdd(longlong param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  uint uVar4;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (*(char *)(param_1 + 0x23ec) != '\0') goto LAB_140051cf3;
  if (*(char *)(param_1 + 0x23e8) == '\x01') {
    if (*(longlong *)(param_1 + 0x23e0) == 0) {
      if (*(longlong *)(param_1 + 8) == 0) goto LAB_140051cf1;
      uVar4 = *(uint *)(*(longlong *)(param_1 + 8) + 0xd4);
      if (5 < uVar4) goto LAB_140051cf3;
      bVar1 = 0xd;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x23e0) + 0x1c);
      if (4 < uVar4) goto LAB_140051cf3;
      bVar1 = 0xc;
    }
    uVar2 = CONCAT71(uVar3,bVar1 >> ((byte)uVar4 & 0x1f));
  }
  else {
LAB_140051cf1:
    uVar2 = 0;
  }
LAB_140051cf3:
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 140051d28 FUN_140051d28 body=110 status=ok
// SIG undefined FUN_140051d28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140051d28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4bcbc) {
    FUN_144b3d300(&DAT_14ca4bcbc);
    if (DAT_14ca4bcbc == -1) {
      DAT_14ca4bcb0 = 0;
      _DAT_14ca4bcb4 = 0;
      ram0x00014ca4bca0 = 0;
      uRam000000014ca4bca8 = 0;
      DAT_14ca4bcac = 0;
      _DAT_14ca4bc90 = 0;
      ram0x00014ca4bc98 = 0;
      _DAT_14ca4bc80 = 0;
      _DAT_14ca4bc88 = 0;
      _Init_thread_footer(&DAT_14ca4bcbc);
      return;
    }
  }
  return;
}



// FUNCTION 140051d96 FUN_140051d96 body=1034 status=ok
// SIG undefined FUN_140051d96(void)

uint * FUN_140051d96(uint *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_118 [32];
  uint *local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int *local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar4 = FUN_14495554e(param_2);
  if (cVar4 == '\0') {
    if ((longlong)*(int *)(param_2 + 0x20) == 0) {
      iVar13 = 0;
      iVar11 = 0;
    }
    else {
      lVar10 = 0;
      iVar11 = 0;
      iVar13 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar10);
        iVar14 = *(int *)(lVar7 + 0x4e0);
        iVar1 = *(int *)(lVar7 + 0x4e4);
        if (iVar11 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar13 < iVar1) {
          iVar13 = iVar1;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar10);
    }
    iVar14 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    lVar10 = DAT_14ca97170;
    if (iVar14 != 0x40000002) goto joined_r0x000140052091;
  }
  else {
    plVar2 = *(longlong **)(param_2 + 0x180);
    if (plVar2 == (longlong *)0x0) {
      fVar21 = 1.0;
    }
    else {
      (**(code **)(*plVar2 + 8))(plVar2,&local_e0);
      piVar12 = &local_e0;
      if (local_a0 != (int *)0x0) {
        piVar12 = local_a0;
      }
      fVar21 = (float)piVar12[DAT_14cad82fc] * *(float *)(param_2 + 0x110);
      if (local_a0 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar10 = **(longlong **)(param_2 + 8);
    if (((*(char *)(lVar10 + 0x23d9) == '\x01') && (*(longlong *)(lVar10 + 0x13858) != 0)) &&
       (*(longlong *)(lVar10 + 0x13860) != 0)) {
      fVar21 = fVar21 * ((*(float *)(lVar10 + 0x13868) + -1.0) * *(float *)(DAT_14ca462e8 + 4) + 1.0
                        );
    }
    local_f8 = param_1;
    if ((longlong)*(int *)(param_2 + 0x20) == 0) {
      iVar13 = 0;
      iVar11 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_2 + 0x18);
      lVar15 = (longlong)*(int *)(param_2 + 0x20) * 8;
      fVar16 = 1.0;
      lVar7 = 0;
      do {
        fVar17 = *(float *)(*(longlong *)(lVar10 + lVar7) + 0x45c);
        if (fVar16 <= fVar17) {
          fVar16 = fVar17;
        }
        lVar7 = lVar7 + 8;
      } while (lVar15 != lVar7);
      lVar7 = 0;
      iVar13 = 0;
      iVar11 = 0;
      local_f0 = param_2;
      do {
        lVar3 = *(longlong *)(lVar10 + lVar7);
        fVar17 = 1.0;
        if ((*(longlong *)(lVar3 + 0x23e0) == 0) &&
           (fVar17 = fVar21 * fVar16, 0.0 < *(float *)(lVar3 + 0x458))) {
          fVar17 = *(float *)(lVar3 + 0x458) * *(float *)(local_f0 + 0x110);
        }
        fVar18 = (float)(*(int *)(lVar3 + 0x4f0) - *(int *)(lVar3 + 0x4e8)) * fVar17;
        fVar19 = (float)(*(int *)(lVar3 + 0x4f4) - *(int *)(lVar3 + 0x4ec)) * fVar17;
        fVar20 = (float)*(int *)(lVar3 + 0x4ec) * fVar17;
        local_e4 = -((int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
        fVar17 = (float)*(int *)(lVar3 + 0x4e8) * fVar17;
        local_e8 = -((int)ROUND(-0.5 - (fVar17 + fVar17)) >> 1);
        FUN_14177e342(&local_e0,&local_e8);
        iVar14 = local_e0 - ((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1);
        if (iVar14 <= iVar11) {
          iVar14 = iVar11;
        }
        iVar11 = iVar14;
        iVar14 = local_dc - ((int)ROUND(-0.5 - (fVar19 + fVar19)) >> 1);
        if (iVar14 <= iVar13) {
          iVar14 = iVar13;
        }
        iVar13 = iVar14;
        lVar7 = lVar7 + 8;
      } while (lVar15 != lVar7);
    }
    iVar14 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    param_1 = local_f8;
    lVar10 = DAT_14ca97170;
    if (iVar14 == 0x40000002) {
      uVar8 = 0;
      goto LAB_1400520f2;
    }
joined_r0x000140052091:
    DAT_14ca97170 = lVar10;
    if ((DAT_14c86a9f8 == '\x01') && (iVar14 != 2)) {
      if (iVar14 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar8 = 1;
      }
      goto LAB_1400520f2;
    }
  }
  uVar8 = 0;
  lVar10 = DAT_14ca97170;
LAB_1400520f2:
  iVar14 = *(int *)(lVar10 + uVar8 * 4);
  uVar9 = (uint)(iVar14 < 1) << 2 | 0xfffffff8;
  *param_1 = iVar11 + (uint)(0 < iVar14) * 4 + 3 & uVar9;
  param_1[1] = iVar13 + (uint)(0 < iVar14) * 4 + 3 & uVar9;
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400521a2 FUN_1400521a2 body=2052 status=ok
// SIG undefined FUN_1400521a2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400521a2(longlong param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *plVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_1dd8 [40];
  longlong local_1db0;
  longlong local_1da8 [2];
  undefined4 local_1d98;
  undefined4 uStack_1d94;
  undefined4 uStack_1d90;
  undefined4 uStack_1d8c;
  undefined8 local_1d88;
  char cStack_1d80;
  char cStack_1d7f;
  char cStack_1d7e;
  char cStack_1d7d;
  char cStack_1d7c;
  char cStack_1d7b;
  undefined2 uStack_1d7a;
  undefined8 local_1d78;
  undefined8 uStack_1d70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1dd8;
  iVar20 = *param_2;
  *(int *)(param_1 + 8) = iVar20;
  *(uint *)(param_1 + 4) = (uint)(2 < (longlong)iVar20);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(&DAT_14ca85070 + (longlong)iVar20 * 2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 1);
  uVar10 = (**(code **)(*DAT_14ca83900 + 0x4c0))();
  uVar11 = FUN_1400b0b91(*(undefined4 *)(param_1 + 8),uVar10);
  *(undefined4 *)(param_1 + 0x24) = uVar11;
  iVar20 = 1;
  if ((2 < *(int *)(param_1 + 8)) && (DAT_14ca84f20 == '\x01')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb02df0) {
      FUN_144b3d300(&DAT_14cb02df0);
      if (DAT_14cb02df0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar15 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))
                            (DAT_14c8407a8,L"r.MSAA.CompositingSampleCount",1);
        if (plVar15 == (longlong *)0x0) {
          DAT_14cb02de8 = 0;
        }
        else {
          DAT_14cb02de8 = (**(code **)(*plVar15 + 0x68))(plVar15);
        }
        _Init_thread_footer(&DAT_14cb02df0);
      }
    }
    lVar18 = DAT_14cb02de8;
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar17 = 0;
    }
    else if (iVar2 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar17 = (ulonglong)(DVar13 != DVar14);
    }
    else {
      uVar17 = 1;
    }
    uVar12 = *(uint *)(lVar18 + uVar17 * 4);
    if (1 < uVar12) {
      if (uVar12 == 2) {
        iVar20 = 2;
      }
      else {
        iVar20 = (uint)(4 < uVar12) * 4 + 4;
      }
    }
  }
  *(int *)(param_1 + 0x28) = iVar20;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x60) = DAT_14ca83a40;
  uVar5 = _DAT_14ca83a38;
  *(undefined8 *)(param_1 + 0x50) = _DAT_14ca83a30;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar7 = uRam000000014ca850bc;
  uVar6 = _DAT_14ca850b8;
  uVar11 = _DAT_14ca850b4;
  *(undefined4 *)(param_1 + 100) = DAT_14ca850b0;
  *(undefined4 *)(param_1 + 0x68) = uVar11;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = DAT_14ca850c0;
  *(undefined1 *)(param_1 + 0x17c) = *(undefined1 *)((longlong)param_2 + 0xd);
  uVar12 = *(uint *)(param_1 + 0x178) & 0xfffffffe | (uint)*(byte *)(param_2 + 3);
  *(uint *)(param_1 + 0x178) = uVar12;
  uVar1 = *(ushort *)(param_1 + 0xc);
  if ((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) {
    bVar16 = DAT_14c760e14 & DAT_14ca964f0;
  }
  else {
    puVar22 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar22 = DAT_14ca96af8;
    }
    bVar16 = (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3 ||
             ((uint)puVar22[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0;
  }
  uVar12 = (uVar12 & 0xfffffffd) + (uint)bVar16 * 2;
  *(uint *)(param_1 + 0x178) = uVar12;
  *(uint *)(param_1 + 0x178) = uVar12 & 0xfffffeff | (uint)*(byte *)((longlong)param_2 + 0xe) << 8;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 6);
  *(uint *)(param_1 + 0x180) =
       *(uint *)(param_1 + 0x180) & 0xfffffffe | (uint)*(byte *)((longlong)param_2 + 0xf);
  FUN_1400529a8(param_1);
  if ((*(byte *)(param_1 + 0x178) & 2) != 0) {
    FUN_140052a6a(&local_1d88,*(undefined2 *)(param_1 + 0xc),0);
    if (((((DAT_14c761ae0 != '\x01') || ((short)_DAT_14c7619f0 != (short)local_1d88)) ||
         ((DAT_14c7619f4 != local_1d88._4_4_ ||
          ((DAT_14c7619f8 != cStack_1d80 || (DAT_14c7619f9 != cStack_1d7f)))))) ||
        (DAT_14c7619fa != cStack_1d7e)) ||
       (((DAT_14c7619fb != cStack_1d7d || (DAT_14c7619fd != cStack_1d7b)) ||
        (DAT_14c7619fc != cStack_1d7c)))) {
      local_1db0 = param_1 + 0x78;
      lVar18 = 0;
      bVar8 = true;
      do {
        bVar4 = bVar8;
        if (bVar4) {
          local_1d78 = CONCAT44(local_1d88._4_4_,CONCAT22(local_1d88._2_2_,(short)local_1d88));
          uStack_1d70 = CONCAT26(uStack_1d7a,
                                 CONCAT15(cStack_1d7b,
                                          CONCAT14(cStack_1d7c,
                                                   CONCAT13(cStack_1d7d,
                                                            CONCAT12(cStack_1d7e,
                                                                     CONCAT11(cStack_1d7f,
                                                                              cStack_1d80))))));
        }
        else {
          FUN_140052a6a(&local_1d78,*(undefined2 *)(param_1 + 0xc),1);
        }
        puVar22 = (undefined4 *)(local_1db0 + lVar18 * 0x10);
        *puVar22 = (undefined4)local_1d78;
        puVar22[1] = local_1d78._4_4_;
        puVar22[2] = (undefined4)uStack_1d70;
        puVar22[3] = uStack_1d70._4_4_;
        FUN_140053661(&local_1d78,local_1db0 + lVar18 * 0x10);
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"GBufferA");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        lVar23 = lVar18 * 0x70;
        *(undefined4 *)(&DAT_14c761a00 + lVar18 * 0xe) = local_1d98;
        *(undefined4 *)((longlong)&DAT_14c761a00 + lVar23 + 4) = uStack_1d94;
        *(undefined4 *)(&DAT_14c761a08 + lVar18 * 0xe) = uStack_1d90;
        *(undefined4 *)((longlong)&DAT_14c761a08 + lVar23 + 4) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"GBufferB");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        *(undefined4 *)(&DAT_14c761a10 + lVar23) = local_1d98;
        *(undefined4 *)(lVar23 + 0x14c761a14) = uStack_1d94;
        *(undefined4 *)(lVar23 + 0x14c761a18) = uStack_1d90;
        *(undefined4 *)(lVar23 + 0x14c761a1c) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"GBufferC");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        *(undefined4 *)(&DAT_14c761a20 + lVar23) = local_1d98;
        *(undefined4 *)(lVar23 + 0x14c761a24) = uStack_1d94;
        *(undefined4 *)(lVar23 + 0x14c761a28) = uStack_1d90;
        *(undefined4 *)(lVar23 + 0x14c761a2c) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"GBufferD");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        *(undefined4 *)(&DAT_14c761a30 + lVar23) = local_1d98;
        *(undefined4 *)(lVar23 + 0x14c761a34) = uStack_1d94;
        *(undefined4 *)(lVar23 + 0x14c761a38) = uStack_1d90;
        *(undefined4 *)(lVar23 + 0x14c761a3c) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"GBufferE");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        *(undefined4 *)(&DAT_14c761a40 + lVar23) = local_1d98;
        *(undefined4 *)(lVar23 + 0x14c761a44) = uStack_1d94;
        *(undefined4 *)(lVar23 + 0x14c761a48) = uStack_1d90;
        *(undefined4 *)(lVar23 + 0x14c761a4c) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"Velocity");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        *(undefined4 *)(&DAT_14c761a50 + lVar23) = local_1d98;
        *(undefined4 *)(lVar23 + 0x14c761a54) = uStack_1d94;
        *(undefined4 *)(lVar23 + 0x14c761a58) = uStack_1d90;
        *(undefined4 *)(lVar23 + 0x14c761a5c) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = *(undefined2 *)(param_1 + 0xc);
        FUN_140056680(local_1da8,L"InkMap");
        FUN_1400533dd(&local_1d98,&local_1d78,local_1da8,uVar10);
        *(undefined4 *)(&DAT_14c761a60 + lVar23) = local_1d98;
        *(undefined4 *)(lVar23 + 0x14c761a64) = uStack_1d94;
        *(undefined4 *)(lVar23 + 0x14c761a68) = uStack_1d90;
        *(undefined4 *)(lVar23 + 0x14c761a6c) = uStack_1d8c;
        if (local_1da8[0] != 0) {
          FUN_1400020a8();
        }
        (&DAT_14c761a5a)[lVar23] = (&DAT_14c761a5a)[lVar23] & 0xfe;
        lVar18 = 0x100;
        do {
          if (*(longlong *)((longlong)&local_1d88 + lVar18) != 0) {
            FUN_1400020a8();
          }
          lVar18 = lVar18 + -0x20;
        } while (lVar18 != 0);
        lVar18 = 1;
        bVar8 = false;
      } while (bVar4);
      _DAT_14c7619f0 = CONCAT22(local_1d88._2_2_,(short)local_1d88);
      DAT_14c7619f4 = local_1d88._4_4_;
      _DAT_14c7619f8 = CONCAT13(cStack_1d7d,CONCAT12(cStack_1d7e,CONCAT11(cStack_1d7f,cStack_1d80)))
      ;
      _DAT_14c7619fc = CONCAT22(uStack_1d7a,CONCAT11(cStack_1d7b,cStack_1d7c));
      DAT_14c761ae0 = '\x01';
      if (*(int *)(param_1 + 4) == 0) {
        FUN_1436a25d1(&DAT_14c761a00,0);
      }
    }
    puVar19 = &DAT_14c761a00;
    puVar21 = (undefined8 *)(param_1 + 0x98);
    for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar21 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar21 = puVar21 + 1;
    }
    puVar19 = &DAT_14c761a70;
    puVar21 = (undefined8 *)(param_1 + 0x108);
    for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar21 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    cVar9 = FUN_14743049a();
    uVar12 = 0;
    uVar11 = extraout_XMM0_Da;
    if (cVar9 != '\0') {
      bVar16 = FUN_147cef6de(0,(char)param_2[3]);
      uVar12 = (uint)(bVar16 ^ 1) << 3;
      uVar11 = extraout_XMM0_Da_00;
    }
    uVar3 = *(uint *)(param_1 + 0x178);
    *(uint *)(param_1 + 0x178) = uVar3 & 0xfffffff7 | uVar12;
    uVar12 = 0x10;
    if ((uVar3 & 0x10) == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb04f00) {
        uVar11 = FUN_144b3d300();
        if (DAT_14cb04f00 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar15 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.SceneDepthAux",1);
          if (plVar15 == (longlong *)0x0) {
            DAT_14cb04ef8 = 0;
          }
          else {
            DAT_14cb04ef8 = (**(code **)(*plVar15 + 0x68))(plVar15);
          }
          uVar11 = _Init_thread_footer();
        }
      }
      lVar18 = DAT_14cb04ef8;
      if ((DAT_14ca964f0 != 1) || ((DAT_14c760e14 & 1) == 0)) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar17 = 0;
        }
        else {
          bVar16 = FUN_144a61b4f();
          uVar17 = (ulonglong)(bVar16 ^ 1);
          uVar11 = extraout_XMM0_Da_01;
        }
        uVar12 = (uint)(*(int *)(lVar18 + uVar17 * 4) == 2) << 4;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xffffffef | uVar12;
    uVar1 = *(ushort *)(param_1 + 0xc);
    cVar9 = FUN_147cef6de(uVar11,(char)param_2[3]);
    uVar12 = 0;
    if ((cVar9 != '\0') &&
       (*(longlong *)(&DAT_14ca814b0 + (ulonglong)uVar1 * 0x3c) == DAT_14ca81498)) {
      uVar12 = (uint)(uVar3 < 2 | DAT_14ca8507e) << 5;
    }
    *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xffffffdf | uVar12;
  }
  if ((local_48 ^ (ulonglong)auStack_1dd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400529a8 FUN_1400529a8 body=194 status=ok
// SIG undefined FUN_1400529a8(void)

void FUN_1400529a8(longlong param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FUN_1400530af(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x17c),
                *(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x24),
                *(byte *)(param_1 + 0x178) >> 7,param_1 + 0x2c,param_1 + 0x30);
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((*(uint *)(param_1 + 0x178) & 4) != 0) {
    uVar4 = uVar3 | 0x20c;
    if (uVar1 < 2 || -1 < (char)*(uint *)(param_1 + 0x178)) goto LAB_140052a16;
    if ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(param_1 + 0xc) * 0xf] == 1) {
      cVar2 = FUN_147430516();
      if (cVar2 != '\0') goto LAB_140052a16;
    }
  }
  uVar4 = uVar3 | 0x120c;
LAB_140052a16:
  uVar3 = uVar4 | 0x20000;
  if ((DAT_14ca84e22 & 1) == 0) {
    uVar3 = uVar4;
  }
  if (uVar1 != 1) {
    uVar3 = uVar4;
  }
  *(ulonglong *)(param_1 + 0x38) = uVar3;
  return;
}



// FUNCTION 140052a6a FUN_140052a6a body=703 status=ok
// SIG undefined FUN_140052a6a(void)

undefined2 * FUN_140052a6a(undefined2 *param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  param_1[6] = 0;
  *param_1 = (short)param_2;
  *(undefined1 *)(param_1 + 5) = DAT_14c760e18;
  bVar4 = FUN_140052d29(param_2 & 0xffffffff);
  *(byte *)(param_1 + 4) = param_3 == 1 | bVar4;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  cVar5 = FUN_14498f84a();
  if (cVar5 != '\0') {
    bVar4 = 1;
    if (((&DAT_14ca814cc)[(param_2 & 0xffff) * 0x3c] & 0x10) != 0) goto LAB_140052ace;
  }
  bVar4 = (byte)((uint)(&DAT_14ca814c8)[(param_2 & 0xffff) * 0xf] >> 0x16) & 1;
LAB_140052ace:
  *(byte *)((longlong)param_1 + 0xb) = bVar4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05840) {
    FUN_144b3d300(&DAT_14cb05840);
    if (DAT_14cb05840 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar9 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GBufferFormat",1);
      if (plVar9 == (longlong *)0x0) {
        DAT_14cb05838 = 0;
      }
      else {
        DAT_14cb05838 = (**(code **)(*plVar9 + 0x68))(plVar9);
      }
      _Init_thread_footer(&DAT_14cb05840);
    }
  }
  lVar3 = DAT_14cb05838;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar10 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar10 = 1;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar3 + uVar10 * 4);
  cVar5 = FUN_1400dade3(param_2 & 0xffffffff);
  uVar6 = 1;
  if (cVar5 == '\0') {
    uVar6 = FUN_1401519b7(param_2 & 0xffffffff);
  }
  *(undefined1 *)(param_1 + 6) = uVar6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05850) {
    FUN_144b3d300();
    if (DAT_14cb05850 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar9 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.AllowInkMap",1);
      if (plVar9 == (longlong *)0x0) {
        DAT_14cb05848 = 0;
      }
      else {
        DAT_14cb05848 = (**(code **)(*plVar9 + 0x68))(plVar9);
      }
      _Init_thread_footer();
    }
  }
  lVar3 = DAT_14cb05848;
  iVar1 = *(int *)(lVar2 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar10 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar10 = 1;
  }
  *(bool *)((longlong)param_1 + 0xd) = *(int *)(lVar3 + uVar10 * 4) != 0;
  return param_1;
}



// FUNCTION 140052d29 FUN_140052d29 body=524 status=ok
// SIG undefined FUN_140052d29(void)

bool FUN_140052d29(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97050) && (FUN_144b3d300(&DAT_14ca97050), DAT_14ca97050 == -1)) {
    FUN_140056680(&DAT_14ca97038,L"r.VelocityOutputPass");
    DAT_14ca97048 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143226544);
    _Init_thread_footer(&DAT_14ca97050);
  }
  uVar8 = (ushort)param_1;
  uVar6 = (ulonglong)param_1 & 0xffff;
  if ((&DAT_14ca814b8)[uVar6 * 0xf] == 1) {
    return false;
  }
  puVar5 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar5 = DAT_14ca96af8;
  }
  if ((2 < (int)(&DAT_14ca814b8)[uVar6 * 0xf]) &&
     ((1 << ((byte)param_1 & 0x1f) & puVar5[uVar6 >> 5]) != 0)) {
    return false;
  }
  puVar3 = &DAT_14ca84468;
  if (uVar8 != 0x31) {
    switch((int)uVar6) {
    case 0x30:
switchD_140052e1b_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_140052e1b_caseD_31:
      if ((uVar8 & 0xfff0) != 0x20) {
        uVar9 = 0;
        goto LAB_140052db4;
      }
      lVar4 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_140052e1b_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_140052e1b_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(uVar6) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_140052e1b_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_140052e1b_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_140052e1b_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_140052e1b_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
  }
  uVar9 = *puVar3;
LAB_140052db4:
  if (DAT_14ca97048 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca97038;
    if (DAT_14ca97040 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca97048 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar1 = FUN_14002b5e0(uVar9,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar8)) {
    return false;
  }
  iVar2 = (**(code **)(*DAT_14ca97048 + 0xb0))();
  return iVar2 == 1;
}



// FUNCTION 140052f36 FUN_140052f36 body=376 status=ok
// SIG undefined FUN_140052f36(void)

bool FUN_140052f36(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x18) & 0x20) == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = DAT_14c8407a8;
    bVar7 = false;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      if (DAT_14c846b14 == '\x01') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c83f0fc) {
          FUN_144b3d300(&DAT_14c83f0fc);
          if (DAT_14c83f0fc == -1) {
            uVar6 = FUN_14118da1c();
            bVar3 = FUN_14054d46e(uVar6,L"nothreading");
            DAT_14c83f0f8 = bVar3 ^ 1;
            _Init_thread_footer(&DAT_14c83f0fc);
          }
        }
        if (DAT_14c83f0f8 != 1) goto LAB_14005302f;
      }
      if (*(char *)(param_1 + 0x40) == '\0') {
        (**(code **)(*plVar2 + 0xd8))(plVar2,local_38,param_1);
        *(undefined1 *)(param_1 + 0x40) = 1;
        bVar7 = false;
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    bVar7 = false;
    if (DAT_14c86a9f8 == '\x01') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          bVar7 = DVar4 != DVar5;
        }
        else {
          bVar7 = true;
        }
      }
    }
  }
LAB_14005302f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400530af FUN_1400530af body=814 status=ok
// SIG undefined FUN_1400530af(void)

void FUN_1400530af(int param_1,byte param_2,ulonglong param_3,uint param_4,char param_5,
                  byte *param_6,ulonglong *param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  
  if (param_1 < 3) {
    bVar12 = DAT_14ca84dfb & DAT_14c760e14;
    if (bVar12 == 0) {
      bVar11 = FUN_1436a86c5();
    }
    else {
      bVar11 = (param_2 ^ 1) << 4 | 10;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb04ef0) {
      FUN_144b3d300(&DAT_14cb04ef0);
      if (DAT_14cb04ef0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.SceneColorFormat",1);
        if (plVar7 == (longlong *)0x0) {
          DAT_14cb04ee8 = 0;
        }
        else {
          DAT_14cb04ee8 = (**(code **)(*plVar7 + 0x68))(plVar7);
        }
        _Init_thread_footer(&DAT_14cb04ef0);
      }
    }
    lVar3 = DAT_14cb04ee8;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    iVar1 = *(int *)(lVar3 + uVar8 * 4);
    bVar4 = bVar11;
    if (iVar1 == 3) {
      if (bVar12 != 0) {
        bVar4 = FUN_1436a86c5();
      }
    }
    else if (iVar1 == 2) {
      bVar4 = 0x1a;
    }
    else if (iVar1 == 1) {
      bVar4 = 10;
    }
    if (((&DAT_14c873438)[(uint)bVar4 * 0x30] & 1) != 0) {
      bVar11 = bVar4;
    }
    *param_6 = bVar11;
    *param_7 = param_3 | 9;
    bVar12 = FUN_147cef5fa();
    uVar8 = (ulonglong)bVar12 << 4;
    param_3 = *param_7;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb04ee0) {
      FUN_144b3d300(&DAT_14cb04ee0);
      if (DAT_14cb04ee0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SceneColorFormat",1);
        if (plVar7 == (longlong *)0x0) {
          DAT_14cb04ed8 = 0;
        }
        else {
          DAT_14cb04ed8 = (**(code **)(*plVar7 + 0x68))(plVar7);
        }
        _Init_thread_footer(&DAT_14cb04ee0);
      }
    }
    lVar3 = DAT_14cb04ed8;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    uVar2 = *(uint *)(lVar3 + uVar8 * 4);
    uVar10 = (uint)(0x10a091a1225 >> ((char)uVar2 * '\b' & 0x3fU));
    if (5 < uVar2) {
      uVar10 = 10;
    }
    bVar12 = (byte)uVar10;
    if (((&DAT_14c873438)[(uVar10 & 0xff) * 0x30] & 1) == 0) {
      bVar12 = 10;
    }
    if (param_2 != 0) {
      bVar12 = 10;
    }
    *param_6 = bVar12;
    if (param_4 == 1) {
      uVar8 = 0;
      uVar9 = param_3 | 0x20009;
      goto LAB_1400531c7;
    }
    param_3 = param_3 | 9;
    uVar8 = 0;
  }
  uVar9 = param_3 | 0x1000;
  if (param_5 == '\0') {
    uVar9 = param_3;
  }
  if (param_4 < 2) {
    uVar9 = param_3;
  }
LAB_1400531c7:
  *param_7 = uVar9 | uVar8;
  return;
}



// FUNCTION 1400533dd FUN_1400533dd body=485 status=ok
// SIG undefined FUN_1400533dd(void)

undefined4 * FUN_1400533dd(undefined4 *param_1,byte *param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  wchar_t *_Str1;
  undefined1 uVar7;
  ulonglong uVar8;
  wchar_t *_Str2;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar1 = *(int *)param_2;
  if (0 < (longlong)iVar1) {
    _Str2 = L"";
    if (*(int *)(param_3 + 1) != 0) {
      _Str2 = (wchar_t *)*param_3;
    }
    lVar10 = 0;
    do {
      _Str1 = L"";
      if (*(int *)(param_2 + 0x18) != 0) {
        _Str1 = *(wchar_t **)(param_2 + 0x10);
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (iVar4 == 0) {
        uVar7 = (undefined1)(0xd0a0f13121a020e >> ((char)*(int *)(param_2 + 8) * '\b' - 8U & 0x3f));
        if (7 < *(int *)(param_2 + 8) - 1U) {
          uVar7 = 0;
        }
        *param_1 = (int)lVar10;
        *(undefined1 *)(param_1 + 1) = uVar7;
        uVar8 = (ulonglong)param_2[0x20] << 4 | 9;
        *(ulonglong *)(param_1 + 2) = uVar8;
        if (DAT_14c760e34 != 0) {
          lVar10 = (ulonglong)(param_4 & 0xffff) * 0x3c;
          if ((((*(byte *)((longlong)&DAT_14ca814d8 + lVar10 + 3) & 0x10) != 0) &&
              (((&DAT_14ca814c8)[(ulonglong)(param_4 & 0xffff) * 0xf] & 0x20000000) != 0)) &&
             ((*(uint *)(&DAT_14ca814cc + lVar10) & 8) != 0)) {
            *(ulonglong *)(param_1 + 2) = uVar8 + 0x20000;
            uVar9 = 0x30000;
            cVar2 = FUN_1400535c2();
            if (cVar2 == '\0') {
              return param_1;
            }
            goto LAB_1400534da;
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca8ba10) &&
           (FUN_144b3d300(&DAT_14ca8ba10), DAT_14ca8ba10 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar6 = (longlong *)
                   (**(code **)(*DAT_14c8407a8 + 200))
                             (DAT_14c8407a8,L"r.Gbx.ScreenSpaceDecals.Enabled",1);
          if (plVar6 == (longlong *)0x0) {
            DAT_14ca8ba08 = 0;
          }
          else {
            DAT_14ca8ba08 = (**(code **)(*plVar6 + 0x60))(plVar6);
          }
          _Init_thread_footer(&DAT_14ca8ba10);
        }
        lVar10 = DAT_14ca8ba08;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar5 = 0;
        }
        else {
          bVar3 = FUN_144a61b4f();
          uVar5 = (ulonglong)(bVar3 ^ 1);
        }
        uVar9 = 0x20000;
        if (*(char *)(lVar10 + uVar5) != '\x01') {
          return param_1;
        }
LAB_1400534da:
        *(ulonglong *)(param_1 + 2) = uVar9 | uVar8;
        return param_1;
      }
      lVar10 = lVar10 + 1;
      param_2 = param_2 + 0x20;
    } while (iVar1 != lVar10);
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1400535c2 FUN_1400535c2 body=159 status=ok
// SIG undefined FUN_1400535c2(void)

bool FUN_1400535c2(void)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96f10) {
    FUN_144b3d300(&DAT_14ca96f10);
    if (DAT_14ca96f10 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96f08 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.FastTileClear",1);
      _Init_thread_footer(&DAT_14ca96f10);
    }
  }
  if (DAT_14ca96f08 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*DAT_14ca96f08 + 0xb0))();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 140053661 FUN_140053661 body=74 status=ok
// SIG undefined FUN_140053661(void)

undefined8 FUN_140053661(undefined8 param_1,ushort *param_2)

{
  if ((((&DAT_14ca814b8)[(ulonglong)*param_2 * 0xf] == 1) && (DAT_14ca964f0 == '\x01')) &&
     ((DAT_14c760e14 & 1) != 0)) {
    FUN_14741bb11(param_1);
  }
  else {
    FUN_1400536ab(param_1);
  }
  return param_1;
}



// FUNCTION 1400536ab FUN_1400536ab body=8433 status=ok
// SIG undefined FUN_1400536ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1400536ab(int *param_1,ushort *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  ushort *puVar24;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar25 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined1 extraout_XMM0_07 [16];
  undefined1 auStack_2b8 [36];
  int local_294;
  ushort *local_290;
  int local_288;
  int local_284;
  int *local_280;
  ulonglong local_278;
  longlong local_270;
  int local_268;
  longlong local_260;
  int local_258;
  longlong local_250;
  int local_248;
  longlong local_240;
  int local_238;
  longlong local_230;
  int local_228;
  longlong local_220;
  int local_218;
  longlong local_210;
  int local_208;
  longlong local_200;
  int local_1f8;
  longlong local_1f0;
  int local_1e8;
  longlong local_1e0;
  int local_1d8;
  longlong local_1d0;
  int local_1c8;
  longlong local_1c0;
  int local_1b8;
  longlong local_1b0;
  int local_1a8;
  longlong local_1a0;
  int local_198;
  longlong local_190;
  int local_188;
  longlong local_180;
  int local_178;
  longlong local_170;
  int local_168;
  undefined2 auStack_164 [2];
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 auStack_150 [28];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  memset(param_1,0,0x1d28);
  lVar7 = 0x10;
  do {
    *(undefined4 *)((longlong)param_1 + lVar7 + -8) = 0;
    *(undefined1 (*) [16])((longlong)param_1 + lVar7) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar7 + 0x10) = 0;
    lVar7 = lVar7 + 0x20;
  } while (lVar7 != 0x110);
  piVar8 = param_1 + 0x47;
  lVar7 = 0x108;
  do {
    lVar17 = 0;
    do {
      *(undefined2 *)((longlong)piVar8 + lVar17 + -4) = 0;
      puVar13 = (undefined4 *)((longlong)piVar8 + lVar17);
      *puVar13 = 0xffffffff;
      puVar13[1] = 0xffffffff;
      puVar13[2] = 0xffffffff;
      puVar13[3] = 0xffffffff;
      *(undefined8 *)((longlong)piVar8 + lVar17 + 0x10) = 0xffffffffffffffff;
      lVar17 = lVar17 + 0x1c;
    } while (lVar17 != 0xe0);
    *(undefined2 *)((longlong)param_1 + lVar7) = 0;
    *(undefined8 *)((longlong)param_1 + lVar7 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + lVar7 + 0xc) = 0;
    lVar17 = 0;
    do {
      *(undefined2 *)((longlong)piVar8 + lVar17 + -4) = 0;
      puVar13 = (undefined4 *)((longlong)piVar8 + lVar17);
      *puVar13 = 0xffffffff;
      puVar13[1] = 0xffffffff;
      puVar13[2] = 0xffffffff;
      puVar13[3] = 0xffffffff;
      *(undefined8 *)((longlong)piVar8 + lVar17 + 0x10) = 0xffffffffffffffff;
      lVar11 = DAT_14ca97170;
      lVar17 = lVar17 + 0x1c;
    } while (lVar17 != 0x70);
    lVar7 = lVar7 + 0xf0;
    piVar8 = piVar8 + 0x3c;
  } while (lVar7 != 0x1d28);
  iVar16 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar16 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar16 == 2)) {
    uVar10 = 0;
  }
  else if (iVar16 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar10 = 1;
  }
  local_280 = param_1 + 2;
  local_290 = param_2;
  if (*(int *)(lVar11 + uVar10 * 4) < 1) {
    uVar9 = (byte)param_2[5] & 1;
    iVar16 = uVar9 + 5;
    if ((byte)param_2[4] != 0 || *(char *)((longlong)param_2 + 9) != '\0') {
      iVar16 = uVar9 + 6;
    }
    *param_1 = iVar16;
    iVar6 = *(int *)(param_2 + 2);
    if (iVar6 == 0) {
      local_284 = 0x11;
      iVar16 = 2;
    }
    else {
      iVar16 = 7;
      if (iVar6 != 3) {
        iVar16 = (uint)(4 < iVar6) * 3 + 4;
      }
      local_284 = 0xf;
      if (iVar6 != 3) {
        local_284 = (iVar6 < 5) + 0xf;
      }
    }
    FUN_140056680(&local_1b0,L"Lighting");
    param_1[2] = 3;
    iVar22 = local_1a8 + -1;
    if (local_1a8 == 0) {
      iVar22 = 0;
    }
    FUN_1402980a2(param_1 + 4,local_1b0,iVar22);
    param_1[8] = 0x1010100;
    if (local_1b0 != 0) {
      FUN_1400020a8();
    }
    iVar22 = (uint)(4 < iVar6) * 5 + 2;
    local_278 = (ulonglong)(4 < iVar6);
    FUN_140056680(&local_1c0,L"GBufferA");
    param_1[10] = iVar16;
    iVar16 = local_1b8 + -1;
    if (local_1b8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(param_1 + 0xc,local_1c0,iVar16);
    param_1[0x10] = 0x1010100;
    if (local_1c0 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_1d0,L"GBufferB");
    param_1[0x12] = iVar22;
    iVar16 = local_1c8 + -1;
    if (local_1c8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(param_1 + 0x14,local_1d0,iVar16);
    param_1[0x18] = 0x1010100;
    if (local_1d0 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_1e0,L"GBufferC");
    param_1[0x1a] = iVar22;
    iVar16 = local_1d8 + -1;
    if (local_1d8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(param_1 + 0x1c,local_1e0,iVar16);
    *(bool *)(param_1 + 0x20) = iVar6 < 5;
    *(undefined2 *)((longlong)param_1 + 0x81) = 0x101;
    *(undefined1 *)((longlong)param_1 + 0x83) = 1;
    if (local_1e0 != 0) {
      FUN_1400020a8();
    }
    puVar24 = local_290;
    if ((char)local_290[4] == '\0' && *(byte *)((longlong)local_290 + 9) == 0) {
      FUN_140056680(&local_1f0,L"GBufferD");
      param_1[0x22] = 2;
      iVar16 = local_1e8 + -1;
      if (local_1e8 == 0) {
        iVar16 = 0;
      }
      FUN_1402980a2(param_1 + 0x24,local_1f0,iVar16);
      param_1[0x28] = 0x1010100;
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if ((char)puVar24[5] != '\x01') {
        iVar22 = 4;
        iVar16 = 5;
        iVar14 = -1;
        goto LAB_140053ab6;
      }
      FUN_140056680(&local_200,L"GBufferE");
      param_1[0x2a] = 2;
      iVar16 = local_1f8 + -1;
      if (local_1f8 == 0) {
        iVar16 = 0;
      }
      FUN_1402980a2(param_1 + 0x2c,local_200,iVar16);
      param_1[0x30] = 0x1010100;
      iVar22 = 4;
      local_288 = 5;
      iVar16 = 6;
      iVar14 = -1;
      local_230 = local_200;
LAB_140054f42:
      local_294 = -1;
joined_r0x000140054f45:
      if (local_230 != 0) {
        FUN_1400020a8();
      }
LAB_140053abe:
      if (*(char *)((longlong)puVar24 + 0xd) == '\x01') {
        FUN_140056680(&local_270,L"InkMap");
        puVar13 = (undefined4 *)((longlong)local_280 + (ulonglong)(uint)(iVar16 << 5));
        *puVar13 = 2;
        iVar1 = local_268 + -1;
        if (local_268 == 0) {
          iVar1 = 0;
        }
        FUN_1402980a2(puVar13 + 2,local_270,iVar1);
        puVar13[6] = 0x1010100;
        if (local_270 != 0) {
          FUN_1400020a8();
        }
        lVar7 = 0x14;
        do {
          *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
          *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
          *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
          *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
          *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
          *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
          lVar7 = lVar7 + 0x1c;
        } while (lVar7 != 0xf4);
        local_160._0_2_ = 1;
        local_15c = 0x80000001d;
        local_154 = 3;
        lVar7 = 0x14;
        do {
          *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
          *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
          *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
          *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
          *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
          *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
          lVar7 = lVar7 + 0x1c;
        } while (lVar7 != 0x84);
        memcpy(param_1 + 0x70e,&local_160,0xf0);
        *(undefined2 *)(param_1 + 0x712) = 0x101;
        param_1[0x713] = iVar16;
        auVar25 = pmovsxbd(extraout_XMM0,0xff00ff00);
        *(undefined1 (*) [16])(param_1 + 0x714) = auVar25;
        param_1[0x718] = -1;
        *param_1 = *param_1 + 1;
        puVar24 = local_290;
      }
    }
    else {
      if ((char)local_290[4] != '\0') {
        FUN_140056680(&local_210,L"Velocity");
        iVar16 = 5;
        if (*(char *)((longlong)puVar24 + 0xb) == '\0') {
          bVar3 = (*(byte *)(&DAT_14ca814c8 + (ulonglong)*puVar24 * 0xf) & 0x20) >> 5;
          iVar16 = (uint)bVar3 + (uint)bVar3 * 4 + 1;
        }
        param_1[0x22] = iVar16;
        iVar16 = local_208 + -1;
        if (local_208 == 0) {
          iVar16 = 0;
        }
        FUN_1402980a2(param_1 + 0x24,local_210,iVar16);
        param_1[0x28] = 0x10100;
        if (local_210 != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_220,L"GBufferD");
        param_1[0x2a] = 2;
        iVar16 = local_218 + -1;
        if (local_218 == 0) {
          iVar16 = 0;
        }
        FUN_1402980a2(param_1 + 0x2c,local_220,iVar16);
        param_1[0x30] = 0x1010100;
        if (local_220 != 0) {
          FUN_1400020a8();
        }
        if ((char)puVar24[5] == '\x01') {
          FUN_140056680(&local_230,L"GBufferE");
          param_1[0x32] = 2;
          iVar16 = local_228 + -1;
          if (local_228 == 0) {
            iVar16 = 0;
          }
          FUN_1402980a2(param_1 + 0x34,local_230,iVar16);
          param_1[0x38] = 0x10100;
          iVar22 = 5;
          local_288 = 6;
          iVar16 = 7;
          iVar14 = 4;
          goto LAB_140054f42;
        }
        iVar22 = 5;
        iVar16 = 6;
        iVar14 = 4;
LAB_140053ab6:
        local_294 = -1;
        local_288 = -1;
        goto LAB_140053abe;
      }
      iVar22 = -1;
      local_288 = -1;
      local_294 = -1;
      iVar16 = -1;
      iVar14 = -1;
      if ((*(byte *)((longlong)local_290 + 9) & 1) != 0) {
        FUN_140056680(&local_240,L"GBufferF");
        param_1[0x22] = 2;
        iVar16 = local_238 + -1;
        if (local_238 == 0) {
          iVar16 = 0;
        }
        FUN_1402980a2(param_1 + 0x24,local_240,iVar16);
        param_1[0x28] = 0x1010100;
        if (local_240 != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_250,L"GBufferD");
        param_1[0x2a] = 2;
        iVar16 = local_248 + -1;
        if (local_248 == 0) {
          iVar16 = 0;
        }
        FUN_1402980a2(param_1 + 0x2c,local_250,iVar16);
        param_1[0x30] = 0x1010100;
        if (local_250 != 0) {
          FUN_1400020a8();
        }
        if ((char)local_290[5] == '\x01') {
          FUN_140056680(&local_260,L"GBufferE");
          param_1[0x32] = 2;
          iVar16 = local_258 + -1;
          if (local_258 == 0) {
            iVar16 = 0;
          }
          FUN_1402980a2(param_1 + 0x34,local_260,iVar16);
          param_1[0x38] = 0x1010100;
          iVar22 = 5;
          local_288 = 6;
          local_294 = 4;
          iVar16 = 7;
          iVar14 = -1;
          puVar24 = local_290;
          local_230 = local_260;
          goto joined_r0x000140054f45;
        }
        iVar22 = 5;
        local_294 = 4;
        iVar16 = 6;
        iVar14 = -1;
        local_288 = -1;
        puVar24 = local_290;
        goto LAB_140053abe;
      }
    }
    iVar1 = local_284;
    iVar23 = (int)local_278 * 3 + 8;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x300000001;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x7e,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x82) = 0x101;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = -1;
    param_1[0x86] = 0;
    param_1[0x87] = -1;
    param_1[0x88] = -1;
    *(undefined2 *)(param_1 + 0x89) = 0x101;
    auVar25 = _DAT_14a382380;
    *(undefined1 (*) [16])(param_1 + 0x8a) = _DAT_14a382380;
    param_1[0x8e] = -1;
    param_1[0x8f] = -1;
    *(undefined2 *)(param_1 + 0x90) = 0x101;
    auVar25 = pmovsxbd(auVar25,0x2ff0200);
    *(undefined1 (*) [16])(param_1 + 0x91) = auVar25;
    param_1[0x95] = -1;
    param_1[0x96] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = CONCAT44(iVar1,2);
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0xba,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0xbe) = 0x101;
    param_1[0xbf] = 1;
    param_1[0xc0] = 0;
    param_1[0xc1] = -1;
    param_1[0xc2] = 0;
    param_1[0xc3] = -1;
    param_1[0xc4] = -1;
    *(undefined2 *)(param_1 + 0xc5) = 0x101;
    auVar25 = _DAT_149f46020;
    *(undefined1 (*) [16])(param_1 + 0xc6) = _DAT_149f46020;
    param_1[0xca] = -1;
    param_1[0xcb] = -1;
    *(undefined2 *)(param_1 + 0xcc) = 0x101;
    auVar25 = pmovsxbd(auVar25,0x2ff0201);
    *(undefined1 (*) [16])(param_1 + 0xcd) = auVar25;
    param_1[0xd1] = -1;
    param_1[0xd2] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x900000003;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0xf6,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0xfa) = 0x101;
    auVar25 = pmovsxbd(extraout_XMM0_00,0xff0301);
    *(undefined1 (*) [16])(param_1 + 0xfb) = auVar25;
    param_1[0xff] = -1;
    param_1[0x100] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = CONCAT44(iVar23,4);
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x132,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x136) = 0x101;
    auVar25 = pmovsxbd(extraout_XMM0_01,0xff0002);
    *(undefined1 (*) [16])(param_1 + 0x137) = auVar25;
    param_1[0x13b] = -1;
    param_1[0x13c] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = CONCAT44(iVar23,5);
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x16e,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x172) = 0x101;
    auVar25 = pmovsxbd(extraout_XMM0_02,0xff0102);
    *(undefined1 (*) [16])(param_1 + 0x173) = auVar25;
    param_1[0x177] = -1;
    param_1[0x178] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = CONCAT44(iVar23,6);
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x1aa,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x1ae) = 0x101;
    auVar25 = pmovsxbd(extraout_XMM0_03,0xff0202);
    *(undefined1 (*) [16])(param_1 + 0x1af) = auVar25;
    param_1[0x1b3] = -1;
    param_1[0x1b4] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0xc00000007;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x1e6,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x1ea) = 1;
    auVar25 = pmovsxbd(extraout_XMM0_04,0x302);
    *(undefined1 (*) [16])(param_1 + 0x1eb) = auVar25;
    param_1[0x1ef] = 0;
    param_1[0x1f0] = 4;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0xc00000008;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x222,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x226) = 1;
    auVar25 = pmovsxbd(extraout_XMM0_05,0x40302);
    *(undefined1 (*) [16])(param_1 + 0x227) = auVar25;
    param_1[0x22b] = 0;
    param_1[0x22c] = 4;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = CONCAT44((uint)(iVar6 < 5) * 4 + 2,9);
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x25e,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x262) = 0x101;
    param_1[0x263] = 3;
    param_1[0x264] = 0;
    param_1[0x265] = -1;
    param_1[0x266] = 0;
    param_1[0x267] = -1;
    param_1[0x268] = -1;
    *(undefined2 *)(param_1 + 0x269) = 0x101;
    auVar25 = _DAT_14a3823a0;
    *(undefined1 (*) [16])(param_1 + 0x26a) = _DAT_14a3823a0;
    param_1[0x26e] = -1;
    param_1[0x26f] = -1;
    *(undefined2 *)(param_1 + 0x270) = 0x101;
    auVar25 = pmovsxbd(auVar25,0x2ff0203);
    *(undefined1 (*) [16])(param_1 + 0x271) = auVar25;
    param_1[0x275] = -1;
    param_1[0x276] = -1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x80000000a;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x29a,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x29e) = 0x101;
    auVar25 = pmovsxbd(extraout_XMM0_06,0xff0303);
    *(undefined1 (*) [16])(param_1 + 0x29f) = auVar25;
    param_1[0x2a3] = -1;
    param_1[0x2a4] = -1;
    if ((char)puVar24[4] == '\x01') {
      bVar3 = *(byte *)((longlong)puVar24 + 0xb);
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      bVar2 = bVar3 ^ 1;
      local_160._0_2_ = 1;
      local_15c = CONCAT44((uint)bVar2 + (uint)bVar2 * 8 + 1,0xd);
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x34e,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x352) = 0x101;
      param_1[0x353] = iVar14;
      auVar25 = _DAT_14a3565d0;
      *(undefined1 (*) [16])(param_1 + 0x354) = _DAT_14a3565d0;
      param_1[0x358] = -1;
      *(undefined2 *)(param_1 + 0x359) = 0x101;
      param_1[0x35a] = iVar14;
      auVar25 = pmovsxbd(auVar25,0xff01ff01);
      *(undefined1 (*) [16])(param_1 + 0x35b) = auVar25;
      param_1[0x35f] = -1;
      if (bVar3 != 0) {
        *(undefined2 *)(param_1 + 0x360) = 0x101;
        param_1[0x361] = iVar14;
        auVar25 = _DAT_14a3823c0;
        *(undefined1 (*) [16])(param_1 + 0x362) = _DAT_14a3823c0;
        param_1[0x366] = -1;
        *(undefined2 *)(param_1 + 0x367) = 0x101;
        param_1[0x368] = iVar14;
        auVar25 = pmovsxbd(auVar25,0xff03ff03);
        *(undefined1 (*) [16])(param_1 + 0x369) = auVar25;
        param_1[0x36d] = -1;
      }
    }
    if ((char)puVar24[5] == '\x01') {
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      local_160._0_2_ = 1;
      local_15c = 0x50000000e;
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x38a,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x38e) = 0x101;
      param_1[0x38f] = local_288;
      param_1[0x390] = 0;
      param_1[0x391] = -1;
      param_1[0x392] = 0;
      param_1[0x393] = -1;
      param_1[0x394] = -1;
      *(undefined2 *)(param_1 + 0x395) = 0x101;
      param_1[0x396] = local_288;
      param_1[0x397] = 1;
      param_1[0x398] = -1;
      param_1[0x399] = 1;
      param_1[0x39a] = -1;
      param_1[0x39b] = -1;
      *(undefined2 *)(param_1 + 0x39c) = 0x101;
      param_1[0x39d] = local_288;
      auVar25 = _DAT_14a3823c0;
      *(undefined1 (*) [16])(param_1 + 0x39e) = _DAT_14a3823c0;
      param_1[0x3a2] = -1;
      *(undefined2 *)(param_1 + 0x3a3) = 0x101;
      param_1[0x3a4] = local_288;
      auVar25 = pmovsxbd(auVar25,0xff03ff03);
      *(undefined1 (*) [16])(param_1 + 0x3a5) = auVar25;
      param_1[0x3a9] = -1;
      puVar24 = local_290;
    }
    if (*(char *)((longlong)puVar24 + 9) == '\x01') {
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      local_160._0_2_ = 1;
      local_15c = 0x60000000f;
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x3c6,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x3ca) = 0x101;
      param_1[0x3cb] = local_294;
      param_1[0x3cc] = 0;
      param_1[0x3cd] = -1;
      param_1[0x3ce] = 0;
      param_1[0x3cf] = -1;
      param_1[0x3d0] = -1;
      *(undefined2 *)(param_1 + 0x3d1) = 0x101;
      param_1[0x3d2] = local_294;
      auVar25 = _DAT_14a3823b0;
      *(undefined1 (*) [16])(param_1 + 0x3d3) = _DAT_14a3823b0;
      param_1[0x3d7] = -1;
      *(undefined2 *)(param_1 + 0x3d8) = 0x101;
      param_1[0x3d9] = local_294;
      auVar25 = pmovsxbd(auVar25,0xff02ff02);
      *(undefined1 (*) [16])(param_1 + 0x3da) = auVar25;
      param_1[0x3de] = -1;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      local_160._0_2_ = 1;
      local_15c = 0x800000010;
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x402,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x406) = 0x101;
      param_1[0x407] = local_294;
      auVar25 = pmovsxbd(extraout_XMM0_07,0xff00ff03);
      *(undefined1 (*) [16])(param_1 + 0x408) = auVar25;
      param_1[0x40c] = -1;
      puVar24 = local_290;
    }
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x500000011;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x43e,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x442) = 0x101;
    param_1[0x443] = iVar22;
    param_1[0x444] = 0;
    param_1[0x445] = -1;
    param_1[0x446] = 0;
    param_1[0x447] = -1;
    param_1[0x448] = -1;
    *(undefined2 *)(param_1 + 0x449) = 0x101;
    param_1[0x44a] = iVar22;
    param_1[1099] = 1;
    param_1[0x44c] = -1;
    param_1[0x44d] = 1;
    param_1[0x44e] = -1;
    param_1[0x44f] = -1;
    *(undefined2 *)(param_1 + 0x450) = 0x101;
    param_1[0x451] = iVar22;
    auVar25 = _DAT_14a3823c0;
    *(undefined1 (*) [16])(param_1 + 0x452) = _DAT_14a3823c0;
    param_1[0x456] = -1;
    *(undefined2 *)(param_1 + 0x457) = 0x101;
    param_1[0x458] = iVar22;
    auVar25 = pmovsxbd(auVar25,0xff03ff03);
    *(undefined1 (*) [16])(param_1 + 0x459) = auVar25;
    param_1[0x45d] = -1;
    if ((char)puVar24[6] != '\x01') goto LAB_1400548f5;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x30000001c;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x6d2,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x6d6) = 0x101;
    param_1[0x6d7] = iVar16;
    param_1[0x6d8] = 0;
    param_1[0x6d9] = -1;
    param_1[0x6da] = 0;
    param_1[0x6db] = -1;
    param_1[0x6dc] = -1;
    *(undefined2 *)(param_1 + 0x6dd) = 0x101;
    param_1[0x6de] = iVar16;
    param_1[0x6df] = 1;
    param_1[0x6e0] = -1;
    param_1[0x6e1] = 1;
    param_1[0x6e2] = -1;
    param_1[0x6e3] = -1;
    lVar7 = 0x1ba8;
    lVar17 = 0x1ba4;
    lVar11 = 0x1ba0;
    lVar18 = 0x1b9c;
    uVar19 = 2;
    lVar20 = 0x1b98;
    lVar21 = 0x1b94;
    lVar15 = 0x1b91;
    lVar12 = 0x1b90;
  }
  else {
    uVar9 = (uint)(byte)param_2[4];
    iVar16 = uVar9 + 1;
    *param_1 = iVar16;
    if ((char)param_2[5] == '\x01') {
      *param_1 = uVar9 + 2;
      iVar6 = uVar9 + 2;
      iVar22 = iVar16;
    }
    else {
      iVar22 = -1;
      iVar6 = iVar16;
    }
    if (*(char *)((longlong)param_2 + 0xd) == '\x01') {
      *param_1 = iVar6 + 1;
      iVar16 = iVar6;
      iVar6 = iVar6 + 1;
    }
    else {
      iVar16 = 0;
    }
    iVar14 = -1;
    if ((char)param_2[6] == '\x01') {
      *param_1 = iVar6 + 1;
      iVar14 = iVar6;
    }
    FUN_140056680(&local_170,L"Lighting");
    param_1[2] = 3;
    iVar6 = local_168 + -1;
    if (local_168 == 0) {
      iVar6 = 0;
    }
    FUN_1402980a2(param_1 + 4,local_170,iVar6);
    param_1[8] = 0x1010100;
    if (local_170 != 0) {
      FUN_1400020a8();
    }
    uVar9 = uVar9 - 1 | 1;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x300000001;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x7e,&local_160,0xf0);
    *(undefined2 *)(param_1 + 0x82) = 0x101;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = -1;
    param_1[0x86] = 0;
    param_1[0x87] = -1;
    param_1[0x88] = -1;
    *(undefined2 *)(param_1 + 0x89) = 0x101;
    auVar25 = _DAT_14a382380;
    *(undefined1 (*) [16])(param_1 + 0x8a) = _DAT_14a382380;
    param_1[0x8e] = -1;
    param_1[0x8f] = -1;
    *(undefined2 *)(param_1 + 0x90) = 0x101;
    auVar25 = pmovsxbd(auVar25,0x2ff0200);
    *(undefined1 (*) [16])(param_1 + 0x91) = auVar25;
    param_1[0x95] = -1;
    param_1[0x96] = -1;
    if ((char)local_290[4] == '\x01') {
      piVar8 = local_280 + (longlong)(int)uVar9 * 8;
      FUN_140056680(&local_180,L"Velocity");
      iVar6 = 5;
      if (*(char *)((longlong)local_290 + 0xb) == '\0') {
        bVar3 = (*(byte *)(&DAT_14ca814c8 + (ulonglong)*local_290 * 0xf) & 0x20) >> 5;
        iVar6 = (uint)bVar3 + (uint)bVar3 * 4 + 1;
      }
      *piVar8 = iVar6;
      iVar6 = local_178 + -1;
      if (local_178 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(piVar8 + 2,local_180,iVar6);
      piVar8[6] = 0x10100;
      if (local_180 != 0) {
        FUN_1400020a8();
      }
      bVar3 = *(byte *)((longlong)local_290 + 0xb);
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      bVar2 = bVar3 ^ 1;
      local_160._0_2_ = 1;
      local_15c = CONCAT44((uint)bVar2 + (uint)bVar2 * 8 + 1,0xd);
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x34e,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x352) = 0x101;
      param_1[0x353] = uVar9;
      auVar25 = _DAT_14a3565d0;
      *(undefined1 (*) [16])(param_1 + 0x354) = _DAT_14a3565d0;
      param_1[0x358] = -1;
      *(undefined2 *)(param_1 + 0x359) = 0x101;
      param_1[0x35a] = uVar9;
      auVar25 = pmovsxbd(auVar25,0xff01ff01);
      *(undefined1 (*) [16])(param_1 + 0x35b) = auVar25;
      param_1[0x35f] = -1;
      if (bVar3 != 0) {
        *(undefined2 *)(param_1 + 0x360) = 0x101;
        param_1[0x361] = uVar9;
        auVar25 = _DAT_14a3823c0;
        *(undefined1 (*) [16])(param_1 + 0x362) = _DAT_14a3823c0;
        param_1[0x366] = -1;
        *(undefined2 *)(param_1 + 0x367) = 0x101;
        param_1[0x368] = uVar9;
        auVar25 = pmovsxbd(auVar25,0xff03ff03);
        *(undefined1 (*) [16])(param_1 + 0x369) = auVar25;
        param_1[0x36d] = -1;
      }
    }
    if ((char)local_290[5] == '\x01') {
      FUN_140056680(&local_190,L"GBufferE");
      piVar8 = local_280 + (longlong)iVar22 * 8;
      *piVar8 = 2;
      iVar6 = local_188 + -1;
      if (local_188 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(piVar8 + 2,local_190,iVar6);
      piVar8[6] = 0x10100;
      if (local_190 != 0) {
        FUN_1400020a8();
      }
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      local_160._0_2_ = 1;
      local_15c = 0x50000000e;
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x38a,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x38e) = 0x101;
      param_1[0x38f] = iVar22;
      param_1[0x390] = 0;
      param_1[0x391] = -1;
      param_1[0x392] = 0;
      param_1[0x393] = -1;
      param_1[0x394] = -1;
      *(undefined2 *)(param_1 + 0x395) = 0x101;
      param_1[0x396] = iVar22;
      param_1[0x397] = 1;
      param_1[0x398] = -1;
      param_1[0x399] = 1;
      param_1[0x39a] = -1;
      param_1[0x39b] = -1;
      *(undefined2 *)(param_1 + 0x39c) = 0x101;
      param_1[0x39d] = iVar22;
      auVar25 = _DAT_14a3823c0;
      *(undefined1 (*) [16])(param_1 + 0x39e) = _DAT_14a3823c0;
      param_1[0x3a2] = -1;
      *(undefined2 *)(param_1 + 0x3a3) = 0x101;
      param_1[0x3a4] = iVar22;
      auVar25 = pmovsxbd(auVar25,0xff03ff03);
      *(undefined1 (*) [16])(param_1 + 0x3a5) = auVar25;
      param_1[0x3a9] = -1;
    }
    if ((char)local_290[6] == '\x01') {
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xf4);
      local_160._0_2_ = 1;
      local_15c = 0x30000001c;
      local_154 = 3;
      lVar7 = 0x14;
      do {
        *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
        *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
        *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
        *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0x84);
      memcpy(param_1 + 0x6d2,&local_160,0xf0);
      *(undefined2 *)(param_1 + 0x6d6) = 0x101;
      param_1[0x6d7] = iVar14;
      param_1[0x6d8] = 0;
      param_1[0x6d9] = -1;
      param_1[0x6da] = 0;
      param_1[0x6db] = -1;
      param_1[0x6dc] = -1;
      *(undefined2 *)(param_1 + 0x6dd) = 0x101;
      param_1[0x6de] = iVar14;
      auVar25 = _DAT_14a3823b0;
      *(undefined1 (*) [16])(param_1 + 0x6df) = _DAT_14a3823b0;
      param_1[0x6e3] = -1;
      *(undefined2 *)(param_1 + 0x6e4) = 0x101;
      param_1[0x6e5] = iVar14;
      auVar25 = pmovsxbd(auVar25,0xff02ff02);
      *(undefined1 (*) [16])(param_1 + 0x6e6) = auVar25;
      param_1[0x6ea] = -1;
    }
    if (*(char *)((longlong)local_290 + 0xd) != '\x01') goto LAB_1400548f5;
    FUN_140056680(&local_1a0,L"InkMap");
    puVar13 = (undefined4 *)((ulonglong)(uint)(iVar16 << 5) + (longlong)local_280);
    *puVar13 = 2;
    iVar6 = local_198 + -1;
    if (local_198 == 0) {
      iVar6 = 0;
    }
    FUN_1402980a2(puVar13 + 2,local_1a0,iVar6);
    puVar13[6] = 0x1010100;
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0xf4);
    local_160._0_2_ = 1;
    local_15c = 0x80000001d;
    local_154 = 3;
    lVar7 = 0x14;
    do {
      *(undefined2 *)((longlong)auStack_164 + lVar7) = 0;
      *(undefined4 *)((longlong)&local_160 + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7) = 0xffffffff;
      *(undefined4 *)((longlong)&local_15c + lVar7 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)auStack_150 + lVar7 + -4) = 0xffffffff;
      *(undefined8 *)((longlong)auStack_150 + lVar7) = 0xffffffffffffffff;
      lVar7 = lVar7 + 0x1c;
    } while (lVar7 != 0x84);
    memcpy(param_1 + 0x70e,&local_160,0xf0);
    lVar7 = 0x1c60;
    lVar17 = 0x1c5c;
    lVar11 = 0x1c58;
    lVar18 = 0x1c54;
    uVar19 = 0;
    lVar20 = 0x1c50;
    lVar21 = 0x1c4c;
    lVar15 = 0x1c49;
    lVar12 = 0x1c48;
  }
  *(undefined1 *)((longlong)param_1 + lVar12) = 1;
  *(undefined1 *)((longlong)param_1 + lVar15) = 1;
  *(int *)((longlong)param_1 + lVar21) = iVar16;
  *(undefined4 *)((longlong)param_1 + lVar20) = uVar19;
  *(undefined4 *)((longlong)param_1 + lVar18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + lVar11) = uVar19;
  *(undefined4 *)((longlong)param_1 + lVar17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + lVar7) = 0xffffffff;
LAB_1400548f5:
  if ((local_70 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005579e FUN_14005579e body=68 status=ok
// SIG undefined FUN_14005579e(void)

void FUN_14005579e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if ((int)lVar2 + (int)param_1[1] < *(int *)(*param_1 + 0x78)) {
        FUN_14475108c(*(undefined8 *)
                       (*(longlong *)(*param_1 + 0x70) + ((int)param_1[1] + lVar2) * 8));
        iVar1 = *(int *)((longlong)param_1 + 0xc);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < iVar1);
  }
  return;
}



// FUNCTION 1400557e2 FUN_1400557e2 body=387 status=ok
// SIG undefined FUN_1400557e2(void)

void FUN_1400557e2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [11];
  longlong *local_80;
  longlong local_60;
  longlong local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_1 + 0x150) + 5;
  if (*(byte *)(param_1 + 0x15d) < 3) {
    iVar1 = *(int *)(param_1 + 0x150);
  }
  FUN_1447400e4(local_d8,(longlong)(iVar1 + *(int *)(param_2 + 0xa0) + 1),1);
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar2 = param_1 + 0x138;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x148);
    }
    FUN_1401177fa(local_d8,lVar2);
  }
  if (2 < *(byte *)(param_1 + 0x15d)) {
    FUN_1401177fa(local_d8,param_1 + 0x160,2);
    FUN_1401177fa(local_d8,param_1 + 0x164,3);
  }
  FUN_1400748c2(local_d8,0);
  FUN_1401177fa(local_d8,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0xa0));
  FUN_140055966(param_2,local_d8);
  local_d8[0] = &PTR_FUN_149e37560;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_d8[0] = &PTR__purecall_149e35f70;
  if (local_80 != (longlong *)0x0) {
    if (*local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_80);
  }
  if (local_60 != 0) {
    if (*(longlong *)(local_60 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_60);
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140055966 FUN_140055966 body=131 status=ok
// SIG undefined FUN_140055966(void)

longlong FUN_140055966(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1400e9352();
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return param_1;
}



// FUNCTION 1400559ea FUN_1400559ea body=423 status=ok
// SIG undefined FUN_1400559ea(void)

void FUN_1400559ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28);
  if (0 < iVar6) {
    iVar8 = 0;
    do {
      plVar10 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10);
      if ((((*plVar10 == 0) || (plVar10[1] == 0)) || (*(int *)(plVar10[1] + 8) < 1)) ||
         (plVar10[2] == 0)) {
        FUN_1405d2f2e(plVar1,iVar8);
        FUN_1405d2fba(plVar1);
        iVar8 = iVar8 + -1;
        iVar6 = *(int *)(param_1 + 0x28);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  plVar10 = *(longlong **)(param_1 + 0x10);
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    uVar7 = 0;
  }
  else {
    plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x18) * 2;
    do {
      plVar3 = (longlong *)*plVar10;
      plVar4 = (longlong *)plVar10[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (((*plVar3 == 0) || (plVar3[1] == 0)) ||
         ((*(int *)(plVar3[1] + 8) < 1 || (plVar3[2] == 0)))) {
        if (plVar4 != (longlong *)0x0) goto LAB_140055aa8;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar6 + 1U) {
          FUN_140055bdc(plVar1,iVar6);
        }
        lVar5 = *plVar1;
        *(longlong **)(lVar5 + (longlong)iVar6 * 0x10) = plVar3;
        *(longlong **)(lVar5 + 8 + (longlong)iVar6 * 0x10) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
LAB_140055aa8:
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
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar9);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    plVar10 = *(longlong **)(param_1 + 0x10);
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  FUN_140055b91(plVar10,uVar7);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_145f9a05a(param_1 + 0x10,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140055af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 140055b91 FUN_140055b91 body=75 status=ok
// SIG undefined FUN_140055b91(void)

void FUN_140055b91(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140055bdc FUN_140055bdc body=269 status=ok
// SIG undefined FUN_140055bdc(void)

void FUN_140055bdc(longlong param_1,int param_2)

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



// FUNCTION 140055cea FUN_140055cea body=9 status=ok
// SIG undefined FUN_140055cea(void)

void FUN_140055cea(longlong param_1)

{
  FUN_140055cf4(param_1 + 0x10);
  return;
}



// FUNCTION 140055cf4 FUN_140055cf4 body=450 status=ok
// SIG undefined FUN_140055cf4(void)

void FUN_140055cf4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_144740518();
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x8f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  FUN_140055f10(lVar4,*(undefined4 *)(param_1 + 0x8a8));
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FUN_1400020a8();
  }
  FUN_140055f48(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_140762ea4(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbb96(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140055eb6(param_1 + 0xb0);
  FUN_140055eb6(param_1 + 0x48);
  FUN_14004673c(param_1 + 0x18,0);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140055e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140055eb6 FUN_140055eb6 body=90 status=ok
// SIG undefined FUN_140055eb6(void)

void FUN_140055eb6(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140055f10 FUN_140055f10 body=56 status=ok
// SIG undefined FUN_140055f10(void)

void FUN_140055f10(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140055f48 FUN_140055f48 body=329 status=ok
// SIG undefined FUN_140055f48(void)

void FUN_140055f48(longlong *param_1)

{
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_142875150(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_142875192(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1428751cc(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1428751fd(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14287523f(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14171ee09(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_142875273(param_1[4],(int)param_1[5]);
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



// FUNCTION 140056092 FUN_140056092 body=799 status=ok
// SIG undefined FUN_140056092(void)

ulonglong FUN_140056092(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  uint7 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  double local_128;
  longlong local_118;
  longlong lStack_110;
  uint *local_108;
  uint local_100;
  undefined1 local_f1;
  LARGE_INTEGER local_f0 [2];
  undefined1 *local_e0;
  uint **local_d8;
  LARGE_INTEGER local_d0;
  undefined1 *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar1 = (uint *)(param_1 + 0x18);
  do {
    local_118 = *param_2;
    lStack_110 = param_2[1];
    LVar4.QuadPart = FUN_14002f804(param_1,&local_118,0);
    iVar8 = 0x28;
    do {
      if ((*(byte *)(param_1 + 0xa0) & 1) != 0) break;
      LVar4 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_2 + 1))->QuadPart;
      if ((undefined *)LVar4.QuadPart != (undefined *)0xffffffffffffffff) {
        if ((undefined *)LVar4.QuadPart == (undefined *)0x0) break;
        QueryPerformanceCounter(&local_d0);
        LVar4.QuadPart = param_2[1] + *param_2;
        if ((ulonglong)LVar4 < (ulonglong)local_d0) break;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
LAB_14005633b:
      uVar3 = *(undefined1 *)(param_1 + 0xa0);
      uVar6 = (uint7)((ulonglong)LVar4 >> 8);
      goto LAB_140056345;
    }
    if (param_2[1] != -1) {
      LVar4.QuadPart = 0;
      if (param_2[1] != 0) {
        QueryPerformanceCounter(&local_d0);
        LVar4.QuadPart = param_2[1] + *param_2;
        if ((ulonglong)local_d0 <= (ulonglong)LVar4) goto LAB_1400561d0;
      }
      goto LAB_14005633b;
    }
LAB_1400561d0:
    uVar9 = *puVar1;
    do {
      LOCK();
      uVar2 = *puVar1;
      bVar10 = uVar9 == uVar2;
      if (bVar10) {
        *puVar1 = uVar9 | 1;
        uVar2 = uVar9;
      }
      uVar9 = uVar2;
      UNLOCK();
    } while (!bVar10);
    if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
      uVar6 = (uint7)(uint3)(uVar9 >> 8);
      uVar3 = 1;
LAB_140056345:
      if ((local_c0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return CONCAT71(uVar6,uVar3) & 0xffffffffffffff01;
    }
    lVar5 = param_2[1];
    uVar7 = 0xffffffff;
    if (lVar5 != -1) {
      auVar14._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
      auVar14._0_8_ = lVar5;
      auVar14._12_4_ = 0x45300000;
      dVar13 = (((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0) +
               (auVar14._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
      QueryPerformanceCounter(&local_d0);
      lVar5 = local_d0.QuadPart - *param_2;
      auVar12._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
      auVar12._0_8_ = lVar5;
      auVar12._12_4_ = 0x45300000;
      auVar11._8_8_ = 0;
      auVar11._0_8_ =
           (dVar13 - (((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0) +
                     (auVar12._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 + 0.5;
      auVar12 = roundpd(auVar11,auVar11,1);
      uVar7 = ((longlong)auVar12._0_8_ + 9999) / 10000;
      if (0xfffffffe < (longlong)uVar7) {
        uVar7 = 0xffffffff;
      }
      if ((longlong)uVar7 < 1) {
        uVar7 = 0;
      }
    }
    if ((*puVar1 & 0xfffffffe) == (uVar9 & 0xfffffffe)) {
      local_c8 = &local_f1;
      local_d0.QuadPart = (LONGLONG)&DAT_14682da90;
      local_d8 = &local_108;
      local_e0 = &LAB_14682da92;
      local_108 = puVar1;
      local_100 = uVar9 & 0xfffffffe;
      QueryPerformanceCounter(local_f0);
      local_128 = (double)local_f0[0].QuadPart * DAT_14c83f420 + 16777216.0 +
                  (double)(uVar7 & 0xffffffff) * 0.001;
      FUN_1456d3e9c(local_f0,puVar1,&local_e0,&local_d0);
    }
  } while( true );
}



// FUNCTION 1400563b2 FUN_1400563b2 body=48 status=ok
// SIG undefined FUN_1400563b2(void)

void FUN_1400563b2(longlong param_1)

{
  FUN_144842962();
  FUN_1400563e2(param_1 + 0x678,param_1);
  FUN_140056480(param_1 + 0x678,1);
  return;
}



// FUNCTION 1400563e2 FUN_1400563e2 body=157 status=ok
// SIG undefined FUN_1400563e2(void)

void FUN_1400563e2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_144740618(param_1);
  return;
}



// FUNCTION 140056480 FUN_140056480 body=163 status=ok
// SIG undefined FUN_140056480(void)

void FUN_140056480(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143aa362a();
  local_38 = 0;
  uStack_30 = 0;
  FUN_1406fbf66(param_1 + 0x11,&local_38);
  if ((longlong)(int)uStack_30 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (longlong)(int)uStack_30 << 5;
    lVar3 = local_38;
    do {
      (**(code **)(*param_1 + 0x58))(param_1,lVar3,0);
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
    uVar1 = uStack_30 & 0xffffffff;
  }
  FUN_1406fc1fc(local_38,uVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140056534 FUN_140056534 body=113 status=ok
// SIG undefined FUN_140056534(void)

void FUN_140056534(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar1);
  FUN_1400565a5(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 1400565a5 FUN_1400565a5 body=45 status=ok
// SIG undefined FUN_1400565a5(void)

void FUN_1400565a5(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1400565e2 FUN_1400565e2 body=113 status=ok
// SIG undefined FUN_1400565e2(void)

void FUN_1400565e2(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar1);
  FUN_140056653(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 140056653 FUN_140056653 body=45 status=ok
// SIG undefined FUN_140056653(void)

void FUN_140056653(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140056680 FUN_140056680 body=128 status=ok
// SIG undefined FUN_140056680(void)

undefined8 * FUN_140056680(undefined8 *param_1,wchar_t *param_2)

{
  int extraout_EAX;
  int iVar1;
  int iVar3;
  uint uVar4;
  size_t sVar2;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar2 = wcslen(param_2);
    extraout_EAX = (int)sVar2;
    uVar4 = extraout_EAX + 1;
    uVar5 = (ulonglong)uVar4;
    if (extraout_EAX < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    if (extraout_EAX < 0) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446f8c06(param_1,uVar5);
      iVar3 = *(int *)(param_1 + 1);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar3 + uVar4;
    if ((uint)(iVar1 - iVar3) < uVar4) {
      FUN_144a2dbb8(param_1);
    }
    memcpy((void *)*param_1,param_2,uVar5 * 2);
  }
  return param_1;
}



// FUNCTION 140056702 FUN_140056702 body=175 status=ok
// SIG undefined FUN_140056702(void)

bool FUN_140056702(longlong param_1,undefined4 param_2,float param_3,float *param_4)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  undefined1 auStack_68 [44];
  float local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x3a8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x7c0))(plVar1,param_2,&local_3c,local_38);
    if (cVar2 == '\0') {
      if (param_4 != (float *)0x0) {
        *param_4 = -1.0;
      }
    }
    else {
      if (param_4 != (float *)0x0) {
        if (local_3c < 0.0) {
          fVar4 = sqrtf(local_3c);
        }
        else {
          fVar4 = SQRT(local_3c);
        }
        *param_4 = fVar4;
      }
      if (0.0 <= local_3c) {
        bVar3 = local_3c <= param_3 * param_3;
        goto LAB_140056784;
      }
    }
  }
  bVar3 = false;
LAB_140056784:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400567b2 FUN_1400567b2 body=469 status=ok
// SIG undefined FUN_1400567b2(void)

void FUN_1400567b2(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400568e2:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14005691f:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14005681c;
LAB_140056811:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14005681c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000140056849;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14005689f:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14005691f;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400568e2;
code_r0x000140056849:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14005689f;
    }
  }
  goto LAB_140056811;
}



// FUNCTION 140056988 FUN_140056988 body=471 status=ok
// SIG undefined FUN_140056988(void)

void FUN_140056988(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  ushort uVar1;
  ulonglong *puVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0xf0);
  if (uVar1 != 0xffff) {
    puVar2 = (ulonglong *)*param_6;
    uVar8 = *puVar2;
    uVar13 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
    if ((uVar8 & 1) == 0) {
      uVar13 = uVar8;
    }
    uVar6 = (uint)puVar2[1];
    uVar11 = 0;
    uVar10 = uVar6;
    if (8 < (int)uVar6) {
      uVar11 = 0;
      uVar7 = uVar6;
      do {
        uVar10 = uVar7 >> 1;
        if (*(ushort *)(uVar13 + (ulonglong)(uVar10 + uVar11) * 2) < uVar1) {
          uVar11 = uVar10 + uVar11 + (uVar7 & 1);
        }
        bVar3 = 0x11 < uVar7;
        uVar7 = uVar10;
      } while (bVar3);
    }
    uVar10 = uVar10 + uVar11 + 1;
    if ((int)uVar10 < (int)uVar6) {
      uVar6 = uVar10;
    }
    iVar5 = uVar6 - uVar11;
    if (iVar5 != 0 && (int)uVar11 <= (int)uVar6) {
      uVar8 = (ulonglong)uVar11;
      do {
        if (*(ushort *)(uVar13 + uVar8 * 2) == uVar1) {
          *(undefined8 *)(param_6[1] + (uVar8 & 0xffffffff) * 8) = *(undefined8 *)(param_4 + 0x10);
          break;
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  uVar6 = *(uint *)(param_1 + 0xe8);
  uVar8 = (ulonglong)uVar6;
  uVar10 = *(uint *)(param_4 + 0x40);
  if ((int)uVar6 < (int)*(uint *)(param_4 + 0x40)) {
    uVar10 = uVar6;
  }
  if (0 < (int)uVar10) {
    uVar13 = 0;
    do {
      lVar4 = FUN_144a61630(uVar8,*(longlong *)(param_4 + 0x38) + uVar13 * 0x10,param_2);
      if (lVar4 == 0) {
        FUN_14303e01a(param_5,uVar13 * 0x10 + *(longlong *)(param_4 + 0x38));
      }
      uVar9 = *(ulonglong *)(param_1 + 0xe0);
      uVar8 = ((longlong)uVar9 >> 0x18) + param_1 + 0xe0;
      if ((uVar9 & 1) == 0) {
        uVar8 = uVar9;
      }
      uVar1 = *(ushort *)(uVar8 + uVar13 * 2);
      if (uVar1 != 0xffff) {
        puVar2 = (ulonglong *)*param_6;
        uVar9 = *puVar2;
        uVar8 = ((longlong)uVar9 >> 0x18) + (longlong)puVar2;
        if ((uVar9 & 1) == 0) {
          uVar8 = uVar9;
        }
        uVar6 = (uint)puVar2[1];
        uVar7 = 0;
        uVar11 = uVar6;
        if (8 < (int)uVar6) {
          uVar7 = 0;
          uVar12 = uVar6;
          do {
            uVar11 = uVar12 >> 1;
            if (*(ushort *)(uVar8 + (ulonglong)(uVar11 + uVar7) * 2) < uVar1) {
              uVar7 = uVar11 + uVar7 + (uVar12 & 1);
            }
            bVar3 = 0x11 < uVar12;
            uVar12 = uVar11;
          } while (bVar3);
        }
        uVar11 = uVar11 + uVar7 + 1;
        if ((int)uVar11 < (int)uVar6) {
          uVar6 = uVar11;
        }
        iVar5 = uVar6 - uVar7;
        if (iVar5 != 0 && (int)uVar7 <= (int)uVar6) {
          uVar9 = (ulonglong)uVar7;
          do {
            if (*(ushort *)(uVar8 + uVar9 * 2) == uVar1) {
              uVar8 = uVar9 & 0xffffffff;
              *(longlong *)(param_6[1] + uVar8 * 8) = lVar4;
              break;
            }
            uVar9 = uVar9 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar10);
  }
  return;
}



// FUNCTION 140056b60 FUN_140056b60 body=115 status=ok
// SIG undefined FUN_140056b60(void)

void FUN_140056b60(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0) && ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0)) {
    lVar1 = param_1[0x12];
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar2 < (longlong)(lVar1 + param_3)) {
      FUN_14572541c(param_1);
      return;
    }
    memcpy(param_2,(void *)((longlong)(int)param_1[0x12] + *(longlong *)param_1[0x13]),param_3);
    param_1[0x12] = param_1[0x12] + param_3;
  }
  return;
}



// FUNCTION 140056bea FUN_140056bea body=8 status=ok
// SIG undefined FUN_140056bea(void)

bool FUN_140056bea(longlong param_1)

{
  return *(int *)(param_1 + 0x24) != 0;
}



// FUNCTION 140056bf2 FUN_140056bf2 body=288 status=ok
// SIG undefined FUN_140056bf2(void)

void FUN_140056bf2(longlong param_1,byte *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x1c) < 3) {
    uVar6 = *(uint *)(param_1 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (uint *)(param_1 + 0x18);
      LOCK();
      uVar3 = *puVar1;
      if (uVar6 == uVar3) {
        *puVar1 = uVar6 + 1;
      }
      UNLOCK();
      if (uVar6 == uVar3) {
        FUN_1447458da(puVar1,0xffffffff);
      }
    }
    bVar5 = *param_2;
    LOCK();
    puVar2 = (ulonglong *)(param_1 + 0x80);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 | 2;
    bVar7 = (uVar4 >> 1 & 1) == 0;
    UNLOCK();
    if (bVar7) {
      FUN_144713628(&DAT_14c82ba00,param_1 + 0x48,bVar5 ^ 1);
    }
    *param_2 = *param_2 | bVar7;
  }
  else {
    local_58 = 0x20100000001;
    uStack_50 = 0x30100000101;
    local_48 = DAT_14c7585c8;
    local_44 = DAT_14c7585c8 | 0x200;
    local_40 = DAT_14c7585c8 | 0x100;
    local_3c = DAT_14c7585c8 | 0x300;
    local_38 = 0;
    uStack_34 = 0x200;
    uStack_30 = 0x100;
    uStack_2c = 0x300;
    local_68 = 0xff;
    (**(code **)*DAT_14c82b500)
              (DAT_14c82b500,param_1,1,
               *(undefined4 *)((longlong)&local_58 + (ulonglong)(*(int *)(param_1 + 0x1c) - 3) * 4))
    ;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140056d14 FUN_140056d14 body=75 status=ok
// SIG undefined FUN_140056d14(void)

undefined8 * FUN_140056d14(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  puVar2 = (undefined8 *)**(longlong **)(param_1 + 0x10);
  **(longlong **)(param_1 + 0x10) = param_1;
  UNLOCK();
  if (puVar2 != (undefined8 *)0x0) {
    cVar3 = FUN_1456bb142(puVar2 + 0x11,param_1);
    if (cVar3 != '\0') {
      return puVar2;
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140056d60 FUN_140056d60 body=282 status=ok
// SIG undefined FUN_140056d60(void)

undefined8 * FUN_140056d60(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 140056e7a FUN_140056e7a body=282 status=ok
// SIG undefined FUN_140056e7a(void)

undefined8 * FUN_140056e7a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1429b3f75);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 140056f94 FUN_140056f94 body=6361 status=ok
// SIG undefined FUN_140056f94(void)

void FUN_140056f94(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  int iVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  longlong local_1b8;
  byte local_1a9;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  int local_17c;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar23 = *(uint *)(param_1 + 0x30);
  uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
  uStack_110 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  uStack_108 = CONCAT44(uStack_108._4_4_,(undefined4)uStack_108);
  uStack_100 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  if (((uVar23 & 1) == 0) ||
     (plVar6 = *(longlong **)(param_2 + 0x18),
     uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118),
     uStack_110 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110),
     uStack_108 = CONCAT44(uStack_108._4_4_,(undefined4)uStack_108),
     uStack_100 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100), (int)plVar6[1] == 0))
  goto LAB_14005878a;
  local_17c = DAT_14cb3a5f8;
  local_1b8 = param_1;
  local_1a0 = param_2;
  if (DAT_14cb3a5f8 != 0) {
    lVar13 = FUN_14811173e();
    if (param_1 == 0) {
      lVar21 = lVar13 + 0x88;
    }
    else {
      lVar21 = FUN_1481f6aa2(local_1b8);
    }
    FUN_148121460(lVar13,lVar21);
    uVar23 = *(uint *)(local_1b8 + 0x30);
    plVar6 = *(longlong **)(local_1a0 + 0x18);
  }
  lVar21 = local_1a0;
  lVar13 = local_1b8;
  if ((uVar23 & 0x20) == 0) {
    iVar8 = (int)plVar6[1] - *(int *)(local_1a0 + 0x2c);
    local_190 = CONCAT44(local_190._4_4_,iVar8);
    if ((uVar23 & 0x10) == 0) {
      lVar14 = *(longlong *)(local_1a0 + 0x20);
      lVar21 = lVar14 + 0x88;
      lVar16 = *(longlong *)(lVar14 + 0x98);
      if (*(longlong *)(lVar14 + 0x98) == 0) {
        lVar16 = lVar21;
      }
      iVar8 = *(int *)(lVar14 + 0xa0);
      if ((longlong)iVar8 != 0) {
        lVar17 = 0;
        do {
          puVar5 = *(undefined8 **)(lVar16 + lVar17);
          if (puVar5 != *(undefined8 **)(lVar14 + 0x78)) {
            LOCK();
            bVar27 = *(int *)(puVar5 + 1) == 0;
            if (bVar27) {
              *(int *)(puVar5 + 1) = -1;
            }
            UNLOCK();
            if (bVar27) goto LAB_14005719e;
          }
          lVar17 = lVar17 + 8;
        } while ((longlong)iVar8 * 8 != lVar17);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR_FUN_14ade2d80;
      puVar5[2] = lVar14;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0xffffffff00000000;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xb4) = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x114) = 0;
      puVar5[0x20] = 0;
      puVar5[0x21] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      *(undefined8 *)((longlong)puVar5 + 300) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x134) = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      *(undefined4 *)(puVar5 + 0x30) = 1;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      iVar8 = *(int *)(lVar14 + 0xa0);
      *(uint *)(lVar14 + 0xa0) = iVar8 + 1U;
      if (*(uint *)(lVar14 + 0xa4) < iVar8 + 1U) {
        FUN_140e69270(lVar21,iVar8);
      }
      if (*(longlong *)(lVar14 + 0x98) != 0) {
        lVar21 = *(longlong *)(lVar14 + 0x98);
      }
      *(undefined8 **)(lVar21 + (longlong)iVar8 * 8) = puVar5;
      LOCK();
      if (*(int *)(puVar5 + 1) == 0) {
        *(int *)(puVar5 + 1) = -1;
      }
      UNLOCK();
LAB_14005719e:
      *(undefined8 **)(lVar14 + 0x80) = puVar5;
      *(undefined4 *)(puVar5 + 0x24) = 0;
      lVar21 = *(longlong *)(lVar14 + 0x80);
      if (*(int *)(lVar21 + 0x54) < 0) {
        *(undefined4 *)(lVar21 + 0x50) = 0;
        FUN_14481578e(lVar21 + 0x48,0);
      }
      else {
        *(undefined4 *)(lVar21 + 0x50) = 0;
      }
      lVar21 = local_1a0;
      FUN_1447a955c(*(undefined8 *)(local_1a0 + 0x20),
                    *(undefined4 *)(*(longlong *)(local_1a0 + 0x18) + 8),0);
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar21 + 0x20) + 0x80) + 0x120) =
           *(undefined4 *)(*(longlong *)(lVar21 + 0x18) + 8);
      lVar14 = *(longlong *)(lVar21 + 0x20);
      piVar11 = (int *)(*(longlong *)(lVar14 + 0x80) + 8);
      LOCK();
      if (*piVar11 == -1) {
        *piVar11 = 0;
      }
      UNLOCK();
      *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar14 + 0x80);
      *(undefined8 *)(lVar14 + 0x80) = 0;
    }
    else if (0 < *(int *)(local_1a0 + 0x2c)) {
      uVar12 = (longlong)iVar8;
      local_1a8 = (longlong)(int)plVar6[1];
      do {
        FUN_144af3116(*(undefined8 *)(**(longlong **)(lVar21 + 0x18) + uVar12 * 8));
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < local_1a8);
      if (0 < *(int *)(lVar21 + 0x2c)) {
        FUN_143aca0b8(lVar13,lVar21);
        FUN_143aca5ba(lVar13,lVar21);
        uVar12 = (longlong)iVar8;
        do {
          local_198 = uVar12;
          lVar14 = *(longlong *)(**(longlong **)(lVar21 + 0x18) + local_198 * 8);
          lVar16 = (longlong)*(int *)(lVar14 + 0x110);
          if (0 < lVar16) {
            lVar14 = *(longlong *)(lVar14 + 0x108);
            uVar12 = local_198 & 0xffffffff;
            lVar17 = 0;
            do {
              lVar18 = *(longlong *)(lVar14 + lVar17 * 0x10);
              if (1 < *(int *)(lVar18 + 0xd4) - 3U) {
                lVar13 = *(longlong *)(lVar13 + 0x4e0);
                lVar26 = lVar17 * 0x30;
                lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x20) + 0x78);
                lVar20 = (longlong)*(int *)(lVar13 + 8 + lVar26);
                if (lVar20 != 0) {
                  lVar19 = *(longlong *)(lVar13 + lVar26);
                  lVar10 = 0;
                  do {
                    *(undefined4 *)
                     (*(longlong *)(lVar18 + 0x60) + (ulonglong)*(uint *)(lVar19 + lVar10)) =
                         *(undefined4 *)
                          ((ulonglong)
                           (uint)(*(int *)(lVar21 + 0x128) * *(int *)(lVar19 + 4 + lVar10)) +
                           *(longlong *)(lVar21 + 0x18) + uVar12 * 4);
                    lVar10 = lVar10 + 8;
                  } while (lVar20 * 8 != lVar10);
                }
                lVar13 = lVar13 + lVar26;
                iVar8 = *(int *)(lVar13 + 0x18);
                if ((longlong)iVar8 != 0) {
                  lVar20 = *(longlong *)(lVar13 + 0x10);
                  lVar26 = 0;
                  do {
                    *(undefined4 *)
                     (*(longlong *)(lVar18 + 0x60) + (ulonglong)*(uint *)(lVar20 + lVar26)) =
                         *(undefined4 *)
                          ((ulonglong)(uint)(*(int *)(lVar21 + 300) * *(int *)(lVar20 + 4 + lVar26))
                           + *(longlong *)(lVar21 + 0x28) + uVar12 * 4);
                    lVar26 = lVar26 + 8;
                  } while ((longlong)iVar8 * 8 != lVar26);
                }
                iVar8 = *(int *)(lVar13 + 0x28);
                if ((longlong)iVar8 != 0) {
                  lVar13 = *(longlong *)(lVar13 + 0x20);
                  lVar20 = 0;
                  do {
                    lVar26 = (ulonglong)
                             (uint)(*(int *)(lVar21 + 0x130) * *(int *)(lVar13 + 4 + lVar20)) +
                             *(longlong *)(lVar21 + 0x38);
                    if (*(char *)(lVar13 + 8 + lVar20) == '\x01') {
                      uVar1 = *(ushort *)(lVar26 + uVar12 * 2);
                      uVar23 = (uint)uVar1 << 0xd;
                      if ((uVar23 & 0xf800000) == 0xf800000) {
                        fVar24 = (float)(uVar23 | 0x70000000);
                      }
                      else if ((uVar23 & 0xf800000) == 0) {
                        fVar24 = (float)(uVar23 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar24 = (float)((uVar23 & 0xfffe000) + 0x38000000);
                      }
                      *(uint *)(*(longlong *)(lVar18 + 0x60) + (ulonglong)*(uint *)(lVar13 + lVar20)
                               ) = (int)(short)uVar1 & 0x80000000U | (uint)fVar24;
                    }
                    else {
                      *(undefined2 *)
                       (*(longlong *)(lVar18 + 0x60) + (ulonglong)*(uint *)(lVar13 + lVar20)) =
                           *(undefined2 *)(lVar26 + uVar12 * 2);
                    }
                    lVar20 = lVar20 + 0xc;
                  } while ((longlong)iVar8 * 0xc != lVar20);
                }
                *(byte *)(lVar18 + 0xc0) = *(byte *)(lVar18 + 0xc0) | 1;
                lVar21 = local_1a0;
                lVar13 = local_1b8;
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 != lVar16);
          }
          uVar12 = local_198 + 1;
        } while ((longlong)(local_198 + 1) < local_1a8);
      }
    }
    plVar6 = *(longlong **)(lVar21 + 0x18);
    if (0 < (int)plVar6[1]) {
      lVar14 = (longlong)(int)local_190;
      lVar16 = 0;
      do {
        uVar7 = *(undefined8 *)(*plVar6 + lVar16 * 8);
        if (lVar16 < lVar14) {
          FUN_144af3116(uVar7);
        }
        FUN_1481f5846(uVar7);
        iVar8 = *(int *)(lVar21 + 0x98);
        *(uint *)(lVar21 + 0x98) = iVar8 + 1U;
        if (*(uint *)(lVar21 + 0x9c) < iVar8 + 1U) {
          FUN_1481f838c(lVar21 + 0x70,iVar8);
        }
        lVar17 = *(longlong *)(lVar21 + 0x90);
        if (*(longlong *)(lVar21 + 0x90) == 0) {
          lVar17 = lVar21 + 0x70;
        }
        *(undefined8 *)(lVar17 + (longlong)iVar8 * 8) = uVar7;
        if (*(int *)(lVar21 + 0x98) == DAT_14c762a08) {
          FUN_143ac9676(lVar13,lVar21);
        }
        lVar16 = lVar16 + 1;
        plVar6 = *(longlong **)(lVar21 + 0x18);
      } while (lVar16 < (int)plVar6[1]);
    }
  }
  else {
    lVar14 = plVar6[1];
    if ((longlong)(int)lVar14 != 0) {
      lVar16 = *plVar6;
      lVar17 = 0;
      do {
        FUN_144af3116(*(undefined8 *)(lVar16 + lVar17));
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar14 * 8 != lVar17);
    }
    FUN_143aca0b8(lVar13,lVar21);
    iVar8 = *(int *)(lVar21 + 0x2c);
    if (0 < iVar8) {
      FUN_143aca5ba(lVar13,lVar21);
      iVar8 = *(int *)(lVar21 + 0x2c);
    }
    plVar6 = *(longlong **)(lVar21 + 0x18);
    iVar9 = (int)plVar6[1];
    if (0 < iVar9) {
      lVar16 = *(longlong *)(lVar21 + 0x20);
      lVar14 = lVar16 + 0x88;
      lVar17 = *(longlong *)(lVar16 + 0x98);
      if (*(longlong *)(lVar16 + 0x98) == 0) {
        lVar17 = lVar14;
      }
      iVar25 = *(int *)(lVar16 + 0xa0);
      if ((longlong)iVar25 != 0) {
        lVar18 = 0;
        do {
          puVar5 = *(undefined8 **)(lVar17 + lVar18);
          if (puVar5 != *(undefined8 **)(lVar16 + 0x78)) {
            LOCK();
            bVar27 = *(int *)(puVar5 + 1) == 0;
            if (bVar27) {
              *(int *)(puVar5 + 1) = -1;
            }
            UNLOCK();
            if (bVar27) goto LAB_1400573fd;
          }
          lVar18 = lVar18 + 8;
        } while ((longlong)iVar25 * 8 != lVar18);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR_FUN_14ade2d80;
      puVar5[2] = lVar16;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0xffffffff00000000;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xb4) = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x114) = 0;
      puVar5[0x20] = 0;
      puVar5[0x21] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      *(undefined8 *)((longlong)puVar5 + 300) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x134) = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      *(undefined4 *)(puVar5 + 0x30) = 1;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      iVar25 = *(int *)(lVar16 + 0xa0);
      *(uint *)(lVar16 + 0xa0) = iVar25 + 1U;
      if (*(uint *)(lVar16 + 0xa4) < iVar25 + 1U) {
        FUN_140e69270(lVar14,iVar25);
      }
      if (*(longlong *)(lVar16 + 0x98) != 0) {
        lVar14 = *(longlong *)(lVar16 + 0x98);
      }
      *(undefined8 **)(lVar14 + (longlong)iVar25 * 8) = puVar5;
      LOCK();
      if (*(int *)(puVar5 + 1) == 0) {
        *(int *)(puVar5 + 1) = -1;
      }
      UNLOCK();
      lVar21 = local_1a0;
LAB_1400573fd:
      *(undefined8 **)(lVar16 + 0x80) = puVar5;
      *(undefined4 *)(puVar5 + 0x24) = 0;
      lVar14 = *(longlong *)(lVar16 + 0x80);
      if (*(int *)(lVar14 + 0x54) < 0) {
        *(undefined4 *)(lVar14 + 0x50) = 0;
        FUN_14481578e(lVar14 + 0x48,0);
      }
      else {
        *(undefined4 *)(lVar14 + 0x50) = 0;
      }
      lVar14 = *(longlong *)(lVar16 + 0x80);
      FUN_14009337e(lVar14,iVar9);
      *(int *)(lVar14 + 0x120) = iVar9;
      cVar4 = (**(code **)(**(longlong **)(lVar13 + 0x438) + 0x18))();
      if (cVar4 == '\0') {
        lVar14 = (longlong)(int)(*(longlong **)(lVar21 + 0x18))[1];
        if (lVar14 != 0) {
          lVar16 = **(longlong **)(lVar21 + 0x18);
          lVar17 = 0;
          do {
            lVar18 = *(longlong *)(lVar16 + lVar17);
            if (*(int *)(lVar18 + 0x86c) != 4) {
              *(undefined4 *)(lVar18 + 0x86c) = 4;
            }
            lVar17 = lVar17 + 8;
          } while (lVar14 * 8 != lVar17);
        }
      }
      else {
        iVar25 = iVar9 - iVar8;
        local_1a8 = lVar13 + 0x438;
        if (0 < iVar25) {
          (**(code **)(**(longlong **)(lVar13 + 0x438) + 0x28))
                    (*(longlong **)(lVar13 + 0x438),*(undefined8 *)(lVar21 + 0x18));
          local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
          FUN_144966a0a(*(undefined8 *)(lVar13 + 0x438),0,*(undefined8 *)(lVar21 + 0x20),0);
          local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
          FUN_144966a0a(*(undefined8 *)(lVar13 + 0x438),1,lVar13 + 0x378,0);
          local_c0 = 0;
          local_b8 = 0xc00000000;
          local_80 = 0;
          local_78 = 0xc00000000;
          FUN_144b38724((ulonglong)
                        ((*(byte *)(*(longlong *)**(undefined8 **)(lVar21 + 0x18) + 0x790) & 1) << 5
                        ) + *(longlong *)**(undefined8 **)(lVar21 + 0x18) + 0x270,local_1a8);
          local_1c8 = &local_120;
          (**(code **)(**(longlong **)(lVar13 + 0x438) + 0x20))
                    (*(longlong **)(lVar13 + 0x438),0,*(undefined4 *)(lVar21 + 0x28),iVar25);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          lVar13 = local_1b8;
          if (local_c0 != 0) {
            FUN_1400020a8();
            lVar13 = local_1b8;
          }
        }
        if ((DAT_14cb43890 != 0) || ((*(byte *)(*(longlong *)(lVar21 + 8) + 0x60) & 1) != 0)) {
          local_148._0_4_ = 0;
          local_148._4_4_ = 0;
          FUN_140056680(&local_120,L"System Data - Post Update");
          local_1c8 = &local_148;
          FUN_143a774ea(lVar14,0,iVar9,&local_120);
          if (CONCAT44(local_120._4_4_,(undefined4)local_120) != 0) {
            FUN_1400020a8();
          }
          uVar7 = *(undefined8 *)(local_1b8 + 0x3f0);
          local_148._0_4_ = 0;
          local_148._4_4_ = 0;
          FUN_140056680(&local_120,L"Update Instance Paramter Data");
          local_1c8 = &local_148;
          FUN_143a774ea(uVar7,0,iVar9,&local_120);
          lVar21 = local_1a0;
          lVar13 = local_1b8;
          if (CONCAT44(local_120._4_4_,(undefined4)local_120) != 0) {
            FUN_1400020a8();
            lVar21 = local_1a0;
            lVar13 = local_1b8;
          }
        }
        if ((0 < iVar8) && (DAT_14c762a00 != 0)) {
          (**(code **)(**(longlong **)(lVar13 + 0x438) + 0x28))
                    (*(longlong **)(lVar13 + 0x438),*(undefined8 *)(lVar21 + 0x18));
          local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
          FUN_144966a0a(*(undefined8 *)(lVar13 + 0x438),0,*(undefined8 *)(lVar21 + 0x20),iVar25);
          local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
          FUN_144966a0a(*(undefined8 *)(lVar13 + 0x438),1,lVar13 + 0x378,iVar25);
          lVar16 = *(longlong *)**(undefined8 **)(lVar21 + 0x18);
          uVar12 = (ulonglong)((*(byte *)(lVar16 + 0x790) & 1) << 5);
          puVar5 = (undefined8 *)(lVar16 + 0x270 + uVar12);
          puVar15 = (undefined8 *)(lVar16 + 0x280 + uVar12);
          local_138 = *puVar15;
          uStack_130 = puVar15[1];
          local_148._0_4_ = (undefined4)*puVar5;
          uStack_13c = (undefined4)((ulonglong)puVar5[1] >> 0x20);
          local_148._4_4_ = 0x38d1b717;
          uStack_140 = 0x461c4000;
          local_c0 = 0;
          local_b8 = 0xc00000000;
          local_80 = 0;
          local_78 = 0xc00000000;
          FUN_144b38724(&local_148,local_1a8);
          local_1c8 = &local_120;
          (**(code **)(**(longlong **)(lVar13 + 0x438) + 0x20))
                    (*(longlong **)(lVar13 + 0x438),0,*(undefined4 *)(lVar21 + 0x28),iVar8);
          if ((DAT_14cb43890 != 0) || ((*(byte *)(*(longlong *)(local_1a0 + 8) + 0x60) & 1) != 0)) {
            local_150 = 0;
            FUN_140056680(local_160,L"System Data - Post Update (new systems)");
            local_1c8 = &local_150;
            FUN_143a774ea(lVar14,iVar25,iVar8,local_160);
            if (local_160[0] != 0) {
              FUN_1400020a8();
            }
            uVar7 = *(undefined8 *)(local_1b8 + 0x3f0);
            local_150 = 0;
            FUN_140056680(local_160,L"Update Instance Paramter Data (new systems)");
            local_1c8 = &local_150;
            FUN_143a774ea(uVar7,iVar25,iVar8,local_160);
            if (local_160[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          lVar21 = local_1a0;
          lVar13 = local_1b8;
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
        }
      }
      lVar14 = *(longlong *)(lVar21 + 0x20);
      piVar11 = (int *)(*(longlong *)(lVar14 + 0x80) + 8);
      LOCK();
      if (*piVar11 == -1) {
        *piVar11 = 0;
      }
      UNLOCK();
      *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar14 + 0x80);
      *(undefined8 *)(lVar14 + 0x80) = 0;
      plVar6 = *(longlong **)(lVar21 + 0x18);
      iVar9 = (int)plVar6[1];
    }
    if (iVar9 != 0) {
      iVar8 = *(int *)(*(longlong *)(lVar13 + 0x10) + 0x4ac);
      lVar14 = *(longlong *)(*(longlong *)(lVar21 + 0x20) + 0x78);
      local_1a9 = iVar8 != -1 && lVar14 != 0;
      local_170 = 0;
      local_178 = 0;
      if (iVar8 != -1 && lVar14 != 0) {
        local_178 = (ulonglong)(uint)(iVar8 * *(int *)(lVar14 + 300)) + *(longlong *)(lVar14 + 0x28)
        ;
        local_170 = (longlong)*(int *)(lVar14 + 0x120);
      }
      if (iVar9 < 1) {
        puVar15 = (undefined8 *)*plVar6;
        puVar5 = puVar15 + iVar9;
      }
      else {
        local_168 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x4b0);
        uVar12 = 0;
        do {
          lVar13 = *(longlong *)(*plVar6 + uVar12 * 8);
          if (((longlong)uVar12 < local_170 & local_1a9) == 1) {
            iVar8 = *(int *)(local_178 + uVar12 * 4);
            iVar9 = *(int *)(lVar13 + 0x86c);
            if ((iVar9 != 4 && iVar9 != iVar8) &&
               (*(int *)(lVar13 + 0x86c) = iVar8, iVar9 = iVar8, iVar8 == 0)) {
              *(byte *)(lVar13 + 0x798) = *(byte *)(lVar13 + 0x798) | 1;
              iVar8 = *(int *)(lVar13 + 0x110);
              if ((longlong)iVar8 == 0) goto LAB_1400585fc;
              lVar21 = *(longlong *)(lVar13 + 0x108);
              lVar14 = 0;
              do {
                lVar16 = (**(code **)(**(longlong **)(lVar21 + lVar14) + 0x68))();
                if ((lVar16 != 0) && (*(int *)(lVar16 + 0xd4) != 4)) {
                  *(undefined4 *)(lVar16 + 0xd4) = 0;
                }
                lVar14 = lVar14 + 0x10;
              } while ((longlong)iVar8 * 0x10 != lVar14);
              iVar9 = *(int *)(lVar13 + 0x86c);
              lVar21 = local_1a0;
            }
            if ((iVar9 != 4) && (lVar14 = (longlong)*(int *)(lVar13 + 0x110), 0 < lVar14)) {
              local_190 = *(longlong *)(lVar13 + 0x108);
              lVar13 = 0;
              local_188 = lVar14;
              do {
                local_198 = lVar13 * 0x10;
                plVar6 = *(longlong **)(local_190 + local_198);
                if (1 < *(int *)((longlong)plVar6 + 0xd4) - 3U) {
                  lVar16 = *(longlong *)(local_1b8 + 0x4e0);
                  local_1a8 = lVar13 * 0x30;
                  lVar17 = *(longlong *)(*(longlong *)(lVar21 + 0x20) + 0x78);
                  lVar18 = (longlong)*(int *)(lVar16 + 8 + local_1a8);
                  if (lVar18 != 0) {
                    lVar20 = *(longlong *)(lVar16 + local_1a8);
                    lVar26 = 0;
                    do {
                      *(undefined4 *)(plVar6[0xc] + (ulonglong)*(uint *)(lVar20 + lVar26)) =
                           *(undefined4 *)
                            ((ulonglong)
                             (uint)(*(int *)(lVar17 + 0x128) * *(int *)(lVar20 + 4 + lVar26)) +
                             *(longlong *)(lVar17 + 0x18) + uVar12 * 4);
                      lVar26 = lVar26 + 8;
                    } while (lVar18 * 8 != lVar26);
                  }
                  lVar16 = lVar16 + local_1a8;
                  iVar8 = *(int *)(lVar16 + 0x18);
                  if ((longlong)iVar8 != 0) {
                    lVar18 = *(longlong *)(lVar16 + 0x10);
                    lVar20 = 0;
                    do {
                      *(undefined4 *)(plVar6[0xc] + (ulonglong)*(uint *)(lVar18 + lVar20)) =
                           *(undefined4 *)
                            ((ulonglong)
                             (uint)(*(int *)(lVar17 + 300) * *(int *)(lVar18 + 4 + lVar20)) +
                             *(longlong *)(lVar17 + 0x28) + uVar12 * 4);
                      lVar20 = lVar20 + 8;
                    } while ((longlong)iVar8 * 8 != lVar20);
                  }
                  iVar8 = *(int *)(lVar16 + 0x28);
                  if ((longlong)iVar8 != 0) {
                    lVar16 = *(longlong *)(lVar16 + 0x20);
                    lVar18 = 0;
                    do {
                      lVar20 = (ulonglong)
                               (uint)(*(int *)(lVar17 + 0x130) * *(int *)(lVar16 + 4 + lVar18)) +
                               *(longlong *)(lVar17 + 0x38);
                      if (*(char *)(lVar16 + 8 + lVar18) == '\x01') {
                        uVar1 = *(ushort *)(lVar20 + uVar12 * 2);
                        uVar23 = (uint)uVar1 << 0xd;
                        if ((uVar23 & 0xf800000) == 0xf800000) {
                          fVar24 = (float)(uVar23 | 0x70000000);
                        }
                        else if ((uVar23 & 0xf800000) == 0) {
                          fVar24 = (float)(uVar23 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar24 = (float)((uVar23 & 0xfffe000) + 0x38000000);
                        }
                        *(uint *)(plVar6[0xc] + (ulonglong)*(uint *)(lVar16 + lVar18)) =
                             (int)(short)uVar1 & 0x80000000U | (uint)fVar24;
                      }
                      else {
                        *(undefined2 *)(plVar6[0xc] + (ulonglong)*(uint *)(lVar16 + lVar18)) =
                             *(undefined2 *)(lVar20 + uVar12 * 2);
                      }
                      lVar18 = lVar18 + 0xc;
                    } while ((longlong)iVar8 * 0xc != lVar18);
                  }
                  *(byte *)(plVar6 + 0x18) = *(byte *)(plVar6 + 0x18) | 1;
                  lVar16 = (**(code **)(*plVar6 + 0x68))();
                  if (lVar16 != 0) {
                    iVar8 = *(int *)(local_168 + lVar13 * 4);
                    lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x20) + 0x78);
                    if ((iVar8 == -1 || lVar21 == 0) ||
                       ((longlong)*(int *)(lVar21 + 0x120) <= (longlong)uVar12)) {
                      uVar23 = 4;
LAB_140057e70:
                      if (*(int *)(lVar16 + 0xd4) != 4) goto LAB_140057e75;
                    }
                    else {
                      uVar23 = *(uint *)((ulonglong)(uint)(iVar8 * *(int *)(lVar21 + 300)) +
                                         *(longlong *)(lVar21 + 0x28) + uVar12 * 4);
                      if (uVar23 < 5) goto LAB_140057e70;
                      uVar23 = 1;
LAB_140057e75:
                      *(uint *)(lVar16 + 0xd4) = uVar23;
                    }
                    lVar21 = *(longlong *)(*(longlong *)(local_1b8 + 0x10) + 0x4c0);
                    lVar14 = (longlong)*(int *)(lVar21 + 8 + local_198);
                    if (0 < lVar14) {
                      piVar11 = (int *)(*(longlong *)(lVar21 + local_198) + 8);
                      lVar17 = 0;
                      lVar21 = 0;
                      do {
                        if (lVar21 < *(int *)(lVar16 + 0x198)) {
                          iVar8 = piVar11[-1];
                          iVar9 = *piVar11;
                          lVar18 = *(longlong *)(*(longlong *)(local_1a0 + 0x20) + 0x78);
                          uStack_108 = 0;
                          local_120._4_4_ = 0;
                          uStack_118 = 0;
                          uStack_110 = 0;
                          uStack_100 = 0;
                          local_120._0_4_ =
                               CONCAT31(local_120._1_3_,iVar9 != -1 && (iVar8 != -1 && lVar18 != 0))
                          ;
                          if (iVar9 != -1 && (iVar8 != -1 && lVar18 != 0)) {
                            uStack_118 = (ulonglong)(uint)(*(int *)(lVar18 + 0x128) * iVar8) +
                                         *(longlong *)(lVar18 + 0x18);
                            uStack_110 = (ulonglong)(uint)((iVar8 + 1) * *(int *)(lVar18 + 0x128)) +
                                         *(longlong *)(lVar18 + 0x18);
                            uStack_108 = (ulonglong)(uint)(*(int *)(lVar18 + 300) * iVar9) +
                                         *(longlong *)(lVar18 + 0x28);
                            uStack_100 = (ulonglong)(uint)((iVar9 + 1) * *(int *)(lVar18 + 300)) +
                                         *(longlong *)(lVar18 + 0x28);
                            local_120._4_4_ = *(undefined4 *)(lVar18 + 0x120);
                          }
                          FUN_144b38f2e(&local_148,uVar12 & 0xffffffff);
                          auVar3._4_4_ = local_148._4_4_;
                          auVar3._0_4_ = (undefined4)local_148;
                          auVar3._8_4_ = uStack_140;
                          auVar3._12_4_ = uStack_13c;
                          *(undefined1 (*) [16])(*(longlong *)(lVar16 + 400) + lVar17) = auVar3;
                        }
                        lVar21 = lVar21 + 1;
                        lVar17 = lVar17 + 0x10;
                        piVar11 = piVar11 + 3;
                      } while (lVar14 * 0x10 != lVar17);
                    }
                    lVar21 = *(longlong *)(local_1b8 + 0x4a0);
                    lVar14 = *(longlong *)(*(longlong *)(local_1a0 + 0x20) + 0x78);
                    lVar17 = (longlong)*(int *)(lVar21 + 8 + local_1a8);
                    if (lVar17 != 0) {
                      lVar18 = *(longlong *)(lVar21 + local_1a8);
                      lVar20 = 0;
                      do {
                        *(undefined4 *)
                         (*(longlong *)(lVar16 + 0x1f8) + (ulonglong)*(uint *)(lVar18 + lVar20)) =
                             *(undefined4 *)
                              ((ulonglong)
                               (uint)(*(int *)(lVar14 + 0x128) * *(int *)(lVar18 + 4 + lVar20)) +
                               *(longlong *)(lVar14 + 0x18) + uVar12 * 4);
                        lVar20 = lVar20 + 8;
                      } while (lVar17 * 8 != lVar20);
                    }
                    lVar21 = lVar21 + local_1a8;
                    iVar8 = *(int *)(lVar21 + 0x18);
                    if ((longlong)iVar8 != 0) {
                      lVar17 = *(longlong *)(lVar21 + 0x10);
                      lVar18 = 0;
                      do {
                        *(undefined4 *)
                         (*(longlong *)(lVar16 + 0x1f8) + (ulonglong)*(uint *)(lVar17 + lVar18)) =
                             *(undefined4 *)
                              ((ulonglong)
                               (uint)(*(int *)(lVar14 + 300) * *(int *)(lVar17 + 4 + lVar18)) +
                               *(longlong *)(lVar14 + 0x28) + uVar12 * 4);
                        lVar18 = lVar18 + 8;
                      } while ((longlong)iVar8 * 8 != lVar18);
                    }
                    iVar8 = *(int *)(lVar21 + 0x28);
                    if ((longlong)iVar8 != 0) {
                      lVar21 = *(longlong *)(lVar21 + 0x20);
                      lVar17 = 0;
                      do {
                        lVar18 = (ulonglong)
                                 (uint)(*(int *)(lVar14 + 0x130) * *(int *)(lVar21 + 4 + lVar17)) +
                                 *(longlong *)(lVar14 + 0x38);
                        if (*(char *)(lVar21 + 8 + lVar17) == '\x01') {
                          uVar1 = *(ushort *)(lVar18 + uVar12 * 2);
                          uVar23 = (uint)uVar1 << 0xd;
                          if ((uVar23 & 0xf800000) == 0xf800000) {
                            fVar24 = (float)(uVar23 | 0x70000000);
                          }
                          else if ((uVar23 & 0xf800000) == 0) {
                            fVar24 = (float)(uVar23 | 0x38800000) + -6.1035156e-05;
                          }
                          else {
                            fVar24 = (float)((uVar23 & 0xfffe000) + 0x38000000);
                          }
                          *(uint *)(*(longlong *)(lVar16 + 0x1f8) +
                                   (ulonglong)*(uint *)(lVar21 + lVar17)) =
                               (int)(short)uVar1 & 0x80000000U | (uint)fVar24;
                        }
                        else {
                          *(undefined2 *)
                           (*(longlong *)(lVar16 + 0x1f8) + (ulonglong)*(uint *)(lVar21 + lVar17)) =
                               *(undefined2 *)(lVar18 + uVar12 * 2);
                        }
                        lVar17 = lVar17 + 0xc;
                      } while ((longlong)iVar8 * 0xc != lVar17);
                    }
                    *(byte *)(lVar16 + 600) = *(byte *)(lVar16 + 600) | 1;
                    lVar21 = *(longlong *)(local_1b8 + 0x4b0);
                    lVar14 = *(longlong *)(*(longlong *)(local_1a0 + 0x20) + 0x78);
                    lVar17 = (longlong)*(int *)(lVar21 + 8 + local_1a8);
                    if (lVar17 != 0) {
                      lVar18 = *(longlong *)(lVar21 + local_1a8);
                      lVar20 = 0;
                      do {
                        *(undefined4 *)
                         (*(longlong *)(lVar16 + 0x4a0) + (ulonglong)*(uint *)(lVar18 + lVar20)) =
                             *(undefined4 *)
                              ((ulonglong)
                               (uint)(*(int *)(lVar14 + 0x128) * *(int *)(lVar18 + 4 + lVar20)) +
                               *(longlong *)(lVar14 + 0x18) + uVar12 * 4);
                        lVar20 = lVar20 + 8;
                      } while (lVar17 * 8 != lVar20);
                    }
                    lVar21 = lVar21 + local_1a8;
                    iVar8 = *(int *)(lVar21 + 0x18);
                    if ((longlong)iVar8 != 0) {
                      lVar17 = *(longlong *)(lVar21 + 0x10);
                      lVar18 = 0;
                      do {
                        *(undefined4 *)
                         (*(longlong *)(lVar16 + 0x4a0) + (ulonglong)*(uint *)(lVar17 + lVar18)) =
                             *(undefined4 *)
                              ((ulonglong)
                               (uint)(*(int *)(lVar14 + 300) * *(int *)(lVar17 + 4 + lVar18)) +
                               *(longlong *)(lVar14 + 0x28) + uVar12 * 4);
                        lVar18 = lVar18 + 8;
                      } while ((longlong)iVar8 * 8 != lVar18);
                    }
                    iVar8 = *(int *)(lVar21 + 0x28);
                    if ((longlong)iVar8 != 0) {
                      lVar21 = *(longlong *)(lVar21 + 0x20);
                      lVar17 = 0;
                      do {
                        lVar18 = (ulonglong)
                                 (uint)(*(int *)(lVar14 + 0x130) * *(int *)(lVar21 + 4 + lVar17)) +
                                 *(longlong *)(lVar14 + 0x38);
                        if (*(char *)(lVar21 + 8 + lVar17) == '\x01') {
                          uVar1 = *(ushort *)(lVar18 + uVar12 * 2);
                          uVar23 = (uint)uVar1 << 0xd;
                          if ((uVar23 & 0xf800000) == 0xf800000) {
                            fVar24 = (float)(uVar23 | 0x70000000);
                          }
                          else if ((uVar23 & 0xf800000) == 0) {
                            fVar24 = (float)(uVar23 | 0x38800000) + -6.1035156e-05;
                          }
                          else {
                            fVar24 = (float)((uVar23 & 0xfffe000) + 0x38000000);
                          }
                          *(uint *)(*(longlong *)(lVar16 + 0x4a0) +
                                   (ulonglong)*(uint *)(lVar21 + lVar17)) =
                               (int)(short)uVar1 & 0x80000000U | (uint)fVar24;
                        }
                        else {
                          *(undefined2 *)
                           (*(longlong *)(lVar16 + 0x4a0) + (ulonglong)*(uint *)(lVar21 + lVar17)) =
                               *(undefined2 *)(lVar18 + uVar12 * 2);
                        }
                        lVar17 = lVar17 + 0xc;
                      } while ((longlong)iVar8 * 0xc != lVar17);
                    }
                    *(byte *)(lVar16 + 0x500) = *(byte *)(lVar16 + 0x500) | 1;
                    lVar21 = *(longlong *)(lVar16 + 0x18);
                    if (lVar21 != 0) {
                      lVar14 = *(longlong *)(local_1b8 + 0x4d0);
                      lVar17 = *(longlong *)(*(longlong *)(local_1a0 + 0x20) + 0x78);
                      lVar18 = (longlong)*(int *)(lVar14 + 8 + local_1a8);
                      if (lVar18 != 0) {
                        lVar20 = *(longlong *)(lVar14 + local_1a8);
                        lVar26 = 0;
                        do {
                          *(undefined4 *)
                           (*(longlong *)(lVar21 + 0x98) + (ulonglong)*(uint *)(lVar20 + lVar26)) =
                               *(undefined4 *)
                                ((ulonglong)
                                 (uint)(*(int *)(lVar17 + 0x128) * *(int *)(lVar20 + 4 + lVar26)) +
                                 *(longlong *)(lVar17 + 0x18) + uVar12 * 4);
                          lVar26 = lVar26 + 8;
                        } while (lVar18 * 8 != lVar26);
                      }
                      lVar14 = lVar14 + local_1a8;
                      iVar8 = *(int *)(lVar14 + 0x18);
                      if ((longlong)iVar8 != 0) {
                        lVar18 = *(longlong *)(lVar14 + 0x10);
                        lVar20 = 0;
                        do {
                          *(undefined4 *)
                           (*(longlong *)(lVar21 + 0x98) + (ulonglong)*(uint *)(lVar18 + lVar20)) =
                               *(undefined4 *)
                                ((ulonglong)
                                 (uint)(*(int *)(lVar17 + 300) * *(int *)(lVar18 + 4 + lVar20)) +
                                 *(longlong *)(lVar17 + 0x28) + uVar12 * 4);
                          lVar20 = lVar20 + 8;
                        } while ((longlong)iVar8 * 8 != lVar20);
                      }
                      iVar8 = *(int *)(lVar14 + 0x28);
                      if ((longlong)iVar8 != 0) {
                        lVar14 = *(longlong *)(lVar14 + 0x20);
                        lVar18 = 0;
                        do {
                          lVar20 = (ulonglong)
                                   (uint)(*(int *)(lVar17 + 0x130) * *(int *)(lVar14 + 4 + lVar18))
                                   + *(longlong *)(lVar17 + 0x38);
                          if (*(char *)(lVar14 + 8 + lVar18) == '\x01') {
                            uVar1 = *(ushort *)(lVar20 + uVar12 * 2);
                            uVar23 = (uint)uVar1 << 0xd;
                            if ((uVar23 & 0xf800000) == 0xf800000) {
                              fVar24 = (float)(uVar23 | 0x70000000);
                            }
                            else if ((uVar23 & 0xf800000) == 0) {
                              fVar24 = (float)(uVar23 | 0x38800000) + -6.1035156e-05;
                            }
                            else {
                              fVar24 = (float)((uVar23 & 0xfffe000) + 0x38000000);
                            }
                            *(uint *)(*(longlong *)(lVar21 + 0x98) +
                                     (ulonglong)*(uint *)(lVar14 + lVar18)) =
                                 (int)(short)uVar1 & 0x80000000U | (uint)fVar24;
                          }
                          else {
                            *(undefined2 *)
                             (*(longlong *)(lVar21 + 0x98) + (ulonglong)*(uint *)(lVar14 + lVar18))
                                 = *(undefined2 *)(lVar20 + uVar12 * 2);
                          }
                          lVar18 = lVar18 + 0xc;
                        } while ((longlong)iVar8 * 0xc != lVar18);
                      }
                      *(byte *)(lVar21 + 0xf8) = *(byte *)(lVar21 + 0xf8) | 1;
                    }
                    plVar6 = *(longlong **)(lVar16 + 0x728);
                    lVar14 = local_188;
                    lVar21 = local_1a0;
                    if ((plVar6 != (longlong *)0x0) &&
                       (lVar16 = plVar6[1], 0 < (longlong)(int)lVar16)) {
                      local_1a8 = *plVar6;
                      lVar17 = 0;
                      do {
                        if (lVar17 < *(int *)(*(longlong *)(local_1b8 + 0x4c0) + 8 + local_198)) {
                          lVar18 = *(longlong *)(*(longlong *)(local_1b8 + 0x4c0) + local_198);
                          lVar10 = lVar17 * 0x30;
                          lVar19 = lVar17 * 0x2a8 + local_1a8;
                          lVar20 = *(longlong *)(*(longlong *)(local_1a0 + 0x20) + 0x78);
                          lVar26 = (longlong)*(int *)(lVar18 + 8 + lVar10);
                          if (lVar26 != 0) {
                            lVar2 = *(longlong *)(lVar18 + lVar10);
                            lVar22 = 0;
                            do {
                              *(undefined4 *)
                               (*(longlong *)(lVar19 + 0x58) + (ulonglong)*(uint *)(lVar2 + lVar22))
                                   = *(undefined4 *)
                                      ((ulonglong)
                                       (uint)(*(int *)(lVar20 + 0x128) *
                                             *(int *)(lVar2 + 4 + lVar22)) +
                                       *(longlong *)(lVar20 + 0x18) + uVar12 * 4);
                              lVar22 = lVar22 + 8;
                            } while (lVar26 * 8 != lVar22);
                          }
                          lVar18 = lVar18 + lVar10;
                          iVar8 = *(int *)(lVar18 + 0x18);
                          if ((longlong)iVar8 != 0) {
                            lVar26 = *(longlong *)(lVar18 + 0x10);
                            lVar10 = 0;
                            do {
                              *(undefined4 *)
                               (*(longlong *)(lVar19 + 0x58) + (ulonglong)*(uint *)(lVar26 + lVar10)
                               ) = *(undefined4 *)
                                    ((ulonglong)
                                     (uint)(*(int *)(lVar20 + 300) * *(int *)(lVar26 + 4 + lVar10))
                                     + *(longlong *)(lVar20 + 0x28) + uVar12 * 4);
                              lVar10 = lVar10 + 8;
                            } while ((longlong)iVar8 * 8 != lVar10);
                          }
                          iVar8 = *(int *)(lVar18 + 0x28);
                          if ((longlong)iVar8 != 0) {
                            lVar18 = *(longlong *)(lVar18 + 0x20);
                            lVar26 = 0;
                            do {
                              lVar10 = (ulonglong)
                                       (uint)(*(int *)(lVar20 + 0x130) *
                                             *(int *)(lVar18 + 4 + lVar26)) +
                                       *(longlong *)(lVar20 + 0x38);
                              if (*(char *)(lVar18 + 8 + lVar26) == '\x01') {
                                uVar1 = *(ushort *)(lVar10 + uVar12 * 2);
                                uVar23 = (uint)uVar1 << 0xd;
                                if ((uVar23 & 0xf800000) == 0xf800000) {
                                  fVar24 = (float)(uVar23 | 0x70000000);
                                }
                                else if ((uVar23 & 0xf800000) == 0) {
                                  fVar24 = (float)(uVar23 | 0x38800000) + -6.1035156e-05;
                                }
                                else {
                                  fVar24 = (float)((uVar23 & 0xfffe000) + 0x38000000);
                                }
                                *(uint *)(*(longlong *)(lVar19 + 0x58) +
                                         (ulonglong)*(uint *)(lVar18 + lVar26)) =
                                     (int)(short)uVar1 & 0x80000000U | (uint)fVar24;
                              }
                              else {
                                *(undefined2 *)
                                 (*(longlong *)(lVar19 + 0x58) +
                                 (ulonglong)*(uint *)(lVar18 + lVar26)) =
                                     *(undefined2 *)(lVar10 + uVar12 * 2);
                              }
                              lVar26 = lVar26 + 0xc;
                            } while ((longlong)iVar8 * 0xc != lVar26);
                          }
                          *(byte *)(lVar19 + 0xb8) = *(byte *)(lVar19 + 0xb8) | 1;
                        }
                        lVar17 = lVar17 + 1;
                      } while (lVar17 != (int)lVar16);
                    }
                  }
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 != lVar14);
            }
          }
          else if (*(int *)(lVar13 + 0x86c) != 4) {
            *(undefined4 *)(lVar13 + 0x86c) = 4;
          }
LAB_1400585fc:
          uVar12 = uVar12 + 1;
          plVar6 = *(longlong **)(lVar21 + 0x18);
          iVar8 = (int)plVar6[1];
        } while ((longlong)uVar12 < (longlong)iVar8);
        lVar13 = local_1b8;
        if (iVar8 == 0) goto LAB_14005871c;
        puVar15 = (undefined8 *)*plVar6;
        puVar5 = puVar15 + iVar8;
      }
      do {
        uVar7 = *puVar15;
        iVar8 = *(int *)(lVar21 + 0x98);
        *(uint *)(lVar21 + 0x98) = iVar8 + 1U;
        if (*(uint *)(lVar21 + 0x9c) < iVar8 + 1U) {
          FUN_1481f838c(lVar21 + 0x70,iVar8);
        }
        lVar14 = *(longlong *)(lVar21 + 0x90);
        if (*(longlong *)(lVar21 + 0x90) == 0) {
          lVar14 = lVar21 + 0x70;
        }
        *(undefined8 *)(lVar14 + (longlong)iVar8 * 8) = uVar7;
        if (*(int *)(lVar21 + 0x98) == DAT_14c762a08) {
          FUN_143ac9676(lVar13,lVar21);
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar5);
    }
  }
LAB_14005871c:
  FUN_143ac9676(lVar13,lVar21);
  if ((*(char *)(lVar21 + 0x34) == '\0') &&
     (plVar6 = *(longlong **)(lVar21 + 0x18), 0 < (int)plVar6[1])) {
    iVar8 = 0;
    do {
      lVar13 = *(longlong *)(*plVar6 + (longlong)iVar8 * 8);
      FUN_14005a35e(lVar13,1);
      plVar6 = *(longlong **)(lVar21 + 0x18);
      if (iVar8 < (int)plVar6[1] && -1 < iVar8) {
        iVar8 = iVar8 + (uint)(*(longlong *)(*plVar6 + (longlong)iVar8 * 8) == lVar13);
      }
    } while (iVar8 < (int)plVar6[1]);
  }
  if (local_17c != 0) {
    uVar7 = FUN_14811173e();
    FUN_1481117c2(uVar7);
  }
LAB_14005878a:
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140058982 FUN_140058982 body=99 status=ok
// SIG undefined FUN_140058982(void)

void FUN_140058982(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400589e6 FUN_1400589e6 body=411 status=ok
// SIG undefined FUN_1400589e6(void)

void FUN_1400589e6(longlong *param_1)

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
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0) goto LAB_140058b09;
  if (((*(byte *)((longlong)param_1 + 0x1f9) & 0x20) != 0) && (lVar13 = param_1[0x24], lVar13 != 0))
  {
    param_1[0x32] = *(longlong *)(lVar13 + 400);
    uVar1 = *(undefined4 *)(lVar13 + 0x160);
    uVar2 = *(undefined4 *)(lVar13 + 0x164);
    uVar3 = *(undefined4 *)(lVar13 + 0x168);
    uVar4 = *(undefined4 *)(lVar13 + 0x16c);
    uVar5 = *(undefined4 *)(lVar13 + 0x170);
    uVar6 = *(undefined4 *)(lVar13 + 0x174);
    uVar7 = *(undefined4 *)(lVar13 + 0x178);
    uVar8 = *(undefined4 *)(lVar13 + 0x17c);
    uVar9 = *(undefined4 *)(lVar13 + 0x184);
    uVar10 = *(undefined4 *)(lVar13 + 0x188);
    uVar11 = *(undefined4 *)(lVar13 + 0x18c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar13 + 0x180);
    *(undefined4 *)((longlong)param_1 + 0x184) = uVar9;
    *(undefined4 *)(param_1 + 0x31) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x18c) = uVar11;
    *(undefined4 *)(param_1 + 0x2e) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x174) = uVar6;
    *(undefined4 *)(param_1 + 0x2f) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x17c) = uVar8;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
    *(undefined4 *)(param_1 + 0x2d) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  lVar13 = param_1[0x16];
  if (lVar13 == 0) {
    lVar13 = FUN_1448abda6(param_1);
    if (lVar13 != 0) goto LAB_140058a87;
LAB_140058b3a:
    (**(code **)(*param_1 + 0x528))(param_1,&local_50,param_1 + 0x48);
    param_1[0x32] = local_20;
    param_1[0x30] = local_30;
    param_1[0x31] = lStack_28;
    param_1[0x2e] = local_40;
    param_1[0x2f] = lStack_38;
    *(undefined4 *)(param_1 + 0x2c) = local_50;
    *(undefined4 *)((longlong)param_1 + 0x164) = uStack_4c;
    *(undefined4 *)(param_1 + 0x2d) = uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uStack_44;
    bVar12 = 0;
  }
  else {
LAB_140058a87:
    bVar12 = *(byte *)(lVar13 + 0x152);
    if ((bVar12 != 1) && ((6 < bVar12 || ((0x68U >> (bVar12 & 0x1f) & 1) == 0))))
    goto LAB_140058b3a;
    if ((*(char *)((longlong)param_1 + 0x1f9) < '\0') &&
       ((*(byte *)((longlong)param_1 + 0x1fa) & 1) != 0)) goto LAB_140058b09;
    (**(code **)(*param_1 + 0x528))(param_1,&local_50,param_1 + 0x48);
    param_1[0x32] = local_20;
    param_1[0x30] = local_30;
    param_1[0x31] = lStack_28;
    param_1[0x2e] = local_40;
    param_1[0x2f] = lStack_38;
    *(undefined4 *)(param_1 + 0x2c) = local_50;
    *(undefined4 *)((longlong)param_1 + 0x164) = uStack_4c;
    *(undefined4 *)(param_1 + 0x2d) = uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uStack_44;
    bVar12 = *(byte *)((longlong)param_1 + 0x1f9) >> 7;
  }
  *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) & 0xfe | bVar12;
LAB_140058b09:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140058b88 FUN_140058b88 body=382 status=ok
// SIG undefined FUN_140058b88(void)

void FUN_140058b88(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    plVar5 = TlsGetValue(*(DWORD *)(param_1 + 8));
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
      plVar5[6] = 0;
      *(undefined4 *)(plVar5 + 7) = 0;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      *(undefined8 *)((longlong)plVar5 + 0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar5 + 0x44) = 0;
      plVar5[10] = 0;
      *(undefined4 *)(plVar5 + 0xb) = 0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      TlsSetValue(*(DWORD *)(param_1 + 8),plVar5);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      iVar1 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
        FUN_1463d122a((longlong *)(param_1 + 0x38),iVar1);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = plVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14060a7c0(plVar5,iVar1);
    }
    lVar2 = *plVar5;
    lVar7 = (longlong)iVar1 * 0x40;
    lVar3 = *param_2;
    *(longlong *)(lVar2 + lVar7) = lVar3;
    *(undefined8 *)(lVar2 + 0x10 + lVar7) = 0;
    if (lVar3 != 0) {
      plVar5 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[2];
      }
      (**(code **)*plVar5)(plVar5,lVar2 + lVar7 + 0x10);
    }
  }
  else {
    pcVar4 = (code *)*param_2;
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    uVar6 = (**(code **)(*plVar5 + 8))();
    (*pcVar4)(uVar6);
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000140058c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
  return;
}



// FUNCTION 140058d06 FUN_140058d06 body=1103 status=ok
// SIG undefined FUN_140058d06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140058d06(longlong param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double _X;
  undefined1 auStack_148 [32];
  double *local_128;
  undefined1 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  auVar6 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)(param_1 + 0x140);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar9 = 0;
    dVar4 = (double)DAT_1499387d0;
    dVar5 = DAT_1499387d0._8_8_;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      if (lVar3 == 0) goto LAB_140058e7b;
      if ((*(byte *)(lVar3 + 0x1f8) & 1) == 0) {
LAB_140058ddd:
        auVar13 = *(undefined1 (*) [16])(lVar3 + 0x1b0);
        dVar11 = auVar13._0_8_;
        dVar12 = auVar13._8_8_;
        dVar10 = *(double *)(lVar3 + 0x1c0);
        pdVar8 = *(double **)(lVar3 + 0x230);
        if (pdVar8 == (double *)0x0) {
          pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
          dVar21 = DAT_14c8463d8;
          *pdVar8 = DAT_14c8463d0;
          pdVar8[1] = dVar21;
          dVar21 = DAT_14c8463e8;
          pdVar8[2] = DAT_14c8463e0;
          pdVar8[3] = dVar21;
          dVar21 = DAT_14c846500;
          pdVar8[4] = DAT_14c8464f8;
          pdVar8[5] = dVar21;
          pdVar8[6] = DAT_14c846508;
          *(double **)(lVar3 + 0x230) = pdVar8;
        }
        if ((((pdVar8[4] != dVar11) || (NAN(pdVar8[4]) || NAN(dVar11))) || (pdVar8[5] != dVar12)) ||
           (((NAN(pdVar8[5]) || NAN(dVar12) || (pdVar8[6] != dVar10)) ||
            (NAN(pdVar8[6]) || NAN(dVar10))))) {
          auVar17._8_8_ = 0;
          auVar17._0_8_ = dVar10;
          auVar13 = divpd(auVar13,auVar6);
          auVar16 = divpd(auVar17,auVar6);
          auVar13 = roundpd(auVar13,auVar13,3);
          auVar16 = roundpd(auVar16,auVar16,3);
          auVar26._0_8_ = dVar11 - auVar13._0_8_ * dVar4;
          auVar26._8_8_ = dVar12 - auVar13._8_8_ * dVar5;
          auVar18._0_8_ = dVar10 - auVar16._0_8_ * dVar4;
          auVar18._8_8_ = 0.0 - auVar16._8_8_ * dVar5;
          auVar22._0_8_ = auVar26._0_8_ + dVar4;
          auVar22._8_8_ = auVar26._8_8_ + dVar5;
          auVar20._0_8_ = auVar18._0_8_ + dVar4;
          auVar20._8_8_ = auVar18._8_8_ + dVar5;
          auVar16._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
          auVar16._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
          auVar13 = blendvpd(auVar22,auVar26,auVar16);
          auVar23._8_8_ = -(ulonglong)(0.0 <= auVar18._8_8_);
          auVar23._0_8_ = -(ulonglong)(0.0 <= auVar18._0_8_);
          auVar16 = blendvpd(auVar20,auVar18,auVar23);
          auVar19._0_8_ = auVar13._0_8_ + -360.0;
          auVar19._8_8_ = auVar13._8_8_ + -360.0;
          auVar14._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
          auVar14._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
          auVar23 = blendvpd(auVar13,auVar19,auVar14);
          auVar15._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
          auVar15._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
          auVar13._8_8_ = auVar16._8_8_ + 0.0;
          auVar13._0_8_ = auVar16._0_8_ + -360.0;
          auVar13 = blendvpd(auVar16,auVar13,auVar15);
          *(undefined1 (*) [16])(pdVar8 + 4) = auVar23;
          dVar10 = auVar13._0_8_;
          pdVar8[6] = dVar10;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = dVar10;
          auVar13 = divpd(auVar23,auVar6);
          auVar16 = divpd(auVar27,auVar6);
          auVar13 = roundpd(auVar13,auVar13,3);
          auVar16 = roundpd(auVar16,auVar16,3);
          dVar21 = (auVar23._0_8_ - auVar13._0_8_ * dVar4) * 0.008726646259971648;
          dVar24 = (auVar23._8_8_ - auVar13._8_8_ * dVar5) * 0.008726646259971648;
          dVar25 = (dVar10 - auVar16._0_8_ * dVar4) * 0.008726646259971648;
          _X = (0.0 - auVar16._8_8_ * dVar5) * 0.008726646259971648;
          dVar10 = sin(dVar21);
          dVar11 = sin(dVar24);
          dVar12 = sin(dVar25);
          sin(_X);
          dVar21 = cos(dVar21);
          dVar24 = cos(dVar24);
          dVar25 = cos(dVar25);
          cos(_X);
          *pdVar8 = dVar10 * dVar11 * dVar25 - dVar21 * dVar24 * dVar12;
          pdVar8[1] = -(dVar10 * dVar24 * dVar25) - dVar21 * dVar11 * dVar12;
          pdVar8[2] = -(dVar24 * dVar10 * dVar12) + dVar11 * dVar21 * dVar25;
          pdVar8[3] = dVar11 * dVar10 * dVar12 + dVar24 * dVar21 * dVar25;
        }
        local_118 = *pdVar8;
        dStack_110 = pdVar8[1];
        local_108 = pdVar8[2];
        dStack_100 = pdVar8[3];
        local_128 = &local_118;
        local_120 = param_3;
        FUN_140092404(lVar3,*(undefined8 *)(lVar3 + 0x120),*(undefined8 *)(lVar3 + 0x128),
                      param_2 & 0xfffffff9 | 2);
      }
      else {
        bVar7 = ~*(byte *)(lVar3 + 0x1f8);
        if ((param_2 & 4) == 0) {
          if ((bVar7 & 0x1c) != 0) goto LAB_140058ddd;
        }
        else if (((bVar7 & 0x1c) != 0) && (*(longlong *)(lVar3 + 0x128) != 0)) goto LAB_140058ddd;
      }
LAB_140058e7b:
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  if ((local_f0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14005915a FUN_14005915a body=492 status=ok
// SIG undefined FUN_14005915a(void)

longlong * FUN_14005915a(longlong *param_1,longlong *param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c872bd8 == '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  lVar3 = *param_1;
  lVar11 = (longlong)param_3 * 0x78;
  lVar2 = lVar3 + lVar11;
  if (*(int *)(lVar3 + -0x48 + lVar11) != *(int *)(lVar3 + -0x1c + lVar11)) {
    uVar7 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar8 = lVar2 + -0x18;
    if (*(longlong *)(lVar2 + -0x10) != 0) {
      lVar8 = *(longlong *)(lVar2 + -0x10);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + -8) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar10 != -1) {
      do {
        lVar8 = *(longlong *)(lVar2 + -0x50) + (longlong)iVar10 * 0x20;
        if (*(ulonglong *)(*(longlong *)(lVar2 + -0x50) + (longlong)iVar10 * 0x20) == param_4) {
          if (lVar8 != 0) {
            lVar9 = *(longlong *)(lVar8 + 8);
            *param_2 = lVar9;
            lVar8 = *(longlong *)(lVar8 + 0x10);
            param_2[1] = lVar8;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
              lVar9 = *param_2;
            }
            if (lVar9 == 0) goto LAB_140059255;
            goto LAB_140059324;
          }
          break;
        }
        iVar10 = *(int *)(lVar8 + 0x18);
      } while (iVar10 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140059255:
  if ((((*(byte *)(lVar2 + -0x58) & 1) != 0) &&
      (cVar6 = FUN_14111f043(param_4,param_1[3]), cVar6 != '\0')) &&
     ((plVar4 = (longlong *)param_1[3], uVar12 = extraout_XMM0_Da, plVar4 == (longlong *)0x0 ||
      (cVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar2 + -0x74), uVar12 = extraout_XMM0_Da_00,
      cVar6 != '\0')))) {
    FUN_142b3ff4e(uVar12,&local_48,lVar3 + lVar11 + -0x78,param_4);
    plVar4 = local_40;
    if (&local_48 != param_2) {
      *param_2 = local_48;
      local_48 = 0;
      plVar5 = (longlong *)param_2[1];
      if (local_40 != plVar5) {
        local_40 = (longlong *)0x0;
        param_2[1] = (longlong)plVar4;
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
      }
    }
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
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
LAB_140059324:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14005934c FUN_14005934c body=450 status=ok
// SIG undefined FUN_14005934c(void)

void FUN_14005934c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140059467:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400594a4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400593a2;
LAB_140059397:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400593a2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001400593ce;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140059424:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400594a4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140059467;
code_r0x0001400593ce:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140059424;
    }
  }
  goto LAB_140059397;
}



// FUNCTION 140059518 FUN_140059518 body=72 status=ok
// SIG undefined FUN_140059518(void)

undefined8 FUN_140059518(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(uint *)(puVar3 + 2) != param_1[1]) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140059560 FUN_140059560 body=505 status=ok
// SIG undefined FUN_140059560(void)

longlong * FUN_140059560(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong local_70;
  undefined4 local_64;
  
  if (param_4 == 0) {
    local_64 = 0;
    lVar2 = 0;
  }
  else {
    if (param_4 != 2) {
LAB_14005958b:
      *param_2 = 0;
      return param_2;
    }
    if (param_3 == 1) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xc5) == '\0') goto LAB_14005958b;
      local_64 = 5;
      lVar2 = 2;
    }
    else {
      local_64 = 1;
      lVar2 = 1;
    }
  }
  local_70 = *(ulonglong *)(param_1 + 0x9c0 + lVar2 * 0x40);
  uVar7 = (uint)local_70;
  if ((local_70 & 0x3ffffff) != 0) {
    puVar6 = (ulonglong *)(param_1 + lVar2 * 0x40 + 0x9c0);
    do {
      uVar3 = (local_70 & 0xfffffffffc000000) + 0x4000000;
      if (uVar3 >> 0x1a < local_70 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      uVar4 = (ulonglong)((uVar7 & 0x3ffffff) >> 0xe);
      uVar5 = (ulonglong)((uint)local_70 & 0x3fff);
      lVar2 = *(longlong *)(&DAT_14c833b00 + uVar4 * 8);
      LOCK();
      uVar1 = *puVar6;
      if (local_70 == uVar1) {
        *puVar6 = uVar3 | *(uint *)(lVar2 + 0x10 + uVar5 * 0x18);
      }
      UNLOCK();
      if (local_70 == uVar1) {
        *(undefined4 *)(lVar2 + uVar5 * 0x18 + 0x10) = 0;
        lVar2 = *(longlong *)
                 (*(longlong *)(&DAT_14c833b00 + uVar4 * 8) + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18
                 );
        FUN_1447d080c(uVar7 & 0x3ffffff);
        if (lVar2 != 0) {
          *param_2 = lVar2;
          goto LAB_140059738;
        }
        break;
      }
      local_70 = *puVar6;
      uVar7 = (uint)local_70;
    } while ((local_70 & 0x3ffffff) != 0);
  }
  lVar2 = FUN_14001cc68(0x480,0x10);
  FUN_143160008(lVar2,param_1,param_4,local_64);
  *param_2 = lVar2;
  if (lVar2 != 0) {
LAB_140059738:
    LOCK();
    *(int *)(lVar2 + 0x478) = *(int *)(lVar2 + 0x478) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14005975a FUN_14005975a body=915 status=ok
// SIG undefined FUN_14005975a(void)

longlong * FUN_14005975a(longlong *param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  iVar15 = (int)param_1[1];
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != iVar6) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar7 == *param_3) {
          if (plVar7 != (longlong *)0x0) goto LAB_1400598c3;
          break;
        }
        iVar5 = (int)plVar7[2];
      } while (iVar5 != -1);
    }
  }
  if (iVar6 == 0) {
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar11 = iVar6 + 1;
    iVar14 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar16 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar16) {
              uVar10 = uVar16;
            }
          }
          else {
            uVar10 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar10 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar11 = -0x20;
          if ((int)uVar16 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar7,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar7;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar6 & 0x1f;
    puVar2 = (uint *)((longlong)plVar7 + (longlong)(iVar14 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar13 = (longlong)iVar15;
    iVar5 = *(int *)(*param_1 + 4 + lVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar6 + -1;
    if (iVar6 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar6 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  puVar2 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar15 & 0x1f);
  iVar6 = 1;
  plVar7 = (longlong *)(*param_1 + lVar13 * 0x18);
  *plVar7 = *param_3;
  *param_3 = 0;
  plVar7[1] = 0;
  *(undefined4 *)(plVar7 + 2) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar12 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[8];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      if (iVar5 != -1) {
        do {
          plVar12 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
          lVar13 = *plVar12;
          if (lVar13 == *plVar7) {
            if (*plVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar13 + 0x478);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_1402cd3ea(*(undefined8 *)(lVar13 + 0x10));
              }
            }
            uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
            lVar13 = plVar7[1];
            uVar4 = *(undefined4 *)((longlong)plVar7 + 0xc);
            *(int *)plVar12 = (int)*plVar7;
            *(undefined4 *)((longlong)plVar12 + 4) = uVar3;
            *(int *)(plVar12 + 1) = (int)lVar13;
            *(undefined4 *)((longlong)plVar12 + 0xc) = uVar4;
            FUN_1473700f6(param_1,iVar15);
            goto LAB_1400598b1;
          }
          iVar5 = (int)plVar12[2];
        } while (iVar5 != -1);
      }
    }
    if (3 < uVar16) {
      uVar8 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar13 & 0x1f);
    }
  }
  if (((int)uVar16 < 1) || (iVar6 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)plVar7 + 0x14) = param_2;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar7 + 2) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_140074150(param_1);
  }
LAB_1400598b1:
  plVar7 = (longlong *)(*param_1 + (longlong)iVar15 * 0x18);
LAB_1400598c3:
  return plVar7 + 1;
}



// FUNCTION 140059aee FUN_140059aee body=1902 status=ok
// SIG undefined FUN_140059aee(void)

longlong * FUN_140059aee(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  char cVar14;
  undefined4 *puVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar12 = *param_2;
  *param_1 = lVar12;
  *(int *)(param_1 + 1) = (int)param_2[1];
  if (DAT_14c760b88 == '\x01') {
    puVar9 = (undefined4 *)FUN_14001cc68(0x28,0x10);
    *puVar9 = 0xffffffff;
    lVar12 = lVar12 + 0x230;
    if (puVar9 == (undefined4 *)0x0) {
      lVar12 = 0;
    }
    *(undefined8 *)(puVar9 + 2) = 0;
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined2 *)(puVar9 + 6) = 0;
    *(longlong *)(puVar9 + 8) = lVar12;
  }
  else {
    puVar9 = (undefined4 *)0x0;
  }
  param_1[2] = (longlong)puVar9;
  plVar13 = param_1 + 3;
  plVar4 = param_1 + 4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14736cc5c(param_1 + 0x12,param_2,param_3,param_4);
  iVar8 = (int)param_1[1];
  if (iVar8 == 2) {
LAB_140059bcb:
    puVar9 = (undefined4 *)*param_1;
    plVar1 = (longlong *)param_1[5];
    puVar15 = puVar9;
    if (plVar1 != (longlong *)0x0) {
      param_1[5] = 0;
      (**(code **)(*plVar1 + 0x10))();
      iVar8 = (int)param_1[1];
      puVar15 = (undefined4 *)*param_1;
    }
    cVar14 = (iVar8 == 1) * '\x03';
    if (iVar8 == 2) {
      cVar14 = '\x02';
    }
    uVar10 = 1;
    if (DAT_14ca81480 == 0) {
      uVar10 = *puVar15;
    }
    plVar1 = *(longlong **)(*(longlong *)(puVar9 + 4) + 8);
    local_90 = (longlong *)&DAT_14a348a70;
    local_98 = 0;
    local_88 = param_1 + 5;
    iVar8 = (**(code **)(*plVar1 + 0x60))(plVar1,uVar10,cVar14,param_2[2]);
    if (iVar8 < 0) {
      local_90 = local_78 + 2;
      local_78[2] = 0;
      local_78[3] = 0;
      local_98 = 0;
      FUN_145763094(iVar8,
                    "Device->CreateCommandList( Device->GetGPUMask().GetNative(), GetD3DCommandListType(QueueType), *CommandAllocator, nullptr, IID_PPV_ARGS(Interfaces.GraphicsCommandList.GetInitReference()) )"
                    ,".\\Runtime/D3D12RHI/Private/D3D12CommandList.cpp",0xbf);
    }
    plVar1 = (longlong *)param_1[5];
    plVar2 = (longlong *)*plVar13;
    if (plVar2 != plVar1) {
      *plVar13 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    plVar1 = param_1 + 6;
    puVar3 = (undefined8 *)*plVar13;
    plVar2 = (longlong *)*plVar4;
    if (plVar2 != (longlong *)0x0) {
      *plVar4 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = param_1 + 7;
    (**(code **)*puVar3)(puVar3,&DAT_14a348a70,plVar4);
    puVar3 = (undefined8 *)*plVar13;
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = param_1 + 8;
    (**(code **)*puVar3)(puVar3,&DAT_14a348b40,plVar1);
    puVar3 = (undefined8 *)*plVar13;
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = param_1 + 9;
    (**(code **)*puVar3)(puVar3,&DAT_14a348b50,plVar2);
    puVar3 = (undefined8 *)*plVar13;
    plVar2 = (longlong *)*plVar4;
    if (plVar2 != (longlong *)0x0) {
      *plVar4 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = param_1 + 10;
    (**(code **)*puVar3)(puVar3,&DAT_14a348b60,plVar4);
    puVar3 = (undefined8 *)*plVar13;
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = param_1 + 0xb;
    (**(code **)*puVar3)(puVar3,&DAT_14a348b70,plVar1);
    puVar3 = (undefined8 *)*plVar13;
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = param_1 + 0xc;
    (**(code **)*puVar3)(puVar3,&DAT_14a348b80,plVar2);
    puVar3 = (undefined8 *)*plVar13;
    plVar2 = (longlong *)*plVar4;
    if (plVar2 != (longlong *)0x0) {
      *plVar4 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = param_1 + 0xd;
    (**(code **)*puVar3)(puVar3,&DAT_14a348b90,plVar4);
    puVar3 = (undefined8 *)*plVar13;
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = param_1 + 0xe;
    (**(code **)*puVar3)(puVar3,&DAT_14a348ba0,plVar1);
    puVar3 = (undefined8 *)*plVar13;
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = param_1 + 0xf;
    (**(code **)*puVar3)(puVar3,&DAT_14a348bb0,plVar2);
    puVar3 = (undefined8 *)*plVar13;
    plVar2 = (longlong *)*plVar4;
    if (plVar2 != (longlong *)0x0) {
      *plVar4 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = param_1 + 0x10;
    (**(code **)*puVar3)(puVar3,&DAT_14a348bc0,plVar4);
    puVar3 = (undefined8 *)*plVar13;
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    (**(code **)*puVar3)(puVar3,&DAT_14a348bd0,plVar1);
    puVar3 = (undefined8 *)*plVar13;
    plVar4 = (longlong *)*plVar2;
    if (plVar4 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    (**(code **)*puVar3)(puVar3,&DAT_14a348be0,plVar2);
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 0) goto LAB_14005a044;
      goto LAB_140059bcb;
    }
    puVar9 = (undefined4 *)*param_1;
    plVar1 = (longlong *)param_1[4];
    plVar2 = *(longlong **)(*(longlong *)(puVar9 + 4) + 8);
    if (plVar1 == (longlong *)0x0) {
      cVar14 = '\x03';
    }
    else {
      param_1[4] = 0;
      (**(code **)(*plVar1 + 0x10))();
      puVar9 = (undefined4 *)*param_1;
      cVar14 = ((int)param_1[1] == 1) * '\x03';
      if ((int)param_1[1] == 2) {
        cVar14 = '\x02';
      }
    }
    uVar10 = 1;
    if (DAT_14ca81480 == 0) {
      uVar10 = *puVar9;
    }
    local_90 = (longlong *)&DAT_14a348a70;
    local_98 = 0;
    local_88 = plVar4;
    iVar8 = (**(code **)(*plVar2 + 0x60))(plVar2,uVar10,cVar14,param_2[2]);
    if (iVar8 < 0) {
      local_90 = local_78;
      local_78[0] = 0;
      local_78[1] = 0;
      local_98 = 0;
      FUN_145763094(iVar8,
                    "Device->GetDevice()->CreateCommandList( Device->GetGPUMask().GetNative(), GetD3DCommandListType(QueueType), *CommandAllocator, nullptr, IID_PPV_ARGS(Interfaces.CopyCommandList.GetInitReference()) )"
                    ,".\\Runtime/D3D12RHI/Private/D3D12CommandList.cpp",0xf0);
    }
    plVar4 = (longlong *)*plVar4;
    plVar1 = (longlong *)*plVar13;
    if (plVar1 != plVar4) {
      *plVar13 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_78[4] = 0;
  if ((DAT_14c9ac110 != '\x01') ||
     (iVar8 = GFSDK_Aftermath_DX12_CreateContextHandle(*plVar13,local_78 + 4), lVar12 = local_78[4],
     iVar8 != 1)) {
    lVar12 = 0;
  }
  param_1[0x11] = lVar12;
  puVar9 = (undefined4 *)param_1[2];
  if ((puVar9 != (undefined4 *)0x0) && (DAT_14c760b88 != '\0')) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(puVar9 + 8);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
    }
    bVar5 = true;
    if (*(char *)(puVar9 + 6) == '\0') {
      lVar12 = 0;
      do {
        if (*(char *)(*(longlong *)(puVar9 + 8) + 0x28 + lVar12) == '\0') {
          *puVar9 = (int)lVar12;
          *(undefined1 *)(*(longlong *)(puVar9 + 8) + 0x28 + lVar12) = 1;
          puVar9[5] = 0;
          *(undefined2 *)(puVar9 + 6) = 1;
          bVar5 = false;
          uVar11 = 0;
          goto LAB_140059f44;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x400);
      uVar11 = 0x8007000e;
    }
    else {
      uVar11 = 0x80070057;
    }
LAB_140059f44:
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (bVar5) {
      local_90 = local_78 + 4;
      local_78[4] = 0;
      local_78[5] = 0;
      local_98 = 0;
      FUN_145763094(uVar11,"pSet->Open()",".\\Runtime/D3D12RHI/Private\\D3D12Residency.h",0x95);
    }
  }
  lVar12 = param_1[0x1f];
  if (lVar12 != 0) {
    iVar8 = *(int *)(lVar12 + 0x18);
    if (iVar8 == 2) {
      *(int *)(param_1 + 0x38) = (int)param_1[0x38] + 1;
      (**(code **)(*(longlong *)param_1[5] + 0x1a8))
                ((longlong *)param_1[5],*(undefined8 *)(lVar12 + 0x38),
                 *(undefined4 *)(lVar12 + 0x18),(int)param_1[0x20]);
      if ((*(uint *)((longlong)param_1 + 0x104) & 0xfffffffe) == 4) goto LAB_14005a016;
      plVar13 = param_1 + 0x28;
      iVar8 = (int)param_1[0x29];
      *(uint *)(param_1 + 0x29) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14c) < iVar8 + 1U) goto LAB_14005a199;
    }
    else if (iVar8 == 0) {
      *(int *)(param_1 + 0x38) = (int)param_1[0x38] + 1;
      (**(code **)(*(longlong *)param_1[5] + 0x1a8))
                ((longlong *)param_1[5],*(undefined8 *)(lVar12 + 0x38),
                 *(undefined4 *)(lVar12 + 0x18),(int)param_1[0x20]);
      plVar13 = param_1 + 0x2a;
      iVar8 = (int)param_1[0x2b];
      *(uint *)(param_1 + 0x2b) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x15c) < iVar8 + 1U) {
LAB_14005a199:
        FUN_14472227c(plVar13,iVar8);
      }
    }
    else {
      if (iVar8 != 3) goto LAB_14005a016;
      *(int *)(param_1 + 0x38) = (int)param_1[0x38] + 1;
      (**(code **)(*(longlong *)param_1[5] + 0x1a8))
                ((longlong *)param_1[5],*(undefined8 *)(lVar12 + 0x38),
                 *(undefined4 *)(lVar12 + 0x18),(int)param_1[0x20]);
      plVar13 = param_1 + 0x2c;
      iVar8 = (int)param_1[0x2d];
      *(uint *)(param_1 + 0x2d) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x16c) < iVar8 + 1U) goto LAB_14005a199;
    }
    lVar12 = *plVar13;
    *(longlong *)(lVar12 + 0x10 + (longlong)iVar8 * 0x18) = param_1[0x21];
    uVar10 = *(undefined4 *)((longlong)param_1 + 0xfc);
    lVar7 = param_1[0x20];
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x104);
    puVar9 = (undefined4 *)(lVar12 + (longlong)iVar8 * 0x18);
    *puVar9 = (int)param_1[0x1f];
    puVar9[1] = uVar10;
    puVar9[2] = (int)lVar7;
    puVar9[3] = uVar6;
  }
LAB_14005a016:
  lVar12 = param_1[0x25];
  if (lVar12 != 0) {
    *(int *)(param_1 + 0x38) = (int)param_1[0x38] + 1;
    (**(code **)(*(longlong *)param_1[5] + 0x1a0))
              ((longlong *)param_1[5],*(undefined8 *)(lVar12 + 0x38),*(undefined4 *)(lVar12 + 0x18),
               (int)param_1[0x26]);
  }
LAB_14005a044:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14005a25e FUN_14005a25e body=255 status=ok
// SIG undefined FUN_14005a25e(void)

void FUN_14005a25e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14005a35e FUN_14005a35e body=617 status=ok
// SIG undefined FUN_14005a35e(void)

void FUN_14005a35e(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char cVar11;
  longlong lVar12;
  byte bVar13;
  bool bVar14;
  
  iVar5 = DAT_14cb3a5f8;
  if (DAT_14cb3a5f8 != 0) {
    lVar8 = FUN_14811173e();
    if (param_1 == 0) {
      lVar12 = lVar8 + 0x88;
    }
    else {
      lVar12 = FUN_1481f5624(param_1);
    }
    FUN_148121460(lVar8,lVar12);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x7a0);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x7a8);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(undefined8 **)(param_1 + 0x7b0) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
  }
  if (-1 < (char)*(byte *)(param_1 + 0x798)) {
    *(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) & 0x3f;
  }
  iVar2 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar2 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x108);
    bVar13 = 1;
    lVar12 = 0;
    do {
      plVar10 = *(longlong **)(lVar8 + lVar12);
      bVar6 = (**(code **)(*plVar10 + 0x28))(plVar10,0);
      bVar13 = bVar13 & bVar6;
      lVar12 = lVar12 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar12);
    if ((1 < *(int *)(param_1 + 0x86c) - 3U && bVar13 == 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x155) & 0x20) == 0)) {
      FUN_143ac72ca(param_1,*(undefined4 *)(param_1 + 0x7b8),1);
      lVar8 = *(longlong *)(param_1 + 0x20);
      if ((((*(longlong *)(lVar8 + 0x558) != 0) && (DAT_14c7627fc != 0)) && (DAT_14c7627f8 != 0)) &&
         ((DAT_14ca84d96 == '\x01' && (*(longlong *)(lVar8 + 0x10) != 0)))) {
        uVar3 = *(uint *)(*(longlong *)(lVar8 + 0x10) + 0x4f8);
        if ((uVar3 & 0x10) != 0) {
          if (DAT_14c762a10 == 0) {
            cVar11 = '\x02';
            cVar7 = '\x01';
          }
          else {
            bVar14 = (*(uint *)(lVar8 + 0x30) & 8) == 0;
            cVar7 = bVar14 * '\x02' + '\x01';
            cVar11 = bVar14 * '\x02' + '\x02';
          }
          if (DAT_14c762a0c != 0 && (char)((uVar3 & 2) >> 1) == '\0') {
            cVar7 = cVar11;
          }
          if ((cVar7 == '\x01') || ((cVar7 == '\x03' && (param_2 != '\0')))) {
            FUN_143ac8014(param_1);
          }
        }
      }
      if ((*(int *)(param_1 + 0x120) != 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0))
      {
        cVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x30))();
        if (cVar7 != '\0') {
          if (*(int *)(param_1 + 0x120) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(param_1 + 0x118);
          }
          (**(code **)(*plVar10 + 0x58))();
        }
      }
      goto LAB_14005a539;
    }
  }
  FUN_143ac678c(param_1,0);
LAB_14005a539:
  if (*(char *)(param_1 + 10) != '\x03') {
    *(undefined1 *)(param_1 + 10) = 3;
    FUN_14090ddfa(param_1);
  }
  if (iVar5 == 0) {
    return;
  }
  uVar9 = FUN_14811173e();
  FUN_1481117c2(uVar9);
  return;
}



// FUNCTION 14005a5c8 FUN_14005a5c8 body=317 status=ok
// SIG undefined FUN_14005a5c8(void)

void FUN_14005a5c8(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = param_2;
  if (1 < param_2) {
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14005a632;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14005a632:
    uVar5 = (uint)(uVar4 / 0x14);
    uVar7 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  if (uVar7 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar7;
  FUN_14005a706(param_1,*(undefined4 *)(param_1 + 0x20),uVar7);
  return;
}



// FUNCTION 14005a706 FUN_14005a706 body=140 status=ok
// SIG undefined FUN_14005a706(void)

void FUN_14005a706(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0x14);
  return;
}



// FUNCTION 14005a792 FUN_14005a792 body=1171 status=ok
// SIG undefined FUN_14005a792(void)

undefined8
FUN_14005a792(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined7 uVar18;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar17 = param_1 + 10;
  LOCK();
  bVar25 = (char)param_1[10] == '\0';
  if (bVar25) {
    *(char *)(param_1 + 10) = '\x01';
  }
  UNLOCK();
  if (!bVar25) {
    FUN_1447d2058(puVar17);
  }
  uVar5 = *param_1;
  uVar24 = param_1[(ulonglong)uVar5 * 4 + 4];
  param_1[(ulonglong)uVar5 * 4 + 4] = uVar24 + 1;
  if (param_1[(ulonglong)uVar5 * 4 + 5] < uVar24 + 1) {
    FUN_14178feec(param_1 + (ulonglong)uVar5 * 4 + 2,uVar24);
  }
  lVar6 = *(longlong *)(param_1 + (ulonglong)uVar5 * 4 + 2);
  lVar19 = (longlong)(int)uVar24 * 0x60;
  *(undefined8 *)(lVar6 + lVar19) = param_2;
  *(undefined8 *)(lVar6 + 8 + lVar19) = param_3;
  *(undefined8 *)(lVar6 + 0x20 + lVar19) = *param_5;
  *(undefined8 *)(lVar6 + 0x30 + lVar19) = param_5[2];
  param_5[2] = 0;
  uVar7 = *(undefined4 *)(param_5 + 4);
  uVar8 = *(undefined4 *)((longlong)param_5 + 0x24);
  uVar9 = *(undefined4 *)(param_5 + 5);
  uVar10 = *(undefined4 *)((longlong)param_5 + 0x2c);
  uVar11 = *(undefined4 *)((longlong)param_5 + 0x34);
  uVar12 = *(undefined4 *)(param_5 + 7);
  uVar13 = *(undefined4 *)((longlong)param_5 + 0x3c);
  puVar16 = (undefined4 *)(lVar6 + 0x50 + lVar19);
  *puVar16 = *(undefined4 *)(param_5 + 6);
  puVar16[1] = uVar11;
  puVar16[2] = uVar12;
  puVar16[3] = uVar13;
  puVar16 = (undefined4 *)(lVar6 + 0x40 + lVar19);
  *puVar16 = uVar7;
  puVar16[1] = uVar8;
  puVar16[2] = uVar9;
  puVar16[3] = uVar10;
  if (*(longlong *)(lVar6 + 0x20 + lVar19) != 0) {
    *param_5 = 0;
  }
  uVar18 = (undefined7)((ulonglong)lVar6 >> 8);
  uVar15 = CONCAT71(uVar18,1);
  LOCK();
  cVar3 = (char)*puVar17;
  if (cVar3 == '\x01') {
    *(char *)puVar17 = '\0';
  }
  else {
    uVar15 = CONCAT71(uVar18,cVar3);
  }
  UNLOCK();
  if (cVar3 != '\x01') {
    uVar15 = FUN_14008cdb0(puVar17);
  }
  uVar5 = DAT_14c7585c8;
  if (uVar24 == 0) {
    uVar23 = (ulonglong)DAT_14c7585c8;
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar17 = (uint *)*puVar2;
    if (puVar17 != (uint *)0x0) goto LAB_14005a942;
    while( true ) {
      uVar24 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar24 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar24 | 1;
        __tlregdtor(&LAB_14322aa43);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar16 = *(undefined4 **)(lVar6 + 0x310);
      *(undefined8 *)(lVar6 + 0x310) = 0;
      if (puVar16 == (undefined4 *)0x0) {
        puVar16 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar16 = 0xffffffff;
      *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
      puVar16[0x12] = 0;
      *puVar2 = puVar16;
      FUN_140217a48(puVar2);
      puVar17 = (uint *)*puVar2;
LAB_14005a942:
      puVar22 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar20 = (uint *)(puVar22 + 0x20);
      uVar24 = puVar17[0x12];
      if (puVar20 <= puVar17 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
        LOCK();
        uVar4 = *puVar17;
        *puVar17 = *puVar17 + uVar24 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar24) != 0xffffffff) break;
        puVar17 = (uint *)*puVar2;
        *puVar17 = 0xffffffff;
        *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
        puVar17[0x12] = 0;
        *puVar2 = puVar17;
        puVar22 = (undefined8 *)((longlong)puVar17 + 0x67U & 0xfffffffffffffff0);
        puVar20 = (uint *)(puVar22 + 0x20);
        uVar24 = 0;
        if (puVar20 <= puVar17 + 0x4000) {
          uVar24 = 1;
          goto LAB_14005a9c2;
        }
      }
    }
    uVar24 = uVar24 + 1;
LAB_14005a9c2:
    *(uint **)(puVar17 + 0x10) = puVar20;
    puVar17[0x12] = uVar24;
    iVar21 = 0;
    FUN_1447247dc(puVar22,0);
    *puVar22 = &PTR_FUN_14a392a88;
    puVar22[0x16] = FUN_14322ec9e;
    puVar22[0x18] = 0;
    puVar22[0x1a] = &PTR_LAB_14a392aa0;
    puVar22[0x1b] = param_1;
    *(uint *)(puVar22 + 0x1e) = uVar5;
    if ((uVar23 & 0xff) == 0xff) {
      uVar24 = uVar5 >> 10 & 3;
      if ((uVar5 >> 9 & 1) == 0 || uVar24 < 2) {
        uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
        iVar21 = 0;
      }
      else {
        uVar23 = 2;
      }
    }
    else {
      iVar21 = (uVar5 >> 7 & 2 | uVar5 >> 9 & 1) + *(int *)(&DAT_149e38ed0 + (uVar23 & 0xff) * 4);
      uVar23 = 5;
    }
    if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
    }
    puVar22[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar22[9] = puVar22;
    puVar22[10] = puVar22;
    lVar6 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar6 == 0) {
      uVar14 = 1;
      if ((char)uVar23 != '\x06') {
        uVar14 = uVar23;
      }
      uVar23 = uVar14;
      uVar15 = 0;
    }
    else {
      if ((char)uVar23 == '\x06') {
        uVar23 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
      }
      uVar15 = *(undefined8 *)(lVar6 + 0x30);
    }
    puVar22[0xf] = uVar15;
    puVar22[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar22 + 0x1c) = iVar21;
    if (puVar22 == (undefined8 *)0x0) {
      local_49 = 1;
      uVar15 = FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
      UNLOCK();
      local_49 = 1;
      uVar15 = FUN_1447439e4(puVar22);
      LOCK();
      piVar1 = (int *)(puVar22 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar15 = (**(code **)*puVar22)(puVar22,1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005ac26 FUN_14005ac26 body=709 status=ok
// SIG undefined FUN_14005ac26(void)

undefined4 FUN_14005ac26(ulonglong *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb41300) {
    FUN_144b3d300(&DAT_14cb41300);
    if (DAT_14cb41300 == -1) {
      FUN_1456bda78(&DAT_14cb3f130);
      DAT_14cb412f0 = &DAT_14cb3f130;
      atexit(FUN_143a9fd0b);
      _Init_thread_footer(&DAT_14cb41300);
    }
  }
  puVar4 = DAT_14cb412f0;
  uVar2 = (ushort)param_1[1];
  uVar6 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = (uint)(uVar2 >> 0xd) ^ (uVar6 >> 0x10 ^ uVar6) - (uint)uVar2;
  uVar9 = uVar6 << 8 ^ (-0x61c88647 - uVar6) - (uint)uVar2;
  uVar10 = uVar9 >> 0xd ^ (uVar2 - uVar6) - uVar9;
  uVar6 = uVar10 >> 0xc ^ (uVar6 - uVar9) - uVar10;
  uVar9 = uVar6 << 0x10 ^ (uVar9 - uVar10) - uVar6;
  uVar10 = uVar9 >> 5 ^ (uVar10 - uVar6) - uVar9;
  uVar11 = uVar10 >> 3 ^ (uVar6 - uVar9) - uVar10;
  uVar6 = uVar11 << 10 ^ (uVar9 - uVar10) - uVar11;
  uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar11 + uVar6);
  iVar7 = uVar6 - *(byte *)((longlong)param_1 + 10);
  uVar10 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar9 = uVar10 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 10) - iVar7) - uVar10;
  uVar6 = uVar9 >> 0xc ^ (iVar7 - uVar10) - uVar9;
  uVar10 = uVar6 << 0x10 ^ (uVar10 - uVar9) - uVar6;
  uVar11 = uVar10 >> 5 ^ (uVar9 - uVar6) - uVar10;
  uVar6 = uVar11 >> 3 ^ (uVar6 - uVar10) - uVar11;
  uVar9 = uVar6 << 10 ^ (uVar10 - uVar11) - uVar6;
  uVar6 = uVar9 >> 0xf ^ uVar11 - (uVar6 + uVar9);
  SRWLock = (PSRWLOCK)(DAT_14cb412f0 + 0x2198);
  local_4c = uVar6;
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(puVar4 + 0x20b0) != *(int *)(puVar4 + 0x20dc)) {
    puVar5 = puVar4 + 0x20e0;
    if (*(undefined **)(puVar4 + 0x20e8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(puVar4 + 0x20e8);
    }
    iVar7 = *(int *)(puVar5 + (ulonglong)(*(int *)(puVar4 + 0x20f0) - 1U & uVar6) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)(puVar4 + 0x20a8);
      do {
        lVar1 = lVar3 + (longlong)iVar7 * 0x10;
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x10) == uVar6) {
          if ((lVar1 != 0) && ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0)) {
            uVar8 = *(undefined4 *)(lVar1 + 4);
            ReleaseSRWLockShared(SRWLock);
            goto LAB_14005ae1b;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 8);
      } while (iVar7 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockExclusive(SRWLock);
  local_50 = FUN_1401220aa(puVar4 + 0x10,param_1);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_14012212c(puVar4 + 0x20a8,local_34,&local_48,0);
  uVar8 = local_50;
  ReleaseSRWLockExclusive(SRWLock);
LAB_14005ae1b:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005aeec FUN_14005aeec body=30 status=ok
// SIG undefined FUN_14005aeec(void)

longlong * FUN_14005aeec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return param_1 + 0x8a;
}



// FUNCTION 14005af20 FUN_14005af20 body=93 status=ok
// SIG undefined FUN_14005af20(void)

void FUN_14005af20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if (param_1[0x2e] == param_3) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,param_3);
  }
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    return;
  }
  FUN_1433d87fe(param_1,param_2,param_3);
  return;
}



// FUNCTION 14005af8e FUN_14005af8e body=494 status=ok
// SIG undefined FUN_14005af8e(void)

void FUN_14005af8e(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  lVar8 = *param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar8 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(lVar8 + 0x130) != *(int *)(lVar8 + 0x15c)) {
    lVar3 = *param_3;
    uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar10 = (uint)lVar3 & 0xffff;
    lVar9 = lVar8 + 0x160;
    if (*(longlong *)(lVar8 + 0x168) != 0) {
      lVar9 = *(longlong *)(lVar8 + 0x168);
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(lVar8 + 0x170) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar10) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar9 = *(longlong *)(lVar8 + 0x128) + (longlong)iVar11 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x128) + (longlong)iVar11 * 0x20) == lVar3) {
          if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) {
            puVar13 = *(undefined8 **)(lVar9 + 8);
            plVar12 = *(longlong **)(lVar9 + 0x10);
            if (plVar12 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            goto LAB_14005b057;
          }
          break;
        }
        iVar11 = *(int *)(lVar9 + 0x18);
      } while (iVar11 != -1);
    }
  }
  plVar12 = (longlong *)0x0;
  puVar13 = (undefined8 *)0x0;
LAB_14005b057:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
joined_r0x00014005b068:
  do {
    while( true ) {
      plVar7 = plVar12;
      if (puVar13 == (undefined8 *)0x0) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar7 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014005b14e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar7 + 0x10))(plVar7);
              return;
            }
          }
        }
        return;
      }
      iVar11 = *(int *)(param_2 + 0x108);
      *(uint *)(param_2 + 0x108) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x10c) < iVar11 + 1U) {
        FUN_147056952(param_2,iVar11);
      }
      lVar8 = *(longlong *)(param_2 + 0x100);
      if (*(longlong *)(param_2 + 0x100) == 0) {
        lVar8 = param_2;
      }
      *(undefined8 *)(lVar8 + (longlong)iVar11 * 8) = *puVar13;
      puVar4 = (undefined8 *)puVar13[7];
      plVar5 = (longlong *)puVar13[8];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar13 = puVar4;
      if (plVar5 == plVar7) break;
      plVar12 = plVar5;
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
          iVar11 = *piVar2;
          UNLOCK();
          plVar1 = plVar7;
joined_r0x00014005b0f3:
          plVar12 = plVar5;
          if (iVar11 == 0) {
            (**(code **)(*plVar1 + 0x10))();
          }
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar12 = plVar7;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar11 = *piVar2;
        UNLOCK();
        plVar1 = plVar5;
        plVar5 = plVar7;
        goto joined_r0x00014005b0f3;
      }
      goto joined_r0x00014005b068;
    }
    plVar12 = (longlong *)0x0;
  } while( true );
}



// FUNCTION 14005b18c FUN_14005b18c body=113 status=ok
// SIG undefined FUN_14005b18c(void)

void FUN_14005b18c(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar1);
  FUN_14005b1fd(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14005b1fd FUN_14005b1fd body=75 status=ok
// SIG undefined FUN_14005b1fd(void)

void FUN_14005b1fd(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14005b248 FUN_14005b248 body=63 status=ok
// SIG undefined FUN_14005b248(void)

void FUN_14005b248(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14005b328(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14005b288 FUN_14005b288 body=159 status=ok
// SIG undefined FUN_14005b288(void)

void FUN_14005b288(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14005b2b2;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_14005b2b2:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14005b328 FUN_14005b328 body=204 status=ok
// SIG undefined FUN_14005b328(void)

ulonglong FUN_14005b328(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x800) {
            uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
          }
          else {
            uVar2 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar2 = (ulonglong)DAT_14c841df8;
            }
            uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
          }
        }
        else {
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
        }
      }
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14005b3f4 FUN_14005b3f4 body=151 status=ok
// SIG undefined FUN_14005b3f4(void)

undefined8 FUN_14005b3f4(undefined8 *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined8 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  short sVar6;
  short sVar7;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == *(int *)(param_2 + 1)) {
    uVar3 = 1;
    if (0 < iVar2) {
      puVar4 = (ushort *)*param_1;
      puVar1 = puVar4 + iVar2;
      puVar5 = (ushort *)*param_2;
      do {
        sVar6 = *puVar4 + (ushort)(0x19 < *puVar4 - 0x61) * 0x20 + -0x20;
        sVar7 = *puVar5 + (ushort)(0x19 < *puVar5 - 0x61) * 0x20 + -0x20;
        if ((sVar6 == 0x5c) || (sVar6 == 0x2f)) {
          if ((sVar7 != 0x2f) && (sVar7 != 0x5c)) goto LAB_14005b487;
        }
        else if (sVar6 != sVar7) goto LAB_14005b487;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar4 < puVar1);
    }
  }
  else {
LAB_14005b487:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14005b4a5 thunk_FUN_14005b4aa body=5 status=ok
// SIG undefined thunk_FUN_14005b4aa(void)

undefined8 thunk_FUN_14005b4aa(uint param_1)

{
  undefined3 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96f90) && (FUN_144b3d300(&DAT_14ca96f90), DAT_14ca96f90 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca96f88 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Virtual.Enable",1)
    ;
    _Init_thread_footer(&DAT_14ca96f90);
  }
  if ((DAT_14ca96f88 != (longlong *)0x0) &&
     (iVar3 = (**(code **)(*DAT_14ca96f88 + 0xb0))(), cVar2 = DAT_14ca84e0a, iVar3 != 0)) {
    uVar6 = (ulonglong)(ushort)param_1;
    puVar7 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar7 = DAT_14ca96af8;
    }
    bVar5 = true;
    if (((uint)puVar7[(ushort)((ushort)param_1 >> 5)] >> (param_1 & 0x1f) & 1) != 0) {
      bVar5 = (int)(&DAT_14ca814b8)[uVar6 * 0xf] < 3;
    }
    if ((byte)((byte)((uint)(&DAT_14ca814c8)[uVar6 * 0xf] >> 0x1d) &
               *(byte *)((longlong)&DAT_14ca814d8 + uVar6 * 0x3c + 3) >> 4 &
              (byte)((*(uint *)(&DAT_14ca814cc + uVar6 * 0x3c) & 8) >> 3)) != 0) {
      uVar1 = (undefined3)(param_1 >> 8);
      uVar6 = (ulonglong)CONCAT31(uVar1,DAT_14ca84e0a);
      iVar3 = (**(code **)(*DAT_14ca83900 + 0x28))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca96ee0) && (FUN_144b3d300(&DAT_14ca96ee0), DAT_14ca96ee0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca96ed8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.RequireDX12",1);
        _Init_thread_footer(&DAT_14ca96ee0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca96ee8) && (FUN_144b3d300(&DAT_14ca96ee8), DAT_14ca96ee8 == -1))
      {
        iVar4 = 1;
        if (DAT_14ca96ed8 != (longlong *)0x0) {
          iVar4 = (**(code **)(*DAT_14ca96ed8 + 0xb0))();
        }
        DAT_14ca96ee4 = iVar4;
        _Init_thread_footer(&DAT_14ca96ee8);
      }
      if ((((cVar2 != '\0') && (DAT_14ca96ee4 != 0)) &&
          (uVar6 = (ulonglong)CONCAT31(uVar1,iVar3 != 2), iVar3 == 3)) && (DAT_14ca96ee4 == 1)) {
        uVar6 = 0;
        if (DAT_14ca84e0b != '\0') {
          uVar6 = 1;
        }
      }
      return CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 & bVar5);
    }
  }
  return 0;
}



// FUNCTION 14005b4aa FUN_14005b4aa body=626 status=ok
// SIG undefined FUN_14005b4aa(void)

undefined8 FUN_14005b4aa(uint param_1)

{
  undefined3 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96f90) && (FUN_144b3d300(&DAT_14ca96f90), DAT_14ca96f90 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca96f88 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Virtual.Enable",1)
    ;
    _Init_thread_footer(&DAT_14ca96f90);
  }
  if ((DAT_14ca96f88 != (longlong *)0x0) &&
     (iVar3 = (**(code **)(*DAT_14ca96f88 + 0xb0))(), cVar2 = DAT_14ca84e0a, iVar3 != 0)) {
    uVar6 = (ulonglong)(ushort)param_1;
    puVar7 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar7 = DAT_14ca96af8;
    }
    bVar5 = true;
    if (((uint)puVar7[(ushort)((ushort)param_1 >> 5)] >> (param_1 & 0x1f) & 1) != 0) {
      bVar5 = (int)(&DAT_14ca814b8)[uVar6 * 0xf] < 3;
    }
    if ((byte)((byte)((uint)(&DAT_14ca814c8)[uVar6 * 0xf] >> 0x1d) &
               *(byte *)((longlong)&DAT_14ca814d8 + uVar6 * 0x3c + 3) >> 4 &
              (byte)((*(uint *)(&DAT_14ca814cc + uVar6 * 0x3c) & 8) >> 3)) != 0) {
      uVar1 = (undefined3)(param_1 >> 8);
      uVar6 = (ulonglong)CONCAT31(uVar1,DAT_14ca84e0a);
      iVar3 = (**(code **)(*DAT_14ca83900 + 0x28))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca96ee0) && (FUN_144b3d300(&DAT_14ca96ee0), DAT_14ca96ee0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca96ed8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.RequireDX12",1);
        _Init_thread_footer(&DAT_14ca96ee0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca96ee8) && (FUN_144b3d300(&DAT_14ca96ee8), DAT_14ca96ee8 == -1))
      {
        iVar4 = 1;
        if (DAT_14ca96ed8 != (longlong *)0x0) {
          iVar4 = (**(code **)(*DAT_14ca96ed8 + 0xb0))();
        }
        DAT_14ca96ee4 = iVar4;
        _Init_thread_footer(&DAT_14ca96ee8);
      }
      if ((((cVar2 != '\0') && (DAT_14ca96ee4 != 0)) &&
          (uVar6 = (ulonglong)CONCAT31(uVar1,iVar3 != 2), iVar3 == 3)) && (DAT_14ca96ee4 == 1)) {
        uVar6 = 0;
        if (DAT_14ca84e0b != '\0') {
          uVar6 = 1;
        }
      }
      return CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 & bVar5);
    }
  }
  return 0;
}



// FUNCTION 14005b71c FUN_14005b71c body=95 status=ok
// SIG undefined FUN_14005b71c(void)

undefined8 FUN_14005b71c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar2 + 0x1c);
  if (iVar1 == 0xb) {
    puVar3 = (undefined8 *)(lVar2 + 0x48);
  }
  else if (iVar1 == 2) {
    iVar1 = (int)param_1[1];
    if ((((longlong)iVar1 < 0) || (*(int *)(lVar2 + 0x418) <= iVar1)) ||
       (lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)iVar1 * 4), lVar4 == -1)
       ) {
      return 0;
    }
    puVar3 = (undefined8 *)(lVar4 * 8 + *(longlong *)(lVar2 + 0x340));
  }
  else {
    if (iVar1 != 0xc) {
      return 0;
    }
    puVar3 = (undefined8 *)(lVar2 + 0x148);
  }
  return *puVar3;
}



// FUNCTION 14005b77c FUN_14005b77c body=188 status=ok
// SIG undefined FUN_14005b77c(void)

void FUN_14005b77c(char param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a13c8) {
    FUN_144b3d300(&DAT_14c9a13c8);
    if (DAT_14c9a13c8 == -1) {
      DAT_14c9a13b8 = 0;
      DAT_14c9a13c0 = 0;
      atexit(FUN_142b20b2f);
      _Init_thread_footer(&DAT_14c9a13c8);
    }
  }
  lVar2 = DAT_14c9a13b8;
  if (((DAT_14c9a13c0 & 1) != 0) && (param_1 != '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c9a13b8 + 0x20));
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x20);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014005b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    return;
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14005b838 FUN_14005b838 body=743 status=ok
// SIG undefined FUN_14005b838(void)

ulonglong FUN_14005b838(longlong param_1,undefined1 param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int7 iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 local_1a2;
  undefined1 local_1a1;
  code *local_1a0;
  code **local_198;
  undefined1 local_189;
  undefined1 local_188 [24];
  code *local_170 [33];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1a2 = param_2;
  local_1a1 = param_4;
  if (DAT_14cb10130 == 0) {
    local_1c0 = local_170;
    local_170[0] = FUN_140754f84;
    local_1b0 = FUN_14081d0ea;
    local_1b8 = FUN_14081d0ea;
    local_1c8 = &LAB_147da9a76;
    local_1d0 = FUN_1409f3105;
    local_1d8 = L"Engine";
    local_1e0 = 0;
    local_1e8 = 0x10000000;
    local_1f0 = 8;
    local_1f8 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar9 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_1c0 = local_170;
    local_170[0] = FUN_1449e2820;
    local_1b0 = FUN_14081d0ea;
    local_1b8 = FUN_14081d0ea;
    local_1c8 = &LAB_1468c5283;
    local_1d0 = FUN_142809da0;
    local_1d8 = L"Engine";
    local_1e0 = 0x400000000;
    local_1e8 = 0x10000000;
    local_1f0 = 8;
    local_1f8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    iVar1 = *(int *)(lVar9 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
         (lVar7 = lVar8,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar9 + 0x30)) {
        lVar7 = 0;
      }
    } while ((lVar7 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  FUN_14005bb20(local_188,lVar7);
  uVar4 = DAT_14c761ed0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd0);
  local_189 = 1;
  iVar1 = (int)param_3[1];
  if ((longlong)iVar1 == 0) {
    iVar6 = (int7)(int3)((uint)iVar1 >> 8);
  }
  else {
    lVar9 = *param_3;
    lVar8 = (longlong)iVar1 * 0x108;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x30);
      FUN_1406d359e(local_170,lVar9);
      local_68 = local_1a2;
      local_67 = local_1a1;
      local_66 = uVar4;
      local_50 = &local_189;
      local_1a0 = FUN_1437c1586;
      local_198 = local_170;
      local_60 = uVar2;
      local_58 = local_188;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,lVar9,&local_1a0,0);
      uVar5 = FUN_1406d3414(local_170);
      lVar9 = lVar9 + 0x108;
      lVar8 = lVar8 + -0x108;
    } while (lVar8 != 0);
    iVar6 = (int7)((ulonglong)uVar5 >> 8);
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return CONCAT71(iVar6,local_189) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005bb20 FUN_14005bb20 body=93 status=ok
// SIG undefined FUN_14005bb20(void)

undefined2 * FUN_14005bb20(undefined2 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = *(longlong *)(param_2 + 0x30), lVar1 == 0)) ||
      (*(longlong *)(lVar1 + 0x2b0) == 0)) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x2b0) + 0x3f0) == 0 ||
      (*(longlong *)(lVar1 + 0x2b8) == 0)))) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    FUN_14005bb7e(param_1);
  }
  return param_1;
}



// FUNCTION 14005bb7e FUN_14005bb7e body=115 status=ok
// SIG undefined FUN_14005bb7e(void)

void FUN_14005bb7e(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_2 + 0x30);
  uVar2 = 0;
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x2b0) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x2b0) + 0x3f0);
  }
  if (*(longlong *)(lVar4 + 0xe0) != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0xe0) + 0x2e8);
  }
  lVar4 = 0x720;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x2b8) + 0x720;
    if (*(longlong *)(lVar3 + 0x2b0) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x2b0) + 0x3f0);
      goto LAB_14005bbd7;
    }
  }
  lVar3 = 0;
LAB_14005bbd7:
  uVar1 = *(undefined1 *)(lVar3 + 0x3b);
  *param_1 = 1;
  param_1[1] = uVar1;
  *(longlong *)(param_1 + 8) = lVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 14005bbf2 FUN_14005bbf2 body=55 status=ok
// SIG undefined FUN_14005bbf2(void)

void FUN_14005bbf2(longlong *param_1)

{
  FUN_14005bc2a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14005bc2a FUN_14005bc2a body=121 status=ok
// SIG undefined FUN_14005bc2a(void)

void FUN_14005bc2a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14005bca4 FUN_14005bca4 body=80 status=ok
// SIG undefined FUN_14005bca4(void)

void FUN_14005bca4(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_14005bcf4(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14005bcf4 FUN_14005bcf4 body=65 status=ok
// SIG undefined FUN_14005bcf4(void)

void FUN_14005bcf4(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      LOCK();
      puVar1 = (uint *)(*param_1 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 14005bd36 FUN_14005bd36 body=2674 status=ok
// SIG undefined FUN_14005bd36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005bd36(longlong param_1,char param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  byte bVar13;
  char cVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_168 [47];
  char local_139;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  iVar8 = DAT_14cb3a5f8;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (DAT_14cb3a5f8 != 0) {
    lVar20 = FUN_14811173e();
    if (param_1 == 0) {
      lVar21 = lVar20 + 0x88;
    }
    else {
      lVar21 = FUN_1481f5624(param_1);
    }
    FUN_148121460(lVar20,lVar21);
  }
  *(undefined8 *)(param_1 + 0x894) = 0;
  *(byte *)(param_1 + 0x799) = *(byte *)(param_1 + 0x799) & 0xfd;
  if ((((*(int *)(param_1 + 0x86c) - 3U < 2) || (*(longlong *)(param_1 + 0x38) == 0)) ||
      ((*(uint *)(*(longlong *)(param_1 + 0x38) + 8) >> 0x1e & 1) != 0)) ||
     (*(float *)(param_1 + 0x7b8) <= 1e-08 && *(float *)(param_1 + 0x7b8) != 1e-08))
  goto LAB_14005c4ec;
  local_f8 = *(int *)(param_1 + 0x110);
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10), lVar20 == 0)) {
    puVar16 = (uint *)0x0;
    iVar17 = 0;
  }
  else {
    puVar16 = *(uint **)(lVar20 + 0x460);
    iVar17 = *(int *)(lVar20 + 0x468);
  }
  local_100 = (undefined1 *)0x0;
  local_f4 = 0x100;
  uVar19 = local_f8 + 0x1f;
  local_139 = param_2;
  if (0x1f < uVar19) {
    if (uVar19 < 0x120) {
      uVar19 = uVar19 >> 3 & 0x3c;
      puVar15 = local_120;
    }
    else {
      FUN_140694960(local_120,0,uVar19 >> 5,4);
      local_f4 = uVar19 & 0xffffffe0;
      puVar15 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar15 = local_120;
      }
      uVar19 = (uVar19 >> 5) << 2;
    }
    memset(puVar15,0,(ulonglong)uVar19);
    iVar10 = local_f8 + 0x1f;
    if (-1 < local_f8) {
      iVar10 = local_f8;
    }
    if (local_f8 % 0x20 != 0) {
      puVar15 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar15 = local_100;
      }
      bVar13 = -(char)(local_f8 % 0x20);
      *(uint *)(puVar15 + (longlong)(iVar10 >> 5) * 4) =
           (uint)(*(int *)(puVar15 + (longlong)(iVar10 >> 5) * 4) << (bVar13 & 0x1f)) >>
           (bVar13 & 0x1f);
    }
  }
  if (iVar17 != 0) {
    bVar22 = false;
    puVar18 = puVar16;
    do {
      while (cVar9 = (**(code **)(**(longlong **)
                                    (*(longlong *)(param_1 + 0x108) +
                                    (ulonglong)(*puVar18 >> 1) * 0x10) + 0x40))(), cVar9 == '\0') {
        puVar18 = puVar18 + 1;
        if (puVar18 == puVar16 + iVar17) {
          if (!bVar22) goto LAB_14005c4dd;
          goto LAB_14005bf79;
        }
      }
      bVar22 = true;
      FUN_144807e00(local_120,*puVar18 >> 1,1,1);
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar16 + iVar17);
LAB_14005bf79:
    lVar21 = (longlong)iVar17 * 4;
    lVar20 = 0;
    do {
      uVar19 = *(uint *)((longlong)puVar16 + lVar20) >> 1;
      puVar15 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar15 = local_120;
      }
      if ((*(uint *)(puVar15 + (ulonglong)(*(uint *)((longlong)puVar16 + lVar20) >> 6) * 4) >>
           (uVar19 & 0x1f) & 1) != 0) {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x108) + (ulonglong)uVar19 * 0x10) +
                    0x48))();
      }
      lVar20 = lVar20 + 4;
    } while (lVar21 != lVar20);
    lVar20 = 0;
    iVar17 = 0;
    do {
      uVar19 = *(uint *)((longlong)puVar16 + lVar20) >> 1;
      puVar15 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar15 = local_120;
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x108) + (ulonglong)uVar19 * 0x10);
      if ((*(uint *)(puVar15 + (ulonglong)(*(uint *)((longlong)puVar16 + lVar20) >> 6) * 4) >>
           (uVar19 & 0x1f) & 1) != 0) {
        (**(code **)(*plVar5 + 0x50))();
      }
      if (((1 < *(int *)((longlong)plVar5 + 0xd4) - 3U) &&
          (*(char *)((longlong)plVar5 + 0xd1) == '\x01')) &&
         ((lVar11 = (**(code **)(*plVar5 + 0x68))(), lVar11 != 0 &&
          (((0 < *(int *)(lVar11 + 0x74c) || (*(int *)(lVar11 + 0xd4) - 3U < 0xfffffffe)) &&
           (lVar11 = *(longlong *)(lVar11 + 0x18), lVar11 != 0)))))) {
        if (*(longlong *)(lVar11 + 0x100) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(int *)(*(longlong *)(lVar11 + 0x100) + 0x88) + 0xfU & 0xfffffff0;
        }
        iVar17 = iVar17 + (uVar19 << (*(byte *)(lVar11 + 0x1e4) & 0x1f));
        bVar13 = *(byte *)(param_1 + 0x799) & 2;
        if (*(byte *)(lVar11 + 0x1e4) != 0) {
          bVar13 = 2;
        }
        *(byte *)(param_1 + 0x799) = *(byte *)(param_1 + 0x799) & 0xfd | bVar13;
        *(int *)(param_1 + 0x898) = *(int *)(param_1 + 0x898) + 1;
      }
      lVar20 = lVar20 + 4;
    } while (lVar21 != lVar20);
    if (*(int *)(param_1 + 0x898) != 0) {
      bVar13 = *(byte *)(param_1 + 0x799) >> 1 & 1;
      *(int *)(param_1 + 0x894) =
           (0x260 << bVar13) + iVar17 + (*(int *)(param_1 + 0x898) << bVar13) * 0x20;
    }
    if (*(char *)(param_1 + 0x828) == '\0') {
      lVar20 = *(longlong *)(param_1 + 0x38);
      if ((*(byte *)(lVar20 + 100) & 1) != 0) {
        uVar23 = *(undefined4 *)(lVar20 + 0x410);
        uVar24 = *(undefined4 *)(lVar20 + 0x414);
        uVar25 = *(undefined4 *)(lVar20 + 0x418);
        uVar26 = *(undefined4 *)(lVar20 + 0x41c);
        uVar27 = *(undefined4 *)(lVar20 + 0x420);
        uVar28 = *(undefined4 *)(lVar20 + 0x424);
        uVar29 = *(undefined4 *)(lVar20 + 0x428);
        uVar30 = *(undefined4 *)(lVar20 + 0x42c);
        uVar12 = *(undefined8 *)(lVar20 + 0x430);
        uVar32 = *(undefined8 *)(lVar20 + 0x438);
        *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(lVar20 + 0x440);
        goto LAB_14005c431;
      }
      if ((longlong)*(int *)(param_1 + 0x110) == 0) {
        *(undefined8 *)(param_1 + 0x850) = 0;
        *(undefined8 *)(param_1 + 0x858) = 0;
        *(undefined8 *)(param_1 + 0x840) = 0;
        *(undefined8 *)(param_1 + 0x848) = 0;
        *(undefined8 *)(param_1 + 0x830) = 0;
        *(undefined8 *)(param_1 + 0x838) = 0;
        *(undefined1 *)(param_1 + 0x860) = 0;
LAB_14005c59d:
        uVar6 = DAT_14c846520 ^ 0x8000000000000000;
        uVar7 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
        *(ulonglong *)(param_1 + 0x830) =
             CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510) ^ 0x8000000000000000;
        *(ulonglong *)(param_1 + 0x838) = uVar7 ^ 0x8000000000000000;
        *(ulonglong *)(param_1 + 0x840) = uVar6;
        *(ulonglong *)(param_1 + 0x858) = DAT_14c846520;
        uVar25 = DAT_14c846518._4_4_;
        uVar24 = (undefined4)DAT_14c846518;
        uVar23 = DAT_14c846510._4_4_;
        *(undefined4 *)(param_1 + 0x848) = (undefined4)DAT_14c846510;
        *(undefined4 *)(param_1 + 0x84c) = uVar23;
        *(undefined4 *)(param_1 + 0x850) = uVar24;
        *(undefined4 *)(param_1 + 0x854) = uVar25;
        *(undefined1 *)(param_1 + 0x860) = 1;
      }
      else {
        dVar39 = 0.0;
        lVar20 = 0;
        cVar9 = '\0';
        dVar46 = 0.0;
        dVar43 = 0.0;
        uVar29 = 0;
        uVar30 = 0;
        uVar27 = 0;
        uVar28 = 0;
        dVar33 = 0.0;
        cVar14 = '\0';
        dVar31 = 0.0;
        uVar25 = 0;
        uVar26 = 0;
        uVar23 = 0;
        uVar24 = 0;
        local_138 = 0.0;
        local_130 = 0.0;
        local_128 = 0.0;
        do {
          lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar20);
          dVar1 = *(double *)(lVar21 + 0xe0);
          dVar2 = *(double *)(lVar21 + 0xe8);
          dVar3 = *(double *)(lVar21 + 0xf0);
          uVar52 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar40 = *(double *)(lVar21 + 0xf8);
          uVar51 = (undefined4)((ulonglong)dVar40 >> 0x20);
          dVar47 = *(double *)(lVar21 + 0x100);
          uVar50 = (undefined4)((ulonglong)dVar47 >> 0x20);
          dVar34 = *(double *)(lVar21 + 0x108);
          cVar4 = *(char *)(lVar21 + 0x110);
          if (*(char *)(lVar21 + 0xd8) == '\x01') {
            uVar50 = (undefined4)((ulonglong)dVar2 >> 0x20);
            if (cVar9 == '\0' || cVar4 == '\0') {
              if (cVar4 != '\0') {
                dVar33 = dVar1;
                uVar27 = SUB84(dVar2,0);
                uVar28 = uVar50;
                uVar29 = SUB84(dVar3,0);
                uVar30 = uVar52;
                cVar9 = cVar4;
                dVar39 = dVar34;
                dVar46 = dVar47;
                dVar43 = dVar40;
              }
            }
            else {
              if (dVar1 <= dVar33) {
                dVar33 = dVar1;
              }
              if (dVar2 <= (double)CONCAT44(uVar28,uVar27)) {
                uVar27 = SUB84(dVar2,0);
                uVar28 = uVar50;
              }
              if (dVar3 <= (double)CONCAT44(uVar30,uVar29)) {
                uVar29 = SUB84(dVar3,0);
                uVar30 = uVar52;
              }
              if (dVar43 <= dVar40) {
                dVar43 = dVar40;
              }
              if (dVar46 <= dVar47) {
                dVar46 = dVar47;
              }
              if (dVar39 <= dVar34) {
                dVar39 = dVar34;
              }
            }
          }
          else if (cVar14 == '\0' || cVar4 == '\0') {
            if (cVar4 != '\0') {
              uVar23 = SUB84(dVar40,0);
              uVar24 = uVar51;
              uVar25 = SUB84(dVar47,0);
              uVar26 = uVar50;
              dVar31 = dVar34;
              cVar14 = cVar4;
              local_138 = dVar3;
              local_130 = dVar2;
              local_128 = dVar1;
            }
          }
          else {
            if (dVar1 <= local_128) {
              local_128 = dVar1;
            }
            if (dVar2 <= local_130) {
              local_130 = dVar2;
            }
            if (dVar3 <= local_138) {
              local_138 = dVar3;
            }
            if ((double)CONCAT44(uVar24,uVar23) <= dVar40) {
              uVar23 = SUB84(dVar40,0);
              uVar24 = uVar51;
            }
            if ((double)CONCAT44(uVar26,uVar25) <= dVar47) {
              uVar25 = SUB84(dVar47,0);
              uVar26 = uVar50;
            }
            if (dVar31 <= dVar34) {
              dVar31 = dVar34;
            }
          }
          lVar20 = lVar20 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x110) * 0x10 != lVar20);
        *(undefined8 *)(param_1 + 0x850) = 0;
        *(undefined8 *)(param_1 + 0x858) = 0;
        *(undefined8 *)(param_1 + 0x840) = 0;
        *(undefined8 *)(param_1 + 0x848) = 0;
        *(undefined8 *)(param_1 + 0x830) = 0;
        *(undefined8 *)(param_1 + 0x838) = 0;
        *(undefined1 *)(param_1 + 0x860) = 0;
        if (cVar9 == '\0') {
          dVar3 = 0.0;
          dVar2 = 0.0;
          dVar1 = 0.0;
          dVar46 = 0.0;
          dVar39 = 0.0;
          dVar33 = 0.0;
          if (cVar14 == '\0') goto LAB_14005c59d;
        }
        else {
          dVar1 = ((double)CONCAT44(uVar30,uVar29) + dVar39) * 0.5;
          dVar2 = ((double)CONCAT44(uVar28,uVar27) + dVar46) * 0.5;
          dVar3 = (dVar33 + dVar43) * 0.5;
          dVar40 = (dVar39 - (double)CONCAT44(uVar30,uVar29)) * 0.5;
          dVar47 = (dVar46 - (double)CONCAT44(uVar28,uVar27)) * 0.5;
          dVar43 = (dVar43 - dVar33) * 0.5;
          if (1.0 < DAT_14cb437e8) {
            dVar33 = (double)DAT_14cb437e8;
            auVar45._0_8_ = dVar43 / dVar33;
            auVar45._8_8_ = 0;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = auVar45._0_8_;
            auVar35 = roundpd(auVar45,auVar35,2);
            dVar43 = auVar35._0_8_ * dVar33;
            auVar49._0_8_ = dVar47 / dVar33;
            auVar49._8_8_ = 0;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = auVar49._0_8_;
            auVar35 = roundpd(auVar49,auVar36,2);
            dVar47 = auVar35._0_8_ * dVar33;
            auVar42._0_8_ = dVar40 / dVar33;
            auVar42._8_8_ = 0;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = auVar42._0_8_;
            auVar35 = roundpd(auVar42,auVar37,2);
            dVar40 = auVar35._0_8_ * dVar33;
          }
          dVar34 = (double)_DAT_14c7629ec;
          dVar33 = dVar1 + dVar40 * dVar34;
          dVar39 = dVar2 + dVar47 * dVar34;
          dVar46 = dVar3 + dVar43 * dVar34;
          dVar1 = dVar1 - dVar40 * dVar34;
          dVar2 = dVar2 - dVar47 * dVar34;
          dVar3 = dVar3 - dVar43 * dVar34;
          *(double *)(param_1 + 0x830) = dVar3;
          *(double *)(param_1 + 0x838) = dVar2;
          *(double *)(param_1 + 0x840) = dVar1;
          *(double *)(param_1 + 0x848) = dVar46;
          *(double *)(param_1 + 0x850) = dVar39;
          *(double *)(param_1 + 0x858) = dVar33;
          *(undefined1 *)(param_1 + 0x860) = 1;
          if (cVar14 == '\0') goto LAB_14005c448;
        }
        dVar41 = (local_138 + dVar31) * 0.5;
        dVar34 = (local_130 + (double)CONCAT44(uVar26,uVar25)) * 0.5;
        dVar47 = (local_128 + (double)CONCAT44(uVar24,uVar23)) * 0.5;
        dVar43 = (double)_DAT_14c7629f0;
        dVar40 = (dVar31 - local_138) * 0.5 * dVar43;
        dVar31 = ((double)CONCAT44(uVar26,uVar25) - local_130) * 0.5 * dVar43;
        dVar43 = ((double)CONCAT44(uVar24,uVar23) - local_128) * 0.5 * dVar43;
        dVar38 = dVar41 + dVar40;
        dVar44 = dVar34 + dVar31;
        dVar48 = dVar47 + dVar43;
        dVar41 = dVar41 - dVar40;
        dVar34 = dVar34 - dVar31;
        dVar47 = dVar47 - dVar43;
        if (cVar9 == '\0') {
          *(double *)(param_1 + 0x830) = dVar47;
          *(double *)(param_1 + 0x838) = dVar34;
          *(undefined1 *)(param_1 + 0x860) = 1;
          *(double *)(param_1 + 0x840) = dVar41;
          *(double *)(param_1 + 0x848) = dVar48;
          *(double *)(param_1 + 0x850) = dVar44;
          *(double *)(param_1 + 0x858) = dVar38;
        }
        else {
          if (dVar47 <= dVar3) {
            dVar3 = dVar47;
          }
          *(double *)(param_1 + 0x830) = dVar3;
          if (dVar34 <= dVar2) {
            dVar2 = dVar34;
          }
          *(double *)(param_1 + 0x838) = dVar2;
          if (dVar41 <= dVar1) {
            dVar1 = dVar41;
          }
          if (dVar46 <= dVar48) {
            dVar46 = dVar48;
          }
          if (dVar39 <= dVar44) {
            dVar39 = dVar44;
          }
          if (dVar33 <= dVar38) {
            dVar33 = dVar38;
          }
          *(double *)(param_1 + 0x840) = dVar1;
          *(double *)(param_1 + 0x848) = dVar46;
          *(double *)(param_1 + 0x850) = dVar39;
          *(double *)(param_1 + 0x858) = dVar33;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_1 + 0x828);
      uVar23 = *(undefined4 *)(param_1 + 0x7f8);
      uVar24 = *(undefined4 *)(param_1 + 0x7fc);
      uVar25 = *(undefined4 *)(param_1 + 0x800);
      uVar26 = *(undefined4 *)(param_1 + 0x804);
      uVar27 = *(undefined4 *)(param_1 + 0x808);
      uVar28 = *(undefined4 *)(param_1 + 0x80c);
      uVar29 = *(undefined4 *)(param_1 + 0x810);
      uVar30 = *(undefined4 *)(param_1 + 0x814);
      uVar12 = *(undefined8 *)(param_1 + 0x818);
      uVar32 = *(undefined8 *)(param_1 + 0x820);
LAB_14005c431:
      *(undefined8 *)(param_1 + 0x850) = uVar12;
      *(undefined8 *)(param_1 + 0x858) = uVar32;
      *(undefined4 *)(param_1 + 0x840) = uVar27;
      *(undefined4 *)(param_1 + 0x844) = uVar28;
      *(undefined4 *)(param_1 + 0x848) = uVar29;
      *(undefined4 *)(param_1 + 0x84c) = uVar30;
      *(undefined4 *)(param_1 + 0x830) = uVar23;
      *(undefined4 *)(param_1 + 0x834) = uVar24;
      *(undefined4 *)(param_1 + 0x838) = uVar25;
      *(undefined4 *)(param_1 + 0x83c) = uVar26;
    }
LAB_14005c448:
    lVar20 = *(longlong *)(param_1 + 0x20);
    if (((*(longlong *)(lVar20 + 0x558) != 0) && (DAT_14c7627fc != 0)) &&
       (((DAT_14c7627f8 != 0 && ((DAT_14ca84d96 == '\x01' && (*(longlong *)(lVar20 + 0x10) != 0))))
        && (uVar19 = *(uint *)(*(longlong *)(lVar20 + 0x10) + 0x4f8), (uVar19 & 0x10) != 0)))) {
      if (DAT_14c762a10 == 0) {
        cVar14 = '\x02';
        cVar9 = '\x01';
      }
      else {
        bVar22 = (*(uint *)(lVar20 + 0x30) & 8) == 0;
        cVar9 = bVar22 * '\x02' + '\x01';
        cVar14 = bVar22 * '\x02' + '\x02';
      }
      if (DAT_14c762a0c != 0 && (char)((uVar19 & 2) >> 1) == '\0') {
        cVar9 = cVar14;
      }
      if ((cVar9 == '\x02') || ((cVar9 == '\x04' && (local_139 != '\0')))) {
        FUN_143ac8014(param_1);
      }
    }
  }
LAB_14005c4dd:
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14005c4ec:
  if (iVar8 != 0) {
    uVar12 = FUN_14811173e();
    FUN_1481117c2(uVar12);
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14005c7aa FUN_14005c7aa body=778 status=ok
// SIG undefined FUN_14005c7aa(void)

longlong FUN_14005c7aa(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  uint local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_1 + 0x798);
  if (lVar6 != 0) goto LAB_14005c7d5;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  uStack_4c = 0;
  if (param_1 == 0) {
    local_50 = 0;
    uVar2 = 0;
  }
  else {
    local_50 = *(uint *)(param_1 + 0xc);
    if ((int)local_50 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((local_50 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar11 = uVar2 == 0;
      if (bVar11) {
        *(uint *)(lVar6 + 0x10) = uVar8;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar2 = uVar8;
      }
    }
  }
  uStack_4c = uVar2;
  puVar3 = (undefined8 *)FUN_147c42192(uVar2 ^ local_50);
  puVar5 = (undefined8 *)*puVar3;
  if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
    lVar6 = (longlong)DAT_14caf5a80;
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      LOCK();
      puVar4[2] = 0;
      UNLOCK();
      puVar4[3] = 0;
      LOCK();
      puVar4[4] = 0;
      UNLOCK();
      LOCK();
      puVar4[5] = 0;
      UNLOCK();
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar5 = (undefined8 *)*puVar3;
      if (puVar5 == puVar4) goto LAB_14005c879;
    }
    else {
      puVar4 = *(undefined8 **)(DAT_14caf5a78 + -8 + lVar6 * 8);
      *(undefined8 *)(DAT_14caf5a78 + -8 + lVar6 * 8) = 0;
      iVar9 = DAT_14caf5a80;
      lVar6 = DAT_14caf5a78;
      lVar7 = (longlong)DAT_14caf5a80;
      if (*(longlong *)(DAT_14caf5a78 + -8 + lVar7 * 8) != 0) {
        FUN_1400020a8();
        if (DAT_14caf5a80 - iVar9 != 0) {
          memmove((void *)(lVar6 + lVar7 * 8 + -8),(void *)(lVar6 + lVar7 * 8),
                  (longlong)(DAT_14caf5a80 - iVar9) << 3);
          iVar9 = DAT_14caf5a80;
        }
      }
      DAT_14caf5a80 = iVar9 + -1;
      FUN_147c42520();
      puVar5 = (undefined8 *)*puVar3;
    }
    *puVar3 = puVar4;
    bVar11 = puVar5 != (undefined8 *)0x0;
    puVar5 = puVar4;
    if (bVar11) {
      FUN_1400020a8();
      puVar5 = (undefined8 *)*puVar3;
    }
  }
LAB_14005c879:
  *(undefined8 **)(param_1 + 0x798) = puVar5;
  puVar5 = &DAT_14caf5a88;
  if (DAT_14caf5b08 != (undefined8 *)0x0) {
    puVar5 = DAT_14caf5b08;
  }
  lVar6 = (longlong)DAT_14caf5b10;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)((longlong)puVar5 + lVar7);
      uStack_4c = 0;
      if (param_1 == 0) {
        local_50 = 0;
        uVar2 = 0;
      }
      else {
        local_50 = *(uint *)(param_1 + 0xc);
        if ((int)local_50 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        uVar2 = *(uint *)(lVar10 + 0x10);
        if (*(uint *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          uVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar8);
          }
          LOCK();
          uVar2 = *(uint *)(lVar10 + 0x10);
          bVar11 = uVar2 == 0;
          if (bVar11) {
            *(uint *)(lVar10 + 0x10) = uVar8;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar11) {
            uVar2 = uVar8;
          }
        }
      }
      uStack_4c = uVar2;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
      lVar7 = lVar7 + 0x10;
    } while (lVar6 * 0x10 != lVar7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  lVar6 = *(longlong *)(param_1 + 0x798);
LAB_14005c7d5:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14005cab6 FUN_14005cab6 body=308 status=ok
// SIG undefined FUN_14005cab6(void)

undefined4 *
FUN_14005cab6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14005cc8c(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_50 + 1) = 0;
  *(undefined4 *)((longlong)local_50 + 0xc) = 0;
  *(undefined4 *)(local_50 + 2) = 0;
  *(undefined4 *)((longlong)local_50 + 0x14) = 0x3f800000;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14005cbec(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14005ce72(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005cbec FUN_14005cbec body=159 status=ok
// SIG undefined FUN_14005cbec(void)

void FUN_14005cbec(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14816b0bc((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_14005cc57;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_14005cc57:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14005cc8c FUN_14005cc8c body=485 status=ok
// SIG undefined FUN_14005cc8c(void)

int * FUN_14005cc8c(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14005ce72 FUN_14005ce72 body=661 status=ok
// SIG undefined FUN_14005ce72(void)

void FUN_14005ce72(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14005ced6;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14005ced6:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar6 + lVar13) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar6 + lVar13)) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14005d108 FUN_14005d108 body=79 status=ok
// SIG undefined FUN_14005d108(void)

void FUN_14005d108(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a2b3168;
  iVar2 = *(int *)(param_1 + 2);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[1] + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar2 = *(int *)(param_1 + 2);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_14475059c(param_1);
  return;
}



// FUNCTION 14005d157 FUN_14005d157 body=217 status=ok
// SIG undefined FUN_14005d157(void)

longlong FUN_14005d157(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(DAT_14ca4e260 + 4);
  iVar2 = *(int *)(DAT_14ca4e308 + 4);
  *(bool *)param_1 = 0 < iVar1;
  iVar3 = *(int *)(DAT_14ca4e278 + 4);
  *(bool *)(param_1 + 1) = 0 < iVar3;
  lVar4 = DAT_14ca97170;
  if (iVar2 < 1) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar8 = 0;
    }
    else if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar8 = 1;
    }
    if ((*(int *)(lVar4 + uVar8 * 4) < 1) &&
       ((*(byte *)(*(longlong *)(param_2 + 8) + 0x60) & 2) == 0)) {
      bVar5 = false;
      goto LAB_14005d201;
    }
  }
  bVar5 = true;
  if (iVar3 < 1) {
    bVar5 = 0 < iVar1;
  }
LAB_14005d201:
  *(bool *)(param_1 + 2) = bVar5;
  return param_1;
}



// FUNCTION 14005d234 FUN_14005d234 body=114 status=ok
// SIG undefined FUN_14005d234(void)

void FUN_14005d234(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar2 = 0x20;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x68);
      (**(code **)(*param_2 + 0x88))(param_2,lVar1 + lVar2 + -0x20,0,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar1 + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x50;
    } while (lVar3 < *(int *)(param_1 + 0x70));
  }
  return;
}



// FUNCTION 14005d2a6 FUN_14005d2a6 body=256 status=ok
// SIG undefined FUN_14005d2a6(void)

void FUN_14005d2a6(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_1 + -0x1c8);
  param_4 = param_4 + (uint)(param_4 == 0);
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(param_1 + 0x7b8),param_4 * param_3);
  iVar3 = param_3 * *(int *)(param_1 + 0x7c0) + *(int *)(param_1 + 0x7c4);
  FUN_144ac8a60(plVar1,0,param_4 * param_3,iVar3 * param_4);
  lVar2 = *(longlong *)(param_1 + -0x30);
  if (lVar2 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x1c8) + 8))(plVar1);
    lVar2 = *(longlong *)(param_1 + -0x30);
  }
  *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x60))
            (*(longlong **)(lVar2 + 0x28),iVar3,param_4,param_2,0);
  if (*(longlong *)(param_1 + -0x30) != 0) {
    if ((0 < (int)DAT_14c760b84 && *(int *)(param_1 + -4) == 0) &&
       (DAT_14c760b84 < *(uint *)(*(longlong *)(param_1 + -0x30) + 0x1c0))) {
                    /* WARNING: Could not recover jumptable at 0x00014005d394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14005d3a6 FUN_14005d3a6 body=236 status=ok
// SIG undefined FUN_14005d3a6(void)

undefined8 * FUN_14005d3a6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)0x0) {
    lVar2 = FUN_14001cc68(0xd0010);
    lVar4 = 0;
    lVar1 = 0;
    do {
      lVar3 = lVar1;
      lVar1 = lVar2 + lVar4;
      *(longlong *)(lVar2 + 0xc0 + lVar4) = lVar3;
      lVar4 = lVar4 + 0xd0;
    } while (lVar4 != 0xd0000);
    *(longlong *)(lVar2 + 0xd0000) = *param_1;
    *param_1 = lVar2;
    puVar5 = (undefined8 *)(lVar2 + 0xcff30);
  }
  else {
    lVar3 = puVar5[0x18];
  }
  param_1[1] = lVar3;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  puVar5[4] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[5] = 0xffffffffffffffff;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  puVar5[9] = param_2;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined4 *)(puVar5 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar5 + 0xb4) = 1;
  *(undefined2 *)(puVar5 + 0x17) = 0;
  return puVar5;
}



// FUNCTION 14005d492 FUN_14005d492 body=141 status=ok
// SIG undefined FUN_14005d492(void)

void FUN_14005d492(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14005d520();
  local_48[1] = 0;
  local_38 = 1;
  local_34 = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1378) = DAT_14cbccd10;
  local_48[0] = param_1;
  FUN_14090c20c(param_1 + 0x8a8,param_1,param_2);
  FUN_14066f62c(param_1 + 0x8a8,local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005d520 FUN_14005d520 body=5358 status=ok
// SIG undefined FUN_14005d520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005d520(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  double *pdVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  size_t _Size;
  longlong *plVar30;
  longlong lVar31;
  ulonglong uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  int local_1bc;
  uint *local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a0;
  ulonglong local_198;
  uint local_18c;
  longlong *local_188;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  uint *local_150;
  longlong *local_148;
  int local_140;
  uint local_13c;
  longlong *local_138;
  undefined8 local_130;
  longlong *plStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  uint *local_110;
  longlong *plStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  param_1[0x26] = param_2;
  lVar13 = FUN_140721bac(*(undefined8 *)(param_2 + 0x10));
  param_1[0x27] = lVar13;
  (**(code **)(*param_1 + 0x80))(param_1,param_2);
  if ((longlong *)param_1[0x27] == (longlong *)0x0) {
    lVar13 = (**(code **)(*param_1 + 0x40))(param_1);
    param_1[0x2e] = lVar13;
  }
  else {
    local_168 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x20))();
    param_1[0x2e] = 0;
    lVar13 = (**(code **)(*(longlong *)param_1[0x27] + 0x80))();
    if (0 < *(int *)(lVar13 + 8)) {
      plVar26 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x80))();
      if (*(longlong *)(*plVar26 + 0x38) != 0) {
        param_1[0x2e] = *(int *)(*(longlong *)(*plVar26 + 0x38) + 0x44) + param_2;
      }
    }
    plVar26 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x78))();
    local_1d8 = param_1 + 0x30;
    if ((int)param_1[0x31] != *(int *)((longlong)param_1 + 0x1b4)) {
      plVar16 = param_1 + 0x37;
      if ((longlong *)param_1[0x38] != (longlong *)0x0) {
        plVar16 = (longlong *)param_1[0x38];
      }
      iVar27 = (int)param_1[0x39];
      iVar20 = iVar27 + 3;
      if (-1 < iVar27) {
        iVar20 = iVar27;
      }
      if ((int)param_1[0x31] - *(int *)((longlong)param_1 + 0x1b4) < iVar20 >> 2) {
        plVar30 = param_1 + 0x32;
        local_110 = (uint *)&DAT_100000000;
        local_100 = 0xffffffff;
        uStack_f8 = 0;
        plStack_108 = plVar30;
        if ((int)param_1[0x35] == 0) {
          iVar27 = 0;
        }
        else {
          FUN_1449c0562(&local_110);
          iVar27 = (int)param_1[0x35];
        }
        local_138 = local_1d8;
        local_130 = local_110;
        plStack_128 = plStack_108;
        uStack_118 = CONCAT44(uStack_f4,uStack_f8);
        local_120 = local_100;
        uVar3 = local_120;
        local_120._4_4_ = (int)((ulonglong)local_100 >> 0x20);
        iVar20 = local_120._4_4_;
        if ((local_120._4_4_ != iVar27) || (local_120 = local_100, plStack_108 != plVar30)) {
          do {
            local_120 = uVar3;
            *(undefined4 *)
             ((longlong)plVar16 +
             (longlong)*(int *)(*local_138 + 0x1c + (longlong)iVar20 * 0x20) * 4) = 0xffffffff;
            local_120 = CONCAT44(local_120._4_4_,(uint)local_120 & ~local_130._4_4_);
            FUN_1449c0562(&local_130);
            iVar20 = local_120._4_4_;
            uVar3 = local_120;
          } while (local_138 != local_1d8 || (plStack_128 != plVar30 || local_120._4_4_ != iVar27));
        }
      }
      else if (0 < iVar27) {
        lVar13 = 0;
        do {
          *(undefined4 *)((longlong)plVar16 + lVar13 * 4) = 0xffffffff;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)param_1[0x39]);
      }
      iVar27 = (int)param_1[0x35];
      if (iVar27 == 0) {
        uVar15 = 0;
        uVar32 = 1;
        iVar20 = 0;
        iVar12 = 0;
      }
      else {
        puVar14 = (uint *)param_1[0x34];
        if ((uint *)param_1[0x34] == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x32);
        }
        uVar23 = *puVar14;
        if (uVar23 == 0) {
          iVar20 = iVar27 + 0x1e;
          if (-1 < iVar27 + -1) {
            iVar20 = iVar27 + -1;
          }
          uVar15 = 0;
          uVar32 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar32 = uVar15;
          }
          iVar12 = 0;
          do {
            if (uVar32 == uVar15) goto LAB_14005e558;
            iVar12 = iVar12 + 0x20;
            uVar23 = puVar14[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar15 = 0;
          iVar12 = 0;
        }
        uVar32 = (ulonglong)(-uVar23 & uVar23);
        uVar28 = uVar32 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar20 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar27 <= iVar20) {
          iVar20 = iVar27;
        }
      }
      if (iVar20 < iVar27) {
        uVar23 = 0xffffffff;
        do {
          if (*(longlong *)(*local_1d8 + 8 + (longlong)iVar20 * 0x20) != 0) {
            FUN_1400020a8();
            iVar27 = (int)param_1[0x35];
          }
          uVar23 = uVar23 & ~(uint)uVar32;
          puVar14 = (uint *)param_1[0x34];
          if ((uint *)param_1[0x34] == (uint *)0x0) {
            puVar14 = (uint *)(param_1 + 0x32);
          }
          iVar20 = (int)uVar15;
          lVar13 = (longlong)iVar20;
          uVar11 = puVar14[lVar13] & uVar23;
          if (uVar11 == 0) {
            iVar19 = iVar27 + 0x1e;
            if (-1 < iVar27 + -1) {
              iVar19 = iVar27 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar24 = iVar19;
            if (iVar19 < iVar20) {
              iVar24 = iVar20;
            }
            if (iVar19 <= iVar20) break;
            lVar31 = 0;
            while( true ) {
              iVar12 = iVar12 + 0x20;
              uVar11 = puVar14[lVar13 + lVar31 + 1];
              if (uVar11 != 0) break;
              lVar31 = lVar31 + 1;
              if (iVar24 - lVar13 == lVar31) goto LAB_14005e558;
            }
            uVar15 = (ulonglong)(iVar20 + (int)lVar31 + 1);
            uVar23 = 0xffffffff;
          }
          uVar32 = (ulonglong)(-uVar11 & uVar11);
          uVar28 = uVar32 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar20 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar20 < iVar27);
      }
LAB_14005e558:
      *(undefined4 *)(param_1 + 0x31) = 0;
      if (*(int *)((longlong)param_1 + 0x18c) < 0) {
        FUN_1446f4a44(local_1d8,0);
      }
      param_1[0x36] = 0xffffffff;
      *(undefined4 *)(param_1 + 0x35) = 0;
    }
    uVar23 = *(uint *)(plVar26 + 5);
    if (uVar23 == 0) {
      uVar15 = 1;
      uVar32 = 0;
      iVar27 = 0;
      uVar11 = 0;
    }
    else {
      puVar14 = (uint *)plVar26[4];
      if ((uint *)plVar26[4] == (uint *)0x0) {
        puVar14 = (uint *)(plVar26 + 2);
      }
      uVar11 = *puVar14;
      if (uVar11 == 0) {
        iVar27 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar27 = uVar23 - 1;
        }
        uVar32 = 0;
        uVar15 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar15 = uVar32;
        }
        iVar27 = 0;
        do {
          if (uVar15 == uVar32) goto LAB_14005e1b7;
          iVar27 = iVar27 + 0x20;
          uVar11 = puVar14[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar32 = 0;
        iVar27 = 0;
      }
      uVar15 = (ulonglong)(-uVar11 & uVar11);
      uVar28 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar11 = (iVar27 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar23 <= (int)uVar11) {
        uVar11 = uVar23;
      }
    }
    if (uVar11 != uVar23) {
      local_1b8 = (uint *)(param_1 + 0x32);
      local_188 = param_1 + 0x37;
      local_1a0 = param_1 + 0x38;
      uVar22 = 0xffffffff;
      local_198 = (ulonglong)uVar23;
      local_150 = (uint *)(plVar26 + 2);
      local_148 = plVar26;
      do {
        puVar14 = local_1b8;
        plVar26 = (longlong *)((longlong)(int)uVar11 * 0x20 + *local_148);
        local_1e0 = plVar26;
        local_1bc = iVar27;
        local_18c = uVar22;
        local_170 = uVar15;
        local_158 = uVar32;
        if (*(int *)((longlong)param_1 + 0x1b4) == 0) {
          iVar27 = (int)param_1[0x31];
          *(int *)(param_1 + 0x31) = iVar27 + 1;
          if (*(int *)((longlong)param_1 + 0x18c) == iVar27) {
            FUN_1447711aa(local_1d8,iVar27);
          }
          plVar26 = local_1e0;
          iVar20 = (int)param_1[0x35];
          if (iVar20 == 0) {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar12 = iVar20 + -1;
            }
            iVar12 = iVar12 >> 5;
          }
          iVar19 = iVar20 + 1;
          iVar24 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar24 = iVar20;
          }
          if (iVar24 >> 5 == iVar12) {
            *(int *)(param_1 + 0x35) = iVar19;
          }
          else {
            if (*(int *)((longlong)param_1 + 0x1ac) <= iVar20) {
              if (iVar20 + 0x20U < 0xa0) {
                iVar19 = 0x80;
                iVar12 = iVar20;
              }
              else {
                uVar23 = iVar20 + 0x20U >> 5;
                if (*(int *)((longlong)param_1 + 0x1ac) + 0x1fU < 0xa0) {
                  uVar11 = 4;
                  if (4 < uVar23) {
                    uVar11 = uVar23;
                  }
                }
                else {
                  uVar11 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
                }
                uVar15 = FUN_144a3809e(uVar11 << 2,0);
                iVar12 = (int)(uVar15 >> 2);
                iVar19 = -0x20;
                if ((int)uVar23 <= iVar12) {
                  iVar19 = iVar12 << 5;
                }
                iVar12 = (int)param_1[0x35];
              }
              puVar14 = local_1b8;
              *(int *)((longlong)param_1 + 0x1ac) = iVar19;
              FUN_1446efbd8(local_1b8,iVar12);
              iVar19 = (int)param_1[0x35] + 1;
            }
            iVar12 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar12 = iVar19;
            }
            *(int *)(param_1 + 0x35) = iVar19;
            if (iVar19 % 0x20 != 0) {
              puVar21 = (uint *)param_1[0x34];
              if ((uint *)param_1[0x34] == (uint *)0x0) {
                puVar21 = puVar14;
              }
              bVar18 = -(char)(iVar19 % 0x20);
              puVar21[iVar12 >> 5] = (puVar21[iVar12 >> 5] << (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
            }
          }
          lVar13 = (longlong)iVar27;
          puVar21 = (uint *)param_1[0x34];
          if ((uint *)param_1[0x34] == (uint *)0x0) {
            puVar21 = puVar14;
          }
          bVar18 = (byte)iVar20 & 0x1f;
          puVar21[iVar24 >> 5] =
               puVar21[iVar24 >> 5] & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
        }
        else {
          iVar27 = (int)param_1[0x36];
          lVar13 = (longlong)iVar27;
          iVar20 = *(int *)(param_1[0x30] + 4 + lVar13 * 0x20);
          *(int *)(param_1 + 0x36) = iVar20;
          iVar12 = *(int *)((longlong)param_1 + 0x1b4) + -1;
          *(int *)((longlong)param_1 + 0x1b4) = iVar12;
          if (iVar12 != 0) {
            *(undefined4 *)(param_1[0x30] + (longlong)iVar20 * 0x20) = 0xffffffff;
          }
        }
        uVar23 = 1;
        puVar21 = (uint *)param_1[0x34];
        if ((uint *)param_1[0x34] == (uint *)0x0) {
          puVar21 = puVar14;
        }
        iVar20 = iVar27 + 0x1f;
        if (-1 < iVar27) {
          iVar20 = iVar27;
        }
        puVar21[iVar20 >> 5] = puVar21[iVar20 >> 5] | 1 << ((byte)iVar27 & 0x1f);
        lVar31 = param_1[0x30];
        lVar13 = lVar13 * 0x20;
        puVar1 = (undefined8 *)(lVar31 + lVar13);
        lVar4 = *plVar26;
        *(longlong *)(lVar31 + lVar13) = lVar4;
        puVar2 = (undefined8 *)(lVar31 + 8 + lVar13);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(lVar31 + 0x18 + lVar13) = 0xffffffff;
        uVar11 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar22 = (uint)lVar4 & 0xffff;
        uVar11 = ((uint)lVar4 << 0x10 | uVar22) + (int)((ulonglong)lVar4 >> 0x20) +
                 (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar22 >> 4);
        uVar22 = (int)param_1[0x31] - *(int *)((longlong)param_1 + 0x1b4);
        if (uVar22 != 1) {
          if ((int)param_1[0x31] != *(int *)((longlong)param_1 + 0x1b4)) {
            plVar26 = (longlong *)param_1[0x38];
            if ((longlong *)param_1[0x38] == (longlong *)0x0) {
              plVar26 = local_188;
            }
            iVar20 = *(int *)((longlong)plVar26 + (ulonglong)((int)param_1[0x39] - 1U & uVar11) * 4)
            ;
            if (iVar20 != -1) {
              do {
                puVar2 = (undefined8 *)(*local_1d8 + (longlong)iVar20 * 0x20);
                if (*(longlong *)(*local_1d8 + (longlong)iVar20 * 0x20) == lVar4) {
                  if (puVar2[1] != 0) {
                    FUN_1400020a8();
                  }
                  uVar3 = *puVar1;
                  uVar5 = puVar1[1];
                  puVar2[2] = puVar1[2];
                  *puVar2 = uVar3;
                  puVar2[1] = uVar5;
                  FUN_14791b99c(local_1d8,iVar27);
                  plVar26 = local_1e0;
                  iVar27 = iVar20;
                  goto LAB_14005e058;
                }
                iVar20 = *(int *)(puVar2 + 3);
              } while (iVar20 != -1);
            }
          }
          plVar26 = local_1e0;
          puVar14 = local_1b8;
          if (3 < uVar22) {
            uVar15 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
            lVar13 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar23 = 1 << ((byte)lVar13 & 0x1f);
          }
        }
        if (((int)uVar22 < 1) || ((int)uVar23 <= (int)param_1[0x39])) {
          uVar11 = (int)param_1[0x39] - 1U & uVar11;
          *(uint *)((longlong)puVar1 + 0x1c) = uVar11;
          plVar16 = (longlong *)param_1[0x38];
          if ((longlong *)param_1[0x38] == (longlong *)0x0) {
            plVar16 = local_188;
          }
          *(undefined4 *)(puVar1 + 3) =
               *(undefined4 *)
                ((longlong)plVar16 + ((longlong)(int)param_1[0x39] - 1U & (longlong)(int)uVar11) * 4
                );
          plVar16 = (longlong *)param_1[0x38];
          if ((longlong *)param_1[0x38] == (longlong *)0x0) {
            plVar16 = local_188;
          }
          *(int *)((longlong)plVar16 +
                  ((longlong)(int)param_1[0x39] - 1U & (longlong)(int)uVar11) * 4) = iVar27;
        }
        else {
          *(uint *)(param_1 + 0x39) = uVar23;
          if (param_1[0x38] != 0) {
            FUN_1446efa72(local_1a0,0,0,4);
            uVar23 = *(uint *)(param_1 + 0x39);
          }
          if (uVar23 == 1) {
            if (*local_1a0 != 0) {
              FUN_1446efa72(local_1a0,0,0,4);
            }
LAB_14005dd5a:
            uVar11 = 0;
            do {
              plVar16 = (longlong *)param_1[0x38];
              if ((longlong *)param_1[0x38] == (longlong *)0x0) {
                plVar16 = local_188;
              }
              *(undefined4 *)
               ((longlong)plVar16 + (ulonglong)((int)param_1[0x39] + 0x7fffffffU & uVar11) * 4) =
                   0xffffffff;
              uVar11 = uVar11 + 1;
            } while (uVar23 != uVar11);
          }
          else {
            if (uVar23 == 0) goto LAB_14005e058;
            FUN_1446efa72(local_1a0,0,uVar23,4);
            if (0 < (int)uVar23) goto LAB_14005dd5a;
          }
          iVar20 = (int)param_1[0x35];
          if (iVar20 == 0) {
            uVar15 = 0;
            uVar32 = 1;
            iVar12 = 0;
            iVar19 = 0;
          }
          else {
            puVar21 = (uint *)param_1[0x34];
            if ((uint *)param_1[0x34] == (uint *)0x0) {
              puVar21 = puVar14;
            }
            uVar23 = *puVar21;
            if (uVar23 == 0) {
              iVar12 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar12 = iVar20 + -1;
              }
              uVar15 = 0;
              uVar32 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar32 = uVar15;
              }
              iVar19 = 0;
              do {
                if (uVar32 == uVar15) goto LAB_14005e058;
                iVar19 = iVar19 + 0x20;
                uVar23 = puVar21[uVar15 + 1];
                uVar15 = uVar15 + 1;
              } while (uVar23 == 0);
            }
            else {
              uVar15 = 0;
              iVar19 = 0;
            }
            uVar32 = (ulonglong)(-uVar23 & uVar23);
            uVar28 = uVar32 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar12 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar12) {
              iVar12 = iVar20;
            }
          }
          if (iVar12 < iVar20) {
            uVar23 = 0xffffffff;
            do {
              lVar13 = param_1[0x30];
              lVar31 = (longlong)iVar12 * 0x20;
              uVar3 = *(undefined8 *)(lVar13 + lVar31);
              uVar11 = (uint)((ulonglong)uVar3 >> 0x10);
              uVar22 = (uint)uVar3 & 0xffff;
              uVar28 = (longlong)
                       (int)(((uint)uVar3 << 0x10 | uVar22) + (int)((ulonglong)uVar3 >> 0x20) +
                             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar22 >> 4)) &
                       (longlong)(int)param_1[0x39] - 1U;
              iVar20 = (int)uVar28;
              *(int *)(lVar13 + 0x1c + lVar31) = iVar20;
              plVar26 = (longlong *)param_1[0x38];
              if ((longlong *)param_1[0x38] == (longlong *)0x0) {
                plVar26 = local_188;
              }
              *(undefined4 *)(lVar13 + 0x18 + lVar31) =
                   *(undefined4 *)
                    ((longlong)plVar26 + ((longlong)(int)param_1[0x39] - 1U & uVar28) * 4);
              plVar26 = (longlong *)param_1[0x38];
              if ((longlong *)param_1[0x38] == (longlong *)0x0) {
                plVar26 = local_188;
              }
              *(int *)((longlong)plVar26 +
                      ((longlong)iVar20 & (longlong)(int)param_1[0x39] - 1U) * 4) = iVar12;
              uVar23 = ~(uint)uVar32 & uVar23;
              puVar14 = (uint *)param_1[0x34];
              if ((uint *)param_1[0x34] == (uint *)0x0) {
                puVar14 = local_1b8;
              }
              iVar20 = (int)param_1[0x35];
              iVar12 = (int)uVar15;
              lVar13 = (longlong)iVar12;
              uVar11 = puVar14[lVar13] & uVar23;
              plVar26 = local_1e0;
              if (uVar11 == 0) {
                iVar24 = iVar20 + 0x1e;
                if (-1 < iVar20 + -1) {
                  iVar24 = iVar20 + -1;
                }
                iVar24 = iVar24 >> 5;
                iVar25 = iVar24;
                if (iVar24 < iVar12) {
                  iVar25 = iVar12;
                }
                if (iVar24 <= iVar12) break;
                lVar31 = 0;
                while( true ) {
                  iVar19 = iVar19 + 0x20;
                  uVar11 = puVar14[lVar13 + lVar31 + 1];
                  if (uVar11 != 0) break;
                  lVar31 = lVar31 + 1;
                  if (iVar25 - lVar13 == lVar31) goto LAB_14005e058;
                }
                uVar15 = (ulonglong)(iVar12 + (int)lVar31 + 1);
                uVar23 = 0xffffffff;
              }
              uVar32 = (ulonglong)(-uVar11 & uVar11);
              uVar28 = uVar32 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar12 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            } while (iVar12 < iVar20);
          }
        }
LAB_14005e058:
        lVar13 = plVar26[2];
        if ((longlong)(int)lVar13 != 0) {
          lVar31 = *local_1d8 + (longlong)iVar27 * 0x20;
          lVar4 = plVar26[1];
          lVar29 = 0;
          do {
            iVar27 = *(int *)(*(longlong *)
                               (*local_168 +
                               (longlong)(int)(~*(uint *)(lVar4 + lVar29) + (int)local_168[1]) * 8)
                             + 0x44);
            iVar20 = *(int *)(lVar31 + 0x10);
            *(uint *)(lVar31 + 0x10) = iVar20 + 1U;
            if (*(uint *)(lVar31 + 0x14) < iVar20 + 1U) {
              FUN_14005ec8e((longlong *)(lVar31 + 8),iVar20);
            }
            *(longlong *)(*(longlong *)(lVar31 + 8) + (longlong)iVar20 * 8) = iVar27 + param_2;
            lVar29 = lVar29 + 4;
          } while ((longlong)(int)lVar13 * 4 != lVar29);
        }
        uVar22 = local_18c & ~(uint)local_170;
        puVar14 = (uint *)local_148[4];
        if ((uint *)local_148[4] == (uint *)0x0) {
          puVar14 = local_150;
        }
        uVar23 = *(uint *)(local_148 + 5);
        iVar20 = (int)local_158;
        lVar13 = (longlong)iVar20;
        uVar11 = puVar14[lVar13] & uVar22;
        uVar32 = local_158;
        iVar27 = local_1bc;
        if (uVar11 == 0) {
          iVar12 = uVar23 + 0x1e;
          if (-1 < (int)(uVar23 - 1)) {
            iVar12 = uVar23 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar27 = local_1bc + 0x20;
          iVar19 = iVar12;
          if (iVar12 < iVar20) {
            iVar19 = iVar20;
          }
          if (iVar20 < iVar12) {
            lVar31 = 0;
            do {
              uVar11 = puVar14[lVar13 + lVar31 + 1];
              if (uVar11 != 0) {
                uVar22 = 0xffffffff;
                uVar32 = (ulonglong)(iVar20 + (int)lVar31 + 1);
                goto LAB_14005e172;
              }
              iVar27 = iVar27 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar19 - lVar13 != lVar31);
            uVar22 = 0xffffffff;
            iVar20 = iVar19;
          }
          uVar32 = (ulonglong)(iVar20 + 1);
          uVar15 = local_170;
          uVar11 = uVar23;
        }
        else {
LAB_14005e172:
          uVar15 = (ulonglong)(-uVar11 & uVar11);
          uVar28 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar11 = (iVar27 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar23 <= (int)uVar11) {
            uVar11 = uVar23;
          }
        }
      } while (uVar11 != (uint)local_198);
    }
LAB_14005e1b7:
    plVar26 = (longlong *)param_1[0x27];
    if (param_1[0x28] == 0) {
      lVar13 = (**(code **)(*plVar26 + 0x98))();
      param_1[0x28] = lVar13;
      plVar26 = (longlong *)param_1[0x27];
    }
    local_13c = 0;
    plVar26 = (longlong *)(**(code **)(*plVar26 + 0x10))();
    uVar23 = *(uint *)(plVar26 + 1);
    local_140 = 0;
    if (0 < (longlong)(int)uVar23) {
      do {
        lVar13 = *plVar26;
        lVar31 = (longlong)local_140;
        local_138 = (longlong *)&local_140;
        local_130 = &local_13c;
        FUN_140263e2a(param_1 + 0x5c,&local_110,&local_138,0);
        local_13c = local_13c + *(int *)(lVar13 + 0x18 + lVar31 * 0x38);
        local_140 = local_140 + 1;
      } while (local_140 < (int)uVar23);
    }
    FUN_14005ea14(param_1 + 0x58);
    lVar13 = (longlong)(int)local_13c;
    iVar27 = (int)param_1[0x59];
    *(uint *)(param_1 + 0x59) = iVar27 + local_13c;
    if ((uint)(*(int *)((longlong)param_1 + 0x2cc) - iVar27) < local_13c) {
      FUN_14475e4ac(param_1 + 0x58);
    }
    memset((void *)((longlong)iVar27 * 4 + param_1[0x58]),0,lVar13 << 2);
    FUN_14005ea14(param_1 + 0x5a);
    lVar13 = (longlong)(int)local_13c;
    iVar27 = (int)param_1[0x5b];
    *(uint *)(param_1 + 0x5b) = iVar27 + local_13c;
    if ((uint)(*(int *)((longlong)param_1 + 0x2dc) - iVar27) < local_13c) {
      FUN_14475e4ac(param_1 + 0x5a);
    }
    memset((void *)((longlong)iVar27 * 4 + param_1[0x5a]),0,lVar13 << 2);
    FUN_14005ea14(param_1 + 0x54);
    iVar27 = (int)param_1[0x55];
    *(uint *)(param_1 + 0x55) = iVar27 + uVar23;
    if ((uint)(*(int *)((longlong)param_1 + 0x2ac) - iVar27) < uVar23) {
      FUN_14475e4ac(param_1 + 0x54);
    }
    _Size = (longlong)(int)uVar23 << 2;
    memset((void *)((longlong)iVar27 * 4 + param_1[0x54]),0,_Size);
    plVar26 = param_1 + 0x56;
    FUN_14005ea14(plVar26);
    iVar27 = (int)param_1[0x57];
    *(uint *)(param_1 + 0x57) = iVar27 + uVar23;
    if ((uint)(*(int *)((longlong)param_1 + 700) - iVar27) < uVar23) {
      FUN_14475e4ac(plVar26);
    }
    memset((void *)((longlong)iVar27 * 4 + *plVar26),0,_Size);
  }
  FUN_144750a86(param_2,&local_138,0,0);
  plVar26 = local_138;
  if ((int)local_130 == 0) {
    plVar26 = (longlong *)&DAT_149dfb77a;
  }
  FUN_14020fad6(param_1 + 0x2c,plVar26);
  if (local_138 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[0xbc] = -1;
  FUN_14005ea3e(param_1);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar26 = &DAT_14c846480;
    plVar16 = &DAT_14c846480;
    plVar30 = param_1 + 2;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *plVar30 = *plVar16;
      plVar16 = plVar16 + 1;
      plVar30 = plVar30 + 1;
    }
    plVar16 = &DAT_14c846480;
    plVar30 = param_1 + 0xe;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *plVar30 = *plVar16;
      plVar16 = plVar16 + 1;
      plVar30 = plVar30 + 1;
    }
    param_1 = param_1 + 0x1a;
    lVar13 = 0xc;
  }
  else {
    plVar26 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x240);
    plVar16 = param_1 + 2;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *plVar16 = *plVar26;
      plVar26 = plVar26 + 1;
      plVar16 = plVar16 + 1;
    }
    lVar13 = param_1[0x29];
    uVar6 = *(undefined4 *)(lVar13 + 0x1c8);
    uVar7 = *(undefined4 *)(lVar13 + 0x1cc);
    plVar26 = *(longlong **)(lVar13 + 0x1d0);
    plVar16 = *(longlong **)(lVar13 + 0x1d8);
    uVar3 = *(undefined8 *)(lVar13 + 0x1a0);
    uVar8 = *(undefined4 *)(lVar13 + 0x198);
    uVar9 = *(undefined4 *)(lVar13 + 0x19c);
    uVar10 = *(undefined4 *)(lVar13 + 0x1a0);
    puVar14 = *(uint **)(lVar13 + 0x1a8);
    auVar37 = *(undefined1 (*) [16])(lVar13 + 0x1b0);
    dVar33 = auVar37._0_8_;
    dVar46 = auVar37._8_8_;
    dVar50 = *(double *)(lVar13 + 0x1c0);
    pdVar17 = *(double **)(lVar13 + 0x230);
    if (pdVar17 == (double *)0x0) {
      pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
      dVar53 = DAT_14c8463d8;
      *pdVar17 = DAT_14c8463d0;
      pdVar17[1] = dVar53;
      dVar53 = DAT_14c8463e8;
      pdVar17[2] = DAT_14c8463e0;
      pdVar17[3] = dVar53;
      dVar53 = DAT_14c846500;
      pdVar17[4] = DAT_14c8464f8;
      pdVar17[5] = dVar53;
      pdVar17[6] = DAT_14c846508;
      *(double **)(lVar13 + 0x230) = pdVar17;
    }
    auVar41 = _DAT_1499387d0;
    if ((((pdVar17[4] != dVar33) || (NAN(pdVar17[4]) || NAN(dVar33))) || (pdVar17[5] != dVar46)) ||
       (((NAN(pdVar17[5]) || NAN(dVar46) || (pdVar17[6] != dVar50)) ||
        (NAN(pdVar17[6]) || NAN(dVar50))))) {
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar50;
      dVar53 = (double)DAT_1499387d0;
      dVar34 = DAT_1499387d0._8_8_;
      auVar37 = divpd(auVar37,_DAT_1499387d0);
      auVar40 = divpd(auVar43,_DAT_1499387d0);
      auVar37 = roundpd(auVar37,auVar37,3);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar51._0_8_ = dVar33 - auVar37._0_8_ * dVar53;
      auVar51._8_8_ = dVar46 - auVar37._8_8_ * dVar34;
      auVar44._0_8_ = dVar50 - auVar40._0_8_ * dVar53;
      auVar44._8_8_ = 0.0 - auVar40._8_8_ * dVar34;
      auVar47._0_8_ = auVar51._0_8_ + dVar53;
      auVar47._8_8_ = auVar51._8_8_ + dVar34;
      auVar42._0_8_ = auVar44._0_8_ + dVar53;
      auVar42._8_8_ = auVar44._8_8_ + dVar34;
      auVar40._8_8_ = -(ulonglong)(0.0 <= auVar51._8_8_);
      auVar40._0_8_ = -(ulonglong)(0.0 <= auVar51._0_8_);
      auVar37 = blendvpd(auVar47,auVar51,auVar40);
      auVar48._8_8_ = -(ulonglong)(0.0 <= auVar44._8_8_);
      auVar48._0_8_ = -(ulonglong)(0.0 <= auVar44._0_8_);
      auVar40 = blendvpd(auVar42,auVar44,auVar48);
      auVar45._0_8_ = auVar37._0_8_ + -360.0;
      auVar45._8_8_ = auVar37._8_8_ + -360.0;
      auVar38._8_8_ = -(ulonglong)(180.0 < auVar37._8_8_);
      auVar38._0_8_ = -(ulonglong)(180.0 < auVar37._0_8_);
      auVar48 = blendvpd(auVar37,auVar45,auVar38);
      auVar39._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
      auVar39._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
      auVar37._8_8_ = auVar40._8_8_ + 0.0;
      auVar37._0_8_ = auVar40._0_8_ + -360.0;
      auVar37 = blendvpd(auVar40,auVar37,auVar39);
      *(undefined1 (*) [16])(pdVar17 + 4) = auVar48;
      dVar50 = auVar37._0_8_;
      pdVar17[6] = dVar50;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = dVar50;
      auVar37 = divpd(auVar48,auVar41);
      auVar41 = divpd(auVar52,auVar41);
      auVar37 = roundpd(auVar37,auVar37,3);
      auVar41 = roundpd(auVar41,auVar41,3);
      dVar46 = (auVar48._0_8_ - auVar37._0_8_ * dVar53) * 0.008726646259971648;
      dVar49 = (auVar48._8_8_ - auVar37._8_8_ * dVar34) * 0.008726646259971648;
      dVar50 = (dVar50 - auVar41._0_8_ * dVar53) * 0.008726646259971648;
      dVar53 = (0.0 - auVar41._8_8_ * dVar34) * 0.008726646259971648;
      local_188 = (longlong *)sin(dVar46);
      uStack_160 = 0;
      local_168 = plVar26;
      dVar33 = sin(dVar49);
      uStack_1d0 = 0;
      local_1d8 = plVar16;
      dVar34 = sin(dVar50);
      uStack_1b0 = 0;
      local_1b8 = puVar14;
      sin(dVar53);
      dVar35 = cos(dVar46);
      dVar49 = cos(dVar49);
      dVar36 = cos(dVar50);
      cos(dVar53);
      dVar46 = -(dVar49 * (double)local_188 * dVar34) + dVar33 * dVar35 * dVar36;
      dVar53 = dVar33 * (double)local_188 * dVar34 + dVar49 * dVar35 * dVar36;
      dVar50 = (double)local_188 * dVar33 * dVar36 - dVar35 * dVar49 * dVar34;
      dVar33 = -((double)local_188 * dVar49 * dVar36) - dVar35 * dVar33 * dVar34;
      *pdVar17 = dVar50;
      pdVar17[1] = dVar33;
      pdVar17[2] = dVar46;
      pdVar17[3] = dVar53;
      uVar54 = (undefined4)local_168;
      uVar55 = local_168._4_4_;
      puVar14 = local_1b8;
      plVar16 = local_1d8;
    }
    else {
      dVar50 = *pdVar17;
      dVar33 = pdVar17[1];
      dVar46 = pdVar17[2];
      dVar53 = pdVar17[3];
      uVar54 = (int)plVar26;
      uVar55 = (int)((ulonglong)plVar26 >> 0x20);
    }
    param_1[0xe] = (longlong)dVar50;
    param_1[0xf] = (longlong)dVar33;
    param_1[0x10] = (longlong)dVar46;
    param_1[0x11] = (longlong)dVar53;
    *(undefined4 *)(param_1 + 0x12) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar9;
    *(undefined4 *)(param_1 + 0x13) = uVar10;
    *(int *)((longlong)param_1 + 0x9c) = (int)((ulonglong)uVar3 >> 0x20);
    param_1[0x14] = (longlong)puVar14;
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x16) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar7;
    *(undefined4 *)(param_1 + 0x17) = uVar54;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar55;
    param_1[0x18] = (longlong)plVar16;
    param_1[0x19] = 0;
    if (*(longlong *)(param_1[0x29] + 0xa8) == 0) {
      plVar26 = &DAT_14c846480;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(param_1[0x29] + 0xa8) + 0x1c8);
      plVar26 = &DAT_14c846480;
      if (lVar13 != 0) {
        plVar26 = (longlong *)(lVar13 + 0x240);
      }
    }
    lVar13 = 0xc;
    param_1 = param_1 + 0x1a;
  }
  for (; lVar13 != 0; lVar13 = lVar13 + -1) {
    *param_1 = *plVar26;
    plVar26 = plVar26 + 1;
    param_1 = param_1 + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005ea14 FUN_14005ea14 body=41 status=ok
// SIG undefined FUN_14005ea14(void)

void FUN_14005ea14(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14482f6fa();
  return;
}



// FUNCTION 14005ea3e FUN_14005ea3e body=164 status=ok
// SIG undefined FUN_14005ea3e(void)

void FUN_14005ea3e(longlong param_1)

{
  short sVar1;
  short sVar2;
  
  FUN_14005eae2(param_1 + 0x400);
  if (*(int *)(param_1 + 0x45c) < 0) {
    *(undefined4 *)(param_1 + 0x458) = 0;
    FUN_14791ba0e(param_1 + 0x450,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if (*(int *)(param_1 + 0x46c) < 0) {
    *(undefined4 *)(param_1 + 0x468) = 0;
    FUN_14791ba0e(param_1 + 0x460,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  sVar1 = (short)*(undefined4 *)(param_1 + 0x608);
  sVar2 = sVar1 + 1;
  *(short *)(param_1 + 0x608) = sVar2;
  *(undefined8 *)(param_1 + 0x600) = DAT_14c872be0;
  if (sVar2 == -1) {
    *(short *)(param_1 + 0x608) = sVar1 + 2;
  }
  return;
}



// FUNCTION 14005eae2 FUN_14005eae2 body=70 status=ok
// SIG undefined FUN_14005eae2(void)

void FUN_14005eae2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140171c48();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14005eb28 FUN_14005eb28 body=51 status=ok
// SIG undefined FUN_14005eb28(void)

void FUN_14005eb28(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) == iVar1) {
      return;
    }
    FUN_1446f8c06();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 14005eb5c FUN_14005eb5c body=306 status=ok
// SIG undefined FUN_14005eb5c(void)

void FUN_14005eb5c(uint *param_1,longlong *param_2)

{
  ushort *puVar1;
  void *_Dst;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  uVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  puVar1 = (ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + (ulonglong)(uVar3 & 0xffff) * 2);
  uVar6 = (ulonglong)(*puVar1 >> 6);
  lVar4 = param_2[1];
  if ((ulonglong)param_2[2] <= lVar4 + uVar6 * 2) {
    FUN_140213274(param_2,uVar6);
    lVar4 = param_2[1];
  }
  param_2[1] = lVar4 + uVar6 * 2;
  _Dst = (void *)(*param_2 + (longlong)(int)((ulonglong)(lVar4 - *param_2) >> 1) * 2);
  uVar2 = *puVar1;
  if ((uVar2 & 1) == 0) {
    memcpy(_Dst,puVar1 + 1,(ulonglong)(uVar2 >> 6));
    if (0x3f < *puVar1) {
      uVar2 = *puVar1 >> 6;
      uVar3 = (uint)uVar2;
      uVar6 = (ulonglong)(uVar2 - 1);
      do {
        *(short *)((longlong)_Dst + uVar6 * 2) = (short)*(char *)((longlong)_Dst + uVar6);
        uVar6 = uVar6 - 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    memcpy(_Dst,puVar1 + 1,(ulonglong)(uVar2 >> 5 & 0xfffffffe));
  }
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    puVar5 = (undefined2 *)param_2[1];
    if ((undefined2 *)param_2[2] <= puVar5 + 1) {
      FUN_140213274(param_2,1);
      puVar5 = (undefined2 *)param_2[1];
    }
    param_2[1] = (longlong)(puVar5 + 1);
    *puVar5 = 0x5f;
    FUN_140212e80(param_2,&DAT_149e063bc,uVar3 - 1);
  }
  return;
}



// FUNCTION 14005ec8e FUN_14005ec8e body=353 status=ok
// SIG undefined FUN_14005ec8e(void)

void FUN_14005ec8e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14005ed13;
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
LAB_14005ed13:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14005edf0 FUN_14005edf0 body=398 status=ok
// SIG undefined FUN_14005edf0(void)

undefined8
FUN_14005edf0(undefined8 *param_1,int param_2,int param_3,uint param_4,undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_4 & 2) == 0) {
    if ((param_2 < param_3) || ((longlong)*(int *)(param_1 + 1) == 0)) {
      uVar6 = 0;
    }
    else {
      plVar8 = (longlong *)*param_1;
      lVar7 = (longlong)*(int *)(param_1 + 1) * 0xc0;
      do {
        iVar3 = (int)plVar8[0x17];
        if (iVar3 < 0) {
          plVar1 = plVar8 + 1;
          lVar5 = FUN_140372754(plVar1);
          if (lVar5 == 0) {
            lVar5 = FUN_14005ef80(plVar1);
            if (lVar5 == 0) {
              lVar5 = FUN_140cde26e(plVar1);
              if (lVar5 == 0) {
                cVar2 = (**(code **)(*plVar8 + 8))(plVar8);
                if (cVar2 != '\0') {
                  FUN_140e45f8a(local_128,plVar8 + 8);
                  cVar2 = FUN_140c7b784(local_128,param_2,param_4,param_5);
                  FUN_140060ea8(local_128);
                  goto joined_r0x00014005eec5;
                }
                goto LAB_14005ef64;
              }
              iVar3 = FUN_14005f6be(lVar5,param_5,param_4 & 0xffffff01);
            }
            else {
              iVar3 = FUN_14005f32a(lVar5,param_5,param_4 & 0xffffff01);
            }
            goto LAB_14005ee8c;
          }
          uVar4 = FUN_14005ff6c(lVar5,param_5,param_4 & 0xffffff01);
          local_138 = param_5;
          cVar2 = FUN_14005edf0(lVar5 + 0x48,param_2,uVar4,param_4);
joined_r0x00014005eec5:
          if (cVar2 != '\0') goto LAB_14005eecb;
        }
        else {
LAB_14005ee8c:
          if (iVar3 <= param_2) goto LAB_14005eecb;
        }
LAB_14005ef64:
        plVar8 = plVar8 + 0x18;
        uVar6 = 0;
        lVar7 = lVar7 + -0xc0;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_14005eecb:
    uVar6 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005ef80 FUN_14005ef80 body=122 status=ok
// SIG undefined FUN_14005ef80(void)

longlong FUN_14005ef80(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*param_1 != 0) && ((int)param_1[1] == 0x1010)) {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      if (*(char *)((longlong)param_1 + 0x19) == '\x02') goto LAB_14005efba;
      if (*(char *)((longlong)param_1 + 0x19) != '\0') goto LAB_14005efdb;
    }
    local_18 = *param_1;
    lVar1 = FUN_14005effc();
    if (lVar1 != 0) {
      param_1[2] = lVar1;
      *(undefined1 *)((longlong)param_1 + 0x19) = 2;
      goto LAB_14005efba;
    }
  }
LAB_14005efdb:
  lVar1 = 0;
LAB_14005efba:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005effc FUN_14005effc body=96 status=ok
// SIG undefined FUN_14005effc(void)

undefined8 FUN_14005effc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1);
  uVar1 = FUN_14005f05e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005f05e FUN_14005f05e body=656 status=ok
// SIG undefined FUN_14005f05e(void)

longlong * FUN_14005f05e(int *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  int local_28;
  ulonglong local_20;
  
  plVar10 = DAT_14cb848c0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb848c0 != (longlong *)0x0) {
    cVar3 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar3 == '\0') {
      lVar7 = FUN_1400e3c00(plVar10,param_1,1);
      if ((lVar7 != 0) && (lVar7 = FUN_14013f0dc(plVar10,lVar7,param_1,1), lVar7 != 0)) {
        bVar2 = *(byte *)(lVar7 + 0x2a);
        if ((-1 < (char)bVar2) &&
           (((int)(char)bVar2 < (int)plVar10[0x78] &&
            (*(longlong *)(plVar10[0x77] + (ulonglong)bVar2 * 8) == DAT_14cb84658)))) {
          plVar15 = *(longlong **)(lVar7 + 0x30);
LAB_14005f103:
          if (plVar15 != (longlong *)0x0) {
            lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar8 = FUN_14005f2f0();
            if ((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) {
              plVar10 = (longlong *)0x0;
              if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                  == lVar8 + 0x30) {
                plVar10 = plVar15;
              }
              goto LAB_14005f148;
            }
          }
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar4 = param_1[1], iVar4 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar4 < 1)) {
        local_28 = DAT_14c948620;
        local_30 = DAT_14c948618;
      }
      else {
        puVar11 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar11 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar4 != 1) {
          puVar11 = *(ulonglong **)(param_1 + 6);
        }
        local_28 = (int)puVar11[1];
        local_30 = *puVar11;
      }
      uVar14 = local_30 & 0xffffffff;
      if (local_28 != 0) {
        uVar5 = FUN_144a78877(uVar14,local_28);
        uVar14 = (ulonglong)uVar5;
      }
      iVar4 = FUN_1448467de(plVar10 + 0x3f,uVar14,&local_30);
      if (iVar4 != -1) {
        lVar7 = plVar10[0x3f];
        lVar8 = lVar7 + (longlong)iVar4 * 0x70;
        plVar10 = (longlong *)0x0;
        if ((lVar8 == 0) || (plVar10 = (longlong *)0x0, lVar7 + (longlong)iVar4 * 0x70 == -0x10))
        goto LAB_14005f148;
        puVar12 = (uint *)&DAT_14c948618;
        piVar9 = &DAT_14c948620;
        if ((*param_1 != 0) && ((1 < param_1[1] && (*param_1 != DAT_14c948000)))) {
          puVar12 = (uint *)(*(longlong *)(param_1 + 6) + 0xc);
          piVar9 = (int *)(*(longlong *)(param_1 + 6) + 0x14);
        }
        uVar5 = *puVar12;
        iVar4 = *piVar9;
        uVar6 = uVar5;
        if (iVar4 != 0) {
          uVar6 = FUN_144a78877(uVar5,iVar4);
        }
        if (*(int *)(lVar8 + 0x20) != *(int *)(lVar8 + 0x4c)) {
          lVar7 = lVar8 + 0x50;
          if (*(longlong *)(lVar8 + 0x58) != 0) {
            lVar7 = *(longlong *)(lVar8 + 0x58);
          }
          iVar13 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar8 + 0x60) - 1U & uVar6) * 4);
          if (iVar13 != -1) {
            lVar7 = *(longlong *)(lVar8 + 0x18);
            plVar10 = (longlong *)0x0;
            do {
              lVar8 = (longlong)iVar13 * 0x20;
              if ((*(uint *)(lVar7 + lVar8) == uVar5) &&
                 (lVar1 = lVar7 + lVar8, *(int *)(lVar1 + 8) == iVar4)) {
                plVar10 = (longlong *)0x0;
                if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0)) {
                  plVar15 = *(longlong **)(lVar1 + 0x10);
                  goto LAB_14005f103;
                }
                break;
              }
              iVar13 = *(int *)(lVar7 + 0x18 + lVar8);
            } while (iVar13 != -1);
            goto LAB_14005f148;
          }
        }
      }
    }
  }
  plVar10 = (longlong *)0x0;
LAB_14005f148:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 14005f2f0 FUN_14005f2f0 body=57 status=ok
// SIG undefined FUN_14005f2f0(void)

void FUN_14005f2f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a0e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a0e8 = FUN_140002ddd(FUN_146524d60,uVar1,L"InventoryCompDef");
  }
  return;
}



// FUNCTION 14005f32a FUN_14005f32a body=915 status=ok
// SIG undefined FUN_14005f32a(void)

int FUN_14005f32a(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_c8 [44];
  int local_9c;
  int local_98;
  uint local_94;
  ulonglong local_90;
  uint *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar15 = param_3 & 0xff;
  lVar1 = uVar15 * 4 + 0x178;
  if (*(int *)(param_1 + 0x178 + uVar15 * 4) < 0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar18 = (ulonglong)((uint)*(ushort *)(param_1 + 0x152 + uVar15 * 2) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    FUN_1448729ea(lVar18,local_70,param_2);
    local_98 = FUN_14005fbd2(local_70,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar17 = local_70;
      if (0x18 < local_58) {
        ppppuVar17 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar17);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    local_88 = (uint *)(param_1 + 0xb8);
    uVar5 = *(uint *)(param_1 + 0xd0);
    uVar19 = 1;
    uVar14 = 0;
    uVar15 = 0;
    iVar11 = 0;
    uVar8 = 0;
    if (uVar5 != 0) {
      puVar6 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar6 = local_88;
      }
      uVar8 = *puVar6;
      if (uVar8 == 0) {
        iVar11 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar11 = uVar5 - 1;
        }
        uVar15 = 0;
        uVar19 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar19 = 0;
        }
        iVar11 = 0;
        do {
          if (uVar19 == uVar15) {
            uVar14 = 0;
            goto LAB_14005f660;
          }
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar15 = 0;
      }
      uVar19 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar19 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar8 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar8) {
        uVar8 = uVar5;
      }
    }
    if (uVar8 != uVar5) {
      uVar13 = 0xffffffff;
      uVar14 = 0;
      local_90 = (ulonglong)uVar5;
      do {
        lVar18 = (longlong)
                 *(int *)(*(longlong *)(param_1 + 0xa8) + 0x68 + (longlong)(int)uVar8 * 0x78);
        uVar12 = 0;
        local_9c = iVar11;
        local_94 = uVar13;
        local_80 = uVar15;
        local_78 = uVar14;
        if (lVar18 != 0) {
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x60 + (longlong)(int)uVar8 * 0x78)
          ;
          lVar18 = lVar18 * 0x18;
          uVar12 = 0;
          do {
            if (*(char *)(lVar16 + 8) != '\0') {
              uVar12 = 0;
              break;
            }
            lVar7 = *(longlong *)(lVar16 + 0x10);
            if (lVar7 == 0) {
              lVar7 = FUN_14005fc76(*(undefined8 *)(param_1 + 0x30),lVar16);
              *(longlong *)(lVar16 + 0x10) = lVar7;
              if (lVar7 != 0) goto LAB_14005f565;
            }
            else {
LAB_14005f565:
              uVar8 = FUN_14005faec(lVar7,param_2,param_3 & 0xffffffff);
              uVar5 = uVar12;
              if ((int)uVar8 < (int)uVar12) {
                uVar5 = uVar8;
              }
              bVar20 = uVar12 == 0;
              uVar12 = uVar5;
              if (bVar20) {
                uVar12 = uVar8;
              }
            }
            lVar16 = lVar16 + 0x18;
            lVar18 = lVar18 + -0x18;
          } while (lVar18 != 0);
          uVar5 = *(uint *)(param_1 + 0xd0);
        }
        uVar14 = local_78 & 0xffffffff;
        if ((int)local_78 < (int)uVar12) {
          uVar14 = (ulonglong)uVar12;
        }
        uVar13 = local_94 & ~(uint)uVar19;
        puVar6 = *(uint **)(param_1 + 200);
        if (*(uint **)(param_1 + 200) == (uint *)0x0) {
          puVar6 = local_88;
        }
        iVar4 = (int)local_80;
        lVar18 = (longlong)iVar4;
        uVar8 = puVar6[lVar18] & uVar13;
        uVar15 = local_80;
        iVar11 = local_9c;
        if (uVar8 == 0) {
          iVar9 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar9 = uVar5 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar11 = local_9c + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar4) {
            iVar10 = iVar4;
          }
          if (iVar4 < iVar9) {
            lVar16 = 0;
            do {
              uVar8 = puVar6[lVar18 + lVar16 + 1];
              if (uVar8 != 0) {
                uVar13 = 0xffffffff;
                uVar15 = (ulonglong)(iVar4 + (int)lVar16 + 1);
                goto LAB_14005f613;
              }
              iVar11 = iVar11 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar10 - lVar18 != lVar16);
            uVar13 = 0xffffffff;
            iVar4 = iVar10;
          }
          uVar15 = (ulonglong)(iVar4 + 1);
          uVar8 = uVar5;
        }
        else {
LAB_14005f613:
          uVar19 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar19 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar8 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar8) {
            uVar8 = uVar5;
          }
        }
      } while (uVar8 != (uint)local_90);
    }
LAB_14005f660:
    iVar11 = local_98;
    if (local_98 < (int)uVar14) {
      iVar11 = (int)uVar14;
    }
    *(int *)(param_1 + lVar1) = iVar11;
  }
  iVar4 = FUN_14005f6be(*(undefined8 *)(param_1 + 0x30),param_2,param_3 & 0xffffffff);
  iVar11 = *(int *)(param_1 + lVar1);
  if (iVar11 < iVar4) {
    iVar11 = iVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 14005f6be FUN_14005f6be body=894 status=ok
// SIG undefined FUN_14005f6be(void)

int FUN_14005f6be(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ***pppuVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = *(longlong *)(param_1 + 0xd8);
  if (lVar10 == 0) {
    uVar7 = FUN_140428d10();
    lVar10 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0xd8) = lVar10;
  }
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar8 = *(longlong *)(param_1 + 0xe0);
  if (lVar8 == 0) {
    iVar5 = 1;
    if ((*plVar1 != 0) && (lVar10 != 0)) {
      plVar2 = *(longlong **)(lVar10 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar4 != '\0') {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar7,plVar1);
          *(longlong *)(param_1 + 0xe0) = lVar8;
          if (lVar8 != 0) {
            lVar10 = *(longlong *)(param_1 + 0xd8);
            goto LAB_14005f766;
          }
          goto LAB_14005f77c;
        }
      }
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
  }
  else {
LAB_14005f766:
    if (lVar10 == 0) {
      uVar7 = FUN_140428d10(lVar8);
      lVar10 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0xd8) = lVar10;
      lVar8 = *(longlong *)(param_1 + 0xe0);
      if (((lVar8 == 0) && (lVar8 = 0, lVar10 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar10 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_14005fa39:
          lVar8 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x108))();
          if (cVar4 == '\0') goto LAB_14005fa39;
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar7,plVar1);
        }
        *(longlong *)(param_1 + 0xe0) = lVar8;
      }
    }
    iVar5 = FUN_14005fa3e(lVar8,param_2,param_3 & 0xffffffff);
  }
LAB_14005f77c:
  lVar10 = *(longlong *)(param_1 + 0x60);
  if (lVar10 == 0) {
    uVar7 = FUN_14042c486();
    lVar10 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x60) = lVar10;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar8 = *(longlong *)(param_1 + 0x68);
  if (lVar8 == 0) {
    if ((*plVar1 == 0) || (lVar10 == 0)) goto LAB_14005f7b3;
    plVar2 = *(longlong **)(lVar10 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,plVar1);
        *(longlong *)(param_1 + 0x68) = lVar8;
        if (lVar8 == 0) goto LAB_14005f7b3;
        lVar10 = *(longlong *)(param_1 + 0x60);
        goto LAB_14005f79a;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    goto LAB_14005f7b3;
  }
LAB_14005f79a:
  if (lVar10 == 0) {
    uVar7 = FUN_14042c486(lVar8);
    lVar10 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x60) = lVar10;
    lVar8 = *(longlong *)(param_1 + 0x68);
    if (((lVar8 == 0) && (lVar8 = 0, lVar10 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar10 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_14005fa32:
        lVar8 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x108))();
        if (cVar4 == '\0') goto LAB_14005fa32;
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,plVar1);
      }
      *(longlong *)(param_1 + 0x68) = lVar8;
    }
  }
  iVar6 = FUN_14005f6be(lVar8,param_2,param_3 & 0xffffffff);
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
LAB_14005f7b3:
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x382 + (param_3 & 0xff) * 2) * 0x50) +
           DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  FUN_1448729ea(lVar10,local_60,param_2);
  iVar6 = FUN_14005fbd2(local_60,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar9 = local_60;
    if (0x18 < local_48) {
      pppuVar9 = (undefined8 ***)local_60[0];
    }
    (*pcVar3)(pppuVar9);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005fa3e FUN_14005fa3e body=172 status=ok
// SIG undefined FUN_14005fa3e(void)

undefined4 FUN_14005fa3e(longlong param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    param_1 = param_1 + 0x18;
  }
  else {
    param_1 = param_1 + 0x68;
  }
  FUN_1448729ea(param_1,local_40,param_2);
  uVar2 = FUN_14005fbd2(local_40,1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005faec FUN_14005faec body=228 status=ok
// SIG undefined FUN_14005faec(void)

int FUN_14005faec(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar5 = (ulonglong)((uint)*(ushort *)(param_1 + 0x38 + (param_3 & 0xff) * 2) * 0x50) +
          DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  FUN_1448729ea(lVar5,local_50,param_2);
  iVar2 = FUN_14005fbd2(local_50,1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_50;
    if (0x18 < local_38) {
      pppuVar4 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005fbd2 FUN_14005fbd2 body=163 status=ok
// SIG undefined FUN_14005fbd2(void)

undefined4 FUN_14005fbd2(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x02') {
    param_2 = *param_1;
  }
  else {
    puVar2 = &local_40;
    FUN_1400b56fe(puVar2,param_1,2);
    if (local_20 != 0) {
      param_2 = local_40;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_28) {
        puVar2 = (undefined4 *)CONCAT44(uStack_3c,local_40);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(CONCAT44(uStack_3c,local_40));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14005fc76 FUN_14005fc76 body=756 status=ok
// SIG undefined FUN_14005fc76(void)

longlong FUN_14005fc76(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  ulonglong local_78;
  longlong local_70;
  uint *local_68;
  ulonglong local_60;
  int local_54 [2];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar15 = 0;
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1401533ba(local_54,param_2,1);
    puVar7 = *(uint **)(param_1 + 0x3f0);
    puVar1 = (uint *)(param_1 + 0x3b0);
    uVar3 = *(uint *)(param_1 + 0x3c8);
    uVar12 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      uVar17 = 1;
      uVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar8 = puVar1;
      }
      uVar4 = *puVar8;
      if (uVar4 == 0) {
        iVar9 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar9 = uVar3 - 1;
        }
        lVar13 = 0;
        uVar5 = iVar9 >> 5;
        if (iVar9 >> 5 < 1) {
          uVar5 = 0;
        }
        uVar15 = 0;
        iVar9 = 0;
        do {
          if (uVar5 == uVar15) goto LAB_14005ff34;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar8[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar15 = 0;
        iVar9 = 0;
      }
      uVar17 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar3;
      }
    }
    if ((int)uVar4 < (int)uVar3) {
      local_7c = local_4c;
      local_84 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        local_84 = uVar3 - 1;
      }
      local_84 = local_84 >> 5;
      uVar4 = 0xffffffff;
      do {
        local_80 = uVar4;
        local_88 = iVar9;
        local_60 = uVar15;
        local_78 = uVar12;
        local_70 = param_1;
        local_68 = puVar1;
        if (puVar7[1] != 0) {
          lVar10 = 0;
          do {
            lVar13 = *(longlong *)
                      ((ulonglong)*puVar7 * 8 + *(longlong *)(param_1 + 0x400) + lVar10 * 8);
            piVar11 = *(int **)(lVar13 + 8);
            if (piVar11 == (int *)0x0) {
              piVar11 = &DAT_14c9485f0;
            }
            piVar16 = &DAT_14c948620;
            piVar18 = (int *)&DAT_14c948618;
            if (*piVar11 != 0) {
              iVar9 = piVar11[1];
              piVar16 = &DAT_14c948620;
              piVar18 = (int *)&DAT_14c948618;
              if (iVar9 != 0) {
                piVar16 = &DAT_14c948620;
                piVar18 = (int *)&DAT_14c948618;
                if (*piVar11 != DAT_14c948000) {
                  if ((iVar9 < 2) && (piVar11[9] < 1)) {
                    piVar11 = piVar11 + 2;
                  }
                  else {
                    piVar11 = *(int **)(piVar11 + 6);
                  }
                  if (iVar9 == 1) {
                    piVar16 = piVar11 + 2;
                    piVar18 = piVar11;
                  }
                  else {
                    piVar16 = &DAT_14c948620;
                    piVar18 = (int *)&DAT_14c948618;
                    if (1 < iVar9) {
                      piVar16 = piVar11 + 5;
                      piVar18 = piVar11 + 3;
                    }
                  }
                }
              }
            }
            if ((*piVar18 == local_54[0]) && (*piVar16 == local_4c)) goto LAB_14005ff34;
            lVar10 = lVar10 + 1;
          } while (puVar7[1] != (uint)lVar10);
        }
        uVar4 = local_80 & ~(uint)uVar17;
        puVar8 = *(uint **)(param_1 + 0x3c0);
        if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
          puVar8 = puVar1;
        }
        iVar14 = (int)local_60;
        lVar13 = (longlong)iVar14;
        uVar5 = puVar8[lVar13] & uVar4;
        uVar15 = local_60;
        iVar9 = local_88;
        if (uVar5 == 0) {
          iVar6 = local_84;
          if (local_84 < iVar14) {
            iVar6 = iVar14;
          }
          if (local_84 <= iVar14) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar6 - lVar13 == lVar10) goto LAB_14005ff32;
          }
          uVar4 = 0xffffffff;
          uVar15 = (ulonglong)(iVar14 + (int)lVar10 + 1);
        }
        puVar7 = puVar7 + 2;
        uVar17 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
      } while ((int)((iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e) < (int)uVar3);
    }
  }
LAB_14005ff32:
  lVar13 = 0;
LAB_14005ff34:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar13;
}



// FUNCTION 14005ff6c FUN_14005ff6c body=1151 status=ok
// SIG undefined FUN_14005ff6c(void)

/* WARNING: Removing unreachable block (ram,0x000140060201) */

undefined4 FUN_14005ff6c(longlong param_1,char *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 ***local_f8 [3];
  ushort local_e0;
  byte local_d8;
  char local_d0 [8];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  char local_b0;
  undefined4 local_a8 [2];
  char local_a0 [8];
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  undefined6 uStack_56;
  byte local_50;
  undefined8 ***local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == '\0') {
    local_d0[0] = *param_2;
    if (local_d0[0] == '\x01') {
      local_d0[0] = '\x02';
      if (*(longlong *)(param_2 + 8) == 0) {
        local_c8._0_4_ = 0;
        iVar4 = 0;
        uVar2 = (uint)local_c8;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
        local_c8 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar4 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar8;
            iVar4 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_c8;
          if (bVar11) {
            iVar4 = iVar8;
          }
        }
      }
      local_c8._0_4_ = uVar2;
      local_c8 = CONCAT44(iVar4,(uint)local_c8);
    }
    else if (local_d0[0] == '\x02') {
      local_c8 = *(ulonglong *)(param_2 + 8);
    }
    else if (local_d0[0] == '\x03') {
      local_c8 = *(undefined8 *)(param_2 + 8);
      local_c0 = *(longlong **)(param_2 + 0x10);
      if (local_c0 == (longlong *)0x0) {
        local_b8 = *(undefined8 *)(param_2 + 0x18);
        local_b0 = param_2[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
        UNLOCK();
        local_b8 = *(undefined8 *)(param_2 + 0x18);
        local_b0 = param_2[0x20];
      }
    }
    local_a8[0] = 0;
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar7 = FUN_1448174c4(local_a8);
      FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
    }
    local_a0[0] = '\0';
    local_78[0] = 0;
    lVar10 = *(longlong *)(param_1 + 0xc0);
    if (lVar10 == 0) {
      local_f8[0] = *(undefined8 ****)(param_1 + 0xb0);
      FUN_1446dcdd4(local_70);
      lVar10 = FUN_1448fdc6e(local_70);
      if (CONCAT62(uStack_56,local_58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xc0) = lVar10;
    }
    FUN_1400606f6(local_70,lVar10,local_d0);
    ppppuVar6 = (undefined8 ****)local_40;
    if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
      ppppuVar6 = local_70;
    }
    ppppuVar9 = (undefined8 ****)&DAT_14c9a40e0;
    if (0 < local_38) {
      ppppuVar9 = ppppuVar6;
    }
    FUN_1400603ec(local_f8,lVar10,ppppuVar9);
    ppppuVar6 = (undefined8 ****)local_40;
    if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
      ppppuVar6 = local_70;
    }
    FUN_1446fdf58(ppppuVar6,local_38);
    if ((undefined8 ****)local_40 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    uVar5 = FUN_14005fbd2(local_f8,0);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar6 = local_f8;
      if (0x18 < local_e0) {
        ppppuVar6 = (undefined8 ****)local_f8[0];
      }
      (*pcVar3)(ppppuVar6);
    }
    if (0x18 < local_e0) {
      FUN_1400020a8(local_f8[0]);
    }
    FUN_1448173f8(local_78);
    if (local_a0[0] != '\0') {
      if (local_a0[0] == '\x01') {
        local_98 = 0;
      }
      else if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      local_a0[0] = '\0';
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
  }
  else {
    local_d0[0] = '\0';
    FUN_1447f8f6a(local_d0,param_2);
    FUN_1447f8ea6(local_a8,param_2 + 0x28);
    local_a0[0] = '\0';
    local_78[0] = 0;
    uVar7 = FUN_144873cc0(param_1 + 200);
    FUN_144750e81(local_70,uVar7,local_d0);
    uVar5 = FUN_14005fbd2(local_70,0);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar6 = local_70;
      if (0x18 < local_58) {
        ppppuVar6 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar6);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_144a5ac3a(local_a0);
    FUN_144a5ac3a(local_d0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400603ec FUN_1400603ec body=777 status=ok
// SIG undefined FUN_1400603ec(void)

longlong * FUN_1400603ec(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  int iVar10;
  undefined8 ***pppuVar11;
  undefined1 auStack_98 [40];
  undefined8 **local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_2 + 0x30);
    plVar8 = *(longlong **)(param_2 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    if (plVar3 != (longlong *)0x0) {
      *(undefined2 *)(param_1 + 3) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea0);
      if (0 < (longlong)iVar10) {
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar5 = *(longlong *)(lVar7 + 0xe98);
        if (lVar5 == 0) {
          lVar5 = lVar7 + 0xe58;
        }
        lVar7 = 0;
        do {
          if (*(longlong *)(lVar5 + lVar7) == param_2) {
            cVar4 = FUN_140308e2a(*(undefined8 *)(lVar5 + 8 + lVar7),param_3);
            if (cVar4 != '\0') goto LAB_140060693;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar10 * 0x10 != lVar7);
        iVar10 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea0
                         );
      }
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      *(uint *)(lVar7 + 0xea0) = iVar10 + 1U;
      if (*(uint *)(lVar7 + 0xea4) < iVar10 + 1U) {
        FUN_142b3d654(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                      + 0xe58,iVar10);
      }
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar5 = *(longlong *)(lVar7 + 0xe98);
      if (lVar5 == 0) {
        lVar5 = lVar7 + 0xe58;
      }
      *(longlong *)(lVar5 + (longlong)iVar10 * 0x10) = param_2;
      *(undefined8 *)(lVar5 + 8 + (longlong)iVar10 * 0x10) = param_3;
      (**(code **)(*plVar3 + 0x48))(plVar3,local_70,param_2,param_3);
      if (DAT_14c9a85d0 != (code *)0x0) {
        (*DAT_14c9a85d0)(param_1);
        if (0x18 < *(ushort *)(param_1 + 3)) {
          FUN_1400020a8(*param_1);
        }
      }
      *(ushort *)(param_1 + 3) = local_58;
      if (local_58 < 0x19) {
        uVar6 = (ulonglong)((uint)local_50 * 0x120);
        pcVar9 = *(code **)((longlong)&DAT_14c9a85b8 + uVar6);
        if ((pcVar9 == (code *)0x0) &&
           (pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + uVar6), pcVar9 == (code *)0x0)) {
          memcpy(param_1,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
        }
        else {
          (*pcVar9)(param_1,local_70);
        }
      }
      else {
        *param_1 = (longlong)local_70[0];
        local_70[0] = (undefined8 ***)0x0;
        local_58 = 0;
      }
      *(byte *)(param_1 + 4) = local_50;
      local_50 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        pppuVar11 = local_70;
        if (0x18 < local_58) {
          pppuVar11 = (undefined8 ***)local_70[0];
        }
        (*DAT_14c9a85d0)(pppuVar11);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      piVar2 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea0);
      *piVar2 = *piVar2 + -1;
      goto LAB_140060693;
    }
  }
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
LAB_140060693:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400606f6 FUN_1400606f6 body=1968 status=ok
// SIG undefined FUN_1400606f6(void)

undefined4 * FUN_1400606f6(undefined4 *param_1,longlong param_2,char *param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0x100000000;
  if (param_2 == 0) goto LAB_140060d1b;
  lVar14 = *(longlong *)(param_2 + 0x18);
  plVar5 = *(longlong **)(param_2 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  cVar3 = param_3[0x30];
  if (lVar14 != 0) {
    if (cVar3 == '\x01') {
      if (*(longlong *)(param_3 + 0x38) != 0) goto LAB_140060881;
    }
    else if (cVar3 == '\x02') {
      if (((((*(int *)(param_3 + 0x3c) != 0) && (uVar4 = *(uint *)(param_3 + 0x38), -1 < (int)uVar4)
            ) && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 != 0 &&
           (*(int *)(lVar11 + 0x10) == *(int *)(param_3 + 0x3c))))) &&
         ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) goto LAB_140060881;
    }
    else if (((cVar3 == '\x03') && (*(longlong *)(param_3 + 0x38) != 0)) &&
            ((*(longlong *)(param_3 + 0x40) != 0 &&
             (0 < *(int *)(*(longlong *)(param_3 + 0x40) + 8))))) {
LAB_140060881:
      FUN_144725ada(lVar14,&local_88,param_2,param_3 + 0x30);
      if (&local_88 == param_1) {
        uVar12 = local_50 & 0xffffffff;
      }
      else {
        puVar10 = *(undefined4 **)(param_1 + 0xc);
        if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
          puVar10 = param_1;
        }
        FUN_1446fdf58(puVar10,param_1[0xe]);
        if (local_58 == (undefined4 *)0x0) {
          *(undefined8 *)(param_1 + 8) = local_68;
          *(undefined8 *)(param_1 + 10) = uStack_60;
          *(undefined8 *)(param_1 + 4) = local_78;
          *(undefined8 *)(param_1 + 6) = uStack_70;
          *param_1 = local_88;
          param_1[1] = uStack_84;
          param_1[2] = uStack_80;
          param_1[3] = uStack_7c;
        }
        if (*(longlong *)(param_1 + 0xc) != 0) {
          FUN_1400020a8();
        }
        *(undefined4 **)(param_1 + 0xc) = local_58;
        local_58 = (undefined4 *)0x0;
        param_1[0xe] = (undefined4)local_50;
        param_1[0xf] = local_50._4_4_;
        local_50 = 0x100000000;
        uVar12 = 0;
      }
      puVar10 = &local_88;
      if (local_58 != (undefined4 *)0x0) {
        puVar10 = local_58;
      }
      FUN_1446fdf58(puVar10,uVar12);
      if (local_58 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (param_1[0xe] == 0) {
      FUN_144725ada(lVar14,&local_88,param_2,param_3);
      if (&local_88 == param_1) {
        uVar12 = local_50 & 0xffffffff;
      }
      else {
        puVar10 = *(undefined4 **)(param_1 + 0xc);
        if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
          puVar10 = param_1;
        }
        FUN_1446fdf58(puVar10,param_1[0xe]);
        if (local_58 == (undefined4 *)0x0) {
          *(undefined8 *)(param_1 + 8) = local_68;
          *(undefined8 *)(param_1 + 10) = uStack_60;
          *(undefined8 *)(param_1 + 4) = local_78;
          *(undefined8 *)(param_1 + 6) = uStack_70;
          *param_1 = local_88;
          param_1[1] = uStack_84;
          param_1[2] = uStack_80;
          param_1[3] = uStack_7c;
        }
        if (*(longlong *)(param_1 + 0xc) != 0) {
          FUN_1400020a8();
        }
        *(undefined4 **)(param_1 + 0xc) = local_58;
        local_58 = (undefined4 *)0x0;
        param_1[0xe] = (undefined4)local_50;
        param_1[0xf] = local_50._4_4_;
        local_50 = 0x100000000;
        uVar12 = 0;
      }
      puVar10 = &local_88;
      if (local_58 != (undefined4 *)0x0) {
        puVar10 = local_58;
      }
      FUN_1446fdf58(puVar10,uVar12);
      if (local_58 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_140060cf9;
  }
  if (cVar3 == '\x01') {
    if (*(longlong *)(param_3 + 0x38) == 0) goto LAB_1400607d9;
LAB_1400609e8:
    iVar7 = param_1[0xe];
    lVar14 = (longlong)iVar7;
    param_1[0xe] = iVar7 + 1U;
    if ((uint)param_1[0xf] < iVar7 + 1U) {
      FUN_1400832a0(param_1,iVar7);
    }
    puVar10 = *(undefined4 **)(param_1 + 0xc);
    if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
      puVar10 = param_1;
    }
    pcVar2 = (char *)(puVar10 + lVar14 * 0xc);
    *(undefined1 *)(puVar10 + lVar14 * 0xc) = 0;
    cVar3 = param_3[0x30];
    *(char *)(puVar10 + lVar14 * 0xc) = cVar3;
    if (cVar3 == '\x01') {
      plVar8 = (longlong *)(param_3 + 0x38);
LAB_140060a33:
      lVar14 = *plVar8;
      *pcVar2 = '\x02';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      if (lVar14 == 0) {
        iVar7 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar14 + 0xc);
        *(uint *)(pcVar2 + 8) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar7 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar7 = *(int *)(lVar14 + 0x10);
          bVar15 = iVar7 == 0;
          if (bVar15) {
            *(int *)(lVar14 + 0x10) = iVar13;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar15) {
            iVar7 = iVar13;
          }
        }
      }
      *(int *)(pcVar2 + 0xc) = iVar7;
    }
    else if (cVar3 == '\x02') {
      *(undefined8 *)(pcVar2 + 8) = *(undefined8 *)(param_3 + 0x38);
    }
    else if (cVar3 == '\x03') {
      *(undefined8 *)(pcVar2 + 8) = *(undefined8 *)(param_3 + 0x38);
      lVar14 = *(longlong *)(param_3 + 0x40);
      *(longlong *)(pcVar2 + 0x10) = lVar14;
      if (lVar14 == 0) {
        *(undefined8 *)(pcVar2 + 0x18) = *(undefined8 *)(param_3 + 0x48);
        pcVar2[0x20] = param_3[0x50];
      }
      else {
        LOCK();
        *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
        UNLOCK();
        *(undefined8 *)(pcVar2 + 0x18) = *(undefined8 *)(param_3 + 0x48);
        pcVar2[0x20] = param_3[0x50];
        if (*pcVar2 == '\x01') {
          plVar8 = (longlong *)(pcVar2 + 8);
          goto LAB_140060a33;
        }
      }
    }
    pcVar2[0x28] = '\0';
    pcVar2[0x29] = '\0';
    pcVar2[0x2a] = '\0';
    pcVar2[0x2b] = '\0';
    if (*(int *)(param_3 + 0x58) == 0) goto LAB_140060cf9;
    uVar9 = FUN_1448174c4(pcVar2 + 0x28);
    iVar7 = *(int *)(param_3 + 0x58);
LAB_140060d64:
    FUN_1400e08b0(uVar9,DAT_14c9a3da0 + (longlong)iVar7 * 0x10 + -0x10);
  }
  else if (cVar3 == '\x02') {
    if ((((*(int *)(param_3 + 0x3c) == 0) || (uVar4 = *(uint *)(param_3 + 0x38), (int)uVar4 < 0)) ||
        (DAT_14c9647dc <= (int)uVar4)) ||
       (((lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar14 == 0 ||
         (*(int *)(lVar14 + 0x10) != *(int *)(param_3 + 0x3c))) ||
        ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))) goto LAB_1400607d9;
    if ((*(uint *)(lVar14 + 8) & 0x10200000) == 0) goto LAB_1400609e8;
  }
  else if (((cVar3 == '\x03') && (*(longlong *)(param_3 + 0x38) != 0)) &&
          ((lVar14 = *(longlong *)(param_3 + 0x40), lVar14 != 0 && (0 < *(int *)(lVar14 + 8))))) {
    if (0 < *(int *)(lVar14 + 8)) goto LAB_1400609e8;
  }
  else {
LAB_1400607d9:
    cVar3 = *param_3;
    if (cVar3 == '\x01') {
      if (*(longlong *)(param_3 + 8) != 0) goto LAB_140060b59;
    }
    else if (cVar3 == '\x02') {
      if (((((*(int *)(param_3 + 0xc) != 0) && (uVar4 = *(uint *)(param_3 + 8), -1 < (int)uVar4)) &&
           ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar14 != 0 &&
           (*(int *)(lVar14 + 0x10) == *(int *)(param_3 + 0xc))))) &&
         ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)) goto LAB_140060b59;
    }
    else if (((cVar3 == '\x03') && (*(longlong *)(param_3 + 8) != 0)) &&
            ((*(longlong *)(param_3 + 0x10) != 0 &&
             (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8))))) {
LAB_140060b59:
      iVar7 = param_1[0xe];
      lVar14 = (longlong)iVar7;
      param_1[0xe] = iVar7 + 1U;
      if ((uint)param_1[0xf] < iVar7 + 1U) {
        FUN_1400832a0(param_1,iVar7);
      }
      puVar10 = *(undefined4 **)(param_1 + 0xc);
      if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
        puVar10 = param_1;
      }
      pcVar2 = (char *)(puVar10 + lVar14 * 0xc);
      *(undefined1 *)(puVar10 + lVar14 * 0xc) = 0;
      cVar3 = *param_3;
      *(char *)(puVar10 + lVar14 * 0xc) = cVar3;
      pcVar6 = param_3;
      if (cVar3 == '\x01') {
LAB_140060b9e:
        lVar14 = *(longlong *)(pcVar6 + 8);
        *pcVar2 = '\x02';
        pcVar2[8] = '\0';
        pcVar2[9] = '\0';
        pcVar2[10] = '\0';
        pcVar2[0xb] = '\0';
        pcVar2[0xc] = '\0';
        pcVar2[0xd] = '\0';
        pcVar2[0xe] = '\0';
        pcVar2[0xf] = '\0';
        if (lVar14 == 0) {
          iVar7 = 0;
        }
        else {
          uVar4 = *(uint *)(lVar14 + 0xc);
          *(uint *)(pcVar2 + 8) = uVar4;
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar7 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar13 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar13);
            }
            LOCK();
            iVar7 = *(int *)(lVar14 + 0x10);
            bVar15 = iVar7 == 0;
            if (bVar15) {
              *(int *)(lVar14 + 0x10) = iVar13;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar7 = iVar13;
            }
          }
        }
        *(int *)(pcVar2 + 0xc) = iVar7;
      }
      else if (cVar3 == '\x02') {
        *(undefined8 *)(pcVar2 + 8) = *(undefined8 *)(param_3 + 8);
      }
      else if (cVar3 == '\x03') {
        *(undefined8 *)(pcVar2 + 8) = *(undefined8 *)(param_3 + 8);
        lVar14 = *(longlong *)(param_3 + 0x10);
        *(longlong *)(pcVar2 + 0x10) = lVar14;
        if (lVar14 == 0) {
          *(undefined8 *)(pcVar2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
          pcVar2[0x20] = param_3[0x20];
        }
        else {
          LOCK();
          *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
          UNLOCK();
          *(undefined8 *)(pcVar2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
          pcVar2[0x20] = param_3[0x20];
          pcVar6 = pcVar2;
          if (*pcVar2 == '\x01') goto LAB_140060b9e;
        }
      }
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      if (*(int *)(param_3 + 0x28) != 0) {
        uVar9 = FUN_1448174c4(pcVar2 + 0x28);
        iVar7 = *(int *)(param_3 + 0x28);
        goto LAB_140060d64;
      }
    }
  }
LAB_140060cf9:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_140060d1b:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140060ea8 FUN_140060ea8 body=193 status=ok
// SIG undefined FUN_140060ea8(void)

void FUN_140060ea8(longlong param_1)

{
  FUN_140060f6a(param_1 + 0xb0);
  *(undefined2 **)(param_1 + 0x90) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_140115c12(param_1 + 0xa0,0);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x70) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_140115c12(param_1 + 0x80,0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140060f6a FUN_140060f6a body=52 status=ok
// SIG undefined FUN_140060f6a(void)

void FUN_140060f6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_140060f9e(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140060f9e FUN_140060f9e body=209 status=ok
// SIG undefined FUN_140060f9e(void)

void FUN_140060f9e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0xd8) = 0;
        if (*(longlong *)(lVar1 + 0xd0) != 0) {
          FUN_1400020a8();
        }
        FUN_140485a1a(lVar1 + 0x90);
        *(undefined4 *)(lVar1 + 0x88) = 0;
        if (*(longlong *)(lVar1 + 0x80) != 0) {
          FUN_1400020a8();
        }
        FUN_140485a1a(lVar1 + 0x40);
        *(undefined2 **)(lVar1 + 0x20) = &DAT_14a171d50;
        *(undefined4 *)(lVar1 + 0x38) = 0;
        if (*(int *)(lVar1 + 0x3c) != 0) {
          FUN_140115c12(lVar1 + 0x30,0);
        }
        *(undefined8 *)(lVar1 + 0x28) = 0;
        if (*(longlong *)(lVar1 + 0x30) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140061070 FUN_140061070 body=84 status=ok
// SIG undefined FUN_140061070(void)

longlong FUN_140061070(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x3b0))();
  lVar3 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 8))) {
    (**(code **)(*param_1 + 0x3b0))(param_1);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x3b0))(param_1);
    lVar3 = *plVar2 + (ulonglong)param_2 * 0x28 + 0x10;
  }
  return lVar3;
}



// FUNCTION 1400610c4 FUN_1400610c4 body=469 status=ok
// SIG undefined FUN_1400610c4(void)

void FUN_1400610c4(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400611f4:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140061231:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14006112e;
LAB_140061123:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14006112e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014006115b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400611b1:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140061231;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400611f4;
code_r0x00014006115b:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400611b1;
    }
  }
  goto LAB_140061123;
}



// FUNCTION 14006129a FUN_14006129a body=39 status=ok
// SIG undefined FUN_14006129a(void)

byte FUN_14006129a(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x208))();
  bVar2 = 1;
  if (cVar1 != '\0') {
    bVar2 = *(byte *)(param_1 + 6) >> 7;
  }
  return bVar2;
}



// FUNCTION 1400612d4 FUN_1400612d4 body=324 status=ok
// SIG undefined FUN_1400612d4(void)

void FUN_1400612d4(longlong param_1,float param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  byte bVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x168);
  if ((char)param_3 == '\0') {
    *(float *)((longlong)plVar4 + 0xc) = param_2;
  }
  else {
    if ((((0.5 < param_2 - *(float *)(plVar4 + 2)) && (param_1 != 0)) && (DAT_14ca19690 != '\0')) &&
       ((bVar5 = *(byte *)(param_1 + 0x172), (bVar5 & 4) != 0 && (*(int *)(param_1 + 0x78) != 0))))
    {
      puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar3 = 0;
      puVar3[1] = param_1;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        UNLOCK();
        LOCK();
        *DAT_14ca196a0 = puVar3;
        DAT_14ca196a0 = puVar3;
        UNLOCK();
        bVar5 = *(byte *)(param_1 + 0x172);
      }
      *(byte *)(param_1 + 0x172) = bVar5 | 0x10;
      plVar4 = *(longlong **)(param_1 + 0x168);
    }
    *(float *)((longlong)plVar4 + 0xc) = param_2;
    *(float *)(plVar4 + 2) = param_2;
  }
  if ((float *)plVar4[4] != (float *)0x0) {
    *(float *)plVar4[4] = param_2;
  }
  plVar4 = (longlong *)*plVar4;
  if ((plVar4 != (longlong *)0x0) &&
     (pcVar1 = *(code **)(*plVar4 + 0x238), pcVar1 != (code *)&DAT_144b0d2b2)) {
    if (pcVar1 == (code *)&LAB_144b2959a) {
      lVar2 = plVar4[0x54];
      if ((lVar2 != 0) &&
         ((plVar4 = (longlong *)plVar4[0x42], *(char *)(lVar2 + 0x138) != '\x01' ||
          ((char)param_3 != '\0')))) {
        LOCK();
        bVar5 = **(byte **)(lVar2 + 0x130);
        **(byte **)(lVar2 + 0x130) = 0;
        UNLOCK();
        if ((bVar5 & 1) != 0) {
          (**(code **)(*plVar4 + 0x510))(plVar4,lVar2 + 0x13c);
        }
      }
    }
    else {
      (*pcVar1)(plVar4,param_3);
    }
  }
  FUN_143659d32(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 140061418 FUN_140061418 body=539 status=ok
// SIG undefined FUN_140061418(void)

void FUN_140061418(longlong param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  
  param_2[1] = 0;
  param_2[2] = 0;
  bVar1 = *(byte *)(param_1 + 0x77);
  cVar5 = FUN_14480c900(0,param_3);
  uVar16 = 0;
  uVar8 = 0;
  if (cVar5 != '\0') {
    uVar8 = *(uint *)(*(longlong *)(param_3 + 8) + 0x58) >> 2 & 4;
  }
  if (DAT_14c761ae8 - 1U < 3) {
    uVar16 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  bVar2 = *(byte *)(param_1 + 0x6e);
  cVar5 = *(char *)(param_1 + 0x82);
  bVar3 = *(byte *)(param_1 + 0x72);
  if (((((DAT_14c760e18 != '\x01') || ((*(byte *)(param_1 + 0x6d) & 0x40) == 0)) ||
       (uVar12 = 2, (*(byte *)(param_1 + 0x6f) & 0x40) != 0)) &&
      ((uVar12 = 2, (*(byte *)(param_1 + 0x6c) & 0x20) == 0 &&
       ((*(byte *)(param_1 + 0x77) & 0x40) == 0)))) && (*(longlong *)(param_1 + 0x220) == 0)) {
    uVar12 = 2 - (*(longlong *)(param_1 + 0x228) == 0);
  }
  cVar6 = FUN_144914152(param_1,param_3);
  uVar9 = 0;
  uVar13 = 0;
  if (cVar6 != '\0') {
    uVar13 = ~(uint)*(byte *)(param_1 + 0x88f) >> 3 & 8;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x888);
  *param_2 = uVar4;
  uVar11 = (bVar2 & 8) << 4;
  if ((uVar4 >> 0x3e & 1) != 0) {
    uVar11 = 0;
  }
  uVar15 = uVar4 >> 0x20;
  bVar14 = (byte)(uVar4 >> 0x20);
  if ((uVar15 & 4) != 0) {
    uVar9 = (uint)(*(longlong *)(param_1 + 0x220) != 0) << 0x11;
  }
  if (((uVar4 >> 0x28 & 2) != 0) || (uVar10 = 0, (uVar4 >> 0x28 & 1) != 0 || 0x3f < bVar14)) {
    uVar10 = (uint)(*(longlong *)(param_1 + 0x220) != 0) << 0x12;
  }
  bVar7 = 4;
  if ((uVar15 & 4) == 0) {
    bVar7 = (*(longlong *)(param_1 + 0x220) != 0) << 2;
  }
  uVar10 = uVar11 | uVar13 |
           (bVar3 & 1) << 0xe | (uint)(cVar5 != '\x01') << 0xd | uVar12 |
           (uint)((bVar2 & 0xc) != 0) << 6 | uVar16 + (uVar8 | (bVar1 & 0x40) << 10) | uVar9 |
           uVar10;
  *(byte *)((longlong)param_2 + 4) = bVar14 & 0xfb | bVar7;
  *(bool *)(param_2 + 1) = *(longlong *)(param_1 + 0x228) != 0;
  if ((*(longlong *)(param_1 + 0x220) != 0) || (*(longlong *)(param_1 + 0x228) != 0)) {
    uVar10 = uVar10 | 2;
  }
  if (((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) {
    uVar8 = 0;
    if ((uVar15 & 2) == 0) goto LAB_14006161a;
  }
  else {
    uVar8 = 0;
    if (((uVar15 & 2) == 0) || (uVar8 = 0, (*(byte *)(param_1 + 0x75) & 200) == 0))
    goto LAB_14006161a;
  }
  uVar8 = uVar10 >> 3 & 0x10;
LAB_14006161a:
  *(uint *)(param_2 + 2) = uVar10 & 0xffffffef | uVar8;
  return;
}



// FUNCTION 140061634 FUN_140061634 body=387 status=ok
// SIG undefined FUN_140061634(void)

undefined8 * FUN_140061634(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  cVar3 = FUN_14480c900(0,param_3);
  uVar5 = 0;
  uVar7 = 0;
  if (cVar3 != '\0') {
    uVar7 = *(uint *)(*(longlong *)(param_3 + 8) + 0x58) >> 3 & 4;
  }
  bVar1 = *(byte *)(param_1 + 0x6e);
  if (DAT_14c761ae8 - 1U < 3) {
    uVar5 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  uVar6 = (uint)(*(char *)(param_1 + 0x82) != '\x01') << 0xd;
  bVar2 = *(byte *)(param_1 + 0x72);
  if ((longlong)*(int *)(param_1 + 0x5b0) != 0) {
    *param_2 = *(undefined8 *)
                (*(longlong *)(param_1 + 0x5a8) + -0x10 + (longlong)*(int *)(param_1 + 0x5b0) * 0x10
                );
  }
  uVar9 = *(uint *)(*(longlong *)(param_3 + 8) + 0x54);
  uVar8 = 2;
  if (((((uVar9 & 4) != 0) && ((short)uVar9 < 0)) &&
      ((*(uint *)(*(longlong *)(param_3 + 8) + 0x50) & 0x3000) == 0x3000)) &&
     ((DAT_14caa7119 == '\0' && ((*(byte *)(param_1 + 0x6c) & 6) == 0)))) {
    if (*(longlong *)(param_3 + 0x23e0) != 0) {
      iVar4 = FUN_140041f70(param_3,*(undefined4 *)(param_1 + 0x2b0));
      if (-1 < iVar4) goto LAB_1400616f0;
    }
    uVar8 = 1;
  }
LAB_1400616f0:
  uVar9 = 0;
  if (0 < DAT_14c760f04) {
    cVar3 = FUN_144914152(param_1,param_3);
    if (cVar3 != '\0') {
      uVar9 = *(uint *)(*(longlong *)(param_3 + 8) + 0x58) >> 2 & 8;
    }
  }
  *(uint *)(param_2 + 2) =
       uVar8 | (bVar2 & 1) << 0xe | uVar6 | (bVar1 & 8) << 4 | uVar7 | uVar5 | uVar9;
  if (((*(char *)(param_1 + 0x3e0) == '\x01') &&
      ((*(byte *)(*(longlong *)(param_3 + 8) + 0x62) & 0x40) != 0)) &&
     (*(longlong *)(param_3 + 0x23e0) == 0)) {
    *(uint *)(param_2 + 2) = uVar8 | uVar6 | uVar7;
  }
  return param_2;
}



// FUNCTION 1400617b8 FUN_1400617b8 body=145 status=ok
// SIG undefined FUN_1400617b8(void)

void FUN_1400617b8(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x100;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e10];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x100,8);
  }
  uVar2 = 0x7fffffff;
  if (0xf < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14006184a FUN_14006184a body=113 status=ok
// SIG undefined FUN_14006184a(void)

void FUN_14006184a(byte *param_1,int param_2,short param_3,longlong param_4)

{
  int iVar1;
  
  if (param_2 < 2) {
    *(short *)(param_1 + (longlong)param_2 * 2 + 4) = param_3 + 1;
  }
  else {
    if (param_2 == 2) {
      FUN_1400618bc(param_1,param_4);
    }
    iVar1 = *(int *)(param_4 + 0x18);
    *(uint *)(param_4 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x1c) < iVar1 + 1U) {
      FUN_14488eebe((longlong *)(param_4 + 0x10),iVar1);
    }
    *(short *)(*(longlong *)(param_4 + 0x10) + (longlong)iVar1 * 2) = param_3;
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  *param_1 = *param_1 | 2;
  return;
}



// FUNCTION 1400618bc FUN_1400618bc body=325 status=ok
// SIG undefined FUN_1400618bc(void)

void FUN_1400618bc(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_1 & 3) == 1) {
    uVar3 = param_1[1];
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_14488eebe(param_2,iVar4);
    }
    *(short *)(*param_2 + (longlong)iVar4 * 2) = (short)uVar3 + -1;
    sVar2 = *(short *)((longlong)param_1 + 6);
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_14488eebe(param_2,iVar4);
    }
    *(short *)(*param_2 + (longlong)iVar4 * 2) = sVar2 + -1;
    param_1[1] = 2;
  }
  else if ((*param_1 & 1) == 0) {
    plVar1 = param_2 + 2;
    uVar3 = param_1[1];
    iVar4 = (int)param_2[3];
    *(uint *)(param_2 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0x1c) < iVar4 + 1U) {
      FUN_14488eebe(plVar1,iVar4);
    }
    *(short *)(param_2[2] + (longlong)iVar4 * 2) = (short)uVar3 + -1;
    sVar2 = *(short *)((longlong)param_1 + 6);
    iVar4 = (int)param_2[3];
    *(uint *)(param_2 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0x1c) < iVar4 + 1U) {
      FUN_14488eebe(plVar1,iVar4);
    }
    *(short *)(*plVar1 + (longlong)iVar4 * 2) = sVar2 + -1;
    param_1[1] = 0x20000;
  }
  else {
    uVar3 = param_1[1];
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_14488eebe(param_2,iVar4);
    }
    *(short *)(*param_2 + (longlong)iVar4 * 2) = (short)uVar3 + -1;
    sVar2 = *(short *)((longlong)param_1 + 6);
    iVar4 = (int)param_2[3];
    *(uint *)(param_2 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0x1c) < iVar4 + 1U) {
      FUN_14488eebe(param_2 + 2,iVar4);
    }
    *(short *)(param_2[2] + (longlong)iVar4 * 2) = sVar2 + -1;
    param_1[1] = 0x10001;
  }
  *(byte *)param_1 = (byte)*param_1 | 4;
  return;
}



// FUNCTION 140061a02 FUN_140061a02 body=370 status=ok
// SIG undefined FUN_140061a02(void)

void FUN_140061a02(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140061a8b;
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
LAB_140061a8b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 140061b74 FUN_140061b74 body=269 status=ok
// SIG undefined FUN_140061b74(void)

void FUN_140061b74(longlong param_1,int param_2)

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



// FUNCTION 140061c82 FUN_140061c82 body=282 status=ok
// SIG undefined FUN_140061c82(void)

undefined8 * FUN_140061c82(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  if (param_1 == param_2) {
    FUN_140061d9c(param_1 + 4,param_2 + 4);
  }
  else {
    FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145741460(param_1,iVar1);
      FUN_1457414c2(*param_1,uVar2,iVar1);
    }
    FUN_144716758(param_1[2],*(undefined4 *)(param_1 + 3));
    iVar1 = *(int *)(param_2 + 3);
    uVar2 = param_2[2];
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1474d487e(param_1 + 2,iVar1);
      FUN_1474d48e0(param_1[2],uVar2,iVar1);
    }
    FUN_140061d9c(param_1 + 4,param_2 + 4);
    iVar1 = *(int *)(param_2 + 7);
    _Src = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1474d4b9c(param_1 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140061d9c FUN_140061d9c body=93 status=ok
// SIG undefined FUN_140061d9c(void)

undefined8 * FUN_140061d9c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144723c10(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474d49f6(param_1,iVar1);
      FUN_1474d4a58(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140061dfa FUN_140061dfa body=173 status=ok
// SIG undefined FUN_140061dfa(void)

void FUN_140061dfa(longlong param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x7e1) & 1) != 0) &&
     (*(longlong **)(param_1 + 0x170) != (longlong *)0x0)) {
    *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + 1;
    sVar2 = (short)*(undefined4 *)(param_1 + 0x5d8);
    sVar3 = sVar2 + 1;
    *(short *)(param_1 + 0x5d8) = sVar3;
    *(undefined8 *)(param_1 + 0x5d0) = DAT_14c872be0;
    if (sVar3 == -1) {
      *(short *)(param_1 + 0x5d8) = sVar2 + 2;
    }
    local_28 = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_30 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))();
    piVar1 = (int *)(param_1 + 0x6b4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(byte *)(param_1 + 0x7e1) = *(byte *)(param_1 + 0x7e1) & 0xfe;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140061ea8 FUN_140061ea8 body=130 status=ok
// SIG undefined FUN_140061ea8(void)

void FUN_140061ea8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_140061f2a(param_1 + 0x20,0);
  uVar1 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar2 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x15555555);
  uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
  FUN_140061f70(param_1 + 0x20,
                ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  return;
}



// FUNCTION 140061f2a FUN_140061f2a body=69 status=ok
// SIG undefined FUN_140061f2a(void)

void FUN_140061f2a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar1 = param_1;
    }
    FUN_14476c499(lVar1,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  FUN_147379b1a(param_1);
  return;
}



// FUNCTION 140061f70 FUN_140061f70 body=75 status=ok
// SIG undefined FUN_140061f70(void)

int FUN_140061f70(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < param_2) {
    FUN_147379bc6(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  FUN_140061fbb(lVar2 + (longlong)iVar1 * 8,param_2);
  return iVar1;
}



// FUNCTION 140061fbb FUN_140061fbb body=19 status=ok
// SIG undefined FUN_140061fbb(void)

void FUN_140061fbb(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140061fce FUN_140061fce body=55 status=ok
// SIG undefined FUN_140061fce(void)

void FUN_140061fce(longlong *param_1)

{
  FUN_1447564ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140062006 FUN_140062006 body=1972 status=ok
// SIG undefined FUN_140062006(void)

undefined8 FUN_140062006(longlong param_1,double *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  char cVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  double *pdVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 *puStack_260;
  double *local_258;
  longlong local_250;
  double *local_248;
  longlong local_240;
  double local_238 [13];
  undefined1 local_1d0 [56];
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  dVar6 = *param_2;
  uVar16 = CONCAT71((int7)(local_f0 >> 8),1);
  if ((dVar6 != 0.0) && (*(int *)((longlong)dVar6 + 0x58) == *(int *)(param_2 + 2))) {
    iVar4 = *(int *)((longlong)dVar6 + 0x88);
    dStack_140 = (double)*(float *)((longlong)dVar6 + 0x4c);
    local_148 = (double)*(float *)((longlong)dVar6 + 0x48);
    local_158._8_4_ = SUB84((double)*(float *)((longlong)dVar6 + 0x44),0);
    local_158._0_8_ = (double)*(float *)((longlong)dVar6 + 0x40);
    local_158._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar6 + 0x44) >> 0x20);
    local_138 = *(undefined8 *)((longlong)dVar6 + 0x20);
    uStack_130 = *(undefined8 *)((longlong)dVar6 + 0x28);
    local_128 = *(undefined8 *)((longlong)dVar6 + 0x30);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    lVar22 = *(longlong *)(param_1 + 0x90);
    if (lVar22 == 0) {
      dVar26 = *(double *)(param_1 + 0x38);
      dVar27 = *(double *)(param_1 + 0x40);
      dVar23 = *(double *)(param_1 + 0x48);
      dVar7 = -dVar23;
      dVar3 = -dVar27;
      dVar2 = -dVar26;
    }
    else {
      dVar10 = *(double *)(param_1 + 0xa0);
      dVar11 = *(double *)(param_1 + 0xa8);
      dVar12 = *(double *)(param_1 + 0xb0);
      dVar27 = *(double *)(lVar22 + 0x20);
      dVar13 = *(double *)(lVar22 + 0x28);
      dVar2 = *(double *)(param_1 + 0xb8);
      dVar3 = *(double *)(param_1 + 0xb8);
      dVar23 = dVar13 * dVar10 - dVar11 * dVar27;
      dVar24 = *(double *)(lVar22 + 0x30) * dVar11 - dVar12 * dVar13;
      dVar25 = dVar27 * dVar12 - *(double *)(lVar22 + 0x30) * dVar10;
      dVar24 = dVar24 + dVar24;
      dVar25 = dVar25 + dVar25;
      dVar23 = dVar23 + dVar23;
      dVar26 = *(double *)(lVar22 + 0x50);
      dVar7 = *(double *)(lVar22 + 0x48) * dVar26 + *(double *)(lVar22 + 0x30);
      dVar30 = *(double *)(lVar22 + 0x40) * dVar26 + *(double *)(lVar22 + 0x28);
      dVar29 = dVar26 * *(double *)(lVar22 + 0x38) + dVar27;
      dVar8 = dVar30 * dVar10 - dVar11 * dVar29;
      dVar9 = dVar7 * dVar11 - dVar12 * dVar30;
      dVar28 = dVar29 * dVar12 - dVar7 * dVar10;
      dVar9 = dVar9 + dVar9;
      dVar28 = dVar28 + dVar28;
      dVar8 = dVar8 + dVar8;
      dVar26 = (dVar23 * dVar11 - dVar25 * dVar12) + dVar2 * dVar24 + dVar27 +
               *(double *)(param_1 + 0xc0);
      dVar27 = (dVar12 * dVar24 - dVar10 * dVar23) + dVar3 * dVar25 + dVar13 +
               *(double *)(param_1 + 200);
      dVar23 = dVar23 * dVar2 + *(double *)(lVar22 + 0x30) + (dVar25 * dVar10 - dVar24 * dVar11) +
               *(double *)(param_1 + 0xd0);
      dVar29 = (dVar8 * dVar11 - dVar28 * dVar12) + dVar2 * dVar9 + dVar29 +
               *(double *)(param_1 + 0xc0);
      dVar30 = (dVar12 * dVar9 - dVar10 * dVar8) + dVar3 * dVar28 + dVar30 +
               *(double *)(param_1 + 200);
      dVar8 = dVar8 * dVar2 + dVar7 + (dVar28 * dVar10 - dVar9 * dVar11) +
              *(double *)(param_1 + 0xd0);
      dVar2 = dVar26;
      if (dVar29 <= dVar26) {
        dVar2 = dVar29;
      }
      if (dVar26 <= dVar29) {
        dVar26 = dVar29;
      }
      dVar3 = dVar27;
      if (dVar30 <= dVar27) {
        dVar3 = dVar30;
      }
      dVar7 = dVar23;
      if (dVar8 <= dVar23) {
        dVar7 = dVar8;
      }
      if (dVar27 <= dVar30) {
        dVar27 = dVar30;
      }
      if (dVar23 <= dVar8) {
        dVar23 = dVar8;
      }
      dVar8 = *(double *)(lVar22 + 0x10);
      dVar23 = dVar23 + dVar8;
      dVar27 = dVar27 + dVar8;
      dVar26 = dVar26 + dVar8;
      dVar7 = dVar7 - dVar8;
      dVar3 = dVar3 - dVar8;
      dVar2 = dVar2 - dVar8;
    }
    uVar16 = CONCAT71((int7)((ulonglong)lVar22 >> 8),1);
    if (0 < iVar4) {
      local_240 = (longlong)dVar6 + 0x78;
      dVar23 = (dVar23 - dVar7) * 0.5;
      dVar27 = (dVar27 - dVar3) * 0.5;
      dVar26 = (dVar26 - dVar2) * 0.5;
      local_250 = param_1 + 0x80;
      local_258 = (double *)(param_1 + 0xa0);
      local_248 = (double *)(param_1 + 0x58);
      lVar22 = 0;
      do {
        lVar18 = *(longlong *)((longlong)dVar6 + 0x80);
        if (*(longlong *)((longlong)dVar6 + 0x80) == 0) {
          lVar18 = local_240;
        }
        lVar20 = *(longlong *)(lVar18 + lVar22 * 8);
        uVar16 = *(undefined8 *)(lVar20 + 0x10);
        if (1 < iVar4) {
          dVar29 = dVar27;
          dVar30 = dVar23;
          dVar8 = dVar26;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar8 = *(double *)(param_1 + 0x38);
            dVar29 = *(double *)(param_1 + 0x40);
            dVar30 = *(double *)(param_1 + 0x48);
          }
          local_238[0] = *(double *)(lVar20 + 0x18) - dVar8;
          local_238[1] = *(double *)(lVar20 + 0x20) - dVar29;
          local_238[2] = *(double *)(lVar20 + 0x28) - dVar30;
          local_238[3] = *(double *)(lVar20 + 0x30) + dVar8;
          local_238[4] = *(double *)(lVar20 + 0x38) + dVar29;
          local_238[5] = *(double *)(lVar20 + 0x40) + dVar30;
          local_198 = dVar2 + dVar26;
          uStack_190 = dVar3 + dVar27;
          local_188 = dVar7 + dVar23;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            local_198 = *(double *)(param_1 + 0xc0);
            uStack_190 = *(double *)(param_1 + 200);
            local_188 = *(double *)(param_1 + 0xd0);
          }
          lVar17 = 0;
          do {
            dVar8 = (double)(&local_198)[lVar17];
            if ((dVar8 < local_238[lVar17]) ||
               (local_238[lVar17 + 3] <= dVar8 && dVar8 != local_238[lVar17 + 3]))
            goto LAB_14006268e;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 3);
        }
        cVar14 = '\x02';
        if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) {
LAB_140062531:
          local_188 = (double)CONCAT44(local_188._4_4_,0xffffffff);
          dStack_180 = 0.0;
          dStack_178 = 0.0;
          dStack_170 = 0.0;
          local_168 = 0xffffffff;
          uStack_190 = *(double *)(lVar18 + lVar22 * 8);
          local_198 = dVar6;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            if ((*(byte *)(param_1 + 0x51) & 2) == 0) {
              pdVar19 = local_258;
              pdVar21 = local_238;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *pdVar21 = *pdVar19;
                pdVar19 = pdVar19 + 1;
                pdVar21 = pdVar21 + 1;
              }
              puStack_260 = (undefined1 *)0x0;
            }
            else {
              pdVar19 = local_258;
              pdVar21 = local_238;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *pdVar21 = *pdVar19;
                pdVar19 = pdVar19 + 1;
                pdVar21 = pdVar21 + 1;
              }
              puStack_260 = local_1d0;
            }
            local_268 = 0;
            cVar15 = FUN_144945691(uVar16,local_158);
            if (cVar15 != '\0') {
              dStack_170 = local_248[2];
              dStack_180 = *local_248;
              dStack_178 = local_248[1];
              if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                cVar14 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                   (*(longlong **)(param_1 + 0x98),local_250,&local_198);
              }
              if (cVar14 != '\0') {
                if ((cVar14 == '\x02') || (*(char *)(param_1 + 0x52) == '\x01')) {
                  lVar18 = *(longlong *)(param_1 + 0x70);
LAB_140062646:
                  *(ulonglong *)(lVar18 + 0x38) = CONCAT44(uStack_164,local_168);
                  *(double *)(lVar18 + 0x28) = dStack_178;
                  *(double *)(lVar18 + 0x30) = dStack_170;
                  *(double *)(lVar18 + 0x18) = local_188;
                  *(double *)(lVar18 + 0x20) = dStack_180;
                  *(undefined4 *)(lVar18 + 8) = (undefined4)local_198;
                  *(undefined4 *)(lVar18 + 0xc) = local_198._4_4_;
                  *(undefined4 *)(lVar18 + 0x10) = (undefined4)uStack_190;
                  *(undefined4 *)(lVar18 + 0x14) = uStack_190._4_4_;
                  *(undefined1 *)(lVar18 + 0x44) = 1;
                }
                else {
                  lVar18 = *(longlong *)(param_1 + 0x70);
                  if (*(char *)(lVar18 + 0x45) == '\x01') goto LAB_140062646;
                  iVar5 = *(int *)(lVar18 + 0x1c50);
                  *(uint *)(lVar18 + 0x1c50) = iVar5 + 1U;
                  if (*(uint *)(lVar18 + 0x1c54) < iVar5 + 1U) {
                    FUN_140ef0e5e(lVar18 + 0x48,iVar5);
                  }
                  lVar20 = lVar18 + 0x48;
                  if (*(longlong *)(lVar18 + 0x1c48) != 0) {
                    lVar20 = *(longlong *)(lVar18 + 0x1c48);
                  }
                  lVar18 = (longlong)iVar5 * 0x38;
                  *(ulonglong *)(lVar20 + 0x30 + lVar18) = CONCAT44(uStack_164,local_168);
                  pdVar19 = (double *)(lVar20 + 0x20 + lVar18);
                  *pdVar19 = dStack_178;
                  pdVar19[1] = dStack_170;
                  pdVar19 = (double *)(lVar20 + 0x10 + lVar18);
                  *pdVar19 = local_188;
                  pdVar19[1] = dStack_180;
                  puVar1 = (undefined4 *)(lVar20 + lVar18);
                  *puVar1 = (undefined4)local_198;
                  puVar1[1] = local_198._4_4_;
                  puVar1[2] = (undefined4)uStack_190;
                  puVar1[3] = uStack_190._4_4_;
                }
                if (*(char *)(param_1 + 0x52) != '\0') {
                  uVar16 = 0;
                  goto LAB_14006272e;
                }
              }
            }
          }
        }
        else {
          cVar14 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                             (*(longlong **)(param_1 + 0x98),local_250,lVar20,dVar6);
          if (cVar14 != '\0') goto LAB_140062531;
        }
LAB_14006268e:
        lVar22 = lVar22 + 1;
      } while (lVar22 < *(int *)((longlong)dVar6 + 0x88));
      uVar16 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)dVar6 + 0x88) >> 8),1);
    }
  }
LAB_14006272e:
  if ((local_f0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400627cc FUN_1400627cc body=101 status=ok
// SIG undefined FUN_1400627cc(void)

void FUN_1400627cc(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_144756766(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 140062832 FUN_140062832 body=58 status=ok
// SIG undefined FUN_140062832(void)

undefined4 FUN_140062832(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 14006286c FUN_14006286c body=42 status=ok
// SIG undefined FUN_14006286c(void)

undefined8 * FUN_14006286c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140062896 FUN_140062896 body=63 status=ok
// SIG undefined FUN_140062896(void)

undefined4 FUN_140062896(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 1400628d6 FUN_1400628d6 body=38 status=ok
// SIG undefined FUN_1400628d6(void)

undefined8 FUN_1400628d6(undefined8 param_1,int param_2)

{
  FUN_140062896();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400628fc FUN_1400628fc body=99 status=ok
// SIG undefined FUN_1400628fc(void)

void FUN_1400628fc(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140062960 FUN_140062960 body=6063 status=ok
// SIG undefined FUN_140062960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140062960(longlong param_1,longlong *param_2,uint *param_3,undefined8 param_4,ulonglong *param_5
             ,uint *param_6,byte param_7)

{
  byte bVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char cVar18;
  int iVar19;
  ulonglong *puVar20;
  void *pvVar21;
  longlong lVar22;
  longlong *plVar23;
  void *pvVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined4 uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  void *pvVar33;
  longlong lVar34;
  uint *puVar35;
  undefined2 *puVar36;
  undefined2 *puVar37;
  longlong *plVar38;
  bool bVar39;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 in_XMM3 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined2 local_19a;
  ulonglong *local_198;
  uint *local_190;
  void *local_188;
  longlong local_180;
  ulonglong *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  uint local_15c;
  longlong local_158;
  ulonglong *local_150;
  void *local_148;
  undefined4 local_13c;
  undefined8 local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  byte local_6d;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar31 = *(uint *)(param_1 + 0xe8);
  local_190 = param_3;
  if ((uVar31 >> 0x1e & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca09618);
    pvVar24 = (void *)((ulonglong)(uVar31 & 0x3fffffff) * 0xa8 + DAT_14ca09620);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca09618);
  }
  else {
    pvVar24 = (void *)((ulonglong)(uVar31 & 0x3fffffff) * 0xa0 + *param_2);
  }
  if (uVar31 == *param_6) {
    bVar1 = *(byte *)(param_1 + 0x11a);
    local_1b8 = pvVar24;
    if (param_6[1] != (uint)bVar1) {
      puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar10 + 3;
      if ((undefined8 *)param_5[1] < puVar15) {
        FUN_140023dd8(param_5,0x20);
        puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar10 + 3;
      }
      *param_5 = (ulonglong)puVar15;
      *(int *)(param_5 + 0xc) = (int)param_5[0xc] + 1;
      *(undefined8 **)param_5[6] = puVar10;
      param_5[6] = (ulonglong)(puVar10 + 1);
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_14a2901c8;
      *(uint *)(puVar10 + 2) = (uint)bVar1;
      param_6[1] = (uint)bVar1;
    }
  }
  else {
    FUN_144a1fecc(pvVar24,&local_138);
    FUN_144b0e33a(param_5,&local_138);
    uVar31 = 0;
    if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
      uVar31 = *(uint *)((longlong)pvVar24 + 0x98);
      if (((DAT_14ca111f8 != 0 & param_7 & uVar31 < 2) != 0) ||
         ((DAT_14cafb2b4 != 1 && DAT_14cafb358 - 1U < 2) && uVar31 == 0)) {
        uVar31 = FUN_147405ca7(&local_138);
        *(uint *)((longlong)pvVar24 + 0x98) = uVar31;
      }
    }
    local_1c0 = 0xffffffff;
    local_1c8 = 0;
    FUN_14365edea(&local_138,uVar31,0,0);
    if (((uVar31 == 1) && (param_7 != 0)) && (DAT_14ca111f8 != 0)) {
      uVar17 = 0;
      goto LAB_140064064;
    }
    bVar1 = *(byte *)(param_1 + 0x11a);
    lVar34 = FUN_140028f18(param_5);
    auVar41._8_8_ = extraout_XMM0_Qb;
    auVar41._0_8_ = extraout_XMM0_Qa;
    if ((lVar34 != 0) && ((local_6d & 0x10) == 0)) {
      auVar41._8_8_ = uStack_130;
      auVar41._0_8_ = local_138;
      param_5[0x35] = local_118;
      param_5[0x36] = uStack_110;
      param_5[0x33] = local_128;
      param_5[0x34] = uStack_120;
      *(undefined1 (*) [16])(param_5 + 0x31) = auVar41;
      puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar10 + 4;
      if ((undefined8 *)param_5[1] < puVar15) {
        auVar41._0_8_ = FUN_140023dd8(param_5);
        auVar41._8_8_ = extraout_XMM0_Qb_00;
        puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar10 + 4;
      }
      *param_5 = (ulonglong)puVar15;
      *(int *)(param_5 + 0xc) = (int)param_5[0xc] + 1;
      *(undefined8 **)param_5[6] = puVar10;
      param_5[6] = (ulonglong)(puVar10 + 1);
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_14a37d348;
      puVar10[2] = lVar34;
      *(uint *)(puVar10 + 3) = (uint)bVar1;
      *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
    }
    *param_6 = *(uint *)(param_1 + 0xe8);
    auVar7 = _DAT_149931e80;
    auVar40 = pmovsxbq(auVar41,0x100);
    lVar34 = 0;
    auVar41 = pmovsxbq(in_XMM3,0x202);
    do {
      if (SUB168(auVar40 ^ auVar7,0) < -0x7fffffffffffffef) {
        *(undefined8 *)((longlong)param_6 + lVar34 + 0x2dc) = 0;
      }
      if (SUB168(auVar40 ^ auVar7,8) < -0x7fffffffffffffef) {
        *(undefined8 *)((longlong)param_6 + lVar34 + 0x2e8) = 0;
      }
      lVar26 = auVar40._8_8_;
      auVar40._0_8_ = auVar40._0_8_ + auVar41._0_8_;
      auVar40._8_8_ = lVar26 + auVar41._8_8_;
      lVar34 = lVar34 + 0x18;
    } while (lVar34 != 0xd8);
    lVar34 = 0;
    local_1b8 = pvVar24;
    do {
      lVar26 = (longlong)*(int *)((longlong)param_6 + lVar34 + 8);
      if (-1 < lVar26) {
        memset((void *)((longlong)param_6 + lVar34 + 0x10),0,lVar26 * 8 + 8);
      }
      *(undefined4 *)((longlong)param_6 + lVar34 + 8) = 0xffffffff;
      lVar34 = lVar34 + 0x78;
    } while (lVar34 != 0x2d0);
    param_6[1] = (uint)bVar1;
  }
  cVar18 = -1;
  if ((char)local_190[6] == -1) {
    cVar18 = *(char *)(param_1 + 0x119);
  }
  iVar8 = *(int *)(param_1 + 0xd8);
  local_180 = param_1;
  if (0 < iVar8) {
    lVar34 = param_1 + 0x78;
    lVar26 = 0;
    lVar28 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0xd0);
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        lVar13 = lVar34;
      }
      puVar35 = (uint *)(lVar13 + lVar26);
      uVar31 = *(uint *)(lVar13 + lVar26) & 0xf;
      if ((cVar18 == -1) || (uVar31 != (int)cVar18)) {
        if ((((*(uint *)(lVar13 + lVar26) ^ param_6[(ulonglong)uVar31 * 3 + 0xb6]) & 0x7fffffff) !=
             0) || (*(longlong *)(param_6 + (ulonglong)uVar31 * 3 + 0xb7) !=
                    *(longlong *)(lVar13 + 4 + lVar26))) {
          FUN_144adcf54(puVar35,param_5);
          goto LAB_140062dc8;
        }
      }
      else {
        uVar31 = local_190[4];
        uVar17 = *(undefined8 *)local_190;
        puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar10 + 5;
        if ((undefined8 *)param_5[1] < puVar15) {
          FUN_140023dd8(param_5,0x30);
          puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar10 + 5;
        }
        *param_5 = (ulonglong)puVar15;
        *(int *)(param_5 + 0xc) = (int)param_5[0xc] + 1;
        *(undefined8 **)param_5[6] = puVar10;
        param_5[6] = (ulonglong)(puVar10 + 1);
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_14a1fb5a8;
        *(int *)(puVar10 + 2) = (int)cVar18;
        puVar10[3] = uVar17;
        *(uint *)(puVar10 + 4) = uVar31;
        param_1 = local_180;
LAB_140062dc8:
        uVar31 = *puVar35;
        param_6[(ulonglong)(uVar31 & 0xf) * 3 + 0xb8] = puVar35[2];
        *(undefined8 *)(param_6 + (ulonglong)(uVar31 & 0xf) * 3 + 0xb6) = *(undefined8 *)puVar35;
        iVar8 = *(int *)(param_1 + 0xd8);
      }
      lVar28 = lVar28 + 1;
      lVar26 = lVar26 + 0xc;
    } while (lVar28 < iVar8);
  }
  FUN_144ab2e92(local_1b8,&local_138);
  if (0 < *(int *)(param_1 + 0x18)) {
    if (*(ushort *)(param_1 + 0x72) < 0x51) {
      pvVar24 = (void *)(param_1 + 0x20);
    }
    else {
      pvVar24 = *(void **)(param_1 + 0x20);
    }
    param_6 = param_6 + 2;
    uVar30 = 0xffffffff;
    lVar34 = 0;
    local_190 = param_6;
    do {
      do {
        local_15c = (int)uVar30 + 1;
        uVar30 = (ulonglong)local_15c;
      } while ((*(ushort *)(param_1 + 0x70) >> (local_15c & 0x1f) & 1) == 0);
      lVar26 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar26 = param_1;
      }
      puVar3 = *(ulonglong **)(lVar26 + lVar34 * 8);
      puVar35 = param_6 + (uVar30 & 0xff) * 0x1e;
      local_1b8 = pvVar24;
      local_158 = lVar34;
      local_150 = puVar3;
      local_148 = pvVar24;
      if ((char)local_15c == '\0') {
        plVar38 = (longlong *)param_5[0x10];
        if (plVar38 == (longlong *)0x0) {
          puVar14 = (ulonglong *)param_5[1];
          plVar38 = (longlong *)(*param_5 + 0xf & 0xfffffffffffffff0);
          puVar20 = (ulonglong *)(plVar38 + 9);
          if (puVar14 < puVar20) {
            FUN_140023dd8(param_5,0x58);
            puVar14 = (ulonglong *)param_5[1];
            plVar38 = (longlong *)(*param_5 + 0xf & 0xfffffffffffffff0);
            puVar20 = (ulonglong *)(plVar38 + 9);
          }
          *param_5 = (ulonglong)puVar20;
          puVar29 = (ulonglong *)((longlong)puVar20 + 0xfU & 0xfffffffffffffff0);
          puVar20 = puVar29 + 0x16;
          if (puVar14 < puVar20) {
            FUN_140023dd8(param_5,0xc0);
            puVar29 = (ulonglong *)(*param_5 + 0xf & 0xfffffffffffffff0);
            puVar20 = puVar29 + 0x16;
          }
          *param_5 = (ulonglong)puVar20;
          *puVar29 = param_5[0x11];
          puVar29[1] = (ulonglong)param_5;
          puVar29[2] = 0;
          puVar29[3] = 0;
          puVar29[4] = 0;
          puVar29[5] = 0;
          *(undefined8 *)((longlong)puVar29 + 0x2e) = 0;
          if (DAT_14c872d30 == 0) {
            FUN_145bdc178();
            bVar39 = DAT_14c872d30 != 0;
            puVar29[7] = 0;
            puVar29[8] = 0;
            puVar29[9] = 0;
            puVar29[10] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
            if (bVar39) goto LAB_140063503;
            FUN_145bdc178();
            bVar39 = DAT_14c872d30 != 0;
            puVar29[0xc] = 0;
            puVar29[0xd] = 0;
            puVar29[0xe] = 0;
            puVar29[0xf] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
            if (bVar39) goto LAB_140063513;
            FUN_145bdc178();
            bVar39 = DAT_14c872d30 == 0;
            puVar29[0x11] = 0;
            puVar29[0x12] = 0;
            puVar29[0x13] = 0;
            puVar29[0x14] = 0;
            *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
            if (bVar39) {
              FUN_145bdc178();
            }
          }
          else {
            puVar29[9] = 0;
            puVar29[10] = 0;
            puVar29[7] = 0;
            puVar29[8] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
LAB_140063503:
            puVar29[0xe] = 0;
            puVar29[0xf] = 0;
            puVar29[0xc] = 0;
            puVar29[0xd] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
LAB_140063513:
            puVar29[0x13] = 0;
            puVar29[0x14] = 0;
            puVar29[0x11] = 0;
            puVar29[0x12] = 0;
            *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
          }
          param_5[0x11] = (ulonglong)puVar29;
          *plVar38 = (longlong)puVar29;
          plVar38[1] = 0;
          *(undefined4 *)(plVar38 + 2) = 0;
          plVar38[3] = 0;
          *(undefined4 *)(plVar38 + 4) = 0;
          plVar38[5] = 0;
          *(undefined4 *)(plVar38 + 6) = 0;
          plVar38[7] = 0;
          *(undefined4 *)(plVar38 + 8) = 0;
          param_5[0x10] = (ulonglong)plVar38;
        }
        iVar8 = (int)plVar38[6] + (int)plVar38[4];
        iVar9 = iVar8 + (int)plVar38[8];
        if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar38[8]) == iVar9 < 0) {
          plVar38[1] = 0;
          *(undefined4 *)(plVar38 + 2) = 0;
          plVar38[3] = 0;
          *(undefined4 *)(plVar38 + 4) = 0;
          plVar38[5] = 0;
          *(undefined4 *)(plVar38 + 6) = 0;
          plVar38[7] = 0;
          *(undefined4 *)(plVar38 + 8) = 0;
          plVar38 = (longlong *)param_5[0x10];
          pvVar24 = local_148;
        }
        uVar30 = *puVar3;
        uVar32 = ((longlong)uVar30 >> 0x18) + (longlong)puVar3;
        if ((uVar30 & 1) == 0) {
          uVar32 = uVar30;
        }
        iVar8 = (int)puVar3[1];
        lVar34 = (longlong)iVar8;
        if (0 < lVar34) {
          lVar26 = 0;
          do {
            uVar2 = *(ushort *)(uVar32 + lVar26 * 2);
            lVar28 = *(longlong *)((longlong)pvVar24 + lVar26 * 8);
            if (lVar28 != *(longlong *)(puVar35 + (ulonglong)uVar2 * 2 + 2)) {
              lVar22 = *plVar38;
              puVar20 = (ulonglong *)(lVar22 + 0x60);
              lVar13 = (longlong)(int)plVar38[6] + 1;
              plVar11 = *(longlong **)(lVar22 + 0x60);
              if ((longlong)(int)plVar38[6] == 0) {
                plVar11 = (longlong *)((longlong)plVar11 + 7U & 0xfffffffffffffff8);
                plVar23 = plVar11 + 2;
                plVar12 = plVar11;
                if (*(longlong **)(lVar22 + 0x68) < plVar23) {
                  local_1b0 = lVar13;
                  local_1a8 = lVar34;
                  local_198 = puVar20;
                  FUN_140023dd8(puVar20,0x18);
                  plVar11 = (longlong *)(*local_198 + 7 & 0xfffffffffffffff8);
                  plVar23 = plVar11 + 2;
                  puVar20 = local_198;
                  lVar13 = local_1b0;
                  lVar34 = local_1a8;
                  plVar12 = plVar11;
                }
LAB_140062f42:
                uVar27 = (undefined4)lVar13;
                *puVar20 = (ulonglong)plVar23;
              }
              else {
                plVar23 = plVar11 + 2;
                if (plVar23 <= *(longlong **)(lVar22 + 0x68)) {
                  plVar12 = (longlong *)plVar38[5];
                  goto LAB_140062f42;
                }
                plVar12 = (longlong *)((longlong)plVar11 + 7U & 0xfffffffffffffff8);
                plVar11 = plVar12 + lVar13 * 2;
                local_1b0 = lVar13;
                local_1a8 = lVar34;
                local_188 = pvVar24;
                if (*(longlong **)(lVar22 + 0x68) < plVar11) {
                  local_198 = puVar20;
                  FUN_140023dd8(puVar20,(int)lVar13 * 0x10 | 8);
                  plVar12 = (longlong *)(*local_198 + 7 & 0xfffffffffffffff8);
                  plVar11 = plVar12 + lVar13 * 2;
                  puVar20 = local_198;
                }
                *puVar20 = (ulonglong)plVar11;
                uVar27 = (undefined4)local_1b0;
                plVar11 = plVar12;
                pvVar24 = local_188;
                lVar34 = local_1a8;
                if (0 < (int)plVar38[6]) {
                  lVar13 = 0;
                  lVar22 = 0;
                  do {
                    uVar17 = ((undefined8 *)(plVar38[5] + lVar13))[1];
                    *(undefined8 *)((longlong)plVar12 + lVar13) =
                         *(undefined8 *)(plVar38[5] + lVar13);
                    ((undefined8 *)((longlong)plVar12 + lVar13))[1] = uVar17;
                    lVar22 = lVar22 + 1;
                    lVar13 = lVar13 + 0x10;
                  } while (lVar22 < (int)plVar38[6]);
                  plVar11 = (longlong *)(lVar13 + (longlong)plVar12);
                }
              }
              *plVar11 = lVar28;
              *(ushort *)(plVar11 + 1) = uVar2;
              *(undefined1 *)((longlong)plVar11 + 10) = 4;
              plVar38[5] = (longlong)plVar12;
              *(undefined4 *)(plVar38 + 6) = uVar27;
              *(longlong *)(puVar35 + (ulonglong)uVar2 * 2 + 2) = lVar28;
              uVar31 = (uint)uVar2;
              if ((int)(uint)uVar2 < (int)*puVar35) {
                uVar31 = *puVar35;
              }
              *puVar35 = uVar31;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 != lVar34);
          iVar8 = (int)puVar3[1];
        }
        uVar30 = puVar3[2];
        if ((uVar30 & 1) != 0) {
          uVar30 = (longlong)puVar3 + ((longlong)uVar30 >> 0x18) + 0x10;
        }
        iVar9 = (int)puVar3[3];
        if (0 < (longlong)iVar9) {
          lVar34 = 0;
          do {
            local_13c = *(undefined4 *)(uVar30 + lVar34 * 4);
            FUN_14723b559(plVar38,&local_13c,
                          *(undefined8 *)
                           ((longlong)pvVar24 + lVar34 * 8 + (ulonglong)(uint)(iVar8 << 3)));
            lVar34 = lVar34 + 1;
          } while (iVar9 != lVar34);
          iVar8 = (int)puVar3[1];
          iVar9 = (int)puVar3[3];
        }
        uVar31 = (uint)puVar3[5];
        uVar30 = puVar3[4];
        if ((uVar30 & 1) != 0) {
          uVar30 = (longlong)puVar3 + ((longlong)uVar30 >> 0x18) + 0x20;
        }
        pvVar33 = pvVar24;
        if ((ulonglong)uVar31 != 0) {
          local_1a8 = (ulonglong)(uint)((iVar8 + iVar9) * 8) + (longlong)pvVar24;
          uVar32 = 0;
          local_188 = pvVar24;
          do {
            local_13c = *(undefined4 *)(uVar30 + uVar32 * 4);
            if ((*(byte *)((longlong)pvVar24 +
                          (uVar32 >> 3 & 0x1fffffff) + (ulonglong)((uVar31 + iVar8 + iVar9) * 8)) >>
                 ((uint)uVar32 & 7) & 1) == 0) {
              FUN_14723b659();
            }
            else {
              FUN_14723b5d9(plVar38,&local_13c,*(undefined8 *)(local_1a8 + uVar32 * 8));
            }
            uVar32 = uVar32 + 1;
            pvVar33 = local_188;
          } while (uVar31 != uVar32);
        }
        puVar37 = (undefined2 *)puVar3[6];
        puVar36 = (undefined2 *)((longlong)puVar3 + ((longlong)puVar37 >> 0x18) + 0x30);
        if (((ulonglong)puVar37 & 1) == 0) {
          puVar36 = puVar37;
        }
        pvVar24 = local_1b8;
        param_1 = local_180;
        if ((longlong)(int)puVar3[7] != 0) {
          iVar8 = (int)puVar3[5];
          iVar9 = iVar8 + 0xe;
          if (-1 < iVar8 + 7) {
            iVar9 = iVar8 + 7;
          }
          local_170 = puVar36 + (longlong)(int)puVar3[7] * 0xc;
          pvVar33 = (void *)((longlong)pvVar33 +
                            (ulonglong)
                            (uint)((iVar9 >> 3) + ((int)puVar3[3] + iVar8 + (int)puVar3[1]) * 8));
          do {
            puVar37 = *(undefined2 **)(puVar36 + 4);
            if (((ulonglong)puVar37 & 1) != 0) {
              puVar37 = (undefined2 *)((longlong)puVar36 + ((longlong)puVar37 >> 0x18) + 8);
            }
            if ((longlong)*(int *)(puVar36 + 8) != 0) {
              local_168 = puVar37 + (longlong)*(int *)(puVar36 + 8) * 2;
              do {
                local_1b0 = CONCAT62(local_1b0._2_6_,*puVar37);
                uVar2 = puVar37[1];
                uVar25 = (ulonglong)uVar2;
                local_19a = *puVar36;
                uVar31 = *(uint *)(plVar38 + 2);
                local_198 = (ulonglong *)(ulonglong)uVar31;
                iVar8 = uVar31 + uVar2;
                lVar34 = *plVar38;
                puVar3 = (ulonglong *)(lVar34 + 0x10);
                pvVar24 = *(void **)(lVar34 + 0x10);
                uVar32 = *(ulonglong *)(lVar34 + 0x18);
                uVar30 = (longlong)pvVar24 + uVar25;
                local_1a8 = CONCAT62(local_1a8._2_6_,uVar2);
                if (uVar31 == 0) {
                  if (uVar32 < uVar30) {
                    FUN_140023dd8(puVar3,uVar2 + 1);
                    pvVar24 = (void *)*puVar3;
                    uVar30 = (longlong)pvVar24 + uVar25;
                  }
                  *puVar3 = uVar30;
                  pvVar21 = pvVar24;
                }
                else if (uVar32 < uVar30) {
                  uVar30 = (longlong)pvVar24 + (longlong)iVar8;
                  pvVar21 = pvVar24;
                  local_188 = pvVar33;
                  local_178 = puVar3;
                  if (uVar32 < uVar30) {
                    FUN_140023dd8(puVar3,iVar8 + 1);
                    pvVar21 = (void *)*puVar3;
                    uVar30 = (longlong)iVar8 + (longlong)pvVar21;
                  }
                  *local_178 = uVar30;
                  memcpy(pvVar21,(void *)plVar38[1],(longlong)(int)plVar38[2]);
                  pvVar24 = (void *)((longlong)(int)plVar38[2] + (longlong)pvVar21);
                  pvVar33 = local_188;
                  param_1 = local_180;
                }
                else {
                  pvVar21 = (void *)plVar38[1];
                  *puVar3 = uVar30;
                }
                memcpy(pvVar24,pvVar33,uVar25);
                pvVar24 = local_1b8;
                plVar38[1] = (longlong)pvVar21;
                *(int *)(plVar38 + 2) = iVar8;
                lVar26 = *plVar38;
                puVar3 = (ulonglong *)(lVar26 + 0x38);
                lVar34 = (longlong)(int)plVar38[4] + 1;
                puVar15 = *(undefined8 **)(lVar26 + 0x38);
                if ((longlong)(int)plVar38[4] == 0) {
                  puVar15 = (undefined8 *)((longlong)puVar15 + 1U & 0xfffffffffffffffe);
                  puVar10 = puVar15 + 1;
                  puVar16 = puVar15;
                  if (*(undefined8 **)(lVar26 + 0x40) < puVar10) {
                    FUN_140023dd8(puVar3,10);
                    puVar15 = (undefined8 *)(*puVar3 + 1 & 0xfffffffffffffffe);
                    puVar10 = puVar15 + 1;
                    puVar16 = puVar15;
                  }
LAB_140063806:
                  *puVar3 = (ulonglong)puVar10;
                }
                else {
                  puVar10 = puVar15 + 1;
                  if (puVar10 <= *(undefined8 **)(lVar26 + 0x40)) {
                    puVar16 = (undefined8 *)plVar38[3];
                    goto LAB_140063806;
                  }
                  puVar16 = (undefined8 *)((longlong)puVar15 + 1U & 0xfffffffffffffffe);
                  puVar15 = puVar16 + lVar34;
                  if (*(undefined8 **)(lVar26 + 0x40) < puVar15) {
                    FUN_140023dd8(puVar3);
                    puVar16 = (undefined8 *)(*puVar3 + 1 & 0xfffffffffffffffe);
                    puVar15 = puVar16 + lVar34;
                  }
                  *puVar3 = (ulonglong)puVar15;
                  puVar15 = puVar16;
                  pvVar24 = local_1b8;
                  param_1 = local_180;
                  if (0 < (int)plVar38[4]) {
                    lVar26 = 0;
                    do {
                      *puVar15 = *(undefined8 *)(plVar38[3] + lVar26 * 8);
                      lVar26 = lVar26 + 1;
                      puVar15 = puVar15 + 1;
                    } while (lVar26 < (int)plVar38[4]);
                  }
                }
                *(undefined2 *)puVar15 = local_19a;
                *(undefined2 *)((longlong)puVar15 + 2) = (undefined2)local_1b0;
                *(short *)((longlong)puVar15 + 4) = (short)local_198;
                *(undefined2 *)((longlong)puVar15 + 6) = (undefined2)local_1a8;
                plVar38[3] = (longlong)puVar16;
                *(int *)(plVar38 + 4) = (int)lVar34;
                pvVar33 = (void *)((longlong)pvVar33 + (ulonglong)(ushort)puVar37[1]);
                puVar37 = puVar37 + 2;
              } while (puVar37 != local_168);
            }
            puVar36 = puVar36 + 0xc;
          } while (puVar36 != local_170);
        }
        iVar8 = (int)plVar38[6] + (int)plVar38[4];
        iVar9 = iVar8 + (int)plVar38[8];
        uVar30 = uStack_130;
        param_6 = local_190;
        if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar38[8]) == iVar9 < 0) {
LAB_14006332f:
          puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar10 + 0xb;
          if ((undefined8 *)param_5[1] < puVar15) {
            FUN_140023dd8(param_5,0x60);
            puVar10 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
            puVar15 = puVar10 + 0xb;
          }
          *param_5 = (ulonglong)puVar15;
          *(int *)(param_5 + 0xc) = (int)param_5[0xc] + 1;
          *(undefined8 **)param_5[6] = puVar10;
          param_5[6] = (ulonglong)(puVar10 + 1);
          lVar34 = plVar38[7];
          lVar22 = plVar38[8];
          lVar26 = plVar38[5];
          lVar4 = plVar38[6];
          lVar28 = plVar38[3];
          lVar5 = plVar38[4];
          lVar13 = plVar38[1];
          lVar6 = plVar38[2];
          puVar10[1] = 0;
          *puVar10 = &PTR_FUN_14a1e7fd8;
          puVar10[2] = uVar30;
          puVar10[3] = lVar13;
          *(int *)(puVar10 + 4) = (int)lVar6;
          puVar10[5] = lVar28;
          *(int *)(puVar10 + 6) = (int)lVar5;
          puVar10[7] = lVar26;
          *(int *)(puVar10 + 8) = (int)lVar4;
          puVar10[9] = lVar34;
          *(int *)(puVar10 + 10) = (int)lVar22;
          plVar38[1] = 0;
          *(undefined4 *)(plVar38 + 2) = 0;
          plVar38[3] = 0;
          *(undefined4 *)(plVar38 + 4) = 0;
          plVar38[5] = 0;
          *(undefined4 *)(plVar38 + 6) = 0;
          plVar38[7] = 0;
          *(undefined4 *)(plVar38 + 8) = 0;
          param_6 = local_190;
        }
      }
      else if ((local_15c & 0xff) == 3) {
        plVar38 = (longlong *)param_5[0x10];
        if (plVar38 == (longlong *)0x0) {
          puVar14 = (ulonglong *)param_5[1];
          plVar38 = (longlong *)(*param_5 + 0xf & 0xfffffffffffffff0);
          puVar20 = (ulonglong *)(plVar38 + 9);
          if (puVar14 < puVar20) {
            FUN_140023dd8(param_5,0x58);
            puVar14 = (ulonglong *)param_5[1];
            plVar38 = (longlong *)(*param_5 + 0xf & 0xfffffffffffffff0);
            puVar20 = (ulonglong *)(plVar38 + 9);
          }
          *param_5 = (ulonglong)puVar20;
          puVar29 = (ulonglong *)((longlong)puVar20 + 0xfU & 0xfffffffffffffff0);
          puVar20 = puVar29 + 0x16;
          if (puVar14 < puVar20) {
            FUN_140023dd8(param_5,0xc0);
            puVar29 = (ulonglong *)(*param_5 + 0xf & 0xfffffffffffffff0);
            puVar20 = puVar29 + 0x16;
          }
          *param_5 = (ulonglong)puVar20;
          *puVar29 = param_5[0x11];
          puVar29[1] = (ulonglong)param_5;
          puVar29[2] = 0;
          puVar29[3] = 0;
          puVar29[4] = 0;
          puVar29[5] = 0;
          *(undefined8 *)((longlong)puVar29 + 0x2e) = 0;
          if (DAT_14c872d30 == 0) {
            FUN_145bdc178();
            bVar39 = DAT_14c872d30 != 0;
            puVar29[7] = 0;
            puVar29[8] = 0;
            puVar29[9] = 0;
            puVar29[10] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
            if (bVar39) goto LAB_1400635da;
            FUN_145bdc178();
            bVar39 = DAT_14c872d30 != 0;
            puVar29[0xc] = 0;
            puVar29[0xd] = 0;
            puVar29[0xe] = 0;
            puVar29[0xf] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
            if (bVar39) goto LAB_1400635ea;
            FUN_145bdc178();
            bVar39 = DAT_14c872d30 == 0;
            puVar29[0x11] = 0;
            puVar29[0x12] = 0;
            puVar29[0x13] = 0;
            puVar29[0x14] = 0;
            *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
            if (bVar39) {
              FUN_145bdc178();
            }
          }
          else {
            puVar29[9] = 0;
            puVar29[10] = 0;
            puVar29[7] = 0;
            puVar29[8] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
LAB_1400635da:
            puVar29[0xe] = 0;
            puVar29[0xf] = 0;
            puVar29[0xc] = 0;
            puVar29[0xd] = 0;
            *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
LAB_1400635ea:
            puVar29[0x13] = 0;
            puVar29[0x14] = 0;
            puVar29[0x11] = 0;
            puVar29[0x12] = 0;
            *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
          }
          param_5[0x11] = (ulonglong)puVar29;
          *plVar38 = (longlong)puVar29;
          plVar38[1] = 0;
          *(undefined4 *)(plVar38 + 2) = 0;
          plVar38[3] = 0;
          *(undefined4 *)(plVar38 + 4) = 0;
          plVar38[5] = 0;
          *(undefined4 *)(plVar38 + 6) = 0;
          plVar38[7] = 0;
          *(undefined4 *)(plVar38 + 8) = 0;
          param_5[0x10] = (ulonglong)plVar38;
        }
        iVar8 = (int)plVar38[6] + (int)plVar38[4];
        iVar9 = iVar8 + (int)plVar38[8];
        if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar38[8]) == iVar9 < 0) {
          plVar38[1] = 0;
          *(undefined4 *)(plVar38 + 2) = 0;
          plVar38[3] = 0;
          *(undefined4 *)(plVar38 + 4) = 0;
          plVar38[5] = 0;
          *(undefined4 *)(plVar38 + 6) = 0;
          plVar38[7] = 0;
          *(undefined4 *)(plVar38 + 8) = 0;
          plVar38 = (longlong *)param_5[0x10];
          pvVar24 = local_148;
        }
        uVar30 = *puVar3;
        uVar32 = ((longlong)uVar30 >> 0x18) + (longlong)puVar3;
        if ((uVar30 & 1) == 0) {
          uVar32 = uVar30;
        }
        iVar8 = (int)puVar3[1];
        lVar34 = (longlong)iVar8;
        if (0 < lVar34) {
          lVar26 = 0;
          do {
            uVar2 = *(ushort *)(uVar32 + lVar26 * 2);
            lVar28 = *(longlong *)((longlong)pvVar24 + lVar26 * 8);
            if (lVar28 != *(longlong *)(puVar35 + (ulonglong)uVar2 * 2 + 2)) {
              lVar22 = *plVar38;
              puVar20 = (ulonglong *)(lVar22 + 0x60);
              lVar13 = (longlong)(int)plVar38[6] + 1;
              plVar11 = *(longlong **)(lVar22 + 0x60);
              if ((longlong)(int)plVar38[6] == 0) {
                plVar11 = (longlong *)((longlong)plVar11 + 7U & 0xfffffffffffffff8);
                plVar23 = plVar11 + 2;
                plVar12 = plVar11;
                if (*(longlong **)(lVar22 + 0x68) < plVar23) {
                  local_1b0 = lVar13;
                  local_1a8 = lVar34;
                  local_198 = puVar20;
                  FUN_140023dd8(puVar20,0x18);
                  plVar11 = (longlong *)(*local_198 + 7 & 0xfffffffffffffff8);
                  plVar23 = plVar11 + 2;
                  puVar20 = local_198;
                  lVar13 = local_1b0;
                  lVar34 = local_1a8;
                  plVar12 = plVar11;
                }
LAB_140063191:
                uVar27 = (undefined4)lVar13;
                *puVar20 = (ulonglong)plVar23;
              }
              else {
                plVar23 = plVar11 + 2;
                if (plVar23 <= *(longlong **)(lVar22 + 0x68)) {
                  plVar12 = (longlong *)plVar38[5];
                  goto LAB_140063191;
                }
                plVar12 = (longlong *)((longlong)plVar11 + 7U & 0xfffffffffffffff8);
                plVar11 = plVar12 + lVar13 * 2;
                local_1b0 = lVar13;
                local_1a8 = lVar34;
                local_188 = pvVar24;
                if (*(longlong **)(lVar22 + 0x68) < plVar11) {
                  local_198 = puVar20;
                  FUN_140023dd8(puVar20,(int)lVar13 * 0x10 | 8);
                  plVar12 = (longlong *)(*local_198 + 7 & 0xfffffffffffffff8);
                  plVar11 = plVar12 + lVar13 * 2;
                  puVar20 = local_198;
                }
                *puVar20 = (ulonglong)plVar11;
                uVar27 = (undefined4)local_1b0;
                plVar11 = plVar12;
                pvVar24 = local_188;
                lVar34 = local_1a8;
                if (0 < (int)plVar38[6]) {
                  lVar13 = 0;
                  lVar22 = 0;
                  do {
                    uVar17 = ((undefined8 *)(plVar38[5] + lVar13))[1];
                    *(undefined8 *)((longlong)plVar12 + lVar13) =
                         *(undefined8 *)(plVar38[5] + lVar13);
                    ((undefined8 *)((longlong)plVar12 + lVar13))[1] = uVar17;
                    lVar22 = lVar22 + 1;
                    lVar13 = lVar13 + 0x10;
                  } while (lVar22 < (int)plVar38[6]);
                  plVar11 = (longlong *)(lVar13 + (longlong)plVar12);
                }
              }
              *plVar11 = lVar28;
              *(ushort *)(plVar11 + 1) = uVar2;
              *(undefined1 *)((longlong)plVar11 + 10) = 4;
              plVar38[5] = (longlong)plVar12;
              *(undefined4 *)(plVar38 + 6) = uVar27;
              *(longlong *)(puVar35 + (ulonglong)uVar2 * 2 + 2) = lVar28;
              uVar31 = (uint)uVar2;
              if ((int)(uint)uVar2 < (int)*puVar35) {
                uVar31 = *puVar35;
              }
              *puVar35 = uVar31;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 != lVar34);
          iVar8 = (int)puVar3[1];
        }
        uVar30 = puVar3[2];
        if ((uVar30 & 1) != 0) {
          uVar30 = (longlong)puVar3 + ((longlong)uVar30 >> 0x18) + 0x10;
        }
        iVar9 = (int)puVar3[3];
        if (0 < (longlong)iVar9) {
          lVar34 = 0;
          do {
            local_13c = *(undefined4 *)(uVar30 + lVar34 * 4);
            FUN_14723b559(plVar38,&local_13c,
                          *(undefined8 *)
                           ((longlong)pvVar24 + lVar34 * 8 + (ulonglong)(uint)(iVar8 << 3)));
            lVar34 = lVar34 + 1;
          } while (iVar9 != lVar34);
          iVar8 = (int)puVar3[1];
          iVar9 = (int)puVar3[3];
        }
        uVar31 = (uint)puVar3[5];
        uVar30 = puVar3[4];
        if ((uVar30 & 1) != 0) {
          uVar30 = (longlong)puVar3 + ((longlong)uVar30 >> 0x18) + 0x20;
        }
        pvVar33 = pvVar24;
        if ((ulonglong)uVar31 != 0) {
          local_1a8 = (ulonglong)(uint)((iVar8 + iVar9) * 8) + (longlong)pvVar24;
          uVar32 = 0;
          local_188 = pvVar24;
          do {
            local_13c = *(undefined4 *)(uVar30 + uVar32 * 4);
            if ((*(byte *)((longlong)pvVar24 +
                          (uVar32 >> 3 & 0x1fffffff) + (ulonglong)((uVar31 + iVar8 + iVar9) * 8)) >>
                 ((uint)uVar32 & 7) & 1) == 0) {
              FUN_14723b659();
            }
            else {
              FUN_14723b5d9(plVar38,&local_13c,*(undefined8 *)(local_1a8 + uVar32 * 8));
            }
            uVar32 = uVar32 + 1;
            pvVar33 = local_188;
          } while (uVar31 != uVar32);
        }
        puVar37 = (undefined2 *)puVar3[6];
        puVar36 = (undefined2 *)((longlong)puVar3 + ((longlong)puVar37 >> 0x18) + 0x30);
        if (((ulonglong)puVar37 & 1) == 0) {
          puVar36 = puVar37;
        }
        pvVar24 = local_1b8;
        param_1 = local_180;
        if ((longlong)(int)puVar3[7] != 0) {
          iVar8 = (int)puVar3[5];
          iVar9 = iVar8 + 0xe;
          if (-1 < iVar8 + 7) {
            iVar9 = iVar8 + 7;
          }
          local_170 = puVar36 + (longlong)(int)puVar3[7] * 0xc;
          pvVar33 = (void *)((longlong)pvVar33 +
                            (ulonglong)
                            (uint)((iVar9 >> 3) + ((int)puVar3[3] + iVar8 + (int)puVar3[1]) * 8));
          do {
            puVar37 = *(undefined2 **)(puVar36 + 4);
            if (((ulonglong)puVar37 & 1) != 0) {
              puVar37 = (undefined2 *)((longlong)puVar36 + ((longlong)puVar37 >> 0x18) + 8);
            }
            if ((longlong)*(int *)(puVar36 + 8) != 0) {
              local_168 = puVar37 + (longlong)*(int *)(puVar36 + 8) * 2;
              do {
                local_1b0 = CONCAT62(local_1b0._2_6_,*puVar37);
                uVar2 = puVar37[1];
                local_1a8 = CONCAT62(local_1a8._2_6_,uVar2);
                uVar25 = (ulonglong)uVar2;
                local_19a = *puVar36;
                uVar31 = *(uint *)(plVar38 + 2);
                local_198 = (ulonglong *)(ulonglong)uVar31;
                iVar8 = uVar31 + uVar2;
                lVar34 = *plVar38;
                puVar3 = (ulonglong *)(lVar34 + 0x10);
                pvVar24 = *(void **)(lVar34 + 0x10);
                uVar32 = *(ulonglong *)(lVar34 + 0x18);
                uVar30 = (longlong)pvVar24 + uVar25;
                if (uVar31 == 0) {
                  if (uVar32 < uVar30) {
                    FUN_140023dd8(puVar3,uVar2 + 1);
                    pvVar24 = (void *)*puVar3;
                    uVar30 = (longlong)pvVar24 + uVar25;
                  }
                  *puVar3 = uVar30;
                  pvVar21 = pvVar24;
                }
                else if (uVar32 < uVar30) {
                  uVar30 = (longlong)pvVar24 + (longlong)iVar8;
                  pvVar21 = pvVar24;
                  local_188 = pvVar33;
                  local_178 = puVar3;
                  if (uVar32 < uVar30) {
                    FUN_140023dd8(puVar3,iVar8 + 1);
                    pvVar21 = (void *)*puVar3;
                    uVar30 = (longlong)iVar8 + (longlong)pvVar21;
                  }
                  *local_178 = uVar30;
                  memcpy(pvVar21,(void *)plVar38[1],(longlong)(int)plVar38[2]);
                  pvVar24 = (void *)((longlong)(int)plVar38[2] + (longlong)pvVar21);
                  pvVar33 = local_188;
                  param_1 = local_180;
                }
                else {
                  pvVar21 = (void *)plVar38[1];
                  *puVar3 = uVar30;
                }
                memcpy(pvVar24,pvVar33,uVar25);
                pvVar24 = local_1b8;
                plVar38[1] = (longlong)pvVar21;
                *(int *)(plVar38 + 2) = iVar8;
                lVar26 = *plVar38;
                puVar3 = (ulonglong *)(lVar26 + 0x38);
                lVar34 = (longlong)(int)plVar38[4] + 1;
                puVar15 = *(undefined8 **)(lVar26 + 0x38);
                if ((longlong)(int)plVar38[4] == 0) {
                  puVar15 = (undefined8 *)((longlong)puVar15 + 1U & 0xfffffffffffffffe);
                  puVar10 = puVar15 + 1;
                  puVar16 = puVar15;
                  if (*(undefined8 **)(lVar26 + 0x40) < puVar10) {
                    FUN_140023dd8(puVar3,10);
                    puVar15 = (undefined8 *)(*puVar3 + 1 & 0xfffffffffffffffe);
                    puVar10 = puVar15 + 1;
                    puVar16 = puVar15;
                  }
LAB_140063acc:
                  *puVar3 = (ulonglong)puVar10;
                }
                else {
                  puVar10 = puVar15 + 1;
                  if (puVar10 <= *(undefined8 **)(lVar26 + 0x40)) {
                    puVar16 = (undefined8 *)plVar38[3];
                    goto LAB_140063acc;
                  }
                  puVar16 = (undefined8 *)((longlong)puVar15 + 1U & 0xfffffffffffffffe);
                  puVar15 = puVar16 + lVar34;
                  if (*(undefined8 **)(lVar26 + 0x40) < puVar15) {
                    FUN_140023dd8(puVar3);
                    puVar16 = (undefined8 *)(*puVar3 + 1 & 0xfffffffffffffffe);
                    puVar15 = puVar16 + lVar34;
                  }
                  *puVar3 = (ulonglong)puVar15;
                  puVar15 = puVar16;
                  pvVar24 = local_1b8;
                  param_1 = local_180;
                  if (0 < (int)plVar38[4]) {
                    lVar26 = 0;
                    do {
                      *puVar15 = *(undefined8 *)(plVar38[3] + lVar26 * 8);
                      lVar26 = lVar26 + 1;
                      puVar15 = puVar15 + 1;
                    } while (lVar26 < (int)plVar38[4]);
                  }
                }
                *(undefined2 *)puVar15 = local_19a;
                *(undefined2 *)((longlong)puVar15 + 2) = (undefined2)local_1b0;
                *(short *)((longlong)puVar15 + 4) = (short)local_198;
                *(undefined2 *)((longlong)puVar15 + 6) = (undefined2)local_1a8;
                plVar38[3] = (longlong)puVar16;
                *(int *)(plVar38 + 4) = (int)lVar34;
                pvVar33 = (void *)((longlong)pvVar33 + (ulonglong)(ushort)puVar37[1]);
                puVar37 = puVar37 + 2;
              } while (puVar37 != local_168);
            }
            puVar36 = puVar36 + 0xc;
          } while (puVar36 != local_170);
        }
        iVar8 = (int)plVar38[6] + (int)plVar38[4];
        iVar9 = iVar8 + (int)plVar38[8];
        uVar30 = local_128;
        param_6 = local_190;
        if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar38[8]) == iVar9 < 0) goto LAB_14006332f;
      }
      else if ((local_15c & 0xff) == 4) {
        plVar38 = (longlong *)FUN_144821ef4(param_5);
        FUN_14723afba(plVar38,&local_150,puVar35);
        iVar8 = (int)plVar38[6] + (int)plVar38[4];
        iVar9 = iVar8 + (int)plVar38[8];
        uVar30 = uStack_110;
        if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar38[8]) == iVar9 < 0) goto LAB_14006332f;
      }
      lVar34 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar34 = param_1;
      }
      lVar34 = *(longlong *)(lVar34 + local_158 * 8);
      iVar8 = *(int *)(lVar34 + 0x28);
      uVar32 = *(ulonglong *)(lVar34 + 0x30);
      if ((uVar32 & 1) != 0) {
        uVar32 = ((longlong)uVar32 >> 0x18) + lVar34 + 0x30;
      }
      iVar9 = 0;
      uVar30 = (ulonglong)local_15c;
      if ((longlong)*(int *)(lVar34 + 0x38) != 0) {
        lVar26 = 0;
        iVar9 = 0;
        do {
          iVar9 = iVar9 + (uint)*(ushort *)(uVar32 + 2 + lVar26);
          lVar26 = lVar26 + 0x18;
        } while ((longlong)*(int *)(lVar34 + 0x38) * 0x18 != lVar26);
      }
      iVar19 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar19 = iVar8 + 7;
      }
      pvVar24 = (void *)((longlong)pvVar24 +
                        (ulonglong)
                        ((iVar19 >> 3) +
                         (*(int *)(lVar34 + 0x18) + *(int *)(lVar34 + 8) + iVar8) * 8 + iVar9 + 7U &
                        0xfffffff8));
      lVar34 = local_158 + 1;
    } while (lVar34 < *(int *)(param_1 + 0x18));
  }
  uVar17 = 1;
LAB_140064064:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 140064110 FUN_140064110 body=469 status=ok
// SIG undefined FUN_140064110(void)

void FUN_140064110(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140064240:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14006427d:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14006417a;
LAB_14006416f:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14006417a:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x0001400641a7;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400641fd:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14006427d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140064240;
code_r0x0001400641a7:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400641fd;
    }
  }
  goto LAB_14006416f;
}



// FUNCTION 1400642e6 FUN_1400642e6 body=14 status=ok
// SIG undefined FUN_1400642e6(void)

void FUN_1400642e6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400648aa();
    return;
  }
  return;
}



// FUNCTION 1400642f4 FUN_1400642f4 body=26 status=ok
// SIG undefined FUN_1400642f4(void)

void FUN_1400642f4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400b099e(param_1,*(undefined4 *)(param_1 + 8),param_2,4);
    return;
  }
  return;
}



// FUNCTION 14006430e FUN_14006430e body=26 status=ok
// SIG undefined FUN_14006430e(void)

void FUN_14006430e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400b07c8(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 140064328 FUN_140064328 body=469 status=ok
// SIG undefined FUN_140064328(void)

void FUN_140064328(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140064458:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140064495:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140064392;
LAB_140064387:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140064392:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x0001400643bf;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140064415:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140064495;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140064458;
code_r0x0001400643bf:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140064415;
    }
  }
  goto LAB_140064387;
}



// FUNCTION 1400644fe FUN_1400644fe body=469 status=ok
// SIG undefined FUN_1400644fe(void)

void FUN_1400644fe(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14006462e:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14006466b:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140064568;
LAB_14006455d:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140064568:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x000140064595;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400645eb:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14006466b;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14006462e;
code_r0x000140064595:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400645eb;
    }
  }
  goto LAB_14006455d;
}



// FUNCTION 1400646d4 FUN_1400646d4 body=469 status=ok
// SIG undefined FUN_1400646d4(void)

void FUN_1400646d4(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140064804:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140064841:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14006473e;
LAB_140064733:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14006473e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014006476b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400647c1:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140064841;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140064804;
code_r0x00014006476b:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400647c1;
    }
  }
  goto LAB_140064733;
}



// FUNCTION 1400648aa FUN_1400648aa body=453 status=ok
// SIG undefined FUN_1400648aa(void)

void FUN_1400648aa(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x28);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400649c8:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140064a05:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x28;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140064903;
LAB_1400648f8:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140064903:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x665) goto code_r0x00014006492f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 10 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140064985:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140064a05;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400649c8;
code_r0x00014006492f:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140064985;
    }
  }
  goto LAB_1400648f8;
}



// FUNCTION 140064a70 FUN_140064a70 body=38 status=ok
// SIG undefined FUN_140064a70(void)

undefined8 FUN_140064a70(undefined8 param_1,int param_2)

{
  FUN_140064a96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140064a96 FUN_140064a96 body=405 status=ok
// SIG undefined FUN_140064a96(void)

void FUN_140064a96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14aa62910;
  plVar4 = param_1 + 0x6a;
  plVar6 = (longlong *)param_1[0x11a];
  if ((longlong *)param_1[0x11a] == (longlong *)0x0) {
    plVar6 = plVar4;
  }
  if ((longlong)*(int *)(param_1 + 0x11b) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x11b) * 0xb0;
    do {
      (**(code **)(*plVar6 + 0x20))(plVar6);
      plVar6 = plVar6 + 0x16;
      lVar7 = lVar7 + -0xb0;
    } while (lVar7 != 0);
  }
  FUN_140064cbc(plVar4,0);
  FUN_140064c2b(param_1[0x122],*(undefined4 *)(param_1 + 0x123));
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_1[0x121];
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
  FUN_140064c53(param_1[0x11d],*(undefined4 *)(param_1 + 0x11e));
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  FUN_140064c7e(plVar4);
  param_1[0x59] = &PTR_FUN_14aa62b68;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x59] = &PTR_LAB_14a3d46d0;
  if (param_1[0x5e] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x5e] + 8);
    uVar5 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_LAB_14a418080;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 140064c2b FUN_140064c2b body=40 status=ok
// SIG undefined FUN_140064c2b(void)

void FUN_140064c2b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147cd4270(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 140064c53 FUN_140064c53 body=43 status=ok
// SIG undefined FUN_140064c53(void)

void FUN_140064c53(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1446fc232(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 140064c7e FUN_140064c7e body=61 status=ok
// SIG undefined FUN_140064c7e(void)

void FUN_140064c7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x580);
  if (*(longlong *)(param_1 + 0x580) == 0) {
    lVar1 = param_1;
  }
  FUN_144757cfa(lVar1,*(undefined4 *)(param_1 + 0x588));
  if (*(longlong *)(param_1 + 0x580) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140064cbc FUN_140064cbc body=89 status=ok
// SIG undefined FUN_140064cbc(void)

void FUN_140064cbc(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x580);
  if (*(longlong *)(param_1 + 0x580) == 0) {
    lVar1 = param_1;
  }
  FUN_144757cfa(lVar1,*(undefined4 *)(param_1 + 0x588));
  *(undefined4 *)(param_1 + 0x588) = 0;
  if (*(int *)(param_1 + 0x58c) != param_2) {
    FUN_140064d16(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140064d16 FUN_140064d16 body=126 status=ok
// SIG undefined FUN_140064d16(void)

void FUN_140064d16(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 8, 8 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xb0,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x58c)) {
    return;
  }
  *(int *)(param_1 + 0x58c) = (int)uVar2;
  FUN_140064d94(param_1,*(undefined4 *)(param_1 + 0x588),uVar2,0xb0);
  return;
}



// FUNCTION 140064d94 FUN_140064d94 body=151 status=ok
// SIG undefined FUN_140064d94(void)

void FUN_140064d94(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x580);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xb0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x580,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x580),param_1,(longlong)param_2 * 0xb0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x580,param_2,param_3,param_4);
  return;
}



// FUNCTION 140064e2c FUN_140064e2c body=270 status=ok
// SIG undefined FUN_140064e2c(void)

void FUN_140064e2c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14aa535f0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x4a];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140064f3a FUN_140064f3a body=44 status=ok
// SIG undefined FUN_140064f3a(void)

longlong FUN_140064f3a(longlong param_1,int param_2)

{
  FUN_140064f66(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140064f66 FUN_140064f66 body=228 status=ok
// SIG undefined FUN_140064f66(void)

void FUN_140064f66(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1400651cc(param_1 + 0xb0);
  FUN_14006504a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  FUN_140065230(param_1 + 0xa0);
  FUN_140065070(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  FUN_140065294(param_1 + 0x90);
  FUN_1400200e4(param_1 + 0x80);
  FUN_1400201ac(param_1 + 0x70);
  FUN_1400200e4(param_1 + 0x60);
  FUN_140020210(param_1 + 0x50);
  FUN_1400200e4(param_1 + 0x40);
  FUN_140020274(param_1 + 0x30);
  FUN_140020148(param_1 + 0x20);
  FUN_140065168(param_1 + 0x10);
  FUN_140065168(param_1);
  return;
}



// FUNCTION 14006504a FUN_14006504a body=38 status=ok
// SIG undefined FUN_14006504a(void)

void FUN_14006504a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400200e4(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 140065070 FUN_140065070 body=47 status=ok
// SIG undefined FUN_140065070(void)

void FUN_140065070(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400650a0(param_1 + 0x10);
    FUN_140065104(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1400650a0 FUN_1400650a0 body=99 status=ok
// SIG undefined FUN_1400650a0(void)

void FUN_1400650a0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140065104 FUN_140065104 body=99 status=ok
// SIG undefined FUN_140065104(void)

void FUN_140065104(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140065168 FUN_140065168 body=99 status=ok
// SIG undefined FUN_140065168(void)

void FUN_140065168(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400651cc FUN_1400651cc body=99 status=ok
// SIG undefined FUN_1400651cc(void)

void FUN_1400651cc(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140065230 FUN_140065230 body=99 status=ok
// SIG undefined FUN_140065230(void)

void FUN_140065230(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140065294 FUN_140065294 body=99 status=ok
// SIG undefined FUN_140065294(void)

void FUN_140065294(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400652f7 FUN_1400652f7 body=82 status=ok
// SIG undefined FUN_1400652f7(void)

void FUN_1400652f7(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  
  if ((longlong *)*param_2 == (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  else {
    plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))();
    param_3 = param_2;
  }
  pwVar2 = L"External";
  if ((wchar_t *)*plVar1 != (wchar_t *)0x0) {
    pwVar2 = (wchar_t *)*plVar1;
  }
  FUN_14476842e(param_1,param_3,pwVar2,0);
  return;
}



// FUNCTION 14006534a FUN_14006534a body=12 status=ok
// SIG undefined FUN_14006534a(void)

void FUN_14006534a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140065353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140065356 FUN_140065356 body=31 status=ok
// SIG undefined FUN_140065356(void)

undefined8 FUN_140065356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140065376 FUN_140065376 body=32 status=ok
// SIG undefined FUN_140065376(void)

longlong FUN_140065376(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x3f0))();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x270;
  }
  return lVar1;
}



// FUNCTION 140065396 FUN_140065396 body=62 status=ok
// SIG undefined FUN_140065396(void)

longlong FUN_140065396(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return param_1 + 8;
}



// FUNCTION 1400653da FUN_1400653da body=57 status=ok
// SIG undefined FUN_1400653da(void)

void FUN_1400653da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a7e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a7e0 = FUN_140002ddd(FUN_1464cae96,uVar1,L"GbxBodyNodeState_SceneComponent");
  }
  return;
}



// FUNCTION 140065414 FUN_140065414 body=158 status=ok
// SIG undefined FUN_140065414(void)

void FUN_140065414(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447584e6(param_1[2],param_1[1]);
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140065a98(param_1[2],local_28);
  FUN_144758090(*param_1,param_1[2]);
  FUN_14473bfcc(DAT_14ca77418,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400654b4 FUN_1400654b4 body=897 status=ok
// SIG undefined FUN_1400654b4(void)

void FUN_1400654b4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint *puVar13;
  uint *puVar14;
  longlong lVar15;
  PSRWLOCK SRWLock;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_80;
  PSRWLOCK local_78;
  undefined1 local_6c [4];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_2 + 1) != 0) {
    SRWLock = (PSRWLOCK)(param_1 + 7);
    AcquireSRWLockExclusive(SRWLock);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar13 = (uint *)*param_2;
      puVar14 = puVar13 + (longlong)*(int *)(param_2 + 1) * 0x54;
      local_80 = 0;
      local_78 = SRWLock;
      do {
        plVar9 = (longlong *)param_1[5];
        if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
          uVar8 = *puVar13;
          uVar5 = FUN_1447addd0(puVar13 + 1,uVar8 * 2);
          plVar12 = plVar9 + 7;
          if ((longlong *)plVar9[8] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar9[8];
          }
          iVar6 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            lVar3 = *plVar9;
            do {
              lVar15 = (longlong)iVar6 * 0x158;
              if ((*(uint *)(lVar3 + lVar15) == uVar8) &&
                 (iVar6 = memcmp((void *)(lVar3 + lVar15 + 4),puVar13 + 1,(ulonglong)uVar8 * 2),
                 iVar6 == 0)) goto LAB_1400657a9;
              iVar6 = *(int *)(lVar3 + 0x150 + lVar15);
            } while (iVar6 != -1);
          }
        }
        uVar8 = *puVar13;
        uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
        if ((uVar8 == 0) || ((uVar8 <= uVar5 && (uVar8 + (int)param_1[3] <= uVar5)))) {
          if ((local_80 & 1) == 0) {
            lVar3 = param_1[5];
            plVar9 = (longlong *)FUN_14001cc68(0x60,0x10);
            plVar9[1] = (longlong)&DAT_100000001;
            *plVar9 = (longlong)&PTR_FUN_14a34c3a0;
            plVar9[6] = 0;
            *(undefined4 *)(plVar9 + 7) = 0;
            plVar9[2] = 0;
            plVar9[3] = 0;
            *(undefined8 *)((longlong)plVar9 + 0x3c) = 0xffffffff00000080;
            *(undefined4 *)((longlong)plVar9 + 0x44) = 0;
            plVar9[10] = 0;
            *(undefined4 *)(plVar9 + 0xb) = 0;
            uVar10 = FUN_140e4bae4(plVar9 + 2,lVar3);
            if (plVar9 == (longlong *)0x0) {
              param_1[5] = 0x10;
              plVar12 = (longlong *)param_1[6];
              if (plVar12 != (longlong *)0x0) {
                param_1[6] = 0;
LAB_140065677:
                LOCK();
                plVar1 = plVar12 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  uVar10 = (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
                if (plVar9 != (longlong *)0x0) goto LAB_1400656c9;
              }
              local_80 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
            }
            else {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              param_1[5] = (longlong)(plVar9 + 2);
              plVar12 = (longlong *)param_1[6];
              if (plVar9 == plVar12) {
                LOCK();
                plVar12 = plVar9 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  uVar10 = (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
              else {
                param_1[6] = (longlong)plVar9;
                if (plVar12 != (longlong *)0x0) goto LAB_140065677;
              }
LAB_1400656c9:
              LOCK();
              plVar12 = plVar9 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              local_80 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
              if ((int)*plVar12 == 0) {
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
          }
          uVar5 = *puVar13;
          uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
          iVar6 = (int)param_1[3];
          uVar8 = iVar6 + uVar5;
          if (((char)param_1[4] == '\x01') && (uVar7 < uVar8)) {
            *(uint *)((longlong)param_1 + 0x1c) = uVar5;
            (**(code **)(*param_1 + 0x10))();
            iVar6 = 0;
            uVar8 = uVar5;
          }
          *(uint *)(param_1 + 3) = uVar8;
          local_68 = (ulonglong)*(uint *)(param_1[2] + 0x38) * (longlong)iVar6 +
                     *(longlong *)(param_1[2] + 0x20);
          plVar9 = *(longlong **)(*(longlong *)(param_1[1] + 0x10) + 8);
          local_a0 = puVar13 + 0x12;
          local_a8 = *puVar13;
          local_90 = 1;
          local_98 = 0;
          (**(code **)(*plVar9 + 0xb8))(plVar9,1,&local_68,puVar13);
          *(ulonglong *)(puVar13 + 0x52) =
               (ulonglong)*(uint *)(param_1[2] + 0x38) * (longlong)iVar6 +
               *(longlong *)(param_1[2] + 0x28);
          FUN_140eb2614(param_1[5],local_6c,puVar13,0);
        }
LAB_1400657a9:
        SRWLock = local_78;
        puVar13 = puVar13 + 0x54;
      } while (puVar13 != puVar14);
      if ((local_80 & 1) != 0) {
        lVar3 = param_1[5];
        cVar4 = FUN_143169b56(lVar3);
        if (cVar4 != '\0') {
          uVar8 = *(int *)(lVar3 + 8) - *(int *)(lVar3 + 0x34);
          iVar6 = 1;
          if (3 < uVar8) {
            uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
            lVar15 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar6 = 1 << ((byte)lVar15 & 0x1f);
          }
          *(int *)(lVar3 + 0x48) = iVar6;
          FUN_140eb2bca(lVar3);
        }
      }
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140065836 FUN_140065836 body=444 status=ok
// SIG undefined FUN_140065836(void)

void FUN_140065836(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar6 = (undefined8 *)FUN_1400659f4(*(undefined8 *)(param_1 + 0x68));
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x18);
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar7 = 0;
    puVar7[1] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    puVar1 = (undefined8 *)(param_1 + 0x30);
    *(int *)(puVar7 + 2) = iVar3 + -1;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar1;
      *puVar1 = puVar7;
      *puVar8 = puVar7;
    }
    puVar8 = (undefined8 *)FUN_1400659f4(*(undefined8 *)(param_1 + 0x68));
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    if (puVar7 != puVar8) {
      *(undefined8 **)(param_1 + 0x48) = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
        UNLOCK();
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar7 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    if (**(longlong **)(param_1 + 0x38) != 0) {
      do {
        puVar8 = local_48;
        lVar4 = **(longlong **)(param_1 + 0x38);
        puVar7 = *(undefined8 **)(lVar4 + 8);
        puVar5 = local_48;
        if (local_48 != puVar7) {
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
            UNLOCK();
          }
          puVar5 = puVar7;
          if (local_48 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(local_48 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              puVar5 = (undefined8 *)*local_48;
              local_48 = puVar7;
              (*(code *)*puVar5)(puVar8,1);
              puVar5 = local_48;
            }
          }
        }
        local_48 = puVar5;
        local_40 = *(int *)(lVar4 + 0x10);
        if ((*(byte *)(local_48[5] + 0xa0) & 1) == 0) break;
        FUN_140039bb8(puVar1,&local_48);
        *(int *)(param_1 + 0x1c) = local_40 + 1;
      } while (**(longlong **)(param_1 + 0x38) != 0);
    }
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_48 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar6 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400659f4 FUN_1400659f4 body=163 status=ok
// SIG undefined FUN_1400659f4(void)

longlong FUN_1400659f4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x1b8);
  if (lVar4 == 0) {
    lVar4 = FUN_144ad3d06(0x30);
    FUN_144724502(lVar4,1);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined8 **)(param_1 + 0x1b8);
    *(longlong *)(param_1 + 0x1b8) = lVar4;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    iVar2 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
      FUN_14476c1d2(param_1 + 0x28,iVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8) = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      lVar4 = *(longlong *)(param_1 + 0x1b8);
    }
  }
  return lVar4;
}



// FUNCTION 140065a98 FUN_140065a98 body=1648 status=ok
// SIG undefined FUN_140065a98(void)

void FUN_140065a98(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (param_1[0x33] != 0) {
    if (*(code **)(*param_1 + 0x10) == FUN_141789166) {
      FUN_144758a76(param_1 + 0x6e8);
      FUN_14476cc36(param_1);
      *(undefined2 *)(param_1 + 0x6c0) = 0x101;
      *(undefined1 *)(param_1 + 0x165) = 1;
      *(undefined1 *)(param_1 + 0x79) = 1;
      *(undefined1 *)((longlong)param_1 + 0x3b4) = 1;
      if (*(int *)((longlong)param_1 + 0x96c) != 0) {
        *(undefined1 *)(param_1 + 0x76) = 1;
      }
      param_1[0x12e] = 0;
      param_1[0x12f] = 0;
      if (((int)param_1[0x15f] != 0) || (param_1[0x160] != 0)) {
        *(undefined1 *)((longlong)param_1 + 0x3b1) = 1;
      }
      if ((int)param_1[0x7c] != 0) {
        *(undefined1 *)((longlong)param_1 + 0x3b2) = 1;
      }
      if ((int)param_1[0x152] != 0) {
        *(undefined1 *)((longlong)param_1 + 0x3b3) = 1;
      }
      if (((((*(float *)(param_1 + 0x7a) != 1.0) || (NAN(*(float *)(param_1 + 0x7a)))) ||
           (*(float *)((longlong)param_1 + 0x3d4) != 1.0)) ||
          ((NAN(*(float *)((longlong)param_1 + 0x3d4)) || (*(float *)(param_1 + 0x7b) != 1.0)))) ||
         ((NAN(*(float *)(param_1 + 0x7b)) ||
          ((*(float *)((longlong)param_1 + 0x3dc) != 1.0 ||
           (NAN(*(float *)((longlong)param_1 + 0x3dc)))))))) {
        *(undefined1 *)((longlong)param_1 + 0x3b5) = 1;
      }
      if (*(int *)((longlong)param_1 + 0x3cc) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x3b6) = 1;
      }
      if ((((*(float *)(param_1 + 0x161) != 0.0) || (NAN(*(float *)(param_1 + 0x161)))) ||
          (*(float *)((longlong)param_1 + 0xb0c) != 1.0)) ||
         (NAN(*(float *)((longlong)param_1 + 0xb0c)))) {
        *(undefined1 *)((longlong)param_1 + 0x3b7) = DAT_14ca84e1e;
      }
      *(undefined1 *)(param_1 + 0x77) = DAT_14ca84f32;
      *(undefined1 *)((longlong)param_1 + 0x3b9) = DAT_14ca84f34;
      *(undefined4 *)(param_1 + 0x166) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb34) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x167) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb3c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb44) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb4c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x16a) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x16b) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb5c) = 0xffffffff;
      param_1[0x475] = -1;
      *(undefined4 *)(param_1 + 0x476) = 0xffffffff;
      param_1[0x537] = -1;
      *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5fc) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x2fe4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5fd) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x2fec) = 0xffffffff;
      param_1[0x5fe] = -1;
      *(undefined4 *)(param_1 + 0x7ae) = 0;
      if (*(int *)((longlong)param_1 + 0x3d74) == 1) {
        iVar7 = 0;
        uVar4 = 1;
      }
      else {
        FUN_14475fe8c(param_1 + 0x7ac,1);
        iVar7 = (int)param_1[0x7ae];
        uVar4 = *(uint *)((longlong)param_1 + 0x3d74);
      }
      *(uint *)(param_1 + 0x7ae) = iVar7 + 1U;
      if (uVar4 < iVar7 + 1U) {
        FUN_146f3c7b6(param_1 + 0x7ac);
      }
      plVar5 = param_1 + 0x7af;
      *(undefined4 *)(param_1 + 0x7b1) = 0;
      if (*(int *)((longlong)param_1 + 0x3d8c) == 1) {
        iVar7 = 0;
        uVar4 = 1;
      }
      else {
        FUN_14476002c(plVar5,1);
        iVar7 = (int)param_1[0x7b1];
        uVar4 = *(uint *)((longlong)param_1 + 0x3d8c);
      }
      *(uint *)(param_1 + 0x7b1) = iVar7 + 1U;
      if (uVar4 < iVar7 + 1U) {
        FUN_147138312(plVar5,iVar7);
      }
      if ((longlong *)param_1[0x7b0] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x7b0];
      }
      FUN_14471858a((longlong)plVar5 + (longlong)iVar7 * 4,1);
      *(undefined4 *)(param_1 + 0x7a5) = 0;
      if (*(int *)((longlong)param_1 + 0x3d2c) != 0) {
        FUN_14736f36c(param_1 + 0x7a4,0);
      }
      plVar5 = param_1 + 0x7a8;
      uVar4 = *(uint *)((longlong)param_1 + 0x3d54);
      iVar7 = 0;
      if ((int)uVar4 < 1) {
        *(undefined4 *)(param_1 + 0x7aa) = 0;
        FUN_1456bda22(plVar5,1);
        iVar7 = (int)param_1[0x7aa];
        uVar4 = *(uint *)((longlong)param_1 + 0x3d54);
      }
      *(uint *)(param_1 + 0x7aa) = iVar7 + 1U;
      if (uVar4 < iVar7 + 1U) {
        FUN_1400e0406(plVar5,iVar7);
      }
      if ((longlong *)param_1[0x7a9] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x7a9];
      }
      plVar5[iVar7] = -1;
      *(undefined4 *)(param_1 + 0x7ab) = 0;
      *(undefined4 *)(param_1 + 0x7a7) = 0;
      if (*(int *)((longlong)param_1 + 0x3d3c) != 0) {
        FUN_1446fb5ec(param_1 + 0x7a6,0);
      }
      param_1[0x7b2] = 0;
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  if ((int)param_1[4] != 0) {
    if ((int)param_1[0x36] == 0) {
      FUN_14471562a(param_1);
      *(undefined4 *)(param_1 + 0x38) = 0;
      plVar5 = (longlong *)((longlong)((int)param_1[0x36] + -1) * 8 + param_1[0x35]);
    }
    else {
      plVar5 = (longlong *)param_1[0x35];
    }
    FUN_14736c136(*plVar5 + 0x10,param_1 + 3);
    iVar7 = *(int *)((longlong)param_1 + 0x24);
    FUN_14476c499(param_1[3],(int)param_1[4]);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      FUN_147370096(param_1 + 3,0);
    }
  }
  uVar4 = *(uint *)(param_1 + 6);
  if (uVar4 == 0) goto LAB_140065d8c;
  iVar7 = (int)param_1[0x36];
  if ((iVar7 == 0) || (3 < (int)param_1[0x38])) {
    FUN_14471562a(param_1);
    uVar4 = *(uint *)(param_1 + 6);
    iVar7 = (int)param_1[0x36];
    *(undefined4 *)(param_1 + 0x38) = 3;
    uVar6 = 0;
    if (uVar4 != 0) goto LAB_140065ea1;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 3;
LAB_140065ea1:
    lVar2 = *(longlong *)((longlong)(iVar7 + -1) * 8 + param_1[0x35]);
    iVar7 = *(int *)(lVar2 + 0x248);
    *(uint *)(lVar2 + 0x248) = iVar7 + uVar4;
    if ((uint)(*(int *)(lVar2 + 0x24c) - iVar7) < uVar4) {
      FUN_14476c1d2((longlong *)(lVar2 + 0x240),iVar7);
    }
    FUN_14476c1ac((longlong)iVar7 * 8 + *(longlong *)(lVar2 + 0x240),param_1[5],uVar4);
    uVar6 = (undefined4)param_1[6];
  }
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  FUN_14476c499(param_1[5],uVar6);
  *(undefined4 *)(param_1 + 6) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
    FUN_147370096(param_1 + 5,0);
  }
LAB_140065d8c:
  if (param_1[0x34] != 0) {
    iVar7 = (int)param_1[0x36];
    if ((iVar7 == 0) || (3 < (int)param_1[0x38])) {
      FUN_14471562a(param_1);
      iVar7 = (int)param_1[0x36];
    }
    *(undefined4 *)(param_1 + 0x38) = 3;
    lVar2 = *(longlong *)(param_1[0x35] + (longlong)(iVar7 + -1) * 8);
    iVar7 = *(int *)(lVar2 + 0x288);
    *(uint *)(lVar2 + 0x288) = iVar7 + 1U;
    if (*(uint *)(lVar2 + 0x28c) < iVar7 + 1U) {
      FUN_14476c338((longlong *)(lVar2 + 0x280),iVar7);
    }
    *(longlong *)(*(longlong *)(lVar2 + 0x280) + (longlong)iVar7 * 8) = param_1[0x34];
    param_1[0x34] = 0;
  }
  puVar3 = (undefined8 *)param_1[0x37];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0x37] = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x36);
  if ((longlong)(int)uVar4 != 0) {
    iVar7 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar7 + uVar4;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar7) < uVar4) {
      FUN_1447183c0(param_2,iVar7);
    }
    memmove((void *)((longlong)iVar7 * 8 + *param_2),(void *)param_1[0x35],(longlong)(int)uVar4 << 3
           );
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  return;
}



// FUNCTION 140066108 FUN_140066108 body=54 status=ok
// SIG undefined FUN_140066108(void)

longlong FUN_140066108(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006613e FUN_14006613e body=38 status=ok
// SIG undefined FUN_14006613e(void)

undefined8 FUN_14006613e(undefined8 param_1,int param_2)

{
  FUN_140066164();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140066164 FUN_140066164 body=80 status=ok
// SIG undefined FUN_140066164(void)

void FUN_140066164(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aaf7400;
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x2a0);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_144734080(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1400661b4 FUN_1400661b4 body=85 status=ok
// SIG undefined FUN_1400661b4(void)

undefined8 * FUN_1400661b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aaf7430;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 14006620a FUN_14006620a body=108 status=ok
// SIG undefined FUN_14006620a(void)

undefined8 * FUN_14006620a(undefined8 *param_1,void *param_2,uint param_3)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_3) {
    FUN_1446f8c06(param_1,param_3 + 1);
    iVar1 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar1 + param_3 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) <= param_3) {
      FUN_144a2dbb8(param_1);
    }
    _Dst = (void *)*param_1;
    memcpy(_Dst,param_2,(ulonglong)(param_3 * 2));
    *(undefined2 *)((longlong)_Dst + (ulonglong)param_3 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 14006627a FUN_14006627a body=1480 status=ok
// SIG undefined FUN_14006627a(void)

int * FUN_14006627a(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_140549c28(param_1,iVar21);
    }
    iVar24 = (int)param_1[5];
    if (iVar24 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar8 = iVar24 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar13 = iVar24 + 1;
    iVar17 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar17 = iVar24;
    }
    if (iVar17 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar24) {
        if (iVar24 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar8 = iVar24;
        }
        else {
          uVar16 = iVar24 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar16) {
              uVar15 = uVar16;
            }
          }
          else {
            uVar15 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar15 << 2,0);
          iVar8 = (int)(uVar10 >> 2);
          iVar13 = -0x20;
          if ((int)uVar16 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar11,iVar8);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar8 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar11;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar24 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar9 = (longlong)iVar21;
    iVar24 = *(int *)(*param_1 + 4 + lVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar24;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar24 * 0x28) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar14 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar14 = puVar1;
  }
  iVar24 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar24 = iVar21;
  }
  puVar14[iVar24 >> 5] = puVar14[iVar24 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  uVar16 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar9 * 0x28);
  uVar10 = *(ulonglong *)*param_3;
  *puVar2 = uVar10;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  uVar15 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  uVar15 = uVar15 >> 0x10 ^ uVar15;
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar22) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar24 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
    if (iVar24 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar24 * 0x28);
        if (*puVar3 == uVar10) {
          uVar10 = *puVar2;
          uVar4 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar20 = puVar2[1];
          uVar5 = *(undefined4 *)((longlong)puVar2 + 0xc);
          uVar6 = *(undefined4 *)((longlong)puVar2 + 0x14);
          uVar25 = puVar2[3];
          uVar7 = *(undefined4 *)((longlong)puVar2 + 0x1c);
          *(int *)(puVar3 + 2) = (int)puVar2[2];
          *(undefined4 *)((longlong)puVar3 + 0x14) = uVar6;
          *(int *)(puVar3 + 3) = (int)uVar25;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar7;
          *(int *)puVar3 = (int)uVar10;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
          *(int *)(puVar3 + 1) = (int)uVar20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
          FUN_1489e6cee(param_1,iVar21);
          iVar21 = iVar24;
          goto LAB_140066622;
        }
        iVar24 = (int)puVar3[4];
      } while (iVar24 != -1);
    }
  }
  if (3 < uVar22) {
    uVar10 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar9 & 0x1f);
  }
  if (((int)uVar22 < 1) || ((int)uVar16 <= (int)param_1[9])) {
    uVar15 = (int)param_1[9] - 1U & uVar15;
    *(uint *)((longlong)puVar2 + 0x24) = uVar15;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 4) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar21;
    goto LAB_140066622;
  }
  *(uint *)(param_1 + 9) = uVar16;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar16 = *(uint *)(param_1 + 9);
  }
  plVar19 = param_1 + 7;
  if (uVar16 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_140066447:
    uVar15 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar19;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar15) * 4) =
           0xffffffff;
      uVar15 = uVar15 + 1;
    } while (uVar16 != uVar15);
  }
  else {
    if (uVar16 == 0) goto LAB_140066622;
    FUN_1446efa72(plVar11,0,uVar16,4);
    if (0 < (int)uVar16) goto LAB_140066447;
  }
  iVar24 = (int)param_1[5];
  if (iVar24 == 0) {
    uVar10 = 0;
    uVar20 = 1;
    iVar8 = 0;
    iVar13 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = *puVar14;
    if (uVar16 == 0) {
      iVar8 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar8 = iVar24 + -1;
      }
      uVar10 = 0;
      uVar20 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar20 = uVar10;
      }
      iVar13 = 0;
      do {
        if (uVar20 == uVar10) goto LAB_140066622;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar14[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar10 = 0;
      iVar13 = 0;
    }
    uVar20 = (ulonglong)(-uVar16 & uVar16);
    uVar25 = uVar20 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar24 <= iVar8) {
      iVar8 = iVar24;
    }
  }
  if (iVar8 < iVar24) {
    uVar16 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar23 = (longlong)iVar8;
      uVar25 = *(ulonglong *)(lVar9 + lVar23 * 0x28);
      uVar15 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      uVar25 = (longlong)(int)(uVar15 >> 0x10 ^ uVar15) & (longlong)(int)param_1[9] - 1U;
      iVar24 = (int)uVar25;
      *(int *)(lVar9 + 0x24 + lVar23 * 0x28) = iVar24;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar19;
      }
      *(undefined4 *)(lVar9 + 0x20 + lVar23 * 0x28) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar25) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar19;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar24 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
      uVar16 = ~(uint)uVar20 & uVar16;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puVar1;
      }
      iVar24 = (int)param_1[5];
      iVar8 = (int)uVar10;
      lVar9 = (longlong)iVar8;
      uVar15 = puVar14[lVar9] & uVar16;
      if (uVar15 == 0) {
        iVar17 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar17 = iVar24 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar18 = iVar17;
        if (iVar17 < iVar8) {
          iVar18 = iVar8;
        }
        if (iVar17 <= iVar8) break;
        lVar23 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar15 = puVar14[lVar9 + lVar23 + 1];
          if (uVar15 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar18 - lVar9 == lVar23) goto LAB_140066622;
        }
        uVar10 = (ulonglong)(iVar8 + (int)lVar23 + 1);
        uVar16 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar15 & uVar15);
      uVar25 = uVar20 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar24);
  }
LAB_140066622:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 140066842 FUN_140066842 body=532 status=ok
// SIG undefined FUN_140066842(void)

void FUN_140066842(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  size_t sVar4;
  longlong *plVar5;
  wchar_t *_Str;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined8 local_e0 [16];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  for (local_f8 = param_2; local_f8 != (longlong *)0x0;
      local_f8 = (longlong *)(**(code **)(*local_f8 + 0x2b0))(local_f8)) {
    for (local_f0 = local_f8[9]; local_f0 != 0; local_f0 = *(longlong *)(local_f0 + 0x28)) {
      if ((*(byte *)(*(longlong *)(local_f0 + 0x10) + 0xda) & 8) != 0) goto LAB_140066894;
    }
  }
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
LAB_140066894:
  local_e8 = 0xffffffff;
  local_e4 = 0x101;
  local_e2 = 0;
  if (local_f0 != 0) {
    do {
      lVar1 = local_f0;
      if (((DAT_14cb91060 == 0) || (DAT_14cb91058 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*DAT_14cb91058 + 0x30))(), cVar2 == '\0')) {
LAB_140066986:
        local_e0[0] = *(undefined8 *)(lVar1 + 0x18);
        FUN_1400021e4(local_e0,local_108);
        pvVar3 = cohtml::IEventHandler::operator_new(0x30);
        FUN_1489ea0b2(pvVar3,lVar1);
        if (*(int *)((longlong)pvVar3 + 0x10) == 0) {
          _Str = L"";
LAB_1400669cc:
          local_60 = 0;
          sVar4 = wcslen(_Str);
          FUN_1446fe5a4(local_e0,_Str,sVar4 & 0xffffffff,1);
        }
        else {
          _Str = *(wchar_t **)((longlong)pvVar3 + 8);
          local_60 = 0;
          if (_Str != (wchar_t *)0x0) goto LAB_1400669cc;
          local_58 = 0;
          local_50 = 0;
        }
        (**(code **)(*param_1 + 0x20))(param_1,local_58,pvVar3);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        plVar5 = DAT_14cb91058;
        if (DAT_14cb91060 == 0) {
          plVar5 = (longlong *)0x0;
        }
        cVar2 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2,lVar1);
        if (cVar2 == '\0') goto LAB_140066986;
      }
      local_f0 = *(longlong *)(local_f0 + 0x28);
      FUN_14164c386(&local_f8);
    } while (local_f0 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140066a57 FUN_140066a57 body=250 status=ok
// SIG undefined FUN_140066a57(void)

bool FUN_140066a57(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    uVar1 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar1,FUN_14067a048);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (DAT_14c951cd8 == 0) {
    bVar3 = puVar2 != (undefined8 *)0x0;
    if (puVar2 != &DAT_14c951cd0 && bVar3) {
      do {
        puVar2 = (undefined8 *)puVar2[6];
        bVar3 = puVar2 != (undefined8 *)0x0;
        if (puVar2 == &DAT_14c951cd0) {
          return bVar3;
        }
      } while (puVar2 != (undefined8 *)0x0);
    }
  }
  else {
    bVar3 = (puVar2[3] & DAT_14c951cd8) != 0;
  }
  return bVar3;
}



// FUNCTION 140066b51 FUN_140066b51 body=102 status=ok
// SIG undefined FUN_140066b51(void)

undefined8 * FUN_140066b51(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455b90;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 140066bb7 FUN_140066bb7 body=257 status=ok
// SIG undefined FUN_140066bb7(void)

bool FUN_140066bb7(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2);
    atexit(FUN_142816fad);
    _Init_thread_footer(&DAT_14c952210);
  }
  if (DAT_14c9521c8 == 0) {
    bVar2 = puVar1 != (undefined8 *)0x0;
    if (puVar1 != &DAT_14c9521c0 && bVar2) {
      do {
        puVar1 = (undefined8 *)puVar1[6];
        bVar2 = puVar1 != (undefined8 *)0x0;
        if (puVar1 == &DAT_14c9521c0) {
          return bVar2;
        }
      } while (puVar1 != (undefined8 *)0x0);
    }
  }
  else {
    bVar2 = (puVar1[3] & DAT_14c9521c8) != 0;
  }
  return bVar2;
}



// FUNCTION 140066cb8 FUN_140066cb8 body=114 status=ok
// SIG undefined FUN_140066cb8(void)

Property * FUN_140066cb8(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455b90;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 140066d2a FUN_140066d2a body=118 status=ok
// SIG undefined FUN_140066d2a(void)

void FUN_140066d2a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140066da0 FUN_140066da0 body=102 status=ok
// SIG undefined FUN_140066da0(void)

undefined8 * FUN_140066da0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455f80;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 140066e06 FUN_140066e06 body=114 status=ok
// SIG undefined FUN_140066e06(void)

Property * FUN_140066e06(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455f80;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 140066e78 FUN_140066e78 body=257 status=ok
// SIG undefined FUN_140066e78(void)

bool FUN_140066e78(longlong param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,FUN_1468e122c
                 );
    atexit(FUN_142817034);
    _Init_thread_footer(&DAT_14c952318);
  }
  if (DAT_14c9522d0 == 0) {
    bVar2 = puVar1 != (undefined *)0x0;
    if (puVar1 != &DAT_14c9522c8 && bVar2) {
      do {
        puVar1 = *(undefined **)(puVar1 + 0x30);
        bVar2 = puVar1 != (undefined *)0x0;
        if (puVar1 == &DAT_14c9522c8) {
          return bVar2;
        }
      } while (puVar1 != (undefined *)0x0);
    }
  }
  else {
    bVar2 = (*(ulonglong *)(puVar1 + 0x18) & DAT_14c9522d0) != 0;
  }
  return bVar2;
}



// FUNCTION 140066f79 FUN_140066f79 body=102 status=ok
// SIG undefined FUN_140066f79(void)

undefined8 * FUN_140066f79(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455c20;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 140066fe0 FUN_140066fe0 body=1089 status=ok
// SIG undefined FUN_140066fe0(void)

Property * FUN_140066fe0(Property *param_1,undefined8 param_2)

{
  wchar_t wVar1;
  longlong *plVar2;
  Property *pPVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  size_t sVar9;
  code **ppcVar10;
  ulonglong uVar11;
  code *pcVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  code *_Str;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  Property *local_100;
  Property *local_f8;
  code **local_f0;
  uint local_e4;
  code *local_e0;
  int local_d8;
  code **local_60;
  code **local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cohtml::Property::Property(param_1,(char *)0x0,true);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_140002850(param_2,&local_e0);
  pcVar4 = local_e0;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_e0 = FUN_1449e2820;
    local_110 = FUN_14081d0ea;
    local_118 = FUN_14081d0ea;
    local_128 = &LAB_1489c8acb;
    local_130 = &LAB_146027b0e;
    local_138 = L"Engine";
    local_140 = 0;
    local_148 = 0x10000006;
    local_150 = 8;
    local_158 = 0x128;
    local_120 = &local_e0;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar2 = DAT_14cb907b8;
  lVar8 = DAT_14cb907b8[0x22];
  if (lVar8 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))();
    lVar8 = plVar2[0x22];
  }
  if (*(char *)(lVar8 + 0x8c) == '\x01') {
    uVar7 = local_d8 - 1;
    if (local_d8 == 0) {
      uVar7 = 0;
    }
    if (0 < (int)uVar7) {
      uVar11 = 0;
      do {
        *(ushort *)(pcVar4 + uVar11 * 2) =
             (ushort)(*(ushort *)(pcVar4 + uVar11 * 2) - 0x41 < 0x1a) * 0x20 +
             *(ushort *)(pcVar4 + uVar11 * 2);
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
    }
  }
  local_f8 = param_1 + 0x20;
  _Str = (code *)&DAT_149dfb77a;
  if (local_d8 != 0) {
    _Str = pcVar4;
  }
  local_60 = (code **)0x0;
  local_100 = param_1;
  if (_Str == (code *)0x0) {
    local_58 = (code **)0x0;
    local_50 = 0;
    iVar15 = 1;
  }
  else {
    sVar9 = wcslen((wchar_t *)_Str);
    local_e4 = 0;
    local_f0 = (code **)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pcVar13 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_140067245:
        local_50 = local_e4;
        uVar7 = local_e4 + 1;
        if (uVar7 < 0x81) goto LAB_140067261;
        FUN_1446efa72(&local_60,0,uVar7,1);
        ppcVar10 = local_60;
        goto LAB_140067263;
      }
      wVar1 = *(wchar_t *)pcVar13;
      uVar7 = (uint)(ushort)wVar1;
      pcVar12 = pcVar13 + 2;
      uVar14 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar6 = FUN_140024707(uVar7,&local_e4,&local_f0);
          if (cVar6 != '\0') goto LAB_140067245;
          break;
        }
        if (((ushort)*(wchar_t *)pcVar12 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*(wchar_t *)pcVar12 + 0xfca02400;
          pcVar12 = pcVar13 + 4;
          uVar14 = iVar15 - 2;
        }
      }
      cVar6 = FUN_140024707(uVar7,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar14;
      pcVar13 = pcVar12;
    } while (cVar6 != '\0');
    local_50 = 0xffffffff;
    uVar7 = 0;
LAB_140067261:
    ppcVar10 = (code **)0x0;
LAB_140067263:
    local_f0 = &local_e0;
    if (ppcVar10 != (code **)0x0) {
      local_f0 = ppcVar10;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar7;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *(wchar_t *)_Str;
      uVar7 = (uint)(ushort)wVar1;
      pcVar13 = _Str + 2;
      iVar5 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar7,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*(wchar_t *)pcVar13 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*(wchar_t *)pcVar13 + 0xfca02400;
          pcVar13 = _Str + 4;
          iVar5 = iVar15 + -2;
        }
      }
      iVar15 = iVar5;
      cVar6 = FUN_1400247af(uVar7,&local_f0,&local_e4);
      _Str = pcVar13;
    } while (cVar6 != '\0');
    iVar15 = local_50 + 1;
  }
  pPVar3 = local_100;
  FUN_140067422(local_f8,iVar15,1);
  memcpy(*(void **)(pPVar3 + 0x20),local_58,(longlong)(int)local_50);
  *(undefined1 *)(*(longlong *)(pPVar3 + 0x20) + (longlong)(int)local_50) = 0;
  *(undefined8 *)(pPVar3 + 8) = *(undefined8 *)(pPVar3 + 0x20);
  if (local_60 != (code **)0x0) {
    FUN_1400020a8();
  }
  if (pcVar4 != (code *)0x0) {
    FUN_1400020a8(pcVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return pPVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140067422 FUN_140067422 body=77 status=ok
// SIG undefined FUN_140067422(void)

void FUN_140067422(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140067470();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1467af39e();
      return;
    }
  }
  return;
}



// FUNCTION 140067470 FUN_140067470 body=345 status=ok
// SIG undefined FUN_140067470(void)

void FUN_140067470(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400674f1;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1400674f1:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1400675ca FUN_1400675ca body=114 status=ok
// SIG undefined FUN_1400675ca(void)

Property * FUN_1400675ca(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455c20;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14006763c FUN_14006763c body=111 status=ok
// SIG undefined FUN_14006763c(void)

void FUN_14006763c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 600);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x250);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x4d0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1448c07d4(*(longlong *)(param_1 + 0xc0),param_2);
  return;
}



// FUNCTION 1400676ac FUN_1400676ac body=45 status=ok
// SIG undefined FUN_1400676ac(void)

void FUN_1400676ac(longlong param_1,undefined8 param_2)

{
  FUN_14475b30e(param_2,param_1 + 0x40);
  FUN_14475b30e(param_2,param_1 + 0x48);
  return;
}



// FUNCTION 140067708 FUN_140067708 body=57 status=ok
// SIG undefined FUN_140067708(void)

void FUN_140067708(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25698 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar1,L"WwiseEventDef");
  }
  return;
}



// FUNCTION 140067742 FUN_140067742 body=65 status=ok
// SIG undefined FUN_140067742(void)

void FUN_140067742(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  param_2 = (undefined8 *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000140067780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_4);
  return;
}



// FUNCTION 140067796 FUN_140067796 body=243 status=ok
// SIG undefined FUN_140067796(void)

void FUN_140067796(longlong *param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  if (((((param_2 != 0) && (*(int *)(param_2 + 0xbc) != 0)) &&
       (uVar1 = *(uint *)(param_2 + 0xb8), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
     ((*(int *)(lVar3 + 0x10) == *(int *)(param_2 + 0xbc) &&
      ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
    cVar2 = FUN_14488f01e(param_2,(int)*(short *)((longlong)param_1 + 0xb4),param_3,0);
    if ((cVar2 == '\0') && (*param_3 != DAT_14c9485f0)) {
      cVar2 = (**(code **)(*param_1 + 0x3b8))(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        FUN_14488f01e(param_2,(int)*(short *)((longlong)param_1 + 0xb4),param_3,1);
        cVar2 = (**(code **)(*param_1 + 1000))(param_1,param_2,param_3);
        if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140067886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x3b0))(param_1,param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14006788a FUN_14006788a body=434 status=ok
// SIG undefined FUN_14006788a(void)

undefined8 * FUN_14006788a(undefined8 *param_1,byte *param_2,char param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  char *_Str;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  char *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != (byte *)0x0) && ((*param_2 & 0x6b) == 1)) &&
     (_Str = *(char **)(param_2 + 8), _Str != (char *)0x0)) {
    sVar4 = strlen(_Str);
    iVar6 = (int)sVar4;
    if (iVar6 != 0) {
      lVar5 = 0;
      do {
        bVar1 = _Str[lVar5];
        bVar2 = (&DAT_149e3cc88)[lVar5];
        if (bVar1 == bVar2) {
          if (bVar1 == 0) break;
        }
        else {
          if (0x7f < (bVar2 | bVar1)) goto LAB_140067923;
          bVar1 = (&DAT_149e05da0)[bVar1];
          bVar2 = (&DAT_149e05da0)[bVar2];
          if (bVar1 != bVar2) goto LAB_140067923;
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
  }
LAB_140067992:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_140067972:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
LAB_140067923:
  if (bVar1 != bVar2) {
    if (param_3 != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9a11bc) && (FUN_144b3d300(&DAT_14c9a11bc), DAT_14c9a11bc == -1))
      {
        DAT_14c9a11b8 = 8;
        _Init_thread_footer(&DAT_14c9a11bc);
      }
      iVar3 = strncmp("/Script/",_Str,(longlong)DAT_14c9a11b8);
      if (iVar3 == 0) goto LAB_140067992;
    }
    if ((sVar4 & 0xffffffff) != 0) {
      lVar5 = 0;
      do {
        if (_Str[lVar5] == '/') {
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          local_40 = _Str;
          local_38 = iVar6;
          FUN_14475bea4(param_1);
          if (param_4 == '\0') {
            if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
              return param_1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          FUN_14475c82a(param_1);
          goto LAB_140067972;
        }
        lVar5 = lVar5 + 1;
      } while (iVar6 != lVar5);
    }
  }
  goto LAB_140067992;
}



// FUNCTION 140067a3e FUN_140067a3e body=352 status=ok
// SIG undefined FUN_140067a3e(void)

undefined4 *
FUN_140067a3e(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140067ce0(param_1,local_48);
  FUN_140067ba0(param_3,local_40);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_140067c14(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x2c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140068282(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140067ba0 FUN_140067ba0 body=115 status=ok
// SIG undefined FUN_140067ba0(void)

undefined8 * FUN_140067ba0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(param_2 + 1) = *puVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
  param_2[3] = 0;
  iVar1 = puVar2[6];
  _Src = *(void **)(puVar2 + 4);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 140067c14 FUN_140067c14 body=204 status=ok
// SIG undefined FUN_140067c14(void)

void FUN_140067c14(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_1456bf454(param_1,*param_4,1);
          *param_4 = iVar12;
          uVar10 = 1;
          goto LAB_140067c8b;
        }
        iVar12 = puVar1[10];
      } while (iVar12 != -1);
    }
  }
  uVar10 = 0;
LAB_140067c8b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 140067ce0 FUN_140067ce0 body=500 status=ok
// SIG undefined FUN_140067ce0(void)

int * FUN_140067ce0(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x30);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x30 + *param_1;
  return param_2;
}


