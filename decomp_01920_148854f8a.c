// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148854f8a FUN_148854f8a body=868 status=ok
// SIG undefined FUN_148854f8a(void)

void FUN_148854f8a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_5;
  FUN_140bbc048(param_1);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x40) - 1U < 0xfffffffe)) {
    plVar1 = *(longlong **)(param_2 + 0xa8);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      if ((plVar1 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar1 + 0x5d8))(), lVar3 != 0)) {
        lVar4 = FUN_1449f3324();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_b8[0] = 0;
          local_90 = 0;
          FUN_1456bb102(local_b8,*(undefined8 *)(lVar3 + 0x3d0));
          FUN_1448729ea(param_1 + 0x50,local_88,local_b8);
          local_e8 = FUN_144a7b41a(local_88,0x3f800000);
          local_d0 = *(undefined8 *)(param_1 + 0x38);
          local_c8 = *(undefined4 *)(param_1 + 0x40);
          local_c0 = 0;
          local_e0 = 0;
          local_f8 = local_f8 & 0xffffffffffffff00;
          local_f0 = 1;
          FUN_140cab31c(lVar3,&local_d0,*(undefined4 *)(param_1 + 0xa0),lVar3 + 0x960);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar2 != (code *)0x0) {
            ppppuVar7 = local_88;
            if (0x18 < local_70) {
              ppppuVar7 = (undefined8 ****)local_88[0];
            }
            (*pcVar2)(ppppuVar7);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(local_88[0]);
          }
          FUN_144a5ac3a(local_b8);
        }
      }
    }
    else if (((plVar1 != (longlong *)0x0) && (lVar3 = FUN_1447210f0(), lVar3 != 0)) &&
            (0 < *(int *)(lVar3 + 0x238))) {
      lVar4 = param_1 + 0x50;
      iVar8 = 0;
      lVar9 = 0;
      do {
        lVar5 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar9);
        if (lVar5 != 0) {
          lVar6 = FUN_1449f3324();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            local_b8[0] = 0;
            local_90 = 0;
            FUN_1456bb102(local_b8,*(undefined8 *)(lVar5 + 0x3d0));
            local_d8 = lVar4;
            FUN_1448729ea(lVar4,local_88);
            local_e8 = FUN_144a7b41a(local_88,0x3f800000);
            local_d0 = *(undefined8 *)(param_1 + 0x38);
            local_c8 = *(undefined4 *)(param_1 + 0x40);
            local_c0 = 0;
            local_e0 = 0;
            local_f8 = local_f8 & 0xffffffffffffff00;
            local_f0 = 1;
            FUN_140cab31c(lVar5,&local_d0,*(undefined4 *)(param_1 + 0xa0),lVar5 + 0x960);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar7 = local_88;
              if (0x18 < local_70) {
                ppppuVar7 = (undefined8 ****)local_88[0];
              }
              (*pcVar2)(ppppuVar7);
            }
            if (0x18 < local_70) {
              FUN_1400020a8(local_88[0]);
            }
            FUN_144a5ac3a(local_b8);
            lVar4 = local_d8;
          }
        }
        lVar9 = lVar9 + 8;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar3 + 0x238));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488552f0 FUN_1488552f0 body=414 status=ok
// SIG undefined FUN_1488552f0(void)

void FUN_1488552f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_140bc0bd4(param_1);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x40) - 1U < 0xfffffffe)) {
    plVar1 = *(longlong **)(param_2 + 0xa8);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x5d8))();
        if (lVar2 != 0) {
          lVar3 = FUN_1449f3324();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            local_50 = *(undefined8 *)(param_1 + 0x38);
            local_48 = *(undefined4 *)(param_1 + 0x40);
            local_40 = 0;
            FUN_140fd0a38(lVar2,&local_50,lVar2 + 0x960,0);
          }
        }
      }
    }
    else if (plVar1 != (longlong *)0x0) {
      lVar2 = FUN_1447210f0();
      if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
        iVar6 = 0;
        lVar3 = 0;
        do {
          lVar4 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar3);
          if (lVar4 != 0) {
            lVar5 = FUN_1449f3324();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              local_50 = *(undefined8 *)(param_1 + 0x38);
              local_48 = *(undefined4 *)(param_1 + 0x40);
              local_40 = 0;
              FUN_140fd0a38(lVar4,&local_50,lVar4 + 0x960,0);
            }
          }
          lVar3 = lVar3 + 8;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar2 + 0x238));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148855490 FUN_148855490 body=41 status=ok
// SIG undefined FUN_148855490(void)

void FUN_148855490(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1488554ba FUN_1488554ba body=140 status=ok
// SIG undefined FUN_1488554ba(void)

undefined8 * FUN_1488554ba(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14b402570;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  *(undefined1 *)(param_1 + 6) = 0;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  memset(param_1 + 0x18,0,0x88);
  *(bool *)(param_1 + 6) = *(float *)(param_2 + 0x1c) <= 0.0 && *(float *)(param_2 + 0x1c) != 0.0;
  return param_1;
}



// FUNCTION 148855546 FUN_148855546 body=182 status=ok
// SIG undefined FUN_148855546(void)

void FUN_148855546(longlong *param_1,float param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  param_1[0xb] = param_1[0x12];
  param_1[9] = param_1[0x10];
  param_1[10] = param_1[0x11];
  param_1[0xc] = param_1[0x13];
  param_1[0xd] = param_1[0x14];
  param_1[0xe] = param_1[0x15];
  *(int *)(param_1 + 0xf) = (int)param_1[0x16];
  lVar1 = param_1[2];
  fVar3 = *(float *)(lVar1 + 0x1c);
  *(float *)((longlong)param_1 + 0x2c) = fVar3;
  fVar2 = 0.0;
  if (0.0 < *(float *)(lVar1 + 0x20)) {
    *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 1;
    *(undefined4 *)(param_1 + 7) = 0;
    fVar3 = *(float *)(lVar1 + 0x1c);
  }
  if (((0.0 < fVar3) && (fVar2 = *(float *)(lVar1 + 0x24), 0.0 < fVar2)) && (fVar2 < param_2)) {
    *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 2;
    fVar2 = *(float *)(lVar1 + 0x1c) - param_2;
    *(float *)((longlong)param_1 + 0x3c) = *(float *)(lVar1 + 0x24) - fVar2;
  }
  (**(code **)(*param_1 + 8))(fVar2,param_2,0x3f800000,param_3,1);
  return;
}



// FUNCTION 148855624 FUN_148855624 body=28 status=ok
// SIG undefined FUN_148855624(void)

void FUN_148855624(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140d2ac68(param_1);
  return;
}



// FUNCTION 148855678 FUN_148855678 body=40 status=ok
// SIG undefined FUN_148855678(void)

undefined8 FUN_148855678(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140a28092(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488556ac FUN_1488556ac body=302 status=ok
// SIG undefined FUN_1488556ac(void)

void FUN_1488556ac(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))();
  lVar2 = plVar4[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar4;
    lVar6 = 0;
    do {
      if ((((*(longlong *)(lVar1 + 8 + lVar6) == param_2) &&
           (0.0 < *(float *)(lVar1 + 0x30 + lVar6))) && (0 < *(int *)(lVar1 + 0x28 + lVar6))) &&
         ((*(char *)(*(longlong *)(lVar1 + lVar6) + 0x60) != '\0' ||
          (0.0001 < *(float *)(lVar1 + 0x10 + lVar6) * *(float *)(lVar1 + 0x18 + lVar6) *
                    *(float *)(lVar1 + 0x1c + lVar6))))) {
        lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
        if (lVar5 == 0) {
          lVar5 = *(longlong *)(lVar1 + lVar6);
        }
        else {
          cVar3 = FUN_144ae5576(lVar5);
          lVar5 = *(longlong *)(lVar1 + lVar6);
          if ((cVar3 != '\0') && (*(char *)(lVar5 + 0xa6) != '\x01')) goto LAB_148855710;
        }
        fVar7 = 1.0;
        if (*(char *)(lVar5 + 0x60) == '\0') {
          fVar7 = *(float *)(lVar1 + 0x10 + lVar6) * *(float *)(lVar1 + 0x18 + lVar6) *
                  *(float *)(lVar1 + 0x1c + lVar6);
        }
        FUN_1405201a0(lVar1 + 0x20 + lVar6,*(undefined4 *)(lVar1 + 0x6c + lVar6),param_3,fVar7);
      }
LAB_148855710:
      lVar6 = lVar6 + 0x78;
    } while ((longlong)(int)lVar2 * 0x78 - lVar6 != 0);
  }
  return;
}



// FUNCTION 1488557da FUN_1488557da body=172 status=ok
// SIG undefined FUN_1488557da(void)

void FUN_1488557da(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))();
  if ((longlong)(int)plVar4[1] != 0) {
    plVar6 = (longlong *)*plVar4;
    plVar5 = plVar6 + (longlong)(int)plVar4[1] * 2;
    do {
      plVar2 = (longlong *)*plVar6;
      plVar3 = (longlong *)plVar6[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      }
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
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5);
  }
  if ((char)param_2 != '\0') {
    FUN_14079e6f9(*plVar4,(int)plVar4[1]);
    *(undefined4 *)(plVar4 + 1) = 0;
    if (*(int *)((longlong)plVar4 + 0xc) != 0) {
      FUN_148858f9e(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 148855886 FUN_148855886 body=89 status=ok
// SIG undefined FUN_148855886(void)

longlong FUN_148855886(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x38;
    do {
      if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2)))) {
        if (plVar2 == (longlong *)0x0) {
          return 0;
        }
        return plVar2[2];
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1488558e0 FUN_1488558e0 body=170 status=ok
// SIG undefined FUN_1488558e0(void)

void FUN_1488558e0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x38;
    do {
      if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2)))) {
        if ((plVar2 != (longlong *)0x0) &&
           (plVar2 = (longlong *)plVar2[2], plVar2 != (longlong *)0x0)) {
          local_28 = *(undefined8 *)(param_5 + 4);
          local_38 = *param_5;
          uStack_34 = param_5[1];
          uStack_30 = param_5[2];
          uStack_2c = param_5[3];
          (**(code **)(*plVar2 + 0xa10))(plVar2,param_4);
        }
        break;
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885598c FUN_14885598c body=162 status=ok
// SIG undefined FUN_14885598c(void)

void FUN_14885598c(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x38;
    do {
      if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2)))) {
        if ((plVar2 != (longlong *)0x0) &&
           (plVar2 = (longlong *)plVar2[2], plVar2 != (longlong *)0x0)) {
          local_38 = *param_5;
          uStack_34 = param_5[1];
          uStack_30 = param_5[2];
          uStack_2c = param_5[3];
          (**(code **)(*plVar2 + 0xa18))(plVar2,param_4);
        }
        break;
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148855a30 FUN_148855a30 body=128 status=ok
// SIG undefined FUN_148855a30(void)

void FUN_148855a30(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x38;
    do {
      if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2)))) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        plVar2 = (longlong *)plVar2[2];
        if (plVar2 == (longlong *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000148855aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xa20))(plVar2,param_4,param_5);
        return;
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148855ab0 FUN_148855ab0 body=123 status=ok
// SIG undefined FUN_148855ab0(void)

void FUN_148855ab0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x38;
    do {
      if (((param_3 != 0) && (*plVar2 == param_3)) || (plVar2[1] == param_2)) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        plVar2 = (longlong *)plVar2[2];
        if (plVar2 == (longlong *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000148855b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xa90))(plVar2,param_4,param_5);
        return;
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148855b2c FUN_148855b2c body=826 status=ok
// SIG undefined FUN_148855b2c(void)

void FUN_148855b2c(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = (**(code **)(*param_1 + 0x20))();
  lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar11 = param_2[1];
  if (lVar11 == 0) {
    uVar10 = FUN_140067708();
    lVar11 = FUN_14477b664(uVar10);
    param_2[1] = lVar11;
  }
  if (param_2[2] == 0) {
    uStack_a0 = (undefined8 *)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
    if ((lVar11 == 0) ||
       (uStack_a0 = (undefined8 *)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0), *param_2 == 0))
    goto LAB_148855b9f;
    plVar1 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_148855b9f;
    }
    uVar10 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar11 = FUN_144aff482(uVar10,param_2);
    param_2[2] = lVar11;
    if (lVar11 == 0) goto LAB_148855b9f;
  }
  uStack_a0 = (undefined8 *)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
  if (lVar8 != 0 || lVar9 != 0) {
    uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
    lVar11 = param_2[1];
    if (lVar11 == 0) {
      lVar11 = FUN_140067708();
    }
    lVar2 = *param_2;
    uVar12 = FUN_14477b664(lVar11);
    uVar4 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar13 = (uint)lVar2 & 0xffff;
    uVar6 = FUN_144a78877(((uint)lVar2 << 0x10 | uVar13) + (int)((ulonglong)lVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4),uVar5 >> 0x10 ^ uVar5);
    iVar7 = FUN_148859424(uVar10,uVar6,param_2);
    uStack_a0 = (undefined8 *)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
    if (iVar7 == -1) {
      FUN_144a6ccf8(&local_60);
      if (lVar9 == 0 || param_3 != '\0') {
        if (lVar8 != 0) {
          lVar11 = *param_2;
          FUN_14477b664(param_2[1]);
          uVar10 = FUN_14477b664();
          lVar2 = param_2[2];
          local_a8 = local_a8 & 0xffffff00;
          uStack_a4 = 0;
          uStack_a0._0_4_ = 0;
          local_98 = lVar11;
          uVar10 = FUN_14477b664(uVar10);
          local_90 = FUN_14477b664(uVar10);
          local_80 = 0;
          local_b0 = 0;
          local_b8 = lVar9;
          local_88 = lVar2;
          FUN_140cb5d65(&local_78,lVar8,&local_a8,param_4);
          local_60 = local_78;
          local_58 = (undefined4)local_70;
          uStack_54 = local_70._4_4_;
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          local_78 = 0;
          local_70 = 0xffffffffffffffff;
          if ((local_80 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_80 + 0x50));
          }
        }
      }
      else {
        lVar11 = *param_2;
        uVar10 = FUN_14477b664(param_2[1]);
        uVar10 = FUN_14477b664(uVar10);
        lVar8 = param_2[2];
        local_a8 = local_a8 & 0xffffff00;
        uStack_a4 = 0;
        uStack_a0._0_4_ = 0;
        local_98 = lVar11;
        uVar10 = FUN_14477b664(uVar10);
        local_90 = FUN_14477b664(uVar10);
        local_80 = 0;
        local_b8 = 0;
        local_88 = lVar8;
        FUN_140b32deb(&local_78,lVar9,&local_a8,0);
        local_60 = local_78;
        local_58 = (undefined4)local_70;
        uStack_54 = local_70._4_4_;
        uStack_50 = uStack_68;
        uStack_4c = uStack_64;
        local_78 = 0;
        local_70 = 0xffffffffffffffff;
        if ((local_80 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_80 + 0x50));
        }
      }
      uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      local_a8 = (uint)param_2;
      uStack_a4 = (undefined4)((ulonglong)param_2 >> 0x20);
      uStack_a0 = &local_60;
      FUN_14885954e(uVar10,&local_78);
    }
  }
LAB_148855b9f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148855e68 FUN_148855e68 body=241 status=ok
// SIG undefined FUN_148855e68(void)

void FUN_148855e68(longlong *param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))();
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    lVar6 = FUN_140067708();
  }
  uVar8 = *param_2;
  uVar7 = FUN_14477b664(lVar6);
  uVar1 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar9 = (uint)uVar8 & 0xffff;
  uVar3 = FUN_144a78877(((uint)uVar8 << 0x10 | uVar9) + (int)((ulonglong)uVar8 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4),uVar2 >> 0x10 ^ uVar2);
  iVar4 = FUN_148859424(plVar5,uVar3,param_2);
  lVar6 = 0;
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x38 + *plVar5;
  }
  if (lVar6 == 0) {
    return;
  }
  if (param_3 == '\0') {
    FUN_14072d42a(lVar6 + 0x18,0);
  }
  uVar8 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_148859afc(uVar8,param_2);
  return;
}



// FUNCTION 148855f62 FUN_148855f62 body=94 status=ok
// SIG undefined FUN_148855f62(void)

