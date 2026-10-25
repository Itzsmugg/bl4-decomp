// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146d476ca FUN_146d476ca body=344 status=ok
// SIG undefined FUN_146d476ca(void)

ulonglong FUN_146d476ca(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = 0;
  local_2c = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar5 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar5 * 0x20) == param_2) {
          uVar4 = 0;
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar4 = (ulonglong)*(int *)(lVar1 + 0x10);
            if (uVar4 == 0) goto LAB_146d477b0;
            iVar5 = 1;
            lVar9 = 0;
            lVar8 = 0;
            goto LAB_146d47794;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  goto LAB_146d476f3;
  while( true ) {
    lVar8 = lVar8 + 0x100000000;
    iVar5 = iVar5 + 1;
    lVar9 = lVar9 + 8;
    if (uVar4 << 3 == lVar9) break;
LAB_146d47794:
    if (*(int *)(*(longlong *)(lVar1 + 8) + lVar9) == param_3) {
      if (iVar5 != 0) {
        lVar8 = lVar8 >> 0x20;
        piVar2 = (int *)(*(longlong *)(lVar1 + 8) + 4 + lVar8 * 8);
        *piVar2 = *piVar2 + -1;
        lVar9 = *(longlong *)(lVar1 + 8);
        uVar3 = *(uint *)(lVar1 + 0x10);
        uVar4 = (ulonglong)uVar3;
        if (*(int *)(lVar9 + 4 + lVar8 * 8) < 1) {
          iVar5 = uVar3 - iVar5;
          if (iVar5 != 0) {
            iVar7 = 1;
            if (iVar5 < 1) {
              iVar7 = iVar5;
            }
            memmove((void *)(lVar9 + lVar8 * 8),(void *)(lVar9 + (longlong)(int)(uVar3 - iVar7) * 8)
                    ,(longlong)iVar7 << 3);
            uVar3 = *(uint *)(lVar1 + 0x10);
          }
          *(uint *)(lVar1 + 0x10) = uVar3 - 1;
          FUN_146d5f172(lVar1 + 8);
          uVar4 = (ulonglong)*(uint *)(lVar1 + 0x10);
        }
      }
      break;
    }
  }
  if ((int)uVar4 == 0) {
LAB_146d477b0:
    FUN_14054266e(param_1,&local_2c);
    uVar4 = 0;
  }
LAB_146d476f3:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146d47824 FUN_146d47824 body=197 status=ok
// SIG undefined FUN_146d47824(void)

void FUN_146d47824(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_3 != (longlong *)0x0 && param_2 != (longlong *)0x0) {
    bVar2 = *(byte *)((longlong)param_3 + 0xc);
    if (1 < (bVar2 | *(byte *)((longlong)param_2 + 0xc))) {
      uVar3 = *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
      uVar4 = *(undefined4 *)(*(longlong *)(*param_3 + 0x80) + (longlong)(int)param_3[1] * 4);
      if (1 < *(byte *)((longlong)param_2 + 0xc)) {
        iVar5 = FUN_146d476ca(param_1,uVar3,uVar4);
        if (iVar5 == 0) {
          pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x2c0) + 10 + (longlong)(int)param_2[1] * 0x10)
          ;
          *pbVar1 = *pbVar1 & 0xfd;
        }
      }
      if (1 < bVar2) {
        iVar5 = FUN_146d476ca(param_1,uVar4,uVar3);
        if (iVar5 == 0) {
          pbVar1 = (byte *)(*(longlong *)(*param_3 + 0x2c0) + 10 + (longlong)(int)param_3[1] * 0x10)
          ;
          *pbVar1 = *pbVar1 & 0xfd;
        }
      }
    }
  }
  return;
}



// FUNCTION 146d478e9 FUN_146d478e9 body=628 status=ok
// SIG undefined FUN_146d478e9(void)

void FUN_146d478e9(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 < 0x4c) {
    if (bVar1 != 0xb) {
      if (bVar1 != 0x4b) {
        lVar2 = param_1;
        if (bVar1 != 0xc) goto LAB_146d479c8;
LAB_146d47aed:
        local_c8 = *param_3;
        uStack_c0 = param_3[1];
        local_b8 = *(undefined4 *)(param_3 + 2);
        uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
        uStack_b0 = *(undefined4 *)(param_3 + 3);
        uStack_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
        local_a8 = *(undefined4 *)(param_3 + 4);
        uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_a0 = *(undefined4 *)(param_3 + 5);
        uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
        local_98 = param_3[6];
        local_88 = 0x3ff0000000000000;
        uStack_80 = 0x3ff0000000000000;
        local_78 = 0x3ff0000000000000;
        goto LAB_146d47b51;
      }
      param_1 = *(longlong *)(param_1 + 0x28);
    }
    local_c8 = *param_3;
    uStack_c0 = param_3[1];
    local_b8 = *(undefined4 *)(param_3 + 2);
    uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_b0 = *(undefined4 *)(param_3 + 3);
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_a8 = *(undefined4 *)(param_3 + 4);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_a0 = *(undefined4 *)(param_3 + 5);
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_98 = param_3[6];
    local_88 = 0x3ff0000000000000;
    uStack_80 = 0x3ff0000000000000;
    local_78 = 0x3ff0000000000000;
    lVar2 = param_1;
LAB_146d47992:
    local_d8 = param_5 + 8;
    local_e0 = param_5 + 4;
    local_e8 = param_5;
    uStack_70 = 0;
    uStack_90 = 0;
    FUN_1404c81ee(lVar2,local_b8,&local_c8,&local_60);
  }
  else {
    if (bVar1 == 0x8b) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      local_c8 = *param_3;
      uStack_c0 = param_3[1];
      local_b8 = *(undefined4 *)(param_3 + 2);
      uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_b0 = *(undefined4 *)(param_3 + 3);
      uStack_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_a8 = *(undefined4 *)(param_3 + 4);
      uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_a0 = *(undefined4 *)(param_3 + 5);
      uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_98 = param_3[6];
      local_88 = *(undefined8 *)(param_1 + 0x20);
      uStack_80 = *(undefined8 *)(param_1 + 0x28);
      local_78 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_146d47992;
    }
    if (bVar1 == 0x4c) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      goto LAB_146d47aed;
    }
    if (bVar1 != 0x8c) goto LAB_146d479c8;
    lVar2 = *(longlong *)(param_1 + 0x88);
    local_c8 = *param_3;
    uStack_c0 = param_3[1];
    local_b8 = *(undefined4 *)(param_3 + 2);
    uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_b0 = *(undefined4 *)(param_3 + 3);
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_a8 = *(undefined4 *)(param_3 + 4);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_a0 = *(undefined4 *)(param_3 + 5);
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_98 = param_3[6];
    local_88 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    local_78 = *(undefined8 *)(param_1 + 0x30);
LAB_146d47b51:
    local_d8 = param_5 + 8;
    local_e0 = param_5 + 4;
    uStack_70 = 0;
    uStack_90 = 0;
    local_e8 = param_5;
    FUN_146d5f20e(lVar2,local_b8,&local_c8,&local_60);
  }
  param_4[2] = local_50;
  *param_4 = local_60;
  param_4[1] = uStack_58;
  param_4[5] = local_38;
  param_4[3] = local_48;
  param_4[4] = uStack_40;
  *(undefined4 *)(param_4 + 6) = local_30;
  *(undefined4 *)((longlong)param_4 + 0x34) = uStack_2c;
  *(undefined4 *)(param_4 + 7) = uStack_28;
  *(undefined4 *)((longlong)param_4 + 0x3c) = uStack_24;
  param_4[8] = local_20;
LAB_146d479c8:
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d47b5e FUN_146d47b5e body=656 status=ok
// SIG undefined FUN_146d47b5e(void)

void FUN_146d47b5e(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
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
  plVar3 = (longlong *)*param_1;
  local_98 = FUN_146d47def(plVar3);
  lVar9 = (longlong)(int)plVar3[1] * 0x10;
  plVar1 = (longlong *)(*(longlong *)(*plVar3 + 0x1d0) + lVar9);
  local_a8 = param_1;
  local_a0 = plVar1;
  if (0 < *(int *)(*(longlong *)(*plVar3 + 0x1d0) + 8 + lVar9)) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(*plVar1 + 8 + lVar9 * 0x10);
      cVar7 = *(char *)(lVar4 + 8);
      if (cVar7 == '\x01') {
        lVar10 = lVar4 + 0x40;
        if (*(longlong *)(lVar4 + 0x98) != 0) {
          lVar10 = *(longlong *)(lVar4 + 0x98);
        }
        iVar11 = *(int *)(lVar4 + 0xa0);
        if ((longlong)iVar11 != 0) {
          lVar12 = 0;
          do {
            lVar5 = *(longlong *)(lVar10 + 0x10 + lVar12);
            if (lVar5 != 0) {
              uVar2 = *(ushort *)(lVar5 + 0x374);
              if ((uVar2 & 2) == 0) {
                uVar2 = uVar2 & 1;
              }
              else {
                if ((*(longlong *)(lVar5 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_146d47c4a;
                uVar2 = *(ushort *)(*(longlong *)(lVar5 + 0x140) + 10) & 0x40;
              }
              if (uVar2 != 0) {
                FUN_1429a0da2(&local_a8);
              }
            }
LAB_146d47c4a:
            lVar12 = lVar12 + 0x58;
          } while ((longlong)iVar11 * 0x58 - lVar12 != 0);
          cVar7 = *(char *)(lVar4 + 8);
          goto LAB_146d47c56;
        }
      }
      else {
LAB_146d47c56:
        if (cVar7 == '\0') {
          lVar10 = lVar4 + 0x50;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          uStack_50 = 0;
          uStack_60 = lVar10;
          if (*(int *)(lVar4 + 0x68) == 0) {
            iVar11 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar11 = *(int *)(lVar4 + 0x68);
          }
          plVar3 = (longlong *)(lVar4 + 0x40);
          uStack_70 = CONCAT44(uStack_4c,uStack_50);
          local_78 = local_58;
          uVar6 = local_78;
          local_88 = (undefined4)local_68;
          uStack_84 = local_68._4_4_;
          uStack_80 = (undefined4)uStack_60;
          uStack_7c = uStack_60._4_4_;
          local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar8 = local_78._4_4_;
          local_90 = plVar3;
          if ((local_78._4_4_ != iVar11) || (local_78 = uVar6, uStack_60 != lVar10)) {
            do {
              local_78 = uVar6;
              lVar12 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar8 * 0x20);
              if (lVar12 != 0) {
                uVar2 = *(ushort *)(lVar12 + 0x374);
                if ((uVar2 & 2) == 0) {
                  uVar2 = uVar2 & 1;
                }
                else {
                  if ((*(longlong *)(lVar12 + 0x140) == 0) || ((uVar2 & 1) == 0))
                  goto LAB_146d47d46;
                  uVar2 = *(ushort *)(*(longlong *)(lVar12 + 0x140) + 10) & 0x40;
                }
                if (uVar2 != 0) {
                  FUN_1429a0da2(&local_a8);
                }
              }
LAB_146d47d46:
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
              FUN_1449c0562(&local_88);
              iVar8 = local_78._4_4_;
              uVar6 = local_78;
            } while (local_90 != plVar3 ||
                     (CONCAT44(uStack_7c,uStack_80) != lVar10 || local_78._4_4_ != iVar11));
          }
          cVar7 = *(char *)(lVar4 + 8);
        }
        if ((cVar7 == '\x02') && (lVar4 = *(longlong *)(lVar4 + 200), lVar4 != 0)) {
          uVar2 = *(ushort *)(lVar4 + 0x374);
          if ((uVar2 & 2) == 0) {
            uVar2 = uVar2 & 1;
          }
          else {
            if ((*(longlong *)(lVar4 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_146d47da7;
            uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x140) + 10) & 0x40;
          }
          if (uVar2 != 0) {
            FUN_1429a0da2(&local_a8);
          }
        }
      }
LAB_146d47da7:
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)plVar1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d47def FUN_146d47def body=143 status=ok
// SIG undefined FUN_146d47def(void)

double FUN_146d47def(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(char *)(*(longlong *)(*param_1 + 0x158) + (longlong)(int)param_1[1]) == '\x01') {
    lVar1 = *(longlong *)(*param_1 + 0x110);
    lVar2 = (longlong)(int)param_1[1] * 0x30;
    dVar4 = *(double *)(lVar1 + 0x28 + lVar2) - *(double *)(lVar1 + 0x10 + lVar2);
    dVar5 = *(double *)(lVar1 + 0x20 + lVar2) - *(double *)(lVar1 + 8 + lVar2);
    dVar3 = *(double *)(lVar1 + 0x18 + lVar2) - *(double *)(lVar1 + lVar2);
    if ((dVar5 <= dVar3 || dVar4 <= dVar3) && (dVar3 = dVar5, dVar4 <= dVar5)) {
      dVar3 = dVar4;
    }
  }
  else {
    dVar3 = 1.0;
  }
  return (double)DAT_14c75f05c * 0.01 * dVar3;
}



// FUNCTION 146d47e7e FUN_146d47e7e body=654 status=ok
// SIG undefined FUN_146d47e7e(void)

void FUN_146d47e7e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
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
  lVar12 = *(longlong *)(*(longlong *)*param_1 + 0x1d0);
  lVar8 = (longlong)(int)((longlong *)*param_1)[1] * 0x10;
  plVar2 = (longlong *)(lVar12 + lVar8);
  local_98 = 0x3f50624dd2f1a9fc;
  local_a8 = param_1;
  local_a0 = plVar2;
  if (0 < *(int *)(lVar12 + 8 + lVar8)) {
    lVar12 = 0;
    do {
      lVar8 = *(longlong *)(*plVar2 + 8 + lVar12 * 0x10);
      cVar6 = *(char *)(lVar8 + 8);
      if (cVar6 == '\x01') {
        lVar9 = lVar8 + 0x40;
        if (*(longlong *)(lVar8 + 0x98) != 0) {
          lVar9 = *(longlong *)(lVar8 + 0x98);
        }
        iVar10 = *(int *)(lVar8 + 0xa0);
        if ((longlong)iVar10 != 0) {
          lVar11 = 0;
          do {
            lVar4 = *(longlong *)(lVar9 + 0x10 + lVar11);
            if (lVar4 != 0) {
              uVar3 = *(ushort *)(lVar4 + 0x374);
              if ((uVar3 & 2) == 0) {
                uVar3 = uVar3 & 1;
              }
              else {
                if ((*(longlong *)(lVar4 + 0x140) == 0) || ((uVar3 & 1) == 0)) goto LAB_146d47f68;
                uVar3 = *(ushort *)(*(longlong *)(lVar4 + 0x140) + 10) & 0x40;
              }
              if (uVar3 != 0) {
                FUN_1429a168e(&local_a8);
              }
            }
LAB_146d47f68:
            lVar11 = lVar11 + 0x58;
          } while ((longlong)iVar10 * 0x58 - lVar11 != 0);
          cVar6 = *(char *)(lVar8 + 8);
          goto LAB_146d47f74;
        }
      }
      else {
LAB_146d47f74:
        if (cVar6 == '\0') {
          lVar9 = lVar8 + 0x50;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          uStack_50 = 0;
          uStack_60 = lVar9;
          if (*(int *)(lVar8 + 0x68) == 0) {
            iVar10 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar10 = *(int *)(lVar8 + 0x68);
          }
          plVar1 = (longlong *)(lVar8 + 0x40);
          uStack_70 = CONCAT44(uStack_4c,uStack_50);
          local_78 = local_58;
          uVar5 = local_78;
          local_88 = (undefined4)local_68;
          uStack_84 = local_68._4_4_;
          uStack_80 = (undefined4)uStack_60;
          uStack_7c = uStack_60._4_4_;
          local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar7 = local_78._4_4_;
          local_90 = plVar1;
          if ((local_78._4_4_ != iVar10) || (local_78 = uVar5, uStack_60 != lVar9)) {
            do {
              local_78 = uVar5;
              lVar11 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar7 * 0x20);
              if (lVar11 != 0) {
                uVar3 = *(ushort *)(lVar11 + 0x374);
                if ((uVar3 & 2) == 0) {
                  uVar3 = uVar3 & 1;
                }
                else {
                  if ((*(longlong *)(lVar11 + 0x140) == 0) || ((uVar3 & 1) == 0))
                  goto LAB_146d48064;
                  uVar3 = *(ushort *)(*(longlong *)(lVar11 + 0x140) + 10) & 0x40;
                }
                if (uVar3 != 0) {
                  FUN_1429a168e(&local_a8);
                }
              }
LAB_146d48064:
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
              FUN_1449c0562(&local_88);
              iVar7 = local_78._4_4_;
              uVar5 = local_78;
            } while (local_90 != plVar1 ||
                     (CONCAT44(uStack_7c,uStack_80) != lVar9 || local_78._4_4_ != iVar10));
          }
          cVar6 = *(char *)(lVar8 + 8);
        }
        if ((cVar6 == '\x02') && (lVar8 = *(longlong *)(lVar8 + 200), lVar8 != 0)) {
          uVar3 = *(ushort *)(lVar8 + 0x374);
          if ((uVar3 & 2) == 0) {
            uVar3 = uVar3 & 1;
          }
          else {
            if ((*(longlong *)(lVar8 + 0x140) == 0) || ((uVar3 & 1) == 0)) goto LAB_146d480c5;
            uVar3 = *(ushort *)(*(longlong *)(lVar8 + 0x140) + 10) & 0x40;
          }
          if (uVar3 != 0) {
            FUN_1429a168e(&local_a8);
          }
        }
      }
LAB_146d480c5:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)plVar2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4810e FUN_146d4810e body=1280 status=ok
// SIG undefined FUN_146d4810e(void)

void FUN_146d4810e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong *local_250;
  undefined1 *local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong lStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  longlong lStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [320];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar14 = *(longlong *)*param_1;
  lVar8 = (longlong)(int)((longlong *)*param_1)[1];
  if (*(char *)(*(longlong *)(lVar14 + 0x158) + lVar8) == '\x01') {
    lVar10 = *(longlong *)(lVar14 + 0x110);
    lVar13 = lVar8 * 0x30;
    dVar19 = *(double *)(lVar10 + 0x28 + lVar13) - *(double *)(lVar10 + 0x10 + lVar13);
    dVar20 = *(double *)(lVar10 + 0x20 + lVar13) - *(double *)(lVar10 + 8 + lVar13);
    dVar3 = *(double *)(lVar10 + 0x18 + lVar13) - *(double *)(lVar10 + lVar13);
    if ((dVar20 <= dVar3 || dVar19 <= dVar3) && (dVar3 = dVar20, dVar19 <= dVar20)) {
      dVar3 = dVar19;
    }
  }
  else {
    dVar3 = 1.0;
  }
  dVar19 = (double)DAT_14c75f05c;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x400000000;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  local_250 = param_1;
  local_248 = local_1f8;
  if (*(int *)(*(longlong *)(lVar14 + 0x1d0) + 8 + lVar8 * 0x10) < 1) {
    uVar11 = 0;
  }
  else {
    plVar16 = (longlong *)(*(longlong *)(lVar14 + 0x1d0) + lVar8 * 0x10);
    lVar14 = 0;
    local_258 = plVar16;
    do {
      lVar8 = *(longlong *)(*plVar16 + 8 + lVar14 * 0x10);
      cVar5 = *(char *)(lVar8 + 8);
      if (cVar5 == '\x01') {
        lVar10 = lVar8 + 0x40;
        if (*(longlong *)(lVar8 + 0x98) != 0) {
          lVar10 = *(longlong *)(lVar8 + 0x98);
        }
        iVar7 = *(int *)(lVar8 + 0xa0);
        if ((longlong)iVar7 != 0) {
          lVar13 = 0;
          do {
            lVar18 = *(longlong *)(lVar10 + 0x10 + lVar13);
            if (lVar18 != 0) {
              uVar2 = *(ushort *)(lVar18 + 0x374);
              if ((uVar2 & 2) == 0) {
                uVar2 = uVar2 & 1;
              }
              else {
                if ((*(longlong *)(lVar18 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_146d482d2;
                uVar2 = *(ushort *)(*(longlong *)(lVar18 + 0x140) + 10) & 0x40;
              }
              if (uVar2 != 0) {
                FUN_1429a2754(&local_250);
              }
            }
LAB_146d482d2:
            lVar13 = lVar13 + 0x58;
          } while ((longlong)iVar7 * 0x58 - lVar13 != 0);
          cVar5 = *(char *)(lVar8 + 8);
          plVar16 = local_258;
          goto LAB_146d482e3;
        }
      }
      else {
LAB_146d482e3:
        if (cVar5 == '\0') {
          lVar10 = lVar8 + 0x50;
          local_218 = 0x100000000;
          local_208 = 0xffffffff;
          uStack_200 = 0;
          lStack_210 = lVar10;
          if (*(int *)(lVar8 + 0x68) == 0) {
            iVar7 = 0;
          }
          else {
            FUN_1449c0562(&local_218);
            iVar7 = *(int *)(lVar8 + 0x68);
          }
          plVar16 = (longlong *)(lVar8 + 0x40);
          uStack_220 = CONCAT44(uStack_1fc,uStack_200);
          local_228 = local_208;
          uVar4 = local_228;
          local_238 = local_218;
          lStack_230 = lStack_210;
          local_228._4_4_ = (int)((ulonglong)local_208 >> 0x20);
          iVar6 = local_228._4_4_;
          local_240 = plVar16;
          if ((local_228._4_4_ != iVar7) || (local_228 = uVar4, lStack_210 != lVar10)) {
            do {
              local_228 = uVar4;
              lVar13 = *(longlong *)(*local_240 + 0x10 + (longlong)iVar6 * 0x20);
              if (lVar13 != 0) {
                uVar2 = *(ushort *)(lVar13 + 0x374);
                if ((uVar2 & 2) == 0) {
                  uVar2 = uVar2 & 1;
                }
                else {
                  if ((*(longlong *)(lVar13 + 0x140) == 0) || ((uVar2 & 1) == 0))
                  goto LAB_146d483d1;
                  uVar2 = *(ushort *)(*(longlong *)(lVar13 + 0x140) + 10) & 0x40;
                }
                if (uVar2 != 0) {
                  FUN_1429a2754(&local_250);
                }
              }
LAB_146d483d1:
              local_228 = CONCAT44(local_228._4_4_,(uint)local_228 & ~local_238._4_4_);
              FUN_1449c0562(&local_238);
              iVar6 = local_228._4_4_;
              uVar4 = local_228;
            } while (local_240 != plVar16 || (lStack_230 != lVar10 || local_228._4_4_ != iVar7));
          }
          cVar5 = *(char *)(lVar8 + 8);
          plVar16 = local_258;
        }
        if ((cVar5 == '\x02') && (lVar8 = *(longlong *)(lVar8 + 200), lVar8 != 0)) {
          uVar2 = *(ushort *)(lVar8 + 0x374);
          if ((uVar2 & 2) == 0) {
            uVar2 = uVar2 & 1;
          }
          else {
            if ((*(longlong *)(lVar8 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_146d48436;
            uVar2 = *(ushort *)(*(longlong *)(lVar8 + 0x140) + 10) & 0x40;
          }
          if (uVar2 != 0) {
            FUN_1429a2754(&local_250);
          }
        }
      }
LAB_146d48436:
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)plVar16[1]);
    uVar11 = local_b0 & 0xffffffff;
  }
  puVar9 = local_b8;
  if (local_b8 == (undefined1 *)0x0) {
    puVar9 = local_1f8;
  }
  FUN_146d5c700(puVar9,uVar11);
  if (0 < (int)local_b0) {
    lVar14 = 1;
    lVar8 = 0;
    iVar7 = (int)local_b0;
    do {
      puVar9 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar9 = local_1f8;
      }
      lVar13 = lVar8 * 0x50;
      lVar8 = lVar8 + 1;
      lVar10 = (longlong)iVar7;
      if ((puVar9[lVar13 + 0x48] == '\x01') && (lVar18 = lVar14, lVar8 < lVar10)) {
        do {
          puVar15 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar15 = local_1f8;
          }
          if (puVar15[lVar18 * 0x50 + 0x48] == '\x01') {
            plVar16 = (longlong *)(puVar15 + lVar18 * 0x50);
            lVar10 = (longlong)(int)plVar16[1];
            if (lVar10 != 0) {
              puVar17 = (undefined8 *)*plVar16;
              puVar1 = puVar17 + lVar10 * 8;
              lVar12 = 0;
              do {
                if (dVar19 * 0.01 * dVar3 <
                    (*(double *)((longlong)puVar17 + lVar12 + 0x30) -
                    *(double *)(puVar9 + lVar13 + 0x18)) * *(double *)(puVar9 + lVar13 + 0x30) +
                    (*(double *)((longlong)puVar17 + lVar12 + 0x28) -
                    *(double *)(puVar9 + lVar13 + 0x10)) * *(double *)(puVar9 + lVar13 + 0x28) +
                    (*(double *)((longlong)puVar17 + lVar12 + 0x38) -
                    *(double *)(puVar9 + lVar13 + 0x20)) * *(double *)(puVar9 + lVar13 + 0x38))
                goto LAB_146d48597;
                lVar12 = lVar12 + 0x40;
              } while (lVar10 * 0x40 != lVar12);
              do {
                FUN_146d48610(*puVar17);
                puVar17 = puVar17 + 8;
              } while (puVar17 != puVar1);
            }
            *(undefined1 *)(plVar16 + 9) = 0;
            iVar7 = (int)local_b0;
          }
LAB_146d48597:
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < iVar7);
        lVar10 = (longlong)iVar7;
      }
      lVar14 = lVar14 + 1;
    } while (lVar8 < lVar10);
  }
  FUN_146d5cc5a(local_1f8);
  if ((local_90 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d48610 FUN_146d48610 body=122 status=ok
// SIG undefined FUN_146d48610(void)

void FUN_146d48610(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x5a8);
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    lVar2 = param_1 + 0x3f8;
  }
  pbVar1 = (byte *)(lVar2 + 0x30 + (longlong)param_2 * 0x6c);
  *pbVar1 = *pbVar1 | 1;
  if (((*(ushort *)(param_1 + 0x374) & 2) == 0) && (0 < (longlong)*(int *)(param_1 + 0x5b0))) {
    lVar2 = param_1 + 0x3f8;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x5a8);
    }
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + (~*(uint *)(lVar2 + 0x30 + lVar3) & 1);
      lVar3 = lVar3 + 0x6c;
    } while ((longlong)*(int *)(param_1 + 0x5b0) * 0x6c - lVar3 != 0);
    if (iVar4 != 0) {
      return;
    }
  }
  *(ushort *)(param_1 + 0x374) = *(ushort *)(param_1 + 0x374) | 2;
  return;
}



// FUNCTION 146d4868a FUN_146d4868a body=372 status=ok
// SIG undefined FUN_146d4868a(void)

longlong FUN_146d4868a(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0 && *(char *)(param_4 + 0x1c) == -0x75) {
    local_60 = param_10;
    local_68 = param_9;
    local_70 = param_8;
    local_78 = param_7;
    local_80 = param_6;
    local_88 = param_5;
    FUN_146d48801(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  if (*(char *)(param_4 + 0x1c) == '\v' && param_4 != 0) {
    local_50 = 0;
    local_40 = 0x101;
    local_3e = 1;
    local_3c = 0;
    local_58 = &PTR_FUN_149f48e60;
    local_38 = *(undefined8 *)(param_2 + 0x20);
    uStack_30 = *(undefined8 *)(param_2 + 0x28);
    local_28 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined8 *)(param_2 + 0x10);
    local_60 = param_10;
    local_68 = param_9;
    local_70 = param_8;
    local_78 = param_7;
    local_80 = param_6;
    local_88 = param_5;
    FUN_146d48a5c(param_1,&local_58);
    local_58 = &PTR_FUN_149f553e0;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d48801 FUN_146d48801 body=602 status=ok
// SIG undefined FUN_146d48801(void)

undefined8 *
FUN_146d48801(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 in_stack_00000050;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined1 *local_1a0;
  double *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_148 [96];
  undefined8 local_e8 [9];
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_a0 = 0x7fefffffffffffff;
  local_98 = 0xffffffff;
  local_94 = 0;
  FUN_1449437a2(param_3,local_148,param_5);
  dVar1 = *param_6;
  dVar2 = param_6[1];
  dVar6 = param_5[2] * -1.0;
  dVar7 = param_5[3] * 1.0;
  dVar8 = -*param_5;
  dVar9 = -param_5[1];
  dVar10 = dVar2 * dVar8 - dVar1 * dVar9;
  dVar11 = param_6[2] * dVar9 - dVar2 * dVar6;
  dVar12 = dVar1 * dVar6 - dVar8 * param_6[2];
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  local_158 = dVar7 * dVar10 + param_6[2] + (dVar12 * dVar8 - dVar11 * dVar9);
  local_168 = (dVar10 * dVar9 - dVar12 * dVar6) + dVar7 * dVar11 + dVar1;
  dStack_160 = *param_5 * dVar10 + dVar6 * dVar11 + dVar7 * dVar12 + dVar2;
  if ((*(byte *)(param_4 + 0x1c) & 0xb) == 0 || (*(byte *)(param_4 + 0x1c) & 0x40) != 0) {
    param_1[9] = 0x7fefffffffffffff;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    local_198 = &local_168;
    local_190 = &stack0x00000038;
    local_188 = &stack0x00000040;
    local_180 = &stack0x00000048;
    local_170 = in_stack_00000050;
    local_1a8 = param_4;
    local_1a0 = local_148;
    local_178 = local_e8;
    FUN_146d5fe43(param_2,param_3);
    puVar4 = local_e8;
    puVar5 = param_1;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d48a5c FUN_146d48a5c body=624 status=ok
// SIG undefined FUN_146d48a5c(void)

longlong FUN_146d48a5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      double *param_5,double *param_6)

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
  undefined8 in_stack_00000050;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 *local_1e0;
  double *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined4 *local_198;
  undefined1 *local_190;
  longlong local_188;
  undefined8 local_180;
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [28];
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_f8 [104];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,local_f8,param_5);
  dVar1 = *param_6;
  dVar2 = param_6[1];
  dVar5 = -*param_5;
  dVar6 = -param_5[1];
  dVar3 = param_5[2] * -1.0;
  dVar4 = param_5[3] * 1.0;
  dVar7 = dVar2 * dVar5 - dVar1 * dVar6;
  dVar8 = param_6[2] * dVar6 - dVar2 * dVar3;
  dVar9 = dVar1 * dVar3 - dVar5 * param_6[2];
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  local_108 = dVar4 * dVar7 + param_6[2] + (dVar9 * dVar5 - dVar8 * dVar6);
  local_118 = (dVar7 * dVar6 - dVar9 * dVar3) + dVar4 * dVar8 + dVar1;
  dStack_110 = *param_5 * dVar7 + dVar3 * dVar8 + dVar4 * dVar9 + dVar2;
  local_1d8 = &local_118;
  local_1b8 = &local_120;
  local_120 = 0x7fefffffffffffff;
  local_1b0 = &local_128;
  local_128 = 0x7fefffffffffffff;
  local_198 = &local_12c;
  local_12c = 0xffffffff;
  local_1d0 = &stack0x00000038;
  local_1c8 = &stack0x00000040;
  local_1c0 = &stack0x00000048;
  local_1a8 = local_160;
  local_1a0 = local_178;
  local_190 = local_148;
  local_180 = in_stack_00000050;
  local_1e8 = param_4;
  local_1e0 = local_f8;
  local_188 = param_1;
  FUN_146d62b77(param_2,param_3);
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d48ccd FUN_146d48ccd body=372 status=ok
// SIG undefined FUN_146d48ccd(void)

longlong FUN_146d48ccd(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0 && *(char *)(param_4 + 0x1c) == -0x75) {
    local_60 = param_10;
    local_68 = param_9;
    local_70 = param_8;
    local_78 = param_7;
    local_80 = param_6;
    local_88 = param_5;
    FUN_146d48801(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  if (*(char *)(param_4 + 0x1c) == '\v' && param_4 != 0) {
    local_50 = 0;
    local_40 = 0x101;
    local_3e = 1;
    local_3c = 0;
    local_58 = &PTR_FUN_149f48e60;
    local_38 = *(undefined8 *)(param_2 + 0x20);
    uStack_30 = *(undefined8 *)(param_2 + 0x28);
    local_28 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined8 *)(param_2 + 0x10);
    local_60 = param_10;
    local_68 = param_9;
    local_70 = param_8;
    local_78 = param_7;
    local_80 = param_6;
    local_88 = param_5;
    FUN_146d48a5c(param_1,&local_58);
    local_58 = &PTR_FUN_149f553e0;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d48e44 FUN_146d48e44 body=602 status=ok
// SIG undefined FUN_146d48e44(void)

undefined8 *
FUN_146d48e44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 in_stack_00000050;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined1 *local_1a0;
  double *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_148 [96];
  undefined8 local_e8 [9];
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_a0 = 0x7fefffffffffffff;
  local_98 = 0xffffffff;
  local_94 = 0;
  FUN_1449437a2(param_3,local_148,param_5);
  dVar1 = *param_6;
  dVar2 = param_6[1];
  dVar6 = param_5[2] * -1.0;
  dVar7 = param_5[3] * 1.0;
  dVar8 = -*param_5;
  dVar9 = -param_5[1];
  dVar10 = dVar2 * dVar8 - dVar1 * dVar9;
  dVar11 = param_6[2] * dVar9 - dVar2 * dVar6;
  dVar12 = dVar1 * dVar6 - dVar8 * param_6[2];
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  local_158 = dVar7 * dVar10 + param_6[2] + (dVar12 * dVar8 - dVar11 * dVar9);
  local_168 = (dVar10 * dVar9 - dVar12 * dVar6) + dVar7 * dVar11 + dVar1;
  dStack_160 = *param_5 * dVar10 + dVar6 * dVar11 + dVar7 * dVar12 + dVar2;
  if ((*(byte *)(param_4 + 0x1c) & 0xb) == 0 || (*(byte *)(param_4 + 0x1c) & 0x40) != 0) {
    param_1[9] = 0x7fefffffffffffff;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    local_198 = &local_168;
    local_190 = &stack0x00000038;
    local_188 = &stack0x00000040;
    local_180 = &stack0x00000048;
    local_170 = in_stack_00000050;
    local_1a8 = param_4;
    local_1a0 = local_148;
    local_178 = local_e8;
    FUN_146d64380(param_2,param_3);
    puVar4 = local_e8;
    puVar5 = param_1;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4909f FUN_146d4909f body=44 status=ok
// SIG undefined FUN_146d4909f(void)

undefined8 FUN_146d4909f(undefined8 param_1)

{
  FUN_146d490cb();
  return param_1;
}



// FUNCTION 146d490cb FUN_146d490cb body=1023 status=ok
// SIG undefined FUN_146d490cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d490cb(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x7f) {
    if (cVar4 == 'A' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d49201;
    }
    else if (cVar4 != '\x01' || param_2 == 0) goto LAB_146d49201;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d66e90(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d66d4a(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d49201:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d494cb FUN_146d494cb body=44 status=ok
// SIG undefined FUN_146d494cb(void)

undefined8 FUN_146d494cb(undefined8 param_1)

{
  FUN_146d494f7();
  return param_1;
}



// FUNCTION 146d494f7 FUN_146d494f7 body=1079 status=ok
// SIG undefined FUN_146d494f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d494f7(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 *local_180;
  double *local_178;
  undefined4 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x7f) {
    if (cVar4 == 'A' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d49879;
    }
    else if (cVar4 != '\x01' || param_2 == 0) goto LAB_146d49879;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3a960(param_4,param_2,&local_108,param_6);
  }
  else {
    local_168 = &local_160;
    local_160 = 0x3ff0000000000000;
    local_158 = 0x3ff0000000000000;
    local_150 = 0x3ff0000000000000;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3b724(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d49879:
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4992f FUN_146d4992f body=173 status=ok
// SIG undefined FUN_146d4992f(void)

undefined8
FUN_146d4992f(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = 0x101;
  local_36 = 1;
  local_34 = 0;
  local_50 = &PTR_FUN_149f48e60;
  local_30 = *(undefined8 *)(param_2 + 0x20);
  uStack_28 = *(undefined8 *)(param_2 + 0x28);
  local_20 = *(undefined8 *)(param_2 + 0x30);
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_60 = param_6;
  local_68 = param_5;
  FUN_146d499dd(param_1,&local_50);
  local_50 = &PTR_FUN_149f553e0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d499dd FUN_146d499dd body=1023 status=ok
// SIG undefined FUN_146d499dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d499dd(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x80) {
    if (cVar4 == '@' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d49b13;
    }
    else if (cVar4 != '\0' || param_2 == 0) goto LAB_146d49b13;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d67120(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d66fda(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d49b13:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d49ddd FUN_146d49ddd body=173 status=ok
// SIG undefined FUN_146d49ddd(void)

undefined8
FUN_146d49ddd(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = 0x101;
  local_36 = 1;
  local_34 = 0;
  local_50 = &PTR_FUN_149f48e60;
  local_30 = *(undefined8 *)(param_2 + 0x20);
  uStack_28 = *(undefined8 *)(param_2 + 0x28);
  local_20 = *(undefined8 *)(param_2 + 0x30);
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_60 = param_6;
  local_68 = param_5;
  FUN_146d49e8b(param_1,&local_50);
  local_50 = &PTR_FUN_149f553e0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d49e8b FUN_146d49e8b body=1079 status=ok
// SIG undefined FUN_146d49e8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d49e8b(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 *local_180;
  double *local_178;
  undefined4 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x80) {
    if (cVar4 == '@' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4a20d;
    }
    else if (cVar4 != '\0' || param_2 == 0) goto LAB_146d4a20d;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3a8f2(param_4,param_2,&local_108,param_6);
  }
  else {
    local_168 = &local_160;
    local_160 = 0x3ff0000000000000;
    local_158 = 0x3ff0000000000000;
    local_150 = 0x3ff0000000000000;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3b392(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4a20d:
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4a2c3 FUN_146d4a2c3 body=1023 status=ok
// SIG undefined FUN_146d4a2c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d4a2c3(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x7d) {
    if (cVar4 == 'C' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4a3f9;
    }
    else if (cVar4 != '\x03' || param_2 == 0) goto LAB_146d4a3f9;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d673b0(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d6726a(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4a3f9:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4a6c3 FUN_146d4a6c3 body=1079 status=ok
// SIG undefined FUN_146d4a6c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d4a6c3(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 *local_180;
  double *local_178;
  undefined4 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x7d) {
    if (cVar4 == 'C' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4aa45;
    }
    else if (cVar4 != '\x03' || param_2 == 0) goto LAB_146d4aa45;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3accc(param_4,param_2,&local_108,param_6);
  }
  else {
    local_168 = &local_160;
    local_160 = 0x3ff0000000000000;
    local_158 = 0x3ff0000000000000;
    local_150 = 0x3ff0000000000000;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3bab6(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4aa45:
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4aafb FUN_146d4aafb body=268 status=ok
// SIG undefined FUN_146d4aafb(void)

void FUN_146d4aafb(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  dVar4 = *param_5;
  uVar5 = SUB84(dVar4,0);
  uVar6 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar3 = 1.0;
  if (dVar4 <= 1.0) {
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      dVar4 = (1.0 - dVar4) * param_2 * param_1;
      *param_6 = dVar4;
      uVar5 = SUB84(*param_5,0);
      uVar6 = (undefined4)((ulonglong)*param_5 >> 0x20);
    }
    else {
      dVar4 = *param_6;
    }
    if ((double)CONCAT44(uVar6,uVar5) <= 1.0) {
      if ((double)CONCAT44(uVar6,uVar5) <= 0.0) {
        dVar1 = param_1 * param_2 + dVar4;
        dVar2 = dVar4;
      }
      else {
        dVar2 = dVar4 - param_1 * param_2;
        dVar1 = dVar4;
      }
      param_4 = -param_4;
      if (dVar1 <= 0.0) {
        if (dVar1 <= -param_3) {
          dVar3 = (param_4 - dVar2) / (dVar1 - dVar2);
          if (1.0 <= dVar3) {
            dVar3 = 1.0;
          }
          if (dVar3 <= 0.0) {
            dVar3 = 0.0;
          }
        }
      }
      else {
        dVar3 = 1.79769313486232e+308;
      }
    }
    else {
      param_4 = -param_4;
      dVar2 = 1.79769313486232e+308;
      dVar3 = 1.79769313486232e+308;
    }
    *param_5 = dVar3;
    *param_6 = (double)(~-(ulonglong)(dVar3 == 0.0) & (ulonglong)param_4 |
                       (ulonglong)dVar2 & -(ulonglong)(dVar3 == 0.0));
  }
  return;
}



// FUNCTION 146d4ac07 FUN_146d4ac07 body=2087 status=ok
// SIG undefined FUN_146d4ac07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d4ac07(double *param_1,longlong param_2,double *param_3,longlong param_4,double *param_5
                  )

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
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
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
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
  double dStack_190;
  double dStack_110;
  
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  dVar8 = *(double *)*(undefined1 (*) [16])(param_3 + 8);
  dVar9 = param_3[9];
  dVar20 = *(double *)(param_2 + 0x20) * dVar8;
  dVar22 = *(double *)(param_2 + 0x28) * dVar9;
  dVar10 = param_3[10];
  dVar13 = *(double *)(param_2 + 0x30) * dVar10;
  dVar26 = param_3[3];
  dVar11 = *param_3;
  dVar29 = param_3[1];
  dVar39 = param_3[2];
  dVar17 = dVar22 * dVar11 - dVar20 * dVar29;
  dVar19 = dVar13 * dVar29 - dVar22 * dVar39;
  dVar30 = dVar20 * dVar39 - dVar11 * dVar13;
  dVar19 = dVar19 + dVar19;
  dVar30 = dVar30 + dVar30;
  dVar17 = dVar17 + dVar17;
  dVar20 = (dVar17 * dVar29 - dVar30 * dVar39) + dVar26 * dVar19 + dVar20 + param_3[4];
  dVar22 = (dVar39 * dVar19 - dVar17 * dVar11) + param_3[3] * dVar30 + dVar22 + param_3[5];
  dVar31 = dVar26 * dVar17 + dVar13 + (dVar30 * dVar11 - dVar19 * dVar29) + param_3[6];
  dVar12 = *param_5;
  dVar30 = param_5[1];
  dVar3 = param_5[2];
  dVar17 = param_5[4];
  dVar19 = param_5[5];
  dVar7 = param_5[6];
  dVar21 = dVar20 - dVar17;
  dVar23 = dVar22 - dVar19;
  dVar14 = dVar31 - dVar7;
  dVar2 = -dVar12;
  dVar4 = -dVar30;
  dVar36 = dVar3 * -1.0;
  dVar40 = param_5[3] * 1.0;
  auVar5._8_4_ = SUB84(dVar36,0);
  auVar5._0_8_ = dVar4;
  auVar5._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  dVar13 = dVar23 * dVar2 - dVar4 * dVar21;
  dVar34 = dVar14 * dVar4 - dVar36 * dVar23;
  auVar1._8_4_ = SUB84(dVar30,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar24 = dVar21 * dVar36 - dVar14 * dVar2;
  dVar34 = dVar34 + dVar34;
  dVar24 = dVar24 + dVar24;
  dVar13 = dVar13 + dVar13;
  auVar18 = *(undefined1 (*) [16])(param_5 + 8);
  auVar27 = divpd(_DAT_149934d80,auVar18);
  dVar32 = (double)(-(ulonglong)
                     (9.99999993922529e-09 < (double)((ulonglong)auVar18._0_8_ & DAT_149931180)) &
                   auVar27._0_8_);
  dVar35 = (double)(-(ulonglong)
                     (9.99999993922529e-09 <
                     (double)((ulonglong)auVar18._8_8_ & DAT_149931180._8_8_)) & auVar27._8_8_);
  dVar26 = SUB168(*(undefined1 (*) [16])(param_5 + 10),0);
  auVar27 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_5 + 10));
  dVar33 = *(double *)(param_4 + 0x48) * dVar26;
  dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < (double)((ulonglong)dVar26 & DAT_149931180))
                  & auVar27._0_8_);
  dVar15 = auVar18._0_8_ * *(double *)(param_4 + 0x38);
  dVar16 = auVar18._8_8_ * *(double *)(param_4 + 0x40);
  dVar25 = dVar16 * dVar12 - dVar30 * dVar15;
  dVar28 = dVar33 * dVar30 - dVar3 * dVar16;
  dVar37 = dVar15 * dVar3 - dVar12 * dVar33;
  dVar28 = dVar28 + dVar28;
  dVar37 = dVar37 + dVar37;
  dVar26 = param_5[3];
  dVar25 = dVar25 + dVar25;
  dVar33 = dVar26 * dVar25 + dVar33 + (dVar37 * dVar12 - dVar28 * dVar30);
  dVar38 = (dVar25 * dVar30 - dVar37 * dVar3) + dVar26 * dVar28 + dVar15;
  dVar28 = (dVar3 * dVar28 - dVar25 * dVar12) + param_5[3] * dVar37 + dVar16;
  dVar26 = *(double *)(param_2 + 0x10);
  dVar3 = (((dVar13 * dVar40 + dVar14 + (dVar24 * dVar2 - dVar34 * dVar4)) * dVar6 -
           *(double *)(param_4 + 0x30)) * *(double *)(param_4 + 0x48) +
          (((dVar13 * dVar4 - dVar24 * dVar36) + dVar40 * dVar34 + dVar21) * dVar32 -
          *(double *)(param_4 + 0x20)) * *(double *)(param_4 + 0x38) +
          ((dVar12 * dVar13 + dVar36 * dVar34 + dVar40 * dVar24 + dVar23) * dVar35 -
          *(double *)(param_4 + 0x28)) * *(double *)(param_4 + 0x40)) - dVar26;
  dVar31 = dVar31 - dVar26 * dVar33;
  dVar22 = dVar22 - dVar26 * dVar28;
  dVar20 = dVar20 - dVar26 * dVar38;
  dVar26 = dVar20 - param_3[4];
  dVar13 = dVar22 - param_3[5];
  dVar14 = dVar31 - param_3[6];
  dVar39 = dVar39 * -1.0;
  dVar30 = param_3[3] * 1.0;
  dVar25 = -dVar11;
  dVar29 = -dVar29;
  dVar21 = dVar26 * dVar39 - dVar25 * dVar14;
  dVar15 = dVar13 * dVar25 - dVar29 * dVar26;
  dVar16 = dVar14 * dVar29 - dVar39 * dVar13;
  dVar16 = dVar16 + dVar16;
  dVar21 = dVar21 + dVar21;
  dVar15 = dVar15 + dVar15;
  auVar18 = divpd(_DAT_149934d80,*(undefined1 (*) [16])(param_3 + 8));
  *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar8)) & auVar18._0_8_) *
             ((dVar15 * dVar29 - dVar21 * dVar39) + dVar30 * dVar16 + dVar26);
  param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar9)) & auVar18._8_8_) *
               (dVar11 * dVar15 + dVar39 * dVar16 + dVar30 * dVar21 + dVar13);
  param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar10)) & (ulonglong)(1.0 / dVar10)
                       ) * (dVar30 * dVar15 + dVar14 + (dVar21 * dVar25 - dVar16 * dVar29));
  dStack_190 = auVar5._8_8_;
  dStack_110 = auVar1._8_8_;
  dVar26 = dVar28 * dVar2 - dVar4 * dVar38;
  dVar30 = dVar33 * dStack_110 - dStack_190 * dVar28;
  dVar13 = dVar38 * dVar36 - dVar33 * dVar2;
  dVar30 = dVar30 + dVar30;
  dVar13 = dVar13 + dVar13;
  dVar26 = dVar26 + dVar26;
  dVar17 = (dVar20 - dVar38 * dVar3) - dVar17;
  dVar19 = (dVar22 - dVar28 * dVar3) - dVar19;
  dVar7 = (dVar31 - dVar33 * dVar3) - dVar7;
  dVar20 = dVar19 * dVar2 - dVar4 * dVar17;
  dVar22 = dVar7 * dStack_110 - dStack_190 * dVar19;
  dVar39 = dVar17 * dVar36 - dVar7 * dVar2;
  dVar22 = dVar22 + dVar22;
  dVar39 = dVar39 + dVar39;
  dVar20 = dVar20 + dVar20;
  param_1[3] = ((dVar20 * dStack_110 - dVar39 * dStack_190) + dVar40 * dVar22 + dVar17) * dVar32;
  param_1[4] = (dVar12 * dVar20 + dVar36 * dVar22 + dVar40 * dVar39 + dVar19) * dVar35;
  param_1[5] = (dVar20 * dVar40 + dVar7 + (dVar39 * dVar2 - dVar22 * dVar4)) * dVar6;
  dVar35 = (dVar12 * dVar26 + dVar36 * dVar30 + dVar40 * dVar13 + dVar28) * dVar35;
  auVar18._8_4_ = SUB84(dVar35,0);
  auVar18._0_8_ = ((dVar26 * dStack_110 - dVar13 * dStack_190) + dVar40 * dVar30 + dVar38) * dVar32;
  auVar18._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 6) = auVar18;
  param_1[8] = (dVar26 * dVar40 + dVar33 + (dVar13 * dVar2 - dVar30 * dVar4)) * dVar6;
  param_1[9] = dVar3;
  return;
}



// FUNCTION 146d4b42e FUN_146d4b42e body=2225 status=ok
// SIG undefined FUN_146d4b42e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_146d4b42e(undefined1 (*param_1) [16],longlong param_2,double *param_3,longlong param_4,
             double *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar9;
  undefined1 auVar8 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_170;
  double local_168;
  undefined8 uStack_160;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined8 *)(param_1[4] + 8) = 0x7fefffffffffffff;
  *(undefined4 *)param_1[5] = 0xffffffff;
  param_1[5][4] = 0;
  dVar7 = *(double *)(param_2 + 0x20) * param_3[8];
  dVar9 = *(double *)(param_2 + 0x28) * param_3[9];
  dVar4 = *(double *)(param_2 + 0x30) * param_3[10];
  dVar5 = *param_3;
  dVar12 = param_3[1];
  dVar18 = param_3[2];
  dVar15 = param_3[3];
  dVar10 = dVar9 * dVar5 - dVar7 * dVar12;
  dVar11 = dVar4 * dVar12 - dVar9 * dVar18;
  dVar16 = dVar7 * dVar18 - dVar5 * dVar4;
  dVar11 = dVar11 + dVar11;
  dVar16 = dVar16 + dVar16;
  dVar10 = dVar10 + dVar10;
  local_f8 = (dVar10 * dVar12 - dVar16 * dVar18) + dVar15 * dVar11 + dVar7 + param_3[4];
  dStack_f0 = (dVar18 * dVar11 - dVar5 * dVar10) + param_3[3] * dVar16 + dVar9 + param_3[5];
  local_e8 = dVar10 * dVar15 + dVar4 + (dVar16 * dVar5 - dVar11 * dVar12) + param_3[6];
  dVar4 = *(double *)(param_4 + 0x20) * param_5[8];
  dVar7 = *(double *)(param_4 + 0x28) * param_5[9];
  dVar12 = *(double *)(param_4 + 0x30) * param_5[10];
  dVar15 = param_5[3];
  dVar5 = param_5[3];
  dVar10 = *param_5;
  dVar11 = param_5[1];
  dVar16 = param_5[2];
  dVar18 = dVar7 * dVar10 - dVar4 * dVar11;
  dVar20 = dVar12 * dVar11 - dVar7 * dVar16;
  dVar9 = dVar4 * dVar16 - dVar12 * dVar10;
  dVar20 = dVar20 + dVar20;
  dVar9 = dVar9 + dVar9;
  dVar18 = dVar18 + dVar18;
  dVar7 = (dVar16 * dVar20 - dVar10 * dVar18) + dVar5 * dVar9 + dVar7 + param_5[5];
  local_118._8_4_ = SUB84(dVar7,0);
  local_118._0_8_ = (dVar18 * dVar11 - dVar9 * dVar16) + dVar15 * dVar20 + dVar4 + param_5[4];
  local_118._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_108 = dVar18 * dVar15 + dVar12 + (dVar9 * dVar10 - dVar20 * dVar11) + param_5[6];
  dVar12 = *(double *)(param_4 + 0x50);
  dVar18 = (dVar12 * *(double *)(param_4 + 0x38) + *(double *)(param_4 + 0x20)) * param_5[8];
  dVar4 = (*(double *)(param_4 + 0x40) * dVar12 + *(double *)(param_4 + 0x28)) * param_5[9];
  dVar20 = (*(double *)(param_4 + 0x48) * dVar12 + *(double *)(param_4 + 0x30)) * param_5[10];
  dVar12 = dVar4 * dVar10 - dVar11 * dVar18;
  dVar7 = dVar20 * dVar11 - dVar16 * dVar4;
  dVar9 = dVar18 * dVar16 - dVar10 * dVar20;
  dVar7 = dVar7 + dVar7;
  dVar9 = dVar9 + dVar9;
  dVar12 = dVar12 + dVar12;
  local_138 = (dVar12 * dVar11 - dVar9 * dVar16) + dVar15 * dVar7 + dVar18 + param_5[4];
  dStack_130 = (dVar16 * dVar7 - dVar10 * dVar12) + dVar5 * dVar9 + dVar4 + param_5[5];
  local_128 = dVar12 * dVar15 + dVar20 + (dVar9 * dVar10 - dVar7 * dVar11) + param_5[6];
  FUN_144afdf0e(&local_150,&local_f8);
  auVar19 = _DAT_149934d80;
  dVar12 = local_140 - local_e8;
  dVar5 = local_148 - dStack_f0;
  dVar15 = local_150 - local_f8;
  dVar18 = SQRT(dVar12 * dVar12 + dVar15 * dVar15 + dVar5 * dVar5);
  if (9.999999747378752e-05 < dVar18) {
    dVar4 = *(double *)(param_2 + 0x10);
    dVar7 = *(double *)(param_4 + 0x10);
    local_170 = dVar18 - (dVar4 + dVar7);
    local_168 = dVar12 / dVar18;
    uStack_160 = 0;
    dVar5 = dVar5 / dVar18;
    dVar15 = dVar15 / dVar18;
    dVar18 = (local_f8 + dVar4 * dVar15) - param_3[4];
    dVar12 = (dStack_f0 + dVar5 * dVar4) - param_3[5];
    dVar17 = (local_e8 + local_168 * dVar4) - param_3[6];
    dVar13 = -*param_3;
    dVar14 = -param_3[1];
    dVar9 = param_3[2] * -1.0;
    dVar10 = param_3[3] * 1.0;
    dVar20 = dVar18 * dVar9 - dVar13 * dVar17;
    dVar11 = dVar12 * dVar13 - dVar18 * dVar14;
    dVar16 = dVar17 * dVar14 - dVar12 * dVar9;
    dVar16 = dVar16 + dVar16;
    dVar20 = dVar20 + dVar20;
    dVar11 = dVar11 + dVar11;
    auVar1 = *(undefined1 (*) [16])(param_3 + 8);
    auVar8 = divpd(_DAT_149934d80,auVar1);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar8._8_8_) *
            (*param_3 * dVar11 + dVar9 * dVar16 + dVar10 * dVar20 + dVar12);
    dVar12 = param_3[10];
    dVar6 = -dVar5;
    dVar3 = -dVar15;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar8._0_8_) *
                   ((dVar11 * dVar14 - dVar20 * dVar9) + dVar10 * dVar16 + dVar18);
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_1 = auVar2;
    *(double *)param_1[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar12)) & (ulonglong)(1.0 / dVar12)) *
         (dVar10 * dVar11 + dVar17 + (dVar20 * dVar13 - dVar16 * dVar14));
    dVar9 = (local_150 - dVar7 * dVar15) - param_5[4];
    dVar10 = (local_148 - dVar5 * dVar7) - param_5[5];
    local_188 = (local_140 - local_168 * dVar7) - param_5[6];
    dStack_180 = 0.0 - param_5[7];
    dVar5 = *param_5;
    dVar11 = -dVar5;
    dVar16 = -param_5[1];
    dVar12 = param_5[2] * -1.0;
    dVar18 = param_5[3] * 1.0;
    dVar15 = dVar10 * dVar11 - dVar9 * dVar16;
    dVar7 = local_188 * dVar16 - dVar10 * dVar12;
    dVar4 = dVar9 * dVar12 - local_188 * dVar11;
    dVar7 = dVar7 + dVar7;
    dVar4 = dVar4 + dVar4;
    dVar15 = dVar15 + dVar15;
    auVar1 = *(undefined1 (*) [16])(param_5 + 8);
    auVar19 = divpd(auVar19,auVar1);
    dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar19._0_8_);
    dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar19._8_8_);
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                     (ulonglong)(1.0 / param_5[10]));
    *(double *)(param_1[1] + 8) =
         ((dVar15 * dVar16 - dVar4 * dVar12) + dVar18 * dVar7 + dVar9) * dVar20;
    *(double *)param_1[2] = (dVar5 * dVar15 + dVar12 * dVar7 + dVar18 * dVar4 + dVar10) * dVar13;
    *(double *)(param_1[2] + 8) =
         (dVar15 * dVar18 + local_188 + (dVar4 * dVar11 - dVar7 * dVar16)) * dVar14;
    dVar15 = dVar6 * dVar11 - dVar3 * dVar16;
    dVar4 = -local_168 * dVar16 - dVar6 * dVar12;
    dVar7 = dVar3 * dVar12 - -local_168 * dVar11;
    dVar4 = dVar4 + dVar4;
    dVar7 = dVar7 + dVar7;
    dVar15 = dVar15 + dVar15;
    *(double *)param_1[3] = ((dVar15 * dVar16 - dVar7 * dVar12) + dVar18 * dVar4 + dVar3) * dVar20;
    *(double *)(param_1[3] + 8) =
         (dVar5 * dVar15 + dVar12 * dVar4 + dVar18 * dVar7 + dVar6) * dVar13;
    *(double *)param_1[4] =
         ((dVar15 * dVar18 - local_168) + (dVar7 * dVar11 - dVar4 * dVar16)) * dVar14;
    *(double *)(param_1[4] + 8) = local_170;
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4bce0 FUN_146d4bce0 body=44 status=ok
// SIG undefined FUN_146d4bce0(void)

undefined8 FUN_146d4bce0(undefined8 param_1)

{
  FUN_146d4bd0c();
  return param_1;
}



// FUNCTION 146d4bd0c FUN_146d4bd0c body=1018 status=ok
// SIG undefined FUN_146d4bd0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d4bd0c(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x7f) {
    if (cVar4 == 'A' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4c057;
    }
    else if (cVar4 != '\x01' || param_2 == 0) goto LAB_146d4c057;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d90638(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d91a7e(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4c057:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4c107 FUN_146d4c107 body=173 status=ok
// SIG undefined FUN_146d4c107(void)

undefined8
FUN_146d4c107(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = 0x101;
  local_36 = 1;
  local_34 = 0;
  local_50 = &PTR_FUN_149f48e60;
  local_30 = *(undefined8 *)(param_2 + 0x20);
  uStack_28 = *(undefined8 *)(param_2 + 0x28);
  local_20 = *(undefined8 *)(param_2 + 0x30);
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_60 = param_6;
  local_68 = param_5;
  FUN_146d4c1b5(param_1,&local_50);
  local_50 = &PTR_FUN_149f553e0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4c1b5 FUN_146d4c1b5 body=1018 status=ok
// SIG undefined FUN_146d4c1b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d4c1b5(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x80) {
    if (cVar4 == '@' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4c500;
    }
    else if (cVar4 != '\0' || param_2 == 0) goto LAB_146d4c500;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d90b52(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d91f9c(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4c500:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4c5b0 FUN_146d4c5b0 body=1018 status=ok
// SIG undefined FUN_146d4c5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d4c5b0(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x7d) {
    if (cVar4 == 'C' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4c8fb;
    }
    else if (cVar4 != '\x03' || param_2 == 0) goto LAB_146d4c8fb;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d9106a(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d924ba(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4c8fb:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4c9ab FUN_146d4c9ab body=1018 status=ok
// SIG undefined FUN_146d4c9ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d4c9ab(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x78) {
    if (cVar4 == 'H' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d4ccf6;
    }
    else if (cVar4 != '\b' || param_2 == 0) goto LAB_146d4ccf6;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d9157c(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = thunk_FUN_146d929d8(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d4ccf6:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d4cda6 FUN_146d4cda6 body=2602 status=ok
// SIG undefined FUN_146d4cda6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_146d4cda6(undefined1 (*param_1) [16],longlong param_2,double *param_3,longlong param_4,
             double *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
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
  undefined1 auVar24 [16];
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  double *local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined8 *)(param_1[4] + 8) = 0x7fefffffffffffff;
  *(undefined4 *)param_1[5] = 0xffffffff;
  param_1[5][4] = 0;
  dVar4 = *(double *)(param_2 + 0x50);
  dVar13 = *(double *)(param_2 + 0x20) * param_3[8];
  dVar15 = *(double *)(param_2 + 0x28) * param_3[9];
  dVar14 = *(double *)(param_2 + 0x30) * param_3[10];
  dVar21 = param_3[0xb] * 0.0;
  dVar10 = param_3[3];
  dVar12 = param_3[3];
  dVar18 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar11 = param_3[3];
  dVar17 = dVar15 * dVar18 - dVar13 * dVar8;
  dVar22 = dVar14 * dVar8 - dVar15 * dVar9;
  dVar20 = dVar13 * dVar9 - dVar14 * dVar18;
  dVar21 = dVar21 * dVar11 - dVar21 * dVar11;
  dVar22 = dVar22 + dVar22;
  dVar20 = dVar20 + dVar20;
  dVar17 = dVar17 + dVar17;
  dVar21 = dVar21 + dVar21;
  dVar6 = (dVar4 * *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x20)) * param_3[8];
  dVar7 = (*(double *)(param_2 + 0x40) * dVar4 + *(double *)(param_2 + 0x28)) * param_3[9];
  dVar16 = (*(double *)(param_2 + 0x48) * dVar4 + *(double *)(param_2 + 0x30)) * param_3[10];
  dVar19 = param_3[0xb] * 0.0;
  dVar4 = dVar7 * dVar18 - dVar8 * dVar6;
  dVar23 = dVar16 * dVar8 - dVar9 * dVar7;
  dVar3 = dVar6 * dVar9 - dVar18 * dVar16;
  dStack_190 = dVar19 * dVar11 - dVar11 * dVar19;
  dVar23 = dVar23 + dVar23;
  dVar3 = dVar3 + dVar3;
  dVar4 = dVar4 + dVar4;
  dStack_190 = dStack_190 + dStack_190;
  local_1b8 = (dVar17 * dVar8 - dVar20 * dVar9) + dVar10 * dVar22 + dVar13 + param_3[4];
  dStack_1b0 = (dVar9 * dVar22 - dVar18 * dVar17) + dVar12 * dVar20 + dVar15 + param_3[5];
  local_178 = dVar17 * dVar10 + dVar14 + (dVar20 * dVar18 - dVar22 * dVar8) + param_3[6];
  local_1c8._8_4_ = SUB84(dVar21,0);
  local_1c8._0_8_ = local_178;
  local_1c8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_168 = (dVar4 * dVar8 - dVar3 * dVar9) + dVar10 * dVar23 + dVar6 + param_3[4];
  dVar12 = (dVar9 * dVar23 - dVar18 * dVar4) + dVar12 * dVar3 + dVar7 + param_3[5];
  local_1a8._8_4_ = SUB84(dVar12,0);
  local_1a8._0_8_ = local_168;
  local_1a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  local_198 = dVar4 * dVar10 + dVar16 + (dVar3 * dVar18 - dVar23 * dVar8) + param_3[6];
  dVar4 = *(double *)(param_4 + 0x50);
  dVar6 = *(double *)(param_4 + 0x20) * param_5[8];
  dVar7 = *(double *)(param_4 + 0x28) * param_5[9];
  dVar8 = *(double *)(param_4 + 0x30) * param_5[10];
  dVar23 = *param_5;
  dVar3 = param_5[1];
  dVar18 = param_5[2];
  dVar14 = dVar7 * dVar23 - dVar6 * dVar3;
  dVar21 = dVar8 * dVar3 - dVar7 * dVar18;
  dVar17 = dVar6 * dVar18 - dVar8 * dVar23;
  dVar21 = dVar21 + dVar21;
  dVar17 = dVar17 + dVar17;
  dVar10 = param_5[3];
  dVar12 = param_5[3];
  dVar14 = dVar14 + dVar14;
  dVar9 = (dVar4 * *(double *)(param_4 + 0x38) + *(double *)(param_4 + 0x20)) * param_5[8];
  dVar11 = (*(double *)(param_4 + 0x40) * dVar4 + *(double *)(param_4 + 0x28)) * param_5[9];
  dVar13 = (*(double *)(param_4 + 0x48) * dVar4 + *(double *)(param_4 + 0x30)) * param_5[10];
  dVar22 = dVar11 * dVar23 - dVar3 * dVar9;
  dVar20 = dVar13 * dVar3 - dVar18 * dVar11;
  dVar4 = dVar9 * dVar18 - dVar23 * dVar13;
  dVar20 = dVar20 + dVar20;
  dVar4 = dVar4 + dVar4;
  dVar22 = dVar22 + dVar22;
  local_148 = (dVar14 * dVar3 - dVar17 * dVar18) + dVar10 * dVar21 + dVar6 + param_5[4];
  dStack_140 = (dVar18 * dVar21 - dVar23 * dVar14) + dVar12 * dVar17 + dVar7 + param_5[5];
  dVar12 = (dVar18 * dVar20 - dVar23 * dVar22) + dVar12 * dVar4 + dVar11 + param_5[5];
  local_138 = dVar14 * dVar10 + dVar8 + (dVar17 * dVar23 - dVar21 * dVar3) + param_5[6];
  local_118 = dVar22 * dVar10 + dVar13 + (dVar4 * dVar23 - dVar20 * dVar3) + param_5[6];
  local_128._8_4_ = SUB84(dVar12,0);
  local_128._0_8_ = (dVar22 * dVar3 - dVar4 * dVar18) + dVar10 * dVar20 + dVar9 + param_5[4];
  local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  uStack_160 = local_1a8._8_8_;
  local_1d0 = &local_110;
  local_1d8 = &local_f8;
  local_188 = local_1b8;
  dStack_180 = dStack_1b0;
  local_158 = local_198;
  FUN_144a0d30e();
  auVar24 = _DAT_149934d80;
  dVar10 = local_100 - local_e8;
  dVar12 = local_108 - local_f0;
  dVar14 = local_110 - local_f8;
  dVar4 = SQRT(dVar10 * dVar10 + dVar14 * dVar14 + dVar12 * dVar12);
  if (9.999999747378752e-05 < dVar4) {
    dVar21 = *(double *)(param_2 + 0x10);
    dVar17 = *(double *)(param_4 + 0x10);
    dVar8 = dVar4 - (dVar21 + dVar17);
    local_1a8._0_8_ = dVar8;
    dVar10 = dVar10 / dVar4;
    dVar12 = dVar12 / dVar4;
    dVar14 = dVar14 / dVar4;
    dVar22 = (local_f8 + dVar21 * dVar14) - param_3[4];
    dVar4 = (local_f0 + dVar12 * dVar21) - param_3[5];
    dVar21 = (local_e8 + dVar10 * dVar21) - param_3[6];
    dVar11 = -*param_3;
    dVar6 = -param_3[1];
    dVar7 = param_3[2] * -1.0;
    dVar13 = param_3[3] * 1.0;
    dVar18 = dVar22 * dVar7 - dVar11 * dVar21;
    dVar23 = dVar4 * dVar11 - dVar22 * dVar6;
    dVar3 = dVar21 * dVar6 - dVar4 * dVar7;
    dVar3 = dVar3 + dVar3;
    dVar18 = dVar18 + dVar18;
    dVar23 = dVar23 + dVar23;
    auVar1 = *(undefined1 (*) [16])(param_3 + 8);
    auVar5 = divpd(_DAT_149934d80,auVar1);
    dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar5._8_8_) *
             (*param_3 * dVar23 + dVar7 * dVar3 + dVar13 * dVar18 + dVar4);
    dVar4 = param_3[10];
    dVar9 = -dVar12;
    local_1b8 = -dVar14;
    dStack_1b0 = -0.0;
    auVar2._8_4_ = SUB84(dVar20,0);
    auVar2._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar5._0_8_) *
                   ((dVar23 * dVar6 - dVar18 * dVar7) + dVar13 * dVar3 + dVar22);
    auVar2._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *param_1 = auVar2;
    *(double *)param_1[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar4)) & (ulonglong)(1.0 / dVar4)) *
         (dVar13 * dVar23 + dVar21 + (dVar18 * dVar11 - dVar3 * dVar6));
    dVar22 = (local_110 - dVar14 * dVar17) - param_5[4];
    dVar20 = (local_108 - dVar12 * dVar17) - param_5[5];
    local_1c8._0_8_ = (local_100 - dVar10 * dVar17) - param_5[6];
    dVar3 = *param_5;
    dVar14 = -dVar3;
    dVar21 = -param_5[1];
    dVar4 = param_5[2] * -1.0;
    dVar12 = param_5[3] * 1.0;
    local_1c8._8_8_ = 0.0 - param_5[7];
    dVar23 = dVar20 * dVar14 - dVar22 * dVar21;
    dVar11 = (double)local_1c8._0_8_ * dVar21 - dVar20 * dVar4;
    dVar18 = dVar22 * dVar4 - (double)local_1c8._0_8_ * dVar14;
    dVar11 = dVar11 + dVar11;
    dVar18 = dVar18 + dVar18;
    dVar23 = dVar23 + dVar23;
    auVar1 = *(undefined1 (*) [16])(param_5 + 8);
    auVar24 = divpd(auVar24,auVar1);
    dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar24._0_8_);
    dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar24._8_8_);
    dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                     (ulonglong)(1.0 / param_5[10]));
    dVar17 = (dVar3 * dVar23 + dVar4 * dVar11 + dVar12 * dVar18 + dVar20) * dVar7;
    auVar24._8_4_ = SUB84(dVar17,0);
    auVar24._0_8_ = ((dVar23 * dVar21 - dVar18 * dVar4) + dVar12 * dVar11 + dVar22) * dVar6;
    auVar24._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])(param_1[1] + 8) = auVar24;
    *(double *)(param_1[2] + 8) =
         (dVar23 * dVar12 + (double)local_1c8._0_8_ + (dVar18 * dVar14 - dVar11 * dVar21)) * dVar13;
    dVar17 = dVar9 * dVar14 - local_1b8 * dVar21;
    dVar22 = -dVar10 * dVar21 - dVar9 * dVar4;
    dVar20 = local_1b8 * dVar4 - -dVar10 * dVar14;
    dVar22 = dVar22 + dVar22;
    dVar20 = dVar20 + dVar20;
    dVar17 = dVar17 + dVar17;
    *(double *)param_1[3] =
         ((dVar17 * dVar21 - dVar20 * dVar4) + dVar12 * dVar22 + local_1b8) * dVar6;
    *(double *)(param_1[3] + 8) =
         (dVar3 * dVar17 + dVar4 * dVar22 + dVar12 * dVar20 + dVar9) * dVar7;
    *(double *)param_1[4] =
         ((dVar17 * dVar12 - dVar10) + (dVar20 * dVar14 - dVar22 * dVar21)) * dVar13;
    *(double *)(param_1[4] + 8) = dVar8;
  }
  if ((local_e0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4d7d1 FUN_146d4d7d1 body=147 status=ok
// SIG undefined FUN_146d4d7d1(void)

undefined8
FUN_146d4d7d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1449437a2(param_5,local_98);
  local_a0 = param_6;
  local_a8 = local_98;
  FUN_146d172c9(param_1,param_2,param_4,param_3);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4d866 FUN_146d4d866 body=236 status=ok
// SIG undefined FUN_146d4d866(void)

void FUN_146d4d866(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  
  if ((int)param_1[0x1c] != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    uVar16 = 0;
    if (0 < (longlong)(int)uVar4) {
      uVar11 = 0;
      do {
        lVar10 = param_1[2];
        uVar14 = (ulonglong)uVar11;
        if (*(char *)(lVar10 + 0x10 + uVar14 * 0x18) == '\0') {
          uVar5 = uVar11 + 1;
          if ((int)(uVar11 + 1) < (int)uVar4) {
            uVar5 = uVar4;
          }
          pcVar15 = (char *)(lVar10 + uVar14 * 0x18 + 0x28);
          do {
            uVar14 = uVar14 + 1;
            uVar9 = uVar5;
            if ((ulonglong)(longlong)(int)uVar4 <= uVar14) break;
            uVar11 = uVar11 + 1;
            cVar3 = *pcVar15;
            pcVar15 = pcVar15 + 0x18;
            uVar9 = uVar11;
          } while (cVar3 != '\x01');
          uVar11 = uVar9;
          if (uVar11 == uVar4) break;
          uVar14 = (ulonglong)uVar11;
        }
        if (uVar16 != uVar14) {
          *(undefined8 *)(lVar10 + 0x10 + uVar16 * 0x18) =
               *(undefined8 *)(lVar10 + 0x10 + uVar14 * 0x18);
          puVar1 = (undefined4 *)(lVar10 + uVar14 * 0x18);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(lVar10 + uVar16 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          puVar12 = (undefined8 *)(uVar14 * 0x58 + *param_1);
          puVar13 = (undefined8 *)(uVar16 * 0x58 + *param_1);
          for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
        }
        uVar16 = uVar16 + 1;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar4);
    }
    FUN_1404aefa0(param_1 + 2,uVar16 & 0xffffffff,0);
    FUN_1404aef2e(param_1,uVar16 & 0xffffffff,0);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 146d4d952 FUN_146d4d952 body=423 status=ok
// SIG undefined FUN_146d4d952(void)

int FUN_146d4d952(longlong param_1,double *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
    FUN_146d67676((longlong *)(param_1 + 0x20),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar6 = (longlong)iVar3 * 0x70;
  lVar1 = lVar4 + lVar6;
  *(double *)(lVar4 + 0x10 + lVar6) = param_2[2];
  dVar5 = param_2[1];
  *(double *)(lVar4 + lVar6) = *param_2;
  ((double *)(lVar4 + lVar6))[1] = dVar5;
  *(double *)(lVar4 + 0x28 + lVar6) = param_2[5];
  dVar5 = param_2[4];
  pdVar2 = (double *)(lVar4 + 0x18 + lVar6);
  *pdVar2 = param_2[3];
  pdVar2[1] = dVar5;
  *(double *)(lVar4 + 0x40 + lVar6) = param_2[8];
  dVar5 = param_2[7];
  pdVar2 = (double *)(lVar4 + 0x30 + lVar6);
  *pdVar2 = param_2[6];
  pdVar2[1] = dVar5;
  dVar9 = param_2[8] - param_2[2];
  dVar11 = param_2[7] - param_2[1];
  dVar12 = param_2[6] - *param_2;
  dVar10 = param_2[5] - param_2[2];
  dVar5 = param_2[4] - param_2[1];
  dVar7 = param_2[3] - *param_2;
  dVar8 = dVar7 * dVar11 - dVar12 * dVar5;
  dVar7 = dVar10 * dVar12 - dVar9 * dVar7;
  dVar5 = dVar5 * dVar9 - dVar10 * dVar11;
  dVar10 = dVar8 * dVar8 + dVar5 * dVar5 + dVar7 * dVar7;
  if (((dVar10 != 1.0) || (dVar11 = dVar8, dVar12 = dVar7, dVar9 = dVar5, NAN(dVar10))) &&
     (dVar11 = DAT_14c8464f0, dVar12 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar11 = dVar8 * dVar10;
    dVar12 = dVar7 * dVar10;
    dVar9 = dVar5 * dVar10;
  }
  *(double *)(lVar1 + 0x48) = dVar9;
  *(double *)(lVar1 + 0x50) = dVar12;
  *(double *)(lVar1 + 0x58) = dVar11;
  *(undefined4 *)(lVar1 + 0x60) = param_4;
  *(undefined4 *)(lVar1 + 100) = param_5;
  *(undefined4 *)(lVar1 + 0x68) = param_6;
  *(undefined4 *)(lVar1 + 0x6c) = param_3;
  return iVar3;
}



// FUNCTION 146d4dafa FUN_146d4dafa body=96 status=ok
// SIG undefined FUN_146d4dafa(void)

ulonglong FUN_146d4dafa(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    lVar4 = 0x68;
    uVar3 = 0;
    do {
      if (param_2 != uVar3) {
        lVar2 = *(longlong *)(param_1 + 0x20);
        iVar1 = *(int *)(lVar2 + -8 + lVar4);
        if ((((iVar1 == param_3) || (*(int *)(lVar2 + -4 + lVar4) == param_3)) ||
            (*(int *)(lVar2 + lVar4) == param_3)) &&
           (((iVar1 == param_4 || (*(int *)(lVar2 + -4 + lVar4) == param_4)) ||
            (*(int *)(lVar2 + lVar4) == param_4)))) {
          return uVar3 & 0xffffffff;
        }
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x70;
    } while ((longlong)*(int *)(param_1 + 0x28) != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 146d4db5a FUN_146d4db5a body=981 status=ok
// SIG undefined FUN_146d4db5a(void)

void FUN_146d4db5a(longlong *param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  uint *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [4];
  uint local_ac;
  undefined1 local_a8 [24];
  int local_90;
  int local_8c;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = (int)param_1[1];
  local_b8 = param_1 + 6;
  uVar10 = (longlong)iVar2 * 3;
  uVar17 = (uint)uVar10;
  if ((uint)((int)param_1[7] - *(int *)((longlong)param_1 + 100)) < uVar17) {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar10);
    }
    FUN_146d67706(local_b8,uVar10 & 0xffffffff);
    iVar8 = 1;
    if (3 < uVar17) {
      uVar9 = (uVar17 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if (((int)param_1[0xf] == 0) || ((int)param_1[0xf] < iVar8)) {
      *(int *)(param_1 + 0xf) = iVar8;
      FUN_146d678b4(local_b8);
    }
  }
  plVar13 = param_1 + 0x10;
  if ((uint)((int)param_1[0x11] - *(int *)((longlong)param_1 + 0xb4)) < uVar17) {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar17);
    }
    FUN_1400bac10(plVar13,uVar10 & 0xffffffff);
    iVar8 = 1;
    if (3 < uVar17) {
      uVar17 = (uVar17 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if (((int)param_1[0x19] == 0) || ((int)param_1[0x19] < iVar8)) {
      *(int *)(param_1 + 0x19) = iVar8;
      FUN_144a56d22(plVar13);
    }
  }
  if (0 < iVar2) {
    lVar16 = 0x54;
    lVar15 = 0;
    do {
      plVar6 = local_b8;
      lVar3 = param_1[2];
      lVar14 = (longlong)*(int *)(lVar3 + 8 + lVar15) * 0x70 + param_1[4];
      lVar4 = *param_1;
      dVar1 = *(double *)(lVar4 + -0xc + lVar16);
      if (*(byte *)(lVar4 + lVar16) == 1) {
        if (dVar1 < 0.0) {
          iVar8 = *(int *)(lVar14 + 0x60);
          local_90 = *(int *)(lVar14 + 100);
          local_8c = iVar8;
          if (local_90 == -1 || iVar8 < local_90) {
            local_8c = local_90;
            local_90 = iVar8;
          }
          local_c0 = plVar13;
          FUN_146d67a78(local_b8,local_a8,&local_90);
          iVar8 = *(int *)(lVar14 + 100);
          local_90 = *(int *)(lVar14 + 0x68);
          local_8c = iVar8;
          if (local_90 == -1 || iVar8 < local_90) {
            local_8c = local_90;
            local_90 = iVar8;
          }
          FUN_146d67a78(plVar6,local_a8,&local_90);
          local_90 = *(int *)(lVar14 + 0x60);
          iVar8 = *(int *)(lVar14 + 0x68);
          local_8c = iVar8;
          if (local_90 == -1 || iVar8 < local_90) {
            local_8c = local_90;
            local_90 = iVar8;
          }
          FUN_146d67a78(plVar6,local_a8,&local_90);
          local_90 = *(int *)(lVar14 + 0x60);
          FUN_144984904(local_c0,local_a8,&local_90,0);
          local_90 = *(int *)(lVar14 + 100);
          FUN_144984904(local_c0,local_a8,&local_90);
          plVar13 = local_c0;
          local_90 = *(int *)(lVar14 + 0x68);
          FUN_144984904(local_c0,local_a8,&local_90);
        }
      }
      else if (*(byte *)(lVar4 + lVar16) - 2 < 2) {
        local_c8 = 0x3f847ae147ae147b;
        local_d0 = &local_78;
        local_d8 = &local_74;
        cVar7 = FUN_146d4df32(lVar14,lVar4 + lVar16 + -0x3c,&local_90);
        if (cVar7 != '\0') {
          uVar10 = (ulonglong)local_74;
          if (local_78 == 0xffffffff || uVar10 == 0xffffffff) {
            if (local_74 == 0xffffffff) goto LAB_146d4dd58;
            uVar11 = uVar10 | 0xffffffff00000000;
          }
          else {
            if (dVar1 < 0.0) {
              local_ac = local_74;
              FUN_144984904(plVar13,local_b0,&local_ac,0);
              local_ac = local_78;
              FUN_144984904(plVar13,local_b0,&local_ac,0);
              uVar10 = (ulonglong)local_74;
            }
            bVar5 = (int)uVar10 < (int)local_78;
            uVar12 = uVar10;
            if (local_78 == 0xffffffff || bVar5) {
              uVar12 = (ulonglong)local_78;
            }
            uVar11 = (ulonglong)local_78;
            if (local_78 == 0xffffffff || bVar5) {
              uVar11 = uVar10;
            }
            uVar11 = uVar11 | uVar12 << 0x20;
          }
          *(ulonglong *)(lVar3 + lVar15) = uVar11;
        }
      }
LAB_146d4dd58:
      lVar15 = lVar15 + 0x18;
      lVar16 = lVar16 + 0x58;
    } while ((longlong)iVar2 * 0x18 != lVar15);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4df32 FUN_146d4df32 body=298 status=ok
// SIG undefined FUN_146d4df32(void)

void FUN_146d4df32(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int *local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_5 = 0xffffffff;
  *param_6 = 0xffffffff;
  local_38 = *(undefined8 *)(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 0xc);
  uStack_40 = *(undefined8 *)(param_1 + 0xe);
  local_68 = *(undefined8 *)(param_1 + 6);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  local_58 = *(undefined8 *)(param_1 + 10);
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = *(undefined8 *)(param_1 + 4);
  local_98 = param_7;
  local_a0 = &local_90;
  local_a8 = &local_8c;
  cVar5 = FUN_1404affdc(param_2);
  if (cVar5 != '\0') {
    lVar6 = (longlong)local_8c;
    if (lVar6 != -1) {
      *param_5 = param_1[lVar6 + 0x18];
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + lVar6 * 6 + 4);
      puVar1 = param_1 + lVar6 * 6;
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_3 = *puVar1;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
    }
    lVar6 = (longlong)local_90;
    if (lVar6 != -1) {
      *param_6 = param_1[lVar6 + 0x18];
      *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_1 + lVar6 * 6 + 4);
      param_1 = param_1 + lVar6 * 6;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *param_4 = *param_1;
      param_4[1] = uVar2;
      param_4[2] = uVar3;
      param_4[3] = uVar4;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4e05e FUN_146d4e05e body=178 status=ok
// SIG undefined FUN_146d4e05e(void)

void FUN_146d4e05e(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2;
  FUN_146d4db5a();
  if (1 < *(int *)(param_1 + 8)) {
    FUN_146d4e110(param_1,CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_14c75f07c) ^ 1);
  }
  if ((*(char *)(param_1 + 0xe4) == '\x01') &&
     (lVar3 = (longlong)*(int *)(param_1 + 0x18), 0 < lVar3)) {
    uVar4 = lVar3 + 1;
    lVar3 = lVar3 * 0x18 + -8;
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if ((*(char *)(lVar2 + lVar3) == '\x01') &&
         (pfVar1 = (float *)(lVar2 + -4 + lVar3), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
        *(undefined1 *)(lVar2 + lVar3) = 0;
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -0x18;
    } while (1 < uVar4);
  }
  if (1 < *(int *)(param_1 + 8)) {
    FUN_146d4e252(param_1);
  }
  if (DAT_14c75f07c == '\0') {
    FUN_146d4e410(param_1);
  }
  if (0 < *(int *)(param_1 + 8)) {
    FUN_146d4eab2(param_1);
  }
  FUN_146d4f1a2(param_1,param_2);
  return;
}



// FUNCTION 146d4e110 FUN_146d4e110 body=321 status=ok
// SIG undefined FUN_146d4e110(void)

void FUN_146d4e110(longlong param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if ((DAT_14c75f060 != '\x01') || ((longlong)*(int *)(param_1 + 0x18) < 1)) {
    return;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x18);
LAB_146d4e13d:
  lVar6 = lVar5 + -1;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar3 + 0x10 + lVar6 * 0x18) == '\x01') {
    puVar1 = (uint *)(lVar3 + lVar6 * 0x18);
    uVar2 = *puVar1;
    if (param_2 == '\0') {
      if (uVar2 != 0xffffffff) {
LAB_146d4e1ca:
        if ((puVar1[1] != 0xffffffff) && (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100))) {
          lVar7 = *(longlong *)puVar1;
          lVar9 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar9 = param_1 + 0x68;
          }
          iVar8 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(param_1 + 0x78) - 1U &
                                   (int)lVar7 + (int)((ulonglong)lVar7 >> 0x20) * 0x17) * 4);
          if (iVar8 != -1) {
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x10) == lVar7)
              goto LAB_146d4e23a;
              iVar8 = *(int *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x30) + 8);
            } while (iVar8 != -1);
          }
        }
      }
    }
    else if (uVar2 != 0xffffffff) {
      if (puVar1[1] != 0xffffffff) goto LAB_146d4e1ca;
      if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
        lVar7 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar7 = param_1 + 0xb8;
        }
        iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar2) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar8 * 0xc) == uVar2)
            goto LAB_146d4e23a;
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
    }
  }
  goto LAB_146d4e1d8;
LAB_146d4e23a:
  *(undefined1 *)(lVar3 + 0x10 + lVar6 * 0x18) = 0;
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
LAB_146d4e1d8:
  bVar4 = lVar5 < 2;
  lVar5 = lVar6;
  if (bVar4) {
    return;
  }
  goto LAB_146d4e13d;
}



// FUNCTION 146d4e252 FUN_146d4e252 body=445 status=ok
// SIG undefined FUN_146d4e252(void)

void FUN_146d4e252(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if (1 < (int)param_1[1]) {
    FUN_146d4d866();
    uVar7 = (ulonglong)(int)param_1[3];
    if (0 < (longlong)uVar7) {
      dVar3 = (double)param_1[0x1b];
      uVar8 = 1;
      lVar9 = 0x28;
      lVar11 = 0x70;
      uVar12 = 0;
      do {
        uVar13 = uVar12 + 1;
        if ((uVar13 < uVar7 & *(byte *)(param_1[2] + 0x10 + uVar12 * 0x18)) == 1) {
          lVar14 = uVar12 * 0x58 + *param_1;
          piVar1 = (int *)(param_1[2] + uVar12 * 0x18);
          lVar10 = lVar11;
          lVar15 = lVar9;
          uVar16 = uVar7;
          do {
            lVar5 = param_1[2];
            if (*(char *)(lVar5 + lVar15) == '\x01') {
              lVar6 = *param_1;
              if (((((*piVar1 != -1) && (piVar1[1] == -1)) &&
                   (iVar4 = *(int *)(lVar5 + -0x10 + lVar15), iVar4 != -1)) &&
                  ((*piVar1 == iVar4 && (*(int *)(lVar5 + -0xc + lVar15) == -1)))) ||
                 (dVar17 = *(double *)(lVar14 + 0x28) - *(double *)(lVar6 + 0x10 + lVar10),
                 dVar19 = *(double *)(lVar14 + 0x20) - *(double *)(lVar6 + 8 + lVar10),
                 dVar18 = *(double *)(lVar14 + 0x18) - *(double *)(lVar6 + lVar10),
                 dVar17 * dVar17 + dVar18 * dVar18 + dVar19 * dVar19 < dVar3 * dVar3)) {
                fVar2 = *(float *)(lVar5 + -4 + lVar15);
                if (ABS((float)piVar1[3] - fVar2) <= 0.01) {
                  dVar17 = *(double *)(lVar6 + 0x30 + lVar10);
                  if (*(double *)(lVar14 + 0x48) <= dVar17 && dVar17 != *(double *)(lVar14 + 0x48))
                  goto LAB_146d4e3a1;
                }
                else if (fVar2 < (float)piVar1[3]) {
LAB_146d4e3a1:
                  *(undefined1 *)(lVar5 + lVar15) = 0;
                  *(int *)(param_1 + 0x1c) = (int)param_1[0x1c] + 1;
                  goto LAB_146d4e3ac;
                }
                *(undefined1 *)(lVar5 + 0x10 + uVar12 * 0x18) = 0;
                *(int *)(param_1 + 0x1c) = (int)param_1[0x1c] + 1;
                break;
              }
            }
LAB_146d4e3ac:
            uVar16 = uVar16 - 1;
            lVar15 = lVar15 + 0x18;
            lVar10 = lVar10 + 0x58;
          } while (uVar8 != uVar16);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
        lVar11 = lVar11 + 0x58;
        uVar12 = uVar13;
      } while (uVar13 != uVar7);
    }
  }
  return;
}



// FUNCTION 146d4e410 FUN_146d4e410 body=1580 status=ok
// SIG undefined FUN_146d4e410(void)

void FUN_146d4e410(longlong *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146d4f414();
  if (4 < (longlong)(int)param_1[1]) {
    lVar8 = *param_1;
    pdVar9 = (double *)(lVar8 + 0x80);
    dVar18 = -1.0;
    uVar14 = 1;
    uVar15 = 1;
    do {
      dVar19 = *pdVar9 - *(double *)(lVar8 + 0x28);
      dVar22 = pdVar9[-2] - *(double *)(lVar8 + 0x18);
      dVar20 = pdVar9[-1] - *(double *)(lVar8 + 0x20);
      dVar20 = dVar19 * dVar19 + dVar22 * dVar22 + dVar20 * dVar20;
      if (dVar18 < dVar20) {
        uVar14 = uVar15 & 0xffffffff;
        dVar18 = dVar20;
      }
      uVar15 = uVar15 + 1;
      pdVar9 = pdVar9 + 0xb;
    } while ((longlong)(int)param_1[1] != uVar15);
    lVar16 = (longlong)(int)uVar14;
    puVar10 = (undefined8 *)(lVar16 * 0x58 + lVar8);
    puVar11 = (undefined8 *)(lVar8 + 0x58);
    puVar13 = &local_128;
    for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = puVar10;
    puVar13 = (undefined8 *)(lVar8 + 0x58);
    for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = &local_128;
    for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    lVar8 = param_1[2];
    local_118 = *(undefined8 *)(lVar8 + 0x28);
    local_128 = *(undefined8 *)(lVar8 + 0x18);
    uStack_120 = *(undefined8 *)(lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar8 + 0x10 + lVar16 * 0x18);
    puVar11 = (undefined8 *)(lVar8 + lVar16 * 0x18);
    uVar4 = puVar11[1];
    *(undefined8 *)(lVar8 + 0x18) = *puVar11;
    *(undefined8 *)(lVar8 + 0x20) = uVar4;
    *(undefined8 *)(lVar8 + 0x10 + lVar16 * 0x18) = local_118;
    puVar11 = (undefined8 *)(lVar8 + lVar16 * 0x18);
    *puVar11 = local_128;
    puVar11[1] = uStack_120;
    lVar8 = *param_1;
    if ((longlong)(int)param_1[1] < 3) {
      bVar3 = false;
      lVar7 = 2;
    }
    else {
      local_140 = *(double *)(lVar8 + 0x28);
      dVar18 = *(double *)(lVar8 + 0x80) - local_140;
      local_148 = *(double *)(lVar8 + 0x18);
      local_150 = *(double *)(lVar8 + 0x20);
      local_138 = *(double *)(lVar8 + 0x78) - local_150;
      dVar20 = *(double *)(lVar8 + 0x70) - local_148;
      uStack_130 = 0;
      pdVar9 = (double *)(lVar8 + 0xd8);
      uVar14 = 2;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar15 = 2;
      auVar25 = ZEXT816(0);
      do {
        dVar22 = ((pdVar9[-1] - local_150) * -dVar18 + local_138 * (*pdVar9 - local_140)) *
                 *(double *)(lVar8 + 0x30) +
                 ((*pdVar9 - local_140) * -dVar20 + dVar18 * (pdVar9[-2] - local_148)) *
                 *(double *)(lVar8 + 0x38) +
                 (dVar20 * (pdVar9[-1] - local_150) + (pdVar9[-2] - local_148) * -local_138) *
                 *(double *)(lVar8 + 0x40);
        dVar19 = ABS(dVar22);
        uVar17 = -(ulonglong)(ABS(auVar25._0_8_) < dVar19);
        auVar24._0_8_ = ~uVar17 & CONCAT44(uVar27,uVar26);
        auVar24._8_8_ = ~(auVar25._8_8_ & 0x7fffffffffffffff) & CONCAT44(uVar29,uVar28);
        if (ABS(auVar25._0_8_) < dVar19) {
          uVar14 = uVar15 & 0xffffffff;
        }
        auVar25._8_8_ = 0;
        auVar25._0_8_ = (ulonglong)dVar22 & uVar17;
        auVar25 = auVar24 | auVar25;
        uVar15 = uVar15 + 1;
        pdVar9 = pdVar9 + 0xb;
        uVar26 = auVar25._0_4_;
        uVar27 = auVar25._4_4_;
        uVar28 = auVar25._8_4_;
        uVar29 = auVar25._12_4_;
      } while ((longlong)(int)param_1[1] != uVar15);
      lVar7 = (longlong)(int)uVar14;
      bVar3 = auVar25._0_8_ < 0.0;
    }
    puVar10 = (undefined8 *)(lVar7 * 0x58 + lVar8);
    puVar11 = (undefined8 *)(lVar8 + 0xb0);
    puVar13 = &local_128;
    for (lVar16 = 0xb; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = puVar10;
    puVar13 = (undefined8 *)(lVar8 + 0xb0);
    for (lVar16 = 0xb; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = &local_128;
    for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    lVar8 = param_1[2];
    local_118 = *(undefined8 *)(lVar8 + 0x40);
    local_128 = *(undefined8 *)(lVar8 + 0x30);
    uStack_120 = *(undefined8 *)(lVar8 + 0x38);
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar8 + 0x10 + lVar7 * 0x18);
    puVar11 = (undefined8 *)(lVar8 + lVar7 * 0x18);
    uVar4 = puVar11[1];
    *(undefined8 *)(lVar8 + 0x30) = *puVar11;
    *(undefined8 *)(lVar8 + 0x38) = uVar4;
    *(undefined8 *)(lVar8 + 0x10 + lVar7 * 0x18) = local_118;
    puVar11 = (undefined8 *)(lVar8 + lVar7 * 0x18);
    *puVar11 = local_128;
    puVar11[1] = uStack_120;
    if (bVar3) {
      puVar11 = (undefined8 *)*param_1;
      puVar10 = puVar11;
      puVar13 = &local_128;
      for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar10 = puVar11 + 0xb;
      puVar13 = puVar11;
      for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar10 = &local_128;
      puVar11 = puVar11 + 0xb;
      for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar11 = (undefined8 *)param_1[2];
      local_118 = puVar11[2];
      local_128 = *puVar11;
      uStack_120 = puVar11[1];
      *puVar11 = puVar11[3];
      puVar11[1] = puVar11[4];
      puVar11[2] = puVar11[5];
      puVar11[3] = local_128;
      puVar11[4] = uStack_120;
      puVar11[5] = local_118;
    }
    lVar8 = *param_1;
    uVar14 = 3;
    if (3 < (longlong)(int)param_1[1]) {
      uVar15 = 3;
      dVar18 = 0.0;
      do {
        lVar7 = uVar14 * 0x58;
        lVar16 = 1;
        pdVar9 = (double *)(lVar8 + 0x28);
        do {
          lVar12 = lVar16;
          if (lVar16 == 3) {
            lVar12 = 0;
          }
          lVar12 = lVar12 * 0x58;
          dVar20 = *(double *)(lVar8 + 0x28 + lVar12) - *pdVar9;
          dVar22 = *(double *)(lVar8 + 0x20 + lVar12) - pdVar9[-1];
          dVar19 = *(double *)(lVar8 + 0x18 + lVar12) - pdVar9[-2];
          dVar2 = *(double *)(lVar8 + 0x28 + lVar7) - *pdVar9;
          dVar21 = *(double *)(lVar8 + 0x20 + lVar7) - pdVar9[-1];
          dVar23 = *(double *)(lVar8 + 0x18 + lVar7) - pdVar9[-2];
          dVar20 = (dVar21 * dVar20 - dVar2 * dVar22) * *(double *)(lVar8 + 0x30) +
                   (dVar2 * dVar19 - dVar20 * dVar23) * *(double *)(lVar8 + 0x38) +
                   (dVar23 * dVar22 - dVar19 * dVar21) * *(double *)(lVar8 + 0x40);
          if (dVar18 < dVar20) {
            uVar15 = uVar14 & 0xffffffff;
            dVar18 = dVar20;
          }
          pdVar9 = pdVar9 + 0xb;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 4);
        uVar14 = uVar14 + 1;
      } while (uVar14 != (longlong)(int)param_1[1]);
      uVar14 = (ulonglong)(int)uVar15;
    }
    puVar10 = (undefined8 *)(uVar14 * 0x58 + lVar8);
    puVar11 = (undefined8 *)(lVar8 + 0x108);
    puVar13 = &local_128;
    for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = puVar10;
    puVar13 = (undefined8 *)(lVar8 + 0x108);
    for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = &local_128;
    for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    lVar8 = param_1[2];
    local_118 = *(undefined8 *)(lVar8 + 0x58);
    uVar4 = *(undefined8 *)(lVar8 + 0x48);
    uVar5 = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(lVar8 + 0x10 + uVar14 * 0x18);
    puVar11 = (undefined8 *)(lVar8 + uVar14 * 0x18);
    uVar6 = puVar11[1];
    *(undefined8 *)(lVar8 + 0x48) = *puVar11;
    *(undefined8 *)(lVar8 + 0x50) = uVar6;
    *(undefined8 *)(lVar8 + 0x10 + uVar14 * 0x18) = local_118;
    local_128._0_4_ = (undefined4)uVar4;
    local_128._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_120._0_4_ = (undefined4)uVar5;
    uStack_120._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    puVar1 = (undefined4 *)(lVar8 + uVar14 * 0x18);
    *puVar1 = (undefined4)local_128;
    puVar1[1] = local_128._4_4_;
    puVar1[2] = (undefined4)uStack_120;
    puVar1[3] = uStack_120._4_4_;
    local_128 = uVar4;
    uStack_120 = uVar5;
    FUN_1404aef2e(param_1,4,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_178);
  }
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4eab2 FUN_146d4eab2 body=1774 status=ok
// SIG undefined FUN_146d4eab2(void)

void FUN_146d4eab2(longlong *param_1)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_178 [32];
  int *local_158;
  int *local_150;
  undefined8 local_148;
  int local_134;
  undefined1 local_128 [24];
  double local_110;
  double local_108;
  double local_100;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  
  fVar7 = DAT_14c75f064;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = param_1[1];
  if (0 < (longlong)(int)lVar6) {
    lVar18 = 0;
    do {
      if ((*(char *)(param_1[2] + 0x10 + lVar18 * 0x18) == '\x01') &&
         (pdVar14 = (double *)(lVar18 * 0x58 + *param_1),
         (*(byte *)((longlong)pdVar14 + 0x54) & 0xfe) == 2)) {
        lVar10 = param_1[2] + lVar18 * 0x18;
        fVar2 = *(float *)(lVar10 + 0xc);
        if (fVar2 <= fVar7) {
          iVar5 = *(int *)(lVar10 + 8);
          lVar11 = param_1[4];
          lVar21 = (longlong)iVar5 * 0x70 + lVar11;
          local_148 = 0x3f1a36e2e0000000;
          local_158 = &local_f4;
          local_150 = &local_f8;
          cVar8 = FUN_146d4df32(lVar21,pdVar14 + 3,&local_110,local_128);
          if (cVar8 != '\0') {
            if (local_f8 == -1 || local_f4 == -1) {
              if ((local_f4 != -1) && (local_134 = (int)param_1[5], 0 < local_134)) {
                lVar10 = 0;
                lVar11 = 0;
                do {
                  lVar21 = param_1[4];
                  lVar16 = lVar11 * 0x70 + lVar21;
                  pdVar1 = (double *)(lVar21 + lVar10);
                  if (*(int *)(lVar21 + 0x60 + lVar10) == local_f4) {
                    pdVar15 = (double *)(lVar16 + 0x20);
                    pdVar13 = (double *)(lVar16 + 0x28);
                    lVar20 = 0x40;
                    lVar12 = 0x38;
                    pdVar17 = (double *)(lVar16 + 0x30);
                    pdVar19 = (double *)(lVar16 + 0x18);
LAB_146d4ebef:
                    dVar26 = pdVar14[6];
                    dVar24 = pdVar14[7];
                    dVar3 = pdVar14[8];
                    dVar23 = *(double *)(lVar21 + 0x48 + lVar10);
                    dVar25 = *(double *)(lVar21 + 0x50 + lVar10);
                    dVar4 = *(double *)(lVar21 + 0x58 + lVar10);
                    dVar28 = (dVar26 * (*pdVar15 - local_108) - (*pdVar19 - local_110) * dVar24) *
                             dVar4 + (dVar24 * (*pdVar13 - local_100) -
                                     (*pdVar15 - local_108) * dVar3) * dVar23 +
                                     ((*pdVar19 - local_110) * dVar3 -
                                     (*pdVar13 - local_100) * dVar26) * dVar25;
                    dVar27 = *(double *)(lVar20 + (longlong)pdVar1) - local_100;
                    dVar29 = *(double *)(lVar12 + (longlong)pdVar1) - local_108;
                    dVar29 = (dVar26 * dVar29 - (*pdVar17 - local_110) * dVar24) * dVar4 +
                             (dVar24 * dVar27 - dVar29 * dVar3) * dVar23 +
                             (dVar3 * (*pdVar17 - local_110) - dVar27 * dVar26) * dVar25;
                    uVar22 = -(ulonglong)(0.0 < dVar28);
                    dVar27 = (double)(uVar22 & 0x3ff0000000000000 |
                                     (ulonglong)
                                     (~(uint)(uVar22 >> 0x20) &
                                     (uint)(-(ulonglong)(dVar28 < 0.0) >> 0x20) & 0xbff00000) <<
                                     0x20);
                    uVar22 = -(ulonglong)(0.0 < dVar29);
                    dVar29 = (double)(uVar22 & 0x3ff0000000000000 |
                                     (ulonglong)
                                     (~(uint)(uVar22 >> 0x20) &
                                     (uint)(-(ulonglong)(dVar29 < 0.0) >> 0x20) & 0xbff00000) <<
                                     0x20);
                    if ((dVar27 == dVar29) && (!NAN(dVar27) && !NAN(dVar29))) {
                      if (0.0 < ((*(double *)(lVar21 + 0x10 + lVar10) +
                                  *(double *)(lVar21 + 0x28 + lVar10) +
                                 *(double *)(lVar21 + 0x40 + lVar10)) / 3.0 - pdVar14[5]) * dVar3 +
                                ((*(double *)(lVar21 + lVar10) + *(double *)(lVar21 + 0x18 + lVar10)
                                 + *(double *)(lVar21 + 0x30 + lVar10)) / 3.0 - pdVar14[3]) * dVar26
                                + ((*(double *)(lVar21 + 8 + lVar10) +
                                    *(double *)(lVar21 + 0x20 + lVar10) +
                                   *(double *)(lVar21 + 0x38 + lVar10)) / 3.0 - pdVar14[4]) * dVar24
                         ) {
                        dVar26 = dVar3 * dVar4 + dVar26 * dVar23 + dVar24 * dVar25;
                        if (dVar26 <= -9.99999993922529e-09) {
                          dVar25 = -dVar25;
                          dVar23 = -dVar23;
                        }
                        uVar22 = -(ulonglong)(-9.99999993922529e-09 < dVar26);
                        dVar24 = (double)(~uVar22 & (ulonglong)-dVar4 | uVar22 & (ulonglong)dVar4);
                        pdVar14[6] = dVar23;
                        pdVar14[7] = dVar25;
                        pdVar14[8] = dVar24;
                        dVar26 = pdVar14[9];
                        *pdVar14 = pdVar14[3] + dVar23 * dVar26;
                        pdVar14[1] = pdVar14[4] + dVar25 * dVar26;
                        pdVar14[2] = pdVar14[5] + dVar24 * dVar26;
                        local_134 = (int)param_1[5];
                      }
                    }
                  }
                  else {
                    if (*(int *)(lVar21 + 100 + lVar10) == local_f4) {
                      pdVar15 = (double *)(lVar16 + 0x38);
                      pdVar13 = (double *)(lVar16 + 0x40);
                      lVar20 = 0x10;
                      lVar12 = 8;
                      pdVar17 = pdVar1;
                      pdVar19 = (double *)(lVar16 + 0x30);
                      goto LAB_146d4ebef;
                    }
                    if (*(int *)(lVar21 + 0x68 + lVar10) == local_f4) {
                      pdVar15 = (double *)(lVar21 + lVar10 + 8);
                      pdVar13 = (double *)(lVar21 + lVar10 + 0x10);
                      pdVar17 = (double *)(lVar16 + 0x18);
                      lVar20 = 0x28;
                      lVar12 = 0x20;
                      pdVar19 = pdVar1;
                      goto LAB_146d4ebef;
                    }
                  }
                  lVar11 = lVar11 + 1;
                  lVar10 = lVar10 + 0x70;
                } while (lVar11 < local_134);
              }
            }
            else {
              iVar9 = FUN_146d4dafa(param_1,iVar5);
              if (iVar9 != -1) {
                lVar16 = (longlong)iVar9 * 0x70;
                dVar26 = *(double *)(lVar11 + 0x48 + lVar16);
                dVar24 = *(double *)(lVar11 + 0x50 + lVar16);
                dVar3 = *(double *)(lVar21 + 0x48);
                dVar23 = *(double *)(lVar21 + 0x50);
                dVar25 = *(double *)(lVar11 + 0x58 + lVar16);
                dVar4 = *(double *)(lVar21 + 0x58);
                if ((double)fVar2 < dVar25 * dVar4 + dVar26 * dVar3 + dVar24 * dVar23) {
                  dVar29 = pdVar14[8] * dVar25 + pdVar14[6] * dVar26 + pdVar14[7] * dVar24;
                  if (dVar29 <= (double)fVar2) {
                    dVar26 = dVar3;
                    dVar24 = dVar23;
                    dVar25 = dVar4;
                    iVar9 = iVar5;
                    if (fVar2 <= -1e-08) {
                      dVar25 = -dVar4;
                      dVar24 = -dVar23;
                      dVar26 = -dVar3;
                    }
                  }
                  else if (dVar29 <= -9.99999993922529e-09) {
                    dVar25 = -dVar25;
                    dVar24 = -dVar24;
                    dVar26 = -dVar26;
                  }
                  pdVar14[6] = dVar26;
                  pdVar14[7] = dVar24;
                  pdVar14[8] = dVar25;
                  dVar3 = pdVar14[9];
                  *pdVar14 = dVar26 * dVar3 + pdVar14[3];
                  pdVar14[1] = dVar24 * dVar3 + pdVar14[4];
                  pdVar14[2] = dVar25 * dVar3 + pdVar14[5];
                  *(int *)(lVar10 + 8) = iVar9;
                }
              }
            }
          }
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != (int)lVar6);
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d4f1a2 FUN_146d4f1a2 body=625 status=ok
// SIG undefined FUN_146d4f1a2(void)

void FUN_146d4f1a2(longlong *param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
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
  
  FUN_146d4f59e();
  if (0 < (int)param_1[1]) {
    lVar4 = 0x40;
    lVar5 = 0;
    do {
      lVar2 = *param_1;
      pdVar1 = (double *)(lVar2 + -0x28 + lVar4);
      dVar9 = *pdVar1 - param_2[4];
      dVar11 = pdVar1[1] - param_2[5];
      dVar6 = *(double *)(lVar2 + -0x18 + lVar4) - param_2[6];
      dVar3 = *param_2;
      dVar12 = -dVar3;
      dVar13 = -param_2[1];
      dVar7 = param_2[2] * -1.0;
      dVar8 = param_2[3] * 1.0;
      dVar15 = dVar9 * dVar7 - dVar12 * dVar6;
      dVar14 = dVar11 * dVar12 - dVar9 * dVar13;
      dVar10 = dVar6 * dVar13 - dVar11 * dVar7;
      dVar10 = dVar10 + dVar10;
      dVar15 = dVar15 + dVar15;
      dVar14 = dVar14 + dVar14;
      pdVar1 = (double *)(lVar2 + -0x28 + lVar4);
      *pdVar1 = (dVar14 * dVar13 - dVar15 * dVar7) + dVar8 * dVar10 + dVar9;
      pdVar1[1] = dVar3 * dVar14 + dVar7 * dVar10 + dVar8 * dVar15 + dVar11;
      *(double *)(lVar2 + -0x18 + lVar4) =
           dVar8 * dVar14 + dVar6 + (dVar15 * dVar12 - dVar10 * dVar13);
      pdVar1 = (double *)(lVar2 + -0x10 + lVar4);
      dVar15 = *pdVar1;
      dVar3 = pdVar1[1];
      dVar6 = *param_2;
      dVar9 = -dVar6;
      dVar11 = -param_2[1];
      dVar7 = param_2[2] * -1.0;
      dVar8 = param_2[3] * 1.0;
      dVar10 = dVar3 * dVar9 - dVar15 * dVar11;
      dVar12 = *(double *)(lVar2 + lVar4) * dVar11 - dVar3 * dVar7;
      dVar13 = dVar15 * dVar7 - dVar9 * *(double *)(lVar2 + lVar4);
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar10 = dVar10 + dVar10;
      dVar14 = *(double *)(lVar2 + lVar4);
      pdVar1 = (double *)(lVar2 + -0x10 + lVar4);
      *pdVar1 = (dVar10 * dVar11 - dVar13 * dVar7) + dVar8 * dVar12 + dVar15;
      pdVar1[1] = dVar6 * dVar10 + dVar7 * dVar12 + dVar8 * dVar13 + dVar3;
      *(double *)(lVar2 + lVar4) = dVar8 * dVar10 + dVar14 + (dVar13 * dVar9 - dVar12 * dVar11);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 146d4f414 FUN_146d4f414 body=393 status=ok
// SIG undefined FUN_146d4f414(void)

void FUN_146d4f414(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong lStack_70;
  undefined8 *local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146d4d866();
  if (1 < (int)param_1[1]) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_144a127d2(&local_58,(int)param_1[1],1);
    if (0 < (int)param_1[1]) {
      lVar2 = 0;
      do {
        *(int *)(local_58 + lVar2 * 4) = (int)lVar2;
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_1[1]);
    }
    FUN_14299b583(local_58,local_58 + (longlong)(int)uStack_50 * 4);
    local_68 = (undefined8 *)0x0;
    lStack_60 = 0;
    local_78 = (undefined8 *)0x0;
    lStack_70 = 0;
    FUN_1404aef2e(&local_68,(int)param_1[1],1);
    FUN_1404aefa0(&local_78,(int)param_1[1],1);
    if (0 < (int)param_1[1]) {
      lVar2 = 0;
      puVar3 = local_68;
      puVar8 = local_78;
      do {
        puVar6 = (undefined8 *)((longlong)*(int *)(local_58 + lVar2 * 4) * 0x58 + *param_1);
        puVar7 = puVar3;
        for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        lVar5 = (longlong)*(int *)(local_58 + lVar2 * 4);
        lVar4 = param_1[2];
        puVar8[2] = *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x18);
        puVar6 = (undefined8 *)(lVar4 + lVar5 * 0x18);
        uVar1 = puVar6[1];
        *puVar8 = *puVar6;
        puVar8[1] = uVar1;
        lVar2 = lVar2 + 1;
        puVar8 = puVar8 + 3;
        puVar3 = puVar3 + 0xb;
      } while (lVar2 < (int)param_1[1]);
    }
    puVar3 = (undefined8 *)*param_1;
    lVar2 = param_1[1];
    *param_1 = (longlong)local_68;
    param_1[1] = lStack_60;
    local_48 = (undefined8 *)param_1[2];
    lStack_40 = param_1[3];
    param_1[2] = (longlong)local_78;
    param_1[3] = lStack_70;
    local_78 = local_48;
    lStack_70 = lStack_40;
    local_68 = puVar3;
    lStack_60 = lVar2;
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4f59e FUN_146d4f59e body=568 status=ok
// SIG undefined FUN_146d4f59e(void)

void FUN_146d4f59e(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146d4d866();
  if (1 < (int)param_1[1]) {
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      FUN_1404b0b9a(param_1 + 2,0);
    }
    else {
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if (DAT_14c992eec != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_146d4f80c();
    if (0 < (int)param_1[1]) {
      lVar8 = 8;
      lVar10 = 0x40;
      lVar11 = 0;
      do {
        lVar6 = *param_1;
        dVar1 = *(double *)(lVar6 + -0x10 + lVar10);
        dVar2 = *(double *)(lVar6 + -0x28 + lVar10);
        dVar3 = *(double *)(lVar6 + -0x20 + lVar10);
        dVar4 = *(double *)(lVar6 + -8 + lVar10);
        dVar5 = *(double *)(lVar6 + -0x18 + lVar10);
        dVar7 = dVar5 * *(double *)(lVar6 + lVar10) + dVar2 * dVar1 + dVar3 * dVar4;
        dVar5 = dVar5 - dVar7 * *(double *)(lVar6 + lVar10);
        dVar3 = dVar3 - dVar4 * dVar7;
        dVar2 = dVar2 - dVar1 * dVar7;
        *(double *)(local_88 + -8 + lVar8) = dVar5 * dVar5 + dVar2 * dVar2 + dVar3 * dVar3;
        *(int *)(local_88 + lVar8) = (int)lVar11;
        lVar11 = lVar11 + 1;
        lVar8 = lVar8 + 0x10;
        lVar10 = lVar10 + 0x58;
      } while (lVar11 < (int)param_1[1]);
    }
    FUN_14299bb33(local_88,(longlong)(int)uStack_80 * 0x10 + local_88);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_146d4f854(&local_98,(int)param_1[1]);
    if (0 < (int)param_1[1]) {
      piVar12 = (int *)(local_88 + 8);
      lVar8 = 0;
      puVar9 = local_98;
      do {
        puVar13 = (undefined8 *)((longlong)*piVar12 * 0x58 + *param_1);
        puVar14 = puVar9;
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + 0xb;
        piVar12 = piVar12 + 4;
      } while (lVar8 < (int)param_1[1]);
    }
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = (undefined4)uStack_90;
    uStack_6c = uStack_90._4_4_;
    lVar8 = *param_1;
    lVar10 = param_1[1];
    *(undefined4 *)param_1 = (undefined4)local_98;
    *(undefined4 *)((longlong)param_1 + 4) = local_98._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_90._4_4_;
    local_98 = (undefined8 *)lVar8;
    uStack_90 = lVar10;
    if (lVar8 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4f80c FUN_146d4f80c body=71 status=ok
// SIG undefined FUN_146d4f80c(void)

void FUN_146d4f80c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d67d6c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146d67df2();
      return;
    }
  }
  return;
}



// FUNCTION 146d4f854 FUN_146d4f854 body=71 status=ok
// SIG undefined FUN_146d4f854(void)

void FUN_146d4f854(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d3c1f6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146d67522();
      return;
    }
  }
  return;
}



// FUNCTION 146d4f89c FUN_146d4f89c body=416 status=ok
// SIG undefined FUN_146d4f89c(void)

void FUN_146d4f89c(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  double local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  local_68[0] = (param_1[2] - dVar1) * dVar6 +
                (*param_1 - dVar2) * dVar4 + (param_1[1] - dVar3) * dVar5;
  local_68[1] = (param_1[5] - dVar1) * dVar6 +
                (param_1[3] - dVar2) * dVar4 + (param_1[4] - dVar3) * dVar5;
  local_68[2] = (param_1[8] - dVar1) * dVar6 +
                (param_1[6] - dVar2) * dVar4 + (param_1[7] - dVar3) * dVar5;
  iVar7 = (local_68[2] <= local_68[1]) + 1;
  if (local_68[0] < local_68[1]) {
    iVar7 = (uint)(local_68[2] <= local_68[0]) * 2;
  }
  iVar8 = (local_68[1] <= local_68[2]) + 1;
  if (local_68[1] < local_68[0]) {
    iVar8 = (uint)(local_68[0] <= local_68[2]) * 2;
  }
  *param_6 = iVar7;
  *param_7 = iVar8;
  *param_4 = local_68[*param_6];
  *param_5 = local_68[*param_7];
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4fa3d FUN_146d4fa3d body=251 status=ok
// SIG undefined FUN_146d4fa3d(void)

void FUN_146d4fa3d(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  undefined4 *param_6,undefined4 *param_7,longlong *param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  
  *param_4 = 1.79769313486232e+308;
  *param_5 = -1.79769313486232e+308;
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (0 < *(int *)(lVar3 + 0x38)) {
    lVar2 = 8;
    lVar1 = 0;
    do {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      dVar4 = ((double)*(float *)(lVar3 + lVar2) * *(double *)(param_1 + 0x30) - param_3[2]) *
              param_2[2] +
              ((double)*(float *)(lVar3 + -8 + lVar2) * *(double *)(param_1 + 0x20) - *param_3) *
              *param_2 +
              ((double)*(float *)(lVar3 + -4 + lVar2) * *(double *)(param_1 + 0x28) - param_3[1]) *
              param_2[1];
      if (dVar4 < *param_4) {
        *param_4 = dVar4;
        *param_6 = (int)lVar1;
      }
      if (*param_5 <= dVar4 && dVar4 != *param_5) {
        *param_5 = dVar4;
        *param_7 = (int)lVar1;
      }
      if (param_8 != (longlong *)0x0) {
        *(double *)(*param_8 + lVar1 * 8) = dVar4;
      }
      lVar1 = lVar1 + 1;
      lVar3 = *(longlong *)(param_1 + 0x88);
      lVar2 = lVar2 + 0xc;
    } while (lVar1 < *(int *)(lVar3 + 0x38));
  }
  return;
}



// FUNCTION 146d4fb38 FUN_146d4fb38 body=395 status=ok
// SIG undefined FUN_146d4fb38(void)

void FUN_146d4fb38(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  undefined4 *param_6,undefined4 *param_7,longlong *param_8)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  *param_4 = 1.79769313486232e+308;
  *param_5 = -1.79769313486232e+308;
  if (0 < DAT_14c992a28) {
    lVar2 = 2;
    lVar1 = 0;
    do {
      dVar3 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      dVar3 = ((dVar3 * *(double *)(DAT_14c992a20 + lVar2 * 8) * 0.5 +
               dVar3 * 0.5 + *(double *)(param_1 + 0x30)) - param_3[2]) * param_2[2] +
              ((dVar5 * *(double *)(DAT_14c992a20 + -0x10 + lVar2 * 8) * 0.5 +
               dVar5 * 0.5 + *(double *)(param_1 + 0x20)) - *param_3) * *param_2 +
              ((dVar4 * *(double *)(DAT_14c992a20 + -8 + lVar2 * 8) * 0.5 +
               dVar4 * 0.5 + *(double *)(param_1 + 0x28)) - param_3[1]) * param_2[1];
      if (dVar3 < *param_4) {
        *param_4 = dVar3;
        *param_6 = (int)lVar1;
      }
      if (*param_5 <= dVar3 && dVar3 != *param_5) {
        *param_5 = dVar3;
        *param_7 = (int)lVar1;
      }
      if (param_8 != (longlong *)0x0) {
        *(double *)(*param_8 + lVar1 * 8) = dVar3;
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 3;
    } while (lVar1 < DAT_14c992a28);
  }
  return;
}



// FUNCTION 146d4fcc3 FUN_146d4fcc3 body=2498 status=ok
// SIG undefined FUN_146d4fcc3(void)

void FUN_146d4fcc3(longlong param_1,double *param_2,double *param_3,longlong param_4,double param_5,
                  int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_848 [32];
  double *local_828;
  undefined1 **local_820;
  undefined1 **local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  undefined8 uStack_7b0;
  double local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  double local_758;
  uint uStack_750;
  undefined4 uStack_74c;
  double local_748;
  double dStack_740;
  undefined1 *local_738;
  undefined4 local_730;
  undefined1 *local_728;
  undefined4 local_720;
  undefined1 *local_718;
  undefined4 local_710;
  undefined1 *local_708;
  undefined4 local_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  undefined4 local_6e0;
  undefined1 local_6d8 [768];
  undefined4 local_3d8;
  undefined1 local_3d0 [768];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_848;
  lVar16 = (longlong)*(int *)(param_4 + 4);
  lVar15 = *(longlong *)(param_1 + 0x20);
  dVar8 = (double)*(float *)(lVar15 + 0x14 + lVar16 * 0x18);
  dVar9 = (double)*(float *)(lVar15 + 0x10 + lVar16 * 0x18);
  dVar10 = (double)*(float *)(lVar15 + 0xc + lVar16 * 0x18);
  dVar17 = (double)*(float *)(lVar15 + 8 + lVar16 * 0x18);
  dVar23 = (double)*(float *)(lVar15 + 4 + lVar16 * 0x18);
  local_7c8 = (double)*(float *)(lVar15 + lVar16 * 0x18);
  local_7c0 = *param_3;
  local_7d0 = param_3[1];
  local_7d8 = param_2[2] + param_2[5] + param_2[8];
  local_7e8 = param_2[1] + param_2[4] + param_2[7];
  dVar3 = param_3[2];
  local_7e0 = *param_2 + param_2[3] + param_2[6];
  local_6f8 = *(double *)(param_4 + 0x50);
  dStack_6f0 = *(double *)(param_4 + 0x58);
  local_6e8 = *(double *)(param_4 + 0x60);
  dVar18 = dVar3 * local_6e8 + local_7c0 * local_6f8 + local_7d0 * dStack_6f0;
  dVar6 = dVar8 * local_6e8 + dVar10 * local_6f8 + dStack_6f0 * dVar9;
  dVar7 = ABS(dVar18);
  dVar19 = ABS(dVar6);
  if (dVar7 <= dVar19) {
    if (dVar6 < 0.0) {
      local_6e8 = -local_6e8;
      local_6f8 = -local_6f8;
      dStack_6f0 = -dStack_6f0;
    }
    local_738 = local_3d0;
    local_3d8 = 0x20;
    local_728 = local_6d8;
    local_6e0 = 0x20;
    local_818 = &local_728;
    local_720 = 0x20;
    local_820 = &local_738;
    local_730 = 0x20;
    local_828 = &local_6f8;
    FUN_1404b1fef(&local_758,param_2,param_1);
  }
  else {
    if (dVar18 < 0.0) {
      local_6e8 = -local_6e8;
      local_6f8 = -local_6f8;
      dStack_6f0 = -dStack_6f0;
    }
    local_718 = local_3d0;
    local_3d8 = 0x20;
    local_708 = local_6d8;
    local_6e0 = 0x20;
    local_818 = &local_708;
    local_700 = 0x20;
    local_820 = &local_718;
    local_710 = 0x20;
    local_828 = &local_6f8;
    FUN_1404b1caa(&local_758,param_1,*(int *)(param_4 + 4));
  }
  uVar14 = uStack_750;
  dVar6 = local_758;
  puVar1 = (undefined8 *)(param_4 + 0x50);
  if (4 < (int)uStack_750) {
    uStack_7b0 = 0;
    uStack_7a0 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    local_810 = dVar23;
    local_808 = dVar17;
    local_800 = dVar10;
    local_7f8 = dVar9;
    local_7f0 = dVar8;
    local_7b8 = dVar7;
    local_7a8 = dVar19;
    FUN_140269010(&local_758,puVar1);
    dVar7 = (double)CONCAT44(uStack_74c,uStack_750);
    lVar15 = 0;
    do {
      dVar8 = *(double *)((longlong)dVar6 + lVar15);
      dVar9 = *(double *)((longlong)dVar6 + 8 + lVar15);
      dVar10 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
      dVar23 = dVar7 * dVar10 + dVar9 * -local_748;
      dVar23 = dVar23 + dVar23;
      dVar19 = local_758 * dVar9 + dVar8 * -dVar7;
      dVar19 = dVar19 + dVar19;
      dVar17 = local_748 * dVar8 + dVar10 * -local_758;
      dVar17 = dVar17 + dVar17;
      *(double *)((longlong)dVar6 + lVar15) =
           dVar17 * -local_748 + dVar7 * dVar19 + dStack_740 * dVar23 + dVar8;
      *(double *)((longlong)dVar6 + 8 + lVar15) =
           dVar19 * -local_758 + local_748 * dVar23 + dStack_740 * dVar17 + dVar9;
      *(double *)((longlong)dVar6 + 0x10 + lVar15) =
           local_758 * dVar17 + dVar23 * -dVar7 + dStack_740 * dVar19 + dVar10;
      lVar15 = lVar15 + 0x18;
    } while ((ulonglong)uVar14 * 0x18 != lVar15);
    uVar14 = FUN_1402695a1(dVar6,uVar14);
    dVar8 = local_7f0;
    dVar9 = local_7f8;
    dVar10 = local_800;
    dVar17 = local_808;
    dVar23 = local_810;
    dVar19 = local_7a8;
    dVar7 = local_7b8;
    if (0 < (int)uVar14) {
      dVar18 = -(double)CONCAT44(uStack_74c,uStack_750);
      local_748 = local_748 * -1.0;
      dStack_740 = dStack_740 * 1.0;
      lVar15 = 0;
      do {
        dVar4 = *(double *)((longlong)dVar6 + lVar15);
        dVar5 = *(double *)((longlong)dVar6 + 8 + lVar15);
        dVar21 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
        dVar20 = dVar18 * dVar21 + dVar5 * -local_748;
        dVar20 = dVar20 + dVar20;
        dVar22 = -local_758 * dVar5 + dVar4 * -dVar18;
        dVar22 = dVar22 + dVar22;
        dVar11 = local_748 * dVar4 + dVar21 * local_758;
        dVar11 = dVar11 + dVar11;
        *(double *)((longlong)dVar6 + lVar15) =
             dVar11 * -local_748 + dVar18 * dVar22 + dStack_740 * dVar20 + dVar4;
        *(double *)((longlong)dVar6 + 8 + lVar15) =
             dVar22 * local_758 + local_748 * dVar20 + dStack_740 * dVar11 + dVar5;
        *(double *)((longlong)dVar6 + 0x10 + lVar15) =
             -local_758 * dVar11 + dVar20 * -dVar18 + dStack_740 * dVar22 + dVar21;
        lVar15 = lVar15 + 0x18;
      } while ((ulonglong)uVar14 * 0x18 != lVar15);
    }
  }
  if (((*(double *)(param_4 + 0x68) == 1.79769313486232e+308) && (!NAN(*(double *)(param_4 + 0x68)))
      ) || (*(char *)(param_4 + 0xc) == '\0')) {
    bVar13 = 0;
  }
  else {
    bVar13 = 0;
    if (*(char *)(param_4 + 0x1c) != '\0') {
      if (*(char *)(param_4 + 0x1c) == '\x03') {
        bVar13 = 1;
      }
      else {
        bVar13 = *(char *)(param_4 + 0xc) == '\x03' | 2;
      }
    }
  }
  if (dVar7 <= dVar19) {
    if (0 < (int)uVar14) {
      lVar15 = 0;
      do {
        dVar3 = *(double *)(param_4 + 0x50);
        dVar7 = *(double *)(param_4 + 0x58);
        dVar19 = *(double *)(param_4 + 0x60);
        dVar18 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
        dVar4 = *(double *)((longlong)dVar6 + lVar15);
        dVar5 = *(double *)((longlong)dVar6 + 8 + lVar15);
        dVar21 = ((dVar17 - dVar18) * dVar8 +
                 (local_7c8 - dVar4) * dVar10 + (dVar23 - dVar5) * dVar9) /
                 (dVar19 * dVar8 + dVar3 * dVar10 + dVar7 * dVar9);
        local_788 = *(undefined8 *)((longlong)dVar6 + 0x10 + lVar15);
        local_798 = *(undefined8 *)((longlong)dVar6 + lVar15);
        uStack_790 = ((undefined8 *)((longlong)dVar6 + lVar15))[1];
        if (dVar21 < param_5) {
          lVar16 = (longlong)*param_6;
          *param_6 = *param_6 + 1;
          *(double *)(param_6 + lVar16 * 0x16 + 2) = dVar4 + dVar3 * dVar21;
          *(double *)(param_6 + lVar16 * 0x16 + 4) = dVar5 + dVar7 * dVar21;
          *(double *)(param_6 + lVar16 * 0x16 + 6) = dVar18 + dVar19 * dVar21;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 8) = local_798;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 8 + 2) = uStack_790;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xc) = local_788;
          uVar12 = *(undefined8 *)(param_4 + 0x58);
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe) = *puVar1;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe + 2) = uVar12;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
          *(double *)(param_6 + lVar16 * 0x16 + 0x14) = dVar21;
          *(byte *)(param_6 + lVar16 * 0x16 + 0x17) = bVar13;
          param_6[lVar16 * 0x16 + 0x16] = -1;
        }
        lVar15 = lVar15 + 0x18;
      } while ((ulonglong)uVar14 * 0x18 != lVar15);
    }
  }
  else if (0 < (int)uVar14) {
    lVar15 = 0;
    do {
      dVar7 = *(double *)(param_4 + 0x50);
      dVar8 = *(double *)(param_4 + 0x58);
      dVar9 = *(double *)(param_4 + 0x60);
      dVar10 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
      dVar17 = *(double *)((longlong)dVar6 + lVar15);
      dVar23 = *(double *)((longlong)dVar6 + 8 + lVar15);
      dVar19 = ((dVar10 - local_7d8 / 3.0) * dVar3 +
               (dVar17 - local_7e0 / 3.0) * local_7c0 + (dVar23 - local_7e8 / 3.0) * local_7d0) /
               (dVar9 * dVar3 + dVar7 * local_7c0 + local_7d0 * dVar8);
      if (dVar19 < param_5) {
        puVar2 = (undefined8 *)((longlong)dVar6 + lVar15);
        lVar16 = (longlong)*param_6;
        *param_6 = *param_6 + 1;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 6) = puVar2[2];
        uVar12 = puVar2[1];
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 2) = *puVar2;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 2 + 2) = uVar12;
        *(double *)(param_6 + lVar16 * 0x16 + 8) = dVar17 - dVar7 * dVar19;
        *(double *)(param_6 + lVar16 * 0x16 + 10) = dVar23 - dVar8 * dVar19;
        *(double *)(param_6 + lVar16 * 0x16 + 0xc) = dVar10 - dVar9 * dVar19;
        uVar12 = *(undefined8 *)(param_4 + 0x58);
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe) = *puVar1;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe + 2) = uVar12;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
        *(double *)(param_6 + lVar16 * 0x16 + 0x14) = dVar19;
        *(byte *)(param_6 + lVar16 * 0x16 + 0x17) = bVar13;
        param_6[lVar16 * 0x16 + 0x16] = -1;
      }
      lVar15 = lVar15 + 0x18;
    } while ((ulonglong)uVar14 * 0x18 != lVar15);
  }
  if ((local_d0 ^ (ulonglong)auStack_848) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d50686 FUN_146d50686 body=2502 status=ok
// SIG undefined FUN_146d50686(void)

void FUN_146d50686(longlong param_1,double *param_2,double *param_3,longlong param_4,double param_5,
                  int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_848 [32];
  double *local_828;
  undefined1 **local_820;
  undefined1 **local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  undefined8 uStack_7b0;
  double local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  double local_758;
  uint uStack_750;
  undefined4 uStack_74c;
  double local_748;
  double dStack_740;
  undefined1 *local_738;
  undefined4 local_730;
  undefined1 *local_728;
  undefined4 local_720;
  undefined1 *local_718;
  undefined4 local_710;
  undefined1 *local_708;
  undefined4 local_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  undefined4 local_6e0;
  undefined1 local_6d8 [768];
  undefined4 local_3d8;
  undefined1 local_3d0 [768];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_848;
  lVar16 = (longlong)*(int *)(param_4 + 4);
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
  dVar8 = (double)*(float *)(lVar15 + 0x14 + lVar16 * 0x18);
  dVar9 = (double)*(float *)(lVar15 + 0x10 + lVar16 * 0x18);
  dVar10 = (double)*(float *)(lVar15 + 0xc + lVar16 * 0x18);
  dVar17 = (double)*(float *)(lVar15 + 8 + lVar16 * 0x18);
  dVar23 = (double)*(float *)(lVar15 + 4 + lVar16 * 0x18);
  local_7c8 = (double)*(float *)(lVar15 + lVar16 * 0x18);
  local_7c0 = *param_3;
  local_7d0 = param_3[1];
  local_7d8 = param_2[2] + param_2[5] + param_2[8];
  local_7e8 = param_2[1] + param_2[4] + param_2[7];
  dVar3 = param_3[2];
  local_7e0 = *param_2 + param_2[3] + param_2[6];
  local_6f8 = *(double *)(param_4 + 0x50);
  dStack_6f0 = *(double *)(param_4 + 0x58);
  local_6e8 = *(double *)(param_4 + 0x60);
  dVar18 = dVar3 * local_6e8 + local_7c0 * local_6f8 + local_7d0 * dStack_6f0;
  dVar6 = dVar8 * local_6e8 + dVar10 * local_6f8 + dStack_6f0 * dVar9;
  dVar7 = ABS(dVar18);
  dVar19 = ABS(dVar6);
  if (dVar7 <= dVar19) {
    if (dVar6 < 0.0) {
      local_6e8 = -local_6e8;
      local_6f8 = -local_6f8;
      dStack_6f0 = -dStack_6f0;
    }
    local_738 = local_3d0;
    local_3d8 = 0x20;
    local_728 = local_6d8;
    local_6e0 = 0x20;
    local_818 = &local_728;
    local_720 = 0x20;
    local_820 = &local_738;
    local_730 = 0x20;
    local_828 = &local_6f8;
    FUN_1404caa4b(&local_758,param_2,param_1);
  }
  else {
    if (dVar18 < 0.0) {
      local_6e8 = -local_6e8;
      local_6f8 = -local_6f8;
      dStack_6f0 = -dStack_6f0;
    }
    local_718 = local_3d0;
    local_3d8 = 0x20;
    local_708 = local_6d8;
    local_6e0 = 0x20;
    local_818 = &local_708;
    local_700 = 0x20;
    local_820 = &local_718;
    local_710 = 0x20;
    local_828 = &local_6f8;
    FUN_1404cadbd(&local_758,param_1,*(int *)(param_4 + 4));
  }
  uVar14 = uStack_750;
  dVar6 = local_758;
  puVar1 = (undefined8 *)(param_4 + 0x50);
  if (4 < (int)uStack_750) {
    uStack_7b0 = 0;
    uStack_7a0 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    local_810 = dVar23;
    local_808 = dVar17;
    local_800 = dVar10;
    local_7f8 = dVar9;
    local_7f0 = dVar8;
    local_7b8 = dVar7;
    local_7a8 = dVar19;
    FUN_140269010(&local_758,puVar1);
    dVar7 = (double)CONCAT44(uStack_74c,uStack_750);
    lVar15 = 0;
    do {
      dVar8 = *(double *)((longlong)dVar6 + lVar15);
      dVar9 = *(double *)((longlong)dVar6 + 8 + lVar15);
      dVar10 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
      dVar23 = dVar7 * dVar10 + dVar9 * -local_748;
      dVar23 = dVar23 + dVar23;
      dVar19 = local_758 * dVar9 + dVar8 * -dVar7;
      dVar19 = dVar19 + dVar19;
      dVar17 = local_748 * dVar8 + dVar10 * -local_758;
      dVar17 = dVar17 + dVar17;
      *(double *)((longlong)dVar6 + lVar15) =
           dVar17 * -local_748 + dVar7 * dVar19 + dStack_740 * dVar23 + dVar8;
      *(double *)((longlong)dVar6 + 8 + lVar15) =
           dVar19 * -local_758 + local_748 * dVar23 + dStack_740 * dVar17 + dVar9;
      *(double *)((longlong)dVar6 + 0x10 + lVar15) =
           local_758 * dVar17 + dVar23 * -dVar7 + dStack_740 * dVar19 + dVar10;
      lVar15 = lVar15 + 0x18;
    } while ((ulonglong)uVar14 * 0x18 != lVar15);
    uVar14 = FUN_1402695a1(dVar6,uVar14);
    dVar8 = local_7f0;
    dVar9 = local_7f8;
    dVar10 = local_800;
    dVar17 = local_808;
    dVar23 = local_810;
    dVar19 = local_7a8;
    dVar7 = local_7b8;
    if (0 < (int)uVar14) {
      dVar18 = -(double)CONCAT44(uStack_74c,uStack_750);
      local_748 = local_748 * -1.0;
      dStack_740 = dStack_740 * 1.0;
      lVar15 = 0;
      do {
        dVar4 = *(double *)((longlong)dVar6 + lVar15);
        dVar5 = *(double *)((longlong)dVar6 + 8 + lVar15);
        dVar21 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
        dVar20 = dVar18 * dVar21 + dVar5 * -local_748;
        dVar20 = dVar20 + dVar20;
        dVar22 = -local_758 * dVar5 + dVar4 * -dVar18;
        dVar22 = dVar22 + dVar22;
        dVar11 = local_748 * dVar4 + dVar21 * local_758;
        dVar11 = dVar11 + dVar11;
        *(double *)((longlong)dVar6 + lVar15) =
             dVar11 * -local_748 + dVar18 * dVar22 + dStack_740 * dVar20 + dVar4;
        *(double *)((longlong)dVar6 + 8 + lVar15) =
             dVar22 * local_758 + local_748 * dVar20 + dStack_740 * dVar11 + dVar5;
        *(double *)((longlong)dVar6 + 0x10 + lVar15) =
             -local_758 * dVar11 + dVar20 * -dVar18 + dStack_740 * dVar22 + dVar21;
        lVar15 = lVar15 + 0x18;
      } while ((ulonglong)uVar14 * 0x18 != lVar15);
    }
  }
  if (((*(double *)(param_4 + 0x68) == 1.79769313486232e+308) && (!NAN(*(double *)(param_4 + 0x68)))
      ) || (*(char *)(param_4 + 0xc) == '\0')) {
    bVar13 = 0;
  }
  else {
    bVar13 = 0;
    if (*(char *)(param_4 + 0x1c) != '\0') {
      if (*(char *)(param_4 + 0x1c) == '\x03') {
        bVar13 = 1;
      }
      else {
        bVar13 = *(char *)(param_4 + 0xc) == '\x03' | 2;
      }
    }
  }
  if (dVar7 <= dVar19) {
    if (0 < (int)uVar14) {
      lVar15 = 0;
      do {
        dVar3 = *(double *)(param_4 + 0x50);
        dVar7 = *(double *)(param_4 + 0x58);
        dVar19 = *(double *)(param_4 + 0x60);
        dVar18 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
        dVar4 = *(double *)((longlong)dVar6 + lVar15);
        dVar5 = *(double *)((longlong)dVar6 + 8 + lVar15);
        dVar21 = ((dVar17 - dVar18) * dVar8 +
                 (local_7c8 - dVar4) * dVar10 + (dVar23 - dVar5) * dVar9) /
                 (dVar19 * dVar8 + dVar3 * dVar10 + dVar7 * dVar9);
        local_788 = *(undefined8 *)((longlong)dVar6 + 0x10 + lVar15);
        local_798 = *(undefined8 *)((longlong)dVar6 + lVar15);
        uStack_790 = ((undefined8 *)((longlong)dVar6 + lVar15))[1];
        if (dVar21 < param_5) {
          lVar16 = (longlong)*param_6;
          *param_6 = *param_6 + 1;
          *(double *)(param_6 + lVar16 * 0x16 + 2) = dVar4 + dVar3 * dVar21;
          *(double *)(param_6 + lVar16 * 0x16 + 4) = dVar5 + dVar7 * dVar21;
          *(double *)(param_6 + lVar16 * 0x16 + 6) = dVar18 + dVar19 * dVar21;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 8) = local_798;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 8 + 2) = uStack_790;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xc) = local_788;
          uVar12 = *(undefined8 *)(param_4 + 0x58);
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe) = *puVar1;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe + 2) = uVar12;
          *(undefined8 *)(param_6 + lVar16 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
          *(double *)(param_6 + lVar16 * 0x16 + 0x14) = dVar21;
          *(byte *)(param_6 + lVar16 * 0x16 + 0x17) = bVar13;
          param_6[lVar16 * 0x16 + 0x16] = -1;
        }
        lVar15 = lVar15 + 0x18;
      } while ((ulonglong)uVar14 * 0x18 != lVar15);
    }
  }
  else if (0 < (int)uVar14) {
    lVar15 = 0;
    do {
      dVar7 = *(double *)(param_4 + 0x50);
      dVar8 = *(double *)(param_4 + 0x58);
      dVar9 = *(double *)(param_4 + 0x60);
      dVar10 = *(double *)((longlong)dVar6 + 0x10 + lVar15);
      dVar17 = *(double *)((longlong)dVar6 + lVar15);
      dVar23 = *(double *)((longlong)dVar6 + 8 + lVar15);
      dVar19 = ((dVar10 - local_7d8 / 3.0) * dVar3 +
               (dVar17 - local_7e0 / 3.0) * local_7c0 + (dVar23 - local_7e8 / 3.0) * local_7d0) /
               (dVar9 * dVar3 + dVar7 * local_7c0 + local_7d0 * dVar8);
      if (dVar19 < param_5) {
        puVar2 = (undefined8 *)((longlong)dVar6 + lVar15);
        lVar16 = (longlong)*param_6;
        *param_6 = *param_6 + 1;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 6) = puVar2[2];
        uVar12 = puVar2[1];
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 2) = *puVar2;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 2 + 2) = uVar12;
        *(double *)(param_6 + lVar16 * 0x16 + 8) = dVar17 - dVar7 * dVar19;
        *(double *)(param_6 + lVar16 * 0x16 + 10) = dVar23 - dVar8 * dVar19;
        *(double *)(param_6 + lVar16 * 0x16 + 0xc) = dVar10 - dVar9 * dVar19;
        uVar12 = *(undefined8 *)(param_4 + 0x58);
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe) = *puVar1;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 0xe + 2) = uVar12;
        *(undefined8 *)(param_6 + lVar16 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
        *(double *)(param_6 + lVar16 * 0x16 + 0x14) = dVar19;
        *(byte *)(param_6 + lVar16 * 0x16 + 0x17) = bVar13;
        param_6[lVar16 * 0x16 + 0x16] = -1;
      }
      lVar15 = lVar15 + 0x18;
    } while ((ulonglong)uVar14 * 0x18 != lVar15);
  }
  if ((local_d0 ^ (ulonglong)auStack_848) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d5104d FUN_146d5104d body=2476 status=ok
// SIG undefined FUN_146d5104d(void)

void FUN_146d5104d(undefined8 param_1,double *param_2,double *param_3,longlong param_4,
                  double param_5,int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auStack_858 [32];
  double *local_838;
  undefined1 **local_830;
  undefined1 **local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  undefined8 uStack_7f0;
  double local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  double local_798;
  uint uStack_790;
  undefined4 uStack_78c;
  double local_788;
  double dStack_780;
  undefined1 *local_778;
  undefined4 local_770;
  undefined1 *local_768;
  undefined4 local_760;
  undefined1 *local_758;
  undefined4 local_750;
  undefined1 *local_748;
  undefined4 local_740;
  double local_738;
  double dStack_730;
  double local_728;
  double local_720;
  double local_718;
  double local_710;
  double local_708;
  double local_700;
  double local_6f8;
  undefined4 local_6f0;
  undefined1 local_6e8 [768];
  undefined4 local_3e8;
  undefined1 local_3e0 [768];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_858;
  uVar6 = *(undefined4 *)(param_4 + 4);
  FUN_1404c21ca(param_1,uVar6,&local_708,&local_720);
  dVar17 = *param_3;
  uVar20 = SUB84(dVar17,0);
  uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar22 = param_3[1];
  dVar9 = param_2[2] + param_2[5] + param_2[8];
  local_820 = param_2[1] + param_2[4] + param_2[7];
  dVar3 = param_3[2];
  dVar10 = *param_2 + param_2[3] + param_2[6];
  local_738 = *(double *)(param_4 + 0x50);
  dStack_730 = *(double *)(param_4 + 0x58);
  local_728 = *(double *)(param_4 + 0x60);
  dVar16 = dVar3 * local_728 + dVar17 * local_738 + dVar22 * dStack_730;
  dVar7 = local_6f8 * local_728 + local_708 * local_738 + local_700 * dStack_730;
  dVar8 = ABS(dVar16);
  dVar18 = ABS(dVar7);
  if (dVar8 <= dVar18) {
    if (dVar7 < 0.0) {
      local_728 = -local_728;
      local_738 = -local_738;
      dStack_730 = -dStack_730;
    }
    local_778 = local_3e0;
    local_3e8 = 0x20;
    local_768 = local_6e8;
    local_6f0 = 0x20;
    local_828 = &local_768;
    local_760 = 0x20;
    local_830 = &local_778;
    local_770 = 0x20;
    local_838 = &local_738;
    FUN_1404c2a81(&local_798,param_2,param_1);
  }
  else {
    if (dVar16 < 0.0) {
      local_728 = -local_728;
      local_738 = -local_738;
      dStack_730 = -dStack_730;
    }
    local_758 = local_3e0;
    local_3e8 = 0x20;
    local_748 = local_6e8;
    local_6f0 = 0x20;
    local_828 = &local_748;
    local_740 = 0x20;
    local_830 = &local_758;
    local_750 = 0x20;
    local_838 = &local_738;
    FUN_1404c26a6(&local_798,param_1,uVar6);
  }
  uVar13 = uStack_790;
  dVar7 = local_798;
  puVar1 = (undefined8 *)(param_4 + 0x50);
  if (4 < (int)uStack_790) {
    uStack_7f0 = 0;
    uStack_7e0 = 0;
    local_7b8 = 0;
    uStack_7b0 = 0;
    local_7a8 = 0x3ff0000000000000;
    local_818 = dVar10;
    local_810 = dVar9;
    local_808 = dVar22;
    local_800 = dVar17;
    local_7f8 = dVar8;
    local_7e8 = dVar18;
    FUN_140269010(&local_798,puVar1);
    dVar17 = (double)CONCAT44(uStack_78c,uStack_790);
    lVar14 = 0;
    do {
      dVar22 = *(double *)((longlong)dVar7 + lVar14);
      dVar8 = *(double *)((longlong)dVar7 + 8 + lVar14);
      dVar9 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
      dVar18 = dVar17 * dVar9 + dVar8 * -local_788;
      dVar18 = dVar18 + dVar18;
      dVar16 = local_798 * dVar8 + dVar22 * -dVar17;
      dVar16 = dVar16 + dVar16;
      dVar10 = local_788 * dVar22 + dVar9 * -local_798;
      dVar10 = dVar10 + dVar10;
      *(double *)((longlong)dVar7 + lVar14) =
           dVar10 * -local_788 + dVar17 * dVar16 + dStack_780 * dVar18 + dVar22;
      *(double *)((longlong)dVar7 + 8 + lVar14) =
           dVar16 * -local_798 + local_788 * dVar18 + dStack_780 * dVar10 + dVar8;
      *(double *)((longlong)dVar7 + 0x10 + lVar14) =
           local_798 * dVar10 + dVar18 * -dVar17 + dStack_780 * dVar16 + dVar9;
      lVar14 = lVar14 + 0x18;
    } while ((ulonglong)uVar13 * 0x18 != lVar14);
    uVar13 = FUN_1402695a1(dVar7,uVar13);
    if (0 < (int)uVar13) {
      dVar17 = -(double)CONCAT44(uStack_78c,uStack_790);
      local_788 = local_788 * -1.0;
      dStack_780 = dStack_780 * 1.0;
      lVar14 = 0;
      do {
        dVar22 = *(double *)((longlong)dVar7 + lVar14);
        dVar8 = *(double *)((longlong)dVar7 + 8 + lVar14);
        dVar9 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
        dVar18 = dVar17 * dVar9 + dVar8 * -local_788;
        dVar18 = dVar18 + dVar18;
        dVar16 = -local_798 * dVar8 + dVar22 * -dVar17;
        dVar16 = dVar16 + dVar16;
        dVar10 = local_788 * dVar22 + dVar9 * local_798;
        dVar10 = dVar10 + dVar10;
        *(double *)((longlong)dVar7 + lVar14) =
             dVar10 * -local_788 + dVar17 * dVar16 + dStack_780 * dVar18 + dVar22;
        *(double *)((longlong)dVar7 + 8 + lVar14) =
             dVar16 * local_798 + local_788 * dVar18 + dStack_780 * dVar10 + dVar8;
        *(double *)((longlong)dVar7 + 0x10 + lVar14) =
             -local_798 * dVar10 + dVar18 * -dVar17 + dStack_780 * dVar16 + dVar9;
        lVar14 = lVar14 + 0x18;
      } while ((ulonglong)uVar13 * 0x18 != lVar14);
    }
    uVar20 = SUB84(local_800,0);
    uVar21 = (undefined4)((ulonglong)local_800 >> 0x20);
    dVar22 = local_808;
    dVar9 = local_810;
    dVar10 = local_818;
    dVar18 = local_7e8;
    dVar8 = local_7f8;
  }
  if (((*(double *)(param_4 + 0x68) == 1.79769313486232e+308) && (!NAN(*(double *)(param_4 + 0x68)))
      ) || (*(char *)(param_4 + 0xc) == '\0')) {
    bVar12 = 0;
  }
  else {
    bVar12 = 0;
    if (*(char *)(param_4 + 0x1c) != '\0') {
      if (*(char *)(param_4 + 0x1c) == '\x03') {
        bVar12 = 1;
      }
      else {
        bVar12 = *(char *)(param_4 + 0xc) == '\x03' | 2;
      }
    }
  }
  if (dVar8 <= dVar18) {
    if (0 < (int)uVar13) {
      lVar14 = 0;
      do {
        dVar17 = *(double *)(param_4 + 0x50);
        dVar22 = *(double *)(param_4 + 0x58);
        dVar3 = *(double *)(param_4 + 0x60);
        dVar8 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
        dVar9 = *(double *)((longlong)dVar7 + lVar14);
        dVar10 = *(double *)((longlong)dVar7 + 8 + lVar14);
        dVar18 = ((local_710 - dVar8) * local_6f8 +
                 (local_720 - dVar9) * local_708 + (local_718 - dVar10) * local_700) /
                 (dVar3 * local_6f8 + dVar17 * local_708 + local_700 * dVar22);
        local_7c8 = *(undefined8 *)((longlong)dVar7 + 0x10 + lVar14);
        local_7d8 = *(undefined8 *)((longlong)dVar7 + lVar14);
        uStack_7d0 = ((undefined8 *)((longlong)dVar7 + lVar14))[1];
        if (dVar18 < param_5) {
          lVar15 = (longlong)*param_6;
          *param_6 = *param_6 + 1;
          *(double *)(param_6 + lVar15 * 0x16 + 2) = dVar9 + dVar17 * dVar18;
          *(double *)(param_6 + lVar15 * 0x16 + 4) = dVar10 + dVar22 * dVar18;
          *(double *)(param_6 + lVar15 * 0x16 + 6) = dVar8 + dVar3 * dVar18;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 8) = local_7d8;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 8 + 2) = uStack_7d0;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xc) = local_7c8;
          uVar11 = *(undefined8 *)(param_4 + 0x58);
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe) = *puVar1;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe + 2) = uVar11;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
          *(double *)(param_6 + lVar15 * 0x16 + 0x14) = dVar18;
          *(byte *)(param_6 + lVar15 * 0x16 + 0x17) = bVar12;
          param_6[lVar15 * 0x16 + 0x16] = -1;
        }
        lVar14 = lVar14 + 0x18;
      } while ((ulonglong)uVar13 * 0x18 != lVar14);
    }
  }
  else if (0 < (int)uVar13) {
    local_820 = local_820 / 3.0;
    lVar14 = 0;
    do {
      dVar17 = *(double *)(param_4 + 0x50);
      dVar8 = *(double *)(param_4 + 0x58);
      dVar18 = *(double *)(param_4 + 0x60);
      dVar16 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
      dVar4 = *(double *)((longlong)dVar7 + lVar14);
      dVar5 = *(double *)((longlong)dVar7 + 8 + lVar14);
      dVar19 = ((dVar16 - dVar9 / 3.0) * dVar3 +
               (dVar4 - dVar10 / 3.0) * (double)CONCAT44(uVar21,uVar20) +
               (dVar5 - local_820) * dVar22) /
               (dVar18 * dVar3 + dVar17 * (double)CONCAT44(uVar21,uVar20) + dVar22 * dVar8);
      if (dVar19 < param_5) {
        puVar2 = (undefined8 *)((longlong)dVar7 + lVar14);
        lVar15 = (longlong)*param_6;
        *param_6 = *param_6 + 1;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 6) = puVar2[2];
        uVar11 = puVar2[1];
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 2) = *puVar2;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 2 + 2) = uVar11;
        *(double *)(param_6 + lVar15 * 0x16 + 8) = dVar4 - dVar17 * dVar19;
        *(double *)(param_6 + lVar15 * 0x16 + 10) = dVar5 - dVar8 * dVar19;
        *(double *)(param_6 + lVar15 * 0x16 + 0xc) = dVar16 - dVar18 * dVar19;
        uVar11 = *(undefined8 *)(param_4 + 0x58);
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe) = *puVar1;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe + 2) = uVar11;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
        *(double *)(param_6 + lVar15 * 0x16 + 0x14) = dVar19;
        *(byte *)(param_6 + lVar15 * 0x16 + 0x17) = bVar12;
        param_6[lVar15 * 0x16 + 0x16] = -1;
      }
      lVar14 = lVar14 + 0x18;
    } while ((ulonglong)uVar13 * 0x18 != lVar14);
  }
  if ((local_e0 ^ (ulonglong)auStack_858) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d519fa FUN_146d519fa body=2476 status=ok
// SIG undefined FUN_146d519fa(void)

void FUN_146d519fa(undefined8 param_1,double *param_2,double *param_3,longlong param_4,
                  double param_5,int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auStack_858 [32];
  double *local_838;
  undefined1 **local_830;
  undefined1 **local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  undefined8 uStack_7f0;
  double local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  double local_798;
  uint uStack_790;
  undefined4 uStack_78c;
  double local_788;
  double dStack_780;
  undefined1 *local_778;
  undefined4 local_770;
  undefined1 *local_768;
  undefined4 local_760;
  undefined1 *local_758;
  undefined4 local_750;
  undefined1 *local_748;
  undefined4 local_740;
  double local_738;
  double dStack_730;
  double local_728;
  double local_720;
  double local_718;
  double local_710;
  double local_708;
  double local_700;
  double local_6f8;
  undefined4 local_6f0;
  undefined1 local_6e8 [768];
  undefined4 local_3e8;
  undefined1 local_3e0 [768];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_858;
  uVar6 = *(undefined4 *)(param_4 + 4);
  FUN_1404b254c(param_1,uVar6,&local_708,&local_720);
  dVar17 = *param_3;
  uVar20 = SUB84(dVar17,0);
  uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar22 = param_3[1];
  dVar9 = param_2[2] + param_2[5] + param_2[8];
  local_820 = param_2[1] + param_2[4] + param_2[7];
  dVar3 = param_3[2];
  dVar10 = *param_2 + param_2[3] + param_2[6];
  local_738 = *(double *)(param_4 + 0x50);
  dStack_730 = *(double *)(param_4 + 0x58);
  local_728 = *(double *)(param_4 + 0x60);
  dVar16 = dVar3 * local_728 + dVar17 * local_738 + dVar22 * dStack_730;
  dVar7 = local_6f8 * local_728 + local_708 * local_738 + local_700 * dStack_730;
  dVar8 = ABS(dVar16);
  dVar18 = ABS(dVar7);
  if (dVar8 <= dVar18) {
    if (dVar7 < 0.0) {
      local_728 = -local_728;
      local_738 = -local_738;
      dStack_730 = -dStack_730;
    }
    local_778 = local_3e0;
    local_3e8 = 0x20;
    local_768 = local_6e8;
    local_6f0 = 0x20;
    local_828 = &local_768;
    local_760 = 0x20;
    local_830 = &local_778;
    local_770 = 0x20;
    local_838 = &local_738;
    FUN_1404b293b(&local_798,param_2,param_1);
  }
  else {
    if (dVar16 < 0.0) {
      local_728 = -local_728;
      local_738 = -local_738;
      dStack_730 = -dStack_730;
    }
    local_758 = local_3e0;
    local_3e8 = 0x20;
    local_748 = local_6e8;
    local_6f0 = 0x20;
    local_828 = &local_748;
    local_740 = 0x20;
    local_830 = &local_758;
    local_750 = 0x20;
    local_838 = &local_738;
    FUN_1404b2636(&local_798,param_1,uVar6);
  }
  uVar13 = uStack_790;
  dVar7 = local_798;
  puVar1 = (undefined8 *)(param_4 + 0x50);
  if (4 < (int)uStack_790) {
    uStack_7f0 = 0;
    uStack_7e0 = 0;
    local_7b8 = 0;
    uStack_7b0 = 0;
    local_7a8 = 0x3ff0000000000000;
    local_818 = dVar10;
    local_810 = dVar9;
    local_808 = dVar22;
    local_800 = dVar17;
    local_7f8 = dVar8;
    local_7e8 = dVar18;
    FUN_140269010(&local_798,puVar1);
    dVar17 = (double)CONCAT44(uStack_78c,uStack_790);
    lVar14 = 0;
    do {
      dVar22 = *(double *)((longlong)dVar7 + lVar14);
      dVar8 = *(double *)((longlong)dVar7 + 8 + lVar14);
      dVar9 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
      dVar18 = dVar17 * dVar9 + dVar8 * -local_788;
      dVar18 = dVar18 + dVar18;
      dVar16 = local_798 * dVar8 + dVar22 * -dVar17;
      dVar16 = dVar16 + dVar16;
      dVar10 = local_788 * dVar22 + dVar9 * -local_798;
      dVar10 = dVar10 + dVar10;
      *(double *)((longlong)dVar7 + lVar14) =
           dVar10 * -local_788 + dVar17 * dVar16 + dStack_780 * dVar18 + dVar22;
      *(double *)((longlong)dVar7 + 8 + lVar14) =
           dVar16 * -local_798 + local_788 * dVar18 + dStack_780 * dVar10 + dVar8;
      *(double *)((longlong)dVar7 + 0x10 + lVar14) =
           local_798 * dVar10 + dVar18 * -dVar17 + dStack_780 * dVar16 + dVar9;
      lVar14 = lVar14 + 0x18;
    } while ((ulonglong)uVar13 * 0x18 != lVar14);
    uVar13 = FUN_1402695a1(dVar7,uVar13);
    if (0 < (int)uVar13) {
      dVar17 = -(double)CONCAT44(uStack_78c,uStack_790);
      local_788 = local_788 * -1.0;
      dStack_780 = dStack_780 * 1.0;
      lVar14 = 0;
      do {
        dVar22 = *(double *)((longlong)dVar7 + lVar14);
        dVar8 = *(double *)((longlong)dVar7 + 8 + lVar14);
        dVar9 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
        dVar18 = dVar17 * dVar9 + dVar8 * -local_788;
        dVar18 = dVar18 + dVar18;
        dVar16 = -local_798 * dVar8 + dVar22 * -dVar17;
        dVar16 = dVar16 + dVar16;
        dVar10 = local_788 * dVar22 + dVar9 * local_798;
        dVar10 = dVar10 + dVar10;
        *(double *)((longlong)dVar7 + lVar14) =
             dVar10 * -local_788 + dVar17 * dVar16 + dStack_780 * dVar18 + dVar22;
        *(double *)((longlong)dVar7 + 8 + lVar14) =
             dVar16 * local_798 + local_788 * dVar18 + dStack_780 * dVar10 + dVar8;
        *(double *)((longlong)dVar7 + 0x10 + lVar14) =
             -local_798 * dVar10 + dVar18 * -dVar17 + dStack_780 * dVar16 + dVar9;
        lVar14 = lVar14 + 0x18;
      } while ((ulonglong)uVar13 * 0x18 != lVar14);
    }
    uVar20 = SUB84(local_800,0);
    uVar21 = (undefined4)((ulonglong)local_800 >> 0x20);
    dVar22 = local_808;
    dVar9 = local_810;
    dVar10 = local_818;
    dVar18 = local_7e8;
    dVar8 = local_7f8;
  }
  if (((*(double *)(param_4 + 0x68) == 1.79769313486232e+308) && (!NAN(*(double *)(param_4 + 0x68)))
      ) || (*(char *)(param_4 + 0xc) == '\0')) {
    bVar12 = 0;
  }
  else {
    bVar12 = 0;
    if (*(char *)(param_4 + 0x1c) != '\0') {
      if (*(char *)(param_4 + 0x1c) == '\x03') {
        bVar12 = 1;
      }
      else {
        bVar12 = *(char *)(param_4 + 0xc) == '\x03' | 2;
      }
    }
  }
  if (dVar8 <= dVar18) {
    if (0 < (int)uVar13) {
      lVar14 = 0;
      do {
        dVar17 = *(double *)(param_4 + 0x50);
        dVar22 = *(double *)(param_4 + 0x58);
        dVar3 = *(double *)(param_4 + 0x60);
        dVar8 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
        dVar9 = *(double *)((longlong)dVar7 + lVar14);
        dVar10 = *(double *)((longlong)dVar7 + 8 + lVar14);
        dVar18 = ((local_710 - dVar8) * local_6f8 +
                 (local_720 - dVar9) * local_708 + (local_718 - dVar10) * local_700) /
                 (dVar3 * local_6f8 + dVar17 * local_708 + local_700 * dVar22);
        local_7c8 = *(undefined8 *)((longlong)dVar7 + 0x10 + lVar14);
        local_7d8 = *(undefined8 *)((longlong)dVar7 + lVar14);
        uStack_7d0 = ((undefined8 *)((longlong)dVar7 + lVar14))[1];
        if (dVar18 < param_5) {
          lVar15 = (longlong)*param_6;
          *param_6 = *param_6 + 1;
          *(double *)(param_6 + lVar15 * 0x16 + 2) = dVar9 + dVar17 * dVar18;
          *(double *)(param_6 + lVar15 * 0x16 + 4) = dVar10 + dVar22 * dVar18;
          *(double *)(param_6 + lVar15 * 0x16 + 6) = dVar8 + dVar3 * dVar18;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 8) = local_7d8;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 8 + 2) = uStack_7d0;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xc) = local_7c8;
          uVar11 = *(undefined8 *)(param_4 + 0x58);
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe) = *puVar1;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe + 2) = uVar11;
          *(undefined8 *)(param_6 + lVar15 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
          *(double *)(param_6 + lVar15 * 0x16 + 0x14) = dVar18;
          *(byte *)(param_6 + lVar15 * 0x16 + 0x17) = bVar12;
          param_6[lVar15 * 0x16 + 0x16] = -1;
        }
        lVar14 = lVar14 + 0x18;
      } while ((ulonglong)uVar13 * 0x18 != lVar14);
    }
  }
  else if (0 < (int)uVar13) {
    local_820 = local_820 / 3.0;
    lVar14 = 0;
    do {
      dVar17 = *(double *)(param_4 + 0x50);
      dVar8 = *(double *)(param_4 + 0x58);
      dVar18 = *(double *)(param_4 + 0x60);
      dVar16 = *(double *)((longlong)dVar7 + 0x10 + lVar14);
      dVar4 = *(double *)((longlong)dVar7 + lVar14);
      dVar5 = *(double *)((longlong)dVar7 + 8 + lVar14);
      dVar19 = ((dVar16 - dVar9 / 3.0) * dVar3 +
               (dVar4 - dVar10 / 3.0) * (double)CONCAT44(uVar21,uVar20) +
               (dVar5 - local_820) * dVar22) /
               (dVar18 * dVar3 + dVar17 * (double)CONCAT44(uVar21,uVar20) + dVar22 * dVar8);
      if (dVar19 < param_5) {
        puVar2 = (undefined8 *)((longlong)dVar7 + lVar14);
        lVar15 = (longlong)*param_6;
        *param_6 = *param_6 + 1;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 6) = puVar2[2];
        uVar11 = puVar2[1];
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 2) = *puVar2;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 2 + 2) = uVar11;
        *(double *)(param_6 + lVar15 * 0x16 + 8) = dVar4 - dVar17 * dVar19;
        *(double *)(param_6 + lVar15 * 0x16 + 10) = dVar5 - dVar8 * dVar19;
        *(double *)(param_6 + lVar15 * 0x16 + 0xc) = dVar16 - dVar18 * dVar19;
        uVar11 = *(undefined8 *)(param_4 + 0x58);
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe) = *puVar1;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 0xe + 2) = uVar11;
        *(undefined8 *)(param_6 + lVar15 * 0x16 + 0x12) = *(undefined8 *)(param_4 + 0x60);
        *(double *)(param_6 + lVar15 * 0x16 + 0x14) = dVar19;
        *(byte *)(param_6 + lVar15 * 0x16 + 0x17) = bVar12;
        param_6[lVar15 * 0x16 + 0x16] = -1;
      }
      lVar14 = lVar14 + 0x18;
    } while ((ulonglong)uVar13 * 0x18 != lVar14);
  }
  if ((local_e0 ^ (ulonglong)auStack_858) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d523a7 FUN_146d523a7 body=855 status=ok
// SIG undefined FUN_146d523a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d523a7(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  double *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar1 = (undefined4 *)(double)_DAT_14c75f068;
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_78 = param_2;
  local_70 = param_1;
  if (DAT_14c75f070 == '\x01') {
    local_80 = 1.79769313486232e+308;
    local_e8 = (param_2[2] + param_2[5] + param_2[8]) / 3.0;
    local_f0 = (param_2[1] + param_2[4] + param_2[7]) / 3.0;
    local_f8 = (*param_2 + param_2[3] + param_2[6]) / 3.0;
    FUN_146d526ff(&local_e0,&local_70,&local_78);
    local_138 = (undefined4 *)&local_c8;
    local_140 = &local_b0;
    local_148 = &local_98;
    local_130 = puVar1;
    iVar3 = FUN_146d5285c(&local_70,&local_78,&local_e0,&local_80);
    if (iVar3 == 2) {
      uVar4 = FUN_146d52e3c(param_1,param_2,param_3,param_4);
      goto LAB_146d526b6;
    }
    if (1.79769313486232e+308 <= ABS(local_80) * local_80) goto LAB_146d526b4;
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(ulonglong *)(param_4 + 0x50) =
         CONCAT44(local_c8._4_4_,(undefined4)local_c8) ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x60) = CONCAT44(uStack_b4,local_b8) ^ 0x8000000000000000;
    *(double *)(param_4 + 0x68) = local_80;
  }
  else {
    local_110 = (double)DAT_14c75f06c;
    local_128 = &local_80;
    local_80 = 0.0;
    local_138 = &local_fc;
    local_fc = 0xffffffff;
    local_130 = &local_100;
    local_100 = 0xffffffff;
    local_120 = &local_e0;
    local_e0 = 0x3ff0000000000000;
    local_d8 = 0;
    uStack_d0 = 0;
    local_140 = &local_c8;
    local_148 = &local_b0;
    local_118 = puVar1;
    cVar2 = FUN_146d03a60(&local_70,&local_78,&local_108,&local_98);
    if ((cVar2 == '\0') || (1.79769313486232e+308 <= local_108 * local_108)) {
LAB_146d526b4:
      uVar4 = 0;
      goto LAB_146d526b6;
    }
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(undefined4 *)(param_4 + 0x50) = (undefined4)local_c8;
    *(uint *)(param_4 + 0x54) = local_c8._4_4_ ^ 0x80000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(undefined4 *)(param_4 + 0x60) = local_b8;
    *(uint *)(param_4 + 100) = uStack_b4 ^ 0x80000000;
    *(int *)(param_4 + 0x68) = SUB84(local_108,0);
    *(uint *)(param_4 + 0x6c) = (uint)((ulonglong)local_108 >> 0x20) ^ 0x80000000;
  }
  uVar4 = 1;
LAB_146d526b6:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d526ff FUN_146d526ff body=348 status=ok
// SIG undefined FUN_146d526ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d526ff(double *param_1,undefined8 *param_2,undefined8 param_3,double *param_4)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    if ((param_4[1] == 0.0) && (!NAN(param_4[1]))) {
      if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) {
        *param_4 = 1.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
    }
  }
  local_3c = 0xffffffff;
  local_68 = param_4[2];
  local_78 = *param_4;
  local_70 = param_4[1];
  local_b8 = 0;
  local_b0 = &local_3c;
  FUN_144916780(*param_2,&local_58,&local_78,param_2[1]);
  local_a8 = *(uint *)param_4 ^ (uint)DAT_149931e80;
  uStack_a4 = *(uint *)((longlong)param_4 + 4) ^ DAT_149931e80._4_4_;
  uStack_a0 = *(uint *)(param_4 + 1) ^ DAT_149931e80._8_4_;
  uStack_9c = *(uint *)((longlong)param_4 + 0xc) ^ DAT_149931e80._12_4_;
  local_98 = CONCAT44((uint)((ulonglong)param_4[2] >> 0x20) ^ DAT_149931e80._4_4_,
                      SUB84(param_4[2],0) ^ (uint)DAT_149931e80);
  local_b8 = 0;
  local_b0 = &local_3c;
  FUN_1404b8faa(param_3,&local_90,&local_a8,0);
  *param_1 = local_58 - local_90;
  param_1[1] = local_50 - local_88;
  param_1[2] = local_48 - local_80;
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5285c FUN_146d5285c body=1503 status=ok
// SIG undefined FUN_146d5285c(void)

/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_146d5285c(undefined8 *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5
             ,double *param_6,double *param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_308 [32];
  double *local_2e8;
  undefined4 *local_2e0;
  double local_2d8;
  double *local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248 [4];
  undefined8 local_228;
  undefined8 uStack_220;
  double adStack_218 [10];
  double local_1c8 [12];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_248[2] = -1.0;
  local_248[3] = -1.0;
  local_248[0] = -1.0;
  local_248[1] = -1.0;
  local_2d8 = (double)param_1[1];
  dVar1 = *param_3;
  uVar15 = SUB84(dVar1,0);
  uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[1];
  uVar11 = SUB84(dVar2,0);
  uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_3[2];
  uVar13 = SUB84(dVar3,0);
  uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar1 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  local_24c = 0xffffffff;
  local_250 = 0xffffffff;
  uVar4 = 2;
  if (param_8 < dVar1) {
    dVar2 = 0.0;
    uVar8 = 0;
    local_2d0 = param_4;
    do {
      local_280._8_4_ = uVar11;
      local_280._0_8_ = -(double)CONCAT44(uVar16,uVar15);
      local_280._12_4_ = (int)((ulonglong)-(double)CONCAT44(uVar12,uVar11) >> 0x20);
      local_2e0 = &local_24c;
      local_2e8 = (double *)0x0;
      local_270 = -(double)CONCAT44(uVar14,uVar13);
      FUN_144916780(*param_1,&local_268,local_280,local_2d8);
      local_2b0 = CONCAT44(uVar16,uVar15);
      local_2a8 = CONCAT44(uVar12,uVar11);
      local_2a0 = CONCAT44(uVar14,uVar13);
      local_2e0 = &local_250;
      local_2e8 = (double *)0x0;
      FUN_1404b8faa(param_2,&local_298,&local_2b0,0);
      dVar9 = dStack_260 - (double)CONCAT44(uStack_28c,uStack_290);
      dVar10 = local_268 - (double)CONCAT44(uStack_294,local_298);
      dVar3 = ((double)CONCAT44(uVar14,uVar13) * (local_258 - local_288) +
              (double)CONCAT44(uVar16,uVar15) * dVar10 + (double)CONCAT44(uVar12,uVar11) * dVar9) /
              dVar1;
      if (dVar2 <= dVar3) {
        dVar2 = dVar3;
      }
      if ((dVar1 - dVar2 < param_8) || (0xf < uVar8)) {
        if ((local_108 & 0xffffffff) == 0) {
          param_5[2] = local_258;
          *param_5 = local_268;
          param_5[1] = dStack_260;
          param_6[2] = local_288;
          *param_6 = (double)CONCAT44(uStack_294,local_298);
          param_6[1] = (double)CONCAT44(uStack_28c,uStack_290);
        }
        else {
          *param_5 = 0.0;
          param_5[1] = 0.0;
          param_5[2] = 0.0;
          param_6[2] = 0.0;
          *param_6 = 0.0;
          param_6[1] = 0.0;
          if (0 < (int)local_108) {
            uVar7 = 0;
            do {
              lVar5 = (longlong)*(int *)((longlong)&local_108 + uVar7 * 4 + 4);
              dVar2 = local_248[lVar5];
              dVar3 = local_1c8[lVar5 * 3 + 1];
              dVar9 = local_1c8[lVar5 * 3 + 2];
              *param_5 = local_1c8[lVar5 * 3] * dVar2 + *param_5;
              param_5[1] = dVar3 * dVar2 + param_5[1];
              param_5[2] = dVar9 * dVar2 + param_5[2];
              dVar3 = (double)(&uStack_220)[lVar5 * 3];
              dVar9 = adStack_218[lVar5 * 3];
              *param_6 = *(double *)((longlong)&local_228 + lVar5 * 0x18) * dVar2 + *param_6;
              param_6[1] = dVar3 * dVar2 + param_6[1];
              param_6[2] = dVar2 * dVar9 + param_6[2];
              uVar7 = uVar7 + 1;
            } while ((local_108 & 0xffffffff) != uVar7);
          }
        }
        dVar3 = -(double)CONCAT44(uVar14,uVar13) / dVar1;
        dVar2 = -(double)CONCAT44(uVar12,uVar11) / dVar1;
        dVar9 = -(double)CONCAT44(uVar16,uVar15) / dVar1;
        *local_2d0 = dVar1 - (local_2d8 + 0.0);
        *param_5 = local_2d8 * dVar9 + *param_5;
        param_5[1] = local_2d8 * dVar2 + param_5[1];
        param_5[2] = local_2d8 * dVar3 + param_5[2];
        *param_6 = *param_6 - dVar9 * 0.0;
        param_6[1] = param_6[1] - dVar2 * 0.0;
        param_6[2] = param_6[2] - dVar3 * 0.0;
        *param_7 = dVar9;
        param_7[1] = dVar2;
        param_7[2] = dVar3;
        uVar4 = *local_2d0 < 0.0;
        goto LAB_146d52db6;
      }
      uVar8 = uVar8 + 1;
      lVar5 = (longlong)(int)local_108;
      *(int *)((longlong)&local_108 + lVar5 * 4 + 4) = (int)local_108;
      iVar6 = (int)local_108 + 1;
      local_168[lVar5 * 3] = dVar10;
      local_168[lVar5 * 3 + 1] = dVar9;
      local_168[lVar5 * 3 + 2] = local_258 - local_288;
      local_1c8[lVar5 * 3] = local_268;
      local_1c8[lVar5 * 3 + 1] = dStack_260;
      local_1c8[lVar5 * 3 + 2] = local_258;
      *(undefined4 *)((longlong)&local_228 + lVar5 * 0x18) = local_298;
      *(undefined4 *)((longlong)&local_228 + lVar5 * 0x18 + 4U) = uStack_294;
      *(undefined4 *)(&uStack_220 + lVar5 * 3) = uStack_290;
      *(undefined4 *)((longlong)adStack_218 + lVar5 * 0x18 + -4) = uStack_28c;
      adStack_218[lVar5 * 3] = local_288;
      local_108 = CONCAT44(local_108._4_4_,iVar6);
      local_2e0 = (undefined4 *)&local_228;
      local_2e8 = local_1c8;
      FUN_1449162b1(&local_2c8,local_168,&local_108,local_248);
      uVar15 = SUB84(local_2c8,0);
      uVar16 = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uVar11 = SUB84(local_2c0,0);
      uVar12 = (undefined4)((ulonglong)local_2c0 >> 0x20);
      uVar13 = SUB84(local_2b8,0);
      uVar14 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      dVar1 = SQRT(local_2b8 * local_2b8 + local_2c8 * local_2c8 + local_2c0 * local_2c0);
    } while (param_8 < dVar1);
    uVar4 = 2;
  }
LAB_146d52db6:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146d52e3c FUN_146d52e3c body=4162 status=ok
// SIG undefined FUN_146d52e3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d52e3c(longlong param_1,double *param_2,double *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double *pdVar14;
  undefined8 uVar15;
  ulonglong unaff_RSI;
  uint uVar16;
  ulonglong uVar17;
  double *pdVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  uint uVar48;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  undefined4 *local_350;
  undefined8 *local_348;
  undefined4 *local_340;
  undefined8 local_338;
  undefined4 local_328;
  uint local_324;
  double *local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 uStack_300;
  double *local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  ulonglong local_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b0;
  longlong local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_240;
  double local_238;
  double local_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  ulonglong uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  longlong local_148 [3];
  code *local_130;
  double *local_128;
  longlong local_120;
  char local_118;
  undefined8 local_110;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  dVar26 = param_2[2];
  dVar4 = param_2[5];
  dVar30 = *param_2;
  dVar25 = param_2[1];
  dVar29 = param_2[4];
  dVar31 = param_2[3];
  dVar38 = param_2[8];
  dVar5 = param_2[7];
  dVar24 = param_2[6];
  local_128 = local_108;
  local_130 = FUN_140036a08;
  lVar10 = FUN_144a773aa(&local_130,&DAT_14c7585d0);
  local_130 = (code *)(lVar10 + 0x10);
  local_128 = *(double **)(lVar10 + 0x10);
  local_120 = *(longlong *)(lVar10 + 0x20);
  local_118 = '\0';
  local_110 = *(undefined8 *)(lVar10 + 0x28);
  *(code ***)(lVar10 + 0x28) = &local_130;
  *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
  local_148[0] = 0;
  local_148[1] = 0;
  FUN_1404b1a60(local_148,*(undefined4 *)(param_1 + 0x38));
  lVar10 = local_148[0];
  if (*(int *)(param_1 + 0x38) < 1) {
LAB_146d53d91:
    uVar15 = 0;
  }
  else {
    dVar26 = (dVar26 + dVar4 + dVar38) / 3.0;
    dVar25 = (dVar25 + dVar29 + dVar5) / 3.0;
    dVar4 = (dVar30 + dVar31 + dVar24) / 3.0;
    lVar11 = 8;
    uVar13 = 0;
    uVar32 = 0xffffffff;
    uVar33 = 0x7fefffff;
    dVar30 = -1.79769313486232e+308;
    do {
      lVar20 = *(longlong *)(param_1 + 0x30);
      dVar29 = ((double)*(float *)(lVar20 + lVar11) - dVar26) * param_3[2] +
               ((double)*(float *)(lVar20 + -8 + lVar11) - dVar4) * *param_3 +
               ((double)*(float *)(lVar20 + -4 + lVar11) - dVar25) * param_3[1];
      uVar7 = unaff_RSI;
      if (dVar29 <= (double)CONCAT44(uVar33,uVar32) && (double)CONCAT44(uVar33,uVar32) != dVar29) {
        uVar7 = uVar13;
      }
      unaff_RSI = uVar7 & 0xffffffff;
      uVar36 = SUB84(dVar29,0);
      uVar37 = (int)((ulonglong)dVar29 >> 0x20);
      if ((double)CONCAT44(uVar33,uVar32) <= dVar29) {
        uVar36 = uVar32;
        uVar37 = uVar33;
      }
      *(double *)(local_148[0] + uVar13 * 8) = dVar29;
      if (dVar29 <= dVar30) {
        dVar29 = dVar30;
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0xc;
      uVar32 = uVar36;
      uVar33 = uVar37;
      dVar30 = dVar29;
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x38));
    uVar15 = 0;
    if ((1.79769313486232e+308 <
         ABS((double)CONCAT44(uVar37,uVar36)) * (double)CONCAT44(uVar37,uVar36)) || (dVar29 < 0.0))
    goto LAB_146d53d93;
    iVar9 = *(int *)(param_1 + 0x28);
    local_2a8 = param_4;
    local_240 = dVar26;
    if ((longlong)iVar9 < 1) {
      local_2b0 = -1;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      dVar26 = 0.0;
      dVar29 = 0.0;
      uVar15 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar42 = 0;
      uVar43 = 0;
      uVar44 = 0;
      uVar45 = 0;
      uVar46 = 0;
      uVar47 = 0;
      local_318 = -10000000000.0;
      dVar30 = 0.0;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x20);
      local_288 = 0.0;
      uStack_280 = 0;
      local_310 = (double)CONCAT44(local_310._4_4_,0xffffffff);
      local_318 = -10000000000.0;
      lVar20 = 0;
      local_278 = 0.0;
      uStack_270 = 0;
      local_268 = 0.0;
      uStack_260 = 0;
      local_2c8 = 0.0;
      uStack_2c0 = 0;
      local_258 = 0.0;
      uStack_250 = 0;
      local_308 = 0.0;
      uStack_300 = 0;
      do {
        dVar31 = (double)*(float *)(lVar11 + 0x14 + lVar20);
        dVar29 = (double)*(float *)(lVar11 + 0x10 + lVar20);
        dVar26 = (double)*(float *)(lVar11 + 0xc + lVar20);
        dVar30 = (double)*(float *)(lVar11 + 8 + lVar20);
        dVar38 = (double)*(float *)(lVar11 + 4 + lVar20);
        fVar1 = *(float *)(lVar11 + lVar20);
        local_348 = &local_180;
        local_350 = &local_1b8;
        local_358 = &local_1a0;
        local_160 = (double)fVar1;
        local_158 = dVar38;
        local_150 = dVar30;
        local_108[0] = dVar26;
        local_108[1] = dVar29;
        local_108[2] = dVar31;
        FUN_146d4f89c(param_2,local_108,&local_160,&local_178);
        if ((ABS(local_178) * local_178 <= 1.79769313486232e+308) && (local_318 < local_178)) {
          local_310 = (double)CONCAT44(local_310._4_4_,local_1b8);
          uStack_300 = 0;
          uStack_250 = 0;
          uStack_2c0 = 0;
          uStack_260 = 0;
          uStack_270 = 0;
          uStack_280 = 0;
          local_318 = local_178;
          local_308 = (double)fVar1;
          local_2c8 = dVar30;
          local_288 = dVar31;
          local_278 = dVar29;
          local_268 = dVar26;
          local_258 = dVar38;
        }
        if (1.79769313486232e+308 < ABS(local_178) * local_178) goto LAB_146d53d91;
        lVar20 = lVar20 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar20);
      local_2b0 = (longlong)local_310._0_4_;
      dVar26 = local_2c8;
      dVar30 = local_308;
      uVar32 = (undefined4)local_258;
      uVar33 = local_258._4_4_;
      uVar34 = (undefined4)uStack_250;
      uVar35 = uStack_250._4_4_;
      uVar40 = (undefined4)local_278;
      uVar41 = local_278._4_4_;
      uVar42 = (undefined4)uStack_270;
      uVar43 = uStack_270._4_4_;
      uVar44 = (undefined4)local_288;
      uVar45 = local_288._4_4_;
      uVar46 = (undefined4)uStack_280;
      uVar47 = uStack_280._4_4_;
      dVar29 = local_268;
      uVar15 = uStack_260;
    }
    uVar22 = 0x20000000;
    local_108[1] = (param_2[2] - dVar26) * (double)CONCAT44(uVar45,uVar44) +
                   (*param_2 - dVar30) * dVar29 +
                   (param_2[1] - (double)CONCAT44(uVar33,uVar32)) * (double)CONCAT44(uVar41,uVar40);
    local_108[2] = (param_2[5] - dVar26) * (double)CONCAT44(uVar45,uVar44) +
                   (param_2[3] - dVar30) * dVar29 +
                   (param_2[4] - (double)CONCAT44(uVar33,uVar32)) * (double)CONCAT44(uVar41,uVar40);
    dVar26 = (param_2[8] - dVar26) * (double)CONCAT44(uVar45,uVar44) +
             (param_2[6] - dVar30) * dVar29 +
             (param_2[7] - (double)CONCAT44(uVar33,uVar32)) * (double)CONCAT44(uVar41,uVar40);
    local_108[0] = dVar26;
    if (local_108[1] <= dVar26) {
      local_108[0] = local_108[1];
    }
    if (local_108[2] <= local_108[1]) {
      local_108[1] = local_108[2];
    }
    if (dVar26 <= local_108[2]) {
      local_108[2] = dVar26;
    }
    dVar30 = -9999998976.0;
    local_320 = (double *)(param_1 + 0x58);
    dVar26 = *(double *)(param_1 + 0x58);
    if (dVar26 == 0.0) {
      uVar13 = 0xffffffff;
      local_2d8 = 0.0;
      local_328 = (undefined4)CONCAT71((int7)((ulonglong)local_320 >> 8),1);
      local_2e0 = 0.0;
      local_2e8 = 0.0;
      uVar16 = 0xffffffff;
      pdVar14 = param_2;
    }
    else {
      uVar19 = 0;
      uVar17 = 0xffffffff;
      uVar22 = 0x20000000;
      dVar30 = -9999998976.0;
      uVar13 = 0xffffffff;
      local_2e8 = 0.0;
      local_2e0 = 0.0;
      local_2d8 = 0.0;
      local_278 = (double)CONCAT44(uVar41,uVar40);
      uStack_270 = CONCAT44(uVar43,uVar42);
      local_288 = (double)CONCAT44(uVar45,uVar44);
      uStack_280 = CONCAT44(uVar47,uVar46);
      local_2f0 = param_2;
      local_268 = dVar29;
      uStack_260 = uVar15;
      do {
        pdVar14 = local_320;
        uVar16 = (uint)uVar17;
        uVar48 = (uint)((ulonglong)dVar30 >> 0x20);
        uVar17 = 0;
        if ((byte)(*(char *)(param_1 + 0x60) - 1U) < 3) {
          uVar17 = (ulonglong)*(uint *)((longlong)dVar26 + 0x38);
        }
        iVar9 = (int)uVar19;
        local_328 = (undefined4)CONCAT71((int7)(uVar17 >> 8),iVar9 < (int)uVar17);
        if ((int)uVar17 <= iVar9) {
          local_328 = 0;
          pdVar14 = local_2f0;
          break;
        }
        local_308 = (double)CONCAT44(local_308._4_4_,uVar16);
        local_324 = (uint)uVar13;
        local_2c8 = dVar26;
        local_160 = (double)uVar19;
        iVar8 = FUN_14571894e(local_320,&local_160);
        local_160 = (double)CONCAT44(1,iVar9);
        local_2d0 = uVar19;
        iVar9 = FUN_14571894e(pdVar14,&local_160);
        pdVar14 = local_320;
        lVar20 = (longlong)iVar8;
        dVar26 = *(double *)(lVar10 + lVar20 * 8);
        lVar11 = (longlong)iVar9;
        iVar9 = (int)local_2d0;
        if ((ABS(dVar26) * dVar26 <= 1.79769313486232e+308) ||
           (dVar26 = *(double *)(lVar10 + lVar11 * 8), dVar30 = (double)((ulonglong)uVar48 << 0x20),
           ABS(dVar26) * dVar26 <= 1.79769313486232e+308)) {
          lVar6 = *(longlong *)(param_1 + 0x30);
          local_290 = (double)*(float *)(lVar6 + 8 + lVar20 * 0xc);
          local_298 = (double)*(float *)(lVar6 + 4 + lVar20 * 0xc);
          local_2a0 = (double)*(float *)(lVar6 + lVar20 * 0xc);
          fVar1 = *(float *)(lVar6 + 8 + lVar11 * 0xc);
          fVar2 = *(float *)(lVar6 + 4 + lVar11 * 0xc);
          fVar3 = *(float *)(lVar6 + lVar11 * 0xc);
          local_160 = (double)(local_2d0 & 0xffffffff);
          iVar8 = FUN_1457189ec(local_320,&local_160,&local_178);
          if (*(longlong *)(param_1 + 0x58) == 0) {
            iVar9 = -1;
          }
          else {
            local_160 = (double)CONCAT44(1,iVar9);
            iVar9 = FUN_1457189ec(pdVar14,&local_160,&local_178);
          }
          uVar17 = (ulonglong)local_308 & 0xffffffff;
          lVar11 = *(longlong *)(param_1 + 0x20);
          lVar20 = (longlong)iVar8;
          local_308 = (double)*(float *)(lVar11 + 0x14 + lVar20 * 0x18);
          local_2c8 = (double)*(float *)(lVar11 + 0x10 + lVar20 * 0x18);
          local_310 = (double)*(float *)(lVar11 + 0xc + lVar20 * 0x18);
          lVar20 = (longlong)iVar9;
          local_258 = (double)*(float *)(lVar11 + 0x14 + lVar20 * 0x18);
          local_230 = (double)*(float *)(lVar11 + 0x10 + lVar20 * 0x18);
          local_238 = (double)*(float *)(lVar11 + 0xc + lVar20 * 0x18);
          uVar19 = DAT_149931e80;
          uStack_200 = DAT_149931e80._8_8_;
          dVar29 = (double)fVar1 - local_290;
          local_1e8 = (double)fVar2 - local_298;
          local_1f8 = (double)fVar3 - local_2a0;
          dVar26 = ((double)((ulonglong)*param_3 ^ uVar19) * local_1f8 - param_3[1] * local_1e8) -
                   param_3[2] * dVar29;
          local_1c8._8_4_ = DAT_149931e80._8_4_;
          local_1c8._0_8_ = dVar26;
          local_1c8._12_4_ = DAT_149931e80._12_4_;
          uStack_1e0 = 0;
          local_208 = (double)((ulonglong)local_1e8 ^ uVar19);
          uStack_1f0 = 0;
          local_218._8_4_ = DAT_149931e80._8_4_;
          local_218._0_8_ = (ulonglong)local_1f8 ^ uVar19;
          local_218._12_4_ = DAT_149931e80._12_4_;
          local_1d8._8_4_ = uVar34;
          local_1d8._0_8_ = dVar29;
          local_1d8._12_4_ = uVar35;
          uVar13 = CONCAT44(uVar35,uVar34) ^ uStack_200;
          uVar34 = (undefined4)uVar13;
          uVar35 = (undefined4)(uVar13 >> 0x20);
          local_228._8_4_ = uVar34;
          local_228._0_8_ = (ulonglong)dVar29 ^ uVar19;
          local_228._12_4_ = uVar35;
          uVar12 = 0;
          uVar13 = (ulonglong)local_324;
          iVar9 = (int)local_2d0;
          do {
            dVar30 = (double)((ulonglong)uVar48 << 0x20);
            if (ABS(local_108[uVar12]) * local_108[uVar12] <= 1.79769313486232e+308) {
              pdVar14 = local_2f0 + uVar12 * 3 + 3;
              dVar31 = pdVar14[-1];
              dVar38 = pdVar14[-3];
              dVar5 = pdVar14[-2];
              if (uVar12 == 2) {
                pdVar14 = local_2f0;
              }
              dVar24 = pdVar14[2] - dVar31;
              dVar30 = (double)((ulonglong)uVar48 << 0x20);
              dVar23 = pdVar14[1] - dVar5;
              dVar39 = *pdVar14 - dVar38;
              dVar27 = local_258 * dVar24 + local_238 * dVar39 + dVar23 * local_230;
              if (((local_308 * dVar24 + local_310 * dVar39 + dVar23 * local_2c8) * dVar27 <
                   -0.009999999776482582) && (0.009999999776482582 < dVar27 * dVar26)) {
                dVar27 = local_1f8 * dVar23 + dVar39 * local_208;
                dVar30 = dVar24 * (double)((ulonglong)local_1f8 ^ uVar19) + dVar29 * dVar39;
                dVar24 = dVar23 * (double)((ulonglong)dVar29 ^ uVar19) + local_1e8 * dVar24;
                dVar39 = (dVar31 - local_240) * dVar27 +
                         (dVar38 - dVar4) * dVar24 + (dVar5 - dVar25) * dVar30;
                if (dVar39 < 0.0) {
                  uVar32 = (undefined4)DAT_149931e80;
                  uVar33 = DAT_149931e80._4_4_;
                  dVar23 = (double)((ulonglong)dVar27 ^ uVar19);
                  dVar28 = (double)((ulonglong)dVar30 ^ uVar19);
                }
                else {
                  uVar32 = 0;
                  uVar33 = 0x80000000;
                  dVar28 = dVar30;
                  dVar23 = dVar27;
                }
                dVar27 = dVar27 * dVar27 + dVar24 * dVar24 + dVar30 * dVar30;
                uVar21 = -(ulonglong)(dVar39 < 0.0);
                dVar24 = (double)(~uVar21 & (ulonglong)dVar24 |
                                 ((ulonglong)dVar24 ^ CONCAT44(uVar33,uVar32)) & uVar21);
                dVar31 = (local_290 - dVar31) * dVar23 +
                         (local_2a0 - dVar38) * dVar24 + (local_298 - dVar5) * dVar28;
                dVar30 = (double)((ulonglong)uVar48 << 0x20);
                if (dVar27 * 1.79769313486232e+308 < ABS(dVar31) * dVar31) goto LAB_146d53d91;
                uVar34 = 0;
                uVar35 = 0;
                if (ABS((double)CONCAT44(uVar48,uVar22)) * (double)CONCAT44(uVar48,uVar22) * dVar27
                    < ABS(dVar31) * dVar31) {
                  local_2d8 = 1.0 / SQRT(dVar27);
                  dVar30 = dVar31 * local_2d8;
                  uVar22 = SUB84(dVar30,0);
                  local_2e8 = dVar23 * local_2d8;
                  local_2e0 = dVar28 * local_2d8;
                  local_2d8 = local_2d8 * dVar24;
                  uVar13 = uVar12 & 0xffffffff;
                  uVar17 = local_2d0 & 0xffffffff;
                }
              }
            }
            uVar12 = uVar12 + 1;
            uVar48 = (uint)((ulonglong)dVar30 >> 0x20);
          } while (uVar12 != 3);
          dVar26 = *local_320;
          uVar40 = (undefined4)local_278;
          uVar41 = local_278._4_4_;
          uVar44 = (undefined4)local_288;
          uVar45 = local_288._4_4_;
          dVar29 = local_268;
        }
        else {
          uVar13 = (ulonglong)local_324;
          uVar17 = (ulonglong)local_308 & 0xffffffff;
          dVar26 = local_2c8;
        }
        uVar16 = (uint)uVar17;
        uVar19 = (ulonglong)(iVar9 + 1);
        pdVar14 = local_2f0;
      } while (dVar26 != 0.0);
    }
    lVar10 = local_2a8;
    pdVar18 = local_320;
    uVar32 = (undefined4)((ulonglong)dVar30 >> 0x20);
    if (((((double)CONCAT44(uVar37,uVar36) == -10000000000.0) &&
         (!NAN((double)CONCAT44(uVar37,uVar36)))) ||
        (dVar26 = (double)CONCAT44(uVar37,uVar36) + 0.01, dVar26 <= local_318)) ||
       (dVar26 < (double)CONCAT44(uVar32,uVar22) || dVar26 == (double)CONCAT44(uVar32,uVar22))) {
      if (((local_318 == -10000000000.0) && (!NAN(local_318))) ||
         (local_318 < (double)CONCAT44(uVar32,uVar22) ||
          local_318 == (double)CONCAT44(uVar32,uVar22))) {
        if (((double)CONCAT44(uVar32,uVar22) == -10000000000.0) &&
           (!NAN((double)CONCAT44(uVar32,uVar22)))) goto LAB_146d53d91;
        lVar20 = -1;
        lVar11 = -1;
        if ((char)local_328 == '\0') {
          local_160 = (double)(ulonglong)uVar16;
          iVar9 = FUN_14571894e(local_320,&local_160);
          lVar20 = (longlong)iVar9;
          local_160 = (double)CONCAT44(1,uVar16);
          iVar9 = FUN_14571894e(pdVar18,&local_160);
          lVar11 = (longlong)iVar9;
        }
        lVar6 = *(longlong *)(param_1 + 0x30);
        local_150 = (double)*(float *)(lVar6 + 8 + lVar20 * 0xc);
        local_158 = (double)*(float *)(lVar6 + 4 + lVar20 * 0xc);
        local_160 = (double)*(float *)(lVar6 + lVar20 * 0xc);
        local_168 = (double)*(float *)(lVar6 + 8 + lVar11 * 0xc);
        local_170 = (double)*(float *)(lVar6 + 4 + lVar11 * 0xc);
        local_178 = (double)*(float *)(lVar6 + lVar11 * 0xc);
        iVar9 = (int)uVar13;
        pdVar18 = pdVar14 + (ulonglong)(iVar9 + 1) * 3;
        if (iVar9 == 2) {
          pdVar18 = pdVar14;
        }
        local_338 = 0x3f1a36e2e0000000;
        local_340 = &local_1b8;
        local_348 = &local_1a0;
        local_350 = local_188;
        local_358 = &local_180;
        FUN_1404b842e(&local_160,&local_178,pdVar14 + (longlong)iVar9 * 3,pdVar18);
        *(undefined8 *)(lVar10 + 0x30) = local_190;
        *(undefined8 *)(lVar10 + 0x20) = local_1a0;
        *(undefined8 *)(lVar10 + 0x28) = uStack_198;
        *(ulonglong *)(lVar10 + 0x38) = CONCAT44(uStack_1b4,local_1b8);
        *(undefined8 *)(lVar10 + 0x40) = uStack_1b0;
        *(undefined8 *)(lVar10 + 0x48) = local_1a8;
        *(double *)(lVar10 + 0x50) = local_2d8;
        *(double *)(lVar10 + 0x58) = local_2e0;
        *(double *)(lVar10 + 0x60) = local_2e8;
        *(ulonglong *)(lVar10 + 0x68) = CONCAT44(uVar32,uVar22);
      }
      else {
        dVar26 = pdVar14[local_2b0 * 3];
        dVar4 = pdVar14[local_2b0 * 3 + 1];
        dVar30 = pdVar14[local_2b0 * 3 + 2];
        *(double *)(local_2a8 + 0x20) = dVar26 - dVar29 * local_318;
        *(double *)(local_2a8 + 0x28) = dVar4 - (double)CONCAT44(uVar41,uVar40) * local_318;
        *(double *)(local_2a8 + 0x30) = dVar30 - (double)CONCAT44(uVar45,uVar44) * local_318;
        *(double *)(local_2a8 + 0x38) = dVar26;
        *(double *)(local_2a8 + 0x40) = dVar4;
        *(double *)(local_2a8 + 0x48) = dVar30;
        *(double *)(local_2a8 + 0x50) = -dVar29;
        *(ulonglong *)(local_2a8 + 0x58) = CONCAT44(uVar41,uVar40) ^ 0x8000000000000000;
        *(ulonglong *)(local_2a8 + 0x60) = CONCAT44(uVar45,uVar44) ^ 0x8000000000000000;
        *(double *)(local_2a8 + 0x68) = local_318;
      }
    }
    else {
      lVar11 = (longlong)(int)uVar7;
      dVar26 = *param_3;
      dVar4 = param_3[1];
      dVar30 = param_3[2];
      lVar10 = *(longlong *)(param_1 + 0x30);
      dVar25 = (double)*(float *)(lVar10 + 8 + lVar11 * 0xc);
      dVar29 = (double)*(float *)(lVar10 + 4 + lVar11 * 0xc);
      dVar31 = (double)*(float *)(lVar10 + lVar11 * 0xc);
      *(double *)(local_2a8 + 0x20) = dVar31;
      *(double *)(local_2a8 + 0x28) = dVar29;
      *(double *)(local_2a8 + 0x30) = dVar25;
      *(double *)(local_2a8 + 0x38) = dVar31 - (double)CONCAT44(uVar37,uVar36) * dVar26;
      *(double *)(local_2a8 + 0x40) = dVar29 - (double)CONCAT44(uVar37,uVar36) * dVar4;
      *(double *)(local_2a8 + 0x48) = dVar25 - (double)CONCAT44(uVar37,uVar36) * dVar30;
      *(double *)(local_2a8 + 0x50) = dVar26;
      *(double *)(local_2a8 + 0x58) = dVar4;
      *(double *)(local_2a8 + 0x60) = dVar30;
      *(ulonglong *)(local_2a8 + 0x68) = CONCAT44(uVar37,uVar36);
    }
    uVar15 = CONCAT71((int7)(uVar13 >> 8),1);
  }
LAB_146d53d93:
  if (local_118 == '\0') {
    local_118 = '\x01';
    *(int *)(local_130 + 0x20) = *(int *)(local_130 + 0x20) + -1;
    if (local_120 != *(longlong *)(local_130 + 0x10)) {
      FUN_14004673c();
    }
    *(double **)local_130 = local_128;
    *(undefined8 *)(local_130 + 0x18) = local_110;
  }
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 146d53e7f FUN_146d53e7f body=855 status=ok
// SIG undefined FUN_146d53e7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d53e7f(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  double *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar1 = (undefined4 *)(double)_DAT_14c75f068;
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_78 = param_2;
  local_70 = param_1;
  if (DAT_14c75f070 == '\x01') {
    local_80 = 1.79769313486232e+308;
    local_e8 = (param_2[2] + param_2[5] + param_2[8]) / 3.0;
    local_f0 = (param_2[1] + param_2[4] + param_2[7]) / 3.0;
    local_f8 = (*param_2 + param_2[3] + param_2[6]) / 3.0;
    FUN_146d541d7(&local_e0,&local_70,&local_78);
    local_138 = (undefined4 *)&local_c8;
    local_140 = &local_b0;
    local_148 = &local_98;
    local_130 = puVar1;
    iVar3 = FUN_146d54338(&local_70,&local_78,&local_e0,&local_80);
    if (iVar3 == 2) {
      uVar4 = FUN_146d5491c(param_1,param_2,param_3,param_4);
      goto LAB_146d5418e;
    }
    if (1.79769313486232e+308 <= ABS(local_80) * local_80) goto LAB_146d5418c;
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(ulonglong *)(param_4 + 0x50) =
         CONCAT44(local_c8._4_4_,(undefined4)local_c8) ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x60) = CONCAT44(uStack_b4,local_b8) ^ 0x8000000000000000;
    *(double *)(param_4 + 0x68) = local_80;
  }
  else {
    local_110 = (double)DAT_14c75f06c;
    local_128 = &local_80;
    local_80 = 0.0;
    local_138 = &local_fc;
    local_fc = 0xffffffff;
    local_130 = &local_100;
    local_100 = 0xffffffff;
    local_120 = &local_e0;
    local_e0 = 0x3ff0000000000000;
    local_d8 = 0;
    uStack_d0 = 0;
    local_140 = &local_c8;
    local_148 = &local_b0;
    local_118 = puVar1;
    cVar2 = FUN_146d04d71(&local_70,&local_78,&local_108,&local_98);
    if ((cVar2 == '\0') || (1.79769313486232e+308 <= local_108 * local_108)) {
LAB_146d5418c:
      uVar4 = 0;
      goto LAB_146d5418e;
    }
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(undefined4 *)(param_4 + 0x50) = (undefined4)local_c8;
    *(uint *)(param_4 + 0x54) = local_c8._4_4_ ^ 0x80000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(undefined4 *)(param_4 + 0x60) = local_b8;
    *(uint *)(param_4 + 100) = uStack_b4 ^ 0x80000000;
    *(int *)(param_4 + 0x68) = SUB84(local_108,0);
    *(uint *)(param_4 + 0x6c) = (uint)((ulonglong)local_108 >> 0x20) ^ 0x80000000;
  }
  uVar4 = 1;
LAB_146d5418e:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d541d7 FUN_146d541d7 body=352 status=ok
// SIG undefined FUN_146d541d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d541d7(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    if ((param_4[1] == 0.0) && (!NAN(param_4[1]))) {
      if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) {
        *param_4 = 1.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
    }
  }
  local_3c = 0xffffffff;
  local_68 = param_4[2];
  local_78 = *param_4;
  local_70 = param_4[1];
  local_b8 = 0;
  local_b0 = &local_3c;
  FUN_144916780(*(undefined8 *)(*param_2 + 0x28),&local_58,&local_78,param_2[1]);
  local_a8 = *(uint *)param_4 ^ (uint)DAT_149931e80;
  uStack_a4 = *(uint *)((longlong)param_4 + 4) ^ DAT_149931e80._4_4_;
  uStack_a0 = *(uint *)(param_4 + 1) ^ DAT_149931e80._8_4_;
  uStack_9c = *(uint *)((longlong)param_4 + 0xc) ^ DAT_149931e80._12_4_;
  local_98 = CONCAT44((uint)((ulonglong)param_4[2] >> 0x20) ^ DAT_149931e80._4_4_,
                      SUB84(param_4[2],0) ^ (uint)DAT_149931e80);
  local_b8 = 0;
  local_b0 = &local_3c;
  FUN_1404b8faa(param_3,&local_90,&local_a8,0);
  *param_1 = local_58 - local_90;
  param_1[1] = local_50 - local_88;
  param_1[2] = local_48 - local_80;
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d54338 FUN_146d54338 body=1507 status=ok
// SIG undefined FUN_146d54338(void)

/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_146d54338(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_308 [32];
  double *local_2e8;
  undefined4 *local_2e0;
  double local_2d8;
  double *local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248 [4];
  undefined8 local_228;
  undefined8 uStack_220;
  double adStack_218 [10];
  double local_1c8 [12];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_248[2] = -1.0;
  local_248[3] = -1.0;
  local_248[0] = -1.0;
  local_248[1] = -1.0;
  local_2d8 = (double)param_1[1];
  dVar1 = *param_3;
  uVar15 = SUB84(dVar1,0);
  uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[1];
  uVar11 = SUB84(dVar2,0);
  uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_3[2];
  uVar13 = SUB84(dVar3,0);
  uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar1 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  local_24c = 0xffffffff;
  local_250 = 0xffffffff;
  uVar4 = 2;
  if (param_8 < dVar1) {
    dVar2 = 0.0;
    uVar8 = 0;
    local_2d0 = param_4;
    do {
      local_280._8_4_ = uVar11;
      local_280._0_8_ = -(double)CONCAT44(uVar16,uVar15);
      local_280._12_4_ = (int)((ulonglong)-(double)CONCAT44(uVar12,uVar11) >> 0x20);
      local_2e0 = &local_24c;
      local_2e8 = (double *)0x0;
      local_270 = -(double)CONCAT44(uVar14,uVar13);
      FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_268,local_280,local_2d8);
      local_2b0 = CONCAT44(uVar16,uVar15);
      local_2a8 = CONCAT44(uVar12,uVar11);
      local_2a0 = CONCAT44(uVar14,uVar13);
      local_2e0 = &local_250;
      local_2e8 = (double *)0x0;
      FUN_1404b8faa(param_2,&local_298,&local_2b0,0);
      dVar9 = dStack_260 - (double)CONCAT44(uStack_28c,uStack_290);
      dVar10 = local_268 - (double)CONCAT44(uStack_294,local_298);
      dVar3 = ((double)CONCAT44(uVar14,uVar13) * (local_258 - local_288) +
              (double)CONCAT44(uVar16,uVar15) * dVar10 + (double)CONCAT44(uVar12,uVar11) * dVar9) /
              dVar1;
      if (dVar2 <= dVar3) {
        dVar2 = dVar3;
      }
      if ((dVar1 - dVar2 < param_8) || (0xf < uVar8)) {
        if ((local_108 & 0xffffffff) == 0) {
          param_5[2] = local_258;
          *param_5 = local_268;
          param_5[1] = dStack_260;
          param_6[2] = local_288;
          *param_6 = (double)CONCAT44(uStack_294,local_298);
          param_6[1] = (double)CONCAT44(uStack_28c,uStack_290);
        }
        else {
          *param_5 = 0.0;
          param_5[1] = 0.0;
          param_5[2] = 0.0;
          param_6[2] = 0.0;
          *param_6 = 0.0;
          param_6[1] = 0.0;
          if (0 < (int)local_108) {
            uVar7 = 0;
            do {
              lVar5 = (longlong)*(int *)((longlong)&local_108 + uVar7 * 4 + 4);
              dVar2 = local_248[lVar5];
              dVar3 = local_1c8[lVar5 * 3 + 1];
              dVar9 = local_1c8[lVar5 * 3 + 2];
              *param_5 = local_1c8[lVar5 * 3] * dVar2 + *param_5;
              param_5[1] = dVar3 * dVar2 + param_5[1];
              param_5[2] = dVar9 * dVar2 + param_5[2];
              dVar3 = (double)(&uStack_220)[lVar5 * 3];
              dVar9 = adStack_218[lVar5 * 3];
              *param_6 = *(double *)((longlong)&local_228 + lVar5 * 0x18) * dVar2 + *param_6;
              param_6[1] = dVar3 * dVar2 + param_6[1];
              param_6[2] = dVar2 * dVar9 + param_6[2];
              uVar7 = uVar7 + 1;
            } while ((local_108 & 0xffffffff) != uVar7);
          }
        }
        dVar3 = -(double)CONCAT44(uVar14,uVar13) / dVar1;
        dVar2 = -(double)CONCAT44(uVar12,uVar11) / dVar1;
        dVar9 = -(double)CONCAT44(uVar16,uVar15) / dVar1;
        *local_2d0 = dVar1 - (local_2d8 + 0.0);
        *param_5 = local_2d8 * dVar9 + *param_5;
        param_5[1] = local_2d8 * dVar2 + param_5[1];
        param_5[2] = local_2d8 * dVar3 + param_5[2];
        *param_6 = *param_6 - dVar9 * 0.0;
        param_6[1] = param_6[1] - dVar2 * 0.0;
        param_6[2] = param_6[2] - dVar3 * 0.0;
        *param_7 = dVar9;
        param_7[1] = dVar2;
        param_7[2] = dVar3;
        uVar4 = *local_2d0 < 0.0;
        goto LAB_146d54896;
      }
      uVar8 = uVar8 + 1;
      lVar5 = (longlong)(int)local_108;
      *(int *)((longlong)&local_108 + lVar5 * 4 + 4) = (int)local_108;
      iVar6 = (int)local_108 + 1;
      local_168[lVar5 * 3] = dVar10;
      local_168[lVar5 * 3 + 1] = dVar9;
      local_168[lVar5 * 3 + 2] = local_258 - local_288;
      local_1c8[lVar5 * 3] = local_268;
      local_1c8[lVar5 * 3 + 1] = dStack_260;
      local_1c8[lVar5 * 3 + 2] = local_258;
      *(undefined4 *)((longlong)&local_228 + lVar5 * 0x18) = local_298;
      *(undefined4 *)((longlong)&local_228 + lVar5 * 0x18 + 4U) = uStack_294;
      *(undefined4 *)(&uStack_220 + lVar5 * 3) = uStack_290;
      *(undefined4 *)((longlong)adStack_218 + lVar5 * 0x18 + -4) = uStack_28c;
      adStack_218[lVar5 * 3] = local_288;
      local_108 = CONCAT44(local_108._4_4_,iVar6);
      local_2e0 = (undefined4 *)&local_228;
      local_2e8 = local_1c8;
      FUN_1449162b1(&local_2c8,local_168,&local_108,local_248);
      uVar15 = SUB84(local_2c8,0);
      uVar16 = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uVar11 = SUB84(local_2c0,0);
      uVar12 = (undefined4)((ulonglong)local_2c0 >> 0x20);
      uVar13 = SUB84(local_2b8,0);
      uVar14 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      dVar1 = SQRT(local_2b8 * local_2b8 + local_2c8 * local_2c8 + local_2c0 * local_2c0);
    } while (param_8 < dVar1);
    uVar4 = 2;
  }
LAB_146d54896:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146d5491c FUN_146d5491c body=4116 status=ok
// SIG undefined FUN_146d5491c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d5491c(longlong param_1,double *param_2,double *param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  double *pdVar16;
  double dVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  double *pdVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined4 *local_330;
  undefined8 *local_328;
  undefined4 *local_320;
  undefined8 local_318;
  double local_308;
  uint local_2fc;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  ulonglong local_2d0;
  double *local_2c8;
  ulonglong local_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double local_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  ulonglong uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  longlong local_148 [3];
  code *local_130;
  double *local_128;
  longlong local_120;
  char local_118;
  undefined8 local_110;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  dVar17 = param_2[2];
  dVar4 = param_2[5];
  dVar29 = *param_2;
  dVar25 = param_2[1];
  dVar28 = param_2[4];
  dVar30 = param_2[3];
  dVar5 = param_2[8];
  dVar37 = param_2[7];
  dVar6 = param_2[6];
  local_128 = local_108;
  local_130 = FUN_140036a08;
  lVar11 = FUN_144a773aa(&local_130,&DAT_14c7585d0);
  local_130 = (code *)(lVar11 + 0x10);
  local_128 = *(double **)(lVar11 + 0x10);
  local_120 = *(longlong *)(lVar11 + 0x20);
  local_118 = '\0';
  local_110 = *(undefined8 *)(lVar11 + 0x28);
  *(code ***)(lVar11 + 0x28) = &local_130;
  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
  local_148[0] = 0;
  local_148[1] = 0;
  FUN_1404b1a60(local_148,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38));
  lVar13 = local_148[0];
  lVar11 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar11 + 0x38) < 1) {
LAB_146d5583d:
    uVar18 = 0;
    goto LAB_146d5583f;
  }
  dVar17 = (dVar17 + dVar4 + dVar5) / 3.0;
  dVar25 = (dVar25 + dVar28 + dVar37) / 3.0;
  dVar4 = (dVar29 + dVar30 + dVar6) / 3.0;
  lVar12 = 8;
  uVar14 = 0;
  uVar19 = param_4;
  uVar31 = 0xffffffff;
  uVar32 = 0x7fefffff;
  dVar29 = -1.79769313486232e+308;
  do {
    lVar11 = *(longlong *)(lVar11 + 0x30);
    dVar28 = ((double)*(float *)(lVar11 + lVar12) - dVar17) * param_3[2] +
             ((double)*(float *)(lVar11 + -8 + lVar12) - dVar4) * *param_3 +
             ((double)*(float *)(lVar11 + -4 + lVar12) - dVar25) * param_3[1];
    uVar8 = uVar19;
    if (dVar28 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar28) {
      uVar8 = uVar14;
    }
    uVar19 = uVar8 & 0xffffffff;
    uVar35 = SUB84(dVar28,0);
    uVar36 = (int)((ulonglong)dVar28 >> 0x20);
    if ((double)CONCAT44(uVar32,uVar31) <= dVar28) {
      uVar35 = uVar31;
      uVar36 = uVar32;
    }
    *(double *)(local_148[0] + uVar14 * 8) = dVar28;
    if (dVar28 <= dVar29) {
      dVar28 = dVar29;
    }
    uVar14 = uVar14 + 1;
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar12 = lVar12 + 0xc;
    uVar31 = uVar35;
    uVar32 = uVar36;
    dVar29 = dVar28;
  } while ((longlong)uVar14 < (longlong)*(int *)(lVar11 + 0x38));
  uVar18 = 0;
  local_2d0 = param_4;
  if ((1.79769313486232e+308 <
       ABS((double)CONCAT44(uVar36,uVar35)) * (double)CONCAT44(uVar36,uVar35)) || (dVar28 < 0.0))
  goto LAB_146d5583f;
  local_238 = dVar17;
  if ((longlong)*(int *)(lVar11 + 0x28) < 1) {
    local_2a8 = -1;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    dVar17 = 0.0;
    dVar28 = 0.0;
    uVar18 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    local_2e0 = -10000000000.0;
    dVar29 = 0.0;
  }
  else {
    lVar12 = *(longlong *)(lVar11 + 0x20);
    local_308 = (double)((longlong)*(int *)(lVar11 + 0x28) * 0x18);
    local_288 = 0.0;
    uStack_280 = 0;
    local_2d8 = (double)CONCAT44(local_2d8._4_4_,0xffffffff);
    local_2e0 = -10000000000.0;
    dVar17 = 0.0;
    local_278 = 0.0;
    uStack_270 = 0;
    local_268 = 0.0;
    uStack_260 = 0;
    local_248 = 0.0;
    uStack_240 = 0;
    local_258 = 0.0;
    uStack_250 = 0;
    local_2b8 = 0.0;
    uStack_2b0 = 0;
    do {
      dVar5 = (double)*(float *)(lVar12 + 0x14 + (longlong)dVar17);
      dVar30 = (double)*(float *)(lVar12 + 0x10 + (longlong)dVar17);
      dVar29 = (double)*(float *)(lVar12 + 0xc + (longlong)dVar17);
      dVar28 = (double)*(float *)(lVar12 + 8 + (longlong)dVar17);
      dVar37 = (double)*(float *)(lVar12 + 4 + (longlong)dVar17);
      fVar1 = *(float *)(lVar12 + (longlong)dVar17);
      local_328 = &local_180;
      local_330 = &local_1b8;
      local_338 = &local_1a0;
      local_160 = (double)fVar1;
      local_158 = dVar37;
      local_150 = dVar28;
      local_108[0] = dVar29;
      local_108[1] = dVar30;
      local_108[2] = dVar5;
      FUN_146d4f89c(param_2,local_108,&local_160,&local_178);
      if ((ABS(local_178) * local_178 <= 1.79769313486232e+308) && (local_2e0 < local_178)) {
        local_2d8 = (double)CONCAT44(local_2d8._4_4_,local_1b8);
        uStack_2b0 = 0;
        uStack_250 = 0;
        uStack_240 = 0;
        uStack_260 = 0;
        uStack_270 = 0;
        uStack_280 = 0;
        local_2e0 = local_178;
        local_2b8 = (double)fVar1;
        local_288 = dVar5;
        local_278 = dVar30;
        local_268 = dVar29;
        local_258 = dVar37;
        local_248 = dVar28;
      }
      if (1.79769313486232e+308 < ABS(local_178) * local_178) goto LAB_146d5583d;
      dVar17 = (double)((longlong)dVar17 + 0x18);
    } while (local_308 != dVar17);
    local_2a8 = (longlong)local_2d8._0_4_;
    dVar17 = local_248;
    dVar29 = local_2b8;
    uVar31 = (undefined4)local_258;
    uVar32 = local_258._4_4_;
    uVar33 = (undefined4)uStack_250;
    uVar34 = uStack_250._4_4_;
    uVar39 = (undefined4)local_278;
    uVar40 = local_278._4_4_;
    uVar41 = (undefined4)uStack_270;
    uVar42 = uStack_270._4_4_;
    uVar43 = (undefined4)local_288;
    uVar44 = local_288._4_4_;
    uVar45 = (undefined4)uStack_280;
    uVar46 = uStack_280._4_4_;
    dVar28 = local_268;
    uVar18 = uStack_260;
  }
  uVar22 = 0x20000000;
  local_108[1] = (param_2[2] - dVar17) * (double)CONCAT44(uVar44,uVar43) +
                 (*param_2 - dVar29) * dVar28 +
                 (param_2[1] - (double)CONCAT44(uVar32,uVar31)) * (double)CONCAT44(uVar40,uVar39);
  local_108[2] = (param_2[5] - dVar17) * (double)CONCAT44(uVar44,uVar43) +
                 (param_2[3] - dVar29) * dVar28 +
                 (param_2[4] - (double)CONCAT44(uVar32,uVar31)) * (double)CONCAT44(uVar40,uVar39);
  dVar17 = (param_2[8] - dVar17) * (double)CONCAT44(uVar44,uVar43) +
           (param_2[6] - dVar29) * dVar28 +
           (param_2[7] - (double)CONCAT44(uVar32,uVar31)) * (double)CONCAT44(uVar40,uVar39);
  local_108[0] = dVar17;
  if (local_108[1] <= dVar17) {
    local_108[0] = local_108[1];
  }
  if (local_108[2] <= local_108[1]) {
    local_108[1] = local_108[2];
  }
  if (dVar17 <= local_108[2]) {
    local_108[2] = dVar17;
  }
  dVar29 = -9999998976.0;
  dVar17 = *(double *)(lVar11 + 0x58);
  if (dVar17 == 0.0) {
    iVar9 = -1;
    local_2e8 = 0.0;
    local_2f0 = 0.0;
    local_2f8 = 0.0;
    uVar19 = 0xffffffff;
    pdVar16 = param_2;
  }
  else {
    uVar14 = 0;
    uVar19 = 0xffffffff;
    uVar22 = 0x20000000;
    dVar29 = -9999998976.0;
    iVar9 = -1;
    local_2f8 = 0.0;
    local_2f0 = 0.0;
    local_2e8 = 0.0;
    local_278 = (double)CONCAT44(uVar40,uVar39);
    uStack_270 = CONCAT44(uVar42,uVar41);
    local_288 = (double)CONCAT44(uVar44,uVar43);
    uStack_280 = CONCAT44(uVar46,uVar45);
    local_2c8 = param_2;
    local_268 = dVar28;
    uStack_260 = uVar18;
    do {
      uVar47 = (uint)((ulonglong)dVar29 >> 0x20);
      iVar10 = 0;
      if ((byte)(*(char *)(lVar11 + 0x60) - 1U) < 3) {
        iVar10 = *(int *)((longlong)dVar17 + 0x38);
      }
      pdVar16 = local_2c8;
      if (iVar10 <= (int)uVar14) break;
      local_2fc = (uint)uVar19;
      local_308 = (double)CONCAT44(local_308._4_4_,iVar9);
      local_2b8 = dVar17;
      local_160 = (double)uVar14;
      iVar9 = FUN_14571894e(lVar11 + 0x58,&local_160);
      local_160 = (double)CONCAT44(1,(int)uVar14);
      local_2c0 = uVar14;
      iVar10 = FUN_14571894e(lVar11 + 0x58,&local_160);
      lVar15 = (longlong)iVar9;
      dVar17 = *(double *)(lVar13 + lVar15 * 8);
      lVar12 = (longlong)iVar10;
      iVar10 = (int)local_2c0;
      if ((ABS(dVar17) * dVar17 <= 1.79769313486232e+308) ||
         (dVar17 = *(double *)(lVar13 + lVar12 * 8), dVar29 = (double)((ulonglong)uVar47 << 0x20),
         ABS(dVar17) * dVar17 <= 1.79769313486232e+308)) {
        lVar7 = *(longlong *)(lVar11 + 0x30);
        local_290 = (double)*(float *)(lVar7 + 8 + lVar15 * 0xc);
        local_298 = (double)*(float *)(lVar7 + 4 + lVar15 * 0xc);
        local_2a0 = (double)*(float *)(lVar7 + lVar15 * 0xc);
        fVar1 = *(float *)(lVar7 + 8 + lVar12 * 0xc);
        fVar2 = *(float *)(lVar7 + 4 + lVar12 * 0xc);
        fVar3 = *(float *)(lVar7 + lVar12 * 0xc);
        local_160 = (double)(local_2c0 & 0xffffffff);
        iVar9 = FUN_1457189ec(lVar11 + 0x58,&local_160,&local_178);
        lVar11 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(lVar11 + 0x58) == 0) {
          iVar10 = -1;
        }
        else {
          local_160 = (double)CONCAT44(1,iVar10);
          iVar10 = FUN_1457189ec(lVar11 + 0x58,&local_160,&local_178);
          lVar11 = *(longlong *)(param_1 + 0x28);
        }
        lVar12 = *(longlong *)(lVar11 + 0x20);
        lVar15 = (longlong)iVar9;
        dVar17 = (double)*(float *)(lVar12 + 0x14 + lVar15 * 0x18);
        local_2b8 = (double)*(float *)(lVar12 + 0x10 + lVar15 * 0x18);
        local_248 = (double)*(float *)(lVar12 + 0xc + lVar15 * 0x18);
        lVar15 = (longlong)iVar10;
        local_2d8 = (double)*(float *)(lVar12 + 0x14 + lVar15 * 0x18);
        local_258 = (double)*(float *)(lVar12 + 0x10 + lVar15 * 0x18);
        local_230 = (double)*(float *)(lVar12 + 0xc + lVar15 * 0x18);
        uVar14 = DAT_149931e80;
        uStack_200 = DAT_149931e80._8_8_;
        dVar30 = (double)fVar1 - local_290;
        local_1e8 = (double)fVar2 - local_298;
        local_1f8 = (double)fVar3 - local_2a0;
        dVar28 = ((double)((ulonglong)*param_3 ^ uVar14) * local_1f8 - param_3[1] * local_1e8) -
                 param_3[2] * dVar30;
        local_1c8._8_4_ = DAT_149931e80._8_4_;
        local_1c8._0_8_ = dVar28;
        local_1c8._12_4_ = DAT_149931e80._12_4_;
        uStack_1e0 = 0;
        local_208 = (double)((ulonglong)local_1e8 ^ uVar14);
        uStack_1f0 = 0;
        local_218._8_4_ = DAT_149931e80._8_4_;
        local_218._0_8_ = (ulonglong)local_1f8 ^ uVar14;
        local_218._12_4_ = DAT_149931e80._12_4_;
        local_1d8._8_4_ = uVar33;
        local_1d8._0_8_ = dVar30;
        local_1d8._12_4_ = uVar34;
        uVar19 = CONCAT44(uVar34,uVar33) ^ uStack_200;
        uVar33 = (undefined4)uVar19;
        uVar34 = (undefined4)(uVar19 >> 0x20);
        local_228._8_4_ = uVar33;
        local_228._0_8_ = (ulonglong)dVar30 ^ uVar14;
        local_228._12_4_ = uVar34;
        lVar12 = 0;
        uVar19 = (ulonglong)local_2fc;
        iVar10 = (int)local_2c0;
        iVar9 = local_308._0_4_;
        do {
          dVar29 = (double)((ulonglong)uVar47 << 0x20);
          local_308 = dVar17;
          if (ABS(local_108[lVar12]) * local_108[lVar12] <= 1.79769313486232e+308) {
            pdVar16 = local_2c8 + lVar12 * 3 + 3;
            dVar5 = pdVar16[-1];
            dVar37 = pdVar16[-3];
            dVar6 = pdVar16[-2];
            if (lVar12 == 2) {
              pdVar16 = local_2c8;
            }
            dVar24 = pdVar16[2] - dVar5;
            dVar29 = (double)((ulonglong)uVar47 << 0x20);
            dVar23 = pdVar16[1] - dVar6;
            dVar38 = *pdVar16 - dVar37;
            dVar26 = local_2d8 * dVar24 + local_230 * dVar38 + dVar23 * local_258;
            if (((dVar17 * dVar24 + local_248 * dVar38 + dVar23 * local_2b8) * dVar26 <
                 -0.009999999776482582) && (0.009999999776482582 < dVar26 * dVar28)) {
              dVar26 = local_1f8 * dVar23 + dVar38 * local_208;
              dVar29 = dVar24 * (double)((ulonglong)local_1f8 ^ uVar14) + dVar30 * dVar38;
              dVar24 = dVar23 * (double)((ulonglong)dVar30 ^ uVar14) + local_1e8 * dVar24;
              dVar38 = (dVar5 - local_238) * dVar26 +
                       (dVar37 - dVar4) * dVar24 + (dVar6 - dVar25) * dVar29;
              if (dVar38 < 0.0) {
                uVar31 = (undefined4)DAT_149931e80;
                uVar32 = DAT_149931e80._4_4_;
                dVar23 = (double)((ulonglong)dVar26 ^ uVar14);
                dVar27 = (double)((ulonglong)dVar29 ^ uVar14);
              }
              else {
                uVar31 = 0;
                uVar32 = 0x80000000;
                dVar27 = dVar29;
                dVar23 = dVar26;
              }
              dVar26 = dVar26 * dVar26 + dVar24 * dVar24 + dVar29 * dVar29;
              uVar21 = -(ulonglong)(dVar38 < 0.0);
              dVar24 = (double)(~uVar21 & (ulonglong)dVar24 |
                               ((ulonglong)dVar24 ^ CONCAT44(uVar32,uVar31)) & uVar21);
              dVar5 = (local_290 - dVar5) * dVar23 +
                      (local_2a0 - dVar37) * dVar24 + (local_298 - dVar6) * dVar27;
              dVar29 = (double)((ulonglong)uVar47 << 0x20);
              if (dVar26 * 1.79769313486232e+308 < ABS(dVar5) * dVar5) goto LAB_146d5583d;
              uVar33 = 0;
              uVar34 = 0;
              if (ABS((double)CONCAT44(uVar47,uVar22)) * (double)CONCAT44(uVar47,uVar22) * dVar26 <
                  ABS(dVar5) * dVar5) {
                local_2e8 = 1.0 / SQRT(dVar26);
                dVar29 = dVar5 * local_2e8;
                uVar22 = SUB84(dVar29,0);
                local_2f8 = dVar23 * local_2e8;
                local_2f0 = dVar27 * local_2e8;
                local_2e8 = local_2e8 * dVar24;
                iVar9 = (int)lVar12;
                uVar19 = local_2c0 & 0xffffffff;
              }
            }
          }
          lVar12 = lVar12 + 1;
          uVar47 = (uint)((ulonglong)dVar29 >> 0x20);
        } while (lVar12 != 3);
        dVar17 = *(double *)(lVar11 + 0x58);
        uVar39 = (undefined4)local_278;
        uVar40 = local_278._4_4_;
        uVar43 = (undefined4)local_288;
        uVar44 = local_288._4_4_;
        dVar28 = local_268;
      }
      else {
        uVar19 = (ulonglong)local_2fc;
        dVar17 = local_2b8;
        iVar9 = local_308._0_4_;
      }
      uVar14 = (ulonglong)(iVar10 + 1);
      pdVar16 = local_2c8;
    } while (dVar17 != 0.0);
  }
  uVar31 = (undefined4)((ulonglong)dVar29 >> 0x20);
  if (((((double)CONCAT44(uVar36,uVar35) == -10000000000.0) &&
       (!NAN((double)CONCAT44(uVar36,uVar35)))) ||
      (dVar17 = (double)CONCAT44(uVar36,uVar35) + 0.01, dVar17 <= local_2e0)) ||
     (dVar17 < (double)CONCAT44(uVar31,uVar22) || dVar17 == (double)CONCAT44(uVar31,uVar22))) {
    if (((local_2e0 != -10000000000.0) || (NAN(local_2e0))) &&
       ((double)CONCAT44(uVar31,uVar22) <= local_2e0 && local_2e0 != (double)CONCAT44(uVar31,uVar22)
       )) {
      dVar17 = pdVar16[local_2a8 * 3];
      dVar4 = pdVar16[local_2a8 * 3 + 1];
      dVar29 = pdVar16[local_2a8 * 3 + 2];
      uVar35 = SUB84(local_2e0,0);
      uVar36 = (undefined4)((ulonglong)local_2e0 >> 0x20);
      *(double *)(local_2d0 + 0x20) = dVar17 - dVar28 * local_2e0;
      *(double *)(local_2d0 + 0x28) = dVar4 - (double)CONCAT44(uVar40,uVar39) * local_2e0;
      *(double *)(local_2d0 + 0x30) = dVar29 - (double)CONCAT44(uVar44,uVar43) * local_2e0;
      *(double *)(local_2d0 + 0x38) = dVar17;
      *(double *)(local_2d0 + 0x40) = dVar4;
      *(double *)(local_2d0 + 0x48) = dVar29;
      *(double *)(local_2d0 + 0x50) = -dVar28;
      *(ulonglong *)(local_2d0 + 0x58) = CONCAT44(uVar40,uVar39) ^ 0x8000000000000000;
      *(ulonglong *)(local_2d0 + 0x60) = CONCAT44(uVar44,uVar43) ^ 0x8000000000000000;
      goto LAB_146d556a9;
    }
    if (((double)CONCAT44(uVar31,uVar22) == -10000000000.0) &&
       (!NAN((double)CONCAT44(uVar31,uVar22)))) goto LAB_146d5583d;
    if (*(longlong *)(lVar11 + 0x58) == 0) {
      lVar12 = -1;
      lVar13 = -1;
    }
    else {
      local_160 = (double)uVar19;
      iVar10 = FUN_14571894e(lVar11 + 0x58,&local_160);
      lVar12 = (longlong)iVar10;
      local_160 = (double)CONCAT44(1,(int)uVar19);
      iVar10 = FUN_14571894e(lVar11 + 0x58,&local_160);
      lVar13 = (longlong)iVar10;
    }
    dVar29 = local_2e8;
    dVar4 = local_2f0;
    dVar17 = local_2f8;
    lVar11 = *(longlong *)(lVar11 + 0x30);
    local_150 = (double)*(float *)(lVar11 + 8 + lVar12 * 0xc);
    local_158 = (double)*(float *)(lVar11 + 4 + lVar12 * 0xc);
    local_160 = (double)*(float *)(lVar11 + lVar12 * 0xc);
    local_168 = (double)*(float *)(lVar11 + 8 + lVar13 * 0xc);
    local_170 = (double)*(float *)(lVar11 + 4 + lVar13 * 0xc);
    local_178 = (double)*(float *)(lVar11 + lVar13 * 0xc);
    pdVar20 = pdVar16 + (ulonglong)(iVar9 + 1) * 3;
    if (iVar9 == 2) {
      pdVar20 = pdVar16;
    }
    local_318 = 0x3f1a36e2e0000000;
    local_320 = &local_1b8;
    local_328 = &local_1a0;
    local_330 = local_188;
    local_338 = &local_180;
    FUN_1404b842e(&local_160,&local_178,pdVar16 + (longlong)iVar9 * 3,pdVar20);
    *(undefined8 *)(local_2d0 + 0x30) = local_190;
    *(undefined8 *)(local_2d0 + 0x20) = local_1a0;
    *(undefined8 *)(local_2d0 + 0x28) = uStack_198;
    *(undefined4 *)(local_2d0 + 0x38) = local_1b8;
    *(undefined4 *)(local_2d0 + 0x3c) = uStack_1b4;
    *(undefined4 *)(local_2d0 + 0x40) = uStack_1b0;
    *(undefined4 *)(local_2d0 + 0x44) = uStack_1ac;
    *(undefined8 *)(local_2d0 + 0x48) = local_1a8;
    *(double *)(local_2d0 + 0x50) = dVar29;
    *(double *)(local_2d0 + 0x58) = dVar4;
    *(double *)(local_2d0 + 0x60) = dVar17;
    *(ulonglong *)(local_2d0 + 0x68) = CONCAT44(uVar31,uVar22);
  }
  else {
    lVar13 = (longlong)(int)uVar8;
    dVar17 = *param_3;
    dVar4 = param_3[1];
    dVar29 = param_3[2];
    lVar11 = *(longlong *)(lVar11 + 0x30);
    dVar25 = (double)*(float *)(lVar11 + 8 + lVar13 * 0xc);
    dVar28 = (double)*(float *)(lVar11 + 4 + lVar13 * 0xc);
    dVar30 = (double)*(float *)(lVar11 + lVar13 * 0xc);
    *(double *)(local_2d0 + 0x20) = dVar30;
    *(double *)(local_2d0 + 0x28) = dVar28;
    *(double *)(local_2d0 + 0x30) = dVar25;
    *(double *)(local_2d0 + 0x38) = dVar30 - (double)CONCAT44(uVar36,uVar35) * dVar17;
    *(double *)(local_2d0 + 0x40) = dVar28 - (double)CONCAT44(uVar36,uVar35) * dVar4;
    *(double *)(local_2d0 + 0x48) = dVar25 - (double)CONCAT44(uVar36,uVar35) * dVar29;
    *(double *)(local_2d0 + 0x50) = dVar17;
    *(double *)(local_2d0 + 0x58) = dVar4;
    *(double *)(local_2d0 + 0x60) = dVar29;
LAB_146d556a9:
    *(ulonglong *)(local_2d0 + 0x68) = CONCAT44(uVar36,uVar35);
  }
  uVar18 = CONCAT71((int7)(uVar19 >> 8),1);
LAB_146d5583f:
  if (local_118 == '\0') {
    local_118 = '\x01';
    *(int *)(local_130 + 0x20) = *(int *)(local_130 + 0x20) + -1;
    if (local_120 != *(longlong *)(local_130 + 0x10)) {
      FUN_14004673c();
    }
    *(double **)local_130 = local_128;
    *(undefined8 *)(local_130 + 0x18) = local_110;
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 146d55931 FUN_146d55931 body=855 status=ok
// SIG undefined FUN_146d55931(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d55931(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  double *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar1 = (undefined4 *)(double)_DAT_14c75f068;
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_78 = param_2;
  local_70 = param_1;
  if (DAT_14c75f070 == '\x01') {
    local_80 = 1.79769313486232e+308;
    local_e8 = (param_2[2] + param_2[5] + param_2[8]) / 3.0;
    local_f0 = (param_2[1] + param_2[4] + param_2[7]) / 3.0;
    local_f8 = (*param_2 + param_2[3] + param_2[6]) / 3.0;
    FUN_146d55c89(&local_e0,&local_70,&local_78);
    local_138 = (undefined4 *)&local_c8;
    local_140 = &local_b0;
    local_148 = &local_98;
    local_130 = puVar1;
    iVar3 = FUN_146d55df6(&local_70,&local_78,&local_e0,&local_80);
    if (iVar3 == 2) {
      uVar4 = FUN_146d563f5(param_1,param_2,param_3,param_4);
      goto LAB_146d55c40;
    }
    if (1.79769313486232e+308 <= ABS(local_80) * local_80) goto LAB_146d55c3e;
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(ulonglong *)(param_4 + 0x50) =
         CONCAT44(local_c8._4_4_,(undefined4)local_c8) ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x60) = CONCAT44(uStack_b4,local_b8) ^ 0x8000000000000000;
    *(double *)(param_4 + 0x68) = local_80;
  }
  else {
    local_110 = (double)DAT_14c75f06c;
    local_128 = &local_80;
    local_80 = 0.0;
    local_138 = &local_fc;
    local_fc = 0xffffffff;
    local_130 = &local_100;
    local_100 = 0xffffffff;
    local_120 = &local_e0;
    local_e0 = 0x3ff0000000000000;
    local_d8 = 0;
    uStack_d0 = 0;
    local_140 = &local_c8;
    local_148 = &local_b0;
    local_118 = puVar1;
    cVar2 = FUN_146d0609b(&local_70,&local_78,&local_108,&local_98);
    if ((cVar2 == '\0') || (1.79769313486232e+308 <= local_108 * local_108)) {
LAB_146d55c3e:
      uVar4 = 0;
      goto LAB_146d55c40;
    }
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(undefined4 *)(param_4 + 0x50) = (undefined4)local_c8;
    *(uint *)(param_4 + 0x54) = local_c8._4_4_ ^ 0x80000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(undefined4 *)(param_4 + 0x60) = local_b8;
    *(uint *)(param_4 + 100) = uStack_b4 ^ 0x80000000;
    *(int *)(param_4 + 0x68) = SUB84(local_108,0);
    *(uint *)(param_4 + 0x6c) = (uint)((ulonglong)local_108 >> 0x20) ^ 0x80000000;
  }
  uVar4 = 1;
LAB_146d55c40:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d55c89 FUN_146d55c89 body=364 status=ok
// SIG undefined FUN_146d55c89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d55c89(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    if ((param_4[1] == 0.0) && (!NAN(param_4[1]))) {
      if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) {
        *param_4 = 1.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
    }
  }
  local_3c = 0xffffffff;
  local_68 = param_4[2];
  local_78 = *param_4;
  local_70 = param_4[1];
  local_c8 = *param_2 + 0x20;
  local_c0 = (undefined4 *)0x0;
  local_b8 = &local_3c;
  FUN_144a94486(*(undefined8 *)(*param_2 + 0x88),&local_58,&local_78,param_2[1]);
  local_a8 = *(uint *)param_4 ^ (uint)DAT_149931e80;
  uStack_a4 = *(uint *)((longlong)param_4 + 4) ^ DAT_149931e80._4_4_;
  uStack_a0 = *(uint *)(param_4 + 1) ^ DAT_149931e80._8_4_;
  uStack_9c = *(uint *)((longlong)param_4 + 0xc) ^ DAT_149931e80._12_4_;
  local_98 = CONCAT44((uint)((ulonglong)param_4[2] >> 0x20) ^ DAT_149931e80._4_4_,
                      SUB84(param_4[2],0) ^ (uint)DAT_149931e80);
  local_c8 = 0;
  local_c0 = &local_3c;
  FUN_1404b8faa(param_3,&local_90,&local_a8,0);
  *param_1 = local_58 - local_90;
  param_1[1] = local_50 - local_88;
  param_1[2] = local_48 - local_80;
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d55df6 FUN_146d55df6 body=1534 status=ok
// SIG undefined FUN_146d55df6(void)

/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_146d55df6(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_318 [32];
  double *local_2f8;
  undefined4 *local_2f0;
  undefined4 *local_2e8;
  double local_2d8;
  double *local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248 [4];
  undefined8 local_228;
  undefined8 uStack_220;
  double adStack_218 [10];
  double local_1c8 [12];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_248[2] = -1.0;
  local_248[3] = -1.0;
  local_248[0] = -1.0;
  local_248[1] = -1.0;
  local_2d8 = (double)param_1[1];
  dVar1 = *param_3;
  uVar15 = SUB84(dVar1,0);
  uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[1];
  uVar11 = SUB84(dVar2,0);
  uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_3[2];
  uVar13 = SUB84(dVar3,0);
  uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar1 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  local_24c = 0xffffffff;
  local_250 = 0xffffffff;
  uVar4 = 2;
  if (param_8 < dVar1) {
    dVar2 = 0.0;
    uVar8 = 0;
    local_2d0 = param_4;
    do {
      local_280._8_4_ = uVar11;
      local_280._0_8_ = -(double)CONCAT44(uVar16,uVar15);
      local_280._12_4_ = (int)((ulonglong)-(double)CONCAT44(uVar12,uVar11) >> 0x20);
      local_2f8 = (double *)(*param_1 + 0x20);
      local_2e8 = &local_24c;
      local_2f0 = (undefined4 *)0x0;
      local_270 = -(double)CONCAT44(uVar14,uVar13);
      FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_268,local_280,local_2d8);
      local_2b0 = CONCAT44(uVar16,uVar15);
      local_2a8 = CONCAT44(uVar12,uVar11);
      local_2a0 = CONCAT44(uVar14,uVar13);
      local_2f0 = &local_250;
      local_2f8 = (double *)0x0;
      FUN_1404b8faa(param_2,&local_298,&local_2b0,0);
      dVar9 = dStack_260 - (double)CONCAT44(uStack_28c,uStack_290);
      dVar10 = local_268 - (double)CONCAT44(uStack_294,local_298);
      dVar3 = ((double)CONCAT44(uVar14,uVar13) * (local_258 - local_288) +
              (double)CONCAT44(uVar16,uVar15) * dVar10 + (double)CONCAT44(uVar12,uVar11) * dVar9) /
              dVar1;
      if (dVar2 <= dVar3) {
        dVar2 = dVar3;
      }
      if ((dVar1 - dVar2 < param_8) || (0xf < uVar8)) {
        if ((local_108 & 0xffffffff) == 0) {
          param_5[2] = local_258;
          *param_5 = local_268;
          param_5[1] = dStack_260;
          param_6[2] = local_288;
          *param_6 = (double)CONCAT44(uStack_294,local_298);
          param_6[1] = (double)CONCAT44(uStack_28c,uStack_290);
        }
        else {
          *param_5 = 0.0;
          param_5[1] = 0.0;
          param_5[2] = 0.0;
          param_6[2] = 0.0;
          *param_6 = 0.0;
          param_6[1] = 0.0;
          if (0 < (int)local_108) {
            uVar7 = 0;
            do {
              lVar5 = (longlong)*(int *)((longlong)&local_108 + uVar7 * 4 + 4);
              dVar2 = local_248[lVar5];
              dVar3 = local_1c8[lVar5 * 3 + 1];
              dVar9 = local_1c8[lVar5 * 3 + 2];
              *param_5 = local_1c8[lVar5 * 3] * dVar2 + *param_5;
              param_5[1] = dVar3 * dVar2 + param_5[1];
              param_5[2] = dVar9 * dVar2 + param_5[2];
              dVar3 = (double)(&uStack_220)[lVar5 * 3];
              dVar9 = adStack_218[lVar5 * 3];
              *param_6 = *(double *)((longlong)&local_228 + lVar5 * 0x18) * dVar2 + *param_6;
              param_6[1] = dVar3 * dVar2 + param_6[1];
              param_6[2] = dVar2 * dVar9 + param_6[2];
              uVar7 = uVar7 + 1;
            } while ((local_108 & 0xffffffff) != uVar7);
          }
        }
        dVar3 = -(double)CONCAT44(uVar14,uVar13) / dVar1;
        dVar2 = -(double)CONCAT44(uVar12,uVar11) / dVar1;
        dVar9 = -(double)CONCAT44(uVar16,uVar15) / dVar1;
        *local_2d0 = dVar1 - (local_2d8 + 0.0);
        *param_5 = local_2d8 * dVar9 + *param_5;
        param_5[1] = local_2d8 * dVar2 + param_5[1];
        param_5[2] = local_2d8 * dVar3 + param_5[2];
        *param_6 = *param_6 - dVar9 * 0.0;
        param_6[1] = param_6[1] - dVar2 * 0.0;
        param_6[2] = param_6[2] - dVar3 * 0.0;
        *param_7 = dVar9;
        param_7[1] = dVar2;
        param_7[2] = dVar3;
        uVar4 = *local_2d0 < 0.0;
        goto LAB_146d5636f;
      }
      uVar8 = uVar8 + 1;
      lVar5 = (longlong)(int)local_108;
      *(int *)((longlong)&local_108 + lVar5 * 4 + 4) = (int)local_108;
      iVar6 = (int)local_108 + 1;
      local_168[lVar5 * 3] = dVar10;
      local_168[lVar5 * 3 + 1] = dVar9;
      local_168[lVar5 * 3 + 2] = local_258 - local_288;
      local_1c8[lVar5 * 3] = local_268;
      local_1c8[lVar5 * 3 + 1] = dStack_260;
      local_1c8[lVar5 * 3 + 2] = local_258;
      *(undefined4 *)((longlong)&local_228 + lVar5 * 0x18) = local_298;
      *(undefined4 *)((longlong)&local_228 + lVar5 * 0x18 + 4U) = uStack_294;
      *(undefined4 *)(&uStack_220 + lVar5 * 3) = uStack_290;
      *(undefined4 *)((longlong)adStack_218 + lVar5 * 0x18 + -4) = uStack_28c;
      adStack_218[lVar5 * 3] = local_288;
      local_108 = CONCAT44(local_108._4_4_,iVar6);
      local_2f0 = (undefined4 *)&local_228;
      local_2f8 = local_1c8;
      FUN_1449162b1(&local_2c8,local_168,&local_108,local_248);
      uVar15 = SUB84(local_2c8,0);
      uVar16 = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uVar11 = SUB84(local_2c0,0);
      uVar12 = (undefined4)((ulonglong)local_2c0 >> 0x20);
      uVar13 = SUB84(local_2b8,0);
      uVar14 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      dVar1 = SQRT(local_2b8 * local_2b8 + local_2c8 * local_2c8 + local_2c0 * local_2c0);
    } while (param_8 < dVar1);
    uVar4 = 2;
  }
LAB_146d5636f:
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146d563f5 FUN_146d563f5 body=4219 status=ok
// SIG undefined FUN_146d563f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d563f5(longlong param_1,double *param_2,double *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  longlong lVar21;
  uint uVar22;
  double *pdVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  uint uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_3b8 [32];
  double *local_398;
  int *local_390;
  double *local_388;
  longlong *local_380;
  undefined8 local_378;
  double local_370;
  double local_368;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  longlong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_330;
  double *local_328;
  ulonglong local_320;
  longlong local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined1 local_2f8 [16];
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  int local_1d8 [2];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 **local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 local_140;
  longlong local_138;
  char local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_2d0 = (param_2[2] + param_2[5] + param_2[8]) / 3.0;
  local_2e0 = (param_2[1] + param_2[4] + param_2[7]) / 3.0;
  local_2d8 = (*param_2 + param_2[3] + param_2[6]) / 3.0;
  local_1b0 = FUN_140036a08;
  local_1a8 = &local_148;
  local_120 = local_2d8;
  local_118 = local_2e0;
  local_110 = local_2d0;
  lVar17 = FUN_144a773aa(&local_1b0,&DAT_14c7585d0);
  local_148 = (undefined8 *)(lVar17 + 0x10);
  local_140 = *(undefined8 *)(lVar17 + 0x10);
  local_138 = *(longlong *)(lVar17 + 0x20);
  local_130 = '\0';
  local_128 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined8 ***)(lVar17 + 0x28) = &local_148;
  *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
  local_158 = 0;
  uStack_150 = 0;
  FUN_1404b1a60(&local_158,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x38));
  local_380 = &local_168;
  local_318 = local_158;
  local_168 = local_158;
  local_160 = (undefined4)uStack_150;
  local_388 = (double *)&local_180;
  local_390 = (int *)((longlong)&local_180 + 4);
  local_398 = &local_178;
  local_328 = param_3;
  FUN_146d4fa3d(param_1,param_3,&local_120,&local_170);
  uVar16 = SUB84(local_170,0);
  uVar20 = (undefined4)((ulonglong)local_170 >> 0x20);
  uVar26 = 0;
  if (ABS(local_170) * local_170 <= 1.79769313486232e+308) {
    uVar15 = 0;
    uVar35 = 0;
    if (0.0 <= local_178) {
      lVar17 = *(longlong *)(param_1 + 0x88);
      local_348 = -10000000000.0;
      uStack_340 = 0;
      local_350 = param_4;
      if (*(int *)(lVar17 + 0x28) < 1) {
        local_330 = -1;
        uVar36 = 0;
        uVar37 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar38 = 0;
        uVar41 = 0;
        uStack_290 = 0;
        uStack_28c = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar48 = 0;
        uVar49 = 0;
        local_368 = -10000000000.0;
      }
      else {
        uVar48 = 0;
        uVar49 = 0;
        iVar24 = 0;
        iVar14 = -1;
        local_368 = -10000000000.0;
        uVar42 = 0;
        uVar43 = 0;
        auVar47 = ZEXT816(0);
        uVar39 = 0;
        uVar40 = 0;
        uVar36 = 0;
        uVar37 = 0;
        do {
          FUN_1404c21ca(param_1,iVar24,&local_1b0,local_108);
          local_388 = &local_1d0;
          local_390 = (int *)&local_208;
          local_398 = &local_1f0;
          FUN_146d4f89c(param_2,&local_1b0,local_108,&local_1c8);
          if ((ABS(local_1c8) * local_1c8 <= 1.79769313486232e+308) && (local_368 < local_1c8)) {
            auVar47._8_8_ = 0;
            auVar47._0_8_ = local_1b0;
            uVar42 = SUB84(local_1a8,0);
            uVar43 = (uint)((ulonglong)local_1a8 >> 0x20);
            uVar48 = SUB84(local_1a0,0);
            uVar49 = (undefined4)((ulonglong)local_1a0 >> 0x20);
            uVar15 = SUB84(local_108[0],0);
            uVar35 = (undefined4)((ulonglong)local_108[0] >> 0x20);
            uVar36 = SUB84(local_108[1],0);
            uVar37 = (undefined4)((ulonglong)local_108[1] >> 0x20);
            uVar39 = SUB84(local_108[2],0);
            uVar40 = (undefined4)((ulonglong)local_108[2] >> 0x20);
            local_368 = local_1c8;
            iVar14 = (int)local_208;
          }
          if (1.79769313486232e+308 < ABS(local_1c8) * local_1c8) goto LAB_146d5737d;
          iVar24 = iVar24 + 1;
          lVar17 = *(longlong *)(param_1 + 0x88);
        } while (iVar24 < *(int *)(lVar17 + 0x28));
        local_330 = (longlong)iVar14;
        uVar38 = auVar47._0_4_;
        uVar41 = auVar47._4_4_;
        uStack_290 = auVar47._8_4_;
        uStack_28c = auVar47._12_4_;
      }
      local_108[1] = (param_2[2] - (double)CONCAT44(uVar40,uVar39)) *
                     (double)CONCAT44(uVar49,uVar48) +
                     (*param_2 - (double)CONCAT44(uVar35,uVar15)) * (double)CONCAT44(uVar41,uVar38)
                     + (param_2[1] - (double)CONCAT44(uVar37,uVar36)) *
                       (double)CONCAT44(uVar43,uVar42);
      local_108[2] = (param_2[5] - (double)CONCAT44(uVar40,uVar39)) *
                     (double)CONCAT44(uVar49,uVar48) +
                     (param_2[3] - (double)CONCAT44(uVar35,uVar15)) *
                     (double)CONCAT44(uVar41,uVar38) +
                     (param_2[4] - (double)CONCAT44(uVar37,uVar36)) *
                     (double)CONCAT44(uVar43,uVar42);
      local_268 = (double)CONCAT44(uVar49,uVar48);
      uStack_260 = 0;
      dVar30 = (param_2[8] - (double)CONCAT44(uVar40,uVar39)) * (double)CONCAT44(uVar49,uVar48) +
               (param_2[6] - (double)CONCAT44(uVar35,uVar15)) * (double)CONCAT44(uVar41,uVar38) +
               (param_2[7] - (double)CONCAT44(uVar37,uVar36)) * (double)CONCAT44(uVar43,uVar42);
      local_108[0] = dVar30;
      if (local_108[1] <= dVar30) {
        local_108[0] = local_108[1];
      }
      if (local_108[2] <= local_108[1]) {
        local_108[1] = local_108[2];
      }
      if (dVar30 <= local_108[2]) {
        local_108[2] = dVar30;
      }
      uVar28 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
      uVar27 = ~uVar28 & ((&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)] ^ 0x8000000000000000)
               | uVar28 & (&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)];
      uVar28 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
      local_278 = (double)(~uVar28 & (uVar27 ^ 0x8000000000000000) | uVar28 & uVar27);
      uStack_270 = 0;
      local_360 = (uint)(local_278 < 0.0);
      local_35c = (uint)(local_278 >= 0.0);
      local_370 = (double)CONCAT44(local_370._4_4_,0xffffffff);
      uVar27 = 0;
      local_300 = 0.0;
      local_308 = 0.0;
      local_310 = 0.0;
      uVar28 = 0xffffffff;
      local_288 = local_170;
      uStack_280 = 0;
      local_2a8 = CONCAT44(uVar43,uVar42);
      uStack_2a0 = 0;
      local_298 = uVar38;
      uStack_294 = uVar41;
      while( true ) {
        lVar19 = *(longlong *)(lVar17 + 0x58);
        iVar14 = 0;
        if ((lVar19 != 0) && ((byte)(*(char *)(lVar17 + 0x60) - 1U) < 3)) {
          iVar14 = *(int *)(lVar19 + 0x38);
        }
        lVar1 = lVar17 + 0x58;
        uVar22 = (uint)uVar27;
        uVar25 = (uint)uVar28;
        if (iVar14 <= (int)uVar22) break;
        if (local_278 < 0.0) {
          iVar14 = 0;
          if ((lVar19 != 0) && ((byte)(*(char *)(lVar17 + 0x60) - 1U) < 3)) {
            iVar14 = *(int *)(lVar19 + 0x38);
          }
          uVar22 = ~uVar22 + iVar14;
        }
        local_358 = uVar22;
        local_354 = uVar25;
        local_320 = uVar27;
        if (lVar19 == 0) {
          iVar14 = -1;
          iVar24 = -1;
        }
        else {
          local_1b0 = (code *)CONCAT44(local_360,uVar22);
          iVar14 = FUN_14571894e(lVar1,&local_1b0);
          local_1b0 = (code *)CONCAT44(local_35c,uVar22);
          iVar24 = FUN_14571894e(lVar1,&local_1b0);
        }
        uVar22 = local_358;
        lVar21 = (longlong)iVar14;
        dVar30 = *(double *)(local_318 + lVar21 * 8);
        lVar18 = (longlong)iVar24;
        if ((ABS(dVar30) * dVar30 <= 1.79769313486232e+308) ||
           (dVar30 = *(double *)(local_318 + lVar18 * 8),
           ABS(dVar30) * dVar30 <= 1.79769313486232e+308)) {
          lVar17 = *(longlong *)(lVar17 + 0x30);
          fVar2 = *(float *)(lVar17 + 8 + lVar21 * 0xc);
          fVar3 = *(float *)(lVar17 + 4 + lVar21 * 0xc);
          fVar4 = *(float *)(lVar17 + lVar21 * 0xc);
          dVar30 = *(double *)(param_1 + 0x30);
          dVar7 = *(double *)(param_1 + 0x20);
          dVar32 = *(double *)(param_1 + 0x28);
          fVar5 = *(float *)(lVar17 + 8 + lVar18 * 0xc);
          fVar6 = *(float *)(lVar17 + 4 + lVar18 * 0xc);
          local_2f8._8_8_ = 0;
          local_2f8._0_8_ = (double)*(float *)(lVar17 + lVar18 * 0xc);
          uVar16 = 0xffffffff;
          if (lVar19 == 0) {
            uVar15 = 0xffffffff;
            uVar20 = local_370._0_4_;
          }
          else {
            local_1b0 = (code *)(ulonglong)local_358;
            uVar15 = FUN_1457189ec(lVar1,&local_1b0,&local_1c8);
            uVar20 = local_370._0_4_;
            if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x58) != 0) {
              local_1b0 = (code *)CONCAT44(1,uVar22);
              uVar16 = FUN_1457189ec(*(longlong *)(param_1 + 0x88) + 0x58,&local_1b0,&local_1c8);
            }
          }
          uVar42 = 0x7fffffff;
          uVar41 = 0xffffffff;
          dVar33 = (double)fVar2 * dVar30;
          dVar44 = (double)fVar3 * dVar32;
          dVar34 = (double)fVar4 * dVar7;
          dVar31 = local_2f8._0_8_;
          uVar28 = local_2f8._8_8_;
          uVar35 = local_2f8._8_4_;
          uVar38 = local_2f8._12_4_;
          FUN_1404c2340(param_1,&local_1b0,uVar15);
          dVar13 = local_188;
          local_370 = local_198;
          local_2b0 = local_190;
          FUN_1404c2340(param_1,&local_1b0,uVar16);
          uVar27 = DAT_149931e80;
          local_218 = (double)fVar5 * dVar30 - dVar33;
          local_228 = (double)fVar6 * dVar32 - dVar44;
          dVar30 = dVar31 * dVar7 - dVar34;
          uStack_220 = 0;
          local_238._8_4_ = DAT_149931e80._8_4_;
          local_238._0_8_ = (ulonglong)local_228 ^ uVar27;
          local_238._12_4_ = DAT_149931e80._12_4_;
          local_2f8._8_4_ = uVar35;
          local_2f8._0_8_ = dVar30;
          local_2f8._12_4_ = uVar38;
          uVar28 = uVar28 ^ DAT_149931e80._8_8_;
          local_248._8_4_ = (int)uVar28;
          local_248._0_8_ = (ulonglong)dVar30 ^ uVar27;
          local_248._12_4_ = (int)(uVar28 >> 0x20);
          uStack_210 = 0;
          local_258._8_4_ = DAT_149931e80._8_4_;
          local_258._0_8_ = (ulonglong)local_218 ^ uVar27;
          local_258._12_4_ = DAT_149931e80._12_4_;
          lVar17 = 0;
          uVar28 = (ulonglong)local_354;
          iVar14 = (int)local_320;
          do {
            local_2c8 = dVar34;
            local_2c0 = dVar44;
            local_2b8 = dVar33;
            if ((double)((ulonglong)local_108[lVar17] & CONCAT44(uVar42,uVar41)) * local_108[lVar17]
                <= 1.79769313486232e+308) {
              pdVar23 = param_2 + lVar17 * 3 + 3;
              dVar7 = pdVar23[-1];
              dVar32 = pdVar23[-3];
              dVar31 = pdVar23[-2];
              if (lVar17 == 2) {
                pdVar23 = param_2;
              }
              dVar46 = pdVar23[2] - dVar7;
              dVar8 = pdVar23[1] - dVar31;
              dVar45 = *pdVar23 - dVar32;
              dVar10 = local_188 * dVar46 + local_198 * dVar45 + local_190 * dVar8;
              if (((dVar13 * dVar46 + local_370 * dVar45 + local_2b0 * dVar8) * dVar10 <
                   -0.009999999776482582) &&
                 (0.009999999776482582 <
                  dVar10 * (((double)((ulonglong)*local_328 ^ uVar27) * dVar30 -
                            local_328[1] * local_228) - local_328[2] * local_218))) {
                dVar11 = dVar30 * dVar8 + dVar45 * (double)((ulonglong)local_228 ^ uVar27);
                dVar10 = dVar46 * (double)((ulonglong)dVar30 ^ uVar27) + local_218 * dVar45;
                dVar8 = dVar8 * (double)((ulonglong)local_218 ^ uVar27) + local_228 * dVar46;
                dVar46 = (dVar7 - local_2d0) * dVar11 +
                         (dVar32 - local_2d8) * dVar8 + (dVar31 - local_2e0) * dVar10;
                if (dVar46 < 0.0) {
                  uVar16 = (undefined4)DAT_149931e80;
                  uVar15 = DAT_149931e80._4_4_;
                  dVar45 = (double)((ulonglong)dVar11 ^ uVar27);
                  dVar12 = (double)((ulonglong)dVar10 ^ uVar27);
                }
                else {
                  uVar16 = 0;
                  uVar15 = 0x80000000;
                  dVar45 = dVar11;
                  dVar12 = dVar10;
                }
                dVar10 = dVar11 * dVar11 + dVar8 * dVar8 + dVar10 * dVar10;
                uVar29 = -(ulonglong)(dVar46 < 0.0);
                dVar8 = (double)(~uVar29 & (ulonglong)dVar8 |
                                ((ulonglong)dVar8 ^ CONCAT44(uVar15,uVar16)) & uVar29);
                dVar7 = (dVar33 - dVar7) * dVar45 +
                        (dVar34 - dVar32) * dVar8 + (dVar44 - dVar31) * dVar12;
                uVar41 = (undefined4)DAT_149931180;
                uVar42 = DAT_149931180._4_4_;
                dVar32 = (double)((ulonglong)dVar7 & DAT_149931180) * dVar7;
                if (dVar10 * 1.79769313486232e+308 < dVar32) goto LAB_146d5737d;
                if ((double)((ulonglong)local_348 & DAT_149931180) * local_348 * dVar10 < dVar32) {
                  local_300 = 1.0 / SQRT(dVar10);
                  local_348 = dVar7 * local_300;
                  local_310 = dVar45 * local_300;
                  local_308 = dVar12 * local_300;
                  local_300 = local_300 * dVar8;
                  uVar20 = (undefined4)lVar17;
                  uVar28 = (ulonglong)uVar22;
                  uStack_340 = 0;
                }
              }
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 != 3);
          local_370 = (double)CONCAT44(local_370._4_4_,uVar20);
          lVar17 = *(longlong *)(param_1 + 0x88);
          uVar38 = local_298;
          uVar41 = uStack_294;
          uVar42 = (undefined4)local_2a8;
          uVar43 = local_2a8._4_4_;
          uVar16 = (undefined4)local_288;
          uVar20 = local_288._4_4_;
        }
        else {
          uVar28 = (ulonglong)local_354;
          iVar14 = (int)local_320;
        }
        uVar27 = (ulonglong)(iVar14 + 1);
      }
      if (((((double)CONCAT44(uVar20,uVar16) == -10000000000.0) &&
           (!NAN((double)CONCAT44(uVar20,uVar16)))) ||
          (dVar30 = (double)CONCAT44(uVar20,uVar16) + 0.01, dVar30 <= local_368)) ||
         (dVar30 <= local_348)) {
        if (((local_368 == -10000000000.0) && (!NAN(local_368))) || (local_368 <= local_348)) {
          if ((local_348 == -10000000000.0) && (!NAN(local_348))) {
LAB_146d5737d:
            uVar26 = 0;
            goto LAB_146d5737f;
          }
          if (lVar19 == 0) {
            lVar18 = -1;
            lVar19 = -1;
          }
          else {
            local_1b0 = (code *)CONCAT44(local_360,uVar25);
            iVar14 = FUN_14571894e(lVar1,&local_1b0);
            lVar18 = (longlong)iVar14;
            local_1b0 = (code *)CONCAT44(local_35c,uVar25);
            iVar14 = FUN_14571894e(lVar1,&local_1b0);
            lVar19 = (longlong)iVar14;
          }
          lVar17 = *(longlong *)(lVar17 + 0x30);
          local_1a0 = (double)*(float *)(lVar17 + 8 + lVar18 * 0xc) * *(double *)(param_1 + 0x30);
          local_1a8 = (undefined8 **)
                      ((double)*(float *)(lVar17 + 4 + lVar18 * 0xc) * *(double *)(param_1 + 0x28));
          local_1b0 = (code *)((double)*(float *)(lVar17 + lVar18 * 0xc) *
                              *(double *)(param_1 + 0x20));
          local_1b8 = (double)*(float *)(lVar17 + 8 + lVar19 * 0xc) * *(double *)(param_1 + 0x30);
          local_1c0 = (double)*(float *)(lVar17 + 4 + lVar19 * 0xc) * *(double *)(param_1 + 0x28);
          local_1c8 = (double)*(float *)(lVar17 + lVar19 * 0xc) * *(double *)(param_1 + 0x20);
          pdVar23 = param_2 + (ulonglong)(local_370._0_4_ + 1) * 3;
          if (local_370._0_4_ == 2) {
            pdVar23 = param_2;
          }
          local_378 = 0x3f1a36e2e0000000;
          local_380 = &local_208;
          local_388 = &local_1f0;
          local_390 = local_1d8;
          local_398 = &local_1d0;
          FUN_1404b842e(&local_1b0,&local_1c8,param_2 + (longlong)local_370._0_4_ * 3,pdVar23);
          *(undefined8 *)(local_350 + 0x30) = local_1e0;
          *(double *)(local_350 + 0x20) = local_1f0;
          *(undefined8 *)(local_350 + 0x28) = uStack_1e8;
          *(ulonglong *)(local_350 + 0x38) = CONCAT44(local_208._4_4_,(int)local_208);
          *(undefined8 *)(local_350 + 0x40) = uStack_200;
          *(undefined8 *)(local_350 + 0x48) = local_1f8;
          *(double *)(local_350 + 0x50) = local_300;
          *(double *)(local_350 + 0x58) = local_308;
          *(double *)(local_350 + 0x60) = local_310;
          *(undefined4 *)(local_350 + 0x68) = (undefined4)local_348;
          *(undefined4 *)(local_350 + 0x6c) = local_348._4_4_;
        }
        else {
          dVar30 = param_2[local_330 * 3];
          dVar7 = param_2[local_330 * 3 + 1];
          dVar32 = param_2[local_330 * 3 + 2];
          *(double *)(local_350 + 0x20) = dVar30 - (double)CONCAT44(uVar41,uVar38) * local_368;
          *(double *)(local_350 + 0x28) = dVar7 - (double)CONCAT44(uVar43,uVar42) * local_368;
          *(double *)(local_350 + 0x30) = dVar32 - local_268 * local_368;
          *(double *)(local_350 + 0x38) = dVar30;
          *(double *)(local_350 + 0x40) = dVar7;
          *(double *)(local_350 + 0x48) = dVar32;
          auVar9._8_4_ = uVar42;
          auVar9._0_8_ = CONCAT44(uVar41,uVar38) ^ 0x8000000000000000;
          auVar9._12_4_ = uVar43 ^ 0x80000000;
          *(undefined1 (*) [16])(local_350 + 0x50) = auVar9;
          *(double *)(local_350 + 0x60) = -local_268;
          *(double *)(local_350 + 0x68) = local_368;
        }
      }
      else {
        dVar30 = *local_328;
        dVar7 = local_328[1];
        dVar32 = local_328[2];
        lVar19 = (longlong)local_180._4_4_;
        lVar17 = *(longlong *)(lVar17 + 0x30);
        dVar31 = (double)*(float *)(lVar17 + 8 + lVar19 * 0xc) * *(double *)(param_1 + 0x30);
        dVar33 = (double)*(float *)(lVar17 + 4 + lVar19 * 0xc) * *(double *)(param_1 + 0x28);
        dVar34 = (double)*(float *)(lVar17 + lVar19 * 0xc) * *(double *)(param_1 + 0x20);
        *(double *)(local_350 + 0x20) = dVar34;
        *(double *)(local_350 + 0x28) = dVar33;
        *(double *)(local_350 + 0x30) = dVar31;
        *(double *)(local_350 + 0x38) = dVar34 - (double)CONCAT44(uVar20,uVar16) * dVar30;
        *(double *)(local_350 + 0x40) = dVar33 - (double)CONCAT44(uVar20,uVar16) * dVar7;
        *(double *)(local_350 + 0x48) = dVar31 - (double)CONCAT44(uVar20,uVar16) * dVar32;
        *(double *)(local_350 + 0x50) = dVar30;
        *(double *)(local_350 + 0x58) = dVar7;
        *(double *)(local_350 + 0x60) = dVar32;
        *(ulonglong *)(local_350 + 0x68) = CONCAT44(uVar20,uVar16);
      }
      uVar26 = CONCAT71((int7)(uVar28 >> 8),1);
    }
  }
LAB_146d5737f:
  if (local_130 == '\0') {
    local_130 = '\x01';
    *(int *)(local_148 + 4) = *(int *)(local_148 + 4) + -1;
    if (local_138 != local_148[2]) {
      FUN_14004673c();
    }
    *local_148 = local_140;
    local_148[3] = local_128;
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26;
}



// FUNCTION 146d57471 FUN_146d57471 body=855 status=ok
// SIG undefined FUN_146d57471(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146d57471(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  double *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar1 = (undefined4 *)(double)_DAT_14c75f068;
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_78 = param_2;
  local_70 = param_1;
  if (DAT_14c75f070 == '\x01') {
    local_80 = 1.79769313486232e+308;
    local_e8 = (param_2[2] + param_2[5] + param_2[8]) / 3.0;
    local_f0 = (param_2[1] + param_2[4] + param_2[7]) / 3.0;
    local_f8 = (*param_2 + param_2[3] + param_2[6]) / 3.0;
    FUN_146d577c9(&local_e0,&local_70,&local_78);
    local_138 = (undefined4 *)&local_c8;
    local_140 = &local_b0;
    local_148 = &local_98;
    local_130 = puVar1;
    iVar3 = FUN_146d57962(&local_70,&local_78,&local_e0,&local_80);
    if (iVar3 == 2) {
      uVar4 = FUN_146d57f83(param_1,param_2,param_3,param_4);
      goto LAB_146d57780;
    }
    if (1.79769313486232e+308 <= ABS(local_80) * local_80) goto LAB_146d5777e;
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(ulonglong *)(param_4 + 0x50) =
         CONCAT44(local_c8._4_4_,(undefined4)local_c8) ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(ulonglong *)(param_4 + 0x60) = CONCAT44(uStack_b4,local_b8) ^ 0x8000000000000000;
    *(double *)(param_4 + 0x68) = local_80;
  }
  else {
    local_110 = (double)DAT_14c75f06c;
    local_128 = &local_80;
    local_80 = 0.0;
    local_138 = &local_fc;
    local_fc = 0xffffffff;
    local_130 = &local_100;
    local_100 = 0xffffffff;
    local_120 = &local_e0;
    local_e0 = 0x3ff0000000000000;
    local_d8 = 0;
    uStack_d0 = 0;
    local_140 = &local_c8;
    local_148 = &local_b0;
    local_118 = puVar1;
    cVar2 = FUN_146d073d8(&local_70,&local_78,&local_108,&local_98);
    if ((cVar2 == '\0') || (1.79769313486232e+308 <= local_108 * local_108)) {
LAB_146d5777e:
      uVar4 = 0;
      goto LAB_146d57780;
    }
    *(undefined8 *)(param_4 + 0x30) = local_88;
    *(undefined8 *)(param_4 + 0x20) = local_98;
    *(undefined8 *)(param_4 + 0x28) = uStack_90;
    *(undefined8 *)(param_4 + 0x38) = local_b0;
    *(undefined8 *)(param_4 + 0x40) = uStack_a8;
    *(undefined8 *)(param_4 + 0x48) = local_a0;
    *(undefined4 *)(param_4 + 0x50) = (undefined4)local_c8;
    *(uint *)(param_4 + 0x54) = local_c8._4_4_ ^ 0x80000000;
    *(ulonglong *)(param_4 + 0x58) = uStack_c0 ^ 0x8000000000000000;
    *(undefined4 *)(param_4 + 0x60) = local_b8;
    *(uint *)(param_4 + 100) = uStack_b4 ^ 0x80000000;
    *(int *)(param_4 + 0x68) = SUB84(local_108,0);
    *(uint *)(param_4 + 0x6c) = (uint)((ulonglong)local_108 >> 0x20) ^ 0x80000000;
  }
  uVar4 = 1;
LAB_146d57780:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d577c9 FUN_146d577c9 body=408 status=ok
// SIG undefined FUN_146d577c9(void)

double * FUN_146d577c9(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  uint local_70 [4];
  double local_60;
  double local_58 [4];
  double local_38 [3];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_4;
  if ((((local_88 == 0.0) && (!NAN(local_88))) && (param_4[1] == 0.0)) &&
     (((!NAN(param_4[1]) && (param_4[2] == 0.0)) && (!NAN(param_4[2]))))) {
    *param_4 = 1.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    local_88 = 1.0;
  }
  dVar2 = (double)param_2[1];
  local_58[2] = param_4[2];
  local_58[0] = *param_4;
  local_58[1] = param_4[1];
  lVar3 = *param_2;
  lVar5 = 0;
  do {
    pdVar1 = (double *)((longlong)local_58 + lVar5 * 2);
    bVar4 = 0.0 < *pdVar1 || *pdVar1 == 0.0;
    if (bVar4) {
      dVar6 = *(double *)(lVar3 + 0x38 + lVar5 * 2) - dVar2;
    }
    else {
      dVar6 = *(double *)(lVar3 + 0x20 + lVar5 * 2) + dVar2;
    }
    *(double *)((longlong)local_38 + lVar5 * 2) = dVar6;
    *(uint *)((longlong)local_70 + lVar5) = (uint)bVar4;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0xc);
  local_1c = local_70[1] * 2 + local_70[0] + local_70[2] * 4;
  local_90 = &local_1c;
  local_78 = -param_4[2];
  local_88 = -local_88;
  dStack_80 = -param_4[1];
  local_98 = 0;
  FUN_1404b8faa(param_3,local_70,&local_88,0);
  *param_1 = local_38[0] - (double)CONCAT44(local_70[1],local_70[0]);
  param_1[1] = local_38[1] - (double)CONCAT44(local_70[3],local_70[2]);
  param_1[2] = local_38[2] - local_60;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d57962 FUN_146d57962 body=1568 status=ok
// SIG undefined FUN_146d57962(void)

/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_146d57962(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_308 [32];
  double *local_2e8;
  undefined4 *local_2e0;
  double *local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  double local_268 [3];
  undefined4 local_24c;
  double local_248 [4];
  undefined8 local_228;
  undefined8 uStack_220;
  double adStack_218 [10];
  double local_1c8 [12];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_248[2] = -1.0;
  local_248[3] = -1.0;
  local_248[0] = -1.0;
  local_248[1] = -1.0;
  dVar1 = (double)param_1[1];
  dVar2 = *param_3;
  uVar15 = SUB84(dVar2,0);
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_3[1];
  uVar13 = SUB84(dVar3,0);
  uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = param_3[2];
  uVar17 = SUB84(dVar4,0);
  uVar18 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar2 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
  local_24c = 0xffffffff;
  uVar5 = 2;
  if (param_8 < dVar2) {
    uVar10 = 0;
    dVar3 = 0.0;
    local_2d0 = param_4;
    do {
      local_280._8_4_ = uVar13;
      local_280._0_8_ = -(double)CONCAT44(uVar16,uVar15);
      local_280._12_4_ = (int)((ulonglong)-(double)CONCAT44(uVar14,uVar13) >> 0x20);
      local_270 = -(double)CONCAT44(uVar18,uVar17);
      lVar6 = *param_1;
      lVar8 = 0;
      do {
        if (0.0 < *(double *)(local_280 + lVar8 * 8) || *(double *)(local_280 + lVar8 * 8) == 0.0) {
          dVar4 = *(double *)(lVar6 + 0x38 + lVar8 * 8) - dVar1;
        }
        else {
          dVar4 = *(double *)(lVar6 + 0x20 + lVar8 * 8) + dVar1;
        }
        local_268[lVar8] = dVar4;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      local_2b0 = CONCAT44(uVar16,uVar15);
      local_2a8 = CONCAT44(uVar14,uVar13);
      local_2a0 = CONCAT44(uVar18,uVar17);
      local_2e0 = &local_24c;
      local_2e8 = (double *)0x0;
      FUN_1404b8faa(param_2,&local_298,&local_2b0,0);
      dVar11 = local_268[1] - (double)CONCAT44(uStack_28c,uStack_290);
      dVar12 = local_268[0] - (double)CONCAT44(uStack_294,local_298);
      dVar4 = ((double)CONCAT44(uVar18,uVar17) * (local_268[2] - local_288) +
              (double)CONCAT44(uVar16,uVar15) * dVar12 + (double)CONCAT44(uVar14,uVar13) * dVar11) /
              dVar2;
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
      if ((dVar2 - dVar3 < param_8) || (0xf < uVar10)) {
        if ((local_108 & 0xffffffff) == 0) {
          param_5[2] = local_268[2];
          *param_5 = local_268[0];
          param_5[1] = local_268[1];
          param_6[2] = local_288;
          *param_6 = (double)CONCAT44(uStack_294,local_298);
          param_6[1] = (double)CONCAT44(uStack_28c,uStack_290);
        }
        else {
          *param_5 = 0.0;
          param_5[1] = 0.0;
          param_5[2] = 0.0;
          param_6[2] = 0.0;
          *param_6 = 0.0;
          param_6[1] = 0.0;
          if (0 < (int)local_108) {
            uVar9 = 0;
            do {
              lVar6 = (longlong)*(int *)((longlong)&local_108 + uVar9 * 4 + 4);
              dVar3 = local_248[lVar6];
              dVar4 = local_1c8[lVar6 * 3 + 1];
              dVar11 = local_1c8[lVar6 * 3 + 2];
              *param_5 = local_1c8[lVar6 * 3] * dVar3 + *param_5;
              param_5[1] = dVar4 * dVar3 + param_5[1];
              param_5[2] = dVar11 * dVar3 + param_5[2];
              dVar4 = (double)(&uStack_220)[lVar6 * 3];
              dVar11 = adStack_218[lVar6 * 3];
              *param_6 = *(double *)((longlong)&local_228 + lVar6 * 0x18) * dVar3 + *param_6;
              param_6[1] = dVar4 * dVar3 + param_6[1];
              param_6[2] = dVar3 * dVar11 + param_6[2];
              uVar9 = uVar9 + 1;
            } while ((local_108 & 0xffffffff) != uVar9);
          }
        }
        dVar3 = -(double)CONCAT44(uVar18,uVar17) / dVar2;
        dVar11 = -(double)CONCAT44(uVar14,uVar13) / dVar2;
        dVar4 = -(double)CONCAT44(uVar16,uVar15) / dVar2;
        *local_2d0 = dVar2 - (dVar1 + 0.0);
        *param_5 = dVar1 * dVar4 + *param_5;
        param_5[1] = dVar1 * dVar11 + param_5[1];
        param_5[2] = dVar1 * dVar3 + param_5[2];
        *param_6 = *param_6 - dVar4 * 0.0;
        param_6[1] = param_6[1] - dVar11 * 0.0;
        param_6[2] = param_6[2] - dVar3 * 0.0;
        *param_7 = dVar4;
        param_7[1] = dVar11;
        param_7[2] = dVar3;
        uVar5 = *local_2d0 < 0.0;
        goto LAB_146d57efd;
      }
      uVar10 = uVar10 + 1;
      lVar6 = (longlong)(int)local_108;
      *(int *)((longlong)&local_108 + lVar6 * 4 + 4) = (int)local_108;
      iVar7 = (int)local_108 + 1;
      local_168[lVar6 * 3] = dVar12;
      local_168[lVar6 * 3 + 1] = dVar11;
      local_168[lVar6 * 3 + 2] = local_268[2] - local_288;
      local_1c8[lVar6 * 3] = local_268[0];
      local_1c8[lVar6 * 3 + 1] = local_268[1];
      local_1c8[lVar6 * 3 + 2] = local_268[2];
      *(undefined4 *)((longlong)&local_228 + lVar6 * 0x18) = local_298;
      *(undefined4 *)((longlong)&local_228 + lVar6 * 0x18 + 4U) = uStack_294;
      *(undefined4 *)(&uStack_220 + lVar6 * 3) = uStack_290;
      *(undefined4 *)((longlong)adStack_218 + lVar6 * 0x18 + -4) = uStack_28c;
      adStack_218[lVar6 * 3] = local_288;
      local_108 = CONCAT44(local_108._4_4_,iVar7);
      local_2e0 = (undefined4 *)&local_228;
      local_2e8 = local_1c8;
      FUN_1449162b1(&local_2c8,local_168,&local_108,local_248);
      uVar15 = SUB84(local_2c8,0);
      uVar16 = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uVar13 = SUB84(local_2c0,0);
      uVar14 = (undefined4)((ulonglong)local_2c0 >> 0x20);
      uVar17 = SUB84(local_2b8,0);
      uVar18 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      dVar2 = SQRT(local_2b8 * local_2b8 + local_2c8 * local_2c8 + local_2c0 * local_2c0);
    } while (param_8 < dVar2);
    uVar5 = 2;
  }
LAB_146d57efd:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146d57f83 FUN_146d57f83 body=4209 status=ok
// SIG undefined FUN_146d57f83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146d57f83(longlong param_1,double *param_2,double *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined1 auStack_3d8 [32];
  double *local_3b8;
  int *local_3b0;
  double *local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  longlong local_390;
  double *local_388;
  longlong local_380;
  longlong local_378;
  double local_370;
  double local_368;
  double local_360;
  undefined8 local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  uint uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  uint uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  uint uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  int local_1c0 [2];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  code *local_148;
  double *local_140;
  longlong local_138;
  char local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_2f8 = (param_2[2] + param_2[5] + param_2[8]) / 3.0;
  local_308 = (param_2[1] + param_2[4] + param_2[7]) / 3.0;
  local_300 = (*param_2 + param_2[3] + param_2[6]) / 3.0;
  local_140 = local_108;
  local_148 = FUN_140036a08;
  local_120 = local_300;
  local_118 = local_308;
  local_110 = local_2f8;
  lVar7 = FUN_144a773aa(&local_148,&DAT_14c7585d0);
  local_148 = (code *)(lVar7 + 0x10);
  local_140 = *(double **)(lVar7 + 0x10);
  local_138 = *(longlong *)(lVar7 + 0x20);
  local_130 = '\0';
  local_128 = *(undefined8 *)(lVar7 + 0x28);
  *(code ***)(lVar7 + 0x28) = &local_148;
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  local_158 = 0;
  uStack_150 = 0;
  FUN_1404b1a60(&local_158,DAT_14c992a28);
  lVar7 = local_158;
  local_3a0 = &local_168;
  local_168 = local_158;
  local_160 = (undefined4)uStack_150;
  local_3a8 = (double *)&local_180;
  local_3b0 = (int *)((longlong)&local_180 + 4);
  local_3b8 = &local_178;
  local_390 = param_1;
  FUN_146d4fb38(param_1,param_3,&local_120,&local_170);
  uVar11 = 0;
  if (ABS(local_170) * local_170 <= 1.79769313486232e+308) {
    uVar30 = 0;
    uVar31 = 0;
    if (0.0 <= local_178) {
      uVar38 = 0x20000000;
      uVar39 = 0xc202a05f;
      dVar22 = -10000000000.0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar44 = 0;
      uVar45 = 0;
      dVar28 = 0.0;
      lVar8 = -1;
      local_378 = lVar7;
      local_2b8 = local_170;
      uStack_2b0 = 0;
      uVar36 = SUB84(local_170,0);
      uVar37 = (int)((ulonglong)local_170 >> 0x20);
      local_388 = param_3;
      local_380 = param_4;
      if (0 < DAT_14c992a38) {
        dVar28 = 0.0;
        uVar11 = 0;
        iVar17 = -1;
        uVar38 = 0x20000000;
        uVar39 = 0xc202a05f;
        do {
          FUN_1404b254c(local_390,uVar11,local_108,&local_198);
          local_3a8 = &local_1b8;
          local_3b8 = &local_1d8;
          local_3b0 = (int *)&local_1f0;
          FUN_146d4f89c(param_2,local_108,&local_198,&local_1b0);
          if ((ABS(local_1b0) * local_1b0 <= 1.79769313486232e+308) &&
             ((double)CONCAT44(uVar39,uVar38) <= local_1b0 &&
              local_1b0 != (double)CONCAT44(uVar39,uVar38))) {
            uVar40 = SUB84(local_108[0],0);
            uVar41 = (undefined4)((ulonglong)local_108[0] >> 0x20);
            uVar44 = SUB84(local_108[1],0);
            uVar45 = (uint)((ulonglong)local_108[1] >> 0x20);
            uVar30 = SUB84(local_198,0);
            uVar31 = (undefined4)((ulonglong)local_198 >> 0x20);
            uVar32 = SUB84(local_190,0);
            uVar33 = (undefined4)((ulonglong)local_190 >> 0x20);
            uVar34 = SUB84(local_188,0);
            uVar35 = (undefined4)((ulonglong)local_188 >> 0x20);
            uVar38 = SUB84(local_1b0,0);
            uVar39 = (undefined4)((ulonglong)local_1b0 >> 0x20);
            iVar17 = (int)local_1f0;
            dVar28 = local_108[2];
          }
          if (1.79769313486232e+308 < ABS(local_1b0) * local_1b0) goto LAB_146d58ec6;
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < DAT_14c992a38);
        lVar8 = (longlong)iVar17;
        uVar36 = (undefined4)local_2b8;
        uVar37 = local_2b8._4_4_;
      }
      lVar7 = local_380;
      lVar9 = -1;
      local_108[1] = (param_2[2] - (double)CONCAT44(uVar35,uVar34)) * dVar28 +
                     (*param_2 - (double)CONCAT44(uVar31,uVar30)) * (double)CONCAT44(uVar41,uVar40)
                     + (param_2[1] - (double)CONCAT44(uVar33,uVar32)) *
                       (double)CONCAT44(uVar45,uVar44);
      local_108[2] = (param_2[5] - (double)CONCAT44(uVar35,uVar34)) * dVar28 +
                     (param_2[3] - (double)CONCAT44(uVar31,uVar30)) *
                     (double)CONCAT44(uVar41,uVar40) +
                     (param_2[4] - (double)CONCAT44(uVar33,uVar32)) *
                     (double)CONCAT44(uVar45,uVar44);
      uStack_280 = 0;
      dVar23 = (param_2[8] - (double)CONCAT44(uVar35,uVar34)) * dVar28 +
               (param_2[6] - (double)CONCAT44(uVar31,uVar30)) * (double)CONCAT44(uVar41,uVar40) +
               (param_2[7] - (double)CONCAT44(uVar33,uVar32)) * (double)CONCAT44(uVar45,uVar44);
      local_108[0] = dVar23;
      if (local_108[1] <= dVar23) {
        local_108[0] = local_108[1];
      }
      if (local_108[2] <= local_108[1]) {
        local_108[1] = local_108[2];
      }
      if (dVar23 <= local_108[2]) {
        local_108[2] = dVar23;
      }
      local_288 = dVar28;
      if ((longlong)DAT_14c992a78 < 1) {
        iVar17 = -1;
        uVar30 = 0;
        uVar31 = 0;
        dVar43 = 0.0;
        dVar23 = 0.0;
      }
      else {
        local_2a8 = CONCAT44(uVar45,uVar44);
        uStack_2a0 = 0;
        local_358 = CONCAT44(uVar39,uVar38);
        local_298 = CONCAT44(uVar41,uVar40);
        uStack_290 = 0;
        local_328 = *(double *)(local_390 + 0x48) - *(double *)(local_390 + 0x30);
        local_330 = *(double *)(local_390 + 0x40) - *(double *)(local_390 + 0x28);
        local_338 = *(double *)(local_390 + 0x38) - *(double *)(local_390 + 0x20);
        local_340 = local_328 * 0.5 + *(double *)(local_390 + 0x30);
        local_348 = local_330 * 0.5 + *(double *)(local_390 + 0x28);
        local_350 = local_338 * 0.5 + *(double *)(local_390 + 0x20);
        local_258 = *(undefined4 *)local_388;
        local_268 = *(undefined4 *)(local_388 + 1);
        local_278 = *(undefined4 *)(local_388 + 2);
        uStack_274 = *(uint *)((longlong)local_388 + 0x14) ^ 0x80000000;
        uStack_270 = 0;
        uStack_26c = 0x80000000;
        uStack_264 = *(uint *)((longlong)local_388 + 0xc) ^ 0x80000000;
        uStack_260 = 0;
        uStack_25c = 0x80000000;
        uStack_254 = *(uint *)((longlong)local_388 + 4) ^ 0x80000000;
        uStack_250 = 0;
        uStack_24c = 0x80000000;
        uVar11 = 0xffffffff;
        dVar22 = -10000000000.0;
        uVar19 = 0;
        uVar14 = 0xffffffff;
        local_368 = 0.0;
        local_370 = 0.0;
        local_360 = 0.0;
        do {
          lVar12 = (longlong)*(short *)(DAT_14c992a70 + uVar19 * 2);
          lVar15 = (longlong)*(short *)(DAT_14c992a50 + 2 + lVar12 * 6);
          lVar9 = (longlong)*(short *)(DAT_14c992a50 + 4 + lVar12 * 6);
          lVar18 = (longlong)*(short *)(DAT_14c992a50 + 2 + lVar9 * 6);
          dVar23 = *(double *)(local_378 + lVar15 * 8);
          if ((ABS(dVar23) * dVar23 <= 1.79769313486232e+308) ||
             (dVar23 = *(double *)(local_378 + lVar18 * 8), uVar4 = uStack_230, uVar5 = uStack_220,
             uVar6 = uStack_210, ABS(dVar23) * dVar23 <= 1.79769313486232e+308)) {
            local_248._8_8_ = 0;
            local_248._0_8_ = dVar22;
            local_310 = *(double *)(DAT_14c992a20 + 0x10 + lVar15 * 0x18) * local_328 * 0.5 +
                        local_340;
            local_318 = *(double *)(DAT_14c992a20 + 8 + lVar15 * 0x18) * local_330 * 0.5 + local_348
            ;
            local_320 = *(double *)(DAT_14c992a20 + lVar15 * 0x18) * local_338 * 0.5 + local_350;
            lVar12 = (longlong)*(short *)(DAT_14c992a50 + lVar12 * 6);
            lVar9 = (longlong)*(short *)(DAT_14c992a50 + lVar9 * 6);
            local_2c0 = *(double *)(DAT_14c992a30 + 0x10 + lVar12 * 0x18);
            local_2c8 = *(double *)(DAT_14c992a30 + lVar12 * 0x18);
            local_2d0 = *(double *)(DAT_14c992a30 + 8 + lVar12 * 0x18);
            local_2d8 = *(double *)(DAT_14c992a30 + 0x10 + lVar9 * 0x18);
            local_2e0 = *(double *)(DAT_14c992a30 + lVar9 * 0x18);
            local_2e8 = *(double *)(DAT_14c992a30 + 8 + lVar9 * 0x18);
            local_208 = (*(double *)(DAT_14c992a20 + 0x10 + lVar18 * 0x18) * local_328 * 0.5 +
                        local_340) - local_310;
            dVar23 = (*(double *)(DAT_14c992a20 + 8 + lVar18 * 0x18) * local_330 * 0.5 + local_348)
                     - local_318;
            dVar43 = (*(double *)(DAT_14c992a20 + lVar18 * 0x18) * local_338 * 0.5 + local_350) -
                     local_320;
            local_2f0 = -local_388[2] * local_208 + -*local_388 * dVar43 + dVar23 * -local_388[1];
            uVar4 = 0x8000000000000000;
            local_218 = -dVar23;
            uStack_210 = 0x8000000000000000;
            local_228 = -dVar43;
            uStack_220 = 0x8000000000000000;
            uStack_200 = 0;
            local_238 = -local_208;
            uStack_230 = 0x8000000000000000;
            uVar16 = 0;
            do {
              if (ABS(local_108[uVar16]) * local_108[uVar16] <= 1.79769313486232e+308) {
                pdVar13 = param_2 + uVar16 * 3 + 3;
                dVar24 = pdVar13[-1];
                dVar27 = pdVar13[-3];
                dVar29 = pdVar13[-2];
                if (uVar16 == 2) {
                  pdVar13 = param_2;
                }
                dVar21 = pdVar13[2] - dVar24;
                dVar42 = pdVar13[1] - dVar29;
                dVar1 = *pdVar13 - dVar27;
                dVar25 = local_2d8 * dVar21 + local_2e0 * dVar1 + local_2e8 * dVar42;
                if (((local_2c0 * dVar21 + local_2c8 * dVar1 + local_2d0 * dVar42) * dVar25 <
                     -0.009999999776482582) && (0.009999999776482582 < dVar25 * local_2f0)) {
                  dVar26 = dVar43 * dVar42 + dVar1 * local_218;
                  dVar25 = dVar21 * local_228 + local_208 * dVar1;
                  dVar1 = dVar42 * local_238 + dVar23 * dVar21;
                  dVar42 = (dVar24 - local_2f8) * dVar26 +
                           (dVar27 - local_300) * dVar1 + (dVar29 - local_308) * dVar25;
                  if (dVar42 < 0.0) {
                    uVar30 = (undefined4)DAT_149931e80;
                    uVar31 = DAT_149931e80._4_4_;
                    dVar21 = (double)((ulonglong)dVar26 ^ DAT_149931e80);
                    dVar2 = (double)((ulonglong)dVar25 ^ DAT_149931e80);
                  }
                  else {
                    uVar30 = 0;
                    uVar31 = 0x80000000;
                    dVar2 = dVar25;
                    dVar21 = dVar26;
                  }
                  dVar25 = dVar26 * dVar26 + dVar1 * dVar1 + dVar25 * dVar25;
                  uVar20 = -(ulonglong)(dVar42 < 0.0);
                  dVar1 = (double)(~uVar20 & (ulonglong)dVar1 |
                                  ((ulonglong)dVar1 ^ CONCAT44(uVar31,uVar30)) & uVar20);
                  dVar24 = (local_310 - dVar24) * dVar21 +
                           (local_320 - dVar27) * dVar1 + (local_318 - dVar29) * dVar2;
                  if (dVar25 * 1.79769313486232e+308 < ABS(dVar24) * dVar24) goto LAB_146d58ec6;
                  if (ABS(dVar22) * dVar22 * dVar25 < ABS(dVar24) * dVar24) {
                    local_360 = 1.0 / SQRT(dVar25);
                    dVar22 = dVar24 * local_360;
                    local_368 = dVar21 * local_360;
                    local_370 = dVar2 * local_360;
                    local_360 = local_360 * dVar1;
                    uVar14 = uVar16 & 0xffffffff;
                    uVar11 = uVar19 & 0xffffffff;
                  }
                }
              }
              uVar16 = uVar16 + 1;
              uVar5 = uVar4;
              uVar6 = uVar4;
            } while (uVar16 != 3);
          }
          uStack_210 = uVar6;
          uStack_220 = uVar5;
          uStack_230 = uVar4;
          iVar17 = (int)uVar14;
          uVar19 = uVar19 + 1;
        } while (uVar19 != (longlong)DAT_14c992a78);
        lVar9 = (longlong)(int)uVar11;
        uVar30 = SUB84(local_360,0);
        uVar31 = (undefined4)((ulonglong)local_360 >> 0x20);
        dVar23 = local_368;
        uVar36 = (undefined4)local_2b8;
        uVar37 = local_2b8._4_4_;
        dVar43 = local_370;
      }
      if (((((double)CONCAT44(uVar37,uVar36) == -10000000000.0) &&
           (!NAN((double)CONCAT44(uVar37,uVar36)))) ||
          (dVar24 = (double)CONCAT44(uVar37,uVar36) + 0.01,
          dVar24 < (double)CONCAT44(uVar39,uVar38) || dVar24 == (double)CONCAT44(uVar39,uVar38))) ||
         (dVar24 <= dVar22)) {
        if ((((double)CONCAT44(uVar39,uVar38) == -10000000000.0) &&
            (!NAN((double)CONCAT44(uVar39,uVar38)))) ||
           ((double)CONCAT44(uVar39,uVar38) < dVar22 || (double)CONCAT44(uVar39,uVar38) == dVar22))
        {
          if ((dVar22 == -10000000000.0) && (!NAN(dVar22))) {
LAB_146d58ec6:
            uVar11 = 0;
            goto LAB_146d58ec8;
          }
          lVar8 = (longlong)*(short *)(DAT_14c992a70 + lVar9 * 2);
          lVar9 = (longlong)*(short *)(DAT_14c992a50 + 2 + lVar8 * 6);
          lVar8 = (longlong)
                  *(short *)(DAT_14c992a50 + 2 +
                            (longlong)*(short *)(DAT_14c992a50 + 4 + lVar8 * 6) * 6);
          dVar28 = *(double *)(local_390 + 0x48) - *(double *)(local_390 + 0x30);
          dVar27 = *(double *)(local_390 + 0x40) - *(double *)(local_390 + 0x28);
          dVar24 = *(double *)(local_390 + 0x38) - *(double *)(local_390 + 0x20);
          local_1a0 = dVar28 * 0.5 + *(double *)(local_390 + 0x30);
          local_1a8 = dVar27 * 0.5 + *(double *)(local_390 + 0x28);
          local_1b0 = dVar24 * 0.5 + *(double *)(local_390 + 0x20);
          local_188 = *(double *)(DAT_14c992a20 + 0x10 + lVar9 * 0x18) * dVar28 * 0.5 + local_1a0;
          local_190 = *(double *)(DAT_14c992a20 + 8 + lVar9 * 0x18) * dVar27 * 0.5 + local_1a8;
          local_198 = *(double *)(DAT_14c992a20 + lVar9 * 0x18) * dVar24 * 0.5 + local_1b0;
          local_1a0 = dVar28 * *(double *)(DAT_14c992a20 + 0x10 + lVar8 * 0x18) * 0.5 + local_1a0;
          local_1a8 = dVar27 * *(double *)(DAT_14c992a20 + 8 + lVar8 * 0x18) * 0.5 + local_1a8;
          local_1b0 = dVar24 * *(double *)(DAT_14c992a20 + lVar8 * 0x18) * 0.5 + local_1b0;
          pdVar13 = param_2 + (ulonglong)(iVar17 + 1) * 3;
          if (iVar17 == 2) {
            pdVar13 = param_2;
          }
          local_398 = 0x3f1a36e2e0000000;
          local_3a0 = &local_1f0;
          local_3a8 = &local_1d8;
          local_3b0 = local_1c0;
          local_3b8 = &local_1b8;
          FUN_1404b842e(&local_198,&local_1b0,param_2 + (longlong)iVar17 * 3,pdVar13);
          *(undefined8 *)(lVar7 + 0x30) = local_1c8;
          *(double *)(lVar7 + 0x20) = local_1d8;
          *(undefined8 *)(lVar7 + 0x28) = uStack_1d0;
          *(int *)(lVar7 + 0x38) = (int)local_1f0;
          *(undefined4 *)(lVar7 + 0x3c) = local_1f0._4_4_;
          *(undefined4 *)(lVar7 + 0x40) = uStack_1e8;
          *(undefined4 *)(lVar7 + 0x44) = uStack_1e4;
          *(undefined8 *)(lVar7 + 0x48) = local_1e0;
          *(ulonglong *)(lVar7 + 0x50) = CONCAT44(uVar31,uVar30);
          *(double *)(lVar7 + 0x58) = dVar43;
          *(double *)(lVar7 + 0x60) = dVar23;
          *(double *)(lVar7 + 0x68) = dVar22;
        }
        else {
          dVar22 = param_2[lVar8 * 3];
          dVar23 = param_2[lVar8 * 3 + 1];
          dVar43 = param_2[lVar8 * 3 + 2];
          *(double *)(local_380 + 0x20) =
               dVar22 - (double)CONCAT44(uVar41,uVar40) * (double)CONCAT44(uVar39,uVar38);
          *(double *)(local_380 + 0x28) =
               dVar23 - (double)CONCAT44(uVar45,uVar44) * (double)CONCAT44(uVar39,uVar38);
          *(double *)(local_380 + 0x30) = dVar43 - dVar28 * (double)CONCAT44(uVar39,uVar38);
          *(double *)(local_380 + 0x38) = dVar22;
          *(double *)(local_380 + 0x40) = dVar23;
          *(double *)(local_380 + 0x48) = dVar43;
          auVar3._8_4_ = uVar44;
          auVar3._0_8_ = CONCAT44(uVar41,uVar40) ^ 0x8000000000000000;
          auVar3._12_4_ = uVar45 ^ 0x80000000;
          *(undefined1 (*) [16])(local_380 + 0x50) = auVar3;
          *(double *)(local_380 + 0x60) = -dVar28;
          *(ulonglong *)(local_380 + 0x68) = CONCAT44(uVar39,uVar38);
        }
      }
      else {
        dVar22 = *local_388;
        dVar28 = local_388[1];
        dVar23 = local_388[2];
        lVar7 = (longlong)local_180._4_4_;
        dVar24 = *(double *)(local_390 + 0x48) - *(double *)(local_390 + 0x30);
        dVar27 = *(double *)(local_390 + 0x40) - *(double *)(local_390 + 0x28);
        dVar29 = *(double *)(local_390 + 0x38) - *(double *)(local_390 + 0x20);
        dVar43 = (double)CONCAT44(uVar37,uVar36);
        dVar24 = dVar24 * *(double *)(DAT_14c992a20 + 0x10 + lVar7 * 0x18) * 0.5 +
                 dVar24 * 0.5 + *(double *)(local_390 + 0x30);
        dVar27 = dVar27 * *(double *)(DAT_14c992a20 + 8 + lVar7 * 0x18) * 0.5 +
                 dVar27 * 0.5 + *(double *)(local_390 + 0x28);
        dVar29 = dVar29 * *(double *)(DAT_14c992a20 + lVar7 * 0x18) * 0.5 +
                 dVar29 * 0.5 + *(double *)(local_390 + 0x20);
        *(double *)(local_380 + 0x20) = dVar29;
        *(double *)(local_380 + 0x28) = dVar27;
        *(double *)(local_380 + 0x30) = dVar24;
        *(double *)(local_380 + 0x38) = dVar29 - dVar43 * dVar22;
        *(double *)(local_380 + 0x40) = dVar27 - (double)CONCAT44(uVar37,uVar36) * dVar28;
        *(double *)(local_380 + 0x48) = dVar24 - dVar43 * dVar23;
        *(double *)(local_380 + 0x50) = dVar22;
        *(double *)(local_380 + 0x58) = dVar28;
        *(double *)(local_380 + 0x60) = dVar23;
        *(double *)(local_380 + 0x68) = dVar43;
      }
      uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
    }
  }
LAB_146d58ec8:
  if (local_130 == '\0') {
    local_130 = '\x01';
    *(int *)(local_148 + 0x20) = *(int *)(local_148 + 0x20) + -1;
    if (local_138 != *(longlong *)(local_148 + 0x10)) {
      FUN_14004673c();
    }
    *(double **)local_148 = local_140;
    *(undefined8 *)(local_148 + 0x18) = local_128;
  }
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 146d58ff5 FUN_146d58ff5 body=249 status=ok
// SIG undefined FUN_146d58ff5(void)

undefined8
FUN_146d58ff5(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4,
             double param_5,longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_146d523a7(param_1,param_2,param_3,param_6);
  if (cVar1 != '\0') {
    if ((*(double *)(param_6 + 0x68) <= param_5) ||
       (*(double *)(param_6 + 0x68) +
        param_4[2] * *(double *)(param_6 + 0x60) +
        *param_4 * *(double *)(param_6 + 0x50) + param_4[1] * *(double *)(param_6 + 0x58) <= param_5
       )) {
      local_58 = param_6 + 0x10;
      cVar1 = FUN_146d590ef(param_2,param_3,param_6 + 0x38,param_6 + 0x50);
      if (cVar1 != '\0') {
        local_38 = *(ulonglong *)(param_6 + 0x60) ^ 0x8000000000000000;
        local_48 = *(ulonglong *)(param_6 + 0x50) ^ 0x8000000000000000;
        uStack_40 = *(ulonglong *)(param_6 + 0x58) ^ 0x8000000000000000;
        uVar2 = FUN_146d59239(param_1,&local_48,param_6);
        goto LAB_146d59077;
      }
    }
  }
  uVar2 = 0;
LAB_146d59077:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d590ef FUN_146d590ef body=329 status=ok
// SIG undefined FUN_146d590ef(void)

undefined8
FUN_146d590ef(undefined4 *param_1,double *param_2,undefined8 param_3,double *param_4,
             longlong param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  uint *local_88;
  uint *local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_10 = uVar2;
  if (ABS(param_4[2] * param_2[2] + *param_4 * *param_2 + param_4[1] * param_2[1] + -1.0) <= 0.02) {
    *(undefined1 *)(param_5 + 0xc) = 3;
    *(undefined8 *)(param_5 + 4) = 0;
LAB_146d59210:
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x10);
    local_28 = *(undefined8 *)(param_1 + 0xc);
    uStack_20 = *(undefined8 *)(param_1 + 0xe);
    local_48 = *(undefined8 *)(param_1 + 6);
    uStack_40 = *(undefined8 *)(param_1 + 8);
    local_38 = *(undefined8 *)(param_1 + 10);
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = *(undefined8 *)(param_1 + 4);
    local_78 = 0x3eb0c6f7a0b5ed8d;
    local_80 = &local_70;
    local_88 = &local_6c;
    cVar1 = FUN_1404affdc(param_3,&local_68,&local_48);
    if (cVar1 != '\0') {
      if ((local_6c & local_70) != 0xffffffff) {
        bVar4 = local_70 != 0xffffffff;
        if (local_6c != 0xffffffff) {
          local_70 = local_6c;
        }
        uVar2 = (ulonglong)local_70;
        *(char *)(param_5 + 0xc) = (local_6c != 0xffffffff && bVar4) + '\x01';
        *(undefined4 *)(param_5 + 4) = 0;
        *(uint *)(param_5 + 8) = local_70;
        goto LAB_146d59210;
      }
    }
    uVar3 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d59239 FUN_146d59239 body=1055 status=ok
// SIG undefined FUN_146d59239(void)

undefined8 FUN_146d59239(longlong param_1,double *param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  int *local_120;
  ulonglong local_118;
  longlong local_110;
  int local_108;
  int local_104;
  int local_100;
  undefined1 local_f9;
  int local_f8 [18];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  fVar2 = *(float *)(param_1 + 0x54);
  fVar3 = *(float *)(param_1 + 0x50);
  fVar4 = *(float *)(param_1 + 0x4c);
  fVar5 = *(float *)(param_1 + 0x48);
  fVar6 = *(float *)(param_1 + 0x44);
  fVar7 = *(float *)(param_1 + 0x40);
  local_120 = &local_108;
  local_108 = -1;
  local_128 = 0;
  FUN_144916780(param_1,local_f8,param_2,0);
  if ((local_108 != -1) &&
     (uVar11 = FUN_146d832be(param_1,local_108,local_f8,0x10), 0 < (int)uVar11)) {
    dVar25 = ABS((double)fVar2 - (double)fVar5);
    dVar10 = ABS((double)fVar3 - (double)fVar6);
    dVar9 = ABS((double)fVar4 - (double)fVar7);
    if (dVar9 <= dVar10) {
      dVar9 = dVar10;
    }
    if (dVar9 <= dVar25) {
      dVar9 = dVar25;
    }
    lVar16 = *(longlong *)(param_1 + 0x20);
    iVar22 = -1;
    iVar21 = 0;
    uVar18 = 0;
    dVar25 = -1.0;
    do {
      iVar23 = local_f8[uVar18];
      lVar20 = (longlong)iVar23;
      dVar10 = (double)*(float *)(lVar16 + 0xc + lVar20 * 0x18) * *param_2 +
               (double)*(float *)(lVar16 + 0x10 + lVar20 * 0x18) * param_2[1] +
               (double)*(float *)(lVar16 + 0x14 + lVar20 * 0x18) * param_2[2];
      if (ABS(dVar10 + -1.0) <= 1e-06) {
        puVar14 = (undefined8 *)CONCAT71((uint7)(uint3)(uVar11 >> 8),3);
        goto LAB_146d594b7;
      }
      if (dVar10 <= dVar25) {
        dVar10 = dVar25;
        iVar23 = iVar22;
      }
      iVar22 = iVar23;
      dVar25 = dVar10;
      uVar18 = uVar18 + 1;
    } while (uVar11 != uVar18);
    if (iVar22 != -1) {
      puVar14 = *(undefined8 **)(param_1 + 0x58);
      if (puVar14 != (undefined8 *)0x0) {
        cVar8 = *(char *)(param_1 + 0x60);
        if (cVar8 == '\x03') {
          puVar14 = (undefined8 *)*puVar14;
          uVar11 = *(uint *)((longlong)puVar14 + (longlong)iVar22 * 8 + 4);
        }
        else if (cVar8 == '\x02') {
          puVar14 = (undefined8 *)*puVar14;
          uVar11 = (uint)*(short *)((longlong)puVar14 + (longlong)iVar22 * 4 + 2);
        }
        else {
          if (cVar8 != '\x01') goto LAB_146d594c3;
          puVar14 = (undefined8 *)*puVar14;
          uVar11 = (uint)*(byte *)((longlong)puVar14 + (longlong)iVar22 * 2 + 1);
        }
        if (0 < (int)uVar11) {
          plVar1 = (longlong *)(param_1 + 0x58);
          uVar18 = (ulonglong)-uVar11;
          iVar24 = -1;
          iVar17 = 1;
          local_118 = uVar18;
          local_110 = param_3;
          do {
            iVar21 = iVar17 + -1;
            if (*plVar1 == 0) {
              lVar16 = 0;
              iVar12 = -1;
            }
            else {
              local_104 = iVar22;
              local_100 = iVar21;
              iVar12 = FUN_144b030e2(plVar1,&local_104,&local_f9);
              lVar16 = *plVar1;
              uVar18 = local_118;
            }
            if ((int)uVar18 + iVar17 == 0) {
              if (lVar16 == 0) goto LAB_146d5962a;
              local_100 = 0;
              iVar23 = local_100;
LAB_146d59552:
              local_100 = iVar23;
              local_104 = iVar22;
              iVar13 = FUN_144b030e2(plVar1,&local_104,&local_f9);
              uVar18 = local_118;
            }
            else {
              iVar23 = iVar17;
              if (lVar16 != 0) goto LAB_146d59552;
LAB_146d5962a:
              iVar13 = -1;
            }
            if (iVar12 == local_108) {
              iVar24 = iVar21;
            }
            param_3 = local_110;
            iVar23 = iVar22;
            if (iVar12 == local_108 || iVar13 == local_108) {
              lVar16 = *(longlong *)(param_1 + 0x30);
              lVar19 = (longlong)iVar12;
              lVar20 = (longlong)iVar13;
              if (ABS(((double)*(float *)(lVar16 + 8 + lVar20 * 0xc) -
                      (double)*(float *)(lVar16 + 8 + lVar19 * 0xc)) * param_2[2] +
                      ((double)*(float *)(lVar16 + lVar20 * 0xc) -
                      (double)*(float *)(lVar16 + lVar19 * 0xc)) * *param_2 +
                      ((double)*(float *)(lVar16 + 4 + lVar20 * 0xc) -
                      (double)*(float *)(lVar16 + 4 + lVar19 * 0xc)) * param_2[1]) < dVar9 * 0.001)
              {
                puVar14 = (undefined8 *)CONCAT71((int7)((ulonglong)(lVar20 * 3) >> 8),2);
                goto LAB_146d594b7;
              }
            }
            iVar21 = (int)uVar18 + iVar17;
            iVar17 = iVar17 + 1;
          } while (iVar21 != 0);
          puVar14 = (undefined8 *)&DAT_00000001;
          iVar21 = iVar24;
          if (iVar24 != -1) {
LAB_146d594b7:
            *(char *)(param_3 + 0xc) = (char)puVar14;
            *(int *)(param_3 + 4) = iVar23;
            *(int *)(param_3 + 8) = iVar21;
          }
        }
      }
LAB_146d594c3:
      uVar15 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
      goto LAB_146d59450;
    }
  }
  uVar15 = 0;
LAB_146d59450:
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d59659 FUN_146d59659 body=249 status=ok
// SIG undefined FUN_146d59659(void)

undefined8
FUN_146d59659(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4,
             double param_5,longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_146d53e7f(param_1,param_2,param_3,param_6);
  if (cVar1 != '\0') {
    if ((*(double *)(param_6 + 0x68) <= param_5) ||
       (*(double *)(param_6 + 0x68) +
        param_4[2] * *(double *)(param_6 + 0x60) +
        *param_4 * *(double *)(param_6 + 0x50) + param_4[1] * *(double *)(param_6 + 0x58) <= param_5
       )) {
      local_58 = param_6 + 0x10;
      cVar1 = FUN_146d590ef(param_2,param_3,param_6 + 0x38,param_6 + 0x50);
      if (cVar1 != '\0') {
        local_38 = *(ulonglong *)(param_6 + 0x60) ^ 0x8000000000000000;
        local_48 = *(ulonglong *)(param_6 + 0x50) ^ 0x8000000000000000;
        uStack_40 = *(ulonglong *)(param_6 + 0x58) ^ 0x8000000000000000;
        uVar2 = FUN_146d59753(param_1,&local_48,param_6);
        goto LAB_146d596db;
      }
    }
  }
  uVar2 = 0;
LAB_146d596db:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d59753 FUN_146d59753 body=1060 status=ok
// SIG undefined FUN_146d59753(void)

undefined8 FUN_146d59753(longlong param_1,double *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  double dVar26;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  int *local_120;
  longlong local_110;
  int local_108;
  int local_104;
  uint local_100;
  undefined1 local_f9;
  int local_f8 [18];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar17 = *(longlong *)(param_1 + 0x28);
  fVar1 = *(float *)(lVar17 + 0x54);
  fVar2 = *(float *)(lVar17 + 0x50);
  fVar3 = *(float *)(lVar17 + 0x4c);
  fVar4 = *(float *)(lVar17 + 0x48);
  fVar5 = *(float *)(lVar17 + 0x44);
  fVar6 = *(float *)(lVar17 + 0x40);
  local_120 = &local_108;
  local_108 = -1;
  local_128 = 0;
  FUN_144916780(lVar17,local_f8,param_2,0);
  if ((local_108 != -1) &&
     (uVar11 = FUN_146d832be(*(undefined8 *)(param_1 + 0x28),local_108,local_f8,0x10),
     0 < (int)uVar11)) {
    dVar26 = ABS((double)fVar1 - (double)fVar4);
    dVar9 = ABS((double)fVar2 - (double)fVar5);
    dVar8 = ABS((double)fVar3 - (double)fVar6);
    if (dVar8 <= dVar9) {
      dVar8 = dVar9;
    }
    if (dVar8 <= dVar26) {
      dVar8 = dVar26;
    }
    lVar17 = *(longlong *)(param_1 + 0x28);
    lVar16 = *(longlong *)(lVar17 + 0x20);
    iVar20 = -1;
    uVar22 = 0;
    uVar18 = 0;
    dVar26 = -1.0;
    do {
      iVar21 = local_f8[uVar18];
      lVar19 = (longlong)iVar21;
      dVar9 = (double)*(float *)(lVar16 + 0xc + lVar19 * 0x18) * *param_2 +
              (double)*(float *)(lVar16 + 0x10 + lVar19 * 0x18) * param_2[1] +
              (double)*(float *)(lVar16 + 0x14 + lVar19 * 0x18) * param_2[2];
      if (ABS(dVar9 + -1.0) <= 1e-06) {
        puVar14 = (undefined8 *)CONCAT71((uint7)(uint3)(uVar11 >> 8),3);
        goto LAB_146d599db;
      }
      if (dVar9 <= dVar26) {
        dVar9 = dVar26;
        iVar21 = iVar20;
      }
      iVar20 = iVar21;
      dVar26 = dVar9;
      uVar18 = uVar18 + 1;
    } while (uVar11 != uVar18);
    if (iVar20 != -1) {
      puVar14 = *(undefined8 **)(lVar17 + 0x58);
      if (puVar14 != (undefined8 *)0x0) {
        cVar7 = *(char *)(lVar17 + 0x60);
        if (cVar7 == '\x03') {
          puVar14 = (undefined8 *)*puVar14;
          uVar11 = *(uint *)((longlong)puVar14 + (longlong)iVar20 * 8 + 4);
        }
        else if (cVar7 == '\x02') {
          puVar14 = (undefined8 *)*puVar14;
          uVar11 = (uint)*(short *)((longlong)puVar14 + (longlong)iVar20 * 4 + 2);
        }
        else {
          if (cVar7 != '\x01') goto LAB_146d599e7;
          puVar14 = (undefined8 *)*puVar14;
          uVar11 = (uint)*(byte *)((longlong)puVar14 + (longlong)iVar20 * 2 + 1);
        }
        if (0 < (int)uVar11) {
          uVar24 = 1;
          local_110 = param_3;
          uVar23 = 0xffffffff;
          do {
            uVar22 = uVar24 - 1;
            lVar17 = *(longlong *)(param_1 + 0x28);
            if (*(longlong *)(lVar17 + 0x58) == 0) {
              lVar16 = 0;
              iVar12 = -1;
            }
            else {
              local_104 = iVar20;
              local_100 = uVar22;
              iVar12 = FUN_144b030e2(lVar17 + 0x58,&local_104,&local_f9);
              lVar17 = *(longlong *)(param_1 + 0x28);
              lVar16 = *(longlong *)(lVar17 + 0x58);
            }
            if (uVar24 == uVar11) {
              if (lVar16 == 0) goto LAB_146d59b49;
              local_100 = 0;
              uVar10 = local_100;
LAB_146d59a79:
              local_100 = uVar10;
              local_104 = iVar20;
              iVar13 = FUN_144b030e2(lVar17 + 0x58,&local_104,&local_f9);
            }
            else {
              uVar10 = uVar24;
              if (lVar16 != 0) goto LAB_146d59a79;
LAB_146d59b49:
              iVar13 = -1;
            }
            uVar10 = uVar22;
            param_3 = local_110;
            iVar21 = iVar20;
            if ((iVar12 == local_108) || (uVar10 = uVar23, iVar13 == local_108)) {
              lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
              lVar19 = (longlong)iVar12;
              lVar16 = (longlong)iVar13;
              uVar23 = uVar10;
              if (ABS(((double)*(float *)(lVar17 + 8 + lVar16 * 0xc) -
                      (double)*(float *)(lVar17 + 8 + lVar19 * 0xc)) * param_2[2] +
                      ((double)*(float *)(lVar17 + lVar16 * 0xc) -
                      (double)*(float *)(lVar17 + lVar19 * 0xc)) * *param_2 +
                      ((double)*(float *)(lVar17 + 4 + lVar16 * 0xc) -
                      (double)*(float *)(lVar17 + 4 + lVar19 * 0xc)) * param_2[1]) < dVar8 * 0.001)
              {
                puVar14 = (undefined8 *)CONCAT71((int7)((ulonglong)(lVar16 * 3) >> 8),2);
                goto LAB_146d599db;
              }
            }
            uVar22 = uVar23;
            bVar25 = uVar24 != uVar11;
            uVar24 = uVar24 + 1;
            uVar23 = uVar22;
          } while (bVar25);
          puVar14 = (undefined8 *)&DAT_00000001;
          if (uVar22 != 0xffffffff) {
LAB_146d599db:
            *(char *)(param_3 + 0xc) = (char)puVar14;
            *(int *)(param_3 + 4) = iVar21;
            *(uint *)(param_3 + 8) = uVar22;
          }
        }
      }
LAB_146d599e7:
      uVar15 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
      goto LAB_146d59974;
    }
  }
  uVar15 = 0;
LAB_146d59974:
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d59b78 FUN_146d59b78 body=249 status=ok
// SIG undefined FUN_146d59b78(void)

undefined8
FUN_146d59b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4,
             double param_5,longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_146d55931(param_1,param_2,param_3,param_6);
  if (cVar1 != '\0') {
    if ((*(double *)(param_6 + 0x68) <= param_5) ||
       (*(double *)(param_6 + 0x68) +
        param_4[2] * *(double *)(param_6 + 0x60) +
        *param_4 * *(double *)(param_6 + 0x50) + param_4[1] * *(double *)(param_6 + 0x58) <= param_5
       )) {
      local_58 = param_6 + 0x10;
      cVar1 = FUN_146d590ef(param_2,param_3,param_6 + 0x38,param_6 + 0x50);
      if (cVar1 != '\0') {
        local_38 = *(ulonglong *)(param_6 + 0x60) ^ 0x8000000000000000;
        local_48 = *(ulonglong *)(param_6 + 0x50) ^ 0x8000000000000000;
        uStack_40 = *(ulonglong *)(param_6 + 0x58) ^ 0x8000000000000000;
        uVar2 = FUN_146d59c72(param_1,&local_48,param_6);
        goto LAB_146d59bfa;
      }
    }
  }
  uVar2 = 0;
LAB_146d59bfa:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d59c72 FUN_146d59c72 body=1104 status=ok
// SIG undefined FUN_146d59c72(void)

undefined8 FUN_146d59c72(longlong param_1,double *param_2,longlong param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_140;
  int *local_138;
  longlong local_128;
  undefined1 local_120 [24];
  int local_108;
  uint uStack_104;
  double local_100;
  double local_f8;
  int local_ec;
  int local_e8 [18];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar2 = *(double *)(param_1 + 0x70);
  dVar22 = *(double *)(param_1 + 0x78);
  dVar3 = *(double *)(param_1 + 0x80);
  dVar4 = *(double *)(param_1 + 0x68);
  dVar5 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(param_1 + 0x58);
  local_138 = &local_ec;
  local_ec = -1;
  local_148 = param_1 + 0x20;
  local_140 = 0;
  FUN_144a94486(*(undefined8 *)(param_1 + 0x88),local_e8,param_2,0);
  if ((local_ec != -1) &&
     (local_128 = param_3,
     uVar10 = FUN_146d832be(*(undefined8 *)(param_1 + 0x88),local_ec,local_e8,0x10), 0 < (int)uVar10
     )) {
    dVar3 = ABS(dVar3 - dVar4);
    dVar22 = ABS(dVar22 - dVar5);
    dVar2 = ABS(dVar2 - dVar6);
    if (dVar2 <= dVar22) {
      dVar2 = dVar22;
    }
    if (dVar2 <= dVar3) {
      dVar2 = dVar3;
    }
    uVar23 = 0;
    uVar24 = 0xbff00000;
    iVar17 = -1;
    uVar18 = 0;
    do {
      iVar11 = local_e8[uVar18];
      FUN_1404c21ca(param_1,iVar11,&local_108,local_120);
      dVar22 = local_f8 * param_2[2] +
               (double)CONCAT44(uStack_104,local_108) * *param_2 + local_100 * param_2[1];
      if (ABS(dVar22 + -1.0) <= 1e-06) {
        *(undefined1 *)(local_128 + 0xc) = 3;
        *(int *)(local_128 + 4) = iVar11;
        *(undefined4 *)(local_128 + 8) = 0;
        goto LAB_146d59ee0;
      }
      if ((double)CONCAT44(uVar24,uVar23) <= dVar22 && dVar22 != (double)CONCAT44(uVar24,uVar23)) {
        iVar17 = iVar11;
      }
      if (dVar22 <= (double)CONCAT44(uVar24,uVar23)) {
        dVar22 = (double)CONCAT44(uVar24,uVar23);
      }
      uVar18 = uVar18 + 1;
      uVar23 = SUB84(dVar22,0);
      uVar24 = (undefined4)((ulonglong)dVar22 >> 0x20);
    } while (uVar10 != uVar18);
    if (iVar17 != -1) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x58);
      if (plVar8 != (longlong *)0x0) {
        cVar7 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x60);
        if (cVar7 == '\x03') {
          uVar10 = *(uint *)(*plVar8 + (longlong)iVar17 * 8 + 4);
        }
        else if (cVar7 == '\x02') {
          uVar10 = (uint)*(short *)(*plVar8 + (longlong)iVar17 * 4 + 2);
        }
        else {
          if (cVar7 != '\x01') goto LAB_146d59ee0;
          uVar10 = (uint)*(byte *)(*plVar8 + (longlong)iVar17 * 2 + 1);
        }
        if (0 < (int)uVar10) {
          uVar20 = 1;
          uVar19 = 0xffffffff;
          do {
            uVar1 = uVar20 - 1;
            lVar15 = *(longlong *)(param_1 + 0x88);
            if (*(longlong *)(lVar15 + 0x58) == 0) {
              lVar14 = 0;
              iVar11 = -1;
            }
            else {
              local_108 = iVar17;
              uStack_104 = uVar1;
              iVar11 = FUN_144b030e2(lVar15 + 0x58,&local_108,local_120);
              lVar15 = *(longlong *)(param_1 + 0x88);
              lVar14 = *(longlong *)(lVar15 + 0x58);
            }
            if (uVar20 == uVar10) {
              if (lVar14 == 0) goto LAB_146d5a084;
              uStack_104 = 0;
              uVar9 = uStack_104;
LAB_146d59f73:
              uStack_104 = uVar9;
              local_108 = iVar17;
              iVar12 = FUN_144b030e2(lVar15 + 0x58,&local_108,local_120);
            }
            else {
              uVar9 = uVar20;
              if (lVar14 != 0) goto LAB_146d59f73;
LAB_146d5a084:
              iVar12 = -1;
            }
            uVar9 = uVar1;
            if ((iVar11 == local_ec) || (uVar9 = uVar19, iVar12 == local_ec)) {
              lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30);
              lVar16 = (longlong)iVar11;
              lVar14 = (longlong)iVar12;
              if (ABS(((double)*(float *)(lVar15 + 8 + lVar14 * 0xc) * *(double *)(param_1 + 0x30) -
                      (double)*(float *)(lVar15 + 8 + lVar16 * 0xc) * *(double *)(param_1 + 0x30)) *
                      param_2[2] +
                      ((double)*(float *)(lVar15 + lVar14 * 0xc) * *(double *)(param_1 + 0x20) -
                      (double)*(float *)(lVar15 + lVar16 * 0xc) * *(double *)(param_1 + 0x20)) *
                      *param_2 +
                      ((double)*(float *)(lVar15 + 4 + lVar14 * 0xc) * *(double *)(param_1 + 0x28) -
                      (double)*(float *)(lVar15 + 4 + lVar16 * 0xc) * *(double *)(param_1 + 0x28)) *
                      param_2[1]) < dVar2 * 0.001) {
                *(undefined1 *)(local_128 + 0xc) = 2;
                *(int *)(local_128 + 4) = iVar17;
                *(uint *)(local_128 + 8) = uVar1;
                goto LAB_146d59ee0;
              }
            }
            bVar21 = uVar20 != uVar10;
            uVar20 = uVar20 + 1;
            uVar19 = uVar9;
          } while (bVar21);
          if (uVar9 != 0xffffffff) {
            *(undefined1 *)(local_128 + 0xc) = 1;
            *(int *)(local_128 + 4) = iVar17;
            *(uint *)(local_128 + 8) = uVar9;
          }
        }
      }
LAB_146d59ee0:
      uVar13 = 1;
      goto LAB_146d59e74;
    }
  }
  uVar13 = 0;
LAB_146d59e74:
  if ((local_a0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5a0c3 FUN_146d5a0c3 body=249 status=ok
// SIG undefined FUN_146d5a0c3(void)

undefined8
FUN_146d5a0c3(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4,
             double param_5,longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_146d57471(param_1,param_2,param_3,param_6);
  if (cVar1 != '\0') {
    if ((*(double *)(param_6 + 0x68) <= param_5) ||
       (*(double *)(param_6 + 0x68) +
        param_4[2] * *(double *)(param_6 + 0x60) +
        *param_4 * *(double *)(param_6 + 0x50) + param_4[1] * *(double *)(param_6 + 0x58) <= param_5
       )) {
      local_58 = param_6 + 0x10;
      cVar1 = FUN_146d590ef(param_2,param_3,param_6 + 0x38,param_6 + 0x50);
      if (cVar1 != '\0') {
        local_38 = *(ulonglong *)(param_6 + 0x60) ^ 0x8000000000000000;
        local_48 = *(ulonglong *)(param_6 + 0x50) ^ 0x8000000000000000;
        uStack_40 = *(ulonglong *)(param_6 + 0x58) ^ 0x8000000000000000;
        uVar2 = FUN_146d5a1bd(param_1,&local_48,param_6);
        goto LAB_146d5a145;
      }
    }
  }
  uVar2 = 0;
LAB_146d5a145:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5a1bd FUN_146d5a1bd body=1166 status=ok
// SIG undefined FUN_146d5a1bd(void)

undefined8 FUN_146d5a1bd(longlong param_1,double *param_2,longlong param_3)

{
  ulonglong uVar1;
  short sVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_198 [32];
  longlong local_178;
  int local_170 [6];
  undefined8 *local_158;
  uint *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  int *local_140;
  uint local_138 [18];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar19 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30));
  dVar18 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28));
  dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20));
  if (dVar4 <= dVar18) {
    dVar4 = dVar18;
  }
  lVar7 = 0;
  do {
    local_138[lVar7] = (uint)(0.0 < param_2[lVar7] || param_2[lVar7] == 0.0);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  iVar12 = local_138[1] * 2 + local_138[0] + local_138[2] * 4;
  if (iVar12 != -1) {
    local_140 = local_170;
    local_170[0] = 0;
    local_158 = &DAT_14c992a40;
    local_150 = local_138;
    local_148 = 0x10;
    FUN_146cb0e1a(&DAT_14c992a40,iVar12);
    lVar7 = (longlong)local_170[0];
    if (0 < lVar7) {
      if (dVar4 <= dVar19) {
        dVar4 = dVar19;
      }
      uVar23 = 0;
      uVar24 = 0xbff00000;
      uVar15 = 0xffffffff;
      lVar16 = 0;
      local_178 = param_3;
      do {
        uVar3 = local_138[lVar16];
        FUN_1404b254c(param_1,uVar3,&local_158,local_170);
        dVar19 = (double)CONCAT44(uStack_144,local_148) * param_2[2] +
                 (double)local_158 * *param_2 + (double)local_150 * param_2[1];
        if (ABS(dVar19 + -1.0) <= 1e-06) {
          *(undefined1 *)(local_178 + 0xc) = 3;
          *(uint *)(local_178 + 4) = uVar3;
          *(undefined4 *)(local_178 + 8) = 0;
          goto LAB_146d5a633;
        }
        if ((double)CONCAT44(uVar24,uVar23) <= dVar19 && dVar19 != (double)CONCAT44(uVar24,uVar23))
        {
          uVar15 = uVar3;
        }
        if (dVar19 <= (double)CONCAT44(uVar24,uVar23)) {
          dVar19 = (double)CONCAT44(uVar24,uVar23);
        }
        lVar16 = lVar16 + 1;
        uVar23 = SUB84(dVar19,0);
        uVar24 = (undefined4)((ulonglong)dVar19 >> 0x20);
      } while (lVar7 != lVar16);
      if (uVar15 != 0xffffffff) {
        sVar2 = *(short *)(DAT_14c992a40 + 2 + (longlong)(int)uVar15 * 4);
        if (0 < (longlong)sVar2) {
          lVar7 = (longlong)*(short *)(DAT_14c992a40 + (longlong)(int)uVar15 * 4);
          dVar20 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
          dVar21 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
          dVar22 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
          dVar19 = dVar20 * 0.5 + *(double *)(param_1 + 0x30);
          dVar18 = dVar21 * 0.5 + *(double *)(param_1 + 0x28);
          dVar5 = dVar22 * 0.5 + *(double *)(param_1 + 0x20);
          psVar13 = (short *)(DAT_14c992a50 + lVar7 * 6 + 2);
          iVar9 = -1;
          uVar14 = 0;
          do {
            uVar1 = uVar14 + 1;
            uVar10 = 0;
            if ((int)sVar2 - 1 != uVar14) {
              uVar10 = uVar1;
            }
            iVar11 = (int)*(short *)(DAT_14c992a50 + 2 + (uVar10 + lVar7) * 6);
            iVar6 = (int)uVar14;
            if ((iVar12 == *psVar13) || (iVar6 = iVar9, iVar12 == iVar11)) {
              iVar9 = iVar6;
              lVar16 = (longlong)(int)*psVar13;
              lVar17 = (longlong)iVar11;
              if (ABS(((*(double *)(DAT_14c992a20 + 0x10 + lVar17 * 0x18) * dVar20 * 0.5 + dVar19) -
                      (*(double *)(DAT_14c992a20 + 0x10 + lVar16 * 0x18) * dVar20 * 0.5 + dVar19)) *
                      param_2[2] +
                      ((*(double *)(DAT_14c992a20 + lVar17 * 0x18) * dVar22 * 0.5 + dVar5) -
                      (*(double *)(DAT_14c992a20 + lVar16 * 0x18) * dVar22 * 0.5 + dVar5)) *
                      *param_2 +
                      ((*(double *)(DAT_14c992a20 + 8 + lVar17 * 0x18) * dVar21 * 0.5 + dVar18) -
                      (*(double *)(DAT_14c992a20 + 8 + lVar16 * 0x18) * dVar21 * 0.5 + dVar18)) *
                      param_2[1]) < dVar4 * 0.001) {
                *(undefined1 *)(local_178 + 0xc) = 2;
                *(uint *)(local_178 + 4) = uVar15;
                *(int *)(local_178 + 8) = (int)uVar14;
                goto LAB_146d5a633;
              }
            }
            psVar13 = psVar13 + 3;
            uVar14 = uVar1;
          } while ((longlong)sVar2 != uVar1);
          if (iVar9 != -1) {
            *(undefined1 *)(local_178 + 0xc) = 1;
            *(uint *)(local_178 + 4) = uVar15;
            *(int *)(local_178 + 8) = iVar9;
          }
        }
LAB_146d5a633:
        uVar8 = 1;
        goto LAB_146d5a2bb;
      }
    }
  }
  uVar8 = 0;
LAB_146d5a2bb:
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 146d5a64c FUN_146d5a64c body=1236 status=ok
// SIG undefined FUN_146d5a64c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146d5a64c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [190];
  undefined8 local_a0 [11];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  iVar5 = *(int *)(param_1 + 0x48);
  if (1 < (longlong)iVar5) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    memset(local_398,0,0x2f0);
    local_3a0 = (longlong)iVar5 * 0x58 + lVar2 + -0x58;
    local_3a8 = lVar2;
    fVar22 = logf((float)iVar5);
    local_398[0] = (int)(longlong)(fVar22 + fVar22);
    plVar4 = &local_3a8;
    do {
      puVar16 = (undefined8 *)*plVar4;
      puVar9 = (undefined8 *)plVar4[1];
      iVar5 = (int)plVar4[2];
      iVar1 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar16) >> 3) * -0x45d1745d;
      uVar17 = iVar1 + 1;
      puVar13 = puVar9;
      puVar10 = puVar16;
      if (iVar5 != 0) {
LAB_146d5a6fc:
        if (8 < (int)uVar17) {
          puVar6 = puVar16 + (ulonglong)(uVar17 >> 1) * 0xb;
          puVar3 = local_a0;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar6 = puVar16;
          puVar3 = puVar16 + (ulonglong)(uVar17 >> 1) * 0xb;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar6 = local_a0;
          puVar3 = puVar16;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar6 = puVar9 + 0xb;
          puVar3 = puVar16;
          do {
            puVar8 = puVar3 + 0xb;
            puVar11 = puVar3 + 0xb;
            do {
              puVar3 = puVar11;
              puVar18 = puVar8;
              if (puVar9 < puVar3) break;
              puVar8 = puVar18 + 0xb;
              puVar11 = puVar3 + 0xb;
            } while ((double)puVar3[9] < (double)puVar16[9] ||
                     (double)puVar3[9] == (double)puVar16[9]);
            puVar8 = puVar6 + -0x16;
            do {
              puVar11 = puVar6;
              puVar19 = puVar8;
              puVar6 = puVar11 + -0xb;
              if (puVar6 <= puVar16) break;
              puVar8 = puVar19 + -0xb;
            } while ((double)puVar16[9] < (double)puVar11[-2] ||
                     (double)puVar16[9] == (double)puVar11[-2]);
            lVar2 = 0xb;
            puVar8 = puVar16;
            puVar7 = puVar3;
            puVar12 = local_a0;
            if (puVar6 < puVar3) goto code_r0x000146d5a7d2;
            for (; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar12 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar8 = puVar6;
            puVar11 = puVar3;
            for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar8 = local_a0;
            puVar11 = puVar6;
            for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
          } while( true );
        }
        while (puVar10 = puVar16, puVar13 = puVar16, puVar16 < puVar9) {
          while (puVar6 = puVar10, puVar13 = puVar13 + 0xb, puVar13 <= puVar9) {
            puVar10 = puVar13;
            if ((double)puVar13[9] < (double)puVar6[9] || (double)puVar13[9] == (double)puVar6[9]) {
              puVar10 = puVar6;
            }
          }
          puVar13 = puVar9 + -0xb;
          puVar10 = puVar6;
          puVar3 = local_a0;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar10 = puVar9;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar10 = local_a0;
          puVar6 = puVar9;
          for (lVar2 = 0xb; puVar9 = puVar13, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_146d5aae6;
      }
LAB_146d5a87d:
      if (uVar17 != 0) {
        iVar1 = (iVar1 - (iVar1 + -1 >> 0x1f)) + -1 >> 1;
        iVar5 = iVar1;
joined_r0x000146d5a8a5:
        do {
          iVar15 = iVar5 * 2 + 1;
          if (iVar15 < (int)uVar17) {
            iVar14 = iVar5 * 2 + 2;
            if ((iVar14 < (int)uVar17) &&
               ((double)puVar16[(longlong)iVar15 * 0xb + 9] <
                (double)puVar16[(longlong)iVar14 * 0xb + 9] ||
                (double)puVar16[(longlong)iVar15 * 0xb + 9] ==
                (double)puVar16[(longlong)iVar14 * 0xb + 9])) {
              iVar15 = iVar14;
            }
            if ((double)puVar16[(longlong)iVar5 * 0xb + 9] <=
                (double)puVar16[(longlong)iVar15 * 0xb + 9] &&
                (double)puVar16[(longlong)iVar15 * 0xb + 9] !=
                (double)puVar16[(longlong)iVar5 * 0xb + 9]) {
              puVar9 = puVar16 + (longlong)iVar5 * 0xb;
              puVar13 = local_a0;
              for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar9 = puVar16 + (longlong)iVar15 * 0xb;
              puVar13 = puVar16 + (longlong)iVar5 * 0xb;
              for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar9 = local_a0;
              puVar13 = puVar16 + (longlong)iVar15 * 0xb;
              for (lVar2 = 0xb; iVar5 = iVar15, lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              goto joined_r0x000146d5a8a5;
            }
          }
          bVar21 = iVar1 != 0;
          iVar1 = iVar1 + -1;
          iVar5 = iVar1;
        } while (bVar21);
        if (1 < (int)uVar17) {
          puVar9 = puVar16;
          puVar13 = local_a0;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar9 = puVar16 + ((ulonglong)uVar17 - 1) * 0xb;
          puVar13 = puVar16;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar9 = local_a0;
          puVar13 = puVar16 + ((ulonglong)uVar17 - 1) * 0xb;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
          uVar20 = (ulonglong)uVar17 - 1;
          if (uVar17 != 2) {
            do {
              iVar5 = 0;
              iVar15 = 1;
              iVar1 = 0;
              do {
                iVar5 = iVar5 + 2;
                iVar14 = iVar15;
                if (((longlong)iVar5 < (longlong)uVar20) &&
                   ((double)puVar16[(longlong)iVar15 * 0xb + 9] <
                    (double)puVar16[(longlong)iVar5 * 0xb + 9] ||
                    (double)puVar16[(longlong)iVar15 * 0xb + 9] ==
                    (double)puVar16[(longlong)iVar5 * 0xb + 9])) {
                  iVar14 = iVar5;
                }
                if ((double)puVar16[(longlong)iVar14 * 0xb + 9] <
                    (double)puVar16[(longlong)iVar1 * 0xb + 9] ||
                    (double)puVar16[(longlong)iVar14 * 0xb + 9] ==
                    (double)puVar16[(longlong)iVar1 * 0xb + 9]) break;
                puVar9 = puVar16 + (longlong)iVar1 * 0xb;
                puVar13 = local_a0;
                for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *puVar13 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar9 = puVar16 + (longlong)iVar14 * 0xb;
                puVar13 = puVar16 + (longlong)iVar1 * 0xb;
                for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *puVar13 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar9 = local_a0;
                puVar13 = puVar16 + (longlong)iVar14 * 0xb;
                for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *puVar13 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar13 = puVar13 + 1;
                }
                iVar5 = iVar14 * 2;
                iVar15 = iVar14 * 2 + 1;
                iVar1 = iVar14;
              } while ((longlong)iVar15 < (longlong)uVar20);
              puVar9 = puVar16;
              puVar13 = local_a0;
              for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar9 = puVar16 + (uVar20 - 1) * 0xb;
              puVar13 = puVar16;
              for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar9 = local_a0;
              puVar13 = puVar16 + (uVar20 - 1) * 0xb;
              for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              bVar21 = 2 < uVar20;
              uVar20 = uVar20 - 1;
            } while (bVar21);
          }
        }
      }
LAB_146d5aae6:
      plVar4 = plVar4 + -3;
    } while (&local_3a8 <= plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146d5a7d2:
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar8 = puVar6;
  puVar7 = puVar16;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_a0;
  puVar7 = puVar6;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = iVar5 + -1;
  puVar11 = puVar11 + -0x16;
  if ((longlong)puVar19 - (longlong)puVar10 < (longlong)puVar13 - (longlong)puVar18) {
    if (puVar3 < puVar9) {
      *plVar4 = (longlong)puVar3;
      plVar4[1] = (longlong)puVar9;
      *(int *)(plVar4 + 2) = iVar5;
      plVar4 = plVar4 + 3;
    }
    puVar18 = puVar16;
    if (puVar6 <= puVar16 + 0xb) goto LAB_146d5aae6;
  }
  else {
    if (puVar16 + 0xb < puVar6) {
      *plVar4 = (longlong)puVar16;
      plVar4[1] = (longlong)puVar11;
      *(int *)(plVar4 + 2) = iVar5;
      plVar4 = plVar4 + 3;
    }
    puVar16 = puVar3;
    puVar11 = puVar9;
    puVar19 = puVar9;
    if (puVar9 <= puVar3) goto LAB_146d5aae6;
  }
  iVar1 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar18) >> 3) * -0x45d1745d;
  uVar17 = iVar1 + 1;
  puVar9 = puVar11;
  puVar13 = puVar19;
  puVar10 = puVar18;
  if (iVar5 == 0) goto LAB_146d5a87d;
  goto LAB_146d5a6fc;
}



// FUNCTION 146d5ab22 FUN_146d5ab22 body=1577 status=ok
// SIG undefined FUN_146d5ab22(void)

void FUN_146d5ab22(longlong param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  undefined8 uVar9;
  double *pdVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  double *pdVar18;
  double *pdVar19;
  int *piVar20;
  double *pdVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  longlong lVar25;
  double *pdVar26;
  double *pdVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  double *pdVar33;
  double *pdVar34;
  double *pdVar35;
  bool bVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_3b8 [32];
  undefined8 *local_398;
  undefined8 uStack_390;
  undefined8 *local_388;
  undefined8 *puStack_380;
  undefined4 local_378 [188];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < *(int *)(param_1 + 0x48)) {
    local_398 = (undefined8 *)0x0;
    uStack_390 = 0;
    FUN_146d4f80c();
    puVar14 = local_398;
    uVar17 = (ulonglong)*(uint *)(param_1 + 0x48);
    if (0 < (int)*(uint *)(param_1 + 0x48)) {
      lVar13 = 8;
      lVar15 = 0x40;
      lVar25 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 0x40);
        dVar2 = *(double *)(lVar7 + -0x10 + lVar15);
        dVar3 = *(double *)(lVar7 + -0x40 + lVar15);
        dVar4 = *(double *)(lVar7 + -0x38 + lVar15);
        dVar5 = *(double *)(lVar7 + -8 + lVar15);
        dVar6 = *(double *)(lVar7 + -0x30 + lVar15);
        dVar8 = dVar6 * *(double *)(lVar7 + lVar15) + dVar3 * dVar2 + dVar4 * dVar5;
        dVar6 = dVar6 - dVar8 * *(double *)(lVar7 + lVar15);
        dVar4 = dVar4 - dVar5 * dVar8;
        dVar3 = dVar3 - dVar2 * dVar8;
        *(double *)((longlong)local_398 + lVar13 + -8) =
             dVar6 * dVar6 + dVar3 * dVar3 + dVar4 * dVar4;
        *(int *)((longlong)local_398 + lVar13) = (int)lVar25;
        lVar25 = lVar25 + 1;
        uVar17 = (ulonglong)*(int *)(param_1 + 0x48);
        lVar13 = lVar13 + 0x10;
        lVar15 = lVar15 + 0x58;
      } while (lVar25 < (longlong)uVar17);
    }
    iVar28 = (int)uStack_390;
    lVar13 = (longlong)(int)uStack_390;
    if (1 < lVar13) {
      memset(local_378,0,0x2f0);
      local_388 = puVar14;
      puStack_380 = puVar14 + lVar13 * 2 + -2;
      fVar37 = logf((float)iVar28);
      local_378[0] = (int)(longlong)(fVar37 + fVar37);
      ppuVar16 = &local_388;
      do {
        pdVar19 = (double *)*ppuVar16;
        pdVar21 = (double *)ppuVar16[1];
        iVar28 = *(int *)(ppuVar16 + 2);
        iVar32 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar19) >> 4);
        uVar31 = iVar32 + 1;
        pdVar23 = pdVar19;
        pdVar26 = pdVar21;
        if (iVar28 != 0) {
LAB_146d5ad06:
          if (8 < (int)uVar31) {
            dVar2 = pdVar19[(ulonglong)(uVar31 >> 1) * 2];
            dVar3 = (pdVar19 + (ulonglong)(uVar31 >> 1) * 2)[1];
            dVar4 = pdVar19[1];
            pdVar19[(ulonglong)(uVar31 >> 1) * 2] = *pdVar19;
            (pdVar19 + (ulonglong)(uVar31 >> 1) * 2)[1] = dVar4;
            *pdVar19 = dVar2;
            pdVar19[1] = dVar3;
            pdVar33 = pdVar26 + 2;
            pdVar18 = pdVar19;
            do {
              pdVar10 = pdVar18 + 2;
              pdVar27 = pdVar18 + 2;
              do {
                pdVar35 = pdVar27;
                pdVar18 = pdVar10;
                if (pdVar26 < pdVar18) break;
                pdVar10 = pdVar18 + 2;
                pdVar27 = pdVar35 + 2;
              } while (*pdVar18 < *pdVar19 || *pdVar18 == *pdVar19);
              pdVar10 = pdVar33 + -4;
              do {
                pdVar27 = pdVar33;
                pdVar34 = pdVar10;
                pdVar33 = pdVar27 + -2;
                if (pdVar33 <= pdVar19) break;
                pdVar10 = pdVar34 + -2;
              } while (*pdVar19 < *pdVar33 || *pdVar19 == *pdVar33);
              if (pdVar33 < pdVar18) goto LAB_146d5adb9;
              dVar2 = *pdVar18;
              dVar3 = pdVar18[1];
              dVar4 = pdVar27[-1];
              *pdVar18 = *pdVar33;
              pdVar18[1] = dVar4;
              *pdVar33 = dVar2;
              pdVar27[-1] = dVar3;
            } while( true );
          }
          if (pdVar19 < pdVar26) {
            do {
              pdVar21 = pdVar19;
              if (pdVar19 + 2 <= pdVar26) {
                uVar38 = SUB84(*pdVar19,0);
                uVar39 = (undefined4)((ulonglong)*pdVar19 >> 0x20);
                pdVar23 = pdVar19 + 2;
                do {
                  dVar2 = *pdVar23;
                  if ((double)CONCAT44(uVar39,uVar38) <= dVar2 &&
                      dVar2 != (double)CONCAT44(uVar39,uVar38)) {
                    pdVar21 = pdVar23;
                  }
                  uVar11 = SUB84(dVar2,0);
                  uVar12 = (int)((ulonglong)dVar2 >> 0x20);
                  if (dVar2 <= (double)CONCAT44(uVar39,uVar38)) {
                    uVar11 = uVar38;
                    uVar12 = uVar39;
                  }
                  uVar39 = uVar12;
                  uVar38 = uVar11;
                  pdVar23 = pdVar23 + 2;
                } while (pdVar23 <= pdVar26);
              }
              local_88 = (undefined8 *)*pdVar21;
              uStack_80 = (undefined8 *)pdVar21[1];
              dVar2 = pdVar26[1];
              *pdVar21 = *pdVar26;
              pdVar21[1] = dVar2;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              *(undefined4 *)pdVar26 = (undefined4)local_88;
              *(undefined4 *)((longlong)pdVar26 + 4) = local_88._4_4_;
              *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_80._4_4_;
              pdVar26 = pdVar26 + -2;
            } while (pdVar19 < pdVar26);
          }
          goto LAB_146d5b098;
        }
LAB_146d5ae64:
        if (uVar31 != 0) {
          iVar28 = (iVar32 - (iVar32 + -1 >> 0x1f)) + -1 >> 1;
          iVar32 = iVar28;
joined_r0x000146d5ae8b:
          do {
            iVar30 = iVar28 * 2 + 1;
            if (iVar30 < (int)uVar31) {
              iVar29 = iVar28 * 2 + 2;
              if ((iVar29 < (int)uVar31) &&
                 (pdVar19[(longlong)iVar30 * 2] < pdVar19[(longlong)iVar29 * 2] ||
                  pdVar19[(longlong)iVar30 * 2] == pdVar19[(longlong)iVar29 * 2])) {
                iVar30 = iVar29;
              }
              if (pdVar19[(longlong)iVar28 * 2] <= pdVar19[(longlong)iVar30 * 2] &&
                  pdVar19[(longlong)iVar30 * 2] != pdVar19[(longlong)iVar28 * 2]) {
                pdVar26 = pdVar19 + (longlong)iVar28 * 2;
                pdVar21 = pdVar19 + (longlong)iVar30 * 2;
                local_88 = (undefined8 *)*pdVar26;
                uStack_80 = (undefined8 *)pdVar26[1];
                dVar2 = pdVar21[1];
                *pdVar26 = *pdVar21;
                pdVar26[1] = dVar2;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                *(undefined4 *)pdVar21 = (undefined4)local_88;
                *(undefined4 *)((longlong)pdVar21 + 4) = local_88._4_4_;
                *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_80._4_4_;
                iVar28 = iVar30;
                goto joined_r0x000146d5ae8b;
              }
            }
            bVar36 = iVar32 != 0;
            iVar28 = iVar32 + -1;
            iVar32 = iVar28;
          } while (bVar36);
          if (1 < (int)uVar31) {
            uVar17 = (ulonglong)uVar31 - 1;
            local_88 = (undefined8 *)*pdVar19;
            uStack_80 = (undefined8 *)pdVar19[1];
            dVar2 = (pdVar19 + uVar17 * 2)[1];
            *pdVar19 = pdVar19[uVar17 * 2];
            pdVar19[1] = dVar2;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            pdVar26 = pdVar19 + uVar17 * 2;
            *(undefined4 *)pdVar26 = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar26 + 4) = local_88._4_4_;
            *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_80._4_4_;
            if (uVar31 != 2) {
              do {
                iVar28 = 0;
                iVar30 = 1;
                iVar32 = 0;
                do {
                  iVar28 = iVar28 + 2;
                  iVar29 = iVar30;
                  if (((longlong)iVar28 < (longlong)uVar17) &&
                     (pdVar19[(longlong)iVar30 * 2] < pdVar19[(longlong)iVar28 * 2] ||
                      pdVar19[(longlong)iVar30 * 2] == pdVar19[(longlong)iVar28 * 2])) {
                    iVar29 = iVar28;
                  }
                  if (pdVar19[(longlong)iVar29 * 2] < pdVar19[(longlong)iVar32 * 2] ||
                      pdVar19[(longlong)iVar29 * 2] == pdVar19[(longlong)iVar32 * 2]) break;
                  pdVar26 = pdVar19 + (longlong)iVar32 * 2;
                  pdVar21 = pdVar19 + (longlong)iVar29 * 2;
                  dVar2 = *pdVar26;
                  dVar3 = pdVar26[1];
                  dVar4 = pdVar21[1];
                  *pdVar26 = *pdVar21;
                  pdVar26[1] = dVar4;
                  *pdVar21 = dVar2;
                  pdVar21[1] = dVar3;
                  iVar28 = iVar29 * 2;
                  iVar30 = iVar29 * 2 + 1;
                  iVar32 = iVar29;
                } while ((longlong)iVar30 < (longlong)uVar17);
                uVar1 = uVar17 - 1;
                local_88 = (undefined8 *)*pdVar19;
                uStack_80 = (undefined8 *)pdVar19[1];
                dVar2 = (pdVar19 + uVar1 * 2)[1];
                *pdVar19 = pdVar19[uVar1 * 2];
                pdVar19[1] = dVar2;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                pdVar26 = pdVar19 + uVar1 * 2;
                *(undefined4 *)pdVar26 = (undefined4)local_88;
                *(undefined4 *)((longlong)pdVar26 + 4) = local_88._4_4_;
                *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_80._4_4_;
                bVar36 = 2 < uVar17;
                uVar17 = uVar1;
              } while (bVar36);
            }
          }
        }
LAB_146d5b098:
        ppuVar16 = ppuVar16 + -3;
      } while (&local_388 <= ppuVar16);
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x48);
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = (undefined8 *)0x0;
    FUN_146d4f854(&local_88,uVar17);
    if (0 < *(int *)(param_1 + 0x48)) {
      piVar20 = (int *)(local_398 + 1);
      lVar13 = 0;
      puVar14 = local_88;
      do {
        puVar22 = (undefined8 *)((longlong)*piVar20 * 0x58 + *(longlong *)(param_1 + 0x40));
        puVar24 = puVar14;
        for (lVar15 = 0xb; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar24 = *puVar22;
          puVar22 = puVar22 + 1;
          puVar24 = puVar24 + 1;
        }
        lVar13 = lVar13 + 1;
        puVar14 = puVar14 + 0xb;
        piVar20 = piVar20 + 4;
      } while (lVar13 < *(int *)(param_1 + 0x48));
    }
    local_388 = local_88;
    puStack_380 = uStack_80;
    lVar13 = *(longlong *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_88;
    *(undefined4 *)(param_1 + 0x44) = local_88._4_4_;
    *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_80;
    *(undefined4 *)(param_1 + 0x4c) = uStack_80._4_4_;
    local_88 = (undefined8 *)lVar13;
    uStack_80 = (undefined8 *)uVar9;
    if (lVar13 != 0) {
      FUN_1400020a8();
    }
    if (local_398 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146d5adb9:
  local_88 = (undefined8 *)*pdVar19;
  uStack_80 = (undefined8 *)pdVar19[1];
  dVar2 = pdVar27[-1];
  *pdVar19 = *pdVar33;
  pdVar19[1] = dVar2;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  *(undefined4 *)pdVar33 = (undefined4)local_88;
  *(undefined4 *)((longlong)pdVar27 + -0xc) = local_88._4_4_;
  *(undefined4 *)(pdVar27 + -1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)pdVar27 + -4) = uStack_80._4_4_;
  iVar28 = iVar28 + -1;
  pdVar27 = pdVar27 + -4;
  if ((longlong)pdVar34 - (longlong)pdVar23 < (longlong)pdVar21 - (longlong)pdVar35) {
    if (pdVar18 < pdVar26) {
      *ppuVar16 = pdVar18;
      ppuVar16[1] = pdVar26;
      *(int *)(ppuVar16 + 2) = iVar28;
      ppuVar16 = ppuVar16 + 3;
    }
    pdVar35 = pdVar19;
    pdVar21 = pdVar34;
    if (pdVar33 <= pdVar19 + 2) goto LAB_146d5b098;
  }
  else {
    if (pdVar19 + 2 < pdVar33) {
      *ppuVar16 = pdVar19;
      ppuVar16[1] = pdVar27;
      *(int *)(ppuVar16 + 2) = iVar28;
      ppuVar16 = ppuVar16 + 3;
    }
    pdVar19 = pdVar18;
    pdVar27 = pdVar26;
    pdVar21 = pdVar26;
    if (pdVar26 <= pdVar18) goto LAB_146d5b098;
  }
  iVar32 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar35) >> 4);
  uVar31 = iVar32 + 1;
  pdVar23 = pdVar35;
  pdVar26 = pdVar27;
  if (iVar28 == 0) goto LAB_146d5ae64;
  goto LAB_146d5ad06;
}



// FUNCTION 146d5b14c FUN_146d5b14c body=2046 status=ok
// SIG undefined FUN_146d5b14c(void)

ulonglong FUN_146d5b14c(longlong param_1,int param_2,char *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  double *pdVar11;
  char cVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  double *pdVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [40];
  char *local_110;
  double *local_108;
  double *local_100;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar21 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x30);
  pdVar10 = (double *)FUN_1404afe38(lVar21);
  cVar12 = *param_3;
  if (cVar12 == '\x02') {
    lVar22 = (longlong)*(int *)param_4;
    iVar13 = 0;
    if (lVar22 != 2) {
      iVar13 = *(int *)param_4 + 1;
    }
    iVar9 = *(int *)(lVar21 + 100 + lVar22 * 4);
    lVar16 = (longlong)iVar13;
    iVar13 = *(int *)(lVar21 + 100 + lVar16 * 4);
    local_f4 = iVar9;
    local_f8 = iVar13;
    if (iVar13 == -1 || iVar9 < iVar13) {
      local_f4 = iVar13;
      local_f8 = iVar9;
    }
    local_110 = param_3;
    local_108 = pdVar10;
    iVar8 = FUN_1404aff50(param_1,param_2);
    if (iVar8 != -1) {
      pdVar24 = (double *)((longlong)iVar8 * 0x78 + *(longlong *)(param_1 + 0x30));
      local_100 = param_4;
      pdVar11 = (double *)FUN_1404afe38(pdVar24);
      dVar26 = *local_108;
      dVar28 = local_108[1];
      dVar1 = *pdVar11;
      dVar2 = pdVar11[1];
      dVar3 = local_108[2];
      dVar4 = pdVar11[2];
      pdVar10 = local_108;
      if (1e-06 < ABS(dVar3 * dVar4 + dVar26 * dVar1 + dVar28 * dVar2 + -1.0)) {
        dVar7 = *(double *)(lVar21 + 0x10 + lVar16 * 0x18) -
                *(double *)(lVar21 + 0x10 + lVar22 * 0x18);
        dVar27 = *(double *)(lVar21 + 8 + lVar16 * 0x18) - *(double *)(lVar21 + 8 + lVar22 * 0x18);
        dVar30 = *(double *)(lVar21 + lVar16 * 0x18) - *(double *)(lVar21 + lVar22 * 0x18);
        dVar31 = dVar30 * dVar28 - dVar26 * dVar27;
        dVar30 = dVar7 * dVar26 - dVar3 * dVar30;
        dVar26 = dVar27 * dVar3 - dVar7 * dVar28;
        if (0.0 <= dVar4 * dVar31 + dVar1 * dVar26 + dVar2 * dVar30) {
          if (0.0 <= dVar31 * param_5[2] + dVar26 * *param_5 + dVar30 * param_5[1]) {
            lVar22 = 0x10;
            lVar16 = 8;
            lVar19 = 8;
            lVar20 = 0x10;
            pdVar17 = pdVar24;
            if (*(int *)((longlong)pdVar24 + 100) == iVar9) {
LAB_146d5b4b6:
              pdVar14 = pdVar24;
              if (*(int *)((longlong)pdVar24 + 100) != iVar13) {
                if (*(int *)(pdVar24 + 0xd) == iVar13) {
                  pdVar14 = pdVar24 + 3;
                  lVar22 = 0x28;
                  lVar16 = 0x20;
                }
                else {
                  if (*(int *)((longlong)pdVar24 + 0x6c) != iVar13) goto LAB_146d5b534;
                  pdVar14 = pdVar24 + 6;
                  lVar22 = 0x40;
                  lVar16 = 0x38;
                }
              }
              dVar28 = *(double *)((longlong)pdVar24 + lVar20) -
                       *(double *)((longlong)pdVar24 + lVar22);
              dVar26 = *(double *)((longlong)pdVar24 + lVar19) -
                       *(double *)((longlong)pdVar24 + lVar16);
              pdVar10 = pdVar11;
              if (param_5[2] * ((*pdVar17 - *pdVar14) * dVar2 - dVar1 * dVar26) +
                  *param_5 * (dVar26 * dVar4 - dVar28 * dVar2) +
                  param_5[1] * (dVar28 * dVar1 - dVar4 * (*pdVar17 - *pdVar14)) < 0.0)
              goto LAB_146d5b3b0;
            }
            else {
              if (*(int *)(pdVar24 + 0xd) == iVar9) {
                pdVar17 = pdVar24 + 3;
                lVar20 = 0x28;
                lVar19 = 0x20;
                goto LAB_146d5b4b6;
              }
              if (*(int *)((longlong)pdVar24 + 0x6c) == iVar9) {
                pdVar17 = pdVar24 + 6;
                lVar20 = 0x40;
                lVar19 = 0x38;
                goto LAB_146d5b4b6;
              }
            }
LAB_146d5b534:
            cVar12 = *local_110;
            pdVar10 = local_108;
            param_4 = local_100;
            param_3 = local_110;
            goto LAB_146d5b542;
          }
        }
      }
LAB_146d5b3b0:
      *local_110 = '\x03';
LAB_146d5b3b5:
      *(undefined4 *)local_100 = 0;
      param_5[2] = pdVar10[2];
      dVar26 = *pdVar10;
      dVar28 = pdVar10[1];
      goto LAB_146d5b3cc;
    }
    *local_110 = '\x03';
    *(undefined4 *)param_4 = 0;
    param_5[2] = local_108[2];
    dVar26 = local_108[1];
    *param_5 = *local_108;
    param_5[1] = dVar26;
  }
  else {
LAB_146d5b542:
    pdVar24 = (double *)0x0;
    if (cVar12 != '\x01') goto LAB_146d5b3d3;
    iVar13 = *(int *)(lVar21 + 100 + (longlong)*(int *)param_4 * 4);
    pdVar11 = (double *)(lVar21 + (longlong)*(int *)param_4 * 0x18);
    local_110 = param_3;
    local_108 = pdVar10;
    local_100 = param_4;
    iVar9 = param_2;
    do {
      pdVar17 = (double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x78);
      if (*(int *)(*(longlong *)(param_1 + 0x30) + 100 + (longlong)iVar9 * 0x78) == iVar13) {
        pdVar10 = pdVar17 + 4;
        pdVar14 = pdVar17 + 5;
        lVar21 = 0x40;
        lVar22 = 0x38;
        pdVar15 = pdVar17 + 3;
        pdVar18 = pdVar17 + 6;
LAB_146d5b5b1:
        dVar26 = *pdVar14;
        dVar28 = *pdVar10;
        dVar1 = *pdVar15;
        dVar2 = *(double *)((longlong)pdVar17 + lVar21);
        dVar3 = *(double *)((longlong)pdVar17 + lVar22);
        dVar4 = *pdVar18;
        pdVar10 = (double *)FUN_1404afe38(pdVar17);
        dVar26 = dVar26 - pdVar11[2];
        dVar28 = dVar28 - pdVar11[1];
        dVar1 = dVar1 - *pdVar11;
        dVar2 = dVar2 - pdVar11[2];
        dVar3 = dVar3 - pdVar11[1];
        dVar4 = dVar4 - *pdVar11;
        dVar27 = *pdVar10;
        dVar30 = pdVar10[1];
        dVar31 = pdVar10[2];
        dVar7 = *param_5;
        dVar5 = param_5[1];
        dVar6 = param_5[2];
        dVar29 = (dVar27 * dVar28 - dVar1 * dVar30) * dVar6 +
                 (dVar30 * dVar26 - dVar28 * dVar31) * dVar7 +
                 (dVar31 * dVar1 - dVar26 * dVar27) * dVar5;
        dVar30 = (dVar4 * dVar30 - dVar27 * dVar3) * dVar6 +
                 (dVar3 * dVar31 - dVar30 * dVar2) * dVar7 +
                 (dVar2 * dVar27 - dVar31 * dVar4) * dVar5;
        dVar29 = ABS(dVar29) * dVar29;
        dVar30 = ABS(dVar30) * dVar30;
        dVar27 = (dVar26 * dVar26 + dVar1 * dVar1 + dVar28 * dVar28) * 1e-08;
        dVar31 = (dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3) * 1e-08;
        if (((-dVar27 <= dVar29) && (-dVar31 <= dVar30)) ||
           (((dVar29 <= dVar27 && (dVar30 <= dVar31)) &&
            ((0.0 < dVar26 * dVar6 + dVar1 * dVar7 + dVar28 * dVar5 ||
             (0.0 < dVar6 * dVar2 + dVar7 * dVar4 + dVar3 * dVar5)))))) {
          *local_110 = '\x03';
          goto LAB_146d5b3b5;
        }
      }
      else {
        if (*(int *)(pdVar17 + 0xd) == iVar13) {
          pdVar10 = pdVar17 + 7;
          pdVar14 = pdVar17 + 8;
          lVar21 = 0x10;
          lVar22 = 8;
          pdVar15 = pdVar17 + 6;
          pdVar18 = pdVar17;
          goto LAB_146d5b5b1;
        }
        if (*(int *)((longlong)pdVar17 + 0x6c) == iVar13) {
          pdVar10 = pdVar17 + 1;
          pdVar14 = pdVar17 + 2;
          pdVar18 = pdVar17 + 3;
          lVar21 = 0x28;
          lVar22 = 0x20;
          pdVar15 = pdVar17;
          goto LAB_146d5b5b1;
        }
      }
      iVar8 = *(int *)(pdVar17 + 0xd);
      if (((*(int *)((longlong)pdVar17 + 100) != iVar13) &&
          (bVar25 = iVar8 != iVar13, iVar8 = *(int *)((longlong)pdVar17 + 0x6c), bVar25)) &&
         (iVar8 = *(int *)((longlong)pdVar17 + 100), *(int *)((longlong)pdVar17 + 0x6c) != iVar13))
      {
LAB_146d5b89d:
        pdVar24 = (double *)0x0;
        goto LAB_146d5b3d3;
      }
      local_f4 = iVar8;
      local_f8 = iVar13;
      if (iVar8 != -1 && iVar8 <= iVar13) {
        local_f4 = iVar13;
        local_f8 = iVar8;
      }
      iVar9 = FUN_1404aff50(param_1,iVar9,&local_f8);
      if (iVar9 == param_2) goto LAB_146d5b89d;
    } while ((iVar9 != -1) &&
            (uVar23 = (int)pdVar24 + 1, pdVar24 = (double *)(ulonglong)uVar23,
            (int)uVar23 < *(int *)(param_1 + 0x38)));
    *local_110 = '\x03';
    *(undefined4 *)local_100 = 0;
    param_5[2] = local_108[2];
    dVar26 = *local_108;
    dVar28 = local_108[1];
LAB_146d5b3cc:
    *param_5 = dVar26;
    param_5[1] = dVar28;
    param_4 = pdVar24;
  }
  pdVar24 = (double *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
LAB_146d5b3d3:
  if ((local_f0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return (ulonglong)pdVar24 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5b94b FUN_146d5b94b body=242 status=ok
// SIG undefined FUN_146d5b94b(void)

longlong FUN_146d5b94b(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  code **local_d0;
  longlong *local_c0;
  longlong *local_b8;
  code *local_b0;
  longlong **local_a8;
  longlong local_a0;
  undefined8 local_98 [13];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = 0;
  lVar1 = 0;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    local_a8 = &local_c0;
    local_b8 = &local_a0;
    local_d0 = &local_b0;
    local_b0 = FUN_1429a37da;
    local_d8 = &local_2c;
    local_2c = 0;
    local_30 = 0;
    puVar2 = &DAT_14c846480;
    puVar3 = local_98;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_c0 = param_2;
    (**(code **)(*param_2 + 0x138))(param_2,local_98,0xffffffff);
    lVar1 = local_a0;
    if (local_a0 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x4a0) + (longlong)(int)param_1[1] * 8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5ba3e FUN_146d5ba3e body=153 status=ok
// SIG undefined FUN_146d5ba3e(void)

void FUN_146d5ba3e(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 8);
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar4 = *(longlong *)(param_3 + 8) + 0x30;
    lVar2 = FUN_1400c527a(lVar4);
    lVar3 = param_1[2];
    param_1[2] = lVar2;
    if (lVar3 != 0) {
      FUN_14026d0a4(param_1[1]);
      lVar2 = param_1[2];
    }
    param_1[1] = lVar4;
    *(undefined8 *)(lVar2 + 0x140) = *param_1;
    *(uint *)(param_1[2] + 0x150) = *(uint *)(param_1[2] + 0x150) & 0x7fffffff;
    *(undefined4 *)(param_1[2] + 0x148) = uVar1;
    lVar3 = param_1[2];
  }
  FUN_146d6897c(lVar3,param_2);
  FUN_1400c3280(*(undefined8 *)(param_3 + 8),param_1[2]);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  return;
}



// FUNCTION 146d5bad8 FUN_146d5bad8 body=179 status=ok
// SIG undefined FUN_146d5bad8(void)

void FUN_146d5bad8(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_149f4e130;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  param_1[8] = &PTR_FUN_149f48e60;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x92) = 1;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  param_1[0xf] = &PTR_FUN_149f48e60;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  return;
}



// FUNCTION 146d5bb8c FUN_146d5bb8c body=35 status=ok
// SIG undefined FUN_146d5bb8c(void)

void FUN_146d5bb8c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(*param_1 + 0x28))();
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*(longlong *)(param_3 + 8) + 8);
  return;
}



// FUNCTION 146d5bbb0 FUN_146d5bbb0 body=112 status=ok
// SIG undefined FUN_146d5bbb0(void)

void FUN_146d5bbb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xa0) * 0x58;
    do {
      if ((*(longlong *)(param_2 + 0x108) == *(longlong *)(lVar1 + 0x30) &&
           *(longlong *)(param_2 + 0x100) == *(longlong *)(lVar1 + 0x28)) ||
         (*(longlong *)(lVar1 + 0x28) == *(longlong *)(param_2 + 0x108) &&
          *(longlong *)(lVar1 + 0x30) == *(longlong *)(param_2 + 0x100))) {
        FUN_146d5ba3e();
        return;
      }
      lVar1 = lVar1 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146d5bc44 FUN_146d5bc44 body=401 status=ok
// SIG undefined FUN_146d5bc44(void)

void FUN_146d5bc44(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) &&
     (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
    lVar12 = (longlong)(int)plVar1[1];
    if (*(char *)(*(longlong *)(*plVar1 + 0x158) + lVar12) == '\x01') {
      if (*(char *)(*(longlong *)(*plVar2 + 0x158) + (longlong)(int)plVar2[1]) == '\x01') {
        lVar3 = *(longlong *)(*plVar1 + 0xf8);
        lVar14 = (longlong)(int)plVar2[1] * 0x18 + *(longlong *)(*plVar2 + 0xf8);
        iVar6 = *(int *)(lVar3 + 0x10 + lVar12 * 0x18);
        if (((iVar6 != 0) && (0 < iVar6)) && (*(int *)(lVar14 + 0x10) != 0)) {
          lVar3 = lVar3 + lVar12 * 0x18;
          lVar12 = 0;
          bVar5 = false;
          do {
            lVar11 = *(longlong *)(lVar3 + 8);
            if (*(longlong *)(lVar3 + 8) == 0) {
              lVar11 = lVar3;
            }
            if (0 < *(int *)(lVar14 + 0x10)) {
              lVar11 = *(longlong *)(lVar11 + lVar12 * 8);
              lVar13 = 0;
              do {
                lVar9 = *(longlong *)(lVar14 + 8);
                if (*(longlong *)(lVar14 + 8) == 0) {
                  lVar9 = lVar14;
                }
                lVar9 = *(longlong *)(lVar9 + lVar13 * 8);
                uVar10 = FUN_14472711d(*(undefined8 *)(lVar11 + 0x10),0);
                uVar7 = FUN_144b03787(*(undefined8 *)(param_1 + 0x10),uVar10);
                uVar10 = FUN_14472711d(*(undefined8 *)(lVar9 + 0x10),0);
                uVar8 = FUN_144b03787(*(undefined8 *)(param_1 + 0x18),uVar10);
                if (*(longlong *)(param_1 + 0xb0) == 0) {
                  *(longlong *)(param_1 + 0xb0) = lVar11;
                  *(longlong *)(param_1 + 0xb8) = lVar9;
                }
                cVar4 = FUN_1400c6673(uVar7,lVar11,uVar8,lVar9);
                if (cVar4 != '\0') {
                  bVar5 = true;
                  break;
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)(lVar14 + 0x10));
              iVar6 = *(int *)(lVar3 + 0x10);
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar6);
          if (bVar5) {
            FUN_146d5bdd6(*(undefined8 *)(param_1 + 0x10),param_1 + 0x40);
            FUN_146d5bdd6(*(undefined8 *)(param_1 + 0x18),param_1 + 0x78);
            *(undefined1 *)(param_1 + 0xd4) = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146d5bdd6 FUN_146d5bdd6 body=252 status=ok
// SIG undefined FUN_146d5bdd6(void)

undefined4 FUN_146d5bdd6(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar4 = *(longlong *)(*param_1 + 0x110);
  lVar5 = (longlong)(int)param_1[1] * 0x30;
  dVar1 = *(double *)(lVar4 + 0x10 + lVar5);
  dVar8 = *(double *)(lVar4 + 0x28 + lVar5) - dVar1;
  dVar2 = *(double *)(lVar4 + lVar5);
  dVar3 = *(double *)(lVar4 + 8 + lVar5);
  dVar10 = *(double *)(lVar4 + 0x20 + lVar5) - dVar3;
  dVar6 = *(double *)(lVar4 + 0x18 + lVar5) - dVar2;
  dVar9 = ABS(dVar8);
  dVar11 = ABS(dVar10);
  dVar7 = ABS(dVar6);
  if (dVar7 <= dVar11) {
    dVar7 = dVar11;
  }
  if (dVar7 <= dVar9) {
    dVar7 = dVar9;
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0x101;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  *(double *)(param_2 + 0x20) = dVar6 * 0.5 + dVar2;
  *(double *)(param_2 + 0x28) = dVar10 * 0.5 + dVar3;
  *(double *)(param_2 + 0x30) = dVar8 * 0.5 + dVar1;
  *(double *)(param_2 + 0x10) = dVar7 * 0.5;
  return 0;
}



// FUNCTION 146d5bed2 FUN_146d5bed2 body=1799 status=ok
// SIG undefined FUN_146d5bed2(void)

undefined8
FUN_146d5bed2(longlong param_1,undefined8 param_2,float param_3,undefined8 param_4,longlong param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  double *pdVar11;
  longlong **pplVar12;
  double *pdVar13;
  undefined8 *puVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2e8 [32];
  longlong **local_2c8;
  double local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  double local_298;
  undefined1 local_290;
  undefined1 local_288;
  longlong local_280;
  int local_274;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  double local_250;
  longlong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_188 [4];
  double local_168;
  double dStack_160;
  double local_158;
  longlong local_128 [13];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  uVar10 = 0;
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar8 = (longlong)(int)plVar3[1] * 0x30 + *(longlong *)(*plVar3 + 0x140);
    lVar9 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] * 0x30 +
            *(longlong *)(**(longlong **)(param_1 + 0x18) + 0x140);
    lVar15 = -3;
    do {
      dVar19 = *(double *)(lVar8 + 0x18 + lVar15 * 8);
      pdVar11 = (double *)(lVar9 + 0x30 + lVar15 * 8);
      if ((*pdVar11 <= dVar19 && dVar19 != *pdVar11) ||
         (dVar19 = *(double *)(lVar9 + 0x18 + lVar15 * 8),
         pdVar11 = (double *)(lVar8 + 0x30 + lVar15 * 8), *pdVar11 <= dVar19 && dVar19 != *pdVar11))
      goto LAB_146d5c1ed;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0);
    uVar2 = *(uint *)(*(longlong *)(param_5 + 8) + 8);
    local_274 = *(int *)(param_1 + 0x30);
    local_1e8 = plVar3;
    FUN_144b037fc(&local_1e8,local_188);
    local_128[0] = *(longlong *)(param_1 + 0x18);
    FUN_144b037fc(local_128,&local_1e8);
    dVar5 = *(double *)(param_1 + 0x60);
    dVar17 = *(double *)(param_1 + 0x68);
    dVar19 = dVar17 * local_188[0] - dVar5 * local_188[1];
    dVar20 = *(double *)(param_1 + 0x70) * local_188[1] - dVar17 * local_188[2];
    dVar23 = dVar5 * local_188[2] - local_188[0] * *(double *)(param_1 + 0x70);
    dVar20 = dVar20 + dVar20;
    dVar23 = dVar23 + dVar23;
    dVar19 = dVar19 + dVar19;
    dVar16 = *(double *)(param_1 + 0x98);
    dVar18 = *(double *)(param_1 + 0xa0);
    dVar21 = dVar18 * (double)local_1e8 - dVar16 * dStack_1e0;
    dVar22 = *(double *)(param_1 + 0xa8) * dStack_1e0 - dVar18 * local_1d8;
    dVar24 = dVar16 * local_1d8 - (double)local_1e8 * *(double *)(param_1 + 0xa8);
    dVar22 = dVar22 + dVar22;
    dVar24 = dVar24 + dVar24;
    dVar21 = dVar21 + dVar21;
    dVar16 = ((dVar19 * local_188[1] - dVar23 * local_188[2]) + local_188[3] * dVar20 + dVar5 +
             local_168) -
             ((dVar21 * dStack_1e0 - dVar24 * local_1d8) + dStack_1d0 * dVar22 + dVar16 + local_1c8)
    ;
    dVar18 = ((local_188[2] * dVar20 - local_188[0] * dVar19) + local_188[3] * dVar23 + dVar17 +
             dStack_160) -
             ((local_1d8 * dVar22 - (double)local_1e8 * dVar21) + dStack_1d0 * dVar24 + dVar18 +
             dStack_1c0);
    dVar19 = (dVar19 * local_188[3] + *(double *)(param_1 + 0x70) +
              (dVar23 * local_188[0] - dVar20 * local_188[1]) + local_158) -
             (dVar21 * dStack_1d0 + *(double *)(param_1 + 0xa8) +
              (dVar24 * (double)local_1e8 - dVar22 * dStack_1e0) + local_1b8);
    dVar5 = (double)param_3;
    dVar17 = *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x88) + dVar5;
    uVar10 = 0;
    if (dVar19 * dVar19 + dVar16 * dVar16 + dVar18 * dVar18 <= dVar17 * dVar17) {
      lVar8 = *(longlong *)(param_1 + 200);
      local_270 = (ulonglong)uVar2;
      if (lVar8 == 0) {
        puVar4 = *(undefined8 **)(param_5 + 8);
        local_128[0] = 0;
        local_128[1] = 0;
        local_128[2] = 0;
        local_128[3] = 0x3ff0000000000000;
        local_128[4] = 0;
        local_128[5] = 0;
        local_128[6] = 0;
        local_128[7] = 0;
        local_128[8] = 0x3ff0000000000000;
        local_128[9] = 0x3ff0000000000000;
        local_128[10] = 0x3ff0000000000000;
        local_128[0xb] = 0;
        local_250 = *(double *)(param_1 + 0x18);
        local_268 = *(undefined8 *)(param_1 + 0xb8);
        local_248 = (longlong *)0x0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0x3ff0000000000000;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0x3ff0000000000000;
        uStack_200 = 0x3ff0000000000000;
        local_1f8 = 0x3ff0000000000000;
        uStack_1f0 = 0;
        local_260 = *(undefined8 *)(param_1 + 0x10);
        local_258 = *(undefined8 *)(param_1 + 0xb0);
        puVar14 = puVar4 + 6;
        lVar8 = FUN_1400c527a(puVar14);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 8) = *puVar4;
          local_288 = 1;
          local_290 = 1;
          local_2a0 = local_128;
          local_2b0 = local_268;
          local_2c0 = local_250;
          local_2c8 = &local_248;
          local_2a8 = 0;
          local_2b8 = param_1 + 0x78;
          local_298 = dVar5;
          local_280 = lVar8;
          FUN_1400c51ac(local_260,param_1 + 0x40,local_258,0);
        }
        lVar9 = *(longlong *)(param_1 + 200);
        *(longlong *)(param_1 + 200) = lVar8;
        if (lVar9 != 0) {
          FUN_14026d0a4(*(undefined8 *)(param_1 + 0xc0));
          lVar8 = *(longlong *)(param_1 + 200);
        }
        *(undefined8 **)(param_1 + 0xc0) = puVar14;
        *(longlong *)(lVar8 + 0x140) = param_1;
        puVar1 = (uint *)(*(longlong *)(param_1 + 200) + 0x150);
        *puVar1 = *puVar1 & 0x7fffffff;
        *(int *)(*(longlong *)(param_1 + 200) + 0x148) = (int)local_270;
        lVar8 = *(longlong *)(param_1 + 200);
        FUN_144b040a6(local_128,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
        local_128[1] = 0;
        *(longlong *)(lVar8 + 0x158) = local_128[0];
        *(undefined8 *)(lVar8 + 0x160) = 0;
        lVar8 = *(longlong *)(param_1 + 200);
      }
      iVar6 = local_274;
      pdVar11 = local_188;
      pdVar13 = (double *)(lVar8 + 0x170);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar13 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar13 = pdVar13 + 1;
      }
      pplVar12 = &local_1e8;
      puVar14 = (undefined8 *)(lVar8 + 0x1d0);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar14 = *pplVar12;
        pplVar12 = pplVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      *(float *)(*(longlong *)(param_1 + 200) + 300) = param_3;
      lVar8 = *(longlong *)(param_1 + 200);
      if ((local_274 < (int)(uVar2 - 1)) || (*(int *)(lVar8 + 0x5b0) == 0)) {
        FUN_1400c31d0();
        lVar8 = *(longlong *)(param_1 + 200);
      }
      FUN_1449cbdd8(lVar8);
      local_2c8 = &local_1e8;
      local_2c0 = dVar5;
      FUN_1404c6887(local_128,param_1 + 0x40,local_188,param_1 + 0x78);
      uStack_240 = CONCAT44(uStack_240._4_4_,1);
      local_248 = local_128;
      FUN_1404af2c6(*(undefined8 *)(param_1 + 200));
      lVar8 = *(longlong *)(param_1 + 200);
      if ((longlong)*(int *)(lVar8 + 0x16c) == -1) {
        dVar19 = 1.79769313486232e+308;
      }
      else {
        lVar9 = lVar8 + 0x3f8;
        if (*(longlong *)(lVar8 + 0x5a8) != 0) {
          lVar9 = *(longlong *)(lVar8 + 0x5a8);
        }
        dVar19 = (double)*(float *)(lVar9 + 0x24 + (longlong)*(int *)(lVar8 + 0x16c) * 0x6c);
      }
      if (dVar19 <= dVar5) {
        *(ushort *)(lVar8 + 0x374) =
             (ushort)*(undefined4 *)(lVar8 + 0x374) & 0xdfff |
             (ushort)(iVar6 < (int)(uVar2 - 1)) << 0xd;
        cVar7 = FUN_1400c3280(*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_1 + 200));
        if (cVar7 != '\0') {
          *(int *)(param_1 + 0xd0) = (int)local_270;
          uVar10 = 1;
        }
      }
    }
  }
LAB_146d5c1ed:
  if ((local_c0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 146d5c620 FUN_146d5c620 body=186 status=ok
// SIG undefined FUN_146d5c620(void)

void FUN_146d5c620(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 8);
  lVar4 = *(longlong *)(param_1 + 200);
  if (lVar4 == 0) {
    lVar5 = *(longlong *)(param_3 + 8) + 0x30;
    lVar3 = FUN_1400c527a(lVar5);
    lVar4 = *(longlong *)(param_1 + 200);
    *(longlong *)(param_1 + 200) = lVar3;
    if (lVar4 != 0) {
      FUN_14026d0a4(*(undefined8 *)(param_1 + 0xc0));
      lVar3 = *(longlong *)(param_1 + 200);
    }
    *(longlong *)(param_1 + 0xc0) = lVar5;
    *(longlong *)(lVar3 + 0x140) = param_1;
    puVar1 = (uint *)(*(longlong *)(param_1 + 200) + 0x150);
    *puVar1 = *puVar1 & 0x7fffffff;
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x148) = uVar2;
    lVar4 = *(longlong *)(param_1 + 200);
  }
  FUN_146d6897c(lVar4,param_2);
  FUN_1400c3280(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  return;
}



// FUNCTION 146d5c6da FUN_146d5c6da body=38 status=ok
// SIG undefined FUN_146d5c6da(void)

undefined8 FUN_146d5c6da(undefined8 param_1,int param_2)

{
  FUN_146d68626();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d5c700 FUN_146d5c700 body=752 status=ok
// SIG undefined FUN_146d5c700(void)

void FUN_146d5c700(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [188];
  undefined8 local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < (int)param_2) {
    memset(local_388,0,0x2f0);
    local_390 = (ulonglong)param_2 * 0x50 + param_1 + -0x50;
    local_398 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_388[0] = (int)(longlong)(fVar18 + fVar18);
    plVar17 = &local_398;
    do {
      puVar1 = (undefined8 *)*plVar17;
      puVar13 = (undefined8 *)plVar17[1];
      iVar14 = (int)plVar17[2];
      iVar2 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar1) >> 4);
      puVar16 = puVar1;
      puVar9 = puVar13;
      if (iVar14 != 0) {
LAB_146d5c7d7:
        uVar4 = iVar2 * -0x33333333 + 1;
        if (8 < (int)uVar4) {
          puVar6 = puVar1 + (ulonglong)(uVar4 >> 1) * 10;
          puVar10 = local_98;
          for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar1;
          puVar10 = puVar1 + (ulonglong)(uVar4 >> 1) * 10;
          for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = local_98;
          puVar10 = puVar1;
          for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar13 + 10;
          puVar10 = puVar1;
          do {
            puVar8 = puVar10 + 10;
            puVar11 = puVar10 + 10;
            do {
              puVar10 = puVar11;
              puVar5 = puVar8;
              if (puVar13 < puVar10) break;
              puVar8 = puVar5 + 10;
              puVar11 = puVar10 + 10;
            } while ((double)puVar1[8] < (double)puVar10[8] ||
                     (double)puVar1[8] == (double)puVar10[8]);
            puVar8 = puVar6 + -0x14;
            do {
              puVar11 = puVar6;
              puVar15 = puVar8;
              puVar6 = puVar11 + -10;
              if (puVar6 <= puVar1) break;
              puVar8 = puVar15 + -10;
            } while ((double)puVar11[-2] < (double)puVar1[8] ||
                     (double)puVar11[-2] == (double)puVar1[8]);
            lVar3 = 10;
            puVar8 = puVar1;
            puVar7 = puVar10;
            puVar12 = local_98;
            if (puVar6 < puVar10) goto code_r0x000146d5c8ae;
            for (; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar12 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar8 = puVar6;
            puVar11 = puVar10;
            for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar8 = local_98;
            puVar11 = puVar6;
            for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
          } while( true );
        }
        while (puVar9 = puVar1, puVar16 = puVar1, puVar1 < puVar13) {
          while (puVar6 = puVar9, puVar16 = puVar16 + 10, puVar16 <= puVar13) {
            puVar9 = puVar16;
            if ((double)puVar6[8] < (double)puVar16[8] || (double)puVar6[8] == (double)puVar16[8]) {
              puVar9 = puVar6;
            }
          }
          puVar16 = puVar13 + -10;
          puVar9 = puVar6;
          puVar10 = local_98;
          for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = puVar13;
          for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar9 = local_98;
          puVar6 = puVar13;
          for (lVar3 = 10; puVar13 = puVar16, lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_146d5c9c7;
      }
LAB_146d5c9e1:
      FUN_146d5c9f1(puVar1);
LAB_146d5c9c7:
      plVar17 = plVar17 + -3;
    } while (&local_398 <= plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146d5c8ae:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar8 = puVar6;
  puVar7 = puVar1;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_98;
  puVar7 = puVar6;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar14 = iVar14 + -1;
  puVar11 = puVar11 + -0x14;
  if ((longlong)puVar15 - (longlong)puVar16 < (longlong)puVar9 - (longlong)puVar5) {
    if (puVar10 < puVar13) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar13;
      *(int *)(plVar17 + 2) = iVar14;
      plVar17 = plVar17 + 3;
    }
    puVar5 = puVar1;
    if (puVar6 <= puVar1 + 10) goto LAB_146d5c9c7;
  }
  else {
    if (puVar1 + 10 < puVar6) {
      *plVar17 = (longlong)puVar1;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = iVar14;
      plVar17 = plVar17 + 3;
    }
    puVar1 = puVar10;
    puVar11 = puVar13;
    puVar15 = puVar13;
    if (puVar13 <= puVar10) goto LAB_146d5c9c7;
  }
  iVar2 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar5) >> 4);
  puVar13 = puVar11;
  puVar16 = puVar5;
  puVar9 = puVar15;
  if (iVar14 == 0) goto LAB_146d5c9e1;
  goto LAB_146d5c7d7;
}



// FUNCTION 146d5c9f1 FUN_146d5c9f1 body=615 status=ok
// SIG undefined FUN_146d5c9f1(void)

void FUN_146d5c9f1(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70 [10];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x000146d5ca35:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           ((double)param_1[(longlong)iVar6 * 10 + 8] < (double)param_1[(longlong)iVar5 * 10 + 8] ||
            (double)param_1[(longlong)iVar6 * 10 + 8] == (double)param_1[(longlong)iVar5 * 10 + 8]))
        {
          iVar5 = iVar6;
        }
        if ((double)param_1[(longlong)iVar5 * 10 + 8] <= (double)param_1[(longlong)iVar1 * 10 + 8]
            && (double)param_1[(longlong)iVar1 * 10 + 8] !=
               (double)param_1[(longlong)iVar5 * 10 + 8]) {
          puVar3 = param_1 + (longlong)iVar1 * 10;
          puVar4 = local_70;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 10;
          puVar4 = param_1 + (longlong)iVar1 * 10;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_70;
          puVar4 = param_1 + (longlong)iVar5 * 10;
          for (lVar2 = 10; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x000146d5ca35;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_70;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 10;
      puVar4 = param_1;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_70;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 10;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               ((double)param_1[(longlong)iVar1 * 10 + 8] <
                (double)param_1[(longlong)iVar5 * 10 + 8] ||
                (double)param_1[(longlong)iVar1 * 10 + 8] ==
                (double)param_1[(longlong)iVar5 * 10 + 8])) {
              iVar6 = iVar1;
            }
            if ((double)param_1[(longlong)iVar8 * 10 + 8] <
                (double)param_1[(longlong)iVar6 * 10 + 8] ||
                (double)param_1[(longlong)iVar8 * 10 + 8] ==
                (double)param_1[(longlong)iVar6 * 10 + 8]) break;
            puVar3 = param_1 + (longlong)iVar8 * 10;
            puVar4 = local_70;
            for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 10;
            puVar4 = param_1 + (longlong)iVar8 * 10;
            for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_70;
            puVar4 = param_1 + (longlong)iVar6 * 10;
            for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_70;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 10;
          puVar4 = param_1;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_70;
          puVar4 = param_1 + (uVar7 - 1) * 10;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d5cc5a FUN_146d5cc5a body=62 status=ok
// SIG undefined FUN_146d5cc5a(void)

void FUN_146d5cc5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_146d5cc98(lVar1,*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d5cc98 FUN_146d5cc98 body=43 status=ok
// SIG undefined FUN_146d5cc98(void)

void FUN_146d5cc98(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 146d5cf2c FUN_146d5cf2c body=616 status=ok
// SIG undefined FUN_146d5cf2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5cf2c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = FUN_1408d0576(*param_1,param_1[6],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                         *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],param_1[7],
                         *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 9),param_1[10]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5d194 FUN_146d5d194 body=616 status=ok
// SIG undefined FUN_146d5d194(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5d194(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = FUN_1408ceb42(*param_1,param_1[6],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                         *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],param_1[7],
                         *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 9),param_1[10]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5d3fc FUN_146d5d3fc body=623 status=ok
// SIG undefined FUN_146d5d3fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5d3fc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = thunk_FUN_146d95a78(*param_1,param_1[8],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                               *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],
                               param_1[7],param_1[8],param_1[9],*(undefined4 *)(param_1 + 10),
                               *(undefined4 *)(param_1 + 0xb));
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5d66c FUN_146d5d66c body=623 status=ok
// SIG undefined FUN_146d5d66c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5d66c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = thunk_FUN_146d95f1e(*param_1,param_1[8],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                               *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],
                               param_1[7],param_1[8],param_1[9],*(undefined4 *)(param_1 + 10),
                               *(undefined4 *)(param_1 + 0xb));
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5d8dc FUN_146d5d8dc body=623 status=ok
// SIG undefined FUN_146d5d8dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5d8dc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = thunk_FUN_146d963a2(*param_1,param_1[8],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                               *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],
                               param_1[7],param_1[8],param_1[9],*(undefined4 *)(param_1 + 10),
                               *(undefined4 *)(param_1 + 0xb));
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5db4c FUN_146d5db4c body=623 status=ok
// SIG undefined FUN_146d5db4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5db4c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = thunk_FUN_146d96826(*param_1,param_1[8],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                               *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],
                               param_1[7],param_1[8],param_1[9],*(undefined4 *)(param_1 + 10),
                               *(undefined4 *)(param_1 + 0xb));
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5ddbc FUN_146d5ddbc body=623 status=ok
// SIG undefined FUN_146d5ddbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d5ddbc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  cVar14 = thunk_FUN_146d96caa(*param_1,param_1[8],param_1[1],param_1[2],*(undefined8 *)param_1[3],
                               *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6],
                               param_1[7],param_1[8],param_1[9],*(undefined4 *)(param_1 + 10),
                               *(undefined4 *)(param_1 + 0xb));
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  return;
}



// FUNCTION 146d5e02b FUN_146d5e02b body=1023 status=ok
// SIG undefined FUN_146d5e02b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d5e02b(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined4 *local_160;
  double *local_158;
  undefined4 *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x78) {
    if (cVar4 == 'H' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d5e161;
    }
    else if (cVar4 != '\b' || param_2 == 0) goto LAB_146d5e161;
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d5e572(param_4,param_2,&local_108,param_6);
  }
  else {
    local_150 = &local_144;
    local_158 = &local_110;
    local_160 = &local_140;
    local_168 = &local_128;
    cVar4 = FUN_146d5e42c(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d5e161:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d5e42c FUN_146d5e42c body=325 status=ok
// SIG undefined FUN_146d5e42c(void)

undefined4
FUN_146d5e42c(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = param_3[4];
  uStack_144 = param_3[5];
  uStack_140 = param_3[6];
  uStack_13c = param_3[7];
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_140a092c6(local_f0,local_158,param_1 + 0x38);
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_188 = &local_178;
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3be48(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_140062896(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5e572 FUN_146d5e572 body=328 status=ok
// SIG undefined FUN_146d5e572(void)

undefined4
FUN_146d5e572(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = *(undefined8 *)(param_3 + 4);
  uStack_140 = *(undefined8 *)(param_3 + 6);
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_14089889a(local_f0,local_158,param_1 + 0x38,0);
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_188 = &local_178;
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3be48(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_140062896(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5e6bb FUN_146d5e6bb body=1073 status=ok
// SIG undefined FUN_146d5e6bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d5e6bb(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 *local_180;
  double *local_178;
  undefined4 *local_170;
  undefined8 *local_168;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_118,param_5);
  local_120 = 3.4028234663852886e+38;
  local_154 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x78) {
    if (cVar4 == 'H' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d5ea39;
      uVar5 = *(undefined8 *)(param_4 + 0x28);
    }
    else {
      if (cVar4 != '\b' || param_2 == 0) goto LAB_146d5ea39;
      uVar5 = *(undefined8 *)(param_4 + 0x28);
    }
    local_170 = &local_154;
    local_178 = &local_120;
    local_180 = &local_150;
    local_188 = &local_138;
    cVar4 = FUN_146e3b026(uVar5,param_2,&local_118,param_6);
  }
  else {
    local_168 = &local_b8;
    local_b8 = 0x3ff0000000000000;
    local_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    local_170 = &local_154;
    local_178 = &local_120;
    local_180 = &local_150;
    local_188 = &local_138;
    cVar4 = FUN_146e3be48(*(undefined8 *)(param_4 + 0x28),param_2,&local_118,param_6);
  }
  if (cVar4 != '\0') {
    local_f8 = local_138 - local_f8;
    dStack_f0 = dStack_130 - dStack_f0;
    local_e8 = local_128 - local_e8;
    local_108 = local_108 * -1.0;
    dStack_100 = dStack_100 * 1.0;
    dVar1 = -local_118;
    dStack_110 = -dStack_110;
    dVar7 = local_f8 * local_108 - dVar1 * local_e8;
    dVar2 = dStack_f0 * dVar1 - local_f8 * dStack_110;
    dVar3 = local_e8 * dStack_110 - dStack_f0 * local_108;
    dVar3 = dVar3 + dVar3;
    dVar7 = dVar7 + dVar7;
    dVar2 = dVar2 + dVar2;
    auVar6 = divpd(_DAT_149934d80,local_d8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_)) & auVar6._0_8_) *
               ((dVar2 * dStack_110 - dVar7 * local_108) + dStack_100 * dVar3 + local_f8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_)) & auVar6._8_8_) *
                 (local_118 * dVar2 + local_108 * dVar3 + dStack_100 * dVar7 + dStack_f0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8)) &
                         (ulonglong)(1.0 / local_c8)) *
                 (dStack_100 * dVar2 + local_e8 + (dVar7 * dVar1 - dVar3 * dStack_110));
    param_1[3] = local_138 - (double)CONCAT44(uStack_14c,local_150) * local_120;
    param_1[4] = dStack_130 - (double)CONCAT44(uStack_144,uStack_148) * local_120;
    param_1[5] = local_128 - local_140 * local_120;
    *(undefined4 *)(param_1 + 6) = local_150;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_14c;
    *(undefined4 *)(param_1 + 7) = uStack_148;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_144;
    param_1[8] = local_140;
    param_1[9] = local_120;
    *(undefined4 *)(param_1 + 10) = local_154;
  }
LAB_146d5ea39:
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d5eaed FUN_146d5eaed body=1079 status=ok
// SIG undefined FUN_146d5eaed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d5eaed(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 *local_180;
  double *local_178;
  undefined4 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_3,&local_108,param_5);
  local_110 = 3.4028234663852886e+38;
  local_144 = 0xffffffff;
  cVar4 = *(char *)(param_2 + 0x1c);
  if (param_2 == 0 || cVar4 != -0x78) {
    if (cVar4 == 'H' && param_2 != 0) {
      param_2 = *(longlong *)(param_2 + 0x28);
      if (param_2 == 0) goto LAB_146d5ee6f;
    }
    else if (cVar4 != '\b' || param_2 == 0) goto LAB_146d5ee6f;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3b026(param_4,param_2,&local_108,param_6);
  }
  else {
    local_168 = &local_160;
    local_160 = 0x3ff0000000000000;
    local_158 = 0x3ff0000000000000;
    local_150 = 0x3ff0000000000000;
    local_170 = &local_144;
    local_178 = &local_110;
    local_180 = &local_140;
    local_188 = &local_128;
    cVar4 = FUN_146e3be48(param_4,param_2,&local_108,param_6);
  }
  if (cVar4 != '\0') {
    local_e8 = local_128 - local_e8;
    dStack_e0 = dStack_120 - dStack_e0;
    local_d8 = local_118 - local_d8;
    local_f8 = local_f8 * -1.0;
    dStack_f0 = dStack_f0 * 1.0;
    dVar1 = -local_108;
    dStack_100 = -dStack_100;
    dVar6 = local_e8 * local_f8 - dVar1 * local_d8;
    dVar2 = dStack_e0 * dVar1 - local_e8 * dStack_100;
    dVar3 = local_d8 * dStack_100 - dStack_e0 * local_f8;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar2 = dVar2 + dVar2;
    auVar5 = divpd(_DAT_149934d80,local_c8);
    *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar5._0_8_) *
               ((dVar2 * dStack_100 - dVar6 * local_f8) + dStack_f0 * dVar3 + local_e8);
    param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar5._8_8_) *
                 (local_108 * dVar2 + local_f8 * dVar3 + dStack_f0 * dVar6 + dStack_e0);
    param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) &
                         (ulonglong)(1.0 / local_b8)) *
                 (dStack_f0 * dVar2 + local_d8 + (dVar6 * dVar1 - dVar3 * dStack_100));
    param_1[3] = local_128 - (double)CONCAT44(uStack_13c,local_140) * local_110;
    param_1[4] = dStack_120 - (double)CONCAT44(uStack_134,uStack_138) * local_110;
    param_1[5] = local_118 - local_130 * local_110;
    *(undefined4 *)(param_1 + 6) = local_140;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_13c;
    *(undefined4 *)(param_1 + 7) = uStack_138;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_134;
    param_1[8] = local_130;
    param_1[9] = local_110;
    *(undefined4 *)(param_1 + 10) = local_144;
  }
LAB_146d5ee6f:
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d5ef42 FUN_146d5ef42 body=165 status=ok
// SIG undefined FUN_146d5ef42(void)

void FUN_146d5ef42(longlong param_1,float param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  double local_48 [4];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = (double)*param_3;
  local_28[1] = (double)param_3[1];
  local_28[2] = (double)param_3[2];
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = 0;
  do {
    if (0.0 < local_28[lVar2] || local_28[lVar2] == 0.0) {
      dVar3 = *(double *)(lVar1 + 0x38 + lVar2 * 8) - (double)param_2;
    }
    else {
      dVar3 = *(double *)(lVar1 + 0x20 + lVar2 * 8) + (double)param_2;
    }
    local_48[lVar2] = dVar3;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((float)local_48[1],(float)local_48[0]),(float)local_48[2]);
}



// FUNCTION 146d5f071 FUN_146d5f071 body=80 status=ok
// SIG undefined FUN_146d5f071(void)

bool FUN_146d5f071(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x71 + (ulonglong)((*(uint *)(param_1 + 8) & 3) == 0) * 8) & 1) == 0) {
      bVar2 = false;
    }
    else {
      uVar1 = (ulonglong)((*(uint *)(param_1 + 8) & 3) == 0);
      if (((*(int *)(param_1 + 0x58 + uVar1 * 8) == 0) &&
          (*(int *)(param_1 + 0x5c + uVar1 * 8) == 0)) &&
         (*(int *)(param_1 + 0x60 + uVar1 * 8) == 0)) {
        bVar2 = *(int *)(param_1 + uVar1 * 8 + 100) != 0;
      }
    }
  }
  return bVar2;
}



// FUNCTION 146d5f0c2 FUN_146d5f0c2 body=87 status=ok
// SIG undefined FUN_146d5f0c2(void)

void FUN_146d5f0c2(longlong param_1,int param_2)

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
  FUN_14090748c();
  return;
}



// FUNCTION 146d5f11a FUN_146d5f11a body=87 status=ok
// SIG undefined FUN_146d5f11a(void)

void FUN_146d5f11a(longlong param_1,int param_2)

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
  FUN_14058c3f6();
  return;
}



// FUNCTION 146d5f172 FUN_146d5f172 body=62 status=ok
// SIG undefined FUN_146d5f172(void)

void FUN_146d5f172(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d5f1b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146d5f1b0 FUN_146d5f1b0 body=93 status=ok
// SIG undefined FUN_146d5f1b0(void)

ulonglong FUN_146d5f1b0(uint param_1,uint param_2)

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



// FUNCTION 146d5f20e FUN_146d5f20e body=1667 status=ok
// SIG undefined FUN_146d5f20e(void)

void FUN_146d5f20e(longlong param_1,uint param_2,double *param_3,undefined1 (*param_4) [16],
                  int *param_5,int *param_6,int *param_7)

{
  ulonglong uVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
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
  
  uVar3 = *(ushort *)(param_1 + 0x92);
  lVar6 = CONCAT44((int)(param_2 - ((int)param_2 >> 0x1f)) >> 0x1f,(int)param_2 / 2);
  uVar25 = (uint)uVar3;
  iVar24 = (int)(lVar6 / (longlong)(int)(uVar3 - 1)) * uVar25;
  iVar19 = (int)(lVar6 % (longlong)(int)(uVar3 - 1));
  iVar22 = iVar24 + iVar19;
  lVar21 = (longlong)iVar22;
  dVar28 = *(double *)(param_1 + 0x80);
  lVar6 = *(longlong *)(param_1 + 0x20);
  dVar30 = *(double *)(param_1 + 0xa0);
  dVar36 = *(double *)(param_1 + 0x60);
  dVar31 = *(double *)(param_1 + 0x58);
  dVar37 = *(double *)(param_1 + 0x50);
  dVar9 = param_3[8];
  dVar10 = param_3[9];
  dVar32 = (double)(iVar22 % (int)uVar25) * dVar37 * dVar9;
  dVar34 = (double)(iVar22 / (int)uVar25) * dVar31 * dVar10;
  dVar8 = param_3[10];
  dVar26 = ((double)*(ushort *)(lVar6 + lVar21 * 2) * dVar30 + dVar28) * dVar36 * dVar8;
  dVar17 = *param_3;
  dVar18 = param_3[1];
  dVar7 = SUB168(*(undefined1 (*) [16])(param_3 + 2),0);
  dVar15 = dVar34 * dVar17 - dVar32 * dVar18;
  dVar42 = dVar26 * dVar18 - dVar34 * dVar7;
  dVar39 = dVar32 * dVar7 - dVar26 * dVar17;
  dVar38 = param_3[3];
  dVar2 = param_3[3];
  dVar42 = dVar42 + dVar42;
  dVar39 = dVar39 + dVar39;
  dVar15 = dVar15 + dVar15;
  uVar1 = lVar21 + (ulonglong)uVar3;
  iVar23 = (int)uVar1;
  iVar20 = iVar23 + 1;
  dVar12 = param_3[4];
  dVar13 = param_3[5];
  uVar4 = *(ushort *)(lVar6 + 2 + lVar21 * 2);
  uVar5 = *(ushort *)(lVar6 + uVar1 * 2);
  dVar16 = param_3[6];
  uVar25 = (uint)uVar3;
  dVar33 = (double)(iVar20 % (int)uVar25) * dVar37 * dVar9;
  dVar35 = (double)(iVar20 / (int)uVar25) * dVar31 * dVar10;
  dVar41 = ((double)*(ushort *)(lVar6 + 2 + (longlong)iVar23 * 2) * dVar30 + dVar28) * dVar36 *
           dVar8;
  dVar27 = dVar35 * dVar17 - dVar18 * dVar33;
  dVar29 = dVar41 * dVar18 - dVar7 * dVar35;
  dVar40 = dVar33 * dVar7 - dVar17 * dVar41;
  dVar29 = dVar29 + dVar29;
  dVar40 = dVar40 + dVar40;
  dVar27 = dVar27 + dVar27;
  dVar34 = (dVar7 * dVar42 - dVar17 * dVar15) + dVar2 * dVar39 + dVar34 + dVar13;
  auVar14._8_4_ = SUB84(dVar34,0);
  auVar14._0_8_ = (dVar15 * dVar18 - dVar39 * dVar7) + dVar38 * dVar42 + dVar32 + dVar12;
  auVar14._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *param_4 = auVar14;
  *(double *)param_4[1] = dVar15 * dVar38 + dVar26 + (dVar39 * dVar17 - dVar42 * dVar18) + dVar16;
  dVar42 = (dVar27 * dVar18 - dVar40 * dVar7) + dVar38 * dVar29 + dVar33 + dVar12;
  dVar39 = (dVar7 * dVar29 - dVar17 * dVar27) + dVar2 * dVar40 + dVar35 + dVar13;
  dVar15 = dVar27 * dVar38 + dVar41 + (dVar40 * dVar17 - dVar29 * dVar18) + dVar16;
  dVar27 = dVar31 * dVar37 * dVar36;
  if ((param_2 & 1) == 0) {
    iVar24 = iVar24 + iVar19 + 1;
    dVar8 = dVar8 * dVar36 * ((double)uVar4 * dVar30 + dVar28);
    dVar9 = dVar9 * dVar37 * (double)(iVar24 % (int)uVar25);
    dVar10 = dVar10 * dVar31 * (double)(iVar24 / (int)uVar25);
    dVar28 = dVar10 * dVar17 - dVar18 * dVar9;
    dVar30 = dVar8 * dVar18 - dVar7 * dVar10;
    dVar36 = dVar9 * dVar7 - dVar17 * dVar8;
    dVar28 = dVar28 + dVar28;
    dVar30 = dVar30 + dVar30;
    dVar36 = dVar36 + dVar36;
    dVar16 = dVar16 + dVar38 * dVar28 + dVar8 + (dVar36 * dVar17 - dVar18 * dVar30);
    dVar12 = dVar12 + (dVar28 * dVar18 - dVar7 * dVar36) + dVar38 * dVar30 + dVar9;
    dVar13 = dVar13 + (dVar30 * dVar7 - dVar28 * dVar17) + dVar2 * dVar36 + dVar10;
    dVar31 = dVar12;
    dVar37 = dVar13;
    dVar38 = dVar16;
    iVar19 = iVar24;
    iVar23 = iVar20;
    dVar28 = dVar42;
    dVar30 = dVar39;
    dVar36 = dVar15;
    if (dVar27 < 0.0) {
      dVar31 = dVar42;
      dVar37 = dVar39;
      dVar38 = dVar15;
      iVar19 = iVar20;
      iVar23 = iVar24;
      dVar28 = dVar12;
      dVar30 = dVar13;
      dVar36 = dVar16;
    }
  }
  else {
    uVar1 = (ulonglong)(uint)(iVar23 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
    dVar8 = dVar8 * dVar36 * ((double)uVar5 * dVar30 + dVar28);
    dVar9 = dVar9 * dVar37 * (double)(int)((longlong)uVar1 % (longlong)(int)uVar25);
    dVar10 = dVar10 * dVar31 * (double)(int)((longlong)uVar1 / (longlong)(int)uVar25);
    dVar30 = dVar10 * dVar17 - dVar18 * dVar9;
    dVar31 = dVar8 * dVar18 - dVar7 * dVar10;
    dVar37 = dVar9 * dVar7 - dVar17 * dVar8;
    dVar30 = dVar30 + dVar30;
    dVar31 = dVar31 + dVar31;
    dVar37 = dVar37 + dVar37;
    dVar36 = dVar16 + dVar38 * dVar30 + dVar8 + (dVar37 * dVar17 - dVar18 * dVar31);
    dVar28 = dVar12 + (dVar30 * dVar18 - dVar7 * dVar37) + dVar38 * dVar31 + dVar9;
    dVar30 = dVar13 + (dVar31 * dVar7 - dVar30 * dVar17) + dVar2 * dVar37 + dVar10;
    dVar31 = dVar42;
    dVar37 = dVar39;
    dVar38 = dVar15;
    iVar19 = iVar20;
    if (dVar27 < 0.0) {
      dVar31 = dVar28;
      dVar37 = dVar30;
      dVar38 = dVar36;
      iVar19 = iVar23;
      iVar23 = iVar20;
      dVar28 = dVar42;
      dVar30 = dVar39;
      dVar36 = dVar15;
    }
  }
  *(double *)(param_4[1] + 8) = dVar31;
  *(double *)param_4[2] = dVar37;
  *(double *)(param_4[2] + 8) = dVar38;
  auVar11._8_4_ = SUB84(dVar30,0);
  auVar11._0_8_ = dVar28;
  auVar11._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  param_4[3] = auVar11;
  *(double *)param_4[4] = dVar36;
  *param_5 = iVar22;
  *param_6 = iVar19;
  *param_7 = iVar23;
  return;
}



// FUNCTION 146d5f891 FUN_146d5f891 body=256 status=ok
// SIG undefined FUN_146d5f891(void)

void FUN_146d5f891(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = param_2[8] - param_2[2];
  dVar6 = param_2[7] - param_2[1];
  dVar7 = param_2[6] - *param_2;
  dVar2 = param_2[5] - param_2[2];
  dVar1 = param_2[4] - param_2[1];
  dVar3 = param_2[3] - *param_2;
  dVar4 = dVar3 * dVar6 - dVar7 * dVar1;
  dVar3 = dVar2 * dVar7 - dVar5 * dVar3;
  dVar2 = dVar1 * dVar5 - dVar2 * dVar6;
  dVar1 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
  if (((dVar1 != 1.0) || (dVar5 = dVar2, dVar6 = dVar4, dVar7 = dVar3, NAN(dVar1))) &&
     (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar1)) {
    dVar1 = 1.0 / SQRT(dVar1);
    dVar5 = dVar2 * dVar1;
    dVar6 = dVar4 * dVar1;
    dVar7 = dVar3 * dVar1;
  }
  *param_1 = dVar5;
  param_1[1] = dVar7;
  param_1[2] = dVar6;
  return;
}



// FUNCTION 146d5f992 FUN_146d5f992 body=295 status=ok
// SIG undefined FUN_146d5f992(void)

void FUN_146d5f992(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  double *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)FUN_146d5faba(param_1,param_4,param_5);
  if (plVar11 == (longlong *)0x0) {
    iVar10 = FUN_146d5fc34(param_1);
    lVar12 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar12 = param_1;
    }
    plVar11 = (longlong *)((longlong)iVar10 * 0x50 + lVar12);
  }
  iVar10 = (int)plVar11[1];
  if ((longlong)iVar10 == 0) {
    dVar2 = *(double *)(param_1 + 0x160);
    dVar3 = *(double *)(param_1 + 0x150);
    dVar4 = *(double *)(param_1 + 0x158);
    dVar5 = param_5[1];
    dVar6 = *param_5;
    dVar7 = param_5[2];
    plVar11[4] = param_4[2];
    lVar12 = param_4[1];
    plVar11[2] = *param_4;
    plVar11[3] = lVar12;
    dVar8 = param_5[1];
    plVar11[5] = (longlong)*param_5;
    plVar11[6] = (longlong)dVar8;
    plVar11[7] = (longlong)param_5[2];
    plVar11[8] = (longlong)(dVar2 * dVar7 + dVar3 * dVar6 + dVar4 * dVar5);
    *(undefined1 *)(plVar11 + 9) = 1;
  }
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_146d5fdbe(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(undefined8 *)(lVar12 + lVar13) = param_2;
  *(undefined4 *)(lVar12 + 8 + lVar13) = param_3;
  lVar9 = param_4[1];
  plVar11 = (longlong *)(lVar12 + 0x28 + lVar13);
  *plVar11 = *param_4;
  plVar11[1] = lVar9;
  *(longlong *)(lVar12 + 0x38 + lVar13) = param_4[2];
  dVar2 = param_5[1];
  pdVar1 = (double *)(lVar12 + 0x10 + lVar13);
  *pdVar1 = *param_5;
  pdVar1[1] = dVar2;
  *(double *)(lVar12 + 0x20 + lVar13) = param_5[2];
  return;
}



// FUNCTION 146d5faba FUN_146d5faba body=377 status=ok
// SIG undefined FUN_146d5faba(void)

longlong FUN_146d5faba(longlong param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x148) * 0x50;
    do {
      if ((0.99 < param_3[2] * *(double *)(lVar1 + 0x38) +
                  *param_3 * *(double *)(lVar1 + 0x28) + param_3[1] * *(double *)(lVar1 + 0x30)) &&
         (ABS((param_2[2] - *(double *)(lVar1 + 0x20)) * *(double *)(lVar1 + 0x38) +
              (*param_2 - *(double *)(lVar1 + 0x10)) * *(double *)(lVar1 + 0x28) +
              *(double *)(lVar1 + 0x30) * (param_2[1] - *(double *)(lVar1 + 0x18))) < 5.0)) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 146d5fc34 FUN_146d5fc34 body=82 status=ok
// SIG undefined FUN_146d5fc34(void)

int FUN_146d5fc34(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x148) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14c) < iVar1 + 1U) {
    FUN_146d5fc9e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar2 = param_1;
  }
  FUN_146d5fc86((longlong)iVar1 * 0x50 + lVar2);
  return iVar1;
}



// FUNCTION 146d5fc86 FUN_146d5fc86 body=23 status=ok
// SIG undefined FUN_146d5fc86(void)

void FUN_146d5fc86(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 146d5fc9e FUN_146d5fc9e body=136 status=ok
// SIG undefined FUN_146d5fc9e(void)

void FUN_146d5fc9e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x50,0);
      iVar4 = (int)(uVar3 / 0x50);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_146d5fd28(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146d5fd28 FUN_146d5fd28 body=149 status=ok
// SIG undefined FUN_146d5fd28(void)

void FUN_146d5fd28(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x50);
  return;
}



// FUNCTION 146d5fdbe FUN_146d5fdbe body=132 status=ok
// SIG undefined FUN_146d5fdbe(void)

void FUN_146d5fdbe(longlong param_1,int param_2)

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



// FUNCTION 146d5fe43 FUN_146d5fe43 body=361 status=ok
// SIG undefined FUN_146d5fe43(void)

void FUN_146d5fe43(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d5feca_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d5feca_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d5fe95_caseD_82;
  case 3:
switchD_146d5feca_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d5fe43(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d5feca_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d5feca_caseD_0;
    case 0x41:
      goto switchD_146d5feca_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d5feca_caseD_3;
    case 0x48:
      goto switchD_146d5feca_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d5fe95_caseD_82:
    if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d6004c(param_3,param_1);
    return;
  }
}



// FUNCTION 146d6004c FUN_146d6004c body=635 status=ok
// SIG undefined FUN_146d6004c(void)

void FUN_146d6004c(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d6142c(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d602c8 FUN_146d602c8 body=635 status=ok
// SIG undefined FUN_146d602c8(void)

void FUN_146d602c8(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_14126154a(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d60544 FUN_146d60544 body=635 status=ok
// SIG undefined FUN_146d60544(void)

void FUN_146d60544(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61780(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d607c0 FUN_146d607c0 body=635 status=ok
// SIG undefined FUN_146d607c0(void)

void FUN_146d607c0(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61ad4(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d60a3c FUN_146d60a3c body=635 status=ok
// SIG undefined FUN_146d60a3c(void)

void FUN_146d60a3c(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61e28(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d60cb8 FUN_146d60cb8 body=635 status=ok
// SIG undefined FUN_146d60cb8(void)

void FUN_146d60cb8(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d6217c(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d60f34 FUN_146d60f34 body=635 status=ok
// SIG undefined FUN_146d60f34(void)

void FUN_146d60f34(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d624d0(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d611b0 FUN_146d611b0 body=635 status=ok
// SIG undefined FUN_146d611b0(void)

void FUN_146d611b0(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d62824(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d6142c FUN_146d6142c body=850 status=ok
// SIG undefined FUN_146d6142c(void)

undefined8
FUN_146d6142c(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3db22(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d616ed;
    }
  }
  uVar2 = 0;
LAB_146d616ed:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d61780 FUN_146d61780 body=850 status=ok
// SIG undefined FUN_146d61780(void)

undefined8
FUN_146d61780(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3ddd8(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d61a41;
    }
  }
  uVar2 = 0;
LAB_146d61a41:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d61ad4 FUN_146d61ad4 body=850 status=ok
// SIG undefined FUN_146d61ad4(void)

undefined8
FUN_146d61ad4(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3e08e(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d61d95;
    }
  }
  uVar2 = 0;
LAB_146d61d95:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d61e28 FUN_146d61e28 body=850 status=ok
// SIG undefined FUN_146d61e28(void)

undefined8
FUN_146d61e28(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3e344(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d620e9;
    }
  }
  uVar2 = 0;
LAB_146d620e9:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d6217c FUN_146d6217c body=850 status=ok
// SIG undefined FUN_146d6217c(void)

undefined8
FUN_146d6217c(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3e5fa(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d6243d;
    }
  }
  uVar2 = 0;
LAB_146d6243d:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d624d0 FUN_146d624d0 body=850 status=ok
// SIG undefined FUN_146d624d0(void)

undefined8
FUN_146d624d0(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3e8b0(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d62791;
    }
  }
  uVar2 = 0;
LAB_146d62791:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d62824 FUN_146d62824 body=850 status=ok
// SIG undefined FUN_146d62824(void)

undefined8
FUN_146d62824(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = thunk_FUN_146e3eb66(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_146d62ae5;
    }
  }
  uVar2 = 0;
LAB_146d62ae5:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d62b77 FUN_146d62b77 body=361 status=ok
// SIG undefined FUN_146d62b77(void)

void FUN_146d62b77(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d62bfe_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d62bfe_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d62bc9_caseD_82;
  case 3:
switchD_146d62bfe_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d62b77(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d62bfe_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d62bfe_caseD_0;
    case 0x41:
      goto switchD_146d62bfe_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d62bfe_caseD_3;
    case 0x48:
      goto switchD_146d62bfe_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d62bc9_caseD_82:
    if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d62d80(param_3,param_1);
    return;
  }
}



// FUNCTION 146d62d80 FUN_146d62d80 body=703 status=ok
// SIG undefined FUN_146d62d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d62d80(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3db22(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d63040 FUN_146d63040 body=703 status=ok
// SIG undefined FUN_146d63040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d63040(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = FUN_141261896(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d63300 FUN_146d63300 body=703 status=ok
// SIG undefined FUN_146d63300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d63300(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3ddd8(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d635c0 FUN_146d635c0 body=703 status=ok
// SIG undefined FUN_146d635c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d635c0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3e08e(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d63880 FUN_146d63880 body=703 status=ok
// SIG undefined FUN_146d63880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d63880(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3e344(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d63b40 FUN_146d63b40 body=703 status=ok
// SIG undefined FUN_146d63b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d63b40(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3e5fa(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d63e00 FUN_146d63e00 body=703 status=ok
// SIG undefined FUN_146d63e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d63e00(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3e8b0(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d640c0 FUN_146d640c0 body=703 status=ok
// SIG undefined FUN_146d640c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d640c0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  char cVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_78;
  local_78 = 0x3ff0000000000000;
  local_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  local_90 = *(undefined4 *)(param_1 + 10);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_88 = *(undefined4 *)(param_1 + 0xb);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a0 = param_1[8];
  uStack_98 = param_1[9];
  local_b0 = param_1[6];
  uStack_a8 = param_1[7];
  local_b8 = *(undefined8 *)param_1[5];
  local_c0 = *(undefined8 *)param_1[4];
  local_c8 = *(undefined8 *)param_1[3];
  cVar14 = thunk_FUN_146e3eb66(*param_1,local_a0,param_1[1],param_1[2]);
  if (cVar14 != '\0') {
    pdVar2 = (double *)param_1[1];
    pdVar3 = (double *)param_1[8];
    dVar19 = *pdVar3 - pdVar2[4];
    dVar20 = pdVar3[1] - pdVar2[5];
    dVar15 = pdVar3[2] - pdVar2[6];
    auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar9 = -*pdVar2;
    dVar10 = -pdVar2[1];
    dVar17 = pdVar2[2] * -1.0;
    dVar18 = pdVar2[3] * 1.0;
    dVar21 = dVar19 * dVar17 - dVar9 * dVar15;
    dVar11 = dVar20 * dVar9 - dVar19 * dVar10;
    dVar12 = dVar15 * dVar10 - dVar20 * dVar17;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar11 = dVar11 + dVar11;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
            (*pdVar2 * dVar11 + dVar17 * dVar12 + dVar18 * dVar21 + dVar20);
    dVar20 = pdVar2[10];
    pauVar4 = (undefined1 (*) [16])param_1[0xc];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_)
                   * ((dVar11 * dVar10 - dVar21 * dVar17) + dVar18 * dVar12 + dVar19);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *pauVar4 = auVar7;
    *(double *)pauVar4[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) & (ulonglong)(1.0 / dVar20)) *
         (dVar18 * dVar11 + dVar15 + (dVar21 * dVar9 - dVar12 * dVar10));
    puVar5 = (undefined8 *)param_1[8];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x28) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x18) = *puVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = (undefined8 *)param_1[9];
    lVar6 = param_1[0xc];
    *(undefined8 *)(lVar6 + 0x40) = puVar5[2];
    uVar13 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x30) = *puVar5;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    *(undefined8 *)(param_1[0xc] + 0x48) = *(undefined8 *)param_1[7];
    *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)param_1[10];
    *(undefined8 *)param_1[0xd] = *(undefined8 *)param_1[6];
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d64380 FUN_146d64380 body=361 status=ok
// SIG undefined FUN_146d64380(void)

void FUN_146d64380(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d64407_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d64407_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d643d2_caseD_82;
  case 3:
switchD_146d64407_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d64380(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d64407_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d64407_caseD_0;
    case 0x41:
      goto switchD_146d64407_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d64407_caseD_3;
    case 0x48:
      goto switchD_146d64407_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d643d2_caseD_82:
    if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d6458a(param_3,param_1);
    return;
  }
}



// FUNCTION 146d6458a FUN_146d6458a body=635 status=ok
// SIG undefined FUN_146d6458a(void)

void FUN_146d6458a(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d6142c(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d64806 FUN_146d64806 body=635 status=ok
// SIG undefined FUN_146d64806(void)

void FUN_146d64806(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_14126154a(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d64a82 FUN_146d64a82 body=635 status=ok
// SIG undefined FUN_146d64a82(void)

void FUN_146d64a82(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61780(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d64cfe FUN_146d64cfe body=635 status=ok
// SIG undefined FUN_146d64cfe(void)

void FUN_146d64cfe(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61ad4(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d64f7a FUN_146d64f7a body=635 status=ok
// SIG undefined FUN_146d64f7a(void)

void FUN_146d64f7a(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61e28(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d651f6 FUN_146d651f6 body=635 status=ok
// SIG undefined FUN_146d651f6(void)

void FUN_146d651f6(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d6217c(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d65472 FUN_146d65472 body=635 status=ok
// SIG undefined FUN_146d65472(void)

void FUN_146d65472(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d624d0(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d656ee FUN_146d656ee body=635 status=ok
// SIG undefined FUN_146d656ee(void)

void FUN_146d656ee(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d62824(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d65be6 FUN_146d65be6 body=635 status=ok
// SIG undefined FUN_146d65be6(void)

void FUN_146d65be6(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_14126154a(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d65e62 FUN_146d65e62 body=635 status=ok
// SIG undefined FUN_146d65e62(void)

void FUN_146d65e62(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61780(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d660de FUN_146d660de body=635 status=ok
// SIG undefined FUN_146d660de(void)

void FUN_146d660de(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61ad4(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d6635a FUN_146d6635a body=635 status=ok
// SIG undefined FUN_146d6635a(void)

void FUN_146d6635a(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d61e28(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d665d6 FUN_146d665d6 body=635 status=ok
// SIG undefined FUN_146d665d6(void)

void FUN_146d665d6(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d6217c(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d66852 FUN_146d66852 body=635 status=ok
// SIG undefined FUN_146d66852(void)

void FUN_146d66852(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d624d0(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d66ace FUN_146d66ace body=635 status=ok
// SIG undefined FUN_146d66ace(void)

void FUN_146d66ace(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = &local_94;
  local_94 = 0xffffffff;
  local_e8 = *(undefined8 *)param_1[5];
  local_f0 = *(undefined8 *)param_1[4];
  local_f8 = *(undefined8 *)param_1[3];
  local_b8 = local_b0;
  local_c8 = &local_90;
  local_d0 = &local_78;
  local_d8 = &local_60;
  local_e0 = &local_58;
  cVar6 = FUN_146d62824(*param_1,local_f0,param_1[1],param_1[2]);
  if (cVar6 != '\0') {
    pdVar1 = (double *)param_1[1];
    pdVar2 = (double *)param_1[6];
    dVar9 = local_78 - pdVar1[4];
    dVar10 = dStack_70 - pdVar1[5];
    dVar4 = local_68 - pdVar1[6];
    dVar5 = *pdVar1;
    dVar7 = pdVar1[2] * -1.0;
    dVar8 = pdVar1[3] * 1.0;
    dVar11 = -dVar5;
    dVar12 = -pdVar1[1];
    dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
    dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
    dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
    pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
    pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0x28) = local_68;
    *(double *)(lVar3 + 0x18) = local_78;
    *(double *)(lVar3 + 0x20) = dStack_70;
    lVar3 = param_1[6];
    *(undefined8 *)(lVar3 + 0x40) = local_80;
    *(undefined8 *)(lVar3 + 0x30) = local_90;
    *(undefined8 *)(lVar3 + 0x38) = uStack_88;
    *(undefined8 *)(param_1[6] + 0x48) = local_60;
    *(undefined4 *)(param_1[6] + 0x50) = local_94;
    *(undefined8 *)param_1[7] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d66d4a FUN_146d66d4a body=325 status=ok
// SIG undefined FUN_146d66d4a(void)

undefined4
FUN_146d66d4a(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = param_3[4];
  uStack_144 = param_3[5];
  uStack_140 = param_3[6];
  uStack_13c = param_3[7];
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_146cdd012(local_f0,local_158,param_1 + 0x38);
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_188 = &local_178;
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3b724(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_1405cc3c4(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d66e90 FUN_146d66e90 body=328 status=ok
// SIG undefined FUN_146d66e90(void)

undefined4
FUN_146d66e90(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = *(undefined8 *)(param_3 + 4);
  uStack_140 = *(undefined8 *)(param_3 + 6);
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_1405cc404(local_f0,local_158,param_1 + 0x38,0);
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_188 = &local_178;
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3b724(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_1405cc3c4(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d66fda FUN_146d66fda body=325 status=ok
// SIG undefined FUN_146d66fda(void)

undefined4
FUN_146d66fda(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = param_3[4];
  uStack_144 = param_3[5];
  uStack_140 = param_3[6];
  uStack_13c = param_3[7];
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_146cd92f6(local_f0,local_158,param_1 + 0x38);
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_188 = &local_178;
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3b392(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_14068416c(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d67120 FUN_146d67120 body=328 status=ok
// SIG undefined FUN_146d67120(void)

undefined4
FUN_146d67120(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = *(undefined8 *)(param_3 + 4);
  uStack_140 = *(undefined8 *)(param_3 + 6);
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_1406841ac(local_f0,local_158,param_1 + 0x38,0);
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_188 = &local_178;
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3b392(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_14068416c(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d6726a FUN_146d6726a body=325 status=ok
// SIG undefined FUN_146d6726a(void)

undefined4
FUN_146d6726a(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = param_3[4];
  uStack_144 = param_3[5];
  uStack_140 = param_3[6];
  uStack_13c = param_3[7];
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_146ce0e18(local_f0,local_158,param_1 + 0x38);
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_188 = &local_178;
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3bab6(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_1402e5682(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d673b0 FUN_146d673b0 body=328 status=ok
// SIG undefined FUN_146d673b0(void)

undefined4
FUN_146d673b0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = *(double *)(param_3 + 0xc) * *(double *)(param_1 + 0x48);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  dStack_130 = *(double *)(param_3 + 10) * *(double *)(param_1 + 0x40);
  local_148 = *(undefined8 *)(param_3 + 4);
  uStack_140 = *(undefined8 *)(param_3 + 6);
  local_138 = *(double *)(param_3 + 8) * *(double *)(param_1 + 0x38);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  FUN_1402e56c2(local_f0,local_158,param_1 + 0x38,0);
  local_178 = *(undefined8 *)(param_1 + 0x20);
  uStack_170 = *(undefined8 *)(param_1 + 0x28);
  local_188 = &local_178;
  local_168 = *(undefined8 *)(param_1 + 0x30);
  local_198 = param_7;
  uStack_190 = param_8;
  local_1a8 = param_5;
  uStack_1a0 = param_6;
  uVar1 = FUN_146e3bab6(*(undefined8 *)(param_1 + 0x88),local_f0,&local_158,param_4);
  FUN_1402e5682(local_f0);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d674f9 FUN_146d674f9 body=41 status=ok
// SIG undefined FUN_146d674f9(void)

void FUN_146d674f9(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x54);
    do {
      *(undefined8 *)(puVar1 + -0xc) = 0x7fefffffffffffff;
      *(undefined4 *)(puVar1 + -4) = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146d67522 FUN_146d67522 body=62 status=ok
// SIG undefined FUN_146d67522(void)

void FUN_146d67522(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d67560(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 146d67560 FUN_146d67560 body=104 status=ok
// SIG undefined FUN_146d67560(void)

ulonglong FUN_146d67560(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146d67596;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_146d67596:
  return param_2 & 0xffffffff;
}



// FUNCTION 146d675c8 FUN_146d675c8 body=62 status=ok
// SIG undefined FUN_146d675c8(void)

void FUN_146d675c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d67606(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146d67606 FUN_146d67606 body=112 status=ok
// SIG undefined FUN_146d67606(void)

ulonglong FUN_146d67606(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146d67640;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146d67640:
  return param_2 & 0xffffffff;
}



// FUNCTION 146d67676 FUN_146d67676 body=143 status=ok
// SIG undefined FUN_146d67676(void)

void FUN_146d67676(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d67706 FUN_146d67706 body=428 status=ok
// SIG undefined FUN_146d67706(void)

void FUN_146d67706(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146d678b4 FUN_146d678b4 body=450 status=ok
// SIG undefined FUN_146d678b4(void)

void FUN_146d678b4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146d67a78 FUN_146d67a78 body=292 status=ok
// SIG undefined FUN_146d67a78(void)

undefined4 * FUN_146d67a78(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146d67b9e(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  cVar3 = FUN_146d67c84(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_146d678b4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d67b9e FUN_146d67b9e body=229 status=ok
// SIG undefined FUN_146d67b9e(void)

int * FUN_146d67b9e(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 146d67c84 FUN_146d67c84 body=117 status=ok
// SIG undefined FUN_146d67c84(void)

undefined8 FUN_146d67c84(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          FUN_146d67cfa(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146d67cfa FUN_146d67cfa body=114 status=ok
// SIG undefined FUN_146d67cfa(void)

void FUN_146d67cfa(longlong *param_1,int param_2)

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



// FUNCTION 146d67d6c FUN_146d67d6c body=132 status=ok
// SIG undefined FUN_146d67d6c(void)

void FUN_146d67d6c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d67df2 FUN_146d67df2 body=62 status=ok
// SIG undefined FUN_146d67df2(void)

void FUN_146d67df2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d67e30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d67e30 FUN_146d67e30 body=93 status=ok
// SIG undefined FUN_146d67e30(void)

ulonglong FUN_146d67e30(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d67e8e FUN_146d67e8e body=78 status=ok
// SIG undefined FUN_146d67e8e(void)

void FUN_146d67e8e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x1ffffffffffff800U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1404b1b2e(param_1,iVar1,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 146d67edc FUN_146d67edc body=643 status=ok
// SIG undefined FUN_146d67edc(void)

undefined8 * FUN_146d67edc(undefined8 *param_1,int *param_2,int *param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  bool bVar18;
  
  lVar17 = (longlong)param_3 - (longlong)param_2 >> 3;
  FUN_146d68259(param_2,param_2 + lVar17,param_3 + -1);
  piVar12 = param_2 + lVar17;
  do {
    piVar14 = piVar12;
    if (piVar14 <= param_2) break;
    lVar15 = *(longlong *)(param_4 + 0xa00);
    if (*(longlong *)(param_4 + 0xa00) == 0) {
      lVar15 = param_4;
    }
    pfVar1 = (float *)(lVar15 + 0x10 + (longlong)*piVar14 * 0x50);
    pfVar2 = (float *)(lVar15 + 0x10 + (longlong)piVar14[-1] * 0x50);
    auVar3._4_4_ = -(uint)(pfVar1[1] != pfVar2[1]);
    auVar3._0_4_ = -(uint)(*pfVar1 != *pfVar2);
    auVar3._8_4_ = -(uint)(pfVar1[2] != pfVar2[2]);
    auVar3._12_4_ = -(uint)(pfVar1[3] != pfVar2[3]);
    iVar11 = movmskps((int)((longlong)*piVar14 * 0x50),auVar3);
    piVar12 = piVar14 + -1;
  } while (iVar11 == 0);
  piVar12 = param_2 + lVar17;
  do {
    piVar12 = piVar12 + 1;
    piVar13 = piVar12;
    piVar16 = piVar14;
    if (param_3 <= piVar12) break;
    lVar17 = *(longlong *)(param_4 + 0xa00);
    if (*(longlong *)(param_4 + 0xa00) == 0) {
      lVar17 = param_4;
    }
    pfVar1 = (float *)(lVar17 + 0x10 + (longlong)*piVar14 * 0x50);
    pfVar2 = (float *)(lVar17 + 0x10 + (longlong)*piVar12 * 0x50);
    auVar4._4_4_ = -(uint)(pfVar1[1] != pfVar2[1]);
    auVar4._0_4_ = -(uint)(*pfVar1 != *pfVar2);
    auVar4._8_4_ = -(uint)(pfVar1[2] != pfVar2[2]);
    auVar4._12_4_ = -(uint)(pfVar1[3] != pfVar2[3]);
    iVar11 = movmskps((int)((longlong)*piVar12 * 0x50),auVar4);
  } while (iVar11 == 0);
LAB_146d67fc5:
  do {
    piVar9 = piVar14;
    if (piVar13 < param_3) {
      lVar17 = *(longlong *)(param_4 + 0xa00);
      if (*(longlong *)(param_4 + 0xa00) == 0) {
        lVar17 = param_4;
      }
      pfVar1 = (float *)(lVar17 + 0x10 + (longlong)*piVar13 * 0x50);
      pfVar2 = (float *)(lVar17 + 0x10 + (longlong)*piVar14 * 0x50);
      auVar7._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
      auVar7._0_4_ = -(uint)(*pfVar1 < *pfVar2);
      auVar7._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
      auVar7._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
      iVar11 = movmskps((int)((longlong)*piVar14 * 0x50),auVar7);
      if (iVar11 == 0) {
        auVar5._4_4_ = -(uint)(pfVar2[1] < pfVar1[1]);
        auVar5._0_4_ = -(uint)(*pfVar2 < *pfVar1);
        auVar5._8_4_ = -(uint)(pfVar2[2] < pfVar1[2]);
        auVar5._12_4_ = -(uint)(pfVar2[3] < pfVar1[3]);
        iVar11 = movmskps(0,auVar5);
        if (iVar11 != 0) goto joined_r0x000146d68034;
        if (piVar13 != piVar12) {
          iVar11 = *piVar12;
          *piVar12 = *piVar13;
          *piVar13 = iVar11;
        }
        piVar12 = piVar12 + 1;
      }
      piVar13 = piVar13 + 1;
      goto LAB_146d67fc5;
    }
joined_r0x000146d68034:
    while (piVar10 = piVar16, param_2 < piVar10) {
      piVar16 = piVar10 + -1;
      lVar17 = *(longlong *)(param_4 + 0xa00);
      if (*(longlong *)(param_4 + 0xa00) == 0) {
        lVar17 = param_4;
      }
      pfVar1 = (float *)(lVar17 + 0x10 + (longlong)*piVar9 * 0x50);
      pfVar2 = (float *)(lVar17 + 0x10 + (longlong)piVar10[-1] * 0x50);
      auVar8._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
      auVar8._0_4_ = -(uint)(*pfVar1 < *pfVar2);
      auVar8._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
      auVar8._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
      iVar11 = movmskps((int)((longlong)*piVar9 * 0x50),auVar8);
      if (iVar11 == 0) {
        auVar6._4_4_ = -(uint)(pfVar2[1] < pfVar1[1]);
        auVar6._0_4_ = -(uint)(*pfVar2 < *pfVar1);
        auVar6._8_4_ = -(uint)(pfVar2[2] < pfVar1[2]);
        auVar6._12_4_ = -(uint)(pfVar2[3] < pfVar1[3]);
        iVar11 = movmskps(0,auVar6);
        if (iVar11 != 0) break;
        piVar14 = piVar9 + -1;
        bVar18 = piVar10 != piVar9;
        piVar9 = piVar14;
        if (bVar18) {
          iVar11 = *piVar14;
          *piVar14 = piVar10[-1];
          *piVar16 = iVar11;
        }
      }
    }
    if ((piVar13 == param_3) && (piVar10 == param_2)) {
      *param_1 = piVar9;
      param_1[1] = piVar12;
      return param_1;
    }
    if (piVar10 == param_2) {
      iVar11 = *piVar9;
      if (piVar12 != piVar13) {
        *piVar9 = *piVar12;
        *piVar12 = iVar11;
        iVar11 = *piVar9;
      }
      piVar12 = piVar12 + 1;
      *piVar9 = *piVar13;
      *piVar13 = iVar11;
      piVar14 = piVar9 + 1;
      piVar13 = piVar13 + 1;
      piVar16 = param_2;
    }
    else {
      piVar16 = piVar10 + -1;
      if (piVar13 == param_3) {
        piVar14 = piVar9 + -1;
        iVar11 = piVar9[-1];
        if (piVar10 != piVar9) {
          iVar11 = *piVar16;
          *piVar16 = piVar9[-1];
          *piVar14 = iVar11;
        }
        *piVar14 = piVar12[-1];
        piVar12[-1] = iVar11;
        piVar12 = piVar12 + -1;
      }
      else {
        iVar11 = *piVar13;
        *piVar13 = *piVar16;
        *piVar16 = iVar11;
        piVar13 = piVar13 + 1;
        piVar14 = piVar9;
      }
    }
  } while( true );
}



// FUNCTION 146d6815f FUN_146d6815f body=250 status=ok
// SIG undefined FUN_146d6815f(void)

void FUN_146d6815f(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  while (lVar5 < lVar7) {
    lVar8 = *(longlong *)(param_5 + 0xa00);
    if (*(longlong *)(param_5 + 0xa00) == 0) {
      lVar8 = param_5;
    }
    lVar10 = (longlong)*(int *)(param_1 + 8 + lVar5 * 8) * 0x50;
    pfVar1 = (float *)(lVar8 + 0x10 + (longlong)*(int *)(param_1 + 4 + lVar5 * 8) * 0x50);
    pfVar2 = (float *)(lVar8 + 0x10 + lVar10);
    auVar3._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
    auVar3._0_4_ = -(uint)(*pfVar1 < *pfVar2);
    auVar3._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
    auVar3._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
    iVar9 = movmskps((int)lVar10,auVar3);
    if (iVar9 == 0) {
      lVar8 = lVar5 * 2 + 2;
    }
    else {
      lVar8 = lVar5 * 2 + 1;
    }
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + lVar8 * 4);
    lVar5 = lVar8;
  }
  if (((param_3 & 1) == 0) && (lVar5 == lVar7)) {
    *(undefined4 *)(param_1 + lVar7 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar5 = param_3 - 1;
  }
  while (param_2 < lVar5) {
    lVar8 = lVar5 + -1 >> 1;
    iVar9 = *(int *)(param_1 + lVar8 * 4);
    lVar7 = *(longlong *)(param_5 + 0xa00);
    if (*(longlong *)(param_5 + 0xa00) == 0) {
      lVar7 = param_5;
    }
    pfVar1 = (float *)(lVar7 + 0x10 + (longlong)*param_4 * 0x50);
    pfVar2 = (float *)(lVar7 + 0x10 + (longlong)iVar9 * 0x50);
    auVar4._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
    auVar4._0_4_ = -(uint)(*pfVar1 < *pfVar2);
    auVar4._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
    auVar4._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
    iVar6 = movmskps((int)((longlong)*param_4 * 0x50),auVar4);
    if (iVar6 == 0) break;
    *(int *)(param_1 + lVar5 * 4) = iVar9;
    lVar5 = lVar8;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_4;
  return;
}



// FUNCTION 146d68259 FUN_146d68259 body=168 status=ok
// SIG undefined FUN_146d68259(void)

void FUN_146d68259(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
    FUN_146d68301(param_1,lVar2,param_1 + uVar1,param_4);
    FUN_146d68301(param_2 + uVar3 * -4,param_2,param_2 + uVar3 * 4,param_4);
    lVar4 = param_3 + uVar3 * -4;
    FUN_146d68301(param_3 - uVar1,lVar4,param_3,param_4);
    param_1 = lVar2;
    param_3 = lVar4;
  }
  FUN_146d68301(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 146d68301 FUN_146d68301 body=197 status=ok
// SIG undefined FUN_146d68301(void)

void FUN_146d68301(int *param_1,int *param_2,int *param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar9 = *param_2;
  lVar10 = *(longlong *)(param_4 + 0xa00);
  lVar8 = lVar10;
  if (lVar10 == 0) {
    lVar8 = param_4;
  }
  lVar6 = (longlong)iVar9;
  pfVar1 = (float *)(lVar8 + 0x10 + (longlong)*param_1 * 0x50);
  pfVar2 = (float *)(lVar8 + 0x10 + lVar6 * 0x50);
  auVar3._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
  auVar3._0_4_ = -(uint)(*pfVar1 < *pfVar2);
  auVar3._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
  auVar3._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
  iVar7 = movmskps((int)lVar8,auVar3);
  if (iVar7 != 0) {
    *param_2 = *param_1;
    *param_1 = iVar9;
    iVar9 = *param_2;
    lVar10 = *(longlong *)(param_4 + 0xa00);
    lVar6 = (longlong)iVar9;
  }
  iVar7 = *param_3;
  if (lVar10 == 0) {
    lVar10 = param_4;
  }
  pfVar1 = (float *)(lVar10 + 0x10 + lVar6 * 0x50);
  pfVar2 = (float *)(lVar10 + 0x10 + (longlong)iVar7 * 0x50);
  auVar4._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
  auVar4._0_4_ = -(uint)(*pfVar1 < *pfVar2);
  auVar4._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
  auVar4._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
  iVar11 = movmskps((int)lVar10,auVar4);
  if (iVar11 != 0) {
    *param_3 = iVar9;
    *param_2 = iVar7;
    lVar10 = *(longlong *)(param_4 + 0xa00);
    if (*(longlong *)(param_4 + 0xa00) == 0) {
      lVar10 = param_4;
    }
    pfVar1 = (float *)(lVar10 + 0x10 + (longlong)*param_1 * 0x50);
    pfVar2 = (float *)(lVar10 + 0x10 + (longlong)iVar7 * 0x50);
    auVar5._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
    auVar5._0_4_ = -(uint)(*pfVar1 < *pfVar2);
    auVar5._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
    auVar5._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
    iVar9 = movmskps((int)lVar10,auVar5);
    if (iVar9 != 0) {
      *param_2 = *param_1;
      *param_1 = iVar7;
    }
  }
  return;
}



// FUNCTION 146d683c6 FUN_146d683c6 body=147 status=ok
// SIG undefined FUN_146d683c6(void)

void FUN_146d683c6(longlong param_1,int param_2)

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



// FUNCTION 146d6845a FUN_146d6845a body=76 status=ok
// SIG undefined FUN_146d6845a(void)

void FUN_146d6845a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar1 = param_1;
  }
  FUN_14026cdd0(lVar1,*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) == param_2) {
    return;
  }
  FUN_146d684a8(param_1,param_2);
  return;
}



// FUNCTION 146d684a8 FUN_146d684a8 body=91 status=ok
// SIG undefined FUN_146d684a8(void)

void FUN_146d684a8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,0);
    uVar2 = (uint)(uVar1 / 0x58);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 100)) {
    return;
  }
  *(uint *)(param_1 + 100) = uVar3;
  FUN_14019a0e4(param_1,*(undefined4 *)(param_1 + 0x60),uVar3);
  return;
}



// FUNCTION 146d68504 FUN_146d68504 body=87 status=ok
// SIG undefined FUN_146d68504(void)

void FUN_146d68504(longlong param_1,int param_2)

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
  FUN_1400c6ee6();
  return;
}



// FUNCTION 146d6855c FUN_146d6855c body=87 status=ok
// SIG undefined FUN_146d6855c(void)

void FUN_146d6855c(longlong param_1,int param_2)

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
  FUN_140566582();
  return;
}



// FUNCTION 146d685b4 FUN_146d685b4 body=114 status=ok
// SIG undefined FUN_146d685b4(void)

void FUN_146d685b4(longlong *param_1,int param_2)

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



// FUNCTION 146d68626 FUN_146d68626 body=72 status=ok
// SIG undefined FUN_146d68626(void)

undefined4 FUN_146d68626(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f4e130;
  if (param_1[0x19] != 0) {
    FUN_14026d0a4(param_1[0x18]);
  }
  param_1[0xf] = &PTR_FUN_149f553e0;
  param_1[8] = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 9);
}



// FUNCTION 146d6866e FUN_146d6866e body=62 status=ok
// SIG undefined FUN_146d6866e(void)

undefined8 FUN_146d6866e(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  
  FUN_1400c545c();
  dVar1 = (double)(**(code **)(*param_2 + 0x18))(param_2);
  FUN_1400c5aac(param_1,*(undefined1 *)((longlong)param_2 + 0x1d),0xe,(float)dVar1,0);
  return param_1;
}



// FUNCTION 146d686ac FUN_146d686ac body=55 status=ok
// SIG undefined FUN_146d686ac(void)

longlong FUN_146d686ac(longlong param_1)

{
  FUN_146d686e4();
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | 0x7fffffff;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 146d686e4 FUN_146d686e4 body=663 status=ok
// SIG undefined FUN_146d686e4(void)

undefined8 * FUN_146d686e4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  *param_1 = &PTR_LAB_149f4b8e0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar3;
  *param_1 = &PTR_FUN_149f4f140;
  memcpy(param_1 + 3,(void *)(param_2 + 0x18),800);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)((longlong)param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x358);
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 0x368);
  *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  param_1[0x6e] = *(undefined8 *)(param_2 + 0x370);
  param_1[0x7d] = 0;
  iVar1 = *(int *)(param_2 + 0x3f0);
  pvVar2 = *(void **)(param_2 + 1000);
  *(int *)(param_1 + 0x7e) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3f4) = 4;
  }
  else {
    pvVar7 = (void *)(param_2 + 0x378);
    if (pvVar2 != (void *)0x0) {
      pvVar7 = pvVar2;
    }
    FUN_146d71c32(param_1 + 0x6f,iVar1,0);
    puVar6 = (undefined8 *)param_1[0x7d];
    if ((undefined8 *)param_1[0x7d] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0x6f;
    }
    memcpy(puVar6,pvVar7,(longlong)iVar1 * 0x1c);
  }
  param_1[0xb5] = 0;
  iVar1 = *(int *)(param_2 + 0x5b0);
  pvVar2 = *(void **)(param_2 + 0x5a8);
  *(int *)(param_1 + 0xb6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5b4) = 4;
  }
  else {
    pvVar7 = (void *)(param_2 + 0x3f8);
    if (pvVar2 != (void *)0x0) {
      pvVar7 = pvVar2;
    }
    FUN_146d71cac(param_1 + 0x7f,iVar1,0);
    puVar6 = (undefined8 *)param_1[0xb5];
    if ((undefined8 *)param_1[0xb5] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0x7f;
    }
    memcpy(puVar6,pvVar7,(longlong)iVar1 * 0x6c);
  }
  param_1[0xc5] = 0;
  iVar1 = *(int *)(param_2 + 0x630);
  pvVar2 = *(void **)(param_2 + 0x628);
  *(int *)(param_1 + 0xc6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x634) = 4;
  }
  else {
    pvVar7 = (void *)(param_2 + 0x5b8);
    if (pvVar2 != (void *)0x0) {
      pvVar7 = pvVar2;
    }
    FUN_146d71d20(param_1 + 0xb7,iVar1,0);
    puVar6 = (undefined8 *)param_1[0xc5];
    if ((undefined8 *)param_1[0xc5] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0xb7;
    }
    memcpy(puVar6,pvVar7,(longlong)iVar1 * 0x1c);
  }
  param_1[0xcb] = *(undefined8 *)(param_2 + 0x658);
  uVar3 = *(undefined8 *)(param_2 + 0x638);
  uVar4 = *(undefined8 *)(param_2 + 0x640);
  uVar5 = *(undefined8 *)(param_2 + 0x650);
  param_1[0xc9] = *(undefined8 *)(param_2 + 0x648);
  param_1[0xca] = uVar5;
  param_1[199] = uVar3;
  param_1[200] = uVar4;
  return param_1;
}



// FUNCTION 146d6897c FUN_146d6897c body=138 status=ok
// SIG undefined FUN_146d6897c(void)

void FUN_146d6897c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined8 *)(param_1 + 0x150);
  local_38 = *(undefined8 *)(param_1 + 0x140);
  uStack_30 = *(undefined8 *)(param_1 + 0x148);
  local_48 = *(undefined4 *)(param_1 + 0x158);
  uStack_44 = *(undefined4 *)(param_1 + 0x15c);
  uStack_40 = *(undefined4 *)(param_1 + 0x160);
  uStack_3c = *(undefined4 *)(param_1 + 0x164);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_146d68a08();
  *(undefined8 *)(param_1 + 0x140) = local_38;
  *(undefined8 *)(param_1 + 0x148) = uStack_30;
  *(undefined8 *)(param_1 + 0x150) = local_28;
  *(undefined4 *)(param_1 + 0x158) = local_48;
  *(undefined4 *)(param_1 + 0x15c) = uStack_44;
  *(undefined4 *)(param_1 + 0x160) = uStack_40;
  *(undefined4 *)(param_1 + 0x164) = uStack_3c;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d68a08 FUN_146d68a08 body=328 status=ok
// SIG undefined FUN_146d68a08(void)

longlong FUN_146d68a08(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  memcpy((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),800);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  FUN_146d71d9a(param_1 + 0x378,param_2 + 0x378);
  FUN_146d71e06(param_1 + 0x3f8,param_2 + 0x3f8);
  FUN_146d71e7e(param_1 + 0x5b8,param_2 + 0x5b8);
  uVar1 = *(undefined8 *)(param_2 + 0x640);
  uVar2 = *(undefined8 *)(param_2 + 0x648);
  uVar3 = *(undefined8 *)(param_2 + 0x650);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  *(undefined8 *)(param_1 + 0x640) = uVar1;
  *(undefined8 *)(param_1 + 0x648) = uVar2;
  *(undefined8 *)(param_1 + 0x650) = uVar3;
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(param_2 + 0x658);
  return param_1;
}



// FUNCTION 146d68b50 FUN_146d68b50 body=138 status=ok
// SIG undefined FUN_146d68b50(void)

void FUN_146d68b50(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x1b8) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1bc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ce5792(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar2 = param_1;
    }
    FUN_146d7293c((longlong)iVar1 * 0x6c + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x1b8) = param_2, param_3 == '\x01')) {
      FUN_146d7297c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d68bdc FUN_146d68bdc body=832 status=ok
// SIG undefined FUN_146d68bdc(void)

undefined8 FUN_146d68bdc(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  uint uVar10;
  float fVar11;
  undefined8 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar10 = *(uint *)(param_1 + 0x5b0);
  if (((ulonglong)uVar10 != 0) && (0 < (int)uVar10)) {
    pfVar13 = *(float **)(param_1 + 0x5a8);
    if (*(float **)(param_1 + 0x5a8) == (float *)0x0) {
      pfVar13 = (float *)(param_1 + 0x3f8);
    }
    dVar15 = param_2[2];
    dVar1 = param_2[1];
    dVar2 = param_2[3];
    fVar11 = *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x168);
    dVar3 = param_2[4];
    dVar4 = param_2[6];
    dVar5 = param_2[5];
    dVar6 = param_2[7];
    dVar7 = param_2[8];
    uVar14 = 0;
    do {
      if ((double)pfVar13[8] * dVar7 + (double)pfVar13[6] * dVar4 + (double)pfVar13[7] * dVar6 < 0.7
         ) {
        return 0;
      }
      fVar16 = pfVar13[2] - (float)dVar15;
      fVar18 = pfVar13[1] - (float)dVar1;
      fVar17 = *pfVar13 - (float)*param_2;
      if ((fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18 < fVar11) &&
         (fVar16 = pfVar13[3] - (float)dVar2, fVar17 = pfVar13[4] - (float)dVar3,
         fVar18 = pfVar13[5] - (float)dVar5,
         fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17 < fVar11)) {
        dVar8 = param_2[9];
        uVar12 = CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
        if ((double)pfVar13[9] <= dVar8) {
          return uVar12;
        }
        fVar11 = *(float *)(param_2 + 10);
        uVar9 = *(undefined1 *)((longlong)param_2 + 0x54);
        *pfVar13 = (float)*param_2;
        pfVar13[1] = (float)dVar1;
        pfVar13[2] = (float)dVar15;
        pfVar13[3] = (float)dVar2;
        pfVar13[4] = (float)dVar3;
        pfVar13[5] = (float)dVar5;
        pfVar13[6] = (float)dVar4;
        pfVar13[7] = (float)dVar6;
        pfVar13[8] = (float)dVar7;
        pfVar13[9] = (float)dVar8;
        pfVar13[10] = fVar11;
        *(undefined1 *)(pfVar13 + 0xb) = uVar9;
        dVar15 = param_2[2];
        dVar1 = param_2[1];
        pfVar13[0x15] = (float)*param_2;
        pfVar13[0x16] = (float)dVar1;
        pfVar13[0x17] = (float)dVar15;
        dVar15 = param_2[5];
        dVar1 = param_2[4];
        pfVar13[0x18] = (float)param_2[3];
        pfVar13[0x19] = (float)dVar1;
        pfVar13[0x1a] = (float)dVar15;
        *(byte *)(pfVar13 + 0xc) = *(byte *)(pfVar13 + 0xc) & 0xf9 | 4;
        if ((longlong)*(int *)(param_1 + 0x16c) == -1) {
          dVar15 = 1.79769313486232e+308;
        }
        else {
          pfVar13 = (float *)(param_1 + 0x3f8);
          if (*(float **)(param_1 + 0x5a8) != (float *)0x0) {
            pfVar13 = *(float **)(param_1 + 0x5a8);
          }
          dVar15 = (double)pfVar13[(longlong)*(int *)(param_1 + 0x16c) * 0x1b + 9];
        }
        if (param_2[9] < dVar15) {
          *(int *)(param_1 + 0x16c) = (int)uVar14;
          return uVar12;
        }
        return uVar12;
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 0x1b;
    } while (uVar10 != uVar14);
    if ((uVar10 == 4) && (DAT_14c992eed == '\x01')) {
      uVar12 = FUN_146d68f1c();
      return uVar12;
    }
  }
  return 0;
}



// FUNCTION 146d68f1c FUN_146d68f1c body=2002 status=ok
// SIG undefined FUN_146d68f1c(void)

undefined8 FUN_146d68f1c(longlong param_1,double *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  undefined8 uVar18;
  double *pdVar19;
  float *pfVar20;
  double *pdVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 local_1d8 [40];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined1 local_188 [16];
  char local_170 [8];
  double adStack_168 [6];
  double local_138 [15];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_1d8;
  lVar1 = param_1 + 0x3f8;
  lVar25 = *(longlong *)(param_1 + 0x5a8);
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    lVar25 = lVar1;
  }
  local_170[0] = '\0';
  local_170[1] = '\0';
  local_170[2] = '\0';
  local_170[3] = '\0';
  pdVar19 = local_138 + 2;
  pfVar20 = (float *)(lVar25 + 0xc);
  lVar25 = 0;
  do {
    fVar3 = pfVar20[2];
    fVar4 = pfVar20[1];
    pdVar19[-2] = (double)*pfVar20;
    pdVar19[-1] = (double)fVar4;
    *pdVar19 = (double)fVar3;
    adStack_168[lVar25] = (double)pfVar20[6];
    lVar25 = lVar25 + 1;
    pdVar19 = pdVar19 + 3;
    pfVar20 = pfVar20 + 0x1b;
  } while (lVar25 != 4);
  local_138[0xe] = param_2[5];
  local_138[0xc] = param_2[3];
  local_138[0xd] = param_2[4];
  adStack_168[4] = param_2[9];
  local_170[4] = 0;
  dVar5 = param_2[6];
  local_1a8 = param_2[7];
  local_1b0 = param_2[8];
  iVar22 = 0;
  lVar25 = 1;
  do {
    iVar17 = (int)lVar25;
    if (adStack_168[iVar22] < adStack_168[lVar25] || adStack_168[iVar22] == adStack_168[lVar25]) {
      iVar17 = iVar22;
    }
    iVar22 = iVar17;
    lVar25 = lVar25 + 1;
  } while (lVar25 != 5);
  lVar25 = (longlong)iVar22;
  local_170[lVar25] = '\x01';
  pdVar21 = local_138 + lVar25 * 3;
  dVar30 = -1.79769313486232e+308;
  uVar23 = 0xffffffff;
  pdVar19 = local_138 + 2;
  uVar27 = 0;
  do {
    if ((local_170[uVar27] == '\0') &&
       (dVar8 = (*pdVar19 - local_138[lVar25 * 3 + 2]) * (*pdVar19 - local_138[lVar25 * 3 + 2]) +
                (pdVar19[-2] - *pdVar21) * (pdVar19[-2] - *pdVar21) +
                (pdVar19[-1] - local_138[lVar25 * 3 + 1]) *
                (pdVar19[-1] - local_138[lVar25 * 3 + 1]), dVar30 < dVar8)) {
      uVar23 = uVar27 & 0xffffffff;
      dVar30 = dVar8;
    }
    uVar27 = uVar27 + 1;
    pdVar19 = pdVar19 + 3;
  } while (uVar27 != 5);
  lVar24 = (longlong)(int)uVar23;
  local_170[lVar24] = '\x01';
  local_188 = ZEXT816(0x3ff0000000000000);
  uVar23 = 0xffffffff;
  pdVar19 = local_138 + 2;
  uVar27 = 0;
  dVar30 = 0.0;
  do {
    if (local_170[uVar27] == '\0') {
      dVar12 = *pdVar19 - local_138[lVar24 * 3 + 2];
      dVar8 = local_138[lVar24 * 3];
      dVar14 = pdVar19[-1] - local_138[lVar24 * 3 + 1];
      dVar13 = pdVar19[-2] - dVar8;
      dVar10 = local_138[lVar24 * 3 + 2] - local_138[lVar25 * 3 + 2];
      dVar9 = local_138[lVar24 * 3 + 1] - local_138[lVar25 * 3 + 1];
      dVar8 = dVar8 - *pdVar21;
      dVar8 = (dVar8 * dVar14 - dVar13 * dVar9) * local_1b0 +
              (dVar9 * dVar12 - dVar10 * dVar14) * dVar5 +
              (dVar10 * dVar13 - dVar12 * dVar8) * local_1a8;
      if (dVar30 < ABS(dVar8)) {
        local_188._0_8_ = -(ulonglong)(0.0 < dVar8) & 0x3ff0000000000000;
        local_188._8_8_ = 0;
        local_188 = local_188 |
                    ZEXT416(~(uint)(-(ulonglong)(0.0 < dVar8) >> 0x20) &
                            (uint)(-(ulonglong)(dVar8 < 0.0) >> 0x20) & 0xbff00000) << 0x20;
        uVar23 = uVar27 & 0xffffffff;
        dVar30 = ABS(dVar8);
      }
    }
    uVar27 = uVar27 + 1;
    pdVar19 = pdVar19 + 3;
  } while (uVar27 != 5);
  if ((int)uVar23 != -1) {
    lVar26 = (longlong)(int)uVar23;
    local_170[lVar26] = '\x01';
    uVar27 = 0xffffffff;
    pdVar19 = local_138 + 2;
    uVar23 = 0;
    dVar30 = 0.0;
    do {
      if (local_170[uVar23] == '\0') {
        dVar8 = *pdVar19;
        dVar31 = dVar8 - local_138[lVar24 * 3 + 2];
        dVar14 = local_138[lVar24 * 3 + 2] - dVar8;
        dVar9 = local_138[lVar24 * 3];
        dVar10 = pdVar19[-2];
        dVar12 = pdVar19[-1];
        dVar15 = dVar12 - local_138[lVar24 * 3 + 1];
        dVar16 = local_138[lVar24 * 3 + 1] - dVar12;
        dVar32 = dVar10 - dVar9;
        dVar9 = dVar9 - dVar10;
        dVar28 = dVar8 - local_138[lVar25 * 3 + 2];
        local_198 = local_138[lVar25 * 3 + 1];
        dVar11 = dVar10 - *pdVar21;
        dVar29 = local_138[lVar26 * 3 + 2] - dVar8;
        local_1a0 = local_138[lVar26 * 3];
        dVar33 = local_138[lVar26 * 3 + 1] - dVar12;
        dVar13 = local_188._0_8_;
        dVar9 = ((dVar11 * dVar16 - dVar9 * (dVar12 - local_198)) * local_1b0 +
                ((dVar12 - local_198) * dVar14 - dVar28 * dVar16) * dVar5 +
                (dVar28 * dVar9 - dVar14 * dVar11) * local_1a8) * dVar13;
        dVar14 = ((dVar32 * dVar33 - (local_1a0 - dVar10) * dVar15) * local_1b0 +
                 (dVar15 * dVar29 - dVar31 * dVar33) * dVar5 +
                 (dVar31 * (local_1a0 - dVar10) - dVar29 * dVar32) * local_1a8) * dVar13;
        if (dVar9 <= dVar14) {
          dVar9 = dVar14;
        }
        dVar14 = local_138[lVar25 * 3 + 2] - dVar8;
        dVar8 = dVar8 - local_138[lVar26 * 3 + 2];
        dVar32 = dVar12 - local_138[lVar26 * 3 + 1];
        dVar11 = *pdVar21 - dVar10;
        dVar13 = (((dVar10 - local_1a0) * (local_198 - dVar12) - dVar11 * dVar32) * local_1b0 +
                 (dVar32 * dVar14 - dVar8 * (local_198 - dVar12)) * dVar5 +
                 (dVar8 * dVar11 - dVar14 * (dVar10 - local_1a0)) * local_1a8) * dVar13;
        if (dVar9 <= dVar13) {
          dVar9 = dVar13;
        }
        local_190 = dVar30;
        if (dVar30 < dVar9) {
          uVar27 = uVar23 & 0xffffffff;
          dVar30 = dVar9;
        }
      }
      uVar23 = uVar23 + 1;
      pdVar19 = pdVar19 + 3;
    } while (uVar23 != 5);
    if ((int)uVar27 != -1) {
      local_170[(int)uVar27] = '\x01';
      lVar25 = 0;
      lVar24 = 0;
      do {
        if (local_170[lVar24] == '\0') {
          dVar5 = param_2[2];
          dVar30 = param_2[1];
          dVar8 = param_2[5];
          dVar9 = param_2[4];
          dVar10 = param_2[3];
          dVar12 = param_2[8];
          dVar13 = param_2[7];
          dVar14 = param_2[6];
          dVar11 = param_2[9];
          uVar7 = *(undefined4 *)(param_2 + 10);
          lVar26 = *(longlong *)(param_1 + 0x5a8);
          if (*(longlong *)(param_1 + 0x5a8) == 0) {
            lVar26 = lVar1;
          }
          uVar6 = *(undefined1 *)((longlong)param_2 + 0x54);
          *(float *)(lVar26 + lVar25) = (float)*param_2;
          *(float *)(lVar26 + 4 + lVar25) = (float)dVar30;
          *(float *)(lVar26 + 8 + lVar25) = (float)dVar5;
          *(float *)(lVar26 + 0xc + lVar25) = (float)dVar10;
          *(float *)(lVar26 + 0x10 + lVar25) = (float)dVar9;
          *(float *)(lVar26 + 0x14 + lVar25) = (float)dVar8;
          *(float *)(lVar26 + 0x18 + lVar25) = (float)dVar14;
          *(float *)(lVar26 + 0x1c + lVar25) = (float)dVar13;
          *(float *)(lVar26 + 0x20 + lVar25) = (float)dVar12;
          *(float *)(lVar26 + 0x24 + lVar25) = (float)dVar11;
          *(undefined4 *)(lVar26 + 0x28 + lVar25) = uVar7;
          *(undefined1 *)(lVar26 + 0x2c + lVar25) = uVar6;
          dVar5 = param_2[2];
          dVar30 = param_2[1];
          lVar26 = *(longlong *)(param_1 + 0x5a8);
          if (*(longlong *)(param_1 + 0x5a8) == 0) {
            lVar26 = lVar1;
          }
          *(float *)(lVar26 + 0x54 + lVar25) = (float)*param_2;
          *(float *)(lVar26 + 0x58 + lVar25) = (float)dVar30;
          *(float *)(lVar26 + 0x5c + lVar25) = (float)dVar5;
          dVar5 = param_2[5];
          dVar30 = param_2[4];
          lVar26 = *(longlong *)(param_1 + 0x5a8);
          if (*(longlong *)(param_1 + 0x5a8) == 0) {
            lVar26 = lVar1;
          }
          *(float *)(lVar26 + 0x60 + lVar25) = (float)param_2[3];
          *(float *)(lVar26 + 100 + lVar25) = (float)dVar30;
          *(float *)(lVar26 + 0x68 + lVar25) = (float)dVar5;
          lVar26 = *(longlong *)(param_1 + 0x5a8);
          if (*(longlong *)(param_1 + 0x5a8) == 0) {
            lVar26 = lVar1;
          }
          pbVar2 = (byte *)(lVar26 + 0x30 + lVar25);
          *pbVar2 = *pbVar2 & 0xfd;
          dVar5 = 1.79769313486232e+308;
          if ((longlong)*(int *)(param_1 + 0x16c) != -1) {
            lVar26 = *(longlong *)(param_1 + 0x5a8);
            if (*(longlong *)(param_1 + 0x5a8) == 0) {
              lVar26 = lVar1;
            }
            dVar5 = (double)*(float *)(lVar26 + 0x24 + (longlong)*(int *)(param_1 + 0x16c) * 0x6c);
          }
          if (param_2[9] <= dVar5 && dVar5 != param_2[9]) {
            *(int *)(param_1 + 0x16c) = (int)lVar24;
          }
        }
        lVar24 = lVar24 + 1;
        lVar25 = lVar25 + 0x6c;
      } while (lVar25 != 0x1b0);
      uVar18 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      goto LAB_146d6966b;
    }
  }
  uVar18 = 0;
LAB_146d6966b:
  if ((local_c0 ^ (ulonglong)local_1d8) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d696f0 FUN_146d696f0 body=41 status=ok
// SIG undefined FUN_146d696f0(void)

void FUN_146d696f0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1400d33ac();
  return;
}



// FUNCTION 146d6971a FUN_146d6971a body=170 status=ok
// SIG undefined FUN_146d6971a(void)

void FUN_146d6971a(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144aa4572(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60));
  FUN_141409594(*(undefined8 *)(param_1 + 0x10),&local_50);
  if ((longlong)local_48 != 0) {
    lVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(local_50 + lVar3);
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_140c29ed8((longlong *)(param_1 + 0x18),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
      lVar3 = lVar3 + 8;
    } while ((longlong)local_48 * 8 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d697de FUN_146d697de body=41 status=ok
// SIG undefined FUN_146d697de(void)

void FUN_146d697de(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = &PTR_FUN_149f4f530;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 146d69808 FUN_146d69808 body=72 status=ok
// SIG undefined FUN_146d69808(void)

void FUN_146d69808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f4f530;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d69850 FUN_146d69850 body=113 status=ok
// SIG undefined FUN_146d69850(void)

void FUN_146d69850(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x18;
  if (*(int *)(param_1 + 0x24) < param_2) {
    iVar2 = param_2 * 5 + 3;
    if (-1 < param_2 * 5) {
      iVar2 = param_2 * 5;
    }
    FUN_146d698c2(lVar1,iVar2 >> 2);
  }
  FUN_146d698c2(lVar1,param_2);
  FUN_146d696f0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x24));
  FUN_14172833e(param_1 + 0x38,*(undefined4 *)(param_1 + 0x24));
  FUN_146d698ec(lVar1,param_2);
  FUN_144aa2a62(param_1 + 0x38,param_2,1);
  return;
}



// FUNCTION 146d698c2 FUN_146d698c2 body=41 status=ok
// SIG undefined FUN_146d698c2(void)

void FUN_146d698c2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d72abc();
  return;
}



// FUNCTION 146d698ec FUN_146d698ec body=71 status=ok
// SIG undefined FUN_146d698ec(void)

void FUN_146d698ec(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d72b30();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146d72bc8();
      return;
    }
  }
  return;
}



// FUNCTION 146d69934 FUN_146d69934 body=205 status=ok
// SIG undefined FUN_146d69934(void)

void FUN_146d69934(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146d69850(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60));
  FUN_141409594(*(undefined8 *)(param_1 + 0x10),&local_58);
  if ((longlong)local_50 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(local_58 + lVar5);
      iVar1 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
        FUN_140c29ed8(param_1 + 0x28,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar2;
      lVar3 = *(longlong *)(param_1 + 0x18);
      lVar4 = (longlong)iVar1 * 0x338;
      *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
      *(undefined8 *)(lVar3 + 0x28 + lVar4) = 0;
      *(undefined4 *)(lVar3 + 0x40 + lVar4) = 0;
      lVar5 = lVar5 + 8;
    } while ((longlong)local_50 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d69a02 FUN_146d69a02 body=140 status=ok
// SIG undefined FUN_146d69a02(void)

void FUN_146d69a02(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      uVar3 = **(undefined8 **)(lVar2 + lVar7);
      iVar1 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
        FUN_140c29ed8(param_1 + 0x28,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar3;
      lVar4 = *(longlong *)(param_1 + 0x18);
      lVar6 = (longlong)iVar1 * 0x338;
      *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
      *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
      *(undefined4 *)(lVar4 + 0x40 + lVar6) = 0;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
  }
  return;
}



// FUNCTION 146d69a8e FUN_146d69a8e body=124 status=ok
// SIG undefined FUN_146d69a8e(void)

void FUN_146d69a8e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar1) {
    lVar7 = 5;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8);
      uVar4 = FUN_1448f7274(param_2,*(undefined8 *)(lVar3 + 0xe0));
      uVar5 = FUN_1448f7274(param_2,*(undefined8 *)(lVar3 + 0xe8));
      *(undefined8 *)(lVar2 + -0x18 + lVar7 * 8) = uVar4;
      *(undefined8 *)(lVar2 + lVar7 * 8) = uVar5;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x67;
    } while (iVar1 != lVar6);
  }
  return;
}



// FUNCTION 146d69b16 FUN_146d69b16 body=3693 status=ok
// SIG undefined FUN_146d69b16(void)

void FUN_146d69b16(longlong param_1,double param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [12];
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  byte bVar26;
  longlong lVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  double dVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float local_270;
  float local_26c;
  float local_268;
  float local_238;
  undefined1 auStack_234 [12];
  double dStack_210;
  double dStack_1c0;
  double local_168;
  double dStack_160;
  double dVar5;
  
  lVar27 = 0x40;
  do {
    lVar27 = lVar27 + 0x338;
  } while (lVar27 != 0xd20);
  if (param_3 < param_4) {
    fVar29 = (float)param_2;
    lVar27 = (longlong)param_3;
    bVar26 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar27 * 8);
      fVar30 = *(float *)(lVar7 + 0x33c);
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xfc) < 1) {
        fVar35 = 0.0;
        fVar50 = fVar30;
        fVar42 = 0.0;
      }
      else {
        fVar50 = 0.0;
        fVar35 = fVar30;
        if ((*(byte *)(lVar7 + 0x374) & 0xc0) != 0) {
          fVar35 = 0.0;
          fVar50 = fVar30;
        }
        fVar42 = *(float *)(lVar7 + 0x340);
        if (*(float *)(lVar7 + 0x340) <= fVar30) {
          fVar42 = fVar30;
        }
      }
      pfVar25 = (float *)(lVar27 * 0x338 + *(longlong *)(param_1 + 0x18));
      lVar8 = *(longlong *)(param_1 + 0x38);
      *pfVar25 = fVar42;
      pfVar25[1] = fVar35;
      pfVar25[2] = fVar50;
      pfVar25[3] = *(float *)(lVar7 + 0x370);
      pfVar25[6] = *(float *)(lVar7 + 0x34c);
      pfVar25[7] = *(float *)(lVar7 + 0x354);
      pfVar25[8] = 1.0;
      pfVar25[0xc] = *(float *)(lVar7 + 0x350);
      pfVar25[0xd] = *(float *)(lVar7 + 0x358);
      pfVar25[0xe] = 1.0;
      bVar28 = (*(ushort *)(lVar7 + 0x374) & 0xc) != 4;
      *(byte *)(lVar8 + lVar27) = bVar28;
      iVar6 = *(int *)(lVar7 + 0x5b0);
      if (0 < (longlong)iVar6) {
        lVar9 = *(longlong *)(pfVar25 + 4);
        lVar10 = *(longlong *)(pfVar25 + 10);
        pfVar1 = pfVar25 + 0x10;
        lVar24 = 0;
        do {
          lVar22 = *(longlong *)(lVar7 + 0x5a8);
          if (*(longlong *)(lVar7 + 0x5a8) == 0) {
            lVar22 = lVar7 + 0x3f8;
          }
          if ((*(byte *)(lVar22 + 0x30 + lVar24) & 1) == 0) {
            lVar23 = (longlong)(int)*pfVar1;
            *pfVar1 = (float)((int)*pfVar1 + 1);
            lVar22 = *(longlong *)(lVar7 + 0x5a8);
            if (*(longlong *)(lVar7 + 0x5a8) == 0) {
              lVar22 = lVar7 + 0x3f8;
            }
            dVar11 = SUB168(*(undefined1 (*) [16])(lVar7 + 0x1e0),0);
            dVar4 = *(double *)(lVar7 + 0x1e8);
            dVar5 = *(double *)(lVar7 + 0x1e8);
            dVar17 = *(double *)(lVar7 + 0x1d0);
            dVar18 = *(double *)(lVar7 + 0x1d8);
            dVar12 = (double)*(float *)(lVar22 + 0x20 + lVar24);
            dVar32 = (double)*(float *)(lVar22 + 0x1c + lVar24);
            dVar39 = (double)*(float *)(lVar22 + 0x18 + lVar24);
            dVar33 = dVar32 * dVar17 - dVar18 * dVar39;
            dVar34 = dVar12 * dVar18 - dVar11 * dVar32;
            dVar43 = dVar39 * dVar11 - dVar12 * dVar17;
            dVar34 = dVar34 + dVar34;
            dVar43 = dVar43 + dVar43;
            dVar33 = dVar33 + dVar33;
            auVar13._8_4_ = SUB84(dVar5,0);
            auVar13._0_8_ = dVar4;
            auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            fVar50 = (float)(dVar33 * dVar4 + dVar12 + (dVar43 * dVar17 - dVar34 * dVar18));
            fVar42 = (float)((dVar33 * dVar18 - dVar43 * dVar11) + dVar4 * dVar34 + dVar39);
            fVar55 = (float)((dVar11 * dVar34 - dVar17 * dVar33) + dVar5 * dVar43 + dVar32);
            local_268 = fVar55 * 0.0 - fVar42;
            fVar30 = fVar42 * 0.0;
            local_270 = fVar50 * -0.0 + fVar30;
            local_26c = fVar55 * -0.0 + fVar50;
            fVar35 = local_268 * local_268 + local_26c * local_26c + local_270 * local_270;
            if (fVar35 <= 0.0001) {
              local_268 = fVar55 - fVar30;
              fVar30 = fVar30 - fVar50;
              fVar35 = fVar50 * 0.0 + fVar55 * -0.0;
              local_26c = 1.0 / SQRT(local_268 * local_268 + fVar35 * fVar35 + fVar30 * fVar30);
              local_268 = local_268 * local_26c;
              local_270 = fVar30 * local_26c;
              local_26c = local_26c * fVar35;
            }
            else {
              fVar30 = 1.0 / SQRT(fVar35);
              local_26c = local_26c * fVar30;
              local_270 = local_270 * fVar30;
              local_268 = local_268 * fVar30;
            }
            dVar39 = (double)*(float *)(lVar22 + 8 + lVar24);
            dVar43 = (double)*(float *)(lVar22 + 4 + lVar24);
            dVar34 = (double)*(float *)(lVar22 + lVar24);
            dVar19 = *(double *)(lVar7 + 0x170);
            dVar20 = *(double *)*(undefined1 (*) [12])(lVar7 + 0x178);
            auVar21 = *(undefined1 (*) [12])(lVar7 + 0x178);
            dVar32 = SUB168(*(undefined1 (*) [16])(lVar7 + 0x180),0);
            dVar5 = *(double *)(lVar7 + 0x188);
            dVar12 = *(double *)(lVar7 + 0x188);
            dVar33 = dVar43 * dVar19 - dVar20 * dVar34;
            dVar47 = dVar39 * dVar20 - dVar32 * dVar43;
            dVar53 = dVar34 * dVar32 - dVar39 * dVar19;
            dVar47 = dVar47 + dVar47;
            dVar53 = dVar53 + dVar53;
            dVar33 = dVar33 + dVar33;
            auVar14._12_4_ = SUB164(*(undefined1 (*) [16])(lVar7 + 0x180),4);
            auVar14._0_12_ = auVar21;
            dVar34 = (dVar33 * dVar20 - dVar53 * dVar32) + dVar5 * dVar47 + dVar34 +
                     *(double *)(lVar7 + 400);
            dVar43 = (dVar32 * dVar47 - dVar19 * dVar33) + dVar12 * dVar53 + dVar43 +
                     *(double *)(lVar7 + 0x198);
            dVar39 = dVar33 * dVar5 + dVar39 + (dVar53 * dVar19 - dVar47 * dVar20) +
                     *(double *)(lVar7 + 0x1a0);
            dVar47 = (double)*(float *)(lVar22 + 0x14 + lVar24);
            dVar44 = (double)*(float *)(lVar22 + 0x10 + lVar24);
            dVar53 = (double)*(float *)(lVar22 + 0xc + lVar24);
            dVar33 = dVar44 * dVar17 - dVar18 * dVar53;
            dVar48 = dVar47 * dVar18 - dVar11 * dVar44;
            dVar54 = dVar53 * dVar11 - dVar47 * dVar17;
            dVar48 = dVar48 + dVar48;
            dVar54 = dVar54 + dVar54;
            dVar33 = dVar33 + dVar33;
            dStack_210 = auVar13._8_8_;
            dVar53 = (dVar33 * dVar18 - dVar54 * dVar11) + dVar4 * dVar48 + dVar53 +
                     *(double *)(lVar7 + 0x1f0);
            dVar44 = (dVar11 * dVar48 - dVar17 * dVar33) + dStack_210 * dVar54 + dVar44 +
                     *(double *)(lVar7 + 0x1f8);
            dVar33 = dVar33 * dVar4 + dVar47 + (dVar54 * dVar17 - dVar48 * dVar18) +
                     *(double *)(lVar7 + 0x200);
            auVar16._8_4_ = SUB84(dVar43,0);
            auVar16._0_8_ = dVar34;
            auVar16._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
            dVar47 = (dVar39 + dVar33) * 0.5;
            dVar54 = (dVar43 + dVar44) * 0.5;
            dVar48 = (dVar34 + dVar53) * 0.5;
            fVar52 = (float)(dVar47 - *(double *)(lVar9 + 0x120));
            fVar56 = (float)(dVar54 - *(double *)(lVar9 + 0x118));
            fVar64 = (float)(dVar48 - *(double *)(lVar9 + 0x110));
            fVar35 = (float)(dVar47 - *(double *)(lVar10 + 0x120));
            fVar36 = (float)(dVar54 - *(double *)(lVar10 + 0x118));
            fVar37 = (float)(dVar48 - *(double *)(lVar10 + 0x110));
            bVar28 = *(byte *)(lVar22 + 0x30 + lVar24);
            fVar30 = *(float *)(lVar7 + 0x344);
            fVar63 = 0.0;
            if (0.0 < fVar30) {
LAB_146d6a77a:
              auVar15._8_4_ = SUB84(dVar12,0);
              auVar15._0_8_ = dVar5;
              auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              auStack_234 = auVar15._4_12_;
              fVar63 = ((*(float *)(lVar9 + 0x30) * fVar56 - fVar64 * *(float *)(lVar9 + 0x34)) +
                       *(float *)(lVar9 + 0x28)) -
                       ((*(float *)(lVar10 + 0x30) * fVar36 - fVar37 * *(float *)(lVar10 + 0x34)) +
                       *(float *)(lVar10 + 0x28));
              local_238 = ((*(float *)(lVar9 + 0x38) * fVar64 - fVar52 * *(float *)(lVar9 + 0x30)) +
                          *(float *)(lVar9 + 0x24)) -
                          ((*(float *)(lVar10 + 0x38) * fVar37 - fVar35 * *(float *)(lVar10 + 0x30))
                          + *(float *)(lVar10 + 0x24));
              fVar51 = ((*(float *)(lVar9 + 0x34) * fVar52 - *(float *)(lVar9 + 0x38) * fVar56) +
                       *(float *)(lVar9 + 0x20)) -
                       ((*(float *)(lVar10 + 0x34) * fVar35 - *(float *)(lVar10 + 0x38) * fVar36) +
                       *(float *)(lVar10 + 0x20));
              if ((bVar28 & 8) != 0) goto LAB_146d6a2c5;
              fVar31 = fVar63 * fVar29;
              fVar57 = local_238 * fVar29;
              fVar38 = fVar51 * fVar29;
            }
            else {
              local_238 = 0.0;
              fVar51 = 0.0;
              if ((bVar28 & 8) == 0) goto LAB_146d6a77a;
LAB_146d6a2c5:
              dVar45 = (double)*(float *)(lVar22 + 0x44 + lVar24);
              dVar58 = (double)*(float *)(lVar22 + 0x40 + lVar24);
              dVar48 = (double)*(float *)(lVar22 + 0x3c + lVar24);
              local_168 = auVar21._0_8_;
              dStack_160 = auVar14._8_8_;
              dVar59 = dVar58 * dVar19 - local_168 * dVar48;
              dVar61 = dVar45 * dVar20 - dStack_160 * dVar58;
              dVar40 = dVar48 * dVar32 - dVar45 * dVar19;
              dVar61 = dVar61 + dVar61;
              dVar40 = dVar40 + dVar40;
              dVar59 = dVar59 + dVar59;
              dVar47 = (double)*(float *)(lVar22 + 0x50 + lVar24);
              dVar46 = (double)*(float *)(lVar22 + 0x4c + lVar24);
              dVar41 = (double)*(float *)(lVar22 + 0x48 + lVar24);
              dVar54 = dVar46 * dVar17 - dVar18 * dVar41;
              dVar49 = dVar47 * dVar18 - dVar11 * dVar46;
              dVar60 = dVar41 * dVar11 - dVar47 * dVar17;
              dVar49 = dVar49 + dVar49;
              dVar60 = dVar60 + dVar60;
              dVar54 = dVar54 + dVar54;
              dStack_1c0 = auVar16._8_8_;
              fVar31 = (float)((*(double *)(lVar7 + 0x1a0) +
                               dVar59 * dVar5 + dVar45 + (dVar40 * dVar19 - dVar61 * local_168)) -
                              dVar39) -
                       (float)((*(double *)(lVar7 + 0x200) +
                               dVar54 * dVar4 + dVar47 + (dVar60 * dVar17 - dVar49 * dVar18)) -
                              dVar33);
              fVar57 = (float)((*(double *)(lVar7 + 0x198) +
                               (dVar32 * dVar61 - dVar19 * dVar59) + dVar12 * dVar40 + dVar58) -
                              dStack_1c0) -
                       (float)((*(double *)(lVar7 + 0x1f8) +
                               (dVar11 * dVar49 - dVar17 * dVar54) + dStack_210 * dVar60 + dVar46) -
                              dVar44);
              fVar38 = (float)((*(double *)(lVar7 + 400) +
                               (dVar59 * dVar20 - dVar40 * dStack_160) + dVar5 * dVar61 + dVar48) -
                              dVar34) -
                       (float)((*(double *)(lVar7 + 0x1f0) +
                               (dVar54 * dVar18 - dVar60 * dVar11) + dVar4 * dVar49 + dVar41) -
                              dVar53);
            }
            fVar62 = 0.0;
            fVar3 = *(float *)(lVar22 + 0x34 + lVar24);
            if (0.0 < fVar30) {
              fVar63 = fVar63 * fVar50 + fVar51 * fVar42 + local_238 * fVar55;
              fVar62 = (float)(-(uint)(fVar63 < -*(float *)(lVar7 + 0x348) * fVar29) &
                              (uint)(-fVar30 * fVar63));
            }
            fVar51 = fVar42 * local_270 - local_26c * fVar55;
            fVar30 = fVar55 * local_268 - local_270 * fVar50;
            fVar63 = fVar50 * local_26c + -fVar42 * local_268;
            pfVar25[lVar23 * 0x2f + 0x11] = fVar64;
            pfVar25[lVar23 * 0x2f + 0x12] = fVar56;
            pfVar25[lVar23 * 0x2f + 0x13] = fVar52;
            pfVar25[lVar23 * 0x2f + 0x14] = fVar37;
            pfVar25[lVar23 * 0x2f + 0x15] = fVar36;
            pfVar25[lVar23 * 0x2f + 0x16] = fVar35;
            fVar38 = fVar38 + (float)(dVar34 - dVar53);
            pfVar25[lVar23 * 0x2f + 0x17] = fVar42;
            pfVar25[lVar23 * 0x2f + 0x18] = fVar55;
            pfVar25[lVar23 * 0x2f + 0x19] = fVar50;
            pfVar25[lVar23 * 0x2f + 0x1a] = local_26c;
            pfVar25[lVar23 * 0x2f + 0x1b] = local_270;
            pfVar25[lVar23 * 0x2f + 0x1c] = local_268;
            pfVar25[lVar23 * 0x2f + 0x1d] = fVar30;
            fVar57 = fVar57 + (float)(dVar43 - dVar44);
            pfVar25[lVar23 * 0x2f + 0x1e] = fVar63;
            fVar31 = fVar31 + (float)(dVar39 - dVar33);
            pfVar25[lVar23 * 0x2f + 0x1f] = fVar51;
            pfVar25[lVar23 * 0x2f + 0x20] =
                 ((float)(dVar39 - dVar33) * fVar50 +
                 (float)(dVar34 - dVar53) * fVar42 + (float)(dVar43 - dVar44) * fVar55) - fVar3;
            pfVar25[lVar23 * 0x2f + 0x21] =
                 fVar31 * local_268 + fVar38 * local_26c + fVar57 * local_270;
            pfVar25[lVar23 * 0x2f + 0x22] = fVar31 * fVar51 + fVar38 * fVar30 + fVar63 * fVar57;
            pfVar25[lVar23 * 0x2f + 0x23] = fVar62;
            pfVar2 = pfVar25 + lVar23 * 0x2f + 0x3c;
            pfVar2[0] = 0.0;
            pfVar2[1] = 0.0;
            pfVar2[2] = 0.0;
            pfVar2[3] = 0.0;
            pfVar2 = pfVar25 + lVar23 * 0x2f + 0x39;
            pfVar2[0] = 0.0;
            pfVar2[1] = 0.0;
            pfVar2[2] = 0.0;
            pfVar2[3] = 0.0;
            FUN_146d7203c(pfVar1,lVar23,pfVar25 + 4,pfVar25 + 10);
          }
          lVar24 = lVar24 + 0x6c;
        } while ((longlong)iVar6 * 0x6c - lVar24 != 0);
        bVar28 = *(byte *)(lVar8 + lVar27);
      }
      bVar26 = bVar26 | bVar28;
      lVar27 = lVar27 + 1;
    } while ((int)lVar27 != param_4);
    if ((bVar26 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
  }
  return;
}



// FUNCTION 146d6a990 FUN_146d6a990 body=1806 status=ok
// SIG undefined FUN_146d6a990(void)

void FUN_146d6a990(longlong param_1,double param_2,int param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
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
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 *local_158;
  
  if (param_3 < param_4) {
    fVar37 = (float)param_2;
    lVar21 = (longlong)param_3;
    do {
      lVar25 = lVar21 * 0x338 + *(longlong *)(param_1 + 0x18);
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar21 * 8);
      lVar1 = lVar16 + 0x378;
      FUN_140210db2(lVar1,*(undefined4 *)(lVar16 + 0x5b0));
      FUN_140210ddc(lVar16 + 0x5b8,*(undefined4 *)(lVar16 + 0x5b0));
      *(undefined4 *)(lVar16 + 0x638) = 0;
      uVar19 = (ulonglong)*(uint *)(lVar16 + 0x5b0);
      if (0 < (int)*(uint *)(lVar16 + 0x5b0)) {
        lVar27 = 0;
        lVar28 = 0x18;
        lVar26 = 0;
        iVar24 = 0;
        do {
          lVar29 = *(longlong *)(lVar16 + 0x5a8);
          if (*(longlong *)(lVar16 + 0x5a8) == 0) {
            lVar29 = lVar16 + 0x3f8;
          }
          if ((*(byte *)(lVar29 + 0x30 + lVar27) & 1) == 0) {
            lVar22 = (longlong)iVar24 * 0xbc;
            fVar31 = *(float *)(lVar25 + 0xe4 + lVar22);
            fVar33 = *(float *)(lVar25 + 0x5c + lVar22);
            fVar35 = *(float *)(lVar25 + 0x60 + lVar22);
            fVar2 = *(float *)(lVar25 + 100 + lVar22);
            fVar32 = *(float *)(lVar25 + 0xe8 + lVar22);
            fVar3 = *(float *)(lVar25 + 0x68 + lVar22);
            fVar4 = *(float *)(lVar25 + 0x6c + lVar22);
            fVar5 = *(float *)(lVar25 + 0x70 + lVar22);
            fVar6 = *(float *)(lVar25 + 0xec + lVar22);
            fVar7 = *(float *)(lVar25 + 0x74 + lVar22);
            fVar34 = fVar6 * fVar7 + fVar32 * fVar3 + fVar31 * fVar33;
            fVar8 = *(float *)(lVar25 + 0x78 + lVar22);
            fVar36 = fVar6 * fVar8 + fVar32 * fVar4 + fVar31 * fVar35;
            fVar9 = *(float *)(lVar25 + 0x7c + lVar22);
            fVar32 = fVar6 * fVar9 + fVar32 * fVar5 + fVar31 * fVar2;
            fVar6 = *(float *)(lVar25 + 0xf0 + lVar22);
            fVar10 = *(float *)(lVar25 + 0xf4 + lVar22);
            fVar11 = *(float *)(lVar25 + 0xf8 + lVar22);
            fVar31 = fVar7 * fVar11 + fVar3 * fVar10 + fVar33 * fVar6;
            fVar33 = fVar8 * fVar11 + fVar4 * fVar10 + fVar35 * fVar6;
            fVar35 = fVar9 * fVar11 + fVar5 * fVar10 + fVar2 * fVar6;
            fVar2 = *(float *)(lVar25 + 0xfc + lVar22);
            iVar24 = iVar24 + 1;
            local_158 = (undefined8 *)(lVar29 + lVar27);
            lVar22 = *(longlong *)(lVar16 + 0x628);
            if (0.9999 <= fVar2) {
              iVar15 = *(int *)(lVar16 + 0x3f0);
              *(uint *)(lVar16 + 0x3f0) = iVar15 + 1U;
              if (*(uint *)(lVar16 + 0x3f4) < iVar15 + 1U) {
                FUN_146d71fb0(lVar1,iVar15);
              }
              lVar29 = lVar29 + lVar27;
              lVar23 = *(longlong *)(lVar16 + 1000);
              if (*(longlong *)(lVar16 + 1000) == 0) {
                lVar23 = lVar1;
              }
              lVar17 = (longlong)iVar15 * 0x1c;
              lVar18 = lVar23 + lVar17;
              uVar30 = *(undefined4 *)(lVar29 + 0x38);
              *(undefined4 *)(lVar23 + 8 + lVar17) = *(undefined4 *)(lVar29 + 0x44);
              *(undefined8 *)(lVar23 + lVar17) = *(undefined8 *)(lVar29 + 0x3c);
              *(undefined8 *)(lVar23 + 0xc + lVar17) = *(undefined8 *)(lVar29 + 0x48);
              *(undefined4 *)(lVar23 + 0x14 + lVar17) = *(undefined4 *)(lVar29 + 0x50);
              bVar20 = 3;
            }
            else {
              if (fVar2 < 0.0001) goto LAB_146d6adc6;
              fVar3 = *(float *)(lVar29 + 0x50 + lVar27);
              fVar4 = *(float *)(lVar29 + 0x14 + lVar27);
              fVar5 = *(float *)(lVar29 + 0x4c + lVar27);
              fVar6 = *(float *)(lVar29 + 0x10 + lVar27);
              fVar7 = *(float *)(lVar29 + 0x48 + lVar27);
              fVar8 = *(float *)(lVar29 + 0xc + lVar27);
              fVar9 = *(float *)(lVar29 + 0x44 + lVar27);
              fVar10 = *(float *)(lVar29 + 8 + lVar27);
              fVar11 = *(float *)(lVar29 + 0x40 + lVar27);
              fVar12 = *(float *)(lVar29 + lVar27);
              fVar13 = *(float *)(lVar29 + 4 + lVar27);
              fVar14 = *(float *)(lVar29 + 0x3c + lVar27);
              iVar15 = *(int *)(lVar16 + 0x3f0);
              *(uint *)(lVar16 + 0x3f0) = iVar15 + 1U;
              if (*(uint *)(lVar16 + 0x3f4) < iVar15 + 1U) {
                FUN_146d71fb0(lVar1,iVar15);
              }
              lVar23 = *(longlong *)(lVar16 + 1000);
              if (*(longlong *)(lVar16 + 1000) == 0) {
                lVar23 = lVar1;
              }
              lVar17 = (longlong)iVar15 * 0x1c;
              lVar18 = lVar23 + lVar17;
              uVar30 = *(undefined4 *)(lVar29 + 0x38 + lVar27);
              *(float *)(lVar23 + lVar17) = (fVar14 - fVar12) * fVar2 + fVar12;
              *(float *)(lVar23 + 4 + lVar17) = (fVar11 - fVar13) * fVar2 + fVar13;
              *(float *)(lVar23 + 8 + lVar17) = (fVar9 - fVar10) * fVar2 + fVar10;
              *(float *)(lVar23 + 0xc + lVar17) = (fVar7 - fVar8) * fVar2 + fVar8;
              *(float *)(lVar23 + 0x10 + lVar17) = (fVar5 - fVar6) * fVar2 + fVar6;
              *(float *)(lVar23 + 0x14 + lVar17) = (fVar3 - fVar4) * fVar2 + fVar4;
              bVar20 = 1;
            }
LAB_146d6aebe:
            *(undefined4 *)(lVar18 + 0x18) = uVar30;
          }
          else {
            local_158 = (undefined8 *)(lVar26 * 0x6c + lVar29);
            lVar22 = *(longlong *)(lVar16 + 0x628);
            fVar31 = 0.0;
            fVar33 = 0.0;
            fVar35 = 0.0;
            fVar34 = 0.0;
            fVar36 = 0.0;
            fVar32 = 0.0;
LAB_146d6adc6:
            bVar20 = 1;
            if ((int)uVar19 < 8) {
              iVar15 = *(int *)(lVar16 + 0x3f0);
              *(uint *)(lVar16 + 0x3f0) = iVar15 + 1U;
              if (*(uint *)(lVar16 + 0x3f4) < iVar15 + 1U) {
                FUN_146d71fb0(lVar1,iVar15);
              }
              lVar29 = lVar29 + lVar27;
              lVar23 = *(longlong *)(lVar16 + 1000);
              if (*(longlong *)(lVar16 + 1000) == 0) {
                lVar23 = lVar1;
              }
              lVar17 = (longlong)iVar15 * 0x1c;
              lVar18 = lVar23 + lVar17;
              uVar30 = *(undefined4 *)(lVar29 + 0x38);
              *(undefined4 *)(lVar23 + 8 + lVar17) = *(undefined4 *)(local_158 + 1);
              *(undefined8 *)(lVar23 + lVar17) = *local_158;
              *(undefined8 *)(lVar23 + 0xc + lVar17) = *(undefined8 *)(lVar29 + 0xc);
              *(undefined4 *)(lVar23 + 0x14 + lVar17) = *(undefined4 *)(lVar29 + 0x14);
              bVar20 = 1;
              goto LAB_146d6aebe;
            }
          }
          if (lVar22 == 0) {
            lVar22 = lVar16 + 0x5b8;
          }
          *(float *)(lVar16 + 0x120) = fVar34 / fVar37 + fVar31 + *(float *)(lVar16 + 0x120);
          *(float *)(lVar16 + 0x124) = fVar36 / fVar37 + fVar33 + *(float *)(lVar16 + 0x124);
          *(float *)(lVar16 + 0x128) = fVar32 / fVar37 + fVar35 + *(float *)(lVar16 + 0x128);
          *(float *)(lVar22 + -0x18 + lVar28) = fVar34;
          *(float *)(lVar22 + -0x14 + lVar28) = fVar36;
          *(float *)(lVar22 + -0x10 + lVar28) = fVar32;
          *(float *)(lVar22 + -0xc + lVar28) = fVar31;
          *(float *)(lVar22 + -8 + lVar28) = fVar33;
          *(float *)(lVar22 + -4 + lVar28) = fVar35;
          *(byte *)(lVar22 + lVar28) = *(byte *)(lVar22 + lVar28) & 0xfc | bVar20;
          fVar31 = *(float *)(lVar16 + 0x638);
          if (*(float *)(local_158 + 7) <= *(float *)(lVar16 + 0x638)) {
            fVar31 = *(float *)(local_158 + 7);
          }
          *(float *)(lVar16 + 0x638) = fVar31;
          lVar26 = lVar26 + 1;
          uVar19 = (ulonglong)*(int *)(lVar16 + 0x5b0);
          lVar28 = lVar28 + 0x1c;
          lVar27 = lVar27 + 0x6c;
        } while (lVar26 < (longlong)uVar19);
      }
      *(undefined8 *)(lVar25 + 0x10) = 0;
      *(undefined8 *)(lVar25 + 0x28) = 0;
      *(undefined4 *)(lVar25 + 0x40) = 0;
      lVar21 = lVar21 + 1;
    } while ((int)lVar21 != param_4);
  }
  return;
}



// FUNCTION 146d6b09e FUN_146d6b09e body=36 status=ok
// SIG undefined FUN_146d6b09e(void)

void FUN_146d6b09e(void)

{
  FUN_1429a525c();
  return;
}



// FUNCTION 146d6b0c2 FUN_146d6b0c2 body=36 status=ok
// SIG undefined FUN_146d6b0c2(void)

void FUN_146d6b0c2(void)

{
  FUN_1429a539c();
  return;
}



// FUNCTION 146d6b0e8 FUN_146d6b0e8 body=122 status=ok
// SIG undefined FUN_146d6b0e8(void)

void FUN_146d6b0e8(longlong param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  
  if (param_3 - *(int *)(param_5 + 0x18) == param_2) {
    lVar1 = 0;
    do {
      FUN_146d6fe9a(*(longlong *)(param_1 + 0x18) + lVar1,DAT_14c993160);
      lVar1 = lVar1 + 0x338;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    do {
      FUN_146d6fe9a(*(longlong *)(param_1 + 0x18) + lVar1,0x3f800000);
      lVar1 = lVar1 + 0x338;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 146d6b162 FUN_146d6b162 body=4231 status=ok
// SIG undefined FUN_146d6b162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d6b162(longlong param_1,double param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  longlong lVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined4 uVar47;
  uint uVar48;
  undefined1 auStack_428 [47];
  char local_3f9;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  double local_3d8;
  int local_3cc;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  uint local_3b8;
  undefined4 uStack_3b4;
  double dStack_3b0;
  float local_3a8;
  undefined1 auStack_3a4 [12];
  undefined1 local_398 [16];
  double local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  double local_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [96];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_3f8 = (float)param_2;
  local_3f9 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x139);
  local_388 = (double)local_3f8;
  lVar16 = 0;
  local_3cc = param_3;
  local_380 = param_1;
  cVar12 = local_3f9;
  do {
    if ((cVar12 != '\0') || (*(char *)(*(longlong *)(param_1 + 0x38) + lVar16) == '\x01')) {
      lVar14 = lVar16 * 0x338;
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar2 = lVar5 + lVar14;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar16 * 8);
      lVar11 = *(longlong *)(lVar5 + 0x10 + lVar14);
      lVar15 = *(longlong *)(lVar5 + 0x28 + lVar14);
      FUN_14013713e(lVar11,&local_158);
      dVar44 = *(double *)(lVar11 + 0x80);
      dVar39 = *(double *)(lVar11 + 0x88);
      dVar37 = *(double *)(lVar11 + 0x90) * -1.0;
      dVar42 = *(double *)(lVar11 + 0x98) * 1.0;
      dVar23 = dVar37 * dStack_140;
      dVar25 = dVar42 * dStack_140;
      dVar34 = local_158 * dVar42;
      dVar35 = local_158 * dVar37;
      dVar27 = local_158 * dVar39;
      dVar31 = local_158 * dVar44;
      dVar21 = dStack_140 * dVar44;
      dVar22 = dStack_140 * dVar39;
      dVar38 = dVar37 * dStack_150;
      dVar43 = dVar42 * dStack_150;
      dVar7 = dVar44 * dStack_150;
      dVar28 = dVar39 * dStack_150;
      dVar39 = dVar39 * local_148;
      dVar44 = dVar44 * local_148;
      dVar42 = dVar42 * local_148;
      dVar37 = dVar37 * local_148;
      FUN_146d6d822(lVar11,local_1b8);
      auVar8 = _DAT_149934d80;
      uStack_130 = local_1b8._8_4_;
      uStack_12c = local_1b8._12_4_;
      local_138 = local_1b8._0_4_;
      uStack_134 = local_1b8._4_4_;
      local_128 = local_1a8._0_8_;
      uStack_120 = 0;
      local_118 = _DAT_149934d80;
      local_108 = 0x3ff0000000000000;
      uStack_100 = 0;
      local_158 = (dVar38 + (dVar34 * 1.0 - dVar21)) - dVar39 * -1.0;
      dStack_150 = (dVar43 + (dVar35 * -1.0 - dVar22)) - dVar44 * 1.0;
      local_148 = dVar42 * 1.0 + dVar7 + (dVar23 - dVar27 * 1.0);
      dStack_140 = dVar37 * -1.0 + dVar28 + (dVar25 - dVar31 * -1.0);
      FUN_14013713e(lVar15,local_1b8);
      dVar7 = *(double *)(lVar15 + 0x80);
      dVar28 = *(double *)(lVar15 + 0x88);
      dVar39 = *(double *)(lVar15 + 0x90) * -1.0;
      dVar44 = *(double *)(lVar15 + 0x98) * 1.0;
      auVar41._0_8_ =
           (dVar39 * (double)local_1b8._8_8_ +
           ((double)local_1b8._0_8_ * dVar44 * 1.0 - (double)local_1a8._8_8_ * dVar7)) -
           dVar28 * (double)local_1a8._0_8_ * -1.0;
      auVar41._8_8_ =
           (dVar44 * (double)local_1b8._8_8_ +
           ((double)local_1b8._0_8_ * dVar39 * -1.0 - (double)local_1a8._8_8_ * dVar28)) -
           dVar7 * (double)local_1a8._0_8_ * 1.0;
      auVar46._0_8_ =
           dVar44 * (double)local_1a8._0_8_ * 1.0 +
           dVar7 * (double)local_1b8._8_8_ +
           (dVar39 * (double)local_1a8._8_8_ - (double)local_1b8._0_8_ * dVar28 * 1.0);
      auVar46._8_8_ =
           dVar39 * (double)local_1a8._0_8_ * -1.0 +
           dVar28 * (double)local_1b8._8_8_ +
           (dVar44 * (double)local_1a8._8_8_ - (double)local_1b8._0_8_ * dVar7 * -1.0);
      FUN_146d6d822(lVar15,&local_218);
      uStack_190 = (undefined4)uStack_210;
      uStack_18c = (undefined4)((ulonglong)uStack_210 >> 0x20);
      local_198 = local_218;
      uStack_194 = uStack_214;
      local_188 = local_208;
      uStack_180 = 0;
      local_178 = auVar8;
      local_168 = 0x3ff0000000000000;
      uStack_160 = 0;
      local_1b8 = auVar41;
      local_1a8 = auVar46;
      FUN_1447dc19e(lVar6 + 0x20,&local_218,&local_158);
      FUN_1447dc19e(lVar6 + 0x80,local_278,local_1b8);
      *(longlong *)(lVar6 + 0x648) = lVar11;
      *(longlong *)(lVar6 + 0x650) = lVar15;
      if ((*(byte *)(lVar6 + 0x374) & 4) == 0) {
        FUN_1449cbdd8(lVar6);
        *(undefined4 *)(lVar2 + 0x40) = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x5b0);
      *(undefined4 *)(lVar6 + 0x16c) = 0xffffffff;
      thunk_FUN_1449c337b(lVar6,&local_218,local_278,local_388);
      if (iVar4 < *(int *)(lVar6 + 0x5b0)) {
        local_368 = lVar5 + lVar14 + 0x10;
        local_370 = lVar5 + 0x28 + lVar14;
        lVar5 = *(longlong *)(lVar2 + 0x10);
        lVar11 = *(longlong *)(lVar2 + 0x28);
        piVar1 = (int *)(lVar2 + 0x40);
        iVar13 = *(int *)(lVar6 + 0x5b0) - iVar4;
        lVar15 = (longlong)iVar4 * 0x6c + 0x30;
        local_378 = lVar11;
        do {
          lVar14 = *(longlong *)(lVar6 + 0x5a8);
          if (*(longlong *)(lVar6 + 0x5a8) == 0) {
            lVar14 = lVar6 + 0x3f8;
          }
          if ((*(byte *)(lVar14 + lVar15) & 1) == 0) {
            iVar4 = *piVar1;
            *piVar1 = iVar4 + 1;
            lVar14 = *(longlong *)(lVar6 + 0x5a8);
            if (*(longlong *)(lVar6 + 0x5a8) == 0) {
              lVar14 = lVar6 + 0x3f8;
            }
            local_2b8 = *(undefined1 (*) [16])(lVar6 + 0x1e0);
            dStack_3b0 = local_2b8._0_8_;
            dVar7 = *(double *)(lVar6 + 0x1e8);
            dVar28 = *(double *)(lVar6 + 0x1e8);
            local_338 = *(double *)(lVar6 + 0x1d0);
            dStack_330 = *(double *)(lVar6 + 0x1d8);
            dVar39 = (double)*(float *)(lVar14 + -0x10 + lVar15);
            dVar44 = (double)*(float *)(lVar14 + -0x14 + lVar15);
            dVar25 = (double)*(float *)(lVar14 + -0x18 + lVar15);
            dVar21 = dVar44 * local_338 - dStack_330 * dVar25;
            dVar22 = dVar39 * dStack_330 - dStack_3b0 * dVar44;
            dVar23 = dVar25 * dStack_3b0 - dVar39 * local_338;
            dVar22 = dVar22 + dVar22;
            dVar23 = dVar23 + dVar23;
            dVar21 = dVar21 + dVar21;
            auVar8._8_4_ = SUB84(dVar28,0);
            auVar8._0_8_ = dVar7;
            auVar8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            local_3f4 = (float)(dVar21 * dVar7 + dVar39 + (dVar23 * local_338 - dVar22 * dStack_330)
                               );
            fVar26 = (float)((dVar21 * dStack_330 - dVar23 * dStack_3b0) + dVar7 * dVar22 + dVar25);
            local_328 = ZEXT416((uint)fVar26);
            local_3dc = (float)((dStack_3b0 * dVar22 - local_338 * dVar21) +
                               dVar28 * dVar23 + dVar44);
            local_3e8 = local_3dc * 0.0 - fVar26;
            fVar17 = fVar26 * 0.0;
            local_3f0 = local_3f4 * -0.0 + fVar17;
            local_3ec = local_3dc * -0.0 + local_3f4;
            fVar19 = local_3e8 * local_3e8 + local_3ec * local_3ec + local_3f0 * local_3f0;
            if (fVar19 <= 0.0001) {
              local_3e8 = local_3dc - fVar17;
              fVar17 = fVar17 - local_3f4;
              fVar19 = local_3f4 * 0.0 + local_3dc * -0.0;
              local_3ec = 1.0 / SQRT(local_3e8 * local_3e8 + fVar19 * fVar19 + fVar17 * fVar17);
              local_3e8 = local_3e8 * local_3ec;
              local_3f0 = fVar17 * local_3ec;
              local_3ec = local_3ec * fVar19;
            }
            else {
              fVar17 = 1.0 / SQRT(fVar19);
              local_3ec = local_3ec * fVar17;
              local_3f0 = local_3f0 * fVar17;
              local_3e8 = local_3e8 * fVar17;
            }
            dVar44 = (double)*(float *)(lVar14 + -0x28 + lVar15);
            dVar28 = (double)*(float *)(lVar14 + -0x2c + lVar15);
            dVar23 = (double)*(float *)(lVar14 + -0x30 + lVar15);
            local_2e8 = *(double *)(lVar6 + 0x170);
            dStack_2e0 = *(double *)*(undefined1 (*) [12])(lVar6 + 0x178);
            auVar41 = *(undefined1 (*) [16])(lVar6 + 0x180);
            auVar10 = *(undefined1 (*) [12])(lVar6 + 0x178);
            dVar39 = auVar41._0_8_;
            dVar31 = *(double *)*(undefined1 (*) [16])(lVar6 + 400);
            local_398 = *(undefined1 (*) [16])(lVar6 + 400);
            local_2c8 = *(double *)(lVar6 + 0x188);
            dStack_2c0 = *(double *)(lVar6 + 0x188);
            dVar21 = dVar28 * local_2e8 - dStack_2e0 * dVar23;
            dVar22 = dVar44 * dStack_2e0 - dVar39 * dVar28;
            local_2d8._8_4_ = auVar41._8_4_;
            local_2d8._0_8_ = local_2e8;
            local_2d8._12_4_ = auVar41._12_4_;
            dVar27 = dVar23 * dVar39 - dVar44 * local_2e8;
            dVar22 = dVar22 + dVar22;
            dVar27 = dVar27 + dVar27;
            dVar21 = dVar21 + dVar21;
            auVar9._12_4_ = auVar41._4_4_;
            auVar9._0_12_ = auVar10;
            dVar23 = (dVar21 * dStack_2e0 - dVar27 * dVar39) + local_2c8 * dVar22 + dVar23 + dVar31;
            dVar25 = (dVar39 * dVar22 - local_2e8 * dVar21) + dStack_2c0 * dVar27 + dVar28 +
                     *(double *)(lVar6 + 0x198);
            uVar47 = (undefined4)((ulonglong)dVar25 >> 0x20);
            dVar28 = *(double *)(lVar6 + 0x1a0);
            dVar27 = dVar21 * local_2c8 + dVar44 + (dVar27 * local_2e8 - dVar22 * dStack_2e0) +
                     dVar28;
            dVar44 = (double)*(float *)(lVar14 + -0x1c + lVar15);
            dVar34 = (double)*(float *)(lVar14 + -0x20 + lVar15);
            dVar21 = (double)*(float *)(lVar14 + -0x24 + lVar15);
            dVar22 = dVar34 * local_338 - dStack_330 * dVar21;
            dVar35 = dVar44 * dStack_330 - dStack_3b0 * dVar34;
            local_2a8._8_4_ = local_2b8._8_4_;
            local_2a8._0_8_ = local_338;
            local_2a8._12_4_ = local_2b8._12_4_;
            dVar37 = dVar21 * dStack_3b0 - dVar44 * local_338;
            dVar35 = dVar35 + dVar35;
            dVar37 = dVar37 + dVar37;
            dVar22 = dVar22 + dVar22;
            auStack_3a4._4_8_ = auVar8._8_8_;
            local_308 = *(double *)(lVar6 + 0x1f0);
            dStack_300 = *(double *)(lVar6 + 0x1f8);
            dVar21 = (dVar22 * dStack_330 - dVar37 * dStack_3b0) + dVar7 * dVar35 + dVar21 +
                     local_308;
            local_298 = (dStack_3b0 * dVar35 - local_338 * dVar22) +
                        (double)auStack_3a4._4_8_ * dVar37 + dVar34 + dStack_300;
            local_360 = *(double *)(lVar6 + 0x200);
            dVar44 = dVar22 * dVar7 + dVar44 + (dVar37 * local_338 - dVar35 * dStack_330) +
                     local_360;
            local_288._8_4_ = SUB84(dVar25,0);
            local_288._0_8_ = dVar25;
            local_288._12_4_ = uVar47;
            local_348._8_4_ = SUB84(dVar25,0);
            local_348._0_8_ = dVar23;
            local_348._12_4_ = uVar47;
            dVar22 = (dVar27 + dVar44) * 0.5;
            dVar34 = (dVar25 + local_298) * 0.5;
            dVar35 = (dVar23 + dVar21) * 0.5;
            local_3bc = (float)(dVar22 - *(double *)(lVar5 + 0x120));
            local_3c0 = (float)(dVar34 - *(double *)(lVar5 + 0x118));
            local_3c4 = (float)(dVar35 - *(double *)(lVar5 + 0x110));
            local_3c8 = (float)(dVar22 - *(double *)(lVar11 + 0x120));
            local_3e0 = (float)(dVar34 - *(double *)(lVar11 + 0x118));
            local_3e4 = (float)(dVar35 - *(double *)(lVar11 + 0x110));
            fVar17 = *(float *)(lVar6 + 0x344);
            local_358 = ZEXT416((uint)fVar17);
            fVar19 = 0.0;
            local_318 = ZEXT416((uint)*(float *)(lVar6 + 0x348));
            if (0.0 < fVar17) {
LAB_146d6c024:
              fVar19 = ((*(float *)(lVar5 + 0x30) * local_3c0 - local_3c4 * *(float *)(lVar5 + 0x34)
                        ) + *(float *)(lVar5 + 0x28)) -
                       ((*(float *)(lVar11 + 0x30) * local_3e0 -
                        local_3e4 * *(float *)(lVar11 + 0x34)) + *(float *)(lVar11 + 0x28));
              fVar45 = ((*(float *)(lVar5 + 0x38) * local_3c4 - local_3bc * *(float *)(lVar5 + 0x30)
                        ) + *(float *)(lVar5 + 0x24)) -
                       ((*(float *)(lVar11 + 0x38) * local_3e4 -
                        local_3c8 * *(float *)(lVar11 + 0x30)) + *(float *)(lVar11 + 0x24));
              fVar33 = ((*(float *)(lVar5 + 0x34) * local_3bc - *(float *)(lVar5 + 0x38) * local_3c0
                        ) + *(float *)(lVar5 + 0x20)) -
                       ((*(float *)(lVar11 + 0x34) * local_3c8 -
                        *(float *)(lVar11 + 0x38) * local_3e0) + *(float *)(lVar11 + 0x20));
              local_3d8 = dVar28;
              if ((*(byte *)(lVar14 + lVar15) & 8) != 0) goto LAB_146d6bb51;
              fVar18 = fVar19 * local_3f8;
              fVar36 = fVar45 * local_3f8;
              fVar20 = fVar33 * local_3f8;
            }
            else {
              fVar45 = 0.0;
              fVar33 = 0.0;
              if ((*(byte *)(lVar14 + lVar15) & 8) == 0) goto LAB_146d6c024;
LAB_146d6bb51:
              local_3d8 = (double)CONCAT44(local_3d8._4_4_,fVar45);
              dVar29 = (double)*(float *)(lVar14 + 0x14 + lVar15);
              dVar34 = (double)*(float *)(lVar14 + 0x10 + lVar15);
              dVar42 = (double)*(float *)(lVar14 + 0xc + lVar15);
              local_2f8._0_8_ = auVar10._0_8_;
              local_2f8._8_8_ = auVar9._8_8_;
              dVar35 = dVar34 * local_2e8 - (double)local_2f8._0_8_ * dVar42;
              dVar37 = dVar29 * dStack_2e0 - (double)local_2f8._8_8_ * dVar34;
              dVar38 = dVar42 * dVar39 - dVar29 * local_2e8;
              dVar37 = dVar37 + dVar37;
              dVar38 = dVar38 + dVar38;
              dVar35 = dVar35 + dVar35;
              dVar22 = (double)*(float *)(lVar14 + 0x20 + lVar15);
              dVar30 = (double)*(float *)(lVar14 + 0x1c + lVar15);
              dVar24 = (double)*(float *)(lVar14 + 0x18 + lVar15);
              dVar43 = dVar30 * local_338 - dStack_330 * dVar24;
              dVar32 = dVar22 * dStack_330 - dStack_3b0 * dVar30;
              local_398._8_4_ = SUB84(local_298,0);
              local_398._0_8_ = dVar21;
              local_398._12_4_ = (int)((ulonglong)local_298 >> 0x20);
              dVar40 = dVar24 * dStack_3b0 - dVar22 * local_338;
              dVar32 = dVar32 + dVar32;
              dVar40 = dVar40 + dVar40;
              dVar43 = dVar43 + dVar43;
              fVar18 = (float)((dVar28 + dVar35 * local_2c8 + dVar29 +
                                         (dVar38 * local_2e8 - dVar37 * (double)local_2f8._0_8_)) -
                              dVar27) -
                       (float)((local_360 +
                               dVar43 * dVar7 + dVar22 + (dVar40 * local_338 - dVar32 * dStack_330))
                              - dVar44);
              fVar36 = (float)((*(double *)(lVar6 + 0x198) +
                               (dVar39 * dVar37 - local_2e8 * dVar35) + dStack_2c0 * dVar38 + dVar34
                               ) - local_348._8_8_) -
                       (float)((dStack_300 +
                               (dStack_3b0 * dVar32 - local_338 * dVar43) +
                               (double)auStack_3a4._4_8_ * dVar40 + dVar30) -
                              (double)local_398._8_8_);
              fVar20 = (float)((dVar31 + (dVar35 * dStack_2e0 - dVar38 * (double)local_2f8._8_8_) +
                                         local_2c8 * dVar37 + dVar42) - dVar23) -
                       (float)((local_308 +
                               (dVar43 * dStack_330 - dVar40 * dStack_3b0) + dVar7 * dVar32 + dVar24
                               ) - dVar21);
            }
            uVar48 = 0;
            local_3a8 = *(float *)(lVar14 + 4 + lVar15);
            auStack_3a4 = auVar8._4_12_;
            if (0.0 < fVar17) {
              fVar19 = fVar19 * local_3f4 + fVar33 * fVar26 + fVar45 * local_3dc;
              uVar48 = -(uint)(fVar19 < -*(float *)(lVar6 + 0x348) * local_3f8) &
                       (uint)(-fVar17 * fVar19);
            }
            _local_3b8 = CONCAT44((int)((ulonglong)dStack_330 >> 0x20),uVar48);
            fVar33 = fVar26 * local_3f0 - local_3ec * local_3dc;
            fVar17 = local_3dc * local_3e8 - local_3f0 * local_3f4;
            fVar19 = local_3f4 * local_3ec + -fVar26 * local_3e8;
            lVar11 = (longlong)iVar4 * 0xbc;
            *(float *)(lVar2 + 0x44 + lVar11) = local_3c4;
            *(float *)(lVar2 + 0x48 + lVar11) = local_3c0;
            *(float *)(lVar2 + 0x4c + lVar11) = local_3bc;
            *(float *)(lVar2 + 0x50 + lVar11) = local_3e4;
            *(float *)(lVar2 + 0x54 + lVar11) = local_3e0;
            *(float *)(lVar2 + 0x58 + lVar11) = local_3c8;
            fVar20 = fVar20 + (float)(dVar23 - dVar21);
            *(float *)(lVar2 + 0x5c + lVar11) = fVar26;
            *(float *)(lVar2 + 0x60 + lVar11) = local_3dc;
            *(float *)(lVar2 + 100 + lVar11) = local_3f4;
            *(float *)(lVar2 + 0x68 + lVar11) = local_3ec;
            *(float *)(lVar2 + 0x6c + lVar11) = local_3f0;
            *(float *)(lVar2 + 0x70 + lVar11) = local_3e8;
            *(float *)(lVar2 + 0x74 + lVar11) = fVar17;
            fVar36 = fVar36 + (float)(dVar25 - local_298);
            *(float *)(lVar2 + 0x78 + lVar11) = fVar19;
            fVar18 = fVar18 + (float)(dVar27 - dVar44);
            *(float *)(lVar2 + 0x7c + lVar11) = fVar33;
            *(float *)(lVar2 + 0x80 + lVar11) =
                 ((float)(dVar27 - dVar44) * local_3f4 +
                 (float)(dVar23 - dVar21) * fVar26 + (float)(dVar25 - local_298) * local_3dc) -
                 local_3a8;
            *(float *)(lVar2 + 0x84 + lVar11) =
                 fVar18 * local_3e8 + fVar20 * local_3ec + fVar36 * local_3f0;
            *(float *)(lVar2 + 0x88 + lVar11) = fVar18 * fVar33 + fVar20 * fVar17 + fVar19 * fVar36;
            *(uint *)(lVar2 + 0x8c + lVar11) = uVar48;
            puVar3 = (undefined8 *)(lVar2 + 0xf0 + lVar11);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar2 + 0xe4 + lVar11);
            *puVar3 = 0;
            puVar3[1] = 0;
            local_2f8 = auVar9;
            dStack_290 = local_298;
            FUN_146d7203c(piVar1,(longlong)iVar4,local_368,local_370);
            lVar11 = local_378;
          }
          lVar15 = lVar15 + 0x6c;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      *(undefined8 *)(lVar6 + 0x648) = 0;
      *(undefined8 *)(lVar6 + 0x650) = 0;
      param_1 = local_380;
      cVar12 = local_3f9;
      param_3 = local_3cc;
    }
    lVar16 = lVar16 + 1;
    if ((int)lVar16 == param_3) {
      if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 146d6c1ea FUN_146d6c1ea body=2829 status=ok
// SIG undefined FUN_146d6c1ea(void)

void FUN_146d6c1ea(undefined8 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  char local_d4 [4];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    pfVar6 = (float *)*param_1;
    pfVar7 = pfVar6 + (longlong)*(int *)(param_1 + 1) * 0xce;
    pfVar8 = pfVar6 + 0x3f;
    do {
      local_f8 = pfVar6[3];
      fVar17 = *pfVar6;
      local_f4 = pfVar6[1];
      local_d4[0] = '\0';
      local_d4[1] = '\0';
      local_d4[2] = '\0';
      local_d4[3] = '\0';
      fVar20 = pfVar6[0x10];
      if (0 < (longlong)(int)fVar20) {
        local_f8 = local_f8 * -DAT_14c75f0d0;
        pfVar12 = *(float **)(pfVar6 + 4);
        pfVar13 = *(float **)(pfVar6 + 10);
        fVar21 = 0.0;
        lVar9 = 0;
        iVar11 = 0;
        local_11c = 0.0;
        local_124 = 0.0;
        local_128 = 0.0;
        local_100 = 0.0;
        local_108 = 0.0;
        local_110 = 0.0;
        local_114 = 0.0;
        local_118 = 0.0;
        local_120 = 0.0;
        local_fc = 0.0;
        local_104 = 0.0;
        local_10c = 0.0;
        pcVar14 = local_d4;
        do {
          fVar15 = *(float *)((longlong)pfVar6 + lVar9 + 0x44);
          fVar16 = *(float *)((longlong)pfVar6 + lVar9 + 0x48);
          fVar18 = *(float *)((longlong)pfVar6 + lVar9 + 0x4c);
          fVar19 = *(float *)((longlong)pfVar6 + lVar9 + 0x54);
          fVar1 = *(float *)((longlong)pfVar6 + lVar9 + 0x50);
          fVar2 = *(float *)((longlong)pfVar6 + lVar9 + 0x58);
          fVar3 = *(float *)((longlong)pfVar6 + lVar9 + 0x5c);
          fVar4 = *(float *)((longlong)pfVar6 + lVar9 + 0x60);
          fVar5 = *(float *)((longlong)pfVar6 + lVar9 + 100);
          fVar16 = (((pfVar12[4] * fVar16 - fVar15 * pfVar12[5]) + pfVar12[2]) -
                   ((pfVar13[4] * fVar19 - fVar1 * pfVar13[5]) + pfVar13[2])) * fVar5 +
                   (((pfVar12[5] * fVar18 - fVar16 * pfVar12[6]) + *pfVar12) -
                   ((pfVar13[5] * fVar2 - fVar19 * pfVar13[6]) + *pfVar13)) * fVar3 +
                   (((fVar15 * pfVar12[6] - pfVar12[4] * fVar18) + pfVar12[1]) -
                   ((fVar1 * pfVar13[6] - pfVar13[4] * fVar2) + pfVar13[1])) * fVar4 +
                   *(float *)((longlong)pfVar6 + lVar9 + 0x80);
          fVar15 = -param_2;
          if (param_2 <= 0.0 || -param_2 <= fVar16) {
            fVar15 = fVar16;
          }
          fVar16 = *(float *)((longlong)pfVar6 + lVar9 + 0xe4);
          if ((fVar15 < 0.0) || (1e-08 < fVar16)) {
            fVar18 = fVar15 * local_f8 * *(float *)((longlong)pfVar6 + lVar9 + 0xd8);
            fVar19 = fVar16 + fVar18;
            fVar15 = -fVar16;
            fVar16 = fVar19;
            if (fVar19 <= 0.0) {
              fVar16 = 0.0;
            }
            fVar18 = (float)(~-(uint)(0.0 < fVar19) & (uint)fVar15 |
                            (uint)fVar18 & -(uint)(0.0 < fVar19));
            *(float *)((longlong)pfVar6 + lVar9 + 0xe4) = fVar16;
            fVar15 = pfVar6[8] * pfVar6[6] * pfVar12[0x4d];
            if (1.1754944e-38 < fVar15) {
              fVar15 = fVar15 * fVar18;
              local_128 = local_128 + fVar3 * fVar15;
              local_124 = local_124 + fVar4 * fVar15;
              local_11c = local_11c + fVar15 * fVar5;
              local_120 = local_120 + *(float *)((longlong)pfVar6 + lVar9 + 0x90) * fVar18;
              local_118 = local_118 + *(float *)((longlong)pfVar6 + lVar9 + 0x94) * fVar18;
              local_114 = local_114 + *(float *)((longlong)pfVar6 + lVar9 + 0x98) * fVar18;
            }
            fVar15 = pfVar6[0xe] * pfVar6[0xc] * pfVar13[0x4d];
            if (1.1754944e-38 < fVar15) {
              fVar15 = fVar18 * fVar15;
              local_110 = local_110 - fVar3 * fVar15;
              local_108 = local_108 - fVar4 * fVar15;
              local_100 = local_100 - fVar5 * fVar15;
              local_10c = local_10c - *(float *)((longlong)pfVar6 + lVar9 + 0xb4) * fVar18;
              local_104 = local_104 - *(float *)((longlong)pfVar6 + lVar9 + 0xb8) * fVar18;
              local_fc = local_fc - *(float *)((longlong)pfVar6 + lVar9 + 0xbc) * fVar18;
            }
            fVar21 = fVar21 + fVar16;
          }
          if ((((fVar16 != 0.0) || (NAN(fVar16))) ||
              (fVar15 = *(float *)((longlong)pfVar6 + lVar9 + 0xe8), fVar15 != 0.0)) ||
             (((NAN(fVar15) || (fVar15 = *(float *)((longlong)pfVar6 + lVar9 + 0xec), fVar15 != 0.0)
               ) || (NAN(fVar15))))) {
            *pcVar14 = '\x01';
            iVar11 = iVar11 + 1;
          }
          lVar9 = lVar9 + 0xbc;
          pcVar14 = pcVar14 + 1;
        } while ((longlong)(int)fVar20 * 0xbc - lVar9 != 0);
        if (0 < iVar11) {
          local_ec = fVar21 / (float)iVar11;
          local_f0 = fVar17 * local_ec * fVar17 * local_ec;
          local_f4 = local_f4 * local_ec;
          lVar9 = 0;
          pfVar10 = pfVar8;
          do {
            if (local_d4[lVar9] == '\x01') {
              fVar17 = ((pfVar12[4] * pfVar10[-0x2d] - pfVar10[-0x2e] * pfVar12[5]) + pfVar12[2]) -
                       ((pfVar13[4] * pfVar10[-0x2a] - pfVar10[-0x2b] * pfVar13[5]) + pfVar13[2]);
              fVar15 = ((pfVar10[-0x2e] * pfVar12[6] - pfVar12[4] * pfVar10[-0x2c]) + pfVar12[1]) -
                       ((pfVar10[-0x2b] * pfVar13[6] - pfVar13[4] * pfVar10[-0x29]) + pfVar13[1]);
              fVar21 = ((pfVar12[5] * pfVar10[-0x2c] - pfVar10[-0x2d] * pfVar12[6]) + *pfVar12) -
                       ((pfVar13[5] * pfVar10[-0x29] - pfVar10[-0x2a] * pfVar13[6]) + *pfVar13);
              fVar20 = pfVar10[-8] * local_f8 *
                       (fVar17 * pfVar10[-0x23] + fVar21 * pfVar10[-0x25] + fVar15 * pfVar10[-0x24]
                       + pfVar10[-0x1e]);
              fVar21 = pfVar10[-7] * local_f8 *
                       (fVar17 * pfVar10[-0x20] + fVar21 * pfVar10[-0x22] + fVar15 * pfVar10[-0x21]
                       + pfVar10[-0x1d]);
              fVar17 = pfVar10[-5] + fVar20;
              pfVar10[-5] = fVar17;
              fVar15 = pfVar10[-4] + fVar21;
              pfVar10[-4] = fVar15;
              *pfVar10 = 1.0;
              if (0.0001 <= local_ec) {
                fVar16 = fVar15 * fVar15 + fVar17 * fVar17;
                if (local_f0 < fVar16) {
                  fVar18 = (1.0 / SQRT(fVar16)) * local_f4;
                  fVar19 = fVar17 * fVar18;
                  fVar16 = fVar15 * fVar18;
                  fVar20 = fVar19 - (fVar17 - fVar20);
                  fVar21 = fVar16 - (fVar15 - fVar21);
                  goto LAB_146d6c8e9;
                }
              }
              else {
                fVar20 = -(fVar17 - fVar20);
                fVar21 = -(fVar15 - fVar21);
                fVar19 = 0.0;
                fVar16 = 0.0;
                fVar18 = 0.0;
LAB_146d6c8e9:
                pfVar10[-5] = fVar19;
                pfVar10[-4] = fVar16;
                *pfVar10 = fVar18;
              }
              fVar16 = pfVar10[-0x22] * fVar21 + pfVar10[-0x25] * fVar20;
              fVar15 = pfVar10[-0x21] * fVar21 + pfVar10[-0x24] * fVar20;
              fVar18 = pfVar10[-0x20] * fVar21 + pfVar10[-0x23] * fVar20;
              pfVar12 = *(float **)(pfVar6 + 4);
              fVar17 = pfVar6[8] * pfVar6[6] * pfVar12[0x4d];
              if (1.1754944e-38 < fVar17) {
                local_128 = local_128 + fVar16 * fVar17;
                local_124 = local_124 + fVar15 * fVar17;
                local_11c = local_11c + fVar17 * fVar18;
                local_120 = local_120 + pfVar10[-0x15] * fVar21 + pfVar10[-0x18] * fVar20;
                local_118 = local_118 + pfVar10[-0x14] * fVar21 + pfVar10[-0x17] * fVar20;
                local_114 = local_114 + pfVar10[-0x13] * fVar21 + pfVar10[-0x16] * fVar20;
              }
              pfVar13 = *(float **)(pfVar6 + 10);
              fVar17 = pfVar6[0xe] * pfVar6[0xc] * pfVar13[0x4d];
              if (1.1754944e-38 < fVar17) {
                local_110 = local_110 - fVar16 * fVar17;
                local_108 = local_108 - fVar15 * fVar17;
                local_100 = local_100 - fVar18 * fVar17;
                local_10c = local_10c - (fVar21 * pfVar10[-0xc] + fVar20 * pfVar10[-0xf]);
                local_104 = local_104 - (pfVar10[-0xb] * fVar21 + pfVar10[-0xe] * fVar20);
                local_fc = local_fc - (pfVar10[-10] * fVar21 + pfVar10[-0xd] * fVar20);
              }
            }
            lVar9 = lVar9 + 1;
            pfVar10 = pfVar10 + 0x2f;
          } while (lVar9 < (int)pfVar6[0x10]);
          if (1.1754944e-38 < pfVar6[8] * pfVar6[6] * pfVar12[0x4d]) {
            *pfVar12 = local_128 + *pfVar12;
            pfVar12[1] = local_124 + pfVar12[1];
            pfVar12[2] = local_11c + pfVar12[2];
            lVar9 = *(longlong *)(pfVar6 + 4);
            *(float *)(lVar9 + 0x10) = local_120 + *(float *)(lVar9 + 0x10);
            *(float *)(lVar9 + 0x14) = local_118 + *(float *)(lVar9 + 0x14);
            *(float *)(lVar9 + 0x18) = local_114 + *(float *)(lVar9 + 0x18);
            pfVar13 = *(float **)(pfVar6 + 10);
          }
          if (1.1754944e-38 < pfVar6[0xe] * pfVar6[0xc] * pfVar13[0x4d]) {
            *pfVar13 = local_110 + *pfVar13;
            pfVar13[1] = local_108 + pfVar13[1];
            pfVar13[2] = local_100 + pfVar13[2];
            lVar9 = *(longlong *)(pfVar6 + 10);
            *(float *)(lVar9 + 0x10) = local_10c + *(float *)(lVar9 + 0x10);
            *(float *)(lVar9 + 0x14) = local_104 + *(float *)(lVar9 + 0x14);
            *(float *)(lVar9 + 0x18) = local_fc + *(float *)(lVar9 + 0x18);
          }
        }
      }
      pfVar6 = pfVar6 + 0xce;
      pfVar8 = pfVar8 + 0xce;
    } while (pfVar6 != pfVar7);
  }
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
    local_e8 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6ccf8 FUN_146d6ccf8 body=1449 status=ok
// SIG undefined FUN_146d6ccf8(void)

void FUN_146d6ccf8(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar12 = *param_1;
    lVar13 = (longlong)(int)param_1[1] * 0x338 + lVar12;
    do {
      iVar8 = *(int *)(lVar12 + 0x40);
      pfVar9 = *(float **)(lVar12 + 0x10);
      fVar15 = 0.0;
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar19 = 0.0;
      fVar21 = 0.0;
      fVar30 = 0.0;
      if (0 < (longlong)iVar8) {
        fVar20 = -DAT_14c75f0d0;
        fVar1 = *(float *)(lVar12 + 0xc);
        pfVar10 = *(float **)(lVar12 + 0x28);
        lVar14 = 0;
        fVar19 = 0.0;
        fVar24 = 0.0;
        fVar23 = 0.0;
        fVar22 = 0.0;
        fVar29 = 0.0;
        fVar28 = 0.0;
        fVar27 = 0.0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        do {
          fVar16 = *(float *)(lVar12 + 0x44 + lVar14);
          fVar25 = *(float *)(lVar12 + 0x48 + lVar14);
          fVar26 = *(float *)(lVar12 + 0x4c + lVar14);
          fVar2 = *(float *)(lVar12 + 0x54 + lVar14);
          fVar3 = *(float *)(lVar12 + 0x50 + lVar14);
          fVar4 = *(float *)(lVar12 + 0x58 + lVar14);
          fVar5 = *(float *)(lVar12 + 0x5c + lVar14);
          fVar6 = *(float *)(lVar12 + 0x60 + lVar14);
          fVar7 = *(float *)(lVar12 + 100 + lVar14);
          fVar25 = (((pfVar9[4] * fVar25 - fVar16 * pfVar9[5]) + pfVar9[2]) -
                   ((pfVar10[4] * fVar2 - fVar3 * pfVar10[5]) + pfVar10[2])) * fVar7 +
                   (((pfVar9[5] * fVar26 - fVar25 * pfVar9[6]) + *pfVar9) -
                   ((pfVar10[5] * fVar4 - fVar2 * pfVar10[6]) + *pfVar10)) * fVar5 +
                   (((fVar16 * pfVar9[6] - pfVar9[4] * fVar26) + pfVar9[1]) -
                   ((fVar3 * pfVar10[6] - pfVar10[4] * fVar4) + pfVar10[1])) * fVar6 +
                   *(float *)(lVar12 + 0x80 + lVar14);
          fVar16 = -param_2;
          if (param_2 <= 0.0 || -param_2 <= fVar25) {
            fVar16 = fVar25;
          }
          fVar25 = *(float *)(lVar12 + 0xe4 + lVar14);
          if ((fVar16 < 0.0) || (1e-08 < fVar25)) {
            fVar26 = fVar16 * fVar20 * fVar1 * *(float *)(lVar12 + 0xd8 + lVar14);
            fVar16 = fVar25 + fVar26;
            bVar11 = 0.0 < fVar16;
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            fVar25 = (float)(~-(uint)bVar11 & (uint)-fVar25 | (uint)fVar26 & -(uint)bVar11);
            *(float *)(lVar12 + 0xe4 + lVar14) = fVar16;
            fVar16 = *(float *)(lVar12 + 0x20) * *(float *)(lVar12 + 0x18) * pfVar9[0x4d];
            if (1.1754944e-38 < fVar16) {
              fVar16 = fVar16 * fVar25;
              fVar21 = fVar21 + fVar5 * fVar16;
              fVar15 = fVar15 + fVar6 * fVar16;
              fVar30 = fVar30 + fVar16 * fVar7;
              fVar29 = fVar29 + *(float *)(lVar12 + 0x90 + lVar14) * fVar25;
              fVar28 = fVar28 + *(float *)(lVar12 + 0x94 + lVar14) * fVar25;
              fVar27 = fVar27 + *(float *)(lVar12 + 0x98 + lVar14) * fVar25;
            }
            fVar16 = *(float *)(lVar12 + 0x38) * *(float *)(lVar12 + 0x30) * pfVar10[0x4d];
            if (1.1754944e-38 < fVar16) {
              fVar16 = fVar25 * fVar16;
              fVar17 = fVar17 - fVar5 * fVar16;
              fVar18 = fVar18 - fVar6 * fVar16;
              fVar19 = fVar19 - fVar7 * fVar16;
              fVar24 = fVar24 - *(float *)(lVar12 + 0xb4 + lVar14) * fVar25;
              fVar23 = fVar23 - *(float *)(lVar12 + 0xb8 + lVar14) * fVar25;
              fVar22 = fVar22 - *(float *)(lVar12 + 0xbc + lVar14) * fVar25;
            }
          }
          lVar14 = lVar14 + 0xbc;
        } while ((longlong)iVar8 * 0xbc - lVar14 != 0);
      }
      if (1.1754944e-38 < *(float *)(lVar12 + 0x20) * *(float *)(lVar12 + 0x18) * pfVar9[0x4d]) {
        *pfVar9 = fVar21 + *pfVar9;
        pfVar9[1] = fVar15 + pfVar9[1];
        pfVar9[2] = fVar30 + pfVar9[2];
        lVar14 = *(longlong *)(lVar12 + 0x10);
        *(float *)(lVar14 + 0x10) = fVar29 + *(float *)(lVar14 + 0x10);
        *(float *)(lVar14 + 0x14) = fVar28 + *(float *)(lVar14 + 0x14);
        *(float *)(lVar14 + 0x18) = fVar27 + *(float *)(lVar14 + 0x18);
      }
      pfVar9 = *(float **)(lVar12 + 0x28);
      if (1.1754944e-38 < *(float *)(lVar12 + 0x38) * *(float *)(lVar12 + 0x30) * pfVar9[0x4d]) {
        *pfVar9 = fVar17 + *pfVar9;
        pfVar9[1] = fVar18 + pfVar9[1];
        pfVar9[2] = fVar19 + pfVar9[2];
        lVar14 = *(longlong *)(lVar12 + 0x28);
        *(float *)(lVar14 + 0x10) = fVar24 + *(float *)(lVar14 + 0x10);
        *(float *)(lVar14 + 0x14) = fVar23 + *(float *)(lVar14 + 0x14);
        *(float *)(lVar14 + 0x18) = fVar22 + *(float *)(lVar14 + 0x18);
      }
      lVar12 = lVar12 + 0x338;
    } while (lVar12 != lVar13);
  }
  return;
}



// FUNCTION 146d6d2a2 FUN_146d6d2a2 body=1407 status=ok
// SIG undefined FUN_146d6d2a2(void)

void FUN_146d6d2a2(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x338 + lVar3;
    pfVar5 = (float *)(lVar3 + 0x44);
    do {
      local_b8 = 0.0;
      local_b4 = 0.0;
      local_b0 = 0.0;
      local_d0 = 0.0;
      local_cc = 0.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 0.0;
      local_bc = 0.0;
      fVar16 = 0.0;
      fVar15 = 0.0;
      local_d4 = 0.0;
      if (0 < *(int *)(lVar3 + 0x40)) {
        fVar9 = DAT_14c75f0d0 * *(float *)(lVar3 + 0xc);
        local_d4 = 0.0;
        lVar7 = 0;
        local_bc = 0.0;
        local_c0 = 0.0;
        local_c4 = 0.0;
        local_c8 = 0.0;
        local_cc = 0.0;
        local_d0 = 0.0;
        local_b0 = 0.0;
        local_b4 = 0.0;
        local_b8 = 0.0;
        pfVar6 = pfVar5;
        do {
          if ((0.0 < pfVar6[0x28]) || (pfVar6[0xf] <= 0.0 && pfVar6[0xf] != 0.0)) {
            fVar10 = -pfVar6[0x28] / param_2;
            fVar11 = 0.0;
            if (fVar10 <= 0.0) {
              fVar11 = fVar10;
            }
            lVar1 = *(longlong *)(lVar3 + 0x10);
            lVar2 = *(longlong *)(lVar3 + 0x28);
            fVar14 = -pfVar6[0x25] * fVar9 *
                     (((((*(float *)(lVar1 + 0x30) * pfVar6[1] - *pfVar6 * *(float *)(lVar1 + 0x34))
                        + *(float *)(lVar1 + 0x28)) -
                       ((*(float *)(lVar2 + 0x30) * pfVar6[4] - pfVar6[3] * *(float *)(lVar2 + 0x34)
                        ) + *(float *)(lVar2 + 0x28))) * pfVar6[8] +
                      (((*(float *)(lVar1 + 0x34) * pfVar6[2] - pfVar6[1] * *(float *)(lVar1 + 0x38)
                        ) + *(float *)(lVar1 + 0x20)) -
                      ((*(float *)(lVar2 + 0x34) * pfVar6[5] - pfVar6[4] * *(float *)(lVar2 + 0x38))
                      + *(float *)(lVar2 + 0x20))) * pfVar6[6] +
                      (((*pfVar6 * *(float *)(lVar1 + 0x38) - *(float *)(lVar1 + 0x30) * pfVar6[2])
                       + *(float *)(lVar1 + 0x24)) -
                      ((pfVar6[3] * *(float *)(lVar2 + 0x38) - *(float *)(lVar2 + 0x30) * pfVar6[5])
                      + *(float *)(lVar2 + 0x24))) * pfVar6[7]) - pfVar6[0x12]);
            fVar10 = pfVar6[0x2b] + fVar14;
            uVar8 = -(uint)(fVar10 < fVar11);
            fVar14 = (float)(uVar8 & (uint)((fVar14 - fVar10) + fVar11) | ~uVar8 & (uint)fVar14);
            pfVar6[0x2b] = pfVar6[0x2b] + fVar14;
            fVar10 = pfVar6[6] * fVar14;
            fVar11 = pfVar6[7] * fVar14;
            fVar12 = fVar14 * pfVar6[8];
            fVar13 = *(float *)(lVar3 + 0x20) * *(float *)(lVar3 + 0x18) * *(float *)(lVar1 + 0x134)
            ;
            if (1.1754944e-38 < fVar13) {
              fVar16 = fVar16 + fVar13 * fVar10;
              fVar15 = fVar15 + fVar13 * fVar11;
              local_d4 = local_d4 + fVar13 * fVar12;
              local_d0 = local_d0 + pfVar6[0x13] * fVar14;
              local_cc = local_cc + pfVar6[0x14] * fVar14;
              local_c8 = local_c8 + pfVar6[0x15] * fVar14;
            }
            fVar13 = *(float *)(lVar3 + 0x38) * *(float *)(lVar3 + 0x30) * *(float *)(lVar2 + 0x134)
            ;
            if (1.1754944e-38 < fVar13) {
              local_c4 = local_c4 - fVar10 * fVar13;
              local_c0 = local_c0 - fVar11 * fVar13;
              local_bc = local_bc - fVar12 * fVar13;
              local_b8 = local_b8 - pfVar6[0x1c] * fVar14;
              local_b4 = local_b4 - pfVar6[0x1d] * fVar14;
              local_b0 = local_b0 - pfVar6[0x1e] * fVar14;
            }
          }
          lVar7 = lVar7 + 1;
          pfVar6 = pfVar6 + 0x2f;
        } while (lVar7 < *(int *)(lVar3 + 0x40));
      }
      lVar7 = *(longlong *)(lVar3 + 0x10);
      if (1.1754944e-38 <
          *(float *)(lVar3 + 0x20) * *(float *)(lVar3 + 0x18) * *(float *)(lVar7 + 0x134)) {
        *(float *)(lVar7 + 0x20) = fVar16 + *(float *)(lVar7 + 0x20);
        *(float *)(lVar7 + 0x24) = fVar15 + *(float *)(lVar7 + 0x24);
        *(float *)(lVar7 + 0x28) = local_d4 + *(float *)(lVar7 + 0x28);
        *(float *)(lVar7 + 0x30) = local_d0 + *(float *)(lVar7 + 0x30);
        *(float *)(lVar7 + 0x34) = local_cc + *(float *)(lVar7 + 0x34);
        *(float *)(lVar7 + 0x38) = local_c8 + *(float *)(lVar7 + 0x38);
      }
      lVar7 = *(longlong *)(lVar3 + 0x28);
      if (1.1754944e-38 <
          *(float *)(lVar3 + 0x38) * *(float *)(lVar3 + 0x30) * *(float *)(lVar7 + 0x134)) {
        *(float *)(lVar7 + 0x20) = local_c4 + *(float *)(lVar7 + 0x20);
        *(float *)(lVar7 + 0x24) = local_c0 + *(float *)(lVar7 + 0x24);
        *(float *)(lVar7 + 0x28) = local_bc + *(float *)(lVar7 + 0x28);
        *(float *)(lVar7 + 0x30) = local_b8 + *(float *)(lVar7 + 0x30);
        *(float *)(lVar7 + 0x34) = local_b4 + *(float *)(lVar7 + 0x34);
        *(float *)(lVar7 + 0x38) = local_b0 + *(float *)(lVar7 + 0x38);
      }
      lVar3 = lVar3 + 0x338;
      pfVar5 = pfVar5 + 0xce;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 146d6d822 FUN_146d6d822 body=683 status=ok
// SIG undefined FUN_146d6d822(void)

double * FUN_146d6d822(float *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar1 = param_1[2];
  fVar2 = param_1[1];
  fVar3 = *param_1;
  dVar4 = *(double *)(param_1 + 0x48);
  dVar5 = *(double *)(param_1 + 0x46);
  dVar6 = *(double *)(param_1 + 0x44);
  FUN_14013713e(param_1,&local_d8);
  dVar7 = *(double *)(param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x22);
  dVar10 = *(double *)(param_1 + 0x24) * -1.0;
  dVar12 = *(double *)(param_1 + 0x26) * 1.0;
  dVar11 = (dVar10 * local_d0 + (local_d8 * dVar12 * 1.0 - local_c0 * dVar7)) -
           dVar8 * local_c8 * -1.0;
  dVar13 = (dVar12 * local_d0 + (local_d8 * dVar10 * -1.0 - local_c0 * dVar8)) -
           dVar7 * local_c8 * 1.0;
  dVar14 = dVar12 * local_c8 * 1.0 + dVar7 * local_d0 + (dVar10 * local_c0 - local_d8 * dVar8 * 1.0)
  ;
  dVar15 = dVar10 * local_c8 * -1.0 +
           dVar8 * local_d0 + (dVar12 * local_c0 - local_d8 * dVar7 * -1.0);
  dVar7 = *(double *)(param_1 + 0x38);
  dVar8 = *(double *)(param_1 + 0x3a);
  dVar10 = *(double *)(param_1 + 0x3c);
  dVar12 = dVar13 * dVar10 - dVar8 * dVar14;
  dVar12 = dVar12 + dVar12;
  dVar9 = dVar11 * dVar8 - dVar7 * dVar13;
  dVar9 = dVar9 + dVar9;
  dVar16 = dVar14 * dVar7 - dVar10 * dVar11;
  dVar16 = dVar16 + dVar16;
  *param_2 = ((double)fVar3 + dVar6) -
             ((dVar13 * dVar9 - dVar16 * dVar14) + dVar15 * dVar12 + dVar7);
  param_2[1] = ((double)fVar2 + dVar5) -
               ((dVar14 * dVar12 - dVar9 * dVar11) + dVar15 * dVar16 + dVar8);
  param_2[2] = ((double)fVar1 + dVar4) -
               ((dVar11 * dVar16 - dVar12 * dVar13) + dVar15 * dVar9 + dVar10);
  if ((local_b0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d6dace FUN_146d6dace body=704 status=ok
// SIG undefined FUN_146d6dace(void)

undefined8 * FUN_146d6dace(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = &PTR_FUN_149f4f5b0;
  param_1[2] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  memset(param_1 + 0x16,0,0xa0);
  memset(param_1 + 0x42,0,0xa0);
  memset(param_1 + 0x6e,0,0xa0);
  memset(param_1 + 0x9a,0,0xa0);
  memset(param_1 + 0xc6,0,0xa0);
  memset(param_1 + 0xf2,0,0xa0);
  memset(param_1 + 0x11e,0,0xa0);
  memset(param_1 + 0x14a,0,0xa0);
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x171) = 0;
  lVar2 = 0x6d0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x660) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x658) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x650) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x648) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x640) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x638) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x630) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x628) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x620);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x610);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x600);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x5f4);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x5e4) = 0x3f800000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x5e0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x5d0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x5c8) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x5c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x5b0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x5a8) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x5a0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x590) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x588) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x580);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x570);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x560);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x550);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x540);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x530);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x520);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x510) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xe0) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0xd8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xd0) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -200) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xc0) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0xb8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xb0) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0xa8) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x74);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x80);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x90);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xa0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -100) = 0x3f800000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x60);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x50) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x40);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x30) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x40);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x50);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x60);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + 0x70) = 0;
    lVar2 = lVar2 + 0x160;
  } while (lVar2 != 0xc50);
  return param_1;
}



// FUNCTION 146d6dd8e FUN_146d6dd8e body=76 status=ok
// SIG undefined FUN_146d6dd8e(void)

void FUN_146d6dd8e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d6ddda FUN_146d6ddda body=98 status=ok
// SIG undefined FUN_146d6ddda(void)

void FUN_146d6ddda(longlong param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0xb80) = 0x3f80000000000000;
  FUN_146d6de3c(param_1 + 0xb70);
  FUN_146d6de66(param_1 + 0x30,param_2);
  FUN_146d6de90(param_1 + 0x40,param_2);
  FUN_146d6deba(param_1 + 0x50,param_2);
  FUN_146d6dee4(param_1 + 0x60,param_2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 146d6de3c FUN_146d6de3c body=41 status=ok
// SIG undefined FUN_146d6de3c(void)

void FUN_146d6de3c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d72c78();
  return;
}



// FUNCTION 146d6de66 FUN_146d6de66 body=41 status=ok
// SIG undefined FUN_146d6de66(void)

void FUN_146d6de66(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d72cd8();
  return;
}



// FUNCTION 146d6de90 FUN_146d6de90 body=41 status=ok
// SIG undefined FUN_146d6de90(void)

void FUN_146d6de90(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d72d38();
  return;
}



// FUNCTION 146d6deba FUN_146d6deba body=41 status=ok
// SIG undefined FUN_146d6deba(void)

void FUN_146d6deba(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d72d98();
  return;
}



// FUNCTION 146d6dee4 FUN_146d6dee4 body=41 status=ok
// SIG undefined FUN_146d6dee4(void)

void FUN_146d6dee4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d72e08();
  return;
}



// FUNCTION 146d6df10 FUN_146d6df10 body=266 status=ok
// SIG undefined FUN_146d6df10(void)

void FUN_146d6df10(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar5 = *(int *)(param_1 + 0x20);
  uVar6 = 0;
  uVar7 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x24 + uVar6 * 4);
    uVar6 = uVar6 + 1;
    if (iVar4 < iVar5) {
      uVar7 = uVar6 & 0xffffffff;
      iVar5 = iVar4;
    }
  } while (uVar6 != 3);
  iVar4 = (int)param_2[1];
  if (*(int *)(param_1 + 0x68) < iVar5 + iVar4) {
    FUN_146d6e01a(param_1 + 0x60);
    iVar4 = (int)param_2[1];
  }
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    lVar2 = *param_2;
    lVar9 = (longlong)(int)uVar7;
    lVar8 = 0;
    do {
      uVar3 = **(undefined8 **)(lVar2 + lVar8);
      iVar5 = *(int *)(param_1 + 0x20 + lVar9 * 4);
      *(int *)(param_1 + 0x20 + lVar9 * 4) = iVar5 + 1;
      *(undefined8 *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x60) + lVar9 * 8) = uVar3;
      iVar1 = *(int *)(param_1 + 0xb78);
      *(uint *)(param_1 + 0xb78) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xb7c) < iVar1 + 1U) {
        FUN_146d72eee((longlong *)(param_1 + 0xb70),iVar1);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0xb70) + (longlong)iVar1 * 8) =
           CONCAT44((int)uVar7,iVar5);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar4 * 8 != lVar8);
    iVar5 = (int)param_2[1];
  }
  *(int *)(param_1 + 0xb80) = *(int *)(param_1 + 0xb80) + iVar5;
  return;
}



// FUNCTION 146d6e01a FUN_146d6e01a body=103 status=ok
// SIG undefined FUN_146d6e01a(void)

void FUN_146d6e01a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d72e68(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x20 + *param_1),0,(longlong)(param_2 - iVar1) << 5);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d6e082 FUN_146d6e082 body=187 status=ok
// SIG undefined FUN_146d6e082(void)

void FUN_146d6e082(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  lVar4 = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0x24 + lVar4 * 4);
    if ((int)uVar7 < (int)uVar2) {
      uVar7 = uVar2;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  FUN_146d6e13e();
  if (0 < (int)uVar7) {
    lVar4 = 0;
    uVar8 = 0;
    iVar6 = 0;
    do {
      lVar9 = 0;
      iVar5 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar4 + lVar9 * 8);
        if (lVar10 != 0) {
          iVar3 = *(int *)(lVar10 + 0x5b0);
          if (iVar5 < iVar3) {
            iVar5 = iVar3;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      lVar10 = uVar8 * 0x80;
      *(int *)(lVar9 + 4 + lVar10) = iVar6;
      *(int *)(lVar9 + lVar10) = iVar5;
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar6 = iVar5 + iVar6;
      uVar8 = uVar8 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar8 != uVar7);
  }
  FUN_146d6e180(param_1 + 0x50);
  FUN_146d6e1e2(param_1 + 0x30,uVar7);
  return;
}



// FUNCTION 146d6e13e FUN_146d6e13e body=64 status=ok
// SIG undefined FUN_146d6e13e(void)

void FUN_146d6e13e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d72f74();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
    }
  }
  return;
}



// FUNCTION 146d6e180 FUN_146d6e180 body=97 status=ok
// SIG undefined FUN_146d6e180(void)

void FUN_146d6e180(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d72ffa(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x300 + *param_1),0,(longlong)(param_2 - iVar1) * 0x300);
    return;
  }
  if (param_2 < iVar1) {
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 146d6e1e2 FUN_146d6e1e2 body=103 status=ok
// SIG undefined FUN_146d6e1e2(void)

void FUN_146d6e1e2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d7308e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x40 + *param_1),0,(longlong)(param_2 - iVar1) << 6);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d6e24a FUN_146d6e24a body=172 status=ok
// SIG undefined FUN_146d6e24a(void)

void FUN_146d6e24a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_146d6e082();
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar5 = 0;
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x60);
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar5 + lVar6 * 8);
        if (lVar2 != 0) {
          uVar3 = FUN_1448f7274(param_2,*(undefined8 *)(lVar2 + 0xe0));
          uVar4 = FUN_1448f7274(param_2,*(undefined8 *)(lVar2 + 0xe8));
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar8 + lVar6 * 8) = uVar3;
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar8 + 0x20 + lVar6 * 8) = uVar4;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x40;
      lVar5 = lVar5 + 0x20;
    } while (lVar7 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 146d6e2fe FUN_146d6e2fe body=191 status=ok
// SIG undefined FUN_146d6e2fe(void)

void FUN_146d6e2fe(longlong param_1,double param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  float local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x50);
    local_58 = *(undefined4 *)(param_1 + 0x58);
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar1 = 0;
      lVar3 = 0;
      lVar4 = 0;
      lVar2 = 0;
      do {
        local_68 = (float)param_2;
        FUN_146d6e3c5(*(longlong *)(param_1 + 0x40) + lVar4,*(longlong *)(param_1 + 0x60) + lVar3,
                      *(longlong *)(param_1 + 0x30) + lVar1,&local_60);
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 0x80;
        lVar3 = lVar3 + 0x20;
        lVar1 = lVar1 + 0x40;
      } while (lVar2 < *(int *)(param_1 + 0x48));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6e3c5 FUN_146d6e3c5 body=340 status=ok
// SIG undefined FUN_146d6e3c5(void)

void FUN_146d6e3c5(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar4 = 0;
  do {
    lVar3 = *(longlong *)(param_2 + lVar4 * 2);
    if (lVar3 != 0) {
      fVar1 = *(float *)(lVar3 + 0x33c);
      fVar7 = *(float *)(lVar3 + 0x340);
      if (*(float *)(lVar3 + 0x340) <= fVar1) {
        fVar7 = fVar1;
      }
      *(float *)((longlong)&local_68 + lVar4) = fVar7;
      puVar6 = &local_88;
      if ((*(ushort *)(lVar3 + 0x374) & 0xc0) == 0) {
        puVar6 = &local_78;
      }
      *(float *)((longlong)puVar6 + lVar4) = fVar1;
      *(undefined4 *)((longlong)local_98 + lVar4) = *(undefined4 *)(lVar3 + 0x370);
      *(undefined4 *)((longlong)&local_a8 + lVar4) = *(undefined4 *)(lVar3 + 0x5b0);
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  *(undefined8 *)(param_1 + 4) = local_a8;
  *(undefined8 *)(param_1 + 6) = uStack_a0;
  *(undefined8 *)(param_1 + 8) = local_68;
  *(undefined8 *)(param_1 + 10) = uStack_60;
  *(undefined8 *)(param_1 + 0xc) = local_78;
  *(undefined8 *)(param_1 + 0xe) = uStack_70;
  *(undefined8 *)(param_1 + 0x10) = local_88;
  *(undefined8 *)(param_1 + 0x12) = uStack_80;
  param_1[0x14] = local_98[0];
  param_1[0x15] = local_98[1];
  param_1[0x16] = local_98[2];
  param_1[0x17] = local_98[3];
  iVar2 = *param_1;
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      local_b0 = param_5;
      local_b8 = param_4;
      FUN_146d73113(iVar5,param_1,param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d6e522 FUN_146d6e522 body=170 status=ok
// SIG undefined FUN_146d6e522(void)

void FUN_146d6e522(longlong param_1,double param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    local_50 = *(undefined8 *)(param_1 + 0x50);
    local_48 = *(undefined4 *)(param_1 + 0x58);
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar1 = 0;
      lVar2 = 0;
      lVar3 = 0;
      do {
        FUN_146d6e5cd(*(longlong *)(param_1 + 0x60) + lVar2,*(longlong *)(param_1 + 0x40) + lVar1,
                      &local_50,(float)param_2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x20;
        lVar1 = lVar1 + 0x80;
      } while (lVar3 < *(int *)(param_1 + 0x48));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6e5cd FUN_146d6e5cd body=1785 status=ok
// SIG undefined FUN_146d6e5cd(void)

void FUN_146d6e5cd(longlong param_1,longlong param_2,longlong *param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
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
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  lVar23 = 0;
  do {
    lVar16 = *(longlong *)(param_1 + lVar23 * 8);
    if (lVar16 != 0) {
      lVar1 = lVar16 + 0x378;
      FUN_140210db2(lVar1,*(undefined4 *)(lVar16 + 0x5b0));
      FUN_140210ddc(lVar16 + 0x5b8,*(undefined4 *)(lVar16 + 0x5b0));
      *(undefined4 *)(lVar16 + 0x638) = 0;
      uVar19 = (ulonglong)*(uint *)(lVar16 + 0x5b0);
      if (0 < (int)*(uint *)(lVar16 + 0x5b0)) {
        lVar25 = 0x18;
        lVar26 = 0;
        lVar27 = 0;
        do {
          lVar21 = *(longlong *)(lVar16 + 0x5a8);
          if ((*(byte *)(lVar16 + 0x374) & 2) == 0) {
            lVar24 = lVar21;
            if (lVar21 == 0) {
              lVar24 = lVar16 + 0x3f8;
            }
            if ((*(byte *)(lVar24 + 0x30 + lVar26) & 1) != 0) goto LAB_146d6e9db;
            lVar21 = (*(int *)(param_2 + 4) + lVar27) * 0x300 + *param_3;
            fVar30 = *(float *)(lVar21 + 0x90 + lVar23 * 4);
            fVar31 = *(float *)(lVar21 + 0x70 + lVar23 * 4);
            fVar2 = *(float *)(lVar21 + 0x80 + lVar23 * 4);
            fVar32 = *(float *)(lVar21 + 0xb0 + lVar23 * 4);
            fVar3 = *(float *)(lVar21 + 0x150 + lVar23 * 4);
            fVar4 = *(float *)(lVar21 + 0x140 + lVar23 * 4);
            fVar5 = *(float *)(lVar21 + 0x130 + lVar23 * 4);
            fVar33 = *(float *)(lVar21 + 0x1b0 + lVar23 * 4);
            fVar6 = *(float *)(lVar21 + 0x180 + lVar23 * 4);
            fVar7 = *(float *)(lVar21 + 0x170 + lVar23 * 4);
            fVar8 = *(float *)(lVar21 + 0x160 + lVar23 * 4);
            fVar9 = *(float *)(lVar21 + 0x1c0 + lVar23 * 4);
            fVar34 = fVar8 * fVar9 + fVar5 * fVar33 + fVar31 * fVar32;
            fVar35 = fVar7 * fVar9 + fVar4 * fVar33 + fVar2 * fVar32;
            fVar33 = fVar9 * fVar6 + fVar33 * fVar3 + fVar32 * fVar30;
            fVar9 = *(float *)(lVar21 + 0x2d0 + lVar23 * 4);
            fVar10 = *(float *)(lVar21 + 0x2e0 + lVar23 * 4);
            fVar11 = *(float *)(lVar21 + 0x2f0 + lVar23 * 4);
            fVar32 = fVar8 * fVar11 + fVar5 * fVar10 + fVar31 * fVar9;
            fVar31 = fVar7 * fVar11 + fVar4 * fVar10 + fVar2 * fVar9;
            fVar30 = fVar6 * fVar11 + fVar3 * fVar10 + fVar30 * fVar9;
            fVar2 = *(float *)(lVar21 + 0x1d0 + lVar23 * 4);
            puVar28 = (undefined8 *)(lVar26 + lVar24);
            lVar21 = *(longlong *)(lVar16 + 0x628);
            if (fVar2 < 0.9999) {
              if (0.0001 <= fVar2) {
                fVar3 = *(float *)(lVar24 + 0x50 + lVar26);
                fVar4 = *(float *)(lVar24 + 0x14 + lVar26);
                fVar5 = *(float *)(lVar24 + 0x4c + lVar26);
                fVar6 = *(float *)(lVar24 + 0x10 + lVar26);
                fVar7 = *(float *)(lVar24 + 0x48 + lVar26);
                fVar8 = *(float *)(lVar24 + 0xc + lVar26);
                fVar9 = *(float *)(lVar24 + 0x44 + lVar26);
                fVar10 = *(float *)(lVar24 + 8 + lVar26);
                fVar11 = *(float *)(lVar24 + 0x40 + lVar26);
                fVar12 = *(float *)(lVar24 + lVar26);
                fVar13 = *(float *)(lVar24 + 4 + lVar26);
                fVar14 = *(float *)(lVar24 + 0x3c + lVar26);
                iVar15 = *(int *)(lVar16 + 0x3f0);
                *(uint *)(lVar16 + 0x3f0) = iVar15 + 1U;
                if (*(uint *)(lVar16 + 0x3f4) < iVar15 + 1U) {
                  FUN_146d71fb0(lVar1,iVar15);
                }
                lVar22 = *(longlong *)(lVar16 + 1000);
                if (*(longlong *)(lVar16 + 1000) == 0) {
                  lVar22 = lVar1;
                }
                lVar17 = (longlong)iVar15 * 0x1c;
                lVar18 = lVar22 + lVar17;
                uVar29 = *(undefined4 *)(lVar24 + 0x38 + lVar26);
                *(float *)(lVar22 + lVar17) = (fVar14 - fVar12) * fVar2 + fVar12;
                *(float *)(lVar22 + 4 + lVar17) = (fVar11 - fVar13) * fVar2 + fVar13;
                *(float *)(lVar22 + 8 + lVar17) = (fVar9 - fVar10) * fVar2 + fVar10;
                *(float *)(lVar22 + 0xc + lVar17) = (fVar7 - fVar8) * fVar2 + fVar8;
                *(float *)(lVar22 + 0x10 + lVar17) = (fVar5 - fVar6) * fVar2 + fVar6;
                *(float *)(lVar22 + 0x14 + lVar17) = (fVar3 - fVar4) * fVar2 + fVar4;
                bVar20 = 1;
                goto LAB_146d6ea7d;
              }
              goto LAB_146d6ea08;
            }
            iVar15 = *(int *)(lVar16 + 0x3f0);
            *(uint *)(lVar16 + 0x3f0) = iVar15 + 1U;
            if (*(uint *)(lVar16 + 0x3f4) < iVar15 + 1U) {
              FUN_146d71fb0(lVar1,iVar15);
            }
            lVar24 = lVar26 + lVar24;
            lVar22 = *(longlong *)(lVar16 + 1000);
            if (*(longlong *)(lVar16 + 1000) == 0) {
              lVar22 = lVar1;
            }
            lVar17 = (longlong)iVar15 * 0x1c;
            lVar18 = lVar22 + lVar17;
            uVar29 = *(undefined4 *)(lVar24 + 0x38);
            *(undefined4 *)(lVar22 + 8 + lVar17) = *(undefined4 *)(lVar24 + 0x44);
            *(undefined8 *)(lVar22 + lVar17) = *(undefined8 *)(lVar24 + 0x3c);
            *(undefined8 *)(lVar22 + 0xc + lVar17) = *(undefined8 *)(lVar24 + 0x48);
            *(undefined4 *)(lVar22 + 0x14 + lVar17) = *(undefined4 *)(lVar24 + 0x50);
            bVar20 = 3;
LAB_146d6ea7d:
            *(undefined4 *)(lVar18 + 0x18) = uVar29;
          }
          else {
LAB_146d6e9db:
            if (lVar21 == 0) {
              lVar21 = lVar16 + 0x3f8;
            }
            puVar28 = (undefined8 *)(lVar27 * 0x6c + lVar21);
            lVar21 = *(longlong *)(lVar16 + 0x628);
            fVar32 = 0.0;
            fVar31 = 0.0;
            fVar30 = 0.0;
            fVar34 = 0.0;
            fVar35 = 0.0;
            fVar33 = 0.0;
LAB_146d6ea08:
            bVar20 = 1;
            if ((int)uVar19 < 8) {
              iVar15 = *(int *)(lVar16 + 0x3f0);
              *(uint *)(lVar16 + 0x3f0) = iVar15 + 1U;
              if (*(uint *)(lVar16 + 0x3f4) < iVar15 + 1U) {
                FUN_146d71fb0(lVar1,iVar15);
              }
              lVar24 = *(longlong *)(lVar16 + 1000);
              if (*(longlong *)(lVar16 + 1000) == 0) {
                lVar24 = lVar1;
              }
              lVar22 = (longlong)iVar15 * 0x1c;
              lVar18 = lVar24 + lVar22;
              uVar29 = *(undefined4 *)(puVar28 + 7);
              *(undefined4 *)(lVar24 + 8 + lVar22) = *(undefined4 *)(puVar28 + 1);
              *(undefined8 *)(lVar24 + lVar22) = *puVar28;
              *(undefined8 *)(lVar24 + 0xc + lVar22) = *(undefined8 *)((longlong)puVar28 + 0xc);
              *(undefined4 *)(lVar24 + 0x14 + lVar22) = *(undefined4 *)((longlong)puVar28 + 0x14);
              bVar20 = 1;
              goto LAB_146d6ea7d;
            }
          }
          if (lVar21 == 0) {
            lVar21 = lVar16 + 0x5b8;
          }
          *(float *)(lVar16 + 0x120) = fVar34 / param_4 + fVar32 + *(float *)(lVar16 + 0x120);
          *(float *)(lVar16 + 0x124) = fVar35 / param_4 + fVar31 + *(float *)(lVar16 + 0x124);
          *(float *)(lVar16 + 0x128) = fVar33 / param_4 + fVar30 + *(float *)(lVar16 + 0x128);
          *(float *)(lVar21 + -0x18 + lVar25) = fVar34;
          *(float *)(lVar21 + -0x14 + lVar25) = fVar35;
          *(float *)(lVar21 + -0x10 + lVar25) = fVar33;
          *(float *)(lVar21 + -0xc + lVar25) = fVar32;
          *(float *)(lVar21 + -8 + lVar25) = fVar31;
          *(float *)(lVar21 + -4 + lVar25) = fVar30;
          *(byte *)(lVar21 + lVar25) = *(byte *)(lVar21 + lVar25) & 0xfc | bVar20;
          fVar30 = *(float *)(lVar16 + 0x638);
          if (*(float *)(puVar28 + 7) <= *(float *)(lVar16 + 0x638)) {
            fVar30 = *(float *)(puVar28 + 7);
          }
          *(float *)(lVar16 + 0x638) = fVar30;
          lVar27 = lVar27 + 1;
          uVar19 = (ulonglong)*(int *)(lVar16 + 0x5b0);
          lVar25 = lVar25 + 0x1c;
          lVar26 = lVar26 + 0x6c;
        } while (lVar27 < (longlong)uVar19);
      }
    }
    lVar23 = lVar23 + 1;
    if (lVar23 == 4) {
      return;
    }
  } while( true );
}



// FUNCTION 146d6ecc6 FUN_146d6ecc6 body=425 status=ok
// SIG undefined FUN_146d6ecc6(void)

void FUN_146d6ecc6(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = DAT_14c75f0f0;
  uStack_64 = DAT_14c75f0f0;
  uStack_60 = DAT_14c75f0f0;
  uStack_5c = DAT_14c75f0f0;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar1;
  lVar4 = 0;
  do {
    if (lVar4 < (int)uVar1) {
      lVar5 = 0;
      do {
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != 0xc00);
      lVar5 = -0x20;
      do {
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  local_58 = param_4;
  uStack_54 = param_4;
  uStack_50 = param_4;
  uStack_4c = param_4;
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if (lVar4 + 4 < (longlong)(int)uVar2) {
        lVar5 = 0;
        do {
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != 0xc00);
        lVar5 = *param_3;
        lVar3 = -4;
        do {
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
      else {
        lVar5 = *param_3;
      }
      local_78 = &local_58;
      local_70 = &local_68;
      FUN_146d7079a(*param_1 + lVar4 * 0x80,param_2,lVar5 + lVar4 * 0x40,lVar5 + lVar4 * 0x40 + 0x20
                   );
      lVar4 = lVar4 + 1;
      uVar2 = (ulonglong)(int)param_1[1];
    } while (lVar4 < (longlong)uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6ee70 FUN_146d6ee70 body=394 status=ok
// SIG undefined FUN_146d6ee70(void)

void FUN_146d6ee70(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar1;
  lVar4 = 0;
  do {
    if (lVar4 < (int)uVar1) {
      lVar5 = 0;
      do {
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != 0xc00);
      lVar5 = -0x20;
      do {
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  local_48 = param_4;
  uStack_44 = param_4;
  uStack_40 = param_4;
  uStack_3c = param_4;
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if (lVar4 + 4 < (longlong)(int)uVar2) {
        lVar5 = 0;
        do {
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != 0xc00);
        lVar5 = *param_3;
        lVar3 = -4;
        do {
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
      else {
        lVar5 = *param_3;
      }
      local_58 = &local_48;
      FUN_146d702c2(*param_1 + lVar4 * 0x80,param_2,lVar5 + lVar4 * 0x40,lVar5 + lVar4 * 0x40 + 0x20
                   );
      lVar4 = lVar4 + 1;
      uVar2 = (ulonglong)(int)param_1[1];
    } while (lVar4 < (longlong)uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6effc FUN_146d6effc body=501 status=ok
// SIG undefined FUN_146d6effc(void)

void FUN_146d6effc(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c75f0f4 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar2;
  lVar8 = 0;
  do {
    if (lVar8 < (int)uVar2) {
      lVar9 = 0;
      do {
        lVar9 = lVar9 + 0x40;
      } while (lVar9 != 0xc00);
      lVar9 = -0x20;
      do {
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  local_78 = DAT_14c75f0f0;
  uStack_74 = DAT_14c75f0f0;
  uStack_70 = DAT_14c75f0f0;
  uStack_6c = DAT_14c75f0f0;
  local_68 = param_4;
  uStack_64 = param_4;
  uStack_60 = param_4;
  uStack_5c = param_4;
  if (0 < (int)uVar2) {
    lVar8 = 0;
    do {
      lVar9 = *param_1;
      if (lVar8 + 4 < (longlong)(int)uVar5) {
        lVar6 = 0;
        do {
          lVar6 = lVar6 + 0x40;
        } while (lVar6 != 0xc00);
        lVar6 = *param_3;
        lVar7 = -4;
        do {
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
      else {
        lVar6 = *param_3;
      }
      lVar7 = lVar9 + lVar8 * 0x80;
      pfVar1 = (float *)(lVar9 + 0x40 + lVar8 * 0x80);
      auVar3._4_4_ = -(uint)(0.0 < pfVar1[1]);
      auVar3._0_4_ = -(uint)(0.0 < *pfVar1);
      auVar3._8_4_ = -(uint)(0.0 < pfVar1[2]);
      auVar3._12_4_ = -(uint)(0.0 < pfVar1[3]);
      iVar4 = movmskps((int)lVar9,auVar3);
      local_88 = &local_68;
      if (iVar4 == 0) {
        FUN_146d71228(lVar7,param_2);
      }
      else {
        local_80 = &local_78;
        FUN_146d75072(lVar7,param_2,lVar6 + lVar8 * 0x40,lVar8 * 0x40 + lVar6 + 0x20);
      }
      lVar8 = lVar8 + 1;
      uVar5 = (ulonglong)(int)param_1[1];
    } while (lVar8 < (longlong)uVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6f218 FUN_146d6f218 body=398 status=ok
// SIG undefined FUN_146d6f218(void)

void FUN_146d6f218(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar1;
  lVar4 = 0;
  do {
    if (lVar4 < (int)uVar1) {
      lVar5 = 0;
      do {
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != 0xc00);
      lVar5 = -0x20;
      do {
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  local_48 = param_4;
  uStack_44 = param_4;
  uStack_40 = param_4;
  uStack_3c = param_4;
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if (lVar4 + 4 < (longlong)(int)uVar2) {
        lVar5 = 0;
        do {
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != 0xc00);
        lVar5 = *param_3;
        lVar3 = -4;
        do {
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
      else {
        lVar5 = *param_3;
      }
      local_58 = &local_48;
      FUN_146d71228(*param_1 + lVar4 * 0x80,param_2,lVar5 + lVar4 * 0x40,lVar5 + lVar4 * 0x40 + 0x20
                   );
      lVar4 = lVar4 + 1;
      uVar2 = (ulonglong)(int)param_1[1];
    } while (lVar4 < (longlong)uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


