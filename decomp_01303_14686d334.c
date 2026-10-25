// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14686d334 FUN_14686d334 body=42 status=ok
// SIG undefined FUN_14686d334(void)

undefined4 FUN_14686d334(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    if ((iVar1 == 1) && (*(int *)(param_1 + 0x24) < 1)) {
      param_1 = param_1 + 8;
    }
    else {
      param_1 = *(longlong *)(param_1 + 0x18);
    }
    return *(undefined4 *)(param_1 + 8 + (ulonglong)(iVar1 - 1) * 0xc);
  }
  return 0;
}



// FUNCTION 14686d35e FUN_14686d35e body=25 status=ok
// SIG undefined FUN_14686d35e(void)

undefined8 FUN_14686d35e(undefined8 param_1,undefined8 param_2)

{
  FUN_14075f7c0(param_2,param_1);
  return 1;
}



// FUNCTION 14686d378 FUN_14686d378 body=100 status=ok
// SIG undefined FUN_14686d378(void)

undefined8 FUN_14686d378(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((DAT_14c9485a8 != (longlong *)0x0 && DAT_14c9485b0 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c9485a8 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14c9485a8;
    if (DAT_14c9485b0 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014686d3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14686d3dc FUN_14686d3dc body=165 status=ok
// SIG undefined FUN_14686d3dc(void)

undefined8 FUN_14686d3dc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400020e8(param_2,&DAT_149e01f5a,1);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1400b2348(param_1,&local_38,1);
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,&DAT_149e01f5a,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686d482 FUN_14686d482 body=41 status=ok
// SIG undefined FUN_14686d482(void)

void FUN_14686d482(undefined8 param_1,char *param_2,undefined8 *param_3,undefined4 param_4)

{
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_1446ded13(param_1,param_2,param_4,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014686d4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_3[1],&DAT_14c948618,(code *)*param_3);
  return;
}



// FUNCTION 14686d4ab FUN_14686d4ab body=60 status=ok
// SIG undefined FUN_14686d4ab(void)

void FUN_14686d4ab(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  short *psVar1;
  
  if (*(int *)(param_2 + 1) == 0) {
    psVar1 = &DAT_149dfb77a;
  }
  else {
    psVar1 = (short *)*param_2;
  }
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    FUN_1446df218(param_1,psVar1,param_4,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014686d4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_3[1],&DAT_14c948618,(code *)*param_3);
  return;
}



// FUNCTION 14686d4e7 FUN_14686d4e7 body=75 status=ok
// SIG undefined FUN_14686d4e7(void)

undefined8 FUN_14686d4e7(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 == 0) {
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar4 = *param_2;
    lVar3 = (longlong)iVar1 * 0xc;
    do {
      lVar3 = lVar3 + -0xc;
      uVar2 = (*(code *)*param_3)(param_3[1],lVar4);
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
      lVar4 = lVar4 + 0xc;
    } while (lVar3 != 0);
  }
  return uVar2;
}



// FUNCTION 14686d532 FUN_14686d532 body=181 status=ok
// SIG undefined FUN_14686d532(void)

bool FUN_14686d532(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892b58;
  if (uVar1 == uVar2) {
    local_40 = 0;
    (**(code **)(*param_3 + 0x160))(param_3,&local_40);
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_1458036cb(&local_4c,local_40,0);
    *param_1 = CONCAT44(uStack_48,local_4c);
    *(undefined4 *)(param_1 + 1) = uStack_44;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 == uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686d5e8 FUN_14686d5e8 body=149 status=ok
// SIG undefined FUN_14686d5e8(void)

uint FUN_14686d5e8(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar3 = 0xffffffff;
  if (-1 < (int)param_2) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar1 = *(uint *)(lVar2 + 8);
    if ((int)param_2 < (int)(uVar1 - *(int *)(lVar2 + 0x34))) {
      if (*(int *)(lVar2 + 0x34) == 0) {
        if ((int)param_2 < *(int *)(lVar2 + 0x28)) {
          lVar4 = lVar2 + 0x10;
          if (*(longlong *)(lVar2 + 0x20) != 0) {
            lVar4 = *(longlong *)(lVar2 + 0x20);
          }
          uVar3 = 0xffffffff;
          if ((*(uint *)(lVar4 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
            uVar3 = param_2;
          }
        }
      }
      else if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if ((int)uVar5 < *(int *)(lVar2 + 0x28)) {
            lVar4 = *(longlong *)(lVar2 + 0x20);
            if (*(longlong *)(lVar2 + 0x20) == 0) {
              lVar4 = lVar2 + 0x10;
            }
            if ((*(uint *)(lVar4 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
              if (param_2 == 0) {
                return uVar5;
              }
              param_2 = param_2 - 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  return uVar3;
}



// FUNCTION 14686d67e FUN_14686d67e body=2287 status=ok
// SIG undefined FUN_14686d67e(void)

void FUN_14686d67e(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_138 [40];
  undefined8 *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong *puStack_88;
  ulonglong *local_80;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar2 = *(longlong **)(*param_1 + (longlong)((int)param_1[1] + -1) * 0x10);
  if (plVar2 == (longlong *)0x0) goto LAB_14686d6e5;
  lVar14 = plVar2[1];
  lVar6 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar6 + 8) == 0) {
    bVar16 = lVar14 != 0;
    if (lVar14 != lVar6 && bVar16) {
      do {
        lVar14 = *(longlong *)(lVar14 + 0x30);
        bVar16 = lVar14 != 0;
        if (lVar14 == lVar6) break;
      } while (lVar14 != 0);
    }
    if (!bVar16) goto LAB_14686d740;
  }
  else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_14686d740:
    lVar14 = plVar2[1];
    lVar6 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar16 = lVar14 != 0;
      if (lVar14 != lVar6 && bVar16) {
        do {
          lVar14 = *(longlong *)(lVar14 + 0x30);
          bVar16 = lVar14 != 0;
          if (lVar14 == lVar6) break;
        } while (lVar14 != 0);
      }
      if (!bVar16) goto LAB_14686dad9;
    }
    else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_14686dad9:
      lVar14 = plVar2[1];
      lVar6 = FUN_144a7e162();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar16 = lVar14 != 0;
        if (lVar14 != lVar6 && bVar16) {
          do {
            lVar14 = *(longlong *)(lVar14 + 0x30);
            bVar16 = lVar14 != 0;
            if (lVar14 == lVar6) break;
          } while (lVar14 != 0);
        }
        if (!bVar16) goto LAB_14686dc57;
      }
      else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_14686dc57:
        lVar14 = plVar2[1];
        lVar6 = FUN_140019ace();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar16 = lVar14 != 0;
          if (lVar14 != lVar6 && bVar16) {
            do {
              lVar14 = *(longlong *)(lVar14 + 0x30);
              bVar16 = lVar14 != 0;
              if (lVar14 == lVar6) break;
            } while (lVar14 != 0);
          }
          if (!bVar16) goto LAB_14686dcd0;
        }
        else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_14686dcd0:
          lVar14 = plVar2[1];
          lVar6 = FUN_1446dcc8c();
          if (*(ulonglong *)(lVar6 + 8) == 0) {
            bVar16 = lVar14 != 0;
            if (lVar14 != lVar6 && bVar16) {
              do {
                lVar14 = *(longlong *)(lVar14 + 0x30);
                bVar16 = lVar14 != 0;
                if (lVar14 == lVar6) break;
              } while (lVar14 != 0);
            }
            if (!bVar16) goto LAB_14686dde7;
          }
          else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_14686dde7:
            if ((*(byte *)((longlong)plVar2 + 0x3e) & 2) != 0) {
              lVar14 = plVar2[1];
              lVar6 = FUN_144a810c6();
              if (*(ulonglong *)(lVar6 + 8) == 0) {
                bVar16 = lVar14 != 0;
                if (lVar14 != lVar6 && bVar16) {
                  do {
                    lVar14 = *(longlong *)(lVar14 + 0x30);
                    bVar16 = lVar14 != 0;
                    if (lVar14 == lVar6) break;
                  } while (lVar14 != 0);
                }
                if (!bVar16) goto LAB_14686d6e5;
              }
              else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0)
              goto LAB_14686d6e5;
              uVar10 = (**(code **)(*plVar2 + 0x210))(plVar2,param_2);
              if (uVar10 != 0) {
                puStack_88 = (ulonglong *)0x0;
                uVar1 = *(uint *)(param_1 + 1);
                _Src = (void *)*param_1;
                local_80 = (ulonglong *)CONCAT44(local_80._4_4_,uVar1);
                local_90 = uVar10;
                if ((longlong)(int)uVar1 == 0) {
                  local_80 = (ulonglong *)(ulonglong)uVar1;
                }
                else {
                  FUN_146872de8(&puStack_88,uVar1);
                  memcpy(puStack_88,_Src,(longlong)(int)uVar1 << 4);
                }
                local_c0 = param_2;
                (*(code *)*param_3)(param_3[1],&local_90);
                if (puStack_88 != (ulonglong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            goto LAB_14686d6e5;
          }
          if (((*(byte *)((longlong)plVar2 + 0x3c) & 0x80) != 0) && (plVar2[0xe] != 0)) {
            for (lVar14 = *(longlong *)(plVar2[0xe] + 0x78); lVar14 != 0;
                lVar14 = *(longlong *)(lVar14 + 0x50)) {
              if (0 < *(int *)(lVar14 + 0x30)) {
                lVar6 = 0;
                do {
                  iVar15 = *(int *)(lVar14 + 0x44);
                  iVar7 = *(int *)(lVar14 + 0x34);
                  iVar8 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
                    FUN_146872cc6(param_1,iVar8);
                  }
                  lVar11 = *param_1;
                  lVar13 = (longlong)iVar8 * 0x10;
                  *(longlong *)(lVar11 + lVar13) = lVar14;
                  *(int *)(lVar11 + 8 + lVar13) = (int)lVar6;
                  *(undefined1 *)(lVar11 + 0xc + lVar13) = 0;
                  local_f0 = *param_3;
                  local_e8 = param_3[1];
                  FUN_14686d67e(param_1,(longlong)param_2 + iVar7 * lVar6 + (longlong)iVar15,
                                &local_f0);
                  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
                  FUN_146872d4c(param_1);
                  lVar6 = lVar6 + 1;
                } while (lVar6 < *(int *)(lVar14 + 0x30));
              }
            }
          }
          goto LAB_14686d6e5;
        }
        if ((*(byte *)((longlong)plVar2 + 0x3c) & 0x80) != 0) {
          cVar5 = (**(code **)(*(longlong *)plVar2[0xe] + 0x1b8))();
          plVar3 = (longlong *)plVar2[0xe];
          if (cVar5 == '\0') {
            cVar5 = (char)*(ulonglong *)
                           ((longlong)param_2 +
                           (longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
          }
          else {
            cVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,param_2);
          }
          if ((param_2 != (ulonglong *)0x0) && (cVar5 != '\0')) {
            lVar14 = plVar2[0xe];
            iVar15 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar15 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
              FUN_146872cc6(param_1,iVar15);
            }
            lVar6 = *param_1;
            lVar11 = (longlong)iVar15 * 0x10;
            *(longlong *)(lVar6 + lVar11) = lVar14;
            *(undefined4 *)(lVar6 + 8 + lVar11) = 0xffffffff;
            *(undefined1 *)(lVar6 + 0xc + lVar11) = 0;
            local_e0 = *param_3;
            local_d8 = param_3[1];
            FUN_14686d67e(param_1,param_2);
            *(int *)(param_1 + 1) = (int)param_1[1] + -1;
            FUN_146872d4c(param_1);
          }
        }
        goto LAB_14686d6e5;
      }
      if ((*(byte *)((longlong)plVar2 + 0x3c) & 0x80) != 0) {
        local_90 = plVar2[0xe];
        local_c0 = &local_90;
        local_80 = (ulonglong *)plVar2[0xf];
        iStack_78 = (int)plVar2[0x10];
        uStack_74 = *(undefined4 *)((longlong)plVar2 + 0x84);
        iStack_70 = (int)plVar2[0x11];
        local_b8 = 0xffffffffffffffff;
        puStack_88 = param_2;
        FUN_14000a0a0(&local_c0);
        if (-1 < (int)(uint)local_b8) {
          do {
            uVar10 = local_c0[1];
            if (*(int *)(uVar10 + 0x28) <= (int)(uint)local_b8) break;
            lVar14 = uVar10 + 0x10;
            if (*(longlong *)(uVar10 + 0x20) != 0) {
              lVar14 = *(longlong *)(uVar10 + 0x20);
            }
            if ((*(uint *)(lVar14 + (ulonglong)((uint)local_b8 >> 5) * 4) >> ((uint)local_b8 & 0x1f)
                & 1) == 0) break;
            lVar6 = (longlong)iStack_70;
            lVar11 = (longlong)(int)(uint)local_b8;
            uVar10 = *puStack_88;
            uVar4 = local_b8._4_4_;
            lVar14 = plVar2[0xe];
            iVar15 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar15 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
              FUN_146872cc6(param_1,iVar15);
            }
            lVar13 = *param_1;
            lVar12 = (longlong)iVar15 * 0x10;
            *(longlong *)(lVar13 + lVar12) = lVar14;
            *(undefined4 *)(lVar13 + 8 + lVar12) = uVar4;
            *(undefined1 *)(lVar13 + 0xc + lVar12) = 0;
            local_d0 = *param_3;
            local_c8 = param_3[1];
            FUN_14686d67e(param_1,lVar11 * lVar6 + uVar10,&local_d0);
            *(int *)(param_1 + 1) = (int)param_1[1] + -1;
            FUN_146872d4c(param_1);
            FUN_14000a0a0(&local_c0);
          } while (-1 < (int)(uint)local_b8);
        }
      }
      goto LAB_14686d6e5;
    }
    if ((*(byte *)((longlong)plVar2 + 0x3c) & 0x80) != 0) {
      local_60 = *(byte *)(plVar2 + 0x13);
      local_90 = plVar2[0xe];
      puStack_88 = (ulonglong *)plVar2[0xf];
      iStack_78 = (int)plVar2[0x10];
      uStack_74 = *(undefined4 *)((longlong)plVar2 + 0x84);
      iStack_70 = (int)plVar2[0x11];
      uStack_6c = *(undefined4 *)((longlong)plVar2 + 0x8c);
      local_68 = plVar2[0x12];
      iVar15 = (int)param_2[1];
      iVar8 = 0;
      iVar7 = iVar8;
      local_110 = param_3;
      local_80 = param_2;
      if (0 < iVar15) {
        do {
          local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,iVar8);
          cVar5 = FUN_1446ec082(&local_90,&local_c0);
          iVar7 = iVar8;
          if (cVar5 != '\0') break;
          iVar8 = iVar8 + 1;
          iVar7 = iVar15;
        } while (iVar15 != iVar8);
      }
      local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,iVar7);
      cVar5 = FUN_1446ec082(&local_90);
      if (cVar5 != '\0') {
        iVar15 = 0;
        do {
          local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar15);
          if ((local_60 & 1) == 0) {
            lVar14 = (longlong)local_68._4_4_ * (longlong)iVar7 + *local_80;
          }
          else {
            uVar10 = *local_80;
            uVar9 = ((longlong)uVar10 >> 0x18) + (longlong)local_80;
            if ((uVar10 & 1) == 0) {
              uVar9 = uVar10;
            }
            lVar14 = (longlong)local_68._4_4_ * (longlong)iVar7 + uVar9;
          }
          local_108 = (longlong)iStack_78;
          lVar6 = plVar2[0xe];
          iVar15 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar15 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
            FUN_146872cc6(param_1,iVar15);
          }
          lVar11 = *param_1;
          lVar13 = (longlong)iVar15 * 0x10;
          *(longlong *)(lVar11 + lVar13) = lVar6;
          iVar15 = (int)local_100;
          *(int *)(lVar11 + 8 + lVar13) = (int)local_100;
          *(undefined1 *)(lVar11 + 0xc + lVar13) = 0;
          local_a0 = *local_110;
          local_98 = local_110[1];
          FUN_14686d67e(param_1,lVar14,&local_a0);
          *(int *)(param_1 + 1) = (int)param_1[1] + -1;
          FUN_146872d4c(param_1);
          lVar6 = plVar2[0xf];
          iVar8 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
            local_f8 = lVar6;
            FUN_146872cc6(param_1,iVar8);
            lVar6 = local_f8;
          }
          lVar11 = *param_1;
          lVar13 = (longlong)iVar8 * 0x10;
          *(longlong *)(lVar11 + lVar13) = lVar6;
          *(int *)(lVar11 + 8 + lVar13) = iVar15;
          *(undefined1 *)(lVar11 + 0xc + lVar13) = 1;
          local_b0 = *local_110;
          local_a8 = local_110[1];
          FUN_14686d67e(param_1,lVar14 + local_108,&local_b0);
          *(int *)(param_1 + 1) = (int)param_1[1] + -1;
          FUN_146872d4c(param_1);
          uVar10 = local_80[1];
          do {
            iVar7 = iVar7 + 1;
            if ((int)uVar10 <= iVar7) break;
            local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,iVar7);
            cVar5 = FUN_1446ec082(&local_90,&local_c0);
          } while (cVar5 == '\0');
          iVar15 = iVar15 + 1;
          local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,iVar7);
          cVar5 = FUN_1446ec082(&local_90,&local_c0);
        } while (cVar5 != '\0');
      }
    }
    goto LAB_14686d6e5;
  }
  if ((*(byte *)((longlong)plVar2 + 0x3c) & 0x80) != 0) {
    local_110 = (undefined8 *)CONCAT71(local_110._1_7_,(char)plVar2[0xe]);
    (**(code **)(*(longlong *)plVar2[0xf] + 0x178))();
    if (0 < (int)param_2[1]) {
      local_108 = (longlong)*(int *)(plVar2[0xf] + 0x34);
      lVar6 = 0;
      lVar14 = 0;
      local_100 = plVar2;
      do {
        if (((ulonglong)local_110 & 1) == 0) {
          uVar10 = *param_2;
        }
        else {
          uVar10 = *param_2;
          if ((uVar10 & 1) != 0) {
            uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_2;
          }
        }
        lVar11 = local_100[0xf];
        iVar15 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
          FUN_146872cc6(param_1,iVar15);
        }
        lVar13 = *param_1;
        lVar12 = (longlong)iVar15 * 0x10;
        *(longlong *)(lVar13 + lVar12) = lVar11;
        *(int *)(lVar13 + 8 + lVar12) = (int)lVar14;
        *(undefined1 *)(lVar13 + 0xc + lVar12) = 0;
        local_58 = *param_3;
        local_50 = param_3[1];
        FUN_14686d67e(param_1,uVar10 + lVar6,&local_58);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        FUN_146872d4c(param_1);
        lVar14 = lVar14 + 1;
        lVar6 = lVar6 + local_108;
      } while (lVar14 < (int)param_2[1]);
    }
  }
LAB_14686d6e5:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686df6e FUN_14686df6e body=1576 status=ok
// SIG undefined FUN_14686df6e(void)

void FUN_14686df6e(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong *puVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong **local_78;
  longlong **local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd6) & 0x80) == 0) ||
     ((*(byte *)(*(longlong *)(param_2 + 0x10) + 0xd6) & 0x80) == 0)) goto LAB_14686dfb8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14686e598(param_1,&local_88);
  if (0 < (int)uStack_80) {
    local_98 = (ulonglong *)0x0;
    uStack_90 = 0;
    FUN_14686e598(param_2,&local_98);
    uVar8 = 0;
    if ((longlong)(int)uStack_90 != 0) {
      puVar1 = local_98 + (longlong)(int)uStack_90 * 3;
      plVar4 = param_3 + 7;
      local_b8 = param_5 + 7;
      puVar13 = local_98;
      local_c0 = plVar4;
      local_b0 = param_4;
LAB_14686e068:
      uVar8 = *puVar13;
      if (*(longlong *)(uVar8 + 0x20) == param_1) {
        if ((longlong)(int)uStack_80 == 0) {
          bVar2 = true;
        }
        else {
          lVar11 = 0;
          do {
            bVar14 = *(ulonglong *)(local_88 + lVar11) == uVar8;
            bVar2 = !bVar14;
            if (bVar14) break;
            bVar14 = (longlong)(int)uStack_80 * 0x18 + -0x18 != lVar11;
            lVar11 = lVar11 + 0x18;
          } while (bVar14);
        }
        if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
          uVar10 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          plVar6 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar6 = plVar4;
          }
          iVar12 = *(int *)((longlong)plVar6 +
                           (ulonglong)((int)param_3[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
          if (iVar12 != -1) {
            do {
              if (*(ulonglong *)(*param_3 + (longlong)iVar12 * 0x18) == uVar8) goto LAB_14686e2d0;
              iVar12 = *(int *)(*param_3 + (longlong)iVar12 * 0x18 + 0x10);
            } while (iVar12 != -1);
          }
        }
        if ((param_5 != (longlong *)0x0) && ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)))
        {
          uVar10 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          plVar6 = (longlong *)param_5[8];
          if ((longlong *)param_5[8] == (longlong *)0x0) {
            plVar6 = local_b8;
          }
          iVar12 = *(int *)((longlong)plVar6 +
                           (ulonglong)((int)param_5[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
          if (iVar12 != -1) {
            do {
              if (*(ulonglong *)(*param_5 + (longlong)iVar12 * 0x18) == uVar8) goto LAB_14686e2d0;
              iVar12 = *(int *)(*param_5 + (longlong)iVar12 * 0x18 + 0x10);
            } while (iVar12 != -1);
          }
        }
        if (!bVar2) {
          uVar5 = *(undefined8 *)(uVar8 + 0x18);
          uVar3 = FUN_1446f8646();
          local_d0 = 0;
          local_d8 = local_d8 & 0xffffffff00000000;
          plVar4 = (longlong *)FUN_140be85e0(uVar3,param_2,uVar5,0);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x170))(plVar4,0,DAT_14c951640,0x34);
          }
          local_c8 = 0xfff00007;
          local_d0 = 0;
          local_d8 = 0;
          local_68 = (longlong *)FUN_14092e7b3(*puVar13,param_2,*(undefined8 *)(*puVar13 + 0x18));
          local_a0 = (longlong *)*puVar13;
          local_78 = &local_a0;
          local_70 = &local_68;
          FUN_146874638(param_3,&local_a8,&local_78);
          if (param_5 != (longlong *)0x0) {
            local_a0 = (longlong *)*puVar13;
            local_78 = &local_a0;
            local_70 = &local_68;
            FUN_146874638(param_5,&local_a8,&local_78);
          }
          plVar4 = local_b0;
          iVar12 = (int)local_b0[1];
          *(uint *)(local_b0 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)local_b0 + 0xc) < iVar12 + 1U) {
            FUN_1447f76d2(local_b0,iVar12);
          }
          *(longlong **)(*plVar4 + (longlong)iVar12 * 8) = local_68;
          plVar4 = local_c0;
        }
      }
      goto LAB_14686e071;
    }
    goto LAB_14686e55a;
  }
LAB_14686e575:
  FUN_1468744e1(local_88,(int)uStack_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_14686dfb8:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14686e2d0:
  if (!bVar2) {
    uVar8 = *puVar13;
    if ((param_5 != (longlong *)0x0) && ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34))) {
      uVar10 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      plVar6 = (longlong *)param_5[8];
      if ((longlong *)param_5[8] == (longlong *)0x0) {
        plVar6 = local_b8;
      }
      iVar12 = *(int *)((longlong)plVar6 +
                       (ulonglong)((int)param_5[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
      if (iVar12 != -1) {
        do {
          puVar7 = (ulonglong *)(*param_5 + (longlong)iVar12 * 0x18);
          if (*puVar7 == uVar8) {
            if (puVar7 + 1 != (ulonglong *)0x0 && puVar7 != (ulonglong *)0x0) {
              local_a0 = (longlong *)puVar7[1];
              if (local_a0 != (longlong *)0x0) goto LAB_14686e30d;
              uVar8 = *puVar13;
            }
            break;
          }
          iVar12 = (int)puVar7[2];
        } while (iVar12 != -1);
      }
    }
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar10 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      plVar6 = (longlong *)param_3[8];
      if ((longlong *)param_3[8] == (longlong *)0x0) {
        plVar6 = plVar4;
      }
      iVar12 = *(int *)((longlong)plVar6 +
                       (ulonglong)((int)param_3[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
      if (iVar12 != -1) {
        do {
          puVar7 = (ulonglong *)(*param_3 + (longlong)iVar12 * 0x18);
          if (*puVar7 == uVar8) goto LAB_14686e304;
          iVar12 = (int)puVar7[2];
        } while (iVar12 != -1);
      }
    }
    puVar7 = (ulonglong *)0x0;
LAB_14686e304:
    local_a0 = (longlong *)puVar7[1];
LAB_14686e30d:
    if (local_a0[4] != param_2) {
      lVar11 = local_a0[3];
      uVar5 = FUN_1446f8646();
      local_d0 = 0;
      local_d8 = local_d8 & 0xffffffff00000000;
      local_a8 = (longlong *)FUN_140be85e0(uVar5,param_2,lVar11,0);
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x170))(local_a8,0,DAT_14c951640,0x34);
        local_78 = &local_a8;
        local_70 = &local_a0;
        FUN_140503212(param_3,&local_68,&local_78,0);
      }
      plVar4 = local_a0;
      local_68 = (longlong *)local_a0[3];
      FUN_1400021e4(&local_68,&local_78);
      pplVar9 = (longlong **)&DAT_149dfb77a;
      if ((int)local_70 != 0) {
        pplVar9 = local_78;
      }
      (**(code **)(*plVar4 + 0x170))(plVar4,pplVar9,param_2);
      plVar4 = local_c0;
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
        plVar4 = local_c0;
      }
    }
  }
LAB_14686e071:
  puVar13 = puVar13 + 3;
  if (puVar13 == puVar1) goto LAB_14686e551;
  goto LAB_14686e068;
LAB_14686e551:
  uVar8 = uStack_90 & 0xffffffff;
LAB_14686e55a:
  FUN_1468744e1(local_98,uVar8);
  if (local_98 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14686e575;
}



// FUNCTION 14686e598 FUN_14686e598 body=255 status=ok
// SIG undefined FUN_14686e598(void)

