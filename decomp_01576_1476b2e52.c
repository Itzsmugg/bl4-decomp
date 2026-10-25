// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476b2e52 FUN_1476b2e52 body=305 status=ok
// SIG undefined FUN_1476b2e52(void)

void FUN_1476b2e52(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x0001476b2e73:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(int *)(param_1 + iVar7) != *(int *)((longlong)param_1 + (longlong)iVar5 * 8 + 4))) {
          iVar5 = iVar7;
        }
        lVar6 = (longlong)iVar5;
        if (*(int *)(param_1 + iVar2) == *(int *)((longlong)param_1 + lVar6 * 8 + 4)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[lVar6];
          param_1[lVar6] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x0001476b2e73;
        }
      }
      bVar9 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar9);
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
          iVar8 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(int *)(param_1 + iVar2) != *(int *)((longlong)param_1 + (longlong)iVar5 * 8 + 4)))
            {
              iVar7 = iVar2;
            }
            lVar6 = (longlong)iVar7;
            if (*(int *)(param_1 + iVar8) != *(int *)((longlong)param_1 + lVar6 * 8 + 4)) break;
            uVar1 = param_1[iVar8];
            param_1[iVar8] = param_1[lVar6];
            param_1[lVar6] = uVar1;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
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



// FUNCTION 1476b2f84 FUN_1476b2f84 body=29 status=ok
// SIG undefined FUN_1476b2f84(void)

undefined8 FUN_1476b2f84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b2fa2 FUN_1476b2fa2 body=80 status=ok
// SIG undefined FUN_1476b2fa2(void)

void FUN_1476b2fa2(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476b332c(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b2ff4 FUN_1476b2ff4 body=1 status=ok
// SIG undefined FUN_1476b2ff4(void)

void FUN_1476b2ff4(void)

{
  return;
}



// FUNCTION 1476b2ff6 FUN_1476b2ff6 body=29 status=ok
// SIG undefined FUN_1476b2ff6(void)

undefined8 FUN_1476b2ff6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b302c FUN_1476b302c body=767 status=ok
// SIG undefined FUN_1476b302c(void)

void FUN_1476b302c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,8);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_1476b307d;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1476b307d:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar5 = (ulonglong)(uVar2 << 5);
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == param_1[1]) goto LAB_1476b30d1;
      puVar3 = puVar3 + 4;
      uVar5 = uVar5 - 0x20;
    } while (uVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1476b30d1:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + 4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar5 = 0;
    do {
      if (*(short *)((longlong)puVar1 + uVar5 + 0x1e) == param_1[2]) {
        if ((longlong)puVar1 + uVar5 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + uVar5)) {
            *(int *)(lVar4 + 8 + lVar6 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + uVar5) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar4 = *param_3;
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      uVar5 = uVar5 + 0x20;
    } while (uVar2 << 5 != uVar5);
    if ((short)uVar2 != 0) {
      uVar5 = 0;
      do {
        if (*(short *)((longlong)puVar1 + uVar5 + 0x1e) == param_1[3]) {
          if ((longlong)puVar1 + uVar5 != 0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + uVar5)) {
              *(int *)(lVar4 + 0xc + lVar6 * 4) =
                   (int)*(ulonglong *)((longlong)puVar1 + uVar5) -
                   (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar4 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        uVar5 = uVar5 + 0x20;
      } while (uVar2 << 5 != uVar5);
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[4]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar4 + 0x10 + lVar6 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar4 = *param_3;
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
              *(int *)(lVar4 + 0x14 + lVar6 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar4 = *param_3;
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
              *(int *)(lVar4 + 0x18 + lVar6 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar4 = *param_3;
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
          *(int *)(lVar4 + 0x1c + lVar6 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
          return;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar3);
    }
  }
  return;
}



// FUNCTION 1476b332c FUN_1476b332c body=258 status=ok
// SIG undefined FUN_1476b332c(void)

void FUN_1476b332c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar9 = 0;
  lVar6 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar6 = lVar9;
  }
  lVar7 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar7 = lVar9;
  }
  lVar10 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar10 = lVar9;
  }
  lVar11 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar11 = lVar9;
  }
  lVar5 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar5 = lVar9;
  }
  lVar4 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar4 = lVar9;
  }
  lVar8 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    lVar8 = lVar9;
  }
  lVar3 = lVar3 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    lVar3 = lVar9;
  }
  FUN_1476b342e(param_1,lVar1,lVar6,lVar7,lVar10,lVar11,lVar5,lVar4,lVar8,lVar3);
  return;
}



// FUNCTION 1476b342e FUN_1476b342e body=545 status=ok
// SIG undefined FUN_1476b342e(void)

void FUN_1476b342e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  short local_ec [2];
  undefined8 local_e8;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      FUN_1406ae69a((ulonglong)*(ushort *)(param_3 + lVar6) * 0x128 +
                    *(longlong *)(*(longlong *)(param_1 + 0x10) + 8),local_ec,
                    *(undefined4 *)(param_4 + lVar6));
      if (local_ec[0] != -1) {
        uVar7 = 0;
        uVar8 = 0;
        if (param_7 != 0) {
          uVar8 = *(undefined8 *)(param_7 + lVar6 * 2);
        }
        if (param_6 != 0) {
          uVar7 = *(undefined8 *)(param_6 + lVar6 * 2);
        }
        local_f8 = 0;
        uVar9 = 0;
        if (param_5 != 0) {
          uVar9 = *(undefined8 *)(param_5 + lVar6 * 2);
        }
        if (param_8 != 0) {
          local_f8 = *(undefined8 *)(param_8 + lVar6 * 2);
        }
        local_108 = 0;
        local_100 = 0;
        if (param_10 != 0) {
          local_100 = *(undefined8 *)(param_10 + lVar6 * 2);
        }
        if (param_9 != 0) {
          local_108 = *(undefined8 *)(param_9 + lVar6 * 2);
        }
        FUN_144a7484c(&local_108,&local_e8);
        uVar5 = uStack_d0;
        uVar4 = local_d8;
        puVar3 = puStack_e0;
        uVar2 = local_e8;
        FUN_1401280b4(*(undefined8 *)(param_1 + 8),&local_e8,local_ec[0]);
        *puStack_e0 = uVar2;
        puStack_e0[1] = puVar3;
        puStack_e0[2] = uVar4;
        puStack_e0[3] = uVar5;
        puStack_e0[4] = uVar9;
        puStack_e0[5] = uVar7;
        puStack_e0[6] = uVar8;
        puStack_e0[7] = 0;
        puStack_e0[8] = 0x3ff0000000000000;
        puStack_e0[9] = 0x3ff0000000000000;
        puStack_e0[10] = 0x3ff0000000000000;
        puStack_e0[0xb] = 0;
      }
      lVar6 = lVar6 + 4;
    } while ((ulonglong)uVar1 * 4 != lVar6);
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b3650 FUN_1476b3650 body=29 status=ok
// SIG undefined FUN_1476b3650(void)

undefined8 FUN_1476b3650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b366e FUN_1476b366e body=135 status=ok
// SIG undefined FUN_1476b366e(void)

undefined4 * FUN_1476b366e(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b36f6 FUN_1476b36f6 body=457 status=ok
// SIG undefined FUN_1476b36f6(void)

void FUN_1476b36f6(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (param_1[2] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[2];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[3] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[3];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[4] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[7] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b38c0 FUN_1476b38c0 body=355 status=ok
// SIG undefined FUN_1476b38c0(void)

void FUN_1476b38c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  short sVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 4);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 6);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 6);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 8);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 10);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 10);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0xc);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0xe);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0xe);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b3a24 FUN_1476b3a24 body=932 status=ok
// SIG undefined FUN_1476b3a24(void)

void FUN_1476b3a24(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 *local_120;
  int local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_158,param_4[7],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_178,param_4[6],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_198,param_4[5],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1b8,param_4[4],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1d8,param_4[3],param_3);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1f8,param_4[2],param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[1]) goto LAB_1476b3b46;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476b3b46:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_4) goto LAB_1476b3b7c;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1476b3b7c:
  uVar4 = *puVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_128 = *puVar6;
  local_108 = local_1f8;
  uStack_100 = uStack_1f0;
  local_f8 = local_1e8;
  local_1f8 = 0;
  local_f0 = local_1e0;
  local_e8 = (undefined4)local_1d8;
  uStack_e4 = local_1d8._4_4_;
  uStack_e0 = uStack_1d0;
  uStack_dc = uStack_1cc;
  local_d8 = local_1c8;
  local_1d8 = 0;
  local_d0 = local_1c0;
  local_c8 = local_1b8;
  local_c0 = local_1b0;
  local_b8 = local_1a8;
  local_1b8 = 0;
  local_b0 = local_1a0;
  local_a8 = local_198;
  local_a0 = local_190;
  local_98 = local_188;
  local_198 = 0;
  local_90 = local_180;
  local_88 = local_178;
  local_80 = local_170;
  local_78 = local_168;
  local_178 = 0;
  local_70 = local_160;
  local_68 = local_158;
  local_60 = local_150;
  local_58 = local_148;
  local_158 = 0;
  local_50 = local_140;
  local_200 = (uint)*(ushort *)
                     (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8)
                     + 0xe);
  local_208 = local_140;
  local_210 = local_160;
  local_218 = local_180;
  local_220 = local_1a0;
  local_228 = local_1c0;
  local_138 = puVar6;
  local_130 = iVar2;
  local_120 = puVar7;
  local_118 = iVar1;
  local_110 = uVar4;
  FUN_144a278f6(param_1,local_128,uVar4);
  FUN_1476b3dca(&local_138);
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b3dca FUN_1476b3dca body=469 status=ok
// SIG undefined FUN_1476b3dca(void)

void FUN_1476b3dca(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[0x1a];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x1b]) {
      uVar3 = param_1[0x1b];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x1a] + 0x18) = *(int *)(param_1[0x1a] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x1a] + 8));
    }
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x17]) {
      uVar3 = param_1[0x17];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x16] + 0x18) = *(int *)(param_1[0x16] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x18] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x16] + 8));
    }
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x13]) {
      uVar3 = param_1[0x13];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x12] + 0x18) = *(int *)(param_1[0x12] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x14] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xf]) {
      uVar3 = param_1[0xf];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0xe] + 0x18) = *(int *)(param_1[0xe] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0xe] + 8));
    }
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xb]) {
      uVar3 = param_1[0xb];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[10] + 0x18) = *(int *)(param_1[10] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xc] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[10] + 8));
    }
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b3f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b3fa0 FUN_1476b3fa0 body=38 status=ok
// SIG undefined FUN_1476b3fa0(void)

undefined8 FUN_1476b3fa0(undefined8 param_1,int param_2)