void FUN_148855f62(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3[1];
  }
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  FUN_14576fc3a(param_1,&local_20,lVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148855fc2 FUN_148855fc2 body=57 status=ok
// SIG undefined FUN_148855fc2(void)

void FUN_148855fc2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b401600;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 148856034 FUN_148856034 body=40 status=ok
// SIG undefined FUN_148856034(void)

undefined8 FUN_148856034(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140cb9188(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 14885606a FUN_14885606a body=46 status=ok
// SIG undefined FUN_14885606a(void)

void FUN_14885606a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b401660;
  param_1[3] = 0;
  return;
}



// FUNCTION 148856098 FUN_148856098 body=19 status=ok
// SIG undefined FUN_148856098(void)

void FUN_148856098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1488560e4 FUN_1488560e4 body=40 status=ok
// SIG undefined FUN_1488560e4(void)

undefined8 FUN_1488560e4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14585a500(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 14885613e FUN_14885613e body=104 status=ok
// SIG undefined FUN_14885613e(void)

undefined8 FUN_14885613e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  switchD_143c3d4dc::caseD_5b(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14885623c FUN_14885623c body=175 status=ok
// SIG undefined FUN_14885623c(void)

longlong FUN_14885623c(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = 0;
  lVar3 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar3 != 0) {
    lVar4 = FUN_14034b308(lVar3);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else if (*(longlong *)(DAT_14cb0d2b0 + 0x898) != lVar4) {
      return lVar4;
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      if ((lVar4 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0x898) != lVar4)) {
        return lVar4;
      }
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar1);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x7b0))(param_1);
    } while (iVar1 < iVar2);
  }
  return lVar4;
}



// FUNCTION 1488562ec FUN_1488562ec body=87 status=ok
// SIG undefined FUN_1488562ec(void)

ulonglong FUN_1488562ec(longlong param_1)

{
  float fVar1;
  undefined1 auVar3 [16];
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x48) < 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
      auVar3 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
      return auVar3._0_8_;
    }
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x30);
  }
  else {
    fVar1 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) /
            (float)*(int *)(param_1 + 0x48);
    uVar2 = (ulonglong)(uint)fVar1;
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
      auVar3 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),3);
      return auVar3._0_8_;
    }
  }
  return uVar2;
}



// FUNCTION 148856344 FUN_148856344 body=7 status=ok
// SIG undefined FUN_148856344(void)

void FUN_148856344(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x133) = param_2;
  return;
}



// FUNCTION 14885634c FUN_14885634c body=165 status=ok
// SIG undefined FUN_14885634c(void)

void FUN_14885634c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  if (*(int *)(param_1 + 0x48) < 1) {
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) != '\x01')) {
      fVar2 = *(float *)(param_1 + 0x30);
    }
    else {
      auVar3 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
      fVar2 = auVar3._0_4_;
    }
  }
  else {
    fVar2 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) /
            (float)*(int *)(param_1 + 0x48);
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
      auVar3 = roundps(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),3);
      fVar2 = auVar3._0_4_;
    }
  }
  fVar2 = (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) / fVar2;
  iVar1 = (int)ROUND(fVar2 + fVar2 + -0.5) >> 1;
  fVar2 = fVar2 - (float)iVar1;
  FUN_141022e4c(fVar2,iVar1 + -1 + (uint)(0.0001 < fVar2),param_2,param_3);
  return;
}



// FUNCTION 1488563f2 FUN_1488563f2 body=349 status=ok
// SIG undefined FUN_1488563f2(void)

void FUN_1488563f2(longlong param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x48);
  if (0 < iVar3) {
    if (param_3 == '\0') {
      fVar4 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) / (float)iVar3;
      auVar5 = ZEXT416((uint)fVar4);
      if ((*(longlong *)(param_1 + 0x18) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
        auVar5 = roundps(auVar5,ZEXT416((uint)fVar4),3);
      }
      auVar5._0_4_ = auVar5._0_4_ * param_2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(auVar5._0_8_);
    }
    iVar2 = (int)ROUND(param_2 + param_2 + -0.5) >> 1;
    if (0 < iVar2) {
      fVar4 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) / (float)iVar3;
      if ((*(longlong *)(param_1 + 0x18) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
        auVar5 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),3);
        fVar4 = auVar5._0_4_;
      }
      fVar4 = (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) / fVar4;
      iVar3 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
      iVar2 = (iVar3 - iVar2) + (uint)(0.0001 < fVar4 - (float)iVar3);
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      cVar1 = FUN_141022e4c(param_1,iVar3,local_34,local_38);
      if (cVar1 != '\0') {
        FUN_1409d461e(param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885656a FUN_14885656a body=420 status=ok
// SIG undefined FUN_14885656a(void)

void FUN_14885656a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_141238f08();
  if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x2c0) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x2b8) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x2b8) + lVar5) != 0)) {
        if ((*(longlong *)(param_1 + 0xf8) != 0) &&
           (cVar3 = FUN_144729dda(param_1 + 0xf0), cVar3 != '\0')) {
          uVar6 = FUN_141238f08(param_1);
          FUN_14060a688(&local_78,uVar6);
          if (local_70 != (longlong *)0x0) {
            iVar4 = (int)local_70[1];
            goto LAB_148856620;
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x2c0) * 0x10 != lVar5);
  }
  goto LAB_1488565c0;
  while( true ) {
    LOCK();
    iVar2 = (int)local_70[1];
    bVar9 = iVar4 == iVar2;
    if (bVar9) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar2 = iVar4;
    }
    iVar4 = iVar2;
    UNLOCK();
    plVar8 = local_70;
    if (bVar9) break;
LAB_148856620:
    if (iVar4 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar8 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar7 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b4022c0;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4b7ca;
      FUN_14060a5fa(lVar5);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1488565c0:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148856710 FUN_148856710 body=58 status=ok
// SIG undefined FUN_148856710(void)

void FUN_148856710(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x8d) == '\x01') {
      puVar2 = (undefined4 *)(param_1 + 0x30);
    }
    else if (*(char *)(lVar1 + 0x8c) == '\x01') {
      puVar2 = (undefined4 *)(param_1 + 0x24);
    }
    else {
      puVar2 = (undefined4 *)(lVar1 + 0x88);
    }
    FUN_1409d461e(param_1,*puVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 148856752 FUN_148856752 body=83 status=ok
// SIG undefined FUN_148856752(void)

undefined8 * FUN_148856752(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b402570;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 1488567a6 FUN_1488567a6 body=45 status=ok
// SIG undefined FUN_1488567a6(void)

longlong FUN_1488567a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145caefec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148856826 FUN_148856826 body=29 status=ok
// SIG undefined FUN_148856826(void)

undefined8 FUN_148856826(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148856844 FUN_148856844 body=83 status=ok
// SIG undefined FUN_148856844(void)

void FUN_148856844(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9a70;
  uVar2 = (ushort)DAT_14c9a9a70;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9b08 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9a70);
  }
  else {
    (*DAT_14c9a9b08)();
  }
  *(undefined1 *)(param_2 + 4) = 0x13;
  return;
}



// FUNCTION 148856898 FUN_148856898 body=83 status=ok
// SIG undefined FUN_148856898(void)

void FUN_148856898(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9a70;
  uVar2 = (ushort)DAT_14c9a9a70;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9b08 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9a70);
  }
  else {
    (*DAT_14c9a9b08)();
  }
  *(undefined1 *)(param_2 + 4) = 0x13;
  return;
}



// FUNCTION 1488568ec FUN_1488568ec body=81 status=ok
// SIG undefined FUN_1488568ec(void)

void FUN_1488568ec(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 148856954 FUN_148856954 body=283 status=ok
// SIG undefined FUN_148856954(void)

undefined8 FUN_148856954(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 148856a98 FUN_148856a98 body=59 status=ok
// SIG undefined FUN_148856a98(void)

undefined8 FUN_148856a98(longlong *param_1)

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



// FUNCTION 148856b36 FUN_148856b36 body=85 status=ok
// SIG undefined FUN_148856b36(void)

void FUN_148856b36(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148856b8c FUN_148856b8c body=122 status=ok
// SIG undefined FUN_148856b8c(void)

longlong FUN_148856b8c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148856c06(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148856c06 FUN_148856c06 body=411 status=ok
// SIG undefined FUN_148856c06(void)

longlong * FUN_148856c06(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_14575b8c6(param_1,(ulonglong)uVar3);
    lVar14 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar14 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar14) < uVar3) {
      FUN_140f20a84(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar14 = *param_1;
      lVar4 = *param_2;
      lVar17 = 0;
      uVar18 = 0;
      do {
        plVar15 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar15 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar15 + (uVar18 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar18 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar14 + lVar17) = *(undefined4 *)(lVar4 + lVar17);
          *(undefined4 *)(lVar14 + 4 + lVar17) = *(undefined4 *)(lVar4 + 4 + lVar17);
        }
        else {
          puVar16 = (undefined8 *)(lVar17 + lVar14);
          *(undefined4 *)(puVar16 + 1) = *(undefined4 *)((undefined8 *)(lVar4 + lVar17) + 1);
          *puVar16 = *(undefined8 *)(lVar4 + lVar17);
          *(undefined2 *)(puVar16 + 2) = 0;
          *(undefined8 *)((longlong)puVar16 + 0x14) = 0;
          puVar16[4] = 0;
          puVar16[5] = 0;
          *(undefined4 *)(puVar16 + 6) = 0;
          puVar16[7] = 0;
          puVar16[8] = 0;
          *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(lVar4 + 0x18 + lVar17);
          puVar16[2] = *(undefined8 *)(lVar4 + 0x10 + lVar17);
          FUN_1447715ec(lVar14 + 0x20 + lVar17,lVar4 + 0x20 + lVar17);
          puVar1 = (undefined4 *)(lVar4 + 0x48 + lVar17);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined8 *)(lVar4 + 0x58 + lVar17);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          puVar2 = (undefined8 *)(lVar4 + 0x68 + lVar17);
          uVar10 = *puVar2;
          uVar11 = puVar2[1];
          puVar2 = (undefined8 *)(lVar4 + 0x74 + lVar17);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          *(undefined4 *)(puVar16 + 9) = *puVar1;
          *(undefined4 *)((longlong)puVar16 + 0x4c) = uVar5;
          *(undefined4 *)(puVar16 + 10) = uVar6;
          *(undefined4 *)((longlong)puVar16 + 0x54) = uVar7;
          puVar16[0xb] = uVar8;
          puVar16[0xc] = uVar9;
          puVar16[0xd] = uVar10;
          puVar16[0xe] = uVar11;
          *(undefined8 *)((longlong)puVar16 + 0x74) = uVar12;
          *(undefined8 *)((longlong)puVar16 + 0x7c) = uVar13;
          puVar16[0x11] = *(undefined8 *)(lVar4 + 0x88 + lVar17);
        }
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x90;
      } while (uVar3 != uVar18);
    }
  }
  return param_1;
}



// FUNCTION 148856da2 FUN_148856da2 body=105 status=ok
// SIG undefined FUN_148856da2(void)

undefined8 FUN_148856da2(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x50,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x50)) {
    uVar5 = uVar2 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x50,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 148856e0b FUN_148856e0b body=150 status=ok
// SIG undefined FUN_148856e0b(void)

void FUN_148856e0b(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar6);
    *(undefined2 *)puVar1 = 0;
    *(undefined8 *)((longlong)puVar1 + 4) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    lVar2 = param_2 + 0x10 + lVar6;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar2 + -8);
    *puVar1 = *(undefined8 *)(lVar2 + -0x10);
    FUN_1447715ec(puVar1 + 2,lVar2);
    uVar3 = *(undefined4 *)(lVar2 + 0x2c);
    uVar4 = *(undefined4 *)(lVar2 + 0x30);
    uVar5 = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar3;
    *(undefined4 *)(puVar1 + 8) = uVar4;
    *(undefined4 *)((longlong)puVar1 + 0x44) = uVar5;
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(lVar2 + 0x38);
    lVar6 = lVar6 + 0x50;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148856eaa FUN_148856eaa body=31 status=ok
// SIG undefined FUN_148856eaa(void)

undefined8 FUN_148856eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148856ee4 FUN_148856ee4 body=93 status=ok
// SIG undefined FUN_148856ee4(void)

void FUN_148856ee4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148856f42 FUN_148856f42 body=93 status=ok
// SIG undefined FUN_148856f42(void)

void FUN_148856f42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148856fa0 FUN_148856fa0 body=126 status=ok
// SIG undefined FUN_148856fa0(void)

void FUN_148856fa0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401a20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014885700f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14885701e FUN_14885701e body=40 status=ok
// SIG undefined FUN_14885701e(void)

void FUN_14885701e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148857043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148857048 FUN_148857048 body=29 status=ok
// SIG undefined FUN_148857048(void)

undefined8 FUN_148857048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148857066 FUN_148857066 body=114 status=ok
// SIG undefined FUN_148857066(void)

void FUN_148857066(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1488570d8 FUN_1488570d8 body=48 status=ok
// SIG undefined FUN_1488570d8(void)

void FUN_1488570d8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148857108 FUN_148857108 body=40 status=ok
// SIG undefined FUN_148857108(void)

void FUN_148857108(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148857140 FUN_148857140 body=101 status=ok
// SIG undefined FUN_148857140(void)

void FUN_148857140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488571a6 FUN_1488571a6 body=101 status=ok
// SIG undefined FUN_1488571a6(void)

void FUN_1488571a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14885720c FUN_14885720c body=134 status=ok
// SIG undefined FUN_14885720c(void)

void FUN_14885720c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401b10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148857283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488572a2 FUN_1488572a2 body=322 status=ok
// SIG undefined FUN_1488572a2(void)

void FUN_1488572a2(longlong *param_1)

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



// FUNCTION 1488573e6 FUN_1488573e6 body=98 status=ok
// SIG undefined FUN_1488573e6(void)

void FUN_1488573e6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148857448 FUN_148857448 body=45 status=ok
// SIG undefined FUN_148857448(void)

void FUN_148857448(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148857476 FUN_148857476 body=48 status=ok
// SIG undefined FUN_148857476(void)

void FUN_148857476(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1488574a6 FUN_1488574a6 body=116 status=ok
// SIG undefined FUN_1488574a6(void)

void FUN_1488574a6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 14885751a FUN_14885751a body=116 status=ok
// SIG undefined FUN_14885751a(void)

void FUN_14885751a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 14885758e FUN_14885758e body=297 status=ok
// SIG undefined FUN_14885758e(void)

undefined4 *
FUN_14885758e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449c02b2(param_1,local_58);
  FUN_1447a97f4(local_50,*param_4);
  *(undefined8 *)(local_50 + 0x28) = 0;
  *(undefined8 *)(local_50 + 0x30) = 0;
  *(undefined4 *)(local_50 + 0x38) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_144af91b6(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
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
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x50))) {
      param_3 = *(int *)(param_1 + 0x50) - 1U & param_3;
      *(uint *)(local_50 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar5 = param_1 + 0x40;
      }
      *(undefined4 *)(local_50 + 0x38) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar5 = param_1 + 0x40;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x50) = iVar4;
      FUN_1446eb800(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488576b8 FUN_1488576b8 body=122 status=ok
// SIG undefined FUN_1488576b8(void)

void FUN_1488576b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa8 + 4) = uVar5;
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



// FUNCTION 148857732 FUN_148857732 body=147 status=ok
// SIG undefined FUN_148857732(void)

void FUN_148857732(longlong param_1,int param_2)

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



// FUNCTION 1488577c6 FUN_1488577c6 body=119 status=ok
// SIG undefined FUN_1488577c6(void)

void FUN_1488577c6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x28 + (longlong)(int)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x50 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x50 + lVar1),(longlong)iVar3 * 0x50);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14885783e FUN_14885783e body=62 status=ok
// SIG undefined FUN_14885783e(void)

void FUN_14885783e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14885787c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14885787c FUN_14885787c body=112 status=ok
// SIG undefined FUN_14885787c(void)

ulonglong FUN_14885787c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488578b6;
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
LAB_1488578b6:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488578f0 FUN_1488578f0 body=81 status=ok
// SIG undefined FUN_1488578f0(void)

undefined8 FUN_1488578f0(longlong param_1)

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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 148857948 FUN_148857948 body=91 status=ok
// SIG undefined FUN_148857948(void)

bool FUN_148857948(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148857978;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148857978:
  return lVar6 == param_2;
}



// FUNCTION 1488579c0 FUN_1488579c0 body=118 status=ok
// SIG undefined FUN_1488579c0(void)