void FUN_14686e598(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
  if (lVar2 != 0) {
    do {
      if (0 < *(int *)(lVar2 + 0x30)) {
        lVar1 = 0;
        do {
          local_78 = (longlong *)0x0;
          uStack_70 = 1;
          FUN_146872cc6(&local_78,0);
          *local_78 = lVar2;
          *(int *)(local_78 + 1) = (int)lVar1;
          *(undefined1 *)((longlong)local_78 + 0xc) = 0;
          local_88 = &LAB_146874510;
          local_90 = param_2;
          local_80 = &local_90;
          FUN_14686d67e(&local_78,*(int *)(lVar2 + 0x34) * lVar1 + *(int *)(lVar2 + 0x44) + param_1,
                        &local_88);
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar1 = lVar1 + 1;
        } while (lVar1 < *(int *)(lVar2 + 0x30));
      }
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686e698 FUN_14686e698 body=950 status=ok
// SIG undefined FUN_14686e698(void)

void FUN_14686e698(LPCRITICAL_SECTION param_1,HANDLE *param_2)

{
  HANDLE *ppvVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_8f8 [40];
  HANDLE *local_8d0;
  undefined8 local_8c8;
  ULONG_PTR *local_8c0;
  uint local_8b8;
  int iStack_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  HANDLE *local_8a8;
  HANDLE *local_8a0;
  undefined2 local_898;
  undefined8 local_890;
  ULONG_PTR *local_888;
  uint local_880;
  int iStack_87c;
  undefined4 local_878;
  undefined4 local_874;
  HANDLE *local_870;
  undefined8 local_868;
  ULONG_PTR *local_860;
  undefined8 local_858;
  undefined4 local_850;
  undefined4 local_84c;
  HANDLE *local_848;
  HANDLE *local_840;
  undefined2 local_838;
  undefined1 local_3a [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  EnterCriticalSection(param_1);
  local_870 = param_2;
  FUN_140c8411c(param_1 + 2);
  local_848 = &param_1[2].OwningThread;
  local_8c8 = &param_1[2].SpinCount;
  local_8d0 = (HANDLE *)0x100000000;
  local_8c0 = (ULONG_PTR *)0xffffffff;
  local_8b8 = 0;
  if (*(int *)&param_1[3].OwningThread != 0) {
    FUN_1449c0562(&local_8d0);
  }
  local_858 = (ulonglong)local_8c0;
  uVar3 = local_858;
  local_850 = local_8b8;
  local_84c = iStack_8b4;
  local_868 = local_8d0;
  local_860 = local_8c8;
  local_838 = 0;
  local_858._4_4_ = (int)((ulonglong)local_8c0 >> 0x20);
  local_840 = local_848;
  if (local_858._4_4_ < *(int *)(local_8c8 + 3)) {
    iVar6 = local_858._4_4_;
    local_870 = local_848;
    local_858 = uVar3;
    do {
      iVar5 = *(int *)(param_2 + 1);
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      puVar7 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar7 = *param_2;
      }
      cVar4 = FUN_144a791f8((HANDLE)((longlong)iVar6 * 0x28 + (longlong)*local_870),puVar7,iVar8,1);
      if (cVar4 != '\0') {
        FUN_1468747ce(local_848,local_858._4_4_);
        local_838 = CONCAT11(local_838._1_1_,1);
      }
      local_858 = CONCAT44(local_858._4_4_,(uint)local_858 & ~local_868._4_4_);
      FUN_1449c0562(&local_868);
      iVar6 = local_858._4_4_;
    } while (local_858._4_4_ < *(int *)(local_860 + 3));
    uVar3 = local_858;
    if (((local_838 & 1) != 0) && (local_838._1_1_ == '\x01')) {
      FUN_146874788(local_840,*(int *)(local_840 + 1) - *(int *)((longlong)local_840 + 0x34));
      uVar3 = local_858;
    }
  }
  local_858 = uVar3;
  local_870 = (HANDLE *)&local_850;
  local_858 = local_858 & 0xffffffffffffff00;
  local_860 = (ULONG_PTR *)local_3a;
  ppvVar1 = &param_1[4].OwningThread;
  local_888 = &param_1[4].SpinCount;
  local_890 = 0x100000000;
  local_880 = 0xffffffff;
  iStack_87c = 0;
  local_878 = 0;
  local_868 = local_870;
  if (*(int *)&param_1[5].OwningThread != 0) {
    FUN_1449c0562(&local_890);
  }
  local_8b8 = local_880;
  iStack_8b4 = iStack_87c;
  local_8b0 = local_878;
  local_8ac = local_874;
  local_8c8 = (ULONG_PTR *)local_890;
  local_8c0 = local_888;
  local_898 = 0;
  local_8d0 = ppvVar1;
  local_8a8 = ppvVar1;
  local_8a0 = ppvVar1;
  if (iStack_87c < *(int *)(local_888 + 3)) {
    do {
      local_868 = local_870;
      FUN_14005eb5c((HANDLE)((longlong)iStack_8b4 * 0x20 + (longlong)*local_8d0),&local_870);
      uVar2 = *(uint *)(param_2 + 1);
      iVar6 = uVar2 - 1;
      if (uVar2 == 0) {
        iVar6 = 0;
      }
      iVar5 = (int)((ulonglong)((longlong)local_868 - (longlong)local_870) >> 1);
      if (iVar6 < iVar5) {
        iVar5 = iVar6;
      }
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = iVar5;
      }
      if (iVar6 == iVar8) {
        if ((1 < uVar2) && (0 < iVar5)) {
          iVar6 = FUN_144a54874(*param_2,local_870,iVar6);
          if (iVar6 != 0) goto LAB_14686e988;
        }
        FUN_14681bf18(local_8a8,iStack_8b4);
        local_898 = CONCAT11(local_898._1_1_,1);
      }
LAB_14686e988:
      local_8b8 = local_8b8 & ~local_8c8._4_4_;
      FUN_1449c0562(&local_8c8);
    } while (iStack_8b4 < *(int *)(local_8c0 + 3));
    if (((local_898 & 1) != 0) && (local_898._1_1_ == '\x01')) {
      FUN_14681be2e(local_8a0,*(int *)(local_8a0 + 1) - *(int *)((longlong)local_8a0 + 0x34),1);
    }
  }
  if ((char)local_858 == '\x01') {
    FUN_1400020a8(local_870);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_8f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686ea50 FUN_14686ea50 body=866 status=ok
// SIG undefined FUN_14686ea50(void)

ulonglong FUN_14686ea50(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  HANDLE *ppvVar1;
  longlong lVar2;
  int iVar3;
  ULONG_PTR *pUVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  int local_d8;
  LPCRITICAL_SECTION local_d0;
  undefined8 *local_c8;
  ULONG_PTR *local_c0;
  longlong local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  HANDLE *local_a0;
  undefined8 local_98;
  ULONG_PTR *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  undefined2 *local_68;
  ULONG_PTR *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = *param_2;
  uVar10 = 0;
  iVar11 = 0;
  local_70 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_70 = iVar11;
  }
  cVar5 = FUN_14686edb4();
  if (cVar5 != '\0') {
    EnterCriticalSection(param_1);
    ppvVar1 = &param_1[2].OwningThread;
    pUVar4 = &param_1[2].SpinCount;
    local_68 = (undefined2 *)0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = pUVar4;
    if (*(int *)&param_1[3].OwningThread != 0) {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)&param_1[3].OwningThread;
    }
    local_88 = local_58;
    uVar8 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = local_60;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_88._4_4_;
    local_d0 = param_1;
    local_a0 = ppvVar1;
    if ((local_88._4_4_ != iVar11) || (local_88 = uVar8, local_60 != pUVar4)) {
      do {
        local_88 = uVar8;
        local_c0 = pUVar4;
        lVar14 = (longlong)*(int *)((longlong)*local_a0 + (longlong)iVar6 * 0x28 + 0x18);
        if (lVar14 != 0) {
          local_c8 = (undefined8 *)((longlong)*local_a0 + (longlong)iVar6 * 0x28);
          lVar2 = local_c8[2];
          lVar12 = 0;
          do {
            iVar6 = *(int *)(lVar2 + 8 + lVar12);
            iVar3 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar3 = 0;
            }
            puVar9 = &DAT_149dfb77a;
            if (iVar6 != 0) {
              puVar9 = *(undefined2 **)(lVar2 + lVar12);
            }
            cVar5 = FUN_144a791f8(param_2,puVar9,iVar3,1);
            if (cVar5 != '\0') {
              iVar11 = *(int *)(lVar2 + 8 + lVar12);
              uVar7 = iVar11 + (uint)(iVar11 == 0);
              puVar9 = &DAT_149dfb77a;
              uVar13 = *(int *)(param_2 + 1) - 1;
              if (*(int *)(param_2 + 1) == 0) {
                uVar13 = 0;
              }
              else {
                puVar9 = (undefined2 *)*param_2;
              }
              if ((int)uVar13 <= (int)uVar7) {
                uVar7 = uVar13;
              }
              if ((int)uVar7 < 1) {
                uVar7 = 0;
              }
              FUN_14006620a(&local_b8,puVar9 + uVar7,uVar13 - uVar7);
              iVar11 = local_b0 + -1;
              if (local_b0 == 0) {
                iVar11 = 0;
              }
              local_d8 = iVar11 + 1 + (uint)(*(int *)(local_c8 + 1) == 0);
              local_68 = (undefined2 *)0x0;
              FUN_14125bce8(&local_68,*local_c8,*(int *)(local_c8 + 1),0);
              FUN_1401aebe8(&local_68,local_b8,iVar11);
              lpCriticalSection = local_d0;
              puVar9 = &DAT_149dfb77a;
              if ((int)local_60 != 0) {
                puVar9 = local_68;
              }
              FUN_1446f470e(local_a8,puVar9,1);
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              uVar7 = local_a8._0_4_ & 0xffff;
              uVar8 = FUN_140e6d7e2(&lpCriticalSection[4].OwningThread,
                                    (local_a8._0_4_ << 0x10 | uVar7) + local_a8._4_4_ +
                                    (local_a8._2_4_ << 0x13 | local_a8._2_4_ & 0xffff) +
                                    (uVar7 >> 4));
              if (*(int *)(param_2 + 1) == 0) {
                puVar9 = &DAT_149dfb77a;
              }
              else {
                puVar9 = (undefined2 *)*param_2;
              }
              FUN_1446f470e(&local_68,puVar9,1);
              FUN_1409d9716(uVar8,&local_68);
              uVar10 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              goto LAB_14686eb60;
            }
            lVar12 = lVar12 + 0x10;
          } while (lVar14 * 0x10 != lVar12);
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar6 = local_88._4_4_;
        pUVar4 = local_c0;
        uVar8 = local_88;
      } while (local_a0 != ppvVar1 || (local_90 != local_c0 || local_88._4_4_ != iVar11));
    }
    uVar10 = 0;
    lpCriticalSection = local_d0;
LAB_14686eb60:
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686edb4 FUN_14686edb4 body=123 status=ok
// SIG undefined FUN_14686edb4(void)

bool FUN_14686edb4(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  ulonglong uVar5;
  
  if ((6 < (longlong)*(int *)(param_1 + 1)) && (*(short *)*param_1 == 0x2f)) {
    uVar5 = (longlong)*(int *)(param_1 + 1) * 2 - 2;
    psVar1 = (short *)*param_1 + 1;
    do {
      psVar3 = psVar1;
      if (uVar5 == 0) {
        return false;
      }
      uVar5 = uVar5 - 2;
      psVar1 = psVar3 + 1;
    } while (*psVar3 != 0x2f);
    if (((uVar5 != 0) && (iVar4 = (int)(uVar5 >> 1), 3 < iVar4)) &&
       (iVar2 = FUN_144a54874(&DAT_149e5ef80,psVar3 + 1,4), iVar2 == 0)) {
      if (iVar4 != 4) {
        return psVar3[5] == 0x2f;
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 14686ee30 FUN_14686ee30 body=536 status=ok
// SIG undefined FUN_14686ee30(void)

ulonglong FUN_14686ee30(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  HANDLE *ppvVar1;
  ULONG_PTR *pUVar2;
  undefined2 *puVar3;
  HANDLE pvVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_d8 [32];
  LPCRITICAL_SECTION local_b8;
  undefined8 local_b0;
  HANDLE *local_a8;
  undefined8 local_a0;
  ULONG_PTR *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [8];
  undefined2 *local_78;
  int local_70;
  undefined1 *local_68;
  ULONG_PTR *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection(param_1);
  puVar3 = (undefined2 *)*param_2;
  iVar8 = *(int *)(param_2 + 1);
  iVar11 = 0;
  local_70 = iVar8 + -1;
  if (iVar8 == 0) {
    local_70 = 0;
  }
  local_78 = puVar3;
  cVar6 = FUN_14686edb4();
  puVar9 = &DAT_149dfb77a;
  if (iVar8 != 0) {
    puVar9 = puVar3;
  }
  if (cVar6 == '\0') {
    FUN_1446f470e(&local_b0,puVar9,1);
    iVar8 = FUN_14681be7e(&param_1[4].OwningThread,local_b0);
    uVar10 = CONCAT71((int7)((ulonglong)&local_b0 >> 8),0 < iVar8);
  }
  else {
    FUN_1446f470e(local_80,puVar9,1);
    ppvVar1 = &param_1[4].OwningThread;
    pUVar2 = &param_1[4].SpinCount;
    local_68 = &DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = pUVar2;
    if (*(int *)&param_1[5].OwningThread != 0) {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)&param_1[5].OwningThread;
    }
    local_90 = local_58;
    uVar5 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a8 = ppvVar1;
    local_90 = uVar5;
    if ((local_90._4_4_ == iVar11) && (local_60 == pUVar2)) {
      uVar10 = 0;
    }
    else {
      iVar8 = local_90._4_4_;
      local_b8 = param_1;
      do {
        pvVar4 = *local_a8;
        local_68 = local_80;
        iVar7 = FUN_1408ff3be((longlong)pvVar4 + (longlong)iVar8 * 0x20 + 8,&local_68);
        if (0 < iVar7) {
          puVar12 = (undefined8 *)((longlong)pvVar4 + (longlong)iVar8 * 0x20);
          uVar10 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
          param_1 = local_b8;
          if (*(int *)(puVar12 + 2) == 0) {
            FUN_14681be7e(ppvVar1,*puVar12);
            param_1 = local_b8;
          }
          goto LAB_14686efd1;
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar8 = local_90._4_4_;
      } while (local_a8 != ppvVar1 || (local_98 != pUVar2 || local_90._4_4_ != iVar11));
      uVar10 = 0;
      param_1 = local_b8;
    }
  }
LAB_14686efd1:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14686f04a FUN_14686f04a body=659 status=ok
// SIG undefined FUN_14686f04a(void)

void FUN_14686f04a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
  FUN_145c2cb8f(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_146874abc(param_1 + 0x40);
  }
  lVar5 = FUN_140d5712e();
  lVar4 = *(longlong *)(lVar5 + 0x28);
  plVar3 = *(longlong **)(lVar5 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(lVar4 + 0x30);
  lVar5 = (longlong)local_48;
  _Src = *(void **)(lVar4 + 0x28);
  if (lVar5 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar5 * 2);
  }
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
  FUN_1412fa92c(param_1,&local_60,&local_50);
  plVar1 = local_58;
  *(longlong *)(param_1 + 0x30) = local_60;
  local_60 = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (local_58 != plVar3) {
    local_58 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_14686f1bc;
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
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14686f1bc:
  uVar6 = FUN_140d5712e();
  local_78 = 1;
  FUN_1467ca3d2(uVar6,&local_60,1,0);
  lVar4 = local_60;
  lVar5 = (longlong)(int)local_58;
  if (lVar5 != 0) {
    lVar7 = 0;
    do {
      FUN_1412fa92c(param_1,&local_70,*(longlong *)(lVar4 + lVar7) + 0x28);
      if (local_70 != 0) {
        FUN_1461b7d9c();
      }
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
      lVar7 = lVar7 + 0x10;
    } while (lVar5 * 0x10 != lVar7);
  }
  FUN_14123806c(param_1);
  FUN_145ae980e(local_60,(ulonglong)local_58 & 0xffffffff);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14686f2de FUN_14686f2de body=104 status=ok
// SIG undefined FUN_14686f2de(void)

void FUN_14686f2de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      FUN_1412fabac(*(undefined8 *)(lVar2 + 0x10 + lVar3),param_2);
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014686f33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14686f346 FUN_14686f346 body=104 status=ok
// SIG undefined FUN_14686f346(void)

void FUN_14686f346(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      FUN_14686e698(*(undefined8 *)(lVar2 + 0x10 + lVar3),param_2);
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014686f3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14686f3ae FUN_14686f3ae body=117 status=ok
// SIG undefined FUN_14686f3ae(void)

void FUN_14686f3ae(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      FUN_14686e698(*(undefined8 *)(lVar2 + 0x10 + lVar3),param_2);
      FUN_1412fabac(*(undefined8 *)(lVar2 + 0x10 + lVar3),param_2);
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014686f41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14686f424 FUN_14686f424 body=188 status=ok
// SIG undefined FUN_14686f424(void)

undefined8 *
FUN_14686f424(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1412fa92c(param_1,&local_48,param_4);
  if (local_48 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1412380ca(local_48,param_2,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686f4e2 FUN_14686f4e2 body=246 status=ok
// SIG undefined FUN_14686f4e2(void)

void FUN_14686f4e2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  lVar7 = param_1[3];
  lVar8 = param_1[4];
  lVar9 = param_1[5];
  lVar10 = param_1[6];
  lVar11 = param_1[7];
  lVar12 = *param_2;
  lVar13 = param_2[1];
  lVar14 = param_2[2];
  lVar15 = param_2[3];
  lVar16 = param_2[4];
  lVar17 = param_2[5];
  lVar18 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar18;
  param_1[4] = lVar16;
  param_1[5] = lVar17;
  param_1[2] = lVar14;
  param_1[3] = lVar15;
  *param_1 = lVar12;
  param_1[1] = lVar13;
  local_58._0_4_ = (undefined4)lVar4;
  local_58._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_48._0_4_ = (undefined4)lVar6;
  local_48._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar7;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  local_38._0_4_ = (undefined4)lVar8;
  local_38._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar9;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  local_28._0_4_ = (undefined4)lVar10;
  local_28._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar11;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  param_1[8] = 0;
  plVar3 = (longlong *)param_1[9];
  local_58 = lVar4;
  uStack_50 = lVar5;
  local_48 = lVar6;
  uStack_40 = lVar7;
  local_38 = lVar8;
  uStack_30 = lVar9;
  local_28 = lVar10;
  uStack_20 = lVar11;
  if (plVar3 != (longlong *)0x0) {
    param_1[9] = 0;
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
  if (*param_2 == 0) {
    if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 14686f5ea FUN_14686f5ea body=1384 status=ok
// SIG undefined FUN_14686f5ea(void)

undefined8 * FUN_14686f5ea(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ushort uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined8 *local_d8;
  int local_cc;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  longlong *local_88;
  int local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_d8 = param_2;
  local_68 = param_3;
  FUN_1400021e4(&local_68,&local_88);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1412fac7e(&local_98,0,0,0);
  if ((longlong)(int)uStack_90 != 0) {
    lVar17 = (longlong)(int)uStack_90 << 4;
    puVar13 = local_98;
    do {
      iVar12 = *(int *)(puVar13 + 1);
      iVar1 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar1 = 0;
      }
      puVar8 = &DAT_149dfb77a;
      if (iVar12 != 0) {
        puVar8 = (undefined2 *)*puVar13;
      }
      cVar3 = FUN_144a791f8(&local_88,puVar8,iVar1,1);
      if (cVar3 != '\0') {
        FUN_144a787a6(&local_78,puVar13);
        uVar4 = *(int *)(puVar13 + 1) - 1;
        if (*(int *)(puVar13 + 1) == 0) {
          uVar4 = 0;
        }
        uVar14 = local_80 - 1;
        plVar10 = local_88;
        if (local_80 == 0) {
          uVar14 = 0;
          plVar10 = (longlong *)&DAT_149dfb77a;
        }
        if ((int)uVar14 <= (int)uVar4) {
          uVar4 = uVar14;
        }
        uVar6 = (ulonglong)uVar4;
        if ((int)uVar4 < 1) {
          uVar6 = 0;
        }
        FUN_14006620a(&local_a8,(undefined2 *)((longlong)plVar10 + uVar6 * 2),uVar14 - (int)uVar6);
        puVar8 = local_a8;
        iVar12 = local_a0;
        goto LAB_14686f6bb;
      }
      puVar13 = puVar13 + 2;
      lVar17 = lVar17 + -0x10;
    } while (lVar17 != 0);
  }
  puVar8 = (undefined2 *)0x0;
  iVar12 = 0;
LAB_14686f6bb:
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (iVar12 < 2 || (int)uStack_70 < 2) {
    *local_d8 = 0;
  }
  else {
    uVar5 = FUN_140d5712e();
    FUN_1406db95e(uVar5,&local_88);
    if ((longlong)local_80 != 0) {
      plVar11 = local_88 + (longlong)local_80 * 2;
      local_cc = iVar12 + -1;
      plVar10 = local_88;
      do {
        FUN_1412ab686(&local_98,plVar10);
        iVar1 = (int)plVar10[1];
        if (iVar1 == (int)uStack_90) {
          if (1 < iVar1) {
            lVar17 = 0;
            while( true ) {
              uVar7 = *(ushort *)(*plVar10 + lVar17);
              uVar6 = (ulonglong)uVar7;
              uVar15 = *(ushort *)((longlong)local_98 + lVar17);
              if (uVar7 != uVar15) break;
              if (uVar7 == 0) goto LAB_14686f82e;
LAB_14686f7ef:
              lVar17 = lVar17 + 2;
            }
            if ((uVar15 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar16 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar16]) goto LAB_14686f7ef;
            }
            if (uVar7 != uVar15) goto LAB_14686f968;
          }
LAB_14686f82e:
          local_e8 = ((int)uStack_70 == 0) + 5;
          local_c8 = 0;
          FUN_14125bce8(&local_c8,local_78,uStack_70 & 0xffffffff,0);
          FUN_1401aebe8(&local_c8,&DAT_149e5ef80,4);
          iVar1 = (int)plVar10[1] + -1;
          if ((int)plVar10[1] == 0) {
            iVar1 = 0;
          }
          FUN_1412cfe60(&local_b8,&local_c8,iVar1 + 1 + (uint)(local_c0 == 0));
          FUN_1401aebe8(&local_b8,*plVar10,iVar1);
          FUN_1412cfe60(&local_a8,&local_b8,iVar12 + (uint)(local_b0 == 0));
          FUN_1401aebe8(&local_a8,puVar8,local_cc);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          bVar2 = false;
          cVar3 = FUN_14166d522(&local_a8,0);
          if (cVar3 != '\0') {
            puVar9 = &DAT_149dfb77a;
            if (local_a0 != 0) {
              puVar9 = local_a8;
            }
            bVar2 = true;
            FUN_1446f470e(local_d8,puVar9);
          }
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if ((int)uStack_90 + iVar1 == 1) goto LAB_14686f82e;
LAB_14686f968:
          local_e8 = ((int)uStack_70 == 0) + 5;
          local_c8 = 0;
          FUN_14125bce8(&local_c8,local_78,uStack_70 & 0xffffffff,0);
          FUN_1401aebe8(&local_c8,&DAT_149e5ef80,4);
          iVar1 = (int)uStack_90 + -1;
          if ((int)uStack_90 == 0) {
            iVar1 = 0;
          }
          FUN_1412cfe60(&local_b8,&local_c8,iVar1 + 1 + (uint)(local_c0 == 0));
          FUN_1401aebe8(&local_b8,local_98,iVar1);
          FUN_1412cfe60(&local_a8,&local_b8,iVar12 + (uint)(local_b0 == 0));
          FUN_1401aebe8(&local_a8,puVar8,local_cc);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          cVar3 = FUN_14166d522(&local_a8,0,1);
          if (cVar3 == '\0') {
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14686f82e;
          }
          puVar9 = &DAT_149dfb77a;
          if (local_a0 != 0) {
            puVar9 = local_a8;
          }
          FUN_1446f470e(local_d8,puVar9);
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          bVar2 = true;
        }
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar2) goto LAB_14686faa7;
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar11);
    }
    *local_d8 = 0;
LAB_14686faa7:
    FUN_1447a1747(local_88,local_80);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (puVar8 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar8);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686fb53 FUN_14686fb53 body=297 status=ok
// SIG undefined FUN_14686fb53(void)

undefined8 * FUN_14686fb53(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_898 [32];
  undefined2 *local_878;
  uint local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined1 *local_858;
  char local_850;
  undefined2 local_848 [1035];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_898;
  uVar1 = FUN_1427b4d98(param_3);
  uVar2 = FUN_1427b4d98(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18));
  uVar3 = FUN_1427b4d98(*(undefined8 *)(param_2 + 0x18));
  local_868 = local_848;
  local_850 = '\0';
  local_858 = local_32;
  local_860 = local_868;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_144750bde(*(longlong *)(param_2 + 0x20),0);
  }
  *local_860 = 0;
  local_870 = 0;
  if (local_868 != (undefined2 *)0x0) {
    local_870 = (uint)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
    if ((0 < (int)local_870) && (local_868[local_870 - 1] == 0)) {
      local_870 = local_870 - 1;
    }
  }
  local_878 = local_868;
  uVar4 = FUN_1467e781c();
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  local_868 = (undefined2 *)CONCAT44(uVar3,uVar4);
  local_860 = (undefined2 *)CONCAT44(uVar1,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1407c869a(&local_868,param_1,0);
  if ((local_30 ^ (ulonglong)auStack_898) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686fc7d FUN_14686fc7d body=127 status=ok
// SIG undefined FUN_14686fc7d(void)

void FUN_14686fc7d(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (*(code *)*param_2)(&local_28,param_2[1]);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686fcfd FUN_14686fcfd body=159 status=ok
// SIG undefined FUN_14686fcfd(void)

undefined4
FUN_14686fcfd(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3c8))();
  if ((char)uVar2 != '\0') {
    local_48 = *param_5;
    local_40 = param_5[1];
    iVar1 = *(int *)(param_2 + 0x44);
    FUN_144b00ba4(param_1);
    FUN_14686fd9d(iVar1 + param_1,param_3,param_4,&local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686fd9d FUN_14686fd9d body=1374 status=ok
// SIG undefined FUN_14686fd9d(void)

void FUN_14686fd9d(longlong *param_1,char param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  void *pvVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  wchar_t *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 == '\x02') && (*(int *)(param_3 + 1) < 2)) {
    FUN_144a5dc74(&local_50);
    pwVar4 = (wchar_t *)*param_1;
    if (pwVar4 != local_50) {
      *param_1 = (longlong)local_50;
      if (local_50 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_50 + 8))();
      }
      if (pwVar4 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar4 + 0x10))(pwVar4);
      }
    }
    *(int *)(param_1 + 1) = local_48;
    pwVar4 = local_50;
    goto LAB_14686fff7;
  }
  local_60 = (wchar_t *)*param_1;
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 8))();
  }
  local_58 = (undefined4)param_1[1];
  FUN_1467cef4a(&local_68,&local_60);
  puVar3 = (undefined8 *)FUN_1467cf004(&local_60);
  cVar1 = FUN_142760c04(&local_60);
  if ((cVar1 == '\0') && (cVar1 = FUN_1417036c0(&local_60), cVar1 == '\0')) {
    if (param_2 == '\x02') {
      if (puVar3 != (undefined8 *)0x0) {
        iVar2 = *(int *)(puVar3 + 1);
        pwVar4 = local_60;
        if (iVar2 == *(int *)(param_3 + 1)) {
          if ((iVar2 < 2) ||
             (iVar2 = wcscmp((wchar_t *)*puVar3,(wchar_t *)*param_3), pwVar4 = local_60, iVar2 == 0)
             ) goto LAB_14686fff7;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) goto LAB_14686fff7;
      }
    }
    else if (param_2 == '\x01') {
      local_78 = (void *)CONCAT44(local_78._4_4_,local_64);
      FUN_1467e1cc6(&local_78,&local_50);
      pwVar4 = local_50;
      if (local_48 == *(int *)(param_3 + 1)) {
        bVar7 = true;
        if (1 < local_48) {
          iVar2 = wcscmp(local_50,(wchar_t *)*param_3);
          bVar7 = iVar2 == 0;
        }
      }
      else {
        bVar7 = *(int *)(param_3 + 1) + local_48 == 1;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar4);
      }
      pwVar4 = local_60;
      if (bVar7) goto LAB_14686fff7;
    }
    else if (param_2 == '\0') {
      local_88 = (void *)CONCAT44(local_88._4_4_,local_68);
      FUN_1467e1cc6(&local_88,&local_78);
      FUN_1467e1c6c(&local_50,&local_78);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      pwVar4 = local_50;
      if (local_48 == *(int *)(param_3 + 1)) {
        bVar7 = true;
        if (1 < local_48) {
          iVar2 = wcscmp(local_50,(wchar_t *)*param_3);
          bVar7 = iVar2 == 0;
        }
      }
      else {
        bVar7 = *(int *)(param_3 + 1) + local_48 == 1;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar4);
      }
      pwVar4 = local_60;
      if (bVar7) goto LAB_14686fff7;
      goto LAB_14687003c;
    }
LAB_146870067:
    FUN_1467e1cc6(&local_50,&local_78);
    if (param_2 == '\x01') {
      local_88 = (void *)0x0;
      local_80 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_80;
      pvVar5 = (void *)*param_3;
      if (lVar6 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,pvVar5,lVar6 * 2);
      }
      goto LAB_146870158;
    }
    FUN_1467e1cc6(&local_50,&local_88);
    if (param_2 != '\x02') goto LAB_146870158;
    local_98 = (void *)0x0;
    iVar2 = *(int *)(param_3 + 1);
    lVar6 = (longlong)iVar2;
    pvVar5 = (void *)*param_3;
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar2);
    if (lVar6 != 0) {
      FUN_1446dd670(&local_98,iVar2,0);
      goto LAB_1468702c8;
    }
LAB_14687029c:
    local_98 = (void *)0x0;
    uStack_90 = uStack_90 & 0xffffffff;
  }
  else {
    if (param_2 != '\0') goto LAB_146870067;
LAB_14687003c:
    local_78 = (void *)0x0;
    local_70 = *(int *)(param_3 + 1);
    lVar6 = (longlong)local_70;
    pvVar5 = (void *)*param_3;
    if (lVar6 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar5,lVar6 * 2);
    }
    FUN_1467e1cc6(&local_50,&local_88);
LAB_146870158:
    if (puVar3 == (undefined8 *)0x0) {
      local_98 = (void *)0x0;
      uStack_90 = 0;
    }
    else {
      local_98 = (void *)0x0;
      iVar2 = *(int *)(puVar3 + 1);
      lVar6 = (longlong)iVar2;
      pvVar5 = (void *)*puVar3;
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar2);
      if (lVar6 == 0) goto LAB_14687029c;
      FUN_1446dd670(&local_98,iVar2,0);
LAB_1468702c8:
      memcpy(local_98,pvVar5,lVar6 * 2);
    }
  }
  local_a8 = (wchar_t *)0x0;
  uStack_a0 = 0;
  local_b8 = *param_4;
  local_b0 = param_4[1];
  FUN_14686fc7d();
  local_50 = local_a8;
  local_48 = (int)uStack_a0 + -1;
  if ((int)uStack_a0 == 0) {
    local_48 = 0;
  }
  FUN_1446e940c(local_bc,&local_50);
  local_50 = (wchar_t *)0x0;
  local_48 = 0;
  FUN_1446e940c(local_c0,&local_50);
  FUN_140f57608(&local_50,local_c0,local_bc,&local_98);
  pwVar4 = (wchar_t *)*param_1;
  if (pwVar4 != local_50) {
    *param_1 = (longlong)local_50;
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 8))();
    }
    if (pwVar4 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar4 + 0x10))(pwVar4);
    }
  }
  *(int *)(param_1 + 1) = local_48;
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  pwVar4 = local_60;
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
    pwVar4 = local_60;
  }