{
  FUN_1476b40fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b3fd2 FUN_1476b3fd2 body=62 status=ok
// SIG undefined FUN_1476b3fd2(void)

void FUN_1476b3fd2(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_1476b4198();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b401a FUN_1476b401a body=184 status=ok
// SIG undefined FUN_1476b401a(void)

void FUN_1476b401a(longlong param_1,undefined2 param_2,byte param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) == 0 & (param_3 ^ 1)) == 0) {
    uVar1 = FUN_140732858();
    FUN_141358f98(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b40d4 FUN_1476b40d4 body=38 status=ok
// SIG undefined FUN_1476b40d4(void)

undefined8 FUN_1476b40d4(undefined8 param_1,int param_2)

{
  FUN_1476b40fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b40fa FUN_1476b40fa body=158 status=ok
// SIG undefined FUN_1476b40fa(void)

void FUN_1476b40fa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4e0cc0;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14108bc84(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b4194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476b4198 FUN_1476b4198 body=135 status=ok
// SIG undefined FUN_1476b4198(void)

void FUN_1476b4198(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b4220 FUN_1476b4220 body=62 status=ok
// SIG undefined FUN_1476b4220(void)

void FUN_1476b4220(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476b425e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1476b425e FUN_1476b425e body=93 status=ok
// SIG undefined FUN_1476b425e(void)

ulonglong FUN_1476b425e(uint param_1,uint param_2)

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



// FUNCTION 1476b42bc FUN_1476b42bc body=204 status=ok
// SIG undefined FUN_1476b42bc(void)

void FUN_1476b42bc(longlong *param_1,int *param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_1476b4355;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476b4388(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_1476b4355:
  *piVar9 = iVar5;
  *(undefined2 *)(piVar9 + 1) = *param_3;
  *(undefined1 *)((longlong)piVar9 + 6) = *(undefined1 *)(param_3 + 1);
  return;
}



// FUNCTION 1476b4388 FUN_1476b4388 body=132 status=ok
// SIG undefined FUN_1476b4388(void)

void FUN_1476b4388(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476b440e FUN_1476b440e body=1 status=ok
// SIG undefined FUN_1476b440e(void)

void FUN_1476b440e(void)

{
  return;
}



// FUNCTION 1476b4410 FUN_1476b4410 body=29 status=ok
// SIG undefined FUN_1476b4410(void)

undefined8 FUN_1476b4410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b442e FUN_1476b442e body=126 status=ok
// SIG undefined FUN_1476b442e(void)

undefined4 * FUN_1476b442e(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b44ac FUN_1476b44ac body=219 status=ok
// SIG undefined FUN_1476b44ac(void)

void FUN_1476b44ac(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b4588 FUN_1476b4588 body=125 status=ok
// SIG undefined FUN_1476b4588(void)

void FUN_1476b4588(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b4606 FUN_1476b4606 body=458 status=ok
// SIG undefined FUN_1476b4606(void)

void FUN_1476b4606(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[2]) goto LAB_1476b4644;
      plVar10 = plVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476b4644:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_3[1]) goto LAB_1476b4674;
      plVar8 = plVar8 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476b4674:
  lVar9 = *plVar10;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *param_3) goto LAB_1476b46a3;
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476b46a3:
  lVar5 = *plVar8;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar4 = *plVar6;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar6;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar8;
  local_70 = lVar5;
  local_68 = plVar10;
  local_50 = lVar9;
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      FUN_140cc2126(*(undefined8 *)(lVar4 + uVar7 * 8),*(undefined8 *)(lVar5 + uVar7 * 8),lVar9);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar1 != uVar7);
  }
  FUN_1476b47d2(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b47d2 FUN_1476b47d2 body=141 status=ok
// SIG undefined FUN_1476b47d2(void)

void FUN_1476b47d2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b4851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b4860 FUN_1476b4860 body=166 status=ok
// SIG undefined FUN_1476b4860(void)

void FUN_1476b4860(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b4908 FUN_1476b4908 body=581 status=ok
// SIG undefined FUN_1476b4908(void)

int * FUN_1476b4908(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_1476b4b9c(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476b494e;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e0d40;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0d58;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_1476b4c46(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476b4cca;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476b4ada;
    }
  }
  else {
LAB_1476b4ada:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1476b494e:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476b4b4e FUN_1476b4b4e body=77 status=ok
// SIG undefined FUN_1476b4b4e(void)

void FUN_1476b4b4e(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1476b4dea(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b4b9c FUN_1476b4b9c body=170 status=ok
// SIG undefined FUN_1476b4b9c(void)

undefined8 FUN_1476b4b9c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 1476b4c46 FUN_1476b4c46 body=70 status=ok
// SIG undefined FUN_1476b4c46(void)

void FUN_1476b4c46(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 1476b4c8c FUN_1476b4c8c body=1 status=ok
// SIG undefined FUN_1476b4c8c(void)

void FUN_1476b4c8c(void)

{
  return;
}



// FUNCTION 1476b4c8e FUN_1476b4c8e body=29 status=ok
// SIG undefined FUN_1476b4c8e(void)

undefined8 FUN_1476b4c8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b4cac FUN_1476b4cac body=29 status=ok
// SIG undefined FUN_1476b4cac(void)

undefined8 FUN_1476b4cac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b4ce2 FUN_1476b4ce2 body=263 status=ok
// SIG undefined FUN_1476b4ce2(void)

void FUN_1476b4ce2(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_1476b4d33;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476b4d33:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1476b4d87;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476b4d87:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_1476b4dcc;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476b4dcc:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476b4dea FUN_1476b4dea body=120 status=ok
// SIG undefined FUN_1476b4dea(void)

void FUN_1476b4dea(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar2 = (uint *)*param_2;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = 0;
  lVar4 = lVar5 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar3 = lVar5 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar3 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar1 = *(ushort *)(param_1 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      FUN_1476b4e62(*(undefined8 *)(lVar5 + uVar7 * 8),*(undefined8 *)(lVar3 + uVar7 * 8),lVar4);
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar1 != uVar7);
  }
  return;
}



// FUNCTION 1476b4e62 FUN_1476b4e62 body=59 status=ok
// SIG undefined FUN_1476b4e62(void)

void FUN_1476b4e62(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1475a47bc();
  if (lVar1 != 0) {
    FUN_144a787a6(param_3,lVar1);
    return;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 1476b4e9e FUN_1476b4e9e body=126 status=ok
// SIG undefined FUN_1476b4e9e(void)

undefined4 * FUN_1476b4e9e(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b4f1c FUN_1476b4f1c body=219 status=ok
// SIG undefined FUN_1476b4f1c(void)

void FUN_1476b4f1c(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b4ff8 FUN_1476b4ff8 body=125 status=ok
// SIG undefined FUN_1476b4ff8(void)

void FUN_1476b4ff8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b5076 FUN_1476b5076 body=458 status=ok
// SIG undefined FUN_1476b5076(void)

void FUN_1476b5076(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [36];
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[2]) goto LAB_1476b50b4;
      plVar10 = plVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476b50b4:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_3[1]) goto LAB_1476b50e4;
      plVar8 = plVar8 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476b50e4:
  lVar9 = *plVar10;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *param_3) goto LAB_1476b5113;
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476b5113:
  lVar5 = *plVar8;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar4 = *plVar6;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar6;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar8;
  local_78 = iVar3;
  local_70 = lVar5;
  local_68 = plVar10;
  local_50 = lVar9;
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      FUN_1476b4e62(*(undefined8 *)(lVar4 + uVar7 * 8),*(undefined8 *)(lVar5 + uVar7 * 8),lVar9);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar1 != uVar7);
  }
  FUN_1476b5242(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b5242 FUN_1476b5242 body=141 status=ok
// SIG undefined FUN_1476b5242(void)

void FUN_1476b5242(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b52c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b52d0 FUN_1476b52d0 body=147 status=ok
// SIG undefined FUN_1476b52d0(void)

void FUN_1476b52d0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476b5364 FUN_1476b5364 body=48 status=ok
// SIG undefined FUN_1476b5364(void)

void FUN_1476b5364(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1476b5394 FUN_1476b5394 body=62 status=ok
// SIG undefined FUN_1476b5394(void)

void FUN_1476b5394(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476b53d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1476b53d2 FUN_1476b53d2 body=112 status=ok
// SIG undefined FUN_1476b53d2(void)

ulonglong FUN_1476b53d2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476b540c;
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
LAB_1476b540c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476b5442 FUN_1476b5442 body=48 status=ok
// SIG undefined FUN_1476b5442(void)

void FUN_1476b5442(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1476b5472 FUN_1476b5472 body=191 status=ok
// SIG undefined FUN_1476b5472(void)

undefined8 * FUN_1476b5472(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b5532 FUN_1476b5532 body=87 status=ok
// SIG undefined FUN_1476b5532(void)

void FUN_1476b5532(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b557b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b558a FUN_1476b558a body=291 status=ok
// SIG undefined FUN_1476b558a(void)

void FUN_1476b558a(longlong param_1,ushort *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 0xd88);
  lVar5 = *(longlong *)(param_1 + 0xd80);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  uVar6 = 0;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar6;
      if (*(ushort *)(lVar7 + (ulonglong)uVar1 * 0x1b0) < *param_2) {
        uVar6 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if ((int)uVar6 < (int)uVar2) {
      if (*(ushort *)(lVar7 + (ulonglong)uVar6 * 0x1b0) <= *param_2) {
        puVar8 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x1b0);
        FUN_1476a5498(puVar8,1);
        goto LAB_1476b5678;
      }
    }
  }
  *(uint *)(param_1 + 0xd88) = uVar2 + 1;
  if (*(uint *)(param_1 + 0xd8c) == uVar2) {
    FUN_1476b574c(param_1,uVar2);
    lVar5 = *(longlong *)(param_1 + 0xd80);
  }
  if (lVar5 == 0) {
    lVar5 = param_1;
  }
  _Src = (void *)(lVar5 + (ulonglong)uVar6 * 0x1b0);
  memmove((void *)((longlong)_Src + 0x1b0),_Src,(ulonglong)(uVar2 - uVar6) * 0x1b0);
  lVar5 = *(longlong *)(param_1 + 0xd80);
  if (*(longlong *)(param_1 + 0xd80) == 0) {
    lVar5 = param_1;
  }
  puVar8 = (undefined4 *)(lVar5 + (ulonglong)uVar6 * 0x1b0);
LAB_1476b5678:
  *puVar8 = *(undefined4 *)param_2;
  FUN_1476b5868(puVar8 + 2,param_3);
  return;
}



// FUNCTION 1476b56ae FUN_1476b56ae body=156 status=ok
// SIG undefined FUN_1476b56ae(void)

void FUN_1476b56ae(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [36];
  uint local_24;
  undefined2 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = *(longlong *)(param_1 + 400);
  if (*(longlong *)(param_1 + 400) == 0) {
    lVar4 = param_1 + 0x10;
  }
  iVar3 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x198)) {
    iVar3 = 0;
    uVar5 = *(uint *)(param_1 + 0x198);
    do {
      uVar1 = (uVar5 >> 1) + iVar3;
      if (*(uint *)(lVar4 + (ulonglong)uVar1 * 0xc) < param_2) {
        iVar3 = uVar1 + (uVar5 & 1);
      }
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar2);
  }
  local_20 = 0xffff;
  local_24 = param_2;
  local_1c = param_3;
  FUN_1476b58fc(param_1 + 0x10,&local_24,iVar3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b574c FUN_1476b574c body=135 status=ok
// SIG undefined FUN_1476b574c(void)

void FUN_1476b574c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xd88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xd8c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x1b0,0);
      iVar4 = (int)(uVar3 / 0x1b0);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xd8c) = iVar5;
    FUN_1476b57d4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476b57d4 FUN_1476b57d4 body=147 status=ok
// SIG undefined FUN_1476b57d4(void)

void FUN_1476b57d4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xd80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1b0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xd80,0,param_3,0x1b0);
    memmove(*(void **)((longlong)param_1 + 0xd80),param_1,(longlong)param_2 * 0x1b0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xd80,param_2,param_3,0x1b0);
  return;
}



// FUNCTION 1476b5868 FUN_1476b5868 body=148 status=ok
// SIG undefined FUN_1476b5868(void)

undefined8 * FUN_1476b5868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[0x32] = 0;
  lVar2 = param_2[0x32];
  if (lVar2 == 0) {
    memmove(param_1 + 2,param_2 + 2,0x180);
    lVar2 = param_2[0x32];
  }
  param_1[0x32] = lVar2;
  param_2[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)((longlong)param_2 + 0x19c);
  param_2[0x33] = 0x2000000000;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}



// FUNCTION 1476b58fc FUN_1476b58fc body=152 status=ok
// SIG undefined FUN_1476b58fc(void)

ulonglong FUN_1476b58fc(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar1 + 1U) {
    FUN_1476b5994(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (ulonglong)param_3 * 0xc;
  memmove((void *)(lVar3 + lVar2 + 0xc),(void *)(lVar3 + lVar2),(ulonglong)(iVar1 - param_3) * 0xc);
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + lVar2) = *param_2;
  *(undefined4 *)(lVar3 + 8 + lVar2) = *(undefined4 *)(param_2 + 1);
  return (ulonglong)param_3;
}



// FUNCTION 1476b5994 FUN_1476b5994 body=136 status=ok
// SIG undefined FUN_1476b5994(void)

void FUN_1476b5994(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_1476b5a1e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476b5a1e FUN_1476b5a1e body=149 status=ok
// SIG undefined FUN_1476b5a1e(void)

void FUN_1476b5a1e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0xc);
  return;
}



// FUNCTION 1476b5ab4 FUN_1476b5ab4 body=256 status=ok
// SIG undefined FUN_1476b5ab4(void)

ulonglong FUN_1476b5ab4(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  iVar5 = FUN_1476a4108();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (iVar5 != -1) goto LAB_1476b5ade;
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)
             (*(longlong *)(*param_1 + 8) + 0x100 + (ulonglong)*(ushort *)(param_1 + 0x34) * 0x128);
    plVar3 = *(longlong **)
              (*(longlong *)(*param_1 + 8) + 0x108 + (ulonglong)*(ushort *)(param_1 + 0x34) * 0x128)
    ;
    if (plVar3 == (longlong *)0x0) {
      lVar7 = FUN_147552f3e(uVar2);
      param_1[1] = lVar7;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar7 = FUN_147552f3e(uVar2);
      param_1[1] = lVar7;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar6 = (int *)((longlong)plVar3 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      lVar7 = param_1[1];
    }
    if (lVar7 != 0) goto LAB_1476b5b08;
  }
  else {
LAB_1476b5b08:
    piVar6 = (int *)FUN_1400a5d6e(lVar7,&local_24);
    if (((piVar6 != (int *)0x0) && (*piVar6 != DAT_14cab5ff0)) &&
       (cVar4 = FUN_1476b5ab4(param_1), cVar4 != '\0')) {
      FUN_1476b56ae(param_1,local_24,1);
      goto LAB_1476b5ade;
    }
  }
  uVar8 = 0;
LAB_1476b5ade:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1476b5bb6 FUN_1476b5bb6 body=59 status=ok
// SIG undefined FUN_1476b5bb6(void)

void FUN_1476b5bb6(longlong param_1)

{
  FUN_1476b5bf2();
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476b5bf2 FUN_1476b5bf2 body=339 status=ok
// SIG undefined FUN_1476b5bf2(void)

void FUN_1476b5bf2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 400;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_144a81a4c(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x10)) {
    do {
      lVar2 = *(longlong *)(local_68 + 0x180);
      if (*(longlong *)(local_68 + 0x180) == 0) {
        lVar2 = local_68;
      }
      FUN_1432d4318(lVar2 + (longlong)iStack_4c * 0x18);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_144a81a4c(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_140373856(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (0x20 < *(uint *)(param_1 + 0x1a4)) {
    *(undefined4 *)(param_1 + 0x1a4) = 0x20;
    FUN_14008f53c(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b5d46 FUN_1476b5d46 body=63 status=ok
// SIG undefined FUN_1476b5d46(void)

void FUN_1476b5d46(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cde4b2(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1476b5eca(param_1);
    return;
  }
  FUN_1476b5d86(param_1);
  FUN_145cde4b2(param_1);
  return;
}



// FUNCTION 1476b5d86 FUN_1476b5d86 body=322 status=ok
// SIG undefined FUN_1476b5d86(void)

void FUN_1476b5d86(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1476b5eca FUN_1476b5eca body=468 status=ok
// SIG undefined FUN_1476b5eca(void)

void FUN_1476b5eca(longlong *param_1)

{
  longlong *plVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
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
  uVar9 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
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
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        psVar2 = (short *)(*local_80 + (longlong)iVar4 * 0x28);
        uVar9 = (uint)*psVar2;
        iVar5 = FUN_1476a53cf(psVar2 + 4);
        uVar6 = (longlong)(int)((uVar9 >> 2) + uVar9 * 0x40 + iVar5 + 0x9e3779b9 ^ uVar9) &
                (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(psVar2 + 0x12) = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(psVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
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



// FUNCTION 1476b60a0 FUN_1476b60a0 body=279 status=ok
// SIG undefined FUN_1476b60a0(void)

undefined4 * FUN_1476b60a0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476b61b8(param_1,local_48);
  FUN_1475451a6(local_40,param_3);
  *(undefined4 *)(local_40 + 0x10) = 0xffffffff;
  local_4c = local_48[0];
  iVar3 = FUN_1476a53cf(local_40);
  cVar2 = FUN_1476b62dc(param_1,iVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    cVar2 = FUN_1476b647c(param_1,*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac));
    if (cVar2 == '\0') {
      uVar4 = (longlong)iVar3 & (longlong)*(int *)(param_1 + 0x1d8) - 1U;
      iVar3 = (int)uVar4;
      *(int *)(local_40 + 0x14) = iVar3;
      lVar5 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar5 = param_1 + 0x1b0;
      }
      *(undefined4 *)(local_40 + 0x10) =
           *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar5 = param_1 + 0x1b0;
      }
      *(undefined4 *)(lVar5 + ((longlong)iVar3 & (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4) =
           uVar1;
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b61b8 FUN_1476b61b8 body=291 status=ok
// SIG undefined FUN_1476b61b8(void)

int * FUN_1476b61b8(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x1ac) == 0) {
    iVar6 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar6 + 1;
    if (*(int *)(param_1 + 0x18c) == iVar6) {
      FUN_14593ecc2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 400,1);
    lVar5 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar5 = param_1 + 400;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x1a8);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0x1a8) = iVar4;
    iVar3 = *(int *)(param_1 + 0x1ac) + -1;
    *(int *)(param_1 + 0x1ac) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 1476b62dc FUN_1476b62dc body=117 status=ok
// SIG undefined FUN_1476b62dc(void)

undefined8 FUN_1476b62dc(longlong param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac) != 1) &&
     (iVar5 = FUN_1476b6352(), iVar5 != -1)) {
    lVar6 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar6 = param_1;
    }
    puVar1 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
    FUN_1432d4318(puVar1);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_1476b63e8(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 1476b6352 FUN_1476b6352 body=149 status=ok
// SIG undefined FUN_1476b6352(void)

int FUN_1476b6352(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1ac)) {
    lVar2 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x180);
      do {
        if (lVar2 == 0) {
          lVar2 = param_1;
        }
        cVar1 = FUN_1476a5387(lVar2 + (longlong)iVar4 * 0x18,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar2 = *(longlong *)(param_1 + 0x180);
        lVar3 = lVar2;
        if (lVar2 == 0) {
          lVar3 = param_1;
        }
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476b63e8 FUN_1476b63e8 body=148 status=ok
// SIG undefined FUN_1476b63e8(void)

void FUN_1476b63e8(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x1ac) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x1a8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x1a8) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476b647c FUN_1476b647c body=100 status=ok
// SIG undefined FUN_1476b647c(void)

undefined8 FUN_1476b647c(longlong param_1,uint param_2)

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
  if ((uint)lVar2 < 3) {
    iVar4 = 8;
  }
  if (param_2 < 4) {
    iVar4 = 8;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x1d8))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x1d8) = iVar4;
    FUN_1476b64e0(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1476b64e0 FUN_1476b64e0 body=488 status=ok
// SIG undefined FUN_1476b64e0(void)

void FUN_1476b64e0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1446efa72(param_1 + 0x1d0,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x1d8);
  uVar3 = local_68;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x1b0;
    uVar9 = 0;
    FUN_140a8e97c(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x1d8) + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_50 = param_1 + 400;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (*(int *)(param_1 + 0x1a0) != 0) {
      FUN_144a81a4c(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < *(int *)(local_50 + 0x10)) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar8 = *(longlong *)(local_80 + 0x180);
        if (*(longlong *)(local_80 + 0x180) == 0) {
          lVar8 = local_80;
        }
        lVar8 = lVar8 + (longlong)iVar4 * 0x18;
        iVar5 = FUN_1476a53cf(lVar8);
        uVar6 = (longlong)iVar5 & (longlong)*(int *)(param_1 + 0x1d8) - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar8 + 0x14) = iVar5;
        lVar7 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar7 = lVar1;
        }
        *(undefined4 *)(lVar8 + 0x10) =
             *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar6) * 4);
        lVar8 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar8 = lVar1;
        }
        *(int *)(lVar8 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_144a81a4c(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < *(int *)(local_70 + 0x10));
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b66ca FUN_1476b66ca body=349 status=ok
// SIG undefined FUN_1476b66ca(void)

undefined4 * FUN_1476b66ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  short *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476b6828(param_1,local_50);
  psVar1 = (short *)*param_3;
  psVar2 = (short *)param_3[1];
  *local_48 = *psVar1;
  FUN_1475452b4(local_48 + 4,psVar1 + 4);
  local_48[0xc] = *psVar2;
  local_48[0x10] = -1;
  local_48[0x11] = -1;
  local_54 = local_50[0];
  uVar9 = (uint)*local_48;
  iVar5 = FUN_1476a53cf(local_48 + 4);
  uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + iVar5 + 0x9e3779b9 ^ uVar9;
  cVar4 = FUN_1476b690e(param_1,uVar9,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_48 + 0x12) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x10) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1476b5eca(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b6828 FUN_1476b6828 body=230 status=ok
// SIG undefined FUN_1476b6828(void)

int * FUN_1476b6828(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1476b690e FUN_1476b690e body=114 status=ok
// SIG undefined FUN_1476b690e(void)

undefined8 FUN_1476b690e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_1476a5300(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_1432d4318(puVar1 + 2);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1476b6980(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1476b6980 FUN_1476b6980 body=114 status=ok
// SIG undefined FUN_1476b6980(void)

void FUN_1476b6980(longlong *param_1,int param_2)

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



// FUNCTION 1476b69f2 FUN_1476b69f2 body=29 status=ok
// SIG undefined FUN_1476b69f2(void)

undefined8 FUN_1476b69f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b6a10 FUN_1476b6a10 body=29 status=ok
// SIG undefined FUN_1476b6a10(void)

undefined8 FUN_1476b6a10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b6a2e FUN_1476b6a2e body=29 status=ok
// SIG undefined FUN_1476b6a2e(void)

undefined8 FUN_1476b6a2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b6a4c FUN_1476b6a4c body=184 status=ok
// SIG undefined FUN_1476b6a4c(void)

undefined8 * FUN_1476b6a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b6b06 FUN_1476b6b06 body=758 status=ok
// SIG undefined FUN_1476b6b06(void)

int * FUN_1476b6b06(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  undefined1 **local_120;
  short *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 *local_e0;
  short **local_d8;
  short *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  byte local_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_1476b6e88(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476b6b44;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e0dd0;
  plVar1 = plVar8 + 2;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0de8;
  param_7 = (longlong *)*param_7;
  plVar8[3] = *param_7;
  *(int *)(plVar8 + 4) = (int)param_7[1];
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 5) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar4;
  *(undefined4 *)(plVar8 + 6) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x34) = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_60 = 0;
  FUN_1400abb7c(local_80,param_1 + 0x38);
  local_88 = 0;
  FUN_1400abb7c(local_a8,param_1 + 0x4c);
  FUN_140dba9e6(local_80,*param_1);
  FUN_140dba9e6(local_80,param_1[1]);
  local_d8 = &local_d0;
  local_e0 = &LAB_1476b6f36;
  local_b0 = *(byte *)(param_6 + 8);
  local_d0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(&local_b8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_120 = &local_e0;
  local_128 = &local_b8;
  local_118 = param_1 + 8;
  local_110 = local_80;
  local_108 = local_a8;
  local_f0 = plVar1;
  local_e8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_f0);
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_58);
      *param_2 = (int)local_58;
      if ((int)local_58 != -1) goto LAB_1476b6ced;
    }
  }
  else {
LAB_1476b6ced:
    local_50 = 0;
    local_58 = &LAB_14332b8f4;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_128 = &local_58;
    local_c8 = plVar1;
    local_c0 = plVar8;
    FUN_1406abf4a(param_4,&local_f4,param_5,&local_c8);
    local_50 = 0;
    local_58 = &LAB_14332b924;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_128 = &local_58;
    local_c8 = plVar1;
    local_c0 = plVar8;
    FUN_1406abf4a(param_4,&local_f8,param_5,&local_c8);
    FUN_1407ce0e2(param_4,*param_2,local_f4);
    FUN_1407cdf34(param_4,*param_2,local_f8);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1476b6b44:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476b6dfe FUN_1476b6dfe body=138 status=ok
// SIG undefined FUN_1476b6dfe(void)

void FUN_1476b6dfe(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  uVar6 = (ulonglong)*(uint *)*param_2;
  uVar5 = (ulonglong)((uint *)*param_2)[1];
  lVar4 = lVar3 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar4 = 0;
  }
  lVar3 = lVar3 + uVar6;
  if (uVar6 == 0xffffffff) {
    lVar3 = 0;
  }
  uVar5 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      dVar1 = *(double *)(lVar3 + uVar6 * 8);
      lVar2 = (ulonglong)*(ushort *)(lVar4 + uVar6 * 2) * 0x18;
      *(double *)(*(longlong *)(param_3 + 8) + lVar2) =
           *(double *)(*(longlong *)(param_3 + 8) + lVar2) * dVar1;
      *(double *)(*(longlong *)(param_3 + 8) + 8 + lVar2) =
           dVar1 * *(double *)(*(longlong *)(param_3 + 8) + 8 + lVar2);
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 1476b6e88 FUN_1476b6e88 body=112 status=ok
// SIG undefined FUN_1476b6e88(void)

undefined8 FUN_1476b6e88(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1476b6ef8 FUN_1476b6ef8 body=1 status=ok
// SIG undefined FUN_1476b6ef8(void)

void FUN_1476b6ef8(void)

{
  return;
}



// FUNCTION 1476b6efa FUN_1476b6efa body=29 status=ok
// SIG undefined FUN_1476b6efa(void)

undefined8 FUN_1476b6efa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b6f18 FUN_1476b6f18 body=29 status=ok
// SIG undefined FUN_1476b6f18(void)

undefined8 FUN_1476b6f18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b6f4e FUN_1476b6f4e body=186 status=ok
// SIG undefined FUN_1476b6f4e(void)

void FUN_1476b6f4e(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_1476b6f9f;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1476b6f9f:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1476b6feb;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1476b6feb:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476b7008 FUN_1476b7008 body=249 status=ok
// SIG undefined FUN_1476b7008(void)

void FUN_1476b7008(longlong *param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = *param_1;
      cVar2 = *(char *)(lVar3 + 0x16 + lVar4);
      if (cVar2 == '\0') {
        uVar6 = (ulonglong)*(ushort *)(lVar3 + 0x10 + lVar4);
        if (uVar6 != 0xffff) {
          *(double *)(lVar3 + lVar4) =
               *(double *)(lVar3 + uVar6 * 0x18) * *(double *)(lVar3 + lVar4);
        }
        uVar6 = (ulonglong)*(ushort *)(lVar3 + 0x12 + lVar4);
        if (uVar6 != 0xffff) {
          *(double *)(*param_1 + 8 + uVar6 * 0x18) =
               *(double *)(lVar3 + lVar4) * *(double *)(*param_1 + 8 + uVar6 * 0x18);
        }
      }
      else if (cVar2 == '\x01') {
        dVar1 = *(double *)(lVar3 + lVar4);
        fVar7 = (float)*(double *)(lVar3 + 8 + (ulonglong)*(ushort *)(lVar3 + 0x10 + lVar4) * 0x18)
                * (float)dVar1;
        fVar8 = fVar7;
        if (1.0 <= fVar7) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        *(double *)(lVar3 + lVar4) = (double)fVar8;
        uVar6 = (ulonglong)*(ushort *)(lVar3 + 0x12 + lVar4);
        if (uVar6 != 0xffff) {
          fVar7 = (float)dVar1 - fVar7;
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(double *)(*param_1 + uVar6 * 0x18) = (double)fVar7;
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1476b7102 FUN_1476b7102 body=184 status=ok
// SIG undefined FUN_1476b7102(void)

undefined8 * FUN_1476b7102(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b71bc FUN_1476b71bc body=614 status=ok
// SIG undefined FUN_1476b71bc(void)

int * FUN_1476b71bc(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar8 = FUN_1476b7476(param_1,param_3), cVar8 == '\0')) {
    *param_2 = -1;
    goto LAB_1476b71fa;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a4e0df0;
  plVar9[2] = (longlong)&PTR_FUN_14a4e0e08;
  lVar7 = param_7[1];
  plVar9[3] = *param_7;
  *(int *)(plVar9 + 4) = (int)lVar7;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar9 + 5) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar4;
  *(undefined4 *)(plVar9 + 6) = uVar5;
  *(undefined4 *)((longlong)plVar9 + 0x34) = uVar6;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x38);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x4c);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  FUN_140dba9e6(local_98,param_1[1]);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476b7524;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 8;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar9 + 2;
  local_c8 = plVar9;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476b73af;
    }
  }
  else {
LAB_1476b73af:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_1476b71fa:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476b7424 FUN_1476b7424 body=80 status=ok
// SIG undefined FUN_1476b7424(void)

void FUN_1476b7424(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476b75f6(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7476 FUN_1476b7476 body=112 status=ok
// SIG undefined FUN_1476b7476(void)

undefined8 FUN_1476b7476(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1476b74e6 FUN_1476b74e6 body=1 status=ok
// SIG undefined FUN_1476b74e6(void)

void FUN_1476b74e6(void)

{
  return;
}



// FUNCTION 1476b74e8 FUN_1476b74e8 body=29 status=ok
// SIG undefined FUN_1476b74e8(void)

undefined8 FUN_1476b74e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b7506 FUN_1476b7506 body=29 status=ok
// SIG undefined FUN_1476b7506(void)

undefined8 FUN_1476b7506(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b753c FUN_1476b753c body=186 status=ok
// SIG undefined FUN_1476b753c(void)

void FUN_1476b753c(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_1476b758d;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1476b758d:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1476b75d9;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1476b75d9:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476b75f6 FUN_1476b75f6 body=118 status=ok
// SIG undefined FUN_1476b75f6(void)

void FUN_1476b75f6(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  uVar5 = (ulonglong)*(uint *)*param_3;
  uVar6 = (ulonglong)((uint *)*param_3)[1];
  lVar4 = lVar3 + uVar6;
  if (uVar6 == 0xffffffff) {
    lVar4 = 0;
  }
  lVar3 = lVar3 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar3 = 0;
  }
  uVar5 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar3 + uVar6 * 2);
      if ((int)(uint)uVar1 < (int)param_1[1]) {
        *(double *)(lVar4 + uVar6 * 8) =
             *(double *)(*param_1 + (ulonglong)uVar1 * 0x18) * *(double *)(lVar4 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 1476b766c FUN_1476b766c body=165 status=ok
// SIG undefined FUN_1476b766c(void)

undefined8 * FUN_1476b766c(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  ulonglong *local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_1a = *(undefined2 *)param_1;
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 2);
  param_1[0x18] = param_2;
  param_1[0x19] = *(undefined8 *)(param_2 + 0x248);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7712 FUN_1476b7712 body=124 status=ok
// SIG undefined FUN_1476b7712(void)

void FUN_1476b7712(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7790 FUN_1476b7790 body=289 status=ok
// SIG undefined FUN_1476b7790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1476b7790(longlong param_1,ulonglong param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_3) goto LAB_1476b77c4;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476b77c4:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  auVar3 = _DAT_149931e80;
  UNLOCK();
  uVar1 = *(ushort *)(param_1 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    lVar4 = *plVar7;
    lVar5 = (ulonglong)uVar1 - 1;
    auVar8._8_4_ = (int)lVar5;
    auVar8._0_8_ = lVar5;
    auVar8._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
    auVar9 = pmovsxbq(in_XMM1,0x100);
    uVar6 = 0;
    auVar8 = auVar8 ^ _DAT_149931e80;
    auVar10 = pmovsxbq(in_XMM4,0x202);
    do {
      if ((bool)(~(auVar8._0_8_ < SUB168(auVar9 ^ auVar3,0)) & 1)) {
        *(undefined8 *)(lVar4 + uVar6) = 0x3ff0000000000000;
      }
      if (SUB168(auVar9 ^ auVar3,8) <= auVar8._8_8_) {
        *(undefined8 *)(lVar4 + 8 + uVar6) = 0x3ff0000000000000;
      }
      lVar5 = auVar9._8_8_;
      auVar9._0_8_ = auVar9._0_8_ + auVar10._0_8_;
      auVar9._8_8_ = lVar5 + auVar10._8_8_;
      uVar6 = uVar6 + 0x10;
    } while (((uint)uVar1 * 8 + 8 & 0xfffffff0) != uVar6);
  }
  if (plVar7 != (longlong *)0x0) {
    uVar6 = plVar7[2];
    if ((ulonglong)plVar7[2] < param_2) {
      uVar6 = param_2;
    }
    plVar7[2] = uVar6;
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b78a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476b78b2 FUN_1476b78b2 body=219 status=ok
// SIG undefined FUN_1476b78b2(void)

void FUN_1476b78b2(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b798e FUN_1476b798e body=125 status=ok
// SIG undefined FUN_1476b798e(void)

void FUN_1476b798e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7a0c FUN_1476b7a0c body=489 status=ok
// SIG undefined FUN_1476b7a0c(void)

void FUN_1476b7a0c(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_e8 [40];
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[2]) goto LAB_1476b7a53;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476b7a53:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_1476b7a83;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476b7a83:
  lVar5 = *plVar10;
  iVar3 = *(int *)(param_1 + 0x14);
  local_bc = iVar2;
  local_b8 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_3) goto LAB_1476b7ab2;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476b7ab2:
  lVar6 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_c0 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *plVar7;
  local_90 = local_c0;
  local_78 = local_b8;
  local_70 = local_bc;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_b0 = plVar7;
  local_a8 = iVar2;
  local_a0 = lVar4;
  local_98 = plVar9;
  local_88 = lVar6;
  local_80 = plVar10;
  local_68 = lVar5;
  if ((ulonglong)uVar1 != 0) {
    uVar8 = 0;
    do {
      fVar11 = (float)FUN_140cf0978(*(undefined8 *)(lVar6 + uVar8 * 8),
                                    *(undefined8 *)(lVar4 + uVar8 * 8));
      dVar12 = (double)fVar11;
      if (dVar12 <= 0.0) {
        dVar12 = 0.0;
      }
      *(double *)(lVar5 + uVar8 * 8) = dVar12;
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  FUN_1476b7bf6(&local_b0);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b7bf6 FUN_1476b7bf6 body=141 status=ok
// SIG undefined FUN_1476b7bf6(void)

void FUN_1476b7bf6(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b7c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b7c84 FUN_1476b7c84 body=213 status=ok
// SIG undefined FUN_1476b7c84(void)

void FUN_1476b7c84(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    local_42 = *(short *)(param_1 + lVar2 * 2);
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  local_42 = *(short *)(param_1 + 4);
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7d5a FUN_1476b7d5a body=125 status=ok
// SIG undefined FUN_1476b7d5a(void)

void FUN_1476b7d5a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7dd8 FUN_1476b7dd8 body=157 status=ok
// SIG undefined FUN_1476b7dd8(void)

undefined8 * FUN_1476b7dd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  ulonglong *local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  FUN_1417a8985(0,param_1 + 3);
  local_1a = *(undefined2 *)((longlong)param_1 + 4);
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b7e76 FUN_1476b7e76 body=447 status=ok
// SIG undefined FUN_1476b7e76(void)

void FUN_1476b7e76(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  void *pvVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  void *_Src;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  void *local_90;
  undefined8 local_88;
  undefined4 local_80;
  void *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  void *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(param_3 + 1)) goto LAB_1476b7ec3;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476b7ec3:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  _Dst = (void *)*puVar7;
  local_4c = *param_3;
  FUN_1476b80da(&local_d0,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  _Src = local_a8;
  local_88 = uStack_b8;
  pvVar4 = local_c0;
  local_a0 = local_d0;
  local_98 = local_c8;
  local_d0 = 0;
  local_90 = local_c0;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_80 = local_b0;
  local_78 = local_a8;
  local_a8 = (void *)0x0;
  local_70 = puVar7;
  local_68 = param_2;
  local_60 = iVar2;
  local_58 = _Dst;
  FUN_1476b8036(&local_d0);
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8) + 0xe);
  if (_Src == (void *)0x0 || pvVar4 == (void *)0x0) {
    if (pvVar4 != (void *)0x0) {
      _Src = pvVar4;
    }
    memcpy(_Dst,_Src,(ulonglong)uVar1 << 3);
  }
  else if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    do {
      *(double *)((longlong)_Dst + uVar5 * 8) =
           *(double *)((longlong)pvVar4 + uVar5 * 8) * *(double *)((longlong)_Src + uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  FUN_1476b808c(&local_a0);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b8036 FUN_1476b8036 body=85 status=ok
// SIG undefined FUN_1476b8036(void)

void FUN_1476b8036(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b807d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b808c FUN_1476b808c body=77 status=ok
// SIG undefined FUN_1476b808c(void)

void FUN_1476b808c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(param_1 + 0x38)) {
      uVar3 = *(ulonglong *)(param_1 + 0x38);
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x30) + 8));
    }
  }
  FUN_1476b8036(param_1);
  return;
}



// FUNCTION 1476b80da FUN_1476b80da body=151 status=ok
// SIG undefined FUN_1476b80da(void)

undefined8 * FUN_1476b80da(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475b4978(param_2,&local_40,param_3[1]);
  FUN_1475b4978(param_2,&local_58,*param_3);
  *param_1 = local_58;
  *(undefined4 *)(param_1 + 1) = local_50;
  param_1[2] = local_48;
  param_1[3] = local_40;
  *(undefined4 *)(param_1 + 4) = local_38;
  param_1[5] = local_30;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b8172 FUN_1476b8172 body=119 status=ok
// SIG undefined FUN_1476b8172(void)

undefined4 * FUN_1476b8172(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b81ea FUN_1476b81ea body=183 status=ok
// SIG undefined FUN_1476b81ea(void)

void FUN_1476b81ea(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b82a2 FUN_1476b82a2 body=346 status=ok
// SIG undefined FUN_1476b82a2(void)

void FUN_1476b82a2(longlong *param_1,longlong param_2,short *param_3)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_3[1]) goto LAB_1476b82d8;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476b82d8:
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *param_3) goto LAB_1476b82ff;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476b82ff:
  lVar6 = *plVar8;
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  local_60 = *plVar9;
  uVar2 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar2 != 0) {
    uVar7 = 0;
    do {
      dVar1 = *(double *)(local_60 + uVar7 * 8);
      lVar5 = (ulonglong)*(ushort *)(lVar6 + uVar7 * 2) * 0x18;
      *(double *)(*param_1 + lVar5) = *(double *)(*param_1 + lVar5) * dVar1;
      *(double *)(*param_1 + 8 + lVar5) = dVar1 * *(double *)(*param_1 + 8 + lVar5);
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  local_70 = plVar9;
  local_68 = iVar4;
  local_58 = plVar8;
  local_50 = iVar3;
  local_48 = lVar6;
  FUN_1476b83fe(&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b83fe FUN_1476b83fe body=85 status=ok
// SIG undefined FUN_1476b83fe(void)

void FUN_1476b83fe(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b8445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b8454 FUN_1476b8454 body=119 status=ok
// SIG undefined FUN_1476b8454(void)

undefined4 * FUN_1476b8454(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b84cc FUN_1476b84cc body=183 status=ok
// SIG undefined FUN_1476b84cc(void)

void FUN_1476b84cc(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b8584 FUN_1476b8584 body=125 status=ok
// SIG undefined FUN_1476b8584(void)

void FUN_1476b8584(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 2),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b8602 FUN_1476b8602 body=391 status=ok
// SIG undefined FUN_1476b8602(void)

void FUN_1476b8602(longlong *param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar9 = *(longlong **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_4[1]) goto LAB_1476b864c;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476b864c:
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_4) goto LAB_1476b8682;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476b8682:
  lVar6 = *plVar9;
  iVar3 = *(int *)(lVar4 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  local_70 = *plVar8;
  uVar5 = (ulonglong)
          *(ushort *)
           (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      uVar1 = *(ushort *)(local_70 + uVar7 * 2);
      if ((int)(uint)uVar1 < (int)param_1[1]) {
        *(double *)(lVar6 + uVar7 * 8) =
             *(double *)(*param_1 + (ulonglong)uVar1 * 0x18) * *(double *)(lVar6 + uVar7 * 8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  local_80 = plVar8;
  local_78 = iVar3;
  local_68 = plVar9;
  local_60 = param_3;
  local_58 = iVar2;
  local_50 = lVar6;
  FUN_1476b878a(&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b878a FUN_1476b878a body=108 status=ok
// SIG undefined FUN_1476b878a(void)

void FUN_1476b878a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b87e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b87f6 FUN_1476b87f6 body=69 status=ok
// SIG undefined FUN_1476b87f6(void)

undefined8 FUN_1476b87f6(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_140f938fc();
  lVar1 = FUN_14752639a();
  if (lVar1 == 0) {
    iVar3 = 0;
    lVar1 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  uVar2 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < iVar3)) {
    uVar2 = *(undefined8 *)(lVar1 + (ulonglong)param_2 * 8);
  }
  return uVar2;
}



// FUNCTION 1476b883c FUN_1476b883c body=38 status=ok
// SIG undefined FUN_1476b883c(void)

undefined8 FUN_1476b883c(undefined8 param_1,int param_2)

{
  FUN_146197ca2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b886e FUN_1476b886e body=125 status=ok
// SIG undefined FUN_1476b886e(void)

void FUN_1476b886e(longlong param_1,int param_2)

{
  undefined1 auStack_68 [43];
  undefined1 local_3d;
  int local_3c;
  undefined1 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3d = *(undefined1 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28) = local_3d;
  local_3c = param_2;
  FUN_146201146(param_1 + 0x18);
  local_38 = &local_3d;
  local_30 = &local_3c;
  FUN_1457fa352(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b88ec FUN_1476b88ec body=353 status=ok
// SIG undefined FUN_1476b88ec(void)

undefined8 FUN_1476b88ec(longlong param_1,int param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    if (cVar5 == '\0') {
      return 3;
    }
  }
  if (param_3 == '\x01') {
    lVar4 = (longlong)param_2 * 0x28;
    FUN_146201146(param_1 + 0x18,*(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar4));
    if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x20 + lVar4) == '\x01') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar4 + 0x20) = 0;
    }
    FUN_1462011f2(param_1 + 0x68);
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
      uVar9 = uVar2;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x24) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar3 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar3);
    }
    if (((int)uVar7 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x24) <= param_2)) {
      FUN_1476b8a76(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
      uVar9 = uVar2;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x24) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar3 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar3);
    }
    if (((int)uVar7 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x24) <= param_2)) {
      FUN_1476b8a76(param_1 + 0xa0);
    }
    else {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x24 + (longlong)param_2 * 0x28);
      *pbVar1 = *pbVar1 | 2;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1476b8a50 FUN_1476b8a50 body=38 status=ok
// SIG undefined FUN_1476b8a50(void)

undefined8 FUN_1476b8a50(undefined8 param_1,int param_2)

{
  FUN_146197ca2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b8a76 FUN_1476b8a76 body=84 status=ok
// SIG undefined FUN_1476b8a76(void)

void FUN_1476b8a76(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x24);
  if (*(char *)((longlong)_Dst + 0x20) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x20) = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x24),(longlong)(int)(~param_2 + iVar1) * 0x24);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1476b8aca(param_1);
  return;
}



// FUNCTION 1476b8aca FUN_1476b8aca body=62 status=ok
// SIG undefined FUN_1476b8aca(void)

void FUN_1476b8aca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476b8b08(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x24,4);
  }
  return;
}



// FUNCTION 1476b8b08 FUN_1476b8b08 body=112 status=ok
// SIG undefined FUN_1476b8b08(void)

ulonglong FUN_1476b8b08(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x24) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476b8b42;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x24,4);
      param_2 = param_2 / 0x24;
    }
  }
LAB_1476b8b42:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476b8b78 FUN_1476b8b78 body=245 status=ok
// SIG undefined FUN_1476b8b78(void)

void FUN_1476b8b78(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar3 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar7 = uVar3;
    do {
      uVar1 = (uVar7 >> 1) + uVar9;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x24) < *param_2) {
        uVar9 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar8 + (ulonglong)uVar9 * 0x24) <= *param_2)) {
      piVar10 = (int *)(lVar8 + (ulonglong)uVar9 * 0x24);
      FUN_146197d29(piVar10,1);
      goto LAB_1476b8c28;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1476b8c6e(param_1,uVar3);
    lVar8 = *param_1;
  }
  lVar5 = (ulonglong)uVar9 * 0x24;
  memmove((void *)(lVar8 + lVar5 + 0x24),(void *)(lVar8 + lVar5),(ulonglong)(uVar3 - uVar9) * 0x24);
  piVar10 = (int *)(lVar5 + *param_1);
LAB_1476b8c28:
  *piVar10 = *param_2;
  uVar6 = param_3[1];
  *(undefined8 *)(piVar10 + 1) = *param_3;
  *(undefined8 *)(piVar10 + 3) = uVar6;
  *(undefined8 *)(piVar10 + 5) = param_3[2];
  cVar2 = *(char *)((longlong)param_3 + 0x1c);
  *(char *)(piVar10 + 8) = cVar2;
  if (cVar2 == '\x01') {
    piVar10[7] = *(int *)(param_3 + 3);
  }
  return;
}



// FUNCTION 1476b8c6e FUN_1476b8c6e body=147 status=ok
// SIG undefined FUN_1476b8c6e(void)

void FUN_1476b8c6e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476b8d02 FUN_1476b8d02 body=147 status=ok
// SIG undefined FUN_1476b8d02(void)

void FUN_1476b8d02(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476b8d96 FUN_1476b8d96 body=114 status=ok
// SIG undefined FUN_1476b8d96(void)

void FUN_1476b8d96(longlong *param_1,int param_2)

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



// FUNCTION 1476b8e08 FUN_1476b8e08 body=48 status=ok
// SIG undefined FUN_1476b8e08(void)

void FUN_1476b8e08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1476b8e38 FUN_1476b8e38 body=476 status=ok
// SIG undefined FUN_1476b8e38(void)

longlong * FUN_1476b8e38(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476b9016();
  if (*param_2 != 0) goto LAB_1476b8e66;
  plVar3 = (longlong *)FUN_14001cc68(0xd8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4e0f20;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0xffffffff00000080;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xcc) = 0xffffffff00000000;
  plVar3[2] = (longlong)&PTR_FUN_14a4e0f40;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1476ba7bc(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1476b8fda:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001476b8fca:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x0001476b8fca;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1476b8fda;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_1476b90ca(param_1,param_3,&local_50);
LAB_1476b8e66:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b9016 FUN_1476b9016 body=179 status=ok
// SIG undefined FUN_1476b9016(void)

undefined8 * FUN_1476b9016(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1476b9070;
    }
  }
  uVar6 = 0;
LAB_1476b9070:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476b90ca FUN_1476b90ca body=184 status=ok
// SIG undefined FUN_1476b90ca(void)

void FUN_1476b90ca(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b9184 FUN_1476b9184 body=9 status=ok
// SIG undefined FUN_1476b9184(void)

void FUN_1476b9184(longlong param_1)

{
  FUN_1476b9c00(param_1 + 0x10);
  return;
}



// FUNCTION 1476b918e FUN_1476b918e body=29 status=ok
// SIG undefined FUN_1476b918e(void)

undefined8 FUN_1476b918e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b91ac FUN_1476b91ac body=38 status=ok
// SIG undefined FUN_1476b91ac(void)

undefined8 FUN_1476b91ac(undefined8 param_1,int param_2)

{
  FUN_1476b9c00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b91de FUN_1476b91de body=14 status=ok
// SIG undefined FUN_1476b91de(void)

void FUN_1476b91de(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 1476b91ec FUN_1476b91ec body=179 status=ok
// SIG undefined FUN_1476b91ec(void)

void FUN_1476b91ec(longlong param_1,int param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0x28);
  lVar1 = (longlong)local_38;
  _Src = *(void **)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_1476b9c84(param_1,param_2,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b92a0 FUN_1476b92a0 body=1069 status=ok
// SIG undefined FUN_1476b92a0(void)

ulonglong FUN_1476b92a0(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong unaff_RBP;
  undefined7 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar8 == '\0') goto LAB_1476b9319;
  }
  uVar13 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x68);
      lVar9 = (longlong)param_2;
      lVar5 = *(longlong *)(lVar4 + lVar9 * 0x28);
      uVar12 = 0;
      *(undefined8 *)(lVar4 + lVar9 * 0x28) = 0;
      local_68 = *(undefined4 *)(lVar4 + 8 + lVar9 * 0x28);
      local_64 = *(undefined4 *)(lVar4 + 0xc + lVar9 * 0x28);
      *(undefined8 *)(lVar4 + 8 + lVar9 * 0x28) = 0;
      lVar6 = *(longlong *)(lVar4 + 0x10 + lVar9 * 0x28);
      *(undefined8 *)(lVar4 + 0x10 + lVar9 * 0x28) = 0;
      local_58 = *(undefined4 *)(lVar4 + 0x18 + lVar9 * 0x28);
      local_54 = *(undefined4 *)(lVar4 + 0x1c + lVar9 * 0x28);
      *(undefined8 *)(lVar4 + 0x18 + lVar9 * 0x28) = 0;
      bVar2 = *(byte *)(lVar4 + 0x20 + lVar9 * 0x28);
      local_70 = lVar5;
      local_60 = lVar6;
      local_50 = bVar2;
      FUN_1476b9d72(param_1 + 0x18);
      FUN_1476ba512(param_1 + 0x68,param_2);
      uVar3 = *(uint *)(param_1 + 0xa8);
      if (0 < (int)uVar3) {
        uVar12 = 0;
        uVar11 = (ulonglong)uVar3;
        uVar14 = uVar3;
        do {
          uVar11 = uVar11 >> 1;
          uVar15 = (uint)uVar11 + (int)uVar12;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x18) < param_2) {
            uVar12 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar7 = 1 < uVar14;
          uVar14 = (uint)uVar11;
        } while (bVar7);
      }
      if (((int)uVar12 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar12 * 0x18) <= param_2)) {
        FUN_1476ba6b4(param_1 + 0xa0,uVar12);
        FUN_1476ba70e(param_1 + 0xa0);
      }
      if ((bVar2 & 1) != 0) {
        FUN_1476ba558(&local_70,&local_60);
      }
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
joined_r0x0001476b95df:
      if (lVar5 != 0) {
        FUN_1400020a8(lVar5);
      }
      unaff_RBP = 0;
      goto LAB_1476b9319;
    }
    unaff_RBP = CONCAT71(uVar13,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + (longlong)param_2 * 0x28) & 1) == 0)
    goto LAB_1476b9319;
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar15 = 0;
    uVar14 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar14 >> 1) + uVar15;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 0x18) < param_2) {
          uVar15 = uVar1 + (uVar14 & 1);
        }
        bVar7 = 1 < uVar14;
        uVar14 = uVar14 >> 1;
      } while (bVar7);
    }
    lVar4 = param_1 + 0xa0;
    if ((((int)uVar15 < (int)uVar3) && (*(int *)(lVar5 + (ulonglong)uVar15 * 0x18) <= param_2)) &&
       (lVar5 + (ulonglong)uVar15 * 0x18 != -8)) {
      FUN_1476ba558((longlong)param_2 * 0x28 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar12 = 0;
      if (0 < (int)uVar3) {
        uVar11 = (ulonglong)uVar3;
        uVar14 = uVar3;
        do {
          uVar11 = uVar11 >> 1;
          uVar15 = (uint)uVar11 + (int)uVar12;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x18) < param_2) {
            uVar12 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar7 = 1 < uVar14;
          uVar14 = (uint)uVar11;
        } while (bVar7);
      }
      unaff_RBP = CONCAT71(uVar13,1);
      if (((int)uVar12 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar12 * 0x18) <= param_2)) {
        FUN_1476ba6b4(lVar4);
        FUN_1476ba70e(lVar4);
      }
      goto LAB_1476b9319;
    }
    unaff_RBP = CONCAT71(uVar13,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + (longlong)param_2 * 0x28);
      if ((bVar2 & 1) == 0) goto LAB_1476b9319;
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
      *(byte *)(plVar10 + 4) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476b9319;
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
      bVar2 = *(byte *)(plVar10 + 4);
      if ((bVar2 & 2) == 0) {
        lVar5 = *plVar10;
        uVar12 = 0;
        *plVar10 = 0;
        local_68 = (undefined4)plVar10[1];
        local_64 = *(undefined4 *)((longlong)plVar10 + 0xc);
        plVar10[1] = 0;
        lVar6 = plVar10[2];
        plVar10[2] = 0;
        local_58 = (undefined4)plVar10[3];
        local_54 = *(undefined4 *)((longlong)plVar10 + 0x1c);
        plVar10[3] = 0;
        local_70 = lVar5;
        local_60 = lVar6;
        local_50 = bVar2;
        FUN_1476b9d72(param_1 + 0x18);
        FUN_1476ba512(param_1 + 0x68,param_2);
        uVar3 = *(uint *)(param_1 + 0xa8);
        if (0 < (int)uVar3) {
          uVar12 = 0;
          uVar11 = (ulonglong)uVar3;
          uVar14 = uVar3;
          do {
            uVar11 = uVar11 >> 1;
            uVar15 = (uint)uVar11 + (int)uVar12;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x18) < param_2) {
              uVar12 = (ulonglong)(uVar15 + (uVar14 & 1));
            }
            bVar7 = 1 < uVar14;
            uVar14 = (uint)uVar11;
          } while (bVar7);
        }
        if (((int)uVar12 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar12 * 0x18) <= param_2)) {
          FUN_1476ba6b4(lVar4,uVar12);
          FUN_1476ba70e(lVar4);
        }
        if ((bVar2 & 1) != 0) {
          FUN_1476ba558(&local_70,&local_60);
        }
        if (lVar6 != 0) {
          FUN_1400020a8(lVar6);
        }
        goto joined_r0x0001476b95df;
      }
      if ((bVar2 & 1) == 0) goto LAB_1476b9319;
    }
  }
  FUN_1476ba558(plVar10,plVar10 + 2);
LAB_1476b9319:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1476b96ce FUN_1476b96ce body=483 status=ok
// SIG undefined FUN_1476b96ce(void)

undefined8 FUN_1476b96ce(longlong param_1,int param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = (longlong)param_2;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar5 = 3;
    if (cVar4 == '\0') goto LAB_1476b9785;
  }
  if (param_3 == '\x01') {
    local_48 = (void *)0x0;
    local_40 = *(int *)(*(longlong *)(param_1 + 0x68) + 8 + lVar10 * 0x28);
    lVar11 = (longlong)local_40;
    _Src = *(void **)(*(longlong *)(param_1 + 0x68) + lVar10 * 0x28);
    if (lVar11 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar11 * 2);
    }
    FUN_1476b9d72(param_1 + 0x18,&local_48);
    FUN_1476ba512(param_1 + 0x68);
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      uVar8 = uVar2;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar9 * 0x18) < param_2) {
          uVar6 = (ulonglong)(uVar9 + (uVar8 & 1));
        }
        bVar3 = 1 < uVar8;
        uVar8 = (uint)uVar7;
      } while (bVar3);
    }
    if (((int)uVar6 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x18) <= param_2)) {
      FUN_1476ba6b4(param_1 + 0xa0);
      FUN_1476ba70e(param_1 + 0xa0);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      uVar8 = uVar2;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar9 * 0x18) < param_2) {
          uVar6 = (ulonglong)(uVar9 + (uVar8 & 1));
        }
        bVar3 = 1 < uVar8;
        uVar8 = (uint)uVar7;
      } while (bVar3);
    }
    if (((int)uVar6 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x18) <= param_2)) {
      FUN_1476ba6b4(param_1 + 0xa0);
      FUN_1476ba70e(param_1 + 0xa0);
    }
    else {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + lVar10 * 0x28);
      *pbVar1 = *pbVar1 | 2;
    }
    uVar5 = 1;
  }
