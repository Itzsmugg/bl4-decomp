// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d7e9a0 FUN_140d7e9a0 body=224 status=ok
// SIG undefined FUN_140d7e9a0(void)

longlong FUN_140d7e9a0(longlong param_1,int *param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  iVar2 = *(int *)(param_1 + 0xe8);
  lVar7 = (longlong)iVar2;
  if (lVar7 == 0) {
    lVar3 = 0;
  }
  else {
    lVar5 = lVar7 * 0x30;
    lVar6 = lVar4;
    do {
      lVar3 = lVar6;
      if (((*(int *)(lVar3 + 8) == *param_2) && (*(int *)(lVar3 + 0x10) == param_2[2])) &&
         (*(int *)(lVar3 + 0x14) == param_3)) break;
      lVar6 = lVar3 + 0x30;
      lVar5 = lVar5 + -0x30;
      lVar3 = 0;
    } while (lVar5 != 0);
  }
  if ((lVar3 == 0) && (param_4 != '\0')) {
    *(uint *)(param_1 + 0xe8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xec) < iVar2 + 1U) {
      FUN_140d7ea80((longlong *)(param_1 + 0xe0),iVar2);
      lVar4 = *(longlong *)(param_1 + 0xe0);
    }
    lVar7 = lVar7 * 0x30;
    lVar3 = lVar4 + lVar7;
    *(longlong *)(lVar4 + lVar7) = param_1;
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar4 + 0x17 + lVar7) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)param_2;
    *(int *)(lVar4 + 0x10 + lVar7) = param_2[2];
    *(int *)(lVar4 + 0x14 + lVar7) = param_3;
  }
  return lVar3;
}



// FUNCTION 140d7ea80 FUN_140d7ea80 body=272 status=ok
// SIG undefined FUN_140d7ea80(void)

void FUN_140d7ea80(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 140d7eb90 FUN_140d7eb90 body=269 status=ok
// SIG undefined FUN_140d7eb90(void)

void FUN_140d7eb90(longlong param_1,int param_2)

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



// FUNCTION 140d7ec9e FUN_140d7ec9e body=10 status=ok
// SIG undefined FUN_140d7ec9e(void)

undefined8 * FUN_140d7ec9e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140d7eca8 FUN_140d7eca8 body=336 status=ok
// SIG undefined FUN_140d7eca8(void)

void FUN_140d7eca8(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
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
  longlong *plVar14;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  plVar2 = *(longlong **)(param_3 + 4);
  plVar14 = *(longlong **)(param_1 + 0x38);
  if (plVar14 != plVar2) {
    *(longlong **)(param_1 + 0x38) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = param_3[6];
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_3 + 8);
  plVar2 = *(longlong **)(param_3 + 10);
  plVar14 = *(longlong **)(param_1 + 0x50);
  if (plVar14 != plVar2) {
    *(longlong **)(param_1 + 0x50) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = param_3[0xc];
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_3 + 0xe);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_3 + 0x10);
  FUN_1406b39e6(param_1 + 0x78,param_3 + 0x14);
  FUN_1406b3a44(param_1 + 0x88,param_3 + 0x18);
  FUN_1401f3db8(param_1 + 0x98,param_3 + 0x1c);
  uVar3 = param_3[0x23];
  uVar4 = param_3[0x24];
  uVar5 = param_3[0x25];
  uVar6 = param_3[0x26];
  uVar7 = param_3[0x27];
  uVar8 = param_3[0x28];
  uVar9 = param_3[0x29];
  uVar10 = param_3[0x2a];
  uVar11 = param_3[0x2b];
  uVar12 = param_3[0x2c];
  uVar13 = param_3[0x2d];
  *(undefined4 *)(param_1 + 0xb0) = param_3[0x22];
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
  *(undefined4 *)(param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 200) = uVar8;
  *(undefined4 *)(param_1 + 0xcc) = uVar9;
  *(undefined4 *)(param_1 + 0xd0) = uVar10;
  *(undefined4 *)(param_1 + 0xd4) = uVar11;
  *(undefined4 *)(param_1 + 0xd8) = uVar12;
  *(undefined4 *)(param_1 + 0xdc) = uVar13;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_3 + 0x2e);
  *(undefined8 *)(param_1 + 0xe8) = *param_4;
  plVar2 = (longlong *)param_4[1];
  plVar14 = *(longlong **)(param_1 + 0xf0);
  if (plVar14 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar14 = *(longlong **)(param_1 + 0xf0);
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0xf0) = plVar2;
  }
  return;
}



// FUNCTION 140d7edf8 FUN_140d7edf8 body=370 status=ok
// SIG undefined FUN_140d7edf8(void)

void FUN_140d7edf8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d7ee81;
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
LAB_140d7ee81:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,4);
  return;
}



// FUNCTION 140d7ef6a FUN_140d7ef6a body=573 status=ok
// SIG undefined FUN_140d7ef6a(void)

undefined8 * FUN_140d7ef6a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
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
  param_1[2] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
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
  param_1[5] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = &PTR_FUN_14b00be10;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = DAT_14c8464e8;
  param_1[0x12] = DAT_14c8464e0;
  param_1[0x13] = uVar2;
  param_1[0x14] = DAT_14c8464f0;
  uVar2 = DAT_14c846500;
  param_1[0x15] = DAT_14c8464f8;
  param_1[0x16] = uVar2;
  param_1[0x17] = DAT_14c846508;
  return param_1;
}



// FUNCTION 140d7f1a8 FUN_140d7f1a8 body=2061 status=ok
// SIG undefined FUN_140d7f1a8(void)

longlong * FUN_140d7f1a8(longlong *param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  byte bVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint *local_a0;
  longlong *local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  uint local_68;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar29 = *param_3;
  local_98 = param_2;
  if (param_3[2] != 0) {
    uVar29 = FUN_144a78877(uVar29);
  }
  uVar17 = param_3[3];
  if (param_3[5] != 0) {
    uVar17 = FUN_144a78877(uVar17);
  }
  plVar26 = param_1 + 0x13;
  uVar18 = param_3[6];
  if (param_3[8] != 0) {
    uVar18 = FUN_144a78877(uVar18);
  }
  iVar15 = FUN_140d7f9b6(plVar26,(byte)param_3[9] ^ uVar18 ^ uVar17 ^ uVar29,param_3);
  if (iVar15 != -1) {
    lVar19 = *plVar26 + (longlong)iVar15 * 0x40;
    if ((lVar19 != 0) && (*plVar26 + (longlong)iVar15 * 0x40 != -0x28)) {
      *local_98 = *(longlong *)(lVar19 + 0x28);
      lVar19 = *(longlong *)(lVar19 + 0x30);
      local_98[1] = lVar19;
      plVar26 = local_98;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      goto LAB_140d7f679;
    }
  }
  puVar31 = param_3 + 6;
  (**(code **)(*param_1 + 0x50))(param_1,&local_60,param_3);
  local_a8 = plVar26;
  local_a0 = puVar31;
  if (*(int *)((longlong)param_1 + 0xcc) == 0) {
    iVar15 = (int)param_1[0x14];
    *(int *)(param_1 + 0x14) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xa4) == iVar15) {
      FUN_1406cd6a8(plVar26,iVar15);
    }
    iVar30 = (int)param_1[0x18];
    if (iVar30 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar16 = iVar30 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar26 = param_1 + 0x15;
    iVar23 = iVar30 + 1;
    iVar28 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar28 = iVar30;
    }
    if (iVar28 >> 5 == iVar16) {
      *(int *)(param_1 + 0x18) = iVar23;
    }
    else {
      if (*(int *)((longlong)param_1 + 0xc4) <= iVar30) {
        if (iVar30 + 0x20U < 0xa0) {
          iVar23 = 0x80;
          iVar16 = iVar30;
        }
        else {
          uVar29 = iVar30 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0xc4) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar29) {
              uVar17 = uVar29;
            }
          }
          else {
            uVar17 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar24 = FUN_144a3809e(uVar17 << 2,0);
          iVar16 = (int)(uVar24 >> 2);
          iVar23 = -0x20;
          if ((int)uVar29 <= iVar16) {
            iVar23 = iVar16 << 5;
          }
          iVar16 = (int)param_1[0x18];
        }
        *(int *)((longlong)param_1 + 0xc4) = iVar23;
        FUN_1446efbd8(plVar26,iVar16);
        iVar23 = (int)param_1[0x18] + 1;
        puVar31 = local_a0;
      }
      iVar16 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar16 = iVar23;
      }
      *(int *)(param_1 + 0x18) = iVar23;
      if (iVar23 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[0x17];
        if ((longlong *)param_1[0x17] == (longlong *)0x0) {
          plVar21 = plVar26;
        }
        bVar22 = -(char)(iVar23 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar16 >> 5) * 4) << (bVar22 & 0x1f)) >>
             (bVar22 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar15;
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
      plVar26 = (longlong *)param_1[0x17];
    }
    bVar22 = (byte)iVar30 & 0x1f;
    puVar3 = (uint *)((longlong)plVar26 + (longlong)(iVar28 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
  }
  else {
    iVar15 = (int)param_1[0x19];
    lVar19 = (longlong)iVar15;
    iVar30 = *(int *)(param_1[0x13] + 4 + lVar19 * 0x40);
    *(int *)(param_1 + 0x19) = iVar30;
    iVar16 = *(int *)((longlong)param_1 + 0xcc) + -1;
    *(int *)((longlong)param_1 + 0xcc) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(param_1[0x13] + (longlong)iVar30 * 0x40) = 0xffffffff;
    }
  }
  plVar26 = param_1 + 0x15;
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    plVar26 = (longlong *)param_1[0x17];
  }
  iVar30 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar30 = iVar15;
  }
  puVar3 = (uint *)((longlong)plVar26 + (longlong)(iVar30 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar15 & 0x1f);
  lVar4 = param_1[0x13];
  lVar19 = lVar19 * 0x40;
  puVar3 = (uint *)(lVar4 + lVar19);
  *(uint *)(lVar4 + 8 + lVar19) = param_3[2];
  *(undefined8 *)(lVar4 + lVar19) = *(undefined8 *)param_3;
  *(uint *)(lVar4 + 0x14 + lVar19) = param_3[5];
  *(undefined8 *)(lVar4 + 0xc + lVar19) = *(undefined8 *)(param_3 + 3);
  *(uint *)(lVar4 + 0x20 + lVar19) = puVar31[2];
  *(undefined8 *)(lVar4 + 0x18 + lVar19) = *(undefined8 *)puVar31;
  *(char *)(lVar4 + 0x24 + lVar19) = (char)param_3[9];
  *(ulonglong *)(lVar4 + 0x28 + lVar19) = CONCAT44(uStack_5c,local_60);
  lVar25 = CONCAT44(uStack_54,local_58);
  *(longlong *)(lVar4 + 0x30 + lVar19) = lVar25;
  if (lVar25 != 0) {
    LOCK();
    *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    UNLOCK();
  }
  puVar3[0xe] = 0xffffffff;
  uVar29 = *puVar3;
  if (puVar3[2] != 0) {
    uVar29 = FUN_144a78877(uVar29);
  }
  uVar17 = puVar3[3];
  if (puVar3[5] != 0) {
    uVar17 = FUN_144a78877(uVar17);
  }
  uVar18 = puVar3[6];
  if (puVar3[8] != 0) {
    uVar18 = FUN_144a78877(uVar18);
  }
  uVar29 = (byte)puVar3[9] ^ uVar18 ^ uVar17 ^ uVar29;
  iVar30 = 1;
  if ((int)param_1[0x14] - *(int *)((longlong)param_1 + 0xcc) == 1) {
    uVar17 = 1;
LAB_140d7f426:
    plVar21 = local_a8;
    iVar16 = iVar15;
    if (((int)uVar17 < 1) || (iVar30 <= (int)param_1[0x1c])) {
      uVar29 = (int)param_1[0x1c] - 1U & uVar29;
      puVar3[0xf] = uVar29;
      plVar26 = (longlong *)param_1[0x1b];
      if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
        plVar26 = param_1 + 0x1a;
      }
      puVar3[0xe] = *(uint *)((longlong)plVar26 +
                             ((longlong)(int)param_1[0x1c] - 1U & (longlong)(int)uVar29) * 4);
      plVar26 = (longlong *)param_1[0x1b];
      if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
        plVar26 = param_1 + 0x1a;
      }
      *(int *)((longlong)plVar26 + ((longlong)(int)param_1[0x1c] - 1U & (longlong)(int)uVar29) * 4)
           = iVar15;
    }
    else {
      *(int *)(param_1 + 0x1c) = iVar30;
      FUN_140d81f0a(local_a8);
    }
  }
  else {
    iVar16 = FUN_140d7f9b6(local_a8,uVar29,puVar3);
    if (iVar16 == -1) {
      uVar17 = (int)param_1[0x14] - *(int *)((longlong)param_1 + 0xcc);
      if (3 < uVar17) {
        uVar24 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
        lVar19 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar30 = 1 << ((byte)lVar19 & 0x1f);
      }
      goto LAB_140d7f426;
    }
    puVar31 = (uint *)(*local_a8 + (longlong)iVar16 * 0x40);
    plVar26 = *(longlong **)(*local_a8 + 0x30 + (longlong)iVar16 * 0x40);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar26 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar2 = (int *)((longlong)plVar26 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
    plVar21 = local_a8;
    uVar29 = *puVar3;
    uVar17 = puVar3[1];
    uVar18 = puVar3[2];
    uVar5 = puVar3[3];
    uVar6 = puVar3[4];
    uVar7 = puVar3[5];
    uVar8 = puVar3[6];
    uVar9 = puVar3[7];
    uVar10 = puVar3[8];
    uVar11 = puVar3[9];
    uVar12 = puVar3[10];
    uVar13 = puVar3[0xb];
    *(undefined8 *)(puVar31 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
    puVar31[8] = uVar10;
    puVar31[9] = uVar11;
    puVar31[10] = uVar12;
    puVar31[0xb] = uVar13;
    puVar31[4] = uVar6;
    puVar31[5] = uVar7;
    puVar31[6] = uVar8;
    puVar31[7] = uVar9;
    *puVar31 = uVar29;
    puVar31[1] = uVar17;
    puVar31[2] = uVar18;
    puVar31[3] = uVar5;
    FUN_1457a579c(local_a8,iVar15);
  }
  plVar26 = local_98;
  lVar19 = *plVar21;
  *local_98 = *(longlong *)(lVar19 + 0x28 + (longlong)iVar16 * 0x40);
  lVar19 = *(longlong *)(lVar19 + 0x30 + (longlong)iVar16 * 0x40);
  local_98[1] = lVar19;
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar21 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  lVar4 = *plVar26;
  lVar19 = lVar4 + 0x30;
  *(undefined1 *)(lVar4 + 0x30) = 1;
  FUN_140c25b54(lVar19);
  local_60 = (int)param_1[5];
  if (local_60 == 0) {
    local_58 = DAT_14cb7bba0;
    local_60 = (int)DAT_14cb7bb98;
    uStack_5c = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
  }
  else {
    uStack_5c = (undefined4)*(undefined8 *)((longlong)param_1 + 0x2c);
    local_58 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x2c) >> 0x20);
  }
  FUN_144928d62(lVar4 + 0x40,1,&local_60);
  local_70 = *(undefined8 *)param_3;
  local_68 = param_3[2];
  FUN_14013eb2c(lVar19);
  local_78 = param_3[5];
  local_80 = *(undefined8 *)(param_3 + 3);
  FUN_14013eb54(lVar19);
  local_88 = local_a0[2];
  local_90 = *(undefined8 *)local_a0;
  FUN_144928d62(lVar4 + 0x40,4);
  if (*(longlong *)(lVar4 + 0x80) != 0) goto LAB_140d7f679;
  uVar20 = FUN_140d80bda(lVar4);
  plVar21 = (longlong *)FUN_140ec3c65(uVar20);
  if (plVar21 == (longlong *)0x0) goto LAB_140d7f679;
  local_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  puVar14 = (undefined8 *)CONCAT44(uStack_5c,local_60);
  *puVar14 = &PTR_LAB_14b3fc100;
  LOCK();
  UNLOCK();
  lVar27 = DAT_14c758608 + 1;
  lVar25 = DAT_14c758608 + 1;
  if (lVar27 == 0) {
    LOCK();
    UNLOCK();
    lVar27 = DAT_14c758608 + 2;
    lVar25 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar25;
  puVar14[2] = lVar27;
  *puVar14 = &PTR_FUN_14b41ac90;
  puVar14[3] = lVar4;
  (**(code **)(*plVar21 + 0x70))(plVar21,&local_50,lVar19,&local_60);
  *(undefined8 *)(lVar4 + 0x80) = local_50;
  if (local_58 == 0) {
LAB_140d7f62f:
    if (CONCAT44(uStack_5c,local_60) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar14 = (undefined8 *)CONCAT44(uStack_5c,local_60);
    if (puVar14 != (undefined8 *)0x0) {
      (**(code **)*puVar14)(puVar14,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
      goto LAB_140d7f62f;
    }
  }
  if (*(longlong *)(lVar4 + 0x80) != 0) {
    lVar19 = (**(code **)(*plVar21 + 0x60))(plVar21,lVar19);
    if (lVar19 != 0) {
      lVar25 = *(longlong *)(lVar19 + 0x10);
      if (*(longlong *)(lVar19 + 0x10) == 0) {
        lVar25 = lVar19;
      }
      local_60 = (int)lVar25;
      uStack_5c = (undefined4)((ulonglong)lVar25 >> 0x20);
      local_58 = *(int *)(lVar19 + 0x18);
      FUN_140d7fa32(lVar4);
    }
  }
LAB_140d7f679:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7f9b6 FUN_140d7f9b6 body=123 status=ok
// SIG undefined FUN_140d7f9b6(void)

int FUN_140d7f9b6(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x40;
        cVar1 = FUN_140ac16b0(lVar4 + lVar5,param_3);
        if ((cVar1 != '\0') && (*(char *)(lVar4 + 0x24 + lVar5) == *(char *)(param_3 + 0x24))) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x38 + lVar5);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140d7fa32 FUN_140d7fa32 body=148 status=ok
// SIG undefined FUN_140d7fa32(void)

void FUN_140d7fa32(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar1 = FUN_140d7fcdc(&local_38,param_1 + 0x30);
  if (lVar1 == 0) {
    FUN_140d7fad6(param_1);
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x88);
    if (lVar1 == lVar2) {
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_14485c47a(param_1 + 0x88,lVar1);
    FUN_1457a30be(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 140d7fad6 FUN_140d7fad6 body=517 status=ok
// SIG undefined FUN_140d7fad6(void)

void FUN_140d7fad6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  void *pvVar9;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(int *)(param_1 + 0x8c) != 0) && (uVar3 = *(uint *)(param_1 + 0x88), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x8c))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar5 = *plVar8, lVar5 != 0)))) {
    lVar6 = FUN_140929c72();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (*(longlong *)(lVar5 + 0x410) != 0)) {
      FUN_140457ffc(*(longlong *)(lVar5 + 0x410) + 0x9a8,param_1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar4) {
    local_38 = (void *)0x0;
    pvVar9 = *(void **)(param_1 + 0x90);
    local_30 = iVar4;
    FUN_1457a4cde(&local_38,iVar4);
    memcpy(local_38,pvVar9,(longlong)iVar4 << 3);
    if ((longlong)local_30 != 0) {
      lVar5 = (longlong)local_30 << 3;
      pvVar9 = local_38;
      do {
        uVar7 = FUN_14479d2ce(pvVar9);
        FUN_1457a58b2(param_1,uVar7);
        pvVar9 = (void *)((longlong)pvVar9 + 8);
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8(local_38);
    }
  }
  FUN_140d7ffec(param_1,0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar5 = FUN_14048be0a(0);
  if (lVar5 != 0) {
    FUN_140457ffc(lVar5 + 0x6b8,param_1);
    FUN_140457ffc(lVar5 + 0x6d0,param_1);
    FUN_140cc68fa(lVar5);
    lVar6 = *(longlong *)(lVar5 + 0x6a8);
    plVar8 = *(longlong **)(lVar5 + 0x6b0);
    if (plVar8 == (longlong *)0x0) {
      FUN_140457ffc(lVar6 + 0x30,param_1);
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      FUN_140457ffc(lVar6 + 0x30,param_1);
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d7fcdc FUN_140d7fcdc body=783 status=ok
// SIG undefined FUN_140d7fcdc(void)

longlong FUN_140d7fcdc(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
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
  code *local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < (longlong)*(int *)(param_1 + 1)) {
    plVar8 = local_78;
    local_58 = (longlong *)0x0;
    local_50 = 0x400000000;
    puVar10 = (uint *)*param_1;
    puVar1 = puVar10 + (longlong)*(int *)(param_1 + 1) * 2;
    do {
      if (((((puVar10[1] != 0) && (uVar4 = *puVar10, -1 < (int)uVar4)) &&
           ((int)uVar4 < DAT_14c9647dc)) &&
          ((plVar6 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == puVar10[1])))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar9 = *plVar6, lVar9 != 0)))) {
        if (DAT_14cac9ca8 == 0) {
          local_80 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a0 = &local_80;
          local_a8 = &LAB_1478c0a72;
          local_b0 = (code *)&LAB_1417b2375;
          local_b8 = L"Engine";
          local_c0 = 0x1000000000;
          local_c8 = 0x10000004;
          local_d0 = 8;
          local_d8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        lVar7 = DAT_14cac9ca8;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
          if (DAT_14c951858 == 0) {
            local_80 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_80;
            local_a8 = &LAB_1468c5283;
            local_b0 = FUN_142809da0;
            local_b8 = L"Engine";
            local_c0 = 0x400000000;
            local_c8 = 0x10000000;
            local_d0 = 8;
            local_d8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar5 = *(longlong *)(lVar9 + 0x20);
          if (lVar5 != 0) {
            iVar2 = *(int *)(lVar7 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
                 (lVar9 = lVar5,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                 lVar7 + 0x30)) {
                lVar9 = 0;
              }
            } while ((lVar9 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
            if (lVar9 != 0) goto LAB_140d7fe1b;
          }
        }
        else {
LAB_140d7fe1b:
          uVar3 = local_50;
          lVar7 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            FUN_14885072a(plVar8,uVar3 & 0xffffffff);
          }
          plVar6 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar6 = plVar8;
          }
          plVar6[lVar7] = lVar9;
        }
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar1);
    iVar2 = (int)local_50;
    if (0 < (int)local_50) {
      if (local_58 != (longlong *)0x0) {
        plVar8 = local_58;
      }
      plVar8 = (longlong *)*plVar8;
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (0 < iVar2) goto LAB_140d7ffbb;
  }
  plVar8 = (longlong *)0x0;
LAB_140d7ffbb:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return (longlong)plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7ffec FUN_140d7ffec body=1660 status=ok
// SIG undefined FUN_140d7ffec(void)

void FUN_140d7ffec(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 local_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar3 = (uint *)(param_1 + 0x14);
  lVar13 = param_1[0x15];
  if ((lVar13 == 0) || (*(int *)((longlong)param_1 + 0xa4) == 0)) {
LAB_140d8002b:
    lVar11 = 0;
  }
  else {
    uVar4 = *puVar3;
    lVar11 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)((longlong)param_1 + 0xa4)))
      goto LAB_140d8002b;
      lVar11 = 0;
      if ((*(uint *)(lVar12 + 8) & 0x10200000) == 0) {
        lVar11 = lVar13;
      }
    }
  }
  if (lVar11 != param_2) {
    if (lVar11 != 0) {
      local_88 = 0;
      uStack_80 = 0;
      FUN_140d813ae();
    }
    cVar7 = FUN_140fec400(param_1);
    if ((cVar7 == '\0') && ((char)param_1[5] != '\x01')) {
      FUN_140ac173c(&local_ac,param_1 + 6);
      if (param_2 == 0) {
        if ((char)param_1[0x16] == '\x01') {
          FUN_1457a5810(&local_70);
          lVar13 = CONCAT44(uStack_6c,local_70);
          if (lVar13 != 0) {
            FUN_1458228e2(param_1,&local_d0);
            *(int *)(lVar13 + 0x18) = (int)uStack_c8;
            *(undefined8 *)(lVar13 + 0x10) = local_d0;
            *(int *)(lVar13 + 0x3c) = local_8c;
            *(undefined4 *)(lVar13 + 0x2c) = local_9c;
            *(int *)(lVar13 + 0x30) = iStack_98;
            *(int *)(lVar13 + 0x34) = iStack_94;
            *(undefined4 *)(lVar13 + 0x38) = uStack_90;
            *(int *)(lVar13 + 0x1c) = local_ac;
            *(undefined4 *)(lVar13 + 0x20) = uStack_a8;
            *(int *)(lVar13 + 0x24) = iStack_a4;
            *(int *)(lVar13 + 0x28) = iStack_a0;
            uStack_c8 = (longlong *)CONCAT44(uStack_64,uStack_68);
            if (uStack_c8 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_c8 + 1) = (int)uStack_c8[1] + 1;
              UNLOCK();
            }
            uVar9 = FUN_140d80bda(param_1);
            FUN_141000642(uVar9,&local_d0);
            if (uStack_c8 != (longlong *)0x0) {
              LOCK();
              plVar10 = uStack_c8 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*uStack_c8)(uStack_c8);
                LOCK();
                piVar2 = (int *)((longlong)uStack_c8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
                }
              }
            }
          }
          plVar10 = (longlong *)CONCAT44(uStack_64,uStack_68);
          if (plVar10 != (longlong *)0x0) {
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
          }
          *(undefined1 *)(param_1 + 0x16) = 0;
          *(undefined8 *)((longlong)param_1 + 0xb4) = DAT_14cb7bd68;
          *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_14cb7bd70;
          param_1[0x18] = DAT_14cb7bd80;
          *(undefined4 *)(param_1 + 0x19) = DAT_14cb7bd88;
          *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
          *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x16) = 0;
        lVar13 = FUN_140d80daa(param_2);
        if (lVar13 != 0) {
          uVar9 = FUN_140427846();
          plVar10 = (longlong *)FUN_144718840(lVar13,uVar9);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x50))(plVar10,&local_70);
            FUN_144a659ac(local_60,&local_d0,4);
            if ((int)local_d0 != 0) {
              FUN_140ac173c(&local_d0,&local_70);
              if (((((int)local_d0 != local_ac) || ((int)uStack_c8 != iStack_a4)) ||
                  (uStack_c8._4_4_ != iStack_a0)) ||
                 (((iStack_bc != iStack_98 || (iStack_b8 != iStack_94)) || (local_b0 != local_8c))))
              {
                *(int *)((longlong)param_1 + 0xd4) = local_b0;
                *(undefined4 *)((longlong)param_1 + 0xc4) = local_c0;
                *(int *)(param_1 + 0x19) = iStack_bc;
                *(int *)((longlong)param_1 + 0xcc) = iStack_b8;
                *(undefined4 *)(param_1 + 0x1a) = uStack_b4;
                *(int *)((longlong)param_1 + 0xb4) = (int)local_d0;
                *(undefined4 *)(param_1 + 0x17) = local_d0._4_4_;
                *(int *)((longlong)param_1 + 0xbc) = (int)uStack_c8;
                *(int *)(param_1 + 0x18) = uStack_c8._4_4_;
                *(undefined1 *)(param_1 + 0x16) = 1;
                FUN_1457a301c(&local_e0);
                if (local_e0 != 0) {
                  FUN_1458228e2(param_1,&local_108);
                  *(undefined4 *)(local_e0 + 0x18) = local_100;
                  *(longlong *)(local_e0 + 0x10) = local_108;
                  *(int *)(local_e0 + 0x3c) = local_8c;
                  *(undefined4 *)(local_e0 + 0x2c) = local_9c;
                  *(int *)(local_e0 + 0x30) = iStack_98;
                  *(int *)(local_e0 + 0x34) = iStack_94;
                  *(undefined4 *)(local_e0 + 0x38) = uStack_90;
                  *(int *)(local_e0 + 0x1c) = local_ac;
                  *(undefined4 *)(local_e0 + 0x20) = uStack_a8;
                  *(int *)(local_e0 + 0x24) = iStack_a4;
                  *(int *)(local_e0 + 0x28) = iStack_a0;
                  uVar5 = *(undefined4 *)((longlong)param_1 + 0xbc);
                  local_f4 = (undefined4)param_1[0x19];
                  uStack_fc = (undefined4)param_1[0x18];
                  uStack_f8 = (undefined4)((ulonglong)param_1[0x18] >> 0x20);
                  local_e8 = *(undefined4 *)((longlong)param_1 + 0xd4);
                  local_f0 = *(undefined8 *)((longlong)param_1 + 0xcc);
                  *(undefined8 *)(local_e0 + 0x40) = *(undefined8 *)((longlong)param_1 + 0xb4);
                  *(undefined4 *)(local_e0 + 0x48) = uVar5;
                  *(undefined4 *)(local_e0 + 0x4c) = uStack_fc;
                  *(undefined4 *)(local_e0 + 0x60) = local_e8;
                  *(undefined4 *)(local_e0 + 0x50) = uStack_f8;
                  *(undefined4 *)(local_e0 + 0x54) = local_f4;
                  *(undefined8 *)(local_e0 + 0x58) = local_f0;
                  local_108 = local_e0;
                  local_100 = SUB84(local_d8,0);
                  uStack_fc = (undefined4)((ulonglong)local_d8 >> 0x20);
                  if (local_d8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
                    UNLOCK();
                  }
                  uVar9 = FUN_140d80bda(param_1);
                  FUN_141000642(uVar9,&local_108);
                  plVar10 = (longlong *)CONCAT44(uStack_fc,local_100);
                  if (plVar10 != (longlong *)0x0) {
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
                  }
                }
                if (local_d8 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_d8 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*local_d8)(local_d8);
                    LOCK();
                    piVar2 = (int *)((longlong)local_d8 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_d8 + 0x10))(local_d8);
                    }
                  }
                }
              }
            }
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
    FUN_140d80ce2(&local_70,param_2);
    *puVar3 = local_70;
    *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_6c;
    *(undefined4 *)(param_1 + 0x15) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0xac) = uStack_64;
    lVar13 = param_1[0x15];
  }
  if (((lVar13 != 0) && (*(int *)((longlong)param_1 + 0xa4) != 0)) &&
     (((uVar4 = *puVar3, -1 < (int)uVar4 &&
       ((((int)uVar4 < DAT_14c9647dc &&
         (lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar13 != 0)) &&
        (*(int *)(lVar13 + 0x10) == *(int *)((longlong)param_1 + 0xa4))))) &&
      ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))) {
    cVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar13 = param_1[0x15];
    if (cVar7 == '\0') {
      plVar10 = local_128;
    }
    else {
      plVar10 = (longlong *)param_1[2];
      if (plVar10 != (longlong *)0x0) {
        iVar8 = (int)plVar10[1];
        do {
          if (iVar8 == 0) goto LAB_140d805bf;
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar14 = iVar8 == iVar6;
          if (bVar14) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar14);
        lVar11 = param_1[1];
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        local_118 = lVar11;
        plStack_110 = plVar10;
        FUN_140d813ae(lVar13);
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
        goto LAB_140d8003b;
      }
LAB_140d805bf:
      plVar10 = &local_118;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    FUN_140d813ae(lVar13);
  }
LAB_140d8003b:
  FUN_140d8066a(param_1);
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d8066a FUN_140d8066a body=1392 status=ok
// SIG undefined FUN_140d8066a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d8066a(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  
  cVar8 = (**(code **)(*param_1 + 0x18))();
  if ((cVar8 == '\0') ||
     (((char)param_1[5] == '\x01' &&
      ((param_1[0x15] == 0 || (cVar8 = FUN_144729dda(param_1 + 0x14), cVar8 == '\0')))))) {
    if (param_1[0x1e] != 0) {
      lVar11 = FUN_140d80bda(param_1);
      if (((lVar11 != 0) && (lVar11 = FUN_140149a73(lVar11,0), lVar11 != 0)) &&
         (plVar13 = *(longlong **)(lVar11 + 0x140), plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x80))(plVar13,param_1 + 0x1e);
      }
      param_1[0x1e] = 0;
      plVar13 = (longlong *)param_1[0x1f];
      if (plVar13 != (longlong *)0x0) {
        param_1[0x1f] = 0;
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d80933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar13 + 0x10))(plVar13);
            return;
          }
        }
      }
    }
    return;
  }
  if (param_1[0x1e] != 0) goto LAB_140d806bd;
  plVar13 = (longlong *)param_1[2];
  if (plVar13 == (longlong *)0x0) {
LAB_140d809f0:
    lVar11 = 0;
    plVar13 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar13[1];
    do {
      if (iVar9 == 0) goto LAB_140d809f0;
      LOCK();
      iVar6 = (int)plVar13[1];
      bVar16 = iVar9 == iVar6;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar16);
    lVar11 = param_1[1];
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar10 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b41ac20;
  plVar15 = plVar10 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar10[3] = 0;
    plVar10[4] = 0;
    lVar7 = DAT_14cb7ccc0 + 1;
    plVar10[5] = DAT_14cb7ccc0;
    DAT_14cb7ccc0 = lVar7;
    plVar10[6] = 0;
    plVar10[7] = 0;
    *(undefined4 *)(plVar10 + 8) = 2;
    *(undefined8 *)((longlong)plVar10 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x4c) = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(plVar10 + 0xc) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)plVar10 + 100) = uVar3;
    *(undefined4 *)(plVar10 + 0xd) = uVar4;
    *(undefined4 *)((longlong)plVar10 + 0x6c) = uVar5;
    plVar10[0xe] = DAT_14c8464f0;
    plVar10[2] = (longlong)&PTR_FUN_14b41ac40;
    plVar10[0xf] = lVar11;
    plVar10[0x10] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    plVar10[3] = 0;
    plVar10[4] = 0;
    lVar7 = DAT_14cb7ccc0 + 1;
    plVar10[5] = DAT_14cb7ccc0;
    DAT_14cb7ccc0 = lVar7;
    plVar10[6] = 0;
    plVar10[7] = 0;
    *(undefined4 *)(plVar10 + 8) = 2;
    *(undefined8 *)((longlong)plVar10 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x4c) = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(plVar10 + 0xc) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)plVar10 + 100) = uVar3;
    *(undefined4 *)(plVar10 + 0xd) = uVar4;
    *(undefined4 *)((longlong)plVar10 + 0x6c) = uVar5;
    plVar10[0xe] = DAT_14c8464f0;
    plVar10[2] = (longlong)&PTR_FUN_14b41ac40;
    plVar10[0xf] = lVar11;
    plVar10[0x10] = (longlong)plVar13;
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((plVar15 == (longlong *)0x0) ||
     (((plVar10[3] != 0 && (plVar10[4] != 0)) && (0 < *(int *)(plVar10[4] + 8))))) {
    if (plVar10 == (longlong *)0x0) goto LAB_140d80afa;
LAB_140d8081d:
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    param_1[0x1e] = (longlong)plVar15;
    plVar15 = (longlong *)param_1[0x1f];
    if (plVar10 == plVar15) {
      LOCK();
      plVar15 = plVar10 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    else {
      param_1[0x1f] = (longlong)plVar10;
      if (plVar15 != (longlong *)0x0) {
        bVar16 = false;
        goto LAB_140d80b6c;
      }
    }
LAB_140d80849:
    LOCK();
    plVar15 = plVar10 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      plVar10[3] = (longlong)plVar15;
      if ((longlong *)plVar10[4] != plVar10) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar10[4] != (longlong *)0x0) {
          plVar14 = plVar10 + 4;
          plVar12 = (longlong *)plVar10[4];
          goto LAB_140d80ae1;
        }
        plVar10[4] = (longlong)plVar10;
      }
LAB_140d80812:
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_140d8081d;
    }
    _DAT_00000018 = 0x10;
    plVar14 = (longlong *)&DAT_00000020;
    plVar12 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_140d80ae1:
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      *plVar14 = (longlong)plVar10;
      if (plVar10 != (longlong *)0x0) goto LAB_140d80812;
    }
LAB_140d80afa:
    param_1[0x1e] = (longlong)plVar15;
    plVar15 = (longlong *)param_1[0x1f];
    if (plVar15 != (longlong *)0x0) {
      param_1[0x1f] = (longlong)plVar10;
      bVar16 = true;
LAB_140d80b6c:
      LOCK();
      plVar14 = plVar15 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      if (!bVar16) goto LAB_140d80849;
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  lVar11 = FUN_140d80bda(param_1);
  if (((lVar11 != 0) && (lVar11 = FUN_140149a73(lVar11,0), lVar11 != 0)) &&
     (plVar13 = *(longlong **)(lVar11 + 0x140), plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x78))(plVar13,param_1 + 0x1e);
  }
LAB_140d806bd:
  if (((((param_1[0x15] != 0) && (*(int *)((longlong)param_1 + 0xa4) != 0)) &&
       (uVar2 = *(uint *)(param_1 + 0x14), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0)))) &&
     ((*(int *)(lVar11 + 0x10) == *(int *)((longlong)param_1 + 0xa4) &&
      (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 && (lVar11 = FUN_140d80daa(), lVar11 != 0)))))) {
    FUN_14106c8ae(param_1[0x1e],lVar11,DAT_14cb86570);
    return;
  }
  FUN_141059214(param_1[0x1e],param_1 + 0xd);
  return;
}



// FUNCTION 140d80bda FUN_140d80bda body=100 status=ok
// SIG undefined FUN_140d80bda(void)

undefined8 FUN_140d80bda(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_140d80c3e();
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
  return uVar6;
}



// FUNCTION 140d80c3e FUN_140d80c3e body=104 status=ok
// SIG undefined FUN_140d80c3e(void)

undefined8 FUN_140d80c3e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 140d80ca6 FUN_140d80ca6 body=59 status=ok
// SIG undefined FUN_140d80ca6(void)

void FUN_140d80ca6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b41ac40;
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14106cf6c(param_1 + 0x10);
  return;
}



// FUNCTION 140d80ce2 FUN_140d80ce2 body=200 status=ok
// SIG undefined FUN_140d80ce2(void)

uint * FUN_140d80ce2(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140d80daa FUN_140d80daa body=286 status=ok
// SIG undefined FUN_140d80daa(void)

longlong FUN_140d80daa(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140d80e02;
  }
  lVar1 = 0;
LAB_140d80e02:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d80eca FUN_140d80eca body=228 status=ok
// SIG undefined FUN_140d80eca(void)

longlong FUN_140d80eca(void)

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
  if (DAT_14cb698a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148755b95;
    local_40 = FUN_146521e98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"MissionGiver",&DAT_14cb698a8,&DAT_148755b94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb698a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d80fb0 FUN_140d80fb0 body=195 status=ok
// SIG undefined FUN_140d80fb0(void)

undefined8 FUN_140d80fb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + 0xe8) == 0) ||
      (plVar4 = *(longlong **)(param_1 + 0xf0), plVar4 == (longlong *)0x0)) || ((int)plVar4[1] < 1))
  {
    return 0;
  }
  iVar6 = (int)plVar4[1];
  do {
    if (iVar6 == 0) {
      uVar7 = FUN_14479d2ce(0x20);
      return uVar7;
    }
    LOCK();
    iVar5 = (int)plVar4[1];
    bVar9 = iVar6 == iVar5;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar9);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x24);
  if (iVar6 != 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 0x20);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140d81032;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar8 != (undefined8 *)0x0) &&
       ((*(int *)(puVar8 + 2) == iVar6 && ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      uVar7 = *puVar8;
      goto LAB_140d81032;
    }
  }
  uVar7 = 0;
LAB_140d81032:
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
  return uVar7;
}



// FUNCTION 140d81074 FUN_140d81074 body=216 status=ok
// SIG undefined FUN_140d81074(void)

undefined8 * FUN_140d81074(longlong param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar3 = *param_3;
  if (param_3[2] != 0) {
    uVar3 = FUN_144a78877(uVar3);
  }
  uVar4 = param_3[3];
  if (param_3[5] != 0) {
    uVar4 = FUN_144a78877(uVar4);
  }
  uVar5 = param_3[6];
  if (param_3[8] != 0) {
    uVar5 = FUN_144a78877(uVar5);
  }
  iVar2 = FUN_140d7f9b6((longlong *)(param_1 + 0x98),(byte)param_3[9] ^ uVar5 ^ uVar4 ^ uVar3,
                        param_3);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar6 = lVar1 + (longlong)iVar2 * 0x40;
    if ((lVar6 != 0) && (lVar1 + (longlong)iVar2 * 0x40 != -0x28)) {
      *param_2 = *(undefined8 *)(lVar6 + 0x28);
      lVar1 = *(longlong *)(lVar6 + 0x30);
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



// FUNCTION 140d8114c FUN_140d8114c body=384 status=ok
// SIG undefined FUN_140d8114c(void)

void FUN_140d8114c(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [72];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x108) != param_2) {
    *(char *)(param_1 + 0x108) = param_2;
    if (param_2 == '\0') {
      local_d0 = 0;
      local_c8 = 0;
      FUN_140d812ce(param_1,local_a8);
    }
    else {
      cVar1 = FUN_1401144ce((undefined8 *)(param_1 + 0x110));
      if (cVar1 != '\0') {
        uVar2 = FUN_140f7f142(param_1);
        plVar3 = (longlong *)FUN_140ec3c65(uVar2);
        if (plVar3 != (longlong *)0x0) {
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_60 = *(undefined8 *)(param_1 + 0x110);
          local_58 = *(undefined4 *)(param_1 + 0x118);
          FUN_1447715ec(&local_50,param_1 + 0x120);
          FUN_1457a3768(local_a8,param_1);
          (**(code **)(*plVar3 + 0x70))(plVar3,&local_b0,&local_60,local_a8);
          *(undefined8 *)(param_1 + 0x148) = local_b0;
          FUN_1449db362(local_a8);
          if (*(longlong *)(param_1 + 0x148) != 0) {
            lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
            if (lVar4 != 0) {
              local_c0 = *(longlong *)(lVar4 + 0x10);
              if (*(longlong *)(lVar4 + 0x10) == 0) {
                local_c0 = lVar4;
              }
              local_b8 = *(undefined4 *)(lVar4 + 0x18);
              FUN_140d812ce(param_1,local_a8);
            }
          }
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d812ce FUN_140d812ce body=191 status=ok
// SIG undefined FUN_140d812ce(void)

void FUN_140d812ce(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar2 = FUN_140d7fcdc();
  if (*(int *)(param_1 + 0x154) != 0) {
    uVar1 = *(uint *)(param_1 + 0x150);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d81348;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0x154) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))
       )) {
      lVar3 = *plVar4;
      goto LAB_140d81348;
    }
  }
  lVar3 = 0;
LAB_140d81348:
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d813ae FUN_140d813ae body=2297 status=ok
// SIG undefined FUN_140d813ae(void)

void FUN_140d813ae(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  code *local_230;
  undefined1 *local_228;
  code **local_220;
  code *local_218;
  code *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  code *local_1d8;
  char *local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined2 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_4c;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar6 = *param_2;
  if (lVar6 == 0) {
    plVar7 = (longlong *)param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if (((int)param_1[3] != 0) && (lVar6 = (**(code **)(*param_1 + 8))(param_1), lVar6 != 0)) {
      if (DAT_14cac9ca8 == 0) {
        local_220 = &local_1d8;
        local_1d8 = FUN_141030f22;
        local_210 = FUN_14081d0ea;
        local_218 = FUN_14081d0ea;
        local_228 = &LAB_1478c0a72;
        local_230 = (code *)&LAB_1417b2375;
        local_238 = L"Engine";
        local_240 = 0x1000000000;
        local_248 = 0x10000004;
        local_250 = 8;
        local_258 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cb6f900 == 0) {
          local_220 = &local_1d8;
          local_1d8 = FUN_1449e2820;
          local_210 = FUN_14081d0ea;
          local_218 = FUN_1427b09ee;
          local_228 = &LAB_1487a9c57;
          local_230 = FUN_146541d03;
          local_238 = L"Engine";
          local_240 = 0;
          local_248 = 0x10004001;
          local_250 = 8;
          local_258 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
        }
        plVar7 = (longlong *)FUN_144718840(lVar6,DAT_14cb6f900);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = param_1[3];
          uVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
          FUN_14573d240(uVar8,(int)lVar6,0);
          *(undefined4 *)(param_1 + 3) = 0;
        }
      }
    }
    goto LAB_140d81568;
  }
  plVar7 = (longlong *)param_1[2];
  if (plVar7 == (longlong *)0x0) {
LAB_140d814f8:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    lVar9 = 0;
    do {
      if (iVar4 == 0) goto LAB_140d8141e;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
    lVar9 = param_1[1];
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
LAB_140d8141e:
    if (lVar6 == lVar9) goto LAB_140d81568;
    plVar7 = (longlong *)param_1[2];
    if ((param_1[1] != 0) && (plVar7 == (longlong *)0x0)) goto LAB_140d814f8;
  }
  param_1[1] = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar7 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = (longlong *)param_1[2];
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    param_1[2] = (longlong)plVar2;
  }
  lVar6 = (**(code **)(*param_1 + 8))(param_1);
  if (lVar6 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_220 = &local_1d8;
      local_1d8 = FUN_141030f22;
      local_210 = FUN_14081d0ea;
      local_218 = FUN_14081d0ea;
      local_228 = &LAB_1478c0a72;
      local_230 = (code *)&LAB_1417b2375;
      local_238 = L"Engine";
      local_240 = 0x1000000000;
      local_248 = 0x10000004;
      local_250 = 8;
      local_258 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cb6f900 == 0) {
        local_220 = &local_1d8;
        local_1d8 = FUN_1449e2820;
        local_210 = FUN_14081d0ea;
        local_218 = FUN_1427b09ee;
        local_228 = &LAB_1487a9c57;
        local_230 = FUN_146541d03;
        local_238 = L"Engine";
        local_240 = 0;
        local_248 = 0x10004001;
        local_250 = 8;
        local_258 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
      }
      plVar7 = (longlong *)FUN_144718840(lVar6,DAT_14cb6f900);
      if ((plVar7 != (longlong *)0x0) && ((int)param_1[3] == 0)) {
        local_1d8 = (code *)(((ulonglong)local_1d8 >> 0x10 & 0xffff) << 0x10);
        local_1d0 = (char *)0x0;
        local_1c8 = 0x10;
        local_1c0 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1b8 = &PTR_FUN_14b023b20;
        local_1a0 = &PTR_FUN_14b023b40;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = &PTR_FUN_14b00be70;
        local_180 = 0;
        local_178 = 0xf00000d0;
        local_170 = 0;
        local_168 = 0;
        local_164 = 0;
        local_160 = 0;
        local_15c = 1;
        local_158 = 0;
        local_150 = 0xf00000d0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0xf00000d0;
        local_130 = 0;
        local_128 = 0;
        local_124 = 0;
        local_120 = 0;
        local_11c = 6;
        local_118 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_110 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0xf00000d0;
        local_b0 = 0;
        local_a8 = 0x3f800000;
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        local_1d8 = (code *)((ulonglong)local_1d8 & 0xffffffffffffff00);
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        local_4c = 0;
        (**(code **)(*param_1 + 0x18))(param_1,&local_1f8);
        if ((local_1d0 != local_1f8) || (local_1c8 != iStack_1f0)) {
          local_1d0 = local_1f8;
          local_1c8 = iStack_1f0;
          local_1c0 = 0;
        }
        FUN_140d80ce2(&local_208,param_1);
        local_1f8 = (char *)CONCAT44(uStack_204,local_208);
        iStack_1f0 = iStack_200;
        uStack_1ec = uStack_1fc;
        if (local_38 != 3) {
          FUN_1446efa72(&local_40,0,3,0x10);
          local_38 = 3;
        }
        *local_40 = &PTR_LAB_14b3e9b40;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_40[2] = lVar9;
        *local_40 = &PTR_FUN_14b419530;
        *(undefined4 *)(local_40 + 3) = (undefined4)local_1f8;
        *(undefined4 *)((longlong)local_40 + 0x1c) = local_1f8._4_4_;
        *(int *)(local_40 + 4) = iStack_1f0;
        *(uint *)((longlong)local_40 + 0x24) = uStack_1ec;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb85dc8) &&
           (FUN_144b3d300(&DAT_14cb85dc8), DAT_14cb85dc8 == -1)) {
          local_1f8 = "MissionGiver";
          iStack_1f0 = 0xc;
          uStack_1ec = uStack_1ec & 0xffffff00;
          uVar5 = FUN_14001a6c0(&local_1f8,1);
          DAT_14cb85dc0 = (ulonglong)uVar5;
          _Init_thread_footer(&DAT_14cb85dc8);
        }
        local_4c = DAT_14cb85dc0;
        uVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
        FUN_14070dfbe(uVar8,&local_1f8,&local_1d8,0);
        *(undefined4 *)(param_1 + 3) = (undefined4)local_1f8;
        FUN_1404967de(&local_1d8);
      }
    }
  }
LAB_140d81568:
  (**(code **)(*param_1 + 0x10))(param_1);
  plVar7 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d81ca8 FUN_140d81ca8 body=609 status=ok
// SIG undefined FUN_140d81ca8(void)

void FUN_140d81ca8(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    plVar8 = plVar13;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar8;
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        local_70 = uVar5;
        if (piVar1[2] == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,piVar1[2]);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[9] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[8] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_140d81ee2;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar8 = local_78;
      } while (iVar11 < iVar4);
    }
  }
LAB_140d81ee2:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d81f0a FUN_140d81f0a body=705 status=ok
// SIG undefined FUN_140d81f0a(void)

void FUN_140d81f0a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar11 = param_1 + 7;
    FUN_144a1cbf0(plVar11,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar3 = 0;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar11;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar13 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
    }
    iVar12 = (int)local_68;
    uVar13 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar9 = local_50;
    plVar6 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_70 = plVar6;
        lVar15 = *param_1;
        lVar10 = (longlong)iVar7 * 0x40;
        uVar3 = *(uint *)(lVar15 + lVar10);
        local_7c = iVar9;
        if (*(int *)(lVar15 + 8 + lVar10) != 0) {
          uVar3 = FUN_144a78877(uVar3);
        }
        lVar15 = lVar15 + lVar10;
        uVar4 = *(uint *)(lVar15 + 0xc);
        if (*(int *)(lVar15 + 0x14) != 0) {
          uVar4 = FUN_144a78877(uVar4);
        }
        uVar5 = *(uint *)(lVar15 + 0x18);
        if (*(int *)(lVar15 + 0x20) != 0) {
          local_78 = plVar11;
          uVar5 = FUN_144a78877(uVar5);
          plVar11 = local_78;
        }
        uVar8 = (longlong)(int)(*(byte *)(lVar15 + 0x24) ^ uVar5 ^ uVar4 ^ uVar3) &
                (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar8;
        *(int *)(lVar15 + 0x3c) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar11;
        }
        *(undefined4 *)(lVar15 + 0x38) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar11;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar13 = uVar13 & ~(uint)uVar14;
        plVar6 = (longlong *)local_70[2];
        if ((longlong *)local_70[2] == (longlong *)0x0) {
          plVar6 = local_70;
        }
        iVar1 = (int)local_70[3];
        lVar15 = (longlong)iVar12;
        uVar3 = *(uint *)((longlong)plVar6 + lVar15 * 4) & uVar13;
        iVar9 = local_7c;
        if (uVar3 == 0) {
          iVar7 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar7 = iVar1 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar2 = iVar7;
          if (iVar7 < iVar12) {
            iVar2 = iVar12;
          }
          if (iVar7 <= iVar12) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar6 + lVar10 * 4 + lVar15 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar15 == lVar10) goto LAB_140d821a4;
          }
          iVar12 = iVar12 + (int)lVar10 + 1;
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar8 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar7 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        plVar6 = local_70;
      } while (iVar7 < iVar1);
    }
  }
LAB_140d821a4:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d821cc FUN_140d821cc body=370 status=ok
// SIG undefined FUN_140d821cc(void)

undefined8 * FUN_140d821cc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140d8234c FUN_140d8234c body=204 status=ok
// SIG undefined FUN_140d8234c(void)

void FUN_140d8234c(longlong param_1,uint param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong lVar3;
  int iVar4;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 != 1) {
      return;
    }
    DVar1 = FUN_140ad26c0();
    DVar2 = GetCurrentThreadId();
    if (DVar1 != DVar2) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar3 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x428);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x10) == param_2) {
          if (lVar3 == 0) {
            return;
          }
          if ((undefined4 *)(lVar3 + 4) == (undefined4 *)0x0) {
            return;
          }
          FUN_140d82418(param_1,*(undefined4 *)(lVar3 + 4),1,0);
          return;
        }
        iVar4 = *(int *)(lVar3 + 8);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 140d82418 FUN_140d82418 body=951 status=ok
// SIG undefined FUN_140d82418(void)

void FUN_140d82418(longlong param_1,uint param_2,char param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_140d8246e;
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) goto LAB_140d8246e;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x60))) {
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      lVar5 = (ulonglong)param_2 * 0x300 + *(longlong *)(param_1 + 0x38);
      if ((((param_4 == '\0') && (*(int *)(lVar5 + 0x11c) != 0)) &&
          (uVar6 = *(uint *)(lVar5 + 0x118), -1 < (int)uVar6)) &&
         ((((int)uVar6 < DAT_14c9647dc &&
           (lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar7 != 0)) &&
          ((*(int *)(lVar7 + 0x10) == *(int *)(lVar5 + 0x11c) &&
           ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) goto LAB_140d8246e;
      *(byte *)(lVar5 + 0x2b0) = *(byte *)(lVar5 + 0x2b0) | 0x20;
    }
  }
  FUN_140d82884(param_1 + 0x2c0,&local_3c);
  if (param_3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x2b8);
    if (0 < (longlong)iVar1) {
      iVar9 = -iVar1;
      uVar8 = (longlong)iVar1;
      do {
        lVar5 = *(longlong *)(param_1 + 0x2b0);
        if (*(longlong *)(param_1 + 0x2b0) == 0) {
          lVar5 = param_1 + 0x230;
        }
        if (*(uint *)(lVar5 + -4 + uVar8 * 4) == param_2) {
          uVar6 = *(uint *)(param_1 + 0x2b8);
          if (uVar8 != uVar6) {
            memmove((void *)(lVar5 + uVar8 * 4 + -4),(void *)(lVar5 + uVar8 * 4),
                    (longlong)(int)(iVar9 + uVar6) << 2);
            uVar6 = *(uint *)(param_1 + 0x2b8);
          }
          *(uint *)(param_1 + 0x2b8) = uVar6 - 1;
          FUN_140d827d0(param_1 + 0x230);
        }
        iVar9 = iVar9 + 1;
        bVar2 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (0 < (longlong)iVar1) {
    iVar9 = -iVar1;
    uVar8 = (longlong)iVar1;
    do {
      lVar5 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar5 = param_1 + 0x80;
      }
      if (*(uint *)(lVar5 + -4 + uVar8 * 4) == param_2) {
        uVar6 = *(uint *)(param_1 + 0x108);
        if (uVar8 != uVar6) {
          memmove((void *)(lVar5 + uVar8 * 4 + -4),(void *)(lVar5 + uVar8 * 4),
                  (longlong)(int)(iVar9 + uVar6) << 2);
          uVar6 = *(uint *)(param_1 + 0x108);
        }
        *(uint *)(param_1 + 0x108) = uVar6 - 1;
        FUN_140d827d0(param_1 + 0x80);
      }
      iVar9 = iVar9 + 1;
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  iVar1 = *(int *)(param_1 + 0x198);
  if (0 < (longlong)iVar1) {
    iVar9 = -iVar1;
    uVar8 = (longlong)iVar1;
    do {
      lVar5 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar5 = param_1 + 0x110;
      }
      if (*(uint *)(lVar5 + -4 + uVar8 * 4) == param_2) {
        uVar6 = *(uint *)(param_1 + 0x198);
        if (uVar8 != uVar6) {
          memmove((void *)(lVar5 + uVar8 * 4 + -4),(void *)(lVar5 + uVar8 * 4),
                  (longlong)(int)(iVar9 + uVar6) << 2);
          uVar6 = *(uint *)(param_1 + 0x198);
        }
        *(uint *)(param_1 + 0x198) = uVar6 - 1;
        FUN_140d827d0(param_1 + 0x110);
      }
      iVar9 = iVar9 + 1;
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  iVar1 = *(int *)(param_1 + 0x228);
  if (0 < (longlong)iVar1) {
    iVar9 = -iVar1;
    uVar8 = (longlong)iVar1;
    do {
      lVar5 = *(longlong *)(param_1 + 0x220);
      if (*(longlong *)(param_1 + 0x220) == 0) {
        lVar5 = param_1 + 0x1a0;
      }
      if (*(uint *)(lVar5 + -4 + uVar8 * 4) == param_2) {
        uVar6 = *(uint *)(param_1 + 0x228);
        if (uVar8 != uVar6) {
          memmove((void *)(lVar5 + uVar8 * 4 + -4),(void *)(lVar5 + uVar8 * 4),
                  (longlong)(int)(iVar9 + uVar6) << 2);
          uVar6 = *(uint *)(param_1 + 0x228);
        }
        *(uint *)(param_1 + 0x228) = uVar6 - 1;
        FUN_140d827d0(param_1 + 0x1a0);
      }
      iVar9 = iVar9 + 1;
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < (longlong)iVar1) {
    iVar9 = -iVar1;
    uVar8 = (longlong)iVar1;
    do {
      lVar5 = *(longlong *)(param_1 + 0x70);
      if (*(uint *)(lVar5 + -8 + uVar8 * 8) == param_2) {
        uVar6 = *(uint *)(param_1 + 0x78);
        if (uVar8 != uVar6) {
          memmove((void *)(lVar5 + uVar8 * 8 + -8),(void *)(lVar5 + uVar8 * 8),
                  (longlong)(int)(uVar6 + iVar9) << 3);
          uVar6 = *(uint *)(param_1 + 0x78);
        }
        *(uint *)(param_1 + 0x78) = uVar6 - 1;
        FUN_1418832e6((longlong *)(param_1 + 0x70));
      }
      iVar9 = iVar9 + 1;
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
LAB_140d8246e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d827d0 FUN_140d827d0 body=74 status=ok
// SIG undefined FUN_140d827d0(void)

void FUN_140d827d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140d8281a(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_140724ba4(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,4);
  return;
}



// FUNCTION 140d8281a FUN_140d8281a body=105 status=ok
// SIG undefined FUN_140d8281a(void)

ulonglong FUN_140d8281a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 140d82884 FUN_140d82884 body=139 status=ok
// SIG undefined FUN_140d82884(void)

void FUN_140d82884(longlong param_1,int *param_2)

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
      if (*(int *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 4;
    } while (lVar5 * 4 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_140724a48(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_2;
  return;
}



// FUNCTION 140d82910 FUN_140d82910 body=519 status=ok
// SIG undefined FUN_140d82910(void)

void FUN_140d82910(longlong *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = param_1[1];
  if ((*(char *)(lVar10 + 0x1c3) != '\0') || (*(char *)(lVar10 + 0x1c0) != '\0'))
  goto switchD_140d829a9_caseD_3;
  local_60 = (undefined4)param_1[0x13];
  local_68 = param_1[0x12];
  iVar2 = *(int *)(lVar10 + 0x1c);
  *(int *)(lVar10 + 0x1c) = iVar2 + 1;
  uVar7 = (ulonglong)*(int *)(lVar10 + 0x10);
  if ((longlong)uVar7 < 1) {
    *(int *)(lVar10 + 0x1c) = iVar2;
  }
  else {
    bVar8 = false;
    do {
      lVar11 = uVar7 * 0x10 + -8;
      uVar12 = uVar7;
      while ((lVar3 = *(longlong *)(lVar10 + 8), *(int *)(lVar3 + lVar11) != 0 &&
             (plVar4 = *(longlong **)(lVar3 + -8 + lVar11), plVar4 != (longlong *)0x0))) {
        local_50 = local_60;
        local_58 = local_68;
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,&local_58);
        if (cVar6 == '\0') break;
        lVar11 = lVar11 + -0x10;
        bVar5 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar5) {
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + -1;
          if (!bVar8) goto LAB_140d82986;
          goto LAB_140d82b09;
        }
      }
      uVar7 = uVar12 - 1;
      bVar8 = true;
    } while (1 < uVar12);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + -1;
LAB_140d82b09:
    FUN_14474d06a((longlong *)(lVar10 + 8),0);
  }
LAB_140d82986:
  FUN_140d82b18(param_1,param_2);
  switch(param_2 & 0xff) {
  case 2:
    lVar10 = param_1[0x14] + 0xd8;
    puVar9 = local_78;
    goto LAB_140d829bd;
  case 4:
    (**(code **)(*param_1 + 0x100))(param_1);
    FUN_140d833ee(param_1 + 0x37);
    break;
  case 5:
    local_50 = (undefined4)param_1[0x13];
    local_58 = param_1[0x12];
    (**(code **)(*(longlong *)param_1[1] + 0x78))();
    break;
  case 6:
    FUN_140d850e0(param_1,0);
    (**(code **)(*param_1 + 0x110))(param_1);
    break;
  case 7:
    lVar10 = param_1[0x14] + 0x180;
    puVar9 = local_88;
LAB_140d829bd:
    FUN_140d853aa(param_1,puVar9,lVar10,0);
    plVar4 = *(longlong **)(puVar9 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
switchD_140d829a9_caseD_3:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d82b18 FUN_140d82b18 body=122 status=ok
// SIG undefined FUN_140d82b18(void)

void FUN_140d82b18(longlong param_1,undefined4 param_2)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(char)param_2 == '\x01');
  FUN_140d82cdc(param_1,uVar1 & 0xffffffff,*(longlong *)(param_1 + 0xa0) + 0x5e0,param_1 + 0x180);
  FUN_140d82f0e(param_1,uVar1 & 0xffffffff,*(longlong *)(param_1 + 0xa0) + 0x5f0,param_1 + 0x1a8);
  FUN_140d82b92(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
  FUN_140d82b92(*(undefined8 *)(param_1 + 8),param_1);
  FUN_140d82c98(*(undefined8 *)(param_1 + 0x80),param_2);
  return;
}



// FUNCTION 140d82b92 FUN_140d82b92 body=155 status=ok
// SIG undefined FUN_140d82b92(void)

void FUN_140d82b92(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_140d82c2e(param_1 + 0x150,&local_18);
    if (((*(int *)(param_1 + 0x54) != 0) && (uVar1 = *(uint *)(param_1 + 0x50), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x54))) &&
         (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
        FUN_1405f658a();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d82c2e FUN_140d82c2e body=105 status=ok
// SIG undefined FUN_140d82c2e(void)

ulonglong FUN_140d82c2e(longlong *param_1,longlong *param_2)

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
          goto LAB_140d82c7e;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140d8328c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_140d82c7e:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140d82c98 FUN_140d82c98 body=68 status=ok
// SIG undefined FUN_140d82c98(void)

void FUN_140d82c98(longlong param_1,char param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(param_1 + 0x48) != param_2)) {
    if (*(int *)(param_1 + 0x20) != -1) {
      FUN_143df53bc(param_1);
    }
    *(char *)(param_1 + 0x48) = param_2;
    FUN_140e5d67a(param_1);
    do {
      cVar1 = FUN_140d8564a(param_1,0);
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 140d82cdc FUN_140d82cdc body=533 status=ok
// SIG undefined FUN_140d82cdc(void)

void FUN_140d82cdc(longlong *param_1,char param_2,longlong param_3,char *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined8 **local_f8;
  undefined8 *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == '\0') {
    if (*param_4 != '\0') {
      FUN_140bc47b4(param_1[1]);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
    }
    goto LAB_140d82d13;
  }
  if (*param_4 != '\0') goto LAB_140d82d13;
  if (0 < *(int *)(param_3 + 8)) {
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    local_e0 = 3;
    *local_e8 = &PTR_LAB_149e020b0;
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
    local_e8[2] = lVar4;
    *local_e8 = &PTR_FUN_14b41cc10;
    local_e8[3] = param_1;
    local_e8[4] = FUN_1457b7554;
    local_a8 = (longlong *)0x0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    (**(code **)(*param_1 + 0x28))(param_1,&local_d8);
    uVar2 = FUN_140bc47b4(param_1[1]);
    local_f8 = &local_e8;
    FUN_140d8392c(param_4,param_3,uVar2,&local_d8);
    if (local_78 != 0) {
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8 != 0) {
      plVar3 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar3 = local_98;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_e0 != 0) {
      if (local_e8 == (undefined8 *)0x0) goto LAB_140d82d4c;
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      local_e0 = 0;
    }
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d82d4c:
  FUN_140d82b92(param_1[1],param_1);
LAB_140d82d13:
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d82f0e FUN_140d82f0e body=867 status=ok
// SIG undefined FUN_140d82f0e(void)

void FUN_140d82f0e(longlong *param_1,char param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    lVar5 = param_4[1];
    if (0 < (longlong)(int)lVar5) {
      lVar11 = *param_4;
      lVar13 = 0;
      do {
        (**(code **)(**(longlong **)(lVar11 + lVar13) + 0x18))();
        lVar13 = lVar13 + 0x10;
      } while ((longlong)(int)lVar5 * 0x10 != lVar13);
      FUN_140e02d42(*param_4,(int)param_4[1]);
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_3 + 1);
    if ((0 < (int)uVar3) && ((int)param_4[1] == 0)) {
      lVar5 = *param_3;
      lVar11 = 0;
      bVar12 = false;
      do {
        plVar6 = *(longlong **)(lVar5 + lVar11);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_68);
          plVar6 = local_68;
          if (local_68 != (longlong *)0x0) {
            puVar7 = *(undefined8 **)(lVar5 + lVar11);
            plVar8 = *(longlong **)(lVar5 + 8 + lVar11);
            if (plVar8 == (longlong *)0x0) {
              local_50 = (longlong *)0x0;
              local_58 = puVar7;
              uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
              FUN_143defa18(plVar6,uVar9,&local_58);
            }
            else {
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
              local_58 = puVar7;
              local_50 = plVar8;
              uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
              FUN_143defa18(plVar6,uVar9,&local_58);
              LOCK();
              plVar6 = plVar8 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
            (**(code **)(*local_68 + 0x10))();
            plVar6 = local_68;
            local_58 = (undefined8 *)0x0;
            local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
            FUN_1446efa72(&local_58,0,3,0x10);
            local_50 = (longlong *)CONCAT44(local_50._4_4_,3);
            *local_58 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar13 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar13 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar13;
            local_58[2] = lVar10;
            *local_58 = &PTR_FUN_14b41cc10;
            local_58[3] = param_1;
            local_58[4] = FUN_1457b7554;
            FUN_1448b6402(plVar6 + 4,local_70,&local_58);
            if ((int)local_50 == 0) {
LAB_140d83104:
              if (local_58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_58 != (undefined8 *)0x0) {
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
              goto LAB_140d83104;
            }
            plVar8 = local_60;
            plVar6 = local_68;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            iVar4 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
              FUN_146557a24(param_4,iVar4);
            }
            lVar13 = *param_4;
            *(longlong **)(lVar13 + (longlong)iVar4 * 0x10) = plVar6;
            *(longlong **)(lVar13 + 8 + (longlong)iVar4 * 0x10) = plVar8;
            bVar12 = true;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
              LOCK();
              plVar6 = plVar8 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
          plVar6 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_60 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_60)(local_60);
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
        lVar11 = lVar11 + 0x18;
      } while ((ulonglong)uVar3 * 0x18 != lVar11);
      if (bVar12) {
        FUN_140d82b92(param_1[1],param_1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8328c FUN_140d8328c body=353 status=ok
// SIG undefined FUN_140d8328c(void)

void FUN_140d8328c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d83311;
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
LAB_140d83311:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140d833ee FUN_140d833ee body=128 status=ok
// SIG undefined FUN_140d833ee(void)

void FUN_140d833ee(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_1489175d4(param_1 + 8);
  }
  FUN_140d8369e(param_1,param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      lVar5 = FUN_140dcc81c(uVar3);
      if (lVar5 == 0) {
LAB_140d83447:
        FUN_140dcc746(uVar3,1);
      }
      else {
        cVar4 = FUN_141042fba(lVar5);
        if (cVar4 == '\0') goto LAB_140d83447;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 140d8346e FUN_140d8346e body=118 status=ok
// SIG undefined FUN_140d8346e(void)

void FUN_140d8346e(char *param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*param_1 == '\x01')) {
    *param_1 = '\0';
    pcVar2 = *(char **)(param_1 + 0x18);
    if (*(char **)(param_1 + 0x18) == (char *)0x0) {
      pcVar2 = param_1 + 8;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(pcVar2 + lVar3) != 0) {
          FUN_140d83608(*(longlong *)(pcVar2 + lVar3),param_2);
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar3);
    }
    FUN_140d834e4(param_1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 140d834e4 FUN_140d834e4 body=77 status=ok
// SIG undefined FUN_140d834e4(void)

void FUN_140d834e4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_140d061ba(lVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != param_2) {
    FUN_140d83532(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d83532 FUN_140d83532 body=81 status=ok
// SIG undefined FUN_140d83532(void)

void FUN_140d83532(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  FUN_140d83584(param_1,*(undefined4 *)(param_1 + 0x18),uVar3);
  return;
}



// FUNCTION 140d83584 FUN_140d83584 body=131 status=ok
// SIG undefined FUN_140d83584(void)

void FUN_140d83584(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 140d83608 FUN_140d83608 body=149 status=ok
// SIG undefined FUN_140d83608(void)

void FUN_140d83608(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x88);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x88),0,0,0x10);
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
  }
  if (*(char *)(param_1 + 0x10) != '\x05') {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (param_2 != 0) {
        FUN_140825b72(param_1 + 0x40,*(longlong *)(param_1 + 0x80),param_2,0);
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    return;
  }
  FUN_1408256d2(param_1 + 0x18);
  return;
}



// FUNCTION 140d8369e FUN_140d8369e body=421 status=ok
// SIG undefined FUN_140d8369e(void)

void FUN_140d8369e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_140f42f34(*param_1);
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_140f430f8(lVar4);
  }
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_1 + 0xa0) + 0x20);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x18);
    lVar6 = 0;
    do {
      local_60 = *(undefined4 *)(lVar2 + 8 + lVar6);
      local_68 = *(undefined8 *)(lVar2 + lVar6);
      local_58 = local_68;
      local_50 = local_60;
      lVar7 = FUN_140f54c6c(*param_1,&local_58);
      if (lVar7 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140f54fb6(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
      }
      lVar6 = lVar6 + 0xc;
    } while (lVar4 * 0xc != lVar6);
  }
  FUN_140d83844(param_1,iVar3,param_2);
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_1 + 0xa0) + 0x40);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x38);
    lVar7 = lVar2 + 0x10;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar2 + 0xc + lVar6) <= iVar3) && (iVar3 <= *(int *)(lVar7 + lVar6))) {
        lVar5 = lVar7 + lVar6;
        local_70 = *(undefined4 *)(lVar5 + -8);
        local_78 = *(undefined8 *)(lVar5 + -0x10);
        local_58 = local_78;
        local_50 = local_70;
        lVar5 = FUN_140f54c6c(*param_1);
        if (lVar5 != 0) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_140f54fb6(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
        }
      }
      lVar6 = lVar6 + 0x14;
    } while (lVar4 * 0x14 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d83844 FUN_140d83844 body=231 status=ok
// SIG undefined FUN_140d83844(void)

void FUN_140d83844(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(*param_1 + 0xa0) + 0x30))) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x28);
    lVar4 = (longlong)*(int *)(lVar2 + 8 + (ulonglong)param_2 * 0x18);
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(lVar2 + (ulonglong)param_2 * 0x18);
      lVar5 = 0;
      do {
        local_60 = *(undefined4 *)(lVar2 + 8 + lVar5);
        local_68 = *(undefined8 *)(lVar2 + lVar5);
        local_58 = local_68;
        local_50 = local_60;
        lVar3 = FUN_140f54c6c(*param_1,&local_58);
        if (lVar3 != 0) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_140f54fb6(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
        }
        lVar5 = lVar5 + 0xc;
      } while (lVar4 * 0xc != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8392c FUN_140d8392c body=2238 status=ok
// SIG undefined FUN_140d8392c(void)

void FUN_140d8392c(char *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  uint local_174;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  char *local_160;
  char *local_158;
  longlong local_150;
  undefined8 local_148;
  char *local_140;
  longlong *local_138;
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined1 local_e8 [4];
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((param_3 != 0) && (*param_1 == '\0')) {
    *param_1 = '\x01';
    iVar11 = *(int *)(param_2 + 1);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_160 = param_1 + 8;
    if (*(int *)(param_1 + 0x24) < iVar11) {
      FUN_140d83532(local_160);
      iVar11 = *(int *)(param_2 + 1);
    }
    if (iVar11 != 0) {
      pcVar15 = (char *)*param_2;
      local_140 = pcVar15 + (longlong)iVar11 * 0x30;
      do {
        plVar6 = (longlong *)FUN_14001cc68(0x98);
        memset(plVar6,0,0x98);
        *(undefined1 *)(plVar6 + 2) = 5;
        plVar6[3] = 0;
        plVar6[4] = 0;
        *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
        *(undefined1 *)((longlong)plVar6 + 0x41) = 0;
        *(undefined4 *)(plVar6 + 9) = 0;
        plVar6[10] = 0;
        plVar6[0xb] = 0;
        *(undefined4 *)(plVar6 + 0xc) = 0;
        plVar6[0xd] = 0;
        plVar6[0xe] = 0;
        plVar6[0xf] = 0;
        plVar6[0x10] = 0;
        *(undefined8 *)((longlong)plVar6 + 0x84) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x8c) = 0;
        plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14b400810;
        plVar7[2] = (longlong)plVar6;
        if ((plVar6 != (longlong *)0x0) &&
           (((*plVar6 == 0 || (plVar6[1] == 0)) || (*(int *)(plVar6[1] + 8) < 1)))) {
          if (plVar7 == (longlong *)0x0) {
            *plVar6 = (longlong)plVar6;
            plVar10 = (longlong *)plVar6[1];
            if (plVar10 != (longlong *)0x0) {
LAB_140d8409d:
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))();
              }
              plVar6[1] = (longlong)plVar7;
              if (plVar7 != (longlong *)0x0) goto LAB_140d83a76;
            }
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            *plVar6 = (longlong)plVar6;
            if ((longlong *)plVar6[1] != plVar7) {
              LOCK();
              *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
              UNLOCK();
              plVar10 = (longlong *)plVar6[1];
              if (plVar10 != (longlong *)0x0) goto LAB_140d8409d;
              plVar6[1] = (longlong)plVar7;
            }
LAB_140d83a76:
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
        cVar5 = *pcVar15;
        *(char *)(plVar6 + 2) = cVar5;
        if (cVar5 == '\x05') {
          local_188 = param_5;
          FUN_140d841ec(plVar6 + 3,pcVar15 + 8,param_3,param_4);
        }
        else {
          plVar10 = *(longlong **)(pcVar15 + 0x18);
          if (((longlong *)plVar6[5] != plVar10) ||
             (iVar11 = (int)plVar6[6], iVar11 != *(int *)(pcVar15 + 0x20))) {
            plVar6[5] = (longlong)plVar10;
            iVar11 = *(int *)(pcVar15 + 0x20);
            *(int *)(plVar6 + 6) = iVar11;
            plVar6[7] = 0;
          }
          local_158 = param_1;
          local_150 = param_3;
          local_148 = param_4;
          if (iVar11 == 0x2000) {
            local_138 = plVar10;
            FUN_1401533ba(&local_f8,&local_138,1);
            local_174 = local_f8;
            local_170 = uStack_f4;
            local_164 = 0;
            uVar16 = 0;
            uVar17 = 0;
            uVar14 = uStack_f0;
          }
          else {
            if (iVar11 == 0x2001) {
              local_138 = plVar10;
              FUN_1401533ba(&local_f8,&local_138,1);
              local_16c = local_f8;
              local_104 = local_f8;
              local_168 = uStack_f4;
              local_100 = uStack_f4;
              local_164 = uStack_f0;
              local_fc = uStack_f0;
              FUN_1448075d0(&local_f8,&local_104);
              lVar9 = FUN_14060eaf6(&local_f8);
              if (CONCAT44(uStack_dc,local_e0) != 0) {
                FUN_1400020a8();
              }
              uVar16 = local_168;
              uVar17 = local_16c;
              if ((lVar9 != 0) && (*(char *)(lVar9 + 0x750) == '\0')) {
                local_138 = *(longlong **)(lVar9 + 0x4d8);
                FUN_1401533ba(&local_f8,&local_138,1);
                uVar16 = local_168;
                uVar17 = local_16c;
                if (local_f8 != 0) {
                  if ((*(longlong **)(lVar9 + 0x4d8) == (longlong *)0x0 & *(byte *)(lVar9 + 0x750))
                      == 1) {
                    uStack_f0 = DAT_14cb88800;
                    local_f8 = (uint)DAT_14cb887f8;
                    uStack_f4 = (undefined4)((ulonglong)DAT_14cb887f8 >> 0x20);
                  }
                  else {
                    local_138 = *(longlong **)(lVar9 + 0x4d8);
                    FUN_1401533ba(&local_f8,&local_138,1);
                  }
                  local_174 = local_f8;
                  local_170 = uStack_f4;
                  uVar14 = uStack_f0;
                  uVar17 = local_16c;
                  uVar16 = local_168;
                  goto LAB_140d83c47;
                }
              }
            }
            else {
              local_164 = 0;
              uVar16 = 0;
              uVar17 = 0;
            }
            local_170 = 0;
            local_174 = 0;
            uVar14 = 0;
          }
LAB_140d83c47:
          plVar10 = plVar6 + 8;
          plVar3 = plVar6 + 10;
          *(undefined1 *)plVar10 = 10;
          FUN_140c25b54(plVar10);
          local_110 = local_174;
          local_10c = local_170;
          local_108 = uVar14;
          FUN_144928d62(plVar3,1,&local_110);
          local_114 = local_164;
          local_11c = uVar17;
          local_118 = uVar16;
          FUN_144928d62(plVar3,2,&local_11c);
          local_120 = DAT_14cb88980;
          local_128 = DAT_14cb88978;
          FUN_144928d62(plVar3,4,&local_128);
          FUN_140114204(plVar10);
          cVar5 = FUN_140114204(plVar10);
          param_4 = local_148;
          param_3 = local_150;
          param_1 = local_158;
          if ((cVar5 != '\0') && (plVar6[0x10] == 0)) {
            local_f8 = local_f8 & 0xffffff00;
            uStack_f4 = 0;
            uStack_f0 = 0;
            local_ec = 0;
            local_e8[0] = 0;
            uStack_dc = 0;
            uStack_e4 = 0;
            local_e0 = 0;
            local_c8 = 0xc69c4000;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            local_67 = 1;
            local_65 = 0;
            local_64 = 0;
            local_138 = (longlong *)0x0;
            local_130 = 0;
            FUN_1446efa72(&local_138,0,3,0x10);
            local_130 = 3;
            plVar3 = (longlong *)plVar6[1];
            if (plVar3 == (longlong *)0x0) {
LAB_140d8410a:
              *local_138 = (longlong)&PTR_LAB_14b3e6310;
              LOCK();
              UNLOCK();
              lVar13 = DAT_14c758608 + 1;
              lVar9 = DAT_14c758608 + 1;
              if (lVar13 == 0) {
                LOCK();
                UNLOCK();
                lVar13 = DAT_14c758608 + 2;
                lVar9 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar9;
              local_138[2] = lVar13;
              *local_138 = (longlong)&PTR_FUN_14b4007a0;
              local_138[3] = 0;
              local_138[4] = 0;
              local_138[5] = (longlong)FUN_141188dd6;
            }
            else {
              iVar11 = (int)plVar3[1];
              do {
                if (iVar11 == 0) goto LAB_140d8410a;
                LOCK();
                iVar4 = (int)plVar3[1];
                bVar18 = iVar11 == iVar4;
                if (bVar18) {
                  *(int *)(plVar3 + 1) = iVar11 + 1;
                  iVar4 = iVar11;
                }
                iVar11 = iVar4;
                UNLOCK();
              } while (!bVar18);
              lVar9 = *plVar6;
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              *local_138 = (longlong)&PTR_LAB_14b3e6310;
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 1;
              lVar13 = DAT_14c758608 + 1;
              if (lVar12 == 0) {
                LOCK();
                UNLOCK();
                lVar12 = DAT_14c758608 + 2;
                lVar13 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar13;
              local_138[2] = lVar12;
              *local_138 = (longlong)&PTR_FUN_14b4007a0;
              local_138[3] = lVar9;
              local_138[4] = (longlong)plVar3;
              LOCK();
              *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
              UNLOCK();
              local_138[5] = (longlong)FUN_141188dd6;
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
            local_d8 = local_138;
            local_d0 = local_130;
            FUN_140983ba6(plVar10,param_3,&local_f8);
            if (local_d8 == (longlong *)0x0 || local_d0 == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              (**(code **)(*local_d8 + 0x38))(local_d8,&local_138);
              plVar10 = local_138;
            }
            plVar6[0x10] = (longlong)plVar10;
            FUN_1403a0728(local_e8,&local_138);
            plVar6[0xf] = (longlong)local_138;
            FUN_14009d848(plVar6 + 0x11,param_5);
            FUN_1409838b8(&local_f8);
          }
        }
        iVar11 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar11 + 1U) {
          FUN_14884e34a(local_160,iVar11);
        }
        pcVar8 = *(char **)(param_1 + 0x18);
        if (*(char **)(param_1 + 0x18) == (char *)0x0) {
          pcVar8 = local_160;
        }
        *(longlong **)(pcVar8 + (longlong)iVar11 * 0x10) = plVar6;
        *(longlong **)(pcVar8 + (longlong)iVar11 * 0x10 + 8) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar7 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        pcVar15 = pcVar15 + 0x30;
      } while (pcVar15 != local_140);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d841ec FUN_140d841ec body=73 status=ok
// SIG undefined FUN_140d841ec(void)

void FUN_140d841ec(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d84236(param_3);
  }
  uVar2 = FUN_140d84280(param_1);
  FUN_140d84456(uVar2,param_2,uVar1,param_4);
  return;
}



// FUNCTION 140d84236 FUN_140d84236 body=73 status=ok
// SIG undefined FUN_140d84236(void)

undefined8 FUN_140d84236(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 100) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 100)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140d84280 FUN_140d84280 body=470 status=ok
// SIG undefined FUN_140d84280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140d84280(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  plVar3 = (longlong *)FUN_14001cc68(0x1f8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b400780;
  *(undefined1 *)((longlong)plVar3 + 0x24) = 0;
  plVar3[0x3c] = 0;
  plVar3[0x3d] = 0x400000000;
  *(undefined1 *)(plVar3 + 4) = 0;
  plVar5 = plVar3 + 2;
  *plVar5 = 0;
  plVar3[3] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0;
  plVar3[0x3e] = 0;
  if (plVar5 == (longlong *)0x0) {
    if (plVar3 == (longlong *)0x0) goto LAB_140d843aa;
LAB_140d8433a:
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar5;
    plVar5 = (longlong *)param_1[1];
    if (plVar3 == plVar5) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar5 != (longlong *)0x0) {
        bVar2 = false;
        goto LAB_140d8440b;
      }
    }
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar3[2] = (longlong)plVar5;
      if ((longlong *)plVar3[3] != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar3[3] != (longlong *)0x0) {
          plVar6 = plVar3 + 3;
          plVar4 = (longlong *)plVar3[3];
          goto LAB_140d84396;
        }
        plVar3[3] = (longlong)plVar3;
      }
LAB_140d84330:
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
      goto LAB_140d8433a;
    }
    _DAT_00000010 = 0x10;
    plVar6 = (longlong *)&DAT_00000018;
    plVar4 = _DAT_00000018;
    if (_DAT_00000018 != (longlong *)0x0) {
LAB_140d84396:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *plVar6 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_140d84330;
    }
LAB_140d843aa:
    *param_1 = (longlong)plVar5;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) goto LAB_140d84365;
    param_1[1] = (longlong)plVar3;
    bVar2 = true;
LAB_140d8440b:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (bVar2) goto LAB_140d84365;
  }
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
LAB_140d84365:
  return *param_1;
}



// FUNCTION 140d84456 FUN_140d84456 body=904 status=ok
// SIG undefined FUN_140d84456(void)

void FUN_140d84456(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_d8 [40];
  int *local_b0;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  undefined **local_88;
  int *local_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_4;
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) ||
     (*(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1, *(int *)(param_2 + 8) == 0))
  goto LAB_140d846cb;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x24) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar11 = iVar3 == 0;
      if (bVar11) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar3 = iVar7;
      }
    }
  }
  *(int *)(param_1 + 0x28) = iVar3;
  FUN_14009d848(param_1 + 0x40,param_5);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  FUN_1400fce78((longlong *)(param_1 + 0x30),param_2);
  if (*local_b0 != 0) {
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b400760;
    local_80 = local_b0;
    local_a8 = 0x172e;
    uStack_a6 = 0x43d4;
    uStack_a4 = 1;
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar8 = (longlong)*(int *)(param_1 + 0x38) * 0x50;
      do {
        FUN_14014e388();
        lVar8 = lVar8 + -0x50;
      } while (lVar8 != 0);
      if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) == 0) goto LAB_140d8451c;
    }
    pppuVar5 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar5 = &local_88;
    }
    (*(code *)(*pppuVar5)[2])();
  }
LAB_140d8451c:
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar8 = 0x18;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (0 < *(int *)(lVar4 + 4 + lVar8)) {
        local_98 = (undefined ***)0x0;
        uStack_90 = 0;
        local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
        local_80 = (int *)0x0;
        uStack_78 = 0;
        uStack_a0 = *(undefined4 *)(lVar4 + lVar8 + -8);
        uVar10 = *(undefined8 *)(lVar4 + lVar8 + -0x10);
        local_a8 = (undefined2)uVar10;
        uStack_a6 = (undefined2)((ulonglong)uVar10 >> 0x10);
        uStack_a4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FUN_1447715ec(&local_98,lVar4 + lVar8);
        if ((*(int *)(param_1 + 0x28) == 0) || (uVar2 = *(uint *)(param_1 + 0x24), (int)uVar2 < 0))
        {
LAB_140d8477f:
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x28))
                ) || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_140d8477f;
            uVar10 = *puVar6;
          }
        }
        FUN_140d847e0(local_b0,&local_a8,uVar10);
        iVar3 = *(int *)(param_1 + 0x1d8);
        *(uint *)(param_1 + 0x1d8) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x1dc) < iVar3 + 1U) {
          FUN_140d84fdc(param_1 + 0x50,iVar3);
        }
        lVar4 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar4 = param_1 + 0x50;
        }
        plVar1 = (longlong *)(lVar4 + (longlong)iVar3 * 0x60);
        *plVar1 = param_1;
        *(int *)(plVar1 + 1) = (int)lVar9;
        *(undefined2 *)(plVar1 + 2) = 0;
        *(undefined8 *)((longlong)plVar1 + 0x14) = 0;
        plVar1[4] = 0;
        plVar1[5] = 0;
        *(undefined4 *)(plVar1 + 6) = 0;
        plVar1[7] = 0;
        plVar1[8] = 0;
        plVar1[2] = CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
        *(undefined4 *)(plVar1 + 3) = uStack_a0;
        FUN_1447715ec(plVar1 + 4,&local_98);
        *(undefined1 *)(plVar1 + 9) = 0;
        *(undefined8 *)((longlong)plVar1 + 0x4c) = 0;
        *(undefined8 *)((longlong)plVar1 + 0x54) = 0;
        *(undefined4 *)((longlong)plVar1 + 0x5c) = 0;
        if (local_80 != (int *)0x0) {
          FUN_1400020a8();
        }
        iVar3 = *(int *)(param_1 + 0x38);
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x50;
    } while (lVar9 < iVar3);
  }
  FUN_140983092(param_1);
LAB_140d846cb:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d847e0 FUN_140d847e0 body=99 status=ok
// SIG undefined FUN_140d847e0(void)

void FUN_140d847e0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    if (*(longlong **)(param_1 + 0xc) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0xc);
    }
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140d84840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_140d84843(param_2,param_1,param_1 + 3,param_3);
  return;
}



// FUNCTION 140d84843 FUN_140d84843 body=1944 status=ok
// SIG undefined FUN_140d84843(void)

void FUN_140d84843(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  int local_a4 [3];
  longlong local_98;
  int local_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar3 = (char)*param_1;
  if (cVar3 == '\v') {
    if (((param_4 == (longlong *)0x0) ||
        (lVar4 = (**(code **)(*param_4 + 0x2b0))(param_4), lVar4 == 0)) ||
       (plVar5 = (longlong *)FUN_14039ffc6(lVar4), plVar5 == (longlong *)0x0)) {
LAB_140d849e1:
      local_b0 = *param_2;
      local_a8 = (int)param_2[1];
      FUN_1448075d0(&local_70);
      lVar4 = FUN_14060eaf6(&local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        plVar5 = &DAT_14c948618;
        if ((((int)param_1[2] != 0) && (0 < (int)*(uint *)((longlong)param_1 + 0x14))) &&
           ((int)param_1[2] != DAT_14c948000)) {
          plVar5 = param_1 + 3;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            plVar5 = (longlong *)param_1[5];
          }
          if (1 < *(uint *)((longlong)param_1 + 0x14)) {
            plVar5 = (longlong *)param_1[5];
          }
        }
        if ((longlong)*(int *)(lVar4 + 0x98) != 0) {
          piVar8 = *(int **)(lVar4 + 0x90);
          lVar4 = (longlong)*(int *)(lVar4 + 0x98) * 0x48;
          do {
            if ((*piVar8 == (int)*plVar5) && (piVar8[2] == (int)plVar5[1])) {
              if (piVar8 != (int *)0x0) {
                FUN_14096c63a(piVar8 + 4,&local_70);
                FUN_140b7a557(&local_70,param_1);
                *(undefined4 *)(param_1 + 1) = local_68;
                *param_1 = local_70;
                FUN_1447715ec(param_1 + 2,local_60);
                if (local_48 != 0) {
                  FUN_1400020a8();
                }
              }
              break;
            }
            piVar8 = piVar8 + 0x12;
            lVar4 = lVar4 + -0x48;
          } while (lVar4 != 0);
        }
      }
    }
    else {
      (**(code **)(*plVar5 + 0x78))(plVar5,&local_98,param_2);
      if (local_98 == 0) {
LAB_140d849b8:
        plVar5 = (longlong *)CONCAT44(uStack_8c,local_90);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar5 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar8 = (int *)((longlong)plVar5 + 0xc);
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (*piVar8 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        goto LAB_140d849e1;
      }
      if ((((int)param_1[2] == 0) || (iVar1 = *(int *)((longlong)param_1 + 0x14), iVar1 == 0)) ||
         (((int)param_1[2] == DAT_14c948000 || (iVar1 < 1)))) {
        local_68 = DAT_14c948620;
        local_70 = DAT_14c948618;
      }
      else {
        plVar5 = param_1 + 3;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          plVar5 = (longlong *)param_1[5];
        }
        if (iVar1 != 1) {
          plVar5 = (longlong *)param_1[5];
        }
        local_68 = (undefined4)plVar5[1];
        local_70 = *plVar5;
      }
      lVar4 = FUN_140ca9be8(local_98,&local_70);
      if (lVar4 == 0) goto LAB_140d849b8;
      FUN_14096c63a(lVar4 + 0x10,&local_70);
      FUN_140b7a557(&local_70,param_1);
      *(undefined4 *)(param_1 + 1) = local_68;
      *param_1 = local_70;
      FUN_1447715ec(param_1 + 2,local_60);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      plVar5 = (longlong *)CONCAT44(uStack_8c,local_90);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar8 = (int *)((longlong)plVar5 + 0xc);
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    cVar3 = (char)*param_1;
  }
  if (cVar3 == '\n') {
    piVar8 = (int *)&DAT_14c948618;
    piVar6 = &DAT_14c948620;
    if ((((int)param_1[2] != 0) && (1 < *(int *)((longlong)param_1 + 0x14))) &&
       ((int)param_1[2] != DAT_14c948000)) {
      piVar8 = (int *)(param_1[5] + 0xc);
      piVar6 = (int *)(param_1[5] + 0x14);
    }
    plVar5 = param_1 + 2;
    iVar1 = *piVar8;
    iVar2 = *piVar6;
    if ((iVar1 == DAT_14cb7bbb0) && (iVar2 == DAT_14cb7bbb4._4_4_)) {
      if (((int)*param_3 != 0) && ((int)*param_2 != 0)) {
        local_98 = *param_2;
        local_90 = (int)param_2[1];
        FUN_1448075d0(&local_70);
        lVar4 = FUN_14060eaf6(&local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (lVar4 == 0) {
          local_68 = DAT_14c948620;
          local_70 = DAT_14c948618;
        }
        else if ((*(longlong *)(lVar4 + 0x4d8) == 0 & *(byte *)(lVar4 + 0x750)) == 1) {
          local_68 = DAT_14cb88800;
          local_70 = DAT_14cb887f8;
        }
        else {
          local_88 = *(longlong *)(lVar4 + 0x4d8);
          FUN_1401533ba(&local_70,&local_88,1);
        }
        FUN_144928d62(plVar5,1,&local_70);
        local_90 = (int)param_2[1];
        local_98 = *param_2;
        FUN_144928d62(plVar5,2);
        local_80 = (int)param_3[1];
        local_88 = *param_3;
        FUN_1418813ea(param_1);
      }
    }
    else {
      if ((iVar1 == DAT_14cb7bd98) && (iVar2 == DAT_14cb7bd9c._4_4_)) {
        if ((int)*param_2 == 0) goto LAB_140d84cba;
        local_98 = *param_2;
        local_90 = (int)param_2[1];
        FUN_1448075d0(&local_70);
        lVar4 = FUN_14060eaf6(&local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (lVar4 == 0) {
          local_68 = DAT_14c948620;
          local_70 = DAT_14c948618;
        }
        else if ((*(longlong *)(lVar4 + 0x4d8) == 0 & *(byte *)(lVar4 + 0x750)) == 1) {
          local_68 = DAT_14cb88800;
          local_70 = DAT_14cb887f8;
        }
        else {
          local_88 = *(longlong *)(lVar4 + 0x4d8);
          FUN_1401533ba(&local_70,&local_88,1);
        }
        FUN_144928d62(plVar5,1,&local_70);
        local_90 = (int)param_2[1];
        plVar7 = &local_98;
        local_98 = *param_2;
        uVar9 = 2;
      }
      else {
        if ((iVar1 == DAT_14cb7bbc8) && (iVar2 == DAT_14cb7bbcc._4_4_)) {
          if ((param_4 != (longlong *)0x0) &&
             ((lVar4 = (**(code **)(*param_4 + 0x2b0))(param_4), lVar4 != 0 &&
              (plVar7 = (longlong *)FUN_14039ffc6(lVar4), plVar7 != (longlong *)0x0)))) {
            (**(code **)(*plVar7 + 0x78))(plVar7,&local_98,param_2);
            if (local_98 != 0) {
              FUN_143d35b80(local_98,local_a4);
              local_88 = *param_2;
              local_80 = (int)param_2[1];
              FUN_1448075d0(&local_70);
              lVar4 = FUN_14060eaf6(&local_70);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              if (lVar4 == 0) {
                local_68 = DAT_14c948620;
                local_70 = DAT_14c948618;
              }
              else if ((*(longlong *)(lVar4 + 0x4d8) == 0 & *(byte *)(lVar4 + 0x750)) == 1) {
                local_68 = DAT_14cb88800;
                local_70 = DAT_14cb887f8;
              }
              else {
                local_78 = *(longlong *)(lVar4 + 0x4d8);
                FUN_1401533ba(&local_70,&local_78,1);
              }
              FUN_144928d62(plVar5,1,&local_70);
              plVar7 = (longlong *)local_a4;
              if (local_a4[0] == 0) {
                plVar7 = param_2;
              }
              local_88 = *plVar7;
              local_80 = (int)plVar7[1];
              FUN_144928d62(plVar5,2);
            }
            plVar5 = (longlong *)CONCAT44(uStack_8c,local_90);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar5 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar8 = (int *)((longlong)plVar5 + 0xc);
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (*piVar8 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          goto LAB_140d84cba;
        }
        if ((iVar1 != DAT_14cb7bbe0) || (iVar2 != DAT_14cb7bbe4._4_4_)) goto LAB_140d84cba;
        local_98 = *param_2;
        local_90 = (int)param_2[1];
        FUN_1448075d0(&local_70);
        lVar4 = FUN_14060eaf6(&local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (lVar4 == 0) {
          local_68 = DAT_14c948620;
          local_70 = DAT_14c948618;
        }
        else if ((*(longlong *)(lVar4 + 0x4d8) == 0 & *(byte *)(lVar4 + 0x750)) == 1) {
          local_68 = DAT_14cb88800;
          local_70 = DAT_14cb887f8;
        }
        else {
          local_88 = *(longlong *)(lVar4 + 0x4d8);
          FUN_1401533ba(&local_70,&local_88,1);
        }
        plVar7 = &local_70;
        uVar9 = 1;
      }
      FUN_144928d62(plVar5,uVar9,plVar7);
    }
  }
LAB_140d84cba:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d84fdc FUN_140d84fdc body=260 status=ok
// SIG undefined FUN_140d84fdc(void)

void FUN_140d84fdc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar6 = 4;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar5 = lVar2 * 0x60;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
      iVar3 = (int)(uVar5 / 0x60);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar6;
    FUN_140825a04(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140d850e0 FUN_140d850e0 body=713 status=ok
// SIG undefined FUN_140d850e0(void)

void FUN_140d850e0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_140d7e454(*(undefined8 *)(param_1 + 8));
  FUN_140d85cb7(*(undefined8 *)(param_1 + 0xa0),uVar5);
  lVar9 = *(longlong *)(param_1 + 0xa0);
  if ((longlong)*(int *)(lVar9 + 0x380) != 0) {
    lVar7 = *(longlong *)(lVar9 + 0x378);
    lVar9 = (longlong)*(int *)(lVar9 + 0x380) * 0x70;
    do {
      FUN_140bc46c6(param_1,lVar7,0,0);
      lVar7 = lVar7 + 0x70;
      lVar9 = lVar9 + -0x70;
    } while (lVar9 != 0);
    lVar9 = *(longlong *)(param_1 + 0xa0);
  }
  if ((longlong)*(int *)(lVar9 + 0x98) != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 0x90);
    puVar11 = puVar10 + (longlong)*(int *)(lVar9 + 0x98) * 9;
    do {
      if ((longlong)*(int *)(puVar10 + 8) != 0) {
        lVar9 = puVar10[7];
        lVar7 = (longlong)*(int *)(puVar10 + 8) << 6;
        do {
          local_50 = *(undefined4 *)(puVar10 + 1);
          local_58 = *puVar10;
          FUN_140d85a76(param_1,&local_58,lVar9);
          lVar9 = lVar9 + 0x40;
          lVar7 = lVar7 + -0x40;
        } while (lVar7 != 0);
      }
      puVar10 = puVar10 + 9;
    } while (puVar10 != puVar11);
    lVar9 = *(longlong *)(param_1 + 0xa0);
  }
  FUN_140d853aa(param_1,local_68,lVar9 + 0x158,param_2);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xa0);
  iVar2 = *(int *)(lVar9 + 0x4c0);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x4b8);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar9 + lVar7);
      lVar6 = FUN_140672052(*(undefined8 *)(param_1 + 8));
      if (((lVar6 != 0) && (cVar4 = FUN_140a63060(), cVar4 != '\0')) &&
         (FUN_140d853aa(param_1,local_78,lVar3 + 0x268,param_2), local_70 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
    lVar9 = *(longlong *)(param_1 + 0xa0);
  }
  lVar7 = FUN_140f42f34(param_1);
  if (lVar7 == 0) {
    local_80 = 0;
  }
  else {
    FUN_140d85616(lVar7,&local_80);
  }
  if ((longlong)*(int *)(lVar9 + 0x78) != 0) {
    plVar8 = *(longlong **)(lVar9 + 0x70);
    lVar9 = (longlong)*(int *)(lVar9 + 0x78) * 0x60;
    do {
      if (*plVar8 == local_80) {
        if (plVar8 != (longlong *)0x0) {
          if ((longlong)(int)plVar8[4] != 0) {
            puVar11 = (undefined8 *)plVar8[3];
            puVar10 = puVar11 + (longlong)(int)plVar8[4] * 10;
            do {
              local_50 = *(undefined4 *)(puVar11 + 1);
              local_58 = *puVar11;
              FUN_140d85a76(param_1,&local_58,puVar11 + 2);
              puVar11 = puVar11 + 10;
            } while (puVar11 != puVar10);
          }
          FUN_140d853aa(param_1,local_90,plVar8 + 5,param_2);
          if (local_88 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_88 + 0x10))();
            }
          }
        }
        break;
      }
      plVar8 = plVar8 + 0xc;
      lVar9 = lVar9 + -0x60;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d853aa FUN_140d853aa body=620 status=ok
// SIG undefined FUN_140d853aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140d853aa(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  iVar3 = *(int *)(param_3 + 0x10);
  if (iVar3 < 1) {
LAB_140d853c5:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (param_4 != '\0') {
    FUN_140f691f2(param_1,param_3);
    goto LAB_140d853c5;
  }
  plVar7 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b41cca0;
  plVar1 = plVar7 + 2;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = param_1;
  *(undefined4 *)(plVar7 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)plVar7 + 0x34) = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  *(undefined1 *)(plVar7 + 9) = 0;
  plVar7[2] = (longlong)&PTR_FUN_14b41ccc0;
  plVar7[10] = (longlong)&PTR_FUN_14b00be10;
  plVar7[0xb] = 0;
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(int *)(plVar7 + 0xc) = iVar3;
  FUN_1407fb7e8(plVar7 + 0xb,iVar3,0);
  FUN_1406b363d(plVar7[0xb],uVar4,iVar3);
  plVar7[0xd] = 0;
  iVar3 = *(int *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  *(int *)(plVar7 + 0xe) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)plVar7 + 0x74) = 0;
  }
  else {
    FUN_1407fb936(plVar7 + 0xd,iVar3,0);
    FUN_1406b40b4(plVar7[0xd],uVar4,iVar3);
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar7[3] != 0 && (plVar7[4] != 0)) && (0 < *(int *)(plVar7[4] + 8))))) goto LAB_140d854e2;
  if (plVar7 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar9 = (longlong *)&DAT_00000020;
    plVar8 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_140d854e2;
LAB_140d855d9:
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *plVar9 = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_140d854e2;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar7[3] = (longlong)plVar1;
    if ((longlong *)plVar7[4] != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar7[4] != (longlong *)0x0) {
        plVar9 = plVar7 + 4;
        plVar8 = (longlong *)plVar7[4];
        goto LAB_140d855d9;
      }
      plVar7[4] = (longlong)plVar7;
    }
  }
  LOCK();
  plVar9 = plVar7 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_140d854e2:
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_140d85968((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  do {
    cVar6 = FUN_140d8564a(plVar1,0);
  } while (cVar6 != '\0');
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar7;
  if (plVar7 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 != 0) {
    return param_2;
  }
  (**(code **)*plVar7)(plVar7);
  LOCK();
  piVar2 = (int *)((longlong)plVar7 + 0xc);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 != 0) {
    return param_2;
  }
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return param_2;
}



// FUNCTION 140d85616 FUN_140d85616 body=51 status=ok
// SIG undefined FUN_140d85616(void)

undefined8 * FUN_140d85616(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1403a0728(lVar1 + 0x38,param_2);
  }
  return param_2;
}



// FUNCTION 140d8564a FUN_140d8564a body=797 status=ok
// SIG undefined FUN_140d8564a(void)

ulonglong FUN_140d8564a(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 7) = 0;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  lVar7 = (**(code **)(*param_1 + 8))();
  if (lVar7 != 0) {
    iVar6 = (int)param_1[4];
    if (((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar7 + 0x10))) &&
       (lVar7 = (longlong)iVar6 * 0x18 + *(longlong *)(lVar7 + 8), lVar7 != 0)) {
      lVar10 = param_1[3];
      if ((param_2 == '\0') && (plVar8 = (longlong *)param_1[2], plVar8 != (longlong *)0x0)) {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_140d8580e;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar11 = iVar6 == iVar4;
          if (bVar11) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar11);
        lVar3 = param_1[1];
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
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        local_d8 = lVar3;
        plStack_d0 = plVar8;
        FUN_143df5552(lVar10,&local_e8,lVar7);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
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
      else {
LAB_140d8580e:
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        FUN_143df5552(lVar10,&local_e8,lVar7);
      }
      if (local_e8 != 0) {
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)param_1[6];
        param_1[5] = local_e8;
        param_1[6] = (longlong)local_e0;
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
      }
      uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_e8 == 0);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_e0 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      goto LAB_140d8593c;
    }
  }
  lVar7 = (**(code **)(*param_1 + 8))(param_1);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x20) < 1)) ||
     (cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))(), cVar5 != '\0')) {
LAB_140d85926:
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  else {
    local_a8 = (longlong *)0x0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    (**(code **)(*(longlong *)param_1[3] + 0x28))();
    bVar11 = true;
    if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
      lVar10 = *(longlong *)(lVar7 + 0x18) + 0x10;
      lVar7 = (longlong)*(int *)(lVar7 + 0x20) << 5;
      do {
        if ((*(int *)(lVar10 + 8) == 0) || (cVar5 = FUN_1414b30ac(lVar10,&local_d8), cVar5 != '\0'))
        {
          *(undefined1 *)((longlong)param_1 + 0x24) = 1;
          lVar7 = (**(code **)(*(longlong *)param_1[3] + 0x70))();
          if (lVar7 != 0) {
            FUN_143df03f6(lVar7,lVar10 + -0x10,3);
          }
          bVar11 = false;
          break;
        }
        lVar10 = lVar10 + 0x20;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
    if (local_78 != 0) {
      plVar8 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar8 = local_58;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_b8 != 0) {
      plVar8 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar8 = local_98;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((bVar11) || (*(char *)((longlong)param_1 + 0x24) == '\x01')) goto LAB_140d85926;
  }
  uVar9 = 0;
LAB_140d8593c:
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140d85968 FUN_140d85968 body=269 status=ok
// SIG undefined FUN_140d85968(void)

void FUN_140d85968(longlong param_1,int param_2)

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



// FUNCTION 140d85a76 FUN_140d85a76 body=359 status=ok
// SIG undefined FUN_140d85a76(void)

void FUN_140d85a76(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 local_90 [4];
  undefined8 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong lStack_68;
  char local_60 [8];
  undefined4 local_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = *param_2;
  local_d8 = *(undefined4 *)(param_2 + 1);
  (**(code **)(*param_1 + 0x10))(param_1,local_60);
  if (local_60[0] != '\0') {
    if (*param_3 != 0) {
      local_e8 = param_3[2];
      local_f0 = *(undefined8 *)param_3;
      FUN_1402939f8(local_60);
    }
    cVar2 = FUN_140114204(local_60);
    if (cVar2 != '\0') {
      local_b0 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_90[0] = 0;
      local_8c = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      lStack_68 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_c8 = local_58;
      FUN_1447715ec();
      FUN_140427366(param_3 + 4,local_90);
      local_98 = 0;
      FUN_140bc46c6(param_1,local_d0,0,0);
      lVar1 = lStack_68;
      if (lStack_68 != 0) {
        FUN_144a2da94(lStack_68);
        FUN_1400020a8(lVar1);
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d85bde FUN_140d85bde body=214 status=ok
// SIG undefined FUN_140d85bde(void)

undefined2 * FUN_140d85bde(undefined8 param_1,undefined2 *param_2,int *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined2 local_58 [2];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  local_58[0] = 0xb;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_68 = *(undefined8 *)param_3;
  local_60 = param_3[2];
  FUN_144928d62(&local_48,0,&local_68);
  FUN_141084290(param_1,param_2,local_58);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d85cb7 FUN_140d85cb7 body=1000 status=ok
// SIG undefined FUN_140d85cb7(void)

void FUN_140d85cb7(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  ulonglong local_b8;
  uint *local_b0;
  longlong *local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_94;
  int local_8c [2];
  int local_84;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != (longlong *)0x0 && param_1 != 0) {
    puVar17 = (uint *)(param_1 + 0x3b8);
    uVar2 = *(uint *)(param_1 + 0x3d0);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      uVar18 = 1;
      uVar11 = 0;
      iVar19 = 0;
      uVar6 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x3c8);
      if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
        puVar3 = puVar17;
      }
      uVar6 = *puVar3;
      if (uVar6 == 0) {
        iVar19 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar19 = uVar2 - 1;
        }
        uVar11 = 0;
        uVar18 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar18 = uVar11;
        }
        iVar19 = 0;
        do {
          if (uVar18 == uVar11) goto LAB_140d85d83;
          iVar19 = iVar19 + 0x20;
          uVar6 = puVar3[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar11 = 0;
        iVar19 = 0;
      }
      uVar18 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar18 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar6 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar6) {
        uVar6 = uVar2;
      }
    }
    if (uVar6 != uVar2) {
      uVar16 = 0xffffffff;
      local_b8 = uVar12;
      local_b0 = puVar17;
      local_a8 = param_2;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0x10 + (longlong)(int)uVar6 * 0x20);
        if ((lVar13 != 0) && (*(char *)(lVar13 + 0x40c) == '\x01')) {
          FUN_14100bb46(lVar13,local_8c);
          if ((local_8c[0] != 0) && ((longlong)*(int *)(param_1 + 0x98) != 0)) {
            piVar4 = *(int **)(param_1 + 0x90);
            lVar13 = (longlong)*(int *)(param_1 + 0x98) * 0x48;
            do {
              if ((*piVar4 == local_8c[0]) && (piVar4[2] == local_84)) {
                if (piVar4 != (int *)0x0) {
                  FUN_14096c63a(piVar4 + 4,local_80);
                  if ((*(int *)((longlong)param_2 + 0x14c) == 0) ||
                     (uVar2 = *(uint *)(param_2 + 0x29), (int)uVar2 < 0)) {
LAB_140d86054:
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0;
                    if ((int)uVar2 < DAT_14c9647dc) {
                      puVar9 = (undefined8 *)
                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                      if (((puVar9 == (undefined8 *)0x0) ||
                          (*(int *)(puVar9 + 2) != *(int *)((longlong)param_2 + 0x14c))) ||
                         ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_140d86054;
                      uVar15 = *puVar9;
                    }
                  }
                  piVar4 = *(int **)(param_1 + 8);
                  if (piVar4 == (int *)0x0) {
                    piVar4 = &DAT_14c9485f0;
                  }
                  if (((*piVar4 == 0) || (iVar10 = piVar4[1], iVar10 == 0)) ||
                     (*piVar4 == DAT_14c948000)) {
LAB_140d8605c:
                    local_98 = DAT_14c948620;
                    uVar5 = DAT_14c948618;
                  }
                  else {
                    if ((iVar10 < 2) && (piVar4[9] < 1)) {
                      piVar4 = piVar4 + 2;
                    }
                    else {
                      piVar4 = *(int **)(piVar4 + 6);
                    }
                    if (iVar10 < 1) goto LAB_140d8605c;
                    local_98 = piVar4[2];
                    uVar5 = *(undefined8 *)piVar4;
                  }
                  local_a0 = (uint)uVar5;
                  uStack_9c = (undefined4)((ulonglong)uVar5 >> 0x20);
                  FUN_140d84843(local_80,&local_a0,&DAT_14c948618,uVar15);
                  local_a0 = local_a0 & 0xffffff00;
                  uStack_9c = 0;
                  local_98 = 0;
                  local_94 = 0;
                  FUN_144976b9c(&local_a0,DAT_14cb88918);
                  param_2 = local_a8;
                  local_c8 = 0;
                  local_c0 = 1;
                  (**(code **)(*local_a8 + 0x48))(local_a8,local_80,&local_a0,0);
                  uVar12 = local_b8;
                  puVar17 = local_b0;
                  if (local_58 != 0) {
                    FUN_1400020a8();
                    uVar12 = local_b8;
                    puVar17 = local_b0;
                  }
                }
                break;
              }
              piVar4 = piVar4 + 0x12;
              lVar13 = lVar13 + -0x48;
            } while (lVar13 != 0);
          }
          uVar2 = *(uint *)(param_1 + 0x3d0);
        }
        uVar16 = uVar16 & ~(uint)uVar18;
        puVar3 = *(uint **)(param_1 + 0x3c8);
        if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
          puVar3 = puVar17;
        }
        iVar10 = (int)uVar11;
        lVar13 = (longlong)iVar10;
        uVar6 = puVar3[lVar13] & uVar16;
        if (uVar6 == 0) {
          iVar7 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar7 = uVar2 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar10) {
            iVar8 = iVar10;
          }
          if (iVar10 < iVar7) {
            lVar14 = 0;
            do {
              uVar6 = puVar3[lVar13 + lVar14 + 1];
              if (uVar6 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar14 + 1);
                uVar16 = 0xffffffff;
                goto LAB_140d86018;
              }
              iVar19 = iVar19 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar8 - lVar13 != lVar14);
            uVar16 = 0xffffffff;
            lVar13 = (longlong)iVar8;
          }
          uVar11 = lVar13 + 1U & 0xffffffff;
          uVar12 = local_b8;
          param_2 = local_a8;
          puVar17 = local_b0;
          uVar6 = uVar2;
        }
        else {
LAB_140d86018:
          uVar18 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar18 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar6 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar6) {
            uVar6 = uVar2;
          }
        }
      } while (uVar6 != (uint)uVar12);
    }
  }
LAB_140d85d83:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d860a0 FUN_140d860a0 body=302 status=ok
// SIG undefined FUN_140d860a0(void)

void FUN_140d860a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar2 = 0;
  local_58 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar2 = (int)param_2[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_2;
  if ((iStack_4c != iVar2) || (local_58 != plVar1)) {
    do {
      do {
        (**(code **)(*param_1 + 0x88))
                  (param_1,*local_88 + (longlong)iStack_6c * 0x18 + 8,param_3,param_4);
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar2);
    } while ((local_78 != plVar1) || (local_88 != param_2));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d861d0 FUN_140d861d0 body=129 status=ok
// SIG undefined FUN_140d861d0(void)

void FUN_140d861d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    do {
      FUN_140d86252(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar5 = 0;
      do {
        bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar5) + 0x28);
        uVar3 = CONCAT71((int7)((ulonglong)param_4 >> 8),bVar1) & 0xffffff02;
        uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
        if ((bVar1 & 2) == 0) break;
        param_4 = lVar5 + 0x10;
        bVar7 = (longlong)*(int *)(param_1 + 0x38) * 0x10 + -0x10 != lVar5;
        lVar5 = param_4;
      } while (bVar7);
      goto LAB_140d8623c;
    }
  }
  uVar4 = 0;
LAB_140d8623c:
  FUN_1402a7054(param_1,uVar4);
  return;
}



// FUNCTION 140d86252 FUN_140d86252 body=94 status=ok
// SIG undefined FUN_140d86252(void)

void FUN_140d86252(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  *(byte *)(param_1 + 5) = bVar1 | 4;
  (**(code **)(*param_1 + 0x10))();
  bVar2 = *(byte *)(param_1 + 5);
  if ((((bVar1 & 2) >> 1 != (bVar2 & 2) >> 1) && ((int)param_1[4] != 0)) &&
     ((longlong *)param_1[3] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[3] + 0x60))();
    bVar2 = *(byte *)(param_1 + 5);
  }
  *(byte *)(param_1 + 5) = bVar2 & 0xfb | bVar1 & 4;
  return;
}



// FUNCTION 140d862b2 FUN_140d862b2 body=104 status=ok
// SIG undefined FUN_140d862b2(void)

ulonglong FUN_140d862b2(longlong param_1)

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
LAB_140d862fd:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d862fd;
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
      (**(code **)(param_1 + 0x28))
                (lVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
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



// FUNCTION 140d8632a FUN_140d8632a body=2844 status=ok
// SIG undefined FUN_140d8632a(void)

undefined8 FUN_140d8632a(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  byte extraout_var;
  byte bVar8;
  undefined8 uVar7;
  int iVar9;
  undefined8 **ppuVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_4a8 [36];
  int local_484;
  undefined8 **local_480;
  longlong *local_478;
  longlong *local_470;
  undefined8 *local_468;
  uint local_460;
  code *local_458;
  undefined8 **local_450;
  int local_448;
  int local_444;
  int local_440;
  int local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  longlong local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined4 local_3b4;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined4 local_388 [190];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar7 = 0;
    goto LAB_140d86ddd;
  }
  uVar7 = 0;
  local_478 = param_3;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) == 0) goto LAB_140d86ddd;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3bc = 0xffffffff00000080;
  local_3b4 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_418 = 0;
  local_410 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_40c = 0xffffffff00000080;
  local_404 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar12 = *param_2;
    lVar18 = (longlong)(int)param_2[1] * 0x108;
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x30);
      local_458 = FUN_1437c13f0;
      local_450 = &local_398;
      local_398 = &local_438;
      (**(code **)(*plVar14 + 0x2b0))(plVar14,lVar12,&local_458,&local_3e8);
      lVar12 = lVar12 + 0x108;
      lVar18 = lVar18 + -0x108;
    } while (lVar18 != 0);
  }
  FUN_140d86ee2(&local_438);
  uVar11 = local_460;
  puVar4 = local_468;
  uVar13 = (ulonglong)(int)local_460;
  if (1 < (longlong)uVar13) {
    memset(local_388,0,0x2f0);
    local_398 = puVar4;
    local_390 = puVar4 + (uVar13 - 1);
    fVar23 = logf((float)(int)uVar11);
    local_388[0] = (int)(longlong)(fVar23 + fVar23);
    ppuVar10 = &local_398;
LAB_140d86502:
    plVar14 = ppuVar10[1];
    iVar5 = *(int *)(ppuVar10 + 2);
    iVar6 = (int)((ulonglong)((longlong)plVar14 - (longlong)*ppuVar10) >> 3);
    plVar3 = *ppuVar10;
    local_480 = ppuVar10;
    while (uVar11 = iVar6 + 1, iVar5 != 0) {
      if ((int)uVar11 < 9) goto joined_r0x000140d867be;
      lVar12 = plVar3[uVar11 >> 1];
      plVar3[uVar11 >> 1] = *plVar3;
      *plVar3 = lVar12;
      plVar19 = plVar14 + 1;
      plVar20 = plVar3;
      local_484 = iVar5;
      local_470 = plVar14;
LAB_140d8655b:
      do {
        while( true ) {
          plVar20 = plVar20 + 1;
          if (plVar14 < plVar20) goto joined_r0x000140d86594;
          lVar12 = *plVar20;
          lVar18 = *plVar3;
          iVar5 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                            (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
          if (iVar5 == 0) break;
LAB_140d8658b:
          if (iVar5 < 0) goto joined_r0x000140d86594;
        }
        dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
        dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
        if (ABS(dVar2 - dVar1) <= 1e-08) {
          (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
          (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
          if (local_440 == local_448) {
            iVar5 = local_43c - local_444;
          }
          else {
            iVar5 = FUN_14002c2bd();
          }
          goto LAB_140d8658b;
        }
      } while (0.0 <= dVar2 - dVar1);
joined_r0x000140d86594:
      do {
        while( true ) {
          plVar17 = plVar19;
          plVar19 = plVar17 + -1;
          if (plVar19 <= plVar3) goto LAB_140d866e8;
          lVar12 = *plVar3;
          lVar18 = plVar17[-1];
          iVar5 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                            (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
          if (iVar5 == 0) break;
LAB_140d865c3:
          if (iVar5 < 0) goto LAB_140d866e8;
        }
        dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
        dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
        if (ABS(dVar2 - dVar1) <= 1e-08) {
          (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
          (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
          if (local_440 == local_448) {
            iVar5 = local_43c - local_444;
          }
          else {
            iVar5 = FUN_14002c2bd();
          }
          goto LAB_140d865c3;
        }
      } while (0.0 <= dVar2 - dVar1);
      plVar17 = plVar19 + 1;
LAB_140d866e8:
      if (plVar20 <= plVar19) {
        lVar12 = *plVar20;
        *plVar20 = *plVar19;
        *plVar19 = lVar12;
        goto LAB_140d8655b;
      }
      lVar12 = *plVar3;
      *plVar3 = *plVar19;
      *plVar19 = lVar12;
      iVar5 = local_484 + -1;
      plVar17 = plVar17 + -2;
      ppuVar10 = local_480;
      if ((longlong)plVar17 - (longlong)plVar3 < (longlong)local_470 - (longlong)plVar20) {
        if (plVar20 < plVar14) {
          *local_480 = plVar20;
          local_480[1] = plVar14;
          *(int *)(local_480 + 2) = iVar5;
          ppuVar10 = local_480 + 3;
        }
        plVar14 = plVar17;
        plVar20 = plVar3;
        if (plVar19 <= plVar3 + 1) goto LAB_140d86ce8;
      }
      else {
        if (plVar3 + 1 < plVar19) {
          *local_480 = plVar3;
          local_480[1] = plVar17;
          *(int *)(local_480 + 2) = iVar5;
          ppuVar10 = local_480 + 3;
        }
        if (plVar14 <= plVar20) goto LAB_140d86ce8;
      }
      iVar6 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar20) >> 3);
      plVar3 = plVar20;
      local_480 = ppuVar10;
    }
    ppuVar10 = local_480;
    if (uVar11 != 0) {
      iVar21 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
      iVar6 = local_484;
      iVar5 = iVar21;
      do {
        while (local_484 = iVar5, iVar5 = local_484 * 2 + 1, iVar5 < (int)uVar11) {
          iVar16 = local_484 * 2 + 2;
          iVar9 = local_484;
          if (iVar16 < (int)uVar11) {
            lVar12 = plVar3[iVar5];
            lVar18 = plVar3[iVar16];
            iVar6 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                              (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
            if (iVar6 == 0) {
              dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
              dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
              if (1e-08 < ABS(dVar2 - dVar1)) {
                bVar22 = dVar2 - dVar1 < 0.0;
              }
              else {
                (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
                (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
                if (local_440 == local_448) {
                  bVar8 = (byte)((uint)(local_43c - local_444) >> 0x18);
                }
                else {
                  FUN_14002c2bd();
                  bVar8 = extraout_var;
                }
                bVar22 = (bool)(bVar8 >> 7);
              }
            }
            else {
              bVar22 = SUB41((uint)iVar6 >> 0x1f,0);
            }
            iVar9 = local_484;
            iVar6 = local_484;
            if (bVar22 == false) {
              iVar5 = iVar16;
            }
          }
          local_484 = iVar6;
          lVar12 = plVar3[iVar5];
          lVar18 = plVar3[iVar9];
          iVar16 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                             (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
          if (iVar16 == 0) {
            dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
            dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
            if (ABS(dVar2 - dVar1) <= 1e-08) {
              (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
              (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
              if (local_440 == local_448) {
                iVar16 = local_43c - local_444;
              }
              else {
                iVar16 = FUN_14002c2bd();
              }
              goto LAB_140d86972;
            }
            iVar6 = local_484;
            if (0.0 <= dVar2 - dVar1) break;
          }
          else {
LAB_140d86972:
            iVar6 = local_484;
            if (-1 < iVar16) break;
          }
          lVar12 = plVar3[iVar9];
          plVar3[iVar9] = plVar3[iVar5];
          plVar3[iVar5] = lVar12;
          iVar6 = local_484;
        }
        local_484 = iVar6;
        bVar22 = iVar21 != 0;
        iVar21 = iVar21 + -1;
        iVar6 = local_484;
        iVar5 = iVar21;
      } while (bVar22);
      ppuVar10 = local_480;
      if (1 < (int)uVar11) {
        uVar13 = (ulonglong)uVar11;
        lVar12 = *plVar3;
        *plVar3 = plVar3[uVar13 - 1];
        plVar3[uVar13 - 1] = lVar12;
        if (uVar11 != 2) {
          do {
            uVar15 = uVar13 - 1;
            iVar5 = 0;
            iVar21 = 1;
            iVar6 = 0;
            do {
              iVar5 = iVar5 + 2;
              iVar9 = iVar21;
              if ((longlong)iVar5 < (longlong)uVar15) {
                lVar12 = plVar3[iVar21];
                lVar18 = plVar3[iVar5];
                iVar21 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                                   (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
                if (iVar21 == 0) {
                  dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
                  dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
                  if (ABS(dVar2 - dVar1) <= 1e-08) {
                    (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
                    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
                    if (local_440 == local_448) {
                      iVar21 = local_43c - local_444;
                    }
                    else {
                      iVar21 = FUN_14002c2bd();
                    }
                    goto LAB_140d86b3a;
                  }
                  bVar22 = dVar2 - dVar1 < 0.0;
                }
                else {
LAB_140d86b3a:
                  bVar22 = SUB41((uint)iVar21 >> 0x1f,0);
                }
                if (bVar22 == false) {
                  iVar9 = iVar5;
                }
              }
              lVar12 = plVar3[iVar9];
              lVar18 = plVar3[iVar6];
              iVar5 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                                (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
              if (iVar5 == 0) {
                dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
                dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
                if (ABS(dVar2 - dVar1) <= 1e-08) {
                  (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
                  (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
                  if (local_440 == local_448) {
                    iVar5 = local_43c - local_444;
                  }
                  else {
                    iVar5 = FUN_14002c2bd();
                  }
                  goto LAB_140d86b72;
                }
                if (0.0 <= dVar2 - dVar1) break;
              }
              else {
LAB_140d86b72:
                if (-1 < iVar5) break;
              }
              lVar12 = plVar3[iVar6];
              plVar3[iVar6] = plVar3[iVar9];
              plVar3[iVar9] = lVar12;
              iVar5 = iVar9 * 2;
              iVar21 = iVar9 * 2 + 1;
              iVar6 = iVar9;
            } while ((longlong)iVar21 < (longlong)uVar15);
            lVar12 = *plVar3;
            *plVar3 = plVar3[uVar13 - 2];
            plVar3[uVar13 - 2] = lVar12;
            ppuVar10 = local_480;
            uVar13 = uVar15;
          } while (2 < uVar15);
        }
      }
    }
    goto LAB_140d86ce8;
  }
  goto LAB_140d86d0b;
joined_r0x000140d867be:
  for (; ppuVar10 = local_480, plVar20 = plVar3, plVar19 = plVar3, plVar3 < plVar14;
      plVar14 = plVar14 + -1) {
    while (plVar17 = plVar20, plVar19 = plVar19 + 1, plVar19 <= plVar14) {
      lVar12 = *plVar19;
      lVar18 = *plVar17;
      iVar5 = (**(code **)(**(longlong **)(lVar18 + 0xa8) + 0x2c8))
                        (*(longlong **)(lVar18 + 0xa8),*(undefined8 *)(lVar12 + 0xa8));
      if (iVar5 == 0) {
        dVar2 = (double)FUN_140d86e48(&local_3e8,lVar18);
        dVar1 = (double)FUN_140d86e48(&local_3e8,lVar12);
        if (ABS(dVar2 - dVar1) <= 1e-08) {
          (**(code **)(*(longlong *)(lVar18 + 0x28) + 0x60))(lVar18 + 0x28,&local_440);
          (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x60))(lVar12 + 0x28,&local_448);
          if (local_440 == local_448) {
            iVar5 = local_43c - local_444;
          }
          else {
            iVar5 = FUN_14002c2bd();
          }
          goto LAB_140d867fd;
        }
        bVar22 = dVar2 - dVar1 < 0.0;
      }
      else {
LAB_140d867fd:
        bVar22 = SUB41((uint)iVar5 >> 0x1f,0);
      }
      plVar20 = plVar19;
      if (bVar22 == false) {
        plVar20 = plVar17;
      }
    }
    lVar12 = *plVar17;
    *plVar17 = *plVar14;
    *plVar14 = lVar12;
  }
LAB_140d86ce8:
  ppuVar10 = ppuVar10 + -3;
  if (ppuVar10 < &local_398) goto LAB_140d86d07;
  goto LAB_140d86502;
LAB_140d86d07:
  uVar13 = (ulonglong)local_460;
LAB_140d86d0b:
  plVar14 = local_478;
  uVar11 = (uint)uVar13;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13 & 0xffffffff);
  }
  if (*(int *)((longlong)local_478 + 0xc) < (int)uVar11) {
    FUN_1457a5ae2(local_478,uVar13 & 0xffffffff);
    uVar11 = local_460;
  }
  puVar4 = local_468;
  if (uVar11 != 0) {
    lVar12 = 0;
    do {
      lVar18 = *(longlong *)((longlong)puVar4 + lVar12) + 0x28;
      if (*(longlong *)((longlong)puVar4 + lVar12) == 0) {
        lVar18 = 0;
      }
      iVar5 = (int)plVar14[1];
      *(uint *)(plVar14 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar14 + 0xc) < iVar5 + 1U) {
        FUN_147dd7cf6(plVar14,iVar5);
      }
      *(longlong *)(*plVar14 + (longlong)iVar5 * 8) = lVar18;
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)uVar11 * 8 != lVar12);
  }
  if (local_468 != (undefined8 *)0x0) {
    FUN_1400020a8(local_468);
  }
  local_3f0 = 0;
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  FUN_14005bbf2(&local_438);
  local_3a0 = 0;
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1457a5a54(&local_3e8);
  uVar7 = 1;
LAB_140d86ddd:
  if ((local_90 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d86e48 FUN_140d86e48 body=153 status=ok
// SIG undefined FUN_140d86e48(void)

ulonglong FUN_140d86e48(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 == (ulonglong *)0x0) {
            return 0x7fefffffffffffff;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return 0x7fefffffffffffff;
          }
          return puVar1[1];
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return 0x7fefffffffffffff;
}



// FUNCTION 140d86ee2 FUN_140d86ee2 body=462 status=ok
// SIG undefined FUN_140d86ee2(void)

longlong * FUN_140d86ee2(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  local_70 = param_1;
  if (iVar7 != 0) {
    FUN_140d870b2(param_2);
  }
  local_60 = local_70 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)local_70[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  plVar12 = local_70;
  iVar7 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *plVar12;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1405c1a44(param_2,iVar2);
        plVar12 = local_70;
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) =
           *(undefined8 *)((longlong)iVar6 * 0x10 + lVar11);
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar7;
      uVar5 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar6 <= iVar7) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar11 == lVar9) goto LAB_140d87042;
        }
        iVar7 = iVar7 + (int)lVar9 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140d87042:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d870b2 FUN_140d870b2 body=320 status=ok
// SIG undefined FUN_140d870b2(void)

void FUN_140d870b2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140d8711b;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140d8711b:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140d871f2 FUN_140d871f2 body=93 status=ok
// SIG undefined FUN_140d871f2(void)

undefined8 * FUN_140d871f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d8724f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872f46e(param_1,iVar1);
      FUN_14872f4dd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d8724f FUN_140d8724f body=40 status=ok
// SIG undefined FUN_140d8724f(void)

void FUN_140d8724f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457a5b42(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 140d87278 FUN_140d87278 body=46 status=ok
// SIG undefined FUN_140d87278(void)

void FUN_140d87278(longlong param_1)

{
  FUN_140d872a6(*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 140d872a6 FUN_140d872a6 body=94 status=ok
// SIG undefined FUN_140d872a6(void)

void FUN_140d872a6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e3ee16(param_5,param_1 + 0x60,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_140d87304(param_5,param_1 + 0x70,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 140d87304 FUN_140d87304 body=1416 status=ok
// SIG undefined FUN_140d87304(void)

int FUN_140d87304(longlong param_1,longlong *param_2,double *param_3,double *param_4,int param_5,
                 double param_6,double *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  double *local_1d0;
  int local_1bc;
  undefined4 local_1b8;
  longlong *local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  longlong local_148;
  int local_140;
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
  
  local_1bc = param_5;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_128 = param_3[2] * (1.0 / param_7[2]);
  local_130 = param_3[1] * (1.0 / param_7[1]);
  local_138 = *param_3 * (1.0 / *param_7);
  dVar12 = ABS((1.0 / param_7[2]) * param_6);
  dVar13 = ABS((1.0 / param_7[1]) * param_6);
  dVar11 = ABS((1.0 / *param_7) * param_6);
  local_110 = dVar12 + local_128;
  local_118 = dVar13 + local_130;
  local_120 = dVar11 + local_138;
  local_128 = local_128 - dVar12;
  local_130 = local_130 - dVar13;
  local_138 = local_138 - dVar11;
  local_1b0 = param_2;
  FUN_140d8788e(param_1 + 0xe0,&local_148);
  lVar6 = local_148;
  if ((longlong)local_140 != 0) {
    lVar10 = 0;
    dVar11 = 1.79769313486232e+308;
    do {
      iVar1 = *(int *)(lVar6 + lVar10);
      lVar9 = (longlong)iVar1;
      lVar2 = *local_1b0;
      uVar8 = (ulonglong)*(ushort *)(lVar2 + lVar9 * 6);
      lVar3 = *(longlong *)(param_1 + 0x48);
      fVar15 = (float)param_7[2];
      fVar16 = (float)param_7[1];
      fVar17 = (float)*param_7;
      local_150 = (double)(*(float *)(lVar3 + 8 + uVar8 * 0xc) * fVar15);
      local_158 = (double)(*(float *)(lVar3 + 4 + uVar8 * 0xc) * fVar16);
      local_160 = (double)(*(float *)(lVar3 + uVar8 * 0xc) * fVar17);
      uVar8 = (ulonglong)*(ushort *)(lVar2 + 2 + lVar9 * 6);
      local_168 = (double)(*(float *)(lVar3 + 8 + uVar8 * 0xc) * fVar15);
      local_170 = (double)(*(float *)(lVar3 + 4 + uVar8 * 0xc) * fVar16);
      local_178 = (double)(*(float *)(lVar3 + uVar8 * 0xc) * fVar17);
      uVar8 = (ulonglong)*(ushort *)(lVar2 + 4 + lVar9 * 6);
      local_180 = (double)(fVar15 * *(float *)(lVar3 + 8 + uVar8 * 0xc));
      local_188 = (double)(fVar16 * *(float *)(lVar3 + 4 + uVar8 * 0xc));
      local_190 = (double)(fVar17 * *(float *)(lVar3 + uVar8 * 0xc));
      dVar12 = (local_178 - local_160) * (local_188 - local_158) -
               (local_190 - local_160) * (local_170 - local_158);
      dVar5 = (local_168 - local_150) * (local_190 - local_160) -
              (local_180 - local_150) * (local_178 - local_160);
      dVar4 = (local_170 - local_158) * (local_180 - local_150) -
              (local_188 - local_158) * (local_168 - local_150);
      dVar14 = dVar12 * dVar12 + dVar4 * dVar4 + dVar5 * dVar5;
      dVar13 = dVar11;
      iVar7 = local_1bc;
      if ((9.99999993922529e-09 <= dVar14) && (dVar14 = SQRT(dVar14), 9.99999993922529e-09 < dVar14)
         ) {
        dVar12 = dVar12 / dVar14;
        dVar5 = dVar5 / dVar14;
        dVar4 = dVar4 / dVar14;
        if (param_7[2] * param_7[1] * *param_7 < 0.0) {
          dVar12 = -dVar12;
          dVar5 = -dVar5;
          dVar4 = -dVar4;
        }
        local_1b8 = 0;
        dVar14 = (param_3[2] - local_150) * dVar12 +
                 (*param_3 - local_160) * dVar4 + (param_3[1] - local_158) * dVar5;
        local_f8 = param_3[2] - dVar14 * dVar12;
        local_100 = param_3[1] - dVar5 * dVar14;
        local_108 = *param_3 - dVar4 * dVar14;
        local_1d8 = &local_190;
        local_1d0 = param_3;
        FUN_1449056f5(&local_1a8,&local_108,&local_160,&local_178);
        iVar7 = local_1bc;
        if (((local_198 - param_3[2]) * (local_198 - param_3[2]) +
             (local_1a8 - *param_3) * (local_1a8 - *param_3) +
             (local_1a0 - param_3[1]) * (local_1a0 - param_3[1]) < param_6 * param_6) &&
           (dVar13 = dVar12 * param_4[2] + dVar4 * *param_4 + dVar5 * param_4[1], iVar7 = iVar1,
           dVar11 <= dVar13)) {
          dVar13 = dVar11;
          iVar7 = local_1bc;
        }
      }
      local_1bc = iVar7;
      lVar10 = lVar10 + 4;
      dVar11 = dVar13;
    } while ((longlong)local_140 * 4 != lVar10);
  }
  if (local_148 != 0) {
    FUN_1400020a8(local_148);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return local_1bc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8788e FUN_140d8788e body=585 status=ok
// SIG undefined FUN_140d8788e(void)

longlong * FUN_140d8788e(longlong *param_1,longlong *param_2,double *param_3)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)param_1[1] != 0) {
    dVar10 = *param_3;
    dVar3 = param_3[1];
    dVar11 = param_3[3];
    dVar4 = param_3[4];
    dVar5 = param_3[2];
    dVar6 = param_3[5];
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_14481578e(&local_a8,0x10);
    uVar20 = uStack_a0;
    lVar17 = (longlong)(int)uStack_a0;
    uVar13 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar13);
    if (uStack_a0._4_4_ < uVar13) {
      FUN_1446f48e2(&local_a8,uVar20 & 0xffffffff);
    }
    *(undefined4 *)(local_a8 + lVar17 * 4) = 0;
    if ((int)uStack_a0 != 0) {
      do {
        lVar17 = (longlong)(int)uStack_a0;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + -1);
        lVar21 = (longlong)*(int *)(local_a8 + -4 + lVar17 * 4) * 0x50 + *param_1;
        lVar17 = 0;
        bVar12 = true;
        do {
          bVar19 = bVar12;
          uVar20 = uStack_a0;
          iVar7 = *(int *)(lVar21 + 0x40 + lVar17 * 4);
          lVar18 = (longlong)iVar7;
          if (lVar18 != -1) {
            lVar16 = lVar17 * 0x20;
            pfVar2 = (float *)(lVar21 + 0x10 + lVar16);
            pfVar1 = (float *)(lVar21 + lVar16);
            auVar22._4_4_ = -(uint)((float)dVar4 < pfVar1[1]);
            auVar22._0_4_ = -(uint)((float)dVar11 < *pfVar1);
            auVar22._8_4_ = -(uint)((float)dVar6 < pfVar1[2]);
            auVar22._12_4_ = -(uint)(0.0 < pfVar1[3]);
            auVar8._4_4_ = -(uint)(pfVar2[1] < (float)dVar3);
            auVar8._0_4_ = -(uint)(*pfVar2 < (float)dVar10);
            auVar8._8_4_ = -(uint)(pfVar2[2] < (float)dVar5);
            auVar8._12_4_ = -(uint)(pfVar2[3] < 0.0);
            iVar15 = movmskps((int)lVar16,auVar22 | auVar8);
            if (iVar15 == 0) {
              iVar15 = *(int *)(lVar21 + 0x48 + lVar17 * 4);
              if (iVar15 == 0) {
                lVar17 = (longlong)(int)uStack_a0;
                uVar13 = (int)uStack_a0 + 1;
                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar13);
                if (uStack_a0._4_4_ < uVar13) {
                  FUN_1446f48e2(&local_a8,uVar20 & 0xffffffff);
                }
                *(int *)(local_a8 + lVar17 * 4) = iVar7;
              }
              else if (0 < iVar15) {
                uVar20 = lVar18 << 5 | 0x10;
                do {
                  lVar17 = param_1[2];
                  pfVar1 = (float *)(lVar17 + uVar20);
                  pfVar2 = (float *)(lVar17 + -0x10 + uVar20);
                  auVar23._4_4_ = -(uint)((float)dVar4 < pfVar2[1]);
                  auVar23._0_4_ = -(uint)((float)dVar11 < *pfVar2);
                  auVar23._8_4_ = -(uint)((float)dVar6 < pfVar2[2]);
                  auVar23._12_4_ = -(uint)(0.0 < pfVar2[3]);
                  auVar9._4_4_ = -(uint)(pfVar1[1] < (float)dVar3);
                  auVar9._0_4_ = -(uint)(*pfVar1 < (float)dVar10);
                  auVar9._8_4_ = -(uint)(pfVar1[2] < (float)dVar5);
                  auVar9._12_4_ = -(uint)(pfVar1[3] < 0.0);
                  iVar14 = movmskps((int)lVar17,auVar23 | auVar9);
                  if (iVar14 == 0) {
                    iVar14 = (int)param_2[1];
                    *(uint *)(param_2 + 1) = iVar14 + 1U;
                    if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
                      FUN_1446f48e2(param_2,iVar14);
                    }
                    *(int *)(*param_2 + (longlong)iVar14 * 4) = (int)lVar18;
                  }
                  lVar18 = lVar18 + 1;
                  uVar20 = uVar20 + 0x20;
                } while (lVar18 < iVar15 + iVar7);
              }
            }
          }
          lVar17 = 1;
          bVar12 = false;
        } while (bVar19);
      } while ((int)uStack_a0 != 0);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d87ad8 FUN_140d87ad8 body=21 status=ok
// SIG undefined FUN_140d87ad8(void)

undefined8 FUN_140d87ad8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d87b04 FUN_140d87b04 body=103 status=ok
// SIG undefined FUN_140d87b04(void)

ulonglong FUN_140d87b04(longlong param_1)

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
LAB_140d87b4e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d87b4e;
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



// FUNCTION 140d87b7a FUN_140d87b7a body=169 status=ok
// SIG undefined FUN_140d87b7a(void)

undefined8 FUN_140d87b7a(undefined4 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_1,4);
    }
    else {
      thunk_FUN_14572512c(plVar1,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  param_1 = param_1 + 1;
  plVar1 = *(longlong **)(*param_2 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_1,4);
    }
    else {
      thunk_FUN_14572512c(plVar1,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  return 1;
}



// FUNCTION 140d87c32 FUN_140d87c32 body=101 status=ok
// SIG undefined FUN_140d87c32(void)

undefined8 * FUN_140d87c32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d87c98 FUN_140d87c98 body=139 status=ok
// SIG undefined FUN_140d87c98(void)

undefined8 * FUN_140d87c98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140d87dac(param_1,iVar1,0);
    FUN_140d87d23(*param_1,uVar2,iVar1);
  }
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 140d87d23 FUN_140d87d23 body=136 status=ok
// SIG undefined FUN_140d87d23(void)

void FUN_140d87d23(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar3) = *(undefined4 *)(param_2 + 8 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c();
      }
      uVar2 = *(ulonglong *)(param_2 + lVar3 + 0x18);
      *(ulonglong *)(param_1 + lVar3 + 0x18) = uVar2;
      if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01'))
      {
        FUN_1456cec3c();
      }
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d87dac FUN_140d87dac body=216 status=ok
// SIG undefined FUN_140d87dac(void)

void FUN_140d87dac(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d87e92 FUN_140d87e92 body=165 status=ok
// SIG undefined FUN_140d87e92(void)

undefined8 * FUN_140d87e92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5de920;
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x99] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x99] + 0x10))();
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



// FUNCTION 140d87f38 FUN_140d87f38 body=4929 status=ok
// SIG undefined FUN_140d87f38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_140d87f38(float *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  int iVar26;
  float *pfVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  longlong lVar31;
  uint *puVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  longlong lVar35;
  uint *puVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [16];
  longlong lVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar56;
  undefined1 auVar55 [16];
  double dVar57;
  float fVar58;
  float fVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auStack_208 [32];
  int local_1e8;
  longlong local_1e0;
  int local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  undefined1 (*local_1c0) [16];
  uint *local_1b8;
  undefined1 (*local_1b0) [16];
  ulonglong local_1a8;
  float *local_1a0;
  uint *local_198;
  float *local_190;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar20 = *(longlong *)(param_1 + 6);
  lVar39 = *(longlong *)(lVar20 + 0x68);
  pauVar38 = param_2;
  local_1e0 = lVar20;
  if (lVar39 == 0) {
    lVar39 = *(longlong *)(lVar20 + 0x70);
    pfVar27 = param_1;
    if ((longlong)*(int *)(lVar39 + 0xe8) != 0) {
      lVar35 = *(longlong *)(lVar39 + 0xe0);
      lVar31 = (longlong)*(int *)(lVar39 + 0xe8) * 4;
      lVar18 = 0;
LAB_140d8848f:
      if (*(int *)(lVar35 + lVar18) < 1) goto code_r0x000140d88499;
      fVar43 = -3.4028235e+38;
      fVar41 = 3.4028235e+38;
      lVar18 = 0;
      fVar66 = 3.4028235e+38;
      fVar58 = 3.4028235e+38;
      fVar67 = -3.4028235e+38;
      fVar59 = fVar67;
      local_1c8 = param_3;
      local_1c0 = param_2;
      iVar30 = 0;
      do {
        iVar28 = *(int *)(lVar35 + lVar18);
        if (iVar28 < 1) {
          iVar28 = -iVar28;
        }
        else {
          dStack_180 = (double)CONCAT44(dStack_180._4_4_,fVar58);
          param_1 = (float *)&local_188;
          param_2 = (undefined1 (*) [16])&local_128;
          local_1e8 = iVar28;
          local_128 = fVar43;
          fStack_124 = fVar67;
          fStack_120 = fVar59;
          local_188._0_4_ = fVar41;
          local_188._4_4_ = fVar66;
          FUN_1424a1d60(&local_188,(undefined1 (*) [16])&local_128,
                        *(undefined8 *)(*(longlong *)(lVar39 + 0xd8) + 0x28),iVar30);
          if (dStack_180._0_4_ <= fVar58) {
            fVar58 = dStack_180._0_4_;
          }
          if (local_188._4_4_ <= fVar66) {
            fVar66 = local_188._4_4_;
          }
          if ((float)local_188 <= fVar41) {
            fVar41 = (float)local_188;
          }
          if (fVar59 <= fStack_120) {
            fVar59 = fStack_120;
          }
          if (fVar67 <= fStack_124) {
            fVar67 = fStack_124;
          }
          lVar20 = local_1e0;
          if (fVar43 <= local_128) {
            fVar43 = local_128;
          }
        }
        lVar18 = lVar18 + 4;
        iVar30 = iVar28;
      } while (lVar31 != lVar18);
      lVar35 = *(longlong *)(lVar39 + 0xe0);
      iVar30 = *(int *)(lVar39 + 0xe8);
      fVar69 = (fVar59 - fVar58) * 0.5;
      fVar59 = (fVar67 - fVar66) * 0.5;
      fVar67 = (fVar43 - fVar41) * 0.5;
      fVar58 = fVar58 + fVar69;
      fVar66 = fVar66 + fVar59;
      local_188 = (double)CONCAT44(fVar66,fVar41 + fVar67);
      dStack_180 = (double)CONCAT44(dStack_180._4_4_,fVar58);
      local_128 = 0.0;
      if ((longlong)iVar30 != 0) {
        lVar18 = 0;
        iVar28 = 0;
        do {
          iVar26 = *(int *)(lVar35 + lVar18);
          if (iVar26 < 1) {
            iVar26 = -iVar26;
          }
          else {
            param_1 = &local_128;
            param_2 = (undefined1 (*) [16])&local_188;
            local_1e8 = iVar26;
            FUN_1424a1e10(&local_128,(undefined1 (*) [16])&local_188,
                          *(undefined8 *)(*(longlong *)(lVar39 + 0xd8) + 0x28),iVar28);
            lVar20 = local_1e0;
          }
          lVar18 = lVar18 + 4;
          iVar28 = iVar26;
        } while ((longlong)iVar30 * 4 != lVar18);
      }
      dVar13 = *(double *)(lVar20 + 0x298);
      if (local_128 < 0.0) {
        fVar43 = sqrtf(local_128);
        lVar20 = local_1e0;
      }
      else {
        fVar43 = SQRT(local_128);
      }
      dVar13 = dVar13 * (double)fVar43;
      dVar46 = *(double *)(lVar20 + 0x298);
      uVar40 = SUB84(dVar46,0);
      uVar42 = (undefined4)((ulonglong)dVar46 >> 0x20);
      fVar43 = (float)dVar46;
      fVar58 = fVar58 * fVar43;
      fVar66 = fVar66 * fVar43;
      fVar43 = (fVar41 + fVar67) * fVar43;
      dVar64 = (double)fVar69 * dVar46;
      dVar46 = (double)fVar59 * dVar46;
      pauVar38 = local_1c0;
      param_3 = local_1c8;
      goto LAB_140d88e73;
    }
LAB_140d884a2:
    *(undefined8 *)param_2[1] = *(undefined8 *)(lVar20 + 0x2c8);
    uVar15 = *(undefined8 *)(lVar20 + 0x2c0);
    *(undefined8 *)*param_2 = *(undefined8 *)(lVar20 + 0x2b8);
    *(undefined8 *)(*param_2 + 8) = uVar15;
    *(undefined8 *)(param_2[1] + 8) = 0;
    *(undefined8 *)param_2[2] = 0;
    *(undefined8 *)(param_2[2] + 8) = 0;
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    puVar36 = (uint *)(lVar39 + 0x4d8);
    uVar24 = *(uint *)(lVar39 + 0x4f0);
    local_1d0 = lVar39;
    local_1a0 = param_1;
    if (uVar24 == 0) {
      uVar33 = 1;
      iVar30 = 0;
      param_1 = (float *)0x0;
      pfVar27 = (float *)0x0;
      pauVar25 = param_2;
    }
    else {
      puVar32 = *(uint **)(lVar39 + 0x4e8);
      if (*(uint **)(lVar39 + 0x4e8) == (uint *)0x0) {
        puVar32 = puVar36;
      }
      pauVar25 = (undefined1 (*) [16])(ulonglong)*puVar32;
      if (*puVar32 == 0) {
        uVar21 = uVar24 - 1;
        pauVar25 = (undefined1 (*) [16])(ulonglong)uVar21;
        uVar16 = uVar24 + 0x1e;
        if (-1 < (int)uVar21) {
          uVar16 = uVar21;
        }
        pfVar27 = (float *)0x0;
        param_1 = (float *)(ulonglong)(uint)((int)uVar16 >> 5);
        if ((int)uVar16 >> 5 < 1) {
          param_1 = pfVar27;
        }
        iVar30 = 0;
        do {
          if (param_1 == pfVar27) goto LAB_140d88061;
          iVar30 = iVar30 + 0x20;
          lVar35 = (longlong)pfVar27 + 1;
          pauVar25 = (undefined1 (*) [16])(ulonglong)puVar32[lVar35];
          pfVar27 = (float *)((longlong)pfVar27 + 1);
        } while (puVar32[lVar35] == 0);
      }
      else {
        iVar30 = 0;
        pfVar27 = (float *)0x0;
      }
      uVar33 = (ulonglong)(-(uint)pauVar25 & (uint)pauVar25);
      uVar37 = uVar33 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      uVar16 = (iVar30 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      param_1 = (float *)(ulonglong)uVar16;
      if ((int)uVar24 <= (int)uVar16) {
        param_1 = (float *)(ulonglong)uVar24;
      }
    }
    if ((uint)param_1 != uVar24) {
      uVar16 = 0xffffffff;
      fVar58 = 3.4028235e+38;
      fVar59 = -3.4028235e+38;
      fVar41 = -3.4028235e+38;
      fVar66 = 3.4028235e+38;
      fVar69 = 3.4028235e+38;
      fVar67 = fVar41;
      local_1c8 = param_3;
      local_1c0 = param_2;
      local_1b8 = puVar36;
      local_1b0 = (undefined1 (*) [16])(ulonglong)uVar24;
      do {
        lVar35 = *(longlong *)(*(longlong *)(lVar20 + 0x68) + 0x4a0);
        lVar18 = (longlong)*(int *)(*(longlong *)(lVar39 + 0x4c8) + (longlong)(int)param_1 * 0xc) *
                 0x50;
        plVar1 = (longlong *)(lVar35 + lVar18);
        lVar35 = lVar35 + lVar18;
        puVar32 = (uint *)(lVar35 + 0x10);
        iVar28 = *(int *)(lVar35 + 0x28);
        local_198 = (uint *)CONCAT44(local_198._4_4_,uVar16);
        local_1d4 = iVar30;
        local_1a8 = uVar33;
        local_190 = pfVar27;
        if (iVar28 == 0) {
          uVar33 = 1;
          uVar37 = 0;
          iVar30 = 0;
          iVar26 = 0;
        }
        else {
          puVar19 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar19 = puVar32;
          }
          uVar16 = *puVar19;
          if (uVar16 == 0) {
            iVar30 = iVar28 + 0x1e;
            if (-1 < iVar28 + -1) {
              iVar30 = iVar28 + -1;
            }
            uVar37 = 0;
            uVar33 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar33 = uVar37;
            }
            iVar26 = 0;
            do {
              if (uVar33 == uVar37) goto LAB_140d8876c;
              iVar26 = iVar26 + 0x20;
              uVar16 = puVar19[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar37 = 0;
            iVar26 = 0;
          }
          uVar33 = (ulonglong)(-uVar16 & uVar16);
          uVar2 = uVar33 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          iVar30 = (iVar26 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if (iVar28 <= iVar30) {
            iVar30 = iVar28;
          }
        }
        puVar36 = local_1b8;
        if (iVar30 != iVar28) {
          uVar24 = 0xffffffff;
          do {
            lVar39 = (longlong)*(int *)(*plVar1 + (longlong)iVar30 * 0xc);
            lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x68) + 0x1f8);
            local_188 = (double)CONCAT44(fVar66,fVar69);
            dStack_180 = (double)CONCAT44(dStack_180._4_4_,fVar58);
            local_1e8 = *(int *)(lVar20 + 0x14 + lVar39 * 0x18);
            local_128 = fVar41;
            fStack_124 = fVar67;
            fStack_120 = fVar59;
            FUN_1424a1d60(&local_188,&local_128,
                          (longlong)*(int *)(lVar20 + 0x10 + lVar39 * 0x18) * 0xc +
                          *(longlong *)(*(longlong *)(lVar20 + 8 + lVar39 * 0x18) + 0x28),0);
            uVar24 = ~(uint)uVar33 & uVar24;
            puVar36 = (uint *)plVar1[4];
            if ((uint *)plVar1[4] == (uint *)0x0) {
              puVar36 = puVar32;
            }
            iVar17 = (int)plVar1[5];
            iVar30 = (int)uVar37;
            lVar20 = (longlong)iVar30;
            uVar16 = puVar36[lVar20] & uVar24;
            if (uVar16 == 0) {
              iVar22 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar22 = iVar17 + -1;
              }
              iVar22 = iVar22 >> 5;
              iVar26 = iVar26 + 0x20;
              iVar23 = iVar22;
              if (iVar22 < iVar30) {
                iVar23 = iVar30;
              }
              if (iVar30 < iVar22) {
                lVar39 = 0;
                do {
                  uVar16 = puVar36[lVar20 + lVar39 + 1];
                  if (uVar16 != 0) {
                    uVar37 = (ulonglong)(iVar30 + (int)lVar39 + 1);
                    uVar24 = 0xffffffff;
                    goto LAB_140d886e2;
                  }
                  iVar26 = iVar26 + 0x20;
                  lVar39 = lVar39 + 1;
                } while (iVar23 - lVar20 != lVar39);
                uVar24 = 0xffffffff;
                iVar30 = iVar23;
              }
              uVar37 = (ulonglong)(iVar30 + 1);
              iVar30 = iVar17;
            }
            else {
LAB_140d886e2:
              uVar33 = (ulonglong)(-uVar16 & uVar16);
              uVar2 = uVar33 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar30 = (iVar26 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar30) {
                iVar30 = iVar17;
              }
            }
            if (dStack_180._0_4_ <= fVar58) {
              fVar58 = dStack_180._0_4_;
            }
            if (local_188._4_4_ <= fVar66) {
              fVar66 = local_188._4_4_;
            }
            if ((float)local_188 <= fVar69) {
              fVar69 = (float)local_188;
            }
            if (fVar59 <= fStack_120) {
              fVar59 = fStack_120;
            }
            if (fVar67 <= fStack_124) {
              fVar67 = fStack_124;
            }
            if (fVar41 <= local_128) {
              fVar41 = local_128;
            }
            lVar20 = local_1e0;
          } while (iVar30 != iVar28);
          uVar24 = *(uint *)(local_1d0 + 0x4f0);
          puVar36 = local_1b8;
          lVar39 = local_1d0;
        }
LAB_140d8876c:
        uVar16 = (uint)local_198 & ~(uint)local_1a8;
        puVar32 = *(uint **)(lVar39 + 0x4e8);
        if (*(uint **)(lVar39 + 0x4e8) == (uint *)0x0) {
          puVar32 = puVar36;
        }
        iVar28 = (int)local_190;
        lVar35 = (longlong)iVar28;
        uVar21 = puVar32[lVar35] & uVar16;
        pfVar27 = local_190;
        iVar30 = local_1d4;
        if (uVar21 == 0) {
          iVar26 = uVar24 + 0x1e;
          if (-1 < (int)(uVar24 - 1)) {
            iVar26 = uVar24 - 1;
          }
          iVar26 = iVar26 >> 5;
          iVar30 = local_1d4 + 0x20;
          iVar17 = iVar26;
          if (iVar26 < iVar28) {
            iVar17 = iVar28;
          }
          if (iVar28 < iVar26) {
            lVar18 = 0;
            do {
              uVar21 = puVar32[lVar35 + lVar18 + 1];
              if (uVar21 != 0) {
                pfVar27 = (float *)(ulonglong)(iVar28 + (int)lVar18 + 1);
                uVar16 = 0xffffffff;
                goto LAB_140d887eb;
              }
              iVar30 = iVar30 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar17 - lVar35 != lVar18);
            uVar16 = 0xffffffff;
            lVar35 = (longlong)iVar17;
          }
          pauVar25 = (undefined1 (*) [16])(lVar35 + 1);
          param_1 = (float *)(ulonglong)uVar24;
          pfVar27 = (float *)((ulonglong)pauVar25 & 0xffffffff);
          puVar36 = local_1b8;
          uVar33 = local_1a8;
          lVar20 = local_1e0;
          lVar39 = local_1d0;
        }
        else {
LAB_140d887eb:
          uVar33 = (ulonglong)(-uVar21 & uVar21);
          uVar37 = uVar33 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar21 = (uint)lVar35 ^ 0x3f;
          pauVar25 = (undefined1 (*) [16])(ulonglong)uVar21;
          uVar21 = (iVar30 - uVar21) + 0x3e;
          param_1 = (float *)(ulonglong)uVar21;
          if ((int)uVar24 <= (int)uVar21) {
            param_1 = (float *)(ulonglong)uVar24;
          }
        }
      } while ((int)param_1 != (int)local_1b0);
      if ((fVar69 != 3.4028235e+38) || (pauVar38 = local_1c0, param_3 = local_1c8, NAN(fVar69))) {
        fVar59 = (fVar59 - fVar58) * 0.5;
        fVar68 = (fVar67 - fVar66) * 0.5;
        fVar67 = (fVar41 - fVar69) * 0.5;
        fVar58 = fVar58 + fVar59;
        fVar66 = fVar66 + fVar68;
        local_188 = (double)CONCAT44(fVar66,fVar69 + fVar67);
        dStack_180 = (double)CONCAT44(dStack_180._4_4_,fVar58);
        local_128 = 0.0;
        lVar39 = *(longlong *)(lVar20 + 0x68);
        uVar24 = *(uint *)(lVar39 + 0x4f0);
        local_1d0 = lVar39;
        if (uVar24 == 0) {
          puVar36 = (uint *)&DAT_00000001;
          pfVar27 = (float *)0x0;
          param_1 = (float *)0x0;
          iVar30 = 0;
        }
        else {
          puVar36 = *(uint **)(lVar39 + 0x4e8);
          if (*(uint **)(lVar39 + 0x4e8) == (uint *)0x0) {
            puVar36 = (uint *)(lVar39 + 0x4d8);
          }
          pauVar25 = (undefined1 (*) [16])(ulonglong)*puVar36;
          if (*puVar36 == 0) {
            uVar21 = uVar24 - 1;
            pauVar25 = (undefined1 (*) [16])(ulonglong)uVar21;
            uVar16 = uVar24 + 0x1e;
            if (-1 < (int)uVar21) {
              uVar16 = uVar21;
            }
            pfVar27 = (float *)0x0;
            param_1 = (float *)(ulonglong)(uint)((int)uVar16 >> 5);
            if ((int)uVar16 >> 5 < 1) {
              param_1 = pfVar27;
            }
            iVar30 = 0;
            do {
              param_2 = pauVar25;
              if (param_1 == pfVar27) goto LAB_140d88ed3;
              iVar30 = iVar30 + 0x20;
              lVar35 = (longlong)pfVar27 + 1;
              pauVar25 = (undefined1 (*) [16])(ulonglong)puVar36[lVar35];
              pfVar27 = (float *)((longlong)pfVar27 + 1);
            } while (puVar36[lVar35] == 0);
          }
          else {
            pfVar27 = (float *)0x0;
            iVar30 = 0;
          }
          puVar36 = (uint *)(ulonglong)(-(uint)pauVar25 & (uint)pauVar25);
          uVar33 = (longlong)puVar36 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar16 = (iVar30 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          param_1 = (float *)(ulonglong)uVar16;
          if ((int)uVar24 <= (int)uVar16) {
            param_1 = (float *)(ulonglong)uVar24;
          }
        }
        param_2 = pauVar25;
        if ((uint)param_1 != uVar24) {
          uVar16 = 0xffffffff;
          local_1b0 = (undefined1 (*) [16])(ulonglong)uVar24;
          local_198 = (uint *)(lVar39 + 0x4d8);
          do {
            local_1a8 = CONCAT44(local_1a8._4_4_,uVar16);
            lVar35 = *(longlong *)(*(longlong *)(lVar20 + 0x68) + 0x4a0);
            lVar18 = (longlong)
                     *(int *)(*(longlong *)(lVar39 + 0x4c8) + (longlong)(int)param_1 * 0xc) * 0x50;
            plVar1 = (longlong *)(lVar35 + lVar18);
            lVar35 = lVar35 + lVar18;
            puVar32 = (uint *)(lVar35 + 0x10);
            iVar28 = *(int *)(lVar35 + 0x28);
            local_1d4 = iVar30;
            local_190 = pfVar27;
            if (iVar28 == 0) {
              uVar33 = 1;
              uVar37 = 0;
              iVar30 = 0;
              iVar26 = 0;
            }
            else {
              puVar19 = (uint *)plVar1[4];
              if ((uint *)plVar1[4] == (uint *)0x0) {
                puVar19 = puVar32;
              }
              uVar16 = *puVar19;
              if (uVar16 == 0) {
                iVar30 = iVar28 + 0x1e;
                if (-1 < iVar28 + -1) {
                  iVar30 = iVar28 + -1;
                }
                uVar37 = 0;
                uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                if (iVar30 >> 5 < 1) {
                  uVar33 = uVar37;
                }
                iVar26 = 0;
                do {
                  if (uVar33 == uVar37) goto LAB_140d88b46;
                  iVar26 = iVar26 + 0x20;
                  uVar16 = puVar19[uVar37 + 1];
                  uVar37 = uVar37 + 1;
                } while (uVar16 == 0);
              }
              else {
                uVar37 = 0;
                iVar26 = 0;
              }
              uVar33 = (ulonglong)(-uVar16 & uVar16);
              uVar2 = uVar33 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              iVar30 = (iVar26 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if (iVar28 <= iVar30) {
                iVar30 = iVar28;
              }
            }
            if (iVar30 != iVar28) {
              uVar24 = 0xffffffff;
              local_1b8 = puVar36;
              do {
                lVar39 = (longlong)*(int *)(*plVar1 + (longlong)iVar30 * 0xc);
                lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x68) + 0x1f8);
                local_1e8 = *(int *)(lVar20 + 0x14 + lVar39 * 0x18);
                FUN_1424a1e10(&local_128,&local_188,
                              (longlong)*(int *)(lVar20 + 0x10 + lVar39 * 0x18) * 0xc +
                              *(longlong *)(*(longlong *)(lVar20 + 8 + lVar39 * 0x18) + 0x28),0);
                uVar24 = ~(uint)uVar33 & uVar24;
                puVar36 = (uint *)plVar1[4];
                if ((uint *)plVar1[4] == (uint *)0x0) {
                  puVar36 = puVar32;
                }
                iVar17 = (int)plVar1[5];
                iVar30 = (int)uVar37;
                lVar20 = (longlong)iVar30;
                uVar16 = puVar36[lVar20] & uVar24;
                if (uVar16 == 0) {
                  iVar22 = iVar17 + 0x1e;
                  if (-1 < iVar17 + -1) {
                    iVar22 = iVar17 + -1;
                  }
                  iVar22 = iVar22 >> 5;
                  iVar26 = iVar26 + 0x20;
                  iVar23 = iVar22;
                  if (iVar22 < iVar30) {
                    iVar23 = iVar30;
                  }
                  if (iVar30 < iVar22) {
                    lVar39 = 0;
                    do {
                      uVar16 = puVar36[lVar20 + lVar39 + 1];
                      if (uVar16 != 0) {
                        uVar37 = (ulonglong)(iVar30 + (int)lVar39 + 1);
                        uVar24 = 0xffffffff;
                        goto LAB_140d88af6;
                      }
                      iVar26 = iVar26 + 0x20;
                      lVar39 = lVar39 + 1;
                    } while (iVar23 - lVar20 != lVar39);
                    uVar24 = 0xffffffff;
                    iVar30 = iVar23;
                  }
                  uVar37 = (ulonglong)(iVar30 + 1);
                  iVar30 = iVar17;
                }
                else {
LAB_140d88af6:
                  uVar33 = (ulonglong)(-uVar16 & uVar16);
                  uVar2 = uVar33 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  iVar30 = (iVar26 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                  if (iVar17 <= iVar30) {
                    iVar30 = iVar17;
                  }
                }
                lVar20 = local_1e0;
              } while (iVar30 != iVar28);
              uVar24 = *(uint *)(local_1d0 + 0x4f0);
              puVar36 = local_1b8;
              lVar39 = local_1d0;
            }
LAB_140d88b46:
            uVar16 = (uint)local_1a8 & ~(uint)puVar36;
            puVar32 = *(uint **)(lVar39 + 0x4e8);
            if (*(uint **)(lVar39 + 0x4e8) == (uint *)0x0) {
              puVar32 = local_198;
            }
            iVar28 = (int)local_190;
            lVar35 = (longlong)iVar28;
            uVar21 = puVar32[lVar35] & uVar16;
            pfVar27 = local_190;
            iVar30 = local_1d4;
            if (uVar21 == 0) {
              iVar26 = uVar24 + 0x1e;
              if (-1 < (int)(uVar24 - 1)) {
                iVar26 = uVar24 - 1;
              }
              iVar26 = iVar26 >> 5;
              iVar30 = local_1d4 + 0x20;
              iVar17 = iVar26;
              if (iVar26 < iVar28) {
                iVar17 = iVar28;
              }
              if (iVar28 < iVar26) {
                lVar18 = 0;
                do {
                  uVar21 = puVar32[lVar35 + lVar18 + 1];
                  if (uVar21 != 0) {
                    uVar16 = 0xffffffff;
                    pfVar27 = (float *)(ulonglong)(iVar28 + (int)lVar18 + 1);
                    goto LAB_140d88bc6;
                  }
                  iVar30 = iVar30 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar17 - lVar35 != lVar18);
                uVar16 = 0xffffffff;
                iVar28 = iVar17;
              }
              pfVar27 = (float *)(ulonglong)(iVar28 + 1);
              lVar20 = local_1e0;
              lVar39 = local_1d0;
              uVar21 = uVar24;
            }
            else {
LAB_140d88bc6:
              puVar36 = (uint *)(ulonglong)(-uVar21 & uVar21);
              uVar33 = (longlong)puVar36 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              uVar21 = (iVar30 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if ((int)uVar24 <= (int)uVar21) {
                uVar21 = uVar24;
              }
            }
            param_1 = (float *)(ulonglong)uVar21;
            param_2 = local_1b0;
          } while (uVar21 != (uint)local_1b0);
        }
LAB_140d88ed3:
        pauVar38 = local_1c0;
        param_3 = local_1c8;
        dVar13 = *(double *)(lVar20 + 0x298);
        if (local_128 < 0.0) {
          fVar41 = sqrtf(local_128);
          lVar20 = local_1e0;
        }
        else {
          fVar41 = SQRT(local_128);
        }
        dVar13 = dVar13 * (double)fVar41;
        dVar46 = *(double *)(lVar20 + 0x298);
        uVar40 = SUB84(dVar46,0);
        uVar42 = (undefined4)((ulonglong)dVar46 >> 0x20);
        fVar43 = (float)dVar46;
        fVar58 = fVar58 * fVar43;
        fVar66 = fVar66 * fVar43;
        fVar43 = (fVar69 + fVar67) * fVar43;
        dVar64 = (double)fVar59 * dVar46;
        dVar46 = (double)fVar68 * dVar46;
        pfVar27 = local_1a0;
LAB_140d88e73:
        dVar3 = *(double *)(lVar20 + 0x2c8);
        dVar4 = *(double *)(lVar20 + 0x2c0);
        *(double *)*pauVar38 = (double)fVar43 + *(double *)(lVar20 + 0x2b8);
        *(double *)(*pauVar38 + 8) = (double)fVar66 + dVar4;
        *(double *)pauVar38[1] = (double)fVar58 + dVar3;
        *(double *)(pauVar38[1] + 8) = (double)fVar67 * (double)CONCAT44(uVar42,uVar40);
        *(double *)pauVar38[2] = dVar46;
        *(double *)(pauVar38[2] + 8) = dVar64;
        *(double *)pauVar38[3] = dVar13;
        goto LAB_140d8808a;
      }
    }
LAB_140d88061:
    *(undefined8 *)pauVar38[1] = *(undefined8 *)(lVar20 + 0x2c8);
    uVar15 = *(undefined8 *)(lVar20 + 0x2c0);
    *(undefined8 *)*pauVar38 = *(undefined8 *)(lVar20 + 0x2b8);
    *(undefined8 *)(*pauVar38 + 8) = uVar15;
    *(undefined8 *)(pauVar38[1] + 8) = 0;
    *(undefined8 *)pauVar38[2] = 0;
    *(undefined8 *)(pauVar38[2] + 8) = 0;
    *(undefined8 *)pauVar38[3] = 0;
    param_2 = pauVar25;
    pfVar27 = local_1a0;
  }
LAB_140d8808a:
  if (*(char *)((longlong)pfVar27 + 0xc1) == '\x01') {
    lVar20 = *(longlong *)(pfVar27 + 6);
    dVar3 = *(double *)(lVar20 + 0x2d0);
    dVar14 = *(double *)(lVar20 + 0x2b8);
    dVar4 = *(double *)(lVar20 + 0x2c0);
    dVar45 = -dVar3;
    dVar47 = -*(double *)(lVar20 + 0x2d8);
    dVar48 = *(double *)(lVar20 + 0x2e0) * -1.0;
    dVar51 = *(double *)(lVar20 + 0x2e8) * 1.0;
    dVar60 = *(double *)(lVar20 + 0x2c8) * 1.0;
    dVar52 = dVar4 * dVar45 - dVar14 * dVar47;
    dVar56 = dVar60 * dVar47 - dVar4 * dVar48;
    dVar44 = *(double *)(lVar20 + 0x2b8) * dVar48 - dVar45 * dVar60;
    dVar56 = dVar56 + dVar56;
    dVar44 = dVar44 + dVar44;
    dVar52 = dVar52 + dVar52;
    dVar64 = dVar47 - *(double *)(lVar20 + 0x2d8);
    dVar13 = dVar48 + dVar48;
    dVar57 = (dVar45 - dVar3) * dVar51;
    dVar46 = (dVar45 - dVar3) * dVar45;
    dVar8 = 1.0 - (dVar48 * dVar13 + dVar64 * dVar47);
    dVar9 = 1.0 - (dVar48 * dVar13 + dVar46);
    dVar49 = (1.0 - (dVar46 + dVar64 * dVar47)) * 1.0;
    dVar10 = dVar64 * dVar45 + dVar13 * dVar51;
    dVar11 = dVar13 * dVar47 + dVar57;
    dVar12 = dVar64 * dVar51 + dVar45 * dVar13;
    dVar54 = dVar64 * dVar45 - dVar13 * dVar51;
    dVar57 = dVar13 * dVar47 - dVar57;
    dVar53 = dVar45 * dVar13 - dVar64 * dVar51;
    dVar13 = *(double *)*pauVar38;
    dVar46 = *(double *)pauVar38[1];
    dVar64 = *(double *)(*pauVar38 + 8);
    dVar7 = dVar46 * dVar57 + *(double *)(*pauVar38 + 8) * dVar9 + dVar13 * dVar10 +
            (0.0 - (dVar3 * dVar52 + dVar48 * dVar56 + dVar51 * dVar44 + dVar4));
    dVar3 = *(double *)(pauVar38[1] + 8);
    dVar4 = *(double *)pauVar38[2];
    dVar50 = *(double *)(pauVar38[2] + 8);
    dVar63 = ABS(dVar50 * dVar12) + ABS(dVar4 * dVar54) + ABS(dVar3 * dVar8);
    dVar65 = ABS(*(double *)(pauVar38[2] + 8) * dVar57) +
             ABS(*(double *)pauVar38[2] * dVar9) + ABS(*(double *)(pauVar38[1] + 8) * dVar10);
    dVar61 = ABS(dVar49 * dVar50) + ABS(dVar11 * dVar4) + ABS(dVar53 * dVar3);
    dVar3 = dVar12 * dVar12 + dVar54 * dVar54 + dVar8 * dVar8;
    dVar4 = dVar57 * dVar57 + dVar9 * dVar9 + dVar10 * dVar10;
    dVar50 = dVar49 * dVar49 + dVar11 * dVar11 + dVar53 * dVar53;
    if (dVar3 <= dVar4) {
      dVar3 = dVar4;
    }
    if (dVar3 <= dVar50) {
      dVar3 = dVar50;
    }
    dVar4 = *(double *)pauVar38[3];
    if (dVar3 < 0.0) {
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    dVar4 = dVar4 * dVar3;
    dVar3 = SQRT(dVar65 * dVar65 + dVar61 * dVar61 + dVar63 * dVar63);
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = dVar46 * dVar12 + dVar64 * dVar54 + dVar13 * dVar8 +
                   (0.0 - ((dVar52 * dVar47 - dVar44 * dVar48) + dVar51 * dVar56 + dVar14));
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *pauVar38 = auVar5;
    *(double *)pauVar38[1] =
         (0.0 - (dVar51 * dVar52 + dVar60 + (dVar44 * dVar45 - dVar56 * dVar47))) +
         dVar46 * dVar49 + dVar64 * dVar11 + dVar13 * dVar53;
    *(double *)(pauVar38[1] + 8) = dVar63;
    *(double *)pauVar38[2] = dVar65;
    *(double *)(pauVar38[2] + 8) = dVar61;
    *(double *)pauVar38[3] = dVar4;
  }
  else if (param_3 != 0) {
    lVar20 = *(longlong *)(param_3 + 0xe58);
    auVar5 = *(undefined1 (*) [16])(lVar20 + 0x70);
    auVar6 = *(undefined1 (*) [16])(lVar20 + 0x80);
    lVar39 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_));
    auVar55._8_4_ = (int)lVar39;
    auVar55._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_));
    auVar55._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    iVar30 = movmskpd((int)param_1,auVar55);
    lVar39 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar6._8_8_));
    auVar62._8_4_ = (int)lVar39;
    auVar62._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar6._0_8_));
    auVar62._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    uVar24 = movmskpd((int)param_2,auVar62);
    if ((uVar24 & 0x3fffffff) == 0 && iVar30 == 0) {
      puVar29 = &DAT_14c846480;
      puVar34 = &local_188;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar34 = *puVar29;
        puVar29 = puVar29 + 1;
        puVar34 = puVar34 + 1;
      }
    }
    else {
      auVar62 = divpd(_DAT_149934d80,auVar5);
      auVar55 = divpd(ZEXT816(0x3ff0000000000000),auVar6);
      dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar62._0_8_);
      dVar46 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar62._8_8_);
      local_138 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar6._0_8_)) & auVar55._0_8_);
      local_188 = -*(double *)(lVar20 + 0x30);
      dStack_180 = -*(double *)(lVar20 + 0x38);
      local_178 = *(double *)(lVar20 + 0x40) * -1.0;
      dStack_170 = *(double *)(lVar20 + 0x48) * 1.0;
      dVar54 = *(double *)(lVar20 + 0x50) * dVar13;
      dVar57 = *(double *)(lVar20 + 0x58) * dVar46;
      dVar64 = *(double *)(lVar20 + 0x60) * local_138;
      dVar4 = dVar57 * local_188 - dStack_180 * dVar54;
      dVar50 = dVar64 * dStack_180 - local_178 * dVar57;
      dVar3 = dVar54 * local_178 - local_188 * dVar64;
      dVar50 = dVar50 + dVar50;
      dVar3 = dVar3 + dVar3;
      dVar4 = dVar4 + dVar4;
      local_168 = 0.0 - ((dVar4 * dStack_180 - dVar3 * local_178) + dStack_170 * dVar50 + dVar54);
      dStack_160 = 0.0 - (dVar4 * *(double *)(lVar20 + 0x30) + local_178 * dVar50 +
                         dStack_170 * dVar3 + dVar57);
      local_158 = 0.0 - (dStack_170 * dVar4 + dVar64 + (dVar3 * local_188 - dVar50 * dStack_180));
      uStack_150 = 0;
      local_148._8_4_ = SUB84(dVar46,0);
      local_148._0_8_ = dVar13;
      local_148._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      uStack_130 = 0;
    }
    FUN_144a80a4c(pauVar38,&local_128,&local_188);
    *(undefined8 *)pauVar38[3] = local_f8;
    *(undefined8 *)pauVar38[2] = local_108;
    *(undefined8 *)(pauVar38[2] + 8) = uStack_100;
    *(undefined8 *)pauVar38[1] = local_118;
    *(undefined8 *)(pauVar38[1] + 8) = uStack_110;
    *(float *)*pauVar38 = local_128;
    *(float *)(*pauVar38 + 4) = fStack_124;
    *(float *)(*pauVar38 + 8) = fStack_120;
    *(undefined4 *)(*pauVar38 + 0xc) = uStack_11c;
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pauVar38;
code_r0x000140d88499:
  lVar18 = lVar18 + 4;
  if (lVar31 == lVar18) goto LAB_140d884a2;
  goto LAB_140d8848f;
}



// FUNCTION 140d8927a FUN_140d8927a body=122 status=ok
// SIG undefined FUN_140d8927a(void)

void FUN_140d8927a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140d892f4();
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    return;
  }
  lVar1 = FUN_1406b3bde(param_2 + 0x2c0);
  lVar1 = FUN_1457a5b8c(lVar1 + 0x140);
  FUN_140d895f4(lVar1 + 0x20,param_1 + 0xd0);
  lVar1 = FUN_1406b2efc(param_2 + 0x2c0);
  lVar1 = FUN_1457a5bd4(lVar1 + 0x140);
  FUN_140d895f4(lVar1 + 0x20,param_1 + 0xd0);
  return;
}



// FUNCTION 140d892f4 FUN_140d892f4 body=123 status=ok
// SIG undefined FUN_140d892f4(void)

void FUN_140d892f4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  int local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14082167c();
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78),local_2c);
    if (local_2c[0] != 0) {
      FUN_140d89be6(param_1,param_2,local_2c);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d89370 FUN_140d89370 body=273 status=ok
// SIG undefined FUN_140d89370(void)

void FUN_140d89370(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *(undefined8 *)(param_1 + 0xc);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  FUN_140d89648(param_2,param_3);
  FUN_140d898de();
  cVar1 = *(char *)(param_1 + 8);
  param_3 = param_3 + 0x2c0;
  lVar2 = FUN_1406b2efc(param_3);
  lVar3 = lVar2 + 8;
  if (cVar1 == '\0') {
    lVar3 = lVar2 + 0xb0;
  }
  FUN_140d22200(lVar3,local_44);
  lVar3 = FUN_1406b2efc(param_3);
  FUN_140d89482(lVar3 + 0x170,local_44);
  if ((*(char *)(param_1 + 8) == '\x02') && (*(int *)(param_1 + 0xc) != 0)) {
    lVar3 = FUN_1406b2efc(param_3);
    local_54 = 1;
    local_48 = 0;
    local_50 = DAT_14cb7c580;
    local_58 = *(undefined4 *)(param_1 + 0x14);
    local_60 = *(undefined8 *)(param_1 + 0xc);
    local_70 = 0;
    local_78 = 0;
    FUN_14064171a(lVar3 + 0x170,&local_60,&DAT_14cb7bde0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d89482 FUN_140d89482 body=90 status=ok
// SIG undefined FUN_140d89482(void)

void FUN_140d89482(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_140d894dc();
  *(undefined8 *)(lVar3 + 0x20) = *param_2;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 140d894dc FUN_140d894dc body=137 status=ok
// SIG undefined FUN_140d894dc(void)

undefined8 FUN_140d894dc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140d89566();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_140d895a0(param_1,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d89566 FUN_140d89566 body=57 status=ok
// SIG undefined FUN_140d89566(void)

void FUN_140d89566(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba08 = FUN_140002ddd(FUN_14652d940,uVar1,L"MissionActionType_BinderDisable");
  }
  return;
}



// FUNCTION 140d895a0 FUN_140d895a0 body=83 status=ok
// SIG undefined FUN_140d895a0(void)

longlong * FUN_140d895a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140d89566();
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



// FUNCTION 140d895f4 FUN_140d895f4 body=84 status=ok
// SIG undefined FUN_140d895f4(void)

longlong * FUN_140d895f4(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 140d89648 FUN_140d89648 body=647 status=ok
// SIG undefined FUN_140d89648(void)

void FUN_140d89648(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [44];
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 == 0) goto LAB_140d897e1;
  FUN_140d898de(param_1,&local_50,param_2);
  lVar5 = FUN_140d89a16();
  (**(code **)(*param_1 + 0x68))(param_1,&local_50);
  *(undefined1 *)(local_50 + 0x4a) = 1;
  FUN_140d8a0fe();
  lVar4 = local_50;
  *(undefined4 *)(local_50 + 0x54) = local_54;
  *(undefined8 *)(local_50 + 0x4c) = local_5c;
  *(undefined1 *)(local_50 + 0x49) = 1;
  plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41dcb0;
  plVar6[3] = 1;
  plVar6[2] = (longlong)&PTR_FUN_14b3ae150;
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(lVar4 + 0x70) = 0x10;
    plVar7 = *(longlong **)(lVar4 + 0x78);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x78) = 0;
LAB_140d89823:
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000140d8985c:
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(local_50 + 0x70) = plVar6 + 2;
    plVar7 = *(longlong **)(local_50 + 0x78);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x000140d8985c;
      }
    }
    else {
      *(longlong **)(local_50 + 0x78) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_140d89823;
    }
  }
  plVar7 = (longlong *)param_1[0xf];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,local_50);
  }
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar3 + 1U) {
    FUN_140822376((longlong *)(lVar5 + 0x48),iVar3);
  }
  lVar4 = *(longlong *)(lVar5 + 0x48);
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = local_50;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_140d897e1:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d898de FUN_140d898de body=311 status=ok
// SIG undefined FUN_140d898de(void)

longlong FUN_140d898de(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar2 = &DAT_14c9485f0;
  if (*(int **)(param_3 + 8) != (int *)0x0) {
    piVar2 = *(int **)(param_3 + 8);
  }
  if (((*piVar2 != 0) && (iVar1 = piVar2[1], iVar1 != 0)) && (*piVar2 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar2[9] < 1)) {
      piVar2 = piVar2 + 2;
    }
    else {
      piVar2 = *(int **)(piVar2 + 6);
    }
    if (0 < iVar1) {
      local_48 = piVar2[2];
      local_50 = *(undefined8 *)piVar2;
      goto LAB_140d89953;
    }
  }
  local_48 = DAT_14c948620;
  local_50 = DAT_14c948618;
LAB_140d89953:
  FUN_1408226d0(&local_50,&local_40,1);
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  FUN_140002266(&local_30,L"__Bind_PickupSpawner_%s",puVar3);
  *(undefined8 *)(param_2 + 4) = 0;
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  FUN_1405f0d29(param_2,puVar3,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d89a16 FUN_140d89a16 body=463 status=ok
// SIG undefined FUN_140d89a16(void)

longlong * FUN_140d89a16(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar6 = &DAT_14c9485f0;
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    piVar6 = *(int **)(param_2 + 8);
  }
  if (((*piVar6 != 0) && (iVar2 = piVar6[1], iVar2 != 0)) && (*piVar6 != DAT_14c948000)) {
    if ((iVar2 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (0 < iVar2) {
      local_40 = piVar6[2];
      local_48 = *(undefined8 *)piVar6;
      goto LAB_140d89a93;
    }
  }
  local_40 = DAT_14c948620;
  local_48 = DAT_14c948618;
LAB_140d89a93:
  local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14b41ba60;
  local_38 = local_30 + 2;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[2] = (longlong)&PTR_FUN_14b417bb0;
  local_30[5] = *param_3;
  *(int *)(local_30 + 6) = (int)param_3[1];
  *(int *)((longlong)local_30 + 0x3c) = local_40;
  *(undefined8 *)((longlong)local_30 + 0x34) = local_48;
  *(undefined1 *)(local_30 + 8) = 0;
  *(undefined1 *)(local_30 + 0xf) = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  FUN_1408241ea();
  iVar2 = *(int *)(param_2 + 0x2d8);
  *(uint *)(param_2 + 0x2d8) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x2dc) < iVar2 + 1U) {
    FUN_14082428c((longlong *)(param_2 + 0x2d0),iVar2);
  }
  lVar3 = *(longlong *)(param_2 + 0x2d0);
  *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = local_38;
  *(longlong **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  if (*param_4 != 0) {
    FUN_14082216c(local_38,param_4);
  }
  plVar5 = local_30;
  plVar4 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d89be6 FUN_140d89be6 body=1303 status=ok
// SIG undefined FUN_140d89be6(void)

void FUN_140d89be6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined1 auStack_118 [32];
  longlong local_f8;
  short local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  longlong local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = CONCAT71(local_f8._1_7_,2);
  uVar15 = FUN_1408234aa(param_1,local_80,param_2,&DAT_14cb86eb8);
  FUN_140d8a0fe(uVar15,&local_d4,param_2);
  lVar7 = FUN_140d8a236(param_2 + 0x2c0);
  *(longlong *)(lVar7 + 8) = local_d4;
  *(undefined4 *)(lVar7 + 0x10) = local_cc;
  *(undefined8 *)(lVar7 + 0x18) = *param_3;
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_3 + 1);
  piVar8 = *(int **)(param_2 + 8);
  if (piVar8 == (int *)0x0) {
    piVar8 = &DAT_14c9485f0;
  }
  if (((*piVar8 != 0) && (iVar5 = piVar8[1], iVar5 != 0)) && (*piVar8 != DAT_14c948000)) {
    if ((iVar5 < 2) && (piVar8[9] < 1)) {
      piVar8 = piVar8 + 2;
    }
    else {
      piVar8 = *(int **)(piVar8 + 6);
    }
    if (0 < iVar5) {
      local_a8 = piVar8[2];
      local_b0 = *(undefined8 *)piVar8;
      goto LAB_140d89cce;
    }
  }
  local_a8 = DAT_14c948620;
  local_b0 = DAT_14c948618;
LAB_140d89cce:
  FUN_1408226d0(&local_b0,&local_a0,1);
  puVar12 = local_a0;
  if (local_98 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    local_c8 = 0;
  }
  else {
    puVar6 = *(undefined4 **)(*(longlong *)(param_2 + 0x18) + 8);
    puVar13 = &DAT_14c9485f0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar13 = puVar6;
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_c8,puVar13,1);
  }
  FUN_1400021e4(&local_c8,&local_c0);
  puVar14 = &DAT_149dfb77a;
  puVar11 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar11 = local_c0;
  }
  FUN_140002266(&local_90,L"%s_%s_pickup",puVar11,puVar12);
  uStack_dc = 0;
  uStack_d8 = 0;
  if (local_88 != 0) {
    puVar14 = (undefined2 *)CONCAT44(uStack_8c,local_90);
  }
  FUN_1405f0d29(&local_e0,puVar14,0);
  if (CONCAT44(uStack_8c,local_90) != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar7 + 0x2c) = uStack_d8;
  *(ulonglong *)(lVar7 + 0x24) = CONCAT44(uStack_dc,local_e0);
  FUN_14082207e(&local_90,local_80,0);
  FUN_140822770(param_2 + 0x2c0,&local_90,1);
  uVar15 = FUN_1447cd778(CONCAT44(uStack_8c,local_90),local_88);
  if (CONCAT44(uStack_8c,local_90) != 0) {
    uVar15 = FUN_1400020a8();
  }
  uVar15 = FUN_140d8a0fe(uVar15,&local_90,param_2);
  lVar9 = FUN_140823ef2(uVar15,param_2,&local_90);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar6 = (undefined4 *)(lVar7 + 0xc7c);
  uVar15 = *puVar6;
  pbVar2 = (byte *)(lVar7 + 0xc80);
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar6 = 0xffffffff;
  }
  plVar10 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b41dc90;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[9] = 0;
  plVar10[2] = (longlong)&PTR_FUN_14b008da0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  if ((bVar4 & 1) != 0) {
    *puVar6 = uVar15;
    *pbVar2 = 1;
  }
  *(undefined1 *)(plVar10 + 9) = 1;
  *(undefined4 *)(plVar10 + 6) = local_cc;
  plVar10[5] = local_d4;
  FUN_1400fce78(plVar10 + 7,param_1 + 0xc0);
  iVar5 = (int)plVar10[4];
  *(uint *)(plVar10 + 4) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar10 + 0x24) < iVar5 + 1U) {
    FUN_140823334(plVar10 + 3,iVar5);
  }
  puVar3 = (undefined8 *)(plVar10[3] + (longlong)iVar5 * 0x28);
  *puVar3 = DAT_14cb86230;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_90 = CONCAT31(local_90._1_3_,1);
  local_84 = 1;
  uStack_8c = (undefined4)DAT_14cb7c588;
  local_88 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
  uVar15 = FUN_140821fec(puVar3,local_80,&local_90,0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(lVar9 + 0x50);
  *(uint *)(lVar9 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar9 + 0x54) < iVar5 + 1U) {
    uVar15 = FUN_140822376((longlong *)(lVar9 + 0x48),iVar5);
  }
  lVar7 = *(longlong *)(lVar9 + 0x48);
  *(longlong **)(lVar7 + (longlong)iVar5 * 0x10) = plVar10 + 2;
  *(longlong **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar15 = (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar8 = (int *)((longlong)plVar10 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        uVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar15 = (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar8 = (int *)((longlong)plVar10 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        uVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_a0 = (undefined2 *)0x0;
  local_98 = 0;
  uVar15 = FUN_140d8a0fe(uVar15,&local_a0,param_2);
  bVar4 = *(byte *)(param_1 + 8);
  uVar15 = FUN_140822484(uVar15,&local_90,param_2);
  local_f8 = param_1 + 0x10;
  local_f0 = (ushort)bVar4 * 2;
  FUN_1408236ae(uVar15,param_2,&local_90,&local_a0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d8a0fe FUN_140d8a0fe body=311 status=ok
// SIG undefined FUN_140d8a0fe(void)

longlong FUN_140d8a0fe(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar2 = &DAT_14c9485f0;
  if (*(int **)(param_3 + 8) != (int *)0x0) {
    piVar2 = *(int **)(param_3 + 8);
  }
  if (((*piVar2 != 0) && (iVar1 = piVar2[1], iVar1 != 0)) && (*piVar2 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar2[9] < 1)) {
      piVar2 = piVar2 + 2;
    }
    else {
      piVar2 = *(int **)(piVar2 + 6);
    }
    if (0 < iVar1) {
      local_48 = piVar2[2];
      local_50 = *(undefined8 *)piVar2;
      goto LAB_140d8a173;
    }
  }
  local_48 = DAT_14c948620;
  local_50 = DAT_14c948618;
LAB_140d8a173:
  FUN_1408226d0(&local_50,&local_40,1);
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  FUN_140002266(&local_30,L"__Alias_%s_pickup",puVar3);
  *(undefined8 *)(param_2 + 4) = 0;
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  FUN_1405f0d29(param_2,puVar3,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8a236 FUN_140d8a236 body=244 status=ok
// SIG undefined FUN_140d8a236(void)

longlong * FUN_140d8a236(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b41bae0;
  plVar6 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b347590;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_1 + 0x20),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((longlong *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  }
  return plVar6;
}



// FUNCTION 140d8a32a FUN_140d8a32a body=269 status=ok
// SIG undefined FUN_140d8a32a(void)

void FUN_140d8a32a(longlong param_1,int param_2)

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



// FUNCTION 140d8a438 FUN_140d8a438 body=57 status=ok
// SIG undefined FUN_140d8a438(void)

void FUN_140d8a438(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba57b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba57b0 = FUN_140002ddd(FUN_1465c362c,uVar1,L"MissionActionType_UnlockEchoLog");
  }
  return;
}



// FUNCTION 140d8a472 FUN_140d8a472 body=57 status=ok
// SIG undefined FUN_140d8a472(void)

void FUN_140d8a472(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5768 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5768 = FUN_140002ddd(FUN_1465c3506,uVar1,L"MissionActionType_PlayEchoLog");
  }
  return;
}



// FUNCTION 140d8a4ba FUN_140d8a4ba body=143 status=ok
// SIG undefined FUN_140d8a4ba(void)

undefined8 * FUN_140d8a4ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d8a54a FUN_140d8a54a body=140 status=ok
// SIG undefined FUN_140d8a54a(void)

undefined8 FUN_140d8a54a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x1d0);
      iVar4 = iVar3;
      while (*(uint *)(lVar1 + (longlong)iVar4 * 0x20) != param_2) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar1 + 0x18);
        if (iVar4 == -1) {
          return 0;
        }
      }
      do {
        lVar2 = lVar1 + (longlong)iVar3 * 0x20;
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x20) == param_2) goto LAB_140d8a5ab;
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
      lVar2 = 0;
LAB_140d8a5ab:
      return *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x18);
    }
  }
  return 0;
}



// FUNCTION 140d8a5d6 FUN_140d8a5d6 body=40 status=ok
// SIG undefined FUN_140d8a5d6(void)

undefined8 FUN_140d8a5d6(undefined8 param_1,int param_2)

{
  FUN_140d8a5fe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d8a5fe FUN_140d8a5fe body=124 status=ok
// SIG undefined FUN_140d8a5fe(void)

void FUN_140d8a5fe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aca37d0;
  plVar2 = (longlong *)param_1[0x17];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((param_1[0x12] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x12] + 0x50));
  }
  if ((param_1[0xc] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140d8a67a FUN_140d8a67a body=340 status=ok
// SIG undefined FUN_140d8a67a(void)

void FUN_140d8a67a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    if (iVar7 != 1) {
      return;
    }
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    if (DVar2 != DVar3) {
      return;
    }
  }
  puVar8 = (undefined4 *)FUN_140718ac0(param_1,param_2);
  if (puVar8 != (undefined4 *)0x0) {
    if (puVar8[0x12] != 0) {
      uVar4 = puVar8[0xc];
      if (puVar8[0xe] != 0) {
        uVar4 = FUN_144a78877(uVar4);
      }
      uVar5 = puVar8[0xf];
      if (puVar8[0x11] != 0) {
        uVar5 = FUN_144a78877(uVar5);
      }
      uVar6 = puVar8[0x12];
      if (puVar8[0x14] != 0) {
        uVar6 = FUN_144a78877(uVar6);
      }
      iVar7 = FUN_1410b645c(param_1 + 0x9b,uVar5 ^ uVar4 ^ uVar6,puVar8 + 0xc);
      if (((iVar7 != -1) &&
          (lVar9 = (longlong)iVar7 * 0x50 + param_1[0x9b], lVar10 = lVar9 + 0x28,
          lVar10 != 0 && lVar9 != 0)) &&
         (cVar1 = FUN_14883e062(lVar10,*puVar8,param_3), cVar1 != '\0')) {
        return;
      }
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,1,param_5);
  }
  return;
}



// FUNCTION 140d8a7ce FUN_140d8a7ce body=157 status=ok
// SIG undefined FUN_140d8a7ce(void)

void FUN_140d8a7ce(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return;
    }
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) {
      return;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_6);
  }
  return;
}



// FUNCTION 140d8a86c FUN_140d8a86c body=347 status=ok
// SIG undefined FUN_140d8a86c(void)

undefined8
FUN_140d8a86c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             char param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return 0;
    }
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) {
      return 0;
    }
  }
  lVar6 = FUN_140718ac0(param_1);
  if (lVar6 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar6 + 0x2b0) & 8) == 0) {
    return 0;
  }
  if ((*(byte *)(lVar6 + 0x298) | 2) == 7) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x118) != 0) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x11c) != 0) {
    return 0;
  }
  if ((param_3 == (longlong *)0x0) || (*(char *)(lVar6 + 0x2c) == '\0')) {
    if (param_3 == (longlong *)0x0) {
      return 1;
    }
    goto LAB_140d8a979;
  }
  lVar7 = (**(code **)(*param_3 + 8))(param_3);
  if (*(int *)(lVar6 + 0x28) == 0) {
LAB_140d8a9c3:
    lVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar6 + 0x24);
    lVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(lVar6 + 0x28) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))
         ) goto LAB_140d8a9c3;
      lVar8 = *plVar9;
    }
  }
  if (lVar7 != lVar8) {
    return 0;
  }
LAB_140d8a979:
  plVar9 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3);
  if ((plVar9 != (longlong *)0x0) &&
     (((param_5 == '\0' || (cVar3 = (**(code **)(*plVar9 + 0x6c8))(plVar9), cVar3 == '\0')) &&
      (cVar3 = (**(code **)(*param_3 + 0x20))(param_3,lVar6 + 400,param_4), cVar3 == '\0')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140d8a9c8 FUN_140d8a9c8 body=1748 status=ok
// SIG undefined FUN_140d8a9c8(void)

void FUN_140d8a9c8(longlong param_1,uint param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong *local_a0;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint *local_70;
  longlong local_68;
  code *local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 != 1) goto LAB_140d8aa2c;
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    if (DVar2 != DVar3) goto LAB_140d8aa2c;
  }
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar8 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x428);
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x10) == param_2) {
          if ((lVar8 != 0) && (puVar14 = (uint *)(lVar8 + 4), puVar14 != (uint *)0x0)) {
            uVar1 = *puVar14;
            if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x60))) {
              lVar8 = param_1 + 0x48;
              lVar15 = *(longlong *)(param_1 + 0x58);
              if (*(longlong *)(param_1 + 0x58) == 0) {
                lVar15 = lVar8;
              }
              if ((*(uint *)(lVar15 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
                if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x2b0 + (ulonglong)uVar1 * 0x300) &
                    0x20) == 0) {
                  lVar15 = *(longlong *)(param_1 + 0x38) + (ulonglong)uVar1 * 0x300;
                  FUN_140d8b9a0(param_1,lVar15,param_3);
                  if (param_3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
                  }
                  if ((*(byte *)(lVar15 + 0x2b0) & 2) != 0) goto LAB_140d8add9;
                  FUN_140d8b0c0(param_1,lVar15,param_3);
                  local_68 = lVar15 + 400;
                  local_f8 = param_5;
                  (**(code **)(*param_3 + 0x30))
                            (param_3,local_68,param_4,*(undefined4 *)(lVar15 + 0x2b4));
                  local_90 = *(longlong *)(lVar15 + 400);
                  if ((((local_90 == 0) || ((*(byte *)(local_90 + 0x369) & 4) == 0)) ||
                      (local_a0 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3),
                      local_a0 == (longlong *)0x0)) ||
                     (lVar5 = FUN_1447210f0(local_a0), *(int *)(lVar5 + 0x238) < 1))
                  goto LAB_140d8add9;
                  lVar13 = 0;
                  local_94 = param_4;
                  local_80 = lVar5;
                  local_78 = lVar8;
                  local_70 = puVar14;
                  goto LAB_140d8abfa;
                }
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar8 + 8);
      } while (iVar4 != -1);
    }
  }
LAB_140d8aa2c:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar13 = lVar13 + 1, lVar8 = local_78, puVar14 = local_70,
        (int)lVar13 < *(int *)(local_80 + 0x238)) {
LAB_140d8abfa:
    iVar4 = *(int *)(*(longlong *)(local_80 + 0x230) + 4 + lVar13 * 8);
    if ((iVar4 == 0) ||
       (uVar1 = *(uint *)(*(longlong *)(local_80 + 0x230) + lVar13 * 8), (int)uVar1 < 0)) {
LAB_140d8aebb:
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)0x0;
      if ((int)uVar1 < DAT_14c9647dc) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar4)) ||
           ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_140d8aebb;
        plVar12 = (longlong *)*puVar10;
      }
    }
    if (plVar12 != local_a0) {
      if ((*(byte *)(local_90 + 0x369) & 0x10) == 0) {
        if (plVar12 != (longlong *)0x0) {
LAB_140d8ad46:
          uVar9 = FUN_14007a696();
          plVar12 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,uVar9);
          if (plVar12 != (longlong *)0x0) {
            uVar9 = FUN_14007a696();
            plVar6 = (longlong *)FUN_144718840(plVar12,uVar9);
            if ((plVar12 != plVar6) && (plVar6 != (longlong *)0x0)) {
              FUN_140d8b0c0(param_1,lVar15,param_3);
              local_f8 = 0;
              (**(code **)(*plVar6 + 0x30))(plVar6,local_68,param_4,0xffffffff);
            }
          }
        }
      }
      else {
        if (DAT_14cb223d8 == 0) {
          local_60[0] = FUN_1449e2820;
          local_b0 = FUN_14081d0ea;
          local_b8 = FUN_1427b09ee;
          local_c0 = local_60;
          local_c8 = &LAB_147f29feb;
          local_d0 = FUN_1464384fe;
          local_d8 = L"Engine";
          local_e0 = 0;
          local_e8 = 0x10004001;
          local_f0 = 8;
          local_f8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar6 = (longlong *)(**(code **)(*local_a0 + 0x288))(local_a0,DAT_14cb223d8);
        if (plVar6 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_60[0] = FUN_1449e2820;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_1427b09ee;
            local_c0 = local_60;
            local_c8 = &LAB_147f29feb;
            local_d0 = FUN_1464384fe;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10004001;
            local_f0 = 8;
            local_f8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb223d8);
          if (((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) &&
             (lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 != 0)) {
            local_88 = lVar13;
            if (*(longlong **)(lVar8 + 0x18) == (longlong *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)(**(longlong **)(lVar8 + 0x18) + 0x180))();
            }
            FUN_140154c96(local_60,plVar12);
            iVar4 = FUN_1448618b0(lVar8 + 0x20,local_60,uVar9);
            lVar13 = local_88;
            param_4 = local_94;
            if ((plVar12 != (longlong *)0x0) && (iVar4 == 0)) goto LAB_140d8ad46;
          }
        }
      }
    }
  }
LAB_140d8add9:
  lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  if (lVar5 == 0) {
    *(undefined4 *)(lVar15 + 0x118) = 0;
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(lVar15 + 0x118) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar16 = iVar4 == 0;
      if (bVar16) {
        *(int *)(lVar5 + 0x10) = iVar11;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar4 = iVar11;
      }
    }
  }
  *(int *)(lVar15 + 0x11c) = iVar4;
  *(undefined4 *)(lVar15 + 0x120) = param_4;
  uVar1 = *puVar14;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x60))) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x58);
    }
    if (((*(uint *)(lVar8 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x2b0 + (ulonglong)uVar1 * 0x300) & 0x20) != 0))
    goto LAB_140d8aa2c;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar4 + 1U) {
    FUN_140d8bb20((longlong *)(param_1 + 0x70),iVar4);
  }
  lVar8 = *(longlong *)(param_1 + 0x70);
  *(undefined4 *)(lVar8 + 4 + (longlong)iVar4 * 8) = 5;
  *(uint *)(lVar8 + (longlong)iVar4 * 8) = uVar1;
  goto LAB_140d8aa2c;
}



// FUNCTION 140d8b0c0 FUN_140d8b0c0 body=205 status=ok
// SIG undefined FUN_140d8b0c0(void)

void FUN_140d8b0c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0x6c) == 0) {
    puVar3 = (uint *)(param_2 + 0x2c4);
LAB_140d8b0ed:
    if (puVar3[1] != 0) {
      uVar1 = *puVar3;
      uVar4 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d8b134;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(uint *)(puVar5 + 2) == puVar3[1] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        uVar4 = *puVar5;
        goto LAB_140d8b134;
      }
    }
  }
  else {
    lVar2 = FUN_1457a5dd8(param_1,param_2);
    if (lVar2 != 0) {
      puVar3 = (uint *)(lVar2 + 0x10);
      goto LAB_140d8b0ed;
    }
  }
  uVar4 = 0;
LAB_140d8b134:
  FUN_140d8b18e(local_28,uVar4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140d8b20c(param_2 + 400,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8b18e FUN_140d8b18e body=125 status=ok
// SIG undefined FUN_140d8b18e(void)

undefined8 * FUN_140d8b18e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_1406c9d00(uVar1,local_30);
      *param_1 = local_30[0];
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8b20c FUN_140d8b20c body=173 status=ok
// SIG undefined FUN_140d8b20c(void)

void FUN_140d8b20c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  if ((((DAT_14cb83570 != 0) && (DAT_14cb83578 != (longlong *)0x0)) && (param_2 != (longlong *)0x0))
     && ((0 < (int)DAT_14cb83578[1] &&
         (lVar5 = (**(code **)(*param_2 + 0x10))(param_2), plVar7 = DAT_14cb83578, lVar5 != 0)))) {
    if (DAT_14cb83578 == (longlong *)0x0) {
LAB_140d8b296:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)DAT_14cb83578[1];
      do {
        if (iVar4 == 0) goto LAB_140d8b296;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = DAT_14cb83570;
    }
    FUN_140d8b2ba(lVar6,lVar5,param_1,param_3);
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
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d8b2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x10))(plVar7);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140d8b2ba FUN_140d8b2ba body=227 status=ok
// SIG undefined FUN_140d8b2ba(void)

void FUN_140d8b2ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 **local_80;
  code *local_78;
  undefined8 **local_70;
  longlong local_68;
  code **local_60;
  code *local_58;
  longlong *local_50;
  undefined1 local_44 [28];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = param_4;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    local_90 = &local_b0;
    local_a0 = &local_88;
    local_80 = &local_98;
    local_98 = &LAB_140f9f292;
    local_70 = &local_80;
    local_78 = FUN_140f9f270;
    local_b0 = param_1;
    local_a8 = param_3;
    FUN_140d8b592(local_44);
    local_50 = &local_68;
    local_58 = FUN_140c4fac4;
    local_68 = param_1 + 0x50;
    local_60 = &local_78;
    FUN_140d8b39e(param_1 + 0x50,local_44,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8b39e FUN_140d8b39e body=499 status=ok
// SIG undefined FUN_140d8b39e(void)

void FUN_140d8b39e(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar8 = *(longlong **)(param_1 + 8);
    lVar7 = (longlong)*(int *)(param_1 + 0x10) << 3;
    do {
      lVar9 = *plVar8;
      cVar3 = FUN_140aee426(lVar9,param_2);
      if (cVar3 != '\0') {
        if (plVar8 != (longlong *)0x0 && lVar9 != 0) goto LAB_140d8b4dd;
        break;
      }
      plVar8 = plVar8 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar5 = *param_2;
  bVar1 = *(byte *)(param_2 + 3);
  *(byte *)(puVar5 + 3) = bVar1;
  (*(code *)(&PTR_LAB_14a183130)[bVar1])(puVar5 + 1,param_2 + 1);
  *(undefined4 *)(puVar5 + 4) = 0;
  if (param_3 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)((longlong)puVar5 + 0x1c) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)(puVar5 + 4) = iVar4;
  iVar4 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
    FUN_1462a5cce(param_1 + 8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8) = puVar5;
  iVar4 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar4 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar9 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar7 + lVar9) + 0x24) == '\0') {
        FUN_142b2ba8a(param_1,puVar5);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar4 * 8 != lVar9);
  }
LAB_140d8b4dd:
  local_58 = *param_4;
  local_50 = param_4[1];
  FUN_140aee220(param_1,param_2,1);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d8b592 FUN_140d8b592 body=666 status=ok
// SIG undefined FUN_140d8b592(void)

undefined8 * FUN_140d8b592(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [36];
  undefined8 local_94;
  int local_8c;
  undefined8 *local_88;
  undefined8 **local_80 [2];
  byte local_70;
  char local_6c;
  undefined8 *local_68;
  undefined8 local_60 [2];
  byte local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140d8b835();
  if (param_2 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
  }
  local_68 = (undefined8 *)CONCAT44(uVar3,uVar7);
  iVar2 = FUN_140d8b8d4(uVar3 ^ uVar7,&local_68);
  if ((iVar2 != -1) && (lVar9 = (longlong)iVar2 * 0x2c + DAT_14c9a3b80, lVar9 != 0)) {
    *param_1 = *(undefined8 *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar9 + 0x20);
    *(byte *)(param_1 + 3) = bVar1;
    (*(code *)(&PTR_LAB_14a183130)[bVar1])(param_1 + 1,lVar9 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  local_4c = '\0';
  FUN_140d8b835();
  lVar9 = DAT_14c9a3b70;
  lVar4 = (longlong)DAT_14c9a3b78;
  if (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (*(int *)(lVar9 + 0x10 + lVar8) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar9 + 8 + lVar8);
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,&local_88,param_2);
      if (local_6c == '\x01') {
        local_68 = local_88;
        local_50 = local_70;
        (*(code *)(&PTR_FUN_14a183310)[local_70])(local_60,local_80);
        goto LAB_140d8b76c;
      }
      if (local_4c == '\x01') {
        local_4c = '\0';
      }
    } while ((local_4c == '\0') &&
            (bVar10 = lVar4 * 0x18 + -0x18 != lVar8, lVar8 = lVar8 + 0x18, bVar10));
    if (local_4c != '\0') goto LAB_140d8b771;
  }
  local_60[0] = *(undefined8 *)(param_2 + 0x18);
  local_68 = (undefined8 *)0x0;
  local_50 = 0;
LAB_140d8b76c:
  local_4c = '\x01';
LAB_140d8b771:
  local_94 = 0;
  FUN_14485c47a(&local_94,param_2);
  local_88 = &local_94;
  local_80[0] = &local_68;
  FUN_1457a5efc(&local_8c);
  lVar9 = DAT_14c9a3b80 + (longlong)local_8c * 0x2c;
  *param_1 = *(undefined8 *)(lVar9 + 8);
  bVar1 = *(byte *)(lVar9 + 0x20);
  *(byte *)(param_1 + 3) = bVar1;
  (*(code *)(&PTR_LAB_14a183130)[bVar1])(param_1 + 1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8b835 FUN_140d8b835 body=159 status=ok
// SIG undefined FUN_140d8b835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d8b835(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3bd0) {
    FUN_144b3d300(&DAT_14c9a3bd0);
    if (DAT_14c9a3bd0 == -1) {
      DAT_14c9a3ba0 = 0;
      DAT_14c9a3ba8 = 0;
      DAT_14c9a3b70 = 0;
      _DAT_14c9a3b78 = 0;
      DAT_14c9a3b80 = 0;
      _DAT_14c9a3b88 = 0;
      _DAT_14c9a3bac = 0xffffffff00000080;
      DAT_14c9a3bb4 = 0;
      DAT_14c9a3bc0 = 0;
      DAT_14c9a3bc8 = 0;
      atexit((_func_5014 *)&LAB_142b2c774);
      _Init_thread_footer(&DAT_14c9a3bd0);
      return;
    }
  }
  return;
}



// FUNCTION 140d8b8d4 FUN_140d8b8d4 body=202 status=ok
// SIG undefined FUN_140d8b8d4(void)

int FUN_140d8b8d4(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c9a3b88 != DAT_14c9a3bb4) {
    puVar2 = &DAT_14c9a3bb8;
    if (DAT_14c9a3bc0 != (undefined *)0x0) {
      puVar2 = DAT_14c9a3bc0;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14c9a3bc8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14c9a3b80 + (longlong)iVar3 * 0x2c);
        cVar1 = FUN_14472ecf8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_140d8b962;
        iVar3 = *(int *)(DAT_14c9a3b80 + 0x24 + (longlong)iVar3 * 0x2c);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_140d8b962:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8b9a0 FUN_140d8b9a0 body=357 status=ok
// SIG undefined FUN_140d8b9a0(void)

void FUN_140d8b9a0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[0x1b] != 0) {
    lVar8 = FUN_1457a5e6a(param_1,param_2);
    if (lVar8 != 0) {
      lVar5 = FUN_14479d2ce(lVar8 + 0x10);
      if (lVar5 != 0) {
        uVar6 = FUN_140ef2452();
        plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,*param_2,param_3);
          FUN_140d8bc82(lVar8 + 0x28,local_3c,param_2);
          if (*(int *)(lVar8 + 0x20) == *(int *)(lVar8 + 0x30) - *(int *)(lVar8 + 0x5c)) {
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
        }
      }
    }
  }
  if (param_2[0x12] != 0) {
    uVar1 = param_2[0xc];
    if (param_2[0xe] != 0) {
      uVar1 = FUN_144a78877(uVar1);
    }
    uVar2 = param_2[0xf];
    if (param_2[0x11] != 0) {
      uVar2 = FUN_144a78877(uVar2);
    }
    uVar3 = param_2[0x12];
    if (param_2[0x14] != 0) {
      uVar3 = FUN_144a78877(uVar3);
    }
    iVar4 = FUN_1410b645c((longlong *)(param_1 + 0x4d8),uVar2 ^ uVar1 ^ uVar3,param_2 + 0xc);
    if ((iVar4 != -1) &&
       (lVar8 = (longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x4d8),
       lVar8 != -0x28 && lVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8bb20 FUN_140d8bb20 body=353 status=ok
// SIG undefined FUN_140d8bb20(void)

void FUN_140d8bb20(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d8bba5;
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
LAB_140d8bba5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140d8bc82 FUN_140d8bc82 body=1543 status=ok
// SIG undefined FUN_140d8bc82(void)

int * FUN_140d8bc82(longlong *param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1447cc1b4(param_1,iVar16);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar7 = iVar20 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar8 = iVar20 + 1;
    iVar12 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar12 = iVar20;
    }
    if (iVar12 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar7 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar15 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar3 = 4;
            if (4 < uVar15) {
              uVar3 = uVar15;
            }
          }
          else {
            uVar3 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar3 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar11 + 0xf);
              if (uVar3 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
              }
              else {
                uVar13 = (ulonglong)(uVar19 & 0xfffffff0);
                if (uVar13 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar6) {
                    uVar21 = (ulonglong)bVar6;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_140d8c198;
                    lVar5 = uVar21 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar13 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_140d8c198:
          iVar4 = (int)(uVar11 >> 2);
          iVar8 = -0x20;
          if ((int)uVar15 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar10,iVar7);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar10;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar5 = (longlong)iVar16;
    iVar20 = *(int *)(*param_1 + 4 + lVar5 * 0xc);
    *(int *)(param_1 + 6) = iVar20;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0xc) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar15 = 1;
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar20 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar20 = iVar16;
  }
  puVar9[iVar20 >> 5] = puVar9[iVar20 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  lVar17 = *param_1;
  uVar3 = *param_3;
  *(uint *)(lVar17 + lVar5 * 0xc) = uVar3;
  *(undefined4 *)(lVar17 + 4 + lVar5 * 0xc) = 0xffffffff;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar19) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar3) * 4);
    if (iVar20 != -1) {
      do {
        if (*(uint *)(*param_1 + (longlong)iVar20 * 0xc) == uVar3) {
          FUN_1410b64cc(param_1,iVar16);
          iVar16 = iVar20;
          goto LAB_140d8c07d;
        }
        iVar20 = *(int *)(*param_1 + (longlong)iVar20 * 0xc + 4);
      } while (iVar20 != -1);
    }
  }
  if (3 < uVar19) {
    uVar11 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    lVar17 = lVar17 + lVar5 * 0xc;
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)(lVar17 + 8) = uVar3;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(lVar17 + 4) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         iVar16;
    goto LAB_140d8c07d;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  if (uVar15 == 0) goto LAB_140d8c07d;
  plVar14 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
LAB_140d8be5f:
    uVar3 = 0;
    do {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar15 != uVar3);
  }
  else {
    FUN_1446efa72(plVar10,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_140d8be5f;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar11 = 0;
    uVar13 = 1;
    iVar8 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar7 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar7 = iVar20 + -1;
      }
      uVar11 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar11;
      }
      iVar8 = 0;
      do {
        if (uVar13 == uVar11) goto LAB_140d8c07d;
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar11 = 0;
      iVar8 = 0;
    }
    uVar13 = (ulonglong)(-uVar15 & uVar15);
    uVar21 = uVar13 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar7 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar7) {
      iVar7 = iVar20;
    }
  }
  if (iVar7 < iVar20) {
    uVar15 = 0xffffffff;
    do {
      lVar5 = *param_1;
      lVar17 = (longlong)iVar7;
      uVar21 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar5 + lVar17 * 0xc);
      iVar20 = (int)uVar21;
      *(int *)(lVar5 + 8 + lVar17 * 0xc) = iVar20;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(undefined4 *)(lVar5 + 4 + lVar17 * 0xc) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar15 = ~(uint)uVar13 & uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar7 = (int)uVar11;
      lVar5 = (longlong)iVar7;
      uVar3 = puVar9[lVar5] & uVar15;
      if (uVar3 == 0) {
        iVar12 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar12 = iVar20 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar4 = iVar12;
        if (iVar12 < iVar7) {
          iVar4 = iVar7;
        }
        if (iVar12 <= iVar7) break;
        lVar17 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar9[lVar5 + lVar17 + 1];
          if (uVar3 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar4 - lVar5 == lVar17) goto LAB_140d8c07d;
        }
        uVar11 = (ulonglong)(iVar7 + (int)lVar17 + 1);
        uVar15 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar21 = uVar13 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar20);
  }
LAB_140d8c07d:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 140d8c28a FUN_140d8c28a body=59 status=ok
// SIG undefined FUN_140d8c28a(void)

void FUN_140d8c28a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b242940;
  FUN_140d8c315(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 140d8c2c6 FUN_140d8c2c6 body=79 status=ok
// SIG undefined FUN_140d8c2c6(void)

void FUN_140d8c2c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42acb0;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d8c311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140d8c315 FUN_140d8c315 body=73 status=ok
// SIG undefined FUN_140d8c315(void)

void FUN_140d8c315(longlong param_1,int param_2)

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



// FUNCTION 140d8c35e FUN_140d8c35e body=508 status=ok
// SIG undefined FUN_140d8c35e(void)

void FUN_140d8c35e(longlong param_1)

{
  longlong *plVar1;
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
  undefined8 *local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14066e964();
  plVar1 = (longlong *)FUN_140343d7a(param_1);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb22468 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f2c44f;
      local_50 = FUN_146438a21;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb22468);
    if (lVar2 != 0) {
      if (DAT_14cb22468 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f2c44f;
        local_50 = FUN_146438a21;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb22468);
      if (lVar2 != lVar3) goto LAB_140d8c3da;
    }
  }
  lVar3 = 0;
LAB_140d8c3da:
  FUN_140d8c55c(&local_28,lVar3);
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 0xdc) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8c55c FUN_140d8c55c body=204 status=ok
// SIG undefined FUN_140d8c55c(void)

uint * FUN_140d8c55c(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140d8c636 FUN_140d8c636 body=207 status=ok
// SIG undefined FUN_140d8c636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d8c636(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0158e0;
  FUN_140d8c705(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c730(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d8c705 FUN_140d8c705 body=43 status=ok
// SIG undefined FUN_140d8c705(void)

void FUN_140d8c705(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457a63dc(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 140d8c730 FUN_140d8c730 body=55 status=ok
// SIG undefined FUN_140d8c730(void)

void FUN_140d8c730(longlong *param_1)

{
  FUN_140d8c768(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d8c768 FUN_140d8c768 body=589 status=ok
// SIG undefined FUN_140d8c768(void)

void FUN_140d8c768(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140d8c880;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x60;
      FUN_140782dbc(*(undefined8 *)(lVar11 + 0x48 + lVar10),*(undefined4 *)(lVar11 + 0x50 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      lVar11 = *(longlong *)(lVar11 + 0x40 + lVar10);
      if ((lVar11 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar11 + 0x50));
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar11 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_140d8c880;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140d8c880:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140d8c9b6 FUN_140d8c9b6 body=2139 status=ok
// SIG undefined FUN_140d8c9b6(void)

void FUN_140d8c9b6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  uint local_ac;
  uint *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  uint local_70;
  uint local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_2;
  local_b8 = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) < 0) {
    FUN_1457a6488(local_b8,0);
  }
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  iStack_68 = -1;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar21 = *(int *)(lVar2 + 0xc68) - *(int *)(lVar2 + 0xc94);
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar21);
    }
    FUN_1405357e8(&local_98);
    iVar14 = (int)uStack_90;
    lVar23 = (longlong)(int)uStack_90;
    uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + uVar21);
    if ((uint)(uStack_90._4_4_ - iVar14) < uVar21) {
      FUN_1403951a8(&local_98);
    }
    if (iVar14 < (int)uVar21) {
      uVar16 = (ulonglong)uVar21;
      piVar11 = (int *)(local_98 + uVar16 * 0x18 + -0x14);
      do {
        iVar14 = (int)uVar16;
        if (local_64 != 0) {
          *(int *)(local_98 + (longlong)iStack_68 * 0x18) = iVar14 + -1;
        }
        piVar11[-1] = -1;
        iVar8 = -1;
        if (0 < local_64) {
          iVar8 = iStack_68;
        }
        uVar16 = uVar16 - 1;
        *piVar11 = iVar8;
        iStack_68 = iVar14 + -1;
        local_64 = local_64 + 1;
        piVar11 = piVar11 + -6;
      } while (lVar23 < (longlong)uVar16);
    }
    uVar19 = uVar21 + 0x1f >> 5;
    local_70 = uVar21;
    if (local_6c + 0x1f >> 5 < uVar19) {
      FUN_14499171c(local_88,0,uVar19,4);
      local_6c = uVar21 + 0x1f & 0xffffffe0;
    }
    puVar6 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar6 = local_88;
    }
    if (uVar21 < 0x101) {
      uVar19 = uVar19 + (uVar19 == 0);
    }
    memset(puVar6,0,(ulonglong)(uVar19 << 2));
    uVar19 = local_70 + 0x1f;
    if (-1 < (int)local_70) {
      uVar19 = local_70;
    }
    if ((int)local_70 % 0x20 != 0) {
      puVar6 = local_88;
      if (local_78 != (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      bVar7 = -(char)((int)local_70 % 0x20);
      *(uint *)(puVar6 + (longlong)((int)uVar19 >> 5) * 4) =
           (uint)(*(int *)(puVar6 + (longlong)((int)uVar19 >> 5) * 4) << (bVar7 & 0x1f)) >>
           (bVar7 & 0x1f);
    }
    iVar14 = 1;
    if (3 < uVar21) {
      uVar21 = (uVar21 | 1) + 0xe;
      iVar14 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar14 = 1 << ((byte)iVar14 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar14)) {
      local_50 = iVar14;
      FUN_140d8d232();
    }
  }
  iVar14 = *(int *)(lVar2 + 0xc68) - *(int *)(lVar2 + 0xc94);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (*(int *)((longlong)param_1 + 0xe4) < iVar14) {
    FUN_1457a6488();
  }
  iVar14 = *(int *)(lVar2 + 0xc88);
  local_a0 = param_2;
  if (iVar14 == 0) {
    uVar16 = 1;
    uVar17 = 0;
    iVar8 = 0;
    iVar22 = 0;
  }
  else {
    puVar12 = *(uint **)(lVar2 + 0xc80);
    if (*(uint **)(lVar2 + 0xc80) == (uint *)0x0) {
      puVar12 = (uint *)(lVar2 + 0xc70);
    }
    uVar21 = *puVar12;
    if (uVar21 == 0) {
      iVar8 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar8 = iVar14 + -1;
      }
      uVar17 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar17;
      }
      iVar22 = 0;
      do {
        if (uVar16 == uVar17) goto LAB_140d8ce8f;
        iVar22 = iVar22 + 0x20;
        uVar21 = puVar12[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar17 = 0;
      iVar22 = 0;
    }
    uVar16 = (ulonglong)(-uVar21 & uVar21);
    uVar13 = uVar16 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar8 = (iVar22 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar8) {
      iVar8 = iVar14;
    }
  }
  if (iVar8 < iVar14) {
    local_a8 = (uint *)(lVar2 + 0xc70);
    uVar21 = 0xffffffff;
    do {
      local_ac = uVar21;
      plVar18 = (longlong *)(*(longlong *)(lVar2 + 0xc60) + (longlong)iVar8 * 0x80);
      if ((int)uStack_90 != local_64) {
        lVar23 = *plVar18;
        uVar21 = (uint)((ulonglong)lVar23 >> 0x10);
        uVar19 = (uint)lVar23 & 0xffff;
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_60;
        }
        for (iVar14 = *(int *)(puVar6 + (ulonglong)
                                        (local_50 - 1U &
                                        (int)((ulonglong)lVar23 >> 0x20) +
                                        ((uint)lVar23 << 0x10 | uVar19) +
                                        (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar19 >> 4)) * 4);
            iVar14 != -1; iVar14 = *(int *)(local_98 + (longlong)iVar14 * 0x18 + 0x10)) {
          if (*(longlong *)(local_98 + (longlong)iVar14 * 0x18) == lVar23) goto LAB_140d8cdf5;
        }
      }
      iVar14 = (int)param_1[0x1c];
      *(uint *)(param_1 + 0x1c) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0xe4) < iVar14 + 1U) {
        FUN_140f80f72(local_b8,iVar14);
      }
      iVar9 = iStack_68;
      uVar13 = uStack_90;
      uVar3 = *(undefined4 *)((longlong)plVar18 + 4);
      lVar23 = plVar18[1];
      uVar4 = *(undefined4 *)((longlong)plVar18 + 0xc);
      puVar20 = (undefined4 *)(*local_b8 + (longlong)iVar14 * 0x10);
      *puVar20 = (int)*plVar18;
      puVar20[1] = uVar3;
      puVar20[2] = (int)lVar23;
      puVar20[3] = uVar4;
      puVar20 = (undefined4 *)((longlong)iVar8 * 0x80 + *(longlong *)(lVar2 + 0xc60));
      if (local_64 == 0) {
        iVar9 = (int)uStack_90;
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
        if (uStack_90._4_4_ == iVar9) {
          FUN_1403951a8(&local_98,uVar13 & 0xffffffff);
        }
        lVar23 = (longlong)iVar9;
        iVar14 = FUN_144a54ea4(local_88,1);
        puVar6 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar6 = local_88;
        }
        iVar8 = iVar14 + 0x1f;
        if (-1 < iVar14) {
          iVar8 = iVar14;
        }
        bVar7 = (byte)iVar14 & 0x1f;
        *(uint *)(puVar6 + (longlong)(iVar8 >> 5) * 4) =
             *(uint *)(puVar6 + (longlong)(iVar8 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      }
      else {
        lVar23 = (longlong)iStack_68;
        iStack_68 = *(int *)(local_98 + 4 + lVar23 * 0x18);
        local_64 = local_64 + -1;
        if (local_64 != 0) {
          *(undefined4 *)(local_98 + (longlong)iStack_68 * 0x18) = 0xffffffff;
        }
      }
      iVar14 = 1;
      puVar6 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar6 = local_88;
      }
      iVar8 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      *(uint *)(puVar6 + (longlong)(iVar8 >> 5) * 4) =
           *(uint *)(puVar6 + (longlong)(iVar8 >> 5) * 4) | 1 << ((byte)iVar9 & 0x1f);
      plVar18 = (longlong *)(local_98 + lVar23 * 0x18);
      uVar3 = puVar20[1];
      uVar4 = puVar20[2];
      uVar5 = puVar20[3];
      *(undefined4 *)plVar18 = *puVar20;
      *(undefined4 *)((longlong)plVar18 + 4) = uVar3;
      *(undefined4 *)(plVar18 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar18 + 0xc) = uVar5;
      *(undefined4 *)(plVar18 + 2) = 0xffffffff;
      lVar23 = *plVar18;
      uVar21 = (uint)((ulonglong)lVar23 >> 0x10);
      uVar19 = (uint)lVar23 & 0xffff;
      uVar21 = ((uint)lVar23 << 0x10 | uVar19) + (int)((ulonglong)lVar23 >> 0x20) +
               (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar19 >> 4);
      uVar19 = (int)uStack_90 - local_64;
      if (uVar19 != 1) {
        if ((int)uStack_90 != local_64) {
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_60;
          }
          iVar8 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar21) * 4);
          while (iVar8 != -1) {
            plVar1 = (longlong *)(local_98 + (longlong)iVar8 * 0x18);
            if (*plVar1 == lVar23) {
              uVar3 = *(undefined4 *)((longlong)plVar18 + 4);
              lVar23 = plVar18[1];
              uVar4 = *(undefined4 *)((longlong)plVar18 + 0xc);
              *(int *)plVar1 = (int)*plVar18;
              *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
              *(int *)(plVar1 + 1) = (int)lVar23;
              *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
              FUN_148cecfe8(&local_98,iVar9);
              goto LAB_140d8cdf5;
            }
            iVar8 = (int)plVar1[2];
          }
        }
        if (3 < uVar19) {
          uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
          lVar23 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar14 = 1 << ((byte)lVar23 & 0x1f);
        }
      }
      if (((int)uVar19 < 1) || (iVar14 <= local_50)) {
        uVar21 = local_50 - 1U & uVar21;
        *(uint *)((longlong)plVar18 + 0x14) = uVar21;
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_60;
        }
        *(undefined4 *)(plVar18 + 2) =
             *(undefined4 *)(puVar6 + ((longlong)local_50 - 1U & (longlong)(int)uVar21) * 4);
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_60;
        }
        *(int *)(puVar6 + ((longlong)local_50 - 1U & (longlong)(int)uVar21) * 4) = iVar9;
      }
      else {
        local_50 = iVar14;
        FUN_140d8d232();
      }
LAB_140d8cdf5:
      uVar21 = local_ac & ~(uint)uVar16;
      puVar12 = *(uint **)(lVar2 + 0xc80);
      if (*(uint **)(lVar2 + 0xc80) == (uint *)0x0) {
        puVar12 = local_a8;
      }
      iVar14 = *(int *)(lVar2 + 0xc88);
      iVar8 = (int)uVar17;
      lVar23 = (longlong)iVar8;
      uVar19 = puVar12[lVar23] & uVar21;
      if (uVar19 == 0) {
        iVar9 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar9 = iVar14 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar9 <= iVar8) break;
        lVar15 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar19 = puVar12[lVar23 + lVar15 + 1];
          if (uVar19 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar10 - lVar23 == lVar15) goto LAB_140d8ce8f;
        }
        uVar17 = (ulonglong)(iVar8 + (int)lVar15 + 1);
        uVar21 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar19 & uVar19);
      uVar13 = uVar16 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar8 = (iVar22 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar14);
  }
LAB_140d8ce8f:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar18 = local_a0;
  uVar16 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_1405357e8(&local_98,0);
  }
  iStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x120))(param_1,*(undefined8 *)(*plVar18 + 0x6a0));
  if (param_1[3] == 0) {
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 140d8d232 FUN_140d8d232 body=651 status=ok
// SIG undefined FUN_140d8d232(void)

void FUN_140d8d232(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0);
    }
LAB_140d8d277:
    uVar4 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    if (uVar8 == 0) goto LAB_140d8d369;
    FUN_1446efa72(plVar6,0);
    if (0 < (int)uVar8) goto LAB_140d8d277;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar9 = (int)param_1[5];
  local_4c = 1;
  if (iVar9 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = local_48;
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar12 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar12 = iVar9 + -1;
      }
      uVar7 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar7;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar12 = 0;
      do {
        local_3c = iVar9;
        if (uVar10 == uVar7) goto LAB_140d8d33b;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar11[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
      local_50 = (int)uVar7;
      local_38 = iVar12;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar8 & uVar8;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar9 <= local_3c) {
      local_3c = iVar9;
    }
  }
LAB_140d8d33b:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar9) {
    do {
      lVar3 = *local_58;
      lVar5 = (longlong)local_3c;
      uVar2 = *(undefined8 *)(lVar3 + lVar5 * 0x18);
      uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar4 = (uint)uVar2 & 0xffff;
      uVar10 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar4) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar10;
      *(int *)(lVar3 + 0x14 + lVar5 * 0x18) = iVar9;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_140d8d369:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d8d4be FUN_140d8d4be body=142 status=ok
// SIG undefined FUN_140d8d4be(void)

void FUN_140d8d4be(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1 + 0xe0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((longlong)*(int *)(param_1 + 0xa28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa20);
    lVar4 = (longlong)*(int *)(param_1 + 0xa28) << 4;
    do {
      FUN_14019c9f2(lVar3,param_2);
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 140d8d54c FUN_140d8d54c body=71 status=ok
// SIG undefined FUN_140d8d54c(void)

void FUN_140d8d54c(longlong param_1,undefined8 param_2)

{
  FUN_14019c8c6();
  FUN_14019c9a8(param_1 + 0x2d0,param_2);
  FUN_14019c9a8(param_1 + 0x3e0,param_2);
  FUN_14019c9f2(param_1 + 0x470,param_2);
  return;
}



// FUNCTION 140d8d594 FUN_140d8d594 body=91 status=ok
// SIG undefined FUN_140d8d594(void)

undefined8 * FUN_140d8d594(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407bec78();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_140d8d5c6;
  }
  param_2 = FUN_1407bec78();
LAB_140d8d5c6:
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b42d2c0;
  return param_1;
}



// FUNCTION 140d8d5f0 FUN_140d8d5f0 body=228 status=ok
// SIG undefined FUN_140d8d5f0(void)

longlong FUN_140d8d5f0(void)

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
  if (DAT_14cbaee90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14033a510;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464e4442;
    local_38 = &LAB_148c45c65;
    local_40 = &LAB_140485b68;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x850;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSpawnPoint",&DAT_14cbaee90,&DAT_148c45c64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaee90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8d6d6 FUN_140d8d6d6 body=21 status=ok
// SIG undefined FUN_140d8d6d6(void)

undefined8 * FUN_140d8d6d6(void)

{
  FUN_140d8d6ec();
  return &DAT_14c990198;
}



// FUNCTION 140d8d6ec FUN_140d8d6ec body=176 status=ok
// SIG undefined FUN_140d8d6ec(void)

void FUN_140d8d6ec(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9901d0) {
    FUN_144b3d300(&DAT_14c9901d0);
    if (DAT_14c9901d0 == -1) {
      FUN_1446ddc76(local_18,"SSpacer",1);
      FUN_145766b7c(&DAT_14c990198);
      atexit(FUN_142903cf7);
      _Init_thread_footer(&DAT_14c9901d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8d79e FUN_140d8d79e body=525 status=ok
// SIG undefined FUN_140d8d79e(void)

float FUN_140d8d79e(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (uint *)(**(code **)(*param_1 + 0x10))();
  fVar6 = 0.0;
  if ((((puVar3[1] == 0) || (uVar1 = *puVar3, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != puVar3[1])) ||
      (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || ((char)puVar3[0xe] != '\x01'))))))
  goto LAB_140d8d8ab;
  if (((*(uint *)(plVar5 + 1) & 0x10200000) == 0) && (lVar4 = *plVar5, lVar4 != 0)) {
    if (DAT_14caf64b8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_147c45ce0;
      local_60 = &LAB_1463f1ff4;
      local_68 = &DAT_149e063b2;
      local_70 = 0x4000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) goto LAB_140d8d8d9;
LAB_140d8d86f:
    if ((((*(longlong *)(lVar4 + 0x3b0) != 0) &&
         (fVar6 = *(float *)(*(longlong *)(lVar4 + 0x3b0) + 0x3d8), 0.0 < fVar6)) &&
        (lVar4 = FUN_140d8d9ac(puVar3), lVar4 != 0)) &&
       (plVar5 = *(longlong **)(lVar4 + 0x938), plVar5 != (longlong *)0x0)) {
      fVar6 = fVar6 * 0.001;
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5,fVar6,0);
      if (cVar2 != '\0') goto LAB_140d8d8ab;
    }
  }
  else {
    lVar4 = 0;
LAB_140d8d8d9:
    lVar4 = *(longlong *)(lVar4 + 0x1b0);
    if (lVar4 != 0) goto LAB_140d8d86f;
  }
  fVar6 = 0.0;
LAB_140d8d8ab:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar6;
}



// FUNCTION 140d8d9ac FUN_140d8d9ac body=90 status=ok
// SIG undefined FUN_140d8d9ac(void)

undefined8 FUN_140d8d9ac(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = FUN_1447210f0(*puVar3);
        return uVar2;
      }
      uVar2 = FUN_1447210f0(0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140d8da0e FUN_140d8da0e body=158 status=ok
// SIG undefined FUN_140d8da0e(void)

undefined8 * FUN_140d8da0e(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b6aa7b0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  local_20 = "usabilitydata_missionusable_default";
  local_18 = 0x23;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (param_1[0x35] != (ulonglong)uVar1) {
    param_1[0x37] = 0;
  }
  param_1[0x35] = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8daae FUN_140d8daae body=277 status=ok
// SIG undefined FUN_140d8daae(void)

void FUN_140d8daae(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbd5900 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  local_24 = *(undefined4 *)(param_2 + 0xf8);
  FUN_1457a6588(param_1);
  plVar2 = (longlong *)FUN_141008fe0(param_1);
  lVar4 = *plVar2;
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1478));
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1478));
  iVar5 = 0x32;
  do {
    FUN_140d8dbd3();
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_140d8e082(param_1);
  puVar3 = (undefined8 *)FUN_141181ea8(param_1);
  pbVar1 = (byte *)*puVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(pbVar1 + 0x1c0));
  *(int *)(pbVar1 + 0x1b8) = *(int *)(pbVar1 + 0x1b8) + 1;
  *pbVar1 = 0;
  if ((longlong)*(int *)(pbVar1 + 0x88) != 0) {
    lVar4 = 0;
    bVar6 = 0;
    do {
      bVar6 = bVar6 | *(byte *)(*(longlong *)(pbVar1 + 0x80) + 0x18 + lVar4) >> 2 & 1;
      *pbVar1 = bVar6;
      lVar4 = lVar4 + 0x430;
    } while ((longlong)*(int *)(pbVar1 + 0x88) * 0x430 - lVar4 != 0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pbVar1 + 0x1c0));
  FUN_141007e0c(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8dbd3 FUN_140d8dbd3 body=671 status=ok
// SIG undefined FUN_140d8dbd3(void)

int FUN_140d8dbd3(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar5 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar7 = plVar5;
  if (cVar2 == '\0') {
LAB_140d8dc0e:
    if (*plVar7 == 0) goto LAB_140d8dd3d;
    plVar7 = plVar5;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar7 = (longlong *)(*plVar5 + 0x30);
        goto LAB_140d8dc23;
      }
LAB_140d8dcd2:
      if (((DAT_14c9a1ab0 == 0) || (*plVar5 == 0)) ||
         (plVar5 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar5 + 0x28)),
         plVar5 == (longlong *)0x0)) goto LAB_140d8dc3b;
      puVar9 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar5 + 0x2a0))(plVar5,plVar1,puVar9);
LAB_140d8dd22:
      if (cVar2 == '\0') goto LAB_140d8dc3b;
      goto LAB_140d8dd87;
    }
LAB_140d8dc23:
    if (*plVar7 == 0) goto LAB_140d8dcd2;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar7 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar5 != 0 &&
        (plVar5 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar5 + 0x28)),
        plVar5 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar5 + 0x2a8))(plVar5,plVar1);
      goto LAB_140d8dd22;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar7 = (longlong *)(*plVar5 + 0x30);
      goto LAB_140d8dc0e;
    }
LAB_140d8dd3d:
    lVar6 = FUN_140162146();
    if (lVar6 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_140d8dd87:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_140d8dc3b:
  lVar6 = plVar1[5];
  if (lVar6 == 0) {
    uVar3 = FUN_145d8612a();
    lVar6 = FUN_14477b664(uVar3);
    plVar1[5] = lVar6;
  }
  lVar4 = plVar1[6];
  if (lVar4 == 0) {
    iVar8 = 0;
    if ((lVar6 == 0) || (plVar1[4] == 0)) goto LAB_140d8dc77;
    plVar5 = *(longlong **)(lVar6 + 0xb8);
    iVar8 = 0;
    if ((plVar5 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
      plVar1[6] = 0;
      goto LAB_140d8dc77;
    }
    uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar4 = FUN_144aff482(uVar3,plVar1 + 4);
    plVar1[6] = lVar4;
    if (lVar4 == 0) goto LAB_140d8dc77;
  }
  if ((longlong)*(int *)(lVar4 + 0x20) == 0) {
    iVar8 = 0;
  }
  else {
    lVar6 = 0;
    iVar8 = 0;
    do {
      iVar8 = iVar8 + *(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar6);
      lVar6 = lVar6 + 0x38;
    } while ((longlong)*(int *)(lVar4 + 0x20) * 0x38 - lVar6 != 0);
  }
LAB_140d8dc77:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 140d8de74 FUN_140d8de74 body=121 status=ok
// SIG undefined FUN_140d8de74(void)

longlong FUN_140d8de74(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0x430;
    do {
      if (*(int *)(lVar2 + 8) == iVar1) {
        if (lVar2 != 0) {
          return lVar2;
        }
        break;
      }
      lVar2 = lVar2 + 0x430;
      lVar3 = lVar3 + -0x430;
    } while (lVar3 != 0);
  }
  iVar1 = *param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x430;
  do {
    if (*(int *)(lVar2 + 8) == iVar1) {
      return lVar2;
    }
    lVar2 = lVar2 + 0x430;
    lVar3 = lVar3 + -0x430;
  } while (lVar3 != 0);
  return 0;
}



// FUNCTION 140d8deee FUN_140d8deee body=129 status=ok
// SIG undefined FUN_140d8deee(void)

ulonglong FUN_140d8deee(longlong param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + uVar2) == *param_2) {
        if ((int)(uVar2 >> 4) * 0x7a44c6b != -1) {
          return CONCAT71((uint7)(uVar2 >> 0xc),1);
        }
        break;
      }
      uVar2 = uVar2 + 0x430;
    } while ((longlong)*(int *)(param_1 + 0x40) * 0x430 - uVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 8 + uVar2) == *param_2) {
        iVar1 = (int)(uVar2 >> 4) * 0x7a44c6b;
        return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != -1);
      }
      uVar2 = uVar2 + 0x430;
    } while ((longlong)*(int *)(param_1 + 0x88) * 0x430 - uVar2 != 0);
  }
  return 0;
}



// FUNCTION 140d8df70 FUN_140d8df70 body=273 status=ok
// SIG undefined FUN_140d8df70(void)

longlong FUN_140d8df70(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14011c349();
  local_20 = *(undefined8 *)(lVar1 + 0x48);
  lVar1 = FUN_140254f32(param_1);
  if (lVar1 != 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0xa0) + 0x120);
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xa0) + 0x118);
      lVar3 = 0;
      do {
        if (*(int *)(lVar1 + 0x108 + lVar3) == *param_2) {
          lVar1 = lVar1 + lVar3 + 0x10;
          if (lVar1 != 0) goto LAB_140d8dff2;
          break;
        }
        lVar3 = lVar3 + 0x150;
      } while (lVar2 * 0x150 - lVar3 != 0);
    }
    lVar1 = FUN_14011c349();
    local_20 = *(undefined8 *)(lVar1 + 0x60);
    lVar1 = FUN_140254f32(param_1);
    if (lVar1 != 0) {
      lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0xa0) + 0x120);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0xa0) + 0x118);
        lVar1 = 0;
        lVar4 = 0;
        do {
          if (*(int *)(lVar3 + 0x108 + lVar4) == *param_2) {
            lVar1 = lVar3 + lVar4 + 0x10;
            break;
          }
          lVar4 = lVar4 + 0x150;
        } while (lVar2 * 0x150 - lVar4 != 0);
        goto LAB_140d8dff2;
      }
    }
  }
  lVar1 = 0;
LAB_140d8dff2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140d8e082 FUN_140d8e082 body=811 status=ok
// SIG undefined FUN_140d8e082(void)

void FUN_140d8e082(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  char local_13b;
  char local_13a;
  char local_139;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = FUN_140495e96(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_140d8e3ae();
    if (lVar3 != 0) {
      local_70 = &local_139;
      local_139 = '\0';
      local_68 = &local_13a;
      local_13a = '\0';
      local_60 = &local_13b;
      local_13b = '\0';
      local_88 = 0;
      local_78 = &PTR_LAB_14b9a6fd0;
      local_98 = &LAB_14424a748;
      FUN_14100973a(lVar3);
      lVar2 = FUN_140cee904(lVar2);
      cVar1 = local_139;
      if (lVar2 != 0) {
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_1446ddda2(&local_c8,"anynew",0);
        uStack_144 = 0;
        uStack_140 = 0;
        FUN_14052b5e0(&local_148,"inventory",0);
        if (cVar1 == '\x01') {
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1404e49fa(&local_58,&local_c8);
          local_138 = CONCAT44(uStack_144,local_148);
          local_130 = uStack_140;
          FUN_140ceeaa0(lVar2,&local_138,&local_58,0);
        }
        else {
          FUN_1410290ea(lVar2,&local_148,&local_c8,0);
        }
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        cVar1 = local_13a;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        FUN_1446ddda2(&local_f8,"equippednew",0);
        uStack_150 = 0;
        uStack_14c = 0;
        FUN_14052b5e0(&local_154,"inventory",0);
        if (cVar1 == '\x01') {
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1404e49fa(&local_58,&local_f8);
          local_138 = CONCAT44(uStack_150,local_154);
          local_130 = uStack_14c;
          FUN_140ceeaa0(lVar2,&local_138,&local_58,0);
        }
        else {
          FUN_1410290ea(lVar2,&local_154,&local_f8,0);
        }
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        cVar1 = local_13b;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        FUN_1446ddda2(&local_128,"unequippednew",0);
        uStack_15c = 0;
        uStack_158 = 0;
        FUN_14052b5e0(&local_160,"inventory",0);
        if (cVar1 == '\x01') {
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1404e49fa(&local_58,&local_128);
          local_138 = CONCAT44(uStack_15c,local_160);
          local_130 = uStack_158;
          FUN_140ceeaa0(lVar2,&local_138,&local_58,0);
        }
        else {
          FUN_1410290ea(lVar2,&local_160,&local_128,0);
        }
        if (local_110 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8e3ae FUN_140d8e3ae body=304 status=ok
// SIG undefined FUN_140d8e3ae(void)

undefined8 FUN_140d8e3ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar2 = FUN_14011c349();
      local_18 = *(code **)(lVar2 + 0x48);
      uVar3 = FUN_140254f32(lVar1);
      goto LAB_140d8e41a;
    }
  }
  uVar3 = 0;
LAB_140d8e41a:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8e4e0 FUN_140d8e4e0 body=383 status=ok
// SIG undefined FUN_140d8e4e0(void)

void FUN_140d8e4e0(undefined8 param_1,longlong param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = FUN_141007d7a(param_2,1,
                        CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(param_2 + 0x147)) ^
                        1);
  if (param_4[1] == 0 || iVar2 != *param_4) {
    *param_4 = iVar2;
    param_4[1] = param_4[1] + 1;
  }
  iVar5 = (int)param_3;
  if ((param_4[2] != iVar5) || (param_4[3] == 0)) {
    param_4[2] = iVar5;
    param_4[3] = param_4[3] + 1;
  }
  iVar1 = 0;
  if (0 < iVar2 - iVar5) {
    iVar1 = iVar2 - iVar5;
  }
  if ((iVar1 != param_4[4]) || (param_4[5] == 0)) {
    param_4[4] = iVar1;
    param_4[5] = param_4[5] + 1;
  }
  lVar3 = FUN_140d8e660(param_2,param_5);
  if (lVar3 != 0) {
    iVar2 = *param_5;
    iVar5 = param_4[0x10];
    param_4[0x10] = iVar5 + 1;
    if ((longlong)param_4[0xe] != 0) {
      lVar4 = *(longlong *)(param_4 + 0xc);
      lVar6 = (longlong)param_4[0xe] * 0x430;
      do {
        if (*(int *)(lVar4 + 8) == iVar2) {
          if (lVar4 != 0) goto LAB_140d8e5f5;
          break;
        }
        lVar4 = lVar4 + 0x430;
        lVar6 = lVar6 + -0x430;
      } while (lVar6 != 0);
    }
    param_4[0x10] = iVar5 + 2;
    lVar4 = FUN_1457a69ca(param_4 + 0xc);
    if (*(int *)(lVar4 + 0x28) == 0 || *(longlong *)(param_2 + 0xb8) != *(longlong *)(lVar4 + 0x20))
    {
      *(longlong *)(lVar4 + 0x20) = *(longlong *)(param_2 + 0xb8);
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 1;
    }
LAB_140d8e5f5:
    FUN_140d8ee42(param_1,lVar4,lVar3);
  }
  lVar3 = FUN_14011c349();
  if (*(longlong *)(param_2 + 0xb8) == *(longlong *)(lVar3 + 0x48)) {
    FUN_140d8e082(param_1);
  }
  FUN_14148862c(param_4);
  return;
}



// FUNCTION 140d8e660 FUN_140d8e660 body=76 status=ok
// SIG undefined FUN_140d8e660(void)

longlong FUN_140d8e660(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
  lVar3 = 0;
  do {
    if (*(int *)(lVar1 + 0x108 + lVar3) == *param_2) {
      return lVar1 + lVar3 + 0x10;
    }
    lVar3 = lVar3 + 0x150;
  } while (lVar2 * 0x150 - lVar3 != 0);
  return 0;
}



// FUNCTION 140d8e6ac FUN_140d8e6ac body=1346 status=ok
// SIG undefined FUN_140d8e6ac(void)

undefined8 * FUN_140d8e6ac(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = &PTR_FUN_14b81b980;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x17] = local_118;
  *(undefined4 *)(param_1 + 0x18) = local_110;
  *(undefined4 *)((longlong)param_1 + 0xc4) = local_10c;
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x1a] = local_118;
  *(undefined4 *)(param_1 + 0x1b) = local_110;
  *(undefined4 *)((longlong)param_1 + 0xdc) = local_10c;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x1e] = local_118;
  *(undefined4 *)(param_1 + 0x1f) = local_110;
  *(undefined4 *)((longlong)param_1 + 0xfc) = local_10c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x21] = local_118;
  *(undefined4 *)(param_1 + 0x22) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x114) = local_10c;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x24] = local_118;
  *(undefined4 *)(param_1 + 0x25) = local_110;
  *(undefined4 *)((longlong)param_1 + 300) = local_10c;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x28] = local_118;
  *(undefined4 *)(param_1 + 0x29) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x14c) = local_10c;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x2b] = local_118;
  *(undefined4 *)(param_1 + 0x2c) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x164) = local_10c;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x2e] = local_118;
  *(undefined4 *)(param_1 + 0x2f) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x17c) = local_10c;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x32] = local_118;
  *(undefined4 *)(param_1 + 0x33) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x19c) = local_10c;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_140056680(&local_118,&DAT_149dfb77a);
  param_1[0x35] = local_118;
  *(undefined4 *)(param_1 + 0x36) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = local_10c;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  FUN_140056680(&local_118,&DAT_149e62e78);
  param_1[0x3b] = local_118;
  *(undefined4 *)(param_1 + 0x3c) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = local_10c;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  FUN_140056680(&local_118);
  param_1[0x3e] = local_118;
  *(undefined4 *)(param_1 + 0x3f) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = local_10c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  memset(&local_118,0,0xd8);
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_58 = 1;
  local_54 = 0;
  uStack_4c = 0;
  FUN_140d8ebf0(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  FUN_140368b56(&local_118);
  memset(&local_118,0,0xd8);
  FUN_140c5455a(&local_118);
  FUN_140c541bc(param_1 + 0x5f,&local_118);
  *(undefined4 *)(param_1 + 0x7a) = 0;
  FUN_1407dde54(&local_118);
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
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
  param_1[0x7c] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x7d) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d8ebf0 FUN_140d8ebf0 body=318 status=ok
// SIG undefined FUN_140d8ebf0(void)

undefined8 * FUN_140d8ebf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
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
  FUN_140d8ed2e(param_1 + 8,param_2 + 8);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar4 = param_2 + 0x14;
  if (0xf < (ulonglong)param_2[0x17]) {
    puVar4 = (undefined8 *)param_2[0x14];
  }
  FUN_1401d9f72(param_1 + 0x14,puVar4,param_2[0x16]);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
  uVar1 = *(undefined4 *)(param_2 + 0x19);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar3;
  *(undefined1 *)((longlong)param_2 + 0xc1) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401d7cf8(param_2 + 0x14,&DAT_149e02088);
  return param_1;
}



// FUNCTION 140d8ed2e FUN_140d8ed2e body=125 status=ok
// SIG undefined FUN_140d8ed2e(void)

undefined8 * FUN_140d8ed2e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140d8edac();
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



// FUNCTION 140d8edac FUN_140d8edac body=150 status=ok
// SIG undefined FUN_140d8edac(void)

longlong * FUN_140d8edac(longlong *param_1,longlong *param_2)

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



// FUNCTION 140d8ee42 FUN_140d8ee42 body=1834 status=ok
// SIG undefined FUN_140d8ee42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d8ee42(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong local_90 [7];
  undefined2 *local_58;
  int local_50;
  code *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_2 + 8))(param_2,param_3 + 8);
  if (*(int *)((longlong)param_2 + 0xc) == 0 || *(int *)(param_3 + 0xf8) != (int)param_2[1]) {
    *(int *)(param_2 + 1) = *(int *)(param_3 + 0xf8);
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
  }
  if (*(longlong *)(param_3 + 0xf0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_3 + 0xf0) + 0xb8);
  }
  if ((int)param_2[5] == 0 || lVar6 != param_2[4]) {
    param_2[4] = lVar6;
    *(int *)(param_2 + 5) = (int)param_2[5] + 1;
  }
  if (*(int *)((longlong)param_2 + 0x14) == 0 || *(char *)(param_3 + 0xfc) != (char)param_2[2]) {
    *(char *)(param_2 + 2) = *(char *)(param_3 + 0xfc);
    *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
  }
  if (*(int *)((longlong)param_2 + 0x1c) == 0 || *(int *)(param_3 + 0xec) != (int)param_2[3]) {
    *(int *)(param_2 + 3) = *(int *)(param_3 + 0xec);
    *(int *)((longlong)param_2 + 0x1c) = *(int *)((longlong)param_2 + 0x1c) + 1;
  }
  if ((int)param_2[6] == 0 || *(int *)(param_3 + 0xe8) != *(int *)((longlong)param_2 + 0x2c)) {
    *(int *)((longlong)param_2 + 0x2c) = *(int *)(param_3 + 0xe8);
    *(int *)(param_2 + 6) = (int)param_2[6] + 1;
  }
  if ((int)param_2[8] == 0 || *(int *)((longlong)param_2 + 0x3c) != 10) {
    *(undefined4 *)((longlong)param_2 + 0x3c) = 10;
    *(int *)(param_2 + 8) = (int)param_2[8] + 1;
  }
  if (((char)param_2[0x3a] == '\0') || (*(int *)((longlong)param_2 + 0x1d4) == 0)) {
    *(undefined1 *)(param_2 + 0x3a) = 1;
    *(int *)((longlong)param_2 + 0x1d4) = *(int *)((longlong)param_2 + 0x1d4) + 1;
  }
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) &&
      (lVar6 = FUN_1400d6ce6(), lVar6 != 0)) &&
     (((char)param_1[9] == '\x01' && (DAT_14c76408c != 0)))) {
    FUN_1411bce2a(lVar6,&local_48,param_2 + 0x3e);
    if (local_48 == (code *)0x0) {
      FUN_1411bce48(lVar6,local_90,param_2 + 0x3e);
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_14010318a(local_48,&local_58,0);
      puVar8 = local_58;
      if (local_50 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_48,L"TextureRenderTarget2D\'%s\'",puVar8);
      FUN_140775538(param_2 + 0x3b,&local_48);
      if (local_48 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((*(int *)((longlong)param_2 + 0x1d4) == 0 | *(byte *)(param_2 + 0x3a)) == 1) {
        *(undefined1 *)(param_2 + 0x3a) = 0;
        *(int *)((longlong)param_2 + 0x1d4) = *(int *)((longlong)param_2 + 0x1d4) + 1;
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd5948) && (FUN_144b3d300(&DAT_14cbd5948), DAT_14cbd5948 == -1)) {
    _DAT_14cbd5920 = 0;
    uRam000000014cbd5928 = 0;
    _DAT_14cbd5930 = 0;
    DAT_14cbd5938 = 0;
    uRam000000014cbd5940 = 0;
    FUN_1446ddda2(&DAT_14cbd5920,"Character",0);
    atexit((_func_5014 *)&LAB_144246e4f);
    _Init_thread_footer(&DAT_14cbd5948);
  }
  FUN_1449027d0(param_1,&local_48);
  plVar4 = plStack_40;
  pcVar3 = local_48;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar4 + 0xc);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  puVar2 = *(undefined8 **)(pcVar3 + 0x40);
  AcquireSRWLockShared((PSRWLOCK)(puVar2 + 5));
  ReleaseSRWLockShared((PSRWLOCK)(puVar2 + 5));
  if ((longlong)*(int *)(puVar2 + 1) != 0) {
    piVar7 = (int *)*puVar2;
    lVar6 = (longlong)*(int *)(puVar2 + 1) * 0xf8;
    do {
      if (*piVar7 == DAT_14cbd5920) {
        if (piVar7 != (int *)0x0) {
          bVar5 = piVar7[10] < *(int *)((longlong)param_2 + 0x44);
          goto LAB_140d8f072;
        }
        break;
      }
      piVar7 = piVar7 + 0x3e;
      lVar6 = lVar6 + -0xf8;
    } while (lVar6 != 0);
  }
  bVar5 = false;
LAB_140d8f072:
  if (*(int *)((longlong)param_2 + 0x404) == 0 || bVar5 != (bool)(char)param_2[0x80]) {
    *(bool *)(param_2 + 0x80) = bVar5;
    *(int *)((longlong)param_2 + 0x404) = *(int *)((longlong)param_2 + 0x404) + 1;
  }
  lVar6 = param_1[4];
  if (lVar6 == 0) {
LAB_140d8f42e:
    local_48 = (code *)0x0;
    plStack_40 = (longlong *)0x0;
    FUN_140bac58e(param_2);
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_48 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1459f2e4c;
      local_b8 = &LAB_148c39de3;
      local_c0 = &LAB_1457a9eb2;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x3de0;
      local_b0 = &local_48;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar6 = *(longlong *)(lVar6 + 0xa08), lVar6 == 0)) goto LAB_140d8f42e;
    if (DAT_14cba8288 == 0) {
      local_48 = FUN_141864c34;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1464cee30;
      local_b8 = &LAB_148bfac22;
      local_c0 = &LAB_140f21842;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x9cd0;
      local_b0 = &local_48;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140d8f42e;
    FUN_140bac450(lVar6,&local_58);
    FUN_1400021e4(&local_58,&local_48);
    pcVar3 = local_48;
    FUN_140bac58e(param_2,&local_48);
    if (pcVar3 != (code *)0x0) {
      FUN_1400020a8(pcVar3);
    }
  }
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_48 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1459f2e4c;
      local_b8 = &LAB_148c39de3;
      local_c0 = &LAB_1457a9eb2;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x3de0;
      local_b0 = &local_48;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_140d8f1a3;
  }
  lVar6 = 0;
LAB_140d8f1a3:
  FUN_140babf00(param_2,lVar6);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d8f56e FUN_140d8f56e body=350 status=ok
// SIG undefined FUN_140d8f56e(void)

void FUN_140d8f56e(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((((*(int *)(param_1 + 8) != 0) && (uVar1 = *(uint *)(param_1 + 4), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 8))) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))))) {
    iVar2 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      lVar8 = 0;
      do {
        plVar6 = (longlong *)(lVar3 + 0x28);
        if (*(longlong *)(lVar3 + 0x40) != 0) {
          plVar6 = (longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x238) + 8);
        }
        plVar7 = *(longlong **)(lVar4 + lVar8);
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar6 + 0x1c0))();
          plVar7 = *(longlong **)(lVar4 + lVar8);
        }
        if (param_2 != '\0') {
          *(byte *)((longlong)plVar7 + 0x8e) = *(byte *)((longlong)plVar7 + 0x8e) | 0x10;
        }
        (**(code **)(*plVar7 + 0xe8))(plVar7);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar8);
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      uVar5 = 0;
      do {
        *(undefined2 *)(param_1 + 0x62 + uVar5 * 2) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x6c));
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      uVar5 = 0;
      do {
        *(undefined2 *)(param_1 + 0x4e + uVar5 * 2) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_143eaed10(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_14656f650(param_1 + 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 140d8f6cc FUN_140d8f6cc body=898 status=ok
// SIG undefined FUN_140d8f6cc(void)

void FUN_140d8f6cc(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar6 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar6, plStack_60 != plVar14)) {
      do {
        local_78 = lVar6;
        lVar6 = *local_90;
        lVar7 = *(longlong *)(lVar6 + 0x10 + (longlong)iVar9 * 0x20);
        if (lVar7 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar7,0);
            lVar7 = *(longlong *)(lVar6 + (longlong)iVar9 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar7 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar7 + 0x48) & 0x6b) == 3)) &&
             (plVar3 = *(longlong **)(lVar7 + 0x30), plVar3 != (longlong *)0x0)) {
            lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
            lVar7 = FUN_140d8fa50();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              (*(code *)*local_98)(local_98[1],plVar3);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar6 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar14 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar9 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar8 != iVar12 || local_88 != local_a0) {
      do {
        local_a4 = iVar12;
        plVar14 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar7 = FUN_140d8fa50();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar12 = (int)plVar1[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar11;
        if (uVar10 == 0) {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar14 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar11 = 0xffffffff;
                goto LAB_140d8f855;
              }
              iVar15 = iVar15 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar4 - lVar6 != lVar7);
            uVar11 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar12;
        }
        else {
LAB_140d8f855:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar8) {
            iVar8 = iVar12;
          }
        }
        iVar12 = local_a4;
      } while (iVar8 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d8fa50 FUN_140d8fa50 body=57 status=ok
// SIG undefined FUN_140d8fa50(void)

void FUN_140d8fa50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92290 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92290 = FUN_140002ddd(FUN_1418b74c8,uVar1,L"GbxUIWidgetDef");
  }
  return;
}



// FUNCTION 140d8fa8a FUN_140d8fa8a body=369 status=ok
// SIG undefined FUN_140d8fa8a(void)

undefined1 *
FUN_140d8fa8a(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1447262c2(param_4);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140d8fae1;
  }
  lVar1 = 0;
LAB_140d8fae1:
  lVar1 = FUN_140d8fbfc(lVar1);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1456bb102(param_2,lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d8fbfc FUN_140d8fbfc body=955 status=ok
// SIG undefined FUN_140d8fbfc(void)

longlong FUN_140d8fbfc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = (code *)&LAB_1463b31ae;
      local_48 = &LAB_1486dca4f;
      local_50 = &LAB_1464f50a6;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(lVar1 + 0x38);
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
        DAT_14cb61cd0 + 0x30)) goto LAB_140d8fc54;
    if (DAT_14caf64b8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      lVar1 = *(longlong *)(param_1 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((iVar2 < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) {
      param_1 = *(longlong *)(param_1 + 0x168);
      if (param_1 != 0) {
        if (DAT_14cb61cd0 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = (code *)&LAB_1463b31ae;
          local_48 = &LAB_1486dca4f;
          local_50 = &LAB_1464f50a6;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30))
        goto LAB_140d8fc54;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    param_1 = FUN_14494e0ba(param_1);
    if (param_1 != 0) {
      if (DAT_14cb61cd0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = (code *)&LAB_1463b31ae;
        local_48 = &LAB_1486dca4f;
        local_50 = &LAB_1464f50a6;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30))
      goto LAB_140d8fc54;
    }
  }
  param_1 = 0;
LAB_140d8fc54:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d8ffca FUN_140d8ffca body=819 status=ok
// SIG undefined FUN_140d8ffca(void)

undefined8 FUN_140d8ffca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      lVar10 = param_3 + lVar12;
      lVar1 = param_2 + lVar12;
      if (param_2 != param_3) {
        FUN_140d90524(lVar1,lVar10);
        FUN_140d90524(param_2 + lVar12 + 0x18,param_3 + lVar12 + 0x18);
        FUN_140d90524(param_2 + lVar12 + 0x30,param_3 + lVar12 + 0x30);
        FUN_140d90838(param_2 + lVar12 + 0x48,param_3 + lVar12 + 0x48);
        FUN_140d90838(param_2 + lVar12 + 0x60,param_3 + lVar12 + 0x60);
        FUN_140d906bc(param_2 + lVar12 + 0x78,param_3 + lVar12 + 0x78);
        FUN_140d906bc(lVar1 + 0x90,lVar10 + 0x90);
      }
      lVar9 = *(longlong *)(param_3 + 0xa8 + lVar12);
      if (DAT_14c950c29 == '\x01') {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + 0xa8 + lVar12);
        }
      }
      *(longlong *)(param_2 + 0xa8 + lVar12) = lVar9;
      if (lVar1 == lVar10) {
        *(undefined4 *)(param_2 + 200 + lVar12) = *(undefined4 *)(param_3 + 200 + lVar12);
        *(undefined8 *)(param_2 + 0xc0 + lVar12) = *(undefined8 *)(param_3 + 0xc0 + lVar12);
      }
      else {
        iVar4 = *(int *)(param_3 + 0xb8 + lVar12);
        uVar5 = *(undefined8 *)(param_3 + 0xb0 + lVar12);
        *(int *)(param_2 + 0xb8 + lVar12) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0xbc + lVar12) == 0) {
          *(undefined4 *)(param_2 + 0xbc + lVar12) = 0;
        }
        else {
          puVar11 = (undefined8 *)(param_2 + lVar12 + 0xb0);
          FUN_1457a6cda(puVar11,iVar4);
          FUN_140d909c4(*puVar11,uVar5,iVar4);
        }
        *(undefined4 *)(param_2 + 200 + lVar12) = *(undefined4 *)(param_3 + 200 + lVar12);
        *(undefined8 *)(param_2 + 0xc0 + lVar12) = *(undefined8 *)(param_3 + 0xc0 + lVar12);
        iVar4 = *(int *)(param_3 + 0xd8 + lVar12);
        _Src = *(void **)(param_3 + 0xd0 + lVar12);
        *(int *)(param_2 + 0xd8 + lVar12) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0xdc + lVar12) == 0) {
          *(undefined4 *)(param_2 + 0xdc + lVar12) = 0;
        }
        else {
          puVar11 = (undefined8 *)(param_2 + lVar12 + 0xd0);
          FUN_1486e3748(puVar11,iVar4);
          if (iVar4 != 0) {
            memcpy((void *)*puVar11,_Src,(longlong)iVar4 << 3);
          }
        }
        FUN_140d9035b(*(undefined8 *)(param_2 + 0xe0 + lVar12),
                      *(undefined4 *)(param_2 + 0xe8 + lVar12));
        iVar4 = *(int *)(param_3 + 0xe8 + lVar12);
        uVar5 = *(undefined8 *)(param_3 + 0xe0 + lVar12);
        *(int *)(param_2 + 0xe8 + lVar12) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0xec + lVar12) == 0) {
          *(undefined4 *)(param_2 + 0xec + lVar12) = 0;
        }
        else {
          puVar11 = (undefined8 *)(param_2 + lVar12 + 0xe0);
          FUN_1457a6c04(puVar11,iVar4);
          FUN_1457a6b1b(*puVar11,uVar5,iVar4);
        }
        FUN_140d903a8(lVar1 + 0xf0,lVar10 + 0xf0);
      }
      FUN_140d902fe(lVar1 + 0x108,lVar10 + 0x108);
      FUN_14054c6c4(lVar1 + 0x118,lVar10 + 0x118);
      puVar2 = (undefined4 *)(param_3 + 0x128 + lVar12);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x128 + lVar12);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      lVar10 = *(longlong *)(param_3 + 0x138 + lVar12);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0x138 + lVar12);
        }
      }
      *(longlong *)(param_2 + 0x138 + lVar12) = lVar10;
      lVar12 = lVar12 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140d902fe FUN_140d902fe body=93 status=ok
// SIG undefined FUN_140d902fe(void)

undefined8 * FUN_140d902fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a40516(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457a6c66(param_1,iVar1);
      FUN_1457a6b48(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9035b FUN_140d9035b body=77 status=ok
// SIG undefined FUN_140d9035b(void)

void FUN_140d9035b(longlong param_1,int param_2)

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



// FUNCTION 140d903a8 FUN_140d903a8 body=378 status=ok
// SIG undefined FUN_140d903a8(void)

/* WARNING: Removing unreachable block (ram,0x000140d90485) */

void FUN_140d903a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d90524 FUN_140d90524 body=406 status=ok
// SIG undefined FUN_140d90524(void)

/* WARNING: Removing unreachable block (ram,0x000140d906b4) */

void FUN_140d90524(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d906bc FUN_140d906bc body=378 status=ok
// SIG undefined FUN_140d906bc(void)

/* WARNING: Removing unreachable block (ram,0x000140d90799) */

void FUN_140d906bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d90838 FUN_140d90838 body=395 status=ok
// SIG undefined FUN_140d90838(void)

void FUN_140d90838(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d909c4 FUN_140d909c4 body=80 status=ok
// SIG undefined FUN_140d909c4(void)

void FUN_140d909c4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140d90a14 FUN_140d90a14 body=81 status=ok
// SIG undefined FUN_140d90a14(void)

bool FUN_140d90a14(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar3 != iVar1) {
    FUN_1406753a0(param_1,0,iVar1);
  }
  return iVar2 != iVar1;
}



// FUNCTION 140d90abc FUN_140d90abc body=138 status=ok
// SIG undefined FUN_140d90abc(void)

void FUN_140d90abc(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_140d90b46();
  uVar3 = FUN_140296320(param_1);
  if (0 < param_2) {
    param_2 = param_2 + 1;
    puVar1 = (undefined8 *)(param_1 + 0xa0);
    do {
      uVar2 = *(uint *)(param_1 + 0xa8);
      if (*(int *)(param_1 + 0x6c) <= (int)uVar2) {
        return;
      }
      *(uint *)(param_1 + 0xa8) = uVar2 + 1;
      if (*(uint *)(param_1 + 0xac) < uVar2 + 1) {
        FUN_14475e4ac(puVar1,(ulonglong)uVar2);
      }
      memmove((void *)((longlong)*puVar1 + 4),(void *)*puVar1,(ulonglong)uVar2 << 2);
      *(undefined4 *)*puVar1 = uVar3;
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  return;
}



// FUNCTION 140d90b46 FUN_140d90b46 body=152 status=ok
// SIG undefined FUN_140d90b46(void)

void FUN_140d90b46(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x50) + 0xc1) == '\x01') &&
     (iVar3 = (param_2 + *(int *)(param_1 + 0xa8)) - *(int *)(param_1 + 0x6c), 0 < iVar3)) {
    do {
      iVar2 = *(int *)(param_1 + 0xa8);
      if (iVar2 == 0) {
        return;
      }
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x50) + 0xc0);
      if (cVar1 == '\x01') {
        if (iVar2 + -1 == 0) {
          iVar2 = 0;
        }
        else {
          memmove(*(void **)(param_1 + 0xa0),(void *)((longlong)*(void **)(param_1 + 0xa0) + 4),
                  (longlong)(iVar2 + -1) << 2);
          iVar2 = *(int *)(param_1 + 0xa8) + -1;
        }
        *(int *)(param_1 + 0xa8) = iVar2;
        FUN_1401fef06(param_1 + 0xa0);
      }
      else if (cVar1 == '\0') {
        *(int *)(param_1 + 0xa8) = iVar2 + -1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 140d90bde FUN_140d90bde body=84 status=ok
// SIG undefined FUN_140d90bde(void)

void FUN_140d90bde(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_140d90c34(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d90c34 FUN_140d90c34 body=564 status=ok
// SIG undefined FUN_140d90c34(void)

void FUN_140d90c34(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *param_1;
  uVar2 = *param_2;
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140d90c7f:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140d90c7f;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if ((char)param_2[5] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[4];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140d90d15:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140d90d15;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x11] != '\x01') {
    return;
  }
  lVar4 = *param_1;
  uVar2 = param_2[0x10];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_140d90de3;
  if (iVar3 == 0) {
LAB_140d90da4:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140d90da4;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_140d90de3:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140d90e68 FUN_140d90e68 body=80 status=ok
// SIG undefined FUN_140d90e68(void)

void FUN_140d90e68(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    uVar2 = FUN_14078ee06();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d90ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x28))
                (plVar3,-(uint)(*(char *)(param_1 + 100) == '\0'),*(code **)(*plVar3 + 0x28));
      return;
    }
  }
  return;
}



// FUNCTION 140d90eb8 FUN_140d90eb8 body=1204 status=ok
// SIG undefined FUN_140d90eb8(void)

void FUN_140d90eb8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_140d9144c();
    FUN_140d914a6(*(undefined8 *)(param_1 + 0x150));
    local_38 = (code *)0x0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x138);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130);
    local_30 = iVar1;
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      FUN_140f6c432(&local_38,iVar1);
      FUN_140f6c2cd(local_38,uVar4,iVar1);
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x148);
      if ((-1 < (longlong)iVar1) && (iVar1 < local_30)) {
        cVar3 = FUN_1403ae288(local_38 + (longlong)iVar1 * 0x58 + 0x10);
        if (cVar3 != '\0') {
          lVar5 = FUN_14008e0ae(local_38 +
                                (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x148) * 0x58 +
                                0x10);
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            FUN_14480f766(lVar5 + 0x2b8);
          }
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
      }
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x144);
      if ((-1 < (longlong)iVar1) && (iVar1 < local_30)) {
        cVar3 = FUN_1403ae288(local_38 + (longlong)iVar1 * 0x58 + 0x10);
        if (cVar3 != '\0') {
          lVar5 = FUN_14008e0ae(local_38 +
                                (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x144) * 0x58 +
                                0x10);
          if (*(longlong *)(param_1 + 0xd8) != 0) {
            FUN_14480f766(lVar5 + 0x228);
          }
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
    }
    FUN_1408bd9b6(local_38,local_30);
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140d9136e(param_1 + 0x28);
  FUN_140d9136e(param_1 + 0x60);
  FUN_140d9136e(param_1 + 0x98);
  lVar5 = *(longlong *)(param_1 + -0x10);
  if (lVar5 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      uVar4 = (**(code **)(*(longlong *)(lVar5 + 0x3a20) + 0x10))(lVar5 + 0x3a20);
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        FUN_14480f766(uVar4);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        FUN_14480f766(lVar5 + 0x4878);
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
      if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_14480f766(lVar5 + 0x4890);
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      if (*(longlong *)(param_1 + 0x128) != 0) {
        FUN_14480f766(lVar5 + 0x48a8);
      }
      *(undefined8 *)(param_1 + 0x128) = 0;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        FUN_14480f766(lVar5 + 0x48c0);
      }
      *(undefined8 *)(param_1 + 0x130) = 0;
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_14480f766(lVar5 + 0x7790);
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_14480f766(lVar5 + 0x77a8);
      }
      *(undefined8 *)(param_1 + 0x100) = 0;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_14480f766(lVar5 + 0x48d8);
      }
      *(undefined8 *)(param_1 + 0x138) = 0;
      lVar2 = *(longlong *)(lVar5 + 0x3c0);
      if (lVar2 != 0) {
        lVar6 = FUN_144a5dd5e();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            FUN_14480f766(lVar2 + 10000);
          }
          *(undefined8 *)(param_1 + 0xe0) = 0;
        }
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        FUN_14480f766(lVar5 + 0x4978);
      }
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9136e FUN_140d9136e body=221 status=ok
// SIG undefined FUN_140d9136e(void)

void FUN_140d9136e(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 2);
  if ((((plVar3 != (longlong *)0x0) && (param_1[1] != 0)) && (uVar1 = *param_1, -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(uint *)(lVar4 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar3 = plVar3 + 0xd9;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
      }
      cVar2 = FUN_14486eb0e(plVar3,param_1);
      if (cVar2 != '\0') {
        if (*(longlong *)(param_1 + 8) != 0) {
          lVar4 = FUN_14008e0ae(param_1);
          if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14480f766(lVar4 + 0x150);
          }
        }
        if (*(longlong *)(param_1 + 10) != 0) {
          lVar4 = FUN_14008e0ae(param_1);
          if (*(longlong *)(param_1 + 10) != 0) {
            FUN_14480f766(lVar4 + 0x138);
          }
        }
      }
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 140d9144c FUN_140d9144c body=90 status=ok
// SIG undefined FUN_140d9144c(void)

void FUN_140d9144c(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x128)) {
    iVar1 = *(int *)(param_1 + 300);
    FUN_140bf96d8(*(undefined8 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x128) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 300) != 0)) {
      FUN_148e671ea(param_1 + 0x120,0);
      return;
    }
  }
  return;
}



// FUNCTION 140d914a6 FUN_140d914a6 body=594 status=ok
// SIG undefined FUN_140d914a6(void)

void FUN_140d914a6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb56270);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          FUN_140d9179c(lVar3,param_1 + 0x150);
          FUN_140d916fa(lVar3,param_1 + 0x158);
          if (*(longlong *)(param_1 + 0x160) != 0) {
            FUN_14480f766(lVar3 + 0x18);
          }
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x138) * 0x58;
    lVar3 = *(longlong *)(param_1 + 0x130) + 0x10;
    do {
      FUN_140d9136e(lVar3);
      lVar3 = lVar3 + 0x58;
      lVar4 = lVar4 + -0x58;
    } while (lVar4 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d916fa FUN_140d916fa body=162 status=ok
// SIG undefined FUN_140d916fa(void)

void FUN_140d916fa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 == 0) || ((longlong)*(int *)(param_1 + 0xe8) == 0)) {
    return;
  }
  lVar1 = 0;
  while ((*(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar1) == 0 ||
         (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar1) == 0))) {
    lVar1 = lVar1 + 0x10;
    if ((longlong)*(int *)(param_1 + 0xe8) * 0x10 == lVar1) {
      return;
    }
  }
  FUN_14480f766(param_1 + 0xe0);
  *param_2 = 0;
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar1) != 0)) {
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 0x10 != lVar1);
  }
  FUN_140d919e2(param_1);
  return;
}



// FUNCTION 140d9179c FUN_140d9179c body=160 status=ok
// SIG undefined FUN_140d9179c(void)

void FUN_140d9179c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 == 0) || ((longlong)*(int *)(param_1 + 0xd0) == 0)) {
    return;
  }
  lVar1 = 0;
  while ((*(int *)(*(longlong *)(param_1 + 200) + 8 + lVar1) == 0 ||
         (*(longlong *)(*(longlong *)(param_1 + 200) + lVar1) == 0))) {
    lVar1 = lVar1 + 0x10;
    if ((longlong)*(int *)(param_1 + 0xd0) * 0x10 == lVar1) {
      return;
    }
  }
  FUN_14480f766(param_1 + 200);
  *param_2 = 0;
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 200) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 200) + lVar1) != 0)) {
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xd0) * 0x10 != lVar1);
  }
  FUN_140d9183c(param_1);
  return;
}



// FUNCTION 140d9183c FUN_140d9183c body=421 status=ok
// SIG undefined FUN_140d9183c(void)

void FUN_140d9183c(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar1 = param_1 + 0x68;
  uVar4 = *(uint *)(param_1 + 0x40);
  if ((int)*(uint *)(param_1 + 0x90) < (int)*(uint *)(param_1 + 0x40)) {
    uVar4 = *(uint *)(param_1 + 0x90);
  }
  if (0 < (int)uVar4) {
    lVar11 = 0x50;
    uVar10 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x38);
      if (*(char *)(lVar9 + -0x50 + lVar11) == '\0') {
        iVar5 = *(int *)(lVar9 + lVar11);
        if (iVar5 == 0) {
          FUN_1402a453c((int *)(lVar9 + lVar11));
          iVar5 = *(int *)(lVar9 + lVar11);
        }
        lVar9 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar9 = lVar1;
        }
        if (*(longlong *)(lVar9 + uVar10 * 8) != 0) {
          lVar9 = DAT_14c9a3d60 + (longlong)iVar5 * 0x88 + -0x18;
LAB_140d91937:
          FUN_14480f766(lVar9);
        }
      }
      else {
        plVar6 = *(longlong **)(lVar9 + -0x18 + lVar11);
        if ((plVar6 != (longlong *)0x0) && (iVar5 = *(int *)(lVar9 + -0x1c + lVar11), iVar5 != 0)) {
          puVar8 = (uint *)(lVar9 + lVar11 + -0x20);
          uVar2 = *puVar8;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == iVar5)) &&
               ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
              if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
                plVar6 = plVar6 + 0xd9;
              }
              else {
                plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
              }
              cVar3 = FUN_14486eb0e(plVar6,puVar8);
              if (cVar3 != '\0') {
                lVar9 = FUN_14008e0ae(puVar8);
                lVar7 = *(longlong *)(param_1 + 0x88);
                if (*(longlong *)(param_1 + 0x88) == 0) {
                  lVar7 = lVar1;
                }
                if (*(longlong *)(lVar7 + uVar10 * 8) != 0) {
                  lVar9 = lVar9 + 0x150;
                  goto LAB_140d91937;
                }
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x88;
    } while (uVar4 != uVar10);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (-1 < *(int *)(param_1 + 0x94)) {
    return;
  }
  FUN_148823e16(lVar1,0);
  return;
}



// FUNCTION 140d919e2 FUN_140d919e2 body=424 status=ok
// SIG undefined FUN_140d919e2(void)

void FUN_140d919e2(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar1 = param_1 + 0x98;
  uVar4 = *(uint *)(param_1 + 0x40);
  if ((int)*(uint *)(param_1 + 0xc0) < (int)*(uint *)(param_1 + 0x40)) {
    uVar4 = *(uint *)(param_1 + 0xc0);
  }
  if (0 < (int)uVar4) {
    lVar11 = 0x70;
    uVar10 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x38);
      if (*(char *)(lVar9 + -0x70 + lVar11) == '\0') {
        iVar5 = *(int *)(lVar9 + lVar11);
        if (iVar5 == 0) {
          FUN_1402a453c((int *)(lVar9 + lVar11));
          iVar5 = *(int *)(lVar9 + lVar11);
        }
        lVar9 = *(longlong *)(param_1 + 0xb8);
        if (*(longlong *)(param_1 + 0xb8) == 0) {
          lVar9 = lVar1;
        }
        if (*(longlong *)(lVar9 + uVar10 * 8) != 0) {
          lVar9 = DAT_14c9a3d60 + (longlong)iVar5 * 0x88 + -0x18;
LAB_140d91ae0:
          FUN_14480f766(lVar9);
        }
      }
      else {
        plVar6 = *(longlong **)(lVar9 + -0x38 + lVar11);
        if ((plVar6 != (longlong *)0x0) && (iVar5 = *(int *)(lVar9 + -0x3c + lVar11), iVar5 != 0)) {
          puVar8 = (uint *)(lVar9 + lVar11 + -0x40);
          uVar2 = *puVar8;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == iVar5)) &&
               ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
              if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
                plVar6 = plVar6 + 0xd9;
              }
              else {
                plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
              }
              cVar3 = FUN_14486eb0e(plVar6,puVar8);
              if (cVar3 != '\0') {
                lVar9 = FUN_14008e0ae(puVar8);
                lVar7 = *(longlong *)(param_1 + 0xb8);
                if (*(longlong *)(param_1 + 0xb8) == 0) {
                  lVar7 = lVar1;
                }
                if (*(longlong *)(lVar7 + uVar10 * 8) != 0) {
                  lVar9 = lVar9 + 0x138;
                  goto LAB_140d91ae0;
                }
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x88;
    } while (uVar4 != uVar10);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (-1 < *(int *)(param_1 + 0xc4)) {
    return;
  }
  FUN_148823e16(lVar1,0);
  return;
}



// FUNCTION 140d91b8a FUN_140d91b8a body=3518 status=ok
// SIG undefined FUN_140d91b8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d91b8a(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_388 [32];
  uint local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined2 *local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  code **local_330;
  undefined1 *local_328;
  code *local_320;
  double local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  float local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  code *local_168;
  longlong *local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((((*(longlong *)(param_1 + 8) == 0) || ((*(byte *)(param_1 + 0x48) & 1) != 0)) ||
      (*(longlong *)(param_1 + 0x30) == 0)) || (cVar7 = FUN_140d9294a(param_1), cVar7 == '\0'))
  goto LAB_140d925c4;
  local_2c4 = 3.4028235e+38;
  lVar13 = *(longlong *)(param_1 + 8);
  if (lVar13 == 0) {
LAB_140d928b6:
    bVar4 = false;
    lVar15 = 0;
  }
  else {
    if (DAT_14cb5b388 == 0) {
      local_330 = &local_168;
      local_168 = FUN_141864c34;
      local_320 = FUN_14081d0ea;
      local_328 = &LAB_146431698;
      local_338 = &LAB_1486775cb;
      local_340 = &LAB_1464cee35;
      local_348 = &DAT_149e063b2;
      local_350 = 0;
      local_358 = 0x10000005;
      local_360 = CONCAT44(local_360._4_4_,0x10);
      local_368 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      lVar13 = *(longlong *)(param_1 + 8);
      if (lVar13 == 0) goto LAB_140d928b6;
    }
    lVar15 = 0;
    bVar4 = false;
    if ((DAT_14cb5b388 != 0) && (lVar3 = *(longlong *)(lVar13 + 0x10), lVar3 != 0)) {
      if ((*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
          != DAT_14cb5b388 + 0x30)) goto LAB_140d928b6;
      lVar15 = *(longlong *)(lVar13 + 0x11e8);
      bVar4 = true;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    cVar7 = FUN_140d933e6(param_1,&local_288,&local_2c4,&local_2c0);
    fVar5 = local_2c4;
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x30) + 0x154);
    if ((bVar4 && lVar15 != 0) && (local_2c4 < fVar2)) {
      plVar10 = *(longlong **)(param_1 + 8);
      if (plVar10 != (longlong *)0x0) {
        uVar9 = FUN_1407ca880();
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar9);
        if (plVar10 != (longlong *)0x0) {
          uVar9 = FUN_1407ca880();
          plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
          if (plVar10 != plVar11) {
            if (plVar11 == (longlong *)0x0) goto LAB_140d92648;
            uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11);
            uVar12 = FUN_140d92b04();
            FUN_140d92a98(uVar9,&local_168,uVar12);
            bVar8 = 1;
            if (local_168 != (code *)0x0) {
              bVar8 = FUN_1489a6fa6(*(undefined8 *)(param_1 + 8),local_168[0x40]);
              bVar8 = bVar8 ^ 1;
            }
            plVar10 = local_160;
            if (local_160 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_160 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*local_160)(local_160);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            if (bVar8 == 0) goto LAB_140d92651;
          }
        }
      }
      goto LAB_140d91d9f;
    }
LAB_140d92648:
    if (fVar5 < fVar2) goto LAB_140d91d9f;
LAB_140d92651:
    if (*(longlong *)(param_1 + 0x50) == 0) {
      FUN_1457a6d8e(param_1);
    }
    uVar14 = 0;
  }
  else {
    local_278 = *(undefined8 *)(param_2 + 8);
    local_288 = *(undefined8 *)(param_2 + 4);
    uStack_280 = *(undefined8 *)(param_2 + 6);
    local_2a8 = *(double *)(param_2 + 4);
    uStack_2a0 = *(double *)(param_2 + 6);
    local_298 = *(double *)(param_2 + 8);
    local_2b0 = -*(double *)(param_2 + 0x1a);
    local_2c0 = -*(double *)(param_2 + 0x16);
    uStack_2b8 = -*(double *)(param_2 + 0x18);
    local_2c4 = 0.0;
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 0xd0) == '\x01') {
      local_2d8 = *(undefined8 *)(param_2 + 8);
      local_2e8 = param_2[4];
      uStack_2e4 = param_2[5];
      uStack_2e0 = param_2[6];
      uStack_2dc = param_2[7];
      FUN_140d930fe(param_1,&local_2e8,&local_2a8,&local_2c4);
    }
    cVar7 = '\0';
LAB_140d91d9f:
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      FUN_14480f766(*(longlong *)(param_1 + 0x10) + 0x11b8);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (lVar15 != 0) {
      *(undefined8 *)(lVar15 + 0x128) = 0;
      *(undefined8 *)(lVar15 + 0x130) = 0;
      *(undefined8 *)(lVar15 + 0x138) = 0;
    }
    lVar13 = *(longlong *)(param_1 + 0x30);
    if ((*(byte *)(lVar13 + 0x158) & 2) != 0) {
      if (param_2 == (undefined4 *)0x0) {
        if (cVar7 != '\0') {
          local_2f8 = local_278;
          local_308 = (undefined4)local_288;
          uStack_304 = local_288._4_4_;
          uStack_300 = (undefined4)uStack_280;
          uStack_2fc = uStack_280._4_4_;
          cVar7 = FUN_140d930fe(param_1,&local_308,&local_2a8,&local_2c4);
          lVar13 = *(longlong *)(param_1 + 0x30);
          if (cVar7 != '\0') goto LAB_140d91e32;
        }
      }
      else {
LAB_140d91e32:
        if (local_2c4 <= *(float *)(lVar13 + 0x154)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cbd3698) && (FUN_144b3d300(&DAT_14cbd3698), DAT_14cbd3698 == -1)) {
            _DAT_14cbd3690 = 0;
            _Init_thread_footer(&DAT_14cbd3698);
          }
          if ((*(longlong *)(param_1 + 0x30) != 0) &&
             (cVar7 = FUN_140d9294a(param_1), cVar7 != '\0')) {
            local_178 = DAT_14c8464f0;
            local_188 = (undefined4)DAT_14c8464e0;
            uStack_184 = DAT_14c8464e0._4_4_;
            uStack_180 = (undefined4)DAT_14c8464e8;
            uStack_17c = DAT_14c8464e8._4_4_;
            local_198 = DAT_14c8464f0;
            local_1a8 = (undefined4)DAT_14c8464e0;
            uStack_1a4 = DAT_14c8464e0._4_4_;
            uStack_1a0 = (undefined4)DAT_14c8464e8;
            uStack_19c = DAT_14c8464e8._4_4_;
            if (*(longlong *)(param_1 + 0x68) != 0) {
              local_1b8 = local_298;
              local_1c8 = (undefined4)local_2a8;
              uStack_1c4 = local_2a8._4_4_;
              uStack_1c0 = (undefined4)uStack_2a0;
              uStack_1bc = uStack_2a0._4_4_;
              FUN_1404e0f62(*(longlong *)(param_1 + 0x68),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xb0));
              local_1d8 = local_2b0;
              local_1e8 = (undefined4)local_2c0;
              uStack_1e4 = local_2c0._4_4_;
              uStack_1e0 = (undefined4)uStack_2b8;
              uStack_1dc = uStack_2b8._4_4_;
              FUN_1404e0f62(*(undefined8 *)(param_1 + 0x68),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xb8));
              (**(code **)(**(longlong **)(param_1 + 0x68) + 0x9f8))
                        (*(longlong **)(param_1 + 0x68),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xc0),1);
              (**(code **)(**(longlong **)(param_1 + 0x68) + 0x9f8))
                        (*(longlong **)(param_1 + 0x68),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x98),0);
              plVar10 = *(longlong **)(param_1 + 8);
              if (plVar10 != (longlong *)0x0) {
                local_368 = local_368 & 0xffffff00;
                param_2 = &local_188;
                (**(code **)(*plVar10 + 800))(plVar10,1,param_2,&local_1a8);
                local_1f8 = local_178;
                local_208 = local_188;
                uStack_204 = uStack_184;
                uStack_200 = uStack_180;
                uStack_1fc = uStack_17c;
                FUN_1404e0f62(*(undefined8 *)(param_1 + 0x68),
                              *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x80));
                local_218 = local_198;
                local_228 = local_1a8;
                uStack_224 = uStack_1a4;
                uStack_220 = uStack_1a0;
                uStack_21c = uStack_19c;
                FUN_1404e0f62(*(undefined8 *)(param_1 + 0x68),
                              *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x88));
              }
            }
            if ((((DAT_14cbd3694 == 0) || ((int)DAT_14cbd3690 < 0)) ||
                (DAT_14c9647dc <= (int)DAT_14cbd3690)) ||
               (((plVar10 = (longlong *)
                            ((ulonglong)((DAT_14cbd3690 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cbd3690 >> 0x10) * 8)),
                 plVar10 == (longlong *)0x0 || ((int)plVar10[2] != DAT_14cbd3694)) ||
                (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))))) {
              uVar9 = FUN_1406d0862();
              local_350 = 0;
              local_360 = 0;
              local_358 = CONCAT31(local_358._1_3_,1);
              local_368 = 0;
              param_2 = (undefined4 *)FUN_1412ecd05(uVar9,0,L"/Engine/BasicShapes/Cone.Cone",0);
              if (param_2 == (undefined4 *)0x0) {
LAB_140d92942:
                param_2 = (undefined4 *)0x0;
              }
              else {
                lVar13 = FUN_1406d0862();
                if ((*(int *)(*(longlong *)(param_2 + 4) + 0x38) < *(int *)(lVar13 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 4) + 0x30) +
                     (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) goto LAB_140d92942;
              }
              FUN_14485c47a(&DAT_14cbd3690,param_2);
              if (DAT_14cbd3694 != 0) {
                goto LAB_140d9205c;
              }
            }
            else {
LAB_140d9205c:
              if ((((-1 < (int)DAT_14cbd3690) && ((int)DAT_14cbd3690 < DAT_14c9647dc)) &&
                  (plVar10 = (longlong *)
                             ((ulonglong)((DAT_14cbd3690 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cbd3690 >> 0x10) * 8)),
                  plVar10 != (longlong *)0x0)) &&
                 (((((int)plVar10[2] == DAT_14cbd3694 &&
                    ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
                   ((*plVar10 != 0 &&
                    ((*(longlong *)(param_1 + 200) == 0 && (*(longlong *)(param_1 + 8) != 0)))))) &&
                  (lVar13 = FUN_1447210f0(), lVar13 != 0)))) {
                lVar13 = FUN_140995b6b(*(undefined8 *)(param_1 + 8));
                if ((lVar13 == 0) || (DAT_14c950c29 == '\0')) {
                  *(longlong *)(param_1 + 200) = lVar13;
                  if (lVar13 == 0) goto LAB_140d9223f;
                }
                else {
                  FUN_1456cec3c(lVar13);
                  *(longlong *)(param_1 + 200) = lVar13;
                }
                param_2 = (undefined4 *)0x0;
                FUN_14045627c(lVar13,0,1);
                FUN_1457a6d3c(*(undefined8 *)(param_1 + 200),1);
                if (DAT_14cbd3694 != 0) {
                  param_2 = (undefined4 *)0x0;
                  if ((-1 < (int)DAT_14cbd3690) && ((int)DAT_14cbd3690 < DAT_14c9647dc)) {
                    plVar10 = (longlong *)
                              ((ulonglong)((DAT_14cbd3690 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cbd3690 >> 0x10) * 8))
                    ;
                    if ((plVar10 == (longlong *)0x0) ||
                       (((int)plVar10[2] != DAT_14cbd3694 ||
                        ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) {
                      param_2 = (undefined4 *)0x0;
                    }
                    else {
                      param_2 = (undefined4 *)*plVar10;
                    }
                  }
                }
                (**(code **)(**(longlong **)(param_1 + 200) + 0xa78))
                          (*(longlong **)(param_1 + 200),param_2);
                (**(code **)(**(longlong **)(param_1 + 200) + 0x730))
                          (*(longlong **)(param_1 + 200),2);
                (**(code **)(**(longlong **)(param_1 + 200) + 0x940))
                          (*(longlong **)(param_1 + 200),1);
                uVar16 = local_1a8;
                uVar17 = uStack_1a4;
                if ((double)CONCAT44(uStack_1a4,local_1a8) <=
                    (double)CONCAT44(uStack_19c,uStack_1a0)) {
                  uVar16 = uStack_1a0;
                  uVar17 = uStack_19c;
                }
                if ((double)CONCAT44(uVar17,uVar16) <= local_198) {
                  uVar16 = SUB84(local_198,0);
                  uVar17 = (undefined4)((ulonglong)local_198 >> 0x20);
                }
                *(float *)(param_1 + 0xbc) = (float)(double)CONCAT44(uVar17,uVar16);
                local_230 = (double)(float)(double)CONCAT44(uVar17,uVar16) * 0.005;
                local_240 = local_230;
                if (2.0 <= local_230) {
                  local_240 = 2.0;
                }
                if (local_240 <= 1.25) {
                  local_240 = 1.25;
                }
                local_230 = local_230 + local_230;
                if (2.0 <= local_230) {
                  local_230 = 2.0;
                }
                if (local_230 <= 0.25) {
                  local_230 = 0.25;
                }
                local_238 = local_240;
                FUN_141226a1c(*(undefined8 *)(param_1 + 200));
                FUN_140b506a4(*(undefined8 *)(param_1 + 200));
              }
            }
LAB_140d9223f:
            plVar10 = *(longlong **)(param_1 + 200);
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x940))(plVar10,1);
              plVar10 = *(longlong **)(param_1 + 200);
              if ((*(byte *)((longlong)plVar10 + 0x2d3) & 8) == 0) {
                *(byte *)((longlong)plVar10 + 0x2d3) = *(byte *)((longlong)plVar10 + 0x2d3) | 8;
                (**(code **)(*plVar10 + 0x958))();
                plVar10 = *(longlong **)(param_1 + 200);
              }
              dVar21 = local_2b0 * local_2b0 + local_2c0 * local_2c0 + uStack_2b8 * uStack_2b8;
              if ((dVar21 != 1.0) ||
                 (dVar18 = uStack_2b8, dVar19 = local_2b0, dVar22 = local_2c0, NAN(dVar21))) {
                if (dVar21 < 9.99999993922529e-09) {
                  dVar22 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  dVar18 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  dVar19 = DAT_14c8464f0;
                }
                else {
                  dVar22 = 1.0 / SQRT(dVar21);
                  dVar19 = local_2b0 * dVar22;
                  dVar18 = uStack_2b8 * dVar22;
                  dVar22 = local_2c0 * dVar22;
                }
              }
              local_248 = dVar19 * (double)plVar10[0x52] * 100.0 * 0.5 + local_298;
              local_250 = dVar18 * (double)plVar10[0x51] * 100.0 * 0.5 + uStack_2a0;
              local_258 = dVar22 * (double)plVar10[0x50] * 100.0 * 0.5 + local_2a8;
              local_368 = local_368 & 0xffffff00;
              FUN_140d93b16(SUB84(local_258,0),&local_258,0,0);
              param_2 = *(undefined4 **)(param_1 + 200);
              FUN_140d92ea8(&local_168,&local_2c0);
              pcVar6 = local_168;
              local_310 = local_120;
              dVar21 = 0.0;
              if (((((double)local_160 != 0.0) || (NAN((double)local_160))) ||
                  ((double)local_168 != 0.0)) || (NAN((double)local_168))) {
                dVar21 = atan2((double)local_160,(double)local_168);
                dVar21 = dVar21 * 57.29577951308232;
              }
              dVar22 = SQRT((double)local_160 * (double)local_160 + (double)pcVar6 * (double)pcVar6)
              ;
              local_270 = 0.0;
              if (((local_158 != 0.0) || (NAN(local_158))) || ((dVar22 != 0.0 || (NAN(dVar22))))) {
                local_270 = atan2(local_158,dVar22);
                local_270 = local_270 * 57.29577951308232;
              }
              dVar19 = local_270 * 0.01745329238474369;
              local_268 = dVar21;
              dVar22 = sin(dVar19);
              dVar18 = sin(dVar21 * 0.01745329238474369);
              dVar19 = cos(dVar19);
              dVar21 = cos(dVar21 * 0.01745329238474369);
              local_260 = 0.0;
              dVar20 = dVar22 * 0.0 * dVar21 - dVar18;
              dVar21 = dVar22 * 0.0 * dVar18 + dVar21;
              dVar22 = local_138 * dVar19 * -0.0 + local_148 * dVar20 + local_140 * dVar21;
              dVar21 = local_118 * dVar19 * -0.0 + local_128 * dVar20 + local_310 * dVar21;
              if (((dVar21 != 0.0) || (NAN(dVar21))) || ((dVar22 != 0.0 || (NAN(dVar22))))) {
                local_260 = atan2(dVar21,dVar22);
                local_260 = local_260 * 57.29577951308232;
              }
              local_368 = local_368 & 0xffffff00;
              FUN_14020f670(param_2,&local_270,0,0);
            }
            *(double *)(param_1 + 0x98) = local_298;
            *(double *)(param_1 + 0x88) = local_2a8;
            *(double *)(param_1 + 0x90) = uStack_2a0;
            *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_2c0;
            *(undefined4 *)(param_1 + 0xa4) = local_2c0._4_4_;
            *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_2b8;
            *(undefined4 *)(param_1 + 0xac) = uStack_2b8._4_4_;
            *(double *)(param_1 + 0xb0) = local_2b0;
            *(undefined1 *)(param_1 + 0xb8) = 1;
          }
          lVar13 = *(longlong *)(param_1 + 0x30);
        }
      }
    }
    uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if ((*(byte *)(lVar13 + 0x34) & 1) != 0) {
      FUN_148e02922(param_1);
    }
  }
  FUN_140d92bea(param_1,uVar14 & 0xffffffff);
LAB_140d925c4:
  if ((local_e0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d9294a FUN_140d9294a body=104 status=ok
// SIG undefined FUN_140d9294a(void)

ulonglong FUN_140d9294a(longlong param_1)

{
  byte bVar1;
  longlong *in_RAX;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 8);
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar1 = 1;
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140d929b2();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    in_RAX = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140d929b2();
      in_RAX = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != in_RAX) && (in_RAX != (longlong *)0x0)) {
        bVar1 = (**(code **)(*in_RAX + 0x48))();
        in_RAX = (longlong *)(ulonglong)(bVar1 ^ 1);
        bVar1 = 0;
        uVar4 = 0;
      }
    }
  }
  return CONCAT71(uVar4,bVar1 | (byte)in_RAX) & 0xffffff01;
}



// FUNCTION 140d929b2 FUN_140d929b2 body=228 status=ok
// SIG undefined FUN_140d929b2(void)

longlong FUN_140d929b2(void)

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
  if (DAT_14cbaa8f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c14a1f;
    local_40 = FUN_1465d91da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"FreezeableInterface",&DAT_14cbaa8f0,&DAT_148c14a1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa8f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d92a98 FUN_140d92a98 body=108 status=ok
// SIG undefined FUN_140d92a98(void)

void FUN_140d92a98(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x10);
        if ((*(int *)(param_3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
            param_3 + 0x30)) {
          if (plVar3 != (longlong *)0x0) {
            *param_2 = lVar1;
            lVar4 = plVar3[1];
            param_2[1] = lVar4;
            if (lVar4 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140d92b04 FUN_140d92b04 body=228 status=ok
// SIG undefined FUN_140d92b04(void)

longlong FUN_140d92b04(void)

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
  if (DAT_14cb68410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458993e0;
    local_38 = &LAB_148744979;
    local_40 = &LAB_14651b084;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x4d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_Leap",&DAT_14cb68410,&DAT_148744978);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d92bea FUN_140d92bea body=514 status=ok
// SIG undefined FUN_140d92bea(void)

void FUN_140d92bea(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  undefined1 local_4c;
  undefined1 local_47;
  undefined1 local_45;
  undefined1 local_43;
  undefined1 local_41;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x10c8) + 0x10))(lVar2 + 0x10c8);
    if (lVar2 != 0) {
      lVar2 = FUN_140849bbe(lVar2);
      if (lVar2 != 0) {
        if (DAT_14cb63950 == 0) {
          local_70 = &local_58;
          local_58 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1464ec72a;
          local_78 = &LAB_1486f5f75;
          local_80 = &LAB_140945686;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
          lVar2 = FUN_14025708c(lVar2,DAT_14c9abbf0);
          if (lVar2 != 0) {
            lVar2 = lVar2 + 0x368;
            lVar3 = FUN_140d92dee(lVar2,&DAT_14cbd4078);
            if (lVar3 == 0) {
              local_58._0_5_ = (uint5)(uint)local_58;
              local_4c = 0;
              local_47 = 0;
              local_45 = 0;
              local_43 = 0;
              local_41 = 0;
              local_3f = 0;
              local_3c = 0xffffffff;
              uStack_38 = 0;
              uStack_34 = 0xffffffff;
              uStack_30 = 0;
              local_2b = 0;
              local_29 = 0;
              FUN_14079848a();
              FUN_140d94080(lVar2,&DAT_14cbd4078,&local_58);
              lVar3 = FUN_140d92dee(lVar2,&DAT_14cbd4078);
            }
            bVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x3c60) + 0x30))
                              (*(longlong *)(param_1 + 0x10) + 0x3c60);
            *(byte *)(lVar3 + 0x14) = ~bVar1 & param_2;
            *(undefined1 *)(lVar3 + 0x15) = 1;
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d92dee FUN_140d92dee body=186 status=ok
// SIG undefined FUN_140d92dee(void)

longlong FUN_140d92dee(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = 0;
  if (param_1[0x78] == '\x01') {
    if (param_1[0x77] == '\x01') {
      param_1[0x77] = 0;
    }
    if (param_1[0x75] == '\x01') {
      param_1[0x75] = 0;
    }
    if (*(int *)(param_1 + 0x6c) != -1) {
      *(undefined8 *)(param_1 + 0x6c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 100) != -1) {
      *(undefined8 *)(param_1 + 100) = 0xffffffff;
    }
    if (param_1[0x61] == '\x01') {
      param_1[0x61] = 0;
    }
    if (param_1[0x5f] == '\x01') {
      param_1[0x5f] = 0;
    }
    if (param_1[0x5d] == '\x01') {
      param_1[0x5d] = 0;
    }
    if (param_1[0x5b] == '\x01') {
      param_1[0x5b] = 0;
    }
    if (param_1[0x59] == '\x01') {
      param_1[0x59] = 0;
    }
    if (param_1[0x54] == '\x01') {
      param_1[0x54] = 0;
    }
    if (param_1[0x4c] == '\x01') {
      param_1[0x4c] = 0;
    }
    param_1[0x78] = 0;
  }
  iVar4 = *(uint *)(param_1 + 0x40) + 1;
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x40) * 0x38 + 8;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 1) {
      return 0;
    }
    lVar1 = lVar3 + -0x38;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x38) + -0x40 + lVar3);
    lVar3 = lVar1;
  } while (*plVar2 != *param_2);
  return *(longlong *)(param_1 + 0x38) + lVar1;
}



// FUNCTION 140d92ea8 FUN_140d92ea8 body=598 status=ok
// SIG undefined FUN_140d92ea8(void)

void FUN_140d92ea8(double *param_1,double *param_2)

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
  
  dVar9 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar4 = dVar6 * dVar6 + dVar9 * dVar9 + dVar5 * dVar5;
  if (((dVar4 != 1.0) || (dVar1 = dVar9, dVar2 = dVar5, dVar3 = dVar6, NAN(dVar4))) &&
     (dVar1 = DAT_14c8464e0, dVar2 = DAT_14c8464e8, dVar3 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar4)) {
    dVar4 = 1.0 / SQRT(dVar4);
    dVar1 = dVar9 * dVar4;
    dVar2 = dVar5 * dVar4;
    dVar3 = dVar6 * dVar4;
  }
  dVar5 = (double)(~-(ulonglong)(ABS(dVar3) < 0.9998999834060669) & 0x3ff0000000000000);
  dVar9 = 1.0;
  if (0.9998999834060669 <= ABS(dVar3)) {
    dVar9 = 0.0;
  }
  dVar6 = dVar5 * dVar2 + dVar1 * -0.0;
  dVar4 = dVar9 * dVar1 - dVar3 * dVar5;
  dVar5 = dVar3 * 0.0 - dVar2 * dVar9;
  dVar9 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  if (((dVar9 != 1.0) || (dVar7 = dVar6, dVar8 = dVar5, dVar10 = dVar4, NAN(dVar9))) &&
     (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / SQRT(dVar9);
    dVar7 = dVar6 * dVar9;
    dVar8 = dVar5 * dVar9;
    dVar10 = dVar4 * dVar9;
  }
  *param_1 = dVar8;
  param_1[1] = dVar10;
  param_1[2] = dVar7;
  param_1[3] = 0.0;
  param_1[4] = dVar2 * dVar7 - dVar10 * dVar3;
  param_1[5] = dVar3 * dVar8 - dVar7 * dVar1;
  param_1[6] = dVar1 * dVar10 - dVar8 * dVar2;
  param_1[7] = 0.0;
  param_1[8] = dVar1;
  param_1[9] = dVar2;
  param_1[10] = dVar3;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 140d930fe FUN_140d930fe body=743 status=ok
// SIG undefined FUN_140d930fe(void)

undefined4 FUN_140d930fe(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 *local_230;
  undefined1 *local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined4 local_17c;
  undefined4 local_150;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    local_cc = 0;
    local_c8 = 0x101;
    local_a0 = 0;
    local_98 = 0x800000000;
    local_80 = 0;
    local_74 = 4;
    local_d4 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_df = 1;
    local_d0 = 0;
    local_dc = 0x1000000;
    local_d8 = 1;
    local_90 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc);
    local_78 = 1;
    local_dd = 0;
    local_e0 = 1;
    uVar4 = (undefined4)*param_2;
    uVar9 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uVar10 = (undefined4)param_2[1];
    uVar11 = (undefined4)((ulonglong)param_2[1] >> 0x20);
    plVar5 = (longlong *)FUN_1403cba6c();
    if (plVar5 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar5 + 0x4c8))(plVar5);
      if (cVar3 != '\0') {
        (**(code **)(*plVar5 + 0x4b0))
                  (plVar5,&local_220,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 200));
        uVar10 = (undefined4)local_218;
        uVar11 = (undefined4)((ulonglong)local_218 >> 0x20);
        uVar4 = local_220;
        uVar9 = uStack_21c;
      }
    }
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar2 == 0) {
      uVar7 = (undefined4)DAT_14c8464f0;
      uVar8 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x270);
      uVar7 = (undefined4)uVar6;
      uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    local_108 = CONCAT44(uVar9,uVar4);
    local_100 = CONCAT44(uVar11,uVar10);
    local_f8 = CONCAT44(uVar8,uVar7);
    local_110 = (double)CONCAT44(uVar8,uVar7) + -500.0;
    local_118 = (double)CONCAT44(uVar11,uVar10) + 0.0;
    local_120 = (double)CONCAT44(uVar9,uVar4) + 0.0;
    memset(&local_220,0,0x100);
    local_150 = 0xffffffff;
    uStack_21c = 0x3f800000;
    local_17c = 0xffffffff;
    uVar6 = FUN_1447210f0(lVar1);
    local_228 = &DAT_14cad0f10;
    local_230 = &local_f0;
    local_238 = 3;
    uVar4 = FUN_1400b50cc(uVar6,&local_220,&local_108,&local_120);
    if ((char)uVar4 != '\0') {
      param_3[2] = local_1e8;
      *param_3 = local_1f8;
      param_3[1] = uStack_1f0;
      local_1e8 = (double)param_2[2] - local_1e8;
      if (500.0 <= local_1e8) {
        local_1e8 = 500.0;
      }
      if (local_1e8 <= 0.0) {
        local_1e8 = 0.0;
      }
      *param_4 = (float)local_1e8;
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d933e6 FUN_140d933e6 body=893 status=ok
// SIG undefined FUN_140d933e6(void)

ulonglong FUN_140d933e6(longlong param_1,double *param_2,float *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 *local_250;
  undefined1 *local_248;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  double local_200;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_194;
  undefined4 local_168;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_1403cba6c();
    if (lVar3 != 0) {
      param_4[2] = DAT_14c8462d0;
      uVar4 = DAT_14c8462c8;
      *param_4 = DAT_14c8462c0;
      param_4[1] = uVar4;
      local_108 = 0;
      uStack_100 = 0;
      FUN_140d938f4(lVar3,&local_108);
      if ((int)uStack_100 < 1) {
        uVar6 = 0;
      }
      else {
        fVar9 = 3.4028235e+38;
        iVar2 = -1;
        lVar5 = 0;
        do {
          FUN_140d93764(lVar3,&local_238,*(undefined8 *)(local_108 + lVar5 * 8),0);
          fVar10 = (float)local_228;
          if (fVar10 < fVar9) {
            iVar2 = FUN_144909502(lVar3);
            *(undefined4 *)param_2 = local_238;
            *(undefined4 *)((longlong)param_2 + 4) = uStack_234;
            *(undefined4 *)(param_2 + 1) = uStack_230;
            *(undefined4 *)((longlong)param_2 + 0xc) = uStack_22c;
            param_2[2] = local_228;
            fVar9 = fVar10;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)uStack_100);
        uVar6 = 0;
        if (iVar2 != -1) {
          local_cc = 0;
          local_c8 = 0x101;
          local_a0 = 0;
          local_98 = 0x800000000;
          local_80 = 0;
          local_78 = 0x400000000;
          local_d4 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_df = 1;
          local_d0 = 0;
          local_dc = 0x1000000;
          local_d8 = 1;
          lVar3 = *(longlong *)(param_1 + 8);
          if (lVar3 != 0) {
            local_90 = *(undefined4 *)(lVar3 + 0xc);
            local_78 = 0x400000001;
          }
          local_dd = 0;
          local_e0 = 1;
          if (*(longlong *)(lVar3 + 0x1c8) == 0) {
            uVar7 = (undefined4)DAT_14c8464f0;
            uVar8 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x270);
            uVar7 = (undefined4)uVar4;
            uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_120 = *param_2;
          local_118 = param_2[1];
          local_110 = CONCAT44(uVar8,uVar7);
          local_128 = (double)CONCAT44(uVar8,uVar7) + -500.0;
          local_130 = local_118 + 0.0;
          local_138 = local_120 + 0.0;
          memset(&local_238,0,0x100);
          local_168 = 0xffffffff;
          uStack_234 = 0x3f800000;
          local_194 = 0xffffffff;
          uVar4 = FUN_1447210f0(lVar3);
          local_248 = &DAT_14cad0f10;
          local_250 = &local_f0;
          local_258 = 3;
          cVar1 = FUN_1400b50cc(uVar4,&local_238,&local_120,&local_138);
          if (cVar1 != '\0') {
            local_200 = param_2[2] - local_200;
            if (500.0 <= local_200) {
              local_200 = 500.0;
            }
            if (local_200 <= 0.0) {
              local_200 = 0.0;
            }
            *param_3 = (float)local_200;
            param_4[2] = local_1d0;
            *(undefined4 *)param_4 = local_1e0;
            *(undefined4 *)((longlong)param_4 + 4) = uStack_1dc;
            *(undefined4 *)(param_4 + 1) = uStack_1d8;
            *(undefined4 *)((longlong)param_4 + 0xc) = uStack_1d4;
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          uVar6 = CONCAT71((int7)((ulonglong)&local_120 >> 8),1);
        }
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140d936fb;
    }
  }
  uVar6 = 0;
LAB_140d936fb:
  if ((local_70 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d93764 FUN_140d93764 body=398 status=ok
// SIG undefined FUN_140d93764(void)

undefined8 * FUN_140d93764(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [96];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar5 = FUN_144909502(param_1,param_3);
  if (iVar5 == -1) goto LAB_140d93855;
  if (param_4 == 0) {
    FUN_1401ff402(param_1,local_a8,iVar5);
    uVar10 = (undefined4)local_38;
    uVar11 = (undefined4)((ulonglong)local_38 >> 0x20);
    *param_2 = local_48;
    param_2[1] = uStack_40;
  }
  else {
    if (param_4 != 1) goto LAB_140d93855;
    if (((((*(int *)(param_1 + 0x66c) == 0) || (uVar3 = *(uint *)(param_1 + 0x668), (int)uVar3 < 0))
         || (DAT_14c9647dc <= (int)uVar3)) ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x66c))))) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar7 = *plVar9, lVar7 == 0)))) {
      lVar7 = *(longlong *)(param_1 + 0x6d0 + (longlong)*(int *)(param_1 + 0x718) * 0x10);
      lVar6 = (longlong)iVar5;
    }
    else {
      if (*(int *)(param_1 + 0x748) <= iVar5) {
LAB_140d93855:
        param_2[2] = DAT_14c8464f0;
        uVar4 = DAT_14c8464e8._4_4_;
        uVar11 = (undefined4)DAT_14c8464e8;
        uVar10 = DAT_14c8464e0._4_4_;
        *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
        *(undefined4 *)((longlong)param_2 + 4) = uVar10;
        *(undefined4 *)(param_2 + 1) = uVar11;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x740) + (longlong)iVar5 * 4);
      lVar6 = (longlong)iVar5;
      if ((lVar6 == -1) ||
         (lVar8 = (longlong)*(int *)(lVar7 + 0x718) * 0x10, *(int *)(lVar7 + 0x6d8 + lVar8) <= iVar5
         )) goto LAB_140d93855;
      lVar7 = *(longlong *)(lVar7 + 0x6d0 + lVar8);
    }
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar6 * 0x60);
    uVar2 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar7 + 0x30 + lVar6 * 0x60);
    uVar10 = (undefined4)uVar2;
    uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  param_2[2] = CONCAT44(uVar11,uVar10);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d938f4 FUN_140d938f4 body=546 status=ok
// SIG undefined FUN_140d938f4(void)

void FUN_140d938f4(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_140d93aaf;
    if (plVar5 == (longlong *)0x0) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) == 0) {
        return;
      }
      FUN_1402191ca(param_2,0);
      return;
    }
LAB_140d93a54:
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) {
LAB_140d93b09:
      FUN_1456cec3c(plVar5);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_140d93aaf:
    FUN_1456cec3c(plVar5);
    plVar5 = *(longlong **)(param_1 + 0x658);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x660);
      goto LAB_140d93a54;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_140d93922;
    goto LAB_140d93b09;
  }
LAB_140d93922:
  lVar3 = (**(code **)(*plVar5 + 0x310))(plVar5);
  iVar1 = *(int *)(lVar3 + 0x28);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
    FUN_1402191ca(param_2);
  }
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) == 0) goto LAB_140d9396a;
  }
  else if (DAT_14c950c29 != 1) goto LAB_140d9396a;
  FUN_1456cec3c(plVar5);
LAB_140d9396a:
  lVar3 = (**(code **)(*plVar5 + 0x310))(plVar5);
  uVar2 = *(uint *)(lVar3 + 0x28);
  lVar3 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar3 + uVar2;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar3) < uVar2) {
    FUN_1446f84a2(param_2);
  }
  lVar3 = 0;
  lVar6 = 0;
  do {
    plVar5 = *(longlong **)(param_1 + 0x658);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_140d93a8d;
    }
    else if (DAT_14c950c29 == 1) {
LAB_140d93a8d:
      FUN_1456cec3c(plVar5);
    }
    lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
    if (*(int *)(lVar4 + 0x28) <= lVar6) {
      return;
    }
    plVar5 = *(longlong **)(param_1 + 0x658);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_140d93a2e;
    }
    else if (DAT_14c950c29 == 1) {
LAB_140d93a2e:
      FUN_1456cec3c(plVar5);
    }
    lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
    *(undefined8 *)(*param_2 + lVar6 * 8) = *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + lVar3);
    lVar6 = lVar6 + 1;
    lVar3 = lVar3 + 0xc;
  } while( true );
}



// FUNCTION 140d93b16 FUN_140d93b16 body=1384 status=ok
// SIG undefined FUN_140d93b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d93b16(longlong param_1,double *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double _X;
  double dVar22;
  double _X_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double _X_01;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [16];
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar17 = param_2[2];
  plVar1 = *(longlong **)(param_1 + 0x120);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x1f8) & 4) == 0)) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,&local_158,*(undefined8 *)(param_1 + 0x128),0);
    local_138 = *param_2 - local_138;
    dStack_130 = param_2[1] - dStack_130;
    local_128 = param_2[2] - local_128;
    dVar22 = -local_158;
    dStack_150 = -dStack_150;
    local_148 = local_148 * -1.0;
    dStack_140 = dStack_140 * 1.0;
    dVar18 = local_138 * local_148 - dVar22 * local_128;
    dVar17 = dStack_130 * dVar22 - local_138 * dStack_150;
    dVar5 = local_128 * dStack_150 - dStack_130 * local_148;
    dVar5 = dVar5 + dVar5;
    dVar18 = dVar18 + dVar18;
    dVar17 = dVar17 + dVar17;
    auVar8 = divpd(_DAT_149934d80,local_118);
    dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118._0_8_)) & auVar8._0_8_) *
            ((dVar17 * dStack_150 - dVar18 * local_148) + dStack_140 * dVar5 + local_138);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118._8_8_)) & auVar8._8_8_) *
            (local_158 * dVar17 + local_148 * dVar5 + dStack_140 * dVar18 + dStack_130);
    dVar17 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_108)) &
                     (ulonglong)(1.0 / local_108)) *
             (dStack_140 * dVar17 + local_128 + (dVar18 * dVar22 - dVar5 * dStack_150));
  }
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar18 = auVar8._0_8_;
  dVar22 = auVar8._8_8_;
  dVar5 = *(double *)(param_1 + 0x1c0);
  pdVar4 = *(double **)(param_1 + 0x230);
  if (pdVar4 == (double *)0x0) {
    pdVar4 = (double *)FUN_14001cc68(0x40,0x10);
    dVar6 = DAT_14c8463d8;
    *pdVar4 = DAT_14c8463d0;
    pdVar4[1] = dVar6;
    dVar6 = DAT_14c8463e8;
    pdVar4[2] = DAT_14c8463e0;
    pdVar4[3] = dVar6;
    dVar6 = DAT_14c846500;
    pdVar4[4] = DAT_14c8464f8;
    pdVar4[5] = dVar6;
    pdVar4[6] = DAT_14c846508;
    *(double **)(param_1 + 0x230) = pdVar4;
  }
  auVar12 = _DAT_1499387d0;
  if ((((pdVar4[4] != dVar18) || (NAN(pdVar4[4]) || NAN(dVar18))) || (pdVar4[5] != dVar22)) ||
     (((NAN(pdVar4[5]) || NAN(dVar22) || (pdVar4[6] != dVar5)) || (NAN(pdVar4[6]) || NAN(dVar5)))))
  {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar5;
    dVar6 = (double)DAT_1499387d0;
    dVar7 = DAT_1499387d0._8_8_;
    auVar8 = divpd(auVar8,_DAT_1499387d0);
    auVar11 = divpd(auVar14,_DAT_1499387d0);
    auVar8 = roundpd(auVar8,auVar8,3);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar23._0_8_ = dVar18 - auVar8._0_8_ * dVar6;
    auVar23._8_8_ = dVar22 - auVar8._8_8_ * dVar7;
    auVar15._0_8_ = dVar5 - auVar11._0_8_ * dVar6;
    auVar15._8_8_ = 0.0 - auVar11._8_8_ * dVar7;
    auVar20._0_8_ = auVar23._0_8_ + dVar6;
    auVar20._8_8_ = auVar23._8_8_ + dVar7;
    auVar13._0_8_ = auVar15._0_8_ + dVar6;
    auVar13._8_8_ = auVar15._8_8_ + dVar7;
    auVar11._8_8_ = -(ulonglong)(0.0 <= auVar23._8_8_);
    auVar11._0_8_ = -(ulonglong)(0.0 <= auVar23._0_8_);
    auVar8 = blendvpd(auVar20,auVar23,auVar11);
    auVar21._8_8_ = -(ulonglong)(0.0 <= auVar15._8_8_);
    auVar21._0_8_ = -(ulonglong)(0.0 <= auVar15._0_8_);
    auVar11 = blendvpd(auVar13,auVar15,auVar21);
    auVar16._0_8_ = auVar8._0_8_ + -360.0;
    auVar16._8_8_ = auVar8._8_8_ + -360.0;
    auVar9._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
    auVar9._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
    auVar21 = blendvpd(auVar8,auVar16,auVar9);
    auVar10._8_8_ = -(ulonglong)(180.0 < auVar11._8_8_);
    auVar10._0_8_ = -(ulonglong)(180.0 < auVar11._0_8_);
    auVar8._8_8_ = auVar11._8_8_ + 0.0;
    auVar8._0_8_ = auVar11._0_8_ + -360.0;
    auVar8 = blendvpd(auVar11,auVar8,auVar10);
    *(undefined1 (*) [16])(pdVar4 + 4) = auVar21;
    dVar5 = auVar8._0_8_;
    pdVar4[6] = dVar5;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar5;
    auVar8 = divpd(auVar21,auVar12);
    auVar12 = divpd(auVar24,auVar12);
    auVar8 = roundpd(auVar8,auVar8,3);
    auVar12 = roundpd(auVar12,auVar12,3);
    dVar19 = (auVar21._0_8_ - auVar8._0_8_ * dVar6) * 0.008726646259971648;
    _X = (auVar21._8_8_ - auVar8._8_8_ * dVar7) * 0.008726646259971648;
    _X_00 = (dVar5 - auVar12._0_8_ * dVar6) * 0.008726646259971648;
    _X_01 = (0.0 - auVar12._8_8_ * dVar7) * 0.008726646259971648;
    dVar5 = sin(dVar19);
    dVar18 = sin(_X);
    dVar22 = sin(_X_00);
    sin(_X_01);
    dVar6 = cos(dVar19);
    dVar7 = cos(_X);
    dVar19 = cos(_X_00);
    cos(_X_01);
    *pdVar4 = dVar5 * dVar18 * dVar19 - dVar6 * dVar7 * dVar22;
    pdVar4[1] = -(dVar5 * dVar7 * dVar19) - dVar6 * dVar18 * dVar22;
    pdVar4[2] = -(dVar7 * dVar5 * dVar22) + dVar18 * dVar6 * dVar19;
    pdVar4[3] = dVar18 * dVar5 * dVar22 + dVar7 * dVar6 * dVar19;
  }
  local_158 = *pdVar4;
  dStack_150 = pdVar4[1];
  local_148 = pdVar4[2];
  dStack_140 = pdVar4[3];
  local_f8._8_4_ = SUB84(dVar3,0);
  local_f8._0_8_ = dVar2;
  local_f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_160 = param_5;
  local_168 = param_4;
  local_e8 = dVar17;
  FUN_144927ad4(param_1,local_f8,&local_158,param_3);
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d94080 FUN_140d94080 body=506 status=ok
// SIG undefined FUN_140d94080(void)

void FUN_140d94080(undefined1 *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x40);
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar5) == *param_2) {
        if (lVar4 - lVar6 != 0) {
          FUN_1457a6fa4((lVar4 - lVar6) + 8,param_3);
          goto LAB_140d94192;
        }
        break;
      }
      lVar6 = lVar6 + -0x38;
      lVar5 = lVar5 + 0x38;
    } while (lVar7 * -0x38 - lVar6 != 0);
  }
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_140d9427a(param_1 + 0x38,iVar2);
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  lVar7 = lVar7 * 0x38;
  lVar5 = lVar4 + lVar7;
  *(longlong *)(lVar4 + lVar7) = *param_2;
  cVar1 = *(char *)(param_3 + 1);
  *(char *)(lVar4 + 0xc + lVar7) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(lVar5 + 8) = *param_3;
  }
  cVar1 = *(char *)(param_3 + 3);
  *(char *)(lVar5 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(lVar5 + 0x10) = param_3[2];
  }
  cVar1 = *(char *)((longlong)param_3 + 0x11);
  *(char *)(lVar5 + 0x19) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x18) = *(undefined1 *)(param_3 + 4);
  }
  cVar1 = *(char *)((longlong)param_3 + 0x13);
  *(char *)(lVar5 + 0x1b) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x1a) = *(undefined1 *)((longlong)param_3 + 0x12);
  }
  cVar1 = *(char *)((longlong)param_3 + 0x15);
  *(char *)(lVar5 + 0x1d) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x1c) = *(undefined1 *)(param_3 + 5);
  }
  cVar1 = *(char *)((longlong)param_3 + 0x17);
  *(char *)(lVar5 + 0x1f) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x1e) = *(undefined1 *)((longlong)param_3 + 0x16);
  }
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  *(char *)(lVar5 + 0x21) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x20) = *(undefined1 *)(param_3 + 6);
  }
  if (param_3[7] == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 7);
  }
  *(undefined8 *)(lVar5 + 0x24) = uVar3;
  if (param_3[9] == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 9);
  }
  *(undefined8 *)(lVar5 + 0x2c) = uVar3;
  cVar1 = *(char *)((longlong)param_3 + 0x2d);
  *(char *)(lVar5 + 0x35) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x34) = *(undefined1 *)(param_3 + 0xb);
  }
  cVar1 = *(char *)((longlong)param_3 + 0x2f);
  *(char *)(lVar5 + 0x37) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x36) = *(undefined1 *)((longlong)param_3 + 0x2e);
  }
LAB_140d94192:
  *param_1 = 0;
  if (param_1[0x78] == '\x01') {
    if (param_1[0x77] == '\x01') {
      param_1[0x77] = 0;
    }
    if (param_1[0x75] == '\x01') {
      param_1[0x75] = 0;
    }
    if (*(int *)(param_1 + 0x6c) != -1) {
      *(undefined8 *)(param_1 + 0x6c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 100) != -1) {
      *(undefined8 *)(param_1 + 100) = 0xffffffff;
    }
    if (param_1[0x61] == '\x01') {
      param_1[0x61] = 0;
    }
    if (param_1[0x5f] == '\x01') {
      param_1[0x5f] = 0;
    }
    if (param_1[0x5d] == '\x01') {
      param_1[0x5d] = 0;
    }
    if (param_1[0x5b] == '\x01') {
      param_1[0x5b] = 0;
    }
    if (param_1[0x59] == '\x01') {
      param_1[0x59] = 0;
    }
    if (param_1[0x54] == '\x01') {
      param_1[0x54] = 0;
    }
    if (param_1[0x4c] == '\x01') {
      param_1[0x4c] = 0;
    }
    param_1[0x78] = 0;
  }
  return;
}



// FUNCTION 140d9427a FUN_140d9427a body=366 status=ok
// SIG undefined FUN_140d9427a(void)

void FUN_140d9427a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140d942ff;
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
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,4);
    }
  }
LAB_140d942ff:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,4);
  return;
}



// FUNCTION 140d943f0 FUN_140d943f0 body=778 status=ok
// SIG undefined FUN_140d943f0(void)

undefined8 * FUN_140d943f0(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b023890;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x10;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xf00000d0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = &PTR_FUN_14b023b20;
  param_1[0x32] = &PTR_FUN_14b023b40;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = &PTR_FUN_14b00be70;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xf00000d0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 1;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf00000d0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xf00000d0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 6;
  param_1[0x43] = 0;
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
  param_1[0x44] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xf00000d0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 140d946fa FUN_140d946fa body=49 status=ok
// SIG undefined FUN_140d946fa(void)

longlong FUN_140d946fa(void)

{
  if (DAT_14c967cb0 == 0) {
    FUN_140f50038(&DAT_14c967cb0,&PTR_s__Script_SlateCore_149ecd2b0);
  }
  return DAT_14c967cb0;
}



// FUNCTION 140d9472b FUN_140d9472b body=49 status=ok
// SIG undefined FUN_140d9472b(void)

longlong FUN_140d9472b(void)

{
  if (DAT_14cb1e018 == 0) {
    FUN_140f50038(&DAT_14cb1e018,&PTR_s__Script_AIModule_14abc83f0);
  }
  return DAT_14cb1e018;
}



// FUNCTION 140d9475c FUN_140d9475c body=354 status=ok
// SIG undefined FUN_140d9475c(void)

void FUN_140d9475c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 3) {
    iVar9 = 2;
  }
  else {
    if (*(uint *)(param_1 + 0x1c) < 3) {
      uVar4 = 4;
      if (4 < uVar3) {
        uVar4 = uVar3;
      }
      lVar6 = (longlong)(int)uVar4;
    }
    else {
      lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar6 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_140d947ea;
              lVar6 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
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
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_140d947ea:
    iVar5 = (int)(uVar7 >> 3);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar5) {
      iVar9 = iVar5;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar9;
  FUN_140d948be(param_1,param_2);
  return;
}



// FUNCTION 140d948be FUN_140d948be body=131 status=ok
// SIG undefined FUN_140d948be(void)

void FUN_140d948be(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 140d94942 FUN_140d94942 body=286 status=ok
// SIG undefined FUN_140d94942(void)

undefined8 FUN_140d94942(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_140d94a5a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d94a5a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140d94a5a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d94a03;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140d94a03;
    }
  }
  uVar6 = 0;
LAB_140d94a03:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d94a62 FUN_140d94a62 body=949 status=ok
// SIG undefined FUN_140d94a62(void)

void FUN_140d94a62(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  fVar12 = (float)param_2;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(float *)(param_1 + 0x1d) = fVar12;
  lVar5 = param_1[6];
  lVar8 = param_1[0x15];
  lVar10 = *(longlong *)(lVar8 + 0x1ec);
  if (lVar10 != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x278) + 0x30;
    if (*(longlong *)(lVar8 + 0x278) == 0) {
      lVar9 = lVar8 + 0x1f8;
    }
    uVar11 = param_2;
    if (lVar9 != 0) {
      uVar11 = FUN_1448c9f94(param_2,param_2,param_2);
      lVar10 = *(longlong *)(param_1[0x15] + 0x1ec);
    }
    (**(code **)(*(longlong *)(lVar5 + 0x8c0) + 0x50))(lVar5 + 0x8c0,lVar10,uVar11,1);
  }
  lVar8 = param_1[0x1b];
  if (lVar8 != 0) {
    if (((*(byte *)(param_1 + 0x17) & 4) != 0) && ((*(byte *)(lVar8 + 0x9c) & 1) == 0)) {
      *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xfb;
    }
    if (*(longlong *)(lVar8 + 0x120) != 0) {
      lVar8 = param_1[0x15];
      dVar2 = *(double *)(lVar8 + 0x140);
      dVar3 = *(double *)(lVar8 + 0x148);
      dVar4 = *(double *)(lVar8 + 0x150);
      if (((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar3 != 0.0)) || ((NAN(dVar3) || (dVar4 != 0.0))))
         || (NAN(dVar4))) {
        local_58 = (double)(1.0 - *(float *)(param_1 + 0x1d));
        local_48 = dVar4 * local_58;
        local_50 = dVar3 * local_58;
        local_58 = dVar2 * local_58;
        FUN_144a48320();
      }
    }
  }
  fVar1 = *(float *)(param_1[0x15] + 0x158);
  if (((*(byte *)(param_1 + 0x17) & 4) == 0) == fVar1 <= fVar12) {
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xfb | (fVar1 <= fVar12) << 2;
    if (fVar12 < fVar1) {
      plVar6 = (longlong *)param_1[0x1b];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x4a0))(plVar6,&DAT_14cadad64);
        FUN_1401bf202(param_1[0x1b]);
      }
    }
    else {
      lVar8 = FUN_1401ca522(param_1[0x15] + 0x110);
      if ((lVar8 != 0) && (*(longlong **)(param_1[6] + 0x1b0) != (longlong *)0x0)) {
        cVar7 = (**(code **)(**(longlong **)(param_1[6] + 0x1b0) + 0x700))();
        if ((cVar7 != '\0') &&
           (((0 < *(int *)(param_1[6] + 0xd20) &&
             (lVar10 = **(longlong **)(param_1[6] + 0xd18), lVar10 != 0)) &&
            (lVar10 = *(longlong *)(lVar10 + 0x48), lVar10 != 0)))) {
          lVar9 = param_1[0x1b];
          if (lVar9 == 0) {
            lVar9 = FUN_140995b6b(param_1);
            if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar9);
            }
            param_1[0x1b] = lVar9;
            *(byte *)(lVar9 + 0x2d6) = *(byte *)(lVar9 + 0x2d6) & 0xfd;
            *(byte *)(param_1[0x1b] + 0x9d) = *(byte *)(param_1[0x1b] + 0x9d) & 0xdf;
            *(uint *)(param_1[0x1b] + 0x2e4) = *(uint *)(param_1[0x1b] + 0x2e4) | 4;
            (**(code **)(*(longlong *)param_1[0x1b] + 0x720))((longlong *)param_1[0x1b],0);
            (**(code **)(*(longlong *)param_1[0x1b] + 0xa78))((longlong *)param_1[0x1b],lVar8);
            FUN_140c0573e(param_1[0x1b],1);
            FUN_140c056bc(param_1[0x1b],1);
            FUN_140357fa8(param_1[0x1b],1,0);
            lVar9 = param_1[0x1b];
          }
          if ((*(byte *)(lVar9 + 0x9c) & 1) == 0) {
            uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
            FUN_140b506dc(lVar9,uVar11,0);
            (**(code **)(*(longlong *)param_1[0x1b] + 0x490))
                      ((longlong *)param_1[0x1b],lVar10,&DAT_14cad8330,
                       *(undefined8 *)(param_1[0x15] + 0x138));
            FUN_1449e3cec(param_1[0x1b],0,1);
          }
        }
      }
    }
  }
  if ((0 < *(int *)(lVar5 + 0xd20)) && (**(longlong **)(lVar5 + 0xd18) != 0)) {
    FUN_140d94e18(**(longlong **)(lVar5 + 0xd18),param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d94e18 FUN_140d94e18 body=384 status=ok
// SIG undefined FUN_140d94e18(void)

void FUN_140d94e18(longlong param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(float *)(param_1 + 0x7c) != param_2) || (NAN(*(float *)(param_1 + 0x7c)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x7c) = param_2;
    iVar4 = *(int *)(param_1 + 0x98);
    if ((longlong)iVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x90);
      lVar6 = 0;
      do {
        if (((*(byte *)(lVar5 + 0x15 + lVar6) & 4) != 0) &&
           (*(longlong *)(lVar5 + 0xe8 + lVar6) != 0)) {
          dVar1 = *(double *)(lVar5 + 0x68 + lVar6);
          dVar2 = *(double *)(lVar5 + 0x70 + lVar6);
          dVar3 = *(double *)(lVar5 + 0x78 + lVar6);
          if ((9.999999747378752e-05 < ABS(dVar1)) ||
             ((9.999999747378752e-05 < ABS(dVar2) || (9.999999747378752e-05 < ABS(dVar3))))) {
            dVar8 = (double)*(float *)(param_1 + 0x7c);
            local_30 = dVar3 * dVar8 + *(double *)(lVar5 + 0x40 + lVar6);
            local_38 = dVar2 * dVar8 + *(double *)(lVar5 + 0x38 + lVar6);
            local_40 = dVar1 * dVar8 + *(double *)(lVar5 + 0x30 + lVar6);
            FUN_144a48320();
          }
          fVar7 = *(float *)(lVar5 + 0x80 + lVar6) + -1.0;
          if (1e-08 < ABS(fVar7)) {
            local_58 = (double)((fVar7 * *(float *)(param_1 + 0x7c) + 1.0) *
                               *(float *)(lVar5 + 0x48 + lVar6));
            local_50 = local_58;
            local_48 = local_58;
            FUN_14084f00a(*(undefined8 *)(lVar5 + 0xe8 + lVar6));
          }
        }
        lVar6 = lVar6 + 0xf0;
      } while ((longlong)iVar4 * 0xf0 - lVar6 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d94f9a FUN_140d94f9a body=188 status=ok
// SIG undefined FUN_140d94f9a(void)

int * FUN_140d94f9a(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_140d9502e;
          break;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140d95058(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x28);
LAB_140d9502e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 140d95058 FUN_140d95058 body=311 status=ok
// SIG undefined FUN_140d95058(void)

undefined4 *
FUN_140d95058(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d95230(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  *(undefined8 *)(local_50 + 4) = 0;
  *(undefined8 *)(local_50 + 6) = 0;
  local_50[8] = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140d95190(param_1,param_3,local_50,local_58);
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
      local_50[9] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[8] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_140d9541a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d95190 FUN_140d95190 body=160 status=ok
// SIG undefined FUN_140d95190(void)

void FUN_140d95190(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1484a6ce0(iVar2,*param_4,1);
          *param_4 = iVar11;
          uVar9 = 1;
          break;
        }
        iVar11 = piVar1[8];
        uVar9 = 0;
      } while (iVar11 != -1);
      goto LAB_140d951f8;
    }
  }
  uVar9 = 0;
LAB_140d951f8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 140d95230 FUN_140d95230 body=489 status=ok
// SIG undefined FUN_140d95230(void)

int * FUN_140d95230(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140d9541a FUN_140d9541a body=634 status=ok
// SIG undefined FUN_140d9541a(void)

void FUN_140d9541a(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_140d9547d;
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
LAB_140d9547d:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x28);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 140d95694 FUN_140d95694 body=1369 status=ok
// SIG undefined FUN_140d95694(void)

ulonglong FUN_140d95694(longlong param_1,uint param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_368 [40];
  undefined8 local_340;
  longlong *local_338;
  longlong local_330;
  longlong local_328;
  undefined4 local_31c;
  undefined4 local_318 [2];
  uint *local_310;
  longlong local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong *plStack_2f0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [288];
  undefined1 *local_80;
  int local_78;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_140d95e8c();
  if (0 < *(int *)(param_4 + 0x130)) {
    local_330 = *param_3;
    local_328 = param_3[1];
    if (local_328 != 0) {
      LOCK();
      *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
      UNLOCK();
    }
    FUN_140d95bee(param_4,local_1a8,&local_330);
    lVar6 = (longlong)local_78;
    if (lVar6 < 1) {
LAB_140d959de:
      lVar6 = param_4 + 8;
      if (*(longlong *)(param_4 + 0x128) != 0) {
        lVar6 = *(longlong *)(param_4 + 0x128);
      }
      local_340 = *(undefined8 *)(lVar6 + 0x38);
      plVar4 = *(longlong **)(lVar6 + 0x40);
      if (plVar4 == (longlong *)0x0) {
        local_338 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_338 = plVar4;
      }
      FUN_140d95bee(param_4,&local_308,&local_340);
      FUN_1400e213c(local_1a8,&local_308);
      FUN_1447fa21a(&local_308);
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
      uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),DAT_14c96b238);
      local_308 = *param_3;
      plVar4 = (longlong *)param_3[1];
      if (plVar4 == (longlong *)0x0) {
        local_300 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_300 = plVar4;
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
      FUN_14692fc6e(local_1a8,&local_308,uVar7 & 0xffffffff);
      plVar4 = local_300;
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_300 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_300)(local_300);
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
    else {
      puVar9 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar9 = local_1a0;
      }
      lVar3 = *(longlong *)(puVar9 + lVar6 * 0x48 + -0x10);
      plVar4 = *(longlong **)(puVar9 + lVar6 * 0x48 + -8);
      if (plVar4 == (longlong *)0x0) {
        lVar6 = *param_3;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        lVar6 = *param_3;
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
      if (lVar3 != lVar6) goto LAB_140d959de;
    }
    lVar6 = (longlong)local_78;
    if (0 < lVar6) {
      puVar9 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar9 = local_1a0;
      }
      lVar3 = *(longlong *)(puVar9 + lVar6 * 0x48 + -0x10);
      plVar4 = *(longlong **)(puVar9 + lVar6 * 0x48 + -8);
      if (plVar4 == (longlong *)0x0) {
        lVar6 = *param_3;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        lVar6 = *param_3;
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
      if (lVar3 == lVar6) {
        lVar6 = param_1 + 0x148;
        FUN_1403d040a(&local_308,local_1a8);
        FUN_1403d1520(lVar6,local_318);
        *local_310 = param_2;
        *(longlong *)(local_310 + 2) = local_308;
        local_308 = 0;
        local_310[4] = (uint)local_300;
        local_310[5] = local_300._4_4_;
        local_300 = (longlong *)0x0;
        *(undefined8 *)(local_310 + 6) = local_2f8;
        *(longlong **)(local_310 + 8) = plStack_2f0;
        local_2f8 = 0;
        plStack_2f0 = (longlong *)0x0;
        local_310[10] = 0xffffffff;
        local_31c = local_318[0];
        uVar8 = *local_310;
        cVar5 = FUN_1403d12d8(lVar6,uVar8,local_310);
        if (cVar5 == '\0') {
          uVar10 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
          iVar11 = 1;
          if (3 < uVar10) {
            uVar7 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
            lVar3 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar11 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 400))) {
            uVar8 = *(int *)(param_1 + 400) - 1U & uVar8;
            local_310[0xb] = uVar8;
            lVar6 = *(longlong *)(param_1 + 0x188);
            if (*(longlong *)(param_1 + 0x188) == 0) {
              lVar6 = param_1 + 0x180;
            }
            local_310[10] =
                 *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)(int)uVar8) *
                                   4);
            lVar6 = *(longlong *)(param_1 + 0x188);
            if (*(longlong *)(param_1 + 0x188) == 0) {
              lVar6 = param_1 + 0x180;
            }
            *(undefined4 *)
             (lVar6 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)(int)uVar8) * 4) =
                 local_31c;
          }
          else {
            *(int *)(param_1 + 400) = iVar11;
            FUN_1457a716a(lVar6);
          }
        }
        if (plStack_2f0 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plStack_2f0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plStack_2f0 + 0x10))();
          }
        }
        FUN_1447de57f(local_308,(ulonglong)local_300 & 0xffffffff);
        if (local_308 != 0) {
          FUN_1400020a8();
        }
        FUN_1447fa2ac(local_58,local_50);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_60 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
        puVar9 = local_1a0;
        if (local_80 != (undefined1 *)0x0) {
          puVar9 = local_80;
        }
        FUN_1447157bd(puVar9,local_78);
        if (local_80 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
        goto LAB_140d95977;
      }
    }
    FUN_1447fa21a(local_1a8);
  }
  uVar7 = 0;
LAB_140d95977:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_48 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d95bee FUN_140d95bee body=497 status=ok
// SIG undefined FUN_140d95bee(void)

undefined8 FUN_140d95bee(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c0 [288];
  undefined1 *local_1a0;
  ulonglong local_198;
  undefined1 local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_188[0] = DAT_14c96b238;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  lVar7 = -1;
  lVar6 = 0;
  do {
    lVar7 = lVar7 + 1;
    if (*(int *)(param_1 + 0x130) <= lVar7) {
      local_2c8 = DAT_14c96b238;
      local_1a0 = (undefined1 *)0x0;
      local_198 = 0x400000000;
      local_190 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      FUN_140d95de0(param_2);
      puVar5 = local_1a0;
      if (local_1a0 == (undefined1 *)0x0) {
        puVar5 = local_2c0;
      }
      FUN_1447157bd(puVar5,local_198 & 0xffffffff);
      if (local_1a0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140d95d4c;
    }
    lVar4 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar4 = param_1 + 8;
    }
    FUN_1402018be(local_188,lVar4 + lVar6);
    lVar4 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar4 = param_1 + 8;
    }
    plVar3 = (longlong *)(lVar4 + 0x38 + lVar6);
    lVar6 = lVar6 + 0x48;
  } while (*plVar3 != *param_3);
  local_2d8 = *(undefined8 *)(param_1 + 0x140);
  local_2d0 = *(longlong *)(param_1 + 0x148);
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
  }
  FUN_140d95de0(param_2,&local_2d8,local_188);
LAB_140d95d4c:
  puVar5 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar5 = local_180;
  }
  FUN_1447157bd(puVar5,local_58 & 0xffffffff);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d95de0 FUN_140d95de0 body=172 status=ok
// SIG undefined FUN_140d95de0(void)

undefined1 * FUN_140d95de0(undefined1 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 0x128) = 0;
  puVar5 = param_3 + 8;
  if (*(undefined1 **)(param_3 + 0x128) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_3 + 0x128);
  }
  FUN_1401bb78c(param_1 + 8,puVar5,*(undefined4 *)(param_3 + 0x130),0);
  param_1[0x138] = param_3[0x138];
  *(undefined8 *)(param_1 + 0x140) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(param_1 + 0x148) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
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
  return param_1;
}



// FUNCTION 140d95e8c FUN_140d95e8c body=735 status=ok
// SIG undefined FUN_140d95e8c(void)

void FUN_140d95e8c(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar9 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x188);
    }
    iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_2) * 4);
    if (iVar13 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x148);
      while (lVar2 = lVar9 + (longlong)iVar13 * 0x30,
            *(uint *)(lVar9 + (longlong)iVar13 * 0x30) != param_2) {
        iVar13 = *(int *)(lVar2 + 0x28);
        if (iVar13 == -1) goto LAB_140d9604b;
      }
      if ((lVar2 == 0) || (lVar2 == -8)) goto LAB_140d9604b;
      lVar9 = param_1 + 0x208;
      local_68 = (longlong *)(param_1 + 0x148);
      FUN_1403d1520(lVar9,&local_58);
      *local_50 = param_2;
      local_50[2] = 0;
      local_50[3] = 0;
      uVar11 = *(uint *)(lVar2 + 0x10);
      uVar3 = *(undefined8 *)(lVar2 + 8);
      local_50[4] = uVar11;
      if (uVar11 == 0) {
        local_50[5] = 0;
      }
      else {
        FUN_1402d86b0(local_50 + 2,uVar11,0);
        FUN_14494310f(*(undefined8 *)(local_50 + 2),uVar3,uVar11);
      }
      *(undefined8 *)(local_50 + 6) = *(undefined8 *)(lVar2 + 0x18);
      lVar4 = *(longlong *)(lVar2 + 0x20);
      *(longlong *)(local_50 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_50[10] = 0xffffffff;
      local_5c = local_58;
      uVar11 = *local_50;
      cVar8 = FUN_1403d12d8(lVar9,uVar11,local_50);
      if (cVar8 == '\0') {
        uVar12 = *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c);
        iVar13 = 1;
        if (3 < uVar12) {
          uVar10 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
          lVar4 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((int)uVar12 < 1) || (iVar13 <= *(int *)(param_1 + 0x250))) {
          uVar11 = *(int *)(param_1 + 0x250) - 1U & uVar11;
          local_50[0xb] = uVar11;
          lVar9 = *(longlong *)(param_1 + 0x248);
          if (*(longlong *)(param_1 + 0x248) == 0) {
            lVar9 = param_1 + 0x240;
          }
          local_50[10] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x250) - 1U &
                                           (longlong)(int)uVar11) * 4);
          lVar9 = *(longlong *)(param_1 + 0x248);
          if (*(longlong *)(param_1 + 0x248) == 0) {
            lVar9 = param_1 + 0x240;
          }
          *(undefined4 *)
           (lVar9 + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)(int)uVar11) * 4) =
               local_5c;
        }
        else {
          *(int *)(param_1 + 0x250) = iVar13;
          FUN_1457a716a(lVar9);
        }
      }
      lVar9 = (longlong)*(int *)(lVar2 + 0x10) * 0x10;
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 8) + -8 + lVar9);
      if (plVar5 != (longlong *)0x0) {
        plVar6 = *(longlong **)(*(longlong *)(lVar2 + 8) + -0x10 + lVar9);
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        iVar13 = (int)plVar5[1];
        do {
          plVar14 = (longlong *)0x0;
          if (iVar13 == 0) break;
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar15 = iVar13 == iVar7;
          if (bVar15) {
            *(int *)(plVar5 + 1) = iVar13 + 1;
            iVar7 = iVar13;
          }
          iVar13 = iVar7;
          UNLOCK();
          plVar14 = plVar5;
        } while (!bVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        if ((plVar14 == (longlong *)0x0) || (plVar6 == (longlong *)0x0)) {
          if (plVar14 == (longlong *)0x0) goto LAB_140d96036;
        }
        else {
          local_58 = *(undefined4 *)(param_1 + 0x18);
          local_54 = param_2;
          (**(code **)(*plVar6 + 0x1a0))(plVar6);
        }
        LOCK();
        plVar5 = plVar14 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
LAB_140d96036:
      FUN_140d9616e(local_68,param_2);
      if (param_2 == 10) {
        *(undefined1 *)(param_1 + 0x49) = 1;
      }
    }
  }
LAB_140d9604b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d9616c FUN_140d9616c body=1 status=ok
// SIG undefined FUN_140d9616c(void)

void FUN_140d9616c(void)

{
  return;
}



// FUNCTION 140d9616e FUN_140d9616e body=223 status=ok
// SIG undefined FUN_140d9616e(void)

void FUN_140d9616e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x30;
        lVar1 = lVar2 + lVar7;
        if (*(int *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x2c) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x2c) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x30 + lVar2 + 0x28);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x28);
          lVar7 = *param_1 + lVar7;
          plVar3 = *(longlong **)(lVar7 + 0x20);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar4 = (int *)((longlong)plVar3 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          FUN_1447de57f(*(longlong *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x10));
          if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_1400020a8();
          }
          FUN_1403d13b4(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x28);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140d9624e FUN_140d9624e body=76 status=ok
// SIG undefined FUN_140d9624e(void)

void FUN_140d9624e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9629a FUN_140d9629a body=83 status=ok
// SIG undefined FUN_140d9629a(void)

void FUN_140d9629a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b222ae0;
  FUN_140d962ed(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140d962ed(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d962ed FUN_140d962ed body=75 status=ok
// SIG undefined FUN_140d962ed(void)

void FUN_140d962ed(longlong param_1,int param_2)

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



// FUNCTION 140d96338 FUN_140d96338 body=208 status=ok
// SIG undefined FUN_140d96338(void)

void FUN_140d96338(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x200);
  if (0 < (longlong)iVar1) {
    iVar7 = -iVar1;
    uVar5 = (longlong)iVar1;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1f8);
      lVar6 = *(longlong *)(lVar2 + -8 + uVar5 * 8);
      iVar1 = *(int *)(lVar6 + 0x30);
      if ((((iVar1 == 0) || (uVar4 = *(uint *)(lVar6 + 0x2c), (int)uVar4 < 0)) ||
          (DAT_14c9647dc <= (int)uVar4)) ||
         (((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 == 0 ||
           (*(int *)(lVar6 + 0x10) != iVar1)) || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) {
        uVar4 = *(uint *)(param_1 + 0x200);
        if (uVar5 != uVar4) {
          memmove((void *)(lVar2 + uVar5 * 8 + -8),(void *)(lVar2 + uVar5 * 8),
                  (longlong)(int)(iVar7 + uVar4) << 3);
          uVar4 = *(uint *)(param_1 + 0x200);
        }
        *(uint *)(param_1 + 0x200) = uVar4 - 1;
        FUN_1457a7388((longlong *)(param_1 + 0x1f8));
      }
      iVar7 = iVar7 + 1;
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 140d96408 FUN_140d96408 body=1655 status=ok
// SIG undefined FUN_140d96408(void)

void FUN_140d96408(PSRWLOCK param_1)

{
  PVOID pvVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  PVOID pvVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [40];
  PSRWLOCK local_c0;
  ulonglong local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  AcquireSRWLockExclusive(param_1);
  *(int *)&param_1[0xd].Ptr = *(int *)&param_1[0xd].Ptr + 1;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  iStack_68 = -1;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  puVar18 = local_88;
  if ((longlong)*(int *)&param_1[2].Ptr == 0) {
    uVar19 = 1;
    iVar10 = 0;
    uVar8 = 0xffffffff;
    iVar9 = 0;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    pvVar17 = param_1[1].Ptr;
    pvVar1 = (PVOID)((longlong)pvVar17 + (longlong)*(int *)&param_1[2].Ptr * 0x28);
    local_c0 = param_1;
    do {
      iVar10 = iStack_68;
      uVar19 = uStack_90;
      if (*(longlong *)((longlong)pvVar17 + 8) != 0) {
        if (local_64 == 0) {
          iVar10 = (int)uStack_90;
          uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
          if (uStack_90._4_4_ == iVar10) {
            FUN_1446efaca(&local_98,uVar19 & 0xffffffff);
          }
          iVar9 = local_70;
          if (local_70 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar11 = local_70 + -1;
            }
            iVar11 = iVar11 >> 5;
          }
          iVar7 = local_70 + 1;
          iVar12 = local_70 + 0x1f;
          if (-1 < local_70) {
            iVar12 = local_70;
          }
          if (iVar12 >> 5 == iVar11) {
            local_70 = iVar7;
          }
          else {
            if (local_6c <= local_70) {
              if (local_70 + 0x20U < 0xa0) {
                local_6c = 0x80;
              }
              else {
                uVar8 = local_70 + 0x20U >> 5;
                if (local_6c + 0x1fU < 0xa0) {
                  uVar13 = 4;
                  if (4 < uVar8) {
                    uVar13 = uVar8;
                  }
                }
                else {
                  uVar13 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
                }
                uVar19 = FUN_144a3809e(uVar13 << 2,0);
                iVar11 = (int)(uVar19 >> 2);
                local_6c = iVar11 << 5;
                if (iVar11 < (int)uVar8) {
                  local_6c = -0x20;
                }
              }
              FUN_1446efbd8(local_88,local_70);
              iVar7 = local_70 + 1;
            }
            iVar11 = iVar7 + 0x1f;
            if (-1 < iVar7) {
              iVar11 = iVar7;
            }
            local_70 = iVar7;
            if (iVar7 % 0x20 != 0) {
              puVar5 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar5 = local_88;
              }
              bVar6 = -(char)(iVar7 % 0x20);
              *(uint *)(puVar5 + (longlong)(iVar11 >> 5) * 4) =
                   (uint)(*(int *)(puVar5 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)) >>
                   (bVar6 & 0x1f);
            }
          }
          lVar14 = (longlong)iVar10;
          puVar5 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar5 = local_88;
          }
          bVar6 = (byte)iVar9 & 0x1f;
          *(uint *)(puVar5 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar5 + (longlong)(iVar12 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        }
        else {
          lVar14 = (longlong)iStack_68;
          iStack_68 = *(int *)(local_98 + 4 + lVar14 * 0x10);
          local_64 = local_64 + -1;
          if (local_64 != 0) {
            *(undefined4 *)(local_98 + (longlong)iStack_68 * 0x10) = 0xffffffff;
          }
        }
        uVar8 = 1 << ((byte)iVar10 & 0x1f);
        puVar5 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar5 = local_88;
        }
        iVar9 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        *(uint *)(puVar5 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar9 >> 5) * 4) | uVar8;
        lVar14 = lVar14 * 0x10;
        uVar19 = *(ulonglong *)((longlong)pvVar17 + 8);
        *(ulonglong *)(local_98 + lVar14) = uVar19;
        *(undefined4 *)(local_98 + 8 + lVar14) = 0xffffffff;
        uVar13 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        uVar16 = (int)uStack_90 - local_64;
        if ((uVar16 != 0) && (uVar16 != 1)) {
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_60;
          }
          iVar11 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & uVar13) * 4);
          while (iVar11 != -1) {
            puVar2 = (ulonglong *)(local_98 + (longlong)iVar11 * 0x10);
            if (*(ulonglong *)(local_98 + (longlong)iVar11 * 0x10) == uVar19) {
              *puVar2 = uVar19;
              if (local_64 != 0) {
                *(int *)(local_98 + (longlong)iStack_68 * 0x10) = iVar10;
              }
              *(undefined4 *)(local_98 + (longlong)iVar10 * 0x10) = 0xffffffff;
              iVar11 = -1;
              if (0 < local_64) {
                iVar11 = iStack_68;
              }
              *(int *)(local_98 + (longlong)iVar10 * 0x10 + 4) = iVar11;
              iStack_68 = iVar10;
              local_64 = local_64 + 1;
              puVar5 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar5 = local_88;
              }
              *(uint *)(puVar5 + (longlong)(iVar9 >> 5) * 4) =
                   *(uint *)(puVar5 + (longlong)(iVar9 >> 5) * 4) & ~uVar8;
              goto LAB_140d96495;
            }
            iVar11 = (int)puVar2[1];
          }
        }
        if (uVar16 < 4) {
          iVar9 = 1;
        }
        else {
          uVar19 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
          lVar15 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar15 & 0x1f);
        }
        if (((int)uVar16 < 1) || (iVar9 <= local_50)) {
          uVar13 = local_50 - 1U & uVar13;
          *(uint *)(local_98 + lVar14 + 0xc) = uVar13;
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_60;
          }
          *(undefined4 *)(local_98 + lVar14 + 8) =
               *(undefined4 *)(puVar5 + ((longlong)local_50 - 1U & (longlong)(int)uVar13) * 4);
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_60;
          }
          *(int *)(puVar5 + ((longlong)local_50 - 1U & (longlong)(int)uVar13) * 4) = iVar10;
        }
        else {
          local_50 = iVar9;
          FUN_140d96ac4(&local_98);
        }
      }
LAB_140d96495:
      pvVar17 = (PVOID)((longlong)pvVar17 + 0x28);
    } while (pvVar17 != pvVar1);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_b0 = local_88;
    if (local_70 == 0) {
      iVar7 = 0;
      uVar19 = 1;
      uVar8 = 0xffffffff;
      iVar9 = 0;
      iVar10 = 0;
      param_1 = local_c0;
      iVar11 = local_a0;
    }
    else {
      FUN_1449c0562(&local_b8);
      uVar19 = local_b8 >> 0x20;
      param_1 = local_c0;
      puVar18 = local_b0;
      iVar10 = (int)local_b8;
      uVar8 = (uint)local_a8;
      iVar9 = local_a8._4_4_;
      iVar11 = local_a0;
      iVar7 = local_70;
    }
  }
  if (iVar9 != iVar7 || puVar18 != local_88) {
    do {
      FUN_140d96a80(*(undefined8 *)(local_98 + (longlong)iVar9 * 0x10));
      uVar8 = ~(uint)uVar19 & uVar8;
      puVar5 = *(undefined1 **)(puVar18 + 0x10);
      if (*(undefined1 **)(puVar18 + 0x10) == (undefined1 *)0x0) {
        puVar5 = puVar18;
      }
      iVar12 = *(int *)(puVar18 + 0x18);
      lVar14 = (longlong)iVar10;
      uVar13 = *(uint *)(puVar5 + lVar14 * 4) & uVar8;
      if (uVar13 == 0) {
        iVar9 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar9 = iVar12 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar10) {
          iVar4 = iVar10;
        }
        if (iVar10 < iVar9) {
          lVar15 = 0;
          do {
            uVar13 = *(uint *)(puVar5 + lVar15 * 4 + lVar14 * 4 + 4);
            if (uVar13 != 0) {
              iVar10 = iVar10 + (int)lVar15 + 1;
              uVar8 = 0xffffffff;
              goto LAB_140d96916;
            }
            iVar11 = iVar11 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar4 - lVar14 != lVar15);
          uVar8 = 0xffffffff;
          iVar10 = iVar4;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar12;
      }
      else {
LAB_140d96916:
        uVar19 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar19 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar12 <= iVar9) {
          iVar9 = iVar12;
        }
      }
    } while (iVar9 != iVar7 || puVar18 != local_88);
  }
  iVar10 = *(int *)&param_1[2].Ptr;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  *(undefined4 *)&param_1[2].Ptr = 0;
  if (*(int *)((longlong)&param_1[2].Ptr + 4) != iVar10) {
    FUN_1457a74ac(param_1 + 1);
  }
  FUN_1457a751c(param_1 + 3,*(int *)&param_1[4].Ptr - *(int *)((longlong)&param_1[9].Ptr + 4));
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1457a741c(&local_98);
  ReleaseSRWLockExclusive(param_1);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d96a80 FUN_140d96a80 body=67 status=ok
// SIG undefined FUN_140d96a80(void)

void FUN_140d96a80(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14480809c(param_1 + 0x30,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d96abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
  return;
}



// FUNCTION 140d96ac4 FUN_140d96ac4 body=590 status=ok
// SIG undefined FUN_140d96ac4(void)

void FUN_140d96ac4(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x10;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140d96ccd;
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
LAB_140d96ccd:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d96d14 FUN_140d96d14 body=539 status=ok
// SIG undefined FUN_140d96d14(void)

void FUN_140d96d14(longlong *param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar13 = *param_1 + (longlong)iVar8 * 0x98;
      FUN_140231422(lVar13 + 0x38);
      puVar4 = *(undefined8 **)(lVar13 + 0x30);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar3 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_140d96e58;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_140d96e58:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140f776e6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar14 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d96f32 FUN_140d96f32 body=331 status=ok
// SIG undefined FUN_140d96f32(void)

void FUN_140d96f32(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x94 + (longlong)iVar4 * 0x98) * 4) =
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



// FUNCTION 140d9707e FUN_140d9707e body=578 status=ok
// SIG undefined FUN_140d9707e(void)

void FUN_140d9707e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x98;
        local_74 = iVar5;
        iVar5 = FUN_14490dc6d(lVar9 + lVar10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x94 + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x90 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_140d97299;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_140d97299:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d972d0 FUN_140d972d0 body=165 status=ok
// SIG undefined FUN_140d972d0(void)

undefined8 * FUN_140d972d0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b90f830;
  FUN_140d97376(param_1 + 0x12);
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d97376 FUN_140d97376 body=286 status=ok
// SIG undefined FUN_140d97376(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d97376(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_FUN_14b023b20;
  *(undefined ***)(param_1 + 0x1c8) = &PTR_FUN_14b023b40;
  if (*(longlong **)(param_1 + 600) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 600) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x1c0) != '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x1b8), plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(param_1 + 0x60);
  if ((*(longlong *)(param_1 + 0x58) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x50));
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d97494 FUN_140d97494 body=529 status=ok
// SIG undefined FUN_140d97494(void)

longlong FUN_140d97494(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d97682;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x14) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar3;
      }
      else {
        lVar5 = 0;
      }
      lVar6 = *(longlong *)(lVar5 + 0x430);
      if (lVar6 != 0) {
        if (DAT_14cae9568 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1417de738;
          local_30 = &LAB_145893408;
          local_38 = &LAB_1458cbbd2;
          local_48 = &LAB_147ba21f1;
          local_50 = &LAB_1463e9233;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x1000000c;
          local_70 = 8;
          local_78 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
          lVar6 = *(longlong *)(lVar5 + 0x430);
          if (lVar6 == 0) goto LAB_140d97680;
        }
        lVar5 = 0;
        if ((DAT_14cae9568 == 0) || (lVar4 = *(longlong *)(lVar6 + 0x10), lVar5 = 0, lVar4 == 0))
        goto LAB_140d97682;
        if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
             DAT_14cae9568 + 0x30 && (*(longlong *)(lVar6 + 0x78) != 0)))) {
          lVar4 = FUN_140d976a6();
          lVar6 = *(longlong *)(lVar6 + 0x78);
          if (lVar6 != 0) {
            lVar5 = 0;
            if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 == 0))
            goto LAB_140d97682;
            if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
              lVar5 = 0;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30) {
                lVar5 = lVar6;
              }
              goto LAB_140d97682;
            }
          }
        }
      }
    }
  }
LAB_140d97680:
  lVar5 = 0;
LAB_140d97682:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140d976a6 FUN_140d976a6 body=228 status=ok
// SIG undefined FUN_140d976a6(void)

longlong FUN_140d976a6(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5f288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145893408;
    local_28 = &LAB_145a7a20e;
    local_38 = &LAB_1486b2119;
    local_40 = FUN_1464e55b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x430;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameViewportClient",&DAT_14cb5f288,&DAT_1486b2118);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9778c FUN_140d9778c body=536 status=ok
// SIG undefined FUN_140d9778c(void)

void FUN_140d9778c(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar11 + 0x50 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_140d979a6(lVar11 + lVar10 + 8);
      uVar12 = uVar12 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_140d978dc;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140d978dc:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_1448fc38a(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d979a6 FUN_140d979a6 body=55 status=ok
// SIG undefined FUN_140d979a6(void)

void FUN_140d979a6(longlong *param_1)

{
  FUN_140d979de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d979de FUN_140d979de body=653 status=ok
// SIG undefined FUN_140d979de(void)

void FUN_140d979de(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_140d97bc9;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *param_1;
      plVar5 = *(longlong **)(lVar14 + 0x58 + (longlong)iVar9 * 0x90);
      if (plVar5 != (longlong *)0x0) {
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
      lVar14 = lVar14 + (longlong)iVar9 * 0x90;
      plVar5 = *(longlong **)(lVar14 + 0x40);
      if (plVar5 != (longlong *)0x0) {
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
      if (*(longlong **)(lVar14 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar14 + 0x18) + 0x10))();
      }
      if (*(longlong **)(lVar14 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar14 + 8) + 0x10))();
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_140d97bc9;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140d97bc9:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d97c6c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140d97c6c FUN_140d97c6c body=113 status=ok
// SIG undefined FUN_140d97c6c(void)

void FUN_140d97c6c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 140d97cde FUN_140d97cde body=9 status=ok
// SIG undefined FUN_140d97cde(void)

void FUN_140d97cde(longlong param_1)

{
  FUN_140d97ce8(param_1 + 0x10);
  return;
}



// FUNCTION 140d97ce8 FUN_140d97ce8 body=227 status=ok
// SIG undefined FUN_140d97ce8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d97ce8(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b057db0;
  param_1[7] = &PTR_FUN_14b023b20;
  param_1[10] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x10))();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 9) != '\0') &&
     (plVar1 = (longlong *)param_1[8], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d97dcc FUN_140d97dcc body=40 status=ok
// SIG undefined FUN_140d97dcc(void)

undefined8 FUN_140d97dcc(undefined8 param_1,int param_2)

{
  FUN_140d97df4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d97df4 FUN_140d97df4 body=1184 status=ok
// SIG undefined FUN_140d97df4(void)

void FUN_140d97df4(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b966980;
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xc5) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xc5) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xc5) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x61c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x61c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xc2) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xc2) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xc2) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x604) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x604) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xbf) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xbf) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xbf) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x5ec) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x5ec) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  }
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  FUN_140d98294(param_1[0xb4],*(undefined4 *)(param_1 + 0xb5));
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  FUN_140d982d0(param_1[0xb2],*(undefined4 *)(param_1 + 0xb3));
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xad],*(undefined4 *)(param_1 + 0xae));
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9830c(param_1);
  return;
}



// FUNCTION 140d98294 FUN_140d98294 body=60 status=ok
// SIG undefined FUN_140d98294(void)

void FUN_140d98294(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d982d0 FUN_140d982d0 body=60 status=ok
// SIG undefined FUN_140d982d0(void)

void FUN_140d982d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9830c FUN_140d9830c body=2329 status=ok
// SIG undefined FUN_140d9830c(void)

void FUN_140d9830c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b3f6c30;
  param_1[0xa2] = 0;
  param_1[0xa5] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)((longlong)param_1 + 0x544) != 0) {
    FUN_140115c12(param_1 + 0xa7,0);
  }
  param_1[0xa6] = 0;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x9c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x9c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x4d4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x4d4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x99) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x99) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x99) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x4bc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x4bc) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x95) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x95) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  FUN_140cf820c(param_1 + 0x8a,1);
  param_1[0x84] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (*(int *)((longlong)param_1 + 0x43c) != 0) {
    FUN_140115c12(param_1 + 0x86,0);
  }
  param_1[0x85] = 0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_14095cb81(param_1[0x5e],*(undefined4 *)(param_1 + 0x5f));
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_14095cb81(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_14095c787(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_14095c750(param_1 + 0x4f);
  FUN_144760e21(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x45) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x45) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xe) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 100) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xb) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xb) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  FUN_140a32a72(param_1 + 1);
  return;
}



// FUNCTION 140d98c26 FUN_140d98c26 body=6319 status=ok
// SIG undefined FUN_140d98c26(void)

void FUN_140d98c26(undefined8 param_1,undefined **param_2,longlong param_3,int param_4,uint param_5,
                  undefined8 *param_6)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined **ppuVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  char cVar23;
  float fVar24;
  uint uVar25;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  code *local_210;
  char local_1f9;
  undefined **local_1f8;
  longlong local_1f0;
  undefined **local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  undefined **local_1d0;
  byte local_1c2;
  byte local_1c1;
  undefined **local_1c0;
  ulonglong local_1b8;
  undefined **local_1b0;
  undefined **local_1a8;
  undefined *local_1a0 [8];
  undefined8 local_160;
  undefined1 *local_158;
  undefined1 local_150 [64];
  undefined8 local_110;
  undefined **local_108;
  undefined2 local_100;
  longlong local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined2 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (((*(char *)(param_3 + 0x70) != '\x01') || ((int)param_5 < 0)) ||
     (*(int *)(param_3 + 0x38) <= (int)param_5)) goto LAB_140d9a126;
  lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x30) + (ulonglong)param_5 * 0x10);
  plVar21 = (longlong *)
            ((longlong)*(int *)(lVar19 + (longlong)param_4 * 0x10) * 0x28 +
            *(longlong *)(param_3 + 0x40));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_218 = FUN_140342cba();
    local_210 = FUN_1468c7f1e;
    local_220 = 0;
    local_228 = 0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  plVar7 = (longlong *)*plVar21;
  if (((plVar7 == (longlong *)0x0) || (*(int *)((longlong)plVar21 + 0xc) == 0)) ||
     ((uVar25 = *(uint *)(plVar21 + 1), (int)uVar25 < 0 ||
      ((((DAT_14c9647dc <= (int)uVar25 ||
         (lVar13 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar13 == 0)) ||
        (*(int *)(lVar13 + 0x10) != *(int *)((longlong)plVar21 + 0xc))) ||
       ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))))) {
    if ((int)plVar21[3] != 0) {
      plVar7 = (longlong *)FUN_14007daa4(plVar21,0,0);
      if (plVar7 == (longlong *)0x0) {
LAB_140d99238:
        if (*plVar21 != 0) {
          *plVar21 = 0;
          plVar21[1] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_248);
        }
        goto LAB_140d9a126;
      }
      puVar10 = (undefined *)plVar7[1];
      if (DAT_14c951a40 == 0) {
        bVar22 = puVar10 != (undefined *)0x0;
        if (puVar10 != &DAT_14c951a38 && bVar22) {
          do {
            puVar10 = *(undefined **)(puVar10 + 0x30);
            bVar22 = puVar10 != (undefined *)0x0;
            if (puVar10 == &DAT_14c951a38) break;
          } while (puVar10 != (undefined *)0x0);
        }
        if (!bVar22) goto LAB_140d99238;
      }
      else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a40) == 0) goto LAB_140d99238;
      *plVar21 = (longlong)plVar7;
    }
    if (plVar7 == (longlong *)0x0) goto LAB_140d9a126;
  }
  local_1a8 = local_1a0;
  local_160 = 0x4000000000;
  local_1f9 = param_2 != (undefined **)0x0;
  ppuVar12 = param_2;
  local_1e0 = param_3;
  local_1d8 = plVar7;
  local_1c0 = param_2;
  cVar23 = local_1f9;
  bVar22 = (bool)local_1f9;
  if (((bool)local_1f9) && ((int)plVar21[4] < *(int *)((longlong)plVar21 + 0x24))) {
    lVar13 = (longlong)(int)plVar21[4];
    do {
      plVar7 = (longlong *)(*(longlong *)(param_3 + 0x60) + lVar13 * 0x40);
      bVar6 = *(byte *)(*(longlong *)(param_3 + 0x60) + 0x39 + lVar13 * 0x40);
      if (bVar6 == 0) {
        ppuVar12 = (undefined **)
                   ((longlong)ppuVar12 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
      }
      else {
        uVar25 = (uint)bVar6;
        if (uVar25 == 1) {
          cVar18 = (char)plVar7[7];
          if (cVar18 == '\x03') {
            local_1f8 = (undefined **)
                        ((longlong)ppuVar12 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
            local_1f0 = lVar19;
            ppuVar12 = (undefined **)FUN_14479d2ce(local_1f8);
            param_3 = local_1e0;
            lVar19 = local_1f0;
            cVar23 = local_1f9;
            if (ppuVar12 == (undefined **)0x0) {
              if (local_1f8[1] == (undefined *)0x0) goto LAB_140d9a111;
              ppuVar12 = (undefined **)FUN_140007850();
              cVar23 = (*(code *)PTR_FUN_14c758760)();
              param_3 = local_1e0;
              if ((ppuVar12 == (undefined **)0x0) || (cVar23 == '\0')) {
                FUN_14485c47a(local_1f8,ppuVar12);
                param_3 = local_1e0;
                if (ppuVar12 == (undefined **)0x0) goto LAB_140d9a111;
              }
              else {
                fVar24 = *(float *)((longlong)ppuVar12 + 0xc);
                if ((int)fVar24 < DAT_14c9647dc) {
                  lVar19 = (ulonglong)(((uint)fVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar24 >> 0x10) * 8);
                }
                else {
                  lVar19 = 0;
                }
                if ((*(uint *)(lVar19 + 8) & 0x8400000) == 0) {
                  FUN_14485c47a(local_1f8,ppuVar12);
                }
              }
              lVar19 = local_1f0;
              cVar23 = local_1f9;
              if (((uint)*(float *)(ppuVar12 + 1) >> 0x1e & 1) != 0) {
                ppuVar12 = (undefined **)0x0;
              }
            }
          }
          else if (cVar18 == '\x02') {
            ppuVar12 = (undefined **)
                       ((longlong)ppuVar12 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
            local_1f0 = lVar19;
LAB_140d9a0aa:
            ppuVar12 = (undefined **)FUN_14479d2ce(ppuVar12);
            param_3 = local_1e0;
            lVar19 = local_1f0;
            cVar23 = local_1f9;
          }
          else {
            param_3 = local_1e0;
            local_1f0 = lVar19;
            cVar23 = local_1f9;
            if (cVar18 == '\x01') {
              ppuVar12 = *(undefined ***)
                          ((longlong)ppuVar12 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
            }
          }
        }
        else if (uVar25 == 2) {
          local_1f8 = ppuVar12;
          local_1f0 = lVar19;
          lVar19 = FUN_1446ddbd2();
          if (((*plVar7 == 0) || (cVar23 = FUN_144729dda(plVar7 + 1), cVar23 == '\0')) &&
             ((int)plVar7[3] != 0)) {
            lVar20 = FUN_14007daa4(plVar7,0,0);
            if (lVar20 == 0) {
LAB_140d9a103:
              if (*plVar7 != 0) {
                *plVar7 = 0;
                plVar7[1] = 0;
              }
              goto LAB_140d9a111;
            }
            lVar8 = *(longlong *)(lVar20 + 8);
            if (*(ulonglong *)(lVar19 + 8) == 0) {
              bVar22 = lVar8 != 0;
              if (lVar8 != lVar19 && bVar22) {
                do {
                  lVar8 = *(longlong *)(lVar8 + 0x30);
                  bVar22 = lVar8 != 0;
                  if (lVar8 == lVar19) break;
                } while (lVar8 != 0);
              }
              if (!bVar22) goto LAB_140d9a103;
            }
            else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar19 + 8)) == 0)
            goto LAB_140d9a103;
            *plVar7 = lVar20;
          }
          else {
            lVar20 = *plVar7;
          }
          if (lVar20 == 0) goto LAB_140d9a111;
          uVar25 = *(uint *)((longlong)plVar7 + 0x34);
          local_1e8 = (undefined **)CONCAT71(local_1e8._1_7_,*(undefined1 *)(lVar20 + 0x70));
          (**(code **)(**(longlong **)(lVar20 + 0x78) + 0x178))();
          iVar1 = (int)plVar7[6];
          if (((longlong)iVar1 < 0) ||
             (puVar15 = (ulonglong *)((longlong)local_1f8 + (ulonglong)uVar25),
             (int)puVar15[1] <= iVar1)) goto LAB_140d9a111;
          if (((ulonglong)local_1e8 & 1) == 0) {
            uVar16 = *puVar15;
          }
          else {
            uVar16 = *puVar15;
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar15 + ((longlong)uVar16 >> 0x18);
            }
          }
          ppuVar12 = (undefined **)
                     (uVar16 + (longlong)iVar1 *
                               (longlong)*(int *)(*(longlong *)(lVar20 + 0x78) + 0x34));
          param_3 = local_1e0;
          param_2 = local_1c0;
          lVar19 = local_1f0;
          cVar23 = local_1f9;
        }
        else {
          if (1 < uVar25 - 3) goto LAB_140d98dba;
          if (plVar7[4] == 0) goto LAB_140d9a111;
          local_1f8 = ppuVar12;
          local_1f0 = lVar19;
          FUN_147cc0508(&local_1a8);
          iVar1 = *(int *)((longlong)plVar7 + 0x2c);
          local_1d0 = local_1a8;
          local_1e8 = (undefined **)FUN_1446ddbd2();
          if (((*plVar7 == 0) || (cVar23 = FUN_144729dda(plVar7 + 1), cVar23 == '\0')) &&
             ((int)plVar7[3] != 0)) {
            lVar19 = FUN_14007daa4(plVar7,0,0);
            if (lVar19 == 0) {
LAB_140d9a199:
              if (*plVar7 != 0) {
                *plVar7 = 0;
                plVar7[1] = 0;
              }
            }
            else {
              lVar20 = *(longlong *)(lVar19 + 8);
              if (*(ulonglong *)((longlong)local_1e8 + 8) == 0) {
                bVar22 = lVar20 != 0;
                if ((undefined **)lVar20 != local_1e8 && bVar22) {
                  do {
                    lVar20 = *(longlong *)(lVar20 + 0x30);
                    bVar22 = lVar20 != 0;
                    if ((undefined **)lVar20 == local_1e8) break;
                  } while (lVar20 != 0);
                }
                if (!bVar22) goto LAB_140d9a199;
              }
              else if ((*(ulonglong *)(lVar20 + 0x18) & *(ulonglong *)((longlong)local_1e8 + 8)) ==
                       0) goto LAB_140d9a199;
              *plVar7 = lVar19;
            }
          }
          local_1e8 = (undefined **)(-(longlong)iVar1 & (longlong)local_1d0 + (longlong)iVar1 + -1);
          plVar4 = (longlong *)*plVar7;
          if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
            (**(code **)(*plVar4 + 0x160))(plVar4,local_1e8);
          }
          else {
            memset(local_1e8,0,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
          lVar19 = plVar7[4];
          if (*(char *)((longlong)plVar7 + 0x39) == '\x04') {
            lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            local_80 = *(undefined8 *)(lVar19 + 0x50);
            local_100 = 0x100;
            local_108 = &PTR_FUN_149ead850;
            local_f0 = local_1f8;
            local_e8 = *(undefined8 *)(lVar19 + 0x60);
            local_a0 = 0;
            local_98 = 0x800000000;
            local_e0 = 0;
            uStack_d8 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_78 = 0;
            local_68 = 0;
            local_70 = *(longlong *)(lVar20 + 0xdb8);
            *(undefined ****)(lVar20 + 0xdb8) = &local_108;
            if (local_70 != 0) {
              local_68 = (ushort)*(byte *)(local_70 + 0xa1) << 8;
            }
            local_f8 = lVar19;
            FUN_1448102f8(lVar19,local_1f8,&local_108,local_1e8);
            local_108 = &PTR_FUN_149ead850;
            *(longlong *)(lVar20 + 0xdb8) = local_70;
            if (local_70 != 0) {
              *(byte *)(local_70 + 0xa1) = *(byte *)(local_70 + 0xa1) | local_68._1_1_;
            }
            if (local_a0 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            (**(code **)(*local_1f8 + 0x248))();
          }
          cVar18 = (char)plVar7[7];
          if (cVar18 == '\x03') {
            ppuVar12 = (undefined **)FUN_14479d2ce(local_1e8);
            param_3 = local_1e0;
            lVar19 = local_1f0;
            cVar23 = local_1f9;
            if (ppuVar12 == (undefined **)0x0) {
              if (local_1e8[1] == (undefined *)0x0) goto LAB_140d9a111;
              ppuVar12 = (undefined **)FUN_140007850();
              cVar23 = (*(code *)PTR_FUN_14c758760)();
              param_3 = local_1e0;
              if ((ppuVar12 == (undefined **)0x0) || (cVar23 == '\0')) {
                FUN_14485c47a(local_1e8);
                param_3 = local_1e0;
                if (ppuVar12 == (undefined **)0x0) goto LAB_140d9a111;
              }
              else {
                fVar24 = *(float *)((longlong)ppuVar12 + 0xc);
                if ((int)fVar24 < DAT_14c9647dc) {
                  lVar19 = (ulonglong)(((uint)fVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar24 >> 0x10) * 8);
                }
                else {
                  lVar19 = 0;
                }
                if ((*(uint *)(lVar19 + 8) & 0x8400000) == 0) {
                  FUN_14485c47a(local_1e8);
                }
              }
              lVar19 = local_1f0;
              cVar23 = local_1f9;
              if (((uint)*(float *)(ppuVar12 + 1) >> 0x1e & 1) != 0) {
                ppuVar12 = (undefined **)0x0;
              }
            }
          }
          else {
            ppuVar12 = local_1e8;
            if (cVar18 == '\x02') goto LAB_140d9a0aa;
            param_3 = local_1e0;
            lVar19 = local_1f0;
            cVar23 = local_1f9;
            if (cVar18 == '\x01') {
              ppuVar12 = (undefined **)*local_1e8;
            }
          }
        }
      }
LAB_140d98dba:
      bVar22 = ppuVar12 != (undefined **)0x0;
    } while ((bVar22) && (lVar13 = lVar13 + 1, lVar13 < *(int *)((longlong)plVar21 + 0x24)));
  }
  if (bVar22) {
    lVar19 = lVar19 + (longlong)param_4 * 0x10;
    lVar20 = (longlong)*(int *)(lVar19 + 4);
    ppuVar11 = ppuVar12;
    lVar13 = lVar19;
    if (*(int *)(lVar19 + 4) < *(int *)(lVar19 + 8)) {
      do {
        local_1f0 = lVar13;
        local_1f8 = ppuVar11;
        plVar21 = (longlong *)(lVar20 * 0x28 + *(longlong *)(param_3 + 0x50));
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), lVar19 = local_1f0, ppuVar12 = local_1f8,
           cVar23 = local_1f9, DAT_14c951a88 == -1)) {
          local_218 = FUN_140342cba();
          local_210 = FUN_1468c7f1e;
          local_220 = 0;
          local_228 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
          lVar19 = local_1f0;
          ppuVar12 = local_1f8;
          cVar23 = local_1f9;
        }
        local_1e8 = (undefined **)*plVar21;
        if ((((local_1e8 == (undefined **)0x0) || (*(int *)((longlong)plVar21 + 0xc) == 0)) ||
            (uVar25 = *(uint *)(plVar21 + 1), (int)uVar25 < 0)) ||
           (((DAT_14c9647dc <= (int)uVar25 ||
             (lVar13 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar13 == 0))
            || ((*(int *)(lVar13 + 0x10) != *(int *)((longlong)plVar21 + 0xc) ||
                ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))))) {
          if ((int)plVar21[3] == 0) {
LAB_140d9910c:
            if (local_1e8 != (undefined **)0x0) goto LAB_140d98e94;
          }
          else {
            local_1e8 = (undefined **)FUN_14007daa4(plVar21,0,0);
            param_3 = local_1e0;
            lVar19 = local_1f0;
            ppuVar12 = local_1f8;
            cVar23 = local_1f9;
            if (local_1e8 != (undefined **)0x0) {
              puVar10 = local_1e8[1];
              if (DAT_14c951a40 == 0) {
                bVar22 = puVar10 != (undefined *)0x0;
                if (puVar10 != &DAT_14c951a38 && bVar22) {
                  do {
                    puVar10 = *(undefined **)(puVar10 + 0x30);
                    bVar22 = puVar10 != (undefined *)0x0;
                    if (puVar10 == &DAT_14c951a38) break;
                  } while (puVar10 != (undefined *)0x0);
                }
                if (bVar22) goto LAB_140d9996d;
              }
              else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a40) != 0) {
LAB_140d9996d:
                *plVar21 = (longlong)local_1e8;
                goto LAB_140d9910c;
              }
            }
            if (*plVar21 != 0) {
              *plVar21 = 0;
              plVar21[1] = 0;
            }
          }
          goto LAB_140d990ec;
        }
LAB_140d98e94:
        local_110 = 0x4000000000;
        local_158 = local_150;
        cVar18 = cVar23;
        if ((param_2 != (undefined **)0x0) && ((int)plVar21[4] < *(int *)((longlong)plVar21 + 0x24))
           ) {
          lVar13 = (longlong)(int)plVar21[4];
          do {
            plVar7 = (longlong *)(*(longlong *)(param_3 + 0x60) + lVar13 * 0x40);
            bVar6 = *(byte *)(*(longlong *)(param_3 + 0x60) + 0x39 + lVar13 * 0x40);
            if (bVar6 == 0) {
              param_2 = (undefined **)
                        ((longlong)param_2 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
              goto LAB_140d98ef7;
            }
            uVar25 = (uint)bVar6;
            if (uVar25 == 2) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), lVar19 = local_1f0, ppuVar12 = local_1f8,
                 cVar18 = local_1f9, DAT_14c951a88 == -1)) {
                local_218 = FUN_140342cba();
                local_210 = FUN_1468c7f1e;
                local_220 = 0;
                local_228 = 0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
                lVar19 = local_1f0;
                ppuVar12 = local_1f8;
                cVar18 = local_1f9;
              }
              lVar8 = *plVar7;
              if (((((lVar8 == 0) || (*(int *)((longlong)plVar7 + 0xc) == 0)) ||
                   (uVar25 = *(uint *)(plVar7 + 1), (int)uVar25 < 0)) ||
                  ((DAT_14c9647dc <= (int)uVar25 ||
                   (lVar14 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8),
                   lVar14 == 0)))) ||
                 ((*(int *)(lVar14 + 0x10) != *(int *)((longlong)plVar7 + 0xc) ||
                  ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))) {
                if ((int)plVar7[3] != 0) {
                  lVar8 = FUN_14007daa4(plVar7,0,0);
                  lVar19 = local_1f0;
                  ppuVar12 = local_1f8;
                  cVar18 = local_1f9;
                  if (lVar8 == 0) {
LAB_140d992ec:
                    if (*plVar7 != 0) {
                      *plVar7 = 0;
                      plVar7[1] = 0;
                    }
                    goto LAB_140d990c6;
                  }
                  puVar10 = *(undefined **)(lVar8 + 8);
                  if (DAT_14c951a40 == 0) {
                    bVar22 = puVar10 != (undefined *)0x0;
                    if (puVar10 != &DAT_14c951a38 && bVar22) {
                      do {
                        puVar10 = *(undefined **)(puVar10 + 0x30);
                        bVar22 = puVar10 != (undefined *)0x0;
                        if (puVar10 == &DAT_14c951a38) break;
                      } while (puVar10 != (undefined *)0x0);
                    }
                    if (!bVar22) goto LAB_140d992ec;
                  }
                  else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a40) == 0)
                  goto LAB_140d992ec;
                  *plVar7 = lVar8;
                }
                if (lVar8 == 0) goto LAB_140d990c6;
              }
              uVar25 = *(uint *)((longlong)plVar7 + 0x34);
              bVar6 = *(byte *)(lVar8 + 0x70);
              (**(code **)(**(longlong **)(lVar8 + 0x78) + 0x178))();
              iVar1 = (int)plVar7[6];
              lVar19 = local_1f0;
              ppuVar12 = local_1f8;
              cVar18 = local_1f9;
              if (((longlong)iVar1 < 0) ||
                 (puVar15 = (ulonglong *)((longlong)param_2 + (ulonglong)uVar25),
                 (int)puVar15[1] <= iVar1)) goto LAB_140d990c6;
              if ((bVar6 & 1) == 0) {
                uVar16 = *puVar15;
              }
              else {
                uVar16 = *puVar15;
                if ((uVar16 & 1) != 0) {
                  uVar16 = (longlong)puVar15 + ((longlong)uVar16 >> 0x18);
                }
              }
              param_2 = (undefined **)
                        (uVar16 + (longlong)iVar1 *
                                  (longlong)*(int *)(*(longlong *)(lVar8 + 0x78) + 0x34));
              param_3 = local_1e0;
            }
            else {
              param_3 = local_1e0;
              lVar19 = local_1f0;
              ppuVar12 = local_1f8;
              cVar18 = local_1f9;
              if (uVar25 == 1) {
                cVar23 = (char)plVar7[7];
                if (cVar23 == '\x03') {
                  ppuVar17 = (undefined **)
                             ((longlong)param_2 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
                  param_2 = (undefined **)FUN_14479d2ce(ppuVar17);
                  param_3 = local_1e0;
                  lVar19 = local_1f0;
                  ppuVar12 = local_1f8;
                  cVar18 = local_1f9;
                  if (param_2 == (undefined **)0x0) {
                    if (ppuVar17[1] == (undefined *)0x0) goto LAB_140d990c6;
                    ppuVar11 = (undefined **)FUN_140007850();
                    cVar23 = (*(code *)PTR_FUN_14c758760)();
                    if ((ppuVar11 != (undefined **)0x0) && (cVar23 != '\0')) {
                      fVar24 = *(float *)((longlong)ppuVar11 + 0xc);
                      if ((int)fVar24 < DAT_14c9647dc) {
                        lVar19 = (ulonglong)(((uint)fVar24 & 0xffff) * 0x18) +
                                 *(longlong *)
                                  (DAT_14c9647c8 + (ulonglong)((uint)fVar24 >> 0x10) * 8);
                      }
                      else {
                        lVar19 = 0;
                      }
                      uVar25 = *(uint *)(lVar19 + 8);
                      goto joined_r0x000140d9a009;
                    }
LAB_140d99bd4:
                    FUN_14485c47a(ppuVar17,ppuVar11);
                    lVar19 = local_1f0;
                    ppuVar12 = local_1f8;
                    cVar18 = local_1f9;
                    if (ppuVar11 == (undefined **)0x0) goto LAB_140d990c6;
LAB_140d99bf4:
                    param_2 = (undefined **)0x0;
                    param_3 = local_1e0;
                    lVar19 = local_1f0;
                    ppuVar12 = local_1f8;
                    cVar18 = local_1f9;
                    if (((uint)*(float *)(ppuVar11 + 1) >> 0x1e & 1) == 0) {
                      param_2 = ppuVar11;
                    }
                  }
                }
                else if (cVar23 == '\x02') {
                  ppuVar12 = (undefined **)
                             ((longlong)param_2 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
LAB_140d99bb0:
                  param_2 = (undefined **)FUN_14479d2ce(ppuVar12);
                  param_3 = local_1e0;
                  lVar19 = local_1f0;
                  ppuVar12 = local_1f8;
                  cVar18 = local_1f9;
                }
                else if (cVar23 == '\x01') {
                  param_2 = *(undefined ***)
                             ((longlong)param_2 + (ulonglong)*(uint *)((longlong)plVar7 + 0x34));
                }
              }
              else {
                if (1 < uVar25 - 3) goto LAB_140d98ef7;
                if (plVar7[4] == 0) goto LAB_140d990c6;
                FUN_147cc0508(&local_158);
                puVar5 = local_158;
                iVar1 = *(int *)((longlong)plVar7 + 0x2c);
                lVar19 = FUN_1446ddbd2();
                if (((*plVar7 == 0) || (cVar23 = FUN_144729dda(plVar7 + 1), cVar23 == '\0')) &&
                   ((int)plVar7[3] != 0)) {
                  lVar8 = FUN_14007daa4(plVar7,0,0);
                  if (lVar8 == 0) {
LAB_140d99c38:
                    if (*plVar7 != 0) {
                      *plVar7 = 0;
                      plVar7[1] = 0;
                    }
                  }
                  else {
                    lVar14 = *(longlong *)(lVar8 + 8);
                    if (*(ulonglong *)(lVar19 + 8) == 0) {
                      bVar22 = lVar14 != 0;
                      if (lVar14 != lVar19 && bVar22) {
                        do {
                          lVar14 = *(longlong *)(lVar14 + 0x30);
                          bVar22 = lVar14 != 0;
                          if (lVar14 == lVar19) break;
                        } while (lVar14 != 0);
                      }
                      if (!bVar22) goto LAB_140d99c38;
                    }
                    else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar19 + 8)) == 0)
                    goto LAB_140d99c38;
                    *plVar7 = lVar8;
                  }
                }
                local_1d0 = (undefined **)
                            (-(longlong)iVar1 & (ulonglong)(puVar5 + (longlong)iVar1 + -1));
                plVar4 = (longlong *)*plVar7;
                if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
                  (**(code **)(*plVar4 + 0x160))(plVar4,local_1d0);
                }
                else {
                  memset(local_1d0,0,
                         (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
                }
                lVar19 = plVar7[4];
                if (*(char *)((longlong)plVar7 + 0x39) == '\x04') {
                  lVar8 = *(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  local_80 = *(undefined8 *)(lVar19 + 0x50);
                  local_100 = 0x100;
                  local_108 = &PTR_FUN_149ead850;
                  local_e8 = *(undefined8 *)(lVar19 + 0x60);
                  local_a0 = 0;
                  local_98 = 0x800000000;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  local_78 = 0;
                  local_68 = 0;
                  local_70 = *(longlong *)(lVar8 + 0xdb8);
                  *(undefined ****)(lVar8 + 0xdb8) = &local_108;
                  if (local_70 != 0) {
                    local_68 = (ushort)*(byte *)(local_70 + 0xa1) << 8;
                  }
                  local_f8 = lVar19;
                  local_f0 = param_2;
                  FUN_1448102f8(lVar19,param_2,&local_108,local_1d0);
                  local_108 = &PTR_FUN_149ead850;
                  *(longlong *)(lVar8 + 0xdb8) = local_70;
                  if (local_70 != 0) {
                    *(byte *)(local_70 + 0xa1) = *(byte *)(local_70 + 0xa1) | local_68._1_1_;
                  }
                  if (local_a0 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  (**(code **)(*param_2 + 0x248))(param_2);
                }
                cVar23 = (char)plVar7[7];
                if (cVar23 == '\x03') {
                  param_2 = (undefined **)FUN_14479d2ce(local_1d0);
                  param_3 = local_1e0;
                  lVar19 = local_1f0;
                  ppuVar12 = local_1f8;
                  cVar18 = local_1f9;
                  if (param_2 == (undefined **)0x0) {
                    if (local_1d0[1] != (undefined *)0x0) {
                      ppuVar11 = (undefined **)FUN_140007850();
                      cVar23 = (*(code *)PTR_FUN_14c758760)();
                      ppuVar17 = local_1d0;
                      if ((ppuVar11 == (undefined **)0x0) || (cVar23 == '\0')) goto LAB_140d99bd4;
                      fVar24 = *(float *)((longlong)ppuVar11 + 0xc);
                      if ((int)fVar24 < DAT_14c9647dc) {
                        lVar19 = (ulonglong)(((uint)fVar24 & 0xffff) * 0x18) +
                                 *(longlong *)
                                  (DAT_14c9647c8 + (ulonglong)((uint)fVar24 >> 0x10) * 8);
                      }
                      else {
                        lVar19 = 0;
                      }
                      uVar25 = *(uint *)(lVar19 + 8);
joined_r0x000140d9a009:
                      if ((uVar25 & 0x8400000) == 0) {
                        FUN_14485c47a(ppuVar17,ppuVar11);
                      }
                      goto LAB_140d99bf4;
                    }
                    goto LAB_140d990c6;
                  }
                }
                else {
                  ppuVar12 = local_1d0;
                  if (cVar23 == '\x02') goto LAB_140d99bb0;
                  param_2 = local_1d0;
                  param_3 = local_1e0;
                  lVar19 = local_1f0;
                  ppuVar12 = local_1f8;
                  cVar18 = local_1f9;
                  if (cVar23 == '\x01') {
                    param_2 = (undefined **)*local_1d0;
                  }
                }
              }
            }
LAB_140d98ef7:
            cVar23 = param_2 != (undefined **)0x0;
          } while (((bool)cVar23) &&
                  (lVar13 = lVar13 + 1, lVar13 < *(int *)((longlong)plVar21 + 0x24)));
        }
        plVar21 = local_1d8;
        ppuVar11 = local_1e8;
        if (cVar23 == '\0') goto LAB_140d990c6;
        pcVar2 = (code *)*param_6;
        uVar3 = param_6[1];
        switch(*(undefined1 *)(lVar19 + 0xc)) {
        case 1:
          memcpy(param_2,ppuVar12,(longlong)*(int *)((longlong)local_1d8 + 0x34));
          break;
        case 2:
          if (param_2 != ppuVar12) {
            if ((*(byte *)((longlong)local_1d8 + 0x3b) & 0x40) == 0) {
              (**(code **)(*local_1d8 + 0x100))(local_1d8,param_2,local_1f8,(int)local_1d8[6]);
              ppuVar11 = local_1e8;
            }
            else {
              memcpy(param_2,local_1f8,
                     (longlong)(int)local_1d8[6] * (longlong)*(int *)((longlong)local_1d8 + 0x34));
              ppuVar11 = local_1e8;
            }
          }
          break;
        case 3:
          if ((*(byte *)((longlong)ppuVar12 + (ulonglong)*(byte *)((longlong)local_1d8 + 0x71)) &
              *(byte *)((longlong)local_1d8 + 0x73)) == 0) {
            bVar6 = 0;
          }
          else {
            bVar6 = *(byte *)((longlong)local_1e8 + 0x72);
          }
          *(byte *)((longlong)param_2 + (ulonglong)*(byte *)((longlong)local_1e8 + 0x71)) =
               ~*(byte *)((longlong)local_1e8 + 0x73) &
               *(byte *)((longlong)param_2 + (ulonglong)*(byte *)((longlong)local_1e8 + 0x71)) |
               bVar6;
          break;
        case 4:
          FUN_1449b16b6(local_1e8[0xe],param_2,ppuVar12,1);
          break;
        case 5:
          lVar19 = (**(code **)(*local_1d8 + 0x210))(local_1d8,ppuVar12);
          if ((lVar19 != 0) || ((*(byte *)((longlong)ppuVar11 + 0x39) & 0x10) == 0)) {
            (**(code **)(*ppuVar11 + 0x1f0))(ppuVar11,param_2,lVar19);
          }
          break;
        case 6:
          puVar10 = *ppuVar12;
          goto LAB_140d9978c;
        case 7:
          local_1c1 = *(byte *)(local_1d8 + 0xe);
          (**(code **)(*(longlong *)local_1d8[0xf] + 0x178))();
          iVar1 = *(int *)(plVar21[0xf] + 0x34);
          local_1c2 = *(byte *)(ppuVar11 + 0xe);
          (**(code **)(*(longlong *)ppuVar11[0xf] + 0x178))();
          fVar24 = *(float *)(param_2 + 1);
          if ((int)*(float *)(local_1f8 + 1) < (int)*(float *)(param_2 + 1)) {
            fVar24 = *(float *)(local_1f8 + 1);
          }
          if (0 < (int)fVar24) {
            local_1d0 = (undefined **)(longlong)*(int *)(ppuVar11[0xf] + 0x34);
            local_1b8 = (ulonglong)(uint)fVar24;
            lVar19 = 0;
            lVar13 = 0;
            do {
              if (*(float *)(local_1f8 + 1) == 0.0) {
                puVar10 = (undefined *)0x0;
              }
              else {
                if ((local_1c1 & 1) == 0) {
                  puVar10 = *local_1f8;
                }
                else {
                  puVar10 = *local_1f8;
                  if (((ulonglong)puVar10 & 1) != 0) {
                    puVar10 = (undefined *)(((longlong)puVar10 >> 0x18) + (longlong)local_1f8);
                  }
                }
                puVar10 = puVar10 + lVar19;
              }
              if (*(float *)(param_2 + 1) == 0.0) {
                puVar9 = (undefined *)0x0;
              }
              else {
                if ((local_1c2 & 1) == 0) {
                  puVar9 = *param_2;
                }
                else {
                  puVar9 = *param_2;
                  if (((ulonglong)puVar9 & 1) != 0) {
                    puVar9 = (undefined *)(((longlong)puVar9 >> 0x18) + (longlong)param_2);
                  }
                }
                puVar9 = puVar9 + lVar13;
              }
              if (puVar9 != puVar10) {
                plVar21 = (longlong *)local_1d8[0xf];
                if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,puVar9,puVar10,1);
                }
                else {
                  memcpy(puVar9,puVar10,(longlong)*(int *)((longlong)plVar21 + 0x34));
                }
              }
              lVar13 = lVar13 + (longlong)local_1d0;
              lVar19 = lVar19 + iVar1;
              local_1b8 = local_1b8 - 1;
            } while (local_1b8 != 0);
            local_1b8 = 0;
            ppuVar11 = local_1e8;
          }
          break;
        case 8:
          *(bool *)param_2 =
               (*(byte *)((longlong)ppuVar12 + (ulonglong)*(byte *)((longlong)local_1d8 + 0x71)) &
               *(byte *)((longlong)local_1d8 + 0x73)) != 0;
          break;
        case 9:
          *(uint *)param_2 =
               (uint)((*(byte *)((longlong)ppuVar12 +
                                (ulonglong)*(byte *)((longlong)local_1d8 + 0x71)) &
                      *(byte *)((longlong)local_1d8 + 0x73)) != 0);
          break;
        case 10:
          *param_2 = (undefined *)
                     (ulonglong)
                     ((*(byte *)((longlong)ppuVar12 +
                                (ulonglong)*(byte *)((longlong)local_1d8 + 0x71)) &
                      *(byte *)((longlong)local_1d8 + 0x73)) != 0);
          break;
        case 0xb:
          if ((*(byte *)((longlong)ppuVar12 + (ulonglong)*(byte *)((longlong)local_1d8 + 0x71)) &
              *(byte *)((longlong)local_1d8 + 0x73)) == 0) {
            fVar24 = 0.0;
          }
          else {
            fVar24 = 1.0;
          }
          goto LAB_140d9918d;
        case 0xc:
          if ((*(byte *)((longlong)ppuVar12 + (ulonglong)*(byte *)((longlong)local_1d8 + 0x71)) &
              *(byte *)((longlong)local_1d8 + 0x73)) == 0) {
            uVar25 = 0;
          }
          else {
            uVar25 = 0x3ff00000;
          }
          *param_2 = (undefined *)((ulonglong)uVar25 << 0x20);
          break;
        case 0xd:
          *(uint *)param_2 = (uint)*(byte *)ppuVar12;
          break;
        case 0xe:
          puVar10 = (undefined *)(ulonglong)*(byte *)ppuVar12;
          goto LAB_140d9978c;
        case 0xf:
          fVar24 = (float)*(byte *)ppuVar12;
          goto LAB_140d9918d;
        case 0x10:
          puVar10 = (undefined *)(double)*(byte *)ppuVar12;
          goto LAB_140d993e5;
        case 0x11:
          puVar10 = (undefined *)(longlong)(int)*(float *)ppuVar12;
LAB_140d9978c:
          *param_2 = puVar10;
          break;
        case 0x12:
          fVar24 = (float)(int)*(float *)ppuVar12;
          goto LAB_140d9918d;
        case 0x13:
          puVar10 = (undefined *)(double)(int)*(float *)ppuVar12;
          goto LAB_140d993e5;
        case 0x14:
          puVar10 = (undefined *)(double)*(float *)ppuVar12;
LAB_140d993e5:
          *param_2 = puVar10;
          break;
        case 0x15:
          fVar24 = (float)(double)*ppuVar12;
LAB_140d9918d:
          *(float *)param_2 = fVar24;
          break;
        case 0x16:
          lVar19 = local_1d8[1];
          lVar13 = FUN_1446e6bbc();
          ppuVar11 = local_1e8;
          plVar7 = (longlong *)0x0;
          if (lVar19 == lVar13) {
            plVar7 = plVar21;
          }
          puVar10 = local_1e8[1];
          puVar9 = (undefined *)FUN_1446e6bbc();
          ppuVar12 = (undefined **)0x0;
          if (puVar10 == puVar9) {
            ppuVar12 = ppuVar11;
          }
          FUN_147cc0632(plVar7,local_1f8,ppuVar12,param_2);
          break;
        case 0x17:
          lVar19 = local_1d8[1];
          lVar13 = FUN_1446e6bbc();
          ppuVar11 = local_1e8;
          plVar7 = (longlong *)0x0;
          if (lVar19 == lVar13) {
            plVar7 = plVar21;
          }
          puVar10 = local_1e8[1];
          puVar9 = (undefined *)FUN_1446e6bbc();
          ppuVar12 = (undefined **)0x0;
          if (puVar10 == puVar9) {
            ppuVar12 = ppuVar11;
          }
          FUN_147cc074e(plVar7,local_1f8,ppuVar12,param_2);
          break;
        case 0x18:
          lVar19 = local_1d8[1];
          lVar13 = FUN_1446ebfd4();
          ppuVar11 = local_1e8;
          plVar7 = (longlong *)0x0;
          if (lVar19 == lVar13) {
            plVar7 = plVar21;
          }
          puVar10 = local_1e8[1];
          puVar9 = (undefined *)FUN_1446ebfd4();
          ppuVar12 = (undefined **)0x0;
          if (puVar10 == puVar9) {
            ppuVar12 = ppuVar11;
          }
          FUN_147cc086a(plVar7,local_1f8,ppuVar12,param_2);
          break;
        case 0x19:
          lVar19 = local_1d8[1];
          lVar13 = FUN_1446ebfd4();
          ppuVar11 = local_1e8;
          plVar7 = (longlong *)0x0;
          if (lVar19 == lVar13) {
            plVar7 = plVar21;
          }
          puVar10 = local_1e8[1];
          puVar9 = (undefined *)FUN_1446ebfd4();
          ppuVar12 = (undefined **)0x0;
          if (puVar10 == puVar9) {
            ppuVar12 = ppuVar11;
          }
          FUN_147cc0a2c(plVar7,local_1f8,ppuVar12,param_2);
        }
        local_1b0 = ppuVar11;
        local_108 = param_2;
        (*pcVar2)(uVar3,&local_1b0);
        lVar19 = local_1f0;
        ppuVar12 = local_1f8;
        cVar18 = local_1f9;
LAB_140d990c6:
        param_3 = local_1e0;
        param_2 = local_1c0;
        cVar23 = cVar18;
        if (local_158 != local_150) {
          FUN_1400020a8();
          param_3 = local_1e0;
          param_2 = local_1c0;
          lVar19 = local_1f0;
          ppuVar12 = local_1f8;
          cVar23 = local_1f9;
        }
LAB_140d990ec:
        lVar20 = lVar20 + 1;
        ppuVar11 = local_1f8;
        lVar13 = local_1f0;
      } while (lVar20 < *(int *)(lVar19 + 8));
    }
  }
LAB_140d9a111:
  if (local_1a8 != local_1a0) {
    FUN_1400020a8();
  }
LAB_140d9a126:
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9a4dc FUN_140d9a4dc body=345 status=ok
// SIG undefined FUN_140d9a4dc(void)

void FUN_140d9a4dc(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char local_98 [16];
  longlong *local_88;
  undefined4 local_70 [2];
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  local_98[0] = '\0';
  local_70[0] = 0;
  FUN_14083c332(local_98);
  FUN_1448729ea(param_1 + 0x40,local_68,local_98);
  iVar5 = FUN_14005fbd2(local_68,1);
  uVar6 = FUN_140d9a636();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,0);
  }
  local_a8 = 0;
  FUN_14083c276(lVar2,uVar6,(float)iVar5,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pppuVar7 = local_68;
    if (0x18 < local_50) {
      pppuVar7 = (undefined8 ***)local_68[0];
    }
    (*pcVar4)(pppuVar7);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_1448173f8(local_70);
  if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9a636 FUN_140d9a636 body=57 status=ok
// SIG undefined FUN_140d9a636(void)

void FUN_140d9a636(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d98 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d98 = FUN_14171c317(FUN_146574432,uVar1,L"EAtt_WeaponBehaviorVisibleAmmo");
  }
  return;
}



// FUNCTION 140d9a670 FUN_140d9a670 body=107 status=ok
// SIG undefined FUN_140d9a670(void)

void FUN_140d9a670(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140d9a6bf:
      FUN_1409264b6(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1457a15b0(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140d9a6bf;
  FUN_140d9a6dc(param_1);
  FUN_1409264b6(param_1,param_2);
  return;
}



// FUNCTION 140d9a6dc FUN_140d9a6dc body=341 status=ok
// SIG undefined FUN_140d9a6dc(void)

void FUN_140d9a6dc(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xb4 + (longlong)iVar4 * 0xb8) * 4) =
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



// FUNCTION 140d9a832 FUN_140d9a832 body=81 status=ok
// SIG undefined FUN_140d9a832(void)

void FUN_140d9a832(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  (**(code **)(*param_1 + 0x6f8))(local_28,&local_28,param_3,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