LAB_14686fff7:
  if (pwVar4 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar4 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468702fc FUN_1468702fc body=191 status=ok
// SIG undefined FUN_1468702fc(void)

void FUN_1468702fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    FUN_1427e390c(0,1);
    uVar5 = (**(code **)(*param_2 + 8))(param_2);
    FUN_1427b51a9(uVar5);
    return;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar6);
  *(undefined8 *)(lVar3 + lVar6) = 0;
  iVar2 = *(int *)(puVar4 + 1);
  _Src = (void *)*puVar4;
  *(int *)(lVar3 + 8 + lVar6) = iVar2;
  if ((longlong)iVar2 != 0) {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 1468703c0 FUN_1468703c0 body=132 status=ok
// SIG undefined FUN_1468703c0(void)

void FUN_1468703c0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar2 = 0;
    FUN_1427e390c(0,1);
    lVar3 = *(longlong *)(param_1 + 8);
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x10) << 4;
      do {
        FUN_1427b51a9(lVar3);
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      lVar3 = *(longlong *)(param_1 + 8);
    }
    FUN_1447a1747(lVar3,uVar2);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_1408be2c4(param_1 + 8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146870448 FUN_146870448 body=96 status=ok
// SIG undefined FUN_146870448(void)

undefined8 * FUN_146870448(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  FUN_1468be472();
  *param_1 = &PTR_FUN_149e60300;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x48,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[1].LockCount = 0;
  lpCriticalSection[1].RecursionCount = 0;
  lpCriticalSection[1].OwningThread = (HANDLE)0x0;
  lpCriticalSection[1].LockSemaphore = (HANDLE)0x0;
  param_1[5] = lpCriticalSection;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1468704a8 FUN_1468704a8 body=794 status=ok
// SIG undefined FUN_1468704a8(void)

undefined8 FUN_1468704a8(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  longlong local_138;
  int local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_4 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x28);
    local_80 = *(longlong *)(lVar7 + 0x28);
    local_78[0] = *(int *)(lVar7 + 0x30);
    local_70 = *(undefined8 *)(lVar7 + 0x38);
    local_68 = *(undefined4 *)(lVar7 + 0x40);
    lVar7 = 0;
    do {
      if ((longlong)*(int *)((longlong)local_78 + lVar7) != 0) {
        puVar6 = *(undefined8 **)((longlong)local_78 + lVar7 + -8);
        puVar8 = puVar6 + *(int *)((longlong)local_78 + lVar7);
        do {
          plVar1 = (longlong *)*puVar6;
          local_118 = 0;
          uStack_110 = 0;
          local_148 = 0;
          local_150 = 0;
          local_158 = 0;
          FUN_14689c554(&local_108,&local_118,0,1);
          (**(code **)(*plVar1 + 8))(plVar1);
          if ((longlong)(int)uStack_110 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(local_118 + lVar5) == param_2) {
                (**(code **)(*plVar1 + 0x10))(plVar1,&local_128);
                if (&local_128 == param_3) {
                  if (local_128 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*param_3 != 0) {
                    FUN_1400020a8();
                  }
                  *param_3 = local_128;
                  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_120;
                  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_120._4_4_;
                }
                local_128 = 0;
                uStack_120 = 0;
                cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
                if (cVar3 != '\0') {
                  FUN_140b1283a(&local_138,&DAT_149e31048,&local_128);
                  iVar2 = local_130 + -1;
                  if (local_130 == 0) {
                    iVar2 = 0;
                  }
                  FUN_1400020e8(param_3,local_138,iVar2);
                  if (local_138 != 0) {
                    FUN_1400020a8();
                  }
                }
                if (local_128 != 0) {
                  FUN_1400020a8();
                }
                FUN_14689c70e(&local_108);
                lVar7 = local_118;
                goto LAB_146870751;
              }
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)uStack_110 * 8 != lVar5);
          }
          FUN_14689c70e(&local_108);
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar8);
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x20);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_108);
      if (&local_108 == param_3) {
        if (local_108 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_108;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_100._4_4_;
      }
      local_108 = 0;
      uStack_100 = 0;
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                        (*(longlong **)(param_1 + 0x30),param_2);
      lVar7 = local_108;
      if (cVar3 != '\0') {
        FUN_140b1283a(&local_80,&DAT_149e31048,&local_108);
        iVar2 = local_78[0] + -1;
        if (local_78[0] == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_3,local_80,iVar2);
        lVar7 = local_108;
        if (local_80 != 0) {
          FUN_1400020a8();
          lVar7 = local_108;
        }
      }
LAB_146870751:
      if (lVar7 != 0) {
        FUN_1400020a8();
      }
      uVar4 = 1;
      goto LAB_14687075d;
    }
  }
  uVar4 = 0;
LAB_14687075d:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1468707ca FUN_1468707ca body=181 status=ok
// SIG undefined FUN_1468707ca(void)

undefined8 FUN_1468707ca(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4();
  uVar5 = (longlong)local_20 * 2;
  do {
    if (uVar5 == 0) {
      uVar4 = 0;
      goto LAB_14687081f;
    }
    uVar1 = uVar5 - 2;
    lVar2 = uVar5 - 2;
    uVar5 = uVar1;
  } while (*(short *)((longlong)local_28 + lVar2) != 0x2f);
  uVar4 = (int)(uVar1 >> 1) + 1;
LAB_14687081f:
  uVar6 = local_20 - 1;
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
    uVar6 = 0;
  }
  if ((int)uVar6 <= (int)uVar4) {
    uVar4 = uVar6;
  }
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  FUN_14006620a(param_1,puVar3 + uVar5,uVar6 - (int)uVar5);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146870880 FUN_146870880 body=43 status=ok
// SIG undefined FUN_146870880(void)

undefined8 FUN_146870880(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1468708ac(param_1,puVar1);
  return param_1;
}



// FUNCTION 1468708ac FUN_1468708ac body=82 status=ok
// SIG undefined FUN_1468708ac(void)

undefined8 * FUN_1468708ac(undefined8 *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 == (wchar_t *)0x0) {
    *param_1 = 0;
  }
  else {
    pwVar1 = wcsrchr(param_2,L'/');
    if (pwVar1 != (wchar_t *)0x0) {
      param_2 = pwVar1 + 1;
    }
    FUN_1446f470e(param_1,param_2,1);
  }
  return param_1;
}



// FUNCTION 1468708fe FUN_1468708fe body=1488 status=ok
// SIG undefined FUN_1468708fe(void)

undefined4
FUN_1468708fe(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 param_8)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  short *psVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_898 [32];
  short **local_878;
  char *local_870;
  undefined2 **local_868;
  undefined4 *local_860;
  undefined8 local_858;
  longlong local_848;
  undefined8 uStack_840;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  char local_819;
  longlong local_818;
  undefined8 uStack_810;
  undefined2 *local_808;
  undefined2 *local_800;
  short **local_7f8;
  char local_7f0;
  undefined2 local_7e8 [16];
  short *local_7c8;
  short *local_7c0;
  undefined1 **local_7b8;
  char local_7b0;
  short local_7a8 [128];
  undefined1 *local_6a8;
  undefined1 *local_6a0;
  undefined1 **local_698;
  char local_690;
  undefined1 local_688 [512];
  undefined1 *local_488;
  undefined1 *local_480;
  undefined1 **local_478;
  char local_470;
  undefined1 local_468 [512];
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_898;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_488 = local_468;
  local_470 = '\0';
  local_478 = &local_268;
  local_6a8 = local_688;
  local_690 = '\0';
  local_698 = &local_488;
  local_7c8 = local_7a8;
  local_7b0 = '\0';
  local_7b8 = &local_6a8;
  local_808 = local_7e8;
  local_7f0 = '\0';
  local_7f8 = &local_7c8;
  local_838 = *param_1;
  uStack_834 = param_1[1];
  uStack_830 = param_1[2];
  uStack_82c = param_1[3];
  local_858 = param_8;
  local_860 = param_7;
  local_868 = &local_808;
  local_870 = &local_819;
  local_878 = &local_7c8;
  local_800 = local_808;
  local_7c0 = local_7c8;
  local_6a0 = local_6a8;
  local_480 = local_488;
  local_260 = local_268;
  uVar2 = FUN_1411baba2();
  if ((char)uVar2 == '\0') {
    if (param_2 != (longlong *)0x0) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) < 0) {
        FUN_1446f8c06(param_2,0);
      }
      if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
        *(undefined2 *)*param_2 = 0;
      }
    }
    if (param_3 != (longlong *)0x0) {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_1446f8c06(param_3,0);
      }
      if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
        *(undefined2 *)*param_3 = 0;
      }
    }
    if (param_4 != (undefined8 *)0x0) {
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) < 0) {
        FUN_1446f8c06(param_4,0);
      }
      if ((undefined2 *)*param_4 != (undefined2 *)0x0) {
        *(undefined2 *)*param_4 = 0;
      }
    }
    if (param_5 != (undefined8 *)0x0) {
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < 0) {
        FUN_1446f8c06(param_5,0);
      }
      if ((undefined2 *)*param_5 != (undefined2 *)0x0) {
        *(undefined2 *)*param_5 = 0;
      }
    }
    if (param_6 != (undefined8 *)0x0) {
      *(undefined4 *)(param_6 + 1) = 0;
      if (*(int *)((longlong)param_6 + 0xc) < 0) {
        FUN_1446f8c06(param_6,0);
      }
      if ((undefined2 *)*param_6 != (undefined2 *)0x0) {
        *(undefined2 *)*param_6 = 0;
      }
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0;
    }
  }
  else {
    if (param_2 != (longlong *)0x0) {
      local_848 = 0;
      uStack_840 = 0;
      FUN_14006620a(&local_818,local_488,(ulonglong)((longlong)local_480 - (longlong)local_488) >> 1
                   );
      if (local_848 != 0) {
        FUN_1400020a8();
      }
      local_848 = local_818;
      uStack_840 = uStack_810;
      FUN_1467acaa6(&local_818,&local_848,local_6a8,
                    (ulonglong)((longlong)local_6a0 - (longlong)local_6a8) >> 1);
      if (&local_818 == param_2) {
        if (local_818 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_818;
        local_818 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_810;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_810._4_4_;
        uStack_810 = 0;
      }
      if (local_848 != 0) {
        FUN_1400020a8();
      }
    }
    if (param_3 != (longlong *)0x0) {
      FUN_14006620a(&local_818,local_268,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1
                   );
      local_848 = local_818;
      uStack_840 = uStack_810;
      FUN_1467acaa6(&local_818,&local_848,local_6a8,
                    (ulonglong)((longlong)local_6a0 - (longlong)local_6a8) >> 1);
      if (&local_818 == param_3) {
        if (local_818 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_818;
        local_818 = 0;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_810;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_810._4_4_;
        uStack_810 = 0;
      }
      if (local_848 != 0) {
        FUN_1400020a8();
      }
    }
    if (param_4 != (undefined8 *)0x0 || param_5 != (undefined8 *)0x0) {
      uVar9 = (ulonglong)((longlong)local_7c0 - (longlong)local_7c8) >> 1;
      uVar8 = (uint)uVar9;
      if (0 < (int)uVar8) {
        psVar1 = local_7c8 + (int)uVar8;
        uVar6 = 0;
        psVar4 = local_7c8;
        do {
          if (*psVar4 == 0x3a) {
            if (uVar6 != 0xffffffff) {
              if (param_4 != (undefined8 *)0x0) {
                uVar3 = uVar8;
                if ((int)uVar6 < (int)uVar8) {
                  uVar3 = uVar6;
                }
                uVar7 = 0;
                if (0 < (int)uVar3) {
                  uVar7 = uVar3;
                }
                FUN_1402980a2(param_4,local_7c8,uVar7);
              }
              if (param_5 != (undefined8 *)0x0) {
                uVar3 = ~uVar6 + uVar8;
                if ((int)uVar8 <= (int)(~uVar6 + uVar8)) {
                  uVar3 = uVar8;
                }
                uVar8 = 0;
                if (0 < (int)uVar3) {
                  uVar8 = uVar3;
                }
                FUN_1402980a2(param_5,(longlong)psVar1 - (ulonglong)(uVar8 * 2));
              }
              goto LAB_146870c47;
            }
            break;
          }
          psVar4 = psVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (psVar4 < psVar1);
      }
      if (param_4 != (undefined8 *)0x0) {
        FUN_1402980a2(param_4,local_7c8,uVar9 & 0xffffffff);
      }
      if (param_5 != (undefined8 *)0x0) {
        *(undefined4 *)(param_5 + 1) = 0;
        if (*(int *)((longlong)param_5 + 0xc) < 0) {
          FUN_1446f8c06(param_5,0);
        }
        if ((undefined2 *)*param_5 != (undefined2 *)0x0) {
          *(undefined2 *)*param_5 = 0;
        }
      }
    }
LAB_146870c47:
    if (param_6 != (undefined8 *)0x0) {
      if (local_819 == '\x05') {
        *local_800 = 0;
        puVar5 = local_808;
      }
      else {
        puVar5 = (undefined2 *)FUN_1415380f8();
      }
      FUN_14020fad6(param_6,puVar5);
    }
  }
  if (local_7f0 == '\x01') {
    FUN_1400020a8(local_808);
  }
  if (local_7b0 == '\x01') {
    FUN_1400020a8(local_7c8);
  }
  if (local_690 == '\x01') {
    FUN_1400020a8(local_6a8);
  }
  if (local_470 == '\x01') {
    FUN_1400020a8(local_488);
  }
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_898) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146870ed0 FUN_146870ed0 body=1281 status=ok
// SIG undefined FUN_146870ed0(void)

undefined8
FUN_146870ed0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  PSRWLOCK SRWLock;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *_Str1;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong *local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  PVOID local_a8;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  SRWLock = (PSRWLOCK)FUN_1412fb076();
  local_68 = 0;
  local_60 = 0;
  AcquireSRWLockShared(SRWLock);
  FUN_144a7e010(param_2);
  iVar4 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar4 = 0;
  }
  local_58 = *param_1;
  uStack_50 = CONCAT44(uStack_50._4_4_,iVar4);
  plVar5 = (longlong *)FUN_14022f68a(SRWLock + 0x27,&local_58,0);
  if (plVar5 == (longlong *)0x0) {
    local_a8 = SRWLock[9].Ptr;
    local_a0 = *(int *)&SRWLock[10].Ptr + -1;
    if (*(int *)&SRWLock[10].Ptr == 0) {
      local_a0 = 0;
    }
    local_b8 = *param_1;
    local_b0 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      local_b0 = 0;
    }
    cVar3 = FUN_14022fd12(&local_b8,&local_a8,&local_68);
    if (cVar3 == '\0') goto LAB_146871183;
    FUN_1400b22c2(&local_98,&DAT_149e02088);
    iVar4 = iStack_90 + -1;
    if (iStack_90 == 0) {
      iVar4 = 0;
    }
    local_e8 = iVar4 + 1 + (uint)(*(int *)&SRWLock[10].Ptr == 0);
    local_58 = 0;
    FUN_14125bce8(&local_58,SRWLock[9].Ptr,*(int *)&SRWLock[10].Ptr,0);
    FUN_1401aebe8(&local_58,CONCAT44(uStack_94,local_98),iVar4);
    if (&local_58 == param_2) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = 0;
      *(int *)(param_2 + 1) = (int)uStack_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
    }
    lVar2 = CONCAT44(uStack_94,local_98);
  }
  else {
    local_78 = *(undefined8 *)*plVar5;
    iVar4 = *(int *)((undefined8 *)*plVar5 + 1);
    local_70 = iVar4 + -1;
    if (iVar4 == 0) {
      local_70 = 0;
    }
    local_88 = *param_1;
    local_80 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      local_80 = 0;
    }
    cVar3 = FUN_14022fd12(&local_88,&local_78,&local_68);
    if (cVar3 == '\0') goto LAB_146871183;
    local_e0 = param_3;
    FUN_1400b22c2(&local_98,&DAT_149e02088);
    iVar4 = iStack_90 + -1;
    if (iStack_90 == 0) {
      iVar4 = 0;
    }
    iVar1 = *(int *)((undefined8 *)*plVar5 + 1);
    local_e8 = iVar4 + 1 + (uint)(iVar1 == 0);
    local_58 = 0;
    FUN_14125bce8(&local_58,*(undefined8 *)*plVar5,iVar1,0);
    FUN_1401aebe8(&local_58,CONCAT44(uStack_94,local_98),iVar4);
    if (&local_58 == param_2) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = 0;
      *(int *)(param_2 + 1) = (int)uStack_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
    }
    lVar2 = CONCAT44(uStack_94,local_98);
    param_3 = local_e0;
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
LAB_146871183:
  ReleaseSRWLockShared(SRWLock);
  uVar6 = 0;
  if (1 < (int)param_2[1]) {
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if ((int)param_2[1] <= iVar4) {
      FUN_14006620a(&local_58,local_68,local_60);
      local_98 = (undefined4)local_58;
      uStack_94 = local_58._4_4_;
      iStack_90 = (int)uStack_50;
      uStack_8c = uStack_50._4_4_;
      FUN_1400b22c2(&local_c8,&DAT_149e02088);
      FUN_140bee914(&local_d8,&local_98);
      iVar4 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar4 = 0;
      }
      FUN_1412cfe60(&local_58,&local_d8,iVar4 + 1 + (uint)(local_d0 == 0));
      FUN_1401aebe8(&local_58,local_c8,iVar4);
      if (&local_58 == param_3) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_58;
        local_58 = 0;
        *(int *)(param_3 + 1) = (int)uStack_50;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
        uStack_50 = 0;
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_144a06ecc(&local_58,&local_98);
      if (&local_58 == param_4) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = local_58;
        local_58 = 0;
        *(int *)(param_4 + 1) = (int)uStack_50;
        *(undefined4 *)((longlong)param_4 + 0xc) = uStack_50._4_4_;
      }
      if (param_5 != '\0') {
        if ((int)param_2[1] == 0) {
          _Str1 = L"";
        }
        else {
          _Str1 = (wchar_t *)*param_2;
        }
        iVar4 = wcsncmp(_Str1,L"/",1);
        if (iVar4 == 0) {
          FUN_145825fe6(param_2,0,1);
        }
      }
      if (CONCAT44(uStack_94,local_98) != 0) {
        FUN_1400020a8();
      }
      uVar6 = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468713d2 FUN_1468713d2 body=275 status=ok
// SIG undefined FUN_1468713d2(void)

void FUN_1468713d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_a8 = &local_88;
  local_88 = 0;
  local_80 = 0;
  local_98 = *param_1;
  local_90 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_90 = 0;
  }
  local_a0 = param_6;
  FUN_145831310(&local_98,&local_58,&local_68,&local_78);
  FUN_1402980a2(param_2,local_58,local_50);
  FUN_1402980a2(param_3,local_68,local_60);
  FUN_1402980a2(param_4,local_78,local_70);
  FUN_1402980a2(param_5,local_88,local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468714e6 FUN_1468714e6 body=451 status=ok
// SIG undefined FUN_1468714e6(void)

void FUN_1468714e6(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  longlong *in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_58;
  local_58 = (short *)0x0;
  uStack_50 = 0;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  local_70 = in_stack_00000030;
  FUN_145831310();
  uVar8 = uStack_50;
  if (0 < (int)uStack_50) {
    *(undefined4 *)(in_stack_00000028 + 1) = 0;
    psVar10 = local_58;
    psVar11 = local_58;
    uVar5 = uVar8;
    if (*(int *)((longlong)in_stack_00000028 + 0xc) != 0) {
      FUN_146874bc2(in_stack_00000028,0);
      psVar10 = local_58;
      psVar11 = local_58;
    }
LAB_146871568:
    do {
      if (0 < (int)uVar8) {
        uVar6 = 0;
        psVar12 = psVar11;
        do {
          if (*psVar12 == 0x2e) {
            if (uVar6 != 0xffffffff) {
              uVar8 = uVar5;
              if ((int)uVar6 < (int)uVar5) {
                uVar8 = uVar6;
              }
              uVar7 = ~uVar6 + uVar5;
              if ((int)uVar5 <= (int)(~uVar6 + uVar5)) {
                uVar7 = uVar5;
              }
              uVar6 = 0;
              if (0 < (int)uVar7) {
                uVar6 = uVar7;
              }
              psVar12 = (short *)((longlong)psVar10 +
                                 ((ulonglong)uVar5 * 2 - (ulonglong)(uVar6 * 2)));
              psVar11 = psVar12;
              local_58 = psVar12;
              uStack_50 = uVar6;
              if ((int)uVar8 < 1) {
                uVar8 = 0;
                uVar5 = 0;
                bVar4 = false;
                psVar10 = psVar12;
                uVar9 = uVar6;
                if ((int)uVar7 < 1) goto LAB_146871568;
                goto LAB_14687159b;
              }
              iVar2 = (int)in_stack_00000028[1];
              *(uint *)(in_stack_00000028 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar2 + 1U) {
                FUN_146874c22(in_stack_00000028,iVar2);
              }
              lVar3 = *in_stack_00000028;
              *(short **)(lVar3 + (longlong)iVar2 * 0x10) = psVar10;
              *(uint *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = uVar8;
              psVar10 = psVar12;
              uVar8 = uVar6;
              uVar5 = uVar6;
              goto LAB_146871568;
            }
            break;
          }
          psVar12 = psVar12 + 1;
          uVar6 = uVar6 + 1;
        } while (psVar12 < psVar11 + (int)uVar8);
      }
      bVar4 = true;
      psVar12 = psVar10;
      uVar6 = uVar8;
      uVar9 = uVar5;
      if ((int)uVar5 < 1) break;
LAB_14687159b:
      iVar2 = (int)in_stack_00000028[1];
      *(uint *)(in_stack_00000028 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar2 + 1U) {
        FUN_146874c22(in_stack_00000028,iVar2);
      }
      puVar1 = (undefined4 *)(*in_stack_00000028 + (longlong)iVar2 * 0x10);
      *puVar1 = (undefined4)local_58;
      puVar1[1] = local_58._4_4_;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      psVar10 = psVar12;
      uVar8 = uVar6;
      uVar5 = uVar9;
    } while (!bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468716aa FUN_1468716aa body=989 status=ok
// SIG undefined FUN_1468716aa(void)

undefined8 FUN_1468716aa(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  bool bVar13;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  wchar_t *local_78 [2];
  short *local_68;
  undefined4 local_60;
  int local_5c;
  undefined1 local_54 [4];
  short *local_50;
  int local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (short *)0x0;
  local_48 = 0;
  psVar2 = (short *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)(int)uVar1;
  if (0 < (longlong)uVar8) {
    iVar10 = 0;
    uVar11 = 1;
    psVar12 = psVar2;
    do {
      if (*psVar12 == 0x2e) {
        if (iVar10 != 1) {
          if (1 - uVar1 == iVar10) {
            if (param_2 == 0) goto LAB_14687188b;
            local_40 = L"ObjectPath_EndWithPeriod";
            local_38 = 0x18;
            FUN_1446e940c(local_78,&local_40);
            local_40 = L"Core";
            local_38 = 4;
            FUN_1446e940c(local_54,&local_40);
            FUN_140208bae(&local_40,local_54,local_78,L"Object Path may not end with .");
            FUN_140008f88(param_2,&local_40);
            local_78[0] = local_40;
            goto LAB_146871880;
          }
          uVar3 = -iVar10;
          if ((int)uVar1 <= -iVar10) {
            uVar3 = uVar1;
          }
          uVar8 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            uVar8 = 0;
          }
          iVar9 = ((int)(1U - iVar10) >> 0x1f & 1U - iVar10) + 0x7fffffff;
          uVar11 = 1 - (((int)uVar11 >> 0x1f & uVar11) + iVar10);
          if ((int)uVar1 <= (int)uVar11) {
            uVar11 = uVar1;
          }
          iVar7 = uVar1 - uVar11;
          if (iVar9 < (int)(uVar1 - uVar11)) {
            iVar7 = iVar9;
          }
          local_48 = iVar7;
          if (iVar7 < 1) {
            local_48 = 0;
          }
          local_50 = psVar2 + (int)uVar11;
          bVar13 = iVar7 < 1;
          local_5c = iVar10;
          goto LAB_146871717;
        }
        break;
      }
      psVar12 = psVar12 + 1;
      iVar10 = iVar10 + -1;
      uVar11 = uVar11 + 1;
    } while (psVar12 < psVar2 + uVar8);
  }
  bVar13 = true;
  local_5c = *(int *)((longlong)param_1 + 0xc);
LAB_146871717:
  local_60 = (undefined4)uVar8;
  local_68 = psVar2;
  cVar5 = FUN_14022ef98(&local_68,CONCAT71((int7)(uVar8 >> 8),1),param_2);
  if (cVar5 != '\0') {
    if (bVar13) {
LAB_14687173c:
      uVar6 = 1;
      goto LAB_14687188d;
    }
    local_40 = L"ObjectPathContext";
    local_38 = 0x11;
    FUN_1446e940c(local_54,&local_40);
    local_40 = L"Core";
    local_38 = 4;
    FUN_1446e940c(local_7c,&local_40);
    FUN_140208bae(local_78,local_7c,local_54,L"Object Path");
    FUN_140056680(&local_40,&DAT_149e60988);
    cVar5 = FUN_144a2f95e(&local_50,&local_40,param_2,local_78);
    if (local_40 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (cVar5 != '\0') {
      if ((local_50[(longlong)local_48 + -1] != 0x3a) && (local_50[(longlong)local_48 + -1] != 0x2e)
         ) {
        bVar13 = true;
        if (0 < local_48) {
          uVar8 = 0;
          do {
            if (*(short *)((longlong)local_50 + uVar8) == 0x2f) {
              bVar13 = (int)(~uVar8 >> 1) == 0;
              if (param_2 != 0 && !bVar13) {
                local_40 = L"ObjectPath_SlashAfterPeriod";
                local_38 = 0x1b;
                FUN_1446e940c(local_54,&local_40);
                local_40 = L"Core";
                local_38 = 4;
                FUN_1446e940c(local_7c,&local_40);
                FUN_140208bae(&local_40,local_7c,local_54,
                              L"Object Path may not have / after first .");
                FUN_140008f88(param_2,&local_40);
                if (local_40 != (wchar_t *)0x0) {
                  (**(code **)(*(longlong *)local_40 + 0x10))();
                }
                bVar13 = false;
              }
              break;
            }
            lVar4 = uVar8 + 2;
            uVar8 = uVar8 + 2;
          } while ((short *)((longlong)local_50 + lVar4) < local_50 + local_48);
        }
        if (local_78[0] != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_78[0] + 0x10))();
        }
        if (!bVar13) goto LAB_14687188b;
        goto LAB_14687173c;
      }
      if (param_2 != 0) {
        local_40 = L"ObjectPath_PathWithTrailingSeperator";
        local_38 = 0x24;
        FUN_1446e940c(local_54,&local_40);
        local_40 = L"Core";
        local_38 = 4;
        FUN_1446e940c(local_7c,&local_40);
        FUN_140208bae(&local_40,local_7c,local_54,L"Object Path may not end with : or .");
        FUN_140008f88(param_2,&local_40);
        if (local_40 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_40 + 0x10))();
        }
      }
    }
LAB_146871880:
    if (local_78[0] != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78[0] + 0x10))();
    }
  }
LAB_14687188b:
  uVar6 = 0;
LAB_14687188d:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146871a88 FUN_146871a88 body=115 status=ok
// SIG undefined FUN_146871a88(void)

ulonglong FUN_146871a88(undefined4 *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  SRWLock = (PSRWLOCK)FUN_1412fb076();
  AcquireSRWLockShared(SRWLock);
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  lVar1 = FUN_14022f68a(SRWLock + 0x27,&local_38,0);
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar1 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146871afc FUN_146871afc body=108 status=ok
// SIG undefined FUN_146871afc(void)

void FUN_146871afc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1412fb076();
  FUN_140b9d76c(local_60,param_1,param_2);
  FUN_1427b8154(uVar1,local_60);
  FUN_1417110ea(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146871b6a FUN_146871b6a body=29 status=ok
// SIG undefined FUN_146871b6a(void)

void FUN_146871b6a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412fb076();
  FUN_146871b88(uVar1,param_1);
  return;
}



// FUNCTION 146871b88 FUN_146871b88 body=231 status=ok
// SIG undefined FUN_146871b88(void)

ulonglong FUN_146871b88(PSRWLOCK param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  undefined7 uVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  AcquireSRWLockShared(param_1);
  local_28 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_28 = 0;
  }
  local_30 = *param_2;
  lVar3 = FUN_146873914(param_1 + 0x27);
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (lVar3 == 0) {
    iVar5 = (int)param_2[1];
    if (iVar5 == *(int *)&param_1[10].Ptr) {
      if (iVar5 < 2) goto LAB_146871bd6;
      lVar3 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_2 + lVar3);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)param_1[9].Ptr + lVar3);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146871c34;
          }
          iVar5 = uVar4 - uVar8;
          goto LAB_146871c6c;
        }
        if (uVar1 == 0) break;
LAB_146871c34:
        lVar3 = lVar3 + 2;
      }
      iVar5 = 0;
LAB_146871c6c:
      bVar9 = iVar5 == 0;
    }
    else {
      bVar9 = *(int *)&param_1[10].Ptr + iVar5 == 1;
    }
    uVar6 = CONCAT71(uVar7,bVar9);
  }