void FUN_1488579c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401ca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148857a36 FUN_148857a36 body=118 status=ok
// SIG undefined FUN_148857a36(void)

void FUN_148857a36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401ca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148857aac FUN_148857aac body=156 status=ok
// SIG undefined FUN_148857aac(void)

void FUN_148857aac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401ca0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148857b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148857b48 FUN_148857b48 body=98 status=ok
// SIG undefined FUN_148857b48(void)

void FUN_148857b48(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148857b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148857ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148857baa FUN_148857baa body=102 status=ok
// SIG undefined FUN_148857baa(void)

int FUN_148857baa(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x90;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x88 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148857c10 FUN_148857c10 body=388 status=ok
// SIG undefined FUN_148857c10(void)

undefined4 *
FUN_148857c10(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148857d96(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  lVar21 = param_3[1];
  local_48[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_48 = *puVar1;
  FUN_14014e938(local_48 + 4,lVar21);
  uVar17 = *(uint *)(lVar21 + 0x3c);
  uVar18 = *(uint *)(lVar21 + 0x40);
  uVar2 = *(uint *)(lVar21 + 0x44);
  uVar3 = *(uint *)(lVar21 + 0x48);
  uVar4 = *(uint *)(lVar21 + 0x4c);
  uVar5 = *(uint *)(lVar21 + 0x50);
  uVar6 = *(uint *)(lVar21 + 0x54);
  uVar7 = *(uint *)(lVar21 + 0x58);
  uVar8 = *(uint *)(lVar21 + 0x5c);
  uVar9 = *(uint *)(lVar21 + 0x60);
  uVar10 = *(uint *)(lVar21 + 100);
  uVar11 = *(uint *)(lVar21 + 100);
  uVar12 = *(uint *)(lVar21 + 0x68);
  uVar13 = *(uint *)(lVar21 + 0x6c);
  uVar14 = *(uint *)(lVar21 + 0x70);
  local_48[0x12] = *(uint *)(lVar21 + 0x38);
  local_48[0x13] = uVar17;
  local_48[0x14] = uVar18;
  local_48[0x15] = uVar2;
  local_48[0x16] = uVar3;
  local_48[0x17] = uVar4;
  local_48[0x18] = uVar5;
  local_48[0x19] = uVar6;
  local_48[0x1a] = uVar7;
  local_48[0x1b] = uVar8;
  local_48[0x1c] = uVar9;
  local_48[0x1d] = uVar10;
  local_48[0x1d] = uVar11;
  local_48[0x1e] = uVar12;
  local_48[0x1f] = uVar13;
  local_48[0x20] = uVar14;
  local_48[0x22] = 0xffffffff;
  local_54 = local_50[0];
  if (local_48[2] == 0) {
    uVar17 = *local_48;
  }
  else {
    uVar17 = FUN_144a78877(*local_48,local_48[2]);
  }
  local_68 = param_4;
  cVar16 = FUN_148857e84(param_1,uVar17,local_48,&local_54);
  uVar15 = local_54;
  if (cVar16 == '\0') {
    uVar18 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar20 = 1;
    if (3 < uVar18) {
      uVar19 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar21 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar20 <= *(int *)(param_1 + 0x48))) {
      uVar17 = *(int *)(param_1 + 0x48) - 1U & uVar17;
      local_48[0x23] = uVar17;
      lVar21 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar21 = param_1 + 0x38;
      }
      local_48[0x22] =
           *(uint *)(lVar21 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar17) * 4)
      ;
      lVar21 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar21 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar21 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar17) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar20;
      FUN_148857f8e(param_1);
    }
  }
  *param_2 = uVar15;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148857d96 FUN_148857d96 body=238 status=ok
// SIG undefined FUN_148857d96(void)

int * FUN_148857d96(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 148857e84 FUN_148857e84 body=143 status=ok
// SIG undefined FUN_148857e84(void)

void FUN_148857e84(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar3 = FUN_148857baa();
    if (iVar3 != -1) {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x38 + (longlong)iVar3 * 0x90) != 0) {
        FUN_1400020a8();
      }
      memmove((void *)(lVar1 + (longlong)iVar3 * 0x90),param_3,0x88);
      FUN_148857f14(param_1,*param_4);
      *param_4 = iVar3;
      uVar2 = 1;
      goto LAB_148857ea5;
    }
  }
  uVar2 = 0;
LAB_148857ea5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 148857f14 FUN_148857f14 body=122 status=ok
// SIG undefined FUN_148857f14(void)

void FUN_148857f14(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 148857f8e FUN_148857f8e body=469 status=ok
// SIG undefined FUN_148857f8e(void)

void FUN_148857f8e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
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
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
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
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x90);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x90);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0x23] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[0x22] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148858164 FUN_148858164 body=135 status=ok
// SIG undefined FUN_148858164(void)

