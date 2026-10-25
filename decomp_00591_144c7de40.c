// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c7de40 FUN_144c7de40 body=445 status=ok
// SIG undefined FUN_144c7de40(void)

void FUN_144c7de40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x2c);
    lVar12 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -3;
      *(undefined8 *)(puVar8 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar8);
      puVar2 = (uint *)(param_2 + -0xc + (longlong)puVar8);
      if (puVar2 != puVar1) {
        puVar10 = *(undefined8 **)puVar2;
        uVar3 = *(uint *)((longlong)puVar8 + param_2 + -4);
        if ((int)(*puVar8 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9cf80(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        puVar6 = *(undefined8 **)puVar1;
        uVar5 = uVar3;
        if ((int)puVar8[-1] < (int)uVar3) {
          uVar5 = puVar8[-1];
        }
        if (puVar6 != puVar10) {
          lVar9 = (longlong)(int)uVar5;
          if ((((int)uVar5 < 1) || (uVar5 < 2)) ||
             ((puVar6 <= puVar10 + (int)(uVar5 - 1) && (puVar10 <= puVar6 + (int)(uVar5 - 1))))) {
            if (0 < lVar9) {
              lVar7 = (longlong)puVar10 - (longlong)puVar6;
              do {
                *puVar6 = *(undefined8 *)(lVar7 + (longlong)puVar6);
                puVar6 = puVar6 + 1;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
          }
          else {
            memcpy(puVar6,puVar10,lVar9 * 8);
          }
        }
        puVar10 = puVar10 + (int)uVar5;
        if (0 < (int)(uVar3 - uVar5)) {
          uVar11 = (ulonglong)(uVar3 - uVar5);
          puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)(int)uVar5 * 8);
          do {
            if (puVar6 != (undefined8 *)0x0) {
              uVar4 = *puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = uVar4;
            }
            uVar11 = uVar11 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar11 != 0);
        }
        puVar8[-1] = uVar3;
      }
      lVar9 = *(longlong *)(param_2 + 4 + (longlong)puVar8);
      if (*(longlong *)(puVar8 + 1) != lVar9) {
        if (lVar9 != 0) {
          FUN_144b3d910();
        }
        lVar9 = *(longlong *)(puVar8 + 1);
        *(undefined8 *)(puVar8 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar8);
        if (lVar9 != 0) {
          FUN_144b3f230();
        }
      }
      puVar8 = puVar8 + 0xe;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c7e000 FUN_144c7e000 body=18 status=ok
// SIG undefined FUN_144c7e000(void)

undefined8 * FUN_144c7e000(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9a50;
  return param_2;
}



// FUNCTION 144c7e020 FUN_144c7e020 body=55 status=ok
// SIG undefined FUN_144c7e020(void)

void FUN_144c7e020(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144ffc3c0(param_1);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7e060 FUN_144c7e060 body=308 status=ok
// SIG undefined FUN_144c7e060(void)

void FUN_144c7e060(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x24);
    lVar11 = (longlong)param_4;
    do {
      if (puVar10 + -9 != (uint *)0x0) {
        puVar10[-7] = 0xffffffff;
        puVar10[-6] = 0;
        puVar10[-5] = 1;
        puVar10[-4] = 0;
        *(undefined ***)(puVar10 + -9) = hkaiReferencedArray<hkaiReferenceFrame>::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        lVar3 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar2) {
          puVar8 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x60);
          *(undefined8 **)(puVar10 + -3) = puVar8;
          puVar9 = (undefined8 *)(lVar3 + 0x20);
          puVar10[-1] = uVar2;
          uVar12 = (ulonglong)uVar2;
          *puVar10 = uVar2;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              uVar7 = puVar9[-3];
              *puVar8 = puVar9[-4];
              puVar8[1] = uVar7;
              uVar7 = puVar9[-1];
              puVar8[2] = puVar9[-2];
              puVar8[3] = uVar7;
              uVar7 = puVar9[1];
              puVar8[4] = *puVar9;
              puVar8[5] = uVar7;
              uVar7 = puVar9[3];
              puVar8[6] = puVar9[2];
              puVar8[7] = uVar7;
              uVar4 = *(undefined4 *)((longlong)puVar9 + 0x24);
              uVar5 = *(undefined4 *)(puVar9 + 5);
              uVar6 = *(undefined4 *)((longlong)puVar9 + 0x2c);
              *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar9 + 4);
              *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
              *(undefined4 *)(puVar8 + 9) = uVar5;
              *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar6;
              puVar1 = puVar9 + 6;
              uVar7 = puVar9[7];
              puVar9 = puVar9 + 0xc;
              puVar8[10] = *puVar1;
              puVar8[0xb] = uVar7;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 0xc;
          } while (uVar12 != 0);
        }
      }
      puVar10 = puVar10 + 10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144c7e1d0 FUN_144c7e1d0 body=351 status=ok
// SIG undefined FUN_144c7e1d0(void)

void FUN_144c7e1d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  
  if (0 < param_4) {
    plVar9 = (longlong *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar10 = (longlong)param_4;
    do {
      plVar6 = (longlong *)(param_2 + -0x10 + (longlong)plVar9);
      plVar1 = plVar9 + -2;
      if (plVar1 != plVar6) {
        lVar4 = *plVar6;
        iVar3 = *(int *)(param_2 + -8 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + -4) & 0x7fffffff) < iVar3) {
          FUN_144c9e4a0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        lVar11 = *plVar1;
        iVar5 = iVar3;
        if ((int)plVar9[-1] < iVar3) {
          iVar5 = (int)plVar9[-1];
        }
        if ((lVar11 != lVar4) && (lVar8 = (longlong)iVar5, 0 < iVar5)) {
          puVar7 = (undefined4 *)(lVar11 + 4);
          lVar11 = lVar4 - lVar11;
          do {
            puVar7[-1] = *(undefined4 *)(lVar11 + -4 + (longlong)puVar7);
            *puVar7 = *(undefined4 *)(lVar11 + (longlong)puVar7);
            *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(lVar11 + 4 + (longlong)puVar7);
            puVar7 = puVar7 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar7 = (undefined4 *)(lVar4 + (longlong)iVar5 * 0xc);
        if (0 < iVar3 - iVar5) {
          uVar13 = (ulonglong)(uint)(iVar3 - iVar5);
          puVar12 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0xc);
          do {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar7;
              puVar12[1] = puVar7[1];
              puVar2 = puVar7 + 2;
              puVar7 = puVar7 + 3;
              *(undefined2 *)(puVar12 + 2) = *(undefined2 *)puVar2;
            }
            uVar13 = uVar13 - 1;
            puVar12 = puVar12 + 3;
          } while (uVar13 != 0);
        }
        *(int *)(plVar9 + -1) = iVar3;
        if ((longlong *)(param_2 + (longlong)plVar9) != plVar9) {
          lVar4 = *plVar9;
          if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
            FUN_144b3ec00(plVar9);
          }
          FUN_140069ea2(plVar9,(longlong *)(param_2 + (longlong)plVar9));
        }
      }
      plVar9 = plVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c7e330 FUN_144c7e330 body=540 status=ok
// SIG undefined FUN_144c7e330(void)

void FUN_144c7e330(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar6) {
    puVar4 = (undefined8 *)(param_1 + 0x70);
    lVar3 = (lVar6 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      if (puVar4 + -0xe != (undefined8 *)0x0) {
        puVar4[-0xd] = 0xffffffff;
        puVar4[-0xc] = 1;
        puVar4[-0xe] = hkaiDefaultAstarCostModifier::vftable;
        *(undefined4 *)(puVar4 + -0xb) = *(undefined4 *)((longlong)puVar4 + param_2 + -0x58);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + -0x54);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + -0x54) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + -0x4c) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + -0x44);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + -0x44) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + -0x3c) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + -0x34);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + -0x34) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + -0x2c) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + -0x24);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + -0x24) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + -0x1c) = uVar2;
      }
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-1] = 0xffffffff;
        *puVar4 = 1;
        puVar4[-2] = hkaiDefaultAstarCostModifier::vftable;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((longlong)puVar4 + param_2 + 8);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xc);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0xc) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x1c);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x1c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x24) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x2c);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x2c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x34) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x3c);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x3c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x44) = uVar2;
      }
      if (puVar4 + 10 != (undefined8 *)0x0) {
        puVar4[0xb] = 0xffffffff;
        puVar4[0xc] = 1;
        puVar4[10] = hkaiDefaultAstarCostModifier::vftable;
        *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(param_2 + 0x68 + (longlong)puVar4);
        puVar1 = (undefined8 *)(param_2 + 0x6c + (longlong)puVar4);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x6c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x74) = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x7c + (longlong)puVar4);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x7c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x84) = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x8c + (longlong)puVar4);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x8c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x94) = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x9c + (longlong)puVar4);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x9c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0xa4) = uVar2;
      }
      if (puVar4 + 0x16 != (undefined8 *)0x0) {
        puVar4[0x17] = 0xffffffff;
        puVar4[0x18] = 1;
        puVar4[0x16] = hkaiDefaultAstarCostModifier::vftable;
        *(undefined4 *)(puVar4 + 0x19) = *(undefined4 *)(param_2 + 200 + (longlong)puVar4);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xcc);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0xcc) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0xd4) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xdc);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0xdc) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0xe4) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xec);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0xec) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0xf4) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xfc);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0xfc) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x104) = uVar2;
      }
      puVar4 = puVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar6) {
    puVar4 = (undefined8 *)(lVar5 * 0x60 + 0x10 + param_1);
    lVar6 = lVar6 - lVar5;
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-1] = 0xffffffff;
        *puVar4 = 1;
        puVar4[-2] = hkaiDefaultAstarCostModifier::vftable;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((longlong)puVar4 + param_2 + 8);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xc);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0xc) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x14) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x1c);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x1c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x24) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x2c);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x2c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x34) = uVar2;
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x3c);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar4 + 0x3c) = *puVar1;
        *(undefined8 *)((longlong)puVar4 + 0x44) = uVar2;
      }
      puVar4 = puVar4 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c7e5b0 FUN_144c7e5b0 body=88 status=ok
// SIG undefined FUN_144c7e5b0(void)

void FUN_144c7e5b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7e610 FUN_144c7e610 body=83 status=ok
// SIG undefined FUN_144c7e610(void)