LAB_146871bd6:
  ReleaseSRWLockShared(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146871c70 FUN_146871c70 body=253 status=ok
// SIG undefined FUN_146871c70(void)

undefined8 * FUN_146871c70(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  PVOID local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  uint local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  SRWLock = (PSRWLOCK)FUN_1412fb076();
  AcquireSRWLockShared(SRWLock);
  local_40 = param_3 & 0xff;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  local_38 = *param_2;
  local_48 = param_2;
  plVar3 = (longlong *)FUN_14022f68a(SRWLock + 0x27,&local_38,0);
  if (plVar3 == (longlong *)0x0) {
    local_68 = SRWLock[9].Ptr;
    local_60 = *(int *)&SRWLock[10].Ptr + -1;
    if (*(int *)&SRWLock[10].Ptr == 0) {
      local_60 = 0;
    }
    FUN_1427b6592(&local_48,param_1);
    cVar2 = FUN_144a846f6(*(undefined4 *)param_1);
    if (cVar2 == '\0') {
      *param_1 = 0;
    }
  }
  else {
    local_58 = *(undefined8 *)*plVar3;
    iVar1 = *(int *)((undefined8 *)*plVar3 + 1);
    local_50 = iVar1 + -1;
    if (iVar1 == 0) {
      local_50 = 0;
    }
    FUN_1427b6592(&local_48,param_1);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146871d6e FUN_146871d6e body=112 status=ok
// SIG undefined FUN_146871d6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146871d6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948200) {
    FUN_144b3d300(&DAT_14c948200);
    if (DAT_14c948200 == -1) {
      DAT_14c9481e8 = 0;
      _DAT_14c9481f0 = 0;
      _DAT_14c9481f8 = 2;
      atexit(FUN_1427b6799);
      _Init_thread_footer(&DAT_14c948200);
      return;
    }
  }
  return;
}



// FUNCTION 146871dde FUN_146871dde body=326 status=ok
// SIG undefined FUN_146871dde(void)

undefined8 * FUN_146871dde(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_8d8 [40];
  undefined1 *local_8b0;
  undefined4 local_8a8;
  undefined8 local_8a0;
  undefined4 local_898;
  undefined8 local_890;
  undefined4 local_888;
  undefined8 local_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = local_32;
  local_880 = param_2;
  local_860 = local_868;
  FUN_14005eb5c(&local_880,&local_868);
  local_890 = 0;
  local_888 = 0;
  local_8b0 = local_868;
  local_8a8 = (undefined4)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
  FUN_146872574(&local_8a0);
  if (param_3 != (longlong *)0x0) {
    FUN_14006620a(&local_878,local_890,local_888);
    uVar3 = uStack_86c;
    uVar2 = uStack_870;
    lVar1 = CONCAT44(uStack_874,local_878);
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = lVar1;
    *(undefined4 *)(param_3 + 1) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_878,local_8a0,local_898);
  if ((undefined8 *)&local_878 == param_1) {
    if (CONCAT44(uStack_874,local_878) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_878;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_874;
    *(undefined4 *)(param_1 + 1) = uStack_870;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_86c;
  }
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_30 ^ (ulonglong)auStack_8d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146871f26 FUN_146871f26 body=206 status=ok
// SIG undefined FUN_146871f26(void)

undefined4 FUN_146871f26(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_1;
  local_38 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_38 = 0;
  }
  FUN_14687508a(local_2c);
  local_58 = local_2c;
  uVar1 = (**(code **)(*DAT_14c9518c8 + 0x18))(DAT_14c9518c8,local_2c,0,0);
  if ((char)uVar1 != '\0') {
    FUN_1427b95fe(local_2c,&local_50,0);
    if (&local_50 == param_2) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_50;
      *(undefined4 *)(param_2 + 1) = local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146871ff6 FUN_146871ff6 body=167 status=ok
// SIG undefined FUN_146871ff6(void)

undefined8 * FUN_146871ff6(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_1427b5a38(local_30);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_30);
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687209e FUN_14687209e body=452 status=ok
// SIG undefined FUN_14687209e(void)

undefined4 FUN_14687209e(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_70 = 0xffffffff;
  local_78 = 0;
  iVar1 = FUN_1447ee042(0,&DAT_149e0635c,1,0);
  if (iVar1 == -1) {
    FUN_144a787a6(&local_48,param_1);
    puVar8 = &DAT_149dfb77a;
    puVar3 = (undefined2 *)0x0;
  }
  else {
    FUN_144a63a7c(param_1,&local_58,0,iVar1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    uStack_40 = uStack_50;
    puVar3 = &DAT_149dfb77a;
    uVar6 = *(int *)(param_1 + 1) - 1;
    if (*(int *)(param_1 + 1) == 0) {
      uVar6 = 0;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    uVar4 = iVar1 + 1U;
    if ((int)uVar6 <= (int)(iVar1 + 1U)) {
      uVar4 = uVar6;
    }
    uVar5 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar5 = 0;
    }
    FUN_14006620a(&local_58,puVar3 + uVar5,uVar6 - (int)uVar5);
    puVar3 = local_58;
    puVar8 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar8 = local_58;
    }
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar2 = FUN_1427b6f8e(&local_48,&local_58,0);
  if ((char)uVar2 != '\0') {
    puVar7 = local_58;
    if ((int)uStack_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,L"%s.%s",puVar7,puVar8);
    if (&local_68 == param_2) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 1) = local_60;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_5c;
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar3);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146872264 FUN_146872264 body=118 status=ok
// SIG undefined FUN_146872264(void)

undefined8 * FUN_146872264(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948268) {
    FUN_144b3d300(&DAT_14c948268);
    if (DAT_14c948268 == -1) {
      uVar1 = FUN_1415380f8(1);
      FUN_140056680(&DAT_14c948258,uVar1);
      atexit((_func_5014 *)&LAB_1427b7e3d);
      _Init_thread_footer(&DAT_14c948268);
    }
  }
  return &DAT_14c948258;
}



// FUNCTION 1468722da FUN_1468722da body=118 status=ok
// SIG undefined FUN_1468722da(void)

undefined8 * FUN_1468722da(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948298) {
    FUN_144b3d300(&DAT_14c948298);
    if (DAT_14c948298 == -1) {
      uVar1 = FUN_1415380f8(3);
      FUN_140056680(&DAT_14c948288,uVar1);
      atexit((_func_5014 *)&LAB_1427b7e5f);
      _Init_thread_footer(&DAT_14c948298);
    }
  }
  return &DAT_14c948288;
}



// FUNCTION 146872350 FUN_146872350 body=118 status=ok
// SIG undefined FUN_146872350(void)

undefined8 * FUN_146872350(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9482b0) {
    FUN_144b3d300(&DAT_14c9482b0);
    if (DAT_14c9482b0 == -1) {
      uVar1 = FUN_1415380f8(4);
      FUN_140056680(&DAT_14c9482a0,uVar1);
      atexit((_func_5014 *)&LAB_1427b7e70);
      _Init_thread_footer(&DAT_14c9482b0);
    }
  }
  return &DAT_14c9482a0;
}



// FUNCTION 1468723c6 FUN_1468723c6 body=204 status=ok
// SIG undefined FUN_1468723c6(void)

bool FUN_1468723c6(longlong *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = L"_Generated_";
  local_20 = 0xb;
  iVar2 = (int)param_1[1];
  iVar5 = 1;
  if (1 < iVar2) {
    iVar5 = iVar2;
  }
  local_30 = iVar5 - 1;
  local_38 = (longlong)iVar2 * 2 + *param_1 + (ulonglong)local_30 * -2;
  bVar4 = false;
  iVar2 = FUN_144a08910(&local_38,&local_28,0);
  uVar3 = 0xffffffff;
  if (iVar2 + 1U != 0) {
    uVar3 = iVar2 + 1U;
  }
  if (0 < (int)uVar3) {
    sVar1 = *(short *)(*param_1 + -2 + (ulonglong)uVar3 * 2);
    if ((sVar1 == 0x5c) || (sVar1 == 0x2f)) {
      bVar4 = true;
      if ((int)(uVar3 + 0xb) < (int)param_1[1]) {
        sVar1 = *(short *)(*param_1 + (ulonglong)(uVar3 + 0xb) * 2);
        bVar4 = sVar1 == 0x2f || sVar1 == 0x5c;
      }
    }
    else {
      bVar4 = false;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146872494 thunk_FUN_14475e408 body=5 status=ok
// SIG undefined thunk_FUN_14475e408(void)

undefined8 thunk_FUN_14475e408(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1[1];
  if (0 < (longlong)iVar6) {
    psVar1 = (short *)*param_1;
    iVar5 = 2;
    psVar3 = psVar1;
    do {
      if (*psVar3 == 0x27) {
        if (iVar5 == 1) {
          return 0;
        }
        if (iVar5 + -2 < -1) {
          return 0;
        }
        iVar4 = iVar5 + -1;
        if (iVar6 <= iVar4) {
          return 0;
        }
        if ((psVar1 + iVar6)[-1] != 0x27) {
          return 0;
        }
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = psVar1;
          *(int *)(param_2 + 1) = iVar5 + -2;
        }
        if (param_3 != (longlong *)0x0) {
          iVar6 = (int)param_1[1];
          if (iVar6 <= iVar4) {
            iVar4 = iVar6;
          }
          iVar2 = iVar6 - iVar4;
          if (iVar6 - iVar5 < iVar6 - iVar4) {
            iVar2 = iVar6 - iVar5;
          }
          iVar6 = 0;
          if (0 < iVar2) {
            iVar6 = iVar2;
          }
          *param_3 = (longlong)iVar4 * 2 + *param_1;
          *(int *)(param_3 + 1) = iVar6;
          return 1;
        }
        return 1;
      }
      psVar3 = psVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (psVar3 < psVar1 + iVar6);
  }
  return 0;
}



// FUNCTION 14687249a thunk_FUN_14687249f body=5 status=ok
// SIG undefined thunk_FUN_14687249f(void)

undefined8 thunk_FUN_14687249f(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong lStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lStack_38 = *param_1;
  uStack_30 = (undefined4)param_1[1];
  uVar5 = 0;
  iVar3 = FUN_14279164b(&lStack_38,0x27,0);
  if (iVar3 != -1) {
    iVar4 = iVar3 + 1;
    if ((iVar4 < (int)param_1[1] && -2 < iVar3) &&
       (*(char *)(*param_1 + -1 + (longlong)(int)param_1[1]) == '\'')) {
      if (param_2 != (longlong *)0x0) {
        *param_2 = *param_1;
        *(int *)(param_2 + 1) = iVar3;
      }
      uVar5 = 1;
      if (param_3 != (longlong *)0x0) {
        iVar1 = (int)param_1[1];
        iVar3 = (iVar1 - iVar3) + -2;
        if (iVar1 <= iVar4) {
          iVar4 = iVar1;
        }
        iVar2 = iVar1 - iVar4;
        if (iVar3 < iVar1 - iVar4) {
          iVar2 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar2) {
          iVar3 = iVar2;
        }
        *param_3 = (longlong)iVar4 + *param_1;
        *(int *)(param_3 + 1) = iVar3;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687249f FUN_14687249f body=212 status=ok
// SIG undefined FUN_14687249f(void)

undefined8 FUN_14687249f(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_30 = (undefined4)param_1[1];
  uVar5 = 0;
  iVar3 = FUN_14279164b(&local_38,0x27,0);
  if (iVar3 != -1) {
    iVar4 = iVar3 + 1;
    if ((iVar4 < (int)param_1[1] && -2 < iVar3) &&
       (*(char *)(*param_1 + -1 + (longlong)(int)param_1[1]) == '\'')) {
      if (param_2 != (longlong *)0x0) {
        *param_2 = *param_1;
        *(int *)(param_2 + 1) = iVar3;
      }
      uVar5 = 1;
      if (param_3 != (longlong *)0x0) {
        iVar1 = (int)param_1[1];
        iVar3 = (iVar1 - iVar3) + -2;
        if (iVar1 <= iVar4) {
          iVar4 = iVar1;
        }
        iVar2 = iVar1 - iVar4;
        if (iVar3 < iVar1 - iVar4) {
          iVar2 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar2) {
          iVar3 = iVar2;
        }
        *param_3 = (longlong)iVar4 + *param_1;
        *(int *)(param_3 + 1) = iVar3;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146872574 FUN_146872574 body=230 status=ok
// SIG undefined FUN_146872574(void)

undefined8 * FUN_146872574(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar2 = (int)param_2[1];
  if (0 < (longlong)iVar2) {
    lVar3 = *param_2;
    iVar4 = FUN_144a54874(&DAT_149e065c6,lVar3,1);
    if (iVar4 == 0) {
      uVar5 = iVar2 - 1;
      psVar1 = (short *)(lVar3 + (longlong)iVar2 * 2);
      psVar7 = psVar1 + -(ulonglong)uVar5;
      *param_2 = (longlong)psVar7;
      *(uint *)(param_2 + 1) = uVar5;
      if (uVar5 != 0) {
        uVar6 = 0;
        psVar8 = psVar7;
        do {
          if (*psVar8 == 0x2f) {
            if (uVar6 != 0xffffffff) {
              if (param_3 != (longlong *)0x0) {
                uVar9 = (iVar2 - uVar6) - 2;
                if ((int)uVar5 <= (int)uVar9) {
                  uVar9 = uVar5;
                }
                uVar5 = 0;
                if (0 < (int)uVar9) {
                  uVar5 = uVar9;
                }
                *param_3 = (longlong)psVar1 - (ulonglong)(uVar5 * 2);
                *(uint *)(param_3 + 1) = uVar5;
                uVar5 = *(uint *)(param_2 + 1);
                psVar7 = (short *)*param_2;
              }
              if ((int)uVar6 < (int)uVar5) {
                uVar5 = uVar6;
              }
              uVar6 = 0;
              if (0 < (int)uVar5) {
                uVar6 = uVar5;
              }
              *param_1 = psVar7;
              *(uint *)(param_1 + 1) = uVar6;
              return param_1;
            }
            break;
          }
          psVar8 = psVar8 + 1;
          uVar6 = uVar6 + 1;
        } while (psVar8 < psVar1);
      }
      if (param_3 != (longlong *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
      }
      uVar10 = (undefined4)*param_2;
      uVar11 = *(undefined4 *)((longlong)param_2 + 4);
      uVar12 = (undefined4)param_2[1];
      uVar13 = *(undefined4 *)((longlong)param_2 + 0xc);
      goto LAB_1468725bb;
    }
  }
  if (param_3 != (longlong *)0x0) {
    lVar3 = param_2[1];
    *param_3 = *param_2;
    param_3[1] = lVar3;
  }
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
LAB_1468725bb:
  *(undefined4 *)param_1 = uVar10;
  *(undefined4 *)((longlong)param_1 + 4) = uVar11;
  *(undefined4 *)(param_1 + 1) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar13;
  return param_1;
}



// FUNCTION 14687265a FUN_14687265a body=22 status=ok
// SIG undefined FUN_14687265a(void)

undefined8 FUN_14687265a(undefined8 param_1)

{
  FUN_146872670();
  return param_1;
}



// FUNCTION 146872670 FUN_146872670 body=83 status=ok
// SIG undefined FUN_146872670(void)

void FUN_146872670(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar4 = *(int *)(param_2 + 1);
  if (0 < (longlong)iVar4) {
    psVar1 = (short *)*param_2;
    iVar5 = 0;
    psVar6 = psVar1;
    do {
      if (*psVar6 == 0x2e) {
        if (iVar5 != 1) {
          iVar2 = -iVar5;
          if (iVar4 <= -iVar5) {
            iVar2 = iVar4;
          }
          iVar4 = 0;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          *param_1 = psVar1;
          *(int *)(param_1 + 1) = iVar4;
          return;
        }
        break;
      }
      psVar6 = psVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (psVar6 < psVar1 + iVar4);
  }
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  return;
}



// FUNCTION 1468726c4 FUN_1468726c4 body=22 status=ok
// SIG undefined FUN_1468726c4(void)

undefined8 FUN_1468726c4(undefined8 param_1)

{
  FUN_1468726da();
  return param_1;
}



// FUNCTION 1468726da FUN_1468726da body=137 status=ok
// SIG undefined FUN_1468726da(void)

longlong * FUN_1468726da(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = (undefined4)param_2[1];
  iVar5 = FUN_14279164b(&local_30,0x2e,0);
  if (iVar5 == -1) {
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar4 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(int *)(param_1 + 1) = (int)lVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    uVar7 = (int)uVar1 >> 0x1f & uVar1;
    iVar6 = uVar1 - uVar7;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    *param_1 = (longlong)(int)uVar7 + *param_2;
    *(int *)(param_1 + 1) = iVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146872764 FUN_146872764 body=22 status=ok
// SIG undefined FUN_146872764(void)

undefined8 FUN_146872764(undefined8 param_1)

{
  FUN_14687277a();
  return param_1;
}



// FUNCTION 14687277a FUN_14687277a body=185 status=ok
// SIG undefined FUN_14687277a(void)

undefined8 * FUN_14687277a(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *_Src;
  uint uVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  uVar5 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  _Src = (undefined2 *)*param_2;
  uVar4 = (longlong)(int)uVar5 * 2;
  do {
    if (uVar4 == 0) goto LAB_1468727fe;
    sVar1 = *(short *)((longlong)_Src + (uVar4 - 2));
    uVar4 = uVar4 - 2;
  } while ((sVar1 != 0x3a) && (sVar1 != 0x2e));
  if ((longlong)_Src + uVar4 == 0) {
LAB_1468727fe:
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar2,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  else {
    uVar3 = (int)(uVar4 >> 1) + 1;
    if (iVar2 == 0) {
      _Src = &DAT_149dfb77a;
    }
    if ((int)uVar5 <= (int)uVar3) {
      uVar3 = uVar5;
    }
    uVar4 = 0;
    if (0 < (int)uVar3) {
      uVar4 = (ulonglong)uVar3;
    }
    FUN_14006620a(param_1,_Src + uVar4,uVar5 - (int)uVar4);
  }
  return param_1;
}



// FUNCTION 146872833 FUN_146872833 body=122 status=ok
// SIG undefined FUN_146872833(void)

void FUN_146872833(longlong *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar6 = (int)param_2[1];
  lVar2 = *param_2;
  uVar9 = (longlong)iVar6 * 2;
  do {
    if (uVar9 == 0) goto LAB_1468728a6;
    sVar1 = *(short *)(lVar2 + -2 + uVar9);
    uVar9 = uVar9 - 2;
  } while ((sVar1 != 0x3a) && (sVar1 != 0x2e));
  if (lVar2 + uVar9 != 0) {
    uVar7 = (int)(uVar9 >> 1) + 1;
    uVar4 = (int)uVar7 >> 0x1f & uVar7;
    iVar8 = uVar7 - uVar4;
    iVar5 = uVar4 + 0x7fffffff;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
    iVar3 = iVar6 - iVar8;
    if (iVar5 < iVar6 - iVar8) {
      iVar3 = iVar5;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    *param_1 = lVar2 + (longlong)iVar8 * 2;
    *(int *)(param_1 + 1) = iVar6;
    return;
  }
LAB_1468728a6:
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  return;
}



// FUNCTION 1468728ae FUN_1468728ae body=98 status=ok
// SIG undefined FUN_1468728ae(void)

void FUN_1468728ae(undefined4 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = FUN_1412fb076();
  local_38 = *(undefined8 *)(lVar1 + 0x58);
  local_30 = *(int *)(lVar1 + 0x60) + -1;
  if (*(int *)(lVar1 + 0x60) == 0) {
    local_30 = 0;
  }
  FUN_14474d122(&local_38,&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468729aa FUN_1468729aa body=29 status=ok
// SIG undefined FUN_1468729aa(void)

undefined8 FUN_1468729aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468729c8 FUN_1468729c8 body=32 status=ok
// SIG undefined FUN_1468729c8(void)

undefined8 FUN_1468729c8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGameDataHandle");
  return param_2;
}



// FUNCTION 1468729e8 FUN_1468729e8 body=63 status=ok
// SIG undefined FUN_1468729e8(void)

undefined8 FUN_1468729e8(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x133,
                L"Pure virtual not implemented (%s)",L"FProperty::GetCPPTypeForwardDeclaration");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 146872a28 FUN_146872a28 body=41 status=ok
// SIG undefined FUN_146872a28(void)

void FUN_146872a28(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x2a1,
                L"Pure virtual not implemented (%s)",L"FProperty::ExportText");
  return;
}



// FUNCTION 146872a52 FUN_146872a52 body=42 status=ok
// SIG undefined FUN_146872a52(void)

undefined8 FUN_146872a52(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x2a2,
                L"Pure virtual not implemented (%s)",L"FProperty::ImportText");
  return 0;
}



// FUNCTION 146872a7c FUN_146872a7c body=29 status=ok
// SIG undefined FUN_146872a7c(void)

undefined8 FUN_146872a7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146872a9a FUN_146872a9a body=42 status=ok
// SIG undefined FUN_146872a9a(void)

undefined8 FUN_146872a9a(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x1d6,
                L"Pure virtual not implemented (%s)",L"FProperty::Identical");
  return 0;
}



// FUNCTION 146872ac4 FUN_146872ac4 body=41 status=ok
// SIG undefined FUN_146872ac4(void)

void FUN_146872ac4(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x218,
                L"Pure virtual not implemented (%s)",L"FProperty::SerializeItem");
  return;
}



// FUNCTION 146872aee FUN_146872aee body=29 status=ok
// SIG undefined FUN_146872aee(void)

undefined8 FUN_146872aee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146872b0c FUN_146872b0c body=32 status=ok
// SIG undefined FUN_146872b0c(void)

undefined8 FUN_146872b0c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxDefPtr");
  return param_2;
}



// FUNCTION 146872b2c FUN_146872b2c body=209 status=ok
// SIG undefined FUN_146872b2c(void)

uint FUN_146872b2c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = (int)param_1[1];
  uVar5 = 0xffffffff;
  uVar6 = uVar5;
  if ((-1 < iVar4) &&
     (uVar1 = *(uint *)(param_2 + 8), iVar4 < (int)(uVar1 - *(int *)(param_2 + 0x24)))) {
    if (*(int *)(*(longlong *)(*param_1 + 0x10) + 0x24 +
                (ulonglong)((*(byte *)(*param_1 + 0x30) & 1) == 0) * 0x10) == 0) {
      local_1c = iVar4;
      cVar3 = FUN_1446ec082();
      if (cVar3 != '\0') {
        uVar6 = *(uint *)(param_1 + 1);
      }
    }
    else if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if ((int)uVar7 < *(int *)(param_2 + 0x18)) {
          uVar2 = *(ulonglong *)(param_2 + 0x10);
          uVar8 = ((longlong)uVar2 >> 0x18) + param_2 + 0x10;
          if ((uVar2 & 1) == 0) {
            uVar8 = uVar2;
          }
          if ((*(uint *)(uVar8 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
            uVar6 = uVar7;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar5;
      } while (uVar1 != uVar7);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146872bfe FUN_146872bfe body=198 status=ok
// SIG undefined FUN_146872bfe(void)

uint FUN_146872bfe(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = (int)param_1[1];
  uVar4 = 0xffffffff;
  uVar5 = uVar4;
  if ((-1 < iVar3) &&
     (uVar1 = *(uint *)(param_2 + 8), iVar3 < (int)(uVar1 - *(int *)(param_2 + 0x34)))) {
    if (*(int *)(*(longlong *)(*param_1 + 0x10) + 0x24 +
                (ulonglong)((*(byte *)(*param_1 + 0x30) & 1) == 0) * 0x10) == 0) {
      local_1c = iVar3;
      cVar2 = FUN_1446ec082();
      if (cVar2 != '\0') {
        uVar5 = *(uint *)(param_1 + 1);
      }
    }
    else if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if ((int)uVar6 < *(int *)(param_2 + 0x28)) {
          lVar7 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar7 = param_2 + 0x10;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
            uVar5 = uVar6;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
          }
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar4;
      } while (uVar1 != uVar6);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146872cc6 FUN_146872cc6 body=132 status=ok
// SIG undefined FUN_146872cc6(void)

void FUN_146872cc6(longlong param_1,int param_2)

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



// FUNCTION 146872d4c FUN_146872d4c body=62 status=ok
// SIG undefined FUN_146872d4c(void)

void FUN_146872d4c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146872d8a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146872d8a FUN_146872d8a body=93 status=ok
// SIG undefined FUN_146872d8a(void)

ulonglong FUN_146872d8a(uint param_1,uint param_2)

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



// FUNCTION 146872de8 FUN_146872de8 body=88 status=ok
// SIG undefined FUN_146872de8(void)

void FUN_146872de8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146872e40 FUN_146872e40 body=147 status=ok
// SIG undefined FUN_146872e40(void)

void FUN_146872e40(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146872ed4 FUN_146872ed4 body=69 status=ok
// SIG undefined FUN_146872ed4(void)

undefined8 * FUN_146872ed4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e62050;
  FUN_1447a1747(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146872f1a FUN_146872f1a body=64 status=ok
// SIG undefined FUN_146872f1a(void)

undefined8 * FUN_146872f1a(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146872f5a FUN_146872f5a body=54 status=ok
// SIG undefined FUN_146872f5a(void)

void FUN_146872f5a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140d04cb2(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 146872f90 FUN_146872f90 body=88 status=ok
// SIG undefined FUN_146872f90(void)

void FUN_146872f90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar3 = (longlong)(int)param_2[1] << 3;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_140d04cb2(plVar2,iVar1);
      }
      *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar4;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 146872fe8 FUN_146872fe8 body=88 status=ok
// SIG undefined FUN_146872fe8(void)

void FUN_146872fe8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar3 = (longlong)(int)param_2[1] << 3;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_140d04cb2(plVar2,iVar1);
      }
      *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar4;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 146873040 FUN_146873040 body=296 status=ok
// SIG undefined FUN_146873040(void)

void FUN_146873040(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar5) || (uStack_60 != plVar1)) {
    do {
      lVar6 = (longlong)iStack_74;
      lVar3 = *local_90;
      plVar4 = *(longlong **)(param_1 + 0x10);
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_140d04cb2(plVar4,iVar2);
      }
      *(longlong *)(*plVar4 + (longlong)iVar2 * 8) = lVar6 * 0x10 + lVar3;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687316a FUN_14687316a body=296 status=ok
// SIG undefined FUN_14687316a(void)

void FUN_14687316a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar5) || (uStack_60 != plVar1)) {
    do {
      lVar6 = (longlong)iStack_74;
      lVar3 = *local_90;
      plVar4 = *(longlong **)(param_1 + 0x10);
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_140d04cb2(plVar4,iVar2);
      }
      *(longlong *)(*plVar4 + (longlong)iVar2 * 8) = lVar6 * 0x10 + lVar3;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468732a6 FUN_1468732a6 body=75 status=ok
// SIG undefined FUN_1468732a6(void)

void FUN_1468732a6(longlong *param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      (**(code **)(*param_1 + 0x88))(param_1,param_2,param_4,param_5);
      param_2 = param_2 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1468732f2 FUN_1468732f2 body=236 status=ok
// SIG undefined FUN_1468732f2(void)

void FUN_1468732f2(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar3 = FUN_14022f826();
  if (cVar3 != '\0') {
    local_48 = 0;
    local_40 = 0;
    local_58 = 0;
    local_50 = 0;
    local_68 = (undefined4)*param_2;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_60 = (undefined4)param_2[1];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_140a8f91e(&local_68,&local_48);
    lVar4 = FUN_1449668a2(param_3,local_48,local_40);
    uVar1 = *(undefined2 *)(param_1 + 0x24);
    puVar5 = *(undefined2 **)(lVar4 + 8);
    if (*(undefined2 **)(lVar4 + 0x10) <= puVar5 + 1) {
      FUN_140213274(lVar4,1);
      puVar5 = *(undefined2 **)(lVar4 + 8);
    }
    *(undefined2 **)(lVar4 + 8) = puVar5 + 1;
    *puVar5 = uVar1;
    FUN_1449668a2(lVar4,local_58,local_50);
    lVar4 = *param_3;
    lVar2 = param_3[1];
    *param_2 = lVar4;
    *(int *)(param_2 + 1) = (int)((ulonglong)(lVar2 - lVar4) >> 1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468733e0 FUN_1468733e0 body=215 status=ok
// SIG undefined FUN_1468733e0(void)

void FUN_1468733e0(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  ulonglong *local_58;
  char local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2[2] == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar1 >> 0x1f;
    if ((int)uVar1 < 0) {
      *(uint *)(param_1 + 0x18) = uVar1 & 0x7fffffff;
    }
  }
  else {
    local_68 = local_48;
    local_50 = '\0';
    local_58 = &local_28;
    local_60 = local_68;
    FUN_1468732f2(param_1,param_2,&local_68);
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    FUN_1468734b8(param_1,&local_88,&local_69);
    if (local_50 == '\x01') {
      FUN_1400020a8(local_68);
    }
    uVar2 = (uint)local_69;
  }
  if ((uVar2 & 1) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468734b8 FUN_1468734b8 body=358 status=ok
// SIG undefined FUN_1468734b8(void)

void FUN_1468734b8(longlong param_1,undefined4 *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  int local_98;
  char local_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  iStack_70 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_144907528(&local_88,&local_68);
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uVar4 = FUN_14022faad(*(uint *)(param_1 + 0x18) & 0x7fffffff,param_1 + 8,&local_58,&local_89);
  if (local_89 != '\0') {
    lVar6 = (ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    lVar7 = (ulonglong)uVar4 * 0x10;
    local_a0 = *(undefined8 *)(lVar2 + lVar7);
    iVar1 = *(int *)(lVar2 + 8 + lVar7);
    local_98 = iVar1 + -1;
    if (iVar1 == 0) {
      local_98 = 0;
    }
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    cVar3 = FUN_14022fd12(&local_b8,&local_a0,&local_78);
    if (cVar3 != '\0') {
      if (iStack_70 == 0) {
        *param_3 = (byte)((uint)*(undefined4 *)(lVar6 + 0x18) >> 0x1f);
        uVar5 = *(uint *)(lVar6 + 0x18) & 0x7fffffff;
        if (uVar5 == 0) {
          FUN_14687374c(param_1,uVar4);
          goto LAB_1468735c6;
        }
        if (-1 < (int)*(uint *)(lVar6 + 0x18)) goto LAB_1468735c6;
        *(uint *)(lVar6 + 0x18) = uVar5;
      }
      else {
        local_c8 = (undefined4)local_78;
        uStack_c4 = local_78._4_4_;
        iStack_c0 = iStack_70;
        uStack_bc = uStack_6c;
        FUN_1468734b8(lVar6,&local_c8,param_3);
        if (*param_3 != 1) goto LAB_1468735c6;
      }
      FUN_146873620(lVar2 + lVar7,lVar6);
      goto LAB_1468735c6;
    }
  }
  *param_3 = 0;
LAB_1468735c6:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146873620 FUN_146873620 body=298 status=ok
// SIG undefined FUN_146873620(void)

void FUN_146873620(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_8b8 [40];
  undefined8 local_890;
  int local_888;
  undefined8 local_880;
  int local_878;
  undefined1 local_870 [8];
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined1 *local_850;
  undefined1 *local_848;
  ulonglong *local_840;
  char local_838;
  undefined1 local_830 [2048];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  if (*(uint *)(param_2 + 0x18) < 2) {
    local_850 = local_830;
    local_838 = '\0';
    local_840 = &local_30;
    local_880 = *param_1;
    local_878 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      local_878 = 0;
    }
    local_848 = local_850;
    FUN_1404d3f7a(&local_850);
    local_890 = **(undefined8 **)(param_2 + 8);
    iVar1 = *(int *)(*(undefined8 **)(param_2 + 8) + 1);
    local_888 = iVar1 + -1;
    if (iVar1 == 0) {
      local_888 = 0;
    }
    FUN_1404d3f7a(&local_850);
    FUN_1402980a2(param_1,local_850,(ulonglong)((longlong)local_848 - (longlong)local_850) >> 1);
    local_868 = 0;
    uStack_860 = 0;
    local_858 = 0;
    FUN_140b9d5cc(local_870,*(undefined8 *)(param_2 + 0x10));
    FUN_140b9d5cc(param_2,local_870);
    FUN_140b9d6c4(uStack_860);
    FUN_140b9d678(&local_868,local_868);
    if (local_838 == '\x01') {
      FUN_1400020a8(local_850);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_8b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687374c FUN_14687374c body=204 status=ok
// SIG undefined FUN_14687374c(void)

void FUN_14687374c(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar9 = (ulonglong)(*(uint *)(param_1 + 0x18) & 0x7fffffff) - 1;
  uVar8 = (uint)uVar9;
  if ((int)param_2 < (int)uVar8) {
    uVar10 = (ulonglong)param_2;
    uVar9 = uVar9 & 0xffffffff;
    lVar12 = uVar10 * 8 + 0xe;
    lVar13 = uVar9 - uVar10;
    lVar11 = uVar10 << 5;
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(lVar4 + -0x1c + lVar12 * 2) != 0) {
        FUN_1400020a8();
      }
      puVar1 = (undefined4 *)(lVar4 + -0xc + lVar12 * 2);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + -0x1c + lVar12 * 2);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar3 = (undefined8 *)(lVar4 + -0xc + lVar12 * 2);
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_140b9d5cc(*(longlong *)(param_1 + 0x10) + lVar11,
                    *(longlong *)(param_1 + 0x10) + lVar11 + 0x20);
      lVar11 = lVar11 + 0x20;
      lVar12 = lVar12 + 8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  FUN_144a7e010(uVar9 * 0x10 + *(longlong *)(param_1 + 8));
  FUN_140b9d726(uVar9 * 0x20 + *(longlong *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0x80000000 | uVar8;
  return;
}



// FUNCTION 146873818 FUN_146873818 body=96 status=ok
// SIG undefined FUN_146873818(void)

void FUN_146873818(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + (longlong)(int)param_2 * 8);
  if (lVar2 != 0) {
    FUN_1417110ea(lVar2);
    FUN_1400020a8(lVar2);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 146873878 FUN_146873878 body=62 status=ok
// SIG undefined FUN_146873878(void)

void FUN_146873878(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468738b6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1468738b6 FUN_1468738b6 body=93 status=ok
// SIG undefined FUN_1468738b6(void)

ulonglong FUN_1468738b6(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146873914 FUN_146873914 body=165 status=ok
// SIG undefined FUN_146873914(void)

longlong FUN_146873914(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_60;
  undefined1 *local_58;
  ulonglong *local_50;
  char local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2[2] == 0) {
    lVar1 = 0;
    if (*(int *)(param_1 + 0x18) < 0) {
      lVar1 = param_1;
    }
  }
  else {
    local_60 = local_40;
    local_48 = '\0';
    local_50 = &local_20;
    local_58 = local_60;
    FUN_1468732f2(param_1,param_2,&local_60);
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    lVar1 = FUN_1468739ba(param_1);
    if (local_48 == '\x01') {
      FUN_1400020a8(local_60);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468739ba FUN_1468739ba body=287 status=ok
// SIG undefined FUN_1468739ba(void)

longlong FUN_1468739ba(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  int local_78;
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  iStack_50 = 0;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  FUN_144907528(&local_68,&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uVar3 = FUN_14022faad(*(uint *)(param_1 + 0x18) & 0x7fffffff,param_1 + 8,&local_38,&local_69);
  lVar5 = 0;
  if (local_69 == '\x01') {
    lVar6 = (ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x10);
    lVar4 = (ulonglong)uVar3 * 0x10;
    local_80 = *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar4);
    iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8 + lVar4);
    local_78 = iVar1 + -1;
    if (iVar1 == 0) {
      local_78 = 0;
    }
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    cVar2 = FUN_14022fd12(&local_98,&local_80,&local_58);
    if (cVar2 != '\0') {
      if (iStack_50 == 0) {
        lVar5 = 0;
        if (*(int *)(lVar6 + 0x18) < 0) {
          lVar5 = lVar6;
        }
      }
      else {
        local_a8 = (undefined4)local_58;
        uStack_a4 = local_58._4_4_;
        iStack_a0 = iStack_50;
        uStack_9c = uStack_4c;
        lVar5 = FUN_1468739ba(lVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146873ada FUN_146873ada body=31 status=ok
// SIG undefined FUN_146873ada(void)

undefined8 FUN_146873ada(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146873b0c FUN_146873b0c body=60 status=ok
// SIG undefined FUN_146873b0c(void)

void FUN_146873b0c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e621d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146873b48 FUN_146873b48 body=100 status=ok
// SIG undefined FUN_146873b48(void)

void FUN_146873b48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e621d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146873b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146873bac FUN_146873bac body=23 status=ok
// SIG undefined FUN_146873bac(void)

undefined8 FUN_146873bac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 146873bc6 FUN_146873bc6 body=348 status=ok
// SIG undefined FUN_146873bc6(void)

undefined4 *
FUN_146873bc6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ca3ce(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_14090688a(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146873d8c FUN_146873d8c body=59 status=ok
// SIG undefined FUN_146873d8c(void)

undefined8 FUN_146873d8c(longlong *param_1)

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



// FUNCTION 146873e2c FUN_146873e2c body=29 status=ok
// SIG undefined FUN_146873e2c(void)

undefined8 FUN_146873e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146873e60 FUN_146873e60 body=56 status=ok
// SIG undefined FUN_146873e60(void)

void FUN_146873e60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146873e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146873eaa FUN_146873eaa body=271 status=ok
// SIG undefined FUN_146873eaa(void)

undefined8
FUN_146873eaa(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    local_58 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_78);
    if ((local_6c & 2) == 0) {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      local_58 = 0;
    }
    local_88 = param_7;
    FUN_14686b602(param_3,param_2,&local_68,param_6);
    (**(code **)(*param_1 + 8))(param_1,local_78);
    plVar3 = plStack_60;
    if (((local_6c & 4) != 0) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  else {
    local_88 = param_7;
    FUN_14686b602(param_3,param_2,param_4,param_6);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146873fda FUN_146873fda body=59 status=ok
// SIG undefined FUN_146873fda(void)

undefined8 FUN_146873fda(longlong *param_1)

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



// FUNCTION 146874020 FUN_146874020 body=64 status=ok
// SIG undefined FUN_146874020(void)

void FUN_146874020(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1468740ae FUN_1468740ae body=116 status=ok
// SIG undefined FUN_1468740ae(void)

void FUN_1468740ae(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_146874124(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146874124 FUN_146874124 body=133 status=ok
// SIG undefined FUN_146874124(void)

void FUN_146874124(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1468741aa FUN_1468741aa body=150 status=ok
// SIG undefined FUN_1468741aa(void)

void FUN_1468741aa(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146874240 FUN_146874240 body=89 status=ok
// SIG undefined FUN_146874240(void)

void FUN_146874240(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return;
}



// FUNCTION 14687429a FUN_14687429a body=118 status=ok
// SIG undefined FUN_14687429a(void)

void FUN_14687429a(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146874310(param_1,0,iVar3,0xc);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 146874310 FUN_146874310 body=141 status=ok
// SIG undefined FUN_146874310(void)

void FUN_146874310(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 14687439e FUN_14687439e body=322 status=ok
// SIG undefined FUN_14687439e(void)

void FUN_14687439e(longlong *param_1)

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



// FUNCTION 1468744e1 FUN_1468744e1 body=47 status=ok
// SIG undefined FUN_1468744e1(void)

void FUN_1468744e1(longlong param_1,int param_2)

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



// FUNCTION 146874516 FUN_146874516 body=142 status=ok
// SIG undefined FUN_146874516(void)

void FUN_146874516(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468745a4(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(lVar2 + 0x10 + lVar3 * 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(lVar2 + lVar3 * 0x18 + 0x14) = 0;
    return;
  }
  puVar4 = (undefined8 *)(lVar2 + lVar3 * 0x18 + 8);
  FUN_146872de8(puVar4,iVar1);
  memcpy((void *)*puVar4,_Src,(longlong)iVar1 << 4);
  return;
}



// FUNCTION 1468745a4 FUN_1468745a4 body=147 status=ok
// SIG undefined FUN_1468745a4(void)

void FUN_1468745a4(longlong param_1,int param_2)

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



// FUNCTION 146874638 FUN_146874638 body=334 status=ok
// SIG undefined FUN_146874638(void)

undefined4 * FUN_146874638(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
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
  FUN_140503402(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_14050336a(param_1,uVar3,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140503742(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146874788 FUN_146874788 body=69 status=ok
// SIG undefined FUN_146874788(void)

void FUN_146874788(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140d0836e(param_1);
    return;
  }
  return;
}



// FUNCTION 1468747ce FUN_1468747ce body=123 status=ok
// SIG undefined FUN_1468747ce(void)

void FUN_1468747ce(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1467c0730((longlong)param_2 * 0x28 + *param_1);
  FUN_1467c1a76(param_1,param_2,1);
  return;
}



// FUNCTION 14687484a FUN_14687484a body=31 status=ok
// SIG undefined FUN_14687484a(void)

undefined8 FUN_14687484a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146874886 FUN_146874886 body=60 status=ok
// SIG undefined FUN_146874886(void)

void FUN_146874886(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149e62530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1468748c2 FUN_1468748c2 body=60 status=ok
// SIG undefined FUN_1468748c2(void)

void FUN_1468748c2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149e62530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1468748fe FUN_1468748fe body=100 status=ok
// SIG undefined FUN_1468748fe(void)

void FUN_1468748fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_149e020b0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_149e62530;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146874953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14687496e FUN_14687496e body=21 status=ok
// SIG undefined FUN_14687496e(void)

undefined8 FUN_14687496e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146874984 FUN_146874984 body=31 status=ok
// SIG undefined FUN_146874984(void)

undefined8 FUN_146874984(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468749bc FUN_1468749bc body=60 status=ok
// SIG undefined FUN_1468749bc(void)

void FUN_1468749bc(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e62de0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149e625a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1468749f8 FUN_1468749f8 body=60 status=ok
// SIG undefined FUN_1468749f8(void)

void FUN_1468749f8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e62de0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149e625a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146874a34 FUN_146874a34 body=100 status=ok
// SIG undefined FUN_146874a34(void)

void FUN_146874a34(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_149e62de0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_149e625a0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146874a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146874aa6 FUN_146874aa6 body=21 status=ok
// SIG undefined FUN_146874aa6(void)

undefined8 FUN_146874aa6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146874abc FUN_146874abc body=48 status=ok
// SIG undefined FUN_146874abc(void)

void FUN_146874abc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146874aec FUN_146874aec body=132 status=ok
// SIG undefined FUN_146874aec(void)

void FUN_146874aec(longlong param_1,int param_2)

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



// FUNCTION 146874b72 FUN_146874b72 body=79 status=ok
// SIG undefined FUN_146874b72(void)

void FUN_146874b72(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c951640;
  uVar1 = FUN_145a50b58();
  uVar2 = FUN_140010cf7(uVar1,uVar2,0,0x510,0,0,0,0);
  FUN_146870448(uVar2,param_1);
  return;
}



// FUNCTION 146874bc2 FUN_146874bc2 body=96 status=ok
// SIG undefined FUN_146874bc2(void)

void FUN_146874bc2(longlong param_1,int param_2)

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



// FUNCTION 146874c22 FUN_146874c22 body=132 status=ok
// SIG undefined FUN_146874c22(void)

void FUN_146874c22(longlong param_1,int param_2)

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



// FUNCTION 146874ca8 FUN_146874ca8 body=197 status=ok
// SIG undefined FUN_146874ca8(void)

void FUN_146874ca8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c9481f0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c9481fc = DAT_14c9481fc + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c9481e8 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c9481e8 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c9481fc = DAT_14c9481fc + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_146874d42;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c9481fc = DAT_14c9481fc + -1;
LAB_146874d42:
  FUN_14474d06a(&DAT_14c9481e8,0);
  return;
}



// FUNCTION 146874d6e FUN_146874d6e body=113 status=ok
// SIG undefined FUN_146874d6e(void)

void FUN_146874d6e(longlong param_1,int param_2)

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



// FUNCTION 146874de0 FUN_146874de0 body=130 status=ok
// SIG undefined FUN_146874de0(void)

void FUN_146874de0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146874e64 FUN_146874e64 body=540 status=ok
// SIG undefined FUN_146874e64(void)

byte FUN_146874e64(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140fede38(&local_30,param_1,1);
  if (param_2 != (int *)0x0) {
    *param_2 = *(int *)(param_1 + 1) - local_28;
  }
  switch(local_28) {
  case 0:
    bVar1 = 0;
    goto LAB_146874fd5;
  case 5:
    iVar2 = FUN_144a54874(local_30,L".umap",5);
    if (iVar2 == 0) {
      bVar1 = 2;
      goto LAB_146874fd5;
    }
    iVar2 = FUN_144a54874(local_30,L".utxt",5);
    if (iVar2 == 0) {
      bVar1 = 3;
      goto LAB_146874fd5;
    }
    iVar2 = FUN_144a54874(local_30,L".uexp",5);
    if (iVar2 == 0) {
      bVar1 = 7;
      goto LAB_146874fd5;
    }
    break;
  case 6:
    iVar2 = FUN_144a54874(local_30,L".ubulk",6);
    if (iVar2 == 0) {
      local_48 = 6;
      if (6 < *(int *)(param_1 + 1)) {
        local_48 = *(int *)(param_1 + 1);
      }
      local_48 = local_48 + -6;
      local_50 = *param_1;
      FUN_140fede38(&local_40,&local_50,1);
      if (local_38 == 2) {
        iVar2 = FUN_144a54874(local_40,&DAT_149e62f78,2);
        if (iVar2 == 0 && param_2 != (int *)0x0) {
          *param_2 = *param_2 + -2;
          bVar1 = 10;
        }
        else {
          bVar1 = (iVar2 == 0) * '\x02' | 8;
        }
      }
      else {
        bVar1 = 8;
      }
    }
    else {
      iVar2 = FUN_144a54874(local_30,L".uptnl",6);
      bVar1 = (iVar2 == 0) * '\x04' + 5;
    }
    goto LAB_146874fd5;
  case 7:
    iVar2 = FUN_144a54874(local_30,L".uasset",7);
    if (iVar2 == 0) {
      bVar1 = 1;
      goto LAB_146874fd5;
    }
    break;
  case 8:
    iVar2 = FUN_144a54874(local_30,L".utxtmap",8);
    if (iVar2 == 0) {
      bVar1 = 4;
      goto LAB_146874fd5;
    }
    break;
  case 9:
    iVar2 = FUN_144a54874(local_30,L".upayload",9);
    bVar1 = 5;
    if (iVar2 == 0) {
      bVar1 = 0xb;
    }
    goto LAB_146874fd5;
  }
  bVar1 = 5;
LAB_146874fd5:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 146875082 FUN_146875082 body=8 status=ok
// SIG undefined FUN_146875082(void)

wchar_t * FUN_146875082(void)

{
  return L"__ExternalObjects__";
}



// FUNCTION 14687508a FUN_14687508a body=75 status=ok
// SIG undefined FUN_14687508a(void)

undefined8 FUN_14687508a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1427b94de(local_28,&local_28,&local_11);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468750d6 FUN_1468750d6 body=191 status=ok
// SIG undefined FUN_1468750d6(void)

undefined8 * FUN_1468750d6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_14005eb5c(param_1,&local_238);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_248,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  if ((undefined8 *)&local_248 == param_2) {
    if (CONCAT44(uStack_244,local_248) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_248;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_244;
    *(undefined4 *)(param_2 + 1) = uStack_240;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_23c;
  }
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146875196 FUN_146875196 body=25 status=ok
// SIG undefined FUN_146875196(void)

undefined8 FUN_146875196(undefined8 param_1,undefined8 param_2)

{
  FUN_1427b95fe(param_1,param_2,0);
  return param_2;
}



// FUNCTION 1468751b0 FUN_1468751b0 body=48 status=ok
// SIG undefined FUN_1468751b0(void)

ulonglong FUN_1468751b0(longlong param_1,byte param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  
  if (param_2 == 0) {
    *param_3 = 0;
    param_3[1] = 0;
    uVar1 = (ulonglong)*(byte *)(param_1 + 8);
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    if (param_2 < 6) {
      uVar1 = 0xb0a09080700 >> ((param_2 & 7) << 3);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 1468751e0 FUN_1468751e0 body=185 status=ok
// SIG undefined FUN_1468751e0(void)

undefined8 * FUN_1468751e0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  
  switch(param_3) {
  case 0:
    _Str = L"";
    switch(*(undefined1 *)(param_1 + 8)) {
    case 1:
      _Str = L".uasset";
      break;
    case 2:
      _Str = L".umap";
      break;
    case 3:
      _Str = L".utxt";
      break;
    case 4:
      _Str = L".utxtmap";
      break;
    case 5:
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    case 7:
      goto switchD_146875200_caseD_1;
    case 8:
      goto switchD_146875200_caseD_2;
    case 9:
      goto switchD_146875200_caseD_3;
    case 10:
      goto switchD_146875200_caseD_4;
    case 0xb:
      goto switchD_146875200_caseD_5;
    }
    break;
  case 1:
switchD_146875200_caseD_1:
    _Str = L".uexp";
    break;
  case 2:
switchD_146875200_caseD_2:
    _Str = L".ubulk";
    break;
  case 3:
switchD_146875200_caseD_3:
    _Str = L".uptnl";
    break;
  case 4:
switchD_146875200_caseD_4:
    _Str = L".m.ubulk";
    break;
  case 5:
switchD_146875200_caseD_5:
    _Str = L".upayload";
    break;
  default:
    _Str = L"";
  }
  *param_2 = _Str;
  sVar1 = wcslen(_Str);
  *(int *)(param_2 + 1) = (int)sVar1;
  return param_2;
}



// FUNCTION 14687529a FUN_14687529a body=93 status=ok
// SIG undefined FUN_14687529a(void)

undefined8 FUN_14687529a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146875300 FUN_146875300 body=45 status=ok
// SIG undefined FUN_146875300(void)

void FUN_146875300(longlong param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  FUN_1400020e8(param_1 + 0x18,param_2,sVar1 & 0xffffffff);
  return;
}



// FUNCTION 14687532e FUN_14687532e body=45 status=ok
// SIG undefined FUN_14687532e(void)

void FUN_14687532e(longlong param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  FUN_1400020e8(param_1 + 0x18,param_2,sVar1 & 0xffffffff);
  return;
}



// FUNCTION 14687535c FUN_14687535c body=176 status=ok
// SIG undefined FUN_14687535c(void)

void FUN_14687535c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  switchD_143c3d4dc::caseD_21();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x38),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x3c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14021219d(param_2,param_1 + 0x40);
  return;
}



// FUNCTION 146875418 FUN_146875418 body=651 status=ok
// SIG undefined FUN_146875418(void)

undefined8 * FUN_146875418(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  longlong local_78 [2];
  wchar_t *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e1d760;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar1 = param_1 + 5;
  FUN_144a5dc74(plVar1);
  *param_1 = &PTR_FUN_149e632f0;
  param_1[7] = 0;
  FUN_14485c47a(param_1 + 7,param_2);
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_2 != 0) {
    local_68 = (wchar_t *)0x0;
    uStack_60 = 0;
    FUN_1401031ac(param_2,0,&local_68);
    if ((wchar_t **)(param_1 + 8) == &local_68) {
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((wchar_t *)param_1[8] != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      param_1[8] = local_68;
      local_68 = (wchar_t *)0x0;
      *(undefined4 *)(param_1 + 9) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_60._4_4_;
    }
  }
  cVar3 = FUN_144a7c5f6(param_3);
  if (cVar3 == '\0') {
    plVar4 = (longlong *)*param_3;
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != plVar4) {
      *plVar1 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(int *)(param_1 + 6) = (int)param_3[1];
  }
  else {
    if ((DAT_14c948650 == (longlong *)0x0 || DAT_14c948658 == 0) ||
       (cVar3 = (**(code **)(*DAT_14c948650 + 0x30))(), cVar3 == '\0')) {
      if (param_2 != 0) {
        local_68 = *(wchar_t **)(param_2 + 0x18);
        FUN_1400021e4(&local_68,local_78);
        FUN_140233b1a(&local_68,local_78);
        FUN_140008f88(plVar1,&local_68);
        if (local_68 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_68 + 0x10))();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_146875559;
      }
      local_68 = L"NoneObjectToken";
      uStack_60._0_4_ = 0xf;
      FUN_1446e940c(local_78,&local_68);
      local_68 = L"MessageLog";
      uStack_60 = CONCAT44(uStack_60._4_4_,10);
      FUN_1446e940c(local_7c,&local_68);
      FUN_140208bae(&local_68,local_7c,local_78,L"<None>");
      FUN_140008f88(plVar1,&local_68);
    }
    else {
      plVar4 = DAT_14c948650;
      if (DAT_14c948658 == 0) {
        plVar4 = (longlong *)0x0;
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_68,param_2,0);
      FUN_140008f88(plVar1,&local_68);
    }
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
LAB_146875559:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468756a4 FUN_1468756a4 body=255 status=ok
// SIG undefined FUN_1468756a4(void)

longlong * FUN_1468756a4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x50,0x10);
  FUN_146875418(lVar2,param_2,param_3);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e66150;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_146875779;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_146875779;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_146875779:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 1468757a4 FUN_1468757a4 body=60 status=ok
// SIG undefined FUN_1468757a4(void)

longlong * FUN_1468757a4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = &DAT_14c948640;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x30))();
      plVar3 = &DAT_14c948640;
      if (cVar2 != '\0') {
        plVar3 = (longlong *)(param_1 + 0x18);
      }
    }
  }
  return plVar3;
}



// FUNCTION 1468757e0 FUN_1468757e0 body=337 status=ok
// SIG undefined FUN_1468757e0(void)

longlong * FUN_1468757e0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)FUN_14021219d();
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(plVar3);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  FUN_1402197d0(plVar3,param_2 + 0x14);
  if (0x10b < (int)param_1[8]) {
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
  }
  if (0x148 < (int)param_1[8]) {
    piVar2 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
      local_24 = (uint)*(byte *)(param_2 + 0x20);
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      if (1 < local_24) {
        FUN_14572541c(param_1);
      }
      *(bool *)(param_2 + 0x20) = local_24 != 0;
    }
    else {
      *(bool *)(param_2 + 0x20) = *piVar2 != 0;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146875932 FUN_146875932 body=400 status=ok
// SIG undefined FUN_146875932(void)

longlong * FUN_146875932(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 4;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146875ac2 FUN_146875ac2 body=429 status=ok
// SIG undefined FUN_146875ac2(void)

longlong * FUN_146875ac2(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  uint local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbb8);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
    if (iVar3 < 1) {
      FUN_1402197d0(param_1,&local_28);
      *param_2 = CONCAT44(uStack_24,local_28);
      *(undefined4 *)(param_2 + 1) = 0;
      goto LAB_146875b31;
    }
  }
  FUN_140333cf8(param_1,param_2);
LAB_146875b31:
  FUN_140119d96(param_1,param_2 + 3);
  FUN_1468757e0(param_1,param_2 + 10);
  if (0x10b < (int)param_1[8]) {
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      local_28 = (uint)*(byte *)(param_2 + 0xf);
      (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
      if (1 < local_28) {
        FUN_14572541c(param_1);
      }
      *(bool *)(param_2 + 0xf) = local_28 != 0;
    }
    else {
      *(bool *)(param_2 + 0xf) = *piVar1 != 0;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_14021219d(param_1,param_2 + 0x10);
    if (0x13b < (int)param_1[8]) {
      FUN_1468800c8(param_1,param_2 + 0x12);
      if (0x13e < (int)param_1[8]) {
        puVar2 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x14,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x14) = *puVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
      }
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x36) & 0x40) != 0) {
    FUN_140333cf8(param_1,(longlong)param_2 + 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146875c70 FUN_146875c70 body=130 status=ok
// SIG undefined FUN_146875c70(void)

void FUN_146875c70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146875cf2 FUN_146875cf2 body=218 status=ok
// SIG undefined FUN_146875cf2(void)

longlong * FUN_146875cf2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149e635b0;
  plVar1 = param_1 + 0x14;
  memset(param_1 + 0x12,0,0xa0);
  FUN_144869430(plVar1);
  param_1[0x26] = 0;
  param_1[0x14] = (longlong)&PTR_FUN_149e1e590;
  param_1[0x27] = (longlong)(param_1 + 0x12);
  param_1[0x28] = 0;
  FUN_144a69558(plVar1,1);
  (**(code **)(param_1[0x14] + 0xf0))(plVar1,0);
  param_1[0x14] = (longlong)&PTR_FUN_149e1e330;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[0x2b] = (longlong)puVar2;
  param_1[0x2a] = (longlong)puVar2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 0x20;
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  return param_1;
}



// FUNCTION 146875dcc FUN_146875dcc body=519 status=ok
// SIG undefined FUN_146875dcc(void)

undefined4 FUN_146875dcc(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [7];
  char local_a1;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[0x2d] = param_3;
  local_a0 = param_2;
  if (param_2 != (longlong *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar4 = 0;
    puVar4[1] = param_2;
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[0x2a];
      param_1[0x2a] = (longlong)puVar4;
      *puVar1 = puVar4;
    }
    lVar5 = *(longlong *)param_1[0x2b];
    if (lVar5 != 0) {
      do {
        local_a0 = *(longlong **)(lVar5 + 8);
        lVar2 = param_1[0x2b];
        param_1[0x2b] = lVar5;
        *(undefined8 *)(lVar5 + 8) = 0;
        if (lVar2 != 0) {
          FUN_1400020a8();
        }
        local_a1 = '\0';
        FUN_1457b12ce(&local_98,local_a8,&local_a0,&local_a1);
        if (local_a1 == '\0') {
          param_1[0x2c] = (longlong)local_a0;
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          if (cVar3 == '\0') {
            (**(code **)(*local_a0 + 0xd8))(local_a0,param_1);
          }
          param_1[0x2c] = 0;
          param_4 = (*(code *)PTR_FUN_14c75b148)(param_1[0x12],(int)param_1[0x13],param_4);
          param_1[0x26] = 0;
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) != 0) {
            FUN_144893a1c(param_1 + 0x12,0);
          }
        }
        lVar5 = *(longlong *)param_1[0x2b];
      } while (lVar5 != 0);
    }
    FUN_146876196(&local_98);
    param_1[0x2d] = 0;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_4;
}



// FUNCTION 146875fd4 FUN_146875fd4 body=96 status=ok
// SIG undefined FUN_146875fd4(void)

void FUN_146875fd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e635b0;
  puVar1 = (undefined8 *)param_1[0x2b];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x2b] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x2b];
  }
  FUN_144a7fc42(param_1 + 0x14);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 146876040 FUN_146876040 body=45 status=ok
// SIG undefined FUN_146876040(void)

longlong FUN_146876040(longlong param_1,longlong *param_2)

{
  if (*param_2 != *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x18)) {
    FUN_140bb5ffe(param_1 + 0xa0);
  }
  return param_1;
}



// FUNCTION 14687606e FUN_14687606e body=219 status=ok
// SIG undefined FUN_14687606e(void)

longlong FUN_14687606e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x168) == 0) {
LAB_1468760de:
    if (*param_2 == 0) goto LAB_1468760fb;
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_1401031ac(*param_2,0);
  }
  else {
    if (*param_2 != 0) {
      cVar2 = FUN_144b00bde();
      if (cVar2 != '\0') {
        puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar3 = 0;
        puVar3[1] = *param_2;
        if (puVar3 != (undefined8 *)0x0) {
          puVar1 = *(undefined8 **)(param_1 + 0x150);
          *(undefined8 **)(param_1 + 0x150) = puVar3;
          *puVar1 = puVar3;
        }
        goto LAB_146876129;
      }
      goto LAB_1468760de;
    }
LAB_1468760fb:
    FUN_140056680(local_28,&DAT_149e01fe8);
  }
  FUN_14021219d(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_146876129:
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687614a FUN_14687614a body=74 status=ok
// SIG undefined FUN_14687614a(void)

longlong * FUN_14687614a(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  (**(code **)(*param_1 + 0x150))();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146876196 FUN_146876196 body=67 status=ok
// SIG undefined FUN_146876196(void)

void FUN_146876196(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140603ff6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1457b1594(param_1);
    return;
  }
  FUN_146880606(param_1);
  FUN_140603ff6(param_1,0);
  return;
}



// FUNCTION 1468761da FUN_1468761da body=425 status=ok
// SIG undefined FUN_1468761da(void)

longlong * FUN_1468761da(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x2b) & 6) == 2) goto LAB_1468761fe;
  local_40 = FUN_14479d2ce(param_2);
  if (local_40 == 0) {
    if (((*(int *)((longlong)param_2 + 0xc) == 0 && *(int *)(param_2 + 1) == 0) &&
        *(int *)(param_2 + 2) == 0) && *(int *)((longlong)param_2 + 0x14) == 0) {
LAB_14687632c:
      local_40 = 0;
    }
    else {
      lVar3 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(param_2,lVar3);
        if (lVar3 == 0) goto LAB_14687632c;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_2,lVar3);
        }
      }
      local_40 = 0;
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
        local_40 = lVar3;
      }
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1,&local_40);
  lVar3 = local_40;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((local_40 == 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 4) == 0)) goto LAB_1468761fe;
  }
  else if (local_40 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    goto LAB_1468761fe;
  }
  FUN_1468b526e(&local_38,local_40);
  *(undefined4 *)(param_2 + 1) = local_38;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
  *(undefined4 *)(param_2 + 2) = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2c;
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
      *param_2 = 0;
      goto LAB_1468761fe;
    }
  }
  FUN_14485c47a(param_2,lVar3);
LAB_1468761fe:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14687638a FUN_14687638a body=46 status=ok
// SIG undefined FUN_14687638a(void)

longlong * FUN_14687638a(longlong *param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = 0;
  }
  (**(code **)(*param_1 + 0x128))(param_1,param_2 + 1);
  return param_1;
}



// FUNCTION 1468763b8 FUN_1468763b8 body=28 status=ok
// SIG undefined FUN_1468763b8(void)

undefined8 FUN_1468763b8(undefined8 param_1,undefined8 param_2)

{
  FUN_14010d536(param_2,param_1);
  return param_1;
}



// FUNCTION 1468763da FUN_1468763da body=278 status=ok
// SIG undefined FUN_1468763da(void)

void FUN_1468763da(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1c8 = (undefined8 *)0x0;
  local_1d0 = &PTR_FUN_149e65c40;
  local_1b8 = 1;
  plVar1 = (longlong *)param_2[2];
  local_1c0 = param_1;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    (**(code **)(*param_2 + 0xd8))(param_2,param_1);
  }
  else {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if ((*(byte *)(param_1 + 0x28) & 5) == 0 || (*(byte *)(param_1 + 0x28) & 0x20) != 0) {
      local_198 = &local_1a0;
      local_1b0 = &PTR_FUN_149e37810;
      local_1a0 = &local_1b0;
      local_1a8 = param_1;
      (**(code **)(*plVar1 + 0x2c0))(plVar1,local_198,param_2);
    }
    else {
      local_1e8 = 0;
      uStack_1e0 = 0;
      FUN_14496b17c(plVar1,param_1,param_2,plVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  (*(code *)plVar1[0x18])(param_2,&local_1d0);
  local_1d0 = &PTR_LAB_149eb0140;
  if (local_1c8 != (undefined8 *)0x0) {
    (**(code **)*local_1c8)(local_1c8,1);
  }
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468764f2 FUN_1468764f2 body=132 status=ok
// SIG undefined FUN_1468764f2(void)

ulonglong FUN_1468764f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  
  if (param_2 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((~*(uint *)(param_2 + 8) & 0x280000) == 0) goto LAB_14687653f;
    lVar1 = FUN_144a7a812();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14687653f;
    if ((*(uint *)(param_2 + 8) & 0x8080400) == 0) {
      if (DAT_14c75b114 == '\x01') {
        lVar1 = FUN_144a79778(param_2);
        if ((*(byte *)(lVar1 + 0x2c) & 0x10) != 0) {
          uVar2 = FUN_146876576(*(undefined8 *)(param_1 + 0x280),param_2);
          return uVar2;
        }
      }
      goto LAB_14687653f;
    }
  }
  uVar2 = 0;
LAB_14687653f:
  return uVar2 & 0xffffffff;
}



// FUNCTION 146876576 FUN_146876576 body=559 status=ok
// SIG undefined FUN_146876576(void)

ulonglong FUN_146876576(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined7 uVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9487a8) && (FUN_144b3d300(&DAT_14c9487a8), DAT_14c9487a8 == -1)) {
    FUN_1446f470e(&DAT_14c9487a0,L"/Script/CoreUObject",1);
    _Init_thread_footer(&DAT_14c9487a8);
  }
  lVar2 = FUN_144a79778(param_2);
  local_40 = *(longlong *)(lVar2 + 0x18);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (local_40 != DAT_14c9487a0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
    local_58 = *(undefined2 **)(param_2 + 0x18);
    FUN_1400021e4(&local_58,&local_68);
    FUN_1400021e4(&local_40,&local_78);
    iVar8 = local_60 + -1;
    if (local_60 == 0) {
      iVar8 = 0;
    }
    FUN_1412cfe60(&local_58,&local_78,iVar8 + 1 + (uint)(local_70 == 0));
    FUN_1401aebe8(&local_58,local_68,iVar8);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_48,puVar5,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar7 = (undefined7)((ulonglong)&local_68 >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_48 >> 0x10);
      uVar4 = (uint)local_48 & 0xffff;
      plVar3 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar3 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)local_48 >> 0x20) + ((uint)local_48 << 0x10 | uVar4) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          plVar3 = (longlong *)(*param_1 + (longlong)iVar8 * 0x28);
          if (*plVar3 == local_48) {
            if (((ulonglong)(plVar3 + 1) & 0xfffffffffffffff7) != 0) {
              uVar6 = CONCAT71(uVar7,*(int *)((longlong)plVar3 + 0xc) == 2);
            }
            break;
          }
          iVar8 = (int)plVar3[4];
        } while (iVar8 != -1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1468767ae FUN_1468767ae body=75 status=ok
// SIG undefined FUN_1468767ae(void)

longlong FUN_1468767ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14687c43a();
  plVar1 = (longlong *)(param_1 + 0x18);
  if (plVar1 != param_3) {
    lVar2 = *plVar1;
    *plVar1 = *param_3;
    *param_3 = 0;
    if (lVar2 != 0) {
      FUN_1449db362(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  return param_1;
}



// FUNCTION 1468767fa FUN_1468767fa body=290 status=ok
// SIG undefined FUN_1468767fa(void)

longlong FUN_1468767fa(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    lVar1 = *(longlong *)(param_2 + 1);
    uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_3[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar4 = (longlong *)(*param_3 + (longlong)iVar6 * 0x18), *plVar4 != lVar1) {
        iVar6 = (int)plVar4[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (((plVar4 != (longlong *)0x0) && (lVar1 = plVar4[1], lVar1 != 0)) &&
         ((DAT_14c872ba8 != '\0' || (*(int *)(lVar1 + 0x10) != -1)))) {
        if (*(longlong *)(param_2 + 6) != 0) {
          iVar6 = *(int *)(lVar1 + 0x68);
          *(uint *)(lVar1 + 0x68) = iVar6 + 1U;
          if (*(uint *)(lVar1 + 0x6c) < iVar6 + 1U) {
            FUN_146885c9e((longlong *)(lVar1 + 0x60),iVar6);
          }
          lVar2 = *(longlong *)(lVar1 + 0x60);
          *(undefined2 *)(lVar2 + (longlong)iVar6 * 0x10) = 0;
          *(undefined8 *)(lVar2 + 8 + (longlong)iVar6 * 0x10) = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_2 + 6) = 0;
        }
        FUN_14687691c(lVar1,*param_2);
        LOCK();
        *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + -1;
        UNLOCK();
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14687691c FUN_14687691c body=193 status=ok
// SIG undefined FUN_14687691c(void)

void FUN_14687691c(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  int *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < param_2) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == -1) {
      *(int *)(param_1 + 0x10) = param_2;
    }
    else if (iVar1 != param_2) {
      local_30 = &local_3c;
      local_38 = &local_40;
      local_40 = param_2;
      local_3c = iVar1;
      FUN_140263e2a(*(longlong *)(param_1 + 0x278) + 0x220,local_24,&local_38,0);
    }
    iVar1 = *(int *)(param_1 + 0x198);
    *(uint *)(param_1 + 0x198) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x19c) < iVar1 + 1U) {
      FUN_1446f48e2(param_1 + 400,iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 400) + (longlong)iVar1 * 4) = param_2;
    FUN_14687cbb4(*(undefined8 *)(param_1 + 0x278),param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146876a62 FUN_146876a62 body=548 status=ok
// SIG undefined FUN_146876a62(void)

void FUN_146876a62(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  LOCK();
  *(int *)(param_1 + 900) = *(int *)(param_1 + 900) + 1;
  UNLOCK();
  local_60 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e0));
  lVar9 = local_60;
  if (DAT_14c872ba8 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x278);
    *(uint *)(param_1 + 0x278) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x27c) < iVar2 + 1U) {
      FUN_1468824fe((longlong *)(param_1 + 0x270),iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar2 * 8) = local_60;
    lVar9 = local_60;
    goto LAB_146876c08;
  }
  iVar2 = *(int *)(local_60 + 0x34);
  iVar3 = *(int *)(param_1 + 0x278);
  iVar5 = iVar3;
  if (param_3 == 1) {
    if (0 < iVar3) {
      iVar6 = iVar3 + -1;
      iVar7 = 0;
      do {
        iVar5 = (iVar6 - iVar7 >> 1) + iVar7;
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar5 * 8) + 0x34)
        ;
        if (iVar5 == 0) {
          if (iVar4 < iVar2) goto LAB_146876c80;
LAB_146876b51:
          iVar7 = iVar5 + 1;
        }
        else {
          if ((iVar4 < iVar2) &&
             (iVar2 <= *(int *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x270) + -8 + (longlong)iVar5 * 8) + 0x34)
             )) goto LAB_146876c66;
          if (iVar2 <= iVar4) goto LAB_146876b51;
          iVar6 = iVar5 + -1;
        }
        iVar5 = iVar3;
      } while (iVar7 <= iVar6);
    }
  }
  else if (0 < iVar3) {
    iVar6 = iVar3 + -1;
    iVar7 = 0;
    do {
      iVar5 = (iVar6 - iVar7 >> 1) + iVar7;
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar5 * 8) + 0x34);
      if (iVar5 == 0) {
        if (iVar4 <= iVar2) goto LAB_146876c80;
LAB_146876bb2:
        iVar7 = iVar5 + 1;
      }
      else {
        if ((iVar4 <= iVar2) &&
           (iVar2 < *(int *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x270) + -8 + (longlong)iVar5 * 8) + 0x34)))
        goto LAB_146876c66;
        if (iVar2 < iVar4) goto LAB_146876bb2;
        iVar6 = iVar5 + -1;
      }
      iVar5 = iVar3;
    } while (iVar7 <= iVar6);
  }
  goto LAB_146876bbe;
LAB_146876c80:
  iVar5 = 0;
  goto LAB_146876bbe;
LAB_146876c66:
  if (iVar5 == -1) {
    iVar5 = iVar3;
  }
LAB_146876bbe:
  plVar1 = (longlong *)(param_1 + 0x270);
  *(uint *)(param_1 + 0x278) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x27c) < iVar3 + 1U) {
    FUN_1468824fe(plVar1,iVar3);
  }
  lVar8 = (longlong)iVar5;
  memmove((void *)(*plVar1 + lVar8 * 8 + 8),(void *)(*plVar1 + lVar8 * 8),
          (ulonglong)(uint)(iVar3 - iVar5) << 3);
  *(longlong *)(*plVar1 + lVar8 * 8) = lVar9;
LAB_146876c08:
  local_58 = lVar9 + 0x14;
  local_50 = &local_60;
  FUN_146883b40(param_1 + 0x280,local_44);
  if (DAT_14c872ba8 == '\x01') {
    FUN_14687820e(param_1,local_60);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e0));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146876c88 FUN_146876c88 body=377 status=ok
// SIG undefined FUN_146876c88(void)

void FUN_146876c88(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1468767fa(param_1,param_2,param_1 + 0x280);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  lVar3 = FUN_1468767fa(param_1,param_2,param_1 + 0x98);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if (lVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    lVar3 = FUN_1468767fa(param_1,param_2,param_1 + 0x130);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    if (lVar3 == 0) {
      FUN_144a4a122(&local_31);
      lVar3 = FUN_14001cc68(0x608,0x10);
      FUN_146876e1c(lVar3,param_1,param_2,*(undefined8 *)(param_1 + 0x10));
      FUN_144a49ece(&local_31);
      if (*(longlong *)(param_2 + 0x18) != 0) {
        iVar1 = *(int *)(lVar3 + 0x68);
        *(uint *)(lVar3 + 0x68) = iVar1 + 1U;
        if (*(uint *)(lVar3 + 0x6c) < iVar1 + 1U) {
          FUN_146885c9e((longlong *)(lVar3 + 0x60),iVar1);
        }
        lVar2 = *(longlong *)(lVar3 + 0x60);
        *(undefined2 *)(lVar2 + (longlong)iVar1 * 0x10) = 0;
        *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
      *(undefined8 *)(lVar3 + 0xd0) = 0;
      FUN_146876a62(param_1,lVar3,1);
      LOCK();
      *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + -1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146876e1c FUN_146876e1c body=1071 status=ok
// SIG undefined FUN_146876e1c(void)

undefined8 *
FUN_146876e1c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_149e650e0;
  FUN_14687c43a(param_1 + 2,param_3);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x21] = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x10f) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x34));
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4a),4000);
  param_1[0x4f] = param_2;
  param_1[0x50] = param_4;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c948740 + 1;
  DAT_14c948740 = DAT_14c948740 + 1;
  *(int *)((longlong)param_1 + 0x2dc) = iVar1;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
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
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0xffffffff;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x593) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ae) = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c6) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5de) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  FUN_14687691c(param_1,*param_3);
  local_58 = 1;
  local_60 = param_3;
  FUN_14687a052(param_1);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687724c FUN_14687724c body=86 status=ok
// SIG undefined FUN_14687724c(void)

void FUN_14687724c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    FUN_1449db362(lVar4);
    FUN_1400020a8(lVar4);
    return;
  }
  return;
}



// FUNCTION 1468772a2 FUN_1468772a2 body=480 status=ok
// SIG undefined FUN_1468772a2(void)

undefined8 * FUN_1468772a2(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_8c;
  longlong local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    FUN_140056680(param_2,L"Null linker");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  if (((int)param_3 < 1) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa0), lVar3 == 0)) {
    local_88 = 0;
    local_8c = 0;
  }
  else {
    local_80 = *(longlong *)(lVar3 + 0x18);
    FUN_1400021e4(&local_80,&local_70);
    local_88 = local_70;
    local_8c = (int)uStack_68;
  }
  lVar3 = 0;
  iVar4 = 0;
  do {
    if ((int)param_3 < 0) {
      lVar2 = (ulonglong)~param_3 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + (ulonglong)param_3 * 0x68 +
              -0x68;
    }
    FUN_1400021e4(lVar2,&local_80);
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    FUN_1412cfe60(&local_70,&local_80,iVar5 + 1 + (uint)(local_78 == 0));
    FUN_1401aebe8(&local_70,lVar3,iVar5);
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
    }
    lVar3 = local_70;
    iVar4 = (int)uStack_68;
    local_70 = 0;
    uStack_68 = 0;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    lVar1 = local_88;
    param_3 = *(uint *)(lVar2 + 8);
  } while (param_3 != 0);
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  local_98 = iVar5 + 1 + (uint)(local_8c == 0);
  *param_2 = 0;
  FUN_14125bce8(param_2,local_88,local_8c,0);
  FUN_1401aebe8(param_2,lVar3,iVar5);
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146877484 FUN_146877484 body=394 status=ok
// SIG undefined FUN_146877484(void)

undefined8 FUN_146877484(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined2 *local_60;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == 0) {
    local_60 = &DAT_149dfb77a;
    if (iVar1 == 2) {
      pwVar7 = L"Package_ExportsSerialized";
    }
    else if (iVar1 == 1) {
      pwVar7 = L"Package_SetupImports";
    }
    else if (iVar1 == 0) {
      pwVar7 = L"Package_LoadSummary";
    }
    else {
      pwVar7 = L"Unknown";
    }
    uVar4 = 0;
    puVar5 = (undefined2 *)0x0;
    goto LAB_1468774f5;
  }
  if (iVar1 == 2) {
    pwVar7 = L"Export_StartIO";
  }
  else {
    if (iVar1 == 1) {
      pwVar2 = L"Import_Serialize";
      pwVar7 = L"Export_Serialize";
    }
    else {
      if (iVar1 != 0) {
        pwVar7 = L"Unknown";
        goto LAB_1468775d2;
      }
      pwVar2 = L"Import_Create";
      pwVar7 = L"Export_Create";
    }
    if ((int)param_1[1] < 0) {
      pwVar7 = pwVar2;
    }
  }
LAB_1468775d2:
  FUN_1468772a2(lVar3,&local_48);
  local_60 = &DAT_149dfb77a;
  if (local_40 != 0) {
    local_60 = local_48;
  }
  uVar4 = (undefined4)param_1[1];
  lVar3 = *param_1;
  puVar5 = local_48;
LAB_1468774f5:
  if (lVar3 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(undefined8 *)(lVar3 + 0x14);
  }
  FUN_1400021e4(&local_50,&local_48);
  puVar6 = local_48;
  if (local_40 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  local_68 = pwVar7;
  FUN_140002266(param_2,L"%s %d %s   %s",puVar6,uVar4);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar5 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146877610 FUN_146877610 body=145 status=ok
// SIG undefined FUN_146877610(void)

void FUN_146877610(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar3 = param_3 * 3 + param_2 * 2;
  uVar8 = (ulonglong)iVar3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar4 = SUB168(auVar2 * ZEXT816(0x18),0);
  lVar5 = uVar4 + 8;
  if (0xfffffffffffffff7 < uVar4) {
    lVar5 = -1;
  }
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_3;
  lVar7 = -1;
  if (SUB168(auVar2 * ZEXT816(0x18),8) == 0) {
    lVar7 = lVar5;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 100) = param_2 * 2;
  *(int *)(param_1 + 0x50) = iVar3;
  puVar6 = (ulonglong *)FUN_144a7d36f(lVar7);
  *puVar6 = uVar8;
  if (iVar3 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)((longlong)(puVar6 + 1) + lVar5);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar6 + lVar5 + 0x16) = 0;
      lVar5 = lVar5 + 0x18;
    } while (uVar8 * 0x18 != lVar5);
  }
  *(ulonglong **)(param_1 + 0x48) = puVar6 + 1;
  return;
}



// FUNCTION 1468776a2 FUN_1468776a2 body=109 status=ok
// SIG undefined FUN_1468776a2(void)

void FUN_1468776a2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * 0x18;
      do {
        if (*(longlong *)(lVar1 + -0x18 + lVar3) != 0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    thunk_FUN_1400020a8(lVar1 + -8,lVar2 * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 146877710 FUN_146877710 body=383 status=ok
// SIG undefined FUN_146877710(void)

void FUN_146877710(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    pcVar12 = (char *)(param_1 + 0x15);
    lVar7 = 0;
    do {
      if (*pcVar12 == '\x01') {
        lVar9 = param_2[1];
        uVar4 = (int)lVar9 + 1;
        *(uint *)(param_2 + 1) = uVar4;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
          FUN_146880e26(param_2);
        }
        lVar2 = *param_2;
        lVar9 = (longlong)(int)lVar9 * 0x10;
        *(undefined8 *)(lVar2 + lVar9) = param_3;
        *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
        *(int *)(lVar2 + 0xc + lVar9) = (int)lVar7;
      }
      lVar7 = lVar7 + 1;
      pcVar12 = pcVar12 + 0x18;
    } while (lVar7 != 3);
    if (0 < *(int *)(param_1 + 0x58)) {
      uVar4 = 0;
      do {
        uVar10 = 0;
        bVar3 = true;
        do {
          bVar8 = bVar3;
          if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x15 +
                       (longlong)(int)((uVar10 | uVar4 * 2) + *(int *)(param_1 + 0x60)) * 0x18) ==
              '\x01') {
            iVar5 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
              FUN_146880e26(param_2,iVar5);
            }
            lVar7 = *param_2;
            lVar9 = (longlong)iVar5 * 0x10;
            *(undefined8 *)(lVar7 + lVar9) = param_3;
            *(uint *)(lVar7 + 8 + lVar9) = ~uVar4;
            *(uint *)(lVar7 + 0xc + lVar9) = uVar10;
          }
          uVar10 = 1;
          bVar3 = false;
        } while (bVar8);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(param_1 + 0x58));
    }
    if (0 < *(int *)(param_1 + 0x5c)) {
      iVar11 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        iVar6 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x15 +
                       (longlong)(iVar11 + iVar6 + *(int *)(param_1 + 100)) * 0x18) == '\x01') {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_146880e26(param_2,iVar1);
            }
            lVar7 = *param_2;
            lVar9 = (longlong)iVar1 * 0x10;
            *(undefined8 *)(lVar7 + lVar9) = param_3;
            *(int *)(lVar7 + 8 + lVar9) = iVar5;
            *(int *)(lVar7 + 0xc + lVar9) = iVar6;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
        iVar11 = iVar11 + 3;
      } while (iVar5 < *(int *)(param_1 + 0x5c));
    }
  }
  return;
}



// FUNCTION 146877890 FUN_146877890 body=293 status=ok
// SIG undefined FUN_146877890(void)

void FUN_146877890(undefined8 param_1,longlong *param_2,uint param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    lVar2 = lVar3 + 0x5a0 + (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18;
  }
  else {
    if ((int)uVar1 < 0) {
      iVar4 = ~uVar1 * 2 + *(int *)(lVar3 + 0x600);
    }
    else {
      iVar4 = uVar1 * 3 + *(int *)(lVar3 + 0x604) + -3;
    }
    lVar2 = (longlong)(*(int *)((longlong)param_2 + 0xc) + iVar4) * 0x18 +
            *(longlong *)(lVar3 + 0x5e8);
  }
  *(undefined1 *)(lVar2 + 0x15) = 1;
  iVar4 = *(int *)(lVar3 + 0x5f4);
  *(int *)(lVar3 + 0x5f4) = iVar4 + 1;
  if (iVar4 == 0) {
    FUN_146880eac(param_1,local_34,param_2);
  }
  param_4 = (param_3 & 0xff) + param_4;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 == 0) {
      lVar3 = lVar3 + 0x5a0 + (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18;
    }
    else {
      if ((int)uVar1 < 0) {
        iVar4 = ~uVar1 * 2 + *(int *)(lVar3 + 0x600);
      }
      else {
        iVar4 = uVar1 * 3 + *(int *)(lVar3 + 0x604) + -3;
      }
      lVar3 = (longlong)(*(int *)((longlong)param_2 + 0xc) + iVar4) * 0x18 +
              *(longlong *)(lVar3 + 0x5e8);
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468779b6 FUN_1468779b6 body=235 status=ok
// SIG undefined FUN_1468779b6(void)

void FUN_1468779b6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    plVar4 = (longlong *)(lVar2 + (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18 + 0x5a0);
  }
  else {
    if ((int)uVar1 < 0) {
      iVar3 = ~uVar1 * 2 + *(int *)(lVar2 + 0x600);
    }
    else {
      iVar3 = uVar1 * 3 + *(int *)(lVar2 + 0x604) + -3;
    }
    plVar4 = (longlong *)
             ((longlong)(*(int *)((longlong)param_1 + 0xc) + iVar3) * 0x18 +
             *(longlong *)(lVar2 + 0x5e8));
  }
  lVar2 = *param_2;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    lVar2 = lVar2 + (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18 + 0x5a0;
  }
  else {
    if ((int)uVar1 < 0) {
      iVar3 = ~uVar1 * 2 + *(int *)(lVar2 + 0x600);
    }
    else {
      iVar3 = uVar1 * 3 + *(int *)(lVar2 + 0x604) + -3;
    }
    lVar2 = (longlong)(*(int *)((longlong)param_2 + 0xc) + iVar3) * 0x18 +
            *(longlong *)(lVar2 + 0x5e8);
  }
  *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  iVar3 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
    FUN_146880e26(plVar4,iVar3);
  }
  lVar2 = param_2[1];
  plVar4 = (longlong *)(*plVar4 + (longlong)iVar3 * 0x10);
  *plVar4 = *param_2;
  plVar4[1] = lVar2;
  return;
}



// FUNCTION 146877aa2 FUN_146877aa2 body=786 status=ok
// SIG undefined FUN_146877aa2(void)

void FUN_146877aa2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *param_2;
  lVar11 = param_2[1];
  local_78 = lVar3 + 0x5a0;
  uStack_50._0_4_ = (uint)lVar11;
  uVar4 = (uint)uStack_50;
  uStack_50._4_4_ = (int)((ulonglong)lVar11 >> 0x20);
  local_70 = (longlong)uStack_50._4_4_;
  if ((uint)uStack_50 == 0) {
    plVar7 = (longlong *)(local_78 + local_70 * 0x18);
  }
  else {
    if ((int)(uint)uStack_50 < 0) {
      iVar5 = ~(uint)uStack_50 * 2 + *(int *)(lVar3 + 0x600);
    }
    else {
      iVar5 = *(int *)(lVar3 + 0x604) + (uint)uStack_50 * 3 + -3;
    }
    plVar7 = (longlong *)((longlong)(iVar5 + uStack_50._4_4_) * 0x18 + *(longlong *)(lVar3 + 0x5e8))
    ;
  }
  local_80 = *plVar7;
  lVar8 = plVar7[1];
  *plVar7 = 0;
  plVar7[1] = 0;
  local_58 = lVar3;
  uStack_50 = lVar11;
  if (0 < (longlong)(int)lVar8) {
    piVar10 = (int *)(local_80 + 0xc);
    lVar11 = 0;
    do {
      lVar9 = *(longlong *)(piVar10 + -3);
      uVar2 = piVar10[-1];
      if (uVar2 == 0) {
        lVar9 = lVar9 + (longlong)*piVar10 * 0x18 + 0x5a0;
      }
      else {
        if ((int)uVar2 < 0) {
          iVar5 = ~uVar2 * 2 + *(int *)(lVar9 + 0x600);
        }
        else {
          iVar5 = uVar2 * 3 + *(int *)(lVar9 + 0x604) + -3;
        }
        lVar9 = (longlong)(*piVar10 + iVar5) * 0x18 + *(longlong *)(lVar9 + 0x5e8);
      }
      piVar1 = (int *)(lVar9 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)(lVar9 + 0x14) = 1;
        iVar5 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar5 + 1U) {
          FUN_1446f48e2((longlong *)(param_1 + 0x50),iVar5);
        }
        *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 4) = (int)lVar11;
      }
      lVar11 = lVar11 + 1;
      piVar10 = piVar10 + 4;
    } while ((int)lVar8 != lVar11);
  }
  lVar11 = local_80;
  iVar5 = (int)local_70;
  if (uVar4 == 0) {
    lVar8 = local_78 + local_70 * 0x18;
  }
  else {
    if ((int)uVar4 < 0) {
      iVar6 = ~uVar4 * 2 + *(int *)(lVar3 + 0x600);
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x604) + uVar4 * 3 + -3;
    }
    lVar8 = (longlong)(iVar6 + iVar5) * 0x18 + *(longlong *)(lVar3 + 0x5e8);
  }
  *(undefined1 *)(lVar8 + 0x15) = 0;
  piVar10 = (int *)(lVar3 + 0x5f4);
  *piVar10 = *piVar10 + -1;
  if (*piVar10 == 0) {
    FUN_146877dce(param_1,&local_58);
    FUN_1468776a2(local_78);
  }
  if (uVar4 != 0) {
    local_60 = 0;
    if (iVar5 == 1) {
      local_5c = 2;
      lVar8 = lVar3 + 0x5d0;
    }
    else {
      local_60 = uVar4;
      local_5c = 1;
      if (iVar5 == 0) {
        local_5c = ((int)uVar4 >> 0x1f) + 2;
      }
      if ((int)uVar4 < 0) {
        iVar5 = ~uVar4 * 2 + *(int *)(lVar3 + 0x600);
      }
      else {
        iVar5 = *(int *)(lVar3 + 0x604) + uVar4 * 3 + -3;
      }
      lVar8 = (longlong)(iVar5 + local_5c) * 0x18 + *(longlong *)(lVar3 + 0x5e8);
    }
    piVar10 = (int *)(lVar8 + 0x10);
    *piVar10 = *piVar10 + -1;
    local_68 = lVar3;
    if (*piVar10 == 0) {
      *(undefined1 *)(lVar8 + 0x14) = 1;
      FUN_146877e54(lVar3,&local_68);
    }
  }
  iVar5 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar5 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar8 = 0;
    do {
      lVar9 = (longlong)*(int *)(lVar3 + lVar8) * 0x10;
      FUN_146877e54(*(undefined8 *)(lVar11 + lVar9),lVar11 + lVar9);
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar5 * 4 != lVar8);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_14481578e(param_1 + 0x50,0);
  }
  if (lVar11 == 0) {
    if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 146877dce FUN_146877dce body=133 status=ok
// SIG undefined FUN_146877dce(void)

void FUN_146877dce(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == uVar2) {
          FUN_146881396();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146877e54 FUN_146877e54 body=229 status=ok
// SIG undefined FUN_146877e54(void)

void FUN_146877e54(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  if (uVar1 == 0) {
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    goto LAB_146877e95;
  }
  if (iVar2 == 2) {
    lVar3 = param_1 + 0x310;
LAB_146877f11:
    local_1c = uVar1 - 1;
LAB_146877f13:
    FUN_146883ad4(lVar3);
  }
  else {
    if (iVar2 == 1) {
      if (-1 < (int)uVar1) {
        lVar3 = param_1 + 800;
        goto LAB_146877f11;
      }
      lVar3 = param_1 + 0x2f0;
LAB_146877f2f:
      local_1c = ~uVar1;
      goto LAB_146877f13;
    }
    if (iVar2 == 0) {
      if (-1 < (int)uVar1) {
        lVar3 = param_1 + 0x300;
        goto LAB_146877f11;
      }
      lVar3 = param_1 + 0x2e0;
      goto LAB_146877f2f;
    }
  }
  if (*(char *)(param_1 + 0x2d8) == '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_146877e95:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146877f6a FUN_146877f6a body=127 status=ok
// SIG undefined FUN_146877f6a(void)

void FUN_146877f6a(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    lVar2 = lVar2 + (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18 + 0x5a0;
  }
  else {
    if ((int)uVar1 < 0) {
      iVar3 = ~uVar1 * 2 + *(int *)(lVar2 + 0x600);
    }
    else {
      iVar3 = uVar1 * 3 + *(int *)(lVar2 + 0x604) + -3;
    }
    lVar2 = (longlong)(*(int *)((longlong)param_1 + 0xc) + iVar3) * 0x18 +
            *(longlong *)(lVar2 + 0x5e8);
  }
  iVar3 = *(int *)(lVar2 + 0x10);
  if (param_2 != '\0') {
    iVar3 = iVar3 + -1;
    *(int *)(lVar2 + 0x10) = iVar3;
  }
  if (iVar3 != 0) {
    return;
  }
  *(undefined1 *)(lVar2 + 0x14) = 1;
  FUN_146877e54(*param_1,param_1);
  return;
}



// FUNCTION 146877fea FUN_146877fea body=172 status=ok
// SIG undefined FUN_146877fea(void)

void FUN_146877fea(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = *param_2;
    uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 +
                    ((longlong)
                     (int)(uVar8 >> 0x10 ^
                          *(int *)((longlong)param_2 + 0xc) << 0x1b ^ (int)param_2[1] << 0xd ^ uVar8
                          ) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (((*puVar1 == uVar4) && ((int)puVar1[1] == (int)param_2[1])) &&
           (*(int *)((longlong)puVar1 + 0xc) == *(int *)((longlong)param_2 + 0xc))) {
          lVar5 = *param_1;
          plVar7 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[8];
          }
          lVar2 = lVar5 + (longlong)iVar3 * 0x18;
          lVar10 = (longlong)*(int *)(lVar2 + 0x14);
          iVar9 = *(int *)((longlong)plVar7 + lVar10 * 4);
          if (iVar9 == iVar3) {
            puVar6 = (undefined4 *)((longlong)plVar7 + lVar10 * 4);
          }
          else {
            do {
              lVar10 = (longlong)iVar9;
              iVar9 = *(int *)(lVar5 + 0x10 + lVar10 * 0x18);
            } while (iVar9 != iVar3);
            puVar6 = (undefined4 *)(lVar5 + lVar10 * 0x18 + 0x10);
          }
          *puVar6 = *(undefined4 *)(lVar2 + 0x10);
          FUN_146881700();
          return;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 146878096 FUN_146878096 body=129 status=ok
// SIG undefined FUN_146878096(void)

void FUN_146878096(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (DAT_14c948744 != 0) {
    uVar4 = (int)param_1[1] - 1;
    uVar1 = FUN_1427bad84(uVar4);
    if ((int)uVar1 < (int)uVar4) {
      uVar4 = uVar1;
    }
    uVar2 = 0;
    if (0 < (int)uVar4) {
      uVar2 = (ulonglong)uVar4;
    }
    *param_2 = *(undefined4 *)(*param_1 + uVar2 * 4);
    iVar3 = (int)param_1[1];
    iVar5 = ~(uint)uVar2 + iVar3;
    if (iVar5 != 0) {
      memmove((void *)(*param_1 + uVar2 * 4),(void *)(*param_1 + uVar2 * 4 + 4),(longlong)iVar5 << 2
             );
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
    return;
  }
  FUN_14688244c(param_1,param_2);
  return;
}



// FUNCTION 146878118 FUN_146878118 body=109 status=ok
// SIG undefined FUN_146878118(void)

void FUN_146878118(void)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    LOCK();
    DAT_14c948734 = DAT_14c948734 + 1;
    UNLOCK();
  }
  local_10 = &local_19;
  local_18 = FUN_141073f72;
  lVar2 = FUN_144a773aa(&local_18,&DAT_14c75ec34);
  FUN_14283ea4c(*(undefined8 *)(lVar2 + 0x58),0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146878186 FUN_146878186 body=135 status=ok
// SIG undefined FUN_146878186(void)

void FUN_146878186(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = FUN_141073f72;
  lVar2 = FUN_144a773aa(&local_20,&DAT_14c75ec34);
  FUN_14171c5bd(*(undefined8 *)(lVar2 + 0x58));
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    LOCK();
    DAT_14c948734 = DAT_14c948734 + -1;
    UNLOCK();
  }
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_144757f48(*(undefined8 *)(param_1 + 0x58),0x80000);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687820e FUN_14687820e body=403 status=ok
// SIG undefined FUN_14687820e(void)

void FUN_14687820e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  ulonglong local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9487b8) {
    FUN_144b3d300(&DAT_14c9487b8);
    if (DAT_14c9487b8 == -1) {
      cVar2 = FUN_1427c6430();
      uVar3 = 1;
      if (cVar2 == '\0') {
        uVar3 = FUN_1427c64b2();
      }
      DAT_14c9487b4 = uVar3;
      _Init_thread_footer(&DAT_14c9487b8);
    }
  }
  local_80 = 0;
  uVar7 = 0;
  local_88 = param_2;
  FUN_146877890(*(longlong *)(param_2 + 0x278) + 0x410,&local_88,0,0);
  if (param_2 == 0) {
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulonglong *)(param_2 + 0x14) & 0xffffffff00000000;
    uVar7 = *(undefined4 *)(param_2 + 0x2dc);
    uVar9 = *(ulonglong *)(param_2 + 0x14) & 0xffffffff;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  if (DAT_14c948744 == 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x2dc);
  }
  else {
    uVar4 = FUN_1427bad84(0x7fffffff);
  }
  local_50 = uVar8 | uVar9;
  iVar6 = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = iVar6;
  local_88 = CONCAT44(uVar4,uVar1);
  local_80 = CONCAT44(iVar6,0x7fffffff);
  local_78 = FUN_1427c671c;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e66170;
  local_48 = uVar7;
  local_40 = param_1;
  FUN_14687de76(param_1 + 0x400,&local_88);
  if (local_78 != (code *)0x0) {
    pppuVar5 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar5 = &local_58;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468783a2 FUN_1468783a2 body=416 status=ok
// SIG undefined FUN_1468783a2(void)

void FUN_1468783a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_2;
  iVar5 = (int)param_2[1];
  if ((iVar5 != 0 && lVar3 != 0) && (*(int *)(param_1 + 0x288) != *(int *)(param_1 + 0x2b4))) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar7 = param_1 + 0x2b8;
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2c0);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x2c8) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x280) + (longlong)iVar9 * 0x18);
        if (*plVar1 == lVar3) {
          if (((plVar1 != (longlong *)0x0) && (lVar3 = plVar1[1], lVar3 != 0)) &&
             (*(int *)(lVar3 + 0x2dc) == iVar5)) {
            uVar2 = *(undefined4 *)(lVar3 + 0x34);
            if (DAT_14c948744 != 0) {
              iVar5 = FUN_1427bad84(0x7fffffff);
            }
            local_38 = (undefined4)param_2[1];
            local_40 = *param_2;
            local_6c = *(int *)(param_1 + 0x3f8) + 1;
            *(int *)(param_1 + 0x3f8) = local_6c;
            local_70 = 0x7fffffff;
            local_68 = FUN_1427c6a8c;
            local_58 = (undefined ***)0x0;
            local_48 = &PTR_LAB_149e661b0;
            local_78 = uVar2;
            local_74 = iVar5;
            local_30 = param_1;
            FUN_14687de76(param_1 + 0x400,&local_78);
            if (local_68 != (code *)0x0) {
              pppuVar6 = local_58;
              if (local_58 == (undefined ***)0x0) {
                pppuVar6 = &local_48;
              }
              (*(code *)(*pppuVar6)[2])();
            }
          }
          break;
        }
        iVar9 = (int)plVar1[2];
      } while (iVar9 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146878544 FUN_146878544 body=219 status=ok
// SIG undefined FUN_146878544(void)

void FUN_146878544(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  local_84 = uVar1;
  if (DAT_14c948744 != 0) {
    local_84 = FUN_1427bad84(0x7fffffff);
  }
  local_7c = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = local_7c;
  local_78 = FUN_1427c72a6;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e661f0;
  local_88 = uVar2;
  local_80 = param_3;
  local_50 = uVar3;
  local_48 = uVar1;
  local_40 = param_1;
  FUN_14687de76(param_1 + 0x400,&local_88);
  if (local_78 != (code *)0x0) {
    pppuVar4 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar4 = &local_58;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146878620 FUN_146878620 body=68 status=ok
// SIG undefined FUN_146878620(void)

void FUN_146878620(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14687e052(param_1 + 0x30);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146878659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146878664 FUN_146878664 body=151 status=ok
// SIG undefined FUN_146878664(void)

void FUN_146878664(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x1a0));
  FUN_140619b9c(param_1 + 0x1a8,&local_40);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x1a0));
  local_50 = local_40;
  local_48 = local_38;
  FUN_14687a052(param_2);
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468786fc FUN_1468786fc body=122 status=ok
// SIG undefined FUN_1468786fc(void)

void FUN_1468786fc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x148);
    if (iVar3 < 1) {
      fVar4 = 0.0;
      goto LAB_146878748;
    }
    fVar4 = (float)*(int *)(param_1 + 0xf8);
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x148);
    if (*(int *)(param_1 + 0x148) < iVar3) {
      iVar2 = iVar3;
    }
    fVar4 = (float)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xf8))
            * 100.0;
    iVar3 = iVar2 + iVar3 + *(int *)(lVar1 + 0x20);
  }
  fVar4 = fVar4 / (float)iVar3;
LAB_146878748:
  if (fVar4 <= *(float *)(param_1 + 0x138)) {
    fVar4 = *(float *)(param_1 + 0x138);
  }
  *(float *)(param_1 + 0x138) = fVar4;
  return;
}



// FUNCTION 146878882 FUN_146878882 body=222 status=ok
// SIG undefined FUN_146878882(void)

void FUN_146878882(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  local_84 = uVar1;
  if (DAT_14c948744 != 0) {
    local_84 = FUN_1427bad84(0x7fffffff);
  }
  local_7c = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = local_7c;
  local_80 = 0;
  local_78 = FUN_1427c87aa;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e66280;
  local_88 = uVar2;
  local_50 = uVar3;
  local_48 = uVar1;
  local_40 = param_1;
  FUN_14687de76(param_1 + 0x400,&local_88);
  if (local_78 != (code *)0x0) {
    pppuVar4 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar4 = &local_58;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146878962 FUN_146878962 body=586 status=ok
// SIG undefined FUN_146878962(void)

void FUN_146878962(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (undefined2 *)0x0) {
    cVar1 = FUN_144a61b4f();
    if ((cVar1 == '\0') && (cVar1 = FUN_14689c21f(), cVar1 == '\0')) {
      FUN_144750a86(param_2,&local_38,0,0);
      puVar5 = local_38;
      if (local_30 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x1688,
                    L"Trying to add an object %s to FAsyncPackage referenced objects list outside of a FGCScopeGuard."
                    ,puVar5);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
    local_40 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar3 = FUN_14075b868(param_1 + 0x200,uVar2 >> 0x10 ^ uVar2,&local_40);
    if (iVar3 == -1) {
      local_38 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      FUN_14075b584(param_1 + 0x200,&local_50,&local_38,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
    uVar2 = *(uint *)(param_2 + 6);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) {
      FUN_1400021e4(param_1 + 0x14,&local_38);
      local_58 = &DAT_149dfb77a;
      if (local_30 != 0) {
        local_58 = local_38;
      }
      FUN_144750a86(param_2,&local_50,0,0);
      puVar5 = &DAT_149dfb77a;
      if (local_48 != 0) {
        puVar5 = local_50;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x1690,
                    L"Trying to add an unreachable object %s to FAsyncPackage %s referenced objects list."
                    ,puVar5);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146878bae FUN_146878bae body=730 status=ok
// SIG undefined FUN_146878bae(void)

ulonglong FUN_146878bae(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       int param_5)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_4;
  local_68 = param_3;
  cVar2 = FUN_1403f35db(param_3,&DAT_14c8687c0);
  uVar6 = 0;
  if (cVar2 != '\0') goto LAB_146878e00;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  FUN_1400021e4(&local_70,&local_80);
  FUN_1400021e4(&local_68,&local_98);
  uVar9 = (ulonglong)(local_78 - 1);
  if (local_78 == 0) {
    uVar9 = uVar6;
  }
  FUN_1412cfe60(&local_60,&local_98,(int)uVar9 + 1 + (uint)(local_90 == 0));
  FUN_1401aebe8(&local_60,local_80,uVar9);
  plVar3 = local_60;
  if ((int)local_58 == 0) {
    plVar3 = (longlong *)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_88,plVar3,1);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_a0 = local_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_88 >> 0x10);
    uVar4 = (uint)local_88 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar5 = (int)param_1[9] - 1;
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)((ulonglong)local_88 >> 0x20) + ((uint)local_88 << 0x10 | uVar4) +
                     (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar7 * 0x28);
        if (*plVar8 == local_88) {
          if (plVar8 != (longlong *)0x0) goto LAB_146878e39;
          break;
        }
        iVar7 = (int)plVar8[4];
      } while (iVar7 != -1);
    }
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    (uVar5 & (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar7 * 0x28);
        if (*plVar8 == param_3) {
          local_a0 = param_3;
          if (plVar8 != (longlong *)0x0) goto LAB_146878e39;
          break;
        }
        iVar7 = (int)plVar8[4];
      } while (iVar7 != -1);
    }
  }
  FUN_1400021e4(&local_88,&local_60);
  plVar3 = local_60;
  if ((int)local_58 == 0) {
    plVar3 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x9d,
                L"Compiled in export %s not found; it was never registered.",plVar3);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146878de6:
  uVar6 = 0;
  goto LAB_146878de8;
LAB_146878e39:
  if (*(int *)((longlong)plVar8 + 0xc) == 2) goto LAB_146878de6;
  local_90 = param_5;
  local_60 = &local_a0;
  local_98 = param_2;
  local_58 = &local_98;
  FUN_14687e0b2(param_1 + 10,local_4c);
  uVar6 = CONCAT71((int7)((ulonglong)&local_60 >> 8),1);
LAB_146878de8:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
LAB_146878e00:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146878e8a FUN_146878e8a body=154 status=ok
// SIG undefined FUN_146878e8a(void)

void FUN_146878e8a(longlong param_1)

{
  uint uVar1;
  
  if (((*(char *)(param_1 + 0x2d8) == '\x06') && (*(char *)(param_1 + 0x598) == '\0')) &&
     (((*(int *)(param_1 + 0x2e8) != 0 ||
       (((*(int *)(param_1 + 0x2f8) != 0 || (*(int *)(param_1 + 0x308) != 0)) ||
        (*(int *)(param_1 + 0x318) != 0)))) ||
      ((*(int *)(param_1 + 0x328) != 0 || (*(int *)(param_1 + 0x338) != 0)))))) {
    *(undefined1 *)(param_1 + 0x598) = 1;
    uVar1 = 0xfffffffe;
    if ((*(int *)(param_1 + 0x338) == 0) && (uVar1 = 0xffffffff, *(int *)(param_1 + 0x318) != 0)) {
      uVar1 = -(uint)(1 < *(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x374)) | 0xfffffffd;
    }
    FUN_146878f24(*(undefined8 *)(param_1 + 0x278),param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 146878f24 FUN_146878f24 body=297 status=ok
// SIG undefined FUN_146878f24(void)

void FUN_146878f24(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  ulonglong local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0x14) & 0xffffffff00000000;
    uVar2 = *(undefined4 *)(param_2 + 0x2dc);
    uVar4 = *(ulonglong *)(param_2 + 0x14) & 0xffffffff;
  }
  if ((DAT_14c948744 == 0) || (FUN_1427bad84(0x7fffffff), DAT_14c948744 == 0)) {
    local_84 = *(undefined4 *)(param_2 + 0x2dc);
  }
  else {
    local_84 = FUN_1427bad84(0x7fffffff);
  }
  local_50 = uVar3 | uVar4;
  local_88 = *(undefined4 *)(param_2 + 0x34);
  local_7c = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = local_7c;
  local_78 = FUN_1427c8e8a;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e662c0;
  local_80 = param_3;
  local_48 = uVar2;
  local_40 = param_1;
  FUN_14687de76(param_1 + 0x400,&local_88);
  if (local_78 != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14687904e FUN_14687904e body=222 status=ok
// SIG undefined FUN_14687904e(void)

void FUN_14687904e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  local_84 = uVar1;
  if (DAT_14c948744 != 0) {
    local_84 = FUN_1427bad84(0x7fffffff);
  }
  local_7c = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = local_7c;
  local_80 = 0;
  local_78 = FUN_1427cb4f2;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e66320;
  local_88 = uVar2;
  local_50 = uVar3;
  local_48 = uVar1;
  local_40 = param_1;
  FUN_14687de76(param_1 + 0x400,&local_88);
  if (local_78 != (code *)0x0) {
    pppuVar4 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar4 = &local_58;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146879232 FUN_146879232 body=256 status=ok
// SIG undefined FUN_146879232(void)

void FUN_146879232(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  local_74 = uVar1;
  if (DAT_14c948744 != 0) {
    FUN_1427bad84(0x7fffffff);
    if (DAT_14c948744 == 0) {
      local_74 = *(undefined4 *)(param_2 + 0x2dc);
    }
    else {
      local_74 = FUN_1427bad84(0x7fffffff);
    }
  }
  local_78 = *(undefined4 *)(param_2 + 0x34);
  local_6c = *(int *)(param_1 + 0x3f8) + 1;
  *(int *)(param_1 + 0x3f8) = local_6c;
  local_70 = 0;
  local_68 = FUN_1427cc810;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149e663c0;
  local_40 = uVar2;
  local_38 = uVar1;
  local_30 = param_1;
  FUN_14687de76(param_1 + 0x400,&local_78);
  if (local_68 != (code *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146879334 FUN_146879334 body=68 status=ok
// SIG undefined FUN_146879334(void)

undefined8 * FUN_146879334(longlong param_1,undefined8 *param_2,uint param_3)

{
  if ((int)param_3 < 0) {
    FUN_1468b5820(param_1 + 8,param_2,~param_3);
  }
  else if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1468b5fe0(param_1,param_2,param_3 - 1,0,0);
  }
  return param_2;
}



// FUNCTION 14687938c FUN_14687938c body=248 status=ok
// SIG undefined FUN_14687938c(void)

void FUN_14687938c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  
  if ((DAT_14c872ba8 == '\0') && (*(char *)(param_1 + 0x115) == '\0')) {
    cVar2 = (*(code *)PTR_FUN_14c75b128)();
    if (cVar2 != '\x03') goto LAB_1468793c7;
  }
  if (((*(int *)(param_1 + 0x110) < 4) && (*(longlong *)(param_1 + 0x108) == 0)) &&
     (*(longlong *)(param_1 + 0x100) != 0)) {
    lVar3 = FUN_1427c5a02(param_1);
    if (*(longlong *)(param_1 + 0x100) <= param_2 && lVar3 == *(longlong *)(param_1 + 0x100)) {
      FUN_1427c5aa2(param_1);
    }
  }
LAB_1468793c7:
  if ((param_2 < *(longlong *)(param_1 + 0xe0)) || (*(longlong *)(param_1 + 0xe8) <= param_2)) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(longlong *)(param_1 + 0xd8) = param_2;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 200);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar3;
    **(longlong **)(param_1 + 8) = (param_2 - *(longlong *)(param_1 + 0xe0)) + lVar3;
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) =
         (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0)) +
         *(longlong *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xe0);
  }
  return;
}



// FUNCTION 146879484 FUN_146879484 body=106 status=ok
// SIG undefined FUN_146879484(void)

void FUN_146879484(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_38 = *(undefined8 *)(param_3 + 0x14);
  local_18 = &local_38;
  local_30 = *(undefined4 *)(param_3 + 0x2dc);
  local_28 = param_2;
  FUN_14687e4a6(param_1 + 0x98,local_c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468794f0 FUN_1468794f0 body=213 status=ok
// SIG undefined FUN_1468794f0(void)

undefined8 FUN_1468794f0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x338);
  *(uint *)(param_1 + 0x338) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x33c) < iVar3 + 1U) {
    FUN_14170b9ba(param_1 + 0x330,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar3 * 8) = param_2;
  if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x378;
    if (*(longlong *)(param_1 + 0x380) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x380);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x388) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x340) + (longlong)iVar3 * 0x38;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x340) + (longlong)iVar3 * 0x38) == param_2)
        goto LAB_14687958d;
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_14687958d:
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  FUN_146878e8a(param_1);
  return uVar1;
}