longlong FUN_148858164(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1488581ec();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_14885819e;
  }
  local_30 = param_3;
  FUN_14885824c(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14885819e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x18 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488581ec FUN_1488581ec body=95 status=ok
// SIG undefined FUN_1488581ec(void)

int FUN_1488581ec(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x18) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x18 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14885824c FUN_14885824c body=282 status=ok
// SIG undefined FUN_14885824c(void)

undefined4 * FUN_14885824c(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148858368(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined2 *)((longlong)local_40 + 0xc) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_14885844e(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148858514(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148858368 FUN_148858368 body=230 status=ok
// SIG undefined FUN_148858368(void)

int * FUN_148858368(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14885844e FUN_14885844e body=84 status=ok
// SIG undefined FUN_14885844e(void)

undefined8 FUN_14885844e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_1488581ec(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_1488584a2(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 1488584a2 FUN_1488584a2 body=114 status=ok
// SIG undefined FUN_1488584a2(void)

void FUN_1488584a2(longlong *param_1,int param_2)

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



// FUNCTION 148858514 FUN_148858514 body=459 status=ok
// SIG undefined FUN_148858514(void)

void FUN_148858514(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
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
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
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
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x18);
        if (piVar2[2] == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,piVar2[2]);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[5] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[4] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488586e0 FUN_1488586e0 body=64 status=ok
// SIG undefined FUN_1488586e0(void)

undefined8 * FUN_1488586e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b401df0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148858724 FUN_148858724 body=81 status=ok
// SIG undefined FUN_148858724(void)

undefined8 FUN_148858724(longlong param_1)

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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 14885877c FUN_14885877c body=89 status=ok
// SIG undefined FUN_14885877c(void)

bool FUN_14885877c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1488587c7;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1488587c7:
  return lVar6 == param_2;
}



// FUNCTION 1488587f2 FUN_1488587f2 body=118 status=ok
// SIG undefined FUN_1488587f2(void)

void FUN_1488587f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401df0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148858868 FUN_148858868 body=118 status=ok
// SIG undefined FUN_148858868(void)

void FUN_148858868(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401df0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488588de FUN_1488588de body=156 status=ok
// SIG undefined FUN_1488588de(void)

void FUN_1488588de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401df0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014885896a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14885897a FUN_14885897a body=94 status=ok
// SIG undefined FUN_14885897a(void)

void FUN_14885897a(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001488589c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488589cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488589d8 FUN_1488589d8 body=93 status=ok
// SIG undefined FUN_1488589d8(void)

ulonglong FUN_1488589d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148858a2a:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148858a2a;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148858a36 FUN_148858a36 body=67 status=ok
// SIG undefined FUN_148858a36(void)

void FUN_148858a36(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14575b8c6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148857f8e(param_1);
    return;
  }
  FUN_148858a7a(param_1);
  FUN_14575b8c6(param_1,0);
  return;
}



// FUNCTION 148858a7a FUN_148858a7a body=329 status=ok
// SIG undefined FUN_148858a7a(void)

void FUN_148858a7a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 148858bc4 FUN_148858bc4 body=51 status=ok
// SIG undefined FUN_148858bc4(void)

void FUN_148858bc4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148858bf8 FUN_148858bf8 body=143 status=ok
// SIG undefined FUN_148858bf8(void)

void FUN_148858bf8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148858c88 FUN_148858c88 body=152 status=ok
// SIG undefined FUN_148858c88(void)

void FUN_148858c88(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = param_2[2];
    if (iVar2 != 0) {
      iVar3 = FUN_144a78877(*param_2,iVar2);
    }
    if (iVar2 == 0) {
      iVar3 = *param_2;
    }
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x90;
        if ((*(int *)(*param_1 + (longlong)iVar3 * 0x90) == *param_2) &&
           (*(int *)(lVar1 + 8) == param_2[2])) {
          FUN_148858d20(param_1);
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x88);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148858d20 FUN_148858d20 body=145 status=ok
// SIG undefined FUN_148858d20(void)

void FUN_148858d20(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x90;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x8c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x88 + lVar6 * 0x90);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x90 + 0x88);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x88);
  if (*(longlong *)(*param_1 + 0x38 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148857f14(param_1,param_2);
  return;
}



// FUNCTION 148858db2 FUN_148858db2 body=144 status=ok
// SIG undefined FUN_148858db2(void)

void FUN_148858db2(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = param_2[2];
    if (iVar2 != 0) {
      iVar3 = FUN_144a78877(*param_2,iVar2);
    }
    if (iVar2 == 0) {
      iVar3 = *param_2;
    }
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar3 * 0x18);
        if ((*piVar1 == *param_2) && (piVar1[2] == param_2[2])) {
          FUN_148858e42(param_1);
          return;
        }
        iVar3 = piVar1[4];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148858e42 FUN_148858e42 body=87 status=ok
// SIG undefined FUN_148858e42(void)

void FUN_148858e42(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1488584a2();
  return;
}



// FUNCTION 148858e9a FUN_148858e9a body=48 status=ok
// SIG undefined FUN_148858e9a(void)

void FUN_148858e9a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb8,8);
  }
  return;
}



// FUNCTION 148858eca FUN_148858eca body=138 status=ok
// SIG undefined FUN_148858eca(void)

void FUN_148858eca(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 148858f54 FUN_148858f54 body=74 status=ok
// SIG undefined FUN_148858f54(void)

void FUN_148858f54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148858f9e FUN_148858f9e body=48 status=ok
// SIG undefined FUN_148858f9e(void)

void FUN_148858f9e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148858fce FUN_148858fce body=68 status=ok
// SIG undefined FUN_148858fce(void)

void FUN_148858fce(longlong param_1,uint param_2)

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
  FUN_145a9cee8(param_1);
  return;
}



// FUNCTION 148859012 FUN_148859012 body=136 status=ok
// SIG undefined FUN_148859012(void)

int FUN_148859012(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_14885909a(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 3) * -0x49249249;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x38;
    } while ((longlong)(int)lVar2 * 0x38 - uVar5 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_1488591ec(param_1,iVar4);
  }
  FUN_14885915a((longlong)iVar4 * 0x38 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 14885909a FUN_14885909a body=191 status=ok
// SIG undefined FUN_14885909a(void)

undefined8 FUN_14885909a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (*param_1 == lVar1) {
    lVar1 = param_2[1];
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((param_1[1] == lVar1) && (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) {
      if ((*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) &&
         (!NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)))) {
        if ((*(float *)((longlong)param_1 + 0x24) == *(float *)((longlong)param_2 + 0x24)) &&
           (!NAN(*(float *)((longlong)param_1 + 0x24)) && !NAN(*(float *)((longlong)param_2 + 0x24))
           )) {
          lVar1 = param_2[5];
          if ((lVar1 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar1);
          }
          if (param_1[5] == lVar1) {
            return CONCAT71((int7)((ulonglong)param_1[6] >> 8),param_1[6] == param_2[6]);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14885915a FUN_14885915a body=146 status=ok
// SIG undefined FUN_14885915a(void)

longlong * FUN_14885915a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  param_1[4] = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar1 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 3) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 1488591ec FUN_1488591ec body=143 status=ok
// SIG undefined FUN_1488591ec(void)

void FUN_1488591ec(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14885927c FUN_14885927c body=277 status=ok
// SIG undefined FUN_14885927c(void)

void FUN_14885927c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_14885909a(lVar2,*param_2);
    iVar8 = 0;
    iVar9 = 0;
    do {
      lVar6 = (longlong)iVar9;
      iVar3 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar7 = lVar6 * 0x38;
      lVar13 = lVar2 + 0x38 + lVar7;
      iVar10 = iVar9;
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar3;
        if (lVar12 <= lVar6) break;
        bVar5 = FUN_14885909a(lVar13,*param_2);
        iVar10 = iVar10 + 1;
        lVar13 = lVar13 + 0x38;
        iVar11 = iVar10;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar8 != iVar9) {
          memmove((void *)((longlong)iVar8 * 0x38 + lVar2),(void *)(lVar7 + lVar2),
                  (longlong)(iVar11 - iVar9) * 0x38);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 148859392 FUN_148859392 body=146 status=ok
// SIG undefined FUN_148859392(void)

longlong * FUN_148859392(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  param_1[4] = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar1 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 3) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 148859424 FUN_148859424 body=296 status=ok
// SIG undefined FUN_148859424(void)

int FUN_148859424(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar7 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x38;
        puVar1 = (undefined8 *)(lVar7 + lVar10);
        if (*(longlong *)(lVar7 + 8 + lVar10) == 0) {
          uVar6 = FUN_140067708();
          uVar6 = FUN_14477b664(uVar6);
          puVar1[1] = uVar6;
        }
        lVar7 = param_3[1];
        if (lVar7 == 0) {
          lVar7 = FUN_140067708();
        }
        uVar6 = *param_3;
        uVar8 = FUN_14477b664(lVar7);
        local_50 = uVar6;
        uVar3 = FUN_144a7891a(uVar8);
        local_58 = *puVar1;
        uVar6 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar6);
        local_60 = &local_50;
        local_68 = uVar8;
        cVar2 = FUN_144a789b8(uVar4,uVar6,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_148859450;
        lVar7 = *param_1;
        iVar9 = *(int *)(lVar7 + 0x30 + lVar10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_148859450:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 14885954e FUN_14885954e body=443 status=ok
// SIG undefined FUN_14885954e(void)

undefined4 * FUN_14885954e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14885970a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1415c5ebe(local_40,*param_3);
  local_40[3] = 0;
  local_40[4] = 0xffffffffffffffff;
  local_40[3] = *puVar1;
  local_40[4] = puVar1[1];
  local_40[5] = puVar1[2];
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  lVar7 = local_40[1];
  if (lVar7 == 0) {
    lVar7 = FUN_140067708();
  }
  uVar2 = *local_40;
  uVar8 = FUN_14477b664(lVar7);
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar5 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4),uVar6 >> 0x10 ^ uVar6);
  cVar4 = FUN_1488597ec(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x34) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1488598d8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885970a FUN_14885970a body=226 status=ok
// SIG undefined FUN_14885970a(void)

int * FUN_14885970a(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1488597ec FUN_1488597ec body=120 status=ok
// SIG undefined FUN_1488597ec(void)

undefined8 FUN_1488597ec(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_148859424(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    *(undefined8 *)(lVar2 + 0x18 + lVar15) = 0;
    *(undefined8 *)(lVar2 + 0x20 + lVar15) = 0xffffffffffffffff;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_148859864(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 148859864 FUN_148859864 body=116 status=ok
// SIG undefined FUN_148859864(void)

void FUN_148859864(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1488598d8 FUN_1488598d8 body=546 status=ok
// SIG undefined FUN_1488598d8(void)

void FUN_1488598d8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
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
  uVar4 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
  if (uVar4 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
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
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar10 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar2 = *local_80;
        lVar6 = *(longlong *)(lVar2 + 8 + (longlong)iVar10 * 0x38);
        if (lVar6 == 0) {
          lVar6 = FUN_140067708();
        }
        puVar12 = (undefined8 *)(lVar2 + (longlong)iVar10 * 0x38);
        uVar3 = *puVar12;
        uVar7 = FUN_14477b664(lVar6);
        uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar9 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar11 = (uint)uVar3 & 0xffff;
        iVar5 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar9 >> 0x10 ^ uVar9
                             );
        uVar7 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar7;
        *(int *)((longlong)puVar12 + 0x34) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar12 + 6) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar10 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148859afc FUN_148859afc body=429 status=ok
// SIG undefined FUN_148859afc(void)

void FUN_148859afc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar8 = param_2[1];
    if (lVar8 == 0) {
      lVar8 = FUN_140067708();
    }
    uVar10 = *param_2;
    uVar9 = FUN_14477b664(lVar8);
    uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = (uint)((ulonglong)uVar10 >> 0x10);
    uVar13 = (uint)uVar10 & 0xffff;
    iVar5 = FUN_144a78877(((uint)uVar10 << 0x10 | uVar13) + (int)((ulonglong)uVar10 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4),uVar4 >> 0x10 ^ uVar4);
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar12 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x38);
        if (*(longlong *)(*param_1 + 8 + (longlong)iVar5 * 0x38) == 0) {
          uVar10 = FUN_140067708();
          uVar10 = FUN_14477b664(uVar10);
          puVar1[1] = uVar10;
        }
        lVar8 = param_2[1];
        if (lVar8 == 0) {
          lVar8 = FUN_140067708();
        }
        uVar10 = *param_2;
        uVar11 = FUN_14477b664(lVar8);
        local_50 = uVar10;
        uVar6 = FUN_144a7891a(uVar11);
        local_58 = *puVar1;
        uVar10 = puVar1[1];
        uVar7 = FUN_144a7891a(uVar10);
        local_60 = &local_50;
        local_68 = uVar11;
        cVar2 = FUN_144a789b8(uVar7,uVar10,&local_58,uVar6);
        if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
        iVar5 = *(int *)(puVar1 + 6);
      } while (iVar5 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148859d36 FUN_148859d36 body=81 status=ok
// SIG undefined FUN_148859d36(void)

undefined8 FUN_148859d36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 148859d8e FUN_148859d8e body=89 status=ok
// SIG undefined FUN_148859d8e(void)

bool FUN_148859d8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148859dd9;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148859dd9:
  return lVar6 == param_2;
}



// FUNCTION 148859e10 FUN_148859e10 body=126 status=ok
// SIG undefined FUN_148859e10(void)

void FUN_148859e10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b401ed0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b401e60;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148859e8e FUN_148859e8e body=164 status=ok
// SIG undefined FUN_148859e8e(void)

void FUN_148859e8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b401ed0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148859f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148859f32 FUN_148859f32 body=126 status=ok
// SIG undefined FUN_148859f32(void)

void FUN_148859f32(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148859f68;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148859f68:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar7,param_2,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148859fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148859fb8 FUN_148859fb8 body=81 status=ok
// SIG undefined FUN_148859fb8(void)

undefined8 FUN_148859fb8(longlong param_1)

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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 14885a010 FUN_14885a010 body=89 status=ok
// SIG undefined FUN_14885a010(void)

bool FUN_14885a010(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14885a05b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14885a05b:
  return lVar6 == param_2;
}



// FUNCTION 14885a086 FUN_14885a086 body=118 status=ok
// SIG undefined FUN_14885a086(void)

void FUN_14885a086(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b402090;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14885a0fc FUN_14885a0fc body=156 status=ok
// SIG undefined FUN_14885a0fc(void)

void FUN_14885a0fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b402090;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014885a188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14885a198 FUN_14885a198 body=104 status=ok
// SIG undefined FUN_14885a198(void)

void FUN_14885a198(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014885a1e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014885a1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14885a200 FUN_14885a200 body=48 status=ok
// SIG undefined FUN_14885a200(void)

void FUN_14885a200(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,0x10);
  }
  return;
}



// FUNCTION 14885a230 FUN_14885a230 body=660 status=ok
// SIG undefined FUN_14885a230(void)

void FUN_14885a230(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [200];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x00014885a281:
    do {
      iVar2 = iVar4 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar1 = iVar4 * 2 + 2;
        if ((iVar1 < (int)param_2) &&
           (*(byte *)((longlong)param_1 + (longlong)iVar1 * 0xc0 + 0x5c) <=
            *(byte *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x5c))) {
          iVar2 = iVar1;
        }
        if (*(byte *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x5c) <
            *(byte *)((longlong)param_1 + (longlong)iVar4 * 0xc0 + 0x5c)) {
          pvVar6 = (void *)((longlong)iVar4 * 0xc0 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar2 * 0xc0 + (longlong)param_1);
          memcpy(local_108,pvVar6,0xc0);
          memcpy(pvVar6,pvVar5,0xc0);
          memcpy(pvVar5,local_108,0xc0);
          iVar4 = iVar2;
          goto joined_r0x00014885a281;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0xc0 + (longlong)param_1);
      memcpy(local_108,param_1,0xc0);
      memcpy(param_1,pvVar5,0xc0);
      memcpy(pvVar5,local_108,0xc0);
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar2 = 1;
          iVar3 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar1 = iVar2;
            if (((longlong)iVar4 < (longlong)uVar7) &&
               (*(byte *)((longlong)param_1 + (longlong)iVar4 * 0xc0 + 0x5c) <=
                *(byte *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x5c))) {
              iVar1 = iVar4;
            }
            if (*(byte *)((longlong)param_1 + (longlong)iVar3 * 0xc0 + 0x5c) <=
                *(byte *)((longlong)param_1 + (longlong)iVar1 * 0xc0 + 0x5c)) break;
            pvVar6 = (void *)((longlong)iVar3 * 0xc0 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar1 * 0xc0 + (longlong)param_1);
            memcpy(local_108,pvVar6,0xc0);
            memcpy(pvVar6,pvVar5,0xc0);
            memcpy(pvVar5,local_108,0xc0);
            iVar4 = iVar1 * 2;
            iVar2 = iVar1 * 2 + 1;
            iVar3 = iVar1;
          } while ((longlong)iVar2 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0xc0 + (longlong)param_1);
          memcpy(local_108,param_1,0xc0);
          memcpy(param_1,pvVar5,0xc0);
          memcpy(pvVar5,local_108,0xc0);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885a4c6 FUN_14885a4c6 body=31 status=ok
// SIG undefined FUN_14885a4c6(void)

undefined8 FUN_14885a4c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14885a4fa FUN_14885a4fa body=85 status=ok
// SIG undefined FUN_14885a4fa(void)

void FUN_14885a4fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b402380;
  return;
}



// FUNCTION 14885a550 FUN_14885a550 body=118 status=ok
// SIG undefined FUN_14885a550(void)

void FUN_14885a550(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b402380;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014885a5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14885a5c6 FUN_14885a5c6 body=105 status=ok
// SIG undefined FUN_14885a5c6(void)

undefined8 FUN_14885a5c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146157f1c(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885a630 FUN_14885a630 body=45 status=ok
// SIG undefined FUN_14885a630(void)

longlong FUN_14885a630(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145afb778(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14885a664 FUN_14885a664 body=54 status=ok
// SIG undefined FUN_14885a664(void)

longlong FUN_14885a664(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14885a69a FUN_14885a69a body=48 status=ok
// SIG undefined FUN_14885a69a(void)

void FUN_14885a69a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14885a6ca FUN_14885a6ca body=229 status=ok
// SIG undefined FUN_14885a6ca(void)

ulonglong FUN_14885a6ca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447262c2(param_3);
  uVar6 = FUN_140414d56(param_1 + 8);
  FUN_143d46eb0(&local_38,uVar6,uVar5);
  if (local_30 != (longlong *)0x0) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_30;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_38 != 0);
      if (local_38 != 0) {
        uVar10 = FUN_144a7b41a(param_4,0);
        FUN_1409d461e(local_38,uVar10,1);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_14885a78d;
    }
  }
  uVar7 = 0;
LAB_14885a78d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14885a7b0 FUN_14885a7b0 body=203 status=ok
// SIG undefined FUN_14885a7b0(void)

ulonglong FUN_14885a7b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447262c2(param_3);
  uVar6 = FUN_140414d56(param_1 + 8);
  FUN_143d46eb0(&local_28,uVar6,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      uVar8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_28 != 0);
      if (local_28 != 0) {
        FUN_148856710(local_28,1);
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
      goto LAB_14885a85c;
    }
  }
  uVar8 = 0;
LAB_14885a85c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14885a87c FUN_14885a87c body=377 status=ok
// SIG undefined FUN_14885a87c(void)

undefined8
FUN_14885a87c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,float param_6)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_1447262c2(param_4);
  uVar7 = FUN_140414d56(param_1 + 8);
  FUN_143d46eb0(&local_50,uVar7,uVar6);
  if (local_48 != (longlong *)0x0) {
    iVar5 = (int)local_48[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_48[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_48 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = local_48;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_50 != 0) {
        fVar3 = *(float *)(local_50 + 200);
        switch(param_5) {
        case 0:
          param_6 = (float)(-(uint)(param_6 < 0.0) & (uint)(1.0 / (1.0 - param_6)) |
                           ~-(uint)(param_6 < 0.0) & (uint)(param_6 + 1.0)) * fVar3;
          break;
        case 1:
        case 2:
          param_6 = param_6 + fVar3;
          break;
        case 3:
          param_6 = param_6 * fVar3;
        }
        FUN_1409d461e(local_50,param_6,1);
        FUN_14162be86(param_2,1);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (local_50 != 0) goto LAB_14885a989;
    }
  }
  FUN_14162be86(param_2,0);
LAB_14885a989:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885a9f6 FUN_14885a9f6 body=124 status=ok
// SIG undefined FUN_14885a9f6(void)

undefined8 *
FUN_14885a9f6(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  }
  else {
    *param_2 = *param_5;
  }
  return param_2;
}



// FUNCTION 14885aa72 FUN_14885aa72 body=370 status=ok
// SIG undefined FUN_14885aa72(void)

void FUN_14885aa72(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = local_58;
  if (0x32 < DAT_14cb7d6b8 - DAT_14cb7d6e4) {
    local_30 = 0x100000000;
    local_28 = &DAT_14cb7d6c0;
    local_20 = 0xffffffff;
    local_18 = 0;
    if (DAT_14cb7d6d8 != 0) {
      FUN_1449c0562(&local_30);
    }
    local_68 = local_30;
    local_60 = local_28;
    local_58 = local_20;
    uVar1 = local_58;
    local_50 = local_18;
    local_4c = local_14;
    local_70 = &DAT_14cb7d6b0;
    local_48 = &DAT_14cb7d6b0;
    local_40 = &DAT_14cb7d6b0;
    local_38 = 0;
    local_58._4_4_ = (int)((ulonglong)local_20 >> 0x20);
    if (local_58._4_4_ < *(int *)(local_28 + 0x18)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar1;
      do {
        cVar2 = FUN_144729dda((longlong)iVar3 * 0x20 + *local_70);
        if (cVar2 == '\0') {
          FUN_14886449c(local_48,local_58._4_4_);
          local_38 = CONCAT11(local_38._1_1_,1);
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar3 = local_58._4_4_;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x18));
      uVar1 = local_58;
      if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
        FUN_148864458(local_40,*(int *)(local_40 + 1) - *(int *)((longlong)local_40 + 0x34));
        uVar1 = local_58;
      }
    }
  }
  local_58 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885abf2 FUN_14885abf2 body=129 status=ok
// SIG undefined FUN_14885abf2(void)

void FUN_14885abf2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = param_1 + 0x28;
    cVar4 = FUN_144729dda(lVar1);
    if (cVar4 != '\0') {
      lVar6 = FUN_14479d2ce(lVar1);
      uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar6 + 0x178) == '\x03');
      goto LAB_14885ac2c;
    }
  }
  uVar5 = 0;
LAB_14885ac2c:
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + lVar6);
      if (lVar3 != 0) {
        FUN_148856344(lVar3,uVar5 & 0xffffffff);
        if ((char)uVar5 != '\0') {
          FUN_14115e90a(*(undefined8 *)(lVar1 + lVar6),0);
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 14885ac74 FUN_14885ac74 body=1318 status=ok
// SIG undefined FUN_14885ac74(void)

void FUN_14885ac74(longlong param_1,longlong param_2,longlong *param_3)

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
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  wchar_t wVar21;
  bool bVar22;
  undefined1 auStack_188 [32];
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
  undefined8 *local_118;
  undefined8 uStack_110;
  byte local_101;
  undefined8 *local_100 [2];
  ulonglong local_f0;
  
  lVar14 = DAT_14cb7d718;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar16 = (longlong)(int)param_3[1];
  if (lVar16 != 0) {
    lVar20 = 0;
    do {
      lVar12 = *(longlong *)(*param_3 + lVar20);
      if (lVar12 == DAT_14cb7d710) break;
      bVar22 = lVar16 * 8 + -8 != lVar20;
      lVar20 = lVar20 + 8;
    } while (bVar22);
    lVar20 = 0;
    do {
      lVar13 = *(longlong *)(*param_3 + lVar20);
      if (lVar13 == DAT_14cb7d718) goto LAB_14885ad57;
      lVar20 = lVar20 + 8;
    } while (lVar16 * 8 != lVar20);
    if (lVar12 == DAT_14cb7d710) {
LAB_14885ad57:
      param_2 = param_2 + 0xa8;
      local_118 = (undefined8 *)((ulonglong)local_118 & 0xffffffff00000000);
      FUN_140056680(local_100,L"Resources");
      FUN_147d8f316(param_2,local_100,&local_118);
      if (local_100[0] != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (lVar13 == lVar14) {
        local_118 = (undefined8 *)((ulonglong)local_118 & 0xffffffff00000000);
        FUN_140056680(local_100,
                      L"Value, Min/Max Value, Consumption, Active Regen, Idle Regen, Idle Regen Delay, Depleted Idle Regen Delay, Passive Regen, Passive Missing % Regen Delay"
                     );
        FUN_147d8f316(param_2,local_100,&local_118);
        if (local_100[0] != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      iVar11 = *(int *)(param_1 + 0x20);
      if ((longlong)iVar11 != 0) {
        lVar16 = *(longlong *)(param_1 + 0x18);
        lVar20 = 0;
        do {
          lVar12 = *(longlong *)(lVar16 + lVar20);
          if ((lVar12 == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) {
            FUN_140056680(local_100,L"     {c:r}INVALID{c}");
LAB_14885af78:
            FUN_1470e5e3a(param_2,local_100);
            puVar19 = local_100[0];
          }
          else {
            cVar15 = FUN_140280f4a(lVar12,&local_101);
            wVar21 = L'w';
            if (cVar15 != '\0') {
              pwVar17 = L"white";
              if ((ulonglong)local_101 < 4) {
                pwVar17 = (wchar_t *)(&PTR_DAT_14b4040c8)[local_101];
              }
              wVar21 = *pwVar17;
            }
            if (lVar13 == lVar14) {
              lVar12 = *(longlong *)(lVar16 + lVar20);
              fVar1 = *(float *)(lVar12 + 0x6c);
              fVar2 = *(float *)(lVar12 + 0x60);
              fVar3 = *(float *)(lVar12 + 0x54);
              fVar4 = *(float *)(lVar12 + 0x30);
              fVar5 = *(float *)(lVar12 + 0x24);
              fVar6 = *(float *)(lVar12 + 200);
              fVar7 = *(float *)(lVar12 + 0xa8);
              fVar8 = *(float *)(lVar12 + 0x90);
              fVar9 = *(float *)(lVar12 + 0x84);
              fVar10 = *(float *)(lVar12 + 0x78);
              if (*(longlong *)(lVar12 + 0x18) == 0) {
                local_140 = (double)fVar1;
                local_148 = (double)fVar2;
                local_150 = (double)fVar3;
                pwVar17 = 
                L"     %s : {c:%c}%f{c} [{c:b}%.2f{c}/{c:r}%.2f{c}] {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c}"
                ;
                local_168 = (double)fVar6;
                local_160 = (double)fVar5;
                local_158 = (double)fVar4;
                local_138 = (double)fVar10;
                local_130 = (double)fVar9;
                local_128 = (double)fVar8;
                local_120 = (double)fVar7;
LAB_14885b10b:
                FUN_140002266(local_100,pwVar17,L"UNKNOWN/INVALID RESOURCE",wVar21);
                goto LAB_14885af78;
              }
              puVar18 = *(undefined4 **)(*(longlong *)(lVar12 + 0x18) + 8);
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = &DAT_14c9485f0;
              }
              local_118 = (undefined8 *)0x0;
              uStack_110 = 0;
              FUN_1400b2348(puVar18,&local_118,1);
              puVar19 = (undefined8 *)&DAT_149dfb77a;
              if ((int)uStack_110 != 0) {
                puVar19 = local_118;
              }
              local_140 = (double)fVar1;
              local_148 = (double)fVar2;
              local_150 = (double)fVar3;
              pwVar17 = 
              L"     %s : {c:%c}%f{c} [{c:b}%.2f{c}/{c:r}%.2f{c}] {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c} {c:g}%.2f{c}"
              ;
              local_168 = (double)fVar6;
              local_160 = (double)fVar5;
              local_158 = (double)fVar4;
              local_138 = (double)fVar10;
              local_130 = (double)fVar9;
              local_128 = (double)fVar8;
              local_120 = (double)fVar7;
            }
            else {
              lVar12 = *(longlong *)(lVar16 + lVar20);
              fVar1 = *(float *)(lVar12 + 0x30);
              fVar2 = *(float *)(lVar12 + 0x24);
              fVar3 = *(float *)(lVar12 + 200);
              if (*(longlong *)(lVar12 + 0x18) == 0) {
                pwVar17 = L"     %s : {c:%c}%f{c} [{c:b}%.2f{c}/{c:r}%.2f{c}]";
                local_168 = (double)fVar3;
                local_160 = (double)fVar2;
                local_158 = (double)fVar1;
                goto LAB_14885b10b;
              }
              puVar18 = *(undefined4 **)(*(longlong *)(lVar12 + 0x18) + 8);
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = &DAT_14c9485f0;
              }
              local_118 = (undefined8 *)0x0;
              uStack_110 = 0;
              FUN_1400b2348(puVar18,&local_118,1);
              puVar19 = (undefined8 *)&DAT_149dfb77a;
              if ((int)uStack_110 != 0) {
                puVar19 = local_118;
              }
              pwVar17 = L"     %s : {c:%c}%f{c} [{c:b}%.2f{c}/{c:r}%.2f{c}]";
              local_168 = (double)fVar3;
              local_160 = (double)fVar2;
              local_158 = (double)fVar1;
            }
            FUN_140002266(local_100,pwVar17,puVar19,wVar21);
            FUN_1470e5e3a(param_2,local_100);
            puVar19 = local_118;
            if (local_100[0] != (undefined8 *)0x0) {
              FUN_1400020a8();
              puVar19 = local_118;
            }
          }
          if (puVar19 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          lVar20 = lVar20 + 0x10;
        } while ((longlong)iVar11 * 0x10 != lVar20);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885b19c FUN_14885b19c body=196 status=ok
// SIG undefined FUN_14885b19c(void)

undefined8 FUN_14885b19c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  
  cVar4 = FUN_14008e13a();
  if (cVar4 != '\0') {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    lVar7 = (ulonglong)*(byte *)(param_1 + 0x1c) * 0x10;
    plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 8 + lVar7);
    if (plVar2 != (longlong *)0x0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar7);
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      iVar5 = (int)plVar2[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar5 == 0) break;
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = plVar2;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (lVar6 == 0 || plVar8 == (longlong *)0x0) {
        if (plVar8 == (longlong *)0x0) goto LAB_14885b249;
      }
      else {
        unaff_XMM7_Da = *(undefined4 *)(lVar6 + 200);
        unaff_XMM7_Db = 0;
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (lVar6 != 0) goto LAB_14885b24c;
    }
  }
LAB_14885b249:
  unaff_XMM7_Da = (int)param_2;
  unaff_XMM7_Db = (int)((ulonglong)param_2 >> 0x20);
LAB_14885b24c:
  return CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
}



// FUNCTION 14885b260 FUN_14885b260 body=367 status=ok
// SIG undefined FUN_14885b260(void)

longlong FUN_14885b260(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f83604(param_2,&local_30);
  if (local_30 == 0) {
    uVar8 = FUN_1447262c2(param_2);
    uVar9 = FUN_140414d56(param_1 + 0x10);
    FUN_140414de2(&local_40,uVar9,uVar8);
    plVar2 = local_28;
    if (local_38 == (longlong *)0x0) {
LAB_14885b2fe:
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)local_38[1];
      do {
        if (iVar7 == 0) goto LAB_14885b2fe;
        LOCK();
        iVar5 = (int)local_38[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(local_38 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
        plVar11 = local_38;
      } while (!bVar12);
    }
    local_30 = 0;
    if (plVar11 != (longlong *)0x0) {
      local_30 = local_40;
    }
    if (plVar11 == local_28) {
      plVar6 = local_28;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar7 = *piVar3;
          UNLOCK();
          plVar2 = plVar11;
          goto joined_r0x00014885b356;
        }
      }
    }
    else {
      plVar6 = plVar11;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          puVar4 = (undefined8 *)*local_28;
          local_28 = plVar11;
          (*(code *)*puVar4)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar7 = *piVar3;
          UNLOCK();
joined_r0x00014885b356:
          plVar6 = local_28;
          if (iVar7 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            plVar6 = local_28;
          }
        }
      }
    }
    local_28 = plVar6;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (local_30 != 0) goto LAB_14885b294;
  }
  else {
LAB_14885b294:
    if (*(char *)(param_1 + 8) == '\x0e') {
      lVar10 = local_30 + 0x44;
      goto LAB_14885b387;
    }
    if (*(char *)(param_1 + 8) == '\r') {
      lVar10 = local_30 + 0xb0;
      goto LAB_14885b387;
    }
  }
  lVar10 = 0;
LAB_14885b387:
  plVar2 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_28 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885b3d0 FUN_14885b3d0 body=99 status=ok
// SIG undefined FUN_14885b3d0(void)

undefined8 FUN_14885b3d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((byte)(*(char *)(param_1 + 8) - 0xfU) < 0xfe) {
    lVar1 = FUN_1457d5f3e();
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_144a7ecd0(param_4);
    FUN_1417398ea(lVar1,uVar2);
  }
  else {
    lVar1 = FUN_14885b260(param_1,param_3);
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_1405d5f74(param_4);
    FUN_14119f284(lVar1,uVar2);
  }
  return 1;
}



// FUNCTION 14885b438 FUN_14885b438 body=145 status=ok
// SIG undefined FUN_14885b438(void)

undefined8
FUN_14885b438(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
  if ((byte)(*(char *)(param_1 + 8) - 0xfU) < 0xfe) {
    lVar1 = FUN_1457d5f3e();
    if (lVar1 != 0) {
      FUN_1402a4426(lVar1,param_2,uVar2 & 0xffffffff,param_6,param_7);
      return param_2;
    }
  }
  else {
    lVar1 = FUN_14885b260(param_1,param_4);
    if (lVar1 != 0) {
      FUN_140c416bc(lVar1,param_2,uVar2 & 0xffffffff,param_6,param_7);
      return param_2;
    }
  }
  FUN_14162be86(param_2,0);
  return param_2;
}



// FUNCTION 14885b4ca FUN_14885b4ca body=165 status=ok
// SIG undefined FUN_14885b4ca(void)

undefined8 *
FUN_14885b4ca(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6);
  if ((byte)(*(char *)(param_1 + 8) - 0xfU) < 0xfe) {
    lVar1 = FUN_1457d5f3e();
    if (lVar1 != 0) {
      FUN_140cda184(lVar1,param_2,param_5,uVar2 & 0xffffffff,param_7,param_8);
      return param_2;
    }
  }
  else {
    lVar1 = FUN_14885b260(param_1,param_4);
    if (lVar1 != 0) {
      FUN_1470b0d80(lVar1,param_2,param_5,uVar2 & 0xffffffff,param_7,param_8);
      return param_2;
    }
  }
  *param_2 = *param_5;
  return param_2;
}



// FUNCTION 14885b570 FUN_14885b570 body=193 status=ok
// SIG undefined FUN_14885b570(void)

undefined8 *
FUN_14885b570(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_140f83604(param_4,&local_40);
  if (local_40 != 0) {
    uVar3 = *(undefined4 *)(local_40 + 200);
    if (DAT_14c9a85d0 != (code *)0x0) {
      (*DAT_14c9a85d0)(param_2);
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
    }
    *(undefined2 *)(param_2 + 3) = 4;
    *(undefined4 *)param_2 = uVar3;
    *(undefined1 *)(param_2 + 4) = 3;
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885b632 FUN_14885b632 body=147 status=ok
// SIG undefined FUN_14885b632(void)

bool FUN_14885b632(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f83604(param_3,&local_28);
  if (local_28 != 0) {
    uVar3 = FUN_144a7b41a(param_4,0);
    FUN_1409d461e(local_28,uVar3,1);
  }
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



// FUNCTION 14885b6c6 FUN_14885b6c6 body=129 status=ok
// SIG undefined FUN_14885b6c6(void)

bool FUN_14885b6c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f83604(param_3,&local_28);
  if (local_28 != 0) {
    FUN_148856710(local_28,1);
  }
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



// FUNCTION 14885b748 FUN_14885b748 body=281 status=ok
// SIG undefined FUN_14885b748(void)

undefined8
FUN_14885b748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,float param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f83604(param_4,&local_30);
  if (local_30 != 0) {
    fVar3 = *(float *)(local_30 + 200);
    switch(param_5) {
    case 0:
      param_6 = (float)(-(uint)(param_6 < 0.0) & (uint)(1.0 / (1.0 - param_6)) |
                       ~-(uint)(param_6 < 0.0) & (uint)(param_6 + 1.0)) * fVar3;
      break;
    case 1:
    case 2:
      param_6 = param_6 + fVar3;
      break;
    case 3:
      param_6 = param_6 * fVar3;
    }
    FUN_1409d461e(local_30,param_6,1);
    FUN_14162be86(param_2,1);
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
    FUN_14162be86(param_2,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885b862 FUN_14885b862 body=124 status=ok
// SIG undefined FUN_14885b862(void)

undefined8 *
FUN_14885b862(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  }
  else {
    *param_2 = *param_5;
  }
  return param_2;
}



// FUNCTION 14885b92e FUN_14885b92e body=133 status=ok
// SIG undefined FUN_14885b92e(void)

undefined8 FUN_14885b92e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"CosmeticChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885b9b4 FUN_14885b9b4 body=32 status=ok
// SIG undefined FUN_14885b9b4(void)

void FUN_14885b9b4(undefined8 param_1,undefined4 param_2)

{
  FUN_145d28452();
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 14885b9d4 FUN_14885b9d4 body=275 status=ok
// SIG undefined FUN_14885b9d4(void)

void FUN_14885b9d4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  FUN_1434a87a2();
  uVar10 = (ulonglong)*(int *)(param_1 + 0x88);
  if (0 < (longlong)uVar10) {
    plVar3 = (longlong *)(param_1 + 0x80);
    lVar9 = uVar10 * 0x18 + -8;
    do {
      lVar5 = *plVar3;
      if ((*(int *)(lVar5 + -0x10 + lVar9) <= param_2) &&
         (param_2 <= *(int *)(lVar5 + -0xc + lVar9))) {
        uVar6 = *(undefined8 *)(lVar5 + -8 + lVar9);
        plVar7 = *(longlong **)(lVar5 + lVar9);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        FUN_14587477e(plVar3,(int)uVar10 + -1);
        FUN_1458746d0(plVar3);
        iVar4 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar4 + 1U) {
          FUN_140587152((longlong *)(param_1 + 0x70),iVar4);
        }
        lVar5 = *(longlong *)(param_1 + 0x70);
        *(undefined8 *)(lVar5 + (longlong)iVar4 * 0x10) = uVar6;
        *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
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
      }
      lVar9 = lVar9 + -0x18;
      bVar8 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar8);
  }
  return;
}



// FUNCTION 14885bae8 FUN_14885bae8 body=67 status=ok
// SIG undefined FUN_14885bae8(void)

void FUN_14885bae8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14885bb2b();
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  *(longlong **)(param_1 + 0x1e0) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00014885bb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a0))(plVar1);
  return;
}



// FUNCTION 14885bb2b FUN_14885bb2b body=175 status=ok
// SIG undefined FUN_14885bb2b(void)

undefined8 FUN_14885bb2b(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459877d2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885bbdc FUN_14885bbdc body=23 status=ok
// SIG undefined FUN_14885bbdc(void)

bool FUN_14885bbdc(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x498))();
  return bVar1 < 3;
}



// FUNCTION 14885bbf4 FUN_14885bbf4 body=23 status=ok
// SIG undefined FUN_14885bbf4(void)

bool FUN_14885bbf4(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  return cVar1 == '\x03';
}



// FUNCTION 14885bc0c FUN_14885bc0c body=177 status=ok
// SIG undefined FUN_14885bc0c(void)

void FUN_14885bc0c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x308) != 0) && (*(longlong *)(param_1 + 0x310) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x310) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x308);
    local_20 = *(longlong *)(param_1 + 0x310);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885bcce FUN_14885bcce body=54 status=ok
// SIG undefined FUN_14885bcce(void)

void FUN_14885bcce(longlong *param_1)

{
  byte bVar1;
  
  if ((char)param_1[0x5b] == '\x01') {
    bVar1 = (**(code **)(*param_1 + 0x498))();
    if (5 < bVar1) {
      FUN_1457cd276(param_1,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14885bd16 FUN_14885bd16 body=47 status=ok
// SIG undefined FUN_14885bd16(void)

void FUN_14885bd16(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x4e8))(param_1,0);
  FUN_1457cd276(param_1,0,1);
  return;
}



// FUNCTION 14885bd50 FUN_14885bd50 body=828 status=ok
// SIG undefined FUN_14885bd50(void)

longlong * FUN_14885bd50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  int iVar10;
  int *piVar11;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  int local_170;
  undefined4 local_164;
  wchar_t *local_160;
  undefined4 *local_158;
  ulonglong *local_150;
  char local_148;
  wchar_t local_140 [10];
  undefined4 local_12c;
  wchar_t awStack_128 [6];
  undefined4 local_11c [55];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_1[6] == 0) || (lVar1 = *(longlong *)(param_1[6] + 0x360), lVar1 == 0)) {
    pwVar9 = L"Unable to resolve the World.";
    goto LAB_14885bdab;
  }
  iVar3 = FUN_14490d72a(lVar1);
  if (iVar3 == 3) {
    pwVar9 = L"UGbxGameInstance::SpawnPlayerBot() may not be called on clients.";
    goto LAB_14885bdab;
  }
  uVar4 = FUN_144a7e210();
  lVar5 = FUN_144a78ede(param_1,uVar4);
  if (lVar5 == 0) {
    lVar5 = DAT_14cb0d2b0;
  }
  if ((((lVar5 == 0) || (lVar7 = *(longlong *)(lVar5 + 400), lVar7 == 0)) ||
      (lVar6 = FUN_1449db7f2(), lVar6 == 0)) ||
     (((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) || (*(longlong *)(lVar5 + 400) == 0)))) {
    pwVar9 = L"Unable to resolve the Engine->LocalPlayerClass.";
    goto LAB_14885bdab;
  }
  if ((*(longlong *)(lVar1 + 0x170) == 0) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x170) + 1000), lVar7 == 0)) {
    iVar3 = 1;
    if (param_1[6] != 0) {
      lVar7 = *(longlong *)(param_1[6] + 0x2a0);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      else if (lVar7 == 0) goto LAB_14885bea9;
      piVar11 = (int *)(lVar7 + 0x68);
      goto LAB_14885bea1;
    }
LAB_14885bea9:
    iVar10 = 0;
    do {
      lVar7 = FUN_140cb3e38(param_1,iVar10);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(lVar5 + 400);
        if ((((lVar7 == 0) || (lVar6 = FUN_1449db7f2(), lVar6 == 0)) ||
            (*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(lVar5 + 400);
        }
        local_188 = 0;
        uStack_180 = 0;
        local_190 = 0;
        local_198 = 0;
        plVar8 = (longlong *)FUN_1463ca98b(lVar5,uVar4,0,0);
        if (plVar8 == (longlong *)0x0) {
          pwVar9 = L"Failed to create a ULocalPlayer";
          goto LAB_14885bdab;
        }
        *(byte *)(plVar8 + 0x56) = *(byte *)(param_2 + 0x18) ^ 1;
        FUN_140adf126(&local_164,iVar10);
        iVar3 = (**(code **)(*param_1 + 0x328))(param_1,plVar8,local_164);
        if (iVar3 == -1) {
          pwVar9 = L"AddLocalPlayer() failed";
          goto LAB_14885bdab;
        }
        local_160 = local_140;
        local_148 = '\0';
        local_150 = &local_40;
        builtin_wcsncpy(local_140,L"?PlayAsBot",10);
        local_158 = &local_12c;
        if (*(longlong *)(param_2 + 0x10) != 0) {
          local_12c._0_2_ = L'?';
          local_12c._2_2_ = L'P';
          builtin_wcsncpy(awStack_128,L"layAs=",6);
          local_158 = local_11c;
          FUN_1400021e4(param_2 + 0x10,&local_178);
          iVar3 = local_170 + -1;
          if (local_170 == 0) {
            iVar3 = 0;
          }
          FUN_1449668a2(&local_160,local_178,iVar3);
          if (local_178 != 0) {
            FUN_1400020a8();
          }
        }
        *(undefined2 *)local_158 = 0;
        FUN_140056680(&local_178,local_160);
        cVar2 = (**(code **)(*plVar8 + 0x2f8))(plVar8,&local_178,param_2,lVar1);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x338))(param_1,plVar8);
          plVar8 = (longlong *)0x0;
        }
        if (local_148 == '\x01') {
          FUN_1400020a8(local_160);
        }
        goto LAB_14885bdb6;
      }
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  else {
    piVar11 = (int *)(lVar7 + 0x394);
LAB_14885bea1:
    iVar3 = *piVar11;
    if (0 < iVar3) goto LAB_14885bea9;
  }
  pwVar9 = L"No ControllerId is available.";
LAB_14885bdab:
  FUN_14020fad6(param_2,pwVar9);
  plVar8 = (longlong *)0x0;
LAB_14885bdb6:
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 14885c08e FUN_14885c08e body=220 status=ok
// SIG undefined FUN_14885c08e(void)

void FUN_14885c08e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  
  pwVar3 = L"Unable to resolve the World.";
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 == 0)) {
LAB_14885c0cc:
    FUN_14020fad6(param_2,pwVar3);
    return;
  }
  iVar1 = FUN_14490d72a(lVar2,L"Unable to resolve the World.");
  if (iVar1 == 3) {
    pwVar3 = L"UGbxGameInstance::SpawnPlayerBots() may not be called on clients.";
    goto LAB_14885c0cc;
  }
  if ((*(longlong *)(lVar2 + 0x170) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x170) + 1000), lVar2 == 0)) {
    iVar1 = 1;
    if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_14885c131;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_14885c131;
    piVar5 = (int *)(lVar2 + 0x68);
  }
  else {
    piVar5 = (int *)(lVar2 + 0x394);
  }
  iVar1 = *piVar5;
  if (iVar1 < 1) {
    return;
  }
LAB_14885c131:
  iVar4 = 0;
  do {
    lVar2 = FUN_140cb3e38(param_1,iVar4);
    if (lVar2 == 0) {
      FUN_14885bd50(param_1,param_2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar1 != iVar4);
  return;
}



// FUNCTION 14885c16a FUN_14885c16a body=23 status=ok
// SIG undefined FUN_14885c16a(void)

bool FUN_14885c16a(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x498))();
  return 4 < bVar1;
}