LAB_1476b9785:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b98b4 FUN_1476b98b4 body=38 status=ok
// SIG undefined FUN_1476b98b4(void)

undefined8 FUN_1476b98b4(undefined8 param_1,int param_2)

{
  FUN_1476b9c00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b98da FUN_1476b98da body=52 status=ok
// SIG undefined FUN_1476b98da(void)

void FUN_1476b98da(longlong *param_1)

{
  FUN_1476b993e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476b990e FUN_1476b990e body=47 status=ok
// SIG undefined FUN_1476b990e(void)

void FUN_1476b990e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1476b993e FUN_1476b993e body=338 status=ok
// SIG undefined FUN_1476b993e(void)

void FUN_1476b993e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b9a92 FUN_1476b9a92 body=52 status=ok
// SIG undefined FUN_1476b9a92(void)

void FUN_1476b9a92(longlong *param_1)

{
  FUN_1476b9ac6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476b9ac6 FUN_1476b9ac6 body=312 status=ok
// SIG undefined FUN_1476b9ac6(void)

void FUN_1476b9ac6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b9c00 FUN_1476b9c00 body=132 status=ok
// SIG undefined FUN_1476b9c00(void)

void FUN_1476b9c00(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4e0f90;
  FUN_1476b990e(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1476b98da(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1476b9a92(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b9c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476b9c84 FUN_1476b9c84 body=236 status=ok
// SIG undefined FUN_1476b9c84(void)

void FUN_1476b9c84(longlong param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x68);
  lVar2 = (longlong)param_2;
  local_68 = (void *)0x0;
  local_60 = *(int *)(lVar1 + 8 + lVar2 * 0x28);
  lVar3 = (longlong)local_60;
  _Src = *(void **)(lVar1 + lVar2 * 0x28);
  local_54 = param_2;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar3 * 2);
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  FUN_144a787a6(lVar1 + lVar2 * 0x28,param_3);
  FUN_1476b9d72(param_1 + 0x18,&local_68);
  local_48 = &local_54;
  local_50 = param_3;
  FUN_1476b9f70(param_1 + 0x18,local_3c);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b9d72 FUN_1476b9d72 body=253 status=ok
// SIG undefined FUN_1476b9d72(void)

void FUN_1476b9d72(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1476b9de8:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1476b9e57;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1476b9e57;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1476b9e5d;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1476b9e5d;
      goto LAB_1476b9e49;
    }
  }
  return;
LAB_1476b9e57:
  if (uVar7 == uVar6) {
LAB_1476b9e5d:
    FUN_1476b9e70(param_1);
    return;
  }
LAB_1476b9e49:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1476b9de8;
}



// FUNCTION 1476b9e70 FUN_1476b9e70 body=90 status=ok
// SIG undefined FUN_1476b9e70(void)

void FUN_1476b9e70(longlong *param_1,int param_2)

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
  FUN_1476b9eca();
  return;
}



// FUNCTION 1476b9eca FUN_1476b9eca body=51 status=ok
// SIG undefined FUN_1476b9eca(void)

void FUN_1476b9eca(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1476b9efe(param_1,param_2);
  return;
}



// FUNCTION 1476b9efe FUN_1476b9efe body=114 status=ok
// SIG undefined FUN_1476b9efe(void)

void FUN_1476b9efe(longlong *param_1,int param_2)

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



// FUNCTION 1476b9f70 FUN_1476b9f70 body=315 status=ok
// SIG undefined FUN_1476b9f70(void)

undefined4 * FUN_1476b9f70(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476ba0ac(param_1,local_48);
  FUN_1476ba204(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1476ba192(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1476ba334(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ba0ac FUN_1476ba0ac body=229 status=ok
// SIG undefined FUN_1476ba0ac(void)

int * FUN_1476ba0ac(longlong *param_1,int *param_2)

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



// FUNCTION 1476ba192 FUN_1476ba192 body=114 status=ok
// SIG undefined FUN_1476ba192(void)

undefined8 FUN_1476ba192(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1476ba268(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1476b9efe(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1476ba204 FUN_1476ba204 body=99 status=ok
// SIG undefined FUN_1476ba204(void)

undefined8 * FUN_1476ba204(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
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
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 1476ba268 FUN_1476ba268 body=203 status=ok
// SIG undefined FUN_1476ba268(void)

int FUN_1476ba268(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1476ba2b2:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1476ba328;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1476ba328;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1476ba319;
    }
  }
  return -1;
LAB_1476ba328:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1476ba319:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1476ba2b2;
}



// FUNCTION 1476ba334 FUN_1476ba334 body=476 status=ok
// SIG undefined FUN_1476ba334(void)

void FUN_1476ba334(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ba512 FUN_1476ba512 body=70 status=ok
// SIG undefined FUN_1476ba512(void)

void FUN_1476ba512(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x28);
  if (plVar1[2] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_1476ba642(param_1,param_2);
  return;
}



// FUNCTION 1476ba558 FUN_1476ba558 body=233 status=ok
// SIG undefined FUN_1476ba558(void)

void FUN_1476ba558(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab63a8) {
    FUN_144b3d300(&DAT_14cab63a8);
    if (DAT_14cab63a8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cab63a0 = DAT_14c8407a8;
      _Init_thread_footer(&DAT_14cab63a8);
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  plVar2 = (longlong *)(**(code **)(*DAT_14cab63a0 + 200))(DAT_14cab63a0,puVar3,1);
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001476ba5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x98))(plVar2,puVar3,uVar1 & 0xff000000,0);
    return;
  }
  return;
}



// FUNCTION 1476ba642 FUN_1476ba642 body=114 status=ok
// SIG undefined FUN_1476ba642(void)

void FUN_1476ba642(longlong *param_1,int param_2)

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



// FUNCTION 1476ba6b4 FUN_1476ba6b4 body=89 status=ok
// SIG undefined FUN_1476ba6b4(void)

void FUN_1476ba6b4(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (ulonglong)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1476ba70e FUN_1476ba70e body=62 status=ok
// SIG undefined FUN_1476ba70e(void)

void FUN_1476ba70e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476ba74c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1476ba74c FUN_1476ba74c body=112 status=ok
// SIG undefined FUN_1476ba74c(void)

ulonglong FUN_1476ba74c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476ba786;
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
LAB_1476ba786:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476ba7bc FUN_1476ba7bc body=167 status=ok
// SIG undefined FUN_1476ba7bc(void)

void FUN_1476ba7bc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476ba837;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476ba837;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1476ba837:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476ba857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476ba864 FUN_1476ba864 body=302 status=ok
// SIG undefined FUN_1476ba864(void)

int * FUN_1476ba864(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar4 = *(int *)(param_3 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_1476ba268(plVar1,uVar3,param_3);
  if (((iVar4 == -1) || (lVar5 = (longlong)iVar4 * 0x20 + *plVar1, lVar5 == 0)) ||
     (iVar4 = *(int *)(lVar5 + 0x10), *param_2 = iVar4, iVar4 == -1)) {
    FUN_1476baafe(&local_70,param_3);
    FUN_1476bab5c(param_1 + 0x68,local_48);
    *local_40 = 0;
    *local_40 = local_70;
    *(undefined4 *)(local_40 + 1) = (undefined4)local_68;
    *(undefined4 *)((longlong)local_40 + 0xc) = local_68._4_4_;
    local_40[2] = 0;
    local_40[2] = local_60;
    local_60 = 0;
    *(undefined4 *)(local_40 + 3) = (undefined4)local_58;
    *(undefined4 *)((longlong)local_40 + 0x1c) = local_58._4_4_;
    local_58 = 0;
    *(undefined1 *)(local_40 + 4) = local_50;
    *param_2 = local_48[0];
    local_70 = param_3;
    local_68 = param_2;
    FUN_1476b9f70(plVar1,local_48,&local_70);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ba994 FUN_1476ba994 body=137 status=ok
// SIG undefined FUN_1476ba994(void)

ulonglong FUN_1476ba994(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar8;
  uint uVar9;
  undefined7 uVar7;
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + (longlong)param_2 * 0x28);
  uVar7 = (undefined7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8);
  uVar6 = CONCAT71(uVar7,bVar2);
  if ((param_3 != '\x01') && (uVar6 = CONCAT71(uVar7,1), ((bVar2 & 2) == 0 & bVar2) == 0)) {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    uVar8 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar8 >> 1) + uVar9;
        if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x18) < param_2) {
          uVar9 = uVar1 + (uVar8 & 1);
        }
        bVar5 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar5);
    }
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar4 + (ulonglong)uVar9 * 0x18) <= param_2)) {
      lVar4 = lVar4 + (ulonglong)uVar9 * 0x18;
      uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != -8);
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1476baa1e FUN_1476baa1e body=223 status=ok
// SIG undefined FUN_1476baa1e(void)

void FUN_1476baa1e(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)param_2 * 0x28 + *(longlong *)(param_1 + 0x68);
  local_1c = param_2;
  if (param_3 == '\x01') {
    if ((undefined8 *)(lVar2 + 0x10) != param_4) {
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(lVar2 + 0x10) = *param_4;
      *param_4 = 0;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)((longlong)param_4 + 0xc);
      param_4[1] = 0;
    }
    *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 3;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x20);
    if ((bVar1 & 1) == 0) {
      if ((undefined8 *)(lVar2 + 0x10) != param_4) {
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar2 + 0x10) = *param_4;
        *param_4 = 0;
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_4 + 1);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)((longlong)param_4 + 0xc);
        param_4[1] = 0;
        bVar1 = *(byte *)(lVar2 + 0x20);
      }
      *(byte *)(lVar2 + 0x20) = bVar1 | 1;
    }
    else {
      FUN_1476bac42(param_1 + 0xa0,&local_1c,param_4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476baafe FUN_1476baafe body=93 status=ok
// SIG undefined FUN_1476baafe(void)

undefined8 * FUN_1476baafe(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  return param_1;
}



// FUNCTION 1476bab5c FUN_1476bab5c body=230 status=ok
// SIG undefined FUN_1476bab5c(void)

int * FUN_1476bab5c(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1476bac42 FUN_1476bac42 body=241 status=ok
// SIG undefined FUN_1476bac42(void)

void FUN_1476bac42(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar6 + (ulonglong)uVar7 * 0x18) <= *param_2)) {
      piVar8 = (int *)(lVar6 + (ulonglong)uVar7 * 0x18);
      FUN_1476b990e(piVar8,1);
      goto LAB_1476bacf2;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476bad34(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x18);
  piVar8 = (int *)(lVar4 + *param_1);
LAB_1476bacf2:
  *piVar8 = *param_2;
  *(undefined8 *)(piVar8 + 2) = *param_3;
  *param_3 = 0;
  piVar8[4] = *(int *)(param_3 + 1);
  piVar8[5] = *(int *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  return;
}



// FUNCTION 1476bad34 FUN_1476bad34 body=147 status=ok
// SIG undefined FUN_1476bad34(void)

void FUN_1476bad34(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476badc8 FUN_1476badc8 body=171 status=ok
// SIG undefined FUN_1476badc8(void)

void FUN_1476badc8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar5 = (undefined8 *)FUN_14001cc68(0x150,8);
  *param_1 = puVar5;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar5;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14a4ab760;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  FUN_147613664(param_1 + 7,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x148);
  *(undefined1 *)((longlong)param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
  return;
}



// FUNCTION 1476bae74 FUN_1476bae74 body=132 status=ok
// SIG undefined FUN_1476bae74(void)

void FUN_1476bae74(longlong param_1,int param_2)

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



// FUNCTION 1476baefe FUN_1476baefe body=75 status=ok
// SIG undefined FUN_1476baefe(void)

bool FUN_1476baefe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476baf32;
    }
  }
  lVar2 = 0;
LAB_1476baf32:
  lVar1 = FUN_145b34062();
  return lVar2 == lVar1;
}



// FUNCTION 1476baf4f FUN_1476baf4f body=174 status=ok
// SIG undefined FUN_1476baf4f(void)

undefined8 FUN_1476baf4f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34062();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476baffe FUN_1476baffe body=149 status=ok
// SIG undefined FUN_1476baffe(void)

longlong FUN_1476baffe(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_198 [40];
  undefined **local_170 [5];
  longlong local_148;
  undefined1 local_138 [288];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1475aaf0e(local_170,param_3,param_1 + -0x128);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1476c30ce(param_2,local_170);
  local_170[0] = &PTR_FUN_14a4abba0;
  FUN_145bfd3a0(local_138);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb0a4 FUN_1476bb0a4 body=75 status=ok
// SIG undefined FUN_1476bb0a4(void)

bool FUN_1476bb0a4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bb0d8;
    }
  }
  lVar2 = 0;