// FUNCTION 1468795c6 FUN_1468795c6 body=134 status=ok
// SIG undefined FUN_1468795c6(void)

void FUN_1468795c6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar5 = (uint)uVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*param_1 + 8 + (longlong)iVar3 * 0x14) == *(int *)(param_2 + 1)) {
          FUN_146881ef0(param_1,iVar3);
          return;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0x14 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14687964c FUN_14687964c body=63 status=ok
// SIG undefined FUN_14687964c(void)

void FUN_14687964c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146881e96(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146882272(param_1);
    return;
  }
  FUN_146883990(param_1);
  FUN_146881e96(param_1);
  return;
}



// FUNCTION 14687968c FUN_14687968c body=148 status=ok
// SIG undefined FUN_14687968c(void)

void FUN_14687968c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x278);
  local_38 = 0;
  uStack_30 = 0;
  FUN_146877710(param_1 + 0x5a0,&local_38,param_1);
  if ((longlong)(int)uStack_30 != 0) {
    lVar2 = (longlong)(int)uStack_30 << 4;
    lVar3 = local_38;
    do {
      FUN_146877aa2(lVar1 + 0x410,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14687972a FUN_14687972a body=577 status=ok
// SIG undefined FUN_14687972a(void)

bool FUN_14687972a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  local_70 = *(undefined8 **)(param_1 + 0x78);
  iVar3 = *(int *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  local_68 = (longlong)*(int *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if ((longlong)iVar3 != 0) {
    local_60 = puVar4 + iVar3;
    plVar1 = (longlong *)(param_1 + 0x98);
    puVar12 = puVar4;
    do {
      uVar5 = *puVar12;
      FUN_14687e9b4(plVar1,&local_4c,uVar5);
      lVar7 = *(longlong *)(*plVar1 + 8 + (longlong)local_4c * 0x20);
      iVar11 = *(int *)(*plVar1 + 0x10 + (longlong)local_4c * 0x20);
      FUN_14687ea3a(plVar1);
      if ((iVar11 != 0 && lVar7 != 0) &&
         (*(int *)(DAT_14c948738 + 0x288) != *(int *)(DAT_14c948738 + 0x2b4))) {
        uVar6 = (uint)((ulonglong)lVar7 >> 0x10);
        uVar10 = (uint)lVar7 & 0xffff;
        lVar9 = DAT_14c948738 + 0x2b8;
        if (*(longlong *)(DAT_14c948738 + 0x2c0) != 0) {
          lVar9 = *(longlong *)(DAT_14c948738 + 0x2c0);
        }
        iVar8 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(DAT_14c948738 + 0x2c8) - 1U &
                                 (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar10) +
                                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(DAT_14c948738 + 0x280) + (longlong)iVar8 * 0x18);
            if (*plVar2 == lVar7) {
              if (((plVar2 != (longlong *)0x0) && (lVar7 = plVar2[1], lVar7 != 0)) &&
                 (*(int *)(lVar7 + 0x2dc) == iVar11)) goto LAB_146879856;
              break;
            }
            iVar8 = (int)plVar2[2];
          } while (iVar8 != -1);
        }
      }
      lVar7 = 0;
LAB_146879856:
      lVar7 = FUN_1468794f0(lVar7,uVar5);
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + lVar7;
      puVar12 = puVar12 + 1;
    } while (puVar12 != local_60);
  }
  iVar11 = (int)local_68;
  if (iVar11 != 0) {
    lVar7 = local_68 * 0xc;
    puVar12 = local_70;
    do {
      local_58 = *puVar12;
      local_50 = *(undefined4 *)(puVar12 + 1);
      FUN_1468783a2(DAT_14c948738,&local_58);
      FUN_1468795c6(param_1 + 0xe8,puVar12);
      puVar12 = (undefined8 *)((longlong)puVar12 + 0xc);
      lVar7 = lVar7 + -0xc;
    } while (lVar7 != 0);
  }
  if (iVar3 != 0) {
    FUN_1427c64f0(param_1,DAT_14c75ec30 <= iVar3);
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 != 0 || iVar11 != 0;
}



// FUNCTION 14687996c FUN_14687996c body=173 status=ok
// SIG undefined FUN_14687996c(void)

bool FUN_14687996c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (code *)0x0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_14687ea94(param_1 + 8,&local_78);
    pcVar2 = local_68;
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar4 = local_48;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2);
    if (local_68 != (code *)0x0) {
      plVar4 = local_48;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146879a1a FUN_146879a1a body=254 status=ok
// SIG undefined FUN_146879a1a(void)

ulonglong FUN_146879a1a(longlong param_1,float param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x40);
  EnterCriticalSection(lpCriticalSection);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x80) == 0)) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      uVar2 = FUN_1405d8a54(0);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
    }
    *(undefined1 *)(param_1 + 0x88) = 1;
    LeaveCriticalSection(lpCriticalSection);
    if ((param_2 != 0.0) || (NAN(param_2))) {
      uVar3 = 1;
      if (1 < (uint)(longlong)(param_2 * 1000.0)) {
        uVar3 = (longlong)(param_2 * 1000.0) & 0xffffffff;
      }
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
                        (*(longlong **)(param_1 + 0x90),uVar3,0);
      uVar3 = CONCAT71(uVar4,1);
      if (cVar1 == '\0') {
        EnterCriticalSection(lpCriticalSection);
        cVar1 = *(char *)(param_1 + 0x88);
        if (cVar1 == '\x01') {
          *(undefined1 *)(param_1 + 0x88) = 0;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
        }
        uVar3 = CONCAT71(uVar4,cVar1) ^ 1;
        LeaveCriticalSection(lpCriticalSection);
      }
      goto LAB_146879a4a;
    }
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
              (*(longlong **)(param_1 + 0x90),0xffffffff,0);
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
  }
  uVar3 = CONCAT71(uVar4,1);