// FUNCTION 14885c182 FUN_14885c182 body=32 status=ok
// SIG undefined FUN_14885c182(void)

undefined8 FUN_14885c182(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14885c1a2 FUN_14885c1a2 body=91 status=ok
// SIG undefined FUN_14885c1a2(void)

void FUN_14885c1a2(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  if ((param_3 == 3) && (lVar2 == param_2)) {
    iVar1 = FUN_14490d72a(param_2);
    if ((iVar1 != 3) &&
       ((*(longlong *)(param_1 + 0x1e0) != 0 &&
        (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x68), lVar2 != 0)))) {
      FUN_1488c245c(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 14885c1fe FUN_14885c1fe body=50 status=ok
// SIG undefined FUN_14885c1fe(void)

undefined8 * FUN_14885c1fe(undefined8 *param_1)

{
  FUN_1457860f6();
  param_1[1] = &DAT_14cb7db80;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b16a860;
  return param_1;
}



// FUNCTION 14885c230 FUN_14885c230 body=209 status=ok
// SIG undefined FUN_14885c230(void)

longlong * FUN_14885c230(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68((longlong)
                        (int)(-*(int *)((longlong)param_2 + 0x5c) &
                             ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U));
  (**(code **)(*param_2 + 0x2e8))(param_2,lVar3,1);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b403ea0;
  plVar4[2] = lVar3;
  FUN_1447715ec(lVar3 + 0x3c0,param_3);
  FUN_1414cfad4(lVar3);
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar4;
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
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14885c301 FUN_14885c301 body=185 status=ok
// SIG undefined FUN_14885c301(void)

undefined8 FUN_14885c301(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885c3bc FUN_14885c3bc body=215 status=ok
// SIG undefined FUN_14885c3bc(void)

undefined8 * FUN_14885c3bc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x688) != *(int *)(param_1 + 0x6b4)) {
    lVar2 = *param_3;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x6b8;
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x6c0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x6c8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x680) + (longlong)iVar4 * 0x48);
        if (*plVar1 == lVar2) {
          if (plVar1 != (longlong *)&DAT_fffffffffffffff8 && plVar1 != (longlong *)0x0) {
            FUN_14034cca6(param_2);
            return param_2;
          }
          break;
        }
        iVar4 = (int)plVar1[8];
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14885c494 FUN_14885c494 body=112 status=ok
// SIG undefined FUN_14885c494(void)

ulonglong FUN_14885c494(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (((char)param_1[4] == '\x01') &&
     ((lVar2 = (**(code **)(*param_1 + 8))(param_1), lVar2 == 0 ||
      (cVar1 = FUN_144b23dda(lVar2), cVar1 == '\0')))) {
LAB_14885c4f8:
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)(int)param_1[6] != 0) {
      plVar5 = (longlong *)param_1[5];
      lVar2 = (longlong)(int)param_1[6] << 5;
      do {
        lVar3 = (**(code **)(*plVar5 + 8))(plVar5);
        if ((lVar3 == 0) || (cVar1 = FUN_144b23dda(lVar3), cVar1 == '\0')) goto LAB_14885c4f8;
        plVar5 = plVar5 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14885c504 FUN_14885c504 body=78 status=ok
// SIG undefined FUN_14885c504(void)

void FUN_14885c504(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_14885e4fe(param_1,param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (longlong)*(int *)(param_1 + 0x30) << 5;
    do {
      FUN_14885e4fe(lVar2,param_2);
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14885c552 FUN_14885c552 body=144 status=ok
// SIG undefined FUN_14885c552(void)

void FUN_14885c552(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14885c494(param_1 + 0x5f8);
  if (cVar1 != '\0') {
    FUN_14885c5f2(param_1 + 0x5f8);
    local_20 = DAT_14cb7d9c8;
    FUN_1400bc8c2(param_1 + 0x518);
    *(uint *)(param_1 + 0x438) =
         *(uint *)(param_1 + 0x438) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x518);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885c5f2 FUN_14885c5f2 body=127 status=ok
// SIG undefined FUN_14885c5f2(void)

void FUN_14885c5f2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[4] == '\x01') {
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    if ((lVar1 != 0) && (param_1[1] != 0)) {
      FUN_140ccfb62(lVar1);
      param_1[1] = 0;
    }
  }
  if ((longlong)(int)param_1[6] != 0) {
    plVar3 = (longlong *)param_1[5];
    lVar1 = (longlong)(int)param_1[6] << 5;
    do {
      lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      if ((lVar2 != 0) && (plVar3[1] != 0)) {
        FUN_140ccfb62(lVar2);
        plVar3[1] = 0;
      }
      plVar3 = plVar3 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14885c672 FUN_14885c672 body=244 status=ok
// SIG undefined FUN_14885c672(void)

undefined8 FUN_14885c672(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4038a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b403830;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_143d511d4;
  FUN_148865c78(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885c768 FUN_14885c768 body=105 status=ok
// SIG undefined FUN_14885c768(void)

ulonglong FUN_14885c768(longlong param_1)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,local_40,2);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),local_38 != 0);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885c7d2 FUN_14885c7d2 body=80 status=ok
// SIG undefined FUN_14885c7d2(void)

void FUN_14885c7d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014885c817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14885c822 FUN_14885c822 body=7 status=ok
// SIG undefined FUN_14885c822(void)

undefined1 FUN_14885c822(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



// FUNCTION 14885c82a FUN_14885c82a body=9 status=ok
// SIG undefined FUN_14885c82a(void)

longlong FUN_14885c82a(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) + 0x28;
}



// FUNCTION 14885c834 FUN_14885c834 body=84 status=ok
// SIG undefined FUN_14885c834(void)

void FUN_14885c834(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0(param_2);
  if ((lVar2 != 0) && (cVar1 = FUN_1407579fa(lVar2), cVar1 != '\0')) {
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x39a) & 8) != 0)) {
    return;
  }
  FUN_147aa6256(param_1,param_2,param_3);
  return;
}



// FUNCTION 14885c88c FUN_14885c88c body=169 status=ok
// SIG undefined FUN_14885c88c(void)

void FUN_14885c88c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x998))(0,&local_38);
  lVar1 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar4) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(lVar1 + 8 + lVar4);
      }
      (**(code **)(*plVar2 + 0x98))();
      lVar4 = lVar4 + 0x10;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_1447f69b6(param_1 + 0x8f);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885c936 FUN_14885c936 body=361 status=ok
// SIG undefined FUN_14885c936(void)

void FUN_14885c936(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = FUN_1447210f0();
  FUN_14886614c(local_88);
  lVar5 = local_60;
  lVar4 = local_78;
  LOCK();
  *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
  UNLOCK();
  plVar8 = local_80;
  do {
    if (plVar8 == local_68) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
      UNLOCK();
      if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar7 = plVar8[2];
    if ((((((*(byte *)(lVar7 + 0x7d) & 0x40) != 0) &&
          (lVar2 = *(longlong *)(lVar7 + 0x250), lVar2 != 0)) &&
         ((*(byte *)(lVar2 + 0x65) & 2) == 0)) &&
        (((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0 && (*(longlong *)(lVar7 + 600) != 0)))) &&
       ((*(longlong **)(lVar7 + 0x260) != (longlong *)0x0 &&
        (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0x260) + 0x40))(), cVar6 == '\0')))) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14886620c(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar3 = *(longlong *)(lVar7 + 600);
      *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = lVar3;
      local_90 = param_2;
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c();
      }
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = *(undefined8 *)(lVar7 + 0x260);
      param_2 = local_90;
    }
    do {
      plVar8 = (longlong *)*plVar8;
      if (plVar8 == (longlong *)0x0) break;
      lVar7 = FUN_14187c43e(plVar8[2]);
    } while (lVar7 != *local_70);
  } while( true );
}