LAB_1476bb0d8:
  lVar1 = FUN_1459908d6();
  return lVar2 == lVar1;
}



// FUNCTION 1476bb14a FUN_1476bb14a body=131 status=ok
// SIG undefined FUN_1476bb14a(void)

void FUN_1476bb14a(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476bb1ce FUN_1476bb1ce body=106 status=ok
// SIG undefined FUN_1476bb1ce(void)

void FUN_1476bb1ce(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb23a FUN_1476bb23a body=95 status=ok
// SIG undefined FUN_1476bb23a(void)

void FUN_1476bb23a(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 1476bb2a6 FUN_1476bb2a6 body=434 status=ok
// SIG undefined FUN_1476bb2a6(void)

longlong * FUN_1476bb2a6(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  dVar9 = (double)(int)*(undefined8 *)(lVar4 + 0x118);
  dVar2 = (double)(int)((ulonglong)*(undefined8 *)(lVar4 + 0x118) >> 0x20);
  dVar8 = dVar9 / dVar2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar8;
  auVar12 = roundpd(auVar12,auVar12,1);
  dVar11 = auVar12._0_8_;
  dVar8 = dVar8 - dVar11;
  if (2147483647.0 <= dVar11) {
    dVar11 = 2147483647.0;
  }
  if (dVar11 <= -2147483648.0) {
    dVar11 = -2147483648.0;
  }
  iVar6 = (int)dVar8 + (int)dVar11;
  fVar7 = (float)FUN_147571136(param_2);
  if (((fVar7 != 10000.0) || (NAN(fVar7))) && (0.0 < fVar7)) {
    dVar2 = (dVar9 * (double)fVar7) / dVar2;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar2;
    auVar12 = roundpd(auVar10,auVar10,1);
    dVar9 = auVar12._0_8_;
    dVar2 = dVar2 - dVar9;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    iVar6 = (int)dVar2 + (int)dVar9;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 800))(param_1);
  if (plVar5 != (longlong *)0x0) {
    lVar4 = FUN_1459908d6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) goto LAB_1476bb3b9;
  }
  plVar5 = (longlong *)0x0;
LAB_1476bb3b9:
  plVar1 = param_1 + 0x1f;
  (**(code **)(*plVar5 + 0x308))(plVar5,plVar1,param_3,iVar6,param_4);
  FUN_1475bf286(plVar5,param_2);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  iVar6 = (int)param_1[0x20];
  *(uint *)(param_1 + 0x20) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar6 + 1U) {
    FUN_14759143a(plVar1,iVar6);
  }
  *(longlong **)(*plVar1 + (longlong)iVar6 * 8) = plVar5;
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  return plVar5;
}