void FUN_144c7e610(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
        FUN_144c6d6a0(param_1 + 8);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7e670 FUN_144c7e670 body=80 status=ok
// SIG undefined FUN_144c7e670(void)

void FUN_144c7e670(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7e6c0 FUN_144c7e6c0 body=88 status=ok
// SIG undefined FUN_144c7e6c0(void)

void FUN_144c7e6c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x60 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xc;
      plVar2 = plVar2 + -0xc;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7e720 FUN_144c7e720 body=192 status=ok
// SIG undefined FUN_144c7e720(void)

void FUN_144c7e720(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9e9a0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 0x60);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c7e7e0 thunk_FUN_144ca82e0 body=5 status=ok
// SIG undefined thunk_FUN_144ca82e0(void)

undefined1 thunk_FUN_144ca82e0(void)

{
  return 1;
}



// FUNCTION 144c7e7f0 FUN_144c7e7f0 body=63 status=ok
// SIG undefined FUN_144c7e7f0(void)

void FUN_144c7e7f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7e830 FUN_144c7e830 body=74 status=ok
// SIG undefined FUN_144c7e830(void)

void FUN_144c7e830(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7e880 FUN_144c7e880 body=71 status=ok
// SIG undefined FUN_144c7e880(void)

undefined8 * FUN_144c7e880(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 144c7e8d0 FUN_144c7e8d0 body=88 status=ok
// SIG undefined FUN_144c7e8d0(void)

void FUN_144c7e8d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7e9c0 FUN_144c7e9c0 body=97 status=ok
// SIG undefined FUN_144c7e9c0(void)

void FUN_144c7e9c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7ea40 FUN_144c7ea40 body=281 status=ok
// SIG undefined FUN_144c7ea40(void)

void FUN_144c7ea40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0x24);
    lVar5 = (longlong)param_4;
    do {
      if (puVar7 + -9 != (uint *)0x0) {
        puVar7[-7] = 0xffffffff;
        puVar7[-6] = 0;
        puVar7[-5] = 1;
        puVar7[-4] = 0;
        *(undefined ***)(puVar7 + -9) = hkaiIntersectionVolume::vftable;
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar7);
        uVar6 = (ulonglong)uVar1;
        plVar4 = *(longlong **)((param_2 - param_1) + -0xc + (longlong)puVar7);
        if (0 < (int)uVar1) {
          plVar3 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(longlong **)(puVar7 + -3) = plVar3;
          puVar7[-1] = uVar1;
          *puVar7 = uVar1;
          do {
            if (plVar3 != (longlong *)0x0) {
              lVar2 = *plVar4;
              *plVar3 = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              plVar4 = plVar4 + 1;
            }
            uVar6 = uVar6 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar6 != 0);
        }
      }
      puVar7 = puVar7 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c7eb90 FUN_144c7eb90 body=88 status=ok
// SIG undefined FUN_144c7eb90(void)

void FUN_144c7eb90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7ec30 FUN_144c7ec30 body=18 status=ok
// SIG undefined FUN_144c7ec30(void)

undefined8 * FUN_144c7ec30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9ce0;
  return param_2;
}



// FUNCTION 144c7ec50 FUN_144c7ec50 body=80 status=ok
// SIG undefined FUN_144c7ec50(void)

void FUN_144c7ec50(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7ed00 FUN_144c7ed00 body=18 status=ok
// SIG undefined FUN_144c7ed00(void)

undefined8 * FUN_144c7ed00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9d40;
  return param_2;
}



// FUNCTION 144c7ed20 FUN_144c7ed20 body=63 status=ok
// SIG undefined FUN_144c7ed20(void)

void FUN_144c7ed20(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7ed60 FUN_144c7ed60 body=74 status=ok
// SIG undefined FUN_144c7ed60(void)

void FUN_144c7ed60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7edb0 FUN_144c7edb0 body=97 status=ok
// SIG undefined FUN_144c7edb0(void)

void FUN_144c7edb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7ee20 FUN_144c7ee20 body=140 status=ok
// SIG undefined FUN_144c7ee20(void)

void FUN_144c7ee20(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x5c);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0x17) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0x15) = 0xffffffff;
        *(undefined8 *)(puVar1 + -0x13) = 1;
        *(undefined ***)(puVar1 + -0x17) = hkaiCuttingGeometryInfo::vftable;
        FUN_144b3e890(puVar1 + -0x11);
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 0x1a;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7eeb0 FUN_144c7eeb0 body=74 status=ok
// SIG undefined FUN_144c7eeb0(void)

void FUN_144c7eeb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7ef00 FUN_144c7ef00 body=156 status=ok
// SIG undefined FUN_144c7ef00(void)

void FUN_144c7ef00(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 + 0x50;
    uVar2 = (ulonglong)param_4;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = hkaiCuttingGeometryInfo::vftable;
        FUN_144bde880(puVar1 + 1,param_2 + -0x38);
        FUN_144c90410(puVar1 + 8,param_2);
      }
      param_2 = param_2 + 0x68;
      puVar1 = puVar1 + 0xd;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144c7f010 FUN_144c7f010 body=77 status=ok
// SIG undefined FUN_144c7f010(void)

void FUN_144c7f010(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x68 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xd;
      plVar2 = plVar2 + -0xd;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7f060 FUN_144c7f060 body=454 status=ok
// SIG undefined FUN_144c7f060(void)

void FUN_144c7f060(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar13 = (uint *)(param_1 + 0x34);
    lVar14 = (longlong)param_4;
    do {
      if (puVar13 + -0xd != (uint *)0x0) {
        puVar13[-0xb] = 0xffffffff;
        puVar13[-10] = 0;
        puVar13[-9] = 1;
        puVar13[-8] = 0;
        *(undefined ***)(puVar13 + -0xd) = hkaiConvexSilhouetteSet::vftable;
        puVar13[-7] = 0;
        puVar13[-6] = 0;
        puVar13[-5] = 0;
        puVar13[-4] = 0x80000000;
        uVar3 = *(uint *)((longlong)puVar13 + param_2 + -0x14);
        puVar15 = *(undefined4 **)((longlong)puVar13 + param_2 + -0x1c);
        if (0 < (int)uVar3) {
          puVar11 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 4);
          *(undefined4 **)(puVar13 + -7) = puVar11;
          uVar12 = (ulonglong)uVar3;
          puVar13[-5] = uVar3;
          puVar13[-4] = uVar3;
          do {
            if (puVar11 != (undefined4 *)0x0) {
              uVar4 = *puVar15;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              puVar15 = puVar15 + 4;
              *puVar11 = uVar4;
              puVar11[1] = uVar5;
              puVar11[2] = uVar6;
              puVar11[3] = uVar7;
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar12 != 0);
        }
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0x80000000;
        uVar3 = *(uint *)((longlong)puVar13 + param_2 + -4);
        puVar15 = *(undefined4 **)((longlong)puVar13 + param_2 + -0xc);
        if (0 < (int)uVar3) {
          puVar11 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 2);
          *(undefined4 **)(puVar13 + -3) = puVar11;
          puVar13[-1] = uVar3;
          uVar12 = (ulonglong)uVar3;
          *puVar13 = uVar3;
          do {
            if (puVar11 != (undefined4 *)0x0) {
              uVar4 = *puVar15;
              puVar15 = puVar15 + 1;
              *puVar11 = uVar4;
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar12 != 0);
        }
        puVar1 = (undefined8 *)((longlong)puVar13 + param_2 + 0xc);
        uVar10 = puVar1[1];
        *(undefined8 *)(puVar13 + 3) = *puVar1;
        *(undefined8 *)(puVar13 + 5) = uVar10;
        puVar2 = (uint *)(param_2 + 0x1c + (longlong)puVar13);
        uVar3 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar13[7] = *puVar2;
        puVar13[8] = uVar3;
        puVar13[9] = uVar8;
        puVar13[10] = uVar9;
        puVar2 = (uint *)((longlong)puVar13 + param_2 + 0x2c);
        uVar3 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar13[0xb] = *puVar2;
        puVar13[0xc] = uVar3;
        puVar13[0xd] = uVar8;
        puVar13[0xe] = uVar9;
      }
      puVar13 = puVar13 + 0x1c;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 144c7f230 FUN_144c7f230 body=87 status=ok
// SIG undefined FUN_144c7f230(void)

void FUN_144c7f230(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    lVar1 = param_1 + 0x18;
    uVar2 = (ulonglong)param_4;
    do {
      FUN_144bde9a0(lVar1,(param_2 - param_1) + lVar1);
      FUN_144c904b0(lVar1 + 0x38,(param_2 - param_1) + 0x38 + lVar1);
      lVar1 = lVar1 + 0x68;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144c7f290 FUN_144c7f290 body=18 status=ok
// SIG undefined FUN_144c7f290(void)

undefined8 * FUN_144c7f290(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6f6ea0;
  return param_2;
}



// FUNCTION 144c7f2b0 FUN_144c7f2b0 body=77 status=ok
// SIG undefined FUN_144c7f2b0(void)

void FUN_144c7f2b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x70 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xe;
      plVar2 = plVar2 + -0xe;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7f300 FUN_144c7f300 body=159 status=ok
// SIG undefined FUN_144c7f300(void)

undefined8 * FUN_144c7f300(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c7f3a0 FUN_144c7f3a0 body=18 status=ok
// SIG undefined FUN_144c7f3a0(void)

undefined8 * FUN_144c7f3a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ea0c0;
  return param_2;
}



// FUNCTION 144c7f3c0 FUN_144c7f3c0 body=375 status=ok
// SIG undefined FUN_144c7f3c0(void)

void FUN_144c7f3c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x24);
    lVar9 = (longlong)param_4;
    do {
      puVar7 = (uint *)(param_2 + -0xc + (longlong)puVar8);
      puVar2 = puVar8 + -3;
      if (puVar7 != puVar2) {
        uVar4 = *(undefined8 *)puVar7;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar8);
        if ((int)(*puVar8 & 0x7fffffff) < (int)uVar3) {
          FUN_140c3e7da(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar2,uVar4,(longlong)(int)uVar3 << 4);
        puVar8[-1] = uVar3;
      }
      puVar2 = puVar8 + 1;
      puVar7 = (uint *)(param_2 + 4 + (longlong)puVar8);
      if (puVar7 != puVar2) {
        uVar4 = *(undefined8 *)puVar7;
        uVar3 = *(uint *)(param_2 + 0xc + (longlong)puVar8);
        if ((int)(puVar8[4] & 0x7fffffff) < (int)uVar3) {
          FUN_141807e20(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar2,uVar4,(longlong)(int)uVar3 * 4);
        puVar8[3] = uVar3;
      }
      puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + 0x1c);
      uVar4 = puVar1[1];
      *(undefined8 *)(puVar8 + 7) = *puVar1;
      *(undefined8 *)(puVar8 + 9) = uVar4;
      puVar2 = (uint *)(param_2 + 0x2c + (longlong)puVar8);
      uVar3 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[0xb] = *puVar2;
      puVar8[0xc] = uVar3;
      puVar8[0xd] = uVar5;
      puVar8[0xe] = uVar6;
      puVar2 = (uint *)(param_2 + 0x3c + (longlong)puVar8);
      uVar3 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[0xf] = *puVar2;
      puVar8[0x10] = uVar3;
      puVar8[0x11] = uVar5;
      puVar8[0x12] = uVar6;
      puVar8 = puVar8 + 0x1c;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c7f580 FUN_144c7f580 body=80 status=ok
// SIG undefined FUN_144c7f580(void)

void FUN_144c7f580(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7f660 FUN_144c7f660 body=63 status=ok
// SIG undefined FUN_144c7f660(void)

void FUN_144c7f660(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7f6f0 FUN_144c7f6f0 body=97 status=ok
// SIG undefined FUN_144c7f6f0(void)

void FUN_144c7f6f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7f760 FUN_144c7f760 body=74 status=ok
// SIG undefined FUN_144c7f760(void)

void FUN_144c7f760(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7f7b0 FUN_144c7f7b0 body=74 status=ok
// SIG undefined FUN_144c7f7b0(void)

void FUN_144c7f7b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7f830 FUN_144c7f830 body=80 status=ok
// SIG undefined FUN_144c7f830(void)

void FUN_144c7f830(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7f880 FUN_144c7f880 body=58 status=ok
// SIG undefined FUN_144c7f880(void)

void FUN_144c7f880(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c3a640(param_1);
      }
      param_1 = param_1 + 0x110;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7f8c0 FUN_144c7f8c0 body=141 status=ok
// SIG undefined FUN_144c7f8c0(void)

void FUN_144c7f8c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiNavMeshStaticTreeFaceIterator::vftable;
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



// FUNCTION 144c7f950 FUN_144c7f950 body=63 status=ok
// SIG undefined FUN_144c7f950(void)

void FUN_144c7f950(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7f990 FUN_144c7f990 body=3 status=ok
// SIG undefined FUN_144c7f990(void)

void FUN_144c7f990(void)

{
  return;
}



// FUNCTION 144c7f9a0 FUN_144c7f9a0 body=63 status=ok
// SIG undefined FUN_144c7f9a0(void)

void FUN_144c7f9a0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x110 + param_1;
    do {
      FUN_144b431b0(param_1);
      param_1 = param_1 + -0x110;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7fa10 FUN_144c7fa10 body=77 status=ok
// SIG undefined FUN_144c7fa10(void)

void FUN_144c7fa10(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7fa60 FUN_144c7fa60 body=71 status=ok
// SIG undefined FUN_144c7fa60(void)

undefined8 * FUN_144c7fa60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiNavMeshSilhouetteSelector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144c7fab0 FUN_144c7fab0 body=97 status=ok
// SIG undefined FUN_144c7fab0(void)

void FUN_144c7fab0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7fb20 FUN_144c7fb20 body=80 status=ok
// SIG undefined FUN_144c7fb20(void)

void FUN_144c7fb20(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7fb70 FUN_144c7fb70 body=175 status=ok
// SIG undefined FUN_144c7fb70(void)

undefined8 * FUN_144c7fb70(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0xc);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144c7fce0 FUN_144c7fce0 body=18 status=ok
// SIG undefined FUN_144c7fce0(void)

undefined8 * FUN_144c7fce0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ea500;
  return param_2;
}



// FUNCTION 144c7fd00 FUN_144c7fd00 body=74 status=ok
// SIG undefined FUN_144c7fd00(void)

void FUN_144c7fd00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7fd50 FUN_144c7fd50 body=63 status=ok
// SIG undefined FUN_144c7fd50(void)

void FUN_144c7fd50(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7fd90 FUN_144c7fd90 body=80 status=ok
// SIG undefined FUN_144c7fd90(void)

void FUN_144c7fd90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7fde0 FUN_144c7fde0 body=120 status=ok
// SIG undefined FUN_144c7fde0(void)

void FUN_144c7fde0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    puVar2 = (undefined1 *)(param_1 + 0x10);
    do {
      if ((longlong *)(puVar2 + -0x10) != (longlong *)0x0) {
        lVar1 = *(longlong *)(puVar2 + (param_2 - param_1) + -0x10);
        *(longlong *)(puVar2 + -0x10) = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined8 *)(puVar2 + -8) = 0;
        *puVar2 = 0;
        *puVar2 = puVar2[param_2 - param_1];
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c7fea0 FUN_144c7fea0 body=97 status=ok
// SIG undefined FUN_144c7fea0(void)

void FUN_144c7fea0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c7ff10 FUN_144c7ff10 body=63 status=ok
// SIG undefined FUN_144c7ff10(void)

void FUN_144c7ff10(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c7ff50 FUN_144c7ff50 body=105 status=ok
// SIG undefined FUN_144c7ff50(void)

void FUN_144c7ff50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + lVar3 * 0x18);
    do {
      lVar1 = plVar2[1];
      if (lVar1 != 0) {
        FUN_144be5d10(lVar1);
        (*DAT_14c787678)(0,lVar1,0);
      }
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      plVar2 = plVar2 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144c7ffc0 FUN_144c7ffc0 body=97 status=ok
// SIG undefined FUN_144c7ffc0(void)

void FUN_144c7ffc0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c80030 FUN_144c80030 body=132 status=ok
// SIG undefined FUN_144c80030(void)

void FUN_144c80030(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - (longlong)param_2;
    plVar2 = param_2;
    do {
      if (*(longlong *)((longlong)plVar2 + lVar3) != *plVar2) {
        if (*plVar2 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)((longlong)plVar2 + lVar3);
        *(longlong *)((longlong)plVar2 + lVar3) = *plVar2;
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined1 *)(lVar3 + 0x10 + (longlong)plVar2) =
           *(undefined1 *)((longlong)param_2 + (lVar3 - param_1) + 0x10 + (longlong)plVar2);
      plVar2 = plVar2 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c80140 FUN_144c80140 body=74 status=ok
// SIG undefined FUN_144c80140(void)

void FUN_144c80140(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c80190 FUN_144c80190 body=115 status=ok
// SIG undefined FUN_144c80190(void)

void FUN_144c80190(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x38 + 0x28 + param_1;
    do {
      FUN_144bfd1a0(param_1 + 8);
      FUN_144bfd1a0(param_1);
      FUN_144bfd1a0(param_1 + -8);
      FUN_144bfd1a0(param_1 + -0x10);
      FUN_144bfd1a0(param_1 + -0x18);
      FUN_144bfd1a0(param_1 + -0x20);
      FUN_144bfd1a0(param_1 + -0x28);
      param_1 = param_1 + -0x38;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c80210 FUN_144c80210 body=58 status=ok
// SIG undefined FUN_144c80210(void)

void FUN_144c80210(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144ca1a50(param_1);
      }
      param_1 = param_1 + 0xf8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c802e0 FUN_144c802e0 body=94 status=ok
// SIG undefined FUN_144c802e0(void)

void FUN_144c802e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xf8 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1f;
      plVar2 = plVar2 + -0x1f;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c803d0 FUN_144c803d0 body=266 status=ok
// SIG undefined FUN_144c803d0(void)

void FUN_144c803d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint *puVar10;
  
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x24);
    lVar9 = (longlong)param_4;
    do {
      if (puVar10 + -9 != (uint *)0x0) {
        puVar10[-7] = 0xffffffff;
        puVar10[-6] = 0;
        puVar10[-5] = 1;
        puVar10[-4] = 0;
        *(undefined ***)(puVar10 + -9) = hkaiReferencedArray<hkVector4f>::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        puVar8 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar1) {
          puVar6 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
          *(undefined4 **)(puVar10 + -3) = puVar6;
          uVar7 = (ulonglong)uVar1;
          puVar10[-1] = uVar1;
          *puVar10 = uVar1;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar2 = *puVar8;
              uVar3 = puVar8[1];
              uVar4 = puVar8[2];
              uVar5 = puVar8[3];
              puVar8 = puVar8 + 4;
              *puVar6 = uVar2;
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
            }
            uVar7 = uVar7 - 1;
            puVar6 = puVar6 + 4;
          } while (uVar7 != 0);
        }
      }
      puVar10 = puVar10 + 10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c804e0 FUN_144c804e0 body=73 status=ok
// SIG undefined FUN_144c804e0(void)

void FUN_144c804e0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c93960(param_1,param_2 + param_1);
      param_1 = param_1 + 0xf8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c80530 FUN_144c80530 body=74 status=ok
// SIG undefined FUN_144c80530(void)

void FUN_144c80530(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c805b0 FUN_144c805b0 body=88 status=ok
// SIG undefined FUN_144c805b0(void)

void FUN_144c805b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c806a0 FUN_144c806a0 body=80 status=ok
// SIG undefined FUN_144c806a0(void)

void FUN_144c806a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c806f0 FUN_144c806f0 body=156 status=ok
// SIG undefined FUN_144c806f0(void)

void FUN_144c806f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (undefined4 *)(param_1 + 0x30);
    param_2 = param_2 - param_1;
    lVar6 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar5 + -0xc) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -10) = 0xffffffff;
        *(undefined8 *)(puVar5 + -8) = 1;
        *(undefined ***)(puVar5 + -0xc) = hkaiInvertedAabbVolume::vftable;
        puVar1 = (undefined4 *)(param_2 + -0x10 + (longlong)puVar5);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar5[-4] = *puVar1;
        puVar5[-3] = uVar2;
        puVar5[-2] = uVar3;
        puVar5[-1] = uVar4;
        puVar1 = (undefined4 *)(param_2 + (longlong)puVar5);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        FUN_144bde880(puVar5 + 4,param_2 + 0x10 + (longlong)puVar5);
      }
      puVar5 = puVar5 + 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c80790 FUN_144c80790 body=187 status=ok
// SIG undefined FUN_144c80790(void)

void FUN_144c80790(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
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
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c80850 FUN_144c80850 body=63 status=ok
// SIG undefined FUN_144c80850(void)

void FUN_144c80850(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c80890 FUN_144c80890 body=77 status=ok
// SIG undefined FUN_144c80890(void)

void FUN_144c80890(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x80 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x10;
      plVar2 = plVar2 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c80920 FUN_144c80920 body=102 status=ok
// SIG undefined FUN_144c80920(void)

void FUN_144c80920(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_4;
  if (0 < param_4) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        *puVar1 = 1;
        puVar1[-1] = 0xffffffff;
        puVar1[-2] = hkaiPathRequestBase::vftable;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 8 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar1);
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c80990 FUN_144c80990 body=97 status=ok
// SIG undefined FUN_144c80990(void)

void FUN_144c80990(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c80a00 FUN_144c80a00 body=111 status=ok
// SIG undefined FUN_144c80a00(void)

void FUN_144c80a00(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = hkaiInvertedAabbVolume::vftable;
        FUN_144b3e890(puVar1 + 6);
      }
      puVar1 = puVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c80a70 FUN_144c80a70 body=121 status=ok
// SIG undefined FUN_144c80a70(void)

void FUN_144c80a70(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x38);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 != (undefined4 *)&DAT_00000038) {
        puVar1[-10] = 0;
        puVar1[-9] = 0;
        puVar1[-8] = 0;
        puVar1[-7] = 0x5f7ffff0;
        *(undefined8 *)(puVar1 + -6) = 0xffffffffffffffff;
        *(undefined4 **)(puVar1 + -2) = puVar1 + 2;
        *puVar1 = 0;
        puVar1[1] = 0x80000001;
        FUN_144c98970(puVar1 + 0xe);
        puVar1[0x36] = 0;
      }
      puVar1 = puVar1 + 0x48;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c80af0 FUN_144c80af0 body=88 status=ok
// SIG undefined FUN_144c80af0(void)

void FUN_144c80af0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c80b50 FUN_144c80b50 body=88 status=ok
// SIG undefined FUN_144c80b50(void)

void FUN_144c80b50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c80bb0 FUN_144c80bb0 body=18 status=ok
// SIG undefined FUN_144c80bb0(void)

undefined8 * FUN_144c80bb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eaa00;
  return param_2;
}



// FUNCTION 144c80bd0 FUN_144c80bd0 body=366 status=ok
// SIG undefined FUN_144c80bd0(void)

undefined8 * FUN_144c80bd0(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)param_1[3];
  if (puVar3 + (longlong)*(int *)(param_1 + 4) * 0x48 != puVar3) {
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 4) * 0x48 + 0x33;
    do {
      puVar1 = puVar4 + -0x48;
      puVar4[-0x49] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar4 + -0x4b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x4b),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 2);
      }
      puVar4[-0x4b] = 0;
      puVar4[-0x4a] = 0;
      *puVar1 = 0x80000000;
      puVar4[-0x51] = 0;
      if ((-1 < (int)puVar4[-0x50]) && (*(longlong *)(puVar4 + -0x53) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x53),
                   (ulonglong)(puVar4[-0x50] & 0x7fffffff) << 2);
      }
      puVar2 = puVar4 + -0x7b;
      puVar4[-0x53] = 0;
      puVar4[-0x52] = 0;
      puVar4[-0x50] = 0x80000000;
      puVar4 = puVar1;
    } while (puVar2 != puVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x120);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144c80d50 FUN_144c80d50 body=256 status=ok
// SIG undefined FUN_144c80d50(void)

void FUN_144c80d50(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0xf0);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -0x3c) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -0x3a) = 0xffffffff;
        *(undefined8 *)(puVar2 + -0x38) = 1;
        *(undefined ***)(puVar2 + -0x3c) = hkaiNavMeshInstanceCutter::vftable;
        *(undefined8 *)(puVar2 + -0x36) = 0;
        FUN_145005280(puVar2 + -0x32);
        *(undefined8 *)(puVar2 + -0x16) = 0;
        puVar2[-0x14] = 0;
        puVar2[-0x13] = 0x80000000;
        *(undefined8 *)(puVar2 + -0x12) = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0x80000000;
        *(undefined8 *)(puVar2 + -0xe) = 0;
        puVar2[-0xc] = 0;
        puVar2[-0xb] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + -10) = uVar1;
        puVar2[-8] = 0;
        *(undefined8 *)(puVar2 + -6) = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + -2) = uVar1;
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0x80000000;
      }
      puVar2 = puVar2 + 0x42;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c80e90 FUN_144c80e90 body=18 status=ok
// SIG undefined FUN_144c80e90(void)

undefined8 * FUN_144c80e90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eaa60;
  return param_2;
}



// FUNCTION 144c80eb0 FUN_144c80eb0 body=806 status=ok
// SIG undefined FUN_144c80eb0(void)

void FUN_144c80eb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar9 = (uint *)(param_1 + 0xb4);
    lVar10 = (longlong)param_4;
    do {
      if (puVar9 + -0x2d != (uint *)0x0) {
        puVar9[-0x29] = 1;
        puVar9[-0x28] = 0;
        puVar9[-0x2b] = 0xffffffff;
        puVar9[-0x2a] = 0;
        *(undefined ***)(puVar9 + -0x2d) = hkaiNavMeshInstanceCutter::vftable;
        *(undefined8 *)(puVar9 + -0x27) = *(undefined8 *)((longlong)puVar9 + param_2 + -0x9c);
        puVar9[-0x25] = *(uint *)(param_2 + -0x94 + (longlong)puVar9);
        puVar9[-0x23] = *(uint *)(param_2 + -0x8c + (longlong)puVar9);
        lVar4 = *(longlong *)(param_2 + -0x84 + (longlong)puVar9);
        *(longlong *)(puVar9 + -0x21) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        FUN_144c952a0(puVar9 + -0x1f,param_2 + -0x7c + (longlong)puVar9);
        FUN_144c95350(puVar9 + -0x17,param_2 + -0x5c + (longlong)puVar9);
        FUN_144c95430(puVar9 + -0xf,param_2 + -0x3c + (longlong)puVar9);
        puVar9[-7] = 0;
        puVar9[-6] = 0;
        puVar9[-5] = 0;
        puVar9[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar9);
        puVar11 = *(undefined4 **)((longlong)puVar9 + param_2 + -0x1c);
        if (0 < (int)uVar2) {
          puVar8 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar9 + -7) = puVar8;
          puVar9[-5] = uVar2;
          uVar12 = (ulonglong)uVar2;
          puVar9[-4] = uVar2;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              uVar3 = *puVar11;
              puVar11 = puVar11 + 1;
              *puVar8 = uVar3;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar12 != 0);
        }
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar9);
        puVar11 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar9);
        if (0 < (int)uVar2) {
          puVar8 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar9 + -3) = puVar8;
          puVar9[-1] = uVar2;
          uVar12 = (ulonglong)uVar2;
          *puVar9 = uVar2;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              uVar3 = *puVar11;
              puVar11 = puVar11 + 1;
              *puVar8 = uVar3;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar12 != 0);
        }
        FUN_144c90e10(puVar9 + 1,param_2 + 4 + (longlong)puVar9);
        FUN_144c90e10(puVar9 + 9,param_2 + 0x24 + (longlong)puVar9);
        puVar9[0x14] = 0x80000000;
        puVar9[0x11] = 0;
        puVar9[0x12] = 0;
        puVar9[0x13] = 0;
        uVar2 = *(uint *)(param_2 + 0x4c + (longlong)puVar9);
        puVar11 = *(undefined4 **)(param_2 + 0x44 + (longlong)puVar9);
        if (0 < (int)uVar2) {
          puVar8 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
          *(undefined4 **)(puVar9 + 0x11) = puVar8;
          uVar12 = (ulonglong)uVar2;
          puVar9[0x13] = uVar2;
          puVar9[0x14] = uVar2;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              uVar3 = puVar11[1];
              uVar5 = puVar11[2];
              uVar6 = puVar11[3];
              *puVar8 = *puVar11;
              puVar8[1] = uVar3;
              puVar8[2] = uVar5;
              puVar8[3] = uVar6;
              puVar1 = (undefined8 *)(puVar11 + 4);
              uVar7 = *(undefined8 *)(puVar11 + 6);
              puVar11 = puVar11 + 8;
              *(undefined8 *)(puVar8 + 4) = *puVar1;
              *(undefined8 *)(puVar8 + 6) = uVar7;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 8;
          } while (uVar12 != 0);
        }
      }
      puVar9 = puVar9 + 0x42;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c811e0 FUN_144c811e0 body=18 status=ok
// SIG undefined FUN_144c811e0(void)

undefined8 * FUN_144c811e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eab20;
  return param_2;
}



// FUNCTION 144c81250 FUN_144c81250 body=94 status=ok
// SIG undefined FUN_144c81250(void)

void FUN_144c81250(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x108 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x21;
      plVar2 = plVar2 + -0x21;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c812b0 FUN_144c812b0 body=74 status=ok
// SIG undefined FUN_144c812b0(void)

void FUN_144c812b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c81300 FUN_144c81300 body=557 status=ok
// SIG undefined FUN_144c81300(void)

void FUN_144c81300(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0xa4);
    lVar6 = (longlong)param_4;
    do {
      *(undefined8 *)(puVar5 + -0x23) = *(undefined8 *)(param_2 + -0x8c + (longlong)puVar5);
      puVar5[-0x21] = *(uint *)(param_2 + -0x84 + (longlong)puVar5);
      FUN_144c95570(puVar5 + -0x1f,param_2 + -0x7c + (longlong)puVar5);
      puVar4 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144c6c5b0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 4);
        puVar5[-1] = uVar2;
      }
      puVar4 = (uint *)(param_2 + 4 + (longlong)puVar5);
      puVar1 = puVar5 + 1;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar2) {
          FUN_144c6c5b0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 4);
        puVar5[3] = uVar2;
      }
      FUN_144c90f30(puVar5 + 5,param_2 + 0x14 + (longlong)puVar5);
      FUN_144c90f30(puVar5 + 0xd,param_2 + 0x34 + (longlong)puVar5);
      puVar1 = puVar5 + 0x15;
      puVar4 = (uint *)(param_2 + 0x54 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x5c + (longlong)puVar5);
        if ((int)(puVar5[0x18] & 0x7fffffff) < (int)uVar2) {
          FUN_144c9b7d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 << 5);
        puVar5[0x17] = uVar2;
      }
      puVar5 = puVar5 + 0x42;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c81570 FUN_144c81570 body=80 status=ok