// FUNCTION 14885caa0 FUN_14885caa0 body=152 status=ok
// SIG undefined FUN_14885caa0(void)

bool FUN_14885caa0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  lVar1 = FUN_14611d89c(0,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    puVar2 = &DAT_14c846480;
    if (*(longlong *)(lVar1 + 0x1c8) != 0) {
      puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1c8) + 0x240);
    }
    (**(code **)(*param_1 + 0x7b0))(param_1,param_2,puVar2);
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885cb3a FUN_14885cb3a body=126 status=ok
// SIG undefined FUN_14885cb3a(void)

void FUN_14885cb3a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147aa5f94();
  iVar1 = *(int *)(param_1 + 0x658);
  local_30 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x650);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_143d551c0(&local_30);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885cbba FUN_14885cbba body=126 status=ok
// SIG undefined FUN_14885cbba(void)

void FUN_14885cbba(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147aa6000();
  iVar1 = *(int *)(param_1 + 0x658);
  local_30 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x650);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_143d551f6(&local_30);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885cc3a FUN_14885cc3a body=258 status=ok
// SIG undefined FUN_14885cc3a(void)

void FUN_14885cc3a(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a();
  if ((longlong)*(int *)(param_1 + 0x550) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x548);
    lVar4 = (longlong)*(int *)(param_1 + 0x550) << 3;
    uVar3 = 0;
    do {
      cVar1 = FUN_148866318(lVar5,&local_48);
      if (cVar1 != '\0') {
        if ((-1 < (int)uVar3) && (iVar2 = *(int *)(param_1 + 0x550), (int)uVar3 < iVar2)) {
          if (iVar2 - 1U != uVar3) {
            memmove((void *)(*(longlong *)(param_1 + 0x548) + (ulonglong)(uVar3 & 0x7fffffff) * 8),
                    (void *)(*(longlong *)(param_1 + 0x548) + (ulonglong)(uVar3 & 0x7fffffff) * 8 +
                            8),(longlong)(int)((iVar2 - 1U) - uVar3) << 3);
            iVar2 = *(int *)(param_1 + 0x550);
          }
          *(int *)(param_1 + 0x550) = iVar2 + -1;
          FUN_14886634e(param_1 + 0x548);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
        break;
      }
      lVar5 = lVar5 + 8;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885cd5a FUN_14885cd5a body=149 status=ok
// SIG undefined FUN_14885cd5a(void)

longlong * FUN_14885cd5a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x550) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x548);
    lVar4 = (longlong)*(int *)(param_1 + 0x550) << 3;
    do {
      plVar2 = (longlong *)FUN_14479d2ce(lVar3);
      if ((plVar2[0x79] == *param_2) && ((short)plVar2[0x7c] == (short)param_2[1])) {
        if (plVar2 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar2 + 0x650))(plVar2);
          if (cVar1 != '\0') {
            plVar2 = (longlong *)0x0;
          }
          return plVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  plVar2 = (longlong *)FUN_143d5141c(param_1,param_2);
  return plVar2;
}



// FUNCTION 14885cdf0 FUN_14885cdf0 body=116 status=ok
// SIG undefined FUN_14885cdf0(void)

void FUN_14885cdf0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_38 = *param_3;
  local_30 = 0xffff;
  local_28 = 0;
  FUN_1487c4e72(param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885ce7a FUN_14885ce7a body=148 status=ok
// SIG undefined FUN_14885ce7a(void)

void FUN_14885ce7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  short local_58;
  longlong local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14000bbd8(local_48,param_3,0);
  FUN_140640824(&local_60,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (((local_60 != 0) && (-1 < local_58)) && (local_50 != 0)) {
    FUN_143d5180c(param_1,param_2,&local_60);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885cf1a FUN_14885cf1a body=47 status=ok
// SIG undefined FUN_14885cf1a(void)

void FUN_14885cf1a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (0 < param_2) {
    *(int *)((longlong)param_1 + 0x6dc) = param_2;
    *(undefined1 *)(param_1 + 0xdc) = 1;
    FUN_145727f64();
    return;
  }
  if ((char)param_1[0xdc] == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
    FUN_145727f64();
    return;
  }
  iVar2 = FUN_14487fd02();
  if (iVar2 != 3) {
    lVar1 = param_1[0xda];
    if ((char)param_1[0xdc] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6dc);
      uVar3 = 0;
    }
    else if ((char)param_1[0xdd] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6e4);
      uVar3 = 1;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
      uVar3 = 2;
    }
    *(undefined4 *)((longlong)param_1 + 0x6d4) = uVar3;
    iVar4 = 1;
    if (1 < iVar2) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0xda) = iVar4;
    if ((int)lVar1 != iVar4) {
      FUN_1401861f4(param_1 + 0xde);
    }
    lVar1 = param_1[0xdb];
    iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
    *(int *)(param_1 + 0xdb) = iVar2;
    if ((int)lVar1 != iVar2) {
      FUN_1401861f4(param_1 + 0xe1,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14885cf4a FUN_14885cf4a body=25 status=ok
// SIG undefined FUN_14885cf4a(void)

void FUN_14885cf4a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((char)param_1[0xdc] == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
    FUN_145727f64();
    return;
  }
  iVar2 = FUN_14487fd02();
  if (iVar2 != 3) {
    lVar1 = param_1[0xda];
    if ((char)param_1[0xdc] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6dc);
      uVar3 = 0;
    }
    else if ((char)param_1[0xdd] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6e4);
      uVar3 = 1;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
      uVar3 = 2;
    }
    *(undefined4 *)((longlong)param_1 + 0x6d4) = uVar3;
    iVar4 = 1;
    if (1 < iVar2) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0xda) = iVar4;
    if ((int)lVar1 != iVar4) {
      FUN_1401861f4(param_1 + 0xde);
    }
    lVar1 = param_1[0xdb];
    iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
    *(int *)(param_1 + 0xdb) = iVar2;
    if ((int)lVar1 != iVar2) {
      FUN_1401861f4(param_1 + 0xe1,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14885cf64 FUN_14885cf64 body=25 status=ok
// SIG undefined FUN_14885cf64(void)

void FUN_14885cf64(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((char)param_1[0xdd] == '\x01') {
    *(undefined1 *)(param_1 + 0xdd) = 0;
    FUN_145727f64();
    return;
  }
  iVar2 = FUN_14487fd02();
  if (iVar2 != 3) {
    lVar1 = param_1[0xda];
    if ((char)param_1[0xdc] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6dc);
      uVar3 = 0;
    }
    else if ((char)param_1[0xdd] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6e4);
      uVar3 = 1;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
      uVar3 = 2;
    }
    *(undefined4 *)((longlong)param_1 + 0x6d4) = uVar3;
    iVar4 = 1;
    if (1 < iVar2) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0xda) = iVar4;
    if ((int)lVar1 != iVar4) {
      FUN_1401861f4(param_1 + 0xde);
    }
    lVar1 = param_1[0xdb];
    iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
    *(int *)(param_1 + 0xdb) = iVar2;
    if ((int)lVar1 != iVar2) {
      FUN_1401861f4(param_1 + 0xe1,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14885cf8a FUN_14885cf8a body=686 status=ok
// SIG undefined FUN_14885cf8a(void)

longlong * FUN_14885cf8a(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x3f0),&DAT_14cb7d9d8);
  }
  pbVar1 = (byte *)*puVar2;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (lVar5 = *(longlong *)(pbVar1 + 8), lVar5 == 0)) {
    *param_2 = 0;
    goto LAB_14885cfd4;
  }
  FUN_1400b22c2(&local_118,lVar5);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_90 = local_118;
  local_88 = local_110 + -1;
  if (local_110 == 0) {
    local_88 = 0;
  }
  FUN_14475bf92();
  if (local_118 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14050fd64();
  plVar4 = (longlong *)FUN_145d0c2fa(uVar3);
  local_138 = CONCAT31(local_138._1_3_,1);
  (**(code **)(*plVar4 + 0x98))(plVar4,&local_90,&local_108,0);
  if ((local_90 == (undefined2 *)0x0) || (local_80 == 0)) {
    FUN_1400b22c2(&local_118,lVar5);
    FUN_1400020e8(&local_118,&DAT_14a18491c,2);
    puVar8 = local_118;
    if (local_110 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    uVar3 = FUN_1446f8646();
    local_120 = 0;
    local_130 = 0;
    local_128 = 1;
    local_138 = 0;
    lVar5 = FUN_1412ecd05(uVar3,0,puVar8,0);
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    lVar5 = FUN_147019d90(&local_90,0);
  }
  if (lVar5 == 0) {
LAB_14885d163:
    *param_2 = 0;
  }
  else {
    lVar6 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) {
      lVar6 = FUN_141225fe0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         ((((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30 ||
            (lVar6 = *(longlong *)(lVar5 + 0x30), lVar6 == 0)) ||
           (lVar7 = FUN_1446f8646(), lVar7 == 0)) ||
          ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)))))) goto LAB_14885d163;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      *param_2 = lVar5;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) goto LAB_14885d19e;
    }
    else {
      *param_2 = lVar5;
      if (DAT_14c950c29 == '\x01') {
LAB_14885d19e:
        FUN_1456cec3c(lVar5);
      }
    }
  }
  FUN_14128b0c2(&local_90);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_14885cfd4:
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14885d23a FUN_14885d23a body=686 status=ok
// SIG undefined FUN_14885d23a(void)