// FUNCTION 1476bb45d FUN_1476bb45d body=174 status=ok
// SIG undefined FUN_1476bb45d(void)

undefined8 FUN_1476bb45d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459908d6();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb50c FUN_1476bb50c body=107 status=ok
// SIG undefined FUN_1476bb50c(void)

void FUN_1476bb50c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_1459908d6();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar3 + 0x358))(plVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1476bb57c FUN_1476bb57c body=75 status=ok
// SIG undefined FUN_1476bb57c(void)

bool FUN_1476bb57c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bb5b0;
    }
  }
  lVar2 = 0;
LAB_1476bb5b0:
  lVar1 = FUN_140d48730();
  return lVar2 == lVar1;
}



// FUNCTION 1476bb5c8 FUN_1476bb5c8 body=40 status=ok
// SIG undefined FUN_1476bb5c8(void)

void FUN_1476bb5c8(undefined8 param_1)

{
  FUN_1476bb5f0(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476bb5f0 FUN_1476bb5f0 body=217 status=ok
// SIG undefined FUN_1476bb5f0(void)

undefined8
FUN_1476bb5f0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_140d48730();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb6ca FUN_1476bb6ca body=160 status=ok
// SIG undefined FUN_1476bb6ca(void)

longlong FUN_1476bb6ca(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_178 [32];
  undefined **local_158 [5];
  longlong local_130;
  undefined1 local_120 [264];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1475b678a(local_158,param_3,param_1 + -0x128);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1476c327c(param_2,local_158);
  local_158[0] = &PTR_FUN_14a4c7eb0;
  FUN_140bb7e7c(local_120);
  local_158[0] = &PTR_FUN_14a47b390;
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb770 FUN_1476bb770 body=75 status=ok
// SIG undefined FUN_1476bb770(void)

bool FUN_1476bb770(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bb7a4;
    }
  }
  lVar2 = 0;
LAB_1476bb7a4:
  lVar1 = FUN_141174908();
  return lVar2 == lVar1;
}



// FUNCTION 1476bb7bc FUN_1476bb7bc body=63 status=ok
// SIG undefined FUN_1476bb7bc(void)

longlong FUN_1476bb7bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1476bb7fb();
  lVar1 = *(longlong *)(param_1 + 0x128);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(lVar2 + 0x180) = lVar1;
  return lVar2;
}