LAB_146879a4a:
  return uVar3 & 0xffffffff;
}



// FUNCTION 146879b18 FUN_146879b18 body=1198 status=ok
// SIG undefined FUN_146879b18(void)

undefined8 FUN_146879b18(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined2 *local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x288);
  lVar2 = param_1 + 0x298;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x2b0) == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar12 = *(int *)(param_1 + 0x2b0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar7 = 1;
  local_90 = plVar1;
  if ((iStack_54 != iVar12) || (uStack_60 != lVar2)) {
    local_c0 = param_3;
    do {
      local_98 = *(ulonglong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (local_98 != 0) {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          uVar8 = ((uint)(local_98 >> 0x14) & 0xffff ^ (uint)(local_98 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          plVar9 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar9 = param_2 + 7;
          }
          iVar10 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)param_2[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*param_2 + (longlong)iVar10 * 0x10) == local_98)
              goto LAB_146879c41;
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + *param_2 + 8);
            } while (iVar10 != -1);
          }
        }
        FUN_14096d82e(param_2,&local_68,&local_98);
        if ((((local_98 != 0) && (*(longlong *)(local_98 + 0x48) != 0)) &&
            (lVar3 = *(longlong *)(*(longlong *)(local_98 + 0x48) + 0x20), lVar3 != 0)) &&
           (lVar4 = *(longlong *)(lVar3 + 0x398), lVar4 != 0)) {
          if (*(char *)(lVar4 + 0x59a) == '\0') {
            FUN_1400021e4(param_1 + 0x14,&local_a8);
            puVar13 = local_a8;
            if (local_a0 == 0) {
              puVar13 = &DAT_149dfb77a;
            }
            pwVar11 = L"%s Doesn\'t have all exports Serialized";
LAB_146879f23:
            FUN_140002266(&local_68,pwVar11,puVar13);
LAB_146879f33:
            if (&local_68 == local_c0) {
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*local_c0 != 0) {
                FUN_1400020a8();
              }
              *local_c0 = local_68;
              local_68 = 0;
              *(undefined4 *)(local_c0 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)local_c0 + 0xc) = uStack_60._4_4_;
              uStack_60 = 0;
            }
          }
          else {
            if (*(int *)(lVar4 + 0xf8) < *(int *)(lVar4 + 0x148)) {
              FUN_1400021e4(param_1 + 0x14,&local_a8);
              puVar13 = local_a8;
              if (local_a0 == 0) {
                puVar13 = &DAT_149dfb77a;
              }
              pwVar11 = L"%s Doesn\'t have all objects processed by DeferredPostLoad";
              goto LAB_146879f23;
            }
            if ((longlong)*(int *)(lVar3 + 0x20) != 0) {
              lVar14 = 0;
              do {
                lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x40 + lVar14);
                if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x1400) != 0)) {
                  pwVar11 = L"Serialized";
                  if ((*(uint *)(lVar5 + 8) >> 10 & 1) == 0) {
                    pwVar11 = L"PostLoaded";
                  }
                  FUN_144750a86(lVar5,&local_a8,0,0);
                  puVar13 = local_a8;
                  if (local_a0 == 0) {
                    puVar13 = &DAT_149dfb77a;
                  }
                  FUN_140002266(&local_68,L"%s has not been %s",puVar13,pwVar11);
                  goto LAB_146879f33;
                }
                lVar14 = lVar14 + 0x68;
              } while ((longlong)*(int *)(lVar3 + 0x20) * 0x68 - lVar14 != 0);
            }
            cVar6 = FUN_146879b18(lVar4,param_2,local_c0);
            if (cVar6 != '\0') goto LAB_146879c41;
            FUN_1400021e4(param_1 + 0x14,local_b8);
            FUN_144a882a8(&local_a8,local_b8,&DAT_149e64e00);
            plVar1 = local_c0;
            FUN_144a7dea0(&local_68,&local_a8,local_c0);
            if (&local_68 == plVar1) {
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*local_c0 != 0) {
                FUN_1400020a8();
              }
              *local_c0 = local_68;
              local_68 = 0;
              *(undefined4 *)(local_c0 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)local_c0 + 0xc) = uStack_60._4_4_;
              uStack_60 = 0;
            }
            bVar15 = local_a8 != (undefined2 *)0x0;
            local_a8 = local_b8[0];
            if (bVar15) {
              FUN_1400020a8();
              local_a8 = local_b8[0];
            }
          }
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar7 = 0;
          goto LAB_146879cf3;
        }
      }
