// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146bc96d4 FUN_146bc96d4 body=97 status=ok
// SIG undefined FUN_146bc96d4(void)

undefined4 FUN_146bc96d4(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (((*(char *)(param_1 + 0x1a8) == '\x01') && (uVar1 = 0, -1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(param_2 >> 9) * 8) +
               (ulonglong)(param_2 & 0x1ff) * 4);
    }
  }
  return uVar1;
}



// FUNCTION 146bc9736 FUN_146bc9736 body=99 status=ok
// SIG undefined FUN_146bc9736(void)

undefined8 FUN_146bc9736(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) == -1) {
    if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
      plVar2 = param_1 + 10;
      if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[0xb];
      }
      iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0xc] - 1U & param_2) * 4);
      if (iVar3 != -1) {
        do {
          bVar4 = *(uint *)(param_1[3] + (longlong)iVar3 * 0xc) == param_2;
          uVar1 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
          if (bVar4) {
            return uVar1;
          }
          iVar3 = *(int *)(param_1[3] + (longlong)iVar3 * 0xc + 4);
        } while (iVar3 != -1);
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*param_1 >> 8),
                     *(undefined1 *)(*param_1 + (longlong)(int)param_2));
  }
  return uVar1;
}



// FUNCTION 146bc979a FUN_146bc979a body=157 status=ok
// SIG undefined FUN_146bc979a(void)

int FUN_146bc979a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = -1;
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0xd))) {
    cVar2 = *(char *)((longlong)param_1 + 0x6c);
    if (cVar2 != '\x02') {
      if (cVar2 != '\x01') {
        if (cVar2 != '\0') {
          return -1;
        }
        return *(int *)(*param_1 + (ulonglong)param_2 * 4);
      }
      if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
        plVar3 = param_1 + 9;
        if ((longlong *)param_1[10] != (longlong *)0x0) {
          plVar3 = (longlong *)param_1[10];
        }
        iVar4 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)param_1[0xb] + 0x7fffffffU & param_2) * 4);
        if (iVar4 != -1) {
          do {
            lVar1 = param_1[2] + (longlong)iVar4 * 0x10;
            if (*(uint *)(param_1[2] + (longlong)iVar4 * 0x10) == param_2) {
              if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
                return *(int *)(lVar1 + 4);
              }
              break;
            }
            iVar4 = *(int *)(lVar1 + 8);
          } while (iVar4 != -1);
        }
      }
    }
    iVar4 = param_2 * *(int *)((longlong)param_1 + 100) + (int)param_1[0xc];
  }
  return iVar4;
}



// FUNCTION 146bc9838 FUN_146bc9838 body=63 status=ok
// SIG undefined FUN_146bc9838(void)

void FUN_146bc9838(longlong *param_1)

{
  FUN_145a22d80(param_1 + 3);
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = -0x100000000;
  }
  return;
}



// FUNCTION 146bc9878 FUN_146bc9878 body=367 status=ok
// SIG undefined FUN_146bc9878(void)

float * FUN_146bc9878(undefined8 *param_1,float *param_2,undefined4 *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == '\0') {
    FUN_146c13dec(*param_1,&local_78,*param_3);
    fVar1 = (float)local_68;
    fVar3 = (float)local_70;
    fVar4 = (float)local_78;
    FUN_146c13dec(*param_1,&local_78,param_3[1]);
    fVar1 = (float)local_68 + fVar1;
    fVar3 = (float)local_70 + fVar3;
    fVar4 = (float)local_78 + fVar4;
    fVar2 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
    if (fVar2 <= 0.0) {
      param_2[2] = 0.0;
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      goto LAB_146bc98e0;
    }
    fVar2 = 1.0 / fVar2;
    *param_2 = fVar4 * fVar2;
    param_2[1] = fVar3 * fVar2;
    fVar1 = fVar1 * fVar2;
  }
  else {
    FUN_146c13dec(*param_1,&local_78,*param_3);
    fVar1 = (float)local_68;
    *param_2 = (float)local_78;
    param_2[1] = (float)local_70;
  }
  param_2[2] = fVar1;
LAB_146bc98e0:
  FUN_146bc99e8(param_1,param_3,param_2);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc99e8 FUN_146bc99e8 body=434 status=ok
// SIG undefined FUN_146bc99e8(void)

void FUN_146bc99e8(longlong *param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = *(longlong *)(*param_1 + 0x208);
  if (*(int *)(lVar10 + 0x38) < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = **(undefined8 **)(lVar10 + 0x30);
  }
  lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
  uVar7 = (ulonglong)(*param_2 & 0x1ff);
  iVar1 = *(int *)(lVar10 + uVar7 * 0xc);
  iVar2 = *(int *)(lVar10 + 4 + uVar7 * 0xc);
  iVar3 = *(int *)(lVar10 + 8 + uVar7 * 0xc);
  local_54[0] = FUN_146c2f9e2(uVar9,param_3);
  local_54[1] = FUN_146c2f9e2(uVar9,param_3);
  local_54[2] = FUN_146c2f9e2(uVar9,param_3);
  FUN_146c01580(uVar9,*param_2,local_54,1);
  uVar4 = param_2[1];
  if ((-1 < (int)uVar4) &&
     (lVar10 = *param_1, (int)uVar4 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)))
  {
    uVar7 = (ulonglong)(uVar4 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                           uVar7 * 2) - 1U) < 0xfffe) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
      local_58 = *(undefined4 *)(lVar10 + 8 + uVar7 * 0xc);
      local_60 = *(undefined8 *)(lVar10 + uVar7 * 0xc);
      local_6c = 0xffffffffffffffff;
      local_64 = 0xffffffff;
      lVar10 = 0;
      local_78 = param_2;
      do {
        iVar5 = *(int *)((longlong)&local_60 + lVar10 * 4);
        puVar8 = local_54;
        if (((iVar1 == iVar5) || (puVar8 = local_54 + 1, iVar2 == iVar5)) ||
           (puVar8 = local_54 + 2, iVar3 == iVar5)) {
          uVar6 = *puVar8;
        }
        else {
          uVar6 = FUN_146c2f9e2(uVar9,param_3);
        }
        *(undefined4 *)((longlong)&local_6c + lVar10 * 4) = uVar6;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      FUN_146c01580(uVar9,local_78[1],&local_6c,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc9b9c FUN_146bc9b9c body=631 status=ok
// SIG undefined FUN_146bc9b9c(void)

void FUN_146bc9b9c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_118 [40];
  uint *local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  uint *local_d8;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_118;
  if (*(int *)(*(longlong *)(*param_1 + 0x208) + 0x38) < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = **(longlong **)(*(longlong *)(*param_1 + 0x208) + 0x30);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar5 = (uint *)*param_2;
    local_f0 = puVar5 + *(int *)(param_2 + 1);
    do {
      uVar2 = *puVar5;
      local_d8 = puVar5;
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x78) + (ulonglong)(uVar2 * 3 >> 9) * 8)
                       + (ulonglong)(uVar2 * 3 & 0x1ff) * 4)) {
        FUN_146c2fdd8(lVar7,(ulonglong)uVar2,1);
      }
      lVar8 = *(longlong *)(*(longlong *)(*local_e8 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      local_b8 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      local_c0 = *(undefined8 *)(lVar8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      local_cc = 0xffffffffffffffff;
      local_c4 = 0xffffffff;
      lVar8 = 0;
      local_e0 = (ulonglong)uVar2;
      do {
        if ((int)uStack_90 != local_64) {
          uVar2 = *(uint *)((longlong)&local_c0 + lVar8 * 4);
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_60;
          }
          iVar3 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar2) * 4);
          while (iVar3 != -1) {
            lVar1 = local_98 + (longlong)iVar3 * 0x10;
            if (*(uint *)(local_98 + (longlong)iVar3 * 0x10) == uVar2) {
              if ((lVar1 != 0) && ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0)) {
                *(undefined4 *)((longlong)&local_cc + lVar8 * 4) = *(undefined4 *)(lVar1 + 4);
                goto LAB_146bc9d7f;
              }
              break;
            }
            iVar3 = *(int *)(lVar1 + 8);
          }
        }
        uVar4 = FUN_146c2f9e2(lVar7,param_3);
        local_a8 = (undefined4 *)((longlong)&local_cc + lVar8 * 4);
        *local_a8 = uVar4;
        local_b0 = (longlong)&local_c0 + lVar8 * 4;
        FUN_140263e2a(&local_98,local_9c,&local_b0,0);
LAB_146bc9d7f:
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      FUN_146c01580(lVar7,local_e0,&local_cc);
      puVar5 = local_d8 + 1;
    } while (puVar5 != local_f0);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)local_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc9e14 FUN_146bc9e14 body=947 status=ok
// SIG undefined FUN_146bc9e14(void)

void FUN_146bc9e14(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d0;
  uint *local_1c0;
  ulonglong local_1b8;
  uint *local_1b0;
  code *local_1a8;
  undefined1 **local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 *local_158;
  undefined1 local_14c [4];
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  undefined1 *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  undefined8 *local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_1f8;
  if (*(int *)(*(longlong *)(*param_1 + 0x208) + 0x38) < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = **(longlong **)(*(longlong *)(*param_1 + 0x208) + 0x30);
  }
  local_148 = *param_2;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_140 = CONCAT44(uStack_140._4_4_,(int)param_2[1]);
  FUN_146bc855c(&local_b8,&local_148);
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_149f363c0;
  local_d0 = &local_b8;
  local_f8[0] = &LAB_142971dda;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    puVar6 = (uint *)*param_2;
    local_1c0 = puVar6 + (int)param_2[1];
    do {
      uVar2 = *puVar6;
      local_1b0 = puVar6;
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)(uVar2 * 3 >> 9) * 8)
                       + (ulonglong)(uVar2 * 3 & 0x1ff) * 4)) {
        FUN_146c2fdd8(lVar8,(ulonglong)uVar2,1);
      }
      lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      local_168 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      local_170 = *(undefined8 *)(lVar9 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      local_17c = 0xffffffffffffffff;
      local_174 = 0xffffffff;
      lVar9 = 0;
      local_1b8 = (ulonglong)uVar2;
      do {
        uVar2 = *(uint *)((longlong)&local_170 + lVar9 * 4);
        if ((int)uStack_140 != local_114) {
          puVar5 = local_108;
          if (local_108 == (undefined1 *)0x0) {
            puVar5 = local_110;
          }
          iVar3 = *(int *)(puVar5 + (ulonglong)(local_100 - 1U & uVar2) * 4);
          while (iVar3 != -1) {
            lVar1 = local_148 + (longlong)iVar3 * 0x10;
            if (*(uint *)(local_148 + (longlong)iVar3 * 0x10) == uVar2) {
              if ((lVar1 != 0) && ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0)) {
                *(undefined4 *)((longlong)&local_17c + lVar9 * 4) = *(undefined4 *)(lVar1 + 4);
                goto LAB_146bca0e4;
              }
              break;
            }
            iVar3 = *(int *)(lVar1 + 8);
          }
        }
        local_1a0 = local_f8;
        local_1a8 = FUN_146bfd2ee;
        local_1d0 = 1;
        local_1d8 = 1;
        FUN_146c39520(&local_198,*param_1,uVar2,&local_1a8);
        local_160 = CONCAT44((float)local_190,(float)local_198);
        local_158 = (undefined4 *)CONCAT44(local_158._4_4_,(float)local_188);
        uVar4 = FUN_146c2f9e2(lVar8,&local_160);
        local_158 = (undefined4 *)((longlong)&local_17c + lVar9 * 4);
        *local_158 = uVar4;
        local_160 = (longlong)&local_170 + lVar9 * 4;
        FUN_140263e2a(&local_148,local_14c,&local_160,0);
LAB_146bca0e4:
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      FUN_146c01580(lVar8,local_1b8,&local_17c,1);
      puVar6 = local_1b0 + 1;
    } while (puVar6 != local_1c0);
    local_100 = 0;
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144a6bfa8(&local_148);
  if (local_f8[0] != (undefined1 *)0x0) {
    pppuVar7 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar7 = &local_d8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if ((local_60 ^ (ulonglong)local_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bca1c8 FUN_146bca1c8 body=116 status=ok
// SIG undefined FUN_146bca1c8(void)

void FUN_146bca1c8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140c0b6f2(param_1,iVar1);
    }
    FUN_146bed2a3((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1467ff8c6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bca23e FUN_146bca23e body=111 status=ok
// SIG undefined FUN_146bca23e(void)

void FUN_146bca23e(void)

{
  undefined4 in_XMM3_Da;
  undefined8 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = in_stack_00000030;
  local_30 = in_stack_00000038;
  local_38 = in_stack_00000028;
  local_20 = 0;
  local_10 = in_XMM3_Da;
  local_c = in_XMM3_Da;
  FUN_146bca2ae();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bca2ae FUN_146bca2ae body=1279 status=ok
// SIG undefined FUN_146bca2ae(void)

void FUN_146bca2ae(longlong *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                  float *param_5,uint param_6,char param_7,char param_8)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_1c8 [40];
  float *local_1a0;
  uint *local_198;
  ulonglong local_190;
  uint *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 *puStack_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  float local_14c;
  float local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_1c8;
  local_180 = param_3;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    if ((int)param_6 < 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if ((int)param_6 < *(int *)(*(longlong *)(*param_1 + 0x208) + 0x28)) {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x20) + (ulonglong)param_6 * 8);
      }
    }
    local_f8 = 0;
    local_f0 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    local_128 = 0;
    uStack_120 = 0;
    puVar6 = (uint *)*param_2;
    local_198 = puVar6 + *(int *)(param_2 + 1);
    fVar13 = 3.4028235e+38;
    fVar15 = -3.4028235e+38;
    fVar16 = -3.4028235e+38;
    fVar14 = 3.4028235e+38;
    local_1a0 = param_4;
    do {
      uVar5 = *puVar6;
      local_188 = puVar6;
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)(uVar5 * 3 >> 9) * 8)
                       + (ulonglong)(uVar5 * 3 & 0x1ff) * 4)) {
        FUN_146c2d498(lVar8,(ulonglong)uVar5,1);
      }
      lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
      local_130 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_138 = *(undefined8 *)(lVar10 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_144 = 0xffffffffffffffff;
      local_13c = 0xffffffff;
      lVar10 = 0;
      local_190 = (ulonglong)uVar5;
      do {
        uVar5 = *(uint *)((longlong)&local_138 + lVar10 * 4);
        if ((int)uStack_110 != local_e4) {
          puVar7 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar7 = local_e0;
          }
          iVar3 = *(int *)(puVar7 + (ulonglong)(local_d0 - 1U & uVar5) * 4);
          while (iVar3 != -1) {
            lVar12 = local_118 + (longlong)iVar3 * 0x10;
            if (*(uint *)(local_118 + (longlong)iVar3 * 0x10) == uVar5) {
              if ((lVar12 != 0) && ((undefined4 *)(lVar12 + 4) != (undefined4 *)0x0)) {
                *(undefined4 *)((longlong)&local_144 + lVar10 * 4) = *(undefined4 *)(lVar12 + 4);
                goto LAB_146bca5dd;
              }
              break;
            }
            iVar3 = *(int *)(lVar12 + 8);
          }
        }
        lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_168 = *(undefined8 *)(lVar12 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        plVar1 = (longlong *)(lVar12 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        local_178 = *plVar1;
        puStack_170 = (undefined4 *)plVar1[1];
        FUN_146bca7ae(local_180,&local_160,&local_178,2);
        fVar17 = (float)local_158;
        fVar18 = (float)local_160;
        local_14c = fVar18;
        local_148 = fVar17;
        uVar4 = FUN_146c2d0a4(lVar8,&local_14c);
        uVar11 = uStack_120;
        puVar9 = (undefined4 *)((longlong)&local_144 + lVar10 * 4);
        *puVar9 = uVar4;
        lVar12 = (longlong)(int)uStack_120;
        uVar5 = (int)uStack_120 + 1;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
        if (uStack_120._4_4_ < uVar5) {
          FUN_1446f48e2(&local_128,uVar11 & 0xffffffff);
          uVar4 = *puVar9;
        }
        local_178 = (longlong)&local_138 + lVar10 * 4;
        fVar2 = fVar18;
        if (fVar14 <= fVar18) {
          fVar2 = fVar14;
        }
        fVar14 = fVar2;
        if (fVar18 <= fVar16) {
          fVar18 = fVar16;
        }
        fVar16 = fVar18;
        fVar18 = fVar17;
        if (fVar13 <= fVar17) {
          fVar18 = fVar13;
        }
        fVar13 = fVar18;
        if (fVar17 <= fVar15) {
          fVar17 = fVar15;
        }
        fVar15 = fVar17;
        *(undefined4 *)(local_128 + lVar12 * 4) = uVar4;
        puStack_170 = puVar9;
        FUN_140263e2a(&local_118,&local_160,&local_178,0);
LAB_146bca5dd:
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      FUN_146c01486(lVar8,local_190,&local_144,1);
      puVar6 = local_188 + 1;
    } while (puVar6 != local_198);
    if (param_8 == '\0') {
      fVar15 = *local_1a0;
      fVar17 = local_1a0[1];
    }
    else {
      fVar17 = local_1a0[1] / (float)(-(uint)(0.0 <= fVar15 - fVar13) & (uint)(fVar15 - fVar13));
      fVar15 = *local_1a0 / (float)(-(uint)(0.0 <= fVar16 - fVar14) & (uint)(fVar16 - fVar14));
    }
    if ((longlong)(int)uStack_120 != 0) {
      lVar10 = 0;
      do {
        uVar11 = (ulonglong)(*(uint *)(local_128 + lVar10) >> 5 & 0x3fffff8);
        lVar12 = *(longlong *)(*(longlong *)(lVar8 + 0x48) + uVar11);
        uVar5 = (*(uint *)(local_128 + lVar10) & 0xff) << 3;
        fVar16 = *(float *)(lVar12 + (ulonglong)uVar5);
        fVar18 = *(float *)(lVar12 + (ulonglong)(uVar5 | 4));
        if (param_7 != '\0') {
          fVar18 = fVar18 - fVar13;
          fVar16 = fVar16 - fVar14;
        }
        fVar2 = param_5[1];
        *(float *)(lVar12 + (ulonglong)uVar5) = fVar16 * fVar15 + *param_5;
        *(float *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + uVar11) + (ulonglong)(uVar5 | 4)) =
             fVar18 * fVar17 + fVar2;
        lVar10 = lVar10 + 4;
      } while ((longlong)(int)uStack_120 * 4 != lVar10);
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_118);
  }
  if ((local_c0 ^ (ulonglong)local_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bca7ae FUN_146bca7ae body=291 status=ok
// SIG undefined FUN_146bca7ae(void)

double * FUN_146bca7ae(double *param_1,double *param_2,double *param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 1;
  if (param_4 == 0) {
    uVar8 = 2;
  }
  else {
    uVar8 = 0;
    if (param_4 == 1) {
      uVar9 = 2;
      uVar8 = 0;
    }
  }
  dVar1 = param_3[2];
  dVar2 = param_1[2];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_1[1];
  dVar6 = *param_1;
  FUN_146bfcd44(param_1,&local_88,uVar8);
  dVar10 = local_80 * (dVar4 - dVar5);
  dVar11 = local_88 * (dVar3 - dVar6);
  dVar7 = local_78 * (dVar1 - dVar2);
  FUN_146bfcd44(param_1,&local_88,uVar9);
  *param_2 = dVar7 + dVar11 + dVar10;
  param_2[1] = (dVar1 - dVar2) * local_78 + (dVar3 - dVar6) * local_88 + (dVar4 - dVar5) * local_80;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bca8d2 FUN_146bca8d2 body=1070 status=ok
// SIG undefined FUN_146bca8d2(void)

void FUN_146bca8d2(longlong *param_1,uint *param_2,undefined8 param_3,float param_4,float *param_5,
                  uint param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_138 [32];
  uint *local_118;
  float local_110;
  float fStack_10c;
  uint local_104 [3];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  uint local_b4 [3];
  undefined8 local_a8;
  uint local_a0;
  uint local_98 [4];
  float local_88 [6];
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = 0;
  if ((-1 < (int)param_6) &&
     (lVar10 = *(longlong *)(*param_1 + 0x208), (int)param_6 < *(int *)(lVar10 + 0x28))) {
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)param_6 * 8);
  }
  local_98[0] = 0xffffffff;
  local_98[1] = 0xffffffff;
  local_98[2] = 0xffffffff;
  local_98[3] = 0xffffffff;
  lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
  uVar7 = (ulonglong)(*param_2 & 0x1ff);
  local_a0 = *(uint *)(lVar10 + 8 + uVar7 * 0xc);
  local_a8 = *(undefined8 *)(lVar10 + uVar7 * 0xc);
  local_b4[0] = 0xffffffff;
  local_b4[1] = 0xffffffff;
  local_b4[2] = 0xffffffff;
  lVar10 = 0;
  local_118 = param_2;
  do {
    uVar6 = *(uint *)((longlong)&local_a8 + lVar10 * 4);
    lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
    uVar7 = (ulonglong)(uVar6 & 0x1ff);
    puVar1 = (undefined4 *)(lVar4 + uVar7 * 0x18);
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    local_d8 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
    FUN_146bca7ae(param_3,&local_c8,&local_e8,2);
    local_f8 = CONCAT44((float)local_c0,(float)local_c8);
    uVar6 = FUN_146c2d0a4(lVar9,&local_f8);
    puVar5 = local_118;
    local_b4[lVar10] = uVar6;
    *(undefined8 *)(local_88 + lVar10 * 2) = local_f8;
    local_98[lVar10] = uVar6;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  FUN_146c01486(lVar9,*local_118,local_b4,1);
  uVar6 = puVar5[1];
  if ((-1 < (int)uVar6) &&
     (lVar10 = *param_1, (int)uVar6 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)))
  {
    uVar7 = (ulonglong)(uVar6 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                           uVar7 * 2) - 1U) < 0xfffe) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
      local_f0 = *(undefined4 *)(lVar10 + 8 + uVar7 * 0xc);
      local_f8 = *(undefined8 *)(lVar10 + uVar7 * 0xc);
      local_104[0] = 0xffffffff;
      local_104[1] = 0xffffffff;
      local_104[2] = 0xffffffff;
      lVar10 = 0;
      do {
        uVar6 = *(uint *)((longlong)&local_f8 + lVar10 * 4);
        puVar8 = local_b4;
        if ((((uint)local_a8 == uVar6) || (puVar8 = local_b4 + 1, local_a8._4_4_ == uVar6)) ||
           (puVar8 = local_b4 + 2, local_a0 == uVar6)) {
          local_104[lVar10] = *puVar8;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          local_d8 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
          puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          FUN_146bca7ae(param_3,&local_c8,&local_e8,2);
          fStack_10c = (float)local_c0;
          local_110 = (float)local_c8;
          local_98[3] = FUN_146c2d0a4(lVar9,&local_110);
          local_104[lVar10] = local_98[3];
          local_70 = CONCAT44(fStack_10c,local_110);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      FUN_146c01486(lVar9,puVar5[1],local_104,1);
    }
  }
  if (3.4028235e+38 <= local_88[0]) {
    local_88[0] = 3.4028235e+38;
  }
  if (3.4028235e+38 <= local_88[1]) {
    local_88[1] = 3.4028235e+38;
  }
  if (local_88[0] <= local_88[2]) {
    local_88[2] = local_88[0];
  }
  if (local_88[1] <= local_88[3]) {
    local_88[3] = local_88[1];
  }
  if (local_88[2] <= local_88[4]) {
    local_88[4] = local_88[2];
  }
  if (local_88[3] <= local_88[5]) {
    local_88[5] = local_88[3];
  }
  fVar12 = local_88[5];
  if (local_98[3] != 0xffffffff) {
    fVar12 = (float)local_70;
    if (local_88[4] <= (float)local_70) {
      fVar12 = local_88[4];
    }
    local_88[4] = fVar12;
    fVar12 = local_70._4_4_;
    if (local_88[5] <= local_70._4_4_) {
      fVar12 = local_88[5];
    }
  }
  lVar10 = 0;
  do {
    uVar6 = local_98[lVar10];
    if (uVar6 != 0xffffffff) {
      fVar2 = local_88[lVar10 * 2 + 1];
      fVar3 = param_5[1];
      uVar11 = (ulonglong)(uVar6 >> 5 & 0x3fffff8);
      uVar7 = (ulonglong)((uVar6 & 0xff) << 3);
      *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + uVar11) + uVar7) =
           (local_88[lVar10 * 2] - local_88[4]) * param_4 + *param_5;
      *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + uVar11) + 4 + uVar7) =
           (fVar2 - fVar12) * param_4 + fVar3;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcad02 FUN_146bcad02 body=1363 status=ok
// SIG undefined FUN_146bcad02(void)

void FUN_146bcad02(longlong *param_1,float param_2,char param_3,uint param_4,longlong param_5)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 local_168 [32];
  float *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118 [4];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  float local_d8 [2];
  undefined1 local_d0 [8];
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_168;
  lVar6 = *param_1;
  lVar14 = 0;
  if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(*(longlong *)(lVar6 + 0x208) + 0x28))) {
    lVar14 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x208) + 0x20) + (ulonglong)param_4 * 8);
  }
  if (param_3 != '\0') {
    uVar21 = *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144);
    uVar12 = 0;
    if ((uVar21 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x148) - 1U))) {
      uVar19 = 1;
      uVar18 = 1;
      if (1 < (int)uVar21) {
        uVar18 = uVar21;
      }
      do {
        uVar13 = (uint)uVar19;
        uVar12 = uVar18;
        if (uVar18 == uVar13) break;
        uVar16 = uVar19 >> 9;
        uVar19 = (ulonglong)(uVar13 + 1);
        uVar12 = uVar13;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar6 + 0x148))[uVar16] +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    }
    if (uVar12 == uVar21) {
      fVar26 = 0.0;
      dVar9 = 0.0;
    }
    else {
      dVar9 = 0.0;
      fVar26 = 0.0;
      do {
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(lVar14 + 0x78) + (ulonglong)(uVar12 * 3 >> 9) * 8) +
                         (ulonglong)(uVar12 * 3 & 0x1ff) * 4)) {
          local_148 = &local_c8;
          FUN_146c35244(lVar14,uVar12,local_d8,local_d0);
          lVar15 = *param_1;
          lVar7 = *(longlong *)(*(longlong *)(lVar15 + 0x130) + (ulonglong)(uVar12 >> 9) * 8);
          uVar16 = (ulonglong)(uVar12 & 0x1ff);
          uVar18 = *(uint *)(lVar7 + uVar16 * 0xc);
          lVar8 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar19 = (ulonglong)uVar18 & 0x1ff;
          local_118[0] = *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
          puVar3 = (undefined8 *)(lVar8 + uVar19 * 0x18);
          local_128 = *puVar3;
          uStack_120 = puVar3[1];
          uVar18 = *(uint *)(lVar7 + 4 + uVar16 * 0xc);
          lVar8 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar19 = (ulonglong)uVar18 & 0x1ff;
          local_118[3] = (double)*(undefined8 *)(lVar8 + 0x10 + uVar19 * 0x18);
          puVar3 = (undefined8 *)(lVar8 + uVar19 * 0x18);
          local_118[1] = (double)*puVar3;
          local_118[2] = (double)puVar3[1];
          uVar18 = *(uint *)(lVar7 + 8 + uVar16 * 0xc);
          lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar19 = (ulonglong)uVar18 & 0x1ff;
          local_e8 = *(undefined8 *)(lVar15 + 0x10 + uVar19 * 0x18);
          puVar4 = (undefined4 *)(lVar15 + uVar19 * 0x18);
          local_f8 = *puVar4;
          uStack_f4 = puVar4[1];
          uStack_f0 = puVar4[2];
          uStack_ec = puVar4[3];
          if (*(char *)(param_5 + 0x50) == '\x01') {
            lVar15 = 0;
            do {
              FUN_146bcb256(param_5,&local_140,(undefined4 *)((longlong)&local_128 + lVar15));
              *(undefined8 *)((longlong)local_118 + lVar15) = local_130;
              *(undefined4 *)((longlong)&local_128 + lVar15) = local_140;
              *(undefined4 *)((longlong)&local_128 + lVar15 + 4) = uStack_13c;
              *(undefined4 *)((longlong)&uStack_120 + lVar15) = uStack_138;
              *(undefined4 *)((longlong)&uStack_120 + lVar15 + 4) = uStack_134;
              lVar15 = lVar15 + 0x18;
            } while (lVar15 != 0x48);
          }
          uVar22 = (undefined4)local_e8;
          uVar23 = (undefined4)((ulonglong)local_e8 >> 0x20);
          pdVar11 = local_118;
          lVar15 = 0;
          dVar24 = (double)CONCAT44(uStack_f4,local_f8);
          fVar28 = local_c8;
          fVar27 = local_c4;
          dVar25 = (double)CONCAT44(uStack_ec,uStack_f0);
          do {
            lVar8 = lVar15 * 2;
            lVar7 = lVar15 * 8;
            fVar28 = local_d8[lVar8] - fVar28;
            fVar27 = *(float *)(local_d0 + lVar7 + -4) - fVar27;
            pdVar1 = pdVar11 + -2;
            pdVar2 = pdVar11 + -1;
            dVar24 = *pdVar1 - dVar24;
            dVar25 = *pdVar2 - dVar25;
            dVar5 = *pdVar11;
            dVar10 = dVar5 - (double)CONCAT44(uVar23,uVar22);
            fVar26 = fVar26 + SQRT(fVar28 * fVar28 + fVar27 * fVar27);
            dVar9 = dVar9 + SQRT(dVar10 * dVar10 + dVar24 * dVar24 + dVar25 * dVar25);
            lVar15 = lVar15 + 1;
            pdVar11 = pdVar11 + 3;
            uVar22 = SUB84(dVar5,0);
            uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar24 = *pdVar1;
            fVar28 = local_d8[lVar8];
            fVar27 = *(float *)(local_d0 + lVar7 + -4);
            dVar25 = *pdVar2;
          } while (lVar15 != 3);
        }
        uVar18 = uVar12 + 1;
        if ((int)(uVar12 + 1) < (int)uVar21) {
          uVar18 = uVar21;
        }
        do {
          uVar13 = uVar18;
          if (uVar18 - 1 == uVar12) break;
          uVar12 = uVar12 + 1;
          uVar13 = uVar12;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar6 + 0x148) +
                                               (ulonglong)(uVar12 >> 9) * 8) +
                                             (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
        uVar12 = uVar13;
      } while (uVar12 != uVar21);
    }
    param_2 = (float)(~-(uint)(0.0001 < fVar26) & (uint)param_2 |
                     (uint)((float)(dVar9 / (double)fVar26) * param_2) & -(uint)(0.0001 < fVar26));
  }
  uVar21 = *(int *)(lVar14 + 8) * 0x200 + *(int *)(lVar14 + 0xc);
  uVar12 = 0;
  if ((uVar21 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar14 + 0x10) - 1U))) {
    uVar18 = 1;
    uVar13 = 1;
    if (1 < (int)uVar21) {
      uVar18 = uVar21;
    }
    do {
      uVar12 = uVar18;
      if (uVar18 == uVar13) break;
      uVar17 = uVar13 >> 9;
      uVar20 = uVar13 & 0x1ff;
      uVar12 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar14 + 0x10))[uVar17] +
                                         (ulonglong)uVar20 * 2) - 1U));
  }
  do {
    if (uVar12 == uVar21) {
      if (*(char *)(param_5 + 0x50) == '\x01') {
        *(undefined1 *)(param_5 + 0x50) = 0;
      }
      if ((local_c0 ^ (ulonglong)local_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar19 = (ulonglong)(uVar12 >> 5 & 0x3fffff8);
    lVar6 = *(longlong *)(*(longlong *)(lVar14 + 0x48) + uVar19);
    uVar18 = (uVar12 & 0xff) << 3;
    fVar26 = *(float *)(lVar6 + (ulonglong)(uVar18 | 4));
    *(float *)(lVar6 + (ulonglong)uVar18) = *(float *)(lVar6 + (ulonglong)uVar18) * param_2;
    *(float *)(*(longlong *)(*(longlong *)(lVar14 + 0x48) + uVar19) + (ulonglong)(uVar18 | 4)) =
         fVar26 * param_2;
    uVar18 = uVar12 + 1;
    if ((int)(uVar12 + 1) < (int)uVar21) {
      uVar18 = uVar21;
    }
    uVar13 = uVar12;
    do {
      uVar12 = uVar18;
      if (uVar18 - 1 == uVar13) break;
      uVar12 = uVar13 + 1;
      uVar13 = uVar12;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar14 + 0x10) +
                                           (ulonglong)(uVar12 >> 9) * 8) +
                                         (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146bcb256 FUN_146bcb256 body=174 status=ok
// SIG undefined FUN_146bcb256(void)

double * FUN_146bcb256(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(double *)(param_1 + 0x48) * param_3[2];
  local_48 = *(double *)(param_1 + 0x40) * param_3[1];
  local_50 = *(double *)(param_1 + 0x38) * *param_3;
  FUN_146bed047(&local_38,param_1);
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x28);
  *param_2 = local_38 + *(double *)(param_1 + 0x20);
  param_2[1] = local_30 + dVar2;
  param_2[2] = local_28 + dVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bcb306 FUN_146bcb306 body=104 status=ok
// SIG undefined FUN_146bcb306(void)

void FUN_146bcb306(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_146c0adfe(*param_1,*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  if (param_3 == '\0') {
    return;
  }
  FUN_146bcb36e(param_1,param_2);
  return;
}



// FUNCTION 146bcb36e FUN_146bcb36e body=1393 status=ok
// SIG undefined FUN_146bcb36e(void)

void FUN_146bcb36e(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  uint local_a8 [6];
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  int local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar12 = *param_1;
  local_b0 = param_2;
  if (*(char *)(lVar12 + 0x70) != '\x01') goto LAB_146bcb4ff;
  iVar6 = *(int *)(lVar12 + 0x20) * 0x200;
  local_70 = (undefined1 *)0x0;
  local_64 = 0x80;
  local_68 = iVar6 + *(int *)(lVar12 + 0x24);
  uVar9 = iVar6 + *(int *)(lVar12 + 0x24) + 0x1f;
  if (0x1f < uVar9) {
    if (uVar9 < 0xa0) {
      puVar8 = local_80;
LAB_146bcb88f:
      uVar9 = uVar9 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(local_80,0,uVar9 >> 5,4);
      local_64 = uVar9 & 0xffffffe0;
      puVar8 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar8 = local_80;
      }
      if (uVar9 < 0x120) goto LAB_146bcb88f;
      uVar9 = (uVar9 >> 5) << 2;
    }
    memset(puVar8,0,(ulonglong)uVar9);
    iVar6 = local_68 + 0x1f;
    if (-1 < local_68) {
      iVar6 = local_68;
    }
    if (local_68 % 0x20 != 0) {
      puVar8 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar8 = local_80;
      }
      bVar5 = -(char)(local_68 % 0x20);
      *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(puVar8 + (longlong)(iVar6 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f)
      ;
    }
  }
  if ((longlong)*(int *)(local_b0 + 1) != 0) {
    puVar3 = (uint *)*local_b0;
    puVar1 = puVar3 + *(int *)(local_b0 + 1);
    do {
      lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*puVar3 >> 9) * 8);
      uVar7 = (ulonglong)(*puVar3 & 0x1ff);
      local_88 = *(undefined4 *)(lVar12 + 8 + uVar7 * 0xc);
      local_90 = *(undefined8 *)(lVar12 + uVar7 * 0xc);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)((longlong)&local_90 + lVar12 * 4);
        puVar8 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar8 = local_80;
        }
        uVar11 = uVar9 + 0x1f;
        if (-1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        if ((*(uint *)(puVar8 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0) {
          if (*(char *)(*param_1 + 0x70) == '\x01') {
            lVar14 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (ulonglong)(uVar9 >> 9) * 8);
            uVar7 = (ulonglong)(uVar9 & 0x1ff);
            *(uint *)(lVar14 + uVar7 * 0xc) = *(uint *)(lVar14 + uVar7 * 0xc) ^ 0x80000000;
            *(uint *)(lVar14 + 4 + uVar7 * 0xc) = *(uint *)(lVar14 + 4 + uVar7 * 0xc) ^ 0x80000000;
            *(uint *)(lVar14 + 8 + uVar7 * 0xc) = *(uint *)(lVar14 + 8 + uVar7 * 0xc) ^ 0x80000000;
          }
          puVar8 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar8 = local_80;
          }
          *(uint *)(puVar8 + (longlong)((int)uVar11 >> 5) * 4) =
               *(uint *)(puVar8 + (longlong)((int)uVar11 >> 5) * 4) | 1 << ((byte)uVar9 & 0x1f);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar12 = *param_1;
LAB_146bcb4ff:
  if ((*(longlong **)(lVar12 + 0x208) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(lVar12 + 0x208) + 0xb0))(), 0 < iVar6)) {
    lVar12 = 0;
    do {
      if (lVar12 < *(int *)(*(longlong *)(*param_1 + 0x208) + 0x38)) {
        lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x30) + lVar12 * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar6 = *(int *)(lVar14 + 8) * 0x200;
      local_70 = (undefined1 *)0x0;
      local_64 = 0x80;
      local_68 = iVar6 + *(int *)(lVar14 + 0xc);
      uVar9 = iVar6 + *(int *)(lVar14 + 0xc) + 0x1f;
      if (0x1f < uVar9) {
        puVar8 = local_80;
        if (uVar9 < 0xa0) {
LAB_146bcb7b8:
          uVar9 = uVar9 >> 3 & 0xfffffffc;
        }
        else {
          FUN_14499171c(local_80,0,uVar9 >> 5,4);
          local_64 = uVar9 & 0xffffffe0;
          puVar8 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar8 = local_80;
          }
          if (uVar9 < 0x120) goto LAB_146bcb7b8;
          uVar9 = (uVar9 >> 5) << 2;
        }
        memset(puVar8,0,(ulonglong)uVar9);
        iVar6 = local_68 + 0x1f;
        if (-1 < local_68) {
          iVar6 = local_68;
        }
        if (local_68 % 0x20 != 0) {
          puVar8 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar8 = local_80;
          }
          bVar5 = -(char)(local_68 % 0x20);
          *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(puVar8 + (longlong)(iVar6 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      if ((longlong)*(int *)(local_b0 + 1) != 0) {
        piVar4 = (int *)*local_b0;
        piVar2 = piVar4 + *(int *)(local_b0 + 1);
        do {
          iVar6 = *piVar4;
          uVar11 = iVar6 * 3 + 2;
          lVar10 = *(longlong *)(lVar14 + 0x78);
          uVar9 = iVar6 * 3 + 1;
          local_90 = CONCAT44(*(undefined4 *)
                               (*(longlong *)(lVar10 + (ulonglong)(uVar9 >> 9) * 8) +
                               (ulonglong)(uVar9 & 0x1ff) * 4),
                              *(undefined4 *)
                               (*(longlong *)(lVar10 + (ulonglong)((uint)(iVar6 * 3) >> 9) * 8) +
                               (ulonglong)(iVar6 * 3 & 0x1ff) * 4));
          local_88 = *(undefined4 *)
                      (*(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
          lVar10 = 0;
          do {
            uVar9 = *(uint *)((longlong)&local_90 + lVar10 * 4);
            if (((-1 < (int)uVar9) &&
                ((int)uVar9 < *(int *)(lVar14 + 8) * 0x200 + *(int *)(lVar14 + 0xc))) &&
               ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar14 + 0x10) + (ulonglong)(uVar9 >> 9) * 8) +
                                   (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              puVar8 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar8 = local_80;
              }
              if ((*(uint *)(puVar8 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0) {
                lVar13 = *(longlong *)(lVar14 + 0x48);
                lVar15 = 0;
                do {
                  uVar11 = uVar9 * 3 + (int)lVar15;
                  local_a8[lVar15] =
                       *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar11 >> 9) * 8) +
                                (ulonglong)(uVar11 & 0x1ff) * 4);
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 3);
                local_a8[3] = local_a8[0] ^ 0x80000000;
                local_a8[4] = local_a8[1] ^ 0x80000000;
                local_a8[5] = local_a8[2] ^ 0x80000000;
                lVar13 = 0;
                do {
                  uVar11 = uVar9 * 3 + (int)lVar13;
                  *(uint *)(*(longlong *)
                             (*(longlong *)(lVar14 + 0x48) + (ulonglong)(uVar11 >> 9) * 8) +
                           (ulonglong)(uVar11 & 0x1ff) * 4) = local_a8[lVar13 + 3];
                  lVar13 = lVar13 + 1;
                } while (lVar13 != 3);
                puVar8 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar8 = local_80;
                }
                *(uint *)(puVar8 + (ulonglong)(uVar9 >> 5) * 4) =
                     *(uint *)(puVar8 + (ulonglong)(uVar9 >> 5) * 4) | 1 << ((byte)uVar9 & 0x1f);
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar2);
      }
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + 1;
      iVar6 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xb0))();
    } while (lVar12 < iVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcb8e0 FUN_146bcb8e0 body=227 status=ok
// SIG undefined FUN_146bcb8e0(void)

int FUN_146bcb8e0(longlong *param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_146bcd1d8();
  if (iVar1 == -1) {
    lVar2 = 0;
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(*(longlong *)(*param_1 + 0x208) + 0x28))) {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x20) + (ulonglong)param_3 * 8);
    }
    lVar2 = *(longlong *)
             (*(longlong *)(lVar2 + 0x48) +
             (ulonglong)((uint)((param_2 & 0xffffffff) >> 5) & 0x3fffff8));
    uVar3 = (ulonglong)(((uint)param_2 & 0xff) << 3);
    local_40 = *(undefined4 *)(lVar2 + uVar3);
    local_3c = *(undefined4 *)(lVar2 + 4 + uVar3);
    iVar1 = FUN_146c2d0a4();
    FUN_146bcd0f6((longlong)(int)param_3 * 0xa8 + *(longlong *)(param_4 + 0x2a0),
                  param_2 & 0xffffffff,iVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bcb9c4 FUN_146bcb9c4 body=301 status=ok
// SIG undefined FUN_146bcb9c4(void)

int FUN_146bcb9c4(longlong *param_1,int param_2,uint param_3,longlong param_4,longlong param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = FUN_146bcd1d8();
  if (iVar3 == -1) {
    lVar4 = 0;
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(*(longlong *)(*param_1 + 0x208) + 0x38))) {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x30) + (ulonglong)param_3 * 8);
    }
    lVar4 = *(longlong *)(lVar4 + 0x48);
    lVar5 = 0;
    do {
      uVar6 = param_2 * 3 + (int)lVar5;
      uVar1 = *(undefined4 *)
               (*(longlong *)(lVar4 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4)
      ;
      local_4c[lVar5] = uVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    iVar3 = FUN_146c2f9e2(uVar1,local_4c);
    FUN_146bcd0f6((longlong)(int)param_3 * 0xa8 + *(longlong *)(param_4 + 0x2b0),param_2,iVar3);
    if (param_5 != 0) {
      lVar4 = *(longlong *)(param_5 + 0x50);
      lVar5 = (longlong)(int)param_3 * 0x10;
      iVar2 = *(int *)(lVar4 + 8 + lVar5);
      *(uint *)(lVar4 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar4 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(lVar4 + lVar5),iVar2);
      }
      *(int *)(*(longlong *)(lVar4 + lVar5) + (longlong)iVar2 * 4) = iVar3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bcbaf2 FUN_146bcbaf2 body=232 status=ok
// SIG undefined FUN_146bcbaf2(void)

int FUN_146bcbaf2(longlong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = FUN_146bcd1d8(param_3 + 0x1f8);
  if (iVar3 == -1) {
    puVar1 = (undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x40) + 0x48) +
               (ulonglong)((uint)(param_2 >> 4) & 0x3fffff8)) +
             (ulonglong)(((uint)param_2 & 0x7f) << 4));
    local_48 = *puVar1;
    uStack_40 = puVar1[1];
    iVar3 = FUN_146c32f5e();
    FUN_146bcd0f6(param_3 + 0x1f8,param_2 & 0xffffffff,iVar3);
    if (param_4 != 0) {
      iVar2 = *(int *)(param_4 + 0x68);
      *(uint *)(param_4 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_4 + 0x6c) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(param_4 + 0x60),iVar2);
      }
      *(int *)(*(longlong *)(param_4 + 0x60) + (longlong)iVar2 * 4) = iVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bcbbdc FUN_146bcbbdc body=4969 status=ok
// SIG undefined FUN_146bcbbdc(void)

void FUN_146bcbbdc(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,char param_6)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  uint local_8c;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146bccf46(param_3);
  FUN_146c369d2(param_3,*param_1);
  local_150 = param_3;
  FUN_146bcd022(param_3,*(undefined4 *)(param_2 + 0x50));
  uVar22 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar27 = 0;
  if ((uVar22 != 0) &&
     (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar7 = 1;
    uVar19 = 1;
    if (1 < (int)uVar22) {
      uVar7 = uVar22;
    }
    do {
      uVar27 = uVar7;
      if (uVar7 == uVar19) break;
      uVar21 = uVar19 >> 9;
      uVar24 = uVar19 & 0x1ff;
      uVar27 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar21] +
                                         (ulonglong)uVar24 * 2) - 1U));
  }
  local_148 = param_2;
  local_140 = param_1;
  if (uVar27 != uVar22) {
    local_138 = param_4 + 4;
    local_130 = param_5 + 4;
    do {
      uVar28 = (ulonglong)(uVar27 >> 9);
      lVar16 = *(longlong *)(*(longlong *)(local_148 + 0x10) + uVar28 * 8);
      uVar29 = (ulonglong)(uVar27 & 0x1ff);
      local_108 = *(longlong **)(lVar16 + 0x10 + uVar29 * 0x18);
      puVar2 = (undefined8 *)(lVar16 + uVar29 * 0x18);
      local_118 = (longlong *)*puVar2;
      uStack_110 = (undefined **)puVar2[1];
      pcVar3 = (code *)*param_4;
      if (pcVar3 != (code *)0x0) {
        local_f0 = (double)CONCAT44(local_f0._4_4_,uVar27);
        plVar26 = (longlong *)param_4[2];
        if ((longlong *)param_4[2] == (longlong *)0x0) {
          plVar26 = local_138;
        }
        uVar13 = (**(code **)(*plVar26 + 8))();
        (*pcVar3)(&local_d8,uVar13,&local_f0,&local_118);
        local_118 = (longlong *)local_d8;
        uStack_110 = (undefined **)uStack_d0;
        local_108 = local_c8;
      }
      local_c8 = local_108;
      local_d8 = (undefined **)local_118;
      uStack_d0 = (longlong *)uStack_110;
      uStack_b8 = DAT_14c846338;
      uStack_c0 = DAT_14c846330;
      local_ac = DAT_14c846338;
      uStack_b4 = SUB84(DAT_14c846330,0);
      uStack_b0 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
      local_a8 = DAT_14c84635c;
      local_a0 = 0;
      local_9e = 0;
      uVar7 = FUN_146c02208(*local_140,&local_d8);
      FUN_146bcd0f6(local_150,uVar27,uVar7);
      if ((*(char *)(local_148 + 0x70) == '\x01') &&
         (lVar16 = *local_140, *(char *)(lVar16 + 0x70) == '\x01')) {
        lVar17 = *(longlong *)(*(longlong *)(local_148 + 0x60) + uVar28 * 8);
        fVar30 = *(float *)(lVar17 + uVar29 * 0xc);
        fVar31 = *(float *)(lVar17 + 4 + uVar29 * 0xc);
        fVar32 = *(float *)(lVar17 + 8 + uVar29 * 0xc);
        pcVar3 = (code *)*param_5;
        bVar18 = 1;
        if (pcVar3 != (code *)0x0) {
          local_e0 = (double)fVar32;
          local_e8 = (double)fVar31;
          local_f0 = (double)fVar30;
          plVar26 = (longlong *)param_5[2];
          if ((longlong *)param_5[2] == (longlong *)0x0) {
            plVar26 = local_130;
          }
          local_8c = uVar27;
          uVar13 = (**(code **)(*plVar26 + 8))();
          (*pcVar3)(&local_d8,uVar13,&local_8c,&local_f0);
          fVar32 = (float)(double)local_c8;
          fVar31 = (float)(double)uStack_d0;
          fVar30 = (float)(double)local_d8;
          lVar16 = *local_140;
          bVar18 = *(byte *)(lVar16 + 0x70);
        }
        if ((bVar18 & 1) != 0) {
          lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x60) + (ulonglong)(uVar7 >> 9) * 8);
          uVar20 = (ulonglong)(uVar7 & 0x1ff);
          *(float *)(lVar16 + uVar20 * 0xc) = fVar30;
          *(float *)(lVar16 + 4 + uVar20 * 0xc) = fVar31;
          *(float *)(lVar16 + 8 + uVar20 * 0xc) = fVar32;
        }
      }
      if ((*(char *)(local_148 + 0xb0) == '\x01') && (*(char *)(*local_140 + 0xb0) == '\x01')) {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(*local_140 + 0xa0) + (ulonglong)(uVar7 >> 9) * 8) +
         (ulonglong)(uVar7 & 0x1ff) * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(local_148 + 0xa0) + uVar28 * 8) + uVar29 * 8);
      }
      if ((*(char *)(local_148 + 0x90) == '\x01') && (*(char *)(*local_140 + 0x90) == '\x01')) {
        lVar16 = *(longlong *)(*(longlong *)(local_148 + 0x80) + uVar28 * 8);
        lVar17 = *(longlong *)(*(longlong *)(*local_140 + 0x80) + (ulonglong)(uVar7 >> 9) * 8);
        uVar13 = *(undefined8 *)(lVar16 + uVar29 * 0xc);
        *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc) =
             *(undefined4 *)(lVar16 + 8 + uVar29 * 0xc);
        *(undefined8 *)(lVar17 + (ulonglong)(uVar7 & 0x1ff) * 0xc) = uVar13;
      }
      uVar7 = uVar27 + 1;
      if ((int)(uVar27 + 1) < (int)uVar22) {
        uVar7 = uVar22;
      }
      do {
        uVar19 = uVar7;
        if (uVar7 - 1 == uVar27) break;
        uVar27 = uVar27 + 1;
        uVar19 = uVar27;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_148 + 0x28) +
                                             (ulonglong)(uVar27 >> 9) * 8) +
                                           (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
      uVar27 = uVar19;
    } while (uVar27 != uVar22);
  }
  plVar26 = (longlong *)0x0;
  if (*(char *)(local_148 + 0x1a8) != '\0') {
    plVar26 = (longlong *)(ulonglong)*(byte *)(*local_140 + 0x1a8);
  }
  uVar22 = *(int *)(local_148 + 0x140) * 0x200 + *(int *)(local_148 + 0x144);
  uVar27 = 0;
  if ((uVar22 != 0) &&
     (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_148 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar19 = 1;
    if (1 < (int)uVar22) {
      uVar7 = uVar22;
    }
    do {
      uVar27 = uVar7;
      if (uVar7 == uVar19) break;
      uVar21 = uVar19 >> 9;
      uVar24 = uVar19 & 0x1ff;
      uVar27 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_148 + 0x148))[uVar21] +
                                         (ulonglong)uVar24 * 2) - 1U));
  }
  plVar25 = local_150 + 0x15;
  if (uVar27 != uVar22) {
    local_120 = local_150 + 0x2a;
    local_130 = (longlong *)CONCAT44(local_130._4_4_,uVar22);
    local_138 = plVar26;
    local_128 = param_4;
    do {
      iVar12 = -1;
      if (((char)local_138 != '\0') &&
         (iVar8 = FUN_146bc96d4(local_148,uVar27), plVar26 = local_120, iVar8 != -1)) {
        piVar14 = (int *)FUN_146bcd17e(local_120,iVar8);
        if (piVar14 == (int *)0x0) {
          iVar12 = *(int *)(*local_140 + 0x1b0);
          *(int *)(*local_140 + 0x1b0) = iVar12 + 1;
          FUN_146bcd0f6(plVar26,iVar8,iVar12);
        }
        else {
          iVar12 = *piVar14;
        }
      }
      plVar26 = local_150;
      lVar16 = *(longlong *)(*(longlong *)(local_148 + 0x130) + (ulonglong)(uVar27 >> 9) * 8);
      uVar29 = (ulonglong)(uVar27 & 0x1ff);
      uVar11 = *(undefined4 *)(lVar16 + uVar29 * 0xc);
      uVar10 = *(undefined4 *)(lVar16 + 4 + uVar29 * 0xc);
      lVar17 = *local_140;
      uVar9 = FUN_146bcd1d8(local_150,*(undefined4 *)(lVar16 + 8 + uVar29 * 0xc));
      uVar10 = FUN_146bcd1d8(plVar26,uVar10);
      uVar11 = FUN_146bcd1d8(plVar26,uVar11);
      local_d8 = (undefined **)CONCAT44(uVar10,uVar11);
      uStack_d0 = (longlong *)CONCAT44(uStack_d0._4_4_,uVar9);
      iVar12 = FUN_146c01152(lVar17,&local_d8,iVar12);
      if (-1 < iVar12) {
        FUN_146bcd0f6(plVar25,uVar27,iVar12);
      }
      uVar22 = uVar27 + 1;
      if ((int)(uVar27 + 1) < (int)(uint)local_130) {
        uVar22 = (uint)local_130;
      }
      do {
        uVar7 = uVar22;
        if (uVar22 - 1 == uVar27) break;
        uVar27 = uVar27 + 1;
        uVar7 = uVar27;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_148 + 0x148) +
                                             (ulonglong)(uVar27 >> 9) * 8) +
                                           (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
      uVar27 = uVar7;
      param_4 = local_128;
    } while (uVar27 != (uint)local_130);
  }
  plVar26 = local_140;
  if ((*(longlong **)(local_148 + 0x208) != (longlong *)0x0) &&
     (*(longlong *)(*local_140 + 0x208) != 0)) {
    local_128 = param_4;
    uVar27 = (**(code **)(**(longlong **)(local_148 + 0x208) + 0xb0))();
    uVar22 = (**(code **)(**(longlong **)(*plVar26 + 0x208) + 0xb0))();
    if ((int)uVar22 < (int)uVar27) {
      uVar27 = uVar22;
    }
    lVar16 = local_148;
    if (0 < (int)uVar27) {
      uVar29 = 0;
      plVar26 = local_150;
      do {
        if ((longlong)uVar29 < (longlong)*(int *)(*(longlong *)(lVar16 + 0x208) + 0x38)) {
          lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(lVar16 + 0x208) + 0x30) + uVar29 * 8);
        }
        else {
          lVar17 = 0;
        }
        if ((((longlong)uVar29 < (longlong)*(int *)(*(longlong *)(*local_140 + 0x208) + 0x38)) &&
            (lVar17 != 0)) &&
           (lVar4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(*local_140 + 0x208) + 0x30) + uVar29 * 8),
           lVar4 != 0)) {
          lVar16 = uVar29 * 0xa8 + plVar26[0x56];
          FUN_146bcd022(lVar16,*(undefined4 *)(lVar17 + 0x38));
          local_88[0] = *param_5;
          local_78[0] = 0;
          if (local_88[0] != 0) {
            plVar26 = (longlong *)param_5[2];
            if ((longlong *)param_5[2] == (longlong *)0x0) {
              plVar26 = param_5 + 4;
            }
            (**(code **)*plVar26)(plVar26,local_78);
          }
          local_158 = lVar16;
          FUN_146bcd242(lVar17,lVar4,plVar25,local_88);
          plVar26 = local_150;
          lVar16 = local_148;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar27);
    }
    uVar27 = (**(code **)(**(longlong **)(lVar16 + 0x208) + 0xa0))();
    plVar26 = local_140;
    uVar22 = (**(code **)(**(longlong **)(*local_140 + 0x208) + 0xa0))();
    if ((int)uVar22 < (int)uVar27) {
      uVar27 = uVar22;
    }
    lVar16 = local_148;
    if (0 < (int)uVar27) {
      uVar29 = 0;
      do {
        if ((longlong)uVar29 < (longlong)*(int *)(*(longlong *)(lVar16 + 0x208) + 0x28)) {
          lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(lVar16 + 0x208) + 0x20) + uVar29 * 8);
        }
        else {
          lVar17 = 0;
        }
        if ((((longlong)uVar29 < (longlong)*(int *)(*(longlong *)(*plVar26 + 0x208) + 0x28)) &&
            (lVar17 != 0)) &&
           (lVar4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(*plVar26 + 0x208) + 0x20) + uVar29 * 8),
           lVar4 != 0)) {
          lVar16 = uVar29 * 0xa8 + local_150[0x54];
          FUN_146bcd022(lVar16,*(undefined4 *)(lVar17 + 0x38));
          FUN_146bcd63e(lVar17,lVar4,plVar25,lVar16);
          lVar16 = local_148;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar27);
    }
    plVar23 = *(longlong **)(lVar16 + 0x208);
    lVar16 = plVar23[8];
    if ((lVar16 != 0) &&
       (lVar17 = *(longlong *)(*(longlong *)(*plVar26 + 0x208) + 0x40), lVar17 != 0)) {
      plVar23 = local_150 + 0x3f;
      FUN_146bcd022(plVar23,*(undefined4 *)(lVar16 + 0x38));
      FUN_146bcd948(lVar16,lVar17,plVar25,plVar23);
      plVar23 = *(longlong **)(local_148 + 0x208);
    }
    lVar16 = plVar23[9];
    if ((lVar16 != 0) &&
       (lVar17 = *(longlong *)(*(longlong *)(*plVar26 + 0x208) + 0x48), lVar17 != 0)) {
      plVar26 = local_150 + 0x17;
      local_118 = (longlong *)&DAT_100000000;
      local_108 = (longlong *)&DAT_ffffffff;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      uStack_110 = (undefined **)plVar26;
      if ((int)local_150[0x1a] == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_118);
        iVar12 = (int)local_150[0x1a];
      }
      uStack_c0 = local_108;
      plVar23 = uStack_c0;
      uStack_b8 = (undefined4)uStack_100;
      uStack_b4 = (undefined4)(uStack_100 >> 0x20);
      uStack_d0 = local_118;
      local_c8 = (longlong *)uStack_110;
      uStack_c0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
      iVar8 = uStack_c0._4_4_;
      local_d8 = (undefined **)plVar25;
      if ((uStack_c0._4_4_ != iVar12) || (uStack_c0 = plVar23, uStack_110 != (undefined **)plVar26))
      {
        do {
          uStack_c0 = plVar23;
          uVar27 = *(uint *)((longlong)*local_d8 + (longlong)iVar8 * 0x10);
          uVar22 = *(uint *)((longlong)*local_d8 + 4 + (longlong)iVar8 * 0x10);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar17 + 0x20) + (ulonglong)(uVar22 >> 9) * 8) +
           (ulonglong)(uVar22 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar16 + 0x20) + (ulonglong)(uVar27 >> 9) * 8) +
                (ulonglong)(uVar27 & 0x1ff) * 4);
          uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
          FUN_1449c0562(&uStack_d0);
          iVar8 = uStack_c0._4_4_;
          plVar23 = uStack_c0;
        } while (local_d8 != (undefined **)plVar25 ||
                 (local_c8 != plVar26 || uStack_c0._4_4_ != iVar12));
      }
      plVar23 = *(longlong **)(local_148 + 0x208);
      plVar26 = local_140;
    }
    uVar27 = (**(code **)(*plVar23 + 0xc0))();
    uVar22 = (**(code **)(**(longlong **)(*plVar26 + 0x208) + 0xc0))();
    if ((int)uVar22 < (int)uVar27) {
      uVar27 = uVar22;
    }
    if (0 < (int)uVar27) {
      plVar26 = local_150 + 0x17;
      local_138 = (longlong *)(ulonglong)uVar27;
      plVar23 = (longlong *)0x0;
      do {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_148 + 0x208) + 0x60) + (longlong)plVar23 * 8);
        lVar17 = *(longlong *)
                  (*(longlong *)(*(longlong *)(*local_140 + 0x208) + 0x60) + (longlong)plVar23 * 8);
        local_118 = (longlong *)&DAT_100000000;
        local_108 = (longlong *)&DAT_ffffffff;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        iVar12 = 0;
        uStack_110 = (undefined **)plVar26;
        if ((int)local_150[0x1a] != 0) {
          FUN_1449c0562(&local_118);
          iVar12 = (int)local_150[0x1a];
        }
        uStack_c0 = local_108;
        plVar15 = uStack_c0;
        uStack_b8 = (uint)uStack_100;
        uStack_b4 = uStack_100._4_4_;
        uStack_d0 = local_118;
        local_c8 = (longlong *)uStack_110;
        uStack_c0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
        iVar8 = uStack_c0._4_4_;
        local_d8 = (undefined **)plVar25;
        if ((uStack_c0._4_4_ != iVar12) ||
           (uStack_c0 = plVar15, uStack_110 != (undefined **)plVar26)) {
          do {
            uStack_c0 = plVar15;
            uVar27 = *(uint *)((longlong)*local_d8 + (longlong)iVar8 * 0x10);
            uVar22 = *(uint *)((longlong)*local_d8 + 4 + (longlong)iVar8 * 0x10);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x20) + (ulonglong)(uVar22 >> 9) * 8) +
             (ulonglong)(uVar22 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar16 + 0x20) + (ulonglong)(uVar27 >> 9) * 8) +
                  (ulonglong)(uVar27 & 0x1ff) * 4);
            uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
            FUN_1449c0562(&uStack_d0);
            iVar8 = uStack_c0._4_4_;
            plVar15 = uStack_c0;
          } while (local_d8 != (undefined **)plVar25 ||
                   (local_c8 != plVar26 || uStack_c0._4_4_ != iVar12));
        }
        plVar23 = (longlong *)((longlong)plVar23 + 1);
      } while (plVar23 != local_138);
    }
    uVar27 = (**(code **)(**(longlong **)(local_148 + 0x208) + 0xd0))();
    uVar22 = (**(code **)(**(longlong **)(*local_140 + 0x208) + 0xd0))();
    if ((int)uVar22 < (int)uVar27) {
      uVar27 = uVar22;
    }
    if (0 < (int)uVar27) {
      plVar26 = local_150 + 2;
      uVar29 = 0;
      plVar25 = local_150;
      do {
        lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(local_148 + 0x208) + 0x50) + uVar29 * 8);
        lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(*local_140 + 0x208) + 0x50) + uVar29 * 8)
        ;
        local_118 = (longlong *)&DAT_100000000;
        local_108 = (longlong *)&DAT_ffffffff;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        iVar12 = 0;
        uStack_110 = (undefined **)plVar26;
        if ((int)plVar25[5] != 0) {
          FUN_1449c0562(&local_118);
          iVar12 = (int)local_150[5];
          plVar25 = local_150;
        }
        uStack_c0 = local_108;
        plVar23 = uStack_c0;
        uStack_b8 = (uint)uStack_100;
        uStack_b4 = uStack_100._4_4_;
        uStack_d0 = local_118;
        local_c8 = (longlong *)uStack_110;
        uStack_c0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
        iVar8 = uStack_c0._4_4_;
        local_d8 = (undefined **)plVar25;
        if ((uStack_c0._4_4_ != iVar12) ||
           (uStack_c0 = plVar23, uStack_110 != (undefined **)plVar26)) {
          do {
            uStack_c0 = plVar23;
            uVar22 = *(uint *)((longlong)*local_d8 + (longlong)iVar8 * 0x10);
            uVar7 = *(uint *)((longlong)*local_d8 + 4 + (longlong)iVar8 * 0x10);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
             (ulonglong)(uVar7 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar16 + 0x20) + (ulonglong)(uVar22 >> 9) * 8) +
                  (ulonglong)(uVar22 & 0x1ff) * 4);
            uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
            FUN_1449c0562(&uStack_d0);
            plVar25 = local_150;
            iVar8 = uStack_c0._4_4_;
            plVar23 = uStack_c0;
          } while (local_d8 != (undefined **)local_150 ||
                   (local_c8 != plVar26 || uStack_c0._4_4_ != iVar12));
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar27);
    }
    plVar26 = local_140;
    lVar16 = *(longlong *)(local_148 + 0x208);
    if ((*(longlong **)(lVar16 + 0xc0) == (longlong *)0x0) ||
       (*(longlong *)(*(longlong *)(*local_140 + 0x208) + 0xc0) == 0)) {
      ppuVar1 = (undefined **)(lVar16 + 0x70);
      uVar29 = lVar16 + 0x80;
      local_118 = (longlong *)0x100000000;
      local_108 = (longlong *)0xffffffff;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      uStack_110 = (undefined **)uVar29;
      if (*(int *)(lVar16 + 0x98) == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_118);
        iVar12 = *(int *)(lVar16 + 0x98);
      }
      uStack_c0 = local_108;
      uVar28 = (ulonglong)uStack_c0;
      uStack_b8 = (undefined4)uStack_100;
      uStack_b4 = (undefined4)(uStack_100 >> 0x20);
      uStack_d0 = local_118;
      local_c8 = (longlong *)uStack_110;
      uStack_c0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
      iVar8 = uStack_c0._4_4_;
      local_d8 = ppuVar1;
      if ((uStack_c0._4_4_ != iVar12) ||
         (uStack_c0 = (longlong *)(ulonglong)local_108, uStack_110 != (undefined **)uVar29)) {
        do {
          uStack_c0 = (longlong *)uVar28;
          puVar5 = *local_d8;
          lVar16 = FUN_146bcdc68(*(undefined8 *)(*plVar26 + 0x208),
                                 *(undefined8 *)(puVar5 + (longlong)iVar8 * 0x18));
          if (lVar16 != 0) {
            FUN_146bcdd1a(lVar16,*(undefined8 *)(puVar5 + (longlong)iVar8 * 0x18 + 8),local_150);
          }
          uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
          FUN_1449c0562(&uStack_d0);
          iVar8 = uStack_c0._4_4_;
          uVar28 = (ulonglong)uStack_c0;
        } while (local_d8 != ppuVar1 ||
                 (local_c8 != (longlong *)uVar29 || uStack_c0._4_4_ != iVar12));
      }
    }
    else {
      cVar6 = (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0xc0))();
      if (cVar6 == '\0') {
        FUN_146c28d82(*(undefined8 *)(*plVar26 + 0x208),*(undefined8 *)(local_148 + 0x208));
      }
      lVar16 = *(longlong *)(local_148 + 0x208);
      plVar25 = (longlong *)(lVar16 + 0x70);
      plVar23 = (longlong *)(lVar16 + 0x80);
      local_d8 = (undefined **)&DAT_100000000;
      local_c8 = (longlong *)0xffffffff;
      uStack_c0 = (longlong *)((ulonglong)uStack_c0 & 0xffffffff00000000);
      uStack_d0 = plVar23;
      if (*(int *)(lVar16 + 0x98) == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar12 = *(int *)(lVar16 + 0x98);
      }
      uStack_100 = (ulonglong)local_c8;
      uVar29 = uStack_100;
      uStack_f8 = (ulonglong)uStack_c0;
      uStack_110 = local_d8;
      local_108 = uStack_d0;
      uStack_100._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      iVar8 = uStack_100._4_4_;
      local_118 = plVar25;
      if ((uStack_100._4_4_ != iVar12) ||
         (plVar26 = local_140, uStack_100 = uVar29, uStack_d0 != plVar23)) {
        do {
          uStack_100 = uVar29;
          lVar16 = *local_118;
          lVar17 = FUN_146bcdc68(*(undefined8 *)(*local_140 + 0x208),
                                 *(undefined8 *)(lVar16 + (longlong)iVar8 * 0x18));
          if (lVar17 != 0) {
            lVar16 = lVar16 + (longlong)iVar8 * 0x18;
            if (cVar6 == '\0') {
              uStack_d0 = (longlong *)0x0;
              local_c8 = (longlong *)0x0;
              local_d8 = &PTR_FUN_149f36420;
              FUN_146be9ba2(&uStack_c0);
              lVar16 = *(longlong *)(lVar16 + 8);
              uStack_d0 = *(longlong **)(lVar16 + 8);
              uStack_c0 = *(longlong **)(lVar16 + 0x18);
              FUN_146bfd628(&uStack_b8,lVar16 + 0x20);
              FUN_146bcde88(&local_d8,*(longlong *)(*(longlong *)(local_148 + 0x208) + 0xc0) + 0x18,
                            *(longlong *)(*(longlong *)(*local_140 + 0x208) + 0xc0) + 0x18);
              FUN_146bcdd1a(lVar17,&local_d8,local_150);
              FUN_146becdc4(&uStack_b8,0);
              if (CONCAT44(uStack_b4,uStack_b8) != 0) {
                FUN_1400020a8();
              }
            }
            else {
              FUN_146bcdd1a(lVar17,*(undefined8 *)(lVar16 + 8),local_150);
            }
          }
          uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
          FUN_1449c0562(&uStack_110);
          plVar26 = local_140;
          iVar8 = uStack_100._4_4_;
          uVar29 = uStack_100;
        } while (local_118 != plVar25 || (local_108 != plVar23 || uStack_100._4_4_ != iVar12));
      }
    }
    lVar16 = *(longlong *)(local_148 + 0x208);
    plVar25 = (longlong *)(lVar16 + 0xe0);
    plVar23 = (longlong *)(lVar16 + 0xf0);
    local_118 = (longlong *)&DAT_100000000;
    local_108 = (longlong *)&DAT_ffffffff;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uStack_110 = (undefined **)plVar23;
    if (*(int *)(lVar16 + 0x108) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_118);
      iVar12 = *(int *)(lVar16 + 0x108);
    }
    uStack_c0 = local_108;
    plVar15 = uStack_c0;
    uStack_b8 = (undefined4)uStack_100;
    uStack_b4 = (undefined4)(uStack_100 >> 0x20);
    uStack_d0 = local_118;
    local_c8 = (longlong *)uStack_110;
    uStack_c0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    iVar8 = uStack_c0._4_4_;
    local_d8 = (undefined **)plVar25;
    if ((uStack_c0._4_4_ != iVar12) ||
       (param_4 = local_128, uStack_c0 = plVar15, uStack_110 != (undefined **)plVar23)) {
      do {
        uStack_c0 = plVar15;
        lVar16 = (longlong)*local_d8;
        cVar6 = FUN_146bce360(*(undefined8 *)(*plVar26 + 0x208),
                              *(undefined8 *)(lVar16 + (longlong)iVar8 * 0x18));
        if (cVar6 != '\0') {
          puVar2 = (undefined8 *)(lVar16 + (longlong)iVar8 * 0x18);
          plVar15 = (longlong *)FUN_146bce3f6(*(undefined8 *)(*plVar26 + 0x208),*puVar2);
          (**(code **)(*plVar15 + 0x30))(plVar15,puVar2[1],local_150);
        }
        uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        FUN_1449c0562(&uStack_d0);
        param_4 = local_128;
        iVar8 = uStack_c0._4_4_;
        plVar15 = uStack_c0;
      } while (local_d8 != (undefined **)plVar25 ||
               (local_c8 != plVar23 || uStack_c0._4_4_ != iVar12));
    }
  }
  plVar25 = local_150;
  if (param_6 != '\0') {
    plVar23 = local_150 + 0x1f;
    plVar15 = local_150 + 0x21;
    local_118 = (longlong *)&DAT_100000000;
    local_108 = (longlong *)&DAT_ffffffff;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uStack_110 = (undefined **)plVar15;
    if ((int)local_150[0x24] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_118);
      iVar12 = (int)plVar25[0x24];
    }
    uStack_c0 = local_108;
    plVar25 = uStack_c0;
    uStack_b8 = (undefined4)uStack_100;
    uStack_b4 = (undefined4)(uStack_100 >> 0x20);
    uStack_d0 = local_118;
    local_c8 = (longlong *)uStack_110;
    uStack_c0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    iVar8 = uStack_c0._4_4_;
    local_d8 = (undefined **)plVar23;
    if ((uStack_c0._4_4_ != iVar12) || (uStack_c0 = plVar25, uStack_110 != (undefined **)plVar15)) {
      do {
        uStack_c0 = plVar25;
        FUN_146c0adfe(*plVar26,*(undefined4 *)((longlong)*local_d8 + (longlong)iVar8 * 0x10));
        uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        FUN_1449c0562(&uStack_d0);
        iVar8 = uStack_c0._4_4_;
        plVar25 = uStack_c0;
      } while (local_d8 != (undefined **)plVar23 ||
               (local_c8 != plVar15 || uStack_c0._4_4_ != iVar12));
    }
  }
  if (*param_4 != 0) {
    plVar26 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar26 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  if (*param_5 != 0) {
    plVar26 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar26 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bccf46 FUN_146bccf46 body=220 status=ok
// SIG undefined FUN_146bccf46(void)

void FUN_146bccf46(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1407058ce();
  FUN_1407058ce(param_1 + 0x50);
  FUN_1407058ce(param_1 + 0xa8);
  FUN_1407058ce(param_1 + 0xf8);
  FUN_1407058ce(param_1 + 0x150);
  FUN_1407058ce(param_1 + 0x1a0);
  FUN_1407058ce(param_1 + 0x1f8);
  FUN_1407058ce(param_1 + 0x248);
  if ((longlong)*(int *)(param_1 + 0x2a8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2a0);
    lVar1 = (longlong)*(int *)(param_1 + 0x2a8) * 0xa8 + lVar2;
    do {
      FUN_1407058ce(lVar2);
      FUN_1407058ce(lVar2 + 0x50);
      lVar2 = lVar2 + 0xa8;
    } while (lVar2 != lVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    lVar1 = (longlong)*(int *)(param_1 + 0x2b8) * 0xa8 + lVar2;
    do {
      FUN_1407058ce(lVar2);
      FUN_1407058ce(lVar2 + 0x50);
      lVar2 = lVar2 + 0xa8;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146bcd022 FUN_146bcd022 body=211 status=ok
// SIG undefined FUN_146bcd022(void)

void FUN_146bcd022(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0xa0) == '\x01') &&
     ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < param_2)) {
    if ((int)param_2 < 0) goto LAB_146bcd0ed;
    FUN_140ab2830(param_1,param_2);
    iVar2 = 1;
    if (3 < param_2) {
      uVar1 = (param_2 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar2)) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_140264164(param_1);
    }
  }
  if ((*(char *)(param_1 + 0xa1) == '\x01') &&
     ((uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84)) < param_2)) {
    if ((int)param_2 < 0) {
LAB_146bcd0ed:
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)param_2);
    }
    FUN_140ab2830(param_1 + 0x50,param_2);
    iVar2 = 1;
    if (3 < param_2) {
      uVar1 = (param_2 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0x98) < iVar2)) {
      *(int *)(param_1 + 0x98) = iVar2;
      FUN_140264164(param_1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 146bcd0f6 FUN_146bcd0f6 body=135 status=ok
// SIG undefined FUN_146bcd0f6(void)

void FUN_146bcd0f6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  local_44 = param_3;
  local_40 = &local_48;
  local_38 = &local_44;
  FUN_140263e2a(param_1,local_2c,&local_40,0);
  local_40 = &local_44;
  local_38 = &local_48;
  FUN_140263e2a(param_1 + 0x50,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bcd17e FUN_146bcd17e body=89 status=ok
// SIG undefined FUN_146bcd17e(void)

longlong FUN_146bcd17e(longlong *param_1,uint param_2)

{
  longlong lVar1;
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
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x10;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x10) == param_2) goto LAB_146bcd188;
        iVar4 = *(int *)(lVar3 + 8);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146bcd188:
  lVar1 = lVar3 + 4;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146bcd1d8 FUN_146bcd1d8 body=106 status=ok
// SIG undefined FUN_146bcd1d8(void)

undefined4 FUN_146bcd1d8(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x10;
        if (*(uint *)(*param_1 + (longlong)iVar3 * 0x10) == param_2) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 146bcd242 FUN_146bcd242 body=1019 status=ok
// SIG undefined FUN_146bcd242(void)

void FUN_146bcd242(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  float local_7c [3];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar15 = 0;
  if ((uVar9 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x10) - 1U))) {
    uVar14 = 1;
    uVar6 = 1;
    if (1 < (int)uVar9) {
      uVar14 = uVar9;
    }
    do {
      uVar15 = uVar14;
      if (uVar14 == uVar6) break;
      uVar8 = uVar6 >> 9;
      uVar11 = uVar6 & 0x1ff;
      uVar15 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x10))[uVar8] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  if (uVar15 != uVar9) {
    do {
      uVar4 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar12 = 0;
      do {
        uVar14 = uVar15 * 3 + (int)lVar12;
        local_7c[lVar12] =
             *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar14 >> 9) * 8) +
                       (ulonglong)(uVar14 & 0x1ff) * 4);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      pcVar3 = (code *)*param_4;
      if (pcVar3 != (code *)0x0) {
        local_60 = (double)local_7c[2];
        uStack_68 = (longlong *)(double)local_7c[1];
        local_70 = (double)local_7c[0];
        plVar7 = (longlong *)param_4[2];
        if ((longlong *)param_4[2] == (longlong *)0x0) {
          plVar7 = param_4 + 4;
        }
        local_4c = uVar4;
        uVar5 = (**(code **)(*plVar7 + 8))();
        (*pcVar3)(&local_a8,uVar5,&local_4c,&local_70);
        local_7c[2] = (float)(double)CONCAT44(uStack_94,uStack_98);
        local_7c[1] = (float)(double)CONCAT44(uStack_9c,local_a0);
        local_7c[0] = (float)(double)local_a8;
      }
      FUN_146c2f9e2(param_2,local_7c);
      FUN_146bcd0f6(param_5,uVar15);
      uVar14 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar9) {
        uVar14 = uVar9;
      }
      do {
        uVar6 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar6 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar15 = uVar6;
    } while (uVar15 != uVar9);
  }
  plVar7 = param_3 + 2;
  local_70 = 2.12199579096527e-314;
  local_60._0_4_ = 0xffffffff;
  local_60._4_4_ = 0;
  uStack_58 = 0;
  uStack_68 = plVar7;
  if ((int)param_3[5] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar10 = (int)param_3[5];
  }
  uStack_88 = CONCAT44(uStack_54,uStack_58);
  local_90 = (uint)local_60;
  iStack_8c = local_60._4_4_;
  local_a0 = (undefined4)local_70;
  uStack_9c = local_70._4_4_;
  uStack_98 = (undefined4)uStack_68;
  uStack_94 = uStack_68._4_4_;
  local_a8 = param_3;
  if ((local_60._4_4_ != iVar10) || (uStack_68 != plVar7)) {
    do {
      lVar2 = *local_a8;
      lVar13 = (longlong)iStack_8c;
      uVar15 = *(int *)(lVar2 + lVar13 * 0x10) * 3;
      lVar12 = *(longlong *)(param_1 + 0x78);
      iVar1 = *(int *)(*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
                      (ulonglong)(uVar15 & 0x1ff) * 4);
      if (-1 < iVar1) {
        local_70 = (double)CONCAT44(*(undefined4 *)
                                     (*(longlong *)(lVar12 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                                     (ulonglong)(uVar15 + 1 & 0x1ff) * 4),iVar1);
        uStack_68 = (longlong *)
                    CONCAT44(uStack_68._4_4_,
                             *(undefined4 *)
                              (*(longlong *)(lVar12 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                              (ulonglong)(uVar15 + 2 & 0x1ff) * 4));
        lVar12 = 0;
        local_b0 = param_2;
        do {
          uVar15 = *(uint *)((longlong)&local_70 + lVar12 * 4);
          uVar4 = 0xffffffff;
          if (((-1 < (int)uVar15) &&
              ((int)uVar15 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar15 >> 9) * 8) +
                                 (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            uVar4 = FUN_146bcd1d8(param_5);
          }
          param_2 = local_b0;
          *(undefined4 *)((longlong)&local_70 + lVar12 * 4) = uVar4;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        FUN_146c01580(local_b0,*(undefined4 *)(lVar2 + lVar13 * 0x10 + 4),&local_70,1);
      }
      local_90 = local_90 & ~uStack_9c;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != param_3 ||
             ((longlong *)CONCAT44(uStack_94,uStack_98) != plVar7 || iStack_8c != iVar10));
  }
  if (*param_4 != 0) {
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcd63e FUN_146bcd63e body=777 status=ok
// SIG undefined FUN_146bcd63e(void)

void FUN_146bcd63e(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  uint local_68 [2];
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar9 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar13 = 0;
  if ((uVar9 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x10) - 1U))) {
    uVar14 = 1;
    uVar5 = 1;
    if (1 < (int)uVar9) {
      uVar14 = uVar9;
    }
    do {
      uVar13 = uVar14;
      if (uVar14 == uVar5) break;
      uVar7 = uVar5 >> 9;
      uVar11 = uVar5 & 0x1ff;
      uVar13 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x10))[uVar7] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  if (uVar13 != uVar9) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar13 >> 5 & 0x3fffff8));
      uVar6 = (ulonglong)((uVar13 & 0xff) << 3);
      local_90 = (longlong *)
                 CONCAT44(*(undefined4 *)(lVar3 + 4 + uVar6),*(undefined4 *)(lVar3 + uVar6));
      uVar4 = FUN_146c2d0a4(param_2,&local_90);
      FUN_146bcd0f6(param_4,uVar13,uVar4);
      uVar14 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar9) {
        uVar14 = uVar9;
      }
      do {
        uVar5 = uVar14;
        if (uVar14 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar5 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar13 = uVar5;
    } while (uVar13 != uVar9);
  }
  plVar1 = param_3 + 2;
  local_68[0] = 0;
  local_68[1] = 1;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(local_68);
    iVar10 = (int)param_3[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = local_68[0];
  uStack_84 = local_68[1];
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_3;
  if ((iStack_54 != iVar10) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar12 = (longlong)iStack_74;
      uVar13 = *(int *)(lVar3 + lVar12 * 0x10) * 3;
      lVar8 = *(longlong *)(param_1 + 0x78);
      iVar2 = *(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
      if (-1 < iVar2) {
        local_68[1] = *(undefined4 *)
                       (*(longlong *)(lVar8 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
        local_68[0] = iVar2;
        uStack_60 = (longlong *)
                    CONCAT44(uStack_60._4_4_,
                             *(undefined4 *)
                              (*(longlong *)(lVar8 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                              (ulonglong)(uVar13 + 2 & 0x1ff) * 4));
        lVar8 = 0;
        local_98 = param_2;
        do {
          uVar13 = local_68[lVar8];
          uVar9 = 0xffffffff;
          if (((-1 < (int)uVar13) &&
              ((int)uVar13 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8) +
                                 (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            uVar9 = FUN_146bcd1d8(param_4);
          }
          param_2 = local_98;
          local_68[lVar8] = uVar9;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        FUN_146c01486(local_98,*(undefined4 *)(lVar3 + lVar12 * 0x10 + 4),local_68,1);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_3 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcd948 FUN_146bcd948 body=799 status=ok
// SIG undefined FUN_146bcd948(void)

void FUN_146bcd948(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar13 = 0;
  if ((uVar9 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x10) - 1U))) {
    uVar14 = 1;
    uVar6 = 1;
    if (1 < (int)uVar9) {
      uVar14 = uVar9;
    }
    do {
      uVar13 = uVar14;
      if (uVar14 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar11 = uVar6 & 0x1ff;
      uVar13 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x10))[uVar7] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  if (uVar13 != uVar9) {
    do {
      puVar2 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar13 >> 4 & 0x3fffff8))
               + (ulonglong)((uVar13 & 0x7f) << 4));
      local_a8 = (longlong *)*puVar2;
      uStack_a0 = puVar2[1];
      uVar5 = FUN_146c32f5e(param_2,&local_a8);
      FUN_146bcd0f6(param_4,uVar13,uVar5);
      uVar14 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar9) {
        uVar14 = uVar9;
      }
      do {
        uVar6 = uVar14;
        if (uVar14 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar6 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar13 = uVar6;
    } while (uVar13 != uVar9);
  }
  plVar1 = param_3 + 2;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_78 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar10 = (int)param_3[5];
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  iStack_8c = iStack_6c;
  uStack_a0 = local_80;
  local_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  local_a8 = param_3;
  if ((iStack_6c != iVar10) || (uStack_78 != plVar1)) {
    do {
      lVar4 = *local_a8;
      lVar12 = (longlong)iStack_8c;
      uVar13 = *(int *)(lVar4 + lVar12 * 0x10) * 3;
      lVar8 = *(longlong *)(param_1 + 0x78);
      iVar3 = *(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
      if (-1 < iVar3) {
        local_80 = CONCAT44(*(undefined4 *)
                             (*(longlong *)(lVar8 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                             (ulonglong)(uVar13 + 1 & 0x1ff) * 4),iVar3);
        uStack_78 = (longlong *)
                    CONCAT44(uStack_78._4_4_,
                             *(undefined4 *)
                              (*(longlong *)(lVar8 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                              (ulonglong)(uVar13 + 2 & 0x1ff) * 4));
        lVar8 = 0;
        local_b0 = param_2;
        do {
          uVar13 = *(uint *)((longlong)&local_80 + lVar8 * 4);
          uVar5 = 0xffffffff;
          if (((-1 < (int)uVar13) &&
              ((int)uVar13 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8) +
                                 (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            uVar5 = FUN_146bcd1d8(param_4);
          }
          param_2 = local_b0;
          *(undefined4 *)((longlong)&local_80 + lVar8 * 4) = uVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        FUN_146c2a048(local_b0,*(undefined4 *)(lVar4 + lVar12 * 0x10 + 4),&local_80,1);
      }
      local_90 = local_90 & ~uStack_a0._4_4_;
      FUN_1449c0562(&uStack_a0);
    } while (local_a8 != param_3 ||
             ((longlong *)CONCAT44(uStack_94,local_98) != plVar1 || iStack_8c != iVar10));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcdc68 FUN_146bcdc68 body=178 status=ok
// SIG undefined FUN_146bcdc68(void)

longlong FUN_146bcdc68(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      iVar5 = iVar4;
      while (*(longlong *)(lVar2 + (longlong)iVar5 * 0x18) != param_2) {
        iVar5 = *(int *)(lVar2 + (longlong)iVar5 * 0x18 + 0x10);
        if (iVar5 == -1) {
          return 0;
        }
      }
      do {
        plVar3 = (longlong *)(lVar2 + (longlong)iVar4 * 0x18);
        if (*plVar3 == param_2) goto LAB_146bcdd14;
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
      plVar3 = (longlong *)0x0;
LAB_146bcdd14:
      return plVar3[1];
    }
  }
  return 0;
}



// FUNCTION 146bcdd1a FUN_146bcdd1a body=365 status=ok
// SIG undefined FUN_146bcdd1a(void)

undefined8 FUN_146bcdd1a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_3 + 2;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_80 = plVar1;
  if ((int)param_3[5] == 0) {
    uVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    uVar7 = *(uint *)(param_3 + 5);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  uStack_94 = uStack_74;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  uVar5 = (ulonglong)uStack_74;
  local_b0 = param_3;
  if ((uStack_74 != uVar7) || (uStack_80 != plVar1)) {
    do {
      lVar3 = *local_b0;
      lVar8 = (longlong)(int)uVar5 * 0x10;
      cVar4 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar3 + lVar8),&local_88,0x40);
      if (cVar4 == '\0') {
        uVar6 = 0;
        goto LAB_146bcddb4;
      }
      uVar2 = *(uint *)(lVar3 + lVar8 + 4);
      FUN_146bea50a((ulonglong)((uVar2 & 0x1ff) << 6) +
                    *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8),
                    &local_88);
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
      uVar5 = (ulonglong)uStack_94;
    } while (((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || uStack_94 != uVar7) ||
             local_b0 != param_3);
  }
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_146bcddb4:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146bcde88 FUN_146bcde88 body=1237 status=ok
// SIG undefined FUN_146bcde88(void)

ulonglong FUN_146bcde88(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  int local_138 [2];
  longlong local_130 [2];
  undefined1 *local_120;
  undefined1 local_118 [48];
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int *local_d0;
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (*(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c) != 0) {
    uVar13 = *(uint *)(param_3 + 1);
    if (*(uint *)(param_2 + 1) == uVar13) {
      cVar4 = FUN_14000b9e1(*param_2,*param_3);
      if (cVar4 != '\0') goto LAB_146bcdebb;
      uVar13 = *(uint *)(param_3 + 1);
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if (uVar13 != 0) {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar13);
      }
      FUN_141724914(&local_98,uVar13);
      iVar5 = 1;
      if (3 < uVar13) {
        uVar13 = (uVar13 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar5)) {
        local_50 = iVar5;
        FUN_14487ddf8();
      }
    }
    local_138[0] = 0;
    if (0 < (int)param_3[1]) {
      puVar9 = local_60;
      do {
        if ((int)uStack_90 != local_64) {
          lVar8 = *(longlong *)(*param_3 + (longlong)local_138[0] * 8);
          uVar13 = (uint)((ulonglong)lVar8 >> 0x10);
          uVar12 = (uint)lVar8 & 0xffff;
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = puVar9;
          }
          for (iVar5 = *(int *)(puVar7 + (ulonglong)
                                         (local_50 - 1U &
                                         (int)((ulonglong)lVar8 >> 0x20) +
                                         ((uint)lVar8 << 0x10 | uVar12) +
                                         (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar12 >> 4)) * 4);
              iVar5 != -1; iVar5 = *(int *)(local_98 + (longlong)iVar5 * 0x14 + 0xc)) {
            if (*(longlong *)(local_98 + (longlong)iVar5 * 0x14) == lVar8) {
              puVar9 = (undefined1 *)0x0;
              goto LAB_146bce0c1;
            }
          }
        }
        local_d8 = *param_3 + (longlong)local_138[0] * 8;
        local_d0 = local_138;
        FUN_140171856(&local_98,local_118,&local_d8,0);
        local_138[0] = local_138[0] + 1;
      } while (local_138[0] < (int)param_3[1]);
    }
    FUN_146be9ba2(local_138);
    FUN_146bea2c4(local_138,*(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c));
    local_140 = 1;
    local_13c = 0x100;
    local_148 = 0xc00000000;
    if (*(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c) != 0) {
      uVar13 = 0;
      do {
        puVar9 = (undefined1 *)(ulonglong)(uVar13 >> 9);
        FUN_146becd5c(&local_d8,
                      (ulonglong)((uVar13 & 0x1ff) << 6) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)puVar9 * 8));
        iVar5 = 7;
        if (local_a0 != 0) {
          local_e8 = 0;
          local_e0 = 0xc00000000;
          iVar5 = 0;
          if (0 < local_a0) {
            lVar8 = 0;
            do {
              plVar6 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                plVar6 = &local_d8;
              }
              uVar2 = *(ushort *)((longlong)plVar6 + lVar8 * 4);
              iVar5 = 1;
              if (((int)param_2[1] <= (int)(uint)uVar2) || ((int)uStack_90 == local_64))
              goto LAB_146bce2f7;
              lVar3 = *(longlong *)(*param_2 + (ulonglong)uVar2 * 8);
              uVar12 = (uint)((ulonglong)lVar3 >> 0x10);
              uVar10 = (uint)lVar3 & 0xffff;
              puVar7 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar7 = local_60;
              }
              iVar11 = *(int *)(puVar7 + (ulonglong)
                                         (local_50 - 1U &
                                         (int)((ulonglong)lVar3 >> 0x20) +
                                         ((uint)lVar3 << 0x10 | uVar10) +
                                         (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar10 >> 4)) * 4);
              if (iVar11 == -1) goto LAB_146bce2f7;
              while (plVar1 = (longlong *)(local_98 + (longlong)iVar11 * 0x14), *plVar1 != lVar3) {
                iVar11 = *(int *)((longlong)plVar1 + 0xc);
                if (iVar11 == -1) goto LAB_146bce2f7;
              }
              if ((plVar1 == (longlong *)0x0) || (plVar1 + 1 == (longlong *)0x0))
              goto LAB_146bce2f7;
              local_120 = local_118;
              FUN_146bfd7a6(&local_120,
                            CONCAT22(*(undefined2 *)((longlong)plVar6 + lVar8 * 4 + 2),
                                     (short)plVar1[1]),&local_148);
              FUN_146bea50a(*(longlong *)(local_130[0] + (longlong)puVar9 * 8) +
                            (ulonglong)((uVar13 & 0x1ff) << 6),local_118);
              lVar8 = lVar8 + 1;
            } while (lVar8 < local_a0);
            iVar5 = 0;
LAB_146bce2f7:
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if ((iVar5 != 7) && (iVar5 != 0)) {
          puVar9 = (undefined1 *)0x0;
          goto LAB_146bce143;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (uint)(*(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c)));
    }
    FUN_146bfd6f4(param_1 + 0x18,local_138);
    puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
LAB_146bce143:
    FUN_146becdc4(local_130,0);
    if (local_130[0] != 0) {
      FUN_1400020a8();
    }
LAB_146bce0c1:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_98);
  }
LAB_146bcdebb:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return (ulonglong)puVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bce360 FUN_146bce360 body=150 status=ok
// SIG undefined FUN_146bce360(void)

undefined8 FUN_146bce360(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x120);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 0x18) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146bce3f6 FUN_146bce3f6 body=146 status=ok
// SIG undefined FUN_146bce3f6(void)

longlong FUN_146bce3f6(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar2 * 0x18);
        if (*plVar3 == param_2) goto LAB_146bce406;
        iVar2 = (int)plVar3[2];
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_146bce406:
  return plVar3[1];
}



// FUNCTION 146bce488 FUN_146bce488 body=1177 status=ok
// SIG undefined FUN_146bce488(void)

void FUN_146bce488(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined4 local_d4;
  longlong *local_d0;
  longlong local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4 [3];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_4;
  local_f0 = param_1;
  FUN_146bccf46(param_3);
  pcVar1 = (code *)param_2[0x28];
  plVar9 = param_2 + 0x2c;
  if ((longlong *)param_2[0x2a] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[0x2a];
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  uVar3 = (*pcVar1)(uVar7);
  local_e0 = param_3;
  FUN_146bcd022(param_3,uVar3);
  pcVar1 = (code *)param_2[0x18];
  plVar9 = param_2 + 0x1c;
  if ((longlong *)param_2[0x1a] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[0x1a];
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  iVar4 = (*pcVar1)(uVar7);
  if (0 < iVar4) {
    iVar11 = 0;
    local_e8 = local_f8 + 4;
    do {
      local_88 = (double)CONCAT44(local_88._4_4_,iVar11);
      pcVar1 = (code *)param_2[8];
      plVar9 = (longlong *)param_2[10];
      if ((longlong *)param_2[10] == (longlong *)0x0) {
        plVar9 = param_2 + 0xc;
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      cVar2 = (*pcVar1)(uVar7,&local_88);
      if (cVar2 != '\0') {
        local_88 = (double)CONCAT44(local_88._4_4_,iVar11);
        pcVar1 = (code *)param_2[0x40];
        plVar9 = (longlong *)param_2[0x42];
        if ((longlong *)param_2[0x42] == (longlong *)0x0) {
          plVar9 = param_2 + 0x44;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        (*pcVar1)(&local_a8,uVar7,&local_88);
        pcVar1 = (code *)*local_f8;
        if (pcVar1 != (code *)0x0) {
          plVar9 = (longlong *)local_f8[2];
          if ((longlong *)local_f8[2] == (longlong *)0x0) {
            plVar9 = local_e8;
          }
          local_b4[0] = iVar11;
          uVar7 = (**(code **)(*plVar9 + 8))();
          (*pcVar1)(&local_88,uVar7,local_b4,&local_a8);
          uStack_a0 = CONCAT44(uStack_7c,uStack_80);
          local_a8 = local_88;
          local_98 = local_78;
        }
        local_78 = local_98;
        local_88 = local_a8;
        uStack_80 = (undefined4)uStack_a0;
        uStack_7c = uStack_a0._4_4_;
        local_68 = DAT_14c846338;
        local_70 = DAT_14c846330;
        local_5c = DAT_14c846338;
        local_64 = DAT_14c846330;
        local_58 = DAT_14c84635c;
        local_50 = 0;
        local_4e = 0;
        uVar3 = FUN_146c02208(*local_f0,&local_88);
        FUN_146bcd0f6(local_e0,iVar11,uVar3);
      }
      iVar11 = iVar11 + 1;
    } while (iVar4 != iVar11);
  }
  lVar10 = *(longlong *)(*local_f0 + 0x208);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x38) < 1)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)**(undefined8 **)(lVar10 + 0x30);
  }
  pcVar1 = (code *)param_2[0x10];
  plVar8 = param_2 + 0x14;
  if ((longlong *)param_2[0x12] != (longlong *)0x0) {
    plVar8 = (longlong *)param_2[0x12];
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  iVar4 = (*pcVar1)(uVar7);
  if (0 < iVar4) {
    local_c8 = local_e0 + 0xa8;
    local_d0 = param_2 + 0x3c;
    iVar11 = 0;
    local_e8 = plVar9;
    do {
      local_88 = (double)CONCAT44(local_88._4_4_,iVar11);
      pcVar1 = (code *)*param_2;
      plVar9 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar9 = param_2 + 4;
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      cVar2 = (*pcVar1)(uVar7,&local_88);
      if (cVar2 != '\0') {
        local_88 = (double)CONCAT44(local_88._4_4_,iVar11);
        pcVar1 = (code *)param_2[0x38];
        plVar9 = (longlong *)param_2[0x3a];
        if ((longlong *)param_2[0x3a] == (longlong *)0x0) {
          plVar9 = local_d0;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        (*pcVar1)(&local_a8,uVar7,&local_88);
        lVar10 = local_e0;
        uVar3 = FUN_146bcd1d8(local_e0,uStack_a0 & 0xffffffff);
        uVar6 = FUN_146bcd1d8(lVar10,local_a8._4_4_);
        plVar9 = local_e8;
        local_b4[0] = FUN_146bcd1d8(lVar10,(ulonglong)local_a8 & 0xffffffff);
        local_88 = (double)CONCAT44(uVar6,local_b4[0]);
        local_b4[1] = uVar6;
        local_b4[2] = uVar3;
        uStack_80 = uVar3;
        uVar3 = FUN_146c01152(*local_f0,&local_88,0xffffffff);
        FUN_146bcd0f6(local_c8,iVar11,uVar3);
        if (plVar9 != (longlong *)0x0) {
          local_d4 = uVar3;
          FUN_146c13dec(*local_f0,&local_88,uVar3);
          local_b8 = (float)local_78;
          local_bc = (float)(double)CONCAT44(uStack_7c,uStack_80);
          local_c0 = (float)local_88;
          local_88 = -NAN;
          uStack_80 = 0xffffffff;
          lVar10 = 0;
          do {
            uVar5 = FUN_146c2f9e2(plVar9,&local_c0);
            *(uint *)((longlong)&local_88 + lVar10 * 4) = uVar5;
            *(int *)(*(longlong *)(plVar9[0xc] + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4) = local_b4[lVar10];
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          FUN_146c01580(plVar9,local_d4,&local_88,1);
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
  }
  if (*local_f8 != 0) {
    plVar9 = local_f8 + 4;
    if ((longlong *)local_f8[2] != (longlong *)0x0) {
      plVar9 = (longlong *)local_f8[2];
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bce922 FUN_146bce922 body=862 status=ok
// SIG undefined FUN_146bce922(void)

void FUN_146bce922(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,char param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_98;
  int local_8c;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  int local_64 [3];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_146bc683c(param_5);
  local_98 = param_4;
  FUN_146c369d2(param_4,*param_1);
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar10 = (uint *)*param_3;
    puVar1 = puVar10 + *(int *)(param_3 + 1);
    local_78 = param_5 + 8;
    local_70 = param_5 + 2;
    local_8c = -1;
    local_88 = param_1;
    do {
      uVar2 = *puVar10;
      if ((-1 < (int)uVar2) &&
         ((int)uVar2 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
        uVar7 = (ulonglong)(uVar2 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                               uVar7 * 2) - 1U) < 0xfffe) {
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
          local_50 = *(undefined4 *)(lVar9 + 8 + uVar7 * 0xc);
          local_58 = *(undefined8 *)(lVar9 + uVar7 * 0xc);
          lVar9 = *param_1;
          iVar6 = -1;
          if (*(char *)(lVar9 + 0x1a8) == '\x01') {
            if (*(char *)(param_2 + 0x1a8) == '\x01') {
              iVar3 = FUN_146bc96d4(param_2,uVar2);
              if (-1 < iVar3) {
                lVar9 = local_98 + 0x150;
                iVar6 = FUN_146bcd1d8(lVar9,iVar3);
                if (iVar6 == -1) {
                  iVar6 = *(int *)(*local_88 + 0x1b0);
                  *(int *)(*local_88 + 0x1b0) = iVar6 + 1;
                  FUN_146bcd0f6(lVar9,iVar3,iVar6);
                  iVar3 = (int)param_5[9];
                  uVar4 = iVar3 + 1;
                  *(uint *)(param_5 + 9) = uVar4;
                  goto LAB_146bceb75;
                }
              }
            }
            else {
              iVar6 = local_8c;
              if (local_8c == -1) {
                iVar6 = *(int *)(lVar9 + 0x1b0);
                *(int *)(lVar9 + 0x1b0) = iVar6 + 1;
                iVar3 = (int)param_5[9];
                uVar4 = iVar3 + 1;
                *(uint *)(param_5 + 9) = uVar4;
                local_8c = iVar6;
LAB_146bceb75:
                if (*(uint *)((longlong)param_5 + 0x4c) < uVar4) {
                  FUN_1446f48e2(local_78,iVar3);
                }
                *(int *)(*local_78 + (longlong)iVar3 * 4) = iVar6;
              }
            }
          }
          local_64[0] = -1;
          local_64[1] = -1;
          local_64[2] = 0xffffffff;
          lVar9 = 0;
          do {
            uVar5 = *(undefined4 *)((longlong)&local_58 + lVar9 * 4);
            iVar3 = FUN_146bcd1d8(local_98,uVar5);
            if (iVar3 == -1) {
              iVar3 = FUN_146c08ff0(*local_88,param_2,uVar5);
              FUN_146bcd0f6(local_98,uVar5,iVar3);
              lVar8 = (longlong)(int)param_5[1];
              uVar4 = (int)param_5[1] + 1;
              *(uint *)(param_5 + 1) = uVar4;
              if (*(uint *)((longlong)param_5 + 0xc) < uVar4) {
                local_80 = lVar8;
                FUN_1446f48e2(param_5,lVar8);
                lVar8 = local_80;
              }
              *(int *)(*param_5 + lVar8 * 4) = iVar3;
            }
            param_1 = local_88;
            local_64[lVar9] = iVar3;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          uVar5 = FUN_146c01152(*local_88,local_64,iVar6);
          if (param_6 != '\0') {
            FUN_146bcd0f6(local_98 + 0xa8,uVar2,uVar5);
          }
          iVar6 = (int)param_5[3];
          *(uint *)(param_5 + 3) = iVar6 + 1U;
          if (*(uint *)((longlong)param_5 + 0x1c) < iVar6 + 1U) {
            FUN_1446f48e2(local_70,iVar6);
          }
          *(undefined4 *)(*local_70 + (longlong)iVar6 * 4) = uVar5;
          local_a8 = local_98;
          FUN_142963e1e(param_2,uVar2,*param_1,uVar5);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  FUN_142964710(param_2,*param_1,local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcec82 FUN_146bcec82 body=1997 status=ok
// SIG undefined FUN_146bcec82(void)

ulonglong FUN_146bcec82(longlong param_1,longlong *param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  void *_Dst;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  byte local_18d;
  uint local_18c;
  longlong local_188;
  longlong *local_180;
  uint local_174;
  ulonglong local_170;
  int local_164 [3];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 *local_148;
  int *piStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  char local_bc [4];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar17 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  uVar10 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar2 = 0;
  if (uVar10 != 0) {
    uVar2 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U)) {
      uVar3 = 1;
      uVar5 = 1;
      if (1 < (int)uVar10) {
        uVar3 = uVar10;
      }
      do {
        uVar2 = uVar3;
        if (uVar3 == uVar5) break;
        uVar7 = uVar5 >> 9;
        uVar14 = uVar5 & 0x1ff;
        uVar2 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar7] +
                                           (ulonglong)uVar14 * 2) - 1U));
    }
  }
  bVar9 = 0;
  local_18c = param_4;
  local_180 = param_2;
  if (uVar2 != uVar10) {
    uVar17 = 0;
    bVar9 = 0;
    do {
      local_148 = (undefined8 *)CONCAT44(local_148._4_4_,uVar2);
      uVar3 = (*(code *)*param_3)(param_3[1],&local_148);
      local_158 = CONCAT44(local_158._4_4_,uVar3);
      if (uVar3 == local_18c) {
        bVar9 = 1;
      }
      else {
        if ((int)uStack_b0 != local_84) {
          puVar6 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar6 = local_80;
          }
          for (iVar16 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & uVar3) * 4); iVar16 != -1;
              iVar16 = *(int *)((longlong)iVar16 * 0x10 + local_b8 + 8)) {
            if (*(uint *)(local_b8 + (longlong)iVar16 * 0x10) == uVar3) goto LAB_146bcedec;
          }
        }
        local_164[0] = (int)uVar17;
        uVar17 = (ulonglong)((int)uVar17 + 1);
        local_148 = &local_158;
        piStack_140 = local_164;
        FUN_140c0fbee(&local_b8,&local_d8,&local_148,0);
      }
LAB_146bcedec:
      uVar3 = uVar2 + 1;
      if ((int)(uVar2 + 1) < (int)uVar10) {
        uVar3 = uVar10;
      }
      do {
        uVar5 = uVar3;
        if (uVar3 - 1 == uVar2) break;
        uVar2 = uVar2 + 1;
        uVar5 = uVar2;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
      uVar2 = uVar5;
    } while (uVar2 != uVar10);
  }
  plVar11 = local_180;
  iVar16 = (int)uVar17;
  bVar9 = 1 < iVar16 | bVar9;
  uVar13 = (ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
  if (bVar9 != 0) {
    iVar4 = *(int *)((longlong)local_180 + 0xc);
    FUN_1461a8f9d(*local_180,(int)local_180[1]);
    *(undefined4 *)(plVar11 + 1) = 0;
    if ((iVar4 < 0) && (*(int *)((longlong)plVar11 + 0xc) != 0)) {
      FUN_146bfda82(plVar11,0);
    }
    FUN_146bcf452(plVar11,uVar17,1);
    if ((longlong)(int)plVar11[1] != 0) {
      lVar12 = *plVar11;
      lVar8 = (longlong)(int)plVar11[1] * 0x220;
      do {
        uVar1 = FUN_146c03afa(param_1);
        FUN_146c03b2a(lVar12,uVar1);
        if (*(longlong *)(param_1 + 0x208) != 0) {
          FUN_14582ed12(lVar12);
          FUN_146c02390(*(undefined8 *)(lVar12 + 0x208),*(undefined8 *)(param_1 + 0x208),1,0);
        }
        lVar12 = lVar12 + 0x220;
        lVar8 = lVar8 + -0x220;
      } while (lVar8 != 0);
    }
    if (iVar16 != 0) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_18d = bVar9;
      if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar17);
      }
      FUN_146bfddfa(&local_d8);
      plVar11 = local_180;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = (undefined8 *)0x0;
      piStack_140 = (int *)0x0;
      lVar12 = 0;
      do {
        lVar8 = (longlong)(int)uStack_d0;
        uVar2 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
        if (uStack_d0._4_4_ < uVar2) {
          FUN_146bfe004(&local_d8);
        }
        _Dst = (void *)(lVar8 * 0x2c0 + local_d8);
        memset(_Dst,0,0x2c0);
        FUN_146bfde60(_Dst);
        FUN_146c369d2(_Dst);
        lVar12 = lVar12 + 0x220;
      } while (uVar17 * 0x220 - lVar12 != 0);
      uVar2 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
      uVar10 = 0;
      if ((uVar2 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
        uVar3 = 1;
        uVar5 = 1;
        if (1 < (int)uVar2) {
          uVar3 = uVar2;
        }
        do {
          uVar10 = uVar3;
          if (uVar3 == uVar5) break;
          uVar7 = uVar5 >> 9;
          uVar14 = uVar5 & 0x1ff;
          uVar10 = uVar5;
          uVar5 = uVar5 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar7] +
                                             (ulonglong)uVar14 * 2) - 1U));
      }
      uVar3 = uVar2;
      if (uVar10 != uVar2) {
        do {
          local_174 = uVar3;
          local_158 = CONCAT44(local_158._4_4_,uVar10);
          uVar3 = (*(code *)*param_3)(param_3[1]);
          if (uVar3 != local_18c) {
            if ((int)uStack_b0 != local_84) {
              puVar6 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar6 = local_80;
              }
              iVar4 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & uVar3) * 4);
              while (iVar4 != -1) {
                lVar12 = local_b8 + (longlong)iVar4 * 0x10;
                if (*(uint *)(local_b8 + (longlong)iVar4 * 0x10) == uVar3) goto LAB_146bcf182;
                iVar4 = *(int *)(lVar12 + 8);
              }
            }
            lVar12 = 0;
LAB_146bcf182:
            lVar15 = (longlong)*(int *)(lVar12 + 4) * 0x220 + *plVar11;
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar10 >> 9) * 8);
            local_150 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
            local_158 = *(undefined8 *)(lVar8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
            uVar13 = 0xffffffff;
            local_188 = (longlong)*(int *)(lVar12 + 4) * 0x2c0 + local_d8;
            if ((*(char *)(param_1 + 0x1a8) == '\x01') &&
               (iVar4 = FUN_146bc96d4(param_1,uVar10), -1 < iVar4)) {
              lVar12 = local_188 + 0x150;
              uVar2 = FUN_146bcd1d8(lVar12,iVar4);
              uVar13 = (ulonglong)uVar2;
              if (uVar2 == 0xffffffff) {
                uVar2 = *(uint *)(lVar15 + 0x1b0);
                uVar13 = (ulonglong)uVar2;
                *(uint *)(lVar15 + 0x1b0) = uVar2 + 1;
                FUN_146bcd0f6(lVar12,iVar4,uVar2);
              }
            }
            local_bc[2] = 0;
            local_bc[0] = '\0';
            local_bc[1] = '\0';
            local_164[0] = -1;
            local_164[1] = -1;
            local_164[2] = 0xffffffff;
            lVar12 = 0;
            local_170 = uVar13;
            do {
              uVar1 = *(undefined4 *)((longlong)&local_158 + lVar12 * 4);
              iVar4 = FUN_146bcd1d8(local_188,uVar1);
              if (iVar4 == -1) {
                local_bc[lVar12] = '\x01';
                iVar4 = FUN_146c08ff0(lVar15,param_1,uVar1);
                FUN_146bcd0f6(local_188,uVar1,iVar4);
              }
              uVar13 = local_170;
              local_164[lVar12] = iVar4;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 3);
            iVar4 = FUN_146c01152(lVar15,local_164,local_170 & 0xffffffff);
            if (iVar4 < 0) {
              lVar12 = 0;
              do {
                if (local_bc[lVar12] == '\0') {
                  iVar4 = FUN_146c08ff0(lVar15,param_1,
                                        *(undefined4 *)((longlong)&local_158 + lVar12 * 4));
                  local_164[lVar12] = iVar4;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 != 3);
              iVar4 = FUN_146c01152(lVar15,local_164,uVar13 & 0xffffffff);
              plVar11 = local_180;
              uVar2 = local_174;
              if (iVar4 < 0) goto LAB_146bcf2cb;
            }
            lVar12 = local_188;
            FUN_146bcd0f6(local_188 + 0xa8,uVar10,iVar4);
            local_198 = lVar12;
            FUN_142963e1e(param_1,uVar10,lVar15,iVar4);
            plVar11 = local_180;
            uVar2 = local_174;
          }
LAB_146bcf2cb:
          uVar3 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar2) {
            uVar3 = uVar2;
          }
          do {
            uVar5 = uVar3;
            if (uVar3 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar5 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_1 + 0x148) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar5;
          uVar3 = local_174;
        } while (uVar10 != uVar2);
      }
      uVar13 = 1;
      if (1 < iVar16) {
        uVar13 = uVar17;
      }
      lVar12 = 0;
      lVar8 = 0;
      do {
        FUN_142964710(param_1,*plVar11 + lVar12,local_d8 + lVar8);
        lVar8 = lVar8 + 0x2c0;
        lVar12 = lVar12 + 0x220;
      } while (uVar13 * 0x2c0 - lVar8 != 0);
      FUN_146bc8622(&local_148);
      FUN_146bfdcd5(local_d8,uStack_d0 & 0xffffffff);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      uVar13 = CONCAT71((int7)((ulonglong)plVar11 >> 8),local_18d);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar13 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bcf452 FUN_146bcf452 body=134 status=ok
// SIG undefined FUN_146bcf452(void)

void FUN_146bcf452(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bfdb28(param_1,iVar1);
    }
    FUN_146bfdaf2((longlong)iVar1 * 0x220 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bfdbbc(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bfdc22(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bcf4da FUN_146bcf4da body=22 status=ok
// SIG undefined FUN_146bcf4da(void)

undefined1 FUN_146bcf4da(undefined8 param_1,undefined8 *param_2)

{
  FUN_146bcf4f0(param_1,*param_2,param_2);
  return 1;
}



// FUNCTION 146bcf4f0 FUN_146bcf4f0 body=919 status=ok
// SIG undefined FUN_146bcf4f0(void)

void FUN_146bcf4f0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  uint auStack_a0 [4];
  longlong *local_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  uint local_68 [2];
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar20 = param_1 + 2;
  local_68[0] = 0;
  local_68[1] = 1;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_b8 = param_2;
  uStack_60 = plVar20;
  if ((int)param_1[5] == 0) {
    iVar17 = 0;
  }
  else {
    FUN_1449c0562(local_68);
    iVar17 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = local_68[0];
  uStack_84 = local_68[1];
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_b0 = plVar20;
  local_a8 = param_1;
  local_90 = param_1;
  if ((iStack_54 != iVar17) || (uStack_60 != plVar20)) {
    do {
      plVar11 = local_a8;
      plVar10 = local_b0;
      uVar5 = *(uint *)(*local_90 + (longlong)iStack_74 * 0xc);
      lVar19 = *(longlong *)(*(longlong *)(local_b8 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8);
      uVar15 = (ulonglong)((uVar5 & 0x1ff) << 4);
      uVar12 = *(ulonglong *)(lVar19 + 8 + uVar15);
      if (uVar12 >> 0x20 != 0xffffffff) {
        uVar9 = (uint)uVar12 * 3;
        lVar13 = *(longlong *)(param_3 + 0x78);
        uVar5 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8) +
                         (ulonglong)(uVar9 & 0x1ff) * 4);
        uVar8 = (uint)(uVar12 >> 0x20);
        uVar7 = uVar8 * 3;
        uVar1 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < (int)(uVar1 | uVar5)) {
          uVar6 = *(undefined8 *)(lVar19 + uVar15);
          local_68[1] = *(undefined4 *)
                         (*(longlong *)(lVar13 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                         (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
          local_68[0] = uVar5;
          uStack_60 = (longlong *)
                      CONCAT44(uStack_60._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(lVar13 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                                (ulonglong)(uVar9 + 2 & 0x1ff) * 4));
          lVar19 = *(longlong *)(*(longlong *)(local_b8 + 0x130) + (uVar12 >> 9 & 0x7fffff) * 8);
          uVar15 = (ulonglong)((uint)uVar12 & 0x1ff);
          iVar2 = *(int *)(lVar19 + uVar15 * 0xc);
          iVar3 = *(int *)(lVar19 + 4 + uVar15 * 0xc);
          iVar4 = *(int *)(lVar19 + 8 + uVar15 * 0xc);
          iVar14 = (int)uVar6;
          if (iVar2 == iVar14) {
            lVar19 = 0;
          }
          else {
            lVar19 = 1;
            if (iVar3 != iVar14) {
              lVar19 = (ulonglong)(iVar4 == iVar14) * 3 + -1;
            }
          }
          iVar16 = (int)((ulonglong)uVar6 >> 0x20);
          if (iVar2 == iVar16) {
            lVar21 = 0;
          }
          else {
            lVar21 = 1;
            if (iVar3 != iVar16) {
              lVar21 = (ulonglong)(iVar4 == iVar16) * 3 + -1;
            }
          }
          auStack_a0[1] = uVar1;
          auStack_a0[2] =
               *(undefined4 *)
                (*(longlong *)(lVar13 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          auStack_a0[3] =
               *(undefined4 *)
                (*(longlong *)(lVar13 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          lVar13 = *(longlong *)(*(longlong *)(local_b8 + 0x130) + (uVar12 >> 0x29) * 8);
          uVar12 = (ulonglong)(uVar8 & 0x1ff);
          iVar2 = *(int *)(lVar13 + uVar12 * 0xc);
          iVar3 = *(int *)(lVar13 + 4 + uVar12 * 0xc);
          iVar4 = *(int *)(lVar13 + 8 + uVar12 * 0xc);
          if (iVar2 == iVar14) {
            lVar13 = 0;
          }
          else {
            lVar13 = 1;
            if (iVar3 != iVar14) {
              lVar13 = (ulonglong)(iVar4 == iVar14) * 3 + -1;
            }
          }
          if (iVar2 == iVar16) {
            lVar18 = 0;
          }
          else {
            lVar18 = 1;
            if (iVar3 != iVar16) {
              lVar18 = (ulonglong)(iVar4 == iVar16) * 3 + -1;
            }
          }
          uVar5 = local_68[lVar21];
          uVar1 = auStack_a0[lVar18 + 1];
          if (local_68[lVar19] != auStack_a0[lVar13 + 1]) {
            FUN_146c2d590(param_3);
          }
          param_1 = plVar11;
          plVar20 = plVar10;
          if (uVar5 != uVar1) {
            FUN_146c2d590(param_3,uVar5,uVar1);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar20 || iStack_74 != iVar17));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bcf888 FUN_146bcf888 body=921 status=ok
// SIG undefined FUN_146bcf888(void)

undefined8 FUN_146bcf888(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  uint auStack_a0 [4];
  longlong *local_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  uint local_68 [2];
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar20 = param_1 + 2;
  local_68[0] = 0;
  local_68[1] = 1;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  local_b8 = param_2;
  uStack_60 = plVar20;
  if ((int)param_1[5] == 0) {
    uVar17 = 0;
  }
  else {
    FUN_1449c0562(local_68);
    uVar17 = *(uint *)(param_1 + 5);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = local_68[0];
  uStack_84 = local_68[1];
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar12 = (ulonglong)uStack_54;
  local_b0 = plVar20;
  local_a8 = param_1;
  local_90 = param_1;
  if ((uStack_54 != uVar17) || (uStack_60 != plVar20)) {
    do {
      plVar11 = local_a8;
      plVar10 = local_b0;
      uVar5 = *(uint *)(*local_90 + (longlong)(int)uVar12 * 0xc);
      lVar19 = *(longlong *)(*(longlong *)(local_b8 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8);
      uVar15 = (ulonglong)((uVar5 & 0x1ff) << 4);
      uVar12 = *(ulonglong *)(lVar19 + 8 + uVar15);
      if (uVar12 >> 0x20 != 0xffffffff) {
        uVar9 = (uint)uVar12 * 3;
        lVar13 = *(longlong *)(param_3 + 0x78);
        uVar5 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8) +
                         (ulonglong)(uVar9 & 0x1ff) * 4);
        uVar8 = (uint)(uVar12 >> 0x20);
        uVar7 = uVar8 * 3;
        uVar1 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < (int)(uVar1 | uVar5)) {
          uVar6 = *(undefined8 *)(lVar19 + uVar15);
          local_68[1] = *(undefined4 *)
                         (*(longlong *)(lVar13 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                         (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
          local_68[0] = uVar5;
          uStack_60 = (longlong *)
                      CONCAT44(uStack_60._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(lVar13 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                                (ulonglong)(uVar9 + 2 & 0x1ff) * 4));
          lVar19 = *(longlong *)(*(longlong *)(local_b8 + 0x130) + (uVar12 >> 9 & 0x7fffff) * 8);
          uVar15 = (ulonglong)((uint)uVar12 & 0x1ff);
          iVar2 = *(int *)(lVar19 + uVar15 * 0xc);
          iVar3 = *(int *)(lVar19 + 4 + uVar15 * 0xc);
          iVar4 = *(int *)(lVar19 + 8 + uVar15 * 0xc);
          iVar14 = (int)uVar6;
          if (iVar2 == iVar14) {
            lVar19 = 0;
          }
          else {
            lVar19 = 1;
            if (iVar3 != iVar14) {
              lVar19 = (ulonglong)(iVar4 == iVar14) * 3 + -1;
            }
          }
          iVar16 = (int)((ulonglong)uVar6 >> 0x20);
          if (iVar2 == iVar16) {
            lVar21 = 0;
          }
          else {
            lVar21 = 1;
            if (iVar3 != iVar16) {
              lVar21 = (ulonglong)(iVar4 == iVar16) * 3 + -1;
            }
          }
          auStack_a0[1] = uVar1;
          auStack_a0[2] =
               *(undefined4 *)
                (*(longlong *)(lVar13 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          auStack_a0[3] =
               *(undefined4 *)
                (*(longlong *)(lVar13 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          lVar13 = *(longlong *)(*(longlong *)(local_b8 + 0x130) + (uVar12 >> 0x29) * 8);
          uVar12 = (ulonglong)(uVar8 & 0x1ff);
          iVar2 = *(int *)(lVar13 + uVar12 * 0xc);
          iVar3 = *(int *)(lVar13 + 4 + uVar12 * 0xc);
          iVar4 = *(int *)(lVar13 + 8 + uVar12 * 0xc);
          if (iVar2 == iVar14) {
            lVar13 = 0;
          }
          else {
            lVar13 = 1;
            if (iVar3 != iVar14) {
              lVar13 = (ulonglong)(iVar4 == iVar14) * 3 + -1;
            }
          }
          if (iVar2 == iVar16) {
            lVar18 = 0;
          }
          else {
            lVar18 = 1;
            if (iVar3 != iVar16) {
              lVar18 = (ulonglong)(iVar4 == iVar16) * 3 + -1;
            }
          }
          uVar5 = local_68[lVar21];
          uVar1 = auStack_a0[lVar18 + 1];
          if (local_68[lVar19] != auStack_a0[lVar13 + 1]) {
            FUN_146c30786(param_3);
          }
          param_1 = plVar11;
          plVar20 = plVar10;
          if (uVar5 != uVar1) {
            FUN_146c30786(param_3,uVar5,uVar1);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar12 = (ulonglong)uStack_74;
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar20 || uStack_74 != uVar17));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar12 >> 8),1);
}



// FUNCTION 146bcfc22 FUN_146bcfc22 body=1621 status=ok
// SIG undefined FUN_146bcfc22(void)

undefined8 FUN_146bcfc22(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint *puVar26;
  undefined1 auStack_188 [46];
  char local_15a;
  char local_159;
  int local_158;
  int local_154;
  longlong *local_150;
  ulonglong local_148;
  uint local_140;
  uint local_13c;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  char *local_108;
  longlong *local_100;
  uint local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  uint local_a4 [3];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_2;
  local_c0 = &local_b8;
  local_138 = param_1 + 2;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  uStack_74 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_d8 = lVar2;
  local_d0 = param_2;
  local_c8 = param_3;
  local_b8 = lVar2;
  local_b0 = param_2;
  uStack_80 = local_138;
  if ((int)param_1[5] == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    uVar6 = *(uint *)(param_1 + 5);
  }
  local_e8 = local_78;
  uStack_e4 = uStack_74;
  uStack_e0 = uStack_70;
  local_f8 = (uint)local_88;
  uStack_f4 = local_88._4_4_;
  uStack_f0 = (int)uStack_80;
  uStack_ec = uStack_80._4_4_;
  uVar8 = (ulonglong)uStack_74;
  local_100 = param_1;
  if ((uStack_74 == uVar6) && (uStack_80 == local_138)) {
LAB_146bcfd23:
    if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
  local_130 = param_1 + 7;
  local_150 = param_1;
  local_140 = uVar6;
  local_128 = param_3;
LAB_146bcfd7c:
  uVar6 = *(uint *)(*local_100 + (longlong)(int)uVar8 * 0xc);
  local_110 = (ulonglong)(uVar6 >> 9);
  lVar22 = *(longlong *)(*(longlong *)(lVar2 + 0x1c0) + local_110 * 8);
  uVar8 = (ulonglong)((uVar6 & 0x1ff) << 4);
  local_158 = *(int *)(lVar22 + uVar8);
  local_154 = *(int *)(lVar22 + 4 + uVar8);
  local_15a = '\0';
  local_159 = '\0';
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = (longlong *)0x0;
  plVar11 = param_2;
  cVar4 = FUN_146c1a770(param_2,(ulonglong)uVar6,0);
  if (cVar4 == '\0') {
    uVar15 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
    local_118 = (ulonglong)((uVar6 & 0x1ff) << 4);
    puVar26 = (uint *)&local_88;
    pcVar18 = &local_15a;
    piVar9 = &local_158;
    local_148 = (ulonglong)uVar6;
LAB_146bcfebb:
    uVar8 = local_118;
    local_13c = (uint)uVar15;
    iVar1 = *piVar9;
    puVar26[2] = 0;
    local_108 = pcVar18;
    if ((int)puVar26[3] < 0) {
      FUN_14481578e(puVar26,0);
    }
    uVar8 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + local_110 * 8) + 8 + uVar8);
    iVar5 = FUN_146be99b0(lVar2,iVar1);
    uVar23 = uVar8 >> 0x20;
    local_120 = uVar8;
LAB_146bcff14:
    uVar24 = uVar8 & 0xffffffff;
    uVar6 = puVar26[2];
    puVar26[2] = uVar6 + 1;
    if (puVar26[3] < uVar6 + 1) {
      FUN_1446f48e2(puVar26,uVar6);
    }
    uVar21 = (uint)uVar8;
    *(uint *)(*(longlong *)puVar26 + (longlong)(int)uVar6 * 4) = uVar21;
    if ((int)puVar26[2] <= iVar5) {
      lVar22 = *(longlong *)(*(longlong *)(lVar2 + 0x180) + (uVar8 >> 9 & 0x7fffff) * 8);
      local_90 = *(undefined4 *)(lVar22 + 8 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
      local_98 = *(longlong *)(lVar22 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
      local_a4[0] = 0xffffffff;
      local_a4[1] = 0xffffffff;
      local_a4[2] = 0xffffffff;
      lVar22 = *(longlong *)(lVar2 + 0x1c0);
      lVar14 = 0;
      do {
        uVar6 = *(uint *)((longlong)&local_98 + lVar14 * 4);
        uVar15 = *(undefined8 *)
                  (*(longlong *)(lVar22 + (ulonglong)(uVar6 >> 9) * 8) + 8 +
                  (ulonglong)((uVar6 & 0x1ff) << 4));
        uVar17 = (uint)uVar15;
        uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
        if (uVar21 != uVar17) {
          uVar6 = uVar17;
        }
        local_a4[lVar14] = uVar6;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      lVar22 = 0;
      do {
        uVar6 = local_a4[lVar22];
        if ((-1 < (int)uVar6 && uVar6 != (uint)uVar23) &&
           ((int)uVar6 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) {
          uVar19 = (ulonglong)(uVar6 & 0x1ff);
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                                  (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (((lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)(uVar6 >> 9) * 8),
               *(int *)(lVar14 + uVar19 * 0xc) == iVar1 ||
               (*(int *)(lVar14 + 4 + uVar19 * 0xc) == iVar1)) ||
              (*(int *)(lVar14 + 8 + uVar19 * 0xc) == iVar1)))) goto LAB_146bd0082;
        }
        lVar22 = lVar22 + 1;
        if (lVar22 == 3) goto LAB_146bd00cb;
      } while( true );
    }
    goto LAB_146bd022e;
  }
  piVar9 = &local_158;
  bVar3 = true;
  do {
    bVar20 = bVar3;
    iVar1 = *piVar9;
    cVar4 = FUN_146c2e366(param_2,iVar1);
    if (cVar4 != '\0') {
      FUN_146c2d83e(param_2,iVar1,param_3);
    }
    piVar9 = &local_154;
    bVar3 = false;
  } while (bVar20);
  goto LAB_146bcfe19;
LAB_146bd0082:
  uVar21 = *(uint *)((longlong)&local_98 + lVar22 * 4);
  cVar4 = FUN_146c2e4a6(param_2,uVar8 & 0xffffffff,uVar6);
  if (cVar4 == '\0') {
LAB_146bd00cb:
    cVar4 = '\x01';
    goto LAB_146bd00cd;
  }
  if ((uVar21 != (uint)local_148) && ((int)local_150[1] != *(int *)((longlong)local_150 + 0x34))) {
    plVar11 = (longlong *)local_150[8];
    if ((longlong *)local_150[8] == (longlong *)0x0) {
      plVar11 = local_130;
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)local_150[9] - 1U & uVar21) * 4);
    if (iVar12 != -1) {
      do {
        if (*(uint *)(*local_150 + (longlong)iVar12 * 0xc) == uVar21) goto LAB_146bd00cb;
        iVar12 = *(int *)(*local_150 + (longlong)iVar12 * 0xc + 4);
      } while (iVar12 != -1);
    }
  }
  uVar8 = (ulonglong)uVar6;
  uVar23 = uVar24;
  if (uVar6 == (uint)local_120) goto LAB_146bd022e;
  goto LAB_146bcff14;
LAB_146bd022e:
  cVar4 = '\0';
LAB_146bd00cd:
  piVar9 = &local_154;
  *local_108 = cVar4;
  param_3 = local_128;
  uVar8 = local_148;
  puVar26 = &local_78;
  pcVar18 = &local_159;
  uVar15 = 0;
  if ((local_13c & 1) == 0) goto code_r0x000146bd0107;
  goto LAB_146bcfebb;
code_r0x000146bd0107:
  if ((local_15a == '\x01') || (local_159 != '\0')) {
    piVar10 = &local_158;
    pcVar16 = &local_15a;
    puVar25 = (uint *)&local_88;
    bVar3 = true;
    do {
      bVar20 = bVar3;
      if (*pcVar16 == '\x01') {
        FUN_142971e64(&local_d8,uVar8 & 0xffffffff,*piVar10,puVar25);
      }
      piVar10 = piVar9;
      pcVar16 = pcVar18;
      puVar25 = puVar26;
      bVar3 = false;
    } while (bVar20);
  }
  else {
    iVar5 = ((int)uStack_80 - ((int)uStack_80 + 1 >> 0x1f)) + 1 >> 1;
    uVar6 = FUN_146c08e54(lVar2,*(undefined4 *)(local_88 + -4 + (longlong)iVar5 * 4),
                          *(undefined4 *)(local_88 + (longlong)iVar5 * 4));
    iVar1 = local_158;
    if (uVar6 == 0xffffffff) {
      iVar12 = -1;
    }
    else {
      uVar15 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8) +
                (ulonglong)((uVar6 & 0x1ff) << 4));
      iVar13 = (int)((ulonglong)uVar15 >> 0x20);
      iVar7 = (int)uVar15;
      iVar12 = -1;
      if (local_158 == iVar13) {
        iVar12 = iVar7;
      }
      if (local_158 == iVar7) {
        iVar12 = iVar13;
      }
    }
    FUN_144a1a59e(&local_88,iVar5,1);
    FUN_142971e64(&local_d8,local_148,iVar1,&local_88);
    if ((iVar12 != -1) && (cVar4 = FUN_146c2e366(param_2,iVar12), cVar4 != '\0')) {
      FUN_146c2d83e(param_2,iVar12,param_3);
    }
  }
LAB_146bcfe19:
  plVar11 = local_150;
  lVar22 = 0x20;
  do {
    if (*(longlong *)((longlong)&local_98 + lVar22) != 0) {
      FUN_1400020a8();
    }
    lVar22 = lVar22 + -0x10;
  } while (lVar22 != 0);
  local_e8 = local_e8 & ~uStack_f4;
  FUN_1449c0562(&local_f8);
  uVar8 = (ulonglong)uStack_e4;
  if (local_100 == plVar11 &&
      ((longlong *)CONCAT44(uStack_ec,uStack_f0) == local_138 && uStack_e4 == local_140))
  goto LAB_146bcfd23;
  goto LAB_146bcfd7c;
}



// FUNCTION 146bd0278 FUN_146bd0278 body=1621 status=ok
// SIG undefined FUN_146bd0278(void)

undefined8 FUN_146bd0278(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint *puVar26;
  undefined1 auStack_188 [46];
  char local_15a;
  char local_159;
  int local_158;
  int local_154;
  longlong *local_150;
  ulonglong local_148;
  uint local_140;
  uint local_13c;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  char *local_108;
  longlong *local_100;
  uint local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  uint local_a4 [3];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_2;
  local_c0 = &local_b8;
  local_138 = param_1 + 2;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  uStack_74 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_d8 = lVar2;
  local_d0 = param_2;
  local_c8 = param_3;
  local_b8 = lVar2;
  local_b0 = param_2;
  uStack_80 = local_138;
  if ((int)param_1[5] == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    uVar6 = *(uint *)(param_1 + 5);
  }
  local_e8 = local_78;
  uStack_e4 = uStack_74;
  uStack_e0 = uStack_70;
  local_f8 = (uint)local_88;
  uStack_f4 = local_88._4_4_;
  uStack_f0 = (int)uStack_80;
  uStack_ec = uStack_80._4_4_;
  uVar8 = (ulonglong)uStack_74;
  local_100 = param_1;
  if ((uStack_74 == uVar6) && (uStack_80 == local_138)) {
LAB_146bd0379:
    if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
  local_130 = param_1 + 7;
  local_150 = param_1;
  local_140 = uVar6;
  local_128 = param_3;
LAB_146bd03d2:
  uVar6 = *(uint *)(*local_100 + (longlong)(int)uVar8 * 0xc);
  local_110 = (ulonglong)(uVar6 >> 9);
  lVar22 = *(longlong *)(*(longlong *)(lVar2 + 0x1c0) + local_110 * 8);
  uVar8 = (ulonglong)((uVar6 & 0x1ff) << 4);
  local_158 = *(int *)(lVar22 + uVar8);
  local_154 = *(int *)(lVar22 + 4 + uVar8);
  local_15a = '\0';
  local_159 = '\0';
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = (longlong *)0x0;
  plVar11 = param_2;
  cVar4 = FUN_146c1aaf4(param_2,(ulonglong)uVar6,0);
  if (cVar4 == '\0') {
    uVar15 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
    local_118 = (ulonglong)((uVar6 & 0x1ff) << 4);
    puVar26 = (uint *)&local_88;
    pcVar18 = &local_15a;
    piVar9 = &local_158;
    local_148 = (ulonglong)uVar6;
LAB_146bd0511:
    uVar8 = local_118;
    local_13c = (uint)uVar15;
    iVar1 = *piVar9;
    puVar26[2] = 0;
    local_108 = pcVar18;
    if ((int)puVar26[3] < 0) {
      FUN_14481578e(puVar26,0);
    }
    uVar8 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + local_110 * 8) + 8 + uVar8);
    iVar5 = FUN_146be99b0(lVar2,iVar1);
    uVar23 = uVar8 >> 0x20;
    local_120 = uVar8;
LAB_146bd056a:
    uVar24 = uVar8 & 0xffffffff;
    uVar6 = puVar26[2];
    puVar26[2] = uVar6 + 1;
    if (puVar26[3] < uVar6 + 1) {
      FUN_1446f48e2(puVar26,uVar6);
    }
    uVar21 = (uint)uVar8;
    *(uint *)(*(longlong *)puVar26 + (longlong)(int)uVar6 * 4) = uVar21;
    if ((int)puVar26[2] <= iVar5) {
      lVar22 = *(longlong *)(*(longlong *)(lVar2 + 0x180) + (uVar8 >> 9 & 0x7fffff) * 8);
      local_90 = *(undefined4 *)(lVar22 + 8 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
      local_98 = *(longlong *)(lVar22 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
      local_a4[0] = 0xffffffff;
      local_a4[1] = 0xffffffff;
      local_a4[2] = 0xffffffff;
      lVar22 = *(longlong *)(lVar2 + 0x1c0);
      lVar14 = 0;
      do {
        uVar6 = *(uint *)((longlong)&local_98 + lVar14 * 4);
        uVar15 = *(undefined8 *)
                  (*(longlong *)(lVar22 + (ulonglong)(uVar6 >> 9) * 8) + 8 +
                  (ulonglong)((uVar6 & 0x1ff) << 4));
        uVar17 = (uint)uVar15;
        uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
        if (uVar21 != uVar17) {
          uVar6 = uVar17;
        }
        local_a4[lVar14] = uVar6;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      lVar22 = 0;
      do {
        uVar6 = local_a4[lVar22];
        if ((-1 < (int)uVar6 && uVar6 != (uint)uVar23) &&
           ((int)uVar6 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) {
          uVar19 = (ulonglong)(uVar6 & 0x1ff);
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                                  (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (((lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)(uVar6 >> 9) * 8),
               *(int *)(lVar14 + uVar19 * 0xc) == iVar1 ||
               (*(int *)(lVar14 + 4 + uVar19 * 0xc) == iVar1)) ||
              (*(int *)(lVar14 + 8 + uVar19 * 0xc) == iVar1)))) goto LAB_146bd06d8;
        }
        lVar22 = lVar22 + 1;
        if (lVar22 == 3) goto LAB_146bd0721;
      } while( true );
    }
    goto LAB_146bd0884;
  }
  piVar9 = &local_158;
  bVar3 = true;
  do {
    bVar20 = bVar3;
    iVar1 = *piVar9;
    cVar4 = FUN_146c31562(param_2,iVar1);
    if (cVar4 != '\0') {
      FUN_146c30a3a(param_2,iVar1,param_3);
    }
    piVar9 = &local_154;
    bVar3 = false;
  } while (bVar20);
  goto LAB_146bd046f;
LAB_146bd06d8:
  uVar21 = *(uint *)((longlong)&local_98 + lVar22 * 4);
  cVar4 = FUN_146c316a2(param_2,uVar8 & 0xffffffff,uVar6);
  if (cVar4 == '\0') {
LAB_146bd0721:
    cVar4 = '\x01';
    goto LAB_146bd0723;
  }
  if ((uVar21 != (uint)local_148) && ((int)local_150[1] != *(int *)((longlong)local_150 + 0x34))) {
    plVar11 = (longlong *)local_150[8];
    if ((longlong *)local_150[8] == (longlong *)0x0) {
      plVar11 = local_130;
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)local_150[9] - 1U & uVar21) * 4);
    if (iVar12 != -1) {
      do {
        if (*(uint *)(*local_150 + (longlong)iVar12 * 0xc) == uVar21) goto LAB_146bd0721;
        iVar12 = *(int *)(*local_150 + (longlong)iVar12 * 0xc + 4);
      } while (iVar12 != -1);
    }
  }
  uVar8 = (ulonglong)uVar6;
  uVar23 = uVar24;
  if (uVar6 == (uint)local_120) goto LAB_146bd0884;
  goto LAB_146bd056a;
LAB_146bd0884:
  cVar4 = '\0';
LAB_146bd0723:
  piVar9 = &local_154;
  *local_108 = cVar4;
  param_3 = local_128;
  uVar8 = local_148;
  puVar26 = &local_78;
  pcVar18 = &local_159;
  uVar15 = 0;
  if ((local_13c & 1) == 0) goto code_r0x000146bd075d;
  goto LAB_146bd0511;
code_r0x000146bd075d:
  if ((local_15a == '\x01') || (local_159 != '\0')) {
    piVar10 = &local_158;
    pcVar16 = &local_15a;
    puVar25 = (uint *)&local_88;
    bVar3 = true;
    do {
      bVar20 = bVar3;
      if (*pcVar16 == '\x01') {
        FUN_142971fdc(&local_d8,uVar8 & 0xffffffff,*piVar10,puVar25);
      }
      piVar10 = piVar9;
      pcVar16 = pcVar18;
      puVar25 = puVar26;
      bVar3 = false;
    } while (bVar20);
  }
  else {
    iVar5 = ((int)uStack_80 - ((int)uStack_80 + 1 >> 0x1f)) + 1 >> 1;
    uVar6 = FUN_146c08e54(lVar2,*(undefined4 *)(local_88 + -4 + (longlong)iVar5 * 4),
                          *(undefined4 *)(local_88 + (longlong)iVar5 * 4));
    iVar1 = local_158;
    if (uVar6 == 0xffffffff) {
      iVar12 = -1;
    }
    else {
      uVar15 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8) +
                (ulonglong)((uVar6 & 0x1ff) << 4));
      iVar13 = (int)((ulonglong)uVar15 >> 0x20);
      iVar7 = (int)uVar15;
      iVar12 = -1;
      if (local_158 == iVar13) {
        iVar12 = iVar7;
      }
      if (local_158 == iVar7) {
        iVar12 = iVar13;
      }
    }
    FUN_144a1a59e(&local_88,iVar5,1);
    FUN_142971fdc(&local_d8,local_148,iVar1,&local_88);
    if ((iVar12 != -1) && (cVar4 = FUN_146c31562(param_2,iVar12), cVar4 != '\0')) {
      FUN_146c30a3a(param_2,iVar12,param_3);
    }
  }
LAB_146bd046f:
  plVar11 = local_150;
  lVar22 = 0x20;
  do {
    if (*(longlong *)((longlong)&local_98 + lVar22) != 0) {
      FUN_1400020a8();
    }
    lVar22 = lVar22 + -0x10;
  } while (lVar22 != 0);
  local_e8 = local_e8 & ~uStack_f4;
  FUN_1449c0562(&local_f8);
  uVar8 = (ulonglong)uStack_e4;
  if (local_100 == plVar11 &&
      ((longlong *)CONCAT44(uStack_ec,uStack_f0) == local_138 && uStack_e4 == local_140))
  goto LAB_146bd0379;
  goto LAB_146bd03d2;
}



// FUNCTION 146bd08ce FUN_146bd08ce body=1242 status=ok
// SIG undefined FUN_146bd08ce(void)

void FUN_146bd08ce(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  longlong *local_148;
  ulonglong local_140;
  longlong *local_138;
  longlong *local_130;
  ulonglong local_128;
  undefined4 local_120;
  uint local_11c;
  uint local_118 [6];
  undefined8 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint *local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4 [3];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar2 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_148 = param_3 + 2;
  local_c8 = (uint *)&DAT_100000000;
  local_b8 = 0xffffffff;
  iStack_b4 = 0;
  local_b0 = 0;
  local_130 = param_1;
  local_c0 = local_148;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_c8);
    uVar2 = (ulonglong)*(uint *)(param_3 + 5);
  }
  local_d8 = local_b8;
  iStack_d4 = iStack_b4;
  local_d0 = local_b0;
  local_cc = local_ac;
  local_e8 = local_c8;
  local_e0 = local_c0;
  local_f0 = param_3;
  if ((iStack_b4 != (int)uVar2) || (local_c0 != local_148)) {
    local_140 = uVar2;
    local_138 = param_3;
LAB_146bd0a79:
    uVar9 = *(uint *)(*local_f0 + (longlong)iStack_d4 * 0xc);
    local_128 = (ulonglong)uVar9;
    lVar8 = *(longlong *)(*(longlong *)(*local_130 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
    local_f8 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    local_100 = *(undefined8 *)(lVar8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    uVar2 = local_128 * 3 + 2;
    lVar8 = *(longlong *)(param_5 + 0x78);
    uVar5 = uVar2 >> 9 & 0x7fffff;
    uVar3 = (ulonglong)(((uint)uVar2 & 0x1ff) << 2);
    local_14c = *(undefined4 *)(*(longlong *)(lVar8 + uVar5 * 8) + uVar3);
    uVar10 = uVar9 * 3 + 1;
    uVar12 = (ulonglong)(uVar10 >> 9);
    uVar11 = (ulonglong)((uVar10 & 0x1ff) << 2);
    uVar14 = (ulonglong)(uVar9 * 3 >> 9);
    uVar2 = (ulonglong)((uVar9 * 3 & 0x1ff) << 2);
    local_118[3] = *(undefined4 *)(*(longlong *)(lVar8 + uVar14 * 8) + uVar2);
    local_118[4] = *(undefined4 *)(*(longlong *)(lVar8 + uVar12 * 8) + uVar11);
    local_118[5] = local_14c;
    lVar8 = *(longlong *)(param_6 + 0x78);
    local_118[2] = *(undefined4 *)(*(longlong *)(lVar8 + uVar5 * 8) + uVar3);
    local_118[1] = *(undefined4 *)(*(longlong *)(lVar8 + uVar12 * 8) + uVar11);
    local_118[0] = *(uint *)(*(longlong *)(lVar8 + uVar14 * 8) + uVar2);
    lVar8 = 0;
LAB_146bd0b78:
    local_11c = local_118[lVar8 + 3];
    if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
      uVar9 = *(uint *)((longlong)&local_100 + lVar8 * 4);
      plVar6 = (longlong *)param_4[8];
      if ((longlong *)param_4[8] == (longlong *)0x0) {
        plVar6 = param_4 + 7;
      }
      iVar13 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_4[9] - 1U & uVar9) * 4);
      if (iVar13 != -1) {
        do {
          if (*(uint *)(*param_4 + (longlong)iVar13 * 0xc) == uVar9) {
            if ((int)uStack_90 == local_64) goto LAB_146bd0bed;
            puVar4 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar4 = local_60;
            }
            iVar13 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & local_11c) * 4);
            goto joined_r0x000146bd0cce;
          }
          iVar13 = *(int *)(*param_4 + (longlong)iVar13 * 0xc + 4);
        } while (iVar13 != -1);
      }
    }
    goto LAB_146bd0b88;
  }
  local_50 = 0;
LAB_146bd0a0f:
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x000146bd0cce:
  if (iVar13 == -1) goto LAB_146bd0bed;
  lVar1 = local_98 + (longlong)iVar13 * 0x10;
  if (*(uint *)(local_98 + (longlong)iVar13 * 0x10) == local_11c) {
    if (lVar1 != 0) goto LAB_146bd0c9b;
    goto LAB_146bd0bed;
  }
  iVar13 = *(int *)(lVar1 + 8);
  goto joined_r0x000146bd0cce;
LAB_146bd0bed:
  iVar13 = 0;
  do {
    lVar1 = *(longlong *)(param_5 + 0x48);
    lVar7 = 0;
    do {
      uVar9 = local_11c * 3 + (int)lVar7;
      local_a4[lVar7] =
           *(undefined4 *)
            (*(longlong *)(lVar1 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    local_120 = FUN_146c2f9e2(param_6,local_a4);
    local_c8 = &local_11c;
    local_c0 = (longlong *)&local_120;
    FUN_140263e2a(&local_98,&local_a8,&local_c8,0);
    iVar13 = iVar13 + 1;
  } while (iVar13 != 3);
  lVar1 = local_98 + (longlong)local_a8 * 0x10;
LAB_146bd0c9b:
  local_118[lVar8] = *(uint *)(lVar1 + 4);
LAB_146bd0b88:
  lVar8 = lVar8 + 1;
  if (lVar8 == 3) goto LAB_146bd0d09;
  goto LAB_146bd0b78;
LAB_146bd0d09:
  FUN_146c01580(param_6,local_128,local_118,1);
  local_d8 = local_d8 & ~local_e8._4_4_;
  FUN_1449c0562(&local_e8);
  if (local_f0 == local_138 && (local_e0 == local_148 && iStack_d4 == (int)local_140))
  goto code_r0x000146bd0d7d;
  goto LAB_146bd0a79;
code_r0x000146bd0d7d:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_146bd0a0f;
}



// FUNCTION 146bd0da9 FUN_146bd0da9 body=1073 status=ok
// SIG undefined FUN_146bd0da9(void)

void FUN_146bd0da9(longlong *param_1,longlong *param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_138 [43];
  byte local_10d;
  int local_10c;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  uint *local_e0;
  longlong local_d8 [2];
  uint *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined4 *)(param_2 + 1) = 0;
  local_10d = param_3;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146be7820(param_2,0);
  }
  uVar15 = *(uint *)(param_1 + 1);
  uVar18 = (ulonglong)uVar15;
  if (2 < (int)uVar15) {
    lVar19 = *param_1;
    fVar8 = 0.0;
    uVar17 = 1;
    do {
      uVar20 = uVar17;
      if (uVar17 == uVar18) {
        uVar20 = 0;
      }
      fVar8 = fVar8 + (*(float *)(lVar19 + -8 + uVar17 * 8) * *(float *)(lVar19 + 4 + uVar20 * 8) -
                      *(float *)(lVar19 + uVar20 * 8) * *(float *)(lVar19 + -4 + uVar17 * 8));
      bVar23 = uVar17 != uVar18;
      uVar17 = uVar17 + 1;
    } while (bVar23);
    if (uVar15 == 3) {
      uVar15 = (uint)local_10d;
      iVar12 = (int)param_2[1];
      lVar19 = (longlong)iVar12;
      *(uint *)(param_2 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
        FUN_146bd78c8(param_2,iVar12);
      }
      lVar16 = *param_2;
      *(undefined4 *)(lVar16 + lVar19 * 0xc) = 0;
      *(uint *)(lVar16 + 4 + lVar19 * 0xc) = uVar15 + 1;
      *(uint *)(lVar16 + 8 + lVar19 * 0xc) = 2 - uVar15;
    }
    else {
      local_c8 = (uint *)0x0;
      uStack_c0 = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      FUN_144a127d2(&local_c8,uVar18,0);
      FUN_144a127d2(local_d8,uVar15,0);
      uVar17 = 0;
      do {
        local_c8[uVar17] = (int)uVar17 - 1;
        uVar20 = uVar17 + 1;
        *(int *)(local_d8[0] + uVar17 * 4) = (int)uVar20;
        uVar17 = uVar20;
      } while (uVar18 != uVar20);
      *local_c8 = uVar15 - 1;
      *(undefined4 *)(local_d8[0] + (ulonglong)(uVar15 - 1) * 4) = 0;
      uVar15 = 0;
      iVar12 = 0;
      puVar14 = local_c8;
      local_108 = param_1;
      local_100 = param_2;
      do {
        lVar19 = local_d8[0];
        iVar21 = (int)uVar18;
        lVar16 = (longlong)(int)uVar15;
        uVar6 = puVar14[lVar16];
        local_10c = iVar12;
        local_e0 = puVar14;
        if (iVar21 == 3 || iVar21 <= iVar12) {
          uVar22 = *(uint *)(local_d8[0] + lVar16 * 4);
LAB_146bd1089:
          uVar10 = uVar15;
          if (local_10d != 0) {
            uVar10 = uVar22;
            uVar22 = uVar15;
          }
          iVar12 = (int)param_2[1];
          lVar19 = (longlong)iVar12;
          *(uint *)(param_2 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
            FUN_146bd78c8(param_2,iVar12);
          }
          lVar7 = *param_2;
          *(uint *)(lVar7 + lVar19 * 0xc) = uVar6;
          *(uint *)(lVar7 + 4 + lVar19 * 0xc) = uVar10;
          *(uint *)(lVar7 + 8 + lVar19 * 0xc) = uVar22;
          *(undefined4 *)(local_d8[0] + (longlong)(int)local_c8[lVar16] * 4) =
               *(undefined4 *)(local_d8[0] + lVar16 * 4);
          local_c8[*(int *)(local_d8[0] + lVar16 * 4)] = local_c8[lVar16];
          uVar18 = (ulonglong)(iVar21 - 1);
          uVar15 = local_c8[lVar16];
          iVar12 = 0;
          puVar14 = local_c8;
        }
        else {
          lVar11 = (longlong)(int)uVar6;
          lVar7 = *param_1;
          uVar22 = *(uint *)(local_d8[0] + lVar16 * 4);
          lVar13 = (longlong)(int)uVar22;
          fVar24 = *(float *)(lVar7 + lVar16 * 8);
          fVar1 = *(float *)(lVar7 + 4 + lVar16 * 8);
          fVar2 = *(float *)(lVar7 + lVar11 * 8);
          fVar3 = *(float *)(lVar7 + 4 + lVar11 * 8);
          fVar4 = *(float *)(lVar7 + lVar13 * 8);
          fVar5 = *(float *)(lVar7 + 4 + lVar13 * 8);
          fVar24 = ((fVar4 * fVar3 - fVar2 * fVar5) +
                   (fVar24 * fVar5 - fVar1 * fVar4) + (fVar2 * fVar1 - fVar24 * fVar3)) * 0.5;
          if (fVar8 < 0.0) {
            fVar24 = -fVar24;
          }
          if (0.0 <= fVar24) {
            local_e8 = lVar11 * 8 + lVar7;
            local_f0 = lVar7 + lVar16 * 8;
            local_f8 = lVar13 * 8 + lVar7;
            uVar10 = *(uint *)(local_d8[0] + lVar13 * 4);
            do {
              cVar9 = FUN_146bd11dc(local_e8,local_f0,local_f8,(longlong)(int)uVar10 * 8 + lVar7);
              if (cVar9 != '\0') goto LAB_146bd106e;
              uVar10 = *(uint *)(lVar19 + (longlong)(int)uVar10 * 4);
              param_1 = local_108;
              param_2 = local_100;
            } while (uVar10 != uVar6);
            goto LAB_146bd1089;
          }
LAB_146bd106e:
          iVar12 = local_10c + 1;
          puVar14 = local_e0;
          param_1 = local_108;
          param_2 = local_100;
          uVar15 = uVar22;
        }
      } while (2 < (int)uVar18);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
        puVar14 = local_c8;
      }
      if (puVar14 != (uint *)0x0) {
        FUN_1400020a8(puVar14);
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd11dc FUN_146bd11dc body=314 status=ok
// SIG undefined FUN_146bd11dc(void)

bool FUN_146bd11dc(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = *param_4;
  fVar1 = param_4[1];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar10 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_3[1];
  fVar6 = *param_3;
  fVar9 = (fVar10 - fVar2) * (fVar1 - fVar3) - (fVar4 - fVar3) * (fVar8 - fVar2);
  fVar10 = (fVar6 - fVar10) * (fVar1 - fVar4) - (fVar5 - fVar4) * (fVar8 - fVar10);
  bVar7 = false;
  if ((0.0 < fVar9 * fVar10) &&
     (fVar8 = (fVar2 - fVar6) * (fVar1 - fVar5) - (fVar3 - fVar5) * (fVar8 - fVar6),
     0.0 < fVar10 * fVar8)) {
    bVar7 = 0.0 < fVar9 * fVar8;
  }
  return bVar7;
}



// FUNCTION 146bd1316 FUN_146bd1316 body=995 status=ok
// SIG undefined FUN_146bd1316(void)

void FUN_146bd1316(longlong *param_1,longlong *param_2,byte param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  double dVar22;
  undefined1 auStack_f8 [39];
  byte local_d1;
  longlong *local_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_d1 = param_3;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146be7820(param_2,0);
  }
  uVar6 = *(uint *)(param_1 + 1);
  uVar18 = (ulonglong)uVar6;
  if (2 < (int)uVar6) {
    lVar11 = *param_1;
    pdVar8 = (double *)(lVar11 + 8);
    dVar3 = 0.0;
    uVar12 = 1;
    do {
      uVar13 = uVar12;
      if (uVar12 == uVar18) {
        uVar13 = 0;
      }
      dVar3 = dVar3 + (pdVar8[-1] * *(double *)(lVar11 + 8 + uVar13 * 0x10) -
                      *(double *)(lVar11 + uVar13 * 0x10) * *pdVar8);
      pdVar8 = pdVar8 + 2;
      bVar21 = uVar12 != uVar18;
      uVar12 = uVar12 + 1;
    } while (bVar21);
    if (uVar6 == 3) {
      uVar6 = (uint)local_d1;
      iVar9 = (int)param_2[1];
      lVar11 = (longlong)iVar9;
      *(uint *)(param_2 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
        FUN_146bd78c8(param_2,iVar9);
      }
      lVar20 = *param_2;
      *(undefined4 *)(lVar20 + lVar11 * 0xc) = 0;
      *(uint *)(lVar20 + 4 + lVar11 * 0xc) = uVar6 + 1;
      *(uint *)(lVar20 + 8 + lVar11 * 0xc) = 2 - uVar6;
    }
    else {
      local_b8 = (uint *)0x0;
      uStack_b0 = 0;
      local_c8 = (uint *)0x0;
      uStack_c0 = 0;
      local_d0 = param_1;
      FUN_144a127d2(&local_b8,uVar18,0);
      FUN_144a127d2(&local_c8,uVar6,0);
      uVar12 = 0;
      do {
        local_b8[uVar12] = (int)uVar12 - 1;
        uVar13 = uVar12 + 1;
        local_c8[uVar12] = (uint)uVar13;
        uVar12 = uVar13;
      } while (uVar18 != uVar13);
      *local_b8 = uVar6 - 1;
      local_c8[uVar6 - 1] = 0;
      uVar6 = 0;
      iVar9 = 0;
      plVar14 = local_d0;
      do {
        iVar17 = (int)uVar18;
        lVar11 = (longlong)(int)uVar6;
        uVar10 = local_b8[lVar11];
        if (iVar9 < iVar17 && iVar17 != 3) {
          lVar20 = *plVar14;
          lVar19 = (longlong)(int)uVar10 * 0x10;
          lVar15 = lVar11 * 0x10;
          lVar16 = (longlong)(int)local_c8[lVar11] * 0x10;
          dVar22 = *(double *)(lVar20 + 8 + lVar15);
          dVar1 = *(double *)(lVar20 + 8 + lVar19);
          dVar2 = *(double *)(lVar20 + 8 + lVar16);
          dVar22 = ((*(double *)(lVar20 + lVar16) * dVar1 - *(double *)(lVar20 + lVar19) * dVar2) +
                   (*(double *)(lVar20 + lVar15) * dVar2 - dVar22 * *(double *)(lVar20 + lVar16)) +
                   (*(double *)(lVar20 + lVar19) * dVar22 - *(double *)(lVar20 + lVar15) * dVar1)) *
                   0.5;
          if (0.0 <= (double)((ulonglong)-dVar22 & -(ulonglong)(dVar3 < 0.0) |
                             ~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar22)) {
            uVar10 = local_c8[(int)local_c8[lVar11]];
            do {
              cVar5 = FUN_146bd16fa(lVar19 + lVar20,lVar15 + lVar20,lVar16 + lVar20,
                                    (longlong)(int)uVar10 * 0x10 + *plVar14);
              plVar14 = local_d0;
              if (cVar5 != '\0') goto LAB_146bd15d0;
              uVar10 = local_c8[(int)uVar10];
            } while (uVar10 != local_b8[lVar11]);
            goto LAB_146bd161d;
          }
LAB_146bd15d0:
          iVar9 = iVar9 + 1;
          puVar7 = local_c8;
        }
        else {
LAB_146bd161d:
          uVar4 = local_c8[lVar11];
          if (local_d1 == 0) {
            uVar4 = uVar6;
            uVar6 = local_c8[lVar11];
          }
          iVar9 = (int)param_2[1];
          lVar20 = (longlong)iVar9;
          *(uint *)(param_2 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
            FUN_146bd78c8(param_2,iVar9);
            plVar14 = local_d0;
          }
          lVar15 = *param_2;
          *(uint *)(lVar15 + lVar20 * 0xc) = uVar10;
          *(uint *)(lVar15 + 4 + lVar20 * 0xc) = uVar4;
          *(uint *)(lVar15 + 8 + lVar20 * 0xc) = uVar6;
          local_c8[(int)local_b8[lVar11]] = local_c8[lVar11];
          local_b8[(int)local_c8[lVar11]] = local_b8[lVar11];
          uVar18 = (ulonglong)(iVar17 - 1);
          iVar9 = 0;
          puVar7 = local_b8;
        }
        uVar6 = puVar7[lVar11];
      } while (2 < (int)uVar18);
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd16fa FUN_146bd16fa body=328 status=ok
// SIG undefined FUN_146bd16fa(void)

bool FUN_146bd16fa(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = *param_4;
  dVar1 = param_4[1];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_3[1];
  dVar7 = *param_3;
  dVar10 = (dVar4 - dVar2) * (dVar1 - dVar3) - (dVar5 - dVar3) * (dVar9 - dVar2);
  dVar4 = (dVar7 - dVar4) * (dVar1 - dVar5) - (dVar6 - dVar5) * (dVar9 - dVar4);
  bVar8 = false;
  if ((0.0 < dVar10 * dVar4) &&
     (dVar9 = (dVar2 - dVar7) * (dVar1 - dVar6) - (dVar3 - dVar6) * (dVar9 - dVar7),
     0.0 < dVar4 * dVar9)) {
    bVar8 = 0.0 < dVar10 * dVar9;
  }
  return bVar8;
}



// FUNCTION 146bd1842 FUN_146bd1842 body=472 status=ok
// SIG undefined FUN_146bd1842(void)

void FUN_146bd1842(longlong *param_1,double *param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = DAT_14c8464e8;
  dVar10 = DAT_14c8464e0;
  param_2[2] = DAT_14c8464f0;
  *param_2 = dVar10;
  param_2[1] = dVar8;
  dVar8 = DAT_14c8464e8;
  dVar10 = DAT_14c8464e0;
  param_3[2] = DAT_14c8464f0;
  *param_3 = dVar10;
  param_3[1] = dVar8;
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 1) {
    dVar10 = *param_2;
    dVar8 = param_2[1];
    dVar9 = param_2[2];
  }
  else {
    iVar4 = iVar1 + -1;
    lVar6 = 0x10;
    lVar7 = 0;
    do {
      lVar2 = *param_1;
      lVar5 = (longlong)iVar4;
      *param_3 = *(double *)(lVar2 + -0x10 + lVar6) + *param_3;
      param_3[1] = *(double *)(lVar2 + -8 + lVar6) + param_3[1];
      param_3[2] = *(double *)(lVar2 + lVar6) + param_3[2];
      dVar10 = (*(double *)(lVar2 + 0x10 + lVar5 * 0x18) + *(double *)(lVar2 + lVar6)) *
               (*(double *)(lVar2 + -8 + lVar6) - *(double *)(lVar2 + 8 + lVar5 * 0x18)) + *param_2;
      *param_2 = dVar10;
      dVar8 = (*(double *)(lVar2 + lVar5 * 0x18) + *(double *)(lVar2 + -0x10 + lVar6)) *
              (*(double *)(lVar2 + lVar6) - *(double *)(lVar2 + 0x10 + lVar5 * 0x18)) + param_2[1];
      param_2[1] = dVar8;
      dVar9 = (*(double *)(lVar2 + 8 + lVar5 * 0x18) + *(double *)(lVar2 + -8 + lVar6)) *
              (*(double *)(lVar2 + -0x10 + lVar6) - *(double *)(lVar2 + lVar5 * 0x18)) + param_2[2];
      param_2[2] = dVar9;
      iVar4 = (int)lVar7;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar1 != lVar7);
  }
  dVar11 = SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar8 * dVar8);
  dVar3 = 1.0 / dVar11;
  if (0.0 < dVar11) {
    dVar10 = dVar10 * dVar3;
    dVar8 = dVar8 * dVar3;
  }
  else {
    dVar10 = 0.0;
    dVar8 = 0.0;
  }
  *param_2 = dVar10;
  param_2[1] = dVar8;
  param_2[2] = (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar9 * dVar3));
  dVar10 = 1.0 / (double)iVar1;
  *param_3 = *param_3 * dVar10;
  param_3[1] = param_3[1] * dVar10;
  param_3[2] = dVar10 * param_3[2];
  return;
}



// FUNCTION 146bd1a1a FUN_146bd1a1a body=865 status=ok
// SIG undefined FUN_146bd1a1a(void)

void FUN_146bd1a1a(longlong *param_1,longlong *param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  uint **ppuVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_128 [40];
  longlong *local_100;
  uint *local_f8;
  uint *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [24];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146be7820(param_2,0);
  }
  uVar6 = *(uint *)(param_1 + 1);
  uVar14 = (ulonglong)uVar6;
  if (2 < (int)uVar6) {
    if (uVar6 == 3) {
      iVar12 = (int)param_2[1];
      lVar8 = (longlong)iVar12;
      *(uint *)(param_2 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
        FUN_146bd78c8(param_2,iVar12);
      }
      lVar11 = *param_2;
      *(undefined4 *)(lVar11 + lVar8 * 0xc) = 0;
      *(uint *)(lVar11 + 4 + lVar8 * 0xc) = param_3 + 1;
      *(uint *)(lVar11 + 8 + lVar8 * 0xc) = 2 - (uint)param_3;
    }
    else {
      local_100 = param_1;
      FUN_146bd1842(param_1,&local_90,local_a8);
      local_b8 = (uint *)0x0;
      uStack_b0 = 0;
      local_c8 = (uint *)0x0;
      uStack_c0 = 0;
      FUN_144a127d2(&local_b8,uVar14,0);
      FUN_144a127d2(&local_c8,uVar6,0);
      uVar9 = 0;
      do {
        local_b8[uVar9] = (int)uVar9 - 1;
        uVar1 = uVar9 + 1;
        local_c8[uVar9] = (uint)uVar1;
        uVar9 = uVar1;
      } while (uVar14 != uVar1);
      *local_b8 = uVar6 - 1;
      local_c8[uVar6 - 1] = 0;
      uVar6 = 0;
      iVar12 = 0;
      do {
        iVar13 = (int)uVar14;
        lVar8 = (longlong)(int)uVar6;
        uVar7 = local_b8[lVar8];
        if (iVar13 == 3 || iVar13 <= iVar12) {
          uVar10 = local_c8[lVar8];
LAB_146bd1ba8:
          uVar3 = uVar6;
          if (param_3 != 0) {
            uVar3 = uVar10;
            uVar10 = uVar6;
          }
          iVar12 = (int)param_2[1];
          lVar11 = (longlong)iVar12;
          *(uint *)(param_2 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
            FUN_146bd78c8(param_2,iVar12);
          }
          lVar2 = *param_2;
          *(uint *)(lVar2 + lVar11 * 0xc) = uVar7;
          *(uint *)(lVar2 + 4 + lVar11 * 0xc) = uVar3;
          *(uint *)(lVar2 + 8 + lVar11 * 0xc) = uVar10;
          ppuVar5 = &local_b8;
          local_c8[(int)local_b8[lVar8]] = local_c8[lVar8];
          local_b8[(int)local_c8[lVar8]] = local_b8[lVar8];
          uVar14 = (ulonglong)(iVar13 - 1);
          iVar12 = 0;
        }
        else {
          local_e0 = *local_100;
          local_d0 = local_e0 + (longlong)(int)uVar7 * 0x18;
          local_d8 = local_e0 + lVar8 * 0x18;
          local_e0 = local_e0 + (longlong)(int)local_c8[lVar8] * 0x18;
          FUN_146baf581(&local_78);
          if (0.0 < local_68 * local_80 + local_78 * local_90 + local_70 * local_88) {
            uVar10 = local_c8[lVar8];
            local_f0 = local_c8;
            uVar7 = local_c8[(int)uVar10];
            local_e8 = *local_100;
            local_f8 = local_b8;
            do {
              cVar4 = FUN_146bd1d7c(local_d0,local_d8,local_e0,
                                    local_e8 + (longlong)(int)uVar7 * 0x18);
              if (cVar4 != '\0') goto LAB_146bd1d34;
              uVar7 = local_f0[(int)uVar7];
            } while (uVar7 != local_f8[lVar8]);
            goto LAB_146bd1ba8;
          }
LAB_146bd1d34:
          iVar12 = iVar12 + 1;
          ppuVar5 = &local_c8;
        }
        uVar6 = (*ppuVar5)[lVar8];
      } while (2 < (int)uVar14);
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd1d7c FUN_146bd1d7c body=963 status=ok
// SIG undefined FUN_146bd1d7c(void)

bool FUN_146bd1d7c(double *param_1,double *param_2,double *param_3,double *param_4)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar14 = param_1[2];
  dVar13 = *param_1;
  dVar12 = param_1[1];
  dVar1 = param_4[2];
  dVar2 = *param_4;
  dVar3 = param_4[1];
  dVar4 = param_2[2];
  dVar15 = dVar4 - dVar14;
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar11 = dVar6 - dVar12;
  dVar10 = dVar5 - dVar13;
  dVar7 = param_3[2];
  dVar8 = param_3[1];
  dVar9 = *param_3;
  if (0.0 <= (dVar11 * (dVar7 - dVar14) - dVar15 * (dVar8 - dVar12)) *
             (dVar11 * (dVar1 - dVar14) - (dVar3 - dVar12) * dVar15) +
             (dVar15 * (dVar9 - dVar13) - (dVar7 - dVar14) * dVar10) *
             (dVar15 * (dVar2 - dVar13) - (dVar1 - dVar14) * dVar10) +
             (dVar10 * (dVar8 - dVar12) - (dVar9 - dVar13) * dVar11) *
             (dVar10 * (dVar3 - dVar12) - (dVar2 - dVar13) * dVar11) + 9.99999993922529e-09) {
    dVar10 = dVar7 - dVar4;
    dVar15 = dVar8 - dVar6;
    dVar11 = dVar9 - dVar5;
    if (0.0 <= (dVar15 * (dVar14 - dVar4) - dVar10 * (dVar12 - dVar6)) *
               (dVar15 * (dVar1 - dVar4) - (dVar3 - dVar6) * dVar10) +
               (dVar10 * (dVar13 - dVar5) - (dVar14 - dVar4) * dVar11) *
               (dVar10 * (dVar2 - dVar5) - (dVar1 - dVar4) * dVar11) +
               (dVar11 * (dVar12 - dVar6) - (dVar13 - dVar5) * dVar15) *
               (dVar11 * (dVar3 - dVar6) - (dVar2 - dVar5) * dVar15) + 9.99999993922529e-09) {
      dVar14 = dVar14 - dVar7;
      dVar12 = dVar12 - dVar8;
      dVar13 = dVar13 - dVar9;
      return 0.0 <= (dVar12 * (dVar4 - dVar7) - dVar14 * (dVar6 - dVar8)) *
                    (dVar12 * (dVar1 - dVar7) - (dVar3 - dVar8) * dVar14) +
                    (dVar14 * (dVar5 - dVar9) - (dVar4 - dVar7) * dVar13) *
                    (dVar14 * (dVar2 - dVar9) - (dVar1 - dVar7) * dVar13) +
                    (dVar13 * (dVar6 - dVar8) - (dVar5 - dVar9) * dVar12) *
                    (dVar13 * (dVar3 - dVar8) - (dVar2 - dVar9) * dVar12) + 9.99999993922529e-09;
    }
  }
  return false;
}



// FUNCTION 146bd2140 FUN_146bd2140 body=116 status=ok
// SIG undefined FUN_146bd2140(void)

undefined8 * FUN_146bd2140(undefined8 *param_1)

{
  void *_Dst;
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1800);
  lVar1 = 0;
  memset(_Dst,0,0x1800);
  do {
    *(undefined4 *)((longlong)_Dst + lVar1) = 0xffffffff;
    lVar1 = lVar1 + 0xc;
  } while (lVar1 != 0x1800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_146bd21b4(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146bd21b4 FUN_146bd21b4 body=132 status=ok
// SIG undefined FUN_146bd21b4(void)

void FUN_146bd21b4(longlong param_1,int param_2)

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



// FUNCTION 146bd223a FUN_146bd223a body=146 status=ok
// SIG undefined FUN_146bd223a(void)

void FUN_146bd223a(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  longlong lVar2;
  
  puVar1 = param_1 + 1;
  FUN_146bd22cc(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x1800);
    lVar2 = 0;
    memset(_Dst,0,0x1800);
    do {
      *(undefined4 *)((longlong)_Dst + lVar2) = 0xffffffff;
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != 0x1800);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_146bd21b4(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 146bd22cc FUN_146bd22cc body=106 status=ok
// SIG undefined FUN_146bd22cc(void)

void FUN_146bd22cc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146bd2336(param_1);
    return;
  }
  return;
}



// FUNCTION 146bd2336 FUN_146bd2336 body=63 status=ok
// SIG undefined FUN_146bd2336(void)

void FUN_146bd2336(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd2376(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146bd2376 FUN_146bd2376 body=97 status=ok
// SIG undefined FUN_146bd2376(void)

ulonglong FUN_146bd2376(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146bd23d8 FUN_146bd23d8 body=101 status=ok
// SIG undefined FUN_146bd23d8(void)

void FUN_146bd23d8(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 * 0x200 + param_1[1];
  uVar3 = (uint)param_3;
  if (uVar2 != uVar3) {
    if (uVar3 <= uVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *param_2;
      return;
    }
    FUN_146bd25f0(param_1,param_3 & 0xffffffff);
  }
  FUN_146bd252a(param_1,param_2);
  return;
}



// FUNCTION 146bd243e FUN_146bd243e body=235 status=ok
// SIG undefined FUN_146bd243e(void)

void FUN_146bd243e(longlong param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (1 < (int)param_2) {
    lVar10 = *(longlong *)(param_1 + 0x10);
    lVar6 = *(longlong *)(lVar10 + (ulonglong)(param_2 >> 9) * 8);
    iVar3 = *(int *)(lVar6 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    fVar1 = *(float *)(lVar6 + 4 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    uVar5 = param_2;
    uVar11 = param_2;
    do {
      uVar8 = uVar5 >> 1;
      lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar5 >> 10) * 8);
      fVar2 = *(float *)(lVar6 + 4 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      if (fVar2 < fVar1) break;
      lVar7 = (ulonglong)((uVar8 & 0x1ff) << 2) * 3;
      iVar4 = *(int *)(lVar6 + lVar7);
      lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8);
      uVar9 = (ulonglong)(uVar11 & 0x1ff);
      *(int *)(lVar10 + uVar9 * 0xc) = iVar4;
      *(float *)(lVar10 + 4 + uVar9 * 0xc) = fVar2;
      *(uint *)(lVar10 + 8 + uVar9 * 0xc) = uVar11;
      *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x10);
      uVar5 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar5 >> 10) * 8) + 8 + lVar7);
      uVar11 = uVar8;
    } while (1 < (int)uVar5);
    if (uVar11 != param_2) {
      lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8);
      uVar9 = (ulonglong)(uVar11 & 0x1ff);
      *(int *)(lVar10 + uVar9 * 0xc) = iVar3;
      *(float *)(lVar10 + 4 + uVar9 * 0xc) = fVar1;
      *(uint *)(lVar10 + 8 + uVar9 * 0xc) = uVar11;
      *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 4) = uVar11;
    }
  }
  return;
}



// FUNCTION 146bd252a FUN_146bd252a body=198 status=ok
// SIG undefined FUN_146bd252a(void)

void FUN_146bd252a(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  longlong lVar4;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x1800);
      lVar4 = 0;
      memset(_Dst,0,0x1800);
      do {
        *(undefined4 *)((longlong)_Dst + lVar4) = 0xffffffff;
        lVar4 = lVar4 + 0xc;
      } while (lVar4 != 0x1800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_146bd21b4(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)uVar3 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + (ulonglong)uVar3 * 0xc) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146bd25f0 FUN_146bd25f0 body=249 status=ok
// SIG undefined FUN_146bd25f0(void)

void FUN_146bd25f0(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uVar3 = param_1[4];
    if ((int)uVar3 < (int)uVar2) {
      do {
        _Dst = (void *)FUN_14001cc68(0x1800);
        memset(_Dst,0,0x1800);
        lVar5 = 0;
        do {
          *(undefined4 *)((longlong)_Dst + lVar5) = 0xffffffff;
          lVar5 = lVar5 + 0xc;
        } while (lVar5 != 0x1800);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_146bd21b4(plVar1,iVar4);
        }
        *(void **)(*plVar1 + (longlong)iVar4 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
    else if (uVar2 < uVar3) {
      FUN_146bd22cc(plVar1,uVar2,0);
    }
    iVar4 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    iVar6 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    *param_1 = iVar6;
    param_1[1] = iVar4;
  }
  return;
}



// FUNCTION 146bd26ea FUN_146bd26ea body=301 status=ok
// SIG undefined FUN_146bd26ea(void)

void FUN_146bd26ea(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar10 = (uint)param_2;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (param_2 >> 9 & 0x7fffff) * 8);
  iVar5 = *(int *)(lVar7 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
  if (uVar4 == uVar10) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 4) = 0xffffffff;
    lVar7 = *(longlong *)
             (*(longlong *)(param_1 + 0x10) + (ulonglong)(*(uint *)(param_1 + 0x20) >> 9) * 8);
    uVar9 = (ulonglong)(*(uint *)(param_1 + 0x20) & 0x1ff);
    *(undefined4 *)(lVar7 + uVar9 * 0xc) = 0xffffffff;
    *(undefined8 *)(lVar7 + 4 + uVar9 * 0xc) = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    return;
  }
  piVar1 = (int *)(lVar7 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
  iVar2 = piVar1[1];
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  lVar8 = (ulonglong)((uVar4 & 0x1ff) << 2) * 3;
  iVar6 = *(int *)(lVar7 + lVar8);
  iVar3 = *(int *)(lVar7 + 4 + lVar8);
  *piVar1 = iVar6;
  piVar1[1] = iVar3;
  piVar1[2] = uVar10;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  *(int *)(lVar7 + lVar8) = iVar5;
  *(int *)(lVar7 + 4 + lVar8) = iVar2;
  *(uint *)(lVar7 + 8 + lVar8) = uVar4;
  *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 4) = uVar10;
  *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 4) = uVar4;
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x28) +
   (longlong)
   *(int *)(*(longlong *)
             (*(longlong *)(param_1 + 0x10) + (ulonglong)(*(uint *)(param_1 + 0x20) >> 9) * 8) +
           ((ulonglong)*(uint *)(param_1 + 0x20) & 0x1ff) * 0xc) * 4) = 0xffffffff;
  lVar7 = *(longlong *)
           (*(longlong *)(param_1 + 0x10) + (ulonglong)(*(uint *)(param_1 + 0x20) >> 9) * 8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x20) & 0x1ff;
  *(undefined4 *)(lVar7 + uVar9 * 0xc) = 0xffffffff;
  *(undefined8 *)(lVar7 + 4 + uVar9 * 0xc) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  FUN_146bd2818();
  return;
}



// FUNCTION 146bd2818 FUN_146bd2818 body=85 status=ok
// SIG undefined FUN_146bd2818(void)

void FUN_146bd2818(longlong param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  
  if (1 < (int)param_2) {
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 10) * 8)
                       + 4 + (ulonglong)(param_2 >> 1 & 0x1ff) * 0xc);
    pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8)
                       + 4 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      FUN_146bd243e();
      return;
    }
  }
  FUN_146bd286e();
  return;
}



// FUNCTION 146bd286e FUN_146bd286e body=323 status=ok
// SIG undefined FUN_146bd286e(void)

void FUN_146bd286e(longlong param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  uVar12 = param_2 * 2;
  iVar8 = *(int *)(param_1 + 0x20);
  if ((int)uVar12 <= iVar8) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    iVar4 = *(int *)(lVar5 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    fVar2 = *(float *)(lVar5 + 4 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    uVar7 = (ulonglong)param_2;
    do {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8);
      fVar13 = *(float *)(lVar6 + 4 + (ulonglong)(uVar12 & 0x1fe) * 0xc);
      uVar11 = (uint)uVar7;
      uVar10 = (ulonglong)uVar12;
      if (fVar2 <= fVar13) {
        uVar10 = uVar7;
      }
      if ((int)uVar12 < iVar8) {
        if (fVar2 <= fVar13) {
          fVar13 = fVar2;
        }
        pfVar1 = (float *)(lVar6 + 4 + (ulonglong)(uVar12 & 0x1ff | 1) * 0xc);
        if (*pfVar1 <= fVar13 && fVar13 != *pfVar1) {
          uVar10 = (ulonglong)(uVar12 | 1);
        }
      }
      uVar9 = (uint)uVar10;
      if (uVar9 == uVar11) break;
      lVar6 = *(longlong *)(lVar5 + (uVar10 >> 9) * 8);
      iVar8 = *(int *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      uVar3 = *(undefined4 *)(lVar6 + 4 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      lVar5 = *(longlong *)(lVar5 + (uVar7 >> 9) * 8);
      uVar7 = (ulonglong)(uVar11 & 0x1ff);
      *(int *)(lVar5 + uVar7 * 0xc) = iVar8;
      *(undefined4 *)(lVar5 + 4 + uVar7 * 0xc) = uVar3;
      *(uint *)(lVar5 + 8 + uVar7 * 0xc) = uVar11;
      *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 4) = uVar11;
      uVar12 = uVar9 * 2;
      iVar8 = *(int *)(param_1 + 0x20);
      uVar7 = uVar10;
      uVar11 = uVar9;
    } while ((int)uVar12 <= iVar8);
    if (uVar11 != param_2) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      uVar7 = (ulonglong)(uVar11 & 0x1ff);
      *(int *)(lVar5 + uVar7 * 0xc) = iVar4;
      *(float *)(lVar5 + 4 + uVar7 * 0xc) = fVar2;
      *(uint *)(lVar5 + 8 + uVar7 * 0xc) = uVar11;
      *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4) = uVar11;
    }
  }
  return;
}



// FUNCTION 146bd29b2 FUN_146bd29b2 body=103 status=ok
// SIG undefined FUN_146bd29b2(void)

void FUN_146bd29b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_146bd2a1a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd2a1a FUN_146bd2a1a body=96 status=ok
// SIG undefined FUN_146bd2a1a(void)

void FUN_146bd2a1a(longlong param_1,int param_2)

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



// FUNCTION 146bd2a7a FUN_146bd2a7a body=1997 status=ok
// SIG undefined FUN_146bd2a7a(void)

double FUN_146bd2a7a(double *param_1)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar1 = param_1[5];
  dVar16 = param_1[4];
  dVar14 = param_1[1] - dVar16;
  dVar2 = param_1[3];
  dVar5 = param_1[8] - dVar1;
  dVar7 = param_1[7] - dVar16;
  dVar8 = param_1[6] - dVar2;
  dVar9 = param_1[0xb] - dVar1;
  dVar3 = param_1[10] - dVar16;
  dVar15 = param_1[9] - dVar2;
  dVar6 = dVar5 * dVar9 + dVar8 * dVar15 + dVar7 * dVar3;
  dVar4 = dVar9 * dVar9 + dVar15 * dVar15 + dVar3 * dVar3;
  dVar10 = *param_1 - dVar2;
  dVar17 = param_1[2] - dVar1;
  dVar11 = dVar17 * dVar5 + dVar10 * dVar8 + dVar14 * dVar7;
  dVar18 = dVar17 * dVar9 + dVar10 * dVar15 + dVar14 * dVar3;
  dVar17 = -dVar11;
  dVar10 = (dVar5 * dVar5 + dVar8 * dVar8 + dVar7 * dVar7) - dVar11;
  dVar14 = dVar6 - dVar11;
  dVar19 = -dVar18;
  if (dVar17 < dVar11) {
    if (dVar14 <= 0.0) {
      if (0.0 < dVar10) {
        dVar11 = dVar17 / (dVar17 - dVar10);
        dVar12 = dVar14 / (dVar14 - dVar10);
        dVar17 = 1.0 - dVar12;
        dVar19 = (dVar6 * dVar11 + dVar19) * dVar17;
        dVar13 = 0.0;
        if (dVar19 < 0.0) {
          dVar13 = ((dVar6 * dVar12 + dVar4 * dVar17) - dVar18) * dVar17;
          if (0.0 < dVar13) {
            dVar19 = dVar19 / (dVar19 - dVar13);
            dVar13 = dVar17 * dVar19 + (1.0 - dVar19) * 0.0;
            dVar11 = dVar12 * dVar19 + dVar11 * (1.0 - dVar19);
          }
          else {
            dVar10 = (dVar6 - dVar18) - dVar10;
            dVar13 = 0.0;
            if ((dVar10 < 0.0) && (dVar14 = (dVar4 - dVar18) - dVar14, dVar13 = 1.0, 0.0 < dVar14))
            {
              dVar13 = dVar10 / (dVar10 - dVar14);
            }
            dVar11 = 1.0 - dVar13;
          }
        }
        goto LAB_146bd30da;
      }
    }
    else {
      if (0.0 < dVar10) {
        dVar11 = dVar17 / (dVar17 - dVar10);
        dVar17 = dVar17 / (dVar17 - dVar14);
        dVar10 = (dVar6 * dVar11 + dVar19) * dVar17;
        dVar13 = 0.0;
        if (0.0 <= dVar10) goto LAB_146bd30da;
        dVar14 = (dVar4 * dVar17 + dVar19) * dVar17;
        if (0.0 < dVar14) {
          dVar10 = dVar10 / (dVar10 - dVar14);
          dVar11 = dVar10 * 0.0 + dVar11 * (1.0 - dVar10);
          dVar13 = dVar17 * dVar10 + (1.0 - dVar10) * 0.0;
          goto LAB_146bd30da;
        }
        goto joined_r0x000146bd2eec;
      }
      dVar17 = dVar17 / (dVar17 - dVar14);
      dVar11 = dVar14 / (dVar14 - dVar10);
      dVar13 = 1.0 - dVar11;
      dVar19 = (dVar4 * dVar17 + dVar19) * (dVar13 - dVar17);
      if (0.0 <= dVar19) goto LAB_146bd2ffa;
      dVar12 = (dVar13 - dVar17) * ((dVar6 * dVar11 + dVar4 * dVar13) - dVar18);
      if (0.0 < dVar12) {
        dVar19 = dVar19 / (dVar19 - dVar12);
        dVar13 = dVar13 * dVar19 + dVar17 * (1.0 - dVar19);
        dVar11 = dVar11 * dVar19 + (1.0 - dVar19) * 0.0;
        goto LAB_146bd30da;
      }
    }
joined_r0x000146bd304f:
    dVar13 = 0.0;
    dVar10 = (dVar6 - dVar18) - dVar10;
    if (dVar10 < 0.0) {
      dVar14 = (dVar4 - dVar18) - dVar14;
      if (dVar14 <= 0.0) {
        dVar13 = 1.0;
      }
      else {
        dVar13 = dVar10 / (dVar10 - dVar14);
      }
    }
    dVar11 = 1.0 - dVar13;
  }
  else {
    if (0.0 <= dVar14) {
joined_r0x000146bd2eec:
      dVar11 = 0.0;
      dVar13 = 0.0;
      if (dVar18 <= 0.0) goto LAB_146bd30da;
      dVar11 = 0.0;
      if (dVar4 - dVar18 <= 0.0) {
        dVar13 = 1.0;
        goto LAB_146bd30da;
      }
    }
    else {
      dVar17 = dVar17 / (dVar17 - dVar14);
      dVar11 = dVar14 / (dVar14 - dVar10);
      dVar13 = 1.0 - dVar11;
      dVar19 = (dVar4 * dVar17 + dVar19) * (dVar13 - dVar17);
      if (dVar19 < 0.0) {
        dVar12 = (dVar13 - dVar17) * ((dVar6 * dVar11 + dVar4 * dVar13) - dVar18);
        if (0.0 < dVar12) {
          dVar19 = dVar19 / (dVar19 - dVar12);
          dVar13 = dVar13 * dVar19 + dVar17 * (1.0 - dVar19);
          dVar11 = dVar11 * dVar19 + (1.0 - dVar19) * 0.0;
          goto LAB_146bd30da;
        }
        goto joined_r0x000146bd304f;
      }
LAB_146bd2ffa:
      dVar11 = 0.0;
      dVar13 = 0.0;
      if ((dVar18 <= 0.0) || (dVar13 = 1.0, dVar4 - dVar18 <= 0.0)) goto LAB_146bd30da;
    }
    dVar11 = 0.0;
    dVar13 = dVar18 / dVar4;
  }
LAB_146bd30da:
  param_1[0xc] = (1.0 - dVar11) - dVar13;
  param_1[0xd] = dVar11;
  param_1[0xe] = dVar13;
  dVar10 = dVar9 * dVar13 + dVar1 + dVar5 * dVar11;
  dVar1 = dVar3 * dVar13 + dVar16 + dVar7 * dVar11;
  dVar16 = dVar15 * dVar13 + dVar2 + dVar8 * dVar11;
  param_1[0xf] = dVar16;
  param_1[0x10] = dVar1;
  param_1[0x11] = dVar10;
  dVar16 = dVar16 - *param_1;
  dVar1 = dVar1 - param_1[1];
  dVar10 = dVar10 - param_1[2];
  return dVar10 * dVar10 + dVar16 * dVar16 + dVar1 * dVar1;
}



// FUNCTION 146bd3248 FUN_146bd3248 body=38 status=ok
// SIG undefined FUN_146bd3248(void)

undefined8 FUN_146bd3248(undefined8 param_1,int param_2)

{
  FUN_146ba0c6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bd3274 FUN_146bd3274 body=3 status=ok
// SIG undefined FUN_146bd3274(void)

void FUN_146bd3274(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146bd3274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}



// FUNCTION 146bd3296 FUN_146bd3296 body=235 status=ok
// SIG undefined FUN_146bd3296(void)

undefined8 FUN_146bd3296(longlong param_1)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  
  if ((0.0 < *(double *)(param_1 + 0x118)) &&
     (iVar1 = _finite(*(double *)(param_1 + 0x118)), iVar1 != 0)) {
    if (*(double *)(param_1 + 0xe8) <= *(double *)(param_1 + 0x100)) {
      if (*(double *)(param_1 + 0xf0) <= *(double *)(param_1 + 0x108)) {
        if (*(double *)(param_1 + 0xf8) <= *(double *)(param_1 + 0x110)) {
          dVar4 = *(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8);
          dVar4 = (double)(-(ulonglong)(0.0 <= dVar4) & (ulonglong)dVar4);
          dVar3 = *(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0);
          dVar3 = (double)(-(ulonglong)(0.0 <= dVar3) & (ulonglong)dVar3);
          uVar2 = -(ulonglong)(dVar4 <= dVar3);
          dVar4 = (double)(~uVar2 & (ulonglong)dVar4 | uVar2 & (ulonglong)dVar3);
          dVar3 = *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0xe8);
          dVar3 = (double)(-(ulonglong)(0.0 <= dVar3) & (ulonglong)dVar3);
          uVar2 = -(ulonglong)(dVar4 <= dVar3);
          iVar1 = _finite((double)(uVar2 & (ulonglong)dVar3 | ~uVar2 & (ulonglong)dVar4));
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != 0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 146bd3382 FUN_146bd3382 body=292 status=ok
// SIG undefined FUN_146bd3382(void)

void FUN_146bd3382(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0xe8);
  dVar6 = (double)(-(ulonglong)(0.0 <= dVar6) & (ulonglong)dVar6);
  dVar9 = *(double *)(param_1 + 0x118);
  dVar7 = *(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0);
  iVar1 = (int)(dVar6 / dVar9) + 1;
  dVar7 = (double)(-(ulonglong)(0.0 <= dVar7) & (ulonglong)dVar7);
  iVar2 = (int)(dVar7 / dVar9) + 1;
  dVar8 = *(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8);
  dVar8 = (double)(-(ulonglong)(0.0 <= dVar8) & (ulonglong)dVar8);
  iVar3 = (int)(dVar8 / dVar9) + 1;
  iVar4 = iVar1;
  if (iVar1 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  if (*(int *)(param_1 + 0x124) < iVar4) {
    dVar9 = (double)(~-(ulonglong)(dVar8 <= dVar7) & (ulonglong)dVar8 |
                    -(ulonglong)(dVar8 <= dVar7) & (ulonglong)dVar7);
    uVar5 = -(ulonglong)(dVar9 <= dVar6);
    dVar9 = (double)(uVar5 & (ulonglong)dVar6 | ~uVar5 & (ulonglong)dVar9) /
            (double)(*(int *)(param_1 + 0x124) + -1);
    *(double *)(param_1 + 0x118) = dVar9;
    iVar1 = (int)(dVar6 / dVar9) + 1;
    iVar2 = (int)(dVar7 / dVar9) + 1;
    iVar3 = (int)(dVar8 / dVar9) + 1;
  }
  *(int *)(param_1 + 0x170) = iVar1;
  *(int *)(param_1 + 0x174) = iVar2;
  *(int *)(param_1 + 0x178) = iVar3;
  return;
}



// FUNCTION 146bd34a6 FUN_146bd34a6 body=179 status=ok
// SIG undefined FUN_146bd34a6(void)

void FUN_146bd34a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1dc);
  FUN_146bd4024(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
    FUN_146bd4060(param_1 + 0x1d0,0);
  }
  FUN_146bd3f14(param_1 + 0x1d0,*(undefined4 *)(param_1 + 0x1c8),1);
  iVar1 = *(int *)(param_1 + 0x1ec);
  FUN_146bd42bb(*(undefined8 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e8));
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1ec) != 0)) {
    FUN_146bd42e2(param_1 + 0x1e0,0);
  }
  FUN_146bd3f9c(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x1c8),1);
  return;
}



// FUNCTION 146bd355a FUN_146bd355a body=229 status=ok
// SIG undefined FUN_146bd355a(void)

void FUN_146bd355a(longlong param_1)

{
  int iVar1;
  
  FUN_146bd3f9c(param_1 + 0x288,*(undefined4 *)(param_1 + 0x280),1);
  iVar1 = *(int *)(param_1 + 0x2a4);
  FUN_146bd4656(*(undefined8 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x2a0));
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2a4) != 0)) {
    FUN_146bd4682(param_1 + 0x298,0);
  }
  FUN_146bd4536(param_1 + 0x298,*(undefined4 *)(param_1 + 0x280),1);
  LOCK();
  *(undefined4 *)(param_1 + 0x278) = 0;
  UNLOCK();
  FUN_146bd3f9c(param_1 + 0x2b0,*(undefined4 *)(param_1 + 0x2a8),1);
  iVar1 = *(int *)(param_1 + 0x2cc);
  FUN_146bd4869(*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c8));
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
    FUN_146bd4894(param_1 + 0x2c0,0);
  }
  FUN_146bd45c6(param_1 + 0x2c0,*(undefined4 *)(param_1 + 0x2a8),1);
  return;
}



// FUNCTION 146bd3640 FUN_146bd3640 body=60 status=ok
// SIG undefined FUN_146bd3640(void)

bool FUN_146bd3640(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])) &&
     ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
    bVar1 = param_1[2] != param_2[2];
  }
  return bVar1;
}



// FUNCTION 146bd367c FUN_146bd367c body=109 status=ok
// SIG undefined FUN_146bd367c(void)

void FUN_146bd367c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_146bd4a7c();
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[0xf];
  FUN_146bd42bb(*(undefined8 *)(param_1 + 0xc),param_1[0xe]);
  param_1[0xe] = 0;
  if ((iVar4 < 0) && (param_1[0xf] != 0)) {
    FUN_146bd42e2(param_1 + 0xc,0);
  }
  FUN_146bd3f9c(param_1 + 0xc,iVar2 * iVar1 * iVar3,1);
  return;
}



// FUNCTION 146bd36ea FUN_146bd36ea body=109 status=ok
// SIG undefined FUN_146bd36ea(void)

void FUN_146bd36ea(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_146bd4eac();
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[0xf];
  FUN_146bd42bb(*(undefined8 *)(param_1 + 0xc),param_1[0xe]);
  param_1[0xe] = 0;
  if ((iVar4 < 0) && (param_1[0xf] != 0)) {
    FUN_146bd42e2(param_1 + 0xc,0);
  }
  FUN_146bd3f9c(param_1 + 0xc,iVar2 * iVar1 * iVar3,1);
  return;
}



// FUNCTION 146bd3758 FUN_146bd3758 body=701 status=ok
// SIG undefined FUN_146bd3758(void)

void FUN_146bd3758(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  double *pdVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_148 [32];
  _RTL_CRITICAL_SECTION *local_128;
  undefined4 local_120;
  undefined8 *local_118;
  longlong *local_108;
  longlong local_100;
  _RTL_CRITICAL_SECTION *local_f8;
  longlong *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c0;
  longlong **local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  _RTL_CRITICAL_SECTION local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined1 *)(param_1 + 0x230) = 1;
  local_d8 = 0;
  uStack_d0 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pdVar7 = (double *)*param_2;
    pdVar4 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
    do {
      dVar1 = *(double *)(param_1 + 0x118);
      iVar5 = (int)((*pdVar7 - *(double *)(param_1 + 0xe8)) / dVar1);
      if ((((-1 < iVar5) &&
           (iVar8 = (int)((pdVar7[1] - *(double *)(param_1 + 0xf0)) / dVar1), -1 < iVar8)) &&
          (iVar9 = (int)((pdVar7[2] - *(double *)(param_1 + 0xf8)) / dVar1), -1 < iVar9)) &&
         (((iVar5 < *(int *)(param_1 + 0x244) && (iVar8 < *(int *)(param_1 + 0x248))) &&
          (iVar9 < *(int *)(param_1 + 0x24c))))) {
        local_a0.DebugInfo._0_1_ = '\0';
        local_128 = &local_a0;
        FUN_146bd52d8(param_1 + 0x238,iVar5,iVar8,iVar9);
        uVar2 = uStack_d0;
        if ((char)local_a0.DebugInfo == '\x01') {
          lVar6 = (longlong)(int)uStack_d0;
          uVar3 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar3);
          if (uStack_d0._4_4_ < uVar3) {
            FUN_146bd546c(&local_d8,uVar2 & 0xffffffff);
          }
          *(int *)(local_d8 + lVar6 * 0xc) = iVar5;
          *(int *)(local_d8 + 4 + lVar6 * 0xc) = iVar8;
          *(int *)(local_d8 + 8 + lVar6 * 0xc) = iVar9;
        }
      }
      pdVar7 = pdVar7 + 3;
    } while (pdVar7 != pdVar4);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  InitializeCriticalSection(&local_a0);
  SetCriticalSectionSpinCount(&local_a0,4000);
  if (0 < (int)uStack_d0) {
    do {
      local_f8 = &local_a0;
      local_f0 = &local_e8;
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = &LAB_146bd5500;
      local_120 = 0;
      local_118 = &local_b0;
      local_108 = &local_d8;
      local_100 = param_1;
      local_b8 = &local_108;
      FUN_1401f8d10(L"ParallelFor Task",(int)uStack_d0,1,&local_c0);
      bVar10 = (longlong)uStack_d0 < 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      if (bVar10) {
        FUN_146bd767a(&local_d8,0);
      }
      uVar2 = uStack_d0;
      lVar6 = local_d8;
      if (0 < (int)uStack_e0) {
        local_d8 = local_e8;
        uStack_d0 = uStack_e0;
        local_e8 = lVar6;
        uStack_e0 = uVar2;
      }
    } while (0 < (int)uStack_d0);
  }
  *(undefined1 *)(param_1 + 0x230) = 0;
  DeleteCriticalSection(&local_a0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bd3a16 FUN_146bd3a16 body=1276 status=ok
// SIG undefined FUN_146bd3a16(void)

void FUN_146bd3a16(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  double *pdVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  double *pdVar23;
  undefined1 auStack_1a8 [36];
  uint local_184;
  longlong *local_180;
  ulonglong local_178;
  double *local_170;
  int local_164;
  longlong local_160;
  undefined8 local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined1 local_138 [48];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_160 = param_1 + 0x238;
  *(undefined4 *)(param_1 + 0x250) = 0;
  FUN_146bd36ea(local_160,*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),
                *(undefined4 *)(param_1 + 0x178));
  local_148 = 0;
  uStack_140 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pdVar23 = (double *)*param_2;
    pdVar17 = pdVar23 + (longlong)*(int *)(param_2 + 1) * 3;
    uVar11 = 0;
    plVar8 = (longlong *)(param_1 + 0x150);
    do {
      dVar1 = *(double *)(param_1 + 0x118);
      uVar12 = (uint)((*pdVar23 - *(double *)(param_1 + 0xe8)) / dVar1);
      if (((((-1 < (int)uVar12) &&
            (uVar21 = (uint)((pdVar23[1] - *(double *)(param_1 + 0xf0)) / dVar1), -1 < (int)uVar21))
           && (uVar14 = (uint)((pdVar23[2] - *(double *)(param_1 + 0xf8)) / dVar1), -1 < (int)uVar14
              )) && (((int)uVar12 < *(int *)(param_1 + 0x244) &&
                     ((int)uVar21 < *(int *)(param_1 + 0x248))))) &&
         ((int)uVar14 < *(int *)(param_1 + 0x24c))) {
        uVar18 = uVar12 >> 5;
        uVar16 = (ulonglong)((uVar21 & 0x1f) << 5 | (uVar14 & 0x1f) << 10 | uVar12 & 0x1f);
        plVar6 = (longlong *)
                 ((longlong)
                  (int)((*(int *)(param_1 + 0x23c) * (uVar14 >> 5) + (uVar21 >> 5)) *
                        *(int *)(param_1 + 0x238) + uVar18) * 0x10 + *(longlong *)(param_1 + 600));
        lVar10 = *plVar6;
        plVar9 = (longlong *)(lVar10 + 4 + uVar16 * 4);
        if (lVar10 == 0) {
          plVar9 = plVar6 + 1;
        }
        if ((int)*plVar9 != 1) {
          uVar5 = (int)uVar11 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar5);
          local_180 = plVar8;
          local_170 = pdVar17;
          if (uStack_140._4_4_ < uVar5) {
            local_184 = uVar18;
            local_178 = uVar11;
            FUN_146bd546c(&local_148);
            uVar11 = local_178;
            uVar18 = local_184;
          }
          lVar10 = (longlong)(int)uVar11;
          *(uint *)(local_148 + lVar10 * 0xc) = uVar12;
          *(uint *)(local_148 + 4 + lVar10 * 0xc) = uVar21;
          *(uint *)(local_148 + 8 + lVar10 * 0xc) = uVar14;
          lVar10 = FUN_146bd540e(local_160,
                                 ((uVar14 >> 5) * *(int *)(param_1 + 0x23c) + (uVar21 >> 5)) *
                                 *(int *)(param_1 + 0x238) + uVar18);
          *(undefined4 *)(lVar10 + 4 + uVar16 * 4) = 1;
          plVar8 = local_180;
          pdVar17 = local_170;
          while (uVar11 = uStack_140 & 0xffffffff, 0 < (int)uStack_140) {
            iVar15 = (int)uStack_140;
            local_158 = *(undefined8 *)(local_148 + -0xc + uVar11 * 0xc);
            local_150 = *(int *)(local_148 + -4 + uVar11 * 0xc);
            uStack_140._4_4_ = (uint)(uStack_140 >> 0x20);
            uStack_140 = CONCAT44(uStack_140._4_4_,iVar15 + -1);
            FUN_146bd76ec(&local_148);
            pcVar2 = *(code **)(param_1 + 0x130);
            plVar9 = *(longlong **)(param_1 + 0x140);
            if (*(longlong **)(param_1 + 0x140) == (longlong *)0x0) {
              plVar9 = plVar8;
            }
            uVar7 = (**(code **)(*plVar9 + 8))();
            cVar3 = (*pcVar2)(uVar7);
            if (cVar3 != '\0') goto LAB_146bd3db0;
            FUN_146bd57bc(param_1,&local_108,&local_158);
            cVar3 = FUN_146bd58c4(param_1,&local_108,local_138);
            plVar8 = local_180;
            pdVar17 = local_170;
            if (cVar3 != '\0') {
              lVar10 = 8;
              do {
                uVar11 = uStack_140;
                iVar15 = (int)local_158 + *(int *)(&UNK_149f3c518 + lVar10);
                if (*(int *)(param_1 + 0x17c) <= iVar15) {
                  iVar22 = local_158._4_4_ + *(int *)(&UNK_149f3c51c + lVar10);
                  if (((*(int *)(param_1 + 0x180) <= iVar22) &&
                      (iVar13 = local_150 + *(int *)((longlong)&DAT_149f3c520 + lVar10),
                      *(int *)(param_1 + 0x184) <= iVar13)) &&
                     ((iVar15 <= *(int *)(param_1 + 0x188) &&
                      ((iVar22 <= *(int *)(param_1 + 0x18c) && (iVar13 <= *(int *)(param_1 + 400))))
                      ))) {
                    iVar4 = iVar13 + 0x1f;
                    if (-1 < iVar13) {
                      iVar4 = iVar13;
                    }
                    iVar19 = iVar22 + 0x1f;
                    if (-1 < iVar22) {
                      iVar19 = iVar22;
                    }
                    local_184 = iVar19 >> 5;
                    iVar19 = iVar15 + 0x1f;
                    if (-1 < iVar15) {
                      iVar19 = iVar15;
                    }
                    iVar19 = iVar19 >> 5;
                    local_178 = CONCAT44(local_178._4_4_,iVar4 >> 5);
                    uVar16 = (ulonglong)
                             (uint)((iVar22 % 0x20) * 0x20 + (iVar13 % 0x20) * 0x400 + iVar15 % 0x20
                                   );
                    plVar8 = (longlong *)
                             (*(longlong *)(param_1 + 600) +
                             (longlong)
                             (int)((*(int *)(param_1 + 0x23c) * (iVar4 >> 5) + local_184) *
                                   *(int *)(param_1 + 0x238) + iVar19) * 0x10);
                    lVar20 = *plVar8;
                    plVar9 = (longlong *)(lVar20 + 4 + uVar16 * 4);
                    if (lVar20 == 0) {
                      plVar9 = plVar8 + 1;
                    }
                    plVar8 = local_180;
                    if ((int)*plVar9 == 0) {
                      lVar20 = (longlong)(int)uStack_140;
                      uVar12 = (int)uStack_140 + 1;
                      uStack_140 = CONCAT44(uStack_140._4_4_,uVar12);
                      local_164 = iVar19;
                      if (uStack_140._4_4_ < uVar12) {
                        FUN_146bd546c(&local_148,uVar11 & 0xffffffff);
                      }
                      *(int *)(local_148 + lVar20 * 0xc) = iVar15;
                      *(int *)(local_148 + 4 + lVar20 * 0xc) = iVar22;
                      *(int *)(local_148 + 8 + lVar20 * 0xc) = iVar13;
                      lVar20 = FUN_146bd540e(local_160,
                                             ((int)local_178 * *(int *)(param_1 + 0x23c) + local_184
                                             ) * *(int *)(param_1 + 0x238) + local_164);
                      *(undefined4 *)(lVar20 + 4 + uVar16 * 4) = 1;
                      plVar8 = local_180;
                      pdVar17 = local_170;
                    }
                  }
                }
                lVar10 = lVar10 + 0xc;
              } while (lVar10 != 0x50);
            }
          }
        }
      }
      pdVar23 = pdVar23 + 3;
    } while (pdVar23 != pdVar17);
  }
LAB_146bd3db0:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd3f14 FUN_146bd3f14 body=135 status=ok
// SIG undefined FUN_146bd3f14(void)

void FUN_146bd3f14(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd410a(param_1,iVar1);
    }
    FUN_146bd40d1((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bd419e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bd4206(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd3f9c FUN_146bd3f9c body=135 status=ok
// SIG undefined FUN_146bd3f9c(void)

void FUN_146bd3f9c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd4386(param_1,iVar1);
    }
    FUN_146bd4353((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bd441a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bd4480(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd4024 FUN_146bd4024 body=59 status=ok
// SIG undefined FUN_146bd4024(void)

void FUN_146bd4024(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140ebe8e2(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146bd4060 FUN_146bd4060 body=113 status=ok
// SIG undefined FUN_146bd4060(void)

void FUN_146bd4060(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146bd40d1 FUN_146bd40d1 body=56 status=ok
// SIG undefined FUN_146bd40d1(void)

void FUN_146bd40d1(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146bd410a FUN_146bd410a body=147 status=ok
// SIG undefined FUN_146bd410a(void)

void FUN_146bd410a(longlong param_1,int param_2)

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



// FUNCTION 146bd419e FUN_146bd419e body=104 status=ok
// SIG undefined FUN_146bd419e(void)

void FUN_146bd419e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x50 + *param_1);
  FUN_146bd4024(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bd4206 FUN_146bd4206 body=63 status=ok
// SIG undefined FUN_146bd4206(void)

void FUN_146bd4206(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd4246(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 146bd4246 FUN_146bd4246 body=117 status=ok
// SIG undefined FUN_146bd4246(void)

ulonglong FUN_146bd4246(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146bd42bb FUN_146bd42bb body=38 status=ok
// SIG undefined FUN_146bd42bb(void)

void FUN_146bd42bb(LPCRITICAL_SECTION param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DeleteCriticalSection(param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 146bd42e2 FUN_146bd42e2 body=113 status=ok
// SIG undefined FUN_146bd42e2(void)

void FUN_146bd42e2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 146bd4353 FUN_146bd4353 body=51 status=ok
// SIG undefined FUN_146bd4353(void)

void FUN_146bd4353(LPCRITICAL_SECTION param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    InitializeCriticalSection(param_1);
    SetCriticalSectionSpinCount(param_1,4000);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 146bd4386 FUN_146bd4386 body=147 status=ok
// SIG undefined FUN_146bd4386(void)

void FUN_146bd4386(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bd441a FUN_146bd441a body=101 status=ok
// SIG undefined FUN_146bd441a(void)

void FUN_146bd441a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x28 + *param_1);
  FUN_146bd42bb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bd4480 FUN_146bd4480 body=63 status=ok
// SIG undefined FUN_146bd4480(void)

void FUN_146bd4480(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd44c0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 146bd44c0 FUN_146bd44c0 body=117 status=ok
// SIG undefined FUN_146bd44c0(void)

ulonglong FUN_146bd44c0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x28) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 146bd4536 FUN_146bd4536 body=143 status=ok
// SIG undefined FUN_146bd4536(void)

void FUN_146bd4536(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd46e2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bd4768(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bd47c8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd45c6 FUN_146bd45c6 body=143 status=ok
// SIG undefined FUN_146bd45c6(void)

void FUN_146bd45c6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd48f4(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bd497a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bd49da(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd4656 FUN_146bd4656 body=43 status=ok
// SIG undefined FUN_146bd4656(void)

void FUN_146bd4656(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146bd4682 FUN_146bd4682 body=96 status=ok
// SIG undefined FUN_146bd4682(void)

void FUN_146bd4682(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 146bd46e2 FUN_146bd46e2 body=132 status=ok
// SIG undefined FUN_146bd46e2(void)

void FUN_146bd46e2(longlong param_1,int param_2)

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



// FUNCTION 146bd4768 FUN_146bd4768 body=95 status=ok
// SIG undefined FUN_146bd4768(void)

void FUN_146bd4768(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146bd4656(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bd47c8 FUN_146bd47c8 body=63 status=ok
// SIG undefined FUN_146bd47c8(void)

void FUN_146bd47c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd4808(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146bd4808 FUN_146bd4808 body=97 status=ok
// SIG undefined FUN_146bd4808(void)

ulonglong FUN_146bd4808(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146bd4869 FUN_146bd4869 body=43 status=ok
// SIG undefined FUN_146bd4869(void)

void FUN_146bd4869(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146bd4894 FUN_146bd4894 body=96 status=ok
// SIG undefined FUN_146bd4894(void)

void FUN_146bd4894(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 146bd48f4 FUN_146bd48f4 body=132 status=ok
// SIG undefined FUN_146bd48f4(void)

void FUN_146bd48f4(longlong param_1,int param_2)

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



// FUNCTION 146bd497a FUN_146bd497a body=95 status=ok
// SIG undefined FUN_146bd497a(void)

void FUN_146bd497a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146bd4869(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bd49da FUN_146bd49da body=63 status=ok
// SIG undefined FUN_146bd49da(void)

void FUN_146bd49da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd4a1a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146bd4a1a FUN_146bd4a1a body=97 status=ok
// SIG undefined FUN_146bd4a1a(void)

ulonglong FUN_146bd4a1a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146bd4a7c FUN_146bd4a7c body=247 status=ok
// SIG undefined FUN_146bd4a7c(void)

void FUN_146bd4a7c(int *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar6 = param_2;
  }
  iVar3 = (((int)uVar6 >> 5) + 1) - (uint)((param_2 & 0x1f) == 0);
  uVar6 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  iVar5 = (((int)uVar6 >> 5) + 1) - (uint)((param_3 & 0x1f) == 0);
  uVar6 = param_4 + 0x1f;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  iVar4 = (((int)uVar6 >> 5) + 1) - (uint)((param_4 & 0x1f) == 0);
  *param_1 = iVar3;
  param_1[1] = iVar5;
  param_1[2] = iVar4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  uVar6 = iVar5 * iVar3 * iVar4;
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = param_1[0xb];
  FUN_146bd4bfb(*(undefined8 *)(param_1 + 8),param_1[10]);
  param_1[10] = 0;
  if ((iVar3 < 0) && (param_1[0xb] != 0)) {
    FUN_146bd4c26(plVar1,0);
  }
  FUN_146bd4b74(plVar1,uVar6,1);
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar2 + lVar7) != 0) {
        *(undefined8 *)(lVar2 + lVar7) = 0;
        FUN_1400020a8();
      }
      *(int *)(lVar2 + 8 + lVar7) = param_1[6];
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
  }
  return;
}



// FUNCTION 146bd4b74 FUN_146bd4b74 body=134 status=ok
// SIG undefined FUN_146bd4b74(void)

void FUN_146bd4b74(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd4d24(param_1,iVar1);
    }
    FUN_146bd4c86((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bd4daa(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bd4e0a(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd4bfb FUN_146bd4bfb body=43 status=ok
// SIG undefined FUN_146bd4bfb(void)

void FUN_146bd4bfb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146bd4c26 FUN_146bd4c26 body=96 status=ok
// SIG undefined FUN_146bd4c26(void)

void FUN_146bd4c26(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 146bd4c86 FUN_146bd4c86 body=158 status=ok
// SIG undefined FUN_146bd4c86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bd4c86(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 146bd4d24 FUN_146bd4d24 body=132 status=ok
// SIG undefined FUN_146bd4d24(void)

void FUN_146bd4d24(longlong param_1,int param_2)

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



// FUNCTION 146bd4daa FUN_146bd4daa body=95 status=ok
// SIG undefined FUN_146bd4daa(void)

void FUN_146bd4daa(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146bd4bfb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bd4e0a FUN_146bd4e0a body=63 status=ok
// SIG undefined FUN_146bd4e0a(void)

void FUN_146bd4e0a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd4e4a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146bd4e4a FUN_146bd4e4a body=97 status=ok
// SIG undefined FUN_146bd4e4a(void)

ulonglong FUN_146bd4e4a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146bd4eac FUN_146bd4eac body=243 status=ok
// SIG undefined FUN_146bd4eac(void)

void FUN_146bd4eac(int *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar6 = param_2;
  }
  iVar3 = (((int)uVar6 >> 5) + 1) - (uint)((param_2 & 0x1f) == 0);
  uVar6 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  iVar5 = (((int)uVar6 >> 5) + 1) - (uint)((param_3 & 0x1f) == 0);
  uVar6 = param_4 + 0x1f;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  iVar4 = (((int)uVar6 >> 5) + 1) - (uint)((param_4 & 0x1f) == 0);
  *param_1 = iVar3;
  param_1[1] = iVar5;
  param_1[2] = iVar4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  uVar6 = iVar5 * iVar3 * iVar4;
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = param_1[0xb];
  FUN_146bd5027(*(undefined8 *)(param_1 + 8),param_1[10]);
  param_1[10] = 0;
  if ((iVar3 < 0) && (param_1[0xb] != 0)) {
    FUN_146bd5052(plVar1,0);
  }
  FUN_146bd4fa0(plVar1,uVar6,1);
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar2 + lVar7) != 0) {
        *(undefined8 *)(lVar2 + lVar7) = 0;
        FUN_1400020a8();
      }
      *(int *)(lVar2 + 8 + lVar7) = param_1[6];
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
  }
  return;
}



// FUNCTION 146bd4fa0 FUN_146bd4fa0 body=134 status=ok
// SIG undefined FUN_146bd4fa0(void)

void FUN_146bd4fa0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd5150(param_1,iVar1);
    }
    FUN_146bd50b2((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bd51d6(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bd5236(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd5027 FUN_146bd5027 body=43 status=ok
// SIG undefined FUN_146bd5027(void)

void FUN_146bd5027(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146bd5052 FUN_146bd5052 body=96 status=ok
// SIG undefined FUN_146bd5052(void)

void FUN_146bd5052(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 146bd50b2 FUN_146bd50b2 body=158 status=ok
// SIG undefined FUN_146bd50b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bd50b2(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 146bd5150 FUN_146bd5150 body=132 status=ok
// SIG undefined FUN_146bd5150(void)

void FUN_146bd5150(longlong param_1,int param_2)

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



// FUNCTION 146bd51d6 FUN_146bd51d6 body=95 status=ok
// SIG undefined FUN_146bd51d6(void)

void FUN_146bd51d6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146bd5027(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bd5236 FUN_146bd5236 body=63 status=ok
// SIG undefined FUN_146bd5236(void)

void FUN_146bd5236(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd5276(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146bd5276 FUN_146bd5276 body=97 status=ok
// SIG undefined FUN_146bd5276(void)

ulonglong FUN_146bd5276(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146bd52d8 FUN_146bd52d8 body=204 status=ok
// SIG undefined FUN_146bd52d8(void)

void FUN_146bd52d8(int *param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = param_4 + 0x1f;
  if (-1 < param_4) {
    iVar1 = param_4;
  }
  iVar2 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  local_2c = (iVar3 >> 5) + ((iVar2 >> 5) + (iVar1 >> 5) * param_1[1]) * *param_1;
  local_30 = (param_3 % 0x20) * 0x20 + param_2 % 0x20 + (param_4 % 0x20) * 0x400;
  local_38 = (longlong)local_2c * 0x28 + *(longlong *)(param_1 + 0xc);
  FUN_146bd53a6(param_1,&local_2c,&local_30,param_5);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd53a6 FUN_146bd53a6 body=104 status=ok
// SIG undefined FUN_146bd53a6(void)

void FUN_146bd53a6(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4,
                  LPCRITICAL_SECTION param_5)

{
  longlong lVar1;
  
  EnterCriticalSection(param_5);
  lVar1 = FUN_146bd540e(param_1,*param_2);
  if (*(int *)(lVar1 + 4 + (ulonglong)*param_3 * 4) == 0) {
    *(undefined4 *)(lVar1 + 4 + (ulonglong)*param_3 * 4) = 1;
    *param_4 = 1;
  }
  if (param_5 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_5);
    return;
  }
  return;
}



// FUNCTION 146bd540e FUN_146bd540e body=93 status=ok
// SIG undefined FUN_146bd540e(void)

void FUN_146bd540e(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10) == 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    piVar3 = (int *)FUN_14001cc68(0x20004,0x10);
    *piVar3 = param_2;
    iVar2 = (int)plVar5[1];
    lVar4 = 1;
    do {
      piVar1 = piVar3 + lVar4;
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      piVar1[3] = iVar2;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x8001);
    *plVar5 = (longlong)piVar3;
  }
  return;
}



// FUNCTION 146bd546c FUN_146bd546c body=147 status=ok
// SIG undefined FUN_146bd546c(void)

void FUN_146bd546c(longlong param_1,int param_2)

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



// FUNCTION 146bd5508 FUN_146bd5508 body=691 status=ok
// SIG undefined FUN_146bd5508(void)

void FUN_146bd5508(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_488 [32];
  char *local_468;
  longlong local_458;
  undefined8 *local_450;
  undefined8 local_448;
  int local_440;
  undefined8 local_438;
  undefined4 local_430;
  char local_429;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 *local_128;
  undefined8 local_120;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  lVar1 = param_1[1];
  local_430 = *(undefined4 *)(*(longlong *)*param_1 + 8 + (longlong)param_2 * 0xc);
  local_438 = *(undefined8 *)(*(longlong *)*param_1 + (longlong)param_2 * 0xc);
  pcVar2 = *(code **)(lVar1 + 0x130);
  plVar7 = (longlong *)(lVar1 + 0x150);
  if (*(longlong **)(lVar1 + 0x140) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar1 + 0x140);
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar2)(uVar5);
  if (cVar3 == '\0') {
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_128 = (undefined8 *)0x0;
    local_120 = 0x4000000001;
    local_428 = local_438;
    local_420 = local_430;
    local_120._0_4_ = 1;
    iVar13 = 0;
    local_450 = param_1;
    do {
      puVar6 = local_450;
      if (iVar13 == 100) {
        EnterCriticalSection((LPCRITICAL_SECTION)local_450[2]);
        FUN_146bd5a2e(puVar6[3],&local_428);
        LeaveCriticalSection((LPCRITICAL_SECTION)puVar6[2]);
        break;
      }
      puVar6 = local_128;
      if (local_128 == (undefined8 *)0x0) {
        puVar6 = &local_428;
      }
      local_448 = *(undefined8 *)((longlong)puVar6 + (ulonglong)(uint)local_120 * 0xc + -0xc);
      local_440 = *(int *)((longlong)puVar6 + (ulonglong)(uint)local_120 * 0xc + -4);
      local_120 = CONCAT44(local_120._4_4_,(uint)local_120 - 1);
      FUN_146bd57bc(lVar1,&local_e8,&local_448);
      cVar3 = FUN_146bd58c4(lVar1,&local_e8,local_118);
      if (cVar3 != '\0') {
        lVar10 = 8;
        do {
          iVar9 = (int)local_448 + *(int *)(&UNK_149f3c518 + lVar10);
          if ((((*(int *)(lVar1 + 0x17c) <= iVar9) &&
               (iVar11 = local_448._4_4_ + *(int *)(&UNK_149f3c51c + lVar10),
               *(int *)(lVar1 + 0x180) <= iVar11)) &&
              (iVar12 = local_440 + *(int *)((longlong)&DAT_149f3c520 + lVar10),
              *(int *)(lVar1 + 0x184) <= iVar12)) &&
             (((iVar9 <= *(int *)(lVar1 + 0x188) && (iVar11 <= *(int *)(lVar1 + 0x18c))) &&
              (iVar12 <= *(int *)(lVar1 + 400))))) {
            local_429 = '\0';
            local_468 = &local_429;
            FUN_146bd52d8(lVar1 + 0x238,iVar9,iVar11,iVar12);
            if (local_429 == '\x01') {
              lVar8 = (longlong)(int)(uint)local_120;
              uVar4 = (uint)local_120 + 1;
              local_120 = CONCAT44(local_120._4_4_,uVar4);
              if (local_120._4_4_ < uVar4) {
                local_458 = lVar8;
                FUN_146bd5aa4(&local_428,lVar8);
                lVar8 = local_458;
              }
              puVar6 = local_128;
              if (local_128 == (undefined8 *)0x0) {
                puVar6 = &local_428;
              }
              *(int *)((longlong)puVar6 + lVar8 * 0xc) = iVar9;
              *(int *)((longlong)puVar6 + lVar8 * 0xc + 4) = iVar11;
              *(int *)((longlong)puVar6 + lVar8 * 0xc + 8) = iVar12;
            }
          }
          lVar10 = lVar10 + 0xc;
        } while (lVar10 != 0x50);
      }
      iVar13 = iVar13 + 1;
    } while (0 < (int)(uint)local_120);
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd57bc FUN_146bd57bc body=263 status=ok
// SIG undefined FUN_146bd57bc(void)

void FUN_146bd57bc(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  iVar1 = param_3[2];
  *param_2 = *(undefined8 *)param_3;
  *(int *)(param_2 + 1) = iVar1;
  uVar5 = *(undefined8 *)(param_3 + 1);
  *(int *)((longlong)param_2 + 0xc) = *param_3 + 1;
  param_2[2] = uVar5;
  iVar1 = param_3[2];
  iVar2 = param_3[1];
  *(int *)(param_2 + 3) = *param_3 + 1;
  *(int *)((longlong)param_2 + 0x1c) = iVar2;
  *(int *)(param_2 + 4) = iVar1 + 1;
  iVar1 = param_3[2];
  *(undefined8 *)((longlong)param_2 + 0x24) = *(undefined8 *)param_3;
  *(int *)((longlong)param_2 + 0x2c) = iVar1 + 1;
  iVar1 = param_3[2];
  iVar2 = param_3[1];
  *(int *)(param_2 + 6) = *param_3;
  *(int *)((longlong)param_2 + 0x34) = iVar2 + 1;
  *(int *)(param_2 + 7) = iVar1;
  iVar1 = param_3[2];
  iVar2 = param_3[1];
  *(int *)((longlong)param_2 + 0x3c) = *param_3 + 1;
  *(int *)(param_2 + 8) = iVar2 + 1;
  *(int *)((longlong)param_2 + 0x44) = iVar1;
  iVar1 = param_3[2];
  iVar2 = param_3[1];
  *(int *)(param_2 + 9) = *param_3 + 1;
  *(int *)((longlong)param_2 + 0x4c) = iVar2 + 1;
  *(int *)(param_2 + 10) = iVar1 + 1;
  iVar1 = param_3[2];
  iVar2 = param_3[1];
  *(int *)((longlong)param_2 + 0x54) = *param_3;
  *(int *)(param_2 + 0xb) = iVar2 + 1;
  *(int *)((longlong)param_2 + 0x5c) = iVar1 + 1;
  if (*(char *)(param_1 + 0x121) == '\x01') {
    lVar3 = -0x60;
    puVar4 = param_2 + 0xc;
    do {
      uVar5 = FUN_146bd5f64(param_1,(longlong)(param_2 + 0xc) + lVar3);
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (lVar3 != 0);
    return;
  }
  FUN_146bd5c5e(param_1,param_2,0);
  return;
}



// FUNCTION 146bd58c4 FUN_146bd58c4 body=362 status=ok
// SIG undefined FUN_146bd58c4(void)

undefined4 FUN_146bd58c4(longlong param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar7 = 1;
  uVar12 = 0;
  lVar10 = 0xc;
  do {
    uVar11 = uVar7;
    if (*(double *)(param_1 + 0xe0) < *(double *)(param_2 + lVar10 * 4) ||
        *(double *)(param_1 + 0xe0) == *(double *)(param_2 + lVar10 * 4)) {
      uVar11 = 0;
    }
    uVar12 = uVar12 | uVar11;
    uVar7 = uVar7 * 2;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x14);
  uVar8 = 0;
  if ((uVar12 != 0) && (uVar12 != 0xff)) {
    uVar7 = *(uint *)(&DAT_149f36590 + (longlong)(int)uVar12 * 4);
    uVar11 = 1;
    lVar10 = 0;
    do {
      if ((uVar11 & uVar7) != 0) {
        uVar8 = FUN_146bd64ae(param_1,param_2 + (longlong)*(int *)(&DAT_149f36530 + lVar10 * 8) * 6,
                              param_2 + (longlong)*(int *)(&UNK_149f36534 + lVar10 * 8) * 6,
                              *(undefined8 *)
                               (param_2 + (longlong)*(int *)(&DAT_149f36530 + lVar10 * 8) * 4 + 0x30
                               ),*(undefined8 *)
                                  (param_2 +
                                  (longlong)*(int *)(&UNK_149f36534 + lVar10 * 8) * 4 + 0x30));
        *(undefined4 *)(param_3 + lVar10 * 4) = uVar8;
      }
      uVar11 = uVar11 * 2;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0xc);
    uVar8 = 0;
    if ((uVar12 != 0) && (uVar12 != 0xff)) {
      uVar1 = *param_2;
      iVar3 = *(int *)(param_2 + 2);
      uVar2 = param_2[4];
      iVar9 = *(int *)(&DAT_149f36990 + (longlong)(int)uVar12 * 0x40);
      iVar13 = 0;
      piVar6 = (int *)(&DAT_149f36990 + (longlong)(int)uVar12 * 0x40);
      do {
        iVar9 = *(int *)(param_3 + (longlong)iVar9 * 4);
        iVar4 = *(int *)(param_3 + (longlong)piVar6[1] * 4);
        if (iVar9 != iVar4) {
          iVar5 = *(int *)(param_3 + (longlong)piVar6[2] * 4);
          if ((iVar9 != iVar5) && (iVar4 != iVar5)) {
            FUN_146bd662c(param_1,iVar9,iVar4,iVar5,
                          (ulonglong)CONCAT24(uVar2,iVar3 << 0x10 | (uint)uVar1));
            iVar13 = iVar13 + 1;
          }
        }
        iVar9 = piVar6[3];
        piVar6 = piVar6 + 3;
      } while (iVar9 != -1);
      uVar8 = CONCAT31(0xffffff,0 < iVar13);
    }
  }
  return uVar8;
}



// FUNCTION 146bd5a2e FUN_146bd5a2e body=118 status=ok
// SIG undefined FUN_146bd5a2e(void)

void FUN_146bd5a2e(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x308);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146bd546c(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x300);
    if (*(void **)((longlong)param_2 + 0x300) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 0xc + *param_1),_Src,(longlong)(int)uVar1 * 0xc);
    return;
  }
  return;
}



// FUNCTION 146bd5aa4 FUN_146bd5aa4 body=142 status=ok
// SIG undefined FUN_146bd5aa4(void)

void FUN_146bd5aa4(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x40;
    if (0x40 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x30c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x30c) = (int)uVar4;
    FUN_146bd5b34(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146bd5b34 FUN_146bd5b34 body=150 status=ok
// SIG undefined FUN_146bd5b34(void)

void FUN_146bd5b34(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,param_4);
  return;
}



// FUNCTION 146bd5bca FUN_146bd5bca body=147 status=ok
// SIG undefined FUN_146bd5bca(void)

void FUN_146bd5bca(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_3 == '\0') {
    lVar1 = -0x60;
    puVar2 = (undefined8 *)(param_2 + 0x60);
    do {
      uVar3 = FUN_146bd5f64(param_1,param_2 + 0x60 + lVar1);
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      lVar1 = lVar1 + 0xc;
    } while (lVar1 != 0);
  }
  else {
    uVar3 = FUN_146bd5f64(param_1,param_2 + 0xc);
    *(undefined8 *)(param_2 + 0x68) = uVar3;
    uVar3 = FUN_146bd5f64(param_1,param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x70) = uVar3;
    uVar3 = FUN_146bd5f64(param_1,param_2 + 0x3c);
    *(undefined8 *)(param_2 + 0x88) = uVar3;
    uVar3 = FUN_146bd5f64(param_1,param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x90) = uVar3;
  }
  return;
}



// FUNCTION 146bd5c5e FUN_146bd5c5e body=773 status=ok
// SIG undefined FUN_146bd5c5e(void)

void FUN_146bd5c5e(longlong param_1,longlong param_2,char param_3)

{
  double dVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\0') {
    lVar7 = -0x60;
    puVar6 = (undefined8 *)(param_2 + 0x60);
    do {
      dVar1 = *(double *)(param_1 + 0x118);
      local_48 = (double)*(int *)(param_2 + 0x68 + lVar7) * dVar1 + *(double *)(param_1 + 0xf8);
      local_50 = (double)*(int *)(param_2 + 100 + lVar7) * dVar1 + *(double *)(param_1 + 0xf0);
      local_58 = (double)*(int *)(param_2 + 0x60 + lVar7) * dVar1 + *(double *)(param_1 + 0xe8);
      pcVar2 = *(code **)(param_1 + 0xa0);
      plVar5 = *(longlong **)(param_1 + 0xb0);
      if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
        plVar5 = (longlong *)(param_1 + 0xc0);
      }
      uVar3 = (**(code **)(*plVar5 + 8))();
      uVar3 = (*pcVar2)(uVar3,&local_58);
      *puVar6 = uVar3;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar7 != 0);
  }
  else {
    dVar1 = *(double *)(param_1 + 0x118);
    local_48 = (double)*(int *)(param_2 + 0x14) * dVar1 + *(double *)(param_1 + 0xf8);
    local_50 = (double)*(int *)(param_2 + 0x10) * dVar1 + *(double *)(param_1 + 0xf0);
    local_58 = (double)*(int *)(param_2 + 0xc) * dVar1 + *(double *)(param_1 + 0xe8);
    pcVar2 = *(code **)(param_1 + 0xa0);
    plVar5 = (longlong *)(param_1 + 0xc0);
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar3 = (*pcVar2)(uVar3,&local_58);
    *(undefined8 *)(param_2 + 0x68) = uVar3;
    dVar1 = *(double *)(param_1 + 0x118);
    local_48 = (double)*(int *)(param_2 + 0x20) * dVar1 + *(double *)(param_1 + 0xf8);
    local_50 = (double)*(int *)(param_2 + 0x1c) * dVar1 + *(double *)(param_1 + 0xf0);
    local_58 = (double)*(int *)(param_2 + 0x18) * dVar1 + *(double *)(param_1 + 0xe8);
    pcVar2 = *(code **)(param_1 + 0xa0);
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar3 = (*pcVar2)(uVar3,&local_58);
    *(undefined8 *)(param_2 + 0x70) = uVar3;
    dVar1 = *(double *)(param_1 + 0x118);
    local_48 = (double)*(int *)(param_2 + 0x44) * dVar1 + *(double *)(param_1 + 0xf8);
    local_50 = (double)*(int *)(param_2 + 0x40) * dVar1 + *(double *)(param_1 + 0xf0);
    local_58 = (double)*(int *)(param_2 + 0x3c) * dVar1 + *(double *)(param_1 + 0xe8);
    pcVar2 = *(code **)(param_1 + 0xa0);
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar3 = (*pcVar2)(uVar3,&local_58);
    *(undefined8 *)(param_2 + 0x88) = uVar3;
    dVar1 = *(double *)(param_1 + 0x118);
    local_48 = (double)*(int *)(param_2 + 0x50) * dVar1 + *(double *)(param_1 + 0xf8);
    local_50 = (double)*(int *)(param_2 + 0x4c) * dVar1 + *(double *)(param_1 + 0xf0);
    local_58 = (double)*(int *)(param_2 + 0x48) * dVar1 + *(double *)(param_1 + 0xe8);
    pcVar2 = *(code **)(param_1 + 0xa0);
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar3 = (*pcVar2)(uVar3,&local_58);
    *(undefined8 *)(param_2 + 0x90) = uVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd5f64 FUN_146bd5f64 body=549 status=ok
// SIG undefined FUN_146bd5f64(void)

void FUN_146bd5f64(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  float *pfVar10;
  int iVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x120) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  iVar1 = param_2[2];
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iVar8 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar8 = iVar1;
  }
  iVar11 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar11 = iVar3;
  }
  iVar5 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  plVar9 = (longlong *)
           (*(longlong *)(param_1 + 0x210) +
           (longlong)
           ((iVar5 >> 5) +
           ((iVar11 >> 5) + (iVar8 >> 5) * *(int *)(param_1 + 500)) * *(int *)(param_1 + 0x1f0)) *
           0x10);
  lVar7 = *plVar9;
  pfVar10 = (float *)(lVar7 + 4 +
                     (ulonglong)
                     (uint)((iVar3 % 0x20) * 0x20 + (iVar1 % 0x20) * 0x400 + iVar2 % 0x20) * 4);
  if (lVar7 == 0) {
    pfVar10 = (float *)(plVar9 + 1);
  }
  fVar13 = *pfVar10;
  if ((fVar13 == 3.4028235e+38) && (!NAN(fVar13))) {
    dVar12 = *(double *)(param_1 + 0x118);
    local_48 = (double)iVar1 * dVar12 + *(double *)(param_1 + 0xf8);
    local_50 = (double)iVar3 * dVar12 + *(double *)(param_1 + 0xf0);
    local_58 = (double)iVar2 * dVar12 + *(double *)(param_1 + 0xe8);
    pcVar4 = *(code **)(param_1 + 0xa0);
    plVar9 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0xb0);
    }
    uVar6 = (**(code **)(*plVar9 + 8))();
    dVar12 = (double)(*pcVar4)(uVar6,&local_58);
    fVar13 = (float)dVar12;
    iVar1 = param_2[2];
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar8 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar8 = iVar1;
    }
    iVar11 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar11 = iVar3;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    lVar7 = FUN_146bd6452(param_1 + 0x1f0,
                          (iVar5 >> 5) +
                          ((iVar11 >> 5) + (iVar8 >> 5) * *(int *)(param_1 + 500)) *
                          *(int *)(param_1 + 0x1f0));
    *(float *)(lVar7 + 4 +
              (ulonglong)(uint)((iVar3 % 0x20) * 0x20 + (iVar1 % 0x20) * 0x400 + iVar2 % 0x20) * 4)
         = fVar13;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)fVar13);
}



// FUNCTION 146bd62c6 FUN_146bd62c6 body=206 status=ok
// SIG undefined FUN_146bd62c6(void)

undefined4 FUN_146bd62c6(int *param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar7;
  longlong lVar8;
  
  iVar2 = param_4 + 0x1f;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  iVar7 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar7 = param_3;
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  lVar8 = (longlong)((iVar4 >> 5) + ((iVar7 >> 5) + (iVar2 >> 5) * param_1[1]) * *param_1);
  lVar6 = lVar8 * 0x28;
  lVar1 = *(longlong *)(param_1 + 0xc);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + lVar1));
  plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + lVar8 * 0x10);
  lVar8 = *plVar3;
  plVar5 = (longlong *)
           (lVar8 + 4 +
           (ulonglong)(uint)((param_3 % 0x20) * 0x20 + param_2 % 0x20 + (param_4 % 0x20) * 0x400) *
           4);
  if (lVar8 == 0) {
    plVar5 = plVar3 + 1;
  }
  lVar8 = *plVar5;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + lVar1);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return (int)lVar8;
}



// FUNCTION 146bd6394 FUN_146bd6394 body=189 status=ok
// SIG undefined FUN_146bd6394(void)

void FUN_146bd6394(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  int iVar6;
  
  iVar6 = param_4 + 0x1f;
  if (-1 < param_4) {
    iVar6 = param_4;
  }
  iVar5 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar5 = param_3;
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  iVar6 = (iVar3 >> 5) + ((iVar5 >> 5) + (iVar6 >> 5) * param_1[1]) * *param_1;
  lVar4 = (longlong)iVar6 * 0x28;
  lVar1 = *(longlong *)(param_1 + 0xc);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + lVar1));
  lVar2 = FUN_146bd6452(param_1,iVar6);
  *(undefined4 *)
   (lVar2 + 4 +
   (ulonglong)(uint)((param_3 % 0x20) * 0x20 + param_2 % 0x20 + (param_4 % 0x20) * 0x400) * 4) =
       param_5;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + lVar1);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 146bd6452 FUN_146bd6452 body=91 status=ok
// SIG undefined FUN_146bd6452(void)

void FUN_146bd6452(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10) == 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    piVar3 = (int *)FUN_14001cc68(0x20004,0x10);
    *piVar3 = param_2;
    iVar2 = (int)plVar5[1];
    lVar4 = 1;
    do {
      piVar1 = piVar3 + lVar4;
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      piVar1[3] = iVar2;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x8001);
    *plVar5 = (longlong)piVar3;
  }
  return;
}



// FUNCTION 146bd64ae FUN_146bd64ae body=380 status=ok
// SIG undefined FUN_146bd64ae(void)

void FUN_146bd64ae(longlong param_1,int *param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_146bd674e();
  iVar2 = FUN_146bd67d8(param_1,uVar3);
  if (iVar2 == -1) {
    dVar1 = *(double *)(param_1 + 0x118);
    local_58 = (double)*param_2 * dVar1 + *(double *)(param_1 + 0xe8);
    local_50 = (double)param_2[1] * dVar1 + *(double *)(param_1 + 0xf0);
    local_48 = (double)param_2[2] * dVar1 + *(double *)(param_1 + 0xf8);
    local_70 = (double)*param_3 * dVar1 + *(double *)(param_1 + 0xe8);
    local_68 = (double)param_3[1] * dVar1 + *(double *)(param_1 + 0xf0);
    local_60 = (double)param_3[2] * dVar1 + *(double *)(param_1 + 0xf8);
    local_b0 = &local_88;
    local_78 = DAT_14c8464f0;
    local_88 = (undefined4)DAT_14c8464e0;
    uStack_84 = DAT_14c8464e0._4_4_;
    uStack_80 = (undefined4)DAT_14c8464e8;
    uStack_7c = DAT_14c8464e8._4_4_;
    local_b8 = param_5;
    FUN_146bd68b8(param_1,&local_58,&local_70,param_4);
    local_98 = local_78;
    local_a8 = local_88;
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    FUN_146bd6e32(param_1,uVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd662c FUN_146bd662c body=290 status=ok
// SIG undefined FUN_146bd662c(void)

void FUN_146bd662c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar3 = param_5 % (*(longlong *)(param_1 + 0x2a8) + -1) << 0x20;
  lVar4 = lVar3 >> 0x1c;
  if (*(char *)(param_1 + 0x230) == '\x01') {
    lpCriticalSection =
         (LPCRITICAL_SECTION)((lVar3 >> 0x20) * 0x28 + *(longlong *)(param_1 + 0x2b0));
    EnterCriticalSection(lpCriticalSection);
    lVar3 = *(longlong *)(param_1 + 0x2c0);
    iVar1 = *(int *)(lVar3 + 8 + lVar4);
    lVar2 = (longlong)iVar1;
    *(uint *)(lVar3 + 8 + lVar4) = iVar1 + 1U;
    if (*(uint *)(lVar3 + 0xc + lVar4) < iVar1 + 1U) {
      FUN_146bd78c8((longlong *)(lVar3 + lVar4),iVar1);
    }
    lVar3 = *(longlong *)(lVar3 + lVar4);
    *(undefined4 *)(lVar3 + lVar2 * 0xc) = param_2;
    *(undefined4 *)(lVar3 + 4 + lVar2 * 0xc) = param_3;
    *(undefined4 *)(lVar3 + 8 + lVar2 * 0xc) = param_4;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x2c0);
    iVar1 = *(int *)(lVar3 + 8 + lVar4);
    lVar2 = (longlong)iVar1;
    *(uint *)(lVar3 + 8 + lVar4) = iVar1 + 1U;
    if (*(uint *)(lVar3 + 0xc + lVar4) < iVar1 + 1U) {
      FUN_146bd78c8((longlong *)(lVar3 + lVar4),iVar1);
    }
    lVar3 = *(longlong *)(lVar3 + lVar4);
    *(undefined4 *)(lVar3 + lVar2 * 0xc) = param_2;
    *(undefined4 *)(lVar3 + 4 + lVar2 * 0xc) = param_3;
    *(undefined4 *)(lVar3 + 8 + lVar2 * 0xc) = param_4;
  }
  return;
}



// FUNCTION 146bd674e FUN_146bd674e body=138 status=ok
// SIG undefined FUN_146bd674e(void)

ulonglong FUN_146bd674e(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  if (uVar1 != uVar2) {
    if ((int)uVar1 < (int)uVar2) {
      uVar2 = uVar1;
    }
    return (ulonglong)CONCAT24((short)param_2[2],param_2[1] << 0x10 | uVar2 & 0xffff) |
           *(ulonglong *)(param_1 + 0x1b0);
  }
  uVar2 = param_2[1];
  uVar3 = param_3[1];
  if (uVar2 == uVar3) {
    uVar3 = param_3[2];
    if ((int)param_2[2] < (int)param_3[2]) {
      uVar3 = param_2[2];
    }
    return CONCAT44(uVar3,uVar2 << 0x10 | uVar1 & 0xffff) & 0xffffffffffff |
           *(ulonglong *)(param_1 + 0x1c0);
  }
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  return (ulonglong)CONCAT24((short)param_2[2],uVar3 << 0x10 | uVar1 & 0xffff) |
         *(ulonglong *)(param_1 + 0x1b8);
}



// FUNCTION 146bd67d8 FUN_146bd67d8 body=224 status=ok
// SIG undefined FUN_146bd67d8(void)

undefined4 FUN_146bd67d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar6;
  
  lVar2 = (longlong)(int)(param_2 % (*(longlong *)(param_1 + 0x1c8) + -1));
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 * 0x28 + *(longlong *)(param_1 + 0x1e0));
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  lVar2 = lVar2 * 0x50;
  uVar6 = 0xffffffff;
  if (*(int *)(lVar1 + 8 + lVar2) != *(int *)(lVar1 + 0x34 + lVar2)) {
    plVar3 = (longlong *)(lVar1 + lVar2);
    plVar5 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar3[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*plVar3 + (longlong)iVar4 * 0x18);
        if (*plVar5 == param_2) {
          if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
            uVar6 = (undefined4)plVar5[1];
          }
          break;
        }
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar6;
}



// FUNCTION 146bd68b8 FUN_146bd68b8 body=1400 status=ok
// SIG undefined FUN_146bd68b8(void)

void FUN_146bd68b8(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
                  double *param_6)

{
  double dVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  uVar21 = (undefined4)((ulonglong)param_5 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (1e-05 <= ABS(param_4 - param_5)) {
    dVar9 = *(double *)(param_1 + 0xe0);
    if (1e-05 <= ABS(dVar9 - param_4)) {
      if (1e-05 <= ABS(dVar9 - param_5)) {
        dVar10 = param_2[2];
        uVar17 = SUB84(*param_3,0);
        uVar19 = (undefined4)((ulonglong)*param_3 >> 0x20);
        uVar13 = SUB84(param_3[1],0);
        uVar15 = (undefined4)((ulonglong)param_3[1] >> 0x20);
        dVar8 = param_3[2];
        uVar11 = SUB84(dVar8,0);
        uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar22 = SUB84(param_2[1],0);
        uVar23 = (undefined4)((ulonglong)param_2[1] >> 0x20);
        uVar25 = SUB84(*param_2,0);
        uVar27 = (undefined4)((ulonglong)*param_2 >> 0x20);
        uVar28 = SUB84(param_4,0);
        uVar30 = (undefined4)((ulonglong)param_4 >> 0x20);
        uVar14 = uVar13;
        uVar16 = uVar15;
        uVar18 = uVar17;
        uVar20 = uVar19;
        uVar24 = SUB84(param_5,0);
        uVar26 = uVar21;
        if (param_4 <= param_5) {
          uVar11 = SUB84(dVar10,0);
          uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
          uVar14 = uVar22;
          uVar16 = uVar23;
          uVar18 = uVar25;
          uVar20 = uVar27;
          uVar22 = uVar13;
          uVar23 = uVar15;
          uVar25 = uVar17;
          uVar27 = uVar19;
          uVar24 = uVar28;
          uVar26 = uVar30;
          uVar28 = SUB84(param_5,0);
          uVar30 = uVar21;
          dVar10 = dVar8;
        }
        if (*(int *)(param_1 + 0x128) == 2) {
          if (0 < *(int *)(param_1 + 300)) {
            iVar5 = 0;
            uVar21 = uVar22;
            uVar24 = uVar23;
            uVar26 = uVar25;
            uVar28 = uVar27;
            do {
              *param_6 = ((double)CONCAT44(uVar20,uVar18) + (double)CONCAT44(uVar28,uVar26)) * 0.5;
              param_6[1] = ((double)CONCAT44(uVar16,uVar14) + (double)CONCAT44(uVar24,uVar21)) * 0.5
              ;
              param_6[2] = ((double)CONCAT44(uVar12,uVar11) + dVar10) * 0.5;
              local_f8 = *param_6;
              dStack_f0 = param_6[1];
              local_e8 = param_6[2];
              pcVar2 = *(code **)(param_1 + 0xa0);
              plVar4 = *(longlong **)(param_1 + 0xb0);
              if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
                plVar4 = (longlong *)(param_1 + 0xc0);
              }
              uVar3 = (**(code **)(*plVar4 + 8))();
              dVar8 = (double)(*pcVar2)(uVar3,&local_f8);
              dVar9 = param_6[2];
              uVar22 = SUB84(param_6[1],0);
              uVar23 = (undefined4)((ulonglong)param_6[1] >> 0x20);
              uVar25 = SUB84(*param_6,0);
              uVar27 = (undefined4)((ulonglong)*param_6 >> 0x20);
              if (dVar8 < *(double *)(param_1 + 0xe0)) {
                uVar11 = SUB84(dVar9,0);
                uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
                uVar14 = uVar22;
                uVar16 = uVar23;
                uVar18 = uVar25;
                uVar20 = uVar27;
                uVar22 = uVar21;
                uVar23 = uVar24;
                uVar25 = uVar26;
                uVar27 = uVar28;
              }
              uVar6 = -(ulonglong)(dVar8 < *(double *)(param_1 + 0xe0));
              dVar10 = (double)(~uVar6 & (ulonglong)dVar9 | (ulonglong)dVar10 & uVar6);
              iVar5 = iVar5 + 1;
              uVar21 = uVar22;
              uVar24 = uVar23;
              uVar26 = uVar25;
              uVar28 = uVar27;
            } while (iVar5 < *(int *)(param_1 + 300));
          }
          dVar9 = (double)CONCAT44(uVar12,uVar11) * 0.5 + dVar10 * 0.5;
          *param_6 = (double)CONCAT44(uVar20,uVar18) * 0.5 + (double)CONCAT44(uVar27,uVar25) * 0.5;
          param_6[1] = (double)CONCAT44(uVar16,uVar14) * 0.5 + (double)CONCAT44(uVar23,uVar22) * 0.5
          ;
        }
        else {
          if ((*(int *)(param_1 + 0x128) == 1) && (0 < *(int *)(param_1 + 300))) {
            iVar5 = 0;
            uVar21 = uVar22;
            uVar13 = uVar23;
            uVar15 = uVar25;
            uVar17 = uVar27;
            uVar19 = uVar28;
            uVar29 = uVar30;
            do {
              dVar8 = (dVar9 - (double)CONCAT44(uVar26,uVar24)) /
                      ((double)CONCAT44(uVar29,uVar19) - (double)CONCAT44(uVar26,uVar24));
              dVar9 = 1.0;
              if (dVar8 <= 1.0) {
                dVar9 = dVar8;
              }
              dVar9 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar9);
              *param_6 = ((double)CONCAT44(uVar17,uVar15) - (double)CONCAT44(uVar20,uVar18)) * dVar9
                         + (double)CONCAT44(uVar20,uVar18);
              param_6[1] = ((double)CONCAT44(uVar13,uVar21) - (double)CONCAT44(uVar16,uVar14)) *
                           dVar9 + (double)CONCAT44(uVar16,uVar14);
              param_6[2] = (dVar10 - (double)CONCAT44(uVar12,uVar11)) * dVar9 +
                           (double)CONCAT44(uVar12,uVar11);
              local_118 = *param_6;
              dStack_110 = param_6[1];
              local_108 = param_6[2];
              pcVar2 = *(code **)(param_1 + 0xa0);
              plVar4 = *(longlong **)(param_1 + 0xb0);
              if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
                plVar4 = (longlong *)(param_1 + 0xc0);
              }
              uVar3 = (**(code **)(*plVar4 + 8))();
              dVar7 = (double)(*pcVar2)(uVar3,&local_118);
              dVar9 = *(double *)(param_1 + 0xe0);
              dVar8 = param_6[2];
              uVar22 = SUB84(param_6[1],0);
              uVar23 = (undefined4)((ulonglong)param_6[1] >> 0x20);
              uVar25 = SUB84(*param_6,0);
              uVar27 = (undefined4)((ulonglong)*param_6 >> 0x20);
              uVar28 = SUB84(dVar7,0);
              uVar30 = (undefined4)((ulonglong)dVar7 >> 0x20);
              if (dVar7 < dVar9) {
                uVar11 = SUB84(dVar8,0);
                uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
                uVar14 = uVar22;
                uVar16 = uVar23;
                uVar18 = uVar25;
                uVar20 = uVar27;
                uVar22 = uVar21;
                uVar23 = uVar13;
                uVar25 = uVar15;
                uVar27 = uVar17;
                uVar24 = uVar28;
                uVar26 = uVar30;
                uVar28 = uVar19;
                uVar30 = uVar29;
              }
              dVar10 = (double)((ulonglong)dVar10 & -(ulonglong)(dVar7 < dVar9) |
                               ~-(ulonglong)(dVar7 < dVar9) & (ulonglong)dVar8);
              iVar5 = iVar5 + 1;
              uVar21 = uVar22;
              uVar13 = uVar23;
              uVar15 = uVar25;
              uVar17 = uVar27;
              uVar19 = uVar28;
              uVar29 = uVar30;
            } while (iVar5 < *(int *)(param_1 + 300));
          }
          dVar8 = (dVar9 - (double)CONCAT44(uVar26,uVar24)) /
                  ((double)CONCAT44(uVar30,uVar28) - (double)CONCAT44(uVar26,uVar24));
          dVar9 = 1.0;
          if (dVar8 <= 1.0) {
            dVar9 = dVar8;
          }
          dVar9 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar9);
          *param_6 = ((double)CONCAT44(uVar27,uVar25) - (double)CONCAT44(uVar20,uVar18)) * dVar9 +
                     (double)CONCAT44(uVar20,uVar18);
          param_6[1] = ((double)CONCAT44(uVar23,uVar22) - (double)CONCAT44(uVar16,uVar14)) * dVar9 +
                       (double)CONCAT44(uVar16,uVar14);
          dVar9 = (dVar10 - (double)CONCAT44(uVar12,uVar11)) * dVar9 +
                  (double)CONCAT44(uVar12,uVar11);
        }
        goto LAB_146bd69a1;
      }
      dVar1 = param_3[1];
      dVar10 = *param_3;
      dVar9 = param_2[2] * 1.0000000000287557e-06 + param_3[2] * 0.999999;
      dVar8 = param_2[1];
      dVar7 = *param_2;
    }
    else {
      dVar1 = param_2[1];
      dVar10 = *param_2;
      dVar9 = param_3[2] * 1.0000000000287557e-06 + param_2[2] * 0.999999;
      dVar8 = param_3[1];
      dVar7 = *param_3;
    }
    dVar8 = dVar8 * 1.0000000000287557e-06 + dVar1 * 0.999999;
    *param_6 = dVar7 * 1.0000000000287557e-06 + dVar10 * 0.999999;
  }
  else {
    dVar9 = (param_2[2] + param_3[2]) * 0.5;
    dVar8 = (param_2[1] + param_3[1]) * 0.5;
    *param_6 = (*param_2 + *param_3) * 0.5;
  }
  param_6[1] = dVar8;
LAB_146bd69a1:
  param_6[2] = dVar9;
  if ((local_e0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bd6e32 FUN_146bd6e32 body=337 status=ok
// SIG undefined FUN_146bd6e32(void)

undefined4 FUN_146bd6e32(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (longlong)(int)(param_2 % (*(longlong *)(param_1 + 0x1c8) + -1));
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 * 0x28 + *(longlong *)(param_1 + 0x1e0));
  local_50 = param_2;
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  lVar2 = lVar2 * 0x50;
  if (*(int *)(lVar1 + 8 + lVar2) != *(int *)(lVar1 + 0x34 + lVar2)) {
    plVar3 = (longlong *)(lVar1 + lVar2);
    plVar5 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar3[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*plVar3 + (longlong)iVar4 * 0x18);
        if (*plVar5 == param_2) {
          if ((plVar5 != (longlong *)0x0) && (plVar5 + 1 != (longlong *)0x0)) {
            uVar6 = (undefined4)plVar5[1];
            goto LAB_146bd6f52;
          }
          break;
        }
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = *(undefined8 *)(param_3 + 4);
  local_54 = FUN_146bd6f84(param_1,&local_78,param_2);
  local_40 = &local_54;
  local_48 = &local_50;
  FUN_146bd7170(lVar2 + *(longlong *)(param_1 + 0x1d0),local_34,&local_48,0);
  uVar6 = local_54;
LAB_146bd6f52:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd6f84 FUN_146bd6f84 body=357 status=ok
// SIG undefined FUN_146bd6f84(void)

int FUN_146bd6f84(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_78 [44];
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  piVar1 = (int *)(param_1 + 0x278);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  lVar6 = param_3 % (*(longlong *)(param_1 + 0x280) + -1) << 0x20;
  lVar5 = lVar6 >> 0x1c;
  if (*(char *)(param_1 + 0x230) == '\x01') {
    lpCriticalSection =
         (LPCRITICAL_SECTION)((lVar6 >> 0x20) * 0x28 + *(longlong *)(param_1 + 0x288));
    EnterCriticalSection(lpCriticalSection);
    lVar6 = *(longlong *)(param_1 + 0x298);
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    iVar4 = *(int *)(lVar6 + 8 + lVar5);
    *(uint *)(lVar6 + 8 + lVar5) = iVar4 + 1U;
    if (*(uint *)(lVar6 + 0xc + lVar5) < iVar4 + 1U) {
      FUN_146bd70ea((longlong *)(lVar6 + lVar5),iVar4);
    }
    lVar6 = *(longlong *)(lVar6 + lVar5);
    lVar5 = (longlong)iVar4 * 0x20;
    *(int *)(lVar6 + lVar5) = iVar3;
    puVar2 = (undefined8 *)(lVar6 + 4 + lVar5);
    *puVar2 = CONCAT44(local_48,uStack_4c);
    puVar2[1] = CONCAT44(uStack_40,uStack_44);
    puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar5);
    *puVar2 = CONCAT44(uStack_3c,uStack_40);
    puVar2[1] = local_38;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x298);
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    iVar4 = *(int *)(lVar6 + 8 + lVar5);
    *(uint *)(lVar6 + 8 + lVar5) = iVar4 + 1U;
    if (*(uint *)(lVar6 + 0xc + lVar5) < iVar4 + 1U) {
      FUN_146bd70ea((longlong *)(lVar6 + lVar5),iVar4);
    }
    lVar6 = *(longlong *)(lVar6 + lVar5);
    lVar5 = (longlong)iVar4 * 0x20;
    *(int *)(lVar6 + lVar5) = iVar3;
    puVar2 = (undefined8 *)(lVar6 + 4 + lVar5);
    *puVar2 = CONCAT44(local_48,uStack_4c);
    puVar2[1] = CONCAT44(uStack_40,uStack_44);
    puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar5);
    *puVar2 = CONCAT44(uStack_3c,uStack_40);
    puVar2[1] = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd70ea FUN_146bd70ea body=132 status=ok
// SIG undefined FUN_146bd70ea(void)

void FUN_146bd70ea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bd7170 FUN_146bd7170 body=324 status=ok
// SIG undefined FUN_146bd7170(void)

undefined4 *
FUN_146bd7170(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146bd72b6(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar3 = FUN_146bd739c(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146bd74ba(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd72b6 FUN_146bd72b6 body=230 status=ok
// SIG undefined FUN_146bd72b6(void)

int * FUN_146bd72b6(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 146bd739c FUN_146bd739c body=148 status=ok
// SIG undefined FUN_146bd739c(void)

void FUN_146bd739c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_146bd7430((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_146bd7406;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_146bd7406:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 146bd7430 FUN_146bd7430 body=138 status=ok
// SIG undefined FUN_146bd7430(void)

void FUN_146bd7430(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146bd74ba FUN_146bd74ba body=447 status=ok
// SIG undefined FUN_146bd74ba(void)

void FUN_146bd74ba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 146bd767a FUN_146bd767a body=113 status=ok
// SIG undefined FUN_146bd767a(void)

void FUN_146bd767a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 146bd76ec FUN_146bd76ec body=63 status=ok
// SIG undefined FUN_146bd76ec(void)

void FUN_146bd76ec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd772c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146bd772c FUN_146bd772c body=117 status=ok
// SIG undefined FUN_146bd772c(void)

ulonglong FUN_146bd772c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 146bd77a2 FUN_146bd77a2 body=154 status=ok
// SIG undefined FUN_146bd77a2(void)

int FUN_146bd77a2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0x60);
  lVar5 = (longlong)iVar2;
  *(uint *)(param_1 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
    FUN_146bd78c8(param_1 + 0x58,iVar2);
  }
  uVar4 = param_4;
  if (cVar1 != '\0') {
    uVar4 = param_2;
    param_2 = param_4;
  }
  lVar3 = *(longlong *)(param_1 + 0x58);
  *(undefined4 *)(lVar3 + lVar5 * 0xc) = param_2;
  *(undefined4 *)(lVar3 + 4 + lVar5 * 0xc) = param_3;
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0xc) = uVar4;
  FUN_146bd783c(param_1 + 0x68,*(undefined4 *)(param_1 + 0x60),1);
  FUN_146bd783c(param_1 + 0x78,*(undefined4 *)(param_1 + 0x60),1);
  FUN_144a1a59e(param_1 + 0x88,*(undefined4 *)(param_1 + 0x60),1);
  return *(int *)(param_1 + 0x60) + -1;
}



// FUNCTION 146bd783c FUN_146bd783c body=116 status=ok
// SIG undefined FUN_146bd783c(void)

void FUN_146bd783c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd78c8(param_1,iVar1);
    }
    FUN_146bd78b1((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146bd795c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bd78b1 FUN_146bd78b1 body=22 status=ok
// SIG undefined FUN_146bd78b1(void)

void FUN_146bd78b1(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 146bd78c8 FUN_146bd78c8 body=147 status=ok
// SIG undefined FUN_146bd78c8(void)

void FUN_146bd78c8(longlong param_1,int param_2)

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



// FUNCTION 146bd795c FUN_146bd795c body=63 status=ok
// SIG undefined FUN_146bd795c(void)

void FUN_146bd795c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bd799c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146bd799c FUN_146bd799c body=117 status=ok
// SIG undefined FUN_146bd799c(void)

ulonglong FUN_146bd799c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 146bd7a12 FUN_146bd7a12 body=364 status=ok
// SIG undefined FUN_146bd7a12(void)

void FUN_146bd7a12(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_148 [36];
  undefined4 local_124;
  int local_120;
  int local_11c;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  iVar7 = *(int *)(param_1 + 0x178);
  if (0 < iVar7) {
    iVar5 = *(int *)(param_1 + 0x174);
    iVar6 = 0;
    do {
      if (0 < iVar5) {
        iVar7 = 0;
        do {
          pcVar1 = *(code **)(param_1 + 0x130);
          plVar4 = *(longlong **)(param_1 + 0x140);
          if (*(longlong **)(param_1 + 0x140) == (longlong *)0x0) {
            plVar4 = (longlong *)(param_1 + 0x150);
          }
          uVar3 = (**(code **)(*plVar4 + 8))();
          cVar2 = (*pcVar1)(uVar3);
          if (cVar2 != '\0') goto LAB_146bd7b49;
          local_124 = 0;
          local_120 = iVar7;
          local_11c = iVar6;
          FUN_146bd57bc(param_1,&local_e8,&local_124);
          FUN_146bd58c4(param_1,&local_e8,local_118);
          if (1 < *(int *)(param_1 + 0x170)) {
            iVar5 = 1;
            do {
              FUN_146bd7cc8(param_1,&local_e8,iVar5);
              FUN_146bd58c4(param_1,&local_e8,local_118);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(param_1 + 0x170));
          }
          iVar7 = iVar7 + 1;
          iVar5 = *(int *)(param_1 + 0x174);
        } while (iVar7 < iVar5);
        iVar7 = *(int *)(param_1 + 0x178);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
LAB_146bd7b49:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd7b88 FUN_146bd7b88 body=319 status=ok
// SIG undefined FUN_146bd7b88(void)

void FUN_146bd7b88(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_148 [36];
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = *param_1;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (0 < *(int *)(lVar1 + 0x174)) {
    iVar7 = 0;
    do {
      pcVar2 = *(code **)(lVar1 + 0x130);
      plVar5 = *(longlong **)(lVar1 + 0x140);
      if (*(longlong **)(lVar1 + 0x140) == (longlong *)0x0) {
        plVar5 = (longlong *)(lVar1 + 0x150);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      if (cVar3 != '\0') break;
      local_124 = 0;
      local_120 = iVar7;
      local_11c = param_2;
      FUN_146bd57bc(lVar1,&local_e8,&local_124);
      FUN_146bd58c4(lVar1,&local_e8,local_118);
      if (1 < *(int *)(lVar1 + 0x170)) {
        iVar6 = 1;
        do {
          FUN_146bd7cc8(lVar1,&local_e8,iVar6);
          FUN_146bd58c4(lVar1,&local_e8,local_118);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0x170));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(lVar1 + 0x174));
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd7cc8 FUN_146bd7cc8 body=108 status=ok
// SIG undefined FUN_146bd7cc8(void)

void FUN_146bd7cc8(longlong param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1e) = uVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x22);
  uVar2 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x26) = uVar2;
  *param_2 = param_3;
  iVar3 = param_3 + 1;
  param_2[3] = iVar3;
  param_2[6] = iVar3;
  param_2[9] = param_3;
  param_2[0xc] = param_3;
  param_2[0xf] = iVar3;
  param_2[0x12] = iVar3;
  param_2[0x15] = param_3;
  if (*(char *)(param_1 + 0x121) == '\x01') {
    FUN_146bd5bca(uVar2,uVar1,1);
    return;
  }
  FUN_146bd5c5e(uVar2,uVar1,1);
  return;
}



// FUNCTION 146bd7d34 FUN_146bd7d34 body=396 status=ok
// SIG undefined FUN_146bd7d34(void)

void FUN_146bd7d34(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if (uVar4 != 0xffffffff) {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 4);
    if (iVar2 < 8) {
      if (0 < iVar2) {
        iVar2 = iVar2 + uVar4;
        do {
          uVar4 = uVar4 + 1;
          local_44 = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
          (*(code *)*param_3)(param_3[1],&local_44);
        } while ((int)uVar4 < iVar2);
      }
    }
    else {
      uVar5 = uVar4 + 7;
      if ((int)(uVar4 + 7) < (int)uVar4) {
        uVar5 = uVar4;
      }
      uVar3 = uVar4;
      do {
        uVar3 = uVar3 + 1;
        local_44 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 4);
        (*(code *)*param_3)(param_3[1],&local_44);
      } while (uVar3 - uVar5 != 1);
      uVar4 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar4 + 9 >> 9) * 8) +
                       (ulonglong)(uVar4 + 9 & 0x1ff) * 4);
      if (uVar4 != 0xffffffff) {
        lVar1 = *(longlong *)(param_1 + 0x58);
        do {
          local_44 = *(undefined4 *)
                      (*(longlong *)(lVar1 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
          (*(code *)*param_3)(param_3[1],&local_44);
          lVar1 = *(longlong *)(param_1 + 0x58);
          uVar4 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                           (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bd7ec2 FUN_146bd7ec2 body=253 status=ok
// SIG undefined FUN_146bd7ec2(void)

undefined4 * FUN_146bd7ec2(undefined4 *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar7 = (ulonglong)(param_3 & 0x1ff);
  uVar1 = *(uint *)(lVar2 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
  puVar9 = (undefined8 *)(lVar3 + uVar11 * 0x18);
  local_68[0] = *puVar9;
  local_68[1] = puVar9[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
  puVar9 = (undefined8 *)(lVar3 + uVar11 * 0x18);
  local_68[3] = *puVar9;
  uStack_48 = puVar9[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar7 * 0xc);
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
  uVar7 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar8 + 0x10 + uVar7 * 0x18);
  puVar9 = (undefined8 *)(lVar8 + uVar7 * 0x18);
  local_38 = *puVar9;
  uStack_30 = puVar9[1];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  puVar9 = local_68;
  puVar10 = (undefined8 *)(param_1 + 6);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_146bd2a7a(param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd7fc0 FUN_146bd7fc0 body=72 status=ok
// SIG undefined FUN_146bd7fc0(void)

void FUN_146bd7fc0(longlong param_1)

{
  FUN_146bd42bb(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_146bd5027(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bd8008 FUN_146bd8008 body=72 status=ok
// SIG undefined FUN_146bd8008(void)

void FUN_146bd8008(longlong param_1)

{
  FUN_146bd42bb(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_146bd4bfb(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bd8050 FUN_146bd8050 body=159 status=ok
// SIG undefined FUN_146bd8050(void)

void FUN_146bd8050(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149f3a990;
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bd80f0 FUN_146bd80f0 body=897 status=ok
// SIG undefined FUN_146bd80f0(void)

undefined8 FUN_146bd80f0(double *param_1)

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
  undefined8 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar18 = param_1[8];
  dVar1 = param_1[7];
  dVar2 = param_1[6];
  dVar16 = param_1[0xb] - dVar18;
  dVar6 = param_1[10] - dVar1;
  dVar5 = param_1[9] - dVar2;
  dVar9 = param_1[0xe] - dVar18;
  dVar10 = param_1[0xd] - dVar1;
  dVar8 = param_1[0xc] - dVar2;
  dVar13 = dVar5 * dVar10 - dVar8 * dVar6;
  dVar19 = dVar16 * dVar8 - dVar9 * dVar5;
  dVar7 = dVar6 * dVar9 - dVar10 * dVar16;
  dVar15 = param_1[3];
  dVar3 = param_1[4];
  dVar4 = param_1[5];
  dVar17 = dVar4 * dVar13 + dVar15 * dVar7 + dVar3 * dVar19;
  if (dVar17 <= 1e-08) {
    uVar12 = 0;
    uVar11 = 0;
    if (-1e-08 <= dVar17) goto LAB_146bd82c5;
    dVar17 = -dVar17;
    dVar14 = -1.0;
  }
  else {
    dVar14 = 1.0;
  }
  dVar18 = param_1[2] - dVar18;
  dVar1 = param_1[1] - dVar1;
  dVar2 = *param_1 - dVar2;
  dVar8 = ((dVar2 * dVar10 - dVar8 * dVar1) * dVar4 +
          (dVar1 * dVar9 - dVar10 * dVar18) * dVar15 + (dVar18 * dVar8 - dVar9 * dVar2) * dVar3) *
          dVar14;
  uVar12 = 0;
  uVar11 = 0;
  if (0.0 <= dVar8) {
    dVar15 = (dVar4 * (dVar5 * dVar1 + -dVar6 * dVar2) +
             dVar15 * (dVar6 * dVar18 + -dVar16 * dVar1) +
             (dVar16 * dVar2 + -dVar5 * dVar18) * dVar3) * dVar14;
    uVar12 = 0;
    if (dVar15 < 0.0) {
      uVar11 = 0;
    }
    else if (dVar8 + dVar15 <= dVar17) {
      dVar18 = (dVar18 * dVar13 + dVar2 * dVar7 + dVar1 * dVar19) * -dVar14;
      uVar12 = 0;
      if (0.0 <= dVar18) {
        dVar17 = 1.0 / dVar17;
        param_1[0xf] = dVar18 * dVar17;
        param_1[0x11] = dVar8 * dVar17;
        param_1[0x12] = dVar15 * dVar17;
        param_1[0x10] = (1.0 - dVar8 * dVar17) - dVar15 * dVar17;
        uVar11 = 1;
        uVar12 = 1;
      }
    }
  }
LAB_146bd82c5:
  *(undefined4 *)(param_1 + 0x13) = uVar12;
  return uVar11;
}



// FUNCTION 146bd8472 FUN_146bd8472 body=1126 status=ok
// SIG undefined FUN_146bd8472(void)

undefined8 FUN_146bd8472(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = *param_1 - (*param_2 + param_2[3]) * 0.5;
  dVar5 = (param_2[3] - *param_2) * 0.5;
  dVar7 = -dVar4 - dVar5;
  dVar1 = param_1[3];
  if (dVar1 <= 0.0) {
    dVar6 = 0.0;
    if (0.0 <= dVar1) {
      dVar3 = 1.79769313486232e+308;
      if (dVar7 <= 0.0) goto LAB_146bd85b1;
    }
    else if (dVar7 <= dVar1 * 0.0) {
      dVar3 = 1.79769313486232e+308;
      if (dVar1 * 1.79769313486232e+308 < dVar7) {
        dVar3 = dVar7 / dVar1;
      }
LAB_146bd85b1:
      dVar4 = dVar4 - dVar5;
      dVar5 = -dVar1;
      if (dVar5 <= dVar1) {
        if (dVar1 <= 0.0) {
          if (dVar4 <= 0.0) goto LAB_146bd8682;
        }
        else if (dVar4 <= dVar6 * dVar5) {
          if (dVar3 * dVar5 < dVar4) {
            dVar3 = dVar4 / dVar5;
          }
LAB_146bd8682:
          dVar4 = param_1[1] - (param_2[1] + param_2[4]) * 0.5;
          dVar5 = (param_2[4] - param_2[1]) * 0.5;
          dVar7 = -dVar4 - dVar5;
          dVar1 = param_1[4];
          if (dVar1 <= 0.0) {
            if (0.0 <= dVar1) {
              if (dVar7 <= 0.0) goto LAB_146bd873a;
            }
            else if (dVar7 <= dVar6 * dVar1) {
              if (dVar3 * dVar1 < dVar7) {
                dVar3 = dVar7 / dVar1;
              }
LAB_146bd873a:
              dVar4 = dVar4 - dVar5;
              dVar5 = -dVar1;
              if (dVar5 <= dVar1) {
                if (dVar1 <= 0.0) {
                  if (dVar4 <= 0.0) goto LAB_146bd87c9;
                }
                else if (dVar4 <= dVar6 * dVar5) {
                  if (dVar3 * dVar5 < dVar4) {
                    dVar3 = dVar4 / dVar5;
                  }
LAB_146bd87c9:
                  dVar4 = param_1[2] - (param_2[2] + param_2[5]) * 0.5;
                  dVar5 = (param_2[5] - param_2[2]) * 0.5;
                  dVar7 = -dVar4 - dVar5;
                  dVar1 = param_1[5];
                  if (dVar1 <= 0.0) {
                    if (0.0 <= dVar1) {
                      if (dVar7 <= 0.0) goto LAB_146bd8864;
                    }
                    else if (dVar7 <= dVar6 * dVar1) {
                      if (dVar3 * dVar1 < dVar7) {
                        dVar3 = dVar7 / dVar1;
                      }
LAB_146bd8864:
                      dVar4 = dVar4 - dVar5;
                      dVar5 = -dVar1;
                      if (dVar5 <= dVar1) {
                        if (dVar1 <= 0.0) {
                          if (dVar4 <= 0.0) goto LAB_146bd88cf;
                        }
                        else if (dVar4 <= dVar6 * dVar5) {
LAB_146bd88cf:
                          uVar2 = 1;
                          goto LAB_146bd85e6;
                        }
                      }
                      else if (dVar4 <= dVar3 * dVar5) {
                        uVar2 = 1;
                        if (dVar6 * dVar5 < dVar4) {
                          dVar6 = dVar4 / dVar5;
                          goto LAB_146bd85e6;
                        }
                        goto LAB_146bd88cf;
                      }
                    }
                  }
                  else if (dVar7 <= dVar3 * dVar1) {
                    if (dVar6 * dVar1 < dVar7) {
                      dVar6 = dVar7 / dVar1;
                    }
                    goto LAB_146bd8864;
                  }
                }
              }
              else if (dVar4 <= dVar3 * dVar5) {
                if (dVar6 * dVar5 < dVar4) {
                  dVar6 = dVar4 / dVar5;
                }
                goto LAB_146bd87c9;
              }
            }
          }
          else if (dVar7 <= dVar3 * dVar1) {
            if (dVar6 * dVar1 < dVar7) {
              dVar6 = dVar7 / dVar1;
            }
            goto LAB_146bd873a;
          }
        }
      }
      else if (dVar4 <= dVar3 * dVar5) {
        if (dVar6 * dVar5 < dVar4) {
          dVar6 = dVar4 / dVar5;
        }
        goto LAB_146bd8682;
      }
    }
  }
  else if (dVar7 <= dVar1 * 1.79769313486232e+308) {
    dVar6 = 0.0;
    dVar3 = 1.79769313486232e+308;
    if (dVar1 * 0.0 < dVar7) {
      dVar6 = dVar7 / dVar1;
    }
    goto LAB_146bd85b1;
  }
  dVar6 = 1.79769313486232e+308;
  uVar2 = 0;
LAB_146bd85e6:
  *param_3 = dVar6;
  return uVar2;
}



// FUNCTION 146bd88d8 FUN_146bd88d8 body=147 status=ok
// SIG undefined FUN_146bd88d8(void)

void FUN_146bd88d8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bd896c FUN_146bd896c body=845 status=ok
// SIG undefined FUN_146bd896c(void)

undefined8
FUN_146bd896c(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_d8;
  
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar12 = param_4[2] - dVar1;
  dVar14 = param_4[1] - dVar3;
  dVar13 = *param_4 - dVar2;
  dVar9 = param_5[2] - dVar1;
  dVar10 = param_5[1] - dVar3;
  dVar11 = *param_5 - dVar2;
  dVar7 = dVar13 * dVar10 - dVar11 * dVar14;
  dVar15 = dVar12 * dVar11 - dVar9 * dVar13;
  dVar16 = dVar14 * dVar9 - dVar10 * dVar12;
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar8 = dVar6 * dVar7 + dVar4 * dVar16 + dVar5 * dVar15;
  if (dVar8 <= 1e-08) {
    if (-1e-08 <= dVar8) {
      return 0;
    }
    dVar8 = -dVar8;
    local_d8 = -1.0;
  }
  else {
    local_d8 = 1.0;
  }
  dVar1 = param_1[2] - dVar1;
  dVar3 = param_1[1] - dVar3;
  dVar2 = *param_1 - dVar2;
  dVar9 = ((dVar2 * dVar10 - dVar11 * dVar3) * dVar6 +
          (dVar3 * dVar9 - dVar10 * dVar1) * dVar4 + (dVar1 * dVar11 - dVar9 * dVar2) * dVar5) *
          local_d8;
  if ((((0.0 <= dVar9) &&
       (dVar4 = (dVar6 * (dVar13 * dVar3 + -dVar14 * dVar2) +
                dVar4 * (dVar14 * dVar1 + -dVar12 * dVar3) +
                (dVar12 * dVar2 + -dVar13 * dVar1) * dVar5) * local_d8, 0.0 <= dVar4)) &&
      (dVar9 + dVar4 <= dVar8)) &&
     (0.0 <= (dVar1 * dVar7 + dVar2 * dVar16 + dVar3 * dVar15) * -local_d8)) {
    return 1;
  }
  return 0;
}



// FUNCTION 146bd8cba FUN_146bd8cba body=394 status=ok
// SIG undefined FUN_146bd8cba(void)

double FUN_146bd8cba(double *param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (*param_2 + param_2[3]) - (*param_1 + param_1[3]);
  uVar1 = -(ulonglong)(-dVar2 <= dVar2);
  dVar3 = (double)(~uVar1 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar1) -
          ((param_2[3] - *param_2) + (param_1[3] - *param_1));
  dVar2 = 0.0;
  if (0.0 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = (param_2[1] + param_2[4]) - (param_1[1] + param_1[4]);
  uVar1 = -(ulonglong)(-dVar3 <= dVar3);
  dVar4 = (double)(~uVar1 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar1) -
          ((param_2[4] - param_2[1]) + (param_1[4] - param_1[1]));
  dVar3 = 0.0;
  if (0.0 <= dVar4) {
    dVar3 = dVar4;
  }
  dVar4 = (param_2[2] + param_2[5]) - (param_1[2] + param_1[5]);
  uVar1 = -(ulonglong)(-dVar4 <= dVar4);
  dVar5 = (double)(~uVar1 & (ulonglong)-dVar4 | (ulonglong)dVar4 & uVar1) -
          ((param_2[5] - param_2[2]) + (param_1[5] - param_1[2]));
  dVar4 = 0.0;
  if (0.0 <= dVar5) {
    dVar4 = dVar5;
  }
  return (dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3) * 0.25;
}



// FUNCTION 146bd8e44 FUN_146bd8e44 body=1004 status=ok
// SIG undefined FUN_146bd8e44(void)

undefined8 FUN_146bd8e44(double *param_1)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_1f8 [40];
  double *local_1d0;
  double *local_1c8;
  double *local_1c0;
  double *local_1b8;
  double *local_1b0;
  double *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130 [9];
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar9 = *param_1;
  uVar11 = SUB84(dVar9,0);
  uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 < 0.0) {
    pdVar7 = param_1 + 0xd;
    local_1d0 = param_1 + 0x16;
    local_1b0 = param_1 + 1;
    local_1b8 = param_1 + 4;
    local_1c0 = param_1 + 7;
    local_1c8 = param_1 + 10;
    uVar11 = 0xffffffff;
    uVar12 = 0x7fefffff;
    lVar8 = 3;
    lVar6 = 0;
    uVar1 = 2;
    local_1a8 = pdVar7;
    do {
      FUN_146bd9232(&local_1a0,local_1a8 + (ulonglong)uVar1 * 3,pdVar7);
      local_138 = local_170;
      local_148 = local_180;
      uStack_140 = uStack_178;
      local_158 = local_190;
      uStack_154 = uStack_18c;
      uStack_150 = uStack_188;
      uStack_14c = uStack_184;
      local_168 = local_1a0;
      uStack_160 = uStack_198;
      pdVar3 = local_1d0;
      pdVar4 = local_130;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pdVar4 = *pdVar3;
        pdVar3 = pdVar3 + 1;
        pdVar4 = pdVar4 + 1;
      }
      local_e8 = 0xbff0000000000000;
      dVar9 = (double)FUN_146bd9364(&local_168);
      uVar5 = (uint)lVar6;
      if (dVar9 <= (double)CONCAT44(uVar12,uVar11) && (double)CONCAT44(uVar12,uVar11) != dVar9) {
        local_1b0[2] = local_98;
        *local_1b0 = local_a8;
        local_1b0[1] = dStack_a0;
        local_1b8[2] = local_c8;
        *local_1b8 = local_d8;
        local_1b8[1] = dStack_d0;
        dVar10 = (1.0 - local_e0 / local_170) * 0.5;
        local_1c0[uVar1] = dVar10;
        local_1c0[lVar6] = 1.0 - dVar10;
        local_1c0[(int)((int)lVar8 - uVar1)] = 0.0;
        local_1c8[2] = local_b0;
        *local_1c8 = local_c0;
        local_1c8[1] = dStack_b8;
        if (dVar9 <= 1e-08) goto LAB_146bd9224;
        uVar11 = SUB84(dVar9,0);
        uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
      lVar6 = lVar6 + 1;
      pdVar7 = pdVar7 + 3;
      lVar8 = lVar8 + -1;
      uVar1 = uVar5;
    } while (lVar8 != 0);
    lVar6 = 3;
    lVar8 = 0;
    pdVar7 = local_1d0;
    uVar1 = 2;
    do {
      FUN_146bd9232(&local_1a0,local_1d0 + (ulonglong)uVar1 * 3,pdVar7);
      local_138 = local_170;
      local_148 = local_180;
      uStack_140 = uStack_178;
      local_158 = local_190;
      uStack_154 = uStack_18c;
      uStack_150 = uStack_188;
      uStack_14c = uStack_184;
      local_168 = local_1a0;
      uStack_160 = uStack_198;
      pdVar3 = local_1a8;
      pdVar4 = local_130;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pdVar4 = *pdVar3;
        pdVar3 = pdVar3 + 1;
        pdVar4 = pdVar4 + 1;
      }
      local_e8 = 0xbff0000000000000;
      dVar9 = (double)FUN_146bd9364(&local_168);
      uVar5 = (uint)lVar8;
      if (dVar9 <= (double)CONCAT44(uVar12,uVar11) && (double)CONCAT44(uVar12,uVar11) != dVar9) {
        local_1b0[2] = local_98;
        *local_1b0 = local_a8;
        local_1b0[1] = dStack_a0;
        local_1b8[2] = local_c8;
        *local_1b8 = local_d8;
        local_1b8[1] = dStack_d0;
        dVar10 = (1.0 - local_e0 / local_170) * 0.5;
        local_1c8[uVar1] = dVar10;
        local_1c8[lVar8] = 1.0 - dVar10;
        local_1c8[(int)((int)lVar6 - uVar1)] = 0.0;
        local_1c0[2] = local_b0;
        *local_1c0 = local_c0;
        local_1c0[1] = dStack_b8;
        if (dVar9 <= 1e-08) goto LAB_146bd9224;
        uVar11 = SUB84(dVar9,0);
        uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
      lVar8 = lVar8 + 1;
      pdVar7 = pdVar7 + 3;
      lVar6 = lVar6 + -1;
      uVar1 = uVar5;
    } while (lVar6 != 0);
    *param_1 = (double)CONCAT44(uVar12,uVar11);
  }
LAB_146bd91d0:
  if ((local_90 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar12,uVar11);
LAB_146bd9224:
  *param_1 = 0.0;
  uVar11 = 0;
  uVar12 = 0;
  goto LAB_146bd91d0;
}



// FUNCTION 146bd9232 FUN_146bd9232 body=305 status=ok
// SIG undefined FUN_146bd9232(void)

void FUN_146bd9232(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  param_1[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar1;
  dVar1 = DAT_14c8463a8;
  param_1[3] = DAT_14c8463a0;
  param_1[4] = dVar1;
  param_1[5] = DAT_14c8463b0;
  param_1[6] = 0.0;
  dVar1 = param_2[2];
  dVar7 = param_3[2];
  dVar5 = param_2[1];
  dVar2 = param_3[1];
  *param_1 = (*param_2 + *param_3) * 0.5;
  param_1[1] = (dVar5 + dVar2) * 0.5;
  param_1[2] = (dVar1 + dVar7) * 0.5;
  dVar1 = param_3[2] - param_2[2];
  dVar3 = param_3[1] - param_2[1];
  dVar2 = *param_3 - *param_2;
  dVar4 = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
  dVar6 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  dVar5 = 0.0;
  if (0.0 < dVar4) {
    dVar7 = 1.0 / dVar4;
    dVar6 = dVar2 * dVar7;
    dVar8 = dVar3 * dVar7;
    dVar7 = dVar1 * dVar7;
    dVar5 = dVar4 * 0.5;
  }
  param_1[3] = dVar6;
  param_1[4] = dVar8;
  param_1[5] = dVar7;
  param_1[6] = dVar5;
  return;
}



// FUNCTION 146bd9364 FUN_146bd9364 body=728 status=ok
// SIG undefined FUN_146bd9364(void)

void FUN_146bd9364(double *param_1)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180 [9];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8 [9];
  undefined8 local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (0.0 <= param_1[0x10]) goto LAB_146bd9396;
  local_1b8 = param_1[2];
  local_1c8 = *param_1;
  dStack_1c0 = param_1[1];
  local_1a0 = param_1[5];
  local_1b0 = *(undefined4 *)(param_1 + 3);
  uStack_1ac = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_f0 = param_1[3];
  uStack_1a8 = *(undefined4 *)(param_1 + 4);
  uStack_1a4 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_e8 = param_1[4];
  pdVar4 = param_1 + 7;
  pdVar3 = pdVar4;
  pdVar5 = local_d8;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar5 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar5 = pdVar5 + 1;
  }
  local_90 = 0xbff0000000000000;
  local_108 = local_1c8;
  dStack_100 = dStack_1c0;
  local_f8 = local_1b8;
  local_e0 = local_1a0;
  dVar6 = (double)FUN_146bd963e(&local_108);
  param_1[0x11] = local_88;
  dVar1 = param_1[6];
  if (local_88 < -dVar1) {
    param_1[0x18] = *param_1 - dVar1 * param_1[3];
    param_1[0x19] = param_1[1] - param_1[4] * dVar1;
    param_1[0x1a] = param_1[2] - param_1[5] * dVar1;
    local_188 = param_1[0x1a];
    local_198 = param_1[0x18];
    dStack_190 = param_1[0x19];
    pdVar3 = local_180;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pdVar3 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar3 = pdVar3 + 1;
    }
    dVar6 = (double)FUN_146bd2a7a(&local_198);
    param_1[0x12] = local_120;
    param_1[0x13] = dStack_118;
    param_1[0x14] = local_110;
    param_1[0x11] = -param_1[6];
LAB_146bd9589:
    *(undefined4 *)(param_1 + 0x15) = local_138;
    *(undefined4 *)((longlong)param_1 + 0xac) = uStack_134;
    *(undefined4 *)(param_1 + 0x16) = uStack_130;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_12c;
    local_40 = local_128;
  }
  else {
    if (dVar1 < local_88) {
      param_1[0x18] = dVar1 * param_1[3] + *param_1;
      param_1[0x19] = param_1[4] * dVar1 + param_1[1];
      param_1[0x1a] = param_1[5] * dVar1 + param_1[2];
      local_188 = param_1[0x1a];
      local_198 = param_1[0x18];
      dStack_190 = param_1[0x19];
      pdVar3 = local_180;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pdVar3 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        pdVar3 = pdVar3 + 1;
      }
      dVar6 = (double)FUN_146bd2a7a(&local_198);
      param_1[0x12] = local_120;
      param_1[0x13] = dStack_118;
      param_1[0x14] = local_110;
      param_1[0x11] = param_1[6];
      goto LAB_146bd9589;
    }
    param_1[0x1a] = local_70;
    param_1[0x18] = local_80;
    param_1[0x19] = dStack_78;
    param_1[0x12] = local_68;
    param_1[0x13] = dStack_60;
    param_1[0x14] = local_58;
    *(undefined4 *)(param_1 + 0x15) = local_50;
    *(undefined4 *)((longlong)param_1 + 0xac) = uStack_4c;
    *(undefined4 *)(param_1 + 0x16) = uStack_48;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_44;
  }
  param_1[0x17] = local_40;
  param_1[0x10] = dVar6;
LAB_146bd9396:
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bd963e FUN_146bd963e body=1796 status=ok
// SIG undefined FUN_146bd963e(void)

double FUN_146bd963e(double *param_1)

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
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  dVar1 = param_1[0xf];
  if (dVar1 < 0.0) {
    dVar1 = param_1[8];
    dVar5 = param_1[0xb] - dVar1;
    dVar16 = param_1[6];
    dVar21 = param_1[7];
    dVar2 = param_1[10] - dVar21;
    dVar3 = param_1[9] - dVar16;
    dVar4 = param_1[0xe] - dVar1;
    dVar6 = param_1[0xd] - dVar21;
    dVar7 = param_1[0xc] - dVar16;
    dVar19 = dVar3 * dVar6 - dVar7 * dVar2;
    dVar18 = dVar5 * dVar7 - dVar4 * dVar3;
    dVar17 = dVar2 * dVar4 - dVar6 * dVar5;
    dVar8 = SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
    dVar9 = 1.0 / dVar8;
    if (0.0 < dVar8) {
      dVar17 = dVar17 * dVar9;
      dVar18 = dVar18 * dVar9;
    }
    else {
      dVar17 = 0.0;
      dVar18 = 0.0;
    }
    dVar17 = (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar19 * dVar9)) * param_1[5] +
             dVar17 * param_1[3] + dVar18 * param_1[4];
    uVar15 = -(ulonglong)(-dVar17 <= dVar17);
    if (1e-08 < (double)(~uVar15 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar15)) {
      local_1f8 = (double *)(param_1[2] - dVar1);
      dVar1 = *param_1;
      dVar17 = param_1[1];
      local_1f0 = dVar17 - dVar21;
      local_1e8 = dVar1 - dVar16;
      FUN_146bb5db8(param_1 + 3,&local_1d8,&local_128);
      dVar8 = local_1c8 * dVar5 + local_1d8 * dVar3 + dVar2 * dStack_1d0;
      dVar9 = local_1c8 * dVar4 + local_1d8 * dVar7 + dVar6 * dStack_1d0;
      dVar17 = local_1c8 * (double)local_1f8 +
               local_1d8 * (dVar1 - dVar16) + dStack_1d0 * (dVar17 - dVar21);
      dVar1 = (double)CONCAT44(uStack_124,local_128);
      dVar16 = (double)CONCAT44(uStack_11c,uStack_120);
      dVar21 = (double)CONCAT44(uStack_114,local_118);
      dVar19 = dVar21 * dVar5 + dVar1 * dVar3 + dVar2 * dVar16;
      dVar20 = dVar21 * dVar4 + dVar1 * dVar7 + dVar6 * dVar16;
      dVar21 = dVar21 * (double)local_1f8 + dVar1 * local_1e8 + dVar16 * local_1f0;
      dVar18 = 1.0 / (dVar8 * dVar20 - dVar19 * dVar9);
      dVar16 = (dVar8 * dVar21 - dVar17 * dVar19) * dVar18;
      dVar1 = 0.0;
      if (((0.0 <= dVar16) && (dVar18 = (dVar20 * dVar17 - dVar21 * dVar9) * dVar18, 0.0 <= dVar18))
         && (dVar21 = (1.0 - dVar18) - dVar16, 0.0 <= dVar21)) {
        dVar17 = param_1[3];
        dVar8 = param_1[4];
        dVar9 = param_1[5];
        dVar19 = ((dVar9 * dVar5 + dVar17 * dVar3 + dVar2 * dVar8) * dVar18 +
                 (dVar9 * dVar4 + dVar17 * dVar7 + dVar6 * dVar8) * dVar16) -
                 ((double)local_1f8 * dVar9 + local_1e8 * dVar17 + local_1f0 * dVar8);
        param_1[0x10] = dVar19;
        param_1[0x17] = dVar21;
        param_1[0x18] = dVar18;
        param_1[0x19] = dVar16;
        param_1[0x11] = dVar19 * dVar17 + *param_1;
        param_1[0x12] = dVar8 * dVar19 + param_1[1];
        param_1[0x13] = dVar9 * dVar19 + param_1[2];
        param_1[0x14] = dVar7 * dVar16 + dVar3 * dVar18 + param_1[6];
        param_1[0x15] = dVar6 * dVar16 + dVar2 * dVar18 + param_1[7];
        param_1[0x16] = dVar4 * dVar16 + dVar5 * dVar18 + param_1[8];
        param_1[0xf] = 0.0;
        local_1e0 = dVar16;
        goto LAB_146bd999d;
      }
    }
    local_1f8 = param_1 + 6;
    dVar1 = 1.79769313486232e+308;
    lVar13 = 3;
    lVar14 = 0x30;
    lVar12 = 0;
    uVar10 = 2;
    do {
      FUN_146bd9232(&local_128,local_1f8 + (ulonglong)uVar10 * 3,(longlong)param_1 + lVar14);
      local_1d8 = *param_1;
      dStack_1d0 = param_1[1];
      local_1c8 = param_1[2];
      dStack_1c0 = param_1[3];
      local_1b8 = param_1[4];
      dStack_1b0 = param_1[5];
      local_178 = local_f8;
      local_188 = local_108;
      uStack_184 = uStack_104;
      uStack_180 = uStack_100;
      uStack_17c = uStack_fc;
      local_198 = local_118;
      uStack_194 = uStack_114;
      uStack_190 = uStack_110;
      uStack_18c = uStack_10c;
      local_1a8 = local_128;
      uStack_1a4 = uStack_124;
      uStack_1a0 = uStack_120;
      uStack_19c = uStack_11c;
      local_170 = 0xbff0000000000000;
      dVar16 = (double)FUN_146bd9d44(&local_1d8);
      uVar11 = (uint)lVar12;
      if (dVar16 < dVar1) {
        param_1[0x13] = local_148;
        param_1[0x11] = local_158;
        param_1[0x12] = dStack_150;
        param_1[0x16] = local_130;
        param_1[0x14] = local_140;
        param_1[0x15] = dStack_138;
        param_1[0x10] = local_168;
        dVar1 = (1.0 - local_160 / local_f8) * 0.5;
        param_1[(ulonglong)uVar10 + 0x17] = dVar1;
        param_1[lVar12 + 0x17] = 1.0 - dVar1;
        param_1[(longlong)(int)((int)lVar13 - uVar10) + 0x17] = 0.0;
        dVar1 = dVar16;
      }
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 + 0x18;
      lVar13 = lVar13 + -1;
      uVar10 = uVar11;
    } while (lVar13 != 0);
    param_1[0xf] = dVar1;
  }
LAB_146bd999d:
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1;
}



// FUNCTION 146bd9d44 FUN_146bd9d44 body=1092 status=ok
// SIG undefined FUN_146bd9d44(void)

void FUN_146bd9d44(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (param_1[0xd] < 0.0) {
    dVar14 = param_1[1] - param_1[7];
    dVar10 = *param_1 - param_1[6];
    dVar11 = param_1[3];
    dVar1 = param_1[9];
    dVar2 = param_1[4];
    dVar3 = param_1[10];
    dVar4 = param_1[5];
    dVar5 = param_1[0xb];
    dVar7 = dVar4 * dVar5 + dVar11 * dVar1 + dVar2 * dVar3;
    dVar13 = param_1[2] - param_1[8];
    dVar16 = dVar13 * dVar4 + dVar10 * dVar11 + dVar14 * dVar2;
    dVar8 = dVar13 * dVar13 + dVar10 * dVar10 + dVar14 * dVar14;
    dVar15 = 1.0 - dVar7 * dVar7;
    uVar9 = -(ulonglong)(-dVar15 <= dVar15);
    dVar15 = (double)(~uVar9 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar9);
    if (1e-08 <= dVar15) {
      dVar6 = -dVar7;
      dVar14 = dVar13 * dVar5 + dVar10 * dVar1 + dVar14 * dVar3;
      dVar10 = -dVar14;
      dVar12 = dVar6 * dVar16 + dVar14;
      dVar13 = param_1[0xc];
      if (-(dVar15 * dVar13) <= dVar12) {
        if (dVar12 <= dVar15 * dVar13) {
          dVar14 = (dVar7 * dVar14 - dVar16) * (1.0 / dVar15);
          dVar13 = dVar12 * (1.0 / dVar15);
          dVar8 = dVar8 + (dVar16 + dVar16 + dVar6 * dVar13 + dVar14) * dVar14 +
                          (dVar10 + dVar10 + dVar6 * dVar14 + dVar13) * dVar13;
        }
        else {
          dVar16 = dVar6 * dVar13 + dVar16;
          dVar14 = -dVar16;
          dVar8 = dVar8 + ((dVar10 + dVar10 + dVar13) * dVar13 - dVar16 * dVar16);
        }
      }
      else {
        dVar7 = dVar7 * dVar13;
        dVar15 = ((dVar10 + dVar10) - dVar13) * dVar13;
        dVar13 = -dVar13;
        dVar7 = dVar7 + dVar16;
        dVar14 = -dVar7;
        dVar8 = dVar8 + (dVar14 * dVar7 - dVar15);
      }
    }
    else {
      dVar14 = -dVar16;
      dVar8 = dVar8 - dVar16 * dVar16;
      dVar13 = 0.0;
    }
    param_1[0x10] = *param_1 + dVar11 * dVar14;
    param_1[0x11] = param_1[1] + dVar2 * dVar14;
    param_1[0x12] = param_1[2] + dVar4 * dVar14;
    param_1[0x13] = param_1[6] + dVar1 * dVar13;
    param_1[0x14] = param_1[7] + dVar3 * dVar13;
    param_1[0x15] = param_1[8] + dVar5 * dVar13;
    param_1[0xe] = dVar14;
    param_1[0xf] = dVar13;
    dVar11 = 0.0;
    if (0.0 <= dVar8) {
      dVar11 = dVar8;
    }
    param_1[0xd] = dVar11;
  }
  return;
}



// FUNCTION 146bda188 FUN_146bda188 body=442 status=ok
// SIG undefined FUN_146bda188(void)

undefined8 * FUN_146bda188(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar1 = (code *)*param_3;
  if (pcVar1 == (code *)0x0) {
    param_1[2] = param_2[2];
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
    param_1[5] = param_2[5];
  }
  else {
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_68 = param_2[2];
    local_98 = param_3 + 4;
    plVar8 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar8 = local_98;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    (*pcVar1)(&local_60,uVar5,&local_78);
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = uStack_58;
    param_1[3] = local_60;
    param_1[4] = uStack_58;
    param_1[5] = local_50;
    uVar9 = 1;
    local_a0 = param_2 + 3;
    local_a8 = param_2 + 4;
    local_b0 = param_2 + 1;
    do {
      puVar6 = local_a0;
      if (((uVar9 >> 1 ^ uVar9) & 1) == 0) {
        puVar6 = param_2;
      }
      puVar7 = local_a8;
      if ((uVar9 & 2) == 0) {
        puVar7 = local_b0;
      }
      local_90 = *puVar6;
      local_88 = *puVar7;
      puVar6 = param_2 + 5;
      if (uVar9 < 4) {
        puVar6 = param_2 + 2;
      }
      local_80 = *puVar6;
      pcVar1 = (code *)*param_3;
      plVar8 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar8 = local_98;
      }
      uVar5 = (**(code **)(*plVar8 + 8))();
      (*pcVar1)(&local_78,uVar5,&local_90);
      FUN_146ba5262(param_1,&local_78);
      uVar9 = uVar9 + 1;
    } while (uVar9 != 8);
  }
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bda344 FUN_146bda344 body=431 status=ok
// SIG undefined FUN_146bda344(void)

ulonglong * FUN_146bda344(ulonglong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  dVar1 = param_4[2];
  uVar6 = -(ulonglong)(param_2[2] <= param_3[2]);
  dVar3 = (double)(~uVar6 & (ulonglong)param_3[2] | (ulonglong)param_2[2] & uVar6);
  uVar6 = -(ulonglong)(dVar3 <= dVar1);
  dVar2 = param_4[1];
  uVar7 = -(ulonglong)(param_2[1] <= param_3[1]);
  dVar4 = (double)(~uVar7 & (ulonglong)param_3[1] | (ulonglong)param_2[1] & uVar7);
  uVar7 = -(ulonglong)(dVar4 <= dVar2);
  uVar8 = -(ulonglong)(*param_2 <= *param_3);
  dVar5 = (double)(~uVar8 & (ulonglong)*param_3 | (ulonglong)*param_2 & uVar8);
  uVar8 = -(ulonglong)(dVar5 <= *param_4);
  *param_1 = ~uVar8 & (ulonglong)*param_4 | uVar8 & (ulonglong)dVar5;
  param_1[1] = ~uVar7 & (ulonglong)dVar2 | uVar7 & (ulonglong)dVar4;
  param_1[2] = ~uVar6 & (ulonglong)dVar1 | uVar6 & (ulonglong)dVar3;
  dVar1 = param_4[2];
  uVar6 = -(ulonglong)(param_3[2] <= param_2[2]);
  dVar5 = (double)(~uVar6 & (ulonglong)param_3[2] | (ulonglong)param_2[2] & uVar6);
  uVar6 = -(ulonglong)(dVar1 <= dVar5);
  dVar2 = param_4[1];
  uVar7 = -(ulonglong)(param_3[1] <= param_2[1]);
  dVar4 = (double)(~uVar7 & (ulonglong)param_3[1] | (ulonglong)param_2[1] & uVar7);
  uVar7 = -(ulonglong)(dVar2 <= dVar4);
  uVar8 = -(ulonglong)(*param_3 <= *param_2);
  dVar3 = (double)(~uVar8 & (ulonglong)*param_3 | (ulonglong)*param_2 & uVar8);
  uVar8 = -(ulonglong)(*param_4 <= dVar3);
  param_1[3] = ~uVar8 & (ulonglong)*param_4 | uVar8 & (ulonglong)dVar3;
  param_1[4] = ~uVar7 & (ulonglong)dVar2 | uVar7 & (ulonglong)dVar4;
  param_1[5] = ~uVar6 & (ulonglong)dVar1 | uVar6 & (ulonglong)dVar5;
  return param_1;
}



// FUNCTION 146bda4f4 FUN_146bda4f4 body=2367 status=ok
// SIG undefined FUN_146bda4f4(void)

undefined8 FUN_146bda4f4(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_238 [40];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198 [6];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148 [2];
  double local_138 [4];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_238;
  dVar7 = param_1[2];
  local_138[2] = param_1[5] - dVar7;
  dVar11 = *param_1;
  dVar14 = param_1[1];
  local_138[1] = param_1[4] - dVar14;
  local_138[0] = param_1[3] - dVar11;
  local_f8 = dVar7 - param_1[8];
  local_110 = param_1[8] - param_1[5];
  local_100 = dVar14 - param_1[7];
  local_118 = param_1[7] - param_1[4];
  local_108 = dVar11 - param_1[6];
  local_138[3] = param_1[6] - param_1[3];
  local_198[1] = local_138[0] * local_118 - local_138[3] * local_138[1];
  dVar1 = local_138[2] * local_138[3] - local_110 * local_138[0];
  dVar8 = local_138[1] * local_110 - local_118 * local_138[2];
  dVar9 = SQRT(local_198[1] * local_198[1] + dVar8 * dVar8 + dVar1 * dVar1);
  local_198[0] = 0.0;
  dVar2 = 1.0 / dVar9;
  local_1a0 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar8 * dVar2));
  if (0.0 < dVar9) {
    local_198[1] = local_198[1] * dVar2;
    local_198[0] = dVar1 * dVar2;
  }
  else {
    local_198[1] = 0.0;
  }
  dVar7 = dVar7 * local_198[1] + dVar11 * local_1a0 + dVar14 * local_198[0];
  FUN_146bdaf02(param_2,&local_1a0,&local_1a8,&local_1b0);
  if ((local_1a8 - param_3 <= dVar7) && (dVar7 <= local_1b0 + param_3)) {
    dVar7 = param_2[2];
    local_198[4] = param_2[5] - dVar7;
    dVar11 = *param_2;
    dVar14 = param_2[1];
    local_198[3] = param_2[4] - dVar14;
    local_198[2] = param_2[3] - dVar11;
    local_160 = param_2[8] - param_2[5];
    local_168 = param_2[7] - param_2[4];
    local_198[5] = param_2[6] - param_2[3];
    local_158 = dVar11 - param_2[6];
    local_150 = dVar14 - param_2[7];
    local_148[0] = dVar7 - param_2[8];
    dVar1 = local_198[2] * local_168 - local_198[5] * local_198[3];
    dVar2 = local_198[4] * local_198[5] - local_160 * local_198[2];
    dVar9 = local_198[3] * local_160 - local_168 * local_198[4];
    dVar8 = SQRT(dVar1 * dVar1 + dVar9 * dVar9 + dVar2 * dVar2);
    dVar12 = 1.0 / dVar8;
    dVar9 = (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar9 * dVar12));
    if (0.0 < dVar8) {
      dVar1 = dVar1 * dVar12;
      dVar2 = dVar2 * dVar12;
    }
    else {
      dVar2 = 0.0;
      dVar1 = 0.0;
    }
    dVar10 = local_1a0 * dVar2 - dVar9 * local_198[0];
    dVar8 = local_198[1] * dVar9 - dVar1 * local_1a0;
    dVar13 = local_198[0] * dVar1 - local_198[1] * dVar2;
    dVar12 = SQRT(dVar10 * dVar10 + dVar13 * dVar13 + dVar8 * dVar8);
    dVar3 = 1.0 / dVar12;
    if (0.0 < dVar12) {
      dVar10 = dVar10 * dVar3;
      dVar8 = dVar8 * dVar3;
    }
    else {
      dVar10 = 0.0;
      dVar8 = 0.0;
    }
    dVar12 = (double)(-(ulonglong)(0.0 < dVar12) & (ulonglong)(dVar13 * dVar3));
    local_1c8 = dVar9;
    local_1c0 = dVar2;
    local_1b8 = dVar1;
    if (dVar10 * dVar10 + dVar12 * dVar12 + dVar8 * dVar8 < param_3) {
      lVar5 = 0x10;
      do {
        dVar7 = *(double *)((longlong)local_148 + lVar5 + 8);
        local_1d8 = local_1a0 * dVar7 - *(double *)((longlong)local_148 + lVar5) * local_198[0];
        uStack_1e0 = *(double *)((longlong)local_148 + lVar5) * local_198[1] -
                     local_1a0 * *(double *)((longlong)local_138 + lVar5);
        dVar7 = local_198[0] * *(double *)((longlong)local_138 + lVar5) - dVar7 * local_198[1];
        dVar11 = SQRT(local_1d8 * local_1d8 + dVar7 * dVar7 + uStack_1e0 * uStack_1e0);
        dVar14 = 1.0 / dVar11;
        if (0.0 < dVar11) {
          local_1d8 = local_1d8 * dVar14;
          uStack_1e0 = uStack_1e0 * dVar14;
        }
        else {
          local_1d8 = 0.0;
          uStack_1e0 = 0.0;
        }
        local_1e8 = -(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar7 * dVar14);
        FUN_146bdaf02(param_1,&local_1e8,&local_1f0,&local_1f8);
        FUN_146bdaf02(param_2,&local_1e8,&local_1a8,&local_1b0);
        if ((local_1f8 < local_1a8 - param_3) || (local_1b0 < local_1f0 - param_3))
        goto LAB_146bda75f;
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != 0x58);
      lVar5 = 0x10;
      do {
        dVar7 = *(double *)((longlong)local_198 + lVar5 + 8);
        local_1d8 = dVar9 * dVar7 + *(double *)((longlong)local_198 + lVar5) * -dVar2;
        dVar11 = *(double *)((longlong)local_198 + lVar5 + 0x10);
        uStack_1e0 = dVar11 * -dVar9 + dVar1 * *(double *)((longlong)local_198 + lVar5);
        dVar7 = dVar11 * dVar2 + dVar7 * -dVar1;
        dVar11 = SQRT(local_1d8 * local_1d8 + dVar7 * dVar7 + uStack_1e0 * uStack_1e0);
        dVar14 = 1.0 / dVar11;
        if (0.0 < dVar11) {
          local_1d8 = local_1d8 * dVar14;
          uStack_1e0 = uStack_1e0 * dVar14;
        }
        else {
          local_1d8 = 0.0;
          uStack_1e0 = 0.0;
        }
        local_1e8 = -(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar7 * dVar14);
        FUN_146bdaf02(param_1,&local_1e8,&local_1f0,&local_1f8);
        FUN_146bdaf02(param_2,&local_1e8,&local_1a8,&local_1b0);
        if ((local_1f8 < local_1a8 - param_3) || (local_1b0 < local_1f0 - param_3))
        goto LAB_146bda75f;
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != 0x58);
      uVar4 = 1;
      goto LAB_146bda761;
    }
    dVar7 = dVar1 * dVar7 + dVar9 * dVar11 + dVar14 * dVar2;
    FUN_146bdaf02(param_1,&local_1c8,&local_1f0,&local_1f8);
    if ((local_1f0 - param_3 <= dVar7) && (dVar7 <= local_1f8 + param_3)) {
      lVar5 = 0;
      do {
        lVar6 = 0;
        do {
          FUN_146bdae34(&local_210,(longlong)local_138 + lVar6,local_198 + lVar5 * 3 + 2);
          local_1d8 = local_200;
          local_1e8 = CONCAT44(uStack_20c,local_210);
          uStack_1e0 = (double)CONCAT44(uStack_204,uStack_208);
          FUN_146bdaf02(param_1,&local_1e8,&local_1f0,&local_1f8);
          FUN_146bdaf02(param_2,&local_1e8,&local_1a8,&local_1b0);
          if ((local_1f8 < local_1a8 - param_3) || (local_1b0 < local_1f0 - param_3))
          goto LAB_146bda75f;
          lVar6 = lVar6 + 0x18;
        } while (lVar6 != 0x48);
        lVar5 = lVar5 + 1;
        uVar4 = 1;
      } while (lVar5 != 3);
      goto LAB_146bda761;
    }
  }
LAB_146bda75f:
  uVar4 = 0;
LAB_146bda761:
  if ((local_f0 ^ (ulonglong)local_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146bdae34 FUN_146bdae34 body=205 status=ok
// SIG undefined FUN_146bdae34(void)

void FUN_146bdae34(ulonglong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *param_2 * param_3[1] - *param_3 * param_2[1];
  dVar3 = *param_3 * param_2[2] - *param_2 * param_3[2];
  dVar4 = param_2[1] * param_3[2] - param_3[1] * param_2[2];
  dVar1 = SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3);
  dVar5 = 0.0;
  dVar6 = 1.0 / dVar1;
  if (0.0 < dVar1) {
    dVar2 = dVar2 * dVar6;
    dVar5 = dVar3 * dVar6;
  }
  else {
    dVar2 = 0.0;
  }
  *param_1 = -(ulonglong)(0.0 < dVar1) & (ulonglong)(dVar4 * dVar6);
  param_1[1] = (ulonglong)dVar5;
  param_1[2] = (ulonglong)dVar2;
  return;
}



// FUNCTION 146bdaf02 FUN_146bdaf02 body=176 status=ok
// SIG undefined FUN_146bdaf02(void)

void FUN_146bdaf02(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_2;
  dVar2 = param_2[1];
  dVar1 = param_2[2];
  dVar4 = param_1[2] * dVar1 + *param_1 * dVar3 + param_1[1] * dVar2;
  dVar5 = param_1[5] * dVar1 + param_1[3] * dVar3 + param_1[4] * dVar2;
  dVar2 = dVar1 * param_1[8] + dVar3 * param_1[6] + dVar2 * param_1[7];
  *param_3 = dVar4;
  *param_4 = dVar4;
  dVar3 = *param_3;
  if (dVar3 <= dVar5) {
    if (dVar4 < dVar5) {
      *param_4 = dVar5;
      dVar3 = *param_3;
    }
  }
  else {
    *param_3 = dVar5;
    dVar3 = dVar5;
  }
  if ((dVar2 < dVar3) || (param_3 = param_4, *param_4 <= dVar2 && dVar2 != *param_4)) {
    *param_3 = dVar2;
  }
  return;
}



// FUNCTION 146bdafb2 FUN_146bdafb2 body=2402 status=ok
// SIG undefined FUN_146bdafb2(void)

undefined8 FUN_146bdafb2(double *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_228 [40];
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188 [6];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138 [2];
  double local_128 [4];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)local_228;
  dVar12 = param_1[2];
  local_128[2] = param_1[5] - dVar12;
  dVar15 = *param_1;
  dVar17 = param_1[1];
  local_128[1] = param_1[4] - dVar17;
  local_128[0] = param_1[3] - dVar15;
  local_e8 = dVar12 - param_1[8];
  local_100 = param_1[8] - param_1[5];
  local_f0 = dVar17 - param_1[7];
  local_108 = param_1[7] - param_1[4];
  local_f8 = dVar15 - param_1[6];
  local_128[3] = param_1[6] - param_1[3];
  local_188[1] = local_128[0] * local_108 - local_128[3] * local_128[1];
  dVar2 = local_128[2] * local_128[3] - local_100 * local_128[0];
  dVar13 = local_128[1] * local_100 - local_108 * local_128[2];
  dVar4 = SQRT(local_188[1] * local_188[1] + dVar13 * dVar13 + dVar2 * dVar2);
  local_188[0] = 0.0;
  dVar3 = 1.0 / dVar4;
  local_190 = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar13 * dVar3));
  if (0.0 < dVar4) {
    local_188[1] = local_188[1] * dVar3;
    local_188[0] = dVar2 * dVar3;
  }
  else {
    local_188[1] = 0.0;
  }
  dVar15 = dVar12 * local_188[1] + dVar15 * local_190 + dVar17 * local_188[0];
  pdVar1 = param_1 + 9;
  FUN_146bdaf02(pdVar1,&local_190,&local_198,&local_1a0);
  dVar12 = param_1[0x12];
  if ((local_198 - dVar12 <= dVar15) && (dVar15 <= local_1a0 + dVar12)) {
    dVar15 = param_1[0xb];
    local_188[4] = param_1[0xe] - dVar15;
    dVar17 = param_1[9];
    dVar2 = param_1[10];
    local_188[3] = param_1[0xd] - dVar2;
    local_188[2] = param_1[0xc] - dVar17;
    local_150 = param_1[0x11] - param_1[0xe];
    local_158 = param_1[0x10] - param_1[0xd];
    local_188[5] = param_1[0xf] - param_1[0xc];
    local_148 = dVar17 - param_1[0xf];
    local_140 = dVar2 - param_1[0x10];
    local_138[0] = dVar15 - param_1[0x11];
    dVar3 = local_188[2] * local_158 - local_188[5] * local_188[3];
    dVar4 = local_188[4] * local_188[5] - local_150 * local_188[2];
    dVar13 = local_188[3] * local_150 - local_158 * local_188[4];
    dVar5 = SQRT(dVar3 * dVar3 + dVar13 * dVar13 + dVar4 * dVar4);
    dVar14 = 1.0 / dVar5;
    dVar13 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar13 * dVar14));
    if (0.0 < dVar5) {
      dVar3 = dVar3 * dVar14;
      dVar4 = dVar4 * dVar14;
    }
    else {
      dVar4 = 0.0;
      dVar3 = 0.0;
    }
    dVar16 = local_190 * dVar4 - dVar13 * local_188[0];
    dVar5 = local_188[1] * dVar13 - dVar3 * local_190;
    dVar14 = local_188[0] * dVar3 - local_188[1] * dVar4;
    dVar6 = SQRT(dVar16 * dVar16 + dVar14 * dVar14 + dVar5 * dVar5);
    dVar7 = 1.0 / dVar6;
    if (0.0 < dVar6) {
      dVar16 = dVar16 * dVar7;
      dVar5 = dVar5 * dVar7;
    }
    else {
      dVar16 = 0.0;
      dVar5 = 0.0;
    }
    dVar14 = (double)(-(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar14 * dVar7));
    local_1b8 = dVar13;
    local_1b0 = dVar4;
    local_1a8 = dVar3;
    if (dVar12 <= dVar16 * dVar16 + dVar14 * dVar14 + dVar5 * dVar5) {
      dVar12 = dVar3 * dVar15 + dVar13 * dVar17 + dVar2 * dVar4;
      FUN_146bdaf02(param_1,&local_1b8,&local_1e0,&local_1e8);
      if ((local_1e0 - param_1[0x12] <= dVar12) && (dVar12 <= param_1[0x12] + local_1e8)) {
        lVar10 = 0;
        do {
          lVar11 = 0;
          do {
            FUN_146bdae34(&local_200,(longlong)local_128 + lVar11,local_188 + lVar10 * 3 + 2);
            local_1c8 = local_1f0;
            local_1d8 = CONCAT44(uStack_1fc,local_200);
            uStack_1d0 = (double)CONCAT44(uStack_1f4,uStack_1f8);
            FUN_146bdaf02(param_1,&local_1d8,&local_1e0,&local_1e8);
            FUN_146bdaf02(pdVar1,&local_1d8,&local_198,&local_1a0);
            if ((local_1e8 < local_198 - param_1[0x12]) || (local_1a0 < local_1e0 - param_1[0x12]))
            goto LAB_146bdb20e;
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != 0x48);
          lVar10 = lVar10 + 1;
          uVar8 = 7;
        } while (lVar10 != 3);
        goto LAB_146bdb7d1;
      }
    }
    else if (*(char *)(param_1 + 0x13) == '\x01') {
      lVar10 = 0x10;
      do {
        dVar12 = *(double *)((longlong)local_138 + lVar10 + 8);
        local_1c8 = local_190 * dVar12 - *(double *)((longlong)local_138 + lVar10) * local_188[0];
        uStack_1d0 = *(double *)((longlong)local_138 + lVar10) * local_188[1] -
                     local_190 * *(double *)((longlong)local_128 + lVar10);
        dVar12 = local_188[0] * *(double *)((longlong)local_128 + lVar10) - dVar12 * local_188[1];
        dVar15 = SQRT(local_1c8 * local_1c8 + dVar12 * dVar12 + uStack_1d0 * uStack_1d0);
        dVar17 = 1.0 / dVar15;
        if (0.0 < dVar15) {
          local_1c8 = local_1c8 * dVar17;
          uStack_1d0 = uStack_1d0 * dVar17;
        }
        else {
          local_1c8 = 0.0;
          uStack_1d0 = 0.0;
        }
        local_1d8 = -(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar12 * dVar17);
        FUN_146bdaf02(param_1,&local_1d8,&local_1e0,&local_1e8);
        FUN_146bdaf02(pdVar1,&local_1d8,&local_198,&local_1a0);
        if ((local_1e8 < local_198 - param_1[0x12]) || (local_1a0 < local_1e0 - param_1[0x12]))
        goto LAB_146bdb20e;
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != 0x58);
      lVar10 = 0x10;
      do {
        dVar12 = *(double *)((longlong)local_188 + lVar10 + 8);
        local_1c8 = dVar13 * dVar12 + *(double *)((longlong)local_188 + lVar10) * -dVar4;
        dVar15 = *(double *)((longlong)local_188 + lVar10 + 0x10);
        uStack_1d0 = dVar15 * -dVar13 + dVar3 * *(double *)((longlong)local_188 + lVar10);
        dVar12 = dVar15 * dVar4 + dVar12 * -dVar3;
        dVar15 = SQRT(local_1c8 * local_1c8 + dVar12 * dVar12 + uStack_1d0 * uStack_1d0);
        dVar17 = 1.0 / dVar15;
        if (0.0 < dVar15) {
          local_1c8 = local_1c8 * dVar17;
          uStack_1d0 = uStack_1d0 * dVar17;
        }
        else {
          local_1c8 = 0.0;
          uStack_1d0 = 0.0;
        }
        local_1d8 = -(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar12 * dVar17);
        FUN_146bdaf02(param_1,&local_1d8,&local_1e0,&local_1e8);
        FUN_146bdaf02(pdVar1,&local_1d8,&local_198,&local_1a0);
        if ((local_1e8 < local_198 - param_1[0x12]) || (local_1a0 < local_1e0 - param_1[0x12]))
        goto LAB_146bdb20e;
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != 0x58);
      uVar8 = 5;
LAB_146bdb7d1:
      *(undefined4 *)(param_1 + 0x14) = uVar8;
      uVar9 = 1;
      goto LAB_146bdb210;
    }
  }
LAB_146bdb20e:
  uVar9 = 0;
LAB_146bdb210:
  if ((local_e0 ^ (ulonglong)local_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 146bdb916 FUN_146bdb916 body=1674 status=ok
// SIG undefined FUN_146bdb916(void)

ulonglong FUN_146bdb916(double *param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  undefined7 uVar8;
  int iVar9;
  double *pdVar10;
  int *piVar11;
  double *pdVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_238 [32];
  double *local_218;
  double *local_210;
  double local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  int local_1c4 [3];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198 [9];
  double local_150 [9];
  double local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined1 auStack_f0 [144];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(int *)((longlong)param_1 + 0x9c) != 2);
    goto LAB_146bdb963;
  }
  *(undefined4 *)((longlong)param_1 + 0x9c) = 2;
  FUN_146baf581(&local_1b8,param_1,param_1 + 3,param_1 + 6);
  local_1a0 = param_1[2] * local_1a8 + *param_1 * local_1b8 + param_1[1] * local_1b0;
  if ((((local_1b8 != DAT_14c8464e0) || (NAN(local_1b8) || NAN(DAT_14c8464e0))) ||
      (local_1b0 != DAT_14c8464e8)) || (NAN(local_1b0) || NAN(DAT_14c8464e8))) {
LAB_146bdba2c:
    local_1c4[0] = -1;
    local_1c4[1] = -1;
    local_1c4[2] = 0xffffffff;
    dVar1 = param_1[0x12];
    pdVar12 = param_1 + 0xb;
    lVar13 = 0;
    iVar2 = 0;
    iVar6 = 0;
    iVar9 = 0;
    do {
      dVar14 = (*pdVar12 * local_1a8 + pdVar12[-2] * local_1b8 + pdVar12[-1] * local_1b0) -
               local_1a0;
      local_198[lVar13] = dVar14;
      if (dVar14 <= dVar1) {
        if (-dVar1 <= dVar14) {
          local_1c4[lVar13] = 0;
          iVar9 = iVar9 + 1;
        }
        else {
          local_1c4[lVar13] = -1;
          iVar6 = iVar6 + 1;
        }
      }
      else {
        local_1c4[lVar13] = 1;
        iVar2 = iVar2 + 1;
      }
      lVar13 = lVar13 + 1;
      pdVar12 = pdVar12 + 3;
    } while (lVar13 != 3);
    if (iVar6 != 3 && iVar2 != 3) {
      if (iVar9 == 3) {
        if (*(char *)(param_1 + 0x13) == '\x01') {
          uVar3 = FUN_146bdbfa2(param_1,&local_1b8,param_1);
LAB_146bdbb10:
          uVar7 = (ulonglong)uVar3;
          goto LAB_146bdb963;
        }
      }
      else {
        uVar8 = (undefined7)((ulonglong)&local_1b8 >> 8);
        if (iVar6 == 0 || iVar2 == 0) {
          if (iVar9 == 2) {
            lVar13 = 0;
            do {
              if (local_1c4[lVar13] != 0) {
                lVar4 = 0;
                if (lVar13 != 2) {
                  lVar4 = lVar13 + 1;
                }
                uVar7 = 2;
                if (lVar13 != 0) {
                  uVar7 = (ulonglong)((int)lVar13 - 1);
                }
                local_218 = param_1 + 0x15;
                local_210 = param_1 + 0x18;
                local_208 = dVar1;
                iVar2 = FUN_146bdcc84(&local_1b8,param_1,param_1 + uVar7 * 3 + 9,
                                      param_1 + lVar4 * 3 + 9);
                *(int *)((longlong)param_1 + 0xa4) = iVar2;
                if (iVar2 < 1) {
                  *(undefined8 *)((longlong)param_1 + 0x9c) = 2;
                  goto LAB_146bdbae8;
                }
                *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
                *(uint *)(param_1 + 0x14) = (iVar2 == 2) + 1;
                uVar7 = CONCAT71(uVar8,1);
                goto LAB_146bdb963;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != 3);
          }
          else {
            lVar13 = -0x48;
            piVar11 = local_1c4;
            do {
              if (*piVar11 == 0) {
                uVar3 = FUN_146bdc43e(param_1,param_1,&local_1b8,(longlong)param_1 - lVar13);
                goto LAB_146bdbb10;
              }
              lVar13 = lVar13 + -0x18;
              piVar11 = piVar11 + 1;
            } while (lVar13 != -0x90);
          }
        }
        if (iVar9 == 0) {
          pdVar12 = param_1 + 0xb;
          lVar13 = 0;
          do {
            if (local_1c4[lVar13] == (uint)(iVar2 == 1) * 2 + -1) {
              uVar7 = 2;
              if (lVar13 != 0) {
                uVar7 = (ulonglong)((int)lVar13 - 1);
              }
              dVar14 = local_198[lVar13];
              dVar15 = dVar14 / (dVar14 - local_198[uVar7]);
              local_1e8 = *pdVar12;
              local_1f8 = pdVar12[-2];
              local_1f0 = pdVar12[-1];
              local_1d0 = (param_1[uVar7 * 3 + 0xb] - local_1e8) * dVar15 + local_1e8;
              local_1d8 = (param_1[uVar7 * 3 + 10] - local_1f0) * dVar15 + local_1f0;
              local_1e0 = (param_1[uVar7 * 3 + 9] - local_1f8) * dVar15 + local_1f8;
              pdVar12 = &local_1e0;
              lVar4 = 0;
              if (lVar13 != 2) {
                lVar4 = lVar13 + 1;
              }
              dVar14 = dVar14 / (dVar14 - local_198[lVar4]);
              local_1e8 = (param_1[lVar4 * 3 + 0xb] - local_1e8) * dVar14 + local_1e8;
              local_1f0 = (param_1[lVar4 * 3 + 10] - local_1f0) * dVar14 + local_1f0;
              local_1f8 = (param_1[lVar4 * 3 + 9] - local_1f8) * dVar14 + local_1f8;
              goto LAB_146bdbd68;
            }
            lVar13 = lVar13 + 1;
            pdVar12 = pdVar12 + 3;
          } while (lVar13 != 3);
        }
        lVar13 = -0x48;
        lVar4 = 0;
        do {
          if (local_1c4[lVar4] == 0) {
            uVar7 = 2;
            if (lVar4 != 0) {
              uVar7 = (ulonglong)((int)lVar4 - 1);
            }
            lVar5 = 0;
            if (lVar4 != 2) {
              lVar5 = lVar4 + 1;
            }
            dVar14 = local_198[uVar7] / (local_198[uVar7] - local_198[lVar5]);
            local_1d0 = (param_1[lVar5 * 3 + 0xb] - param_1[uVar7 * 3 + 0xb]) * dVar14 +
                        param_1[uVar7 * 3 + 0xb];
            local_1d8 = (param_1[lVar5 * 3 + 10] - param_1[uVar7 * 3 + 10]) * dVar14 +
                        param_1[uVar7 * 3 + 10];
            local_1e0 = (param_1[lVar5 * 3 + 9] - param_1[uVar7 * 3 + 9]) * dVar14 +
                        param_1[uVar7 * 3 + 9];
            pdVar12 = (double *)((longlong)param_1 - lVar13);
LAB_146bdbd68:
            iVar9 = 0;
            local_218 = param_1 + 0x15;
            local_210 = param_1 + 0x18;
            local_208 = dVar1;
            iVar2 = FUN_146bdcc84(&local_1b8,param_1,pdVar12);
            *(int *)((longlong)param_1 + 0xa4) = iVar2;
            if (iVar2 < 1) {
              *(undefined4 *)((longlong)param_1 + 0x9c) = 2;
              uVar7 = 0;
            }
            else {
              *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
              iVar9 = (iVar2 == 2) + 1;
              uVar7 = CONCAT71(uVar8,1);
            }
            *(int *)(param_1 + 0x14) = iVar9;
            goto LAB_146bdb963;
          }
          lVar4 = lVar4 + 1;
          lVar13 = lVar13 + -0x18;
        } while (lVar4 != 3);
      }
    }
  }
  else {
    if ((local_1a8 != DAT_14c8464f0) || (NAN(local_1a8) || NAN(DAT_14c8464f0))) goto LAB_146bdba2c;
    FUN_146baf581(local_198,param_1 + 9,param_1 + 0xc,param_1 + 0xf);
    if (((local_198[0] != DAT_14c8464e0) || (NAN(local_198[0]) || NAN(DAT_14c8464e0))) ||
       ((local_198[1] != DAT_14c8464e8 || (NAN(local_198[1]) || NAN(DAT_14c8464e8))))) {
LAB_146bdbc24:
      local_fc = 0;
      local_f4 = 0;
      pdVar12 = param_1 + 9;
      pdVar10 = local_198;
      for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar10 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar10 = pdVar10 + 1;
      }
      pdVar12 = param_1;
      pdVar10 = local_150;
      for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar10 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar10 = pdVar10 + 1;
      }
      local_108 = param_1[0x12];
      local_100 = *(undefined1 *)(param_1 + 0x13);
      uVar3 = FUN_146bdb916(local_198);
      uVar7 = (ulonglong)uVar3;
      *(undefined4 *)((longlong)param_1 + 0x9c) = (undefined4)local_fc;
      *(undefined4 *)(param_1 + 0x14) = local_fc._4_4_;
      *(undefined4 *)((longlong)param_1 + 0xa4) = local_f4;
      memcpy(param_1 + 0x15,auStack_f0,0x90);
      goto LAB_146bdb963;
    }
    if ((local_198[2] != DAT_14c8464f0) || (NAN(local_198[2]) || NAN(DAT_14c8464f0)))
    goto LAB_146bdbc24;
  }
LAB_146bdbae8:
  uVar7 = 0;
LAB_146bdb963:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146bdbfa2 FUN_146bdbfa2 body=1179 status=ok
// SIG undefined FUN_146bdbfa2(void)

void FUN_146bdbfa2(longlong param_1,double *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  double *pdVar15;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  undefined4 local_130;
  double adStack_128 [12];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar7 = ABS(*param_2);
  dVar8 = ABS(param_2[1]);
  dVar3 = dVar8;
  if (dVar8 <= dVar7) {
    dVar3 = dVar7;
  }
  dVar6 = ABS(param_2[2]);
  if (dVar3 < dVar6 || dVar7 < dVar8) {
    if ((dVar8 <= dVar7) || (dVar3 < dVar6)) {
      lVar12 = 8;
      lVar13 = 0;
      do {
        uVar2 = ((undefined8 *)(param_3 + lVar13))[1];
        *(undefined8 *)((longlong)local_90 + lVar12 + -8) = *(undefined8 *)(param_3 + lVar13);
        *(undefined8 *)((longlong)local_90 + lVar12) = uVar2;
        uVar2 = ((undefined8 *)(param_4 + lVar13))[1];
        *(undefined8 *)((longlong)&uStack_c8 + lVar12) = *(undefined8 *)(param_4 + lVar13);
        *(undefined8 *)((longlong)&local_c0 + lVar12) = uVar2;
        lVar12 = lVar12 + 0x10;
        lVar13 = lVar13 + 0x18;
      } while (lVar12 != 0x38);
    }
    else {
      lVar12 = 8;
      lVar13 = 0;
      do {
        uVar2 = *(undefined8 *)(param_3 + 0x10 + lVar13);
        *(undefined8 *)((longlong)local_90 + lVar12 + -8) = *(undefined8 *)(param_3 + lVar13);
        *(undefined8 *)((longlong)local_90 + lVar12) = uVar2;
        uVar2 = *(undefined8 *)(param_4 + 0x10 + lVar13);
        *(undefined8 *)((longlong)&uStack_c8 + lVar12) = *(undefined8 *)(param_4 + lVar13);
        *(undefined8 *)((longlong)&local_c0 + lVar12) = uVar2;
        lVar12 = lVar12 + 0x10;
        lVar13 = lVar13 + 0x18;
      } while (lVar12 != 0x38);
    }
  }
  else {
    lVar12 = 8;
    lVar13 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + 8 + lVar13);
      uVar2 = puVar1[1];
      *(undefined8 *)((longlong)local_90 + lVar12 + -8) = *puVar1;
      *(undefined8 *)((longlong)local_90 + lVar12) = uVar2;
      puVar1 = (undefined8 *)(param_4 + 8 + lVar13);
      uVar2 = puVar1[1];
      *(undefined8 *)((longlong)&uStack_c8 + lVar12) = *puVar1;
      *(undefined8 *)((longlong)&local_c0 + lVar12) = uVar2;
      lVar12 = lVar12 + 0x10;
      lVar13 = lVar13 + 0x18;
    } while (lVar12 != 0x38);
  }
  dVar10 = local_90[3];
  dVar9 = local_90[2];
  dVar5 = uStack_a8;
  dVar4 = local_b0;
  if ((local_90[5] - local_90[1]) * (local_90[2] - local_90[0]) -
      (local_90[4] - local_90[0]) * (local_90[3] - local_90[1]) < 0.0) {
    local_1a8 = local_90[2];
    dStack_1a0 = local_90[3];
    local_90[2] = local_90[4];
    local_90[3] = local_90[5];
    local_90[4] = dVar9;
    local_90[5] = dVar10;
  }
  if ((uStack_98 - (double)CONCAT44(uStack_b4,uStack_b8)) *
      (local_b0 - (double)CONCAT44(local_c0._4_4_,(undefined4)local_c0)) -
      (local_a0 - (double)CONCAT44(local_c0._4_4_,(undefined4)local_c0)) *
      (uStack_a8 - (double)CONCAT44(uStack_b4,uStack_b8)) < 0.0) {
    local_1a8 = local_b0;
    dStack_1a0 = uStack_a8;
    local_b0 = local_a0;
    uStack_a8 = uStack_98;
    local_a0 = dVar4;
    uStack_98 = dVar5;
  }
  local_178 = local_90[4];
  dStack_170 = local_90[5];
  local_188 = local_90[2];
  dStack_180 = local_90[3];
  local_198 = local_90[0];
  dStack_190 = local_90[1];
  local_168 = (undefined4)local_c0;
  uStack_164 = local_c0._4_4_;
  uStack_160 = uStack_b8;
  uStack_15c = uStack_b4;
  local_158 = (undefined4)local_b0;
  uStack_154 = local_b0._4_4_;
  uStack_150 = (undefined4)uStack_a8;
  uStack_14c = uStack_a8._4_4_;
  local_148 = (undefined4)local_a0;
  uStack_144 = local_a0._4_4_;
  uStack_140 = (undefined4)uStack_98;
  uStack_13c = uStack_98._4_4_;
  local_138 = 0;
  local_130 = 0;
  cVar11 = FUN_146bdc70c();
  if (cVar11 != '\0') {
    uVar14 = local_138 & 0xffffffff;
    *(int *)(param_1 + 0xa4) = (int)local_138;
    if (dVar3 < dVar6 || dVar7 < dVar8) {
      if ((dVar8 <= dVar7) || (dVar3 < dVar6)) {
        if (0 < (int)local_138) {
          dVar7 = param_2[2];
          pdVar15 = (double *)(param_1 + 0xb8);
          lVar12 = 0;
          do {
            dVar8 = *(double *)((longlong)adStack_128 + lVar12);
            dVar3 = *(double *)((longlong)adStack_128 + lVar12 + 8);
            dVar6 = param_2[3];
            dVar4 = *param_2;
            dVar5 = param_2[1];
            pdVar15[-2] = dVar8;
            pdVar15[-1] = dVar3;
            *pdVar15 = ((dVar6 - dVar4 * dVar8) - dVar5 * dVar3) * (1.0 / dVar7);
            lVar12 = lVar12 + 0x10;
            pdVar15 = pdVar15 + 3;
          } while (uVar14 << 4 != lVar12);
        }
      }
      else if (0 < (int)local_138) {
        dVar7 = param_2[1];
        pdVar15 = (double *)(param_1 + 0xb8);
        lVar12 = 0;
        do {
          dVar8 = *(double *)((longlong)adStack_128 + lVar12);
          dVar3 = *(double *)((longlong)adStack_128 + lVar12 + 8);
          dVar6 = param_2[3];
          dVar4 = *param_2;
          dVar5 = param_2[2];
          pdVar15[-2] = dVar8;
          pdVar15[-1] = ((dVar6 - dVar4 * dVar8) - dVar5 * dVar3) * (1.0 / dVar7);
          *pdVar15 = dVar3;
          lVar12 = lVar12 + 0x10;
          pdVar15 = pdVar15 + 3;
        } while (uVar14 << 4 != lVar12);
      }
    }
    else if (0 < (int)local_138) {
      dVar7 = *param_2;
      pdVar15 = (double *)(param_1 + 0xb8);
      lVar12 = 0;
      do {
        dVar8 = *(double *)((longlong)adStack_128 + lVar12);
        dVar3 = *(double *)((longlong)adStack_128 + lVar12 + 8);
        pdVar15[-2] = ((param_2[3] - param_2[1] * dVar8) - param_2[2] * dVar3) * (1.0 / dVar7);
        pdVar15[-1] = dVar8;
        *pdVar15 = dVar3;
        lVar12 = lVar12 + 0x10;
        pdVar15 = pdVar15 + 3;
      } while (uVar14 << 4 != lVar12);
    }
    *(undefined8 *)(param_1 + 0x9c) = 0x400000001;
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bdc43e FUN_146bdc43e body=716 status=ok
// SIG undefined FUN_146bdc43e(void)

bool FUN_146bdc43e(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146bb5db8(param_3,&local_110,&local_128);
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  local_130 = local_118 * (param_4[2] - dVar1) +
              local_128 * (*param_4 - dVar2) + (param_4[1] - dVar3) * local_120;
  local_138 = (param_4[2] - dVar1) * local_100 +
              (*param_4 - dVar2) * local_110 + (param_4[1] - dVar3) * local_108;
  local_d0 = local_118 * (param_2[8] - dVar1) +
             local_128 * (param_2[6] - dVar2) + (param_2[7] - dVar3) * local_120;
  local_d8 = (param_2[8] - dVar1) * local_100 +
             (param_2[6] - dVar2) * local_110 + (param_2[7] - dVar3) * local_108;
  local_e0 = local_118 * (param_2[5] - dVar1) +
             local_128 * (param_2[3] - dVar2) + local_120 * (param_2[4] - dVar3);
  local_e8 = (param_2[5] - dVar1) * local_100 +
             (param_2[3] - dVar2) * local_110 + (param_2[4] - dVar3) * local_108;
  local_f8 = (undefined4)DAT_14c8463f0;
  uStack_f4 = DAT_14c8463f0._4_4_;
  uStack_f0 = (undefined4)DAT_14c8463f8;
  uStack_ec = DAT_14c8463f8._4_4_;
  local_148 = 0;
  iVar4 = FUN_146bdd7c0(&local_f8);
  if (iVar4 < 1) {
    *(undefined1 **)(param_1 + 0x9c) = &DAT_100000001;
    *(undefined4 *)(param_1 + 0xa4) = 1;
    dVar1 = param_4[1];
    *(double *)(param_1 + 0xa8) = *param_4;
    *(double *)(param_1 + 0xb0) = dVar1;
    *(double *)(param_1 + 0xb8) = param_4[2];
  }
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return iVar4 < 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdc70c FUN_146bdc70c body=284 status=ok
// SIG undefined FUN_146bdc70c(void)

bool FUN_146bdc70c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    lVar6 = -0x30;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x60 + lVar6);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0xa0 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0);
    pdVar10 = (double *)(param_1 + 8);
    lVar6 = 0;
    lVar9 = 2;
    do {
      lVar8 = lVar6;
      dVar3 = *(double *)(param_1 + lVar9 * 0x10);
      dVar4 = *(double *)(param_1 + 8 + lVar9 * 0x10);
      local_40 = pdVar10[-1] - dVar3;
      local_48 = dVar4 - *pdVar10;
      FUN_146bdc82a(&local_48,local_48 * dVar3 + local_40 * dVar4,param_1 + 0x60,param_1 + 0x70);
      iVar7 = *(int *)(param_1 + 0x60);
      if (iVar7 == 0) {
        bVar11 = false;
      }
      else if ((iVar7 == 2) || (iVar7 == 1)) {
        bVar11 = true;
      }
      else {
        bVar11 = true;
        iVar7 = 4;
      }
      *(int *)(param_1 + 0x68) = iVar7;
      lVar6 = lVar8 + 1;
      pdVar10 = pdVar10 + 2;
      lVar9 = lVar8;
    } while (lVar6 != 3);
    *(uint *)(param_1 + 100) = 2 - (uint)bVar11;
  }
  else {
    bVar11 = *(int *)(param_1 + 100) == 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdc82a FUN_146bdc82a body=1113 status=ok
// SIG undefined FUN_146bdc82a(void)

void FUN_146bdc82a(double *param_1,double param_2,uint *param_3,double *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_d8 [32];
  double local_b8 [11];
  double adStack_60 [7];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_d8;
  uVar3 = *param_3;
  uVar6 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    dVar14 = *param_1;
    dVar15 = param_1[1];
    pdVar5 = param_4 + 1;
    uVar9 = 0;
    uVar4 = 0xffffffff;
    iVar11 = 0;
    iVar8 = 0;
    do {
      dVar16 = (pdVar5[-1] * dVar14 + *pdVar5 * dVar15) - param_2;
      adStack_60[uVar9 + 1] = dVar16;
      if (dVar16 <= 0.0) {
        if (dVar16 < 0.0) {
          iVar11 = iVar11 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 1;
        if ((int)uVar4 < 0) {
          uVar4 = (uint)uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      pdVar5 = pdVar5 + 2;
    } while (uVar6 != uVar9);
    if (0 < iVar8) {
      if (iVar11 < 1) goto LAB_146bdc9a1;
      if ((int)uVar4 < 1) {
        pdVar5 = local_b8;
        uVar9 = 0;
        pdVar10 = param_4;
        do {
          if (adStack_60[uVar9 + 1] <= 0.0) {
            uVar6 = uVar9;
            uVar4 = (uint)uVar9;
            break;
          }
          uVar9 = uVar9 + 1;
          dVar14 = pdVar10[1];
          *pdVar5 = *pdVar10;
          pdVar5[1] = dVar14;
          pdVar5 = pdVar5 + 2;
          pdVar10 = pdVar10 + 2;
          uVar4 = uVar3;
        } while (uVar6 != uVar9);
        lVar7 = (longlong)(int)uVar4 + -1;
        dVar16 = adStack_60[uVar6 + 1] / (adStack_60[uVar6 + 1] - adStack_60[(int)uVar4]);
        dVar14 = param_4[lVar7 * 2 + 1];
        dVar15 = param_4[uVar6 * 2 + 1];
        uVar12 = uVar4 + 1;
        local_b8[uVar6 * 2] =
             (param_4[lVar7 * 2] - param_4[uVar6 * 2]) * dVar16 + param_4[uVar6 * 2];
        local_b8[uVar6 * 2 + 1] = (dVar14 - dVar15) * dVar16 + dVar15;
        if ((int)uVar4 < (int)uVar3) {
          lVar7 = uVar6 * 8;
          do {
            if (0.0 < adStack_60[uVar6 + 1]) {
              uVar9 = uVar6 & 0xffffffff;
              lVar13 = (uVar6 << 0x20) + -0x100000000;
              dVar16 = adStack_60[uVar9 + 1] /
                       (adStack_60[uVar9 + 1] -
                       *(double *)((longlong)adStack_60 + (lVar13 >> 0x1d) + 8));
              lVar13 = lVar13 >> 0x1c;
              dVar14 = *(double *)((longlong)param_4 + lVar13 + 8);
              dVar15 = param_4[uVar9 * 2 + 1];
              uVar4 = uVar4 + 2;
              local_b8[(ulonglong)uVar12 * 2] =
                   (*(double *)((longlong)param_4 + lVar13) - param_4[uVar9 * 2]) * dVar16 +
                   param_4[uVar9 * 2];
              local_b8[(ulonglong)uVar12 * 2 + 1] = (dVar14 - dVar15) * dVar16 + dVar15;
              if ((int)uVar3 <= (int)uVar6) goto LAB_146bdca84;
              uVar9 = (ulonglong)uVar4;
              pdVar5 = local_b8 + uVar9 * 2;
              goto LAB_146bdcc4f;
            }
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          } while ((int)uVar6 < (int)uVar3);
        }
        uVar6 = (ulonglong)(uVar3 - 1);
        dVar14 = adStack_60[1] / (adStack_60[1] - adStack_60[uVar6 + 1]);
        dVar15 = (param_4[uVar6 * 2 + 1] - param_4[1]) * dVar14 + param_4[1];
        dVar14 = (param_4[uVar6 * 2] - *param_4) * dVar14 + *param_4;
        uVar4 = uVar4 + 2;
        uVar6 = (ulonglong)uVar12;
      }
      else {
        uVar6 = (ulonglong)(uVar4 - 1);
        uVar9 = (ulonglong)uVar4;
        dVar14 = adStack_60[uVar9 + 1] / (adStack_60[uVar9 + 1] - adStack_60[uVar6 + 1]);
        local_b8[1] = (param_4[uVar6 * 2 + 1] - param_4[uVar9 * 2 + 1]) * dVar14 +
                      param_4[uVar9 * 2 + 1];
        local_b8[0] = (param_4[uVar6 * 2] - param_4[uVar9 * 2]) * dVar14 + param_4[uVar9 * 2];
        if ((int)uVar4 < (int)uVar3) {
          uVar6 = (ulonglong)((uVar3 - uVar4) + 1);
          lVar13 = 0;
          lVar7 = 0;
          do {
            if (adStack_60[uVar9 + lVar7 + 1] <= 0.0) {
              uVar4 = uVar4 + (int)lVar7;
              uVar9 = (ulonglong)uVar4;
              uVar6 = (ulonglong)((int)lVar7 + 1);
              goto LAB_146bdca14;
            }
            puVar1 = (undefined8 *)((longlong)param_4 + lVar13 + uVar9 * 0x10);
            uVar2 = puVar1[1];
            *(undefined8 *)((longlong)local_b8 + lVar13 + 0x10) = *puVar1;
            *(undefined8 *)((longlong)local_b8 + lVar13 + 0x18) = uVar2;
            lVar7 = lVar7 + 1;
            lVar13 = lVar13 + 0x10;
          } while (uVar6 - 1 != lVar7);
          uVar9 = 0;
          uVar4 = uVar3;
        }
        else {
          uVar6 = 1;
          uVar9 = 0;
        }
LAB_146bdca14:
        if ((int)uVar4 < (int)uVar3) {
          uVar3 = uVar4;
        }
        lVar7 = (longlong)(int)uVar3 + -1;
        dVar14 = adStack_60[uVar9 + 1] / (adStack_60[uVar9 + 1] - adStack_60[(int)uVar3]);
        dVar15 = (param_4[lVar7 * 2 + 1] - param_4[uVar9 * 2 + 1]) * dVar14 + param_4[uVar9 * 2 + 1]
        ;
        dVar14 = (param_4[lVar7 * 2] - param_4[uVar9 * 2]) * dVar14 + param_4[uVar9 * 2];
        uVar4 = (int)uVar6 + 1;
      }
      local_b8[uVar6 * 2] = dVar14;
      local_b8[uVar6 * 2 + 1] = dVar15;
      goto LAB_146bdca84;
    }
  }
  *param_3 = 0;
  goto LAB_146bdc9a1;
  while( true ) {
    uVar9 = uVar9 + 1;
    uVar4 = (uint)uVar9;
    pdVar10 = (double *)((longlong)param_4 + lVar7 * 2);
    dVar14 = pdVar10[1];
    *pdVar5 = *pdVar10;
    pdVar5[1] = dVar14;
    pdVar5 = pdVar5 + 2;
    lVar7 = lVar7 + 8;
    uVar12 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar12;
    if ((int)uVar3 <= (int)uVar12) break;
LAB_146bdcc4f:
    uVar4 = (uint)uVar9;
    if (*(double *)((longlong)adStack_60 + lVar7 + 8) <= 0.0) break;
  }
LAB_146bdca84:
  *param_3 = uVar4;
  if (0 < (int)uVar4) {
    memcpy(param_4,local_b8,(ulonglong)uVar4 << 4);
  }
LAB_146bdc9a1:
  if ((local_28 ^ (ulonglong)local_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bdcc84 FUN_146bdcc84 body=1119 status=ok
// SIG undefined FUN_146bdcc84(void)

int FUN_146bdcc84(double *param_1,longlong param_2,double *param_3,double *param_4,longlong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  undefined8 *puVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined1 auStack_1b8 [32];
  longlong local_198 [2];
  double local_188 [5];
  double local_160;
  double local_158;
  double local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int local_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong auStack_d8 [25];
  
  auStack_d8[7] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar5 = ABS(*param_1);
  dVar6 = ABS(param_1[1]);
  dVar2 = dVar6;
  if (dVar6 <= dVar5) {
    dVar2 = dVar5;
  }
  dVar4 = ABS(param_1[2]);
  if (dVar2 < dVar4 || dVar5 < dVar6) {
    pdVar13 = param_4;
    if ((dVar6 <= dVar5) || (dVar2 < dVar4)) {
      puVar12 = (undefined8 *)(param_2 + 8);
      lVar10 = 8;
      do {
        uVar1 = *puVar12;
        *(undefined8 *)((longlong)auStack_d8 + lVar10) = puVar12[-1];
        *(undefined8 *)((longlong)auStack_d8 + lVar10 + 8) = uVar1;
        lVar10 = lVar10 + 0x10;
        puVar12 = puVar12 + 3;
      } while (lVar10 != 0x38);
      pdVar11 = param_3 + 1;
      lVar10 = 8;
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x10);
      lVar10 = 8;
      do {
        uVar1 = *puVar12;
        *(undefined8 *)((longlong)auStack_d8 + lVar10) = puVar12[-2];
        *(undefined8 *)((longlong)auStack_d8 + lVar10 + 8) = uVar1;
        lVar10 = lVar10 + 0x10;
        puVar12 = puVar12 + 3;
      } while (lVar10 != 0x38);
      pdVar11 = param_3 + 2;
      lVar10 = 0x10;
    }
  }
  else {
    puVar12 = (undefined8 *)(param_2 + 0x10);
    lVar10 = 8;
    do {
      uVar1 = *puVar12;
      *(undefined8 *)((longlong)auStack_d8 + lVar10) = puVar12[-1];
      *(undefined8 *)((longlong)auStack_d8 + lVar10 + 8) = uVar1;
      lVar10 = lVar10 + 0x10;
      puVar12 = puVar12 + 3;
    } while (lVar10 != 0x38);
    pdVar11 = param_3 + 2;
    lVar10 = 0x10;
    pdVar13 = param_4 + 1;
    param_3 = param_3 + 1;
  }
  local_160 = (*pdVar11 + *(double *)((longlong)param_4 + lVar10)) * 0.5;
  local_188[4] = (*param_3 + *pdVar13) * 0.5;
  local_150 = *(double *)((longlong)param_4 + lVar10) - *pdVar11;
  local_158 = *pdVar13 - *param_3;
  dVar7 = SQRT(local_158 * local_158 + local_150 * local_150);
  if (0.0 < dVar7) {
    local_158 = local_158 * (1.0 / dVar7);
    local_150 = local_150 * (1.0 / dVar7);
  }
  else {
    local_158 = 0.0;
    local_150 = 0.0;
  }
  local_148 = -(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar7 * 0.5);
  local_140 = auStack_d8[1];
  uStack_138 = auStack_d8[2];
  local_130 = auStack_d8[3];
  uStack_128 = auStack_d8[4];
  local_120 = auStack_d8[5];
  uStack_118 = auStack_d8[6];
  local_110 = 0;
  local_108 = 0;
  cVar8 = FUN_146bdd0e4(local_188 + 4,param_7);
  iVar9 = 0;
  if (cVar8 != '\0') {
    local_188[0] = local_100;
    local_188[1] = (double)uStack_f8;
    iVar9 = 1;
    if (local_108 == 2) {
      local_188[2] = (double)local_f0;
      local_188[3] = (double)uStack_e8;
      iVar9 = 2;
    }
    local_198[0] = param_5;
    local_198[1] = param_6;
    if (dVar2 < dVar4 || dVar5 < dVar6) {
      if ((dVar6 <= dVar5) || (dVar2 < dVar4)) {
        dVar5 = param_1[2];
        uVar14 = 0;
        do {
          dVar6 = *(double *)((longlong)local_188 + uVar14 * 2);
          dVar2 = *(double *)((longlong)local_188 + uVar14 * 2 + 8);
          dVar4 = param_1[3];
          dVar7 = *param_1;
          dVar3 = param_1[1];
          pdVar13 = *(double **)((longlong)local_198 + uVar14);
          *pdVar13 = dVar6;
          pdVar13[1] = dVar2;
          pdVar13[2] = ((dVar4 - dVar7 * dVar6) - dVar3 * dVar2) * (1.0 / dVar5);
          uVar14 = uVar14 + 8;
        } while ((uint)(iVar9 << 3) != uVar14);
      }
      else {
        dVar5 = param_1[1];
        uVar14 = 0;
        do {
          dVar6 = *(double *)((longlong)local_188 + uVar14 * 2);
          dVar2 = *(double *)((longlong)local_188 + uVar14 * 2 + 8);
          dVar4 = param_1[3];
          dVar7 = *param_1;
          dVar3 = param_1[2];
          pdVar13 = *(double **)((longlong)local_198 + uVar14);
          *pdVar13 = dVar6;
          pdVar13[1] = ((dVar4 - dVar7 * dVar6) - dVar3 * dVar2) * (1.0 / dVar5);
          pdVar13[2] = dVar2;
          uVar14 = uVar14 + 8;
        } while ((uint)(iVar9 << 3) != uVar14);
      }
    }
    else {
      dVar5 = *param_1;
      uVar14 = 0;
      do {
        dVar6 = *(double *)((longlong)local_188 + uVar14 * 2);
        dVar2 = *(double *)((longlong)local_188 + uVar14 * 2 + 8);
        pdVar13 = *(double **)((longlong)local_198 + uVar14);
        *pdVar13 = ((param_1[3] - param_1[1] * dVar6) - param_1[2] * dVar2) * (1.0 / dVar5);
        pdVar13[1] = dVar6;
        pdVar13[2] = dVar2;
        uVar14 = uVar14 + 8;
      } while ((uint)(iVar9 * 8) != uVar14);
    }
  }
  if ((auStack_d8[7] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 146bdd0e4 FUN_146bdd0e4 body=1335 status=ok
// SIG undefined FUN_146bdd0e4(void)

undefined1 * FUN_146bdd0e4(double *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  double *local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d4;
  undefined4 local_cc;
  double local_c8 [3];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar5 = *(int *)((longlong)param_1 + 0x5c);
  if (iVar5 != 0) {
    puVar6 = (undefined1 *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),iVar5 == 1);
    goto LAB_146bdd15e;
  }
  if ((param_1[4] == 0.0) && (!NAN(param_1[4]))) {
    dVar14 = *param_1;
    dVar15 = param_1[1];
    lVar9 = 1;
    lVar10 = 0x30;
    uVar11 = 0;
    uVar7 = 0;
    dVar13 = param_1[9];
    uVar16 = SUB84(param_1[10],0);
    uVar17 = (int)((ulonglong)param_1[10] >> 0x20);
    do {
      dVar1 = *(double *)((longlong)param_1 + lVar10 + -8);
      dVar2 = *(double *)((longlong)param_1 + lVar10);
      dVar3 = dVar2 - (double)CONCAT44(uVar17,uVar16);
      dVar13 = dVar1 - dVar13;
      dVar4 = SQRT(dVar3 * dVar3 + dVar13 * dVar13);
      if (0.0 < dVar4) {
        dVar4 = 1.0 / dVar4;
        dVar3 = dVar3 * dVar4;
        dVar4 = dVar4 * -dVar13;
      }
      else {
        lVar12 = lVar9;
        if (lVar10 == 0x50) {
          lVar12 = 0;
        }
        dVar4 = param_1[lVar12 * 2 + 6] - dVar2;
        dVar3 = param_1[lVar12 * 2 + 5] - dVar1;
        dVar13 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
        if (dVar13 <= 0.0) {
          uVar11 = (uint)(param_2 * param_2 <
                         (dVar14 - param_1[5]) * (dVar14 - param_1[5]) +
                         (dVar15 - param_1[6]) * (dVar15 - param_1[6]));
          uVar7 = uVar11;
          break;
        }
        dVar13 = 1.0 / dVar13;
        dVar3 = dVar3 * dVar13;
        dVar4 = dVar4 * dVar13;
        dVar13 = -dVar3 * (dVar14 - param_1[lVar12 * 2 + 5]) -
                 (dVar15 - param_1[lVar12 * 2 + 6]) * dVar4;
        if (-param_2 <= dVar13) {
          if (param_2 < dVar13) {
            uVar11 = uVar11 + 1;
          }
        }
        else {
          uVar7 = uVar7 + 1;
        }
      }
      dVar13 = (dVar14 - dVar1) * dVar3 + (dVar15 - dVar2) * dVar4;
      if (-param_2 <= dVar13) {
        if (param_2 < dVar13) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar7 = uVar7 + 1;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x10;
      dVar13 = dVar1;
      uVar16 = SUB84(dVar2,0);
      uVar17 = (int)((ulonglong)dVar2 >> 0x20);
    } while (lVar9 != 4);
    if ((uVar11 == 0) || (uVar7 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      param_1[0xb] = (double)&DAT_100000002;
      param_1[0xd] = *param_1;
      param_1[0xe] = param_1[1];
      param_1[0x11] = 0.0;
      param_1[0x12] = 0.0;
      param_1[0xf] = *param_1;
      param_1[0x10] = param_1[1];
      puVar6 = &DAT_100000001;
    }
    else {
      *(undefined8 *)((longlong)param_1 + 0x5c) = 2;
      puVar6 = (undefined1 *)0x0;
    }
    goto LAB_146bdd15e;
  }
  local_d4 = 0;
  local_cc = 0;
  dVar14 = *param_1;
  dVar15 = param_1[1];
  dVar13 = param_1[3];
  dVar1 = param_1[2];
  iVar5 = 0;
  lVar9 = 0xc;
  iVar8 = 0;
  do {
    dVar2 = (*(double *)((longlong)param_1 + lVar9 * 4 + -8) - dVar14) * dVar13 -
            (*(double *)((longlong)param_1 + lVar9 * 4) - dVar15) * dVar1;
    *(double *)((longlong)&local_e0 + lVar9 * 2) = dVar2;
    if (dVar2 <= param_2) {
      if (-param_2 <= dVar2) {
        *(undefined8 *)((longlong)&local_e0 + lVar9 * 2) = 0;
        *(undefined4 *)((longlong)&local_e0 + lVar9) = 0;
      }
      else {
        *(undefined4 *)((longlong)&local_e0 + lVar9) = 0xffffffff;
        iVar8 = iVar8 + 1;
      }
    }
    else {
      *(undefined4 *)((longlong)&local_e0 + lVar9) = 1;
      iVar5 = iVar5 + 1;
    }
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x18);
  if (iVar8 == 3 || iVar5 == 3) {
LAB_146bdd463:
    puVar6 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar16 = 2;
  }
  else {
    local_f0 = &local_e8;
    local_f8 = &local_d4;
    FUN_146bdd61c(param_1,param_1 + 2,param_1 + 5,local_c8);
    dVar14 = param_1[4];
    dVar15 = -dVar14;
    if ((local_e0 < dVar15) || (dVar14 < local_e8)) goto LAB_146bdd463;
    dVar13 = local_e0;
    if ((local_e0 <= dVar15) || (dVar13 = local_e8, dVar14 <= local_e8)) {
LAB_146bdd563:
      *(undefined4 *)(param_1 + 0xb) = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      param_1[0x11] = dVar13;
      dVar15 = param_1[3] * dVar13 + param_1[1];
      dVar14 = dVar13 * param_1[2] + *param_1;
      lVar9 = 0x70;
      lVar10 = 0x68;
    }
    else {
      dVar13 = dVar15;
      if (dVar15 <= local_e8) {
        dVar13 = local_e8;
      }
      if (local_e0 <= dVar14) {
        dVar14 = local_e0;
      }
      if ((dVar13 == dVar14) && (!NAN(dVar13) && !NAN(dVar14))) goto LAB_146bdd563;
      *(undefined4 *)(param_1 + 0xb) = 2;
      *(undefined4 *)(param_1 + 0xc) = 2;
      param_1[0x11] = dVar13;
      param_1[0xd] = dVar13 * param_1[2] + *param_1;
      param_1[0xe] = dVar13 * param_1[3] + param_1[1];
      param_1[0x12] = dVar14;
      dVar15 = param_1[3] * dVar14 + param_1[1];
      dVar14 = dVar14 * param_1[2] + *param_1;
      lVar9 = 0x80;
      lVar10 = 0x78;
    }
    *(double *)((longlong)param_1 + lVar10) = dVar14;
    *(double *)((longlong)param_1 + lVar9) = dVar15;
    uVar16 = 1;
    puVar6 = (undefined1 *)0x1;
  }
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar16;
LAB_146bdd15e:
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 146bdd61c FUN_146bdd61c body=418 status=ok
// SIG undefined FUN_146bdd61c(void)

undefined8
FUN_146bdd61c(double *param_1,double *param_2,longlong param_3,longlong param_4,longlong param_5,
             double *param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_48 [40];
  double adStack_20 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar2 = *param_1;
  dVar10 = param_1[1];
  dVar9 = *param_2;
  dVar3 = param_2[1];
  lVar6 = 0;
  do {
    *(double *)((longlong)adStack_20 + lVar6) =
         (*(double *)(param_3 + 8 + lVar6 * 2) - dVar10) * dVar3 +
         (*(double *)(param_3 + lVar6 * 2) - dVar2) * dVar9;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  iVar5 = 0;
  lVar6 = 2;
  lVar7 = 0;
  do {
    if (*(int *)(param_5 + lVar7 * 4) * *(int *)(param_5 + lVar6 * 4) < 0) {
      dVar2 = *(double *)(param_4 + lVar6 * 8);
      dVar10 = *(double *)(param_4 + lVar7 * 8);
      bVar8 = iVar5 != 0;
      iVar5 = iVar5 + 1;
      param_6[bVar8] = (adStack_20[lVar7] * dVar2 - adStack_20[lVar6] * dVar10) / (dVar2 - dVar10);
    }
    lVar1 = lVar7 + 1;
    lVar6 = lVar7;
    lVar7 = lVar1;
  } while (lVar1 != 3);
  if (iVar5 < 2) {
    lVar6 = 0;
    do {
      if (*(int *)(param_5 + lVar6 * 4) == 0) {
        if (iVar5 == 2) {
          dVar2 = *param_6;
          dVar10 = param_6[1];
          dVar9 = dVar2;
          if (dVar10 < dVar2) {
            *param_6 = dVar10;
            param_6[1] = dVar2;
            dVar9 = dVar10;
            dVar10 = dVar2;
          }
          dVar2 = adStack_20[lVar6];
          if (dVar9 <= dVar2) {
            iVar5 = 2;
            if (dVar10 < dVar2) {
              param_6[1] = dVar2;
            }
          }
          else {
            *param_6 = dVar2;
            iVar5 = 2;
          }
        }
        else {
          bVar8 = iVar5 != 0;
          iVar5 = iVar5 + 1;
          param_6[bVar8] = adStack_20[lVar6];
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    if (iVar5 < 1) {
      uVar4 = 0;
      goto LAB_146bdd79f;
    }
  }
  dVar2 = *param_6;
  if (iVar5 == 2) {
    uVar4 = 1;
    if (dVar2 <= param_6[1]) goto LAB_146bdd79f;
    *param_6 = param_6[1];
  }
  param_6[1] = dVar2;
  uVar4 = 1;
LAB_146bdd79f:
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146bdd7c0 FUN_146bdd7c0 body=176 status=ok
// SIG undefined FUN_146bdd7c0(void)

undefined8
FUN_146bdd7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_146bdd936(param_1,param_2,param_4,param_5);
  if (iVar1 < 1) {
    iVar2 = FUN_146bdd936(param_2,param_3,param_4,param_5);
    if (iVar2 < 1) {
      iVar3 = FUN_146bdd936(param_1,param_3,param_4,param_5);
      if (-1 < iVar3) {
                    /* WARNING: Could not recover jumptable at 0x000146bdd86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_149f3ab10 +
                          *(int *)(&DAT_149f3ab10 +
                                  (ulonglong)
                                  ((uint)(iVar2 == 0) + (uint)(iVar1 == 0) + (uint)(iVar3 == 0)) * 4
                                  )))
                          (&DAT_149f3ab10 +
                           *(int *)(&DAT_149f3ab10 +
                                   (ulonglong)
                                   ((uint)(iVar2 == 0) + (uint)(iVar1 == 0) + (uint)(iVar3 == 0)) *
                                   4));
        return uVar4;
      }
    }
  }
  return 1;
}



// FUNCTION 146bdd936 FUN_146bdd936 body=164 status=ok
// SIG undefined FUN_146bdd936(void)

ulonglong FUN_146bdd936(double *param_1,double *param_2,double *param_3,double param_4)

{
  bool bVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = param_2[1] - param_1[1];
  dVar6 = *param_2 - *param_1;
  dVar5 = (*param_3 - *param_1) * dVar7 - (param_3[1] - param_1[1]) * dVar6;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    dVar6 = dVar6 * dVar6 + dVar7 * dVar7;
    if ((dVar6 == 0.0) && (!NAN(dVar6))) {
      return 0;
    }
    param_4 = SQRT(dVar6) * param_4;
    bVar1 = dVar5 < -param_4;
    bVar4 = dVar5 == param_4;
    bVar3 = dVar5 < param_4;
  }
  else {
    bVar1 = dVar5 < 0.0;
    bVar4 = dVar5 == 0.0;
    bVar3 = dVar5 < 0.0;
  }
  uVar2 = 0xffffffff;
  if (bVar3 || bVar4) {
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}



// FUNCTION 146bdd9da FUN_146bdd9da body=326 status=ok
// SIG undefined FUN_146bdd9da(void)

bool FUN_146bdd9da(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar4 = param_2[1] - dVar2;
  dVar5 = *param_2 - dVar1;
  dVar6 = dVar5 * dVar5 + dVar4 * dVar4;
  if ((dVar6 != 0.0) || (NAN(dVar6))) {
    param_4 = SQRT(dVar6) * param_4;
    dVar2 = param_3[1] - dVar2;
    dVar1 = *param_3 - dVar1;
    if ((param_4 < ABS(dVar5 * dVar2 - dVar1 * dVar4)) || (dVar1 * dVar5 + dVar2 * dVar4 < -param_4)
       ) {
      return false;
    }
    bVar3 = param_4 < dVar5 * (*param_3 - *param_2) + dVar4 * (param_3[1] - param_2[1]);
  }
  else {
    bVar3 = param_4 * param_4 <
            (param_3[1] - dVar2) * (param_3[1] - dVar2) + (*param_3 - dVar1) * (*param_3 - dVar1);
  }
  return !bVar3;
}



// FUNCTION 146bddb48 FUN_146bddb48 body=12 status=ok
// SIG undefined FUN_146bddb48(void)

void FUN_146bddb48(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146bddb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146bddb54 FUN_146bddb54 body=29 status=ok
// SIG undefined FUN_146bddb54(void)

undefined8 FUN_146bddb54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bddb72 FUN_146bddb72 body=132 status=ok
// SIG undefined FUN_146bddb72(void)

void FUN_146bddb72(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bddbf8 FUN_146bddbf8 body=143 status=ok
// SIG undefined FUN_146bddbf8(void)

void FUN_146bddbf8(longlong param_1,int param_2)

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



// FUNCTION 146bddc88 FUN_146bddc88 body=147 status=ok
// SIG undefined FUN_146bddc88(void)

void FUN_146bddc88(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bddd1c FUN_146bddd1c body=51 status=ok
// SIG undefined FUN_146bddd1c(void)

void FUN_146bddd1c(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000146bddd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 146bddd50 FUN_146bddd50 body=54 status=ok
// SIG undefined FUN_146bddd50(void)

void FUN_146bddd50(longlong *param_1)

{
  FUN_146bddd86(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bddd86 FUN_146bddd86 body=128 status=ok
// SIG undefined FUN_146bddd86(void)

void FUN_146bddd86(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140d97c6c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146bdde08 FUN_146bdde08 body=38 status=ok
// SIG undefined FUN_146bdde08(void)

undefined8 FUN_146bdde08(undefined8 param_1,int param_2)

{
  FUN_1457e5b52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bdde3a FUN_146bdde3a body=194 status=ok
// SIG undefined FUN_146bdde3a(void)

undefined4 FUN_146bdde3a(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bddee0;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
              *(int *)(*(longlong *)(param_1 + 8) + 0x218))) goto LAB_146bddee0;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_146bdf4d8(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_146bddee0:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bddf02 FUN_146bddf02 body=161 status=ok
// SIG undefined FUN_146bddf02(void)

bool FUN_146bddf02(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (iVar2 < 0) {
      return false;
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
              *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
      return false;
    }
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  FUN_146bdf910(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 146bddfa4 FUN_146bddfa4 body=76 status=ok
// SIG undefined FUN_146bddfa4(void)

void FUN_146bddfa4(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bddff2 FUN_146bddff2 body=84 status=ok
// SIG undefined FUN_146bddff2(void)

undefined4 FUN_146bddff2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde048 FUN_146bde048 body=149 status=ok
// SIG undefined FUN_146bde048(void)

undefined8 FUN_146bde048(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (-1 < iVar1) goto LAB_146bde0b9;
  }
  else if (*(ulonglong *)(param_1 + 0x10) ==
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
    iVar1 = *(int *)(param_1 + 0xcc);
LAB_146bde0b9:
    local_28 = param_4;
    FUN_146bdfe42(param_1,iVar1,param_2,param_3);
    if (*(int *)(param_3 + 1) != 0) {
      FUN_146be0274(*param_3);
      uVar2 = 1;
      goto LAB_146bde09c;
    }
  }
  uVar2 = 0;
LAB_146bde09c:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde0de FUN_146bde0de body=154 status=ok
// SIG undefined FUN_146bde0de(void)

bool FUN_146bde0de(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bde15a;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
LAB_146bde15a:
    bVar1 = false;
    goto LAB_146bde15c;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_146be0900(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_146bde15c:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde17a FUN_146bde17a body=191 status=ok
// SIG undefined FUN_146bde17a(void)

undefined4
FUN_146bde17a(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bde21d;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
              *(int *)(*(longlong *)(param_1 + 8) + 0x218))) goto LAB_146bde21d;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_146be0bd8(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_146bde21d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde23a FUN_146bde23a body=153 status=ok
// SIG undefined FUN_146bde23a(void)

undefined8 FUN_146bde23a(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double *local_20;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) goto LAB_146bde288;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
              *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
LAB_146bde288:
      uVar2 = 0;
      goto LAB_146bde28a;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_28 = *param_3;
  if (3.4028234663852886e+38 <= local_28) {
    local_28 = 3.4028234663852886e+38;
  }
  local_c = 0xffffffff;
  local_20 = param_3;
  uVar2 = FUN_146be0f04(local_28,iVar1,param_2);
LAB_146bde28a:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde2d4 FUN_146bde2d4 body=313 status=ok
// SIG undefined FUN_146bde2d4(void)

undefined8 *
FUN_146bde2d4(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bde3d1;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
LAB_146bde3d1:
    *param_2 = 0xffffffffffffffff;
    goto LAB_146bde3d8;
  }
  local_38 = 1.79769313486232e+308;
  dVar1 = *param_6;
  dVar2 = 1.79769313486232e+308;
  if (dVar1 < 1.79769313486232e+308) {
    dVar1 = dVar1 * dVar1;
    local_38 = dVar1;
  }
  *param_2 = 0xffffffffffffffff;
  local_68 = *(undefined4 *)(param_3 + 0xcc);
  local_40 = param_7;
  local_48 = param_6;
  local_58 = &local_38;
  local_60 = 0;
  local_50 = param_2;
  FUN_146be13a6(dVar1,*(undefined4 *)(param_1 + 0xcc));
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_146bde3d8:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde40e FUN_146bde40e body=419 status=ok
// SIG undefined FUN_146bde40e(void)

void FUN_146bde40e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar8 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar8 < 0) goto LAB_146bde574;
  }
  else {
    if (param_1[2] != (ulonglong)(uint)(*(int *)(param_1[1] + 0x214) + *(int *)(param_1[1] + 0x218))
       ) goto LAB_146bde574;
    uVar8 = *(uint *)((longlong)param_1 + 0xcc);
  }
  lVar3 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar8 >> 9) * 8);
  lVar6 = (ulonglong)((uVar8 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar8 >> 9) * 8);
  local_80 = *(double *)(lVar3 + 0x10 + lVar6);
  dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar3 + 8 + lVar6);
  dVar2 = *(double *)(lVar4 + 8 + lVar6);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
  local_74 = 0;
  pcVar5 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar7 = (*pcVar5)(uVar9,&local_a8,&local_74);
  if (cVar7 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_146bde574:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bde5b2 FUN_146bde5b2 body=1281 status=ok
// SIG undefined FUN_146bde5b2(void)

void FUN_146bde5b2(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_146bde6f4:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_146bde6f4;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdeab4 FUN_146bdeab4 body=209 status=ok
// SIG undefined FUN_146bdeab4(void)

bool FUN_146bdeab4(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bdeb5d;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
LAB_146bdeb5d:
    bVar2 = false;
    goto LAB_146bdeb5f;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_146be257e;
  local_80 = param_3;
  iVar1 = FUN_146be2184(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_146bdeb5f:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdeb86 FUN_146bdeb86 body=192 status=ok
// SIG undefined FUN_146bdeb86(void)

undefined8
FUN_146bdeb86(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_146bdebd8;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
              *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
LAB_146bdebd8:
      uVar2 = 0;
      goto LAB_146bdebda;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_146be2fe6;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar2 = FUN_146be2592(param_1,iVar1,param_2,param_3);
LAB_146bdebda:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdec48 FUN_146bdec48 body=1008 status=ok
// SIG undefined FUN_146bdec48(void)

uint FUN_146bdec48(longlong *param_1,longlong param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_158 [44];
  uint local_12c;
  longlong local_128;
  uint local_11c;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  if ((*(int *)((longlong)param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < *(int *)((longlong)param_1 + 0xcc)) goto LAB_146bdecb7;
  }
  else if (param_1[2] ==
           (ulonglong)(uint)(*(int *)(param_1[1] + 0x214) + *(int *)(param_1[1] + 0x218))) {
LAB_146bdecb7:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_149f3aa80;
        local_88 = FUN_146be2ffa;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = local_d8._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d0._4_4_;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_c0._4_4_;
        *(undefined4 *)(param_3 + 4) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b8._4_4_;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
      }
      cVar10 = FUN_146be24be(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),param_3);
      if (cVar10 == '\0') goto LAB_146bdecac;
    }
    local_11c = *(int *)(local_128 + 0x140) * 0x200 + *(int *)(local_128 + 0x144);
    uVar15 = 0;
    if ((int)local_11c < 1) {
      local_12c = 0;
      uVar11 = local_12c;
    }
    else {
      plVar1 = param_4 + 4;
      local_12c = (uint)CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      local_118 = param_1;
      local_110 = plVar1;
      do {
        lVar9 = local_128;
        pcVar7 = (code *)*param_4;
        puVar2 = (uint *)(*(longlong *)
                           (*(longlong *)(local_128 + 0x130) + (ulonglong)(uVar15 >> 9) * 8) +
                         (ulonglong)(uVar15 & 0x1ff) * 0xc);
        uVar11 = *puVar2;
        if (pcVar7 == (code *)0x0) {
          lVar9 = *(longlong *)(local_128 + 0x10);
          lVar8 = *(longlong *)(lVar9 + (ulonglong)(uVar11 >> 9) * 8);
          local_c8 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          puVar4 = (undefined8 *)(lVar8 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          local_d8 = *puVar4;
          uStack_d0 = puVar4[1];
          lVar8 = *(longlong *)(lVar9 + (ulonglong)(puVar2[1] >> 9) * 8);
          uVar14 = (ulonglong)puVar2[1] & 0x1ff;
          uStack_b0 = *(undefined8 *)(lVar8 + 0x10 + uVar14 * 0x18);
          puVar4 = (undefined8 *)(lVar8 + uVar14 * 0x18);
          uStack_c0 = *puVar4;
          uStack_b8 = puVar4[1];
          lVar9 = *(longlong *)(lVar9 + (ulonglong)(puVar2[2] >> 9) * 8);
          uVar14 = (ulonglong)puVar2[2] & 0x1ff;
          local_98 = *(undefined8 *)(lVar9 + 0x10 + uVar14 * 0x18);
          puVar3 = (undefined4 *)(lVar9 + uVar14 * 0x18);
          local_a8 = *puVar3;
          uStack_a4 = puVar3[1];
          uStack_a0 = puVar3[2];
          uStack_9c = puVar3[3];
        }
        else {
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          lVar8 = *(longlong *)(*(longlong *)(local_128 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          puVar3 = (undefined4 *)(lVar8 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          plVar13 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar7)(&local_f0,uVar12,&local_108);
          local_c8 = local_e0;
          local_d8 = CONCAT44(uStack_ec,local_f0);
          uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
          lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          uVar14 = (ulonglong)uVar5 & 0x1ff;
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + uVar14 * 0x18);
          puVar3 = (undefined4 *)(lVar8 + uVar14 * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          pcVar7 = (code *)*param_4;
          plVar13 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar7)(&local_f0,uVar12,&local_108);
          param_1 = local_118;
          uStack_b0 = local_e0;
          uStack_c0 = CONCAT44(uStack_ec,local_f0);
          uStack_b8 = CONCAT44(uStack_e4,uStack_e8);
          lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          uVar14 = (ulonglong)uVar6 & 0x1ff;
          local_f8 = *(undefined8 *)(lVar9 + 0x10 + uVar14 * 0x18);
          puVar3 = (undefined4 *)(lVar9 + uVar14 * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          pcVar7 = (code *)*param_4;
          plVar13 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar7)(&local_f0,uVar12,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
        }
        uVar12 = (**(code **)(*param_1 + 0x88))(param_1,&local_d8,param_5);
        uVar11 = local_12c;
        if ((char)uVar12 != '\0') break;
        uVar15 = uVar15 + 1;
        local_12c = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),(int)uVar15 < (int)local_11c);
        uVar11 = local_12c;
      } while (uVar15 != local_11c);
    }
    goto LAB_146bdef87;
  }
LAB_146bdecac:
  uVar11 = 0;
LAB_146bdef87:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 146bdf03a FUN_146bdf03a body=567 status=ok
// SIG undefined FUN_146bdf03a(void)

undefined8 *
FUN_146bdf03a(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_146be3b08;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_146bdf0ce;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
              *(int *)(*(longlong *)(param_1 + 8) + 0x218))) goto LAB_146bdf0ce;
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_146be3080(param_1,iVar1,param_3,param_4);
LAB_146bdf0ce:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdf272 FUN_146bdf272 body=472 status=ok
// SIG undefined FUN_146bdf272(void)

undefined8 *
FUN_146bdf272(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_146be4154;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bdf315;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 8) + 0x218))) goto LAB_146bdf315;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_146be3fe8(param_1,param_2,param_3);
LAB_146bdf315:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdf44c FUN_146bdf44c body=139 status=ok
// SIG undefined FUN_146bdf44c(void)

undefined8 FUN_146bdf44c(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bdf4ba;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 8) + 0x218))) {
LAB_146bdf4ba:
    uVar1 = 0;
    goto LAB_146bdf4bc;
  }
  local_10 = &local_19;
  local_18 = FUN_146be4c4e;
  local_28 = param_3;
  uVar1 = FUN_146be3fe8(param_1,0,param_2);
LAB_146bdf4bc:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdf4d8 FUN_146bdf4d8 body=662 status=ok
// SIG undefined FUN_146bdf4d8(void)

undefined8
FUN_146bdf4d8(longlong param_1,uint param_2,undefined8 param_3,double *param_4,undefined4 *param_5,
             longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  double *pdVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  double *local_88;
  undefined8 local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_88 = param_4;
  local_80 = param_3;
  while (uVar5 = local_80, *(int *)(param_1 + 200) <= (int)uVar9) {
    uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      dVar10 = (double)FUN_146bdf87a(param_1,~uVar7,local_80);
      uVar7 = ~uVar7;
      if (*local_88 < dVar10) goto LAB_146bdf73b;
    }
    else {
      uVar7 = uVar7 - 1;
      uVar9 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4) - 1;
      dVar10 = (double)FUN_146bdf87a(param_1,uVar7,local_80);
      dVar11 = (double)FUN_146bdf87a(param_1,uVar9,uVar5);
      pdVar3 = local_88;
      if (dVar11 <= dVar10) {
        if (*local_88 <= dVar11) goto LAB_146bdf73b;
        local_90 = param_6;
        local_98 = param_5;
        FUN_146bdf4d8(param_1,uVar9,local_80,local_88);
        if (*pdVar3 <= dVar10) goto LAB_146bdf73b;
      }
      else {
        if (*local_88 <= dVar10) goto LAB_146bdf73b;
        local_90 = param_6;
        local_98 = param_5;
        FUN_146bdf4d8(param_1,uVar7,local_80,local_88);
        uVar7 = uVar9;
        if (*pdVar3 <= dVar11) goto LAB_146bdf73b;
      }
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
  }
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                  (ulonglong)(uVar9 & 0x1ff) * 4);
  if (0 < iVar8) {
    do {
      uVar9 = uVar9 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
               (ulonglong)(uVar9 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_146bdf707:
        dVar10 = (double)FUN_146bdf770(*(undefined8 *)(param_1 + 8),uVar1,local_80);
        if (dVar10 < *local_88) {
          *local_88 = dVar10;
          *param_5 = uVar1;
        }
      }
      else {
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_6 + 0x30);
        }
        local_74 = uVar1;
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_74);
        if (cVar4 != '\0') goto LAB_146bdf707;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_146bdf73b:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 146bdf770 FUN_146bdf770 body=264 status=ok
// SIG undefined FUN_146bdf770(void)

void FUN_146bdf770(longlong param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [15];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar4 = (ulonglong)(param_2 & 0x1ff);
  uVar1 = *(uint *)(lVar2 + uVar4 * 0xc);
  lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_68[0] = *puVar6;
  local_68[1] = puVar6[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar4 * 0xc);
  lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_68[3] = *puVar6;
  uStack_48 = puVar6[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar4 * 0xc);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
  uVar4 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar5 + 0x10 + uVar4 * 0x18);
  puVar6 = (undefined8 *)(lVar5 + uVar4 * 0x18);
  local_38 = *puVar6;
  uStack_30 = puVar6[1];
  local_e8 = *(undefined8 *)(param_3 + 4);
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  puVar6 = local_68;
  puVar7 = local_e0;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_146bd2a7a(&local_f8);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bdf87a FUN_146bdf87a body=150 status=ok
// SIG undefined FUN_146bdf87a(void)

double FUN_146bdf87a(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 146bdf910 FUN_146bdf910 body=1021 status=ok
// SIG undefined FUN_146bdf910(void)

void FUN_146bdf910(longlong param_1,uint param_2,uint *param_3,double *param_4,uint *param_5,
                  undefined4 *param_6,longlong param_7)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  undefined4 *local_190;
  longlong local_188;
  uint *local_178;
  double *local_170;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_178 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar15) {
    do {
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                        + (ulonglong)(uVar15 & 0x1ff) * 4);
      if ((int)uVar11 < 0) {
        uVar11 = ~uVar11;
        dVar17 = (double)FUN_146bdfd0e(param_1,uVar11,local_178);
        bVar16 = *param_4 + 1e-08 < dVar17;
LAB_146bdfbc0:
        uVar9 = (ulonglong)uVar11;
        if (bVar16) goto LAB_146bdfcc7;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar15 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        uVar9 = (ulonglong)uVar15;
        dVar17 = (double)FUN_146bdfd0e(param_1,uVar11,param_3);
        dVar18 = (double)FUN_146bdfd0e(param_1,uVar9,param_3);
        if (dVar18 <= dVar17) {
          if (dVar18 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_146bdf910(param_1,uVar15,local_178,param_4);
            bVar16 = *param_4 + 1e-08 < dVar17;
            goto LAB_146bdfbc0;
          }
          goto LAB_146bdfcc7;
        }
        if (*param_4 + 1e-08 < dVar17) goto LAB_146bdfcc7;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_146bdf910(param_1,uVar11,local_178,param_4);
        if (*param_4 + 1e-08 < dVar18) goto LAB_146bdfcc7;
      }
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar9 >> 9) * 8) +
                        (ulonglong)((uint)uVar9 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar15);
  }
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                   (ulonglong)(uVar15 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar10) {
    do {
      uVar15 = uVar15 + 1;
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                        + (ulonglong)(uVar15 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_7 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_146bdfa23:
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
        uVar9 = (ulonglong)uVar11 & 0x1ff;
        uVar1 = *(uint *)(lVar3 + uVar9 * 0xc);
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
        uVar14 = (ulonglong)uVar1 & 0x1ff;
        local_c8[2] = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
        puVar12 = (undefined8 *)(lVar4 + uVar14 * 0x18);
        local_c8[0] = *puVar12;
        local_c8[1] = puVar12[1];
        uVar1 = *(uint *)(lVar3 + 4 + uVar9 * 0xc);
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
        uVar14 = (ulonglong)uVar1 & 0x1ff;
        local_a0 = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
        puVar12 = (undefined8 *)(lVar4 + uVar14 * 0x18);
        local_c8[3] = *puVar12;
        uStack_a8 = puVar12[1];
        uVar1 = *(uint *)(lVar3 + 8 + uVar9 * 0xc);
        lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
        uVar9 = (ulonglong)uVar1 & 0x1ff;
        local_88 = *(undefined8 *)(lVar8 + 0x10 + uVar9 * 0x18);
        puVar12 = (undefined8 *)(lVar8 + uVar9 * 0x18);
        local_98 = *puVar12;
        uStack_90 = puVar12[1];
        local_168 = *local_178;
        uStack_164 = local_178[1];
        uStack_160 = local_178[2];
        uStack_15c = local_178[3];
        local_158 = *(undefined8 *)(local_178 + 4);
        uStack_150 = *(undefined8 *)(local_178 + 6);
        local_148 = local_178[8];
        uStack_144 = local_178[9];
        uStack_140 = local_178[10];
        uStack_13c = local_178[0xb];
        puVar12 = local_c8;
        puVar13 = local_138;
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        cVar5 = FUN_146bd80f0(&local_168);
        if ((cVar5 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = uVar11;
          *(undefined8 *)(param_6 + 4) = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e4;
          param_6[2] = uStack_e0;
          param_6[3] = uStack_dc;
        }
      }
      else {
        plVar7 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar7 = (longlong *)(param_7 + 0x30);
        }
        local_168 = uVar11;
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar2)(uVar6,&local_168);
        if (cVar5 != '\0') goto LAB_146bdfa23;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
LAB_146bdfcc7:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bdfd0e FUN_146bdfd0e body=307 status=ok
// SIG undefined FUN_146bdfd0e(void)

void FUN_146bdfd0e(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 146bdfe42 FUN_146bdfe42 body=1073 status=ok
// SIG undefined FUN_146bdfe42(void)

void FUN_146bdfe42(longlong param_1,uint param_2,uint *param_3,longlong *param_4,double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  undefined8 uVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  uint *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar2 = *param_5;
  uVar23 = SUB84(dVar2,0);
  uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar23 = 0xe0000000;
    uVar24 = 0x47efffff;
  }
  uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1b8 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar19) {
    do {
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                        + (ulonglong)(uVar19 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar15 = ~uVar15;
        dVar2 = (double)FUN_146bdfd0e(param_1,uVar15,local_1b8);
        bVar20 = (double)CONCAT44(uVar24,uVar23) + 1e-08 < dVar2;
LAB_146be0138:
        uVar13 = (ulonglong)uVar15;
        if (bVar20) goto LAB_146be020c;
      }
      else {
        uVar15 = uVar15 - 1;
        uVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
        uVar13 = (ulonglong)uVar19;
        dVar21 = (double)FUN_146bdfd0e(param_1,uVar15,param_3);
        dVar22 = (double)FUN_146bdfd0e(param_1,uVar13,param_3);
        dVar2 = (double)CONCAT44(uVar24,uVar23) + 1e-08;
        if (dVar22 <= dVar21) {
          if (dVar22 <= dVar2) {
            local_1c8 = param_5;
            FUN_146bdfe42(param_1,uVar19,local_1b8,param_4);
            bVar20 = dVar2 < dVar21;
            goto LAB_146be0138;
          }
          goto LAB_146be020c;
        }
        if (dVar2 < dVar21) goto LAB_146be020c;
        local_1c8 = param_5;
        FUN_146bdfe42(param_1,uVar15,local_1b8,param_4);
        if (dVar2 < dVar22) goto LAB_146be020c;
      }
      dVar2 = *param_5;
      uVar23 = SUB84(dVar2,0);
      uVar24 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar23 = 0xe0000000;
        uVar24 = 0x47efffff;
      }
      uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar13 >> 9) * 8) +
                        (ulonglong)((uint)uVar13 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar19);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                   (ulonglong)(uVar19 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar14) {
    do {
      uVar19 = uVar19 + 1;
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                        + (ulonglong)(uVar19 & 0x1ff) * 4);
      pcVar5 = (code *)param_5[2];
      if (pcVar5 == (code *)0x0) {
LAB_146bdff71:
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
        uVar13 = (ulonglong)uVar15 & 0x1ff;
        uVar3 = *(uint *)(lVar6 + uVar13 * 0xc);
        lVar7 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
        uVar18 = (ulonglong)uVar3 & 0x1ff;
        local_e8[2] = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        puVar16 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_e8[0] = *puVar16;
        local_e8[1] = puVar16[1];
        uVar3 = *(uint *)(lVar6 + 4 + uVar13 * 0xc);
        lVar7 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
        uVar18 = (ulonglong)uVar3 & 0x1ff;
        local_c0 = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        puVar16 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_e8[3] = *puVar16;
        uStack_c8 = puVar16[1];
        uVar3 = *(uint *)(lVar6 + 8 + uVar13 * 0xc);
        lVar12 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
        uVar13 = (ulonglong)uVar3 & 0x1ff;
        local_a8 = *(undefined8 *)(lVar12 + 0x10 + uVar13 * 0x18);
        puVar16 = (undefined8 *)(lVar12 + uVar13 * 0x18);
        local_b8 = *puVar16;
        uStack_b0 = puVar16[1];
        local_188 = *local_1b8;
        uStack_184 = local_1b8[1];
        uStack_180 = local_1b8[2];
        uStack_17c = local_1b8[3];
        local_178 = local_1b8[4];
        uStack_174 = local_1b8[5];
        uStack_170 = local_1b8[6];
        uStack_16c = local_1b8[7];
        local_168 = local_1b8[8];
        uStack_164 = local_1b8[9];
        uStack_160 = local_1b8[10];
        uStack_15c = local_1b8[0xb];
        puVar16 = local_e8;
        puVar17 = local_158;
        for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
        cVar9 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar8 = local_1b0;
        if ((cVar9 != '\0') && (local_110 <= (double)CONCAT44(uVar24,uVar23) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar12 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar6 = *plVar8;
          *(uint *)(lVar6 + lVar12 * 0x28) = uVar15;
          *(double *)(lVar6 + 8 + lVar12 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar12 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar6 + 0x20 + lVar12 * 0x28) = local_198;
        }
      }
      else {
        pdVar11 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar11 = param_5 + 6;
        }
        local_188 = uVar15;
        uVar10 = (**(code **)((longlong)*pdVar11 + 8))();
        cVar9 = (*pcVar5)(uVar10,&local_188);
        if (cVar9 != '\0') goto LAB_146bdff71;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
LAB_146be020c:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be0274 FUN_146be0274 body=957 status=ok
// SIG undefined FUN_146be0274(void)

void FUN_146be0274(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar23 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar23 + fVar23);
    plVar15 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar15;
      puVar16 = (undefined8 *)plVar15[1];
      iVar18 = (int)plVar15[2];
      uVar12 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar10) >> 3) * -0x33333333 + 1;
      puVar17 = puVar16;
      puVar19 = puVar16;
      puVar20 = puVar10;
      if (iVar18 != 0) {
LAB_146be0345:
        if (8 < (int)uVar12) {
          uVar13 = (ulonglong)(uVar12 >> 1);
          uVar1 = puVar10[uVar13 * 5 + 4];
          uVar2 = puVar10[uVar13 * 5];
          uVar3 = (puVar10 + uVar13 * 5)[1];
          uVar4 = puVar10[uVar13 * 5 + 2];
          uVar5 = (puVar10 + uVar13 * 5 + 2)[1];
          puVar10[uVar13 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar13 * 5 + 2] = puVar10[2];
          (puVar10 + uVar13 * 5 + 2)[1] = uVar8;
          puVar10[uVar13 * 5] = uVar6;
          (puVar10 + uVar13 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar14 = puVar16 + 5;
          puVar11 = puVar10;
          do {
            puVar17 = puVar11 + 5;
            puVar9 = puVar11 + 5;
            do {
              puVar21 = puVar9;
              puVar11 = puVar17;
              if (puVar16 < puVar11) break;
              puVar17 = puVar11 + 5;
              puVar9 = puVar21 + 5;
            } while ((double)puVar11[1] < (double)puVar10[1] ||
                     (double)puVar11[1] == (double)puVar10[1]);
            puVar9 = puVar14 + -10;
            do {
              puVar17 = puVar14;
              puVar22 = puVar9;
              puVar14 = puVar17 + -5;
              if (puVar14 <= puVar10) break;
              puVar9 = puVar22 + -5;
            } while ((double)puVar10[1] < (double)puVar17[-4] ||
                     (double)puVar10[1] == (double)puVar17[-4]);
            if (puVar14 < puVar11) goto LAB_146be0478;
            uVar1 = puVar11[4];
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            puVar11[4] = puVar17[-1];
            uVar6 = *puVar14;
            uVar7 = puVar17[-4];
            uVar8 = puVar17[-2];
            puVar11[2] = puVar17[-3];
            puVar11[3] = uVar8;
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar17[-1] = uVar1;
            puVar17[-3] = uVar4;
            puVar17[-2] = uVar5;
            *puVar14 = uVar2;
            puVar17[-4] = uVar3;
          } while( true );
        }
        for (; puVar19 = puVar10, puVar17 = puVar10, puVar10 < puVar16; puVar16 = puVar16 + -5) {
          while (puVar20 = puVar19, puVar17 = puVar17 + 5, puVar17 <= puVar16) {
            puVar19 = puVar17;
            if ((double)puVar17[1] < (double)puVar20[1] || (double)puVar17[1] == (double)puVar20[1])
            {
              puVar19 = puVar20;
            }
          }
          local_48 = puVar20[4];
          local_68 = *puVar20;
          uStack_60 = puVar20[1];
          local_58 = puVar20[2];
          uStack_50 = puVar20[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar20[4] = puVar16[4];
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          uVar3 = puVar16[3];
          puVar20[2] = puVar16[2];
          puVar20[3] = uVar3;
          *puVar20 = uVar1;
          puVar20[1] = uVar2;
          puVar16[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar16[2] = local_58;
          puVar16[3] = uStack_50;
          *(undefined4 *)puVar16 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_146be060d;
      }
LAB_146be0622:
      FUN_146be0632(puVar10,uVar12,puVar17,param_4);
LAB_146be060d:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146be0478:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar17[-1];
  uVar1 = *puVar14;
  uVar2 = puVar17[-4];
  uVar3 = puVar17[-2];
  puVar10[2] = puVar17[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar17[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar17[-3] = local_58;
  puVar17[-2] = uStack_50;
  *(undefined4 *)puVar14 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0x1c) = uStack_60._4_4_;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar22 - (longlong)puVar20 < (longlong)puVar19 - (longlong)puVar21) {
    if (puVar11 < puVar16) {
      *plVar15 = (longlong)puVar11;
      plVar15[1] = (longlong)puVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar21 = puVar10;
    if (puVar14 <= puVar10 + 5) goto LAB_146be060d;
  }
  else {
    if (puVar10 + 5 < puVar14) {
      *plVar15 = (longlong)puVar10;
      plVar15[1] = (longlong)puVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar10 = puVar11;
    puVar17 = puVar16;
    puVar22 = puVar16;
    if (puVar16 <= puVar11) goto LAB_146be060d;
  }
  uVar12 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 3) * -0x33333333 + 1;
  puVar16 = puVar17;
  puVar19 = puVar22;
  puVar20 = puVar21;
  if (iVar18 == 0) goto LAB_146be0622;
  goto LAB_146be0345;
}



// FUNCTION 146be0632 FUN_146be0632 body=717 status=ok
// SIG undefined FUN_146be0632(void)

void FUN_146be0632(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x000146be0666:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((double)param_1[(longlong)iVar14 * 5 + 1] < (double)param_1[(longlong)iVar15 * 5 + 1] ||
            (double)param_1[(longlong)iVar14 * 5 + 1] == (double)param_1[(longlong)iVar15 * 5 + 1]))
        {
          iVar14 = iVar15;
        }
        if ((double)param_1[(longlong)iVar12 * 5 + 1] <= (double)param_1[(longlong)iVar14 * 5 + 1]
            && (double)param_1[(longlong)iVar14 * 5 + 1] !=
               (double)param_1[(longlong)iVar12 * 5 + 1]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x000146be0666;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((double)param_1[(longlong)iVar14 * 5 + 1] <
                (double)param_1[(longlong)iVar12 * 5 + 1] ||
                (double)param_1[(longlong)iVar14 * 5 + 1] ==
                (double)param_1[(longlong)iVar12 * 5 + 1])) {
              iVar15 = iVar12;
            }
            if ((double)param_1[(longlong)iVar15 * 5 + 1] <
                (double)param_1[(longlong)iVar16 * 5 + 1] ||
                (double)param_1[(longlong)iVar15 * 5 + 1] ==
                (double)param_1[(longlong)iVar16 * 5 + 1]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be0900 FUN_146be0900 body=726 status=ok
// SIG undefined FUN_146be0900(void)

ulonglong FUN_146be0900(longlong param_1,uint param_2,undefined8 param_3,double *param_4,
                       undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined7 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  undefined8 local_88;
  double *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  local_88 = param_3;
  if ((int)uVar8 < *(int *)(param_1 + 200)) {
    local_80 = param_4;
    if (0 < (int)uVar6) {
      do {
        uVar8 = uVar8 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_6 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_146be09e8:
          dVar12 = (double)FUN_146bdf770(*(undefined8 *)(param_1 + 8),uVar1,local_88);
          if (dVar12 < *local_80) {
            *local_80 = dVar12;
            *param_5 = uVar1;
            uVar9 = CONCAT71((int7)((ulonglong)&local_74 >> 8),1);
            goto LAB_146be0a47;
          }
        }
        else {
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          local_74 = uVar1;
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar3 = (*pcVar2)(uVar4,&local_74);
          if (cVar3 != '\0') goto LAB_146be09e8;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    uVar10 = (undefined7)((ulonglong)unaff_R14 >> 8);
    if ((int)uVar6 < 0) {
      dVar12 = (double)FUN_146bdf87a(param_1,~uVar6,param_3);
      if (dVar12 <= *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_146be0900(param_1,~uVar6,local_88,param_4);
LAB_146be0bca:
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_146be0a47;
      }
    }
    else {
      iVar7 = uVar6 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4) + -1;
      dVar12 = (double)FUN_146bdf87a(param_1,iVar7,param_3);
      dVar13 = (double)FUN_146bdf87a(param_1,iVar11,param_3);
      if (dVar13 <= dVar12) {
        if (dVar13 < *param_4) {
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_146be0900(param_1,iVar11,local_88,param_4);
          uVar9 = CONCAT71(uVar10,1);
          if (cVar3 != '\0') goto LAB_146be0a47;
          iVar11 = iVar7;
          if (dVar12 < *param_4) goto LAB_146be0b94;
        }
      }
      else if (dVar12 < *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_146be0900(param_1,iVar7,local_88,param_4);
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_146be0a47;
        if (dVar13 < *param_4) {
LAB_146be0b94:
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_146be0900(param_1,iVar11,local_88,param_4);
          goto LAB_146be0bca;
        }
      }
    }
  }
  uVar9 = 0;
LAB_146be0a47:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 146be0bd8 FUN_146be0bd8 body=810 status=ok
// SIG undefined FUN_146be0bd8(void)

void FUN_146be0bd8(longlong param_1,uint param_2,double *param_3,double *param_4,uint *param_5,
                  longlong param_6)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar9) {
    uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      dVar12 = (double)FUN_146bdf87a(param_1,~uVar7,param_3);
      uVar7 = ~uVar7;
      if (*param_4 < dVar12) goto LAB_146be0ece;
    }
    else {
      uVar7 = uVar7 - 1;
      uVar9 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4) - 1;
      dVar12 = (double)FUN_146bdf87a(param_1,uVar7,param_3);
      dVar13 = (double)FUN_146bdf87a(param_1,uVar9,param_3);
      if (dVar13 <= dVar12) {
        if (*param_4 <= dVar13) goto LAB_146be0ece;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_146be0bd8(param_1,uVar9,param_3,param_4);
        if (*param_4 <= dVar12) goto LAB_146be0ece;
      }
      else {
        if (*param_4 <= dVar12) goto LAB_146be0ece;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_146be0bd8(param_1,uVar7,param_3,param_4);
        uVar7 = uVar9;
        if (*param_4 <= dVar13) goto LAB_146be0ece;
      }
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
  }
  local_8c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
  if (0 < local_8c) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar10 = 1;
    do {
      uVar7 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar10 + uVar9 >> 9) * 8) +
                       (ulonglong)(iVar10 + uVar9 & 0x1ff) * 4);
      pcVar1 = *(code **)(param_6 + 0x10);
      if (pcVar1 == (code *)0x0) {
LAB_146be0e13:
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
        local_78 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        local_80 = *(undefined8 *)(lVar5 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        lVar5 = 0;
        do {
          uVar7 = *(uint *)((longlong)&local_80 + lVar5 * 4);
          lVar2 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)(uVar7 & 0x1ff);
          dVar13 = *param_3 - *(double *)(lVar2 + uVar8 * 0x18);
          dVar14 = param_3[1] - *(double *)(lVar2 + 8 + uVar8 * 0x18);
          dVar12 = param_3[2] - *(double *)(lVar2 + 0x10 + uVar8 * 0x18);
          dVar12 = dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14;
          if (dVar12 < *param_4) {
            *param_4 = dVar12;
            *param_5 = uVar7;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
      }
      else {
        local_80 = CONCAT44(local_80._4_4_,uVar7);
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = local_88;
        }
        uVar4 = (**(code **)(*plVar6 + 8))();
        cVar3 = (*pcVar1)(uVar4,&local_80);
        if (cVar3 != '\0') goto LAB_146be0e13;
      }
      bVar11 = iVar10 != local_8c;
      iVar10 = iVar10 + 1;
    } while (bVar11);
  }
LAB_146be0ece:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be0f04 FUN_146be0f04 body=1185 status=ok
// SIG undefined FUN_146be0f04(void)

ulonglong FUN_146be0f04(longlong param_1,uint param_2,uint *param_3,undefined8 param_4,
                       undefined4 *param_5,double *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  undefined8 unaff_RBP;
  undefined7 uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  double *local_200;
  uint *local_1f8;
  uint *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1f8 = param_3;
  if ((int)uVar18 < *(int *)(param_1 + 200)) {
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    if (0 < iVar11) {
      local_1f0 = param_3 + 6;
      do {
        uVar18 = uVar18 + 1;
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4);
        pcVar3 = (code *)param_6[2];
        if (pcVar3 == (code *)0x0) {
LAB_146be101e:
          lVar10 = *(longlong *)(param_1 + 8);
          lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
          uVar13 = (ulonglong)uVar2 & 0x1ff;
          uVar2 = *(uint *)(lVar4 + uVar13 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_198 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_1a8 = *puVar14;
          uStack_1a0 = puVar14[1];
          uVar2 = *(uint *)(lVar4 + 4 + uVar13 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_1b8 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_1c8 = *puVar14;
          uStack_1c0 = puVar14[1];
          uVar2 = *(uint *)(lVar4 + 8 + uVar13 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_1d8 = *(undefined8 *)(lVar10 + 0x10 + uVar17 * 0x18);
          puVar1 = (undefined4 *)(lVar10 + uVar17 * 0x18);
          local_1e8 = *puVar1;
          uStack_1e4 = puVar1[1];
          uStack_1e0 = puVar1[2];
          uStack_1dc = puVar1[3];
          local_208 = &local_1e8;
          cVar7 = FUN_146bd896c(local_1f8,local_1f0,&local_1a8,&local_1c8);
          if (cVar7 != '\0') {
            local_188[2] = local_198;
            local_188[0] = local_1a8;
            local_188[1] = uStack_1a0;
            local_188[3] = local_1c8;
            uStack_168 = uStack_1c0;
            local_160 = local_1b8;
            local_158 = CONCAT44(uStack_1e4,local_1e8);
            uStack_150 = CONCAT44(uStack_1dc,uStack_1e0);
            local_148 = local_1d8;
            local_138 = *local_1f8;
            uStack_134 = local_1f8[1];
            uStack_130 = local_1f8[2];
            uStack_12c = local_1f8[3];
            local_128 = *(undefined8 *)(local_1f8 + 4);
            uStack_120 = *(undefined8 *)(local_1f8 + 6);
            local_118 = local_1f8[8];
            uStack_114 = local_1f8[9];
            uStack_110 = local_1f8[10];
            uStack_10c = local_1f8[0xb];
            puVar14 = local_188;
            puVar16 = local_108;
            for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
            cVar7 = FUN_146bd80f0(&local_138);
            if ((cVar7 != '\0') && (local_c0 < *param_6)) {
              uVar17 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
              goto LAB_146be121a;
            }
          }
        }
        else {
          pdVar9 = (double *)param_6[4];
          if ((double *)param_6[4] == (double *)0x0) {
            pdVar9 = param_6 + 6;
          }
          local_138 = uVar2;
          uVar8 = (**(code **)((longlong)*pdVar9 + 8))();
          cVar7 = (*pcVar3)(uVar8,&local_138);
          if (cVar7 != '\0') goto LAB_146be101e;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((int)uVar2 < 0) {
      dVar6 = (double)FUN_146bdfd0e(param_1,~uVar2,param_3);
      if (dVar6 <= (double)param_5 + 1e-08) {
        local_200 = param_6;
        local_208 = param_5;
        cVar7 = FUN_146be0f04(param_1,~uVar2,local_1f8,param_4);
LAB_146be1399:
        uVar17 = CONCAT71(uVar12,1);
        if (cVar7 != '\0') goto LAB_146be121a;
      }
    }
    else {
      iVar15 = uVar2 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4) + -1;
      dVar19 = (double)FUN_146bdfd0e(param_1,iVar15,param_3);
      dVar20 = (double)FUN_146bdfd0e(param_1,iVar11,param_3);
      dVar6 = (double)param_5 + 1e-08;
      if (dVar20 <= dVar19) {
        if (dVar20 <= dVar6) {
          local_200 = param_6;
          local_208 = param_5;
          cVar7 = FUN_146be0f04(param_1,iVar11,local_1f8,param_4);
          iVar11 = iVar15;
          dVar20 = dVar19;
          goto joined_r0x000146be1347;
        }
      }
      else if (dVar19 <= dVar6) {
        local_200 = param_6;
        local_208 = param_5;
        cVar7 = FUN_146be0f04(param_1,iVar15,local_1f8,param_4);
joined_r0x000146be1347:
        uVar17 = CONCAT71(uVar12,1);
        if (cVar7 != '\0') goto LAB_146be121a;
        if (dVar20 <= dVar6) {
          local_200 = param_6;
          local_208 = param_5;
          cVar7 = FUN_146be0f04(param_1,iVar11,local_1f8,param_4);
          goto LAB_146be1399;
        }
      }
    }
  }
  uVar17 = 0;
LAB_146be121a:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be13a6 FUN_146be13a6 body=2667 status=ok
// SIG undefined FUN_146be13a6(void)

void FUN_146be13a6(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,ulonglong *param_8,longlong param_9,longlong param_10
                  )

{
  uint *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  int local_2a0;
  double *local_298;
  ulonglong *local_290;
  longlong local_288;
  longlong local_280;
  int local_274;
  ulonglong local_270;
  ulonglong local_268;
  int local_25c;
  undefined8 *local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  ulonglong local_230;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                    (ulonglong)(param_5 & 0x1ff) * 4);
  iVar18 = *(int *)(param_1 + 200);
  if (((int)uVar7 < iVar18) && ((int)uVar13 < *(int *)(param_3 + 200))) {
    local_274 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
    local_25c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8)
                        + (ulonglong)(uVar13 & 0x1ff) * 4);
    local_210 = -1.0;
    local_268 = (ulonglong)uVar7;
    local_258 = param_4;
    if (0 < local_25c) {
      local_240 = (longlong *)(param_10 + 0x30);
      local_248 = param_4 + 4;
      local_268 = (ulonglong)(uVar7 + 1);
      uVar8 = 1;
      local_250 = param_3;
      local_238 = (ulonglong)uVar13;
      do {
        uVar7 = (int)uVar8 + (int)local_238;
        uVar7 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_250 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        local_270 = (ulonglong)uVar7;
        pcVar3 = *(code **)(param_10 + 0x10);
        local_230 = uVar8;
        if (pcVar3 == (code *)0x0) {
LAB_146be1576:
          plVar12 = local_248;
          puVar15 = local_258;
          lVar11 = *(longlong *)(local_250 + 8);
          lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + (local_270 >> 9 & 0x7fffff) * 8);
          uVar16 = local_270 & 0x1ff;
          uVar7 = *(uint *)(lVar4 + uVar16 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_108 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar8 * 0x18);
          local_118 = *puVar14;
          uStack_110 = puVar14[1];
          uVar7 = *(uint *)(lVar4 + 4 + uVar16 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_f0 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar8 * 0x18);
          local_100 = *puVar14;
          uStack_f8 = puVar14[1];
          uVar7 = *(uint *)(lVar4 + 8 + uVar16 * 0xc);
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_d8 = *(undefined8 *)(lVar11 + 0x10 + uVar8 * 0x18);
          puVar1 = (uint *)(lVar11 + uVar8 * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          pcVar3 = (code *)*local_258;
          if (pcVar3 != (code *)0x0) {
            plVar10 = (longlong *)local_258[2];
            if ((longlong *)local_258[2] == (longlong *)0x0) {
              plVar10 = local_248;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_118);
            local_108 = local_218;
            local_118 = CONCAT44(uStack_224,local_228);
            uStack_110 = CONCAT44(uStack_21c,uStack_220);
            pcVar3 = (code *)*puVar15;
            plVar10 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar10 = plVar12;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_100);
            local_f0 = local_218;
            local_100 = CONCAT44(uStack_224,local_228);
            uStack_f8 = CONCAT44(uStack_21c,uStack_220);
            pcVar3 = (code *)*puVar15;
            plVar10 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar10 = plVar12;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar14 = &local_118;
          puVar15 = local_1a8;
          for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          local_210 = -1.0;
          if (0 < local_274) {
            local_270 = local_270 << 0x20;
            uVar8 = local_268 & 0xffffffff;
            iVar18 = local_274;
            do {
              uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar8 >> 9) * 8) +
                               (ulonglong)((uint)uVar8 & 0x1ff) * 4);
              pcVar3 = *(code **)(param_9 + 0x10);
              if (pcVar3 == (code *)0x0) {
LAB_146be17ca:
                lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
                lVar4 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) +
                         (ulonglong)(uVar7 >> 9) * 8);
                uVar16 = (ulonglong)uVar7 & 0x1ff;
                uVar13 = *(uint *)(lVar4 + uVar16 * 0xc);
                lVar5 = *(longlong *)(lVar11 + (ulonglong)(uVar13 >> 9) * 8);
                uVar17 = (ulonglong)uVar13 & 0x1ff;
                local_c8[2] = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
                puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
                local_c8[0] = *puVar14;
                local_c8[1] = puVar14[1];
                uVar13 = *(uint *)(lVar4 + 4 + uVar16 * 0xc);
                lVar5 = *(longlong *)(lVar11 + (ulonglong)(uVar13 >> 9) * 8);
                uVar17 = (ulonglong)uVar13 & 0x1ff;
                local_a0 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
                puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
                local_c8[3] = *puVar14;
                uStack_a8 = puVar14[1];
                uVar13 = *(uint *)(lVar4 + 8 + uVar16 * 0xc);
                lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar13 >> 9) * 8);
                uVar16 = (ulonglong)uVar13 & 0x1ff;
                local_88 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
                puVar2 = (undefined4 *)(lVar11 + uVar16 * 0x18);
                local_98 = *puVar2;
                uStack_94 = puVar2[1];
                uStack_90 = puVar2[2];
                uStack_8c = puVar2[3];
                puVar14 = local_c8;
                puVar15 = local_160;
                for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_210 = -1.0;
                dVar21 = (double)FUN_146bd8e44(&local_210);
                if (dVar21 < *param_7) {
                  *param_7 = dVar21;
                  *param_8 = uVar7 | local_270;
                }
              }
              else {
                plVar12 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar12 = (longlong *)(param_9 + 0x30);
                }
                local_228 = uVar7;
                uVar9 = (**(code **)(*plVar12 + 8))();
                cVar6 = (*pcVar3)(uVar9,&local_228);
                if (cVar6 != '\0') goto LAB_146be17ca;
              }
              uVar8 = (ulonglong)((uint)uVar8 + 1);
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
        }
        else {
          plVar12 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar12 = local_240;
          }
          local_228 = uVar7;
          uVar9 = (**(code **)(*plVar12 + 8))();
          cVar6 = (*pcVar3)(uVar9,&local_228);
          if (cVar6 != '\0') goto LAB_146be1576;
        }
        uVar8 = (ulonglong)((int)local_230 + 1);
      } while ((int)local_230 != local_25c);
    }
    goto LAB_146be190b;
  }
  bVar19 = (param_6 & 1) == 0;
  if ((bVar19 || (int)uVar7 < iVar18) &&
      (*(int *)(param_3 + 200) <= (int)uVar13 || !bVar19 && (int)uVar7 >= iVar18)) {
    uVar8 = (ulonglong)((param_2 >> 9) << 3);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar8);
    lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar8);
    local_1e8 = *(double *)(lVar11 + 0x10 + lVar5);
    dVar21 = *(double *)(lVar4 + 0x10 + lVar5);
    local_200 = local_1e8 - dVar21;
    local_1f0 = *(double *)(lVar11 + 8 + lVar5);
    dVar22 = *(double *)(lVar4 + 8 + lVar5);
    local_208 = local_1f0 - dVar22;
    local_210 = *(double *)(lVar11 + lVar5) - *(double *)(lVar4 + lVar5);
    local_1e8 = local_1e8 + dVar21;
    local_1f0 = local_1f0 + dVar22;
    local_1f8 = *(double *)(lVar11 + lVar5) + *(double *)(lVar4 + lVar5);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8)
                       + (ulonglong)(uVar13 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      FUN_146be1e12(param_3,local_c8,~param_5,param_4);
      dVar21 = (double)FUN_146bd8cba(local_c8,&local_210);
      param_5 = ~param_5;
      if (*param_7 <= dVar21) goto LAB_146be190b;
    }
    else {
      param_5 = param_5 - 1;
      uVar7 = *(int *)(*(longlong *)
                        (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                      (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
      FUN_146be1e12(param_3,local_c8,param_5,param_4);
      FUN_146be1e12(param_3,&local_118,uVar7,param_4);
      dVar22 = (double)FUN_146bd8cba(local_c8,&local_210);
      dVar23 = (double)FUN_146bd8cba(&local_118,&local_210);
      dVar21 = *param_7;
      uVar20 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar23 < dVar22) {
        uVar13 = param_2;
        if (dVar23 < dVar21) goto LAB_146be1d46;
        goto LAB_146be1c67;
      }
      if (dVar22 < dVar21) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = param_5;
        FUN_146be13a6(param_1,param_2,param_3,param_4);
        uVar20 = SUB84(*param_7,0);
        uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      param_5 = uVar7;
      if ((double)CONCAT44(uVar24,uVar20) < dVar23 || (double)CONCAT44(uVar24,uVar20) == dVar23)
      goto LAB_146be190b;
    }
  }
  else {
    FUN_146be1e12(param_3,&local_210,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar21 = (double)FUN_146be1ff8(param_1,param_2,&local_210);
      if (*param_7 <= dVar21) goto LAB_146be190b;
    }
    else {
      uVar13 = param_2 - 1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar22 = (double)FUN_146be1ff8(param_1,uVar13,&local_210);
      dVar23 = (double)FUN_146be1ff8(param_1,param_2,&local_210);
      dVar21 = *param_7;
      uVar20 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar22 <= dVar23) {
        if (dVar22 < dVar21) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_146be13a6(param_1,uVar13,param_3,param_4);
          uVar20 = SUB84(*param_7,0);
          uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar24,uVar20) < dVar23 || (double)CONCAT44(uVar24,uVar20) == dVar23)
        goto LAB_146be190b;
      }
      else {
        if (dVar23 < dVar21) {
          local_2a8 = param_5;
          uVar7 = local_2a8;
LAB_146be1d46:
          local_2a8 = uVar7;
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          FUN_146be13a6(param_1,param_2,param_3,param_4);
          uVar20 = SUB84(*param_7,0);
          uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
LAB_146be1c67:
        param_2 = uVar13;
        if ((double)CONCAT44(uVar24,uVar20) < dVar22 || (double)CONCAT44(uVar24,uVar20) == dVar22)
        goto LAB_146be190b;
      }
    }
  }
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  local_2a8 = param_5;
  local_290 = param_8;
  local_288 = param_9;
  local_280 = param_10;
  FUN_146be13a6(param_1,param_2,param_3,param_4);
LAB_146be190b:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be1e12 FUN_146be1e12 body=484 status=ok
// SIG undefined FUN_146be1e12(void)

double * FUN_146be1e12(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_149f3aa60;
    local_88 = FUN_146be20fe;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be1ff8 FUN_146be1ff8 body=260 status=ok
// SIG undefined FUN_146be1ff8(void)

void FUN_146be1ff8(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be20fe FUN_146be20fe body=62 status=ok
// SIG undefined FUN_146be20fe(void)

undefined8 FUN_146be20fe(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 146be2166 FUN_146be2166 body=29 status=ok
// SIG undefined FUN_146be2166(void)

undefined8 FUN_146be2166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146be2184 FUN_146be2184 body=825 status=ok
// SIG undefined FUN_146be2184(void)

ulonglong FUN_146be2184(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_d8 = param_3;
  if ((int)uVar10 < *(int *)(param_1 + 200)) {
    iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if (0 < iVar14) {
      do {
        uVar10 = uVar10 + 1;
        uVar15 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar13 = (ulonglong)uVar15;
        pcVar3 = *(code **)(param_6 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_146be2269:
          lVar4 = *(longlong *)(param_1 + 8);
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
          uVar11 = uVar13 & 0x1ff;
          uVar15 = *(uint *)(lVar5 + uVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_88 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          uVar15 = *(uint *)(lVar5 + 4 + uVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_70 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_80 = *puVar1;
          uStack_78 = puVar1[1];
          uVar15 = *(uint *)(lVar5 + 8 + uVar11 * 0xc);
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_58 = *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x18);
          puVar2 = (undefined4 *)(lVar4 + uVar12 * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          cVar7 = (*(code *)*param_5)(param_5[1],local_d8,&local_98);
          if (cVar7 != '\0') goto LAB_146be233d;
        }
        else {
          plVar9 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_6 + 0x30);
          }
          local_9c = uVar15;
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar3)(uVar8,&local_9c);
          if (cVar7 != '\0') goto LAB_146be2269;
        }
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar13 = 0xffffffff;
  }
  else {
    uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar15 < 0) {
      uVar15 = ~uVar15;
      cVar7 = FUN_146be24be(param_1,uVar15,param_4);
      uVar13 = 0xffffffff;
      if (cVar7 == '\0') goto LAB_146be233d;
      local_b0 = *param_5;
      local_e8 = &local_b0;
      local_a8 = param_5[1];
    }
    else {
      iVar14 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
      cVar7 = FUN_146be24be(param_1,uVar15 - 1,param_4);
      if (cVar7 != '\0') {
        local_c0 = *param_5;
        local_e8 = &local_c0;
        local_b8 = param_5[1];
        local_e0 = param_6;
        uVar10 = FUN_146be2184(param_1,uVar15 - 1,local_d8,param_4);
        uVar13 = (ulonglong)uVar10;
        if (uVar10 != 0xffffffff) goto LAB_146be233d;
      }
      uVar15 = iVar14 - 1;
      cVar7 = FUN_146be24be(param_1,uVar15,param_4);
      uVar13 = 0xffffffff;
      if (cVar7 == '\0') goto LAB_146be233d;
      local_d0 = *param_5;
      local_e8 = &local_d0;
      local_c8 = param_5[1];
    }
    local_e0 = param_6;
    uVar10 = FUN_146be2184(param_1,uVar15,local_d8,param_4);
    uVar13 = (ulonglong)uVar10;
  }
LAB_146be233d:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be24be FUN_146be24be body=191 status=ok
// SIG undefined FUN_146be24be(void)

bool FUN_146be24be(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 146be2592 FUN_146be2592 body=2642 status=ok
// SIG undefined FUN_146be2592(void)

ulonglong FUN_146be2592(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double *pdVar1;
  uint *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 *puVar16;
  char cVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  undefined8 *local_210;
  int local_204;
  int local_200;
  uint local_1fc;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint *local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar27 = *(int *)(param_1 + 200);
  local_210 = param_4;
  if (((int)uVar18 < iVar27) && ((int)uVar8 < *(int *)(param_3 + 200))) {
    local_200 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    if (0 < local_200) {
      local_204 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
      local_1d8 = (longlong *)(param_9 + 0x30);
      local_1e8 = param_4 + 4;
      plVar22 = (longlong *)(param_8 + 0x30);
      local_1e0 = (ulonglong)(uVar18 + 1);
      uVar19 = 1;
      uVar26 = CONCAT71((uint7)(uint3)((uint)iVar27 >> 8),1);
      local_1f8 = param_3;
      local_1f0 = plVar22;
      local_1d0 = (ulonglong)uVar8;
      do {
        local_1fc = (uint)uVar26;
        uVar18 = (int)uVar19 + (int)local_1d0;
        uVar18 = *(uint *)(*(longlong *)
                            (*(longlong *)(local_1f8 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
        pcVar9 = *(code **)(param_9 + 0x10);
        local_1c8 = uVar19;
        if (pcVar9 == (code *)0x0) {
LAB_146be2764:
          plVar24 = local_1e8;
          puVar16 = local_210;
          lVar10 = *(longlong *)(local_1f8 + 8);
          lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
          uVar19 = (ulonglong)uVar18 & 0x1ff;
          uVar18 = *(uint *)(lVar11 + uVar19 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar26 = (ulonglong)uVar18 & 0x1ff;
          local_138 = *(uint **)(lVar12 + 0x10 + uVar26 * 0x18);
          pdVar1 = (double *)(lVar12 + uVar26 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          uVar18 = *(uint *)(lVar11 + 4 + uVar19 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar26 = (ulonglong)uVar18 & 0x1ff;
          local_120 = *(uint **)(lVar12 + 0x10 + uVar26 * 0x18);
          pdVar1 = (double *)(lVar12 + uVar26 * 0x18);
          local_130 = *pdVar1;
          uStack_128 = pdVar1[1];
          uVar18 = *(uint *)(lVar11 + 8 + uVar19 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar26 = (ulonglong)uVar18 & 0x1ff;
          puVar21 = *(uint **)(lVar10 + 0x10 + uVar26 * 0x18);
          puVar2 = (uint *)(lVar10 + uVar26 * 0x18);
          local_118 = *puVar2;
          uStack_114 = puVar2[1];
          uStack_110 = puVar2[2];
          uStack_10c = puVar2[3];
          pcVar9 = (code *)*local_210;
          local_108 = puVar21;
          if (pcVar9 != (code *)0x0) {
            plVar22 = (longlong *)local_210[2];
            if ((longlong *)local_210[2] == (longlong *)0x0) {
              plVar22 = local_1e8;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar9)(&local_160,uVar20,&local_148);
            local_138 = local_150;
            local_148 = (double)CONCAT44(uStack_15c,local_160);
            uStack_140 = (double)CONCAT44(uStack_154,uStack_158);
            pcVar9 = (code *)*puVar16;
            plVar22 = (longlong *)puVar16[2];
            if ((longlong *)puVar16[2] == (longlong *)0x0) {
              plVar22 = plVar24;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar9)(&local_160,uVar20,&local_130);
            plVar22 = local_1f0;
            local_120 = local_150;
            local_130 = (double)CONCAT44(uStack_15c,local_160);
            uStack_128 = (double)CONCAT44(uStack_154,uStack_158);
            pcVar9 = (code *)*puVar16;
            plVar23 = (longlong *)puVar16[2];
            if ((longlong *)puVar16[2] == (longlong *)0x0) {
              plVar23 = plVar24;
            }
            puVar21 = (uint *)(**(code **)(*plVar23 + 8))();
            (*pcVar9)(&local_160,puVar21,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            uStack_114 = uStack_15c;
            uStack_110 = uStack_158;
            uStack_10c = uStack_154;
          }
          if (0 < local_204) {
            uVar26 = local_1e0 & 0xffffffff;
            iVar27 = local_204;
            do {
              uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar26 >> 9) * 8) +
                                (ulonglong)((uint)uVar26 & 0x1ff) * 4);
              pcVar9 = *(code **)(param_8 + 0x10);
              if (pcVar9 == (code *)0x0) {
LAB_146be2978:
                lVar10 = *(longlong *)(param_1 + 8);
                lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar18 >> 9) * 8)
                ;
                uVar25 = (ulonglong)uVar18 & 0x1ff;
                uVar18 = *(uint *)(lVar11 + uVar25 * 0xc);
                lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                uVar19 = (ulonglong)uVar18 & 0x1ff;
                local_e8 = *(double *)(lVar12 + 0x10 + uVar19 * 0x18);
                pdVar1 = (double *)(lVar12 + uVar19 * 0x18);
                local_f8 = *pdVar1;
                dStack_f0 = pdVar1[1];
                uVar18 = *(uint *)(lVar11 + 4 + uVar25 * 0xc);
                lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                uVar19 = (ulonglong)uVar18 & 0x1ff;
                local_d0 = *(double *)(lVar12 + 0x10 + uVar19 * 0x18);
                pdVar1 = (double *)(lVar12 + uVar19 * 0x18);
                local_e0 = *pdVar1;
                dStack_d8 = pdVar1[1];
                uVar18 = *(uint *)(lVar11 + 8 + uVar25 * 0xc);
                lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                uVar19 = (ulonglong)uVar18 & 0x1ff;
                local_b8 = *(undefined8 *)(lVar10 + 0x10 + uVar19 * 0x18);
                puVar3 = (undefined4 *)(lVar10 + uVar19 * 0x18);
                local_c8 = *puVar3;
                uStack_c4 = puVar3[1];
                uStack_c0 = puVar3[2];
                uStack_bc = puVar3[3];
                puVar21 = (uint *)&local_148;
                cVar17 = (*(code *)*param_7)(param_7[1],puVar21,&local_f8);
                if (cVar17 != '\0') {
                  uVar26 = (ulonglong)local_1fc;
                  goto LAB_146be2a7c;
                }
              }
              else {
                plVar24 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar24 = plVar22;
                }
                local_160 = uVar18;
                uVar20 = (**(code **)(*plVar24 + 8))();
                puVar21 = &local_160;
                cVar17 = (*pcVar9)(uVar20,puVar21);
                if (cVar17 != '\0') goto LAB_146be2978;
              }
              uVar26 = (ulonglong)((uint)uVar26 + 1);
              iVar27 = iVar27 + -1;
            } while (iVar27 != 0);
          }
        }
        else {
          plVar24 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar24 = local_1d8;
          }
          local_160 = uVar18;
          uVar20 = (**(code **)(*plVar24 + 8))();
          puVar21 = &local_160;
          cVar17 = (*pcVar9)(uVar20,puVar21);
          if (cVar17 != '\0') goto LAB_146be2764;
        }
        iVar27 = (int)local_1c8;
        uVar19 = (ulonglong)(iVar27 + 1);
        uVar26 = CONCAT71((int7)((ulonglong)puVar21 >> 8),iVar27 < local_200);
      } while (iVar27 != local_200);
      goto LAB_146be2a7c;
    }
    goto LAB_146be2b69;
  }
  bVar28 = (param_6 & 1) == 0;
  if ((bVar28 || (int)uVar18 < iVar27) &&
      (*(int *)(param_3 + 200) <= (int)uVar8 || !bVar28 && (int)uVar18 >= iVar27)) {
    uVar26 = (ulonglong)((param_2 >> 9) << 3);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar26);
    lVar12 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar26);
    dVar4 = *(double *)(lVar10 + 0x10 + lVar12);
    dVar5 = *(double *)(lVar11 + 0x10 + lVar12);
    dVar13 = dVar4 - dVar5;
    dVar6 = *(double *)(lVar10 + 8 + lVar12);
    dVar7 = *(double *)(lVar11 + 8 + lVar12);
    dVar14 = dVar6 - dVar7;
    dVar15 = *(double *)(lVar10 + lVar12) - *(double *)(lVar11 + lVar12);
    dVar4 = dVar4 + dVar5;
    dVar6 = dVar6 + dVar7;
    dVar5 = *(double *)(lVar10 + lVar12) + *(double *)(lVar11 + lVar12);
    uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
    if ((int)uVar18 < 0) {
      FUN_146be1e12(param_3,&local_f8,~uVar18,param_4);
      if ((((dVar5 <= local_f8) || (local_e0 <= dVar15)) ||
          ((dVar6 <= dStack_f0 || ((dStack_d8 <= dVar14 || (dVar4 <= local_e8)))))) ||
         (local_d0 <= dVar13)) goto LAB_146be2b69;
      uVar20 = *param_7;
      local_228 = local_170;
    }
    else {
      iVar27 = *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
      FUN_146be1e12(param_3,&local_f8,uVar18 - 1,param_4);
      if (((((local_f8 < dVar5) && (dVar15 < local_e0)) && (dStack_f0 < dVar6)) &&
          ((dVar14 < dStack_d8 && (local_e8 < dVar4)))) && (dVar13 < local_d0)) {
        local_180 = *param_7;
        local_228 = &local_180;
        local_178 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        uVar26 = (ulonglong)param_2;
        local_238 = uVar18 - 1;
        cVar17 = FUN_146be2592(param_1,uVar26,param_3,local_210);
        uVar26 = CONCAT71((int7)(uVar26 >> 8),1);
        if (cVar17 != '\0') goto LAB_146be2a7c;
      }
      param_5 = iVar27 - 1;
      FUN_146be1e12(param_3,&local_148,param_5,local_210);
      uVar19 = 0;
      uVar26 = 0;
      if (((dVar5 <= local_148) || (uVar26 = uVar19, local_130 <= dVar15)) ||
         ((dVar6 <= uStack_140 ||
          (((uStack_128 <= dVar14 || (dVar4 <= (double)local_138)) || ((double)local_120 <= dVar13))
          )))) goto LAB_146be2a7c;
      uVar20 = *param_7;
      local_228 = local_190;
    }
    *local_228 = uVar20;
    local_228[1] = param_7[1];
    param_4 = local_210;
    local_238 = param_5;
LAB_146be2ce0:
    local_218 = param_9;
    local_220 = param_8;
    local_230 = param_6 + 1;
    uVar18 = FUN_146be2592(param_1,param_2,param_3,param_4);
    uVar26 = (ulonglong)uVar18;
  }
  else {
    FUN_146be1e12(param_3,&local_f8,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8)
                       + (ulonglong)(uVar18 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar17 = FUN_146be24be(param_1,param_2,&local_f8);
      if (cVar17 != '\0') {
        local_1a0 = *param_7;
        local_228 = &local_1a0;
        local_198 = param_7[1];
        local_238 = param_5;
        goto LAB_146be2ce0;
      }
    }
    else {
      iVar27 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
      cVar17 = FUN_146be24be(param_1,param_2 - 1,&local_f8);
      if (cVar17 != '\0') {
        local_1b0 = *param_7;
        local_228 = &local_1b0;
        local_1a8 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        local_238 = param_5;
        uVar26 = (ulonglong)(param_2 - 1);
        cVar17 = FUN_146be2592(param_1,uVar26,param_3,local_210);
        uVar26 = CONCAT71((int7)(uVar26 >> 8),1);
        if (cVar17 != '\0') goto LAB_146be2a7c;
      }
      param_2 = iVar27 - 1;
      cVar17 = FUN_146be24be(param_1,param_2,&local_f8);
      if (cVar17 != '\0') {
        local_1c0 = *param_7;
        local_228 = &local_1c0;
        local_1b8 = param_7[1];
        param_4 = local_210;
        local_238 = param_5;
        goto LAB_146be2ce0;
      }
    }
LAB_146be2b69:
    uVar26 = 0;
  }
LAB_146be2a7c:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26 & 0xffffff01;
}



// FUNCTION 146be2ffa FUN_146be2ffa body=62 status=ok
// SIG undefined FUN_146be2ffa(void)

undefined8 FUN_146be2ffa(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 146be3062 FUN_146be3062 body=29 status=ok
// SIG undefined FUN_146be3062(void)

undefined8 FUN_146be3062(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146be3080 FUN_146be3080 body=2695 status=ok
// SIG undefined FUN_146be3080(void)

void FUN_146be3080(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  uint *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  double *pdVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_3a8 [32];
  uint local_388;
  int local_380;
  undefined8 local_378;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  int local_354;
  ulonglong local_350;
  int local_344;
  undefined8 *local_340;
  longlong local_338;
  longlong *local_330;
  ulonglong local_328;
  longlong *local_320;
  ulonglong local_318;
  ulonglong local_310;
  longlong *local_308;
  undefined8 local_300 [2];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0 [2];
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  double local_248;
  double local_238 [4];
  double dStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar28 = *(int *)(param_1 + 200);
  if (((int)uVar16 < iVar28) && ((int)uVar6 < *(int *)(param_3 + 200))) {
    local_344 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)(uVar6 & 0x1ff) * 4);
    local_340 = param_4;
    if (0 < local_344) {
      local_354 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_320 = (longlong *)(param_10 + 0x30);
      local_330 = param_4 + 4;
      local_308 = (longlong *)(param_9 + 0x30);
      local_328 = (ulonglong)(uVar16 + 1);
      uVar17 = 1;
      local_338 = param_3;
      local_318 = (ulonglong)uVar6;
      do {
        uVar16 = (int)uVar17 + (int)local_318;
        uVar16 = *(uint *)(*(longlong *)
                            (*(longlong *)(local_338 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
        local_350 = (ulonglong)uVar16;
        pcVar7 = *(code **)(param_10 + 0x10);
        local_310 = uVar17;
        if (pcVar7 == (code *)0x0) {
LAB_146be329c:
          plVar21 = local_330;
          puVar22 = local_340;
          lVar20 = *(longlong *)(local_338 + 8);
          lVar8 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + (local_350 >> 9 & 0x7fffff) * 8);
          uVar26 = local_350 & 0x1ff;
          uVar16 = *(uint *)(lVar8 + uVar26 * 0xc);
          lVar9 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
          uVar17 = (ulonglong)uVar16 & 0x1ff;
          local_278 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
          pdVar23 = (double *)(lVar9 + uVar17 * 0x18);
          local_288 = *pdVar23;
          uStack_280 = pdVar23[1];
          uVar16 = *(uint *)(lVar8 + 4 + uVar26 * 0xc);
          lVar9 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
          uVar17 = (ulonglong)uVar16 & 0x1ff;
          local_260 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
          pdVar23 = (double *)(lVar9 + uVar17 * 0x18);
          local_270 = *pdVar23;
          uStack_268 = pdVar23[1];
          uVar16 = *(uint *)(lVar8 + 8 + uVar26 * 0xc);
          lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
          uVar17 = (ulonglong)uVar16 & 0x1ff;
          local_248 = *(double *)(lVar20 + 0x10 + uVar17 * 0x18);
          puVar1 = (uint *)(lVar20 + uVar17 * 0x18);
          local_258 = *puVar1;
          uStack_254 = puVar1[1];
          uStack_250 = puVar1[2];
          uStack_24c = puVar1[3];
          pcVar7 = (code *)*local_340;
          if (pcVar7 != (code *)0x0) {
            plVar19 = (longlong *)local_340[2];
            if ((longlong *)local_340[2] == (longlong *)0x0) {
              plVar19 = local_330;
            }
            uVar18 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_2a0,uVar18,&local_288);
            local_278 = local_290;
            local_288 = (double)CONCAT44(uStack_29c,local_2a0);
            uStack_280 = (double)CONCAT44(uStack_294,uStack_298);
            pcVar7 = (code *)*puVar22;
            plVar19 = (longlong *)puVar22[2];
            if ((longlong *)puVar22[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar18 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_2a0,uVar18,&local_270);
            local_260 = local_290;
            local_270 = (double)CONCAT44(uStack_29c,local_2a0);
            uStack_268 = (double)CONCAT44(uStack_294,uStack_298);
            pcVar7 = (code *)*puVar22;
            plVar19 = (longlong *)puVar22[2];
            if ((longlong *)puVar22[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar18 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_2a0,uVar18,&local_258);
            local_248 = local_290;
            local_258 = local_2a0;
            uStack_254 = uStack_29c;
            uStack_250 = uStack_298;
            uStack_24c = uStack_294;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar22 = &local_288;
          puVar24 = local_1e8;
          for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          }
          if (0 < local_354) {
            uVar17 = local_328 & 0xffffffff;
            iVar28 = local_354;
            do {
              uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar17 >> 9) * 8) +
                                (ulonglong)((uint)uVar17 & 0x1ff) * 4);
              pcVar7 = *(code **)(param_9 + 0x10);
              if (pcVar7 == (code *)0x0) {
LAB_146be34e9:
                lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
                lVar8 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) +
                         (ulonglong)(uVar16 >> 9) * 8);
                uVar26 = (ulonglong)uVar16 & 0x1ff;
                uVar6 = *(uint *)(lVar8 + uVar26 * 0xc);
                lVar9 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 9) * 8);
                uVar27 = (ulonglong)uVar6 & 0x1ff;
                local_238[2] = *(double *)(lVar9 + 0x10 + uVar27 * 0x18);
                pdVar23 = (double *)(lVar9 + uVar27 * 0x18);
                local_238[0] = *pdVar23;
                local_238[1] = pdVar23[1];
                uVar6 = *(uint *)(lVar8 + 4 + uVar26 * 0xc);
                lVar9 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 9) * 8);
                uVar27 = (ulonglong)uVar6 & 0x1ff;
                local_210 = *(double *)(lVar9 + 0x10 + uVar27 * 0x18);
                pdVar23 = (double *)(lVar9 + uVar27 * 0x18);
                local_238[3] = *pdVar23;
                dStack_218 = pdVar23[1];
                uVar6 = *(uint *)(lVar8 + 8 + uVar26 * 0xc);
                lVar20 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 9) * 8);
                uVar26 = (ulonglong)uVar6 & 0x1ff;
                local_1f8 = *(undefined8 *)(lVar20 + 0x10 + uVar26 * 0x18);
                puVar2 = (undefined4 *)(lVar20 + uVar26 * 0x18);
                local_208 = *puVar2;
                uStack_204 = puVar2[1];
                uStack_200 = puVar2[2];
                uStack_1fc = puVar2[3];
                local_14c = local_14c & 0xffffffff00000000;
                pdVar23 = local_238;
                pdVar25 = local_1a0;
                for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *pdVar25 = *pdVar23;
                  pdVar23 = pdVar23 + 1;
                  pdVar25 = pdVar25 + 1;
                }
                cVar15 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar15 != '\0') {
                  FUN_146be3b36(local_1e8,(ulonglong)uVar16,local_350,param_7);
                }
              }
              else {
                plVar21 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar21 = local_308;
                }
                local_2a0 = uVar16;
                uVar18 = (**(code **)(*plVar21 + 8))();
                cVar15 = (*pcVar7)(uVar18,&local_2a0);
                if (cVar15 != '\0') goto LAB_146be34e9;
              }
              uVar17 = (ulonglong)((uint)uVar17 + 1);
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
        }
        else {
          plVar21 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar21 = local_320;
          }
          local_2a0 = uVar16;
          uVar18 = (**(code **)(*plVar21 + 8))();
          cVar15 = (*pcVar7)(uVar18,&local_2a0);
          if (cVar15 != '\0') goto LAB_146be329c;
        }
        uVar17 = (ulonglong)((int)local_310 + 1);
      } while ((int)local_310 != local_344);
    }
    goto LAB_146be361d;
  }
  bVar29 = (param_6 & 1) == 0;
  if ((bVar29 || (int)uVar16 < iVar28) &&
      (*(int *)(param_3 + 200) <= (int)uVar6 || !bVar29 && (int)uVar16 >= iVar28)) {
    dVar3 = *(double *)(param_1 + 0x60);
    uVar17 = (ulonglong)((param_2 >> 9) << 3);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar17);
    lVar9 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar17);
    dVar13 = *(double *)(lVar8 + lVar9) + dVar3;
    dVar11 = *(double *)(lVar8 + 8 + lVar9) + dVar3;
    dVar3 = dVar3 + *(double *)(lVar8 + 0x10 + lVar9);
    dVar4 = *(double *)(lVar20 + 0x10 + lVar9);
    dVar10 = dVar4 - dVar3;
    dVar5 = *(double *)(lVar20 + 8 + lVar9);
    dVar12 = dVar5 - dVar11;
    dVar14 = *(double *)(lVar20 + lVar9) - dVar13;
    dVar3 = dVar3 + dVar4;
    dVar11 = dVar11 + dVar5;
    dVar13 = dVar13 + *(double *)(lVar20 + lVar9);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_146be1e12(param_3,local_238,param_5,param_4);
      if ((((dVar13 <= local_238[0]) || (local_238[3] <= dVar14)) ||
          ((dVar11 <= local_238[1] || ((dStack_218 <= dVar12 || (dVar3 <= local_238[2])))))) ||
         (local_210 <= dVar10)) goto LAB_146be361d;
      uVar18 = *param_8;
      local_370 = local_2b0;
    }
    else {
      FUN_146be1e12(param_3,local_238,param_5 - 1,param_4);
      if (((((local_238[0] < dVar13) && (dVar14 < local_238[3])) && (local_238[1] < dVar11)) &&
          ((dVar12 < dStack_218 && (local_238[2] < dVar3)))) && (dVar10 < local_210)) {
        local_2c0 = *param_8;
        local_370 = &local_2c0;
        local_2b8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5 - 1;
        FUN_146be3080(param_1,param_2,param_3,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      FUN_146be1e12(param_3,&local_288,param_5,param_4);
      if (((dVar13 <= local_288) || (local_270 <= dVar14)) ||
         ((dVar11 <= uStack_280 ||
          (((uStack_268 <= dVar12 || (dVar3 <= local_278)) || (local_260 <= dVar10))))))
      goto LAB_146be361d;
      uVar18 = *param_8;
      local_370 = local_2d0;
    }
  }
  else {
    FUN_146be1e12(param_3,local_238,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                       + (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_146be24be(param_1,param_2,local_238);
      if (cVar15 == '\0') goto LAB_146be361d;
      uVar18 = *param_8;
      local_370 = local_2e0;
    }
    else {
      cVar15 = FUN_146be24be(param_1,param_2 - 1,local_238);
      if (cVar15 != '\0') {
        local_2f0 = *param_8;
        local_370 = &local_2f0;
        local_2e8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5;
        FUN_146be3080(param_1,param_2 - 1,param_3,param_4);
      }
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
      cVar15 = FUN_146be24be(param_1,param_2,local_238);
      if (cVar15 == '\0') goto LAB_146be361d;
      uVar18 = *param_8;
      local_370 = local_300;
    }
  }
  *local_370 = uVar18;
  local_370[1] = param_8[1];
  local_380 = param_6 + 1;
  local_360 = param_10;
  local_368 = param_9;
  local_378 = param_7;
  local_388 = param_5;
  FUN_146be3080(param_1,param_2,param_3,param_4);
LAB_146be361d:
  if ((local_b0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be3b08 FUN_146be3b08 body=45 status=ok
// SIG undefined FUN_146be3b08(void)

bool FUN_146be3b08(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 146be3b36 FUN_146be3b36 body=1201 status=ok
// SIG undefined FUN_146be3b36(void)

void FUN_146be3b36(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_146be3c73;
    }
    if (iVar4 < 3) goto LAB_146be3c73;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_146be3c73;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_146be3c73;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_146be3c73:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be3fe8 FUN_146be3fe8 body=362 status=ok
// SIG undefined FUN_146be3fe8(void)

ulonglong FUN_146be3fe8(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_146be4182(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_146be4129;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_146be44ee(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_146be4129:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}