// FUNCTION 1476bb7fb FUN_1476bb7fb body=174 status=ok
// SIG undefined FUN_1476bb7fb(void)

undefined8 FUN_1476bb7fb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_141174908();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb8aa FUN_1476bb8aa body=8 status=ok
// SIG undefined FUN_1476bb8aa(void)

undefined8 FUN_1476bb8aa(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 1476bb8c6 FUN_1476bb8c6 body=174 status=ok
// SIG undefined FUN_1476bb8c6(void)

undefined8 FUN_1476bb8c6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1410cba2a();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bb976 FUN_1476bb976 body=189 status=ok
// SIG undefined FUN_1476bb976(void)

void FUN_1476bb976(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x110) == '\x01') {
    if (*(char *)(param_1 + 0xf8) == '\x01') {
      FUN_147570c2e(param_1 + 0x100,param_2,1,0);
      if ((DAT_14c950c29 == '\x01') && (iVar2 = *(int *)(param_1 + 0x108), 0 < iVar2)) {
        lVar1 = *(longlong *)(param_1 + 0x100);
        lVar3 = 0;
        do {
          if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
            FUN_14689c22e();
            iVar2 = *(int *)(param_1 + 0x108);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
    }
    else {
      FUN_1475708d6(param_1 + 0x100,param_2,1,0);
      if ((DAT_14c950c29 == '\x01') && (iVar2 = *(int *)(param_1 + 0x108), 0 < iVar2)) {
        lVar1 = *(longlong *)(param_1 + 0x100);
        lVar3 = 0;
        do {
          if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
            FUN_14689c22e();
            iVar2 = *(int *)(param_1 + 0x108);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
    }
  }
  return;
}



// FUNCTION 1476bba34 FUN_1476bba34 body=157 status=ok
// SIG undefined FUN_1476bba34(void)

void FUN_1476bba34(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1410cba2a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x108);
      *(uint *)(param_1 + 0x108) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476bbad2 FUN_1476bbad2 body=75 status=ok
// SIG undefined FUN_1476bbad2(void)

bool FUN_1476bbad2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bbb06;
    }
  }
  lVar2 = 0;
LAB_1476bbb06:
  lVar1 = FUN_1410cba2a();
  return lVar2 == lVar1;
}