// SIG undefined FUN_144c81570(void)

void FUN_144c81570(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c815c0 FUN_144c815c0 body=159 status=ok
// SIG undefined FUN_144c815c0(void)

undefined8 * FUN_144c815c0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 5);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144c81690 FUN_144c81690 body=63 status=ok
// SIG undefined FUN_144c81690(void)

void FUN_144c81690(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c816d0 FUN_144c816d0 body=80 status=ok
// SIG undefined FUN_144c816d0(void)

void FUN_144c816d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c81720 FUN_144c81720 body=97 status=ok
// SIG undefined FUN_144c81720(void)

void FUN_144c81720(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c81790 FUN_144c81790 body=18 status=ok
// SIG undefined FUN_144c81790(void)

undefined8 * FUN_144c81790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6f7c70;
  return param_2;
}



// FUNCTION 144c817f0 FUN_144c817f0 body=63 status=ok
// SIG undefined FUN_144c817f0(void)

void FUN_144c817f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c81830 FUN_144c81830 body=166 status=ok
// SIG undefined FUN_144c81830(void)

void FUN_144c81830(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x58);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -0x16) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -0x14) = 0xffffffff;
        *(undefined8 *)(puVar2 + -0x12) = 1;
        *(undefined ***)(puVar2 + -0x16) = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
        *(undefined8 *)(puVar2 + -0xe) = 0;
        puVar2[-0xc] = 0;
        puVar2[-0xb] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + -10) = uVar1;
        puVar2[-8] = 0;
        *(undefined8 *)(puVar2 + -6) = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + -2) = uVar1;
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c818e0 FUN_144c818e0 body=159 status=ok
// SIG undefined FUN_144c818e0(void)

undefined8 * FUN_144c818e0(undefined8 *param_1,uint param_2)

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
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c819f0 FUN_144c819f0 body=97 status=ok
// SIG undefined FUN_144c819f0(void)

void FUN_144c819f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c81a60 FUN_144c81a60 body=301 status=ok
// SIG undefined FUN_144c81a60(void)

void FUN_144c81a60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    lVar4 = param_1 + 0x30;
    param_2 = param_2 - param_1;
    lVar5 = (longlong)param_4;
    do {
      if ((undefined8 *)(lVar4 + -0x30) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar4 + -0x28) = 0xffffffff;
        *(undefined8 *)(lVar4 + -0x20) = 1;
        *(undefined8 *)(lVar4 + -0x30) = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
        *(undefined4 *)(lVar4 + -0x18) = *(undefined4 *)(param_2 + -0x18 + lVar4);
        *(undefined4 *)(lVar4 + -0x14) = *(undefined4 *)(param_2 + -0x14 + lVar4);
        *(undefined8 *)(lVar4 + -0x10) = 0;
        *(undefined4 *)(lVar4 + -8) = 0;
        *(undefined4 *)(lVar4 + -4) = 0x80000000;
        uVar1 = *(uint *)(param_2 + -8 + lVar4);
        puVar6 = *(undefined8 **)(param_2 + -0x10 + lVar4);
        if (0 < (int)uVar1) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(undefined8 **)(lVar4 + -0x10) = puVar3;
          *(uint *)(lVar4 + -8) = uVar1;
          uVar7 = (ulonglong)uVar1;
          *(uint *)(lVar4 + -4) = uVar1;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              uVar2 = *puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        FUN_140069ea2(lVar4,param_2 + lVar4);
        FUN_144c912e0(lVar4 + 0x10,param_2 + 0x10 + lVar4);
      }
      lVar4 = lVar4 + 0x60;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c81b90 FUN_144c81b90 body=74 status=ok
// SIG undefined FUN_144c81b90(void)

void FUN_144c81b90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c81be0 FUN_144c81be0 body=88 status=ok
// SIG undefined FUN_144c81be0(void)

void FUN_144c81be0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x60 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xc;
      plVar2 = plVar2 + -0xc;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c81c40 FUN_144c81c40 body=406 status=ok
// SIG undefined FUN_144c81c40(void)

