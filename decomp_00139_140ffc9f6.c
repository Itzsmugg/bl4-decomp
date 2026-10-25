// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ffc9f6 FUN_140ffc9f6 body=965 status=ok
// SIG undefined FUN_140ffc9f6(void)

void FUN_140ffc9f6(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d2f80;
  plVar1 = param_1 + 0x4a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x4e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x41;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x45) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x44)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x44)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x3a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3d)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x26;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x29)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x29)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x23) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x22)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x22)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140ffcdc4 FUN_140ffcdc4 body=422 status=ok
// SIG undefined FUN_140ffcdc4(void)

undefined4 *
FUN_140ffcdc4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ffd02e(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_48 = uVar5;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
    uVar5 = *local_48;
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  if (((bVar2 & 1) != 0) && (uVar5 != 0)) {
    FUN_1456cec3c(uVar5);
  }
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_140ffcf6c(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar7 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140ffd204(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffcf6c FUN_140ffcf6c body=192 status=ok
// SIG undefined FUN_140ffcf6c(void)

void FUN_140ffcf6c(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = FUN_140cdd232(param_1,param_2,&local_38);
    if (iVar6 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_140334f28(param_1,*param_4,1);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_140ffcfd1;
    }
  }
  uVar5 = 0;
LAB_140ffcfd1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffd02e FUN_140ffd02e body=470 status=ok
// SIG undefined FUN_140ffd02e(void)

int * FUN_140ffd02e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
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
      FUN_14482b872(param_1,iVar11);
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
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
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
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140ffd204 FUN_140ffd204 body=745 status=ok
// SIG undefined FUN_140ffd204(void)

void FUN_140ffd204(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar15 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar15,4);
    if ((int)uVar15 < 1) goto LAB_140ffd279;
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
  } while (uVar15 != uVar3);
LAB_140ffd279:
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar8 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar16 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar16 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar16 = iVar10 + -1;
      }
      uVar8 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar8;
      }
      iVar16 = 0;
      do {
        if (uVar14 == uVar8) {
          return;
        }
        iVar16 = iVar16 + 0x20;
        uVar15 = puVar4[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar8 = 0;
      iVar16 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar11 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
  }
  if (iVar9 < iVar10) {
    uVar15 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar13 = *param_1;
      uVar11 = *(ulonglong *)(lVar13 + (longlong)iVar9 * 0x18);
      if (((bVar2 & 1) != 0) && (uVar11 != 0)) {
        FUN_1456cec3c(uVar11);
        bVar2 = DAT_14c950c29;
      }
      lVar13 = lVar13 + (longlong)iVar9 * 0x18;
      uVar3 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar11 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar11;
      *(int *)(lVar13 + 0x14) = iVar10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar13 + 0x10) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar10 = (int)param_1[5];
      iVar9 = (int)uVar8;
      lVar13 = (longlong)iVar9;
      uVar3 = puVar4[lVar13] & uVar15;
      if (uVar3 == 0) {
        iVar6 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar6 = iVar10 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar9) {
          iVar7 = iVar9;
        }
        if (iVar6 <= iVar9) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar3 = puVar4[lVar13 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar13 == lVar12) {
            return;
          }
        }
        uVar8 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar11 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar10);
  }
  return;
}



// FUNCTION 140ffd4ee FUN_140ffd4ee body=309 status=ok
// SIG undefined FUN_140ffd4ee(void)

void FUN_140ffd4ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eed6d0;
  if (*(char *)((longlong)param_1 + 0x3655) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3655) = 0;
  }
  FUN_140ffd6b6(param_1 + 0x642);
  FUN_140ffdb16(param_1 + 0x518);
  FUN_140ffd624(param_1 + 0x470);
  FUN_140ffd6b6(param_1 + 0x402);
  FUN_140ffd624(param_1 + 0x35a);
  FUN_140ffdb16(param_1 + 0x230);
  FUN_140ffd7a4(param_1 + 0xa0);
  FUN_140e9e952(param_1 + 0x44);
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000140ffd61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ffd624 FUN_140ffd624 body=146 status=ok
// SIG undefined FUN_140ffd624(void)

void FUN_140ffd624(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3280;
  param_1[0x8a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9e];
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
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
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
  FUN_140ffd6b6(param_1 + 2);
  return;
}



// FUNCTION 140ffd6b6 FUN_140ffd6b6 body=238 status=ok
// SIG undefined FUN_140ffd6b6(void)

void FUN_140ffd6b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3240;
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000140ffd7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ffd7a4 FUN_140ffd7a4 body=262 status=ok
// SIG undefined FUN_140ffd7a4(void)

void FUN_140ffd7a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3380;
  FUN_140ffd8aa(param_1 + 0xc6);
  FUN_140e9e952(param_1 + 0x5c);
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000140ffd8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ffd8aa FUN_140ffd8aa body=620 status=ok
// SIG undefined FUN_140ffd8aa(void)

void FUN_140ffd8aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3430;
  param_1[0xb2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xc6];
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
  param_1[0x9c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb0];
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
  param_1[0x86] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9a];
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
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
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
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6e];
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
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000140ffdb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ffdb16 FUN_140ffdb16 body=815 status=ok
// SIG undefined FUN_140ffdb16(void)

void FUN_140ffdb16(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee31c0;
  param_1[0xf6] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x10a];
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
  param_1[0xe0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xf4];
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
  param_1[0xca] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xde];
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
  param_1[0xb2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xc6];
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
  param_1[0x9c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb0];
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
  param_1[0x86] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9a];
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
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
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
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6e];
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
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000140ffde41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ffde56 FUN_140ffde56 body=44 status=ok
// SIG undefined FUN_140ffde56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ffde56(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb81a8c = _DAT_14cb81a8c + -1;
  *param_1 = DAT_14cb81a80;
  DAT_14cb81a80 = param_1;
  return;
}



// FUNCTION 140ffde88 FUN_140ffde88 body=221 status=ok
// SIG undefined FUN_140ffde88(void)

longlong FUN_140ffde88(void)

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
  if (DAT_14cb576c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148642641;
    local_40 = FUN_143c3ee59;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GbxGame",L"FactHandle",&DAT_14cb576c8,&DAT_148642640);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb576c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffdf66 FUN_140ffdf66 body=150 status=ok
// SIG undefined FUN_140ffdf66(void)

void FUN_140ffdf66(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140ffdffe(param_1,local_54);
  local_78 = param_1 + 0x1c;
  local_70 = param_1 + 0x24;
  local_68 = param_1 + 0x40;
  local_60 = param_1 + 0x50;
  FUN_140ffe0ca(param_3,param_1 + 0x10,local_54,param_1 + 0x30);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffdffe FUN_140ffdffe body=203 status=ok
// SIG undefined FUN_140ffdffe(void)

undefined8 * FUN_140ffdffe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined4 *)(param_1 + 0x18);
  FUN_1448075d0(local_48);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    if ((*(longlong *)(lVar1 + 0x4d8) == 0 & *(byte *)(lVar1 + 0x750)) != 1) {
      local_48[0] = *(longlong *)(lVar1 + 0x4d8);
      FUN_1401533ba(param_2,local_48,1);
      goto LAB_140ffe07a;
    }
    *(undefined4 *)(param_2 + 1) = DAT_14cb88800;
    uVar2 = DAT_14cb887f8;
  }
  *param_2 = uVar2;
LAB_140ffe07a:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffe0ca FUN_140ffe0ca body=359 status=ok
// SIG undefined FUN_140ffe0ca(void)

void FUN_140ffe0ca(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_f8 [36];
  undefined1 local_d4 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_a0;
  ulonglong uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  ushort local_64;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uStack_68 = 0;
  local_64 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_b8 = *param_2;
  local_b0 = *(undefined4 *)(param_2 + 1);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  local_ac = *param_3;
  local_a4 = *(undefined4 *)(param_3 + 1);
  FUN_140ffff0a(&local_a0,param_4);
  uStack_6c = (uint)*param_5;
  uStack_68 = (undefined4)((ulonglong)*param_5 >> 0x20);
  uStack_70 = *(undefined4 *)(param_6 + 1);
  uStack_78 = (undefined5)*param_6;
  uStack_73 = (undefined3)((ulonglong)*param_6 >> 0x28);
  local_64 = local_64 & 0xff00;
  FUN_141000060(&local_60,param_7);
  local_80 = param_8;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_140ffe232(param_1,local_d4,&local_b8);
  FUN_140d5a359(local_60,uStack_58 & 0xffffffff);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(local_a0,uStack_98 & 0xffffffff);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffe232 FUN_140ffe232 body=7382 status=ok
// SIG undefined FUN_140ffe232(void)

undefined8 *
FUN_140ffe232(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char cVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  undefined **ppuVar28;
  uint *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined **ppuVar32;
  undefined8 uVar33;
  byte bVar34;
  int iVar35;
  char *pcVar36;
  undefined4 *puVar37;
  uint uVar38;
  longlong *plVar39;
  uint *puVar40;
  ulonglong uVar41;
  undefined **ppuVar42;
  undefined1 uVar43;
  longlong lVar44;
  undefined8 *puVar45;
  undefined **ppuVar46;
  uint uVar47;
  int iVar48;
  int iVar49;
  longlong *plVar50;
  uint uVar51;
  uint uVar52;
  int iVar53;
  ulonglong uVar54;
  undefined **ppuVar55;
  uint uVar56;
  longlong lVar57;
  longlong lVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  uint uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStack_298 [47];
  undefined1 local_269;
  undefined **local_268;
  undefined **local_260;
  ulonglong local_258;
  undefined **local_250;
  ulonglong local_248;
  longlong local_240;
  undefined **local_238;
  undefined **local_230;
  undefined8 *local_228;
  undefined **local_220;
  uint local_214;
  longlong local_210;
  undefined8 *local_208;
  undefined4 local_1fc;
  undefined8 *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [12];
  undefined **local_1b0;
  uint local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  undefined **local_198;
  undefined4 local_190;
  longlong local_188;
  int local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined **local_168;
  undefined **ppuStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  uint uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar43 = *(undefined1 *)(param_1 + 0x358);
  *(undefined1 *)(param_1 + 0x358) = 1;
  if ((((((*(int *)(param_1 + 0x14c) == 0) || (uVar76 = *(uint *)(param_1 + 0x148), (int)uVar76 < 0)
         ) || (DAT_14c9647dc <= (int)uVar76)) ||
       (((plVar39 = (longlong *)
                    ((ulonglong)((uVar76 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar76 >> 0x10) * 8)),
         plVar39 == (longlong *)0x0 || ((int)plVar39[2] != *(int *)(param_1 + 0x14c))) ||
        (((*(uint *)(plVar39 + 1) & 0x10200000) != 0 ||
         ((local_1e0 = *plVar39, local_1e0 == 0 || (*(int *)(param_3 + 1) < 1)))))))) ||
      (lVar26 = FUN_144976d68(param_1,(longlong)param_3 + 0xc,
                              CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1)), lVar26 == 0)) ||
     (local_268 = (undefined **)FUN_1403a09ea(param_1,lVar26,param_3,1),
     local_268 == (undefined **)0x0)) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    goto LAB_140fff232;
  }
  local_148 = (undefined **)CONCAT44(local_148._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_144984904(param_1 + 0x308,&local_168,&local_148,0);
  local_178 = *param_3;
  local_170 = *(undefined4 *)(param_3 + 1);
  FUN_1448075d0(&local_148);
  local_240 = FUN_14060eaf6(&local_148);
  if (CONCAT44(iStack_12c,uStack_130) != 0) {
    FUN_1400020a8();
  }
  local_188 = 0;
  iVar25 = *(int *)(param_3 + 4);
  uVar33 = param_3[3];
  local_180 = iVar25;
  if (iVar25 == 0) {
    local_17c = 0;
  }
  else {
    FUN_141000116(&local_188,iVar25,0);
    FUN_140ffff67(local_188,uVar33,iVar25);
  }
  lVar26 = local_240;
  if ((local_240 != 0) && (*(char *)((longlong)param_3 + 0x54) == '\x01')) {
    local_168 = (undefined **)0x0;
    ppuStack_160 = (undefined **)0x0;
    FUN_141000264(&local_168,&local_188);
    FUN_141000264(&local_168,lVar26 + 0x90);
    local_148 = local_168;
    uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,ppuStack_160._0_4_);
    iStack_12c = (int)*(undefined8 *)((longlong)param_3 + 0x4c);
    uStack_128 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x4c) >> 0x20);
    uStack_130 = *(uint *)(param_3 + 1);
    local_138 = (undefined **)*param_3;
    if (*(int *)(param_1 + 0x14c) == 0) {
LAB_140fff89e:
      uStack_120 = 0;
    }
    else {
      uVar76 = *(uint *)(param_1 + 0x148);
      uStack_120 = 0;
      if ((-1 < (int)uVar76) && ((int)uVar76 < DAT_14c9647dc)) {
        plVar39 = (longlong *)
                  ((ulonglong)((uVar76 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar76 >> 0x10) * 8));
        if ((plVar39 == (longlong *)0x0) ||
           (((int)plVar39[2] != *(int *)(param_1 + 0x14c) ||
            ((*(uint *)(plVar39 + 1) & 0x10200000) != 0)))) goto LAB_140fff89e;
        uStack_120 = *plVar39;
      }
    }
    FUN_1409c5776(lVar26,&local_188);
    FUN_14029e8dd(local_168,(ulonglong)ppuStack_160 & 0xffffffff);
    if (local_168 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  ppuVar42 = local_268;
  local_230 = local_268 + 0x23;
  FUN_140ffff0a(local_230,&local_188);
  ppuVar42[0x20] = *(undefined **)((longlong)param_3 + 0x4c);
  *(undefined4 *)(ppuVar42 + 0x22) = *(undefined4 *)(param_3 + 9);
  ppuVar42[0x21] = (undefined *)param_3[8];
  ppuStack_160 = (undefined **)CONCAT44(ppuStack_160._4_4_,DAT_14cb7c928);
  local_168 = DAT_14cb7c920;
  FUN_1448075d0(&local_148);
  pbVar3 = (byte *)*param_4;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar39 = &DAT_14c9a1288;
    }
    else {
      plVar39 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar39[2] != *(int *)((longlong)plVar39 + 0x3c)) {
      plVar50 = plVar39 + 8;
      if ((longlong *)plVar39[9] != (longlong *)0x0) {
        plVar50 = (longlong *)plVar39[9];
      }
      iVar25 = *(int *)((longlong)plVar50 + (ulonglong)((int)plVar39[10] - 1U & (uint)local_148) * 4
                       );
      if (iVar25 != -1) {
        do {
          lVar44 = *plVar39 + (longlong)iVar25 * 0x40;
          if (*(uint *)(*plVar39 + (longlong)iVar25 * 0x40) == (uint)local_148) {
            if ((((lVar44 != 0) &&
                 (puVar45 = (undefined8 *)(lVar44 + 0x28), puVar45 != (undefined8 *)0x0)) &&
                ((byte *)*puVar45 != (byte *)0x0)) && ((*(byte *)*puVar45 & 0x40) == 0))
            goto LAB_140ffe528;
            break;
          }
          iVar25 = *(int *)(lVar44 + 0x38);
        } while (iVar25 != -1);
      }
    }
  }
  puVar45 = &DAT_14c9a1308;
LAB_140ffe528:
  if (CONCAT44(iStack_12c,uStack_130) != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar45 == (byte *)0x0) || ((*(byte *)*puVar45 & 3) == 0)) {
    FUN_141000060(local_268 + 0x31,param_3 + 0xb);
  }
  else {
    FUN_1488fcc20(local_268 + 0x31,puVar45);
  }
  ppuStack_160 = (undefined **)CONCAT44(ppuStack_160._4_4_,DAT_14cb7c958);
  local_168 = DAT_14cb7c950;
  FUN_1448075d0(&local_148);
  pbVar3 = (byte *)*param_4;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar39 = &DAT_14c9a1288;
    }
    else {
      plVar39 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar39[2] != *(int *)((longlong)plVar39 + 0x3c)) {
      plVar50 = plVar39 + 8;
      if ((longlong *)plVar39[9] != (longlong *)0x0) {
        plVar50 = (longlong *)plVar39[9];
      }
      iVar25 = *(int *)((longlong)plVar50 + (ulonglong)((int)plVar39[10] - 1U & (uint)local_148) * 4
                       );
      if (iVar25 != -1) {
        do {
          lVar44 = *plVar39 + (longlong)iVar25 * 0x40;
          if (*(uint *)(*plVar39 + (longlong)iVar25 * 0x40) == (uint)local_148) {
            if (((lVar44 != 0) &&
                (puVar45 = (undefined8 *)(lVar44 + 0x28), puVar45 != (undefined8 *)0x0)) &&
               (((byte *)*puVar45 != (byte *)0x0 && ((*(byte *)*puVar45 & 0x40) == 0))))
            goto LAB_140ffe600;
            break;
          }
          iVar25 = *(int *)(lVar44 + 0x38);
        } while (iVar25 != -1);
      }
    }
  }
  puVar45 = &DAT_14c9a1308;
LAB_140ffe600:
  if (CONCAT44(iStack_12c,uStack_130) != 0) {
    FUN_1400020a8();
  }
  pbVar3 = (byte *)*puVar45;
  local_269 = uVar43;
  local_228 = param_3;
  local_210 = param_1;
  local_208 = param_2;
  local_1f8 = param_4;
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) == 0)) {
    FUN_1410000be(local_268 + 0x33,param_3 + 5);
  }
  else {
    if ((*pbVar3 & 2) == 0) {
      ppuVar42 = (undefined **)&DAT_14c9a1288;
    }
    else {
      ppuVar42 = (undefined **)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    ppuVar32 = ppuVar42 + 3;
    local_168 = (undefined **)&DAT_100000000;
    local_158 = 0xffffffff;
    uStack_150 = 0;
    ppuStack_160 = ppuVar32;
    if (*(int *)(ppuVar42 + 6) == 0) {
      iVar25 = 0;
    }
    else {
      FUN_1449c0562(&local_168);
      iVar25 = *(int *)(ppuVar42 + 6);
    }
    uStack_130 = (uint)local_158;
    iStack_12c = (int)((ulonglong)local_158 >> 0x20);
    uStack_128 = uStack_150;
    uStack_124 = uStack_14c;
    uStack_140 = local_168;
    local_138 = ppuStack_160;
    local_148 = ppuVar42;
    if ((iStack_12c != iVar25) ||
       (param_2 = local_208, lVar26 = local_240, param_3 = local_228, param_1 = local_210,
       uVar43 = local_269, ppuStack_160 != ppuVar32)) {
      ppuVar46 = local_268 + 0x33;
      do {
        lVar26 = (longlong)iStack_12c;
        puVar6 = *local_148;
        iVar53 = *(int *)(local_268 + 0x34);
        *(uint *)(local_268 + 0x34) = iVar53 + 1U;
        if (*(uint *)((longlong)local_268 + 0x1a4) < iVar53 + 1U) {
          FUN_141883fee(ppuVar46,iVar53);
        }
        puVar5 = *ppuVar46;
        lVar44 = (longlong)iVar53 * 0x10;
        *(undefined8 *)(puVar5 + lVar44) = 0;
        *(undefined8 *)((longlong)(puVar5 + lVar44) + 8) = 0;
        FUN_1447325ac(puVar6 + lVar26 * 0x40,&local_168,1);
        *(undefined ***)(puVar5 + lVar44) = local_168;
        pbVar3 = *(byte **)(puVar6 + lVar26 * 0x40 + 0x28);
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
          uVar33 = 0;
        }
        else {
          uVar33 = *(undefined8 *)(pbVar3 + 8);
        }
        FUN_1446ddc76(&local_168,uVar33,1);
        *(undefined ***)(puVar5 + lVar44 + 8) = local_168;
        uStack_130 = uStack_130 & ~uStack_140._4_4_;
        FUN_1449c0562(&uStack_140);
        param_2 = local_208;
        lVar26 = local_240;
        param_3 = local_228;
        param_1 = local_210;
        uVar43 = local_269;
      } while (local_148 != ppuVar42 || (local_138 != ppuVar32 || iStack_12c != iVar25));
    }
  }
  if (lVar26 != 0) {
    ppuVar42 = local_268;
    if (0 < *(int *)(local_268 + 0x24)) {
      local_214 = 1;
      ppuVar55 = (undefined **)&DAT_ffffffffffffffc8;
      lVar58 = 1;
      lVar26 = 0;
      ppuVar32 = local_268 + 0x25;
      lVar44 = 0;
      ppuVar46 = local_230;
      uVar62 = (undefined4)DAT_14c8464d0;
      uVar63 = DAT_14c8464d0._4_4_;
      uVar64 = (undefined4)DAT_14c8464c0;
      uVar65 = DAT_14c8464c0._4_4_;
      uVar66 = (undefined4)DAT_14c8464c8;
      uVar67 = DAT_14c8464c8._4_4_;
      uVar68 = (undefined4)DAT_14c8464b0;
      uVar69 = DAT_14c8464b0._4_4_;
      uVar70 = (undefined4)DAT_14c8464a0;
      uVar71 = DAT_14c8464a0._4_4_;
      uVar72 = (undefined4)DAT_14c8464a8;
      uVar73 = DAT_14c8464a8._4_4_;
      uVar74 = (undefined4)DAT_14c846490;
      uVar75 = DAT_14c846490._4_4_;
      uVar76 = (uint)DAT_14c846498;
      iVar25 = DAT_14c846498._4_4_;
      uVar77 = (undefined4)DAT_14c846480;
      uVar78 = DAT_14c846480._4_4_;
      uVar79 = (undefined4)DAT_14c846488;
      uVar80 = DAT_14c846488._4_4_;
      local_250 = ppuVar32;
      do {
        if ((*ppuVar46)[lVar44 * 0x48 + 0x30] == '\x1f') {
          piVar1 = (int *)(*ppuVar46 + lVar44 * 0x48);
          pcVar4 = *(char **)(piVar1 + 4);
          if ((*piVar1 == DAT_14cb86258) && (piVar1[2] == DAT_14cb8625c._4_4_)) {
            FUN_141000734(&local_148,local_1e0,pcVar4);
            uVar63 = uStack_f4;
            uVar62 = local_f8;
            uVar67 = uStack_fc;
            uVar66 = uStack_100;
            uVar65 = uStack_104;
            uVar64 = local_108;
            uVar69 = uStack_114;
            uVar68 = local_118;
            uVar71 = uStack_124;
            uVar70 = uStack_128;
            iVar25 = iStack_12c;
            uVar76 = uStack_130;
            uVar77 = (uint)local_148;
            uVar78 = local_148._4_4_;
            uVar79 = (undefined4)uStack_140;
            uVar80 = uStack_140._4_4_;
            uVar74 = (int)local_138;
            uVar75 = local_138._4_4_;
            uVar72 = (undefined4)uStack_120;
            uVar73 = uStack_120._4_4_;
            iVar53 = *(int *)(ppuVar42 + 0x26);
            *(uint *)(ppuVar42 + 0x26) = iVar53 + 1U;
            if (*(uint *)((longlong)ppuVar42 + 0x134) < iVar53 + 1U) {
              FUN_1403e3958(ppuVar32,iVar53);
            }
            puVar6 = *ppuVar32;
            puVar37 = (undefined4 *)(puVar6 + (longlong)iVar53 * 0x18);
            *puVar37 = uVar70;
            puVar37[1] = uVar71;
            puVar37[2] = uVar72;
            puVar37[3] = uVar73;
            puVar37 = (undefined4 *)(puVar6 + (longlong)iVar53 * 0x18 + 0x10);
            *puVar37 = uVar68;
            puVar37[1] = uVar69;
          }
          else if ((lVar44 != 0) && (*pcVar4 == '\f')) {
            if (((*(int *)(pcVar4 + 0x10) == 0) || (iVar53 = *(int *)(pcVar4 + 0x14), iVar53 == 0))
               || (*(int *)(pcVar4 + 0x10) == DAT_14c948000)) {
LAB_140fff832:
              local_190 = DAT_14c948620;
              local_198 = DAT_14c948618;
            }
            else {
              if ((iVar53 < 2) && (*(int *)(pcVar4 + 0x34) < 1)) {
                pcVar36 = pcVar4 + 0x18;
              }
              else {
                pcVar36 = *(char **)(pcVar4 + 0x28);
              }
              if ((iVar53 == 1) || (iVar53 < 2)) goto LAB_140fff832;
              local_190 = *(undefined4 *)(pcVar36 + 0x14);
              local_198 = *(undefined ***)(pcVar36 + 0xc);
            }
            FUN_1448075d0(&local_148,&local_198);
            lVar27 = FUN_1410002c4(&local_148);
            if (CONCAT44(iStack_12c,uStack_130) != 0) {
              FUN_1400020a8();
            }
            ppuVar42 = local_268;
            ppuVar32 = local_250;
            if ((lVar27 != 0) && (*(char *)(lVar27 + 0x58) == '\x01')) {
              local_238 = (undefined **)(pcVar4 + 0x10);
              ppuVar28 = ppuVar55;
              lVar31 = lVar58;
              lVar57 = lVar26;
              local_1e8 = lVar27;
              while( true ) {
                ppuVar42 = local_268;
                ppuVar32 = local_250;
                if (lVar31 + -1 == 0 || lVar31 < 1) goto LAB_140ffe71f;
                local_260 = ppuVar28;
                FUN_14096c63a(*ppuVar46 + (longlong)ppuVar28,&local_148);
                cVar23 = (char)local_148;
                if (uStack_120 != 0) {
                  FUN_1400020a8();
                }
                ppuVar42 = local_268;
                lVar57 = lVar57 + 0x48;
                ppuVar32 = local_250;
                ppuVar46 = local_230;
                if (cVar23 == '\x01') break;
                ppuVar28 = local_260 + -9;
                lVar31 = lVar31 + -1;
                if (cVar23 != '\f') goto LAB_140ffe71f;
              }
              lVar57 = (longlong)*local_230 - lVar57;
              if (lVar57 == 0) goto LAB_140ffe71f;
              puVar29 = &DAT_14c948620;
              puVar37 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
              puVar40 = (uint *)&DAT_14c948618;
              if (*(int *)local_238 != 0) {
                puVar29 = &DAT_14c948620;
                puVar37 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
                puVar40 = (uint *)&DAT_14c948618;
                if (*(int *)(pcVar4 + 0x14) != 0) {
                  puVar29 = &DAT_14c948620;
                  puVar37 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
                  puVar40 = (uint *)&DAT_14c948618;
                  if (*(int *)local_238 != DAT_14c948000) {
                    puVar29 = &DAT_14c948620;
                    puVar37 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
                    puVar40 = (uint *)&DAT_14c948618;
                    if (1 < *(int *)(pcVar4 + 0x14)) {
                      lVar27 = *(longlong *)(pcVar4 + 0x28);
                      puVar40 = (uint *)(lVar27 + 0xc);
                      puVar37 = (undefined4 *)(lVar27 + 0x10);
                      puVar29 = (uint *)(lVar27 + 0x14);
                    }
                  }
                }
              }
              uVar38 = *puVar40;
              local_19c = local_214;
              if (uVar38 == 0) {
                local_19c = *puVar29;
              }
              local_248 = (ulonglong)local_19c;
              local_220 = local_268 + 0x27;
              local_260 = local_268 + 0x29;
              local_1fc = *puVar37;
              local_1a4 = uVar38;
              local_1a0 = local_1fc;
              FUN_144928d62(local_238,1,&local_1a4);
              local_1f0 = lVar57;
              if (*(int *)((longlong)ppuVar42 + 0x16c) == 0) {
                uVar51 = *(uint *)(ppuVar42 + 0x28);
                uVar30 = (ulonglong)uVar51;
                *(uint *)(ppuVar42 + 0x28) = uVar51 + 1;
                if (*(uint *)((longlong)ppuVar42 + 0x144) == uVar51) {
                  FUN_14021b4e8(local_220,uVar51);
                }
                iVar53 = *(int *)(ppuVar42 + 0x2c);
                if (iVar53 == 0) {
                  iVar24 = -1;
                }
                else {
                  iVar24 = iVar53 + 0x1e;
                  if (-1 < iVar53 + -1) {
                    iVar24 = iVar53 + -1;
                  }
                  iVar24 = iVar24 >> 5;
                }
                uVar51 = (uint)local_248;
                iVar35 = iVar53 + 1;
                iVar48 = iVar53 + 0x1f;
                if (-1 < iVar53) {
                  iVar48 = iVar53;
                }
                ppuVar42 = local_268;
                local_258 = uVar30;
                if (iVar48 >> 5 == iVar24) {
                  *(int *)(local_268 + 0x2c) = iVar35;
                }
                else {
                  if (*(int *)((longlong)local_268 + 0x164) <= iVar53) {
                    if (iVar53 + 0x20U < 0xa0) {
                      iVar35 = 0x80;
                      iVar24 = iVar53;
                    }
                    else {
                      uVar51 = iVar53 + 0x20U >> 5;
                      if (*(int *)((longlong)local_268 + 0x164) + 0x1fU < 0xa0) {
                        uVar47 = 4;
                        if (4 < uVar51) {
                          uVar47 = uVar51;
                        }
                      }
                      else {
                        uVar47 = (uVar51 * 3 >> 3) + uVar51 + 0x10;
                      }
                      uVar30 = FUN_144a3809e(uVar47 << 2,0);
                      iVar24 = (int)(uVar30 >> 2);
                      iVar35 = -0x20;
                      if ((int)uVar51 <= iVar24) {
                        iVar35 = iVar24 << 5;
                      }
                      iVar24 = *(int *)(local_268 + 0x2c);
                    }
                    ppuVar42 = local_268;
                    *(int *)((longlong)local_268 + 0x164) = iVar35;
                    FUN_1446efbd8(local_260,iVar24);
                    iVar35 = *(int *)(ppuVar42 + 0x2c) + 1;
                    uVar51 = (uint)local_248;
                  }
                  iVar24 = iVar35 + 0x1f;
                  if (-1 < iVar35) {
                    iVar24 = iVar35;
                  }
                  *(int *)(ppuVar42 + 0x2c) = iVar35;
                  if (iVar35 % 0x20 != 0) {
                    ppuVar32 = (undefined **)ppuVar42[0x2b];
                    if ((undefined **)ppuVar42[0x2b] == (undefined **)0x0) {
                      ppuVar32 = local_260;
                    }
                    bVar34 = -(char)(iVar35 % 0x20);
                    *(uint *)((longlong)ppuVar32 + (longlong)(iVar24 >> 5) * 4) =
                         (*(uint *)((longlong)ppuVar32 + (longlong)(iVar24 >> 5) * 4) <<
                         (bVar34 & 0x1f)) >> (bVar34 & 0x1f);
                  }
                }
                lVar27 = (longlong)(int)local_258;
                ppuVar32 = (undefined **)ppuVar42[0x2b];
                if ((undefined **)ppuVar42[0x2b] == (undefined **)0x0) {
                  ppuVar32 = local_260;
                }
                bVar34 = (byte)iVar53 & 0x1f;
                puVar40 = (uint *)((longlong)ppuVar32 + (longlong)(iVar48 >> 5) * 4);
                *puVar40 = *puVar40 & (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
              }
              else {
                local_258 = (ulonglong)*(uint *)(ppuVar42 + 0x2d);
                lVar27 = (longlong)(int)*(uint *)(ppuVar42 + 0x2d);
                iVar53 = *(int *)(ppuVar42[0x27] + lVar27 * 0x48 + 4);
                *(int *)(ppuVar42 + 0x2d) = iVar53;
                iVar24 = *(int *)((longlong)ppuVar42 + 0x16c) + -1;
                *(int *)((longlong)ppuVar42 + 0x16c) = iVar24;
                if (iVar24 != 0) {
                  *(undefined4 *)(ppuVar42[0x27] + (longlong)iVar53 * 0x48) = 0xffffffff;
                }
                uVar51 = (uint)local_248;
                ppuVar42 = local_268;
              }
              iVar53 = (int)local_258;
              ppuVar32 = (undefined **)ppuVar42[0x2b];
              if ((undefined **)ppuVar42[0x2b] == (undefined **)0x0) {
                ppuVar32 = local_260;
              }
              iVar24 = iVar53 + 0x1f;
              if (-1 < iVar53) {
                iVar24 = iVar53;
              }
              puVar40 = (uint *)((longlong)ppuVar32 + (longlong)(iVar24 >> 5) * 4);
              *puVar40 = *puVar40 | 1 << ((byte)local_258 & 0x1f);
              ppuVar28 = DAT_14c8464f0;
              ppuVar46 = DAT_14c8464e8;
              ppuVar32 = DAT_14c8464e0;
              puVar6 = ppuVar42[0x27];
              local_138 = DAT_14c8464f0;
              local_148 = DAT_14c8464e0;
              uStack_140 = DAT_14c8464e8;
              *(uint *)(puVar6 + lVar27 * 0x48) = uVar38;
              *(undefined4 *)(puVar6 + lVar27 * 0x48 + 4) = local_1fc;
              *(uint *)(puVar6 + lVar27 * 0x48 + 8) = uVar51;
              *(undefined8 *)(puVar6 + lVar27 * 0x48 + 0x10) = 0;
              *(undefined8 *)((longlong)(puVar6 + lVar27 * 0x48 + 0x10) + 8) = 0;
              *(undefined8 *)(puVar6 + lVar27 * 0x48 + 0x20) = 0;
              local_148._0_4_ = (uint)ppuVar32;
              local_148._4_4_ = (undefined4)((ulonglong)ppuVar32 >> 0x20);
              uStack_140._0_4_ = SUB84(ppuVar46,0);
              uStack_140._4_4_ = (uint)((ulonglong)ppuVar46 >> 0x20);
              puVar37 = (undefined4 *)(puVar6 + lVar27 * 0x48 + 0x28);
              *puVar37 = (uint)local_148;
              puVar37[1] = local_148._4_4_;
              puVar37[2] = (undefined4)uStack_140;
              puVar37[3] = uStack_140._4_4_;
              *(undefined ***)(puVar6 + lVar27 * 0x48 + 0x38) = ppuVar28;
              *(undefined4 *)(puVar6 + lVar27 * 0x48 + 0x40) = 0xffffffff;
              if (uVar51 != 0) {
                uVar38 = uVar51 >> 0xd ^ uVar38 - uVar51;
                uVar47 = uVar38 << 8 ^ (-0x61c88647 - uVar51) - uVar38;
                uVar51 = uVar47 >> 0xd ^ (uVar51 - uVar38) - uVar47;
                uVar52 = uVar51 >> 0xc ^ (uVar38 - uVar47) - uVar51;
                uVar38 = uVar52 << 0x10 ^ (uVar47 - uVar51) - uVar52;
                uVar51 = uVar38 >> 5 ^ (uVar51 - uVar52) - uVar38;
                uVar47 = uVar51 >> 3 ^ (uVar52 - uVar38) - uVar51;
                uVar38 = uVar47 << 10 ^ (uVar38 - uVar51) - uVar47;
                uVar38 = uVar38 >> 0xf ^ uVar51 - (uVar47 + uVar38);
              }
              puVar37 = (undefined4 *)(puVar6 + lVar27 * 0x48);
              uVar51 = 1;
              local_148 = ppuVar32;
              uStack_140 = ppuVar46;
              if (*(int *)(ppuVar42 + 0x28) - *(int *)((longlong)ppuVar42 + 0x16c) == 1) {
                uVar47 = 1;
                goto LAB_140ffeb45;
              }
              uVar47 = FUN_14117afc6(local_220,uVar38,puVar37);
              if (uVar47 != 0xffffffff) {
                puVar6 = *local_220;
                lVar27 = (longlong)(int)uVar47;
                uVar11 = *puVar37;
                uVar12 = puVar37[1];
                uVar13 = puVar37[2];
                uVar14 = puVar37[3];
                uVar33 = *(undefined8 *)(puVar37 + 4);
                uVar15 = *(undefined8 *)(puVar37 + 6);
                uVar16 = puVar37[8];
                uVar17 = puVar37[9];
                uVar18 = puVar37[10];
                uVar19 = puVar37[0xb];
                uVar20 = puVar37[0xd];
                uVar21 = puVar37[0xe];
                uVar22 = puVar37[0xf];
                puVar2 = (undefined4 *)(puVar6 + lVar27 * 0x48 + 0x30);
                *puVar2 = puVar37[0xc];
                puVar2[1] = uVar20;
                puVar2[2] = uVar21;
                puVar2[3] = uVar22;
                puVar37 = (undefined4 *)(puVar6 + lVar27 * 0x48 + 0x20);
                *puVar37 = uVar16;
                puVar37[1] = uVar17;
                puVar37[2] = uVar18;
                puVar37[3] = uVar19;
                *(undefined8 *)(puVar6 + lVar27 * 0x48 + 0x10) = uVar33;
                *(undefined8 *)((longlong)(puVar6 + lVar27 * 0x48 + 0x10) + 8) = uVar15;
                puVar37 = (undefined4 *)(puVar6 + lVar27 * 0x48);
                *puVar37 = uVar11;
                puVar37[1] = uVar12;
                puVar37[2] = uVar13;
                puVar37[3] = uVar14;
                FUN_14884cd90(local_220,local_258);
                local_258 = (ulonglong)uVar47;
                goto LAB_140ffee22;
              }
              uVar47 = *(int *)(ppuVar42 + 0x28) - *(int *)((longlong)ppuVar42 + 0x16c);
              if (3 < uVar47) {
                uVar30 = (ulonglong)(uVar47 & 0xfffffffe) + 0xf;
                lVar27 = 0x3f;
                if (uVar30 != 0) {
                  for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                uVar51 = 1 << ((byte)lVar27 & 0x1f);
              }
LAB_140ffeb45:
              local_238 = ppuVar42 + 0x2e;
              if (((int)uVar47 < 1) || ((int)uVar51 <= *(int *)(ppuVar42 + 0x30))) {
                uVar38 = *(int *)(ppuVar42 + 0x30) - 1U & uVar38;
                puVar37[0x11] = uVar38;
                ppuVar32 = (undefined **)ppuVar42[0x2f];
                if ((undefined **)ppuVar42[0x2f] == (undefined **)0x0) {
                  ppuVar32 = local_238;
                }
                puVar37[0x10] =
                     *(int *)((longlong)ppuVar32 +
                             ((longlong)*(int *)(ppuVar42 + 0x30) - 1U & (longlong)(int)uVar38) * 4)
                ;
                ppuVar32 = (undefined **)ppuVar42[0x2f];
                if ((undefined **)ppuVar42[0x2f] == (undefined **)0x0) {
                  ppuVar32 = local_238;
                }
                *(int *)((longlong)ppuVar32 +
                        ((longlong)*(int *)(ppuVar42 + 0x30) - 1U & (longlong)(int)uVar38) * 4) =
                     (int)local_258;
              }
              else {
                ppuVar32 = ppuVar42 + 0x2f;
                *(uint *)(ppuVar42 + 0x30) = uVar51;
                if (ppuVar42[0x2f] != (undefined *)0x0) {
                  FUN_1446efa72(ppuVar32,0,0,4);
                  uVar51 = *(uint *)(ppuVar42 + 0x30);
                }
                if (uVar51 == 1) {
                  if (*ppuVar32 != (undefined *)0x0) {
                    FUN_1446efa72(ppuVar32,0,0,4);
                  }
LAB_140ffeb9c:
                  uVar38 = 0;
                  do {
                    ppuVar32 = (undefined **)ppuVar42[0x2f];
                    if ((undefined **)ppuVar42[0x2f] == (undefined **)0x0) {
                      ppuVar32 = local_238;
                    }
                    *(int *)((longlong)ppuVar32 +
                            (ulonglong)(*(int *)(ppuVar42 + 0x30) + 0x7fffffffU & uVar38) * 4) = -1;
                    uVar38 = uVar38 + 1;
                  } while (uVar51 != uVar38);
                }
                else {
                  if (uVar51 == 0) goto LAB_140ffee22;
                  FUN_1446efa72(ppuVar32,0,uVar51,4);
                  if (0 < (int)uVar51) goto LAB_140ffeb9c;
                }
                iVar53 = *(int *)(ppuVar42 + 0x2c);
                if (iVar53 == 0) {
                  uVar30 = 0;
                  uVar41 = 1;
                  iVar24 = 0;
                  iVar35 = 0;
                }
                else {
                  ppuVar32 = (undefined **)ppuVar42[0x2b];
                  if ((undefined **)ppuVar42[0x2b] == (undefined **)0x0) {
                    ppuVar32 = local_260;
                  }
                  uVar38 = *(uint *)ppuVar32;
                  if (uVar38 == 0) {
                    iVar24 = iVar53 + 0x1e;
                    if (-1 < iVar53 + -1) {
                      iVar24 = iVar53 + -1;
                    }
                    uVar30 = 0;
                    uVar41 = (ulonglong)(uint)(iVar24 >> 5);
                    if (iVar24 >> 5 < 1) {
                      uVar41 = uVar30;
                    }
                    iVar35 = 0;
                    do {
                      if (uVar41 == uVar30) goto LAB_140ffee22;
                      iVar35 = iVar35 + 0x20;
                      uVar38 = *(uint *)((longlong)ppuVar32 + (uVar30 + 1) * 4);
                      uVar30 = uVar30 + 1;
                    } while (uVar38 == 0);
                  }
                  else {
                    uVar30 = 0;
                    iVar35 = 0;
                  }
                  uVar41 = (ulonglong)(-uVar38 & uVar38);
                  uVar54 = uVar41 * 2 + 1;
                  lVar27 = 0x3f;
                  if (uVar54 != 0) {
                    for (; uVar54 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                    }
                  }
                  iVar24 = (iVar35 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                  if (iVar53 <= iVar24) {
                    iVar24 = iVar53;
                  }
                }
                if (iVar24 < iVar53) {
                  uVar38 = 0xffffffff;
                  do {
                    local_248 = CONCAT44(local_248._4_4_,uVar38);
                    puVar6 = *local_220;
                    lVar27 = (longlong)iVar24;
                    uVar51 = *(uint *)(puVar6 + lVar27 * 0x48);
                    uVar47 = *(uint *)(puVar6 + lVar27 * 0x48 + 8);
                    if (uVar47 != 0) {
                      uVar56 = uVar47 >> 0xd ^ uVar51 - uVar47;
                      uVar51 = uVar56 << 8 ^ (-0x61c88647 - uVar47) - uVar56;
                      uVar52 = uVar51 >> 0xd ^ (uVar47 - uVar56) - uVar51;
                      uVar47 = uVar52 >> 0xc ^ (uVar56 - uVar51) - uVar52;
                      uVar51 = uVar47 << 0x10 ^ (uVar51 - uVar52) - uVar47;
                      uVar52 = uVar51 >> 5 ^ (uVar52 - uVar47) - uVar51;
                      uVar47 = uVar52 >> 3 ^ (uVar47 - uVar51) - uVar52;
                      uVar51 = uVar47 << 10 ^ (uVar51 - uVar52) - uVar47;
                      uVar51 = uVar51 >> 0xf ^ uVar52 - (uVar47 + uVar51);
                    }
                    uVar54 = (longlong)(int)uVar51 & (longlong)*(int *)(local_268 + 0x30) - 1U;
                    iVar53 = (int)uVar54;
                    *(int *)(puVar6 + lVar27 * 0x48 + 0x44) = iVar53;
                    ppuVar42 = (undefined **)local_268[0x2f];
                    if ((undefined **)local_268[0x2f] == (undefined **)0x0) {
                      ppuVar42 = local_238;
                    }
                    *(int *)(puVar6 + lVar27 * 0x48 + 0x40) =
                         *(int *)((longlong)ppuVar42 +
                                 ((longlong)*(int *)(local_268 + 0x30) - 1U & uVar54) * 4);
                    ppuVar42 = (undefined **)local_268[0x2f];
                    if ((undefined **)local_268[0x2f] == (undefined **)0x0) {
                      ppuVar42 = local_238;
                    }
                    *(int *)((longlong)ppuVar42 +
                            ((longlong)iVar53 & (longlong)*(int *)(local_268 + 0x30) - 1U) * 4) =
                         iVar24;
                    uVar38 = uVar38 & ~(uint)uVar41;
                    ppuVar32 = (undefined **)local_268[0x2b];
                    if ((undefined **)local_268[0x2b] == (undefined **)0x0) {
                      ppuVar32 = local_260;
                    }
                    iVar53 = *(int *)(local_268 + 0x2c);
                    iVar24 = (int)uVar30;
                    lVar27 = (longlong)iVar24;
                    uVar51 = *(uint *)((longlong)ppuVar32 + lVar27 * 4) & uVar38;
                    ppuVar42 = local_268;
                    if (uVar51 == 0) {
                      iVar48 = iVar53 + 0x1e;
                      if (-1 < iVar53 + -1) {
                        iVar48 = iVar53 + -1;
                      }
                      iVar48 = iVar48 >> 5;
                      iVar49 = iVar48;
                      if (iVar48 < iVar24) {
                        iVar49 = iVar24;
                      }
                      if (iVar48 <= iVar24) break;
                      lVar31 = 0;
                      while( true ) {
                        iVar35 = iVar35 + 0x20;
                        uVar51 = *(uint *)((longlong)ppuVar32 + (lVar27 + lVar31 + 1) * 4);
                        if (uVar51 != 0) break;
                        lVar31 = lVar31 + 1;
                        if (iVar49 - lVar27 == lVar31) goto LAB_140ffee22;
                      }
                      uVar30 = (ulonglong)(iVar24 + (int)lVar31 + 1);
                      uVar38 = 0xffffffff;
                    }
                    uVar41 = (ulonglong)(-uVar51 & uVar51);
                    uVar54 = uVar41 * 2 + 1;
                    lVar27 = 0x3f;
                    if (uVar54 != 0) {
                      for (; uVar54 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                      }
                    }
                    iVar24 = (iVar35 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                  } while (iVar24 < iVar53);
                }
              }
LAB_140ffee22:
              puVar6 = *local_220;
              lVar27 = local_1f0 + 0x10;
              FUN_14096c63a(lVar27,&local_148);
              ppuStack_160._0_4_ = DAT_14c948620;
              if (((((int)local_138 == 0) || (local_138._4_4_ == 0)) ||
                  ((int)local_138 == DAT_14c948000)) || (local_138._4_4_ == 1)) {
                local_168 = DAT_14c948618;
              }
              else {
                local_168 = DAT_14c948618;
                if (1 < local_138._4_4_) {
                  local_168 = *(undefined ***)(uStack_120 + 0xc);
                  ppuStack_160._0_4_ = *(undefined4 *)(uStack_120 + 0x14);
                }
              }
              lVar31 = (longlong)(int)local_258;
              *(undefined4 *)(puVar6 + lVar31 * 0x48 + 0x18) = ppuStack_160._0_4_;
              *(undefined ***)(puVar6 + lVar31 * 0x48 + 0x10) = local_168;
              if (uStack_120 != 0) {
                FUN_1400020a8();
              }
              FUN_14096c63a(lVar27,&local_148);
              ppuVar32 = local_250;
              uVar11 = DAT_14c948620;
              if ((((int)local_138 == 0) || (local_138._4_4_ == 0)) ||
                 (((int)local_138 == DAT_14c948000 || (local_138._4_4_ == 1)))) {
                local_168 = DAT_14c948618;
              }
              else {
                local_168 = DAT_14c948618;
                if (2 < local_138._4_4_) {
                  local_168 = *(undefined ***)(uStack_120 + 0x18);
                  uVar11 = *(undefined4 *)(uStack_120 + 0x20);
                }
              }
              ppuStack_160 = (undefined **)CONCAT44(ppuStack_160._4_4_,uVar11);
              *(undefined4 *)(puVar6 + lVar31 * 0x48 + 0x24) = uVar11;
              *(undefined ***)(puVar6 + lVar31 * 0x48 + 0x1c) = local_168;
              if (uStack_120 != 0) {
                FUN_1400020a8();
              }
              local_214 = local_214 + 1;
              dVar9 = *(double *)(local_1e8 + 0x60) * (double)CONCAT44(uVar65,uVar64);
              dVar10 = *(double *)(local_1e8 + 0x68) * (double)CONCAT44(uVar67,uVar66);
              dVar7 = *(double *)(local_1e8 + 0x70) * (double)CONCAT44(uVar63,uVar62);
              dVar59 = dVar10 * (double)CONCAT44(uVar78,uVar77) -
                       (double)CONCAT44(uVar80,uVar79) * dVar9;
              dVar60 = dVar7 * (double)CONCAT44(uVar80,uVar79) -
                       (double)CONCAT44(uVar75,uVar74) * dVar10;
              dVar61 = dVar9 * (double)CONCAT44(uVar75,uVar74) -
                       (double)CONCAT44(uVar78,uVar77) * dVar7;
              dVar60 = dVar60 + dVar60;
              dVar61 = dVar61 + dVar61;
              dVar59 = dVar59 + dVar59;
              dVar10 = ((double)CONCAT44(uVar75,uVar74) * dVar60 -
                       (double)CONCAT44(uVar78,uVar77) * dVar59) +
                       (double)CONCAT44(iVar25,uVar76) * dVar61 + dVar10 +
                       (double)CONCAT44(uVar73,uVar72);
              auVar8._8_4_ = SUB84(dVar10,0);
              auVar8._0_8_ = (dVar59 * (double)CONCAT44(uVar80,uVar79) -
                             dVar61 * (double)CONCAT44(uVar75,uVar74)) +
                             (double)CONCAT44(iVar25,uVar76) * dVar60 + dVar9 +
                             (double)CONCAT44(uVar71,uVar70);
              auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              *(undefined1 (*) [16])(puVar6 + lVar31 * 0x48 + 0x28) = auVar8;
              *(double *)(puVar6 + lVar31 * 0x48 + 0x38) =
                   (double)CONCAT44(iVar25,uVar76) * dVar59 + dVar7 +
                   (dVar61 * (double)CONCAT44(uVar78,uVar77) -
                   dVar60 * (double)CONCAT44(uVar80,uVar79)) + (double)CONCAT44(uVar69,uVar68);
              ppuVar46 = local_230;
            }
          }
        }
LAB_140ffe71f:
        lVar44 = lVar44 + 1;
        lVar26 = lVar26 + -0x48;
        ppuVar55 = ppuVar55 + 9;
        lVar58 = lVar58 + 1;
      } while (lVar44 < *(int *)(ppuVar42 + 0x24));
    }
    puVar45 = local_228;
    if ((*(char *)((longlong)local_228 + 0x55) != '\0') && (*(int *)(ppuVar42 + 0x32) == 0)) {
      FUN_148843a00(ppuVar42);
    }
    if (puVar45[7] == 0) {
      ppuStack_160 = (undefined **)CONCAT44(ppuStack_160._4_4_,DAT_14cb7c970);
      local_168 = DAT_14cb7c968;
      FUN_1448075d0(&local_148);
      lVar26 = local_240;
      pbVar3 = (byte *)*local_1f8;
      puVar45 = &DAT_14c9a1308;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar39 = &DAT_14c9a1288;
        }
        else {
          plVar39 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar39[2] != *(int *)((longlong)plVar39 + 0x3c)) {
          plVar50 = plVar39 + 8;
          if ((longlong *)plVar39[9] != (longlong *)0x0) {
            plVar50 = (longlong *)plVar39[9];
          }
          iVar25 = *(int *)((longlong)plVar50 +
                           (ulonglong)((int)plVar39[10] - 1U & (uint)local_148) * 4);
          if (iVar25 != -1) {
            do {
              lVar44 = *plVar39 + (longlong)iVar25 * 0x40;
              if (*(uint *)(*plVar39 + (longlong)iVar25 * 0x40) == (uint)local_148) {
                if ((((lVar44 != 0) &&
                     (puVar45 = (undefined8 *)(lVar44 + 0x28), puVar45 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar45 != (byte *)0x0)) && ((*(byte *)*puVar45 & 0x40) == 0))
                goto LAB_140fff683;
                break;
              }
              iVar25 = *(int *)(lVar44 + 0x38);
            } while (iVar25 != -1);
          }
        }
        puVar45 = &DAT_14c9a1308;
      }
LAB_140fff683:
      if (CONCAT44(iStack_12c,uStack_130) != 0) {
        FUN_1400020a8();
      }
      pbVar3 = (byte *)*puVar45;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) == 0)) {
        local_148 = &PTR_FUN_14b4002e0;
        uStack_140 = ppuVar42;
        FUN_141000ce4(lVar26,&local_148,ppuVar42 + 0x35);
      }
      else {
        if ((*pbVar3 & 2) == 0) {
          plVar39 = &DAT_14c9a1270;
        }
        else {
          plVar39 = *(longlong **)(pbVar3 + 8);
        }
        lVar26 = plVar39[2];
        if ((longlong)(int)lVar26 != 0) {
          lVar44 = *plVar39;
          ppuVar42 = local_268 + 0x35;
          lVar58 = 0;
          do {
            pbVar3 = *(byte **)(lVar44 + lVar58);
            if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
              uVar33 = 0;
            }
            else {
              uVar33 = *(undefined8 *)(pbVar3 + 8);
            }
            FUN_1446ddc76(&local_1b0,uVar33,1);
            local_168 = local_1b0;
            FUN_1401533ba(&local_148,&local_168,1);
            iVar25 = *(int *)(local_268 + 0x36);
            *(uint *)(local_268 + 0x36) = iVar25 + 1U;
            if (*(uint *)((longlong)local_268 + 0x1b4) < iVar25 + 1U) {
              FUN_1446dd912(ppuVar42,iVar25);
            }
            puVar6 = *ppuVar42;
            *(undefined4 *)(puVar6 + (longlong)iVar25 * 0xc + 8) = (undefined4)uStack_140;
            *(undefined ***)(puVar6 + (longlong)iVar25 * 0xc) = local_148;
            lVar58 = lVar58 + 0x10;
          } while ((longlong)(int)lVar26 * 0x10 != lVar58);
        }
      }
    }
    else {
      FUN_140d7e6a6(ppuVar42 + 0x35);
    }
    puVar45 = local_1f8;
    param_2 = local_208;
    param_1 = local_210;
    param_3 = local_228;
    uVar43 = local_269;
    if ((*(char *)(local_210 + 0x151) == '\x01') &&
       (cVar23 = FUN_140bde87c(local_210), cVar23 != '\0')) {
      FUN_14100081a(&local_148);
      ppuVar32 = local_148;
      ppuVar42 = local_268;
      if (local_148 != (undefined **)0x0) {
        *(undefined4 *)(local_148 + 3) = *(undefined4 *)(local_268 + 3);
        local_148[2] = local_268[2];
        *(undefined **)((longlong)local_148 + 0x1c) = local_268[0x20];
        *(undefined4 *)((longlong)local_148 + 0x2c) = *(undefined4 *)(local_268 + 0x22);
        *(undefined **)((longlong)local_148 + 0x24) = local_268[0x21];
        FUN_140ffff0a(local_148 + 6,local_230);
        FUN_141000060(ppuVar32 + 8,ppuVar42 + 0x31);
        FUN_140d7e6a6(ppuVar32 + 10,ppuVar42 + 0x35);
        local_168 = ppuVar32;
        ppuStack_160 = uStack_140;
        if (uStack_140 != (undefined **)0x0) {
          LOCK();
          *(int *)(uStack_140 + 1) = *(int *)(uStack_140 + 1) + 1;
          UNLOCK();
        }
        if (*(int *)(param_1 + 0x144) == 0) {
LAB_140fff897:
          uVar33 = 0;
        }
        else {
          uVar76 = *(uint *)(param_1 + 0x140);
          uVar33 = 0;
          if ((-1 < (int)uVar76) && ((int)uVar76 < DAT_14c9647dc)) {
            plVar39 = (longlong *)
                      ((ulonglong)((uVar76 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar76 >> 0x10) * 8));
            if (((plVar39 == (longlong *)0x0) ||
                ((((int)plVar39[2] != *(int *)(param_1 + 0x144) ||
                  ((*(uint *)(plVar39 + 1) & 0x10200000) != 0)) || (*plVar39 == 0)))) ||
               (lVar26 = *(longlong *)(*plVar39 + 0x30), lVar26 == 0)) goto LAB_140fff897;
            uVar33 = *(undefined8 *)(lVar26 + 0x360);
          }
        }
        FUN_141000642(uVar33,&local_168);
        ppuVar42 = ppuStack_160;
        if (ppuStack_160 != (undefined **)0x0) {
          LOCK();
          ppuVar32 = ppuStack_160 + 1;
          *(int *)ppuVar32 = *(int *)ppuVar32 + -1;
          UNLOCK();
          if (*(int *)ppuVar32 == 0) {
            (**(code **)*ppuStack_160)(ppuStack_160);
            LOCK();
            piVar1 = (int *)((longlong)ppuVar42 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*ppuVar42 + 0x10))(ppuVar42);
            }
          }
        }
      }
      ppuVar42 = uStack_140;
      if (uStack_140 != (undefined **)0x0) {
        LOCK();
        ppuVar32 = uStack_140 + 1;
        *(int *)ppuVar32 = *(int *)ppuVar32 + -1;
        UNLOCK();
        if (*(int *)ppuVar32 == 0) {
          (**(code **)*uStack_140)(uStack_140);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar42 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*ppuVar42 + 0x10))(ppuVar42);
          }
        }
      }
    }
    if (((byte *)*puVar45 != (byte *)0x0) && ((~*(byte *)*puVar45 & 3) == 0)) {
      uVar43 = *(undefined1 *)(param_1 + 0x359);
      *(undefined1 *)(param_1 + 0x359) = 1;
      FUN_140fa600a(local_240,local_1bc);
      local_1c0 = *(undefined4 *)(param_3 + 1);
      local_1c8 = *param_3;
      FUN_14104336c(param_1,puVar45,&local_1c8,local_1bc);
      ppuStack_160 = (undefined **)CONCAT44(ppuStack_160._4_4_,DAT_14cb7c940);
      local_168 = DAT_14cb7c938;
      FUN_1448075d0(&local_148);
      uVar33 = FUN_144a06846(puVar45,&local_148);
      iVar25 = FUN_140e1edd4(uVar33,0xffffffff);
      if (CONCAT44(iStack_12c,uStack_130) != 0) {
        FUN_1400020a8();
      }
      if (iVar25 != -1) {
        local_1d0 = *(undefined4 *)(local_228 + 1);
        local_1d8 = *local_228;
        FUN_14169f05e(local_210,iVar25);
      }
      *(undefined1 *)(local_210 + 0x359) = uVar43;
      param_2 = local_208;
      param_3 = local_228;
      param_1 = local_210;
      uVar43 = local_269;
    }
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *param_2 = *param_3;
  FUN_14029e8dd(local_188,local_180);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
LAB_140fff232:
  *(undefined1 *)(param_1 + 0x358) = uVar43;
  if ((local_e0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffff0a FUN_140ffff0a body=93 status=ok
// SIG undefined FUN_140ffff0a(void)

undefined8 * FUN_140ffff0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14029e8dd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141000116(param_1,iVar1);
      FUN_140ffff67(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140ffff67 FUN_140ffff67 body=248 status=ok
// SIG undefined FUN_140ffff67(void)

void FUN_140ffff67(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *_Src;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *_Dst;
  
  if (param_3 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x38);
    puVar8 = (undefined8 *)(param_2 + 0x10);
    do {
      *(undefined4 *)(puVar7 + -6) = *(undefined4 *)(puVar8 + -1);
      puVar7[-7] = puVar8[-2];
      _Dst = puVar7 + -5;
      bVar1 = *(byte *)(puVar8 + 4);
      uVar2 = *(ushort *)(puVar8 + 3);
      *(ushort *)(puVar7 + -2) = uVar2;
      _Src = puVar8;
      if (0x18 < uVar2) {
        puVar6 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *_Dst = puVar6;
        _Src = (undefined8 *)*puVar8;
        _Dst = puVar6;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar4 == (code *)0x0) {
        memcpy(_Dst,_Src,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar4)(_Dst);
      }
      *(undefined1 *)(puVar7 + -1) = *(undefined1 *)(puVar8 + 4);
      *puVar7 = 0;
      iVar3 = *(int *)(puVar8 + 6);
      uVar5 = puVar8[5];
      *(int *)(puVar7 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        FUN_1409c7014(puVar7,iVar3,0);
        FUN_1409c694a(*puVar7,uVar5,iVar3);
      }
      puVar7 = puVar7 + 9;
      puVar8 = puVar8 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141000060 FUN_141000060 body=93 status=ok
// SIG undefined FUN_141000060(void)

undefined8 * FUN_141000060(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d5a359(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487a3c7e(param_1,iVar1);
      FUN_1487a3ce0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1410000be FUN_1410000be body=88 status=ok
// SIG undefined FUN_1410000be(void)

undefined8 * FUN_1410000be(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1410008f6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 141000116 FUN_141000116 body=334 status=ok
// SIG undefined FUN_141000116(void)

void FUN_141000116(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141000188;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141000188:
    iVar5 = (int)(uVar4 / 0x48);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x48,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141000264 FUN_141000264 body=96 status=ok
// SIG undefined FUN_141000264(void)

void FUN_141000264(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406251ee(param_1,iVar2);
    }
    FUN_140ffff67((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1410002c4 FUN_1410002c4 body=597 status=ok
// SIG undefined FUN_1410002c4(void)

longlong FUN_1410002c4(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  ulonglong local_90;
  int local_88;
  ulonglong local_80;
  int local_78;
  ulonglong local_70;
  int local_68;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*param_1 == 0) || (iVar9 = param_1[1], iVar9 == 0)) || (*param_1 == DAT_14c948000)) {
LAB_14100048a:
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    if ((iVar9 < 2) && (param_1[9] < 1)) {
      puVar5 = (ulonglong *)(param_1 + 2);
    }
    else {
      puVar5 = *(ulonglong **)(param_1 + 6);
    }
    if (iVar9 < 1) goto LAB_14100048a;
    local_68 = (int)puVar5[1];
    local_70 = *puVar5;
  }
  if ((int)local_70 != 0) {
    local_68 = 0;
  }
  lVar4 = FUN_14100051a(&local_70);
  lVar1 = DAT_14cb84f20;
  if (lVar4 == 0) {
    if (DAT_14cb84f20 != 0) {
      if (param_1[1] == 2) {
        FUN_144a7660c(param_1,&local_60,1);
        iVar7 = local_58;
        uVar8 = uStack_5c;
        iVar9 = local_60;
        FUN_1400f0e12(param_1,&local_60,1);
        local_68 = local_58;
        local_70 = CONCAT44(uStack_5c,local_60);
        if (local_60 != 0) {
          local_68 = 0;
        }
      }
      else {
        local_78 = local_68;
        local_80 = local_70;
        uVar6 = local_70;
        if (local_68 != 0) {
          uVar3 = FUN_144a78877(local_70 & 0xffffffff,local_68);
          uVar6 = (ulonglong)uVar3;
        }
        iVar2 = FUN_1402b455c(&DAT_14cb7d010,uVar6,&local_80);
        iVar7 = 0;
        if (iVar2 == -1) {
          uVar8 = 0;
          iVar9 = 0;
        }
        else {
          uVar8 = 0;
          iVar9 = 0;
          lVar4 = (longlong)iVar2 * 0x20 + DAT_14cb7d010;
          iVar7 = 0;
          if (lVar4 != 0) {
            iVar9 = *(int *)(lVar4 + 0xc);
            uVar8 = *(undefined4 *)(lVar4 + 0x10);
            iVar7 = *(int *)(lVar4 + 0x14);
          }
        }
      }
      local_88 = local_68;
      local_90 = local_70;
      local_9c = iVar9;
      local_98 = uVar8;
      local_94 = iVar7;
      lVar4 = FUN_141000590(lVar1);
      if (lVar4 != 0) goto LAB_141000403;
    }
    lVar1 = DAT_14cb7cbd0;
    if (DAT_14cb7cbd0 == 0) {
      lVar4 = 0;
    }
    else {
      local_a8 = local_70;
      local_a0 = local_68;
      FUN_1448075d0(&local_60);
      lVar4 = FUN_1457dfbf8(lVar1,&local_60);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_141000403:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14100051a FUN_14100051a body=118 status=ok
// SIG undefined FUN_14100051a(void)

undefined8 FUN_14100051a(undefined4 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar1 = DAT_14cb86da8;
  if (DAT_14cb86da8 != 0) {
    if (param_1[2] == 0) {
      uVar3 = *param_1;
    }
    else {
      uVar3 = FUN_144a78877(*param_1,param_1[2]);
    }
    iVar2 = FUN_1406b6d2c((longlong *)(lVar1 + 0x380),uVar3,param_1);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x380);
      if (lVar1 + (longlong)iVar2 * 0x20 == 0) {
        return 0;
      }
      puVar4 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x20 + 0x10);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      return *puVar4;
    }
  }
  return 0;
}



// FUNCTION 141000590 FUN_141000590 body=176 status=ok
// SIG undefined FUN_141000590(void)

longlong * FUN_141000590(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14019f430();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14019f430();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_14100061e;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14100061e:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141000642 FUN_141000642 body=242 status=ok
// SIG undefined FUN_141000642(void)

void FUN_141000642(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar6 = (longlong *)FUN_140bde9ac();
  if ((plVar6 != (longlong *)0x0) && (lVar5 = plVar6[1], (longlong)(int)lVar5 != 0)) {
    lVar3 = *plVar6;
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar8);
      if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar8), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar1)) &&
           ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar6;
          }
          else {
            lVar7 = 0;
          }
          iVar1 = *(int *)(lVar7 + 0x90);
          *(uint *)(lVar7 + 0x90) = iVar1 + 1U;
          if (*(uint *)(lVar7 + 0x94) < iVar1 + 1U) {
            FUN_140d2f4b4((longlong *)(lVar7 + 0x88),iVar1);
          }
          lVar7 = *(longlong *)(lVar7 + 0x88);
          *(undefined8 *)(lVar7 + (longlong)iVar1 * 0x10) = *param_2;
          lVar4 = param_2[1];
          *(longlong *)(lVar7 + 8 + (longlong)iVar1 * 0x10) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
  }
  return;
}



// FUNCTION 141000734 FUN_141000734 body=227 status=ok
// SIG undefined FUN_141000734(void)

undefined8 * FUN_141000734(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140630e34(&local_38);
  if (local_30 != (longlong *)0x0) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_1410009da(local_38,param_1,param_3);
      }
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
      if (local_38 != 0) {
        if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_1;
      }
    }
  }
  puVar6 = &DAT_14c846480;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14100081a FUN_14100081a body=159 status=ok
// SIG undefined FUN_14100081a(void)

undefined8 * FUN_14100081a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1410008bc();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
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



// FUNCTION 1410008bc FUN_1410008bc body=57 status=ok
// SIG undefined FUN_1410008bc(void)

void FUN_1410008bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f040 = FUN_140002ddd(FUN_14653f0c0,uVar1,L"ReplicatedGeneratedMissionCreation");
  }
  return;
}



// FUNCTION 1410008f6 FUN_1410008f6 body=228 status=ok
// SIG undefined FUN_1410008f6(void)

void FUN_1410008f6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410009da FUN_1410009da body=777 status=ok
// SIG undefined FUN_1410009da(void)

undefined8 * FUN_1410009da(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  char local_a8 [16];
  int local_98 [6];
  longlong local_80;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140c258c2(param_3,local_a8);
  if (local_a8[0] == '\x01') {
    FUN_1447a97f4(&local_70,local_98);
    if (0 < local_6c) {
      lVar8 = 0;
      uVar9 = 0;
      iVar1 = local_6c;
      iVar2 = DAT_14c948000;
      do {
        bVar10 = local_70 != 0;
        bVar11 = local_70 != iVar2;
        piVar5 = &DAT_14c948620;
        piVar6 = (int *)&DAT_14c948618;
        if (bVar11 && bVar10) {
          puVar7 = local_68;
          if (0 < local_4c) {
            puVar7 = local_58;
          }
          if (1 < iVar1) {
            puVar7 = local_58;
          }
          piVar5 = (int *)(puVar7 + lVar8 + 8);
          piVar6 = (int *)(puVar7 + lVar8);
        }
        if ((*piVar6 == DAT_14cb7beb0) && (*piVar5 == DAT_14cb7beb8)) {
LAB_141000beb:
          FUN_1402b5374(&local_70,uVar9 & 0xffffffff,0);
          iVar1 = local_6c;
          iVar2 = DAT_14c948000;
        }
        else {
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bec8) && (*piVar5 == DAT_14cb7bed0)) goto LAB_141000beb;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bee0) && (*piVar5 == DAT_14cb7bee8)) goto LAB_141000beb;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bef8) && (*piVar5 == DAT_14cb7bf00)) goto LAB_141000beb;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bf10) && (*piVar5 == DAT_14cb7bf18)) goto LAB_141000beb;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)uVar9 < (longlong)iVar1);
    }
    local_98[0] = local_70;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar1 = FUN_1402b3efe((longlong *)(param_1 + 0x148),local_98[0],local_a8);
  if (iVar1 != -1) {
    lVar8 = *(longlong *)(param_1 + 0x148);
    if ((lVar8 + (longlong)iVar1 * 0x48 != 0) &&
       (piVar5 = (int *)(lVar8 + (longlong)iVar1 * 0x48 + 0x38), piVar5 != (int *)0x0)) {
      iVar1 = *piVar5;
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x80))) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 0x280 + 0x1f0);
        goto LAB_141000c7b;
      }
    }
  }
  puVar3 = &DAT_14c846480;
LAB_141000c7b:
  puVar4 = param_2;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141000ce4 FUN_141000ce4 body=576 status=ok
// SIG undefined FUN_141000ce4(void)

void FUN_141000ce4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar2 = *(int *)(param_1 + 0x3d0);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x3c8);
    if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x3b8);
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_1 + 0x3a8);
      lVar14 = *(longlong *)(*(longlong *)(lVar13 + 0x10 + (longlong)iVar5 * 0x20) + 0x3d0);
      if ((lVar14 != 0) && (cVar4 = FUN_1488fd002(lVar14,param_2), cVar4 != '\0')) {
        lVar14 = (longlong)(int)param_3[1];
        uVar9 = (int)param_3[1] + 1;
        *(uint *)(param_3 + 1) = uVar9;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar9) {
          FUN_1446dd912(param_3,lVar14);
        }
        puVar12 = (undefined8 *)(lVar13 + (longlong)iVar5 * 0x20);
        lVar13 = *param_3;
        *(undefined4 *)(lVar13 + 8 + lVar14 * 0xc) = *(undefined4 *)(puVar12 + 1);
        *(undefined8 *)(lVar13 + lVar14 * 0xc) = *puVar12;
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x3c8);
      if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x3b8);
      }
      iVar3 = *(int *)(param_1 + 0x3d0);
      iVar5 = (int)uVar15;
      lVar13 = (longlong)iVar5;
      uVar9 = puVar6[lVar13] & uVar11;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar14 = 0;
          do {
            uVar9 = puVar6[lVar13 + lVar14 + 1];
            if (uVar9 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_141000e2d;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar8 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_141000e2d:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 141000f24 FUN_141000f24 body=285 status=ok
// SIG undefined FUN_141000f24(void)

void FUN_141000f24(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar3 <= param_3) {
    uVar3 = param_3;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_40 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_40) {
    uVar4 = uVar3 + 1;
    local_40 = local_40 - 8;
    if (uVar1 <= local_40) {
      uVar4 = uVar4 + (local_40 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_2 + 8)),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141001042 FUN_141001042 body=48 status=ok
// SIG undefined FUN_141001042(void)

void FUN_141001042(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  FUN_141001072(param_1,param_2);
  return;
}



// FUNCTION 141001072 FUN_141001072 body=955 status=ok
// SIG undefined FUN_141001072(void)

void FUN_141001072(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_238 [32];
  int local_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  longlong *local_208;
  int *local_200;
  undefined4 **local_1f8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (*(char *)(param_1 + 0xf0) == '\x01')) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
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
  local_1f8 = &local_200;
  local_210 = 0x49e37810;
  iStack_20c = 1;
  local_200 = &local_210;
  local_208 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if (iVar5 < 7) {
    FUN_145cba7c3(&local_218);
    if (((*(byte *)(param_1 + 0xd4) & 1) == 0) || (*(char *)(param_1 + 0xd8) != '\x01')) {
      fVar3 = *(float *)(param_1 + 0xc4);
      local_210 = local_218;
      iStack_20c = iStack_214;
      dVar6 = (double)FUN_146811cfa(&local_210);
      dVar7 = (double)FUN_146811cfa(&local_210);
      dVar9 = (double)fVar3;
      if (dVar6 <= (double)fVar3) {
        dVar9 = dVar6;
      }
      if (dVar9 <= -dVar7) {
        dVar9 = -dVar7;
      }
      dVar9 = ((double)local_210 * dVar9) / (double)iStack_20c;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar9;
      auVar13 = roundpd(auVar13,auVar13,1);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (double)(int)(dVar9 - auVar13._0_8_) + dVar9;
      auVar17 = roundpd(auVar17,auVar17,1);
      dVar9 = auVar17._0_8_;
      if (2147483647.0 <= dVar9) {
        dVar9 = 2147483647.0;
      }
      if (dVar9 <= -2147483648.0) {
        dVar9 = -2147483648.0;
      }
      fVar3 = *(float *)(param_1 + 200);
      local_210 = local_218;
      iStack_20c = iStack_214;
      dVar7 = (double)FUN_146811cfa(&local_210);
      dVar8 = (double)FUN_146811cfa(&local_210);
      dVar6 = (double)fVar3;
      if (dVar7 <= (double)fVar3) {
        dVar6 = dVar7;
      }
      if (dVar6 <= -dVar8) {
        dVar6 = -dVar8;
      }
      dVar6 = ((double)local_210 * dVar6) / (double)iStack_20c;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar6;
      auVar17 = roundpd(auVar14,auVar14,1);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (double)(int)(dVar6 - auVar17._0_8_) + dVar6;
      auVar17 = roundpd(auVar10,auVar10,1);
      dVar6 = auVar17._0_8_;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      *(undefined1 *)(param_1 + 0x98) = 1;
      *(int *)(param_1 + 0x9c) = (int)dVar9;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(int *)(param_1 + 0xa4) = (int)dVar6 + 1;
    }
    else {
      *(undefined8 *)(param_1 + 0x98) = 2;
      *(undefined8 *)(param_1 + 0xa0) = 2;
    }
    dVar9 = ((double)*(float *)(param_1 + 0xcc) * (double)local_218) / (double)iStack_214;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar9;
    auVar17 = roundpd(auVar16,auVar16,1);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (double)(int)(dVar9 - auVar17._0_8_) + dVar9;
    auVar17 = roundpd(auVar11,auVar11,1);
    dVar9 = auVar17._0_8_;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    *(int *)(param_1 + 0xb0) = (int)dVar9;
    dVar9 = ((double)*(float *)(param_1 + 0xd0) * (double)local_218) / (double)iStack_214;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar9;
    auVar17 = roundpd(auVar15,auVar15,1);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (double)(int)(dVar9 - auVar17._0_8_) + dVar9;
    auVar17 = roundpd(auVar12,auVar12,1);
    dVar9 = auVar17._0_8_;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    *(int *)(param_1 + 0xb4) = (int)dVar9;
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100142e FUN_14100142e body=65 status=ok
// SIG undefined FUN_14100142e(void)

undefined8 * FUN_14100142e(undefined8 *param_1)

{
  FUN_14086a0da();
  *param_1 = &PTR_FUN_14b782a90;
  param_1[5] = &PTR_FUN_14b782d40;
  param_1[10] = &PTR_FUN_14b782d70;
  param_1[0xb] = &PTR_FUN_14b782da0;
  return param_1;
}



// FUNCTION 141001474 FUN_141001474 body=221 status=ok
// SIG undefined FUN_141001474(void)

longlong FUN_141001474(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14843d25d;
    local_40 = &LAB_14648df54;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"TransformProxy",&DAT_14cb4b340,
                  &DAT_14843d25c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141001552 FUN_141001552 body=78 status=ok
// SIG undefined FUN_141001552(void)

void FUN_141001552(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b93bb00;
  param_1[5] = &PTR_LAB_14b93bdb0;
  param_1[10] = &PTR_LAB_14b93bde0;
  param_1[0xb] = &PTR_LAB_14b93be10;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14071fe68(param_1);
  return;
}



// FUNCTION 1410015a0 FUN_1410015a0 body=793 status=ok
// SIG undefined FUN_1410015a0(void)

void FUN_1410015a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1410018ba(local_20,local_28);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410018ba FUN_1410018ba body=364 status=ok
// SIG undefined FUN_1410018ba(void)

undefined8 FUN_1410018ba(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_d8 [32];
  char local_b8 [16];
  longlong *local_a8;
  undefined4 local_90 [2];
  undefined1 local_88 [8];
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88,param_1,param_2);
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_1456bb102(local_b8,param_1);
  FUN_1447c3578(local_88,local_50,local_b8);
  uVar3 = FUN_14030a32e(local_50);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar4 = local_50;
    if (0x18 < local_38) {
      ppppuVar4 = (undefined8 ****)local_50[0];
    }
    (*pcVar2)(ppppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_80[0];
    if (local_68 < 0x19) {
      ppppuVar4 = local_80;
    }
    (*pcVar2)(ppppuVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(local_80[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 141001a28 FUN_141001a28 body=95 status=ok
// SIG undefined FUN_141001a28(void)

undefined8 * FUN_141001a28(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 == 0) || (param_3 == 0 || *(longlong *)(param_2 + 0x28) == 0)) {
    if (param_3 == 0) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      FUN_14034cca6(param_1,param_3 + 0x30);
    }
  }
  else {
    FUN_14108b31e(*(longlong *)(param_2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 141001a88 thunk_FUN_141001a8e body=5 status=ok
// SIG undefined thunk_FUN_141001a8e(void)

int thunk_FUN_141001a8e(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_4a8 [32];
  undefined8 *puStack_488;
  code **ppcStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  wchar_t *pwStack_468;
  code *pcStack_460;
  undefined1 *puStack_458;
  uint *puStack_450;
  code *pcStack_448;
  code *pcStack_440;
  uint uStack_434;
  uint *puStack_430;
  undefined8 uStack_428;
  int iStack_420;
  undefined1 uStack_419;
  undefined8 uStack_418;
  undefined8 uStack_410;
  longlong lStack_408;
  undefined4 uStack_400;
  longlong lStack_3f8;
  int iStack_3f0;
  longlong lStack_3e8;
  undefined4 uStack_3e0;
  undefined8 uStack_3d8;
  longlong lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  code *pcStack_378;
  undefined8 uStack_370;
  longlong *plStack_368;
  longlong alStack_358 [5];
  uint uStack_330;
  uint uStack_32c;
  int iStack_328;
  undefined8 uStack_324;
  undefined1 auStack_318 [704];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_14012344a();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  if (param_2[2] == 0) {
    iVar5 = 0;
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_141002271;
    plVar15 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
      param_2[2] = 0;
      iVar5 = 0;
      goto LAB_141002271;
    }
    uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
    lVar7 = FUN_144aff482(uVar6,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_141002271;
  }
  if ((*param_3 == 0) || (cVar4 = FUN_140317ca6(param_3 + 1,0), cVar4 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_141002659:
      lVar7 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        puStack_450 = &uStack_330;
        uStack_330 = 0x40754f84;
        uStack_32c = 1;
        pcStack_440 = FUN_14081d0ea;
        pcStack_448 = FUN_14081d0ea;
        puStack_458 = &LAB_147da9a76;
        pcStack_460 = FUN_1409f3105;
        pwStack_468 = L"Engine";
        uStack_470 = 0;
        uStack_478 = 0x10000000;
        ppcStack_480 = (code **)CONCAT44(ppcStack_480._4_4_,8);
        puStack_488 = (undefined8 *)CONCAT44(puStack_488._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_141002659;
    }
    if (*param_3 == 0) {
      DAT_14c763920 = DAT_14c763920 + -1;
      *param_3 = DAT_14c763920;
    }
    if (lVar7 == 0) {
      param_3[1] = 0;
      iVar5 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar7 + 0xc);
      param_3[1] = uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar7 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar5 = iVar12;
        }
      }
    }
    param_3[2] = iVar5;
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  uVar16 = 0;
  if (lVar7 == 0) {
LAB_141002661:
    iStack_328 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      puStack_450 = &uStack_330;
      uStack_330 = 0x40754f84;
      uStack_32c = 1;
      pcStack_440 = FUN_14081d0ea;
      pcStack_448 = FUN_14081d0ea;
      puStack_458 = &LAB_147da9a76;
      pcStack_460 = FUN_1409f3105;
      pwStack_468 = L"Engine";
      uStack_470 = 0;
      uStack_478 = 0x10000000;
      ppcStack_480 = (code **)CONCAT44(ppcStack_480._4_4_,8);
      puStack_488 = (undefined8 *)CONCAT44(puStack_488._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38))
    goto LAB_141002661;
    uVar16 = 0;
    iStack_328 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30) {
      uVar16 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iStack_328 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iStack_328 = *(int *)(lVar7 + 0x10);
        bVar17 = iStack_328 == 0;
        if (bVar17) {
          *(int *)(lVar7 + 0x10) = iVar12;
          iStack_328 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iStack_328 = iVar12;
        }
      }
    }
  }
  uStack_330 = uStack_330 & 0xffffff00;
  uStack_324 = 0;
  puStack_58 = (undefined1 *)0x0;
  uStack_50 = 0x800000000;
  lVar7 = *(longlong *)(param_1 + 0x40);
  pcStack_378 = (code *)CONCAT44(pcStack_378._4_4_,*param_3);
  uStack_32c = uVar16;
  lVar8 = FUN_140319b56(lVar7 + 0x108,*param_3,&pcStack_378);
  if ((((*(int *)(lVar7 + 0xe4) != 0) && (uVar16 = *(uint *)(lVar7 + 0xe0), -1 < (int)uVar16)) &&
      ((int)uVar16 < DAT_14c9647dc)) &&
     (((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
       puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(lVar7 + 0xe4))) &&
      ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar11;
    }
    else {
      uVar6 = 0;
    }
    FUN_145c627ea(lVar8,uVar6);
    *(undefined8 *)(lVar7 + 0xe0) = 0;
  }
  iVar5 = DAT_14c9647dc;
  lVar13 = DAT_14c9647c8;
  if (((*(int *)(lVar7 + 0xec) != 0) && (uVar16 = *(uint *)(lVar7 + 0xe8), -1 < (int)uVar16)) &&
     (((int)uVar16 < DAT_14c9647dc &&
      (((plVar15 = (longlong *)
                   ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
        plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(lVar7 + 0xec))) &&
       ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
      puVar14 = (uint *)(lVar8 + 0x28);
      if (*plVar15 == 0) goto LAB_141002612;
      uVar16 = *(uint *)(*plVar15 + 0xc);
      *puVar14 = uVar16;
      if ((int)uVar16 < iVar5) {
        lVar13 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(lVar13 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar16 = *(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uStack_434 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        puStack_430 = puVar14;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uStack_434);
        }
        LOCK();
        uVar16 = *(uint *)(lVar13 + 0x10);
        bVar17 = uVar16 == 0;
        if (bVar17) {
          *(uint *)(lVar13 + 0x10) = uStack_434;
          uVar16 = 0;
        }
        UNLOCK();
        puVar14 = puStack_430;
        if (bVar17) {
          uVar16 = uStack_434;
        }
      }
    }
    else {
LAB_141002612:
      *(uint *)(lVar8 + 0x28) = 0;
      puVar14 = (uint *)(lVar8 + 0x28);
      uVar16 = 0;
    }
    puVar14[1] = uVar16;
    *(undefined8 *)(lVar7 + 0xe8) = 0;
  }
  if (((*(double *)(lVar7 + 0xf0) != 0.0) || (NAN(*(double *)(lVar7 + 0xf0)))) ||
     (((*(double *)(lVar7 + 0xf8) != 0.0 ||
       ((NAN(*(double *)(lVar7 + 0xf8)) || (*(double *)(lVar7 + 0x100) != 0.0)))) ||
      (NAN(*(double *)(lVar7 + 0x100)))))) {
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar7 + 0x100);
    uVar6 = *(undefined8 *)(lVar7 + 0xf8);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar7 + 0xf0);
    *(undefined8 *)(lVar8 + 0x38) = uVar6;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(lVar7 + 0xf0) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(lVar7 + 0xf4) = uVar1;
    *(undefined4 *)(lVar7 + 0xf8) = uVar2;
    *(undefined4 *)(lVar7 + 0xfc) = uVar3;
    *(undefined8 *)(lVar7 + 0x100) = DAT_14c8464f0;
  }
  lVar7 = *(longlong *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)param_3;
  *(int *)(lVar7 + 0xd8) = param_3[2];
  *(undefined8 *)(lVar7 + 0xd0) = uVar6;
  *(undefined1 *)(lVar7 + 0xdc) = 0;
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (*(int *)(lVar7 + 0x110) != *(int *)(lVar7 + 0x13c)) {
    lVar8 = lVar7 + 0x140;
    if (*(longlong *)(lVar7 + 0x148) != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x148);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x150) - 1U & *(uint *)(lVar7 + 0xd0)) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58;
        if (*(uint *)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58) ==
            *(uint *)(lVar7 + 0xd0)) {
          if ((lVar8 != 0) && (cVar4 = FUN_143d63dee(lVar8 + 0x10), cVar4 == '\0')) {
            lVar8 = lVar8 + 8;
            goto LAB_141001e1d;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x50);
      } while (iVar5 != -1);
    }
  }
  FUN_145c62534(lVar7);
  if (*(int *)(lVar7 + 0x110) != *(int *)(lVar7 + 0x13c)) {
    lVar8 = lVar7 + 0x140;
    if (*(longlong *)(lVar7 + 0x148) != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x148);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x150) - 1U & *(uint *)(lVar7 + 0xd0)) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58;
        if (*(uint *)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58) ==
            *(uint *)(lVar7 + 0xd0)) {
          if ((lVar8 != 0) && (lVar8 = lVar8 + 8, lVar8 != 0)) goto LAB_141001e1d;
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x50);
      } while (iVar5 != -1);
    }
  }
LAB_141002353:
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
LAB_141001e5f:
  lVar8 = FUN_140316ff8();
  lVar7 = *(longlong *)(lVar8 + 0x1d0);
  if (lVar7 == 0) {
    uVar6 = FUN_140490c9a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar8 + 0x1d0) = lVar7;
  }
  pcVar9 = *(code **)(lVar8 + 0x1c8);
  if (*(longlong *)(lVar8 + 0x1d8) == 0) {
    if ((lVar7 != 0) && (pcVar9 != (code *)0x0)) {
      plVar15 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar15 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
        *(undefined8 *)(lVar8 + 0x1d8) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
        lVar7 = FUN_144aff482(uVar6,lVar8 + 0x1c8);
        *(longlong *)(lVar8 + 0x1d8) = lVar7;
        if (lVar7 != 0) {
          pcVar9 = *(code **)(lVar8 + 0x1c8);
          lVar7 = *(longlong *)(lVar8 + 0x1d0);
          goto LAB_141001e96;
        }
      }
    }
  }
  else {
LAB_141001e96:
    pcStack_378 = pcVar9;
    uVar6 = FUN_14477b664(lVar7);
    uStack_370 = FUN_14477b664(uVar6);
    plStack_368 = *(longlong **)(lVar8 + 0x1d8);
    puVar10 = puStack_58;
    if (puStack_58 == (undefined1 *)0x0) {
      puVar10 = auStack_318;
    }
    if ((longlong)(int)uStack_50 != 0) {
      puStack_430 = (uint *)((longlong)(int)uStack_50 * 0x58);
      do {
        cVar4 = FUN_14131be66(&pcStack_378,puVar10);
        if (cVar4 != '\0') {
          if (puVar10 != (undefined1 *)0x0) {
            puVar10 = puVar10 + 0x18;
            goto LAB_141001ef6;
          }
          break;
        }
        puVar10 = puVar10 + 0x58;
        puStack_430 = puStack_430 + -0x16;
      } while (puStack_430 != (uint *)0x0);
    }
    puVar10 = (undefined1 *)FUN_14042880c(auStack_318,lVar8 + 0x1c8);
LAB_141001ef6:
    FUN_14067bbc2(puVar10,&uStack_398);
  }
  FUN_14067aea4(param_1,&uStack_330);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3d8 = (code *)0x0;
  lStack_3d0 = 0;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_14012344a();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
    plVar15 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar15 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar15 + 0x108))(), cVar4 == '\0'))
    {
      lVar8 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
      lVar8 = FUN_144aff482(uVar6,param_2);
    }
    param_2[2] = lVar8;
  }
  FUN_1405a5fa0(lVar8,&lStack_408);
  if (iStack_3f0 == 0) {
    FUN_140dd9210(&lStack_408,param_2);
  }
  ppcStack_480 = (code **)&uStack_3d8;
  puStack_488 = &uStack_3c8;
  cVar4 = FUN_143d68312(*(undefined8 *)(param_1 + 0x50),&uStack_330,&lStack_408,param_4);
  iVar5 = 0;
  iVar12 = 0;
  if (((cVar4 != '\0') && (lStack_3d0 != 0)) &&
     ((uStack_3d8._4_4_ != 0 &&
      ((((iVar5 = iVar12, -1 < (int)(uint)uStack_3d8 && ((int)(uint)uStack_3d8 < DAT_14c9647dc)) &&
        (lVar7 = (ulonglong)(((uint)uStack_3d8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_3d8 >> 0x10) * 8),
        lVar7 != 0)) &&
       ((*(int *)(lVar7 + 0x10) == uStack_3d8._4_4_ && ((*(uint *)(lVar7 + 8) & 0x10200000) == 0))))
      )))) {
    uStack_410 = uStack_3c8;
    lVar7 = FUN_140899680();
    if (lVar7 == 0) {
      uStack_418 = 0;
    }
    else {
      uStack_418 = *(undefined8 *)(lVar7 + 0x40);
    }
    uStack_419 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    pcStack_378 = (code *)0x0;
    plStack_368 = (longlong *)FUN_14001cc68(0x28,8);
    *plStack_368 = (longlong)&PTR_FUN_14b406ef0;
    plStack_368[1] = (longlong)&uStack_410;
    plStack_368[2] = param_4;
    plStack_368[3] = (longlong)&uStack_418;
    plStack_368[4] = (longlong)&uStack_419;
    if (plStack_368 + 1 != (longlong *)0x0) {
      pcStack_378 = FUN_143d64606;
    }
    iStack_420 = param_3[2];
    puStack_488 = &uStack_428;
    uStack_428 = *(undefined8 *)param_3;
    ppcStack_480 = &pcStack_378;
    iVar5 = FUN_143d65da6(uVar6,&uStack_3d8,&uStack_3c8,param_4);
    if (pcStack_378 != (code *)0x0) {
      plVar15 = plStack_368;
      if (plStack_368 == (longlong *)0x0) {
        plVar15 = alStack_358;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_143d6698a(*(undefined8 *)(param_1 + 0x48),iVar5);
    }
  }
  FUN_1400e1c41(lStack_3e8,uStack_3e0);
  if (lStack_3e8 != 0) {
    FUN_1400020a8();
  }
  if (lStack_3f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1400e1c6c(lStack_408,uStack_400);
  if (lStack_408 != 0) {
    FUN_1400020a8();
  }
  FUN_1407acd04(auStack_318);
LAB_141002271:
  if ((uStack_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
LAB_141001e1d:
  cVar4 = FUN_143d63dee(lVar8 + 8);
  if (cVar4 != '\0') goto LAB_141002353;
  uStack_398 = *(undefined8 *)(lVar8 + 0x10);
  uVar6 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x18));
  uStack_390 = FUN_14477b664(uVar6);
  uStack_388 = *(undefined8 *)(lVar8 + 0x20);
  goto LAB_141001e5f;
}



// FUNCTION 141001a8e FUN_141001a8e body=3283 status=ok
// SIG undefined FUN_141001a8e(void)

int FUN_141001a8e(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  code **local_480;
  undefined4 local_478;
  undefined8 local_470;
  wchar_t *local_468;
  code *local_460;
  undefined1 *local_458;
  uint *local_450;
  code *local_448;
  code *local_440;
  uint local_434;
  uint *local_430;
  undefined8 local_428;
  int local_420;
  undefined1 local_419;
  undefined8 local_418;
  undefined8 local_410;
  longlong local_408;
  undefined4 local_400;
  longlong local_3f8;
  int local_3f0;
  longlong local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  longlong lStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  code *local_378;
  undefined8 local_370;
  longlong *local_368;
  longlong local_358 [5];
  uint local_330;
  uint uStack_32c;
  int iStack_328;
  undefined8 local_324;
  undefined1 local_318 [704];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_14012344a();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  if (param_2[2] == 0) {
    iVar5 = 0;
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_141002271;
    plVar15 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
      param_2[2] = 0;
      iVar5 = 0;
      goto LAB_141002271;
    }
    uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
    lVar7 = FUN_144aff482(uVar6,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_141002271;
  }
  if ((*param_3 == 0) || (cVar4 = FUN_140317ca6(param_3 + 1,0), cVar4 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_141002659:
      lVar7 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        local_450 = &local_330;
        local_330 = 0x40754f84;
        uStack_32c = 1;
        local_440 = FUN_14081d0ea;
        local_448 = FUN_14081d0ea;
        local_458 = &LAB_147da9a76;
        local_460 = FUN_1409f3105;
        local_468 = L"Engine";
        local_470 = 0;
        local_478 = 0x10000000;
        local_480 = (code **)CONCAT44(local_480._4_4_,8);
        local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_141002659;
    }
    if (*param_3 == 0) {
      DAT_14c763920 = DAT_14c763920 + -1;
      *param_3 = DAT_14c763920;
    }
    if (lVar7 == 0) {
      param_3[1] = 0;
      iVar5 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar7 + 0xc);
      param_3[1] = uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar7 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar5 = iVar12;
        }
      }
    }
    param_3[2] = iVar5;
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  uVar16 = 0;
  if (lVar7 == 0) {
LAB_141002661:
    iStack_328 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_450 = &local_330;
      local_330 = 0x40754f84;
      uStack_32c = 1;
      local_440 = FUN_14081d0ea;
      local_448 = FUN_14081d0ea;
      local_458 = &LAB_147da9a76;
      local_460 = FUN_1409f3105;
      local_468 = L"Engine";
      local_470 = 0;
      local_478 = 0x10000000;
      local_480 = (code **)CONCAT44(local_480._4_4_,8);
      local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38))
    goto LAB_141002661;
    uVar16 = 0;
    iStack_328 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30) {
      uVar16 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iStack_328 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iStack_328 = *(int *)(lVar7 + 0x10);
        bVar17 = iStack_328 == 0;
        if (bVar17) {
          *(int *)(lVar7 + 0x10) = iVar12;
          iStack_328 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iStack_328 = iVar12;
        }
      }
    }
  }
  local_330 = local_330 & 0xffffff00;
  local_324 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  lVar7 = *(longlong *)(param_1 + 0x40);
  local_378 = (code *)CONCAT44(local_378._4_4_,*param_3);
  uStack_32c = uVar16;
  lVar8 = FUN_140319b56(lVar7 + 0x108,*param_3,&local_378);
  if ((((*(int *)(lVar7 + 0xe4) != 0) && (uVar16 = *(uint *)(lVar7 + 0xe0), -1 < (int)uVar16)) &&
      ((int)uVar16 < DAT_14c9647dc)) &&
     (((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
       puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(lVar7 + 0xe4))) &&
      ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar11;
    }
    else {
      uVar6 = 0;
    }
    FUN_145c627ea(lVar8,uVar6);
    *(undefined8 *)(lVar7 + 0xe0) = 0;
  }
  iVar5 = DAT_14c9647dc;
  lVar13 = DAT_14c9647c8;
  if (((*(int *)(lVar7 + 0xec) != 0) && (uVar16 = *(uint *)(lVar7 + 0xe8), -1 < (int)uVar16)) &&
     (((int)uVar16 < DAT_14c9647dc &&
      (((plVar15 = (longlong *)
                   ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
        plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(lVar7 + 0xec))) &&
       ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
      puVar14 = (uint *)(lVar8 + 0x28);
      if (*plVar15 == 0) goto LAB_141002612;
      uVar16 = *(uint *)(*plVar15 + 0xc);
      *puVar14 = uVar16;
      if ((int)uVar16 < iVar5) {
        lVar13 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(lVar13 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar16 = *(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        local_434 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        local_430 = puVar14;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        local_434);
        }
        LOCK();
        uVar16 = *(uint *)(lVar13 + 0x10);
        bVar17 = uVar16 == 0;
        if (bVar17) {
          *(uint *)(lVar13 + 0x10) = local_434;
          uVar16 = 0;
        }
        UNLOCK();
        puVar14 = local_430;
        if (bVar17) {
          uVar16 = local_434;
        }
      }
    }
    else {
LAB_141002612:
      *(uint *)(lVar8 + 0x28) = 0;
      puVar14 = (uint *)(lVar8 + 0x28);
      uVar16 = 0;
    }
    puVar14[1] = uVar16;
    *(undefined8 *)(lVar7 + 0xe8) = 0;
  }
  if (((*(double *)(lVar7 + 0xf0) != 0.0) || (NAN(*(double *)(lVar7 + 0xf0)))) ||
     (((*(double *)(lVar7 + 0xf8) != 0.0 ||
       ((NAN(*(double *)(lVar7 + 0xf8)) || (*(double *)(lVar7 + 0x100) != 0.0)))) ||
      (NAN(*(double *)(lVar7 + 0x100)))))) {
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar7 + 0x100);
    uVar6 = *(undefined8 *)(lVar7 + 0xf8);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar7 + 0xf0);
    *(undefined8 *)(lVar8 + 0x38) = uVar6;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(lVar7 + 0xf0) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(lVar7 + 0xf4) = uVar1;
    *(undefined4 *)(lVar7 + 0xf8) = uVar2;
    *(undefined4 *)(lVar7 + 0xfc) = uVar3;
    *(undefined8 *)(lVar7 + 0x100) = DAT_14c8464f0;
  }
  lVar7 = *(longlong *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)param_3;
  *(int *)(lVar7 + 0xd8) = param_3[2];
  *(undefined8 *)(lVar7 + 0xd0) = uVar6;
  *(undefined1 *)(lVar7 + 0xdc) = 0;
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (*(int *)(lVar7 + 0x110) != *(int *)(lVar7 + 0x13c)) {
    lVar8 = lVar7 + 0x140;
    if (*(longlong *)(lVar7 + 0x148) != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x148);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x150) - 1U & *(uint *)(lVar7 + 0xd0)) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58;
        if (*(uint *)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58) ==
            *(uint *)(lVar7 + 0xd0)) {
          if ((lVar8 != 0) && (cVar4 = FUN_143d63dee(lVar8 + 0x10), cVar4 == '\0')) {
            lVar8 = lVar8 + 8;
            goto LAB_141001e1d;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x50);
      } while (iVar5 != -1);
    }
  }
  FUN_145c62534(lVar7);
  if (*(int *)(lVar7 + 0x110) != *(int *)(lVar7 + 0x13c)) {
    lVar8 = lVar7 + 0x140;
    if (*(longlong *)(lVar7 + 0x148) != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x148);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x150) - 1U & *(uint *)(lVar7 + 0xd0)) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58;
        if (*(uint *)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar5 * 0x58) ==
            *(uint *)(lVar7 + 0xd0)) {
          if ((lVar8 != 0) && (lVar8 = lVar8 + 8, lVar8 != 0)) goto LAB_141001e1d;
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x50);
      } while (iVar5 != -1);
    }
  }
LAB_141002353:
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
LAB_141001e5f:
  lVar8 = FUN_140316ff8();
  lVar7 = *(longlong *)(lVar8 + 0x1d0);
  if (lVar7 == 0) {
    uVar6 = FUN_140490c9a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar8 + 0x1d0) = lVar7;
  }
  pcVar9 = *(code **)(lVar8 + 0x1c8);
  if (*(longlong *)(lVar8 + 0x1d8) == 0) {
    if ((lVar7 != 0) && (pcVar9 != (code *)0x0)) {
      plVar15 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar15 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
        *(undefined8 *)(lVar8 + 0x1d8) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
        lVar7 = FUN_144aff482(uVar6,lVar8 + 0x1c8);
        *(longlong *)(lVar8 + 0x1d8) = lVar7;
        if (lVar7 != 0) {
          pcVar9 = *(code **)(lVar8 + 0x1c8);
          lVar7 = *(longlong *)(lVar8 + 0x1d0);
          goto LAB_141001e96;
        }
      }
    }
  }
  else {
LAB_141001e96:
    local_378 = pcVar9;
    uVar6 = FUN_14477b664(lVar7);
    local_370 = FUN_14477b664(uVar6);
    local_368 = *(longlong **)(lVar8 + 0x1d8);
    puVar10 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar10 = local_318;
    }
    if ((longlong)(int)local_50 != 0) {
      local_430 = (uint *)((longlong)(int)local_50 * 0x58);
      do {
        cVar4 = FUN_14131be66(&local_378,puVar10);
        if (cVar4 != '\0') {
          if (puVar10 != (undefined1 *)0x0) {
            puVar10 = puVar10 + 0x18;
            goto LAB_141001ef6;
          }
          break;
        }
        puVar10 = puVar10 + 0x58;
        local_430 = local_430 + -0x16;
      } while (local_430 != (uint *)0x0);
    }
    puVar10 = (undefined1 *)FUN_14042880c(local_318,lVar8 + 0x1c8);
LAB_141001ef6:
    FUN_14067bbc2(puVar10,&local_398);
  }
  FUN_14067aea4(param_1,&local_330);
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3a8 = 0;
  local_3d8 = (code *)0x0;
  lStack_3d0 = 0;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_14012344a();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
    plVar15 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar15 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar15 + 0x108))(), cVar4 == '\0'))
    {
      lVar8 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
      lVar8 = FUN_144aff482(uVar6,param_2);
    }
    param_2[2] = lVar8;
  }
  FUN_1405a5fa0(lVar8,&local_408);
  if (local_3f0 == 0) {
    FUN_140dd9210(&local_408,param_2);
  }
  local_480 = (code **)&local_3d8;
  local_488 = &local_3c8;
  cVar4 = FUN_143d68312(*(undefined8 *)(param_1 + 0x50),&local_330,&local_408,param_4);
  iVar5 = 0;
  iVar12 = 0;
  if (((cVar4 != '\0') && (lStack_3d0 != 0)) &&
     ((local_3d8._4_4_ != 0 &&
      ((((iVar5 = iVar12, -1 < (int)(uint)local_3d8 && ((int)(uint)local_3d8 < DAT_14c9647dc)) &&
        (lVar7 = (ulonglong)(((uint)local_3d8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_3d8 >> 0x10) * 8), lVar7 != 0
        )) && ((*(int *)(lVar7 + 0x10) == local_3d8._4_4_ &&
               ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))))) {
    local_410 = local_3c8;
    lVar7 = FUN_140899680();
    if (lVar7 == 0) {
      local_418 = 0;
    }
    else {
      local_418 = *(undefined8 *)(lVar7 + 0x40);
    }
    local_419 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    local_378 = (code *)0x0;
    local_368 = (longlong *)FUN_14001cc68(0x28,8);
    *local_368 = (longlong)&PTR_FUN_14b406ef0;
    local_368[1] = (longlong)&local_410;
    local_368[2] = param_4;
    local_368[3] = (longlong)&local_418;
    local_368[4] = (longlong)&local_419;
    if (local_368 + 1 != (longlong *)0x0) {
      local_378 = FUN_143d64606;
    }
    local_420 = param_3[2];
    local_488 = &local_428;
    local_428 = *(undefined8 *)param_3;
    local_480 = &local_378;
    iVar5 = FUN_143d65da6(uVar6,&local_3d8,&local_3c8,param_4);
    if (local_378 != (code *)0x0) {
      plVar15 = local_368;
      if (local_368 == (longlong *)0x0) {
        plVar15 = local_358;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_143d6698a(*(undefined8 *)(param_1 + 0x48),iVar5);
    }
  }
  FUN_1400e1c41(local_3e8,local_3e0);
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1400e1c6c(local_408,local_400);
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  FUN_1407acd04(local_318);
LAB_141002271:
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
LAB_141001e1d:
  cVar4 = FUN_143d63dee(lVar8 + 8);
  if (cVar4 != '\0') goto LAB_141002353;
  local_398 = *(undefined8 *)(lVar8 + 0x10);
  uVar6 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x18));
  uStack_390 = FUN_14477b664(uVar6);
  local_388 = *(undefined8 *)(lVar8 + 0x20);
  goto LAB_141001e5f;
}



// FUNCTION 141002762 FUN_141002762 body=103 status=ok
// SIG undefined FUN_141002762(void)

ulonglong FUN_141002762(longlong param_1)

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
LAB_1410027ac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1410027ac;
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



// FUNCTION 1410027da FUN_1410027da body=89 status=ok
// SIG undefined FUN_1410027da(void)

void FUN_1410027da(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x98))();
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    lVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_141002834(param_1,lVar3 + 0xb8,param_3);
    return;
  }
  return;
}



// FUNCTION 141002834 FUN_141002834 body=540 status=ok
// SIG undefined FUN_141002834(void)

void FUN_141002834(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  if ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc)) {
    lVar1 = *param_2;
    lVar4 = param_2[1];
    uVar5 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar8 = (uint)lVar1 & 0xffff;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    uVar7 = (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar9 >> 4);
    uVar5 = uVar7 >> 0xd ^
            ((int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar8) +
             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) - uVar7;
    uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
    uVar9 = uVar8 >> 0xd ^ (uVar7 - uVar5) - uVar8;
    uVar7 = uVar9 >> 0xc ^ (uVar5 - uVar8) - uVar9;
    uVar5 = uVar7 << 0x10 ^ (uVar8 - uVar9) - uVar7;
    uVar8 = uVar5 >> 5 ^ (uVar9 - uVar7) - uVar5;
    uVar7 = uVar8 >> 3 ^ (uVar7 - uVar5) - uVar8;
    uVar5 = uVar7 << 10 ^ (uVar5 - uVar8) - uVar7;
    plVar6 = param_1 + 0x1a;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1b];
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_1[0x1c] - 1U & (uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5)))
                    * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x13] + (longlong)iVar3 * 0x28);
        if ((*plVar6 == lVar1) &&
           (*(longlong *)(param_1[0x13] + 8 + (longlong)iVar3 * 0x28) == lVar4)) {
          if (plVar6 == (longlong *)0x0) {
            return;
          }
          plVar6 = plVar6 + 2;
          if (plVar6 == (longlong *)0x0) {
            return;
          }
          lVar1 = *plVar6;
          uVar2 = FUN_140b95084(param_2);
          iVar3 = FUN_140b95012((longlong *)(lVar1 + 0x28),uVar2,param_2);
          if (iVar3 == -1) {
            return;
          }
          lVar1 = *(longlong *)(lVar1 + 0x28);
          lVar4 = lVar1 + (longlong)iVar3 * 0x58;
          if (lVar4 == 0) {
            return;
          }
          if (*(char *)(lVar4 + 0x40) != '\0') {
            return;
          }
          fVar10 = *(float *)(lVar4 + 0x44);
          (**(code **)(*param_1 + 0x68))(param_1,(longlong)iVar3 * 0x58 + lVar1 + 0x18);
          FUN_141002a50(*plVar6,param_2,param_3);
          fVar10 = *(float *)((longlong)param_1 + 0x664) - fVar10;
          fVar11 = 0.0;
          if (0.0 <= fVar10) {
            fVar11 = fVar10;
          }
          *(float *)((longlong)param_1 + 0x664) = fVar11;
          return;
        }
        iVar3 = (int)plVar6[4];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 141002a50 FUN_141002a50 body=1751 status=ok
// SIG undefined FUN_141002a50(void)

void FUN_141002a50(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong **pplVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_98 [40];
  code *local_70;
  longlong **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 5;
  uVar8 = FUN_140b95084(param_2);
  iVar9 = FUN_140b95012(plVar1,uVar8,param_2);
  if (((iVar9 == -1) || (lVar15 = (longlong)iVar9 * 0x58 + *plVar1, lVar15 == -0x18 || lVar15 == 0))
     || (*(char *)(lVar15 + 0x40) != '\0')) goto LAB_141003080;
  if (param_3 == 0) {
    *(undefined1 *)(lVar15 + 0x40) = 1;
  }
  else {
    FUN_14092a154(param_1[2],param_1 + 3);
  }
  if ((((*(int *)(lVar15 + 0x34) == 0) || (uVar5 = *(uint *)(lVar15 + 0x30), (int)uVar5 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar5 ||
       ((local_60 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
        local_60 == (longlong *)0x0 || ((int)local_60[2] != *(int *)(lVar15 + 0x34))))))) ||
     ((*(uint *)(local_60 + 1) & 0x10200000) != 0)) {
    local_60 = (longlong *)0x0;
  }
  else {
    local_60 = (longlong *)*local_60;
    if (param_3 == 1 && local_60 != (longlong *)0x0) {
      local_68 = &local_58;
      local_50 = &local_60;
      local_70 = FUN_1437edd40;
      local_58 = param_1;
      FUN_1417b144e();
    }
  }
  cVar7 = *(char *)((longlong)param_2 + 0x14);
  if (cVar7 == '\x01') {
    iVar9 = *(int *)((longlong)param_1 + 0x18c) + -1;
    if (*(int *)((longlong)param_1 + 0x18c) < 1) {
      iVar9 = 0;
    }
    *(int *)((longlong)param_1 + 0x18c) = iVar9;
    if (param_3 != 0) {
      iVar9 = 0;
      if (0 < *(int *)((longlong)param_1 + 0x184)) {
        iVar9 = *(int *)((longlong)param_1 + 0x184) + -1;
      }
      *(int *)((longlong)param_1 + 0x184) = iVar9;
LAB_141002d28:
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 0x98))();
        (**(code **)(*(longlong *)param_1[2] + 0x68))();
        (**(code **)(*local_60 + 0x5c8))();
      }
    }
  }
  else {
    iVar9 = (int)param_1[0x31] + -1;
    if ((int)param_1[0x31] < 1) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0x31) = iVar9;
    if (param_3 != 0) {
      iVar9 = 0;
      if (0 < (int)param_1[0x30]) {
        iVar9 = (int)param_1[0x30] + -1;
      }
      *(int *)(param_1 + 0x30) = iVar9;
      (**(code **)(*(longlong *)param_1[0x2a] + 0x20))((longlong *)param_1[0x2a],param_2);
      if ((*(longlong **)(lVar15 + 0x38) != (longlong *)0x0) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar15 + 0x38) + 0x140))(), plVar12 = local_60,
         cVar6 != '\0')) {
        if (local_60 != (longlong *)0x0 && cVar7 == '\0') {
          (**(code **)(*(longlong *)param_1[2] + 0xa8))((longlong *)param_1[2],&local_58);
          (**(code **)(*local_58 + 0x18))(local_58,plVar12);
          iVar9 = (int)param_1[0x35];
          *(uint *)(param_1 + 0x35) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1ac) < iVar9 + 1U) {
            FUN_14180163c(param_1 + 0x34,iVar9);
          }
          lVar4 = param_1[0x34];
          *(longlong **)(lVar4 + (longlong)iVar9 * 0x10) = local_58;
          *(longlong ***)(lVar4 + 8 + (longlong)iVar9 * 0x10) = local_50;
          if (local_50 != (longlong **)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
            pplVar14 = local_50;
            UNLOCK();
            if (local_50 != (longlong **)0x0) {
              LOCK();
              pplVar2 = local_50 + 1;
              *(int *)pplVar2 = *(int *)pplVar2 + -1;
              UNLOCK();
              if (*(int *)pplVar2 == 0) {
                (*(code *)**pplVar14)(pplVar14);
                LOCK();
                piVar10 = (int *)((longlong)pplVar14 + 0xc);
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (*piVar10 == 0) {
                  (*(code *)(*pplVar14)[2])(pplVar14);
                }
              }
            }
          }
        }
        plVar12 = (longlong *)param_1[0x24];
        if (plVar12 != (longlong *)0x0) {
          iVar9 = (int)plVar12[1];
          do {
            if (iVar9 == 0) goto LAB_141002d28;
            LOCK();
            iVar13 = (int)plVar12[1];
            bVar16 = iVar9 == iVar13;
            if (bVar16) {
              *(int *)(plVar12 + 1) = iVar9 + 1;
              iVar13 = iVar9;
            }
            iVar9 = iVar13;
            UNLOCK();
          } while (!bVar16);
          if (param_1[0x23] != 0) {
            FUN_141800148(param_1[0x23] + 0x28,lVar15 + 0x38);
          }
          LOCK();
          plVar3 = plVar12 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar10 = (int *)((longlong)plVar12 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      goto LAB_141002d28;
    }
    (**(code **)(*(longlong *)param_1[0x2a] + 0x50))();
    if (*(int *)(lVar15 + 0x34) == 0) {
LAB_1410030d2:
      pplVar14 = (longlong **)0x0;
    }
    else {
      uVar5 = *(uint *)(lVar15 + 0x30);
      pplVar14 = (longlong **)0x0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar15 + 0x34) ||
            ((*(uint *)(plVar12 + 1) >> 0x1c & 1) != 0)))) goto LAB_1410030d2;
        pplVar14 = (longlong **)*plVar12;
      }
    }
    if (((((((int)param_1[0x22] != 0) &&
           (uVar5 = *(uint *)((longlong)param_1 + 0x10c), -1 < (int)uVar5)) &&
          ((int)uVar5 < DAT_14c9647dc)) &&
         ((plVar12 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0 && ((int)plVar12[2] == (int)param_1[0x22])))) &&
        ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar12 != (longlong *)0x0))
    {
      (**(code **)(*(longlong *)*plVar12 + 0xa78))();
    }
    plVar12 = (longlong *)param_1[0x24];
    if (plVar12 != (longlong *)0x0) {
      iVar9 = (int)plVar12[1];
      do {
        if (iVar9 == 0) goto LAB_141002e6a;
        LOCK();
        iVar13 = (int)plVar12[1];
        bVar16 = iVar9 == iVar13;
        if (bVar16) {
          *(int *)(plVar12 + 1) = iVar9 + 1;
          iVar13 = iVar9;
        }
        iVar9 = iVar13;
        UNLOCK();
      } while (!bVar16);
      if (param_1[0x23] != 0) {
        FUN_141800148(param_1[0x23] + 0x28);
      }
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar10 = (int *)((longlong)plVar12 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
LAB_141002e6a:
    if (((((int)param_1[0x21] != 0) &&
         (uVar5 = *(uint *)((longlong)param_1 + 0x104), -1 < (int)uVar5)) &&
        (((int)uVar5 < DAT_14c9647dc &&
         (((puVar11 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == (int)param_1[0x21])) &&
          ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))))) &&
       (plVar12 = (longlong *)*puVar11, plVar12 != (longlong *)0x0)) {
      local_58 = plVar12;
      local_50 = pplVar14;
      FUN_1447cd2ec(plVar12 + 0x7a);
    }
    if ((*(int *)((longlong)param_1 + 500) == 4) && ((int)param_1[0x31] == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(param_1[2] + 0x1d0);
      *(undefined4 *)((longlong)param_1 + 500) = 5;
      FUN_14641ae2a(param_1);
    }
  }
  iVar9 = (int)param_1[0x22];
  if (iVar9 == 0) {
LAB_141002f8e:
    bVar16 = false;
LAB_141002f90:
    if ((bVar16 | param_3) == 1) goto LAB_141002f9b;
  }
  else {
    uVar5 = *(uint *)((longlong)param_1 + 0x10c);
    bVar16 = false;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_141002f90;
    plVar12 = (longlong *)
              ((ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((plVar12 == (longlong *)0x0) ||
        ((((int)plVar12[2] != iVar9 || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) ||
         (*plVar12 == 0)))) || (*(char *)(*plVar12 + 0x830) == '\0')) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != iVar9)) ||
         (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (*plVar12 == 0)))) goto LAB_141002f8e;
      bVar16 = *(longlong *)(*plVar12 + 0xbe8) != 0;
      goto LAB_141002f90;
    }
LAB_141002f9b:
    if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
      iVar9 = FUN_140b95084(param_2);
      plVar12 = param_1 + 0xc;
      if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[0xd];
      }
      iVar9 = *(int *)((longlong)plVar12 + ((longlong)iVar9 & (longlong)(int)param_1[0xe] - 1U) * 4)
      ;
      if (iVar9 != -1) {
        lVar15 = *plVar1;
LAB_141002fe4:
        lVar4 = lVar15 + (longlong)iVar9 * 0x58;
        if (((*(longlong *)(lVar15 + (longlong)iVar9 * 0x58) != *param_2) ||
            (*(longlong *)(lVar4 + 8) != param_2[1])) ||
           ((*(int *)(lVar4 + 0x10) != (int)param_2[2] ||
            (*(char *)(lVar4 + 0x14) != *(char *)((longlong)param_2 + 0x14))))) goto LAB_141003007;
        iVar13 = *(int *)((longlong)plVar12 + (longlong)*(int *)(lVar4 + 0x54) * 4);
        if (iVar13 == iVar9) {
          piVar10 = (int *)((longlong)plVar12 + (longlong)*(int *)(lVar4 + 0x54) * 4);
        }
        else {
          do {
            piVar10 = (int *)((longlong)iVar13 * 0x58 + lVar15 + 0x50);
            iVar13 = *piVar10;
          } while (iVar13 != iVar9);
        }
        *piVar10 = *(int *)(lVar4 + 0x50);
        FUN_1437edccc(plVar1);
      }
    }
  }
LAB_141003035:
  iVar9 = (int)param_1[0x31] + *(int *)((longlong)param_1 + 0x18c);
  if (iVar9 == 0 || SCARRY4((int)param_1[0x31],*(int *)((longlong)param_1 + 0x18c)) != iVar9 < 0) {
    if (param_1[0x1a] != 0) {
      FUN_140929f1a(param_1[2] + 0x68,param_1 + 0x17);
    }
    if ((param_3 != 0) &&
       (cVar7 = (**(code **)(*(longlong *)param_1[0x2a] + 0x30))(), cVar7 == '\0')) {
      *(undefined4 *)((longlong)param_1 + 500) = 0;
    }
  }
LAB_141003080:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141003007:
  iVar9 = *(int *)(lVar4 + 0x50);
  if (iVar9 == -1) goto LAB_141003035;
  goto LAB_141002fe4;
}



// FUNCTION 141003128 FUN_141003128 body=59 status=ok
// SIG undefined FUN_141003128(void)

void FUN_141003128(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(param_1);
  return;
}



// FUNCTION 141003164 FUN_141003164 body=395 status=ok
// SIG undefined FUN_141003164(void)

void FUN_141003164(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
        (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
         ((*(int *)(param_1 + 0x44) != 0 && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)))))
        ) && (((int)uVar1 < DAT_14c9647dc &&
              ((((((plVar2 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x44))) &&
                  ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) &&
                 ((*(int *)(param_1 + 0x3c) != 0 &&
                  (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)))) &&
                (((int)uVar1 < DAT_14c9647dc &&
                 ((plVar7 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                  plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x3c))))))) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      if (*(longlong *)(&DAT_00006850 + lVar5) != 0) {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar7;
        }
        else {
          lVar3 = 0;
        }
        if (*(char *)(lVar3 + 0xa99) == '\x01') {
          uVar6 = (ulonglong)(*(char *)(lVar3 + 0xa98) == '\x01') | 0x3dc;
        }
        else {
          uVar6 = 0x3dc;
        }
        if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar2;
        }
        else {
          lVar3 = 0;
        }
        *(byte *)(*(longlong *)(&DAT_00006850 + lVar5) + 0x4234) = *(byte *)(lVar3 + uVar6) ^ 1;
        FUN_1410032f0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410032f0 FUN_1410032f0 body=1676 status=ok
// SIG undefined FUN_1410032f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410032f0(longlong param_1,double *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x30);
  uVar3 = *puVar1;
  if ((int)uVar3 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar3) {
    return;
  }
  plVar9 = (longlong *)
           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar9[2] != *(int *)(param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    plVar7 = (longlong *)*plVar9;
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  if (9.99999905104687e-09 <=
      param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]) {
    if ((*(byte *)(plVar7 + 0xaa) & 2) == 0) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if ((*(longlong *)(lVar8 + 0x430) != 0) &&
         ((*(byte *)(*(longlong *)(lVar8 + 0x430) + 0x5b5) & 0x20) != 0)) goto LAB_1410038a3;
    }
    else {
LAB_1410038a3:
      plVar9 = (longlong *)FUN_14479d2ce(puVar1);
      (**(code **)(*plVar9 + 0x868))(plVar9,0);
    }
    FUN_14100397c();
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_141003866:
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar3 = *puVar1;
      plVar9 = (longlong *)0x0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_141003866;
        plVar9 = (longlong *)*puVar6;
      }
    }
    (**(code **)(*plVar9 + 0x7f0))();
    if (((((*(int *)(param_1 + 0x3c) != 0) && (uVar3 = *(uint *)(param_1 + 0x38), -1 < (int)uVar3))
         && ((int)uVar3 < DAT_14c9647dc)) &&
        ((lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 != 0 &&
         (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x3c))))) &&
       ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) {
      FUN_140545fa2();
      FUN_1410039f6();
    }
    iVar4 = *(int *)(param_1 + 0x34);
    if (((iVar4 == 0) || (uVar3 = *puVar1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) {
      if (_DAT_00006850 == 0) {
        return;
      }
LAB_141003895:
      lVar8 = 0;
    }
    else {
      plVar9 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar4)) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar9;
      }
      if (*(longlong *)(&DAT_00006850 + lVar8) == 0) {
        return;
      }
      if (((DAT_14c9647dc <= (int)uVar3) ||
          (plVar9 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar9 == (longlong *)0x0)) ||
         (((int)plVar9[2] != iVar4 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
      goto LAB_141003895;
      lVar8 = *plVar9;
    }
    lVar5 = *(longlong *)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1eb8);
    plVar9 = *(longlong **)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1ec0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)();
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    if (lVar5 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_141003874:
      lVar8 = 0;
    }
    else {
      uVar3 = *puVar1;
      lVar8 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_141003874;
        lVar8 = *plVar9;
      }
    }
    lVar5 = *(longlong *)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1eb8);
    plVar9 = *(longlong **)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1ec0);
    if (plVar9 == (longlong *)0x0) {
      *(undefined1 *)(lVar5 + 0xb3) = 1;
      return;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined1 *)(lVar5 + 0xb3) = 1;
    goto LAB_141003852;
  }
  (**(code **)(*plVar7 + 0x7f8))();
  if ((((*(int *)(param_1 + 0x3c) != 0) && (uVar3 = *(uint *)(param_1 + 0x38), -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x3c))) &&
      ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar9;
    }
    else {
      lVar8 = 0;
    }
    *(undefined1 *)(lVar8 + 0x31e8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  if (((iVar4 == 0) || (uVar3 = *puVar1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) {
    if (_DAT_00006850 == 0) {
      return;
    }
LAB_141003883:
    lVar8 = 0;
  }
  else {
    plVar9 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar4)) ||
       ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar9;
    }
    if (*(longlong *)(&DAT_00006850 + lVar8) == 0) {
      return;
    }
    if (((DAT_14c9647dc <= (int)uVar3) ||
        (plVar9 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar9 == (longlong *)0x0)) ||
       (((int)plVar9[2] != iVar4 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
    goto LAB_141003883;
    lVar8 = *plVar9;
  }
  lVar5 = *(longlong *)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1eb8);
  plVar9 = *(longlong **)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1ec0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar9)();
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_14100386d:
    lVar8 = 0;
  }
  else {
    uVar3 = *puVar1;
    lVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)
          ))) goto LAB_14100386d;
      lVar8 = *plVar9;
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1eb8);
  plVar9 = *(longlong **)(*(longlong *)(&DAT_00006850 + lVar8) + 0x1ec0);
  if (plVar9 == (longlong *)0x0) {
    *(undefined1 *)(lVar5 + 0xb3) = 0;
    return;
  }
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  *(undefined1 *)(lVar5 + 0xb3) = 0;
LAB_141003852:
  LOCK();
  plVar7 = plVar9 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141003920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}



// FUNCTION 14100397c FUN_14100397c body=120 status=ok
// SIG undefined FUN_14100397c(void)

void FUN_14100397c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [38];
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(&DAT_00006850 + param_1) != 0) {
    local_11 = '\0';
    local_12 = 0;
    cVar1 = FUN_141003a6c();
    if ((cVar1 == '\0') && (local_11 == '\x01')) {
      FUN_140fb2b78(*(undefined8 *)(&DAT_00006850 + param_1),0x10000,local_12);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410039f6 FUN_1410039f6 body=117 status=ok
// SIG undefined FUN_1410039f6(void)

void FUN_1410039f6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0x31e8) = 1;
  lVar2 = FUN_1447210f0();
  if (lVar2 == 0) {
    fVar3 = 0.0;
  }
  else {
    lVar2 = FUN_1447210f0(param_1);
    fVar3 = (float)*(double *)(lVar2 + 0x6d0);
  }
  *(float *)(param_1 + 0x31ec) = fVar3;
  if ((*(longlong *)(param_1 + 0xf40) != 0) &&
     (*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0xf40)) != 0)) {
    cVar1 = FUN_14030de6a(param_1);
    if (cVar1 != '\0') {
      *(byte *)(*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0xf40)) + 0x1f18) =
           *(byte *)(*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0xf40)) + 0x1f18) | 8;
    }
  }
  return;
}



// FUNCTION 141003a6c FUN_141003a6c body=1610 status=ok
// SIG undefined FUN_141003a6c(void)

undefined8 FUN_141003a6c(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  double dVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar11 = param_1[0x841];
  if ((lVar11 != 0) && (local_c8 = param_3, param_1[0x842] != 0)) {
    iVar13 = *(int *)(lVar11 + 0x568);
    bVar3 = *(byte *)(lVar11 + 0x551);
    if (iVar13 == 0) {
      cVar7 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
      bVar5 = false;
      iVar13 = 0;
      if (cVar7 != '\0') {
        iVar13 = 1;
        goto LAB_141003d9f;
      }
    }
    else {
LAB_141003d9f:
      bVar5 = 0 < iVar13;
      if ((param_2 != (undefined1 *)0x0) && (0 < iVar13)) {
        *param_2 = 1;
        bVar5 = true;
      }
    }
    plVar1 = param_1 + 0x2f;
    cVar7 = (**(code **)(param_1[0x2f] + 0x118))(plVar1);
    if ((cVar7 != '\0') && ((*(byte *)(param_1 + 0x39) & 2) != 0)) {
      if (((char)param_1[0x373] == '\0') &&
         (((char)param_1[0x23e] == '\0' && ((char)param_1[0x36e] != '\x01')))) {
        if (param_1[0x87b] != 0) {
          lVar14 = param_1[0x87b] + 0x20;
          lVar11 = FUN_14485c28e(lVar14);
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = FUN_14485c28e(lVar14);
          }
          if (param_1[0x62e] == 0) {
            if ((char)param_1[0x696] != '\x01') goto LAB_141003b72;
            plVar12 = param_1 + 0x642;
          }
          else {
            plVar12 = (longlong *)(param_1[0x62e] + 0xd8);
          }
          lVar14 = FUN_140153468(plVar12);
          if (((lVar14 != 0) && ((*(byte *)(plVar12 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
            if (param_1[0x62e] == 0) {
              if ((char)param_1[0x696] != '\x01') goto LAB_141003b72;
              plVar12 = param_1 + 0x642;
            }
            else {
              plVar12 = (longlong *)(param_1[0x62e] + 0xd8);
            }
            lVar14 = FUN_140153468(plVar12);
            if ((lVar11 != 0) && (lVar14 != 0)) {
              if (param_1[0x62e] == 0) {
                if ((char)param_1[0x696] == '\x01') {
                  plVar12 = param_1 + 0x642;
                  goto LAB_141003e8d;
                }
                lVar14 = 0;
              }
              else {
                plVar12 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_141003e8d:
                lVar14 = FUN_140153468(plVar12);
              }
              if (lVar14 == lVar11) goto LAB_141003e3b;
            }
          }
        }
LAB_141003b72:
        if (param_1[0x57c] != DAT_14cbc6c68) {
          if ((((char)param_1[0x220] == '\n') && (param_1[0x22] != 0)) &&
             (lVar11 = FUN_140caafdc(param_1), param_1[0x3a2] != 0)) {
            if ((lVar11 != 0) && (param_1[0x3a3] != 0)) {
              cVar7 = (**(code **)(*param_1 + 0xd80))(param_1);
              if (cVar7 == '\0') {
                dVar16 = (double)param_1[0x71];
                dVar17 = (double)param_1[0x72];
                dVar2 = (double)param_1[0x73];
                if (((((dVar16 != 0.0) || (NAN(dVar16))) || (dVar17 != 0.0)) ||
                    ((NAN(dVar17) || (dVar2 != 0.0)))) || (NAN(dVar2))) {
                  dVar6 = 1.0 / SQRT(dVar2 * dVar2 + dVar16 * dVar16 + dVar17 * dVar17);
                  fVar15 = (float)FUN_1440e81ea(param_1);
                  local_b8 = (double)fVar15;
                  local_c0 = 0;
                  local_b0 = 0;
                  FUN_144a76660(&local_c0,&local_a8);
                  dVar17 = dVar2 * dVar6 * local_98 +
                           dVar6 * dVar16 * local_a8 + dVar17 * dVar6 * local_a0;
                  dVar16 = dVar17;
                  if (1.0 <= dVar17) {
                    dVar16 = 1.0;
                  }
                  dVar16 = acos((double)(-(ulonglong)(dVar17 < -1.0) & 0xbff0000000000000 |
                                        ~-(ulonglong)(dVar17 < -1.0) & (ulonglong)dVar16));
                  uVar9 = 1;
                  if (dVar16 * 57.29577951308232 <= (double)*(float *)(lVar11 + 0x170))
                  goto LAB_141003c59;
                }
              }
              else {
                cVar7 = FUN_14100415a(param_1,DAT_14cbc6c70);
                if (cVar7 == '\0') goto LAB_141003e3b;
              }
            }
            if ((param_1[0x3a2] != 0) && (uVar9 = 1, param_1[0x3a3] != 0)) goto LAB_141003c59;
          }
          if (bVar5) {
            lVar11 = param_1[0x16];
            if (lVar11 == 0) {
              lVar11 = FUN_1448abda6(param_1);
              fVar15 = 0.0;
              if (lVar11 != 0) {
                lVar11 = param_1[0x16];
                if (lVar11 == 0) {
                  lVar11 = FUN_1448abda6(param_1);
                }
                goto LAB_141003cb0;
              }
            }
            else {
LAB_141003cb0:
              fVar15 = (float)*(double *)(lVar11 + 0x6d0);
            }
            if (fVar15 - *(float *)(param_1 + 0x57b) < *(float *)(param_1[0x842] + 0x288))
            goto LAB_141003e3b;
          }
          lVar11 = param_1[0x841];
          bVar4 = *(byte *)(lVar11 + 0x550);
          if ((*(longlong *)(lVar11 + 0x430) == 0) ||
             ((*(byte *)(*(longlong *)(lVar11 + 0x430) + 0x5b5) & 0x20) == 0)) {
            uVar9 = (**(code **)(*(longlong *)(lVar11 + 0x3b48) + 0x20))(lVar11 + 0x3b48);
            cVar7 = FUN_1410040b8(uVar9);
            if (cVar7 == '\0') {
              cVar7 = (**(code **)(*plVar1 + 0xe0))(plVar1);
              cVar8 = '\x01';
              if ((cVar7 == '\0') && (cVar7 = (**(code **)(*plVar1 + 0xd8))(plVar1), cVar7 == '\0'))
              {
                cVar8 = (**(code **)(*param_1 + 0xdb8))(param_1);
              }
              uVar9 = 0;
              if (((bVar4 & 2) != 0) || (cVar8 == '\0')) goto LAB_141003c59;
              if (((bVar3 & 8) == 0) && ((char)param_1[0x595] == '\0')) {
                if (iVar13 == 0) {
                  cVar7 = (**(code **)(*plVar1 + 0xd8))(plVar1);
                  if (cVar7 == '\0') {
                    if (0 < *(int *)(param_1[0x841] + 0x564)) goto LAB_141003c36;
                  }
                  else {
                    if (param_2 != (undefined1 *)0x0) {
                      *param_2 = 1;
                    }
                    iVar13 = 1;
                    if (1 < *(int *)(param_1[0x841] + 0x564)) goto LAB_141003d48;
                  }
                }
                else {
                  if (param_2 != (undefined1 *)0x0) {
                    *param_2 = 1;
                  }
                  if (iVar13 < *(int *)(param_1[0x841] + 0x564)) {
LAB_141003d48:
                    cVar7 = (**(code **)(*param_1 + 0xf08))(param_1,iVar13,local_c8);
                    if (cVar7 != '\0') goto LAB_141003c36;
                  }
                }
              }
              else {
LAB_141003c36:
                puVar10 = (undefined8 *)(**(code **)(*param_1 + 0xe00))(param_1);
                cVar7 = FUN_14100415a(param_1,*puVar10);
                uVar9 = 1;
                if ((((cVar7 != '\0') || ((*(byte *)(param_1 + 0x2e) & 0x10) == 0)) ||
                    (ABS((double)param_1[0x2a]) != 1.0)) || (NAN(ABS((double)param_1[0x2a]))))
                goto LAB_141003c59;
              }
            }
          }
        }
      }
      else if (local_c8 != (undefined1 *)0x0) {
        *local_c8 = 2;
      }
    }
  }
LAB_141003e3b:
  uVar9 = 0;
LAB_141003c59:
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1410040b8 FUN_1410040b8 body=161 status=ok
// SIG undefined FUN_1410040b8(void)

undefined1 FUN_1410040b8(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140338614();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140338614();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      lVar5 = 0;
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      goto LAB_141004114;
    }
  }
  lVar5 = 0;
LAB_141004114:
  if ((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong **)(param_1 + 0x40) == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
    uVar1 = 0;
    if ((lVar5 != 0) && (lVar6 != 0)) {
      if (*(char *)(lVar5 + 0x19) == '\0') {
        uVar1 = *(undefined1 *)(lVar6 + 0x4a1);
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



// FUNCTION 14100415a FUN_14100415a body=193 status=ok
// SIG undefined FUN_14100415a(void)

bool FUN_14100415a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c07d12(param_1,&local_28,param_2);
  if (local_20 == 0) {
    uVar3 = FUN_140aed8fc();
    local_20 = FUN_14477b664(uVar3);
  }
  if (local_18 == 0) {
    bVar5 = false;
    if ((local_20 != 0) && (local_28 != 0)) {
      plVar1 = *(longlong **)(local_20 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar3,&local_28);
          bVar5 = lVar4 != 0;
          goto LAB_1410041dd;
        }
      }
      bVar5 = false;
    }
  }
  else {
    bVar5 = true;
  }
LAB_1410041dd:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100421c FUN_14100421c body=402 status=ok
// SIG undefined FUN_14100421c(void)

undefined8 * FUN_14100421c(longlong *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  float fVar7;
  
  if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
    cVar5 = (char)param_1[0x3dc];
  }
  else {
    plVar4 = (longlong *)param_1[0x3d7];
    if (plVar4 == (longlong *)0x0) goto LAB_141004293;
    if (*(code **)(*plVar4 + 0x40) == (code *)&LAB_1449cc0ea) {
      if (*(char *)((longlong)plVar4 + 0xb2) == '\0') {
        if (*(char *)((longlong)plVar4 + 0x79) != '\0') {
          return &DAT_14cbc6c78;
        }
        if ((0 < (int)plVar4[4]) && ((char)plVar4[0xf] != '\0')) {
          return &DAT_14cbc6c78;
        }
      }
      goto LAB_141004293;
    }
    cVar5 = (**(code **)(*plVar4 + 0x40))();
  }
  if (cVar5 != '\0') {
    return &DAT_14cbc6c78;
  }
LAB_141004293:
  if ((char)param_1[0x220] == '\r') {
    puVar6 = (undefined8 *)&DAT_14cbc6c80;
  }
  else if (((char)param_1[0x220] == '\n') && (param_1[0x22] != 0)) {
    puVar6 = &DAT_14cbc6c70;
  }
  else if ((param_1[0x3e] == 0) || (*(int *)(param_1[0x3e] + 0x568) != 1)) {
    if ((((*(byte *)(param_1 + 0x6d5) & 1) == 0) &&
        (((char)param_1[0x595] != '\x01' || (*(char *)((longlong)param_1 + 0x2ca9) != '\x01')))) ||
       ((param_1[0x842] == 0 ||
        (dVar2 = (double)param_1[0x25], dVar3 = (double)param_1[0x26],
        fVar1 = *(float *)(param_1[0x842] + 0x264),
        fVar7 = (float)(**(code **)(*param_1 + 0xcf8))(param_1),
        dVar2 * dVar2 + dVar3 * dVar3 < (double)(fVar7 * fVar7 * fVar1))))) {
      puVar6 = (undefined8 *)FUN_140c5e0f2(param_1);
      return puVar6;
    }
    puVar6 = &DAT_14cbc6c58;
  }
  else {
    puVar6 = (undefined8 *)&DAT_14cbc6c60;
  }
  return puVar6;
}



// FUNCTION 1410043ae FUN_1410043ae body=217 status=ok
// SIG undefined FUN_1410043ae(void)

ulonglong FUN_1410043ae(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  uint *local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = CONCAT71((int7)(local_18 >> 8),(byte)param_1[0x56]);
  if (((byte)param_1[0x56] & 1) != 0) {
    uVar1 = param_1[1];
    uVar3 = (ulonglong)uVar1;
    if ((((uVar1 != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
       (((lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar4 != 0 &&
         (*(uint *)(lVar4 + 0x10) == uVar1)) &&
        (uVar3 = (ulonglong)*(uint *)(lVar4 + 8), (*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a1e3b90;
      local_58 = FUN_141004488;
      local_30[0] = param_1;
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x5a));
      FUN_141004488(local_30,*(undefined8 *)(param_1 + 0x58));
      ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x5a));
      LOCK();
      uVar1 = param_1[0x56];
      *(byte *)(param_1 + 0x56) = 0;
      uVar3 = (ulonglong)(byte)uVar1;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141004488 FUN_141004488 body=1746 status=ok
// SIG undefined FUN_141004488(void)

void FUN_141004488(undefined8 *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  code **ppcVar19;
  code *pcVar20;
  longlong lVar21;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  undefined4 local_2c0;
  undefined8 *local_2b8;
  undefined1 *local_2b0;
  uint *local_2a8;
  uint local_294;
  undefined8 local_290;
  undefined8 local_288;
  float local_280;
  float local_27c;
  uint local_220;
  undefined1 local_21c;
  longlong local_218;
  undefined8 uStack_210;
  char local_1fa;
  char local_1f9;
  code *local_1f8;
  double dStack_1f0;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8 [8];
  undefined1 local_198 [24];
  char local_180;
  code *local_178 [2];
  undefined ***local_168;
  undefined **local_158;
  undefined8 *local_150;
  code **local_148;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined2 local_11f;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  puVar9 = (uint *)*param_1;
  local_290 = param_2;
  FUN_14040ce72(param_2);
  dVar1 = *(double *)(puVar9 + 0x72);
  dVar2 = *(double *)(puVar9 + 0x74);
  dVar3 = *(double *)(puVar9 + 0x76);
  dVar4 = *(double *)(puVar9 + 0x78);
  dVar5 = *(double *)(puVar9 + 0x7a);
  dVar6 = *(double *)(puVar9 + 0x7c);
  local_218 = 0;
  uStack_210 = 0;
  local_21c = 0;
  local_294 = puVar9[0x81];
  local_220 = puVar9[0x80] | local_294;
  local_10c = 0;
  local_108 = 0x101;
  local_e0 = 0;
  local_d8 = 0x800000000;
  local_c0 = 0;
  local_b8 = 0x400000000;
  local_120 = 0;
  local_114 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_11f = 1;
  local_11d = 0;
  local_110 = 0;
  local_11c = 0x1000000;
  local_118 = 1;
  local_168 = (undefined ***)0x0;
  local_158 = &PTR_LAB_14a1e3bb0;
  local_150 = &local_130;
  local_148 = local_178;
  local_178[0] = FUN_142b7378a;
  uVar11 = puVar9[0x50];
  if ((longlong)(int)uVar11 != 0) {
    lVar10 = *(longlong *)(puVar9 + 0x4e);
    lVar21 = 0;
    do {
      pcVar20 = local_178[0];
      iVar7 = *(int *)(lVar10 + 4 + lVar21);
      if ((iVar7 == 0) || (uVar8 = *(uint *)(lVar10 + lVar21), (int)uVar8 < 0)) {
LAB_141004684:
        local_1f8 = (code *)0x0;
      }
      else {
        local_1f8 = (code *)0x0;
        if ((int)uVar8 < DAT_14c9647dc) {
          puVar16 = (undefined8 *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if (((puVar16 == (undefined8 *)0x0) || (*(int *)(puVar16 + 2) != iVar7)) ||
             ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) goto LAB_141004684;
          local_1f8 = (code *)*puVar16;
        }
      }
      pppuVar15 = local_168;
      if (local_168 == (undefined ***)0x0) {
        pppuVar15 = &local_158;
      }
      uVar12 = (*(code *)(*pppuVar15)[1])();
      (*pcVar20)(uVar12);
      lVar21 = lVar21 + 8;
    } while ((longlong)(int)uVar11 * 8 != lVar21);
  }
  FUN_1405261b8(&local_130,puVar9 + 0x52);
  if (puVar9[1] != 0) {
    uVar11 = *puVar9;
    uVar12 = 0;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_1410046f3;
    puVar16 = (undefined8 *)
              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
    if ((puVar16 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar16 + 2) == puVar9[1] && ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)))) {
      uVar12 = *puVar16;
      goto LAB_1410046f3;
    }
  }
  uVar12 = 0;
LAB_1410046f3:
  local_27c = (float)((dVar6 - dVar3) * 0.5);
  local_280 = (float)((dVar5 - dVar2) * 0.5);
  local_288._4_4_ = (float)((dVar4 - dVar1) * 0.5);
  local_288._0_4_ = 1;
  local_1e8 = (longlong *)((dVar3 + dVar6) * 0.5);
  dStack_1f0 = (dVar2 + dVar5) * 0.5;
  local_1f8 = (code *)((dVar1 + dVar4) * 0.5);
  local_2a8 = &local_220;
  local_2b0 = &DAT_14cad0f10;
  local_2c0 = DAT_14cad0ec4;
  local_2c8 = &local_218;
  local_2b8 = &local_130;
  FUN_14052f4ca(uVar12,&local_288,&local_1f8,&DAT_14c8463d0);
  if ((longlong)(int)uStack_210 != 0) {
    lVar10 = local_218 + (longlong)(int)uStack_210 * 0x48;
    lVar21 = local_218;
    do {
      if (*(int *)(lVar21 + 0x24) != 0) {
        uVar11 = *(uint *)(lVar21 + 0x20);
        if ((((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) &&
            (plVar17 = (longlong *)
                       ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
            plVar17 != (longlong *)0x0)) &&
           ((((int)plVar17[2] == *(int *)(lVar21 + 0x24) &&
             ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) &&
            ((plVar17 = (longlong *)*plVar17, plVar17 != (longlong *)0x0 &&
             ((uVar11 = (**(code **)(*plVar17 + 0x570))(plVar17), (uVar11 & 0xfffffffe) == 2 ||
              (uVar11 = (**(code **)(*plVar17 + 0x570))(plVar17), (uVar11 & 0xfffffffe) == 4))))))))
        {
          lVar18 = 0;
          do {
            if ((((local_220 >> ((uint)lVar18 & 0x1f) & 1) != 0) &&
                (lVar13 = (**(code **)(*plVar17 + 0x558))(plVar17),
                *(char *)(lVar13 + lVar18) != '\x01')) &&
               (lVar13 = (**(code **)(*plVar17 + 0x558))(plVar17),
               *(char *)(lVar13 + lVar18) != '\0')) {
              if (*(char *)((longlong)plVar17 + 0x1fb) == '\x02') {
                uVar11 = (**(code **)(*plVar17 + 0x580))(plVar17);
                local_1fa = ((local_294 >> (uVar11 & 0x1f) & 1) != 0) * '\x04' + '\x01';
                local_288._0_4_ = *(undefined4 *)(lVar21 + 0x28);
                local_180 = '\0';
                local_1f9 = '\x01';
                local_1f8 = (code *)0x0;
                plVar17 = (longlong *)FUN_14001cc68(0x30,8);
                *plVar17 = (longlong)&PTR_FUN_14a1e3a90;
                plVar17[1] = lVar21 + 0x20;
                plVar17[2] = (longlong)&local_1fa;
                plVar17[3] = (longlong)local_198;
                plVar17[4] = (longlong)puVar9;
                plVar17[5] = (longlong)&local_288;
                if (plVar17 + 1 == (longlong *)0x0) {
                  pcVar20 = (code *)0x0;
                }
                else {
                  pcVar20 = FUN_142b70634;
                  local_1f8 = FUN_142b70634;
                }
                local_1e8 = plVar17;
                AcquireSRWLockExclusive(*(PSRWLOCK *)(puVar9 + 0x6e));
                uVar12 = *(undefined8 *)(puVar9 + 0x6c);
                if (plVar17 == (longlong *)0x0) {
                  plVar17 = local_1d8;
                }
                uVar14 = (**(code **)(*plVar17 + 8))(plVar17);
                (*pcVar20)(uVar14,uVar12);
                ReleaseSRWLockExclusive(*(PSRWLOCK *)(puVar9 + 0x6e));
                if (local_1f8 != (code *)0x0) {
                  plVar17 = local_1e8;
                  if (local_1e8 == (longlong *)0x0) {
                    plVar17 = local_1d8;
                  }
                  (**(code **)(*plVar17 + 0x10))();
                }
                if (local_1f9 == '\x01') {
                  local_1f9 = '\0';
                }
                if (local_180 == '\x01') {
                  local_180 = '\0';
                }
              }
              else {
                local_1f8 = (code *)0x0;
                dStack_1f0 = 0.0;
                local_1e8 = (longlong *)0x0;
                uStack_1e0 = 0;
                uStack_1dc = 0x3ff00000;
                local_1d8[2] = 0;
                local_1d8[3] = 0;
                local_1d8[0] = 0;
                local_1d8[1] = 0;
                local_1d8[4] = 0x3ff0000000000000;
                local_1d8[5] = 0x3ff0000000000000;
                local_1d8[6] = 0x3ff0000000000000;
                local_1d8[7] = 0;
                FUN_142b70b4b(&local_288,plVar17,*(undefined4 *)(lVar21 + 0x28),0);
                puVar16 = &local_288;
                ppcVar19 = &local_1f8;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *ppcVar19 = (code *)*puVar16;
                  puVar16 = puVar16 + 1;
                  ppcVar19 = ppcVar19 + 1;
                }
                FUN_140ac6e0a(local_290,plVar17,1);
              }
              break;
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 != 0x20);
        }
      }
      lVar21 = lVar21 + 0x48;
    } while (lVar21 != lVar10);
  }
  if (local_178[0] != (code *)0x0) {
    pppuVar15 = &local_158;
    if (local_168 != (undefined ***)0x0) {
      pppuVar15 = local_168;
    }
    (*(code *)(*pppuVar15)[2])(pppuVar15);
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141004b64 FUN_141004b64 body=1362 status=ok
// SIG undefined FUN_141004b64(void)

void FUN_141004b64(char *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_1f8 [40];
  float *local_1d0;
  int local_1c8;
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190;
  int local_188;
  float *local_180;
  int local_178;
  undefined4 *local_170;
  int local_168;
  undefined4 *local_160;
  int local_158;
  undefined4 *local_150;
  int local_148;
  undefined4 *local_140;
  int local_138;
  undefined4 *local_130;
  int local_128;
  undefined4 *local_120;
  int local_118;
  undefined4 *local_110;
  int local_108;
  undefined4 *local_100;
  int local_f8;
  undefined4 *local_f0;
  int local_e8;
  char local_e0;
  byte local_df;
  char local_de;
  char local_dd;
  char local_dc;
  undefined1 local_d8 [72];
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_140982196(local_90,param_1);
  if (*param_1 == '\x01') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) =
         *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 2;
  }
  FUN_1448a432c(local_d8,param_1);
  lVar1 = local_88;
  FUN_143944938(&local_1d0);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar2 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar2) {
    fVar4 = 1.0 / *(float *)(local_88 + 0x270);
    iVar3 = 0;
    do {
      fVar5 = 0.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
      if (local_df != 0) {
        auVar8 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x1f0)),
                          ZEXT416((uint)(float)*(double *)(lVar1 + 0x1f8)),0x10);
        auVar9 = insertps(auVar8,ZEXT416((uint)(float)*(double *)(lVar1 + 0x200)),0x20);
        auVar8 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x210)),
                          ZEXT416((uint)(float)*(double *)(lVar1 + 0x218)),0x10);
        auVar10 = insertps(auVar8,ZEXT416((uint)(float)*(double *)(lVar1 + 0x220)),0x20);
        auVar8 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x230)),
                          ZEXT416((uint)(float)*(double *)(lVar1 + 0x238)),0x10);
        auVar8 = insertps(auVar8,ZEXT416((uint)(float)*(double *)(lVar1 + 0x240)),0x20);
        auVar14 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x250)),
                           ZEXT416((uint)(float)*(double *)(lVar1 + 600)),0x10);
        auVar14 = insertps(auVar14,ZEXT416((uint)(float)*(double *)(lVar1 + 0x260)),0x20);
        fVar5 = auVar8._0_4_ * 0.0 + auVar10._0_4_ * 0.0 + auVar9._0_4_ * 0.0 + auVar14._0_4_;
        fVar6 = auVar8._4_4_ * 0.0 + auVar10._4_4_ * 0.0 + auVar9._4_4_ * 0.0 + auVar14._4_4_;
        fVar7 = auVar8._8_4_ * 0.0 + auVar10._8_4_ * 0.0 + auVar9._8_4_ * 0.0 + auVar14._8_4_;
      }
      if (local_e0 == '\0') {
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
        if (local_df == 1) goto LAB_141004d53;
      }
      else {
LAB_141004d53:
        auVar8 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0xf0)),
                          ZEXT416((uint)(float)*(double *)(lVar1 + 0xf8)),0x10);
        auVar9 = insertps(auVar8,ZEXT416((uint)(float)*(double *)(lVar1 + 0x100)),0x20);
        auVar8 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x110)),
                          ZEXT416((uint)(float)*(double *)(lVar1 + 0x118)),0x10);
        auVar10 = insertps(auVar8,ZEXT416((uint)(float)*(double *)(lVar1 + 0x120)),0x20);
        auVar8 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x130)),
                          ZEXT416((uint)(float)*(double *)(lVar1 + 0x138)),0x10);
        auVar8 = insertps(auVar8,ZEXT416((uint)(float)*(double *)(lVar1 + 0x140)),0x20);
        auVar14 = insertps(ZEXT416((uint)(float)*(double *)(lVar1 + 0x150)),
                           ZEXT416((uint)(float)*(double *)(lVar1 + 0x158)),0x10);
        auVar14 = insertps(auVar14,ZEXT416((uint)(float)*(double *)(lVar1 + 0x160)),0x20);
        fVar11 = auVar8._0_4_ * 0.0 + auVar10._0_4_ * 0.0 + auVar9._0_4_ * 0.0 + auVar14._0_4_;
        fVar12 = auVar8._4_4_ * 0.0 + auVar10._4_4_ * 0.0 + auVar9._4_4_ * 0.0 + auVar14._4_4_;
        fVar13 = auVar8._8_4_ * 0.0 + auVar10._8_4_ * 0.0 + auVar9._8_4_ * 0.0 + auVar14._8_4_;
        *local_1d0 = fVar11;
        *local_1c0 = fVar12;
        *local_1b0 = fVar13;
        local_1d0 = local_1d0 + local_1c8;
        local_1c0 = local_1c0 + local_1b8;
        local_1b0 = local_1b0 + local_1a8;
      }
      if ((local_df & 1) != 0) {
        *local_1a0 = (fVar11 - fVar5) * fVar4;
        *local_190 = (fVar12 - fVar6) * fVar4;
        *local_180 = (fVar13 - fVar7) * fVar4;
        local_1a0 = local_1a0 + local_198;
        local_190 = local_190 + local_188;
        local_180 = local_180 + local_178;
      }
      if (local_de == '\x01') {
        *local_170 = 0;
        *local_160 = 0;
        *local_150 = 0x3f800000;
        local_170 = local_170 + local_168;
        local_160 = local_160 + local_158;
        local_150 = local_150 + local_148;
      }
      if (local_dd == '\x01') {
        *local_140 = 0;
        *local_130 = 0x3f800000;
        *local_120 = 0;
        local_140 = local_140 + local_138;
        local_130 = local_130 + local_128;
        local_120 = local_120 + local_118;
      }
      if (local_dc == '\x01') {
        *local_110 = 0x3f800000;
        *local_100 = 0;
        *local_f0 = 0;
        local_110 = local_110 + local_108;
        local_100 = local_100 + local_f8;
        local_f0 = local_f0 + local_e8;
      }
      iVar3 = iVar3 + 1;
      piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar2 = (int *)(param_1 + 0x3c);
      }
    } while (iVar3 < *piVar2);
  }
  if ((local_80 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410050b8 FUN_1410050b8 body=42 status=ok
// SIG undefined FUN_1410050b8(void)

longlong FUN_1410050b8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c75f6d8 + 1;
  lVar1 = DAT_14c75f6d8 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c75f6d8 + 2;
    lVar1 = DAT_14c75f6d8 + 2;
  }
  DAT_14c75f6d8 = lVar1;
  return lVar2;
}



// FUNCTION 1410050e2 FUN_1410050e2 body=130 status=ok
// SIG undefined FUN_1410050e2(void)

void FUN_1410050e2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  lVar1 = FUN_1447210f0(param_1);
  if ((lVar1 != 0) && (lVar2 = FUN_140702026(lVar1), lVar1 = param_1, lVar2 != 0)) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_141005154;
    }
    if (*(int *)(param_1 + 0x458) != -1) {
      FUN_141005164(lVar2 + 200,param_1);
    }
  }
LAB_141005154:
  *(undefined4 *)(param_1 + 0x458) = 0xffffffff;
  return;
}



// FUNCTION 141005164 FUN_141005164 body=148 status=ok
// SIG undefined FUN_141005164(void)

void FUN_141005164(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8) + 0x80;
    FUN_141005270(lVar1,&local_2c,param_2);
    FUN_1410051fa(lVar1,local_2c);
  }
  FUN_14100537c(param_1 + 0x68,*(undefined4 *)(param_2 + 0x458),1);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410051fa FUN_1410051fa body=118 status=ok
// SIG undefined FUN_1410051fa(void)

void FUN_1410051fa(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar3 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar3 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar3 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar1 + (longlong)iVar4 * 0x40 + 0x38);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar1 + lVar2 + 0x38);
  if (*(char *)(*param_1 + 0x30 + lVar2) == '\x01') {
    *(undefined1 *)(lVar2 + *param_1 + 0x30) = 0;
  }
  FUN_1410052f4(param_1,param_2,1);
  return;
}



// FUNCTION 141005270 FUN_141005270 body=132 status=ok
// SIG undefined FUN_141005270(void)

void FUN_141005270(longlong *param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x40) == param_3) goto LAB_1410052f1;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + *param_1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1410052f1:
  *param_2 = iVar2;
  return;
}



// FUNCTION 1410052f4 FUN_1410052f4 body=136 status=ok
// SIG undefined FUN_1410052f4(void)

void FUN_1410052f4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
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
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14100537c FUN_14100537c body=143 status=ok
// SIG undefined FUN_14100537c(void)

void FUN_14100537c(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_3 != 0) {
    lVar3 = *param_1;
    lVar1 = lVar3 + (longlong)param_2 * 8;
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = param_2 + iVar7;
      }
      *(undefined4 *)(lVar1 + lVar8 * 8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar8 * 8) = uVar5;
      iVar6 = param_2 + iVar7;
      *(int *)(param_1 + 6) = iVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar9 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      iVar7 = param_2 + iVar7 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      bVar4 = (byte)iVar6 & 0x1f;
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      lVar8 = lVar8 + 1;
    } while (param_3 != (int)lVar8);
  }
  return;
}



// FUNCTION 14100541a FUN_14100541a body=61 status=ok
// SIG undefined FUN_14100541a(void)

undefined8 * FUN_14100541a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b887ef0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141005458 FUN_141005458 body=310 status=ok
// SIG undefined FUN_141005458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141005458(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87e460) {
    FUN_144b3d300(&DAT_14c87e460);
    if (DAT_14c87e460 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14c87d788);
      DAT_14c87e3a0 = 0;
      _DAT_14c87e3a8 = 0x4000000000;
      DAT_14c87d790 = 0;
      _DAT_14c87d798 = 0;
      DAT_14c87e3b8 = 0;
      _DAT_14c87e3c0 = 0x4000000000;
      uRam000000014c87e3c8 = 0xffffffff;
      DAT_14c87e450 = 0;
      _DAT_14c87e458 = 0;
      atexit((_func_5014 *)&LAB_142790ecc);
      _Init_thread_footer(&DAT_14c87e460);
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c87d788);
  local_40 = local_60;
  local_60[0] = param_2;
  local_58 = param_3;
  local_50 = param_4;
  local_48 = param_1;
  FUN_141005590(&DAT_14c87d7a0,local_34,&local_48,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c87d788);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141005590 FUN_141005590 body=319 status=ok
// SIG undefined FUN_141005590(void)

undefined4 *
FUN_141005590(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410057d8(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = ((undefined8 *)*param_3)[1];
  *local_48 = *(undefined8 *)*param_3;
  local_48[1] = uVar5;
  local_48[4] = *(undefined8 *)(puVar1 + 4);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_48 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar2;
  *(undefined4 *)(local_48 + 3) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar4;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = FUN_1447addd0(local_48,0x10);
  local_68 = param_4;
  cVar6 = FUN_141005744(param_1,iVar7,local_48,&local_54);
  uVar2 = local_54;
  if (cVar6 == '\0') {
    cVar6 = FUN_1410056d0(param_1,*(int *)(param_1 + 0xc08) - *(int *)(param_1 + 0xc2c),0);
    if (cVar6 == '\0') {
      uVar8 = (longlong)iVar7 & (longlong)*(int *)(param_1 + 0xcb8) - 1U;
      iVar7 = (int)uVar8;
      *(int *)((longlong)local_48 + 0x2c) = iVar7;
      lVar9 = *(longlong *)(param_1 + 0xcb0);
      if (*(longlong *)(param_1 + 0xcb0) == 0) {
        lVar9 = param_1 + 0xc30;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0xcb8) - 1U & uVar8) * 4);
      lVar9 = *(longlong *)(param_1 + 0xcb0);
      if (*(longlong *)(param_1 + 0xcb0) == 0) {
        lVar9 = param_1 + 0xc30;
      }
      *(undefined4 *)(lVar9 + ((longlong)iVar7 & (longlong)*(int *)(param_1 + 0xcb8) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410056d0 FUN_1410056d0 body=115 status=ok
// SIG undefined FUN_1410056d0(void)

undefined8 FUN_1410056d0(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 5) {
    iVar4 = 0x20;
  }
  if (param_2 < 4) {
    iVar4 = 0x20;
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0xcb8))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0xcb8) <= iVar4)))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xcb8) = iVar4;
    FUN_141005912(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141005744 FUN_141005744 body=148 status=ok
// SIG undefined FUN_141005744(void)

void FUN_141005744(longlong param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
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
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (*(int *)(param_1 + 0xc08) - *(int *)(param_1 + 0xc2c) != 1) {
    iVar11 = FUN_140160afe();
    if (iVar11 != -1) {
      lVar12 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar12 = param_1;
      }
      lVar13 = (longlong)iVar11 * 0x30;
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      *(undefined8 *)(lVar12 + 0x20 + lVar13) = *(undefined8 *)(param_3 + 8);
      puVar1 = (undefined4 *)(lVar12 + 0x10 + lVar13);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(lVar12 + lVar13);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1468288f4(param_1,*param_4,1);
      *param_4 = iVar11;
      uVar10 = 1;
      goto LAB_141005779;
    }
  }
  uVar10 = 0;
LAB_141005779:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 1410057d8 FUN_1410057d8 body=313 status=ok
// SIG undefined FUN_1410057d8(void)

int * FUN_1410057d8(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xc2c) == 0) {
    iVar6 = *(int *)(param_1 + 0xc08);
    *(int *)(param_1 + 0xc08) = iVar6 + 1;
    if (*(int *)(param_1 + 0xc0c) == iVar6) {
      FUN_1457dfe56(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_1407c4842(param_1 + 0xc10,1);
    lVar4 = *(longlong *)(param_1 + 0xc18);
    if (*(longlong *)(param_1 + 0xc18) == 0) {
      lVar4 = param_1 + 0xc10;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xc00);
    if (*(longlong *)(param_1 + 0xc00) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0xc28);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 0xc28) = iVar3;
    iVar5 = *(int *)(param_1 + 0xc2c) + -1;
    *(int *)(param_1 + 0xc2c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x30) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0xc10;
  if (*(longlong *)(param_1 + 0xc18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xc18);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + lVar4;
  return param_2;
}



// FUNCTION 141005912 FUN_141005912 body=657 status=ok
// SIG undefined FUN_141005912(void)

void FUN_141005912(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xcb0) != 0) {
    FUN_1446efa72(param_1 + 0xcb0,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 0xcb8);
  if (uVar10 != 0) {
    lVar1 = param_1 + 0xc30;
    local_74 = 0;
    FUN_140437db6(lVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar2 = 0;
      do {
        lVar8 = *(longlong *)(param_1 + 0xcb0);
        if (*(longlong *)(param_1 + 0xcb0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xcb8) + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
    }
    local_60 = param_1 + 0xc10;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0xc20) == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_144a7765a(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar11 = local_68 >> 0x20;
      local_74 = local_50;
    }
    lVar8 = local_60;
    uVar10 = (uint)local_58;
    iVar5 = local_58._4_4_;
    if (local_58._4_4_ < *(int *)(local_60 + 0x10)) {
      do {
        lVar7 = *(longlong *)(param_1 + 0xc00);
        if (*(longlong *)(param_1 + 0xc00) == 0) {
          lVar7 = param_1;
        }
        lVar12 = (longlong)iVar5 * 0x30;
        iVar3 = FUN_1447addd0(lVar12 + lVar7,0x10);
        uVar4 = (longlong)iVar3 & (longlong)*(int *)(param_1 + 0xcb8) - 1U;
        iVar3 = (int)uVar4;
        *(int *)(lVar7 + 0x2c + lVar12) = iVar3;
        lVar9 = *(longlong *)(param_1 + 0xcb0);
        if (*(longlong *)(param_1 + 0xcb0) == 0) {
          lVar9 = lVar1;
        }
        *(undefined4 *)(lVar7 + 0x28 + lVar12) =
             *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0xcb8) - 1U & uVar4) * 4);
        lVar7 = *(longlong *)(param_1 + 0xcb0);
        if (*(longlong *)(param_1 + 0xcb0) == 0) {
          lVar7 = lVar1;
        }
        *(int *)(lVar7 + ((longlong)iVar3 & (longlong)*(int *)(param_1 + 0xcb8) - 1U) * 4) = iVar5;
        uVar10 = ~(uint)uVar11 & uVar10;
        lVar7 = *(longlong *)(lVar8 + 8);
        if (*(longlong *)(lVar8 + 8) == 0) {
          lVar7 = lVar8;
        }
        iVar3 = *(int *)(lVar8 + 0x10);
        lVar9 = (longlong)(int)local_70;
        uVar2 = *(uint *)(lVar7 + lVar9 * 4) & uVar10;
        if (uVar2 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < (int)local_70) {
            iVar6 = (int)local_70;
          }
          if (iVar5 <= (int)local_70) break;
          local_74 = local_74 + 0x20;
          lVar12 = 0;
          while (uVar2 = *(uint *)(lVar7 + lVar9 * 4 + 4 + lVar12 * 4), uVar2 == 0) {
            local_74 = local_74 + 0x20;
            lVar12 = lVar12 + 1;
            if (iVar6 - lVar9 == lVar12) goto LAB_141005b7c;
          }
          local_70 = (ulonglong)((int)local_70 + (int)lVar12 + 1);
          uVar10 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar2 & uVar2);
        uVar4 = uVar11 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar5 = (local_74 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar3);
    }
  }
LAB_141005b7c:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141005ba4 FUN_141005ba4 body=2520 status=ok
// SIG undefined FUN_141005ba4(void)

void FUN_141005ba4(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  int *piVar24;
  longlong *plVar25;
  longlong lVar26;
  int *piVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  undefined1 auStack_118 [44];
  int local_ec;
  longlong local_e8;
  uint local_e0;
  int local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  uint local_ac;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_141499196();
  local_c0 = (longlong *)(param_1 + 0x390);
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    FUN_14882bea0(local_c0);
    FUN_14882bfe4(local_c0);
  }
  local_c8 = param_1 + 0x288;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_80 = local_c8;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    uVar28 = 1;
    local_e0 = 0xffffffff;
    iVar29 = 0;
    local_78._4_4_ = 0;
    local_b8 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    local_b8 = local_88 & 0xffffffff;
    uVar28 = local_88 >> 0x20;
    local_e0 = (uint)local_78;
    iVar29 = *(int *)(param_1 + 0x2a0);
  }
  if (local_78._4_4_ != iVar29 || local_80 != local_c8) {
    local_e8 = param_1 + 0x3a0;
    local_98 = param_1 + 0x3c8;
    iVar18 = local_78._4_4_;
    iVar30 = local_70;
    local_ec = iVar29;
    local_a8 = local_80;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar18 * 0x20);
      local_dc = iVar30;
      local_a0 = uVar28;
      if ((lVar14 != 0) && (plVar25 = *(longlong **)(lVar14 + 0x30), plVar25 != (longlong *)0x0)) {
        lVar14 = (**(code **)(*plVar25 + 8))(plVar25);
        lVar15 = FUN_14073f72a();
        if ((lVar15 != 0) &&
           ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
             lVar15 + 0x30)))) {
          cVar12 = FUN_1401144ce(plVar25 + 9);
          if (cVar12 != '\0') {
            if (*(int *)(param_1 + 0x3c4) == 0) {
              uVar23 = *(uint *)(param_1 + 0x398);
              uVar28 = (ulonglong)uVar23;
              *(uint *)(param_1 + 0x398) = uVar23 + 1;
              if (*(uint *)(param_1 + 0x39c) == uVar23) {
                FUN_14021b4e8(local_c0,uVar23);
              }
              iVar29 = *(int *)(param_1 + 0x3b8);
              if (iVar29 == 0) {
                iVar18 = -1;
              }
              else {
                iVar18 = iVar29 + 0x1e;
                if (-1 < iVar29 + -1) {
                  iVar18 = iVar29 + -1;
                }
                iVar18 = iVar18 >> 5;
              }
              iVar30 = iVar29 + 1;
              iVar31 = iVar29 + 0x1f;
              if (-1 < iVar29) {
                iVar31 = iVar29;
              }
              if (iVar31 >> 5 == iVar18) {
                *(int *)(param_1 + 0x3b8) = iVar30;
                local_d0._0_4_ = uVar23;
              }
              else {
                local_d0 = uVar28;
                if (*(int *)(param_1 + 0x3bc) <= iVar29) {
                  if (iVar29 + 0x20U < 0xa0) {
                    iVar30 = 0x80;
                    iVar18 = iVar29;
                  }
                  else {
                    uVar23 = iVar29 + 0x20U >> 5;
                    local_d8 = (ulonglong)uVar23;
                    if (*(int *)(param_1 + 0x3bc) + 0x1fU < 0xa0) {
                      uVar21 = 4;
                      if (4 < uVar23) {
                        uVar21 = uVar23;
                      }
                    }
                    else {
                      uVar21 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
                    }
                    uVar28 = FUN_144a3809e(uVar21 << 2,0);
                    iVar18 = (int)(uVar28 >> 2);
                    iVar30 = iVar18 << 5;
                    if (iVar18 < (int)local_d8) {
                      iVar30 = -0x20;
                    }
                    iVar18 = *(int *)(param_1 + 0x3b8);
                  }
                  *(int *)(param_1 + 0x3bc) = iVar30;
                  FUN_1446efbd8(local_e8,iVar18);
                  iVar30 = *(int *)(param_1 + 0x3b8) + 1;
                }
                iVar18 = iVar30 + 0x1f;
                if (-1 < iVar30) {
                  iVar18 = iVar30;
                }
                *(int *)(param_1 + 0x3b8) = iVar30;
                if (iVar30 % 0x20 != 0) {
                  lVar14 = *(longlong *)(param_1 + 0x3b0);
                  if (*(longlong *)(param_1 + 0x3b0) == 0) {
                    lVar14 = local_e8;
                  }
                  bVar17 = -(char)(iVar30 % 0x20);
                  *(uint *)(lVar14 + (longlong)(iVar18 >> 5) * 4) =
                       (uint)(*(int *)(lVar14 + (longlong)(iVar18 >> 5) * 4) << (bVar17 & 0x1f)) >>
                       (bVar17 & 0x1f);
                }
              }
              lVar15 = (longlong)(int)(uint)local_d0;
              lVar14 = *(longlong *)(param_1 + 0x3b0);
              if (*(longlong *)(param_1 + 0x3b0) == 0) {
                lVar14 = local_e8;
              }
              bVar17 = (byte)iVar29 & 0x1f;
              puVar1 = (uint *)(lVar14 + (longlong)(iVar31 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
              uVar23 = (uint)local_d0;
            }
            else {
              uVar23 = *(uint *)(param_1 + 0x3c0);
              lVar15 = (longlong)(int)uVar23;
              iVar29 = *(int *)(*(longlong *)(param_1 + 0x390) + 4 + lVar15 * 0x48);
              *(int *)(param_1 + 0x3c0) = iVar29;
              iVar18 = *(int *)(param_1 + 0x3c4) + -1;
              *(int *)(param_1 + 0x3c4) = iVar18;
              if (iVar18 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar29 * 0x48) =
                     0xffffffff;
              }
            }
            local_ac = 1 << ((byte)uVar23 & 0x1f);
            lVar14 = *(longlong *)(param_1 + 0x3b0);
            if (*(longlong *)(param_1 + 0x3b0) == 0) {
              lVar14 = local_e8;
            }
            uVar21 = uVar23 + 0x1f;
            if (-1 < (int)uVar23) {
              uVar21 = uVar23;
            }
            local_90 = (longlong)((int)uVar21 >> 5);
            puVar1 = (uint *)(lVar14 + local_90 * 4);
            *puVar1 = *puVar1 | local_ac;
            local_d0 = *(longlong *)(param_1 + 0x390);
            local_d8 = lVar15 * 9;
            puVar1 = (uint *)(local_d0 + 0x10 + lVar15 * 0x48);
            *(undefined2 *)(puVar1 + -4) = 0;
            puVar1[-3] = 0;
            puVar1[-2] = 0;
            puVar1[0] = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            puVar1[-2] = *(uint *)(plVar25 + 10);
            *(longlong *)(puVar1 + -4) = plVar25[9];
            FUN_1447715ec(puVar1,plVar25 + 0xb);
            *(longlong **)(puVar1 + 10) = plVar25;
            puVar1[0xc] = 0xffffffff;
            if ((char)puVar1[-4] == '\x01') {
              FUN_1447a97f4(&local_88,puVar1);
              if (0 < local_88._4_4_) {
                lVar14 = 0;
                uVar28 = 0;
                iVar29 = local_88._4_4_;
                iVar18 = DAT_14c948000;
                do {
                  bVar32 = (uint)local_88 != 0;
                  bVar33 = (uint)local_88 != iVar18;
                  piVar24 = (int *)&DAT_14c948618;
                  piVar27 = &DAT_14c948620;
                  if (bVar33 && bVar32) {
                    plVar25 = &local_80;
                    if (0 < local_64) {
                      plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                    }
                    if (1 < iVar29) {
                      plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                    }
                    piVar27 = (int *)((longlong)plVar25 + lVar14 + 8);
                    piVar24 = (int *)((longlong)plVar25 + lVar14);
                  }
                  if ((*piVar24 == DAT_14cb7beb0) && (*piVar27 == DAT_14cb7beb8)) {
LAB_141005ff4:
                    FUN_1402b5374(&local_88,uVar28 & 0xffffffff,0);
                    iVar29 = local_88._4_4_;
                    iVar18 = DAT_14c948000;
                  }
                  else {
                    piVar24 = &DAT_14c948620;
                    piVar27 = (int *)&DAT_14c948618;
                    if (bVar33 && bVar32) {
                      plVar25 = &local_80;
                      if (0 < local_64) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      if (1 < iVar29) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      piVar24 = (int *)((longlong)plVar25 + lVar14 + 8);
                      piVar27 = (int *)((longlong)plVar25 + lVar14);
                    }
                    if ((*piVar27 == DAT_14cb7bec8) && (*piVar24 == DAT_14cb7bed0))
                    goto LAB_141005ff4;
                    piVar24 = &DAT_14c948620;
                    piVar27 = (int *)&DAT_14c948618;
                    if (bVar33 && bVar32) {
                      plVar25 = &local_80;
                      if (0 < local_64) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      if (1 < iVar29) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      piVar24 = (int *)((longlong)plVar25 + lVar14 + 8);
                      piVar27 = (int *)((longlong)plVar25 + lVar14);
                    }
                    if ((*piVar27 == DAT_14cb7bee0) && (*piVar24 == DAT_14cb7bee8))
                    goto LAB_141005ff4;
                    piVar24 = &DAT_14c948620;
                    piVar27 = (int *)&DAT_14c948618;
                    if (bVar33 && bVar32) {
                      plVar25 = &local_80;
                      if (0 < local_64) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      if (1 < iVar29) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      piVar24 = (int *)((longlong)plVar25 + lVar14 + 8);
                      piVar27 = (int *)((longlong)plVar25 + lVar14);
                    }
                    if ((*piVar27 == DAT_14cb7bef8) && (*piVar24 == DAT_14cb7bf00))
                    goto LAB_141005ff4;
                    piVar24 = &DAT_14c948620;
                    piVar27 = (int *)&DAT_14c948618;
                    if (bVar33 && bVar32) {
                      plVar25 = &local_80;
                      if (0 < local_64) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      if (1 < iVar29) {
                        plVar25 = (longlong *)CONCAT44(uStack_6c,local_70);
                      }
                      piVar24 = (int *)((longlong)plVar25 + lVar14 + 8);
                      piVar27 = (int *)((longlong)plVar25 + lVar14);
                    }
                    if ((*piVar27 == DAT_14cb7bf10) && (*piVar24 == DAT_14cb7bf18))
                    goto LAB_141005ff4;
                  }
                  uVar28 = uVar28 + 1;
                  lVar14 = lVar14 + 0xc;
                } while ((longlong)uVar28 < (longlong)iVar29);
              }
              uVar21 = (uint)local_88;
              if (CONCAT44(uStack_6c,local_70) != 0) {
                FUN_1400020a8();
              }
            }
            else {
              uVar21 = *puVar1;
            }
            plVar25 = local_c0;
            puVar2 = (undefined4 *)(local_d0 + local_d8 * 8);
            iVar29 = 1;
            if (*(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x3c4) == 1) {
              uVar13 = 1;
            }
            else {
              iVar18 = FUN_14100657e(local_c0,uVar21,puVar2);
              if (iVar18 != -1) {
                lVar14 = *plVar25;
                if (*(longlong *)(lVar14 + 0x28 + (longlong)iVar18 * 0x48) != 0) {
                  FUN_1400020a8();
                }
                puVar16 = (undefined4 *)((longlong)iVar18 * 0x48 + lVar14);
                uVar22 = *puVar2;
                uVar4 = puVar2[1];
                uVar5 = puVar2[2];
                uVar6 = puVar2[3];
                uVar7 = *(undefined8 *)(puVar2 + 4);
                uVar8 = *(undefined8 *)(puVar2 + 6);
                uVar9 = *(undefined8 *)(puVar2 + 8);
                uVar10 = *(undefined8 *)(puVar2 + 10);
                uVar11 = *(undefined8 *)(puVar2 + 0xe);
                *(undefined8 *)(puVar16 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
                *(undefined8 *)(puVar16 + 0xe) = uVar11;
                *(undefined8 *)(puVar16 + 8) = uVar9;
                *(undefined8 *)(puVar16 + 10) = uVar10;
                *(undefined8 *)(puVar16 + 4) = uVar7;
                *(undefined8 *)(puVar16 + 6) = uVar8;
                *puVar16 = uVar22;
                puVar16[1] = uVar4;
                puVar16[2] = uVar5;
                puVar16[3] = uVar6;
                lVar14 = *(longlong *)(param_1 + 0x390);
                if (*(int *)(param_1 + 0x3c4) != 0) {
                  *(uint *)(lVar14 + (longlong)*(int *)(param_1 + 0x3c0) * 0x48) = uVar23;
                }
                *(undefined4 *)(lVar14 + (longlong)(int)uVar23 * 0x48) = 0xffffffff;
                uVar22 = 0xffffffff;
                if (0 < *(int *)(param_1 + 0x3c4)) {
                  uVar22 = *(undefined4 *)(param_1 + 0x3c0);
                }
                *(undefined4 *)(lVar14 + (longlong)(int)uVar23 * 0x48 + 4) = uVar22;
                *(uint *)(param_1 + 0x3c0) = uVar23;
                *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x3c4) + 1;
                lVar14 = *(longlong *)(param_1 + 0x3b0);
                if (*(longlong *)(param_1 + 0x3b0) == 0) {
                  lVar14 = local_e8;
                }
                puVar1 = (uint *)(lVar14 + local_90 * 4);
                *puVar1 = *puVar1 & ~local_ac;
                iVar29 = local_ec;
                goto LAB_141006146;
              }
              uVar13 = *(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x3c4);
              if (3 < uVar13) {
                uVar28 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
                lVar14 = 0x3f;
                if (uVar28 != 0) {
                  for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                iVar29 = 1 << ((byte)lVar14 & 0x1f);
              }
            }
            if (((int)uVar13 < 1) || (iVar29 <= *(int *)(param_1 + 0x3d8))) {
              uVar21 = *(int *)(param_1 + 0x3d8) - 1U & uVar21;
              puVar2[0x11] = uVar21;
              lVar14 = *(longlong *)(param_1 + 0x3d0);
              if (*(longlong *)(param_1 + 0x3d0) == 0) {
                lVar14 = local_98;
              }
              puVar2[0x10] = *(undefined4 *)
                              (lVar14 + ((longlong)*(int *)(param_1 + 0x3d8) - 1U &
                                        (longlong)(int)uVar21) * 4);
              lVar14 = *(longlong *)(param_1 + 0x3d0);
              if (*(longlong *)(param_1 + 0x3d0) == 0) {
                lVar14 = local_98;
              }
              *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x3d8) - 1U & (longlong)(int)uVar21)
                                 * 4) = uVar23;
              iVar29 = local_ec;
            }
            else {
              *(int *)(param_1 + 0x3d8) = iVar29;
              FUN_1410065ec(local_c0);
              iVar29 = local_ec;
            }
          }
        }
      }
LAB_141006146:
      local_e0 = local_e0 & ~(uint)local_a0;
      lVar14 = *(longlong *)(local_a8 + 0x10);
      if (*(longlong *)(local_a8 + 0x10) == 0) {
        lVar14 = local_a8;
      }
      iVar31 = *(int *)(local_a8 + 0x18);
      iVar18 = (int)local_b8;
      lVar15 = (longlong)iVar18;
      uVar23 = *(uint *)(lVar14 + lVar15 * 4) & local_e0;
      iVar30 = local_dc;
      if (uVar23 == 0) {
        iVar19 = iVar31 + 0x1e;
        if (-1 < iVar31 + -1) {
          iVar19 = iVar31 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar30 = local_dc + 0x20;
        iVar20 = iVar19;
        if (iVar19 < iVar18) {
          iVar20 = iVar18;
        }
        if (iVar18 < iVar19) {
          lVar26 = 0;
          do {
            uVar23 = *(uint *)(lVar14 + lVar15 * 4 + 4 + lVar26 * 4);
            if (uVar23 != 0) {
              local_b8 = (ulonglong)(iVar18 + (int)lVar26 + 1);
              local_e0 = 0xffffffff;
              goto LAB_1410061cf;
            }
            iVar30 = iVar30 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar20 - lVar15 != lVar26);
          local_e0 = 0xffffffff;
          iVar18 = iVar20;
        }
        local_b8 = (ulonglong)(iVar18 + 1);
        uVar28 = local_a0;
        iVar18 = iVar31;
        iVar29 = local_ec;
      }
      else {
LAB_1410061cf:
        uVar28 = (ulonglong)(-uVar23 & uVar23);
        uVar3 = uVar28 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar18 = (iVar30 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar31 <= iVar18) {
          iVar18 = iVar31;
        }
      }
    } while (iVar18 != iVar29 || local_a8 != local_c8);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100657e FUN_14100657e body=109 status=ok
// SIG undefined FUN_14100657e(void)

int FUN_14100657e(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x48,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x40 + (longlong)iVar4 * 0x48);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410065ec FUN_1410065ec body=1165 status=ok
// SIG undefined FUN_1410065ec(void)

void FUN_1410065ec(longlong *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  longlong **pplVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar4 = param_1 + 7;
    FUN_144a1cbf0(plVar4,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar3 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar4;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar12 != uVar3);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar18 = 1;
      local_98 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar17 = local_70 & 0xffffffff;
      uVar18 = local_70 >> 0x20;
      local_98 = (uint)local_60;
    }
    local_78 = local_68;
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar11 = local_60._4_4_;
      iVar16 = local_58;
      local_88 = param_1;
      local_80 = plVar4;
      do {
        pcVar1 = (char *)(*local_88 + (longlong)iVar11 * 0x48);
        local_94 = iVar16;
        local_90 = uVar17;
        if (*pcVar1 == '\x01') {
          FUN_1447a97f4(&local_70,pcVar1 + 0x10);
          if (0 < local_70._4_4_) {
            lVar10 = 0;
            uVar17 = 0;
            iVar16 = local_70._4_4_;
            iVar5 = DAT_14c948000;
            do {
              bVar19 = (int)local_70 != 0;
              bVar20 = (int)local_70 != iVar5;
              piVar13 = &DAT_14c948620;
              piVar14 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                pplVar15 = &local_68;
                if (0 < local_4c) {
                  pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar16) {
                  pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                piVar14 = (int *)((longlong)pplVar15 + lVar10);
              }
              if ((*piVar14 == DAT_14cb7beb0) && (*piVar13 == DAT_14cb7beb8)) {
LAB_1410068d4:
                FUN_1402b5374(&local_70,uVar17 & 0xffffffff,0);
                iVar16 = local_70._4_4_;
                iVar5 = DAT_14c948000;
              }
              else {
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bec8) && (*piVar13 == DAT_14cb7bed0)) goto LAB_1410068d4;
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bee0) && (*piVar13 == DAT_14cb7bee8)) goto LAB_1410068d4;
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bef8) && (*piVar13 == DAT_14cb7bf00)) goto LAB_1410068d4;
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bf10) && (*piVar13 == DAT_14cb7bf18)) goto LAB_1410068d4;
              }
              uVar17 = uVar17 + 1;
              lVar10 = lVar10 + 0xc;
            } while ((longlong)uVar17 < (longlong)iVar16);
          }
          iVar16 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar16 = *(int *)(pcVar1 + 0x10);
        }
        uVar17 = (longlong)iVar16 & (longlong)(int)local_88[9] - 1U;
        iVar16 = (int)uVar17;
        *(int *)(pcVar1 + 0x44) = iVar16;
        plVar4 = (longlong *)local_88[8];
        if ((longlong *)local_88[8] == (longlong *)0x0) {
          plVar4 = local_80;
        }
        *(undefined4 *)(pcVar1 + 0x40) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)local_88[9] - 1U & uVar17) * 4);
        plVar4 = (longlong *)local_88[8];
        if ((longlong *)local_88[8] == (longlong *)0x0) {
          plVar4 = local_80;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar16 & (longlong)(int)local_88[9] - 1U) * 4) =
             iVar11;
        uVar12 = local_98 & ~(uint)uVar18;
        plVar4 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar4 = local_78;
        }
        iVar5 = (int)local_78[3];
        iVar11 = (int)local_90;
        lVar10 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar4 + lVar10 * 4) & uVar12;
        uVar17 = local_90;
        iVar16 = local_94;
        if (uVar3 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar9 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar4 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar3 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar7 - lVar10 == lVar9) goto LAB_141006a3a;
          }
          local_98 = 0xffffffff;
          uVar17 = (ulonglong)(iVar11 + (int)lVar9 + 1);
          uVar12 = local_98;
        }
        local_98 = uVar12;
        uVar18 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar5);
    }
  }
LAB_141006a3a:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141006a7a FUN_141006a7a body=266 status=ok
// SIG undefined FUN_141006a7a(void)

undefined8 FUN_141006a7a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141006b7e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141006b7e;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_141006b7e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141006b35;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_141006b35;
    }
  }
  uVar6 = 0;
LAB_141006b35:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141006b86 FUN_141006b86 body=328 status=ok
// SIG undefined FUN_141006b86(void)

void FUN_141006b86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    lVar1 = FUN_1447210f0(param_2);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        FUN_141006cd0(param_2 + 0x1200,&local_28,param_1,FUN_1461d3dae);
        *(code **)(param_1 + 0xb0) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141006cd0 FUN_141006cd0 body=765 status=ok
// SIG undefined FUN_141006cd0(void)

undefined8 * FUN_141006cd0(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14b42a9c0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14beaf3f0;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_141006e7c;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_141006e66;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_141006e66:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141006e7c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14100702a FUN_14100702a body=158 status=ok
// SIG undefined FUN_14100702a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14100702a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab7cfd0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1410070c8 FUN_1410070c8 body=881 status=ok
// SIG undefined FUN_1410070c8(void)

void FUN_1410070c8(longlong *param_1,undefined8 *param_2)

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
        if ((lVar7 != 0) &&
           ((cVar5 = FUN_140dddae6(lVar7 + 0x48), cVar5 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar6 + (longlong)iVar9 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar7 = FUN_140b7bb2c();
          if ((lVar7 != 0) &&
             ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)))) {
            (*(code *)*local_98)(local_98[1],plVar3);
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
          lVar7 = FUN_140b7bb2c();
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
                goto LAB_14100724e;
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
LAB_14100724e:
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



// FUNCTION 14100743a FUN_14100743a body=67 status=ok
// SIG undefined FUN_14100743a(void)

void FUN_14100743a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100747e FUN_14100747e body=920 status=ok
// SIG undefined FUN_14100747e(void)

void FUN_14100747e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  char local_c2;
  bool local_c1;
  longlong local_c0;
  bool local_b1;
  undefined1 local_b0 [24];
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141007818();
  FUN_1410078ca(param_1 + 0x10,param_2);
  local_b1 = false;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      uVar4 = FUN_14050c9fe();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      if ((*(longlong *)(param_1 + 0x18) == 0) || (lVar5 == 0)) {
        local_b1 = false;
      }
      else {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x18));
        }
        *(longlong *)(param_1 + 0x28) = lVar5;
        local_b1 = lVar5 != 0;
      }
    }
    else {
      local_b1 = true;
    }
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_b1,1);
  bVar2 = *(byte *)(param_2 + 5);
  if (local_b1 == true) {
    local_58 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if ((bVar2 & 4) != 0) {
      local_88 = *(undefined8 *)(param_1 + 0x18);
      FUN_1401533ba(&local_58,&local_88,1);
    }
    FUN_14011750a(&local_58,param_2);
    bVar2 = *(byte *)(param_2 + 5);
    if ((bVar2 & 1) != 0) {
      FUN_140e3418c(&local_58,&local_c0,1);
      if (*(longlong *)(param_1 + 0x18) != local_c0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      *(longlong *)(param_1 + 0x18) = local_c0;
      bVar2 = *(byte *)(param_2 + 5);
    }
  }
  local_c1 = false;
  if ((bVar2 & 4) != 0) {
    local_c1 = *(int *)(param_1 + 0x30) != 0;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_c1,1);
  if (local_c1 == true) {
    FUN_14011750a(param_1 + 0x30,param_2);
  }
  local_c2 = '\0';
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (((*(byte *)(param_2 + 5) & 4) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    local_c2 = '\x01';
    local_d0 = *(longlong *)(param_1 + 0x40);
    FUN_1446dcdd4(local_b0);
    FUN_1404e49fa(&local_58,local_b0);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_d0 = *(undefined8 *)(param_1 + 0x58);
    FUN_1446dcdd4(local_b0);
    FUN_1404e49fa(&local_88,local_b0);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_c2,1);
  if (local_c2 == '\x01') {
    FUN_14075f7c0(param_2,&local_58);
    FUN_14075f7c0(param_2,&local_88);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1447325ac(&local_58,&local_d8,1);
      if (*(longlong *)(param_1 + 0x40) != local_d8) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      *(longlong *)(param_1 + 0x40) = local_d8;
      FUN_1447325ac(&local_88,&local_e0,1);
      if (*(longlong *)(param_1 + 0x58) != local_e0) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      *(longlong *)(param_1 + 0x58) = local_e0;
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141007818 FUN_141007818 body=177 status=ok
// SIG undefined FUN_141007818(void)

void FUN_141007818(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0xc),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar3 = (undefined4 *)(param_1 + 8);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141007888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar2;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 1410078ca FUN_1410078ca body=335 status=ok
// SIG undefined FUN_1410078ca(void)

void FUN_1410078ca(undefined4 *param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(byte *)(param_1 + 1);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)bVar2;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar6 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar6 = local_2c;
      }
    }
    else {
      uVar6 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar6 == 0) goto LAB_141007934;
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar6 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar6 = local_2c;
      }
    }
    else {
      uVar6 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar6 == 0) {
      if (*(char *)(param_1 + 1) == '\x01') {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      goto LAB_141007934;
    }
    if (bVar2 == 0) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
LAB_141007934:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141007a1a FUN_141007a1a body=226 status=ok
// SIG undefined FUN_141007a1a(void)

undefined4
FUN_141007a1a(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_2 + 0xa8);
  plVar3 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x18);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    plVar3 = plVar1;
  }
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    plVar3 = plVar1;
  }
  local_40 = *plVar3;
  FUN_1400021e4(&local_40,local_50);
  local_40 = *(longlong *)(param_2 + 0xa8);
  if (local_40 == 0) {
    plVar3 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x18);
    if (*(longlong *)(param_2 + 0x38) == 0) {
      plVar3 = plVar1;
    }
    local_40 = *plVar3;
  }
  local_60 = param_5;
  local_68 = param_4;
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_40,local_50,param_3);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141007afe FUN_141007afe body=507 status=ok
// SIG undefined FUN_141007afe(void)

undefined4
FUN_141007afe(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined4 local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  uVar4 = 0;
  cVar3 = FUN_14158b496(&local_48,puVar6,0);
  if (cVar3 != '\0') {
    local_38 = (longlong *)0x14a1e8f70;
    local_30 = 0xc;
    uStack_2c = uStack_2c & 0xffffff00;
    uVar4 = FUN_14001a6c0(&local_38,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar5 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_38,1);
    cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,local_48,(longlong)(int)uStack_40);
    uVar4 = 0;
    if (cVar3 == -1) {
      cVar3 = '\0';
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_38,cVar3,puVar6);
    if (local_38 != (longlong *)0x0) {
      cVar3 = (**(code **)*local_38)(local_38,local_48,(longlong)(int)uStack_40);
      if (cVar3 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*local_38 + 0x40))();
        *param_4 = uVar4;
        uVar4 = (**(code **)(*local_38 + 0x48))();
        *param_5 = uVar4;
        uVar4 = FUN_14179c1f8(local_38,1,8,param_6);
      }
    }
    plVar5 = (longlong *)CONCAT44(uStack_2c,local_30);
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
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141007d00 FUN_141007d00 body=57 status=ok
// SIG undefined FUN_141007d00(void)

void FUN_141007d00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62de0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62de0 = FUN_140002ddd(FUN_1464fb12c,uVar1,L"GbxRotationTargetModifier_AlphaScale");
  }
  return;
}



// FUNCTION 141007d40 FUN_141007d40 body=57 status=ok
// SIG undefined FUN_141007d40(void)

void FUN_141007d40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e08 = FUN_140002ddd(FUN_1465ac6b3,uVar1,L"GbxBrainAspect_Swoop");
  }
  return;
}



// FUNCTION 141007d7a FUN_141007d7a body=146 status=ok
// SIG undefined FUN_141007d7a(void)

int FUN_141007d7a(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar4 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar4 = lVar4 * 0x150 + lVar2;
    iVar1 = 0;
    do {
      if ((*(int *)(lVar2 + 0x108) != -1) && (*(longlong *)(lVar2 + 0x18) != 0)) {
        if ((longlong)*(int *)(lVar2 + 0x30) != 0) {
          lVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x28) + lVar3) == 0) goto LAB_141007de9;
            lVar3 = lVar3 + 8;
          } while ((longlong)*(int *)(lVar2 + 0x30) * 8 != lVar3);
        }
        if (((param_2 != '\0') || (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x239) != '\0')) &&
           ((param_3 != '\0' || (*(char *)(lVar2 + 0x10d) == -1)))) {
          iVar1 = iVar1 + 1;
        }
      }
LAB_141007de9:
      lVar2 = lVar2 + 0x150;
    } while (lVar2 != lVar4);
  }
  return iVar1;
}



// FUNCTION 141007e0c FUN_141007e0c body=667 status=ok
// SIG undefined FUN_141007e0c(void)

void FUN_141007e0c(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong *local_68;
  longlong local_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar7 != 0) {
    if (DAT_14cba8288 == 0) {
      local_80 = &local_58;
      local_58 = FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = &LAB_140f21842;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar7 = lVar7 + 0x6090;
      plVar8 = (longlong *)FUN_141181ea8(param_1);
      lVar3 = *plVar8;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
      *(int *)(lVar3 + 0x1b8) = *(int *)(lVar3 + 0x1b8) + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
      local_58 = (code *)0x0;
      uStack_50 = 0;
      FUN_141008826(&local_58);
      iVar2 = *(int *)(lVar3 + 0xd0);
      local_60 = lVar7;
      if (iVar2 == (int)uStack_50) {
        plVar8 = *(longlong **)(lVar3 + 200);
        *(int *)(lVar3 + 0xd8) = *(int *)(lVar3 + 0xd8) + 2;
        if (iVar2 != 0) {
          lVar7 = (longlong)iVar2 << 6;
          do {
            if (*plVar8 != 0) {
              FUN_1410080ec(&local_60,plVar8);
            }
            plVar8 = plVar8 + 8;
            lVar7 = lVar7 + -0x40;
          } while (lVar7 != 0);
        }
      }
      else {
        local_68 = (longlong *)(lVar3 + 200);
        FUN_1457e028a();
        pcVar6 = local_58;
        *(int *)(lVar3 + 0xd8) = *(int *)(lVar3 + 0xd8) + 1;
        lVar7 = (longlong)(int)uStack_50;
        if (lVar7 != 0) {
          lVar9 = 0;
          do {
            lVar4 = *(longlong *)(pcVar6 + lVar9);
            if (lVar4 != 0) {
              *(int *)(lVar3 + 0xd8) = *(int *)(lVar3 + 0xd8) + 1;
              iVar2 = *(int *)(lVar3 + 0xd0);
              *(uint *)(lVar3 + 0xd0) = iVar2 + 1U;
              if (*(uint *)(lVar3 + 0xd4) < iVar2 + 1U) {
                FUN_148e22ebc(local_68,iVar2);
              }
              lVar5 = *local_68;
              lVar1 = lVar5 + (longlong)iVar2 * 0x40;
              FUN_1410080a8(lVar1);
              *(longlong *)(lVar5 + (longlong)iVar2 * 0x40) = lVar4;
              FUN_1410080ec(&local_60,lVar1);
            }
            lVar9 = lVar9 + 8;
          } while (lVar7 * 8 != lVar9);
        }
      }
      if (local_58 != (code *)0x0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410080a8 FUN_1410080a8 body=67 status=ok
// SIG undefined FUN_1410080a8(void)

void FUN_1410080a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  FUN_140056680(param_1 + 5,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 1410080ec FUN_1410080ec body=1848 status=ok
// SIG undefined FUN_1410080ec(void)

void FUN_1410080ec(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 != 0) {
    puVar14 = *(undefined4 **)(*param_2 + 8);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = &DAT_14c9485f0;
    }
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_1400b2348(puVar14,&local_78,1);
    if ((longlong **)(param_2 + 3) == &local_78) {
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[3] != 0) {
        FUN_1400020a8();
      }
      param_2[3] = (longlong)local_78;
      local_78 = (longlong *)0x0;
      *(undefined4 *)(param_2 + 4) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_2 + 0x24) = uStack_70._4_4_;
    }
    uVar11 = *param_1;
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(*param_2 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(*param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar8 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar8);
      DAT_14c947fe0 = lVar8;
    }
    FUN_140045924(DAT_14c947fe0,&local_78,puVar14,1);
    uVar6 = FUN_1415dd0e4(uVar11,&local_78);
    *(undefined1 *)((longlong)param_2 + 0x39) = uVar6;
    iVar2 = *(int *)(*param_2 + 0x40);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    iVar3 = *(int *)((longlong)param_2 + 0x14);
    FUN_1413543a1(param_2[1],(int)param_2[2]);
    *(undefined4 *)(param_2 + 2) = 0;
    if ((iVar3 < iVar2) && (*(int *)((longlong)param_2 + 0x14) != iVar2)) {
      FUN_1418f422e(param_2 + 1,iVar2);
    }
    lVar8 = (longlong)*(int *)(*param_2 + 0x40);
    if (lVar8 != 0) {
      local_a0 = param_2 + 5;
      lVar8 = lVar8 * 0x30;
      plVar16 = (longlong *)(*(longlong *)(*param_2 + 0x38) + 0x10);
      do {
        lVar9 = FUN_140c5e320(param_2 + 1);
        lVar10 = plVar16[1];
        if (lVar10 == 0) {
          uVar11 = FUN_145d175f8();
          lVar10 = FUN_14477b664(uVar11);
          plVar16[1] = lVar10;
        }
        lVar15 = plVar16[2];
        if (lVar15 == 0) {
          if ((lVar10 != 0) && (*plVar16 != 0)) {
            plVar5 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
              plVar16[2] = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
              lVar15 = FUN_144aff482(uVar11,plVar16);
              plVar16[2] = lVar15;
              if (lVar15 != 0) {
                lVar10 = plVar16[1];
                goto LAB_14100826d;
              }
            }
          }
LAB_141008284:
          FUN_140002266(local_88,L"Unable to find UI Stat for augment in Firmware (%s)");
          FUN_140233b1a(&local_78,local_88);
          FUN_140008f88(lVar9);
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          if (local_88[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
LAB_14100826d:
          if (lVar10 == 0) {
            uVar11 = FUN_145d175f8();
            lVar10 = FUN_14477b664(uVar11);
            plVar16[1] = lVar10;
            lVar15 = plVar16[2];
            if (lVar15 == 0) {
              if (lVar10 == 0) {
                lVar15 = 0;
              }
              else {
                lVar15 = 0;
                if (*plVar16 != 0) {
                  plVar5 = *(longlong **)(lVar10 + 0xb8);
                  if ((plVar5 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                    lVar15 = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                    lVar15 = FUN_144aff482(uVar11,plVar16);
                  }
                  plVar16[2] = lVar15;
                }
              }
            }
          }
          if (*(longlong *)(lVar15 + 0xd0) == 0) goto LAB_141008284;
          lVar10 = plVar16[1];
          if (lVar10 == 0) {
            uVar11 = FUN_145d175f8();
            lVar10 = FUN_14477b664(uVar11);
            plVar16[1] = lVar10;
            lVar15 = plVar16[2];
          }
          if (lVar15 == 0) {
            plVar16[2] = 0;
            if (lVar10 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = 0;
              if (*plVar16 != 0) {
                plVar5 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar5 == (longlong *)0x0) ||
                   (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                  lVar15 = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                  lVar15 = FUN_144aff482(uVar11,plVar16);
                }
                plVar16[2] = lVar15;
              }
            }
          }
          plVar5 = *(longlong **)(lVar15 + 0xd0);
          local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
          local_50[0] = 0;
          FUN_14575a19a(&local_78,0);
          (**(code **)(*plVar5 + 0x18))(plVar5,local_98);
          FUN_140233b1a(local_88,local_98);
          FUN_140008f88(lVar9);
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1448173f8(local_50);
          if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
        }
        if ((int)param_2[6] < 2) {
          lVar10 = plVar16[1];
          if (lVar10 == 0) {
            uVar11 = FUN_145d175f8();
            lVar10 = FUN_14477b664(uVar11);
            plVar16[1] = lVar10;
          }
          lVar15 = plVar16[2];
          if (lVar15 == 0) {
            if ((lVar10 != 0) && (*plVar16 != 0)) {
              plVar5 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                plVar16[2] = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar15 = FUN_144aff482(uVar11);
                plVar16[2] = lVar15;
                if (lVar15 != 0) {
                  lVar10 = plVar16[1];
                  goto LAB_1410082f9;
                }
              }
            }
          }
          else {
LAB_1410082f9:
            if (lVar10 == 0) {
              uVar11 = FUN_145d175f8();
              lVar10 = FUN_14477b664(uVar11);
              plVar16[1] = lVar10;
              lVar15 = plVar16[2];
              if (lVar15 == 0) {
                if (lVar10 == 0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = 0;
                  if (*plVar16 != 0) {
                    plVar5 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar5 == (longlong *)0x0) ||
                       (cVar7 = (**(code **)(*plVar5 + 0x108))(), cVar7 == '\0')) {
                      lVar15 = 0;
                    }
                    else {
                      uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                      lVar15 = FUN_144aff482(uVar11);
                    }
                    plVar16[2] = lVar15;
                  }
                }
              }
            }
            lVar10 = FUN_14090ae24(lVar15 + 0x90);
            if (lVar10 != 0) {
              lVar10 = plVar16[1];
              if (lVar10 == 0) {
                uVar11 = FUN_145d175f8();
                lVar10 = FUN_14477b664(uVar11);
                plVar16[1] = lVar10;
              }
              lVar15 = plVar16[2];
              if (lVar15 == 0) {
                if (lVar10 == 0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = 0;
                  if (*plVar16 != 0) {
                    plVar5 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar5 == (longlong *)0x0) ||
                       (cVar7 = (**(code **)(*plVar5 + 0x108))(), cVar7 == '\0')) {
                      lVar15 = 0;
                    }
                    else {
                      uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                      lVar15 = FUN_144aff482(uVar11,plVar16);
                    }
                    plVar16[2] = lVar15;
                  }
                }
              }
              FUN_140390f7a(lVar15 + 0x90);
            }
          }
        }
        *(byte *)(lVar9 + 0x10) =
             *(byte *)(lVar9 + 0x10) & 0xfe |
             *(byte *)(plVar16 + 3) <= *(byte *)((longlong)param_2 + 0x39);
        plVar16 = plVar16 + 6;
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != 0);
      lVar8 = (longlong)*(int *)(*param_2 + 0x40);
      if (lVar8 != 0) {
        lVar10 = *(longlong *)(*param_2 + 0x38);
        uVar13 = (uint)*(byte *)(param_2 + 7);
        lVar9 = 0;
        do {
          uVar4 = *(uint *)(lVar10 + 0x28 + lVar9);
          bVar12 = (byte)uVar13;
          uVar13 = uVar13 & 0xff;
          if (bVar12 < (byte)uVar4) {
            uVar13 = uVar4;
          }
          *(char *)(param_2 + 7) = (char)uVar13;
          lVar9 = lVar9 + 0x30;
        } while (lVar8 * 0x30 != lVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141008826 FUN_141008826 body=155 status=ok
// SIG undefined FUN_141008826(void)

void FUN_141008826(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cbcb7a8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbcb7a8 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_148d55380(param_1,0);
    }
    local_38 = &local_48;
    local_30 = &local_40;
    local_40 = FUN_1441736d0;
    local_20 = &local_30;
    local_28 = FUN_141008c76;
    local_48 = param_1;
    FUN_1410088c2(lVar1,&local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410088c2 FUN_1410088c2 body=888 status=ok
// SIG undefined FUN_1410088c2(void)

void FUN_1410088c2(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  uint *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  if (cVar6 == '\0') {
    plVar4 = param_1 + 0x4f;
    plVar1 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_1[0x54] == 0) {
      iVar15 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar15 = (int)param_1[0x54];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar5 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar7 = local_78._4_4_;
    local_90 = plVar4;
    if ((local_78._4_4_ != iVar15) || (local_78 = local_58, uStack_60 != plVar1)) {
      do {
        local_78 = uVar5;
        lVar9 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar7 * 0x20);
        if (lVar9 != 0) {
          plVar18 = (longlong *)(*local_90 + (longlong)iVar7 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar9,0);
            lVar9 = *plVar18;
          }
          cVar6 = FUN_140dddae6(lVar9 + 0x48);
          if ((cVar6 != '\0') &&
             (plVar18 = *(longlong **)(*plVar18 + 0x30), plVar18 != (longlong *)0x0)) {
            lVar9 = (**(code **)(*plVar18 + 8))(plVar18);
            lVar10 = FUN_141008c3c();
            if ((lVar10 != 0) &&
               ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)))) {
              (*(code *)*local_a0)(local_a0[1],plVar18);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_90 != plVar4 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar15));
    }
  }
  else {
    local_98 = (uint *)(param_1 + 0x3b);
    iVar15 = (int)param_1[0x3e];
    if (iVar15 == 0) {
      uVar19 = 1;
      uVar17 = 0;
      iVar7 = 0;
      iVar14 = 0;
    }
    else {
      puVar8 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar8 = local_98;
      }
      uVar16 = *puVar8;
      if (uVar16 == 0) {
        iVar7 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar7 = iVar15 + -1;
        }
        uVar17 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar17;
        }
        iVar14 = 0;
        do {
          if (uVar19 == uVar17) goto LAB_141008a8a;
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar17 = 0;
        iVar14 = 0;
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16);
      uVar2 = uVar19 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar7) {
        iVar7 = iVar15;
      }
    }
    if (iVar7 != iVar15) {
      uVar16 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar9 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar10 = FUN_141008c3c();
          if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30)) {
            (*(code *)*local_a0)(local_a0[1],plVar4);
          }
        }
        uVar16 = uVar16 & ~(uint)uVar19;
        puVar8 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar8 = local_98;
        }
        iVar3 = (int)param_1[0x3e];
        iVar7 = (int)uVar17;
        lVar9 = (longlong)iVar7;
        uVar13 = puVar8[lVar9] & uVar16;
        if (uVar13 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar7) {
            iVar12 = iVar7;
          }
          if (iVar7 < iVar11) {
            lVar10 = 0;
            do {
              uVar13 = puVar8[lVar9 + lVar10 + 1];
              if (uVar13 != 0) {
                uVar17 = (ulonglong)(iVar7 + (int)lVar10 + 1);
                uVar16 = 0xffffffff;
                goto LAB_141008a5c;
              }
              iVar14 = iVar14 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar12 - lVar9 != lVar10);
            uVar16 = 0xffffffff;
            iVar7 = iVar12;
          }
          uVar17 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar3;
        }
        else {
LAB_141008a5c:
          uVar19 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar19 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar7) {
            iVar7 = iVar3;
          }
        }
      } while (iVar7 != iVar15);
    }
  }
LAB_141008a8a:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141008c3c FUN_141008c3c body=57 status=ok
// SIG undefined FUN_141008c3c(void)

void FUN_141008c3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0928 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0928 = FUN_140002ddd(FUN_1465ab43e,uVar1,L"FirmwareDef");
  }
  return;
}



// FUNCTION 141008c76 FUN_141008c76 body=67 status=ok
// SIG undefined FUN_141008c76(void)

void FUN_141008c76(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141008cba FUN_141008cba body=805 status=ok
// SIG undefined FUN_141008cba(void)

void FUN_141008cba(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = FUN_140d8dbd3();
  if (((-1 < (int)param_2) && ((int)param_2 < iVar3)) && (lVar8 = param_1[4], lVar8 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (lVar4 != 0) {
        if (DAT_14cba8288 == 0) {
          local_70 = &local_50;
          local_50 = FUN_141864c34;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1464cee30;
          local_78 = &LAB_148bfac22;
          local_80 = &LAB_140f21842;
          local_88 = &DAT_149e063b2;
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          plVar5 = (longlong *)FUN_141008fe0(param_1);
          lVar2 = *plVar5;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1478));
          *(int *)(lVar2 + 0x1470) = *(int *)(lVar2 + 0x1470) + 1;
          lVar9 = (ulonglong)param_2 * 0x68;
          lVar14 = lVar2 + lVar9;
          piVar1 = (int *)(lVar2 + 0x60 + lVar9);
          *piVar1 = *piVar1 + 1;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1478));
          FUN_141009055(lVar14,param_2,lVar8,lVar4);
          if (1 < *(int *)(lVar2 + 0x38 + lVar9)) {
            plVar5 = (longlong *)(lVar9 + 0x30 + lVar2);
            lVar8 = 0;
            while( true ) {
              uVar10 = *(ushort *)(*plVar5 + lVar8);
              uVar11 = (ulonglong)uVar10;
              uVar12 = *(ushort *)((longlong)&DAT_149e62e78 + lVar8);
              if (uVar10 != uVar12) break;
              if (uVar10 == 0) goto LAB_141008e60;
LAB_141008e0f:
              lVar8 = lVar8 + 2;
            }
            if ((uVar12 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar13 = (ulonglong)uVar12;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_141008e0f;
            }
            if (uVar10 != uVar12) {
              uVar6 = FUN_140d8e3ae(param_1);
              iVar3 = FUN_14100960f(uVar6,plVar5);
              if (iVar3 == *(int *)(lVar14 + 0x48)) {
                if (*(int *)(lVar14 + 0x4c) != 0) goto LAB_141008e60;
                iVar7 = 1;
              }
              else {
                iVar7 = *(int *)(lVar14 + 0x4c) + 1;
              }
              *(int *)(lVar14 + 0x48) = iVar3;
              *(int *)(lVar14 + 0x4c) = iVar7;
            }
          }
        }
      }
    }
  }
LAB_141008e60:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141008fe0 FUN_141008fe0 body=116 status=ok
// SIG undefined FUN_141008fe0(void)

longlong FUN_141008fe0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
    return local_28 + 0x1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141009055 FUN_141009055 body=765 status=ok
// SIG undefined FUN_141009055(void)

void FUN_141009055(longlong param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = FUN_140d8dbd3();
  if ((-1 < (int)param_2) && ((int)param_2 < iVar4)) {
    lVar5 = FUN_14011c349();
    local_50 = *(longlong *)(lVar5 + 0x48);
    lVar5 = FUN_140254f32(param_3);
    if (lVar5 != 0) {
      iVar4 = *(int *)(param_4 + 0x78f0);
      if ((int)param_2 < iVar4) {
        cVar7 = *(char *)(*(longlong *)(param_4 + 0x78e8) + 0x10 + (ulonglong)param_2 * 0x48);
      }
      else {
        cVar7 = '\0';
      }
      if (*(int *)(param_1 + 0x54) == 0 || *(char *)(param_1 + 0x50) != cVar7) {
        *(char *)(param_1 + 0x50) = cVar7;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        iVar4 = *(int *)(param_4 + 0x78f0);
      }
      if (((int)param_2 < iVar4) &&
         (lVar5 = (ulonglong)param_2 * 0x48 + *(longlong *)(param_4 + 0x78e8), lVar5 != 0)) {
        local_38 = (longlong *)0x0;
        local_40 = (longlong *)0x0;
        FUN_141009353(CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)(lVar5 + 0x30)),&local_38);
        plVar2 = local_38;
        plVar6 = (longlong *)*local_38;
        if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
        }
        FUN_1447a1fc0(plVar6);
        plVar2 = (longlong *)*plVar2;
        pcVar3 = *(code **)(*plVar2 + 0x28);
        if (pcVar3 == FUN_14482841c) {
          plVar6 = plVar2 + 3;
          if (plVar2[5] != 0) {
            plVar6 = (longlong *)(plVar2[5] + 8);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          plVar6 = plVar2 + 2;
        }
        else {
          plVar6 = (longlong *)(*pcVar3)(plVar2);
        }
        FUN_1449a0272(param_1,plVar6);
        plVar2 = local_40;
        plVar6 = (longlong *)*local_40;
        if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
        }
        FUN_1447a1fc0(plVar6);
        plVar2 = (longlong *)*plVar2;
        pcVar3 = *(code **)(*plVar2 + 0x28);
        if (pcVar3 == FUN_14482841c) {
          plVar6 = plVar2 + 3;
          if (plVar2[5] != 0) {
            plVar6 = (longlong *)(plVar2[5] + 8);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          plVar6 = plVar2 + 2;
        }
        else {
          plVar6 = (longlong *)(*pcVar3)(plVar2);
        }
        FUN_1449a0272(param_1 + 0x18,plVar6);
        FUN_1400021e4(lVar5 + 0x14,&local_60);
        local_48 = (int)uStack_58;
        uVar8 = (int)uStack_58 - 1;
        if ((int)uStack_58 == 0) {
          uVar8 = 0;
        }
        if (0 < (int)uVar8) {
          uVar9 = 0;
          do {
            uVar1 = *(ushort *)(local_60 + uVar9 * 2);
            *(ushort *)(local_60 + uVar9 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
            uVar9 = uVar9 + 1;
          } while (uVar8 != uVar9);
        }
        local_50 = local_60;
        local_44 = uStack_58._4_4_;
        local_60 = 0;
        uStack_58 = 0;
        FUN_140775538(param_1 + 0x30,&local_50);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (*(int *)(param_1 + 0x5c) == 0 || *(int *)(lVar5 + 0xc) != *(int *)(param_1 + 0x58)) {
          *(int *)(param_1 + 0x58) = *(int *)(lVar5 + 0xc);
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        }
      }
      else if (*(int *)(param_1 + 0x5c) == 0 || *(int *)(param_1 + 0x58) != -1) {
        *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141009353 FUN_141009353 body=699 status=ok
// SIG undefined FUN_141009353(void)

void FUN_141009353(uint param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar7 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar8 = plVar7;
  if (cVar2 == '\0') {
LAB_14100939b:
    if (*plVar8 == 0) goto LAB_1410094d3;
    plVar8 = plVar7;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar8 = (longlong *)(*plVar7 + 0x30);
        goto LAB_1410093b0;
      }
LAB_141009468:
      if (((DAT_14c9a1ab0 == 0) || (*plVar7 == 0)) ||
         (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
         plVar7 == (longlong *)0x0)) goto LAB_1410093c9;
      puVar9 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar7 + 0x2a0))(plVar7,plVar1,puVar9);
LAB_1410094b8:
      if (cVar2 == '\0') goto LAB_1410093c9;
      goto LAB_141009520;
    }
LAB_1410093b0:
    if (*plVar8 == 0) goto LAB_141009468;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar8 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar7 != 0 &&
        (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
        plVar7 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar1);
      goto LAB_1410094b8;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar8 = (longlong *)(*plVar7 + 0x30);
      goto LAB_14100939b;
    }
LAB_1410094d3:
    lVar3 = FUN_140162146();
    if (lVar3 != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_1446ddda2(&local_68,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_68,plVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
LAB_141009520:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_1410093c9:
  lVar3 = plVar1[5];
  if (lVar3 == 0) {
    uVar5 = FUN_145d8612a();
    lVar3 = FUN_14477b664(uVar5);
    plVar1[5] = lVar3;
  }
  lVar6 = plVar1[6];
  if (lVar6 == 0) {
    if ((lVar3 != 0) && (plVar1[4] != 0)) {
      plVar7 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
        plVar1[6] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar6 = FUN_144aff482(uVar5,plVar1 + 4);
        plVar1[6] = lVar6;
        if (lVar6 != 0) goto LAB_1410093e3;
      }
    }
  }
  else {
LAB_1410093e3:
    if ((int)((ulonglong)param_1 & 0xff) < *(int *)(lVar6 + 0x20)) {
      lVar3 = ((ulonglong)param_1 & 0xff) * 0x38;
      *param_2 = *(longlong *)(lVar6 + 0x18) + lVar3 + 0x18;
      puVar4 = (undefined8 *)(lVar3 + *(longlong *)(lVar6 + 0x18) + 0x28);
      goto LAB_14100940c;
    }
  }
  puVar4 = &DAT_14cbcc640;
  *param_2 = (longlong)&DAT_14cbcc640;
LAB_14100940c:
  *param_3 = puVar4;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100960f FUN_14100960f body=297 status=ok
// SIG undefined FUN_14100960f(void)

undefined4 FUN_14100960f(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  void *local_90;
  uint local_88;
  undefined4 local_7c;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined4 *local_50;
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 1);
    if (1 < (int)uVar1) {
      local_98 = &local_7c;
      local_7c = 0;
      local_90 = (void *)0x0;
      pvVar2 = (void *)*param_2;
      local_88 = uVar1;
      FUN_1446dd670(&local_90,(ulonglong)uVar1,0);
      memcpy(local_90,pvVar2,(ulonglong)uVar1 * 2);
      pvVar2 = local_90;
      local_78 = (code *)0x0;
      local_68 = 0;
      local_58 = &PTR_FUN_14b9a6c10;
      local_50 = local_98;
      local_48 = (void *)0x0;
      lVar4 = (longlong)(int)local_88;
      local_40 = local_88;
      if (lVar4 == 0) {
        local_3c = 0;
      }
      else {
        FUN_1446dd670(&local_48,local_88,0);
        memcpy(local_48,pvVar2,lVar4 * 2);
      }
      local_78 = FUN_1442498f8;
      FUN_14100973a(param_1);
      uVar3 = local_7c;
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
        uVar3 = local_7c;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14100973a FUN_14100973a body=146 status=ok
// SIG undefined FUN_14100973a(void)

void FUN_14100973a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *param_2;
  local_48[0] = 0;
  if (local_58[0] != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)*plVar1)(plVar1,local_48);
  }
  FUN_1410097ce(param_1,local_58);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410097ce FUN_1410097ce body=260 status=ok
// SIG undefined FUN_1410097ce(void)

void FUN_1410097ce(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [39];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar3 != 0) {
    local_41 = '\0';
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar3 = lVar3 * 0x150 + lVar6;
    do {
      if ((*(int *)(lVar6 + 0x108) != -1) && (*(longlong *)(lVar6 + 0x18) != 0)) {
        if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar5) == 0) goto LAB_141009882;
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(lVar6 + 0x30) * 8 != lVar5);
        }
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        uVar2 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar2,lVar6 + 0x10,&local_41);
        if (local_41 != '\0') break;
      }
LAB_141009882:
      lVar6 = lVar6 + 0x150;
    } while (lVar6 != lVar3);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410098d4 FUN_1410098d4 body=307 status=ok
// SIG undefined FUN_1410098d4(void)

void FUN_1410098d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar7 = *param_2;
  uVar6 = FUN_141009a07();
  lVar10 = *(longlong *)(lVar7 + 0x200);
  if (lVar10 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar10,uVar6,0);
  }
  FUN_1407cace8(lVar7,uVar6,0x3f800000,0);
  lVar7 = FUN_141009a40(param_1 + 0x30);
  if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x40))) {
    lVar10 = 0x10;
    lVar11 = 0;
    do {
      lVar2 = *param_2;
      lVar3 = *(longlong *)(lVar7 + 0x38);
      plVar1 = (longlong *)(lVar10 + lVar3);
      lVar8 = *(longlong *)(lVar3 + 8 + lVar10);
      if (lVar8 == 0) {
        uVar6 = FUN_145d175f8();
        lVar8 = FUN_14477b664(uVar6);
        plVar1[1] = lVar8;
      }
      lVar9 = *(longlong *)(lVar3 + 0x10 + lVar10);
      if (lVar9 == 0) {
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if (*plVar1 != 0) {
            plVar4 = *(longlong **)(lVar8 + 0xb8);
            if (plVar4 == (longlong *)0x0) {
LAB_1410099fc:
              lVar9 = 0;
            }
            else {
              cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
              if (cVar5 == '\0') goto LAB_1410099fc;
              uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar9 = FUN_144aff482(uVar6,plVar1);
            }
            *(longlong *)(lVar3 + 0x10 + lVar10) = lVar9;
          }
        }
      }
      FUN_14087c9f2(lVar2,lVar9);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x30;
    } while (lVar11 < *(int *)(lVar7 + 0x40));
  }
  return;
}



// FUNCTION 141009a07 FUN_141009a07 body=57 status=ok
// SIG undefined FUN_141009a07(void)

void FUN_141009a07(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba08e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba08e0 = FUN_14171c317(FUN_1465ab3a9,uVar1,L"EAtt_FirmwareAspect");
  }
  return;
}



// FUNCTION 141009a40 FUN_141009a40 body=138 status=ok
// SIG undefined FUN_141009a40(void)

longlong FUN_141009a40(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cbcb7a8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cbcb7a8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141009acc FUN_141009acc body=532 status=ok
// SIG undefined FUN_141009acc(void)

void FUN_141009acc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141009da8();
  if (*(longlong *)(param_1 + 0x4430) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x4430) + 0x18;
    lVar1 = FUN_14485c28e(lVar5);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_14485c28e(lVar5);
    }
    if (lVar1 == param_2) {
      FUN_1447cd2ec(param_1 + 0x4460,0);
      if ((longlong)*(int *)(param_1 + 0x4658) != 0) {
        lVar1 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 18000) + 8 + lVar1) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 18000) + lVar1) != 0)) {
            FUN_1404f401e(param_1 + 18000,param_1);
            break;
          }
          lVar1 = lVar1 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x4658) * 0x10 != lVar1);
      }
      if (*(longlong **)(param_1 + 0x4208) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x4208) + 0xba8))();
      }
      FUN_141009ce2(param_1,0x80000);
    }
  }
  if ((*(longlong *)(param_1 + 0x43d8) != 0) &&
     (lVar1 = FUN_14485c28e(*(longlong *)(param_1 + 0x43d8) + 0x20), lVar1 == param_2)) {
    FUN_1457e03d4(param_1);
    FUN_14056e39e(param_1);
    *(undefined1 *)(param_1 + 0x43f0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x4208);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1407ca880();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_1407ca880();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if (((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
           (lVar1 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x48), lVar1 != 0)) {
          uVar2 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x48);
          (**(code **)(*plVar4 + 0x38))(plVar4,uVar2);
        }
      }
    }
    local_30 = 0;
    local_28 = 0;
    FUN_1457e0362(param_1 + 0x43f8);
    if ((longlong)*(int *)(param_1 + 0x4658) != 0) {
      lVar1 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 18000) + 8 + lVar1) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 18000) + lVar1) != 0)) {
          FUN_1404f401e(param_1 + 18000,param_1);
          break;
        }
        lVar1 = lVar1 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x4658) * 0x10 != lVar1);
    }
    FUN_141009ce2(param_1,0x200000);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141009ce2 FUN_141009ce2 body=97 status=ok
// SIG undefined FUN_141009ce2(void)

undefined4 FUN_141009ce2(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_14075fe08();
  uVar1 = FUN_14075fa88(param_1 + 0x42b8,uVar1);
  if ((char)uVar1 != '\0') {
    fVar2 = (float)FUN_14075fe08(param_1,param_2);
    FUN_141009d44(param_1 + 0x42b8,fVar2,1e-08 < ABS(fVar2));
  }
  return uVar1;
}



// FUNCTION 141009d44 FUN_141009d44 body=99 status=ok
// SIG undefined FUN_141009d44(void)

undefined4 FUN_141009d44(undefined8 param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14075fa88();
  if ((char)uVar1 != '\0') {
    lVar2 = FUN_14075fac2(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_14008e0ae(lVar2);
      FUN_1409d461e(lVar2,(*(float *)(lVar2 + 200) + *(float *)(lVar2 + 0x120)) - param_2,param_3);
    }
  }
  return uVar1;
}



// FUNCTION 141009da8 FUN_141009da8 body=247 status=ok
// SIG undefined FUN_141009da8(void)

void FUN_141009da8(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(undefined1 *)(param_1 + 0x2ca8) = 0;
  if (*(char *)(param_1 + 0x2cb0) != '\0') {
    *(undefined1 *)(param_1 + 0x2cb0) = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xc);
    }
    else {
      uVar6 = (uint)uVar1;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
          puVar4 = *(uint **)(lVar2 + 0x18);
          if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
            puVar4 = (uint *)(lVar2 + 8);
          }
          *puVar4 = *puVar4 | 0x1000;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x3b60) != 0) && (lVar2 = FUN_144843108(), lVar2 == param_2)) {
    FUN_146548b22(param_1);
    return;
  }
  return;
}



// FUNCTION 141009ea0 FUN_141009ea0 body=120 status=ok
// SIG undefined FUN_141009ea0(void)

void FUN_141009ea0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1403ae46b();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141009f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x80))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141009f26 FUN_141009f26 body=174 status=ok
// SIG undefined FUN_141009f26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141009f26(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab7c850;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 141009fd4 FUN_141009fd4 body=346 status=ok
// SIG undefined FUN_141009fd4(void)

void FUN_141009fd4(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == '\x02') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0 < *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        if (lVar3 != 0) {
          FUN_14100a130(&local_50);
          FUN_14100a2aa(lVar3 + 0x590,param_1,FUN_1459465e4,local_50);
          lVar3 = *(longlong *)(lVar2 + lVar4);
          FUN_14100a1e8(&local_58);
          FUN_14100a2aa(lVar3 + 0x5a0,param_1,FUN_145935bca,local_58);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  else if (param_2 == '\x03') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        if (lVar3 != 0) {
          FUN_1401073f6(lVar3 + 0x590,param_1);
          FUN_1401073f6(*(longlong *)(lVar2 + lVar4) + 0x5a0,param_1);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  else if (param_2 == '\x04') {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100a130 FUN_14100a130 body=182 status=ok
// SIG undefined FUN_14100a130(void)

undefined8 * FUN_14100a130(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c348) {
    FUN_144b3d300(&DAT_14cb8c348);
    if (DAT_14cb8c348 == -1) {
      builtin_wcsncpy(local_38 + 8,L"dTrigger",9);
      builtin_wcsncpy(local_38,L"OnTouche",8);
      FUN_1446f470e(&DAT_14cb8c340,local_38,1);
      _Init_thread_footer(&DAT_14cb8c348);
    }
  }
  *param_1 = DAT_14cb8c340;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100a1e8 FUN_14100a1e8 body=193 status=ok
// SIG undefined FUN_14100a1e8(void)

undefined8 * FUN_14100a1e8(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c354) {
    FUN_144b3d300(&DAT_14cb8c354);
    if (DAT_14cb8c354 == -1) {
      builtin_wcsncpy(local_38,L"OnUntouchedTrigger",0x13);
      FUN_1446f470e(&DAT_14cb8c34c,local_38,1);
      _Init_thread_footer(&DAT_14cb8c354);
    }
  }
  *param_1 = DAT_14cb8c34c;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100a2aa FUN_14100a2aa body=595 status=ok
// SIG undefined FUN_14100a2aa(void)

void FUN_14100a2aa(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
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
    uVar5 = (ulonglong)uVar3;
    if (param_4 == 0) {
      param_4 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_4);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_4;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_14100a49f;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_14100a49f:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100a4fe FUN_14100a4fe body=284 status=ok
// SIG undefined FUN_14100a4fe(void)

undefined8 FUN_14100a4fe(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14100a614;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14100a614;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14100a614:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14100a5c1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14100a5c1;
    }
  }
  uVar6 = 0;
LAB_14100a5c1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100a61c FUN_14100a61c body=1037 status=ok
// SIG undefined FUN_14100a61c(void)

void FUN_14100a61c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_208 [32];
  uint local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  code **local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  undefined1 local_198 [24];
  longlong local_180;
  longlong local_170;
  undefined2 *local_160;
  undefined8 local_158;
  longlong local_150;
  undefined4 local_148;
  int local_144;
  longlong local_140;
  uint local_130 [4];
  longlong *local_120;
  int local_108;
  code *local_100 [2];
  longlong local_f0;
  int local_e8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((*(longlong **)(param_1 + 0x438) != (longlong *)0x0) && (*(int *)(param_1 + 0x434) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x430);
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x434))) &&
          ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (*(int *)(param_1 + 0x460) != -1)) {
        lVar9 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x20))();
        if (lVar9 != 0) {
          if (DAT_14cb939a8 == 0) {
            local_1b0 = local_100;
            local_100[0] = FUN_140940982;
            local_1a0 = FUN_14081d0ea;
            local_1a8 = &LAB_146522c26;
            local_1b8 = &LAB_148a0db91;
            local_1c0 = &LAB_146572ba7;
            local_1c8 = L"Engine";
            local_1d0 = 0;
            local_1d8 = 0x10000004;
            local_1e0 = 8;
            local_1e8 = 0xdd8;
            FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
          }
          if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
            FUN_14100aa2a(local_198,lVar9 + 0x3f0);
            FUN_14100aaae(local_198,param_2);
            FUN_140ee6060(param_2,lVar9);
            local_130[0] = local_130[0] & 0xffffff00;
            local_108 = 0;
            FUN_1456bb102(local_130,param_1);
            FUN_140368c94(local_198,local_100,local_130,1);
            lVar9 = DAT_14c9a3da0;
            if ((longlong)local_108 != 0) {
              lVar8 = (longlong)local_108 + -1;
              lVar6 = lVar8 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar6));
              if (*(longlong *)(lVar9 + lVar6) != 0) {
                FUN_1400020a8();
              }
              lVar9 = DAT_14c9a3da0;
              iVar7 = (int)lVar8;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
              }
              *(undefined4 *)(lVar9 + lVar6) = 0xffffffff;
              iVar4 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar4 = DAT_14c9a3dd0;
              }
              *(int *)(lVar9 + 4 + lVar6) = iVar4;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar5 = &DAT_14c9a3db0;
              if (DAT_14c9a3dc0 != (undefined *)0x0) {
                puVar5 = DAT_14c9a3dc0;
              }
              iVar4 = iVar7 + 0x1f;
              if (-1 < iVar7) {
                iVar4 = iVar7;
              }
              bVar3 = (byte)lVar8 & 0x1f;
              DAT_14c9a3dd0 = iVar7;
              *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
                   *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
                   (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
              local_108 = 0;
            }
            if (((char)local_130[0] == '\x03') && (local_120 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_120 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_120 + 0x10))();
              }
            }
            if (local_100[0] != (code *)0x0) {
              if ((longlong)local_e8 != 0) {
                lVar9 = 0;
                do {
                  if (*(longlong *)(local_f0 + lVar9) == 0) goto LAB_14100a7f6;
                  lVar9 = lVar9 + 8;
                } while ((longlong)local_e8 * 8 != lVar9);
              }
              local_130[0] = 0xffffffff;
              local_1e0 = *(undefined4 *)(param_1 + 0x464);
              local_1d8 = 0;
              local_1e8 = local_1e8 & 0xffffff00;
              (**(code **)(**(longlong **)(param_1 + 0x438) + 0xa8))
                        (*(longlong **)(param_1 + 0x438),local_130,local_100,
                         *(undefined4 *)(param_1 + 0x460));
            }
LAB_14100a7f6:
            FUN_140368b56(local_100);
            if (local_140 != 0) {
              FUN_1400020a8();
            }
            local_160 = &DAT_14a171d50;
            local_148 = 0;
            if (local_144 != 0) {
              FUN_140115c12(&local_150,0);
            }
            local_158 = 0;
            if (local_150 != 0) {
              FUN_1400020a8();
            }
            if (local_170 != 0) {
              FUN_1400020a8();
            }
            if (local_180 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100aa2a FUN_14100aa2a body=132 status=ok
// SIG undefined FUN_14100aa2a(void)

undefined4 * FUN_14100aa2a(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = *param_2;
  *(undefined8 *)(param_1 + 4) = param_2[1];
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_140265f12();
  *(undefined **)(param_1 + 0x10) = &DAT_14cb83310;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined ***)(param_1 + 0xe) = &PTR_FUN_14b1828b0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar1 = FUN_140b47a16(param_2,&DAT_14cb843e8);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(char *)(lVar1 + 8) == '\0')) {
    uVar2 = *(undefined4 *)(lVar1 + 0x28);
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 14100aaae FUN_14100aaae body=167 status=ok
// SIG undefined FUN_14100aaae(void)

void FUN_14100aaae(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    FUN_1446ddc76(local_30,&DAT_14b976c08,1);
    FUN_14100ab56(param_1,local_30);
  }
  else {
    lVar3 = FUN_14100ab60(*(undefined8 *)(param_1 + 8));
    if (lVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_140feb7c0((longlong *)(param_1 + 0x18),iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = lVar3;
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 0x3f800000;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100ab56 FUN_14100ab56 body=9 status=ok
// SIG undefined FUN_14100ab56(void)

void FUN_14100ab56(longlong param_1)

{
  FUN_140653d46(param_1 + 0x38);
  return;
}



// FUNCTION 14100ab60 FUN_14100ab60 body=308 status=ok
// SIG undefined FUN_14100ab60(void)

undefined8 FUN_14100ab60(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60 [2];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140e96cb2();
    local_78 = (&DAT_14cbc82a0)[param_2 & 0xff];
    FUN_1400021e4(&local_78,&local_70);
    puVar3 = local_70;
    if (local_68 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(local_60,L"part_%s",puVar3);
    FUN_14000bbd8(local_50,local_60,0);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,local_60,local_50,1);
    uVar1 = FUN_14005fc76(param_1,local_60);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14100aca6 FUN_14100aca6 body=692 status=ok
// SIG undefined FUN_14100aca6(void)

undefined8 FUN_14100aca6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a45f64();
  local_50 = DAT_14cb84a68;
  local_58 = DAT_14cb84a60;
  FUN_1448075d0(&local_48);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar7 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar4[9];
      }
      iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & (uint)local_48) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == (uint)local_48) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_14100ad5d;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_14100ad5d:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar5 == (byte *)0x0) || ((*(byte *)*puVar5 & 0x6b) != 1)) {
    local_50 = DAT_14cb84a50;
    local_58 = DAT_14cb84a48;
    FUN_1448075d0(&local_48);
    pbVar2 = (byte *)*param_2;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar7 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[9];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & (uint)local_48) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == (uint)local_48) {
              if (((lVar1 != 0) &&
                  (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar5 != (byte *)0x0 && ((*(byte *)*puVar5 & 0x40) == 0))))
              goto LAB_14100ae11;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar5 = &DAT_14c9a1308;
LAB_14100ae11:
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar5 == (byte *)0x0) || ((*(byte *)*puVar5 & 0x6b) != 1)) goto LAB_14100ae33;
    uVar3 = FUN_144a7cdd6(puVar5,0);
    FUN_1446ddc76(&local_68,uVar3,1);
    local_48 = local_68;
    local_40 = 0x1030;
  }
  else {
    uVar3 = FUN_144a7cdd6(puVar5,0);
    FUN_1446ddc76(&local_60,uVar3,1);
    local_48 = local_60;
    local_40 = 0x1010;
  }
  local_38 = 0;
  FUN_1457e05f4(param_1 + 0x90);
LAB_14100ae33:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14100af5c FUN_14100af5c body=9 status=ok
// SIG undefined FUN_14100af5c(void)

void FUN_14100af5c(longlong param_1)

{
  FUN_14100af66(param_1 + 0x28);
  return;
}



// FUNCTION 14100af66 FUN_14100af66 body=68 status=ok
// SIG undefined FUN_14100af66(void)

void FUN_14100af66(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14100afaa();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14100afaa FUN_14100afaa body=325 status=ok
// SIG undefined FUN_14100afaa(void)

void FUN_14100afaa(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 14100b0f0 FUN_14100b0f0 body=822 status=ok
// SIG undefined FUN_14100b0f0(void)

void FUN_14100b0f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb71bf8 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if ((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) goto LAB_14100b417;
  uVar3 = DAT_14cb71f80;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_38,uVar3,lVar7);
  plVar10 = local_30;
  if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
    plVar10 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar9 = local_30 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_30 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (plVar10 == (longlong *)0x0) goto LAB_14100b417;
  iVar6 = (int)plVar10[1];
  do {
    plVar9 = (longlong *)0x0;
    if (iVar6 == 0) break;
    LOCK();
    iVar4 = (int)plVar10[1];
    bVar11 = iVar6 == iVar4;
    if (bVar11) {
      *(int *)(plVar10 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    plVar9 = plVar10;
  } while (!bVar11);
  LOCK();
  piVar1 = (int *)((longlong)plVar10 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (plVar9 == (longlong *)0x0) goto LAB_14100b417;
  if ((local_38 != 0) && (FUN_1401649ea(local_38), *(longlong *)(param_1 + 0xe58) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
      if (lVar7 == 0) goto LAB_14100b3fa;
      lVar7 = *(longlong *)(param_1 + 0xb0);
      if (lVar7 == 0) {
        lVar7 = FUN_1448abda6(param_1);
      }
    }
    if (((((*(longlong *)(lVar7 + 0x30) == 0) ||
          (lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar8 == 0)) ||
         (*(longlong *)(lVar8 + 0x588) == 0)) ||
        (*(double *)(lVar7 + 0x6d0) < *(double *)(lVar7 + 0x708))) &&
       (((*(byte *)(lVar7 + 0x154) & 0x40) == 0 || (iVar6 = FUN_14490d72a(lVar7), iVar6 != 3)))) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
          if (*(longlong *)(lVar2 + 0x360) == lVar7) {
            if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x278) & 1) != 0)) goto LAB_14100b2c6;
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
      }
      if ((*(char *)(lVar7 + 0x152) != '\x03') || (-1 < *(char *)(lVar7 + 0x155)))
      goto LAB_14100b3fa;
    }
LAB_14100b2c6:
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar5 = *(byte *)(param_1 + 0x9d);
      if ((bVar5 & 1) != 0) {
        if ((*(longlong *)(param_1 + 0xb0) != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0))
        goto LAB_14100b3fa;
        bVar5 = *(byte *)(param_1 + 0x9d);
      }
      *(byte *)(param_1 + 0x9d) = bVar5 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
    }
  }
LAB_14100b3fa:
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
LAB_14100b417:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100b438 FUN_14100b438 body=311 status=ok
// SIG undefined FUN_14100b438(void)

ulonglong FUN_14100b438(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
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
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_24 = (uint)uVar3;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if ((uVar5 == local_28) && (uVar2 == local_24)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if (((uVar2 == 0) ||
           ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
            (lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0))))
          || ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    uVar3 = FUN_144729dda(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14100b570 FUN_14100b570 body=1492 status=ok
// SIG undefined FUN_14100b570(void)

void FUN_14100b570(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_2d8 [40];
  ulonglong local_2b0 [2];
  undefined1 local_2a0 [12];
  undefined1 local_294 [12];
  undefined8 local_288;
  ulonglong local_280;
  int local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  longlong local_260;
  undefined8 *local_250;
  undefined8 *local_248;
  ulonglong *local_240;
  char local_238;
  undefined8 local_230 [64];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_14082167c();
  uVar5 = uStack_274;
  iVar4 = local_278;
  local_250 = local_230;
  local_238 = '\0';
  local_240 = &local_30;
  local_280 = 0;
  local_288 = *(undefined8 *)(param_1 + 0x80);
  bVar6 = *(byte *)(param_1 + 0x78);
  local_278 = (int)local_288;
  iVar1 = local_278;
  uStack_274 = (undefined4)((ulonglong)local_288 >> 0x20);
  uVar2 = uStack_274;
  local_248 = local_250;
  if ((bVar6 & 0xfd) == 0) {
    FUN_1401533ba(local_294,&local_278,1);
    FUN_1448075d0(&local_278,local_294);
    lVar7 = FUN_14060eaf6(&local_278);
    if (local_260 != 0) {
      FUN_1400020a8();
    }
    uVar3 = local_280;
    if (lVar7 != 0) {
      if ((*(ulonglong *)(lVar7 + 0x4d8) == 0 & *(byte *)(lVar7 + 0x750)) == 1) {
        local_270 = DAT_14cb88800;
        local_278 = (int)DAT_14cb887f8;
        uStack_274 = (undefined4)((ulonglong)DAT_14cb887f8 >> 0x20);
      }
      else {
        local_2b0[0] = *(ulonglong *)(lVar7 + 0x4d8);
        FUN_1401533ba(&local_278,local_2b0,1);
      }
      uVar3 = CONCAT44(local_270,uStack_274);
      if ((CONCAT44(local_270,uStack_274) == DAT_14c948034) &&
         (uVar3 = DAT_14c948034, local_278 != DAT_14c948030)) {
        FUN_14011791e(local_2b0,local_278,local_270);
        uVar3 = local_2b0[0];
      }
    }
    local_280 = uVar3;
    bVar6 = *(byte *)(param_1 + 0x78);
    iVar4 = local_278;
    uVar5 = uStack_274;
  }
  uStack_274 = uVar5;
  local_278 = iVar4;
  if (bVar6 == 1) {
    if (((*(longlong *)(param_2 + 0x18) == 0) ||
        (lVar7 = FUN_1406b1d14(*(longlong *)(param_2 + 0x18),param_1 + 0x98), lVar7 == 0)) ||
       (FUN_14100bb46(lVar7,&local_278), local_278 == 0)) goto LAB_14100b69f;
    piVar8 = &local_278;
    FUN_14100bb46(lVar7,piVar8);
LAB_14100b63c:
    FUN_1406421aa(piVar8,&local_250,1);
    if (local_240 <= (ulonglong *)((longlong)local_248 + 4)) {
LAB_14100b9fc:
      FUN_145753a78(&local_250,4);
    }
  }
  else {
    if (bVar6 == 0) {
      if (local_240 <= (ulonglong *)((longlong)local_248 + 9)) {
        FUN_145753a78(&local_250,9);
      }
      *local_248 = 0x736e6f697373696d;
      *(undefined1 *)(local_248 + 1) = 0x2e;
      local_248 = (undefined8 *)((longlong)local_248 + 9);
      FUN_14014edce(&local_280,&local_250);
      if (local_240 <= (ulonglong *)((longlong)local_248 + 1)) {
        FUN_145753a78(&local_250,1);
      }
      *(undefined1 *)local_248 = 0x2e;
      local_248 = (undefined8 *)((longlong)local_248 + 1);
      FUN_14014edce(&local_288,&local_250);
      if (local_240 <= (ulonglong *)((longlong)local_248 + 1)) {
        FUN_145753a78(&local_250,1);
      }
      *(undefined1 *)local_248 = 0x2e;
      local_248 = (undefined8 *)((longlong)local_248 + 1);
      piVar8 = (int *)&DAT_14cb88978;
      goto LAB_14100b63c;
    }
    if (bVar6 != 2) goto LAB_14100b69f;
    local_278 = iVar1;
    uStack_274 = uVar2;
    FUN_1401533ba(local_2a0,&local_278,1);
    FUN_1448075d0(&local_278,local_2a0);
    lVar7 = FUN_14060eaf6(&local_278);
    if (local_260 != 0) {
      FUN_1400020a8();
    }
    if (lVar7 == 0) goto LAB_14100b69f;
    local_270 = *(undefined4 *)(param_1 + 0xac);
    local_278 = (int)*(undefined8 *)(param_1 + 0xa4);
    uStack_274 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xa4) >> 0x20);
    lVar7 = FUN_1406b1d14(lVar7);
    if (lVar7 == 0) goto LAB_14100b69f;
    FUN_14100bb46(lVar7,local_2b0);
    if ((int)local_2b0[0] == 0) goto LAB_14100b69f;
    if (local_240 <= (ulonglong *)((longlong)local_248 + 9)) {
      FUN_145753a78(&local_250,9);
    }
    *local_248 = 0x736e6f697373696d;
    *(undefined1 *)(local_248 + 1) = 0x2e;
    local_248 = (undefined8 *)((longlong)local_248 + 9);
    FUN_14014edce(&local_280,&local_250);
    if (local_240 <= (ulonglong *)((longlong)local_248 + 1)) {
      FUN_145753a78(&local_250,1);
    }
    *(undefined1 *)local_248 = 0x2e;
    local_248 = (undefined8 *)((longlong)local_248 + 1);
    FUN_14014edce(&local_288,&local_250);
    if (local_240 <= (ulonglong *)((longlong)local_248 + 7)) {
      FUN_145753a78(&local_250,7);
    }
    *(undefined4 *)((longlong)local_248 + 3) = 0x2e6c616e;
    *(undefined4 *)local_248 = 0x6e69662e;
    local_248 = (undefined8 *)((longlong)local_248 + 7);
    FUN_14100bb46(lVar7,local_2b0);
    FUN_1406421aa(local_2b0,&local_250,1);
    if (local_240 <= (ulonglong *)((longlong)local_248 + 4)) goto LAB_14100b9fc;
  }
  *(undefined4 *)local_248 = 0x203d3d20;
  local_248 = (undefined8 *)((longlong)local_248 + 4);
  FUN_14014edce(&DAT_14cb88920,&local_250);
  if (local_240 <= (ulonglong *)((longlong)local_248 + 1)) {
    FUN_145753a78(&local_250,1);
  }
  *(undefined1 *)local_248 = 0;
  local_248 = (undefined8 *)((longlong)local_248 + 1);
LAB_14100b69f:
  if ((int)local_248 != (int)local_250) {
    FUN_140822110(&local_278,&local_250,0);
    FUN_140822770(param_2 + 0x2c0,&local_278,1);
    FUN_1447cd778(CONCAT44(uStack_274,local_278),local_270);
    if (CONCAT44(uStack_274,local_278) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_238 == '\x01') {
    FUN_1400020a8(local_250);
  }
  if ((local_30 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100bb46 FUN_14100bb46 body=121 status=ok
// SIG undefined FUN_14100bb46(void)

undefined8 * FUN_14100bb46(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x409) == '\0') {
    plVar3 = (longlong *)FUN_1401bd7a2(param_1);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
      if (cVar1 != '\0') goto LAB_14100bb5b;
    }
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
LAB_14100bb5b:
    if (*(char *)(param_1 + 0x40b) == '\x01') {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x418);
      uVar2 = *(undefined8 *)(param_1 + 0x410);
    }
    else {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x388);
      uVar2 = *(undefined8 *)(param_1 + 0x380);
    }
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14100bbc0 FUN_14100bbc0 body=101 status=ok
// SIG undefined FUN_14100bbc0(void)

void FUN_14100bbc0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(char *)(param_1 + 0xd1) == '\x01')) {
    FUN_14100bc26(*param_2,*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0xd1) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014100bc21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14100bc26 FUN_14100bc26 body=55 status=ok
// SIG undefined FUN_14100bc26(void)

void FUN_14100bc26(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)(param_1 + 0x128);
  if (0 < (longlong)iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x120);
    uVar2 = 0;
    do {
      if (*plVar3 == param_2) {
        FUN_14100bc5e((undefined8 *)(param_1 + 0x120),uVar2 & 0xffffffff,
                      CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        return;
      }
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 0x18;
    } while ((longlong)iVar1 != uVar2);
  }
  return;
}



// FUNCTION 14100bc5e FUN_14100bc5e body=284 status=ok
// SIG undefined FUN_14100bc5e(void)

void FUN_14100bc5e(longlong *param_1,uint param_2,char param_3)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0xc0);
  plVar1 = *(longlong **)(*param_1 + 0xb0 + (longlong)(int)param_2 * 0xc0);
  if (plVar1 == (longlong *)0x0) goto LAB_14100bc90;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14100bd12;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_14100bd12:
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
LAB_14100bc90:
  if (*(longlong *)((longlong)_Dst + 0x98) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xc0),(longlong)(int)(~param_2 + iVar2) * 0xc0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  if (param_3 == '\x01') {
    FUN_14100bd7a(param_1);
    return;
  }
  return;
}



// FUNCTION 14100bd7a FUN_14100bd7a body=159 status=ok
// SIG undefined FUN_14100bd7a(void)

void FUN_14100bd7a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc0)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc0,0x10);
      uVar3 = uVar3 / 0xc0;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc0,0x10);
    }
  }
  return;
}



// FUNCTION 14100be1a FUN_14100be1a body=782 status=ok
// SIG undefined FUN_14100be1a(void)

void FUN_14100be1a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = 0;
    local_88 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = &local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14100c12a(puVar6,local_68);
  *param_3 = uVar4;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar5 = (undefined8 ****)local_58[0];
    if (local_40 < 0x19) {
      ppppuVar5 = local_58;
    }
    (*pcVar3)(ppppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14100c12a FUN_14100c12a body=230 status=ok
// SIG undefined FUN_14100c12a(void)

undefined4 FUN_14100c12a(undefined8 param_1)

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
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
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



// FUNCTION 14100c211 FUN_14100c211 body=627 status=ok
// SIG undefined FUN_14100c211(void)

void FUN_14100c211(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)*param_1;
  FUN_1406ed334(plVar2,param_1);
  *plVar2 = (longlong)&PTR_FUN_14a4bea20;
  FUN_14100c486(plVar2 + 0x1f);
  local_58 = 2;
  uStack_50 = 2;
  (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_58);
  local_58 = 0xd2704c107b5ae74c;
  uStack_50 = 0xb212a5aa9585798;
  iVar5 = FUN_1448a256a(plVar2,&local_58);
  if (iVar5 < 4) {
    cVar4 = '\0';
  }
  else {
    local_68 = 0xd2704c107b5ae74c;
    uStack_60 = 0xb212a5aa9585798;
    iVar5 = FUN_1448a256a(plVar2);
    cVar4 = '\x02' - (iVar5 < 6);
  }
  *(undefined1 *)(plVar2 + 0xb) = 1;
  *(char *)((longlong)plVar2 + 0x59) = cVar4;
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a492060;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 2;
  plVar6[10] = 0;
  *(undefined4 *)((longlong)plVar6 + 0x5c) = 1;
  if (DAT_14cab5328 == 0) {
    uVar7 = FUN_140d2a6db();
    DAT_14cab5328 = FUN_140002ddd(FUN_1463464b0,uVar7,L"MovieSceneParticleChannel");
  }
  lVar3 = *(longlong *)(DAT_14cab5328 + 0x18);
  *(undefined4 *)(plVar6 + 0xb) = 1;
  plVar6[7] = lVar3;
  plVar6[8] = 0;
  plVar6[9] = 0;
  *(undefined4 *)(plVar6 + 9) = 1;
  FUN_140aec898(plVar6 + 8,0);
  *(longlong **)plVar6[8] = plVar2 + 0x1f;
  local_78 = plVar6 + 2;
  local_70 = plVar6;
  FUN_140aec6f8(&local_78,plVar6 + 2);
  plVar6 = local_70;
  if (local_70 == (longlong *)0x0) {
    plVar2[0x1c] = (longlong)local_78;
    plVar8 = (longlong *)plVar2[0x1d];
    if (plVar8 == (longlong *)0x0) goto LAB_14100c394;
    plVar2[0x1d] = 0;
LAB_14100c41a:
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_14100c394;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    plVar2[0x1c] = (longlong)local_78;
    plVar8 = (longlong *)plVar2[0x1d];
    if (local_70 != plVar8) {
      plVar2[0x1d] = (longlong)local_70;
      if (plVar8 == (longlong *)0x0) goto LAB_14100c394;
      goto LAB_14100c41a;
    }
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_14100c394;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_14100c394:
  plVar2 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100c486 FUN_14100c486 body=240 status=ok
// SIG undefined FUN_14100c486(void)

undefined8 * FUN_14100c486(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *(undefined2 *)(param_1 + 10) = 0x404;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  memset(param_1 + 0xe,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *param_1 = &PTR_FUN_14a4c7fa0;
  if (DAT_14cab5310 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab5310 = FUN_14171c317(FUN_146348df6,uVar2,L"EParticleKey");
  }
  lVar1 = DAT_14cab5310;
  if ((DAT_14cab5310 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cab5310);
  }
  param_1[0x10] = lVar1;
  return param_1;
}



// FUNCTION 14100c576 FUN_14100c576 body=107 status=ok
// SIG undefined FUN_14100c576(void)

void FUN_14100c576(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14100c5e2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14100c5e2 FUN_14100c5e2 body=353 status=ok
// SIG undefined FUN_14100c5e2(void)

void FUN_14100c5e2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14100c667;
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
LAB_14100c667:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14100c744 FUN_14100c744 body=56 status=ok
// SIG undefined FUN_14100c744(void)

void FUN_14100c744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35c200;
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14100c782 FUN_14100c782 body=597 status=ok
// SIG undefined FUN_14100c782(void)

void FUN_14100c782(longlong *param_1,longlong param_2)

{
  ulonglong **ppuVar1;
  longlong lVar2;
  ulonglong *puVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  ulonglong *local_b0;
  uint local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98 [2];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  char local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *param_1;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = '\0';
  local_6c = 0;
  local_68 = L"WaterInstanceDataBuffers";
  local_60 = 0;
  uStack_58 = 0;
  uVar7 = (int)param_1[1] * 0x10 + 0xfffU & 0xfffff000;
  lVar6 = 0;
  bVar8 = true;
  local_b8 = lVar2;
  do {
    if (local_70 == '\x01') {
      local_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x100000;
    }
    else {
      uStack_a0 = 0;
      uStack_9c = 0x4002;
      local_a4 = uVar7;
      if (uVar7 == 0) {
        FUN_14570b4be(param_2,local_98,0x4002,0);
      }
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_c8 = 0x78;
      local_c0 = local_98;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2);
      *(undefined4 *)(local_b0 + 3) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_c8 = 0x78;
      local_c0 = local_98;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2);
      *(undefined4 *)(local_b0 + 3) = 0x78;
    }
    ppuVar1 = (ulonglong **)(local_b8 + lVar6 * 8);
    if (ppuVar1 == &local_b0) {
LAB_14100c9a8:
      if (local_b0 != (ulonglong *)0x0) {
        LOCK();
        puVar3 = local_b0 + 1;
        uVar5 = *puVar3;
        *(uint *)puVar3 = (uint)*puVar3 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    else {
      puVar3 = *ppuVar1;
      *ppuVar1 = local_b0;
      local_b0 = (ulonglong *)0x0;
      if (puVar3 != (ulonglong *)0x0) {
        LOCK();
        puVar3 = puVar3 + 1;
        uVar5 = *puVar3;
        *(uint *)puVar3 = (uint)*puVar3 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        goto LAB_14100c9a8;
      }
    }
    *(undefined8 *)(lVar2 + 0x10 + lVar6 * 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x18 + lVar6 * 0x10) = 0;
    lVar6 = 1;
    bVar4 = !bVar8;
    bVar8 = false;
    if (bVar4) {
      if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14100c9d8 FUN_14100c9d8 body=370 status=ok
// SIG undefined FUN_14100c9d8(void)

undefined8 * FUN_14100c9d8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14100cb58 FUN_14100cb58 body=769 status=ok
// SIG undefined FUN_14100cb58(void)

void FUN_14100cb58(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_40 = 0;
  local_38 = 0xb;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_14170fd90;
      local_80 = 0x8000000000000000;
      local_88 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  local_68 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_60 = uStack_20;
  uVar4 = FUN_14100ce5a(&local_68,&local_58);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100ce5a FUN_14100ce5a body=321 status=ok
// SIG undefined FUN_14100ce5a(void)

undefined4 FUN_14100ce5a(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            lVar2 = FUN_14008e0ae(&local_58);
            uVar5 = *(undefined4 *)(lVar2 + 200);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100cf9c FUN_14100cf9c body=425 status=ok
// SIG undefined FUN_14100cf9c(void)

void FUN_14100cf9c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14100d146(local_20);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100d146 FUN_14100d146 body=750 status=ok
// SIG undefined FUN_14100d146(void)

undefined8 FUN_14100d146(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      pcVar2 = *(code **)(*param_1 + 0x5e8);
      if (pcVar2 == FUN_140972dde) {
        if (param_1[0x76] == 0) {
          pcVar2 = *(code **)(*param_1 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
              if ((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                   (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
                  ((int)uVar1 < DAT_14c9647dc)) &&
                 (((plVar6 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar6 != (longlong *)0x0 &&
                   ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x75b4))) &&
                  ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
                if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
                  lVar5 = *plVar6;
                }
                else {
                  lVar5 = 0;
                }
                lVar5 = lVar5 + 0x110;
                goto LAB_14100d2ee;
              }
            }
            else {
              lVar5 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_14100d2ee:
              if (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar5 + 0x20);
                goto LAB_14100d2fb;
              }
            }
          }
          else {
            lVar5 = (*pcVar2)(param_1);
LAB_14100d2fb:
            if (lVar5 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x3b0);
              goto LAB_14100d30b;
            }
          }
          goto LAB_14100d23f;
        }
      }
      else {
        lVar5 = (*pcVar2)(param_1);
LAB_14100d30b:
        uVar4 = 1;
        if (lVar5 != 0) goto LAB_14100d2bb;
LAB_14100d23f:
        if (*(code **)(*param_1 + 0x5f8) == FUN_144784df4) {
          if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
                (uVar1 = *(uint *)(param_1 + 0xeb6), (int)uVar1 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar1 ||
                (((plVar6 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                  plVar6 == (longlong *)0x0 ||
                  ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x75b4))) ||
                 ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))))) goto LAB_14100d2b9;
            if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
              lVar5 = *plVar6;
            }
            else {
              lVar5 = 0;
            }
            lVar5 = lVar5 + 0x110;
          }
          else {
            lVar5 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
          }
          if (lVar5 == 0) goto LAB_14100d2b9;
          lVar5 = *(longlong *)(lVar5 + 0x20);
        }
        else {
          lVar5 = (**(code **)(*param_1 + 0x5f8))(param_1);
        }
        if ((lVar5 == 0) || (cVar3 = FUN_1449ce97a(lVar5), cVar3 == '\0')) goto LAB_14100d2b9;
      }
      uVar4 = 1;
      goto LAB_14100d2bb;
    }
  }
LAB_14100d2b9:
  uVar4 = 0;
LAB_14100d2bb:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14100d436 FUN_14100d436 body=40 status=ok
// SIG undefined FUN_14100d436(void)

undefined8 FUN_14100d436(undefined8 param_1,int param_2)

{
  FUN_14100d45e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14100d45e FUN_14100d45e body=106 status=ok
// SIG undefined FUN_14100d45e(void)

void FUN_14100d45e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b83bb50;
  param_1[6] = &PTR_FUN_14b83be10;
  param_1[7] = &PTR_LAB_14b83bea0;
  param_1[9] = &PTR_FUN_14b83bef0;
  FUN_140bf96d8(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14100d4d0 FUN_14100d4d0 body=453 status=ok
// SIG undefined FUN_14100d4d0(void)

undefined8 * FUN_14100d4d0(undefined8 *param_1)

{
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [16];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140fbcba4();
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *param_1 = &PTR_FUN_14b534d70;
  local_58 = L"OFF";
  local_50 = 3;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"GameSettingValueDiscreteDynamic";
  local_50 = 0x1f;
  FUN_1446e940c(local_70,&local_58);
  local_58 = L"OFF";
  local_50 = 3;
  FUN_140208c1e(local_68,local_70,local_6c,&local_58);
  FUN_140056680(local_80,L"false");
  FUN_14100d696(param_1,local_80,local_68);
  local_58 = L"ON";
  local_50 = 2;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"GameSettingValueDiscreteDynamic";
  local_50 = 0x1f;
  FUN_1446e940c(local_70,&local_58);
  local_58 = L"ON";
  local_50 = 2;
  FUN_140208c1e(local_90,local_70,local_6c,&local_58);
  FUN_140056680(local_a0,&DAT_149e06346);
  FUN_14100d696(param_1,local_a0,local_90);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14100d696 FUN_14100d696 body=301 status=ok
// SIG undefined FUN_14100d696(void)

void FUN_14100d696(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x178),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x178);
  lVar5 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar5);
  *(undefined8 *)(lVar3 + lVar5) = 0;
  iVar2 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar2 + 1U) {
    FUN_14001d63e((longlong *)(param_1 + 0x188),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x188);
  plVar4 = (longlong *)*param_3;
  *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = (int)param_3[1];
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014100d784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_3 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14100d7c4 FUN_14100d7c4 body=544 status=ok
// SIG undefined FUN_14100d7c4(void)

void FUN_14100d7c4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined5 local_54;
  undefined3 uStack_4f;
  undefined5 uStack_4c;
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 uStack_28;
  undefined1 local_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
    local_c0 = &local_b8;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = param_2 + 0x38;
    local_d8 = &local_d0;
    local_e0 = &local_60;
    local_60 = 0;
    local_58 = 0;
    local_1f = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_54 = 0;
    uStack_4f = 0;
    uStack_4c = 0;
    local_70 = 0;
    local_68 = 0;
    local_e8 = 0;
    local_d0 = param_2 + 0x20;
    FUN_140035312(lVar1,param_1 + 10,&local_70,0);
    lVar1 = param_1[0x1f];
    if ((lVar1 != 0) && ((char)param_1[0x20] == '\x01')) {
      FUN_14100da04(lVar1 + 0x8a8,lVar1,param_2 + 0x20,param_1 + 0x13);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_144716785(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_144716758(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_108);
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_108);
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_108,*(undefined8 *)(param_2 + 0x30));
}



// FUNCTION 14100da04 FUN_14100da04 body=10897 status=ok
// SIG undefined FUN_14100da04(void)

/* WARNING: Removing unreachable block (ram,0x00014101017d) */
/* WARNING: Removing unreachable block (ram,0x0001410100fb) */
/* WARNING: Removing unreachable block (ram,0x00014101015d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14100da04(longlong param_1,double *param_2,longlong *param_3,longlong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  int *piVar6;
  double *pdVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double *pdVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  double dVar32;
  double dVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar39;
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar60;
  undefined1 auVar61 [16];
  float fVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8 [2];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
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
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
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
  double local_178 [4];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if ((-1 < *(int *)(param_1 + 8)) && (lVar18 = (longlong)*(int *)(param_1 + 0xc), lVar18 != -1)) {
    dVar60 = param_2[0xd4];
    pdVar7 = (double *)&DAT_14c846480;
    pdVar11 = local_2f8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pdVar11 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar11 = pdVar11 + 1;
    }
    lVar5 = *(longlong *)((longlong)dVar60 + 0x90);
    iVar4 = *(int *)(lVar5 + lVar18 * 4);
    local_3c0 = param_1;
    local_3b0 = param_4;
    if (iVar4 != -1) {
      do {
        lVar17 = *param_3;
        lVar14 = (longlong)iVar4 * 0x60;
        pdVar7 = (double *)(lVar17 + lVar14);
        auVar53 = *(undefined1 (*) [16])(lVar17 + 0x40 + lVar14);
        dVar38 = auVar53._0_8_;
        dVar57 = auVar53._8_8_;
        auVar34 = *(undefined1 (*) [16])(lVar17 + 0x50 + lVar14);
        dVar51 = auVar34._0_8_;
        dVar50 = auVar34._8_8_;
        dVar39 = local_2b8._0_8_;
        dVar52 = local_2b8._8_8_;
        auVar53 = minpd(local_2b8,auVar53);
        dVar58 = local_2a8._0_8_;
        auVar61 = minpd(local_2a8,auVar34);
        auVar34._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
        auVar34._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
        uVar8 = movmskpd((int)lVar17,auVar34);
        param_2 = (double *)(ulonglong)uVar8;
        auVar53._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
        auVar53._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
        uVar12 = movmskpd((int)lVar14,auVar53);
        if ((uVar12 & 0x3fffffff) == 0 && uVar8 == 0) {
          dVar64 = *pdVar7;
          dVar70 = pdVar7[1];
          dVar67 = SUB168(*(undefined1 (*) [16])(pdVar7 + 2),0);
          dVar69 = SUB168(*(undefined1 (*) [16])(pdVar7 + 2),8);
          dVar68 = pdVar7[3];
          dVar59 = pdVar7[3];
          dVar40 = *pdVar7 * local_2f8[1];
          dVar72 = *pdVar7 * local_2f8[0];
          dVar75 = pdVar7[1];
          dVar56 = pdVar7[1];
          dVar76 = local_2f8[0] * dVar75;
          dVar71 = local_2f8[1] * dVar56;
          dVar63 = pdVar7[2];
          dVar66 = pdVar7[2];
          dVar32 = local_2f8[0] * dVar66;
          dVar66 = (double)local_2e8._0_8_ * dVar66;
          local_2f8[0] = local_2f8[1] * dVar63 * -1.0 +
                         (double)local_2e8._0_8_ * dVar75 +
                         (double)local_2e8._8_8_ * *pdVar7 * 1.0 + local_2f8[0] * dVar68;
          local_2f8[1] = dVar32 * 1.0 +
                         (double)local_2e8._8_8_ * dVar56 +
                         (double)local_2e8._0_8_ * *pdVar7 * -1.0 + local_2f8[1] * dVar59;
          local_2e8._0_8_ =
               (double)local_2e8._8_8_ * dVar63 * 1.0 +
               ((dVar40 * 1.0 + (double)local_2e8._0_8_ * dVar68) - dVar76);
          local_2e8._8_8_ =
               dVar66 * -1.0 + ((dVar72 * -1.0 + (double)local_2e8._8_8_ * dVar59) - dVar71);
          dVar72 = local_2d8 * dVar38;
          dVar76 = dStack_2d0 * dVar57;
          dVar75 = local_2c8 * dVar51;
          dVar56 = dStack_2c0 * dVar50;
          dVar63 = dVar76 * dVar64 - dVar70 * dVar72;
          dVar40 = dVar75 * dVar70 - dVar67 * dVar76;
          dVar32 = dVar72 * dVar67 - dVar64 * dVar75;
          dVar66 = dVar56 * dVar69 - dVar69 * dVar56;
          dVar40 = dVar40 + dVar40;
          dVar32 = dVar32 + dVar32;
          dVar63 = dVar63 + dVar63;
          dVar66 = dVar66 + dVar66;
          auVar61._0_8_ = dVar39 * dVar38;
          auVar61._8_8_ = dVar52 * dVar57;
          auVar30._0_8_ = dVar58 * dVar51;
          auVar30._8_8_ = local_2a8._8_8_ * dVar50;
          local_2d8 = (dVar63 * dVar70 - dVar67 * dVar32) + dVar68 * dVar40 + dVar72 + pdVar7[4];
          dStack_2d0 = (dVar40 * dVar67 - dVar63 * dVar64) + dVar59 * dVar32 + dVar76 + pdVar7[5];
          local_2c8 = (dVar32 * dVar64 - dVar70 * dVar40) + dVar68 * dVar63 + dVar75 + pdVar7[6];
          dStack_2c0 = (dVar66 * dVar69 - dVar66 * dVar69) + dVar59 * dVar66 + dVar56 + pdVar7[7];
        }
        else {
          local_3f8._8_8_ = local_2a8._8_8_ * dVar50;
          local_3f8._0_8_ = dVar58 * dVar51;
          dVar68 = *pdVar7;
          dVar59 = pdVar7[1];
          dVar75 = pdVar7[2];
          dVar56 = dVar59 + dVar59;
          dVar66 = dVar75 + dVar75;
          dVar63 = dVar68 * (dVar68 + dVar68);
          local_1a8 = (1.0 - (dVar63 + dVar59 * dVar56)) * dVar51;
          dVar50 = pdVar7[3];
          dVar67 = dVar66 * dVar50;
          dVar69 = (dVar68 + dVar68) * pdVar7[3];
          dVar50 = dVar56 * dVar50;
          local_1b8 = (dVar50 + *pdVar7 * dVar66) * dVar51;
          dStack_1b0 = (dVar66 * dVar59 - dVar69) * dVar51;
          local_3e8 = dVar39 * dVar38;
          dStack_3e0 = dVar52 * dVar57;
          local_1f8 = (1.0 - (dVar75 * dVar66 + dVar59 * dVar56)) * dVar38;
          dStack_1f0 = (dVar56 * dVar68 + dVar67) * dVar38;
          local_1c8 = (dVar66 * dVar59 + dVar69) * dVar57;
          local_1e8 = (*pdVar7 * dVar66 - dVar50) * dVar38;
          uStack_1e0 = 0;
          local_1d8._8_8_ = (1.0 - (dVar75 * dVar66 + dVar63)) * dVar57;
          local_1d8._0_8_ = (dVar56 * dVar68 - dVar67) * dVar57;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar7[4];
          dStack_190 = pdVar7[5];
          local_188 = pdVar7[6];
          uStack_180 = 0x3ff0000000000000;
          dVar38 = local_2f8[1] + local_2f8[1];
          dVar51 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
          dVar50 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
          local_228 = (1.0 - (dVar50 + local_2f8[1] * dVar38)) * dVar58;
          dVar57 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
          local_258 = (dVar38 * local_2f8[0] - dVar51 * (double)local_2e8._8_8_) * dVar52;
          local_278 = (1.0 - ((double)local_2e8._0_8_ * dVar51 + local_2f8[1] * dVar38)) * dVar39;
          dStack_250 = (1.0 - ((double)local_2e8._0_8_ * dVar51 + dVar50)) * dVar52;
          dStack_270 = (dVar38 * local_2f8[0] + dVar51 * (double)local_2e8._8_8_) * dVar39;
          local_248 = (dVar51 * local_2f8[1] + dVar57) * dVar52;
          local_268 = (local_2f8[0] * dVar51 - dVar38 * (double)local_2e8._8_8_) * dVar39;
          uStack_260 = 0;
          uStack_240 = 0;
          local_238._8_8_ = (dVar51 * local_2f8[1] - dVar57) * dVar58;
          local_238._0_8_ = (dVar38 * (double)local_2e8._8_8_ + local_2f8[0] * dVar51) * dVar58;
          uStack_220 = 0;
          local_218 = local_2d8;
          dStack_210 = dStack_2d0;
          local_208 = local_2c8;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(local_178,&local_278,&local_1f8);
          auVar30 = local_3f8;
          local_3d8 = local_178[2];
          dVar51 = local_178[2] * local_178[2] +
                   local_178[0] * local_178[0] + local_178[1] * local_178[1];
          dVar38 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
          dVar50 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
          uVar20 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
          dVar51 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar51)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
          dVar57 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
          dVar38 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar50)) & uVar20)
          ;
          auVar61._8_8_ = dStack_3e0;
          auVar61._0_8_ = local_3e8;
          auVar21._8_8_ = -(ulonglong)(0.0 <= dStack_3e0);
          auVar21._0_8_ = -(ulonglong)(0.0 <= local_3e8);
          auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
          uVar20 = -(ulonglong)(0.0 <= local_3f8._0_8_);
          dVar50 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
          dVar39 = auVar53._0_8_;
          local_178[0] = local_178[0] * dVar51 * dVar39;
          local_178[1] = local_178[1] * dVar51 * dVar39;
          local_178[2] = dVar51 * local_178[2] * dVar39;
          dVar51 = auVar53._8_8_;
          local_148 = dVar57 * local_148 * dVar51;
          local_150 = local_150 * dVar57 * dVar51;
          local_158 = dVar51 * local_158 * dVar57;
          local_128 = dVar38 * local_128 * dVar50;
          local_130 = local_130 * dVar38 * dVar50;
          local_138 = dVar50 * local_138 * dVar38;
          param_2 = local_178;
          FUN_14481fd10(local_358);
          dVar38 = (double)local_348._0_8_ * (double)local_348._0_8_ +
                   (double)local_358._0_8_ * (double)local_358._0_8_;
          dVar51 = (double)local_348._8_8_ * (double)local_348._8_8_ +
                   (double)local_358._8_8_ * (double)local_358._8_8_;
          auVar33._0_8_ = dVar38 + dVar51;
          auVar33._8_8_ = dVar38 + dVar51;
          auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
          auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
          auVar53 = sqrtpd(auVar33,auVar33);
          auVar53 = divpd(_DAT_149934d80,auVar53);
          auVar41._0_8_ = auVar53._0_8_ * (double)local_348._0_8_;
          auVar41._8_8_ = auVar53._8_8_ * (double)local_348._8_8_;
          local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar22);
          local_2f8[0] = (double)((ulonglong)((double)local_358._0_8_ * auVar53._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
          local_2f8[1] = (double)((ulonglong)((double)local_358._8_8_ * auVar53._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
          dStack_2c0 = 0.0;
          lVar5 = *(longlong *)((longlong)dVar60 + 0x90);
          local_2c8 = local_108;
          local_2d8 = local_118;
          dStack_2d0 = dStack_110;
        }
        iVar4 = *(int *)(lVar5 + (longlong)iVar4 * 4);
        local_2b8 = auVar61;
        local_2a8 = auVar30;
      } while (iVar4 != -1);
    }
    lVar5 = *param_3;
    lVar18 = lVar18 * 0x60;
    pdVar7 = (double *)(lVar5 + lVar18);
    local_328 = 0.0;
    dStack_320 = 0.0;
    local_338 = 0.0;
    dStack_330 = 0.0;
    auVar53 = *(undefined1 (*) [16])(lVar5 + 0x40 + lVar18);
    local_3f8 = *(undefined1 (*) [16])(lVar5 + 0x50 + lVar18);
    auVar34 = minpd(auVar53,local_2b8);
    auVar61 = minpd(local_3f8,local_2a8);
    auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    iVar4 = movmskpd((int)lVar5,auVar35);
    auVar42._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
    uVar8 = movmskpd((int)param_2,auVar42);
    dVar57 = local_2a8._0_8_;
    dVar50 = local_2a8._8_8_;
    dVar51 = local_2b8._8_8_;
    dVar38 = local_2b8._0_8_;
    if ((uVar8 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar39 = *pdVar7;
      dVar52 = pdVar7[1];
      dVar58 = pdVar7[2];
      dVar68 = pdVar7[3];
      dVar59 = pdVar7[4] * dVar38;
      dVar75 = pdVar7[5] * dVar51;
      dVar56 = pdVar7[6] * dVar57;
      dVar63 = pdVar7[7] * dVar50;
      local_358._8_8_ =
           dVar39 * (double)local_2e8._0_8_ * 1.0 +
           dVar68 * local_2f8[1] + dVar58 * local_2f8[0] * -1.0 + dVar52 * (double)local_2e8._8_8_;
      local_358._0_8_ =
           dVar52 * (double)local_2e8._0_8_ * -1.0 +
           dVar58 * local_2f8[1] + dVar68 * local_2f8[0] * 1.0 + dVar39 * (double)local_2e8._8_8_;
      local_348._8_8_ =
           dVar58 * (double)local_2e8._0_8_ * -1.0 +
           ((local_2f8[0] * dVar39 * -1.0 + dVar68 * (double)local_2e8._8_8_) -
           dVar52 * local_2f8[1]);
      local_348._0_8_ =
           dVar68 * (double)local_2e8._0_8_ * 1.0 +
           ((local_2f8[0] * dVar52 * 1.0 + dVar58 * (double)local_2e8._8_8_) - dVar39 * local_2f8[1]
           );
      dVar39 = dVar75 * local_2f8[0] - local_2f8[1] * dVar59;
      dVar67 = dVar56 * local_2f8[1] - (double)local_2e8._0_8_ * dVar75;
      dVar66 = dVar59 * (double)local_2e8._0_8_ - local_2f8[0] * dVar56;
      dVar52 = dVar63 * (double)local_2e8._8_8_ - (double)local_2e8._8_8_ * dVar63;
      dVar67 = dVar67 + dVar67;
      dVar66 = dVar66 + dVar66;
      dVar39 = dVar39 + dVar39;
      dVar52 = dVar52 + dVar52;
      dVar58 = (dVar39 * local_2f8[1] - (double)local_2e8._0_8_ * dVar66) +
               (double)local_2e8._8_8_ * dVar67 + dVar59 + local_2d8;
      dVar68 = (dVar67 * (double)local_2e8._0_8_ - dVar39 * local_2f8[0]) +
               (double)local_2e8._8_8_ * dVar66 + dVar75 + dStack_2d0;
      dVar39 = (dVar66 * local_2f8[0] - local_2f8[1] * dVar67) +
               (double)local_2e8._8_8_ * dVar39 + dVar56 + local_2c8;
      dStack_320 = (dVar52 * (double)local_2e8._8_8_ - dVar52 * (double)local_2e8._8_8_) +
                   (double)local_2e8._8_8_ * dVar52 + dVar63 + dStack_2c0;
      local_3f8._8_8_ = (double)local_3f8._8_8_ * dVar50;
      local_3f8._0_8_ = (double)local_3f8._0_8_ * dVar57;
      local_318._8_8_ = auVar53._8_8_ * dVar51;
      local_318._0_8_ = auVar53._0_8_ * dVar38;
    }
    else {
      dVar75 = (double)local_3f8._0_8_ * dVar57;
      dVar50 = (double)local_3f8._8_8_ * dVar50;
      dVar39 = local_2f8[1] + local_2f8[1];
      dVar52 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
      dVar68 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
      local_1a8 = (1.0 - (dVar68 + local_2f8[1] * dVar39)) * dVar57;
      dVar58 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
      local_1b8 = (dVar39 * (double)local_2e8._8_8_ + local_2f8[0] * dVar52) * dVar57;
      local_3e8 = auVar53._0_8_ * dVar38;
      dStack_3e0 = auVar53._8_8_ * dVar51;
      dStack_1b0 = (dVar52 * local_2f8[1] - dVar58) * dVar57;
      local_1f8 = (1.0 - ((double)local_2e8._0_8_ * dVar52 + local_2f8[1] * dVar39)) * dVar38;
      dStack_1f0 = (dVar39 * local_2f8[0] + dVar52 * (double)local_2e8._8_8_) * dVar38;
      local_1c8 = (dVar52 * local_2f8[1] + dVar58) * dVar51;
      local_1e8 = (local_2f8[0] * dVar52 - dVar39 * (double)local_2e8._8_8_) * dVar38;
      uStack_1e0 = 0;
      local_1d8._8_8_ = (1.0 - ((double)local_2e8._0_8_ * dVar52 + dVar68)) * dVar51;
      local_1d8._0_8_ = (dVar39 * local_2f8[0] - dVar52 * (double)local_2e8._8_8_) * dVar51;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = local_2d8;
      dStack_190 = dStack_2d0;
      local_188 = local_2c8;
      uStack_180 = 0x3ff0000000000000;
      dVar51 = *pdVar7;
      dVar57 = pdVar7[1];
      dVar38 = pdVar7[2];
      local_268 = pdVar7[8];
      local_258 = pdVar7[9];
      dVar39 = pdVar7[10];
      dVar59 = dVar57 + dVar57;
      dVar52 = dVar38 + dVar38;
      dVar58 = dVar51 * (dVar51 + dVar51);
      local_278 = (1.0 - (dVar38 * dVar52 + dVar57 * dVar59)) * local_268;
      dStack_250 = (1.0 - (dVar38 * dVar52 + dVar58)) * local_258;
      local_228 = (1.0 - (dVar58 + dVar57 * dVar59)) * dVar39;
      dVar38 = pdVar7[3];
      dVar58 = dVar52 * dVar38;
      dVar68 = (dVar51 + dVar51) * pdVar7[3];
      dVar38 = dVar59 * dVar38;
      dStack_270 = (dVar59 * dVar51 + dVar58) * local_268;
      local_248 = (dVar52 * dVar57 + dVar68) * local_258;
      local_268 = (*pdVar7 * dVar52 - dVar38) * local_268;
      local_258 = (dVar59 * dVar51 - dVar58) * local_258;
      uStack_260 = 0;
      uStack_240 = 0;
      local_238._8_8_ = (dVar52 * dVar57 - dVar68) * dVar39;
      local_238._0_8_ = (dVar38 + *pdVar7 * dVar52) * dVar39;
      uStack_220 = 0;
      local_218 = pdVar7[4];
      dStack_210 = pdVar7[5];
      local_208 = pdVar7[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      dVar38 = local_178[2] * local_178[2] +
               local_178[0] * local_178[0] + local_178[1] * local_178[1];
      local_3d8 = local_148;
      dVar51 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      local_3c8 = local_128;
      dVar57 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar20 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
      dVar38 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar20);
      uVar20 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
      dVar51 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar51)) & uVar20);
      uVar20 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
      dVar57 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar57)) & uVar20);
      auVar3._8_8_ = dStack_3e0;
      auVar3._0_8_ = local_3e8;
      auVar23._8_8_ = -(ulonglong)(0.0 <= dStack_3e0);
      auVar23._0_8_ = -(ulonglong)(0.0 <= local_3e8);
      auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
      local_3f8._8_8_ = dVar50;
      local_3f8._0_8_ = dVar75;
      uVar20 = -(ulonglong)(0.0 <= dVar75);
      dVar50 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar39 = auVar53._0_8_;
      local_178[0] = local_178[0] * dVar38 * dVar39;
      local_178[1] = local_178[1] * dVar38 * dVar39;
      local_178[2] = dVar38 * local_178[2] * dVar39;
      dVar38 = auVar53._8_8_;
      local_148 = dVar51 * local_148 * dVar38;
      local_150 = local_150 * dVar51 * dVar38;
      local_158 = dVar38 * local_158 * dVar51;
      local_128 = dVar57 * local_128 * dVar50;
      local_130 = local_130 * dVar57 * dVar50;
      local_138 = dVar50 * local_138 * dVar57;
      FUN_14481fd10(&local_298,local_178);
      dVar38 = local_288 * local_288 + local_298 * local_298;
      dVar51 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar43._0_8_ = dVar38 + dVar51;
      auVar43._8_8_ = dVar38 + dVar51;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
      auVar53 = sqrtpd(auVar43,auVar43);
      auVar53 = divpd(_DAT_149934d80,auVar53);
      auVar54._0_8_ = auVar53._0_8_ * local_288;
      auVar54._8_8_ = auVar53._8_8_ * dStack_280;
      local_358._0_8_ =
           (ulonglong)(local_298 * auVar53._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
      local_358._8_8_ =
           (ulonglong)(dStack_290 * auVar53._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
      local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar24);
      dStack_320 = 0.0;
      dVar58 = local_118;
      dVar68 = dStack_110;
      dVar39 = local_108;
      local_318 = auVar3;
    }
    local_308 = local_3f8;
    local_368 = 0;
    uStack_360 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_388 = 0;
    uStack_380 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    iVar4 = *(int *)(local_3c0 + 0x18);
    local_338 = dVar58;
    dStack_330 = dVar68;
    local_328 = dVar39;
    if (0 < iVar4) {
      lVar17 = 0;
      lVar5 = local_3c0;
      local_3b8 = lVar18;
      do {
        uVar20 = uStack_3a0;
        lVar18 = *(longlong *)(lVar5 + 0x10) + lVar17 * 0x14;
        uVar8 = *(uint *)(lVar18 + 8);
        if ((int)uVar8 < 0) {
          if ((((~uVar8 & 0x7fffffff) != 0) && (uVar8 = (int)(uVar8 * 2) >> 1, -1 < (int)uVar8)) &&
             ((int)uVar8 < *(int *)((longlong)dVar60 + 0x88))) {
            piVar6 = (int *)((ulonglong)uVar8 * 4 + *(longlong *)((longlong)dVar60 + 0x80));
            goto LAB_14100ebae;
          }
        }
        else {
          piVar6 = (int *)(lVar18 + 0xc);
LAB_14100ebae:
          iVar13 = *piVar6;
          if (iVar13 != -1) {
            lVar5 = (longlong)(int)uStack_3a0;
            uVar8 = (int)uStack_3a0 + 1;
            uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar8);
            if (uStack_3a0._4_4_ < uVar8) {
              FUN_1408f8cfa(&local_3a8,uVar20 & 0xffffffff);
            }
            uVar20 = uStack_390;
            *(int *)(local_3a8 + lVar5 * 4) = iVar13;
            lVar5 = (longlong)(int)uStack_390;
            uVar8 = (int)uStack_390 + 1;
            uStack_390 = CONCAT44(uStack_390._4_4_,uVar8);
            if (uStack_390._4_4_ < uVar8) {
              FUN_144a2c682(&local_398,uVar20 & 0xffffffff);
            }
            puVar9 = &DAT_14c846480;
            puVar10 = (undefined8 *)(lVar5 * 0x60 + local_398);
            for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            lVar5 = (longlong)*(int *)(local_3a8 + lVar17 * 4);
            iVar4 = *(int *)(*(longlong *)((longlong)dVar60 + 0x90) + lVar5 * 4);
            if (iVar4 != -1) {
              do {
                lVar14 = lVar17 * 0x60;
                pdVar7 = (double *)(local_398 + lVar14);
                lVar5 = *param_3;
                lVar15 = (longlong)iVar4 * 0x60;
                pdVar11 = (double *)(lVar5 + lVar15);
                auVar53 = *(undefined1 (*) [16])(lVar5 + 0x40 + lVar15);
                dVar38 = auVar53._0_8_;
                dVar57 = auVar53._8_8_;
                auVar34 = *(undefined1 (*) [16])(lVar5 + 0x50 + lVar15);
                dVar51 = auVar34._0_8_;
                local_3f8._8_8_ = auVar34._8_8_;
                auVar61 = *(undefined1 (*) [16])(local_398 + 0x40 + lVar14);
                auVar30 = *(undefined1 (*) [16])(local_398 + 0x50 + lVar14);
                auVar53 = minpd(auVar61,auVar53);
                auVar34 = minpd(auVar30,auVar34);
                auVar36._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
                auVar36._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
                iVar13 = movmskpd((int)lVar5,auVar36);
                auVar44._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
                auVar44._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
                uVar8 = movmskpd((int)lVar15,auVar44);
                if ((uVar8 & 0x3fffffff) == 0 && iVar13 == 0) {
                  dVar75 = *pdVar7;
                  dVar56 = pdVar7[1];
                  dVar63 = pdVar7[2];
                  dVar66 = pdVar7[3];
                  dVar67 = *pdVar11;
                  dVar69 = pdVar11[1];
                  dVar64 = pdVar11[2];
                  dVar70 = pdVar11[3];
                  dVar50 = pdVar11[3];
                  dVar39 = pdVar11[3];
                  dVar52 = pdVar11[1];
                  dVar58 = pdVar11[1];
                  dVar59 = pdVar11[2];
                  dVar68 = pdVar11[2];
                  dVar32 = dVar56 * dVar59 * -1.0 +
                           dVar63 * dVar52 + dVar66 * *pdVar11 * 1.0 + dVar75 * dVar50;
                  dVar40 = dVar75 * dVar68 * 1.0 +
                           dVar66 * dVar58 + dVar63 * *pdVar11 * -1.0 + dVar56 * dVar39;
                  auVar46._0_8_ =
                       dVar66 * dVar59 * 1.0 +
                       ((*pdVar11 * dVar56 * 1.0 + dVar63 * dVar50) - dVar75 * dVar52);
                  auVar46._8_8_ =
                       dVar63 * dVar68 * -1.0 +
                       ((*pdVar11 * dVar75 * -1.0 + dVar66 * dVar39) - dVar56 * dVar58);
                  dVar58 = pdVar7[4] * dVar38;
                  dVar68 = pdVar7[5] * dVar57;
                  dVar66 = pdVar7[6] * dVar51;
                  dVar72 = pdVar7[7] * (double)local_3f8._8_8_;
                  dVar56 = dVar68 * dVar67 - dVar69 * dVar58;
                  dVar63 = dVar66 * dVar69 - dVar64 * dVar68;
                  dVar59 = dVar58 * dVar64 - dVar67 * dVar66;
                  dVar75 = dVar72 * dVar70 - dVar70 * dVar72;
                  dVar63 = dVar63 + dVar63;
                  dVar59 = dVar59 + dVar59;
                  dVar56 = dVar56 + dVar56;
                  dVar75 = dVar75 + dVar75;
                  dVar38 = auVar61._0_8_ * dVar38;
                  dVar57 = auVar61._8_8_ * dVar57;
                  dVar51 = auVar30._0_8_ * dVar51;
                  dVar52 = auVar30._8_8_ * (double)local_3f8._8_8_;
                  dVar58 = (dVar56 * dVar69 - dVar64 * dVar59) + dVar50 * dVar63 + dVar58 +
                           pdVar11[4];
                  dVar68 = (dVar63 * dVar64 - dVar56 * dVar67) + dVar39 * dVar59 + dVar68 +
                           pdVar11[5];
                  dVar50 = (dVar59 * dVar67 - dVar69 * dVar63) + dVar50 * dVar56 + dVar66 +
                           pdVar11[6];
                  dVar39 = (dVar75 * dVar70 - dVar75 * dVar70) + dVar39 * dVar75 + dVar72 +
                           pdVar11[7];
                }
                else {
                  local_3e8 = auVar61._0_8_ * dVar38;
                  dStack_3e0 = auVar61._8_8_ * dVar57;
                  local_3f8._0_8_ = auVar30._0_8_ * dVar51;
                  local_3f8._8_8_ = auVar30._8_8_ * (double)local_3f8._8_8_;
                  dVar39 = *pdVar11;
                  dVar52 = pdVar11[1];
                  dVar58 = pdVar11[2];
                  dVar68 = dVar52 + dVar52;
                  dVar59 = dVar58 + dVar58;
                  dVar63 = dVar39 * (dVar39 + dVar39);
                  local_1f8 = (1.0 - (dVar58 * dVar59 + dVar52 * dVar68)) * dVar38;
                  local_1a8 = (1.0 - (dVar63 + dVar52 * dVar68)) * dVar51;
                  dVar50 = pdVar11[3];
                  dVar75 = dVar59 * dVar50;
                  dVar56 = (dVar39 + dVar39) * pdVar11[3];
                  dVar50 = dVar68 * dVar50;
                  dStack_1f0 = (dVar68 * dVar39 + dVar75) * dVar38;
                  local_1c8 = (dVar59 * dVar52 + dVar56) * dVar57;
                  local_1b8 = (dVar50 + *pdVar11 * dVar59) * dVar51;
                  dStack_1b0 = (dVar59 * dVar52 - dVar56) * dVar51;
                  local_1e8 = (*pdVar11 * dVar59 - dVar50) * dVar38;
                  uStack_1e0 = 0;
                  local_1d8._8_8_ = (1.0 - (dVar58 * dVar59 + dVar63)) * dVar57;
                  local_1d8._0_8_ = (dVar68 * dVar39 - dVar75) * dVar57;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = pdVar11[4];
                  dStack_190 = pdVar11[5];
                  local_188 = pdVar11[6];
                  uStack_180 = 0x3ff0000000000000;
                  dVar51 = *pdVar7;
                  dVar57 = pdVar7[1];
                  dVar38 = pdVar7[2];
                  local_268 = pdVar7[8];
                  local_258 = pdVar7[9];
                  dVar50 = pdVar7[10];
                  dVar68 = dVar57 + dVar57;
                  dVar39 = dVar38 + dVar38;
                  dVar52 = dVar51 * (dVar51 + dVar51);
                  local_278 = (1.0 - (dVar38 * dVar39 + dVar57 * dVar68)) * local_268;
                  dStack_250 = (1.0 - (dVar38 * dVar39 + dVar52)) * local_258;
                  local_228 = (1.0 - (dVar52 + dVar57 * dVar68)) * dVar50;
                  dVar38 = pdVar7[3];
                  dVar52 = dVar39 * dVar38;
                  dVar58 = (dVar51 + dVar51) * pdVar7[3];
                  dVar38 = dVar68 * dVar38;
                  dStack_270 = (dVar68 * dVar51 + dVar52) * local_268;
                  local_248 = (dVar39 * dVar57 + dVar58) * local_258;
                  local_268 = (*pdVar7 * dVar39 - dVar38) * local_268;
                  local_258 = (dVar68 * dVar51 - dVar52) * local_258;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  local_238._8_8_ = (dVar39 * dVar57 - dVar58) * dVar50;
                  local_238._0_8_ = (dVar38 + *pdVar7 * dVar39) * dVar50;
                  uStack_220 = 0;
                  local_218 = pdVar7[4];
                  dStack_210 = pdVar7[5];
                  local_208 = pdVar7[6];
                  uStack_200 = 0x3ff0000000000000;
                  FUN_1447fea8d(local_178,&local_278,&local_1f8);
                  dVar57 = dStack_3e0;
                  dVar38 = local_3e8;
                  dVar52 = (double)local_3f8._8_8_;
                  dVar51 = (double)local_3f8._0_8_;
                  auVar53 = _DAT_149934d80;
                  local_3d8 = local_178[2];
                  dVar39 = local_178[2] * local_178[2] +
                           local_178[0] * local_178[0] + local_178[1] * local_178[1];
                  dVar58 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                  dVar50 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                  uVar20 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
                  dVar39 = (double)(~uVar20 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar39)) & uVar20);
                  uVar20 = -(ulonglong)(0.0 <= dVar58 + -9.99999993922529e-09);
                  dVar58 = (double)(~uVar20 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar58)) & uVar20);
                  uVar20 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
                  dVar50 = (double)(~uVar20 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar50)) & uVar20);
                  auVar25._8_8_ = -(ulonglong)(0.0 <= dStack_3e0);
                  auVar25._0_8_ = -(ulonglong)(0.0 <= local_3e8);
                  auVar34 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
                  dVar68 = (double)(~-(ulonglong)(0.0 <= (double)local_3f8._0_8_) &
                                    0xbff0000000000000 |
                                   -(ulonglong)(0.0 <= (double)local_3f8._0_8_) & 0x3ff0000000000000
                                   );
                  dVar59 = auVar34._0_8_;
                  local_178[0] = local_178[0] * dVar39 * dVar59;
                  local_178[1] = local_178[1] * dVar39 * dVar59;
                  local_178[2] = dVar39 * local_178[2] * dVar59;
                  dVar39 = auVar34._8_8_;
                  local_148 = dVar58 * local_148 * dVar39;
                  local_150 = local_150 * dVar58 * dVar39;
                  local_158 = dVar39 * local_158 * dVar58;
                  local_128 = dVar50 * local_128 * dVar68;
                  local_130 = local_130 * dVar50 * dVar68;
                  local_138 = dVar68 * local_138 * dVar50;
                  FUN_14481fd10(&local_298,local_178);
                  dVar50 = local_288 * local_288 + local_298 * local_298;
                  dVar39 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                  auVar45._0_8_ = dVar50 + dVar39;
                  auVar45._8_8_ = dVar50 + dVar39;
                  auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
                  auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
                  auVar34 = sqrtpd(auVar45,auVar45);
                  auVar53 = divpd(auVar53,auVar34);
                  auVar55._0_8_ = auVar53._0_8_ * local_288;
                  auVar55._8_8_ = auVar53._8_8_ * dStack_280;
                  dVar32 = (double)((ulonglong)(local_298 * auVar53._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
                  dVar40 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
                  auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar26);
                  dVar39 = 0.0;
                  dVar58 = local_118;
                  dVar68 = dStack_110;
                  dVar50 = local_108;
                }
                *(double *)(local_398 + lVar14) = dVar32;
                ((double *)(local_398 + lVar14))[1] = dVar40;
                *(undefined1 (*) [16])(local_398 + 0x10 + lVar14) = auVar46;
                pdVar7 = (double *)(local_398 + 0x20 + lVar14);
                *pdVar7 = dVar58;
                pdVar7[1] = dVar68;
                pdVar7 = (double *)(local_398 + 0x30 + lVar14);
                *pdVar7 = dVar50;
                pdVar7[1] = dVar39;
                pdVar7 = (double *)(local_398 + 0x40 + lVar14);
                *pdVar7 = dVar38;
                pdVar7[1] = dVar57;
                auVar2._8_4_ = SUB84(dVar52,0);
                auVar2._0_8_ = dVar51;
                auVar2._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
                *(undefined1 (*) [16])(local_398 + 0x50 + lVar14) = auVar2;
                iVar4 = *(int *)(*(longlong *)((longlong)dVar60 + 0x90) + (longlong)iVar4 * 4);
              } while (iVar4 != -1);
              lVar5 = (longlong)*(int *)(local_3a8 + lVar17 * 4);
            }
            lVar14 = *param_3;
            lVar5 = lVar5 * 0x60;
            dVar58 = *(double *)(lVar14 + lVar5);
            dVar68 = ((double *)(lVar14 + lVar5))[1];
            pdVar7 = (double *)(lVar14 + 0x10 + lVar5);
            dVar75 = *pdVar7;
            dVar56 = pdVar7[1];
            pdVar7 = (double *)(lVar14 + 0x20 + lVar5);
            local_3e8 = *pdVar7;
            dStack_3e0 = pdVar7[1];
            pdVar7 = (double *)(lVar14 + 0x30 + lVar5);
            dVar63 = *pdVar7;
            auVar53 = *(undefined1 (*) [16])(lVar14 + 0x40 + lVar5);
            dVar38 = auVar53._0_8_;
            dVar39 = auVar53._8_8_;
            auVar34 = *(undefined1 (*) [16])(lVar14 + 0x50 + lVar5);
            dVar51 = auVar34._0_8_;
            lVar5 = lVar17 * 0x60;
            pauVar1 = (undefined1 (*) [16])(local_398 + lVar5);
            auVar61 = *(undefined1 (*) [16])(local_398 + 0x40 + lVar5);
            dVar57 = auVar61._0_8_;
            dVar52 = auVar61._8_8_;
            auVar30 = *(undefined1 (*) [16])(local_398 + 0x50 + lVar5);
            dVar50 = auVar30._0_8_;
            dVar59 = auVar30._8_8_;
            auVar53 = minpd(auVar53,auVar61);
            auVar61 = minpd(auVar34,auVar30);
            auVar47._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
            auVar47._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
            iVar4 = movmskpd((int)lVar14,auVar47);
            auVar65._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
            auVar65._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
            uVar8 = movmskpd((int)local_398,auVar65);
            if ((uVar8 & 0x3fffffff) == 0 && iVar4 == 0) {
              dVar40 = SUB168(*pauVar1,0);
              dVar72 = SUB168(*pauVar1,8);
              dVar76 = *(double *)pauVar1[1];
              dVar71 = *(double *)(pauVar1[1] + 8);
              dVar66 = *(double *)(pauVar1[1] + 8);
              dVar67 = *(double *)(pauVar1[1] + 8);
              dVar64 = *(double *)(*pauVar1 + 8);
              dVar69 = *(double *)(*pauVar1 + 8);
              dVar70 = *(double *)pauVar1[1];
              dVar32 = *(double *)pauVar1[1];
              dVar73 = dVar68 * dVar70 * -1.0 +
                       dVar75 * dVar64 + dVar56 * *(double *)*pauVar1 * 1.0 + dVar58 * dVar66;
              dVar74 = dVar58 * dVar32 * 1.0 +
                       dVar56 * dVar69 + dVar75 * *(double *)*pauVar1 * -1.0 + dVar68 * dVar67;
              auVar77._0_8_ =
                   dVar56 * dVar70 * 1.0 +
                   ((*(double *)*pauVar1 * dVar68 * 1.0 + dVar75 * dVar66) - dVar58 * dVar64);
              auVar77._8_8_ =
                   dVar75 * dVar32 * -1.0 +
                   ((*(double *)*pauVar1 * dVar58 * -1.0 + dVar56 * dVar67) - dVar68 * dVar69);
              dVar75 = local_3e8 * dVar57;
              dVar64 = dStack_3e0 * dVar52;
              dVar63 = dVar63 * dVar50;
              dVar58 = pdVar7[1] * dVar59;
              dVar68 = dVar64 * dVar40 - dVar75 * dVar72;
              dVar70 = dVar63 * dVar72 - dVar64 * dVar76;
              dVar56 = dVar75 * dVar76 - dVar63 * dVar40;
              dVar69 = dVar58 * dVar71 - dVar58 * dVar71;
              dVar70 = dVar70 + dVar70;
              dVar56 = dVar56 + dVar56;
              dVar68 = dVar68 + dVar68;
              dVar69 = dVar69 + dVar69;
              dVar51 = dVar51 * dVar50;
              dVar59 = auVar34._8_8_ * dVar59;
              dVar50 = (dVar68 * dVar72 - dVar76 * dVar56) + dVar66 * dVar70 + dVar75 +
                       *(double *)pauVar1[2];
              dVar75 = (dVar70 * dVar76 - dVar68 * dVar40) + dVar67 * dVar56 + dVar64 +
                       *(double *)(pauVar1[2] + 8);
              dVar56 = (dVar56 * dVar40 - dVar72 * dVar70) + dVar66 * dVar68 + dVar63 +
                       *(double *)pauVar1[3];
              dVar63 = (dVar69 * dVar71 - dVar69 * dVar71) + dVar67 * dVar69 + dVar58 +
                       *(double *)(pauVar1[3] + 8);
              local_3f8._8_8_ = dVar39 * dVar52;
              local_3f8._0_8_ = dVar38 * dVar57;
            }
            else {
              local_3d8 = dVar51 * dVar50;
              dStack_3d0 = auVar34._8_8_ * dVar59;
              dVar66 = *(double *)*pauVar1;
              dVar67 = *(double *)(*pauVar1 + 8);
              dVar69 = *(double *)pauVar1[1];
              dVar70 = dVar67 + dVar67;
              dVar32 = dVar69 + dVar69;
              dVar64 = dVar66 * (dVar66 + dVar66);
              local_1a8 = (1.0 - (dVar64 + dVar67 * dVar70)) * dVar50;
              dVar76 = *(double *)*pauVar1 * dVar32;
              dVar59 = *(double *)(pauVar1[1] + 8);
              dVar40 = dVar32 * dVar59;
              dVar72 = (dVar66 + dVar66) * *(double *)(pauVar1[1] + 8);
              dVar59 = dVar70 * dVar59;
              local_1b8 = (dVar59 + dVar76) * dVar50;
              dStack_1b0 = (dVar32 * dVar67 - dVar72) * dVar50;
              local_3f8._8_8_ = dVar39 * dVar52;
              local_3f8._0_8_ = dVar38 * dVar57;
              local_1f8 = (1.0 - (dVar69 * dVar32 + dVar67 * dVar70)) * dVar57;
              dVar50 = (1.0 - (dVar69 * dVar32 + dVar64)) * dVar52;
              dStack_1f0 = (dVar70 * dVar66 + dVar40) * dVar57;
              local_1c8 = (dVar32 * dVar67 + dVar72) * dVar52;
              local_1e8 = (dVar76 - dVar59) * dVar57;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar50,0);
              local_1d8._0_8_ = (dVar70 * dVar66 - dVar40) * dVar52;
              local_1d8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = *(double *)pauVar1[2];
              dStack_190 = *(double *)(pauVar1[2] + 8);
              local_188 = *(double *)pauVar1[3];
              uStack_180 = 0x3ff0000000000000;
              dVar52 = dVar68 + dVar68;
              dVar59 = dVar75 + dVar75;
              dVar50 = dVar58 * (dVar58 + dVar58);
              local_228 = (1.0 - (dVar50 + dVar68 * dVar52)) * dVar51;
              dVar66 = (dVar58 + dVar58) * dVar56;
              local_258 = (dVar52 * dVar58 - dVar59 * dVar56) * dVar39;
              dVar57 = (dVar59 * dVar68 - dVar66) * dVar51;
              local_278 = (1.0 - (dVar75 * dVar59 + dVar68 * dVar52)) * dVar38;
              dStack_250 = (1.0 - (dVar75 * dVar59 + dVar50)) * dVar39;
              dStack_270 = (dVar52 * dVar58 + dVar59 * dVar56) * dVar38;
              local_248 = (dVar59 * dVar68 + dVar66) * dVar39;
              local_268 = (dVar58 * dVar59 - dVar52 * dVar56) * dVar38;
              uStack_260 = 0;
              uStack_240 = 0;
              local_238._8_4_ = SUB84(dVar57,0);
              local_238._0_8_ = (dVar52 * dVar56 + dVar58 * dVar59) * dVar51;
              local_238._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              uStack_220 = 0;
              uStack_200 = 0x3ff0000000000000;
              local_218 = local_3e8;
              dStack_210 = dStack_3e0;
              local_208 = dVar63;
              FUN_1447fea8d(local_178,&local_278,&local_1f8);
              dVar59 = dStack_3d0;
              dVar51 = local_3d8;
              local_3e8 = local_178[2];
              dVar57 = local_178[2] * local_178[2] +
                       local_178[0] * local_178[0] + local_178[1] * local_178[1];
              local_3c8 = local_158;
              dVar50 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
              dVar38 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar20 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
              dVar57 = (double)(~uVar20 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar57)) & uVar20);
              uVar20 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
              dVar50 = (double)(~uVar20 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar50)) & uVar20);
              uVar20 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
              dVar38 = (double)(~uVar20 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar38)) & uVar20);
              auVar27._8_8_ = -(ulonglong)(0.0 <= (double)local_3f8._8_8_);
              auVar27._0_8_ = -(ulonglong)(0.0 <= (double)local_3f8._0_8_);
              auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar27);
              dVar39 = (double)(~-(ulonglong)(0.0 <= local_3d8) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= local_3d8) & 0x3ff0000000000000);
              dVar52 = auVar53._0_8_;
              local_178[0] = local_178[0] * dVar57 * dVar52;
              local_178[1] = local_178[1] * dVar57 * dVar52;
              local_178[2] = dVar57 * local_178[2] * dVar52;
              dVar57 = auVar53._8_8_;
              local_148 = dVar50 * local_148 * dVar57;
              local_150 = local_150 * dVar50 * dVar57;
              local_158 = dVar57 * local_158 * dVar50;
              local_128 = dVar38 * local_128 * dVar39;
              local_130 = local_130 * dVar38 * dVar39;
              local_138 = dVar39 * local_138 * dVar38;
              FUN_14481fd10(&local_298);
              dVar38 = local_288 * local_288 + local_298 * local_298;
              dVar57 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar37._0_8_ = dVar38 + dVar57;
              auVar37._8_8_ = dVar38 + dVar57;
              auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
              auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
              auVar53 = sqrtpd(auVar37,auVar37);
              auVar53 = divpd(_DAT_149934d80,auVar53);
              auVar48._0_8_ = auVar53._0_8_ * local_288;
              auVar48._8_8_ = auVar53._8_8_ * dStack_280;
              dVar73 = (double)((ulonglong)(local_298 * auVar53._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
              dVar74 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
              auVar77 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar28);
              dVar63 = 0.0;
              dVar50 = local_118;
              dVar75 = dStack_110;
              dVar56 = local_108;
            }
            lVar14 = (longlong)(int)uStack_380;
            uVar8 = (int)uStack_380 + 1;
            uStack_380 = CONCAT44(uStack_380._4_4_,uVar8);
            if (uStack_380._4_4_ < uVar8) {
              FUN_144a2c682(&local_388);
            }
            dVar39 = local_328;
            dVar68 = dStack_330;
            dVar58 = local_338;
            lVar14 = lVar14 * 0x60;
            *(double *)(local_388 + lVar14) = dVar73;
            ((double *)(local_388 + lVar14))[1] = dVar74;
            *(undefined1 (*) [16])(local_388 + 0x10 + lVar14) = auVar77;
            pdVar7 = (double *)(local_388 + 0x20 + lVar14);
            *pdVar7 = dVar50;
            pdVar7[1] = dVar75;
            pdVar7 = (double *)(local_388 + 0x30 + lVar14);
            *pdVar7 = dVar56;
            pdVar7[1] = dVar63;
            puVar9 = (undefined8 *)(local_388 + 0x40 + lVar14);
            *puVar9 = local_3f8._0_8_;
            puVar9[1] = local_3f8._8_8_;
            pdVar7 = (double *)(local_388 + 0x50 + lVar14);
            *pdVar7 = dVar51;
            pdVar7[1] = dVar59;
            pdVar7 = (double *)(local_388 + 0x20 + lVar5);
            dVar38 = local_338 - *pdVar7;
            dVar51 = dStack_330 - pdVar7[1];
            dVar57 = local_328 - *(double *)(local_388 + 0x30 + lVar5);
            lVar5 = (longlong)(int)uStack_370;
            uVar8 = (int)uStack_370 + 1;
            uStack_370 = CONCAT44(uStack_370._4_4_,uVar8);
            if (uStack_370._4_4_ < uVar8) {
              FUN_14475e4ac(&local_378);
            }
            *(float *)(local_378 + lVar5 * 4) =
                 (float)SQRT(dVar38 * dVar38 + dVar51 * dVar51 + dVar57 * dVar57);
            if (*(float *)(lVar18 + 0x10) <= 0.0) {
              puVar19 = (undefined4 *)((longlong)((int)uStack_370 + -1) * 4 + local_378);
            }
            else {
              puVar19 = (undefined4 *)(lVar18 + 0x10);
            }
            iVar4 = (int)uStack_360;
            uVar8 = (int)uStack_360 + 1;
            uStack_360 = CONCAT44(uStack_360._4_4_,uVar8);
            if (uStack_360._4_4_ < uVar8) {
              FUN_14475e4ac(&local_368);
            }
            *(undefined4 *)(local_368 + (longlong)iVar4 * 4) = *puVar19;
            iVar4 = *(int *)(local_3c0 + 0x18);
            lVar5 = local_3c0;
          }
        }
        lVar18 = local_3b0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar4);
      if ((int)uStack_3a0 == 2) {
        lVar17 = 0x30;
        lVar14 = 0;
        do {
          dVar60 = *(double *)(lVar5 + 0x30);
          dVar38 = *(double *)(lVar5 + 0x38);
          pdVar7 = (double *)(local_388 + -0x10 + lVar17);
          dVar57 = *pdVar7;
          dVar50 = pdVar7[1];
          dVar52 = *(double *)(local_388 + lVar17);
          dVar59 = ((double *)(local_388 + lVar17))[1];
          dVar63 = DAT_14c846520 - ABS(dVar38);
          dVar56 = DAT_14c846518 - ABS(dVar60);
          dVar51 = *(double *)(local_388 + -8 + lVar17);
          dVar75 = (double)(*(float *)(local_3b0 + 0x38) + -1.0);
          pdVar7 = (double *)(local_388 + -0x10 + lVar17);
          *pdVar7 = (dVar57 - ((DAT_14c846510 - ABS(*(double *)(lVar5 + 0x28))) * dVar57 +
                              dVar58 * ABS(*(double *)(lVar5 + 0x28)))) * dVar75 + dVar57;
          pdVar7[1] = (dVar51 - (dVar56 * dVar51 + dVar68 * ABS(dVar60))) * dVar75 + dVar50;
          *(double *)(local_388 + lVar17) =
               (dVar52 - (dVar63 * dVar52 + dVar39 * ABS(dVar38))) * dVar75 + dVar52;
          ((double *)(local_388 + lVar17))[1] = dVar59 + 0.0;
          lVar14 = lVar14 + 1;
          lVar17 = lVar17 + 0x60;
        } while (lVar14 < 2);
        if ((((*(double *)(local_3b0 + 8) == 3.4028234663852886e+38) &&
             (!NAN(*(double *)(local_3b0 + 8)))) &&
            ((*(double *)(local_3b0 + 0x10) == 3.4028234663852886e+38 &&
             ((!NAN(*(double *)(local_3b0 + 0x10)) &&
              (*(double *)(local_3b0 + 0x18) == 3.4028234663852886e+38)))))) &&
           (!NAN(*(double *)(local_3b0 + 0x18)))) {
          *(double *)(local_3b0 + 8) = dVar58;
          *(double *)(local_3b0 + 0x10) = dVar68;
          *(double *)(local_3b0 + 0x18) = dVar39;
        }
        if (1.0 <= *(float *)(local_3b0 + 0x38)) {
          pdVar7 = (double *)(local_388 + 0x30);
          lVar5 = 0;
          dVar60 = DAT_14c8464f0;
          do {
            dVar38 = *pdVar7 - dVar39;
            dVar51 = dVar38 * dVar38 +
                     (pdVar7[-2] - dVar58) * (pdVar7[-2] - dVar58) +
                     (pdVar7[-1] - dVar68) * (pdVar7[-1] - dVar68);
            if (((dVar51 != 1.0) || (dVar57 = dVar38, NAN(dVar51))) &&
               (dVar57 = DAT_14c8464f0, 9.99999993922529e-09 <= dVar51)) {
              dVar57 = dVar38 * (1.0 / SQRT(dVar51));
            }
            fVar31 = *(float *)(local_368 + lVar5 * 4) * 1.2;
            if (fVar31 < (float)SQRT(dVar51)) {
              dVar60 = dVar60 + dVar57 * (double)((float)SQRT(dVar51) - fVar31);
            }
            lVar5 = lVar5 + 1;
            pdVar7 = pdVar7 + 0xc;
          } while (lVar5 != 2);
          dVar51 = (double)*(float *)(local_3b0 + 0x38);
          dVar60 = dVar60 + dVar39;
          dVar38 = dVar58 * dVar51;
          dVar51 = dVar51 * dVar68;
        }
        else {
          pdVar7 = (double *)(local_388 + 0x30);
          uVar20 = 0xffffffff;
          fVar49 = 0.0;
          uVar16 = 0;
          fVar31 = 0.0;
          auVar29 = ZEXT816(0);
          do {
            dVar60 = *pdVar7 - dVar39;
            fVar62 = ABS((float)dVar60);
            if (fVar49 * fVar49 < (float)(dVar60 * dVar60)) {
              uVar20 = uVar16 & 0xffffffff;
            }
            uVar8 = -(uint)(fVar49 * fVar49 < (float)(dVar60 * dVar60));
            fVar49 = (float)(~uVar8 & (uint)fVar49 | uVar8 & (uint)fVar62);
            fVar31 = fVar31 + fVar62;
            auVar29._0_4_ = auVar29._0_4_ + *(float *)(local_368 + uVar16 * 4) * fVar62;
            uVar16 = uVar16 + 1;
            pdVar7 = pdVar7 + 0xc;
          } while (uVar16 != 2);
          lVar5 = (longlong)(int)uVar20 * 0x60;
          pdVar7 = (double *)(local_388 + 0x20 + lVar5);
          dVar60 = *pdVar7 - dVar58;
          dVar38 = pdVar7[1] - dVar68;
          fVar31 = (float)(((double)((auVar29._0_4_ / fVar31) * (auVar29._0_4_ / fVar31)) -
                           dVar60 * dVar60) - dVar38 * dVar38);
          dVar60 = 0.0;
          if (0.0 <= fVar31) {
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
                    /* WARNING: Read-only address (ram,0x000149936790) is written */
            dVar60 = (double)SQRT(fVar31);
          }
          dVar57 = (*(double *)(local_388 + 0x30 + lVar5) + dVar60) - dVar39;
          dVar60 = dVar39;
          dVar38 = dVar58;
          dVar51 = dVar68;
          if (0.0 < (float)dVar57) {
            dVar60 = dVar57 * (double)(1.0 - *(float *)(local_3b0 + 0x38)) + dVar39;
          }
        }
        *(double *)(local_3b0 + 8) = (dVar38 + dVar58) * 0.5;
        *(double *)(local_3b0 + 0x10) = (dVar68 + dVar51) * 0.5;
        *(double *)(local_3b0 + 0x18) = (dVar60 + dVar39) * 0.5;
        lVar17 = 0;
        lVar5 = 0;
        do {
          dVar60 = *(double *)(lVar18 + 0x18);
          dVar51 = *(double *)(local_388 + 0x30 + lVar17) - dVar60;
          dVar38 = *(double *)(lVar18 + 0x10);
          dVar50 = *(double *)(local_388 + 0x28 + lVar17) - dVar38;
          dVar57 = *(double *)(local_388 + 0x20 + lVar17) - *(double *)(lVar18 + 8);
          dVar39 = dVar51 * dVar51 + dVar57 * dVar57 + dVar50 * dVar50;
          dVar52 = (double)*(float *)(local_368 + lVar5 * 4);
          if (dVar52 < SQRT(dVar39)) {
            dVar58 = 1.0 / SQRT(dVar39);
            if (9.99999993922529e-09 < dVar39) {
              dVar57 = dVar57 * dVar58;
              dVar50 = dVar50 * dVar58;
            }
            dVar57 = dVar57 * dVar52;
            dVar50 = dVar50 * dVar52;
            dVar51 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar39) & (ulonglong)dVar51 |
                             (ulonglong)(dVar58 * dVar51) &
                             -(ulonglong)(9.99999993922529e-09 < dVar39)) * dVar52;
          }
          pdVar7 = (double *)(local_388 + 0x20 + lVar17);
          *pdVar7 = *(double *)(lVar18 + 8) + dVar57;
          pdVar7[1] = dVar38 + dVar50;
          pdVar7 = (double *)(local_388 + 0x30 + lVar17);
          *pdVar7 = dVar60 + dVar51;
          pdVar7[1] = 0.0;
          FUN_1449437a2(local_388 + lVar17,local_178,local_398 + lVar17);
          pdVar7 = local_178;
          pdVar11 = (double *)((longlong)*(int *)(local_3a8 + lVar5 * 4) * 0x60 + *param_3);
          for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
            *pdVar11 = *pdVar7;
            pdVar7 = pdVar7 + 1;
            pdVar11 = pdVar11 + 1;
          }
          lVar5 = lVar5 + 1;
          lVar17 = lVar17 + 0x60;
        } while (lVar5 < (int)uStack_3a0);
        local_328 = *(double *)(lVar18 + 0x18);
        local_338 = *(double *)(lVar18 + 8);
        dStack_330 = *(double *)(lVar18 + 0x10);
        dStack_320 = 0.0;
        FUN_1449437a2(local_358,local_178,local_2f8);
        pdVar7 = local_178;
        pdVar11 = (double *)(local_3b8 + *param_3);
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *pdVar11 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          pdVar11 = pdVar11 + 1;
        }
      }
      if (local_3a8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_398 != 0) {
      FUN_1400020a8();
    }
    if (local_388 != 0) {
      FUN_1400020a8();
    }
    if (local_378 != 0) {
      FUN_1400020a8();
    }
    if (local_368 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101049c FUN_14101049c body=221 status=ok
// SIG undefined FUN_14101049c(void)

longlong FUN_14101049c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1f250 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ebde87;
    local_40 = FUN_14642a61d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/AIModule",L"BTNode",&DAT_14cb1f250,&DAT_147ebde86);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1f250;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101057a FUN_14101057a body=39 status=ok
// SIG undefined FUN_14101057a(void)

undefined8 * FUN_14101057a(undefined8 *param_1)

{
  FUN_140fbcba4();
  *(undefined1 *)(param_1 + 0x21) = 1;
  *param_1 = &PTR_FUN_14b534570;
  return param_1;
}



// FUNCTION 1410105b0 FUN_1410105b0 body=74 status=ok
// SIG undefined FUN_1410105b0(void)

undefined8 * FUN_1410105b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7b99b0;
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410105fa FUN_1410105fa body=62 status=ok
// SIG undefined FUN_1410105fa(void)

undefined1 FUN_1410105fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141010638(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141010638 FUN_141010638 body=89 status=ok
// SIG undefined FUN_141010638(void)

undefined8 * FUN_141010638(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141010692(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 141010692 FUN_141010692 body=334 status=ok
// SIG undefined FUN_141010692(void)

void FUN_141010692(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141010704;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_141010704:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410107e0 FUN_1410107e0 body=713 status=ok
// SIG undefined FUN_1410107e0(void)

void FUN_1410107e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar4,param_1);
  *puVar4 = &PTR_FUN_14a4bef20;
  puVar4[0x1f] = &PTR_LAB_14a4bf290;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  *(undefined4 *)(puVar4 + 0x23) = 2;
  *(undefined8 *)((longlong)puVar4 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar4 + 300) = 0x200000000;
  *(undefined8 *)((longlong)puVar4 + 0x134) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x13c) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x144) = 0;
  puVar4[0x29] = 2;
  puVar4[0x20] = &PTR_FUN_14a46cec0;
  puVar4[0x39] = 0;
  *(undefined4 *)(puVar4 + 0x3a) = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = 0;
  puVar4[0x31] = 0;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1d4) = 0xffffffff00000080;
  puVar4[0x40] = 0;
  *(undefined4 *)(puVar4 + 0x41) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1dc) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1e4) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1ec) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x214) = 0;
  puVar4[0x44] = 0;
  *(undefined4 *)(puVar4 + 0x45) = 0;
  *(undefined1 *)(puVar4 + 0x1b) = 1;
  *(undefined2 *)(puVar4 + 0xb) = 0x201;
  if (((*(uint *)(puVar4 + 1) >> 9 & 1) != 0) || (cVar5 = FUN_145c40fca(puVar4,1), cVar5 != '\0')) {
    puVar4[0x13] = 2;
    puVar4[0x14] = 2;
  }
  lVar6 = FUN_1402d2740();
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  puVar4[0x2a] = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar7 + 2;
  FUN_141010aaa(plVar1,puVar4 + 0x20);
  local_38 = plVar1;
  local_30 = plVar7;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    puVar4[0x1c] = local_38;
    plVar7 = (longlong *)puVar4[0x1d];
    if (plVar7 == (longlong *)0x0) goto LAB_1410109d0;
    puVar4[0x1d] = 0;
LAB_141010a3a:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1410109d0;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar7;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    puVar4[0x1c] = local_38;
    plVar7 = (longlong *)puVar4[0x1d];
    if (local_30 != plVar7) {
      puVar4[0x1d] = local_30;
      if (plVar7 == (longlong *)0x0) goto LAB_1410109d0;
      goto LAB_141010a3a;
    }
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1410109d0;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1410109d0:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141010aaa FUN_141010aaa body=197 status=ok
// SIG undefined FUN_141010aaa(void)

undefined8 * FUN_141010aaa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_141010b70();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 141010b70 FUN_141010b70 body=57 status=ok
// SIG undefined FUN_141010b70(void)

void FUN_141010b70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2448 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2448 = FUN_140002ddd(FUN_14633b516,uVar1,L"MovieSceneObjectPathChannel");
  }
  return;
}



// FUNCTION 141010baa FUN_141010baa body=99 status=ok
// SIG undefined FUN_141010baa(void)

void FUN_141010baa(undefined8 param_1,undefined8 param_2)

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
  FUN_141010c0e(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141010c0e FUN_141010c0e body=520 status=ok
// SIG undefined FUN_141010c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141010c0e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141010f9e(param_1,*(undefined8 *)(*param_2 + 8));
  plVar2 = *(longlong **)(*param_2 + 8);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    (**(code **)(*plVar2 + 0x218))(plVar2,&DAT_149e3cbd8);
    iVar4 = FUN_1448332aa(plVar2,&DAT_149e3cbd8);
    if (((0x1f < iVar4) && (*(char *)(param_1 + 0xc0) == '\0')) &&
       ((*(byte *)((longlong)plVar2 + 0x35) & 0x10) == 0)) {
      if ((((((*(int *)(param_1 + 0xe4) == 0) || (uVar1 = *(uint *)(param_1 + 0xe0), (int)uVar1 < 0)
             ) || ((DAT_14c9647dc <= (int)uVar1 ||
                   ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8),
                    lVar5 == 0 || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xe4))))))) ||
           ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) || (*(longlong *)(param_1 + 0xe8) == 0)) &&
         ((*(byte *)(plVar2 + 5) & 1) != 0)) {
        (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x40))(param_1 + 0xd8);
        if (param_1 == 0) {
          _DAT_000000e0 = 0;
          iVar4 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(param_1 + 0xe0) = uVar1;
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
            iVar6 = DAT_14c964868 + 1;
            bVar7 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar7) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar4 = *(int *)(lVar5 + 0x10);
            bVar7 = iVar4 == 0;
            if (bVar7) {
              *(int *)(lVar5 + 0x10) = iVar6;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar7) {
              iVar4 = iVar6;
            }
          }
        }
        *(int *)(param_1 + 0xe4) = iVar4;
        (*(code *)**(undefined8 **)(param_1 + 0xd8))(param_1 + 0xd8);
      }
      uVar3 = *(undefined8 *)(param_1 + 0xe8);
      FUN_141010ebe(local_40,uVar3);
      FUN_14483b62e(param_1,param_2,uVar3,0);
      if ((*(byte *)(plVar2 + 5) & 1) != 0) {
        FUN_141011264(param_1);
      }
      FUN_141010e18(local_40);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141010e18 FUN_141010e18 body=165 status=ok
// SIG undefined FUN_141010e18(void)

void FUN_141010e18(void)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dwTlsIndex = DAT_14c75eca8;
  if (DAT_14c75eca8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c75eca8 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c75eca8;
      DVar1 = DAT_14c75eca8;
    }
    DAT_14c75eca8 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1456d0794(&local_19);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  *(int *)((longlong)lpTlsValue + 0x28) = *(int *)((longlong)lpTlsValue + 0x28) + -1;
  FUN_140380544((longlong)lpTlsValue + 0x20);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141010ebe FUN_141010ebe body=222 status=ok
// SIG undefined FUN_141010ebe(void)

undefined8 * FUN_141010ebe(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD dwTlsIndex;
  DWORD DVar3;
  LPVOID lpTlsValue;
  bool bVar4;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  dwTlsIndex = DAT_14c75eca8;
  if (DAT_14c75eca8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar3 = 0xffffffff;
    LOCK();
    bVar4 = DAT_14c75eca8 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar4) {
      DVar3 = DAT_14c75eca8;
      DVar2 = DAT_14c75eca8;
    }
    DAT_14c75eca8 = DVar2;
    UNLOCK();
    if (bVar4) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar3;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1456d0794(&local_39);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  iVar1 = *(int *)((longlong)lpTlsValue + 0x28);
  *(uint *)((longlong)lpTlsValue + 0x28) = iVar1 + 1U;
  if (*(uint *)((longlong)lpTlsValue + 0x2c) < iVar1 + 1U) {
    FUN_1456bd870((longlong *)((longlong)lpTlsValue + 0x20),iVar1);
  }
  *(undefined8 *)(*(longlong *)((longlong)lpTlsValue + 0x20) + (longlong)iVar1 * 8) = param_2;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141010f9e FUN_141010f9e body=241 status=ok
// SIG undefined FUN_141010f9e(void)

void FUN_141010f9e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a52d8();
  uVar2 = *(uint *)(param_1 + 0x16);
  local_24 = uVar2 & 0xff8003bd;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(uint *)(param_1 + 0x16) = local_24 & 0xff8003bd;
    *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
    param_1[0x17] = 0;
    (**(code **)(*param_1 + 0x358))(param_1);
    if (param_1[0x17] == 0) {
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xff8003bd | uVar2 & 0x7ffc42;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141011090 FUN_141011090 body=466 status=ok
// SIG undefined FUN_141011090(void)

void FUN_141011090(longlong param_1)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [12];
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0xc) == 0) || (uVar2 = *(uint *)(param_1 + 8), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410111e8;
  plVar3 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (((plVar3 == (longlong *)0x0) || ((int)plVar3[2] != *(int *)(param_1 + 0xc))) ||
     (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 || (lVar5 = *plVar3, lVar5 == 0))))
  goto LAB_1410111e8;
  uVar2 = -*(int *)(lVar5 + 0x5c) & (*(int *)(lVar5 + 0x58) + *(int *)(lVar5 + 0x5c)) - 1U;
  iVar4 = 0;
  _Dst = (void *)FUN_14001cc68((longlong)(int)(uVar2 + (uVar2 == 0)));
  *(void **)(param_1 + 0x10) = _Dst;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_14101120b:
    lVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    lVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))
         )) goto LAB_14101120b;
      lVar5 = *plVar3;
    }
  }
  memset(_Dst,0,(longlong)
                (int)(-*(int *)(lVar5 + 0x5c) &
                     (*(int *)(lVar5 + 0x58) + *(int *)(lVar5 + 0x5c)) - 1U));
  plVar3 = *(longlong **)(lVar5 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,local_40);
    if ((local_34 & 2) == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,_Dst);
    }
    iVar4 = (int)plVar3[1];
  }
  if (iVar4 < *(int *)(lVar5 + 0x58)) {
    for (plVar3 = *(longlong **)(lVar5 + 0x70); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[9]) {
      iVar1 = *(int *)((longlong)plVar3 + 0x44);
      if (*(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6] + iVar1 <= iVar4) break;
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        (**(code **)(*plVar3 + 0x160))(plVar3,(longlong)iVar1 + (longlong)_Dst);
      }
      else {
        memset((void *)((longlong)iVar1 + (longlong)_Dst),0,
               (longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
LAB_1410111e8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141011264 FUN_141011264 body=844 status=ok
// SIG undefined FUN_141011264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141011264(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  
  if ((param_1[0x1d] != 0) &&
     (uVar4 = -*(int *)((longlong)param_1 + 0x5c) &
              ((int)param_1[0xb] + *(int *)((longlong)param_1 + 0x5c)) - 1U, 0 < (int)uVar4)) {
    uVar9 = 0;
    do {
      if (*(char *)(param_1[0x1d] + uVar9) != '\0') goto LAB_141011300;
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  plVar7 = param_1;
  if (param_1 == (longlong *)0x0) {
    uVar4 = _DAT_000000b0 | 0xe000;
    bVar3 = true;
    puVar10 = (uint *)&DAT_000000b0;
    goto LAB_1410113f6;
  }
  do {
    for (lVar8 = plVar7[10]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) goto LAB_1410112d3;
    }
    if (*(code **)(*plVar7 + 0x2b0) == (code *)&LAB_1446e8c94) {
      plVar7 = (longlong *)plVar7[8];
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7);
    }
    bVar2 = true;
  } while (plVar7 != (longlong *)0x0);
LAB_141011302:
  plVar7 = param_1;
  if (param_1 != (longlong *)0x0) {
LAB_14101130e:
    lVar8 = plVar7[10];
LAB_141011312:
    if (lVar8 == 0) goto LAB_1410114ad;
    if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) != 0) goto LAB_14101155f;
    bVar1 = *(byte *)(lVar8 + 0x3b);
joined_r0x000141011336:
    plVar6 = param_1;
    if ((bVar1 & 0x40) != 0) {
      plVar6 = (longlong *)(lVar8 + 0x18);
      do {
        for (lVar8 = *plVar6; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
          if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) {
            bVar1 = *(byte *)(lVar8 + 0x3b);
            goto joined_r0x000141011336;
          }
        }
        if (*(code **)(*plVar7 + 0x2b0) == (code *)&LAB_1446e8c94) {
          plVar7 = (longlong *)plVar7[8];
        }
        else {
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))();
        }
        plVar6 = plVar7 + 10;
      } while (plVar7 != (longlong *)0x0);
      goto LAB_141011433;
    }
    do {
      for (lVar8 = plVar6[10]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) {
          if ((*(byte *)(lVar8 + 0x3c) & 0x10) == 0) {
LAB_1410113d0:
            bVar3 = false;
          }
          else {
LAB_1410113a5:
            plVar7 = (longlong *)(lVar8 + 0x18);
            do {
              for (lVar8 = *plVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
                if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) {
                  if ((*(ulonglong *)(lVar8 + 0x38) & 0x1000000000) == 0) goto LAB_1410113d0;
                  goto LAB_1410113a5;
                }
              }
              if (*(code **)(*plVar6 + 0x2b0) == (code *)&LAB_1446e8c94) {
                plVar6 = (longlong *)plVar6[8];
              }
              else {
                plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
              }
              plVar7 = plVar6 + 10;
              bVar3 = true;
            } while (plVar6 != (longlong *)0x0);
          }
          goto LAB_1410113d2;
        }
      }
      if (*(code **)(*plVar6 + 0x2b0) == (code *)&LAB_1446e8c94) {
        plVar6 = (longlong *)plVar6[8];
      }
      else {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
      }
      bVar3 = true;
    } while (plVar6 != (longlong *)0x0);
LAB_1410113d2:
    puVar10 = (uint *)(param_1 + 0x16);
    uVar4 = (*(uint *)(param_1 + 0x16) | 0xe000) & 0xffff5fff;
    if (bVar2) {
      uVar4 = *(uint *)(param_1 + 0x16) | 0xe000;
    }
    uVar4 = uVar4 & 0xffffdfff;
    goto LAB_1410113f6;
  }
LAB_141011433:
  puVar10 = (uint *)(param_1 + 0x16);
  uVar4 = (*(uint *)(param_1 + 0x16) | 0xe000) & 0xffff7fff;
  if (bVar2) {
    uVar4 = *(uint *)(param_1 + 0x16) | 0xe000;
  }
  bVar3 = true;
LAB_1410113f6:
  uVar5 = uVar4 & 0xffffbfff;
  if (bVar3) {
    uVar5 = uVar4;
  }
  *puVar10 = uVar5;
  return;
LAB_1410112d3:
  if ((*(byte *)(lVar8 + 0x39) & 2) == 0) {
LAB_141011300:
    bVar2 = false;
  }
  else {
    plVar6 = (longlong *)(lVar8 + 0x18);
    do {
      for (lVar8 = *plVar6; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) goto LAB_1410112d3;
      }
      if (*(code **)(*plVar7 + 0x2b0) == (code *)&LAB_1446e8c94) {
        plVar7 = (longlong *)plVar7[8];
      }
      else {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7);
      }
      plVar6 = plVar7 + 10;
      bVar2 = true;
    } while (plVar7 != (longlong *)0x0);
  }
  goto LAB_141011302;
LAB_1410114ad:
  if (*(code **)(*plVar7 + 0x2b0) == (code *)&LAB_1446e8c94) {
    plVar7 = (longlong *)plVar7[8];
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))();
  }
  if (plVar7 == (longlong *)0x0) goto LAB_141011433;
  goto LAB_14101130e;
LAB_14101155f:
  lVar8 = *(longlong *)(lVar8 + 0x18);
  goto LAB_141011312;
}



// FUNCTION 1410115be FUN_1410115be body=214 status=ok
// SIG undefined FUN_1410115be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410115be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab7cc10;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 141011694 FUN_141011694 body=112 status=ok
// SIG undefined FUN_141011694(void)

bool FUN_141011694(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141011706(param_1,&local_28);
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
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141011706 FUN_141011706 body=231 status=ok
// SIG undefined FUN_141011706(void)

longlong * FUN_141011706(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 == (longlong *)0x0) {
LAB_1410117c5:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_1410117c5;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar5 = *(longlong *)(param_1 + 0x28);
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
    if ((((lVar5 == 0) || (*(int *)(lVar5 + 0x254) == 0)) ||
        (uVar3 = *(uint *)(lVar5 + 0x250), (int)uVar3 < 0)) ||
       (((DAT_14c9647dc <= (int)uVar3 ||
         (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 == 0)) ||
        ((*(int *)(lVar8 + 0x10) != *(int *)(lVar5 + 0x254) ||
         ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))))) {
      *param_2 = 0;
      param_2[1] = 0;
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
    else {
      *param_2 = lVar5;
      param_2[1] = (longlong)plVar4;
    }
  }
  return param_2;
}



// FUNCTION 1410117ee FUN_1410117ee body=91 status=ok
// SIG undefined FUN_1410117ee(void)

undefined8 * FUN_1410117ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a39e9e0;
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  FUN_14101184a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14101184a FUN_14101184a body=649 status=ok
// SIG undefined FUN_14101184a(void)

void FUN_14101184a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a39df10;
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  param_1[0x83] = &DAT_14a176f00;
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  param_1[0x83] = &PTR_FUN_14a177080;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8d) = 0;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (*(int *)((longlong)param_1 + 0x42c) != 0) {
    FUN_14472eb64(param_1 + 0x84,0);
  }
  param_1[0x8a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x44c)) {
    *(undefined4 *)((longlong)param_1 + 0x44c) = 0x80;
    FUN_1446efbd8(param_1 + 0x86,0);
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  param_1[0x71] = &DAT_14a176f00;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x71] = &PTR_FUN_14a177080;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x73) = 0;
  if (*(int *)((longlong)param_1 + 0x39c) != 0) {
    FUN_14472eb64(param_1 + 0x72,0);
  }
  param_1[0x78] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3bc)) {
    *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x80;
    FUN_1446efbd8(param_1 + 0x74,0);
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_144760d56(param_1 + 0x36);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141011ad4 FUN_141011ad4 body=2453 status=ok
// SIG undefined FUN_141011ad4(void)

undefined1 FUN_141011ad4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = param_2[1];
  if (lVar10 == 0) {
    uVar9 = FUN_140b7bb2c();
    lVar10 = FUN_14477b664(uVar9);
    param_2[1] = lVar10;
  }
  lVar11 = param_2[2];
  if (lVar11 == 0) {
    uVar6 = 0;
    if ((lVar10 == 0) || (*param_2 == 0)) goto LAB_141012268;
    plVar16 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar16 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar16 + 0x110))(plVar16);
      lVar11 = FUN_144aff482(uVar9,param_2);
      param_2[2] = lVar11;
      if (lVar11 != 0) goto LAB_141011b29;
    }
  }
  else {
LAB_141011b29:
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar2 = *(uint *)(param_1 + 0x38);
      uVar6 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141012268;
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar10 == 0) ||
         ((*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))) goto LAB_141012266;
      if (param_2[1] == 0) {
        uVar9 = FUN_140b7bb2c();
        lVar10 = FUN_14477b664(uVar9);
        param_2[1] = lVar10;
        lVar11 = param_2[2];
        if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*param_2 != 0)) {
          plVar16 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar16 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar16 + 0x110))(plVar16);
            lVar11 = FUN_144aff482(uVar9,param_2);
          }
          param_2[2] = lVar11;
        }
      }
      lVar10 = *(longlong *)(lVar11 + 0x50);
      if (lVar10 == 0) {
        uVar9 = FUN_141528ae6();
        lVar10 = FUN_14477b664(uVar9);
        *(longlong *)(lVar11 + 0x50) = lVar10;
      }
      if (*(longlong *)(lVar11 + 0x58) == 0) {
        if ((lVar10 != 0) && (*(longlong *)(lVar11 + 0x48) != 0)) {
          plVar16 = (longlong *)(lVar11 + 0x58);
          plVar1 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar5 == '\0')) {
LAB_1410123e1:
            *plVar16 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar11 + 0x48));
            *plVar16 = lVar10;
            if (lVar10 != 0) goto LAB_141011c17;
          }
        }
      }
      else {
LAB_141011c17:
        lVar10 = param_2[1];
        if (lVar10 == 0) {
          uVar9 = FUN_140b7bb2c();
          lVar10 = FUN_14477b664(uVar9);
          param_2[1] = lVar10;
        }
        lVar11 = param_2[2];
        if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*param_2 != 0)) {
          plVar16 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar16 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar16 + 0x110))(plVar16);
            lVar11 = FUN_144aff482(uVar9,param_2);
          }
          param_2[2] = lVar11;
        }
        lVar10 = *(longlong *)(lVar11 + 0x50);
        if (lVar10 == 0) {
          uVar9 = FUN_141528ae6();
          lVar10 = FUN_14477b664(uVar9);
          *(longlong *)(lVar11 + 0x50) = lVar10;
        }
        lVar12 = *(longlong *)(lVar11 + 0x58);
        if (lVar12 == 0) {
          if ((lVar10 != 0) && (*(longlong *)(lVar11 + 0x48) != 0)) {
            plVar16 = (longlong *)(lVar11 + 0x58);
            plVar1 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar5 == '\0')) goto LAB_1410123e1;
            uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar12 = FUN_144aff482(uVar9,(longlong *)(lVar11 + 0x48));
            *plVar16 = lVar12;
            if (lVar12 != 0) goto LAB_141011cb0;
          }
        }
        else {
LAB_141011cb0:
          lVar10 = *(longlong *)(lVar12 + 0x20);
          if (lVar10 == 0) {
            uVar9 = FUN_14054e994();
            lVar10 = FUN_14477b664(uVar9);
            *(longlong *)(lVar12 + 0x20) = lVar10;
          }
          plVar1 = (longlong *)(lVar12 + 0x18);
          plVar16 = (longlong *)(lVar12 + 0x28);
          lVar11 = *(longlong *)(lVar12 + 0x28);
          if (lVar11 == 0) {
            if ((lVar10 != 0) && (*plVar1 != 0)) {
              plVar3 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0'))
              goto LAB_1410123e1;
              uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar11 = FUN_144aff482(uVar9,plVar1);
              *plVar16 = lVar11;
              if (lVar11 != 0) {
                lVar10 = *(longlong *)(lVar12 + 0x20);
                goto LAB_141011d3e;
              }
            }
          }
          else {
LAB_141011d3e:
            if (lVar10 == 0) {
              uVar9 = FUN_14054e994();
              lVar10 = FUN_14477b664(uVar9);
              *(longlong *)(lVar12 + 0x20) = lVar10;
              lVar11 = *(longlong *)(lVar12 + 0x28);
              if (lVar11 != 0) goto LAB_141011dbc;
              if ((lVar10 != 0) && (*plVar1 != 0)) {
                plVar3 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
                  *plVar16 = 0;
                }
                else {
                  uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar11 = FUN_144aff482(uVar9,plVar1);
                  *plVar16 = lVar11;
                  if (lVar11 != 0) goto LAB_141011dbc;
                }
              }
              local_60 = 0;
            }
            else {
LAB_141011dbc:
              puVar15 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar11 + 8) != (undefined4 *)0x0) {
                puVar15 = *(undefined4 **)(lVar11 + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar10 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar10);
                DAT_14c947fe0 = lVar10;
              }
              FUN_140045924(DAT_14c947fe0,&local_60,puVar15,1);
            }
            local_58 = 0x401d;
            local_50 = 0;
            if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1410123be:
              uVar9 = 0;
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x38);
              uVar9 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar13 = (undefined8 *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar13 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x3c) ||
                    ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_1410123be;
                uVar9 = *puVar13;
              }
            }
            local_94 = FUN_148cfbe58(uVar9,&local_60);
            if ((longlong)*(int *)(lVar12 + 0x38) != 0) {
              local_88 = *(longlong *)(lVar12 + 0x30);
              local_90 = (longlong)*(int *)(lVar12 + 0x38) * 0x18;
              uVar17 = 0;
              do {
                lVar10 = local_88;
                if (*(longlong *)(local_88 + 8 + uVar17) == 0) {
                  uVar9 = FUN_140b7bb2c();
                  uVar9 = FUN_14477b664(uVar9);
                  *(undefined8 *)(lVar10 + 8 + uVar17) = uVar9;
                }
                lVar11 = param_2[1];
                if (lVar11 == 0) {
                  lVar11 = FUN_140b7bb2c();
                }
                local_80 = *param_2;
                lVar11 = FUN_14477b664(lVar11);
                iVar7 = 0;
                if ((lVar11 != 0) &&
                   (plVar16 = *(longlong **)(lVar11 + 0xb8), plVar16 != (longlong *)0x0)) {
                  lVar12 = *plVar16;
                  pcVar4 = *(code **)(lVar12 + 0x108);
                  if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
                    cVar5 = (*pcVar4)(plVar16);
                    iVar7 = 0;
                    if (cVar5 == '\0') goto LAB_141011f33;
                    lVar12 = *plVar16;
                  }
                  pcVar4 = *(code **)(lVar12 + 0x110);
                  ppuVar14 = &PTR_PTR_14c763408;
                  if ((pcVar4 != (code *)&LAB_144783426) &&
                     (ppuVar14 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
                    ppuVar14 = (undefined **)(*pcVar4)(plVar16);
                  }
                  iVar7 = FUN_144aff48c(ppuVar14);
                }
LAB_141011f33:
                lVar12 = *(longlong *)(lVar10 + uVar17);
                lVar10 = *(longlong *)(lVar10 + 8 + uVar17);
                iVar8 = 0;
                local_a0 = lVar11;
                if ((lVar10 != 0) &&
                   (plVar16 = *(longlong **)(lVar10 + 0xb8), iVar8 = 0, plVar16 != (longlong *)0x0))
                {
                  lVar11 = *plVar16;
                  pcVar4 = *(code **)(lVar11 + 0x108);
                  if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
                    cVar5 = (*pcVar4)(plVar16);
                    if (cVar5 == '\0') goto LAB_141011fa2;
                    lVar11 = *plVar16;
                  }
                  pcVar4 = *(code **)(lVar11 + 0x110);
                  ppuVar14 = &PTR_PTR_14c763408;
                  if ((pcVar4 != (code *)&LAB_144783426) &&
                     (ppuVar14 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
                    ppuVar14 = (undefined **)(*pcVar4)(plVar16);
                  }
                  iVar8 = FUN_144aff48c(ppuVar14);
                }
LAB_141011fa2:
                if ((iVar8 == iVar7) && (lVar12 == local_80)) {
                  if (lVar10 == local_a0) {
LAB_14101209d:
                    iVar7 = (int)(uVar17 >> 3) * -0x55555555;
                    uVar6 = iVar7 < local_94;
                    if (iVar7 != -1) goto LAB_141012268;
                    break;
                  }
                  if ((local_a0 != 0) && (lVar10 != 0)) {
                    iVar7 = *(int *)(local_a0 + 0x38);
                    iVar8 = *(int *)(lVar10 + 0x38);
                    if (((iVar7 <= iVar8) &&
                        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8) ==
                         local_a0 + 0x30)) ||
                       ((iVar8 <= iVar7 &&
                        (*(longlong *)(*(longlong *)(local_a0 + 0x30) + (longlong)iVar8 * 8) ==
                         lVar10 + 0x30)))) goto LAB_14101209d;
                  }
                }
                uVar17 = uVar17 + 0x18;
              } while (local_90 != uVar17);
            }
          }
        }
      }
      lVar10 = param_2[1];
      if (lVar10 == 0) {
        uVar9 = FUN_140b7bb2c();
        lVar10 = FUN_14477b664(uVar9);
        param_2[1] = lVar10;
      }
      lVar11 = param_2[2];
      if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*param_2 != 0)) {
        plVar16 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
          lVar11 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar11 = FUN_144aff482(uVar9,param_2);
        }
        param_2[2] = lVar11;
      }
      if ((*(longlong *)(lVar11 + 0x30) != 0) && (*(int *)(lVar11 + 0x38) - 1U < 0xfffffffe)) {
        lVar10 = param_2[1];
        if (lVar10 == 0) {
          uVar9 = FUN_140b7bb2c();
          lVar10 = FUN_14477b664(uVar9);
          param_2[1] = lVar10;
          lVar11 = param_2[2];
        }
        if (lVar11 == 0) {
          param_2[2] = 0;
          lVar11 = 0;
          if ((lVar10 != 0) && (*param_2 != 0)) {
            plVar16 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar16 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
              lVar11 = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar16 + 0x110))(plVar16);
              lVar11 = FUN_144aff482(uVar9,param_2);
            }
            param_2[2] = lVar11;
          }
        }
        lVar10 = FUN_1408d7900(lVar11 + 0x30);
        if (lVar10 == 0) {
          local_78 = 0;
        }
        else {
          puVar15 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
            puVar15 = *(undefined4 **)(lVar10 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar10 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar10);
            DAT_14c947fe0 = lVar10;
          }
          FUN_140045924(DAT_14c947fe0,&local_78,puVar15,1);
        }
        local_70 = 0x401d;
        local_68 = 0;
        if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1410123c5:
          uVar9 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x38);
          uVar9 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar13 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar13 == (undefined8 *)0x0) ||
               ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x3c) ||
                ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_1410123c5;
            uVar9 = *puVar13;
          }
        }
        uVar6 = FUN_140c1542c(uVar9,&local_78);
        goto LAB_141012268;
      }
    }
  }
LAB_141012266:
  uVar6 = 0;
LAB_141012268:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14101246a FUN_14101246a body=1914 status=ok
// SIG undefined FUN_14101246a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141013fe8) overlaps instruction at (ram,0x000141013fe7)
    */
/* WARNING: Removing unreachable block (ram,0x0001410145fa) */
/* WARNING: Removing unreachable block (ram,0x00014101460b) */
/* WARNING: Removing unreachable block (ram,0x00014101460f) */
/* WARNING: Removing unreachable block (ram,0x000141014635) */
/* WARNING: Removing unreachable block (ram,0x00014101463c) */
/* WARNING: Removing unreachable block (ram,0x000141014644) */
/* WARNING: Removing unreachable block (ram,0x000141014647) */
/* WARNING: Removing unreachable block (ram,0x00014101464f) */
/* WARNING: Removing unreachable block (ram,0x00014101465b) */
/* WARNING: Removing unreachable block (ram,0x000141014667) */
/* WARNING: Removing unreachable block (ram,0x000141014671) */
/* WARNING: Removing unreachable block (ram,0x00014101467a) */
/* WARNING: Removing unreachable block (ram,0x00014101473b) */
/* WARNING: Removing unreachable block (ram,0x000141014740) */
/* WARNING: Removing unreachable block (ram,0x000141014745) */
/* WARNING: Removing unreachable block (ram,0x000141014749) */
/* WARNING: Removing unreachable block (ram,0x00014101474e) */
/* WARNING: Removing unreachable block (ram,0x000141014763) */
/* WARNING: Removing unreachable block (ram,0x000141014776) */
/* WARNING: Removing unreachable block (ram,0x00014101477b) */
/* WARNING: Removing unreachable block (ram,0x000141014780) */
/* WARNING: Removing unreachable block (ram,0x000141014785) */
/* WARNING: Removing unreachable block (ram,0x000141014790) */
/* WARNING: Removing unreachable block (ram,0x0001410147f3) */
/* WARNING: Removing unreachable block (ram,0x0001410147f7) */
/* WARNING: Removing unreachable block (ram,0x0001410147fb) */
/* WARNING: Removing unreachable block (ram,0x0001410147fe) */
/* WARNING: Removing unreachable block (ram,0x000141014802) */
/* WARNING: Removing unreachable block (ram,0x000141014810) */
/* WARNING: Removing unreachable block (ram,0x000141014815) */
/* WARNING: Removing unreachable block (ram,0x00014101481a) */
/* WARNING: Removing unreachable block (ram,0x00014101481f) */
/* WARNING: Removing unreachable block (ram,0x000141014829) */
/* WARNING: Removing unreachable block (ram,0x000141014842) */
/* WARNING: Removing unreachable block (ram,0x00014101484c) */
/* WARNING: Removing unreachable block (ram,0x00014101485a) */
/* WARNING: Removing unreachable block (ram,0x00014101486e) */
/* WARNING: Removing unreachable block (ram,0x000141014872) */
/* WARNING: Removing unreachable block (ram,0x000141014901) */
/* WARNING: Removing unreachable block (ram,0x000141014a55) */
/* WARNING: Removing unreachable block (ram,0x000141014a70) */
/* WARNING: Removing unreachable block (ram,0x000141014a84) */
/* WARNING: Removing unreachable block (ram,0x000141014a8a) */
/* WARNING: Removing unreachable block (ram,0x00014101491e) */
/* WARNING: Removing unreachable block (ram,0x000141014a98) */
/* WARNING: Removing unreachable block (ram,0x00014101487b) */
/* WARNING: Removing unreachable block (ram,0x00014101487d) */
/* WARNING: Removing unreachable block (ram,0x000141014882) */
/* WARNING: Removing unreachable block (ram,0x000141014888) */
/* WARNING: Removing unreachable block (ram,0x0001410148aa) */
/* WARNING: Removing unreachable block (ram,0x0001410148b7) */
/* WARNING: Removing unreachable block (ram,0x0001410148b9) */
/* WARNING: Removing unreachable block (ram,0x0001410148bd) */
/* WARNING: Removing unreachable block (ram,0x0001410148c3) */
/* WARNING: Removing unreachable block (ram,0x00014101492a) */
/* WARNING: Removing unreachable block (ram,0x000141014954) */
/* WARNING: Removing unreachable block (ram,0x00014101495e) */
/* WARNING: Removing unreachable block (ram,0x00014101497d) */
/* WARNING: Removing unreachable block (ram,0x000141014988) */
/* WARNING: Removing unreachable block (ram,0x0001410149cf) */
/* WARNING: Removing unreachable block (ram,0x0001410149d5) */
/* WARNING: Removing unreachable block (ram,0x0001410149f7) */
/* WARNING: Removing unreachable block (ram,0x000141014a01) */
/* WARNING: Removing unreachable block (ram,0x000141014a0a) */
/* WARNING: Removing unreachable block (ram,0x000141014a2c) */
/* WARNING: Removing unreachable block (ram,0x000141014a32) */
/* WARNING: Removing unreachable block (ram,0x000141014a40) */
/* WARNING: Removing unreachable block (ram,0x000141014a49) */
/* WARNING: Removing unreachable block (ram,0x0001410148d3) */
/* WARNING: Removing unreachable block (ram,0x0001410148da) */
/* WARNING: Removing unreachable block (ram,0x0001410148e9) */
/* WARNING: Removing unreachable block (ram,0x0001410148f2) */
/* WARNING: Removing unreachable block (ram,0x0001410148fc) */
/* WARNING: Removing unreachable block (ram,0x000141013b07) */
/* WARNING: Removing unreachable block (ram,0x000141013b18) */
/* WARNING: Removing unreachable block (ram,0x000141013b1c) */
/* WARNING: Removing unreachable block (ram,0x000141013b42) */
/* WARNING: Removing unreachable block (ram,0x000141013b49) */
/* WARNING: Removing unreachable block (ram,0x000141013b51) */
/* WARNING: Removing unreachable block (ram,0x000141013b54) */
/* WARNING: Removing unreachable block (ram,0x000141013b5c) */
/* WARNING: Removing unreachable block (ram,0x000141013b68) */
/* WARNING: Removing unreachable block (ram,0x000141013b74) */
/* WARNING: Removing unreachable block (ram,0x000141013b7e) */
/* WARNING: Removing unreachable block (ram,0x000141013b87) */
/* WARNING: Removing unreachable block (ram,0x000141013c3e) */
/* WARNING: Removing unreachable block (ram,0x000141013c42) */
/* WARNING: Removing unreachable block (ram,0x000141013c46) */
/* WARNING: Removing unreachable block (ram,0x000141013c4a) */
/* WARNING: Removing unreachable block (ram,0x000141013c4f) */
/* WARNING: Removing unreachable block (ram,0x000141013c64) */
/* WARNING: Removing unreachable block (ram,0x000141013cc8) */
/* WARNING: Removing unreachable block (ram,0x000141013ccc) */
/* WARNING: Removing unreachable block (ram,0x000141013cd1) */
/* WARNING: Removing unreachable block (ram,0x000141013cd5) */
/* WARNING: Removing unreachable block (ram,0x000141013cda) */
/* WARNING: Removing unreachable block (ram,0x000141013ced) */
/* WARNING: Removing unreachable block (ram,0x000141013cf2) */
/* WARNING: Removing unreachable block (ram,0x000141013cf7) */
/* WARNING: Removing unreachable block (ram,0x000141013cfc) */
/* WARNING: Removing unreachable block (ram,0x000141013d06) */
/* WARNING: Removing unreachable block (ram,0x000141013d0a) */
/* WARNING: Removing unreachable block (ram,0x000141013d0e) */
/* WARNING: Removing unreachable block (ram,0x000141013d12) */
/* WARNING: Removing unreachable block (ram,0x000141013d20) */
/* WARNING: Removing unreachable block (ram,0x000141013d2b) */
/* WARNING: Removing unreachable block (ram,0x000141013d44) */
/* WARNING: Removing unreachable block (ram,0x000141013d4e) */
/* WARNING: Removing unreachable block (ram,0x000141013d5c) */
/* WARNING: Removing unreachable block (ram,0x000141013d70) */
/* WARNING: Removing unreachable block (ram,0x000141013d74) */
/* WARNING: Removing unreachable block (ram,0x000141013e03) */
/* WARNING: Removing unreachable block (ram,0x000141013f57) */
/* WARNING: Removing unreachable block (ram,0x000141013f72) */
/* WARNING: Removing unreachable block (ram,0x000141013f86) */
/* WARNING: Removing unreachable block (ram,0x000141013f8c) */
/* WARNING: Removing unreachable block (ram,0x000141013e20) */
/* WARNING: Removing unreachable block (ram,0x000141013f9a) */
/* WARNING: Removing unreachable block (ram,0x000141013d7d) */
/* WARNING: Removing unreachable block (ram,0x000141013d7f) */
/* WARNING: Removing unreachable block (ram,0x000141013d84) */
/* WARNING: Removing unreachable block (ram,0x000141013d8a) */
/* WARNING: Removing unreachable block (ram,0x000141013dac) */
/* WARNING: Removing unreachable block (ram,0x000141013db9) */
/* WARNING: Removing unreachable block (ram,0x000141013dbb) */
/* WARNING: Removing unreachable block (ram,0x000141013dbf) */
/* WARNING: Removing unreachable block (ram,0x000141013dc5) */
/* WARNING: Removing unreachable block (ram,0x000141013e2c) */
/* WARNING: Removing unreachable block (ram,0x000141013e56) */
/* WARNING: Removing unreachable block (ram,0x000141013e60) */
/* WARNING: Removing unreachable block (ram,0x000141013e7f) */
/* WARNING: Removing unreachable block (ram,0x000141013e8a) */
/* WARNING: Removing unreachable block (ram,0x000141013ed1) */
/* WARNING: Removing unreachable block (ram,0x000141013ed7) */
/* WARNING: Removing unreachable block (ram,0x000141013ef9) */
/* WARNING: Removing unreachable block (ram,0x000141013f03) */
/* WARNING: Removing unreachable block (ram,0x000141013f0c) */
/* WARNING: Removing unreachable block (ram,0x000141013f2e) */
/* WARNING: Removing unreachable block (ram,0x000141013f34) */
/* WARNING: Removing unreachable block (ram,0x000141013f42) */
/* WARNING: Removing unreachable block (ram,0x000141013f4b) */
/* WARNING: Removing unreachable block (ram,0x000141013dd5) */
/* WARNING: Removing unreachable block (ram,0x000141013ddc) */
/* WARNING: Removing unreachable block (ram,0x000141013deb) */
/* WARNING: Removing unreachable block (ram,0x000141013df4) */
/* WARNING: Removing unreachable block (ram,0x000141013dfe) */
/* WARNING: Removing unreachable block (ram,0x000141013fb1) */
/* WARNING: Removing unreachable block (ram,0x000141014aaf) */

longlong *
FUN_14101246a(longlong *param_1,longlong *param_2,longlong param_3,byte param_4,longlong *param_5,
             longlong param_6,undefined4 param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  char unaff_00089100;
  longlong *unaff_0008f000;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int iVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  char *pcVar23;
  byte *pbVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong *unaff_RBX;
  undefined6 uVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  longlong *unaff_RBP;
  longlong lVar31;
  longlong *unaff_RDI;
  longlong *plVar32;
  longlong *plVar33;
  uint uVar34;
  float *pfVar35;
  longlong *in_R11;
  longlong unaff_R12;
  longlong *unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  bool bVar36;
  bool bVar37;
  float10 in_ST0;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  ulonglong in_stack_00000520;
  longlong *in_stack_00000638;
  undefined8 in_stack_00000648;
  undefined1 auStack_2a4f [72];
  char acStack_2a07 [10183];
  undefined1 *puStack_240;
  longlong lStack_218;
  undefined1 auStack_208 [8];
  int iStack_200;
  undefined1 auStack_1f8 [16];
  longlong *local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  float local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_c0;
  
  puVar29 = auStack_208;
  puVar30 = auStack_208;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar31 = *(longlong *)(param_3 + 0x38);
  fVar45 = *(float *)(lVar31 + 0xb4);
  fVar40 = *(float *)(lVar31 + 0xb8);
  fVar38 = *(float *)(lVar31 + 0xbc);
  fVar39 = *(float *)(lVar31 + 0xc0);
  fVar54 = *(float *)(lVar31 + 0xc4);
  fVar41 = *(float *)(lVar31 + 200);
  fVar49 = *(float *)(param_1 + 0x1a);
  fVar51 = *(float *)((longlong)param_1 + 0xd4);
  local_1c0 = CONCAT44(fVar49,fVar51);
  fVar42 = *(float *)(lVar31 + 0x98);
  fVar48 = *(float *)(lVar31 + 0x9c);
  lVar31 = *(longlong *)(param_6 + 0x38);
  fVar46 = *(float *)(lVar31 + 0xb4);
  fVar44 = *(float *)(lVar31 + 0xb8);
  fVar43 = *(float *)(lVar31 + 0xbc);
  fVar47 = *(float *)(lVar31 + 0xc0);
  fVar2 = *(float *)(lVar31 + 0xc4);
  local_1b8 = CONCAT44(fVar43,fVar2);
  fVar3 = *(float *)(lVar31 + 200);
  local_1b0 = (undefined8 *)CONCAT44(fVar3,fVar46);
  fVar4 = *(float *)(lVar31 + 0x98);
  fVar5 = *(float *)(lVar31 + 0x9c);
  *param_2 = 0;
  param_2[1] = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  if (3 < param_4) goto LAB_141012950;
  fVar52 = fVar38 * 0.0 + fVar39;
  fVar38 = fVar39 * 0.0 + fVar38;
  fVar39 = fVar45 * 0.0 + fVar40;
  fVar45 = fVar40 * 0.0 + fVar45;
  fVar40 = fVar39 * 0.0;
  fVar50 = fVar52 * fVar48 + fVar40;
  fVar52 = fVar52 * 0.0;
  fVar53 = fVar52 + fVar40 + ((fVar54 * 0.0 + fVar41) - fVar51);
  fVar40 = fVar45 * 0.0;
  fVar48 = fVar48 * fVar38 + fVar40;
  fVar38 = fVar38 * 0.0;
  fVar40 = fVar38 + fVar40 + ((fVar41 * 0.0 + fVar54) - fVar49);
  fVar54 = fVar42 * fVar39 + fVar52 + fVar53;
  fVar41 = fVar50 + fVar53;
  fVar50 = fVar50 + fVar54;
  fVar39 = fVar54;
  if (fVar54 <= fVar41) {
    fVar39 = fVar41;
  }
  if (fVar39 <= fVar50) {
    fVar39 = fVar50;
  }
  fVar52 = fVar53;
  if (fVar53 <= fVar39) {
    fVar52 = fVar39;
  }
  local_1c4 = fVar52;
  fVar45 = fVar42 * fVar45 + fVar38 + fVar40;
  fVar39 = fVar48 + fVar40;
  fVar48 = fVar48 + fVar45;
  fVar38 = fVar45;
  if (fVar45 <= fVar39) {
    fVar38 = fVar39;
  }
  if (fVar38 <= fVar48) {
    fVar38 = fVar48;
  }
  fVar42 = fVar40;
  if (fVar40 <= fVar38) {
    fVar42 = fVar38;
  }
  if (fVar41 <= fVar54) {
    fVar54 = fVar41;
  }
  if (fVar50 <= fVar54) {
    fVar54 = fVar50;
  }
  if (fVar54 <= fVar53) {
    fVar53 = fVar54;
  }
  if (fVar39 <= fVar45) {
    fVar45 = fVar39;
  }
  if (fVar48 <= fVar45) {
    fVar45 = fVar48;
  }
  if (fVar45 <= fVar40) {
    fVar40 = fVar45;
  }
  fVar38 = fVar43 * 0.0 + fVar47;
  fVar43 = fVar47 * 0.0 + fVar43;
  fVar39 = fVar46 * 0.0 + fVar44;
  fVar46 = fVar44 * 0.0 + fVar46;
  fVar54 = fVar39 * 0.0;
  fVar48 = fVar38 * fVar5 + fVar54;
  fVar45 = fVar46 * 0.0;
  fVar44 = fVar5 * fVar43 + fVar45;
  fVar38 = fVar38 * 0.0;
  fVar43 = fVar43 * 0.0;
  fVar54 = fVar38 + fVar54 + ((fVar2 * 0.0 + fVar3) - fVar51);
  fVar45 = fVar43 + fVar45 + ((fVar3 * 0.0 + fVar2) - fVar49);
  fVar41 = fVar4 * fVar39 + fVar38 + fVar54;
  fVar38 = fVar4 * fVar46 + fVar43 + fVar45;
  fVar49 = fVar48 + fVar54;
  fVar51 = fVar44 + fVar45;
  fVar48 = fVar48 + fVar41;
  fVar44 = fVar44 + fVar38;
  fVar39 = fVar41;
  if (fVar41 <= fVar49) {
    fVar39 = fVar49;
  }
  if (fVar39 <= fVar48) {
    fVar39 = fVar48;
  }
  fVar46 = fVar54;
  if (fVar54 <= fVar39) {
    fVar46 = fVar39;
  }
  fVar39 = fVar38;
  if (fVar38 <= fVar51) {
    fVar39 = fVar51;
  }
  if (fVar39 <= fVar44) {
    fVar39 = fVar44;
  }
  fVar43 = fVar45;
  if (fVar45 <= fVar39) {
    fVar43 = fVar39;
  }
  if (fVar49 <= fVar41) {
    fVar41 = fVar49;
  }
  if (fVar48 <= fVar41) {
    fVar41 = fVar48;
  }
  if (fVar41 <= fVar54) {
    fVar54 = fVar41;
  }
  if (fVar51 <= fVar38) {
    fVar38 = fVar51;
  }
  if (fVar44 <= fVar38) {
    fVar38 = fVar44;
  }
  if (fVar38 <= fVar45) {
    fVar45 = fVar38;
  }
  plVar33 = (longlong *)
            ((longlong)&switchD_14101286c::caseD_18 +
            (longlong)(int)(&switchD_14101286c::caseD_18)[param_4]);
  uVar28 = (undefined6)((ulonglong)unaff_RBX >> 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_4) {
  case 0:
    local_134 = fVar53 + 0.5;
    local_12c = fVar52 + -0.5;
    local_148 = CONCAT44(fVar53,fVar40);
    local_140 = (longlong *)CONCAT44(fVar52,fVar42);
    local_1d8 = &local_118;
    local_1e0 = param_7;
    local_1e8 = param_5;
    local_138 = fVar45;
    local_130 = fVar43;
    FUN_1410143c2(fVar40,&local_128);
    break;
  case 1:
    _local_158 = CONCAT44(fVar53 + 0.5,fVar45);
    _local_150 = CONCAT44(fVar52 + -0.5,fVar43);
    local_168 = CONCAT44(fVar53,fVar40);
    local_160 = CONCAT44(fVar52,fVar42);
    local_1d8 = &local_118;
    local_1e0 = param_7;
    local_1e8 = param_5;
    FUN_141014e30(fVar40,&local_128);
    break;
  case 2:
    local_178 = fVar40 + 0.5;
    local_170 = fVar42 + -0.5;
    local_1d8 = &local_118;
    local_1e0 = param_7;
    local_1e8 = param_5;
    local_188 = fVar40;
    local_184 = fVar53;
    local_180 = fVar42;
    local_17c = fVar52;
    local_174 = fVar54;
    local_16c = fVar46;
    FUN_141012dc0(fVar52,&local_128);
    break;
  case 3:
    local_198 = fVar40 + 0.5;
    _local_190 = CONCAT44(fVar46,fVar42 + -0.5);
    local_1a8 = (float *)CONCAT44(fVar53,fVar40);
    local_1d8 = &local_118;
    local_1e0 = param_7;
    local_1e8 = param_5;
    local_1a0 = fVar42;
    local_19c = fVar52;
    local_194 = fVar54;
    FUN_1410138ca(fVar52,&local_128);
    break;
  case 4:
    pcVar23 = (char *)((longlong)&local_1c0 + 1 + (longlong)unaff_RBP);
    *pcVar23 = *pcVar23 + (char)((uint)param_7 >> 8);
code_r0x000141014c18:
    plVar33 = (longlong *)unaff_R15[4];
LAB_141014c46:
    (**(code **)(*plVar33 + 0x58))(plVar33,unaff_RBX,0);
LAB_141014c52:
    unaff_RDI = (longlong *)&DAT_00000001;
    unaff_R13 = (longlong *)((ulonglong)param_2 & 0xffffffff);
LAB_141014c5a:
    do {
      plVar33 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar32 = local_140 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      if ((int)unaff_RDI != 0) {
        if ((int)unaff_RDI != 3) goto LAB_141014d8a;
LAB_141014d84:
        *unaff_RBX = 0;
        unaff_RBX[1] = 0;
LAB_141014d8a:
        if ((in_stack_00000520 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return unaff_RBX;
      }
      iVar19 = (int)unaff_R13;
      if ((iVar19 < 0) || (*(int *)(local_1b8 + 0xc0) <= iVar19)) goto LAB_141014d84;
      local_148 = 0;
      local_140 = (longlong *)0x0;
      fVar45 = local_194;
      fVar40 = (float)(iVar19 - 1U);
      if ((uint)local_194 < (uint)local_1a0) {
LAB_141014b59:
        param_2 = (longlong *)(ulonglong)(uint)fVar40;
        bVar36 = (int)unaff_RBP == iVar19;
        uVar25 = (ulonglong)CONCAT31((int3)((uint)fVar45 >> 8),bVar36);
        unaff_RDI = (longlong *)&DAT_00000003;
        if (((byte)local_1b0 & bVar36) != 0) {
LAB_141014b6d:
          local_1b0 = (undefined8 *)CONCAT71((int7)(uVar25 >> 8),1);
          unaff_R13 = param_2;
          goto LAB_141014c5a;
        }
        if ((iVar19 == 0) || (*(int *)(local_1b8 + 0xc0) < iVar19)) {
          if ((char)unaff_R15[6] == '\x05') {
            if (((longlong *)unaff_R15[4] != (longlong *)0x0 && (int)unaff_R15[5] != 0) &&
               (cVar18 = (**(code **)(*(longlong *)unaff_R15[4] + 0x30))(), cVar18 != '\0'))
            goto LAB_141014c11;
          }
          else if ((char)unaff_R15[6] == '\x02') {
            uVar25 = 0;
            if (((ulonglong)local_1b0 & 1) == 0) {
              uVar21 = *(int *)(local_1b8 + 0xc0) - 1;
              uVar25 = (ulonglong)uVar21;
              uVar34 = (int)ROUND(local_1a8[2] / DAT_14c96b0b8 + local_1a8[2] / DAT_14c96b0b8 + -0.5
                                 ) >> 1;
              unaff_RDI = (longlong *)0x0;
              if ((int)uVar34 < 1) {
                uVar34 = 0;
              }
              if ((int)uVar21 <= (int)uVar34) {
                uVar34 = uVar21;
              }
              param_2 = (longlong *)(ulonglong)uVar34;
            }
            goto LAB_141014b6d;
          }
        }
        unaff_RDI = (longlong *)0x0;
        unaff_R13 = param_2;
        goto LAB_141014c5a;
      }
      local_1c4 = -1.0;
      fVar40 = local_1a0;
      local_198 = (float)(iVar19 - 1U);
      do {
        FUN_1402b2af8(local_1b8);
        fVar45 = (float)((int)fVar40 + 1);
        bVar36 = fVar40 != (float)unaff_R14;
        fVar40 = fVar45;
      } while (bVar36);
      unaff_RBX = (longlong *)CONCAT44(local_17c,local_180);
      unaff_RBP = (longlong *)(ulonglong)(uint)local_19c;
      unaff_R15 = in_stack_00000638;
      fVar40 = local_198;
      if (local_148 == 0) goto LAB_141014b59;
      if ((local_1c4 + -0.1 < *local_1a8) &&
         (param_5 = (longlong *)(ulonglong)(*(byte *)(in_stack_00000638 + 6) - 1),
         *(byte *)(in_stack_00000638 + 6) - 1 < 5)) goto switchD_14101286c_caseD_7;
      unaff_R13 = (longlong *)(ulonglong)(uint)local_198;
      cVar18 = FUN_146948272();
      if (cVar18 != '\0') {
        *unaff_RBX = local_148;
        unaff_RBX[1] = (longlong)local_140;
        goto LAB_141014d8a;
      }
      FUN_1469525d2(in_stack_00000648);
      local_168 = *(undefined8 *)local_1a8;
      local_160 = *(undefined8 *)(local_1a8 + 2);
      pfVar35 = (float *)CONCAT44(local_184,local_188);
      local_178 = *pfVar35;
      local_174 = pfVar35[1];
      local_170 = pfVar35[2];
      local_16c = pfVar35[3];
      FUN_1410143c2(local_1b8,unaff_RBX,&local_178,&local_168);
      unaff_RDI = (longlong *)&DAT_00000001;
    } while( true );
  case 5:
    *(int *)((longlong)unaff_RDI + 1) = *(int *)((longlong)unaff_RDI + 1) + 1;
    goto LAB_141014c5a;
  case 6:
    if ((plVar33 == (longlong *)0x0) && (cVar18 = (**(code **)(*param_1 + 0x30))(), cVar18 != '\0'))
    goto LAB_141014c11;
    *unaff_RBX = 0;
    unaff_RBX[1] = 0;
    goto LAB_141014c52;
  default:
switchD_14101286c_caseD_7:
                    /* WARNING: Could not recover jumptable at 0x000141014b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar33 = (longlong *)
              (*(code *)((longlong)&switchD_141014b28::switchdataD_149eda778 +
                        (longlong)
                        (int)(&switchD_141014b28::switchdataD_149eda778)[(longlong)param_5]))();
    return plVar33;
  case 9:
    unaff_RBX = (longlong *)((ulonglong)unaff_RBX & 0xffffffffffffff00);
    puVar30 = auStack_1f8;
    uVar25 = (ulonglong)(iStack_200 + 0x896ce62);
code_r0x000141015614:
    fVar46 = **(float **)(puVar30 + 0x60);
    uVar21 = (int)uVar25 - 1;
    uVar25 = (ulonglong)uVar21;
    uVar34 = (int)ROUND(fVar46 / DAT_14c96b0b8 + fVar46 / DAT_14c96b0b8 + -0.5) >> 1;
    iVar19 = 0;
    if ((int)uVar34 < 1) {
      uVar34 = 0;
    }
    if ((int)uVar21 <= (int)uVar34) {
      uVar34 = uVar21;
    }
    param_2 = (longlong *)(ulonglong)uVar34;
LAB_1410155db:
    *(ulonglong *)(puVar30 + 0x58) = CONCAT71((int7)(uVar25 >> 8),1);
LAB_1410156b9:
    do {
      plVar33 = *(longlong **)(puVar30 + 200);
      if (plVar33 != (longlong *)0x0) {
        LOCK();
        plVar32 = plVar33 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          pcVar9 = *(code **)*plVar33;
          *(undefined8 *)(puVar30 + -8) = 0x1410156d7;
          (*pcVar9)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            pcVar9 = *(code **)(*plVar33 + 0x10);
            *(undefined8 *)(puVar30 + -8) = 0x1410156e9;
            (*pcVar9)(plVar33);
          }
        }
      }
      if (iVar19 != 0) {
        if (iVar19 != 3) goto LAB_1410157e8;
LAB_1410157e2:
        *unaff_RBX = 0;
        unaff_RBX[1] = 0;
LAB_1410157e8:
        if ((*(ulonglong *)(puVar30 + 0x728) ^ (ulonglong)puVar30) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar30 + -8) = &UNK_141015870;
          FUN_144d8e3a0();
        }
        return unaff_RBX;
      }
      iVar19 = (int)param_2;
      if ((iVar19 < 0) || (*(int *)(*(longlong *)(puVar30 + 0x50) + 0xc0) <= iVar19))
      goto LAB_1410157e2;
      param_2 = (longlong *)(ulonglong)(iVar19 + 1U);
      *(undefined8 *)(puVar30 + 0xc0) = 0;
      *(undefined8 *)(puVar30 + 200) = 0;
      fVar45 = *(float *)(puVar30 + 0x74);
      if ((uint)fVar45 < (uint)*(float *)(puVar30 + 0x68)) {
LAB_1410155c7:
        bVar36 = (int)unaff_RBP == iVar19;
        uVar25 = (ulonglong)CONCAT31((int3)((uint)fVar45 >> 8),bVar36);
        iVar19 = 3;
        if ((puVar30[0x58] & bVar36) != 0) goto LAB_1410155db;
        uVar25 = (ulonglong)*(uint *)(*(longlong *)(puVar30 + 0x50) + 0xc0);
        if ((int)*(uint *)(*(longlong *)(puVar30 + 0x50) + 0xc0) <= (int)param_2) {
          if ((char)unaff_R15[6] == '\x05') {
            if ((longlong *)unaff_R15[4] != (longlong *)0x0 && (int)unaff_R15[5] != 0) {
              pcVar9 = *(code **)(*(longlong *)unaff_R15[4] + 0x30);
              *(undefined8 *)(puVar30 + -8) = 0x14101568b;
              cVar18 = (*pcVar9)();
              if (cVar18 != '\0') {
LAB_14101568f:
                if ((int)unaff_R15[5] == 0) {
                  plVar33 = (longlong *)0x0;
                }
                else {
                  plVar33 = (longlong *)unaff_R15[4];
                }
                pcVar9 = *(code **)(*plVar33 + 0x58);
                *(undefined8 *)(puVar30 + -8) = 0x1410156b1;
                (*pcVar9)(plVar33,unaff_RBX,1);
LAB_1410156b1:
                iVar19 = 1;
                param_2 = (longlong *)((ulonglong)param_2 & 0xffffffff);
                goto LAB_1410156b9;
              }
            }
          }
          else if ((char)unaff_R15[6] == '\x02') goto code_r0x00014101560d;
        }
        iVar19 = 0;
        goto LAB_1410156b9;
      }
      *(uint *)(puVar30 + 0x70) = iVar19 + 1U;
      *(undefined4 *)(puVar30 + 0x44) = 0xbf800000;
      fVar40 = *(float *)(puVar30 + 0x68);
      do {
        *(undefined8 *)(puVar30 + 0x718) = 0;
        *(undefined8 *)(puVar30 + 0x720) = 0x6400000000;
        *(undefined8 *)(puVar30 + -8) = 0x14101505a;
        FUN_1402b2af8(*(undefined8 *)(puVar30 + 0x50));
        lVar31 = (longlong)*(int *)(puVar30 + 0x720);
        if (0 < (longlong)*(int *)(puVar30 + 0x720)) {
          do {
            lVar22 = *(longlong *)(puVar30 + 0x718);
            if (*(longlong *)(puVar30 + 0x718) == 0) {
              lVar22 = unaff_R12;
            }
            lVar26 = (lVar31 + -1) * 0x10;
            lVar6 = *(longlong *)(*(longlong *)(lVar22 + lVar26) + 0x50);
            lVar22 = (longlong)*(int *)(lVar22 + 8 + lVar26) * 0x40;
            plVar33 = *(longlong **)(lVar6 + 8 + lVar22);
            if (plVar33 != (longlong *)0x0) {
              plVar32 = (longlong *)(lVar6 + lVar22);
              iVar20 = (int)plVar33[1];
              do {
                if (iVar20 == 0) goto LAB_141015363;
                LOCK();
                iVar17 = (int)plVar33[1];
                bVar36 = iVar20 == iVar17;
                if (bVar36) {
                  *(int *)(plVar33 + 1) = iVar20 + 1;
                  iVar17 = iVar20;
                }
                iVar20 = iVar17;
                UNLOCK();
              } while (!bVar36);
              plVar7 = (longlong *)*plVar32;
              if ((plVar7 != (longlong *)0x0) &&
                 (((iVar20 = *(int *)((longlong)plVar32 + 0x3c), iVar20 == *(int *)(puVar30 + 0x848)
                   || (*(int *)(puVar30 + 0x848) == -1)) || (iVar20 == -1)))) {
                fVar41 = *(float *)(plVar7 + 0x18) * fVar49 + *(float *)((longlong)plVar7 + 0xbc);
                fVar45 = *(float *)(plVar7 + 0x17) * fVar49 + *(float *)((longlong)plVar7 + 0xb4);
                fVar38 = fVar45 * fVar49;
                fVar54 = fVar41 * *(float *)((longlong)plVar7 + 0x9c) + fVar38;
                fVar41 = fVar41 * fVar49;
                fVar39 = fVar41 + fVar38 +
                         ((*(float *)(plVar7 + 0x19) * fVar49 + *(float *)((longlong)plVar7 + 0xc4))
                         - *(float *)(*(longlong *)(puVar30 + 0x50) + 0xd0));
                fVar38 = *(float *)(plVar7 + 0x13) * fVar45 + fVar41 + fVar39;
                fVar41 = fVar54 + fVar39;
                fVar54 = fVar54 + fVar38;
                fVar45 = fVar38;
                if (fVar41 <= fVar38) {
                  fVar45 = fVar41;
                }
                if (fVar54 <= fVar45) {
                  fVar45 = fVar54;
                }
                fVar51 = fVar39;
                if (fVar45 <= fVar39) {
                  fVar51 = fVar45;
                }
                if (fVar46 < fVar51 + 0.1) {
                  if (fVar38 <= fVar41) {
                    fVar38 = fVar41;
                  }
                  if (fVar38 <= fVar54) {
                    fVar38 = fVar54;
                  }
                  if (fVar39 <= fVar38) {
                    fVar39 = fVar38;
                  }
                  pfVar35 = *(float **)(puVar30 + 0x60);
                  if ((*pfVar35 <= fVar39) && (fVar51 < pfVar35[2] || fVar51 == pfVar35[2])) {
                    fVar38 = *(float *)((longlong)plVar7 + 0xbc) * fVar49 +
                             *(float *)(plVar7 + 0x18);
                    fVar39 = *(float *)((longlong)plVar7 + 0xb4) * fVar49 +
                             *(float *)(plVar7 + 0x17);
                    fVar45 = fVar39 * fVar49;
                    fVar41 = *(float *)((longlong)plVar7 + 0x9c) * fVar38 + fVar45;
                    fVar38 = fVar38 * fVar49;
                    fVar45 = fVar38 + fVar45 +
                             ((*(float *)((longlong)plVar7 + 0xc4) * fVar49 +
                              *(float *)(plVar7 + 0x19)) -
                             *(float *)(*(longlong *)(puVar30 + 0x50) + 0xd4));
                    fVar39 = *(float *)(plVar7 + 0x13) * fVar39 + fVar38 + fVar45;
                    fVar54 = fVar41 + fVar45;
                    fVar41 = fVar41 + fVar39;
                    fVar38 = fVar39;
                    if (fVar39 <= fVar54) {
                      fVar38 = fVar54;
                    }
                    if (fVar38 <= fVar41) {
                      fVar38 = fVar41;
                    }
                    fVar42 = fVar45;
                    if (fVar45 <= fVar38) {
                      fVar42 = fVar38;
                    }
                    if (pfVar35[1] <= fVar42) {
                      if (fVar54 <= fVar39) {
                        fVar39 = fVar54;
                      }
                      if (fVar41 <= fVar39) {
                        fVar39 = fVar41;
                      }
                      if (fVar39 <= fVar45) {
                        fVar45 = fVar39;
                      }
                      if ((fVar45 < pfVar35[3] || fVar45 == pfVar35[3]) &&
                         ((*(longlong *)(puVar30 + 0xc0) == 0 ||
                          (fVar51 < *(float *)(puVar30 + 0x44) + 0.1)))) {
                        if (*(char *)(*(longlong *)(puVar30 + 0x840) + 0x30) != '\0') {
                          lVar22 = **(longlong **)(puVar30 + 0x840);
                          puVar27 = (undefined8 *)(*(longlong **)(puVar30 + 0x840))[1];
                          if (puVar27 != (undefined8 *)0x0) {
                            LOCK();
                            *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
                            UNLOCK();
                          }
                          if (lVar22 == 0) {
                            uVar34 = 0;
                          }
                          else {
                            *(undefined8 **)(puVar30 + 0x38) = puVar27;
                            uVar10 = **(undefined8 **)(puVar30 + 0x840);
                            lVar22 = (*(undefined8 **)(puVar30 + 0x840))[1];
                            if (lVar22 == 0) {
                              *(undefined8 *)(puVar30 + -8) = 0x141015394;
                              uVar34 = FUN_1469481a2(uVar10);
                              uVar34 = uVar34 ^ 1;
                            }
                            else {
                              LOCK();
                              *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
                              UNLOCK();
                              *(longlong *)(puVar30 + 0x78) = lVar22;
                              *(undefined8 *)(puVar30 + -8) = 0x1410154d4;
                              uVar34 = FUN_1469481a2(uVar10);
                              puVar27 = *(undefined8 **)(puVar30 + 0x78);
                              uVar34 = uVar34 ^ 1;
                              LOCK();
                              piVar1 = (int *)(puVar27 + 1);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                *(uint *)(puVar30 + 0x48) = uVar34;
                                pcVar9 = *(code **)*puVar27;
                                *(undefined8 *)(puVar30 + -8) = 0x1410154ea;
                                (*pcVar9)();
                                plVar32 = *(longlong **)(puVar30 + 0x78);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar32 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (*piVar1 == 0) {
                                  pcVar9 = *(code **)(*plVar32 + 0x10);
                                  *(undefined8 *)(puVar30 + -8) = 0x1410154fb;
                                  (*pcVar9)();
                                }
                                puVar27 = *(undefined8 **)(puVar30 + 0x38);
                                uVar34 = *(uint *)(puVar30 + 0x48);
                                goto LAB_1410152ee;
                              }
                            }
                            puVar27 = *(undefined8 **)(puVar30 + 0x38);
                          }
LAB_1410152ee:
                          if (puVar27 == (undefined8 *)0x0) {
LAB_14101532a:
                            cVar18 = (char)uVar34;
                          }
                          else {
                            LOCK();
                            piVar1 = (int *)(puVar27 + 1);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 != 0) goto LAB_14101532a;
                            *(uint *)(puVar30 + 0x48) = uVar34;
                            puVar8 = (undefined8 *)*puVar27;
                            *(undefined8 **)(puVar30 + 0x38) = puVar27;
                            pcVar9 = (code *)*puVar8;
                            *(undefined8 *)(puVar30 + -8) = 0x14101530c;
                            (*pcVar9)(*(undefined8 *)(puVar30 + 0x38));
                            uVar34 = *(uint *)(puVar30 + 0x48);
                            plVar32 = *(longlong **)(puVar30 + 0x38);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar32 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 != 0) goto LAB_14101532a;
                            pcVar9 = *(code **)(*plVar32 + 0x10);
                            *(undefined8 *)(puVar30 + -8) = 0x141015321;
                            (*pcVar9)();
                            cVar18 = puVar30[0x48];
                          }
                          if (cVar18 != '\0') goto LAB_141015344;
                        }
                        if (*(char *)((longlong)plVar7 + 0x3a) == '\x01') {
                          pcVar9 = *(code **)(*plVar7 + 400);
                          *(undefined8 *)(puVar30 + -8) = 0x141015340;
                          cVar18 = (*pcVar9)(plVar7);
                          if (cVar18 != '\0') {
                            *(longlong **)(puVar30 + 0xb0) = plVar7;
                            *(longlong **)(puVar30 + 0xb8) = plVar33;
                            LOCK();
                            *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                            UNLOCK();
                            uVar25 = *(ulonglong *)(puVar30 + 0xb0);
                            puVar27 = *(undefined8 **)(puVar30 + 0xb8);
                            if (puVar27 != (undefined8 *)0x0) {
                              LOCK();
                              *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
                              UNLOCK();
                              LOCK();
                              piVar1 = (int *)(puVar27 + 1);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                puVar8 = (undefined8 *)*puVar27;
                                *(ulonglong *)(puVar30 + 0x38) = uVar25;
                                *(undefined8 **)(puVar30 + 0x48) = puVar27;
                                pcVar9 = (code *)*puVar8;
                                *(undefined8 *)(puVar30 + -8) = 0x1410153de;
                                (*pcVar9)();
                                plVar32 = *(longlong **)(puVar30 + 0x48);
                                uVar25 = *(ulonglong *)(puVar30 + 0x38);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar32 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (*piVar1 == 0) {
                                  pcVar9 = *(code **)(*plVar32 + 0x10);
                                  *(undefined8 *)(puVar30 + -8) = 0x1410153f4;
                                  (*pcVar9)();
                                  uVar25 = *(ulonglong *)(puVar30 + 0x38);
                                }
                              }
                            }
                            uVar34 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) *
                                     -0x7a143595;
                            uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                            *(undefined8 *)(puVar30 + -8) = 0x141015433;
                            iVar20 = FUN_1469524ee(*(undefined8 *)(puVar30 + 0x850),
                                                   uVar34 >> 0x10 ^ uVar34,puVar30 + 0xb0);
                            puVar27 = *(undefined8 **)(puVar30 + 0xb8);
                            if (puVar27 != (undefined8 *)0x0) {
                              LOCK();
                              piVar1 = (int *)(puVar27 + 1);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                *(int *)(puVar30 + 0x48) = iVar20;
                                puVar8 = (undefined8 *)*puVar27;
                                *(undefined8 **)(puVar30 + 0x38) = puVar27;
                                pcVar9 = (code *)*puVar8;
                                *(undefined8 *)(puVar30 + -8) = 0x141015459;
                                (*pcVar9)(*(undefined8 *)(puVar30 + 0x38));
                                plVar32 = *(longlong **)(puVar30 + 0x38);
                                iVar20 = *(int *)(puVar30 + 0x48);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar32 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (*piVar1 == 0) {
                                  pcVar9 = *(code **)(*plVar32 + 0x10);
                                  *(undefined8 *)(puVar30 + -8) = 0x14101546e;
                                  (*pcVar9)();
                                  iVar20 = *(int *)(puVar30 + 0x48);
                                }
                              }
                            }
                            if (iVar20 == -1) {
                              LOCK();
                              *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                              UNLOCK();
                              plVar32 = *(longlong **)(puVar30 + 200);
                              *(longlong **)(puVar30 + 0xc0) = plVar7;
                              *(longlong **)(puVar30 + 200) = plVar33;
                              if (plVar32 != (longlong *)0x0) {
                                LOCK();
                                plVar7 = plVar32 + 1;
                                *(int *)plVar7 = (int)*plVar7 + -1;
                                UNLOCK();
                                if ((int)*plVar7 == 0) {
                                  pcVar9 = *(code **)*plVar32;
                                  *(undefined8 *)(puVar30 + -8) = 0x1410154ab;
                                  (*pcVar9)();
                                  LOCK();
                                  piVar1 = (int *)((longlong)plVar32 + 0xc);
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (*piVar1 == 0) {
                                    pcVar9 = *(code **)(*plVar32 + 0x10);
                                    *(undefined8 *)(puVar30 + -8) = 0x1410154ba;
                                    (*pcVar9)(plVar32);
                                  }
                                }
                              }
                              *(float *)(puVar30 + 0x44) = fVar51;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_141015344:
              LOCK();
              plVar32 = plVar33 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                pcVar9 = *(code **)*plVar33;
                *(undefined8 *)(puVar30 + -8) = 0x141015353;
                (*pcVar9)(plVar33);
                LOCK();
                piVar1 = (int *)((longlong)plVar33 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  pcVar9 = *(code **)(*plVar33 + 0x10);
                  *(undefined8 *)(puVar30 + -8) = 0x141015363;
                  (*pcVar9)(plVar33);
                }
              }
            }
LAB_141015363:
            bVar36 = 1 < lVar31;
            lVar31 = lVar31 + -1;
          } while (bVar36);
        }
        if (*(longlong *)(puVar30 + 0x718) != 0) {
          *(undefined8 *)(puVar30 + -8) = 0x141015525;
          FUN_1400020a8();
        }
        fVar45 = (float)((int)fVar40 + 1);
        bVar36 = fVar40 != (float)unaff_R14;
        fVar40 = fVar45;
      } while (bVar36);
      unaff_RBX = *(longlong **)(puVar30 + 0x88);
      unaff_RBP = (longlong *)(ulonglong)*(uint *)(puVar30 + 0x6c);
      unaff_R15 = *(longlong **)(puVar30 + 0x840);
      uVar34 = *(uint *)(puVar30 + 0x70);
      param_2 = (longlong *)(ulonglong)uVar34;
      if (*(longlong *)(puVar30 + 0xc0) == 0) goto LAB_1410155c7;
      if (*(float *)(*(longlong *)(puVar30 + 0x60) + 8) <= *(float *)(puVar30 + 0x44) + 0.1 &&
          *(float *)(puVar30 + 0x44) + 0.1 != *(float *)(*(longlong *)(puVar30 + 0x60) + 8)) {
        uVar34 = *(byte *)(unaff_R15 + 6) - 1;
        param_5 = (longlong *)(ulonglong)uVar34;
        bVar36 = uVar34 < 4;
        bVar37 = uVar34 == 4;
code_r0x00014101557e:
        uVar34 = (uint)param_2;
        lVar31 = (ulonglong)(byte)(unaff_00089100 - 1) * -8;
        *(longlong **)(puVar30 + lVar31 + -8) = unaff_0008f000;
        puVar30 = puVar30 + lVar31 + -0xf88b;
        unaff_RBP = unaff_0008f000;
        if (bVar36 || bVar37) {
                    /* WARNING: Could not recover jumptable at 0x000141015596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar33 = (longlong *)
                    (*(code *)((longlong)&switchD_141015596::switchdataD_149eda78c +
                              (longlong)
                              (int)(&switchD_141015596::switchdataD_149eda78c)[(longlong)param_5]))
                              ();
          return plVar33;
        }
      }
      *(undefined8 *)(puVar30 + -8) = 0x141015701;
      cVar18 = FUN_146948272();
      param_2 = (longlong *)(ulonglong)uVar34;
      if (cVar18 != '\0') {
        *unaff_RBX = *(longlong *)(puVar30 + 0xc0);
        unaff_RBX[1] = *(longlong *)(puVar30 + 200);
        goto LAB_1410157e8;
      }
code_r0x000141015709:
      uVar10 = *(undefined8 *)(puVar30 + 0x850);
      *(undefined8 *)(puVar30 + -8) = 0x141015727;
      FUN_1469525d2(uVar10);
      uVar16 = (*(undefined8 **)(puVar30 + 0x60))[1];
      *(undefined8 *)(puVar30 + 0xa0) = **(undefined8 **)(puVar30 + 0x60);
      *(undefined8 *)(puVar30 + 0xa8) = uVar16;
      puVar11 = *(undefined4 **)(puVar30 + 0x80);
      uVar12 = puVar11[1];
      uVar13 = puVar11[2];
      uVar14 = puVar11[3];
      *(undefined4 *)(puVar30 + 0x90) = *puVar11;
      *(undefined4 *)(puVar30 + 0x94) = uVar12;
      *(undefined4 *)(puVar30 + 0x98) = uVar13;
      *(undefined4 *)(puVar30 + 0x9c) = uVar14;
      *(undefined8 *)(puVar30 + 0x30) = uVar10;
      *(undefined4 *)(puVar30 + 0x28) = *(undefined4 *)(puVar30 + 0x848);
      *(longlong **)(puVar30 + 0x20) = unaff_R15;
      *(undefined8 *)(puVar30 + -8) = 0x14101577c;
      FUN_141014e30(*(undefined8 *)(puVar30 + 0x50),unaff_RBX,puVar30 + 0x90,puVar30 + 0xa0);
      iVar19 = 1;
    } while( true );
  case 10:
    puVar30 = auStack_208;
    param_2 = unaff_R13;
    goto code_r0x000141015709;
  case 0xb:
    if (((longlong *)unaff_R15[4] != (longlong *)0x0 && (int)unaff_R15[5] != 0) &&
       (cVar18 = (**(code **)(*(longlong *)unaff_R15[4] + 0x30))(), cVar18 != '\0'))
    goto LAB_14101568f;
    *unaff_RBX = 0;
    unaff_RBX[1] = 0;
    puVar30 = auStack_208;
    goto LAB_1410156b1;
  case 0xc:
  case 0xd:
    *(int *)param_1 = (int)*param_1 + 0xf410000;
    bVar36 = false;
    unaff_RBX = (longlong *)CONCAT62(uVar28,(ushort)(byte)unaff_RBX);
    bVar37 = true;
    unaff_00089100 = '\x04';
    puVar30 = &stack0xfffffffffffffdf0;
    unaff_0008f000 = (longlong *)&stack0xfffffffffffffdf0;
    plVar33 = (longlong *)&stack0xfffffffffffffdf0;
    cVar18 = '\x03';
    do {
      unaff_RBP = unaff_RBP + -1;
      plVar33 = plVar33 + -1;
      *plVar33 = *unaff_RBP;
      cVar18 = cVar18 + -1;
      if (cVar18 < '\x01') goto code_r0x00014101557e;
    } while( true );
  case 0xe:
    *(short *)((longlong)param_1 * 5 + -0x3b) = (short)in_ST0;
    puVar29 = auStack_208;
    plVar32 = unaff_RDI;
    unaff_RDI = unaff_R15;
    do {
      pcVar9 = (code *)*param_5;
      *(undefined8 *)(puVar29 + -8) = 0x14101364e;
      (*pcVar9)(param_1);
      LOCK();
      piVar1 = (int *)((longlong)param_2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pcVar9 = *(code **)(*param_2 + 0x10);
        *(undefined8 *)(puVar29 + -8) = 0x141013666;
        (*pcVar9)(param_2);
      }
      do {
        do {
          iVar19 = *(int *)(puVar29 + 0x68);
          if ((int)plVar32 != 0) {
            if ((int)plVar32 != 3) goto LAB_141013822;
LAB_14101381b:
            *unaff_RDI = 0;
            unaff_RDI[1] = 0;
LAB_141013822:
            if ((*(ulonglong *)(puVar29 + 0x728) ^ (ulonglong)puVar29) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar29 + -8) = &UNK_1410138aa;
              FUN_144d8e3a0();
            }
            return unaff_RDI;
          }
          iVar20 = (int)unaff_RBX;
          if ((iVar20 < 0) || (*(int *)(unaff_R14 + 0xc4) <= iVar20)) goto LAB_14101381b;
          param_2 = (longlong *)(ulonglong)(iVar20 - 1U);
          *(undefined8 *)(puVar29 + 0xc0) = 0;
          *(undefined8 *)(puVar29 + 200) = 0;
          fVar45 = *(float *)(puVar29 + 0x74);
          if ((uint)fVar45 < (uint)*(float *)(puVar29 + 0x6c)) {
LAB_14101356e:
            iVar20 = (int)unaff_RBX;
            pcVar23 = (char *)(ulonglong)CONCAT31((int3)((uint)fVar45 >> 8),iVar19 == iVar20);
            plVar32 = (longlong *)&DAT_00000003;
            if ((puVar29[0x50] & iVar19 == iVar20) == 0) {
              unaff_RBX = param_2;
              if ((iVar20 == 0) || (*(int *)(unaff_R14 + 0xc4) < iVar20)) {
                if ((char)unaff_RBP[6] == '\x05') {
                  if ((longlong *)unaff_RBP[4] != (longlong *)0x0 && (int)unaff_RBP[5] != 0) {
                    pcVar9 = *(code **)(*(longlong *)unaff_RBP[4] + 0x30);
                    *(undefined8 *)(puVar29 + -8) = 0x1410136b2;
                    cVar18 = (*pcVar9)();
                    if (cVar18 == '\0') {
                      plVar32 = (longlong *)0x0;
                    }
                    else {
                      if ((int)unaff_RBP[5] == 0) {
                        plVar33 = (longlong *)0x0;
                      }
                      else {
                        plVar33 = (longlong *)unaff_RBP[4];
                      }
                      pcVar9 = *(code **)(*plVar33 + 0x58);
                      *(undefined8 *)(puVar29 + -8) = 0x1410137a7;
                      (*pcVar9)(plVar33,unaff_RDI,2);
                      plVar32 = (longlong *)&DAT_00000001;
                    }
                    goto LAB_14101362a;
                  }
                }
                else if ((char)unaff_RBP[6] == '\x02') {
                  pcVar23 = (char *)0x0;
                  if ((puVar29[0x50] & 1) == 0) {
                    fVar40 = *(float *)(*(longlong *)(puVar29 + 0x58) + 0xc);
                    pcVar23 = (char *)(ulonglong)(*(int *)(unaff_R14 + 0xc4) - 1);
                    plVar33 = unaff_RBP;
                    in_R11 = unaff_RDI;
                    fVar46 = fVar40;
code_r0x0001410135cc:
                    uVar34 = (int)ROUND(fVar40 / DAT_14c96b0bc + fVar40 / DAT_14c96b0bc + -0.5) >> 1
                    ;
                    plVar32 = (longlong *)0x0;
                    if ((int)uVar34 < 1) {
                      uVar34 = 0;
                    }
                    param_2 = (longlong *)(ulonglong)uVar34;
                    unaff_RBP = plVar33;
                    unaff_RDI = in_R11;
                    if ((int)pcVar23 <= (int)uVar34) {
                      param_2 = (longlong *)((ulonglong)pcVar23 & 0xffffffff);
                    }
                  }
                  goto LAB_141013582;
                }
              }
              plVar32 = (longlong *)0x0;
            }
            else {
LAB_141013582:
              *(ulonglong *)(puVar29 + 0x50) = CONCAT71((int7)((ulonglong)pcVar23 >> 8),1);
              unaff_RBX = param_2;
            }
          }
          else {
            *(uint *)(puVar29 + 0x70) = iVar20 - 1U;
            *(undefined4 *)(puVar29 + 0x44) = 0xbf800000;
            *(longlong **)(puVar29 + 0x60) = unaff_RBX;
            fVar40 = *(float *)(puVar29 + 0x6c);
            do {
              *(undefined8 *)(puVar29 + 0x718) = 0;
              *(undefined8 *)(puVar29 + 0x720) = 0x6400000000;
              *(undefined8 *)(puVar29 + -8) = 0x141012fe9;
              FUN_1402b2af8();
              lVar31 = (longlong)*(int *)(puVar29 + 0x720);
              if (0 < (longlong)*(int *)(puVar29 + 0x720)) {
                do {
                  lVar22 = *(longlong *)(puVar29 + 0x718);
                  if (*(longlong *)(puVar29 + 0x718) == 0) {
                    lVar22 = unaff_R12;
                  }
                  lVar26 = (lVar31 + -1) * 0x10;
                  lVar6 = *(longlong *)(*(longlong *)(lVar22 + lVar26) + 0x50);
                  lVar22 = (longlong)*(int *)(lVar22 + 8 + lVar26) * 0x40;
                  plVar33 = *(longlong **)(lVar6 + 8 + lVar22);
                  if (plVar33 != (longlong *)0x0) {
                    plVar32 = (longlong *)(lVar6 + lVar22);
                    iVar19 = (int)plVar33[1];
                    do {
                      if (iVar19 == 0) goto LAB_1410132e7;
                      LOCK();
                      iVar20 = (int)plVar33[1];
                      bVar36 = iVar19 == iVar20;
                      if (bVar36) {
                        *(int *)(plVar33 + 1) = iVar19 + 1;
                        iVar20 = iVar19;
                      }
                      iVar19 = iVar20;
                      UNLOCK();
                    } while (!bVar36);
                    plVar7 = (longlong *)*plVar32;
                    if ((plVar7 != (longlong *)0x0) &&
                       (((iVar19 = *(int *)((longlong)plVar32 + 0x3c),
                         iVar19 == *(int *)(puVar29 + 0x848) || (*(int *)(puVar29 + 0x848) == -1))
                        || (iVar19 == -1)))) {
                      fVar38 = *(float *)((longlong)plVar7 + 0xbc) * fVar49 +
                               *(float *)(plVar7 + 0x18);
                      fVar39 = *(float *)((longlong)plVar7 + 0xb4) * fVar49 +
                               *(float *)(plVar7 + 0x17);
                      fVar45 = fVar39 * fVar49;
                      fVar54 = fVar38 * *(float *)((longlong)plVar7 + 0x9c) + fVar45;
                      fVar38 = fVar38 * fVar49;
                      fVar45 = fVar38 + fVar45 +
                               ((*(float *)((longlong)plVar7 + 0xc4) * fVar49 +
                                *(float *)(plVar7 + 0x19)) - *(float *)(unaff_R14 + 0xd4));
                      fVar39 = *(float *)(plVar7 + 0x13) * fVar39 + fVar38 + fVar45;
                      fVar41 = fVar54 + fVar45;
                      fVar54 = fVar54 + fVar39;
                      fVar38 = fVar39;
                      if (fVar39 <= fVar41) {
                        fVar38 = fVar41;
                      }
                      if (fVar38 <= fVar54) {
                        fVar38 = fVar54;
                      }
                      fVar51 = fVar45;
                      if (fVar45 <= fVar38) {
                        fVar51 = fVar38;
                      }
                      if (fVar51 + -0.1 < fVar46) {
                        fVar42 = *(float *)((longlong)plVar7 + 0xbc) +
                                 *(float *)(plVar7 + 0x18) * fVar49;
                        fVar48 = *(float *)((longlong)plVar7 + 0xb4) +
                                 *(float *)(plVar7 + 0x17) * fVar49;
                        fVar38 = fVar48 * fVar49;
                        fVar43 = *(float *)((longlong)plVar7 + 0x9c) * fVar42 + fVar38;
                        fVar42 = fVar42 * fVar49;
                        fVar38 = fVar42 + fVar38 +
                                 ((*(float *)((longlong)plVar7 + 0xc4) +
                                  *(float *)(plVar7 + 0x19) * fVar49) - *(float *)(unaff_R14 + 0xd0)
                                 );
                        fVar48 = *(float *)(plVar7 + 0x13) * fVar48 + fVar42 + fVar38;
                        fVar44 = fVar43 + fVar38;
                        fVar43 = fVar43 + fVar48;
                        fVar42 = fVar48;
                        if (fVar48 <= fVar44) {
                          fVar42 = fVar44;
                        }
                        if (fVar42 <= fVar43) {
                          fVar42 = fVar43;
                        }
                        fVar47 = fVar38;
                        if (fVar38 <= fVar42) {
                          fVar47 = fVar42;
                        }
                        pfVar35 = *(float **)(puVar29 + 0x58);
                        if (*pfVar35 <= fVar47) {
                          if (fVar44 <= fVar48) {
                            fVar48 = fVar44;
                          }
                          if (fVar43 <= fVar48) {
                            fVar48 = fVar43;
                          }
                          if (fVar48 <= fVar38) {
                            fVar38 = fVar48;
                          }
                          if ((fVar38 < pfVar35[2] || fVar38 == pfVar35[2]) &&
                             (pfVar35[1] <= fVar51)) {
                            if (fVar41 <= fVar39) {
                              fVar39 = fVar41;
                            }
                            if (fVar54 <= fVar39) {
                              fVar39 = fVar54;
                            }
                            if (fVar39 <= fVar45) {
                              fVar45 = fVar39;
                            }
                            if ((fVar45 < pfVar35[3] || fVar45 == pfVar35[3]) &&
                               ((*(longlong *)(puVar29 + 0xc0) == 0 ||
                                (*(float *)(puVar29 + 0x44) + -0.1 < fVar51)))) {
                              if (*(char *)(*(longlong *)(puVar29 + 0x840) + 0x30) != '\0') {
                                lVar22 = **(longlong **)(puVar29 + 0x840);
                                puVar27 = (undefined8 *)(*(longlong **)(puVar29 + 0x840))[1];
                                if (puVar27 != (undefined8 *)0x0) {
                                  LOCK();
                                  *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
                                  UNLOCK();
                                }
                                if (lVar22 == 0) {
                                  uVar34 = 0;
                                }
                                else {
                                  *(undefined8 **)(puVar29 + 0x38) = puVar27;
                                  uVar10 = **(undefined8 **)(puVar29 + 0x840);
                                  lVar22 = (*(undefined8 **)(puVar29 + 0x840))[1];
                                  if (lVar22 == 0) {
                                    *(undefined8 *)(puVar29 + -8) = 0x141013318;
                                    uVar34 = FUN_1469481a2(uVar10);
                                    uVar34 = uVar34 ^ 1;
                                  }
                                  else {
                                    LOCK();
                                    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
                                    UNLOCK();
                                    *(longlong *)(puVar29 + 0x78) = lVar22;
                                    *(undefined8 *)(puVar29 + -8) = 0x141013458;
                                    uVar34 = FUN_1469481a2(uVar10);
                                    puVar27 = *(undefined8 **)(puVar29 + 0x78);
                                    uVar34 = uVar34 ^ 1;
                                    LOCK();
                                    piVar1 = (int *)(puVar27 + 1);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      *(uint *)(puVar29 + 0x48) = uVar34;
                                      pcVar9 = *(code **)*puVar27;
                                      *(undefined8 *)(puVar29 + -8) = 0x14101346e;
                                      (*pcVar9)();
                                      plVar32 = *(longlong **)(puVar29 + 0x78);
                                      LOCK();
                                      piVar1 = (int *)((longlong)plVar32 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      if (*piVar1 == 0) {
                                        pcVar9 = *(code **)(*plVar32 + 0x10);
                                        *(undefined8 *)(puVar29 + -8) = 0x14101347f;
                                        (*pcVar9)();
                                      }
                                      puVar27 = *(undefined8 **)(puVar29 + 0x38);
                                      uVar34 = *(uint *)(puVar29 + 0x48);
                                      goto LAB_141013272;
                                    }
                                  }
                                  puVar27 = *(undefined8 **)(puVar29 + 0x38);
                                }
LAB_141013272:
                                if (puVar27 == (undefined8 *)0x0) {
LAB_1410132ae:
                                  cVar18 = (char)uVar34;
                                }
                                else {
                                  LOCK();
                                  piVar1 = (int *)(puVar27 + 1);
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (*piVar1 != 0) goto LAB_1410132ae;
                                  *(uint *)(puVar29 + 0x48) = uVar34;
                                  puVar8 = (undefined8 *)*puVar27;
                                  *(undefined8 **)(puVar29 + 0x38) = puVar27;
                                  pcVar9 = (code *)*puVar8;
                                  *(undefined8 *)(puVar29 + -8) = 0x141013290;
                                  (*pcVar9)(*(undefined8 *)(puVar29 + 0x38));
                                  uVar34 = *(uint *)(puVar29 + 0x48);
                                  plVar32 = *(longlong **)(puVar29 + 0x38);
                                  LOCK();
                                  piVar1 = (int *)((longlong)plVar32 + 0xc);
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (*piVar1 != 0) goto LAB_1410132ae;
                                  pcVar9 = *(code **)(*plVar32 + 0x10);
                                  *(undefined8 *)(puVar29 + -8) = 0x1410132a5;
                                  (*pcVar9)();
                                  cVar18 = puVar29[0x48];
                                }
                                if (cVar18 != '\0') goto LAB_1410132c8;
                              }
                              if (*(char *)((longlong)plVar7 + 0x3a) == '\x01') {
                                pcVar9 = *(code **)(*plVar7 + 400);
                                *(undefined8 *)(puVar29 + -8) = 0x1410132c4;
                                cVar18 = (*pcVar9)(plVar7);
                                if (cVar18 != '\0') {
                                  *(longlong **)(puVar29 + 0xb0) = plVar7;
                                  *(longlong **)(puVar29 + 0xb8) = plVar33;
                                  LOCK();
                                  *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                                  UNLOCK();
                                  uVar25 = *(ulonglong *)(puVar29 + 0xb0);
                                  puVar27 = *(undefined8 **)(puVar29 + 0xb8);
                                  if (puVar27 != (undefined8 *)0x0) {
                                    LOCK();
                                    *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
                                    UNLOCK();
                                    LOCK();
                                    piVar1 = (int *)(puVar27 + 1);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      puVar8 = (undefined8 *)*puVar27;
                                      *(ulonglong *)(puVar29 + 0x38) = uVar25;
                                      *(undefined8 **)(puVar29 + 0x48) = puVar27;
                                      pcVar9 = (code *)*puVar8;
                                      *(undefined8 *)(puVar29 + -8) = 0x141013362;
                                      (*pcVar9)();
                                      plVar32 = *(longlong **)(puVar29 + 0x48);
                                      uVar25 = *(ulonglong *)(puVar29 + 0x38);
                                      LOCK();
                                      piVar1 = (int *)((longlong)plVar32 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      if (*piVar1 == 0) {
                                        pcVar9 = *(code **)(*plVar32 + 0x10);
                                        *(undefined8 *)(puVar29 + -8) = 0x141013378;
                                        (*pcVar9)();
                                        uVar25 = *(ulonglong *)(puVar29 + 0x38);
                                      }
                                    }
                                  }
                                  uVar34 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) *
                                           -0x7a143595;
                                  uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                                  *(undefined8 *)(puVar29 + -8) = 0x1410133b7;
                                  iVar19 = FUN_1469524ee(*(undefined8 *)(puVar29 + 0x850),
                                                         uVar34 >> 0x10 ^ uVar34,puVar29 + 0xb0);
                                  puVar27 = *(undefined8 **)(puVar29 + 0xb8);
                                  if (puVar27 != (undefined8 *)0x0) {
                                    LOCK();
                                    piVar1 = (int *)(puVar27 + 1);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      *(int *)(puVar29 + 0x48) = iVar19;
                                      puVar8 = (undefined8 *)*puVar27;
                                      *(undefined8 **)(puVar29 + 0x38) = puVar27;
                                      pcVar9 = (code *)*puVar8;
                                      *(undefined8 *)(puVar29 + -8) = 0x1410133dd;
                                      (*pcVar9)(*(undefined8 *)(puVar29 + 0x38));
                                      plVar32 = *(longlong **)(puVar29 + 0x38);
                                      iVar19 = *(int *)(puVar29 + 0x48);
                                      LOCK();
                                      piVar1 = (int *)((longlong)plVar32 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      if (*piVar1 == 0) {
                                        pcVar9 = *(code **)(*plVar32 + 0x10);
                                        *(undefined8 *)(puVar29 + -8) = 0x1410133f2;
                                        (*pcVar9)();
                                        iVar19 = *(int *)(puVar29 + 0x48);
                                      }
                                    }
                                  }
                                  if (iVar19 == -1) {
                                    LOCK();
                                    *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                                    UNLOCK();
                                    plVar32 = *(longlong **)(puVar29 + 200);
                                    *(longlong **)(puVar29 + 0xc0) = plVar7;
                                    *(longlong **)(puVar29 + 200) = plVar33;
                                    if (plVar32 != (longlong *)0x0) {
                                      LOCK();
                                      plVar7 = plVar32 + 1;
                                      *(int *)plVar7 = (int)*plVar7 + -1;
                                      UNLOCK();
                                      if ((int)*plVar7 == 0) {
                                        pcVar9 = *(code **)*plVar32;
                                        *(undefined8 *)(puVar29 + -8) = 0x14101342f;
                                        (*pcVar9)();
                                        LOCK();
                                        piVar1 = (int *)((longlong)plVar32 + 0xc);
                                        *piVar1 = *piVar1 + -1;
                                        UNLOCK();
                                        if (*piVar1 == 0) {
                                          pcVar9 = *(code **)(*plVar32 + 0x10);
                                          *(undefined8 *)(puVar29 + -8) = 0x14101343e;
                                          (*pcVar9)(plVar32);
                                        }
                                      }
                                    }
                                    *(float *)(puVar29 + 0x44) = fVar51;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
LAB_1410132c8:
                    LOCK();
                    plVar32 = plVar33 + 1;
                    *(int *)plVar32 = (int)*plVar32 + -1;
                    UNLOCK();
                    if ((int)*plVar32 == 0) {
                      pcVar9 = *(code **)*plVar33;
                      *(undefined8 *)(puVar29 + -8) = 0x1410132d7;
                      (*pcVar9)(plVar33);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar33 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        pcVar9 = *(code **)(*plVar33 + 0x10);
                        *(undefined8 *)(puVar29 + -8) = 0x1410132e7;
                        (*pcVar9)(plVar33);
                      }
                    }
                  }
LAB_1410132e7:
                  bVar36 = 1 < lVar31;
                  lVar31 = lVar31 + -1;
                } while (bVar36);
              }
              if (*(longlong *)(puVar29 + 0x718) != 0) {
                *(undefined8 *)(puVar29 + -8) = 0x1410134a9;
                FUN_1400020a8();
              }
              fVar45 = (float)((int)fVar40 + 1);
              bVar36 = fVar40 != SUB84(unaff_R13,0);
              unaff_RBX = *(longlong **)(puVar29 + 0x60);
              fVar40 = fVar45;
            } while (bVar36);
            unaff_RDI = *(longlong **)(puVar29 + 0x88);
            iVar19 = *(int *)(puVar29 + 0x68);
            unaff_RBP = *(longlong **)(puVar29 + 0x840);
            param_2 = (longlong *)(ulonglong)*(uint *)(puVar29 + 0x70);
            if (*(longlong *)(puVar29 + 0xc0) == 0) goto LAB_14101356e;
            fVar40 = *(float *)(*(longlong *)(puVar29 + 0x58) + 4);
            fVar52 = *(float *)(puVar29 + 0x44);
code_r0x0001410134f5:
            if (fVar40 <= fVar52 + -0.1) {
LAB_1410136d1:
              *(ulonglong *)(puVar29 + 0x60) = (ulonglong)param_2 & 0xffffffff;
switchD_141013524_default:
              *(undefined8 *)(puVar29 + -8) = 0x1410136e3;
              cVar18 = FUN_146948272();
              if (cVar18 != '\0') {
                *unaff_RDI = *(longlong *)(puVar29 + 0xc0);
                unaff_RDI[1] = *(longlong *)(puVar29 + 200);
                goto LAB_141013822;
              }
              uVar10 = *(undefined8 *)(puVar29 + 0x850);
              *(undefined8 *)(puVar29 + -8) = 0x141013709;
              FUN_1469525d2(uVar10);
              uVar16 = (*(undefined8 **)(puVar29 + 0x58))[1];
              *(undefined8 *)(puVar29 + 0xa0) = **(undefined8 **)(puVar29 + 0x58);
              *(undefined8 *)(puVar29 + 0xa8) = uVar16;
              puVar11 = *(undefined4 **)(puVar29 + 0x80);
              uVar12 = *puVar11;
              uVar13 = puVar11[1];
              uVar14 = puVar11[2];
              uVar15 = puVar11[3];
              *(undefined4 *)(puVar29 + 0x90) = uVar12;
              *(undefined4 *)(puVar29 + 0x94) = uVar13;
              *(undefined4 *)(puVar29 + 0x98) = uVar14;
              *(undefined4 *)(puVar29 + 0x9c) = uVar15;
              *(undefined8 *)(puVar29 + 0x30) = uVar10;
              *(undefined4 *)(puVar29 + 0x28) = *(undefined4 *)(puVar29 + 0x848);
              *(longlong **)(puVar29 + 0x20) = unaff_RBP;
              *(undefined8 *)(puVar29 + -8) = 0x14101375c;
              FUN_141012dc0(uVar12,unaff_RDI,puVar29 + 0x90,puVar29 + 0xa0);
              plVar32 = (longlong *)&DAT_00000001;
              unaff_RBX = *(longlong **)(puVar29 + 0x60);
            }
            else {
              switch((char)unaff_RBP[6]) {
              case '\x01':
                *unaff_RDI = unaff_RBP[2];
                lVar31 = unaff_RBP[3];
                unaff_RDI[1] = lVar31;
                if (lVar31 != 0) {
                  LOCK();
                  *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
                  UNLOCK();
                }
                break;
              case '\x02':
                fVar46 = *(float *)(*(longlong *)(puVar29 + 0x58) + 0xc);
                uVar21 = *(int *)(unaff_R14 + 0xc4) - 1;
                uVar34 = (int)ROUND(fVar46 / DAT_14c96b0bc + fVar46 / DAT_14c96b0bc + -0.5) >> 1;
                if ((int)uVar34 < 1) {
                  uVar34 = 0;
                }
                if ((int)uVar21 <= (int)uVar34) {
                  uVar34 = uVar21;
                }
                *(ulonglong *)(puVar29 + 0x60) = (ulonglong)uVar34;
                *(ulonglong *)(puVar29 + 0x50) = CONCAT71((uint7)(uint3)(uVar21 >> 8),1);
                goto switchD_141013524_default;
              case '\x03':
switchD_141013524_caseD_3:
                *unaff_RDI = 0;
                unaff_RDI[1] = 0;
                break;
              case '\x04':
              case '\x05':
                if ((longlong *)unaff_RBP[4] == (longlong *)0x0 || (int)unaff_RBP[5] == 0)
                goto switchD_141013524_caseD_3;
                pcVar9 = *(code **)(*(longlong *)unaff_RBP[4] + 0x30);
                *(undefined8 *)(puVar29 + -8) = 0x14101354c;
                cVar18 = (*pcVar9)();
                if (cVar18 == '\0') goto switchD_141013524_caseD_3;
                if ((int)unaff_RBP[5] == 0) {
                  plVar33 = (longlong *)0x0;
                }
                else {
                  plVar33 = (longlong *)unaff_RBP[4];
                }
                pcVar9 = *(code **)(*plVar33 + 0x58);
                *(undefined8 *)(puVar29 + -8) = 0x141013789;
                (*pcVar9)(plVar33,unaff_RDI,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2));
code_r0x000141013789:
                plVar32 = (longlong *)&DAT_00000001;
                unaff_RBX = (longlong *)((ulonglong)param_2 & 0xffffffff);
                goto LAB_14101362a;
              default:
                goto LAB_1410136d1;
              }
              plVar32 = (longlong *)&DAT_00000001;
              unaff_RBX = (longlong *)((ulonglong)param_2 & 0xffffffff);
            }
          }
LAB_14101362a:
          param_1 = *(longlong **)(puVar29 + 200);
        } while (param_1 == (longlong *)0x0);
        LOCK();
        plVar33 = param_1 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
      } while ((int)*plVar33 != 0);
      param_5 = (longlong *)*param_1;
      param_2 = param_1;
    } while( true );
  case 0xf:
    unaff_RBP = (longlong *)
                CONCAT62(uVar28,CONCAT11((char)((ulonglong)unaff_RBX >> 8) * '\x02',(byte)unaff_RBX)
                        );
    puVar29 = auStack_208;
    goto code_r0x000141013789;
  case 0x10:
    cVar18 = (char)((ulonglong)param_5 >> 8);
    pcVar23 = (char *)CONCAT71(CONCAT61((int6)((ulonglong)param_5 >> 0x10),(char)param_5),cVar18);
    *pcVar23 = *pcVar23 + cVar18;
    plVar32 = (longlong *)&stack0xfffffffffffffdf0;
    cVar18 = '\x05';
    do {
      unaff_RBP = unaff_RBP + -1;
      plVar32 = plVar32 + -1;
      *plVar32 = *unaff_RBP;
      cVar18 = cVar18 + -1;
    } while ('\0' < cVar18);
    puStack_240 = &stack0xfffffffffffffdf0;
    puVar29 = auStack_2a4f;
    goto code_r0x0001410135cc;
  case 0x11:
  case 0x12:
    unaff_RBP = plVar33;
    unaff_RDI = in_R11;
    goto code_r0x0001410134f5;
  case 0x13:
    uVar25 = (ulonglong)param_5 & 0xffffffffffffff58;
    goto code_r0x0001410140c0;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    uVar25 = (ulonglong)param_5 & 0xffffffffffffff50;
    *(int *)(unaff_RBP + -7) = (int)unaff_RBP[-7] + (int)param_2;
code_r0x0001410140c0:
    fVar40 = (float)((int)uVar25 - 1);
    uVar25 = (ulonglong)(uint)fVar40;
    fVar45 = *(float *)((longlong)local_1b0 + 4) / DAT_14c96b0bc;
    fVar45 = (float)((int)ROUND(fVar45 + fVar45 + -0.5) >> 1);
    iVar19 = 0;
    if ((int)fVar45 < 1) {
      fVar45 = 0.0;
    }
    if ((int)fVar40 <= (int)fVar45) {
      fVar45 = fVar40;
    }
LAB_14101408b:
    pfVar35 = (float *)(ulonglong)(uint)fVar45;
    local_1b8 = CONCAT71((int7)(uVar25 >> 8),1);
LAB_141014148:
    plVar32 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_140 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar32 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
      }
    }
    if (iVar19 != 0) {
      if (iVar19 != 3) goto LAB_14101431a;
LAB_141014313:
      *in_R11 = 0;
      in_R11[1] = 0;
LAB_14101431a:
      if ((in_stack_00000520 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return in_R11;
    }
    iVar19 = (int)pfVar35;
    if ((iVar19 < 0) || (*(int *)(unaff_R14 + 0xc4) <= iVar19)) goto LAB_141014313;
    local_148 = 0;
    local_140 = (longlong *)0x0;
    fVar45 = (float)(iVar19 + 1U);
    fVar40 = local_194;
    if ((uint)local_194 < (uint)local_19c) {
LAB_141014077:
      bVar36 = local_1a0 == SUB84(pfVar35,0);
      uVar25 = (ulonglong)CONCAT31((int3)((uint)fVar40 >> 8),bVar36);
      iVar19 = 3;
      if (((byte)local_1b8 & bVar36) != 0) goto LAB_14101408b;
      uVar25 = (ulonglong)*(uint *)(unaff_R14 + 0xc4);
      if ((int)*(uint *)(unaff_R14 + 0xc4) <= (int)fVar45) {
        if ((char)plVar33[6] == '\x05') {
          if ((longlong *)plVar33[4] != (longlong *)0x0 && (int)plVar33[5] != 0) {
            cVar18 = (**(code **)(*(longlong *)plVar33[4] + 0x30))();
            if (cVar18 == '\0') {
              iVar19 = 0;
            }
            else {
              if ((int)plVar33[5] == 0) {
                plVar32 = (longlong *)0x0;
              }
              else {
                plVar32 = (longlong *)plVar33[4];
              }
              (**(code **)(*plVar32 + 0x58))(plVar32,in_R11,3);
              iVar19 = 1;
            }
            pfVar35 = (float *)(ulonglong)(uint)fVar45;
            goto LAB_141014148;
          }
        }
        else if ((char)plVar33[6] == '\x02') goto code_r0x0001410140b9;
      }
      pfVar35 = (float *)(ulonglong)(uint)fVar45;
      iVar19 = 0;
      goto LAB_141014148;
    }
    local_1c4 = -1.0;
    fVar45 = local_19c;
    local_1a8 = pfVar35;
    local_198 = (float)(iVar19 + 1U);
    do {
      FUN_1402b2af8();
      fVar40 = (float)((int)fVar45 + 1);
      bVar36 = fVar45 != SUB84(unaff_R13,0);
      fVar45 = fVar40;
    } while (bVar36);
    in_R11 = (longlong *)CONCAT44(local_17c,local_180);
    param_2 = (longlong *)(ulonglong)(uint)local_198;
    plVar33 = in_stack_00000638;
    pfVar35 = local_1a8;
    fVar45 = local_198;
    if (local_148 == 0) goto LAB_141014077;
code_r0x000141013ff8:
    if (local_1c4 + 0.1 < *(float *)((longlong)local_1b0 + 0xc) ||
        local_1c4 + 0.1 == *(float *)((longlong)local_1b0 + 0xc)) {
LAB_1410141c9:
      local_1a8 = (float *)((ulonglong)param_2 & 0xffffffff);
switchD_14101402d_default:
      cVar18 = FUN_146948272();
      if (cVar18 != '\0') {
        *in_R11 = local_148;
        in_R11[1] = (longlong)local_140;
        goto LAB_14101431a;
      }
      FUN_1469525d2(in_stack_00000648);
      local_168 = *local_1b0;
      local_160 = local_1b0[1];
      pfVar35 = (float *)CONCAT44(local_184,local_188);
      local_178 = *pfVar35;
      local_174 = pfVar35[1];
      local_170 = pfVar35[2];
      local_16c = pfVar35[3];
      local_1e8 = plVar33;
      FUN_1410138ca(local_178,in_R11,&local_178,&local_168);
      iVar19 = 1;
      pfVar35 = local_1a8;
      goto LAB_141014148;
    }
    switch((char)plVar33[6]) {
    case '\x01':
      *in_R11 = plVar33[2];
      lVar31 = plVar33[3];
      in_R11[1] = lVar31;
      if (lVar31 != 0) {
        LOCK();
        *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
        UNLOCK();
      }
      break;
    case '\x02':
      uVar21 = *(int *)(unaff_R14 + 0xc4) - 1;
      fVar45 = *(float *)((longlong)local_1b0 + 4) / DAT_14c96b0bc;
      uVar34 = (int)ROUND(fVar45 + fVar45 + -0.5) >> 1;
      if ((int)uVar34 < 1) {
        uVar34 = 0;
      }
      if ((int)uVar21 <= (int)uVar34) {
        uVar34 = uVar21;
      }
      local_1a8 = (float *)(ulonglong)uVar34;
      local_1b8 = CONCAT71((uint7)(uint3)(uVar21 >> 8),1);
      goto switchD_14101402d_default;
    case '\x03':
switchD_14101402d_caseD_3:
      *in_R11 = 0;
      in_R11[1] = 0;
      break;
    case '\x04':
    case '\x05':
      if (((longlong *)plVar33[4] == (longlong *)0x0 || (int)plVar33[5] == 0) ||
         (cVar18 = (**(code **)(*(longlong *)plVar33[4] + 0x30))(), cVar18 == '\0'))
      goto switchD_14101402d_caseD_3;
      if ((int)plVar33[5] == 0) {
        plVar32 = (longlong *)0x0;
      }
      else {
        plVar32 = (longlong *)plVar33[4];
      }
      (**(code **)(*plVar32 + 0x58))(plVar32,in_R11,3);
      iVar19 = 1;
      pfVar35 = (float *)((ulonglong)param_2 & 0xffffffff);
      goto LAB_141014148;
    default:
      goto LAB_1410141c9;
    }
    iVar19 = 1;
    pfVar35 = (float *)((ulonglong)param_2 & 0xffffffff);
    goto LAB_141014148;
  case 0x16:
  case 0x17:
    pbVar24 = (byte *)((ulonglong)param_5 & 0xffffffffffffff40);
    *pbVar24 = *pbVar24 | (byte)pbVar24;
    *(char *)((longlong)unaff_RBX + 0xf702474) =
         *(char *)((longlong)unaff_RBX + 0xf702474) + (char)param_1;
    goto code_r0x000141013ff8;
  case 0x18:
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar33 = local_120;
  if (&local_128 != param_2) {
    *param_2 = local_128;
    local_128 = 0;
    plVar32 = (longlong *)param_2[1];
    if (local_120 != plVar32) {
      local_120 = (longlong *)0x0;
      param_2[1] = (longlong)plVar33;
      if (plVar32 != (longlong *)0x0) {
        LOCK();
        plVar33 = plVar32 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
        if ((int)*plVar33 == 0) {
          (**(code **)*plVar32)(plVar32);
          LOCK();
          piVar1 = (int *)((longlong)plVar32 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
          }
        }
      }
    }
  }
  plVar33 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar32 = local_120 + 1;
    *(int *)plVar32 = (int)*plVar32 + -1;
    UNLOCK();
    if ((int)*plVar32 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar33 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
      }
    }
  }
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_141012950:
  FUN_141012be6(&local_118);
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x0001410140b9:
  if ((local_1b8 & 1) == 0) goto code_r0x0001410140c0;
  goto LAB_14101408b;
code_r0x00014101560d:
  if ((puVar30[0x58] & 1) == 0) goto code_r0x000141015614;
  goto LAB_1410155db;
LAB_141014c11:
  if ((int)unaff_R15[5] != 0) goto code_r0x000141014c18;
  plVar33 = (longlong *)0x0;
  goto LAB_141014c46;
}



// FUNCTION 141012be6 FUN_141012be6 body=55 status=ok
// SIG undefined FUN_141012be6(void)

void FUN_141012be6(longlong *param_1)

{
  FUN_141012c1e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141012c1e FUN_141012c1e body=416 status=ok
// SIG undefined FUN_141012c1e(void)

void FUN_141012c1e(longlong *param_1,int param_2)

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
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
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
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 141012dc0 FUN_141012dc0 body=2817 status=ok
// SIG undefined FUN_141012dc0(void)

longlong *
FUN_141012dc0(longlong param_1,longlong *param_2,undefined4 *param_3,float *param_4,
             longlong *param_5,int param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_818 [32];
  longlong *local_7f8;
  int local_7f0;
  undefined8 local_7e8;
  longlong *local_7e0;
  float local_7d4;
  longlong *local_7d0;
  ulonglong local_7c8;
  float *local_7c0;
  ulonglong local_7b8;
  uint local_7b0;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  longlong *local_7a0;
  undefined4 *local_798;
  longlong *local_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 local_778;
  undefined8 uStack_770;
  longlong *local_768;
  longlong *local_760;
  longlong *local_758;
  longlong *plStack_750;
  undefined1 local_740 [1600];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_818;
  fVar26 = (float)param_3[1];
  fVar20 = (((float)param_3[3] - fVar26) * 0.5 + fVar26) / DAT_14c96b0bc;
  uVar18 = *(int *)(param_1 + 0xc4) - 1;
  local_7b0 = (int)ROUND(fVar20 + fVar20 + -0.5) >> 1;
  uVar7 = 0;
  if ((int)local_7b0 < 1) {
    local_7b0 = uVar7;
  }
  if ((int)uVar18 <= (int)local_7b0) {
    local_7b0 = uVar18;
  }
  if (*(int *)(param_1 + 0xc4) < 1 || *(int *)(param_1 + 0xc0) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_818);
  }
  uVar18 = *(int *)(param_1 + 0xc0) - 1;
  local_7ac = (int)ROUND(*param_4 / DAT_14c96b0b8 + *param_4 / DAT_14c96b0b8 + -0.5) >> 1;
  if ((int)local_7ac < 1) {
    local_7ac = uVar7;
  }
  if (uVar18 <= local_7ac) {
    local_7ac = uVar18;
  }
  local_7a4 = (int)ROUND(param_4[2] / DAT_14c96b0b8 + param_4[2] / DAT_14c96b0b8 + -0.5) >> 1;
  if ((int)local_7a4 < 1) {
    local_7a4 = uVar7;
  }
  if (local_7a4 < uVar18) {
    uVar18 = local_7a4;
  }
  if (uVar18 < local_7ac) {
    uVar18 = local_7ac;
  }
  uVar9 = (ulonglong)local_7b0;
  local_7c8 = 0;
  local_7c0 = param_4;
  local_798 = param_3;
  local_790 = param_2;
  do {
    iVar15 = (int)uVar9;
    if ((iVar15 < 0) || (*(int *)(param_1 + 0xc4) <= iVar15)) goto LAB_14101381b;
    local_758 = (longlong *)0x0;
    plStack_750 = (longlong *)0x0;
    uVar17 = iVar15 - 1U;
    uVar7 = local_7a4;
    if (local_7a4 < local_7ac) {
LAB_14101356e:
      uVar16 = (uint)uVar9;
      uVar10 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),local_7b0 == uVar16);
      iVar15 = 3;
      if (((byte)local_7c8 & local_7b0 == uVar16) == 0) {
        if ((uVar16 == 0) || (*(int *)(param_1 + 0xc4) < (int)uVar16)) {
          if ((char)param_5[6] == '\x05') {
            if ((longlong *)param_5[4] != (longlong *)0x0 && (int)param_5[5] != 0) {
              cVar6 = (**(code **)(*(longlong *)param_5[4] + 0x30))();
              if (cVar6 == '\0') {
                iVar15 = 0;
              }
              else {
                if ((int)param_5[5] == 0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)param_5[4];
                }
                (**(code **)(*plVar12 + 0x58))(plVar12,param_2,2);
                iVar15 = 1;
              }
              uVar9 = (ulonglong)uVar17;
              goto LAB_14101362a;
            }
          }
          else if ((char)param_5[6] == '\x02') {
            uVar10 = 0;
            if ((local_7c8 & 1) == 0) {
              fVar26 = local_7c0[3];
              uVar7 = *(int *)(param_1 + 0xc4) - 1;
              uVar10 = (ulonglong)uVar7;
              uVar17 = (int)ROUND(fVar26 / DAT_14c96b0bc + fVar26 / DAT_14c96b0bc + -0.5) >> 1;
              iVar15 = 0;
              if ((int)uVar17 < 1) {
                uVar17 = 0;
              }
              if ((int)uVar7 <= (int)uVar17) {
                uVar17 = uVar7;
              }
            }
            goto LAB_141013582;
          }
        }
        uVar9 = (ulonglong)uVar17;
        iVar15 = 0;
      }
      else {
LAB_141013582:
        uVar9 = (ulonglong)uVar17;
        local_7c8 = CONCAT71((int7)(uVar10 >> 8),1);
      }
      goto LAB_14101362a;
    }
    local_7d4 = -1.0;
    uVar17 = local_7ac;
    local_7b8 = uVar9;
    local_7a8 = iVar15 - 1U;
    do {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x6400000000;
      FUN_1402b2af8(param_1,local_740,uVar17,local_7b8 & 0xffffffff);
      lVar14 = (longlong)(int)local_f8;
      if (0 < (longlong)(int)local_f8) {
        do {
          puVar8 = local_100;
          if (local_100 == (undefined1 *)0x0) {
            puVar8 = local_740;
          }
          lVar11 = (lVar14 + -1) * 0x10;
          plVar12 = *(longlong **)
                     (*(longlong *)(*(longlong *)(puVar8 + lVar11) + 0x50) + 8 +
                     (longlong)*(int *)(puVar8 + lVar11 + 8) * 0x40);
          if (plVar12 != (longlong *)0x0) {
            plVar13 = (longlong *)
                      (*(longlong *)(*(longlong *)(puVar8 + lVar11) + 0x50) +
                      (longlong)*(int *)(puVar8 + lVar11 + 8) * 0x40);
            iVar15 = (int)plVar12[1];
            do {
              if (iVar15 == 0) goto LAB_1410132e7;
              LOCK();
              iVar5 = (int)plVar12[1];
              bVar19 = iVar15 == iVar5;
              if (bVar19) {
                *(int *)(plVar12 + 1) = iVar15 + 1;
                iVar5 = iVar15;
              }
              iVar15 = iVar5;
              UNLOCK();
            } while (!bVar19);
            plVar2 = (longlong *)*plVar13;
            fVar20 = local_7d4;
            plVar3 = plStack_750;
            if ((plVar2 != (longlong *)0x0) &&
               (((iVar15 = *(int *)((longlong)plVar13 + 0x3c), iVar15 == param_6 || (param_6 == -1))
                || (iVar15 == -1)))) {
              fVar21 = *(float *)((longlong)plVar2 + 0xbc) * 0.0 + *(float *)(plVar2 + 0x18);
              fVar29 = *(float *)((longlong)plVar2 + 0xb4) * 0.0 + *(float *)(plVar2 + 0x17);
              fVar30 = fVar29 * 0.0;
              fVar23 = fVar21 * *(float *)((longlong)plVar2 + 0x9c) + fVar30;
              fVar21 = fVar21 * 0.0;
              fVar30 = fVar21 + fVar30 +
                       ((*(float *)((longlong)plVar2 + 0xc4) * 0.0 + *(float *)(plVar2 + 0x19)) -
                       *(float *)(param_1 + 0xd4));
              fVar29 = *(float *)(plVar2 + 0x13) * fVar29 + fVar21 + fVar30;
              fVar27 = fVar23 + fVar30;
              fVar23 = fVar23 + fVar29;
              fVar21 = fVar29;
              if (fVar29 <= fVar27) {
                fVar21 = fVar27;
              }
              if (fVar21 <= fVar23) {
                fVar21 = fVar23;
              }
              fVar31 = fVar30;
              if (fVar30 <= fVar21) {
                fVar31 = fVar21;
              }
              if (fVar31 + -0.1 < fVar26) {
                fVar22 = *(float *)((longlong)plVar2 + 0xbc) + *(float *)(plVar2 + 0x18) * 0.0;
                fVar24 = *(float *)((longlong)plVar2 + 0xb4) + *(float *)(plVar2 + 0x17) * 0.0;
                fVar21 = fVar24 * 0.0;
                fVar32 = *(float *)((longlong)plVar2 + 0x9c) * fVar22 + fVar21;
                fVar22 = fVar22 * 0.0;
                fVar21 = fVar22 + fVar21 +
                         ((*(float *)((longlong)plVar2 + 0xc4) + *(float *)(plVar2 + 0x19) * 0.0) -
                         *(float *)(param_1 + 0xd0));
                fVar24 = *(float *)(plVar2 + 0x13) * fVar24 + fVar22 + fVar21;
                fVar25 = fVar32 + fVar21;
                fVar32 = fVar32 + fVar24;
                fVar22 = fVar24;
                if (fVar24 <= fVar25) {
                  fVar22 = fVar25;
                }
                if (fVar22 <= fVar32) {
                  fVar22 = fVar32;
                }
                fVar28 = fVar21;
                if (fVar21 <= fVar22) {
                  fVar28 = fVar22;
                }
                if (*local_7c0 <= fVar28) {
                  if (fVar25 <= fVar24) {
                    fVar24 = fVar25;
                  }
                  if (fVar32 <= fVar24) {
                    fVar24 = fVar32;
                  }
                  if (fVar24 <= fVar21) {
                    fVar21 = fVar24;
                  }
                  if ((fVar21 < local_7c0[2] || fVar21 == local_7c0[2]) && (local_7c0[1] <= fVar31))
                  {
                    if (fVar27 <= fVar29) {
                      fVar29 = fVar27;
                    }
                    if (fVar23 <= fVar29) {
                      fVar29 = fVar23;
                    }
                    if (fVar29 <= fVar30) {
                      fVar30 = fVar29;
                    }
                    if ((fVar30 < local_7c0[3] || fVar30 == local_7c0[3]) &&
                       ((local_758 == (longlong *)0x0 || (local_7d4 + -0.1 < fVar31)))) {
                      if ((char)param_5[6] != '\0') {
                        lVar11 = *param_5;
                        plVar13 = (longlong *)param_5[1];
                        if (plVar13 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                          UNLOCK();
                        }
                        if (lVar11 == 0) {
                          uVar9 = 0;
                        }
                        else {
                          lVar11 = *param_5;
                          plVar3 = (longlong *)param_5[1];
                          local_7e0 = plVar13;
                          if (plVar3 == (longlong *)0x0) {
                            uVar9 = FUN_1469481a2(lVar11);
                            uVar9 = uVar9 ^ 1;
                            plVar13 = local_7e0;
                          }
                          else {
                            LOCK();
                            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                            UNLOCK();
                            local_7a0 = plVar3;
                            uVar9 = FUN_1469481a2(lVar11);
                            uVar9 = uVar9 ^ 1;
                            LOCK();
                            plVar3 = local_7a0 + 1;
                            *(int *)plVar3 = (int)*plVar3 + -1;
                            UNLOCK();
                            plVar13 = local_7e0;
                            if ((int)*plVar3 == 0) {
                              local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar9);
                              (**(code **)*local_7a0)();
                              LOCK();
                              piVar1 = (int *)((longlong)local_7a0 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                (**(code **)(*local_7a0 + 0x10))();
                              }
                              uVar9 = (ulonglong)local_7d0 & 0xffffffff;
                              plVar13 = local_7e0;
                            }
                          }
                        }
                        if (plVar13 == (longlong *)0x0) {
LAB_1410132ae:
                          cVar6 = (char)uVar9;
                        }
                        else {
                          LOCK();
                          plVar3 = plVar13 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 != 0) goto LAB_1410132ae;
                          local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar9);
                          local_7e0 = plVar13;
                          (**(code **)*plVar13)(plVar13);
                          uVar9 = (ulonglong)local_7d0 & 0xffffffff;
                          LOCK();
                          piVar1 = (int *)((longlong)local_7e0 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 != 0) goto LAB_1410132ae;
                          (**(code **)(*local_7e0 + 0x10))();
                          cVar6 = (char)local_7d0;
                        }
                        fVar20 = local_7d4;
                        plVar3 = plStack_750;
                        if (cVar6 != '\0') goto LAB_1410132c8;
                      }
                      fVar20 = local_7d4;
                      plVar3 = plStack_750;
                      if ((*(char *)((longlong)plVar2 + 0x3a) == '\x01') &&
                         (cVar6 = (**(code **)(*plVar2 + 400))(plVar2), fVar20 = local_7d4,
                         plVar3 = plStack_750, cVar6 != '\0')) {
                        LOCK();
                        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                        UNLOCK();
                        plVar13 = plVar2;
                        local_768 = plVar2;
                        local_760 = plVar12;
                        if (plVar12 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar3 = plVar12 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 == 0) {
                            local_7e0 = plVar2;
                            local_7d0 = plVar12;
                            (**(code **)*plVar12)();
                            LOCK();
                            piVar1 = (int *)((longlong)local_7d0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            plVar13 = local_7e0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7d0 + 0x10))();
                              plVar13 = local_7e0;
                            }
                          }
                        }
                        uVar7 = ((uint)((ulonglong)plVar13 >> 0x14) & 0xffff ^
                                (uint)((ulonglong)plVar13 >> 4)) * -0x7a143595;
                        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                        iVar15 = FUN_1469524ee(param_7,uVar7 >> 0x10 ^ uVar7,&local_768);
                        if (local_760 != (longlong *)0x0) {
                          LOCK();
                          plVar13 = local_760 + 1;
                          *(int *)plVar13 = (int)*plVar13 + -1;
                          UNLOCK();
                          if ((int)*plVar13 == 0) {
                            local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,iVar15);
                            local_7e0 = local_760;
                            (**(code **)*local_760)(local_760);
                            LOCK();
                            piVar1 = (int *)((longlong)local_7e0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            iVar15 = (int)local_7d0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7e0 + 0x10))();
                              iVar15 = (int)local_7d0;
                            }
                          }
                        }
                        plVar13 = plStack_750;
                        fVar20 = local_7d4;
                        plVar3 = plStack_750;
                        if (iVar15 == -1) {
                          LOCK();
                          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                          UNLOCK();
                          fVar20 = fVar31;
                          local_758 = plVar2;
                          plVar3 = plVar12;
                          if (plStack_750 != (longlong *)0x0) {
                            LOCK();
                            plVar2 = plStack_750 + 1;
                            *(int *)plVar2 = (int)*plVar2 + -1;
                            UNLOCK();
                            if ((int)*plVar2 == 0) {
                              puVar4 = (undefined8 *)*plStack_750;
                              plStack_750 = plVar12;
                              (*(code *)*puVar4)();
                              LOCK();
                              piVar1 = (int *)((longlong)plVar13 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              plVar3 = plStack_750;
                              if (*piVar1 == 0) {
                                (**(code **)(*plVar13 + 0x10))(plVar13);
                                plVar3 = plStack_750;
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
LAB_1410132c8:
            plStack_750 = plVar3;
            local_7d4 = fVar20;
            LOCK();
            plVar13 = plVar12 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
LAB_1410132e7:
          bVar19 = 1 < lVar14;
          lVar14 = lVar14 + -1;
        } while (bVar19);
      }
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_790;
      uVar16 = local_7a8;
      uVar7 = uVar17 + 1;
      bVar19 = uVar17 != uVar18;
      uVar17 = uVar7;
    } while (bVar19);
    uVar9 = local_7b8;
    uVar17 = local_7a8;
    if (local_758 == (longlong *)0x0) goto LAB_14101356e;
    uVar7 = local_7a8;
    if (local_7c0[1] <= local_7d4 + -0.1) goto switchD_141013524_default;
    switch((char)param_5[6]) {
    case '\x01':
      *local_790 = param_5[2];
      lVar14 = param_5[3];
      local_790[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      break;
    case '\x02':
      fVar26 = local_7c0[3];
      uVar17 = *(int *)(param_1 + 0xc4) - 1;
      uVar7 = (int)ROUND(fVar26 / DAT_14c96b0bc + fVar26 / DAT_14c96b0bc + -0.5) >> 1;
      if ((int)uVar7 < 1) {
        uVar7 = 0;
      }
      if ((int)uVar17 <= (int)uVar7) {
        uVar7 = uVar17;
      }
      local_7c8 = CONCAT71((uint7)(uint3)(uVar17 >> 8),1);
    default:
switchD_141013524_default:
      local_7b8 = (ulonglong)uVar7;
      cVar6 = FUN_146948272();
      if (cVar6 == '\0') {
        FUN_1469525d2(param_7,local_740,&local_758,0);
        local_778 = *(undefined8 *)local_7c0;
        uStack_770 = *(undefined8 *)(local_7c0 + 2);
        local_788 = *local_798;
        uStack_784 = local_798[1];
        uStack_780 = local_798[2];
        uStack_77c = local_798[3];
        local_7e8 = param_7;
        local_7f0 = param_6;
        local_7f8 = param_5;
        FUN_141012dc0(param_1,param_2,&local_788,&local_778);
        iVar15 = 1;
        uVar9 = local_7b8;
        goto LAB_14101362a;
      }
      *param_2 = (longlong)local_758;
      param_2[1] = (longlong)plStack_750;
      goto LAB_141013822;
    case '\x03':
switchD_141013524_caseD_3:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case '\x04':
    case '\x05':
      if (((longlong *)param_5[4] == (longlong *)0x0 || (int)param_5[5] == 0) ||
         (cVar6 = (**(code **)(*(longlong *)param_5[4] + 0x30))(), cVar6 == '\0'))
      goto switchD_141013524_caseD_3;
      if ((int)param_5[5] == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)param_5[4];
      }
      (**(code **)(*plVar12 + 0x58))(plVar12,param_2,2);
      iVar15 = 1;
      uVar9 = (ulonglong)uVar16;
      goto LAB_14101362a;
    }
    iVar15 = 1;
    uVar9 = (ulonglong)uVar16;
LAB_14101362a:
    plVar12 = plStack_750;
    if (plStack_750 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_750 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plStack_750)(plStack_750);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  } while (iVar15 == 0);
  if (iVar15 == 3) {
LAB_14101381b:
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_141013822:
  if ((local_f0 ^ (ulonglong)auStack_818) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410138ca FUN_1410138ca body=2799 status=ok
// SIG undefined FUN_1410138ca(void)

longlong *
FUN_1410138ca(longlong param_1,longlong *param_2,undefined4 *param_3,float *param_4,
             longlong *param_5,int param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_818 [32];
  longlong *local_7f8;
  int local_7f0;
  undefined8 local_7e8;
  longlong *local_7e0;
  float local_7d4;
  longlong *local_7d0;
  ulonglong local_7c8;
  float *local_7c0;
  ulonglong local_7b8;
  uint local_7b0;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  longlong *local_7a0;
  undefined4 *local_798;
  longlong *local_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 local_778;
  undefined8 uStack_770;
  longlong *local_768;
  longlong *local_760;
  longlong *local_758;
  longlong *plStack_750;
  undefined1 local_740 [1600];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_818;
  fVar25 = (float)param_3[3];
  fVar20 = ((fVar25 - (float)param_3[1]) * 0.5 + (float)param_3[1]) / DAT_14c96b0bc;
  uVar17 = *(int *)(param_1 + 0xc4) - 1;
  local_7b0 = (int)ROUND(fVar20 + fVar20 + -0.5) >> 1;
  uVar8 = 0;
  if ((int)local_7b0 < 1) {
    local_7b0 = uVar8;
  }
  if ((int)uVar17 <= (int)local_7b0) {
    local_7b0 = uVar17;
  }
  if (*(int *)(param_1 + 0xc4) < 1 || *(int *)(param_1 + 0xc0) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_818);
  }
  uVar17 = *(int *)(param_1 + 0xc0) - 1;
  local_7ac = (int)ROUND(*param_4 / DAT_14c96b0b8 + *param_4 / DAT_14c96b0b8 + -0.5) >> 1;
  if ((int)local_7ac < 1) {
    local_7ac = uVar8;
  }
  if (uVar17 <= local_7ac) {
    local_7ac = uVar17;
  }
  local_7a4 = (int)ROUND(param_4[2] / DAT_14c96b0b8 + param_4[2] / DAT_14c96b0b8 + -0.5) >> 1;
  if ((int)local_7a4 < 1) {
    local_7a4 = uVar8;
  }
  if (local_7a4 < uVar17) {
    uVar17 = local_7a4;
  }
  if (uVar17 < local_7ac) {
    uVar17 = local_7ac;
  }
  uVar10 = (ulonglong)local_7b0;
  local_7c8 = 0;
  local_7c0 = param_4;
  local_798 = param_3;
  local_790 = param_2;
  do {
    iVar15 = (int)uVar10;
    if ((iVar15 < 0) || (*(int *)(param_1 + 0xc4) <= iVar15)) goto LAB_141014313;
    local_758 = (longlong *)0x0;
    plStack_750 = (longlong *)0x0;
    uVar16 = iVar15 + 1U;
    uVar8 = local_7a4;
    if (local_7a4 < local_7ac) {
LAB_141014077:
      bVar18 = local_7b0 == (uint)uVar10;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar18);
      iVar15 = 3;
      if (((byte)local_7c8 & bVar18) == 0) {
        uVar8 = *(uint *)(param_1 + 0xc4);
        if ((int)uVar8 <= (int)uVar16) {
          if ((char)param_5[6] == '\x05') {
            if ((longlong *)param_5[4] != (longlong *)0x0 && (int)param_5[5] != 0) {
              cVar7 = (**(code **)(*(longlong *)param_5[4] + 0x30))();
              if (cVar7 == '\0') {
                iVar15 = 0;
              }
              else {
                if ((int)param_5[5] == 0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)param_5[4];
                }
                (**(code **)(*plVar12 + 0x58))(plVar12,param_2,3);
                iVar15 = 1;
              }
              uVar10 = (ulonglong)uVar16;
              goto LAB_141014148;
            }
          }
          else if ((char)param_5[6] == '\x02') {
            if ((local_7c8 & 1) == 0) {
              fVar25 = local_7c0[1];
              uVar8 = uVar8 - 1;
              uVar16 = (int)ROUND(fVar25 / DAT_14c96b0bc + fVar25 / DAT_14c96b0bc + -0.5) >> 1;
              iVar15 = 0;
              if ((int)uVar16 < 1) {
                uVar16 = 0;
              }
              if ((int)uVar8 <= (int)uVar16) {
                uVar16 = uVar8;
              }
            }
            goto LAB_14101408b;
          }
        }
        uVar10 = (ulonglong)uVar16;
        iVar15 = 0;
      }
      else {
LAB_14101408b:
        uVar10 = (ulonglong)uVar16;
        local_7c8 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
      }
      goto LAB_141014148;
    }
    local_7d4 = -1.0;
    uVar16 = local_7ac;
    local_7b8 = uVar10;
    local_7a8 = iVar15 + 1U;
    do {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x6400000000;
      FUN_1402b2af8(param_1,local_740,uVar16,local_7b8 & 0xffffffff);
      lVar14 = (longlong)(int)local_f8;
      if (0 < (longlong)(int)local_f8) {
        do {
          puVar9 = local_100;
          if (local_100 == (undefined1 *)0x0) {
            puVar9 = local_740;
          }
          lVar11 = (lVar14 + -1) * 0x10;
          plVar12 = *(longlong **)
                     (*(longlong *)(*(longlong *)(puVar9 + lVar11) + 0x50) + 8 +
                     (longlong)*(int *)(puVar9 + lVar11 + 8) * 0x40);
          if (plVar12 != (longlong *)0x0) {
            plVar13 = (longlong *)
                      (*(longlong *)(*(longlong *)(puVar9 + lVar11) + 0x50) +
                      (longlong)*(int *)(puVar9 + lVar11 + 8) * 0x40);
            iVar15 = (int)plVar12[1];
            do {
              if (iVar15 == 0) goto LAB_141013df4;
              LOCK();
              iVar6 = (int)plVar12[1];
              bVar18 = iVar15 == iVar6;
              if (bVar18) {
                *(int *)(plVar12 + 1) = iVar15 + 1;
                iVar6 = iVar15;
              }
              iVar15 = iVar6;
              UNLOCK();
            } while (!bVar18);
            plVar2 = (longlong *)*plVar13;
            fVar20 = local_7d4;
            plVar3 = plStack_750;
            if ((plVar2 != (longlong *)0x0) &&
               (((iVar15 = *(int *)((longlong)plVar13 + 0x3c), iVar15 == param_6 || (param_6 == -1))
                || (iVar15 == -1)))) {
              fVar21 = *(float *)((longlong)plVar2 + 0xbc) * 0.0 + *(float *)(plVar2 + 0x18);
              fVar28 = *(float *)((longlong)plVar2 + 0xb4) * 0.0 + *(float *)(plVar2 + 0x17);
              fVar29 = fVar28 * 0.0;
              fVar22 = fVar21 * *(float *)((longlong)plVar2 + 0x9c) + fVar29;
              fVar21 = fVar21 * 0.0;
              fVar29 = fVar21 + fVar29 +
                       ((*(float *)((longlong)plVar2 + 0xc4) * 0.0 + *(float *)(plVar2 + 0x19)) -
                       *(float *)(param_1 + 0xd4));
              fVar28 = *(float *)(plVar2 + 0x13) * fVar28 + fVar21 + fVar29;
              fVar26 = fVar22 + fVar29;
              fVar22 = fVar22 + fVar28;
              fVar21 = fVar28;
              if (fVar26 <= fVar28) {
                fVar21 = fVar26;
              }
              if (fVar22 <= fVar21) {
                fVar21 = fVar22;
              }
              fVar30 = fVar29;
              if (fVar21 <= fVar29) {
                fVar30 = fVar21;
              }
              if (fVar25 < fVar30 + 0.1) {
                fVar19 = *(float *)((longlong)plVar2 + 0xbc) + *(float *)(plVar2 + 0x18) * 0.0;
                fVar23 = *(float *)((longlong)plVar2 + 0xb4) + *(float *)(plVar2 + 0x17) * 0.0;
                fVar21 = fVar23 * 0.0;
                fVar31 = *(float *)((longlong)plVar2 + 0x9c) * fVar19 + fVar21;
                fVar19 = fVar19 * 0.0;
                fVar21 = fVar19 + fVar21 +
                         ((*(float *)((longlong)plVar2 + 0xc4) + *(float *)(plVar2 + 0x19) * 0.0) -
                         *(float *)(param_1 + 0xd0));
                fVar23 = *(float *)(plVar2 + 0x13) * fVar23 + fVar19 + fVar21;
                fVar24 = fVar31 + fVar21;
                fVar31 = fVar31 + fVar23;
                fVar19 = fVar23;
                if (fVar23 <= fVar24) {
                  fVar19 = fVar24;
                }
                if (fVar19 <= fVar31) {
                  fVar19 = fVar31;
                }
                fVar27 = fVar21;
                if (fVar21 <= fVar19) {
                  fVar27 = fVar19;
                }
                if (*local_7c0 <= fVar27) {
                  if (fVar24 <= fVar23) {
                    fVar23 = fVar24;
                  }
                  if (fVar31 <= fVar23) {
                    fVar23 = fVar31;
                  }
                  if (fVar23 <= fVar21) {
                    fVar21 = fVar23;
                  }
                  if (fVar21 < local_7c0[2] || fVar21 == local_7c0[2]) {
                    if (fVar28 <= fVar26) {
                      fVar28 = fVar26;
                    }
                    if (fVar28 <= fVar22) {
                      fVar28 = fVar22;
                    }
                    if (fVar29 <= fVar28) {
                      fVar29 = fVar28;
                    }
                    if (((local_7c0[1] <= fVar29) &&
                        (fVar30 < local_7c0[3] || fVar30 == local_7c0[3])) &&
                       ((local_758 == (longlong *)0x0 || (fVar30 < local_7d4 + 0.1)))) {
                      if ((char)param_5[6] != '\0') {
                        lVar11 = *param_5;
                        plVar13 = (longlong *)param_5[1];
                        if (plVar13 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                          UNLOCK();
                        }
                        if (lVar11 == 0) {
                          uVar10 = 0;
                        }
                        else {
                          lVar11 = *param_5;
                          plVar3 = (longlong *)param_5[1];
                          local_7e0 = plVar13;
                          if (plVar3 == (longlong *)0x0) {
                            uVar10 = FUN_1469481a2(lVar11);
                            uVar10 = uVar10 ^ 1;
                            plVar13 = local_7e0;
                          }
                          else {
                            LOCK();
                            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                            UNLOCK();
                            local_7a0 = plVar3;
                            uVar10 = FUN_1469481a2(lVar11);
                            uVar10 = uVar10 ^ 1;
                            LOCK();
                            plVar3 = local_7a0 + 1;
                            *(int *)plVar3 = (int)*plVar3 + -1;
                            UNLOCK();
                            plVar13 = local_7e0;
                            if ((int)*plVar3 == 0) {
                              local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar10);
                              (**(code **)*local_7a0)();
                              LOCK();
                              piVar1 = (int *)((longlong)local_7a0 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                (**(code **)(*local_7a0 + 0x10))();
                              }
                              uVar10 = (ulonglong)local_7d0 & 0xffffffff;
                              plVar13 = local_7e0;
                            }
                          }
                        }
                        if (plVar13 == (longlong *)0x0) {
LAB_141013dbb:
                          cVar7 = (char)uVar10;
                        }
                        else {
                          LOCK();
                          plVar3 = plVar13 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 != 0) goto LAB_141013dbb;
                          local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar10);
                          local_7e0 = plVar13;
                          (**(code **)*plVar13)(plVar13);
                          uVar10 = (ulonglong)local_7d0 & 0xffffffff;
                          LOCK();
                          piVar1 = (int *)((longlong)local_7e0 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 != 0) goto LAB_141013dbb;
                          (**(code **)(*local_7e0 + 0x10))();
                          cVar7 = (char)local_7d0;
                        }
                        fVar20 = local_7d4;
                        plVar3 = plStack_750;
                        if (cVar7 != '\0') goto LAB_141013dd5;
                      }
                      fVar20 = local_7d4;
                      plVar3 = plStack_750;
                      if ((*(char *)((longlong)plVar2 + 0x3a) == '\x01') &&
                         (cVar7 = (**(code **)(*plVar2 + 400))(plVar2), fVar20 = local_7d4,
                         plVar3 = plStack_750, cVar7 != '\0')) {
                        LOCK();
                        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                        UNLOCK();
                        plVar13 = plVar2;
                        local_768 = plVar2;
                        local_760 = plVar12;
                        if (plVar12 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar3 = plVar12 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 == 0) {
                            local_7e0 = plVar2;
                            local_7d0 = plVar12;
                            (**(code **)*plVar12)();
                            LOCK();
                            piVar1 = (int *)((longlong)local_7d0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            plVar13 = local_7e0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7d0 + 0x10))();
                              plVar13 = local_7e0;
                            }
                          }
                        }
                        uVar8 = ((uint)((ulonglong)plVar13 >> 0x14) & 0xffff ^
                                (uint)((ulonglong)plVar13 >> 4)) * -0x7a143595;
                        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
                        iVar15 = FUN_1469524ee(param_7,uVar8 >> 0x10 ^ uVar8,&local_768);
                        if (local_760 != (longlong *)0x0) {
                          LOCK();
                          plVar13 = local_760 + 1;
                          *(int *)plVar13 = (int)*plVar13 + -1;
                          UNLOCK();
                          if ((int)*plVar13 == 0) {
                            local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,iVar15);
                            local_7e0 = local_760;
                            (**(code **)*local_760)(local_760);
                            LOCK();
                            piVar1 = (int *)((longlong)local_7e0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            iVar15 = (int)local_7d0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7e0 + 0x10))();
                              iVar15 = (int)local_7d0;
                            }
                          }
                        }
                        plVar13 = plStack_750;
                        fVar20 = local_7d4;
                        plVar3 = plStack_750;
                        if (iVar15 == -1) {
                          LOCK();
                          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                          UNLOCK();
                          fVar20 = fVar30;
                          local_758 = plVar2;
                          plVar3 = plVar12;
                          if (plStack_750 != (longlong *)0x0) {
                            LOCK();
                            plVar2 = plStack_750 + 1;
                            *(int *)plVar2 = (int)*plVar2 + -1;
                            UNLOCK();
                            if ((int)*plVar2 == 0) {
                              puVar4 = (undefined8 *)*plStack_750;
                              plStack_750 = plVar12;
                              (*(code *)*puVar4)();
                              LOCK();
                              piVar1 = (int *)((longlong)plVar13 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              plVar3 = plStack_750;
                              if (*piVar1 == 0) {
                                (**(code **)(*plVar13 + 0x10))(plVar13);
                                plVar3 = plStack_750;
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
LAB_141013dd5:
            plStack_750 = plVar3;
            local_7d4 = fVar20;
            LOCK();
            plVar13 = plVar12 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
LAB_141013df4:
          bVar18 = 1 < lVar14;
          lVar14 = lVar14 + -1;
        } while (bVar18);
      }
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_790;
      uVar5 = local_7a8;
      uVar8 = uVar16 + 1;
      bVar18 = uVar16 != uVar17;
      uVar16 = uVar8;
    } while (bVar18);
    uVar10 = local_7b8;
    uVar16 = local_7a8;
    if (local_758 == (longlong *)0x0) goto LAB_141014077;
    uVar8 = local_7a8;
    if (local_7d4 + 0.1 < local_7c0[3] || local_7d4 + 0.1 == local_7c0[3])
    goto switchD_14101402d_default;
    switch((char)param_5[6]) {
    case '\x01':
      *local_790 = param_5[2];
      lVar14 = param_5[3];
      local_790[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      break;
    case '\x02':
      fVar25 = local_7c0[1];
      uVar16 = *(int *)(param_1 + 0xc4) - 1;
      uVar8 = (int)ROUND(fVar25 / DAT_14c96b0bc + fVar25 / DAT_14c96b0bc + -0.5) >> 1;
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      if ((int)uVar16 <= (int)uVar8) {
        uVar8 = uVar16;
      }
      local_7c8 = CONCAT71((uint7)(uint3)(uVar16 >> 8),1);
    default:
switchD_14101402d_default:
      local_7b8 = (ulonglong)uVar8;
      cVar7 = FUN_146948272();
      if (cVar7 == '\0') {
        FUN_1469525d2(param_7,local_740,&local_758,0);
        local_778 = *(undefined8 *)local_7c0;
        uStack_770 = *(undefined8 *)(local_7c0 + 2);
        local_788 = *local_798;
        uStack_784 = local_798[1];
        uStack_780 = local_798[2];
        uStack_77c = local_798[3];
        local_7e8 = param_7;
        local_7f0 = param_6;
        local_7f8 = param_5;
        FUN_1410138ca(param_1,param_2,&local_788,&local_778);
        iVar15 = 1;
        uVar10 = local_7b8;
        goto LAB_141014148;
      }
      *param_2 = (longlong)local_758;
      param_2[1] = (longlong)plStack_750;
      goto LAB_14101431a;
    case '\x03':
switchD_14101402d_caseD_3:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case '\x04':
    case '\x05':
      if (((longlong *)param_5[4] == (longlong *)0x0 || (int)param_5[5] == 0) ||
         (cVar7 = (**(code **)(*(longlong *)param_5[4] + 0x30))(), cVar7 == '\0'))
      goto switchD_14101402d_caseD_3;
      if ((int)param_5[5] == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)param_5[4];
      }
      (**(code **)(*plVar12 + 0x58))(plVar12,param_2,3);
      iVar15 = 1;
      uVar10 = (ulonglong)uVar5;
      goto LAB_141014148;
    }
    iVar15 = 1;
    uVar10 = (ulonglong)uVar5;
LAB_141014148:
    plVar12 = plStack_750;
    if (plStack_750 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_750 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plStack_750)(plStack_750);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  } while (iVar15 == 0);
  if (iVar15 == 3) {
LAB_141014313:
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_14101431a:
  if ((local_f0 ^ (ulonglong)auStack_818) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410143c2 FUN_1410143c2 body=2663 status=ok
// SIG undefined FUN_1410143c2(void)

longlong *
FUN_1410143c2(longlong param_1,longlong *param_2,float *param_3,float *param_4,longlong *param_5,
             int param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_818 [32];
  longlong *local_7f8;
  int local_7f0;
  undefined8 local_7e8;
  longlong *local_7e0;
  float local_7d4;
  longlong *local_7d0;
  longlong local_7c8;
  ulonglong local_7c0;
  float *local_7b8;
  uint local_7b0;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  longlong *local_7a0;
  float *local_798;
  longlong *local_790;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  undefined8 local_778;
  undefined8 uStack_770;
  longlong *local_768;
  longlong *local_760;
  longlong *local_758;
  longlong *plStack_750;
  undefined1 local_740 [1600];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_818;
  fVar23 = *param_3;
  fVar21 = ((param_3[2] - fVar23) * 0.5 + fVar23) / DAT_14c96b0b8;
  uVar19 = *(int *)(param_1 + 0xc0) - 1;
  local_7ac = (int)ROUND(fVar21 + fVar21 + -0.5) >> 1;
  uVar8 = 0;
  if ((int)local_7ac < 1) {
    local_7ac = uVar8;
  }
  if ((int)uVar19 <= (int)local_7ac) {
    local_7ac = uVar19;
  }
  local_7c8 = param_1;
  if (*(int *)(param_1 + 0xc4) < 1 || *(int *)(param_1 + 0xc0) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_818);
  }
  uVar19 = *(int *)(param_1 + 0xc4) - 1;
  local_7b0 = (int)ROUND(param_4[1] / DAT_14c96b0bc + param_4[1] / DAT_14c96b0bc + -0.5) >> 1;
  if ((int)local_7b0 < 1) {
    local_7b0 = uVar8;
  }
  if (uVar19 <= local_7b0) {
    local_7b0 = uVar19;
  }
  local_7a4 = (int)ROUND(param_4[3] / DAT_14c96b0bc + param_4[3] / DAT_14c96b0bc + -0.5) >> 1;
  if ((int)local_7a4 < 1) {
    local_7a4 = uVar8;
  }
  if (local_7a4 < uVar19) {
    uVar19 = local_7a4;
  }
  if (uVar19 < local_7b0) {
    uVar19 = local_7b0;
  }
  local_7c0 = 0;
  local_7b8 = param_4;
  local_798 = param_3;
  local_790 = param_2;
  uVar7 = local_7ac;
  uVar8 = local_7ac;
  do {
    if (((int)uVar8 < 0) || (*(int *)(local_7c8 + 0xc0) <= (int)uVar8)) goto LAB_141014d84;
    local_758 = (longlong *)0x0;
    plStack_750 = (longlong *)0x0;
    uVar18 = uVar8 - 1;
    uVar9 = local_7a4;
    if (local_7a4 < local_7b0) {
LAB_141014b59:
      uVar11 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),uVar7 == uVar8);
      iVar17 = 3;
      if (((byte)local_7c0 & uVar7 == uVar8) == 0) {
        if ((uVar8 == 0) || (*(int *)(local_7c8 + 0xc0) < (int)uVar8)) {
          if ((char)param_5[6] == '\x05') {
            if (((longlong *)param_5[4] != (longlong *)0x0 && (int)param_5[5] != 0) &&
               (cVar6 = (**(code **)(*(longlong *)param_5[4] + 0x30))(), cVar6 != '\0'))
            goto LAB_141014c11;
          }
          else if ((char)param_5[6] == '\x02') {
            uVar11 = 0;
            if ((local_7c0 & 1) == 0) {
              fVar23 = local_7b8[2];
              uVar8 = *(int *)(local_7c8 + 0xc0) - 1;
              uVar11 = (ulonglong)uVar8;
              uVar18 = (int)ROUND(fVar23 / DAT_14c96b0b8 + fVar23 / DAT_14c96b0b8 + -0.5) >> 1;
              iVar17 = 0;
              if ((int)uVar18 < 1) {
                uVar18 = 0;
              }
              if ((int)uVar8 <= (int)uVar18) {
                uVar18 = uVar8;
              }
            }
            goto LAB_141014b6d;
          }
        }
        iVar17 = 0;
        uVar8 = uVar18;
      }
      else {
LAB_141014b6d:
        local_7c0 = CONCAT71((int7)(uVar11 >> 8),1);
        uVar8 = uVar18;
      }
      goto LAB_141014c5a;
    }
    local_7d4 = -1.0;
    uVar15 = local_7b0;
    local_7a8 = uVar8 - 1;
    do {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x6400000000;
      FUN_1402b2af8(local_7c8,local_740,uVar8,uVar15);
      lVar16 = (longlong)(int)local_f8;
      if (0 < (longlong)(int)local_f8) {
        do {
          puVar10 = local_100;
          if (local_100 == (undefined1 *)0x0) {
            puVar10 = local_740;
          }
          lVar12 = (lVar16 + -1) * 0x10;
          plVar13 = *(longlong **)
                     (*(longlong *)(*(longlong *)(puVar10 + lVar12) + 0x50) + 8 +
                     (longlong)*(int *)(puVar10 + lVar12 + 8) * 0x40);
          if (plVar13 != (longlong *)0x0) {
            plVar14 = (longlong *)
                      (*(longlong *)(*(longlong *)(puVar10 + lVar12) + 0x50) +
                      (longlong)*(int *)(puVar10 + lVar12 + 8) * 0x40);
            iVar17 = (int)plVar13[1];
            do {
              if (iVar17 == 0) goto LAB_1410148f2;
              LOCK();
              iVar5 = (int)plVar13[1];
              bVar20 = iVar17 == iVar5;
              if (bVar20) {
                *(int *)(plVar13 + 1) = iVar17 + 1;
                iVar5 = iVar17;
              }
              iVar17 = iVar5;
              UNLOCK();
            } while (!bVar20);
            plVar2 = (longlong *)*plVar14;
            fVar21 = local_7d4;
            plVar3 = plStack_750;
            if ((plVar2 != (longlong *)0x0) &&
               (((iVar17 = *(int *)((longlong)plVar14 + 0x3c), iVar17 == param_6 || (param_6 == -1))
                || (iVar17 == -1)))) {
              fVar28 = *(float *)(plVar2 + 0x18) * 0.0 + *(float *)((longlong)plVar2 + 0xbc);
              fVar25 = *(float *)(plVar2 + 0x17) * 0.0 + *(float *)((longlong)plVar2 + 0xb4);
              fVar26 = fVar25 * 0.0;
              fVar24 = fVar28 * *(float *)((longlong)plVar2 + 0x9c) + fVar26;
              fVar28 = fVar28 * 0.0;
              fVar29 = fVar28 + fVar26 +
                       ((*(float *)(plVar2 + 0x19) * 0.0 + *(float *)((longlong)plVar2 + 0xc4)) -
                       *(float *)(local_7c8 + 0xd0));
              fVar26 = *(float *)(plVar2 + 0x13) * fVar25 + fVar28 + fVar29;
              fVar28 = fVar24 + fVar29;
              fVar24 = fVar24 + fVar26;
              fVar25 = fVar26;
              if (fVar26 <= fVar28) {
                fVar25 = fVar28;
              }
              if (fVar25 <= fVar24) {
                fVar25 = fVar24;
              }
              fVar27 = fVar29;
              if (fVar29 <= fVar25) {
                fVar27 = fVar25;
              }
              if ((fVar27 + -0.1 < fVar23) && (*local_7b8 <= fVar27)) {
                if (fVar28 <= fVar26) {
                  fVar26 = fVar28;
                }
                if (fVar24 <= fVar26) {
                  fVar26 = fVar24;
                }
                if (fVar26 <= fVar29) {
                  fVar29 = fVar26;
                }
                if (fVar29 < local_7b8[2] || fVar29 == local_7b8[2]) {
                  fVar26 = *(float *)((longlong)plVar2 + 0xbc) * 0.0 + *(float *)(plVar2 + 0x18);
                  fVar29 = *(float *)((longlong)plVar2 + 0xb4) * 0.0 + *(float *)(plVar2 + 0x17);
                  fVar25 = fVar29 * 0.0;
                  fVar28 = *(float *)((longlong)plVar2 + 0x9c) * fVar26 + fVar25;
                  fVar26 = fVar26 * 0.0;
                  fVar25 = fVar26 + fVar25 +
                           ((*(float *)((longlong)plVar2 + 0xc4) * 0.0 + *(float *)(plVar2 + 0x19))
                           - *(float *)(local_7c8 + 0xd4));
                  fVar29 = *(float *)(plVar2 + 0x13) * fVar29 + fVar26 + fVar25;
                  fVar24 = fVar28 + fVar25;
                  fVar28 = fVar28 + fVar29;
                  fVar26 = fVar29;
                  if (fVar29 <= fVar24) {
                    fVar26 = fVar24;
                  }
                  if (fVar26 <= fVar28) {
                    fVar26 = fVar28;
                  }
                  fVar22 = fVar25;
                  if (fVar25 <= fVar26) {
                    fVar22 = fVar26;
                  }
                  if (local_7b8[1] <= fVar22) {
                    if (fVar24 <= fVar29) {
                      fVar29 = fVar24;
                    }
                    if (fVar28 <= fVar29) {
                      fVar29 = fVar28;
                    }
                    if (fVar29 <= fVar25) {
                      fVar25 = fVar29;
                    }
                    if ((fVar25 < local_7b8[3] || fVar25 == local_7b8[3]) &&
                       ((local_758 == (longlong *)0x0 || (local_7d4 + -0.1 < fVar27)))) {
                      if ((char)param_5[6] != '\0') {
                        lVar12 = *param_5;
                        plVar14 = (longlong *)param_5[1];
                        if (plVar14 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                          UNLOCK();
                        }
                        if (lVar12 == 0) {
                          uVar11 = 0;
                        }
                        else {
                          lVar12 = *param_5;
                          plVar3 = (longlong *)param_5[1];
                          local_7e0 = plVar14;
                          if (plVar3 == (longlong *)0x0) {
                            uVar11 = FUN_1469481a2(lVar12);
                            uVar11 = uVar11 ^ 1;
                            plVar14 = local_7e0;
                          }
                          else {
                            LOCK();
                            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                            UNLOCK();
                            local_7a0 = plVar3;
                            uVar11 = FUN_1469481a2(lVar12);
                            uVar11 = uVar11 ^ 1;
                            LOCK();
                            plVar3 = local_7a0 + 1;
                            *(int *)plVar3 = (int)*plVar3 + -1;
                            UNLOCK();
                            plVar14 = local_7e0;
                            if ((int)*plVar3 == 0) {
                              local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar11);
                              (**(code **)*local_7a0)();
                              LOCK();
                              piVar1 = (int *)((longlong)local_7a0 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                (**(code **)(*local_7a0 + 0x10))();
                              }
                              uVar11 = (ulonglong)local_7d0 & 0xffffffff;
                              plVar14 = local_7e0;
                            }
                          }
                        }
                        if (plVar14 == (longlong *)0x0) {
LAB_1410148b9:
                          cVar6 = (char)uVar11;
                        }
                        else {
                          LOCK();
                          plVar3 = plVar14 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 != 0) goto LAB_1410148b9;
                          local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar11);
                          local_7e0 = plVar14;
                          (**(code **)*plVar14)(plVar14);
                          uVar11 = (ulonglong)local_7d0 & 0xffffffff;
                          LOCK();
                          piVar1 = (int *)((longlong)local_7e0 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 != 0) goto LAB_1410148b9;
                          (**(code **)(*local_7e0 + 0x10))();
                          cVar6 = (char)local_7d0;
                        }
                        fVar21 = local_7d4;
                        plVar3 = plStack_750;
                        if (cVar6 != '\0') goto LAB_1410148d3;
                      }
                      fVar21 = local_7d4;
                      plVar3 = plStack_750;
                      if ((*(char *)((longlong)plVar2 + 0x3a) == '\x01') &&
                         (cVar6 = (**(code **)(*plVar2 + 400))(plVar2), fVar21 = local_7d4,
                         plVar3 = plStack_750, cVar6 != '\0')) {
                        LOCK();
                        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                        UNLOCK();
                        plVar14 = plVar2;
                        local_768 = plVar2;
                        local_760 = plVar13;
                        if (plVar13 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar3 = plVar13 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 == 0) {
                            local_7e0 = plVar2;
                            local_7d0 = plVar13;
                            (**(code **)*plVar13)();
                            LOCK();
                            piVar1 = (int *)((longlong)local_7d0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            plVar14 = local_7e0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7d0 + 0x10))();
                              plVar14 = local_7e0;
                            }
                          }
                        }
                        uVar7 = ((uint)((ulonglong)plVar14 >> 0x14) & 0xffff ^
                                (uint)((ulonglong)plVar14 >> 4)) * -0x7a143595;
                        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                        iVar17 = FUN_1469524ee(param_7,uVar7 >> 0x10 ^ uVar7,&local_768);
                        if (local_760 != (longlong *)0x0) {
                          LOCK();
                          plVar14 = local_760 + 1;
                          *(int *)plVar14 = (int)*plVar14 + -1;
                          UNLOCK();
                          if ((int)*plVar14 == 0) {
                            local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,iVar17);
                            local_7e0 = local_760;
                            (**(code **)*local_760)(local_760);
                            LOCK();
                            piVar1 = (int *)((longlong)local_7e0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            iVar17 = (int)local_7d0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7e0 + 0x10))();
                              iVar17 = (int)local_7d0;
                            }
                          }
                        }
                        plVar14 = plStack_750;
                        fVar21 = local_7d4;
                        plVar3 = plStack_750;
                        if (iVar17 == -1) {
                          LOCK();
                          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                          UNLOCK();
                          fVar21 = fVar27;
                          local_758 = plVar2;
                          plVar3 = plVar13;
                          if (plStack_750 != (longlong *)0x0) {
                            LOCK();
                            plVar2 = plStack_750 + 1;
                            *(int *)plVar2 = (int)*plVar2 + -1;
                            UNLOCK();
                            if ((int)*plVar2 == 0) {
                              puVar4 = (undefined8 *)*plStack_750;
                              plStack_750 = plVar13;
                              (*(code *)*puVar4)();
                              LOCK();
                              piVar1 = (int *)((longlong)plVar14 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              plVar3 = plStack_750;
                              if (*piVar1 == 0) {
                                (**(code **)(*plVar14 + 0x10))(plVar14);
                                plVar3 = plStack_750;
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
LAB_1410148d3:
            plStack_750 = plVar3;
            local_7d4 = fVar21;
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
LAB_1410148f2:
          bVar20 = 1 < lVar16;
          lVar16 = lVar16 + -1;
        } while (bVar20);
      }
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_790;
      uVar18 = local_7a8;
      uVar7 = local_7ac;
      uVar9 = uVar15 + 1;
      bVar20 = uVar15 != uVar19;
      uVar15 = uVar9;
    } while (bVar20);
    if (local_758 == (longlong *)0x0) goto LAB_141014b59;
    uVar8 = local_7a8;
    if (*local_7b8 <= local_7d4 + -0.1) goto switchD_141014b28_default;
    switch((char)param_5[6]) {
    case '\x01':
      *local_790 = param_5[2];
      lVar16 = param_5[3];
      local_790[1] = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      break;
    case '\x02':
      fVar23 = local_7b8[2];
      uVar9 = *(int *)(local_7c8 + 0xc0) - 1;
      uVar8 = (int)ROUND(fVar23 / DAT_14c96b0b8 + fVar23 / DAT_14c96b0b8 + -0.5) >> 1;
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      if ((int)uVar9 <= (int)uVar8) {
        uVar8 = uVar9;
      }
      local_7c0 = CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
    default:
switchD_141014b28_default:
      cVar6 = FUN_146948272();
      if (cVar6 == '\0') {
        FUN_1469525d2(param_7,local_740,&local_758,0);
        local_778 = *(undefined8 *)local_7b8;
        uStack_770 = *(undefined8 *)(local_7b8 + 2);
        local_788 = *local_798;
        fStack_784 = local_798[1];
        fStack_780 = local_798[2];
        fStack_77c = local_798[3];
        local_7e8 = param_7;
        local_7f0 = param_6;
        local_7f8 = param_5;
        FUN_1410143c2(local_7c8,param_2,&local_788,&local_778);
        iVar17 = 1;
        goto LAB_141014c5a;
      }
      *param_2 = (longlong)local_758;
      param_2[1] = (longlong)plStack_750;
      goto LAB_141014d8a;
    case '\x03':
switchD_141014b28_caseD_3:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case '\x04':
    case '\x05':
      if (((longlong *)param_5[4] == (longlong *)0x0 || (int)param_5[5] == 0) ||
         (cVar6 = (**(code **)(*(longlong *)param_5[4] + 0x30))(), cVar6 == '\0'))
      goto switchD_141014b28_caseD_3;
LAB_141014c11:
      if ((int)param_5[5] == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)param_5[4];
      }
      (**(code **)(*plVar13 + 0x58))(plVar13,param_2,0);
    }
    iVar17 = 1;
    uVar8 = uVar18;
LAB_141014c5a:
    plVar13 = plStack_750;
    if (plStack_750 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_750 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plStack_750)(plStack_750);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  } while (iVar17 == 0);
  if (iVar17 == 3) {
LAB_141014d84:
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_141014d8a:
  if ((local_f0 ^ (ulonglong)auStack_818) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141014e30 FUN_141014e30 body=2647 status=ok
// SIG undefined FUN_141014e30(void)

longlong *
FUN_141014e30(longlong param_1,longlong *param_2,float *param_3,float *param_4,longlong *param_5,
             int param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_818 [32];
  longlong *local_7f8;
  int local_7f0;
  undefined8 local_7e8;
  longlong *local_7e0;
  float local_7d4;
  longlong *local_7d0;
  longlong local_7c8;
  ulonglong local_7c0;
  float *local_7b8;
  uint local_7b0;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  longlong *local_7a0;
  float *local_798;
  longlong *local_790;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  undefined8 local_778;
  undefined8 uStack_770;
  longlong *local_768;
  longlong *local_760;
  longlong *local_758;
  longlong *plStack_750;
  undefined1 local_740 [1600];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_818;
  fVar23 = param_3[2];
  fVar21 = ((fVar23 - *param_3) * 0.5 + *param_3) / DAT_14c96b0b8;
  uVar19 = *(int *)(param_1 + 0xc0) - 1;
  local_7ac = (int)ROUND(fVar21 + fVar21 + -0.5) >> 1;
  uVar18 = 0;
  if ((int)local_7ac < 1) {
    local_7ac = uVar18;
  }
  if ((int)uVar19 <= (int)local_7ac) {
    local_7ac = uVar19;
  }
  local_7c8 = param_1;
  if (*(int *)(param_1 + 0xc4) < 1 || *(int *)(param_1 + 0xc0) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_818);
  }
  uVar19 = *(int *)(param_1 + 0xc4) - 1;
  local_7b0 = (int)ROUND(param_4[1] / DAT_14c96b0bc + param_4[1] / DAT_14c96b0bc + -0.5) >> 1;
  if ((int)local_7b0 < 1) {
    local_7b0 = uVar18;
  }
  if (uVar19 <= local_7b0) {
    local_7b0 = uVar19;
  }
  local_7a4 = (int)ROUND(param_4[3] / DAT_14c96b0bc + param_4[3] / DAT_14c96b0bc + -0.5) >> 1;
  if ((int)local_7a4 < 1) {
    local_7a4 = uVar18;
  }
  if (local_7a4 < uVar19) {
    uVar19 = local_7a4;
  }
  if (uVar19 < local_7b0) {
    uVar19 = local_7b0;
  }
  local_7c0 = 0;
  local_7b8 = param_4;
  local_798 = param_3;
  local_790 = param_2;
  uVar7 = local_7ac;
  uVar18 = local_7ac;
  do {
    if (((int)uVar18 < 0) || (*(int *)(local_7c8 + 0xc0) <= (int)uVar18)) goto LAB_1410157e2;
    local_758 = (longlong *)0x0;
    plStack_750 = (longlong *)0x0;
    uVar17 = uVar18 + 1;
    uVar8 = local_7a4;
    if (local_7a4 < local_7b0) {
LAB_1410155c7:
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uVar7 == uVar18);
      iVar16 = 3;
      if (((byte)local_7c0 & uVar7 == uVar18) == 0) {
        uVar8 = *(uint *)(local_7c8 + 0xc0);
        if ((int)uVar8 <= (int)uVar17) {
          if ((char)param_5[6] == '\x05') {
            if (((longlong *)param_5[4] != (longlong *)0x0 && (int)param_5[5] != 0) &&
               (cVar6 = (**(code **)(*(longlong *)param_5[4] + 0x30))(), cVar6 != '\0'))
            goto LAB_14101568f;
          }
          else if ((char)param_5[6] == '\x02') {
            if ((local_7c0 & 1) == 0) {
              fVar23 = *local_7b8;
              uVar8 = uVar8 - 1;
              uVar17 = (int)ROUND(fVar23 / DAT_14c96b0b8 + fVar23 / DAT_14c96b0b8 + -0.5) >> 1;
              iVar16 = 0;
              if ((int)uVar17 < 1) {
                uVar17 = 0;
              }
              if ((int)uVar8 <= (int)uVar17) {
                uVar17 = uVar8;
              }
            }
            goto LAB_1410155db;
          }
        }
        iVar16 = 0;
        uVar18 = uVar17;
      }
      else {
LAB_1410155db:
        local_7c0 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
        uVar18 = uVar17;
      }
      goto LAB_1410156b9;
    }
    local_7d4 = -1.0;
    uVar14 = local_7b0;
    local_7a8 = uVar18 + 1;
    do {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x6400000000;
      FUN_1402b2af8(local_7c8,local_740,uVar18,uVar14);
      lVar15 = (longlong)(int)local_f8;
      if (0 < (longlong)(int)local_f8) {
        do {
          puVar9 = local_100;
          if (local_100 == (undefined1 *)0x0) {
            puVar9 = local_740;
          }
          lVar11 = (lVar15 + -1) * 0x10;
          plVar12 = *(longlong **)
                     (*(longlong *)(*(longlong *)(puVar9 + lVar11) + 0x50) + 8 +
                     (longlong)*(int *)(puVar9 + lVar11 + 8) * 0x40);
          if (plVar12 != (longlong *)0x0) {
            plVar13 = (longlong *)
                      (*(longlong *)(*(longlong *)(puVar9 + lVar11) + 0x50) +
                      (longlong)*(int *)(puVar9 + lVar11 + 8) * 0x40);
            iVar16 = (int)plVar12[1];
            do {
              if (iVar16 == 0) goto LAB_141015363;
              LOCK();
              iVar5 = (int)plVar12[1];
              bVar20 = iVar16 == iVar5;
              if (bVar20) {
                *(int *)(plVar12 + 1) = iVar16 + 1;
                iVar5 = iVar16;
              }
              iVar16 = iVar5;
              UNLOCK();
            } while (!bVar20);
            plVar2 = (longlong *)*plVar13;
            fVar21 = local_7d4;
            plVar3 = plStack_750;
            if ((plVar2 != (longlong *)0x0) &&
               (((iVar16 = *(int *)((longlong)plVar13 + 0x3c), iVar16 == param_6 || (param_6 == -1))
                || (iVar16 == -1)))) {
              fVar28 = *(float *)(plVar2 + 0x18) * 0.0 + *(float *)((longlong)plVar2 + 0xbc);
              fVar25 = *(float *)(plVar2 + 0x17) * 0.0 + *(float *)((longlong)plVar2 + 0xb4);
              fVar26 = fVar25 * 0.0;
              fVar24 = fVar28 * *(float *)((longlong)plVar2 + 0x9c) + fVar26;
              fVar28 = fVar28 * 0.0;
              fVar29 = fVar28 + fVar26 +
                       ((*(float *)(plVar2 + 0x19) * 0.0 + *(float *)((longlong)plVar2 + 0xc4)) -
                       *(float *)(local_7c8 + 0xd0));
              fVar26 = *(float *)(plVar2 + 0x13) * fVar25 + fVar28 + fVar29;
              fVar28 = fVar24 + fVar29;
              fVar24 = fVar24 + fVar26;
              fVar25 = fVar26;
              if (fVar28 <= fVar26) {
                fVar25 = fVar28;
              }
              if (fVar24 <= fVar25) {
                fVar25 = fVar24;
              }
              fVar27 = fVar29;
              if (fVar25 <= fVar29) {
                fVar27 = fVar25;
              }
              if (fVar23 < fVar27 + 0.1) {
                if (fVar26 <= fVar28) {
                  fVar26 = fVar28;
                }
                if (fVar26 <= fVar24) {
                  fVar26 = fVar24;
                }
                if (fVar29 <= fVar26) {
                  fVar29 = fVar26;
                }
                if ((*local_7b8 <= fVar29) && (fVar27 < local_7b8[2] || fVar27 == local_7b8[2])) {
                  fVar26 = *(float *)((longlong)plVar2 + 0xbc) * 0.0 + *(float *)(plVar2 + 0x18);
                  fVar29 = *(float *)((longlong)plVar2 + 0xb4) * 0.0 + *(float *)(plVar2 + 0x17);
                  fVar25 = fVar29 * 0.0;
                  fVar28 = *(float *)((longlong)plVar2 + 0x9c) * fVar26 + fVar25;
                  fVar26 = fVar26 * 0.0;
                  fVar25 = fVar26 + fVar25 +
                           ((*(float *)((longlong)plVar2 + 0xc4) * 0.0 + *(float *)(plVar2 + 0x19))
                           - *(float *)(local_7c8 + 0xd4));
                  fVar29 = *(float *)(plVar2 + 0x13) * fVar29 + fVar26 + fVar25;
                  fVar24 = fVar28 + fVar25;
                  fVar28 = fVar28 + fVar29;
                  fVar26 = fVar29;
                  if (fVar29 <= fVar24) {
                    fVar26 = fVar24;
                  }
                  if (fVar26 <= fVar28) {
                    fVar26 = fVar28;
                  }
                  fVar22 = fVar25;
                  if (fVar25 <= fVar26) {
                    fVar22 = fVar26;
                  }
                  if (local_7b8[1] <= fVar22) {
                    if (fVar24 <= fVar29) {
                      fVar29 = fVar24;
                    }
                    if (fVar28 <= fVar29) {
                      fVar29 = fVar28;
                    }
                    if (fVar29 <= fVar25) {
                      fVar25 = fVar29;
                    }
                    if ((fVar25 < local_7b8[3] || fVar25 == local_7b8[3]) &&
                       ((local_758 == (longlong *)0x0 || (fVar27 < local_7d4 + 0.1)))) {
                      if ((char)param_5[6] != '\0') {
                        lVar11 = *param_5;
                        plVar13 = (longlong *)param_5[1];
                        if (plVar13 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                          UNLOCK();
                        }
                        if (lVar11 == 0) {
                          uVar10 = 0;
                        }
                        else {
                          lVar11 = *param_5;
                          plVar3 = (longlong *)param_5[1];
                          local_7e0 = plVar13;
                          if (plVar3 == (longlong *)0x0) {
                            uVar10 = FUN_1469481a2(lVar11);
                            uVar10 = uVar10 ^ 1;
                            plVar13 = local_7e0;
                          }
                          else {
                            LOCK();
                            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                            UNLOCK();
                            local_7a0 = plVar3;
                            uVar10 = FUN_1469481a2(lVar11);
                            uVar10 = uVar10 ^ 1;
                            LOCK();
                            plVar3 = local_7a0 + 1;
                            *(int *)plVar3 = (int)*plVar3 + -1;
                            UNLOCK();
                            plVar13 = local_7e0;
                            if ((int)*plVar3 == 0) {
                              local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar10);
                              (**(code **)*local_7a0)();
                              LOCK();
                              piVar1 = (int *)((longlong)local_7a0 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                (**(code **)(*local_7a0 + 0x10))();
                              }
                              uVar10 = (ulonglong)local_7d0 & 0xffffffff;
                              plVar13 = local_7e0;
                            }
                          }
                        }
                        if (plVar13 == (longlong *)0x0) {
LAB_14101532a:
                          cVar6 = (char)uVar10;
                        }
                        else {
                          LOCK();
                          plVar3 = plVar13 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 != 0) goto LAB_14101532a;
                          local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,(int)uVar10);
                          local_7e0 = plVar13;
                          (**(code **)*plVar13)(plVar13);
                          uVar10 = (ulonglong)local_7d0 & 0xffffffff;
                          LOCK();
                          piVar1 = (int *)((longlong)local_7e0 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 != 0) goto LAB_14101532a;
                          (**(code **)(*local_7e0 + 0x10))();
                          cVar6 = (char)local_7d0;
                        }
                        fVar21 = local_7d4;
                        plVar3 = plStack_750;
                        if (cVar6 != '\0') goto LAB_141015344;
                      }
                      fVar21 = local_7d4;
                      plVar3 = plStack_750;
                      if ((*(char *)((longlong)plVar2 + 0x3a) == '\x01') &&
                         (cVar6 = (**(code **)(*plVar2 + 400))(plVar2), fVar21 = local_7d4,
                         plVar3 = plStack_750, cVar6 != '\0')) {
                        LOCK();
                        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                        UNLOCK();
                        plVar13 = plVar2;
                        local_768 = plVar2;
                        local_760 = plVar12;
                        if (plVar12 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar3 = plVar12 + 1;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)*plVar3 == 0) {
                            local_7e0 = plVar2;
                            local_7d0 = plVar12;
                            (**(code **)*plVar12)();
                            LOCK();
                            piVar1 = (int *)((longlong)local_7d0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            plVar13 = local_7e0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7d0 + 0x10))();
                              plVar13 = local_7e0;
                            }
                          }
                        }
                        uVar7 = ((uint)((ulonglong)plVar13 >> 0x14) & 0xffff ^
                                (uint)((ulonglong)plVar13 >> 4)) * -0x7a143595;
                        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                        iVar16 = FUN_1469524ee(param_7,uVar7 >> 0x10 ^ uVar7,&local_768);
                        if (local_760 != (longlong *)0x0) {
                          LOCK();
                          plVar13 = local_760 + 1;
                          *(int *)plVar13 = (int)*plVar13 + -1;
                          UNLOCK();
                          if ((int)*plVar13 == 0) {
                            local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,iVar16);
                            local_7e0 = local_760;
                            (**(code **)*local_760)(local_760);
                            LOCK();
                            piVar1 = (int *)((longlong)local_7e0 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            iVar16 = (int)local_7d0;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_7e0 + 0x10))();
                              iVar16 = (int)local_7d0;
                            }
                          }
                        }
                        plVar13 = plStack_750;
                        fVar21 = local_7d4;
                        plVar3 = plStack_750;
                        if (iVar16 == -1) {
                          LOCK();
                          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                          UNLOCK();
                          fVar21 = fVar27;
                          local_758 = plVar2;
                          plVar3 = plVar12;
                          if (plStack_750 != (longlong *)0x0) {
                            LOCK();
                            plVar2 = plStack_750 + 1;
                            *(int *)plVar2 = (int)*plVar2 + -1;
                            UNLOCK();
                            if ((int)*plVar2 == 0) {
                              puVar4 = (undefined8 *)*plStack_750;
                              plStack_750 = plVar12;
                              (*(code *)*puVar4)();
                              LOCK();
                              piVar1 = (int *)((longlong)plVar13 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              plVar3 = plStack_750;
                              if (*piVar1 == 0) {
                                (**(code **)(*plVar13 + 0x10))(plVar13);
                                plVar3 = plStack_750;
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
LAB_141015344:
            plStack_750 = plVar3;
            local_7d4 = fVar21;
            LOCK();
            plVar13 = plVar12 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
LAB_141015363:
          bVar20 = 1 < lVar15;
          lVar15 = lVar15 + -1;
        } while (bVar20);
      }
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_790;
      uVar17 = local_7a8;
      uVar7 = local_7ac;
      uVar8 = uVar14 + 1;
      bVar20 = uVar14 != uVar19;
      uVar14 = uVar8;
    } while (bVar20);
    if (local_758 == (longlong *)0x0) goto LAB_1410155c7;
    uVar18 = local_7a8;
    if (local_7d4 + 0.1 < local_7b8[2] || local_7d4 + 0.1 == local_7b8[2])
    goto switchD_141015596_default;
    switch((char)param_5[6]) {
    case '\x01':
      *local_790 = param_5[2];
      lVar15 = param_5[3];
      local_790[1] = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      break;
    case '\x02':
      fVar23 = *local_7b8;
      uVar8 = *(int *)(local_7c8 + 0xc0) - 1;
      uVar18 = (int)ROUND(fVar23 / DAT_14c96b0b8 + fVar23 / DAT_14c96b0b8 + -0.5) >> 1;
      if ((int)uVar18 < 1) {
        uVar18 = 0;
      }
      if ((int)uVar8 <= (int)uVar18) {
        uVar18 = uVar8;
      }
      local_7c0 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
    default:
switchD_141015596_default:
      cVar6 = FUN_146948272();
      if (cVar6 == '\0') {
        FUN_1469525d2(param_7,local_740,&local_758,0);
        local_778 = *(undefined8 *)local_7b8;
        uStack_770 = *(undefined8 *)(local_7b8 + 2);
        local_788 = *local_798;
        fStack_784 = local_798[1];
        fStack_780 = local_798[2];
        fStack_77c = local_798[3];
        local_7e8 = param_7;
        local_7f0 = param_6;
        local_7f8 = param_5;
        FUN_141014e30(local_7c8,param_2,&local_788,&local_778);
        iVar16 = 1;
        goto LAB_1410156b9;
      }
      *param_2 = (longlong)local_758;
      param_2[1] = (longlong)plStack_750;
      goto LAB_1410157e8;
    case '\x03':
switchD_141015596_caseD_3:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case '\x04':
    case '\x05':
      if (((longlong *)param_5[4] == (longlong *)0x0 || (int)param_5[5] == 0) ||
         (cVar6 = (**(code **)(*(longlong *)param_5[4] + 0x30))(), cVar6 == '\0'))
      goto switchD_141015596_caseD_3;
LAB_14101568f:
      if ((int)param_5[5] == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)param_5[4];
      }
      (**(code **)(*plVar12 + 0x58))(plVar12,param_2,1);
    }
    iVar16 = 1;
    uVar18 = uVar17;
LAB_1410156b9:
    plVar12 = plStack_750;
    if (plStack_750 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_750 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plStack_750)(plStack_750);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  } while (iVar16 == 0);
  if (iVar16 == 3) {
LAB_1410157e2:
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_1410157e8:
  if ((local_f0 ^ (ulonglong)auStack_818) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101588e FUN_14101588e body=138 status=ok
// SIG undefined FUN_14101588e(void)

void FUN_14101588e(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_141015918((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141015918 FUN_141015918 body=353 status=ok
// SIG undefined FUN_141015918(void)

void FUN_141015918(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14101599f;
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
LAB_14101599f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 141015a7a FUN_141015a7a body=804 status=ok
// SIG undefined FUN_141015a7a(void)

void FUN_141015a7a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_1;
  if (*(int *)(param_1 + 0x408) == *(int *)(param_1 + 0x42c)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  local_88 = param_2 + 0x410;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = local_88;
  if (*(int *)(param_2 + 0x420) == 0) {
    local_80 = 1;
    local_60._0_4_ = 0xffffffff;
    iVar8 = 0;
    local_60._4_4_ = 0;
    local_70._0_4_ = 0;
  }
  else {
    FUN_144a81a4c(&local_70);
    local_80 = local_70 >> 0x20;
    iVar8 = *(int *)(param_2 + 0x420);
  }
  lVar5 = local_68;
  iVar11 = (int)local_70;
  uVar17 = (uint)local_60;
  iVar10 = local_60._4_4_;
  local_98 = local_58;
  lVar13 = param_2;
  if (local_60._4_4_ != iVar8 || local_68 != local_88) {
    do {
      local_78 = lVar13;
      local_94 = iVar8;
      lVar13 = *(longlong *)(local_78 + 0x400);
      if (*(longlong *)(local_78 + 0x400) == 0) {
        lVar13 = local_78;
      }
      lVar14 = (longlong)iVar10 * 0x20;
      uVar1 = lVar13 + lVar14;
      uVar7 = ((uint)(*(ulonglong *)(lVar13 + lVar14) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar13 + lVar14) >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      lVar9 = FUN_141015e02(local_90,uVar7,uVar1);
      lVar15 = local_90;
      if (lVar9 == 0) {
        local_70 = uVar1;
        FUN_1457e138c(local_90,&local_4c,uVar7,&local_70);
        lVar9 = *(longlong *)(lVar15 + 0x400);
        if (lVar9 == 0) {
          lVar9 = lVar15;
        }
        lVar9 = lVar9 + (longlong)local_4c * 0x20;
      }
      piVar16 = (int *)(lVar9 + 8);
      lVar14 = lVar14 + lVar13;
      cVar6 = FUN_141015dbc(lVar9 + 0x10);
      if (cVar6 == '\0') {
        iVar8 = *(int *)(lVar9 + 0xc);
        if (*(int *)(uVar1 + 0xc) < iVar8) {
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(uVar1 + 0x10);
          iVar8 = *(int *)(uVar1 + 0xc);
          *(int *)(lVar9 + 0xc) = iVar8;
        }
        iVar10 = *(int *)(lVar14 + 8);
        iVar12 = *piVar16;
        if (*piVar16 < iVar10) {
          iVar12 = iVar10;
        }
        if (iVar8 <= iVar12) {
          iVar12 = iVar8;
        }
        *piVar16 = iVar12;
      }
      else {
        uVar2 = *(undefined4 *)(lVar14 + 0xc);
        uVar3 = *(undefined4 *)(lVar14 + 0x10);
        uVar4 = *(undefined4 *)(lVar14 + 0x14);
        *piVar16 = *(int *)(lVar14 + 8);
        *(undefined4 *)(lVar9 + 0xc) = uVar2;
        *(undefined4 *)(lVar9 + 0x10) = uVar3;
        *(undefined4 *)(lVar9 + 0x14) = uVar4;
      }
      uVar17 = uVar17 & ~(uint)local_80;
      lVar13 = *(longlong *)(lVar5 + 8);
      if (*(longlong *)(lVar5 + 8) == 0) {
        lVar13 = lVar5;
      }
      iVar8 = *(int *)(lVar5 + 0x10);
      lVar9 = (longlong)iVar11;
      uVar7 = *(uint *)(lVar13 + lVar9 * 4) & uVar17;
      if (uVar7 == 0) {
        iVar10 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar10 = iVar8 + -1;
        }
        iVar10 = iVar10 >> 5;
        local_98 = local_98 + 0x20;
        iVar12 = iVar10;
        if (iVar10 < iVar11) {
          iVar12 = iVar11;
        }
        if (iVar11 < iVar10) {
          lVar15 = 0;
          do {
            uVar7 = *(uint *)(lVar13 + lVar9 * 4 + 4 + lVar15 * 4);
            if (uVar7 != 0) {
              iVar11 = iVar11 + (int)lVar15 + 1;
              uVar17 = 0xffffffff;
              goto LAB_141015c5b;
            }
            local_98 = local_98 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar12 - lVar9 != lVar15);
          uVar17 = 0xffffffff;
          iVar11 = iVar12;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar8;
      }
      else {
LAB_141015c5b:
        local_80 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = local_80 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (local_98 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar10) {
          iVar10 = iVar8;
        }
      }
      param_2 = local_78;
      iVar8 = local_94;
      lVar13 = local_78;
    } while (iVar10 != local_94 || lVar5 != local_88);
  }
  FUN_1412a0c54(param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141015dbc FUN_141015dbc body=70 status=ok
// SIG undefined FUN_141015dbc(void)

bool FUN_141015dbc(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 141015e02 FUN_141015e02 body=113 status=ok
// SIG undefined FUN_141015e02(void)

longlong FUN_141015e02(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x42c)) {
    lVar2 = param_1 + 0x430;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x470);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x478) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar2 = param_1;
      }
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar2 + (longlong)iVar3 * 0x20) == *param_3) {
          return lVar1;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 141015e74 FUN_141015e74 body=100 status=ok
// SIG undefined FUN_141015e74(void)

undefined8 FUN_141015e74(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 4) {
    iVar4 = 0x10;
  }
  if (param_2 < 4) {
    iVar4 = 0x10;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x478))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x478) = iVar4;
    FUN_141015ed8(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141015ed8 FUN_141015ed8 body=691 status=ok
// SIG undefined FUN_141015ed8(void)

void FUN_141015ed8(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_1446efa72(param_1 + 0x470,0,0,4);
  }
  uVar4 = *(uint *)(param_1 + 0x478);
  if (uVar4 != 0) {
    lVar1 = param_1 + 0x430;
    uVar13 = 0;
    FUN_1400bf6d8(lVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 0x470);
        if (*(longlong *)(param_1 + 0x470) == 0) {
          lVar12 = lVar1;
        }
        *(undefined4 *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x478) + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    iVar14 = *(int *)(param_1 + 0x420);
    if (iVar14 == 0) {
      uVar8 = 1;
      iVar10 = 0;
      iVar3 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x418);
      if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x410);
      }
      uVar4 = *puVar7;
      if (uVar4 == 0) {
        iVar10 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar10 = iVar14 + -1;
        }
        uVar13 = 0;
        uVar8 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar8 = uVar13;
        }
        iVar3 = 0;
        do {
          if (uVar8 == uVar13) {
            return;
          }
          iVar3 = iVar3 + 0x20;
          uVar4 = puVar7[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar13 = 0;
        iVar3 = 0;
      }
      uVar8 = (ulonglong)(-uVar4 & uVar4);
      uVar15 = uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = (iVar3 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar14 <= iVar10) {
        iVar10 = iVar14;
      }
    }
    if (iVar10 < iVar14) {
      uVar4 = 0xffffffff;
      do {
        lVar12 = *(longlong *)(param_1 + 0x400);
        if (*(longlong *)(param_1 + 0x400) == 0) {
          lVar12 = param_1;
        }
        lVar11 = (longlong)iVar10 * 0x20;
        uVar2 = ((uint)(*(ulonglong *)(lVar12 + lVar11) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar12 + lVar11) >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)*(int *)(param_1 + 0x478) - 1U;
        iVar14 = (int)uVar15;
        *(int *)(lVar12 + 0x1c + lVar11) = iVar14;
        lVar9 = *(longlong *)(param_1 + 0x470);
        if (*(longlong *)(param_1 + 0x470) == 0) {
          lVar9 = lVar1;
        }
        *(undefined4 *)(lVar12 + 0x18 + lVar11) =
             *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x478) - 1U & uVar15) * 4);
        lVar12 = *(longlong *)(param_1 + 0x470);
        if (*(longlong *)(param_1 + 0x470) == 0) {
          lVar12 = lVar1;
        }
        *(int *)(lVar12 + ((longlong)iVar14 & (longlong)*(int *)(param_1 + 0x478) - 1U) * 4) =
             iVar10;
        uVar4 = ~(uint)uVar8 & uVar4;
        puVar7 = *(uint **)(param_1 + 0x418);
        if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x410);
        }
        iVar14 = *(int *)(param_1 + 0x420);
        iVar10 = (int)uVar13;
        lVar12 = (longlong)iVar10;
        uVar2 = puVar7[lVar12] & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar5 = iVar14 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar10) {
            iVar6 = iVar10;
          }
          if (iVar5 <= iVar10) {
            return;
          }
          lVar9 = 0;
          while( true ) {
            iVar3 = iVar3 + 0x20;
            uVar2 = puVar7[lVar12 + lVar9 + 1];
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar6 - lVar12 == lVar9) {
              return;
            }
          }
          uVar13 = (ulonglong)(iVar10 + (int)lVar9 + 1);
          uVar4 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar2 & uVar2);
        uVar15 = uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar3 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar14);
    }
  }
  return;
}



// FUNCTION 14101618c FUN_14101618c body=165 status=ok
// SIG undefined FUN_14101618c(void)

undefined8 FUN_14101618c(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x42c) != 1) &&
     (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x42c))) {
    lVar5 = param_1 + 0x430;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x470);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x478) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar5 = param_1;
      }
      do {
        puVar1 = (undefined4 *)(lVar5 + (longlong)iVar6 * 0x20);
        if (*(longlong *)(lVar5 + (longlong)iVar6 * 0x20) == *param_3) {
          lVar5 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar5;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar4;
          puVar1[3] = uVar3;
          FUN_147e29650((int)lVar5,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 141016232 FUN_141016232 body=571 status=ok
// SIG undefined FUN_141016232(void)

int * FUN_141016232(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0x42c) == 0) {
    iVar9 = *(int *)(param_1 + 0x408);
    *(int *)(param_1 + 0x408) = iVar9 + 1;
    if (*(int *)(param_1 + 0x40c) == iVar9) {
      FUN_1467c2d2a(param_1,iVar9);
    }
    iVar11 = *(int *)(param_1 + 0x420);
    if (iVar11 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar2 = iVar11 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    lVar8 = param_1 + 0x410;
    iVar7 = iVar11 + 1;
    iVar10 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar10 >> 5 == iVar2) {
      *(int *)(param_1 + 0x420) = iVar7;
    }
    else {
      if (*(int *)(param_1 + 0x424) <= iVar11) {
        if (iVar11 + 0x20U < 0x40) {
          iVar7 = 0x20;
          iVar2 = iVar11;
        }
        else {
          uVar12 = iVar11 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x424) + 0x1fU < 0x40) {
            uVar6 = 4;
            if (4 < uVar12) {
              uVar6 = uVar12;
            }
          }
          else {
            uVar6 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar6 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar7 = -0x20;
          if ((int)uVar12 <= iVar2) {
            iVar7 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_1 + 0x420);
        }
        *(int *)(param_1 + 0x424) = iVar7;
        FUN_14008f53c(lVar8,iVar2);
        iVar7 = *(int *)(param_1 + 0x420) + 1;
      }
      iVar2 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      *(int *)(param_1 + 0x420) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x418);
        if (*(longlong *)(param_1 + 0x418) == 0) {
          lVar3 = lVar8;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar3 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar3 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x418);
    }
    bVar5 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar8 = param_1;
    }
    iVar9 = *(int *)(param_1 + 0x428);
    lVar3 = (longlong)iVar9;
    iVar11 = *(int *)(lVar8 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 0x428) = iVar11;
    iVar2 = *(int *)(param_1 + 0x42c) + -1;
    *(int *)(param_1 + 0x42c) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar11 * 0x20) = 0xffffffff;
    }
  }
  lVar8 = param_1 + 0x410;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x418);
  }
  iVar11 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar11 = iVar9;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  *param_2 = iVar9;
  lVar8 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar8 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + lVar8;
  return param_2;
}



// FUNCTION 14101646e FUN_14101646e body=46 status=ok
// SIG undefined FUN_14101646e(void)

void FUN_14101646e(longlong param_1,undefined8 param_2)

{
  FUN_140c888e6(param_1 + 0x9c0,param_1,param_2);
  FUN_14101649c(param_1 + 0xe68);
  return;
}



// FUNCTION 14101649c FUN_14101649c body=204 status=ok
// SIG undefined FUN_14101649c(void)

void FUN_14101649c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x10) != '\0') goto LAB_1410164b6;
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_141016558:
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x44);
    uVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((((int)plVar4[2] != *(int *)(param_1 + 0x48) ||
           ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) || (*plVar4 == 0)))) goto LAB_141016558;
      uVar2 = FUN_1447210f0();
    }
  }
  lVar3 = FUN_14101656a(uVar2);
  if (lVar3 != 0) {
    FUN_14894039a(lVar3,param_1);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_18 = DAT_14cb7c588;
  FUN_1410165ce(param_1,&DAT_14cb56080);
LAB_1410164b6:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101656a FUN_14101656a body=100 status=ok
// SIG undefined FUN_14101656a(void)

undefined8 FUN_14101656a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x170) != 0)) {
    lVar3 = FUN_1411531be();
    lVar1 = *(longlong *)(param_1 + 0x170);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        return *(undefined8 *)(lVar1 + 0x4c8);
      }
    }
  }
  return 0;
}



// FUNCTION 1410165ce FUN_1410165ce body=198 status=ok
// SIG undefined FUN_1410165ce(void)

void FUN_1410165ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0x48) != 0) && (uVar1 = *(uint *)(param_1 + 0x44), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x48))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      uVar2 = FUN_140427846();
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar2);
      if (plVar5 != (longlong *)0x0) {
        uVar2 = FUN_140427846();
        plVar3 = (longlong *)FUN_144718840(plVar5,uVar2);
        if ((plVar5 != plVar3) && (plVar3 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          if (lVar4 != 0) {
            FUN_140bfca4e(lVar4,param_2,param_3,0);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141016694 FUN_141016694 body=115 status=ok
// SIG undefined FUN_141016694(void)

void FUN_141016694(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_14026ccd7(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1408f7a70(param_1 + 0x28,0);
  }
  FUN_1401d7e14(param_1 + 8,param_2);
  FUN_141016708(param_1);
  if (*(char *)(param_3 + 1) == '\x01') {
    FUN_141016770(param_1,param_1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 141016708 FUN_141016708 body=103 status=ok
// SIG undefined FUN_141016708(void)

void FUN_141016708(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
    bVar3 = *(char *)(param_1 + 8) == '.';
    *(bool *)(param_1 + 0x60) = bVar3;
    if (lVar1 != 1) {
      pcVar2 = (char *)(param_1 + 8);
      goto LAB_14101672d;
    }
  }
  else {
    pcVar2 = *(char **)(param_1 + 8);
    bVar3 = *pcVar2 == '.';
    *(bool *)(param_1 + 0x60) = bVar3;
    if (lVar1 != 1) {
LAB_14101672d:
      bVar4 = pcVar2[lVar1 + -1] == '.';
      goto LAB_141016736;
    }
  }
  bVar4 = false;
LAB_141016736:
  *(bool *)(param_1 + 0x61) = bVar4;
  if ((*(longlong *)(param_1 + 0x58) != 0) && ((bVar3 || (bVar4 != false)))) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x109) = 1;
  }
  return;
}



// FUNCTION 141016770 FUN_141016770 body=610 status=ok
// SIG undefined FUN_141016770(void)

void FUN_141016770(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char ******_String;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  uint local_68;
  ulonglong local_60;
  char *****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14026ccd7(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1408f7a70(param_2,0);
  }
  pcVar8 = (char *)(param_1 + 8);
  if (2 < *(ulonglong *)(param_1 + 0x18)) {
    if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
      cVar1 = *pcVar8;
      pcVar9 = pcVar8;
    }
    else {
      cVar1 = **(char **)pcVar8;
      pcVar9 = *(char **)pcVar8;
    }
    if (cVar1 != '@') goto LAB_1410167d3;
    if (pcVar9[1] == 'U') {
      lVar10 = FUN_14067ab68(param_2);
      uVar3 = *(int *)(param_1 + 0x18) - 2;
      uVar7 = uVar3 / 5 << 2;
      uVar3 = uVar3 % 5;
      if (uVar3 == 4) {
        uVar7 = uVar7 | 3;
      }
      else if (uVar3 == 3) {
        uVar7 = uVar7 | 2;
      }
      else if (uVar3 - 1 < 2) {
        uVar7 = uVar7 | 1;
      }
      FUN_144a54ea4(lVar10,uVar7 << 3);
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x10);
      }
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        pcVar8 = *(char **)pcVar8;
      }
      FUN_142b30c38(pcVar8 + 2,*(int *)(param_1 + 0x18) + -2,lVar10);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
  }
  pcVar9 = pcVar8;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    pcVar9 = *(char **)pcVar8;
  }
LAB_1410167d3:
  if (pcVar9 != (char *)0x0) {
    pcVar9 = pcVar9 + (*pcVar9 == '.');
    do {
      for (lVar10 = 0; (cVar1 = pcVar9[lVar10], cVar1 != '.' && (cVar1 != '\0'));
          lVar10 = lVar10 + 1) {
        iVar2 = iswdigit((short)cVar1);
        if (iVar2 == 0) goto LAB_14101680a;
      }
      if (0 < (int)(uint)lVar10) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = (char *****)0x0;
        uStack_50 = 0;
        FUN_140cd1a74(&local_58,pcVar9,(uint)lVar10 & 0x7fffffff);
        _String = &local_58;
        if (0xf < uStack_40) {
          _String = (char ******)local_58;
        }
        local_60 = _strtoui64((char *)_String,(char **)0x0,0);
        if (local_60 == 0) {
          uVar3 = 0x40;
        }
        else {
          lVar6 = 0x3f;
          if (local_60 != 0) {
            for (; local_60 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar3 = (uint)lVar6 ^ 0x3f;
        }
        uVar3 = (0x40 - uVar3) + (uint)((short)(0x40 - uVar3) == 0) & 0xff;
        lVar5 = FUN_14067ab68(param_2);
        uVar4 = FUN_144a54ea4(lVar5,uVar3);
        lVar6 = *(longlong *)(lVar5 + 0x10);
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          lVar6 = lVar5;
        }
        local_68 = uVar3;
        FUN_14493566c(lVar6,uVar4,&local_60,0);
        FUN_1401d9a90(&local_58);
        cVar1 = pcVar9[lVar10];
      }
      pcVar9 = pcVar9 + lVar10 + 1;
    } while (cVar1 != '\0');
  }
LAB_14101680a:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410169ea FUN_1410169ea body=137 status=ok
// SIG undefined FUN_1410169ea(void)

void FUN_1410169ea(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_141016a74((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 4) =
       *(undefined4 *)(lVar1 + (longlong)(int)param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 4),
            (longlong)iVar4 << 2);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141016a74 FUN_141016a74 body=353 status=ok
// SIG undefined FUN_141016a74(void)

void FUN_141016a74(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141016afb;
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
LAB_141016afb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 141016bd6 FUN_141016bd6 body=549 status=ok
// SIG undefined FUN_141016bd6(void)

void FUN_141016bd6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_49;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446e0b6e();
  local_38 = 0;
  uStack_30 = 0;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x88;
    lVar7 = *(longlong *)(param_1 + 0x60) + 0x18;
    do {
      FUN_141016dfc(lVar7,&local_38);
      lVar7 = lVar7 + 0x88;
      lVar8 = lVar8 + -0x88;
    } while (lVar8 != 0);
    if ((int)uStack_30 != 0) {
      lVar7 = FUN_14050fd64();
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar4 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_60[2] = lVar5;
      *local_60 = &PTR_FUN_14b962cc0;
      local_60[3] = 0;
      FUN_14485c47a(local_60 + 3,param_1);
      puVar4[4] = param_1;
      local_70 = &local_49;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      FUN_1457028c8(lVar7 + 0x1e8,&local_48,&local_38,&local_60);
      plVar1 = local_40;
      if ((undefined8 *)(param_1 + 0x70) != &local_48) {
        *(undefined8 *)(param_1 + 0x70) = local_48;
        local_48 = 0;
        plVar3 = *(longlong **)(param_1 + 0x78);
        if (local_40 != plVar3) {
          local_40 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x78) = plVar1;
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
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1449db362(&local_60);
      uVar6 = uStack_30 & 0xffffffff;
      goto LAB_141016c50;
    }
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar6 = 0;
LAB_141016c50:
  FUN_140861e20(local_38,uVar6);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141016dfc FUN_141016dfc body=132 status=ok
// SIG undefined FUN_141016dfc(void)

void FUN_141016dfc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if (lVar4 != 0) {
        FUN_141016dfc(lVar4,param_2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 141016e86 FUN_141016e86 body=57 status=ok
// SIG undefined FUN_141016e86(void)

void FUN_141016e86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ce0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ce0 = FUN_140002ddd(FUN_1465ac1d3,uVar1,L"GbxBrainAspect_Cloaked");
  }
  return;
}



// FUNCTION 141016ec0 FUN_141016ec0 body=154 status=ok
// SIG undefined FUN_141016ec0(void)

undefined8 FUN_141016ec0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x98);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x240) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x240 + *(longlong *)(param_1 + 0x58) + 0x230);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 141016f5a FUN_141016f5a body=284 status=ok
// SIG undefined FUN_141016f5a(void)

undefined4 * FUN_141016f5a(longlong param_1,undefined4 *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    *(undefined2 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else if (param_4 == '\0') {
    local_58[0] = '\0';
    local_30[0] = 0;
    FUN_140217b36(local_58,param_1 + 0x1e8);
    uVar2 = FUN_1448174c4(local_30);
    FUN_141017078(uVar2);
    FUN_1400603ec(param_2,param_3,local_58);
    FUN_1448173f8(local_30);
    if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  else {
    uVar5 = 0;
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x108) + lVar3) == param_3) {
          lVar4 = *(longlong *)(param_1 + 0x108) - lVar4;
          if (lVar4 != 0) {
            uVar5 = FUN_14001cd04(lVar4 + 8);
          }
          break;
        }
        lVar4 = lVar4 + -0x18;
        lVar3 = lVar3 + 0x18;
      } while (-lVar4 != (longlong)*(int *)(param_1 + 0x110) * 0x18);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar5;
    *(undefined1 *)(param_2 + 8) = 3;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141017078 FUN_141017078 body=439 status=ok
// SIG undefined FUN_141017078(void)

void FUN_141017078(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_1;
    lVar10 = 0;
    do {
      lVar7 = (**(code **)(**(longlong **)(lVar4 + lVar10) + 8))();
      lVar8 = FUN_146526698();
      if (lVar7 == lVar8) {
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b412a70;
        plVar6[2] = (longlong)&PTR_FUN_14b318600;
        if (plVar6 == (longlong *)0x0) {
          *(undefined8 *)(lVar4 + lVar10) = 0x10;
          plVar9 = *(longlong **)(lVar4 + 8 + lVar10);
          if (plVar9 == (longlong *)0x0) {
            return;
          }
          *(undefined8 *)(lVar4 + 8 + lVar10) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          *(longlong **)(lVar4 + lVar10) = plVar6 + 2;
          plVar9 = *(longlong **)(lVar4 + 8 + lVar10);
          if (plVar6 == plVar9) {
            LOCK();
            plVar9 = plVar6 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            goto LAB_1410170fa;
          }
          *(longlong **)(lVar4 + 8 + lVar10) = plVar6;
          if (plVar9 == (longlong *)0x0) goto LAB_1410170fa;
        }
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
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        goto LAB_1410170fa;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar10);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b412a70;
  plVar6[2] = (longlong)&PTR_FUN_14b318600;
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1401037bc(param_1,iVar3);
  }
  lVar5 = *param_1;
  *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_1410170fa:
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141017230 FUN_141017230 body=138 status=ok
// SIG undefined FUN_141017230(void)

void FUN_141017230(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_1410172ba((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 1410172ba FUN_1410172ba body=353 status=ok
// SIG undefined FUN_1410172ba(void)

void FUN_1410172ba(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141017341;
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
LAB_141017341:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14101741c FUN_14101741c body=3900 status=ok
// SIG undefined FUN_14101741c(void)

void FUN_14101741c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  void *_Src;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  int iVar28;
  bool bVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_288 [40];
  longlong *local_260;
  longlong *local_258;
  uint local_24c;
  uint *local_248;
  ulonglong local_240;
  undefined4 local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1cc;
  undefined8 local_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined8 uStack_f4;
  undefined3 uStack_e3;
  undefined5 local_e0;
  undefined3 uStack_db;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined3 local_c8;
  undefined5 uStack_c5;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined3 uStack_b8;
  undefined5 uStack_b5;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_14594461a();
  *(undefined4 *)(param_1 + 0x187) = 0;
  local_260 = param_1;
  if (0 < (int)param_1[0x13a]) {
    lVar21 = 0x4c;
    lVar18 = 0xa0;
    uVar26 = 0;
    do {
      plVar25 = local_260;
      lVar10 = FUN_140fda668(local_260,uVar26 & 0xffffffff);
      FUN_143f80bc2(lVar10);
      FUN_143f7c4f0(&local_1f8,lVar10 + 0x1e0);
      cVar8 = *(char *)(lVar10 + 0x30);
      if (cVar8 != '\0') {
        if (cVar8 == '\x02') {
          bVar29 = ((char)plVar25[0x159] - 1U & 0xfd) == 0;
        }
        else if (cVar8 == '\x01') {
          bVar29 = (byte)((char)plVar25[0x159] - 1U) < 2;
        }
        else {
          bVar29 = false;
        }
        *(bool *)((longlong)local_1f8 + 0x34) = bVar29;
      }
      local_1cc = *(undefined4 *)(lVar10 + 0x50);
      lVar24 = *param_2;
      iVar20 = *(int *)(lVar24 + 0x40);
      *(uint *)(lVar24 + 0x40) = iVar20 + 1U;
      if (*(uint *)(lVar24 + 0x44) < iVar20 + 1U) {
        FUN_14658df3e((longlong *)(lVar24 + 0x38),iVar20);
      }
      memcpy((void *)((longlong)iVar20 * 0xe8 + *(longlong *)(lVar24 + 0x38)),&local_1f8,0xe8);
      uStack_b5 = 0;
      uStack_b0 = 0;
      uStack_c5 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      local_d0 = DAT_14c8464f0;
      local_e0 = (undefined5)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_db = (undefined3)(DAT_14c8464e0._4_4_ >> 8);
      uStack_d8 = (uint)DAT_14c8464e8;
      uStack_d4 = DAT_14c8464e8._4_4_;
      local_218 = (undefined4)DAT_14c8464e0;
      uStack_214 = DAT_14c8464e0._4_4_;
      uStack_210 = (uint)DAT_14c8464e8;
      uStack_20c = DAT_14c8464e8._4_4_;
      local_208 = DAT_14c8464f0;
      lVar24 = local_260[0x130];
      iVar20 = *(int *)(lVar24 + 0x10);
      *(uint *)(lVar24 + 0x10) = iVar20 + 1U;
      if (*(uint *)(lVar24 + 0x14) < iVar20 + 1U) {
        FUN_140afa9b8((longlong *)(lVar24 + 8),iVar20);
      }
      lVar24 = *(longlong *)(lVar24 + 8);
      lVar14 = (longlong)iVar20 * 0x98;
      *(undefined1 *)(lVar24 + lVar14) = 0;
      puVar27 = (undefined8 *)(lVar24 + 1 + lVar14);
      *puVar27 = CONCAT53(uStack_c5,local_c8);
      puVar27[1] = CONCAT44(uStack_bc,uStack_c0);
      puVar27 = (undefined8 *)(lVar24 + 0x11 + lVar14);
      *puVar27 = CONCAT53(uStack_b5,uStack_b8);
      puVar27[1] = uStack_b0;
      *(undefined4 *)(lVar24 + 0x24 + lVar14) = 0;
      *(undefined1 *)(lVar24 + 0x28 + lVar14) = 0;
      *(undefined4 *)(lVar24 + 0x2c + lVar14) = 0;
      *(undefined8 *)(lVar24 + 0x30 + lVar14) = 0x3ff0000000000000;
      *(undefined8 *)(lVar24 + 0x55 + lVar14) = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x48 + lVar14);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x38 + lVar14);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x5d + lVar14);
      *puVar27 = CONCAT53(local_e0,uStack_e3);
      puVar27[1] = CONCAT17((undefined1)uStack_d4,CONCAT43(uStack_d8,uStack_db));
      puVar11 = (uint *)(lVar24 + 0x68 + lVar14);
      *puVar11 = uStack_d8;
      puVar11[1] = uStack_d4;
      puVar11[2] = (uint)local_d0;
      puVar11[3] = local_d0._4_4_;
      puVar27 = (undefined8 *)(lVar24 + 0x78 + lVar14);
      *puVar27 = CONCAT44(uStack_214,local_218);
      puVar27[1] = CONCAT44(uStack_20c,uStack_210);
      *(undefined8 *)(lVar24 + 0x88 + lVar14) = local_208;
      *(undefined8 *)(lVar24 + 0x90 + lVar14) = 0;
      *(undefined8 *)(lVar10 + 0x288) = *(undefined8 *)(lVar10 + 0x120);
      *(undefined8 *)(lVar10 + 0x278) = *(undefined8 *)(lVar10 + 0x110);
      *(undefined8 *)(lVar10 + 0x280) = *(undefined8 *)(lVar10 + 0x118);
      *(undefined8 *)(lVar10 + 0x2a0) = *(undefined8 *)(lVar10 + 0x138);
      *(undefined8 *)(lVar10 + 0x2a8) = *(undefined8 *)(lVar10 + 0x140);
      *(undefined8 *)(lVar10 + 0x290) = *(undefined8 *)(lVar10 + 0x128);
      *(undefined8 *)(lVar10 + 0x298) = *(undefined8 *)(lVar10 + 0x130);
      *(float *)(lVar10 + 0x2b4) = *(float *)(lVar10 + 0x150) * 100.0;
      *(float *)(lVar10 + 0x2b8) = *(float *)(lVar10 + 0x154) * 100.0;
      *(undefined8 *)(lVar10 + 0x2cc) = *(undefined8 *)(lVar10 + 0x148);
      *(undefined4 *)(lVar10 + 0x2d8) = *(undefined4 *)(lVar10 + 0x158);
      local_228 = DAT_14c8464f0;
      local_238 = (undefined4)DAT_14c8464e0;
      uStack_234 = DAT_14c8464e0._4_4_;
      uStack_230 = (uint)DAT_14c8464e8;
      uStack_22c = DAT_14c8464e8._4_4_;
      uStack_f4 = DAT_14c8464f0;
      local_108 = CONCAT44((undefined4)DAT_14c8464e0,(undefined4)local_108);
      uStack_100 = DAT_14c8464e0._4_4_;
      uStack_fc = (uint)DAT_14c8464e8;
      uStack_f8 = DAT_14c8464e8._4_4_;
      lVar24 = *param_2;
      iVar20 = *(int *)(lVar24 + 0x50);
      *(uint *)(lVar24 + 0x50) = iVar20 + 1U;
      if (*(uint *)(lVar24 + 0x54) < iVar20 + 1U) {
        FUN_14658dfd0((longlong *)(lVar24 + 0x48),iVar20);
      }
      lVar24 = *(longlong *)(lVar24 + 0x48);
      lVar14 = (longlong)iVar20 * 0x88;
      *(longlong *)(lVar24 + lVar14) = lVar10 + 0x278;
      *(undefined8 *)(lVar24 + 8 + lVar14) = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x10 + lVar14);
      *puVar27 = CONCAT44(uStack_234,local_238);
      puVar27[1] = CONCAT44(uStack_22c,uStack_230);
      *(undefined8 *)(lVar24 + 0x20 + lVar14) = local_228;
      *(undefined4 *)(lVar24 + 0x28 + lVar14) = 0;
      puVar1 = (undefined4 *)(lVar24 + 0x2c + lVar14);
      *puVar1 = (undefined4)local_108;
      puVar1[1] = local_108._4_4_;
      puVar1[2] = uStack_100;
      puVar1[3] = uStack_fc;
      puVar27 = (undefined8 *)(lVar24 + 0x38 + lVar14);
      *puVar27 = CONCAT44(uStack_f8,uStack_fc);
      puVar27[1] = uStack_f4;
      puVar27 = (undefined8 *)(lVar24 + 0x48 + lVar14);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x58 + lVar14);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x68 + lVar14);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27 = (undefined8 *)(lVar24 + 0x74 + lVar14);
      *puVar27 = 0;
      puVar27[1] = 0;
      if (*(char *)((longlong)local_1f8 + 0x34) == '\x01') {
        *(int *)(local_260 + 0x187) = (int)local_260[0x187] + 1;
      }
      *(int *)(*(longlong *)(*param_2 + 0x38) + lVar18) = (int)uVar26;
      *(int *)(*(longlong *)(*param_2 + 0x48) + lVar21) = (int)uVar26;
      *(int *)(*param_2 + 0xdc) = (int)local_260[0x187];
      *(undefined1 *)(*param_2 + 0xe0) = *(undefined1 *)((longlong)local_260 + 0x9c2);
      uVar26 = uVar26 + 1;
      lVar21 = lVar21 + 0x88;
      lVar18 = lVar18 + 0xe8;
    } while ((longlong)uVar26 < (longlong)(int)local_260[0x13a]);
  }
  plVar25 = local_260;
  FUN_1411f6c30(local_260);
  uVar9 = *(uint *)(plVar25 + 399);
  local_258 = param_2;
  if (uVar9 == 0) {
    uVar19 = 1;
    uVar26 = 0;
    iVar20 = 0;
    uVar17 = 0;
  }
  else {
    puVar11 = (uint *)plVar25[0x18e];
    if ((uint *)plVar25[0x18e] == (uint *)0x0) {
      puVar11 = (uint *)(plVar25 + 0x18c);
    }
    uVar17 = *puVar11;
    if (uVar17 == 0) {
      iVar20 = uVar9 + 0x1e;
      if (-1 < (int)(uVar9 - 1)) {
        iVar20 = uVar9 - 1;
      }
      uVar26 = 0;
      uVar15 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar15 = uVar26;
      }
      iVar20 = 0;
      do {
        if (uVar15 == uVar26) goto LAB_1410178c9;
        iVar20 = iVar20 + 0x20;
        uVar17 = puVar11[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar26 = 0;
      iVar20 = 0;
    }
    uVar19 = (ulonglong)(-uVar17 & uVar17);
    uVar15 = uVar19 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar17 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar9 <= (int)uVar17) {
      uVar17 = uVar9;
    }
  }
  if (uVar17 != uVar9) {
    uVar22 = 0xffffffff;
    local_248 = (uint *)(plVar25 + 0x18c);
    local_240 = (ulonglong)uVar9;
    do {
      lVar18 = plVar25[0x18a];
      lVar10 = (longlong)(int)uVar17 * 0x20;
      local_24c = uVar22;
      lVar21 = FUN_140fda668(plVar25,**(undefined4 **)(lVar18 + 8 + lVar10));
      local_1f8 = &uStack_1f0;
      uStack_1f0 = (void *)0x0;
      local_1e8 = 0;
      local_1e0 = *(undefined4 *)(lVar21 + 0x15c);
      lVar21 = (longlong)*(int *)(lVar18 + 0x10 + lVar10);
      if (lVar21 != 0) {
        lVar18 = *(longlong *)(lVar18 + 8 + lVar10);
        lVar10 = 0;
        do {
          uVar15 = local_1e8;
          uVar3 = *(undefined2 *)(lVar18 + lVar10);
          lVar24 = (longlong)(int)local_1e8;
          uVar9 = (int)local_1e8 + 1;
          local_1e8 = CONCAT44(local_1e8._4_4_,uVar9);
          if (local_1e8._4_4_ < uVar9) {
            FUN_14488eebe(&uStack_1f0,uVar15 & 0xffffffff);
          }
          *(undefined2 *)((longlong)uStack_1f0 + lVar24 * 2) = uVar3;
          lVar10 = lVar10 + 4;
        } while (lVar21 * 4 != lVar10);
      }
      lVar18 = *local_258;
      iVar28 = *(int *)(lVar18 + 0xa0);
      *(uint *)(lVar18 + 0xa0) = iVar28 + 1U;
      if (*(uint *)(lVar18 + 0xa4) < iVar28 + 1U) {
        FUN_14658e066((longlong *)(lVar18 + 0x98),iVar28);
      }
      _Src = uStack_1f0;
      lVar18 = *(longlong *)(lVar18 + 0x98);
      lVar21 = (longlong)iVar28 * 0x20;
      *(longlong **)(lVar18 + lVar21) = local_1f8;
      *(undefined8 *)(lVar18 + 8 + lVar21) = 0;
      lVar10 = (longlong)(int)local_1e8;
      *(int *)(lVar18 + 0x10 + lVar21) = (int)local_1e8;
      if (lVar10 == 0) {
        *(undefined4 *)(lVar18 + lVar21 + 0x14) = 0;
      }
      else {
        puVar27 = (undefined8 *)(lVar21 + lVar18 + 8);
        FUN_140817052(puVar27,local_1e8 & 0xffffffff,0);
        memcpy((void *)*puVar27,_Src,lVar10 * 2);
      }
      puVar11 = local_248;
      uVar22 = local_24c;
      *(undefined4 *)(lVar18 + lVar21 + 0x18) = local_1e0;
      if (uStack_1f0 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uVar22 & ~(uint)uVar19;
      puVar23 = (uint *)local_260[0x18e];
      if ((uint *)local_260[0x18e] == (uint *)0x0) {
        puVar23 = puVar11;
      }
      uVar9 = *(uint *)(local_260 + 399);
      iVar28 = (int)uVar26;
      lVar18 = (longlong)iVar28;
      uVar17 = puVar23[lVar18] & uVar22;
      if (uVar17 == 0) {
        iVar12 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar12 = uVar9 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar28) {
          iVar13 = iVar28;
        }
        if (iVar28 < iVar12) {
          lVar21 = 0;
          do {
            uVar17 = puVar23[lVar18 + lVar21 + 1];
            if (uVar17 != 0) {
              uVar26 = (ulonglong)(iVar28 + (int)lVar21 + 1);
              uVar22 = 0xffffffff;
              goto LAB_141017b41;
            }
            iVar20 = iVar20 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar13 - lVar18 != lVar21);
          uVar22 = 0xffffffff;
          iVar28 = iVar13;
        }
        uVar26 = (ulonglong)(iVar28 + 1);
        uVar17 = uVar9;
      }
      else {
LAB_141017b41:
        uVar19 = (ulonglong)(-uVar17 & uVar17);
        uVar15 = uVar19 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar17 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar17) {
          uVar17 = uVar9;
        }
      }
      plVar25 = local_260;
    } while (uVar17 != (uint)local_240);
  }
LAB_1410178c9:
  FUN_140fda4c8(plVar25,&local_1f8);
  plVar7 = local_258;
  *(undefined4 *)(plVar25 + 0x188) = (undefined4)local_1f8;
  *(undefined4 *)((longlong)plVar25 + 0xc44) = local_1f8._4_4_;
  *(undefined4 *)(plVar25 + 0x189) = (undefined4)uStack_1f0;
  *(undefined4 *)((longlong)plVar25 + 0xc4c) = uStack_1f0._4_4_;
  plVar16 = (longlong *)(plVar25[0x150] + 0x30);
  if (plVar25[0x150] == 0) {
    plVar16 = plVar25 + 0x140;
  }
  if ((int)plVar16[0xf] == 0) {
    FUN_1400b22c2(&local_1f8,"Unknown");
    if (plVar25[0x15] != 0) {
      local_108 = *(longlong *)(plVar25[0x15] + 0x18);
      FUN_1400021e4(&local_108,&local_c8);
      if (local_1f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_1f8 = (longlong *)CONCAT53(uStack_c5,local_c8);
      uStack_1f0 = (void *)CONCAT44(uStack_bc,uStack_c0);
    }
    *(undefined1 *)(plVar25 + 0x13f) = 0;
    if (local_1f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((char)plVar25[0x13f] == '\x01') {
    FUN_148add68a(plVar25 + 0x140);
    lVar21 = plVar25[0x156];
    uVar4 = *(ushort *)((longlong)plVar25 + 0xab6);
    uVar5 = *(ushort *)((longlong)plVar25 + 0xab4);
    lVar18 = *plVar7;
    iVar20 = *(int *)(lVar18 + 0x10);
    *(uint *)(lVar18 + 0x10) = iVar20 + 1U;
    if (*(uint *)(lVar18 + 0x14) < iVar20 + 1U) {
      FUN_148addece((longlong *)(lVar18 + 8),iVar20);
    }
    lVar18 = *(longlong *)(lVar18 + 8);
    lVar10 = (longlong)iVar20 * 0x30;
    *(longlong **)(lVar18 + lVar10) = plVar25 + 0x154;
    *(int *)(lVar18 + 8 + lVar10) = (int)lVar21;
    puVar27 = (undefined8 *)(lVar18 + 0xc + lVar10);
    *puVar27 = 0;
    puVar27[1] = 0;
    *(float *)(lVar18 + 0x1c + lVar10) = ((float)uVar4 * 3.1415927) / 30.0;
    *(float *)(lVar18 + 0x20 + lVar10) = ((float)uVar5 * 3.1415927) / 30.0;
    *(undefined2 *)(lVar18 + 0x24 + lVar10) = 1;
    *(undefined8 *)(lVar18 + 0x28 + lVar10) = 0;
    FUN_148add81a(plVar25 + 0x15b);
    lVar18 = *plVar7;
    iVar20 = *(int *)(lVar18 + 0x20);
    *(uint *)(lVar18 + 0x20) = iVar20 + 1U;
    if (*(uint *)(lVar18 + 0x24) < iVar20 + 1U) {
      FUN_148addf62((longlong *)(lVar18 + 0x18),iVar20);
    }
    lVar18 = *(longlong *)(lVar18 + 0x18);
    lVar21 = (longlong)iVar20 * 0x20;
    *(longlong **)(lVar18 + lVar21) = plVar25 + 0x163;
    puVar27 = (undefined8 *)(lVar18 + 8 + lVar21);
    *puVar27 = 0;
    puVar27[1] = 0;
    *(undefined1 *)(lVar18 + 0x18 + lVar21) = 1;
    *(undefined1 *)((longlong)plVar25 + 0x31d) = *(undefined1 *)((longlong)plVar25 + 0xb4c);
    local_1f8 = plVar25 + 0x15a;
    *(char *)(plVar25 + 0x15a) = (char)plVar25[0x159];
    uVar31 = *(undefined4 *)((longlong)plVar25 + 0xacc);
    *(undefined4 *)((longlong)plVar25 + 0xad4) = uVar31;
    lVar18 = *plVar7;
    iVar20 = *(int *)(lVar18 + 0x30);
    *(uint *)(lVar18 + 0x30) = iVar20 + 1U;
    uStack_1f0._0_4_ = uVar31;
    if (*(uint *)(lVar18 + 0x34) < iVar20 + 1U) {
      FUN_148addfe8((longlong *)(lVar18 + 0x28),iVar20);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar18 + 0x28) + (longlong)iVar20 * 0x10);
    *puVar1 = (undefined4)local_1f8;
    puVar1[1] = local_1f8._4_4_;
    puVar1[2] = (undefined4)uStack_1f0;
    puVar1[3] = uStack_1f0._4_4_;
    lVar18 = *plVar7;
    if (0 < *(int *)(lVar18 + 0x40)) {
      lVar21 = 0;
      uVar26 = 0;
      do {
        lVar18 = *(longlong *)(lVar18 + 0x38);
        uVar30 = *(undefined1 *)(lVar18 + 0xb + lVar21);
        cVar8 = *(char *)(*(longlong *)(lVar18 + lVar21) + 0x3c);
        cVar2 = (char)*local_1f8;
        if (cVar8 != '\0' && cVar2 != '\0') {
          if (cVar2 == '\x01') {
            uVar30 = 1;
          }
          else if (cVar2 == '\x03') {
            uVar30 = cVar8 == '\x02';
          }
          else if (cVar2 == '\x02') {
            uVar30 = cVar8 == '\x01';
          }
        }
        *(undefined1 *)(*(longlong *)(lVar18 + lVar21) + 0x34) = uVar30;
        *(undefined1 *)(lVar18 + 0xb + lVar21) = uVar30;
        uVar31 = FUN_148acb716(&local_1f8,uVar26 & 0xffffffff,*plVar7 + 0x38);
        *(undefined4 *)(*(longlong *)(lVar18 + lVar21) + 0x38) = uVar31;
        uVar26 = uVar26 + 1;
        lVar18 = *plVar7;
        lVar21 = lVar21 + 0xe8;
      } while ((longlong)uVar26 < (longlong)*(int *)(lVar18 + 0x40));
    }
  }
  local_1f8 = (longlong *)plVar25[0x188];
  uStack_1f0 = (void *)plVar25[0x189];
  FUN_1413dd5a2(plVar25 + 0x16a,&local_1f8);
  local_1f8 = plVar25 + 0x17c;
  FUN_1458b13c8(&uStack_1f0);
  lVar18 = *plVar7;
  iVar20 = *(int *)(lVar18 + 0x60);
  *(uint *)(lVar18 + 0x60) = iVar20 + 1U;
  if (*(uint *)(lVar18 + 100) < iVar20 + 1U) {
    FUN_14658e0ea((longlong *)(lVar18 + 0x58),iVar20);
  }
  memcpy((void *)((longlong)iVar20 * 0x88 + *(longlong *)(lVar18 + 0x58)),&local_1f8,0x88);
  *(char *)(plVar25 + 0x50) = (char)plVar25[0x4c];
  *(undefined4 *)((longlong)plVar25 + 0x284) = *(undefined4 *)((longlong)plVar25 + 0x264);
  plVar25[0x51] = plVar25[0x4d];
  *(int *)(plVar25 + 0x52) = (int)plVar25[0x4e];
  *(undefined4 *)((longlong)plVar25 + 0x294) = *(undefined4 *)((longlong)plVar25 + 0x274);
  *(int *)(plVar25 + 0x53) = (int)plVar25[0x4f];
  *(undefined4 *)((longlong)plVar25 + 0x29c) = *(undefined4 *)((longlong)plVar25 + 0x27c);
  lVar18 = *plVar7;
  iVar20 = *(int *)(lVar18 + 0xb0);
  *(uint *)(lVar18 + 0xb0) = iVar20 + 1U;
  if (*(uint *)(lVar18 + 0xb4) < iVar20 + 1U) {
    FUN_14658e180((longlong *)(lVar18 + 0xa8),iVar20);
  }
  *(longlong **)(*(longlong *)(lVar18 + 0xa8) + (longlong)iVar20 * 8) = plVar25 + 0x50;
  *(short *)((longlong)plVar25 + 0x2cc) = (short)plVar25[0x54];
  *(undefined4 *)(plVar25 + 0x5a) = *(undefined4 *)((longlong)plVar25 + 0x2a4);
  *(longlong *)((longlong)plVar25 + 0x2d4) = plVar25[0x55];
  *(longlong *)((longlong)plVar25 + 0x2dc) = plVar25[0x56];
  *(longlong *)((longlong)plVar25 + 0x2e4) = plVar25[0x57];
  *(longlong *)((longlong)plVar25 + 0x2ec) = plVar25[0x58];
  *(int *)((longlong)plVar25 + 0x2f4) = (int)plVar25[0x59];
  lVar18 = *plVar7;
  iVar20 = *(int *)(lVar18 + 0xc0);
  *(uint *)(lVar18 + 0xc0) = iVar20 + 1U;
  if (*(uint *)(lVar18 + 0xc4) < iVar20 + 1U) {
    FUN_14658e204((longlong *)(lVar18 + 0xb8),iVar20);
  }
  *(longlong *)(*(longlong *)(lVar18 + 0xb8) + (longlong)iVar20 * 8) = (longlong)plVar25 + 0x2cc;
  *(char *)((longlong)plVar25 + 0x304) = (char)plVar25[0x5f];
  plVar25[0x61] = *(longlong *)((longlong)plVar25 + 0x2fc);
  lVar18 = *plVar7;
  iVar20 = *(int *)(lVar18 + 0xd0);
  *(uint *)(lVar18 + 0xd0) = iVar20 + 1U;
  if (*(uint *)(lVar18 + 0xd4) < iVar20 + 1U) {
    FUN_14658e288((longlong *)(lVar18 + 200),iVar20);
  }
  *(longlong *)(*(longlong *)(lVar18 + 200) + (longlong)iVar20 * 8) = (longlong)plVar25 + 0x304;
  (**(code **)(*plVar25 + 0x698))(plVar25);
  (**(code **)(*plVar25 + 0x658))(plVar25);
  lVar18 = *plVar7;
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0x50) != 0)) {
    fVar32 = *(float *)((longlong)plVar25 + 0x1e4);
    local_108 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (*(int *)(lVar18 + 0x50) < 1) {
      local_c8 = 0;
      uStack_c5 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
    }
    else {
      lVar10 = 0;
      lVar24 = 0;
      lVar21 = 0;
      uVar26 = 0;
      do {
        lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x48) + lVar21);
        *(float *)(lVar18 + 0x38) = *(float *)(lVar18 + 0x34) + *(float *)(lVar18 + 0x30);
        (**(code **)(*local_260 + 0x6a0))
                  (local_260,&local_c8,local_260[0x139] + lVar10,uVar26 & 0xffffffff);
        uVar9 = uStack_100;
        lVar18 = (longlong)(int)uStack_100;
        uStack_100 = uStack_100 + 1;
        if (uStack_fc < uStack_100) {
          FUN_1403e3958(&local_108,uVar9);
        }
        plVar25 = local_260;
        *(ulonglong *)(local_108 + 0x10 + lVar18 * 0x18) = CONCAT53(uStack_b5,uStack_b8);
        puVar27 = (undefined8 *)(local_108 + lVar18 * 0x18);
        *puVar27 = CONCAT53(uStack_c5,local_c8);
        puVar27[1] = CONCAT44(uStack_bc,uStack_c0);
        lVar18 = *(longlong *)(*plVar7 + 0x48);
        *(undefined8 *)(lVar18 + 0x40 + lVar21) = *(undefined8 *)(local_108 + 0x10 + lVar24);
        uVar6 = ((undefined8 *)(local_108 + lVar24))[1];
        puVar27 = (undefined8 *)(lVar18 + 0x30 + lVar21);
        *puVar27 = *(undefined8 *)(local_108 + lVar24);
        puVar27[1] = uVar6;
        uVar26 = uVar26 + 1;
        lVar18 = *plVar7;
        lVar21 = lVar21 + 0x88;
        lVar24 = lVar24 + 0x18;
        lVar10 = lVar10 + 0x28;
      } while ((longlong)uVar26 < (longlong)*(int *)(lVar18 + 0x50));
      local_c8 = 0;
      uStack_c5 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      if (uStack_100 != 0) {
        cVar8 = FUN_143f7c0a6(&local_108,fVar32,&local_c8);
        uVar26 = (ulonglong)uStack_c0;
        if (0 < (int)uStack_c0 && cVar8 == '\0') {
          lVar18 = 0;
          do {
            *(float *)(CONCAT53(uStack_c5,local_c8) + lVar18 * 4) = fVar32 / (float)(int)uVar26;
            lVar18 = lVar18 + 1;
            uVar26 = (ulonglong)(int)uStack_c0;
          } while (lVar18 < (longlong)uVar26);
        }
      }
    }
    lVar18 = *plVar7;
    if (0 < *(int *)(lVar18 + 0x50)) {
      lVar21 = 0;
      lVar10 = 0;
      do {
        lVar18 = *(longlong *)(lVar18 + 0x48);
        fVar32 = *(float *)(*(longlong *)(lVar18 + lVar21) + 0x3c) /
                 *(float *)(CONCAT53(uStack_c5,local_c8) + lVar10 * 4);
        if (fVar32 < 0.0) {
          sqrtf(fVar32);
        }
        lVar18 = *(longlong *)(lVar18 + lVar21);
        fVar32 = *(float *)(lVar18 + 0x54);
        fVar34 = *(float *)(CONCAT53(uStack_c5,local_c8) + lVar10 * 4);
        if (1.0 <= fVar32) {
          fVar32 = 1.0;
        }
        fVar33 = *(float *)(lVar18 + 0x3c) / fVar34;
        if (fVar33 < 0.0) {
          fVar33 = sqrtf(fVar33);
        }
        else {
          fVar33 = SQRT(fVar33);
        }
        plVar7 = local_258;
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        fVar33 = fVar34 * (fVar32 + fVar32) * fVar33;
        *(float *)(*(longlong *)(*(longlong *)(*local_258 + 0x48) + lVar21) + 0x48) = fVar33;
        *(float *)(*(longlong *)(*(longlong *)(*local_258 + 0x48) + lVar21) + 0x44) = fVar33;
        fVar32 = *(float *)(CONCAT53(uStack_c5,local_c8) + lVar10 * 4);
        fVar34 = (float)(**(code **)(*plVar25 + 0x478))(plVar25);
        *(float *)(*(longlong *)(*(longlong *)(*plVar7 + 0x48) + lVar21) + 0x4c) = -fVar34 * fVar32;
        lVar10 = lVar10 + 1;
        lVar18 = *plVar7;
        lVar21 = lVar21 + 0x88;
      } while (lVar10 < *(int *)(lVar18 + 0x50));
    }
    if (CONCAT53(uStack_c5,local_c8) != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101835a FUN_14101835a body=10033 status=ok
// SIG undefined FUN_14101835a(void)

void FUN_14101835a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_148 [44];
  float local_11c;
  int local_118;
  float local_114;
  float local_110;
  undefined4 uStack_10c;
  ushort local_f8;
  byte local_f0;
  char local_e8 [16];
  longlong *local_d8;
  undefined4 local_c0 [2];
  float local_b8;
  int iStack_b4;
  float local_b0;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8[0] = '\0';
  local_c0[0] = 0;
  FUN_1456bb102(local_e8,*(undefined8 *)(param_2 + 0x1990));
  pfVar9 = &local_110;
  FUN_1448729ea(param_1 + 0x10,pfVar9,local_e8);
  fVar14 = local_110;
  if (local_f0 != 3) {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
  }
  local_11c = 0.0;
  local_b0 = modff(fVar14,&local_11c);
  local_b8 = (float)(int)local_11c;
  iStack_b4 = (int)local_b8 + 1;
  FUN_14101b03a(param_1 + 0x9f8,param_2 + 0xcf8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_1 + 0x70,pfVar9,local_e8);
  fVar14 = local_110;
  if (local_f0 != 3) {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
  }
  local_11c = 0.0;
  local_b0 = modff(fVar14,&local_11c);
  local_b8 = (float)(int)local_11c;
  iStack_b4 = (int)local_b8 + 1;
  FUN_14101b03a(param_1 + 0xa08,param_2 + 0xd58);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xdb8,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa18) = (fVar14 * 100000.0) / 2236.942;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xe08,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa1c) = (fVar14 * 100000.0) / 2236.942;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xe58,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa20) = (fVar14 * 100000.0) / 2236.942;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xea8,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa24) = (fVar14 * 100000.0) / 2236.942;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xef8,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa28) = (fVar14 * 100000.0) / 2236.942;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xf48,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa2c) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xf98,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa30) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0xfe8,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa34) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0x1038,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa38) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  *(float *)(param_1 + 0xa3c) = (*(float *)(param_2 + 0x1088) * 100000.0) / 2236.942;
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_2 + 0x108c);
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0x1090,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa44) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0x10e0,pfVar9,local_e8);
  if (local_f0 == 3) {
    fVar14 = local_110;
    bVar6 = 3;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    bVar6 = local_f0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
      bVar6 = local_f0;
    }
  }
  *(float *)(param_1 + 0xa48) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_2 + 0x1130);
  *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(param_2 + 0x1134);
  *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)(param_2 + 0x1138);
  *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_2 + 0x113c);
  lVar7 = FUN_1447e736e(param_2 + 0x11c8);
  if (lVar7 == 0) {
    lVar7 = param_2 + 0x1148;
  }
  else {
    lVar7 = FUN_1447e736e(param_2 + 0x11c8);
    lVar7 = lVar7 + 0x30;
  }
  FUN_14101ab68(param_1 + 0xa60,lVar7);
  lVar7 = param_1 + 0x5a0;
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x11f0);
  *(float *)(param_1 + 0xa98) = local_b0;
  *(ulonglong *)(param_1 + 0xa90) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1200);
  *(float *)(param_1 + 0xaa4) = local_b0;
  *(ulonglong *)(param_1 + 0xa9c) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1210);
  *(float *)(param_1 + 0xab0) = local_b0;
  *(ulonglong *)(param_1 + 0xaa8) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1220);
  *(float *)(param_1 + 0xabc) = local_b0;
  *(ulonglong *)(param_1 + 0xab4) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1230);
  *(float *)(param_1 + 0xac8) = local_b0;
  *(ulonglong *)(param_1 + 0xac0) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1240);
  *(float *)(param_1 + 0xad4) = local_b0;
  *(ulonglong *)(param_1 + 0xacc) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1250);
  *(float *)(param_1 + 0xae0) = local_b0;
  *(ulonglong *)(param_1 + 0xad8) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1260);
  *(float *)(param_1 + 0xaec) = local_b0;
  *(ulonglong *)(param_1 + 0xae4) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1270);
  *(float *)(param_1 + 0xaf8) = local_b0;
  *(ulonglong *)(param_1 + 0xaf0) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(lVar7,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  local_b8 = 0.0;
  local_114 = modff(fVar14,&local_b8);
  local_11c = (float)(int)local_b8;
  local_118 = (int)local_11c + 1;
  FUN_14101aa8c(&local_b8,param_2 + 0x1280);
  *(float *)(param_1 + 0xb04) = local_b0;
  *(ulonglong *)(param_1 + 0xafc) = CONCAT44(iStack_b4,local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  *(undefined1 *)(param_1 + 0xb08) = *(undefined1 *)(param_2 + 0x1290);
  *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(param_2 + 0x12e8);
  *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_2 + 0x12ec);
  pfVar9 = &local_110;
  FUN_1448729ea(param_1 + 0x608,pfVar9,local_e8);
  fVar14 = local_110;
  if (local_f0 != 3) {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
  }
  local_11c = 0.0;
  local_b0 = modff(fVar14,&local_11c);
  local_b8 = (float)(int)local_11c;
  iStack_b4 = (int)local_b8 + 1;
  FUN_14101ae68(param_1 + 0xb18,param_2 + 0x12f0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_1 + 0x668,pfVar9,local_e8);
  fVar14 = local_110;
  if (local_f0 != 3) {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
  }
  local_11c = 0.0;
  local_b0 = modff(fVar14,&local_11c);
  local_b8 = (float)(int)local_11c;
  iStack_b4 = (int)local_b8 + 1;
  FUN_14101ae68(param_1 + 0xb48,param_2 + 0x1350);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  lVar7 = FUN_1447e736e(param_2 + 0x1438);
  if (lVar7 == 0) {
    lVar7 = param_2 + 0x13b8;
  }
  else {
    lVar7 = FUN_1447e736e(param_2 + 0x1438);
    lVar7 = lVar7 + 0x30;
  }
  plVar2 = (longlong *)(param_1 + 0xb78);
  *(undefined4 *)(param_1 + 0xb80) = 0;
  if (*(int *)(param_1 + 0xb84) != 0) {
    FUN_14482f6fa(plVar2,0);
  }
  if (lVar7 != 0) {
    local_b8 = 0.0;
    local_110 = 0.0;
    FUN_14101b390(lVar7);
    if ((longlong)*(int *)(lVar7 + 0x78) == 0) {
      fVar14 = 0.0;
      fVar15 = 0.0;
    }
    else {
      fVar14 = *(float *)(*(longlong *)(lVar7 + 0x70) + 4);
      fVar15 = *(float *)(*(longlong *)(lVar7 + 0x70) + -0x18 +
                         (longlong)*(int *)(lVar7 + 0x78) * 0x1c);
    }
    fVar15 = fVar15 - fVar14;
    iVar11 = 0x14;
    do {
      fVar13 = (float)FUN_1448c9f94(lVar7,fVar14,0);
      fVar5 = local_b8;
      fVar4 = local_110;
      iVar8 = *(int *)(param_1 + 0xb80);
      *(uint *)(param_1 + 0xb80) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0xb84) < iVar8 + 1U) {
        FUN_14475e4ac(plVar2,iVar8);
      }
      *(float *)(*plVar2 + (longlong)iVar8 * 4) = (fVar13 - fVar5) / (fVar4 - fVar5);
      fVar14 = fVar14 + fVar15 / 20.0;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar11 = *(int *)(param_1 + 0xb80);
    fVar14 = 1.0 / (float)(iVar11 + -1);
    iVar8 = (int)(1.0 / fVar14);
    if (iVar8 < iVar11 + -1) {
      fVar14 = (1.0 - (float)iVar8 * fVar14) / fVar14;
      lVar7 = *plVar2;
      fVar14 = (1.0 - fVar14) * *(float *)(lVar7 + (longlong)iVar8 * 4) +
               fVar14 * *(float *)(lVar7 + 4 + (longlong)iVar8 * 4);
    }
    else {
      lVar7 = *plVar2;
      fVar14 = *(float *)(lVar7 + -4 + (longlong)iVar11 * 4);
    }
    *(uint *)(param_1 + 0xb80) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0xb84) < iVar11 + 1U) {
      FUN_14475e4ac(plVar2,iVar11);
      lVar7 = *plVar2;
    }
    *(uint *)(lVar7 + (longlong)iVar11 * 4) = ~-(uint)(fVar14 < 0.5) & 0x3f800000;
  }
  *(uint *)(param_1 + 0xb88) =
       -(uint)(0.0 < *(float *)(param_2 + 0x1460)) & (uint)(1.0 / *(float *)(param_2 + 0x1460));
  *(uint *)(param_1 + 0xb8c) =
       -(uint)(0.0 < *(float *)(param_2 + 0x1464)) & (uint)(1.0 / *(float *)(param_2 + 0x1464));
  *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_2 + 0x1470);
  *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(param_2 + 0x1468);
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_2 + 0x147c);
  *(undefined8 *)(param_1 + 0xb9c) = *(undefined8 *)(param_2 + 0x1474);
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0x1488);
  *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(param_2 + 0x1480);
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_2 + 0x1494);
  *(undefined8 *)(param_1 + 0xbb4) = *(undefined8 *)(param_2 + 0x148c);
  *(undefined4 *)(param_1 + 0xbc8) = *(undefined4 *)(param_2 + 0x14a0);
  *(undefined8 *)(param_1 + 0xbc0) = *(undefined8 *)(param_2 + 0x1498);
  *(undefined4 *)(param_1 + 0xbcc) = *(undefined4 *)(param_2 + 0x1998);
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0x14a8,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  *(float *)(param_1 + 0xbd0) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  pfVar9 = &local_110;
  FUN_1448729ea(param_2 + 0x14f8,pfVar9,local_e8);
  if (local_f0 == 3) {
    uVar12 = 3;
    fVar14 = local_110;
  }
  else {
    pfVar10 = &local_b8;
    FUN_1400b56fe(pfVar10,&local_110,3);
    fVar14 = 0.0;
    if (local_98 != 0) {
      fVar14 = local_b8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar10 = (float *)CONCAT44(iStack_b4,local_b8);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(iStack_b4,local_b8));
    }
    uVar12 = (uint)local_f0;
  }
  *(float *)(param_1 + 0xbd4) = fVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f8) {
      pfVar9 = (float *)CONCAT44(uStack_10c,local_110);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(CONCAT44(uStack_10c,local_110));
  }
  lVar7 = FUN_1447e736e(param_2 + 0x15d0);
  if (lVar7 == 0) {
    lVar7 = param_2 + 0x1550;
  }
  else {
    lVar7 = FUN_1447e736e(param_2 + 0x15d0);
    lVar7 = lVar7 + 0x30;
  }
  FUN_14101ab68(param_1 + 0xbd8,lVar7);
  *(undefined4 *)(param_1 + 0xc08) = *(undefined4 *)(param_2 + 0x15f8);
  *(undefined4 *)(param_1 + 0xc0c) = *(undefined4 *)(param_2 + 0x15fc);
  *(undefined4 *)(param_1 + 0xc10) = *(undefined4 *)(param_2 + 0x1600);
  *(undefined4 *)(param_1 + 0xc14) = *(undefined4 *)(param_2 + 0x1604);
  *(undefined1 *)(param_1 + 0xc18) = *(undefined1 *)(param_2 + 0x1608);
  *(undefined4 *)(param_1 + 0xc1c) = *(undefined4 *)(param_2 + 0x160c);
  *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(param_2 + 0x1610);
  *(undefined4 *)(param_1 + 0xc24) = *(undefined4 *)(param_2 + 0x1614);
  lVar7 = FUN_1447e736e(param_2 + 0x16a0);
  if (lVar7 == 0) {
    lVar7 = param_2 + 0x1620;
  }
  else {
    lVar7 = FUN_1447e736e(param_2 + 0x16a0);
    lVar7 = lVar7 + 0x30;
  }
  FUN_14101ab68(param_1 + 0xc28,lVar7);
  *(undefined4 *)(param_1 + 0xc58) = *(undefined4 *)(param_2 + 0x16c8);
  *(undefined4 *)(param_1 + 0xc5c) = *(undefined4 *)(param_2 + 0x16cc);
  *(undefined4 *)(param_1 + 0xc60) = *(undefined4 *)(param_2 + 0x16d0);
  *(undefined4 *)(param_1 + 0xc64) = *(undefined4 *)(param_2 + 0x16d4);
  fVar14 = cosf(*(float *)(param_2 + 0x16d8) * 0.017453292);
  *(float *)(param_1 + 0xc68) = fVar14;
  *(undefined4 *)(param_1 + 0xc6c) = *(undefined4 *)(param_2 + 0x16dc);
  *(undefined4 *)(param_1 + 0xc70) = *(undefined4 *)(param_2 + 0x16e0);
  *(undefined4 *)(param_1 + 0xc74) = *(undefined4 *)(param_2 + 0x16e4);
  *(undefined4 *)(param_1 + 0xc78) = *(undefined4 *)(param_2 + 0x16e8);
  FUN_1448173f8(local_c0);
  if ((local_e8[0] == '\x03') && (local_d8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101aa8c FUN_14101aa8c body=219 status=ok
// SIG undefined FUN_14101aa8c(void)

void FUN_14101aa8c(float *param_1,longlong *param_2,uint *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = (int)param_2[1];
  uVar6 = iVar2 - 1;
  uVar5 = *param_3;
  if ((int)uVar6 <= (int)*param_3) {
    uVar5 = uVar6;
  }
  if ((int)uVar5 < 1) {
    uVar5 = 0;
  }
  fVar11 = 5.0;
  fVar9 = 1.0;
  fVar7 = 500.0;
  fVar8 = 500.0;
  fVar10 = 1.0;
  fVar12 = 5.0;
  if ((int)uVar5 < iVar2) {
    lVar3 = *param_2;
    uVar4 = (ulonglong)uVar5;
    fVar12 = *(float *)(lVar3 + uVar4 * 0xc);
    fVar10 = *(float *)(lVar3 + 4 + uVar4 * 0xc);
    fVar8 = *(float *)(lVar3 + 8 + uVar4 * 0xc);
  }
  if ((int)param_3[1] < (int)uVar6) {
    uVar6 = param_3[1];
  }
  uVar5 = 0;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  if ((int)uVar5 < iVar2) {
    lVar3 = *param_2;
    uVar4 = (ulonglong)uVar5;
    fVar11 = *(float *)(lVar3 + uVar4 * 0xc);
    fVar9 = *(float *)(lVar3 + 4 + uVar4 * 0xc);
    fVar7 = *(float *)(lVar3 + 8 + uVar4 * 0xc);
  }
  fVar1 = (float)param_3[2];
  *param_1 = (fVar11 - fVar12) * fVar1 + fVar12;
  param_1[1] = (fVar9 - fVar10) * fVar1 + fVar10;
  param_1[2] = (fVar7 - fVar8) * fVar1 + fVar8;
  return;
}



// FUNCTION 14101ab68 FUN_14101ab68 body=269 status=ok
// SIG undefined FUN_14101ab68(void)

void FUN_14101ab68(longlong param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14101ae08(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0xffefffffffffffff;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_2 + 0x78) == 0) {
      fVar3 = 0.0;
      fVar4 = 0.0;
    }
    else {
      fVar3 = *(float *)(*(longlong *)(param_2 + 0x70) + 4);
      fVar4 = *(float *)(*(longlong *)(param_2 + 0x70) + -0x18 +
                        (longlong)*(int *)(param_2 + 0x78) * 0x1c);
    }
    fVar4 = fVar4 - fVar3;
    iVar1 = 0x15;
    do {
      fVar2 = (float)FUN_1448c9f94(param_2,fVar3,0);
      local_58 = (double)fVar2;
      local_60 = (double)fVar3;
      FUN_14101ac76(param_1,&local_60);
      fVar3 = fVar3 + fVar4 / 20.0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101ac76 FUN_14101ac76 body=138 status=ok
// SIG undefined FUN_14101ac76(void)

void FUN_14101ac76(longlong *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14101ad00(param_1,iVar3);
  }
  dVar2 = param_2[1];
  pdVar1 = (double *)(*param_1 + (longlong)iVar3 * 0x10);
  *pdVar1 = *param_2;
  pdVar1[1] = dVar2;
  dVar2 = *param_2;
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 < (double)param_1[2]) {
    param_1[2] = (longlong)dVar2;
    uVar4 = SUB84(*param_2,0);
    uVar5 = (undefined4)((ulonglong)*param_2 >> 0x20);
  }
  if ((double)param_1[3] <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != (double)param_1[3]) {
    param_1[3] = CONCAT44(uVar5,uVar4);
    uVar4 = SUB84(*param_2,0);
    uVar5 = (undefined4)((ulonglong)*param_2 >> 0x20);
  }
  if ((double)CONCAT44(uVar5,uVar4) <= (double)param_1[4] &&
      (double)param_1[4] != (double)CONCAT44(uVar5,uVar4)) {
    param_1[4] = CONCAT44(uVar5,uVar4);
    uVar4 = SUB84(*param_2,0);
    uVar5 = (undefined4)((ulonglong)*param_2 >> 0x20);
  }
  if ((double)param_1[5] <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != (double)param_1[5]) {
    param_1[5] = CONCAT44(uVar5,uVar4);
  }
  return;
}



// FUNCTION 14101ad00 FUN_14101ad00 body=262 status=ok
// SIG undefined FUN_14101ad00(void)

void FUN_14101ad00(longlong param_1,int param_2)

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



// FUNCTION 14101ae08 FUN_14101ae08 body=96 status=ok
// SIG undefined FUN_14101ae08(void)

void FUN_14101ae08(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14101ae68 FUN_14101ae68 body=465 status=ok
// SIG undefined FUN_14101ae68(void)

void FUN_14101ae68(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14101ae08(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0xffefffffffffffff;
  lVar1 = FUN_14101b328(param_2,*param_3);
  lVar2 = FUN_14101b328(param_2,param_3[1]);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    fVar4 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    if ((longlong)*(int *)(lVar1 + 0x78) != 0) {
      fVar7 = *(float *)(*(longlong *)(lVar1 + 0x70) + 4);
      fVar8 = *(float *)(*(longlong *)(lVar1 + 0x70) + -0x18 +
                        (longlong)*(int *)(lVar1 + 0x78) * 0x1c);
    }
    fVar5 = 0.0;
    if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
      fVar4 = *(float *)(*(longlong *)(lVar2 + 0x70) + 4);
      fVar5 = *(float *)(*(longlong *)(lVar2 + 0x70) + -0x18 +
                        (longlong)*(int *)(lVar2 + 0x78) * 0x1c);
    }
    if (fVar8 <= fVar5) {
      fVar8 = fVar5;
    }
    if (fVar4 <= fVar7) {
      fVar7 = fVar4;
    }
    fVar8 = fVar8 - fVar7;
    fVar4 = (float)param_3[2];
    iVar3 = 0x15;
    do {
      fVar5 = (float)FUN_1448c9f94(lVar1,fVar7,0);
      fVar6 = (float)FUN_1448c9f94(lVar2,fVar7);
      local_88 = (double)((fVar6 - fVar5) * fVar4 + fVar5);
      local_90 = (double)(fVar7 * 0.017453292);
      FUN_14101ac76(param_1,&local_90);
      fVar7 = fVar7 + fVar8 / 20.0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101b03a FUN_14101b03a body=748 status=ok
// SIG undefined FUN_14101b03a(void)

void FUN_14101b03a(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [40];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14482f6fa(param_1,0);
  }
  lVar1 = FUN_14101b328(param_2,*param_3);
  lVar2 = FUN_14101b328(param_2,param_3[1]);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    fVar5 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    if ((longlong)*(int *)(lVar1 + 0x78) != 0) {
      fVar9 = *(float *)(*(longlong *)(lVar1 + 0x70) + 4);
      fVar10 = *(float *)(*(longlong *)(lVar1 + 0x70) + -0x18 +
                         (longlong)*(int *)(lVar1 + 0x78) * 0x1c);
    }
    fVar8 = 0.0;
    if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
      fVar5 = *(float *)(*(longlong *)(lVar2 + 0x70) + 4);
      fVar8 = *(float *)(*(longlong *)(lVar2 + 0x70) + -0x18 +
                        (longlong)*(int *)(lVar2 + 0x78) * 0x1c);
    }
    if (fVar10 <= fVar8) {
      fVar10 = fVar8;
    }
    if (fVar5 <= fVar9) {
      fVar9 = fVar5;
    }
    fVar5 = (float)param_3[2];
    local_c4 = 0.0;
    local_c8 = 0.0;
    local_cc = 0.0;
    local_d0 = 0.0;
    FUN_14101b390(lVar1,&local_c4,&local_c8);
    FUN_14101b390(lVar2,&local_cc,&local_d0);
    fVar8 = local_c4;
    if (local_cc <= local_c4) {
      fVar8 = local_cc;
    }
    fVar10 = fVar10 - fVar9;
    fVar11 = local_c8;
    if (local_c8 <= local_d0) {
      fVar11 = local_d0;
    }
    iVar4 = 0x14;
    do {
      fVar6 = (float)FUN_1448c9f94(lVar1,fVar9,0);
      fVar7 = (float)FUN_1448c9f94(lVar2,fVar9);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_14475e4ac(param_1,iVar3);
      }
      fVar6 = (fVar6 - fVar8) / (fVar11 - fVar8);
      *(float *)(*param_1 + (longlong)iVar3 * 4) =
           ((fVar7 - fVar8) / (fVar11 - fVar8) - fVar6) * fVar5 + fVar6;
      fVar9 = fVar9 + fVar10 / 20.0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    fVar9 = 1.0 / (float)(iVar4 + -1);
    iVar3 = (int)(1.0 / fVar9);
    if (iVar3 < iVar4 + -1) {
      fVar9 = (1.0 - (float)iVar3 * fVar9) / fVar9;
      lVar1 = *param_1;
      fVar9 = (1.0 - fVar9) * *(float *)(lVar1 + (longlong)iVar3 * 4) +
              fVar9 * *(float *)(lVar1 + 4 + (longlong)iVar3 * 4);
    }
    else {
      lVar1 = *param_1;
      fVar9 = *(float *)(lVar1 + -4 + (longlong)iVar4 * 4);
    }
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_14475e4ac(param_1,iVar4);
      lVar1 = *param_1;
    }
    *(uint *)(lVar1 + (longlong)iVar4 * 4) = ~-(uint)(fVar9 < 0.5) & 0x3f800000;
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101b328 FUN_14101b328 body=103 status=ok
// SIG undefined FUN_14101b328(void)

longlong FUN_14101b328(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = (int)param_1[1] - 1;
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  lVar3 = 0;
  if ((int)uVar1 < 1) {
    uVar1 = 0;
  }
  if ((int)uVar1 < (int)param_1[1]) {
    lVar3 = *param_1;
    lVar4 = lVar3 + (ulonglong)uVar1 * 0xb0 + 0x88;
    lVar2 = FUN_1447e736e(lVar4);
    if (lVar2 == 0) {
      lVar3 = lVar3 + (ulonglong)uVar1 * 0xb0 + 8;
    }
    else {
      lVar3 = FUN_1447e736e(lVar4);
      lVar3 = lVar3 + 0x30;
    }
  }
  return lVar3;
}



// FUNCTION 14101b390 FUN_14101b390 body=262 status=ok
// SIG undefined FUN_14101b390(void)

void FUN_14101b390(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    *param_3 = 0.0;
    *param_2 = 0.0;
  }
  else {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x70) + 8);
    *param_3 = fVar1;
    *param_2 = fVar1;
    if (0 < *(int *)(param_1 + 0x78)) {
      lVar5 = 0x20;
      uVar4 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x70);
        fVar1 = *(float *)(lVar3 + -0x18 + lVar5);
        fVar6 = *param_2;
        if (fVar1 <= *param_2) {
          fVar6 = fVar1;
        }
        *param_2 = fVar6;
        fVar1 = *(float *)(lVar3 + -0x18 + lVar5);
        fVar6 = *param_3;
        if (*param_3 <= fVar1) {
          fVar6 = fVar1;
        }
        *param_3 = fVar6;
        if (iVar2 - 1 != uVar4 && *(char *)(lVar3 + -0x20 + lVar5) == '\x02') {
          fVar1 = *(float *)(*(longlong *)(param_1 + 0x70) + lVar5);
          FUN_14101b496(param_1,0,fVar1,*(undefined4 *)(lVar3 + -0x18 + lVar5),
                        (fVar1 - *(float *)(lVar3 + -0x1c + lVar5)) * 0.2,0,3,param_3,param_2);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x1c;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x78));
    }
  }
  return;
}



// FUNCTION 14101b496 FUN_14101b496 body=586 status=ok
// SIG undefined FUN_14101b496(void)

void FUN_14101b496(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  int param_6,int param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  float fVar5;
  
  if (param_6 < param_7) {
    auVar4._4_12_ = in_XMM1._4_12_;
    auVar4._0_4_ = in_XMM1._0_4_ - param_5;
    fVar1 = (float)FUN_1448c9f94(param_1,auVar4._0_8_,0);
    fVar5 = in_XMM1._0_4_ + param_5;
    if (fVar5 < param_3 + param_5) {
      fVar1 = param_4 - fVar1;
      do {
        fVar2 = (float)FUN_1448c9f94(param_1);
        fVar3 = fVar2;
        if (fVar2 <= *param_8) {
          fVar3 = *param_8;
        }
        *param_8 = fVar3;
        fVar3 = fVar2;
        if (*param_9 <= fVar2) {
          fVar3 = *param_9;
        }
        *param_9 = fVar3;
        param_4 = fVar2 - param_4;
        fVar3 = (float)(-(uint)(0.0 < param_4) & 0x3f800000 |
                       ~-(uint)(0.0 < param_4) & -(uint)(param_4 < 0.0) & 0xbf800000);
        fVar1 = (float)(-(uint)(0.0 < fVar1) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar1) & -(uint)(fVar1 < 0.0) & 0xbf800000);
        if ((fVar3 != fVar1) || (NAN(fVar3) || NAN(fVar1))) {
          FUN_1448c9f94(param_1);
          FUN_14101b496(param_1);
        }
        fVar5 = fVar5 + param_5;
        fVar1 = param_4;
        param_4 = fVar2;
      } while (fVar5 < param_3 + param_5);
    }
  }
  return;
}



// FUNCTION 14101b6e6 FUN_14101b6e6 body=228 status=ok
// SIG undefined FUN_14101b6e6(void)

longlong FUN_14101b6e6(void)

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
  if (DAT_14cb45160 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587df46;
    local_38 = &LAB_1482240d9;
    local_40 = &LAB_146480b59;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0x13b0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonButtonBase",&DAT_14cb45160,FUN_146480b32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101b7cc FUN_14101b7cc body=118 status=ok
// SIG undefined FUN_14101b7cc(void)

void FUN_14101b7cc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14101b842(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014101b7e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_14101b9fc();
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14afddb30;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0x43340000;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  return;
}



// FUNCTION 14101b842 FUN_14101b842 body=191 status=ok
// SIG undefined FUN_14101b842(void)

longlong FUN_14101b842(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14101b902();
  lVar3 = *param_1;
  if (DAT_14cb54210 != DAT_14cb5423c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb54240;
    if (DAT_14cb54248 != (undefined *)0x0) {
      puVar7 = DAT_14cb54248;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb54250 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb54208 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb54200;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14101b902 FUN_14101b902 body=152 status=ok
// SIG undefined FUN_14101b902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14101b902(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54258) {
    FUN_144b3d300(&DAT_14cb54258);
    if (DAT_14cb54258 == -1) {
      DAT_14cb54228 = 0;
      DAT_14cb54230 = 0;
      DAT_14cb54208 = 0;
      _DAT_14cb54210 = 0;
      _DAT_14cb54234 = 0xffffffff00000080;
      DAT_14cb5423c = 0;
      DAT_14cb54248 = 0;
      DAT_14cb54250 = 0;
      atexit(FUN_143c269fa);
      _Init_thread_footer(&DAT_14cb54258);
      return;
    }
  }
  return;
}



// FUNCTION 14101b99a FUN_14101b99a body=97 status=ok
// SIG undefined FUN_14101b99a(void)

void FUN_14101b99a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14101b9fc();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14afddb30;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0x43340000;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 14101b9fc FUN_14101b9fc body=96 status=ok
// SIG undefined FUN_14101b9fc(void)

void FUN_14101b9fc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xa00,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x14;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14101ba5c FUN_14101ba5c body=81 status=ok
// SIG undefined FUN_14101ba5c(void)

longlong FUN_14101ba5c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_14101baae(param_2);
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar2 = FUN_140059518(lVar4 + 8);
      if (lVar2 == lVar1) {
        return lVar4;
      }
      lVar4 = lVar4 + 0x70;
      lVar3 = lVar3 + -0x70;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 14101baae FUN_14101baae body=90 status=ok
// SIG undefined FUN_14101baae(void)

undefined8 FUN_14101baae(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x374) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x370);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x374)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14101bb0e FUN_14101bb0e body=221 status=ok
// SIG undefined FUN_14101bb0e(void)

longlong FUN_14101bb0e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08748 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d30745;
    local_40 = &LAB_146402390;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/Engine",L"SoundBase",&DAT_14cb08748,FUN_14640236e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08748;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101bbec FUN_14101bbec body=142 status=ok
// SIG undefined FUN_14101bbec(void)

undefined8 FUN_14101bbec(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x68) == '\0') {
      uVar1 = (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x30))(param_1 + 0xe0,param_2);
      uVar1 = FUN_14101bc7a(param_1 + 0xe0,uVar1,param_3);
      return uVar1;
    }
    if (((*(char *)(param_2 + 0x68) == '\x01') && (*(longlong *)(param_1 + 0x88) != 0)) &&
       (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
      if (lVar2 != 0) {
        uVar1 = FUN_14101bce2(lVar2,param_2,param_3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14101bc7a FUN_14101bc7a body=104 status=ok
// SIG undefined FUN_14101bc7a(void)

ulonglong FUN_14101bc7a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(char *)((longlong)param_1 + 0x2c) == '\0') && ((*(byte *)(param_2 + 0x78) & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    FUN_1418aafcc(param_1,param_2);
    uVar1 = FUN_1411dcb92(param_2,param_3);
    uVar2 = (ulonglong)uVar1;
    FUN_1418ab04e(param_1,param_2);
    if ((((char)uVar1 != '\0') && (*(char *)((longlong)param_1 + 0x2c) != '\0')) &&
       (uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1), (*(byte *)(param_2 + 0x78) & 1) != 0)) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
    }
  }
  return uVar2;
}



// FUNCTION 14101bce2 FUN_14101bce2 body=52 status=ok
// SIG undefined FUN_14101bce2(void)

void FUN_14101bce2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x30))(param_1 + 0x1a8);
  FUN_14101bc7a(param_1 + 0x1a8,uVar1,param_3);
  return;
}



// FUNCTION 14101bd16 FUN_14101bd16 body=108 status=ok
// SIG undefined FUN_14101bd16(void)

undefined8 * FUN_14101bd16(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 4)])(param_1);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  *(undefined1 *)(param_1 + 4) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101bd84 FUN_14101bd84 body=84 status=ok
// SIG undefined FUN_14101bd84(void)

void FUN_14101bd84(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14101bdda(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101bdda FUN_14101bdda body=550 status=ok
// SIG undefined FUN_14101bdda(void)

void FUN_14101bdda(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((char)param_2[1] == '\x01') {
    lVar4 = *param_1;
    uVar2 = *param_2;
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_14101be2f:
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
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14101be2f;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  lVar4 = *param_1;
  uVar2 = param_2[0xc];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_14101bebb:
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
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14101bebb;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x1c];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_14101bf80;
  if (iVar3 == 0) {
LAB_14101bf45:
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
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14101bf45;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_14101bf80:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 14101c000 FUN_14101c000 body=117 status=ok
// SIG undefined FUN_14101c000(void)

void FUN_14101c000(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x2608) != 0) {
    FUN_14101c144();
    *(undefined8 *)(param_1 + 0x2608) = 0;
    plVar3 = *(longlong **)(param_1 + 0x2610);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2610) = 0;
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
  FUN_14101c080(param_1);
  FUN_140d6119a(param_1,param_2);
  return;
}



// FUNCTION 14101c076 FUN_14101c076 body=9 status=ok
// SIG undefined FUN_14101c076(void)

void FUN_14101c076(longlong param_1)

{
  FUN_14101c0f0(param_1 + 0x10);
  return;
}



// FUNCTION 14101c080 FUN_14101c080 body=111 status=ok
// SIG undefined FUN_14101c080(void)

void FUN_14101c080(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x2620) != 0) {
    FUN_1401bf202();
    lVar2 = *(longlong *)(param_1 + 0x2620);
    lVar3 = *(longlong *)(lVar2 + 0x2a8);
    if (lVar3 != 0) {
      FUN_140aeefbc(lVar3,0,1);
      *(undefined8 *)(lVar2 + 0x2a8) = 0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2618);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
    *(undefined8 *)(param_1 + 0x2618) = 0;
  }
  return;
}



// FUNCTION 14101c0f0 FUN_14101c0f0 body=83 status=ok
// SIG undefined FUN_14101c0f0(void)

void FUN_14101c0f0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FUN_14101c144();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014101c13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14101c144 FUN_14101c144 body=357 status=ok
// SIG undefined FUN_14101c144(void)

void FUN_14101c144(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((((*(int *)(param_1 + 0x18) != 0) && (uVar1 = *(uint *)(param_1 + 0x14), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x18))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = 0;
    }
    FUN_140457ffc(lVar5 + 0x330,param_1);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x50);
  lVar5 = (longlong)local_30;
  pvVar6 = *(void **)(param_1 + 0x48);
  if (lVar5 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1488b6fb2(&local_38,local_30,0);
    memcpy(local_38,pvVar6,lVar5 << 3);
    if ((longlong)local_30 != 0) {
      lVar5 = (longlong)local_30 << 3;
      pvVar6 = local_38;
      do {
        uVar3 = FUN_14479d2ce(pvVar6);
        FUN_1488b1414(param_1,uVar3);
        pvVar6 = (void *)((longlong)pvVar6 + 8);
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101c2b2 FUN_14101c2b2 body=493 status=ok
// SIG undefined FUN_14101c2b2(void)

longlong FUN_14101c2b2(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1409e16e4();
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x1f8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  *(undefined8 *)(param_1 + 0x208) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x210) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = uVar3;
  *(undefined4 *)(param_1 + 0x21c) = uVar4;
  *(undefined8 *)(param_1 + 0x220) = DAT_14c8464f0;
  puVar6 = &DAT_14c846480;
  puVar7 = local_98;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1402c81c6(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(char *)(param_1 + 0x260) = *(char *)(param_1 + 0x1b8) * '\x02';
  *(undefined2 *)(param_1 + 0x262) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0xffffffffff7fffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2ac) = 0;
  *(undefined1 *)(param_1 + 0x2b5) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x35f) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x368) = 1;
  *(undefined1 *)(param_1 + 0x37f) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3e0) = 0;
  *(undefined1 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101c4a0 FUN_14101c4a0 body=513 status=ok
// SIG undefined FUN_14101c4a0(void)

undefined8 * FUN_14101c4a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14ae8c0a0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x15;
  puVar2 = param_1 + 0x17;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 0x1a) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      puVar3 = *(undefined8 **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_144727cd0(plVar1,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_14101c6a2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14101c6a2 FUN_14101c6a2 body=157 status=ok
// SIG undefined FUN_14101c6a2(void)

void FUN_14101c6a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ae8c170;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_14101c979(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) goto LAB_14101c6ff;
  while ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    param_1[0xf] = *(undefined8 *)param_1[0xf];
LAB_14101c6ff:
    FUN_1400020a8();
  }
  FUN_14101c73f(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_14101c72b;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_14101c72b:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14101c73f FUN_14101c73f body=53 status=ok
// SIG undefined FUN_14101c73f(void)

void FUN_14101c73f(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14101c774 FUN_14101c774 body=516 status=ok
// SIG undefined FUN_14101c774(void)

undefined8 * FUN_14101c774(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_LAB_14ae8c240;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 4;
  puVar2 = param_1 + 6;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = puVar2;
  if (*(int *)(param_1 + 9) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar1;
  if (iStack_44 < *(int *)(local_50 + 3)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (lVar3 != 0) {
        FUN_1483eb08c(lVar3);
        FUN_1400020a8(lVar3);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 3));
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(plVar1,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_1447af2bb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14101c979 FUN_14101c979 body=84 status=ok
// SIG undefined FUN_14101c979(void)

void FUN_14101c979(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1447af328(*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10));
        if (*(longlong *)(lVar1 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14101c9ce FUN_14101c9ce body=45 status=ok
// SIG undefined FUN_14101c9ce(void)

undefined8 * FUN_14101c9ce(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x598) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14101ca58(*(longlong *)(param_1 + 0x598),param_2);
  }
  return param_2;
}



// FUNCTION 14101c9fb FUN_14101c9fb body=93 status=ok
// SIG undefined FUN_14101c9fb(void)

void FUN_14101c9fb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-3];
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