// FUNCTION 1476bbb28 FUN_1476bbb28 body=599 status=ok
// SIG undefined FUN_1476bbb28(void)

byte FUN_1476bbb28(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  int iStack_64;
  char cStack_60;
  undefined1 auStack_5c [4];
  undefined1 local_58 [8];
  undefined4 uStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar4 = 0;
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    bVar4 = 3;
    if (*param_2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x108);
      uVar7 = (ulonglong)uVar1;
      bVar4 = 0xf;
      if ((uVar7 != 1) && (bVar4 = 3, 1 < (int)uVar1)) {
        if (*(char *)(param_1 + 0x110) == '\x01') {
          uVar8 = (ulonglong)(uVar1 - 1);
          FUN_14073c474(**(undefined8 **)(param_1 + 0x100),&local_68);
          FUN_14073c474(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + uVar8 * 8),local_58);
          FUN_14073c474(*param_2,&local_78);
          uVar5 = 0;
          uVar6 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + uVar5 * 8);
            FUN_14073c474(lVar2,&local_88);
            if (lVar2 != *param_2) {
              cVar3 = FUN_147557108(&local_88,&local_78);
              if (cVar3 != '\0') {
                bVar4 = 0;
                goto LAB_1476bbd23;
              }
            }
            if (((char)local_68 != '\x02') &&
               (((char)local_88 == '\x02' || (iStack_84 < iStack_64)))) {
              local_68 = local_88;
              iStack_64 = iStack_84;
              uVar6 = uVar5 & 0xffffffff;
            }
            if (((char)uStack_50 != '\x02') &&
               (((char)uStack_80 == '\x02' || (iStack_4c < iStack_7c)))) {
              uStack_50 = uStack_80;
              iStack_4c = iStack_7c;
              uVar8 = uVar5 & 0xffffffff;
            }
            uVar5 = uVar5 + 1;
          } while (uVar7 != uVar5);
          bVar4 = (*(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)uVar6 * 8) ==
                  *param_2) * '\x04' +
                  (*(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)uVar8 * 8) ==
                  *param_2) * '\b' + 3;
        }
        else {
          FUN_14073c474(*param_2,&local_68);
          bVar4 = 0xf;
          uVar6 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + uVar6 * 8);
            local_78 = ((ulonglong)*(uint *)(lVar2 + 0x9c) << 0x20) + 1;
            if (*(char *)(lVar2 + 0x98) == '\x02') {
              local_78 = 2;
            }
            local_70 = ((ulonglong)*(uint *)(lVar2 + 0xa4) << 0x20) + 1;
            if (*(char *)(lVar2 + 0xa0) == '\x02') {
              local_70 = 2;
            }
            if (lVar2 != *param_2) {
              if ((char)local_68 != '\x02') {
                cVar3 = FUN_1400a246c(&local_78,&iStack_64);
                if (cVar3 != '\0') {
                  bVar4 = bVar4 & 0xfb;
                }
              }
              if (cStack_60 != '\x02') {
                cVar3 = FUN_1400a246c(&local_78,auStack_5c);
                if (cVar3 != '\0') {
                  bVar4 = bVar4 & 0xf7;
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar7 != uVar6);
        }
      }
    }
  }
LAB_1476bbd23:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bbdc4 FUN_1476bbdc4 body=191 status=ok
// SIG undefined FUN_1476bbdc4(void)

void FUN_1476bbdc4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_28 = &local_30;
  FUN_1475914c0(param_1 + 0x100);
  FUN_1476bb976(param_1,param_2);
  FUN_14756fffa(param_1 + 0x100);
  if (DAT_14c950c29 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x108);
    if (0 < iVar2) {
      lVar1 = *(longlong *)(param_1 + 0x100);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
          FUN_14689c22e();
          iVar2 = *(int *)(param_1 + 0x108);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bbe84 FUN_1476bbe84 body=176 status=ok
// SIG undefined FUN_1476bbe84(void)

void FUN_1476bbe84(longlong param_1,uint param_2)

{
  void *_Dst;
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8);
  iVar3 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar3 + -1;
  FUN_1475915fe(param_1 + 0x100);
  FUN_1476bb976(param_1,uVar1);
  FUN_14756fffa(param_1 + 0x100);
  if (DAT_14c950c29 == '\x01') {
    iVar3 = *(int *)(param_1 + 0x108);
    if (0 < iVar3) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4 * 8) != 0) {
          FUN_14689c22e();
          iVar3 = *(int *)(param_1 + 0x108);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  return;
}



// FUNCTION 1476bbf56 FUN_1476bbf56 body=63 status=ok
// SIG undefined FUN_1476bbf56(void)

void FUN_1476bbf56(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x100);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1475c44a0();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1476bbfa2 FUN_1476bbfa2 body=75 status=ok
// SIG undefined FUN_1476bbfa2(void)

bool FUN_1476bbfa2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bbfd6;
    }
  }
  lVar2 = 0;
LAB_1476bbfd6:
  lVar1 = FUN_145b34236();
  return lVar2 == lVar1;
}



// FUNCTION 1476bbff3 FUN_1476bbff3 body=174 status=ok
// SIG undefined FUN_1476bbff3(void)

undefined8 FUN_1476bbff3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34236();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bc0fc FUN_1476bc0fc body=131 status=ok
// SIG undefined FUN_1476bc0fc(void)

void FUN_1476bc0fc(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476bc180 FUN_1476bc180 body=106 status=ok
// SIG undefined FUN_1476bc180(void)

void FUN_1476bc180(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bc1ec FUN_1476bc1ec body=95 status=ok
// SIG undefined FUN_1476bc1ec(void)

void FUN_1476bc1ec(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 1476bc25c FUN_1476bc25c body=75 status=ok
// SIG undefined FUN_1476bc25c(void)

bool FUN_1476bc25c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bc290;
    }
  }
  lVar2 = 0;
LAB_1476bc290:
  lVar1 = FUN_145b34320();
  return lVar2 == lVar1;
}



// FUNCTION 1476bc2ad FUN_1476bc2ad body=174 status=ok
// SIG undefined FUN_1476bc2ad(void)

undefined8 FUN_1476bc2ad(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b34320();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bc390 FUN_1476bc390 body=131 status=ok
// SIG undefined FUN_1476bc390(void)

void FUN_1476bc390(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476bc414 FUN_1476bc414 body=199 status=ok
// SIG undefined FUN_1476bc414(void)

void FUN_1476bc414(longlong param_1,longlong param_2)

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
  
  iVar1 = *(int *)(param_1 + 0x100);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    plVar2 = *(longlong **)(param_1 + 0xf8);
    iVar6 = 0;
    bVar11 = *plVar2 == param_2;
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
      } while (bVar11 == (plVar2[lVar7] == param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 0x100) = iVar6;
  }
  return;
}



// FUNCTION 1476bc4dc FUN_1476bc4dc body=95 status=ok
// SIG undefined FUN_1476bc4dc(void)

void FUN_1476bc4dc(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 1476bc576 FUN_1476bc576 body=274 status=ok
// SIG undefined FUN_1476bc576(void)

longlong * FUN_1476bc576(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_145b3414c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_14073751e();
      lVar3 = FUN_144a78ede(param_1,uVar4);
      dVar5 = ((double)(int)*(undefined8 *)(lVar3 + 0x118) * 5.0) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x118) >> 0x20);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar5;
      auVar7 = roundpd(auVar7,auVar7,1);
      dVar6 = auVar7._0_8_;
      dVar5 = dVar5 - dVar6;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      uVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
      (**(code **)(*plVar2 + 0x300))(plVar2,param_1 + 0x1f,param_2,(int)dVar5 + (int)dVar6,uVar1);
      lVar3 = *param_3;
      if (DAT_14c950c29 == '\x01') {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_14689c22e();
          lVar3 = *param_3;
        }
      }
      plVar2[0x20] = lVar3;
      (**(code **)(*param_1 + 0x318))(param_1,plVar2);
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1476bc690 FUN_1476bc690 body=75 status=ok
// SIG undefined FUN_1476bc690(void)

bool FUN_1476bc690(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bc6c4;
    }
  }
  lVar2 = 0;
LAB_1476bc6c4:
  lVar1 = FUN_145b3414c();
  return lVar2 == lVar1;
}



// FUNCTION 1476bc6e1 FUN_1476bc6e1 body=174 status=ok
// SIG undefined FUN_1476bc6e1(void)

undefined8 FUN_1476bc6e1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3414c();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bc7ea FUN_1476bc7ea body=131 status=ok
// SIG undefined FUN_1476bc7ea(void)

void FUN_1476bc7ea(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476bc86e FUN_1476bc86e body=106 status=ok
// SIG undefined FUN_1476bc86e(void)

void FUN_1476bc86e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bc8da FUN_1476bc8da body=95 status=ok
// SIG undefined FUN_1476bc8da(void)

void FUN_1476bc8da(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 1476bc94a FUN_1476bc94a body=123 status=ok
// SIG undefined FUN_1476bc94a(void)

longlong FUN_1476bc94a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_147588294();
  if (lVar3 != 0) {
    FUN_140298736();
  }
  FUN_14756fffa(param_1 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x100);
    if (0 < iVar2) {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
          FUN_14689c22e();
          iVar2 = *(int *)(param_1 + 0x100);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
  }
  return lVar3;
}



// FUNCTION 1476bc9c6 FUN_1476bc9c6 body=162 status=ok
// SIG undefined FUN_1476bc9c6(void)

void FUN_1476bc9c6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140298736();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
      FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1476bca68 FUN_1476bca68 body=75 status=ok
// SIG undefined FUN_1476bca68(void)

bool FUN_1476bca68(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bca9c;
    }
  }
  lVar2 = 0;
LAB_1476bca9c:
  lVar1 = FUN_140298736();
  return lVar2 == lVar1;
}



// FUNCTION 1476bcab9 FUN_1476bcab9 body=174 status=ok
// SIG undefined FUN_1476bcab9(void)

undefined8 FUN_1476bcab9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_140298736();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bcb68 FUN_1476bcb68 body=177 status=ok
// SIG undefined FUN_1476bcb68(void)

