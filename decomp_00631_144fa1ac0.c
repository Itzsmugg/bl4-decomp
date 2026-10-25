// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144fa1ac0 FUN_144fa1ac0 body=388 status=ok
// SIG undefined FUN_144fa1ac0(void)

void FUN_144fa1ac0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 6 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 6;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa1c90 FUN_144fa1c90 body=399 status=ok
// SIG undefined FUN_144fa1c90(void)

void FUN_144fa1c90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 * 0x30;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] * 0x30);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa1e20 FUN_144fa1e20 body=95 status=ok
// SIG undefined FUN_144fa1e20(void)

void FUN_144fa1e20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa1e80 FUN_144fa1e80 body=396 status=ok
// SIG undefined FUN_144fa1e80(void)

void FUN_144fa1e80(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 * 0x30 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 * 0x30;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa2020 FUN_144fa2020 body=188 status=ok
// SIG undefined FUN_144fa2020(void)

undefined8 * FUN_144fa2020(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x16] != 0) {
    FUN_144f50cd0();
  }
  if (param_1[0x14] != 0) {
    FUN_144f50cd0();
  }
  if (param_1[0x12] != 0) {
    FUN_144f50cd0();
  }
  if (param_1[0x10] != 0) {
    FUN_144f50cd0();
  }
  if (param_1[0xe] != 0) {
    FUN_144f50cd0();
  }
  if (param_1[0xc] != 0) {
    FUN_144f50cd0();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 144fa2110 FUN_144fa2110 body=390 status=ok
// SIG undefined FUN_144fa2110(void)

void FUN_144fa2110(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 5;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 5);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa22a0 FUN_144fa22a0 body=95 status=ok
// SIG undefined FUN_144fa22a0(void)

void FUN_144fa22a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa2370 FUN_144fa2370 body=388 status=ok
// SIG undefined FUN_144fa2370(void)

void FUN_144fa2370(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 5 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 5;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa2500 FUN_144fa2500 body=523 status=ok
// SIG undefined FUN_144fa2500(void)

void FUN_144fa2500(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar13 = (uint *)(param_1 + 0x34);
    lVar15 = (longlong)param_4;
    do {
      if (puVar13 + -0xd != (uint *)0x0) {
        puVar13[-9] = 1;
        puVar13[-8] = 0;
        puVar13[-7] = 0;
        puVar13[-6] = 0;
        puVar13[-5] = 0;
        puVar13[-4] = 0x80000000;
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0x80000000;
        puVar13[-0xb] = 0xffffffff;
        puVar13[-10] = 0;
        *(undefined ***)(puVar13 + -0xd) = hkcdPlanarSolid::NodeStorage::vftable;
        puVar13[1] = *(uint *)(param_2 + 4 + (longlong)puVar13);
        lVar10 = (longlong)*(int *)(param_2 + -0x14 + (longlong)puVar13);
        puVar11 = *(undefined8 **)(param_2 + -0x1c + (longlong)puVar13);
        puVar1 = puVar11 + lVar10 * 5;
        uVar3 = (uint)((lVar10 * 0x28) / 0x28);
        if (0 < (int)uVar3) {
          FUN_144fa8e40(puVar13 + -7,&PTR_vftable_14c6e47a0);
        }
        puVar8 = *(undefined8 **)(puVar13 + -7);
        for (; puVar11 != puVar1; puVar11 = puVar11 + 5) {
          if (puVar8 != (undefined8 *)0x0) {
            uVar7 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar7;
            uVar7 = puVar11[3];
            puVar8[2] = puVar11[2];
            puVar8[3] = uVar7;
            puVar8[4] = puVar11[4];
          }
          puVar8 = puVar8 + 5;
        }
        puVar13[-5] = uVar3;
        iVar2 = *(int *)((longlong)puVar13 + param_2 + -4);
        uVar3 = puVar13[-1];
        puVar12 = *(undefined4 **)((longlong)puVar13 + param_2 + -0xc);
        puVar14 = puVar12 + (longlong)iVar2 * 8;
        uVar16 = uVar3 + iVar2;
        if ((int)(*puVar13 & 0x7fffffff) < (int)uVar16) {
          FUN_141807cf8(puVar13 + -3,&PTR_vftable_14c6e47a0);
        }
        puVar9 = (undefined4 *)((longlong)(int)uVar3 * 0x20 + *(longlong *)(puVar13 + -3));
        for (; puVar12 != puVar14; puVar12 = puVar12 + 8) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar9 = *puVar12;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            uVar7 = *(undefined8 *)(puVar12 + 6);
            *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar12 + 4);
            *(undefined8 *)(puVar9 + 6) = uVar7;
          }
          puVar9 = puVar9 + 8;
        }
        puVar13[-1] = uVar16;
      }
      puVar13 = puVar13 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 144fa2710 FUN_144fa2710 body=77 status=ok
// SIG undefined FUN_144fa2710(void)

void FUN_144fa2710(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x40 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -8;
      plVar2 = plVar2 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa2770 FUN_144fa2770 body=470 status=ok
// SIG undefined FUN_144fa2770(void)

void FUN_144fa2770(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar12 = (uint *)(param_1 + 0x34);
    lVar14 = (longlong)param_4;
    do {
      puVar7 = (uint *)(param_2 + -0x1c + (longlong)puVar12);
      puVar1 = puVar12 + -7;
      if (puVar7 != puVar1) {
        puVar13 = *(undefined8 **)puVar7;
        uVar4 = *(uint *)(param_2 + -0x14 + (longlong)puVar12);
        if ((int)(puVar12[-4] & 0x7fffffff) < (int)uVar4) {
          FUN_144fa9780(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        puVar8 = *(undefined8 **)puVar1;
        uVar6 = uVar4;
        if ((int)puVar12[-5] < (int)uVar4) {
          uVar6 = puVar12[-5];
        }
        if ((puVar8 != puVar13) && (lVar9 = (longlong)(int)uVar6, 0 < (int)uVar6)) {
          lVar11 = (longlong)puVar13 - (longlong)puVar8;
          do {
            uVar5 = ((undefined8 *)(lVar11 + (longlong)puVar8))[1];
            puVar2 = puVar8 + 5;
            *puVar8 = *(undefined8 *)(lVar11 + (longlong)puVar8);
            puVar8[1] = uVar5;
            puVar3 = (undefined8 *)(lVar11 + -0x18 + (longlong)puVar2);
            uVar5 = puVar3[1];
            puVar8[2] = *puVar3;
            puVar8[3] = uVar5;
            puVar8[4] = *(undefined8 *)(lVar11 + -8 + (longlong)puVar2);
            lVar9 = lVar9 + -1;
            puVar8 = puVar2;
          } while (lVar9 != 0);
        }
        puVar13 = puVar13 + (longlong)(int)uVar6 * 5;
        if (0 < (int)(uVar4 - uVar6)) {
          uVar10 = (ulonglong)(uVar4 - uVar6);
          puVar8 = (undefined8 *)(*(longlong *)puVar1 + (longlong)(int)uVar6 * 0x28);
          do {
            if (puVar8 != (undefined8 *)0x0) {
              uVar5 = puVar13[1];
              *puVar8 = *puVar13;
              puVar8[1] = uVar5;
              uVar5 = puVar13[3];
              puVar8[2] = puVar13[2];
              puVar8[3] = uVar5;
              puVar2 = puVar13 + 4;
              puVar13 = puVar13 + 5;
              puVar8[4] = *puVar2;
            }
            uVar10 = uVar10 - 1;
            puVar8 = puVar8 + 5;
          } while (uVar10 != 0);
        }
        puVar12[-5] = uVar4;
      }
      puVar7 = (uint *)((longlong)puVar12 + param_2 + -0xc);
      puVar1 = puVar12 + -3;
      if (puVar7 != puVar1) {
        uVar5 = *(undefined8 *)puVar7;
        uVar4 = *(uint *)(param_2 + -4 + (longlong)puVar12);
        if ((int)(*puVar12 & 0x7fffffff) < (int)uVar4) {
          FUN_144c9b7d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar5,(longlong)(int)uVar4 << 5);
        puVar12[-1] = uVar4;
      }
      puVar12[1] = *(uint *)(param_2 + 4 + (longlong)puVar12);
      puVar12 = puVar12 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 144fa2980 FUN_144fa2980 body=390 status=ok
// SIG undefined FUN_144fa2980(void)

void FUN_144fa2980(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 5;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 5);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa2b10 FUN_144fa2b10 body=95 status=ok
// SIG undefined FUN_144fa2b10(void)

void FUN_144fa2b10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa2b70 FUN_144fa2b70 body=388 status=ok
// SIG undefined FUN_144fa2b70(void)

void FUN_144fa2b70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 5 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 5;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa2dd0 FUN_144fa2dd0 body=18 status=ok
// SIG undefined FUN_144fa2dd0(void)

undefined8 * FUN_144fa2dd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72bab0;
  return param_2;
}



// FUNCTION 144fa2df0 FUN_144fa2df0 body=390 status=ok
// SIG undefined FUN_144fa2df0(void)

void FUN_144fa2df0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 3;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 3);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa2f90 FUN_144fa2f90 body=95 status=ok
// SIG undefined FUN_144fa2f90(void)

void FUN_144fa2f90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa2ff0 FUN_144fa2ff0 body=388 status=ok
// SIG undefined FUN_144fa2ff0(void)

void FUN_144fa2ff0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 3 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 3;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa3180 FUN_144fa3180 body=159 status=ok
// SIG undefined FUN_144fa3180(void)

undefined8 * FUN_144fa3180(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 2);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd98);
  }
  return param_1;
}



// FUNCTION 144fa32b0 FUN_144fa32b0 body=390 status=ok
// SIG undefined FUN_144fa32b0(void)

void FUN_144fa32b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 2;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 2);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa3450 FUN_144fa3450 body=95 status=ok
// SIG undefined FUN_144fa3450(void)

void FUN_144fa3450(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa34b0 FUN_144fa34b0 body=388 status=ok
// SIG undefined FUN_144fa34b0(void)

void FUN_144fa34b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 2;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa3680 FUN_144fa3680 body=390 status=ok
// SIG undefined FUN_144fa3680(void)

void FUN_144fa3680(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 3;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 3);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa3860 FUN_144fa3860 body=95 status=ok
// SIG undefined FUN_144fa3860(void)

void FUN_144fa3860(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa38c0 FUN_144fa38c0 body=141 status=ok
// SIG undefined FUN_144fa38c0(void)

void FUN_144fa38c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkcdPlanarEntity::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa3950 FUN_144fa3950 body=388 status=ok
// SIG undefined FUN_144fa3950(void)

void FUN_144fa3950(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 3 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 3;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa3ae0 FUN_144fa3ae0 body=77 status=ok
// SIG undefined FUN_144fa3ae0(void)

void FUN_144fa3ae0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa3b30 FUN_144fa3b30 body=98 status=ok
// SIG undefined FUN_144fa3b30(void)

void FUN_144fa3b30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      lVar1 = *(longlong *)((param_2 - param_1) + (longlong)plVar2);
      if (*plVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)((param_2 - param_1) + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2 = plVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa3be0 FUN_144fa3be0 body=386 status=ok
// SIG undefined FUN_144fa3be0(void)

void FUN_144fa3be0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar6 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar5 = *plVar1;
        lVar2 = (longlong)plVar1 + lVar5;
        iVar7 = ((int)plVar1 - (int)lVar2) + (int)lVar5;
        if (lVar5 == 0) {
          iVar7 = 0;
        }
        iVar7 = iVar7 + *(int *)((longlong)param_1 + param_2 + 8);
        if (((lVar5 != 0) && (lVar2 != 0)) && (0 < iVar7)) {
          uVar4 = iVar7 - 1U | (int)(iVar7 - 1U) >> 0x10;
          uVar4 = uVar4 | (int)uVar4 >> 8;
          uVar4 = uVar4 | (int)uVar4 >> 4;
          uVar4 = uVar4 | (int)uVar4 >> 2;
          uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
          if ((int)uVar4 < iVar7) {
            FUN_144bfc170(0x5d9e6698,
                          "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                          ,0x1f0,"Capacity reservation overflow");
          }
          local_38[0] = (longlong)(int)uVar4;
          lVar3 = (*DAT_14c787670)(0,local_38,0);
          lVar5 = *param_1 + (longlong)param_1;
          if (*param_1 == 0) {
            lVar5 = lVar8;
          }
          FUN_144b3d470(lVar3,lVar5,(longlong)(int)param_1[1]);
          if (*(int *)((longlong)param_1 + 0xc) < 0) {
            lVar5 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar5 = lVar8;
            }
            (*DAT_14c787678)(0,lVar5,0);
          }
          *(int *)(param_1 + 1) = iVar7;
          lVar5 = lVar8;
          if (lVar3 != 0) {
            lVar5 = lVar3 - (longlong)param_1;
          }
          *param_1 = lVar5;
          *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
          FUN_144b3d470(lVar5 + (longlong)param_1,lVar2);
        }
      }
      param_1 = param_1 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144fa3d70 FUN_144fa3d70 body=95 status=ok
// SIG undefined FUN_144fa3d70(void)

void FUN_144fa3d70(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa3dd0 FUN_144fa3dd0 body=380 status=ok
// SIG undefined FUN_144fa3dd0(void)

void FUN_144fa3dd0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar9 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar10 = (longlong)param_4;
    do {
      puVar11 = (uint *)(param_1 + -8 + (longlong)puVar9);
      puVar1 = puVar9 + -2;
      if (puVar1 != puVar11) {
        lVar8 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar8 = lVar12;
        }
        uVar7 = *puVar9;
        if ((int)*puVar9 < (int)(puVar9[1] & 0x7fffffff)) {
          uVar7 = puVar9[1] & 0x7fffffff;
        }
        if ((lVar8 == 0) || (uVar7 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar9) < 0) {
            lVar8 = *(longlong *)puVar11 + (longlong)puVar11;
            if (*(longlong *)puVar11 == 0) {
              lVar8 = lVar12;
            }
            (*DAT_14c787678)(0,lVar8,0);
          }
          puVar11[0] = 0;
          puVar11[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar9) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar11;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar9);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar11;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar9);
          if ((int)*(uint *)(param_1 + (longlong)puVar9) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar7 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar11;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar7;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar8);
          lVar8 = lVar6 - (longlong)puVar11;
          if (lVar6 == 0) {
            lVar8 = lVar12;
          }
          *(longlong *)puVar11 = lVar8;
          *(uint *)(param_1 + (longlong)puVar9) = *puVar9;
          uVar7 = *puVar9;
          if ((int)*puVar9 < (int)(puVar9[1] & 0x7fffffff)) {
            uVar7 = puVar9[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar9) = uVar7 | 0x80000000;
        }
      }
      puVar9 = puVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144fa3fe0 FUN_144fa3fe0 body=390 status=ok
// SIG undefined FUN_144fa3fe0(void)

void FUN_144fa3fe0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 2;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 2);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa4170 FUN_144fa4170 body=95 status=ok
// SIG undefined FUN_144fa4170(void)

void FUN_144fa4170(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa41d0 FUN_144fa41d0 body=388 status=ok
// SIG undefined FUN_144fa41d0(void)

void FUN_144fa41d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 2;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa43b0 FUN_144fa43b0 body=850 status=ok
// SIG undefined FUN_144fa43b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fa43b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar6 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar2 = (longlong *)(param_2 + (longlong)param_1);
        *param_1 = 0;
        param_1[1] = 0;
        lVar9 = *plVar2;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(param_2 + 8 + (longlong)param_1);
          lVar12 = (longlong)(int)uVar1;
          lVar9 = lVar9 + (longlong)plVar2;
          if ((lVar9 != 0) && (0 < (int)uVar1)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar4 = uVar1 - 1 | (int)(uVar1 - 1) >> 0x10;
            uVar4 = uVar4 | (int)uVar4 >> 8;
            uVar4 = uVar4 | (int)uVar4 >> 4;
            uVar4 = uVar4 | (int)uVar4 >> 2;
            uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
            if ((int)uVar4 < (int)uVar1) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar4 * 0x60;
            lVar3 = (*DAT_14c787670)(0,local_38,0);
            lVar5 = *param_1;
            lVar10 = lVar5 + (longlong)param_1;
            if (lVar5 == 0) {
              lVar10 = 0;
            }
            lVar13 = (longlong)(int)param_1[1];
            if (0 < lVar13) {
              puVar8 = (undefined4 *)(lVar3 + 0x48);
              lVar10 = lVar10 - lVar3;
              do {
                if (puVar8 + -0x12 != (undefined4 *)0x0) {
                  FUN_144fa8130(puVar8 + -0x12,(longlong)puVar8 + lVar10 + -0x48);
                  *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar10);
                  puVar8[1] = *(undefined4 *)(lVar10 + 4 + (longlong)puVar8);
                  puVar8[2] = *(undefined4 *)(lVar10 + 8 + (longlong)puVar8);
                  puVar8[3] = *(undefined4 *)(lVar10 + 0xc + (longlong)puVar8);
                  *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(lVar10 + 0x10 + (longlong)puVar8);
                  *(undefined1 *)((longlong)puVar8 + 0x11) =
                       *(undefined1 *)(lVar10 + 0x11 + (longlong)puVar8);
                  *(undefined1 *)((longlong)puVar8 + 0x12) =
                       *(undefined1 *)(lVar10 + 0x12 + (longlong)puVar8);
                  *(undefined1 *)((longlong)puVar8 + 0x13) =
                       *(undefined1 *)(lVar10 + 0x13 + (longlong)puVar8);
                  *(undefined2 *)(puVar8 + 5) = *(undefined2 *)(lVar10 + 0x14 + (longlong)puVar8);
                  *(undefined1 *)((longlong)puVar8 + 0x16) =
                       *(undefined1 *)(lVar10 + 0x16 + (longlong)puVar8);
                  *(undefined1 *)((longlong)puVar8 + 0x17) =
                       *(undefined1 *)(lVar10 + 0x17 + (longlong)puVar8);
                  FUN_144bfbed0(puVar8 + -6,(longlong)puVar8 + lVar10 + -0x18,0x18);
                }
                puVar8 = puVar8 + 0x18;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              lVar5 = *param_1;
            }
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)param_1 + lVar5;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            *(uint *)(param_1 + 1) = uVar1;
            uVar11 = (ulonglong)uVar1;
            lVar5 = 0;
            if (lVar3 != 0) {
              lVar5 = lVar3 - (longlong)param_1;
            }
            *param_1 = lVar5;
            *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
            puVar7 = (undefined8 *)(lVar5 + (longlong)param_1);
            do {
              if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = 0;
                puVar7[1] = 0;
                uVar15 = uRam000000014c6dae8c;
                uVar14 = uRam000000014c6dae88;
                uVar4 = uRam000000014c6dae84;
                *(uint *)(puVar7 + 2) = _DAT_14c6dae80;
                *(uint *)((longlong)puVar7 + 0x14) = uVar4;
                *(uint *)(puVar7 + 3) = uVar14;
                *(uint *)((longlong)puVar7 + 0x1c) = uVar15;
                uVar4 = uRam000000014c6dae84 ^ 0x80000000;
                uVar14 = uRam000000014c6dae88 ^ 0x80000000;
                uVar15 = uRam000000014c6dae8c ^ 0x80000000;
                *(uint *)(puVar7 + 4) = _DAT_14c6dae80 ^ 0x80000000;
                *(uint *)((longlong)puVar7 + 0x24) = uVar4;
                *(uint *)(puVar7 + 5) = uVar14;
                *(uint *)((longlong)puVar7 + 0x2c) = uVar15;
                puVar7[9] = 0;
                puVar7[10] = 0;
                *(undefined2 *)(puVar7 + 0xb) = 0;
                *(undefined4 *)((longlong)puVar7 + 0x5a) = 0;
                *(undefined2 *)((longlong)puVar7 + 0x5e) = 0;
                FUN_144bfbef0(puVar7 + 6,0,0x18);
              }
              uVar11 = uVar11 - 1;
              puVar7 = puVar7 + 0xc;
            } while (uVar11 != 0);
            if (0 < (int)uVar1) {
              puVar8 = (undefined4 *)(*param_1 + (longlong)param_1 + 0x48);
              lVar9 = lVar9 - (*param_1 + (longlong)param_1);
              do {
                if (puVar8 + -0x12 != (undefined4 *)0x0) {
                  FUN_144fa8130(puVar8 + -0x12,lVar9 + -0x48 + (longlong)puVar8);
                  *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar9);
                  puVar8[1] = *(undefined4 *)((longlong)puVar8 + lVar9 + 4);
                  puVar8[2] = *(undefined4 *)((longlong)puVar8 + lVar9 + 8);
                  puVar8[3] = *(undefined4 *)((longlong)puVar8 + lVar9 + 0xc);
                  *(undefined1 *)(puVar8 + 4) = *(undefined1 *)((longlong)puVar8 + lVar9 + 0x10);
                  *(undefined1 *)((longlong)puVar8 + 0x11) =
                       *(undefined1 *)((longlong)puVar8 + lVar9 + 0x11);
                  *(undefined1 *)((longlong)puVar8 + 0x12) =
                       *(undefined1 *)((longlong)puVar8 + lVar9 + 0x12);
                  *(undefined1 *)((longlong)puVar8 + 0x13) =
                       *(undefined1 *)((longlong)puVar8 + lVar9 + 0x13);
                  *(undefined2 *)(puVar8 + 5) = *(undefined2 *)((longlong)puVar8 + lVar9 + 0x14);
                  *(undefined1 *)((longlong)puVar8 + 0x16) =
                       *(undefined1 *)((longlong)puVar8 + lVar9 + 0x16);
                  *(undefined1 *)((longlong)puVar8 + 0x17) =
                       *(undefined1 *)((longlong)puVar8 + lVar9 + 0x17);
                  FUN_144bfbed0(puVar8 + -6,lVar9 + -0x18 + (longlong)puVar8,0x18);
                }
                puVar8 = puVar8 + 0x18;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
          }
        }
      }
      param_1 = param_1 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144fa4710 FUN_144fa4710 body=209 status=ok
// SIG undefined FUN_144fa4710(void)

void FUN_144fa4710(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar5 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar6 = (longlong *)(lVar5 * 0x10 + param_1);
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(plVar6 + 1);
      lVar3 = *plVar6 + (longlong)plVar6;
      if (*plVar6 == 0) {
        lVar3 = lVar8;
      }
      plVar4 = (longlong *)(lVar3 + (longlong)(int)uVar2 * 0x60);
      if (0 < (int)uVar2) {
        uVar7 = (ulonglong)uVar2;
        do {
          piVar1 = (int *)((longlong)plVar4 + -0x54);
          plVar4 = plVar4 + -0xc;
          if (*piVar1 < 0) {
            lVar3 = *plVar4 + (longlong)plVar4;
            if (*plVar4 == 0) {
              lVar3 = lVar8;
            }
            (*DAT_14c787678)(0,lVar3,0);
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (*(int *)((longlong)plVar6 + 0xc) < 0) {
        lVar3 = *plVar6 + (longlong)plVar6;
        if (*plVar6 == 0) {
          lVar3 = lVar8;
        }
        (*DAT_14c787678)(0,lVar3);
      }
      plVar6 = plVar6 + -2;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}



// FUNCTION 144fa47f0 FUN_144fa47f0 body=814 status=ok
// SIG undefined FUN_144fa47f0(void)

void FUN_144fa47f0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint *puVar16;
  longlong local_40;
  longlong local_38;
  uint *local_30;
  
  if (0 < param_4) {
    lVar5 = param_1 - (longlong)param_2;
    param_1 = (longlong)param_2 - param_1;
    lVar15 = (longlong)param_4;
    do {
      lVar7 = 0;
      plVar2 = (longlong *)(lVar5 + (longlong)param_2);
      if (param_2 != plVar2) {
        puVar16 = (uint *)(lVar5 + 0xc + (longlong)param_2);
        uVar8 = *(uint *)(param_1 + -4 + (longlong)puVar16);
        local_38 = *param_2 + (longlong)param_2;
        if (*param_2 == 0) {
          local_38 = lVar7;
        }
        uVar3 = *(uint *)(param_1 + (longlong)puVar16) & 0x7fffffff;
        if ((int)uVar8 < (int)uVar3) {
          uVar8 = uVar3;
        }
        local_30 = puVar16;
        if ((local_38 == 0) || ((longlong)(int)uVar8 * 0x60 == 0)) {
          uVar8 = puVar16[-1];
          lVar6 = (longlong)plVar2 + *plVar2;
          if (*plVar2 == 0) {
            lVar6 = lVar7;
          }
          plVar10 = (longlong *)(lVar6 + (longlong)(int)uVar8 * 0x60);
          if (0 < (int)uVar8) {
            uVar13 = (ulonglong)uVar8;
            do {
              piVar1 = (int *)((longlong)plVar10 + -0x54);
              plVar10 = plVar10 + -0xc;
              if (*piVar1 < 0) {
                lVar7 = *plVar10 + (longlong)plVar10;
                if (*plVar10 == 0) {
                  lVar7 = 0;
                }
                (*DAT_14c787678)(0,lVar7,0);
              }
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if ((int)*puVar16 < 0) {
            lVar7 = (longlong)plVar2 + *plVar2;
            if (*plVar2 == 0) {
              lVar7 = 0;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          *plVar2 = 0;
          *(undefined4 *)(plVar2 + 1) = 0;
          *puVar16 = 0;
        }
        else {
          uVar3 = puVar16[-1];
          lVar6 = *plVar2 + (longlong)plVar2;
          if (*plVar2 == 0) {
            lVar6 = lVar7;
          }
          plVar10 = (longlong *)((longlong)(int)uVar3 * 0x60 + lVar6);
          if (0 < (int)uVar3) {
            uVar13 = (ulonglong)uVar3;
            do {
              piVar1 = (int *)((longlong)plVar10 + -0x54);
              plVar10 = plVar10 + -0xc;
              if (*piVar1 < 0) {
                lVar7 = *plVar10 + (longlong)plVar10;
                if (*plVar10 == 0) {
                  lVar7 = 0;
                }
                (*DAT_14c787678)(0,lVar7,0);
              }
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          uVar4 = *puVar16 & 0x7fffffff;
          uVar9 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
          uVar3 = *(uint *)(plVar2 + 1);
          if ((int)*(uint *)(plVar2 + 1) < (int)uVar4) {
            uVar3 = uVar4;
          }
          uVar4 = *(uint *)(param_2 + 1);
          if ((int)*(uint *)(param_2 + 1) < (int)uVar9) {
            uVar4 = uVar9;
          }
          if (uVar4 != uVar3) {
            if ((int)*puVar16 < 0) {
              lVar7 = *plVar2 + (longlong)plVar2;
              if (*plVar2 == 0) {
                lVar7 = 0;
              }
              (*DAT_14c787678)(0,lVar7,0);
            }
            local_40 = (longlong)(int)uVar8 * 0x60;
            lVar6 = (*DAT_14c787670)(0,&local_40,0);
          }
          lVar7 = local_38;
          lVar12 = (longlong)(int)param_2[1];
          if (0 < lVar12) {
            puVar14 = (undefined4 *)(lVar6 + 0x4c);
            do {
              if (puVar14 + -0x13 != (undefined4 *)0x0) {
                lVar11 = (-0x4c - lVar6) + lVar7 + (longlong)puVar14;
                FUN_144fa8130(puVar14 + -0x13,lVar11);
                puVar14[-1] = *(undefined4 *)(lVar11 + 0x48);
                *puVar14 = *(undefined4 *)(lVar11 + 0x4c);
                puVar14[1] = *(undefined4 *)(lVar11 + 0x50);
                puVar14[2] = *(undefined4 *)(lVar11 + 0x54);
                *(undefined1 *)(puVar14 + 3) = *(undefined1 *)(lVar11 + 0x58);
                *(undefined1 *)((longlong)puVar14 + 0xd) = *(undefined1 *)(lVar11 + 0x59);
                *(undefined1 *)((longlong)puVar14 + 0xe) = *(undefined1 *)(lVar11 + 0x5a);
                *(undefined1 *)((longlong)puVar14 + 0xf) = *(undefined1 *)(lVar11 + 0x5b);
                *(undefined2 *)(puVar14 + 4) = *(undefined2 *)(lVar11 + 0x5c);
                *(undefined1 *)((longlong)puVar14 + 0x12) = *(undefined1 *)(lVar11 + 0x5e);
                *(undefined1 *)((longlong)puVar14 + 0x13) = *(undefined1 *)(lVar11 + 0x5f);
                FUN_144bfbed0(puVar14 + -7,lVar11 + 0x30,0x18);
              }
              puVar14 = puVar14 + 0x18;
              lVar12 = lVar12 + -1;
              puVar16 = local_30;
            } while (lVar12 != 0);
          }
          lVar7 = lVar6 - (longlong)plVar2;
          if (lVar6 == 0) {
            lVar7 = 0;
          }
          *plVar2 = lVar7;
          *(int *)(plVar2 + 1) = (int)param_2[1];
          uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
          uVar8 = *(uint *)(param_2 + 1);
          if ((int)*(uint *)(param_2 + 1) < (int)uVar3) {
            uVar8 = uVar3;
          }
          *puVar16 = uVar8 | 0x80000000;
        }
      }
      param_2 = param_2 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 144fa4b60 FUN_144fa4b60 body=390 status=ok
// SIG undefined FUN_144fa4b60(void)

void FUN_144fa4b60(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 2;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 2);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa4cf0 FUN_144fa4cf0 body=95 status=ok
// SIG undefined FUN_144fa4cf0(void)

void FUN_144fa4cf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa4d50 FUN_144fa4d50 body=388 status=ok
// SIG undefined FUN_144fa4d50(void)

void FUN_144fa4d50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 2;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa4f20 FUN_144fa4f20 body=387 status=ok
// SIG undefined FUN_144fa4f20(void)

void FUN_144fa4f20(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 * 2;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] * 2);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144fa50b0 FUN_144fa50b0 body=95 status=ok
// SIG undefined FUN_144fa50b0(void)

void FUN_144fa50b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa5110 FUN_144fa5110 body=386 status=ok
// SIG undefined FUN_144fa5110(void)

void FUN_144fa5110(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 * 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 * 2;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144fa5390 FUN_144fa5390 body=55 status=ok
// SIG undefined FUN_144fa5390(void)

void FUN_144fa5390(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145310410(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa5420 FUN_144fa5420 body=203 status=ok
// SIG undefined FUN_144fa5420(void)

void FUN_144fa5420(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkcdPlanarCsgOperand::vftable;
        lVar1 = *(longlong *)(param_2 + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)(param_2 + 0x10 + (longlong)puVar2);
        puVar2[2] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)(param_2 + 0x18 + (longlong)puVar2);
        puVar2[3] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
      }
      puVar2 = puVar2 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa54f0 FUN_144fa54f0 body=88 status=ok
// SIG undefined FUN_144fa54f0(void)

void FUN_144fa54f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa5560 FUN_144fa5560 body=194 status=ok
// SIG undefined FUN_144fa5560(void)

void FUN_144fa5560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar2 != *(longlong *)(param_2 + (longlong)plVar2)) {
        if (*(longlong *)(param_2 + (longlong)plVar2) != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)(param_2 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 8 + (longlong)plVar2);
      if (plVar2[1] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[1];
        plVar2[1] = *(longlong *)(param_2 + 8 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
      if (plVar2[2] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[2];
        plVar2[2] = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa56e0 FUN_144fa56e0 body=18 status=ok
// SIG undefined FUN_144fa56e0(void)

undefined8 * FUN_144fa56e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72ae70;
  return param_2;
}



// FUNCTION 144fa5740 FUN_144fa5740 body=104 status=ok
// SIG undefined FUN_144fa5740(void)

void FUN_144fa5740(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (longlong)(param_1 + 2);
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000003;
        FUN_144fa79c0(param_1,param_2);
      }
      param_2 = param_2 + 0x40;
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa57b0 FUN_144fa57b0 body=87 status=ok
// SIG undefined FUN_144fa57b0(void)

undefined8 FUN_144fa57b0(undefined8 param_1,ulonglong param_2)

{
  FUN_145310460();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144fa5810 FUN_144fa5810 body=131 status=ok
// SIG undefined FUN_144fa5810(void)

void FUN_144fa5810(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(lVar2 * 0x40 + 0xc + param_1);
    do {
      puVar1[-1] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar1 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar1 + -3),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 4);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -0x10;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144fa58a0 FUN_144fa58a0 body=187 status=ok
// SIG undefined FUN_144fa58a0(void)

void FUN_144fa58a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 << 4);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144fa5990 FUN_144fa5990 body=76 status=ok
// SIG undefined FUN_144fa5990(void)

void FUN_144fa5990(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar1 = (undefined8 *)((longlong)param_3 * 0x10 + param_1);
    puVar2 = puVar1;
    do {
      (**(code **)*puVar2)(puVar1,0);
      puVar1 = puVar1 + -2;
      puVar2 = puVar2 + -2;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa5ab0 FUN_144fa5ab0 body=18 status=ok
// SIG undefined FUN_144fa5ab0(void)

undefined8 * FUN_144fa5ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72af80;
  return param_2;
}



// FUNCTION 144fa5ad0 FUN_144fa5ad0 body=3 status=ok
// SIG undefined FUN_144fa5ad0(void)

void FUN_144fa5ad0(void)

{
  return;
}



// FUNCTION 144fa5bc0 FUN_144fa5bc0 body=80 status=ok
// SIG undefined FUN_144fa5bc0(void)

void FUN_144fa5bc0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa5c10 FUN_144fa5c10 body=63 status=ok
// SIG undefined FUN_144fa5c10(void)

void FUN_144fa5c10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144fa5c50 FUN_144fa5c50 body=106 status=ok
// SIG undefined FUN_144fa5c50(void)

undefined8 * FUN_144fa5c50(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fa5cc0 FUN_144fa5cc0 body=97 status=ok
// SIG undefined FUN_144fa5cc0(void)

void FUN_144fa5cc0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa5d30 FUN_144fa5d30 body=63 status=ok
// SIG undefined FUN_144fa5d30(void)

void FUN_144fa5d30(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14530e490(param_1,0,0,0);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa5d70 FUN_144fa5d70 body=75 status=ok
// SIG undefined FUN_144fa5d70(void)

void FUN_144fa5d70(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14530e600(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa5dc0 FUN_144fa5dc0 body=77 status=ok
// SIG undefined FUN_144fa5dc0(void)

void FUN_144fa5dc0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa5e10 FUN_144fa5e10 body=238 status=ok
// SIG undefined FUN_144fa5e10(void)

void FUN_144fa5e10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar2 != *(longlong *)(param_2 + (longlong)plVar2)) {
        if (*(longlong *)(param_2 + (longlong)plVar2) != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)(param_2 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 8 + (longlong)plVar2);
      if (plVar2[1] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[1];
        plVar2[1] = *(longlong *)(param_2 + 8 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
      if (plVar2[2] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[2];
        plVar2[2] = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      lVar1 = *(longlong *)(param_2 + 0x18 + (longlong)plVar2);
      if (plVar2[3] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[3];
        plVar2[3] = *(longlong *)(param_2 + 0x18 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144fa5f30 FUN_144fa5f30 body=443 status=ok
// SIG undefined FUN_144fa5f30(void)

void FUN_144fa5f30(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar10 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar9 = *plVar1;
        if (lVar9 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar9 = lVar9 + (longlong)plVar1;
          if ((lVar9 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar4 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar4 = uVar4 | (int)uVar4 >> 8;
            uVar4 = uVar4 | (int)uVar4 >> 4;
            uVar4 = uVar4 | (int)uVar4 >> 2;
            uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
            if ((int)uVar4 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar4 << 2;
            puVar3 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1;
            lVar8 = lVar6 + (longlong)param_1;
            if (lVar6 == 0) {
              lVar8 = 0;
            }
            lVar7 = (longlong)(int)param_1[1];
            if (0 < lVar7) {
              puVar5 = puVar3;
              do {
                if (puVar5 != (undefined4 *)0x0) {
                  *puVar5 = *(undefined4 *)((lVar8 - (longlong)puVar3) + (longlong)puVar5);
                }
                puVar5 = puVar5 + 1;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
              lVar6 = *param_1;
            }
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              if (lVar6 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (longlong)param_1 + lVar6;
              }
              (*DAT_14c787678)(0,lVar6);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar8 = (longlong)iVar2;
            lVar6 = 0;
            if (puVar3 != (undefined4 *)0x0) {
              lVar6 = (longlong)puVar3 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
            puVar3 = (undefined4 *)((longlong)param_1 + lVar6);
            if (0 < iVar2) {
              lVar9 = lVar9 - (longlong)puVar3;
              do {
                if (puVar3 != (undefined4 *)0x0) {
                  *puVar3 = *(undefined4 *)(lVar9 + (longlong)puVar3);
                }
                puVar3 = puVar3 + 1;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
          }
        }
      }
      param_1 = param_1 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144fa60f0 FUN_144fa60f0 body=95 status=ok
// SIG undefined FUN_144fa60f0(void)

void FUN_144fa60f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa6150 FUN_144fa6150 body=408 status=ok
// SIG undefined FUN_144fa6150(void)

void FUN_144fa6150(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar9 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    puVar12 = (undefined4 *)0x0;
    lVar13 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar9);
      puVar1 = puVar9 + -2;
      if (puVar1 != puVar10) {
        puVar6 = (undefined4 *)(*(longlong *)puVar1 + (longlong)puVar1);
        if (*(longlong *)puVar1 == 0) {
          puVar6 = puVar12;
        }
        uVar11 = *puVar9;
        if ((int)*puVar9 < (int)(puVar9[1] & 0x7fffffff)) {
          uVar11 = puVar9[1] & 0x7fffffff;
        }
        if ((puVar6 == (undefined4 *)0x0) || ((longlong)(int)uVar11 << 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar9) < 0) {
            puVar6 = (undefined4 *)(*(longlong *)puVar10 + (longlong)puVar10);
            if (*(longlong *)puVar10 == 0) {
              puVar6 = puVar12;
            }
            (*DAT_14c787678)(0,puVar6,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar9) = 0;
        }
        else {
          lVar8 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar9);
          uVar4 = uVar2 & 0x7fffffff;
          puVar5 = (undefined4 *)(lVar8 + (longlong)puVar10);
          if (lVar8 == 0) {
            puVar5 = puVar12;
          }
          uVar3 = *(uint *)(param_1 + (longlong)puVar9);
          if ((int)*(uint *)(param_1 + (longlong)puVar9) < (int)uVar4) {
            uVar3 = uVar4;
          }
          if (uVar11 != uVar3) {
            if ((int)uVar2 < 0) {
              puVar5 = (undefined4 *)(lVar8 + (longlong)puVar10);
              if (lVar8 == 0) {
                puVar5 = puVar12;
              }
              (*DAT_14c787678)(0,puVar5,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 2;
            puVar5 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
          }
          lVar8 = (longlong)(int)*puVar9;
          puVar7 = puVar5;
          if (0 < lVar8) {
            do {
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *(undefined4 *)(((longlong)puVar7 - (longlong)puVar5) + (longlong)puVar6);
              }
              lVar8 = lVar8 + -1;
              puVar7 = puVar7 + 1;
            } while (lVar8 != 0);
          }
          puVar6 = (undefined4 *)((longlong)puVar5 - (longlong)puVar10);
          if (puVar5 == (undefined4 *)0x0) {
            puVar6 = puVar12;
          }
          *(undefined4 **)puVar10 = puVar6;
          puVar10[2] = *puVar9;
          uVar11 = *puVar9;
          if ((int)*puVar9 < (int)(puVar9[1] & 0x7fffffff)) {
            uVar11 = puVar9[1] & 0x7fffffff;
          }
          puVar10[3] = uVar11 | 0x80000000;
        }
      }
      puVar9 = puVar9 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144fa6330 FUN_144fa6330 body=464 status=ok
// SIG undefined FUN_144fa6330(void)

void FUN_144fa6330(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar10 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar9 = *plVar1;
        if (lVar9 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar9 = lVar9 + (longlong)plVar1;
          if ((lVar9 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar4 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar4 = uVar4 | (int)uVar4 >> 8;
            uVar4 = uVar4 | (int)uVar4 >> 4;
            uVar4 = uVar4 | (int)uVar4 >> 2;
            uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
            if ((int)uVar4 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar4 * 5;
            puVar3 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1;
            lVar8 = lVar6 + (longlong)param_1;
            if (lVar6 == 0) {
              lVar8 = 0;
            }
            lVar7 = (longlong)(int)param_1[1];
            if (0 < lVar7) {
              puVar5 = puVar3;
              do {
                if (puVar5 != (undefined4 *)0x0) {
                  *puVar5 = *(undefined4 *)((lVar8 - (longlong)puVar3) + (longlong)puVar5);
                  *(undefined1 *)(puVar5 + 1) =
                       *(undefined1 *)((lVar8 - (longlong)puVar3) + 4 + (longlong)puVar5);
                }
                puVar5 = (undefined4 *)((longlong)puVar5 + 5);
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
              lVar6 = *param_1;
            }
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              if (lVar6 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (longlong)param_1 + lVar6;
              }
              (*DAT_14c787678)(0,lVar6);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar8 = (longlong)iVar2;
            lVar6 = 0;
            if (puVar3 != (undefined4 *)0x0) {
              lVar6 = (longlong)puVar3 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
            puVar3 = (undefined4 *)((longlong)param_1 + lVar6);
            if (0 < iVar2) {
              lVar9 = lVar9 - (longlong)puVar3;
              do {
                if (puVar3 != (undefined4 *)0x0) {
                  *puVar3 = *(undefined4 *)(lVar9 + (longlong)puVar3);
                  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(lVar9 + 4 + (longlong)puVar3);
                }
                puVar3 = (undefined4 *)((longlong)puVar3 + 5);
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
          }
        }
      }
      param_1 = param_1 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144fa6500 FUN_144fa6500 body=95 status=ok
// SIG undefined FUN_144fa6500(void)

void FUN_144fa6500(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa6560 FUN_144fa6560 body=416 status=ok
// SIG undefined FUN_144fa6560(void)

void FUN_144fa6560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    puVar12 = (undefined4 *)0x0;
    lVar13 = (longlong)param_4;
    do {
      puVar9 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar9) {
        puVar6 = (undefined4 *)(*(longlong *)puVar1 + (longlong)puVar1);
        if (*(longlong *)puVar1 == 0) {
          puVar6 = puVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((puVar6 == (undefined4 *)0x0) || ((longlong)(int)uVar11 * 5 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            puVar6 = (undefined4 *)(*(longlong *)puVar9 + (longlong)puVar9);
            if (*(longlong *)puVar9 == 0) {
              puVar6 = puVar12;
            }
            (*DAT_14c787678)(0,puVar6,0);
          }
          puVar9[0] = 0;
          puVar9[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar10 = *(longlong *)puVar9;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar4 = uVar2 & 0x7fffffff;
          puVar5 = (undefined4 *)(lVar10 + (longlong)puVar9);
          if (lVar10 == 0) {
            puVar5 = puVar12;
          }
          uVar3 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar4) {
            uVar3 = uVar4;
          }
          if (uVar11 != uVar3) {
            if ((int)uVar2 < 0) {
              puVar5 = (undefined4 *)(lVar10 + (longlong)puVar9);
              if (lVar10 == 0) {
                puVar5 = puVar12;
              }
              (*DAT_14c787678)(0,puVar5,0);
            }
            local_38[0] = (longlong)(int)uVar11 * 5;
            puVar5 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
          }
          lVar10 = (longlong)(int)*puVar8;
          puVar7 = puVar5;
          if (0 < lVar10) {
            do {
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *(undefined4 *)(((longlong)puVar7 - (longlong)puVar5) + (longlong)puVar6);
                *(undefined1 *)(puVar7 + 1) =
                     *(undefined1 *)(((longlong)puVar7 - (longlong)puVar5) + 4 + (longlong)puVar6);
              }
              lVar10 = lVar10 + -1;
              puVar7 = (undefined4 *)((longlong)puVar7 + 5);
            } while (lVar10 != 0);
          }
          puVar6 = (undefined4 *)((longlong)puVar5 - (longlong)puVar9);
          if (puVar5 == (undefined4 *)0x0) {
            puVar6 = puVar12;
          }
          *(undefined4 **)puVar9 = puVar6;
          puVar9[2] = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          puVar9[3] = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144fa6740 FUN_144fa6740 body=465 status=ok
// SIG undefined FUN_144fa6740(void)

void FUN_144fa6740(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar10 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar9 = *plVar1;
        if (lVar9 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar9 = lVar9 + (longlong)plVar1;
          if ((lVar9 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar4 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar4 = uVar4 | (int)uVar4 >> 8;
            uVar4 = uVar4 | (int)uVar4 >> 4;
            uVar4 = uVar4 | (int)uVar4 >> 2;
            uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
            if ((int)uVar4 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar4 * 6;
            puVar3 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1;
            lVar8 = lVar6 + (longlong)param_1;
            if (lVar6 == 0) {
              lVar8 = 0;
            }
            lVar7 = (longlong)(int)param_1[1];
            if (0 < lVar7) {
              puVar5 = puVar3;
              do {
                if (puVar5 != (undefined4 *)0x0) {
                  *puVar5 = *(undefined4 *)((lVar8 - (longlong)puVar3) + (longlong)puVar5);
                  *(undefined2 *)(puVar5 + 1) =
                       *(undefined2 *)((lVar8 - (longlong)puVar3) + 4 + (longlong)puVar5);
                }
                puVar5 = (undefined4 *)((longlong)puVar5 + 6);
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
              lVar6 = *param_1;
            }
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              if (lVar6 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (longlong)param_1 + lVar6;
              }
              (*DAT_14c787678)(0,lVar6);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar8 = (longlong)iVar2;
            lVar6 = 0;
            if (puVar3 != (undefined4 *)0x0) {
              lVar6 = (longlong)puVar3 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
            puVar3 = (undefined4 *)((longlong)param_1 + lVar6);
            if (0 < iVar2) {
              lVar9 = lVar9 - (longlong)puVar3;
              do {
                if (puVar3 != (undefined4 *)0x0) {
                  *puVar3 = *(undefined4 *)(lVar9 + (longlong)puVar3);
                  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(lVar9 + 4 + (longlong)puVar3);
                }
                puVar3 = (undefined4 *)((longlong)puVar3 + 6);
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
          }
        }
      }
      param_1 = param_1 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144fa6920 FUN_144fa6920 body=95 status=ok
// SIG undefined FUN_144fa6920(void)

void FUN_144fa6920(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa6980 FUN_144fa6980 body=420 status=ok
// SIG undefined FUN_144fa6980(void)

void FUN_144fa6980(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    puVar12 = (undefined4 *)0x0;
    lVar13 = (longlong)param_4;
    do {
      puVar9 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar9) {
        puVar6 = (undefined4 *)(*(longlong *)puVar1 + (longlong)puVar1);
        if (*(longlong *)puVar1 == 0) {
          puVar6 = puVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((puVar6 == (undefined4 *)0x0) || ((longlong)(int)uVar11 * 6 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            puVar6 = (undefined4 *)(*(longlong *)puVar9 + (longlong)puVar9);
            if (*(longlong *)puVar9 == 0) {
              puVar6 = puVar12;
            }
            (*DAT_14c787678)(0,puVar6,0);
          }
          puVar9[0] = 0;
          puVar9[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar10 = *(longlong *)puVar9;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar4 = uVar2 & 0x7fffffff;
          puVar5 = (undefined4 *)(lVar10 + (longlong)puVar9);
          if (lVar10 == 0) {
            puVar5 = puVar12;
          }
          uVar3 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar4) {
            uVar3 = uVar4;
          }
          if (uVar11 != uVar3) {
            if ((int)uVar2 < 0) {
              puVar5 = (undefined4 *)(lVar10 + (longlong)puVar9);
              if (lVar10 == 0) {
                puVar5 = puVar12;
              }
              (*DAT_14c787678)(0,puVar5,0);
            }
            local_38[0] = (longlong)(int)uVar11 * 6;
            puVar5 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
          }
          lVar10 = (longlong)(int)*puVar8;
          puVar7 = puVar5;
          if (0 < lVar10) {
            do {
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *(undefined4 *)(((longlong)puVar7 - (longlong)puVar5) + (longlong)puVar6);
                *(undefined2 *)(puVar7 + 1) =
                     *(undefined2 *)(((longlong)puVar7 - (longlong)puVar5) + 4 + (longlong)puVar6);
              }
              lVar10 = lVar10 + -1;
              puVar7 = (undefined4 *)((longlong)puVar7 + 6);
            } while (lVar10 != 0);
          }
          puVar6 = (undefined4 *)((longlong)puVar5 - (longlong)puVar9);
          if (puVar5 == (undefined4 *)0x0) {
            puVar6 = puVar12;
          }
          *(undefined4 **)puVar9 = puVar6;
          puVar9[2] = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          puVar9[3] = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144fa6b70 FUN_144fa6b70 body=456 status=ok
// SIG undefined FUN_144fa6b70(void)

void FUN_144fa6b70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar16 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar15 = *plVar1;
        if (lVar15 != 0) {
          iVar4 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar15 = lVar15 + (longlong)plVar1;
          if ((lVar15 != 0) && (0 < iVar4)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar11 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
            uVar11 = uVar11 | (int)uVar11 >> 8;
            uVar11 = uVar11 | (int)uVar11 >> 4;
            uVar11 = uVar11 | (int)uVar11 >> 2;
            uVar11 = ((int)uVar11 >> 1 | uVar11) + 1;
            if ((int)uVar11 < iVar4) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar11 << 5;
            puVar9 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
            lVar13 = *param_1;
            lVar14 = (longlong)param_1 + lVar13;
            if (lVar13 == 0) {
              lVar14 = 0;
            }
            lVar12 = (longlong)(int)param_1[1];
            if (0 < lVar12) {
              puVar10 = puVar9;
              do {
                if (puVar10 != (undefined4 *)0x0) {
                  puVar2 = (undefined4 *)((lVar14 - (longlong)puVar9) + (longlong)puVar10);
                  uVar5 = puVar2[1];
                  uVar6 = puVar2[2];
                  uVar7 = puVar2[3];
                  *puVar10 = *puVar2;
                  puVar10[1] = uVar5;
                  puVar10[2] = uVar6;
                  puVar10[3] = uVar7;
                  puVar3 = (undefined8 *)((lVar14 - (longlong)puVar9) + 0x10 + (longlong)puVar10);
                  uVar8 = puVar3[1];
                  *(undefined8 *)(puVar10 + 4) = *puVar3;
                  *(undefined8 *)(puVar10 + 6) = uVar8;
                }
                puVar10 = puVar10 + 8;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              lVar13 = *param_1;
            }
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              if (lVar13 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = (longlong)param_1 + lVar13;
              }
              (*DAT_14c787678)(0,lVar13);
            }
            *(int *)(param_1 + 1) = iVar4;
            lVar13 = 0;
            if (puVar9 != (undefined4 *)0x0) {
              lVar13 = (longlong)puVar9 - (longlong)param_1;
            }
            *param_1 = lVar13;
            *(uint *)((longlong)param_1 + 0xc) = uVar11 | 0x80000000;
            puVar9 = (undefined4 *)((longlong)param_1 + lVar13);
            lVar13 = (longlong)iVar4;
            if (0 < iVar4) {
              lVar15 = lVar15 - (longlong)puVar9;
              do {
                if (puVar9 != (undefined4 *)0x0) {
                  puVar10 = (undefined4 *)(lVar15 + (longlong)puVar9);
                  uVar5 = puVar10[1];
                  uVar6 = puVar10[2];
                  uVar7 = puVar10[3];
                  *puVar9 = *puVar10;
                  puVar9[1] = uVar5;
                  puVar9[2] = uVar6;
                  puVar9[3] = uVar7;
                  puVar3 = (undefined8 *)(lVar15 + 0x10 + (longlong)puVar9);
                  uVar8 = puVar3[1];
                  *(undefined8 *)(puVar9 + 4) = *puVar3;
                  *(undefined8 *)(puVar9 + 6) = uVar8;
                }
                puVar9 = puVar9 + 8;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
        }
      }
      param_1 = param_1 + 2;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 144fa6d40 FUN_144fa6d40 body=95 status=ok
// SIG undefined FUN_144fa6d40(void)

void FUN_144fa6d40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144fa6da0 FUN_144fa6da0 body=419 status=ok
// SIG undefined FUN_144fa6da0(void)

void FUN_144fa6da0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar15 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    puVar18 = (undefined4 *)0x0;
    lVar19 = (longlong)param_4;
    do {
      puVar16 = (uint *)(param_1 + -8 + (longlong)puVar15);
      puVar1 = puVar15 + -2;
      if (puVar1 != puVar16) {
        puVar12 = (undefined4 *)(*(longlong *)puVar1 + (longlong)puVar1);
        if (*(longlong *)puVar1 == 0) {
          puVar12 = puVar18;
        }
        uVar17 = *puVar15;
        if ((int)*puVar15 < (int)(puVar15[1] & 0x7fffffff)) {
          uVar17 = puVar15[1] & 0x7fffffff;
        }
        if ((puVar12 == (undefined4 *)0x0) || ((longlong)(int)uVar17 << 5 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar15) < 0) {
            puVar12 = (undefined4 *)(*(longlong *)puVar16 + (longlong)puVar16);
            if (*(longlong *)puVar16 == 0) {
              puVar12 = puVar18;
            }
            (*DAT_14c787678)(0,puVar12,0);
          }
          puVar16[0] = 0;
          puVar16[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar15) = 0;
        }
        else {
          lVar14 = *(longlong *)puVar16;
          uVar4 = *(uint *)(param_1 + 4 + (longlong)puVar15);
          uVar10 = uVar4 & 0x7fffffff;
          puVar11 = (undefined4 *)((longlong)puVar16 + lVar14);
          if (lVar14 == 0) {
            puVar11 = puVar18;
          }
          uVar5 = *(uint *)(param_1 + (longlong)puVar15);
          if ((int)*(uint *)(param_1 + (longlong)puVar15) < (int)uVar10) {
            uVar5 = uVar10;
          }
          if (uVar17 != uVar5) {
            if ((int)uVar4 < 0) {
              puVar11 = (undefined4 *)((longlong)puVar16 + lVar14);
              if (lVar14 == 0) {
                puVar11 = puVar18;
              }
              (*DAT_14c787678)(0,puVar11,0);
            }
            local_38[0] = (longlong)(int)uVar17 << 5;
            puVar11 = (undefined4 *)(*DAT_14c787670)(0,local_38,0);
          }
          lVar14 = (longlong)(int)*puVar15;
          puVar13 = puVar11;
          if (0 < lVar14) {
            do {
              if (puVar13 != (undefined4 *)0x0) {
                puVar2 = (undefined4 *)(((longlong)puVar13 - (longlong)puVar11) + (longlong)puVar12)
                ;
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                *puVar13 = *puVar2;
                puVar13[1] = uVar6;
                puVar13[2] = uVar7;
                puVar13[3] = uVar8;
                puVar3 = (undefined8 *)
                         (((longlong)puVar13 - (longlong)puVar11) + 0x10 + (longlong)puVar12);
                uVar9 = puVar3[1];
                *(undefined8 *)(puVar13 + 4) = *puVar3;
                *(undefined8 *)(puVar13 + 6) = uVar9;
              }
              lVar14 = lVar14 + -1;
              puVar13 = puVar13 + 8;
            } while (lVar14 != 0);
          }
          puVar12 = (undefined4 *)((longlong)puVar11 - (longlong)puVar16);
          if (puVar11 == (undefined4 *)0x0) {
            puVar12 = puVar18;
          }
          *(undefined4 **)puVar16 = puVar12;
          puVar16[2] = *puVar15;
          uVar17 = *puVar15;
          if ((int)*puVar15 < (int)(puVar15[1] & 0x7fffffff)) {
            uVar17 = puVar15[1] & 0x7fffffff;
          }
          puVar16[3] = uVar17 | 0x80000000;
        }
      }
      puVar15 = puVar15 + 4;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return;
}



// FUNCTION 144fa6f50 FUN_144fa6f50 body=58 status=ok
// SIG undefined FUN_144fa6f50(void)

void FUN_144fa6f50(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1453105c0(param_1);
      }
      param_1 = param_1 + 0x100;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa6f90 FUN_144fa6f90 body=469 status=ok
// SIG undefined FUN_144fa6f90(void)

void FUN_144fa6f90(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    puVar7 = (undefined4 *)(param_1 + 0x40);
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar7 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar7 + -0xe) = 0xffffffff;
        *(undefined8 *)(puVar7 + -0xc) = 1;
        *(undefined ***)(puVar7 + -0x10) = hkgpMeshMerge::vftable;
        puVar7[-10] = *(undefined4 *)(param_2 + -0x28 + (longlong)puVar7);
        puVar7[-9] = *(undefined4 *)(param_2 + -0x24 + (longlong)puVar7);
        puVar7[-8] = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar7);
        puVar7[-7] = *(undefined4 *)(param_2 + -0x1c + (longlong)puVar7);
        puVar7[-6] = *(undefined4 *)(param_2 + -0x18 + (longlong)puVar7);
        puVar1 = (undefined4 *)(param_2 + -0x10 + (longlong)puVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar7[-4] = *puVar1;
        puVar7[-3] = uVar3;
        puVar7[-2] = uVar4;
        puVar7[-1] = uVar5;
        puVar1 = (undefined4 *)(param_2 + (longlong)puVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar7);
        *(undefined1 *)((longlong)puVar7 + 0x11) =
             *(undefined1 *)(param_2 + 0x11 + (longlong)puVar7);
        *(undefined1 *)((longlong)puVar7 + 0x12) =
             *(undefined1 *)(param_2 + 0x12 + (longlong)puVar7);
        *(undefined1 *)((longlong)puVar7 + 0x13) =
             *(undefined1 *)(param_2 + 0x13 + (longlong)puVar7);
        *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(param_2 + 0x14 + (longlong)puVar7);
        FUN_144f50e60(puVar7 + 6,param_2 + 0x18 + (longlong)puVar7);
        FUN_144f50e60(puVar7 + 10,param_2 + 0x28 + (longlong)puVar7);
        FUN_144f50e60(puVar7 + 0xe,param_2 + 0x38 + (longlong)puVar7);
        FUN_144f50e60(puVar7 + 0x12,param_2 + 0x48 + (longlong)puVar7);
        FUN_144f50e60(puVar7 + 0x16,param_2 + 0x58 + (longlong)puVar7);
        FUN_144f50e60(puVar7 + 0x1a,param_2 + 0x68 + (longlong)puVar7);
        *(undefined1 *)(puVar7 + 0x1e) = *(undefined1 *)(param_2 + 0x78 + (longlong)puVar7);
        puVar7[0x1f] = *(undefined4 *)(param_2 + 0x7c + (longlong)puVar7);
        puVar7[0x20] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x80);
        puVar7[0x21] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x84);
        puVar7[0x22] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x88);
        puVar7[0x23] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x8c);
        puVar7[0x24] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x90);
        puVar7[0x25] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x94);
        puVar7[0x26] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x98);
        puVar7[0x27] = *(undefined4 *)((longlong)puVar7 + param_2 + 0x9c);
        puVar7[0x28] = *(undefined4 *)((longlong)puVar7 + param_2 + 0xa0);
        puVar2 = (undefined8 *)((longlong)puVar7 + param_2 + 0xb0);
        uVar6 = puVar2[1];
        *(undefined8 *)(puVar7 + 0x2c) = *puVar2;
        *(undefined8 *)(puVar7 + 0x2e) = uVar6;
      }
      puVar7 = puVar7 + 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144fa7170 FUN_144fa7170 body=83 status=ok
// SIG undefined FUN_144fa7170(void)

void FUN_144fa7170(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x100 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x20;
      plVar2 = plVar2 + -0x20;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144fa71e0 FUN_144fa71e0 body=415 status=ok
// SIG undefined FUN_144fa71e0(void)

void FUN_144fa71e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    puVar7 = (undefined4 *)(param_1 + 0x40);
    do {
      puVar7[-10] = *(undefined4 *)(param_2 + -0x28 + (longlong)puVar7);
      puVar7[-9] = *(undefined4 *)(param_2 + -0x24 + (longlong)puVar7);
      puVar7[-8] = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar7);
      puVar7[-7] = *(undefined4 *)(param_2 + -0x1c + (longlong)puVar7);
      puVar7[-6] = *(undefined4 *)(param_2 + -0x18 + (longlong)puVar7);
      puVar1 = (undefined4 *)(param_2 + -0x10 + (longlong)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar7[-4] = *puVar1;
      puVar7[-3] = uVar3;
      puVar7[-2] = uVar4;
      puVar7[-1] = uVar5;
      puVar1 = (undefined4 *)(param_2 + (longlong)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x11) = *(undefined1 *)(param_2 + 0x11 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x12) = *(undefined1 *)(param_2 + 0x12 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x13) = *(undefined1 *)(param_2 + 0x13 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(param_2 + 0x14 + (longlong)puVar7);
      FUN_144f50e80(puVar7 + 6,param_2 + 0x18 + (longlong)puVar7);
      FUN_144f50e80(puVar7 + 10,param_2 + 0x28 + (longlong)puVar7);
      FUN_144f50e80(puVar7 + 0xe,param_2 + 0x38 + (longlong)puVar7);
      FUN_144f50e80(puVar7 + 0x12,param_2 + 0x48 + (longlong)puVar7);
      FUN_144f50e80(puVar7 + 0x16,param_2 + 0x58 + (longlong)puVar7);
      FUN_144f50e80(puVar7 + 0x1a,param_2 + 0x68 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 0x1e) = *(undefined1 *)(param_2 + 0x78 + (longlong)puVar7);
      puVar7[0x1f] = *(undefined4 *)(param_2 + 0x7c + (longlong)puVar7);
      puVar7[0x20] = *(undefined4 *)(param_2 + 0x80 + (longlong)puVar7);
      puVar7[0x21] = *(undefined4 *)(param_2 + 0x84 + (longlong)puVar7);
      puVar7[0x22] = *(undefined4 *)(param_2 + 0x88 + (longlong)puVar7);
      puVar7[0x23] = *(undefined4 *)(param_2 + 0x8c + (longlong)puVar7);
      puVar7[0x24] = *(undefined4 *)(param_2 + 0x90 + (longlong)puVar7);
      puVar7[0x25] = *(undefined4 *)(param_2 + 0x94 + (longlong)puVar7);
      puVar7[0x26] = *(undefined4 *)(param_2 + 0x98 + (longlong)puVar7);
      puVar7[0x27] = *(undefined4 *)(param_2 + 0x9c + (longlong)puVar7);
      puVar7[0x28] = *(undefined4 *)((longlong)puVar7 + param_2 + 0xa0);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_2 + 0xb0);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + 0x2c) = *puVar2;
      *(undefined8 *)(puVar7 + 0x2e) = uVar6;
      puVar7 = puVar7 + 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144fa7380 FUN_144fa7380 body=1574 status=ok
// SIG undefined FUN_144fa7380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fa7380(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar5 = (longlong)param_3;
  lVar4 = 0;
  if (3 < lVar5) {
    puVar2 = (undefined8 *)(param_1 + 0x160);
    lVar3 = (lVar5 - 4U >> 2) + 1;
    lVar4 = lVar3 * 4;
    do {
      if (puVar2 + -0x2c != (undefined8 *)0x0) {
        puVar2[-0x2b] = 0xffffffff;
        puVar2[-0x2a] = 1;
        puVar2[-0x2c] = hkgpMeshMerge::vftable;
        *(undefined4 *)(puVar2 + -0x29) = 0;
        *(undefined4 *)((longlong)puVar2 + -0x144) = 0x3f800000;
        *(undefined4 *)(puVar2 + -0x28) = 5;
        *(undefined4 *)((longlong)puVar2 + -0x13c) = 10;
        *(undefined4 *)(puVar2 + -0x27) = 0x3f800000;
        uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
        puVar2[-0x26] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
        puVar2[-0x25] = uVar1;
        uVar6 = uRam000000014c6dae84 ^ 0x80000000;
        uVar7 = uRam000000014c6dae88 ^ 0x80000000;
        uVar8 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(puVar2 + -0x24) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)((longlong)puVar2 + -0x11c) = uVar6;
        *(uint *)(puVar2 + -0x23) = uVar7;
        *(uint *)((longlong)puVar2 + -0x114) = uVar8;
        *(undefined4 *)(puVar2 + -0x22) = 0;
        *(undefined1 *)((longlong)puVar2 + -0x10c) = 0;
        puVar2[-0x21] = 0;
        puVar2[-0x20] = 0;
        puVar2[-0x1f] = 0;
        puVar2[-0x1e] = 0;
        puVar2[-0x1d] = 0;
        puVar2[-0x1c] = 0;
        puVar2[-0x1b] = 0;
        puVar2[-0x1a] = 0;
        puVar2[-0x19] = 0;
        puVar2[-0x18] = 0;
        puVar2[-0x17] = 0;
        puVar2[-0x16] = 0;
        *(undefined1 *)(puVar2 + -0x15) = 0;
        *(undefined4 *)((longlong)puVar2 + -0xa4) = 0x10;
        *(undefined4 *)(puVar2 + -0x14) = 0x20;
        *(undefined4 *)((longlong)puVar2 + -0x9c) = 1;
        *(undefined4 *)(puVar2 + -0x13) = 1;
        *(undefined4 *)((longlong)puVar2 + -0x94) = 0x3dcccccd;
        puVar2[-0x12] = 0x40000000;
        *(undefined4 *)(puVar2 + -0x11) = 0x3f000000;
        *(undefined4 *)((longlong)puVar2 + -0x84) = 0x3e800000;
        *(undefined4 *)(puVar2 + -0x10) = 0x3f000000;
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
      }
      if (puVar2 + -0xc != (undefined8 *)0x0) {
        puVar2[-0xb] = 0xffffffff;
        puVar2[-10] = 1;
        puVar2[-0xc] = hkgpMeshMerge::vftable;
        *(undefined4 *)(puVar2 + -9) = 0;
        *(undefined4 *)((longlong)puVar2 + -0x44) = 0x3f800000;
        *(undefined4 *)(puVar2 + -8) = 5;
        *(undefined4 *)((longlong)puVar2 + -0x3c) = 10;
        *(undefined4 *)(puVar2 + -7) = 0x3f800000;
        uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
        puVar2[-6] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
        puVar2[-5] = uVar1;
        uVar6 = uRam000000014c6dae84 ^ 0x80000000;
        uVar7 = uRam000000014c6dae88 ^ 0x80000000;
        uVar8 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(puVar2 + -4) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)((longlong)puVar2 + -0x1c) = uVar6;
        *(uint *)(puVar2 + -3) = uVar7;
        *(uint *)((longlong)puVar2 + -0x14) = uVar8;
        *(undefined4 *)(puVar2 + -2) = 0;
        *(undefined1 *)((longlong)puVar2 + -0xc) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *(undefined1 *)(puVar2 + 0xb) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x10;
        *(undefined4 *)(puVar2 + 0xc) = 0x20;
        *(undefined4 *)((longlong)puVar2 + 100) = 1;
        *(undefined4 *)(puVar2 + 0xd) = 1;
        *(undefined4 *)((longlong)puVar2 + 0x6c) = 0x3dcccccd;
        puVar2[0xe] = 0x40000000;
        *(undefined4 *)(puVar2 + 0xf) = 0x3f000000;
        *(undefined4 *)((longlong)puVar2 + 0x7c) = 0x3e800000;
        *(undefined4 *)(puVar2 + 0x10) = 0x3f000000;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
      }
      if (puVar2 + 0x14 != (undefined8 *)0x0) {
        puVar2[0x15] = 0xffffffff;
        puVar2[0x16] = 1;
        puVar2[0x14] = hkgpMeshMerge::vftable;
        *(undefined4 *)(puVar2 + 0x17) = 0;
        *(undefined4 *)((longlong)puVar2 + 0xbc) = 0x3f800000;
        *(undefined4 *)(puVar2 + 0x18) = 5;
        *(undefined4 *)((longlong)puVar2 + 0xc4) = 10;
        *(undefined4 *)(puVar2 + 0x19) = 0x3f800000;
        uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
        puVar2[0x1a] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
        puVar2[0x1b] = uVar1;
        uVar6 = uRam000000014c6dae84 ^ 0x80000000;
        uVar7 = uRam000000014c6dae88 ^ 0x80000000;
        uVar8 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(puVar2 + 0x1c) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)((longlong)puVar2 + 0xe4) = uVar6;
        *(uint *)(puVar2 + 0x1d) = uVar7;
        *(uint *)((longlong)puVar2 + 0xec) = uVar8;
        *(undefined4 *)(puVar2 + 0x1e) = 0;
        *(undefined1 *)((longlong)puVar2 + 0xf4) = 0;
        puVar2[0x1f] = 0;
        puVar2[0x20] = 0;
        puVar2[0x21] = 0;
        puVar2[0x22] = 0;
        puVar2[0x23] = 0;
        puVar2[0x24] = 0;
        puVar2[0x25] = 0;
        puVar2[0x26] = 0;
        puVar2[0x27] = 0;
        puVar2[0x28] = 0;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        *(undefined1 *)(puVar2 + 0x2b) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x15c) = 0x10;
        *(undefined4 *)(puVar2 + 0x2c) = 0x20;
        *(undefined4 *)((longlong)puVar2 + 0x164) = 1;
        *(undefined4 *)(puVar2 + 0x2d) = 1;
        *(undefined4 *)((longlong)puVar2 + 0x16c) = 0x3dcccccd;
        puVar2[0x2e] = 0x40000000;
        *(undefined4 *)(puVar2 + 0x2f) = 0x3f000000;
        *(undefined4 *)((longlong)puVar2 + 0x17c) = 0x3e800000;
        *(undefined4 *)(puVar2 + 0x30) = 0x3f000000;
        puVar2[0x32] = 0;
        puVar2[0x33] = 0;
      }
      if (puVar2 + 0x34 != (undefined8 *)0x0) {
        puVar2[0x35] = 0xffffffff;
        puVar2[0x36] = 1;
        puVar2[0x34] = hkgpMeshMerge::vftable;
        *(undefined4 *)(puVar2 + 0x37) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x1bc) = 0x3f800000;
        *(undefined4 *)(puVar2 + 0x38) = 5;
        *(undefined4 *)((longlong)puVar2 + 0x1c4) = 10;
        *(undefined4 *)(puVar2 + 0x39) = 0x3f800000;
        uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
        puVar2[0x3a] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
        puVar2[0x3b] = uVar1;
        uVar6 = uRam000000014c6dae84 ^ 0x80000000;
        uVar7 = uRam000000014c6dae88 ^ 0x80000000;
        uVar8 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(puVar2 + 0x3c) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)((longlong)puVar2 + 0x1e4) = uVar6;
        *(uint *)(puVar2 + 0x3d) = uVar7;
        *(uint *)((longlong)puVar2 + 0x1ec) = uVar8;
        *(undefined4 *)(puVar2 + 0x3e) = 0;
        *(undefined1 *)((longlong)puVar2 + 500) = 0;
        puVar2[0x3f] = 0;
        puVar2[0x40] = 0;
        puVar2[0x41] = 0;
        puVar2[0x42] = 0;
        puVar2[0x43] = 0;
        puVar2[0x44] = 0;
        puVar2[0x45] = 0;
        puVar2[0x46] = 0;
        puVar2[0x47] = 0;
        puVar2[0x48] = 0;
        puVar2[0x49] = 0;
        puVar2[0x4a] = 0;
        *(undefined1 *)(puVar2 + 0x4b) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x25c) = 0x10;
        *(undefined4 *)(puVar2 + 0x4c) = 0x20;
        *(undefined4 *)((longlong)puVar2 + 0x264) = 1;
        *(undefined4 *)(puVar2 + 0x4d) = 1;
        *(undefined4 *)((longlong)puVar2 + 0x26c) = 0x3dcccccd;
        puVar2[0x4e] = 0x40000000;
        *(undefined4 *)(puVar2 + 0x4f) = 0x3f000000;
        *(undefined4 *)((longlong)puVar2 + 0x27c) = 0x3e800000;
        *(undefined4 *)(puVar2 + 0x50) = 0x3f000000;
        puVar2[0x52] = 0;
        puVar2[0x53] = 0;
      }
      puVar2 = puVar2 + 0x80;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar4 < lVar5) {
    puVar2 = (undefined8 *)(lVar4 * 0x100 + 0x60 + param_1);
    lVar5 = lVar5 - lVar4;
    do {
      if (puVar2 + -0xc != (undefined8 *)0x0) {
        puVar2[-0xb] = 0xffffffff;
        puVar2[-10] = 1;
        puVar2[-0xc] = hkgpMeshMerge::vftable;
        *(undefined4 *)(puVar2 + -9) = 0;
        *(undefined4 *)((longlong)puVar2 + -0x44) = 0x3f800000;
        *(undefined4 *)(puVar2 + -8) = 5;
        *(undefined4 *)((longlong)puVar2 + -0x3c) = 10;
        *(undefined4 *)(puVar2 + -7) = 0x3f800000;
        uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
        puVar2[-6] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
        puVar2[-5] = uVar1;
        uVar6 = uRam000000014c6dae84 ^ 0x80000000;
        uVar7 = uRam000000014c6dae88 ^ 0x80000000;
        uVar8 = uRam000000014c6dae8c ^ 0x80000000;
        *(uint *)(puVar2 + -4) = _DAT_14c6dae80 ^ 0x80000000;
        *(uint *)((longlong)puVar2 + -0x1c) = uVar6;
        *(uint *)(puVar2 + -3) = uVar7;
        *(uint *)((longlong)puVar2 + -0x14) = uVar8;
        *(undefined4 *)(puVar2 + -2) = 0;
        *(undefined1 *)((longlong)puVar2 + -0xc) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *(undefined1 *)(puVar2 + 0xb) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x10;
        *(undefined4 *)(puVar2 + 0xc) = 0x20;
        *(undefined4 *)((longlong)puVar2 + 100) = 1;
        *(undefined4 *)(puVar2 + 0xd) = 1;
        *(undefined4 *)((longlong)puVar2 + 0x6c) = 0x3dcccccd;
        puVar2[0xe] = 0x40000000;
        *(undefined4 *)(puVar2 + 0xf) = 0x3f000000;
        *(undefined4 *)((longlong)puVar2 + 0x7c) = 0x3e800000;
        *(undefined4 *)(puVar2 + 0x10) = 0x3f000000;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
      }
      puVar2 = puVar2 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144fa79c0 FUN_144fa79c0 body=110 status=ok
// SIG undefined FUN_144fa79c0(void)

undefined8 * FUN_144fa79c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_2 + 1);
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_140c3e7da(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 << 4);
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}



// FUNCTION 144fa7a30 FUN_144fa7a30 body=4 status=ok
// SIG undefined FUN_144fa7a30(void)

undefined8 FUN_144fa7a30(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144fa7a40 FUN_144fa7a40 body=320 status=ok
// SIG undefined FUN_144fa7a40(void)

longlong * FUN_144fa7a40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  lVar1 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar1 != 0)) && (0 < iVar2)) {
    uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
    if ((int)uVar5 < iVar2) {
      FUN_144bfc170(0x5d9e6698,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar5 << 6;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    lVar4 = *param_1 + (longlong)param_1;
    if (*param_1 == 0) {
      lVar4 = lVar6;
    }
    FUN_144b3d470(lVar3,lVar4,(longlong)(int)param_1[1] << 6);
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar4 = (longlong)param_1 + *param_1;
      if (*param_1 == 0) {
        lVar4 = lVar6;
      }
      (*DAT_14c787678)(0,lVar4,0);
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar4 = lVar3 - (longlong)param_1;
    if (lVar3 == 0) {
      lVar4 = lVar6;
    }
    *param_1 = lVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
    FUN_144b3d470(lVar4 + (longlong)param_1,lVar1,(longlong)iVar2 << 6);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 144fa7b80 FUN_144fa7b80 body=333 status=ok
// SIG undefined FUN_144fa7b80(void)

longlong * FUN_144fa7b80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  lVar1 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar1 != 0)) && (0 < iVar2)) {
    uVar4 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
    if ((int)uVar4 < iVar2) {
      FUN_144bfc170(0x5d9e6698,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar4 * 0x30;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    lVar5 = *param_1 + (longlong)param_1;
    if (*param_1 == 0) {
      lVar5 = lVar6;
    }
    FUN_144b3d470(lVar3,lVar5,(longlong)(int)param_1[1] * 0x30);
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar5 = (longlong)param_1 + *param_1;
      if (*param_1 == 0) {
        lVar5 = lVar6;
      }
      (*DAT_14c787678)(0,lVar5,0);
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar5 = lVar3 - (longlong)param_1;
    if (lVar3 == 0) {
      lVar5 = lVar6;
    }
    *param_1 = lVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
    FUN_144b3d470(lVar5 + (longlong)param_1,lVar1,(longlong)iVar2 * 0x30);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 144fa7cd0 FUN_144fa7cd0 body=320 status=ok
// SIG undefined FUN_144fa7cd0(void)

longlong * FUN_144fa7cd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  lVar1 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar1 != 0)) && (0 < iVar2)) {
    uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
    if ((int)uVar5 < iVar2) {
      FUN_144bfc170(0x5d9e6698,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar5 << 5;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    lVar4 = *param_1 + (longlong)param_1;
    if (*param_1 == 0) {
      lVar4 = lVar6;
    }
    FUN_144b3d470(lVar3,lVar4,(longlong)(int)param_1[1] << 5);
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar4 = (longlong)param_1 + *param_1;
      if (*param_1 == 0) {
        lVar4 = lVar6;
      }
      (*DAT_14c787678)(0,lVar4,0);
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar4 = lVar3 - (longlong)param_1;
    if (lVar3 == 0) {
      lVar4 = lVar6;
    }
    *param_1 = lVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
    FUN_144b3d470(lVar4 + (longlong)param_1,lVar1,(longlong)iVar2 << 5);
  }
  *(short *)(param_1 + 2) = (short)param_2[2];
  return param_1;
}



// FUNCTION 144fa7e10 FUN_144fa7e10 body=318 status=ok
// SIG undefined FUN_144fa7e10(void)

longlong * FUN_144fa7e10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  lVar1 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar1 != 0)) && (0 < iVar2)) {
    uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
    if ((int)uVar5 < iVar2) {
      FUN_144bfc170(0x5d9e6698,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar5 << 5;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    lVar4 = *param_1 + (longlong)param_1;
    if (*param_1 == 0) {
      lVar4 = lVar6;
    }
    FUN_144b3d470(lVar3,lVar4,(longlong)(int)param_1[1] << 5);
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar4 = (longlong)param_1 + *param_1;
      if (*param_1 == 0) {
        lVar4 = lVar6;
      }
      (*DAT_14c787678)(0,lVar4,0);
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar4 = lVar3 - (longlong)param_1;
    if (lVar3 == 0) {
      lVar4 = lVar6;
    }
    *param_1 = lVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
    FUN_144b3d470(lVar4 + (longlong)param_1,lVar1,(longlong)iVar2 << 5);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 144fa7f50 FUN_144fa7f50 body=18 status=ok
// SIG undefined FUN_144fa7f50(void)

undefined8 * FUN_144fa7f50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72a820;
  return param_2;
}



// FUNCTION 144fa7f70 FUN_144fa7f70 body=159 status=ok
// SIG undefined FUN_144fa7f70(void)

undefined8 * FUN_144fa7f70(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 2);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd98);
  }
  return param_1;
}



// FUNCTION 144fa8010 FUN_144fa8010 body=18 status=ok
// SIG undefined FUN_144fa8010(void)

undefined8 * FUN_144fa8010(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72ae10;
  return param_2;
}



// FUNCTION 144fa8030 FUN_144fa8030 body=87 status=ok
// SIG undefined FUN_144fa8030(void)

undefined8 FUN_144fa8030(undefined8 param_1,ulonglong param_2)

{
  FUN_14530bb70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144fa8090 FUN_144fa8090 body=18 status=ok
// SIG undefined FUN_144fa8090(void)

undefined8 * FUN_144fa8090(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72b0c0;
  return param_2;
}



// FUNCTION 144fa80b0 FUN_144fa80b0 body=18 status=ok
// SIG undefined FUN_144fa80b0(void)

undefined8 * FUN_144fa80b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72b440;
  return param_2;
}



// FUNCTION 144fa80d0 FUN_144fa80d0 body=87 status=ok
// SIG undefined FUN_144fa80d0(void)

undefined8 FUN_144fa80d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1453103a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144fa8130 FUN_144fa8130 body=364 status=ok
// SIG undefined FUN_144fa8130(void)

longlong * FUN_144fa8130(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res8;
  
  lVar10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  lVar8 = (longlong)iVar1;
  lVar9 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar9 != 0)) && (0 < iVar1)) {
    uVar4 = iVar1 - 1U | (int)(iVar1 - 1U) >> 0x10;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
    if ((int)uVar4 < iVar1) {
      FUN_144bfc170(0x5d9e6698,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar4 << 2;
    puVar2 = (undefined4 *)(*DAT_14c787670)(0,&local_res8,0);
    lVar3 = *param_1;
    lVar6 = (longlong)(int)param_1[1];
    lVar7 = (longlong)param_1 + lVar3;
    if (lVar3 == 0) {
      lVar7 = lVar10;
    }
    if (0 < lVar6) {
      puVar5 = puVar2;
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *(undefined4 *)((lVar7 - (longlong)puVar2) + (longlong)puVar5);
        }
        puVar5 = puVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      lVar3 = *param_1;
    }
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar7 = lVar3 + (longlong)param_1;
      if (lVar3 == 0) {
        lVar7 = lVar10;
      }
      (*DAT_14c787678)(0,lVar7,0);
    }
    *(int *)(param_1 + 1) = iVar1;
    lVar3 = (longlong)puVar2 - (longlong)param_1;
    if (puVar2 == (undefined4 *)0x0) {
      lVar3 = lVar10;
    }
    *param_1 = lVar3;
    puVar2 = (undefined4 *)(lVar3 + (longlong)param_1);
    *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
    if (0 < iVar1) {
      lVar9 = lVar9 - (longlong)puVar2;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(lVar9 + (longlong)puVar2);
        }
        puVar2 = puVar2 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  lVar9 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar9;
  lVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar9;
  return param_1;
}



// FUNCTION 144fa82a0 FUN_144fa82a0 body=128 status=ok
// SIG undefined FUN_144fa82a0(void)

undefined8 * FUN_144fa82a0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = hkgpMeshMergeAssemblyImpl::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_147e56b1c();
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_147e56b1c();
  *(undefined4 *)(param_1 + 0x10) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  return param_1;
}



// FUNCTION 144fa8320 FUN_144fa8320 body=245 status=ok
// SIG undefined FUN_144fa8320(void)

void FUN_144fa8320(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)((longlong)param_1 + 0x4c) < 0) {
    lVar2 = (longlong)param_1 + param_1[8] + 0x40;
    if (param_1[8] == 0) {
      lVar2 = 0;
    }
    (*DAT_14c787678)(0,lVar2,0);
  }
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    lVar2 = (longlong)param_1 + param_1[5] + 0x28;
    if (param_1[5] == 0) {
      lVar2 = 0;
    }
    (*DAT_14c787678)(0,lVar2,0);
  }
  plVar1 = (longlong *)param_1[3];
  plVar3 = plVar1 + (longlong)*(int *)(param_1 + 4) * 0x18;
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -0x18;
    if (*plVar3 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0xc0);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144fa8420 FUN_144fa8420 body=436 status=ok
// SIG undefined FUN_144fa8420(void)

undefined8 * FUN_144fa8420(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkgpMeshMergeAssemblyImpl::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (0 < (int)uVar2) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc0);
    param_1[3] = uVar6;
    plVar9 = (longlong *)(lVar3 + 0x30);
    *(uint *)(param_1 + 4) = uVar2;
    uVar7 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0x24) = uVar2;
    plVar8 = (longlong *)param_1[3];
    do {
      if (plVar8 != (longlong *)0x0) {
        lVar3 = plVar9[-6];
        *plVar8 = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = plVar9[-3];
        plVar8[2] = plVar9[-4];
        plVar8[3] = lVar3;
        lVar3 = plVar9[-1];
        plVar8[4] = plVar9[-2];
        plVar8[5] = lVar3;
        lVar3 = plVar9[1];
        plVar8[6] = *plVar9;
        plVar8[7] = lVar3;
        lVar3 = plVar9[3];
        plVar8[8] = plVar9[2];
        plVar8[9] = lVar3;
        lVar3 = plVar9[5];
        plVar8[10] = plVar9[4];
        plVar8[0xb] = lVar3;
        lVar3 = plVar9[7];
        plVar8[0xc] = plVar9[6];
        plVar8[0xd] = lVar3;
        lVar3 = plVar9[9];
        plVar8[0xe] = plVar9[8];
        plVar8[0xf] = lVar3;
        lVar3 = plVar9[0xb];
        plVar8[0x10] = plVar9[10];
        plVar8[0x11] = lVar3;
        uVar4 = *(undefined4 *)((longlong)plVar9 + 100);
        lVar3 = plVar9[0xd];
        uVar5 = *(undefined4 *)((longlong)plVar9 + 0x6c);
        *(int *)(plVar8 + 0x12) = (int)plVar9[0xc];
        *(undefined4 *)((longlong)plVar8 + 0x94) = uVar4;
        *(int *)(plVar8 + 0x13) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0x9c) = uVar5;
        lVar3 = plVar9[0xf];
        plVar8[0x14] = plVar9[0xe];
        plVar8[0x15] = lVar3;
        *(int *)(plVar8 + 0x16) = (int)plVar9[0x10];
        *(undefined4 *)((longlong)plVar8 + 0xb4) = *(undefined4 *)((longlong)plVar9 + 0x84);
        *(int *)(plVar8 + 0x17) = (int)plVar9[0x11];
        puVar1 = (undefined1 *)((longlong)plVar9 + 0x8c);
        plVar9 = plVar9 + 0x18;
        *(undefined1 *)((longlong)plVar8 + 0xbc) = *puVar1;
      }
      uVar7 = uVar7 - 1;
      plVar8 = plVar8 + 0x18;
    } while (uVar7 != 0);
  }
  FUN_144c29a10(param_1 + 5,param_2 + 0x28);
  FUN_144c29a10(param_1 + 8,param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar6;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  return param_1;
}



// FUNCTION 144fa85e0 FUN_144fa85e0 body=799 status=ok
// SIG undefined FUN_144fa85e0(void)

longlong FUN_144fa85e0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  
  plVar16 = (longlong *)(param_1 + 0x18);
  if ((longlong *)(param_2 + 0x18) != plVar16) {
    iVar4 = *(int *)(param_2 + 0x20);
    lVar5 = *(longlong *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar4) {
      FUN_144fa9850(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    if (iVar4 < *(int *)(param_1 + 0x20)) {
      lVar17 = *plVar16;
      plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x20) * 0xc0 + *plVar16);
      while (plVar12 != (longlong *)((longlong)iVar4 * 0xc0 + lVar17)) {
        plVar12 = plVar12 + -0x18;
        if (*plVar12 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar17 = *plVar16;
    iVar7 = iVar4;
    if (*(int *)(param_1 + 0x20) < iVar4) {
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if ((lVar17 != lVar5) && (lVar15 = (longlong)iVar7, 0 < iVar7)) {
      puVar13 = (undefined8 *)(lVar17 + 0x20);
      lVar17 = lVar5 - lVar17;
      do {
        lVar6 = *(longlong *)(lVar17 + -0x20 + (longlong)puVar13);
        if (puVar13[-4] != lVar6) {
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          lVar6 = puVar13[-4];
          puVar13[-4] = *(undefined8 *)(lVar17 + -0x20 + (longlong)puVar13);
          if (lVar6 != 0) {
            FUN_144b3f230();
          }
        }
        puVar2 = (undefined8 *)(lVar17 + -0x10 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[-2] = *puVar2;
        puVar13[-1] = uVar11;
        uVar11 = ((undefined8 *)((longlong)puVar13 + lVar17))[1];
        *puVar13 = *(undefined8 *)((longlong)puVar13 + lVar17);
        puVar13[1] = uVar11;
        puVar2 = (undefined8 *)(lVar17 + 0x10 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[2] = *puVar2;
        puVar13[3] = uVar11;
        puVar2 = (undefined8 *)(lVar17 + 0x20 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[4] = *puVar2;
        puVar13[5] = uVar11;
        puVar2 = (undefined8 *)(lVar17 + 0x30 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[6] = *puVar2;
        puVar13[7] = uVar11;
        puVar2 = (undefined8 *)(lVar17 + 0x40 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[8] = *puVar2;
        puVar13[9] = uVar11;
        puVar2 = (undefined8 *)(lVar17 + 0x50 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[10] = *puVar2;
        puVar13[0xb] = uVar11;
        puVar2 = (undefined8 *)(lVar17 + 0x60 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[0xc] = *puVar2;
        puVar13[0xd] = uVar11;
        puVar3 = (undefined4 *)(lVar17 + 0x70 + (longlong)puVar13);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        *(undefined4 *)(puVar13 + 0xe) = *puVar3;
        *(undefined4 *)((longlong)puVar13 + 0x74) = uVar8;
        *(undefined4 *)(puVar13 + 0xf) = uVar9;
        *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar10;
        puVar2 = (undefined8 *)(lVar17 + 0x80 + (longlong)puVar13);
        uVar11 = puVar2[1];
        puVar13[0x10] = *puVar2;
        puVar13[0x11] = uVar11;
        *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(lVar17 + 0x90 + (longlong)puVar13);
        *(undefined4 *)((longlong)puVar13 + 0x94) =
             *(undefined4 *)(lVar17 + 0x94 + (longlong)puVar13);
        *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(lVar17 + 0x98 + (longlong)puVar13);
        *(undefined1 *)((longlong)puVar13 + 0x9c) =
             *(undefined1 *)(lVar17 + 0x9c + (longlong)puVar13);
        puVar13 = puVar13 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    plVar12 = (longlong *)(lVar5 + (longlong)iVar7 * 0xc0);
    if (0 < iVar4 - iVar7) {
      plVar18 = plVar12 + 6;
      uVar14 = (ulonglong)(uint)(iVar4 - iVar7);
      plVar16 = (longlong *)(*plVar16 + (longlong)iVar7 * 0xc0);
      do {
        if (plVar16 != (longlong *)0x0) {
          lVar5 = *plVar12;
          *plVar16 = lVar5;
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = plVar18[-3];
          plVar12 = plVar12 + 0x18;
          plVar16[2] = plVar18[-4];
          plVar16[3] = lVar5;
          lVar5 = plVar18[-1];
          plVar16[4] = plVar18[-2];
          plVar16[5] = lVar5;
          lVar5 = plVar18[1];
          plVar16[6] = *plVar18;
          plVar16[7] = lVar5;
          lVar5 = plVar18[3];
          plVar16[8] = plVar18[2];
          plVar16[9] = lVar5;
          lVar5 = plVar18[5];
          plVar16[10] = plVar18[4];
          plVar16[0xb] = lVar5;
          lVar5 = plVar18[7];
          plVar16[0xc] = plVar18[6];
          plVar16[0xd] = lVar5;
          lVar5 = plVar18[9];
          plVar16[0xe] = plVar18[8];
          plVar16[0xf] = lVar5;
          lVar5 = plVar18[0xb];
          plVar16[0x10] = plVar18[10];
          plVar16[0x11] = lVar5;
          uVar8 = *(undefined4 *)((longlong)plVar18 + 100);
          lVar5 = plVar18[0xd];
          uVar9 = *(undefined4 *)((longlong)plVar18 + 0x6c);
          *(int *)(plVar16 + 0x12) = (int)plVar18[0xc];
          *(undefined4 *)((longlong)plVar16 + 0x94) = uVar8;
          *(int *)(plVar16 + 0x13) = (int)lVar5;
          *(undefined4 *)((longlong)plVar16 + 0x9c) = uVar9;
          lVar5 = plVar18[0xf];
          plVar16[0x14] = plVar18[0xe];
          plVar16[0x15] = lVar5;
          *(int *)(plVar16 + 0x16) = (int)plVar18[0x10];
          *(undefined4 *)((longlong)plVar16 + 0xb4) = *(undefined4 *)((longlong)plVar18 + 0x84);
          *(int *)(plVar16 + 0x17) = (int)plVar18[0x11];
          puVar1 = (undefined1 *)((longlong)plVar18 + 0x8c);
          plVar18 = plVar18 + 0x18;
          *(undefined1 *)((longlong)plVar16 + 0xbc) = *puVar1;
        }
        uVar14 = uVar14 - 1;
        plVar16 = plVar16 + 0x18;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 0x20) = iVar4;
  }
  FUN_144d0efe0(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  FUN_144d0efe0(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  uVar11 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  return param_1;
}



// FUNCTION 144fa8940 FUN_144fa8940 body=101 status=ok
// SIG undefined FUN_144fa8940(void)

void FUN_144fa8940(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_144fa7a40(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa8a00 FUN_144fa8a00 body=99 status=ok
// SIG undefined FUN_144fa8a00(void)

void FUN_144fa8a00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_144fa7b80(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa8ac0 FUN_144fa8ac0 body=101 status=ok
// SIG undefined FUN_144fa8ac0(void)

void FUN_144fa8ac0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_144fa7cd0(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa8b80 FUN_144fa8b80 body=99 status=ok
// SIG undefined FUN_144fa8b80(void)

void FUN_144fa8b80(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_144fa7e10(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144fa8c30 FUN_144fa8c30 body=75 status=ok
// SIG undefined FUN_144fa8c30(void)

void FUN_144fa8c30(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144fa7a40(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa8cc0 FUN_144fa8cc0 body=75 status=ok
// SIG undefined FUN_144fa8cc0(void)

void FUN_144fa8cc0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144fa7b80(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa8d50 FUN_144fa8d50 body=75 status=ok
// SIG undefined FUN_144fa8d50(void)

void FUN_144fa8d50(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144fa7cd0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa8de0 FUN_144fa8de0 body=75 status=ok
// SIG undefined FUN_144fa8de0(void)

void FUN_144fa8de0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144fa7e10(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144fa8e40 FUN_144fa8e40 body=299 status=ok
// SIG undefined FUN_144fa8e40(void)

ulonglong FUN_144fa8e40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar8) {
    uVar6 = uVar8;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x28,&local_res8);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  puVar5 = (undefined8 *)*param_1;
  puVar4 = puVar3;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar2 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar2;
        uVar2 = puVar5[3];
        puVar4[2] = puVar5[2];
        puVar4[3] = uVar2;
        puVar4[4] = puVar5[4];
      }
      puVar4 = puVar4 + 5;
      puVar5 = puVar5 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x28 + 0x28;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x28;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 0x28);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar8;
}



// FUNCTION 144fa8fa0 FUN_144fa8fa0 body=447 status=ok
// SIG undefined FUN_144fa8fa0(void)

void FUN_144fa8fa0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0xc);
    lVar4 = param_2 + -4;
    lVar5 = param_2 + -0xc;
    lVar8 = (longlong)param_4;
    local_40 = lVar4;
    local_38 = lVar5;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        puVar7[0] = 0;
        lVar3 = *(longlong *)(lVar5 + (longlong)puVar7);
        if (lVar3 != 0) {
          uVar2 = *(uint *)(lVar4 + (longlong)puVar7);
          lVar3 = lVar3 + lVar5 + (longlong)puVar7;
          if ((lVar3 != 0) && (0 < (int)uVar2)) {
            *puVar7 = 0;
            uVar6 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
            uVar6 = uVar6 | (int)uVar6 >> 8;
            uVar6 = uVar6 | (int)uVar6 >> 4;
            uVar6 = uVar6 | (int)uVar6 >> 2;
            uVar6 = ((int)uVar6 >> 1 | uVar6) + 1;
            if ((int)uVar6 < (int)uVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_48 = (longlong)(int)uVar6 << 6;
            lVar4 = (*DAT_14c787670)(0,&local_48,0);
            if (*(longlong *)puVar1 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
            }
            FUN_144b3d470(lVar4,lVar5,(longlong)(int)puVar7[-1] << 6);
            if ((int)*puVar7 < 0) {
              if (*(longlong *)puVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            puVar7[-1] = uVar2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 - (longlong)puVar1;
            }
            *(longlong *)puVar1 = lVar5;
            *puVar7 = uVar6 | 0x80000000;
            FUN_144b3d470(lVar5 + -0xc + (longlong)puVar7,lVar3,(longlong)(int)uVar2 << 6);
            lVar4 = local_40;
          }
        }
        *(undefined8 *)(puVar7 + 1) = *(undefined8 *)((longlong)puVar7 + param_2 + 4);
        lVar5 = local_38;
      }
      puVar7 = puVar7 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144fa91a0 FUN_144fa91a0 body=455 status=ok
// SIG undefined FUN_144fa91a0(void)

void FUN_144fa91a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0xc);
    lVar4 = param_2 + -4;
    lVar5 = param_2 + -0xc;
    lVar8 = (longlong)param_4;
    local_40 = lVar4;
    local_38 = lVar5;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        puVar7[0] = 0;
        lVar3 = *(longlong *)(lVar5 + (longlong)puVar7);
        if (lVar3 != 0) {
          uVar2 = *(uint *)(lVar4 + (longlong)puVar7);
          lVar3 = lVar3 + lVar5 + (longlong)puVar7;
          if ((lVar3 != 0) && (0 < (int)uVar2)) {
            *puVar7 = 0;
            uVar6 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
            uVar6 = uVar6 | (int)uVar6 >> 8;
            uVar6 = uVar6 | (int)uVar6 >> 4;
            uVar6 = uVar6 | (int)uVar6 >> 2;
            uVar6 = ((int)uVar6 >> 1 | uVar6) + 1;
            if ((int)uVar6 < (int)uVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_48 = (longlong)(int)uVar6 * 0x30;
            lVar4 = (*DAT_14c787670)(0,&local_48,0);
            if (*(longlong *)puVar1 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
            }
            FUN_144b3d470(lVar4,lVar5,(longlong)(int)puVar7[-1] * 0x30);
            if ((int)*puVar7 < 0) {
              if (*(longlong *)puVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            puVar7[-1] = uVar2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 - (longlong)puVar1;
            }
            *(longlong *)puVar1 = lVar5;
            *puVar7 = uVar6 | 0x80000000;
            FUN_144b3d470(lVar5 + -0xc + (longlong)puVar7,lVar3,(longlong)(int)uVar2 * 0x30);
            lVar4 = local_40;
          }
        }
        puVar7[1] = *(uint *)((longlong)puVar7 + param_2 + 4);
        lVar5 = local_38;
      }
      puVar7 = puVar7 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144fa93b0 FUN_144fa93b0 body=448 status=ok
// SIG undefined FUN_144fa93b0(void)

void FUN_144fa93b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0xc);
    lVar4 = param_2 + -4;
    lVar5 = param_2 + -0xc;
    lVar8 = (longlong)param_4;
    local_40 = lVar4;
    local_38 = lVar5;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        puVar7[0] = 0;
        lVar3 = *(longlong *)(lVar5 + (longlong)puVar7);
        if (lVar3 != 0) {
          uVar2 = *(uint *)(lVar4 + (longlong)puVar7);
          lVar3 = lVar3 + lVar5 + (longlong)puVar7;
          if ((lVar3 != 0) && (0 < (int)uVar2)) {
            *puVar7 = 0;
            uVar6 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
            uVar6 = uVar6 | (int)uVar6 >> 8;
            uVar6 = uVar6 | (int)uVar6 >> 4;
            uVar6 = uVar6 | (int)uVar6 >> 2;
            uVar6 = ((int)uVar6 >> 1 | uVar6) + 1;
            if ((int)uVar6 < (int)uVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_48 = (longlong)(int)uVar6 << 5;
            lVar4 = (*DAT_14c787670)(0,&local_48,0);
            if (*(longlong *)puVar1 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
            }
            FUN_144b3d470(lVar4,lVar5,(longlong)(int)puVar7[-1] << 5);
            if ((int)*puVar7 < 0) {
              if (*(longlong *)puVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            puVar7[-1] = uVar2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 - (longlong)puVar1;
            }
            *(longlong *)puVar1 = lVar5;
            *puVar7 = uVar6 | 0x80000000;
            FUN_144b3d470(lVar5 + -0xc + (longlong)puVar7,lVar3,(longlong)(int)uVar2 << 5);
            lVar4 = local_40;
          }
        }
        *(undefined2 *)(puVar7 + 1) = *(undefined2 *)((longlong)puVar7 + param_2 + 4);
        lVar5 = local_38;
      }
      puVar7 = puVar7 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144fa95b0 FUN_144fa95b0 body=446 status=ok
// SIG undefined FUN_144fa95b0(void)

void FUN_144fa95b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0xc);
    lVar4 = param_2 + -4;
    lVar5 = param_2 + -0xc;
    lVar8 = (longlong)param_4;
    local_40 = lVar4;
    local_38 = lVar5;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        puVar7[0] = 0;
        lVar3 = *(longlong *)(lVar5 + (longlong)puVar7);
        if (lVar3 != 0) {
          uVar2 = *(uint *)(lVar4 + (longlong)puVar7);
          lVar3 = lVar3 + lVar5 + (longlong)puVar7;
          if ((lVar3 != 0) && (0 < (int)uVar2)) {
            *puVar7 = 0;
            uVar6 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
            uVar6 = uVar6 | (int)uVar6 >> 8;
            uVar6 = uVar6 | (int)uVar6 >> 4;
            uVar6 = uVar6 | (int)uVar6 >> 2;
            uVar6 = ((int)uVar6 >> 1 | uVar6) + 1;
            if ((int)uVar6 < (int)uVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_48 = (longlong)(int)uVar6 << 5;
            lVar4 = (*DAT_14c787670)(0,&local_48,0);
            if (*(longlong *)puVar1 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
            }
            FUN_144b3d470(lVar4,lVar5,(longlong)(int)puVar7[-1] << 5);
            if ((int)*puVar7 < 0) {
              if (*(longlong *)puVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            puVar7[-1] = uVar2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 - (longlong)puVar1;
            }
            *(longlong *)puVar1 = lVar5;
            *puVar7 = uVar6 | 0x80000000;
            FUN_144b3d470(lVar5 + -0xc + (longlong)puVar7,lVar3,(longlong)(int)uVar2 << 5);
            lVar4 = local_40;
          }
        }
        puVar7[1] = *(uint *)((longlong)puVar7 + param_2 + 4);
        lVar5 = local_38;
      }
      puVar7 = puVar7 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144fa9780 FUN_144fa9780 body=198 status=ok
// SIG undefined FUN_144fa9780(void)

void FUN_144fa9780(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x28);
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar1 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar1;
        uVar1 = puVar4[3];
        puVar3[2] = puVar4[2];
        puVar3[3] = uVar1;
        puVar3[4] = puVar4[4];
      }
      puVar3 = puVar3 + 5;
      puVar4 = puVar4 + 5;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144fa9850 FUN_144fa9850 body=1334 status=ok
// SIG undefined FUN_144fa9850(void)

void FUN_144fa9850(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0xc0);
  uVar1 = *(uint *)(param_1 + 1);
  uVar9 = (ulonglong)uVar1;
  plVar10 = (longlong *)*param_1;
  iVar14 = 0;
  plVar11 = plVar10;
  plVar12 = plVar5;
  if (3 < (int)uVar1) {
    plVar7 = plVar10 + 6;
    uVar6 = (uVar1 - 4 >> 2) + 1;
    plVar8 = plVar5 + 0x1e;
    uVar13 = (ulonglong)uVar6;
    iVar14 = uVar6 * 4;
    do {
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = *plVar11;
        *plVar11 = 0;
        lVar4 = plVar7[-3];
        plVar8[-0x1c] = plVar7[-4];
        plVar8[-0x1b] = lVar4;
        lVar4 = plVar7[-1];
        plVar8[-0x1a] = plVar7[-2];
        plVar8[-0x19] = lVar4;
        lVar4 = plVar7[1];
        plVar8[-0x18] = *plVar7;
        plVar8[-0x17] = lVar4;
        lVar4 = plVar7[3];
        plVar8[-0x16] = plVar7[2];
        plVar8[-0x15] = lVar4;
        lVar4 = plVar7[5];
        plVar8[-0x14] = plVar7[4];
        plVar8[-0x13] = lVar4;
        lVar4 = plVar7[7];
        plVar8[-0x12] = plVar7[6];
        plVar8[-0x11] = lVar4;
        lVar4 = plVar7[9];
        plVar8[-0x10] = plVar7[8];
        plVar8[-0xf] = lVar4;
        lVar4 = plVar7[0xb];
        plVar8[-0xe] = plVar7[10];
        plVar8[-0xd] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + 100);
        lVar4 = plVar7[0xd];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 0x6c);
        *(int *)(plVar8 + -0xc) = (int)plVar7[0xc];
        *(undefined4 *)((longlong)plVar8 + -0x5c) = uVar2;
        *(int *)(plVar8 + -0xb) = (int)lVar4;
        *(undefined4 *)((longlong)plVar8 + -0x54) = uVar3;
        lVar4 = plVar7[0xf];
        plVar8[-10] = plVar7[0xe];
        plVar8[-9] = lVar4;
        *(int *)(plVar8 + -8) = (int)plVar7[0x10];
        *(undefined4 *)((longlong)plVar8 + -0x3c) = *(undefined4 *)((longlong)plVar7 + 0x84);
        *(int *)(plVar8 + -7) = (int)plVar7[0x11];
        *(undefined1 *)((longlong)plVar8 + -0x34) = *(undefined1 *)((longlong)plVar7 + 0x8c);
      }
      if (plVar8 + -6 != (longlong *)0x0) {
        plVar8[-6] = plVar7[0x12];
        plVar7[0x12] = 0;
        lVar4 = plVar7[0x15];
        plVar8[-4] = plVar7[0x14];
        plVar8[-3] = lVar4;
        lVar4 = plVar7[0x17];
        plVar8[-2] = plVar7[0x16];
        plVar8[-1] = lVar4;
        lVar4 = plVar7[0x19];
        *plVar8 = plVar7[0x18];
        plVar8[1] = lVar4;
        lVar4 = plVar7[0x1b];
        plVar8[2] = plVar7[0x1a];
        plVar8[3] = lVar4;
        lVar4 = plVar7[0x1d];
        plVar8[4] = plVar7[0x1c];
        plVar8[5] = lVar4;
        lVar4 = plVar7[0x1f];
        plVar8[6] = plVar7[0x1e];
        plVar8[7] = lVar4;
        lVar4 = plVar7[0x21];
        plVar8[8] = plVar7[0x20];
        plVar8[9] = lVar4;
        lVar4 = plVar7[0x23];
        plVar8[10] = plVar7[0x22];
        plVar8[0xb] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + 0x124);
        lVar4 = plVar7[0x25];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 300);
        *(int *)(plVar8 + 0xc) = (int)plVar7[0x24];
        *(undefined4 *)((longlong)plVar8 + 100) = uVar2;
        *(int *)(plVar8 + 0xd) = (int)lVar4;
        *(undefined4 *)((longlong)plVar8 + 0x6c) = uVar3;
        lVar4 = plVar7[0x27];
        plVar8[0xe] = plVar7[0x26];
        plVar8[0xf] = lVar4;
        *(int *)(plVar8 + 0x10) = (int)plVar7[0x28];
        *(undefined4 *)((longlong)plVar8 + 0x84) = *(undefined4 *)((longlong)plVar7 + 0x144);
        *(int *)(plVar8 + 0x11) = (int)plVar7[0x29];
        *(undefined1 *)((longlong)plVar8 + 0x8c) = *(undefined1 *)((longlong)plVar7 + 0x14c);
      }
      if (plVar8 + 0x12 != (longlong *)0x0) {
        plVar8[0x12] = plVar7[0x2a];
        plVar7[0x2a] = 0;
        lVar4 = plVar7[0x2d];
        plVar8[0x14] = plVar7[0x2c];
        plVar8[0x15] = lVar4;
        lVar4 = plVar7[0x2f];
        plVar8[0x16] = plVar7[0x2e];
        plVar8[0x17] = lVar4;
        lVar4 = plVar7[0x31];
        plVar8[0x18] = plVar7[0x30];
        plVar8[0x19] = lVar4;
        lVar4 = plVar7[0x33];
        plVar8[0x1a] = plVar7[0x32];
        plVar8[0x1b] = lVar4;
        lVar4 = plVar7[0x35];
        plVar8[0x1c] = plVar7[0x34];
        plVar8[0x1d] = lVar4;
        lVar4 = plVar7[0x37];
        plVar8[0x1e] = plVar7[0x36];
        plVar8[0x1f] = lVar4;
        lVar4 = plVar7[0x39];
        plVar8[0x20] = plVar7[0x38];
        plVar8[0x21] = lVar4;
        lVar4 = plVar7[0x3b];
        plVar8[0x22] = plVar7[0x3a];
        plVar8[0x23] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + 0x1e4);
        lVar4 = plVar7[0x3d];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 0x1ec);
        *(int *)(plVar8 + 0x24) = (int)plVar7[0x3c];
        *(undefined4 *)((longlong)plVar8 + 0x124) = uVar2;
        *(int *)(plVar8 + 0x25) = (int)lVar4;
        *(undefined4 *)((longlong)plVar8 + 300) = uVar3;
        lVar4 = plVar7[0x3f];
        plVar8[0x26] = plVar7[0x3e];
        plVar8[0x27] = lVar4;
        *(int *)(plVar8 + 0x28) = (int)plVar7[0x40];
        *(undefined4 *)((longlong)plVar8 + 0x144) = *(undefined4 *)((longlong)plVar7 + 0x204);
        *(int *)(plVar8 + 0x29) = (int)plVar7[0x41];
        *(undefined1 *)((longlong)plVar8 + 0x14c) = *(undefined1 *)((longlong)plVar7 + 0x20c);
      }
      if (plVar8 + 0x2a != (longlong *)0x0) {
        plVar8[0x2a] = plVar7[0x42];
        plVar7[0x42] = 0;
        lVar4 = plVar7[0x45];
        plVar8[0x2c] = plVar7[0x44];
        plVar8[0x2d] = lVar4;
        lVar4 = plVar7[0x47];
        plVar8[0x2e] = plVar7[0x46];
        plVar8[0x2f] = lVar4;
        lVar4 = plVar7[0x49];
        plVar8[0x30] = plVar7[0x48];
        plVar8[0x31] = lVar4;
        lVar4 = plVar7[0x4b];
        plVar8[0x32] = plVar7[0x4a];
        plVar8[0x33] = lVar4;
        lVar4 = plVar7[0x4d];
        plVar8[0x34] = plVar7[0x4c];
        plVar8[0x35] = lVar4;
        lVar4 = plVar7[0x4f];
        plVar8[0x36] = plVar7[0x4e];
        plVar8[0x37] = lVar4;
        lVar4 = plVar7[0x51];
        plVar8[0x38] = plVar7[0x50];
        plVar8[0x39] = lVar4;
        lVar4 = plVar7[0x53];
        plVar8[0x3a] = plVar7[0x52];
        plVar8[0x3b] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + 0x2a4);
        lVar4 = plVar7[0x55];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 0x2ac);
        *(int *)(plVar8 + 0x3c) = (int)plVar7[0x54];
        *(undefined4 *)((longlong)plVar8 + 0x1e4) = uVar2;
        *(int *)(plVar8 + 0x3d) = (int)lVar4;
        *(undefined4 *)((longlong)plVar8 + 0x1ec) = uVar3;
        lVar4 = plVar7[0x57];
        plVar8[0x3e] = plVar7[0x56];
        plVar8[0x3f] = lVar4;
        *(int *)(plVar8 + 0x40) = (int)plVar7[0x58];
        *(undefined4 *)((longlong)plVar8 + 0x204) = *(undefined4 *)((longlong)plVar7 + 0x2c4);
        *(int *)(plVar8 + 0x41) = (int)plVar7[0x59];
        *(undefined1 *)((longlong)plVar8 + 0x20c) = *(undefined1 *)((longlong)plVar7 + 0x2cc);
      }
      plVar12 = plVar12 + 0x60;
      plVar8 = plVar8 + 0x60;
      plVar11 = plVar11 + 0x60;
      plVar7 = plVar7 + 0x60;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (iVar14 < (int)uVar1) {
    plVar7 = plVar12 + 6;
    plVar8 = plVar11 + 6;
    uVar13 = (ulonglong)(uVar1 - iVar14);
    do {
      if (plVar7 + -6 != (longlong *)0x0) {
        plVar7[-6] = *(longlong *)
                      ((longlong)plVar11 + (-0x30 - (longlong)plVar12) + (longlong)plVar7);
        *(undefined8 *)((longlong)plVar11 + (-0x30 - (longlong)plVar12) + (longlong)plVar7) = 0;
        lVar4 = plVar8[-3];
        plVar7[-4] = plVar8[-4];
        plVar7[-3] = lVar4;
        lVar4 = plVar8[-1];
        plVar7[-2] = plVar8[-2];
        plVar7[-1] = lVar4;
        lVar4 = plVar8[1];
        *plVar7 = *plVar8;
        plVar7[1] = lVar4;
        lVar4 = plVar8[3];
        plVar7[2] = plVar8[2];
        plVar7[3] = lVar4;
        lVar4 = plVar8[5];
        plVar7[4] = plVar8[4];
        plVar7[5] = lVar4;
        lVar4 = plVar8[7];
        plVar7[6] = plVar8[6];
        plVar7[7] = lVar4;
        lVar4 = plVar8[9];
        plVar7[8] = plVar8[8];
        plVar7[9] = lVar4;
        lVar4 = plVar8[0xb];
        plVar7[10] = plVar8[10];
        plVar7[0xb] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar8 + 100);
        lVar4 = plVar8[0xd];
        uVar3 = *(undefined4 *)((longlong)plVar8 + 0x6c);
        *(int *)(plVar7 + 0xc) = (int)plVar8[0xc];
        *(undefined4 *)((longlong)plVar7 + 100) = uVar2;
        *(int *)(plVar7 + 0xd) = (int)lVar4;
        *(undefined4 *)((longlong)plVar7 + 0x6c) = uVar3;
        lVar4 = plVar8[0xf];
        plVar7[0xe] = plVar8[0xe];
        plVar7[0xf] = lVar4;
        *(int *)(plVar7 + 0x10) = (int)plVar8[0x10];
        *(undefined4 *)((longlong)plVar7 + 0x84) = *(undefined4 *)((longlong)plVar8 + 0x84);
        *(int *)(plVar7 + 0x11) = (int)plVar8[0x11];
        *(undefined1 *)((longlong)plVar7 + 0x8c) = *(undefined1 *)((longlong)plVar8 + 0x8c);
      }
      plVar8 = plVar8 + 0x18;
      plVar7 = plVar7 + 0x18;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (0 < (int)uVar1) {
    do {
      if (*plVar10 != 0) {
        FUN_144b3f230();
      }
      plVar10 = plVar10 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = plVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144fa9d90 FUN_144fa9d90 body=128 status=ok
// SIG undefined FUN_144fa9d90(void)

int * FUN_144fa9d90(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_1 = (longlong)*param_3 * 0x80 + param_1;
  iVar1 = 0;
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x18);
  do {
    if (*piVar3 == *param_4) {
      *param_2 = iVar2;
      if (iVar2 != -1) {
        piVar3 = (int *)(param_1 + 0x1c + (longlong)iVar2 * 8);
        *piVar3 = *piVar3 + 1;
        return param_2;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar2 < 0x10);
  *param_2 = 0;
  do {
    if (*(int *)(param_1 + 0x18 + (longlong)iVar1 * 8) == -1) break;
    iVar1 = iVar1 + 1;
    *param_2 = iVar1;
  } while (iVar1 < 0x10);
  *(int *)(param_1 + 0x18 + (longlong)iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 0x1c + (longlong)iVar1 * 8) = 1;
  return param_2;
}



// FUNCTION 144fa9e10 FUN_144fa9e10 body=36 status=ok
// SIG undefined FUN_144fa9e10(void)

void FUN_144fa9e10(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  param_1 = (longlong)*param_2 * 0x80 + param_1;
  piVar1 = (int *)(param_1 + 0x1c + (longlong)*param_3 * 8);
  *piVar1 = *piVar1 + -1;
  if (*(int *)(param_1 + 0x1c + (longlong)*param_3 * 8) == 0) {
    *(undefined4 *)(param_1 + 0x18 + (longlong)*param_3 * 8) = 0xffffffff;
  }
  return;
}



// FUNCTION 144fa9e40 FUN_144fa9e40 body=51 status=ok
// SIG undefined FUN_144fa9e40(void)

int * FUN_144fa9e40(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x18 + (longlong)*param_3 * 0x80);
  iVar1 = 0;
  do {
    if (*piVar2 == *param_4) {
      *param_2 = iVar1;
      return param_2;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0x10);
  *param_2 = -1;
  return param_2;
}



// FUNCTION 144fa9e80 FUN_144fa9e80 body=24 status=ok
// SIG undefined FUN_144fa9e80(void)

undefined4 * FUN_144fa9e80(longlong param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18 + ((longlong)*param_3 * 0x10 + (longlong)*param_4) * 8);
  return param_2;
}



// FUNCTION 144fa9ea0 FUN_144fa9ea0 body=38 status=ok
// SIG undefined FUN_144fa9ea0(void)

longlong FUN_144fa9ea0(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18 + (longlong)*param_2 * 0x80);
  uVar2 = 0;
  do {
    if (*piVar3 != -1) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
    piVar3 = piVar3 + 2;
  } while ((int)uVar1 < 0x10);
  return (ulonglong)(uint3)(uVar1 >> 8) << 8;
}



// FUNCTION 144fa9ed0 FUN_144fa9ed0 body=28 status=ok
// SIG undefined FUN_144fa9ed0(void)

bool FUN_144fa9ed0(longlong param_1,char param_2)

{
  bool bVar1;
  
  if (param_2 == '\0') {
    LOCK();
    bVar1 = *(char *)(param_1 + 0x20) == '\0';
    if (bVar1) {
      *(char *)(param_1 + 0x20) = '\x03';
    }
    UNLOCK();
    return !bVar1;
  }
  *(undefined1 *)(param_1 + 0x20) = 3;
  return false;
}



// FUNCTION 144fa9ef0 FUN_144fa9ef0 body=456 status=ok
// SIG undefined FUN_144fa9ef0(void)

char FUN_144fa9ef0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_res8;
  longlong local_18 [2];
  
  LOCK();
  cVar4 = (char)param_1[4];
  bVar8 = cVar4 == '\0';
  if (bVar8) {
    *(char *)(param_1 + 4) = '\x01';
    cVar4 = '\0';
  }
  UNLOCK();
  if (bVar8) {
    local_res8 = 0x90;
    lVar5 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar5,"FindPathOutput");
    }
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_144b40a10(lVar5);
    }
    lVar2 = param_1[6];
    param_1[6] = lVar5;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
    lVar5 = *plVar6;
    *plVar6 = 0;
    lVar2 = param_1[5];
    param_1[5] = lVar5;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (local_18[0] != 0) {
      FUN_144b3f230();
    }
    FUN_144be90e0(0x12d7a10c);
    if (param_1[5] == 0) {
      lVar5 = param_1[6];
      *(undefined4 *)(lVar5 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x70) = 0;
      *(undefined1 *)(lVar5 + 0x7c) = 5;
    }
    else {
      FUN_144c2f370(param_1[5],param_4,param_5);
      *(bool *)(param_1[5] + 0xcf) = param_6 != (undefined8 *)0x0;
      FUN_144c2f360(param_1[5]);
      FUN_144b41050(param_2,param_1[5],param_1[6]);
      FUN_144c2f930(param_1[6]);
      if (param_6 != (undefined8 *)0x0) {
        lVar5 = param_1[6];
        puVar7 = (undefined8 *)(lVar5 + 0x80);
        if (puVar7 != param_6) {
          FUN_144c2e9f0(param_6,&PTR_vftable_14c6e47a0);
          FUN_144c2e9f0(puVar7,&PTR_vftable_14c6e47a0);
          uVar3 = *param_6;
          *param_6 = *puVar7;
          *puVar7 = uVar3;
          uVar1 = *(undefined4 *)(param_6 + 1);
          *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar5 + 0x88);
          *(undefined4 *)(lVar5 + 0x88) = uVar1;
          uVar1 = *(undefined4 *)((longlong)param_6 + 0xc);
          *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)(lVar5 + 0x8c);
          *(undefined4 *)(lVar5 + 0x8c) = uVar1;
        }
        lVar5 = param_1[5];
        *param_7 = *(undefined4 *)(lVar5 + 0xa8);
        param_7[1] = *(undefined4 *)(lVar5 + 0xac);
        param_7[2] = *(undefined4 *)(lVar5 + 0xb0);
      }
    }
    LOCK();
    cVar4 = (char)param_1[4];
    if (cVar4 == '\x01') {
      *(char *)(param_1 + 4) = '\x02';
      cVar4 = '\x01';
    }
    UNLOCK();
  }
  return cVar4;
}



// FUNCTION 144faa0c0 FUN_144faa0c0 body=318 status=ok
// SIG undefined FUN_144faa0c0(void)

char FUN_144faa0c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 local_res8;
  longlong local_18 [2];
  
  FUN_144be90e0(0xd6e89f9e);
  LOCK();
  cVar2 = (char)param_1[4];
  bVar5 = cVar2 == '\0';
  if (bVar5) {
    *(char *)(param_1 + 4) = '\x01';
    cVar2 = '\0';
  }
  UNLOCK();
  if (bVar5) {
    local_res8 = 0x60;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar3,"FindPathOutput");
    }
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_144c31c10(lVar3);
    }
    lVar1 = param_1[6];
    param_1[6] = lVar3;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
    lVar3 = *plVar4;
    *plVar4 = 0;
    lVar1 = param_1[5];
    param_1[5] = lVar3;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
    if (local_18[0] != 0) {
      FUN_144b3f230();
    }
    if (param_1[5] == 0) {
      lVar3 = param_1[6];
      *(undefined4 *)(lVar3 + 0x54) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0x50) = 0;
      *(undefined1 *)(lVar3 + 0x5c) = 5;
    }
    else {
      FUN_144c31b00(param_1[5],param_4);
      FUN_144c31af0(param_1[5]);
      FUN_144be90e0(0x18bdab04);
      FUN_144c32440(param_2,param_1[5],param_1[6]);
      FUN_144c32300(param_1[6]);
    }
    LOCK();
    cVar2 = (char)param_1[4];
    if (cVar2 == '\x01') {
      *(char *)(param_1 + 4) = '\x02';
      cVar2 = '\x01';
    }
    UNLOCK();
  }
  return cVar2;
}



// FUNCTION 144faa200 FUN_144faa200 body=495 status=ok
// SIG undefined FUN_144faa200(void)

void FUN_144faa200(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiPathRequestQueue::vftable;
  lVar3 = param_1[10];
  lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0xb) * 8;
  while (lVar2 != lVar3) {
    plVar1 = (longlong *)(lVar2 + -8);
    lVar2 = lVar2 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  lVar3 = param_1[8];
  lVar2 = lVar3 + (longlong)*(int *)(param_1 + 9) * 8;
  while (lVar2 != lVar3) {
    plVar1 = (longlong *)(lVar2 + -8);
    lVar2 = lVar2 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 3);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  lVar2 = param_1[6];
  lVar3 = (longlong)*(int *)(param_1 + 7) * 0x38 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x38);
    lVar3 = lVar3 + -0x38;
    (**(code **)(*plVar1 + 8))(lVar3,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) * 0x38);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  lVar2 = param_1[4];
  lVar3 = (longlong)*(int *)(param_1 + 5) * 0x38 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x38);
    lVar3 = lVar3 + -0x38;
    (**(code **)(*plVar1 + 8))(lVar3,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0x38);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144faa3f0 FUN_144faa3f0 body=467 status=ok
// SIG undefined FUN_144faa3f0(void)

void FUN_144faa3f0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined1 local_138 [120];
  int local_c0;
  undefined1 local_69;
  
  local_res8 = 0x90;
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"FindPathOutput");
  }
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_144b40a10(lVar6);
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  if (lVar6 != 0) {
    FUN_144b3f230();
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2), cVar5 == '\0')) {
    *(undefined4 *)(lVar3 + 0x74) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x70) = 0;
    *(undefined1 *)(lVar3 + 0x7c) = 5;
  }
  else {
    FUN_144b40b30(local_138);
    FUN_144c2f0b0(local_138,lVar6);
    iVar4 = local_c0;
    if ((-1 < param_3) && (iVar4 = 0x7fffffff, local_c0 < 0x7fffffff)) {
      iVar4 = local_c0;
    }
    local_c0 = iVar4;
    local_69 = param_6 != (undefined8 *)0x0;
    FUN_144c2f370(local_138,param_4,param_5);
    FUN_144c2f360(local_138);
    FUN_144b41050(param_2,local_138,lVar3);
    FUN_144c2f930(lVar3);
    if (param_6 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(lVar3 + 0x80);
      if (puVar8 != param_6) {
        FUN_144c2e9f0(param_6,&PTR_vftable_14c6e47a0);
        FUN_144c2e9f0(puVar8,&PTR_vftable_14c6e47a0);
        uVar7 = *param_6;
        *param_6 = *puVar8;
        *puVar8 = uVar7;
        uVar1 = *(undefined4 *)(param_6 + 1);
        *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar3 + 0x88);
        *(undefined4 *)(lVar3 + 0x88) = uVar1;
        uVar1 = *(undefined4 *)((longlong)param_6 + 0xc);
        *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)(lVar3 + 0x8c);
        *(undefined4 *)(lVar3 + 0x8c) = uVar1;
      }
      *param_7 = *(undefined4 *)(lVar6 + 0xa8);
      param_7[1] = *(undefined4 *)(lVar6 + 0xac);
      param_7[2] = *(undefined4 *)(lVar6 + 0xb0);
    }
    FUN_144b409a0(local_138);
  }
  return;
}



// FUNCTION 144faa5d0 FUN_144faa5d0 body=287 status=ok
// SIG undefined FUN_144faa5d0(void)

void FUN_144faa5d0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined1 local_c8 [88];
  int local_70;
  
  local_res8 = 0x60;
  lVar4 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar4,"FindPathOutput");
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144c31c10(lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (lVar4 != 0) {
    FUN_144b3f230();
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
  }
  FUN_144c31710(local_c8,0);
  FUN_144c319d0(local_c8,uVar5);
  iVar3 = local_70;
  if ((-1 < param_3) && (iVar3 = 0x7fffffff, local_70 < 0x7fffffff)) {
    iVar3 = local_70;
  }
  local_70 = iVar3;
  FUN_144c31b00(local_c8,param_4);
  FUN_144c31af0(local_c8);
  FUN_144c32440(param_2,local_c8,uVar2);
  FUN_144c32300(uVar2);
  FUN_144b4a050(local_c8);
  return;
}



// FUNCTION 144faa6f0 FUN_144faa6f0 body=275 status=ok
// SIG undefined FUN_144faa6f0(void)

void FUN_144faa6f0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x38);
    uVar1 = *(uint *)(param_1 + 1);
    plVar5 = (longlong *)*param_1;
    uVar6 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      plVar4 = plVar5 + 4;
      uVar7 = (ulonglong)uVar1;
      puVar3 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (puVar3 + -2 != (undefined8 *)0x0) {
          *puVar3 = 1;
          puVar3[-1] = 0xffffffff;
          puVar3[-2] = hkaiNavMeshPathRequestInfo::vftable;
          puVar3[1] = plVar4[-1];
          plVar4[-1] = 0;
          puVar3[2] = *plVar4;
          *plVar4 = 0;
          puVar3[3] = plVar4[1];
          *(int *)(puVar3 + 4) = (int)plVar4[2];
          *(undefined1 *)((longlong)puVar3 + 0x24) = *(undefined1 *)((longlong)plVar4 + 0x14);
          *(undefined1 *)((longlong)puVar3 + 0x25) = *(undefined1 *)((longlong)plVar4 + 0x15);
          *(undefined1 *)((longlong)puVar3 + 0x26) = *(undefined1 *)((longlong)plVar4 + 0x16);
        }
        puVar3 = puVar3 + 7;
        plVar4 = plVar4 + 7;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      do {
        (**(code **)(*plVar5 + 8))(plVar5,0);
        plVar5 = plVar5 + 7;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = lVar2;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144faa810 FUN_144faa810 body=275 status=ok
// SIG undefined FUN_144faa810(void)

void FUN_144faa810(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x38);
    uVar1 = *(uint *)(param_1 + 1);
    plVar5 = (longlong *)*param_1;
    uVar6 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      plVar4 = plVar5 + 4;
      uVar7 = (ulonglong)uVar1;
      puVar3 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (puVar3 + -2 != (undefined8 *)0x0) {
          *puVar3 = 1;
          puVar3[-1] = 0xffffffff;
          puVar3[-2] = hkaiNavVolumePathRequestInfo::vftable;
          puVar3[1] = plVar4[-1];
          plVar4[-1] = 0;
          puVar3[2] = *plVar4;
          *plVar4 = 0;
          puVar3[3] = plVar4[1];
          *(int *)(puVar3 + 4) = (int)plVar4[2];
          *(undefined1 *)((longlong)puVar3 + 0x24) = *(undefined1 *)((longlong)plVar4 + 0x14);
          *(undefined1 *)((longlong)puVar3 + 0x25) = *(undefined1 *)((longlong)plVar4 + 0x15);
          *(undefined1 *)((longlong)puVar3 + 0x26) = *(undefined1 *)((longlong)plVar4 + 0x16);
        }
        puVar3 = puVar3 + 7;
        plVar4 = plVar4 + 7;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      do {
        (**(code **)(*plVar5 + 8))(plVar5,0);
        plVar5 = plVar5 + 7;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = lVar2;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144faa930 FUN_144faa930 body=167 status=ok
// SIG undefined FUN_144faa930(void)

undefined8 * FUN_144faa930(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = hkaiPathRequestManager::vftable;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  local_res8 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkCriticalSection");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144bdde80(lVar1);
    param_1[5] = uVar2;
    return param_1;
  }
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 144faa9e0 FUN_144faa9e0 body=190 status=ok
// SIG undefined FUN_144faa9e0(void)

void FUN_144faa9e0(undefined8 *param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  longlong lVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[5];
  *param_1 = hkaiPathRequestManager::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (*DAT_14c787678)(0,lpCriticalSection,0);
  }
  lVar2 = param_1[3];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 4) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144faaaa0 FUN_144faaaa0 body=344 status=ok
// SIG undefined FUN_144faaaa0(void)

byte * FUN_144faaaa0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_res8;
  
  puVar4 = (undefined8 *)0x0;
  if (0 < *(int *)(param_1 + 0x20)) {
    puVar2 = puVar4;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)puVar2 * 8) == 0) {
        *param_2 = (byte)puVar2;
        if ((byte)puVar2 != 0xff) goto LAB_144faab2e;
        break;
      }
      uVar5 = (int)puVar2 + 1;
      puVar2 = (undefined8 *)(ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x20));
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *param_2 = *(byte *)(param_1 + 0x20);
  iVar3 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
    FUN_144fac660((longlong *)(param_1 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar3;
LAB_144faab2e:
  local_res8 = 0x60;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"hkaiPathRequestQueue");
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 1;
    puVar2[1] = 0xffffffff;
    *puVar2 = hkaiPathRequestQueue::vftable;
    *(byte *)(puVar2 + 3) = *param_2;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x80000000;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80000000;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x80000000;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x80000000;
    puVar4 = puVar2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*param_2 * 8);
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (ulonglong)*param_2 * 8) = puVar4;
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  return param_2;
}



// FUNCTION 144faac00 FUN_144faac00 body=79 status=ok
// SIG undefined FUN_144faac00(void)

ulonglong FUN_144faac00(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x20);
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      if (param_2 == 0) break;
      if ((param_2 & 1) != 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x18);
        lVar1 = *(longlong *)(uVar3 + lVar4 * 8);
        if ((lVar1 != 0) &&
           ((((*(int *)(lVar1 + 0x28) != 0 || (*(int *)(lVar1 + 0x38) != 0)) ||
             (*(int *)(lVar1 + 0x48) != 0)) || (*(int *)(lVar1 + 0x58) != 0)))) {
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
      }
      lVar4 = lVar4 + 1;
      param_2 = param_2 >> 1;
    } while (lVar4 < (longlong)uVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 144faac50 FUN_144faac50 body=304 status=ok
// SIG undefined FUN_144faac50(void)

undefined8 *
FUN_144faac50(longlong param_1,longlong param_2,longlong param_3,byte param_4,undefined4 param_5)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_4 * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar4 = (longlong)*(int *)(lVar2 + 0x28) * 0x38 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x38) {
    if (*(longlong *)(lVar3 + 0x28) == param_2) {
      *(undefined1 *)(lVar3 + 0x36) = 1;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x28) + 1;
  if ((int)(*(uint *)(lVar2 + 0x2c) & 0x7fffffff) < iVar6) {
    FUN_144fac7a0(lVar2 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar1 = *(int *)(lVar2 + 0x28);
  *(int *)(lVar2 + 0x28) = iVar6;
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)(lVar2 + 0x20));
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    *puVar5 = hkaiNavMeshPathRequestInfo::vftable;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *(undefined2 *)((longlong)puVar5 + 0x34) = 0x1ff;
    *(undefined1 *)((longlong)puVar5 + 0x36) = 0;
  }
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  lVar3 = puVar5[3];
  puVar5[3] = param_3;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(puVar5 + 6) = param_5;
  *(undefined1 *)((longlong)puVar5 + 0x34) = *(undefined1 *)(lVar2 + 0x18);
  puVar5[5] = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return puVar5;
}



// FUNCTION 144faad80 FUN_144faad80 body=304 status=ok
// SIG undefined FUN_144faad80(void)

undefined8 *
FUN_144faad80(longlong param_1,longlong param_2,longlong param_3,byte param_4,undefined4 param_5)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_4 * 8);
  lVar3 = *(longlong *)(lVar2 + 0x30);
  lVar4 = (longlong)*(int *)(lVar2 + 0x38) * 0x38 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x38) {
    if (*(longlong *)(lVar3 + 0x28) == param_2) {
      *(undefined1 *)(lVar3 + 0x36) = 1;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x38) + 1;
  if ((int)(*(uint *)(lVar2 + 0x3c) & 0x7fffffff) < iVar6) {
    FUN_144fac940(lVar2 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar1 = *(int *)(lVar2 + 0x38);
  *(int *)(lVar2 + 0x38) = iVar6;
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)(lVar2 + 0x30));
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    *puVar5 = hkaiNavVolumePathRequestInfo::vftable;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *(undefined2 *)((longlong)puVar5 + 0x34) = 0x1ff;
    *(undefined1 *)((longlong)puVar5 + 0x36) = 0;
  }
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  lVar3 = puVar5[3];
  puVar5[3] = param_3;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(puVar5 + 6) = param_5;
  *(undefined1 *)((longlong)puVar5 + 0x34) = *(undefined1 *)(lVar2 + 0x18);
  puVar5[5] = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return puVar5;
}



// FUNCTION 144faaeb0 FUN_144faaeb0 body=165 status=ok
// SIG undefined FUN_144faaeb0(void)

void FUN_144faaeb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  int iVar3;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(param_2 + 0x18) * 8);
  FUN_144b3d910(param_2);
  iVar3 = *(int *)(lVar2 + 0x58) + 1;
  if ((int)(*(uint *)(lVar2 + 0x5c) & 0x7fffffff) < iVar3) {
    FUN_144facd20(lVar2 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x50) + (longlong)*(int *)(lVar2 + 0x58) * 8);
  if (plVar1 == (longlong *)0x0) {
    *(int *)(lVar2 + 0x58) = iVar3;
    if (param_2 != 0) {
      FUN_144b3f230(param_2);
    }
  }
  else {
    *plVar1 = param_2;
    *(int *)(lVar2 + 0x58) = iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000144faaf4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144faaf70 FUN_144faaf70 body=275 status=ok
// SIG undefined FUN_144faaf70(void)

void FUN_144faaf70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar6;
  
  lVar5 = *param_2;
  lVar2 = param_2[1];
  if (lVar5 != lVar2) {
    iVar6 = (int)(lVar2 - lVar5 >> 4);
    if (iVar6 < 2) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
    }
    else {
      FUN_144fac480(lVar5,0,iVar6 + -1,&LAB_144faaf60);
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
    }
    EnterCriticalSection(lpCriticalSection);
    do {
      lVar3 = *(longlong *)(lVar5 + 8);
      if (lVar3 != 0) {
        FUN_144b3d910(lVar3);
        lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(lVar3 + 0x18) * 8);
        FUN_144b3d910(lVar3);
        iVar6 = *(int *)(lVar4 + 0x58) + 1;
        if ((int)(*(uint *)(lVar4 + 0x5c) & 0x7fffffff) < iVar6) {
          FUN_144facd20(lVar4 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)*(int *)(lVar4 + 0x58) * 8);
        if (plVar1 == (longlong *)0x0) {
          *(int *)(lVar4 + 0x58) = iVar6;
          FUN_144b3f230(lVar3);
        }
        else {
          *plVar1 = lVar3;
          *(int *)(lVar4 + 0x58) = iVar6;
        }
        FUN_144b3f230(lVar3);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar2);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 144fab090 FUN_144fab090 body=358 status=ok
// SIG undefined FUN_144fab090(void)

longlong FUN_144fab090(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  char *local_58;
  char *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  
  plVar6 = *(longlong **)(param_1 + 0x18);
  plVar1 = plVar6 + *(int *)(param_1 + 0x20);
  if (plVar6 != plVar1) {
    pcVar7 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x114);
    plVar5 = (longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0)
    ;
    do {
      lVar3 = *plVar6;
      if (*pcVar7 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        if (*pcVar7 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar2 = FUN_144b3f4a0();
        *plVar5 = lVar2;
      }
      lVar2 = *(longlong *)(lVar2 + 0x3e0);
      if (lVar2 != 0) {
        local_58 = "TtlinearSearch";
        local_50 = "";
        FUN_144b3f370(lVar2,&local_58);
      }
      lVar4 = *(longlong *)(lVar3 + 0x20);
      lVar3 = (longlong)*(int *)(lVar3 + 0x28) * 0x38 + lVar4;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x38) {
        if ((*(longlong *)(lVar4 + 0x28) == param_2) && (*(char *)(lVar4 + 0x36) == '\0')) {
          if (lVar2 != 0) {
            local_48 = &DAT_149981764;
            local_40 = &DAT_149981766;
            FUN_144b3f260(lVar2,&local_48);
          }
          if (lVar4 != 0) {
            return lVar4;
          }
          goto LAB_144fab195;
        }
      }
      if (lVar2 != 0) {
        local_38 = &DAT_149981764;
        local_30 = &DAT_149981766;
        FUN_144b3f260(lVar2,&local_38);
      }
LAB_144fab195:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return 0;
}



// FUNCTION 144fab200 FUN_144fab200 body=61 status=ok
// SIG undefined FUN_144fab200(void)

longlong FUN_144fab200(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 8);
  lVar1 = *(longlong *)(lVar2 + 0x20);
  lVar2 = (longlong)*(int *)(lVar2 + 0x28) * 0x38 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if ((*(longlong *)(lVar1 + 0x28) == param_2) && (*(char *)(lVar1 + 0x36) == '\0')) break;
    lVar1 = lVar1 + 0x38;
  }
  *(undefined1 *)(lVar1 + 0x36) = 1;
  return lVar1;
}



// FUNCTION 144fab240 FUN_144fab240 body=233 status=ok
// SIG undefined FUN_144fab240(void)

void FUN_144fab240(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      if (param_2 == 0) {
        return;
      }
      if (((param_2 & 1) != 0) &&
         (lVar2 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x18)), lVar2 != 0)) {
        lVar3 = *(longlong *)(lVar2 + 0x20);
        lVar5 = (longlong)*(int *)(lVar2 + 0x28) * 0x38 + lVar3;
        for (; lVar3 != lVar5; lVar3 = lVar3 + 0x38) {
          *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
        }
        lVar3 = *(longlong *)(lVar2 + 0x30);
        lVar5 = (longlong)*(int *)(lVar2 + 0x38) * 0x38 + lVar3;
        for (; lVar3 != lVar5; lVar3 = lVar3 + 0x38) {
          *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
        }
        plVar4 = *(longlong **)(lVar2 + 0x40);
        plVar1 = plVar4 + *(int *)(lVar2 + 0x48);
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          *(int *)(*plVar4 + 0x1c) = *(int *)(*plVar4 + 0x1c) + 1;
        }
        plVar4 = *(longlong **)(lVar2 + 0x50);
        plVar1 = plVar4 + *(int *)(lVar2 + 0x58);
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          *(int *)(*plVar4 + 0x1c) = *(int *)(*plVar4 + 0x1c) + 1;
        }
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 >> 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 144fab330 FUN_144fab330 body=442 status=ok
// SIG undefined FUN_144fab330(void)

void FUN_144fab330(longlong param_1,uint param_2,int param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res18;
  
  uVar5 = (ulonglong)param_3;
  iVar4 = (int)param_5[1];
  if (iVar4 < param_3) {
    iVar7 = 0;
    local_res18 = (undefined1)iVar4;
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar3 = 1;
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x18));
        if ((lVar1 != 0) && ((param_2 & uVar3) != 0)) {
          FUN_144fabcf0(lVar1 + 0x20,param_5,0);
          FUN_144fabe90(lVar1 + 0x30,param_5,2);
          FUN_144fac030(lVar1 + 0x40,param_5,1);
          FUN_144fac160(lVar1 + 0x50,param_5);
          if (param_3 < (int)param_5[1]) {
            FUN_144fac300(*param_5,(int)param_5[1],param_3,local_res18);
            if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < param_3) {
              FUN_144facae0(param_5,&PTR_vftable_14c6e47a0);
            }
            if (((int)param_5[1] < param_3) || (param_3 < (int)param_5[1])) {
              *(int *)(param_5 + 1) = param_3;
            }
          }
        }
        iVar7 = iVar7 + 1;
        uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
        lVar6 = lVar6 + 8;
      } while (iVar7 < *(int *)(param_1 + 0x20));
    }
    iVar7 = (int)param_5[1] - iVar4;
    if (1 < iVar7) {
      FUN_144facbf0((longlong)iVar4 * 0x10 + *param_5,0,iVar7 + -1,local_res18);
    }
    if (param_3 < (int)param_5[1]) {
      piVar2 = (int *)(*param_5 + 0xc + uVar5 * 0x10);
      while (iVar4 = (int)uVar5, param_4 <= *piVar2) {
        uVar5 = (ulonglong)(iVar4 + 1U);
        piVar2 = piVar2 + 4;
        if ((int)param_5[1] <= (int)(iVar4 + 1U)) {
          return;
        }
      }
      if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar4) {
        FUN_144facae0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar4);
      }
      if (((int)param_5[1] < iVar4) || (iVar4 < (int)param_5[1])) {
        *(int *)(param_5 + 1) = iVar4;
      }
    }
  }
  return;
}



// FUNCTION 144fab4f0 FUN_144fab4f0 body=731 status=ok
// SIG undefined FUN_144fab4f0(void)

longlong * FUN_144fab4f0(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  
  local_res8 = 0x30;
  lVar4 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar4,"hkaiPathRequestManager");
  }
  puVar10 = (undefined8 *)0x0;
  puVar5 = puVar10;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_144faa930(lVar4);
  }
  *param_2 = (longlong)puVar5;
  if ((int)(*(uint *)((longlong)puVar5 + 0x24) & 0x7fffffff) < *(int *)(param_1 + 0x20)) {
    FUN_144fac660(puVar5 + 3,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x20));
  }
  puVar5 = puVar10;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar9 = (uint)puVar5;
      lVar4 = (longlong)(int)uVar9 * 8;
      lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x18));
      if (lVar2 == 0) {
        lVar4 = *param_2;
        iVar8 = *(int *)(lVar4 + 0x20);
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar8 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
        }
        *(int *)(lVar4 + 0x20) = iVar8 + 1;
      }
      else if ((param_3 >> (uVar9 & 0x1f) & 1) == 0) {
        local_res8 = 0x60;
        puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar6,"hkaiPathRequestQueue");
        }
        puVar7 = puVar10;
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[2] = 1;
          *puVar6 = hkaiPathRequestQueue::vftable;
          puVar6[1] = 0xffffffff;
          *(char *)(puVar6 + 3) = (char)puVar5;
          puVar6[4] = 0;
          *(undefined4 *)(puVar6 + 5) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x80000000;
          puVar6[6] = 0;
          *(undefined4 *)(puVar6 + 7) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x80000000;
          puVar6[8] = 0;
          *(undefined4 *)(puVar6 + 9) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x4c) = 0x80000000;
          puVar6[10] = 0;
          *(undefined4 *)(puVar6 + 0xb) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x80000000;
          puVar7 = puVar6;
        }
        lVar4 = *param_2;
        iVar8 = *(int *)(lVar4 + 0x20) + 1;
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + (longlong)*(int *)(lVar4 + 0x20) * 8);
        if ((puVar5 == (undefined8 *)0x0) || (*puVar5 = puVar7, puVar7 == (undefined8 *)0x0)) {
          *(int *)(lVar4 + 0x20) = iVar8;
          if (puVar7 == (undefined8 *)0x0) goto LAB_144fab77b;
        }
        else {
          FUN_144b3d910(puVar7);
          *(int *)(lVar4 + 0x20) = iVar8;
        }
        FUN_144b3f230(puVar7);
      }
      else {
        lVar3 = *param_2;
        iVar8 = *(int *)(lVar3 + 0x20);
        plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar8 * 8);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = lVar2;
          FUN_144b3d910();
        }
        *(int *)(lVar3 + 0x20) = iVar8 + 1;
        local_res8 = 0x60;
        puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res8);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar6,"hkaiPathRequestQueue");
        }
        puVar7 = puVar10;
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[2] = 1;
          *puVar6 = hkaiPathRequestQueue::vftable;
          puVar6[1] = 0xffffffff;
          *(char *)(puVar6 + 3) = (char)puVar5;
          puVar6[4] = 0;
          *(undefined4 *)(puVar6 + 5) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x80000000;
          puVar6[6] = 0;
          *(undefined4 *)(puVar6 + 7) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x80000000;
          puVar6[8] = 0;
          *(undefined4 *)(puVar6 + 9) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x4c) = 0x80000000;
          puVar6[10] = 0;
          *(undefined4 *)(puVar6 + 0xb) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x80000000;
          puVar7 = puVar6;
        }
        lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x18));
        *(undefined8 **)(lVar4 + *(longlong *)(param_1 + 0x18)) = puVar7;
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
      }
LAB_144fab77b:
      puVar5 = (undefined8 *)(ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < *(int *)(param_1 + 0x20));
  }
  return param_2;
}



// FUNCTION 144fab7d0 FUN_144fab7d0 body=444 status=ok
// SIG undefined FUN_144fab7d0(void)

void FUN_144fab7d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar15 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar6 = *(longlong *)(lVar5 + lVar15);
      if (lVar6 != 0) {
        if ((((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x38) == 0)) &&
            (*(int *)(lVar6 + 0x48) == 0)) && (*(int *)(lVar6 + 0x58) == 0)) {
          uVar7 = *(undefined8 *)(lVar15 + *(longlong *)(param_2 + 0x18));
          *(undefined8 *)(lVar15 + *(longlong *)(param_2 + 0x18)) = 0;
          lVar6 = *(longlong *)(lVar5 + lVar15);
          *(undefined8 *)(lVar5 + lVar15) = uVar7;
          if (lVar6 != 0) {
            FUN_144b3f230();
          }
        }
        else {
          lVar5 = *(longlong *)(lVar15 + *(longlong *)(param_2 + 0x18));
          FUN_144fab990(lVar6 + 0x20,lVar5 + 0x20);
          FUN_144fabb40(lVar6 + 0x30,lVar5 + 0x30);
          plVar1 = (longlong *)(lVar5 + 0x40);
          plVar11 = (longlong *)(lVar6 + 0x40);
          if ((*(int *)(lVar6 + 0x48) < *(int *)(lVar5 + 0x48)) && (plVar1 != plVar11)) {
            FUN_144fac290(plVar11,&PTR_vftable_14c6e47a0);
            FUN_144fac290(plVar1,&PTR_vftable_14c6e47a0);
            lVar8 = *plVar11;
            *plVar11 = *plVar1;
            *plVar1 = lVar8;
            uVar2 = *(undefined4 *)(lVar6 + 0x48);
            *(undefined4 *)(lVar6 + 0x48) = *(undefined4 *)(lVar5 + 0x48);
            *(undefined4 *)(lVar5 + 0x48) = uVar2;
            uVar2 = *(undefined4 *)(lVar6 + 0x4c);
            *(undefined4 *)(lVar6 + 0x4c) = *(undefined4 *)(lVar5 + 0x4c);
            *(undefined4 *)(lVar5 + 0x4c) = uVar2;
          }
          uVar3 = *(uint *)(lVar5 + 0x48);
          uVar12 = (ulonglong)uVar3;
          iVar4 = *(int *)(lVar6 + 0x48);
          puVar10 = (undefined8 *)*plVar1;
          iVar13 = iVar4 + uVar3;
          if ((int)(*(uint *)(lVar6 + 0x4c) & 0x7fffffff) < iVar13) {
            FUN_144facf70(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          puVar9 = (undefined8 *)(*plVar11 + (longlong)iVar4 * 8);
          if (0 < (int)uVar3) {
            do {
              if (puVar9 != (undefined8 *)0x0) {
                uVar7 = *puVar10;
                puVar10 = puVar10 + 1;
                *puVar9 = uVar7;
              }
              uVar12 = uVar12 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar12 != 0);
          }
          *(int *)(lVar6 + 0x48) = iVar13;
          *(undefined4 *)(lVar5 + 0x48) = 0;
        }
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 8;
    } while (iVar14 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 144fab990 FUN_144fab990 body=422 status=ok
// SIG undefined FUN_144fab990(void)

void FUN_144fab990(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] < (int)param_2[1]) && (param_2 != param_1)) {
    FUN_144faa6f0(param_1,&PTR_vftable_14c6e47a0);
    FUN_144faa6f0(param_2,&PTR_vftable_14c6e47a0);
    lVar4 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar4;
    lVar4 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar4;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  }
  uVar3 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar3;
  lVar5 = param_1[1];
  lVar4 = *param_2;
  iVar9 = (int)lVar5 + uVar3;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144fac7a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  if (0 < (int)uVar3) {
    plVar8 = (longlong *)(lVar4 + 0x20);
    puVar7 = (undefined8 *)((longlong)(int)lVar5 * 0x38 + *param_1);
    do {
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        *puVar7 = hkaiNavMeshPathRequestInfo::vftable;
        lVar4 = plVar8[-1];
        puVar7[3] = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        lVar4 = *plVar8;
        puVar7[4] = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        puVar7[5] = plVar8[1];
        *(int *)(puVar7 + 6) = (int)plVar8[2];
        *(undefined1 *)((longlong)puVar7 + 0x34) = *(undefined1 *)((longlong)plVar8 + 0x14);
        *(undefined1 *)((longlong)puVar7 + 0x35) = *(undefined1 *)((longlong)plVar8 + 0x15);
        puVar1 = (undefined1 *)((longlong)plVar8 + 0x16);
        plVar8 = plVar8 + 7;
        *(undefined1 *)((longlong)puVar7 + 0x36) = *puVar1;
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 7;
    } while (uVar6 != 0);
  }
  *(int *)(param_1 + 1) = iVar9;
  lVar4 = *param_2;
  lVar5 = (longlong)(int)param_2[1] * 0x38 + lVar4;
  while (lVar5 != lVar4) {
    plVar8 = (longlong *)(lVar5 + -0x38);
    lVar5 = lVar5 + -0x38;
    (**(code **)(*plVar8 + 8))(lVar5,0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 144fabb40 FUN_144fabb40 body=422 status=ok
// SIG undefined FUN_144fabb40(void)

void FUN_144fabb40(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] < (int)param_2[1]) && (param_2 != param_1)) {
    FUN_144faa810(param_1,&PTR_vftable_14c6e47a0);
    FUN_144faa810(param_2,&PTR_vftable_14c6e47a0);
    lVar4 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar4;
    lVar4 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar4;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  }
  uVar3 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar3;
  lVar5 = param_1[1];
  lVar4 = *param_2;
  iVar9 = (int)lVar5 + uVar3;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144fac940(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  if (0 < (int)uVar3) {
    plVar8 = (longlong *)(lVar4 + 0x20);
    puVar7 = (undefined8 *)((longlong)(int)lVar5 * 0x38 + *param_1);
    do {
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        *puVar7 = hkaiNavVolumePathRequestInfo::vftable;
        lVar4 = plVar8[-1];
        puVar7[3] = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        lVar4 = *plVar8;
        puVar7[4] = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        puVar7[5] = plVar8[1];
        *(int *)(puVar7 + 6) = (int)plVar8[2];
        *(undefined1 *)((longlong)puVar7 + 0x34) = *(undefined1 *)((longlong)plVar8 + 0x14);
        *(undefined1 *)((longlong)puVar7 + 0x35) = *(undefined1 *)((longlong)plVar8 + 0x15);
        puVar1 = (undefined1 *)((longlong)plVar8 + 0x16);
        plVar8 = plVar8 + 7;
        *(undefined1 *)((longlong)puVar7 + 0x36) = *puVar1;
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 7;
    } while (uVar6 != 0);
  }
  *(int *)(param_1 + 1) = iVar9;
  lVar4 = *param_2;
  lVar5 = (longlong)(int)param_2[1] * 0x38 + lVar4;
  while (lVar5 != lVar4) {
    plVar8 = (longlong *)(lVar5 + -0x38);
    lVar5 = lVar5 + -0x38;
    (**(code **)(*plVar8 + 8))(lVar5,0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 144fabcf0 FUN_144fabcf0 body=401 status=ok
// SIG undefined FUN_144fabcf0(void)

void FUN_144fabcf0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = 0;
  iVar5 = (int)param_1[1] + -1;
  if (-1 < iVar5) {
    lVar9 = (longlong)iVar5 * 0x38;
    lVar10 = lVar9;
    do {
      lVar1 = *param_1;
      if (*(char *)(lVar9 + 0x36 + lVar1) != '\0') {
        (**(code **)(*(longlong *)(lVar9 + lVar1) + 8))(lVar1 + lVar10,0);
        lVar1 = param_1[1];
        iVar2 = (int)lVar1 + -1;
        *(int *)(param_1 + 1) = iVar2;
        if (iVar2 != iVar5) {
          plVar4 = (longlong *)(lVar9 + *param_1);
          plVar3 = (longlong *)((longlong)(int)lVar1 * 0x38 + -0x38 + *param_1);
          if (plVar4 != plVar3) {
            if (plVar4 != (longlong *)0x0) {
              plVar4[2] = 1;
              plVar4[1] = 0xffffffff;
              *plVar4 = (longlong)hkaiNavMeshPathRequestInfo::vftable;
              plVar4[3] = plVar3[3];
              plVar3[3] = 0;
              plVar4[4] = plVar3[4];
              plVar3[4] = 0;
              plVar4[5] = plVar3[5];
              *(int *)(plVar4 + 6) = (int)plVar3[6];
              *(undefined1 *)((longlong)plVar4 + 0x34) = *(undefined1 *)((longlong)plVar3 + 0x34);
              *(undefined1 *)((longlong)plVar4 + 0x35) = *(undefined1 *)((longlong)plVar3 + 0x35);
              *(undefined1 *)((longlong)plVar4 + 0x36) = *(undefined1 *)((longlong)plVar3 + 0x36);
            }
            (**(code **)(*plVar3 + 8))();
          }
        }
      }
      lVar10 = lVar10 + -0x38;
      lVar9 = lVar9 + -0x38;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = (int)param_1[1] + (int)param_2[1];
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_144face60(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  uVar8 = uVar7;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)(uVar8 + 0x20 + *param_1) == 0) {
        plVar4 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        *(undefined4 *)(plVar4 + 1) = param_3;
        *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)(uVar8 + 0x30 + *param_1);
        *plVar4 = (longlong)(int)uVar7 * 0x38 + *param_1;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 0x38;
    } while ((int)uVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144fabe90 FUN_144fabe90 body=401 status=ok
// SIG undefined FUN_144fabe90(void)

void FUN_144fabe90(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = 0;
  iVar5 = (int)param_1[1] + -1;
  if (-1 < iVar5) {
    lVar9 = (longlong)iVar5 * 0x38;
    lVar10 = lVar9;
    do {
      lVar1 = *param_1;
      if (*(char *)(lVar9 + 0x36 + lVar1) != '\0') {
        (**(code **)(*(longlong *)(lVar9 + lVar1) + 8))(lVar1 + lVar10,0);
        lVar1 = param_1[1];
        iVar2 = (int)lVar1 + -1;
        *(int *)(param_1 + 1) = iVar2;
        if (iVar2 != iVar5) {
          plVar4 = (longlong *)(lVar9 + *param_1);
          plVar3 = (longlong *)((longlong)(int)lVar1 * 0x38 + -0x38 + *param_1);
          if (plVar4 != plVar3) {
            if (plVar4 != (longlong *)0x0) {
              plVar4[2] = 1;
              plVar4[1] = 0xffffffff;
              *plVar4 = (longlong)hkaiNavVolumePathRequestInfo::vftable;
              plVar4[3] = plVar3[3];
              plVar3[3] = 0;
              plVar4[4] = plVar3[4];
              plVar3[4] = 0;
              plVar4[5] = plVar3[5];
              *(int *)(plVar4 + 6) = (int)plVar3[6];
              *(undefined1 *)((longlong)plVar4 + 0x34) = *(undefined1 *)((longlong)plVar3 + 0x34);
              *(undefined1 *)((longlong)plVar4 + 0x35) = *(undefined1 *)((longlong)plVar3 + 0x35);
              *(undefined1 *)((longlong)plVar4 + 0x36) = *(undefined1 *)((longlong)plVar3 + 0x36);
            }
            (**(code **)(*plVar3 + 8))();
          }
        }
      }
      lVar10 = lVar10 + -0x38;
      lVar9 = lVar9 + -0x38;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = (int)param_1[1] + (int)param_2[1];
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_144face60(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  uVar8 = uVar7;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)(uVar8 + 0x20 + *param_1) == 0) {
        plVar4 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        *(undefined4 *)(plVar4 + 1) = param_3;
        *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)(uVar8 + 0x30 + *param_1);
        *plVar4 = (longlong)(int)uVar7 * 0x38 + *param_1;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 0x38;
    } while ((int)uVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144fac030 FUN_144fac030 body=304 status=ok
// SIG undefined FUN_144fac030(void)

void FUN_144fac030(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if ((byte)(*(char *)(*(longlong *)(*param_1 + lVar5 * 8) + 0x20) - 2U) < 2) {
        if (*(longlong *)(*param_1 + lVar5 * 8) != 0) {
          FUN_144b3f230();
        }
        lVar2 = param_1[1];
        iVar3 = (int)lVar2 + -1;
        *(int *)(param_1 + 1) = iVar3;
        if (iVar3 != iVar6) {
          plVar1 = (longlong *)(*param_1 + ((longlong)(int)lVar2 + -1) * 8);
          plVar7 = (longlong *)(*param_1 + lVar5 * 8);
          if (plVar7 != plVar1) {
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = *plVar1;
              *plVar1 = 0;
            }
            if (*plVar1 != 0) {
              FUN_144b3f230();
            }
          }
        }
      }
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar6 = (int)param_1[1] + (int)param_2[1];
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_144face60(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  plVar7 = (longlong *)*param_1;
  plVar1 = plVar7 + (int)param_1[1];
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar5 = *plVar7;
    if (*(char *)(lVar5 + 0x20) == '\0') {
      plVar4 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      *(undefined4 *)(plVar4 + 1) = param_3;
      *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)(lVar5 + 0x1c);
      *plVar4 = lVar5;
    }
  }
  return;
}



// FUNCTION 144fac160 FUN_144fac160 body=304 status=ok
// SIG undefined FUN_144fac160(void)

void FUN_144fac160(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if ((byte)(*(char *)(*(longlong *)(*param_1 + lVar5 * 8) + 0x20) - 2U) < 2) {
        if (*(longlong *)(*param_1 + lVar5 * 8) != 0) {
          FUN_144b3f230();
        }
        lVar2 = param_1[1];
        iVar3 = (int)lVar2 + -1;
        *(int *)(param_1 + 1) = iVar3;
        if (iVar3 != iVar6) {
          plVar1 = (longlong *)(*param_1 + ((longlong)(int)lVar2 + -1) * 8);
          plVar7 = (longlong *)(*param_1 + lVar5 * 8);
          if (plVar7 != plVar1) {
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = *plVar1;
              *plVar1 = 0;
            }
            if (*plVar1 != 0) {
              FUN_144b3f230();
            }
          }
        }
      }
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar6 = (int)param_1[1] + (int)param_2[1];
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_144face60(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  plVar7 = (longlong *)*param_1;
  plVar1 = plVar7 + (int)param_1[1];
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar5 = *plVar7;
    if (*(char *)(lVar5 + 0x20) == '\0') {
      plVar4 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      *(undefined4 *)(plVar4 + 1) = param_3;
      *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)(lVar5 + 0x1c);
      *plVar4 = lVar5;
    }
  }
  return;
}



// FUNCTION 144fac290 FUN_144fac290 body=103 status=ok
// SIG undefined FUN_144fac290(void)

void FUN_144fac290(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144fac300 FUN_144fac300 body=369 status=ok
// SIG undefined FUN_144fac300(void)

void FUN_144fac300(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iStack_54;
  ulonglong uVar14;
  
  if (((param_2 < 2) || (param_3 < 1)) || (param_2 <= param_3)) {
    return;
  }
  uVar11 = 0;
  uVar8 = (longlong)param_2 - 1;
  uVar17 = uVar11;
  iVar15 = param_2 + -1;
  do {
    iVar18 = iVar15;
    uVar16 = uVar8;
    lVar9 = (longlong)((int)uVar11 + iVar18) >> 1;
    uVar4 = *(undefined8 *)(param_1 + 8 + lVar9 * 0x10);
    iStack_54 = (int)((ulonglong)*(undefined8 *)(param_1 + lVar9 * 0x10 + 8) >> 0x20);
    uVar8 = uVar16;
    uVar12 = uVar17;
    uVar14 = uVar11;
    iVar15 = iVar18;
    do {
      uVar13 = (uint)uVar14;
      piVar10 = (int *)(uVar12 * 0x10 + 0xc + param_1);
      if ((int)((ulonglong)uVar4 >> 0x20) < *piVar10) {
        do {
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          piVar10 = piVar10 + 4;
          uVar12 = uVar12 + 1;
        } while (iStack_54 < *piVar10);
      }
      piVar10 = (int *)(uVar8 * 0x10 + 0xc + param_1);
      iVar3 = *piVar10;
      while (iVar3 < iStack_54) {
        iVar15 = iVar15 + -1;
        piVar10 = piVar10 + -4;
        uVar8 = uVar8 - 1;
        iVar3 = *piVar10;
      }
      if ((longlong)uVar8 < (longlong)uVar12) break;
      if (uVar8 != uVar12) {
        puVar1 = (undefined8 *)(param_1 + uVar8 * 0x10);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = (undefined8 *)(param_1 + uVar12 * 0x10);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + uVar8 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)(param_1 + uVar12 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
      }
      iVar15 = iVar15 + -1;
      uVar8 = uVar8 - 1;
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 <= (longlong)uVar8);
    if ((iVar15 <= (int)uVar11) || (iVar15 < param_3)) {
      if (iVar18 <= (int)uVar13) {
        return;
      }
      if (param_3 <= (int)uVar13) {
        return;
      }
      uVar11 = (ulonglong)uVar13;
      uVar8 = uVar16;
      uVar17 = uVar12;
      iVar15 = iVar18;
    }
  } while( true );
}



// FUNCTION 144fac480 FUN_144fac480 body=470 status=ok
// SIG undefined FUN_144fac480(void)

void FUN_144fac480(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  uint local_res10;
  undefined4 local_60 [2];
  longlong local_58;
  
  uVar6 = (ulonglong)(int)param_2;
  local_58 = 0;
  uVar13 = uVar6;
  local_res10 = param_2;
  do {
    lVar14 = (longlong)(int)param_3;
    uVar9 = uVar6 & 0xffffffff;
    lVar11 = (longlong)(int)((int)uVar6 + param_3) >> 1;
    local_60[0] = *(undefined4 *)(param_1 + lVar11 * 0x10);
    lVar2 = *(longlong *)(param_1 + 8 + lVar11 * 0x10);
    uVar10 = param_3;
    if (local_58 != lVar2) {
      if (lVar2 != 0) {
        FUN_144b3d910(lVar2);
      }
      lVar2 = *(longlong *)(param_1 + 8 + lVar11 * 0x10);
      bVar15 = local_58 != 0;
      local_58 = lVar2;
      if (bVar15) {
        FUN_144b3f230();
      }
    }
    do {
      uVar8 = (uint)uVar9;
      cVar5 = (*param_4)((longlong)(int)uVar8 * 0x10 + param_1,local_60);
      while (cVar5 != '\0') {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar13 = uVar13 + 1;
        cVar5 = (*param_4)((longlong)(int)uVar8 * 0x10 + param_1,local_60);
      }
      cVar5 = (*param_4)(local_60,(longlong)(int)uVar10 * 0x10 + param_1);
      while (cVar5 != '\0') {
        uVar10 = uVar10 - 1;
        lVar14 = lVar14 + -1;
        cVar5 = (*param_4)(local_60,(longlong)(int)uVar10 * 0x10 + param_1);
      }
      if ((int)uVar10 < (int)uVar8) break;
      if (uVar10 != uVar8) {
        puVar7 = (undefined4 *)(lVar14 * 0x10 + param_1);
        puVar12 = (undefined4 *)(uVar13 * 0x10 + param_1);
        uVar1 = *puVar7;
        uVar3 = *(undefined8 *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 2) = 0;
        *puVar7 = *puVar12;
        uVar4 = *(undefined8 *)(puVar12 + 2);
        *(undefined8 *)(puVar12 + 2) = 0;
        lVar2 = *(longlong *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 2) = uVar4;
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
        lVar2 = *(longlong *)(puVar12 + 2);
        *puVar12 = uVar1;
        *(undefined8 *)(puVar12 + 2) = uVar3;
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
      }
      uVar10 = uVar10 - 1;
      lVar14 = lVar14 + -1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar13 = uVar13 + 1;
    } while ((int)uVar8 <= (int)uVar10);
    if ((int)local_res10 < (int)uVar10) {
      FUN_144fac480(param_1,local_res10,uVar10,param_4);
    }
    if ((int)param_3 <= (int)uVar8) {
      if (local_58 != 0) {
        FUN_144b3f230();
      }
      return;
    }
    uVar6 = (ulonglong)uVar8;
    local_res10 = uVar8;
  } while( true );
}



// FUNCTION 144fac660 FUN_144fac660 body=310 status=ok
// SIG undefined FUN_144fac660(void)

void FUN_144fac660(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144fac7a0 FUN_144fac7a0 body=414 status=ok
// SIG undefined FUN_144fac7a0(void)

ulonglong FUN_144fac7a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar11 * 2;
  uVar9 = param_3;
  if (param_3 < uVar8) {
    uVar9 = uVar8;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x38,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    plVar5 = plVar7 + 4;
    uVar10 = (ulonglong)uVar1;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        *puVar4 = 1;
        puVar4[-1] = 0xffffffff;
        puVar4[-2] = hkaiNavMeshPathRequestInfo::vftable;
        puVar4[1] = plVar5[-1];
        plVar5[-1] = 0;
        puVar4[2] = *plVar5;
        *plVar5 = 0;
        puVar4[3] = plVar5[1];
        *(int *)(puVar4 + 4) = (int)plVar5[2];
        *(undefined1 *)((longlong)puVar4 + 0x24) = *(undefined1 *)((longlong)plVar5 + 0x14);
        *(undefined1 *)((longlong)puVar4 + 0x25) = *(undefined1 *)((longlong)plVar5 + 0x15);
        *(undefined1 *)((longlong)puVar4 + 0x26) = *(undefined1 *)((longlong)plVar5 + 0x16);
      }
      puVar4 = puVar4 + 7;
      plVar5 = plVar5 + 7;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    do {
      (**(code **)(*plVar7 + 8))(plVar7,0);
      plVar7 = plVar7 + 7;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar9 * 0x38 + 0x38;
  uVar10 = uVar9;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar10 = uVar9 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      lVar6 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar8 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar10 = uVar10 + ((uVar9 - lVar6 >> 1) + lVar6 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x38);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar8;
}



// FUNCTION 144fac940 FUN_144fac940 body=414 status=ok
// SIG undefined FUN_144fac940(void)

ulonglong FUN_144fac940(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar11 * 2;
  uVar9 = param_3;
  if (param_3 < uVar8) {
    uVar9 = uVar8;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x38,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    plVar5 = plVar7 + 4;
    uVar10 = (ulonglong)uVar1;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        *puVar4 = 1;
        puVar4[-1] = 0xffffffff;
        puVar4[-2] = hkaiNavVolumePathRequestInfo::vftable;
        puVar4[1] = plVar5[-1];
        plVar5[-1] = 0;
        puVar4[2] = *plVar5;
        *plVar5 = 0;
        puVar4[3] = plVar5[1];
        *(int *)(puVar4 + 4) = (int)plVar5[2];
        *(undefined1 *)((longlong)puVar4 + 0x24) = *(undefined1 *)((longlong)plVar5 + 0x14);
        *(undefined1 *)((longlong)puVar4 + 0x25) = *(undefined1 *)((longlong)plVar5 + 0x15);
        *(undefined1 *)((longlong)puVar4 + 0x26) = *(undefined1 *)((longlong)plVar5 + 0x16);
      }
      puVar4 = puVar4 + 7;
      plVar5 = plVar5 + 7;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    do {
      (**(code **)(*plVar7 + 8))(plVar7,0);
      plVar7 = plVar7 + 7;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar9 * 0x38 + 0x38;
  uVar10 = uVar9;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar10 = uVar9 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      lVar6 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar8 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar10 = uVar10 + ((uVar9 - lVar6 >> 1) + lVar6 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x38);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar8;
}



// FUNCTION 144facae0 FUN_144facae0 body=266 status=ok
// SIG undefined FUN_144facae0(void)

void FUN_144facae0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144facbf0 FUN_144facbf0 body=294 status=ok
// SIG undefined FUN_144facbf0(void)

void FUN_144facbf0(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar18 = (ulonglong)param_2;
  uVar19 = uVar18;
  do {
    lVar16 = (longlong)((int)uVar19 + param_3) >> 1;
    uVar14 = uVar19 & 0xffffffff;
    iVar6 = *(int *)(param_1 + lVar16 * 0x10 + 0xc);
    uVar5 = *(undefined8 *)(param_1 + 8 + lVar16 * 0x10);
    uVar17 = (longlong)param_3;
    iVar15 = param_3;
    do {
      uVar13 = (uint)uVar14;
      piVar12 = (int *)(uVar18 * 0x10 + 0xc + param_1);
      if ((int)((ulonglong)uVar5 >> 0x20) < *piVar12) {
        do {
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          piVar12 = piVar12 + 4;
          uVar18 = uVar18 + 1;
        } while (iVar6 < *piVar12);
      }
      piVar12 = (int *)(uVar17 * 0x10 + 0xc + param_1);
      iVar4 = *piVar12;
      while (iVar4 < iVar6) {
        iVar15 = iVar15 + -1;
        piVar12 = piVar12 + -4;
        uVar17 = uVar17 - 1;
        iVar4 = *piVar12;
      }
      if ((longlong)uVar17 < (longlong)uVar18) break;
      if (uVar17 != uVar18) {
        puVar1 = (undefined8 *)(param_1 + uVar17 * 0x10);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        puVar2 = (undefined4 *)(param_1 + uVar18 * 0x10);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + uVar17 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        puVar1 = (undefined8 *)(param_1 + uVar18 * 0x10);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
      }
      iVar15 = iVar15 + -1;
      uVar17 = uVar17 - 1;
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 <= (longlong)uVar17);
    if ((int)uVar19 < iVar15) {
      FUN_144facbf0(param_1,uVar19 & 0xffffffff,iVar15,param_4);
    }
    if (param_3 <= (int)uVar13) {
      return;
    }
    uVar19 = (ulonglong)uVar13;
  } while( true );
}



// FUNCTION 144facd20 FUN_144facd20 body=310 status=ok
// SIG undefined FUN_144facd20(void)

void FUN_144facd20(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144face60 FUN_144face60 body=258 status=ok
// SIG undefined FUN_144face60(void)

void FUN_144face60(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144facf70 FUN_144facf70 body=247 status=ok
// SIG undefined FUN_144facf70(void)

void FUN_144facf70(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144fad070 FUN_144fad070 body=55 status=ok
// SIG undefined FUN_144fad070(void)

undefined8 * FUN_144fad070(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiVolumeNavigatorManager::vftable;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[3] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  return param_1;
}



// FUNCTION 144fad0b0 FUN_144fad0b0 body=81 status=ok
// SIG undefined FUN_144fad0b0(void)

void FUN_144fad0b0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x28) * 8) +
   0x184) = *(undefined4 *)(param_2 + 0x184);
  iVar3 = *(int *)(param_2 + 0x184);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = iVar4 + -1;
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 != iVar3) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + ((longlong)iVar4 + -1) * 8);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8);
    if ((puVar2 != puVar1) && (puVar2 != (undefined8 *)0x0)) {
      *puVar2 = *puVar1;
    }
  }
  return;
}



// FUNCTION 144fad110 FUN_144fad110 body=71 status=ok
// SIG undefined FUN_144fad110(void)

void FUN_144fad110(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_144fbe280(*puVar2,param_2);
  }
  return;
}



// FUNCTION 144fad160 FUN_144fad160 body=56 status=ok
// SIG undefined FUN_144fad160(void)

void FUN_144fad160(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  FUN_144fad230();
  param_1[0x1e] = param_3;
  return;
}



// FUNCTION 144fad1a0 FUN_144fad1a0 body=133 status=ok
// SIG undefined FUN_144fad1a0(void)

void FUN_144fad1a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(param_1 + 3);
  uVar4 = (ulonglong)uVar3;
  if (*(char *)((longlong)param_1 + 0xc) != '\0') {
    plVar1 = (longlong *)param_1[2];
    plVar2 = plVar1;
    if (0 < (int)uVar3) {
      do {
        if (*plVar1 != 0) {
          *plVar2 = *plVar1;
          plVar2 = plVar2 + 1;
        }
        plVar1 = plVar1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    uVar3 = (uint)((longlong)plVar2 - param_1[2] >> 3);
  }
  if (uVar3 != 0) {
    if (param_2 != 0) {
      FUN_144fad6a0(param_2);
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_1[2]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 144fad230 FUN_144fad230 body=122 status=ok
// SIG undefined FUN_144fad230(void)

undefined8 * FUN_144fad230(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)FUN_144fad5f0(param_2);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x18) + 1;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar3) {
    FUN_144fad300(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = puVar2;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  return puVar2;
}



// FUNCTION 144fad2b0 FUN_144fad2b0 body=67 status=ok
// SIG undefined FUN_144fad2b0(void)

longlong FUN_144fad2b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x10) + -0x10 + (longlong)*(int *)(param_1 + 0x18) * 8);
  FUN_144fad640(param_2,*(undefined8 *)
                         (*(longlong *)(param_1 + 0x10) + -8 +
                         (longlong)*(int *)(param_1 + 0x18) * 8));
  *(undefined8 *)(lVar1 + 8) = 0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return lVar1;
}



// FUNCTION 144fad300 FUN_144fad300 body=235 status=ok
// SIG undefined FUN_144fad300(void)

void FUN_144fad300(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144fad3f0 FUN_144fad3f0 body=247 status=ok
// SIG undefined FUN_144fad3f0(void)

void FUN_144fad3f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144fad4f0 FUN_144fad4f0 body=125 status=ok
// SIG undefined FUN_144fad4f0(void)

undefined8 * FUN_144fad4f0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_1 + 3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000008;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  iVar2 = 8;
  if (iVar1 < 8) {
    iVar2 = iVar1;
  }
  *(int *)((longlong)param_1 + 0x5c) = iVar2;
  if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) < iVar2) {
    FUN_144fad3f0(param_1 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  if ((*(int *)(param_1 + 2) < iVar2) || (iVar2 < *(int *)(param_1 + 2))) {
    *(int *)(param_1 + 2) = iVar2;
  }
  return param_1;
}



// FUNCTION 144fad570 FUN_144fad570 body=120 status=ok
// SIG undefined FUN_144fad570(void)

void FUN_144fad570(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0xb) != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_1[1]);
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 3);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 144fad5f0 FUN_144fad5f0 body=78 status=ok
// SIG undefined FUN_144fad5f0(void)

undefined8 FUN_144fad5f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb);
  if (0 < iVar1) {
    *(int *)(param_1 + 0xb) = iVar1 + -1;
    return *(undefined8 *)(param_1[1] + -8 + (longlong)iVar1 * 8);
  }
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_1[1],6);
  *(undefined4 *)(param_1 + 0xb) = 5;
  return *(undefined8 *)(param_1[1] + 0x28);
}



// FUNCTION 144fad640 FUN_144fad640 body=82 status=ok
// SIG undefined FUN_144fad640(void)

void FUN_144fad640(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined8 *)(param_1[1] + (longlong)*(int *)(param_1 + 0xb) * 8) = param_2;
  iVar2 = *(int *)(param_1 + 0xb);
  iVar1 = iVar2 + 1;
  *(int *)(param_1 + 0xb) = iVar1;
  if (*(int *)((longlong)param_1 + 0x5c) <= iVar1) {
    iVar2 = iVar2 + -5;
    (**(code **)(*(longlong *)*param_1 + 0x20))
              ((longlong *)*param_1,param_1[1] + (longlong)iVar2 * 8,6);
    *(int *)(param_1 + 0xb) = iVar2;
  }
  return;
}



// FUNCTION 144fad6a0 FUN_144fad6a0 body=273 status=ok
// SIG undefined FUN_144fad6a0(void)

void FUN_144fad6a0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_3 < 6) {
    iVar2 = *(int *)(param_1 + 0xb);
    if (*(int *)((longlong)param_1 + 0x5c) <= iVar2 + param_3) {
      iVar4 = iVar2;
      if (6 < iVar2) {
        iVar4 = 6;
      }
      (**(code **)(*(longlong *)*param_1 + 0x20))
                ((longlong *)*param_1,param_1[1] + (longlong)(iVar2 - iVar4) * 8);
      *(int *)(param_1 + 0xb) = iVar2 - iVar4;
    }
    uVar5 = 0;
    uVar6 = uVar5;
    if (0 < param_3) {
      do {
        lVar1 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        *(undefined8 *)(param_1[1] + (longlong)(*(int *)(param_1 + 0xb) + (int)uVar6) * 8) =
             *(undefined8 *)(param_2 + lVar1);
        uVar6 = (ulonglong)((int)uVar6 + 1);
      } while ((longlong)uVar5 < (longlong)param_3);
    }
    piVar3 = (int *)(param_1 + 0xb);
    iVar2 = *(int *)((longlong)param_1 + 0x5c);
    param_3 = *piVar3 + param_3;
    *piVar3 = param_3;
    if (iVar2 < param_3) {
      (**(code **)(*(longlong *)*param_1 + 0x20))
                ((longlong *)*param_1,param_1[1] + (longlong)iVar2 * 8,param_3 - iVar2);
      *piVar3 = *(int *)((longlong)param_1 + 0x5c);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144fad6cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_2,param_3);
  return;
}



// FUNCTION 144fad7c0 FUN_144fad7c0 body=47 status=ok
// SIG undefined FUN_144fad7c0(void)

void FUN_144fad7c0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(*(longlong *)(param_3 + 0x10) + -8 + (longlong)*(int *)(param_3 + 0x18) * 8);
  param_1[1] = param_2;
  *param_1 = param_3;
  *(uint *)(param_1 + 3) = *puVar2 >> 0x10;
  uVar1 = *puVar2;
  *(uint *)((longlong)param_1 + 0x1c) = uVar1 & 0xffff;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) - (uVar1 & 0xffff);
  param_1[2] = (longlong)puVar2;
  return;
}



// FUNCTION 144fad7f0 FUN_144fad7f0 body=121 status=ok
// SIG undefined FUN_144fad7f0(void)

void FUN_144fad7f0(longlong *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  if ((uVar1 == 0) && (1 < *(int *)(*param_1 + 0x18))) {
    FUN_144fad2b0(*param_1,param_1[1]);
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  puVar2 = (uint *)param_1[2];
  lVar3 = param_1[3];
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = *puVar2 & 0xffff0000 | uVar1 & 0xffff;
  *puVar2 = (int)lVar3 << 0x10 | *puVar2 & 0xffff;
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + uVar1;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 144fad870 FUN_144fad870 body=103 status=ok
// SIG undefined FUN_144fad870(void)

longlong FUN_144fad870(longlong *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = FUN_144fad230(*param_1,param_1[1]);
  puVar2 = (uint *)param_1[2];
  lVar3 = param_1[3];
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  *(longlong *)(puVar2 + 2) = lVar4;
  *puVar2 = *puVar2 & 0xffff0000 | uVar1 & 0xffff;
  *puVar2 = (int)lVar3 << 0x10 | *puVar2 & 0xffff;
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + uVar1;
  param_1[2] = lVar4;
  param_1[3] = 0;
  return lVar4 + 0x20;
}



// FUNCTION 144fad8e0 FUN_144fad8e0 body=46 status=ok
// SIG undefined FUN_144fad8e0(void)

void FUN_144fad8e0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)**(undefined8 **)(param_2 + 0x10);
  *param_1 = puVar2;
  param_1[1] = puVar2 + 8;
  uVar1 = *puVar2;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 & 0xffff;
  *(undefined4 *)(param_1 + 2) = 0x7fffffff;
  if ((uVar1 & 0xffff) == 0) {
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 144fad910 FUN_144fad910 body=106 status=ok
// SIG undefined FUN_144fad910(void)

void FUN_144fad910(longlong *param_1,char param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((int)param_1[2] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar2 = *(uint **)(*param_1 + 8);
  *param_1 = (longlong)puVar2;
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(uint *)(param_1 + 2);
    uVar3 = uVar1;
    if ((int)(*puVar2 & 0xffff) < (int)uVar1) {
      uVar3 = *puVar2 & 0xffff;
    }
    if (0 < (int)uVar3) {
      *(uint *)((longlong)param_1 + 0x14) = uVar3;
      *(uint *)(param_1 + 2) = uVar1 - uVar3;
      param_1[1] = (longlong)(puVar2 + 8);
      if (param_2 == '\0') {
        return;
      }
      return;
    }
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 144fad980 FUN_144fad980 body=40 status=FAIL
// SIG undefined FUN_144fad980(void)
/* DECOMPILE FAILED */

// FUNCTION 144fadae0 FUN_144fadae0 body=40 status=FAIL
// SIG undefined FUN_144fadae0(void)
/* DECOMPILE FAILED */

// FUNCTION 144fadc30 FUN_144fadc30 body=9 status=ok
// SIG undefined FUN_144fadc30(void)

void FUN_144fadc30(longlong param_1)

{
  FUN_144b3f230(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fadc40 FUN_144fadc40 body=9 status=ok
// SIG undefined FUN_144fadc40(void)

void FUN_144fadc40(longlong param_1)

{
  FUN_144b3f230(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fadc50 FUN_144fadc50 body=3 status=ok
// SIG undefined FUN_144fadc50(void)

void FUN_144fadc50(void)

{
  return;
}



// FUNCTION 144fadc60 FUN_144fadc60 body=9 status=ok
// SIG undefined FUN_144fadc60(void)

void FUN_144fadc60(longlong param_1)

{
  FUN_144b3f230(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fadc70 FUN_144fadc70 body=9 status=ok
// SIG undefined FUN_144fadc70(void)

void FUN_144fadc70(longlong param_1)

{
  FUN_144b3f230(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fae550 FUN_144fae550 body=9 status=ok
// SIG undefined FUN_144fae550(void)

undefined8 * FUN_144fae550(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144fae560 FUN_144fae560 body=342 status=ok
// SIG undefined FUN_144fae560(void)

void FUN_144fae560(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  
  bVar4 = false;
  bVar5 = false;
  uVar12 = 0;
  iVar13 = 0x7fffffff;
  lVar10 = *(longlong *)param_2[2];
  iVar14 = -((int)~*(uint *)((longlong *)param_2[2] + 2) >> 5);
  lVar8 = (longlong)(iVar14 * (int)param_2[3]);
  lVar1 = lVar10 + lVar8 * 4;
  iVar14 = (int)(((iVar14 + lVar8) * 4 - lVar1) + lVar10 >> 2);
  bVar6 = false;
  if (0 < iVar14) {
    do {
      bVar5 = bVar6;
      uVar11 = *(uint *)(lVar1 + uVar12 * 4) & 0xfffffffe;
      if ((int)uVar12 != 0) {
        uVar11 = *(uint *)(lVar1 + uVar12 * 4);
      }
      if (uVar11 != 0) {
        do {
          uVar7 = (*(code *)PTR_FUN_14c6da350)((-uVar11 & uVar11) - 1);
          uVar11 = uVar11 & ~(1 << (uVar7 & 0x1f));
          iVar2 = *(int *)(*(longlong *)
                            (param_2[4] +
                            (ulonglong)(ushort)((short)uVar7 + -1 + (short)(uVar12 << 5)) * 8) +
                          0x24);
          if (iVar2 == -1) {
            bVar4 = true;
            iVar2 = iVar13;
          }
          else {
            bVar5 = true;
            if (iVar13 < iVar2) {
              iVar2 = iVar13;
            }
          }
          iVar13 = iVar2;
        } while (uVar11 != 0);
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      bVar6 = bVar5;
    } while ((int)uVar11 < iVar14);
    if (bVar4) {
      *param_3 = 1;
      return;
    }
  }
  piVar3 = *(int **)(param_3 + 8);
  lVar1 = *param_2;
  iVar14 = (int)(*(longlong *)(param_3 + 0x10) - (longlong)piVar3 >> 2);
  lVar10 = (longlong)iVar14;
  if (0 < iVar14) {
    piVar9 = piVar3;
    do {
      *piVar9 = *(int *)((longlong)piVar9 + (lVar1 - (longlong)piVar3));
      piVar9 = piVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (bVar5) {
    *piVar3 = iVar13;
  }
  return;
}



// FUNCTION 144fae6c0 FUN_144fae6c0 body=185 status=ok
// SIG undefined FUN_144fae6c0(void)

void FUN_144fae6c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3,param_4);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144fae780 FUN_144fae780 body=1381 status=ok
// SIG undefined FUN_144fae780(void)

void FUN_144fae780(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong local_res8;
  ulonglong local_res18;
  longlong local_res20;
  longlong local_d8;
  undefined **local_d0;
  ushort *local_c8;
  int local_bc;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  plVar3 = (longlong *)FUN_144c2d0b0();
  local_7c = 0x80000000;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  if (plVar3 != (longlong *)0x0) {
    FUN_144fad8e0(&local_d0,plVar3);
    FUN_144be90e0(0x10b35015);
    puVar4 = local_c8;
    while (puVar4 != (ushort *)0x0) {
      FUN_145310c10(puVar4,&local_88,*(undefined8 *)(param_1 + 0x140),
                    *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x148));
      FUN_144fadae0(puVar4);
      local_bc = local_bc + -1;
      if (local_bc < 1) {
        puVar4 = (ushort *)FUN_144fad910(&local_d0,CONCAT71((uint7)(byte)(*local_c8 >> 8),1));
      }
      else {
        puVar4 = (ushort *)((longlong)local_c8 + (ulonglong)*local_c8);
        local_c8 = puVar4;
      }
    }
    FUN_144fad1a0(plVar3,0);
  }
  FUN_144bde5d0(&local_d8,0x38d9223e);
  local_d0 = (undefined **)0x0;
  local_c8 = (ushort *)0x8000000000000000;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x40);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar8 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar8 + 0xf0) = lVar5;
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar8 + 8) != 0) {
    lVar8 = 0;
  }
  uVar9 = (longlong)iVar1 * 0x60;
  local_b8 = uVar9;
  if (lVar8 == 0) {
    uVar6 = (*DAT_14c787670)(1,&local_b8,0x40);
  }
  else {
    local_98[0] = uVar9 + 0x3f & 0xffffffffffffffc0;
    if (local_98[0] <= *(ulonglong *)(lVar8 + 0x28)) {
      uVar6 = *(ulonglong *)(lVar8 + 0x38);
      if (uVar6 + local_98[0] <= *(ulonglong *)(lVar8 + 0x40)) {
        *(ulonglong *)(lVar8 + 0x38) = uVar6 + local_98[0];
        goto LAB_144fae969;
      }
    }
    uVar6 = FUN_144b454a0(lVar8,local_98);
  }
LAB_144fae969:
  local_b8 = uVar6;
  uStack_b0 = uVar9 + uVar6;
  FUN_144ca4fb0(*(undefined8 *)(param_1 + 0x140),&local_b8);
  FUN_144b3ea50(param_1);
  local_b8 = uVar6;
  uStack_b0 = uVar9 + uVar6;
  FUN_144fafd30(*(undefined8 *)(param_1 + 0x180),param_2,*(char *)(param_1 + 0x208) != '\0',
                &local_b8);
  FUN_144fafe20(*(undefined8 *)(param_1 + 0x180),&local_d0);
  if (lVar8 == 0) {
    (*DAT_14c787678)(1,uVar6,uVar9);
  }
  else {
    uVar9 = uVar9 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar8 + 0x28) < uVar9) || (uVar9 + uVar6 != *(longlong *)(lVar8 + 0x38))) {
      FUN_144be8550(lVar8,uVar6);
    }
    else {
      *(ulonglong *)(lVar8 + 0x38) = uVar6;
      if (*(ulonglong *)(lVar8 + 0x48) == uVar6) {
        FUN_144be8430(lVar8);
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x180) + 0x18;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar8 = 0;
  }
  FUN_144fb78e0(*(undefined8 *)(param_1 + 0x148),lVar8,*(undefined8 *)(param_1 + 0x228),&local_d0);
  FUN_144faecf0(&local_d0);
  FUN_144bde650(&local_d8);
  FUN_144fb9550(*(undefined8 *)(param_1 + 0x148),&local_res18);
  FUN_144fb9a00(*(undefined8 *)(param_1 + 0x148),&local_res8);
  FUN_144fb9810(*(undefined8 *)(param_1 + 0x148),&local_res20);
  uStack_b0 = local_res8;
  local_a8 = local_res18;
  local_a0 = local_res20;
  local_d0 = `public:_void___cdecl_hkaiWorld::updateNavigationData(hkBitField_const*___ptr64)___ptr64'
             ::__l10::ResponseInterface::vftable;
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_c8 = (ushort *)param_1;
  FUN_144fae6c0(param_1 + 0x90,param_1,&local_b8,&local_d0);
  local_d8 = local_res20;
  if (local_res20 != 0) {
    FUN_144b3d910();
  }
  local_b8 = local_res8;
  if (local_res8 != 0) {
    FUN_144b3d910();
  }
  local_98[0] = local_res18;
  if (local_res18 != 0) {
    FUN_144b3d910();
  }
  FUN_145311920(param_1,local_98,&local_b8,&local_d8,&local_88);
  if (local_res18 == 0) {
    if (local_res8 == 0) goto LAB_144faec36;
    local_d8 = 0x28;
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x40);
    lVar8 = (*DAT_14c787670)(0,&local_d8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar8,"hkaiNavMeshModifiedFaces");
    }
    if (lVar8 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_144faee40(lVar8,uVar2);
    }
    bVar10 = local_res18 != 0;
    local_res18 = uVar9;
    if (bVar10) {
      FUN_144b3f230();
    }
  }
  if (local_res8 == 0) {
    local_d8 = 0x68;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_d8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkaiModifiedSections");
    }
    if (puVar7 == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      uVar9 = FUN_144faef50(puVar7);
    }
    bVar10 = local_res8 != 0;
    local_res8 = uVar9;
    if (bVar10) {
      FUN_144b3f230();
    }
  }
  FUN_144fad110(*(undefined8 *)(param_1 + 0x478),local_res8);
LAB_144faec36:
  if (local_res20 != 0) {
    FUN_144b3f230(local_res20);
  }
  if (local_res8 != 0) {
    FUN_144b3f230();
  }
  if (local_res18 != 0) {
    FUN_144b3f230();
  }
  FUN_144faefd0(&local_88);
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FUN_144fad1a0(plVar3,0);
    }
    *(undefined4 *)(plVar3 + 3) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar3 + 0x1c)) && (plVar3[2] != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,plVar3[2],
                 (ulonglong)(*(uint *)((longlong)plVar3 + 0x1c) & 0x7fffffff) << 3);
    }
    plVar3[2] = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 0x80000000;
    (*DAT_14c787678)(0,plVar3,0);
  }
  return;
}



// FUNCTION 144faecf0 FUN_144faecf0 body=335 status=ok
// SIG undefined FUN_144faecf0(void)

void FUN_144faecf0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 0xe != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_1[1] * 0xe + 0xd;
    do {
      puVar3[-0xf] = 0;
      if ((-1 < (int)puVar3[-0xe]) && (*(longlong *)(puVar3 + -0x11) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -0x11),
                   (ulonglong)(puVar3[-0xe] & 0x7fffffff) << 5);
      }
      *(undefined8 *)(puVar3 + -0x11) = 0;
      puVar3[-0xe] = 0x80000000;
      puVar3[-0x13] = 0;
      if ((-1 < (int)puVar3[-0x12]) && (*(longlong *)(puVar3 + -0x15) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -0x15),
                   (ulonglong)(puVar3[-0x12] & 0x7fffffff) << 2);
      }
      *(undefined8 *)(puVar3 + -0x15) = 0;
      puVar3[-0x12] = 0x80000000;
      puVar3[-0x17] = 0;
      if ((-1 < (int)puVar3[-0x16]) && (*(longlong *)(puVar3 + -0x19) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -0x19),
                   (ulonglong)(puVar3[-0x16] & 0x7fffffff) << 2);
      }
      puVar1 = puVar3 + -0x1b;
      *(undefined8 *)(puVar3 + -0x19) = 0;
      puVar3[-0x16] = 0x80000000;
      puVar3 = puVar3 + -0xe;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x38);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144faee40 FUN_144faee40 body=271 status=ok
// SIG undefined FUN_144faee40(void)

undefined8 * FUN_144faee40(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshModifiedFaces::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  if (0 < param_2) {
    FUN_144faf160(param_1 + 3,&PTR_vftable_14c6e47a0,lVar6);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < param_2) {
    lVar2 = param_1[3];
    *(int *)(param_1 + 4) = param_2;
    for (puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + param_1[3]);
        puVar4 != (undefined8 *)(lVar6 * 0x20 + lVar2); puVar4 = puVar4 + 4) {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0x80000000;
        uVar3 = FUN_144b3d480();
        puVar4[2] = uVar3;
        *(undefined4 *)(puVar4 + 3) = 0;
      }
    }
  }
  else if (param_2 < iVar1) {
    lVar2 = param_1[3];
    lVar5 = (longlong)iVar1 * 0x20 + param_1[3];
    *(int *)(param_1 + 4) = param_2;
    while (lVar5 != lVar6 * 0x20 + lVar2) {
      lVar5 = lVar5 + -0x20;
      FUN_144c90d90(lVar5);
    }
  }
  return param_1;
}



// FUNCTION 144faef50 FUN_144faef50 body=124 status=ok
// SIG undefined FUN_144faef50(void)

undefined8 * FUN_144faef50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = hkaiModifiedSections::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  return param_1;
}



// FUNCTION 144faefd0 FUN_144faefd0 body=319 status=ok
// SIG undefined FUN_144faefd0(void)

void FUN_144faefd0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 5);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 5);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 5);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 5);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 5);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144faf110 FUN_144faf110 body=12 status=ok
// SIG undefined FUN_144faf110(void)

undefined8 FUN_144faf110(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x140);
}



// FUNCTION 144faf120 FUN_144faf120 body=9 status=ok
// SIG undefined FUN_144faf120(void)

void FUN_144faf120(longlong param_1)

{
  FUN_144faf560(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144faf130 FUN_144faf130 body=9 status=ok
// SIG undefined FUN_144faf130(void)

void FUN_144faf130(longlong param_1)

{
  FUN_144faf530(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144faf140 FUN_144faf140 body=9 status=ok
// SIG undefined FUN_144faf140(void)

void FUN_144faf140(longlong param_1)

{
  FUN_144faf540(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144faf150 FUN_144faf150 body=16 status=ok
// SIG undefined FUN_144faf150(void)

void FUN_144faf150(longlong param_1)

{
  FUN_144fab200(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x230));
  return;
}



// FUNCTION 144faf160 FUN_144faf160 body=446 status=ok
// SIG undefined FUN_144faf160(void)

void FUN_144faf160(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  longlong *local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = param_3;
  if (param_3 < uVar9 * 2) {
    uVar5 = uVar9 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar9;
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res18 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x20,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)(local_res18 + 8);
    uVar9 = (ulonglong)uVar2;
    puVar4 = puVar7;
    do {
      puVar1 = (undefined8 *)(puVar8 + -2);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        *puVar8 = 0;
        puVar8[1] = 0x80000000;
        FUN_144c52690(puVar4,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar4;
        *puVar8 = *(undefined4 *)(puVar4 + 1);
        puVar8[1] = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 *)(puVar8 + 2) = puVar4[2];
        puVar8[4] = *(undefined4 *)(puVar4 + 3);
        uVar3 = FUN_144b3d480();
        puVar4[2] = uVar3;
        *(undefined4 *)(puVar4 + 3) = 0;
      }
      puVar8 = puVar8 + 8;
      puVar4 = puVar4 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      FUN_144c90d90(puVar7);
      puVar7 = puVar7 + 4;
      uVar10 = uVar10 - 1;
      uVar9 = local_res20;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  uVar10 = uVar5 * 0x20 + 0x20;
  uVar6 = uVar5;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar6 = uVar5 + 1;
    if (uVar10 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar5 * -0x20 >> 5);
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res18;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 << 5);
    *param_1 = local_res18;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144faf320 FUN_144faf320 body=165 status=ok
// SIG undefined FUN_144faf320(void)

void FUN_144faf320(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144faf3d0 FUN_144faf3d0 body=165 status=ok
// SIG undefined FUN_144faf3d0(void)

void FUN_144faf3d0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144faf480 FUN_144faf480 body=165 status=ok
// SIG undefined FUN_144faf480(void)

void FUN_144faf480(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144faf530 FUN_144faf530 body=12 status=ok
// SIG undefined FUN_144faf530(void)

void FUN_144faf530(longlong param_1)

{
  FUN_144faac50(*(undefined8 *)(param_1 + 0x230));
  return;
}



// FUNCTION 144faf540 FUN_144faf540 body=12 status=ok
// SIG undefined FUN_144faf540(void)

void FUN_144faf540(longlong param_1)

{
  FUN_144faad80(*(undefined8 *)(param_1 + 0x230));
  return;
}



// FUNCTION 144faf550 FUN_144faf550 body=12 status=ok
// SIG undefined FUN_144faf550(void)

void FUN_144faf550(longlong param_1)

{
  FUN_144faaeb0(*(undefined8 *)(param_1 + 0x230));
  return;
}



// FUNCTION 144faf560 FUN_144faf560 body=12 status=ok
// SIG undefined FUN_144faf560(void)

void FUN_144faf560(longlong param_1)

{
  FUN_144fab090(*(undefined8 *)(param_1 + 0x230));
  return;
}



// FUNCTION 144faf570 FUN_144faf570 body=71 status=ok
// SIG undefined FUN_144faf570(void)

undefined8 * FUN_144faf570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144faf5c0 FUN_144faf5c0 body=226 status=ok
// SIG undefined FUN_144faf5c0(void)

undefined8 * FUN_144faf5c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiOverlapManager::vftable;
  param_1[3] = hkaiOverlapManager::vftable;
  FUN_145011940(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  puVar2 = param_1 + 0x19;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar1 = 0x20;
  if (param_1 + 0x29 < puVar2) {
    lVar1 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  if (puVar2 <= param_1 + 0x29) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0xbf800000;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  return param_1;
}



// FUNCTION 144faf6b0 FUN_144faf6b0 body=750 status=ok
// SIG undefined FUN_144faf6b0(void)

void FUN_144faf6b0(longlong param_1,int *param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,int *param_6,int *param_7)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  iVar10 = *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xc0) <= *param_2 + 1) {
    iVar10 = *param_2 + 1;
  }
  *(int *)(param_1 + 0xc0) = iVar10;
  iVar10 = *(int *)(param_1 + 0x98) + 1;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar10) {
    FUN_144fb5b50((longlong *)(param_1 + 0x90),&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar3 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar10;
  piVar11 = (int *)((longlong)iVar3 * 0x100 + *(longlong *)(param_1 + 0x90));
  if (piVar11 != (int *)0x0) {
    FUN_144fb06b0(piVar11);
  }
  *piVar11 = *param_2;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  lVar9 = *(longlong *)(piVar11 + 2);
  *(longlong *)(piVar11 + 2) = param_3;
  if (lVar9 != 0) {
    FUN_144b3f230();
  }
  if (param_4 != 0) {
    FUN_144b3d910(param_4);
  }
  lVar9 = *(longlong *)(piVar11 + 4);
  *(longlong *)(piVar11 + 4) = param_4;
  if (lVar9 != 0) {
    FUN_144b3f230();
  }
  plVar1 = (longlong *)(piVar11 + 0x36);
  uVar6 = param_5[1];
  *(undefined8 *)(piVar11 + 8) = *param_5;
  *(undefined8 *)(piVar11 + 10) = uVar6;
  uVar6 = param_5[3];
  *(undefined8 *)(piVar11 + 0xc) = param_5[2];
  *(undefined8 *)(piVar11 + 0xe) = uVar6;
  uVar6 = param_5[5];
  *(undefined8 *)(piVar11 + 0x10) = param_5[4];
  *(undefined8 *)(piVar11 + 0x12) = uVar6;
  iVar10 = param_6[1];
  iVar3 = param_6[2];
  iVar5 = param_6[3];
  piVar11[0x2c] = *param_6;
  piVar11[0x2d] = iVar10;
  piVar11[0x2e] = iVar3;
  piVar11[0x2f] = iVar5;
  iVar10 = param_6[5];
  iVar3 = param_6[6];
  iVar5 = param_6[7];
  piVar11[0x30] = param_6[4];
  piVar11[0x31] = iVar10;
  piVar11[0x32] = iVar3;
  piVar11[0x33] = iVar5;
  piVar11[0x34] = *param_7;
  iVar10 = *(int *)(param_3 + 0x20);
  lVar9 = (longlong)iVar10;
  if ((int)(piVar11[0x39] & 0x7fffffffU) < iVar10) {
    FUN_144d30e40(plVar1,&PTR_vftable_14c6e47a0,lVar9);
  }
  iVar3 = piVar11[0x38];
  if (iVar3 < iVar10) {
    lVar4 = *plVar1;
    piVar11[0x38] = iVar10;
    for (puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
        puVar7 != (undefined8 *)(lVar9 * 0x10 + lVar4); puVar7 = puVar7 + 2) {
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
      }
    }
  }
  else if (iVar10 < iVar3) {
    lVar4 = *plVar1;
    piVar11[0x38] = iVar10;
    plVar1 = (longlong *)((longlong)iVar3 * 0x10 + *plVar1);
    while (plVar1 != (longlong *)(lVar9 * 0x10 + lVar4)) {
      plVar8 = plVar1 + -2;
      *(undefined4 *)(plVar1 + -1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar1 + -4)) && (*plVar8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar8,
                   (ulonglong)(*(uint *)((longlong)plVar1 + -4) & 0x7fffffff) << 2);
      }
      *plVar8 = 0;
      *(undefined4 *)((longlong)plVar1 + -4) = 0x80000000;
      plVar1 = plVar8;
    }
  }
  lVar9 = *(longlong *)(piVar11 + 2);
  *(undefined1 *)((longlong)piVar11 + 0xfa) = 1;
  local_58 = *(undefined4 *)(lVar9 + 0x90);
  uStack_54 = *(undefined4 *)(lVar9 + 0x94);
  uStack_50 = *(undefined4 *)(lVar9 + 0x98);
  uStack_4c = *(undefined4 *)(lVar9 + 0x9c);
  local_48 = *(undefined4 *)(lVar9 + 0xa0);
  uStack_44 = *(undefined4 *)(lVar9 + 0xa4);
  uStack_40 = *(undefined4 *)(lVar9 + 0xa8);
  uStack_3c = *(undefined4 *)(lVar9 + 0xac);
  FUN_144be9500(piVar11 + 0x2c,&local_58,local_38);
  local_78 = *(undefined4 *)(*(longlong *)(piVar11 + 2) + 0xb0);
  uVar2 = *(uint *)(param_1 + 200 + (longlong)piVar11[0x34] * 4);
  local_68 = uVar2 ^ 0x80000000;
  param_5 = (undefined8 *)(CONCAT44((int)((ulonglong)param_5 >> 0x20),uVar2) ^ 0x80000000);
  uStack_74 = local_78;
  uStack_70 = local_78;
  uStack_6c = local_78;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  FUN_144ca9e80(local_38,piVar11 + 8,&local_68,&local_78,3);
  param_5 = (undefined8 *)param_1;
  FUN_144fb2df0(param_1 + 0x20,local_38,&param_5);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  FUN_144fb2b40(param_1);
  return;
}



// FUNCTION 144faf9a0 FUN_144faf9a0 body=222 status=ok
// SIG undefined FUN_144faf9a0(void)

void FUN_144faf9a0(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_res8;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    piVar2 = *(int **)(param_1 + 0x90);
    uVar6 = uVar4;
    while (iVar5 = (int)uVar6, *piVar2 != *param_2) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 0x40;
      if ((longlong)*(int *)(param_1 + 0x98) <= (longlong)uVar4) {
        FUN_144fb2b40(param_1);
        return;
      }
    }
    local_res8 = param_1;
    FUN_144fb2ff0(param_1 + 0x20,uVar6,&local_res8);
    FUN_144fb0760(*(longlong *)(param_1 + 0x90) + (longlong)iVar5 * 0x100);
    iVar3 = *(int *)(param_1 + 0x98) + -1;
    *(int *)(param_1 + 0x98) = iVar3;
    if (iVar3 != iVar5) {
      lVar7 = (longlong)iVar3 * 0x100 + *(longlong *)(param_1 + 0x90);
      lVar1 = *(longlong *)(param_1 + 0x90) + (longlong)iVar5 * 0x100;
      if (lVar1 != lVar7) {
        if (lVar1 != 0) {
          FUN_144fb0a50(lVar1,lVar7);
        }
        FUN_144fb0760(lVar7);
      }
    }
  }
  FUN_144fb2b40(param_1);
  return;
}



// FUNCTION 144fafa80 FUN_144fafa80 body=313 status=ok
// SIG undefined FUN_144fafa80(void)

void FUN_144fafa80(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong *plVar9;
  longlong local_res8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar8 = *(int *)(param_1 + 0xa8) + 1;
  if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar8) {
    FUN_144fb5e60((longlong *)(param_1 + 0xa0),&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar2 = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xa8) = iVar8;
  plVar9 = (longlong *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0xa0));
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    *(undefined2 *)(plVar9 + 10) = 0;
    *(undefined1 *)((longlong)plVar9 + 0x52) = 0;
  }
  if (param_2 != (longlong *)0x0) {
    FUN_144b3d910(param_2);
  }
  lVar3 = *plVar9;
  *plVar9 = (longlong)param_2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_58 = (undefined4)param_2[6];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_50 = (undefined4)param_2[7];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(plVar9 + 6) = local_58;
  *(undefined4 *)((longlong)plVar9 + 0x34) = uStack_54;
  *(undefined4 *)(plVar9 + 7) = uStack_50;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uStack_4c;
  lVar3 = param_2[9];
  plVar9[8] = param_2[8];
  plVar9[9] = lVar3;
  *(undefined1 *)((longlong)plVar9 + 0x52) = 1;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&local_58,*(undefined4 *)(param_1 + 0x148),plVar9 + 2);
  fVar4 = *(float *)(plVar9 + 2);
  fVar5 = *(float *)(plVar9 + 3);
  fVar1 = *(float *)(param_1 + 0x148);
  fStack_34 = *(float *)((longlong)plVar9 + 0x14) - fVar1;
  fStack_2c = *(float *)((longlong)plVar9 + 0x1c) - fVar1;
  fVar6 = *(float *)(plVar9 + 4);
  fVar7 = *(float *)(plVar9 + 5);
  fStack_24 = fVar1 + *(float *)((longlong)plVar9 + 0x24);
  fStack_1c = fVar1 + *(float *)((longlong)plVar9 + 0x2c);
  *(float *)(plVar9 + 2) = fVar4 - fVar1;
  *(float *)((longlong)plVar9 + 0x14) = fStack_34;
  *(float *)(plVar9 + 3) = fVar5 - fVar1;
  *(float *)((longlong)plVar9 + 0x1c) = fStack_2c;
  *(float *)(plVar9 + 4) = fVar1 + fVar6;
  *(float *)((longlong)plVar9 + 0x24) = fStack_24;
  *(float *)(plVar9 + 5) = fVar1 + fVar7;
  *(float *)((longlong)plVar9 + 0x2c) = fStack_1c;
  local_38 = (fVar4 - fVar1) + *(float *)(plVar9 + 8);
  fStack_34 = fStack_34 + *(float *)((longlong)plVar9 + 0x44);
  fStack_30 = (fVar5 - fVar1) + *(float *)(plVar9 + 9);
  fStack_2c = fStack_2c + *(float *)((longlong)plVar9 + 0x4c);
  local_28 = fVar1 + fVar6 + *(float *)(plVar9 + 8);
  fStack_24 = fStack_24 + *(float *)((longlong)plVar9 + 0x44);
  fStack_20 = fVar1 + fVar7 + *(float *)(plVar9 + 9);
  fStack_1c = fStack_1c + *(float *)((longlong)plVar9 + 0x4c);
  local_res8 = param_1;
  FUN_144fb3260(param_1 + 0x20,&local_38,&local_res8);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}



// FUNCTION 144fafbc0 FUN_144fafbc0 body=292 status=ok
// SIG undefined FUN_144fafbc0(void)

void FUN_144fafbc0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong local_res8;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    plVar6 = *(longlong **)(param_1 + 0xa0);
    while (*plVar6 != param_2) {
      iVar7 = iVar7 + 1;
      plVar6 = plVar6 + 0xc;
      if (*(int *)(param_1 + 0xa8) <= iVar7) {
        *(undefined1 *)(param_1 + 0xc4) = 1;
        return;
      }
    }
    local_res8 = param_1;
    FUN_144fb3450(param_1 + 0x20,iVar7,&local_res8);
    if (*(longlong *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 0xa0)) != 0) {
      FUN_144b3f230();
    }
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar5 = iVar1 + -1;
    *(int *)(param_1 + 0xa8) = iVar5;
    if (iVar5 != iVar7) {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xa0) + -0x60 + (longlong)iVar1 * 0x60);
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar7 * 0x60);
      if (plVar6 != plVar8) {
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = *plVar8;
          *plVar8 = 0;
          lVar4 = plVar8[3];
          plVar6[2] = plVar8[2];
          plVar6[3] = lVar4;
          lVar4 = plVar8[5];
          plVar6[4] = plVar8[4];
          plVar6[5] = lVar4;
          uVar2 = *(undefined4 *)((longlong)plVar8 + 0x34);
          lVar4 = plVar8[7];
          uVar3 = *(undefined4 *)((longlong)plVar8 + 0x3c);
          *(int *)(plVar6 + 6) = (int)plVar8[6];
          *(undefined4 *)((longlong)plVar6 + 0x34) = uVar2;
          *(int *)(plVar6 + 7) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0x3c) = uVar3;
          lVar4 = plVar8[9];
          plVar6[8] = plVar8[8];
          plVar6[9] = lVar4;
          *(char *)(plVar6 + 10) = (char)plVar8[10];
          *(undefined1 *)((longlong)plVar6 + 0x51) = *(undefined1 *)((longlong)plVar8 + 0x51);
          *(undefined1 *)((longlong)plVar6 + 0x52) = *(undefined1 *)((longlong)plVar8 + 0x52);
        }
        if (*plVar8 != 0) {
          FUN_144b3f230();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}



// FUNCTION 144fafcf0 FUN_144fafcf0 body=52 status=ok
// SIG undefined FUN_144fafcf0(void)

ulonglong FUN_144fafcf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa0);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0xa8) * 0xc;
  while( true ) {
    if (plVar1 == plVar2) {
      return (ulonglong)plVar1 & 0xffffffffffffff00;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 0xc;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// FUNCTION 144fafd30 FUN_144fafd30 body=232 status=ok
// SIG undefined FUN_144fafd30(void)

void FUN_144fafd30(longlong param_1,longlong *param_2,undefined1 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_144fb1b60(param_1,param_3);
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_144fb1e20(param_1,param_3,&local_18);
  if (param_2 == (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = (longlong)*(int *)(param_1 + 0x98) * 0x100 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x100) {
      *(undefined1 *)(lVar1 + 0xf8) = 1;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x90);
    piVar4 = piVar3 + (longlong)*(int *)(param_1 + 0x98) * 0x40;
    for (; piVar3 != piVar4; piVar3 = piVar3 + 0x40) {
      *(byte *)(piVar3 + 0x3e) =
           (byte)(*(uint *)(*param_2 + ((longlong)*piVar3 >> 5) * 4) >> ((byte)*piVar3 & 0x1f)) & 1;
    }
  }
  return;
}



// FUNCTION 144fafe20 FUN_144fafe20 body=919 status=ok
// SIG undefined FUN_144fafe20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fafe20(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar2 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar8;
  }
  lVar2 = *(longlong *)(lVar8 + 0x3e0);
  if (lVar2 != 0) {
    local_68 = "TtupdateOverlaps";
    uStack_60 = "";
    FUN_144b3f370(lVar2,&local_68);
  }
  if (*(char *)(param_1 + 0xc4) != '\0') {
    FUN_144be90e0(0x51b4fe02);
    fVar1 = *(float *)(param_1 + 0x14c);
    local_res8 = param_1;
    FUN_144fb36c0(param_1 + 0x20,&local_res8);
    FUN_144be90e0(0x9666fe1);
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      lVar8 = 0;
      do {
        piVar12 = (int *)(*(longlong *)(param_1 + 0xb0) + lVar8);
        puVar13 = (undefined4 *)((longlong)piVar12[1] * 0x100 + *(longlong *)(param_1 + 0x90));
        puVar11 = (undefined8 *)((longlong)*piVar12 * 0x60 + *(longlong *)(param_1 + 0xa0));
        local_res8 = CONCAT44(local_res8._4_4_,*puVar13);
        cVar5 = (**(code **)(*(longlong *)*puVar11 + 0x60))
                          ((longlong *)*puVar11,&local_res8,puVar13 + 0x14,puVar13 + 8);
        if (((cVar5 != '\0') == ((char)piVar12[2] != '\0')) &&
           ((cVar5 == '\0' ||
            (((*(char *)(puVar11 + 10) == '\0' && (*(char *)((longlong)puVar11 + 0x52) == '\0')) &&
             (*(char *)((longlong)puVar13 + 0xfa) == '\0')))))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_68 = (char *)0x0;
          uStack_60 = (char *)0x0;
          local_58 = 0;
          uStack_50 = 0;
          FUN_144f72230(&local_68,puVar13 + 0x2c,puVar11 + 6);
LAB_144fb009e:
          FUN_144fb2180(param_1,iVar10,cVar5,&local_68);
        }
        else if ((cVar5 != '\0') &&
                ((*(char *)((longlong)puVar11 + 0x51) != '\0' ||
                 (*(char *)((longlong)puVar13 + 0xf9) != '\0')))) {
          local_68 = (char *)0x0;
          uStack_60 = (char *)0x0;
          local_58 = 0;
          uStack_50 = 0;
          uVar6 = FUN_144f72230(&local_68,puVar13 + 0x2c,puVar11 + 6);
          fVar14 = (float)piVar12[0xc] * (float)local_68;
          fVar15 = (float)piVar12[0xd] * local_68._4_4_;
          fVar16 = (float)piVar12[0xe] * (float)uStack_60;
          fVar17 = (float)piVar12[0xf] * uStack_60._4_4_;
          fVar18 = fVar15 + fVar14;
          fVar14 = fVar14 + fVar15;
          fVar15 = fVar17 + fVar16;
          fVar16 = fVar16 + fVar17;
          auVar3._4_4_ = -(uint)((float)(~DAT_1499319e0._4_4_ &
                                        (uint)((float)piVar12[0xd] -
                                              (float)((uint)local_68._4_4_ ^
                                                     (uint)(fVar16 + fVar14 < 0.0) * -0x80000000)))
                                <= fVar1);
          auVar3._0_4_ = -(uint)((float)(~DAT_1499319e0 &
                                        (uint)((float)piVar12[0xc] -
                                              (float)((uint)(float)local_68 ^
                                                     (uint)(fVar15 + fVar18 < 0.0) * -0x80000000)))
                                <= fVar1);
          auVar3._8_4_ = -(uint)((float)(~DAT_1499319e0._8_4_ &
                                        (uint)((float)piVar12[0xe] -
                                              (float)((uint)(float)uStack_60 ^
                                                     (uint)(fVar18 + fVar15 < 0.0) * -0x80000000)))
                                <= fVar1);
          auVar3._12_4_ =
               -(uint)((float)(~DAT_1499319e0._12_4_ &
                              (uint)((float)piVar12[0xf] -
                                    (float)((uint)uStack_60._4_4_ ^
                                           (uint)(fVar14 + fVar16 < 0.0) * -0x80000000))) <= fVar1);
          iVar7 = movmskps(uVar6,auVar3);
          if (iVar7 == 0xf) {
            auVar19._4_4_ =
                 -(uint)((float)(~DAT_1499319e0._4_4_ &
                                (uint)((float)piVar12[0x11] - local_58._4_4_)) <= fVar1);
            auVar19._0_4_ =
                 -(uint)((float)(~DAT_1499319e0 & (uint)((float)piVar12[0x10] - (float)local_58)) <=
                        fVar1);
            auVar19._8_4_ =
                 -(uint)((float)(~DAT_1499319e0._8_4_ &
                                (uint)((float)piVar12[0x12] - (float)uStack_50)) <= fVar1);
            auVar19._12_4_ =
                 -(uint)((float)(~DAT_1499319e0._12_4_ &
                                (uint)((float)piVar12[0x13] - uStack_50._4_4_)) <= fVar1);
            uVar6 = movmskps(0xf,auVar19);
            if (((byte)uVar6 & 7) == 7) goto LAB_144fb00b1;
          }
          iVar7 = FUN_144ca9cf0(*puVar11,piVar12 + 0xc,&local_68);
          if (iVar7 != 0) goto LAB_144fb009e;
        }
LAB_144fb00b1:
        FUN_144be90e0(0xb00daf2f);
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 0x60;
        param_2 = local_res10;
      } while (iVar10 < *(int *)(param_1 + 0xb8));
    }
    lVar8 = *(longlong *)(param_1 + 0x90);
    lVar9 = (longlong)*(int *)(param_1 + 0x98) * 0x100 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x100) {
                    /* WARNING: Read-only address (ram,0x0001499319e0) is written */
      *(undefined2 *)(lVar8 + 0xf9) = 0;
    }
                    /* WARNING: Read-only address (ram,0x0001499319e0) is written */
    lVar8 = *(longlong *)(param_1 + 0xa0);
    lVar9 = (longlong)*(int *)(param_1 + 0xa8) * 0x60 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x60) {
                    /* WARNING: Read-only address (ram,0x0001499319e0) is written */
      *(undefined2 *)(lVar8 + 0x50) = 0;
      *(undefined1 *)(lVar8 + 0x52) = 0;
    }
                    /* WARNING: Read-only address (ram,0x0001499319e0) is written */
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 0x150) < 1) {
    FUN_144fb0bf0(param_1,param_2);
  }
  else {
    FUN_144fb11f0();
  }
  if (lVar2 != 0) {
    local_68 = &DAT_149981764;
    uStack_60 = &DAT_149981766;
    FUN_144b3f260(lVar2,&local_68);
  }
  return;
}



// FUNCTION 144fb01c0 FUN_144fb01c0 body=70 status=ok
// SIG undefined FUN_144fb01c0(void)

undefined8 FUN_144fb01c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xc4) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = (longlong)*(int *)(param_1 + 0x98) * 0x100 + lVar1;
    while( true ) {
      if (lVar1 == lVar2) {
        return 0;
      }
      if ((*(int *)(lVar1 + 0xf0) != 0) && (*(char *)(lVar1 + 0xf8) != '\0')) break;
      lVar1 = lVar1 + 0x100;
    }
  }
  return 1;
}



// FUNCTION 144fb0210 FUN_144fb0210 body=603 status=ok
// SIG undefined FUN_144fb0210(void)

void FUN_144fb0210(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong local_res8;
  uint local_res10 [2];
  longlong *local_58;
  uint *puStack_50;
  
  plVar9 = (longlong *)0x0;
  iVar5 = -1;
  if (0 < *(int *)(param_1 + 0x80)) {
    puVar4 = *(uint **)(param_1 + 0x78);
    plVar10 = plVar9;
    plVar3 = plVar9;
    do {
      iVar5 = (int)plVar3;
      if (*puVar4 == param_2 >> 0x16) break;
      plVar3 = (longlong *)(ulonglong)((int)plVar3 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
      puVar4 = puVar4 + 0x40;
      iVar5 = -1;
    } while ((longlong)plVar10 < (longlong)*(int *)(param_1 + 0x80));
  }
  lVar14 = (longlong)iVar5 * 0x100 + *(longlong *)(param_1 + 0x78);
  plVar10 = (longlong *)((ulonglong)(param_2 & 0x3fffff) * 0x10 + *(longlong *)(lVar14 + 0xd8));
  uVar7 = *(uint *)(plVar10 + 1);
  uVar6 = 0;
  if ((int)uVar7 < 1) {
    local_res10[0] = 0x80000000;
    plVar3 = plVar9;
  }
  else {
    plVar3 = (longlong *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 << 3);
    uVar6 = uVar7;
    local_res10[0] = uVar7;
  }
  plVar11 = plVar9;
  plVar12 = plVar3;
  if (0 < (int)plVar10[1]) {
    do {
      uVar7 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar7;
      *plVar12 = *(longlong *)(param_1 + 0x98) + 0x30 +
                 (longlong)*(int *)((longlong)plVar11 + *plVar10) * 0x60;
      plVar11 = (longlong *)((longlong)plVar11 + 4);
      plVar12 = plVar12 + 1;
    } while ((int)uVar7 < (int)plVar10[1]);
  }
  if (0 < (int)uVar6) {
    uVar13 = (ulonglong)uVar6;
    plVar9 = plVar3;
    do {
      local_res8 = *plVar9;
      iVar5 = *(int *)(param_3 + 8);
      local_58 = &local_res8;
      puStack_50 = local_res10;
      FUN_145312f20(&local_58,*(undefined4 *)(*(longlong *)(lVar14 + 8) + 0xb0),lVar14 + 0x20,
                    param_3);
      if (iVar5 < *(int *)(param_3 + 8)) {
        do {
          iVar8 = (int)param_4[1] + 1;
          uVar2 = *(undefined8 *)(local_res8 + 0x20);
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar8) {
            FUN_144fb64f0(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar8);
          }
          puVar1 = (undefined8 *)(*param_4 + (longlong)(int)param_4[1] * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = uVar2;
          }
          iVar5 = iVar5 + 1;
          *(int *)(param_4 + 1) = iVar8;
        } while (iVar5 < *(int *)(param_3 + 8));
      }
      plVar9 = plVar9 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if ((-1 < (int)local_res10[0]) && (plVar3 != (longlong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,plVar3,(ulonglong)(local_res10[0] & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144fb0470 FUN_144fb0470 body=397 status=ok
// SIG undefined FUN_144fb0470(void)

void FUN_144fb0470(longlong param_1,longlong param_2,uint *param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar7 = 0;
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c);
  iVar10 = -1;
  if (0 < *(int *)(param_1 + 0x80)) {
    piVar3 = *(int **)(param_1 + 0x78);
    uVar4 = uVar7;
    uVar9 = uVar7;
    do {
      iVar10 = (int)uVar9;
      if (*piVar3 == iVar1) break;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0x40;
      iVar10 = -1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x80));
  }
  plVar5 = (longlong *)
           ((longlong)(int)*param_3 * 0x10 +
           *(longlong *)((longlong)iVar10 * 0x100 + 0xd8 + *(longlong *)(param_1 + 0x78)));
  *(int *)(param_4 + 0x14) = (int)param_5[1];
  *(int *)(param_4 + 0x18) = (int)plVar5[1];
  lVar2 = param_5[1];
  iVar10 = (int)plVar5[1] + (int)lVar2;
  if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar10) {
    FUN_144fb5530(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  *(int *)(param_5 + 1) = iVar10;
  plVar8 = (longlong *)(*param_5 + (longlong)(int)lVar2 * 8);
  uVar4 = uVar7;
  if (0 < (int)plVar5[1]) {
    do {
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *plVar8 = *(longlong *)(param_1 + 0x98) + 0x30 + (longlong)*(int *)(uVar4 + *plVar5) * 0x60;
      uVar4 = uVar4 + 4;
      plVar8 = plVar8 + 1;
    } while ((int)uVar6 < (int)plVar5[1]);
  }
  *(uint *)(param_4 + 0x10) = iVar1 << 0x16 | *param_3;
  *(longlong *)(param_4 + 8) = param_2;
  *(undefined4 *)(param_4 + 0x1c) =
       *(undefined4 *)
        (param_1 + 0xb0 + (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x180) * 4);
  *(undefined4 *)(param_4 + 0x20) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x68) + 0xb0);
  *(byte *)(param_4 + 0x24) =
       *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x68) + 0x80) & 1;
  return;
}



// FUNCTION 144fb0600 FUN_144fb0600 body=43 status=ok
// SIG undefined FUN_144fb0600(void)

void FUN_144fb0600(longlong param_1,undefined8 *param_2)

{
  FUN_144b3d470(param_1 + 200,*param_2,0x80);
  FUN_144fb2ad0(param_1);
  return;
}



// FUNCTION 144fb0630 FUN_144fb0630 body=118 status=ok
// SIG undefined FUN_144fb0630(void)

undefined4 * FUN_144fb0630(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + 0xc);
  *param_1 = *param_2;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  FUN_144c52690(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 0xc) = *puVar1;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  return param_1;
}



// FUNCTION 144fb06b0 FUN_144fb06b0 body=166 status=ok
// SIG undefined FUN_144fb06b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_144fb06b0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = uRam000000014c6dae48;
  *(undefined8 *)(param_1 + 0x50) = _DAT_14c6dae40;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = uRam000000014c6dae58;
  *(undefined8 *)(param_1 + 0x60) = _DAT_14c6dae50;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = uRam000000014c6dae68;
  *(undefined8 *)(param_1 + 0x70) = _DAT_14c6dae60;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = _DAT_14c6dae78;
  *(undefined8 *)(param_1 + 0x80) = _DAT_14c6dae70;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  return param_1;
}



// FUNCTION 144fb0760 FUN_144fb0760 body=744 status=ok
// SIG undefined FUN_144fb0760(void)

void FUN_144fb0760(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  
  FUN_144be90e0(0x6347a5c9);
  iVar2 = *(int *)(param_1 + 0xe0);
  iVar10 = 0;
  uVar6 = 0x295c9ad;
  if (iVar2 != 0) {
    do {
      uVar5 = iVar2 - iVar10;
      if (0xaf < iVar2 - iVar10) {
        uVar5 = 0xaf;
      }
      uVar11 = (ulonglong)uVar5;
      if (iVar10 < (int)(uVar5 + iVar10)) {
        iVar10 = iVar10 + uVar5;
        do {
          plVar8 = (longlong *)
                   ((longlong)*(int *)(param_1 + 0xe0) * 0x10 + *(longlong *)(param_1 + 0xd8));
          plVar4 = plVar8;
          while (plVar4 != plVar8 + -2) {
            plVar9 = plVar4 + -2;
            *(undefined4 *)(plVar4 + -1) = 0;
            if ((-1 < (int)*(uint *)((longlong)plVar4 + -4)) && (*plVar9 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,*plVar9,
                         (ulonglong)(*(uint *)((longlong)plVar4 + -4) & 0x7fffffff) << 2);
            }
            *plVar9 = 0;
            *(undefined4 *)((longlong)plVar4 + -4) = 0x80000000;
            plVar4 = plVar9;
          }
          *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar6 = uVar6 + uVar5 * 0x5d2b63;
      if (uVar6 < uVar5 * 0x5d2b63) {
        FUN_144be90e0(0xfe890d18);
      }
    } while (iVar10 != iVar2);
  }
  puVar3 = *(undefined4 **)(param_1 + 0xe8);
  if (puVar3 + (longlong)*(int *)(param_1 + 0xf0) * 0x10 != puVar3) {
    puVar7 = puVar3 + (longlong)*(int *)(param_1 + 0xf0) * 0x10 + 0xf;
    do {
      puVar7[-0x11] = 0;
      if ((-1 < (int)puVar7[-0x10]) && (*(longlong *)(puVar7 + -0x13) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar7 + -0x13),
                   (ulonglong)(puVar7[-0x10] & 0x7fffffff) << 2);
      }
      puVar1 = puVar7 + -0x1f;
      *(undefined8 *)(puVar7 + -0x13) = 0;
      puVar7[-0x10] = 0x80000000;
      puVar7 = puVar7 + -0x10;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xf4)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xe8),
               (ulonglong)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) << 6);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  plVar4 = *(longlong **)(param_1 + 0xd8);
  plVar8 = plVar4 + (longlong)*(int *)(param_1 + 0xe0) * 2;
  while (plVar8 != plVar4) {
    plVar9 = plVar8 + -2;
    *(undefined4 *)(plVar8 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar8 + -4)) && (*plVar9 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar9,
                 (ulonglong)(*(uint *)((longlong)plVar8 + -4) & 0x7fffffff) << 2);
    }
    *plVar9 = 0;
    *(undefined4 *)((longlong)plVar8 + -4) = 0x80000000;
    plVar8 = plVar9;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xe4)) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xd8),
               (ulonglong)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 144fb0a50 FUN_144fb0a50 body=409 status=ok
// SIG undefined FUN_144fb0a50(void)

undefined4 * FUN_144fb0a50(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_2 + 0x36);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  uVar5 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar5;
  uVar2 = param_2[0x2d];
  uVar3 = param_2[0x2e];
  uVar4 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar3;
  param_1[0x2f] = uVar4;
  uVar2 = param_2[0x31];
  uVar3 = param_2[0x32];
  uVar4 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar2;
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar4;
  param_1[0x34] = param_2[0x34];
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x80000000;
  FUN_144c97d20(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 0x36) = *puVar1;
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = (undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x80000000;
  FUN_144c97e80(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 0x3a) = *puVar1;
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)((longlong)param_2 + 0xf9);
  *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)((longlong)param_2 + 0xfa);
  return param_1;
}



// FUNCTION 144fb0bf0 FUN_144fb0bf0 body=1525 status=ok
// SIG undefined FUN_144fb0bf0(void)

void FUN_144fb0bf0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined *puVar20;
  int local_res8;
  longlong local_res18;
  uint *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  ulonglong uVar11;
  
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar17 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar17 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar17 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar17 + 0xf0) = lVar9;
  }
  puVar20 = *(undefined **)(lVar9 + 0x3e0);
  local_68 = (uint *)0x149c1e068;
  pcStack_60 = "";
  local_58 = puVar20;
  if (puVar20 != (undefined *)0x0) {
    local_68 = (uint *)0x149c1e068;
    pcStack_60 = "";
    FUN_144b3f370(puVar20,&local_68);
  }
  iVar14 = *(int *)(param_1 + 0xc0);
  lVar17 = (longlong)iVar14;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_144fb5630(param_2,&PTR_vftable_14c6e47a0,lVar17);
  }
  iVar16 = (int)param_2[1];
  if (iVar16 < iVar14) {
    puVar18 = (undefined4 *)((longlong)iVar16 * 0x38 + *param_2);
    *(int *)(param_2 + 1) = iVar14;
    puVar12 = (undefined4 *)(lVar17 * 0x38 + *param_2);
    if (puVar18 != puVar12) {
      puVar18 = puVar18 + 5;
      do {
        if (puVar18 != (undefined4 *)&DAT_00000014) {
          *(undefined8 *)(puVar18 + -3) = 0;
          puVar18[-1] = 0;
          *puVar18 = 0x80000000;
          *(undefined8 *)(puVar18 + 1) = 0;
          puVar18[3] = 0;
          puVar18[4] = 0x80000000;
          *(undefined8 *)(puVar18 + 5) = 0;
          puVar18[7] = 0;
          puVar18[8] = 0x80000000;
        }
        puVar1 = puVar18 + 9;
        puVar18 = puVar18 + 0xe;
      } while (puVar1 != puVar12);
    }
  }
  else if (iVar14 < iVar16) {
    puVar18 = (undefined4 *)(lVar17 * 0x38 + *param_2);
    *(int *)(param_2 + 1) = iVar14;
    puVar12 = (undefined4 *)((longlong)iVar16 * 0x38 + *param_2);
    if (puVar12 != puVar18) {
      puVar12 = puVar12 + 0xd;
      do {
        puVar12[-0xf] = 0;
        if ((-1 < (int)puVar12[-0xe]) && (*(longlong *)(puVar12 + -0x11) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -0x11),
                     (ulonglong)(puVar12[-0xe] & 0x7fffffff) << 5);
        }
        *(undefined8 *)(puVar12 + -0x11) = 0;
        puVar12[-0xe] = 0x80000000;
        puVar12[-0x13] = 0;
        if ((-1 < (int)puVar12[-0x12]) && (*(longlong *)(puVar12 + -0x15) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -0x15),
                     (ulonglong)(puVar12[-0x12] & 0x7fffffff) << 2);
        }
        *(undefined8 *)(puVar12 + -0x15) = 0;
        puVar12[-0x12] = 0x80000000;
        puVar12[-0x17] = 0;
        if ((-1 < (int)puVar12[-0x16]) && (*(longlong *)(puVar12 + -0x19) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -0x19),
                     (ulonglong)(puVar12[-0x16] & 0x7fffffff) << 2);
        }
        puVar1 = puVar12 + -0x1b;
        *(undefined8 *)(puVar12 + -0x19) = 0;
        puVar12[-0x16] = 0x80000000;
        puVar12 = puVar12 + -0xe;
      } while (puVar1 != puVar18);
    }
  }
  uVar11 = 0;
  uVar13 = uVar11;
  if (0 < *(int *)(param_1 + 0xc0)) {
    do {
      *(int *)(uVar13 + *param_2) = (int)uVar11;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar13 + 0x38;
    } while ((int)uVar10 < *(int *)(param_1 + 0xc0));
  }
  puVar19 = *(uint **)(param_1 + 0x90);
  puVar15 = puVar19 + (longlong)*(int *)(param_1 + 0x98) * 0x40;
  local_68 = puVar15;
  if (puVar19 != puVar15) {
    puVar19 = puVar19 + 0x3d;
    do {
      if ((char)puVar19[1] != '\0') {
        lVar17 = (longlong)(int)puVar19[-0x3d] * 0x38 + *param_2;
        plVar2 = (longlong *)(lVar17 + 0x28);
        if ((int)(*(uint *)(lVar17 + 0x34) & 0x7fffffff) < (int)puVar19[-1]) {
          FUN_144c36720(plVar2,&PTR_vftable_14c6e47a0,(longlong)(int)puVar19[-1]);
        }
        uVar10 = puVar19[-1];
        local_res8 = 0;
        if (0 < (int)uVar10) {
          local_res18 = 0;
          do {
            uVar11 = 0;
            lVar9 = *(longlong *)(puVar19 + -3) + local_res18;
            uVar13 = uVar11;
            if (0 < *(int *)(lVar9 + 0x38)) {
              do {
                iVar14 = *(int *)(uVar13 + *(longlong *)(lVar9 + 0x30));
                if (*(int *)(*(longlong *)(puVar19 + -7) + 8 + (longlong)iVar14 * 0x10) == 0) {
                  iVar16 = *(int *)(lVar17 + 0x20) + 1;
                  if ((int)(*(uint *)(lVar17 + 0x24) & 0x7fffffff) < iVar16) {
                    FUN_144c584b0(lVar17 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar16);
                  }
                  piVar3 = (int *)(*(longlong *)(lVar17 + 0x18) +
                                  (longlong)*(int *)(lVar17 + 0x20) * 4);
                  if (piVar3 != (int *)0x0) {
                    *piVar3 = iVar14;
                  }
                  *(int *)(lVar17 + 0x20) = iVar16;
                }
                else {
                  iVar16 = *(int *)(lVar17 + 0x10) + 1;
                  if ((int)(*(uint *)(lVar17 + 0x14) & 0x7fffffff) < iVar16) {
                    FUN_144c584b0(lVar17 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar16);
                  }
                  piVar3 = (int *)(*(longlong *)(lVar17 + 8) + (longlong)*(int *)(lVar17 + 0x10) * 4
                                  );
                  if (piVar3 != (int *)0x0) {
                    *piVar3 = iVar14;
                  }
                  *(int *)(lVar17 + 0x10) = iVar16;
                }
                uVar10 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
                uVar13 = uVar13 + 4;
              } while ((int)uVar10 < *(int *)(lVar9 + 0x38));
            }
            iVar14 = *(int *)(lVar17 + 0x30) + 1;
            if ((int)(*(uint *)(lVar17 + 0x34) & 0x7fffffff) < iVar14) {
              FUN_144c36720(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar14);
            }
            puVar12 = (undefined4 *)((longlong)*(int *)(lVar17 + 0x30) * 0x20 + *plVar2);
            if (puVar12 != (undefined4 *)0x0) {
              uVar5 = *(undefined4 *)(lVar9 + 0x14);
              uVar6 = *(undefined4 *)(lVar9 + 0x18);
              uVar7 = *(undefined4 *)(lVar9 + 0x1c);
              *puVar12 = *(undefined4 *)(lVar9 + 0x10);
              puVar12[1] = uVar5;
              puVar12[2] = uVar6;
              puVar12[3] = uVar7;
              uVar8 = *(undefined8 *)(lVar9 + 0x28);
              *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(lVar9 + 0x20);
              *(undefined8 *)(puVar12 + 6) = uVar8;
            }
            local_res8 = local_res8 + 1;
            *(int *)(lVar17 + 0x30) = iVar14;
            uVar10 = puVar19[-1];
            local_res18 = local_res18 + 0x40;
            puVar15 = local_68;
          } while (local_res8 < (int)uVar10);
        }
        puVar12 = *(undefined4 **)(puVar19 + -3);
        if (puVar12 + (longlong)(int)uVar10 * 0x10 != puVar12) {
          puVar18 = puVar12 + (longlong)(int)uVar10 * 0x10 + 0xf;
          do {
            puVar18[-0x11] = 0;
            if ((-1 < (int)puVar18[-0x10]) && (*(longlong *)(puVar18 + -0x13) != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,*(longlong *)(puVar18 + -0x13),
                         (ulonglong)(puVar18[-0x10] & 0x7fffffff) << 2);
            }
            puVar1 = puVar18 + -0x1f;
            *(undefined8 *)(puVar18 + -0x13) = 0;
            puVar18[-0x10] = 0x80000000;
            puVar18 = puVar18 + -0x10;
          } while (puVar1 != puVar12);
        }
        puVar19[-1] = 0;
        if ((-1 < (int)*puVar19) && (*(longlong *)(puVar19 + -3) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar19 + -3),
                     (ulonglong)(*puVar19 & 0x7fffffff) << 6);
        }
        puVar19[-3] = 0;
        puVar19[-2] = 0;
        *puVar19 = 0x80000000;
        FUN_144be90e0(0x52b70b67);
        FUN_144fb3b50(lVar17 + 8);
        FUN_144fb3b50(lVar17 + 0x18);
        FUN_144be90e0(0x905ebc46);
      }
      puVar4 = puVar19 + 3;
      puVar19 = puVar19 + 0x40;
      puVar20 = local_58;
    } while (puVar4 != puVar15);
  }
  if (puVar20 != (undefined *)0x0) {
    local_58 = &DAT_149981764;
    puStack_50 = &DAT_149981766;
    FUN_144b3f260(puVar20,&local_58);
  }
  return;
}



// FUNCTION 144fb11f0 FUN_144fb11f0 body=2415 status=ok
// SIG undefined FUN_144fb11f0(void)

void FUN_144fb11f0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined4 *puVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  char *pcVar33;
  int *piVar34;
  longlong *plVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  int iVar39;
  longlong local_res18;
  int local_88;
  int iStack_84;
  char *local_68;
  undefined8 uStack_60;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar6 + 0xf0);
  if (lVar18 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar18;
  }
  lVar6 = *(longlong *)(lVar18 + 0x3e0);
  local_68 = "TtapplyPendingUpdatesLimited";
  uStack_60 = "";
  if (lVar6 != 0) {
    local_68 = "TtapplyPendingUpdatesLimited";
    uStack_60 = "";
    FUN_144b3f370(lVar6,&local_68);
  }
  iVar39 = *(int *)(param_1 + 0xc0);
  lVar18 = (longlong)iVar39;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar39) {
    FUN_144fb5630(param_2,&PTR_vftable_14c6e47a0,lVar18);
  }
  iVar22 = (int)param_2[1];
  if (iVar22 < iVar39) {
    puVar25 = (undefined4 *)((longlong)iVar22 * 0x38 + *param_2);
    *(int *)(param_2 + 1) = iVar39;
    puVar20 = (undefined4 *)(lVar18 * 0x38 + *param_2);
    if (puVar25 != puVar20) {
      puVar25 = puVar25 + 5;
      do {
        if (puVar25 != (undefined4 *)&DAT_00000014) {
          *(undefined8 *)(puVar25 + -3) = 0;
          puVar25[-1] = 0;
          *puVar25 = 0x80000000;
          *(undefined8 *)(puVar25 + 1) = 0;
          puVar25[3] = 0;
          puVar25[4] = 0x80000000;
          *(undefined8 *)(puVar25 + 5) = 0;
          puVar25[7] = 0;
          puVar25[8] = 0x80000000;
        }
        puVar1 = puVar25 + 9;
        puVar25 = puVar25 + 0xe;
      } while (puVar1 != puVar20);
    }
  }
  else if (iVar39 < iVar22) {
    puVar25 = (undefined4 *)(lVar18 * 0x38 + *param_2);
    *(int *)(param_2 + 1) = iVar39;
    puVar20 = (undefined4 *)((longlong)iVar22 * 0x38 + *param_2);
    if (puVar20 != puVar25) {
      puVar20 = puVar20 + 0xd;
      do {
        puVar20[-0xf] = 0;
        if ((-1 < (int)puVar20[-0xe]) && (*(longlong *)(puVar20 + -0x11) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar20 + -0x11),
                     (ulonglong)(puVar20[-0xe] & 0x7fffffff) << 5);
        }
        *(undefined8 *)(puVar20 + -0x11) = 0;
        puVar20[-0xe] = 0x80000000;
        puVar20[-0x13] = 0;
        if ((-1 < (int)puVar20[-0x12]) && (*(longlong *)(puVar20 + -0x15) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar20 + -0x15),
                     (ulonglong)(puVar20[-0x12] & 0x7fffffff) << 2);
        }
        *(undefined8 *)(puVar20 + -0x15) = 0;
        puVar20[-0x12] = 0x80000000;
        puVar20[-0x17] = 0;
        if ((-1 < (int)puVar20[-0x16]) && (*(longlong *)(puVar20 + -0x19) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar20 + -0x19),
                     (ulonglong)(puVar20[-0x16] & 0x7fffffff) << 2);
        }
        puVar1 = puVar20 + -0x1b;
        *(undefined8 *)(puVar20 + -0x19) = 0;
        puVar20[-0x16] = 0x80000000;
        puVar20 = puVar20 + -0xe;
      } while (puVar1 != puVar25);
    }
  }
  pcVar33 = (char *)0x0;
  uVar38 = 0;
  local_68 = (char *)0x0;
  iVar39 = 0;
  uStack_60._0_4_ = 0;
  uVar15 = (uint)uStack_60;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0x80000000;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar18 = 0;
    do {
      lVar37 = *(longlong *)(param_1 + 0x90);
      if ((*(char *)(lVar37 + 0xf8 + lVar18) != '\0') &&
         (iVar22 = 0, uVar31 = uVar38, uVar15 = uStack_60._4_4_,
         0 < *(int *)(lVar37 + 0xf0 + lVar18))) {
        do {
          uVar14 = (uint)uVar31;
          uVar24 = uVar14 + 1;
          lVar26 = *(longlong *)(lVar37 + 0xe8 + lVar18);
          _local_88 = CONCAT44(iStack_84,iVar39);
          uVar29 = uVar14;
          if ((int)(uVar15 & 0x7fffffff) < (int)uVar24) {
            FUN_144fb6840(&local_68,&PTR_vftable_14c6e47a0,(longlong)(int)uVar24);
            pcVar33 = local_68;
            uVar15 = uStack_60._4_4_;
            uVar29 = (uint)uStack_60;
          }
          piVar34 = (int *)(pcVar33 + (longlong)(int)uVar29 * 0x10);
          if (piVar34 != (int *)0x0) {
            *piVar34 = iVar39;
            piVar34[1] = iStack_84;
            *(longlong *)(piVar34 + 2) = (longlong)iVar22 * 0x40 + lVar26;
          }
          uVar38 = (ulonglong)uVar24;
          while (uVar14 = (int)(uVar14 - 1) >> 1, -1 < (int)uVar14) {
            uVar21 = (ulonglong)uVar14;
            lVar26 = (longlong)(int)uVar31;
            if (**(float **)(pcVar33 + (uVar21 * 2 + 1) * 8) <=
                **(float **)(pcVar33 + (lVar26 * 2 + 1) * 8) &&
                **(float **)(pcVar33 + (lVar26 * 2 + 1) * 8) !=
                **(float **)(pcVar33 + (uVar21 * 2 + 1) * 8)) break;
            pcVar2 = pcVar33 + uVar21 * 0x10;
            uVar9 = *(undefined4 *)(pcVar2 + 4);
            uVar10 = *(undefined4 *)(pcVar2 + 8);
            uVar11 = *(undefined4 *)(pcVar2 + 0xc);
            uVar12 = *(undefined8 *)(pcVar33 + lVar26 * 0x10);
            uVar13 = *(undefined8 *)(pcVar33 + lVar26 * 0x10 + 8);
            pcVar3 = pcVar33 + lVar26 * 0x10;
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
            *(undefined4 *)(pcVar3 + 4) = uVar9;
            *(undefined4 *)(pcVar3 + 8) = uVar10;
            *(undefined4 *)(pcVar3 + 0xc) = uVar11;
            *(undefined8 *)(pcVar33 + uVar21 * 0x10) = uVar12;
            *(undefined8 *)(pcVar33 + uVar21 * 0x10 + 8) = uVar13;
            uVar31 = uVar21;
          }
          iVar22 = iVar22 + 1;
          uVar31 = uVar38;
          uStack_60._0_4_ = uVar24;
        } while (iVar22 < *(int *)(lVar37 + 0xf0 + lVar18));
      }
      iVar39 = iVar39 + 1;
      lVar18 = lVar18 + 0x100;
      uVar15 = (uint)uStack_60;
    } while (iVar39 < *(int *)(param_1 + 0x98));
  }
  uStack_60._0_4_ = uVar15;
  iVar39 = *(int *)(param_1 + 0x150);
  if (0 < iVar39) {
    while ((int)uVar38 != 0) {
      uVar12 = *(undefined8 *)pcVar33;
      lVar18 = *(longlong *)(pcVar33 + 8);
      FUN_144fb3dc0(&local_68,0);
      iVar22 = 0;
      piVar34 = (int *)((longlong)(int)uVar12 * 0x100 + *(longlong *)(param_1 + 0x90));
      lVar37 = (longlong)*piVar34 * 0x38 + *param_2;
      if (0 < *(int *)(lVar18 + 0x38)) {
        lVar26 = 0;
        do {
          iVar17 = *(int *)(lVar26 + *(longlong *)(lVar18 + 0x30));
          if (*(int *)((longlong)iVar17 * 0x10 + *(longlong *)(piVar34 + 0x36) + 8) == 0) {
            iVar23 = *(int *)(lVar37 + 0x20) + 1;
            if ((int)(*(uint *)(lVar37 + 0x24) & 0x7fffffff) < iVar23) {
              FUN_144c584b0(lVar37 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar23);
            }
            piVar4 = (int *)(*(longlong *)(lVar37 + 0x18) + (longlong)*(int *)(lVar37 + 0x20) * 4);
            if (piVar4 != (int *)0x0) {
              *piVar4 = iVar17;
            }
            *(int *)(lVar37 + 0x20) = iVar23;
          }
          else {
            iVar23 = *(int *)(lVar37 + 0x10) + 1;
            if ((int)(*(uint *)(lVar37 + 0x14) & 0x7fffffff) < iVar23) {
              FUN_144c584b0(lVar37 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar23);
            }
            piVar4 = (int *)(*(longlong *)(lVar37 + 8) + (longlong)*(int *)(lVar37 + 0x10) * 4);
            if (piVar4 != (int *)0x0) {
              *piVar4 = iVar17;
            }
            *(int *)(lVar37 + 0x10) = iVar23;
          }
          iVar22 = iVar22 + 1;
          lVar26 = lVar26 + 4;
        } while (iVar22 < *(int *)(lVar18 + 0x38));
      }
      iVar22 = *(int *)(lVar37 + 0x30) + 1;
      if ((int)(*(uint *)(lVar37 + 0x34) & 0x7fffffff) < iVar22) {
        FUN_144c36720(lVar37 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar22);
      }
      puVar20 = (undefined4 *)
                ((longlong)*(int *)(lVar37 + 0x30) * 0x20 + *(longlong *)(lVar37 + 0x28));
      if (puVar20 != (undefined4 *)0x0) {
        uVar9 = *(undefined4 *)(lVar18 + 0x14);
        uVar10 = *(undefined4 *)(lVar18 + 0x18);
        uVar11 = *(undefined4 *)(lVar18 + 0x1c);
        *puVar20 = *(undefined4 *)(lVar18 + 0x10);
        puVar20[1] = uVar9;
        puVar20[2] = uVar10;
        puVar20[3] = uVar11;
        uVar12 = *(undefined8 *)(lVar18 + 0x28);
        *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(lVar18 + 0x20);
        *(undefined8 *)(puVar20 + 6) = uVar12;
      }
      *(int *)(lVar37 + 0x30) = iVar22;
      iVar39 = iVar39 - *(int *)(lVar18 + 0x38);
      *(undefined4 *)(lVar18 + 0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar18 + 0x3c)) && (*(longlong *)(lVar18 + 0x30) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar18 + 0x30),
                   (ulonglong)(*(uint *)(lVar18 + 0x3c) & 0x7fffffff) << 2);
      }
      *(undefined8 *)(lVar18 + 0x30) = 0;
      *(undefined4 *)(lVar18 + 0x3c) = 0x80000000;
      pcVar33 = local_68;
      if (iVar39 < 1) break;
      uVar38 = (ulonglong)(uint)uStack_60;
    }
  }
  iVar39 = 0;
  if (0 < (int)param_2[1]) {
    lVar18 = 0;
    do {
      *(int *)(lVar18 + *param_2) = iVar39;
      FUN_144fb3b50(*param_2 + 8 + (longlong)iVar39 * 0x38);
      FUN_144fb3b50(*param_2 + 0x18 + (longlong)iVar39 * 0x38);
      iVar39 = iVar39 + 1;
      lVar18 = lVar18 + 0x38;
    } while (iVar39 < (int)param_2[1]);
  }
  plVar7 = *(longlong **)(param_1 + 0x90);
  iVar39 = *(int *)(param_1 + 0x98);
  if (plVar7 != plVar7 + (longlong)iVar39 * 0x20) {
    plVar35 = plVar7 + 0x1d;
    do {
      if (((char)plVar35[2] != '\0') && (iVar22 = (int)plVar35[1] + -1, -1 < iVar22)) {
        lVar18 = (longlong)iVar22 << 6;
        local_res18 = lVar18;
        do {
          lVar37 = *plVar35;
          lVar19 = (longlong)(int)plVar35[-0x1d] * 0x38 + *param_2;
          iVar23 = *(int *)(lVar18 + 0x38 + lVar37) + -1;
          lVar32 = (longlong)iVar23;
          iVar17 = *(int *)(lVar19 + 0x20);
          lVar26 = *(longlong *)(lVar19 + 0x18);
          lVar8 = *(longlong *)(lVar19 + 8);
          if (-1 < iVar23) {
            uVar38 = (longlong)*(int *)(lVar19 + 0x10) * 4 >> 2;
            do {
              lVar19 = *(longlong *)(lVar18 + 0x30 + lVar37);
              iVar36 = (int)uVar38;
              uVar31 = uVar38 & 0xffffffff;
              if (iVar36 < 1) {
LAB_144fb18db:
                iVar36 = 0;
                uVar31 = (longlong)iVar17 * 4 >> 2;
                iVar16 = (int)uVar31;
                uVar31 = uVar31 & 0xffffffff;
                if (0 < iVar16) {
                  iVar30 = *(int *)(lVar19 + lVar32 * 4);
                  do {
                    uVar15 = ((int)uVar31 + iVar36) / 2;
                    if (iVar30 <= *(int *)(lVar26 + (longlong)(int)uVar15 * 4)) {
                      uVar31 = (ulonglong)uVar15;
                    }
                    iVar28 = uVar15 + 1;
                    if (iVar30 <= *(int *)(lVar26 + (longlong)(int)uVar15 * 4)) {
                      iVar28 = iVar36;
                    }
                    iVar36 = iVar28;
                    iVar28 = (int)uVar31;
                  } while (iVar36 < iVar28);
                  if (((iVar28 < iVar16) && (*(int *)(lVar26 + (longlong)iVar28 * 4) <= iVar30)) &&
                     (iVar28 != -1)) goto LAB_144fb1938;
                }
              }
              else {
                iVar16 = *(int *)(lVar19 + lVar32 * 4);
                iVar30 = 0;
                do {
                  uVar15 = ((int)uVar31 + iVar30) / 2;
                  if (iVar16 <= *(int *)(lVar8 + (longlong)(int)uVar15 * 4)) {
                    uVar31 = (ulonglong)uVar15;
                  }
                  iVar28 = uVar15 + 1;
                  if (iVar16 <= *(int *)(lVar8 + (longlong)(int)uVar15 * 4)) {
                    iVar28 = iVar30;
                  }
                  iVar27 = (int)uVar31;
                  iVar30 = iVar28;
                } while (iVar28 < iVar27);
                if (((iVar36 <= iVar27) || (iVar16 < *(int *)(lVar8 + (longlong)iVar27 * 4))) ||
                   (iVar27 == -1)) goto LAB_144fb18db;
LAB_144fb1938:
                iVar36 = *(int *)(lVar18 + 0x38 + lVar37);
                iVar16 = iVar36 + -1;
                *(int *)(lVar18 + 0x38 + lVar37) = iVar16;
                if (iVar16 != iVar23) {
                  lVar19 = *(longlong *)(lVar18 + 0x30 + lVar37);
                  puVar20 = (undefined4 *)(lVar19 + ((longlong)iVar36 + -1) * 4);
                  puVar25 = (undefined4 *)(lVar19 + lVar32 * 4);
                  if (puVar25 != puVar20) {
                    *puVar25 = *puVar20;
                  }
                }
              }
              iVar23 = iVar23 + -1;
              lVar32 = lVar32 + -1;
            } while (-1 < lVar32);
          }
          lVar37 = *plVar35;
          if (*(int *)(lVar18 + 0x38 + lVar37) == 0) {
            uVar15 = *(uint *)(lVar18 + 0x3c + lVar37);
            *(undefined4 *)(lVar18 + 0x38 + lVar37) = 0;
            if ((-1 < (int)uVar15) && (lVar26 = *(longlong *)(lVar18 + 0x30 + lVar37), lVar26 != 0))
            {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,lVar26,(ulonglong)(uVar15 & 0x7fffffff) << 2);
            }
            *(undefined8 *)(lVar18 + 0x30 + lVar37) = 0;
            *(undefined4 *)(lVar18 + 0x3c + lVar37) = 0x80000000;
            lVar37 = plVar35[1];
            iVar17 = (int)lVar37 + -1;
            *(int *)(plVar35 + 1) = iVar17;
            if (iVar17 != iVar22) {
              lVar26 = *plVar35 + local_res18;
              lVar37 = *plVar35 + -0x40 + (longlong)(int)lVar37 * 0x40;
              if (lVar26 != lVar37) {
                if (lVar26 != 0) {
                  FUN_144fb0630(lVar26,lVar37);
                }
                *(undefined4 *)(lVar37 + 0x38) = 0;
                if ((-1 < (int)*(uint *)(lVar37 + 0x3c)) && (*(longlong *)(lVar37 + 0x30) != 0)) {
                  (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                            (&PTR_vftable_14c6e47a0,*(longlong *)(lVar37 + 0x30),
                             (ulonglong)(*(uint *)(lVar37 + 0x3c) & 0x7fffffff) << 2);
                }
                *(undefined8 *)(lVar37 + 0x30) = 0;
                *(undefined4 *)(lVar37 + 0x3c) = 0x80000000;
              }
            }
          }
          local_res18 = local_res18 + -0x40;
          iVar22 = iVar22 + -1;
          lVar18 = lVar18 + -0x40;
        } while (-1 < iVar22);
      }
      plVar5 = plVar35 + 3;
      pcVar33 = local_68;
      plVar35 = plVar35 + 0x20;
    } while (plVar5 != plVar7 + (longlong)iVar39 * 0x20);
  }
  if ((-1 < (int)uStack_60._4_4_) && (pcVar33 != (char *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,pcVar33,(ulonglong)(uStack_60._4_4_ & 0x7fffffff) << 4);
  }
  if (lVar6 != 0) {
    local_68 = "Et";
    uStack_60 = &DAT_149981766;
    FUN_144b3f260(lVar6,&local_68);
  }
  return;
}



// FUNCTION 144fb1b60 FUN_144fb1b60 body=703 status=ok
// SIG undefined FUN_144fb1b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fb1b60(longlong param_1,char param_2)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined4 uVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar27 = *(longlong *)(lVar6 + 0xf0);
  if (lVar27 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar27;
  }
  lVar6 = *(longlong *)(lVar27 + 0x3e0);
  if (lVar6 != 0) {
    local_78 = "TtupdateGenerators";
    uStack_70 = "";
    FUN_144b3f370(lVar6,&local_78);
  }
  if (param_2 == '\0') {
    local_78._0_4_ = *(float *)(param_1 + 0x14c);
    local_78._4_4_ = (float)local_78;
    uStack_70._0_4_ = (float)local_78;
    uStack_70._4_4_ = (float)local_78;
  }
  else {
    local_78._0_4_ = 0.0 - _DAT_14c6daca0;
    local_78._4_4_ = 0.0 - fRam000000014c6daca4;
    uStack_70._0_4_ = 0.0 - fRam000000014c6daca8;
    uStack_70._4_4_ = 0.0 - fRam000000014c6dacac;
  }
  fVar24 = uStack_70._4_4_;
  fVar23 = (float)uStack_70;
  fVar22 = local_78._4_4_;
  fVar21 = (float)local_78;
  iVar28 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar27 = 0;
    lVar29 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0xa0);
      if (param_2 != '\0') {
        *(undefined1 *)(lVar27 + 0x52 + lVar7) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      uVar25 = (**(code **)(**(longlong **)(lVar27 + lVar7) + 0x58))();
      if ((char)uVar25 != '\0') {
        *(undefined1 *)(lVar27 + 0x50 + lVar7) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      plVar8 = *(longlong **)(lVar27 + lVar7);
      pfVar2 = (float *)(lVar27 + 0x30 + lVar7);
      pfVar3 = (float *)(lVar27 + 0x40 + lVar7);
      auVar9._4_4_ = -(uint)(ABS(*(float *)((longlong)plVar8 + 0x34) - pfVar2[1]) <= fVar22);
      auVar9._0_4_ = -(uint)(ABS(*(float *)(plVar8 + 6) - *pfVar2) <= fVar21);
      auVar9._8_4_ = -(uint)(ABS(*(float *)(plVar8 + 7) - pfVar2[2]) <= fVar23);
      auVar9._12_4_ = -(uint)(ABS(*(float *)((longlong)plVar8 + 0x3c) - pfVar2[3]) <= fVar24);
      iVar26 = movmskps(uVar25,auVar9);
      auVar10._4_4_ = -(uint)(ABS(*(float *)((longlong)plVar8 + 0x44) - pfVar3[1]) <= fVar22);
      auVar10._0_4_ = -(uint)(ABS(*(float *)(plVar8 + 8) - *pfVar3) <= fVar21);
      auVar10._8_4_ = -(uint)(ABS(*(float *)(plVar8 + 9) - pfVar3[2]) <= fVar23);
      auVar10._12_4_ = -(uint)(ABS(*(float *)((longlong)plVar8 + 0x4c) - pfVar3[3]) <= fVar24);
      uVar25 = movmskps(iVar26,auVar10);
      if (((byte)uVar25 & 7) == 7) {
        if ((iVar26 != 0xf) || (*(char *)(lVar27 + 0x50 + lVar7) != '\0')) {
LAB_144fb1d02:
          lVar1 = lVar27 + lVar7;
          local_68 = 0;
          uStack_60 = 0;
          local_78._0_4_ = *(float *)(plVar8 + 6);
          local_78._4_4_ = *(float *)((longlong)plVar8 + 0x34);
          uStack_70._0_4_ = *(float *)(plVar8 + 7);
          uStack_70._4_4_ = *(float *)((longlong)plVar8 + 0x3c);
          (**(code **)(*plVar8 + 0x48))
                    (plVar8,&local_78,*(undefined4 *)(param_1 + 0x148),lVar1 + 0x10);
          fVar5 = *(float *)(param_1 + 0x148);
          *(float *)(lVar1 + 0x10) = *(float *)(lVar1 + 0x10) - fVar5;
          *(float *)(lVar1 + 0x14) = *(float *)(lVar1 + 0x14) - fVar5;
          *(float *)(lVar1 + 0x18) = *(float *)(lVar1 + 0x18) - fVar5;
          *(float *)(lVar1 + 0x1c) = *(float *)(lVar1 + 0x1c) - fVar5;
          *(float *)(lVar1 + 0x20) = fVar5 + *(float *)(lVar1 + 0x20);
          *(float *)(lVar1 + 0x24) = fVar5 + *(float *)(lVar1 + 0x24);
          *(float *)(lVar1 + 0x28) = fVar5 + *(float *)(lVar1 + 0x28);
          *(float *)(lVar1 + 0x2c) = fVar5 + *(float *)(lVar1 + 0x2c);
          goto LAB_144fb1d50;
        }
      }
      else {
        if ((iVar26 != 0xf) || (*(char *)(lVar27 + 0x50 + lVar7) != '\0')) goto LAB_144fb1d02;
LAB_144fb1d50:
        lVar1 = plVar8[7];
        plVar4 = (longlong *)(lVar27 + 0x30 + lVar7);
        *plVar4 = plVar8[6];
        plVar4[1] = lVar1;
        fVar5 = *(float *)(plVar8 + 8);
        fVar11 = *(float *)((longlong)plVar8 + 0x44);
        fVar12 = *(float *)(plVar8 + 9);
        fVar13 = *(float *)((longlong)plVar8 + 0x4c);
        pfVar2 = (float *)(lVar27 + 0x40 + lVar7);
        *pfVar2 = fVar5;
        pfVar2[1] = fVar11;
        pfVar2[2] = fVar12;
        pfVar2[3] = fVar13;
        pfVar2 = (float *)(lVar27 + 0x10 + lVar7);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar3 = (float *)(lVar27 + 0x20 + lVar7);
        fVar17 = *pfVar3;
        fVar18 = pfVar3[1];
        fVar19 = pfVar3[2];
        fVar20 = pfVar3[3];
        lVar1 = *(longlong *)(param_1 + 0x20);
        pfVar3 = (float *)(lVar29 + 0x20 + lVar1);
        *pfVar3 = fVar5 + *pfVar2;
        pfVar3[1] = fVar11 + fVar14;
        pfVar3[2] = fVar12 + fVar15;
        pfVar3[3] = fVar13 + fVar16;
        pfVar2 = (float *)(lVar29 + 0x30 + lVar1);
        *pfVar2 = fVar5 + fVar17;
        pfVar2[1] = fVar11 + fVar18;
        pfVar2[2] = fVar12 + fVar19;
        pfVar2[3] = fVar13 + fVar20;
        *(undefined1 *)(lVar29 + 0x40 + lVar1) = 1;
        *(undefined1 *)(lVar27 + 0x51 + lVar7) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      iVar28 = iVar28 + 1;
      lVar27 = lVar27 + 0x60;
      lVar29 = lVar29 + 0x50;
    } while (iVar28 < *(int *)(param_1 + 0xa8));
  }
  if (lVar6 != 0) {
    local_78 = &DAT_149981764;
    uStack_70 = &DAT_149981766;
    FUN_144b3f260(lVar6,&local_78);
  }
  return;
}



// FUNCTION 144fb1e20 FUN_144fb1e20 body=856 status=ok
// SIG undefined FUN_144fb1e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fb1e20(longlong param_1,char param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar4 + 0xf0);
  if (lVar17 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar17;
  }
  lVar4 = *(longlong *)(lVar17 + 0x3e0);
  if (lVar4 != 0) {
    local_e8 = "TtupdateSections";
    uStack_e0 = "";
    FUN_144b3f370(lVar4,&local_e8);
  }
  if (param_2 == '\0') {
    local_e8._0_4_ = *(float *)(param_1 + 0x14c);
    local_e8._4_4_ = (float)local_e8;
    uStack_e0._0_4_ = (float)local_e8;
    uStack_e0._4_4_ = (float)local_e8;
  }
  else {
    local_e8._0_4_ = 0.0 - _DAT_14c6daca0;
    local_e8._4_4_ = 0.0 - fRam000000014c6daca4;
    uStack_e0._0_4_ = 0.0 - fRam000000014c6daca8;
    uStack_e0._4_4_ = 0.0 - fRam000000014c6dacac;
  }
  fVar13 = uStack_e0._4_4_;
  fVar12 = (float)uStack_e0;
  fVar11 = local_e8._4_4_;
  fVar10 = (float)local_e8;
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar17 = 0;
    lVar21 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x90);
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      puVar20 = (undefined8 *)((longlong)*(int *)(lVar17 + lVar5) * 0x60 + *param_3);
      uVar14 = FUN_144b43240(&local_c8,puVar20);
      local_b8 = puVar20[6];
      uStack_b0 = puVar20[7];
      pfVar3 = (float *)(lVar17 + 0xc0 + lVar5);
      pfVar18 = (float *)(lVar5 + 0xb0 + lVar17);
      auVar7._4_4_ = -(uint)(ABS(*(float *)((longlong)puVar20 + 0x34) - pfVar3[1]) <= fVar11);
      auVar7._0_4_ = -(uint)(ABS(*(float *)(puVar20 + 6) - *pfVar3) <= fVar10);
      auVar7._8_4_ = -(uint)(ABS(*(float *)(puVar20 + 7) - pfVar3[2]) <= fVar12);
      auVar7._12_4_ = -(uint)(ABS(*(float *)((longlong)puVar20 + 0x3c) - pfVar3[3]) <= fVar13);
      uVar15 = movmskps(uVar14,auVar7);
      if ((char)(uVar15 & 7) == '\a') {
        auVar8._4_4_ = -(uint)(ABS(local_c8._4_4_ - pfVar18[1]) <= fVar11);
        auVar8._0_4_ = -(uint)(ABS((float)local_c8 - *pfVar18) <= fVar10);
        auVar8._8_4_ = -(uint)(ABS((float)uStack_c0 - pfVar18[2]) <= fVar12);
        auVar8._12_4_ = -(uint)(ABS(uStack_c0._4_4_ - pfVar18[3]) <= fVar13);
        iVar16 = movmskps(uVar15 & 7,auVar8);
        if (iVar16 != 0xf) goto LAB_144fb1fcf;
      }
      else {
LAB_144fb1fcf:
        uVar9 = puVar20[1];
        puVar1 = (undefined8 *)(lVar17 + 0x50 + lVar5);
        *puVar1 = *puVar20;
        puVar1[1] = uVar9;
        uVar9 = puVar20[3];
        puVar1 = (undefined8 *)(lVar17 + 0x60 + lVar5);
        *puVar1 = puVar20[2];
        puVar1[1] = uVar9;
        uVar9 = puVar20[5];
        puVar1 = (undefined8 *)(lVar17 + 0x70 + lVar5);
        *puVar1 = puVar20[4];
        puVar1[1] = uVar9;
        uVar9 = puVar20[7];
        puVar1 = (undefined8 *)(lVar17 + 0x80 + lVar5);
        *puVar1 = puVar20[6];
        puVar1[1] = uVar9;
        uVar9 = puVar20[9];
        puVar1 = (undefined8 *)(lVar17 + 0x90 + lVar5);
        *puVar1 = puVar20[8];
        puVar1[1] = uVar9;
        uVar9 = puVar20[0xb];
        puVar1 = (undefined8 *)(lVar17 + 0xa0 + lVar5);
        *puVar1 = puVar20[10];
        puVar1[1] = uVar9;
        *(undefined8 *)pfVar18 = local_c8;
        *(undefined8 *)(pfVar18 + 2) = uStack_c0;
        *(undefined8 *)(pfVar18 + 4) = local_b8;
        *(undefined8 *)(pfVar18 + 6) = uStack_b0;
        lVar6 = *(longlong *)(lVar17 + 8 + lVar5);
        local_88 = *(undefined4 *)(lVar6 + 0x90);
        uStack_84 = *(undefined4 *)(lVar6 + 0x94);
        uStack_80 = *(undefined4 *)(lVar6 + 0x98);
        uStack_7c = *(undefined4 *)(lVar6 + 0x9c);
        local_78 = *(undefined4 *)(lVar6 + 0xa0);
        uStack_74 = *(undefined4 *)(lVar6 + 0xa4);
        uStack_70 = *(undefined4 *)(lVar6 + 0xa8);
        uStack_6c = *(undefined4 *)(lVar6 + 0xac);
        FUN_144be9500(pfVar18,&local_88,&local_a8);
        local_e8._0_4_ = *(float *)(*(longlong *)(lVar17 + 8 + lVar5) + 0xb0);
        uStack_d4 = *(uint *)(param_1 + 200 + (longlong)*(int *)(lVar17 + 0xd0 + lVar5) * 4);
        uStack_d0 = uStack_d4 ^ 0x80000000;
        local_d8 = uStack_d4 ^ 0x80000000;
        uStack_d4 = uStack_d4 ^ 0x80000000;
        uStack_cc = uStack_d0;
        uStack_e0._0_4_ = (float)local_e8;
        local_e8._4_4_ = (float)local_e8;
        uStack_e0._4_4_ = (float)uStack_e0;
        FUN_144ca9e80(&local_a8,lVar5 + 0x20 + lVar17,&local_d8,&local_e8,3);
        lVar6 = *(longlong *)(param_1 + 0x30);
        puVar2 = (undefined4 *)(lVar21 + 0x20 + lVar6);
        *puVar2 = local_a8;
        puVar2[1] = uStack_a4;
        puVar2[2] = uStack_a0;
        puVar2[3] = uStack_9c;
        puVar20 = (undefined8 *)(lVar21 + 0x30 + lVar6);
        *puVar20 = local_98;
        puVar20[1] = uStack_90;
        *(undefined1 *)(lVar21 + 0x40 + lVar6) = 1;
        *(undefined1 *)(lVar17 + 0xf9 + lVar5) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      iVar19 = iVar19 + 1;
      lVar17 = lVar17 + 0x100;
      lVar21 = lVar21 + 0x50;
    } while (iVar19 < *(int *)(param_1 + 0x98));
  }
  if (lVar4 != 0) {
    local_e8 = &DAT_149981764;
    uStack_e0 = &DAT_149981766;
    FUN_144b3f260(lVar4,&local_e8);
  }
  return;
}



// FUNCTION 144fb2180 FUN_144fb2180 body=1118 status=ok
// SIG undefined FUN_144fb2180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fb2180(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  char *local_198;
  char *pcStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined **local_128;
  undefined1 local_120;
  char local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  int local_f8;
  int iStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined4 *local_d0;
  undefined **local_c8 [2];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar2 = param_4[1];
  piVar12 = (int *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xb0));
  lVar11 = (longlong)piVar12[1] * 0x100 + *(longlong *)(param_1 + 0x90);
  puVar6 = (undefined8 *)((longlong)*piVar12 * 0x60 + *(longlong *)(param_1 + 0xa0));
  *(undefined8 *)(piVar12 + 0xc) = *param_4;
  *(undefined8 *)(piVar12 + 0xe) = uVar2;
  uVar2 = param_4[3];
  *(undefined8 *)(piVar12 + 0x10) = param_4[2];
  *(undefined8 *)(piVar12 + 0x12) = uVar2;
  if ((char)piVar12[2] == '\0') {
    local_188._4_4_ = iRam000000014c6dae84;
    local_188._0_4_ = _DAT_14c6dae80;
    local_188._8_4_ = uRam000000014c6dae88;
    local_188._12_4_ = uRam000000014c6dae8c;
    local_178._0_8_ = CONCAT44(iRam000000014c6dae84,_DAT_14c6dae80) ^ 0x8000000080000000;
    local_178._8_4_ = uRam000000014c6dae88 ^ 0x80000000;
    local_178._12_4_ = uRam000000014c6dae8c ^ 0x80000000;
  }
  else {
    local_188 = *(undefined1 (*) [16])(piVar12 + 4);
    local_178 = *(undefined1 (*) [16])(piVar12 + 8);
  }
  auVar18._0_8_ = CONCAT44(iRam000000014c6dae84,_DAT_14c6dae80) ^ 0x8000000080000000;
  auVar18._8_4_ = uRam000000014c6dae88 ^ 0x80000000;
  auVar18._12_4_ = uRam000000014c6dae8c ^ 0x80000000;
  iVar14 = _DAT_14c6dae80;
  iVar15 = iRam000000014c6dae84;
  uVar16 = uRam000000014c6dae88;
  uVar17 = uRam000000014c6dae8c;
  if (param_3 != '\0') {
    lVar7 = (longlong)piVar12[1] * 0x100 + *(longlong *)(param_1 + 0x90);
    plVar10 = *(longlong **)((longlong)*piVar12 * 0x60 + *(longlong *)(param_1 + 0xa0));
    (**(code **)(*plVar10 + 0x40))
              (plVar10,param_4,*(undefined4 *)(*(longlong *)(lVar7 + 8) + 0xb0),lVar7 + 0x20,
               local_148);
    local_198 = (char *)0x0;
    pcStack_190 = (char *)0x0;
    uVar13 = *(undefined4 *)(param_1 + 200 + (longlong)*(int *)(lVar7 + 0xd0) * 4);
    local_168 = (undefined **)CONCAT44(uVar13,uVar13);
    uStack_160 = CONCAT44(uVar13,uVar13);
    FUN_144ca9e80(local_148,lVar7 + 0x20,&local_168,&local_198,1);
    iVar14 = local_148._0_4_;
    iVar15 = local_148._4_4_;
    uVar16 = local_148._8_4_;
    uVar17 = local_148._12_4_;
    local_188 = minps(local_188,local_148);
    local_178 = maxps(local_178,local_138);
    auVar18 = local_138;
  }
  if (*(int *)(param_1 + 0x150) < 1) {
    uVar13 = 0x3f800000;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x158);
    uStack_160 = 0xffffffff;
    local_168 = hkaiDefaultSilhouettePriorityController::vftable;
    local_158 = 1;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = &local_168;
      FUN_144b3d910(plVar10);
      FUN_144b3f230(&local_168);
    }
    else {
      FUN_144b3d910(plVar10);
      FUN_144b3f230(plVar10);
    }
    lVar7 = *plVar10;
    uVar2 = *puVar6;
    if ((char)piVar12[2] == '\0') {
      uVar13 = (**(code **)(lVar7 + 0x18))(plVar10,uVar2,local_188,lVar11 + 0x20);
    }
    else if (param_3 == '\0') {
      uVar13 = (**(code **)(lVar7 + 0x20))();
    }
    else {
      uVar13 = (**(code **)(lVar7 + 0x28))
                         (plVar10,uVar2,local_188,lVar11 + 0x20,piVar12 + 0xc,param_4);
    }
  }
  local_b8 = 0xffffffff;
  local_c8[0] = &PTR_LAB_14aba2e30;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = *puVar6;
  local_98 = local_188._0_8_;
  uStack_90 = local_188._8_8_;
  local_88 = local_178._0_8_;
  uStack_80 = local_178._8_8_;
  iVar9 = *(int *)(lVar11 + 0xf0) + 1;
  if ((int)(*(uint *)(lVar11 + 0xf4) & 0x7fffffff) < iVar9) {
    FUN_144fb5940((longlong *)(lVar11 + 0xe8),&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar1 = *(int *)(lVar11 + 0xf0);
  *(int *)(lVar11 + 0xf0) = iVar9;
  puVar8 = (undefined4 *)((longlong)iVar1 * 0x40 + *(longlong *)(lVar11 + 0xe8));
  if (puVar8 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar8 + 0xc) = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0x80000000;
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  *puVar8 = uVar13;
  *(undefined8 *)(puVar8 + 4) = local_188._0_8_;
  *(undefined8 *)(puVar8 + 6) = local_188._8_8_;
  lVar7 = *(longlong *)((longlong)pvVar3 + uVar5 * 8);
  *(undefined8 *)(puVar8 + 8) = local_178._0_8_;
  *(undefined8 *)(puVar8 + 10) = local_178._8_8_;
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar7 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar4;
  }
  if (*(longlong *)(lVar4 + 0x3e0) != 0) {
    local_198 = "TtqueryAabb";
    pcStack_190 = "";
    FUN_144b3f370(*(longlong *)(lVar4 + 0x3e0),&local_198);
  }
  local_110 = *(longlong *)(param_1 + 0xb0);
  local_128 = QueryAndUpdateFacesForOverlapCollector::vftable;
  local_120 = 0;
  local_108 = (longlong)*(int *)(param_1 + 0xb8) * 0x60 + local_110;
  local_118 = param_3;
  local_100 = param_2;
  local_f8 = iVar14;
  iStack_f4 = iVar15;
  uStack_f0 = uVar16;
  uStack_ec = uVar17;
  local_e8 = auVar18;
  local_d8 = lVar11;
  local_d0 = puVar8;
  (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x40))
            (*(longlong **)(lVar11 + 0x10),local_c8,&local_128);
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar7 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar11;
  }
  if (*(longlong *)(lVar11 + 0x3e0) != 0) {
    local_198 = "Et";
    pcStack_190 = "";
    FUN_144b3f260(*(longlong *)(lVar11 + 0x3e0),&local_198);
  }
  *(char *)(piVar12 + 2) = param_3;
  piVar12[4] = iVar14;
  piVar12[5] = iVar15;
  piVar12[6] = uVar16;
  piVar12[7] = uVar17;
  *(undefined1 (*) [16])(piVar12 + 8) = auVar18;
  return;
}



// FUNCTION 144fb25e0 FUN_144fb25e0 body=273 status=ok
// SIG undefined FUN_144fb25e0(void)

void FUN_144fb25e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar4 = *(int *)(param_1 + 0xb8) + 1;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar4) {
    FUN_144fb6000((longlong *)(param_1 + 0xb0),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar4;
  piVar3 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0xb0));
  if (piVar3 != (int *)0x0) {
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0x10] = 0;
    piVar3[0x11] = 0;
    piVar3[0x12] = 0;
    piVar3[0x13] = 0;
    piVar3[0x14] = 0;
    piVar3[0x15] = 0;
  }
  *piVar3 = param_2;
  piVar3[1] = param_3;
  *(undefined1 *)(piVar3 + 2) = 0;
  plVar5 = (longlong *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xa0));
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144f72230(&local_38,*(longlong *)(param_1 + 0x90) + 0xb0 + (longlong)param_3 * 0x100,
                plVar5 + 6);
  if (*(longlong *)(piVar3 + 0x14) != *plVar5) {
    if (*plVar5 != 0) {
      FUN_144b3d910();
    }
    lVar2 = *(longlong *)(piVar3 + 0x14);
    *(longlong *)(piVar3 + 0x14) = *plVar5;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined8 *)(piVar3 + 0xc) = local_38;
  *(undefined8 *)(piVar3 + 0xe) = uStack_30;
  *(undefined8 *)(piVar3 + 0x10) = local_28;
  *(undefined8 *)(piVar3 + 0x12) = uStack_20;
  return;
}



// FUNCTION 144fb2700 FUN_144fb2700 body=520 status=ok
// SIG undefined FUN_144fb2700(void)

void FUN_144fb2700(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined1 local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined4 *local_90;
  undefined **local_88 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  pppuVar6 = *(undefined ****)(param_1 + 0x158);
  piVar5 = (int *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xb0));
  lVar4 = (longlong)piVar5[1] * 0x100 + *(longlong *)(param_1 + 0x90);
  local_d0 = 0xffffffff;
  puVar7 = (undefined8 *)((longlong)*piVar5 * 0x60 + *(longlong *)(param_1 + 0xa0));
  local_c8 = 1;
  local_d8 = hkaiDefaultSilhouettePriorityController::vftable;
  if (pppuVar6 == (undefined ***)0x0) {
    pppuVar6 = &local_d8;
    FUN_144b3d910(pppuVar6);
    FUN_144b3f230(&local_d8);
  }
  else {
    FUN_144b3d910(pppuVar6);
    FUN_144b3f230(pppuVar6);
  }
  if ((char)piVar5[2] != '\0') {
    local_88[0] = &PTR_LAB_14aba2e30;
    local_60 = *puVar7;
    local_78 = 0xffffffff;
    local_58 = *(undefined8 *)(piVar5 + 4);
    uStack_50 = *(undefined8 *)(piVar5 + 6);
    iVar8 = *(int *)(lVar4 + 0xf0) + 1;
    local_70 = 0;
    local_68 = 0;
    local_48 = piVar5[8];
    iStack_44 = piVar5[9];
    iStack_40 = piVar5[10];
    iStack_3c = piVar5[0xb];
    if ((int)(*(uint *)(lVar4 + 0xf4) & 0x7fffffff) < iVar8) {
      FUN_144fb5940((longlong *)(lVar4 + 0xe8),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar1 = *(int *)(lVar4 + 0xf0);
    *(int *)(lVar4 + 0xf0) = iVar8;
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x40 + *(longlong *)(lVar4 + 0xe8));
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[0xf] = 0x80000000;
      *(undefined8 *)(puVar3 + 0xc) = 0;
      puVar3[0xe] = 0;
    }
    if (*(int *)(param_1 + 0x150) < 1) {
      uVar9 = 0x3f800000;
    }
    else {
      uVar9 = (*(code *)(*pppuVar6)[4])(pppuVar6,*puVar7,piVar5 + 4,lVar4 + 0x20);
    }
    *puVar3 = uVar9;
    iVar8 = piVar5[5];
    iVar1 = piVar5[6];
    iVar2 = piVar5[7];
    puVar3[4] = piVar5[4];
    puVar3[5] = iVar8;
    puVar3[6] = iVar1;
    puVar3[7] = iVar2;
    iVar8 = piVar5[9];
    iVar1 = piVar5[10];
    iVar2 = piVar5[0xb];
    puVar3[8] = piVar5[8];
    puVar3[9] = iVar8;
    puVar3[10] = iVar1;
    puVar3[0xb] = iVar2;
    local_b0 = *(longlong *)(param_1 + 0xb0);
    local_c0 = RemoveOverlapFromSectionCollector::vftable;
    local_b8 = 0;
    local_a8 = (longlong)*(int *)(param_1 + 0xb8) * 0x60 + local_b0;
    local_a0 = param_2;
    local_98 = lVar4;
    local_90 = puVar3;
    (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x40))
              (*(longlong **)(lVar4 + 0x10),local_88,&local_c0);
  }
  return;
}



// FUNCTION 144fb2910 FUN_144fb2910 body=435 status=ok
// SIG undefined FUN_144fb2910(void)

void FUN_144fb2910(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined **local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined **local_58 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar10 = (longlong)param_2 * 0x60;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xb0) + lVar10);
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x50 + lVar10) != 0) {
    FUN_144b3f230();
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  iVar9 = iVar3 + -1;
  *(int *)(param_1 + 0xb8) = iVar9;
  if (iVar9 != param_2) {
    puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + -0x60 + (longlong)iVar3 * 0x60);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + lVar10);
    if (puVar1 != puVar11) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar11;
        puVar1[1] = puVar11[1];
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar11 + 2);
        uVar8 = *(undefined8 *)(puVar11 + 6);
        *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar11 + 4);
        *(undefined8 *)(puVar1 + 6) = uVar8;
        uVar8 = *(undefined8 *)(puVar11 + 10);
        *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar1 + 10) = uVar8;
        uVar5 = puVar11[0xd];
        uVar6 = puVar11[0xe];
        uVar7 = puVar11[0xf];
        puVar1[0xc] = puVar11[0xc];
        puVar1[0xd] = uVar5;
        puVar1[0xe] = uVar6;
        puVar1[0xf] = uVar7;
        uVar8 = *(undefined8 *)(puVar11 + 0x12);
        *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
        *(undefined8 *)(puVar1 + 0x12) = uVar8;
        *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
        *(undefined8 *)(puVar11 + 0x14) = 0;
      }
      if (*(longlong *)(puVar11 + 0x14) != 0) {
        FUN_144b3f230();
      }
    }
  }
  local_68 = *(int *)(param_1 + 0xb8);
  if ((param_2 < local_68) &&
     (lVar10 = *(longlong *)(param_1 + 0xb0) + lVar10, *(char *)(lVar10 + 8) != '\0')) {
    local_88 = *(undefined4 *)(lVar10 + 0x10);
    uStack_84 = *(undefined4 *)(lVar10 + 0x14);
    uStack_80 = *(undefined4 *)(lVar10 + 0x18);
    uStack_7c = *(undefined4 *)(lVar10 + 0x1c);
    local_78 = *(undefined4 *)(lVar10 + 0x20);
    uStack_74 = *(undefined4 *)(lVar10 + 0x24);
    uStack_70 = *(undefined4 *)(lVar10 + 0x28);
    uStack_6c = *(undefined4 *)(lVar10 + 0x2c);
    local_58[0] = &PTR_LAB_14aba2e30;
    local_30 = *(undefined8 *)((longlong)iVar2 * 0x60 + lVar4);
    local_60 = (longlong)*(int *)(lVar10 + 4) * 0x100 + *(longlong *)(param_1 + 0x90);
    local_98 = RemoveOverlapFromArrayCollector::vftable;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_38 = 0;
    local_90 = 0;
    local_64 = param_2;
    local_28 = local_88;
    uStack_24 = uStack_84;
    uStack_20 = uStack_80;
    uStack_1c = uStack_7c;
    local_18 = local_78;
    uStack_14 = uStack_74;
    uStack_10 = uStack_70;
    uStack_c = uStack_6c;
    (**(code **)(**(longlong **)(local_60 + 0x10) + 0x40))
              (*(longlong **)(local_60 + 0x10),local_58,&local_98);
  }
  return;
}



// FUNCTION 144fb2ad0 FUN_144fb2ad0 body=97 status=ok
// SIG undefined FUN_144fb2ad0(void)

void FUN_144fb2ad0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
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
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  
  iVar16 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar17 = 0;
    lVar18 = 0;
    do {
      iVar16 = iVar16 + 1;
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar15 = *(longlong *)(param_1 + 0xa0) + lVar18;
      lVar18 = lVar18 + 0x60;
      fVar3 = *(float *)(lVar15 + 0x40);
      fVar4 = *(float *)(lVar15 + 0x44);
      fVar5 = *(float *)(lVar15 + 0x48);
      fVar6 = *(float *)(lVar15 + 0x4c);
      fVar7 = *(float *)(lVar15 + 0x10);
      fVar8 = *(float *)(lVar15 + 0x14);
      fVar9 = *(float *)(lVar15 + 0x18);
      fVar10 = *(float *)(lVar15 + 0x1c);
      fVar11 = *(float *)(lVar15 + 0x20);
      fVar12 = *(float *)(lVar15 + 0x24);
      fVar13 = *(float *)(lVar15 + 0x28);
      fVar14 = *(float *)(lVar15 + 0x2c);
      *(undefined1 *)(lVar17 + 0x40 + lVar2) = 1;
      pfVar1 = (float *)(lVar17 + 0x20 + lVar2);
      *pfVar1 = fVar3 + fVar7;
      pfVar1[1] = fVar4 + fVar8;
      pfVar1[2] = fVar5 + fVar9;
      pfVar1[3] = fVar6 + fVar10;
      pfVar1 = (float *)(lVar17 + 0x30 + lVar2);
      *pfVar1 = fVar3 + fVar11;
      pfVar1[1] = fVar4 + fVar12;
      pfVar1[2] = fVar5 + fVar13;
      pfVar1[3] = fVar6 + fVar14;
      lVar17 = lVar17 + 0x50;
      *(undefined1 *)(lVar15 + 0x52) = 1;
    } while (iVar16 < *(int *)(param_1 + 0xa8));
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}



// FUNCTION 144fb2b40 FUN_144fb2b40 body=196 status=ok
// SIG undefined FUN_144fb2b40(void)

void FUN_144fb2b40(longlong param_1)

{
  longlong *plVar1;
  float *pfVar2;
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
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  
  fVar3 = *(float *)(param_1 + 0x148);
  uVar16 = 0;
  fVar20 = 0.0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  lVar14 = *(longlong *)(param_1 + 0x90);
  lVar15 = (longlong)*(int *)(param_1 + 0x98) * 0x100 + lVar14;
  while (lVar14 != lVar15) {
    plVar1 = (longlong *)(lVar14 + 8);
    lVar14 = lVar14 + 0x100;
    fVar4 = *(float *)(*plVar1 + 0xb0);
    if (fVar20 <= fVar4) {
      fVar20 = fVar4;
    }
    *(float *)(param_1 + 0x148) = fVar20;
  }
  if (fVar20 != fVar3) {
    uVar17 = uVar16;
    uVar19 = uVar16;
    if (0 < *(int *)(param_1 + 0xa8)) {
      do {
        lVar14 = *(longlong *)(param_1 + 0xa0);
        uVar18 = (int)uVar19 + 1;
        lVar15 = *(longlong *)(param_1 + 0x20);
        pfVar2 = (float *)(uVar16 + 0x40 + lVar14);
        fVar3 = *pfVar2;
        fVar20 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        pfVar2 = (float *)(uVar16 + 0x10 + lVar14);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar2 = (float *)(uVar16 + 0x20 + lVar14);
        fVar10 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        *(undefined1 *)(uVar17 + 0x40 + lVar15) = 1;
        pfVar2 = (float *)(uVar17 + 0x20 + lVar15);
        *pfVar2 = fVar3 + fVar6;
        pfVar2[1] = fVar20 + fVar7;
        pfVar2[2] = fVar4 + fVar8;
        pfVar2[3] = fVar5 + fVar9;
        pfVar2 = (float *)(uVar17 + 0x30 + lVar15);
        *pfVar2 = fVar3 + fVar10;
        pfVar2[1] = fVar20 + fVar11;
        pfVar2[2] = fVar4 + fVar12;
        pfVar2[3] = fVar5 + fVar13;
        *(undefined1 *)(uVar16 + 0x52 + lVar14) = 1;
        uVar16 = uVar16 + 0x60;
        uVar17 = uVar17 + 0x50;
        uVar19 = (ulonglong)uVar18;
      } while ((int)uVar18 < *(int *)(param_1 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}



// FUNCTION 144fb2c10 FUN_144fb2c10 body=470 status=ok
// SIG undefined FUN_144fb2c10(void)

void FUN_144fb2c10(longlong param_1,int param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  
  uVar13 = 0;
  lVar16 = (longlong)param_2;
  uVar11 = *(ulonglong *)(param_1 + 0x18);
  lVar15 = (longlong)*(int *)(param_1 + 0x28) * 0x60;
  if (*(char *)(lVar15 + 8 + uVar11) != '\0') {
    pfVar3 = (float *)(lVar15 + 0x10 + uVar11);
    pfVar4 = (float *)(lVar15 + 0x20 + uVar11);
    auVar5._4_4_ = -(uint)(param_3[1] <= pfVar4[1] && pfVar3[1] <= param_3[5]);
    auVar5._0_4_ = -(uint)(*param_3 <= *pfVar4 && *pfVar3 <= param_3[4]);
    auVar5._8_4_ = -(uint)(param_3[2] <= pfVar4[2] && pfVar3[2] <= param_3[6]);
    auVar5._12_4_ = -(uint)(param_3[3] <= pfVar4[3] && pfVar3[3] <= param_3[7]);
    uVar9 = movmskps((int)uVar11,auVar5);
    uVar9 = uVar9 & 7;
    uVar11 = (ulonglong)uVar9;
    bVar7 = true;
    if ((char)uVar9 == '\a') goto LAB_144fb2c78;
  }
  uVar9 = (uint)uVar11;
  bVar7 = false;
LAB_144fb2c78:
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     (auVar6._4_4_ = -(uint)(param_3[1] <= *(float *)(param_1 + 0x44) &&
                            *(float *)(param_1 + 0x34) <= param_3[5]),
     auVar6._0_4_ = -(uint)(*param_3 <= *(float *)(param_1 + 0x40) &&
                           *(float *)(param_1 + 0x30) <= param_3[4]),
     auVar6._8_4_ = -(uint)(param_3[2] <= *(float *)(param_1 + 0x48) &&
                           *(float *)(param_1 + 0x38) <= param_3[6]),
     auVar6._12_4_ =
          -(uint)(param_3[3] <= *(float *)(param_1 + 0x4c) &&
                 *(float *)(param_1 + 0x3c) <= param_3[7]), uVar10 = movmskps(uVar9,auVar6),
     bVar8 = true, ((byte)uVar10 & 7) != 7)) {
    bVar8 = false;
  }
  lVar15 = *(longlong *)(param_1 + 0x58);
  iVar19 = *(int *)(lVar15 + 0x38) + 1;
  if ((int)(*(uint *)(lVar15 + 0x3c) & 0x7fffffff) < iVar19) {
    FUN_144c584b0(lVar15 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar19);
  }
  piVar12 = (int *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 4);
  if (piVar12 != (int *)0x0) {
    *piVar12 = param_2;
  }
  *(int *)(lVar15 + 0x38) = iVar19;
  if (bVar7) {
    if (!bVar8) {
      puVar18 = (undefined8 *)(lVar16 * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd8));
      iVar19 = *(int *)(puVar18 + 1);
      if (0 < iVar19) {
        piVar12 = (int *)*puVar18;
        uVar11 = uVar13;
        do {
          iVar17 = (int)uVar11;
          if (*piVar12 == *(int *)(param_1 + 0x28)) goto LAB_144fb2d3a;
          uVar11 = (ulonglong)(iVar17 + 1);
          uVar13 = uVar13 + 1;
          piVar12 = piVar12 + 1;
        } while ((longlong)uVar13 < (longlong)iVar19);
      }
      iVar17 = -1;
LAB_144fb2d3a:
      plVar14 = (longlong *)(lVar16 * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd8));
      lVar15 = plVar14[1];
      iVar19 = (int)lVar15 + -1;
      *(int *)(plVar14 + 1) = iVar19;
      if (iVar19 != iVar17) {
        puVar1 = (undefined4 *)(*plVar14 + ((longlong)(int)lVar15 + -1) * 4);
        puVar2 = (undefined4 *)(*plVar14 + (longlong)iVar17 * 4);
        if (puVar2 != puVar1) {
          *puVar2 = *puVar1;
        }
      }
    }
  }
  else if (bVar8) {
    plVar14 = (longlong *)(lVar16 * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd8));
    iVar19 = (int)plVar14[1] + 1;
    if ((int)(*(uint *)((longlong)plVar14 + 0xc) & 0x7fffffff) < iVar19) {
      FUN_1401f86b2(plVar14,&PTR_vftable_14c6e47a0,(longlong)iVar19);
    }
    puVar1 = (undefined4 *)(*plVar14 + (longlong)(int)plVar14[1] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(param_1 + 0x28);
    }
    *(int *)(plVar14 + 1) = iVar19;
  }
  return;
}



// FUNCTION 144fb2df0 FUN_144fb2df0 body=507 status=ok
// SIG undefined FUN_144fb2df0(void)

void FUN_144fb2df0(longlong *param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int iVar16;
  int *piVar17;
  undefined1 local_res8 [8];
  int *local_248;
  int local_240;
  uint local_23c;
  int local_238 [128];
  
  iVar2 = (int)param_1[3];
  iVar3 = iVar2 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar3) {
    FUN_144fb65e0(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  lVar9 = param_1[3];
  *(int *)(param_1 + 3) = iVar3;
  uVar8 = *(undefined8 *)(param_2 + 2);
  puVar15 = (undefined8 *)((longlong)(int)lVar9 * 0x50 + param_1[2]);
  *puVar15 = *(undefined8 *)param_2;
  puVar15[1] = uVar8;
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  *(float *)(puVar15 + 2) = param_2[4];
  *(float *)((longlong)puVar15 + 0x14) = fVar5;
  *(float *)(puVar15 + 3) = fVar6;
  *(float *)((longlong)puVar15 + 0x1c) = fVar7;
  *(undefined1 *)(puVar15 + 8) = 0;
  uVar11 = FUN_144fcd550(param_1 + 8,param_2,iVar2);
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar11;
  local_248 = local_238;
  local_240 = 0;
  local_23c = 0x80000080;
  FUN_144fce550(param_1 + 4,local_res8,param_2,&local_248);
  uVar13 = (ulonglong)local_240;
  piVar1 = local_248 + uVar13;
  for (piVar17 = local_248; piVar17 != piVar1; piVar17 = piVar17 + 1) {
    iVar3 = *piVar17;
    pfVar14 = (float *)((longlong)iVar3 * 0x50 + *param_1);
    auVar4._4_4_ = -(uint)(param_2[1] <= pfVar14[5] && pfVar14[1] <= param_2[5]);
    auVar4._0_4_ = -(uint)(*param_2 <= pfVar14[4] && *pfVar14 <= param_2[4]);
    auVar4._8_4_ = -(uint)(param_2[2] <= pfVar14[6] && pfVar14[2] <= param_2[6]);
    auVar4._12_4_ = -(uint)(param_2[3] <= pfVar14[7] && pfVar14[3] <= param_2[7]);
    uVar12 = movmskps((int)uVar13,auVar4);
    uVar13 = (ulonglong)(uVar12 & 7);
    if ((char)(uVar12 & 7) == '\a') {
      iVar16 = (int)param_1[0xd] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar16) {
        FUN_144fb6730(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar16);
      }
      lVar10 = param_1[0xd];
      lVar9 = param_1[0xc];
      *(int *)(param_1 + 0xd) = iVar16;
      *(int *)(lVar9 + 4 + (longlong)(int)lVar10 * 8) = iVar2;
      *(int *)(lVar9 + (longlong)(int)lVar10 * 8) = iVar3;
      uVar13 = FUN_144fb25e0(*param_3,iVar3,iVar2);
    }
  }
  local_240 = 0;
  if ((-1 < (int)local_23c) && (local_248 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_248,(ulonglong)(local_23c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144fb2ff0 FUN_144fb2ff0 body=614 status=ok
// SIG undefined FUN_144fb2ff0(void)

void FUN_144fb2ff0(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 local_res10 [8];
  int *local_38;
  int local_30;
  uint local_2c;
  
  lVar9 = (longlong)param_2;
  local_2c = 0x80000000;
  uVar11 = 0;
  local_38 = (int *)0x0;
  local_30 = 0;
  lVar16 = lVar9 * 0x50 + *(longlong *)(param_1 + 0x10);
  FUN_144fce550(param_1 + 0x20,local_res10,lVar16,&local_38);
  piVar1 = local_38 + local_30;
  piVar17 = local_38;
  do {
    if (piVar17 == piVar1) {
      local_30 = 0;
      if ((-1 < (int)local_2c) && (local_38 != (int *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 2);
      }
      FUN_144fcded0(param_1 + 0x40,*(undefined4 *)(lVar16 + 0x44));
      iVar12 = *(int *)(param_1 + 0x18);
      iVar6 = iVar12 + -1;
      *(int *)(param_1 + 0x18) = iVar6;
      if (iVar6 != param_2) {
        puVar14 = (undefined8 *)(lVar9 * 0x50 + *(longlong *)(param_1 + 0x10));
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x50 + (longlong)iVar12 * 0x50);
        if ((puVar14 != puVar15) && (puVar14 != (undefined8 *)0x0)) {
          uVar5 = puVar15[1];
          *puVar14 = *puVar15;
          puVar14[1] = uVar5;
          uVar5 = puVar15[3];
          puVar14[2] = puVar15[2];
          puVar14[3] = uVar5;
          uVar2 = *(undefined4 *)((longlong)puVar15 + 0x24);
          uVar3 = *(undefined4 *)(puVar15 + 5);
          uVar4 = *(undefined4 *)((longlong)puVar15 + 0x2c);
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar15 + 4);
          *(undefined4 *)((longlong)puVar14 + 0x24) = uVar2;
          *(undefined4 *)(puVar14 + 5) = uVar3;
          *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
          uVar5 = puVar15[7];
          puVar14[6] = puVar15[6];
          puVar14[7] = uVar5;
          *(undefined1 *)(puVar14 + 8) = *(undefined1 *)(puVar15 + 8);
          *(undefined4 *)((longlong)puVar14 + 0x44) = *(undefined4 *)((longlong)puVar15 + 0x44);
        }
      }
      FUN_144be90e0(0x97044d1f);
      if ((param_2 != *(int *)(param_1 + 0x18)) &&
         (FUN_144fcd8f0(param_1 + 0x40,
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x44 + lVar9 * 0x50),param_2
                       ), uVar8 = uVar11, uVar13 = uVar11, 0 < *(int *)(param_1 + 0x68))) {
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x60) + 4 + uVar8) == *(int *)(param_1 + 0x18)) {
            *(int *)(*(longlong *)(param_1 + 0x60) + 4 + uVar8) = param_2;
            lVar9 = *param_3;
            uVar2 = *(undefined4 *)(uVar8 + 4 + *(longlong *)(param_1 + 0x60));
            *(undefined4 *)(uVar13 + *(longlong *)(lVar9 + 0xb0)) =
                 *(undefined4 *)(uVar8 + *(longlong *)(param_1 + 0x60));
            *(undefined4 *)(uVar13 + 4 + *(longlong *)(lVar9 + 0xb0)) = uVar2;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar8 = uVar8 + 8;
          uVar13 = uVar13 + 0x60;
        } while ((int)uVar10 < *(int *)(param_1 + 0x68));
      }
      return;
    }
    if (0 < *(int *)(param_1 + 0x68)) {
      piVar7 = *(int **)(param_1 + 0x60);
      uVar8 = uVar11;
      uVar13 = uVar11;
      do {
        iVar12 = (int)uVar13;
        if ((*piVar7 == *piVar17) && (piVar7[1] == param_2)) {
          if (iVar12 != -1) {
            uVar10 = *(uint *)(param_1 + 0x68);
            iVar6 = uVar10 - 1;
            *(int *)(param_1 + 0x68) = iVar6;
            if (iVar6 != iVar12) {
              puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + ((ulonglong)uVar10 - 1) * 8);
              puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar8 * 8);
              if ((puVar15 != puVar14) && (puVar15 != (undefined8 *)0x0)) {
                *puVar15 = *puVar14;
              }
            }
            FUN_144fb2910(*param_3,uVar13);
          }
          break;
        }
        uVar13 = (ulonglong)(iVar12 + 1);
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 2;
      } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x68));
    }
    FUN_144be90e0(0x3327e9c3);
    piVar17 = piVar17 + 1;
  } while( true );
}



// FUNCTION 144fb3260 FUN_144fb3260 body=493 status=ok
// SIG undefined FUN_144fb3260(void)

void FUN_144fb3260(longlong *param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int iVar16;
  int *piVar17;
  undefined1 local_res8 [8];
  int *local_248;
  int local_240;
  uint local_23c;
  int local_238 [128];
  
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_144fb65e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  lVar9 = param_1[1];
  *(int *)(param_1 + 1) = iVar3;
  uVar8 = *(undefined8 *)(param_2 + 2);
  puVar15 = (undefined8 *)((longlong)(int)lVar9 * 0x50 + *param_1);
  *puVar15 = *(undefined8 *)param_2;
  puVar15[1] = uVar8;
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  *(float *)(puVar15 + 2) = param_2[4];
  *(float *)((longlong)puVar15 + 0x14) = fVar5;
  *(float *)(puVar15 + 3) = fVar6;
  *(float *)((longlong)puVar15 + 0x1c) = fVar7;
  *(undefined1 *)(puVar15 + 8) = 0;
  uVar11 = FUN_144fcd550(param_1 + 4,param_2,iVar2);
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar11;
  local_248 = local_238;
  local_240 = 0;
  local_23c = 0x80000080;
  FUN_144fce550(param_1 + 8,local_res8,param_2,&local_248);
  uVar13 = (ulonglong)local_240;
  piVar1 = local_248 + uVar13;
  for (piVar17 = local_248; piVar17 != piVar1; piVar17 = piVar17 + 1) {
    iVar3 = *piVar17;
    pfVar14 = (float *)((longlong)iVar3 * 0x50 + param_1[2]);
    auVar4._4_4_ = -(uint)(param_2[1] <= pfVar14[5] && pfVar14[1] <= param_2[5]);
    auVar4._0_4_ = -(uint)(*param_2 <= pfVar14[4] && *pfVar14 <= param_2[4]);
    auVar4._8_4_ = -(uint)(param_2[2] <= pfVar14[6] && pfVar14[2] <= param_2[6]);
    auVar4._12_4_ = -(uint)(param_2[3] <= pfVar14[7] && pfVar14[3] <= param_2[7]);
    uVar12 = movmskps((int)uVar13,auVar4);
    uVar13 = (ulonglong)(uVar12 & 7);
    if ((char)(uVar12 & 7) == '\a') {
      iVar16 = (int)param_1[0xd] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar16) {
        FUN_144fb6730(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar16);
      }
      lVar10 = param_1[0xd];
      lVar9 = param_1[0xc];
      *(int *)(param_1 + 0xd) = iVar16;
      *(int *)(lVar9 + (longlong)(int)lVar10 * 8) = iVar2;
      *(int *)(lVar9 + 4 + (longlong)(int)lVar10 * 8) = iVar3;
      uVar13 = FUN_144fb25e0(*param_3,iVar2,iVar3);
    }
  }
  local_240 = 0;
  if ((-1 < (int)local_23c) && (local_248 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_248,(ulonglong)(local_23c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144fb3450 FUN_144fb3450 body=612 status=ok
// SIG undefined FUN_144fb3450(void)

void FUN_144fb3450(longlong *param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 local_res10 [8];
  int *local_38;
  int local_30;
  uint local_2c;
  
  lVar11 = (longlong)param_2;
  local_2c = 0x80000000;
  uVar13 = 0;
  local_38 = (int *)0x0;
  local_30 = 0;
  lVar16 = lVar11 * 0x50 + *param_1;
  FUN_144fce550(param_1 + 8,local_res10,lVar16,&local_38);
  piVar1 = local_38 + local_30;
  piVar17 = local_38;
  do {
    if (piVar17 == piVar1) {
      local_30 = 0;
      if ((-1 < (int)local_2c) && (local_38 != (int *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 2);
      }
      FUN_144fcded0(param_1 + 4,*(undefined4 *)(lVar16 + 0x44));
      lVar16 = param_1[1];
      iVar7 = (int)lVar16 + -1;
      *(int *)(param_1 + 1) = iVar7;
      if (iVar7 != param_2) {
        puVar14 = (undefined8 *)(lVar11 * 0x50 + *param_1);
        puVar15 = (undefined8 *)(*param_1 + -0x50 + (longlong)(int)lVar16 * 0x50);
        if ((puVar14 != puVar15) && (puVar14 != (undefined8 *)0x0)) {
          uVar5 = puVar15[1];
          *puVar14 = *puVar15;
          puVar14[1] = uVar5;
          uVar5 = puVar15[3];
          puVar14[2] = puVar15[2];
          puVar14[3] = uVar5;
          uVar2 = *(undefined4 *)((longlong)puVar15 + 0x24);
          uVar3 = *(undefined4 *)(puVar15 + 5);
          uVar4 = *(undefined4 *)((longlong)puVar15 + 0x2c);
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar15 + 4);
          *(undefined4 *)((longlong)puVar14 + 0x24) = uVar2;
          *(undefined4 *)(puVar14 + 5) = uVar3;
          *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
          uVar5 = puVar15[7];
          puVar14[6] = puVar15[6];
          puVar14[7] = uVar5;
          *(undefined1 *)(puVar14 + 8) = *(undefined1 *)(puVar15 + 8);
          *(undefined4 *)((longlong)puVar14 + 0x44) = *(undefined4 *)((longlong)puVar15 + 0x44);
        }
      }
      FUN_144be90e0(0x97044d1f);
      if ((param_2 != (int)param_1[1]) &&
         (FUN_144fcd8f0(param_1 + 4,*(undefined4 *)(*param_1 + 0x44 + lVar11 * 0x50),param_2),
         uVar9 = uVar13, uVar10 = uVar13, 0 < (int)param_1[0xd])) {
        do {
          if (*(int *)(param_1[0xc] + uVar9) == (int)param_1[1]) {
            *(int *)(param_1[0xc] + uVar9) = param_2;
            lVar11 = *param_3;
            uVar2 = *(undefined4 *)(uVar9 + 4 + param_1[0xc]);
            *(undefined4 *)(uVar10 + *(longlong *)(lVar11 + 0xb0)) =
                 *(undefined4 *)(uVar9 + param_1[0xc]);
            *(undefined4 *)(uVar10 + 4 + *(longlong *)(lVar11 + 0xb0)) = uVar2;
          }
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar9 = uVar9 + 8;
          uVar10 = uVar10 + 0x60;
        } while ((int)uVar12 < (int)param_1[0xd]);
      }
      return;
    }
    if (0 < (int)param_1[0xd]) {
      piVar8 = (int *)param_1[0xc];
      uVar9 = uVar13;
      uVar10 = uVar13;
      do {
        iVar7 = (int)uVar10;
        if ((*piVar8 == param_2) && (piVar8[1] == *piVar17)) {
          if (iVar7 != -1) {
            uVar12 = *(uint *)(param_1 + 0xd);
            iVar6 = uVar12 - 1;
            *(int *)(param_1 + 0xd) = iVar6;
            if (iVar6 != iVar7) {
              puVar14 = (undefined8 *)(param_1[0xc] + ((ulonglong)uVar12 - 1) * 8);
              puVar15 = (undefined8 *)(param_1[0xc] + uVar9 * 8);
              if ((puVar15 != puVar14) && (puVar15 != (undefined8 *)0x0)) {
                *puVar15 = *puVar14;
              }
            }
            FUN_144fb2700(*param_3,uVar10);
            FUN_144fb2910(*param_3,uVar10);
          }
          break;
        }
        uVar10 = (ulonglong)(iVar7 + 1);
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 2;
      } while ((longlong)uVar9 < (longlong)(int)param_1[0xd]);
    }
    FUN_144be90e0(0x3327e9c3);
    piVar17 = piVar17 + 1;
  } while( true );
}



// FUNCTION 144fb36c0 FUN_144fb36c0 body=1162 status=ok
// SIG undefined FUN_144fb36c0(void)

void FUN_144fb36c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 *local_868;
  undefined1 *puStack_860;
  undefined1 *local_858;
  undefined1 *puStack_850;
  undefined1 *local_848;
  int local_840;
  uint local_83c;
  undefined1 local_838 [1024];
  undefined1 *local_438;
  int local_430;
  uint local_42c;
  undefined1 local_428 [1024];
  
  uVar4 = 0;
  local_438 = local_428;
  local_430 = 0;
  local_848 = local_838;
  local_42c = 0x80000100;
  local_840 = 0;
  local_83c = 0x80000100;
  FUN_144be90e0(0xe5ab9676);
  iVar5 = 0;
  if (0 < (int)param_1[1]) {
    lVar7 = 0;
    do {
      if (*(char *)(*param_1 + 0x40 + lVar7) != '\0') {
        FUN_144fcded0(param_1 + 4,*(undefined4 *)(*param_1 + 0x44 + lVar7));
        iVar1 = local_430 + 1;
        if ((int)(local_42c & 0x7fffffff) < iVar1) {
          FUN_1401f86b2(&local_438,&PTR_vftable_14c6e47c0,(longlong)iVar1);
        }
        lVar3 = (longlong)local_430;
        local_430 = iVar1;
        if ((int *)(local_438 + lVar3 * 4) != (int *)0x0) {
          *(int *)(local_438 + lVar3 * 4) = iVar5;
        }
      }
      uVar4 = uVar4 + 0x10624de;
      if (uVar4 < 0x10624de) {
        FUN_144be90e0(0x6cb9d45e);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x50;
    } while (iVar5 < (int)param_1[1]);
  }
  uVar4 = 0;
  FUN_144be90e0(0xe5ab9676);
  iVar5 = 0;
  if (0 < (int)param_1[3]) {
    lVar7 = 0;
    do {
      if (*(char *)(param_1[2] + 0x40 + lVar7) != '\0') {
        FUN_144fcded0(param_1 + 8,*(undefined4 *)(param_1[2] + 0x44 + lVar7));
        iVar1 = local_840 + 1;
        if ((int)(local_83c & 0x7fffffff) < iVar1) {
          FUN_1401f86b2(&local_848,&PTR_vftable_14c6e47c0,(longlong)iVar1);
        }
        lVar3 = (longlong)local_840;
        local_840 = iVar1;
        if ((int *)(local_848 + lVar3 * 4) != (int *)0x0) {
          *(int *)(local_848 + lVar3 * 4) = iVar5;
        }
      }
      uVar4 = uVar4 + 0x10624de;
      if (uVar4 < 0x10624de) {
        FUN_144be90e0(0x6cb9d45e);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x50;
    } while (iVar5 < (int)param_1[3]);
  }
  FUN_144be90e0(0xe6d7d41f);
  if ((local_430 != 0) && (local_840 != 0)) {
    puStack_850 = local_848 + (longlong)local_840 * 4;
    local_858 = local_848;
    puStack_860 = local_438 + (longlong)local_430 * 4;
    local_868 = local_438;
    FUN_144fb4100(param_1,&local_868,&local_858,param_2);
  }
  FUN_144be90e0(0xe50c3cc9);
  local_868 = local_438;
  puStack_860 = local_438 + (longlong)local_430 * 4;
  local_858 = local_438;
  puStack_850 = puStack_860;
  FUN_144fb4630(param_1,&local_858,param_2);
  local_868 = local_848;
  puStack_860 = local_848 + (longlong)local_840 * 4;
  local_858 = local_848;
  puStack_850 = puStack_860;
  FUN_144fb4db0(param_1,&local_858,param_2);
  uVar4 = 0;
  FUN_144be90e0(0xd05a47ef);
  iVar5 = 0;
  if (0 < local_430) {
    lVar7 = 0;
    do {
      puVar6 = (undefined4 *)((longlong)*(int *)(local_438 + lVar7) * 0x50 + *param_1);
      *puVar6 = puVar6[8];
      puVar6[1] = puVar6[9];
      puVar6[2] = puVar6[10];
      puVar6[3] = puVar6[0xb];
      puVar6[4] = puVar6[0xc];
      puVar6[5] = puVar6[0xd];
      puVar6[6] = puVar6[0xe];
      puVar6[7] = puVar6[0xf];
      *(undefined1 *)(puVar6 + 0x10) = 0;
      uVar2 = FUN_144fcd550(param_1 + 4,puVar6,*(undefined4 *)(local_438 + lVar7));
      uVar4 = uVar4 + 0x1eb851e;
      puVar6[0x11] = uVar2;
      if (uVar4 < 0x1eb851e) {
        FUN_144be90e0(0xbdf7f2f1);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 4;
    } while (iVar5 < local_430);
  }
  uVar4 = 0;
  FUN_144be90e0(0xd05a47ef);
  iVar5 = 0;
  if (0 < local_840) {
    lVar7 = 0;
    do {
      puVar6 = (undefined4 *)((longlong)*(int *)(local_848 + lVar7) * 0x50 + param_1[2]);
      *puVar6 = puVar6[8];
      puVar6[1] = puVar6[9];
      puVar6[2] = puVar6[10];
      puVar6[3] = puVar6[0xb];
      puVar6[4] = puVar6[0xc];
      puVar6[5] = puVar6[0xd];
      puVar6[6] = puVar6[0xe];
      puVar6[7] = puVar6[0xf];
      *(undefined1 *)(puVar6 + 0x10) = 0;
      uVar2 = FUN_144fcd550(param_1 + 8,puVar6,*(undefined4 *)(local_848 + lVar7));
      uVar4 = uVar4 + 0x1eb851e;
      puVar6[0x11] = uVar2;
      if (uVar4 < 0x1eb851e) {
        FUN_144be90e0(0xbdf7f2f1);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 4;
    } while (iVar5 < local_840);
  }
  FUN_144be90e0(0xa9a60353);
  local_840 = 0;
  if ((-1 < (int)local_83c) && (local_848 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_848,(ulonglong)(local_83c & 0x7fffffff) << 2);
  }
  local_848 = (undefined1 *)0x0;
  local_83c = 0x80000000;
  local_430 = 0;
  if ((-1 < (int)local_42c) && (local_438 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_438,(ulonglong)(local_42c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144fb3b50 FUN_144fb3b50 body=610 status=ok
// SIG undefined FUN_144fb3b50(void)

void FUN_144fb3b50(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_res10 [2];
  int local_res18;
  uint local_res20;
  
  uVar10 = 0;
  local_res10[0] = 0;
  FUN_144be90e0(0x55d5c36a);
  lVar5 = *param_1;
  if (1 < (int)param_1[1]) {
    local_res20 = (int)param_1[1] - 1;
    uVar7 = (ulonglong)local_res20;
    uVar13 = uVar10;
    uVar14 = (longlong)(int)local_res20;
    do {
      local_res18 = (int)uVar13;
      uVar9 = uVar7 & 0xffffffff;
      iVar12 = *(int *)(lVar5 + ((longlong)(local_res18 + (int)uVar7) >> 1) * 4);
      do {
        uVar4 = (uint)uVar9;
        local_res10[0] = local_res10[0] + 0xe6afc;
        if (local_res10[0] < 0xe6afc) {
          FUN_144be90e0(0xa56c5f8);
        }
        iVar1 = *(int *)(lVar5 + uVar10 * 4);
        uVar7 = uVar13;
        while (uVar11 = (uint)uVar7, iVar1 < iVar12) {
          uVar10 = uVar10 + 1;
          uVar7 = (ulonglong)(uVar11 + 1);
          iVar1 = *(int *)(lVar5 + uVar10 * 4);
        }
        uVar6 = (uVar11 - (int)uVar13) * 0xd1b71;
        local_res10[0] = local_res10[0] + uVar6;
        if (local_res10[0] < uVar6) {
          FUN_144be90e0(0xa56c5f8);
        }
        local_res10[0] = local_res10[0] + 0xe6afc;
        if (local_res10[0] < 0xe6afc) {
          FUN_144be90e0(0xa56c5f8);
        }
        iVar1 = *(int *)(lVar5 + uVar14 * 4);
        uVar6 = uVar4;
        while (iVar12 < iVar1) {
          uVar14 = uVar14 - 1;
          uVar6 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar6;
          iVar1 = *(int *)(lVar5 + uVar14 * 4);
        }
        uVar4 = (uVar4 - uVar6) * 0xd1b71;
        local_res10[0] = local_res10[0] + uVar4;
        if (local_res10[0] < uVar4) {
          FUN_144be90e0(0xa56c5f8);
        }
        uVar13 = uVar7;
        if ((int)uVar6 < (int)uVar11) break;
        if (uVar6 != uVar11) {
          uVar2 = *(undefined4 *)(lVar5 + uVar14 * 4);
          *(undefined4 *)(lVar5 + uVar14 * 4) = *(undefined4 *)(lVar5 + uVar10 * 4);
          *(undefined4 *)(lVar5 + uVar10 * 4) = uVar2;
        }
        uVar6 = uVar6 - 1;
        uVar9 = (ulonglong)uVar6;
        uVar14 = uVar14 - 1;
        uVar13 = (ulonglong)(uVar11 + 1);
        uVar10 = uVar10 + 1;
      } while ((int)(uVar11 + 1) <= (int)uVar6);
      if (local_res18 < (int)uVar6) {
        FUN_144fb6380(lVar5,local_res18,uVar6,(ulonglong)param_1 & 0xff,local_res10);
      }
      uVar7 = (ulonglong)(int)local_res20;
      uVar14 = uVar7;
    } while ((int)uVar13 < (int)local_res20);
  }
  uVar10 = 0;
  iVar12 = (int)param_1[1];
  piVar3 = (int *)*param_1;
  if (iVar12 != 0) {
    if (1 < (longlong)iVar12) {
      lVar5 = 1;
      piVar8 = piVar3;
      uVar14 = uVar10;
      do {
        if (*piVar8 != piVar3[lVar5]) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar14 = uVar14 + 1;
          piVar8 = piVar3 + uVar14;
          *piVar8 = piVar3[lVar5];
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar12);
    }
    uVar10 = (ulonglong)((int)uVar10 + 1);
  }
  iVar12 = (int)uVar10;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar12) {
    FUN_144c585a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  iVar1 = (int)param_1[1];
  if ((iVar1 < iVar12) || (iVar12 < iVar1)) {
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 144fb3dc0 FUN_144fb3dc0 body=328 status=ok
// SIG undefined FUN_144fb3dc0(void)

void FUN_144fb3dc0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  uVar17 = (ulonglong)param_2;
  iVar18 = (int)param_1[1];
  if (param_2 == iVar18 + -1) {
    *(int *)(param_1 + 1) = iVar18 + -1;
    return;
  }
  lVar7 = *param_1;
  puVar4 = (undefined4 *)(lVar7 + -0x10 + (longlong)iVar18 * 0x10);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  fVar5 = **(float **)(lVar7 + -8 + (longlong)iVar18 * 0x10);
  fVar6 = **(float **)(lVar7 + 8 + uVar17 * 0x10);
  puVar1 = (undefined4 *)(lVar7 + uVar17 * 0x10);
  *puVar1 = *puVar4;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  iVar18 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar18;
  if (fVar6 <= fVar5) {
    param_2 = param_2 * 2;
    uVar19 = param_2 + 1;
    if (param_2 + 2 < iVar18) {
      pfVar8 = *(float **)(*param_1 + 8 + (longlong)(int)uVar19 * 0x10);
      fVar5 = **(float **)(*param_1 + 0x28 + (longlong)param_2 * 0x10);
      uVar19 = (fVar5 < *pfVar8 || fVar5 == *pfVar8) + 1 + param_2;
    }
    while( true ) {
      if (iVar18 <= (int)uVar19) {
        return;
      }
      uVar20 = (ulonglong)uVar19;
      lVar7 = *param_1;
      lVar21 = (longlong)(int)uVar17;
      lVar16 = (longlong)(int)uVar19;
      pfVar8 = *(float **)(lVar7 + 8 + lVar16 * 0x10);
      fVar5 = **(float **)(lVar7 + 8 + lVar21 * 0x10);
      if (fVar5 < *pfVar8 || fVar5 == *pfVar8) break;
      puVar2 = (undefined8 *)(lVar7 + lVar21 * 0x10);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      puVar2 = (undefined8 *)(lVar7 + lVar16 * 0x10);
      uVar15 = puVar2[1];
      puVar3 = (undefined8 *)(lVar7 + lVar21 * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      iVar9 = uVar19 * 2;
      puVar2 = (undefined8 *)(lVar7 + lVar16 * 0x10);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      uVar19 = iVar9 + 1;
      uVar17 = uVar20;
      if (iVar9 + 2 < (int)param_1[1]) {
        pfVar8 = *(float **)(*param_1 + 8 + (longlong)(int)uVar19 * 0x10);
        fVar5 = **(float **)(*param_1 + 0x28 + (longlong)iVar9 * 0x10);
        uVar19 = (fVar5 < *pfVar8 || fVar5 == *pfVar8) + 1 + iVar9;
      }
    }
    return;
  }
  FUN_144fb3f10(param_1,param_2);
  return;
}



// FUNCTION 144fb3f10 FUN_144fb3f10 body=106 status=ok
// SIG undefined FUN_144fb3f10(void)

uint FUN_144fb3f10(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  while( true ) {
    uVar9 = (int)(param_2 - 1) >> 1;
    if ((int)uVar9 < 0) {
      return param_2;
    }
    lVar4 = *param_1;
    lVar11 = (longlong)(int)param_2;
    uVar10 = (ulonglong)uVar9;
    pfVar5 = *(float **)(lVar4 + 8 + uVar10 * 0x10);
    fVar3 = **(float **)(lVar4 + 8 + lVar11 * 0x10);
    if (*pfVar5 <= fVar3 && fVar3 != *pfVar5) break;
    puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x10);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x10);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    param_2 = uVar9;
  }
  return param_2;
}



// FUNCTION 144fb3f80 FUN_144fb3f80 body=270 status=ok
// SIG undefined FUN_144fb3f80(void)

void FUN_144fb3f80(longlong param_1,uint param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar12 = (longlong)*(int *)(param_1 + 0x20) * 0x60;
  pfVar4 = (float *)(lVar12 + 0x10 + lVar6);
  pfVar5 = (float *)(lVar12 + 0x20 + lVar6);
  auVar7._4_4_ = -(uint)(pfVar4[1] <= param_3[5] && param_3[1] <= pfVar5[1]);
  auVar7._0_4_ = -(uint)(*pfVar4 <= param_3[4] && *param_3 <= *pfVar5);
  auVar7._8_4_ = -(uint)(pfVar4[2] <= param_3[6] && param_3[2] <= pfVar5[2]);
  auVar7._12_4_ = -(uint)(pfVar4[3] <= param_3[7] && param_3[3] <= pfVar5[3]);
  uVar8 = movmskps((int)lVar6,auVar7);
  if (((byte)uVar8 & 7) == 7) {
    uVar10 = 0;
    plVar15 = (longlong *)
              ((ulonglong)(param_2 & 0x3fffff) * 0x10 +
              *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8));
    iVar14 = (int)plVar15[1];
    if (0 < iVar14) {
      piVar9 = (int *)*plVar15;
      uVar13 = uVar10;
      while (iVar11 = (int)uVar13, *piVar9 != *(int *)(param_1 + 0x20)) {
        uVar13 = (ulonglong)(iVar11 + 1);
        uVar10 = uVar10 + 1;
        piVar9 = piVar9 + 1;
        if ((longlong)iVar14 <= (longlong)uVar10) {
          return;
        }
      }
      if (iVar11 != -1) {
        *(int *)(plVar15 + 1) = iVar14 + -1;
        if (iVar14 + -1 != iVar11) {
          puVar1 = (undefined4 *)(*plVar15 + ((longlong)iVar14 + -1) * 4);
          puVar2 = (undefined4 *)(*plVar15 + (longlong)iVar11 * 4);
          if (puVar2 != puVar1) {
            *puVar2 = *puVar1;
          }
        }
        lVar6 = *(longlong *)(param_1 + 0x30);
        iVar14 = *(int *)(lVar6 + 0x38) + 1;
        if ((int)(*(uint *)(lVar6 + 0x3c) & 0x7fffffff) < iVar14) {
          FUN_144c584b0(lVar6 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar14);
        }
        puVar3 = (uint *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 4);
        if (puVar3 != (uint *)0x0) {
          *puVar3 = param_2 & 0x3fffff;
        }
        *(int *)(lVar6 + 0x38) = iVar14;
      }
    }
  }
  return;
}



// FUNCTION 144fb4090 FUN_144fb4090 body=99 status=ok
// SIG undefined FUN_144fb4090(void)

void FUN_144fb4090(longlong param_1,uint param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  auVar1._4_4_ = -(uint)(param_3[1] <= *(float *)(param_1 + 0x24) &&
                        *(float *)(param_1 + 0x14) <= param_3[5]);
  auVar1._0_4_ = -(uint)(*param_3 <= *(float *)(param_1 + 0x20) &&
                        *(float *)(param_1 + 0x10) <= param_3[4]);
  auVar1._8_4_ = -(uint)(param_3[2] <= *(float *)(param_1 + 0x28) &&
                        *(float *)(param_1 + 0x18) <= param_3[6]);
  auVar1._12_4_ =
       -(uint)(param_3[3] <= *(float *)(param_1 + 0x2c) && *(float *)(param_1 + 0x1c) <= param_3[7])
  ;
  uVar2 = movmskps(in_EAX,auVar1);
  if (((byte)uVar2 & 7) == 7) {
    plVar4 = (longlong *)
             ((ulonglong)(param_2 & 0x3fffff) * 0x10 +
             *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xd8));
    iVar3 = 0;
    if (0 < (int)plVar4[1]) {
      lVar5 = 0;
      do {
        if (*(int *)(*plVar4 + lVar5) == *(int *)(param_1 + 0x30)) {
          *(undefined4 *)(*plVar4 + lVar5) = *(undefined4 *)(param_1 + 0x34);
        }
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + 4;
      } while (iVar3 < (int)plVar4[1]);
    }
  }
  return;
}



// FUNCTION 144fb4100 FUN_144fb4100 body=1327 status=ok
// SIG undefined FUN_144fb4100(void)

void FUN_144fb4100(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  int *piVar23;
  ulonglong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  uint *local_a8;
  int local_a0;
  int local_9c [9];
  int *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  
  piVar16 = (int *)param_3[1];
  piVar1 = (int *)param_2[1];
  piVar18 = (int *)*param_2;
  piVar23 = (int *)*param_3;
  local_60 = (longlong)piVar1 - (longlong)piVar18 >> 2;
  uVar6 = (longlong)piVar16 - (longlong)piVar23 >> 2;
  iVar20 = 0;
  uVar19 = (int)local_60 + 4;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar13 = *(char *)(lVar10 + 0x114);
  local_res20 = param_4;
  local_78 = piVar16;
  if (cVar13 == '\0') {
    __dyn_tls_on_demand_init();
    cVar13 = *(char *)(lVar10 + 0x114);
  }
  lVar7 = *(longlong *)(lVar10 + 0xf0);
  if (lVar7 == 0) {
    if (cVar13 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar10 + 0xf0) = lVar7;
  }
  local_50 = *(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  if (*(longlong *)(local_50 + 8) != 0) {
    local_50 = 0;
  }
  local_d0 = (longlong)(int)uVar19 * 0x20;
  local_70 = local_d0;
  if (local_50 == 0) {
    local_res18 = (*DAT_14c787670)(1,&local_d0,0x40);
  }
  else {
    local_res10 = local_d0 + 0x3fU & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(local_50 + 0x28)) {
      local_res18 = *(longlong *)(local_50 + 0x38);
      if (local_res10 + local_res18 <= *(ulonglong *)(local_50 + 0x40)) {
        *(ulonglong *)(local_50 + 0x38) = local_res10 + local_res18;
        goto LAB_144fb4228;
      }
    }
    local_res18 = FUN_144b454a0(local_50,&local_res10);
  }
LAB_144fb4228:
  lVar7 = local_res18;
  uStack_c0._4_4_ = uVar19 | 0x80000000;
  for (; piVar18 != piVar1; piVar18 = piVar18 + 1) {
    lVar8 = (longlong)iVar20;
    iVar20 = iVar20 + 1;
    pauVar14 = (undefined1 (*) [16])((longlong)*piVar18 * 0x50 + *param_1);
    _local_c8 = minps(*pauVar14,pauVar14[2]);
    local_b8 = maxps(pauVar14[1],pauVar14[3]);
    FUN_144fc00a0(lVar8 * 0x20 + lVar7,local_c8);
    piVar16 = local_78;
  }
  iVar17 = 0;
  iVar2 = (int)uVar6;
  uVar19 = iVar2 + 4;
  if (*(char *)(lVar10 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar15 = 0x114;
  lVar7 = *(longlong *)(lVar10 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar10 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    uVar15 = 0;
    *(longlong *)(lVar10 + 0xf0) = lVar7;
  }
  local_58 = *(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  if (*(longlong *)(local_58 + 8) != 0) {
    local_58 = 0;
  }
  local_d0 = (longlong)(int)uVar19 * 0x20;
  local_68 = local_d0;
  if (local_58 == 0) {
    uVar9 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)uVar15 >> 8),1),&local_68,0x40);
  }
  else {
    local_78 = (int *)(local_d0 + 0x3fU & 0xffffffffffffffc0);
    if (local_78 <= *(int **)(local_58 + 0x28)) {
      uVar9 = *(ulonglong *)(local_58 + 0x38);
      local_res10 = uVar9;
      if (uVar9 + (longlong)local_78 <= *(ulonglong *)(local_58 + 0x40)) {
        *(ulonglong *)(local_58 + 0x38) = uVar9 + (longlong)local_78;
        goto LAB_144fb4353;
      }
    }
    uVar9 = FUN_144b454a0(local_58,&local_78);
  }
LAB_144fb4353:
  uStack_c0._4_4_ = uVar19 | 0x80000000;
  local_res10 = uVar9;
  lVar10 = local_res18;
  auVar3 = _local_c8;
  uVar4 = local_60;
  for (; local_res18 = lVar10, local_60 = uVar4, piVar23 != piVar16; piVar23 = piVar23 + 1) {
    lVar10 = (longlong)iVar17;
    iVar17 = iVar17 + 1;
    pauVar14 = (undefined1 (*) [16])((longlong)*piVar23 * 0x50 + param_1[2]);
    _local_c8 = minps(*pauVar14,pauVar14[2]);
    local_b8 = maxps(pauVar14[1],pauVar14[3]);
    FUN_144fc00a0(lVar10 * 0x20 + uVar9,local_c8);
    lVar10 = local_res18;
    auVar3 = _local_c8;
    uVar4 = local_60;
  }
  lVar7 = 4;
  stack0xffffffffffffff3c = auVar3._4_12_;
  local_c8._0_4_ = 0xffffffff;
  auVar5 = _local_c8;
  uStack_c0 = auVar3._8_8_;
  do {
    lVar8 = (longlong)iVar20;
    iVar20 = iVar20 + 1;
    puVar11 = (undefined8 *)(lVar8 * 0x20 + lVar10);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = local_c8;
      puVar11[1] = uStack_c0;
      puVar11[2] = local_b8._0_8_;
      puVar11[3] = local_b8._8_8_;
    }
    lVar8 = (longlong)iVar17;
    iVar17 = iVar17 + 1;
    puVar11 = (undefined8 *)(lVar8 * 0x20 + local_res10);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = local_c8;
      puVar11[1] = uStack_c0;
      puVar11[2] = local_b8._0_8_;
      puVar11[3] = local_b8._8_8_;
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  _local_c8 = auVar5;
  FUN_144fc0200(lVar10,uVar4 & 0xffffffff);
  FUN_144fc0200(local_res10,uVar6 & 0xffffffff);
  FUN_144fc0100(local_c8,lVar10,uVar4 & 0xffffffff,local_res10,iVar2);
  puVar22 = (uint *)local_b8._8_8_;
LAB_144fb4453:
  do {
    if ((local_a0 < 1) || (local_9c[0] < 1)) {
      if (local_58 == 0) {
        (*DAT_14c787678)(1,local_res10);
      }
      else {
        uVar6 = local_d0 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_58 + 0x28) < uVar6) ||
           (local_res10 + uVar6 != *(longlong *)(local_58 + 0x38))) {
          FUN_144be8550(local_58,local_res10);
        }
        else {
          *(ulonglong *)(local_58 + 0x38) = local_res10;
          if (*(ulonglong *)(local_58 + 0x48) == local_res10) {
            FUN_144be8430(local_58);
          }
        }
      }
      if (local_50 == 0) {
        (*DAT_14c787678)(1,local_res18);
      }
      else {
        uVar6 = local_70 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_50 + 0x28) < uVar6) ||
           (local_res18 + uVar6 != *(longlong *)(local_50 + 0x38))) {
          FUN_144be8550(local_50,local_res18);
        }
        else {
          *(longlong *)(local_50 + 0x38) = local_res18;
          if (*(longlong *)(local_50 + 0x48) == local_res18) {
            FUN_144be8430();
          }
        }
      }
      return;
    }
    puVar12 = (uint *)local_b8._0_8_;
    if (local_c8._0_4_ != 0) {
      puVar12 = local_a8;
      puVar22 = (uint *)local_b8._0_8_;
    }
    local_d8 = CONCAT44(puVar12[3],puVar22[3]);
    FUN_144fb61a0(param_1,local_d8,local_res20);
    puVar12 = (uint *)(local_b8._0_8_ + 0x20);
    local_b8._0_8_ = puVar12;
    puVar21 = uStack_c0;
    puVar22 = (uint *)local_b8._8_8_;
    uVar19 = local_c8._0_4_;
    do {
      if (*puVar12 < puVar21[4]) {
        do {
          if (-1 < (int)(puVar21[6] - puVar12[2] | puVar21[5] - puVar12[1] | puVar12[6] - puVar21[2]
                        | puVar12[5] - puVar21[1])) {
            local_b8._0_8_ = puVar12;
            uStack_c0 = puVar21;
            local_c8._0_4_ = uVar19;
            goto LAB_144fb4453;
          }
          puVar12 = puVar12 + 8;
        } while (*puVar12 < puVar21[4]);
      }
      if (uVar19 == 0) {
        local_b8._8_8_ = puVar22 + 8;
        piVar16 = &local_a0;
        iVar20 = local_a0;
      }
      else {
        local_a8 = local_a8 + 8;
        piVar16 = local_9c;
        iVar20 = local_9c[0];
      }
      *piVar16 = iVar20 + -1;
      uVar19 = (uint)(*local_a8 < *(uint *)local_b8._8_8_);
      puVar12 = local_a8;
      puVar21 = (uint *)local_b8._8_8_;
      if (*local_a8 < *(uint *)local_b8._8_8_) {
        puVar12 = (uint *)local_b8._8_8_;
        puVar21 = local_a8;
      }
      puVar22 = (uint *)local_b8._8_8_;
    } while ((0 < local_a0) && (0 < local_9c[0]));
  } while( true );
}



// FUNCTION 144fb4630 FUN_144fb4630 body=1920 status=ok
// SIG undefined FUN_144fb4630(void)

void FUN_144fb4630(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  float *pfVar18;
  uint uVar19;
  int **ppiVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_res8;
  int local_res10;
  longlong local_6f8;
  undefined1 local_6c0 [4];
  undefined1 local_6bc [4];
  undefined1 local_6b8 [8];
  float *local_6b0;
  longlong local_6a8;
  uint *local_6a0;
  longlong local_698;
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 *local_668;
  int local_660;
  uint local_65c;
  undefined1 local_658 [512];
  int *local_458;
  int local_450;
  uint local_44c;
  int local_448 [258];
  
  lVar8 = param_1[2];
  local_698 = *param_1;
  puVar12 = (uint *)*param_2;
  local_6a0 = (uint *)param_2[1];
  if (puVar12 != local_6a0) {
    do {
      uVar7 = *puVar12;
      uVar23 = (ulonglong)(int)uVar7;
      local_450 = 0;
      lVar25 = uVar23 * 0x50;
      auVar3 = *(undefined1 (*) [16])(local_698 + lVar25);
      local_6a8 = local_698 + lVar25;
      auVar4 = *(undefined1 (*) [16])(local_6a8 + 0x20);
      pfVar14 = (float *)(local_6a8 + 0x20);
      auVar5 = *(undefined1 (*) [16])(local_6a8 + 0x30);
      auVar6 = *(undefined1 (*) [16])(local_6a8 + 0x10);
      auVar9._4_4_ = -(uint)(auVar3._4_4_ <= auVar5._4_4_ && auVar4._4_4_ <= auVar6._4_4_);
      auVar9._0_4_ = -(uint)(auVar3._0_4_ <= auVar5._0_4_ && auVar4._0_4_ <= auVar6._0_4_);
      auVar9._8_4_ = -(uint)(auVar3._8_4_ <= auVar5._8_4_ && auVar4._8_4_ <= auVar6._8_4_);
      auVar9._12_4_ = -(uint)(auVar3._12_4_ <= auVar5._12_4_ && auVar4._12_4_ <= auVar6._12_4_);
      uVar10 = movmskps((int)puVar12,auVar9);
      local_458 = local_448;
      local_6b0 = pfVar14;
      if (((byte)uVar10 & 7) == 7) {
        local_688 = minps(auVar3,auVar4);
        ppiVar20 = &local_458;
        local_44c = 0x80000100;
        local_678 = maxps(auVar6,auVar5);
        FUN_144fce550(param_1 + 8,local_6c0,local_688);
        piVar13 = local_458 + local_450;
        for (piVar17 = local_458; piVar17 != piVar13; piVar17 = piVar17 + 1) {
          iVar22 = *piVar17;
          pfVar18 = (float *)(*param_1 + lVar25);
          pfVar14 = (float *)((longlong)iVar22 * 0x50 + param_1[2]);
          fVar26 = *pfVar14;
          fVar27 = pfVar14[1];
          fVar28 = pfVar14[2];
          fVar29 = pfVar14[3];
          auVar5._4_4_ = -(uint)(fVar27 <= pfVar18[5] && pfVar18[1] <= pfVar14[5]);
          auVar5._0_4_ = -(uint)(fVar26 <= pfVar18[4] && *pfVar18 <= pfVar14[4]);
          auVar5._8_4_ = -(uint)(fVar28 <= pfVar18[6] && pfVar18[2] <= pfVar14[6]);
          auVar5._12_4_ = -(uint)(fVar29 <= pfVar18[7] && pfVar18[3] <= pfVar14[7]);
          uVar19 = movmskps((int)ppiVar20,auVar5);
          ppiVar20 = (int **)(ulonglong)(uVar19 & 7);
          if (*(char *)(pfVar18 + 0x10) != '\0') {
            pfVar18 = pfVar18 + 8;
          }
          if (*(char *)(pfVar14 + 0x10) != '\0') {
            fVar26 = pfVar14[8];
            fVar27 = pfVar14[9];
            fVar28 = pfVar14[10];
            fVar29 = pfVar14[0xb];
            pfVar14 = pfVar14 + 8;
          }
          auVar6._4_4_ = -(uint)(pfVar18[1] <= pfVar14[5] && fVar27 <= pfVar18[5]);
          auVar6._0_4_ = -(uint)(*pfVar18 <= pfVar14[4] && fVar26 <= pfVar18[4]);
          auVar6._8_4_ = -(uint)(pfVar18[2] <= pfVar14[6] && fVar28 <= pfVar18[6]);
          auVar6._12_4_ = -(uint)(pfVar18[3] <= pfVar14[7] && fVar29 <= pfVar18[7]);
          uVar11 = movmskps(iVar22,auVar6);
          if ((uVar19 & 7) == 7) {
            if ((uVar11 & 7) != 7) {
              FUN_144fb6250(param_1,CONCAT44(iVar22,uVar7),param_3);
            }
          }
          else if ((uVar11 & 7) == 7) {
            FUN_144fb6300(param_1,CONCAT44(iVar22,uVar7),param_3);
          }
          FUN_144be90e0(0x4d243d8f);
        }
        local_450 = 0;
        if ((-1 < (int)local_44c) && (local_458 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_458,(ulonglong)(local_44c & 0x7fffffff) << 2);
        }
      }
      else {
        local_668 = local_658;
        local_660 = 0;
        local_44c = 0x80000080;
        local_65c = 0x80000080;
        FUN_144fce550(param_1 + 8,local_6bc,local_6a8,&local_458);
        FUN_144fce550(param_1 + 8,local_6b8,pfVar14);
        if (1 < local_450) {
          FUN_144fb6950(local_458,0,local_450 + -1);
        }
        if (1 < local_660) {
          FUN_144fb6950(local_668);
        }
        iVar22 = 0;
        iVar24 = 0;
        local_res10 = 0;
        lVar25 = 0;
        local_res8 = 0;
        local_6f8 = 0;
        if (0 < local_450) {
          do {
            iVar21 = (int)uVar23;
            if (local_660 <= iVar24) {
              if (iVar22 < local_450) {
                lVar25 = lVar25 * 4;
                do {
                  iVar24 = 0;
                  lVar15 = 0;
                  if (0 < (int)param_1[0xd]) {
                    piVar13 = (int *)param_1[0xc];
                    do {
                      if ((*piVar13 == iVar21) &&
                         (piVar13[1] == *(int *)((longlong)local_458 + lVar25))) {
                        if (iVar24 != -1) {
                          uVar19 = *(uint *)(param_1 + 0xd);
                          iVar16 = uVar19 - 1;
                          *(int *)(param_1 + 0xd) = iVar16;
                          if (iVar16 != iVar24) {
                            puVar2 = (undefined8 *)(param_1[0xc] + ((ulonglong)uVar19 - 1) * 8);
                            puVar1 = (undefined8 *)(param_1[0xc] + lVar15 * 8);
                            if ((puVar1 != puVar2) && (puVar1 != (undefined8 *)0x0)) {
                              *puVar1 = *puVar2;
                            }
                          }
                          FUN_144fb2700(*param_3,iVar24);
                          FUN_144fb2910(*param_3);
                        }
                        break;
                      }
                      iVar24 = iVar24 + 1;
                      lVar15 = lVar15 + 1;
                      piVar13 = piVar13 + 2;
                    } while (lVar15 < (int)param_1[0xd]);
                  }
                  iVar22 = iVar22 + 1;
                  lVar25 = lVar25 + 4;
                  iVar24 = local_res8;
                } while (iVar22 < local_450);
              }
              break;
            }
            uVar19 = local_458[lVar25];
            uVar11 = *(uint *)(local_668 + local_6f8 * 4);
            if (uVar19 < uVar11) {
              iVar16 = 0;
              lVar15 = 0;
              if (0 < (int)param_1[0xd]) {
                piVar13 = (int *)param_1[0xc];
                do {
                  if ((*piVar13 == iVar21) && (piVar13[1] == uVar19)) {
                    iVar24 = local_res8;
                    if (iVar16 != -1) {
                      uVar19 = *(uint *)(param_1 + 0xd);
                      iVar24 = uVar19 - 1;
                      *(int *)(param_1 + 0xd) = iVar24;
                      if (iVar24 != iVar16) {
                        puVar2 = (undefined8 *)(param_1[0xc] + ((ulonglong)uVar19 - 1) * 8);
                        puVar1 = (undefined8 *)(param_1[0xc] + lVar15 * 8);
                        if ((puVar1 != puVar2) && (puVar1 != (undefined8 *)0x0)) {
                          *puVar1 = *puVar2;
                        }
                      }
                      FUN_144fb2700(*param_3,iVar16);
                      FUN_144fb2910(*param_3,iVar16);
                      iVar24 = local_res8;
                    }
                    break;
                  }
                  iVar16 = iVar16 + 1;
                  lVar15 = lVar15 + 1;
                  piVar13 = piVar13 + 2;
                  iVar24 = local_res8;
                } while (lVar15 < (int)param_1[0xd]);
              }
LAB_144fb4b06:
              iVar22 = iVar22 + 1;
              lVar25 = lVar25 + 1;
              local_res10 = iVar22;
            }
            else {
              if (uVar19 <= uVar11) {
                FUN_144fb61a0(param_1,CONCAT44(uVar19,iVar21),param_3);
                local_res8 = local_res8 + 1;
                local_6f8 = local_6f8 + 1;
                iVar24 = local_res8;
                goto LAB_144fb4b06;
              }
              pfVar18 = (float *)((longlong)(int)uVar11 * 0x50 + lVar8);
              auVar3._4_4_ = -(uint)(pfVar14[1] <= pfVar18[5] && pfVar18[1] <= pfVar14[5]);
              auVar3._0_4_ = -(uint)(*pfVar14 <= pfVar18[4] && *pfVar18 <= pfVar14[4]);
              auVar3._8_4_ = -(uint)(pfVar14[2] <= pfVar18[6] && pfVar18[2] <= pfVar14[6]);
              auVar3._12_4_ = -(uint)(pfVar14[3] <= pfVar18[7] && pfVar18[3] <= pfVar14[7]);
              uVar10 = movmskps((int)local_668,auVar3);
              if (((byte)uVar10 & 7) == 7) {
                FUN_144fb25e0(*param_3,uVar23 & 0xffffffff,uVar11);
                iVar22 = (int)param_1[0xd] + 1;
                if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar22) {
                  FUN_144fb6a20(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar22);
                }
                puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(uVar11,iVar21);
                }
                *(int *)(param_1 + 0xd) = iVar22;
                uVar23 = (ulonglong)uVar7;
                iVar22 = local_res10;
                iVar24 = local_res8;
              }
              iVar24 = iVar24 + 1;
              local_6f8 = local_6f8 + 1;
              local_res8 = iVar24;
            }
            pfVar14 = local_6b0;
          } while (iVar22 < local_450);
        }
        lVar25 = local_6a8;
        if (iVar24 < local_660) {
          local_6f8 = local_6f8 * 4;
          do {
            iVar22 = *(int *)(local_668 + local_6f8);
            pfVar14 = (float *)((longlong)iVar22 * 0x50 + lVar8);
            auVar4._4_4_ = -(uint)(*(float *)(lVar25 + 0x24) <= pfVar14[5] &&
                                  pfVar14[1] <= *(float *)(lVar25 + 0x34));
            auVar4._0_4_ = -(uint)(*(float *)(lVar25 + 0x20) <= pfVar14[4] &&
                                  *pfVar14 <= *(float *)(lVar25 + 0x30));
            auVar4._8_4_ = -(uint)(*(float *)(lVar25 + 0x28) <= pfVar14[6] &&
                                  pfVar14[2] <= *(float *)(lVar25 + 0x38));
            auVar4._12_4_ =
                 -(uint)(*(float *)(lVar25 + 0x2c) <= pfVar14[7] &&
                        pfVar14[3] <= *(float *)(lVar25 + 0x3c));
            uVar10 = movmskps((int)local_668,auVar4);
            if (((byte)uVar10 & 7) == 7) {
              FUN_144fb25e0(*param_3,uVar23 & 0xffffffff,iVar22);
              iVar24 = (int)param_1[0xd] + 1;
              if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar24) {
                FUN_144fb6a20(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar24);
              }
              puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = CONCAT44(iVar22,(int)uVar23);
              }
              *(int *)(param_1 + 0xd) = iVar24;
              iVar24 = local_res8;
            }
            uVar23 = (ulonglong)uVar7;
            iVar24 = iVar24 + 1;
            local_6f8 = local_6f8 + 4;
            local_res8 = iVar24;
          } while (iVar24 < local_660);
        }
        local_660 = 0;
        if ((-1 < (int)local_65c) && (local_668 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_668,(ulonglong)(local_65c & 0x7fffffff) << 2);
        }
        local_668 = (undefined1 *)0x0;
        local_65c = 0x80000000;
        local_450 = 0;
        if ((-1 < (int)local_44c) && (local_458 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_458,(ulonglong)(local_44c & 0x7fffffff) << 2);
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != local_6a0);
  }
  return;
}



// FUNCTION 144fb4db0 FUN_144fb4db0 body=1911 status=ok
// SIG undefined FUN_144fb4db0(void)

void FUN_144fb4db0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  float *pfVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  undefined1 (*pauVar21) [16];
  float *pfVar22;
  uint uVar23;
  int **ppiVar24;
  longlong lVar25;
  int iVar26;
  longlong *plVar27;
  int iVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int local_res8;
  int local_res10;
  longlong local_6f8;
  undefined1 local_6c0 [4];
  undefined1 local_6bc [4];
  undefined1 local_6b8 [8];
  undefined1 (*local_6b0) [16];
  undefined1 (*local_6a8) [16];
  uint *local_6a0;
  longlong local_698;
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 *local_668;
  int local_660;
  uint local_65c;
  undefined1 local_658 [512];
  int *local_458;
  int local_450;
  uint local_44c;
  int local_448 [258];
  
  lVar9 = *param_1;
  local_698 = param_1[2];
  puVar14 = (uint *)*param_2;
  local_6a0 = (uint *)param_2[1];
  if (puVar14 != local_6a0) {
    do {
      plVar27 = param_1 + 4;
      uVar7 = *puVar14;
      uVar29 = (ulonglong)(int)uVar7;
      local_450 = 0;
      local_6a8 = (undefined1 (*) [16])(uVar29 * 0x50 + local_698);
      auVar3 = local_6a8[2];
      pauVar21 = local_6a8 + 2;
      auVar4 = local_6a8[3];
      auVar5 = *local_6a8;
      auVar6 = local_6a8[1];
      auVar10._4_4_ = -(uint)(auVar5._4_4_ <= auVar4._4_4_ && auVar3._4_4_ <= auVar6._4_4_);
      auVar10._0_4_ = -(uint)(auVar5._0_4_ <= auVar4._0_4_ && auVar3._0_4_ <= auVar6._0_4_);
      auVar10._8_4_ = -(uint)(auVar5._8_4_ <= auVar4._8_4_ && auVar3._8_4_ <= auVar6._8_4_);
      auVar10._12_4_ = -(uint)(auVar5._12_4_ <= auVar4._12_4_ && auVar3._12_4_ <= auVar6._12_4_);
      uVar12 = movmskps((int)puVar14,auVar10);
      local_458 = local_448;
      local_6b0 = pauVar21;
      if (((byte)uVar12 & 7) == 7) {
        local_688 = minps(auVar5,auVar3);
        ppiVar24 = &local_458;
        local_44c = 0x80000100;
        local_678 = maxps(auVar6,auVar4);
        FUN_144fce550(plVar27,local_6c0,local_688);
        piVar16 = local_458 + local_450;
        for (piVar20 = local_458; piVar20 != piVar16; piVar20 = piVar20 + 1) {
          uVar11 = CONCAT44(uVar7,*piVar20);
          pfVar22 = (float *)((longlong)*piVar20 * 0x50 + *param_1);
          pfVar17 = (float *)((longlong)(int)uVar7 * 0x50 + param_1[2]);
          fVar30 = *pfVar17;
          fVar31 = pfVar17[1];
          fVar32 = pfVar17[2];
          fVar33 = pfVar17[3];
          auVar5._4_4_ = -(uint)(fVar31 <= pfVar22[5] && pfVar22[1] <= pfVar17[5]);
          auVar5._0_4_ = -(uint)(fVar30 <= pfVar22[4] && *pfVar22 <= pfVar17[4]);
          auVar5._8_4_ = -(uint)(fVar32 <= pfVar22[6] && pfVar22[2] <= pfVar17[6]);
          auVar5._12_4_ = -(uint)(fVar33 <= pfVar22[7] && pfVar22[3] <= pfVar17[7]);
          uVar23 = movmskps((int)ppiVar24,auVar5);
          ppiVar24 = (int **)(ulonglong)(uVar23 & 7);
          if (*(char *)(pfVar22 + 0x10) != '\0') {
            pfVar22 = pfVar22 + 8;
          }
          if (*(char *)(pfVar17 + 0x10) != '\0') {
            fVar30 = pfVar17[8];
            fVar31 = pfVar17[9];
            fVar32 = pfVar17[10];
            fVar33 = pfVar17[0xb];
            pfVar17 = pfVar17 + 8;
          }
          auVar6._4_4_ = -(uint)(pfVar22[1] <= pfVar17[5] && fVar31 <= pfVar22[5]);
          auVar6._0_4_ = -(uint)(*pfVar22 <= pfVar17[4] && fVar30 <= pfVar22[4]);
          auVar6._8_4_ = -(uint)(pfVar22[2] <= pfVar17[6] && fVar32 <= pfVar22[6]);
          auVar6._12_4_ = -(uint)(pfVar22[3] <= pfVar17[7] && fVar33 <= pfVar22[7]);
          uVar13 = movmskps(uVar7,auVar6);
          if ((uVar23 & 7) == 7) {
            if ((uVar13 & 7) != 7) {
              FUN_144fb6250(param_1,uVar11,param_3);
            }
          }
          else if ((uVar13 & 7) == 7) {
            FUN_144fb6300(param_1,uVar11,param_3);
          }
          FUN_144be90e0(0x4d243d8f);
        }
        local_450 = 0;
        if ((-1 < (int)local_44c) && (local_458 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_458,(ulonglong)(local_44c & 0x7fffffff) << 2);
        }
      }
      else {
        local_668 = local_658;
        local_660 = 0;
        local_44c = 0x80000080;
        local_65c = 0x80000080;
        FUN_144fce550(plVar27,local_6bc,local_6a8,&local_458);
        FUN_144fce550(plVar27,local_6b8,pauVar21);
        if (1 < local_450) {
          FUN_144fb6950(local_458,0,local_450 + -1);
        }
        if (1 < local_660) {
          FUN_144fb6950(local_668);
        }
        iVar26 = 0;
        iVar28 = 0;
        local_res10 = 0;
        lVar25 = 0;
        local_res8 = 0;
        local_6f8 = 0;
        if (0 < local_450) {
          do {
            uVar23 = (uint)uVar29;
            if (local_660 <= iVar28) {
              if (iVar26 < local_450) {
                lVar25 = lVar25 * 4;
                do {
                  iVar28 = 0;
                  lVar18 = 0;
                  if (0 < (int)param_1[0xd]) {
                    piVar16 = (int *)param_1[0xc];
                    do {
                      if ((*piVar16 == *(int *)((longlong)local_458 + lVar25)) &&
                         (piVar16[1] == uVar23)) {
                        if (iVar28 != -1) {
                          uVar13 = *(uint *)(param_1 + 0xd);
                          iVar19 = uVar13 - 1;
                          *(int *)(param_1 + 0xd) = iVar19;
                          if (iVar19 != iVar28) {
                            puVar2 = (undefined8 *)(param_1[0xc] + ((ulonglong)uVar13 - 1) * 8);
                            puVar1 = (undefined8 *)(param_1[0xc] + lVar18 * 8);
                            if ((puVar1 != puVar2) && (puVar1 != (undefined8 *)0x0)) {
                              *puVar1 = *puVar2;
                            }
                          }
                          FUN_144fb2700(*param_3,iVar28);
                          FUN_144fb2910(*param_3);
                        }
                        break;
                      }
                      iVar28 = iVar28 + 1;
                      lVar18 = lVar18 + 1;
                      piVar16 = piVar16 + 2;
                    } while (lVar18 < (int)param_1[0xd]);
                  }
                  iVar26 = iVar26 + 1;
                  lVar25 = lVar25 + 4;
                  iVar28 = local_res8;
                } while (iVar26 < local_450);
              }
              break;
            }
            uVar13 = local_458[lVar25];
            uVar8 = *(uint *)(local_668 + local_6f8 * 4);
            if (uVar13 < uVar8) {
              iVar19 = 0;
              lVar18 = 0;
              if (0 < (int)param_1[0xd]) {
                puVar15 = (uint *)param_1[0xc];
                do {
                  if ((*puVar15 == uVar13) && (puVar15[1] == uVar23)) {
                    iVar28 = local_res8;
                    if (iVar19 != -1) {
                      uVar23 = *(uint *)(param_1 + 0xd);
                      iVar28 = uVar23 - 1;
                      *(int *)(param_1 + 0xd) = iVar28;
                      if (iVar28 != iVar19) {
                        puVar2 = (undefined8 *)(param_1[0xc] + ((ulonglong)uVar23 - 1) * 8);
                        puVar1 = (undefined8 *)(param_1[0xc] + lVar18 * 8);
                        if ((puVar1 != puVar2) && (puVar1 != (undefined8 *)0x0)) {
                          *puVar1 = *puVar2;
                        }
                      }
                      FUN_144fb2700(*param_3,iVar19);
                      FUN_144fb2910(*param_3,iVar19);
                      iVar28 = local_res8;
                    }
                    break;
                  }
                  iVar19 = iVar19 + 1;
                  lVar18 = lVar18 + 1;
                  puVar15 = puVar15 + 2;
                  iVar28 = local_res8;
                } while (lVar18 < (int)param_1[0xd]);
              }
LAB_144fb527f:
              iVar26 = iVar26 + 1;
              lVar25 = lVar25 + 1;
              local_res10 = iVar26;
            }
            else {
              if (uVar13 <= uVar8) {
                FUN_144fb61a0(param_1,CONCAT44(uVar23,uVar13),param_3);
                local_res8 = local_res8 + 1;
                local_6f8 = local_6f8 + 1;
                iVar28 = local_res8;
                goto LAB_144fb527f;
              }
              pfVar17 = (float *)((longlong)(int)uVar8 * 0x50 + lVar9);
              auVar3._4_4_ = -(uint)(pfVar17[1] <= *(float *)(pauVar21[1] + 4) &&
                                    *(float *)(*pauVar21 + 4) <= pfVar17[5]);
              auVar3._0_4_ = -(uint)(*pfVar17 <= *(float *)pauVar21[1] &&
                                    *(float *)*pauVar21 <= pfVar17[4]);
              auVar3._8_4_ = -(uint)(pfVar17[2] <= *(float *)(pauVar21[1] + 8) &&
                                    *(float *)(*pauVar21 + 8) <= pfVar17[6]);
              auVar3._12_4_ =
                   -(uint)(pfVar17[3] <= *(float *)(pauVar21[1] + 0xc) &&
                          *(float *)(*pauVar21 + 0xc) <= pfVar17[7]);
              uVar12 = movmskps((int)local_668,auVar3);
              if (((byte)uVar12 & 7) == 7) {
                FUN_144fb25e0(*param_3,(longlong)(int)uVar8,uVar29 & 0xffffffff);
                iVar26 = (int)param_1[0xd] + 1;
                if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar26) {
                  FUN_144fb6a20(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar26);
                }
                puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(uVar23,uVar8);
                }
                uVar29 = (ulonglong)uVar7;
                *(int *)(param_1 + 0xd) = iVar26;
                iVar26 = local_res10;
                iVar28 = local_res8;
              }
              iVar28 = iVar28 + 1;
              local_6f8 = local_6f8 + 1;
              local_res8 = iVar28;
            }
            pauVar21 = local_6b0;
          } while (iVar26 < local_450);
        }
        pauVar21 = local_6a8;
        if (iVar28 < local_660) {
          local_6f8 = local_6f8 * 4;
          do {
            iVar26 = *(int *)(local_668 + local_6f8);
            pfVar17 = (float *)((longlong)iVar26 * 0x50 + lVar9);
            auVar4._4_4_ = -(uint)(*(float *)(pauVar21[2] + 4) <= pfVar17[5] &&
                                  pfVar17[1] <= *(float *)(pauVar21[3] + 4));
            auVar4._0_4_ = -(uint)(*(float *)pauVar21[2] <= pfVar17[4] &&
                                  *pfVar17 <= *(float *)pauVar21[3]);
            auVar4._8_4_ = -(uint)(*(float *)(pauVar21[2] + 8) <= pfVar17[6] &&
                                  pfVar17[2] <= *(float *)(pauVar21[3] + 8));
            auVar4._12_4_ =
                 -(uint)(*(float *)(pauVar21[2] + 0xc) <= pfVar17[7] &&
                        pfVar17[3] <= *(float *)(pauVar21[3] + 0xc));
            uVar12 = movmskps((int)local_668,auVar4);
            if (((byte)uVar12 & 7) == 7) {
              FUN_144fb25e0(*param_3,(longlong)iVar26,uVar29 & 0xffffffff);
              iVar28 = (int)param_1[0xd] + 1;
              if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar28) {
                FUN_144fb6a20(param_1 + 0xc,&PTR_vftable_14c6e47a0,(longlong)iVar28);
              }
              puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = CONCAT44((int)uVar29,iVar26);
              }
              *(int *)(param_1 + 0xd) = iVar28;
              iVar28 = local_res8;
            }
            uVar29 = (ulonglong)uVar7;
            iVar28 = iVar28 + 1;
            local_6f8 = local_6f8 + 4;
            local_res8 = iVar28;
          } while (iVar28 < local_660);
        }
        local_660 = 0;
        if ((-1 < (int)local_65c) && (local_668 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_668,(ulonglong)(local_65c & 0x7fffffff) << 2);
        }
        local_668 = (undefined1 *)0x0;
        local_65c = 0x80000000;
        local_450 = 0;
        if ((-1 < (int)local_44c) && (local_458 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_458,(ulonglong)(local_44c & 0x7fffffff) << 2);
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != local_6a0);
  }
  return;
}



// FUNCTION 144fb5530 FUN_144fb5530 body=247 status=ok
// SIG undefined FUN_144fb5530(void)

void FUN_144fb5530(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144fb5630 FUN_144fb5630 body=779 status=ok
// SIG undefined FUN_144fb5630(void)

ulonglong FUN_144fb5630(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  ulonglong local_res20;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = param_3;
  if (param_3 < uVar12 * 2) {
    uVar6 = uVar12 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar12;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x38,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar11 = (undefined4 *)*param_1;
  uVar10 = (ulonglong)uVar1;
  local_res18 = puVar11;
  if (0 < (int)uVar1) {
    puVar8 = puVar11 + 5;
    uVar12 = (ulonglong)uVar1;
    puVar9 = (undefined4 *)(lVar3 + 0x14);
    do {
      if (puVar9 + -5 != (undefined4 *)0x0) {
        puVar9[-5] = *puVar11;
        *(undefined8 *)(puVar9 + -3) = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        FUN_144c52690(puVar8 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar9 + -3) = *(undefined8 *)(puVar8 + -3);
        puVar9[-1] = puVar8[-1];
        *puVar9 = *puVar8;
        *(undefined8 *)(puVar8 + -3) = 0;
        *(undefined8 *)(puVar8 + -1) = 0;
        *(undefined8 *)(puVar9 + 1) = 0;
        puVar9[3] = 0;
        puVar9[4] = 0x80000000;
        FUN_144c52690(puVar8 + 1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar9 + 1) = *(undefined8 *)(puVar8 + 1);
        puVar9[3] = puVar8[3];
        puVar9[4] = puVar8[4];
        *(undefined8 *)(puVar8 + 1) = 0;
        *(undefined8 *)(puVar8 + 3) = 0;
        *(undefined8 *)(puVar9 + 5) = 0;
        puVar9[7] = 0;
        puVar9[8] = 0x80000000;
        FUN_144c90920(puVar8 + 5,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar9 + 5) = *(undefined8 *)(puVar8 + 5);
        puVar9[7] = puVar8[7];
        puVar9[8] = puVar8[8];
        *(undefined8 *)(puVar8 + 5) = 0;
        *(undefined8 *)(puVar8 + 7) = 0;
      }
      puVar9 = puVar9 + 0xe;
      puVar11 = puVar11 + 0xe;
      puVar8 = puVar8 + 0xe;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    puVar5 = local_res18 + 0xd;
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 5);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5[-5] = 0;
      if ((-1 < (int)puVar5[-4]) && (*(longlong *)(puVar5 + -7) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -7),
                   (ulonglong)(puVar5[-4] & 0x7fffffff) << 2);
      }
      puVar5[-7] = 0;
      puVar5[-6] = 0;
      puVar5[-4] = 0x80000000;
      puVar5[-9] = 0;
      if ((-1 < (int)puVar5[-8]) && (*(longlong *)(puVar5 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -0xb),
                   (ulonglong)(puVar5[-8] & 0x7fffffff) << 2);
      }
      puVar5[-0xb] = 0;
      puVar5[-10] = 0;
      puVar5[-8] = 0x80000000;
      puVar5 = puVar5 + 0xe;
      uVar10 = uVar10 - 1;
      param_2 = local_res10;
      uVar12 = local_res20;
    } while (uVar10 != 0);
  }
  uVar10 = uVar6 * 0x38 + 0x38;
  uVar7 = uVar6;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar7 = uVar6 + 1;
    if (uVar10 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar10 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar7 = uVar7 + ((uVar6 - lVar4 >> 1) + lVar4 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x38);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar10;
}



// FUNCTION 144fb5940 FUN_144fb5940 body=514 status=ok
// SIG undefined FUN_144fb5940(void)

void FUN_144fb5940(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar7 * 2;
  uVar9 = param_3;
  if (param_3 < uVar12) {
    uVar9 = uVar12;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x40);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined4 *)*param_1;
  uVar12 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar10 = (undefined8 *)(puVar2 + 0xe);
    uVar13 = (ulonglong)uVar1;
    puVar11 = (undefined4 *)(lVar6 + 0x38);
    puVar14 = puVar2;
    do {
      if (puVar11 + -0xe != (undefined4 *)0x0) {
        puVar11[-0xe] = *puVar14;
        uVar3 = *(undefined4 *)((longlong)puVar10 + -0x24);
        uVar4 = *(undefined4 *)(puVar10 + -4);
        uVar5 = *(undefined4 *)((longlong)puVar10 + -0x1c);
        puVar11[-10] = *(undefined4 *)(puVar10 + -5);
        puVar11[-9] = uVar3;
        puVar11[-8] = uVar4;
        puVar11[-7] = uVar5;
        uVar3 = *(undefined4 *)((longlong)puVar10 + -0x14);
        uVar4 = *(undefined4 *)(puVar10 + -2);
        uVar5 = *(undefined4 *)((longlong)puVar10 + -0xc);
        puVar11[-6] = *(undefined4 *)(puVar10 + -3);
        puVar11[-5] = uVar3;
        puVar11[-4] = uVar4;
        puVar11[-3] = uVar5;
        *(undefined8 *)(puVar11 + -2) = 0;
        *puVar11 = 0;
        puVar11[1] = 0x80000000;
        FUN_144c52690(puVar10 + -1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar11 + -2) = puVar10[-1];
        *puVar11 = *(undefined4 *)puVar10;
        puVar11[1] = *(undefined4 *)((longlong)puVar10 + 4);
        puVar10[-1] = 0;
        *puVar10 = 0;
      }
      puVar11 = puVar11 + 0x10;
      puVar14 = puVar14 + 0x10;
      puVar10 = puVar10 + 8;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    piVar8 = puVar2 + 0xf;
    do {
      piVar8[-1] = 0;
      if ((-1 < *piVar8) && (*(longlong *)(piVar8 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar8 = -0x80000000;
      piVar8[-3] = 0;
      piVar8[-2] = 0;
      piVar8 = piVar8 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar9 * 0x40 + 0x40;
  uVar13 = uVar9;
  if (uVar12 <= local_res8) {
    uVar13 = uVar9 + 1;
    if (uVar12 <= local_res8 - 0x40) {
      uVar13 = uVar13 + ((local_res8 - 0x40) + uVar9 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 6);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar13;
  return;
}



// FUNCTION 144fb5b50 FUN_144fb5b50 body=776 status=ok
// SIG undefined FUN_144fb5b50(void)

void FUN_144fb5b50(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong local_res8;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar6 * 2;
  uVar11 = param_3;
  if (param_3 < uVar10) {
    uVar11 = uVar10;
  }
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res20 = (**(code **)(*param_2 + 0x10))(param_2,uVar11 * 0x100,&local_res18);
  uVar1 = *(uint *)(param_1 + 1);
  local_res8 = (ulonglong)uVar1;
  puVar8 = (undefined4 *)*param_1;
  uVar10 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar7 = (undefined8 *)(local_res20 + 0x40);
    puVar9 = (undefined8 *)(puVar8 + 0x10);
    puVar13 = puVar8;
    do {
      if (puVar7 + -8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar7 + -8) = *puVar13;
        puVar7[-7] = puVar9[-7];
        puVar9[-7] = 0;
        puVar7[-6] = puVar9[-6];
        puVar9[-6] = 0;
        uVar5 = puVar9[-3];
        puVar7[-4] = puVar9[-4];
        puVar7[-3] = uVar5;
        uVar5 = puVar9[-1];
        puVar7[-2] = puVar9[-2];
        puVar7[-1] = uVar5;
        uVar5 = puVar9[1];
        *puVar7 = *puVar9;
        puVar7[1] = uVar5;
        uVar5 = puVar9[3];
        puVar7[2] = puVar9[2];
        puVar7[3] = uVar5;
        uVar5 = puVar9[5];
        puVar7[4] = puVar9[4];
        puVar7[5] = uVar5;
        uVar5 = puVar9[7];
        puVar7[6] = puVar9[6];
        puVar7[7] = uVar5;
        uVar5 = puVar9[9];
        puVar7[8] = puVar9[8];
        puVar7[9] = uVar5;
        uVar5 = puVar9[0xb];
        puVar7[10] = puVar9[10];
        puVar7[0xb] = uVar5;
        uVar5 = puVar9[0xd];
        puVar7[0xc] = puVar9[0xc];
        puVar7[0xd] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x74);
        uVar3 = *(undefined4 *)(puVar9 + 0xf);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x7c);
        *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(puVar9 + 0xe);
        *(undefined4 *)((longlong)puVar7 + 0x74) = uVar2;
        *(undefined4 *)(puVar7 + 0xf) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar4;
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x84);
        uVar3 = *(undefined4 *)(puVar9 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x8c);
        *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
        *(undefined4 *)((longlong)puVar7 + 0x84) = uVar2;
        *(undefined4 *)(puVar7 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x8c) = uVar4;
        *(undefined4 *)(puVar7 + 0x12) = *(undefined4 *)(puVar9 + 0x12);
        puVar7[0x13] = 0;
        *(undefined4 *)(puVar7 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar7 + 0xa4) = 0x80000000;
        FUN_144c97d20(puVar9 + 0x13,&PTR_vftable_14c6e47a0);
        puVar7[0x13] = puVar9[0x13];
        *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(puVar9 + 0x14);
        *(undefined4 *)((longlong)puVar7 + 0xa4) = *(undefined4 *)((longlong)puVar9 + 0xa4);
        puVar9[0x13] = 0;
        puVar9[0x14] = 0;
        puVar7[0x15] = 0;
        *(undefined4 *)(puVar7 + 0x16) = 0;
        *(undefined4 *)((longlong)puVar7 + 0xb4) = 0x80000000;
        FUN_144c97e80(puVar9 + 0x15);
        puVar7[0x15] = puVar9[0x15];
        *(undefined4 *)(puVar7 + 0x16) = *(undefined4 *)(puVar9 + 0x16);
        *(undefined4 *)((longlong)puVar7 + 0xb4) = *(undefined4 *)((longlong)puVar9 + 0xb4);
        puVar9[0x15] = 0;
        puVar9[0x16] = 0;
        *(undefined1 *)(puVar7 + 0x17) = *(undefined1 *)(puVar9 + 0x17);
        *(undefined1 *)((longlong)puVar7 + 0xb9) = *(undefined1 *)((longlong)puVar9 + 0xb9);
        *(undefined1 *)((longlong)puVar7 + 0xba) = *(undefined1 *)((longlong)puVar9 + 0xba);
      }
      puVar7 = puVar7 + 0x20;
      puVar13 = puVar13 + 0x40;
      puVar9 = puVar9 + 0x20;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    do {
      FUN_144fb0760(puVar8);
      puVar8 = puVar8 + 0x40;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar11 * 0x100 + 0x100;
  uVar12 = uVar11;
  if (uVar10 <= local_res18) {
    local_res18 = local_res18 - 0x100;
    uVar12 = uVar11 + 1;
    if (uVar10 <= local_res18) {
      uVar12 = uVar12 + (local_res18 + uVar11 * -0x100 >> 8);
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res20;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 << 8);
    *param_1 = local_res20;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar12;
  return;
}



// FUNCTION 144fb5e60 FUN_144fb5e60 body=404 status=ok
// SIG undefined FUN_144fb5e60(void)

ulonglong FUN_144fb5e60(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  
  uVar14 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar14 * 2;
  uVar11 = param_3;
  if (param_3 < uVar10) {
    uVar11 = uVar10;
  }
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar11 * 0x60,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar9 = (longlong *)*param_1;
  uVar10 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    plVar7 = (longlong *)(lVar6 + 0x40);
    uVar13 = (ulonglong)uVar1;
    plVar8 = plVar9 + 8;
    plVar12 = plVar9;
    do {
      if (plVar7 + -8 != (longlong *)0x0) {
        plVar7[-8] = *plVar12;
        *plVar12 = 0;
        lVar5 = plVar8[-5];
        plVar7[-6] = plVar8[-6];
        plVar7[-5] = lVar5;
        lVar5 = plVar8[-3];
        plVar7[-4] = plVar8[-4];
        plVar7[-3] = lVar5;
        uVar3 = *(undefined4 *)((longlong)plVar8 + -0xc);
        lVar5 = plVar8[-1];
        uVar4 = *(undefined4 *)((longlong)plVar8 + -4);
        *(int *)(plVar7 + -2) = (int)plVar8[-2];
        *(undefined4 *)((longlong)plVar7 + -0xc) = uVar3;
        *(int *)(plVar7 + -1) = (int)lVar5;
        *(undefined4 *)((longlong)plVar7 + -4) = uVar4;
        lVar5 = plVar8[1];
        *plVar7 = *plVar8;
        plVar7[1] = lVar5;
        *(char *)(plVar7 + 2) = (char)plVar8[2];
        *(undefined1 *)((longlong)plVar7 + 0x11) = *(undefined1 *)((longlong)plVar8 + 0x11);
        *(undefined1 *)((longlong)plVar7 + 0x12) = *(undefined1 *)((longlong)plVar8 + 0x12);
      }
      plVar7 = plVar7 + 0xc;
      plVar12 = plVar12 + 0xc;
      plVar8 = plVar8 + 0xc;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    do {
      if (*plVar9 != 0) {
        FUN_144b3f230();
      }
      plVar9 = plVar9 + 0xc;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar11 * 0x60 + 0x60;
  uVar13 = uVar11;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar13 = uVar11 + 1;
    if (uVar10 <= local_res8) {
      uVar11 = local_res8 + uVar11 * -0x60;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar13 = uVar13 + uVar11 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar14 * 0x60);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar13;
  return uVar10;
}