LAB_146879c41:
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar12));
    uVar7 = 1;
  }
LAB_146879cf3:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146879fc8 FUN_146879fc8 body=138 status=ok
// SIG undefined FUN_146879fc8(void)

ulonglong FUN_146879fc8(ulonglong param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x1a0);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
    lVar2 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1e8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      plVar1 = (longlong *)(param_1 + 0x1a8);
      do {
        bVar4 = *(uint *)(*plVar1 + (longlong)iVar3 * 0xc) == param_2;
        param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
        if (bVar4) break;
        iVar3 = *(int *)(*plVar1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
      goto LAB_146879ff4;
    }
  }
  param_1 = 0;
LAB_146879ff4:
  ReleaseSRWLockShared(SRWLock);
  return param_1 & 0xffffffff;
}



// FUNCTION 14687a052 FUN_14687a052 body=273 status=ok
// SIG undefined FUN_14687a052(void)

void FUN_14687a052(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1a0));
  uVar4 = *(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1dc);
  lVar1 = param_1 + 0x1a8;
  iVar3 = (int)param_2[1];
  uVar5 = uVar4 + iVar3;
  if (uVar4 < uVar5) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_1400bac10(lVar1,uVar5);
    iVar3 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x1f0) == 0) || (*(int *)(param_1 + 0x1f0) < iVar3)) {
      *(int *)(param_1 + 0x1f0) = iVar3;
      FUN_144a56d22(lVar1);
    }
    iVar3 = (int)param_2[1];
  }
  if (iVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      local_4c = *(undefined4 *)(lVar2 + lVar6);
      FUN_1447cbafe(lVar1,local_50,&local_4c,0);
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar3 * 4 != lVar6);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1a0));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687a166 FUN_14687a166 body=68 status=ok
// SIG undefined FUN_14687a166(void)