longlong * FUN_14885d23a(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x3f0),&DAT_14cb7d9e0);
  }
  pbVar1 = (byte *)*puVar2;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (lVar5 = *(longlong *)(pbVar1 + 8), lVar5 == 0)) {
    *param_2 = 0;
    goto LAB_14885d284;
  }
  FUN_1400b22c2(&local_118,lVar5);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_90 = local_118;
  local_88 = local_110 + -1;
  if (local_110 == 0) {
    local_88 = 0;
  }
  FUN_14475bf92();
  if (local_118 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14050fd64();
  plVar4 = (longlong *)FUN_145d0c2fa(uVar3);
  local_138 = CONCAT31(local_138._1_3_,1);
  (**(code **)(*plVar4 + 0x98))(plVar4,&local_90,&local_108,0);
  if ((local_90 == (undefined2 *)0x0) || (local_80 == 0)) {
    FUN_1400b22c2(&local_118,lVar5);
    FUN_1400020e8(&local_118,&DAT_14a18491c,2);
    puVar8 = local_118;
    if (local_110 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    uVar3 = FUN_1446f8646();
    local_120 = 0;
    local_130 = 0;
    local_128 = 1;
    local_138 = 0;
    lVar5 = FUN_1412ecd05(uVar3,0,puVar8,0);
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    lVar5 = FUN_147019d90(&local_90,0);
  }
  if (lVar5 == 0) {
LAB_14885d413:
    *param_2 = 0;
  }
  else {
    lVar6 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) {
      lVar6 = FUN_141225fe0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         ((((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30 ||
            (lVar6 = *(longlong *)(lVar5 + 0x30), lVar6 == 0)) ||
           (lVar7 = FUN_1446f8646(), lVar7 == 0)) ||
          ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)))))) goto LAB_14885d413;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      *param_2 = lVar5;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) goto LAB_14885d44e;
    }
    else {
      *param_2 = lVar5;
      if (DAT_14c950c29 == '\x01') {
LAB_14885d44e:
        FUN_1456cec3c(lVar5);
      }
    }
  }
  FUN_14128b0c2(&local_90);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_14885d284:
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14885d4ea FUN_14885d4ea body=358 status=ok
// SIG undefined FUN_14885d4ea(void)

void FUN_14885d4ea(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uVar8 = FUN_1464d63cc();
  FUN_140005cc6(param_1,&local_58,uVar8,0);
  uVar8 = FUN_1400014c6(&local_58);
  lVar6 = local_58;
  local_70 = 0;
  if (local_58 != 0) {
    uVar9 = FUN_1464d63cc();
    cVar7 = FUN_1448093f4(lVar6,uVar9);
    if (cVar7 == '\0') {
      local_70 = 0;
    }
    else {
      local_70 = local_58;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        local_68 = plStack_50;
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        bVar4 = false;
        goto LAB_14885d59a;
      }
    }
  }
  local_68 = (longlong *)0x0;
  bVar4 = true;
LAB_14885d59a:
  plVar5 = local_68;
  local_60 = 0;
  FUN_14485c47a(&local_60,uVar8);
  FUN_14029d0b6(param_2,&local_70);
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885d652 thunk_FUN_145eb783c body=5 status=ok
// SIG undefined thunk_FUN_145eb783c(void)

ulonglong thunk_FUN_145eb783c(undefined8 *param_1,longlong *param_2)

{
  short *psVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  void *pvStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  void *pvStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pvStack_38 = (void *)0x0;
  uStack_30 = 0;
  psVar1 = (short *)*param_2;
  if (*psVar1 == 0x22) {
    uVar4 = 0;
    lVar3 = FUN_1401e9420(psVar1,&pvStack_38,0);
    if (lVar3 == 0) goto LAB_145eb791a;
    FUN_140db34f4(&pvStack_38,0x22,0);
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x24) != 0) {
      FUN_1446dda88(param_1 + 3,0);
    }
  }
  else {
    FUN_14020fad6(&pvStack_38,psVar1);
    iVar2 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar2 = 0;
    }
    *param_2 = *param_2 + (longlong)iVar2 * 2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_1446dda88(param_1 + 3,0);
  }
  _Src = pvStack_38;
  pvStack_48 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_30;
  iStack_40 = (int)uStack_30;
  if (lVar3 == 0) {
    uStack_3c = 0;
    _Size = 0;
  }
  else {
    FUN_1446dd670(&pvStack_48,uStack_30 & 0xffffffff,0);
    _Size = lVar3 * 2;
    memcpy(pvStack_48,_Src,_Size);
  }
  FUN_140001510(param_1,&pvStack_48,0);
  uVar4 = CONCAT71((int7)(_Size >> 8),1);
LAB_145eb791a:
  if (pvStack_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885d658 thunk_FUN_14686d3dc body=5 status=ok
// SIG undefined thunk_FUN_14686d3dc(void)

undefined8 thunk_FUN_14686d3dc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong lStack_38;
  undefined8 uStack_30;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400020e8(param_2,&DAT_149e01f5a,1);
  lStack_38 = 0;
  uStack_30 = 0;
  FUN_1400b2348(param_1,&lStack_38,1);
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,lStack_38,iVar1);
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,&DAT_149e01f5a,1);
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885d65e FUN_14885d65e body=199 status=ok
// SIG undefined FUN_14885d65e(void)

bool FUN_14885d65e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892c04;
  if (uVar1 == uVar2) {
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_14041e7fb(param_3,&local_70);
    local_78 = local_70;
    FUN_1446dcdd4(local_58);
    FUN_1404e49fa(param_1,local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1 == uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885d74e FUN_14885d74e body=95 status=ok
// SIG undefined FUN_14885d74e(void)

undefined8 * FUN_14885d74e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb7dae0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b16b260;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}



// FUNCTION 14885d7ae FUN_14885d7ae body=44 status=ok
// SIG undefined FUN_14885d7ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14885d7ae(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7daec = _DAT_14cb7daec + -1;
  *param_1 = DAT_14cb7dae0;
  DAT_14cb7dae0 = param_1;
  return;
}



// FUNCTION 14885d7da FUN_14885d7da body=87 status=ok
// SIG undefined FUN_14885d7da(void)