void FUN_144c81c40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar7 = (undefined4 *)(param_1 + 0x1c);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(puVar7 + 1);
      puVar7[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)((longlong)puVar7 + param_2);
      puVar6 = (undefined8 *)(param_2 + 4 + (longlong)puVar7);
      if (puVar6 != puVar1) {
        uVar4 = *puVar6;
        iVar3 = *(int *)(param_2 + 0xc + (longlong)puVar7);
        if ((int)(puVar7[4] & 0x7fffffff) < iVar3) {
          FUN_144c9bb20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        FUN_144b3d470(*puVar1,uVar4,(longlong)iVar3 * 8);
        puVar7[3] = iVar3;
      }
      plVar8 = (longlong *)(param_2 + 0x14 + (longlong)puVar7);
      plVar2 = (longlong *)(puVar7 + 5);
      if (plVar8 != plVar2) {
        lVar5 = *plVar2;
        if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
          (*DAT_14c787678)(DAT_14c6e47a8,lVar5,0);
          FUN_144b3ec00(plVar2);
        }
        FUN_140069ea2(plVar2,plVar8);
      }
      puVar6 = (undefined8 *)(param_2 + 0x24 + (longlong)puVar7);
      puVar1 = (undefined8 *)(puVar7 + 9);
      if (puVar1 != puVar6) {
        uVar4 = *puVar6;
        iVar3 = *(int *)(param_2 + 0x2c + (longlong)puVar7);
        if ((int)(puVar7[0xc] & 0x7fffffff) < iVar3) {
          FUN_144c9e0c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        FUN_144b3d470(*puVar1,uVar4);
        puVar7[0xb] = iVar3;
        plVar2 = (longlong *)(puVar7 + 0xd);
        plVar8 = (longlong *)(param_2 + 0x34 + (longlong)puVar7);
        if (plVar8 != plVar2) {
          if ((*plVar2 != 0) && (*(int *)(*plVar2 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8);
            FUN_144b3ec00(plVar2);
          }
          FUN_140069ea2(plVar2,plVar8);
        }
      }
      puVar7 = puVar7 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c81de0 FUN_144c81de0 body=161 status=ok
// SIG undefined FUN_144c81de0(void)

undefined8 * FUN_144c81de0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0xc);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144c81e90 FUN_144c81e90 body=18 status=ok
// SIG undefined FUN_144c81e90(void)

undefined8 * FUN_144c81e90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eae20;
  return param_2;
}



// FUNCTION 144c81eb0 FUN_144c81eb0 body=55 status=ok
// SIG undefined FUN_144c81eb0(void)

void FUN_144c81eb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145016ce0(param_1);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c81f90 FUN_144c81f90 body=187 status=ok
// SIG undefined FUN_144c81f90(void)

void FUN_144c81f90(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined1 *)(param_1 + 1);
    do {
      if (puVar1 + -1 != (undefined1 *)0x0) {
        puVar1[-1] = puVar1[param_2 + -1];
        *puVar1 = puVar1[param_2];
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar1 + param_2 + 3);
        *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar1 + param_2 + 7);
        *(undefined8 *)(puVar1 + 0xf) = *(undefined8 *)(puVar1 + param_2 + 0xf);
        *(undefined8 *)(puVar1 + 0x17) = *(undefined8 *)(puVar1 + param_2 + 0x17);
        *(undefined4 *)(puVar1 + 0x1f) = *(undefined4 *)(puVar1 + param_2 + 0x1f);
        *(undefined4 *)(puVar1 + 0x23) = *(undefined4 *)(puVar1 + param_2 + 0x23);
        *(undefined4 *)(puVar1 + 0x27) = *(undefined4 *)(puVar1 + param_2 + 0x27);
        *(undefined4 *)(puVar1 + 0x2b) = *(undefined4 *)(puVar1 + param_2 + 0x2b);
        *(undefined4 *)(puVar1 + 0x2f) = *(undefined4 *)(puVar1 + param_2 + 0x2f);
        *(undefined4 *)(puVar1 + 0x33) = *(undefined4 *)(puVar1 + param_2 + 0x33);
        puVar1[0x37] = puVar1[param_2 + 0x37];
        FUN_144be3700(puVar1 + 0x3f,puVar1 + param_2 + 0x3f);
      }
      puVar1 = puVar1 + 0x48;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c82050 FUN_144c82050 body=78 status=ok
// SIG undefined FUN_144c82050(void)

void FUN_144c82050(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c4a190(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c820a0 FUN_144c820a0 body=74 status=ok
// SIG undefined FUN_144c820a0(void)

void FUN_144c820a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c820f0 FUN_144c820f0 body=62 status=ok
// SIG undefined FUN_144c820f0(void)

void FUN_144c820f0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x48 + 0x40;
    do {
      FUN_144b49dd0(param_1);
      param_1 = param_1 + -0x48;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c82190 FUN_144c82190 body=94 status=ok
// SIG undefined FUN_144c82190(void)

void FUN_144c82190(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xa0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x14;
      plVar2 = plVar2 + -0x14;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c821f0 FUN_144c821f0 body=186 status=ok
// SIG undefined FUN_144c821f0(void)

void FUN_144c821f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined1 *)(param_1 + 1);
    do {
      puVar1[-1] = puVar1[param_2 + -1];
      *puVar1 = puVar1[param_2];
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar1 + param_2 + 3);
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar1 + param_2 + 7);
      *(undefined8 *)(puVar1 + 0xf) = *(undefined8 *)(puVar1 + param_2 + 0xf);
      *(undefined8 *)(puVar1 + 0x17) = *(undefined8 *)(puVar1 + param_2 + 0x17);
      *(undefined4 *)(puVar1 + 0x1f) = *(undefined4 *)(puVar1 + param_2 + 0x1f);
      *(undefined4 *)(puVar1 + 0x23) = *(undefined4 *)(puVar1 + param_2 + 0x23);
      *(undefined4 *)(puVar1 + 0x27) = *(undefined4 *)(puVar1 + param_2 + 0x27);
      *(undefined4 *)(puVar1 + 0x2b) = *(undefined4 *)(puVar1 + param_2 + 0x2b);
      *(undefined4 *)(puVar1 + 0x2f) = *(undefined4 *)(puVar1 + param_2 + 0x2f);
      *(undefined4 *)(puVar1 + 0x33) = *(undefined4 *)(puVar1 + param_2 + 0x33);
      puVar1[0x37] = puVar1[param_2 + 0x37];
      FUN_144be3810(puVar1 + 0x3f,puVar1 + param_2 + 0x3f);
      puVar1 = puVar1 + 0x48;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c822b0 FUN_144c822b0 body=80 status=ok
// SIG undefined FUN_144c822b0(void)

void FUN_144c822b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c82300 FUN_144c82300 body=80 status=ok
// SIG undefined FUN_144c82300(void)

void FUN_144c82300(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c82350 FUN_144c82350 body=74 status=ok
// SIG undefined FUN_144c82350(void)

void FUN_144c82350(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c823a0 FUN_144c823a0 body=542 status=ok
// SIG undefined FUN_144c823a0(void)

void FUN_144c823a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar12 = (uint *)(param_1 + 0x54);
    lVar13 = (longlong)param_4;
    do {
      if (puVar12 + -0x15 != (uint *)0x0) {
        puVar12[-0x11] = 1;
        puVar12[-0x10] = 0;
        puVar12[-0x13] = 0xffffffff;
        puVar12[-0x12] = 0;
        *(undefined ***)(puVar12 + -0x15) = hkaiVolumeNavigatorStalenessChecker::vftable;
        *(undefined8 *)(puVar12 + -0xf) = *(undefined8 *)(param_2 + -0x3c + (longlong)puVar12);
        puVar1 = (uint *)(param_2 + -0x34 + (longlong)puVar12);
        uVar2 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar12[-0xd] = *puVar1;
        puVar12[-0xc] = uVar2;
        puVar12[-0xb] = uVar5;
        puVar12[-10] = uVar6;
        puVar12[-9] = 0;
        puVar12[-8] = 0;
        puVar12[-7] = 0;
        puVar12[-6] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x1c + (longlong)puVar12);
        puVar14 = *(undefined4 **)(param_2 + -0x24 + (longlong)puVar12);
        if (0 < (int)uVar2) {
          puVar10 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
          *(undefined4 **)(puVar12 + -9) = puVar10;
          uVar11 = (ulonglong)uVar2;
          puVar12[-7] = uVar2;
          puVar12[-6] = uVar2;
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar3 = *puVar14;
              uVar7 = puVar14[1];
              uVar8 = puVar14[2];
              uVar9 = puVar14[3];
              puVar14 = puVar14 + 4;
              *puVar10 = uVar3;
              puVar10[1] = uVar7;
              puVar10[2] = uVar8;
              puVar10[3] = uVar9;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 4;
          } while (uVar11 != 0);
        }
        lVar4 = *(longlong *)(param_2 + -0x14 + (longlong)puVar12);
        *(longlong *)(puVar12 + -5) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        *puVar12 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar12);
        puVar14 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar12);
        if (0 < (int)uVar2) {
          puVar10 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar12 + -3) = puVar10;
          puVar12[-1] = uVar2;
          uVar11 = (ulonglong)uVar2;
          *puVar12 = uVar2;
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar3 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar10 = uVar3;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar11 != 0);
        }
        puVar12[1] = *(uint *)(param_2 + 4 + (longlong)puVar12);
        *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(param_2 + 8 + (longlong)puVar12);
        lVar4 = *(longlong *)((longlong)puVar12 + param_2 + 0xc);
        *(longlong *)(puVar12 + 3) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
      }
      puVar12 = puVar12 + 0x1c;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144c825c0 FUN_144c825c0 body=63 status=ok
// SIG undefined FUN_144c825c0(void)

void FUN_144c825c0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c82600 FUN_144c82600 body=63 status=ok
// SIG undefined FUN_144c82600(void)

void FUN_144c82600(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c82640 FUN_144c82640 body=77 status=ok
// SIG undefined FUN_144c82640(void)

void FUN_144c82640(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x70 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xe;
      plVar2 = plVar2 + -0xe;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c82690 FUN_144c82690 body=97 status=ok
// SIG undefined FUN_144c82690(void)

void FUN_144c82690(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c82700 FUN_144c82700 body=97 status=ok
// SIG undefined FUN_144c82700(void)

void FUN_144c82700(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c82770 FUN_144c82770 body=91 status=ok
// SIG undefined FUN_144c82770(void)

void FUN_144c82770(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c827d0 FUN_144c827d0 body=71 status=ok
// SIG undefined FUN_144c827d0(void)

undefined8 * FUN_144c827d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1018);
  }
  return param_1;
}



// FUNCTION 144c82820 FUN_144c82820 body=58 status=ok
// SIG undefined FUN_144c82820(void)

void FUN_144c82820(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144ffd360(param_1);
      }
      param_1 = param_1 + 0x130;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c82860 FUN_144c82860 body=515 status=ok
// SIG undefined FUN_144c82860(void)

void FUN_144c82860(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar9 = (uint *)(param_1 + 0x3c);
    lVar10 = (longlong)param_4;
    do {
      puVar1 = puVar9 + -3;
      *(undefined8 *)(puVar9 + -9) = *(undefined8 *)(param_2 + -0x24 + (longlong)puVar9);
      puVar2 = (uint *)(param_2 + -0xc + (longlong)puVar9);
      puVar3 = (uint *)(param_2 + -0x1c + (longlong)puVar9);
      uVar4 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar9[-7] = *puVar3;
      puVar9[-6] = uVar4;
      puVar9[-5] = uVar7;
      puVar9[-4] = uVar8;
      if (puVar2 != puVar1) {
        uVar5 = *(undefined8 *)puVar2;
        uVar4 = *(uint *)(param_2 + -4 + (longlong)puVar9);
        if ((int)(*puVar9 & 0x7fffffff) < (int)uVar4) {
          FUN_144c9dda0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar5,(longlong)(int)uVar4 << 4);
        puVar9[-1] = uVar4;
      }
      lVar6 = *(longlong *)(param_2 + 4 + (longlong)puVar9);
      if (*(longlong *)(puVar9 + 1) != lVar6) {
        if (lVar6 != 0) {
          FUN_144b3d910();
        }
        lVar6 = *(longlong *)(puVar9 + 1);
        *(undefined8 *)(puVar9 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar9);
        if (lVar6 != 0) {
          FUN_144b3f230();
        }
      }
      puVar2 = (uint *)((longlong)puVar9 + param_2 + 0xc);
      puVar1 = puVar9 + 3;
      if (puVar2 != puVar1) {
        uVar5 = *(undefined8 *)puVar2;
        uVar4 = *(uint *)(param_2 + 0x14 + (longlong)puVar9);
        if ((int)(puVar9[6] & 0x7fffffff) < (int)uVar4) {
          FUN_144c33880(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar5,(longlong)(int)uVar4 * 4);
        puVar9[5] = uVar4;
      }
      puVar9[7] = *(uint *)(param_2 + 0x1c + (longlong)puVar9);
      LOCK();
      *(undefined1 *)(puVar9 + 8) = *(undefined1 *)(param_2 + 0x20 + (longlong)puVar9);
      UNLOCK();
      lVar6 = *(longlong *)((longlong)puVar9 + param_2 + 0x24);
      if (*(longlong *)(puVar9 + 9) != lVar6) {
        if (lVar6 != 0) {
          FUN_144b3d910();
        }
        lVar6 = *(longlong *)(puVar9 + 9);
        *(undefined8 *)(puVar9 + 9) = *(undefined8 *)((longlong)puVar9 + param_2 + 0x24);
        if (lVar6 != 0) {
          FUN_144b3f230();
        }
      }
      puVar9 = puVar9 + 0x1c;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c82a70 FUN_144c82a70 body=83 status=ok
// SIG undefined FUN_144c82a70(void)

void FUN_144c82a70(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
        FUN_144c6d6a0(param_1 + 8);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c82ad0 FUN_144c82ad0 body=548 status=ok
// SIG undefined FUN_144c82ad0(void)

void FUN_144c82ad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong local_40;
  
  local_40 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar9 = (longlong *)(param_1 + 0x10);
    do {
      plVar5 = (longlong *)(param_2 + -0x10 + (longlong)plVar9);
      plVar1 = plVar9 + -2;
      if (plVar1 != plVar5) {
        lVar3 = *plVar5;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9ee00(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar9[-1]) {
          lVar7 = (longlong)iVar2 * 0x68 + *plVar1;
          lVar10 = (longlong)(int)plVar9[-1] * 0x68 + *plVar1;
          if (lVar10 != lVar7) {
            lVar6 = lVar10 + 0x28;
            do {
              lVar10 = lVar10 + -0x68;
              FUN_144c914e0(lVar6 + -0x48);
              FUN_144c91260(lVar6 + -0x68);
              FUN_144c90d90(lVar6 + -0x88);
              lVar6 = lVar6 + -0x68;
            } while (lVar10 != lVar7);
          }
        }
        lVar7 = *plVar1;
        iVar4 = iVar2;
        if ((int)plVar9[-1] < iVar2) {
          iVar4 = (int)plVar9[-1];
        }
        if ((lVar7 != lVar3) && (lVar10 = (longlong)iVar4, 0 < iVar4)) {
          lVar6 = lVar7 + 8;
          do {
            *(undefined4 *)(lVar6 + -8) = *(undefined4 *)((lVar3 - lVar7) + -8 + lVar6);
            FUN_144c91750(lVar6,(lVar3 - lVar7) + lVar6);
            lVar6 = lVar6 + 0x68;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        puVar13 = (undefined4 *)(lVar3 + (longlong)iVar4 * 0x68);
        if (0 < iVar2 - iVar4) {
          puVar12 = puVar13 + 0x12;
          uVar8 = (ulonglong)(uint)(iVar2 - iVar4);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x68);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar13;
              FUN_144c90e10(puVar11 + 2,puVar12 + -0x10);
              FUN_144c912e0(puVar11 + 10,puVar12 + -8);
              FUN_144c915a0(puVar11 + 0x12,puVar12);
              puVar13 = puVar13 + 0x1a;
              puVar12 = puVar12 + 0x1a;
            }
            uVar8 = uVar8 - 1;
            puVar11 = puVar11 + 0x1a;
          } while (uVar8 != 0);
        }
        *(int *)(plVar9 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar9) != plVar9) {
          lVar3 = *plVar9;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar9);
          }
          FUN_140069ea2(plVar9,(longlong *)(param_2 + (longlong)plVar9));
        }
      }
      plVar9 = plVar9 + 4;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}



// FUNCTION 144c82d00 FUN_144c82d00 body=294 status=ok
// SIG undefined FUN_144c82d00(void)

void FUN_144c82d00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      if (puVar3 + -2 != (undefined8 *)0x0) {
        *puVar3 = 1;
        puVar3[-1] = 0xffffffff;
        puVar3[-2] = hkaiDefaultAstarEdgeFilter::vftable;
        puVar1 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[2] = *puVar1;
        puVar3[3] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x20 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[4] = *puVar1;
        puVar3[5] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x30 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[6] = *puVar1;
        puVar3[7] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x40 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[8] = *puVar1;
        puVar3[9] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x50 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[10] = *puVar1;
        puVar3[0xb] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x60 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0xc] = *puVar1;
        puVar3[0xd] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x70 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0xe] = *puVar1;
        puVar3[0xf] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x80 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x10] = *puVar1;
        puVar3[0x11] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x90 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x12] = *puVar1;
        puVar3[0x13] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0xa0 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x14] = *puVar1;
        puVar3[0x15] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0xb0 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x16] = *puVar1;
        puVar3[0x17] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0xc0 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x18] = *puVar1;
        puVar3[0x19] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0xd0 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x1a] = *puVar1;
        puVar3[0x1b] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0xe0 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x1c] = *puVar1;
        puVar3[0x1d] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0xf0 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x1e] = *puVar1;
        puVar3[0x1f] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x100 + (longlong)puVar3);
        uVar2 = puVar1[1];
        puVar3[0x20] = *puVar1;
        puVar3[0x21] = uVar2;
        *(undefined4 *)(puVar3 + 0x22) = *(undefined4 *)(param_2 + 0x110 + (longlong)puVar3);
      }
      puVar3 = puVar3 + 0x26;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c82fb0 FUN_144c82fb0 body=94 status=ok
