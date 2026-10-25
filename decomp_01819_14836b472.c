// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14836b472 FUN_14836b472 body=111 status=ok
// SIG undefined FUN_14836b472(void)

undefined4 FUN_14836b472(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x30) * 0x200 + *(int *)(param_1 + 0x34))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8)
                       + (ulonglong)(param_2 & 0x1ff) * 4);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      uVar2 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 9) * 8) +
               (ulonglong)(uVar1 & 0x1ff) * 4);
    }
  }
  return uVar2;
}



// FUNCTION 14836b4e1 FUN_14836b4e1 body=172 status=ok
// SIG undefined FUN_14836b4e1(void)

int FUN_14836b4e1(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)(int)param_2[1];
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a127d2(local_38,(int)param_2[1],1);
  if (lVar2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = FUN_146be99b0(param_1,*(undefined4 *)(*param_2 + lVar4 * 4));
      *(undefined4 *)(local_38[0] + lVar4 * 4) = uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar4 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + *(int *)(local_38[0] + lVar4 * 4) + 1;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14836b58e FUN_14836b58e body=98 status=ok
// SIG undefined FUN_14836b58e(void)

void FUN_14836b58e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  FUN_14836b5f0(param_3,iVar1,1);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      FUN_1483a21d0(*param_3 + lVar3,param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x50;
    } while (iVar1 != lVar2);
  }
  return;
}



// FUNCTION 14836b5f0 FUN_14836b5f0 body=78 status=ok
// SIG undefined FUN_14836b5f0(void)

void FUN_14836b5f0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14836b640();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14836b6d4();
      return;
    }
  }
  return;
}



// FUNCTION 14836b640 FUN_14836b640 body=147 status=ok
// SIG undefined FUN_14836b640(void)

void FUN_14836b640(longlong param_1,int param_2)

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



// FUNCTION 14836b6d4 FUN_14836b6d4 body=63 status=ok
// SIG undefined FUN_14836b6d4(void)

void FUN_14836b6d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14836b714(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14836b714 FUN_14836b714 body=117 status=ok
// SIG undefined FUN_14836b714(void)

ulonglong FUN_14836b714(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x50) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 14836b792 FUN_14836b792 body=139 status=ok
// SIG undefined FUN_14836b792(void)

void FUN_14836b792(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar3 = (ulonglong)(param_2 & 0x1ff);
  iVar1 = *(int *)param_1[3];
  if (*(int *)(lVar2 + uVar3 * 0xc) == iVar1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 1;
    if (*(int *)(lVar2 + uVar3 * 0xc + 4) != iVar1) {
      lVar4 = (ulonglong)(*(int *)(lVar2 + 8 + uVar3 * 0xc) == iVar1) * 3 + -1;
    }
  }
  *(double *)param_1[4] =
       *(double *)
        (*(longlong *)param_1[1] +
         (longlong)*(int *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4) * 0x50 + 0x20 +
        lVar4 * 8) + *(double *)param_1[4];
  return;
}



// FUNCTION 14836b81d FUN_14836b81d body=978 status=ok
// SIG undefined FUN_14836b81d(void)

void FUN_14836b81d(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1e8 [40];
  undefined1 local_1c0 [8];
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  undefined1 local_178 [112];
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [72];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_e8 = *(undefined8 *)(param_2 + 0x28);
  local_d8 = *(undefined8 *)(param_2 + 0x30);
  local_d0 = 0;
  FUN_14836bd64(local_c8,param_2 + 0x40);
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 8);
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10),lVar7);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar8 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4);
        FUN_14836bbf0(local_178,local_f8,lVar9);
        while (lVar3 = local_100, uVar5 = local_108, -1 < local_100) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4);
          *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = iVar1 + 1;
          lVar6 = *(longlong *)(param_1 + 0x38);
          FUN_146de554a(param_1 + 0x28,lVar6 + 1,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8) = 0;
          *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = (int)lVar3;
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar5;
          FUN_14836bc92(local_178);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar7 = *(longlong *)(param_1 + 8), -1 < lVar7)) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      lVar9 = lVar7;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) != 0) goto LAB_14836ba01;
        bVar4 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar4);
      lVar9 = -1;
LAB_14836ba01:
      if (lVar9 < lVar7) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = uVar2;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(longlong *)(param_1 + 8));
      }
    }
  }
  else {
    local_1c0[0] = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    lStack_1a0 = 0;
    local_198 = 0;
    lStack_190 = 0;
    local_188 = 0;
    lStack_180 = 0;
    FUN_146de45bc(local_1c0,*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10),lVar7);
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (lStack_180 < lVar8 + local_188) {
      FUN_146de55aa(&local_198);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(local_1a8 + 4 + lVar9 * 4) = *(undefined4 *)(local_1a8 + lVar9 * 4);
        FUN_14836bbf0(local_178,local_f8,lVar9);
        while (lVar6 = local_100, uVar5 = local_108, lVar3 = local_188, -1 < local_100) {
          iVar1 = *(int *)(local_1a8 + 4 + lVar9 * 4);
          *(int *)(local_1a8 + 4 + lVar9 * 4) = iVar1 + 1;
          FUN_146de554a(&local_198,local_188 + 1,0);
          *(undefined8 *)(local_198 + lVar3 * 8) = 0;
          *(int *)(lStack_190 + lVar3 * 4) = (int)lVar6;
          *(undefined8 *)(local_198 + (longlong)iVar1 * 8) = uVar5;
          FUN_14836bc92(local_178);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((lStack_1a0 == 0) && (-1 < local_1b8)) {
      lVar7 = local_1b8;
      do {
        if (*(int *)(local_1a8 + lVar7 * 4) != 0) goto joined_r0x00014836bb75;
        bVar4 = 0 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar4);
      lVar7 = -1;
joined_r0x00014836bb75:
      for (; lVar7 < local_1b8; lVar7 = lVar7 + 1) {
        *(undefined4 *)(local_1a8 + 4 + lVar7 * 4) = (undefined4)local_188;
      }
    }
    local_1c0[0] = 1;
    FUN_146de5a4e(param_1,local_1c0);
    FUN_146de5508(local_1c0);
  }
  FUN_146de5508(local_b8);
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836bbf0 FUN_14836bbf0 body=162 status=ok
// SIG undefined FUN_14836bbf0(void)

void FUN_14836bbf0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = param_2 + 0x10;
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[1] = *(longlong *)(lVar1 + 0x28);
  param_1[2] = *(longlong *)(lVar1 + 0x30);
  param_1[3] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[4] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[5] = lVar2;
  param_1[6] = param_2 + 8;
  param_1[7] = param_3;
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[8] = *(longlong *)(lVar1 + 0x28);
  param_1[9] = *(longlong *)(lVar1 + 0x30);
  param_1[10] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[0xb] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[0xc] = lVar2;
  param_1[0xd] = param_2;
  FUN_14836bc92();
  return;
}



// FUNCTION 14836bc92 FUN_14836bc92 body=210 status=ok
// SIG undefined FUN_14836bc92(void)

void FUN_14836bc92(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = param_1[4];
  if (lVar2 < (longlong)param_1[5]) {
    lVar3 = param_1[0xb];
    iVar1 = *(int *)(param_1[2] + lVar2 * 4);
    if ((longlong)param_1[0xc] <= lVar3) {
LAB_14836bd24:
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = *(double *)*param_1 * *(double *)(param_1[1] + lVar2 * 8) + 0.0;
      param_1[4] = lVar2 + 1;
      return;
    }
    iVar4 = *(int *)(param_1[9] + lVar3 * 4);
    if (iVar1 == iVar4) {
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = *(double *)*param_1 * *(double *)(param_1[1] + lVar2 * 8) +
                     *(double *)(param_1[8] + lVar3 * 8);
      param_1[4] = lVar2 + 1;
      goto LAB_14836bd17;
    }
    if (iVar1 < iVar4) goto LAB_14836bd24;
    if (iVar1 <= iVar4) goto LAB_14836bd53;
  }
  else {
    lVar3 = param_1[0xb];
    if ((longlong)param_1[0xc] <= lVar3) {
LAB_14836bd53:
      param_1[0xe] = 0;
      param_1[0xf] = 0xffffffffffffffff;
      return;
    }
    iVar4 = *(int *)(param_1[9] + lVar3 * 4);
  }
  param_1[0xf] = (longlong)iVar4;
  param_1[0xe] = *(double *)(param_1[8] + lVar3 * 8) + 0.0;
LAB_14836bd17:
  param_1[0xb] = lVar3 + 1;
  return;
}



// FUNCTION 14836bd64 FUN_14836bd64 body=105 status=ok
// SIG undefined FUN_14836bd64(void)

undefined8 * FUN_14836bd64(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_146de45bc(puVar1,uVar3,uVar2);
  *param_1 = puVar1;
  param_1[1] = 0;
  FUN_14836bdce(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),puVar1);
  return param_1;
}



// FUNCTION 14836bdce FUN_14836bdce body=305 status=ok
// SIG undefined FUN_14836bdce(void)

void FUN_14836bdce(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_2 + 8) < *(longlong *)(param_1 + 0x10)) {
    local_88[0] = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146de45bc(local_88);
    FUN_143b0f420(param_1,param_2,local_88,1);
    local_88[0] = 1;
    FUN_146de5a4e(param_3,local_88);
  }
  else {
    local_88[0] = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146de45bc(local_88);
    FUN_143b0f420(param_1,param_2,local_88,0);
    local_d0[0] = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_146de620e(local_d0,local_88);
    local_d0[0] = 1;
    FUN_146de570e(param_3,local_d0);
    FUN_146de3a5a(local_d0);
  }
  FUN_146de5508(local_88);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836bf00 FUN_14836bf00 body=464 status=ok
// SIG undefined FUN_14836bf00(void)

void FUN_14836bf00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [48];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar7 < 0x101) {
LAB_14836bf31:
    plVar3 = param_1 + 1;
    plVar5 = param_1;
    if (param_1 + 1 != param_2 && param_1 != param_2) {
      do {
        plVar2 = plVar3;
        lVar6 = plVar5[1];
        if (lVar6 < *param_1) {
          memmove((void *)((longlong)plVar5 + (0x10 - ((longlong)plVar2 - (longlong)param_1))),
                  param_1,(longlong)plVar2 - (longlong)param_1);
          plVar3 = param_1;
        }
        else {
          lVar4 = plVar2[-1];
          plVar3 = plVar2;
          while (lVar6 < lVar4) {
            *plVar3 = lVar4;
            plVar5 = plVar3 + -2;
            plVar3 = plVar3 + -1;
            lVar4 = *plVar5;
          }
        }
        *plVar3 = lVar6;
        plVar3 = plVar2 + 1;
        plVar5 = plVar2;
      } while (plVar2 + 1 != param_2);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      do {
        FUN_14836c0d1(&local_48,param_1,param_2);
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)local_48 - (longlong)param_1 < (longlong)param_2 - (longlong)local_40) {
          FUN_14836bf00(param_1,local_48,param_3);
          param_1 = local_40;
        }
        else {
          FUN_14836bf00(local_40,param_2,param_3);
          param_2 = local_48;
        }
        uVar7 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar7 < 0x101) goto LAB_14836bf31;
      } while (param_3 != 0);
    }
    uVar9 = uVar7 >> 4;
    do {
      uVar8 = uVar9 - 1;
      local_48 = (longlong *)param_1[uVar8];
      FUN_14836c252(param_1,uVar8,uVar7 >> 3,&local_48);
      bVar1 = 1 < uVar9;
      uVar9 = uVar8;
    } while (bVar1);
    lVar6 = (longlong)param_2 - (longlong)param_1;
    if (8 < lVar6) {
      do {
        param_2 = param_2 + -1;
        local_48 = (longlong *)*param_2;
        *param_2 = *param_1;
        lVar6 = lVar6 + -8;
        FUN_14836c252(param_1,0,lVar6 >> 3,&local_48);
      } while (8 < lVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14836c0d1 FUN_14836c0d1 body=385 status=ok
// SIG undefined FUN_14836c0d1(void)

undefined8 * FUN_14836c0d1(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 4;
  FUN_14836c2e2(param_2,param_2 + lVar8,param_3 + -1);
  plVar4 = param_2 + lVar8;
  do {
    plVar6 = plVar4;
    if (plVar6 <= param_2) break;
    plVar4 = plVar6 + -1;
  } while (*plVar6 == plVar6[-1]);
  plVar4 = param_2 + lVar8;
  do {
    plVar4 = plVar4 + 1;
    plVar5 = plVar4;
    plVar7 = plVar6;
    if (param_3 <= plVar4) break;
  } while (*plVar6 == *plVar4);
LAB_14836c139:
  do {
    plVar2 = plVar6;
    if (plVar5 < param_3) {
      lVar8 = *plVar5;
      if (lVar8 <= *plVar6) {
        if (lVar8 < *plVar6) goto joined_r0x00014836c166;
        if (plVar5 != plVar4) {
          lVar1 = *plVar4;
          *plVar4 = lVar8;
          *plVar5 = lVar1;
        }
        plVar4 = plVar4 + 1;
      }
      plVar5 = plVar5 + 1;
      goto LAB_14836c139;
    }
joined_r0x00014836c166:
    while (plVar3 = plVar7, param_2 < plVar3) {
      plVar7 = plVar3 + -1;
      lVar8 = plVar3[-1];
      if (*plVar2 <= lVar8) {
        if (*plVar2 < lVar8) break;
        plVar6 = plVar2 + -1;
        bVar9 = plVar3 != plVar2;
        plVar2 = plVar6;
        if (bVar9) {
          lVar1 = *plVar6;
          *plVar6 = lVar8;
          *plVar7 = lVar1;
        }
      }
    }
    if ((plVar5 == param_3) && (plVar3 == param_2)) {
      *param_1 = plVar2;
      param_1[1] = plVar4;
      return param_1;
    }
    if (plVar3 == param_2) {
      lVar8 = *plVar2;
      if (plVar4 != plVar5) {
        *plVar2 = *plVar4;
        *plVar4 = lVar8;
        lVar8 = *plVar2;
      }
      plVar4 = plVar4 + 1;
      *plVar2 = *plVar5;
      *plVar5 = lVar8;
      plVar6 = plVar2 + 1;
      plVar5 = plVar5 + 1;
      plVar7 = param_2;
    }
    else {
      plVar7 = plVar3 + -1;
      if (plVar5 == param_3) {
        plVar6 = plVar2 + -1;
        lVar8 = plVar2[-1];
        if (plVar3 != plVar2) {
          lVar8 = *plVar7;
          *plVar7 = plVar2[-1];
          *plVar6 = lVar8;
        }
        *plVar6 = plVar4[-1];
        plVar4[-1] = lVar8;
        plVar4 = plVar4 + -1;
      }
      else {
        lVar8 = *plVar5;
        *plVar5 = *plVar7;
        *plVar7 = lVar8;
        plVar5 = plVar5 + 1;
        plVar6 = plVar2;
      }
    }
  } while( true );
}



// FUNCTION 14836c252 FUN_14836c252 body=144 status=ok
// SIG undefined FUN_14836c252(void)

void FUN_14836c252(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar3) {
    if (*(longlong *)(param_1 + 0x10 + lVar1 * 0x10) < *(longlong *)(param_1 + 8 + lVar1 * 0x10)) {
      lVar2 = lVar1 * 2 + 1;
    }
    else {
      lVar2 = lVar1 * 2 + 2;
    }
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
    lVar1 = lVar2;
  }
  if (((param_3 & 1) == 0) && (lVar1 == lVar3)) {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar2 = lVar1 + -1 >> 1;
    lVar3 = *(longlong *)(param_1 + lVar2 * 8);
    if (*param_4 <= lVar3) break;
    *(longlong *)(param_1 + lVar1 * 8) = lVar3;
    lVar1 = lVar2;
  }
  *(longlong *)(param_1 + lVar1 * 8) = *param_4;
  return;
}



// FUNCTION 14836c2e2 FUN_14836c2e2 body=341 status=ok
// SIG undefined FUN_14836c2e2(void)

void FUN_14836c2e2(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar3 < 0x29) {
    lVar3 = *param_2;
    if (lVar3 < *param_1) {
      *param_2 = *param_1;
      *param_1 = lVar3;
      lVar3 = *param_2;
    }
    lVar1 = *param_3;
    if (lVar1 < lVar3) {
      *param_3 = lVar3;
      *param_2 = lVar1;
      if (lVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = lVar1;
      }
    }
  }
  else {
    uVar4 = lVar3 + 1;
    uVar2 = uVar4 >> 3;
    lVar3 = *(longlong *)((longlong)param_1 + (uVar4 & 0xfffffffffffffff8));
    if (lVar3 < *param_1) {
      param_1[uVar2] = *param_1;
      *param_1 = lVar3;
      lVar3 = param_1[uVar2];
    }
    lVar1 = param_1[uVar2 * 2];
    if (lVar1 < lVar3) {
      param_1[uVar2 * 2] = lVar3;
      param_1[uVar2] = lVar1;
      if (lVar1 < *param_1) {
        param_1[uVar2] = *param_1;
        *param_1 = lVar1;
      }
    }
    lVar3 = *param_2;
    if (lVar3 < param_2[-uVar2]) {
      *param_2 = param_2[-uVar2];
      param_2[-uVar2] = lVar3;
      lVar3 = *param_2;
    }
    lVar1 = param_2[uVar2];
    if (lVar1 < lVar3) {
      param_2[uVar2] = lVar3;
      *param_2 = lVar1;
      if (lVar1 < param_2[-uVar2]) {
        *param_2 = param_2[-uVar2];
        param_2[-uVar2] = lVar1;
      }
    }
    lVar3 = param_3[-uVar2];
    if (lVar3 < param_3[uVar2 * -2]) {
      param_3[-uVar2] = param_3[uVar2 * -2];
      param_3[uVar2 * -2] = lVar3;
      lVar3 = param_3[-uVar2];
    }
    lVar1 = *param_3;
    if (lVar1 < lVar3) {
      *param_3 = lVar3;
      param_3[-uVar2] = lVar1;
      if (lVar1 < param_3[uVar2 * -2]) {
        param_3[-uVar2] = param_3[uVar2 * -2];
        param_3[uVar2 * -2] = lVar1;
      }
    }
    lVar3 = *param_2;
    if (lVar3 < param_1[uVar2]) {
      *param_2 = param_1[uVar2];
      param_1[uVar2] = lVar3;
      lVar3 = *param_2;
    }
    lVar1 = param_3[-uVar2];
    if (lVar1 < lVar3) {
      param_3[-uVar2] = lVar3;
      *param_2 = lVar1;
      if (lVar1 < param_1[uVar2]) {
        *param_2 = param_1[uVar2];
        param_1[uVar2] = lVar1;
      }
    }
  }
  return;
}



// FUNCTION 14836c438 FUN_14836c438 body=699 status=ok
// SIG undefined FUN_14836c438(void)

longlong FUN_14836c438(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_91;
  longlong *local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined4 local_70 [2];
  longlong local_68;
  longlong local_60;
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_2 + 8);
  local_e0[0] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_146de45bc(local_e0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  local_78 = &local_68;
  local_68 = local_c8;
  local_60 = local_d8;
  local_88 = local_70;
  local_70[0] = 0;
  local_90 = local_48;
  local_48[0] = local_c8;
  local_38 = local_d8;
  local_80 = &local_91;
  FUN_146de119a();
  lVar12 = *(longlong *)(lVar2 + 8);
  if (0 < lVar12) {
    lVar11 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar11 * 4);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar11 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar11 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar12 = *(longlong *)(lVar2 + 0x30);
        do {
          piVar1 = (int *)(local_c8 + (longlong)*(int *)(lVar12 + lVar13 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar12 = *(longlong *)(lVar2 + 8);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar12);
  }
  lVar11 = 0;
  iVar18 = 0;
  lVar12 = 0;
  if (local_d8 != 0) {
    iVar18 = 0;
    if (local_d8 < 1) {
      lVar11 = 0;
      lVar12 = local_d8;
    }
    else {
      lVar11 = FUN_141729f83();
      lVar12 = local_d8;
      if (0 < local_d8) {
        lVar13 = 0;
        iVar17 = 0;
        do {
          iVar18 = *(int *)(local_c8 + lVar13 * 4) + iVar17;
          *(int *)(local_c8 + lVar13 * 4) = iVar17;
          *(int *)(lVar11 + lVar13 * 4) = iVar17;
          lVar13 = lVar13 + 1;
          iVar17 = iVar18;
        } while (lVar13 < local_d8);
      }
    }
  }
  *(int *)(local_c8 + lVar12 * 4) = iVar18;
  FUN_146de554a(&local_b8,(longlong)iVar18,0);
  lVar12 = *(longlong *)(lVar2 + 8);
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar13 * 4);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar15 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar13 * 4);
      }
      else {
        lVar15 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar13 * 4) + lVar14;
      }
      if (lVar14 < lVar15) {
        lVar12 = *(longlong *)(lVar2 + 0x28);
        lVar3 = *(longlong *)(lVar2 + 0x30);
        do {
          lVar16 = (longlong)*(int *)(lVar3 + lVar14 * 4);
          iVar18 = *(int *)(lVar11 + lVar16 * 4);
          *(int *)(lVar11 + lVar16 * 4) = iVar18 + 1;
          *(int *)(lStack_b0 + (longlong)iVar18 * 4) = (int)lVar13;
          *(undefined8 *)(local_b8 + (longlong)iVar18 * 8) = *(undefined8 *)(lVar12 + lVar14 * 8);
          lVar14 = lVar14 + 1;
        } while (lVar15 != lVar14);
        lVar12 = *(longlong *)(lVar2 + 8);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < lVar12);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_c8;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_d8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_a8;
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a0;
  local_d8 = uVar6;
  uStack_d0 = uVar5;
  local_c8 = uVar4;
  uStack_c0 = uVar7;
  local_b8 = lVar2;
  lStack_b0 = uVar8;
  local_a8 = uVar9;
  uStack_a0 = uVar10;
  FUN_1400020a8(lVar11);
  FUN_146de5508(local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14836c6f4 FUN_14836c6f4 body=38 status=ok
// SIG undefined FUN_14836c6f4(void)

undefined8 FUN_14836c6f4(undefined8 param_1,int param_2)

{
  FUN_148336ecc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836c71a FUN_14836c71a body=93 status=ok
// SIG undefined FUN_14836c71a(void)

void FUN_14836c71a(longlong param_1,int param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400bd09c(param_1 + 0x38,param_2 * 3,1);
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x48,&local_19,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836c778 FUN_14836c778 body=488 status=ok
// SIG undefined FUN_14836c778(void)

void FUN_14836c778(longlong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  ulonglong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar7 = (int)param_1[2];
  lVar5 = param_1[1];
  iVar2 = *(int *)(lVar5 + 0x50);
  *(int *)(param_1 + 5) = iVar2;
  iVar9 = *(int *)(lVar5 + 0x200) * iVar7;
  *(int *)(param_1 + 6) = iVar9;
  iVar7 = ((iVar7 + 3) * (iVar7 + 2)) / 2 + iVar7 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar7;
  *(int *)((longlong)param_1 + 0x2c) = iVar7 * *(int *)(lVar5 + 0x170) + iVar9 + iVar2;
  (**(code **)(*param_1 + 0x70))(param_1,(int)param_1[0xb]);
  lVar5 = param_1[1];
  if (0 < *(int *)(lVar5 + 0x50)) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (uVar4 >> 9 & 0x7fffff) * 8);
      uVar8 = (ulonglong)((uint)uVar4 & 0x1ff);
      puVar1 = (ulonglong *)(lVar5 + uVar8 * 0x18);
      local_38[0] = *puVar1;
      local_38[1] = puVar1[1];
      local_38[2] = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
      *(undefined1 *)(param_1[9] + uVar4) = 1;
      lVar5 = 0;
      do {
        *(ulonglong *)(param_1[7] + lVar3 + lVar5 * 8) = local_38[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar4 = uVar4 + 1;
      lVar5 = param_1[1];
      lVar3 = lVar3 + 0x18;
    } while ((longlong)uVar4 < (longlong)*(int *)(lVar5 + 0x50));
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    uVar6 = *(uint *)(param_1 + 6);
    if ((uint)(*(int *)(lVar5 + 8) - *(int *)(lVar5 + 0x34)) < uVar6) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar6);
      }
      FUN_14836cc26(lVar5,uVar6);
      iVar7 = 1;
      if (3 < uVar6) {
        uVar6 = (uVar6 | 1) + 0xe;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 1 << ((byte)iVar7 & 0x1f);
      }
      if ((*(int *)(lVar5 + 0x48) == 0) || (*(int *)(lVar5 + 0x48) < iVar7)) {
        *(int *)(lVar5 + 0x48) = iVar7;
        FUN_14834ad96(lVar5);
      }
    }
  }
  lVar5 = param_1[0xf];
  if (lVar5 != 0) {
    uVar4 = (longlong)*(int *)(param_1[1] + 0x170) * (longlong)*(int *)((longlong)param_1 + 0x34);
    uVar6 = (uint)uVar4;
    if ((uint)(*(int *)(lVar5 + 8) - *(int *)(lVar5 + 0x34)) < uVar6) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar4);
      }
      FUN_140ab2830(lVar5,uVar4 & 0xffffffff);
      iVar7 = 1;
      if (3 < uVar6) {
        uVar6 = (uVar6 | 1) + 0xe;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 1 << ((byte)iVar7 & 0x1f);
      }
      if ((*(int *)(lVar5 + 0x48) == 0) || (*(int *)(lVar5 + 0x48) < iVar7)) {
        *(int *)(lVar5 + 0x48) = iVar7;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38[3] ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836c980 FUN_14836c980 body=75 status=ok
// SIG undefined FUN_14836c980(void)

void FUN_14836c980(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1[7] + (longlong)(iVar1 * 3) * 8 + lVar2 * 8) =
         *(undefined8 *)(in_stack_00000028 + lVar2 * 8);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 14836c9de FUN_14836c9de body=73 status=ok
// SIG undefined FUN_14836c9de(void)

void FUN_14836c9de(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1[7] + (longlong)(iVar1 * 3) * 8 + lVar2 * 8) =
         *(undefined8 *)(param_4 + lVar2 * 8);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 14836ca5e FUN_14836ca5e body=164 status=ok
// SIG undefined FUN_14836ca5e(void)

ulonglong FUN_14836ca5e(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_14836cdc2;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836cb04 FUN_14836cb04 body=172 status=ok
// SIG undefined FUN_14836cb04(void)

ulonglong FUN_14836cb04(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (1 < (int)param_1[2]) {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_14836cf28;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836cbf6 FUN_14836cbf6 body=43 status=ok
// SIG undefined FUN_14836cbf6(void)

void FUN_14836cbf6(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  FUN_146bd783c(param_1 + 0xc,param_2,1);
  return;
}



// FUNCTION 14836cc26 FUN_14836cc26 body=411 status=ok
// SIG undefined FUN_14836cc26(void)

void FUN_14836cc26(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x14 + -0x10);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14836cdca FUN_14836cdca body=348 status=ok
// SIG undefined FUN_14836cdca(void)

void FUN_14836cdca(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  double *local_b8;
  double local_a8 [4];
  double local_88 [4];
  double local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1 = (longlong *)*param_1;
  cVar3 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar3 == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar2 = *(ulonglong *)(lVar5 + uVar6);
    uVar1 = *(undefined4 *)(lVar5 + 8 + uVar6);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar2,local_68);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar2 >> 0x20);
    iVar4 = (int)param_1[2];
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        dVar8 = (double)iVar7 / (double)(iVar4 + 1);
        if (1.0 <= dVar8) {
          dVar8 = 1.0;
        }
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        lVar5 = 0;
        do {
          local_a8[lVar5] = local_68[lVar5] * (1.0 - dVar8) + local_88[lVar5] * dVar8;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
        local_b8 = local_a8;
        (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar1);
        iVar4 = (int)param_1[2];
      } while (iVar7 < iVar4);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836cf30 FUN_14836cf30 body=620 status=ok
// SIG undefined FUN_14836cf30(void)

void FUN_14836cf30(longlong *param_1,ulonglong param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  double local_d8 [4];
  double local_b8 [4];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1 = (longlong *)*param_1;
  cVar6 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if ((cVar6 != '\0') && (iVar7 = (int)param_1[2], 1 < iVar7)) {
      lVar9 = param_1[1];
      uVar10 = param_2 >> 9 & 0x7fffff;
      lVar4 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x130) + uVar10 * 8) + lVar4);
      lVar3 = *(longlong *)(*(longlong *)(lVar9 + 0x180) + uVar10 * 8);
      local_dc = *(uint *)(lVar3 + lVar4);
      local_e0 = *(uint *)(lVar3 + 8 + lVar4);
      local_e4 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar9 + 0x1c0) + (ulonglong)(local_dc >> 9) * 8) +
                         (ulonglong)((local_dc & 0x1ff) << 4));
      local_e8 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar9 + 0x1c0) + (ulonglong)(local_e0 >> 9) * 8) +
                         (ulonglong)((local_e0 & 0x1ff) << 4));
      iVar14 = 0;
      uVar13 = 1;
      do {
        uVar11 = iVar7 + ~uVar13;
        if (iVar2 == local_e4) {
          uVar11 = uVar13;
        }
        iVar7 = (**(code **)(*param_1 + 0x28))(param_1,local_dc,param_2 & 0xffffffff,uVar11);
        uVar11 = uVar13;
        if (iVar2 != local_e8) {
          uVar11 = ~uVar13 + (int)param_1[2];
        }
        iVar8 = (**(code **)(*param_1 + 0x28))(param_1,local_e0,param_2 & 0xffffffff,uVar11);
        if (*(char *)(param_1[9] + (longlong)iVar7) != '\0') {
          local_98[2] = (double)*(undefined8 *)(param_1[7] + 0x10 + (longlong)(iVar7 * 3) * 8);
          pdVar1 = (double *)(param_1[7] + (longlong)(iVar7 * 3) * 8);
          local_98[0] = *pdVar1;
          local_98[1] = pdVar1[1];
        }
        if (*(char *)(param_1[9] + (longlong)iVar8) != '\0') {
          local_b8[2] = (double)*(undefined8 *)(param_1[7] + 0x10 + (longlong)(iVar8 * 3) * 8);
          pdVar1 = (double *)(param_1[7] + (longlong)(iVar8 * 3) * 8);
          local_b8[0] = *pdVar1;
          local_b8[1] = pdVar1[1];
        }
        uVar11 = uVar13 + 1;
        uVar12 = 0;
        do {
          uVar12 = uVar12 + 1;
          dVar5 = (double)(int)uVar12 / (double)(int)uVar11;
          if (1.0 <= (double)(int)uVar12 / (double)(int)uVar11) {
            dVar5 = 1.0;
          }
          if (dVar5 <= 0.0) {
            dVar5 = 0.0;
          }
          lVar9 = 0;
          do {
            local_d8[lVar9] = local_98[lVar9] * (1.0 - dVar5) + local_b8[lVar9] * dVar5;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          (**(code **)(*param_1 + 0x40))(param_1,param_2 & 0xffffffff,iVar14,local_d8);
          iVar14 = iVar14 + 1;
        } while (uVar12 != uVar13);
        iVar7 = (int)param_1[2];
        uVar13 = uVar11;
      } while ((int)uVar11 < iVar7);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836d19e FUN_14836d19e body=178 status=ok
// SIG undefined FUN_14836d19e(void)

ulonglong FUN_14836d19e(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[2] == 0) {
    uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  }
  else {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_14836d43e;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836d252 FUN_14836d252 body=490 status=ok
// SIG undefined FUN_14836d252(void)

ulonglong FUN_14836d252(longlong *param_1)

{
  char extraout_AL;
  char cVar1;
  longlong lVar2;
  undefined7 extraout_var;
  ulonglong uVar3;
  undefined7 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_98 [43];
  char local_6d;
  undefined4 local_6c;
  ulonglong local_68;
  undefined1 local_5c [4];
  undefined4 *local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1[0xe] != 0) &&
     (lVar2 = param_1[1], 0 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))) {
    iVar7 = (int)param_1[2];
    uVar8 = 0;
    do {
      local_68 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8) + 8 +
                  (ulonglong)((uVar8 & 0x1ff) << 4));
      if (0 < iVar7) {
        iVar6 = 0;
        do {
          local_6c = (**(code **)(*param_1 + 0x28))(param_1,uVar8,local_68 & 0xffffffff,iVar6);
          local_58 = &local_6c;
          local_50 = &local_68;
          FUN_14836dc36(param_1[0xe],local_5c,&local_58,0);
          iVar6 = iVar6 + 1;
          iVar7 = (int)param_1[2];
        } while (iVar6 < iVar7);
        lVar2 = param_1[1];
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4));
  }
  (**(code **)(*param_1 + 8))(param_1);
  cVar1 = extraout_AL;
  uVar4 = extraout_var;
  if ((extraout_AL == '\0') && (cVar1 = extraout_AL, param_1[0xf] != 0)) {
    local_5c = (undefined1  [4])0x0;
    lVar2 = param_1[1];
    uVar8 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
    uVar3 = (ulonglong)uVar8;
    local_6d = extraout_AL;
    if (0 < (int)uVar8) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 2);
      do {
        if (1 < (int)uVar3) {
          iVar7 = 1;
          iVar6 = 0;
          do {
            iVar5 = 0;
            do {
              local_6c = (**(code **)(*param_1 + 0x38))(param_1,local_5c,iVar5 + iVar6);
              local_58 = &local_6c;
              local_50 = (ulonglong *)local_5c;
              FUN_140263e2a(param_1[0xf],&local_68,&local_58,0);
              iVar5 = iVar5 + 1;
            } while (iVar7 != iVar5);
            uVar3 = (ulonglong)*(uint *)(param_1 + 2);
            iVar6 = iVar6 + iVar7;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)*(uint *)(param_1 + 2));
          lVar2 = param_1[1];
        }
        local_5c = (undefined1  [4])((int)local_5c + 1);
      } while ((int)local_5c < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144));
    }
    uVar4 = (undefined7)(uVar3 >> 8);
    cVar1 = local_6d;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar4,cVar1) ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836d446 FUN_14836d446 body=381 status=ok
// SIG undefined FUN_14836d446(void)

void FUN_14836d446(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if (cVar5 != '\0') {
      lVar1 = param_1[1];
      uVar7 = param_2 >> 9 & 0x7fffff;
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + uVar7 * 8);
      lVar4 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      local_38 = *(undefined4 *)(lVar2 + 8 + lVar4);
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + uVar7 * 8);
      local_48 = *(uint *)(lVar2 + 8 + lVar4);
      uVar7 = *(ulonglong *)(lVar2 + lVar4);
      lVar1 = *(longlong *)(lVar1 + 0x1c0);
      local_33 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (uVar7 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)(((uint)uVar7 & 0x1ff) << 4));
      local_50._4_4_ = (uint)(uVar7 >> 0x20);
      local_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_32 = local_40._4_4_ !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_50._4_4_ >> 9) * 8) +
                         (ulonglong)((local_50._4_4_ & 0x1ff) << 4));
      local_31 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_48 >> 9) * 8) +
                         (ulonglong)((local_48 & 0x1ff) << 4));
      local_58 = &local_33;
      local_50 = uVar7;
      local_40 = uVar3;
      FUN_14836d5c4(param_1,param_2 & 0xffffffff);
      if (1 < (int)param_1[2]) {
        iVar6 = 0;
        do {
          local_58 = &local_33;
          FUN_14836d664(param_1,iVar6,param_2 & 0xffffffff,&local_50);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[2] + -1);
      }
      local_58 = &local_33;
      FUN_14836d946(param_1,param_2 & 0xffffffff,&local_40,&local_50);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836d5c4 FUN_14836d5c4 body=159 status=ok
// SIG undefined FUN_14836d5c4(void)

void FUN_14836d5c4(longlong *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                  char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*param_3);
  iVar6 = 0;
  iVar7 = 0;
  if (*param_5 == '\x01') {
    iVar7 = (int)param_1[2] + -1;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2 & 0xffffffff,iVar7);
  if (param_5[2] == '\x01') {
    iVar6 = (int)param_1[2] + -1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2 & 0xffffffff,iVar6);
  lVar5 = (longlong)(int)param_2 * (longlong)*(int *)((longlong)param_1 + 0x5c);
  lVar1 = param_1[0xc];
  *(undefined4 *)(lVar1 + lVar5 * 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 4 + lVar5 * 0xc) = uVar3;
  *(undefined4 *)(lVar1 + 8 + lVar5 * 0xc) = uVar4;
  return;
}



// FUNCTION 14836d664 FUN_14836d664 body=737 status=ok
// SIG undefined FUN_14836d664(void)

void FUN_14836d664(longlong *param_1,uint param_2,int param_3,undefined4 *param_4,char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  uVar16 = param_2;
  if (*param_5 == '\x01') {
    uVar16 = (int)param_1[2] + ~param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = param_2;
  if (param_5[2] == '\x01') {
    uVar16 = ~param_2 + (int)param_1[2];
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  uVar18 = param_2 + 1;
  uVar16 = uVar18;
  if (*param_5 == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = uVar18;
  if (param_5[2] == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  if (-2 < (int)param_2) {
    uVar13 = param_2 + 2;
    iVar6 = (int)((param_2 + 3) * uVar13) / 2;
    iVar15 = iVar6 + uVar13 * -3 + 3;
    iVar17 = uVar18 * uVar18;
    uVar16 = 1;
    if (1 < (int)uVar13) {
      uVar16 = uVar13;
    }
    uVar13 = 0;
    do {
      uVar11 = uVar3;
      if (uVar13 == 0) {
        if (param_2 != 0) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15);
        }
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2);
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar2;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
        uVar9 = uVar2;
      }
      else if (uVar18 == uVar13) {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2 * 2);
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17;
        iVar14 = 1;
        uVar9 = uVar3;
        uVar11 = uVar5;
      }
      else {
        uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_2 * -3 + iVar6 + -4 + uVar13);
        uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + -4 + param_2 * -2 + uVar13);
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + param_2 * -2 + -3 + uVar13);
        if (param_2 != uVar13) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + uVar13);
        }
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar10;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
      }
      lVar1 = param_1[0xc];
      lVar12 = (longlong)iVar8;
      *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
      *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar7;
      *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar11;
      iVar17 = iVar17 + iVar14;
      uVar13 = uVar13 + 1;
    } while (uVar16 != uVar13);
  }
  return;
}



// FUNCTION 14836d946 FUN_14836d946 body=751 status=ok
// SIG undefined FUN_14836d946(void)

void FUN_14836d946(longlong *param_1,int param_2,longlong param_3,undefined4 *param_4,char *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar1 = (int)param_1[2];
  iVar14 = iVar1 + -1;
  iVar15 = 0;
  if (*param_5 == '\0') {
    iVar15 = iVar14;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2,iVar15);
  if (param_5[2] == '\x01') {
    iVar14 = (int)param_1[2] - iVar1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2,iVar14);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 4));
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 8));
  if (-1 < iVar1) {
    iVar14 = ((iVar1 + 2) * (iVar1 + 1)) / 2;
    iVar12 = (iVar1 + 1) * -3 + iVar14 + 3;
    iVar17 = iVar1 * iVar1;
    iVar15 = 0;
    do {
      uVar10 = uVar4;
      if (iVar15 == 0) {
        if (iVar1 != 1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12);
        }
        iVar16 = 0;
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] + -1;
        }
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar3;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar5;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
        uVar7 = uVar3;
      }
      else if (iVar15 == iVar1) {
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17;
        iVar13 = 1;
        uVar10 = uVar6;
        uVar7 = uVar4;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_2,~(iVar1 * 3) + iVar14 + iVar15);
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] - iVar15;
        }
        else {
          iVar16 = iVar15 + -1;
        }
        uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        if (iVar15 - iVar1 != -1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12 + iVar15);
        }
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar8;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
      }
      lVar2 = param_1[0xc];
      lVar11 = (longlong)iVar16;
      *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
      *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar9;
      *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar10;
      iVar17 = iVar17 + iVar13;
      bVar18 = iVar15 != iVar1;
      iVar15 = iVar15 + 1;
    } while (bVar18);
  }
  return;
}



// FUNCTION 14836dc36 FUN_14836dc36 body=307 status=ok
// SIG undefined FUN_14836dc36(void)

undefined4 *
FUN_14836dc36(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_14834ab48(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 1) = *puVar1;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_14834ac2e(param_1,uVar4,local_48);
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
      local_48[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_14834ad96(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836dd6a FUN_14836dd6a body=26 status=ok
// SIG undefined FUN_14836dd6a(void)

void FUN_14836dd6a(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  uVar2 = FUN_146bc96d4(*param_1,*param_2);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 14836dda2 FUN_14836dda2 body=12 status=ok
// SIG undefined FUN_14836dda2(void)

void FUN_14836dda2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014836ddab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14836ddae FUN_14836ddae body=29 status=ok
// SIG undefined FUN_14836ddae(void)

undefined8 FUN_14836ddae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836ddcc FUN_14836ddcc body=131 status=ok
// SIG undefined FUN_14836ddcc(void)

undefined8 *
FUN_14836ddcc(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,undefined1 param_5
             ,longlong *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = param_3;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = param_5;
  *param_1 = &PTR_FUN_14ae74130;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = *param_6;
  param_1[8] = lVar1;
  param_1[10] = 0;
  if (lVar1 != 0) {
    plVar2 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_6[2];
    }
    (**(code **)*plVar2)(0,param_1 + 10);
    param_2 = param_1[1];
  }
  iVar3 = (param_3 + 1) * (param_3 + 1);
  *(int *)((longlong)param_1 + 0x2c) = iVar3;
  *(int *)(param_1 + 5) = iVar3 * *(int *)(param_2 + 0x170);
  return param_1;
}



// FUNCTION 14836de50 FUN_14836de50 body=85 status=ok
// SIG undefined FUN_14836de50(void)

undefined8 * FUN_14836de50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae74130;
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836dea6 FUN_14836dea6 body=54 status=ok
// SIG undefined FUN_14836dea6(void)

undefined4 FUN_14836dea6(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14834dd76();
  if ((char)uVar1 != '\0') {
    FUN_144a1a59e(param_1 + 0x30,*(undefined4 *)(param_1 + 0x28),1);
    FUN_14836dedc(param_1);
  }
  return uVar1;
}



// FUNCTION 14836dedc FUN_14836dedc body=205 status=ok
// SIG undefined FUN_14836dedc(void)

void FUN_14836dedc(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [36];
  int local_54;
  undefined4 *local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x170)) {
    iVar6 = 0;
    do {
      pcVar1 = *(code **)(param_1 + 0x40);
      plVar4 = *(longlong **)(param_1 + 0x50);
      if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
        plVar4 = (longlong *)(param_1 + 0x60);
      }
      local_54 = iVar6;
      local_50 = &local_44;
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3,&local_54,&local_50);
      iVar2 = *(int *)(param_1 + 0x2c);
      if (0 < iVar2) {
        lVar5 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (iVar2 * iVar6 + lVar5) * 4) = local_44;
          iVar2 = *(int *)(param_1 + 0x2c);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < iVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*(longlong *)(param_1 + 8) + 0x170));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836dfaa FUN_14836dfaa body=38 status=ok
// SIG undefined FUN_14836dfaa(void)

undefined8 FUN_14836dfaa(undefined8 param_1,int param_2)

{
  FUN_1483366de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836dfd0 FUN_14836dfd0 body=93 status=ok
// SIG undefined FUN_14836dfd0(void)

void FUN_14836dfd0(longlong param_1,int param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a84024(param_1 + 0x38,param_2 * 3,1);
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x48,&local_19,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836e02e FUN_14836e02e body=1028 status=ok
// SIG undefined FUN_14836e02e(void)

void FUN_14836e02e(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong *local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(int *)(param_1[1] + 0x200);
  local_48 = (longlong *)0x0;
  local_3c = 0x80;
  uVar10 = local_40 + 0x1f;
  if (uVar10 < 0x20) {
    if (param_1 + 0x10 == &local_58) goto LAB_14836e0cc;
LAB_14836e088:
    param_1[0x10] = local_58;
    param_1[0x11] = lStack_50;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (uVar10 < 0xa0) {
      plVar5 = &local_58;
LAB_14836e3ab:
      uVar10 = uVar10 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_58,0,uVar10 >> 5,4);
      local_3c = uVar10 & 0xffffffe0;
      plVar5 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar5 = &local_58;
      }
      if (uVar10 < 0x120) goto LAB_14836e3ab;
      uVar10 = (uVar10 >> 5) << 2;
    }
    memset(plVar5,0,(ulonglong)uVar10);
    iVar12 = local_40 + 0x1f;
    if (-1 < local_40) {
      iVar12 = local_40;
    }
    if (local_40 % 0x20 != 0) {
      plVar5 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar5 = &local_58;
      }
      bVar6 = -(char)(local_40 % 0x20);
      *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
    if (param_1 + 0x10 == &local_58) {
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8(local_48);
      }
      goto LAB_14836e0cc;
    }
    plVar5 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_14836e088;
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
    plVar5 = local_48;
  }
  param_1[0x12] = (longlong)plVar5;
  local_48 = (longlong *)0x0;
  *(int *)(param_1 + 0x13) = local_40;
  *(uint *)((longlong)param_1 + 0x9c) = local_3c;
LAB_14836e0cc:
  FUN_144a1a59e(param_1 + 0xe,*(undefined4 *)(param_1[1] + 0x200),1);
  lVar9 = param_1[1];
  if (*(int *)(lVar9 + 0x200) < 1) {
    iVar12 = (int)param_1[2];
    iVar4 = 0;
  }
  else {
    uVar11 = 0;
    iVar4 = 0;
    do {
      *(int *)(param_1[0xe] + uVar11 * 4) = iVar4;
      uVar2 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (uVar11 >> 9 & 0x7fffff) * 8) + 8
               + (ulonglong)(((uint)uVar11 & 0x1ff) << 4));
      cVar3 = FUN_146c1aaf4(param_1[0x14],uVar11 & 0xffffffff,0);
      uVar10 = 1 << ((byte)uVar11 & 0x1f);
      plVar5 = (longlong *)param_1[0x12];
      if ((longlong *)param_1[0x12] == (longlong *)0x0) {
        plVar5 = param_1 + 0x10;
      }
      uVar13 = uVar11 >> 5 & 0x7ffffff;
      if ((cVar3 == '\0') || (0xfffffffeffffffff < uVar2)) {
        puVar1 = (uint *)((longlong)plVar5 + uVar13 * 4);
        *puVar1 = *puVar1 & ~uVar10;
        iVar12 = (int)param_1[2];
        iVar14 = iVar12;
      }
      else {
        puVar1 = (uint *)((longlong)plVar5 + uVar13 * 4);
        *puVar1 = *puVar1 | uVar10;
        iVar12 = (int)param_1[2];
        iVar14 = iVar12 * 2;
      }
      iVar4 = iVar14 + iVar4;
      uVar11 = uVar11 + 1;
      lVar9 = param_1[1];
    } while ((longlong)uVar11 < (longlong)*(int *)(lVar9 + 0x200));
  }
  iVar14 = *(int *)(param_1[0x14] + 8) * 0x200 + *(int *)(param_1[0x14] + 0xc);
  *(int *)(param_1 + 5) = iVar14;
  *(int *)(param_1 + 6) = iVar4;
  iVar12 = ((iVar12 + 3) * (iVar12 + 2)) / 2 + iVar12 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar12;
  *(int *)((longlong)param_1 + 0x2c) = iVar12 * *(int *)(lVar9 + 0x170) + iVar14 + iVar4;
  (**(code **)(*param_1 + 0x70))(param_1);
  lVar9 = param_1[0x14];
  uVar7 = *(int *)(lVar9 + 8) * 0x200 + *(int *)(lVar9 + 0xc);
  uVar10 = 0;
  if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x10) - 1U))) {
    uVar18 = 1;
    uVar8 = 1;
    if (1 < (int)uVar7) {
      uVar8 = uVar7;
    }
    do {
      uVar15 = uVar18;
      uVar10 = uVar8;
      if (uVar8 == uVar15) break;
      uVar18 = uVar15 + 1;
      uVar10 = uVar15;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x10))[uVar15 >> 9] +
                                         (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
  }
  do {
    if (uVar10 == uVar7) {
      if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar16 = *(longlong *)(param_1[0x14] + 0x48);
    lVar17 = 0;
    do {
      uVar18 = uVar10 * 3 + (int)lVar17;
      *(undefined4 *)((longlong)&local_58 + lVar17 * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar16 + (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4)
      ;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 3);
    *(undefined1 *)(param_1[9] + (longlong)(int)uVar10) = 1;
    lVar16 = 0;
    do {
      *(undefined4 *)(param_1[7] + (longlong)(int)(uVar10 * 3) * 4 + lVar16 * 4) =
           *(undefined4 *)((longlong)&local_58 + lVar16 * 4);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    uVar18 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar7) {
      uVar18 = uVar7;
    }
    uVar8 = uVar10;
    do {
      uVar10 = uVar18;
      if (uVar18 - 1 == uVar8) break;
      uVar10 = uVar8 + 1;
      uVar8 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar9 + 0x10) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14836e434 FUN_14836e434 body=120 status=ok
// SIG undefined FUN_14836e434(void)

int FUN_14836e434(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
  }
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  iVar1 = (uint)(*(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                           (ulonglong)(param_2 >> 9) * 8) + 8 + (ulonglong)((param_2 & 0x1ff) << 4))
                != param_3) + param_4 * 2;
  if ((*(uint *)(lVar2 + (longlong)((int)uVar3 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    iVar1 = param_4;
  }
  return *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 4) +
         *(int *)(param_1 + 0x28) + iVar1;
}



// FUNCTION 14836e4ac FUN_14836e4ac body=75 status=ok
// SIG undefined FUN_14836e4ac(void)

void FUN_14836e4ac(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1[7] + (longlong)(iVar1 * 3) * 4 + lVar2 * 4) =
         *(undefined4 *)(in_stack_00000028 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 14836e50a FUN_14836e50a body=73 status=ok
// SIG undefined FUN_14836e50a(void)

void FUN_14836e50a(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1[7] + (longlong)(iVar1 * 3) * 4 + lVar2 * 4) =
         *(undefined4 *)(param_4 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 14836e560 FUN_14836e560 body=85 status=ok
// SIG undefined FUN_14836e560(void)

void FUN_14836e560(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  iVar2 = FUN_146c31d60();
  if (iVar2 != -1) {
    lVar3 = 0;
    do {
      uVar4 = iVar2 * 3 + (int)lVar3;
      *(undefined4 *)(param_4 + lVar3 * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  return;
}



// FUNCTION 14836e5b6 FUN_14836e5b6 body=164 status=ok
// SIG undefined FUN_14836e5b6(void)

ulonglong FUN_14836e5b6(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_14836e9e6;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836e65c FUN_14836e65c body=172 status=ok
// SIG undefined FUN_14836e65c(void)

ulonglong FUN_14836e65c(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (1 < (int)param_1[2]) {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_14836ec90;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836e77c FUN_14836e77c body=43 status=ok
// SIG undefined FUN_14836e77c(void)

void FUN_14836e77c(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  FUN_146bd783c(param_1 + 0xc,param_2,1);
  return;
}



// FUNCTION 14836e7aa FUN_14836e7aa body=164 status=ok
// SIG undefined FUN_14836e7aa(void)

ulonglong FUN_14836e7aa(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_14836e896;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836e89e FUN_14836e89e body=326 status=ok
// SIG undefined FUN_14836e89e(void)

void FUN_14836e89e(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  float *local_88;
  float local_74 [6];
  float local_5c [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = (longlong *)*param_1;
  cVar3 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar3 == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar2 = *(ulonglong *)(lVar5 + uVar6);
    uVar1 = *(undefined4 *)(lVar5 + 8 + uVar6);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar2,local_74 + 6);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar2 >> 0x20);
    iVar4 = (int)param_1[2];
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        fVar8 = (float)iVar7 / (float)(iVar4 + 1);
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        lVar5 = 0;
        do {
          local_74[lVar5] = local_74[lVar5 + 6] * (1.0 - fVar8) + local_74[lVar5 + 3] * fVar8;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
        local_88 = local_74;
        (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar1);
        iVar4 = (int)param_1[2];
      } while (iVar7 < iVar4);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836e9ee FUN_14836e9ee body=673 status=ok
// SIG undefined FUN_14836e9ee(void)

void FUN_14836e9ee(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  float *local_a8;
  float local_94 [6];
  float local_7c [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1 = (longlong *)*param_1;
  cVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar2 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar1 = *(ulonglong *)(lVar3 + uVar6);
    uVar6 = *(ulonglong *)(lVar3 + 8 + uVar6);
    uVar8 = uVar6 >> 0x20;
    uVar5 = (int)uVar6 * 3;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(param_1[0x14] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4)) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar6 & 0xffffffff,uVar1 & 0xffffffff,local_94 + 6);
      (**(code **)(*param_1 + 0x50))(param_1,uVar6 & 0xffffffff,uVar1 >> 0x20);
      iVar7 = (int)param_1[2];
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          fVar10 = (float)iVar9 / (float)(iVar7 + 1);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          lVar3 = 0;
          do {
            local_94[lVar3] = local_94[lVar3 + 6] * (1.0 - fVar10) + local_94[lVar3 + 3] * fVar10;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 3);
          local_a8 = local_94;
          (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar6 & 0xffffffff);
          iVar7 = (int)param_1[2];
        } while (iVar9 < iVar7);
      }
    }
    plVar4 = param_1 + 0x10;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x12];
    }
    uVar5 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    iVar7 = (int)(uVar6 >> 0x20);
    if (((iVar7 != -1) &&
        ((1 << ((byte)param_2 & 0x1f) &
         *(uint *)((longlong)plVar4 + (longlong)((int)uVar5 >> 5) * 4)) != 0)) &&
       (uVar5 = iVar7 * 3,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(param_1[0x14] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4))) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar8,uVar1 & 0xffffffff,local_94 + 6);
      (**(code **)(*param_1 + 0x50))(param_1,uVar8,uVar1 >> 0x20);
      iVar7 = (int)param_1[2];
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          fVar10 = (float)iVar9 / (float)(iVar7 + 1);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          lVar3 = 0;
          do {
            local_94[lVar3] = local_94[lVar3 + 6] * (1.0 - fVar10) + local_94[lVar3 + 3] * fVar10;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 3);
          local_a8 = local_94;
          (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar8);
          iVar7 = (int)param_1[2];
        } while (iVar9 < iVar7);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14836ec98 FUN_14836ec98 body=597 status=ok
// SIG undefined FUN_14836ec98(void)

void FUN_14836ec98(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  undefined1 auStack_e8 [44];
  int local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac [3];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1 = (longlong *)*param_1;
  cVar4 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if ((cVar4 != '\0') && (iVar5 = (int)param_1[2], 1 < iVar5)) {
      lVar7 = param_1[1];
      uVar8 = param_2 >> 9 & 0x7fffff;
      lVar3 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x130) + uVar8 * 8) + lVar3);
      lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x180) + uVar8 * 8);
      local_b0 = *(uint *)(lVar2 + lVar3);
      local_b4 = *(uint *)(lVar2 + 8 + lVar3);
      local_b8 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(local_b0 >> 9) * 8) +
                         (ulonglong)((local_b0 & 0x1ff) << 4));
      local_bc = *(int *)(*(longlong *)
                           (*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(local_b4 >> 9) * 8) +
                         (ulonglong)((local_b4 & 0x1ff) << 4));
      iVar12 = 0;
      uVar11 = 1;
      do {
        uVar9 = iVar5 + ~uVar11;
        if (iVar1 == local_b8) {
          uVar9 = uVar11;
        }
        iVar5 = (**(code **)(*param_1 + 0x28))(param_1,local_b0,param_2 & 0xffffffff,uVar9);
        uVar9 = uVar11;
        if (iVar1 != local_bc) {
          uVar9 = ~uVar11 + (int)param_1[2];
        }
        iVar6 = (**(code **)(*param_1 + 0x28))(param_1,local_b4,param_2 & 0xffffffff,uVar9);
        if (*(char *)(param_1[9] + (longlong)iVar5) != '\0') {
          local_88 = *(undefined4 *)(param_1[7] + 8 + (longlong)(iVar5 * 3) * 4);
          local_90 = *(undefined8 *)(param_1[7] + (longlong)(iVar5 * 3) * 4);
        }
        if (*(char *)(param_1[9] + (longlong)iVar6) != '\0') {
          local_98 = *(undefined4 *)(param_1[7] + 8 + (longlong)(iVar6 * 3) * 4);
          local_a0 = *(undefined8 *)(param_1[7] + (longlong)(iVar6 * 3) * 4);
        }
        uVar9 = uVar11 + 1;
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 1;
          fVar13 = (float)(int)uVar10 / (float)(int)uVar9;
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          lVar7 = 0;
          do {
            local_ac[lVar7] =
                 *(float *)((longlong)&local_90 + lVar7 * 4) * (1.0 - fVar13) +
                 *(float *)((longlong)&local_a0 + lVar7 * 4) * fVar13;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 3);
          (**(code **)(*param_1 + 0x40))(param_1,param_2 & 0xffffffff,iVar12,local_ac);
          iVar12 = iVar12 + 1;
        } while (uVar10 != uVar11);
        iVar5 = (int)param_1[2];
        uVar11 = uVar9;
      } while ((int)uVar9 < iVar5);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836eeee FUN_14836eeee body=82 status=ok
// SIG undefined FUN_14836eeee(void)

void FUN_14836eeee(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae741d0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14ae74250;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14836ef40 FUN_14836ef40 body=178 status=ok
// SIG undefined FUN_14836ef40(void)

ulonglong FUN_14836ef40(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[2] == 0) {
    uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  }
  else {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_14836eff4;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836effc FUN_14836effc body=381 status=ok
// SIG undefined FUN_14836effc(void)

void FUN_14836effc(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if (cVar5 != '\0') {
      lVar1 = param_1[1];
      uVar7 = param_2 >> 9 & 0x7fffff;
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + uVar7 * 8);
      lVar4 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      local_38 = *(undefined4 *)(lVar2 + 8 + lVar4);
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + uVar7 * 8);
      local_48 = *(uint *)(lVar2 + 8 + lVar4);
      uVar7 = *(ulonglong *)(lVar2 + lVar4);
      lVar1 = *(longlong *)(lVar1 + 0x1c0);
      local_33 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (uVar7 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)(((uint)uVar7 & 0x1ff) << 4));
      local_50._4_4_ = (uint)(uVar7 >> 0x20);
      local_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_32 = local_40._4_4_ !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_50._4_4_ >> 9) * 8) +
                         (ulonglong)((local_50._4_4_ & 0x1ff) << 4));
      local_31 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_48 >> 9) * 8) +
                         (ulonglong)((local_48 & 0x1ff) << 4));
      local_58 = &local_33;
      local_50 = uVar7;
      local_40 = uVar3;
      FUN_14836f17a(param_1,param_2 & 0xffffffff);
      if (1 < (int)param_1[2]) {
        iVar6 = 0;
        do {
          local_58 = &local_33;
          FUN_14836f21a(param_1,iVar6,param_2 & 0xffffffff,&local_50);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[2] + -1);
      }
      local_58 = &local_33;
      FUN_14836f4fc(param_1,param_2 & 0xffffffff,&local_40,&local_50);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836f17a FUN_14836f17a body=159 status=ok
// SIG undefined FUN_14836f17a(void)

void FUN_14836f17a(longlong *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                  char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*param_3);
  iVar6 = 0;
  iVar7 = 0;
  if (*param_5 == '\x01') {
    iVar7 = (int)param_1[2] + -1;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2 & 0xffffffff,iVar7);
  if (param_5[2] == '\x01') {
    iVar6 = (int)param_1[2] + -1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2 & 0xffffffff,iVar6);
  lVar5 = (longlong)(int)param_2 * (longlong)*(int *)((longlong)param_1 + 0x5c);
  lVar1 = param_1[0xc];
  *(undefined4 *)(lVar1 + lVar5 * 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 4 + lVar5 * 0xc) = uVar3;
  *(undefined4 *)(lVar1 + 8 + lVar5 * 0xc) = uVar4;
  return;
}



// FUNCTION 14836f21a FUN_14836f21a body=737 status=ok
// SIG undefined FUN_14836f21a(void)

void FUN_14836f21a(longlong *param_1,uint param_2,int param_3,undefined4 *param_4,char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  uVar16 = param_2;
  if (*param_5 == '\x01') {
    uVar16 = (int)param_1[2] + ~param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = param_2;
  if (param_5[2] == '\x01') {
    uVar16 = ~param_2 + (int)param_1[2];
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  uVar18 = param_2 + 1;
  uVar16 = uVar18;
  if (*param_5 == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = uVar18;
  if (param_5[2] == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  if (-2 < (int)param_2) {
    uVar13 = param_2 + 2;
    iVar6 = (int)((param_2 + 3) * uVar13) / 2;
    iVar15 = iVar6 + uVar13 * -3 + 3;
    iVar17 = uVar18 * uVar18;
    uVar16 = 1;
    if (1 < (int)uVar13) {
      uVar16 = uVar13;
    }
    uVar13 = 0;
    do {
      uVar11 = uVar3;
      if (uVar13 == 0) {
        if (param_2 != 0) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15);
        }
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2);
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar2;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
        uVar9 = uVar2;
      }
      else if (uVar18 == uVar13) {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2 * 2);
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17;
        iVar14 = 1;
        uVar9 = uVar3;
        uVar11 = uVar5;
      }
      else {
        uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_2 * -3 + iVar6 + -4 + uVar13);
        uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + -4 + param_2 * -2 + uVar13);
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + param_2 * -2 + -3 + uVar13);
        if (param_2 != uVar13) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + uVar13);
        }
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar10;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
      }
      lVar1 = param_1[0xc];
      lVar12 = (longlong)iVar8;
      *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
      *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar7;
      *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar11;
      iVar17 = iVar17 + iVar14;
      uVar13 = uVar13 + 1;
    } while (uVar16 != uVar13);
  }
  return;
}



// FUNCTION 14836f4fc FUN_14836f4fc body=751 status=ok
// SIG undefined FUN_14836f4fc(void)

void FUN_14836f4fc(longlong *param_1,int param_2,longlong param_3,undefined4 *param_4,char *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar1 = (int)param_1[2];
  iVar14 = iVar1 + -1;
  iVar15 = 0;
  if (*param_5 == '\0') {
    iVar15 = iVar14;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2,iVar15);
  if (param_5[2] == '\x01') {
    iVar14 = (int)param_1[2] - iVar1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2,iVar14);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 4));
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 8));
  if (-1 < iVar1) {
    iVar14 = ((iVar1 + 2) * (iVar1 + 1)) / 2;
    iVar12 = (iVar1 + 1) * -3 + iVar14 + 3;
    iVar17 = iVar1 * iVar1;
    iVar15 = 0;
    do {
      uVar10 = uVar4;
      if (iVar15 == 0) {
        if (iVar1 != 1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12);
        }
        iVar16 = 0;
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] + -1;
        }
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar3;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar5;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
        uVar7 = uVar3;
      }
      else if (iVar15 == iVar1) {
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17;
        iVar13 = 1;
        uVar10 = uVar6;
        uVar7 = uVar4;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_2,~(iVar1 * 3) + iVar14 + iVar15);
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] - iVar15;
        }
        else {
          iVar16 = iVar15 + -1;
        }
        uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        if (iVar15 - iVar1 != -1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12 + iVar15);
        }
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar8;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
      }
      lVar2 = param_1[0xc];
      lVar11 = (longlong)iVar16;
      *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
      *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar9;
      *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar10;
      iVar17 = iVar17 + iVar13;
      bVar18 = iVar15 != iVar1;
      iVar15 = iVar15 + 1;
    } while (bVar18);
  }
  return;
}



// FUNCTION 14836f7ec FUN_14836f7ec body=38 status=ok
// SIG undefined FUN_14836f7ec(void)

undefined8 FUN_14836f7ec(undefined8 param_1,int param_2)

{
  FUN_14833693c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836f812 FUN_14836f812 body=93 status=ok
// SIG undefined FUN_14836f812(void)

void FUN_14836f812(longlong param_1,int param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a84024(param_1 + 0x38,param_2 * 2,1);
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x48,&local_19,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836f870 FUN_14836f870 body=1001 status=ok
// SIG undefined FUN_14836f870(void)

void FUN_14836f870(longlong *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong *local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(int *)(param_1[1] + 0x200);
  local_48 = (longlong *)0x0;
  local_3c = 0x80;
  uVar12 = local_40 + 0x1f;
  if (uVar12 < 0x20) {
    if (param_1 + 0x10 == &local_58) goto LAB_14836f90e;
LAB_14836f8ca:
    param_1[0x10] = local_58;
    param_1[0x11] = lStack_50;
    plVar8 = (longlong *)0x0;
  }
  else {
    if (uVar12 < 0xa0) {
      plVar8 = &local_58;
LAB_14836fbd2:
      uVar12 = uVar12 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_58,0,uVar12 >> 5,4);
      local_3c = uVar12 & 0xffffffe0;
      plVar8 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar8 = &local_58;
      }
      if (uVar12 < 0x120) goto LAB_14836fbd2;
      uVar12 = (uVar12 >> 5) << 2;
    }
    memset(plVar8,0,(ulonglong)uVar12);
    iVar14 = local_40 + 0x1f;
    if (-1 < local_40) {
      iVar14 = local_40;
    }
    if (local_40 % 0x20 != 0) {
      plVar8 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar8 = &local_58;
      }
      bVar9 = -(char)(local_40 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4) << (bVar9 & 0x1f)) >>
           (bVar9 & 0x1f);
    }
    if (param_1 + 0x10 == &local_58) {
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8(local_48);
      }
      goto LAB_14836f90e;
    }
    plVar8 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_14836f8ca;
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
    plVar8 = local_48;
  }
  param_1[0x12] = (longlong)plVar8;
  local_48 = (longlong *)0x0;
  *(int *)(param_1 + 0x13) = local_40;
  *(uint *)((longlong)param_1 + 0x9c) = local_3c;
LAB_14836f90e:
  FUN_144a1a59e(param_1 + 0xe,*(undefined4 *)(param_1[1] + 0x200),1);
  lVar11 = param_1[1];
  if (*(int *)(lVar11 + 0x200) < 1) {
    iVar14 = (int)param_1[2];
    iVar7 = 0;
  }
  else {
    uVar13 = 0;
    iVar7 = 0;
    do {
      *(int *)(param_1[0xe] + uVar13 * 4) = iVar7;
      uVar4 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (uVar13 >> 9 & 0x7fffff) * 8) + 8
               + (ulonglong)(((uint)uVar13 & 0x1ff) << 4));
      cVar6 = FUN_146c1a770(param_1[0x14],uVar13 & 0xffffffff,0);
      uVar12 = 1 << ((byte)uVar13 & 0x1f);
      plVar8 = (longlong *)param_1[0x12];
      if ((longlong *)param_1[0x12] == (longlong *)0x0) {
        plVar8 = param_1 + 0x10;
      }
      uVar15 = uVar13 >> 5 & 0x7ffffff;
      if ((cVar6 == '\0') || (0xfffffffeffffffff < uVar4)) {
        puVar1 = (uint *)((longlong)plVar8 + uVar15 * 4);
        *puVar1 = *puVar1 & ~uVar12;
        iVar14 = (int)param_1[2];
        iVar16 = iVar14;
      }
      else {
        puVar1 = (uint *)((longlong)plVar8 + uVar15 * 4);
        *puVar1 = *puVar1 | uVar12;
        iVar14 = (int)param_1[2];
        iVar16 = iVar14 * 2;
      }
      iVar7 = iVar16 + iVar7;
      uVar13 = uVar13 + 1;
      lVar11 = param_1[1];
    } while ((longlong)uVar13 < (longlong)*(int *)(lVar11 + 0x200));
  }
  iVar16 = *(int *)(param_1[0x14] + 8) * 0x200 + *(int *)(param_1[0x14] + 0xc);
  *(int *)(param_1 + 5) = iVar16;
  *(int *)(param_1 + 6) = iVar7;
  iVar14 = ((iVar14 + 3) * (iVar14 + 2)) / 2 + iVar14 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar14;
  *(int *)((longlong)param_1 + 0x2c) = iVar14 * *(int *)(lVar11 + 0x170) + iVar16 + iVar7;
  (**(code **)(*param_1 + 0x70))(param_1);
  lVar11 = param_1[0x14];
  uVar12 = *(int *)(lVar11 + 8) * 0x200 + *(int *)(lVar11 + 0xc);
  uVar13 = 0;
  if ((uVar12 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar11 + 0x10) - 1U))) {
    uVar13 = 1;
    uVar10 = 1;
    if (1 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
    }
    do {
      uVar17 = uVar10;
      if ((uint)uVar13 == uVar17) goto LAB_14836fb4c;
      uVar10 = uVar17 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar11 + 0x10))[uVar17 >> 9] +
                                         (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    uVar13 = (ulonglong)uVar17;
  }
LAB_14836fb4c:
  do {
    uVar10 = (uint)uVar13;
    if (uVar10 == uVar12) {
      if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar5 = *(longlong *)
             (*(longlong *)(param_1[0x14] + 0x48) + (ulonglong)((uint)(uVar13 >> 5) & 0x3fffff8));
    uVar2 = *(undefined4 *)(lVar5 + (uVar13 & 0xff) * 8);
    uVar3 = *(undefined4 *)(lVar5 + 4 + (uVar13 & 0xff) * 8);
    *(undefined1 *)(param_1[9] + (longlong)(int)uVar10) = 1;
    *(undefined4 *)(param_1[7] + (longlong)(int)(uVar10 * 2) * 4) = uVar2;
    *(undefined4 *)(param_1[7] + 4 + (longlong)(int)(uVar10 * 2) * 4) = uVar3;
    uVar17 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar12) {
      uVar17 = uVar12;
    }
    do {
      iVar14 = (int)uVar13;
      uVar13 = (ulonglong)uVar17;
      if (uVar17 - 1 == iVar14) break;
      uVar10 = iVar14 + 1;
      uVar13 = (ulonglong)uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar11 + 0x10) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14836fc5a FUN_14836fc5a body=120 status=ok
// SIG undefined FUN_14836fc5a(void)

int FUN_14836fc5a(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
  }
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  iVar1 = (uint)(*(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                           (ulonglong)(param_2 >> 9) * 8) + 8 + (ulonglong)((param_2 & 0x1ff) << 4))
                != param_3) + param_4 * 2;
  if ((*(uint *)(lVar2 + (longlong)((int)uVar3 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    iVar1 = param_4;
  }
  return *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 4) +
         *(int *)(param_1 + 0x28) + iVar1;
}



// FUNCTION 14836fcd2 FUN_14836fcd2 body=70 status=ok
// SIG undefined FUN_14836fcd2(void)

void FUN_14836fcd2(longlong *param_1)

{
  int iVar1;
  undefined4 *in_stack_00000028;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  *(undefined4 *)(param_1[7] + (longlong)(iVar1 * 2) * 4) = *in_stack_00000028;
  *(undefined4 *)(param_1[7] + 4 + (longlong)(iVar1 * 2) * 4) = in_stack_00000028[1];
  return;
}



// FUNCTION 14836fd2a FUN_14836fd2a body=68 status=ok
// SIG undefined FUN_14836fd2a(void)

void FUN_14836fd2a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  *(undefined4 *)(param_1[7] + (longlong)(iVar1 * 2) * 4) = *param_4;
  *(undefined4 *)(param_1[7] + 4 + (longlong)(iVar1 * 2) * 4) = param_4[1];
  return;
}



// FUNCTION 14836fd7a FUN_14836fd7a body=89 status=ok
// SIG undefined FUN_14836fd7a(void)

void FUN_14836fd7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar2 = FUN_146c2e864(lVar1);
  if (uVar2 != 0xffffffff) {
    uVar4 = (ulonglong)(uVar2 >> 5 & 0x3fffff8);
    uVar3 = (ulonglong)((uVar2 & 0xff) << 3);
    *param_4 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + uVar4) + uVar3);
    param_4[1] = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + uVar4) + 4 + uVar3);
  }
  return;
}



// FUNCTION 14836fdd4 FUN_14836fdd4 body=164 status=ok
// SIG undefined FUN_14836fdd4(void)

ulonglong FUN_14836fdd4(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_148370208;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836fe7a FUN_14836fe7a body=172 status=ok
// SIG undefined FUN_14836fe7a(void)

ulonglong FUN_14836fe7a(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (1 < (int)param_1[2]) {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_1483704c2;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836ff9a FUN_14836ff9a body=43 status=ok
// SIG undefined FUN_14836ff9a(void)

void FUN_14836ff9a(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  FUN_146bd783c(param_1 + 0xc,param_2,1);
  return;
}



// FUNCTION 14836ffc8 FUN_14836ffc8 body=164 status=ok
// SIG undefined FUN_14836ffc8(void)

ulonglong FUN_14836ffc8(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_1483700b4;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483700bc FUN_1483700bc body=331 status=ok
// SIG undefined FUN_1483700bc(void)

void FUN_1483700bc(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  float *local_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1 = (longlong *)*param_1;
  cVar4 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar3 = *(ulonglong *)(lVar2 + uVar6);
    uVar1 = *(undefined4 *)(lVar2 + 8 + uVar6);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar3,&local_58);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar3 >> 0x20);
    iVar5 = (int)param_1[2];
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        fVar8 = (float)iVar7 / (float)(iVar5 + 1);
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        local_68 = local_58 * (1.0 - fVar8) + local_60 * fVar8;
        local_64 = (1.0 - fVar8) * local_54 + fVar8 * local_5c;
        local_78 = &local_68;
        (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar1);
        iVar5 = (int)param_1[2];
      } while (iVar7 < iVar5);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148370210 FUN_148370210 body=689 status=ok
// SIG undefined FUN_148370210(void)

void FUN_148370210(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  undefined1 auStack_b8 [32];
  float *local_98;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1 = (longlong *)*param_1;
  cVar3 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar3 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar2 = *(ulonglong *)(lVar1 + uVar6);
    uVar6 = *(ulonglong *)(lVar1 + 8 + uVar6);
    uVar8 = uVar6 >> 0x20;
    uVar5 = (int)uVar6 * 3;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(param_1[0x14] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4)) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar6 & 0xffffffff,uVar2 & 0xffffffff,&local_78);
      (**(code **)(*param_1 + 0x50))(param_1,uVar6 & 0xffffffff,uVar2 >> 0x20);
      iVar7 = (int)param_1[2];
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          fVar10 = (float)iVar9 / (float)(iVar7 + 1);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          local_88 = local_78 * (1.0 - fVar10) + local_80 * fVar10;
          local_84 = (1.0 - fVar10) * local_74 + fVar10 * local_7c;
          local_98 = &local_88;
          (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar6 & 0xffffffff);
          iVar7 = (int)param_1[2];
        } while (iVar9 < iVar7);
      }
    }
    plVar4 = param_1 + 0x10;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x12];
    }
    uVar5 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    iVar7 = (int)(uVar6 >> 0x20);
    if (((iVar7 != -1) &&
        ((1 << ((byte)param_2 & 0x1f) &
         *(uint *)((longlong)plVar4 + (longlong)((int)uVar5 >> 5) * 4)) != 0)) &&
       (uVar5 = iVar7 * 3,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(param_1[0x14] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4))) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar8,uVar2 & 0xffffffff,&local_78);
      (**(code **)(*param_1 + 0x50))(param_1,uVar8,uVar2 >> 0x20);
      iVar7 = (int)param_1[2];
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          fVar10 = (float)iVar9 / (float)(iVar7 + 1);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          local_88 = local_78 * (1.0 - fVar10) + local_80 * fVar10;
          local_84 = (1.0 - fVar10) * local_74 + fVar10 * local_7c;
          local_98 = &local_88;
          (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar8);
          iVar7 = (int)param_1[2];
        } while (iVar9 < iVar7);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483704ca FUN_1483704ca body=690 status=ok
// SIG undefined FUN_1483704ca(void)

void FUN_1483704ca(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  undefined1 auStack_108 [36];
  int local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1 = (longlong *)*param_1;
  cVar6 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if ((cVar6 != '\0') && (iVar7 = (int)param_1[2], 1 < iVar7)) {
      lVar3 = param_1[1];
      uVar8 = param_2 >> 9 & 0x7fffff;
      lVar5 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x130) + uVar8 * 8) + lVar5);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + uVar8 * 8);
      local_d8 = *(uint *)(lVar4 + lVar5);
      local_dc = *(uint *)(lVar4 + 8 + lVar5);
      local_e0 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar3 + 0x1c0) + (ulonglong)(local_d8 >> 9) * 8) +
                         (ulonglong)((local_d8 & 0x1ff) << 4));
      local_e4 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar3 + 0x1c0) + (ulonglong)(local_dc >> 9) * 8) +
                         (ulonglong)((local_dc & 0x1ff) << 4));
      uVar10 = 1;
      iVar9 = 0;
      iVar12 = 0;
      local_d4 = iVar2;
      do {
        uVar11 = iVar7 + ~uVar10;
        if (iVar2 == local_e0) {
          uVar11 = uVar10;
        }
        local_d0 = (**(code **)(*param_1 + 0x28))(param_1,local_d8,param_2 & 0xffffffff,uVar11);
        uVar11 = uVar10;
        if (iVar2 != local_e4) {
          uVar11 = ~uVar10 + (int)param_1[2];
        }
        local_cc = uVar10;
        iVar7 = (**(code **)(*param_1 + 0x28))(param_1,local_dc,param_2 & 0xffffffff,uVar11);
        if (*(char *)(param_1[9] + (longlong)local_d0) != '\0') {
          unaff_XMM9_Da = *(float *)(param_1[7] + (longlong)(local_d0 * 2) * 4);
          unaff_XMM8_Da = *(float *)(param_1[7] + 4 + (longlong)(local_d0 * 2) * 4);
        }
        if (*(char *)(param_1[9] + (longlong)iVar7) != '\0') {
          unaff_XMM11_Da = *(float *)(param_1[7] + (longlong)(iVar7 * 2) * 4);
          unaff_XMM10_Da = *(float *)(param_1[7] + 4 + (longlong)(iVar7 * 2) * 4);
        }
        uVar10 = local_cc + 1;
        iVar7 = 1;
        do {
          fVar13 = (float)iVar7 / (float)(int)uVar10;
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          local_c8 = (1.0 - fVar13) * unaff_XMM9_Da + unaff_XMM11_Da * fVar13;
          local_c4 = (1.0 - fVar13) * unaff_XMM8_Da + fVar13 * unaff_XMM10_Da;
          (**(code **)(*param_1 + 0x40))(param_1,param_2 & 0xffffffff,iVar12,&local_c8);
          iVar12 = iVar12 + 1;
          iVar1 = iVar9 + iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar1 != 1);
        iVar7 = (int)param_1[2];
        iVar9 = iVar9 + -1;
      } while ((int)uVar10 < iVar7);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837077e FUN_14837077e body=82 status=ok
// SIG undefined FUN_14837077e(void)

void FUN_14837077e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae74340;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14ae743c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483707d0 FUN_1483707d0 body=178 status=ok
// SIG undefined FUN_1483707d0(void)

ulonglong FUN_1483707d0(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[2] == 0) {
    uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  }
  else {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_148370884;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837088c FUN_14837088c body=381 status=ok
// SIG undefined FUN_14837088c(void)

void FUN_14837088c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if (cVar5 != '\0') {
      lVar1 = param_1[1];
      uVar7 = param_2 >> 9 & 0x7fffff;
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + uVar7 * 8);
      lVar4 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      local_38 = *(undefined4 *)(lVar2 + 8 + lVar4);
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + uVar7 * 8);
      local_48 = *(uint *)(lVar2 + 8 + lVar4);
      uVar7 = *(ulonglong *)(lVar2 + lVar4);
      lVar1 = *(longlong *)(lVar1 + 0x1c0);
      local_33 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (uVar7 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)(((uint)uVar7 & 0x1ff) << 4));
      local_50._4_4_ = (uint)(uVar7 >> 0x20);
      local_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_32 = local_40._4_4_ !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_50._4_4_ >> 9) * 8) +
                         (ulonglong)((local_50._4_4_ & 0x1ff) << 4));
      local_31 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_48 >> 9) * 8) +
                         (ulonglong)((local_48 & 0x1ff) << 4));
      local_58 = &local_33;
      local_50 = uVar7;
      local_40 = uVar3;
      FUN_148370a0a(param_1,param_2 & 0xffffffff);
      if (1 < (int)param_1[2]) {
        iVar6 = 0;
        do {
          local_58 = &local_33;
          FUN_148370aaa(param_1,iVar6,param_2 & 0xffffffff,&local_50);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[2] + -1);
      }
      local_58 = &local_33;
      FUN_148370d8c(param_1,param_2 & 0xffffffff,&local_40,&local_50);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148370a0a FUN_148370a0a body=159 status=ok
// SIG undefined FUN_148370a0a(void)

void FUN_148370a0a(longlong *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                  char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*param_3);
  iVar6 = 0;
  iVar7 = 0;
  if (*param_5 == '\x01') {
    iVar7 = (int)param_1[2] + -1;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2 & 0xffffffff,iVar7);
  if (param_5[2] == '\x01') {
    iVar6 = (int)param_1[2] + -1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2 & 0xffffffff,iVar6);
  lVar5 = (longlong)(int)param_2 * (longlong)*(int *)((longlong)param_1 + 0x5c);
  lVar1 = param_1[0xc];
  *(undefined4 *)(lVar1 + lVar5 * 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 4 + lVar5 * 0xc) = uVar3;
  *(undefined4 *)(lVar1 + 8 + lVar5 * 0xc) = uVar4;
  return;
}



// FUNCTION 148370aaa FUN_148370aaa body=737 status=ok
// SIG undefined FUN_148370aaa(void)

void FUN_148370aaa(longlong *param_1,uint param_2,int param_3,undefined4 *param_4,char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  uVar16 = param_2;
  if (*param_5 == '\x01') {
    uVar16 = (int)param_1[2] + ~param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = param_2;
  if (param_5[2] == '\x01') {
    uVar16 = ~param_2 + (int)param_1[2];
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  uVar18 = param_2 + 1;
  uVar16 = uVar18;
  if (*param_5 == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = uVar18;
  if (param_5[2] == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  if (-2 < (int)param_2) {
    uVar13 = param_2 + 2;
    iVar6 = (int)((param_2 + 3) * uVar13) / 2;
    iVar15 = iVar6 + uVar13 * -3 + 3;
    iVar17 = uVar18 * uVar18;
    uVar16 = 1;
    if (1 < (int)uVar13) {
      uVar16 = uVar13;
    }
    uVar13 = 0;
    do {
      uVar11 = uVar3;
      if (uVar13 == 0) {
        if (param_2 != 0) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15);
        }
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2);
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar2;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
        uVar9 = uVar2;
      }
      else if (uVar18 == uVar13) {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2 * 2);
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17;
        iVar14 = 1;
        uVar9 = uVar3;
        uVar11 = uVar5;
      }
      else {
        uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_2 * -3 + iVar6 + -4 + uVar13);
        uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + -4 + param_2 * -2 + uVar13);
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + param_2 * -2 + -3 + uVar13);
        if (param_2 != uVar13) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + uVar13);
        }
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar10;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
      }
      lVar1 = param_1[0xc];
      lVar12 = (longlong)iVar8;
      *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
      *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar7;
      *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar11;
      iVar17 = iVar17 + iVar14;
      uVar13 = uVar13 + 1;
    } while (uVar16 != uVar13);
  }
  return;
}



// FUNCTION 148370d8c FUN_148370d8c body=751 status=ok
// SIG undefined FUN_148370d8c(void)

void FUN_148370d8c(longlong *param_1,int param_2,longlong param_3,undefined4 *param_4,char *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar1 = (int)param_1[2];
  iVar14 = iVar1 + -1;
  iVar15 = 0;
  if (*param_5 == '\0') {
    iVar15 = iVar14;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2,iVar15);
  if (param_5[2] == '\x01') {
    iVar14 = (int)param_1[2] - iVar1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2,iVar14);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 4));
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 8));
  if (-1 < iVar1) {
    iVar14 = ((iVar1 + 2) * (iVar1 + 1)) / 2;
    iVar12 = (iVar1 + 1) * -3 + iVar14 + 3;
    iVar17 = iVar1 * iVar1;
    iVar15 = 0;
    do {
      uVar10 = uVar4;
      if (iVar15 == 0) {
        if (iVar1 != 1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12);
        }
        iVar16 = 0;
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] + -1;
        }
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar3;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar5;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
        uVar7 = uVar3;
      }
      else if (iVar15 == iVar1) {
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17;
        iVar13 = 1;
        uVar10 = uVar6;
        uVar7 = uVar4;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_2,~(iVar1 * 3) + iVar14 + iVar15);
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] - iVar15;
        }
        else {
          iVar16 = iVar15 + -1;
        }
        uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        if (iVar15 - iVar1 != -1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12 + iVar15);
        }
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar8;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
      }
      lVar2 = param_1[0xc];
      lVar11 = (longlong)iVar16;
      *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
      *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar9;
      *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar10;
      iVar17 = iVar17 + iVar13;
      bVar18 = iVar15 != iVar1;
      iVar15 = iVar15 + 1;
    } while (bVar18);
  }
  return;
}



// FUNCTION 14837107c FUN_14837107c body=38 status=ok
// SIG undefined FUN_14837107c(void)

undefined8 FUN_14837107c(undefined8 param_1,int param_2)

{
  FUN_148336b9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483710a2 FUN_1483710a2 body=97 status=ok
// SIG undefined FUN_1483710a2(void)

void FUN_1483710a2(longlong param_1,int param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a84024(param_1 + 0x38,param_2 * 4,1);
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x48,&local_19,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148371104 FUN_148371104 body=1025 status=ok
// SIG undefined FUN_148371104(void)

void FUN_148371104(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong *local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(int *)(param_1[1] + 0x200);
  local_48 = (longlong *)0x0;
  local_3c = 0x80;
  uVar9 = local_40 + 0x1f;
  if (uVar9 < 0x20) {
    if (param_1 + 0x10 == &local_58) goto LAB_1483711a2;
LAB_14837115e:
    param_1[0x10] = local_58;
    param_1[0x11] = lStack_50;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (uVar9 < 0xa0) {
      plVar5 = &local_58;
LAB_14837147e:
      uVar9 = uVar9 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_58,0,uVar9 >> 5,4);
      local_3c = uVar9 & 0xffffffe0;
      plVar5 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar5 = &local_58;
      }
      if (uVar9 < 0x120) goto LAB_14837147e;
      uVar9 = (uVar9 >> 5) << 2;
    }
    memset(plVar5,0,(ulonglong)uVar9);
    iVar11 = local_40 + 0x1f;
    if (-1 < local_40) {
      iVar11 = local_40;
    }
    if (local_40 % 0x20 != 0) {
      plVar5 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar5 = &local_58;
      }
      bVar6 = -(char)(local_40 % 0x20);
      *(uint *)((longlong)plVar5 + (longlong)(iVar11 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
    if (param_1 + 0x10 == &local_58) {
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8(local_48);
      }
      goto LAB_1483711a2;
    }
    plVar5 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_14837115e;
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
    plVar5 = local_48;
  }
  param_1[0x12] = (longlong)plVar5;
  local_48 = (longlong *)0x0;
  *(int *)(param_1 + 0x13) = local_40;
  *(uint *)((longlong)param_1 + 0x9c) = local_3c;
LAB_1483711a2:
  FUN_144a1a59e(param_1 + 0xe,*(undefined4 *)(param_1[1] + 0x200),1);
  lVar8 = param_1[1];
  if (*(int *)(lVar8 + 0x200) < 1) {
    iVar11 = (int)param_1[2];
    iVar4 = 0;
  }
  else {
    uVar10 = 0;
    iVar4 = 0;
    do {
      *(int *)(param_1[0xe] + uVar10 * 4) = iVar4;
      uVar2 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (uVar10 >> 9 & 0x7fffff) * 8) + 8
               + (ulonglong)(((uint)uVar10 & 0x1ff) << 4));
      cVar3 = FUN_146c1ae78(param_1[0x14],uVar10 & 0xffffffff,0);
      uVar9 = 1 << ((byte)uVar10 & 0x1f);
      plVar5 = (longlong *)param_1[0x12];
      if ((longlong *)param_1[0x12] == (longlong *)0x0) {
        plVar5 = param_1 + 0x10;
      }
      uVar12 = uVar10 >> 5 & 0x7ffffff;
      if ((cVar3 == '\0') || (0xfffffffeffffffff < uVar2)) {
        puVar1 = (uint *)((longlong)plVar5 + uVar12 * 4);
        *puVar1 = *puVar1 & ~uVar9;
        iVar11 = (int)param_1[2];
        iVar13 = iVar11;
      }
      else {
        puVar1 = (uint *)((longlong)plVar5 + uVar12 * 4);
        *puVar1 = *puVar1 | uVar9;
        iVar11 = (int)param_1[2];
        iVar13 = iVar11 * 2;
      }
      iVar4 = iVar13 + iVar4;
      uVar10 = uVar10 + 1;
      lVar8 = param_1[1];
    } while ((longlong)uVar10 < (longlong)*(int *)(lVar8 + 0x200));
  }
  iVar13 = *(int *)(param_1[0x14] + 8) * 0x200 + *(int *)(param_1[0x14] + 0xc);
  *(int *)(param_1 + 5) = iVar13;
  *(int *)(param_1 + 6) = iVar4;
  iVar11 = ((iVar11 + 3) * (iVar11 + 2)) / 2 + iVar11 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar11;
  *(int *)((longlong)param_1 + 0x2c) = iVar11 * *(int *)(lVar8 + 0x170) + iVar13 + iVar4;
  (**(code **)(*param_1 + 0x70))(param_1);
  lVar8 = param_1[0x14];
  uVar9 = *(int *)(lVar8 + 8) * 0x200 + *(int *)(lVar8 + 0xc);
  uVar10 = 0;
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x10) - 1U))) {
    uVar10 = 1;
    uVar7 = 1;
    if (1 < (int)uVar9) {
      uVar10 = (ulonglong)uVar9;
    }
    do {
      uVar14 = uVar7;
      if ((uint)uVar10 == uVar14) goto LAB_1483713f8;
      uVar7 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x10))[uVar14 >> 9] +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    uVar10 = (ulonglong)uVar14;
  }
LAB_1483713f8:
  do {
    uVar7 = (uint)uVar10;
    if (uVar7 == uVar9) {
      if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    plVar5 = (longlong *)
             (*(longlong *)
               (*(longlong *)(param_1[0x14] + 0x48) + (ulonglong)((uint)(uVar10 >> 4) & 0x3fffff8))
             + (ulonglong)((uVar7 & 0x7f) << 4));
    local_58 = *plVar5;
    lStack_50 = plVar5[1];
    *(undefined1 *)(param_1[9] + (longlong)(int)uVar7) = 1;
    lVar15 = 0;
    do {
      *(undefined4 *)(param_1[7] + (longlong)(int)(uVar7 * 4) * 4 + lVar15 * 4) =
           *(undefined4 *)((longlong)&local_58 + lVar15 * 4);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    uVar14 = uVar7 + 1;
    if ((int)(uVar7 + 1) < (int)uVar9) {
      uVar14 = uVar9;
    }
    do {
      iVar11 = (int)uVar10;
      uVar10 = (ulonglong)uVar14;
      if (uVar14 - 1 == iVar11) break;
      uVar7 = iVar11 + 1;
      uVar10 = (ulonglong)uVar7;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar8 + 0x10) +
                                           (ulonglong)(uVar7 >> 9) * 8) +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 148371506 FUN_148371506 body=120 status=ok
// SIG undefined FUN_148371506(void)

int FUN_148371506(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
  }
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  iVar1 = (uint)(*(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                           (ulonglong)(param_2 >> 9) * 8) + 8 + (ulonglong)((param_2 & 0x1ff) << 4))
                != param_3) + param_4 * 2;
  if ((*(uint *)(lVar2 + (longlong)((int)uVar3 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    iVar1 = param_4;
  }
  return *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 4) +
         *(int *)(param_1 + 0x28) + iVar1;
}



// FUNCTION 14837157e FUN_14837157e body=75 status=ok
// SIG undefined FUN_14837157e(void)

void FUN_14837157e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1[7] + (longlong)(iVar1 << 2) * 4 + lVar2 * 4) =
         *(undefined4 *)(in_stack_00000028 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 1483715dc FUN_1483715dc body=73 status=ok
// SIG undefined FUN_1483715dc(void)

void FUN_1483715dc(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1[7] + (longlong)(iVar1 << 2) * 4 + lVar2 * 4) =
         *(undefined4 *)(param_4 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 148371632 FUN_148371632 body=86 status=ok
// SIG undefined FUN_148371632(void)

void FUN_148371632(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar2 = FUN_146c34fac(lVar1);
  if (uVar2 != 0xffffffff) {
    lVar3 = 0;
    do {
      *(undefined4 *)(param_4 + lVar3 * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
             (ulonglong)((uVar2 & 0x7f) << 4) + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  return;
}



// FUNCTION 148371688 FUN_148371688 body=164 status=ok
// SIG undefined FUN_148371688(void)

ulonglong FUN_148371688(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_148371aaa;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837172e FUN_14837172e body=172 status=ok
// SIG undefined FUN_14837172e(void)

ulonglong FUN_14837172e(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (1 < (int)param_1[2]) {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_148371d38;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837184e FUN_14837184e body=43 status=ok
// SIG undefined FUN_14837184e(void)

void FUN_14837184e(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  FUN_146bd783c(param_1 + 0xc,param_2,1);
  return;
}



// FUNCTION 14837187c FUN_14837187c body=164 status=ok
// SIG undefined FUN_14837187c(void)

ulonglong FUN_14837187c(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_148371968;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148371970 FUN_148371970 body=313 status=ok
// SIG undefined FUN_148371970(void)

void FUN_148371970(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float *local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1 = (longlong *)*param_1;
  cVar4 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar3 = *(ulonglong *)(lVar2 + uVar6);
    uVar1 = *(undefined4 *)(lVar2 + 8 + uVar6);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar3,&local_68);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar3 >> 0x20);
    iVar5 = (int)param_1[2];
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        fVar8 = (float)iVar7 / (float)(iVar5 + 1);
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar9 = 1.0 - fVar8;
        local_88 = fVar9 * local_68 + fVar8 * local_78;
        fStack_84 = fVar9 * fStack_64 + fVar8 * fStack_74;
        fStack_80 = fVar9 * fStack_60 + fVar8 * fStack_70;
        fStack_7c = fVar9 * fStack_5c + fVar8 * fStack_6c;
        local_98 = &local_88;
        (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar1);
        iVar5 = (int)param_1[2];
      } while (iVar7 < iVar5);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148371ab2 FUN_148371ab2 body=645 status=ok
// SIG undefined FUN_148371ab2(void)

void FUN_148371ab2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1 = (longlong *)*param_1;
  cVar3 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar3 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar2 = *(ulonglong *)(lVar1 + uVar6);
    uVar6 = *(ulonglong *)(lVar1 + 8 + uVar6);
    uVar8 = uVar6 >> 0x20;
    uVar5 = (int)uVar6 * 3;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(param_1[0x14] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4)) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar6 & 0xffffffff,uVar2 & 0xffffffff,&local_88);
      (**(code **)(*param_1 + 0x50))(param_1,uVar6 & 0xffffffff,uVar2 >> 0x20);
      iVar7 = (int)param_1[2];
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          fVar10 = (float)iVar9 / (float)(iVar7 + 1);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar11 = 1.0 - fVar10;
          local_a8 = fVar11 * local_88 + fVar10 * local_98;
          fStack_a4 = fVar11 * fStack_84 + fVar10 * fStack_94;
          fStack_a0 = fVar11 * fStack_80 + fVar10 * fStack_90;
          fStack_9c = fVar11 * fStack_7c + fVar10 * fStack_8c;
          local_b8 = &local_a8;
          (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar6 & 0xffffffff);
          iVar7 = (int)param_1[2];
        } while (iVar9 < iVar7);
      }
    }
    plVar4 = param_1 + 0x10;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x12];
    }
    uVar5 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    iVar7 = (int)(uVar6 >> 0x20);
    if (((iVar7 != -1) &&
        ((1 << ((byte)param_2 & 0x1f) &
         *(uint *)((longlong)plVar4 + (longlong)((int)uVar5 >> 5) * 4)) != 0)) &&
       (uVar5 = iVar7 * 3,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(param_1[0x14] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4))) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar8,uVar2 & 0xffffffff,&local_88);
      (**(code **)(*param_1 + 0x50))(param_1,uVar8,uVar2 >> 0x20);
      iVar7 = (int)param_1[2];
      if (0 < iVar7) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          fVar10 = (float)iVar9 / (float)(iVar7 + 1);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar11 = 1.0 - fVar10;
          local_a8 = fVar11 * local_88 + fVar10 * local_98;
          fStack_a4 = fVar11 * fStack_84 + fVar10 * fStack_94;
          fStack_a0 = fVar11 * fStack_80 + fVar10 * fStack_90;
          fStack_9c = fVar11 * fStack_7c + fVar10 * fStack_8c;
          local_b8 = &local_a8;
          (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar8);
          iVar7 = (int)param_1[2];
        } while (iVar9 < iVar7);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148371d40 FUN_148371d40 body=628 status=ok
// SIG undefined FUN_148371d40(void)

void FUN_148371d40(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  undefined1 auStack_f8 [36];
  int local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1 = (longlong *)*param_1;
  cVar7 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar7 == '\0') {
    cVar7 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if ((cVar7 != '\0') && (iVar8 = (int)param_1[2], 1 < iVar8)) {
      lVar4 = param_1[1];
      uVar9 = param_2 >> 9 & 0x7fffff;
      lVar6 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x130) + uVar9 * 8) + lVar6);
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x180) + uVar9 * 8);
      local_c8 = *(uint *)(lVar5 + lVar6);
      local_cc = *(uint *)(lVar5 + 8 + lVar6);
      local_d0 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(local_c8 >> 9) * 8) +
                         (ulonglong)((local_c8 & 0x1ff) << 4));
      local_d4 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(local_cc >> 9) * 8) +
                         (ulonglong)((local_cc & 0x1ff) << 4));
      uVar11 = 1;
      iVar10 = 0;
      iVar13 = 0;
      local_c4 = iVar3;
      do {
        uVar12 = iVar8 + ~uVar11;
        if (iVar3 == local_d0) {
          uVar12 = uVar11;
        }
        local_c0 = (**(code **)(*param_1 + 0x28))(param_1,local_c8,param_2 & 0xffffffff,uVar12);
        uVar12 = uVar11;
        if (iVar3 != local_d4) {
          uVar12 = ~uVar11 + (int)param_1[2];
        }
        local_bc = uVar11;
        iVar8 = (**(code **)(*param_1 + 0x28))(param_1,local_cc,param_2 & 0xffffffff,uVar12);
        if (*(char *)(param_1[9] + (longlong)local_c0) != '\0') {
          pfVar2 = (float *)(param_1[7] + (longlong)(local_c0 << 2) * 4);
          unaff_XMM8_Da = *pfVar2;
          unaff_XMM8_Db = pfVar2[1];
          unaff_XMM8_Dc = pfVar2[2];
          unaff_XMM8_Dd = pfVar2[3];
        }
        if (*(char *)(param_1[9] + (longlong)iVar8) != '\0') {
          pfVar2 = (float *)(param_1[7] + (longlong)(iVar8 << 2) * 4);
          unaff_XMM9_Da = *pfVar2;
          unaff_XMM9_Db = pfVar2[1];
          unaff_XMM9_Dc = pfVar2[2];
          unaff_XMM9_Dd = pfVar2[3];
        }
        uVar11 = local_bc + 1;
        iVar8 = 1;
        do {
          fVar14 = (float)iVar8 / (float)(int)uVar11;
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar15 = 1.0 - fVar14;
          local_b8 = fVar15 * unaff_XMM8_Da + fVar14 * unaff_XMM9_Da;
          fStack_b4 = fVar15 * unaff_XMM8_Db + fVar14 * unaff_XMM9_Db;
          fStack_b0 = fVar15 * unaff_XMM8_Dc + fVar14 * unaff_XMM9_Dc;
          fStack_ac = fVar15 * unaff_XMM8_Dd + fVar14 * unaff_XMM9_Dd;
          (**(code **)(*param_1 + 0x40))(param_1,param_2 & 0xffffffff,iVar13,&local_b8);
          iVar13 = iVar13 + 1;
          iVar1 = iVar10 + iVar8;
          iVar8 = iVar8 + 1;
        } while (iVar1 != 1);
        iVar8 = (int)param_1[2];
        iVar10 = iVar10 + -1;
      } while ((int)uVar11 < iVar8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148371fb6 FUN_148371fb6 body=82 status=ok
// SIG undefined FUN_148371fb6(void)

void FUN_148371fb6(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae744b0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14ae74530;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148372008 FUN_148372008 body=178 status=ok
// SIG undefined FUN_148372008(void)

ulonglong FUN_148372008(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[2] == 0) {
    uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  }
  else {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_1483720bc;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483720c4 FUN_1483720c4 body=381 status=ok
// SIG undefined FUN_1483720c4(void)

void FUN_1483720c4(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if (cVar5 != '\0') {
      lVar1 = param_1[1];
      uVar7 = param_2 >> 9 & 0x7fffff;
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + uVar7 * 8);
      lVar4 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      local_38 = *(undefined4 *)(lVar2 + 8 + lVar4);
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + uVar7 * 8);
      local_48 = *(uint *)(lVar2 + 8 + lVar4);
      uVar7 = *(ulonglong *)(lVar2 + lVar4);
      lVar1 = *(longlong *)(lVar1 + 0x1c0);
      local_33 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (uVar7 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)(((uint)uVar7 & 0x1ff) << 4));
      local_50._4_4_ = (uint)(uVar7 >> 0x20);
      local_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_32 = local_40._4_4_ !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_50._4_4_ >> 9) * 8) +
                         (ulonglong)((local_50._4_4_ & 0x1ff) << 4));
      local_31 = (int)uVar3 !=
                 *(int *)(*(longlong *)(lVar1 + (ulonglong)(local_48 >> 9) * 8) +
                         (ulonglong)((local_48 & 0x1ff) << 4));
      local_58 = &local_33;
      local_50 = uVar7;
      local_40 = uVar3;
      FUN_148372242(param_1,param_2 & 0xffffffff);
      if (1 < (int)param_1[2]) {
        iVar6 = 0;
        do {
          local_58 = &local_33;
          FUN_1483722e2(param_1,iVar6,param_2 & 0xffffffff,&local_50);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[2] + -1);
      }
      local_58 = &local_33;
      FUN_1483725c4(param_1,param_2 & 0xffffffff,&local_40,&local_50);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372242 FUN_148372242 body=159 status=ok
// SIG undefined FUN_148372242(void)

void FUN_148372242(longlong *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                  char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*param_3);
  iVar6 = 0;
  iVar7 = 0;
  if (*param_5 == '\x01') {
    iVar7 = (int)param_1[2] + -1;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2 & 0xffffffff,iVar7);
  if (param_5[2] == '\x01') {
    iVar6 = (int)param_1[2] + -1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2 & 0xffffffff,iVar6);
  lVar5 = (longlong)(int)param_2 * (longlong)*(int *)((longlong)param_1 + 0x5c);
  lVar1 = param_1[0xc];
  *(undefined4 *)(lVar1 + lVar5 * 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 4 + lVar5 * 0xc) = uVar3;
  *(undefined4 *)(lVar1 + 8 + lVar5 * 0xc) = uVar4;
  return;
}



// FUNCTION 1483722e2 FUN_1483722e2 body=737 status=ok
// SIG undefined FUN_1483722e2(void)

void FUN_1483722e2(longlong *param_1,uint param_2,int param_3,undefined4 *param_4,char *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  uVar16 = param_2;
  if (*param_5 == '\x01') {
    uVar16 = (int)param_1[2] + ~param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = param_2;
  if (param_5[2] == '\x01') {
    uVar16 = ~param_2 + (int)param_1[2];
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  uVar18 = param_2 + 1;
  uVar16 = uVar18;
  if (*param_5 == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_3,uVar16);
  uVar16 = uVar18;
  if (param_5[2] == '\x01') {
    uVar16 = ((int)param_1[2] - param_2) - 2;
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_3,uVar16);
  if (-2 < (int)param_2) {
    uVar13 = param_2 + 2;
    iVar6 = (int)((param_2 + 3) * uVar13) / 2;
    iVar15 = iVar6 + uVar13 * -3 + 3;
    iVar17 = uVar18 * uVar18;
    uVar16 = 1;
    if (1 < (int)uVar13) {
      uVar16 = uVar13;
    }
    uVar13 = 0;
    do {
      uVar11 = uVar3;
      if (uVar13 == 0) {
        if (param_2 != 0) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15);
        }
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2);
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar2;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
        uVar9 = uVar2;
      }
      else if (uVar18 == uVar13) {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + param_2 * 2);
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17;
        iVar14 = 1;
        uVar9 = uVar3;
        uVar11 = uVar5;
      }
      else {
        uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_2 * -3 + iVar6 + -4 + uVar13);
        uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + -4 + param_2 * -2 + uVar13);
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar6 + param_2 * -2 + -3 + uVar13);
        if (param_2 != uVar13) {
          uVar11 = (**(code **)(*param_1 + 0x38))(param_1,param_3,iVar15 + uVar13);
        }
        lVar1 = param_1[0xc];
        lVar12 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17);
        *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
        *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar10;
        *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x5c) * param_3 + iVar17 + 1;
        iVar14 = 2;
      }
      lVar1 = param_1[0xc];
      lVar12 = (longlong)iVar8;
      *(undefined4 *)(lVar1 + lVar12 * 0xc) = uVar9;
      *(undefined4 *)(lVar1 + 4 + lVar12 * 0xc) = uVar7;
      *(undefined4 *)(lVar1 + 8 + lVar12 * 0xc) = uVar11;
      iVar17 = iVar17 + iVar14;
      uVar13 = uVar13 + 1;
    } while (uVar16 != uVar13);
  }
  return;
}



// FUNCTION 1483725c4 FUN_1483725c4 body=751 status=ok
// SIG undefined FUN_1483725c4(void)

void FUN_1483725c4(longlong *param_1,int param_2,longlong param_3,undefined4 *param_4,char *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar1 = (int)param_1[2];
  iVar14 = iVar1 + -1;
  iVar15 = 0;
  if (*param_5 == '\0') {
    iVar15 = iVar14;
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,*param_4,param_2,iVar15);
  if (param_5[2] == '\x01') {
    iVar14 = (int)param_1[2] - iVar1;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_4[2],param_2,iVar14);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 4));
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + 8));
  if (-1 < iVar1) {
    iVar14 = ((iVar1 + 2) * (iVar1 + 1)) / 2;
    iVar12 = (iVar1 + 1) * -3 + iVar14 + 3;
    iVar17 = iVar1 * iVar1;
    iVar15 = 0;
    do {
      uVar10 = uVar4;
      if (iVar15 == 0) {
        if (iVar1 != 1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12);
        }
        iVar16 = 0;
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] + -1;
        }
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar3;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar5;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
        uVar7 = uVar3;
      }
      else if (iVar15 == iVar1) {
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17;
        iVar13 = 1;
        uVar10 = uVar6;
        uVar7 = uVar4;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_2,~(iVar1 * 3) + iVar14 + iVar15);
        if (param_5[1] == '\x01') {
          iVar16 = (int)param_1[2] - iVar15;
        }
        else {
          iVar16 = iVar15 + -1;
        }
        uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2,iVar16);
        uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_4[1],param_2);
        if (iVar15 - iVar1 != -1) {
          uVar10 = (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar12 + iVar15);
        }
        lVar2 = param_1[0xc];
        lVar11 = (longlong)(*(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17);
        *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
        *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar8;
        *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x5c) * param_2 + iVar17 + 1;
        iVar13 = 2;
      }
      lVar2 = param_1[0xc];
      lVar11 = (longlong)iVar16;
      *(undefined4 *)(lVar2 + lVar11 * 0xc) = uVar7;
      *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = uVar9;
      *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar10;
      iVar17 = iVar17 + iVar13;
      bVar18 = iVar15 != iVar1;
      iVar15 = iVar15 + 1;
    } while (bVar18);
  }
  return;
}



// FUNCTION 1483728f6 FUN_1483728f6 body=12 status=ok
// SIG undefined FUN_1483728f6(void)

void FUN_1483728f6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001483728ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148372902 FUN_148372902 body=29 status=ok
// SIG undefined FUN_148372902(void)

undefined8 FUN_148372902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148372972 FUN_148372972 body=29 status=ok
// SIG undefined FUN_148372972(void)

undefined8 FUN_148372972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148372990 FUN_148372990 body=38 status=ok
// SIG undefined FUN_148372990(void)

undefined8 FUN_148372990(undefined8 param_1,int param_2)

{
  FUN_148372df2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483729b6 FUN_1483729b6 body=62 status=ok
// SIG undefined FUN_1483729b6(void)

undefined8 FUN_1483729b6(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14834dd76();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001483729e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1483729f4 FUN_1483729f4 body=90 status=ok
// SIG undefined FUN_1483729f4(void)

void FUN_1483729f4(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a84024(param_1 + 0x38,param_2,1);
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x48,&local_19,param_2 & 0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372a50 FUN_148372a50 body=279 status=ok
// SIG undefined FUN_148372a50(void)

void FUN_148372a50(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = (int)param_1[2];
  lVar7 = param_1[1];
  iVar1 = *(int *)(lVar7 + 0x50);
  *(int *)(param_1 + 5) = iVar1;
  iVar6 = *(int *)(lVar7 + 0x200) * iVar5;
  *(int *)(param_1 + 6) = iVar6;
  iVar5 = ((iVar5 + 3) * (iVar5 + 2)) / 2 + iVar5 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar5;
  *(int *)((longlong)param_1 + 0x2c) = iVar5 * *(int *)(lVar7 + 0x170) + iVar6 + iVar1;
  (**(code **)(*param_1 + 0x18))(param_1);
  if (0 < *(int *)(param_1[1] + 0x50)) {
    lVar7 = 0;
    do {
      local_54 = (undefined4)lVar7;
      pcVar2 = (code *)param_1[0xc];
      plVar4 = (longlong *)param_1[0xe];
      if ((longlong *)param_1[0xe] == (longlong *)0x0) {
        plVar4 = param_1 + 0x10;
      }
      local_50 = &local_44;
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_54,&local_50);
      *(undefined1 *)(param_1[9] + lVar7) = 1;
      *(undefined4 *)(param_1[7] + lVar7 * 4) = local_44;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1[1] + 0x50));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372b76 FUN_148372b76 body=50 status=ok
// SIG undefined FUN_148372b76(void)

void FUN_148372b76(longlong *param_1)

{
  int iVar1;
  undefined4 *in_stack_00000028;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  *(undefined4 *)(param_1[7] + (longlong)iVar1 * 4) = *in_stack_00000028;
  return;
}



// FUNCTION 148372bba FUN_148372bba body=48 status=ok
// SIG undefined FUN_148372bba(void)

void FUN_148372bba(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  *(undefined1 *)(param_1[9] + (longlong)iVar1) = 1;
  *(undefined4 *)(param_1[7] + (longlong)iVar1 * 4) = *param_4;
  return;
}



// FUNCTION 148372bee FUN_148372bee body=104 status=ok
// SIG undefined FUN_148372bee(void)

void FUN_148372bee(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x70);
  }
  local_2c = param_3;
  local_28 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_2c,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372c58 FUN_148372c58 body=164 status=ok
// SIG undefined FUN_148372c58(void)

ulonglong FUN_148372c58(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_148372e56;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372cfe FUN_148372cfe body=172 status=ok
// SIG undefined FUN_148372cfe(void)

ulonglong FUN_148372cfe(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (1 < (int)param_1[2]) {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_148372f88;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372df2 FUN_148372df2 body=99 status=ok
// SIG undefined FUN_148372df2(void)

void FUN_148372df2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae745e0;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14ae74650;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148372e5e FUN_148372e5e body=297 status=ok
// SIG undefined FUN_148372e5e(void)

void FUN_148372e5e(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  float *local_68;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1 = (longlong *)*param_1;
  cVar4 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar3 = *(ulonglong *)(lVar2 + uVar6);
    uVar1 = *(undefined4 *)(lVar2 + 8 + uVar6);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar3,&local_54);
    (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar3 >> 0x20);
    iVar5 = (int)param_1[2];
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        fVar8 = (float)iVar7 / (float)(iVar5 + 1);
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        local_5c = (1.0 - fVar8) * local_54 + fVar8 * local_58;
        local_68 = &local_5c;
        (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar1);
        iVar5 = (int)param_1[2];
      } while (iVar7 < iVar5);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148372f90 FUN_148372f90 body=596 status=ok
// SIG undefined FUN_148372f90(void)

void FUN_148372f90(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  undefined1 auStack_e8 [44];
  int local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xffffffff);
    if ((cVar5 != '\0') && (iVar6 = (int)param_1[2], 1 < iVar6)) {
      lVar2 = param_1[1];
      uVar7 = param_2 >> 9 & 0x7fffff;
      lVar4 = (ulonglong)(((uint)param_2 & 0x1ff) << 2) * 3;
      local_ac = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x130) + uVar7 * 8) + lVar4);
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x180) + uVar7 * 8);
      local_b0 = *(uint *)(lVar3 + lVar4);
      local_b4 = *(uint *)(lVar3 + 8 + lVar4);
      local_b8 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(local_b0 >> 9) * 8) +
                         (ulonglong)((local_b0 & 0x1ff) << 4));
      local_bc = *(int *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(local_b4 >> 9) * 8) +
                         (ulonglong)((local_b4 & 0x1ff) << 4));
      uVar10 = 1;
      iVar8 = 0;
      iVar11 = 0;
      do {
        iVar1 = local_ac;
        uVar9 = iVar6 + ~uVar10;
        if (local_ac == local_b8) {
          uVar9 = uVar10;
        }
        local_a8 = (**(code **)(*param_1 + 0x28))(param_1,local_b0,param_2 & 0xffffffff,uVar9);
        uVar9 = uVar10;
        if (iVar1 != local_bc) {
          uVar9 = ~uVar10 + (int)param_1[2];
        }
        iVar6 = (**(code **)(*param_1 + 0x28))(param_1,local_b4,param_2 & 0xffffffff,uVar9);
        if (*(char *)(param_1[9] + (longlong)local_a8) != '\0') {
          unaff_XMM9_Da = *(float *)(param_1[7] + (longlong)local_a8 * 4);
        }
        if (*(char *)(param_1[9] + (longlong)iVar6) != '\0') {
          unaff_XMM8_Da = *(float *)(param_1[7] + (longlong)iVar6 * 4);
        }
        uVar10 = uVar10 + 1;
        iVar6 = 1;
        do {
          fVar12 = (float)iVar6 / (float)(int)uVar10;
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          local_a4 = (1.0 - fVar12) * unaff_XMM9_Da + fVar12 * unaff_XMM8_Da;
          (**(code **)(*param_1 + 0x40))(param_1,param_2 & 0xffffffff,iVar11,&local_a4);
          iVar11 = iVar11 + 1;
          iVar1 = iVar8 + iVar6;
          iVar6 = iVar6 + 1;
        } while (iVar1 != 1);
        iVar6 = (int)param_1[2];
        iVar8 = iVar8 + -1;
      } while ((int)uVar10 < iVar6);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483731e6 FUN_1483731e6 body=138 status=ok
// SIG undefined FUN_1483731e6(void)

void FUN_1483731e6(longlong *param_1,uint *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)*param_3;
  if (*(char *)(*param_1 + 0x70) == '\0') {
    local_10 = DAT_14c846378;
    local_18 = DAT_14c846370;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (ulonglong)(*param_2 >> 9) * 8);
    uVar3 = (ulonglong)(*param_2 & 0x1ff);
    local_10 = *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc);
    local_18 = *(undefined8 *)(lVar2 + uVar3 * 0xc);
  }
  *(undefined4 *)(puVar1 + 1) = local_10;
  *puVar1 = local_18;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837329c FUN_14837329c body=29 status=ok
// SIG undefined FUN_14837329c(void)

undefined8 FUN_14837329c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483732ba FUN_1483732ba body=38 status=ok
// SIG undefined FUN_1483732ba(void)

undefined8 FUN_1483732ba(undefined8 param_1,int param_2)

{
  FUN_1483734cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483732e0 FUN_1483732e0 body=62 status=ok
// SIG undefined FUN_1483732e0(void)

undefined8 FUN_1483732e0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14834dd76();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148373312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14837331e FUN_14837331e body=304 status=ok
// SIG undefined FUN_14837331e(void)

void FUN_14837331e(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = (int)param_1[2];
  lVar8 = param_1[1];
  iVar1 = *(int *)(lVar8 + 0x50);
  *(int *)(param_1 + 5) = iVar1;
  iVar7 = *(int *)(lVar8 + 0x200) * iVar6;
  *(int *)(param_1 + 6) = iVar7;
  iVar6 = ((iVar6 + 3) * (iVar6 + 2)) / 2 + iVar6 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar6;
  *(int *)((longlong)param_1 + 0x2c) = iVar6 * *(int *)(lVar8 + 0x170) + iVar7 + iVar1;
  (**(code **)(*param_1 + 0x18))(param_1);
  if (0 < *(int *)(param_1[1] + 0x50)) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      local_64 = (undefined4)lVar8;
      pcVar2 = (code *)param_1[0xc];
      plVar5 = (longlong *)param_1[0xe];
      if ((longlong *)param_1[0xe] == (longlong *)0x0) {
        plVar5 = param_1 + 0x10;
      }
      local_60 = local_54;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_64,&local_60);
      *(undefined1 *)(param_1[9] + lVar8) = 1;
      lVar4 = 0;
      do {
        *(undefined4 *)(param_1[7] + lVar9 + lVar4 * 4) = local_54[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0xc;
    } while (lVar8 < *(int *)(param_1[1] + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148373462 FUN_148373462 body=104 status=ok
// SIG undefined FUN_148373462(void)

void FUN_148373462(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x70);
  }
  local_2c = param_3;
  local_28 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_2c,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483734cc FUN_1483734cc body=99 status=ok
// SIG undefined FUN_1483734cc(void)

void FUN_1483734cc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae746e0;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14ae74250;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148373598 FUN_148373598 body=29 status=ok
// SIG undefined FUN_148373598(void)

undefined8 FUN_148373598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483735b6 FUN_1483735b6 body=38 status=ok
// SIG undefined FUN_1483735b6(void)

undefined8 FUN_1483735b6(undefined8 param_1,int param_2)

{
  FUN_1483737c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483735dc FUN_1483735dc body=62 status=ok
// SIG undefined FUN_1483735dc(void)

undefined8 FUN_1483735dc(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14834dd76();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014837360e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14837361a FUN_14837361a body=296 status=ok
// SIG undefined FUN_14837361a(void)

void FUN_14837361a(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = (int)param_1[2];
  lVar7 = param_1[1];
  iVar1 = *(int *)(lVar7 + 0x50);
  *(int *)(param_1 + 5) = iVar1;
  iVar6 = *(int *)(lVar7 + 0x200) * iVar5;
  *(int *)(param_1 + 6) = iVar6;
  iVar5 = ((iVar5 + 3) * (iVar5 + 2)) / 2 + iVar5 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar5;
  *(int *)((longlong)param_1 + 0x2c) = iVar5 * *(int *)(lVar7 + 0x170) + iVar6 + iVar1;
  (**(code **)(*param_1 + 0x18))(param_1);
  if (0 < *(int *)(param_1[1] + 0x50)) {
    lVar7 = 0;
    do {
      local_54 = (undefined4)lVar7;
      pcVar2 = (code *)param_1[0xc];
      plVar4 = (longlong *)param_1[0xe];
      if ((longlong *)param_1[0xe] == (longlong *)0x0) {
        plVar4 = param_1 + 0x10;
      }
      local_50 = &local_48;
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_54,&local_50);
      *(undefined1 *)(param_1[9] + lVar7) = 1;
      *(undefined4 *)(param_1[7] + lVar7 * 8) = local_48;
      *(undefined4 *)(param_1[7] + 4 + lVar7 * 8) = local_44;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1[1] + 0x50));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148373756 FUN_148373756 body=104 status=ok
// SIG undefined FUN_148373756(void)

void FUN_148373756(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x70);
  }
  local_2c = param_3;
  local_28 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_2c,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483737c0 FUN_1483737c0 body=99 status=ok
// SIG undefined FUN_1483737c0(void)

void FUN_1483737c0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae74770;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14ae743c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483738a0 FUN_1483738a0 body=29 status=ok
// SIG undefined FUN_1483738a0(void)

undefined8 FUN_1483738a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483738be FUN_1483738be body=38 status=ok
// SIG undefined FUN_1483738be(void)

undefined8 FUN_1483738be(undefined8 param_1,int param_2)

{
  FUN_148373ad6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483738e4 FUN_1483738e4 body=62 status=ok
// SIG undefined FUN_1483738e4(void)

undefined8 FUN_1483738e4(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14834dd76();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148373916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148373922 FUN_148373922 body=311 status=ok
// SIG undefined FUN_148373922(void)

void FUN_148373922(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined4 *local_60;
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = (int)param_1[2];
  lVar9 = param_1[1];
  iVar1 = *(int *)(lVar9 + 0x50);
  *(int *)(param_1 + 5) = iVar1;
  iVar7 = *(int *)(lVar9 + 0x200) * iVar6;
  *(int *)(param_1 + 6) = iVar7;
  iVar6 = ((iVar6 + 3) * (iVar6 + 2)) / 2 + iVar6 * -3 + -3;
  *(int *)((longlong)param_1 + 0x34) = iVar6;
  *(int *)((longlong)param_1 + 0x2c) = iVar6 * *(int *)(lVar9 + 0x170) + iVar7 + iVar1;
  (**(code **)(*param_1 + 0x18))(param_1);
  if (0 < *(int *)(param_1[1] + 0x50)) {
    lVar9 = 0;
    do {
      local_64 = (uint)lVar9;
      uVar8 = local_64 & 0x3fffffff;
      pcVar2 = (code *)param_1[0xc];
      plVar5 = (longlong *)param_1[0xe];
      if ((longlong *)param_1[0xe] == (longlong *)0x0) {
        plVar5 = param_1 + 0x10;
      }
      local_60 = local_58;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_64,&local_60);
      *(undefined1 *)(param_1[9] + lVar9) = 1;
      lVar4 = 0;
      do {
        *(undefined4 *)(param_1[7] + (ulonglong)uVar8 * 0x10 + lVar4 * 4) = local_58[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1[1] + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148373a6c FUN_148373a6c body=104 status=ok
// SIG undefined FUN_148373a6c(void)

void FUN_148373a6c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x70);
  }
  local_2c = param_3;
  local_28 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_2c,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148373ad6 FUN_148373ad6 body=99 status=ok
// SIG undefined FUN_148373ad6(void)

void FUN_148373ad6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae74800;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14ae74530;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148373b3a FUN_148373b3a body=67 status=ok
// SIG undefined FUN_148373b3a(void)

void FUN_148373b3a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1482fe912(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14834ad96(param_1);
    return;
  }
  FUN_148373b7e(param_1);
  FUN_1482fe912(param_1,0);
  return;
}



// FUNCTION 148373b7e FUN_148373b7e body=322 status=ok
// SIG undefined FUN_148373b7e(void)

void FUN_148373b7e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 148373cc2 FUN_148373cc2 body=197 status=ok
// SIG undefined FUN_148373cc2(void)

void FUN_148373cc2(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = (int *)*param_2;
  uVar3 = *piVar1 * 0x200 + piVar1[1];
  uVar6 = 0;
  if ((uVar3 != 0) && (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(piVar1 + 2) - 1U)))
  {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar4 = uVar3;
    }
    do {
      uVar6 = uVar4;
      if (uVar4 == uVar5) break;
      uVar2 = uVar5 >> 9;
      uVar7 = uVar5 & 0x1ff;
      uVar6 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(piVar1 + 2))[uVar2] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar6 == uVar3) {
      return;
    }
    FUN_146c2d498(param_1,uVar6,1);
    uVar4 = uVar6 + 1;
    if ((int)(uVar6 + 1) < (int)uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = uVar6;
    do {
      uVar6 = uVar4;
      if (uVar4 - 1 == uVar5) break;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(piVar1 + 2) + (ulonglong)(uVar6 >> 9) * 8)
                                         + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 148373d88 FUN_148373d88 body=97 status=ok
// SIG undefined FUN_148373d88(void)

undefined8 * FUN_148373d88(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x4000);
  memset(_Dst,0,0x4000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_14834f574(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 148373e36 FUN_148373e36 body=29 status=ok
// SIG undefined FUN_148373e36(void)

undefined8 FUN_148373e36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148373e8c FUN_148373e8c body=29 status=ok
// SIG undefined FUN_148373e8c(void)

undefined8 FUN_148373e8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148373eaa FUN_148373eaa body=109 status=ok
// SIG undefined FUN_148373eaa(void)

void FUN_148373eaa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14834f448(param_1,iVar1);
    }
    FUN_148374118((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148374136(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148373f18 FUN_148373f18 body=512 status=ok
// SIG undefined FUN_148373f18(void)

void FUN_148373f18(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) < 0) {
    FUN_14834f3e8(param_1 + 0x140,0);
  }
  lVar9 = param_2[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar6 = *param_2;
    pdVar13 = (double *)(lVar6 + 8);
    do {
      iVar2 = *(int *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x148) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x14c) < iVar2 + 1U) {
        FUN_14834f448(param_1 + 0x140,iVar2);
      }
      uVar5 = *(undefined4 *)((longlong)pdVar13 + -4);
      uVar7 = *(undefined4 *)pdVar13;
      uVar8 = *(undefined4 *)((longlong)pdVar13 + 4);
      puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 0x10);
      *puVar11 = *(undefined4 *)(pdVar13 + -1);
      puVar11[1] = uVar5;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      iVar3 = *(int *)((longlong)pdVar13 + -4);
      if ((((*(int *)(param_1 + 0x138) + 1 < iVar3) ||
           (uVar4 = *(uint *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 4), (int)uVar4 < 1)
           ) || (*(int *)(param_1 + 0x128) < (int)uVar4)) ||
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar4 >> 9) * 8) + 8 +
                  (ulonglong)(uVar4 & 0x1ff) * 0xc) < 1)) {
        lVar10 = FUN_14834ee3a(param_1,iVar3,1);
        dVar1 = *pdVar13;
        *(double *)(lVar10 + 0x10) = dVar1;
        *(undefined1 *)(lVar10 + 0x18) = 1;
        *(int *)(lVar10 + 8) = iVar2;
        FUN_146b9cbf0(param_1 + 0x108,iVar3,(float)dVar1);
      }
      pdVar12 = pdVar13 + 1;
      pdVar13 = pdVar13 + 2;
    } while (pdVar12 != (double *)((longlong)(int)lVar9 * 0x10 + lVar6));
  }
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      uVar5 = *(undefined4 *)(**(longlong **)(param_1 + 0x118) + 0xc);
      FUN_146bd26ea(param_1 + 0x108,1);
      puVar11 = (undefined4 *)FUN_14834ee3a(param_1,uVar5,0);
      uVar14 = -(ulonglong)(*(double *)(param_1 + 0x150) <= *(double *)(puVar11 + 4));
      dVar1 = (double)(~uVar14 & (ulonglong)*(double *)(param_1 + 0x150) |
                      (ulonglong)*(double *)(puVar11 + 4) & uVar14);
      *(double *)(param_1 + 0x150) = dVar1;
      if (3.4028234663852886e+38 < dVar1) {
        return;
      }
      *(undefined1 *)(puVar11 + 6) = 1;
      *(undefined4 *)(param_1 + 0x158) = *puVar11;
      FUN_14834ef7e(param_1,puVar11);
    } while (0 < *(int *)(param_1 + 0x128));
  }
  return;
}



// FUNCTION 148374118 FUN_148374118 body=29 status=ok
// SIG undefined FUN_148374118(void)

void FUN_148374118(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148374136 FUN_148374136 body=62 status=ok
// SIG undefined FUN_148374136(void)

void FUN_148374136(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148374174(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148374174 FUN_148374174 body=93 status=ok
// SIG undefined FUN_148374174(void)

ulonglong FUN_148374174(uint param_1,uint param_2)

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



// FUNCTION 1483741d2 FUN_1483741d2 body=138 status=ok
// SIG undefined FUN_1483741d2(void)

longlong FUN_1483741d2(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar2 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0x10) == param_2) {
          if ((uint *)(lVar2 + 4) != (uint *)0x0 && lVar2 != 0) {
            uVar1 = *(uint *)(lVar2 + 4);
            return (ulonglong)((uVar1 & 0x1ff) << 6) +
                   *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar1 >> 9) * 8);
          }
          return 0;
        }
        iVar3 = *(int *)(lVar2 + 8);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148374260 FUN_148374260 body=411 status=ok
// SIG undefined FUN_148374260(void)

void FUN_148374260(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1405357e8(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1403951a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1483743fc FUN_1483743fc body=95 status=ok
// SIG undefined FUN_1483743fc(void)

void FUN_1483743fc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14837445c FUN_14837445c body=132 status=ok
// SIG undefined FUN_14837445c(void)

void FUN_14837445c(longlong param_1,int param_2)

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



// FUNCTION 1483744e1 FUN_1483744e1 body=33 status=ok
// SIG undefined FUN_1483744e1(void)

void FUN_1483744e1(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x28) = 0;
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 148374502 FUN_148374502 body=147 status=ok
// SIG undefined FUN_148374502(void)

void FUN_148374502(longlong param_1,int param_2)

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



// FUNCTION 148374596 FUN_148374596 body=101 status=ok
// SIG undefined FUN_148374596(void)

void FUN_148374596(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_14834e5e0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1483745fc FUN_1483745fc body=62 status=ok
// SIG undefined FUN_1483745fc(void)

void FUN_1483745fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14837463a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14837463a FUN_14837463a body=112 status=ok
// SIG undefined FUN_14837463a(void)

ulonglong FUN_14837463a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148374674;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148374674:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483746aa FUN_1483746aa body=48 status=ok
// SIG undefined FUN_1483746aa(void)

void FUN_1483746aa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1483746da FUN_1483746da body=132 status=ok
// SIG undefined FUN_1483746da(void)

void FUN_1483746da(longlong param_1,int param_2)

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



// FUNCTION 148374760 FUN_148374760 body=99 status=ok
// SIG undefined FUN_148374760(void)

longlong * FUN_148374760(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1483747c4 FUN_1483747c4 body=413 status=ok
// SIG undefined FUN_1483747c4(void)

void FUN_1483747c4(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 148374962 FUN_148374962 body=452 status=ok
// SIG undefined FUN_148374962(void)

void FUN_148374962(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x10;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148374b28 FUN_148374b28 body=293 status=ok
// SIG undefined FUN_148374b28(void)

undefined4 * FUN_148374b28(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148374c4e(param_1,local_48);
  *local_40 = *param_3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1448eb174(local_40,8,0);
  cVar2 = FUN_148374d34(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148374962(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148374c4e FUN_148374c4e body=229 status=ok
// SIG undefined FUN_148374c4e(void)

int * FUN_148374c4e(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 148374d34 FUN_148374d34 body=135 status=ok
// SIG undefined FUN_148374d34(void)

undefined8 FUN_148374d34(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x10;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)param_3;
          FUN_148374dbc(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((undefined8 *)(lVar1 + lVar4) + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 148374dbc FUN_148374dbc body=114 status=ok
// SIG undefined FUN_148374dbc(void)

void FUN_148374dbc(longlong *param_1,int param_2)

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



// FUNCTION 148374e2e FUN_148374e2e body=52 status=ok
// SIG undefined FUN_148374e2e(void)

void FUN_148374e2e(longlong *param_1)

{
  FUN_148374e62();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148374e62 FUN_148374e62 body=89 status=ok
// SIG undefined FUN_148374e62(void)

void FUN_148374e62(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148374ebc FUN_148374ebc body=132 status=ok
// SIG undefined FUN_148374ebc(void)

longlong FUN_148374ebc(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_148374f42();
  if (lVar1 == 0) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_148374f9a(param_1,&local_2c,param_2);
    lVar1 = *param_1 + (longlong)local_2c * 0x14;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 148374f42 FUN_148374f42 body=87 status=ok
// SIG undefined FUN_148374f42(void)

int * FUN_148374f42(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x14) == param_3[1])
           ) {
          return piVar1;
        }
        iVar2 = piVar1[3];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 148374f9a FUN_148374f9a body=288 status=ok
// SIG undefined FUN_148374f9a(void)

undefined4 * FUN_148374f9a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146bfb416(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_1483750bc(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_1483751e8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483750bc FUN_1483750bc body=162 status=ok
// SIG undefined FUN_1483750bc(void)

void FUN_1483750bc(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_14837515e(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_14837512e;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_14837512e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 14837515e FUN_14837515e body=138 status=ok
// SIG undefined FUN_14837515e(void)

void FUN_14837515e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1483751e8 FUN_1483751e8 body=446 status=ok
// SIG undefined FUN_1483751e8(void)

void FUN_1483751e8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x14;
        iVar6 = FUN_1448eb174(lVar2,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483753a8 FUN_1483753a8 body=120 status=ok
// SIG undefined FUN_1483753a8(void)

longlong FUN_1483753a8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_148375422();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14837547c(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x20 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 148375422 FUN_148375422 body=90 status=ok
// SIG undefined FUN_148375422(void)

longlong FUN_148375422(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14837547c FUN_14837547c body=277 status=ok
// SIG undefined FUN_14837547c(void)

undefined4 * FUN_14837547c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148375592(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_148375678(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
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
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148375794(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148375592 FUN_148375592 body=229 status=ok
// SIG undefined FUN_148375592(void)

int * FUN_148375592(longlong *param_1,int *param_2)

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



// FUNCTION 148375678 FUN_148375678 body=169 status=ok
// SIG undefined FUN_148375678(void)

undefined8 FUN_148375678(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *param_1;
      do {
        lVar9 = (longlong)iVar8 * 0x20;
        piVar1 = (int *)(lVar2 + lVar9);
        if ((*(int *)(lVar2 + lVar9) == *param_3) && (*(int *)(lVar2 + 4 + lVar9) == param_3[1])) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_148375722(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 148375722 FUN_148375722 body=114 status=ok
// SIG undefined FUN_148375722(void)

void FUN_148375722(longlong *param_1,int param_2)

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



// FUNCTION 148375794 FUN_148375794 body=452 status=ok
// SIG undefined FUN_148375794(void)

void FUN_148375794(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148375959 FUN_148375959 body=47 status=ok
// SIG undefined FUN_148375959(void)

void FUN_148375959(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148375988 FUN_148375988 body=39 status=ok
// SIG undefined FUN_148375988(void)

void FUN_148375988(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x4c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x800000000;
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1483759b0 FUN_1483759b0 body=147 status=ok
// SIG undefined FUN_1483759b0(void)

void FUN_1483759b0(longlong param_1,int param_2)

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



// FUNCTION 148375a44 FUN_148375a44 body=101 status=ok
// SIG undefined FUN_148375a44(void)

void FUN_148375a44(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_148375959(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148375aaa FUN_148375aaa body=62 status=ok
// SIG undefined FUN_148375aaa(void)

void FUN_148375aaa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148375ae8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 148375ae8 FUN_148375ae8 body=112 status=ok
// SIG undefined FUN_148375ae8(void)

ulonglong FUN_148375ae8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148375b22;
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
LAB_148375b22:
  return param_2 & 0xffffffff;
}



// FUNCTION 148375b58 FUN_148375b58 body=110 status=ok
// SIG undefined FUN_148375b58(void)

void FUN_148375b58(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_148375bc8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148375bc8 FUN_148375bc8 body=132 status=ok
// SIG undefined FUN_148375bc8(void)

void FUN_148375bc8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 148375c4c FUN_148375c4c body=144 status=ok
// SIG undefined FUN_148375c4c(void)

void FUN_148375c4c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x3ff0000000000000;
    uVar1 = DAT_14c8464e8;
    param_1[1] = DAT_14c8464e0;
    param_1[2] = uVar1;
    param_1[3] = DAT_14c8464f0;
    param_1[4] = 0x3ff0000000000000;
    param_1[5] = 0x7fefffffffffffff;
    param_1[6] = 0x7fefffffffffffff;
    param_1[7] = 0xffefffffffffffff;
    param_1[8] = 0xffefffffffffffff;
    param_1[9] = 0x7fefffffffffffff;
    param_1[10] = 0x7fefffffffffffff;
    param_1[0xb] = 0x7fefffffffffffff;
    param_1[0xc] = 0xffefffffffffffff;
    param_1[0xd] = 0xffefffffffffffff;
    param_1[0xe] = 0xffefffffffffffff;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0x3ff0000000000000;
    param_1 = param_1 + 0x13;
  }
  return;
}



// FUNCTION 148375cdc FUN_148375cdc body=146 status=ok
// SIG undefined FUN_148375cdc(void)

void FUN_148375cdc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148375d70 FUN_148375d70 body=62 status=ok
// SIG undefined FUN_148375d70(void)

void FUN_148375d70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148375dae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x98,8);
  }
  return;
}



// FUNCTION 148375dae FUN_148375dae body=110 status=ok
// SIG undefined FUN_148375dae(void)

ulonglong FUN_148375dae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x98) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148375de7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x98,8);
      param_2 = param_2 / 0x98;
    }
  }
LAB_148375de7:
  return param_2 & 0xffffffff;
}



// FUNCTION 148375e1c FUN_148375e1c body=1192 status=ok
// SIG undefined FUN_148375e1c(void)

int FUN_148375e1c(int *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  ulonglong extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar27 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46770) {
    FUN_144b3d300(&DAT_14cb46770);
    if (DAT_14cb46770 == -1) {
      DAT_14cb46768 = 1.618033988749895;
      _Init_thread_footer(&DAT_14cb46770);
    }
  }
  dVar4 = atan2(param_2[1],*param_2);
  uVar20 = SUB84(dVar4,0);
  uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if (3.141592653589793 <= dVar4) {
    uVar20 = 0x54442d18;
    uVar21 = 0x400921fb;
  }
  dVar4 = param_2[2];
  dVar5 = log((1.0 - dVar4 * dVar4) * (double)*param_1 * 3.141592653589793 * 2.23606797749979);
  dVar6 = log(DAT_14cb46768 * DAT_14cb46768);
  auVar7._8_4_ = (int)extraout_XMM0_Qb;
  auVar7._0_8_ = dVar5 / dVar6;
  auVar7._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar7 = roundsd(ZEXT816(0),auVar7,9);
  dVar5 = 2.0;
  if (2.0 <= auVar7._0_8_) {
    dVar5 = auVar7._0_8_;
  }
  dVar5 = pow(DAT_14cb46768,dVar5);
  dVar5 = dVar5 / 2.23606797749979;
  auVar10._8_8_ = extraout_XMM0_Qb_00 & 0x8000000000000000 | 0x3fdfffffffffffff;
  auVar10._0_8_ = (double)((ulonglong)dVar5 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar5;
  auVar10 = roundsd(auVar10,auVar10,0xb);
  auVar14._8_8_ = extraout_XMM0_Qb_00 & 0x8000000000000000 | 0x3fdfffffffffffff;
  auVar14._0_8_ =
       (double)((ulonglong)(dVar5 * DAT_14cb46768) & 0x8000000000000000 | 0x3fdfffffffffffff) +
       dVar5 * DAT_14cb46768;
  auVar7 = roundsd(ZEXT816(0),auVar14,0xb);
  dVar13 = (double)*param_1;
  dVar5 = (auVar7._0_8_ * -2.0) / dVar13;
  dVar19 = (auVar10._0_8_ * -2.0) / dVar13;
  dVar16 = DAT_14cb46768 + -1.0;
  auVar27._8_8_ = auVar7._8_8_;
  auVar27._0_8_ = (auVar7._0_8_ + 1.0) * dVar16;
  auVar7 = roundsd(ZEXT816(0),auVar27,9);
  dVar6 = (auVar27._0_8_ - auVar7._0_8_) * 6.283185307179586 + dVar16 * -6.283185307179586;
  auVar11._8_8_ = auVar10._8_8_;
  auVar11._0_8_ = (auVar10._0_8_ + 1.0) * dVar16;
  auVar7 = roundsd(ZEXT816(0),auVar11,9);
  dVar16 = (auVar11._0_8_ - auVar7._0_8_) * 6.283185307179586 + dVar16 * -6.283185307179586;
  dVar17 = 1.0 / (dVar16 * dVar5 - dVar19 * dVar6);
  dVar4 = dVar4 - (-1.0 / dVar13 + 1.0);
  auVar12._0_8_ = dVar16 * dVar17 * dVar4 - dVar17 * dVar19 * (double)CONCAT44(uVar21,uVar20);
  auVar12._8_8_ = auVar11._8_8_;
  auVar18._0_8_ = dVar17 * dVar5 * (double)CONCAT44(uVar21,uVar20) - dVar4 * dVar6 * dVar17;
  auVar18._8_8_ = 0;
  auVar7 = roundsd(ZEXT816(0),auVar18,9);
  auVar27 = roundsd(unaff_XMM15,auVar12,9);
  uVar2 = 0;
  uVar25 = 0xffffffff;
  uVar26 = 0x7fefffff;
  uVar20 = 0;
  uVar21 = 0;
  uVar23 = 0;
  uVar24 = 0;
  do {
    dVar6 = (double)*param_1;
    dVar16 = (1.0 - 1.0 / dVar6) +
             ((double)(uVar2 & 1) + auVar7._0_8_) * dVar19 +
             ((double)(uVar2 >> 1) + auVar27._0_8_) * dVar5;
    dVar4 = 1.0;
    if (dVar16 <= 1.0) {
      dVar4 = dVar16;
    }
    dVar4 = (double)(-(ulonglong)(dVar16 < -1.0) & 0xbff0000000000000 |
                    ~-(ulonglong)(dVar16 < -1.0) & (ulonglong)dVar4);
    auVar15._0_8_ = dVar6 * 0.5 + ((dVar4 + dVar4) - dVar16) * dVar6 * -0.5;
    auVar15._8_8_ = 0;
    auVar10 = roundsd(ZEXT816(0),auVar15,9);
    dVar13 = auVar10._0_8_;
    dVar4 = (DAT_14cb46768 + -1.0) * dVar13;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar4;
    auVar10 = roundsd(ZEXT816(0),auVar1,9);
    dVar4 = (dVar4 - auVar10._0_8_) * 6.283185307179586;
    dVar16 = 1.0 - (dVar13 + dVar13 + 1.0) * (1.0 / dVar6);
    dVar6 = 1.0 - dVar16 * dVar16;
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    dVar17 = sin(dVar4);
    dVar4 = cos(dVar4);
    dVar9 = *param_2 - dVar4 * dVar6;
    dVar4 = param_2[1] - dVar17 * dVar6;
    dVar4 = (param_2[2] - dVar16) * (param_2[2] - dVar16) + dVar9 * dVar9 + dVar4 * dVar4;
    uVar3 = -(ulonglong)(dVar4 < (double)CONCAT44(uVar26,uVar25));
    auVar22._0_8_ = (ulonglong)dVar13 & uVar3;
    auVar22._8_8_ = 0;
    auVar8._0_8_ = ~uVar3 & CONCAT44(uVar21,uVar20);
    auVar8._12_4_ = uVar24;
    auVar8._8_4_ = uVar23;
    auVar8 = auVar8 | auVar22;
    if ((double)CONCAT44(uVar26,uVar25) <= dVar4) {
      dVar4 = (double)CONCAT44(uVar26,uVar25);
    }
    uVar2 = uVar2 + 1;
    uVar25 = SUB84(dVar4,0);
    uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uVar20 = auVar8._0_4_;
    uVar21 = auVar8._4_4_;
    uVar23 = auVar8._8_4_;
    uVar24 = auVar8._12_4_;
  } while (uVar2 != 4);
  return (int)auVar8._0_8_;
}



// FUNCTION 1483762c4 FUN_1483762c4 body=322 status=ok
// SIG undefined FUN_1483762c4(void)

void FUN_1483762c4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 148376408 FUN_148376408 body=305 status=ok
// SIG undefined FUN_148376408(void)

undefined4 * FUN_148376408(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14837653a(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_1448eb174(local_40,8,0);
  cVar3 = FUN_148376620(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148376720(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837653a FUN_14837653a body=230 status=ok
// SIG undefined FUN_14837653a(void)

int * FUN_14837653a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 148376620 FUN_148376620 body=142 status=ok
// SIG undefined FUN_148376620(void)

undefined8 FUN_148376620(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1483766ae(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483766ae FUN_1483766ae body=114 status=ok
// SIG undefined FUN_1483766ae(void)

void FUN_1483766ae(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148376720 FUN_148376720 body=446 status=ok
// SIG undefined FUN_148376720(void)

void FUN_148376720(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x14;
        iVar6 = FUN_1448eb174(lVar2,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483768e0 FUN_1483768e0 body=158 status=ok
// SIG undefined FUN_1483768e0(void)

void FUN_1483768e0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae73140;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_148350654(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14837697e FUN_14837697e body=128 status=ok
// SIG undefined FUN_14837697e(void)

void FUN_14837697e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae731a0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483769fe FUN_1483769fe body=42 status=ok
// SIG undefined FUN_1483769fe(void)

undefined8 * FUN_1483769fe(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[2] = 0xffffffff;
  FUN_148376a28();
  return param_1;
}



// FUNCTION 148376a28 FUN_148376a28 body=485 status=ok
// SIG undefined FUN_148376a28(void)

void FUN_148376a28(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  lVar1 = *param_1;
  uVar6 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if (param_1[1] == 0) {
    uVar2 = 0;
    if ((uVar6 != 0) &&
       (uVar2 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar7 = 1;
      if (1 < (int)uVar6) {
        uVar3 = uVar6;
      }
      do {
        uVar2 = uVar3;
        if (uVar3 == uVar7) break;
        uVar8 = uVar7 >> 9;
        uVar9 = uVar7 & 0x1ff;
        uVar2 = uVar7;
        uVar7 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar8] +
                                           (ulonglong)uVar9 * 2) - 1U));
    }
LAB_148376bb4:
    if (uVar2 != uVar6) {
      iVar5 = FUN_146bc96d4(*param_1,uVar2);
      iVar4 = iVar5 + 1;
      if (iVar5 + 1 <= *(int *)((longlong)param_1 + 0x14)) {
        iVar4 = *(int *)((longlong)param_1 + 0x14);
      }
      *(int *)((longlong)param_1 + 0x14) = iVar4;
      uVar3 = uVar2 + 1;
      if ((int)(uVar2 + 1) < (int)uVar6) {
        uVar3 = uVar6;
      }
      uVar7 = uVar2;
      do {
        uVar2 = uVar3;
        if (uVar3 - 1 == uVar7) break;
        uVar2 = uVar7 + 1;
        uVar7 = uVar2;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
      goto LAB_148376bb4;
    }
  }
  else {
    uVar2 = 0;
    if ((uVar6 != 0) &&
       (uVar2 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar7 = 1;
      if (1 < (int)uVar6) {
        uVar3 = uVar6;
      }
      do {
        uVar2 = uVar3;
        if (uVar3 == uVar7) break;
        uVar8 = uVar7 >> 9;
        uVar9 = uVar7 & 0x1ff;
        uVar2 = uVar7;
        uVar7 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar8] +
                                           (ulonglong)uVar9 * 2) - 1U));
    }
    if (uVar2 != uVar6) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1[1] + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
                        (ulonglong)(uVar2 & 0x1ff) * 4) + 1;
        if (iVar5 <= iVar4) {
          iVar5 = iVar4;
        }
        iVar4 = iVar5;
        *(int *)((longlong)param_1 + 0x14) = iVar4;
        uVar3 = uVar2 + 1;
        if ((int)(uVar2 + 1) < (int)uVar6) {
          uVar3 = uVar6;
        }
        do {
          uVar7 = uVar3;
          if (uVar3 - 1 == uVar2) break;
          uVar2 = uVar2 + 1;
          uVar7 = uVar2;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar2 >> 9) * 8) +
                                             (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
        uVar2 = uVar7;
      } while (uVar2 != uVar6);
    }
  }
  return;
}



// FUNCTION 148376c0e FUN_148376c0e body=109 status=ok
// SIG undefined FUN_148376c0e(void)

longlong * FUN_148376c0e(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[2] = 0xffffffff;
  if (((param_3 & 1) == 0) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))();
    iVar3 = (int)(param_3 >> 0x20);
    if (iVar3 < iVar1) {
      lVar2 = FUN_146c19ec6(*(undefined8 *)(*param_1 + 0x208),param_3 >> 0x20);
      param_1[1] = lVar2;
      *(int *)(param_1 + 2) = iVar3;
    }
  }
  FUN_148376a28(param_1);
  return param_1;
}



// FUNCTION 148376c7c FUN_148376c7c body=130 status=ok
// SIG undefined FUN_148376c7c(void)

longlong * FUN_148376c7c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1[2] = 0xffffffff;
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = *(longlong **)(param_2 + 0x208);
  iVar5 = -1;
  iVar6 = iVar5;
  if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1), 0 < iVar2)) {
    iVar4 = 0;
    do {
      lVar3 = FUN_146c19ec6(plVar1,iVar4);
      iVar6 = iVar4;
      if (lVar3 == param_3) break;
      iVar4 = iVar4 + 1;
      iVar6 = iVar5;
    } while (iVar2 != iVar4);
  }
  *(int *)(param_1 + 2) = iVar6;
  FUN_148376a28(param_1);
  return param_1;
}



// FUNCTION 148376cfe FUN_148376cfe body=152 status=ok
// SIG undefined FUN_148376cfe(void)

longlong * FUN_148376cfe(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = param_2;
  lVar3 = FUN_148376d96(param_2,param_3);
  param_1[1] = lVar3;
  plVar1 = *(longlong **)(param_2 + 0x208);
  iVar6 = -1;
  iVar7 = iVar6;
  if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1), 0 < iVar2)) {
    iVar5 = 0;
    do {
      lVar4 = FUN_146c19ec6(plVar1,iVar5);
      iVar7 = iVar5;
      if (lVar4 == lVar3) break;
      iVar5 = iVar5 + 1;
      iVar7 = iVar6;
    } while (iVar2 != iVar5);
  }
  *(int *)(param_1 + 2) = iVar7;
  FUN_148376a28(param_1);
  return param_1;
}



// FUNCTION 148376d96 FUN_148376d96 body=94 status=ok
// SIG undefined FUN_148376d96(void)

undefined8 FUN_148376d96(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        lVar3 = FUN_146c19ec6(plVar1,iVar5);
        if (*(longlong *)(lVar3 + 8) == param_2) {
          uVar4 = FUN_146c19ec6(plVar1,iVar5);
          return uVar4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return 0;
}



// FUNCTION 148376df4 FUN_148376df4 body=37 status=ok
// SIG undefined FUN_148376df4(void)

void FUN_148376df4(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = param_2;
  return;
}



// FUNCTION 148376e1a FUN_148376e1a body=379 status=ok
// SIG undefined FUN_148376e1a(void)

ulonglong FUN_148376e1a(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = 0;
  if (-1 < (int)param_2) {
    lVar9 = *(longlong *)(*param_1 + 0x208);
    if ((int)param_2 < *(int *)(lVar9 + 0x28)) {
      local_90 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + (ulonglong)param_2 * 8);
      if (local_90 == 0) {
        uVar8 = 0;
      }
      else {
        plVar7 = &local_a8;
        local_a0 = 0;
        uStack_98 = 0;
        local_78 = 0;
        local_68 = &PTR_LAB_14ae75300;
        local_60 = &local_90;
        local_88 = &LAB_143b1a23e;
        local_a8 = *param_1;
        FUN_142984024(plVar7);
        lVar9 = (longlong)(int)uStack_98;
        if (0 < lVar9) {
          plVar7 = param_1 + 3;
          lVar6 = 0;
          do {
            puVar3 = *(undefined8 **)(local_a0 + lVar6 * 8);
            iVar2 = (int)param_1[4];
            *(uint *)(param_1 + 4) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
              FUN_140bfc2d4(plVar7,iVar2);
            }
            lVar4 = *plVar7;
            lVar5 = (longlong)iVar2 * 0x10;
            puVar1 = (undefined8 *)(lVar4 + lVar5);
            *(undefined8 *)(lVar4 + lVar5) = 0;
            iVar2 = *(int *)(puVar3 + 1);
            _Src = (void *)*puVar3;
            *(int *)(lVar4 + 8 + lVar5) = iVar2;
            if ((longlong)iVar2 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_144a06ca8(puVar1,iVar2,0);
              memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
            }
            lVar6 = lVar6 + 1;
          } while (lVar9 != lVar6);
        }
        if ((char)param_1[2] != '\0') {
          FUN_148376f96(param_1);
        }
        uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),0 < (int)param_1[4]);
        FUN_146be9400(&local_a0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148376f96 FUN_148376f96 body=177 status=ok
// SIG undefined FUN_148376f96(void)

void FUN_148376f96(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  FUN_14582eef4(*param_1,0);
  lVar4 = param_1[4];
  if (0 < (longlong)(int)lVar4) {
    lVar5 = 0;
    do {
      lVar2 = param_1[3];
      lVar8 = lVar5 * 0x10;
      lVar7 = (longlong)*(int *)(lVar2 + 8 + lVar8);
      lVar5 = lVar5 + 1;
      if (0 < lVar7) {
        lVar9 = 0;
        do {
          lVar3 = *param_1;
          if (*(char *)(lVar3 + 0x1a8) == '\x01') {
            uVar1 = *(uint *)(*(longlong *)(lVar2 + lVar8) + lVar9 * 4);
            iVar6 = *(int *)((longlong)param_1 + 0x14);
            *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 4) = iVar6 + (int)lVar5;
            iVar10 = iVar6 + (int)lVar5 + 1;
            iVar6 = *(int *)(lVar3 + 0x1b0);
            if (*(int *)(lVar3 + 0x1b0) < iVar10) {
              iVar6 = iVar10;
            }
            *(int *)(lVar3 + 0x1b0) = iVar6;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
      }
    } while (lVar5 != (int)lVar4);
  }
  return;
}



// FUNCTION 148377048 FUN_148377048 body=361 status=ok
// SIG undefined FUN_148377048(void)

ulonglong FUN_148377048(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)(*param_1 + 0x208);
  if ((*(int *)(lVar8 + 0x38) < 1) || (lVar8 = **(longlong **)(lVar8 + 0x30), lVar8 == 0)) {
    uVar7 = 0;
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_78 = 0;
    local_68 = &PTR_LAB_14ae75320;
    local_88 = &LAB_143b1a296;
    local_a0 = *param_1;
    local_60 = lVar8;
    FUN_142984024(&local_a0);
    lVar8 = (longlong)(int)uStack_90;
    if (0 < lVar8) {
      lVar6 = 0;
      do {
        puVar3 = *(undefined8 **)(local_98 + lVar6 * 8);
        iVar2 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
          FUN_140bfc2d4(param_1 + 3,iVar2);
        }
        lVar4 = param_1[3];
        lVar5 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar4 + lVar5);
        *(undefined8 *)(lVar4 + lVar5) = 0;
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(lVar4 + 8 + lVar5) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
        }
        lVar6 = lVar6 + 1;
      } while (lVar8 != lVar6);
    }
    if ((char)param_1[2] != '\0') {
      FUN_148376f96(param_1);
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < (int)param_1[4]);
    FUN_146be9400(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1483771b2 FUN_1483771b2 body=328 status=ok
// SIG undefined FUN_1483771b2(void)

ulonglong FUN_1483771b2(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *_Src;
  longlong unaff_RBX;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *param_1;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14ae75340;
  local_88 = FUN_143b1a2ec;
  local_60 = param_1;
  FUN_142984024(&local_a0);
  lVar6 = (longlong)(int)uStack_90;
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(local_98 + lVar5 * 8);
      iVar2 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 4) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
        FUN_140bfc2d4(param_1 + 3,iVar2);
      }
      lVar4 = param_1[3];
      unaff_RBX = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar4 + unaff_RBX);
      *(undefined8 *)(lVar4 + unaff_RBX) = 0;
      iVar2 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(lVar4 + 8 + unaff_RBX) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
      }
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_148376f96(param_1);
  }
  iVar2 = *(int *)(param_1 + 4);
  FUN_146be9400(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0 < iVar2) & 0xffffffff;
}



// FUNCTION 1483772fc FUN_1483772fc body=666 status=ok
// SIG undefined FUN_1483772fc(void)

void FUN_1483772fc(longlong *param_1,char param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != '\0') {
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x208);
    if (((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x28))) &&
       (lVar2 = **(longlong **)(lVar2 + 0x20), lVar2 != 0)) {
      uVar7 = *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4);
      uVar8 = 0;
      if ((uVar7 != 0) &&
         (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) {
        uVar9 = 1;
        uVar4 = 1;
        if (1 < (int)uVar7) {
          uVar9 = uVar7;
        }
        do {
          uVar8 = uVar9;
          if (uVar9 == uVar4) break;
          uVar5 = uVar4 >> 9;
          uVar6 = uVar4 & 0x1ff;
          uVar8 = uVar4;
          uVar4 = uVar4 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x1d8))[uVar5] +
                                             (ulonglong)uVar6 * 2) - 1U));
      }
      if (uVar8 != uVar7) {
        do {
          local_4c = uVar8;
          cVar3 = FUN_146c1a770(lVar2,uVar8,0);
          if (cVar3 != '\0') {
            FUN_1447cbafe(param_4,local_50,&local_4c,0);
          }
          uVar9 = uVar8 + 1;
          if ((int)(uVar8 + 1) < (int)uVar7) {
            uVar9 = uVar7;
          }
          do {
            uVar4 = uVar9;
            if (uVar9 - 1 == uVar8) break;
            uVar8 = uVar8 + 1;
            uVar4 = uVar8;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar1 + 0x1d8) +
                                                 (ulonglong)(uVar8 >> 9) * 8) +
                                               (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
          uVar8 = uVar4;
        } while (uVar8 != uVar7);
      }
    }
  }
  if (param_3 != '\0') {
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x208);
    if (((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x38))) &&
       (lVar2 = **(longlong **)(lVar2 + 0x30), lVar2 != 0)) {
      uVar7 = *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4);
      uVar8 = 0;
      if ((uVar7 != 0) &&
         (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) {
        uVar9 = 1;
        uVar4 = 1;
        if (1 < (int)uVar7) {
          uVar9 = uVar7;
        }
        do {
          uVar8 = uVar9;
          if (uVar9 == uVar4) break;
          uVar5 = uVar4 >> 9;
          uVar6 = uVar4 & 0x1ff;
          uVar8 = uVar4;
          uVar4 = uVar4 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x1d8))[uVar5] +
                                             (ulonglong)uVar6 * 2) - 1U));
      }
      if (uVar8 != uVar7) {
        do {
          local_4c = uVar8;
          cVar3 = FUN_146c1aaf4(lVar2,uVar8,0);
          if (cVar3 != '\0') {
            FUN_1447cbafe(param_4,local_50,&local_4c,0);
          }
          uVar9 = uVar8 + 1;
          if ((int)(uVar8 + 1) < (int)uVar7) {
            uVar9 = uVar7;
          }
          do {
            uVar4 = uVar9;
            if (uVar9 - 1 == uVar8) break;
            uVar8 = uVar8 + 1;
            uVar4 = uVar8;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar1 + 0x1d8) +
                                                 (ulonglong)(uVar8 >> 9) * 8) +
                                               (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
          uVar8 = uVar4;
        } while (uVar8 != uVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148377598 FUN_148377598 body=8363 status=ok
// SIG undefined FUN_148377598(void)

/* WARNING: Removing unreachable block (ram,0x0001483794dc) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_148377598(ulonglong *param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                  double param_5,int param_6)

{
  undefined1 (*pauVar1) [12];
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  ulonglong *puVar14;
  undefined1 (*pauVar15) [16];
  char cVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  undefined1 (*pauVar27) [16];
  uint uVar28;
  uint *puVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int *piVar32;
  int *piVar33;
  uint *puVar34;
  undefined1 (*pauVar35) [16];
  undefined8 *puVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [16];
  int iVar39;
  uint uVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  int iVar43;
  longlong lVar44;
  undefined1 (*pauVar45) [16];
  int iVar46;
  undefined1 (*pauVar47) [16];
  longlong lVar48;
  ulonglong *puVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  longlong lVar53;
  uint *puVar54;
  int *piVar55;
  bool bVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined4 uVar67;
  undefined4 uVar68;
  undefined1 auStack_5e8 [32];
  undefined1 *local_5c8;
  uint local_5bc;
  ulonglong *local_5b8;
  ulonglong local_5b0;
  uint local_5a4;
  ulonglong local_5a0;
  int *local_598;
  ulonglong uStack_590;
  longlong local_588;
  ulonglong uStack_580;
  ulonglong local_570;
  double local_568;
  longlong *local_560;
  int local_550;
  longlong local_548;
  int local_540;
  longlong local_538;
  undefined8 uStack_530;
  longlong local_528;
  ulonglong uStack_520;
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  longlong local_4f8;
  longlong lStack_4f0;
  undefined8 local_4e8;
  uint *local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  uint local_498 [4];
  longlong *local_488;
  longlong local_478 [6];
  longlong local_448;
  undefined8 uStack_440;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_41c;
  int local_414;
  undefined1 local_410 [8];
  undefined1 *local_408;
  int local_400;
  undefined1 local_3f8 [8];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  int local_3a8 [174];
  ulonglong local_f0;
  
  uVar67 = (undefined4)param_4;
  uVar68 = (undefined4)(param_4 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  uVar50 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_508 = (undefined1  [16])0x0;
  FUN_14051b394(local_508,uVar50,1);
  local_518 = (undefined1  [16])0x0;
  FUN_1400bd09c(local_518,uVar50,1);
  uVar31 = *param_1;
  uVar28 = *(int *)(uVar31 + 0x140) * 0x200 + *(int *)(uVar31 + 0x144);
  uVar52 = 0;
  if ((uVar28 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(uVar31 + 0x148) - 1U))) {
    uVar19 = 1;
    uVar24 = 1;
    if (1 < (int)uVar28) {
      uVar24 = uVar28;
    }
    do {
      uVar40 = uVar19;
      uVar52 = uVar24;
      if (uVar24 == uVar40) break;
      uVar19 = uVar40 + 1;
      uVar52 = uVar40;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(uVar31 + 0x148))[uVar40 >> 9] +
                                         (ulonglong)(uVar40 & 0x1ff) * 2) - 1U));
  }
  local_5a4 = uVar50;
  if (uVar52 != uVar28) {
    do {
      local_5c8 = local_3f8;
      FUN_146c1477c(*param_1,uVar52,(longlong)(int)uVar52 * 0x18 + local_508._0_8_,
                    (longlong)(int)uVar52 * 8 + local_518._0_8_);
      uVar50 = uVar52 + 1;
      if ((int)(uVar52 + 1) < (int)uVar28) {
        uVar50 = uVar28;
      }
      do {
        uVar19 = uVar50;
        if (uVar50 - 1 == uVar52) break;
        uVar52 = uVar52 + 1;
        uVar19 = uVar52;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(uVar31 + 0x148) +
                                             (ulonglong)(uVar52 >> 9) * 8) +
                                           (ulonglong)(uVar52 & 0x1ff) * 2) - 1U));
      uVar52 = uVar19;
    } while (uVar52 != uVar28);
  }
  local_428 = 0;
  local_420 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_41c = 0xffffffff00000080;
  local_414 = 0;
  local_408 = (undefined1 *)0x0;
  local_400 = 0;
  if (((char)param_2 != '\0') || ((char)param_3 != '\0')) {
    FUN_1483772fc(param_1,param_2,param_3,&local_448);
  }
  local_528 = 0;
  uStack_520 = 0;
  if ((int)local_5a4 < 1) {
    if ((int)local_5a4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_5a4);
    }
  }
  else {
    uStack_520 = (ulonglong)local_5a4;
    FUN_143b1a3f0(&local_528);
    FUN_143b1a393(local_528);
  }
  uVar31 = *param_1;
  uVar28 = *(int *)(uVar31 + 0x140) * 0x200 + *(int *)(uVar31 + 0x144);
  uVar52 = 0;
  if ((uVar28 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(uVar31 + 0x148) - 1U))) {
    uVar50 = 1;
    uVar19 = 1;
    if (1 < (int)uVar28) {
      uVar50 = uVar28;
    }
    do {
      uVar52 = uVar50;
      if (uVar50 == uVar19) break;
      uVar24 = uVar19 >> 9;
      uVar40 = uVar19 & 0x1ff;
      uVar52 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(uVar31 + 0x148))[uVar24] +
                                         (ulonglong)uVar40 * 2) - 1U));
  }
  local_5b8 = param_1;
  if (uVar52 != uVar28) {
    auVar66._8_4_ = 0xffffffff;
    auVar66._0_8_ = 0xffffffffffffffff;
    auVar66._12_4_ = 0xffffffff;
    local_5bc = uVar28;
    local_5b0 = uVar31;
    do {
      lVar48 = *(longlong *)(*(longlong *)(*local_5b8 + 0x180) + (ulonglong)(uVar52 >> 9) * 8);
      local_498[2] = *(int *)(lVar48 + 8 + (ulonglong)(uVar52 & 0x1ff) * 0xc);
      uVar3 = *(undefined8 *)(lVar48 + (ulonglong)(uVar52 & 0x1ff) * 0xc);
      local_498[0] = (uint)uVar3;
      local_498[1] = (uint)((ulonglong)uVar3 >> 0x20);
      FUN_146c03f0e(*local_5b8,&local_570,uVar52);
      local_5a0 = (ulonglong)uVar52;
      lVar48 = 0;
      do {
        uStack_3f0._0_4_ = 0xffffffff;
        local_3f8 = (undefined1  [8])0xffffffffffffffff;
        uStack_3e8 = DAT_14c8463f0;
        uStack_3e0 = DAT_14c8463f8;
        local_3a8[0] = -1;
        local_3b8 = auVar66;
        local_3c8 = auVar66;
        auStack_3d8 = auVar66;
        uVar28 = *(uint *)((longlong)&local_570 + lVar48 * 4);
        if (-1 < (longlong)(int)uVar28) {
          uVar50 = local_498[lVar48];
          if ((int)uStack_440 != local_414) {
            puVar17 = local_408;
            if (local_408 == (undefined1 *)0x0) {
              puVar17 = local_410;
            }
            for (iVar43 = *(int *)(puVar17 + (ulonglong)(local_400 - 1U & uVar50) * 4); iVar43 != -1
                ; iVar43 = *(int *)(local_448 + (longlong)iVar43 * 0xc + 4)) {
              if (*(uint *)(local_448 + (longlong)iVar43 * 0xc) == uVar50) goto LAB_148377a69;
            }
          }
          uStack_3f0._0_4_ = uVar50;
          local_3f8 = (undefined1  [8])(((longlong)(int)uVar28 << 0x20) + local_5a0);
          uVar31 = *local_5b8;
          uVar3 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(uVar31 + 0x1c0) + (ulonglong)(uVar50 >> 9) * 8) +
                   (ulonglong)((uVar50 & 0x1ff) << 4));
          FUN_146c12888(uVar31,&local_4b8);
          auStack_3d8._4_4_ = (undefined4)local_4b8;
          auStack_3d8._0_4_ = (int)uVar3;
          auStack_3d8._8_4_ = (int)((ulonglong)uVar3 >> 0x20);
          auStack_3d8._12_4_ = local_4b8._4_4_;
          uStack_3e8 = FUN_146c14650(uVar31,uVar52);
          uStack_3e0 = FUN_146c14650(uVar31,uVar28);
          lVar53 = -4;
          do {
            uVar50 = FUN_146c061e0(uVar31,*(undefined4 *)(local_3c8 + lVar53 * 4),
                                   *(undefined4 *)
                                    (auStack_3d8 + (ulonglong)((int)lVar53 + 5U & 3) * 4));
            *(uint *)(local_3b8 + lVar53 * 4) = uVar50;
            uVar31 = *local_5b8;
            uVar25 = *(ulonglong *)
                      (*(longlong *)(*(longlong *)(uVar31 + 0x1c0) + (ulonglong)(uVar50 >> 9) * 8) +
                       8 + (ulonglong)((uVar50 & 0x1ff) << 4));
            if (uVar25 >> 0x20 != 0xffffffff) {
              uVar37 = uVar25;
              if (uVar28 == (uint)uVar25) {
                uVar37 = uVar25 >> 0x20;
              }
              iVar43 = (int)uVar37;
              if (uVar52 == (uint)uVar25) {
                iVar43 = (int)(uVar25 >> 0x20);
              }
              local_3a8[lVar53] = iVar43;
            }
            lVar53 = lVar53 + 1;
          } while (lVar53 != 0);
        }
LAB_148377a69:
        puVar30 = (undefined8 *)local_3f8;
        puVar36 = (undefined8 *)(lVar48 * 0x58 + (longlong)(int)uVar52 * 0x108 + local_528);
        for (lVar53 = 0xb; lVar53 != 0; lVar53 = lVar53 + -1) {
          *puVar36 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar36 = puVar36 + 1;
        }
        lVar48 = lVar48 + 1;
      } while (lVar48 != 3);
      uVar28 = uVar52 + 1;
      if ((int)(uVar52 + 1) < (int)local_5bc) {
        uVar28 = local_5bc;
      }
      do {
        uVar50 = uVar28;
        if (uVar28 - 1 == uVar52) break;
        uVar52 = uVar52 + 1;
        uVar50 = uVar52;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_5b0 + 0x148) +
                                             (ulonglong)(uVar52 >> 9) * 8) +
                                           (ulonglong)(uVar52 & 0x1ff) * 2) - 1U));
      uVar52 = uVar50;
    } while (uVar52 != local_5bc);
    uVar31 = *local_5b8;
    uVar28 = *(int *)(uVar31 + 0x140) * 0x200 + *(int *)(uVar31 + 0x144);
  }
  local_538 = 0;
  uStack_530 = 0;
  uVar52 = 0;
  if ((uVar28 != 0) &&
     (uVar52 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(uVar31 + 0x148) - 1U))) {
    uVar50 = 1;
    uVar19 = 1;
    if (1 < (int)uVar28) {
      uVar50 = uVar28;
    }
    do {
      uVar52 = uVar50;
      if (uVar50 == uVar19) break;
      uVar24 = uVar19 >> 9;
      uVar40 = uVar19 & 0x1ff;
      uVar52 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(uVar31 + 0x148))[uVar24] +
                                         (ulonglong)uVar40 * 2) - 1U));
  }
  puVar49 = local_5b8;
  if (uVar52 != uVar28) {
    local_5bc = uVar28;
    local_5b0 = uVar31;
    local_5a0 = param_4;
    do {
      lVar53 = (longlong)(int)uVar52 * 0x108 + 0x20;
      lVar48 = 0;
      do {
        lVar21 = local_528;
        lVar44 = local_528 + (longlong)(int)uVar52 * 0x108;
        lVar20 = (longlong)*(int *)(lVar48 * 0x58 + lVar44);
        if (-1 < lVar20) {
          piVar55 = (int *)(lVar44 + lVar48 * 0x58);
          lVar44 = (longlong)piVar55[1];
          if (-1 < lVar44) {
            dVar58 = *(double *)(local_508._0_8_ + 0x10 + lVar20 * 0x18) *
                     *(double *)(local_508._0_8_ + 0x10 + lVar44 * 0x18) +
                     *(double *)(local_508._0_8_ + lVar20 * 0x18) *
                     *(double *)(local_508._0_8_ + lVar44 * 0x18) +
                     *(double *)(local_508._0_8_ + 8 + lVar20 * 0x18) *
                     *(double *)(local_508._0_8_ + 8 + lVar44 * 0x18);
            dVar65 = 1.0;
            if (dVar58 <= 1.0) {
              dVar65 = dVar58;
            }
            dVar59 = acos((double)(-(ulonglong)(dVar58 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar58 < -1.0) & (ulonglong)dVar65));
            dVar65 = 1.0;
            if (0.001 < dVar58) {
              lVar44 = (longlong)*piVar55;
              lVar20 = (longlong)piVar55[1];
              dVar58 = *(double *)(local_508._0_8_ + 0x10 + lVar44 * 0x18) +
                       *(double *)(local_508._0_8_ + 0x10 + lVar20 * 0x18);
              local_568 = *(double *)(local_508._0_8_ + 8 + lVar44 * 0x18) +
                          *(double *)(local_508._0_8_ + 8 + lVar20 * 0x18);
              dVar60 = *(double *)(local_508._0_8_ + lVar44 * 0x18) +
                       *(double *)(local_508._0_8_ + lVar20 * 0x18);
              dVar62 = SQRT(dVar58 * dVar58 + dVar60 * dVar60 + local_568 * local_568);
              dVar65 = 0.0;
              dVar64 = 1.0 / dVar62;
              if (0.0 < dVar62) {
                local_560 = (longlong *)(dVar58 * dVar64);
                local_568 = local_568 * dVar64;
              }
              else {
                local_568 = 0.0;
                local_560 = (longlong *)0x0;
              }
              local_570 = -(ulonglong)(0.0 < dVar62) & (ulonglong)(dVar60 * dVar64);
              uVar31 = 0;
              do {
                uVar28 = *(uint *)(lVar21 + lVar53 + uVar31 * 4);
                lVar44 = *(longlong *)
                          (*(longlong *)(*local_5b8 + 0x10) + (ulonglong)(uVar28 >> 9) * 8);
                uVar25 = (ulonglong)uVar28 & 0x1ff;
                local_4a8 = *(undefined8 *)(lVar44 + 0x10 + uVar25 * 0x18);
                puVar30 = (undefined8 *)(lVar44 + uVar25 * 0x18);
                local_4b8 = (uint *)*puVar30;
                uStack_4b0 = puVar30[1];
                uVar37 = uVar31 + 1;
                lVar44 = *(longlong *)(*local_5b8 + 0x10);
                lVar20 = *(longlong *)
                          (lVar44 + (ulonglong)
                                    ((uint)piVar55[(ulonglong)((uint)uVar37 & 3) + 8] >> 9) * 8);
                uVar25 = (ulonglong)(uint)piVar55[(ulonglong)((uint)uVar37 & 3) + 8] & 0x1ff;
                local_4c8 = *(undefined8 *)(lVar20 + 0x10 + uVar25 * 0x18);
                pauVar41 = (undefined1 (*) [16])(lVar20 + uVar25 * 0x18);
                local_4d8 = *(uint **)*pauVar41;
                uStack_4d0 = *(ulonglong *)(*pauVar41 + 8);
                _local_3f8 = *pauVar41;
                lVar44 = *(longlong *)
                          (lVar44 + (ulonglong)((uint)piVar55[(uVar31 ^ 2) + 8] >> 9) * 8);
                uVar31 = (ulonglong)(uint)piVar55[(uVar31 ^ 2) + 8] & 0x1ff;
                local_4e8 = *(undefined8 *)(lVar44 + 0x10 + uVar31 * 0x18);
                plVar18 = (longlong *)(lVar44 + uVar31 * 0x18);
                local_4f8 = *plVar18;
                lStack_4f0 = plVar18[1];
                uStack_3e0 = 0;
                auStack_3d8 = ZEXT816(0);
                local_3c8._0_8_ = 0x3ff0000000000000;
                local_488 = DAT_14c8463c8;
                local_498[0] = (uint)DAT_14c8463b8;
                local_498[1] = (uint)((ulonglong)DAT_14c8463b8 >> 0x20);
                local_498[2] = (uint)DAT_14c8463c0;
                local_498[3] = (uint)((ulonglong)DAT_14c8463c0 >> 0x20);
                uStack_3e8 = local_4c8;
                FUN_146bfb7f2(&uStack_3e0,local_498,&local_570);
                FUN_146bca7ae(local_3f8,local_498,&local_4b8,2);
                dVar62 = (double)CONCAT44(local_498[1],local_498[0]);
                dVar60 = (double)CONCAT44(local_498[3],local_498[2]);
                dVar58 = SQRT(dVar62 * dVar62 + dVar60 * dVar60);
                if (0.0 < dVar58) {
                  dVar60 = dVar60 * (1.0 / dVar58);
                }
                else {
                  dVar60 = 0.0;
                }
                FUN_146bca7ae(local_3f8,local_498,&local_4f8,2);
                dVar64 = (double)CONCAT44(local_498[1],local_498[0]);
                dVar63 = (double)CONCAT44(local_498[3],local_498[2]);
                dVar61 = SQRT(dVar64 * dVar64 + dVar63 * dVar63);
                if (0.0 < dVar61) {
                  dVar63 = dVar63 * (1.0 / dVar61);
                }
                else {
                  dVar63 = 0.0;
                }
                dVar60 = (double)(-(ulonglong)(0.0 < dVar61) & (ulonglong)(dVar64 * (1.0 / dVar61)))
                         * (double)(-(ulonglong)(0.0 < dVar58) &
                                   (ulonglong)(dVar62 * (1.0 / dVar58))) + dVar60 * dVar63;
                dVar58 = 1.0;
                if (dVar60 <= 1.0) {
                  dVar58 = dVar60;
                }
                dVar58 = acos((double)(-(ulonglong)(dVar60 < -1.0) & 0xbff0000000000000 |
                                      ~-(ulonglong)(dVar60 < -1.0) & (ulonglong)dVar58));
                dVar58 = dVar58 * 57.29577951308232;
                uVar31 = -(ulonglong)(-dVar58 <= dVar58);
                dVar58 = ((double)(~uVar31 & (ulonglong)-dVar58 | (ulonglong)dVar58 & uVar31) +
                         -90.0) / 90.0;
                uVar31 = -(ulonglong)(-dVar58 <= dVar58);
                dVar65 = dVar65 + (double)(~uVar31 & (ulonglong)-dVar58 | (ulonglong)dVar58 & uVar31
                                          );
                uVar31 = uVar37;
              } while (uVar37 != 4);
              dVar65 = dVar65 * 0.25;
            }
            dVar59 = dVar59 * 57.29577951308232;
            uVar31 = -(ulonglong)(-dVar59 <= dVar59);
            dVar62 = (double)(uVar31 & (ulonglong)dVar59 | ~uVar31 & (ulonglong)-dVar59) / 180.0;
            dVar58 = *(double *)(piVar55 + 4);
            dVar59 = *(double *)(piVar55 + 6);
            dVar60 = (double)(~-(ulonglong)(dVar58 <= dVar59) & (ulonglong)dVar59 |
                             -(ulonglong)(dVar58 <= dVar59) & (ulonglong)dVar58);
            if (dVar60 <= 1e-07) {
              dVar60 = 1e-07;
            }
            dVar60 = (double)(~-(ulonglong)(dVar59 <= dVar58) & (ulonglong)dVar59 |
                             (ulonglong)dVar58 & -(ulonglong)(dVar59 <= dVar58)) / dVar60;
            dVar58 = 5.0;
            if (dVar60 <= 5.0) {
              dVar58 = dVar60;
            }
            lVar44 = (longlong)(int)uStack_530;
            uVar28 = (int)uStack_530 + 1;
            uStack_530 = CONCAT44(uStack_530._4_4_,uVar28);
            if (uStack_530._4_4_ < uVar28) {
              FUN_143b1a558(&local_538);
            }
            uVar31 = -(ulonglong)(-dVar62 <= dVar62);
            dVar59 = (double)(~uVar31 & (ulonglong)-dVar62 | (ulonglong)dVar62 & uVar31);
            dVar58 = (double)(~-(ulonglong)(dVar60 < 1.0) & (ulonglong)((dVar58 + -1.0) * 0.25));
            *(uint *)(local_538 + lVar44 * 0x18) = uVar52;
            *(int *)(local_538 + 4 + lVar44 * 0x18) = (int)lVar48;
            *(double *)(local_538 + 8 + lVar44 * 0x18) =
                 SQRT(dVar58 * dVar58 + dVar65 * dVar65 + dVar59 * dVar59 + 0.0);
            *(undefined4 *)(local_538 + 0x10 + lVar44 * 0x18) = 0;
          }
        }
        lVar44 = local_538;
        puVar49 = local_5b8;
        lVar48 = lVar48 + 1;
        lVar53 = lVar53 + 0x58;
      } while (lVar48 != 3);
      uVar28 = uVar52 + 1;
      if ((int)(uVar52 + 1) < (int)local_5bc) {
        uVar28 = local_5bc;
      }
      do {
        uVar50 = uVar28;
        if (uVar28 - 1 == uVar52) break;
        uVar52 = uVar52 + 1;
        uVar50 = uVar52;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_5b0 + 0x148) +
                                             (ulonglong)(uVar52 >> 9) * 8) +
                                           (ulonglong)(uVar52 & 0x1ff) * 2) - 1U));
      uVar52 = uVar50;
    } while (uVar52 != local_5bc);
    iVar43 = (int)uStack_530;
    lVar48 = (longlong)(int)uStack_530;
    uVar67 = (undefined4)local_5a0;
    uVar68 = (undefined4)(local_5a0 >> 0x20);
    if (1 < lVar48) {
      memset(&uStack_3e8,0,0x2f0);
      uStack_3f0 = lVar44 + lVar48 * 0x18 + -0x18;
      local_3f8 = (undefined1  [8])lVar44;
      fVar57 = logf((float)iVar43);
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,(int)(longlong)(fVar57 + fVar57));
      plVar18 = (longlong *)local_3f8;
      do {
        pauVar23 = (undefined1 (*) [16])*plVar18;
        pauVar41 = (undefined1 (*) [16])plVar18[1];
        iVar43 = (int)plVar18[2];
        iVar51 = (int)((ulonglong)((longlong)pauVar41 - (longlong)pauVar23) >> 3) * -0x55555555;
        uVar52 = iVar51 + 1;
        pauVar35 = pauVar23;
        pauVar47 = pauVar41;
        if (iVar43 != 0) {
LAB_148378f16:
          if (8 < (int)uVar52) {
            uVar31 = (ulonglong)(uVar52 >> 1);
            uVar3 = *(undefined8 *)((longlong)pauVar23 + uVar31 * 0x18 + 0x10);
            puVar30 = (undefined8 *)((longlong)pauVar23 + uVar31 * 0x18);
            uVar4 = *puVar30;
            uVar5 = puVar30[1];
            *(undefined8 *)((longlong)pauVar23 + uVar31 * 0x18 + 0x10) = *(undefined8 *)pauVar23[1];
            uVar6 = *(undefined8 *)(*pauVar23 + 8);
            puVar30 = (undefined8 *)((longlong)pauVar23 + uVar31 * 0x18);
            *puVar30 = *(undefined8 *)*pauVar23;
            puVar30[1] = uVar6;
            *(undefined8 *)pauVar23[1] = uVar3;
            *(undefined8 *)*pauVar23 = uVar4;
            *(undefined8 *)(*pauVar23 + 8) = uVar5;
            pauVar45 = (undefined1 (*) [16])(pauVar41[1] + 8);
            pauVar22 = pauVar23;
            do {
              pauVar15 = (undefined1 (*) [16])(pauVar22[1] + 8);
              pauVar42 = (undefined1 (*) [16])(pauVar22[1] + 8);
              do {
                pauVar22 = pauVar42;
                pauVar38 = pauVar15;
                if (pauVar41 < pauVar22) break;
                pauVar15 = (undefined1 (*) [16])(pauVar38[1] + 8);
                pauVar42 = (undefined1 (*) [16])(pauVar22[1] + 8);
              } while (*(double *)(*pauVar22 + 8) < *(double *)(*pauVar23 + 8) ||
                       *(double *)(*pauVar22 + 8) == *(double *)(*pauVar23 + 8));
              pauVar15 = pauVar45 + -3;
              do {
                pauVar42 = pauVar45;
                pauVar27 = pauVar15;
                pauVar45 = (undefined1 (*) [16])(pauVar42[-2] + 8);
                if (pauVar45 <= pauVar23) break;
                pauVar15 = (undefined1 (*) [16])(pauVar27[-2] + 8);
              } while (*(double *)(*pauVar23 + 8) < *(double *)pauVar42[-1] ||
                       *(double *)(*pauVar23 + 8) == *(double *)pauVar42[-1]);
              if (pauVar45 < pauVar22) goto LAB_14837900c;
              uVar3 = *(undefined8 *)pauVar22[1];
              uVar4 = *(undefined8 *)*pauVar22;
              uVar5 = *(undefined8 *)(*pauVar22 + 8);
              *(undefined8 *)pauVar22[1] = *(undefined8 *)(pauVar42[-1] + 8);
              uVar6 = *(undefined8 *)pauVar42[-1];
              *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar45;
              *(undefined8 *)(*pauVar22 + 8) = uVar6;
              *(undefined8 *)(pauVar42[-1] + 8) = uVar3;
              *(undefined8 *)*pauVar45 = uVar4;
              *(undefined8 *)pauVar42[-1] = uVar5;
            } while( true );
          }
          for (; pauVar35 = pauVar23, pauVar47 = pauVar23, pauVar23 < pauVar41;
              pauVar41 = (undefined1 (*) [16])(pauVar41[-2] + 8)) {
            while (pauVar45 = pauVar35, pauVar35 = (undefined1 (*) [16])(pauVar47[1] + 8),
                  pauVar35 <= pauVar41) {
              pauVar22 = pauVar47 + 2;
              pauVar47 = pauVar35;
              if (*(double *)*pauVar22 < *(double *)(*pauVar45 + 8) ||
                  *(double *)*pauVar22 == *(double *)(*pauVar45 + 8)) {
                pauVar35 = pauVar45;
              }
            }
            local_488 = *(longlong **)pauVar45[1];
            auVar13 = *(undefined1 (*) [12])*pauVar45;
            local_498[0] = (uint)*(undefined8 *)*pauVar45;
            local_498[1] = (uint)((ulonglong)*(undefined8 *)*pauVar45 >> 0x20);
            local_498[2] = (uint)*(undefined8 *)(*pauVar45 + 8);
            local_498[3] = (uint)((ulonglong)*(undefined8 *)(*pauVar45 + 8) >> 0x20);
            *(undefined8 *)pauVar45[1] = *(undefined8 *)pauVar41[1];
            uVar3 = *(undefined8 *)(*pauVar41 + 8);
            *(undefined8 *)*pauVar45 = *(undefined8 *)*pauVar41;
            *(undefined8 *)(*pauVar45 + 8) = uVar3;
            *(longlong **)pauVar41[1] = local_488;
            auVar11._12_4_ = local_498[3];
            auVar11._0_12_ = auVar13;
            *pauVar41 = auVar11;
          }
          goto LAB_1483793b9;
        }
LAB_1483790db:
        if (uVar52 != 0) {
          iVar43 = (iVar51 - (iVar51 + -1 >> 0x1f)) + -1 >> 1;
          iVar51 = iVar43;
joined_r0x0001483790fe:
          do {
            iVar39 = iVar43 * 2 + 1;
            if (iVar39 < (int)uVar52) {
              iVar46 = iVar43 * 2 + 2;
              if ((iVar46 < (int)uVar52) &&
                 (dVar65 = *(double *)((longlong)pauVar23 + (longlong)iVar39 * 0x18 + 8),
                 pdVar2 = (double *)((longlong)pauVar23 + (longlong)iVar46 * 0x18 + 8),
                 dVar65 < *pdVar2 || dVar65 == *pdVar2)) {
                iVar39 = iVar46;
              }
              dVar65 = *(double *)((longlong)pauVar23 + (longlong)iVar39 * 0x18 + 8);
              pdVar2 = (double *)((longlong)pauVar23 + (longlong)iVar43 * 0x18 + 8);
              if (*pdVar2 <= dVar65 && dVar65 != *pdVar2) {
                pauVar1 = (undefined1 (*) [12])((longlong)pauVar23 + (longlong)iVar43 * 0x18);
                pauVar41 = (undefined1 (*) [16])((longlong)pauVar23 + (longlong)iVar39 * 0x18);
                local_488 = *(longlong **)(pauVar1[1] + 4);
                auVar13 = *pauVar1;
                local_498[0] = (uint)*(undefined8 *)*pauVar1;
                local_498[1] = (uint)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
                local_498[2] = (uint)*(undefined8 *)(*pauVar1 + 8);
                local_498[3] = (uint)((ulonglong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
                *(undefined8 *)(pauVar1[1] + 4) = *(undefined8 *)pauVar41[1];
                uVar3 = *(undefined8 *)(*pauVar41 + 8);
                *(undefined8 *)*pauVar1 = *(undefined8 *)*pauVar41;
                *(undefined8 *)(*pauVar1 + 8) = uVar3;
                *(longlong **)pauVar41[1] = local_488;
                auVar8._12_4_ = local_498[3];
                auVar8._0_12_ = auVar13;
                *pauVar41 = auVar8;
                iVar43 = iVar39;
                goto joined_r0x0001483790fe;
              }
            }
            bVar56 = iVar51 != 0;
            iVar43 = iVar51 + -1;
            iVar51 = iVar43;
          } while (bVar56);
          if (1 < (int)uVar52) {
            uVar31 = (ulonglong)uVar52 - 1;
            local_488 = *(longlong **)pauVar23[1];
            auVar13 = *(undefined1 (*) [12])*pauVar23;
            local_498[0] = (uint)*(undefined8 *)*pauVar23;
            local_498[1] = (uint)((ulonglong)*(undefined8 *)*pauVar23 >> 0x20);
            local_498[2] = (uint)*(undefined8 *)(*pauVar23 + 8);
            local_498[3] = (uint)((ulonglong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
            *(undefined8 *)pauVar23[1] = *(undefined8 *)((longlong)pauVar23 + uVar31 * 0x18 + 0x10);
            puVar30 = (undefined8 *)((longlong)pauVar23 + uVar31 * 0x18);
            uVar3 = puVar30[1];
            *(undefined8 *)*pauVar23 = *puVar30;
            *(undefined8 *)(*pauVar23 + 8) = uVar3;
            *(longlong **)((longlong)pauVar23 + uVar31 * 0x18 + 0x10) = local_488;
            auVar9._12_4_ = local_498[3];
            auVar9._0_12_ = auVar13;
            *(undefined1 (*) [16])((longlong)pauVar23 + uVar31 * 0x18) = auVar9;
            if (uVar52 != 2) {
              do {
                iVar43 = 0;
                iVar39 = 1;
                iVar51 = 0;
                do {
                  iVar43 = iVar43 + 2;
                  iVar46 = iVar39;
                  if (((longlong)iVar43 < (longlong)uVar31) &&
                     (dVar65 = *(double *)((longlong)pauVar23 + (longlong)iVar39 * 0x18 + 8),
                     pdVar2 = (double *)((longlong)pauVar23 + (longlong)iVar43 * 0x18 + 8),
                     dVar65 < *pdVar2 || dVar65 == *pdVar2)) {
                    iVar46 = iVar43;
                  }
                  dVar65 = *(double *)((longlong)pauVar23 + (longlong)iVar46 * 0x18 + 8);
                  pdVar2 = (double *)((longlong)pauVar23 + (longlong)iVar51 * 0x18 + 8);
                  if (dVar65 < *pdVar2 || dVar65 == *pdVar2) break;
                  puVar30 = (undefined8 *)((longlong)pauVar23 + (longlong)iVar51 * 0x18);
                  puVar36 = (undefined8 *)((longlong)pauVar23 + (longlong)iVar46 * 0x18);
                  uVar3 = puVar30[2];
                  uVar4 = *puVar30;
                  uVar5 = puVar30[1];
                  puVar30[2] = puVar36[2];
                  uVar6 = puVar36[1];
                  *puVar30 = *puVar36;
                  puVar30[1] = uVar6;
                  puVar36[2] = uVar3;
                  *puVar36 = uVar4;
                  puVar36[1] = uVar5;
                  iVar43 = iVar46 * 2;
                  iVar39 = iVar46 * 2 + 1;
                  iVar51 = iVar46;
                } while ((longlong)iVar39 < (longlong)uVar31);
                uVar25 = uVar31 - 1;
                local_488 = *(longlong **)pauVar23[1];
                auVar13 = *(undefined1 (*) [12])*pauVar23;
                local_498[0] = (uint)*(undefined8 *)*pauVar23;
                local_498[1] = (uint)((ulonglong)*(undefined8 *)*pauVar23 >> 0x20);
                local_498[2] = (uint)*(undefined8 *)(*pauVar23 + 8);
                local_498[3] = (uint)((ulonglong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
                *(undefined8 *)pauVar23[1] =
                     *(undefined8 *)((longlong)pauVar23 + uVar25 * 0x18 + 0x10);
                puVar30 = (undefined8 *)((longlong)pauVar23 + uVar25 * 0x18);
                uVar3 = puVar30[1];
                *(undefined8 *)*pauVar23 = *puVar30;
                *(undefined8 *)(*pauVar23 + 8) = uVar3;
                *(longlong **)((longlong)pauVar23 + uVar25 * 0x18 + 0x10) = local_488;
                auVar10._12_4_ = local_498[3];
                auVar10._0_12_ = auVar13;
                *(undefined1 (*) [16])((longlong)pauVar23 + uVar25 * 0x18) = auVar10;
                bVar56 = 2 < uVar31;
                uVar31 = uVar25;
              } while (bVar56);
            }
          }
        }
LAB_1483793b9:
        plVar18 = plVar18 + -3;
      } while (local_3f8 <= plVar18);
    }
  }
  local_4b8 = (uint *)0x0;
  uStack_4b0 = 0;
  local_4d8 = (uint *)0x0;
  uStack_4d0 = 0;
  local_4f8 = 0;
  lStack_4f0 = 0;
  if (param_6 < 1) {
    uVar31 = 0;
  }
  else {
    local_5a0 = CONCAT44(local_5a0._4_4_,param_6 + 1);
    uVar52 = 1;
    local_5b0 = 2;
    do {
      auVar12[0xf] = 0;
      auVar12._0_15_ = stack0xfffffffffffffc09;
      _local_3f8 = auVar12 << 8;
      FUN_14475e60e(&local_4f8,local_3f8,local_5a4);
      if (0 < (int)uStack_530) {
        lVar48 = 0;
        lVar53 = 0;
        do {
          *(int *)((ulonglong)*(uint *)(local_538 + 4 + lVar48) * 0x58 + 0x50 +
                  (longlong)*(int *)(local_538 + lVar48) * 0x108 + local_528) = (int)lVar53;
          *(undefined4 *)(local_538 + 0x10 + lVar48) = 0;
          lVar53 = lVar53 + 1;
          lVar48 = lVar48 + 0x18;
        } while (lVar53 < (int)uStack_530);
      }
      bVar56 = (longlong)uStack_4b0 < 0;
      uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
      if (bVar56) {
        FUN_143b1a6c4(&local_4b8);
      }
      local_5bc = uVar52;
      if (0 < (longlong)(int)uStack_4d0) {
        puVar54 = local_4d8 + (longlong)(int)uStack_4d0 * 0x16;
        puVar26 = local_4d8;
        do {
          uVar31 = uStack_4b0;
          uVar52 = *puVar26;
          uVar28 = puVar26[1];
          puVar30 = (undefined8 *)local_3f8;
          puVar29 = puVar26;
          for (lVar48 = 10; puVar29 = puVar29 + 2, lVar48 != 0; lVar48 = lVar48 + -1) {
            *puVar30 = *(undefined8 *)puVar29;
            puVar30 = puVar30 + 1;
          }
          lVar48 = (longlong)(int)uStack_4b0;
          uVar50 = (int)uStack_4b0 + 1;
          uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar50);
          if (uStack_4b0._4_4_ < uVar50) {
            FUN_143b1a6f4(&local_4b8,uVar31 & 0xffffffff);
          }
          puVar29 = local_4b8 + lVar48 * 0x16;
          *puVar29 = uVar52;
          puVar29[1] = uVar28;
          puVar30 = (undefined8 *)local_3f8;
          for (lVar48 = 10; puVar29 = puVar29 + 2, lVar48 != 0; lVar48 = lVar48 + -1) {
            *(undefined8 *)puVar29 = *puVar30;
            puVar30 = puVar30 + 1;
          }
          *(undefined1 *)(local_4f8 + (int)uVar52) = 1;
          *(undefined1 *)(local_4f8 + (int)uVar28) = 1;
          puVar26 = puVar26 + 0x16;
        } while (puVar26 != puVar54);
        bVar56 = (longlong)uStack_4d0 < 0;
        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
        if (bVar56) {
          FUN_143b1a6c4(&local_4d8);
        }
        puVar49 = local_5b8;
        if (0 < (int)uStack_530) {
          lVar48 = 0;
          do {
            lVar53 = 0;
            do {
              lVar44 = (longlong)
                       *(int *)((ulonglong)*(uint *)(local_538 + 4 + lVar48 * 0x18) * 0x58 +
                                (longlong)*(int *)(local_538 + lVar48 * 0x18) * 0x108 + local_528 +
                                0x40 + lVar53 * 4);
              if ((-1 < lVar44) && (*(char *)(local_4f8 + lVar44) == '\x01')) {
                piVar55 = (int *)(local_538 + 0x10 + lVar48 * 0x18);
                *piVar55 = *piVar55 + 1;
              }
              lVar53 = lVar53 + 1;
            } while (lVar53 != 4);
            lVar48 = lVar48 + 1;
          } while (lVar48 < (int)uStack_530);
        }
      }
      FUN_146c3f08a(&local_570);
      uVar31 = uStack_530;
      FUN_146bd223a(&local_568);
      local_3f8._0_4_ = 0xffffffff;
      FUN_1448156a8(&local_548,local_3f8,uVar31 & 0xffffffff);
      local_550 = 0;
      if ((int)uStack_530 < 1) {
        local_588 = 0;
        uStack_580 = 0;
        local_598 = (int *)0x0;
        uStack_590 = 0;
      }
      else {
        lVar48 = 0x10;
        uVar31 = 0;
        do {
          lVar53 = (longlong)*(int *)(local_538 + -0x10 + lVar48) * 0x108 + local_528;
          lVar44 = (ulonglong)*(uint *)(local_538 + -0xc + lVar48) * 0x58;
          if ((*(char *)(local_4f8 + *(int *)(lVar44 + lVar53)) == '\0') &&
             (*(char *)(local_4f8 + *(int *)(lVar53 + lVar44 + 4)) == '\0')) {
            dVar65 = *(double *)(local_538 + -8 + lVar48);
            if (*(int *)(local_538 + lVar48) != 0) {
              dVar58 = pow((double)(*(int *)(local_538 + lVar48) + 1),param_5);
              dVar65 = dVar65 / dVar58;
            }
            if (dVar65 / 1.7320508075688772 <= (double)CONCAT44(uVar68,uVar67)) {
              FUN_146b9cbf0(&local_570,uVar31 & 0xffffffff,(float)dVar65);
            }
          }
          uVar31 = uVar31 + 1;
          lVar48 = lVar48 + 0x18;
        } while ((longlong)uVar31 < (longlong)(int)uStack_530);
        local_588 = 0;
        uStack_580 = 0;
        local_598 = (int *)0x0;
        uStack_590 = 0;
        while (0 < local_550) {
          iVar43 = *(int *)(*local_560 + 0xc);
          FUN_146bd26ea(&local_570,1);
          uVar31 = uStack_4b0;
          lVar53 = (longlong)*(int *)(local_538 + (longlong)iVar43 * 0x18) * 0x108 + local_528;
          lVar48 = (ulonglong)*(uint *)(local_538 + 4 + (longlong)iVar43 * 0x18) * 0x58;
          if ((*(char *)(local_4f8 + *(int *)(lVar48 + lVar53)) == '\0') &&
             (piVar55 = (int *)(lVar53 + lVar48), *(char *)(local_4f8 + piVar55[1]) == '\0')) {
            lVar48 = (longlong)(int)uStack_4b0;
            uVar52 = (int)uStack_4b0 + 1;
            uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar52);
            if (uStack_4b0._4_4_ < uVar52) {
              FUN_143b1a6f4(&local_4b8,uVar31 & 0xffffffff);
            }
            piVar32 = piVar55;
            puVar26 = local_4b8 + lVar48 * 0x16;
            for (lVar53 = 0xb; lVar53 != 0; lVar53 = lVar53 + -1) {
              *(undefined8 *)puVar26 = *(undefined8 *)piVar32;
              piVar32 = piVar32 + 2;
              puVar26 = puVar26 + 2;
            }
            *(undefined1 *)(local_4f8 + *piVar55) = 1;
            *(undefined1 *)(local_4f8 + piVar55[1]) = 1;
            if (0.0 < param_5) {
              bVar56 = (longlong)uStack_580 < 0;
              uStack_580 = uStack_580 & 0xffffffff00000000;
              if (bVar56) {
                FUN_14481578e(&local_588,0);
              }
              bVar56 = (longlong)uStack_590 < 0;
              uStack_590 = uStack_590 & 0xffffffff00000000;
              if (bVar56) {
                FUN_14481578e(&local_598,0);
              }
              lVar48 = 0;
              do {
                iVar43 = piVar55[lVar48 + 0x10];
                if ((longlong)iVar43 != -1) {
                  lVar53 = (longlong)iVar43 * 0x108;
                  lVar44 = 3;
                  do {
                    lVar21 = local_528;
                    if ((((-1 < (longlong)*(int *)(local_528 + lVar53)) &&
                         (lVar20 = (longlong)*(int *)(local_528 + 4 + lVar53), -1 < lVar20)) &&
                        (*(char *)(local_4f8 + *(int *)(local_528 + lVar53)) == '\0')) &&
                       ((*(char *)(local_4f8 + lVar20) == '\0' &&
                        (cVar16 = FUN_143b1294c(local_528 + lVar53,piVar55), cVar16 != '\0')))) {
                      piVar32 = (int *)(lVar21 + lVar53);
                      FUN_1449e3bb0(&local_588,piVar32 + 0x14);
                      iVar51 = -1;
                      if (piVar32[1] == iVar43) {
                        iVar51 = *piVar32;
                      }
                      if (*piVar32 == iVar43) {
                        iVar51 = piVar32[1];
                      }
                      local_3f8._0_4_ = iVar51;
                      FUN_144aa221c(&local_598,local_3f8);
                    }
                    lVar53 = lVar53 + 0x58;
                    lVar44 = lVar44 + -1;
                  } while (lVar44 != 0);
                }
                lVar48 = lVar48 + 1;
              } while (lVar48 != 4);
              if ((longlong)(int)uStack_590 != 0) {
                piVar32 = local_598 + (int)uStack_590;
                piVar33 = local_598;
                do {
                  lVar48 = (longlong)*piVar33 * 0x108;
                  lVar53 = 3;
                  do {
                    lVar44 = local_528;
                    if (((-1 < (longlong)*(int *)(local_528 + lVar48)) &&
                        (lVar21 = (longlong)*(int *)(local_528 + 4 + lVar48), -1 < lVar21)) &&
                       ((*(char *)(local_4f8 + *(int *)(local_528 + lVar48)) == '\0' &&
                        ((*(char *)(local_4f8 + lVar21) == '\0' &&
                         (cVar16 = FUN_143b1294c(lVar48 + local_528,piVar55), cVar16 != '\0')))))) {
                      FUN_1449e3bb0(&local_588,lVar48 + lVar44 + 0x50);
                    }
                    lVar48 = lVar48 + 0x58;
                    lVar53 = lVar53 + -1;
                  } while (lVar53 != 0);
                  piVar33 = piVar33 + 1;
                } while (piVar33 != piVar32);
              }
              lVar48 = local_588;
              puVar49 = local_5b8;
              lVar53 = (longlong)(int)uStack_580;
              if (lVar53 != 0) {
                lVar44 = 0;
                do {
                  iVar43 = *(int *)(lVar48 + lVar44);
                  lVar21 = (longlong)iVar43;
                  if ((((iVar43 <= local_540 + 1) &&
                       (uVar52 = *(uint *)(local_548 + lVar21 * 4), 0 < (int)uVar52)) &&
                      ((int)uVar52 <= local_550)) &&
                     (0 < *(int *)(local_560[uVar52 >> 9] + 8 + (ulonglong)(uVar52 & 0x1ff) * 0xc)))
                  {
                    iVar51 = *(int *)(local_538 + 0x10 + lVar21 * 0x18);
                    iVar39 = iVar51 + 1;
                    *(int *)(local_538 + 0x10 + lVar21 * 0x18) = iVar39;
                    dVar65 = *(double *)(local_538 + 8 + lVar21 * 0x18);
                    if (iVar39 != 0) {
                      dVar58 = pow((double)(iVar51 + 2),param_5);
                      dVar65 = dVar65 / dVar58;
                    }
                    FUN_146bd26ea(&local_570,*(undefined4 *)(local_548 + lVar21 * 4));
                    FUN_146b9cbf0(&local_570,iVar43,(float)dVar65);
                  }
                  lVar44 = lVar44 + 4;
                } while (lVar53 * 4 != lVar44);
              }
            }
          }
        }
      }
      if ((int)local_5bc < param_6) {
        uVar31 = *puVar49;
        auStack_3d8._8_8_ = 0;
        uStack_3e8 = 0;
        local_3c8._0_12_ = ZEXT812(0xffffffff00000080) << 0x20;
        local_3c8._12_4_ = 0;
        local_3b8._8_8_ = 0;
        local_3a8[0] = 0;
        uStack_3f0 = 0;
        local_3f8 = (undefined1  [8])uVar31;
        uVar28 = *(int *)(uVar31 + 0x140) * 0x200 + *(int *)(uVar31 + 0x144);
        uVar52 = 0;
        if (uVar28 != 0) {
          uVar52 = 0;
          if (0xfffd < (ushort)(*(short *)**(undefined8 **)(uVar31 + 0x148) - 1U)) {
            uVar50 = 1;
            uVar19 = 1;
            if (1 < (int)uVar28) {
              uVar50 = uVar28;
            }
            do {
              uVar52 = uVar50;
              if (uVar50 == uVar19) break;
              uVar24 = uVar19 >> 9;
              uVar40 = uVar19 & 0x1ff;
              uVar52 = uVar19;
              uVar19 = uVar19 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(uVar31 + 0x148))[uVar24] +
                                                 (ulonglong)uVar40 * 2) - 1U));
          }
        }
        iVar43 = 0;
        iVar51 = 0;
        if (uVar52 != uVar28) {
          do {
            lVar48 = local_4f8;
            if (*(char *)(local_4f8 + (int)uVar52) == '\0') {
              FUN_146c03f0e(*puVar49,local_498,uVar52);
              uVar50 = 0;
              uVar19 = 0;
              if (-1 < (longlong)(int)local_498[0]) {
                uVar19 = (uint)*(byte *)(lVar48 + (int)local_498[0]);
              }
              if (-1 < (longlong)(int)local_498[1]) {
                uVar50 = (uint)*(byte *)(lVar48 + (int)local_498[1]);
              }
              if ((longlong)(int)local_498[2] < 0) {
                uVar24 = 0;
              }
              else {
                uVar24 = (uint)*(byte *)(lVar48 + (int)local_498[2]);
              }
              if (uVar50 + uVar19 + uVar24 == 3) {
                FUN_148379644(local_3f8,uVar52);
              }
            }
            uVar50 = uVar52 + 1;
            if ((int)(uVar52 + 1) < (int)uVar28) {
              uVar50 = uVar28;
            }
            do {
              uVar19 = uVar50;
              if (uVar50 - 1 == uVar52) break;
              uVar52 = uVar52 + 1;
              uVar19 = uVar52;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(uVar31 + 0x148) +
                                                   (ulonglong)(uVar52 >> 9) * 8) +
                                                 (ulonglong)(uVar52 & 0x1ff) * 2) - 1U));
            uVar52 = uVar19;
          } while (uVar52 != uVar28);
          iVar43 = (int)uStack_3e8;
          iVar51 = local_3c8._12_4_;
        }
        local_498[0] = 0;
        local_498[1] = 0;
        local_488 = (longlong *)0x0;
        uVar31 = local_5b0 & 0xffffffff;
        do {
          FUN_1483a2e7e(local_3f8,local_498);
          uVar52 = (int)uVar31 - 1;
          uVar31 = (ulonglong)uVar52;
        } while (uVar52 != 0);
        if (CONCAT44(local_498[1],local_498[0]) != 0) {
          plVar18 = local_488;
          if (local_488 == (longlong *)0x0) {
            plVar18 = local_478;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        if (iVar51 < iVar43) {
          if ((longlong)(int)uStack_4b0 != 0) {
            puVar54 = local_4b8 + (longlong)(int)uStack_4b0 * 0x16;
            puVar26 = local_4b8;
            do {
              uVar31 = uStack_4d0;
              uVar52 = *puVar26;
              uVar28 = puVar26[1];
              puVar34 = local_498;
              puVar29 = puVar26;
              for (lVar48 = 10; puVar29 = puVar29 + 2, lVar48 != 0; lVar48 = lVar48 + -1) {
                *(undefined8 *)puVar34 = *(undefined8 *)puVar29;
                puVar34 = puVar34 + 2;
              }
              if ((int)uStack_3e8 != local_3c8._12_4_) {
                puVar17 = (undefined1 *)local_3b8._8_8_;
                if ((undefined1 *)local_3b8._8_8_ == (undefined1 *)0x0) {
                  puVar17 = local_3b8;
                }
                iVar43 = *(int *)(puVar17 + (ulonglong)(local_3a8[0] - 1U & uVar52) * 4);
                for (; iVar43 != -1; iVar43 = *(int *)(uStack_3f0 + (longlong)iVar43 * 0xc + 4)) {
                  if (*(uint *)(uStack_3f0 + (longlong)iVar43 * 0xc) == uVar52) goto LAB_148378571;
                }
                for (iVar43 = *(int *)(puVar17 + (ulonglong)(local_3a8[0] - 1U & uVar28) * 4);
                    iVar43 != -1; iVar43 = *(int *)(uStack_3f0 + (longlong)iVar43 * 0xc + 4)) {
                  if (*(uint *)(uStack_3f0 + (longlong)iVar43 * 0xc) == uVar28) goto LAB_148378571;
                }
              }
              lVar48 = (longlong)(int)uStack_4d0;
              uVar50 = (int)uStack_4d0 + 1;
              uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar50);
              if (uStack_4d0._4_4_ < uVar50) {
                FUN_143b1a6f4(&local_4d8,uVar31 & 0xffffffff);
              }
              puVar29 = local_4d8 + lVar48 * 0x16;
              *puVar29 = uVar52;
              puVar29[1] = uVar28;
              puVar34 = local_498;
              for (lVar48 = 10; puVar29 = puVar29 + 2, lVar48 != 0; lVar48 = lVar48 + -1) {
                *(undefined8 *)puVar29 = *(undefined8 *)puVar34;
                puVar34 = puVar34 + 2;
              }
LAB_148378571:
              puVar26 = puVar26 + 0x16;
            } while (puVar26 != puVar54);
          }
        }
        param_5 = param_5 * 1.1;
        local_3a8[0] = 0;
        if (local_3b8._8_8_ != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&uStack_3f0);
        puVar49 = local_5b8;
      }
      uVar52 = local_5bc;
      if (local_598 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_588 != 0) {
        FUN_1400020a8();
      }
      FUN_146b9cd14(&local_570);
      uVar52 = uVar52 + 1;
      iVar43 = (int)local_5b0;
      local_5b0 = (ulonglong)(iVar43 + 1);
    } while (iVar43 != (int)local_5a0);
    uVar31 = uStack_4b0 & 0xffffffff;
  }
  puVar49 = puVar49 + 3;
  FUN_140bfc200(puVar49,uVar31,1);
  if (0 < (int)uStack_4b0) {
    lVar48 = 4;
    lVar44 = 0;
    lVar53 = 0;
    do {
      uVar67 = *(undefined4 *)((longlong)local_4b8 + lVar48 + -4);
      uVar68 = *(undefined4 *)((longlong)local_4b8 + lVar48);
      uVar31 = *puVar49;
      iVar43 = *(int *)(uVar31 + 8 + lVar44);
      *(uint *)(uVar31 + 8 + lVar44) = iVar43 + 1U;
      if (*(uint *)(uVar31 + 0xc + lVar44) < iVar43 + 1U) {
        FUN_1446f48e2((longlong *)(uVar31 + lVar44),iVar43);
      }
      *(undefined4 *)(*(longlong *)(uVar31 + lVar44) + (longlong)iVar43 * 4) = uVar67;
      uVar31 = *puVar49;
      iVar43 = *(int *)(uVar31 + 8 + lVar44);
      *(uint *)(uVar31 + 8 + lVar44) = iVar43 + 1U;
      if (*(uint *)(uVar31 + 0xc + lVar44) < iVar43 + 1U) {
        FUN_1446f48e2((longlong *)(uVar31 + lVar44),iVar43);
      }
      *(undefined4 *)(*(longlong *)(uVar31 + lVar44) + (longlong)iVar43 * 4) = uVar68;
      lVar53 = lVar53 + 1;
      lVar44 = lVar44 + 0x10;
      lVar48 = lVar48 + 0x58;
    } while (lVar53 < (int)uStack_4b0);
  }
  puVar14 = local_5b8;
  uVar31 = *local_5b8;
  uVar28 = *(int *)(uVar31 + 0x140) * 0x200 + *(int *)(uVar31 + 0x144);
  uVar52 = 0;
  if ((uVar28 != 0) &&
     (uVar52 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(uVar31 + 0x148) - 1U))) {
    uVar50 = 1;
    uVar19 = 1;
    if (1 < (int)uVar28) {
      uVar50 = uVar28;
    }
    do {
      uVar52 = uVar50;
      if (uVar50 == uVar19) break;
      uVar24 = uVar19 >> 9;
      uVar40 = uVar19 & 0x1ff;
      uVar52 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(uVar31 + 0x148))[uVar24] +
                                         (ulonglong)uVar40 * 2) - 1U));
  }
  if (uVar52 != uVar28) {
    do {
      if (*(char *)(local_4f8 + (int)uVar52) == '\0') {
        _local_3f8 = ZEXT412(1) << 0x40;
        uStack_3f0._4_4_ = 0;
        FUN_1446f48e2(local_3f8,0);
        *(uint *)local_3f8 = uVar52;
        uVar25 = puVar14[4];
        uVar50 = (int)uVar25 + 1;
        *(uint *)(puVar14 + 4) = uVar50;
        if (*(uint *)((longlong)puVar14 + 0x24) < uVar50) {
          FUN_140bfc2d4(puVar49);
        }
        uVar37 = *puVar49;
        lVar48 = (longlong)(int)uVar25 * 0x10;
        *(undefined8 *)(uVar37 + lVar48) = 0;
        *(undefined1 (*) [8])(uVar37 + lVar48) = local_3f8;
        *(undefined4 *)(uVar37 + 8 + lVar48) = (undefined4)uStack_3f0;
        *(undefined4 *)(uVar37 + 0xc + lVar48) = uStack_3f0._4_4_;
        _local_3f8 = ZEXT816(0);
      }
      uVar50 = uVar52 + 1;
      if ((int)(uVar52 + 1) < (int)uVar28) {
        uVar50 = uVar28;
      }
      do {
        uVar19 = uVar50;
        if (uVar50 - 1 == uVar52) break;
        uVar52 = uVar52 + 1;
        uVar19 = uVar52;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(uVar31 + 0x148) +
                                             (ulonglong)(uVar52 >> 9) * 8) +
                                           (ulonglong)(uVar52 & 0x1ff) * 2) - 1U));
      uVar52 = uVar19;
    } while (uVar52 != uVar28);
  }
  if ((char)puVar14[2] != '\0') {
    FUN_148376f96(puVar14);
  }
  iVar43 = (int)uStack_4b0;
  if (local_4f8 != 0) {
    FUN_1400020a8();
  }
  if (local_4d8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_4b8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_538 != 0) {
    FUN_1400020a8();
  }
  if (local_528 != 0) {
    FUN_1400020a8();
  }
  local_400 = 0;
  if (local_408 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_448);
  if (local_518._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_508._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_5e8) == DAT_14c707940) {
    return 0 < iVar43;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14837900c:
  local_488 = *(longlong **)pauVar23[1];
  auVar13 = *(undefined1 (*) [12])*pauVar23;
  local_498[0] = (uint)*(undefined8 *)*pauVar23;
  local_498[1] = (uint)((ulonglong)*(undefined8 *)*pauVar23 >> 0x20);
  local_498[2] = (uint)*(undefined8 *)(*pauVar23 + 8);
  local_498[3] = (uint)((ulonglong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
  *(undefined8 *)pauVar23[1] = *(undefined8 *)(pauVar42[-1] + 8);
  uVar3 = *(undefined8 *)pauVar42[-1];
  *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar45;
  *(undefined8 *)(*pauVar23 + 8) = uVar3;
  *(longlong **)(pauVar42[-1] + 8) = local_488;
  auVar7._12_4_ = local_498[3];
  auVar7._0_12_ = auVar13;
  *pauVar45 = auVar7;
  iVar43 = iVar43 + -1;
  pauVar42 = pauVar42 + -3;
  if ((longlong)pauVar27 - (longlong)pauVar35 < (longlong)pauVar47 - (longlong)pauVar38) {
    if (pauVar22 < pauVar41) {
      *plVar18 = (longlong)pauVar22;
      plVar18[1] = (longlong)pauVar41;
      *(int *)(plVar18 + 2) = iVar43;
      plVar18 = plVar18 + 3;
    }
    pauVar38 = pauVar23;
    if (pauVar45 <= (undefined1 (*) [16])(pauVar23[1] + 8)) goto LAB_1483793b9;
  }
  else {
    if ((undefined1 (*) [16])(pauVar23[1] + 8) < pauVar45) {
      *plVar18 = (longlong)pauVar23;
      plVar18[1] = (longlong)pauVar42;
      *(int *)(plVar18 + 2) = iVar43;
      plVar18 = plVar18 + 3;
    }
    pauVar23 = pauVar22;
    pauVar27 = pauVar41;
    pauVar42 = pauVar41;
    if (pauVar41 <= pauVar22) goto LAB_1483793b9;
  }
  iVar51 = (int)((ulonglong)((longlong)pauVar27 - (longlong)pauVar38) >> 3) * -0x55555555;
  uVar52 = iVar51 + 1;
  pauVar35 = pauVar38;
  pauVar41 = pauVar42;
  pauVar47 = pauVar27;
  if (iVar43 == 0) goto LAB_1483790db;
  goto LAB_148378f16;
}



// FUNCTION 148379644 FUN_148379644 body=142 status=ok
// SIG undefined FUN_148379644(void)

void FUN_148379644(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((-1 < (int)param_2) &&
      (lVar1 = *param_1, (int)param_2 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_c = param_2;
    FUN_1447cbafe(param_1 + 1,local_10,&local_c,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483796d4 FUN_1483796d4 body=1526 status=ok
// SIG undefined FUN_1483796d4(void)

ulonglong FUN_1483796d4(longlong *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                       char param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *_Src;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_168 [40];
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined4 local_128;
  int local_124 [3];
  int *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  if (((char)param_3 != '\0') || ((char)param_4 != '\0')) {
    FUN_1483772fc(param_1,param_3,param_4,&local_c8);
  }
  if (param_5 == '\0') {
    local_e0 = (undefined1 *)*param_1;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    FUN_146c38358();
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_1448c4dd6(&local_f8,*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),1);
    local_108 = 0;
    uStack_100 = 0;
    lVar2 = *param_1;
    uVar8 = 0;
    uVar13 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
    if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar4 = 1;
      if (1 < (int)uVar13) {
        uVar8 = (ulonglong)uVar13;
      }
      do {
        uVar7 = uVar4;
        if ((uint)uVar8 == uVar7) goto LAB_1483798bd;
        uVar4 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x148))[uVar7 >> 9] +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      uVar8 = (ulonglong)uVar7;
    }
LAB_1483798bd:
    if ((uint)uVar8 != uVar13) {
      local_140 = param_1 + 3;
      local_138 = param_1;
      do {
        iVar6 = (int)uVar8;
        if (*(char *)(local_f8 + iVar6) == '\0') {
          local_118 = (int *)0x0;
          uStack_110 = 1;
          FUN_1446f48e2(&local_118,0);
          *local_118 = iVar6;
          *(undefined1 *)(local_f8 + iVar6) = 1;
          uVar4 = uStack_100._4_4_;
          iVar10 = 0;
          if ((longlong)uStack_100 < 0) {
            uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
            FUN_14481578e(&local_108);
            uVar4 = uStack_100._4_4_;
            iVar10 = (uint)uStack_100;
          }
          uStack_100 = CONCAT44(uStack_100._4_4_,iVar10 + 1U);
          if (uVar4 < iVar10 + 1U) {
            FUN_1446f48e2(&local_108,iVar10);
          }
          *(int *)(local_108 + (longlong)iVar10 * 4) = iVar6;
          while (0 < (int)(uint)uStack_100) {
            uVar4 = *(uint *)(local_108 + -4 + (ulonglong)(uint)uStack_100 * 4);
            uStack_100._4_4_ = (uint)(uStack_100 >> 0x20);
            uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 - 1);
            lVar12 = *param_1;
            FUN_146c03f0e(lVar12,local_124,uVar4);
            lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x180) + (ulonglong)(uVar4 >> 9) * 8);
            lVar11 = (longlong)(int)uVar4;
            local_128 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
            local_130 = *(undefined8 *)(lVar12 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
            lVar12 = 0;
            do {
              uVar3 = uStack_110;
              if ((int)uStack_c0 != local_94) {
                uVar4 = *(uint *)((longlong)&local_130 + lVar12 * 4);
                puVar5 = local_88;
                if (local_88 == (undefined1 *)0x0) {
                  puVar5 = local_90;
                }
                for (iVar10 = *(int *)(puVar5 + (ulonglong)(local_80 - 1U & uVar4) * 4);
                    iVar10 != -1; iVar10 = *(int *)(local_c8 + (longlong)iVar10 * 0xc + 4)) {
                  if (*(uint *)(local_c8 + (longlong)iVar10 * 0xc) == uVar4) goto LAB_148379a75;
                }
              }
              iVar10 = local_124[lVar12];
              lVar9 = (longlong)iVar10;
              if (((-1 < lVar9) && (*(char *)(local_f8 + lVar9) == '\0')) &&
                 (1.0 - (double)param_2 <
                  (double)local_d8[lVar11 * 3 + 2] * (double)local_d8[lVar9 * 3 + 2] +
                  (double)local_d8[lVar11 * 3] * (double)local_d8[lVar9 * 3] +
                  (double)local_d8[lVar11 * 3 + 1] * (double)local_d8[lVar9 * 3 + 1])) {
                lVar14 = (longlong)(int)uStack_110;
                uVar4 = (int)uStack_110 + 1;
                uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
                if (uStack_110._4_4_ < uVar4) {
                  FUN_1446f48e2(&local_118,uVar3 & 0xffffffff);
                }
                uVar3 = uStack_100;
                local_118[lVar14] = iVar10;
                lVar14 = (longlong)(int)(uint)uStack_100;
                uVar4 = (uint)uStack_100 + 1;
                uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
                if (uStack_100._4_4_ < uVar4) {
                  FUN_1446f48e2(&local_108,uVar3 & 0xffffffff);
                }
                *(int *)(local_108 + lVar14 * 4) = iVar10;
                *(undefined1 *)(local_f8 + lVar9) = 1;
              }
LAB_148379a75:
              lVar12 = lVar12 + 1;
            } while (lVar12 != 3);
            param_1 = local_138;
          }
          lVar12 = param_1[4];
          uVar4 = (int)lVar12 + 1;
          *(uint *)(param_1 + 4) = uVar4;
          if (*(uint *)((longlong)param_1 + 0x24) < uVar4) {
            FUN_140bfc2d4(local_140);
          }
          _Src = local_118;
          lVar11 = *local_140;
          lVar12 = (longlong)(int)lVar12 * 0x10;
          puVar1 = (undefined8 *)(lVar11 + lVar12);
          *(undefined8 *)(lVar11 + lVar12) = 0;
          lVar9 = (longlong)(int)uStack_110;
          *(int *)(lVar11 + 8 + lVar12) = (int)uStack_110;
          if (lVar9 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_144a06ca8(puVar1,uStack_110 & 0xffffffff,0);
            memcpy((void *)*puVar1,_Src,lVar9 << 2);
          }
          param_1 = local_138;
          if (local_118 != (int *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar4 = iVar6 + 1U;
        if ((int)(iVar6 + 1U) < (int)uVar13) {
          uVar4 = uVar13;
        }
        do {
          if (uVar4 - 1 == (int)uVar8) {
            uVar8 = (ulonglong)uVar4;
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar2 + 0x148) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar8 != uVar13);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_d8 = (longlong *)0x3e45798ee2308c3a;
    uStack_d0 = CONCAT35(uStack_d0._5_3_,0x100000000);
    local_e0 = param_2;
    FUN_146b9cd4f(*param_1,param_1 + 3,&local_e0,&local_c8);
  }
  if (((char)param_1[1] == '\x01') && (1 < *(int *)((longlong)param_1 + 0xc))) {
    local_e0 = &LAB_1483b0cca;
    local_d8 = &local_f8;
    FUN_14837b596(param_1);
  }
  if ((char)param_1[2] == '\x01') {
    FUN_148376f96(param_1);
  }
  lVar2 = param_1[4];
  local_80 = 0;
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_c8);
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar8 >> 8),0 < (int)lVar2) & 0xffffffff;
}



// FUNCTION 148379ccc FUN_148379ccc body=2772 status=ok
// SIG undefined FUN_148379ccc(void)

/* WARNING: Removing unreachable block (ram,0x000148379df7) */
/* WARNING: Removing unreachable block (ram,0x000148379e02) */
/* WARNING: Removing unreachable block (ram,0x000148379e06) */
/* WARNING: Removing unreachable block (ram,0x000148379f0d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffdd8 : 0x000148379f11 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_148379ccc(longlong *param_1,int param_2,int param_3,longlong *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *_Src;
  code **ppcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auStack_628 [32];
  longlong *local_608;
  longlong *local_600;
  longlong local_5f8;
  undefined8 uStack_5f0;
  longlong local_5e8;
  ulonglong uStack_5e0;
  longlong local_5d8;
  undefined8 uStack_5d0;
  longlong local_5c8;
  longlong local_5b8;
  undefined8 uStack_5b0;
  longlong local_5a0;
  longlong local_598;
  undefined8 uStack_590;
  longlong local_588;
  undefined8 uStack_580;
  code *local_578;
  code **local_570;
  undefined8 local_568;
  undefined8 local_558;
  code *local_528;
  code **ppcStack_520;
  longlong *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  int *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 local_498;
  code *local_488;
  code **ppcStack_480;
  longlong *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  longlong local_3a8;
  code *local_388 [2];
  undefined8 local_378 [6];
  undefined1 local_348 [256];
  undefined1 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined **local_228;
  undefined1 *puStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_60;
  
  puStack_220 = uStack_c0;
  local_228 = local_c8;
  uVar13 = uStack_20c;
  uVar12 = uStack_210;
  uVar11 = uStack_214;
  uVar10 = local_218;
  uVar9 = uStack_22c;
  uVar8 = uStack_230;
  uVar7 = uStack_23c;
  uVar2 = uStack_240;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_628;
  iVar17 = *(int *)(*param_1 + 0x50);
  if (param_2 < *(int *)(*param_1 + 0x50)) {
    iVar17 = param_2;
  }
  local_4c8 = (undefined4)local_c8;
  uStack_4c4 = local_c8._4_4_;
  uStack_4c0 = (undefined4)uStack_c0;
  uStack_4bc = uStack_c0._4_4_;
  local_218 = local_b8;
  uStack_214 = uStack_b4;
  uStack_210 = uStack_b0;
  uStack_20c = uStack_ac;
  local_4b8 = local_b8;
  uStack_4b4 = uStack_b4;
  uStack_4b0 = uStack_b0;
  uStack_4ac = uStack_ac;
  uStack_230 = uStack_d0;
  uStack_22c = uStack_cc;
  local_4d8 = 0;
  uStack_4d4 = 0;
  uStack_4d0 = uStack_d0;
  uStack_4cc = uStack_cc;
  uStack_240 = uStack_e0;
  uStack_23c = uStack_dc;
  local_4e8 = (int *)0x0;
  uStack_4e0 = uStack_e0;
  uStack_4dc = uStack_dc;
  local_d8 = (longlong *)0x0;
  local_e8 = (code *)&LAB_1483b0cce;
  local_c8 = &PTR_LAB_14ae75360;
  uStack_c0 = &LAB_143b1a85c;
  local_248 = (undefined1 *)0x0;
  local_238 = 0;
  uStack_ac = uVar13;
  uStack_b0 = uVar12;
  uStack_b4 = uVar11;
  local_b8 = uVar10;
  uStack_cc = uVar9;
  uStack_d0 = uVar8;
  uStack_dc = uVar7;
  uStack_e0 = uVar2;
  uStack_c0 = &LAB_143b1a85c;
  local_c8 = &PTR_LAB_14ae75360;
  local_d8 = (longlong *)0x0;
  local_e8 = (code *)&LAB_1483b0cce;
  local_238 = 0;
  local_248 = (undefined1 *)0x0;
  uStack_4ac = uStack_20c;
  uStack_4b0 = uStack_210;
  uStack_4b4 = uStack_214;
  local_4b8 = local_218;
  uStack_4cc = uStack_22c;
  uStack_4d0 = uStack_230;
  uStack_4d4 = 0;
  local_4d8 = 0;
  uStack_4dc = uStack_23c;
  uStack_4e0 = uStack_240;
  local_4e8 = (int *)0x0;
  local_600 = param_4;
  if (param_5 != (undefined1 *)0x0) {
    local_4b8 = uVar10;
    uStack_4b4 = uVar11;
    uStack_4b0 = uVar12;
    uStack_4ac = uVar13;
    local_4c8 = 0x4ae75360;
    uStack_4c4 = 1;
    uStack_4c0 = 0x43b1a85c;
    uStack_4bc = 1;
    local_4d8 = 0;
    uStack_4d4 = 0;
    uStack_4d0 = uVar8;
    uStack_4cc = uVar9;
    local_4e8 = (int *)&LAB_1483b0cce;
    uStack_4e0 = uVar2;
    uStack_4dc = uVar7;
    local_b8 = local_218;
    uStack_b4 = uStack_214;
    uStack_b0 = uStack_210;
    uStack_ac = uStack_20c;
    local_e8 = FUN_143b1a860;
    uStack_e0 = uStack_240;
    uStack_dc = uStack_23c;
    local_d8 = (longlong *)0x0;
    uStack_d0 = uStack_230;
    uStack_cc = uStack_22c;
    local_c8 = &PTR_LAB_14ae75380;
    uStack_c0 = param_5;
    local_248 = &LAB_1483b0cce;
    local_228 = &PTR_LAB_14ae75360;
    puStack_220 = &LAB_143b1a85c;
    local_238 = 0;
    uStack_240 = uVar2;
    uStack_23c = uVar7;
    uStack_230 = uVar8;
    uStack_22c = uVar9;
    local_218 = uVar10;
    uStack_214 = uVar11;
    uStack_210 = uVar12;
    uStack_20c = uVar13;
    (*(code *)&LAB_1483b0cfa)(&local_228);
  }
  FUN_14837a7a2(&local_248);
  local_570 = &local_e8;
  local_578 = FUN_146c90f06;
  FUN_14837a7f0(*param_1,&local_248);
  FUN_14837aae2(local_348,&local_248);
  local_588 = 0;
  uStack_580 = 0;
  local_5a0 = *param_1;
  local_598 = 0;
  uStack_590 = 0;
  local_388[0] = local_e8;
  local_378[0] = 0;
  local_608 = param_1;
  if (local_e8 != (code *)0x0) {
    plVar20 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar20 = &local_c8;
    }
    (**(code **)*plVar20)(0,local_378);
  }
  FUN_142984024(&local_5a0,local_388);
  lVar24 = (longlong)(int)uStack_590;
  if (0 < lVar24) {
    lVar26 = 0;
    do {
      uVar29 = uStack_580;
      puVar3 = (undefined4 *)**(undefined8 **)(local_598 + lVar26 * 8);
      lVar28 = (longlong)(int)uStack_580;
      uVar14 = (int)uStack_580 + 1;
      uStack_580 = CONCAT44(uStack_580._4_4_,uVar14);
      if (uStack_580._4_4_ < uVar14) {
        FUN_1446f48e2(&local_588,uVar29 & 0xffffffff);
      }
      *(undefined4 *)(local_588 + lVar28 * 4) = *puVar3;
      lVar26 = lVar26 + 1;
    } while (lVar24 != lVar26);
  }
  lVar24 = local_588;
  local_5b8 = 0;
  uStack_5b0 = 0;
  lVar26 = (longlong)(int)uStack_580;
  if (lVar26 != 0) {
    lVar28 = 0;
    do {
      uVar29 = uStack_5b0;
      uVar2 = *(undefined4 *)(lVar24 + lVar28);
      lVar27 = (longlong)(int)uStack_5b0;
      uVar14 = (int)uStack_5b0 + 1;
      uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uVar14);
      if (uStack_5b0._4_4_ < uVar14) {
        FUN_1483b0f4e(&local_5b8,uVar29 & 0xffffffff);
      }
      lVar27 = lVar27 * 0x10;
      *(undefined4 *)(local_5b8 + lVar27) = uVar2;
      *(undefined4 *)(local_5b8 + 4 + lVar27) = uVar2;
      *(undefined8 *)(local_5b8 + 8 + lVar27) = 0;
      lVar28 = lVar28 + 4;
    } while (lVar26 * 4 != lVar28);
  }
  FUN_14837aca2(local_348,&local_5b8);
  if ((int)uStack_580 < iVar17) {
    do {
      iVar15 = FUN_14837ae7a(local_348);
      if (iVar15 < 0) break;
      local_4e8 = (int *)0x0;
      uStack_4e0 = 1;
      FUN_1483b1434(&local_4e8);
      *local_4e8 = iVar15;
      local_4e8[1] = iVar15;
      local_4e8[2] = 0;
      local_4e8[3] = 0;
      FUN_14837aca2(local_348,&local_4e8);
      if (local_4e8 != (int *)0x0) {
        FUN_1400020a8();
      }
      uVar29 = uStack_580;
      lVar24 = (longlong)(int)uStack_580;
      uVar14 = (int)uStack_580 + 1;
      uStack_580 = CONCAT44(uStack_580._4_4_,uVar14);
      if (uStack_580._4_4_ < uVar14) {
        FUN_1446f48e2(&local_588,uVar29 & 0xffffffff);
      }
      *(int *)(local_588 + lVar24 * 4) = iVar15;
    } while ((int)uStack_580 < iVar17);
  }
  FUN_14837af4a(&local_4e8,&local_248);
  plVar20 = local_608;
  if (param_3 == 1) {
    local_498 = 1;
    local_5c8 = local_600[2];
    local_5d8 = *local_600;
    uStack_5d0 = local_600[1];
    local_528 = (code *)0x0;
    local_518 = (longlong *)0x0;
    plVar18 = (longlong *)FUN_14001cc68(0x30,8);
    local_518 = local_478;
    ppcVar5 = ppcStack_480;
    pcVar6 = local_488;
    *plVar18 = (longlong)&PTR_LAB_14ae75400;
    plVar18[1] = (longlong)plVar20;
    plVar18[4] = local_5c8;
    plVar18[2] = local_5d8;
    plVar18[3] = uStack_5d0;
    plVar18[5] = (longlong)&local_248;
    if (plVar18 + 1 != (longlong *)0x0) {
      local_528 = FUN_143b1a920;
    }
    local_488 = local_528;
    ppcStack_480 = ppcStack_520;
    local_478 = plVar18;
    local_528 = pcVar6;
    ppcStack_520 = ppcVar5;
    uStack_510 = uStack_470;
    uStack_50c = uStack_46c;
    local_508 = local_468;
    uStack_504 = uStack_464;
    uStack_500 = uStack_460;
    uStack_4fc = uStack_45c;
    local_4f8 = local_458;
    uStack_4f4 = uStack_454;
    uStack_4f0 = uStack_450;
    uStack_4ec = uStack_44c;
    if (pcVar6 != (code *)0x0) {
      plVar18 = local_518;
      if (local_518 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_508;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  local_5d8 = 0;
  uStack_5d0 = 0;
  if (0 < (int)uStack_580) {
    lVar24 = 0;
    do {
      uVar29 = uStack_5d0;
      uVar2 = *(undefined4 *)(local_588 + lVar24 * 4);
      lVar26 = (longlong)(int)uStack_5d0;
      uVar14 = (int)uStack_5d0 + 1;
      uStack_5d0 = CONCAT44(uStack_5d0._4_4_,uVar14);
      if (uStack_5d0._4_4_ < uVar14) {
        FUN_1483b1600(&local_5d8,uVar29 & 0xffffffff);
      }
      lVar26 = lVar26 * 0x10;
      *(int *)(local_5d8 + lVar26) = (int)lVar24;
      *(undefined4 *)(local_5d8 + 4 + lVar26) = uVar2;
      *(undefined8 *)(local_5d8 + 8 + lVar26) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_580);
  }
  FUN_14837b1f6(&local_4e8,&local_5d8);
  local_5e8 = 0;
  uStack_5e0 = 0;
  FUN_140bfc200(&local_5e8,uStack_580 & 0xffffffff,1);
  local_5f8 = 0;
  uStack_5f0 = 0;
  lVar24 = *plVar20;
  uVar23 = *(int *)(lVar24 + 0x140) * 0x200 + *(int *)(lVar24 + 0x144);
  uVar14 = 0;
  if ((uVar23 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar24 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar19 = 1;
    if (1 < (int)uVar23) {
      uVar16 = uVar23;
    }
    do {
      uVar14 = uVar16;
      if (uVar16 == uVar19) break;
      uVar21 = uVar19 >> 9;
      uVar25 = uVar19 & 0x1ff;
      uVar14 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar24 + 0x148))[uVar21] +
                                         (ulonglong)uVar25 * 2) - 1U));
  }
  if (uVar14 != uVar23) {
    do {
      lVar26 = FUN_1483b1d08(&local_4e8,uVar14);
      if (((lVar26 == 0) || (*(char *)(lVar26 + 0x18) == '\0')) ||
         (lVar26 = (longlong)*(int *)(local_3a8 + (longlong)*(int *)(lVar26 + 8) * 0x10), lVar26 < 0
         )) {
        iVar17 = (int)uStack_5f0;
        uVar29 = uStack_5f0 & 0xffffffff;
        uVar16 = (int)uStack_5f0 + 1;
        uStack_5f0 = CONCAT44(uStack_5f0._4_4_,uVar16);
        plVar20 = &local_5f8;
        if (uStack_5f0._4_4_ < uVar16) {
          FUN_1446f48e2(&local_5f8,uVar29);
        }
      }
      else {
        lVar26 = lVar26 * 0x10;
        plVar20 = (longlong *)(local_5e8 + lVar26);
        iVar17 = *(int *)(local_5e8 + 8 + lVar26);
        *(uint *)(local_5e8 + 8 + lVar26) = iVar17 + 1U;
        if (*(uint *)(local_5e8 + 0xc + lVar26) < iVar17 + 1U) {
          FUN_1446f48e2(plVar20,iVar17);
        }
      }
      *(uint *)(*plVar20 + (longlong)iVar17 * 4) = uVar14;
      uVar16 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar23) {
        uVar16 = uVar23;
      }
      do {
        uVar19 = uVar16;
        if (uVar16 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar19 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar24 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar19;
    } while (uVar14 != uVar23);
  }
  plVar20 = local_608;
  if (0 < (int)uStack_5e0) {
    plVar18 = local_608 + 3;
    lVar24 = 0xc;
    lVar26 = 0;
    iVar17 = (int)uStack_5e0;
    do {
      lVar28 = local_5e8;
      if (0 < *(int *)(local_5e8 + -4 + lVar24)) {
        iVar17 = (int)plVar20[4];
        *(uint *)(plVar20 + 4) = iVar17 + 1U;
        if (*(uint *)((longlong)plVar20 + 0x24) < iVar17 + 1U) {
          FUN_140bfc2d4(plVar18,iVar17);
        }
        lVar27 = *plVar18;
        lVar22 = (longlong)iVar17 * 0x10;
        *(undefined8 *)(lVar27 + lVar22) = 0;
        *(undefined8 *)(lVar27 + lVar22) = *(undefined8 *)(lVar28 + -0xc + lVar24);
        *(undefined8 *)(lVar28 + -0xc + lVar24) = 0;
        *(undefined4 *)(lVar27 + 8 + lVar22) = *(undefined4 *)(lVar28 + -4 + lVar24);
        *(undefined4 *)(lVar27 + 0xc + lVar22) = *(undefined4 *)(lVar28 + lVar24);
        *(undefined8 *)(lVar28 + -4 + lVar24) = 0;
        iVar17 = (int)uStack_5e0;
      }
      lVar26 = lVar26 + 1;
      lVar24 = lVar24 + 0x10;
    } while (lVar26 < iVar17);
  }
  if (0 < (int)uStack_5f0) {
    local_528 = (code *)*plVar20;
    ppcStack_520 = (code **)0x0;
    local_518 = (longlong *)0x0;
    local_568 = 0;
    local_558 = 0;
    FUN_142984384(&local_528,&local_5f8);
    ppcVar5 = ppcStack_520;
    lVar24 = (longlong)(int)local_518;
    if (lVar24 != 0) {
      plVar20 = local_608 + 3;
      lVar26 = 0;
      do {
        puVar4 = *(undefined8 **)((longlong)ppcVar5 + lVar26);
        iVar17 = (int)local_608[4];
        *(uint *)(local_608 + 4) = iVar17 + 1U;
        if (*(uint *)((longlong)local_608 + 0x24) < iVar17 + 1U) {
          FUN_140bfc2d4(plVar20,iVar17);
        }
        lVar28 = *plVar20;
        lVar27 = (longlong)iVar17 * 0x10;
        puVar1 = (undefined8 *)(lVar28 + lVar27);
        *(undefined8 *)(lVar28 + lVar27) = 0;
        iVar17 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        *(int *)(lVar28 + 8 + lVar27) = iVar17;
        if ((longlong)iVar17 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(puVar1,iVar17,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar17 << 2);
        }
        lVar26 = lVar26 + 8;
      } while (lVar24 * 8 != lVar26);
    }
    FUN_146be9400(&ppcStack_520);
    plVar20 = local_608;
  }
  if (((char)plVar20[1] == '\x01') && (1 < *(int *)((longlong)plVar20 + 0xc))) {
    local_528 = FUN_146c90f06;
    ppcStack_520 = &local_e8;
    FUN_14837b596(plVar20);
  }
  if ((char)plVar20[2] == '\x01') {
    FUN_148376f96(plVar20);
  }
  lVar24 = plVar20[4];
  if (local_5f8 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_5e8,uStack_5e0 & 0xffffffff);
  if (local_5e8 != 0) {
    FUN_1400020a8();
  }
  if (local_5d8 != 0) {
    FUN_1400020a8();
  }
  FUN_14837b3f4(&local_4e8);
  if (local_5b8 != 0) {
    FUN_1400020a8();
  }
  FUN_146be9400(&local_598);
  if (local_588 != 0) {
    FUN_1400020a8();
  }
  FUN_14837b4ae(local_348);
  FUN_14837b538(&local_248);
  if (local_e8 != (code *)0x0) {
    plVar20 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar20 = &local_c8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar24;
}



// FUNCTION 14837a7a2 FUN_14837a7a2 body=78 status=ok
// SIG undefined FUN_14837a7a2(void)

undefined8 * FUN_14837a7a2(undefined8 *param_1)

{
  FUN_1483a3d76();
  *param_1 = &PTR_FUN_14ae74f40;
  FUN_146bee4b2(param_1 + 0x22);
  *param_1 = &PTR_FUN_14ae74f20;
  FUN_146bee4b2(param_1 + 0x25);
  FUN_146bee4b2(param_1 + 0x28);
  return param_1;
}



// FUNCTION 14837a7f0 FUN_14837a7f0 body=752 status=ok
// SIG undefined FUN_14837a7f0(void)

void FUN_14837a7f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  uint *local_98;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78 [6];
  uint local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar8 = 0;
  if (uVar6 != 0) {
    uVar8 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U)) {
      uVar9 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar8 = uVar9;
        if (uVar9 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar8 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
  }
  local_88 = param_2;
  if (uVar8 != uVar6) {
    iVar1 = *(int *)(param_1 + 0x158);
    iVar2 = *(int *)(param_1 + 0x15c);
    do {
      local_98 = local_78;
      FUN_146c1477c(param_1,uVar8,local_60,&local_80);
      if (iVar1 << 9 == -iVar2) {
        FUN_1483a445e(local_88,local_78,local_60);
      }
      else {
        local_98 = (uint *)CONCAT44(uStack_7c,local_80);
        FUN_1483a4532(local_88,uVar8,local_78,local_60);
      }
      uVar9 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar4 = uVar9;
        if (uVar9 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar4 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar4;
    } while (uVar8 != uVar6);
    uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  }
  uVar8 = 0;
  if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar4 = 1;
    if (1 < (int)uVar6) {
      uVar9 = uVar6;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar7 = uVar4 & 0x1ff;
      uVar8 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar8 != uVar6) {
    do {
      FUN_146c03f0e(param_1,local_60,uVar8);
      lVar10 = 0;
      do {
        uVar9 = local_60[lVar10];
        if ((((-1 < (int)uVar9) &&
             ((int)uVar9 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
            ((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar9 >> 9) * 8) +
                                (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
           (local_80 = uVar8, local_78[0] = uVar9,
           cVar3 = (*(code *)*param_3)(param_3[1],&local_80,local_78), cVar3 != '\0')) {
          FUN_1483a4604(local_88,uVar8,uVar9,0xffffffff);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      uVar9 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar4 = uVar9;
        if (uVar9 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar4 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar4;
    } while (uVar8 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837aae2 FUN_14837aae2 body=446 status=ok
// SIG undefined FUN_14837aae2(void)

longlong * FUN_14837aae2(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_146c3f08a(param_1 + 0xc);
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
  param_1[0x1f] = 0xffffffff;
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  FUN_146bd223a(param_1 + 0xd);
  local_88 = CONCAT44(local_88._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 0x11,&local_88,iVar1 * 0x200 + iVar2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_c8 = param_1[2];
  uStack_80 = param_1[3];
  local_b8 = (longlong *)param_1[4];
  uStack_70 = param_1[5];
  local_68 = param_1[6];
  lStack_60 = param_1[7];
  local_58 = param_1[8];
  uStack_50 = param_1[9];
  lVar5 = local_58;
  lVar6 = uStack_50;
  local_78 = local_b8;
  lVar4 = uStack_70;
  local_88 = local_c8;
  lVar3 = uStack_80;
  param_1[8] = CONCAT44(uStack_94,local_98);
  param_1[9] = CONCAT44(uStack_8c,uStack_90);
  param_1[6] = (longlong)&PTR_LAB_14ae753a0;
  param_1[7] = (longlong)param_1;
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_ac,uStack_b0);
  param_1[2] = (longlong)FUN_1483b0d8e;
  param_1[3] = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  lStack_a0 = lStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = lVar3;
  uStack_70 = lVar4;
  local_58 = lVar5;
  uStack_50 = lVar6;
  if (local_c8 != 0) {
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar7 = &local_a8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  FUN_1483b0d24(param_1);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837aca2 FUN_14837aca2 body=471 status=ok
// SIG undefined FUN_14837aca2(void)

void FUN_14837aca2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  if ((longlong)(int)param_2[1] != 0) {
    puVar12 = (undefined4 *)*param_2;
    puVar11 = puVar12 + (longlong)(int)param_2[1] * 4;
    local_78 = param_1 + 0x98;
    local_70 = param_1 + 0x60;
    do {
      local_64 = *(undefined4 *)(param_1 + 0xa0);
      local_60 = puVar12;
      local_58 = &local_64;
      FUN_140263e2a(param_1 + 0xa8,local_4c,&local_60,0);
      iVar3 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_1483b0f4e(local_78,iVar3);
      }
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 0x10);
      *puVar1 = *puVar12;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar9 = (longlong)(int)puVar12[1];
      if ((((*(int *)(param_1 + 0x90) + 1 < (int)puVar12[1]) ||
           (uVar4 = *(uint *)(*(longlong *)(param_1 + 0x88) + lVar9 * 4), (int)uVar4 < 1)) ||
          (*(int *)(param_1 + 0x80) < (int)uVar4)) ||
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar4 >> 9) * 8) + 8 +
                  (ulonglong)(uVar4 & 0x1ff) * 0xc) < 1)) {
        lVar10 = *(longlong *)(param_1 + 0x50);
        lVar8 = lVar9 * 0x20;
        dVar2 = *(double *)(puVar12 + 2);
        *(double *)(lVar10 + 0x10 + lVar8) = dVar2;
        *(undefined4 *)(lVar10 + 0x18 + lVar8) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(lVar10 + 8 + lVar8) = local_64;
        FUN_146b9cbf0(local_70,lVar9,(float)dVar2);
      }
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar11);
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      iVar3 = *(int *)(**(longlong **)(param_1 + 0x70) + 0xc);
      FUN_146bd26ea(param_1 + 0x60,1);
      lVar9 = *(longlong *)(param_1 + 0x50);
      lVar10 = (longlong)iVar3 * 0x20;
      *(undefined4 *)(lVar9 + 0x18 + lVar10) = *(undefined4 *)(param_1 + 0xfc);
      FUN_1483b0fd4(param_1,lVar9 + lVar10);
    } while (0 < *(int *)(param_1 + 0x80));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837ae7a FUN_14837ae7a body=208 status=ok
// SIG undefined FUN_14837ae7a(void)

ulonglong FUN_14837ae7a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = *param_1;
  uVar4 = *(int *)(lVar1 + 8) * 0x200 + *(int *)(lVar1 + 0xc);
  if ((int)uVar4 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    dVar7 = 0.0;
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar1 + 0x10) + (uVar6 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)((uint)uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar2 = param_1[10];
        dVar8 = 1.79769313486232e+308;
        if ((lVar2 + lVar5 != 0) &&
           (dVar8 = 1.79769313486232e+308, *(int *)(lVar2 + 0x18 + lVar5) != (int)param_1[0x1f])) {
          dVar8 = *(double *)(lVar2 + 0x10 + lVar5);
        }
        if (dVar8 != 1.79769313486232e+308 && dVar7 < dVar8) {
          uVar3 = uVar6 & 0xffffffff;
          dVar7 = dVar8;
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 != uVar6);
  }
  return uVar3;
}



// FUNCTION 14837af4a FUN_14837af4a body=683 status=ok
// SIG undefined FUN_14837af4a(void)

longlong * FUN_14837af4a(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_1483b14be(param_1 + 0x1e);
  FUN_146c3f08a(param_1 + 0x21);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  FUN_146bd223a(param_1 + 0x22);
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 0x26,&local_98,iVar1 * 0x200 + iVar2);
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  local_d8 = param_1[2];
  uStack_90 = param_1[3];
  local_c8 = (longlong *)param_1[4];
  uStack_80 = param_1[5];
  local_78 = param_1[6];
  lStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  lVar5 = local_68;
  lVar6 = uStack_60;
  local_88 = local_c8;
  lVar4 = uStack_80;
  local_98 = local_d8;
  lVar3 = uStack_90;
  param_1[8] = CONCAT44(uStack_a4,local_a8);
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = (longlong)&PTR_LAB_14ae753e0;
  param_1[7] = (longlong)param_1;
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_bc,uStack_c0);
  param_1[2] = (longlong)FUN_1483b15a6;
  param_1[3] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  lStack_b0 = lStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  if (local_d8 != 0) {
    plVar7 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar7 = &local_b8;
    }
    uStack_90 = lVar3;
    uStack_80 = lVar4;
    local_68 = lVar5;
    uStack_60 = lVar6;
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined1 *)(param_1 + 10) = 0;
  local_d8 = param_1[0xc];
  uStack_90 = param_1[0xd];
  local_c8 = (longlong *)param_1[0xe];
  uStack_80 = param_1[0xf];
  local_78 = param_1[0x10];
  lStack_70 = param_1[0x11];
  local_68 = param_1[0x12];
  uStack_60 = param_1[0x13];
  lVar5 = local_68;
  lVar6 = uStack_60;
  local_88 = local_c8;
  lVar4 = uStack_80;
  local_98 = local_d8;
  lVar3 = uStack_90;
  param_1[0x12] = CONCAT44(uStack_a4,local_a8);
  param_1[0x13] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x10] = (longlong)&PTR_LAB_14ae749f0;
  param_1[0x11] = (longlong)&LAB_1483b15fc;
  param_1[0xe] = 0;
  param_1[0xf] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0xc] = (longlong)&LAB_148373e58;
  param_1[0xd] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  lStack_b0 = lStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = lVar3;
  uStack_80 = lVar4;
  local_68 = lVar5;
  uStack_60 = lVar6;
  if (local_d8 != 0) {
    plVar7 = &local_b8;
    if (local_c8 != (longlong *)0x0) {
      plVar7 = local_c8;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837b1f6 FUN_14837b1f6 body=510 status=ok
// SIG undefined FUN_14837b1f6(void)

void FUN_14837b1f6(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) < 0) {
    FUN_1483b1c32(param_1 + 0x140);
  }
  lVar9 = param_2[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar6 = *param_2;
    pdVar13 = (double *)(lVar6 + 8);
    do {
      iVar2 = *(int *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x148) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x14c) < iVar2 + 1U) {
        FUN_1483b1600(param_1 + 0x140,iVar2);
      }
      uVar5 = *(undefined4 *)((longlong)pdVar13 + -4);
      uVar7 = *(undefined4 *)pdVar13;
      uVar8 = *(undefined4 *)((longlong)pdVar13 + 4);
      puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 0x10);
      *puVar11 = *(undefined4 *)(pdVar13 + -1);
      puVar11[1] = uVar5;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      iVar3 = *(int *)((longlong)pdVar13 + -4);
      if ((((*(int *)(param_1 + 0x138) + 1 < iVar3) ||
           (uVar4 = *(uint *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 4), (int)uVar4 < 1)
           ) || (*(int *)(param_1 + 0x128) < (int)uVar4)) ||
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar4 >> 9) * 8) + 8 +
                  (ulonglong)(uVar4 & 0x1ff) * 0xc) < 1)) {
        lVar10 = FUN_1483b1686(param_1,iVar3,1);
        dVar1 = *pdVar13;
        *(double *)(lVar10 + 0x10) = dVar1;
        *(undefined1 *)(lVar10 + 0x18) = 1;
        *(int *)(lVar10 + 8) = iVar2;
        FUN_146b9cbf0(param_1 + 0x108,iVar3,(float)dVar1);
      }
      pdVar12 = pdVar13 + 1;
      pdVar13 = pdVar13 + 2;
    } while (pdVar12 != (double *)((longlong)(int)lVar9 * 0x10 + lVar6));
  }
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      uVar5 = *(undefined4 *)(**(longlong **)(param_1 + 0x118) + 0xc);
      FUN_146bd26ea(param_1 + 0x108,1);
      puVar11 = (undefined4 *)FUN_1483b1686(param_1,uVar5,0);
      uVar14 = -(ulonglong)(*(double *)(param_1 + 0x150) <= *(double *)(puVar11 + 4));
      dVar1 = (double)(~uVar14 & (ulonglong)*(double *)(param_1 + 0x150) |
                      (ulonglong)*(double *)(puVar11 + 4) & uVar14);
      *(double *)(param_1 + 0x150) = dVar1;
      if (1.79769313486232e+308 < dVar1) {
        return;
      }
      *(undefined1 *)(puVar11 + 6) = 1;
      *(undefined4 *)(param_1 + 0x158) = *puVar11;
      FUN_1483b17ca(param_1,puVar11);
    } while (0 < *(int *)(param_1 + 0x128));
  }
  return;
}



// FUNCTION 14837b3f4 FUN_14837b3f4 body=186 status=ok
// SIG undefined FUN_14837b3f4(void)

void FUN_14837b3f4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_146b9cd14(param_1 + 0x108);
  FUN_1483a4b80(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00014837b4a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14837b4ae FUN_14837b4ae body=137 status=ok
// SIG undefined FUN_14837b4ae(void)

void FUN_14837b4ae(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146b9cd14(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00014837b52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14837b538 FUN_14837b538 body=93 status=ok
// SIG undefined FUN_14837b538(void)

void FUN_14837b538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae74f20;
  FUN_146bee5d0(param_1 + 0x29,0);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_146bee5d0(param_1 + 0x26,0);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1483a4068(param_1);
  return;
}



// FUNCTION 14837b596 FUN_14837b596 body=466 status=ok
// SIG undefined FUN_14837b596(void)

void FUN_14837b596(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  longlong **local_b0;
  undefined1 *local_a8;
  longlong **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = *param_2;
  local_d8 = &local_98;
  local_90 = param_2[1];
  local_a8 = &LAB_143b1bf20;
  local_c8 = param_1 + 3;
  local_a0 = &local_c0;
  FUN_148341c76(&local_88,*param_1);
  local_b8 = &LAB_143b1bf24;
  local_c0 = &local_88;
  local_b0 = &local_c0;
  cVar5 = FUN_14833b80a(&local_88,*(int *)((longlong)param_1 + 0xc) + -1);
  cVar6 = FUN_14833b89c(&local_88,0x19);
  if ((cVar5 != '\0') || (cVar6 != '\0')) {
    iVar2 = *(int *)((longlong)param_1 + 0x24);
    FUN_144716727(param_1[3],*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      FUN_1403b10bc(local_c8,0);
    }
    lVar10 = (longlong)(int)uStack_80;
    if (0 < lVar10) {
      lVar8 = 0x10;
      lVar9 = 0;
      do {
        lVar4 = local_88;
        if ((lVar9 < (int)uStack_80) && (*(char *)(local_88 + -0x10 + lVar8) != '\0')) {
          iVar2 = *(int *)(param_1 + 4);
          *(uint *)(param_1 + 4) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
            FUN_140bfc2d4(local_c8,iVar2);
          }
          lVar3 = *local_c8;
          lVar7 = (longlong)iVar2 * 0x10;
          puVar1 = (undefined8 *)(lVar3 + lVar7);
          *(undefined8 *)(lVar3 + lVar7) = 0;
          iVar2 = *(int *)(lVar4 + lVar8);
          _Src = *(void **)(lVar4 + -8 + lVar8);
          *(int *)(lVar3 + 8 + lVar7) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_144a06ca8(puVar1,iVar2,0);
            memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
          }
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x30;
      } while (lVar10 != lVar9);
    }
  }
  FUN_14833badc(&local_88);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837b76a FUN_14837b76a body=121 status=ok
// SIG undefined FUN_14837b76a(void)

void FUN_14837b76a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = lVar6 * 0x10;
      lVar5 = (longlong)*(int *)(lVar2 + 8 + lVar3);
      lVar6 = lVar6 + 1;
      if (0 < lVar5) {
        lVar4 = 0;
        do {
          FUN_14837b7e4(param_2,*(undefined4 *)(*(longlong *)(lVar2 + lVar3) + lVar4 * 4),
                        *(int *)(param_1 + 0x14) + (int)lVar6,param_3);
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
      }
    } while (lVar6 != iVar1);
  }
  return;
}



// FUNCTION 14837b7e4 FUN_14837b7e4 body=182 status=ok
// SIG undefined FUN_14837b7e4(void)

void FUN_14837b7e4(longlong param_1,uint param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_4 + 0x140) * 0x200 + *(int *)(param_4 + 0x144))) {
    uVar4 = (ulonglong)(param_2 >> 9);
    uVar2 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_4 + 0x148) + uVar4 * 8) + uVar2 * 2) -
                1U) < 0xfffe) {
      if (*(longlong *)(param_1 + 8) == 0) {
        if (*(char *)(param_4 + 0x1a8) == '\x01') {
          *(int *)(*(longlong *)(*(longlong *)(param_4 + 0x198) + uVar4 * 8) + uVar2 * 4) = param_3;
          iVar3 = *(int *)(param_4 + 0x1b0);
          if (*(int *)(param_4 + 0x1b0) < param_3 + 1) {
            iVar3 = param_3 + 1;
          }
          *(int *)(param_4 + 0x1b0) = iVar3;
        }
      }
      else {
        lVar1 = FUN_146c1a3fe(*(undefined8 *)(param_4 + 0x208),*(undefined4 *)(param_1 + 0x10));
        *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar4 * 8) + uVar2 * 4) = param_3;
      }
    }
  }
  iVar3 = param_3 + 1;
  if (param_3 + 1 <= *(int *)(param_1 + 0x14)) {
    iVar3 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



// FUNCTION 14837b89a FUN_14837b89a body=293 status=ok
// SIG undefined FUN_14837b89a(void)

bool FUN_14837b89a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  plVar1 = param_1 + 5;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    FUN_14481578e(plVar1,0);
  }
  lVar3 = *param_1;
  uVar9 = *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4);
  uVar8 = 0;
  if ((uVar9 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x1d8) - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar9) {
      uVar6 = uVar9;
    }
    do {
      uVar8 = uVar6;
      if (uVar6 == uVar7) break;
      uVar5 = uVar7 >> 9;
      uVar10 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x1d8))[uVar5] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  do {
    if (uVar8 == uVar9) {
      return 0 < (int)param_1[6];
    }
    cVar4 = FUN_146c13702(*param_1,uVar8);
    if (cVar4 != '\0') {
      iVar2 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
        FUN_1446f48e2(plVar1,iVar2);
      }
      *(uint *)(*plVar1 + (longlong)iVar2 * 4) = uVar8;
    }
    uVar6 = uVar8 + 1;
    if ((int)(uVar8 + 1) < (int)uVar9) {
      uVar6 = uVar9;
    }
    uVar7 = uVar8;
    do {
      uVar8 = uVar6;
      if (uVar6 - 1 == uVar7) break;
      uVar8 = uVar7 + 1;
      uVar7 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar3 + 0x1d8) +
                                           (ulonglong)(uVar8 >> 9) * 8) +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14837b9bf FUN_14837b9bf body=94 status=ok
// SIG undefined FUN_14837b9bf(void)

undefined8 FUN_14837b9bf(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        lVar3 = FUN_146c1a3fe(plVar1,iVar5);
        if (*(longlong *)(lVar3 + 8) == param_2) {
          uVar4 = FUN_146c1a3fe(plVar1,iVar5);
          return uVar4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return 0;
}



// FUNCTION 14837ba1d FUN_14837ba1d body=479 status=ok
// SIG undefined FUN_14837ba1d(void)

longlong * FUN_14837ba1d(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(uint *)(param_3 + 1) < 2) {
    FUN_14020fad6(param_3,L"group");
  }
  plVar2 = *(longlong **)(param_2 + 0x208);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if (iVar5 != 0) {
      local_58 = (void *)0x0;
      uVar1 = *(uint *)(param_3 + 1);
      pvVar3 = (void *)*param_3;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
      local_78 = param_1;
      if ((longlong)(int)uVar1 == 0) {
        uStack_50 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_58,uVar1,0);
        memcpy(local_58,pvVar3,(longlong)(int)uVar1 * 2);
      }
      if (0 < iVar5) {
        iVar9 = 0;
        local_70 = param_3;
        while( true ) {
          iVar10 = 0;
          bVar4 = false;
          do {
            bVar11 = bVar4;
            lVar6 = FUN_146c19ec6(plVar2,iVar10);
            pvVar3 = *(void **)(lVar6 + 8);
            iVar7 = (int)uStack_50 + -1;
            if ((int)uStack_50 == 0) {
              iVar7 = 0;
            }
            FUN_1446f82e2(&local_68,iVar7,local_58,1);
            bVar12 = pvVar3 == local_68;
            iVar10 = iVar10 + 1;
            bVar4 = (bool)(bVar11 | bVar12);
          } while (iVar5 != iVar10);
          param_3 = local_70;
          if (!bVar11 && !bVar12) break;
          puVar8 = &DAT_149dfb77a;
          if ((int)local_70[1] != 0) {
            puVar8 = (undefined2 *)*local_70;
          }
          FUN_140002266(&local_68,L"%s_%d",puVar8,iVar9);
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar9 = iVar9 + 1;
          local_58 = local_68;
          uStack_50 = uStack_60;
        }
      }
      param_1 = local_78;
      *local_78 = (longlong)local_58;
      local_58 = (void *)0x0;
      *(int *)(local_78 + 1) = (int)uStack_50;
      *(undefined4 *)((longlong)local_78 + 0xc) = uStack_50._4_4_;
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14837bb92;
    }
  }
  *param_1 = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 1) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
LAB_14837bb92:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837bbfe FUN_14837bbfe body=438 status=ok
// SIG undefined FUN_14837bbfe(void)

undefined4 * FUN_14837bbfe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  undefined1 auStack_148 [40];
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong *local_100 [3];
  longlong local_e8 [4];
  undefined1 local_c8;
  undefined8 local_a0 [3];
  undefined8 local_88 [4];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = 0x7fefffffffffffff;
  local_108 = 0;
  local_100[1] = (longlong *)0x0;
  local_c8 = 0;
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                    (*(longlong **)(param_1 + 0x10),param_3,local_120,&local_118);
  if (local_108 != 0) {
    plVar8 = local_100[1];
    if (local_100[1] == (longlong *)0x0) {
      plVar8 = local_e8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((int)uVar7 < 0) {
    *(undefined8 *)(param_2 + 4) = param_3[2];
    uVar3 = *(undefined4 *)((longlong)param_3 + 4);
    uVar4 = *(undefined4 *)(param_3 + 1);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_2 = *(undefined4 *)param_3;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
    uVar9 = (ulonglong)(uVar7 & 0x1ff);
    uVar7 = *(uint *)(lVar1 + uVar9 * 0xc);
    lVar2 = *(longlong *)(lVar10 + (ulonglong)(uVar7 >> 9) * 8);
    uVar13 = (ulonglong)uVar7 & 0x1ff;
    local_88[2] = *(undefined8 *)(lVar2 + 0x10 + uVar13 * 0x18);
    puVar11 = (undefined8 *)(lVar2 + uVar13 * 0x18);
    local_88[0] = *puVar11;
    local_88[1] = puVar11[1];
    uVar7 = *(uint *)(lVar1 + 4 + uVar9 * 0xc);
    lVar2 = *(longlong *)(lVar10 + (ulonglong)(uVar7 >> 9) * 8);
    uVar13 = (ulonglong)uVar7 & 0x1ff;
    local_60 = *(undefined8 *)(lVar2 + 0x10 + uVar13 * 0x18);
    puVar11 = (undefined8 *)(lVar2 + uVar13 * 0x18);
    local_88[3] = *puVar11;
    uStack_68 = puVar11[1];
    uVar7 = *(uint *)(lVar1 + 8 + uVar9 * 0xc);
    lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar7 >> 9) * 8);
    uVar9 = (ulonglong)uVar7 & 0x1ff;
    local_48 = *(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18);
    puVar11 = (undefined8 *)(lVar10 + uVar9 * 0x18);
    local_58 = *puVar11;
    uStack_50 = puVar11[1];
    local_108 = param_3[2];
    local_118 = *param_3;
    uStack_110 = *(undefined4 *)(param_3 + 1);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar11 = local_88;
    pplVar12 = local_100;
    for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pplVar12 = (longlong *)*puVar11;
      puVar11 = puVar11 + 1;
      pplVar12 = pplVar12 + 1;
    }
    FUN_146bd2a7a(&local_118);
    cVar6 = FUN_146bfed03(local_a0);
    if (cVar6 != '\0') {
      param_3 = local_a0;
    }
    uVar3 = *(undefined4 *)((longlong)param_3 + 4);
    uVar4 = *(undefined4 *)(param_3 + 1);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_2 = *(undefined4 *)param_3;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *(undefined8 *)(param_2 + 4) = param_3[2];
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837bdb6 FUN_14837bdb6 body=505 status=ok
// SIG undefined FUN_14837bdb6(void)

undefined4 *
FUN_14837bdb6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [40];
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong *local_100 [3];
  longlong local_e8 [4];
  undefined1 local_c8;
  undefined8 local_a0 [3];
  undefined8 local_88 [4];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = 0x7fefffffffffffff;
  local_108 = 0;
  local_100[1] = (longlong *)0x0;
  local_c8 = 0;
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                    (*(longlong **)(param_1 + 0x10),param_3,local_120,&local_118);
  if (local_108 != 0) {
    plVar9 = local_100[1];
    if (local_100[1] == (longlong *)0x0) {
      plVar9 = local_e8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((int)uVar8 < 0) {
    *(undefined8 *)(param_2 + 4) = param_3[2];
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_2 = *(undefined4 *)param_3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
    uVar14 = (ulonglong)(uVar8 & 0x1ff);
    uVar8 = *(uint *)(lVar2 + uVar14 * 0xc);
    lVar3 = *(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8);
    uVar13 = (ulonglong)uVar8 & 0x1ff;
    local_88[2] = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
    puVar11 = (undefined8 *)(lVar3 + uVar13 * 0x18);
    local_88[0] = *puVar11;
    local_88[1] = puVar11[1];
    uVar8 = *(uint *)(lVar2 + 4 + uVar14 * 0xc);
    lVar3 = *(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8);
    uVar13 = (ulonglong)uVar8 & 0x1ff;
    local_60 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
    puVar11 = (undefined8 *)(lVar3 + uVar13 * 0x18);
    local_88[3] = *puVar11;
    uStack_68 = puVar11[1];
    uVar8 = *(uint *)(lVar2 + 8 + uVar14 * 0xc);
    lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8);
    uVar13 = (ulonglong)uVar8 & 0x1ff;
    local_48 = *(undefined8 *)(lVar10 + 0x10 + uVar13 * 0x18);
    puVar1 = (undefined4 *)(lVar10 + uVar13 * 0x18);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    FUN_146baf581(&local_118,local_88,local_88 + 3,&local_58);
    param_4[2] = local_108;
    *param_4 = local_118;
    param_4[1] = CONCAT44(uStack_10c,uStack_110);
    local_108 = param_3[2];
    local_118 = *param_3;
    uStack_110 = *(undefined4 *)(param_3 + 1);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar11 = local_88;
    pplVar12 = local_100;
    for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pplVar12 = (longlong *)*puVar11;
      puVar11 = puVar11 + 1;
      pplVar12 = pplVar12 + 1;
    }
    FUN_146bd2a7a(&local_118);
    cVar7 = FUN_146bfed03(local_a0);
    if (cVar7 != '\0') {
      param_3 = local_a0;
    }
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_2 = *(undefined4 *)param_3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    *(undefined8 *)(param_2 + 4) = param_3[2];
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837bfb0 FUN_14837bfb0 body=418 status=ok
// SIG undefined FUN_14837bfb0(void)

void FUN_14837bfb0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  uint *local_78;
  undefined1 *local_70;
  uint *local_68;
  uint local_60 [2];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145a22d80(param_1 + 0x56);
  if (0 < (int)param_1[0x54]) {
    iVar5 = 0;
    do {
      cVar2 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar2 != '\0') goto LAB_14837c100;
      iVar4 = FUN_14837c154(param_1);
      *(int *)((longlong)param_1 + 0x254) = iVar4;
    } while ((0.01 <= (double)iVar4 / (double)*(int *)(param_1[1] + 0x200)) &&
            (iVar5 = iVar5 + 1, iVar5 < (int)param_1[0x54]));
  }
  FUN_145a22d80(param_1 + 0x56);
  lVar1 = param_1[0x27];
  if (1 < *(int *)((longlong)param_1 + 0x2a4)) {
    uVar6 = 0;
    do {
      cVar2 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar2 != '\0') break;
      uVar3 = (char)(uVar6 & 1);
      if ((uVar6 & 1) != 0) {
        uVar3 = (char)lVar1;
      }
      *(undefined1 *)(param_1 + 0x27) = uVar3;
      local_70 = &LAB_143b1bf8a;
      local_68 = local_60;
      local_60[0] = uVar6;
      local_58 = param_1;
      FUN_14837c7a2(param_1,&local_70);
      if (10 < (int)local_60[0]) {
        if ((double)*(int *)((longlong)local_58 + 0x254) / (double)*(int *)(local_58[1] + 0x200) <
            (double)local_58[0x55]) break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)((longlong)param_1 + 0x2a4) + -1);
  }
  cVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0x27) = (char)lVar1;
    local_78 = local_60;
    local_80 = &LAB_143b1bfbe;
    FUN_14837c7a2(param_1);
  }
LAB_14837c100:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837c154 FUN_14837c154 body=1612 status=ok
// SIG undefined FUN_14837c154(void)

int FUN_14837c154(longlong *param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_108 [40];
  double local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1[1] + 0x170) == 0) {
    iVar13 = 0;
  }
  else {
    *(int *)(param_1 + 0x72) = (int)param_1[0x2a];
    param_1[0x73] = param_1[0x2d];
    *(int *)(param_1 + 0x74) = (int)param_1[0x2e];
    *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)((longlong)param_1 + 0x174);
    *(int *)(param_1 + 0x75) = (int)param_1[0x2f];
    *(undefined4 *)((longlong)param_1 + 0x3ac) = *(undefined4 *)((longlong)param_1 + 0x17c);
    *(int *)(param_1 + 0x76) = (int)param_1[0x30];
    *(char *)((longlong)param_1 + 0x3b4) = (char)param_1[0x27];
    *(undefined1 *)((longlong)param_1 + 0x153) = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
    (**(code **)(*param_1 + 200))();
    (**(code **)(*param_1 + 0xd8))(param_1);
    local_e0 = (double)param_1[0x2e] * (double)param_1[0x2e];
    local_d8 = (longlong *)param_1[0x6a];
    uStack_d0 = (longlong *)param_1[0x6b];
    local_c8 = (longlong *)param_1[0x6c];
    plVar12 = (longlong *)param_1[0x6d];
    local_b8 = param_1[0x6e];
    lStack_60 = param_1[0x6f];
    local_58 = param_1[0x70];
    lVar3 = param_1[0x71];
    uStack_a8 = (undefined4)local_58;
    uStack_a4 = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_b0 = (undefined4)lStack_60;
    uStack_ac = (undefined4)((ulonglong)lStack_60 >> 0x20);
    param_1[0x70] = (longlong)&local_e0;
    param_1[0x71] = CONCAT44(uStack_4c,uStack_50);
    param_1[0x6e] = (longlong)&PTR_LAB_14ae754f0;
    param_1[0x6f] = (longlong)param_1;
    param_1[0x6c] = 0;
    param_1[0x6d] = CONCAT44(uStack_6c,uStack_70);
    param_1[0x6a] = (longlong)FUN_143b1bfc2;
    param_1[0x6b] = (longlong)plStack_80;
    uStack_c0._0_4_ = (uint)plVar12;
    uStack_c0._4_4_ = (int)((ulonglong)plVar12 >> 0x20);
    uStack_a0._0_4_ = (undefined4)lVar3;
    uStack_a0._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_50 = (undefined4)uStack_a0;
    uStack_4c = uStack_a0._4_4_;
    local_68 = local_b8;
    uStack_70 = (uint)uStack_c0;
    uStack_6c = uStack_c0._4_4_;
    uStack_c0 = plVar12;
    uStack_a0 = lVar3;
    local_88 = local_d8;
    plStack_80 = uStack_d0;
    local_78 = local_c8;
    if (local_d8 != (longlong *)0x0) {
      plVar12 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar12 = &local_68;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    pplVar1 = (longlong **)(param_1 + 0x56);
    if (*(int *)((longlong)param_1 + 700) == -1) {
      uVar16 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_d8 = (longlong *)0x0;
      uStack_d0 = (longlong *)0x0;
      uStack_ac = 0x80;
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      if (&local_d8 != pplVar1) {
        FUN_146be9af0(pplVar1,&local_d8);
        local_90 = 0;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1447a082e(&local_d8);
      lVar3 = param_1[1];
      uVar14 = *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4);
      if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x1d8) - 1U))) {
        uVar16 = 1;
        uVar15 = 1;
        if (1 < (int)uVar14) {
          uVar16 = (ulonglong)uVar14;
        }
        do {
          uVar11 = uVar15;
          if ((uint)uVar16 == uVar11) goto LAB_14837c37b;
          uVar15 = uVar11 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x1d8))[uVar11 >> 9] +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        uVar16 = (ulonglong)uVar11;
      }
LAB_14837c37b:
      iVar13 = 0;
      plVar7 = uStack_c0;
      if ((uint)uVar16 != uVar14) {
        iVar13 = 0;
        do {
          cVar8 = (**(code **)(*param_1 + 8))(param_1);
          plVar7 = uStack_c0;
          if (cVar8 != '\0') break;
          uVar15 = (uint)uVar16;
          if (((-1 < (int)uVar15) &&
              (lVar4 = param_1[1],
              (int)uVar15 < *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4))) &&
             (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x1d8) + (uVar16 >> 9) * 8) +
                                  (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe &&
              (iVar9 = (**(code **)(*param_1 + 0x68))(param_1,uVar16), iVar9 == 2)))) {
            *(int *)((longlong)param_1 + 0x254) = *(int *)((longlong)param_1 + 0x254) + 1;
            iVar13 = iVar13 + 1;
          }
          uVar11 = uVar15 + 1;
          if ((int)(uVar15 + 1) < (int)uVar14) {
            uVar11 = uVar14;
          }
          do {
            if (uVar11 - 1 == (int)uVar16) {
              uVar16 = (ulonglong)uVar11;
              break;
            }
            uVar15 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar3 + 0x1d8) +
                                                 (ulonglong)(uVar15 >> 9) * 8) +
                                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
          plVar7 = uStack_c0;
        } while ((uint)uVar16 != uVar14);
      }
    }
    else {
      plVar12 = param_1 + 0x60;
      FUN_145be27ca(plVar12,pplVar1);
      FUN_1402226aa(pplVar1);
      plVar2 = param_1 + 0x62;
      iVar9 = (int)param_1[0x65];
      local_88 = (longlong *)0x100000000;
      local_78 = (longlong *)&DAT_ffffffff;
      uStack_70 = 0;
      plStack_80 = plVar2;
      if (iVar9 != 0) {
        FUN_1449c0562(&local_88);
      }
      uStack_d0 = local_88;
      local_c8 = plStack_80;
      uStack_c0 = local_78;
      plVar7 = uStack_c0;
      local_b8 = CONCAT44(uStack_6c,uStack_70);
      uStack_c0._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      if ((uStack_c0._4_4_ != iVar9) || (iVar13 = 0, local_d8 = plVar12, plStack_80 != plVar2)) {
        iVar13 = 0;
        iVar10 = uStack_c0._4_4_;
        local_d8 = plVar12;
        uStack_c0 = plVar7;
        do {
          uVar14 = *(uint *)(*local_d8 + (longlong)iVar10 * 0xc);
          cVar8 = (**(code **)(*param_1 + 8))(param_1);
          plVar7 = uStack_c0;
          if (cVar8 != '\0') break;
          if ((((-1 < (int)uVar14) &&
               (lVar3 = param_1[1],
               (int)uVar14 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) &&
              ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar14 >> 9) * 8) +
                                  (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
             (iVar10 = (**(code **)(*param_1 + 0x68))(param_1,uVar14), iVar10 == 2)) {
            *(int *)((longlong)param_1 + 0x254) = *(int *)((longlong)param_1 + 0x254) + 1;
            iVar13 = iVar13 + 1;
          }
          uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
          FUN_1449c0562(&uStack_d0);
          iVar10 = uStack_c0._4_4_;
          plVar7 = uStack_c0;
        } while (local_d8 != plVar12 || (local_c8 != plVar2 || uStack_c0._4_4_ != iVar9));
      }
    }
    uStack_c0 = plVar7;
    (**(code **)(*param_1 + 0xe0))(param_1);
    local_d8 = (longlong *)param_1[0x6a];
    uStack_d0 = (longlong *)param_1[0x6b];
    local_c8 = (longlong *)param_1[0x6c];
    lVar3 = param_1[0x6d];
    local_b8 = param_1[0x6e];
    lVar4 = param_1[0x6f];
    lVar5 = param_1[0x70];
    lVar6 = param_1[0x71];
    uStack_a8 = (undefined4)lVar5;
    uStack_a4 = (undefined4)((ulonglong)lVar5 >> 0x20);
    uStack_b0 = (undefined4)lVar4;
    uStack_ac = (undefined4)((ulonglong)lVar4 >> 0x20);
    param_1[0x70] = local_58;
    param_1[0x71] = CONCAT44(uStack_4c,uStack_50);
    param_1[0x6e] = local_68;
    param_1[0x6f] = lStack_60;
    param_1[0x6c] = 0;
    param_1[0x6d] = CONCAT44(uStack_6c,uStack_70);
    param_1[0x6a] = 0;
    param_1[0x6b] = (longlong)plStack_80;
    uStack_c0._0_4_ = (uint)lVar3;
    uStack_c0._4_4_ = (int)((ulonglong)lVar3 >> 0x20);
    uStack_a0._0_4_ = (undefined4)lVar6;
    uStack_a0._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    local_58 = lVar5;
    uStack_50 = (undefined4)uStack_a0;
    uStack_4c = uStack_a0._4_4_;
    local_68 = local_b8;
    lStack_60 = lVar4;
    uStack_70 = (uint)uStack_c0;
    uStack_6c = uStack_c0._4_4_;
    uStack_c0 = (longlong *)lVar3;
    uStack_a0 = lVar6;
    local_88 = local_d8;
    plStack_80 = uStack_d0;
    local_78 = local_c8;
    if (local_d8 != (longlong *)0x0) {
      plVar12 = &local_68;
      if (local_c8 != (longlong *)0x0) {
        plVar12 = local_c8;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    *(int *)(param_1 + 0x2a) = (int)param_1[0x72];
    param_1[0x2d] = param_1[0x73];
    *(int *)(param_1 + 0x2e) = (int)param_1[0x74];
    *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_1 + 0x3a4);
    *(int *)(param_1 + 0x2f) = (int)param_1[0x75];
    *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_1 + 0x3ac);
    *(int *)(param_1 + 0x30) = (int)param_1[0x76];
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)((longlong)param_1 + 0x3b4);
    (**(code **)(*param_1 + 0xd0))(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar13;
}



// FUNCTION 14837c7a2 FUN_14837c7a2 body=965 status=ok
// SIG undefined FUN_14837c7a2(void)

void FUN_14837c7a2(longlong *param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  if (*(int *)(param_1[1] + 0x170) != 0) {
    (**(code **)(*param_1 + 200))();
    (**(code **)(*param_1 + 0xd8))(param_1);
    pplVar1 = (longlong **)(param_1 + 0x56);
    local_c0 = param_1;
    if (*(int *)((longlong)param_1 + 700) == -1) {
      uStack_78 = 0;
      local_70 = 0;
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if (&local_98 != pplVar1) {
        FUN_146be9af0(pplVar1,&local_98);
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1447a082e(&local_98);
      uVar7 = (**(code **)(*param_1 + 0x58))(param_1);
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
      do {
        cVar6 = (**(code **)(*param_1 + 8))(param_1);
        uVar5 = local_80;
        if (cVar6 != '\0') break;
        if (((-1 < (int)uVar7) &&
            (lVar4 = param_1[1],
            (int)uVar7 < *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x1d8) + (ulonglong)(uVar7 >> 9) * 8) +
                               (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          FUN_143b138d8(&local_c0,uVar7);
        }
        uVar7 = (**(code **)(*param_1 + 0x60))(param_1,uVar7,&local_98);
        bVar10 = (char)local_98 == '\0';
        uVar5 = local_80;
      } while (bVar10);
    }
    else {
      plVar2 = param_1 + 0x60;
      FUN_145be27ca(plVar2,pplVar1);
      FUN_1402226aa(pplVar1);
      plVar3 = param_1 + 0x62;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      uStack_a0 = 0;
      plStack_b0 = plVar3;
      if ((int)param_1[0x65] == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar9 = (int)param_1[0x65];
      }
      uStack_90 = local_b8;
      local_88 = plStack_b0;
      uStack_78 = CONCAT44(uStack_9c,uStack_a0);
      local_80 = local_a8;
      uVar5 = local_80;
      local_80._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      local_98 = plVar2;
      if ((local_80._4_4_ != iVar9) || (plStack_b0 != plVar3)) {
        iVar8 = local_80._4_4_;
        local_80 = uVar5;
        do {
          uVar7 = *(uint *)(*local_98 + (longlong)iVar8 * 0xc);
          cVar6 = (**(code **)(*param_1 + 8))(param_1);
          uVar5 = local_80;
          if (cVar6 != '\0') break;
          if (((-1 < (int)uVar7) &&
              (lVar4 = param_1[1],
              (int)uVar7 < *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar4 + 0x1d8) + (ulonglong)(uVar7 >> 9) * 8) +
                                 (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            FUN_143b138d8(&local_c0,uVar7);
          }
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
          FUN_1449c0562(&uStack_90);
          iVar8 = local_80._4_4_;
          uVar5 = local_80;
        } while (local_98 != plVar2 || (local_88 != plVar3 || local_80._4_4_ != iVar9));
      }
    }
    local_80 = uVar5;
    (**(code **)(*param_1 + 0xe0))(param_1);
    cVar6 = (*(code *)*param_2)(param_2[1]);
    if ((cVar6 == '\0') && (cVar6 = (**(code **)(*param_1 + 8))(param_1), cVar6 == '\0')) {
      (**(code **)(*param_1 + 0xe8))(param_1);
      if ((*(char *)((longlong)param_1 + 0x153) == '\x01') && (0.0 < (double)param_1[0x2f])) {
        FUN_14837cb68(param_1,*(undefined1 *)((longlong)param_1 + 0x251));
        (**(code **)(*param_1 + 0x28))(param_1,0);
      }
      (**(code **)(*param_1 + 0xf0))(param_1);
      cVar6 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar6 == '\0') {
        (**(code **)(*param_1 + 0xf8))(param_1);
        if ((param_1[0x1a] != 0) && ((char)param_1[0x27] == '\x01')) {
          (**(code **)(*param_1 + 0x138))(param_1,(char)param_1[0x4a]);
          (**(code **)(*param_1 + 0x28))(param_1,0);
        }
        (**(code **)(*param_1 + 0x100))(param_1);
        (**(code **)(*param_1 + 0xd0))(param_1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837cb68 FUN_14837cb68 body=362 status=ok
// SIG undefined FUN_14837cb68(void)

void FUN_14837cb68(longlong *param_1,char param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_118 [47];
  undefined1 local_e9;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  longlong *local_c0;
  longlong *local_b8;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1);
    (**(code **)(*param_1 + 0xa0))(param_1,local_68);
    local_d8 = (undefined ***)0x0;
    local_c8 = &PTR_LAB_14ae75530;
    local_e8[0] = FUN_143b1c5d6;
    local_c0 = param_1;
    local_b8 = local_68;
    (**(code **)(*param_1 + 0x98))(param_1,local_e8);
    if (local_e8[0] != (code *)0x0) {
      pppuVar1 = local_d8;
      if (local_d8 == (undefined ***)0x0) {
        pppuVar1 = &local_c8;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    (**(code **)(*param_1 + 0x80))(param_1,0);
    local_e8[0] = (code *)&local_e9;
    FUN_1483b1d98(param_1 + 0x56);
    FUN_144a56d22(param_1 + 0x56);
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,local_68);
    local_98 = 0;
    local_88 = &PTR_LAB_14ae75510;
    local_a8 = FUN_143b1c4f6;
    local_80 = local_68;
    local_78 = param_1;
    FUN_14837ce7a(param_1);
  }
  if (local_68[0] != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837ccd4 FUN_14837ccd4 body=220 status=ok
// SIG undefined FUN_14837ccd4(void)

void FUN_14837ccd4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14837cdb2();
  if (*(int *)(param_1 + 0x268) * 0x200 + *(int *)(param_1 + 0x26c) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (uVar4 >> 9) * 8);
      uVar6 = (ulonglong)((uint)uVar4 & 0x1ff);
      uVar4 = uVar4 + 1;
      puVar1 = (undefined8 *)(lVar3 + uVar6 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar3 + 0x10 + uVar6 * 0x18) = 0;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x268) * 0x200 + *(int *)(param_1 + 0x26c)));
  }
  iVar2 = *(int *)(param_1 + 0x3c0);
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x1d0) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x1d4);
  if (iVar2 < iVar5) {
    FUN_1448c4dd6(param_1 + 0x3b8,iVar5 * 2,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
    iVar2 = *(int *)(param_1 + 0x3c0);
  }
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x3b8,&local_19,iVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837cdb2 FUN_14837cdb2 body=198 status=ok
// SIG undefined FUN_14837cdb2(void)

void FUN_14837cdb2(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 8) + 0x24);
  if (*(int *)(param_1 + 0x268) * 0x200 + *(int *)(param_1 + 0x26c) < iVar2) {
    FUN_146bee1a4(param_1 + 0x268,iVar2 / 5 + iVar2);
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
            *(int *)(*(longlong *)(param_1 + 8) + 0x24);
  }
  iVar1 = *(int *)(param_1 + 0x288);
  if (iVar1 < iVar2) {
    FUN_1448c4dd6(param_1 + 0x280,iVar2 * 2,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
    iVar1 = *(int *)(param_1 + 0x288);
  }
  local_19 = 0;
  FUN_14475e60e(param_1 + 0x280,&local_19,iVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837ce7a FUN_14837ce7a body=759 status=ok
// SIG undefined FUN_14837ce7a(void)

void FUN_14837ce7a(code **param_1,longlong *param_2)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  code ***local_c8;
  code **local_b8;
  code ***local_b0;
  code *local_a8;
  undefined8 local_a0;
  code **local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_1 + 0x78))();
  local_88 = *param_2;
  local_78[0] = (longlong *)0x0;
  local_98 = param_1;
  if (local_88 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,local_78);
  }
  local_c8 = (code ***)&local_a8;
  local_a8 = (code *)0x0;
  local_a0 = (code ***)((ulonglong)local_a0._4_4_ << 0x20);
  local_b8 = (code **)FUN_143b1c20a;
  local_d0 = 0;
  local_b0 = &local_98;
  FUN_1427ae281(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24),1,&local_b8);
  if (local_88 != 0) {
    plVar4 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar4 = local_68;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_98 = (code **)0x0;
  local_90 = 0;
  local_a8 = FUN_143b1c304;
  local_d0 = 0;
  local_c8 = &local_98;
  local_b8 = param_1;
  local_a0 = &local_b8;
  FUN_1427ae281(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  pcVar1 = param_1[1];
  uVar6 = *(int *)(pcVar1 + 0x1d0) * 0x200 + *(int *)(pcVar1 + 0x1d4);
  uVar8 = 0;
  if ((uVar6 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(pcVar1 + 0x1d8) - 1U))) {
    uVar9 = 1;
    uVar3 = 1;
    if (1 < (int)uVar6) {
      uVar9 = uVar6;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar3) break;
      uVar5 = uVar3 >> 9;
      uVar7 = uVar3 & 0x1ff;
      uVar8 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pcVar1 + 0x1d8))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar8 != uVar6) {
    do {
      if ((((-1 < (int)uVar8) &&
           (pcVar2 = param_1[1],
           (int)uVar8 < *(int *)(pcVar2 + 0x1d0) * 0x200 + *(int *)(pcVar2 + 0x1d4))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(pcVar2 + 0x1d8) + (ulonglong)(uVar8 >> 9) * 8) +
                              (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (param_1[0x77][uVar8] == (code)0x1)) {
        local_98 = (code **)CONCAT44(local_98._4_4_,uVar8);
        FUN_1447cbafe(param_1 + 0x56,&local_a8,&local_98,0);
      }
      uVar9 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar3 = uVar9;
        if (uVar9 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar3 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(pcVar1 + 0x1d8) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar3;
    } while (uVar8 != uVar6);
  }
  (**(code **)(*param_1 + 0x80))(param_1,1);
  local_98 = &local_a8;
  FUN_1483b1d98(param_1 + 0x56);
  FUN_144a56d22(param_1 + 0x56);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837d172 FUN_14837d172 body=260 status=ok
// SIG undefined FUN_14837d172(void)

void FUN_14837d172(longlong *param_1,char param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong *local_70;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1);
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_LAB_14ae75570;
    local_98[0] = FUN_143b1cad2;
    local_70 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,local_98);
    if (local_98[0] != (code *)0x0) {
      pppuVar1 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar1 = &local_78;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    (**(code **)(*param_1 + 0x80))(param_1,0);
    local_98[0] = (code *)&local_99;
    FUN_1483b1d98(param_1 + 0x56);
    FUN_144a56d22(param_1 + 0x56);
  }
  else {
    local_48 = 0;
    local_38 = &PTR_LAB_14ae75550;
    local_58 = FUN_143b1c8c0;
    local_30 = param_1;
    FUN_14837ce7a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837d278 FUN_14837d278 body=37 status=ok
// SIG undefined FUN_14837d278(void)

void FUN_14837d278(longlong param_1,double param_2)

{
  *(double *)(param_1 + 0x168) = param_2 * 0.66;
  *(double *)(param_1 + 0x170) = param_2 * 1.33;
  return;
}



// FUNCTION 14837d29e FUN_14837d29e body=271 status=ok
// SIG undefined FUN_14837d29e(void)

void FUN_14837d29e(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined1 *)(param_1 + 600) = 1;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4);
  uVar4 = 0;
  if ((uVar2 != 0) &&
     (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) {
    uVar5 = 1;
    uVar6 = 1;
    if (1 < (int)uVar2) {
      uVar5 = uVar2;
    }
    do {
      uVar4 = uVar5;
      if (uVar5 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar3 = uVar6 & 0x1ff;
      uVar4 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x1d8))[uVar7] +
                                         (ulonglong)uVar3 * 2) - 1U));
  }
  if (uVar4 != uVar2) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar4 & 0x1ff) << 4)) == -1) {
        *(undefined1 *)(param_1 + 600) = 0;
        return;
      }
      uVar5 = uVar4 + 1;
      if ((int)(uVar4 + 1) < (int)uVar2) {
        uVar5 = uVar2;
      }
      do {
        uVar6 = uVar5;
        if (uVar5 - 1 == uVar4) break;
        uVar4 = uVar4 + 1;
        uVar6 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x1d8) +
                                             (ulonglong)(uVar4 >> 9) * 8) +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      uVar4 = uVar6;
    } while (uVar4 != uVar2);
  }
  return;
}



// FUNCTION 14837d3ae FUN_14837d3ae body=2902 status=ok
// SIG undefined FUN_14837d3ae(void)

undefined4 FUN_14837d3ae(longlong *param_1,uint param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  longlong *plVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  int local_1d0;
  int local_1c8;
  int local_1c0;
  uint *local_1b8;
  int local_1a8;
  uint local_1a4;
  longlong *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined4 uStack_16c;
  double dStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  double dStack_110;
  double local_108;
  undefined4 local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8 [2];
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1482b3534();
  plVar18 = param_1 + 2;
  if ((char)param_1[0x19] == '\0') {
    local_e8[0] = 0;
    local_e0 = 0;
    local_d8 = 0xffffffff;
  }
  else {
    FUN_1482b3344(plVar18,local_e8,param_2);
    uVar22 = 4;
    if ((~local_e8[0] & 7) == 0) goto LAB_14837d7ec;
  }
  lVar34 = param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(lVar34 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar25 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar33 = *(uint *)(lVar3 + uVar25);
  plVar29 = (longlong *)(ulonglong)uVar33;
  uVar2 = *(uint *)(lVar3 + 4 + uVar25);
  uVar19 = (ulonglong)uVar2;
  local_1a8 = *(int *)(lVar3 + 8 + uVar25);
  iVar11 = *(int *)(lVar3 + 0xc + uVar25);
  local_180 = (ulonglong)(uVar33 >> 9);
  lVar3 = *(longlong *)(*(longlong *)(lVar34 + 0x10) + local_180 * 8);
  uVar25 = (ulonglong)plVar29 & 0x1ff;
  local_188 = uVar25 * 3;
  dVar37 = *(double *)(lVar3 + uVar25 * 0x18);
  dVar38 = *(double *)(lVar3 + 8 + uVar25 * 0x18);
  dVar39 = *(double *)(lVar3 + 0x10 + uVar25 * 0x18);
  local_190 = (ulonglong)(uVar2 >> 9);
  lVar3 = *(longlong *)(*(longlong *)(lVar34 + 0x10) + local_190 * 8);
  uVar25 = uVar19 & 0x1ff;
  local_198 = uVar25 * 3;
  dVar40 = *(double *)(lVar3 + uVar25 * 0x18);
  dVar41 = *(double *)(lVar3 + 8 + uVar25 * 0x18);
  dVar42 = *(double *)(lVar3 + 0x10 + uVar25 * 0x18);
  dVar6 = (dVar42 - dVar39) * (dVar42 - dVar39) +
          (dVar40 - dVar37) * (dVar40 - dVar37) + (dVar41 - dVar38) * (dVar41 - dVar38);
  pcVar4 = (code *)param_1[0x42];
  dVar36 = dVar6;
  local_1a4 = param_2;
  local_1a0 = plVar18;
  if (pcVar4 != (code *)0x0) {
    local_118 = (double)CONCAT44(local_118._4_4_,uVar33);
    plVar18 = param_1 + 0x46;
    if ((longlong *)param_1[0x44] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[0x44];
    }
    local_170 = uVar2;
    uVar16 = (**(code **)(*plVar18 + 8))();
    dVar36 = (double)(*pcVar4)(uVar16,lVar34,&local_118,&local_170);
    dVar36 = dVar36 * dVar36 * dVar6;
  }
  uVar27 = local_1a4;
  local_ec = 0xffffffff;
  uVar22 = 3;
  if (((*(char *)((longlong)param_1 + 0x151) == '\x01') && ((local_e8[0] & 4) == 0)) &&
     (dVar36 < (double)param_1[0x2d] * (double)param_1[0x2d])) {
    FUN_146c12888(param_1[1],&local_f4,local_1a4);
    local_1b8 = &local_ec;
    local_1c8 = local_1a8;
    local_1d0 = local_f0;
    local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,local_f4);
    local_1c0 = iVar11;
    cVar9 = FUN_1482b2f34(param_1,uVar27,plVar29,uVar19);
    if (cVar9 != '\0') {
      uVar25 = uVar19;
      if (local_ec == uVar2) {
        dVar6 = 0.0;
        local_118 = dVar40;
        dStack_110 = dVar41;
        local_108 = dVar42;
      }
      else if (local_ec == uVar33) {
        uVar25 = (ulonglong)uVar33;
        uVar33 = uVar2;
        dVar6 = 0.0;
        local_118 = dVar37;
        dStack_110 = dVar38;
        local_108 = dVar39;
      }
      else {
        dVar7 = 0.5;
        local_120 = (dVar39 + dVar42) * 0.5;
        local_128 = (dVar38 + dVar41) * 0.5;
        local_130 = (dVar37 + dVar40) * 0.5;
        (**(code **)(*param_1 + 0xb8))(param_1,&local_170,uVar19);
        local_108 = (double)CONCAT44(uStack_15c,uStack_160);
        local_118 = (double)CONCAT44(uStack_16c,local_170);
        dStack_110 = dStack_168;
        if (1e-08 <= SQRT(dVar6)) {
          lVar34 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + local_190 * 8);
          dVar37 = *(double *)(lVar34 + local_198 * 8) - local_118;
          dVar38 = *(double *)(lVar34 + 8 + local_198 * 8) - dStack_168;
          dVar39 = *(double *)(lVar34 + 0x10 + local_198 * 8) - local_108;
          dVar7 = SQRT(dVar39 * dVar39 + dVar37 * dVar37 + dVar38 * dVar38) / SQRT(dVar6);
        }
        dVar6 = 1.0;
        if (dVar7 <= 1.0) {
          dVar6 = dVar7;
        }
      }
      if (*(char *)((longlong)param_1 + 0x154) == '\x01') {
        local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,local_1a8);
        local_1d0 = iVar11;
        cVar9 = FUN_1482b19a2(param_1,plVar29,uVar19,&local_118);
        if (cVar9 == '\0') {
          local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,local_1a8);
          local_1d0 = iVar11;
          cVar9 = FUN_1482b19a2(param_1,uVar19,plVar29,&local_118);
          if (cVar9 == '\0') goto LAB_14837d9d0;
        }
      }
      else {
LAB_14837d9d0:
        if (*(char *)((longlong)param_1 + 0x155) == '\x01') {
          local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,local_1a8);
          local_1d0 = iVar11;
          cVar9 = FUN_1482b21ee(param_1,plVar29,uVar19,&local_118);
          if (cVar9 == '\0') {
            local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,local_1a8);
            local_1d0 = iVar11;
            cVar9 = FUN_1482b21ee(param_1,uVar19,plVar29,&local_118);
            if (cVar9 == '\0') goto LAB_14837da33;
          }
        }
        else {
LAB_14837da33:
          (**(code **)(*param_1 + 0x18))(param_1,local_1a4);
          *(int *)((longlong)param_1 + 0x294) = *(int *)((longlong)param_1 + 0x294) + 1;
          dStack_168 = -NAN;
          uStack_158 = 0xffffffff;
          uStack_154 = 0xffffffff;
          uStack_150 = 0xffffffff;
          iStack_14c = -1;
          uStack_148 = 0xffffffffffffffff;
          local_1d8 = &local_170;
          iVar15 = (**(code **)(*(longlong *)param_1[1] + 0x70))
                             ((longlong *)param_1[1],uVar25,uVar33,dVar6);
          if (iVar15 == 0) {
            lVar34 = param_1[1];
            cVar9 = FUN_146bfed03(&local_118);
            plVar18 = local_1a0;
            if (cVar9 != '\0') {
              lVar3 = *(longlong *)(*(longlong *)(lVar34 + 0x10) + (uVar25 >> 9) * 8);
              uVar19 = (ulonglong)((uint)uVar25 & 0x1ff);
              *(double *)(lVar3 + 0x10 + uVar19 * 0x18) = local_108;
              pdVar1 = (double *)(lVar3 + uVar19 * 0x18);
              *pdVar1 = local_118;
              pdVar1[1] = dStack_110;
              if (*(char *)(lVar34 + 0x210) == '\x01') {
                LOCK();
                *(int *)(lVar34 + 0x214) = *(int *)(lVar34 + 0x214) + 1;
                UNLOCK();
              }
            }
            if ((char)param_1[0x19] == '\x01') {
              FUN_1482f65d8(local_1a0,local_1a4);
              FUN_1482f65d8(plVar18,uStack_150);
              if (iStack_14c != -1) {
                FUN_1482f65d8(local_1a0);
              }
              FUN_1482f669e(param_1 + 0xc,uVar33);
            }
            local_1d8 = &local_170;
            (**(code **)(*param_1 + 0x48))(param_1,local_1a4,uVar25,uVar33);
            uVar22 = 0;
            (**(code **)(*param_1 + 0x28))(param_1,0);
            goto LAB_14837d7ec;
          }
          uVar22 = 5;
        }
      }
    }
  }
  if ((char)param_1[0x2a] == '\x01') {
    bVar8 = false;
    if (((local_e8[0] & 1) == 0) && (bVar8 = false, iVar11 != -1)) {
      lVar34 = param_1[1];
      local_1a0 = plVar29;
      FUN_146c12888(lVar34,&local_118,local_1a4);
      uVar35 = (ulonglong)local_118 & 0xffffffff;
      uVar33 = local_118._4_4_;
      uVar25 = (ulonglong)local_118._4_4_;
      if ((int)param_1[0x2b] == 0) {
        bVar10 = *(byte *)(param_1 + 0x4b);
        if (bVar10 == 0) {
          uVar12 = FUN_146c0b51e(lVar34,local_1a0);
          local_198 = CONCAT44(local_198._4_4_,uVar12);
          bVar10 = *(byte *)(param_1 + 0x4b);
          lVar34 = param_1[1];
        }
        else {
          local_198 = local_198 & 0xffffffff00000000;
        }
        if ((bVar10 & 1) == 0) {
          uVar12 = FUN_146c0b51e(lVar34,uVar19);
          local_180 = CONCAT44(local_180._4_4_,uVar12);
          bVar10 = *(byte *)(param_1 + 0x4b);
          lVar34 = param_1[1];
        }
        else {
          local_180 = local_180 & 0xffffffff00000000;
        }
        if ((bVar10 & 1) == 0) {
          uVar12 = FUN_146c0b51e(lVar34,uVar35);
          local_190 = CONCAT44(local_190._4_4_,uVar12);
          bVar10 = *(byte *)(param_1 + 0x4b);
          lVar34 = param_1[1];
        }
        else {
          local_190 = local_190 & 0xffffffff00000000;
        }
        if ((bVar10 & 1) == 0) {
          uVar12 = FUN_146c0b51e(lVar34,uVar25);
          local_188 = CONCAT44(local_188._4_4_,uVar12);
          lVar34 = param_1[1];
        }
        else {
          local_188 = local_188 & 0xffffffff00000000;
        }
        uVar13 = FUN_146be99b0(lVar34,local_1a0);
        uVar14 = FUN_146be99b0(param_1[1],uVar19);
        iVar11 = FUN_146be99b0(param_1[1],uVar35);
        iVar15 = FUN_146be99b0(param_1[1],uVar25);
        uVar27 = 6;
        if ((char)local_198 != '\0') {
          uVar27 = uVar13;
        }
        uVar24 = 6;
        if ((char)local_180 != '\0') {
          uVar24 = uVar14;
        }
        iVar20 = 6;
        if ((char)local_190 != '\0') {
          iVar20 = iVar11;
        }
        iVar17 = 6;
        if ((char)local_188 != '\0') {
          iVar17 = iVar15;
        }
        iVar30 = -(uVar13 - uVar27);
        if (iVar30 < 0) {
          iVar30 = uVar13 - uVar27;
        }
        iVar23 = -(uVar14 - uVar24);
        if (iVar23 < 0) {
          iVar23 = uVar14 - uVar24;
        }
        iVar31 = -(iVar11 - iVar20);
        if (iVar31 < 0) {
          iVar31 = iVar11 - iVar20;
        }
        iVar26 = -(iVar15 - iVar17);
        if (iVar26 < 0) {
          iVar26 = iVar15 - iVar17;
        }
        iVar32 = -(~uVar27 + uVar13);
        if (iVar32 < 0) {
          iVar32 = ~uVar27 + uVar13;
        }
        iVar28 = -(~uVar24 + uVar14);
        if (iVar28 < 0) {
          iVar28 = ~uVar24 + uVar14;
        }
        iVar20 = (iVar11 - iVar20) + 1;
        iVar11 = -iVar20;
        if (iVar11 < 0) {
          iVar11 = iVar20;
        }
        iVar20 = (iVar15 - iVar17) + 1;
        iVar15 = -iVar20;
        if (iVar15 < 0) {
          iVar15 = iVar20;
        }
        local_178 = uVar13;
        local_174 = uVar14;
        if ((uint)(iVar15 + iVar11 + iVar28 + iVar32) < (uint)(iVar26 + iVar31 + iVar23 + iVar30))
        goto LAB_14837d710;
      }
      else {
        lVar34 = *(longlong *)(lVar34 + 0x10);
        lVar3 = *(longlong *)(lVar34 + local_190 * 8);
        lVar5 = *(longlong *)(lVar34 + local_180 * 8);
        dVar38 = *(double *)(lVar3 + local_198 * 8) - *(double *)(lVar5 + local_188 * 8);
        dVar40 = *(double *)(lVar3 + 8 + local_198 * 8) - *(double *)(lVar5 + 8 + local_188 * 8);
        dVar37 = *(double *)(lVar3 + 0x10 + local_198 * 8) -
                 *(double *)(lVar5 + 0x10 + local_188 * 8);
        lVar3 = *(longlong *)(lVar34 + (ulonglong)(local_118._4_4_ >> 9) * 8);
        uVar25 = uVar25 & 0x1ff;
        lVar34 = *(longlong *)(lVar34 + ((ulonglong)local_118 >> 9 & 0x7fffff) * 8);
        uVar21 = (ulonglong)local_118 & 0x1ff;
        dVar39 = *(double *)(lVar3 + uVar25 * 0x18) - *(double *)(lVar34 + uVar21 * 0x18);
        dVar41 = *(double *)(lVar3 + 8 + uVar25 * 0x18) - *(double *)(lVar34 + 8 + uVar21 * 0x18);
        dVar42 = *(double *)(lVar3 + 0x10 + uVar25 * 0x18) -
                 *(double *)(lVar34 + 0x10 + uVar21 * 0x18);
        if (dVar42 * dVar42 + dVar39 * dVar39 + dVar41 * dVar41 <
            (double)param_1[0x2c] * (double)param_1[0x2c] *
            (dVar37 * dVar37 + dVar38 * dVar38 + dVar40 * dVar40)) {
LAB_14837d710:
          if (*(char *)((longlong)param_1 + 0x154) == '\x01') {
            local_1d0 = local_1a8;
            local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,uVar33);
            cVar9 = FUN_1482b26e8(param_1,local_1a0,uVar19,uVar35);
            if (cVar9 != '\0') goto LAB_14837d745;
          }
          if (*(char *)((longlong)param_1 + 0x155) == '\x01') {
            local_1d0 = local_1a8;
            local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,uVar33);
            cVar9 = FUN_1482b2ba2(param_1,local_1a0,uVar19,uVar35);
            if (cVar9 != '\0') goto LAB_14837d745;
          }
          uVar33 = local_1a4;
          (**(code **)(*param_1 + 0x18))(param_1,local_1a4);
          uStack_16c = 0xffffffff;
          dStack_168 = -NAN;
          uStack_160 = 0xffffffff;
          uStack_15c = 0xffffffff;
          uStack_158 = 0xffffffff;
          *(int *)(param_1 + 0x53) = (int)param_1[0x53] + 1;
          iVar11 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],uVar33);
          if (iVar11 == 0) {
            (**(code **)(*param_1 + 0x50))(param_1,uVar33,&local_170);
            (**(code **)(*param_1 + 0x28))(param_1,0);
            uVar22 = 1;
            goto LAB_14837d7ec;
          }
          bVar8 = true;
          plVar29 = local_1a0;
          goto LAB_14837d750;
        }
      }
LAB_14837d745:
      bVar8 = false;
      plVar29 = local_1a0;
    }
  }
  else {
    bVar8 = false;
  }
LAB_14837d750:
  uVar33 = local_1a4;
  if (((*(char *)((longlong)param_1 + 0x152) != '\x01') || ((local_e8[0] & 2) != 0)) ||
     (dVar36 <= (double)param_1[0x2e] * (double)param_1[0x2e])) {
    if (bVar8) {
      uVar22 = 5;
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,local_1a4);
    uStack_16c = 0xffffffff;
    dStack_168 = -NAN;
    uStack_160 = 0xffffffff;
    uStack_15c = 0xffffffff;
    uStack_158 = 0xffffffff;
    iStack_14c = -1;
    uStack_148 = 0xffffffffffffffff;
    uStack_140 = 0xffffffff;
    local_13c = 0xffffffff;
    *(int *)(param_1 + 0x52) = (int)param_1[0x52] + 1;
    iVar11 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                       ((longlong *)param_1[1],uVar33,&local_170,0x3fe0000000000000);
    if (iVar11 == 0) {
      local_1d8 = &local_170;
      (**(code **)(*param_1 + 0x70))(param_1,uVar33,(ulonglong)plVar29 & 0xffffffff,uVar19);
      local_1d8 = &local_170;
      (**(code **)(*param_1 + 0x40))(param_1,uVar33,(ulonglong)plVar29 & 0xffffffff,uVar2);
      (**(code **)(*param_1 + 0x28))(param_1,0);
      uVar22 = 2;
    }
    else {
      uVar22 = 5;
    }
  }
LAB_14837d7ec:
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22;
}



// FUNCTION 14837df06 FUN_14837df06 body=614 status=ok
// SIG undefined FUN_14837df06(void)

void FUN_14837df06(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 **ppuVar3;
  char cVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 **local_90;
  char local_88;
  char local_87;
  int local_84;
  undefined4 **local_80;
  undefined4 *local_78;
  undefined4 **local_70;
  undefined8 local_60;
  undefined4 **local_58;
  undefined4 local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_1[0x19] == '\x01') {
    plVar1 = param_1 + 2;
    cVar4 = FUN_1482bb52e(plVar1);
    if (cVar4 != '\0') {
      FUN_1482b3344(plVar1,&local_78,param_2);
      local_98._0_4_ = *(undefined4 *)(param_5 + 0x2c);
      local_60 = &local_98;
      bVar2 = false;
      local_58 = &local_78;
      FUN_1482f537c(plVar1,&local_88,&local_60,0);
      FUN_1482b33ce(plVar1,&local_60,param_3);
      FUN_1482b33ce(plVar1,&local_88,param_4);
      if ((char)local_60 == '\x01') {
        bVar2 = false;
        if (local_88 == '\x01') {
          local_98._4_4_ = -1;
          if (local_60._4_4_ == local_84) {
            local_98._4_4_ = local_60._4_4_;
          }
          if (local_60._4_4_ < 1) {
            local_98._4_4_ = -1;
          }
          cVar4 = local_87;
          if (local_60._1_1_ == '\0') {
            cVar4 = '\0';
          }
          local_98._0_2_ = CONCAT11(cVar4,1);
          local_90 = (undefined4 **)0x0;
          local_50 = *(undefined4 *)(param_5 + 0x20);
          local_78 = &local_50;
          local_70 = (undefined4 **)&local_98;
          FUN_1482f586a(param_1 + 0xc,local_4c,&local_78,0);
          bVar2 = true;
        }
      }
      if (local_80 != (undefined4 **)0x0 || local_58 != (undefined4 **)0x0) {
        FUN_1482b3344(plVar1,&local_78,param_2);
        ppuVar3 = local_70;
        if ((local_58 == local_70 && local_58 == local_80) ||
           ((local_58 == local_70 && (local_87 != '\x01')))) {
          if (local_70 == (undefined4 **)0x0) goto LAB_14837df3c;
        }
        else if ((local_80 != local_70) ||
                (local_70 == (undefined4 **)0x0 || local_60._1_1_ != '\0')) goto LAB_14837df3c;
        local_98._0_4_ = CONCAT22(local_98._2_2_,0x100);
        local_98._4_4_ = -1;
        local_90 = local_70;
        local_50 = *(undefined4 *)(param_5 + 0x20);
        local_78 = &local_50;
        local_70 = (undefined4 **)&local_98;
        FUN_1482f586a(param_1 + 0xc,local_4c,&local_78,0);
        (**(code **)(*param_1 + 0xb0))(param_1,*(undefined4 *)(param_5 + 0x20),ppuVar3);
        bVar2 = true;
      }
      goto LAB_14837df3c;
    }
  }
  bVar2 = false;
LAB_14837df3c:
  if (((!bVar2) && ((char)param_1[0x27] == '\x02')) && (param_1[0x1a] != 0)) {
    (**(code **)(*param_1 + 0xb0))(param_1,*(undefined4 *)(param_5 + 0x20));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837e16e FUN_14837e16e body=193 status=ok
// SIG undefined FUN_14837e16e(void)

void FUN_14837e16e(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar5 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
  puVar1 = (undefined4 *)(lVar2 + uVar5 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(*param_3 + 8))(param_3,&local_60,&local_48,param_2);
  lVar2 = *(longlong *)(param_1 + 8);
  cVar4 = FUN_146bfed03(&local_60);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = local_50;
    puVar1 = (undefined4 *)(lVar3 + uVar5 * 0x18);
    *puVar1 = local_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    if (*(char *)(lVar2 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar2 + 0x214) = *(int *)(lVar2 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837e230 FUN_14837e230 body=252 status=ok
// SIG undefined FUN_14837e230(void)

undefined4 *
FUN_14837e230(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_1482b33ce(param_1 + 0x10,&local_48,param_3);
    if (local_40 != (longlong *)0x0) goto LAB_14837e2be;
    if (local_48._1_1_ != '\0') goto LAB_14837e261;
  }
  else {
LAB_14837e261:
    if ((*(char *)(param_1 + 0x138) == '\x02') &&
       (local_40 = *(longlong **)(param_1 + 0xd0), local_40 != (longlong *)0x0)) {
      pcVar1 = *(code **)(param_1 + 0xe0);
      if (pcVar1 != (code *)0x0) {
        plVar7 = (longlong *)(param_1 + 0x100);
        if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0xf0);
        }
        local_48 = param_3;
        uVar5 = (**(code **)(*plVar7 + 8))();
        uVar6 = (*pcVar1)(uVar5,&local_48);
        if ((uVar6 & 2) != 0) goto LAB_14837e2f7;
        local_40 = *(longlong **)(param_1 + 0xd0);
      }
LAB_14837e2be:
      (**(code **)(*local_40 + 8))(local_40,param_2,param_4,param_3);
      goto LAB_14837e305;
    }
  }
LAB_14837e2f7:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
LAB_14837e305:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