void FUN_14885d7da(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b16b260;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 14885d832 FUN_14885d832 body=22 status=ok
// SIG undefined FUN_14885d832(void)

undefined8 FUN_14885d832(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb7da78;
  if (DAT_14cb7da78 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb7da78 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb7da78 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb7da78[0x3a] <= *(int *)((longlong)DAT_14cb7da78 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb7da78 + 0x300))(DAT_14cb7da78);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14885d848 FUN_14885d848 body=73 status=ok
// SIG undefined FUN_14885d848(void)

void FUN_14885d848(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14885d892();
  if (lVar1 != 0) {
    FUN_14885d902(lVar1,param_2,param_3);
  }
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_3);
  return;
}



// FUNCTION 14885d892 FUN_14885d892 body=111 status=ok
// SIG undefined FUN_14885d892(void)

longlong FUN_14885d892(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x180))(), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x170) != 0)) {
    lVar3 = FUN_1411531be();
    lVar2 = *(longlong *)(lVar2 + 0x170);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14885d902 FUN_14885d902 body=77 status=ok
// SIG undefined FUN_14885d902(void)

void FUN_14885d902(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_14885e900();
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar4 = 0;
    do {
      FUN_14885e97e(*(undefined8 *)(lVar1 + lVar4),param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14885d950 FUN_14885d950 body=164 status=ok
// SIG undefined FUN_14885d950(void)

void FUN_14885d950(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14885d892();
  if (lVar1 != 0) {
    FUN_14885d9f4(lVar1,param_2,param_3,param_4,param_5);
  }
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_3);
  *param_4 = &DAT_14a171d50;
  *(undefined4 *)(param_4 + 3) = 0;
  if (*(int *)((longlong)param_4 + 0x1c) != 0) {
    FUN_140115c12(param_4 + 2,0);
  }
  param_4[1] = 0;
  if (param_4[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14885d9f4 FUN_14885d9f4 body=217 status=ok
// SIG undefined FUN_14885d9f4(void)

void FUN_14885d9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined **local_68 [4];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = FUN_14586a292();
  FUN_1406022be(local_68,param_4);
  local_68[0] = &PTR_FUN_14b16b1f0;
  local_48 = param_5;
  FUN_148866c3e(param_1,&local_88,&local_70);
  lVar1 = local_88;
  lVar2 = (longlong)(int)uStack_80;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_14885e97e(*(undefined8 *)(lVar1 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885dace FUN_14885dace body=147 status=ok
// SIG undefined FUN_14885dace(void)

void FUN_14885dace(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14885d892();
  if (lVar1 != 0) {
    local_38 = FUN_14586a292();
    local_30 = param_4;
    uVar2 = FUN_148866a1a(lVar1);
    FUN_14885e97e(uVar2,param_2,param_3);
  }
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14063a322(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885db62 FUN_14885db62 body=109 status=ok
// SIG undefined FUN_14885db62(void)

void FUN_14885db62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = FUN_14586a292();
  local_30 = *param_4;
  uVar1 = FUN_148866a1a(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14885e97e(uVar1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885dbd0 FUN_14885dbd0 body=139 status=ok
// SIG undefined FUN_14885dbd0(void)

void FUN_14885dbd0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_14885d892();
  if (lVar1 == 0) goto LAB_14885dbee;
  lVar3 = *param_4;
  if (lVar3 == 0) {
LAB_14885dc48:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_14586a292();
    if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_14885dc48;
    lVar3 = *param_4;
  }
  FUN_14885dc5c(lVar1,param_2,param_3,lVar3);
LAB_14885dbee:
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_3);
  return;
}



// FUNCTION 14885dc5c FUN_14885dc5c body=150 status=ok
// SIG undefined FUN_14885dc5c(void)

void FUN_14885dc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14885e86e(0,&local_48,param_4);
  lVar1 = local_48;
  lVar2 = (longlong)(int)uStack_40;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_14885e97e(*(undefined8 *)(lVar1 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885dcf4 FUN_14885dcf4 body=84 status=ok
// SIG undefined FUN_14885dcf4(void)

void FUN_14885dcf4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar1 = FUN_14885d892();
  if (lVar1 != 0) {
    FUN_14885dd4a(lVar1,&local_18,param_3);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885dd4a FUN_14885dd4a body=110 status=ok
// SIG undefined FUN_14885dd4a(void)

void FUN_14885dd4a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = FUN_14586a292();
  local_28 = *param_2;
  lVar1 = FUN_148866a1a(param_1);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885ddce FUN_14885ddce body=132 status=ok
// SIG undefined FUN_14885ddce(void)

void FUN_14885ddce(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14885d892();
  if (lVar1 != 0) {
    FUN_14885de52(lVar1,param_2,param_3,param_4,param_5);
  }
  *param_2 = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 3) = 0;
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    FUN_140115c12(param_2 + 2,0);
  }
  param_2[1] = 0;
  if (param_2[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14885de52 FUN_14885de52 body=303 status=ok
// SIG undefined FUN_14885de52(void)

void FUN_14885de52(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60 [4];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_3;
  if (param_5 == '\0') {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = FUN_14586a292();
    FUN_1406022be(local_60,param_2);
    local_60[0] = &PTR_FUN_14b16b1f0;
    FUN_148866c3e(param_1,&local_78,&local_68);
    lVar1 = local_78;
    lVar2 = (longlong)(int)uStack_70;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3) != 0) {
          FUN_143d51352(param_1,*(longlong *)(lVar1 + lVar3),param_4);
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  else {
    local_68 = FUN_14586a292();
    FUN_1406022be(local_60,param_2);
    local_60[0] = &PTR_FUN_14b16b1f0;
    lVar1 = FUN_148866a90(param_1,&local_68);
    if (lVar1 != 0) {
      FUN_143d51352(param_1,lVar1,param_4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885df82 FUN_14885df82 body=119 status=ok
// SIG undefined FUN_14885df82(void)

void FUN_14885df82(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_14885d892();
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_14586a292();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14885dfe0;
    }
  }
  lVar3 = 0;
LAB_14885dfe0:
  FUN_14885dffa(lVar1,lVar3,param_3,param_4);
  return;
}



// FUNCTION 14885dffa FUN_14885dffa body=199 status=ok
// SIG undefined FUN_14885dffa(void)

void FUN_14885dffa(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    FUN_14885e86e(param_1,&local_48);
    lVar1 = local_48;
    lVar2 = (longlong)(int)uStack_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3) != 0) {
          FUN_143d51352(param_1,*(longlong *)(lVar1 + lVar3),param_3);
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  else {
    lVar1 = FUN_14885e80a(param_1,param_2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885e0dc FUN_14885e0dc body=415 status=ok
// SIG undefined FUN_14885e0dc(void)

void FUN_14885e0dc(undefined8 param_1,longlong param_2,longlong *param_3,undefined2 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_1405a25e0();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = param_2;
  if (param_3[2] == 0) {
    if ((lVar4 == 0) || (*param_3 == 0)) goto LAB_14885e148;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_3[2] = 0;
      goto LAB_14885e148;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_3);
    param_3[2] = lVar5;
    if (param_2 == 0) goto LAB_14885e148;
  }
  if (lVar5 != 0) {
    lVar4 = FUN_1449f3324();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = FUN_14885d892(param_1), lVar4 != 0)) {
      lVar5 = param_3[1];
      if (lVar5 == 0) {
        uVar3 = FUN_1405a25e0();
        lVar5 = FUN_14477b664(uVar3);
        param_3[1] = lVar5;
      }
      local_48 = param_3[2];
      if (((local_48 == 0) && (local_48 = 0, lVar5 != 0)) && (*param_3 != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          local_48 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          local_48 = FUN_144aff482(uVar3,param_3);
        }
        param_3[2] = local_48;
      }
      local_38 = &DAT_14cb245d0;
      local_40 = param_4;
      FUN_14885cdf0(lVar4,param_2);
    }
  }
LAB_14885e148:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885e27c FUN_14885e27c body=161 status=ok
// SIG undefined FUN_14885e27c(void)

void FUN_14885e27c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_14885d892();
  if (lVar3 == 0) {
    return;
  }
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145c5eda6();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (((param_2[2] != 0) || (lVar5 == 0)) || (*param_2 == 0)) goto LAB_14885e2a5;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14885e319:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14885e319;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_14885e2a5:
  FUN_140115d46(lVar3);
  return;
}



// FUNCTION 14885e31e FUN_14885e31e body=245 status=ok
// SIG undefined FUN_14885e31e(void)

longlong * FUN_14885e31e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_14885d892(param_2);
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x678);
    uVar2 = FUN_145c5eda6();
    lVar3 = FUN_14477b664(uVar2);
    uVar2 = FUN_145c5eda6();
    uVar4 = FUN_145c5eda6();
    FUN_1402d1bfa(&local_38,uVar4,lVar1);
    if (local_38 != 0) {
      param_1[2] = 0;
    }
    *param_1 = local_38;
    uVar4 = FUN_145c5eda6();
    lVar5 = FUN_141459e9e(uVar2,uVar4);
    if (lVar3 != lVar5) {
      param_1[2] = 0;
    }
    uVar2 = FUN_14477b664(lVar5);
    lVar3 = FUN_14477b664(uVar2);
    param_1[1] = lVar3;
    if (lVar3 != 0 && local_38 != 0) {
      param_1[2] = lVar1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885e414 FUN_14885e414 body=122 status=ok
// SIG undefined FUN_14885e414(void)

byte FUN_14885e414(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14885d892();
  if (lVar1 != 0) {
    param_3 = FUN_140d1d704(lVar1 + 0x4f8,param_2,param_3);
  }
  *param_2 = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 3) = 0;
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    FUN_140115c12(param_2 + 2,0);
  }
  param_2[1] = 0;
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  return lVar1 != 0 & (byte)param_3;
}



// FUNCTION 14885e48e FUN_14885e48e body=111 status=ok
// SIG undefined FUN_14885e48e(void)

undefined8 * FUN_14885e48e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  lVar1 = FUN_14885d892(param_2);
  if (lVar1 == 0) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    FUN_14885c3bc(lVar1,param_1,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885e4fe FUN_14885e4fe body=146 status=ok
// SIG undefined FUN_14885e4fe(void)

void FUN_14885e4fe(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_1 + 8))();
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 != '\0') {
      local_40 = 0;
      local_38 = 0;
      FUN_14009d848(&local_40,param_2);
      FUN_140844560(lVar2,&local_30,&local_40);
      param_1[1] = local_30;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885e592 FUN_14885e592 body=47 status=ok
// SIG undefined FUN_14885e592(void)

void FUN_14885e592(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_140ccfb62(param_2,*(longlong *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14885e5d2 FUN_14885e5d2 body=62 status=ok
// SIG undefined FUN_14885e5d2(void)

undefined8 FUN_14885e5d2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_14350c314();
    if (cVar1 != '\0') {
      FUN_1407d097e();
      return 1;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_140f3cbbe();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14885e610 FUN_14885e610 body=29 status=ok
// SIG undefined FUN_14885e610(void)

ulonglong FUN_14885e610(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144b23dda();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 14885e62e FUN_14885e62e body=66 status=ok
// SIG undefined FUN_14885e62e(void)

ulonglong FUN_14885e62e(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_14350c314();
    if (cVar1 != '\0') {
      FUN_1407d0508(*(longlong *)(param_1 + 0x10),100);
      return 1;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_144b23dda();
      return uVar2 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 14885e670 FUN_14885e670 body=110 status=ok
// SIG undefined FUN_14885e670(void)

undefined8 * FUN_14885e670(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_1486a8e3e(param_1);
    }
    *param_1 = &PTR_LAB_14b4031d0;
    param_1[1] = param_2[1];
    *param_1 = &PTR_LAB_14b162f00;
    param_1[2] = param_2[2];
    lVar1 = param_2[3];
    param_1[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *param_1 = &PTR_FUN_14b4031b0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



// FUNCTION 14885e6de FUN_14885e6de body=202 status=ok
// SIG undefined FUN_14885e6de(void)

void FUN_14885e6de(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    iVar2 = *(int *)(lVar4 + 0x30);
    *(uint *)(lVar4 + 0x30) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0x34) < iVar2 + 1U) {
      FUN_14886690a((longlong *)(lVar4 + 0x28),iVar2);
    }
    lVar4 = *(longlong *)(lVar4 + 0x28);
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_148866990(lVar4 + (longlong)iVar2 * 0x20,&local_30);
    *(undefined ***)(lVar4 + (longlong)iVar2 * 0x20) = &PTR_FUN_14b403930;
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885e7ba FUN_14885e7ba body=9 status=ok
// SIG undefined FUN_14885e7ba(void)

longlong FUN_14885e7ba(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) + 8;
}



// FUNCTION 14885e7c4 FUN_14885e7c4 body=69 status=ok
// SIG undefined FUN_14885e7c4(void)

undefined8 FUN_14885e7c4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    iVar1 = *(int *)(*param_1 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30),
       *(longlong *)(lVar3 + (longlong)iVar1 * 8) == *param_1 + 0x30)) {
      uVar4 = FUN_140d1d704(*(longlong *)(lVar2 + 0x28) + 0x28,param_1 + 1,
                            CONCAT71((int7)((ulonglong)lVar3 >> 8),(char)param_1[5]));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14885e80a FUN_14885e80a body=99 status=ok
// SIG undefined FUN_14885e80a(void)

longlong FUN_14885e80a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14885e900();
  if ((longlong)*(int *)(puVar2 + 1) != 0) {
    plVar4 = (longlong *)*puVar2;
    lVar3 = (longlong)*(int *)(puVar2 + 1) << 3;
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) {
          if (plVar4 == (longlong *)0x0) {
            return 0;
          }
          return lVar1;
        }
      }
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 14885e86e FUN_14885e86e body=146 status=ok
// SIG undefined FUN_14885e86e(void)

void FUN_14885e86e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_14885e900();
  lVar4 = plVar5[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *plVar5;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        if ((*(int *)(param_3 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(param_3 + 0x38) * 8) == param_3 + 0x30)) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_148866d8e(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14885e900 FUN_14885e900 body=125 status=ok
// SIG undefined FUN_14885e900(void)

undefined8 * FUN_14885e900(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7dc08) {
    FUN_144b3d300(&DAT_14cb7dc08);
    if (DAT_14cb7dc08 == -1) {
      DAT_14cb7dbf8 = 0;
      uRam000000014cb7dc00 = 0;
      atexit((_func_5014 *)&LAB_143d51aa6);
      _Init_thread_footer(&DAT_14cb7dc08);
    }
  }
  puVar1 = &DAT_14cb7dbf8;
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x650);
  }
  return puVar1;
}



// FUNCTION 14885e97e FUN_14885e97e body=163 status=ok
// SIG undefined FUN_14885e97e(void)

void FUN_14885e97e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_145cd7b32();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_2 == 0)) goto LAB_14885ea09;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14885ea1d:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14885ea1d;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_2);
  }
  param_2[2] = lVar5;
LAB_14885ea09:
  FUN_14885ea22(param_1,lVar5,param_3);
  return;
}



// FUNCTION 14885ea22 FUN_14885ea22 body=297 status=ok
// SIG undefined FUN_14885ea22(void)

void FUN_14885ea22(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x98) == '\x01') && (param_2 != 0)) &&
     (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c))) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 0x20) == param_2) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            local_48 = 0;
            local_40 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_3c = 0xffffffff00000080;
            local_34 = 0;
            local_28 = 0;
            local_20 = 0;
            FUN_14054d9c0(&local_68,param_3);
            FUN_1488621f8(lVar3 + 8,&local_68);
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14885eb4c FUN_14885eb4c body=125 status=ok
// SIG undefined FUN_14885eb4c(void)

undefined8 * FUN_14885eb4c(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7dc20) {
    FUN_144b3d300(&DAT_14cb7dc20);
    if (DAT_14cb7dc20 == -1) {
      DAT_14cb7dc10 = 0;
      uRam000000014cb7dc18 = 0;
      atexit((_func_5014 *)&LAB_143d51ab7);
      _Init_thread_footer(&DAT_14cb7dc20);
    }
  }
  puVar1 = &DAT_14cb7dc10;
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x508);
  }
  return puVar1;
}



// FUNCTION 14885ebca FUN_14885ebca body=244 status=ok
// SIG undefined FUN_14885ebca(void)

undefined8 FUN_14885ebca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b403ee0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b403950;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14885ecc0;
  FUN_145afc42c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885ecce FUN_14885ecce body=244 status=ok
// SIG undefined FUN_14885ecce(void)

undefined8 FUN_14885ecce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b403fd0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4039c0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14885edc4;
  FUN_1488671b8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885edd2 FUN_14885edd2 body=239 status=ok
// SIG undefined FUN_14885edd2(void)

undefined8 FUN_14885edd2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8bcc20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b403a30;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_14885eec2;
  FUN_1414cf8c0(&DAT_14cadbeb0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885eed0 FUN_14885eed0 body=239 status=ok
// SIG undefined FUN_14885eed0(void)

undefined8 FUN_14885eed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8bcd00;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b403aa0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_14885efc0;
  FUN_141211dc4(&DAT_14cadbec8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885efce FUN_14885efce body=244 status=ok
// SIG undefined FUN_14885efce(void)

undefined8
FUN_14885efce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b403b80;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b403b10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ae26b0(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885f0e0 FUN_14885f0e0 body=467 status=ok
// SIG undefined FUN_14885f0e0(void)

undefined8 *
FUN_14885f0e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined *local_a0;
  undefined8 *local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_4 == 0) {
LAB_14885f143:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144b1f538(param_4);
    if (lVar3 == 0) goto LAB_14885f143;
    lVar4 = FUN_140082f10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14885f143;
  }
  plVar5 = (longlong *)FUN_14885f7a0(param_1);
  if (plVar5 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0xe0);
      goto LAB_14885f172;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14885f172:
  local_88 = *param_3;
  FUN_1401533ba(local_44,&local_88,1);
  if ((lVar3 == 0) || (plVar5 == (longlong *)0x0)) {
    *(undefined4 *)(param_2 + 1) = 0;
    *param_2 = 0;
  }
  else {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    lVar4 = *(longlong *)(param_4 + 0x1c8);
    if (lVar4 == 0) {
      local_78 = DAT_14c8464f0;
      local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_88 = *(undefined8 *)(lVar4 + 0x260);
      uStack_80 = *(undefined8 *)(lVar4 + 0x268);
      local_78 = *(undefined8 *)(lVar4 + 0x270);
    }
    FUN_148911b3e(local_90,lVar3);
    local_98 = &local_68;
    local_a0 = &DAT_14cb86b30;
    local_a8 = &local_88;
    (**(code **)(*plVar5 + 0x90))(plVar5,&local_50,local_44,local_90);
    plVar5 = plStack_60;
    *(undefined4 *)(param_2 + 1) = local_48;
    *param_2 = local_50;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885f2b4 FUN_14885f2b4 body=477 status=ok
// SIG undefined FUN_14885f2b4(void)

undefined8 *
FUN_14885f2b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == 0) {
LAB_14885f329:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144b1f538(param_4);
    if (lVar3 == 0) goto LAB_14885f329;
    lVar4 = FUN_140082f10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14885f329;
    lVar3 = FUN_14479d2ce(lVar3 + 0x4e0);
  }
  plVar5 = (longlong *)FUN_14885f7a0(param_1);
  if (plVar5 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0xe0);
      goto LAB_14885f359;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14885f359:
  local_78 = *param_3;
  FUN_1401533ba(local_3c,&local_78,1);
  if ((lVar3 == 0) || (plVar5 == (longlong *)0x0)) {
    *(undefined4 *)(param_2 + 1) = 0;
    *param_2 = 0;
  }
  else {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    lVar4 = *(longlong *)(param_4 + 0x1c8);
    if (lVar4 == 0) {
      local_68 = DAT_14c8464f0;
      local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_78 = *(undefined8 *)(lVar4 + 0x260);
      uStack_70 = *(undefined8 *)(lVar4 + 0x268);
      local_68 = *(undefined8 *)(lVar4 + 0x270);
    }
    FUN_148911b58(local_80,lVar3);
    local_88 = &local_58;
    local_90 = &DAT_14cb86b30;
    local_98 = &local_78;
    (**(code **)(*plVar5 + 0x90))(plVar5,&local_48,local_3c,local_80);
    plVar5 = plStack_50;
    *(undefined4 *)(param_2 + 1) = local_40;
    *param_2 = local_48;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885f492 FUN_14885f492 body=617 status=ok
// SIG undefined FUN_14885f492(void)

void FUN_14885f492(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  char local_58 [4];
  int local_54;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1447210f0();
  if ((lVar4 != 0) && (lVar4 = FUN_1447210f0(param_1), *(longlong *)(lVar4 + 0x178) != 0)) {
    lVar7 = FUN_14041aabe();
    lVar4 = *(longlong *)(lVar4 + 0x178);
    if (lVar4 != 0) {
      lVar6 = 0;
      if ((lVar7 == 0) || (lVar3 = *(longlong *)(lVar4 + 0x10), lVar3 == 0)) goto LAB_14885f4dc;
      if (*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30) {
          lVar6 = lVar4;
        }
        goto LAB_14885f4dc;
      }
    }
  }
  lVar6 = 0;
LAB_14885f4dc:
  plVar5 = (longlong *)FUN_14885f6fc(param_1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,&local_50,param_2);
    lVar4 = local_50;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_48 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if ((lVar4 != 0) && (FUN_143d35b6e(lVar4,local_58), lVar6 != 0)) {
      if (local_58[0] == '\x02') {
        if (((-1 < (longlong)local_54) && (local_54 < *(int *)(lVar6 + 0x468))) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x460) + (longlong)local_54 * 8), lVar4 != 0
           )) {
          if (param_3 == '\0') {
            local_50 = param_2;
            FUN_140bdf3fa(lVar4 + 0x428);
          }
          else {
            FUN_140bdf372(lVar4 + 0x428,param_2);
          }
          iVar2 = *(int *)(lVar4 + 0x418);
          if ((longlong)iVar2 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x410);
            lVar7 = 0;
            do {
              lVar6 = *(longlong *)(lVar4 + lVar7);
              if (lVar6 != 0) {
                lVar6 = lVar6 + 0x540;
                if (param_3 == '\0') {
                  local_50 = param_2;
                  FUN_140bdf3fa(lVar6,&local_50);
                }
                else {
                  FUN_140bdf372(lVar6,param_2);
                }
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar2 * 8 != lVar7);
          }
        }
      }
      else if (((local_58[0] == '\x01') && (-1 < (longlong)local_54)) &&
              ((local_54 < *(int *)(lVar6 + 0x478) &&
               (lVar4 = FUN_14479d2ce((longlong)local_54 * 8 + *(longlong *)(lVar6 + 0x470)),
               lVar4 != 0)))) {
        if (param_3 == '\0') {
          local_50 = param_2;
          FUN_140bdf3fa(lVar4 + 0x540);
        }
        else {
          FUN_140bdf372(lVar4 + 0x540,param_2);
        }
      }
      FUN_1447f69b6(param_1 + 0x390);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