// SIG undefined FUN_144c82fb0(void)

void FUN_144c82fb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x130 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x26;
      plVar2 = plVar2 + -0x26;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c83010 FUN_144c83010 body=74 status=ok
// SIG undefined FUN_144c83010(void)

void FUN_144c83010(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c83060 FUN_144c83060 body=237 status=ok
// SIG undefined FUN_144c83060(void)

void FUN_144c83060(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_4) {
    param_2 = param_2 + 0x18;
    param_1 = param_1 + 0x18;
    uVar3 = (ulonglong)param_4;
    do {
      if ((undefined8 *)(param_1 + -0x18) != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + -0x10) = 0xffffffff;
        *(undefined8 *)(param_1 + -8) = 1;
        *(undefined8 *)(param_1 + -0x18) = hkaiClusteringSetupRegistrationManager::vftable;
        lVar2 = 0x20;
        lVar1 = param_1;
        do {
          FUN_144c5edf0(lVar1,(param_2 - param_1) + lVar1,8,0x10,&LAB_144c92e70);
          lVar1 = lVar1 + 0x80;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      param_2 = param_2 + 0x1018;
      param_1 = param_1 + 0x1018;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 144c831a0 FUN_144c831a0 body=94 status=ok
// SIG undefined FUN_144c831a0(void)

void FUN_144c831a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x1018 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x203;
      plVar2 = plVar2 + -0x203;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c83200 FUN_144c83200 body=18 status=ok
// SIG undefined FUN_144c83200(void)

undefined8 * FUN_144c83200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eb390;
  return param_2;
}



// FUNCTION 144c83220 FUN_144c83220 body=77 status=ok
// SIG undefined FUN_144c83220(void)

void FUN_144c83220(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c83450 FUN_144c83450 body=80 status=ok
// SIG undefined FUN_144c83450(void)

void FUN_144c83450(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c834a0 FUN_144c834a0 body=80 status=ok
// SIG undefined FUN_144c834a0(void)

void FUN_144c834a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c834f0 FUN_144c834f0 body=63 status=ok
// SIG undefined FUN_144c834f0(void)

void FUN_144c834f0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c83530 FUN_144c83530 body=87 status=ok
// SIG undefined FUN_144c83530(void)

undefined8 FUN_144c83530(undefined8 param_1,ulonglong param_2)

{
  FUN_144fbc070();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144c83590 FUN_144c83590 body=363 status=ok
// SIG undefined FUN_144c83590(void)

undefined8 * FUN_144c83590(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)param_1[3];
  if (puVar3 + (longlong)*(int *)(param_1 + 4) * 0x24 != puVar3) {
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 4) * 0x24 + 0x1b;
    do {
      puVar2 = puVar4 + -0x24;
      puVar4[-0x25] = 0;
      if ((-1 < (int)*puVar2) && (*(longlong *)(puVar4 + -0x27) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x27),
                   (ulonglong)(*puVar2 & 0x7fffffff) << 2);
      }
      puVar4[-0x27] = 0;
      puVar4[-0x26] = 0;
      *puVar2 = 0x80000000;
      puVar4[-0x2d] = 0;
      if ((-1 < (int)puVar4[-0x2c]) && (*(longlong *)(puVar4 + -0x2f) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x2f),
                   (ulonglong)(puVar4[-0x2c] & 0x7fffffff) << 2);
      }
      puVar1 = puVar4 + -0x3f;
      puVar4[-0x2f] = 0;
      puVar4[-0x2e] = 0;
      puVar4[-0x2c] = 0x80000000;
      puVar4 = puVar2;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x90);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144c83700 FUN_144c83700 body=63 status=ok
// SIG undefined FUN_144c83700(void)

void FUN_144c83700(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c837a0 FUN_144c837a0 body=97 status=ok
// SIG undefined FUN_144c837a0(void)

void FUN_144c837a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c83810 FUN_144c83810 body=97 status=ok
// SIG undefined FUN_144c83810(void)

void FUN_144c83810(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c838c0 FUN_144c838c0 body=264 status=ok
// SIG undefined FUN_144c838c0(void)

void FUN_144c838c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x24);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -9 != (uint *)0x0) {
        puVar6[-7] = 0xffffffff;
        puVar6[-6] = 0;
        puVar6[-5] = 1;
        puVar6[-4] = 0;
        *(undefined ***)(puVar6 + -9) = hkaiReferencedArray<int>::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
          *(undefined4 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined4 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c839d0 FUN_144c839d0 body=18 status=ok
// SIG undefined FUN_144c839d0(void)

undefined8 * FUN_144c839d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eb580;
  return param_2;
}



// FUNCTION 144c839f0 FUN_144c839f0 body=74 status=ok
// SIG undefined FUN_144c839f0(void)

void FUN_144c839f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c83a40 FUN_144c83a40 body=88 status=ok
// SIG undefined FUN_144c83a40(void)

void FUN_144c83a40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c83ad4 FUN_144c83ad4 body=9 status=ok
// SIG undefined FUN_144c83ad4(void)

void FUN_144c83ad4(longlong param_1)

{
  FUN_144c79d90(param_1 + -0x18);
  return;
}



// FUNCTION 144c83ae0 FUN_144c83ae0 body=9 status=ok
// SIG undefined FUN_144c83ae0(void)

void FUN_144c83ae0(longlong param_1)

{
  FUN_144c85c90(param_1 + -0x18);
  return;
}



// FUNCTION 144c83b20 FUN_144c83b20 body=88 status=ok
// SIG undefined FUN_144c83b20(void)

void FUN_144c83b20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c83b80 FUN_144c83b80 body=185 status=ok
// SIG undefined FUN_144c83b80(void)

void FUN_144c83b80(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 4);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c83cb0 FUN_144c83cb0 body=80 status=ok
// SIG undefined FUN_144c83cb0(void)

void FUN_144c83cb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c83d10 FUN_144c83d10 body=80 status=ok
// SIG undefined FUN_144c83d10(void)

void FUN_144c83d10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c83d60 FUN_144c83d60 body=58 status=ok
// SIG undefined FUN_144c83d60(void)

void FUN_144c83d60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c36ab0(param_1);
      }
      param_1 = param_1 + 0x98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c83da0 FUN_144c83da0 body=63 status=ok
// SIG undefined FUN_144c83da0(void)

void FUN_144c83da0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c83de0 FUN_144c83de0 body=74 status=ok
// SIG undefined FUN_144c83de0(void)

void FUN_144c83de0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c83e30 FUN_144c83e30 body=63 status=ok
// SIG undefined FUN_144c83e30(void)

void FUN_144c83e30(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c83e70 FUN_144c83e70 body=94 status=ok
// SIG undefined FUN_144c83e70(void)

void FUN_144c83e70(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x98 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x13;
      plVar2 = plVar2 + -0x13;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c83ed0 FUN_144c83ed0 body=97 status=ok
// SIG undefined FUN_144c83ed0(void)

void FUN_144c83ed0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c83f80 FUN_144c83f80 body=97 status=ok
// SIG undefined FUN_144c83f80(void)

void FUN_144c83f80(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c84020 FUN_144c84020 body=77 status=ok
// SIG undefined FUN_144c84020(void)

void FUN_144c84020(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c84070 FUN_144c84070 body=91 status=ok
// SIG undefined FUN_144c84070(void)

void FUN_144c84070(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c840d0 FUN_144c840d0 body=80 status=ok
// SIG undefined FUN_144c840d0(void)

void FUN_144c840d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c84120 FUN_144c84120 body=74 status=ok
// SIG undefined FUN_144c84120(void)

void FUN_144c84120(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c84170 FUN_144c84170 body=63 status=ok
// SIG undefined FUN_144c84170(void)

void FUN_144c84170(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c841b0 FUN_144c841b0 body=97 status=ok
// SIG undefined FUN_144c841b0(void)

void FUN_144c841b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c84280 FUN_144c84280 body=87 status=ok
// SIG undefined FUN_144c84280(void)

undefined8 FUN_144c84280(undefined8 param_1,ulonglong param_2)

{
  FUN_144faa200();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144c842e0 FUN_144c842e0 body=157 status=ok
// SIG undefined FUN_144c842e0(void)

void FUN_144c842e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiMaterialPainter::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((param_2 - param_1) + 8 + (longlong)puVar2);
        lVar1 = *(longlong *)((param_2 - param_1) + 0x10 + (longlong)puVar2);
        puVar2[2] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
      }
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c84380 FUN_144c84380 body=309 status=ok
// SIG undefined FUN_144c84380(void)

void FUN_144c84380(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar10 = (uint *)(param_1 + 0x3c);
    lVar11 = (longlong)param_4;
    do {
      if (puVar10 + -0xf != (uint *)0x0) {
        puVar10[-0xd] = 0xffffffff;
        puVar10[-0xc] = 0;
        puVar10[-0xb] = 1;
        puVar10[-10] = 0;
        *(undefined ***)(puVar10 + -0xf) = hkaiSmoothPath::Polyline::vftable;
        puVar1 = (uint *)(param_2 + -0x1c + (longlong)puVar10);
        uVar2 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar10[-7] = *puVar1;
        puVar10[-6] = uVar2;
        puVar10[-5] = uVar5;
        puVar10[-4] = uVar6;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar10);
        lVar4 = *(longlong *)(param_2 + -0xc + (longlong)puVar10);
        if (0 < (int)uVar2) {
          puVar8 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
          *(undefined8 **)(puVar10 + -3) = puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x1c);
          puVar10[-1] = uVar2;
          uVar12 = (ulonglong)uVar2;
          *puVar10 = uVar2;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              uVar7 = *(undefined8 *)(puVar9 + -5);
              *puVar8 = *(undefined8 *)(puVar9 + -7);
              puVar8[1] = uVar7;
              puVar8[2] = *(undefined8 *)(puVar9 + -3);
              *(undefined4 *)(puVar8 + 3) = puVar9[-1];
              uVar3 = *puVar9;
              puVar9 = puVar9 + 8;
              *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 4;
          } while (uVar12 != 0);
        }
      }
      puVar10 = puVar10 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144c844c0 FUN_144c844c0 body=74 status=ok
// SIG undefined FUN_144c844c0(void)

void FUN_144c844c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c84510 FUN_144c84510 body=88 status=ok
// SIG undefined FUN_144c84510(void)

void FUN_144c84510(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c84570 FUN_144c84570 body=58 status=ok
// SIG undefined FUN_144c84570(void)

void FUN_144c84570(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144faf5c0(param_1);
      }
      param_1 = param_1 + 0x160;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c845b0 FUN_144c845b0 body=77 status=ok
// SIG undefined FUN_144c845b0(void)

void FUN_144c845b0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c84600 FUN_144c84600 body=18 status=ok
// SIG undefined FUN_144c84600(void)

undefined8 * FUN_144c84600(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eba00;
  return param_2;
}



// FUNCTION 144c84650 FUN_144c84650 body=130 status=ok
// SIG undefined FUN_144c84650(void)

void FUN_144c84650(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    plVar2 = (longlong *)(param_2 + 0x20);
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - param_2;
    do {
      *(undefined4 *)((longlong)plVar2 + lVar3 + -8) =
           *(undefined4 *)((longlong)plVar2 + (param_2 - param_1) + lVar3 + -8);
      if (*(longlong *)(lVar3 + (longlong)plVar2) != *plVar2) {
        if (*plVar2 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)(lVar3 + (longlong)plVar2);
        *(longlong *)(lVar3 + (longlong)plVar2) = *plVar2;
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2 = plVar2 + 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c84710 FUN_144c84710 body=862 status=ok
// SIG undefined FUN_144c84710(void)

void FUN_144c84710(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  
  if (0 < param_4) {
    puVar16 = (uint *)(param_1 + 0xac);
    param_2 = param_2 - param_1;
    lVar19 = (longlong)param_4;
    do {
      if (puVar16 + -0x2b != (uint *)0x0) {
        *(undefined ***)(puVar16 + -0x2b) = hkaiOverlapManager::vftable;
        puVar16[-0x29] = 0xffffffff;
        puVar16[-0x28] = 0;
        puVar16[-0x27] = 1;
        puVar16[-0x26] = 0;
        *(undefined ***)(puVar16 + -0x25) = hkaiOverlapManager::vftable;
        FUN_144c96f00(puVar16 + -0x23,param_2 + -0x8c + (longlong)puVar16);
        puVar16[-7] = 0;
        puVar16[-6] = 0;
        puVar16[-5] = 0;
        puVar16[-4] = 0x80000000;
        uVar4 = *(uint *)(param_2 + -0x14 + (longlong)puVar16);
        uVar15 = (ulonglong)uVar4;
        lVar17 = *(longlong *)(param_2 + -0x1c + (longlong)puVar16);
        if (0 < (int)uVar4) {
          lVar11 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 8);
          *(longlong *)(puVar16 + -7) = lVar11;
          puVar16[-5] = uVar4;
          puVar16[-4] = uVar4;
          do {
            if (lVar11 != 0) {
              FUN_144c973f0(lVar11,lVar17);
              lVar17 = lVar17 + 0x100;
            }
            uVar15 = uVar15 - 1;
            lVar11 = lVar11 + 0x100;
          } while (uVar15 != 0);
        }
        puVar16[-3] = 0;
        puVar16[-2] = 0;
        puVar16[-1] = 0;
        *puVar16 = 0x80000000;
        uVar4 = *(uint *)(param_2 + -4 + (longlong)puVar16);
        lVar17 = *(longlong *)(param_2 + -0xc + (longlong)puVar16);
        if (0 < (int)uVar4) {
          plVar12 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 * 0x60);
          *(longlong **)(puVar16 + -3) = plVar12;
          plVar18 = (longlong *)(lVar17 + 0x40);
          puVar16[-1] = uVar4;
          uVar15 = (ulonglong)uVar4;
          *puVar16 = uVar4;
          do {
            if (plVar12 != (longlong *)0x0) {
              lVar17 = plVar18[-8];
              *plVar12 = lVar17;
              if (lVar17 != 0) {
                FUN_144b3d910();
              }
              lVar17 = plVar18[-5];
              plVar12[2] = plVar18[-6];
              plVar12[3] = lVar17;
              lVar17 = plVar18[-3];
              plVar12[4] = plVar18[-4];
              plVar12[5] = lVar17;
              uVar5 = *(undefined4 *)((longlong)plVar18 + -0xc);
              lVar17 = plVar18[-1];
              uVar6 = *(undefined4 *)((longlong)plVar18 + -4);
              *(int *)(plVar12 + 6) = (int)plVar18[-2];
              *(undefined4 *)((longlong)plVar12 + 0x34) = uVar5;
              *(int *)(plVar12 + 7) = (int)lVar17;
              *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar6;
              lVar17 = plVar18[1];
              plVar12[8] = *plVar18;
              plVar12[9] = lVar17;
              *(char *)(plVar12 + 10) = (char)plVar18[2];
              *(undefined1 *)((longlong)plVar12 + 0x51) = *(undefined1 *)((longlong)plVar18 + 0x11);
              puVar1 = (undefined1 *)((longlong)plVar18 + 0x12);
              plVar18 = plVar18 + 0xc;
              *(undefined1 *)((longlong)plVar12 + 0x52) = *puVar1;
            }
            uVar15 = uVar15 - 1;
            plVar12 = plVar12 + 0xc;
          } while (uVar15 != 0);
        }
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[4] = 0x80000000;
        uVar4 = *(uint *)(param_2 + 0xc + (longlong)puVar16);
        uVar15 = (ulonglong)uVar4;
        lVar17 = *(longlong *)(param_2 + 4 + (longlong)puVar16);
        if (0 < (int)uVar4) {
          puVar13 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 * 0x60);
          *(undefined4 **)(puVar16 + 1) = puVar13;
          puVar16[3] = uVar4;
          puVar14 = (undefined4 *)(lVar17 + 0x40);
          puVar16[4] = uVar4;
          do {
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = puVar14[-0x10];
              puVar13[1] = puVar14[-0xf];
              *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(puVar14 + -0xe);
              uVar10 = *(undefined8 *)(puVar14 + -10);
              *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar14 + -0xc);
              *(undefined8 *)(puVar13 + 6) = uVar10;
              uVar10 = *(undefined8 *)(puVar14 + -6);
              *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(puVar14 + -8);
              *(undefined8 *)(puVar13 + 10) = uVar10;
              uVar5 = puVar14[-3];
              uVar6 = puVar14[-2];
              uVar7 = puVar14[-1];
              puVar13[0xc] = puVar14[-4];
              puVar13[0xd] = uVar5;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              uVar5 = puVar14[1];
              uVar6 = puVar14[2];
              uVar7 = puVar14[3];
              puVar13[0x10] = *puVar14;
              puVar13[0x11] = uVar5;
              puVar13[0x12] = uVar6;
              puVar13[0x13] = uVar7;
              lVar17 = *(longlong *)(puVar14 + 4);
              *(longlong *)(puVar13 + 0x14) = lVar17;
              if (lVar17 != 0) {
                FUN_144b3d910();
              }
              puVar14 = puVar14 + 0x18;
            }
            uVar15 = uVar15 - 1;
            puVar13 = puVar13 + 0x18;
          } while (uVar15 != 0);
        }
        puVar16[5] = *(uint *)(param_2 + 0x14 + (longlong)puVar16);
        *(undefined1 *)(puVar16 + 6) = *(undefined1 *)(param_2 + 0x18 + (longlong)puVar16);
        puVar2 = (undefined8 *)(param_2 + 0x1c + (longlong)puVar16);
        uVar10 = puVar2[1];
        *(undefined8 *)(puVar16 + 7) = *puVar2;
        *(undefined8 *)(puVar16 + 9) = uVar10;
        puVar2 = (undefined8 *)(param_2 + 0x2c + (longlong)puVar16);
        uVar10 = puVar2[1];
        *(undefined8 *)(puVar16 + 0xb) = *puVar2;
        *(undefined8 *)(puVar16 + 0xd) = uVar10;
        puVar2 = (undefined8 *)(param_2 + 0x3c + (longlong)puVar16);
        uVar10 = puVar2[1];
        *(undefined8 *)(puVar16 + 0xf) = *puVar2;
        *(undefined8 *)(puVar16 + 0x11) = uVar10;
        puVar2 = (undefined8 *)(param_2 + 0x4c + (longlong)puVar16);
        uVar10 = puVar2[1];
        *(undefined8 *)(puVar16 + 0x13) = *puVar2;
        *(undefined8 *)(puVar16 + 0x15) = uVar10;
        puVar2 = (undefined8 *)(param_2 + 0x5c + (longlong)puVar16);
        uVar10 = puVar2[1];
        *(undefined8 *)(puVar16 + 0x17) = *puVar2;
        *(undefined8 *)(puVar16 + 0x19) = uVar10;
        puVar2 = (undefined8 *)(param_2 + 0x6c + (longlong)puVar16);
        uVar10 = puVar2[1];
        *(undefined8 *)(puVar16 + 0x1b) = *puVar2;
        *(undefined8 *)(puVar16 + 0x1d) = uVar10;
        puVar3 = (uint *)(param_2 + 0x7c + (longlong)puVar16);
        uVar4 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar16[0x1f] = *puVar3;
        puVar16[0x20] = uVar4;
        puVar16[0x21] = uVar8;
        puVar16[0x22] = uVar9;
        puVar3 = (uint *)(param_2 + 0x8c + (longlong)puVar16);
        uVar4 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar16[0x23] = *puVar3;
        puVar16[0x24] = uVar4;
        puVar16[0x25] = uVar8;
        puVar16[0x26] = uVar9;
        puVar16[0x27] = *(uint *)(param_2 + 0x9c + (longlong)puVar16);
        puVar16[0x28] = *(uint *)(param_2 + 0xa0 + (longlong)puVar16);
        puVar16[0x29] = *(uint *)(param_2 + 0xa4 + (longlong)puVar16);
        lVar17 = *(longlong *)(param_2 + 0xac + (longlong)puVar16);
        *(longlong *)(puVar16 + 0x2b) = lVar17;
        if (lVar17 != 0) {
          FUN_144b3d910();
        }
      }
      puVar16 = puVar16 + 0x58;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return;
}



// FUNCTION 144c84a70 FUN_144c84a70 body=217 status=ok
// SIG undefined FUN_144c84a70(void)

void FUN_144c84a70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x3c);
    lVar9 = (longlong)param_4;
    do {
      puVar2 = (uint *)(param_2 + -0x1c + (longlong)puVar8);
      uVar4 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (uint *)((longlong)puVar8 + param_2 + -0xc);
      puVar1 = puVar8 + -3;
      puVar8[-7] = *puVar2;
      puVar8[-6] = uVar4;
      puVar8[-5] = uVar6;
      puVar8[-4] = uVar7;
      if (puVar3 != puVar1) {
        uVar5 = *(undefined8 *)puVar3;
        uVar4 = *(uint *)(param_2 + -4 + (longlong)puVar8);
        if ((int)(*puVar8 & 0x7fffffff) < (int)uVar4) {
          FUN_144c9c770(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar5,(longlong)(int)uVar4 << 5);
        puVar8[-1] = uVar4;
      }
      puVar8 = puVar8 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c84b50 FUN_144c84b50 body=80 status=ok
// SIG undefined FUN_144c84b50(void)

void FUN_144c84b50(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c84ba0 FUN_144c84ba0 body=94 status=ok
// SIG undefined FUN_144c84ba0(void)

void FUN_144c84ba0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x160 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x2c;
      plVar2 = plVar2 + -0x2c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c84c00 FUN_144c84c00 body=80 status=ok
// SIG undefined FUN_144c84c00(void)

void FUN_144c84c00(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c84d00 FUN_144c84d00 body=63 status=ok
// SIG undefined FUN_144c84d00(void)

void FUN_144c84d00(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c84d40 FUN_144c84d40 body=63 status=ok
// SIG undefined FUN_144c84d40(void)

void FUN_144c84d40(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c84d80 FUN_144c84d80 body=73 status=ok
// SIG undefined FUN_144c84d80(void)

void FUN_144c84d80(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c981f0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x160;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c84dd0 FUN_144c84dd0 body=266 status=ok
// SIG undefined FUN_144c84dd0(void)

void FUN_144c84dd0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint *puVar10;
  
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x24);
    lVar9 = (longlong)param_4;
    do {
      if (puVar10 + -9 != (uint *)0x0) {
        puVar10[-7] = 0xffffffff;
        puVar10[-6] = 0;
        puVar10[-5] = 1;
        puVar10[-4] = 0;
        *(undefined ***)(puVar10 + -9) = hkaiReferencedArray<hkaiUpVectorFilter>::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        puVar8 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar1) {
          puVar6 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
          *(undefined4 **)(puVar10 + -3) = puVar6;
          uVar7 = (ulonglong)uVar1;
          puVar10[-1] = uVar1;
          *puVar10 = uVar1;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar2 = *puVar8;
              uVar3 = puVar8[1];
              uVar4 = puVar8[2];
              uVar5 = puVar8[3];
              puVar8 = puVar8 + 4;
              *puVar6 = uVar2;
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
            }
            uVar7 = uVar7 - 1;
            puVar6 = puVar6 + 4;
          } while (uVar7 != 0);
        }
      }
      puVar10 = puVar10 + 10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c84ee0 FUN_144c84ee0 body=97 status=ok
// SIG undefined FUN_144c84ee0(void)

void FUN_144c84ee0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c84f50 FUN_144c84f50 body=91 status=ok
// SIG undefined FUN_144c84f50(void)

void FUN_144c84f50(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c84fb0 FUN_144c84fb0 body=97 status=ok
// SIG undefined FUN_144c84fb0(void)

void FUN_144c84fb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c85020 FUN_144c85020 body=88 status=ok
// SIG undefined FUN_144c85020(void)

void FUN_144c85020(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c85080 FUN_144c85080 body=74 status=ok
// SIG undefined FUN_144c85080(void)

void FUN_144c85080(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c850d0 FUN_144c850d0 body=285 status=ok
// SIG undefined FUN_144c850d0(void)

void FUN_144c850d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_4;
  lVar3 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x30);
    lVar1 = (lVar4 - 4U >> 2) + 1;
    lVar3 = lVar1 * 4;
    do {
      if (puVar2 + -6 != (undefined8 *)0x0) {
        puVar2[-5] = 0xffffffff;
        puVar2[-4] = 1;
        puVar2[-6] = hkaiSmoothPath::Modifiers::UniformCpDistributionModifier::vftable;
        *(undefined4 *)(puVar2 + -3) = *(undefined4 *)(param_2 + -0x18 + (longlong)puVar2);
      }
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiSmoothPath::Modifiers::UniformCpDistributionModifier::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
      }
      if (puVar2 + 2 != (undefined8 *)0x0) {
        puVar2[3] = 0xffffffff;
        puVar2[4] = 1;
        puVar2[2] = hkaiSmoothPath::Modifiers::UniformCpDistributionModifier::vftable;
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
      }
      if (puVar2 + 6 != (undefined8 *)0x0) {
        puVar2[7] = 0xffffffff;
        puVar2[8] = 1;
        puVar2[6] = hkaiSmoothPath::Modifiers::UniformCpDistributionModifier::vftable;
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar3 < lVar4) {
    puVar2 = (undefined8 *)(lVar3 * 0x20 + 0x10 + param_1);
    lVar4 = lVar4 - lVar3;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiSmoothPath::Modifiers::UniformCpDistributionModifier::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c851f0 FUN_144c851f0 body=267 status=ok
// SIG undefined FUN_144c851f0(void)

void FUN_144c851f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_res18;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x9c);
    lVar1 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -0x27) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -0x25) = 0xffffffff;
        *(undefined8 *)(puVar2 + -0x23) = 1;
        *(undefined ***)(puVar2 + -0x27) = hkaiOverlapManager::vftable;
        *(undefined ***)(puVar2 + -0x21) = hkaiOverlapManager::vftable;
        FUN_144c96e90(puVar2 + -0x1f,local_res18);
        *(undefined8 *)(puVar2 + -3) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        *(undefined8 *)(puVar2 + 1) = 0;
        puVar2[3] = 0;
        puVar2[4] = 0x80000000;
        *(undefined8 *)(puVar2 + 5) = 0;
        puVar2[7] = 0;
        puVar2[8] = 0x80000000;
        puVar2[9] = 0;
        *(undefined1 *)(puVar2 + 10) = 0;
        puVar2[0x2b] = 0;
        puVar2[0x2c] = 0x3a83126f;
        puVar2[0x2d] = 0xffffffff;
        *(undefined8 *)(puVar2 + 0x2f) = 0;
      }
      puVar2 = puVar2 + 0x58;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144c85300 FUN_144c85300 body=271 status=ok
// SIG undefined FUN_144c85300(void)

void FUN_144c85300(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar7 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar1 != puVar7) {
        uVar3 = *(undefined8 *)puVar7;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144c9e0c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0xc);
        puVar5[-1] = uVar2;
        puVar1 = puVar5 + 1;
        puVar7 = (uint *)(param_2 + 4 + (longlong)puVar5);
        if (puVar7 != puVar1) {
          lVar4 = *(longlong *)puVar1;
          if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
            FUN_144b3ec00(puVar1);
          }
          FUN_140069ea2(puVar1,puVar7);
        }
      }
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c85410 FUN_144c85410 body=285 status=ok
// SIG undefined FUN_144c85410(void)

void FUN_144c85410(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  
  if (0 < param_4) {
    plVar13 = (longlong *)(param_1 + 0x18);
    lVar14 = (longlong)param_4;
    do {
      plVar8 = (longlong *)((param_2 - param_1) + (longlong)plVar13);
      if (plVar8 != plVar13) {
        puVar15 = (undefined4 *)*plVar8;
        iVar2 = *(int *)((param_2 - param_1) + 8 + (longlong)plVar13);
        if ((int)(*(uint *)((longlong)plVar13 + 0xc) & 0x7fffffff) < iVar2) {
          FUN_144c9ea50(plVar13,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        puVar9 = (undefined4 *)*plVar13;
        iVar3 = iVar2;
        if ((int)plVar13[1] < iVar2) {
          iVar3 = (int)plVar13[1];
        }
        if ((puVar9 != puVar15) && (lVar10 = (longlong)iVar3, 0 < iVar3)) {
          lVar12 = (longlong)puVar15 - (longlong)puVar9;
          do {
            puVar1 = (undefined4 *)(lVar12 + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9 = puVar9 + 4;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        puVar15 = puVar15 + (longlong)iVar3 * 4;
        if (0 < iVar2 - iVar3) {
          uVar11 = (ulonglong)(uint)(iVar2 - iVar3);
          puVar9 = (undefined4 *)(*plVar13 + (longlong)iVar3 * 0x10);
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar4 = *puVar15;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              puVar15 = puVar15 + 4;
              *puVar9 = uVar4;
              puVar9[1] = uVar5;
              puVar9[2] = uVar6;
              puVar9[3] = uVar7;
            }
            uVar11 = uVar11 - 1;
            puVar9 = puVar9 + 4;
          } while (uVar11 != 0);
        }
        *(int *)(plVar13 + 1) = iVar2;
      }
      plVar13 = plVar13 + 5;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 144c85530 FUN_144c85530 body=287 status=ok
// SIG undefined FUN_144c85530(void)

void FUN_144c85530(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar6 = (uint *)(param_1 + 0x2c);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -0xb != (uint *)0x0) {
        puVar6[-7] = 1;
        puVar6[-6] = 0;
        puVar6[-9] = 0xffffffff;
        puVar6[-8] = 0;
        *(undefined ***)(puVar6 + -0xb) = hkaiNavigatorManager::vftable;
        *(undefined8 *)(puVar6 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar6);
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar6);
        puVar4 = *(undefined8 **)(param_2 + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(undefined8 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 0xc;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c85650 FUN_144c85650 body=77 status=ok
// SIG undefined FUN_144c85650(void)

void FUN_144c85650(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c856a0 FUN_144c856a0 body=295 status=ok
// SIG undefined FUN_144c856a0(void)

undefined8 * FUN_144c856a0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 2);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_144c96d60(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 144c857d0 FUN_144c857d0 body=88 status=ok
// SIG undefined FUN_144c857d0(void)

void FUN_144c857d0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c85860 FUN_144c85860 body=74 status=ok
// SIG undefined FUN_144c85860(void)

void FUN_144c85860(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c858f0 FUN_144c858f0 body=74 status=ok
// SIG undefined FUN_144c858f0(void)

void FUN_144c858f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c85940 FUN_144c85940 body=382 status=ok
// SIG undefined FUN_144c85940(void)

void FUN_144c85940(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x2c);
    lVar12 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -3;
      *(undefined8 *)(puVar8 + -5) = *(undefined8 *)((longlong)puVar8 + param_2 + -0x14);
      puVar2 = (uint *)(param_2 + -0xc + (longlong)puVar8);
      if (puVar2 != puVar1) {
        puVar10 = *(undefined8 **)puVar2;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar8);
        if ((int)(*puVar8 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9db20(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        puVar6 = *(undefined8 **)puVar1;
        uVar5 = uVar3;
        if ((int)puVar8[-1] < (int)uVar3) {
          uVar5 = puVar8[-1];
        }
        if (puVar6 != puVar10) {
          lVar9 = (longlong)(int)uVar5;
          if ((((int)uVar5 < 1) || (uVar5 < 2)) ||
             ((puVar6 <= puVar10 + (int)(uVar5 - 1) && (puVar10 <= puVar6 + (int)(uVar5 - 1))))) {
            if (0 < lVar9) {
              lVar7 = (longlong)puVar10 - (longlong)puVar6;
              do {
                *puVar6 = *(undefined8 *)(lVar7 + (longlong)puVar6);
                puVar6 = puVar6 + 1;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
          }
          else {
            memcpy(puVar6,puVar10,lVar9 * 8);
          }
        }
        puVar10 = puVar10 + (int)uVar5;
        if (0 < (int)(uVar3 - uVar5)) {
          uVar11 = (ulonglong)(uVar3 - uVar5);
          puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)(int)uVar5 * 8);
          do {
            if (puVar6 != (undefined8 *)0x0) {
              uVar4 = *puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = uVar4;
            }
            uVar11 = uVar11 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar11 != 0);
        }
        puVar8[-1] = uVar3;
      }
      puVar8 = puVar8 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c85ac0 FUN_144c85ac0 body=80 status=ok
// SIG undefined FUN_144c85ac0(void)

void FUN_144c85ac0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c85b30 FUN_144c85b30 body=63 status=ok
// SIG undefined FUN_144c85b30(void)

void FUN_144c85b30(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c85bd0 FUN_144c85bd0 body=97 status=ok
// SIG undefined FUN_144c85bd0(void)

void FUN_144c85bd0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c85c40 FUN_144c85c40 body=74 status=ok
// SIG undefined FUN_144c85c40(void)

void FUN_144c85c40(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c85c90 FUN_144c85c90 body=87 status=ok
// SIG undefined FUN_144c85c90(void)

undefined8 FUN_144c85c90(undefined8 param_1,ulonglong param_2)

{
  FUN_144c98000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 144c85d50 FUN_144c85d50 body=18 status=ok
// SIG undefined FUN_144c85d50(void)

undefined8 * FUN_144c85d50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ebfa0;
  return param_2;
}



// FUNCTION 144c85d70 FUN_144c85d70 body=91 status=ok
// SIG undefined FUN_144c85d70(void)

void FUN_144c85d70(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c85e00 FUN_144c85e00 body=120 status=ok
// SIG undefined FUN_144c85e00(void)

undefined8 * FUN_144c85e00(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xf] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0xe] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 144c85e80 FUN_144c85e80 body=74 status=ok
// SIG undefined FUN_144c85e80(void)

void FUN_144c85e80(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c85ed0 FUN_144c85ed0 body=18 status=ok
// SIG undefined FUN_144c85ed0(void)

undefined8 * FUN_144c85ed0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ec0c0;
  return param_2;
}



// FUNCTION 144c85ef0 FUN_144c85ef0 body=74 status=ok
// SIG undefined FUN_144c85ef0(void)

void FUN_144c85ef0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c85f40 FUN_144c85f40 body=513 status=ok
// SIG undefined FUN_144c85f40(void)

void FUN_144c85f40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_4;
  lVar3 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x48);
    lVar1 = (lVar4 - 4U >> 2) + 1;
    lVar3 = lVar1 * 4;
    do {
      if (puVar2 + -9 != (undefined8 *)0x0) {
        puVar2[-8] = 0xffffffff;
        puVar2[-7] = 1;
        puVar2[-9] = hkaiSmoothPath::Modifiers::LimitCurvatureModifier::vftable;
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)(param_2 + -0x30 + (longlong)puVar2);
        *(undefined1 *)((longlong)puVar2 + -0x2c) =
             *(undefined1 *)(param_2 + -0x2c + (longlong)puVar2);
        puVar2[-5] = *(undefined8 *)(param_2 + -0x28 + (longlong)puVar2);
        *(undefined1 *)(puVar2 + -4) = *(undefined1 *)(param_2 + -0x20 + (longlong)puVar2);
        *(undefined8 *)((longlong)puVar2 + -0x1c) =
             *(undefined8 *)((longlong)puVar2 + param_2 + -0x1c);
      }
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiSmoothPath::Modifiers::LimitCurvatureModifier::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)puVar2 + param_2 + 0x18);
        *(undefined8 *)((longlong)puVar2 + 0x1c) =
             *(undefined8 *)((longlong)puVar2 + param_2 + 0x1c);
      }
      if (puVar2 + 5 != (undefined8 *)0x0) {
        puVar2[6] = 0xffffffff;
        puVar2[7] = 1;
        puVar2[5] = hkaiSmoothPath::Modifiers::LimitCurvatureModifier::vftable;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        *(undefined1 *)((longlong)puVar2 + 0x44) =
             *(undefined1 *)(param_2 + 0x44 + (longlong)puVar2);
        puVar2[9] = *(undefined8 *)(param_2 + 0x48 + (longlong)puVar2);
        *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(param_2 + 0x50 + (longlong)puVar2);
        *(undefined8 *)((longlong)puVar2 + 0x54) =
             *(undefined8 *)(param_2 + 0x54 + (longlong)puVar2);
      }
      if (puVar2 + 0xc != (undefined8 *)0x0) {
        puVar2[0xd] = 0xffffffff;
        puVar2[0xe] = 1;
        puVar2[0xc] = hkaiSmoothPath::Modifiers::LimitCurvatureModifier::vftable;
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(param_2 + 0x78 + (longlong)puVar2);
        *(undefined1 *)((longlong)puVar2 + 0x7c) =
             *(undefined1 *)(param_2 + 0x7c + (longlong)puVar2);
        puVar2[0x10] = *(undefined8 *)(param_2 + 0x80 + (longlong)puVar2);
        *(undefined1 *)(puVar2 + 0x11) = *(undefined1 *)(param_2 + 0x88 + (longlong)puVar2);
        *(undefined8 *)((longlong)puVar2 + 0x8c) =
             *(undefined8 *)(param_2 + 0x8c + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x1c;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar3 < lVar4) {
    puVar2 = (undefined8 *)(lVar3 * 0x38 + 0x10 + param_1);
    lVar4 = lVar4 - lVar3;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiSmoothPath::Modifiers::LimitCurvatureModifier::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)puVar2 + param_2 + 0x18);
        *(undefined8 *)((longlong)puVar2 + 0x1c) =
             *(undefined8 *)((longlong)puVar2 + param_2 + 0x1c);
      }
      puVar2 = puVar2 + 7;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c86150 FUN_144c86150 body=18 status=ok
// SIG undefined FUN_144c86150(void)

undefined8 * FUN_144c86150(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ec1e0;
  return param_2;
}



// FUNCTION 144c861c0 FUN_144c861c0 body=77 status=ok
// SIG undefined FUN_144c861c0(void)

void FUN_144c861c0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c86210 FUN_144c86210 body=58 status=ok
// SIG undefined FUN_144c86210(void)

void FUN_144c86210(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c4c5b0(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c86250 FUN_144c86250 body=304 status=ok
// SIG undefined FUN_144c86250(void)

void FUN_144c86250(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  
  if (0 < param_4) {
    puVar11 = (uint *)(param_1 + 0x20);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      if (puVar11 + -8 != (uint *)0x0) {
        puVar11[-6] = 0xffffffff;
        puVar11[-5] = 0;
        puVar11[-4] = 1;
        puVar11[-3] = 0;
        *(undefined ***)(puVar11 + -8) = hkaiPlaneVolume::vftable;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        *puVar11 = 0;
        puVar11[1] = 0x80000000;
        uVar2 = *(uint *)(param_2 + (longlong)puVar11);
        puVar13 = *(undefined4 **)(param_2 + -8 + (longlong)puVar11);
        if (0 < (int)uVar2) {
          puVar9 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
          *(undefined4 **)(puVar11 + -2) = puVar9;
          uVar10 = (ulonglong)uVar2;
          *puVar11 = uVar2;
          puVar11[1] = uVar2;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar3 = *puVar13;
              uVar4 = puVar13[1];
              uVar5 = puVar13[2];
              uVar6 = puVar13[3];
              puVar13 = puVar13 + 4;
              *puVar9 = uVar3;
              puVar9[1] = uVar4;
              puVar9[2] = uVar5;
              puVar9[3] = uVar6;
            }
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 4;
          } while (uVar10 != 0);
        }
        FUN_144bde880(puVar11 + 2,param_2 + 8 + (longlong)puVar11);
        *(undefined1 *)(puVar11 + 0x10) = *(undefined1 *)(param_2 + 0x40 + (longlong)puVar11);
        puVar1 = (uint *)(param_2 + 0x50 + (longlong)puVar11);
        uVar2 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar11[0x14] = *puVar1;
        puVar11[0x15] = uVar2;
        puVar11[0x16] = uVar7;
        puVar11[0x17] = uVar8;
        puVar1 = (uint *)(param_2 + 0x60 + (longlong)puVar11);
        uVar2 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar11[0x18] = *puVar1;
        puVar11[0x19] = uVar2;
        puVar11[0x1a] = uVar7;
        puVar11[0x1b] = uVar8;
      }
      puVar11 = puVar11 + 0x24;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c863d0 FUN_144c863d0 body=74 status=ok
// SIG undefined FUN_144c863d0(void)

void FUN_144c863d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c86420 FUN_144c86420 body=94 status=ok
// SIG undefined FUN_144c86420(void)

void FUN_144c86420(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x90 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x12;
      plVar2 = plVar2 + -0x12;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c86480 FUN_144c86480 body=55 status=ok
// SIG undefined FUN_144c86480(void)

void FUN_144c86480(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fbffe0(param_1);
      }
      param_1 = param_1 + 0x14;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c864f0 FUN_144c864f0 body=74 status=ok
// SIG undefined FUN_144c864f0(void)

void FUN_144c864f0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_3;
    do {
      if (param_1 != (undefined8 *)0x0) {
        uVar1 = FUN_144b3d480();
        *param_1 = uVar1;
        *(undefined4 *)(param_1 + 1) = 0;
      }
      param_1 = param_1 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c86540 FUN_144c86540 body=80 status=ok
// SIG undefined FUN_144c86540(void)

void FUN_144c86540(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c86590 FUN_144c86590 body=75 status=ok
// SIG undefined FUN_144c86590(void)

void FUN_144c86590(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_140069ea2(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c86610 FUN_144c86610 body=63 status=ok
// SIG undefined FUN_144c86610(void)

void FUN_144c86610(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c86650 FUN_144c86650 body=91 status=ok
// SIG undefined FUN_144c86650(void)

void FUN_144c86650(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
        FUN_144b3ec00(plVar2);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144c866b0 FUN_144c866b0 body=80 status=ok
// SIG undefined FUN_144c866b0(void)

void FUN_144c866b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c86700 FUN_144c86700 body=97 status=ok
// SIG undefined FUN_144c86700(void)

void FUN_144c86700(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c86770 FUN_144c86770 body=116 status=ok
// SIG undefined FUN_144c86770(void)

void FUN_144c86770(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulonglong)param_4;
    do {
      if (param_2 != param_1) {
        lVar1 = *param_1;
        if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
          (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
          FUN_144b3ec00(param_1);
        }
        FUN_140069ea2(param_1,param_2);
      }
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144c86820 FUN_144c86820 body=63 status=ok
// SIG undefined FUN_144c86820(void)

void FUN_144c86820(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c868d0 FUN_144c868d0 body=91 status=ok
// SIG undefined FUN_144c868d0(void)

void FUN_144c868d0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c86960 FUN_144c86960 body=97 status=ok
// SIG undefined FUN_144c86960(void)

void FUN_144c86960(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c869d0 FUN_144c869d0 body=264 status=ok
// SIG undefined FUN_144c869d0(void)

void FUN_144c869d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        puVar2[-2] = hkaiNavMeshPathRequestInfo::vftable;
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
        puVar2[3] = *(undefined8 *)(param_2 + 0x18 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined1 *)((longlong)puVar2 + 0x24) =
             *(undefined1 *)((longlong)puVar2 + param_2 + 0x24);
        *(undefined1 *)((longlong)puVar2 + 0x25) =
             *(undefined1 *)((longlong)puVar2 + param_2 + 0x25);
        *(undefined1 *)((longlong)puVar2 + 0x26) =
             *(undefined1 *)(param_2 + 0x26 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c86b10 FUN_144c86b10 body=74 status=ok
// SIG undefined FUN_144c86b10(void)

void FUN_144c86b10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c86b60 FUN_144c86b60 body=77 status=ok
// SIG undefined FUN_144c86b60(void)

void FUN_144c86b60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c86bb0 FUN_144c86bb0 body=334 status=ok
// SIG undefined FUN_144c86bb0(void)

void FUN_144c86bb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_4;
  lVar3 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar1 = (lVar4 - 4U >> 2) + 1;
    lVar3 = lVar1 * 4;
    do {
      if (puVar2 + -7 != (undefined8 *)0x0) {
        puVar2[-6] = 0xffffffff;
        puVar2[-5] = 1;
        puVar2[-7] = hkaiNavMeshCollectionQueryMediator::vftable;
        *(undefined4 *)(puVar2 + -4) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x20);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiNavMeshCollectionQueryMediator::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
      }
      if (puVar2 + 3 != (undefined8 *)0x0) {
        puVar2[4] = 0xffffffff;
        puVar2[5] = 1;
        puVar2[3] = hkaiNavMeshCollectionQueryMediator::vftable;
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        puVar2[7] = *(undefined8 *)(param_2 + 0x38 + (longlong)puVar2);
      }
      if (puVar2 + 8 != (undefined8 *)0x0) {
        puVar2[9] = 0xffffffff;
        puVar2[10] = 1;
        puVar2[8] = hkaiNavMeshCollectionQueryMediator::vftable;
        *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_2 + 0x58 + (longlong)puVar2);
        puVar2[0xc] = *(undefined8 *)(param_2 + 0x60 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x14;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar3 < lVar4) {
    lVar4 = lVar4 - lVar3;
    puVar2 = (undefined8 *)(param_1 + (lVar3 * 5 + 2) * 8);
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiNavMeshCollectionQueryMediator::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
      }
      puVar2 = puVar2 + 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c86d00 FUN_144c86d00 body=88 status=ok
// SIG undefined FUN_144c86d00(void)

void FUN_144c86d00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c86d60 FUN_144c86d60 body=190 status=ok
// SIG undefined FUN_144c86d60(void)

void FUN_144c86d60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
      plVar2[2] = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
      *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)plVar2);
      *(undefined1 *)((longlong)plVar2 + 0x1c) = *(undefined1 *)(param_2 + 0x1c + (longlong)plVar2);
      *(undefined1 *)((longlong)plVar2 + 0x1d) = *(undefined1 *)(param_2 + 0x1d + (longlong)plVar2);
      *(undefined1 *)((longlong)plVar2 + 0x1e) = *(undefined1 *)(param_2 + 0x1e + (longlong)plVar2);
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c86ea0 FUN_144c86ea0 body=58 status=ok
// SIG undefined FUN_144c86ea0(void)

void FUN_144c86ea0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c3e1d0(param_1);
      }
      param_1 = param_1 + 0x100;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c86ef0 FUN_144c86ef0 body=89 status=ok
// SIG undefined FUN_144c86ef0(void)

void FUN_144c86ef0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_res18;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    lVar1 = (longlong)param_3;
    do {
      if (puVar2 + -4 != (undefined4 *)0x0) {
        FUN_144bf91b0(puVar2 + -4,local_res18);
        *(undefined8 *)(puVar2 + -2) = 0xffffffffffffffff;
        *puVar2 = 0xffffffff;
      }
      puVar2 = puVar2 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144c86f50 FUN_144c86f50 body=78 status=ok
// SIG undefined FUN_144c86f50(void)

void FUN_144c86f50(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c3e330(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x100;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c86fd0 FUN_144c86fd0 body=91 status=ok
// SIG undefined FUN_144c86fd0(void)

void FUN_144c86fd0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c87030 FUN_144c87030 body=83 status=ok
// SIG undefined FUN_144c87030(void)

void FUN_144c87030(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c87090 FUN_144c87090 body=80 status=ok
// SIG undefined FUN_144c87090(void)

void FUN_144c87090(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c870e0 FUN_144c870e0 body=540 status=ok
// SIG undefined FUN_144c870e0(void)

void FUN_144c870e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong local_40;
  
  local_40 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar12 = (longlong *)(param_1 + 0x10);
    do {
      plVar6 = (longlong *)(param_2 + -0x10 + (longlong)plVar12);
      plVar1 = plVar12 + -2;
      if (plVar1 != plVar6) {
        lVar3 = *plVar6;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar12);
        if ((int)(*(uint *)((longlong)plVar12 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9ed10(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar12[-1]) {
          lVar9 = *plVar1;
          lVar7 = (longlong)(int)plVar12[-1] * 0x10 + *plVar1;
          while (lVar7 != (longlong)iVar2 * 0x10 + lVar9) {
            plVar6 = (longlong *)(lVar7 + -8);
            lVar7 = lVar7 + -0x10;
            if (*plVar6 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar9 = *plVar1;
        iVar5 = iVar2;
        if ((int)plVar12[-1] < iVar2) {
          iVar5 = (int)plVar12[-1];
        }
        if ((lVar9 != lVar3) && (lVar7 = (longlong)iVar5, 0 < iVar5)) {
          plVar6 = (longlong *)(lVar9 + 8);
          lVar9 = lVar3 - lVar9;
          do {
            *(undefined4 *)(plVar6 + -1) = *(undefined4 *)(lVar9 + -8 + (longlong)plVar6);
            if (*plVar6 != *(longlong *)(lVar9 + (longlong)plVar6)) {
              if (*(longlong *)(lVar9 + (longlong)plVar6) != 0) {
                FUN_144b3d910();
              }
              lVar4 = *plVar6;
              *plVar6 = *(longlong *)(lVar9 + (longlong)plVar6);
              if (lVar4 != 0) {
                FUN_144b3f230();
              }
            }
            plVar6 = plVar6 + 2;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        puVar8 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar3);
        if (0 < iVar2 - iVar5) {
          uVar10 = (ulonglong)(uint)(iVar2 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x10);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar8;
              lVar3 = *(longlong *)(puVar8 + 2);
              *(longlong *)(puVar11 + 2) = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              puVar8 = puVar8 + 4;
            }
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar10 != 0);
        }
        *(int *)(plVar12 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar12) != plVar12) {
          lVar3 = *plVar12;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar12);
          }
          FUN_140069ea2(plVar12,(longlong *)(param_2 + (longlong)plVar12));
        }
      }
      plVar12 = plVar12 + 4;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}



// FUNCTION 144c87330 FUN_144c87330 body=1112 status=ok
// SIG undefined FUN_144c87330(void)

void FUN_144c87330(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong lVar16;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar16 = (longlong)param_4;
    puVar15 = (uint *)(param_1 + 0x54);
    do {
      *(undefined8 *)(puVar15 + -0xf) = *(undefined8 *)((longlong)puVar15 + param_2 + -0x3c);
      lVar13 = *(longlong *)((longlong)puVar15 + param_2 + -0x34);
      if (*(longlong *)(puVar15 + -0xd) != lVar13) {
        if (lVar13 != 0) {
          FUN_144b3d910();
        }
        lVar13 = *(longlong *)(puVar15 + -0xd);
        *(undefined8 *)(puVar15 + -0xd) = *(undefined8 *)((longlong)puVar15 + param_2 + -0x34);
        if (lVar13 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined1 *)(puVar15 + -9) = *(undefined1 *)(param_2 + -0x24 + (longlong)puVar15);
      puVar8 = (uint *)((longlong)puVar15 + param_2 + -0x1c);
      puVar2 = puVar15 + -7;
      if (puVar8 != puVar2) {
        plVar14 = *(longlong **)puVar8;
        uVar3 = *(uint *)((longlong)puVar15 + param_2 + -0x14);
        if ((int)(puVar15[-4] & 0x7fffffff) < (int)uVar3) {
          FUN_144c9bbc0(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        if ((int)uVar3 < (int)puVar15[-5]) {
          lVar13 = *(longlong *)puVar2;
          plVar12 = (longlong *)(lVar13 + (longlong)(int)puVar15[-5] * 0x18);
          while (plVar12 != (longlong *)(lVar13 + (longlong)(int)uVar3 * 0x18)) {
            lVar11 = plVar12[-2];
            plVar12 = plVar12 + -3;
            if (lVar11 != 0) {
              FUN_144be5d10(lVar11);
              (*DAT_14c787678)(0,lVar11,0);
            }
            if (*plVar12 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar12 = *(longlong **)puVar2;
        uVar6 = uVar3;
        if ((int)puVar15[-5] < (int)uVar3) {
          uVar6 = puVar15[-5];
        }
        if ((plVar12 != plVar14) && (lVar13 = (longlong)(int)uVar6, 0 < (int)uVar6)) {
          lVar11 = (longlong)plVar12 - (longlong)plVar14;
          plVar9 = plVar14;
          do {
            if (*(longlong *)(lVar11 + (longlong)plVar9) != *plVar9) {
              if (*plVar9 != 0) {
                FUN_144b3d910();
              }
              lVar4 = *(longlong *)(lVar11 + (longlong)plVar9);
              *(longlong *)(lVar11 + (longlong)plVar9) = *plVar9;
              if (lVar4 != 0) {
                FUN_144b3f230();
              }
            }
            *(undefined1 *)(lVar11 + 0x10 + (longlong)plVar9) =
                 *(undefined1 *)
                  ((longlong)plVar14 + (lVar11 - (longlong)plVar12) + 0x10 + (longlong)plVar9);
            plVar9 = plVar9 + 3;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        plVar14 = plVar14 + (longlong)(int)uVar6 * 3;
        if (0 < (int)(uVar3 - uVar6)) {
          uVar10 = (ulonglong)(uVar3 - uVar6);
          plVar12 = (longlong *)(*(longlong *)(puVar15 + -7) + (longlong)(int)uVar6 * 0x18);
          do {
            if (plVar12 != (longlong *)0x0) {
              lVar13 = *plVar14;
              *plVar12 = lVar13;
              if (lVar13 != 0) {
                FUN_144b3d910();
              }
              plVar12[1] = 0;
              *(undefined1 *)(plVar12 + 2) = 0;
              plVar9 = plVar14 + 2;
              plVar14 = plVar14 + 3;
              *(char *)(plVar12 + 2) = (char)*plVar9;
            }
            uVar10 = uVar10 - 1;
            plVar12 = plVar12 + 3;
          } while (uVar10 != 0);
        }
        puVar15[-5] = uVar3;
      }
      puVar2 = puVar15 + -3;
      puVar8 = (uint *)(param_2 + -0xc + (longlong)puVar15);
      if (puVar8 != puVar2) {
        uVar5 = *(undefined8 *)puVar8;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar15);
        if ((int)(*puVar15 & 0x7fffffff) < (int)uVar3) {
          FUN_147e4b86a(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar2,uVar5);
        puVar15[-1] = uVar3;
      }
      puVar1 = (undefined8 *)((longlong)puVar15 + param_2 + 0xc);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 3) = *puVar1;
      *(undefined8 *)(puVar15 + 5) = uVar5;
      puVar1 = (undefined8 *)(param_2 + 0x1c + (longlong)puVar15);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 7) = *puVar1;
      *(undefined8 *)(puVar15 + 9) = uVar5;
      puVar1 = (undefined8 *)(param_2 + 0x2c + (longlong)puVar15);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 0xb) = *puVar1;
      *(undefined8 *)(puVar15 + 0xd) = uVar5;
      puVar1 = (undefined8 *)(param_2 + 0x3c + (longlong)puVar15);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 0xf) = *puVar1;
      *(undefined8 *)(puVar15 + 0x11) = uVar5;
      puVar1 = (undefined8 *)(param_2 + 0x4c + (longlong)puVar15);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 0x13) = *puVar1;
      *(undefined8 *)(puVar15 + 0x15) = uVar5;
      puVar1 = (undefined8 *)(param_2 + 0x5c + (longlong)puVar15);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 0x17) = *puVar1;
      *(undefined8 *)(puVar15 + 0x19) = uVar5;
      puVar1 = (undefined8 *)((longlong)puVar15 + param_2 + 0x6c);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar15 + 0x1b) = *puVar1;
      *(undefined8 *)(puVar15 + 0x1d) = uVar5;
      puVar2 = (uint *)(param_2 + 0x7c + (longlong)puVar15);
      uVar3 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar15[0x1f] = *puVar2;
      puVar15[0x20] = uVar3;
      puVar15[0x21] = uVar6;
      puVar15[0x22] = uVar7;
      puVar2 = (uint *)(param_2 + 0x8c + (longlong)puVar15);
      uVar3 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar15[0x23] = *puVar2;
      puVar15[0x24] = uVar3;
      puVar15[0x25] = uVar6;
      puVar15[0x26] = uVar7;
      lVar13 = *(longlong *)((longlong)puVar15 + param_2 + 0x9c);
      if (*(longlong *)(puVar15 + 0x27) != lVar13) {
        if (lVar13 != 0) {
          FUN_144b3d910();
        }
        lVar13 = *(longlong *)(puVar15 + 0x27);
        *(undefined8 *)(puVar15 + 0x27) = *(undefined8 *)((longlong)puVar15 + param_2 + 0x9c);
        if (lVar13 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined1 *)(puVar15 + 0x29) = *(undefined1 *)((longlong)puVar15 + param_2 + 0xa4);
      puVar15 = puVar15 + 0x40;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 144c87790 FUN_144c87790 body=63 status=ok
// SIG undefined FUN_144c87790(void)

void FUN_144c87790(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144c877d0 FUN_144c877d0 body=91 status=ok
// SIG undefined FUN_144c877d0(void)

void FUN_144c877d0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c87830 FUN_144c87830 body=74 status=ok
// SIG undefined FUN_144c87830(void)

void FUN_144c87830(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c878b0 FUN_144c878b0 body=87 status=ok
// SIG undefined FUN_144c878b0(void)

undefined8 FUN_144c878b0(undefined8 param_1,ulonglong param_2)

{
  FUN_144c99300();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 144c87910 FUN_144c87910 body=97 status=ok
// SIG undefined FUN_144c87910(void)

void FUN_144c87910(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144c87a60 FUN_144c87a60 body=285 status=ok
// SIG undefined FUN_144c87a60(void)

void FUN_144c87a60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_4;
  lVar3 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x30);
    lVar1 = (lVar4 - 4U >> 2) + 1;
    lVar3 = lVar1 * 4;
    do {
      if (puVar2 + -6 != (undefined8 *)0x0) {
        puVar2[-5] = 0xffffffff;
        puVar2[-4] = 1;
        puVar2[-6] = hkaiSmoothPath::Modifiers::MoveAwayFromBoundaries::vftable;
        *(undefined4 *)(puVar2 + -3) = *(undefined4 *)(param_2 + -0x18 + (longlong)puVar2);
      }
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiSmoothPath::Modifiers::MoveAwayFromBoundaries::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
      }
      if (puVar2 + 2 != (undefined8 *)0x0) {
        puVar2[3] = 0xffffffff;
        puVar2[4] = 1;
        puVar2[2] = hkaiSmoothPath::Modifiers::MoveAwayFromBoundaries::vftable;
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
      }
      if (puVar2 + 6 != (undefined8 *)0x0) {
        puVar2[7] = 0xffffffff;
        puVar2[8] = 1;
        puVar2[6] = hkaiSmoothPath::Modifiers::MoveAwayFromBoundaries::vftable;
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar3 < lVar4) {
    puVar2 = (undefined8 *)(lVar3 * 0x20 + 0x10 + param_1);
    lVar4 = lVar4 - lVar3;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiSmoothPath::Modifiers::MoveAwayFromBoundaries::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