void FUN_1476bcb68(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_28 = &local_30;
  FUN_1475914c0(param_1 + 0xf8);
  FUN_14756fffa(param_1 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x100);
    if (0 < iVar2) {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
          FUN_14689c22e();
          iVar2 = *(int *)(param_1 + 0x100);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bcc1a FUN_1476bcc1a body=165 status=ok
// SIG undefined FUN_1476bcc1a(void)

void FUN_1476bcc1a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar2 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  FUN_14756fffa(param_1 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x100);
    if (0 < iVar2) {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
          FUN_14689c22e();
          iVar2 = *(int *)(param_1 + 0x100);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 1476bccc4 FUN_1476bccc4 body=621 status=ok
// SIG undefined FUN_1476bccc4(void)

undefined8 FUN_1476bccc4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [32];
  undefined1 **local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  iVar4 = *(int *)(param_1 + 0x100);
  if (iVar4 < 1) {
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    do {
      uVar7 = local_50;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar8 * 8);
      if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0xc0) & 1) != 0)) {
        if ((*(char *)(lVar9 + 0xa0) == '\x02' || *(char *)(lVar9 + 0x98) == '\x02') ||
           ((*(int *)(lVar9 + 0x9c) <= *(int *)(lVar9 + 0xa4) &&
            ((*(int *)(lVar9 + 0x9c) != *(int *)(lVar9 + 0xa4) ||
             (*(char *)(lVar9 + 0xa0) != '\0' && *(char *)(lVar9 + 0x98) != '\0')))))) {
          uVar1 = *(undefined4 *)(lVar9 + 0xb8);
          uVar2 = *(undefined4 *)(lVar9 + 0xbc);
          lVar9 = (longlong)(int)local_50;
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_1476c32e8(local_118,uVar7 & 0xffffffff);
          }
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_118;
          }
          *(undefined4 *)(puVar6 + lVar9 * 0xc) = uVar1;
          *(undefined4 *)(puVar6 + lVar9 * 0xc + 4) = uVar2;
          *(int *)(puVar6 + lVar9 * 0xc + 8) = (int)lVar8;
          iVar4 = *(int *)(param_1 + 0x100);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
    uVar7 = local_50 & 0xffffffff;
  }
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_118;
  }
  FUN_1476c3407(puVar6,uVar7);
  puVar6 = local_118;
  if (local_58 != (undefined1 *)0x0) {
    puVar6 = local_58;
  }
  lVar8 = (longlong)(int)local_50;
  if (lVar8 != 0) {
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0xf8) + (longlong)*(int *)(puVar6 + lVar9 + 8) * 8);
      FUN_1475847ae(&local_188,lVar3);
      local_158 = *(undefined8 *)(lVar3 + 0x98);
      uStack_150 = *(undefined8 *)(lVar3 + 0xa0);
      local_160 = &local_170;
      local_168 = &LAB_1476c3a12;
      local_120 = local_178;
      local_130 = local_188;
      uStack_12c = uStack_184;
      uStack_128 = uStack_180;
      uStack_124 = uStack_17c;
      local_140 = &PTR_FUN_14a475c08;
      local_198 = &local_168;
      local_170 = param_2;
      local_138 = param_2;
      FUN_1475569d4(param_2,&local_158,&local_140,0xffffffff);
      lVar9 = lVar9 + 0xc;
    } while (lVar8 * 0xc != lVar9);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1476bcf42 FUN_1476bcf42 body=75 status=ok
// SIG undefined FUN_1476bcf42(void)

bool FUN_1476bcf42(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bcf76;
    }
  }
  lVar2 = 0;
LAB_1476bcf76:
  lVar1 = FUN_145b3440a();
  return lVar2 == lVar1;
}



// FUNCTION 1476bcf8e FUN_1476bcf8e body=40 status=ok
// SIG undefined FUN_1476bcf8e(void)

void FUN_1476bcf8e(undefined8 param_1)

{
  FUN_1476bcfb6(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476bcfb6 FUN_1476bcfb6 body=217 status=ok
// SIG undefined FUN_1476bcfb6(void)

undefined8
FUN_1476bcfb6(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b3440a();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bd094 FUN_1476bd094 body=75 status=ok
// SIG undefined FUN_1476bd094(void)

bool FUN_1476bd094(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bd0c8;
    }
  }
  lVar2 = 0;
LAB_1476bd0c8:
  lVar1 = FUN_145b344f4();
  return lVar2 == lVar1;
}



// FUNCTION 1476bd0e0 FUN_1476bd0e0 body=36 status=ok
// SIG undefined FUN_1476bd0e0(void)

longlong * FUN_1476bd0e0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1476bd104();
  (**(code **)(*plVar1 + 0x2c0))(plVar1,1);
  return plVar1;
}



// FUNCTION 1476bd104 FUN_1476bd104 body=174 status=ok
// SIG undefined FUN_1476bd104(void)

undefined8 FUN_1476bd104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b344f4();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bd1b4 FUN_1476bd1b4 body=60 status=ok
// SIG undefined FUN_1476bd1b4(void)

void FUN_1476bd1b4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_1475916a0(param_1 + 0x108,0);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}



// FUNCTION 1476bd228 FUN_1476bd228 body=159 status=ok
// SIG undefined FUN_1476bd228(void)

void FUN_1476bd228(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = (int)param_1[0x22];
  *(uint *)(param_1 + 0x22) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x114) < iVar1 + 1U) {
    FUN_14759143a(param_1 + 0x21,iVar1);
  }
  *(longlong *)(param_1[0x21] + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  if (1 < (int)param_1[0x22]) {
                    /* WARNING: Could not recover jumptable at 0x0001476bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1476bd2c8 FUN_1476bd2c8 body=172 status=ok
// SIG undefined FUN_1476bd2c8(void)

void FUN_1476bd2c8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_28 = &local_30;
  FUN_1475914c0();
  if (*(longlong *)(param_1 + 0x118) != param_2) goto LAB_1476bd324;
  if (*(int *)(param_1 + 0x110) < 1) {
LAB_1476bd36a:
    lVar2 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x108);
    lVar2 = *plVar1;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) goto LAB_1476bd36a;
      FUN_14689c22e();
      lVar2 = *plVar1;
    }
  }
  *(longlong *)(param_1 + 0x118) = lVar2;
LAB_1476bd324:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bd376 FUN_1476bd376 body=234 status=ok
// SIG undefined FUN_1476bd376(void)

void FUN_1476bd376(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar4 * 8);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x110);
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x108) + lVar4 * 8),
            (void *)(*(longlong *)(param_1 + 0x108) + lVar4 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x110);
  }
  *(int *)(param_1 + 0x110) = iVar2 + -1;
  FUN_1475915fe((undefined8 *)(param_1 + 0x108));
  if (lVar1 == lVar3) {
    if (*(int *)(param_1 + 0x110) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 0x108);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar3);
      }
    }
    *(longlong *)(param_1 + 0x118) = lVar3;
  }
  return;
}



// FUNCTION 1476bd470 FUN_1476bd470 body=48 status=ok
// SIG undefined FUN_1476bd470(void)

void FUN_1476bd470(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x118) = param_2;
  return;
}



// FUNCTION 1476bd4b2 FUN_1476bd4b2 body=150 status=ok
// SIG undefined FUN_1476bd4b2(void)

void FUN_1476bd4b2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined **local_30;
  undefined2 local_28;
  uint local_26;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_28 = *(undefined2 *)(lVar2 + 0xf12);
  local_26 = ((*(ushort *)(param_2 + 0xd9) & 0x100) << 8 | (uint)*(ushort *)(lVar1 + 0x110)) ^
             0x10000;
  local_22 = 0;
  local_30 = &PTR_FUN_14a4ec210;
  FUN_1476bd54a(param_5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bd54a FUN_1476bd54a body=157 status=ok
// SIG undefined FUN_1476bd54a(void)

void FUN_1476bd54a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined4 uStack_20;
  undefined3 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = (undefined3)((uint)*(undefined4 *)(param_2 + 0xb) >> 8);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4ec210;
  *(undefined4 *)(puVar1 + 1) = uStack_20;
  *(uint *)((longlong)puVar1 + 0xb) = CONCAT31(uStack_1c,uStack_20._3_1_);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bd5e8 FUN_1476bd5e8 body=889 status=ok
// SIG undefined FUN_1476bd5e8(void)

undefined8 FUN_1476bd5e8(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  longlong local_b0;
  char local_9c;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1 = param_1 + -0xf8;
  plVar8 = (longlong *)FUN_1456c5f90(param_1);
  if ((longlong)(int)plVar8[1] != 0) {
    puVar1 = param_2 + 1;
    lVar17 = (longlong)(int)plVar8[1] << 5;
    puVar16 = (ulonglong *)(*plVar8 + 0x10);
    do {
      if (puVar16[-2] != 0) {
        uVar9 = FUN_145b344f4();
        bVar6 = FUN_144a7ca96(puVar16 + -2,uVar9);
        uVar5 = puVar16[-2];
        if (((uVar5 != 0 & bVar6) == 1) &&
           (cVar7 = FUN_14758438e(param_1,*(undefined4 *)(uVar5 + 0xb8)), cVar7 == '\0')) {
          cVar7 = (char)*param_2;
          if (((cVar7 == '\x02') || ((char)*puVar1 == '\x02')) ||
             ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
              ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
               ((char)*puVar1 != '\0' && cVar7 != '\0')))))) {
            puVar2 = puVar16 + -1;
            cVar3 = (char)*puVar2;
            if (((cVar3 == '\x02') || ((char)*puVar16 == '\x02')) ||
               ((*(int *)((longlong)puVar16 + -4) <= *(int *)((longlong)puVar16 + 4) &&
                ((*(int *)((longlong)puVar16 + -4) != *(int *)((longlong)puVar16 + 4) ||
                 ((char)*puVar16 != '\0' && cVar3 != '\0')))))) {
              puVar14 = puVar16;
              if (((char)*puVar1 != '\x02') && (puVar14 = puVar1, (char)*puVar16 != '\x02')) {
                if (((*(int *)((longlong)puVar16 + 4) <= *(int *)((longlong)param_2 + 0xc)) &&
                    (puVar14 = puVar16,
                    *(int *)((longlong)param_2 + 0xc) <= *(int *)((longlong)puVar16 + 4))) &&
                   ((char)*puVar1 == '\0')) {
                  puVar14 = puVar1;
                }
              }
              puVar15 = puVar2;
              if ((cVar7 != '\x02') && (puVar15 = param_2, cVar3 != '\x02')) {
                if ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)puVar16 + -4)) &&
                   ((puVar15 = puVar2,
                    *(int *)((longlong)puVar16 + -4) <= *(int *)((longlong)param_2 + 4) &&
                    (cVar7 == '\0')))) {
                  puVar15 = param_2;
                }
              }
              local_90 = *puVar15;
              local_88 = *puVar14;
              if (((char)local_90 != '\x02') && ((char)local_88 != '\x02')) {
                iVar13 = (int)(local_90 >> 0x20);
                iVar12 = (int)(local_88 >> 0x20);
                if ((iVar12 < iVar13) ||
                   ((iVar13 == iVar12 && (((char)local_90 == '\0' || ((char)local_88 == '\0'))))))
                goto LAB_1476bd68f;
              }
              FUN_1475376e2(&local_d8,param_3);
              local_9c = *(char *)((longlong)puVar16 + 0xc);
              if (puVar16[-2] != 0) {
                local_e0 = param_4;
                lVar10 = FUN_147571e62(param_1,puVar16[-2],1);
                if (lVar10 == 0) {
                  local_d8 = 0;
                  uStack_d0 = 0;
                  local_c8 = 0;
                  uStack_b8 = 0;
                  if (iStack_b4 < 0) {
                    FUN_1446f8c06(&local_c0,0);
                  }
                  param_4 = local_e0;
                  if ((undefined2 *)CONCAT44(uStack_bc,local_c0) != (undefined2 *)0x0) {
                    *(undefined2 *)CONCAT44(uStack_bc,local_c0) = 0;
                  }
                }
                else {
                  FUN_1400bbfae(&local_80,lVar10);
                  uStack_d0 = CONCAT44(uStack_7c,local_80);
                  local_c8 = CONCAT44(uStack_74,uStack_78);
                  if (CONCAT44(uStack_bc,local_c0) != 0) {
                    FUN_1400020a8();
                  }
                  local_c0 = local_70;
                  uStack_bc = uStack_6c;
                  uStack_b8 = uStack_68;
                  iStack_b4 = iStack_64;
                  cVar7 = (*(code *)PTR_FUN_14c758760)();
                  if (cVar7 != '\0') {
                    uVar4 = *(uint *)(lVar10 + 0xc);
                    if ((int)uVar4 < DAT_14c9647dc) {
                      lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                    }
                    else {
                      lVar11 = 0;
                    }
                    if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) {
                      local_d8 = 0;
                      param_4 = local_e0;
                      goto LAB_1476bd80b;
                    }
                  }
                  FUN_14485c47a(&local_d8,lVar10);
                  param_4 = local_e0;
                }
              }
LAB_1476bd80b:
              FUN_1475c72ec(uVar5,&local_90,&local_d8,param_4);
              if (local_b0 != 0) {
                FUN_1400020a8();
              }
              if (CONCAT44(uStack_bc,local_c0) != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
LAB_1476bd68f:
      puVar16 = puVar16 + 4;
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bd966 FUN_1476bd966 body=157 status=ok
// SIG undefined FUN_1476bd966(void)

void FUN_1476bd966(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145a67e28();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476bda04 FUN_1476bda04 body=75 status=ok
// SIG undefined FUN_1476bda04(void)

bool FUN_1476bda04(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476bda38;
    }
  }
  lVar2 = 0;
LAB_1476bda38:
  lVar1 = FUN_145a67e28();
  return lVar2 == lVar1;
}



// FUNCTION 1476bda55 FUN_1476bda55 body=174 status=ok
// SIG undefined FUN_1476bda55(void)

undefined8 FUN_1476bda55(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a67e28();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bdb58 FUN_1476bdb58 body=106 status=ok
// SIG undefined FUN_1476bdb58(void)

void FUN_1476bdb58(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476bdbc4 FUN_1476bdbc4 body=165 status=ok
// SIG undefined FUN_1476bdbc4(void)

void FUN_1476bdbc4(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar2 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  FUN_14756fffa(param_1 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x100);
    if (0 < iVar2) {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
          FUN_14689c22e();
          iVar2 = *(int *)(param_1 + 0x100);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 1476bdc9c FUN_1476bdc9c body=131 status=ok
// SIG undefined FUN_1476bdc9c(void)

void FUN_1476bdc9c(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1476bdd20 FUN_1476bdd20 body=106 status=ok
// SIG undefined FUN_1476bdd20(void)

void FUN_1476bdd20(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