void FUN_14687a166(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146884244();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14687a1aa FUN_14687a1aa body=501 status=ok
// SIG undefined FUN_14687a1aa(void)

void FUN_14687a1aa(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar7 = (int *)*param_2;
    piVar1 = piVar7 + *(int *)(param_2 + 1);
    do {
      iVar2 = *piVar7;
      plVar6 = *(longlong **)(param_1 + 0x1e8);
      if (*(longlong **)(param_1 + 0x1e8) == (longlong *)0x0) {
        plVar6 = (longlong *)(param_1 + 0x1a8);
      }
      if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
        plVar9 = plVar6 + (longlong)*(int *)(param_1 + 0x1f0) * 2;
        do {
          plVar4 = (longlong *)*plVar6;
          if ((longlong)(int)plVar4[1] != 0) {
            lVar10 = 0;
            do {
              if (*(int *)(*plVar4 + lVar10) == iVar2) {
                *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
              }
              lVar10 = lVar10 + 4;
            } while ((longlong)(int)plVar4[1] * 4 != lVar10);
          }
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar9);
        iVar3 = *(int *)(param_1 + 0x1f0);
        lVar10 = (longlong)iVar3;
        if (lVar10 != 0) {
          plVar6 = *(longlong **)(param_1 + 0x1e8);
          if (*(longlong **)(param_1 + 0x1e8) == (longlong *)0x0) {
            plVar6 = (longlong *)(param_1 + 0x1a8);
          }
          iVar13 = 0;
          bVar8 = *(int *)(*plVar6 + 8) == *(int *)(*plVar6 + 0xc);
          iVar14 = 0;
          do {
            lVar11 = (longlong)iVar14;
            iVar17 = iVar14 + 1;
            if (iVar14 + 1 < iVar3) {
              iVar17 = iVar3;
            }
            plVar9 = plVar6 + lVar11 * 2 + 2;
            iVar15 = iVar14;
            lVar12 = lVar11;
            do {
              lVar12 = lVar12 + 1;
              iVar16 = iVar17;
              if (lVar10 <= lVar12) break;
              lVar5 = *plVar9;
              iVar15 = iVar15 + 1;
              plVar9 = plVar9 + 2;
              iVar16 = iVar15;
            } while (bVar8 == (*(int *)(lVar5 + 8) == *(int *)(lVar5 + 0xc)));
            iVar17 = iVar16 - iVar14;
            if (bVar8 == false) {
              if (iVar13 != iVar14) {
                memmove(plVar6 + (longlong)iVar13 * 2,plVar6 + lVar11 * 2,(longlong)iVar17 << 4);
              }
              iVar13 = iVar13 + iVar17;
            }
            else {
              FUN_146884387(plVar6 + lVar11 * 2,iVar17);
            }
            bVar8 = (bool)(bVar8 ^ 1);
            iVar14 = iVar16;
          } while (lVar12 < lVar10);
          *(int *)(param_1 + 0x1f0) = iVar13;
        }
      }
      FUN_14573a2c8(param_1 + 0x220,iVar2);
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014687a398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  return;
}



// FUNCTION 14687a3a0 FUN_14687a3a0 body=202 status=ok
// SIG undefined FUN_14687a3a0(void)

undefined8 * FUN_14687a3a0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_14687a46c(param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  iVar1 = *(int *)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x1f0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 500) < iVar1 + 1U) {
    FUN_1468843d0(param_1 + 0x1a8,iVar1);
  }
  lVar3 = param_1 + 0x1a8;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1e8);
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687a46c FUN_14687a46c body=175 status=ok
// SIG undefined FUN_14687a46c(void)

longlong * FUN_14687a46c(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e65dc0;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14687ecda(plVar3 + 2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687a51c FUN_14687a51c body=134 status=ok
// SIG undefined FUN_14687a51c(void)

longlong * FUN_14687a51c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  if (*(int *)(param_1 + 0x1f0) != 0) {
    lVar1 = param_1 + 0x1a8;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1e8);
    }
    FUN_14687a5a2(param_2,(longlong)(*(int *)(param_1 + 0x1f0) + -1) * 0x10 + lVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  if (*param_2 != 0) {
    FUN_14687a5f2(param_2,param_1 + 0x220);
  }
  return param_2;
}



// FUNCTION 14687a5a2 FUN_14687a5a2 body=80 status=ok
// SIG undefined FUN_14687a5a2(void)

undefined8 * FUN_14687a5a2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
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



// FUNCTION 14687a5f2 FUN_14687a5f2 body=141 status=ok
// SIG undefined FUN_14687a5f2(void)

void FUN_14687a5f2(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = (longlong)*(int *)((undefined8 *)*param_1 + 1);
  if (lVar3 != 0) {
    puVar2 = *(uint **)*param_1;
    puVar1 = puVar2 + lVar3;
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        plVar4 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar4 = param_2 + 7;
        }
        iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_2[9] - 1U & *puVar2) * 4);
        if (iVar5 != -1) {
          do {
            lVar3 = *param_2 + (longlong)iVar5 * 0x10;
            if (*(uint *)(*param_2 + (longlong)iVar5 * 0x10) == *puVar2) {
              if ((uint *)(lVar3 + 4) != (uint *)0x0 && lVar3 != 0) {
                *puVar2 = *(uint *)(lVar3 + 4);
              }
              break;
            }
            iVar5 = *(int *)(lVar3 + 8);
          } while (iVar5 != -1);
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return;
}



// FUNCTION 14687a680 FUN_14687a680 body=382 status=ok
// SIG undefined FUN_14687a680(void)

void FUN_14687a680(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1468844c4(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146883e68(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x18;
      uStack_50 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x18 + 8);
      FUN_146883b40(param_1,local_34);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687a800 FUN_14687a800 body=182 status=ok
// SIG undefined FUN_14687a800(void)

ulonglong FUN_14687a800(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x358));
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar2 = (uint *)*param_2;
    puVar1 = puVar2 + *(int *)(param_2 + 1);
    do {
      if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
        lVar5 = *(longlong *)(param_1 + 0x348);
        if (*(longlong *)(param_1 + 0x348) == 0) {
          lVar5 = param_1 + 0x340;
        }
        iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x350) - 1U & *puVar2) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar3 * 0xc) == *puVar2) {
              uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
              goto LAB_14687a89f;
            }
            iVar3 = *(int *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar3 * 0xc + 4);
          } while (iVar3 != -1);
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  uVar4 = 0;
LAB_14687a89f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x358));
  return uVar4 & 0xffffffff;
}



// FUNCTION 14687a8b6 FUN_14687a8b6 body=148 status=ok
// SIG undefined FUN_14687a8b6(void)

void FUN_14687a8b6(longlong param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x10f) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    uVar5 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      if ((*(char *)(lVar2 + lVar4) == param_2) && (*(char *)(lVar2 + 1 + lVar4) == '\0')) {
        *(undefined1 *)(lVar2 + 1 + lVar4) = 1;
        plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
        if (((int)plVar3[1] != 0) && (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x60))(plVar3,param_1 + 0x14,uVar5,param_3);
        }
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 14687a94a FUN_14687a94a body=88 status=ok
// SIG undefined FUN_14687a94a(void)

void FUN_14687a94a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 400;
  FUN_14687cc76(*(undefined8 *)(param_1 + 0x278),lVar1);
  FUN_14687a1aa(*(undefined8 *)(param_1 + 0x278),lVar1);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (-1 < *(int *)(param_1 + 0x19c)) {
    return;
  }
  FUN_14481578e(lVar1,0);
  return;
}



// FUNCTION 14687a9c0 FUN_14687a9c0 body=415 status=ok
// SIG undefined FUN_14687a9c0(void)

bool FUN_14687a9c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  iVar2 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar2 != 0) {
    plVar8 = *(longlong **)(param_1 + 0xa0);
    plVar6 = plVar8 + iVar2;
    plVar1 = (longlong *)(param_1 + 0x50);
    local_60 = param_1 + 0x88;
    do {
      lVar3 = *plVar8;
      if (*(int *)(param_1 + 0x98) != 0) {
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar7 = (uint)lVar3 & 0xffff;
        lVar5 = *(longlong *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          lVar5 = local_60;
        }
        iVar10 = *(int *)(lVar5 + (longlong)
                                  (int)(*(int *)(param_1 + 0x98) - 1U &
                                       ((uint)lVar3 << 0x10 | uVar7) +
                                       (int)((ulonglong)lVar3 >> 0x20) +
                                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
        while (iVar9 = iVar10, iVar9 != -1) {
          lVar5 = *plVar1;
          iVar10 = *(int *)(lVar5 + 0x18 + (longlong)iVar9 * 0x20);
          if (*(longlong *)(lVar5 + (longlong)iVar9 * 0x20) == lVar3) {
            do {
              local_50 = *(undefined4 *)(lVar5 + 0x10 + (longlong)iVar9 * 0x20);
              local_58 = *(undefined8 *)(lVar5 + 8 + (longlong)iVar9 * 0x20);
              local_4c = 0;
              FUN_146877e54(local_58,&local_58);
              do {
                iVar9 = iVar10;
                if (iVar9 == -1) goto LAB_14687aaed;
                lVar5 = *plVar1;
                iVar10 = *(int *)(lVar5 + 0x18 + (longlong)iVar9 * 0x20);
              } while (*(longlong *)(lVar5 + (longlong)iVar9 * 0x20) != lVar3);
            } while( true );
          }
        }
      }
LAB_14687aaed:
      FUN_14687f038(plVar1,lVar3);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_1402191ca(param_1 + 0xa0,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2 != 0;
}



// FUNCTION 14687ab60 FUN_14687ab60 body=452 status=ok
// SIG undefined FUN_14687ab60(void)

longlong * FUN_14687ab60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 1;
  local_a8 = *param_1;
  uStack_60 = param_1[1];
  local_98 = (longlong *)param_1[2];
  uStack_50 = param_1[3];
  local_48 = param_1[4];
  lStack_40 = param_1[5];
  local_38 = param_1[6];
  uStack_30 = param_1[7];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[6] = CONCAT44(uStack_74,local_78);
  param_1[7] = CONCAT44(uStack_6c,uStack_70);
  param_1[4] = (longlong)&PTR_LAB_149e65e70;
  param_1[5] = (longlong)param_1;
  param_1[2] = 0;
  param_1[3] = CONCAT44(uStack_8c,uStack_90);
  *param_1 = (longlong)&LAB_14687f41c;
  param_1[1] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = lVar1;
  uStack_50 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687ad26 FUN_14687ad26 body=540 status=ok
// SIG undefined FUN_14687ad26(void)

void FUN_14687ad26(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14687af42(param_1 + 8);
  }
  FUN_14687afa0(param_1 + 0x410);
  FUN_14687ec9f(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408));
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FUN_1400020a8();
  }
  FUN_146884948(param_1 + 0x3a0);
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x358));
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x308);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e0));
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  FUN_14687f4fe(param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x220);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  FUN_14687afd8(param_1 + 0x1a8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_14687f4fe(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_14687f4fe(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14687af42 FUN_14687af42 body=94 status=ok
// SIG undefined FUN_14687af42(void)

void FUN_14687af42(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_14018802a(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14018802a(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_14018802a(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_14018802a(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14687afa0 FUN_14687afa0 body=56 status=ok
// SIG undefined FUN_14687afa0(void)

void FUN_14687afa0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14687f470(param_1);
  return;
}



// FUNCTION 14687afd8 FUN_14687afd8 body=53 status=ok
// SIG undefined FUN_14687afd8(void)

void FUN_14687afd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_146884387(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14687b012 FUN_14687b012 body=744 status=ok
// SIG undefined FUN_14687b012(void)

void FUN_14687b012(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_144a61b4f();
  if (cVar2 != '\0') {
    LOCK();
    DAT_14c948734 = DAT_14c948734 + 1;
    UNLOCK();
  }
  if (DAT_14c872ba8 == '\x01') {
    while ((lVar1 = *(longlong *)(param_1 + 0x470), *(int *)(lVar1 + 0xa0) != *(int *)(lVar1 + 0xcc)
           || (*(int *)(lVar1 + 0xf0) != *(int *)(lVar1 + 0x11c)))) {
      FUN_146879a1a(lVar1,0x41200000);
      FUN_14687972a(*(undefined8 *)(param_1 + 0x470));
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar1 = param_1 + 0x3a0;
  local_50 = *(undefined8 *)(param_1 + 0x120);
  local_48 = *(undefined4 *)(param_1 + 0x128);
  FUN_14687b670(lVar1);
  local_60 = *(undefined8 *)(param_1 + 0x2d0);
  local_58 = *(undefined4 *)(param_1 + 0x2d8);
  FUN_14687b670(lVar1);
  local_70 = *(undefined8 *)(param_1 + 0x270);
  local_68 = *(undefined4 *)(param_1 + 0x278);
  FUN_14687b670(lVar1);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (*(int *)(param_1 + 0x2dc) < 0) {
    FUN_146885922(param_1 + 0x2d0);
  }
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(int *)(param_1 + 0x27c) < 0) {
    FUN_146885922(param_1 + 0x270);
  }
  FUN_146884660(param_1 + 0x280);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  local_80 = *(undefined8 *)(param_1 + 0x88);
  local_78 = *(undefined4 *)(param_1 + 0x90);
  FUN_14687b670(lVar1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) < 0) {
    FUN_146885922(param_1 + 0x88);
  }
  FUN_146884660(param_1 + 0x98);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  local_90 = *(undefined8 *)(param_1 + 0x110);
  local_88 = *(undefined4 *)(param_1 + 0x118);
  FUN_14687b670(lVar1);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) < 0) {
    FUN_146885922(param_1 + 0x110);
  }
  FUN_146884660(param_1 + 0x130);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  LOCK();
  *(undefined4 *)(param_1 + 900) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x380) = 0;
  UNLOCK();
  FUN_14687ec9f(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408));
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_146885060(param_1 + 0x400);
  }
  FUN_14687b734(param_1 + 0x410);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x358));
  FUN_14068ded2(param_1 + 0x308,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x358));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  if (cVar2 != '\0') {
    LOCK();
    DAT_14c948734 = DAT_14c948734 + -1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14687b302 FUN_14687b302 body=141 status=ok
// SIG undefined FUN_14687b302(void)

void FUN_14687b302(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(undefined4 *)(param_1 + 0x78) = 1;
  UNLOCK();
  if (DAT_14c948774 == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
              (*(longlong **)(param_1 + 0x28),0xffffffff,0);
  }
  else {
    if (DAT_14c948aa0 != (longlong *)0x0) {
      local_20 = 0;
      local_18 = 0;
      (**(code **)(*DAT_14c948aa0 + 0x60))();
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x78) = 0;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14687b390(param_1 + -8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687b390 FUN_14687b390 body=735 status=ok
// SIG undefined FUN_14687b390(void)

void FUN_14687b390(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  LPCRITICAL_SECTION local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (LPCRITICAL_SECTION)(param_1 + 0x58);
  EnterCriticalSection(local_98);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  iVar6 = *(int *)(param_1 + 0x398);
  if ((longlong)iVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x390);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar7);
      plVar1 = *(longlong **)(lVar4 + 0x18);
      if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
         (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,lVar4 + 4,0,2);
      }
      if (lVar4 != 0) {
        FUN_14687724c(lVar4);
        FUN_1400020a8(lVar4);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar6 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_146880dc6(param_1 + 0x390,0);
  }
  plVar1 = (longlong *)(param_1 + 0x3a0);
  lVar2 = param_1 + 0x3b0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x3c8) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x3c8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (local_60 != lVar2)) {
    do {
      FUN_14687b774(*(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x10));
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != lVar2 || iStack_74 != iVar6));
    iVar6 = *(int *)(param_1 + 0x3c8);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = lVar2;
  if (iVar6 != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x3c8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar2)) {
    do {
      puVar3 = *(undefined8 **)(*local_90 + (longlong)iStack_74 * 0x10);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != lVar2 || iStack_74 != iVar5));
  }
  FUN_14687bbca(plVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  LeaveCriticalSection(local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14687b670 FUN_14687b670 body=193 status=ok
// SIG undefined FUN_14687b670(void)

void FUN_14687b670(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1468849d6(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_146884b74(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_146884d52(param_1,local_2c,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687b734 FUN_14687b734 body=63 status=ok
// SIG undefined FUN_14687b734(void)

void FUN_14687b734(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14687f4a4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1468811b8(param_1);
    return;
  }
  FUN_146885090(param_1);
  FUN_14687f4a4(param_1);
  return;
}



// FUNCTION 14687b774 FUN_14687b774 body=1108 status=ok
// SIG undefined FUN_14687b774(void)

void FUN_14687b774(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_a8;
  code *local_a0;
  longlong **local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x10f) = 1;
  FUN_14687a8b6(param_1,1,2);
  iVar9 = 0;
  FUN_14687a8b6(param_1,0,2);
  plVar2 = (longlong *)(param_1 + 0x340);
  lVar3 = param_1 + 0x350;
  local_a0 = (code *)&DAT_100000000;
  uStack_90 = 0xffffffff;
  iStack_8c = 0;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  local_a8 = param_1;
  local_98 = (longlong **)lVar3;
  if (*(int *)(param_1 + 0x368) != 0) {
    FUN_1449c0562(&local_a0);
    iVar9 = *(int *)(local_a8 + 0x368);
  }
  local_58 = uStack_90;
  iStack_54 = iStack_8c;
  local_50 = (undefined4)local_88;
  local_4c = local_88._4_4_;
  local_68 = local_a0;
  local_60 = (longlong)local_98;
  local_70 = plVar2;
  if ((iStack_8c != iVar9) || (local_98 != (longlong **)lVar3)) {
    do {
      lVar5 = *local_70;
      lVar7 = (longlong)iStack_54 * 0x38;
      local_a0 = *(code **)(lVar5 + lVar7);
      local_88 = *(longlong *)(lVar5 + 0x18 + lVar7);
      plVar4 = (longlong *)(lVar5 + 8 + lVar7);
      local_98 = (longlong **)*plVar4;
      uStack_90 = *(uint *)(plVar4 + 1);
      iStack_8c = *(int *)((longlong)plVar4 + 0xc);
      local_80 = (void *)0x0;
      local_78 = *(int *)(lVar5 + 0x28 + lVar7);
      lVar10 = (longlong)local_78;
      _Src = *(void **)(lVar5 + 0x20 + lVar7);
      if (lVar10 == 0) {
        local_74 = 0;
      }
      else {
        FUN_144a06ca8(&local_80,local_78,0);
        memcpy(local_80,_Src,lVar10 << 2);
      }
      if (local_a0 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_a0)(local_a0,1);
      }
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar2 || (local_60 != lVar3 || iStack_54 != iVar9));
  }
  FUN_146885996(plVar2);
  lVar3 = local_a8;
  FUN_146885b1a(local_a8 + 0x390);
  FUN_14687964c(lVar3 + 0x490);
  FUN_14687964c(lVar3 + 0x4e0);
  FUN_14687964c(lVar3 + 0x530);
  *(undefined4 *)(lVar3 + 0x588) = 0;
  if (*(int *)(lVar3 + 0x58c) != 0) {
    FUN_146882584(lVar3 + 0x580);
  }
  *(undefined8 *)(lVar3 + 0x5f0) = 0;
  FUN_1468776a2(lVar3 + 0x5a0);
  local_98 = &local_70;
  local_a0 = FUN_141073f72;
  lVar5 = FUN_144a773aa(&local_a0,&DAT_14c75ec34);
  lVar5 = *(longlong *)(lVar5 + 0x58);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0)) {
    FUN_14687d392(lVar3 + 0x160,lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (*(int *)(lVar5 + 0x1c) < 0) {
      FUN_14079e7a6(lVar5 + 0x10,0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x250));
  FUN_14687d46c(lVar3 + 0x200);
  FUN_14687d5ba(lVar3 + 0x160);
  FUN_14687d5ba(lVar3 + 0x150);
  FUN_14687c82e(lVar3);
  *(undefined4 *)(lVar3 + 0x168) = 0;
  if (*(int *)(lVar3 + 0x16c) != 0) {
    FUN_140c6998c(lVar3 + 0x160,0);
  }
  *(undefined4 *)(lVar3 + 0x158) = 0;
  if (*(int *)(lVar3 + 0x15c) != 0) {
    FUN_140c6998c(lVar3 + 0x150,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x250));
  if (*(longlong *)(lVar3 + 0x58) != 0) {
    if ((*(longlong *)(lVar3 + 0x50) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x50) + 0x328), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x1e0))();
    }
    if (*(char *)(lVar3 + 0x112) == '\x01') {
      FUN_14472eae2(*(undefined8 *)(lVar3 + 0x58),0x80000);
      pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x58) + 0x28);
      *pbVar1 = *pbVar1 & 0xfd;
      plVar2 = *(longlong **)(lVar3 + 0x58);
      uVar6 = FUN_144a7a812();
      local_b8 = 0;
      FUN_140af9fb2(&local_70,DAT_14c951640,uVar6,0);
      FUN_1400021e4(&local_70,&local_a0);
      pcVar8 = local_a0;
      if ((int)local_98 == 0) {
        pcVar8 = (code *)&DAT_149dfb77a;
      }
      (**(code **)(*plVar2 + 0x170))(plVar2,pcVar8,0,0x34);
      if (local_a0 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1427c0924(lVar3);
  }
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  *(undefined4 *)(lVar3 + 0xf0) = 0;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14687bbca FUN_14687bbca body=63 status=ok
// SIG undefined FUN_14687bbca(void)

void FUN_14687bbca(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14688497c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146884b74(param_1);
    return;
  }
  FUN_1468851d4(param_1);
  FUN_14688497c(param_1);
  return;
}



// FUNCTION 14687bc0a FUN_14687bc0a body=665 status=ok
// SIG undefined FUN_14687bc0a(void)

float FUN_14687bc0a(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2d8);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x2b0;
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x2b8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x2c0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if ((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) {
            fVar7 = *(float *)(plVar1[1] + 0x138);
            LeaveCriticalSection(lpCriticalSection);
            if (fVar7 < 0.0) goto LAB_14687bc4b;
            goto LAB_14687bc76;
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  fVar7 = -1.0;
LAB_14687bc4b:
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xd8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if ((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) {
            fVar7 = *(float *)(plVar1[1] + 0x138);
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
LAB_14687bc76:
  if ((fVar7 < 0.0) && (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c))) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x168);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x170) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return fVar7;
          }
          if (plVar1[1] == 0) {
            return fVar7;
          }
          return *(float *)(plVar1[1] + 0x138);
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return fVar7;
}



// FUNCTION 14687bea4 FUN_14687bea4 body=232 status=ok
// SIG undefined FUN_14687bea4(void)

void FUN_14687bea4(undefined8 param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_39;
  local_38 = FUN_141073f72;
  lVar2 = FUN_144a773aa(&local_38,&DAT_14c75ec34);
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (lVar3 != 0) {
    if (param_3 == '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x8400000);
      lVar3 = *(longlong *)(lVar2 + 0x40);
    }
    FUN_146878962(lVar3,param_2);
    if (DAT_14c872ba8 == '\x01') {
      lVar2 = FUN_144a79778(param_2);
      if ((lVar2 == *(longlong *)(lVar3 + 0x58)) && ((byte)(*(char *)(lVar3 + 0x2d8) - 2U) < 5)) {
        FUN_1427bd64e(lVar3,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14687bf98 FUN_14687bf98 body=1175 status=ok
// SIG undefined FUN_14687bf98(void)

void FUN_14687bf98(longlong *param_1,wchar_t *param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined1 param_7)

{
  uint uVar1;
  size_t sVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_2e8 [32];
  int local_2c8;
  undefined2 *local_2c0;
  int local_2b0;
  int iStack_2ac;
  undefined8 local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  longlong *local_280;
  int *local_278;
  undefined1 local_26c [4];
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_288 = param_3;
  if (((char)param_1[0x1f] == '\x01') && (DAT_14c75b114 == '\x01')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9488e8) && (FUN_144b3d300(&DAT_14c9488e8), DAT_14c9488e8 == -1)) {
      FUN_1446f470e(&DAT_14c9488e0,L"/Script/CoreUObject",1);
      _Init_thread_footer(&DAT_14c9488e8);
    }
    FUN_1446f470e(&local_290,param_2,1);
    if ((param_4 != 5) && (local_290 != DAT_14c9488e0)) {
      local_268 = local_248;
      local_250 = '\0';
      local_258 = &local_48;
      sVar2 = 0;
      local_260 = local_268;
      if (param_2 != (wchar_t *)0x0) {
        sVar2 = wcslen(param_2);
      }
      FUN_1449668a2(&local_268,param_2,sVar2);
      FUN_14687f58c(&local_268,&local_288);
      FUN_1446f82e2(&local_298,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1,local_268
                    ,1);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
      if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
        plVar8 = (longlong *)0x0;
      }
      else {
        uVar1 = (uint)((ulonglong)local_290 >> 0x10);
        uVar4 = (uint)local_290 & 0xffff;
        plVar3 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar3 = (longlong *)param_1[8];
        }
        uVar5 = (int)param_1[9] - 1;
        iVar6 = *(int *)((longlong)plVar3 +
                        (ulonglong)
                        ((int)((ulonglong)local_290 >> 0x20) + ((uint)local_290 << 0x10 | uVar4) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
        if (iVar6 == -1) {
          plVar8 = (longlong *)0x0;
        }
        else {
          do {
            plVar7 = (longlong *)(*param_1 + (longlong)iVar6 * 0x28);
            if (*plVar7 == local_290) goto LAB_14687c166;
            iVar6 = (int)plVar7[4];
          } while (iVar6 != -1);
          plVar7 = (longlong *)0x0;
LAB_14687c166:
          plVar8 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
        }
        uVar1 = (uint)((ulonglong)local_298 >> 0x10);
        uVar4 = (uint)local_298 & 0xffff;
        iVar6 = *(int *)((longlong)plVar3 +
                        (ulonglong)
                        ((int)((ulonglong)local_298 >> 0x20) + ((uint)local_298 << 0x10 | uVar4) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
        if (iVar6 != -1) {
          do {
            plVar3 = (longlong *)(*param_1 + (longlong)iVar6 * 0x28);
            if (*plVar3 == local_298) {
              if ((plVar3 != (longlong *)0x0) && (plVar7 = plVar3 + 1, plVar7 != (longlong *)0x0)) {
                if ((param_5 <= *(int *)((longlong)plVar3 + 0xc)) && (DAT_14c872ba8 == '\x01')) {
                  FUN_1400021e4(&local_298,&local_2b0);
                  if ((int)local_2a8 == 0) {
                    local_2c0 = &DAT_149dfb77a;
                  }
                  else {
                    local_2c0 = (undefined2 *)CONCAT44(iStack_2ac,local_2b0);
                  }
                  local_2c8 = param_5;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xe0
                                ,
                                L"Invalid state transition %d %d with %s when it has already been processed."
                                ,*(undefined4 *)((longlong)plVar3 + 0xc));
                  if (CONCAT44(iStack_2ac,local_2b0) != 0) {
                    FUN_1400020a8();
                  }
                }
                if (((int)*plVar7 != param_4) && (DAT_14c872ba8 == '\x01')) {
                  FUN_1400021e4(&local_298,&local_2b0);
                  if ((int)local_2a8 == 0) {
                    local_2c0 = &DAT_149dfb77a;
                  }
                  else {
                    local_2c0 = (undefined2 *)CONCAT44(iStack_2ac,local_2b0);
                  }
                  local_2c8 = param_4;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xe4
                                ,L"Multiple types %d %d with %s when it has already been processed."
                                ,(int)*plVar7);
                  if (CONCAT44(iStack_2ac,local_2b0) != 0) {
                    FUN_1400020a8();
                  }
                }
                *(int *)((longlong)plVar3 + 0xc) = param_5;
                if (param_5 == 2) {
                  plVar3[2] = 0;
                  iVar6 = (int)param_1[0x15];
                  *(uint *)(param_1 + 0x15) = iVar6 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xac) < iVar6 + 1U) {
                    FUN_1446f84a2(param_1 + 0x14,iVar6);
                  }
                  *(longlong *)(param_1[0x14] + (longlong)iVar6 * 8) = local_298;
                }
                if (((plVar8 != (longlong *)0x0) && (*(int *)((longlong)plVar8 + 4) < param_5)) &&
                   (*(int *)((longlong)plVar8 + 4) = param_5, param_5 == 2)) {
                  iVar6 = (int)param_1[0x15];
                  *(uint *)(param_1 + 0x15) = iVar6 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xac) < iVar6 + 1U) {
                    FUN_1446f84a2(param_1 + 0x14,iVar6);
                  }
                  *(longlong *)(param_1[0x14] + (longlong)iVar6 * 8) = local_290;
                }
                goto LAB_14687c3bc;
              }
              break;
            }
            iVar6 = (int)plVar3[4];
          } while (iVar6 != -1);
        }
      }
      iStack_2ac = param_5;
      local_2a8 = param_6;
      local_2a0 = param_7;
      local_2b0 = param_4;
      local_280 = &local_298;
      local_278 = &local_2b0;
      FUN_14687f658(param_1,local_26c);
      if (plVar8 == (longlong *)0x0) {
        local_2b0 = 4;
        local_280 = &local_290;
        local_278 = &local_2b0;
        FUN_14687f658(param_1,local_26c);
      }
LAB_14687c3bc:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
      if (local_250 == '\x01') {
        FUN_1400020a8(local_268);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14687c43a FUN_14687c43a body=89 status=ok
// SIG undefined FUN_14687c43a(void)

void FUN_14687c43a(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  lVar1 = *(longlong *)(param_2 + 0xe);
  *(longlong *)(param_1 + 0xe) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14687c494 FUN_14687c494 body=922 status=ok
// SIG undefined FUN_14687c494(void)

void FUN_14687c494(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e650e0;
  FUN_14687a94a();
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 0x328) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x328) + 0x1e0))();
      lVar1 = param_1[10];
    }
    if (*(undefined8 **)(lVar1 + 0x398) == param_1) {
      *(undefined8 *)(lVar1 + 0x398) = 0;
    }
    param_1[10] = 0;
  }
  if (DAT_14c872ba8 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
    FUN_14687968c(param_1);
  }
  FUN_14687c82e(param_1);
  lVar1 = 0x5d0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x588);
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  FUN_146881e62(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  FUN_146881e62(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_146881e62(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x91) = 0;
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  FUN_14687fcf2(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x7e);
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_14687fd80(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_14687fe0e(param_1 + 0x68);
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_146885354(param_1 + 0x51);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x35);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14687f4fe(param_1 + 0xe);
  FUN_146885317(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14687724c(param_1 + 2);
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}


