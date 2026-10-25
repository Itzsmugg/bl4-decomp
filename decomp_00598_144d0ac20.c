// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d0ac20 FUN_144d0ac20 body=74 status=ok
// SIG undefined FUN_144d0ac20(void)

void FUN_144d0ac20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0ac70 FUN_144d0ac70 body=97 status=ok
// SIG undefined FUN_144d0ac70(void)

void FUN_144d0ac70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144d0ace0 FUN_144d0ace0 body=97 status=ok
// SIG undefined FUN_144d0ace0(void)

void FUN_144d0ace0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - (longlong)param_1;
    uVar1 = (ulonglong)param_4;
    plVar2 = param_1;
    do {
      (**(code **)(*plVar2 + 0x18))(param_1,param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0ad50 FUN_144d0ad50 body=32 status=ok
// SIG undefined FUN_144d0ad50(void)

undefined8 FUN_144d0ad50(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144d0ada0 FUN_144d0ada0 body=80 status=ok
// SIG undefined FUN_144d0ada0(void)

void FUN_144d0ada0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144d0adf0 FUN_144d0adf0 body=63 status=ok
// SIG undefined FUN_144d0adf0(void)

void FUN_144d0adf0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144d0ae30 FUN_144d0ae30 body=97 status=ok
// SIG undefined FUN_144d0ae30(void)

void FUN_144d0ae30(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144d0af40 FUN_144d0af40 body=75 status=ok
// SIG undefined FUN_144d0af40(void)

void FUN_144d0af40(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144cad060(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0af90 FUN_144d0af90 body=70 status=ok
// SIG undefined FUN_144d0af90(void)

void FUN_144d0af90(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144cad130(param_1,param_2 + param_1);
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0afe0 FUN_144d0afe0 body=55 status=ok
// SIG undefined FUN_144d0afe0(void)

void FUN_144d0afe0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145045940(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0b060 FUN_144d0b060 body=18 status=ok
// SIG undefined FUN_144d0b060(void)

undefined8 * FUN_144d0b060(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff480;
  return param_2;
}



// FUNCTION 144d0b080 FUN_144d0b080 body=159 status=ok
// SIG undefined FUN_144d0b080(void)

undefined8 * FUN_144d0b080(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
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



// FUNCTION 144d0b120 FUN_144d0b120 body=18 status=ok
// SIG undefined FUN_144d0b120(void)

undefined8 * FUN_144d0b120(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff4e0;
  return param_2;
}



// FUNCTION 144d0b220 FUN_144d0b220 body=517 status=ok
// SIG undefined FUN_144d0b220(void)

void FUN_144d0b220(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar12 = (uint *)(param_1 + 0x34);
    lVar11 = (longlong)param_4;
    do {
      if (puVar12 + -0xd != (uint *)0x0) {
        puVar12[-0xb] = 0xffffffff;
        puVar12[-10] = 0;
        puVar12[-9] = 1;
        puVar12[-8] = 0;
        *(undefined ***)(puVar12 + -0xd) = &PTR_LAB_14aba30f0;
        puVar12[-7] = 0;
        puVar12[-6] = 0;
        puVar12[-5] = 0;
        puVar12[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar12);
        puVar9 = *(undefined4 **)((longlong)puVar12 + param_2 + -0x1c);
        if (0 < (int)uVar2) {
          puVar7 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          *(undefined4 **)(puVar12 + -7) = puVar7;
          puVar12[-5] = uVar2;
          uVar13 = (ulonglong)uVar2;
          puVar12[-4] = uVar2;
          do {
            if (puVar7 != (undefined4 *)0x0) {
              uVar3 = *puVar9;
              puVar9 = puVar9 + 1;
              *puVar7 = uVar3;
            }
            uVar13 = uVar13 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar13 != 0);
        }
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        *puVar12 = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar12 + param_2 + -4);
        puVar10 = *(undefined8 **)(param_2 + -0xc + (longlong)puVar12);
        if (0 < (int)uVar2) {
          puVar8 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x60);
          *(undefined8 **)(puVar12 + -3) = puVar8;
          uVar13 = (ulonglong)uVar2;
          puVar12[-1] = uVar2;
          *puVar12 = uVar2;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              uVar6 = puVar10[1];
              *puVar8 = *puVar10;
              puVar8[1] = uVar6;
              uVar6 = puVar10[3];
              puVar8[2] = puVar10[2];
              puVar8[3] = uVar6;
              uVar6 = puVar10[5];
              puVar8[4] = puVar10[4];
              puVar8[5] = uVar6;
              uVar6 = puVar10[7];
              puVar8[6] = puVar10[6];
              puVar8[7] = uVar6;
              uVar3 = *(undefined4 *)((longlong)puVar10 + 0x44);
              uVar4 = *(undefined4 *)(puVar10 + 9);
              uVar5 = *(undefined4 *)((longlong)puVar10 + 0x4c);
              *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar10 + 8);
              *(undefined4 *)((longlong)puVar8 + 0x44) = uVar3;
              *(undefined4 *)(puVar8 + 9) = uVar4;
              *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar5;
              puVar1 = puVar10 + 10;
              uVar6 = puVar10[0xb];
              puVar10 = puVar10 + 0xc;
              puVar8[10] = *puVar1;
              puVar8[0xb] = uVar6;
            }
            uVar13 = uVar13 - 1;
            puVar8 = puVar8 + 0xc;
          } while (uVar13 != 0);
        }
        FUN_147e54bf6(puVar12 + 1,param_2 + 4 + (longlong)puVar12);
        FUN_144cad5e0(puVar12 + 0xd,(longlong)puVar12 + param_2 + 0x34);
        FUN_144cad060(puVar12 + 0x21,(longlong)puVar12 + param_2 + 0x84);
      }
      puVar12 = puVar12 + 0x38;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144d0b430 FUN_144d0b430 body=94 status=ok
// SIG undefined FUN_144d0b430(void)

void FUN_144d0b430(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xe0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1c;
      plVar2 = plVar2 + -0x1c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0b490 FUN_144d0b490 body=696 status=ok
// SIG undefined FUN_144d0b490(void)

void FUN_144d0b490(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x54);
    lVar6 = (longlong)param_4;
    do {
      puVar4 = (uint *)(param_2 + -0x3c + (longlong)puVar5);
      puVar1 = puVar5 + -0xf;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -0x34);
        if ((int)(puVar5[-0xc] & 0x7fffffff) < (int)uVar2) {
          FUN_147e54dda(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 4);
        puVar5[-0xd] = uVar2;
      }
      puVar4 = (uint *)((longlong)puVar5 + param_2 + -0x2c);
      puVar1 = puVar5 + -0xb;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -0x24);
        if ((int)(puVar5[-8] & 0x7fffffff) < (int)uVar2) {
          FUN_147e54eae(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0x60);
        puVar5[-9] = uVar2;
      }
      puVar1 = puVar5 + -7;
      puVar4 = (uint *)(param_2 + -0x1c + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -0x14);
        if ((int)(puVar5[-4] & 0x7fffffff) < (int)uVar2) {
          FUN_147e54f88(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0xc);
        puVar5[-5] = uVar2;
      }
      puVar1 = puVar5 + -3;
      puVar4 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_147e55064(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0x60);
        puVar5[-1] = uVar2;
      }
      puVar1 = puVar5 + 1;
      puVar4 = (uint *)(param_2 + 4 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar2) {
          FUN_147e5513a(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 << 7);
        puVar5[3] = uVar2;
      }
      FUN_144cad680(puVar5 + 5,(longlong)puVar5 + param_2 + 0x14);
      FUN_144cad130(puVar5 + 0x19,(longlong)puVar5 + param_2 + 100);
      puVar5 = puVar5 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144d0b750 FUN_144d0b750 body=74 status=ok
// SIG undefined FUN_144d0b750(void)

void FUN_144d0b750(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0b7a0 FUN_144d0b7a0 body=97 status=ok
// SIG undefined FUN_144d0b7a0(void)

void FUN_144d0b7a0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - (longlong)param_1;
    uVar1 = (ulonglong)param_4;
    plVar2 = param_1;
    do {
      (**(code **)(*plVar2 + 0x18))(param_1,param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0b810 FUN_144d0b810 body=32 status=ok
// SIG undefined FUN_144d0b810(void)

undefined8 FUN_144d0b810(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144d0b830 FUN_144d0b830 body=55 status=ok
// SIG undefined FUN_144d0b830(void)

void FUN_144d0b830(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1450458e0(param_1);
      }
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0b870 FUN_144d0b870 body=547 status=ok
// SIG undefined FUN_144d0b870(void)

void FUN_144d0b870(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar12 = (uint *)(param_1 + 0x34);
    lVar13 = (longlong)param_4;
    do {
      if (puVar12 + -0xd != (uint *)0x0) {
        puVar12[-0xb] = 0xffffffff;
        puVar12[-10] = 0;
        puVar12[-9] = 1;
        puVar12[-8] = 0;
        *(undefined ***)(puVar12 + -0xd) = hkaiEdgeGeometry::vftable;
        puVar12[-7] = 0;
        puVar12[-6] = 0;
        puVar12[-5] = 0;
        puVar12[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar12);
        puVar14 = *(undefined4 **)(param_2 + -0x1c + (longlong)puVar12);
        if (0 < (int)uVar2) {
          puVar9 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
          *(undefined4 **)(puVar12 + -7) = puVar9;
          uVar11 = (ulonglong)uVar2;
          puVar12[-5] = uVar2;
          puVar12[-4] = uVar2;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar3 = *puVar14;
              uVar4 = puVar14[1];
              uVar5 = puVar14[2];
              uVar6 = puVar14[3];
              puVar14 = puVar14 + 4;
              *puVar9 = uVar3;
              puVar9[1] = uVar4;
              puVar9[2] = uVar5;
              puVar9[3] = uVar6;
            }
            uVar11 = uVar11 - 1;
            puVar9 = puVar9 + 4;
          } while (uVar11 != 0);
        }
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        *puVar12 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar12);
        puVar15 = *(undefined8 **)(param_2 + -0xc + (longlong)puVar12);
        if (0 < (int)uVar2) {
          puVar10 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
          *(undefined8 **)(puVar12 + -3) = puVar10;
          puVar12[-1] = uVar2;
          uVar11 = (ulonglong)uVar2;
          *puVar12 = uVar2;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = *puVar15;
              puVar1 = puVar15 + 1;
              puVar15 = (undefined8 *)((longlong)puVar15 + 0xc);
              *(undefined4 *)(puVar10 + 1) = *(undefined4 *)puVar1;
            }
            uVar11 = uVar11 - 1;
            puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
          } while (uVar11 != 0);
        }
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar12 + param_2 + 0xc);
        puVar15 = *(undefined8 **)(param_2 + 4 + (longlong)puVar12);
        if (0 < (int)uVar2) {
          puVar10 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
          *(undefined8 **)(puVar12 + 1) = puVar10;
          uVar11 = (ulonglong)uVar2;
          puVar12[3] = uVar2;
          puVar12[4] = uVar2;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              uVar7 = *puVar15;
              uVar8 = puVar15[1];
              puVar15 = puVar15 + 2;
              *puVar10 = uVar7;
              puVar10[1] = uVar8;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 2;
          } while (uVar11 != 0);
        }
        *(undefined8 *)(puVar12 + 5) = *(undefined8 *)(param_2 + 0x14 + (longlong)puVar12);
        puVar12[7] = *(uint *)(param_2 + 0x1c + (longlong)puVar12);
      }
      puVar12 = puVar12 + 0x16;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144d0baa0 FUN_144d0baa0 body=77 status=ok
// SIG undefined FUN_144d0baa0(void)

void FUN_144d0baa0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x58 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xb;
      plVar2 = plVar2 + -0xb;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0baf0 FUN_144d0baf0 body=447 status=ok
// SIG undefined FUN_144d0baf0(void)

void FUN_144d0baf0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar4 = (uint *)((longlong)puVar5 + param_2 + -0xc);
      puVar1 = puVar5 + -3;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144d0fd50(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 << 4);
        puVar5[-1] = uVar2;
      }
      puVar1 = puVar5 + 1;
      puVar4 = (uint *)(param_2 + 4 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar2) {
          FUN_144d0fdf0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0xc);
        puVar5[3] = uVar2;
      }
      puVar1 = puVar5 + 5;
      puVar4 = (uint *)(param_2 + 0x14 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x1c + (longlong)puVar5);
        if ((int)(puVar5[8] & 0x7fffffff) < (int)uVar2) {
          FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 << 4);
        puVar5[7] = uVar2;
      }
      *(undefined8 *)(puVar5 + 9) = *(undefined8 *)(param_2 + 0x24 + (longlong)puVar5);
      puVar5[0xb] = *(uint *)(param_2 + 0x2c + (longlong)puVar5);
      puVar5 = puVar5 + 0x16;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144d0bcb0 FUN_144d0bcb0 body=18 status=ok
// SIG undefined FUN_144d0bcb0(void)

undefined8 * FUN_144d0bcb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff670;
  return param_2;
}



// FUNCTION 144d0bd20 FUN_144d0bd20 body=75 status=ok
// SIG undefined FUN_144d0bd20(void)

void FUN_144d0bd20(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144cad5e0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0bd70 FUN_144d0bd70 body=70 status=ok
// SIG undefined FUN_144d0bd70(void)

void FUN_144d0bd70(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144cad680(param_1,param_2 + param_1);
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0bdc0 FUN_144d0bdc0 body=18 status=ok
// SIG undefined FUN_144d0bdc0(void)

undefined8 * FUN_144d0bdc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff740;
  return param_2;
}



// FUNCTION 144d0bde0 FUN_144d0bde0 body=58 status=ok
// SIG undefined FUN_144d0bde0(void)

void FUN_144d0bde0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1450459a0(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0be20 FUN_144d0be20 body=74 status=ok
// SIG undefined FUN_144d0be20(void)

void FUN_144d0be20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0be70 FUN_144d0be70 body=294 status=ok
// SIG undefined FUN_144d0be70(void)

undefined8 * FUN_144d0be70(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) * 0xc);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0x14);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x30);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 144d0bfa0 FUN_144d0bfa0 body=18 status=ok
// SIG undefined FUN_144d0bfa0(void)

undefined8 * FUN_144d0bfa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff870;
  return param_2;
}



// FUNCTION 144d0bfc0 FUN_144d0bfc0 body=18 status=ok
// SIG undefined FUN_144d0bfc0(void)

undefined8 * FUN_144d0bfc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff8d0;
  return param_2;
}



// FUNCTION 144d0c070 FUN_144d0c070 body=655 status=ok
// SIG undefined FUN_144d0c070(void)

void FUN_144d0c070(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  undefined4 *puVar20;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar18 = (longlong)param_4;
    puVar19 = (uint *)(param_1 + 0x3c);
    do {
      if (puVar19 + -0xf != (uint *)0x0) {
        puVar19[-0xd] = 0xffffffff;
        puVar19[-0xc] = 0;
        puVar19[-0xb] = 1;
        puVar19[-10] = 0;
        *(undefined ***)(puVar19 + -0xf) = &PTR_LAB_14aba2aa0;
        lVar5 = *(longlong *)(param_2 + -0x24 + (longlong)puVar19);
        *(longlong *)(puVar19 + -9) = lVar5;
        if (lVar5 != 0) {
          FUN_144b3d910();
        }
        puVar19[-7] = 0;
        puVar19[-6] = 0;
        puVar19[-5] = 0;
        puVar19[-4] = 0x80000000;
        uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar19);
        plVar17 = *(longlong **)(param_2 + -0x1c + (longlong)puVar19);
        if (0 < (int)uVar3) {
          plVar11 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 4);
          *(longlong **)(puVar19 + -7) = plVar11;
          puVar19[-5] = uVar3;
          uVar16 = (ulonglong)uVar3;
          puVar19[-4] = uVar3;
          do {
            if (plVar11 != (longlong *)0x0) {
              lVar5 = *plVar17;
              *plVar11 = lVar5;
              if (lVar5 != 0) {
                FUN_144b3d910();
              }
              plVar1 = plVar17 + 1;
              plVar17 = plVar17 + 2;
              *(int *)(plVar11 + 1) = (int)*plVar1;
            }
            uVar16 = uVar16 - 1;
            plVar11 = plVar11 + 2;
          } while (uVar16 != 0);
        }
        puVar19[-3] = 0;
        puVar19[-2] = 0;
        puVar19[-1] = 0;
        *puVar19 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar19);
        lVar5 = *(longlong *)((longlong)puVar19 + param_2 + -0xc);
        if (0 < (int)uVar3) {
          puVar12 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x18);
          *(undefined8 **)(puVar19 + -3) = puVar12;
          puVar20 = (undefined4 *)(lVar5 + 0x10);
          puVar19[-1] = uVar3;
          uVar16 = (ulonglong)uVar3;
          *puVar19 = uVar3;
          do {
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0;
              *(undefined4 *)(puVar12 + 1) = 0;
              *(undefined4 *)((longlong)puVar12 + 0xc) = 0x80000000;
              uVar3 = puVar20[-2];
              puVar15 = *(undefined4 **)(puVar20 + -4);
              if (0 < (int)uVar3) {
                puVar13 = (undefined4 *)
                          (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                    (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 4);
                *puVar12 = puVar13;
                uVar14 = (ulonglong)uVar3;
                *(uint *)(puVar12 + 1) = uVar3;
                *(uint *)((longlong)puVar12 + 0xc) = uVar3;
                do {
                  if (puVar13 != (undefined4 *)0x0) {
                    uVar4 = *puVar15;
                    uVar6 = puVar15[1];
                    uVar7 = puVar15[2];
                    uVar8 = puVar15[3];
                    puVar15 = puVar15 + 4;
                    *puVar13 = uVar4;
                    puVar13[1] = uVar6;
                    puVar13[2] = uVar7;
                    puVar13[3] = uVar8;
                  }
                  uVar14 = uVar14 - 1;
                  puVar13 = puVar13 + 4;
                } while (uVar14 != 0);
              }
              uVar4 = *puVar20;
              puVar20 = puVar20 + 6;
              *(undefined4 *)(puVar12 + 2) = uVar4;
            }
            uVar16 = uVar16 - 1;
            puVar12 = puVar12 + 3;
          } while (uVar16 != 0);
        }
        puVar2 = (uint *)(param_2 + 4 + (longlong)puVar19);
        uVar3 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar19[1] = *puVar2;
        puVar19[2] = uVar3;
        puVar19[3] = uVar9;
        puVar19[4] = uVar10;
        puVar2 = (uint *)(param_2 + 0x14 + (longlong)puVar19);
        uVar3 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar19[5] = *puVar2;
        puVar19[6] = uVar3;
        puVar19[7] = uVar9;
        puVar19[8] = uVar10;
      }
      puVar19 = puVar19 + 0x18;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}



// FUNCTION 144d0c300 FUN_144d0c300 body=88 status=ok
// SIG undefined FUN_144d0c300(void)

void FUN_144d0c300(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144d0c360 FUN_144d0c360 body=70 status=ok
// SIG undefined FUN_144d0c360(void)

void FUN_144d0c360(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144d0ebc0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0c3b0 FUN_144d0c3b0 body=87 status=ok
// SIG undefined FUN_144d0c3b0(void)

undefined8 FUN_144d0c3b0(undefined8 param_1,ulonglong param_2)

{
  FUN_144fc5e30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 144d0c410 FUN_144d0c410 body=227 status=ok
// SIG undefined FUN_144d0c410(void)

undefined8 * FUN_144d0c410(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
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
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144d0c500 FUN_144d0c500 body=18 status=ok
// SIG undefined FUN_144d0c500(void)

undefined8 * FUN_144d0c500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff930;
  return param_2;
}



// FUNCTION 144d0c570 FUN_144d0c570 body=80 status=ok
// SIG undefined FUN_144d0c570(void)

void FUN_144d0c570(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144d0c5c0 FUN_144d0c5c0 body=63 status=ok
// SIG undefined FUN_144d0c5c0(void)

void FUN_144d0c5c0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144d0c600 FUN_144d0c600 body=97 status=ok
// SIG undefined FUN_144d0c600(void)

void FUN_144d0c600(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144d0c670 FUN_144d0c670 body=288 status=ok
// SIG undefined FUN_144d0c670(void)

undefined8 * FUN_144d0c670(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 4);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0xc);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
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
    FUN_144bda120(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144d0c790 FUN_144d0c790 body=58 status=ok
// SIG undefined FUN_144d0c790(void)

void FUN_144d0c790(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fc5b80(param_1);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0c7d0 FUN_144d0c7d0 body=63 status=ok
// SIG undefined FUN_144d0c7d0(void)

void FUN_144d0c7d0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0xf0 + param_1;
    do {
      FUN_144fc5bd0(param_1);
      param_1 = param_1 + -0xf0;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0c810 FUN_144d0c810 body=58 status=ok
// SIG undefined FUN_144d0c810(void)

void FUN_144d0c810(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144caec40(param_1);
      }
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0c850 FUN_144d0c850 body=862 status=ok
// SIG undefined FUN_144d0c850(void)

void FUN_144d0c850(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  
  if (0 < param_4) {
    puVar12 = (uint *)(param_1 + 0xe4);
    param_2 = param_2 - param_1;
    lVar15 = (longlong)param_4;
    do {
      if (puVar12 + -0x39 != (uint *)0x0) {
        puVar12[-0x35] = 1;
        puVar12[-0x34] = 0;
        puVar12[-0x37] = 0xffffffff;
        puVar12[-0x36] = 0;
        *(undefined ***)(puVar12 + -0x39) = hkaiNavVolumeGenerationSettings::vftable;
        puVar14 = (undefined8 *)(param_2 + -0xc4 + (longlong)puVar12);
        uVar7 = puVar14[1];
        *(undefined8 *)(puVar12 + -0x31) = *puVar14;
        *(undefined8 *)(puVar12 + -0x2f) = uVar7;
        puVar14 = (undefined8 *)(param_2 + -0xb4 + (longlong)puVar12);
        uVar7 = puVar14[1];
        *(undefined8 *)(puVar12 + -0x2d) = *puVar14;
        *(undefined8 *)(puVar12 + -0x2b) = uVar7;
        puVar12[-0x29] = *(uint *)(param_2 + -0xa4 + (longlong)puVar12);
        puVar12[-0x28] = *(uint *)(param_2 + -0xa0 + (longlong)puVar12);
        puVar14 = (undefined8 *)(param_2 + -0x94 + (longlong)puVar12);
        uVar7 = puVar14[1];
        *(undefined8 *)(puVar12 + -0x25) = *puVar14;
        *(undefined8 *)(puVar12 + -0x23) = uVar7;
        puVar12[-0x21] = *(uint *)(param_2 + -0x84 + (longlong)puVar12);
        puVar12[-0x20] = *(uint *)(param_2 + -0x80 + (longlong)puVar12);
        puVar12[-0x1f] = *(uint *)(param_2 + -0x7c + (longlong)puVar12);
        puVar12[-0x1e] = *(uint *)(param_2 + -0x78 + (longlong)puVar12);
        *(undefined1 *)(puVar12 + -0x1d) = *(undefined1 *)(param_2 + -0x74 + (longlong)puVar12);
        *(undefined8 *)((longlong)puVar12 + -0x72) =
             *(undefined8 *)((longlong)puVar12 + param_2 + -0x72);
        *(undefined8 *)(puVar12 + -0x19) = *(undefined8 *)((longlong)puVar12 + param_2 + -100);
        puVar12[-0x17] = *(uint *)((longlong)puVar12 + param_2 + -0x5c);
        *(undefined1 *)(puVar12 + -0x16) = *(undefined1 *)((longlong)puVar12 + param_2 + -0x58);
        puVar2 = (uint *)(param_2 + -0x54 + (longlong)puVar12);
        uVar3 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar12[-0x15] = *puVar2;
        puVar12[-0x14] = uVar3;
        puVar12[-0x13] = uVar5;
        puVar12[-0x12] = uVar6;
        puVar2 = (uint *)(param_2 + -0x44 + (longlong)puVar12);
        uVar3 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar12[-0x11] = *puVar2;
        puVar12[-0x10] = uVar3;
        puVar12[-0xf] = uVar5;
        puVar12[-0xe] = uVar6;
        puVar12[-0xd] = *(uint *)(param_2 + -0x34 + (longlong)puVar12);
        puVar12[-0xc] = *(uint *)(param_2 + -0x30 + (longlong)puVar12);
        puVar12[-0xb] = 0;
        puVar12[-10] = 0;
        puVar12[-9] = 0;
        puVar12[-8] = 0x80000000;
        uVar3 = *(uint *)(param_2 + -0x24 + (longlong)puVar12);
        puVar14 = *(undefined8 **)(param_2 + -0x2c + (longlong)puVar12);
        if (0 < (int)uVar3) {
          puVar9 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 4);
          *(undefined8 **)(puVar12 + -0xb) = puVar9;
          uVar11 = (ulonglong)uVar3;
          puVar12[-9] = uVar3;
          puVar12[-8] = uVar3;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              uVar7 = *puVar14;
              uVar8 = puVar14[1];
              puVar14 = puVar14 + 2;
              *puVar9 = uVar7;
              puVar9[1] = uVar8;
            }
            uVar11 = uVar11 - 1;
            puVar9 = puVar9 + 2;
          } while (uVar11 != 0);
        }
        *(undefined8 *)(puVar12 + -7) = *(undefined8 *)(param_2 + -0x1c + (longlong)puVar12);
        puVar12[-5] = *(uint *)(param_2 + -0x14 + (longlong)puVar12);
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        *puVar12 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar12);
        puVar14 = *(undefined8 **)(param_2 + -0xc + (longlong)puVar12);
        if (0 < (int)uVar3) {
          puVar9 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0xc);
          *(undefined8 **)(puVar12 + -3) = puVar9;
          puVar12[-1] = uVar3;
          uVar11 = (ulonglong)uVar3;
          *puVar12 = uVar3;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = *puVar14;
              puVar1 = puVar14 + 1;
              puVar14 = (undefined8 *)((longlong)puVar14 + 0xc);
              *(undefined4 *)(puVar9 + 1) = *(undefined4 *)puVar1;
            }
            uVar11 = uVar11 - 1;
            puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
          } while (uVar11 != 0);
        }
        *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar12);
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0x80000000;
        uVar3 = *(uint *)(param_2 + 0x14 + (longlong)puVar12);
        uVar11 = (ulonglong)uVar3;
        plVar13 = *(longlong **)(param_2 + 0xc + (longlong)puVar12);
        if (0 < (int)uVar3) {
          plVar10 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 3);
          *(longlong **)(puVar12 + 3) = plVar10;
          puVar12[5] = uVar3;
          puVar12[6] = uVar3;
          do {
            if (plVar10 != (longlong *)0x0) {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              plVar13 = plVar13 + 1;
            }
            uVar11 = uVar11 - 1;
            plVar10 = plVar10 + 1;
          } while (uVar11 != 0);
        }
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0x80000000;
        uVar3 = *(uint *)(param_2 + 0x24 + (longlong)puVar12);
        uVar11 = (ulonglong)uVar3;
        plVar13 = *(longlong **)(param_2 + 0x1c + (longlong)puVar12);
        if (0 < (int)uVar3) {
          plVar10 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 3);
          *(longlong **)(puVar12 + 7) = plVar10;
          puVar12[9] = uVar3;
          puVar12[10] = uVar3;
          do {
            if (plVar10 != (longlong *)0x0) {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              plVar13 = plVar13 + 1;
            }
            uVar11 = uVar11 - 1;
            plVar10 = plVar10 + 1;
          } while (uVar11 != 0);
        }
        *(undefined1 *)(puVar12 + 0xb) = *(undefined1 *)(param_2 + 0x2c + (longlong)puVar12);
        FUN_144be3700(puVar12 + 0xd,param_2 + 0x34 + (longlong)puVar12);
      }
      puVar12 = puVar12 + 0x48;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 144d0cbb0 FUN_144d0cbb0 body=94 status=ok
// SIG undefined FUN_144d0cbb0(void)

void FUN_144d0cbb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x120 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x24;
      plVar2 = plVar2 + -0x24;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0cc10 FUN_144d0cc10 body=73 status=ok
// SIG undefined FUN_144d0cc10(void)

void FUN_144d0cc10(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144d0f5e0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0cc60 FUN_144d0cc60 body=91 status=ok
// SIG undefined FUN_144d0cc60(void)

void FUN_144d0cc60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144d0ccc0 FUN_144d0ccc0 body=503 status=ok
// SIG undefined FUN_144d0ccc0(void)

void FUN_144d0ccc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
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
          FUN_144d10db0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar12[-1]) {
          lVar4 = *plVar1;
          for (lVar7 = (longlong)(int)plVar12[-1] * 0x40 + *plVar1;
              lVar7 != (longlong)iVar2 * 0x40 + lVar4; lVar7 = lVar7 + -0x40) {
            FUN_144d0e5c0(lVar7 + -0x38);
          }
        }
        lVar4 = *plVar1;
        iVar5 = iVar2;
        if ((int)plVar12[-1] < iVar2) {
          iVar5 = (int)plVar12[-1];
        }
        if ((lVar4 != lVar3) && (lVar7 = (longlong)iVar5, 0 < iVar5)) {
          lVar8 = lVar4 + 8;
          do {
            *(undefined4 *)(lVar8 + -8) = *(undefined4 *)((lVar3 - lVar4) + -8 + lVar8);
            FUN_144d0e910(lVar8,(lVar3 - lVar4) + lVar8);
            lVar8 = lVar8 + 0x40;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        puVar9 = (undefined4 *)((longlong)iVar5 * 0x40 + lVar3);
        if (0 < iVar2 - iVar5) {
          uVar10 = (ulonglong)(uint)(iVar2 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x40);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
              FUN_144d0e6a0(puVar11 + 2,puVar9 + 2);
              puVar9 = puVar9 + 0x10;
            }
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 0x10;
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



// FUNCTION 144d0cec0 FUN_144d0cec0 body=341 status=ok
// SIG undefined FUN_144d0cec0(void)

undefined8 * FUN_144d0cec0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = param_1[5];
  lVar4 = lVar3 + (longlong)*(int *)(param_1 + 6) * 8;
  while (lVar4 != lVar3) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  plVar1 = (longlong *)param_1[3];
  plVar5 = plVar1 + (longlong)*(int *)(param_1 + 4) * 0xc;
  while (plVar5 != plVar1) {
    plVar2 = plVar5 + -2;
    plVar5 = plVar5 + -0xc;
    if (*plVar2 != 0) {
      FUN_144b3f230();
    }
    if (*plVar5 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x60);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 144d0d020 FUN_144d0d020 body=18 status=ok
// SIG undefined FUN_144d0d020(void)

undefined8 * FUN_144d0d020(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ffdc0;
  return param_2;
}



// FUNCTION 144d0d1a0 FUN_144d0d1a0 body=463 status=ok
// SIG undefined FUN_144d0d1a0(void)

void FUN_144d0d1a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar6 = (int *)(param_1 + 0x34);
    lVar8 = (longlong)param_4;
    do {
      if (piVar6 + -0xd != (int *)0x0) {
        piVar6[-0xb] = -1;
        piVar6[-10] = 0;
        piVar6[-9] = 1;
        piVar6[-8] = 0;
        *(undefined ***)(piVar6 + -0xd) = hkaiNavMeshGlobalRegionPruning::NavMeshRegions::vftable;
        piVar6[-7] = 0;
        piVar6[-6] = 0;
        iVar9 = 0;
        piVar6[-5] = 0;
        piVar6[-4] = -0x80000000;
        uVar4 = *(uint *)((longlong)piVar6 + param_2 + -0x14);
        puVar5 = *(undefined4 **)((longlong)piVar6 + param_2 + -0x1c);
        if (0 < (int)uVar4) {
          puVar3 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 2);
          *(undefined4 **)(piVar6 + -7) = puVar3;
          piVar6[-5] = uVar4;
          uVar7 = (ulonglong)uVar4;
          piVar6[-4] = uVar4;
          do {
            if (puVar3 != (undefined4 *)0x0) {
              uVar1 = *puVar5;
              puVar5 = puVar5 + 1;
              *puVar3 = uVar1;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        iVar2 = *(int *)((longlong)piVar6 + param_2 + -4);
        puVar5 = *(undefined4 **)((longlong)piVar6 + param_2 + -0xc);
        if (0 < iVar2) {
          puVar3 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)iVar2 << 2);
          *(undefined4 **)(piVar6 + -3) = puVar3;
          piVar6[-1] = iVar2;
          *piVar6 = iVar2;
          if (3 < iVar2) {
            uVar4 = (iVar2 - 4U >> 2) + 1;
            uVar7 = (ulonglong)uVar4;
            iVar9 = uVar4 * 4;
            do {
              if (puVar3 != (undefined4 *)0x0) {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                *puVar3 = uVar1;
              }
              if (puVar3 + 1 != (undefined4 *)0x0) {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar3[1] = uVar1;
              }
              if (puVar3 + 2 != (undefined4 *)0x0) {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar3[2] = uVar1;
              }
              if (puVar3 + 3 != (undefined4 *)0x0) {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar3[3] = uVar1;
              }
              puVar3 = puVar3 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (iVar2 <= iVar9) goto LAB_144d0d33b;
          }
          uVar7 = (ulonglong)(uint)(iVar2 - iVar9);
          do {
            if (puVar3 != (undefined4 *)0x0) {
              uVar1 = *puVar5;
              puVar5 = puVar5 + 1;
              *puVar3 = uVar1;
            }
            puVar3 = puVar3 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
LAB_144d0d33b:
      piVar6 = piVar6 + 0xe;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144d0d370 FUN_144d0d370 body=77 status=ok
// SIG undefined FUN_144d0d370(void)

void FUN_144d0d370(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144d0d3c0 FUN_144d0d3c0 body=292 status=ok
// SIG undefined FUN_144d0d3c0(void)

void FUN_144d0d3c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 4);
        puVar5[-1] = uVar3;
      }
      puVar2 = (uint *)((longlong)puVar5 + param_2 + 4);
      puVar1 = puVar5 + 1;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar3) {
          FUN_144c31320(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 4);
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 0xe;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144d0d4f0 FUN_144d0d4f0 body=55 status=ok
// SIG undefined FUN_144d0d4f0(void)

void FUN_144d0d4f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fc6080(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0d530 FUN_144d0d530 body=406 status=ok
// SIG undefined FUN_144d0d530(void)

undefined4 * FUN_144d0d530(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x80000000;
  uVar1 = param_2[0x22];
  puVar9 = *(undefined4 **)(param_2 + 0x20);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    uVar8 = (ulonglong)uVar1;
    param_1[0x22] = uVar1;
    param_1[0x23] = uVar1;
    puVar7 = *(undefined4 **)(param_1 + 0x20);
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        puVar9 = puVar9 + 4;
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 4;
    } while (uVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  FUN_144be3700(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 144d0d6d0 FUN_144d0d6d0 body=372 status=ok
// SIG undefined FUN_144d0d6d0(void)

undefined4 * FUN_144d0d6d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  if ((undefined8 *)(param_2 + 0x20) != puVar1) {
    iVar2 = param_2[0x22];
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    if ((int)(param_1[0x23] & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    param_1[0x22] = iVar2;
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  FUN_144be3810(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 144d0d850 FUN_144d0d850 body=290 status=ok
// SIG undefined FUN_144d0d850(void)

undefined4 * FUN_144d0d850(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  uVar2 = param_2[6];
  puVar11 = *(undefined4 **)(param_2 + 4);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
    *(undefined8 *)(param_1 + 4) = uVar7;
    uVar10 = (ulonglong)uVar2;
    param_1[6] = uVar2;
    param_1[7] = uVar2;
    puVar8 = *(undefined4 **)(param_1 + 4);
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar11 = puVar11 + 4;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 4;
    } while (uVar10 != 0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  uVar2 = param_2[10];
  puVar12 = *(undefined8 **)(param_2 + 8);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
    *(undefined8 *)(param_1 + 8) = uVar7;
    uVar10 = (ulonglong)uVar2;
    param_1[10] = uVar2;
    param_1[0xb] = uVar2;
    puVar9 = *(undefined8 **)(param_1 + 8);
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar7 = puVar12[1];
        *puVar9 = *puVar12;
        puVar9[1] = uVar7;
        puVar1 = puVar12 + 2;
        uVar7 = puVar12[3];
        puVar12 = puVar12 + 4;
        puVar9[2] = *puVar1;
        puVar9[3] = uVar7;
      }
      uVar10 = uVar10 - 1;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
  }
  return param_1;
}



// FUNCTION 144d0d980 FUN_144d0d980 body=1178 status=ok
// SIG undefined FUN_144d0d980(void)

undefined8 * FUN_144d0d980(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshDeprecatedGenerationUtilsSettings::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar6;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 100) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0xf) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  FUN_144d0d850(param_1 + 0x12,param_2 + 0x90);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0xd8);
  uVar5 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  uVar4 = *(undefined4 *)(param_2 + 0xe8);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0x1d) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar5;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0xf8);
  uVar12 = (ulonglong)uVar1;
  plVar9 = *(longlong **)(param_2 + 0xf0);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x1e] = uVar6;
    *(uint *)(param_1 + 0x1f) = uVar1;
    *(uint *)((longlong)param_1 + 0xfc) = uVar1;
    plVar8 = (longlong *)param_1[0x1e];
    do {
      if (plVar8 != (longlong *)0x0) {
        lVar2 = *plVar9;
        *plVar8 = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        plVar9 = plVar9 + 1;
      }
      uVar12 = uVar12 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar12 != 0);
  }
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x108);
  uVar12 = (ulonglong)uVar1;
  plVar9 = *(longlong **)(param_2 + 0x100);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x20] = uVar6;
    *(uint *)(param_1 + 0x21) = uVar1;
    *(uint *)((longlong)param_1 + 0x10c) = uVar1;
    plVar8 = (longlong *)param_1[0x20];
    do {
      if (plVar8 != (longlong *)0x0) {
        lVar2 = *plVar9;
        *plVar8 = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        plVar9 = plVar9 + 1;
      }
      uVar12 = uVar12 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar12 != 0);
  }
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x118);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x128);
  puVar10 = *(undefined8 **)(param_2 + 0x120);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x24] = uVar6;
    uVar12 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x25) = uVar1;
    *(uint *)((longlong)param_1 + 300) = uVar1;
    puVar7 = (undefined8 *)param_1[0x24];
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar6 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar7 = uVar6;
      }
      uVar12 = uVar12 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar12 != 0);
  }
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x130);
  *(undefined8 *)((longlong)param_1 + 0x134) = *(undefined8 *)(param_2 + 0x134);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)((longlong)param_1 + 0x141) = *(undefined1 *)(param_2 + 0x141);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x148);
  *(undefined1 *)((longlong)param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)((longlong)param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined1 *)((longlong)param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
  *(undefined1 *)((longlong)param_1 + 0x156) = *(undefined1 *)(param_2 + 0x156);
  FUN_144d0d530(param_1 + 0x2b,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x200);
  *(undefined1 *)((longlong)param_1 + 0x201) = *(undefined1 *)(param_2 + 0x201);
  FUN_144be3700(param_1 + 0x41,param_2 + 0x208);
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x218);
  lVar2 = *(longlong *)(param_2 + 0x210);
  if (0 < (int)uVar1) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0xf0);
    param_1[0x42] = uVar6;
    puVar11 = (undefined1 *)(lVar2 + 0xc);
    *(uint *)(param_1 + 0x43) = uVar1;
    uVar12 = (ulonglong)uVar1;
    *(uint *)((longlong)param_1 + 0x21c) = uVar1;
    plVar9 = (longlong *)param_1[0x42];
    do {
      if (plVar9 != (longlong *)0x0) {
        lVar2 = *(longlong *)(puVar11 + -0xc);
        *plVar9 = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(puVar11 + -4);
        *(undefined1 *)((longlong)plVar9 + 0xc) = *puVar11;
        *(undefined4 *)(plVar9 + 2) = *(undefined4 *)(puVar11 + 4);
        uVar6 = *(undefined8 *)(puVar11 + 0x10);
        *(undefined8 *)((longlong)plVar9 + 0x14) = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)((longlong)plVar9 + 0x1c) = uVar6;
        uVar6 = *(undefined8 *)(puVar11 + 0x20);
        *(undefined8 *)((longlong)plVar9 + 0x24) = *(undefined8 *)(puVar11 + 0x18);
        *(undefined8 *)((longlong)plVar9 + 0x2c) = uVar6;
        uVar3 = *(undefined4 *)(puVar11 + 0x2c);
        uVar4 = *(undefined4 *)(puVar11 + 0x30);
        uVar5 = *(undefined4 *)(puVar11 + 0x34);
        *(undefined4 *)((longlong)plVar9 + 0x34) = *(undefined4 *)(puVar11 + 0x28);
        *(undefined4 *)(plVar9 + 7) = uVar3;
        *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar4;
        *(undefined4 *)(plVar9 + 8) = uVar5;
        *(undefined8 *)((longlong)plVar9 + 0x44) = *(undefined8 *)(puVar11 + 0x38);
        FUN_144d0d530(plVar9 + 10,puVar11 + 0x44);
        puVar11 = puVar11 + 0xf0;
      }
      uVar12 = uVar12 - 1;
      plVar9 = plVar9 + 0x1e;
    } while (uVar12 != 0);
  }
  return param_1;
}



// FUNCTION 144d0de20 FUN_144d0de20 body=1952 status=ok
// SIG undefined FUN_144d0de20(void)

longlong FUN_144d0de20(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  
  puVar18 = (undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x54) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 100) = uVar3;
  uVar6 = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
  if ((undefined8 *)(param_2 + 0xa0) != puVar18) {
    iVar2 = *(int *)(param_2 + 0xa8);
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar18,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar18,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0xa8) = iVar2;
  }
  puVar18 = (undefined8 *)(param_1 + 0xb0);
  if ((undefined8 *)(param_2 + 0xb0) != puVar18) {
    iVar2 = *(int *)(param_2 + 0xb8);
    uVar3 = *(undefined8 *)(param_2 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar2) {
      FUN_144d0ff80(puVar18,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar18,uVar3,(longlong)iVar2 << 5);
    *(int *)(param_1 + 0xb8) = iVar2;
  }
  plVar16 = (longlong *)(param_1 + 0xf0);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  uVar6 = *(undefined4 *)(param_2 + 0xd4);
  uVar7 = *(undefined4 *)(param_2 + 0xd8);
  uVar8 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0xd8) = uVar7;
  *(undefined4 *)(param_1 + 0xdc) = uVar8;
  uVar6 = *(undefined4 *)(param_2 + 0xe4);
  uVar7 = *(undefined4 *)(param_2 + 0xe8);
  uVar8 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar6;
  *(undefined4 *)(param_1 + 0xe8) = uVar7;
  *(undefined4 *)(param_1 + 0xec) = uVar8;
  if ((longlong *)(param_2 + 0xf0) != plVar16) {
    iVar2 = *(int *)(param_2 + 0xf8);
    plVar12 = *(longlong **)(param_2 + 0xf0);
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar2) {
      FUN_144d10020(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0xf8)) {
      lVar17 = *plVar16;
      lVar10 = lVar17 + (longlong)*(int *)(param_1 + 0xf8) * 8;
      while (lVar10 != lVar17 + (longlong)iVar2 * 8) {
        plVar11 = (longlong *)(lVar10 + -8);
        lVar10 = lVar10 + -8;
        if (*plVar11 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar11 = (longlong *)*plVar16;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0xf8) < iVar2) {
      iVar5 = *(int *)(param_1 + 0xf8);
    }
    if ((plVar11 != plVar12) && (lVar10 = (longlong)iVar5, 0 < iVar5)) {
      lVar17 = (longlong)plVar12 - (longlong)plVar11;
      do {
        lVar13 = *(longlong *)((longlong)plVar11 + lVar17);
        if (*plVar11 != lVar13) {
          if (lVar13 != 0) {
            FUN_144b3d910();
          }
          lVar13 = *plVar11;
          *plVar11 = *(longlong *)((longlong)plVar11 + lVar17);
          if (lVar13 != 0) {
            FUN_144b3f230();
          }
        }
        plVar11 = plVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    plVar12 = plVar12 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar15 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar16 = (longlong *)(*plVar16 + (longlong)iVar5 * 8);
      do {
        if (plVar16 != (longlong *)0x0) {
          lVar10 = *plVar12;
          *plVar16 = lVar10;
          if (lVar10 != 0) {
            FUN_144b3d910();
          }
          plVar12 = plVar12 + 1;
        }
        uVar15 = uVar15 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar15 != 0);
    }
    *(int *)(param_1 + 0xf8) = iVar2;
  }
  plVar16 = (longlong *)(param_1 + 0x100);
  if ((longlong *)(param_2 + 0x100) != plVar16) {
    iVar2 = *(int *)(param_2 + 0x108);
    plVar12 = *(longlong **)(param_2 + 0x100);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar2) {
      FUN_144d10100(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x108)) {
      lVar17 = *plVar16;
      lVar10 = lVar17 + (longlong)*(int *)(param_1 + 0x108) * 8;
      while (lVar10 != lVar17 + (longlong)iVar2 * 8) {
        plVar11 = (longlong *)(lVar10 + -8);
        lVar10 = lVar10 + -8;
        if (*plVar11 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar11 = (longlong *)*plVar16;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0x108) < iVar2) {
      iVar5 = *(int *)(param_1 + 0x108);
    }
    if ((plVar11 != plVar12) && (lVar10 = (longlong)iVar5, 0 < iVar5)) {
      lVar17 = (longlong)plVar12 - (longlong)plVar11;
      do {
        lVar13 = *(longlong *)(lVar17 + (longlong)plVar11);
        if (*plVar11 != lVar13) {
          if (lVar13 != 0) {
            FUN_144b3d910();
          }
          lVar13 = *plVar11;
          *plVar11 = *(longlong *)(lVar17 + (longlong)plVar11);
          if (lVar13 != 0) {
            FUN_144b3f230();
          }
        }
        plVar11 = plVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    plVar12 = plVar12 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar15 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar16 = (longlong *)(*plVar16 + (longlong)iVar5 * 8);
      do {
        if (plVar16 != (longlong *)0x0) {
          lVar10 = *plVar12;
          *plVar16 = lVar10;
          if (lVar10 != 0) {
            FUN_144b3d910();
          }
          plVar12 = plVar12 + 1;
        }
        uVar15 = uVar15 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar15 != 0);
    }
    *(int *)(param_1 + 0x108) = iVar2;
  }
  plVar16 = (longlong *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  if ((longlong *)(param_2 + 0x120) != plVar16) {
    iVar2 = *(int *)(param_2 + 0x128);
    puVar18 = *(undefined8 **)(param_2 + 0x120);
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar2) {
      FUN_144d101e0(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar9 = (undefined8 *)*plVar16;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0x128) < iVar2) {
      iVar5 = *(int *)(param_1 + 0x128);
    }
    if ((puVar9 != puVar18) && (lVar10 = (longlong)iVar5, 0 < iVar5)) {
      lVar17 = (longlong)puVar18 - (longlong)puVar9;
      do {
        *puVar9 = *(undefined8 *)(lVar17 + (longlong)puVar9);
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    puVar18 = puVar18 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar15 = (ulonglong)(uint)(iVar2 - iVar5);
      puVar9 = (undefined8 *)(*plVar16 + (longlong)iVar5 * 8);
      do {
        if (puVar9 != (undefined8 *)0x0) {
          uVar3 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar9 = uVar3;
        }
        uVar15 = uVar15 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar15 != 0);
    }
    *(int *)(param_1 + 0x128) = iVar2;
  }
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(param_2 + 0x141);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined1 *)(param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
  *(undefined1 *)(param_1 + 0x156) = *(undefined1 *)(param_2 + 0x156);
  FUN_144d0d6d0(param_1 + 0x158,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x201) = *(undefined1 *)(param_2 + 0x201);
  FUN_144be3810(param_1 + 0x208,param_2 + 0x208);
  plVar16 = (longlong *)(param_1 + 0x210);
  if ((longlong *)(param_2 + 0x210) != plVar16) {
    iVar2 = *(int *)(param_2 + 0x218);
    lVar10 = *(longlong *)(param_2 + 0x210);
    if ((int)(*(uint *)(param_1 + 0x21c) & 0x7fffffff) < iVar2) {
      FUN_144d102a0(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x218)) {
      lVar17 = *plVar16;
      lVar13 = (longlong)*(int *)(param_1 + 0x218) * 0xf0 + *plVar16;
      while (lVar13 != (longlong)iVar2 * 0xf0 + lVar17) {
        lVar13 = lVar13 + -0xf0;
        FUN_144fc5bd0(lVar13);
      }
    }
    lVar17 = *plVar16;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0x218) < iVar2) {
      iVar5 = *(int *)(param_1 + 0x218);
    }
    if ((lVar17 != lVar10) && (lVar13 = (longlong)iVar5, 0 < iVar5)) {
      puVar14 = (undefined4 *)(lVar17 + 8);
      lVar17 = lVar10 - lVar17;
      do {
        lVar4 = *(longlong *)(lVar17 + -8 + (longlong)puVar14);
        if (*(longlong *)(puVar14 + -2) != lVar4) {
          if (lVar4 != 0) {
            FUN_144b3d910();
          }
          lVar4 = *(longlong *)(puVar14 + -2);
          *(undefined8 *)(puVar14 + -2) = *(undefined8 *)(lVar17 + -8 + (longlong)puVar14);
          if (lVar4 != 0) {
            FUN_144b3f230();
          }
        }
        *puVar14 = *(undefined4 *)(lVar17 + (longlong)puVar14);
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(lVar17 + 4 + (longlong)puVar14);
        puVar14[2] = *(undefined4 *)(lVar17 + 8 + (longlong)puVar14);
        puVar18 = (undefined8 *)(lVar17 + 0xc + (longlong)puVar14);
        uVar3 = puVar18[1];
        *(undefined8 *)(puVar14 + 3) = *puVar18;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        puVar18 = (undefined8 *)(lVar17 + 0x1c + (longlong)puVar14);
        uVar3 = puVar18[1];
        *(undefined8 *)(puVar14 + 7) = *puVar18;
        *(undefined8 *)(puVar14 + 9) = uVar3;
        puVar1 = (undefined4 *)(lVar17 + 0x2c + (longlong)puVar14);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar14[0xb] = *puVar1;
        puVar14[0xc] = uVar6;
        puVar14[0xd] = uVar7;
        puVar14[0xe] = uVar8;
        *(undefined8 *)(puVar14 + 0xf) = *(undefined8 *)(lVar17 + 0x3c + (longlong)puVar14);
        FUN_144d0d6d0(puVar14 + 0x12,lVar17 + 0x48 + (longlong)puVar14);
        puVar14 = puVar14 + 0x3c;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    plVar12 = (longlong *)((longlong)iVar5 * 0xf0 + lVar10);
    if (0 < iVar2 - iVar5) {
      uVar15 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar16 = (longlong *)(*plVar16 + (longlong)iVar5 * 0xf0);
      do {
        if (plVar16 != (longlong *)0x0) {
          lVar10 = *plVar12;
          *plVar16 = lVar10;
          if (lVar10 != 0) {
            FUN_144b3d910();
          }
          *(int *)(plVar16 + 1) = (int)plVar12[1];
          *(undefined1 *)((longlong)plVar16 + 0xc) = *(undefined1 *)((longlong)plVar12 + 0xc);
          *(int *)(plVar16 + 2) = (int)plVar12[2];
          uVar3 = *(undefined8 *)((longlong)plVar12 + 0x1c);
          *(undefined8 *)((longlong)plVar16 + 0x14) = *(undefined8 *)((longlong)plVar12 + 0x14);
          *(undefined8 *)((longlong)plVar16 + 0x1c) = uVar3;
          uVar3 = *(undefined8 *)((longlong)plVar12 + 0x2c);
          *(undefined8 *)((longlong)plVar16 + 0x24) = *(undefined8 *)((longlong)plVar12 + 0x24);
          *(undefined8 *)((longlong)plVar16 + 0x2c) = uVar3;
          lVar10 = plVar12[7];
          uVar6 = *(undefined4 *)((longlong)plVar12 + 0x3c);
          lVar17 = plVar12[8];
          *(undefined4 *)((longlong)plVar16 + 0x34) = *(undefined4 *)((longlong)plVar12 + 0x34);
          *(int *)(plVar16 + 7) = (int)lVar10;
          *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar6;
          *(int *)(plVar16 + 8) = (int)lVar17;
          *(undefined8 *)((longlong)plVar16 + 0x44) = *(undefined8 *)((longlong)plVar12 + 0x44);
          FUN_144d0d530(plVar16 + 10,plVar12 + 10);
          plVar12 = plVar12 + 0x1e;
        }
        uVar15 = uVar15 - 1;
        plVar16 = plVar16 + 0x1e;
      } while (uVar15 != 0);
    }
    *(int *)(param_1 + 0x218) = iVar2;
  }
  return param_1;
}



// FUNCTION 144d0e5c0 FUN_144d0e5c0 body=216 status=ok
// SIG undefined FUN_144d0e5c0(void)

void FUN_144d0e5c0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 2);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 2);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  if (*param_1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144d0e6a0 FUN_144d0e6a0 body=376 status=ok
// SIG undefined FUN_144d0e6a0(void)

longlong * FUN_144d0e6a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  if (lVar3 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = *(uint *)(param_2 + 2);
  puVar5 = (undefined4 *)param_2[1];
  if (0 < (int)uVar1) {
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[1] = lVar3;
    uVar6 = (ulonglong)uVar1;
    *(uint *)(param_1 + 2) = uVar1;
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
    puVar4 = (undefined4 *)param_1[1];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 4);
  puVar5 = (undefined4 *)param_2[3];
  if (0 < (int)uVar1) {
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[3] = lVar3;
    uVar6 = (ulonglong)uVar1;
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    puVar4 = (undefined4 *)param_1[3];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 6);
  puVar5 = (undefined4 *)param_2[5];
  if (0 < (int)uVar1) {
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[5] = lVar3;
    uVar6 = (ulonglong)uVar1;
    *(uint *)(param_1 + 6) = uVar1;
    *(uint *)((longlong)param_1 + 0x34) = uVar1;
    puVar4 = (undefined4 *)param_1[5];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 144d0e820 FUN_144d0e820 body=235 status=ok
// SIG undefined FUN_144d0e820(void)

undefined8 * FUN_144d0e820(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  FUN_144c52690(param_2 + 1,&PTR_vftable_14c6e47a0);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_144c52690(param_2 + 3,&PTR_vftable_14c6e47a0);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[3] = 0;
  param_2[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144c33ad0(param_2 + 5,&PTR_vftable_14c6e47a0);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[5] = 0;
  param_2[6] = 0;
  return param_1;
}



// FUNCTION 144d0e910 FUN_144d0e910 body=305 status=ok
// SIG undefined FUN_144d0e910(void)

longlong * FUN_144d0e910(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*param_1 != *param_2) {
    if (*param_2 != 0) {
      FUN_144b3d910();
    }
    lVar3 = *param_1;
    *param_1 = *param_2;
    if (lVar3 != 0) {
      FUN_144b3f230();
    }
  }
  plVar1 = param_1 + 1;
  if (param_2 + 1 != plVar1) {
    iVar2 = (int)param_2[2];
    lVar3 = param_2[1];
    if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) < iVar2) {
      FUN_144c6c5b0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*plVar1,lVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 2) = iVar2;
  }
  plVar1 = param_1 + 3;
  if (param_2 + 3 != plVar1) {
    iVar2 = (int)param_2[4];
    lVar3 = param_2[3];
    if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) < iVar2) {
      FUN_144c6c5b0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*plVar1,lVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 4) = iVar2;
  }
  plVar1 = param_1 + 5;
  if (param_2 + 5 != plVar1) {
    iVar2 = (int)param_2[6];
    lVar3 = param_2[5];
    if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_144c36810(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*plVar1,lVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 6) = iVar2;
  }
  return param_1;
}



// FUNCTION 144d0ea50 FUN_144d0ea50 body=173 status=ok
// SIG undefined FUN_144d0ea50(void)

void FUN_144d0ea50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar1 = *param_1;
  for (lVar2 = (longlong)(int)param_1[1] * 0x40 + lVar1; lVar2 != lVar1; lVar2 = lVar2 + -0x40) {
    FUN_144d0e5c0(lVar2 + -0x38);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 6);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d0eb00 FUN_144d0eb00 body=178 status=ok
// SIG undefined FUN_144d0eb00(void)

undefined8 * FUN_144d0eb00(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar3 = (undefined4 *)*param_2;
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 6);
    *param_1 = puVar2;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
        FUN_144d0e6a0(puVar2 + 2,puVar3 + 2);
        puVar3 = puVar3 + 0x10;
      }
      uVar4 = uVar4 - 1;
      puVar2 = puVar2 + 0x10;
    } while (uVar4 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144d0ebc0 FUN_144d0ebc0 body=1056 status=ok
// SIG undefined FUN_144d0ebc0(void)

longlong FUN_144d0ebc0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_144b3d910();
    }
    lVar22 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    if (lVar22 != 0) {
      FUN_144b3f230();
    }
  }
  plVar21 = (longlong *)(param_1 + 0x20);
  if ((longlong *)(param_2 + 0x20) != plVar21) {
    iVar3 = *(int *)(param_2 + 0x28);
    plVar15 = *(longlong **)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar3) {
      FUN_144d10720(plVar21,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    if (iVar3 < *(int *)(param_1 + 0x28)) {
      lVar22 = *plVar21;
      lVar13 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + *plVar21;
      while (lVar13 != (longlong)iVar3 * 0x10 + lVar22) {
        plVar16 = (longlong *)(lVar13 + -0x10);
        lVar13 = lVar13 + -0x10;
        if (*plVar16 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar16 = (longlong *)*plVar21;
    iVar6 = iVar3;
    if (*(int *)(param_1 + 0x28) < iVar3) {
      iVar6 = *(int *)(param_1 + 0x28);
    }
    if ((plVar16 != plVar15) && (lVar22 = (longlong)iVar6, 0 < iVar6)) {
      lVar13 = (longlong)plVar16 - (longlong)plVar15;
      plVar14 = plVar15;
      do {
        if (*(longlong *)(lVar13 + (longlong)plVar14) != *plVar14) {
          if (*plVar14 != 0) {
            FUN_144b3d910();
          }
          lVar23 = *(longlong *)(lVar13 + (longlong)plVar14);
          *(longlong *)(lVar13 + (longlong)plVar14) = *plVar14;
          if (lVar23 != 0) {
            FUN_144b3f230();
          }
        }
        *(undefined4 *)((longlong)plVar14 + lVar13 + 8) =
             *(undefined4 *)
              ((longlong)plVar15 + (longlong)plVar14 + ((lVar13 + 8) - (longlong)plVar16));
        lVar22 = lVar22 + -1;
        plVar14 = plVar14 + 2;
      } while (lVar22 != 0);
    }
    plVar15 = plVar15 + (longlong)iVar6 * 2;
    if (0 < iVar3 - iVar6) {
      uVar19 = (ulonglong)(uint)(iVar3 - iVar6);
      plVar21 = (longlong *)(*plVar21 + (longlong)iVar6 * 0x10);
      do {
        if (plVar21 != (longlong *)0x0) {
          lVar22 = *plVar15;
          *plVar21 = lVar22;
          if (lVar22 != 0) {
            FUN_144b3d910();
          }
          plVar16 = plVar15 + 1;
          plVar15 = plVar15 + 2;
          *(int *)(plVar21 + 1) = (int)*plVar16;
        }
        uVar19 = uVar19 - 1;
        plVar21 = plVar21 + 2;
      } while (uVar19 != 0);
    }
    *(int *)(param_1 + 0x28) = iVar3;
  }
  plVar21 = (longlong *)(param_1 + 0x30);
  if ((longlong *)(param_2 + 0x30) != plVar21) {
    iVar3 = *(int *)(param_2 + 0x38);
    lVar22 = *(longlong *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar3) {
      FUN_144d10800(plVar21,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    if (iVar3 < *(int *)(param_1 + 0x38)) {
      lVar13 = *plVar21;
      plVar15 = (longlong *)(lVar13 + (longlong)*(int *)(param_1 + 0x38) * 0x18);
      while (plVar15 != (longlong *)(lVar13 + (longlong)iVar3 * 0x18)) {
        plVar16 = plVar15 + -3;
        *(undefined4 *)(plVar15 + -2) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar15 + -0xc)) && (*plVar16 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar16,
                     (ulonglong)(*(uint *)((longlong)plVar15 + -0xc) & 0x7fffffff) << 4);
        }
        *plVar16 = 0;
        *(undefined4 *)((longlong)plVar15 + -0xc) = 0x80000000;
        plVar15 = plVar16;
      }
    }
    lVar13 = *plVar21;
    iVar6 = iVar3;
    if (*(int *)(param_1 + 0x38) < iVar3) {
      iVar6 = *(int *)(param_1 + 0x38);
    }
    if ((lVar13 != lVar22) && (lVar23 = (longlong)iVar6, 0 < iVar6)) {
      puVar17 = (uint *)(lVar13 + 0xc);
      lVar13 = lVar22 - lVar13;
      do {
        puVar2 = (uint *)(lVar13 + -0xc + (longlong)puVar17);
        puVar1 = puVar17 + -3;
        if (puVar2 != puVar1) {
          uVar5 = *(undefined8 *)puVar2;
          uVar4 = *(uint *)(lVar13 + -4 + (longlong)puVar17);
          if ((int)(*puVar17 & 0x7fffffff) < (int)uVar4) {
            FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
          }
          FUN_144b3d470(*(undefined8 *)puVar1,uVar5,(longlong)(int)uVar4 << 4);
          puVar17[-1] = uVar4;
        }
        puVar17[1] = *(uint *)((longlong)puVar17 + lVar13 + 4);
        puVar17 = puVar17 + 6;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    plVar15 = (longlong *)(lVar22 + (longlong)iVar6 * 0x18);
    if (0 < iVar3 - iVar6) {
      uVar19 = (ulonglong)(uint)(iVar3 - iVar6);
      puVar20 = (undefined8 *)(*plVar21 + (longlong)iVar6 * 0x18);
      do {
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = 0;
          *(undefined4 *)(puVar20 + 1) = 0;
          *(undefined4 *)((longlong)puVar20 + 0xc) = 0x80000000;
          uVar4 = *(uint *)(plVar15 + 1);
          puVar18 = (undefined4 *)0x0;
          if ((undefined4 *)*plVar15 != (undefined4 *)0x0) {
            puVar18 = (undefined4 *)*plVar15;
          }
          if (0 < (int)uVar4) {
            puVar11 = (undefined4 *)
                      (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 4);
            *puVar20 = puVar11;
            uVar12 = (ulonglong)uVar4;
            *(uint *)(puVar20 + 1) = uVar4;
            *(uint *)((longlong)puVar20 + 0xc) = uVar4;
            do {
              if (puVar11 != (undefined4 *)0x0) {
                uVar7 = *puVar18;
                uVar8 = puVar18[1];
                uVar9 = puVar18[2];
                uVar10 = puVar18[3];
                puVar18 = puVar18 + 4;
                *puVar11 = uVar7;
                puVar11[1] = uVar8;
                puVar11[2] = uVar9;
                puVar11[3] = uVar10;
              }
              uVar12 = uVar12 - 1;
              puVar11 = puVar11 + 4;
            } while (uVar12 != 0);
          }
          plVar21 = plVar15 + 2;
          plVar15 = plVar15 + 3;
          *(int *)(puVar20 + 2) = (int)*plVar21;
        }
        uVar19 = uVar19 - 1;
        puVar20 = puVar20 + 3;
      } while (uVar19 != 0);
    }
    *(int *)(param_1 + 0x38) = iVar3;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  return param_1;
}



// FUNCTION 144d0efe0 FUN_144d0efe0 body=338 status=ok
// SIG undefined FUN_144d0efe0(void)

longlong * FUN_144d0efe0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  
  if (param_2 != param_1) {
    lVar7 = 0;
    lVar6 = *param_2 + (longlong)param_2;
    if (*param_2 == 0) {
      lVar6 = lVar7;
    }
    uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    uVar2 = *(uint *)(param_2 + 1);
    if ((int)*(uint *)(param_2 + 1) < (int)uVar4) {
      uVar2 = uVar4;
    }
    if ((lVar6 == 0) || ((longlong)(int)uVar2 << 7 == 0)) {
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        lVar6 = (longlong)param_1 + *param_1;
        if (*param_1 == 0) {
          lVar6 = lVar7;
        }
        (*DAT_14c787678)(0,lVar6,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lVar1 = *param_1;
      uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
      lVar5 = lVar1 + (longlong)param_1;
      if (lVar1 == 0) {
        lVar5 = lVar7;
      }
      uVar3 = *(uint *)(param_1 + 1);
      if ((int)*(uint *)(param_1 + 1) < (int)uVar4) {
        uVar3 = uVar4;
      }
      if (uVar2 != uVar3) {
        if ((int)*(uint *)((longlong)param_1 + 0xc) < 0) {
          lVar5 = lVar1 + (longlong)param_1;
          if (lVar1 == 0) {
            lVar5 = lVar7;
          }
          (*DAT_14c787678)(0,lVar5,0);
        }
        local_res8 = (longlong)(int)uVar2 << 7;
        lVar5 = (*DAT_14c787670)(0,&local_res8,0);
      }
      FUN_144b3d470(lVar5,lVar6,(longlong)(int)param_2[1] << 7);
      lVar6 = lVar5 - (longlong)param_1;
      if (lVar5 == 0) {
        lVar6 = lVar7;
      }
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
      uVar2 = *(uint *)(param_2 + 1);
      if ((int)*(uint *)(param_2 + 1) < (int)uVar4) {
        uVar2 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar2 | 0x80000000;
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 144d0f140 FUN_144d0f140 body=1178 status=ok
// SIG undefined FUN_144d0f140(void)

longlong FUN_144d0f140(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_144b3d910();
    }
    lVar8 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    if (lVar8 != 0) {
      FUN_144b3f230();
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if ((undefined8 *)(param_2 + 0x20) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_147e54f88(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar4,(longlong)iVar2 * 0xc);
    *(int *)(param_1 + 0x28) = iVar2;
  }
  plVar11 = (longlong *)(param_1 + 0x30);
  if ((longlong *)(param_2 + 0x30) != plVar11) {
    iVar2 = *(int *)(param_2 + 0x38);
    puVar13 = *(undefined4 **)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar2) {
      FUN_144d10970(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar7 = (undefined4 *)*plVar11;
    iVar6 = iVar2;
    if (*(int *)(param_1 + 0x38) < iVar2) {
      iVar6 = *(int *)(param_1 + 0x38);
    }
    if ((puVar7 != puVar13) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
      lVar12 = (longlong)puVar13 - (longlong)puVar7;
      do {
        *puVar7 = *(undefined4 *)(lVar12 + (longlong)puVar7);
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar13 = puVar13 + iVar6;
    if (0 < iVar2 - iVar6) {
      uVar14 = (ulonglong)(uint)(iVar2 - iVar6);
      puVar7 = (undefined4 *)(*plVar11 + (longlong)iVar6 * 4);
      do {
        if (puVar7 != (undefined4 *)0x0) {
          uVar3 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar7 = uVar3;
        }
        uVar14 = uVar14 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 0x38) = iVar2;
  }
  FUN_144d0efe0(param_1 + 0x40,param_2 + 0x40);
  plVar11 = (longlong *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  if ((longlong *)(param_2 + 0x58) != plVar11) {
    iVar2 = *(int *)(param_2 + 0x60);
    plVar10 = *(longlong **)(param_2 + 0x58);
    if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar2) {
      FUN_144d10a30(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x60)) {
      lVar12 = *plVar11;
      lVar8 = lVar12 + (longlong)*(int *)(param_1 + 0x60) * 8;
      while (lVar8 != lVar12 + (longlong)iVar2 * 8) {
        plVar9 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar9 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar9 = (longlong *)*plVar11;
    iVar6 = iVar2;
    if (*(int *)(param_1 + 0x60) < iVar2) {
      iVar6 = *(int *)(param_1 + 0x60);
    }
    if ((plVar9 != plVar10) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
      lVar12 = (longlong)plVar10 - (longlong)plVar9;
      do {
        lVar5 = *(longlong *)(lVar12 + (longlong)plVar9);
        if (*plVar9 != lVar5) {
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = *plVar9;
          *plVar9 = *(longlong *)(lVar12 + (longlong)plVar9);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    plVar10 = plVar10 + iVar6;
    if (0 < iVar2 - iVar6) {
      uVar14 = (ulonglong)(uint)(iVar2 - iVar6);
      plVar11 = (longlong *)(*plVar11 + (longlong)iVar6 * 8);
      do {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = *plVar10;
          *plVar11 = lVar8;
          if (lVar8 != 0) {
            FUN_144b3d910();
          }
          plVar10 = plVar10 + 1;
        }
        uVar14 = uVar14 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 0x60) = iVar2;
  }
  FUN_144d0efe0(param_1 + 0x68,param_2 + 0x68);
  plVar11 = (longlong *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  if ((longlong *)(param_2 + 0x80) != plVar11) {
    iVar2 = *(int *)(param_2 + 0x88);
    plVar10 = *(longlong **)(param_2 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < iVar2) {
      FUN_144d10b10(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x88)) {
      lVar12 = *plVar11;
      lVar8 = lVar12 + (longlong)*(int *)(param_1 + 0x88) * 8;
      while (lVar8 != lVar12 + (longlong)iVar2 * 8) {
        plVar9 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar9 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar9 = (longlong *)*plVar11;
    iVar6 = iVar2;
    if (*(int *)(param_1 + 0x88) < iVar2) {
      iVar6 = *(int *)(param_1 + 0x88);
    }
    if ((plVar9 != plVar10) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
      lVar12 = (longlong)plVar10 - (longlong)plVar9;
      do {
        lVar5 = *(longlong *)(lVar12 + (longlong)plVar9);
        if (*plVar9 != lVar5) {
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = *plVar9;
          *plVar9 = *(longlong *)(lVar12 + (longlong)plVar9);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    plVar10 = plVar10 + iVar6;
    if (0 < iVar2 - iVar6) {
      uVar14 = (ulonglong)(uint)(iVar2 - iVar6);
      plVar11 = (longlong *)(*plVar11 + (longlong)iVar6 * 8);
      do {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = *plVar10;
          *plVar11 = lVar8;
          if (lVar8 != 0) {
            FUN_144b3d910();
          }
          plVar10 = plVar10 + 1;
        }
        uVar14 = uVar14 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 0x88) = iVar2;
  }
  FUN_144d0efe0(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  return param_1;
}



// FUNCTION 144d0f5e0 FUN_144d0f5e0 body=1165 status=ok
// SIG undefined FUN_144d0f5e0(void)

longlong FUN_144d0f5e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar11 = (undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  uVar6 = *(undefined4 *)(param_2 + 0x94);
  uVar7 = *(undefined4 *)(param_2 + 0x98);
  uVar8 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  *(undefined4 *)(param_1 + 0x98) = uVar7;
  *(undefined4 *)(param_1 + 0x9c) = uVar8;
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  uVar7 = *(undefined4 *)(param_2 + 0xa8);
  uVar8 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  if ((undefined8 *)(param_2 + 0xb8) != puVar11) {
    iVar2 = *(int *)(param_2 + 0xc0);
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar11,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar11,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0xc0) = iVar2;
  }
  plVar14 = (longlong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  if ((longlong *)(param_2 + 0xd8) != plVar14) {
    iVar2 = *(int *)(param_2 + 0xe0);
    puVar11 = *(undefined8 **)(param_2 + 0xd8);
    if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) < iVar2) {
      FUN_144d10bf0(plVar14,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar9 = (undefined8 *)*plVar14;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0xe0) < iVar2) {
      iVar5 = *(int *)(param_1 + 0xe0);
    }
    if ((puVar9 != puVar11) && (lVar15 = (longlong)iVar5, 0 < iVar5)) {
      lVar10 = (longlong)puVar11 - (longlong)puVar9;
      do {
        *puVar9 = *(undefined8 *)(lVar10 + (longlong)puVar9);
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar10 + 8 + (longlong)puVar9);
        puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    puVar11 = (undefined8 *)((longlong)puVar11 + (longlong)iVar5 * 0xc);
    if (0 < iVar2 - iVar5) {
      uVar16 = (ulonglong)(uint)(iVar2 - iVar5);
      puVar9 = (undefined8 *)(*plVar14 + (longlong)iVar5 * 0xc);
      do {
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = *puVar11;
          puVar1 = puVar11 + 1;
          puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)puVar1;
        }
        uVar16 = uVar16 - 1;
        puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
      } while (uVar16 != 0);
    }
    *(int *)(param_1 + 0xe0) = iVar2;
  }
  plVar14 = (longlong *)(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  if ((longlong *)(param_2 + 0xf0) != plVar14) {
    iVar2 = *(int *)(param_2 + 0xf8);
    plVar13 = *(longlong **)(param_2 + 0xf0);
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar2) {
      FUN_144d10020(plVar14,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0xf8)) {
      lVar10 = *plVar14;
      lVar15 = lVar10 + (longlong)*(int *)(param_1 + 0xf8) * 8;
      while (lVar15 != lVar10 + (longlong)iVar2 * 8) {
        plVar12 = (longlong *)(lVar15 + -8);
        lVar15 = lVar15 + -8;
        if (*plVar12 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar12 = (longlong *)*plVar14;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0xf8) < iVar2) {
      iVar5 = *(int *)(param_1 + 0xf8);
    }
    if ((plVar12 != plVar13) && (lVar15 = (longlong)iVar5, 0 < iVar5)) {
      lVar10 = (longlong)plVar13 - (longlong)plVar12;
      do {
        lVar4 = *(longlong *)(lVar10 + (longlong)plVar12);
        if (*plVar12 != lVar4) {
          if (lVar4 != 0) {
            FUN_144b3d910();
          }
          lVar4 = *plVar12;
          *plVar12 = *(longlong *)(lVar10 + (longlong)plVar12);
          if (lVar4 != 0) {
            FUN_144b3f230();
          }
        }
        plVar12 = plVar12 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    plVar13 = plVar13 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar16 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar14 = (longlong *)(*plVar14 + (longlong)iVar5 * 8);
      do {
        if (plVar14 != (longlong *)0x0) {
          lVar15 = *plVar13;
          *plVar14 = lVar15;
          if (lVar15 != 0) {
            FUN_144b3d910();
          }
          plVar13 = plVar13 + 1;
        }
        uVar16 = uVar16 - 1;
        plVar14 = plVar14 + 1;
      } while (uVar16 != 0);
    }
    *(int *)(param_1 + 0xf8) = iVar2;
  }
  plVar14 = (longlong *)(param_1 + 0x100);
  if ((longlong *)(param_2 + 0x100) != plVar14) {
    iVar2 = *(int *)(param_2 + 0x108);
    plVar13 = *(longlong **)(param_2 + 0x100);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar2) {
      FUN_144d10100(plVar14,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x108)) {
      lVar10 = *plVar14;
      lVar15 = lVar10 + (longlong)*(int *)(param_1 + 0x108) * 8;
      while (lVar15 != lVar10 + (longlong)iVar2 * 8) {
        plVar12 = (longlong *)(lVar15 + -8);
        lVar15 = lVar15 + -8;
        if (*plVar12 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar12 = (longlong *)*plVar14;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0x108) < iVar2) {
      iVar5 = *(int *)(param_1 + 0x108);
    }
    if ((plVar12 != plVar13) && (lVar15 = (longlong)iVar5, 0 < iVar5)) {
      lVar10 = (longlong)plVar13 - (longlong)plVar12;
      do {
        lVar4 = *(longlong *)(lVar10 + (longlong)plVar12);
        if (*plVar12 != lVar4) {
          if (lVar4 != 0) {
            FUN_144b3d910();
          }
          lVar4 = *plVar12;
          *plVar12 = *(longlong *)(lVar10 + (longlong)plVar12);
          if (lVar4 != 0) {
            FUN_144b3f230();
          }
        }
        plVar12 = plVar12 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    plVar13 = plVar13 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar16 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar14 = (longlong *)(*plVar14 + (longlong)iVar5 * 8);
      do {
        if (plVar14 != (longlong *)0x0) {
          lVar15 = *plVar13;
          *plVar14 = lVar15;
          if (lVar15 != 0) {
            FUN_144b3d910();
          }
          plVar13 = plVar13 + 1;
        }
        uVar16 = uVar16 - 1;
        plVar14 = plVar14 + 1;
      } while (uVar16 != 0);
    }
    *(int *)(param_1 + 0x108) = iVar2;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  FUN_144be3810(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 144d0fa70 FUN_144d0fa70 body=62 status=ok
// SIG undefined FUN_144d0fa70(void)

undefined8 * FUN_144d0fa70(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6ff420);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff420;
  return param_2;
}



// FUNCTION 144d0fab0 FUN_144d0fab0 body=247 status=ok
// SIG undefined FUN_144d0fab0(void)

void FUN_144d0fab0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8);
    FUN_144b3ec00(param_1 + 2);
  }
  uVar6 = (longlong)(int)param_1[1] * 3;
  if (((int)param_1[1] < 0) || (0xffffffff < uVar6)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar2 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar2)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  if (((bool)(bVar4 & bVar3)) && ((uint)uVar2 < (uint)uVar6)) {
    FUN_144b2eb80(param_1 + 2);
  }
  uVar7 = 0;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    do {
      lVar1 = param_1[2];
      uVar8 = *(int *)(lVar9 + *param_1) * -0x61c8864f;
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
              *(int *)(lVar9 + *param_1) * -0x4f000000;
      uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
      puVar5 = (uint *)(lVar1 + uVar6 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar6 * 8)) {
        do {
          uVar6 = ((longlong)puVar5 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar5 = (uint *)(lVar1 + uVar6 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar6 * 8));
      }
      puVar5[1] = uVar7;
      lVar9 = lVar9 + 0x40;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144d0fbb0 FUN_144d0fbb0 body=222 status=ok
// SIG undefined FUN_144d0fbb0(void)

void FUN_144d0fbb0(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 6)
    ;
    uVar1 = *(uint *)(param_1 + 1);
    puVar4 = (undefined4 *)*param_1;
    uVar6 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      uVar5 = (ulonglong)uVar1;
      puVar3 = puVar2;
      puVar7 = puVar4;
      do {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar7;
          FUN_144d0e820(puVar3 + 2,puVar7 + 2);
        }
        puVar3 = puVar3 + 0x10;
        puVar7 = puVar7 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar4 = puVar4 + 2;
      do {
        FUN_144d0e5c0(puVar4);
        puVar4 = puVar4 + 0x10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = puVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144d0fc90 FUN_144d0fc90 body=190 status=ok
// SIG undefined FUN_144d0fc90(void)

longlong * FUN_144d0fc90(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = (longlong)(int)param_1[1] * 0x40 + lVar1; lVar2 != lVar1; lVar2 = lVar2 + -0x40) {
    FUN_144d0e5c0(lVar2 + -0x38);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 6);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 144d0fd50 FUN_144d0fd50 body=158 status=ok
// SIG undefined FUN_144d0fd50(void)

void FUN_144d0fd50(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d0fdf0 FUN_144d0fdf0 body=163 status=ok
// SIG undefined FUN_144d0fdf0(void)

void FUN_144d0fdf0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0xc);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d0fea0 FUN_144d0fea0 body=221 status=ok
// SIG undefined FUN_144d0fea0(void)

void FUN_144d0fea0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d0ff80 FUN_144d0ff80 body=158 status=ok
// SIG undefined FUN_144d0ff80(void)

void FUN_144d0ff80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 5);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10020 FUN_144d10020 body=221 status=ok
// SIG undefined FUN_144d10020(void)

void FUN_144d10020(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d10100 FUN_144d10100 body=221 status=ok
// SIG undefined FUN_144d10100(void)

void FUN_144d10100(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d101e0 FUN_144d101e0 body=188 status=ok
// SIG undefined FUN_144d101e0(void)

void FUN_144d101e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  puVar3 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar3;
      }
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d102a0 FUN_144d102a0 body=328 status=ok
// SIG undefined FUN_144d102a0(void)

void FUN_144d102a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0xf0);
  uVar1 = *(uint *)(param_1 + 1);
  plVar9 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar10 = (undefined1 *)(lVar6 + 0xc);
    uVar11 = (ulonglong)uVar1;
    plVar7 = plVar9;
    do {
      if ((longlong *)(puVar10 + -0xc) != (longlong *)0x0) {
        lVar2 = *plVar7;
        *(longlong *)(puVar10 + -0xc) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        *(int *)(puVar10 + -4) = (int)plVar7[1];
        *puVar10 = *(undefined1 *)((longlong)plVar7 + 0xc);
        *(int *)(puVar10 + 4) = (int)plVar7[2];
        uVar4 = *(undefined8 *)((longlong)plVar7 + 0x1c);
        *(undefined8 *)(puVar10 + 8) = *(undefined8 *)((longlong)plVar7 + 0x14);
        *(undefined8 *)(puVar10 + 0x10) = uVar4;
        uVar4 = *(undefined8 *)((longlong)plVar7 + 0x2c);
        *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)((longlong)plVar7 + 0x24);
        *(undefined8 *)(puVar10 + 0x20) = uVar4;
        lVar2 = plVar7[7];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 0x3c);
        lVar5 = plVar7[8];
        *(undefined4 *)(puVar10 + 0x28) = *(undefined4 *)((longlong)plVar7 + 0x34);
        *(int *)(puVar10 + 0x2c) = (int)lVar2;
        *(undefined4 *)(puVar10 + 0x30) = uVar3;
        *(int *)(puVar10 + 0x34) = (int)lVar5;
        *(undefined8 *)(puVar10 + 0x38) = *(undefined8 *)((longlong)plVar7 + 0x44);
        FUN_144d0d530(puVar10 + 0x44,plVar7 + 10);
      }
      puVar10 = puVar10 + 0xf0;
      plVar7 = plVar7 + 0x1e;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    do {
      FUN_144fc5bd0(plVar9);
      plVar9 = plVar9 + 0x1e;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d103f0 FUN_144d103f0 body=159 status=ok
// SIG undefined FUN_144d103f0(void)

void FUN_144d103f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10490 FUN_144d10490 body=163 status=ok
// SIG undefined FUN_144d10490(void)

void FUN_144d10490(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x30);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x30);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10540 FUN_144d10540 body=163 status=ok
// SIG undefined FUN_144d10540(void)

void FUN_144d10540(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x14);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d105f0 FUN_144d105f0 body=304 status=ok
// SIG undefined FUN_144d105f0(void)

void FUN_144d105f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  uVar1 = *(uint *)(param_1 + 1);
  plVar8 = (longlong *)*param_1;
  uVar9 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar6 = (undefined4 *)(lVar5 + 0x30);
    uVar11 = (ulonglong)uVar1;
    plVar7 = plVar8 + 6;
    plVar10 = plVar8;
    do {
      if ((longlong *)(puVar6 + -0xc) != (longlong *)0x0) {
        *(longlong *)(puVar6 + -0xc) = *plVar10;
        *plVar10 = 0;
        puVar6[-10] = (int)plVar7[-5];
        lVar4 = plVar7[-3];
        *(longlong *)(puVar6 + -8) = plVar7[-4];
        *(longlong *)(puVar6 + -6) = lVar4;
        lVar4 = plVar7[-1];
        *(longlong *)(puVar6 + -4) = plVar7[-2];
        *(longlong *)(puVar6 + -2) = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + 4);
        lVar4 = plVar7[1];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 0xc);
        *puVar6 = (int)*plVar7;
        puVar6[1] = uVar2;
        puVar6[2] = (int)lVar4;
        puVar6[3] = uVar3;
        lVar4 = plVar7[3];
        *(longlong *)(puVar6 + 4) = plVar7[2];
        *(longlong *)(puVar6 + 6) = lVar4;
        *(longlong *)(puVar6 + 8) = plVar7[4];
        plVar7[4] = 0;
      }
      puVar6 = puVar6 + 0x18;
      plVar10 = plVar10 + 0xc;
      plVar7 = plVar7 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    do {
      if (plVar8[10] != 0) {
        FUN_144b3f230();
      }
      if (*plVar8 != 0) {
        FUN_144b3f230();
      }
      plVar8 = plVar8 + 0xc;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10720 FUN_144d10720 body=224 status=ok
// SIG undefined FUN_144d10720(void)

void FUN_144d10720(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
        *(int *)(plVar4 + 1) = (int)plVar7[1];
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 2;
      plVar7 = plVar7 + 2;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d10800 FUN_144d10800 body=366 status=ok
// SIG undefined FUN_144d10800(void)

void FUN_144d10800(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  uVar2 = *(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  uVar9 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)(lVar4 + 0xc);
    uVar7 = (ulonglong)uVar2;
    puVar5 = puVar3;
    do {
      puVar1 = (undefined8 *)(puVar8 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        FUN_147e4a87c(puVar5,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar5;
        puVar8[-1] = *(undefined4 *)(puVar5 + 1);
        *puVar8 = *(undefined4 *)((longlong)puVar5 + 0xc);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar8[1] = *(undefined4 *)(puVar5 + 2);
      }
      puVar8 = puVar8 + 6;
      puVar5 = puVar5 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar6 = (uint *)((longlong)puVar3 + 0xc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(longlong *)(puVar6 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar6 + -3),
                   (ulonglong)(*puVar6 & 0x7fffffff) << 4);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      *puVar6 = 0x80000000;
      puVar6 = puVar6 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10970 FUN_144d10970 body=187 status=ok
// SIG undefined FUN_144d10970(void)

void FUN_144d10970(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
      }
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10a30 FUN_144d10a30 body=221 status=ok
// SIG undefined FUN_144d10a30(void)

void FUN_144d10a30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d10b10 FUN_144d10b10 body=221 status=ok
// SIG undefined FUN_144d10b10(void)

void FUN_144d10b10(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d10bf0 FUN_144d10bf0 body=188 status=ok
// SIG undefined FUN_144d10bf0(void)

void FUN_144d10bf0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0xc);
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  puVar2 = puVar1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar3;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
      }
      puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10cb0 FUN_144d10cb0 body=255 status=ok
// SIG undefined FUN_144d10cb0(void)

void FUN_144d10cb0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 6);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar5 = (ulonglong)uVar1;
    puVar3 = puVar2;
    puVar7 = puVar4;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
        FUN_144d0e820(puVar3 + 2,puVar7 + 2);
      }
      puVar3 = puVar3 + 0x10;
      puVar7 = puVar7 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 2;
    do {
      FUN_144d0e5c0(puVar4);
      puVar4 = puVar4 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10db0 FUN_144d10db0 body=255 status=ok
// SIG undefined FUN_144d10db0(void)

void FUN_144d10db0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 6);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar5 = (ulonglong)uVar1;
    puVar3 = puVar2;
    puVar7 = puVar4;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
        FUN_144d0e820(puVar3 + 2,puVar7 + 2);
      }
      puVar3 = puVar3 + 0x10;
      puVar7 = puVar7 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 2;
    do {
      FUN_144d0e5c0(puVar4);
      puVar4 = puVar4 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d10eb0 FUN_144d10eb0 body=395 status=ok
// SIG undefined FUN_144d10eb0(void)

undefined8 FUN_144d10eb0(undefined4 **param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar6 = *(uint *)(param_2 + 1);
  puVar2 = (undefined4 *)0x0;
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_2;
  }
  if ((int)uVar6 < 1) {
    puVar1 = (undefined4 *)0x0;
    uVar6 = 0;
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar5 = 0x80000000;
  }
  else {
    puVar1 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 << 6);
    uVar3 = (ulonglong)uVar6;
    puVar4 = puVar1;
    local_28 = puVar1;
    local_20 = uVar6;
    local_1c = uVar6;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar2;
        FUN_144d0e6a0(puVar4 + 2,puVar2 + 2);
        puVar2 = puVar2 + 0x10;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 0x10;
      uVar5 = uVar6;
    } while (uVar3 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144d0fc90(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144d0fbb0(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar6 = 0;
    uVar5 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144d0fab0(param_1);
  for (puVar2 = puVar1 + (longlong)(int)uVar6 * 0x10; puVar2 != puVar1; puVar2 = puVar2 + -0x10) {
    FUN_144d0e5c0(puVar2 + -0xe);
  }
  if ((-1 < (int)uVar5) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar5 & 0x7fffffff) << 6);
  }
  return 1;
}



// FUNCTION 144d11040 FUN_144d11040 body=618 status=ok
// SIG undefined FUN_144d11040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144d11040(undefined8 param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  float fStack_40;
  
  FUN_144be9320();
  auVar7._8_4_ = 0x4b7fffff;
  auVar7._0_8_ = 0x4b7fffff4b7fffff;
  auVar7._12_4_ = 0x4b7fffff;
  auVar5._8_4_ = 0xcb7fffff;
  auVar5._0_8_ = 0xcb7fffffcb7fffff;
  auVar5._12_4_ = 0xcb7fffff;
  auVar7 = minps(_local_48,auVar7);
  auVar5 = maxps(local_58,auVar5);
  fVar4 = auVar5._0_4_;
  fVar6 = auVar5._4_4_;
  fVar1 = auVar5._8_4_;
  uVar2 = -(uint)(fVar4 == -0.0 || 8388608.0 < ABS(fVar4));
  fVar3 = ((fVar4 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  *param_2 = (int)(float)(~uVar2 & (uint)(fVar3 - (float)(-(uint)(fVar4 < fVar3) & _DAT_14c6daca0))
                         | (uint)fVar4 & uVar2);
  uVar2 = -(uint)(fVar6 == -0.0 || 8388608.0 < ABS(fVar6));
  fVar3 = ((fVar6 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  param_2[1] = (int)(float)(~uVar2 & (uint)(fVar3 - (float)(-(uint)(fVar6 < fVar3) & _DAT_14c6daca0)
                                           ) | (uint)fVar6 & uVar2);
  fVar3 = ((fVar1 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  uVar2 = -(uint)(fVar1 == -0.0 || 8388608.0 < ABS(fVar1));
  param_2[2] = (int)(float)(~uVar2 & (uint)(fVar3 - (float)(-(uint)(fVar1 < fVar3) & _DAT_14c6daca0)
                                           ) | (uint)fVar1 & uVar2);
  fVar1 = ceilf(auVar7._0_4_);
  local_48._4_4_ = auVar7._4_4_;
  fStack_40 = auVar7._8_4_;
  param_2[3] = (int)fVar1;
  fVar1 = ceilf((float)local_48._4_4_);
  param_2[4] = (int)fVar1;
  fVar1 = ceilf(fStack_40);
  param_2[5] = (int)fVar1;
  return param_2;
}



// FUNCTION 144d112b0 FUN_144d112b0 body=338 status=ok
// SIG undefined FUN_144d112b0(void)

uint * FUN_144d112b0(uint *param_1,longlong param_2,undefined8 *param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  int local_res8;
  undefined1 local_38 [48];
  
  if (*(int *)(param_3 + 1) != 0) {
    FUN_144b3e8d0(*param_3,*(int *)(param_3 + 1),local_38);
    FUN_144d11040(param_2,param_1,local_38);
    param_4 = param_4 * *(float *)(param_2 + 0x94);
    if ((0.0 <= param_4) && (param_4 <= 16777215.0)) {
      fVar2 = ceilf(param_4);
      local_res8 = (int)fVar2;
    }
    uVar1 = *param_1 - local_res8;
    if (1 < (longlong)((int)uVar1 >> 0x17) + 1U) {
      uVar1 = (int)uVar1 >> 0x1f ^ 0x7fffff;
    }
    *param_1 = uVar1;
    uVar1 = param_1[1] - local_res8;
    if (1 < (longlong)((int)uVar1 >> 0x17) + 1U) {
      uVar1 = (int)uVar1 >> 0x1f ^ 0x7fffff;
    }
    param_1[1] = uVar1;
    uVar1 = param_1[3] + local_res8;
    param_1[2] = 0xff800001;
    if (1 < (longlong)((int)uVar1 >> 0x17) + 1U) {
      uVar1 = (int)uVar1 >> 0x1f ^ 0x7fffff;
    }
    param_1[3] = uVar1;
    uVar1 = param_1[4] + local_res8;
    if (1 < (longlong)((int)uVar1 >> 0x17) + 1U) {
      uVar1 = (int)uVar1 >> 0x1f ^ 0x7fffff;
    }
    param_1[4] = uVar1;
    param_1[5] = 0x7fffff;
    return param_1;
  }
  *param_1 = 0xff800001;
  param_1[1] = 0xff800001;
  param_1[2] = 0xff800001;
  param_1[3] = 0x7fffff;
  param_1[4] = 0x7fffff;
  param_1[5] = 0x7fffff;
  return param_1;
}



// FUNCTION 144d11410 FUN_144d11410 body=90 status=ok
// SIG undefined FUN_144d11410(void)

undefined8 FUN_144d11410(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  piVar1 = (int *)*param_1;
  iVar4 = (int)(param_1[1] - (longlong)piVar1 >> 3);
  if (0 < iVar4) {
    lVar5 = 0;
    lVar3 = (longlong)(iVar4 + -1) * 8;
    piVar2 = piVar1;
    do {
      if ((*(int *)(lVar3 + (longlong)piVar1) == *piVar2) &&
         (((int *)(lVar3 + (longlong)piVar1))[1] == piVar2[1])) {
        return 0;
      }
      lVar5 = lVar5 + 1;
      lVar3 = (longlong)piVar2 - (longlong)piVar1;
      piVar2 = piVar2 + 2;
    } while (lVar5 < iVar4);
  }
  return 1;
}



// FUNCTION 144d11470 FUN_144d11470 body=425 status=ok
// SIG undefined FUN_144d11470(void)

undefined8 FUN_144d11470(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  piVar1 = (int *)*param_1;
  iVar9 = (int)(param_1[1] - (longlong)piVar1 >> 3);
  if (0 < iVar9) {
    iVar7 = iVar9 + -2;
    iVar13 = 0;
    do {
      iVar12 = iVar13 + 1;
      iVar6 = 2;
      if (1 < iVar7) {
        do {
          iVar4 = (iVar6 + iVar13) % iVar9;
          cVar2 = FUN_144d11740(piVar1 + (longlong)iVar13 * 2,
                                piVar1 + (longlong)(iVar12 % iVar9) * 2,piVar1 + (longlong)iVar4 * 2
                                ,piVar1 + (longlong)((iVar4 + 1) % iVar9) * 2);
          if (cVar2 != '\0') {
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= iVar7);
      }
      iVar13 = iVar12;
    } while (iVar12 < iVar9);
    iVar13 = 0;
    lVar8 = (longlong)iVar7 * 8;
    lVar10 = (longlong)(iVar9 + -1) * 8;
    piVar11 = piVar1;
    do {
      iVar7 = *(int *)((longlong)piVar1 + lVar8);
      iVar6 = *(int *)((longlong)piVar1 + lVar8 + 4);
      iVar12 = *(int *)((longlong)piVar1 + lVar10 + 4);
      iVar4 = *(int *)((longlong)piVar1 + lVar10);
      if ((longlong)(piVar11[1] - iVar6) * (longlong)(iVar4 - iVar7) -
          (longlong)(*piVar11 - iVar7) * (longlong)(iVar12 - iVar6) == 0) {
        uVar5 = iVar7 - iVar4 >> 0x1f | (uint)(iVar7 - iVar4 != 0);
        if (uVar5 == 0) {
          uVar5 = iVar6 - iVar12 >> 0x1f | (uint)(iVar6 - iVar12 != 0);
        }
        iVar4 = iVar4 - *piVar11;
        uVar3 = iVar4 >> 0x1f | (uint)(iVar4 != 0);
        if (uVar3 == 0) {
          iVar12 = iVar12 - piVar11[1];
          uVar3 = iVar12 >> 0x1f | (uint)(iVar12 != 0);
        }
        if ((int)(uVar3 * uVar5) < 1) {
          return 0;
        }
      }
      iVar13 = iVar13 + 1;
      lVar8 = lVar10;
      lVar10 = (longlong)piVar11 - (longlong)piVar1;
      piVar11 = piVar11 + 2;
    } while (iVar13 < iVar9);
  }
  return 1;
}



// FUNCTION 144d11620 FUN_144d11620 body=276 status=ok
// SIG undefined FUN_144d11620(void)

undefined4 FUN_144d11620(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  piVar1 = (int *)*param_1;
  uVar8 = 1;
  iVar6 = 0;
  iVar7 = (int)(param_1[1] - (longlong)piVar1 >> 3);
  if (1 < (longlong)iVar7) {
    lVar10 = (longlong)iVar7 + -1;
    uVar4 = 0;
    uVar5 = 0;
    piVar2 = piVar1;
    do {
      piVar9 = piVar2 + 2;
      iVar6 = *piVar9 - *(int *)(uVar4 + (longlong)piVar1);
      if (iVar6 == 0) {
        bVar3 = piVar2[3] < ((int *)(uVar4 + (longlong)piVar1))[1];
      }
      else {
        bVar3 = (bool)((byte)(iVar6 >> 0x1f) >> 7);
      }
      uVar11 = uVar8;
      if (bVar3 == false) {
        uVar11 = uVar5;
      }
      iVar6 = (int)uVar11;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar5 = (longlong)piVar9 - (longlong)piVar1;
      if (bVar3 == false) {
        uVar5 = uVar4;
      }
      lVar10 = lVar10 + -1;
      uVar4 = uVar5;
      uVar5 = uVar11;
      piVar2 = piVar9;
    } while (lVar10 != 0);
  }
  lVar10 = (longlong)((iVar7 + -1 + iVar6) % iVar7);
  lVar10 = (longlong)((piVar1 + (longlong)((iVar6 + 1) % iVar7) * 2)[1] - piVar1[lVar10 * 2 + 1]) *
           (longlong)(piVar1[(longlong)iVar6 * 2] - piVar1[lVar10 * 2]) -
           (longlong)((piVar1 + (longlong)iVar6 * 2)[1] - piVar1[lVar10 * 2 + 1]) *
           (longlong)(piVar1[(longlong)((iVar6 + 1) % iVar7) * 2] - piVar1[lVar10 * 2]);
  return CONCAT31((int3)(lVar10 >> 0x3f),0 < (int)((uint)(lVar10 >> 0x3f) | (uint)(lVar10 != 0)));
}



// FUNCTION 144d11740 FUN_144d11740 body=616 status=ok
// SIG undefined FUN_144d11740(void)

ulonglong FUN_144d11740(ulonglong *param_1,ulonglong *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  iVar15 = *(int *)((longlong)param_1 + 4);
  iVar1 = (int)*param_1;
  iVar2 = (int)*param_2;
  iVar3 = *(int *)((longlong)param_2 + 4);
  iVar4 = *param_3;
  iVar5 = *param_4;
  iVar6 = param_4[1];
  lVar13 = (longlong)(param_3[1] - iVar15) * (longlong)(iVar2 - iVar1) -
           (longlong)(iVar4 - iVar1) * (longlong)(iVar3 - iVar15);
  uVar9 = (uint)(lVar13 >> 0x3f) | (uint)(lVar13 != 0);
  uVar8 = (ulonglong)uVar9;
  lVar13 = (longlong)(iVar6 - iVar15) * (longlong)(iVar2 - iVar1) -
           (longlong)(iVar5 - iVar1) * (longlong)(iVar3 - iVar15);
  uVar10 = (uint)(lVar13 >> 0x3f) | (uint)(lVar13 != 0);
  if ((uVar9 == 0) && (uVar10 == 0)) {
    if (iVar1 - iVar2 == 0) {
      bVar12 = iVar15 < iVar3;
    }
    else {
      bVar12 = (bool)((byte)(iVar1 - iVar2 >> 0x1f) >> 7);
    }
    if (bVar12 == false) {
      uVar8 = *param_1;
    }
    else {
      uVar8 = *param_2;
    }
    puVar11 = param_2;
    if (bVar12 == false) {
      puVar11 = param_1;
    }
    if (bVar12 == false) {
      param_1 = param_2;
    }
    if (iVar4 - iVar5 == 0) {
      bVar12 = param_3[1] < iVar6;
    }
    else {
      bVar12 = (bool)((byte)(iVar4 - iVar5 >> 0x1f) >> 7);
    }
    if (bVar12 == false) {
      uVar14 = *(undefined8 *)param_4;
      uVar16 = *(undefined8 *)param_3;
    }
    else {
      uVar14 = *(undefined8 *)param_3;
      uVar16 = *(undefined8 *)param_4;
    }
    iVar15 = (int)uVar16 - (int)*param_1;
    if (iVar15 == 0) {
      bVar12 = (int)((ulonglong)uVar16 >> 0x20) < (int)(*param_1 >> 0x20);
    }
    else {
      bVar12 = (bool)((byte)(iVar15 >> 0x1f) >> 7);
    }
    if (bVar12 == false) {
      uVar9 = (int)uVar8 - (int)uVar14;
      uVar8 = (ulonglong)uVar9;
      if (uVar9 == 0) {
        bVar12 = (int)(*puVar11 >> 0x20) < (int)((ulonglong)uVar14 >> 0x20);
      }
      else {
        bVar12 = (bool)((byte)((int)uVar9 >> 0x1f) >> 7);
      }
      if (bVar12 == false) {
        return CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
      }
    }
  }
  else if ((int)(uVar10 * uVar9) < 1) {
    iVar7 = param_3[1];
    lVar17 = (longlong)(iVar15 - iVar7) * (longlong)(iVar5 - iVar4) -
             (longlong)(iVar1 - iVar4) * (longlong)(iVar6 - iVar7);
    lVar13 = (longlong)(iVar3 - iVar7) * (longlong)(iVar5 - iVar4) -
             (longlong)(iVar2 - iVar4) * (longlong)(iVar6 - iVar7);
    return (ulonglong)
           CONCAT31((int3)(lVar13 >> 0x3f),
                    (int)(((uint)(lVar17 >> 0x3f) | (uint)(lVar17 != 0)) *
                         ((uint)(lVar13 >> 0x3f) | (uint)(lVar13 != 0))) < 1);
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 144d119b0 FUN_144d119b0 body=1023 status=ok
// SIG undefined FUN_144d119b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144d119b0(longlong param_1,int param_2,uint param_3,uint param_4,longlong *param_5,
                       float *param_6,uint *param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_228;
  int iStack_224;
  undefined8 uStack_220;
  undefined1 local_218 [8];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  int local_1b0;
  int iStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [96];
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  
  plVar7 = param_5;
  uVar14 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  auVar24._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar24._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar24._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  auVar19 = _DAT_14c6dae80;
  iVar9 = param_2;
  while( true ) {
    piVar15 = (int *)((longlong)iVar9 * 0x60 + *(longlong *)(param_1 + 0x28));
    uVar10 = FUN_144cb5150(param_1,iVar9);
    if ((char)uVar10 != '\0') break;
    FUN_147e582da(param_1 + 0x38,&local_1a8,*piVar15);
    iVar17 = (int)plVar7[1] + 1;
    if ((int)(*(uint *)((longlong)plVar7 + 0xc) & 0x7fffffff) < iVar17) {
      FUN_144d12d40(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar17);
    }
    piVar16 = (int *)((longlong)(int)plVar7[1] * 0xc0 + *plVar7);
    *(int *)(plVar7 + 1) = iVar17;
    local_210 = local_1a8;
    uStack_20c = uStack_1a4;
    uStack_208 = uStack_1a0;
    uStack_204 = uStack_19c;
    local_200 = local_198;
    uStack_1fc = uStack_194;
    uStack_1f8 = uStack_190;
    uStack_1f4 = uStack_18c;
    local_1f0 = local_188;
    iStack_1ec = iStack_184;
    iStack_1e8 = iStack_180;
    iStack_1e4 = iStack_17c;
    local_1e0 = local_178;
    iStack_1dc = iStack_174;
    iStack_1d8 = iStack_170;
    iStack_1d4 = iStack_16c;
    local_1d0 = local_148;
    uStack_1c8 = uStack_140;
    local_1c0 = local_138;
    uStack_1b8 = uStack_130;
    FUN_144cb9d00(&local_210);
    iStack_c0 = *piVar15;
    *(ulonglong *)(piVar16 + 2) = CONCAT44(uStack_20c,local_210);
    *(ulonglong *)(piVar16 + 4) = CONCAT44(uStack_204,uStack_208);
    *(ulonglong *)(piVar16 + 6) = CONCAT44(uStack_1fc,local_200);
    *(ulonglong *)(piVar16 + 8) = CONCAT44(uStack_1f4,uStack_1f8);
    piVar16[10] = local_1f0;
    piVar16[0xb] = iStack_1ec;
    piVar16[0xc] = iStack_1e8;
    piVar16[0xd] = iStack_1e4;
    piVar16[0xe] = local_1e0;
    piVar16[0xf] = iStack_1dc;
    piVar16[0x10] = iStack_1d8;
    piVar16[0x11] = iStack_1d4;
    *(undefined8 *)(piVar16 + 0x12) = local_1d0;
    *(undefined8 *)(piVar16 + 0x14) = uStack_1c8;
    *(undefined8 *)(piVar16 + 0x16) = local_1c0;
    *(undefined8 *)(piVar16 + 0x18) = uStack_1b8;
    piVar16[0x1a] = local_1b0;
    piVar16[0x1b] = iStack_1ac;
    piVar16[0x1c] = iStack_c0;
    piVar16[0x1d] = iStack_bc;
    local_c8 = local_1b0;
    iStack_c4 = iStack_1ac;
    uVar4 = *(undefined8 *)(piVar15 + 8);
    *(undefined8 *)(piVar16 + 0x1e) = *(undefined8 *)(piVar15 + 6);
    *(undefined8 *)(piVar16 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(piVar15 + 0xc);
    *(undefined8 *)(piVar16 + 0x22) = *(undefined8 *)(piVar15 + 10);
    *(undefined8 *)(piVar16 + 0x24) = uVar4;
    uVar4 = *(undefined8 *)(piVar15 + 0x10);
    *(undefined8 *)(piVar16 + 0x26) = *(undefined8 *)(piVar15 + 0xe);
    *(undefined8 *)(piVar16 + 0x28) = uVar4;
    iVar17 = piVar15[0x13];
    iVar2 = piVar15[0x14];
    iVar3 = piVar15[0x15];
    piVar16[0x2a] = piVar15[0x12];
    piVar16[0x2b] = iVar17;
    piVar16[0x2c] = iVar2;
    piVar16[0x2d] = iVar3;
    *(undefined8 *)(piVar16 + 0x2e) = *(undefined8 *)(piVar15 + 0x16);
    *piVar16 = iVar9;
    lVar11 = FUN_147e58064(&local_1a8,local_128);
    fVar18 = (float)FUN_144cc3f10(lVar11 + 0x60,local_res10);
    lVar12 = FUN_147e59322(lVar11,local_res18);
    iVar17 = local_res10[0];
    if ((float)lVar12 == 0.0) {
      local_228 = 0;
    }
    else {
      local_228 = local_res18[0] * 0x800000 + local_res10[0] * -0x800000 +
                  (int)((float)lVar12 / fVar18);
    }
    lVar12 = FUN_147e59322(lVar11 + 0x20,local_res20);
    if ((float)lVar12 == 0.0) {
      iStack_224 = 0;
    }
    else {
      iStack_224 = local_res20[0] * 0x800000 + iVar17 * -0x800000 + (int)((float)lVar12 / fVar18);
    }
    uVar10 = FUN_147e59322(lVar11 + 0x40,&param_5);
    if ((float)(longlong)uVar10 == 0.0) {
      uStack_220._0_4_ = 0;
    }
    else {
      fVar18 = (float)(longlong)uVar10 / fVar18;
      uVar10 = (ulonglong)(uint)fVar18;
      uStack_220._0_4_ = (int)param_5 * 0x800000 + iVar17 * -0x800000 + (int)fVar18;
    }
    auVar5._4_4_ = iStack_224;
    auVar5._0_4_ = local_228;
    auVar5._8_4_ = (int)uStack_220;
    auVar5._12_4_ = uStack_220._4_4_;
    auVar24 = maxps(auVar24,auVar5);
    auVar6._4_4_ = iStack_224;
    auVar6._0_4_ = local_228;
    auVar6._8_4_ = (int)uStack_220;
    auVar6._12_4_ = uStack_220._4_4_;
    auVar19 = minps(auVar19,auVar6);
    fVar23 = auVar24._0_4_;
    fVar25 = auVar24._4_4_;
    fVar26 = auVar24._8_4_;
    fVar27 = auVar24._12_4_;
    fVar18 = auVar19._0_4_;
    fVar20 = auVar19._4_4_;
    fVar21 = auVar19._8_4_;
    fVar22 = auVar19._12_4_;
    auVar1._4_4_ = -(uint)((float)param_3 < fVar25 - fVar20);
    auVar1._0_4_ = -(uint)((float)param_3 < fVar23 - fVar18);
    auVar1._8_4_ = -(uint)((float)param_4 < fVar26 - fVar21);
    auVar1._12_4_ = -(uint)(0.0 < fVar27 - fVar22);
    uVar8 = movmskps((int)uVar10,auVar1);
    uVar10 = CONCAT44((int)(uVar10 >> 0x20),uVar8);
    if ((uVar8 & 7) != 0) break;
    puVar13 = (uint *)FUN_144cb4bb0(param_1,local_218,piVar15[1]);
    if (uVar14 <= *puVar13) {
      uVar14 = *puVar13;
    }
    iVar9 = FUN_144cd94b0(param_1,iVar9);
    if (iVar9 == param_2) {
      *param_6 = fVar18 - ABS(fVar18) * 3.5762787e-07;
      param_6[1] = fVar20 - ABS(fVar20) * 3.5762787e-07;
      param_6[2] = fVar21 - ABS(fVar21) * 3.5762787e-07;
      param_6[3] = fVar22 - ABS(fVar22) * 3.5762787e-07;
      param_6[4] = ABS(fVar23) * 3.5762787e-07 + fVar23;
      param_6[5] = ABS(fVar25) * 3.5762787e-07 + fVar25;
      param_6[6] = ABS(fVar26) * 3.5762787e-07 + fVar26;
      param_6[7] = ABS(fVar27) * 3.5762787e-07 + fVar27;
      *param_7 = uVar14;
      uStack_220 = *plVar7;
      local_228 = (int)uStack_220;
      iStack_224 = (int)((ulonglong)uStack_220 >> 0x20);
      uStack_220 = (longlong)(int)plVar7[1] * 0xc0 + uStack_220;
      uVar10 = FUN_144d12240(&local_228);
      return uVar10;
    }
  }
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 144d11db0 FUN_144d11db0 body=235 status=ok
// SIG undefined FUN_144d11db0(void)

undefined8 FUN_144d11db0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x60) +
          *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 100) + *(float *)(param_1 + 0x40);
  fVar2 = (ABS(*(float *)(param_2 + 100)) * ABS(*(float *)(param_1 + 0x3c)) +
           ABS(*(float *)(param_2 + 0x60)) * ABS(*(float *)(param_1 + 0x38)) +
          ABS(*(float *)(param_1 + 0x40))) * 3.5762787e-07;
  if (fVar2 < fVar3) {
    return 1;
  }
  if (fVar3 < -fVar2) {
    return 0xffffffff;
  }
  uVar1 = FUN_144cb9080();
  return uVar1;
}



// FUNCTION 144d11ea0 FUN_144d11ea0 body=126 status=ok
// SIG undefined FUN_144d11ea0(void)

undefined8 FUN_144d11ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144d11db0(param_2,param_1);
  iVar2 = FUN_144d11db0(param_3,param_1);
  if (param_4 == '\0') {
    if ((iVar1 < 1) && (iVar2 < 1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else if ((iVar1 < 1) || (iVar2 < 1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 144d11f20 FUN_144d11f20 body=798 status=ok
// SIG undefined FUN_144d11f20(void)

undefined8
FUN_144d11f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined1 local_278 [112];
  undefined1 local_208 [112];
  undefined1 local_198 [168];
  undefined1 local_f0 [200];
  
  iVar3 = FUN_144d11db0(param_5);
  iVar4 = FUN_144d11db0(param_9,param_6);
  cVar2 = FUN_144d11ea0(param_2,param_8,param_9,0 < iVar4);
  if ((((cVar2 == '\0') && (cVar2 = FUN_144d11ea0(param_3,param_8,param_9,0 < iVar4), cVar2 == '\0')
       ) && (cVar2 = FUN_144d11ea0(param_6,param_4,param_5,0 < iVar3), cVar2 == '\0')) &&
     (cVar2 = FUN_144d11ea0(param_7,param_4,param_5,0 < iVar3), cVar2 == '\0')) {
    iVar3 = FUN_144d11db0(param_8,param_2);
    if ((iVar3 == 0) && (iVar3 = FUN_144d11db0(param_9,param_3), iVar3 == 0)) {
      lVar5 = FUN_144ceaef0(local_198,param_6,param_1);
      lVar6 = FUN_144ceaef0(local_f0,param_2,param_1);
      local_2f8 = *(undefined8 *)(lVar5 + 0x70);
      uStack_2f0 = *(undefined8 *)(lVar5 + 0x78);
      local_2e8 = *(undefined8 *)(lVar5 + 0x80);
      uStack_2e0 = *(undefined8 *)(lVar5 + 0x88);
      local_2d8 = *(undefined8 *)(lVar5 + 0x90);
      uStack_2d0 = *(undefined8 *)(lVar5 + 0x98);
      local_2c8 = *(undefined8 *)(lVar5 + 0xa0);
      local_2b8 = *(undefined8 *)(lVar6 + 0x70);
      uStack_2b0 = *(undefined8 *)(lVar6 + 0x78);
      local_2a8 = *(undefined8 *)(lVar6 + 0x80);
      uStack_2a0 = *(undefined8 *)(lVar6 + 0x88);
      local_298 = *(undefined4 *)(lVar6 + 0x90);
      uStack_294 = *(undefined4 *)(lVar6 + 0x94);
      uStack_290 = *(undefined4 *)(lVar6 + 0x98);
      uStack_28c = *(undefined4 *)(lVar6 + 0x9c);
      local_288 = *(undefined8 *)(lVar6 + 0xa0);
      FUN_144cc7a40(&local_2b8,&local_2f8,local_278);
      plVar7 = (longlong *)FUN_144cfdf30(local_208,lVar6,lVar5);
      auVar1 = *(undefined1 (*) [16])(plVar7 + 0xc);
      if ((((auVar1._0_8_ != 0 ||
            ((plVar7[10] != 0 ||
             ((plVar7[8] != 0 ||
              ((plVar7[6] != 0 ||
               ((plVar7[4] != 0 ||
                ((plVar7[2] != 0 || (plVar7[1] != 0 || *plVar7 != 0)) || plVar7[3] != 0)) ||
               plVar7[5] != 0)) || plVar7[7] != 0)) || plVar7[9] != 0)) || plVar7[0xb] != 0)) ||
           auVar1._8_8_ != 0) & (auVar1[0xf] >> 7 ^ 1)) != 0) goto LAB_144d1221b;
    }
    uVar8 = 0;
  }
  else {
LAB_144d1221b:
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 144d12240 FUN_144d12240 body=2593 status=ok
// SIG undefined FUN_144d12240(void)

undefined8 FUN_144d12240(longlong *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  longlong local_458;
  longlong local_448;
  longlong lStack_440;
  longlong local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  longlong local_408;
  undefined8 uStack_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  longlong lStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong local_358;
  longlong lStack_350;
  longlong local_348;
  longlong lStack_340;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  longlong lStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
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
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  
  lVar4 = *param_1;
  lVar17 = (param_1[1] - lVar4) / 6 + (param_1[1] - lVar4 >> 0x3f);
  iVar5 = (int)(lVar17 >> 5) - (int)(lVar17 >> 0x3f);
  uVar19 = iVar5 - 1;
  iVar8 = FUN_144cb92c0((longlong)(int)uVar19 * 0xc0 + 0x78 + lVar4,lVar4 + 0x78);
  if (iVar8 < 1) {
    if (0 < iVar5) {
      lVar17 = (longlong)iVar5;
      local_458 = 0;
      uVar20 = uVar19;
      do {
        lVar12 = local_458 * 0xc0;
        lVar22 = local_458 + 2;
        uVar23 = (3 - iVar5) + uVar20;
        puVar24 = (undefined8 *)(lVar12 + 0x88 + lVar4);
        local_2f8 = *puVar24;
        uStack_2f0 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x78 + lVar4);
        local_308 = *puVar24;
        uStack_300 = puVar24[1];
        plVar3 = (longlong *)(lVar12 + 0xa8 + lVar4);
        local_2d8 = *plVar3;
        uStack_2d0 = plVar3[1];
        plVar3 = (longlong *)(lVar12 + 0x98 + lVar4);
        local_2e8 = *plVar3;
        lStack_2e0 = plVar3[1];
        puVar24 = (undefined8 *)(lVar12 + 8 + lVar4);
        local_1b8 = *puVar24;
        uStack_1b0 = puVar24[1];
        local_2c8 = *(undefined8 *)(lVar12 + 0xb8 + lVar4);
        puVar24 = (undefined8 *)(lVar12 + 0x18 + lVar4);
        local_1a8 = *puVar24;
        uStack_1a0 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x28 + lVar4);
        local_198 = *puVar24;
        uStack_190 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x38 + lVar4);
        local_188 = *puVar24;
        uStack_180 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x48 + lVar4);
        local_178 = *puVar24;
        uStack_170 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x58 + lVar4);
        local_168 = *puVar24;
        uStack_160 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x68 + lVar4);
        local_158 = *puVar24;
        uStack_150 = puVar24[1];
        lVar12 = (longlong)((int)((2 - iVar5) + uVar20) % iVar5) * 0xc0;
        puVar24 = (undefined8 *)(lVar12 + 8 + lVar4);
        local_228 = *puVar24;
        uStack_220 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x18 + lVar4);
        local_218 = *puVar24;
        uStack_210 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x28 + lVar4);
        local_208 = *puVar24;
        uStack_200 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x38 + lVar4);
        local_1f8 = *puVar24;
        uStack_1f0 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x48 + lVar4);
        local_1e8 = *puVar24;
        uStack_1e0 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x58 + lVar4);
        local_1d8 = *puVar24;
        uStack_1d0 = puVar24[1];
        puVar24 = (undefined8 *)(lVar12 + 0x68 + lVar4);
        local_1c8 = *puVar24;
        uStack_1c0 = puVar24[1];
        if (lVar22 < lVar17) {
          uVar25 = uVar20 + 2;
          puVar24 = (undefined8 *)(lVar22 * 0xc0 + 8 + lVar4);
          do {
            if ((local_458 != 0) || (uVar23 != uVar19)) {
              local_408 = puVar24[0x12];
              uStack_400 = puVar24[0x13];
              local_3f8 = puVar24[0x14];
              uStack_3f0 = puVar24[0x15];
              local_3e8 = puVar24[0x16];
              local_428 = puVar24[0xe];
              uStack_420 = puVar24[0xf];
              local_248 = *(undefined4 *)(puVar24 + 0x10);
              uStack_244 = *(undefined4 *)((longlong)puVar24 + 0x84);
              local_418 = puVar24[0x10];
              uStack_240 = *(undefined4 *)(puVar24 + 0x11);
              uStack_23c = *(undefined4 *)((longlong)puVar24 + 0x8c);
              uStack_410 = puVar24[0x11];
              local_398 = -local_408;
              uVar6 = -puVar24[0x13];
              lStack_390 = uVar6 - (local_408 != 0);
              local_3a8 = -(ulonglong)(puVar24[0x13] != 0 || uVar6 < (local_408 != 0)) - local_3f8;
              local_448 = -local_2e8;
              lStack_440 = -lStack_2e0 - (ulonglong)(local_2e8 != 0);
              local_438 = -(ulonglong)
                           (lStack_2e0 != 0 || (ulonglong)-lStack_2e0 < (ulonglong)(local_2e8 != 0))
                          - local_2d8;
              local_3d8 = local_2f8;
              uStack_3d0 = uStack_2f0;
              local_3b8 = local_308;
              uStack_3b0 = uStack_300;
              local_3c8 = local_438;
              local_388 = local_3a8;
              local_238 = local_428;
              uStack_230 = uStack_420;
              cVar7 = FUN_144cc4040(&local_3b8,&local_3d8,&local_238,&local_248,&local_448,
                                    &local_398,&local_378);
              if (cVar7 != '\0') {
                local_398 = local_358;
                lStack_390 = lStack_350;
                local_388 = local_348;
                lStack_380 = lStack_340;
                local_448 = local_338;
                lStack_440 = lStack_330;
                local_438 = CONCAT44(uStack_324,local_328);
                uStack_430 = CONCAT44(uStack_31c,uStack_320);
                local_2b8 = local_378;
                uStack_2b0 = uStack_370;
                local_268 = CONCAT44(uStack_324,local_328);
                uStack_260 = CONCAT44(uStack_31c,uStack_320);
                local_2a8 = local_368;
                uStack_2a0 = uStack_360;
                local_298 = local_358;
                uStack_290 = lStack_350;
                local_288 = local_348;
                uStack_280 = lStack_340;
                local_278 = local_338;
                lStack_270 = lStack_330;
                FUN_144cb9d00();
              }
              local_148 = local_2b8;
              uStack_140 = uStack_2b0;
              local_138 = (undefined4)local_2a8;
              uStack_134 = local_2a8._4_4_;
              uStack_130 = (undefined4)uStack_2a0;
              uStack_12c = uStack_2a0._4_4_;
              local_128 = (undefined4)local_298;
              uStack_124 = local_298._4_4_;
              uStack_120 = (undefined4)uStack_290;
              uStack_11c = uStack_290._4_4_;
              local_118 = (undefined4)local_288;
              uStack_114 = local_288._4_4_;
              uStack_110 = (undefined4)uStack_280;
              uStack_10c = uStack_280._4_4_;
              local_108 = local_278;
              lStack_100 = lStack_270;
              local_f8 = local_268;
              uStack_f0 = uStack_260;
              local_e8 = (float)local_258;
              fStack_e4 = local_258._4_4_;
              uStack_e0 = 0xffffffff;
              fStack_dc = fStack_30c;
              local_318 = (float)local_258;
              fStack_314 = local_258._4_4_;
              fStack_310 = -NAN;
              if (cVar7 != '\0') {
                iVar8 = FUN_144cb8980(&local_1b8,&local_148);
                iVar9 = FUN_144cb8980(&local_148,&local_228);
                if ((iVar8 == 0) || (0 < iVar9 * iVar8)) {
                  local_2b8 = *puVar24;
                  uStack_2b0 = puVar24[1];
                  local_2a8 = puVar24[2];
                  uStack_2a0 = puVar24[3];
                  local_298 = puVar24[4];
                  uStack_290 = puVar24[5];
                  local_288 = puVar24[6];
                  uStack_280 = puVar24[7];
                  local_278 = puVar24[8];
                  lStack_270 = puVar24[9];
                  lVar12 = (longlong)((int)((2 - iVar5) + uVar25) % iVar5) * 0xc0;
                  local_268 = puVar24[10];
                  uStack_260 = puVar24[0xb];
                  local_258 = puVar24[0xc];
                  uStack_250 = puVar24[0xd];
                  puVar18 = (undefined8 *)(lVar12 + 0x18 + lVar4);
                  local_368 = *puVar18;
                  uStack_360 = puVar18[1];
                  puVar18 = (undefined8 *)(lVar12 + 8 + lVar4);
                  local_378 = *puVar18;
                  uStack_370 = puVar18[1];
                  plVar3 = (longlong *)(lVar12 + 0x38 + lVar4);
                  local_348 = *plVar3;
                  lStack_340 = plVar3[1];
                  plVar3 = (longlong *)(lVar12 + 0x28 + lVar4);
                  local_358 = *plVar3;
                  lStack_350 = plVar3[1];
                  puVar1 = (undefined4 *)(lVar12 + 0x58 + lVar4);
                  local_328 = *puVar1;
                  uStack_324 = puVar1[1];
                  uStack_320 = puVar1[2];
                  uStack_31c = puVar1[3];
                  plVar3 = (longlong *)(lVar12 + 0x48 + lVar4);
                  local_338 = *plVar3;
                  lStack_330 = plVar3[1];
                  pfVar2 = (float *)(lVar12 + 0x68 + lVar4);
                  local_318 = *pfVar2;
                  fStack_314 = pfVar2[1];
                  fStack_310 = pfVar2[2];
                  fStack_30c = pfVar2[3];
                  iVar9 = FUN_144cb8980(&local_2b8,&local_148);
                  iVar10 = FUN_144cb8980(&local_148,&local_378);
                  if ((iVar9 == 0) || (0 < iVar10 * iVar9)) {
                    if (iVar8 == 0) {
                      if (iVar9 == 0) {
                        lVar21 = (longlong)((int)uVar20 % iVar5) * 0xc0;
                        lVar12 = (longlong)((int)uVar25 % iVar5) * 0xc0 + lVar4;
                        cVar7 = FUN_144d11f20(&local_1b8,lVar4 + 8 + lVar21,&local_228,
                                              lVar4 + 0x78 + lVar21,&local_308,lVar12 + 8,&local_378
                                              ,lVar12 + 0x78,&local_428);
                        if (cVar7 != '\0') goto LAB_144d12894;
                      }
                      else {
                        uVar11 = uVar20 & 0x80000001;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                        }
                        iVar8 = FUN_144d11db0(&local_428,(longlong)(int)uVar11 * 0xc0 + 8 + lVar4);
                        fVar27 = (float)uStack_3f0 * (float)local_1c8 +
                                 uStack_3f0._4_4_ * local_1c8._4_4_ + (float)local_3e8;
                        fVar26 = (ABS(local_1c8._4_4_) * ABS(uStack_3f0._4_4_) +
                                  ABS((float)local_1c8) * ABS((float)uStack_3f0) +
                                 ABS((float)local_3e8)) * 3.5762787e-07;
                        if (fVar27 <= fVar26) {
                          if (-fVar26 <= fVar27) {
                            iVar9 = FUN_144cb9080(&local_428,&local_228);
                          }
                          else {
                            iVar9 = -1;
                          }
                        }
                        else {
                          iVar9 = 1;
                        }
                        if ((0 < iVar8) || (0 < iVar9)) goto LAB_144d12894;
                        if ((iVar8 == 0) && (iVar9 == 0)) {
                          lVar12 = FUN_144ceaef0(&local_148,&local_228,&local_1b8);
                          puVar14 = (ulonglong *)FUN_144d12c70(&local_2b8,&local_418,lVar12);
                          puVar18 = &local_428;
                          puVar16 = &local_378;
                          goto LAB_144d12b71;
                        }
                      }
                    }
                    else {
                      if (iVar9 != 0) goto LAB_144d12894;
                      uVar11 = uVar25 & 0x80000001;
                      if ((int)uVar11 < 0) {
                        uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                      }
                      iVar8 = FUN_144d11db0(&local_308,(longlong)(int)uVar11 * 0xc0 + 8 + lVar4);
                      fVar27 = (float)uStack_2d0 * local_318 + uStack_2d0._4_4_ * fStack_314 +
                               (float)local_2c8;
                      fVar26 = (ABS(fStack_314) * ABS(uStack_2d0._4_4_) +
                                ABS(local_318) * ABS((float)uStack_2d0) + ABS((float)local_2c8)) *
                               3.5762787e-07;
                      if (fVar27 <= fVar26) {
                        if (-fVar26 <= fVar27) {
                          iVar9 = FUN_144cb9080(&local_308,&local_378);
                        }
                        else {
                          iVar9 = -1;
                        }
                      }
                      else {
                        iVar9 = 1;
                      }
                      if ((0 < iVar8) || (0 < iVar9)) goto LAB_144d12894;
                      if ((iVar8 == 0) && (iVar9 == 0)) {
                        lVar12 = FUN_144ceaef0(&local_148,&local_378,&local_2b8);
                        puVar14 = (ulonglong *)FUN_144d12c70(&local_378,&local_2f8,lVar12);
                        puVar18 = &local_308;
                        puVar16 = &local_2b8;
LAB_144d12b71:
                        puVar15 = (ulonglong *)FUN_144d12c70(puVar16,puVar18,lVar12 + 0x38);
                        if ((longlong)
                            ((puVar15[8] - puVar14[8]) -
                            (ulonglong)
                            (puVar15[7] < puVar14[7] ||
                            puVar15[7] - puVar14[7] <
                            (ulonglong)
                            (puVar15[6] < puVar14[6] ||
                            puVar15[6] - puVar14[6] <
                            (ulonglong)
                            (puVar15[5] < puVar14[5] ||
                            puVar15[5] - puVar14[5] <
                            (ulonglong)
                            (puVar15[4] < puVar14[4] ||
                            puVar15[4] - puVar14[4] <
                            (ulonglong)
                            (puVar15[3] < puVar14[3] ||
                            puVar15[3] - puVar14[3] <
                            (ulonglong)
                            (puVar15[2] < puVar14[2] ||
                            puVar15[2] - puVar14[2] <
                            (ulonglong)
                            (puVar15[1] < puVar14[1] ||
                            puVar15[1] - puVar14[1] < (ulonglong)(*puVar15 < *puVar14))))))))) < 0)
                        goto LAB_144d12894;
                      }
                    }
                  }
                }
              }
            }
            uVar23 = uVar23 + 1;
            uVar25 = uVar25 + 1;
            lVar22 = lVar22 + 1;
            puVar24 = puVar24 + 0x18;
          } while (lVar22 < lVar17);
        }
        uVar20 = uVar20 + 1;
        local_458 = local_458 + 1;
      } while (local_458 < lVar17);
    }
    uVar13 = 1;
  }
  else {
LAB_144d12894:
    uVar13 = 0;
  }
  return uVar13;
}



// FUNCTION 144d12c70 FUN_144d12c70 body=198 status=ok
// SIG undefined FUN_144d12c70(void)

undefined8 * FUN_144d12c70(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  FUN_144d12ef0(param_2,param_3,&local_58);
  if ((longlong)param_2[1] < 0) {
    bVar3 = local_48 < *param_3;
    local_48 = local_48 - *param_3;
    bVar4 = local_40 < param_3[1];
    uVar1 = local_40 - param_3[1];
    local_40 = uVar1 - bVar3;
    uVar1 = (ulonglong)(bVar4 || uVar1 < bVar3);
    bVar3 = local_38 < param_3[2];
    uVar2 = local_38 - param_3[2];
    local_38 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_30 < param_3[3];
    uVar2 = local_30 - param_3[3];
    local_30 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_28 < param_3[4];
    uVar2 = local_28 - param_3[4];
    local_28 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_20 < param_3[5];
    uVar2 = local_20 - param_3[5];
    local_20 = uVar2 - uVar1;
    local_18 = (local_18 - param_3[6]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  if ((longlong)param_3[6] < 0) {
    bVar3 = local_20 < *param_2;
    local_20 = local_20 - *param_2;
    local_18 = (local_18 - param_2[1]) - (ulonglong)bVar3;
  }
  *param_1 = local_58;
  param_1[5] = local_30;
  param_1[1] = local_50;
  param_1[6] = local_28;
  param_1[2] = local_48;
  param_1[3] = local_40;
  param_1[4] = local_38;
  param_1[7] = local_20;
  param_1[8] = local_18;
  return param_1;
}



// FUNCTION 144d12d40 FUN_144d12d40 body=430 status=ok
// SIG undefined FUN_144d12d40(void)

ulonglong FUN_144d12d40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar8 = param_3;
  if (param_3 < uVar11) {
    uVar8 = uVar11;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0xc0,&local_res8);
  puVar10 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    puVar7 = puVar6;
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = puVar10[1];
        *puVar7 = *puVar10;
        puVar7[1] = uVar5;
        uVar5 = puVar10[3];
        puVar7[2] = puVar10[2];
        puVar7[3] = uVar5;
        uVar5 = puVar10[5];
        puVar7[4] = puVar10[4];
        puVar7[5] = uVar5;
        uVar5 = puVar10[7];
        puVar7[6] = puVar10[6];
        puVar7[7] = uVar5;
        uVar5 = puVar10[9];
        puVar7[8] = puVar10[8];
        puVar7[9] = uVar5;
        uVar5 = puVar10[0xb];
        puVar7[10] = puVar10[10];
        puVar7[0xb] = uVar5;
        uVar5 = puVar10[0xd];
        puVar7[0xc] = puVar10[0xc];
        puVar7[0xd] = uVar5;
        uVar5 = puVar10[0xf];
        puVar7[0xe] = puVar10[0xe];
        puVar7[0xf] = uVar5;
        uVar5 = puVar10[0x11];
        puVar7[0x10] = puVar10[0x10];
        puVar7[0x11] = uVar5;
        uVar5 = puVar10[0x13];
        puVar7[0x12] = puVar10[0x12];
        puVar7[0x13] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar10 + 0xa4);
        uVar3 = *(undefined4 *)(puVar10 + 0x15);
        uVar4 = *(undefined4 *)((longlong)puVar10 + 0xac);
        *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(puVar10 + 0x14);
        *(undefined4 *)((longlong)puVar7 + 0xa4) = uVar2;
        *(undefined4 *)(puVar7 + 0x15) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0xac) = uVar4;
        uVar5 = puVar10[0x17];
        puVar7[0x16] = puVar10[0x16];
        puVar7[0x17] = uVar5;
      }
      puVar7 = puVar7 + 0x18;
      puVar10 = puVar10 + 0x18;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar8 * 0xc0 + 0xc0;
  uVar9 = uVar8;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0xc0;
    uVar9 = uVar8 + 1;
    if (uVar11 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0xc0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar11 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0xc0;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0xc0);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar11;
}



// FUNCTION 144d12ef0 FUN_144d12ef0 body=330 status=ok
// SIG undefined FUN_144d12ef0(void)

void FUN_144d12ef0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong auStack_70 [9];
  longlong local_28;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar3;
  uVar17 = SUB168(auVar9 * auVar13,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar4;
  auStack_70[2] = uVar4 * uVar2 + uVar17;
  auStack_70[3] = SUB168(auVar10 * auVar14,8) + (ulonglong)CARRY8(uVar4 * uVar2,uVar17);
  lVar19 = 1;
  iVar20 = 1;
  do {
    uVar17 = param_2[lVar19];
    lVar1 = lVar19 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar17;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar3;
    uVar18 = SUB168(auVar11 * auVar15,8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar17;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar4;
    uVar7 = uVar4 * uVar17 + uVar18;
    uVar5 = auStack_70[lVar1];
    auStack_70[(longlong)iVar20 + 1] = uVar3 * uVar17 + auStack_70[lVar1];
    uVar6 = (ulonglong)CARRY8(uVar3 * uVar17,uVar5);
    uVar5 = auStack_70[lVar19 + 2];
    uVar8 = uVar7 + auStack_70[lVar19 + 2];
    auStack_70[(longlong)(iVar20 + 1) + 1] = uVar8 + uVar6;
    auStack_70[(longlong)(iVar20 + 2) + 1] =
         SUB168(auVar12 * auVar16,8) + (ulonglong)CARRY8(uVar4 * uVar17,uVar18) +
         (ulonglong)(CARRY8(uVar7,uVar5) || CARRY8(uVar8,uVar6));
    lVar19 = lVar1;
    iVar20 = iVar20 + 1;
  } while (lVar1 < 7);
  *param_3 = uVar3 * uVar2;
  param_3[1] = auStack_70[2];
  param_3[2] = auStack_70[3];
  param_3[3] = auStack_70[4];
  param_3[4] = auStack_70[5];
  param_3[5] = auStack_70[6];
  param_3[6] = auStack_70[7];
  param_3[7] = auStack_70[8];
  param_3[8] = local_28;
  return;
}



// FUNCTION 144d13040 FUN_144d13040 body=103 status=ok
// SIG undefined FUN_144d13040(void)

void FUN_144d13040(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 5);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144d130b0 FUN_144d130b0 body=366 status=ok
// SIG undefined FUN_144d130b0(void)

longlong * FUN_144d130b0(longlong *param_1,uint *param_2,float *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined4 in_EAX;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar30 = ABS(fVar4);
  fVar31 = ABS(fVar5);
  fVar32 = ABS(fVar6);
  auVar29._0_8_ = CONCAT44(fVar4,fVar4) & 0x7fffffff7fffffff;
  auVar29._8_4_ = fVar30;
  auVar29._12_4_ = fVar30;
  auVar26._0_8_ = CONCAT44(fVar6,fVar6) & 0x7fffffff7fffffff;
  auVar26._8_4_ = fVar32;
  auVar26._12_4_ = fVar32;
  auVar28._0_8_ = CONCAT44(fVar5,fVar5) & 0x7fffffff7fffffff;
  auVar28._8_4_ = fVar31;
  auVar28._12_4_ = fVar31;
  auVar29 = maxps(auVar28,auVar29);
  auVar29 = maxps(auVar26,auVar29);
  auVar27._4_4_ = -(uint)(auVar29._4_4_ <= fVar31);
  auVar27._0_4_ = -(uint)(auVar29._0_4_ <= fVar30);
  auVar27._8_4_ = -(uint)(auVar29._8_4_ <= fVar32);
  auVar27._12_4_ = -(uint)(auVar29._12_4_ <= ABS(param_3[3]));
  uVar21 = movmskps(in_EAX,auVar27);
  cVar1 = (&DAT_14998f5c0)[uVar21 & 7];
  lVar3 = (longlong)(cVar1 + 1);
  iVar25 = cVar1 + 2;
  bVar22 = (char)(cVar1 + 1) +
           ((char)((ulonglong)(lVar3 * 0x55555556) >> 0x20) +
           (char)((lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
  bVar23 = (char)iVar25 +
           ((char)(iVar25 / 3) + (char)(iVar25 >> 0x1f) +
           (char)(((longlong)iVar25 / 3 + ((longlong)iVar25 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
  bVar24 = bVar23;
  if (0.0 < param_3[cVar1] || param_3[cVar1] == 0.0) {
    bVar24 = bVar22;
  }
  lVar3 = (longlong)(4 << (bVar24 & 0x1f)) * 4;
  uVar21 = *(uint *)(&DAT_14998f650 + lVar3);
  uVar7 = *(uint *)(&UNK_14998f654 + lVar3);
  uVar8 = *(uint *)(&UNK_14998f658 + lVar3);
  uVar9 = *(uint *)(&UNK_14998f65c + lVar3);
  if (0.0 < param_3[cVar1] || param_3[cVar1] == 0.0) {
    bVar22 = bVar23;
  }
  lVar3 = (longlong)(4 << (bVar22 & 0x1f)) * 4;
  uVar10 = *(uint *)(&DAT_14998f650 + lVar3);
  uVar11 = *(uint *)(&UNK_14998f654 + lVar3);
  uVar12 = *(uint *)(&UNK_14998f658 + lVar3);
  uVar13 = *(uint *)(&UNK_14998f65c + lVar3);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  FUN_1418055da(param_1,&PTR_vftable_14c6e47a0,4);
  puVar2 = (undefined8 *)*param_1;
  if (((int)param_1[1] < 4) || (4 < (int)param_1[1])) {
    *(undefined4 *)(param_1 + 1) = 4;
  }
  uVar20 = *(undefined8 *)(param_2 + 2);
  *puVar2 = *(undefined8 *)param_2;
  puVar2[1] = uVar20;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[5];
  uVar18 = param_2[6];
  uVar19 = param_2[7];
  lVar3 = *param_1;
  *(uint *)(lVar3 + 0x10) = uVar21 & param_2[4] | ~uVar21 & *param_2;
  *(uint *)(lVar3 + 0x14) = uVar7 & uVar17 | ~uVar7 & uVar14;
  *(uint *)(lVar3 + 0x18) = uVar8 & uVar18 | ~uVar8 & uVar15;
  *(uint *)(lVar3 + 0x1c) = uVar9 & uVar19 | ~uVar9 & uVar16;
  lVar3 = *param_1;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[5];
  uVar18 = param_2[6];
  uVar19 = param_2[7];
  *(uint *)(lVar3 + 0x20) = (uVar21 | uVar10) & param_2[4] | ~(uVar21 | uVar10) & *param_2;
  *(uint *)(lVar3 + 0x24) = (uVar7 | uVar11) & uVar17 | ~(uVar7 | uVar11) & uVar14;
  *(uint *)(lVar3 + 0x28) = (uVar8 | uVar12) & uVar18 | ~(uVar8 | uVar12) & uVar15;
  *(uint *)(lVar3 + 0x2c) = (uVar9 | uVar13) & uVar19 | ~(uVar9 | uVar13) & uVar16;
  lVar3 = *param_1;
  uVar21 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[1];
  uVar14 = param_2[2];
  uVar15 = param_2[3];
  *(uint *)(lVar3 + 0x30) = ~uVar10 & *param_2 | uVar10 & param_2[4];
  *(uint *)(lVar3 + 0x34) = ~uVar11 & uVar9 | uVar11 & uVar21;
  *(uint *)(lVar3 + 0x38) = ~uVar12 & uVar14 | uVar12 & uVar7;
  *(uint *)(lVar3 + 0x3c) = ~uVar13 & uVar15 | uVar13 & uVar8;
  return param_1;
}



// FUNCTION 144d13220 FUN_144d13220 body=201 status=ok
// SIG undefined FUN_144d13220(void)

undefined8 * FUN_144d13220(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_144d20ba0(&local_a8,*param_1,param_1 + 4);
  *param_2 = local_a8;
  param_2[1] = uStack_a0;
  param_2[4] = local_88;
  param_2[5] = uStack_80;
  param_2[2] = local_98;
  param_2[3] = uStack_90;
  param_2[8] = local_68;
  param_2[9] = uStack_60;
  param_2[6] = local_78;
  param_2[7] = uStack_70;
  param_2[0xc] = local_48;
  param_2[0xd] = uStack_40;
  param_2[10] = local_58;
  param_2[0xb] = uStack_50;
  param_2[0x10] = local_28;
  param_2[0x11] = uStack_20;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_14;
  *(undefined4 *)(param_2 + 0x12) = local_18;
  *(undefined4 *)(param_2 + 0x14) = param_1[10];
  *(undefined4 *)((longlong)param_2 + 0xa4) = param_1[0xc];
  return param_2;
}



// FUNCTION 144d132f0 FUN_144d132f0 body=210 status=ok
// SIG undefined FUN_144d132f0(void)

undefined8 * FUN_144d132f0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_144d20ba0(&local_a8,*param_1,param_1 + 4);
  *param_2 = local_a8;
  param_2[1] = uStack_a0;
  param_2[4] = local_88;
  param_2[5] = uStack_80;
  param_2[2] = local_98;
  param_2[3] = uStack_90;
  param_2[8] = local_68;
  param_2[9] = uStack_60;
  param_2[6] = local_78;
  param_2[7] = uStack_70;
  param_2[0xc] = local_48;
  param_2[0xd] = uStack_40;
  param_2[10] = local_58;
  param_2[0xb] = uStack_50;
  param_2[0x10] = local_28;
  param_2[0x11] = uStack_20;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_14;
  *(undefined4 *)(param_2 + 0x12) = local_18;
  *(undefined4 *)(param_2 + 0x14) = param_1[10];
  *(undefined4 *)((longlong)param_2 + 0xa4) = param_1[0xb];
  *(undefined4 *)(param_2 + 0x15) = param_1[8];
  return param_2;
}



// FUNCTION 144d133d0 FUN_144d133d0 body=267 status=ok
// SIG undefined FUN_144d133d0(void)

undefined8 * FUN_144d133d0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0x80000000;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0x80000000;
  FUN_144d20ba0(&local_a8,*param_1,param_1 + 4);
  *param_2 = local_a8;
  param_2[1] = uStack_a0;
  param_2[4] = local_88;
  param_2[5] = uStack_80;
  param_2[2] = local_98;
  param_2[3] = uStack_90;
  param_2[8] = local_68;
  param_2[9] = uStack_60;
  param_2[6] = local_78;
  param_2[7] = uStack_70;
  param_2[0xc] = local_48;
  param_2[0xd] = uStack_40;
  param_2[10] = local_58;
  param_2[0xb] = uStack_50;
  param_2[0x10] = local_28;
  param_2[0x11] = uStack_20;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_14;
  *(undefined4 *)(param_2 + 0x12) = local_18;
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1[8];
  }
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  FUN_147e4a4bc(param_2 + 0x15,param_1 + 0x20);
  return param_2;
}



// FUNCTION 144d134e0 FUN_144d134e0 body=467 status=ok
// SIG undefined FUN_144d134e0(void)

undefined8 * FUN_144d134e0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  
  *(undefined4 *)(param_2 + 0x14) = 0x40a00000;
  puVar1 = param_2 + 0x15;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0x3f800000;
  puVar2 = param_2 + 0x17;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0x80000000;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0x80000000;
  *(undefined1 *)(param_2 + 0x19) = 1;
  FUN_144d20ba0(&local_b8,*param_1,param_1 + 4);
  *param_2 = local_b8;
  param_2[1] = uStack_b0;
  param_2[4] = local_98;
  param_2[5] = uStack_90;
  param_2[2] = local_a8;
  param_2[3] = uStack_a0;
  param_2[8] = local_78;
  param_2[9] = uStack_70;
  param_2[6] = local_88;
  param_2[7] = uStack_80;
  param_2[0xc] = local_58;
  param_2[0xd] = uStack_50;
  param_2[10] = local_68;
  param_2[0xb] = uStack_60;
  param_2[0x10] = local_38;
  param_2[0x11] = uStack_30;
  param_2[0xe] = local_48;
  param_2[0xf] = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_24;
  *(undefined4 *)(param_2 + 0x12) = local_28;
  *(undefined4 *)(param_2 + 0x14) = param_1[0x14];
  *(undefined4 *)((longlong)param_2 + 0xa4) = param_1[0x15];
  if ((undefined8 *)(param_1 + 0x16) != puVar1) {
    iVar3 = param_1[0x18];
    uVar4 = *(undefined8 *)(param_1 + 0x16);
    if ((int)(*(uint *)((longlong)param_2 + 0xb4) & 0x7fffffff) < iVar3) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar4,(longlong)iVar3 << 4);
    *(int *)(param_2 + 0x16) = iVar3;
  }
  if ((undefined8 *)(param_1 + 0x1a) != puVar2) {
    iVar3 = param_1[0x1c];
    uVar4 = *(undefined8 *)(param_1 + 0x1a);
    if ((int)(*(uint *)((longlong)param_2 + 0xc4) & 0x7fffffff) < iVar3) {
      FUN_147e4a550(puVar2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar2,uVar4,(longlong)iVar3 << 5);
    *(int *)(param_2 + 0x18) = iVar3;
  }
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x1e);
  return param_2;
}



// FUNCTION 144d136c0 FUN_144d136c0 body=299 status=ok
// SIG undefined FUN_144d136c0(void)

undefined8 * FUN_144d136c0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_2 + 0x14) = 0xbf800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x15) = 0xbf800000;
  *(undefined4 *)((longlong)param_2 + 0xac) = 0xbf800000;
  *(undefined1 *)((longlong)param_2 + 0xb4) = 0;
  FUN_144d20ba0(&local_a8,*param_1,param_1 + 4);
  *param_2 = local_a8;
  param_2[1] = uStack_a0;
  param_2[4] = local_88;
  param_2[5] = uStack_80;
  param_2[2] = local_98;
  param_2[3] = uStack_90;
  param_2[8] = local_68;
  param_2[9] = uStack_60;
  param_2[6] = local_78;
  param_2[7] = uStack_70;
  param_2[0xc] = local_48;
  param_2[0xd] = uStack_40;
  param_2[10] = local_58;
  param_2[0xb] = uStack_50;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_30;
  param_2[0x10] = local_28;
  param_2[0x11] = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_14;
  *(undefined4 *)(param_2 + 0x12) = local_18;
  param_2[0x14] = *(undefined8 *)(param_1 + 0xe);
  if (*(char *)(param_1 + 0x10) == '\0') {
    param_2[0x15] = 0;
  }
  else {
    param_2[0x15] = *(undefined8 *)(param_1 + 0xe);
  }
  *(undefined4 *)(param_2 + 0x16) = param_1[0x11];
  *(byte *)((longlong)param_2 + 0xb4) = (byte)((uint)param_1[0x28] >> 4) & 1;
  return param_2;
}



// FUNCTION 144d137f0 FUN_144d137f0 body=192 status=ok
// SIG undefined FUN_144d137f0(void)

undefined8 * FUN_144d137f0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_144d20ba0(&local_a8,*param_1,param_1 + 4);
  *param_2 = local_a8;
  param_2[1] = uStack_a0;
  param_2[4] = local_88;
  param_2[5] = uStack_80;
  param_2[2] = local_98;
  param_2[3] = uStack_90;
  param_2[8] = local_68;
  param_2[9] = uStack_60;
  param_2[6] = local_78;
  param_2[7] = uStack_70;
  param_2[0xc] = local_48;
  param_2[0xd] = uStack_40;
  param_2[10] = local_58;
  param_2[0xb] = uStack_50;
  param_2[0x10] = local_28;
  param_2[0x11] = uStack_20;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_14;
  *(undefined4 *)(param_2 + 0x12) = local_18;
  *(undefined4 *)(param_2 + 0x14) = param_1[0x12];
  return param_2;
}



// FUNCTION 144d138b0 FUN_144d138b0 body=207 status=ok
// SIG undefined FUN_144d138b0(void)

undefined8 * FUN_144d138b0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_144d20ba0(&local_a8,*param_1,param_1 + 4);
  *param_2 = local_a8;
  param_2[1] = uStack_a0;
  param_2[4] = local_88;
  param_2[5] = uStack_80;
  param_2[2] = local_98;
  param_2[3] = uStack_90;
  param_2[8] = local_68;
  param_2[9] = uStack_60;
  param_2[6] = local_78;
  param_2[7] = uStack_70;
  param_2[0xc] = local_48;
  param_2[0xd] = uStack_40;
  param_2[10] = local_58;
  param_2[0xb] = uStack_50;
  param_2[0x10] = local_28;
  param_2[0x11] = uStack_20;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_14;
  *(undefined4 *)(param_2 + 0x12) = local_18;
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1[8];
  }
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  return param_2;
}



// FUNCTION 144d13980 FUN_144d13980 body=2545 status=ok
// SIG undefined FUN_144d13980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144d13980(float *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 local_res8 [2];
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 local_314;
  float local_308;
  float local_304;
  undefined8 local_300;
  float local_2f8;
  uint local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  float local_108;
  float local_104;
  undefined8 local_100;
  float local_f8;
  uint local_f4;
  undefined8 local_f0;
  float local_e8;
  uint local_e4;
  undefined1 local_e0;
  undefined1 local_d8 [148];
  float local_44;
  
  local_res8[0] = 0x3a83126f;
  auVar6._0_4_ = -(uint)(((uint)param_1[4] & 0x7f800000) == 0x7f800000);
  auVar6._4_4_ = -(uint)(((uint)param_1[5] & 0x7f800000) == 0x7f800000);
  auVar6._8_4_ = -(uint)(((uint)param_1[6] & 0x7f800000) == 0x7f800000);
  auVar6._12_4_ = -(uint)(((uint)param_1[7] & 0x7f800000) == 0x7f800000);
  if ((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0x27,0) & 1) != 0) ||
       (SUB161(auVar6 >> 0x47,0) & 1) != 0) ||
     (0.001 <= ABS((param_1[5] * param_1[5] + param_1[4] * param_1[4] + param_1[6] * param_1[6]) -
                   _DAT_14c6daca0))) {
    FUN_144bde670(local_458,&local_3a8,0x200);
    FUN_144be6160(local_458,"The up vector must be normalized.");
    FUN_144bfc0d0(0x63bf1715,&local_3a8,"NavMesh\\Generation\\hkaiNavMeshGenerationSettings.cpp",
                  0x122);
    FUN_144bde6e0(local_458);
    *param_2 = 0x80040200;
    return param_2;
  }
  if (*param_1 <= 0.0) {
    FUN_144bde670(local_458,&local_3a8,0x200);
    FUN_144be6160(local_458,"The quantum must be positive.");
    FUN_144bfc0d0(0x3f444022,&local_3a8,"NavMesh\\Generation\\hkaiNavMeshGenerationSettings.cpp",
                  0x128);
    FUN_144bde6e0(local_458);
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_144d20ba0(local_d8,param_2,param_1 + 4);
  fVar5 = local_44 * param_1[8];
  if ((fVar5 < 0.0) || (iVar2 = 0, 16777216.0 <= fVar5)) {
    iVar2 = -0x7ffbfe00;
  }
  if (iVar2 < 0) {
    FUN_144bde670(local_458,&local_3a8,0x200);
    FUN_144be6160(local_458,
                  "The minimum character radius must be nonnegative, and less than half the generation domain size."
                 );
    uVar4 = 0x131;
    uVar3 = 0x7cc531b;
  }
  else {
    local_44 = local_44 * param_1[9];
    iVar2 = -0x7ffbfe00;
    if ((0.0 <= local_44) && (local_44 < 16777216.0)) {
      iVar2 = 0;
    }
    if (iVar2 < 0) {
      FUN_144bde670(local_458,&local_3a8,0x200);
      FUN_144be6160(local_458,
                    "The maximum character radius must be nonnegative, and less than half the generation domain size."
                   );
      uVar4 = 0x137;
      uVar3 = 0x35b47d9f;
    }
    else if (param_1[9] < param_1[8]) {
      FUN_144bde670(local_458,&local_3a8,0x200);
      FUN_144be6160(local_458,
                    "The maximum character radius must not be less than the minimum character radius."
                   );
      uVar4 = 0x13d;
      uVar3 = 0x7e2401ad;
    }
    else {
      if (((uint)param_1[0x29] & 1) != 0) {
        FUN_144d20ba0(&local_448);
        local_304 = param_1[0xc];
        local_3a8 = local_448;
        uStack_3a0 = uStack_440;
        local_388 = local_428;
        uStack_380 = uStack_420;
        local_368 = local_408;
        uStack_360 = uStack_400;
        local_398 = local_438;
        uStack_390 = uStack_430;
        local_348 = local_3e8;
        uStack_340 = uStack_3e0;
        local_378 = local_418;
        uStack_370 = uStack_410;
        local_328 = local_3c8;
        uStack_320 = uStack_3c0;
        local_358 = local_3f8;
        uStack_350 = uStack_3f0;
        local_314 = local_3b4;
        local_308 = param_1[10];
        local_338 = local_3d8;
        uStack_330 = uStack_3d0;
        local_318 = local_3b8;
        piVar1 = (int *)FUN_144d1af40(&local_3a8,local_res8);
        if (*piVar1 < 0) goto LAB_144d13b14;
      }
      if (((uint)param_1[0x29] & 2) != 0) {
        FUN_144d20ba0(&local_448);
        local_3a8 = local_448;
        uStack_3a0 = uStack_440;
        local_398 = local_438;
        uStack_390 = uStack_430;
        local_388 = local_428;
        uStack_380 = uStack_420;
        local_378 = local_418;
        uStack_370 = uStack_410;
        local_368 = local_408;
        uStack_360 = uStack_400;
        local_358 = local_3f8;
        uStack_350 = uStack_3f0;
        local_348 = local_3e8;
        uStack_340 = uStack_3e0;
        local_338 = local_3d8;
        uStack_330 = uStack_3d0;
        local_318 = local_3b8;
        local_308 = param_1[10];
        local_328 = local_3c8;
        uStack_320 = uStack_3c0;
        local_314 = local_3b4;
        local_304 = param_1[0xb];
        local_300 = CONCAT44(local_300._4_4_,param_1[8]);
        piVar1 = (int *)FUN_145046140(&local_3a8,local_res8);
        if (*piVar1 < 0) goto LAB_144d13b14;
      }
      if (((uint)param_1[0x29] & 4) != 0) {
        local_300 = 0;
        local_2f8 = 0.0;
        local_2f4 = 0x80000000;
        local_2f0 = 0;
        local_2e8 = 0;
        local_2e4 = 0x80000000;
        FUN_144d20ba0(&local_448);
        local_3a8 = local_448;
        uStack_3a0 = uStack_440;
        local_388 = local_428;
        uStack_380 = uStack_420;
        local_398 = local_438;
        uStack_390 = uStack_430;
        local_368 = local_408;
        uStack_360 = uStack_400;
        local_378 = local_418;
        uStack_370 = uStack_410;
        local_348 = local_3e8;
        uStack_340 = uStack_3e0;
        local_358 = local_3f8;
        uStack_350 = uStack_3f0;
        local_328 = local_3c8;
        uStack_320 = uStack_3c0;
        local_338 = local_3d8;
        uStack_330 = uStack_3d0;
        local_314 = local_3b4;
        local_318 = local_3b8;
        if (*(char *)(param_1 + 0xd) == '\0') {
          local_308 = 0.0;
        }
        else {
          local_308 = param_1[8];
        }
        FUN_147e4a4bc(&local_300,param_1 + 0x20);
        piVar1 = (int *)FUN_144cda850(&local_3a8,local_res8);
        iVar2 = *piVar1;
        FUN_147e4aaf0(&local_300);
        if (iVar2 < 0) goto LAB_144d13b14;
      }
      if (*(char *)((longlong)param_1 + 0x36) != '\0') {
        local_100 = 0;
        local_f8 = 0.0;
        local_f4 = 0x80000000;
        local_f0 = 0;
        local_e8 = 0.0;
        local_e4 = 0x80000000;
        local_e0 = 1;
        FUN_144d20ba0(&local_448);
        local_1a8 = local_448;
        uStack_1a0 = uStack_440;
        local_188 = local_428;
        uStack_180 = uStack_420;
        local_198 = local_438;
        uStack_190 = uStack_430;
        local_168 = local_408;
        uStack_160 = uStack_400;
        local_178 = local_418;
        uStack_170 = uStack_410;
        local_148 = local_3e8;
        uStack_140 = uStack_3e0;
        local_158 = local_3f8;
        uStack_150 = uStack_3f0;
        local_128 = local_3c8;
        uStack_120 = uStack_3c0;
        local_138 = local_3d8;
        uStack_130 = uStack_3d0;
        local_114 = local_3b4;
        local_104 = param_1[0x15];
        local_118 = local_3b8;
        local_108 = param_1[0x14];
        if (param_1 + 0x16 != (float *)&local_100) {
          fVar5 = param_1[0x18];
          uVar3 = *(undefined8 *)(param_1 + 0x16);
          if ((int)(local_f4 & 0x7fffffff) < (int)fVar5) {
            FUN_140c3e7da(&local_100,&PTR_vftable_14c6e47a0,(longlong)(int)fVar5);
          }
          FUN_144b3d470(local_100,uVar3,(longlong)(int)fVar5 << 4);
          local_f8 = fVar5;
        }
        if (param_1 + 0x1a != (float *)&local_f0) {
          fVar5 = param_1[0x1c];
          uVar3 = *(undefined8 *)(param_1 + 0x1a);
          if ((int)(local_e4 & 0x7fffffff) < (int)fVar5) {
            FUN_147e4a550(&local_f0,&PTR_vftable_14c6e47a0,(longlong)(int)fVar5);
          }
          FUN_144b3d470(local_f0,uVar3,(longlong)(int)fVar5 << 5);
          local_e8 = fVar5;
        }
        local_e0 = *(undefined1 *)(param_1 + 0x1e);
        piVar1 = (int *)FUN_145046050(&local_1a8,local_res8);
        iVar2 = *piVar1;
        FUN_147e4d06a(&local_1a8);
        if (iVar2 < 0) goto LAB_144d13b14;
      }
      if (((uint)param_1[0x29] & 0x20) != 0) {
        local_308 = -1.0;
        local_304 = -1.0;
        FUN_144d20ba0(&local_448);
        local_3a8 = local_448;
        uStack_3a0 = uStack_440;
        local_388 = local_428;
        uStack_380 = uStack_420;
        local_398 = local_438;
        uStack_390 = uStack_430;
        local_368 = local_408;
        uStack_360 = uStack_400;
        local_378 = local_418;
        uStack_370 = uStack_410;
        local_348 = local_3e8;
        uStack_340 = uStack_3e0;
        local_358 = local_3f8;
        uStack_350 = uStack_3f0;
        local_328 = local_3c8;
        uStack_320 = uStack_3c0;
        local_338 = local_3d8;
        uStack_330 = uStack_3d0;
        local_314 = local_3b4;
        local_304 = param_1[0xf];
        local_318 = local_3b8;
        local_308 = param_1[0xe];
        local_300 = *(undefined8 *)(param_1 + 0xe);
        if (*(char *)(param_1 + 0x10) == '\0') {
          local_300 = 0;
        }
        local_2f8 = param_1[0x11];
        local_2f4 = CONCAT31(local_2f4._1_3_,(char)((uint)param_1[0x28] >> 4)) & 0xffffff01;
        piVar1 = (int *)FUN_145045aa0(&local_3a8,local_res8);
        if (*piVar1 < 0) goto LAB_144d13b14;
      }
      if (((uint)param_1[0x29] & 0x40) != 0) {
        FUN_144d20ba0(&local_448);
        local_3a8 = local_448;
        uStack_3a0 = uStack_440;
        local_398 = local_438;
        uStack_390 = uStack_430;
        local_388 = local_428;
        uStack_380 = uStack_420;
        local_378 = local_418;
        uStack_370 = uStack_410;
        local_368 = local_408;
        uStack_360 = uStack_400;
        local_358 = local_3f8;
        uStack_350 = uStack_3f0;
        local_348 = local_3e8;
        uStack_340 = uStack_3e0;
        local_338 = local_3d8;
        uStack_330 = uStack_3d0;
        local_318 = local_3b8;
        local_308 = param_1[0x12];
        local_328 = local_3c8;
        uStack_320 = uStack_3c0;
        local_314 = local_3b4;
        piVar1 = (int *)FUN_144d204d0(&local_3a8,local_res8);
        if (*piVar1 < 0) goto LAB_144d13b14;
      }
      if (((uint)param_1[0x28] & 1) != 0) {
        FUN_144d20ba0(&local_448);
        local_3a8 = local_448;
        uStack_3a0 = uStack_440;
        local_388 = local_428;
        uStack_380 = uStack_420;
        local_398 = local_438;
        uStack_390 = uStack_430;
        local_368 = local_408;
        uStack_360 = uStack_400;
        local_378 = local_418;
        uStack_370 = uStack_410;
        local_348 = local_3e8;
        uStack_340 = uStack_3e0;
        local_358 = local_3f8;
        uStack_350 = uStack_3f0;
        local_328 = local_3c8;
        uStack_320 = uStack_3c0;
        local_338 = local_3d8;
        uStack_330 = uStack_3d0;
        local_314 = local_3b4;
        local_318 = local_3b8;
        if (*(char *)(param_1 + 0xd) == '\0') {
          local_308 = 0.0;
        }
        else {
          local_308 = param_1[8];
        }
        piVar1 = (int *)FUN_144d20e60(&local_3a8,local_res8);
        if (*piVar1 < 0) goto LAB_144d13b14;
      }
      if (((uint)param_1[0x28] & 0x10) == 0) {
LAB_144d1430a:
        *param_2 = 0;
        return param_2;
      }
      if (((uint)param_1[0x28] & 8) == 0) {
        FUN_144bde670(local_458,&local_3a8,0x200);
        FUN_144be6160(local_458,
                      "SIMPLIFICATION_DEVIATION can only be set as an output type if FINAL_INTERNAL_MESH is also set."
                     );
        uVar4 = 0x17d;
        uVar3 = 0x2828a282;
      }
      else {
        if (((uint)param_1[0x29] & 0x20) != 0) goto LAB_144d1430a;
        FUN_144bde670(local_458,&local_3a8,0x200);
        FUN_144be6160(local_458,
                      "SIMPLIFICATION_DEVIATION can only be set as an output type if simplification is enabled."
                     );
        uVar4 = 0x183;
        uVar3 = 0x2828b282;
      }
    }
  }
  FUN_144bfc0d0(uVar3,&local_3a8,"NavMesh\\Generation\\hkaiNavMeshGenerationSettings.cpp",uVar4);
  FUN_144bde6e0(local_458);
LAB_144d13b14:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144d14380 FUN_144d14380 body=17 status=ok
// SIG undefined FUN_144d14380(void)

float FUN_144d14380(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x34) != '\0') {
    fVar1 = fVar1 + *(float *)(param_1 + 0x20);
  }
  return fVar1;
}



// FUNCTION 144d143a0 FUN_144d143a0 body=627 status=ok
// SIG undefined FUN_144d143a0(void)

uint * FUN_144d143a0(uint *param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  ulonglong local_res10;
  ulonglong local_res18;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar7 = param_3[1] - param_2[1];
  *param_1 = uVar7;
  uVar6 = *param_2 - *param_3;
  param_1[1] = uVar6;
  uVar5 = (longlong)*param_2 * (longlong)(int)uVar7 + (longlong)param_2[1] * (longlong)(int)uVar6;
  *(ulonglong *)(param_1 + 2) = uVar5;
  if (uVar7 == 0) {
    if (uVar6 == 0 || uVar5 == 0) {
      param_1[1] = (int)uVar6 >> 0x1f | (uint)(uVar6 != 0);
LAB_144d1441c:
      *(ulonglong *)(param_1 + 2) =
           (longlong)(int)((longlong)uVar5 >> 0x3f) | (ulonglong)(uVar5 != 0);
      return param_1;
    }
    local_res18 = -uVar5;
    if ((longlong)-uVar5 < 0) {
      local_res18 = uVar5;
    }
    local_res8[0] = -uVar6;
    if ((int)-uVar6 < 0) {
      local_res8[0] = uVar6;
    }
    FUN_144d18d90(&local_res10,&local_res18,local_res8,(undefined1)local_res8[0]);
    uVar5 = local_res10 & 0xffffffff;
  }
  else {
    if (uVar6 == 0) {
      if (uVar5 == 0) {
        *param_1 = (int)uVar7 >> 0x1f | 1;
        goto LAB_144d1441c;
      }
      local_res18 = -uVar5;
      if ((longlong)-uVar5 < 0) {
        local_res18 = uVar5;
      }
      local_res8[0] = -uVar7;
      if ((int)-uVar7 < 0) {
        local_res8[0] = uVar7;
      }
      FUN_144d18d90(&local_res10,&local_res18,local_res8,(undefined1)local_res8[0]);
      uVar6 = *param_1;
      uVar5 = local_res10 & 0xffffffff;
      uVar7 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar7 = uVar6;
      }
      uVar2 = (uint)(uVar7 / uVar5);
      uVar7 = -uVar2;
      if (-1 < (int)uVar6) {
        uVar7 = uVar2;
      }
      *param_1 = uVar7;
      goto LAB_144d145e1;
    }
    if (uVar5 == 0) {
      local_res8[0] = -uVar6;
      if ((int)-uVar6 < 0) {
        local_res8[0] = uVar6;
      }
      uVar6 = -uVar7;
      if ((int)-uVar7 < 0) {
        uVar6 = uVar7;
      }
      local_res10 = CONCAT44(local_res10._4_4_,uVar6);
      FUN_144d18a70(&local_res18,&local_res10,local_res8,(undefined1)local_res8[0]);
      uVar6 = *param_1;
      uVar7 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar7 = uVar6;
      }
      uVar2 = (uint)((ulonglong)uVar7 / (local_res18 & 0xffffffff));
      uVar7 = -uVar2;
      if (-1 < (int)uVar6) {
        uVar7 = uVar2;
      }
      *param_1 = uVar7;
      uVar6 = param_1[1];
      uVar7 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar7 = uVar6;
      }
      uVar2 = -(uVar7 / (uint)local_res18);
      if (-1 < (int)uVar6) {
        uVar2 = uVar7 / (uint)local_res18;
      }
      param_1[1] = uVar2;
      return param_1;
    }
    local_res8[0] = -uVar6;
    if ((int)-uVar6 < 0) {
      local_res8[0] = uVar6;
    }
    uVar6 = -uVar7;
    if ((int)-uVar7 < 0) {
      uVar6 = uVar7;
    }
    local_res10 = CONCAT44(local_res10._4_4_,uVar6);
    FUN_144d18a70(&local_res18,&local_res10,local_res8,(undefined1)local_res8[0]);
    local_res10 = -*(longlong *)(param_1 + 2);
    if (-*(longlong *)(param_1 + 2) < 0) {
      local_res10 = *(ulonglong *)(param_1 + 2);
    }
    FUN_144d18d90(local_res8,&local_res10,&local_res18,(undefined1)local_res8[0]);
    uVar6 = *param_1;
    uVar5 = (ulonglong)local_res8[0];
    uVar7 = -uVar6;
    if ((int)-uVar6 < 0) {
      uVar7 = uVar6;
    }
    uVar2 = -(uVar7 / local_res8[0]);
    if (-1 < (int)uVar6) {
      uVar2 = uVar7 / local_res8[0];
    }
    *param_1 = uVar2;
  }
  uVar6 = param_1[1];
  uVar7 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar7 = uVar6;
  }
  uVar2 = (uint)(uVar7 / uVar5);
  uVar7 = -uVar2;
  if (-1 < (int)uVar6) {
    uVar7 = uVar2;
  }
  param_1[1] = uVar7;
LAB_144d145e1:
  uVar1 = *(ulonglong *)(param_1 + 2);
  uVar3 = -uVar1;
  if ((longlong)-uVar1 < 0) {
    uVar3 = uVar1;
  }
  uVar4 = -(uVar3 / uVar5);
  if (-1 < (longlong)uVar1) {
    uVar4 = uVar3 / uVar5;
  }
  *(ulonglong *)(param_1 + 2) = uVar4;
  return param_1;
}



// FUNCTION 144d14620 FUN_144d14620 body=518 status=ok
// SIG undefined FUN_144d14620(void)

ulonglong FUN_144d14620(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int local_68;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_3c;
  int local_34;
  undefined8 local_30;
  int local_28;
  
  iVar2 = 0;
  iVar7 = 2;
  while( true ) {
    iVar6 = iVar2;
    FUN_144d143a0(&local_58,(longlong)param_1 + (longlong)iVar7 * 0xc,
                  (longlong)param_1 + (longlong)iVar6 * 0xc);
    bVar1 = false;
    lVar9 = 0;
    piVar8 = param_2;
    do {
      local_68 = (int)*(undefined8 *)piVar8;
      lVar4 = ((longlong)(int)((ulonglong)*(undefined8 *)piVar8 >> 0x20) * (longlong)local_54 +
              (longlong)local_68 * (longlong)local_58) - local_50;
      uVar5 = (uint)(lVar4 >> 0x3f) | (uint)(lVar4 != 0);
      if ((int)uVar5 < 0) goto LAB_144d146eb;
      puVar3 = (undefined8 *)0x0;
      lVar9 = lVar9 + 1;
      bVar1 = (bool)(bVar1 | 0 < (int)uVar5);
      piVar8 = piVar8 + 3;
    } while (lVar9 < 3);
    if (bVar1) break;
LAB_144d146eb:
    iVar2 = iVar6 + 1;
    iVar7 = iVar6;
    if (2 < iVar6 + 1) {
      local_40 = param_2[8];
      local_48 = *(undefined8 *)(param_2 + 6);
      local_34 = param_2[5];
      local_28 = param_2[2];
      local_3c = *(undefined8 *)(param_2 + 3);
      local_30 = *(undefined8 *)param_2;
      piVar8 = (int *)&local_48;
      if (-1 < (longlong)(param_2[7] - param_2[1]) * (longlong)(param_2[3] - *param_2) -
               (longlong)(param_2[4] - param_2[1]) * (longlong)(param_2[6] - *param_2)) {
        piVar8 = param_2;
      }
      iVar2 = 0;
      iVar7 = 2;
      do {
        iVar6 = iVar2;
        FUN_144d143a0(&local_58,piVar8 + (longlong)iVar7 * 3,piVar8 + (longlong)iVar6 * 3);
        lVar9 = 0;
        puVar3 = param_1;
        while (local_68 = (int)*puVar3,
              lVar4 = ((longlong)(int)((ulonglong)*puVar3 >> 0x20) * (longlong)local_54 +
                      (longlong)local_68 * (longlong)local_58) - local_50,
              0 < (int)((uint)(lVar4 >> 0x3f) | (uint)(lVar4 != 0))) {
          lVar9 = lVar9 + 1;
          puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
          if (2 < lVar9) goto LAB_144d147f9;
        }
        iVar2 = iVar6 + 1;
        iVar7 = iVar6;
        if (2 < iVar6 + 1) {
          return (ulonglong)puVar3 & 0xffffffffffffff00;
        }
      } while( true );
    }
  }
LAB_144d147f9:
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 144d14830 FUN_144d14830 body=1753 status=ok
// SIG undefined FUN_144d14830(void)

bool FUN_144d14830(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uVar21;
  char cVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  bool bVar40;
  char local_228;
  char local_227 [3];
  int local_224;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  int local_200;
  ulonglong local_1f8;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  undefined8 local_158;
  longlong lStack_150;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar4 = *(int *)((longlong)param_1 + 0x24);
  iVar23 = (int)param_2[1];
  if (iVar4 < iVar23) {
    if ((int)param_3[1] <= iVar4) goto LAB_144d14895;
    bVar40 = SBORROW4(iVar4,(int)param_4[1]);
    iVar4 = iVar4 - (int)param_4[1];
  }
  else {
    iVar4 = (int)param_1[4];
    if ((iVar4 <= iVar23) || (iVar4 <= (int)param_3[1])) goto LAB_144d14895;
    bVar40 = SBORROW4((int)param_4[1],iVar4);
    iVar4 = (int)param_4[1] - iVar4;
  }
  if (bVar40 != iVar4 < 0) {
    return false;
  }
LAB_144d14895:
  lVar36 = (longlong)(*(int *)((longlong)param_3 + 4) - *(int *)((longlong)param_2 + 4));
  lVar31 = (longlong)((int)param_4[1] - iVar23);
  lVar30 = (longlong)((int)param_3[1] - iVar23);
  lVar34 = (longlong)(*(int *)((longlong)param_4 + 4) - *(int *)((longlong)param_2 + 4));
  local_1c8 = lVar31 * lVar36 - lVar34 * lVar30;
  lVar39 = (longlong)((int)*param_3 - (int)*param_2);
  lVar27 = (longlong)((int)*param_4 - (int)*param_2);
  local_158._0_4_ = (int)*param_2;
  local_1b8 = lVar39 * lVar34 - lVar27 * lVar36;
  lVar30 = lVar27 * lVar30 - lVar39 * lVar31;
  uVar29 = (int)param_2[1] * local_1b8;
  local_158._4_4_ = (int)((ulonglong)*param_2 >> 0x20);
  uVar35 = lVar30 * local_158._4_4_;
  uVar24 = local_1c8 * (int)local_158;
  uVar25 = uVar24 + uVar35;
  lVar27 = uVar25 + uVar29;
  local_180 = 0;
  lStack_1a8 = -(ulonglong)(lVar27 != 0) -
               (SUB168(SEXT816((longlong)(int)local_158) * SEXT816(local_1c8),8) +
                SUB168(SEXT816((longlong)local_158._4_4_) * SEXT816(lVar30),8) +
                (ulonglong)CARRY8(uVar24,uVar35) +
                SUB168(SEXT816((longlong)(int)param_2[1]) * SEXT816(local_1b8),8) +
               (ulonglong)CARRY8(uVar25,uVar29));
  if (lVar30 != 0 || (local_1b8 != 0 || local_1c8 != 0)) {
    uStack_1b0 = -lVar27;
    if (local_1b8 < 0) {
      local_1c8 = -local_1c8;
      lVar34 = param_4[1];
      lVar30 = -lVar30;
      lVar31 = *param_3;
      local_1b8 = -local_1b8;
      lVar36 = param_3[1];
      *param_3 = *param_4;
      *(int *)(param_3 + 1) = (int)lVar34;
      *param_4 = lVar31;
      lStack_210 = -(ulonglong)(-lVar27 != 0) - lStack_1a8;
      *(int *)(param_4 + 1) = (int)lVar36;
      local_218 = lVar27;
      uStack_1b0 = lVar27;
      lStack_1a8 = lStack_210;
    }
    local_158 = local_1c8;
    local_138 = lStack_1a8;
    local_148 = local_1b8;
    uStack_140 = (undefined4)uStack_1b0;
    uStack_13c = uStack_1b0._4_4_;
    lStack_1c0 = lVar30;
    lStack_150 = lVar30;
    FUN_144d168e0(param_1,&local_158,&local_228,local_227);
    if (local_228 != '\0') {
      if (local_227[0] != '\0') {
        local_218 = *param_4;
        local_208 = *param_3;
        lStack_210 = CONCAT44(lStack_210._4_4_,(int)param_4[1]);
        local_200 = (int)param_3[1];
        local_1e8 = *param_2;
        local_1e0 = CONCAT44(local_1e0._4_4_,(int)param_2[1]);
        if (lVar30 != 0) {
          uVar21 = FUN_144d17000(param_1,&local_1e8,&local_208,&local_218);
          return (bool)uVar21;
        }
        uVar21 = FUN_144d16bd0();
        return (bool)uVar21;
      }
      local_208 = (param_1[3] - param_1[2]) / 0x68;
      if (0 < (int)local_208) {
        local_224 = *(int *)((longlong)param_2 + 4);
        uVar25 = 0;
        iVar4 = (int)*param_2;
        uVar24 = (ulonglong)iVar4;
        local_218 = (longlong)(int)local_208;
        local_178 = 0;
        do {
          lVar27 = *param_1;
          puVar26 = (ulonglong *)(lVar27 + 0x10 + local_178 * 0x48);
          local_118 = *puVar26;
          uStack_110 = puVar26[1];
          uVar29 = *(ulonglong *)(lVar27 + 8 + local_178 * 0x48);
          puVar26 = (ulonglong *)(lVar27 + local_178 * 0x48);
          local_128 = *puVar26;
          uStack_120 = puVar26[1];
          local_e8 = *(undefined8 *)(lVar27 + 0x40 + local_178 * 0x48);
          puVar26 = (ulonglong *)(lVar27 + 0x20 + local_178 * 0x48);
          local_b8 = *puVar26;
          uStack_b0 = puVar26[1];
          plVar1 = (longlong *)(lVar27 + 0x30 + local_178 * 0x48);
          local_f8 = *plVar1;
          lStack_f0 = plVar1[1];
          if ((uVar29 == 0 && local_128 == 0) && (uStack_110 == 0 && local_118 == 0)) {
            lVar27 = param_1[2];
            uVar28 = (int)uVar25 + 1;
            lVar30 = local_178 * 0x68;
            local_a8 = *(undefined8 *)(lVar30 + lVar27);
            uStack_a0 = ((undefined8 *)(lVar30 + lVar27))[1];
            puVar2 = (undefined8 *)(lVar30 + 0x10 + lVar27);
            local_98 = *puVar2;
            uStack_90 = puVar2[1];
            puVar2 = (undefined8 *)(lVar30 + 0x20 + lVar27);
            local_88 = *puVar2;
            uStack_80 = puVar2[1];
            puVar2 = (undefined8 *)(lVar30 + 0x30 + lVar27);
            local_78 = *puVar2;
            uStack_70 = puVar2[1];
            puVar2 = (undefined8 *)(lVar30 + 0x40 + lVar27);
            local_68 = *puVar2;
            uStack_60 = puVar2[1];
            puVar2 = (undefined8 *)(lVar30 + 0x50 + lVar27);
            local_58 = *puVar2;
            uStack_50 = puVar2[1];
            local_48 = *(undefined8 *)(lVar30 + 0x60 + lVar27);
            lVar30 = (longlong)((int)uVar28 % (int)local_208) * 0x68;
            local_128 = *(ulonglong *)(lVar30 + lVar27);
            uStack_120 = ((ulonglong *)(lVar30 + lVar27))[1];
            puVar26 = (ulonglong *)(lVar30 + 0x10 + lVar27);
            local_118 = *puVar26;
            uStack_110 = puVar26[1];
            puVar26 = (ulonglong *)(lVar30 + 0x20 + lVar27);
            local_108 = *puVar26;
            uStack_100 = puVar26[1];
            plVar1 = (longlong *)(lVar30 + 0x30 + lVar27);
            local_f8 = *plVar1;
            lStack_f0 = plVar1[1];
            puVar2 = (undefined8 *)(lVar30 + 0x40 + lVar27);
            local_e8 = *puVar2;
            uStack_e0 = puVar2[1];
            puVar3 = (undefined4 *)(lVar30 + 0x50 + lVar27);
            local_d8 = *puVar3;
            uStack_d4 = puVar3[1];
            uStack_d0 = puVar3[2];
            uStack_cc = puVar3[3];
            local_c8 = *(undefined8 *)(lVar30 + 0x60 + lVar27);
            local_198 = iVar4;
            local_194 = local_224;
            iVar23 = FUN_144d17420(&local_a8,&local_128,&local_198);
            if (iVar23 < 0) {
              local_190 = (int)*param_3;
              local_18c = *(int *)((longlong)param_3 + 4);
              iVar23 = FUN_144d17420(&local_a8,&local_128,&local_190);
              if (iVar23 < 0) {
                local_188 = (int)*param_4;
                local_184 = *(int *)((longlong)param_4 + 4);
                iVar23 = FUN_144d17420(&local_a8,&local_128,&local_188);
                if (iVar23 < 0) {
                  return false;
                }
              }
            }
          }
          else {
            uVar35 = (ulonglong)local_224;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar35;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_118;
            uVar25 = SUB168(auVar5 * auVar13,8);
            local_1f8 = uVar35 * local_118;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar35;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uStack_110;
            uVar37 = uVar35 * uStack_110 + uVar25;
            lVar27 = (ulonglong)CARRY8(uVar35 * uStack_110,uVar25) + SUB168(auVar6 * auVar14,8);
            if ((longlong)uStack_110 < 0) {
              lVar27 = lVar27 - uVar35;
            }
            if (local_224 < 0) {
              bVar40 = uVar37 < local_118;
              uVar37 = uVar37 - local_118;
              lVar27 = (lVar27 - uStack_110) - (ulonglong)bVar40;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar24;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_128;
            uVar25 = SUB168(auVar7 * auVar15,8);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar24;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar29;
            uVar35 = uVar24 * uVar29 + uVar25;
            lVar30 = (ulonglong)CARRY8(uVar24 * uVar29,uVar25) + SUB168(auVar8 * auVar16,8);
            if ((longlong)uVar29 < 0) {
              lVar30 = lVar30 - uVar24;
            }
            if (iVar4 < 0) {
              bVar40 = uVar35 < local_128;
              uVar35 = uVar35 - local_128;
              lVar30 = (lVar30 - uVar29) - (ulonglong)bVar40;
            }
            uVar25 = (ulonglong)CARRY8(uVar24 * local_128,local_1f8);
            uVar32 = uVar35 + uVar37 + uVar25;
            uVar38 = (ulonglong)CARRY8(uVar24 * local_128 + local_1f8,local_b8);
            uVar33 = uVar32 + uStack_b0;
            local_1e0 = uVar33 + uVar38;
            local_1e8 = local_f8;
            local_170 = local_b8;
            local_168 = uStack_b0;
            local_108 = local_b8;
            uStack_100 = uStack_b0;
            if ((longlong)
                (lVar30 + lVar27 +
                 (ulonglong)(CARRY8(uVar35,uVar37) || CARRY8(uVar35 + uVar37,uVar25)) + local_f8 +
                (ulonglong)(CARRY8(uVar32,uStack_b0) || CARRY8(uVar33,uVar38))) < 0) {
              uVar37 = (ulonglong)*(int *)((longlong)param_3 + 4);
              uVar25 = (ulonglong)(int)*param_3;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar37;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = local_118;
              uVar35 = SUB168(auVar9 * auVar17,8);
              local_1f8 = uVar37 * local_118;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar37;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uStack_110;
              uVar38 = uVar37 * uStack_110 + uVar35;
              lVar27 = (ulonglong)CARRY8(uVar37 * uStack_110,uVar35) + SUB168(auVar10 * auVar18,8);
              if ((longlong)uStack_110 < 0) {
                lVar27 = lVar27 - uVar37;
              }
              if (*(int *)((longlong)param_3 + 4) < 0) {
                bVar40 = uVar38 < local_118;
                uVar38 = uVar38 - local_118;
                lVar27 = (lVar27 - uStack_110) - (ulonglong)bVar40;
              }
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar25;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = local_128;
              uVar35 = SUB168(auVar11 * auVar19,8);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uVar25;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar29;
              uVar37 = uVar29 * uVar25 + uVar35;
              lVar30 = (ulonglong)CARRY8(uVar29 * uVar25,uVar35) + SUB168(auVar12 * auVar20,8);
              if ((longlong)uVar29 < 0) {
                lVar30 = lVar30 - uVar25;
              }
              if ((int)*param_3 < 0) {
                bVar40 = uVar37 < local_128;
                uVar37 = uVar37 - local_128;
                lVar30 = (lVar30 - uVar29) - (ulonglong)bVar40;
              }
              uVar29 = (ulonglong)CARRY8(local_128 * uVar25,local_1f8);
              uVar33 = uVar37 + uVar38 + uVar29;
              uVar25 = (ulonglong)CARRY8(local_128 * uVar25 + local_1f8,local_b8);
              uVar35 = uVar33 + uStack_b0;
              if ((longlong)
                  (lVar30 + lVar27 +
                   (ulonglong)(CARRY8(uVar37,uVar38) || CARRY8(uVar37 + uVar38,uVar29)) + local_f8 +
                  (ulonglong)(CARRY8(uVar33,uStack_b0) || CARRY8(uVar35,uVar25))) < 0) {
                local_1a0 = (int)*param_4;
                local_19c = *(int *)((longlong)param_4 + 4);
                local_148 = local_f8;
                puVar26 = (ulonglong *)
                          FUN_147e5f976(&local_1e8,&local_128,&local_1a0,uVar35 + uVar25);
                if ((longlong)
                    (puVar26[2] + local_148 +
                    (ulonglong)
                    (CARRY8(puVar26[1],uStack_b0) ||
                    CARRY8(puVar26[1] + uStack_b0,(ulonglong)CARRY8(*puVar26,local_b8)))) < 0) {
                  return false;
                }
              }
            }
            uVar28 = (int)local_180 + 1;
          }
          uVar25 = (ulonglong)uVar28;
          local_178 = local_178 + 1;
          local_180 = uVar25;
        } while (local_178 < local_218);
      }
      cVar22 = FUN_144d15170(param_1,param_2,param_3,param_4);
      if ((cVar22 == '\0') &&
         (cVar22 = FUN_144d15170(param_1,param_3,param_4,param_2), cVar22 == '\0')) {
        cVar22 = FUN_144d15170(param_1,param_4,param_2,param_3);
        return cVar22 == '\0';
      }
    }
  }
  return false;
}



// FUNCTION 144d14f10 FUN_144d14f10 body=597 status=ok
// SIG undefined FUN_144d14f10(void)

ulonglong FUN_144d14f10(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  lVar14 = param_2[1];
  piVar1 = (int *)*param_2;
  lVar2 = param_1[2];
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar18 = piVar1[2] * lVar2;
  uVar15 = piVar1[1] * lVar3;
  uVar11 = *piVar1 * lVar4;
  uVar12 = uVar11 + uVar15;
  uVar13 = uVar12 + uVar18;
  lVar10 = SUB168(SEXT816(lVar4) * SEXT816((longlong)*piVar1),8) +
           SUB168(SEXT816(lVar3) * SEXT816((longlong)piVar1[1]),8) +
           (ulonglong)CARRY8(uVar11,uVar15) +
           SUB168(SEXT816(lVar2) * SEXT816((longlong)piVar1[2]),8) +
           (ulonglong)CARRY8(uVar12,uVar18);
  uVar12 = *(int *)(lVar14 + -4) * lVar2;
  uVar18 = *(int *)(lVar14 + -0xc) * lVar4;
  uVar15 = *(int *)(lVar14 + -8) * lVar3;
  uVar17 = uVar18 + uVar15;
  uVar11 = uVar17 + uVar12;
  lVar8 = SUB168(SEXT816(lVar4) * SEXT816((longlong)*(int *)(lVar14 + -0xc)),8) +
          SUB168(SEXT816(lVar3) * SEXT816((longlong)*(int *)(lVar14 + -8)),8) +
          (ulonglong)CARRY8(uVar18,uVar15) +
          SUB168(SEXT816(lVar2) * SEXT816((longlong)*(int *)(lVar14 + -4)),8) +
          (ulonglong)CARRY8(uVar17,uVar12);
  if ((longlong)((lVar10 - lVar8) - (ulonglong)(uVar13 < uVar11)) < 0) {
    uVar11 = 0;
    iVar7 = (int)((lVar14 - (longlong)piVar1) / 0xc) + -2;
    if (0 < iVar7) {
      lVar14 = 0xc;
      uVar12 = uVar11;
      do {
        lVar8 = (longlong)*(int *)(lVar14 + 8 + (longlong)piVar1);
        uVar18 = lVar8 * lVar2;
        lVar6 = (longlong)*(int *)(lVar14 + 4 + (longlong)piVar1);
        uVar15 = lVar6 * lVar3;
        uVar17 = *(int *)(lVar14 + (longlong)piVar1) * lVar4;
        uVar19 = uVar17 + uVar15;
        uVar20 = uVar19 + uVar18;
        lVar8 = SUB168(SEXT816(lVar4) * SEXT816((longlong)*(int *)(lVar14 + (longlong)piVar1)),8) +
                SUB168(SEXT816(lVar3) * SEXT816(lVar6),8) + (ulonglong)CARRY8(uVar17,uVar15) +
                SUB168(SEXT816(lVar2) * SEXT816(lVar8),8) + (ulonglong)CARRY8(uVar19,uVar18);
        if ((longlong)((lVar10 - lVar8) - (ulonglong)(uVar13 < uVar20)) < 0) {
          return uVar11;
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0xc;
        uVar13 = uVar20;
        lVar10 = lVar8;
      } while ((longlong)uVar12 < (longlong)iVar7);
    }
  }
  else {
    lVar14 = (lVar14 - (longlong)piVar1) / 6 + (lVar14 - (longlong)piVar1 >> 0x3f);
    uVar5 = ((int)(lVar14 >> 1) - (int)(lVar14 >> 0x3f)) - 1;
    if (1 < (int)uVar5) {
      lVar10 = (longlong)(int)uVar5;
      lVar14 = lVar10 * 0xc;
      do {
        lVar6 = (longlong)*(int *)(lVar14 + -4 + (longlong)piVar1);
        lVar16 = (longlong)*(int *)(lVar14 + -8 + (longlong)piVar1);
        lVar9 = (longlong)*(int *)(lVar14 + -0xc + (longlong)piVar1);
        uVar17 = lVar6 * lVar2;
        uVar18 = lVar16 * lVar3;
        uVar13 = lVar9 * lVar4;
        uVar12 = uVar13 + uVar18;
        uVar15 = uVar12 + uVar17;
        lVar6 = SUB168(SEXT816(lVar4) * SEXT816(lVar9),8) +
                SUB168(SEXT816(lVar3) * SEXT816(lVar16),8) + (ulonglong)CARRY8(uVar13,uVar18) +
                SUB168(SEXT816(lVar2) * SEXT816(lVar6),8) + (ulonglong)CARRY8(uVar12,uVar17);
        if ((longlong)((lVar8 - lVar6) - (ulonglong)(uVar11 < uVar15)) < 0) break;
        uVar5 = uVar5 - 1;
        lVar10 = lVar10 + -1;
        lVar14 = lVar14 + -0xc;
        uVar11 = uVar15;
        lVar8 = lVar6;
      } while (1 < lVar10);
    }
    uVar11 = (ulonglong)uVar5;
  }
  return uVar11;
}



// FUNCTION 144d15170 FUN_144d15170 body=4845 status=ok
// SIG undefined FUN_144d15170(void)

undefined8 FUN_144d15170(longlong *param_1,longlong *param_2,int *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar33;
  ulonglong *puVar34;
  ulonglong *puVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  int iVar47;
  int iVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  int iVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  longlong lVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  bool bVar64;
  bool bVar65;
  undefined8 local_500;
  int local_4f8;
  ulonglong local_4f0;
  ulonglong local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  int local_4d0;
  int local_4cc;
  int local_4c8 [2];
  ulonglong local_4c0;
  ulonglong uStack_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  ulonglong uStack_4a0;
  ulonglong local_498;
  ulonglong uStack_490;
  ulonglong uStack_488;
  ulonglong uStack_480;
  ulonglong local_478;
  ulonglong uStack_470;
  ulonglong local_468;
  ulonglong uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  int local_438;
  int local_434;
  int *local_430;
  ulonglong local_428;
  ulonglong uStack_420;
  ulonglong local_418;
  longlong local_410;
  ulonglong local_3e8;
  ulonglong uStack_3e0;
  ulonglong local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  ulonglong local_3b8;
  longlong local_3b0;
  ulonglong local_398;
  ulonglong uStack_390;
  ulonglong local_388;
  ulonglong uStack_380;
  ulonglong uStack_378;
  ulonglong uStack_370;
  ulonglong local_368;
  ulonglong uStack_360;
  ulonglong local_358;
  ulonglong local_350;
  ulonglong local_348;
  longlong local_340;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  ulonglong local_2d8;
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  ulonglong local_2b8;
  ulonglong uStack_2b0;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  ulonglong local_288;
  ulonglong uStack_280;
  longlong local_278;
  longlong lStack_270;
  undefined8 local_268;
  uint *local_258;
  longlong local_250;
  ulonglong local_248;
  ulonglong uStack_240;
  ulonglong local_238;
  ulonglong uStack_230;
  ulonglong local_228;
  ulonglong uStack_220;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  
  lVar52 = *param_2;
  iVar48 = param_3[2] - (int)param_2[1];
  lVar54 = param_1[2];
  iVar57 = *param_3 - (int)lVar52;
  local_250 = (param_1[3] - param_1[2]) / 0x68;
  local_430 = param_3 + 1;
  iVar3 = *(int *)((longlong)param_2 + 4);
  iVar47 = param_3[1] - iVar3;
  local_258 = (uint *)(param_3 + 2);
  local_500 = CONCAT44(iVar57,-iVar47);
  local_4d8 = param_1[3];
  local_4d0 = iVar57;
  local_4cc = iVar47;
  local_4c8[0] = iVar48;
  if (lVar54 != local_4d8) {
    do {
      FUN_144d19010(lVar54 + 0x40,
                    -((longlong)-iVar47 * (longlong)(int)lVar52 + (longlong)iVar3 * (longlong)iVar57
                     ),&local_248);
      puVar34 = (ulonglong *)FUN_144d18ee0(&local_3e8,(longlong)&local_500 + 4,lVar54 + 0x20);
      puVar35 = (ulonglong *)FUN_144d18ee0(&local_428,&local_500,lVar54);
      uVar51 = *puVar35 + *puVar34;
      uVar42 = (ulonglong)CARRY8(*puVar35,*puVar34);
      uVar43 = puVar35[1] + puVar34[1];
      uVar49 = uVar43 + uVar42;
      uVar42 = (ulonglong)(CARRY8(puVar35[1],puVar34[1]) || CARRY8(uVar43,uVar42));
      uVar43 = puVar35[2] + puVar34[2];
      uVar40 = uVar43 + uVar42;
      uVar42 = (ulonglong)(CARRY8(puVar35[2],puVar34[2]) || CARRY8(uVar43,uVar42));
      uVar41 = puVar35[3] + puVar34[3];
      uVar36 = uVar41 + uVar42;
      local_3e8 = uVar51 + local_248;
      uVar43 = (ulonglong)CARRY8(uVar51,local_248);
      uVar51 = uVar49 + uStack_240;
      uStack_3e0 = uVar51 + uVar43;
      uVar43 = (ulonglong)(CARRY8(uVar49,uStack_240) || CARRY8(uVar51,uVar43));
      uVar51 = uVar40 + local_238;
      local_3d8 = uVar51 + uVar43;
      uVar43 = (ulonglong)(CARRY8(uVar40,local_238) || CARRY8(uVar51,uVar43));
      uVar51 = uVar36 + uStack_230;
      local_3d0 = uVar51 + uVar43;
      if (-1 < (longlong)
               (puVar35[4] + puVar34[4] +
                (ulonglong)(CARRY8(puVar35[3],puVar34[3]) || CARRY8(uVar41,uVar42)) + local_228 +
               (ulonglong)(CARRY8(uVar36,uStack_230) || CARRY8(uVar51,uVar43)))) {
        local_4e0 = (longlong)(int)local_250;
        local_4f8 = 0;
        if ((int)local_250 < 1) {
          return 0;
        }
        local_500 = 0;
        goto LAB_144d15340;
      }
      lVar54 = lVar54 + 0x68;
    } while (lVar54 != local_4d8);
  }
  return 1;
LAB_144d15340:
  uVar42 = *(ulonglong *)(*param_1 + 8 + local_500 * 0x48);
  puVar34 = (ulonglong *)(*param_1 + local_500 * 0x48);
  uVar43 = *puVar34;
  if (puVar34[3] == 0 && (puVar34[2] == 0 && (uVar42 == 0 && uVar43 == 0))) {
    lVar54 = param_1[2];
    lVar52 = local_500 * 0x68;
    local_2c8 = *(ulonglong *)(lVar52 + lVar54);
    uStack_2c0 = ((ulonglong *)(lVar52 + lVar54))[1];
    puVar34 = (ulonglong *)(lVar52 + 0x10 + lVar54);
    local_2b8 = *puVar34;
    uStack_2b0 = puVar34[1];
    puVar34 = (ulonglong *)(lVar52 + 0x20 + lVar54);
    local_2a8 = *puVar34;
    uStack_2a0 = puVar34[1];
    puVar34 = (ulonglong *)(lVar52 + 0x30 + lVar54);
    local_298 = *puVar34;
    uStack_290 = puVar34[1];
    puVar34 = (ulonglong *)(lVar52 + 0x40 + lVar54);
    local_288 = *puVar34;
    uStack_280 = puVar34[1];
    plVar1 = (longlong *)(lVar52 + 0x50 + lVar54);
    local_278 = *plVar1;
    lStack_270 = plVar1[1];
    local_268 = *(undefined8 *)(lVar52 + 0x60 + lVar54);
    lVar52 = (longlong)((local_4f8 + 1) % (int)local_250) * 0x68;
    local_4a8 = *(ulonglong *)(lVar52 + lVar54);
    uStack_4a0 = ((ulonglong *)(lVar52 + lVar54))[1];
    puVar34 = (ulonglong *)(lVar52 + 0x10 + lVar54);
    local_498 = *puVar34;
    uStack_490 = puVar34[1];
    puVar34 = (ulonglong *)(lVar52 + 0x20 + lVar54);
    uStack_488 = *puVar34;
    uStack_480 = puVar34[1];
    puVar34 = (ulonglong *)(lVar52 + 0x30 + lVar54);
    local_478 = *puVar34;
    uStack_470 = puVar34[1];
    puVar34 = (ulonglong *)(lVar52 + 0x40 + lVar54);
    local_468 = *puVar34;
    uStack_460 = puVar34[1];
    puVar2 = (undefined4 *)(lVar52 + 0x50 + lVar54);
    local_458 = *puVar2;
    uStack_454 = puVar2[1];
    uStack_450 = puVar2[2];
    uStack_44c = puVar2[3];
    local_448 = *(undefined8 *)(lVar52 + 0x60 + lVar54);
    puVar34 = (ulonglong *)FUN_144ceaef0(&local_398,&local_4a8,&local_2c8);
    local_1d8 = *puVar34;
    uStack_1d0 = puVar34[1];
    local_1c8 = puVar34[2];
    uStack_1c0 = puVar34[3];
    local_1b8 = puVar34[4];
    uStack_1b0 = puVar34[5];
    local_1a8 = puVar34[6];
    uStack_1a0 = puVar34[7];
    local_198 = puVar34[8];
    uStack_190 = puVar34[9];
    local_188 = puVar34[10];
    uStack_180 = puVar34[0xb];
    local_178 = puVar34[0xc];
    uStack_170 = puVar34[0xd];
    puVar34 = (ulonglong *)FUN_144d16460(&local_398,&uStack_1a0,local_4c8);
    local_118 = *puVar34;
    uStack_110 = puVar34[1];
    local_108 = puVar34[2];
    uStack_100 = puVar34[3];
    local_f8 = puVar34[4];
    uStack_f0 = puVar34[5];
    local_e8 = puVar34[6];
    uStack_e0 = puVar34[7];
    local_398 = -local_1d8;
    uStack_390 = -uStack_1d0 - (ulonglong)(local_1d8 != 0);
    uVar42 = (ulonglong)(uStack_1d0 != 0 || -uStack_1d0 < (ulonglong)(local_1d8 != 0));
    local_388 = -local_1c8 - uVar42;
    uVar42 = (ulonglong)(local_1c8 != 0 || -local_1c8 < uVar42);
    uStack_380 = -uStack_1c0 - uVar42;
    uVar42 = (ulonglong)(uStack_1c0 != 0 || -uStack_1c0 < uVar42);
    uStack_378 = -local_1b8 - uVar42;
    uVar42 = (ulonglong)(local_1b8 != 0 || -local_1b8 < uVar42);
    uStack_370 = -uStack_1b0 - uVar42;
    local_368 = -(ulonglong)(uStack_1b0 != 0 || -uStack_1b0 < uVar42) - local_1a8;
    puVar34 = (ulonglong *)FUN_144d16460(&local_3e8,&local_398,local_4c8);
    local_d8 = *puVar34;
    uStack_d0 = puVar34[1];
    local_c8 = puVar34[2];
    uStack_c0 = puVar34[3];
    local_b8 = puVar34[4];
    uStack_b0 = puVar34[5];
    local_a8 = puVar34[6];
    uStack_a0 = puVar34[7];
    puVar34 = (ulonglong *)FUN_144d16460(&local_3e8,&uStack_1a0,&local_4d0);
    puVar35 = (ulonglong *)FUN_144d16460(&local_428,&local_1d8,&local_4cc);
    local_398 = *puVar35 - *puVar34;
    uVar42 = (ulonglong)(*puVar35 < *puVar34);
    uVar43 = puVar35[1] - puVar34[1];
    uStack_390 = uVar43 - uVar42;
    uVar42 = (ulonglong)(puVar35[1] < puVar34[1] || uVar43 < uVar42);
    uVar43 = puVar35[2] - puVar34[2];
    local_388 = uVar43 - uVar42;
    uVar42 = (ulonglong)(puVar35[2] < puVar34[2] || uVar43 < uVar42);
    uVar43 = puVar35[3] - puVar34[3];
    uStack_380 = uVar43 - uVar42;
    uVar42 = (ulonglong)(puVar35[3] < puVar34[3] || uVar43 < uVar42);
    uVar43 = puVar35[4] - puVar34[4];
    uStack_378 = uVar43 - uVar42;
    uVar42 = (ulonglong)(puVar35[4] < puVar34[4] || uVar43 < uVar42);
    uVar43 = puVar35[5] - puVar34[5];
    uStack_370 = uVar43 - uVar42;
    uVar42 = (ulonglong)(puVar35[5] < puVar34[5] || uVar43 < uVar42);
    uVar43 = puVar35[6] - puVar34[6];
    local_368 = uVar43 - uVar42;
    uStack_360 = (puVar35[7] - puVar34[7]) - (ulonglong)(puVar35[6] < puVar34[6] || uVar43 < uVar42)
    ;
    local_98 = local_398;
    uStack_90 = uStack_390;
    local_88 = local_388;
    uStack_80 = uStack_380;
    local_78 = uStack_378;
    uStack_70 = uStack_370;
    local_68 = local_368;
    uStack_60 = uStack_360;
    puVar34 = (ulonglong *)FUN_144d17970(&local_398,&local_d8,local_430);
    puVar35 = (ulonglong *)FUN_144d17970(&local_3e8,&local_118,param_3);
    uVar53 = *puVar35 + *puVar34;
    uVar42 = (ulonglong)CARRY8(*puVar35,*puVar34);
    uVar43 = puVar35[1] + puVar34[1];
    local_4f0 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[1],puVar34[1]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[2] + puVar34[2];
    local_4e8 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[2],puVar34[2]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[3] + puVar34[3];
    uVar55 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[3],puVar34[3]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[4] + puVar34[4];
    uVar58 = uVar43 + uVar42;
    uVar43 = (ulonglong)(CARRY8(puVar35[4],puVar34[4]) || CARRY8(uVar43,uVar42));
    uVar41 = puVar35[5] + puVar34[5];
    uVar60 = uVar41 + uVar43;
    uVar42 = puVar35[6];
    uVar36 = (ulonglong)(CARRY8(puVar35[5],puVar34[5]) || CARRY8(uVar41,uVar43));
    uVar43 = puVar34[6];
    uVar49 = uVar42 + puVar34[6];
    uVar59 = uVar49 + uVar36;
    uVar41 = puVar35[7];
    uVar51 = puVar34[7];
    puVar34 = (ulonglong *)FUN_144d17970(&local_428,&local_98,local_258);
    uVar44 = uVar53 + *puVar34;
    bVar64 = CARRY8(local_4f0,puVar34[1]);
    uVar40 = local_4f0 + puVar34[1];
    local_4f0 = uVar40 + CARRY8(uVar53,*puVar34);
    uVar40 = (ulonglong)(bVar64 || CARRY8(uVar40,(ulonglong)CARRY8(uVar53,*puVar34)));
    bVar64 = CARRY8(local_4e8,puVar34[2]);
    uVar53 = local_4e8 + puVar34[2];
    local_4e8 = uVar53 + uVar40;
    uVar40 = (ulonglong)(bVar64 || CARRY8(uVar53,uVar40));
    uVar53 = uVar55 + puVar34[3];
    uVar37 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(uVar55,puVar34[3]) || CARRY8(uVar53,uVar40));
    uVar53 = uVar58 + puVar34[4];
    uVar38 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(uVar58,puVar34[4]) || CARRY8(uVar53,uVar40));
    uVar53 = uVar60 + puVar34[5];
    local_2e8 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(uVar60,puVar34[5]) || CARRY8(uVar53,uVar40));
    uVar53 = uVar59 + puVar34[6];
    local_4c0 = uVar53 + uVar40;
    local_428 = uVar41 + uVar51 + (ulonglong)(CARRY8(uVar42,uVar43) || CARRY8(uVar49,uVar36)) +
                puVar34[7] + (ulonglong)(CARRY8(uVar59,puVar34[6]) || CARRY8(uVar53,uVar40));
    puVar34 = (ulonglong *)FUN_144d17970(&local_398,&local_d8,param_4 + 4);
    puVar35 = (ulonglong *)FUN_144d17970(&local_3e8,&local_118,param_4);
    local_208 = *puVar35 + *puVar34;
    uVar42 = puVar35[6];
    uVar43 = puVar35[7];
    uVar41 = (ulonglong)CARRY8(*puVar35,*puVar34);
    uVar51 = puVar35[1] + puVar34[1];
    local_200 = uVar51 + uVar41;
    uVar41 = (ulonglong)(CARRY8(puVar35[1],puVar34[1]) || CARRY8(uVar51,uVar41));
    uVar51 = puVar35[2] + puVar34[2];
    local_1f8 = uVar51 + uVar41;
    uVar41 = (ulonglong)(CARRY8(puVar35[2],puVar34[2]) || CARRY8(uVar51,uVar41));
    uVar51 = puVar35[3] + puVar34[3];
    local_1f0 = uVar51 + uVar41;
    uVar41 = (ulonglong)(CARRY8(puVar35[3],puVar34[3]) || CARRY8(uVar51,uVar41));
    uVar51 = puVar35[4] + puVar34[4];
    local_1e8 = uVar51 + uVar41;
    uVar41 = (ulonglong)(CARRY8(puVar35[4],puVar34[4]) || CARRY8(uVar51,uVar41));
    uVar51 = puVar35[5] + puVar34[5];
    uVar55 = uVar51 + uVar41;
    uVar36 = (ulonglong)(CARRY8(puVar35[5],puVar34[5]) || CARRY8(uVar51,uVar41));
    uVar41 = puVar34[6];
    uVar49 = uVar42 + puVar34[6];
    uVar62 = uVar49 + uVar36;
    uVar51 = puVar34[7];
    puVar34 = (ulonglong *)FUN_144d17970(&local_4a8,&local_98,param_4 + 8);
    uVar40 = local_200 + puVar34[1];
    uVar58 = uVar40 + CARRY8(local_208,*puVar34);
    uVar40 = (ulonglong)
             (CARRY8(local_200,puVar34[1]) || CARRY8(uVar40,(ulonglong)CARRY8(local_208,*puVar34)));
    uVar53 = local_1f8 + puVar34[2];
    uVar50 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(local_1f8,puVar34[2]) || CARRY8(uVar53,uVar40));
    uVar53 = local_1f0 + puVar34[3];
    uVar45 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(local_1f0,puVar34[3]) || CARRY8(uVar53,uVar40));
    uVar53 = local_1e8 + puVar34[4];
    uVar39 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(local_1e8,puVar34[4]) || CARRY8(uVar53,uVar40));
    uVar53 = uVar55 + puVar34[5];
    uVar56 = uVar53 + uVar40;
    uVar40 = (ulonglong)(CARRY8(uVar55,puVar34[5]) || CARRY8(uVar53,uVar40));
    uVar53 = uVar62 + puVar34[6];
    uVar63 = uVar53 + uVar40;
    uVar55 = (ulonglong)(local_208 + *puVar34 < uVar44);
    uVar59 = uVar58 - local_4f0;
    uVar58 = (ulonglong)(uVar58 < local_4f0 || uVar59 < uVar55);
    uVar60 = uVar50 - local_4e8;
    uVar44 = (ulonglong)
             (uVar56 < local_2e8 ||
             uVar56 - local_2e8 <
             (ulonglong)
             (uVar39 < uVar38 ||
             uVar39 - uVar38 <
             (ulonglong)
             (uVar45 < uVar37 ||
             uVar45 - uVar37 < (ulonglong)(uVar50 < local_4e8 || uVar60 < uVar58))));
    uVar37 = uVar63 - local_4c0;
    if ((longlong)
        (((uVar43 + uVar51 + (ulonglong)(CARRY8(uVar42,uVar41) || CARRY8(uVar49,uVar36)) +
           puVar34[7] + (ulonglong)(CARRY8(uVar62,puVar34[6]) || CARRY8(uVar53,uVar40))) - local_428
         ) - (ulonglong)(uVar63 < local_4c0 || uVar37 < uVar44)) < 0) {
      puVar34 = (ulonglong *)
                FUN_144d16620(&local_1d8,&local_118,uVar60 - uVar58,uVar59 - uVar55,uVar37 - uVar44)
      ;
      local_118 = *puVar34;
      uStack_110 = puVar34[1];
      local_108 = puVar34[2];
      uStack_100 = puVar34[3];
      local_f8 = puVar34[4];
      uStack_f0 = puVar34[5];
      local_e8 = puVar34[6];
      uStack_e0 = puVar34[7];
      local_d8 = puVar34[8];
      uStack_d0 = puVar34[9];
      local_c8 = puVar34[10];
      uStack_c0 = puVar34[0xb];
      local_b8 = puVar34[0xc];
      uStack_b0 = puVar34[0xd];
      local_a8 = puVar34[0xe];
      uStack_a0 = puVar34[0xf];
      local_98 = puVar34[0x10];
      uStack_90 = puVar34[0x11];
      local_88 = puVar34[0x12];
      uStack_80 = puVar34[0x13];
      local_78 = puVar34[0x14];
      uStack_70 = puVar34[0x15];
      local_68 = puVar34[0x16];
      uStack_60 = puVar34[0x17];
    }
    lVar54 = 0x24;
    if ((longlong)uStack_60 < 0) {
      lVar54 = 0x20;
    }
    FUN_144d17a30(&local_98,(int)param_2[1] - *(int *)(lVar54 + (longlong)param_1),&local_3e8,1);
    local_1d8 = local_118;
    uStack_1d0 = uStack_110;
    local_4d8 = *param_2;
    local_1c8 = local_108;
    uStack_1c0 = uStack_100;
    local_1b8 = local_f8;
    uStack_1b0 = uStack_f0;
    local_1a8 = local_e8;
    uStack_1a0 = uStack_e0;
    local_198 = local_d8;
    uStack_190 = uStack_d0;
    local_188 = local_c8;
    uStack_180 = uStack_c0;
    local_178 = local_b8;
    uStack_170 = uStack_b0;
    local_168 = local_a8;
    uStack_160 = uStack_a0;
    puVar34 = (ulonglong *)FUN_144d17970(&local_4a8,&local_198,(longlong)&local_4d8 + 4);
    puVar35 = (ulonglong *)FUN_144d17970(&local_398,&local_1d8,&local_4d8);
    lVar54 = local_500;
    uVar51 = *puVar35 + *puVar34;
    uVar42 = (ulonglong)CARRY8(*puVar35,*puVar34);
    uVar43 = puVar35[1] + puVar34[1];
    uVar58 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[1],puVar34[1]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[2] + puVar34[2];
    uVar55 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[2],puVar34[2]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[3] + puVar34[3];
    uVar53 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[3],puVar34[3]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[4] + puVar34[4];
    uVar49 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[4],puVar34[4]) || CARRY8(uVar43,uVar42));
    uVar43 = puVar35[5] + puVar34[5];
    uVar40 = uVar43 + uVar42;
    uVar42 = (ulonglong)(CARRY8(puVar35[5],puVar34[5]) || CARRY8(uVar43,uVar42));
    uVar41 = puVar35[6] + puVar34[6];
    uVar36 = uVar41 + uVar42;
    local_248 = uVar51 + local_3e8;
    uVar43 = (ulonglong)CARRY8(uVar51,local_3e8);
    uVar51 = uVar58 + uStack_3e0;
    uStack_240 = uVar51 + uVar43;
    uVar43 = (ulonglong)(CARRY8(uVar58,uStack_3e0) || CARRY8(uVar51,uVar43));
    uVar51 = uVar55 + local_3d8;
    local_238 = uVar51 + uVar43;
    uVar43 = (ulonglong)(CARRY8(uVar55,local_3d8) || CARRY8(uVar51,uVar43));
    uVar51 = uVar53 + local_3d0;
    uStack_230 = uVar51 + uVar43;
    uVar43 = (ulonglong)(CARRY8(uVar53,local_3d0) || CARRY8(uVar51,uVar43));
    uVar51 = uVar49 + local_3c8;
    local_228 = uVar51 + uVar43;
    uVar43 = (ulonglong)(CARRY8(uVar49,local_3c8) || CARRY8(uVar51,uVar43));
    uVar51 = uVar40 + local_3c0;
    uStack_220 = uVar51 + uVar43;
    uVar43 = (ulonglong)(CARRY8(uVar40,local_3c0) || CARRY8(uVar51,uVar43));
    uVar51 = uVar36 + local_3b8;
    local_218 = uVar51 + uVar43;
    uStack_210 = puVar35[7] + puVar34[7] +
                 (ulonglong)(CARRY8(puVar35[6],puVar34[6]) || CARRY8(uVar41,uVar42)) + local_3b0 +
                 (ulonglong)(CARRY8(uVar36,local_3b8) || CARRY8(uVar51,uVar43));
    lVar61 = 0;
    lVar46 = 0;
    lVar52 = local_4e0;
    do {
      if (lVar61 != lVar54) {
        local_1d8 = local_118;
        uStack_1d0 = uStack_110;
        local_1c8 = local_108;
        uStack_1c0 = uStack_100;
        lVar52 = param_1[2] + lVar46;
        local_1b8 = local_f8;
        uStack_1b0 = uStack_f0;
        local_1a8 = local_e8;
        uStack_1a0 = uStack_e0;
        local_198 = local_d8;
        uStack_190 = uStack_d0;
        local_188 = local_c8;
        uStack_180 = uStack_c0;
        local_178 = local_b8;
        uStack_170 = uStack_b0;
        local_168 = local_a8;
        uStack_160 = uStack_a0;
        local_428 = *(ulonglong *)(lVar52 + 0x40);
        uStack_420 = *(ulonglong *)(lVar52 + 0x48);
        local_4c0 = *(ulonglong *)(lVar52 + 0x50);
        uStack_4b8 = *(ulonglong *)(lVar52 + 0x58);
        FUN_144d18f40(&local_198,lVar52 + 0x20,&local_398);
        FUN_144d18f40(&local_1d8,lVar52,&local_4a8);
        local_2c8 = local_4a8 + local_398;
        uStack_2c0 = uStack_4a0 + uStack_390 + (ulonglong)CARRY8(local_4a8,local_398);
        uVar42 = (ulonglong)
                 (CARRY8(uStack_4a0,uStack_390) ||
                 CARRY8(uStack_4a0 + uStack_390,(ulonglong)CARRY8(local_4a8,local_398)));
        local_2b8 = local_498 + local_388 + uVar42;
        uVar42 = (ulonglong)(CARRY8(local_498,local_388) || CARRY8(local_498 + local_388,uVar42));
        uStack_2b0 = uStack_490 + uStack_380 + uVar42;
        uVar42 = (ulonglong)
                 (CARRY8(uStack_490,uStack_380) || CARRY8(uStack_490 + uStack_380,uVar42));
        local_2a8 = uStack_488 + uStack_378 + uVar42;
        uVar42 = (ulonglong)
                 (CARRY8(uStack_488,uStack_378) || CARRY8(uStack_488 + uStack_378,uVar42));
        uStack_2a0 = uStack_480 + uStack_370 + uVar42;
        uVar42 = (ulonglong)
                 (CARRY8(uStack_480,uStack_370) || CARRY8(uStack_480 + uStack_370,uVar42));
        local_298 = local_478 + local_368 + uVar42;
        uVar42 = (ulonglong)(CARRY8(local_478,local_368) || CARRY8(local_478 + local_368,uVar42));
        uStack_290 = uStack_470 + uStack_360 + uVar42;
        uVar42 = (ulonglong)
                 (CARRY8(uStack_470,uStack_360) || CARRY8(uStack_470 + uStack_360,uVar42));
        local_288 = local_468 + local_358 + uVar42;
        uVar42 = (ulonglong)(CARRY8(local_468,local_358) || CARRY8(local_468 + local_358,uVar42));
        uStack_280 = uStack_460 + local_350 + uVar42;
        uVar42 = (ulonglong)(CARRY8(uStack_460,local_350) || CARRY8(uStack_460 + local_350,uVar42));
        uVar43 = CONCAT44(uStack_454,local_458) + local_348;
        local_278 = uVar43 + uVar42;
        lStack_270 = CONCAT44(uStack_44c,uStack_450) + local_340 +
                     (ulonglong)
                     (CARRY8(CONCAT44(uStack_454,local_458),local_348) || CARRY8(uVar43,uVar42));
        local_398 = local_248;
        uStack_390 = uStack_240;
        local_388 = local_238;
        uStack_380 = uStack_230;
        uStack_378 = local_228;
        uStack_370 = uStack_220;
        local_368 = local_218;
        uStack_360 = uStack_210;
        local_178 = local_428;
        uStack_170 = uStack_420;
        local_168 = local_4c0;
        uStack_160 = uStack_4b8;
        local_1d8 = local_2c8;
        uStack_1d0 = uStack_2c0;
        local_1c8 = local_2b8;
        uStack_1c0 = uStack_2b0;
        local_1b8 = local_2a8;
        uStack_1b0 = uStack_2a0;
        local_1a8 = local_298;
        uStack_1a0 = uStack_290;
        local_198 = local_288;
        uStack_190 = uStack_280;
        local_188 = local_278;
        uStack_180 = lStack_270;
        cVar33 = FUN_144d17ae0(&local_1d8);
        lVar52 = local_4e0;
        if (cVar33 == '\0') goto LAB_144d16425;
      }
      lVar61 = lVar61 + 1;
      lVar46 = lVar46 + 0x68;
      if (lVar52 <= lVar61) {
        return 1;
      }
    } while( true );
  }
  uVar51 = (ulonglong)iVar48;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar51;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar43;
  uVar41 = SUB168(auVar5 * auVar19,8);
  local_4a8 = uVar43 * uVar51;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar51;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar42;
  uStack_420 = uVar42 * uVar51 + uVar41;
  local_418 = (ulonglong)CARRY8(uVar42 * uVar51,uVar41) + SUB168(auVar6 * auVar20,8);
  if ((longlong)uVar42 < 0) {
    local_418 = local_418 - uVar51;
  }
  if (iVar48 < 0) {
    bVar64 = uStack_420 < uVar43;
    uStack_420 = uStack_420 - uVar43;
    local_418 = (local_418 - uVar42) - (ulonglong)bVar64;
  }
  uVar41 = puVar34[3];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar51;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = puVar34[2];
  uVar36 = SUB168(auVar7 * auVar21,8);
  local_4e8 = puVar34[2] * uVar51;
  uStack_4a0 = uStack_420;
  local_498 = local_418;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar51;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar41;
  uStack_488 = uVar41 * uVar51 + uVar36;
  uStack_480 = (ulonglong)CARRY8(uVar41 * uVar51,uVar36) + SUB168(auVar8 * auVar22,8);
  if ((longlong)uVar41 < 0) {
    uStack_480 = uStack_480 - uVar51;
  }
  if (iVar48 < 0) {
    bVar64 = uStack_488 < puVar34[2];
    uStack_488 = uStack_488 - puVar34[2];
    uStack_480 = (uStack_480 - uVar41) - (ulonglong)bVar64;
  }
  uVar36 = (ulonglong)iVar57;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar43;
  uVar51 = SUB168(auVar9 * auVar23,8);
  uVar41 = puVar34[2];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar42;
  uVar40 = uVar42 * uVar36 + uVar51;
  lVar54 = (ulonglong)CARRY8(uVar42 * uVar36,uVar51) + SUB168(auVar10 * auVar24,8);
  if ((longlong)uVar42 < 0) {
    lVar54 = lVar54 - uVar36;
  }
  if (iVar57 < 0) {
    bVar64 = uVar40 < *puVar34;
    uVar40 = uVar40 - *puVar34;
    lVar54 = (lVar54 - uVar42) - (ulonglong)bVar64;
  }
  uVar49 = (ulonglong)iVar47;
  uVar42 = -uVar41;
  uVar55 = -(ulonglong)(uVar41 != 0) - puVar34[3];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar49;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar42;
  uVar51 = SUB168(auVar11 * auVar25,8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar49;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar55;
  uVar53 = uVar49 * uVar55 + uVar51;
  lVar52 = (ulonglong)CARRY8(uVar49 * uVar55,uVar51) + SUB168(auVar12 * auVar26,8);
  if ((longlong)uVar55 < 0) {
    lVar52 = lVar52 - iVar47;
  }
  if (iVar47 < 0) {
    bVar64 = uVar53 < uVar42;
    uVar53 = uVar53 + uVar41;
    lVar52 = (lVar52 - uVar55) - (ulonglong)bVar64;
  }
  local_478 = uVar49 * uVar42 - uVar43 * uVar36;
  uVar42 = (ulonglong)(uVar49 * uVar42 < uVar43 * uVar36);
  uStack_470 = (uVar53 - uVar40) - uVar42;
  uVar4 = *local_258;
  uVar41 = (ulonglong)(int)uVar4;
  local_468 = (lVar52 - lVar54) - (ulonglong)(uVar53 < uVar40 || uVar53 - uVar40 < uVar42);
  uVar51 = (ulonglong)uVar4;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = local_478;
  uVar42 = SUB168(auVar13 * auVar27,8);
  local_4f0 = uVar41 * local_478;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar41;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uStack_470;
  uVar36 = SUB168(auVar14 * auVar28,8);
  uVar40 = uVar41 * uStack_470 + uVar42;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar41;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = local_468;
  uVar42 = (ulonglong)CARRY8(uVar41 * uStack_470,uVar42);
  uVar43 = uVar41 * local_468 + uVar36;
  uVar49 = uVar43 + uVar42;
  lVar54 = (ulonglong)(CARRY8(uVar41 * local_468,uVar36) || CARRY8(uVar43,uVar42)) +
           SUB168(auVar15 * auVar29,8);
  if ((longlong)local_468 < 0) {
    lVar54 = lVar54 - (int)uVar4;
  }
  if ((int)uVar4 < 0) {
    bVar64 = uVar40 < local_478;
    uVar40 = uVar40 - local_478;
    bVar65 = uVar49 < uStack_470;
    uVar42 = uVar49 - uStack_470;
    uVar49 = uVar42 - bVar64;
    local_410 = (lVar54 - local_468) - (ulonglong)(bVar65 || uVar42 < bVar64);
  }
  uVar53 = (ulonglong)*local_430;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar53;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = local_4e8;
  uVar42 = SUB168(auVar16 * auVar30,8);
  uVar41 = local_4e8 * uVar53;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar53;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uStack_488;
  uVar36 = SUB168(auVar17 * auVar31,8);
  uVar58 = uStack_488 * uVar53 + uVar42;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar53;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uStack_480;
  uVar42 = (ulonglong)CARRY8(uStack_488 * uVar53,uVar42);
  uVar43 = uStack_480 * uVar53 + uVar36;
  uVar55 = uVar43 + uVar42;
  lVar54 = (ulonglong)(CARRY8(uStack_480 * uVar53,uVar36) || CARRY8(uVar43,uVar42)) +
           SUB168(auVar18 * auVar32,8);
  if ((longlong)uStack_480 < 0) {
    lVar54 = lVar54 - uVar53;
  }
  if (*local_430 < 0) {
    bVar64 = uVar58 < local_4e8;
    uVar58 = uVar58 - local_4e8;
    bVar65 = uVar55 < uStack_488;
    uVar42 = uVar55 - uStack_488;
    uVar55 = uVar42 - bVar64;
    local_410 = (lVar54 - uStack_480) - (ulonglong)(bVar65 || uVar42 < bVar64);
  }
  uStack_490 = local_4e8;
  local_428 = local_478;
  uStack_420 = uStack_470;
  local_418 = local_468;
  puVar34 = (ulonglong *)FUN_144d17710(&local_3e8,&local_4a8,param_3);
  uVar43 = *puVar34 + uVar41;
  uVar42 = (ulonglong)CARRY8(*puVar34,uVar41);
  uVar41 = puVar34[1] + uVar58;
  uVar53 = uVar41 + uVar42;
  uVar44 = uVar43 + local_4f0;
  uVar43 = (ulonglong)CARRY8(uVar43,local_4f0);
  uVar36 = uVar53 + uVar40;
  local_4e8 = uVar36 + uVar43;
  local_4f0 = puVar34[2] + uVar55 + (ulonglong)(CARRY8(puVar34[1],uVar58) || CARRY8(uVar41,uVar42))
              + uVar49 + (ulonglong)(CARRY8(uVar53,uVar40) || CARRY8(uVar36,uVar43));
  puVar34 = (ulonglong *)FUN_144d17710(&local_3e8,&uStack_490,param_4 + 4);
  puVar35 = (ulonglong *)FUN_144d17710(&local_428,&local_4a8,param_4);
  uVar58 = *puVar35 + *puVar34;
  uVar42 = puVar35[1];
  uVar40 = (ulonglong)CARRY8(*puVar35,*puVar34);
  uVar43 = puVar34[1];
  uVar53 = uVar42 + puVar34[1];
  uVar59 = uVar53 + uVar40;
  uVar41 = puVar35[2];
  uVar36 = puVar34[2];
  puVar34 = (ulonglong *)FUN_144d17710(&local_4c0,&local_478,param_4 + 8);
  uVar49 = (ulonglong)CARRY8(uVar58,*puVar34);
  uVar55 = uVar59 + puVar34[1];
  uVar60 = uVar55 + uVar49;
  uVar58 = (ulonglong)(uVar58 + *puVar34 < uVar44);
  uVar44 = uVar60 - local_4e8;
  if ((longlong)
      (((uVar41 + uVar36 + (ulonglong)(CARRY8(uVar42,uVar43) || CARRY8(uVar53,uVar40)) + puVar34[2]
        + (ulonglong)(CARRY8(uVar59,puVar34[1]) || CARRY8(uVar55,uVar49))) - local_4f0) -
      (ulonglong)(uVar60 < local_4e8 || uVar44 < uVar58)) < 0) {
    bVar64 = local_478 != 0;
    local_478 = -local_478;
    bVar65 = uStack_470 != 0;
    uVar42 = -uStack_470;
    uStack_470 = uVar42 - bVar64;
    local_468 = -(ulonglong)(bVar65 || uVar42 < bVar64) - local_468;
    bVar64 = uStack_490 != 0;
    uStack_490 = -uStack_490;
    bVar65 = uStack_488 != 0;
    uVar42 = -uStack_488;
    uStack_488 = uVar42 - bVar64;
    uStack_480 = -(ulonglong)(bVar65 || uVar42 < bVar64) - uStack_480;
    local_4c0 = -local_4a8;
    uStack_4b8 = -uStack_4a0 - (ulonglong)(local_4a8 != 0);
    local_4b0 = -(ulonglong)(uStack_4a0 != 0 || -uStack_4a0 < (ulonglong)(local_4a8 != 0)) -
                local_498;
    local_4a8 = local_4c0;
    uStack_4a0 = uStack_4b8;
    local_498 = local_4b0;
    local_3e8 = local_478;
    uStack_3e0 = uStack_470;
    local_3d8 = local_468;
    local_388 = local_4b0;
    uStack_380 = uStack_490;
    uStack_378 = uStack_488;
    uStack_370 = uStack_480;
    local_2e8 = uStack_490;
    uStack_2e0 = uStack_488;
    local_2d8 = uStack_480;
  }
  lVar54 = 0x24;
  if ((longlong)local_468 < 0) {
    lVar54 = 0x20;
  }
  local_428 = local_4a8;
  uStack_420 = uStack_4a0;
  FUN_144d177a0(&local_478,(int)param_2[1] - *(int *)(lVar54 + (longlong)param_1),&local_2e8,1,
                uVar51,uVar44 - uVar58);
  local_438 = (int)*param_2;
  local_398 = local_428;
  uStack_390 = uStack_420;
  local_434 = *(int *)((longlong)param_2 + 4);
  local_388 = local_498;
  uStack_380 = uStack_490;
  uStack_378 = uStack_488;
  uStack_370 = uStack_480;
  puVar34 = (ulonglong *)FUN_144d17710(&local_3e8,&uStack_380,&local_434);
  puVar35 = (ulonglong *)FUN_144d17710(&local_4c0,&local_398,&local_438);
  lVar54 = local_500;
  uVar43 = *puVar35 + *puVar34;
  uVar42 = (ulonglong)CARRY8(*puVar35,*puVar34);
  uVar41 = puVar35[1] + puVar34[1];
  uVar40 = uVar41 + uVar42;
  local_248 = uVar43 + local_2e8;
  uVar43 = (ulonglong)CARRY8(uVar43,local_2e8);
  uVar36 = uVar40 + uStack_2e0;
  uStack_240 = uVar36 + uVar43;
  local_238 = puVar35[2] + puVar34[2] +
              (ulonglong)(CARRY8(puVar35[1],puVar34[1]) || CARRY8(uVar41,uVar42)) + local_2d8 +
              (ulonglong)(CARRY8(uVar40,uStack_2e0) || CARRY8(uVar36,uVar43));
  lVar46 = 0;
  lVar61 = 0;
  lVar52 = local_4e0;
  do {
    if (lVar46 != lVar54) {
      lVar52 = param_1[2] + lVar61;
      local_398 = local_428;
      uStack_390 = uStack_420;
      local_388 = local_498;
      uStack_380 = uStack_490;
      uStack_378 = uStack_488;
      uStack_370 = uStack_480;
      local_4c0 = *(ulonglong *)(lVar52 + 0x40);
      uStack_4b8 = *(ulonglong *)(lVar52 + 0x48);
      local_2e8 = *(ulonglong *)(lVar52 + 0x50);
      uStack_2e0 = *(ulonglong *)(lVar52 + 0x58);
      puVar34 = (ulonglong *)FUN_144d17860(&local_3e8,&local_398);
      local_2c8 = *puVar34;
      uStack_2c0 = puVar34[1];
      local_2b8 = puVar34[2];
      uStack_2b0 = puVar34[3];
      local_2a8 = puVar34[4];
      uStack_2a0 = puVar34[5];
      local_3e8 = local_248;
      uStack_3e0 = uStack_240;
      local_298 = local_4c0;
      uStack_290 = uStack_4b8;
      local_288 = local_2e8;
      uStack_280 = uStack_2e0;
      local_3d8 = local_238;
      FUN_147e5f066(&local_298,&local_3e8,&local_398,(int)local_238,uVar51);
      uVar42 = uStack_380;
      uVar43 = uStack_378;
      uVar41 = uStack_370;
      if ((longlong)local_3d8 < 0) {
        uVar42 = uStack_380 - local_298;
        uVar43 = (uStack_378 - uStack_290) - (ulonglong)(uStack_380 < local_298);
        uVar51 = (ulonglong)
                 (uStack_378 < uStack_290 ||
                 uStack_378 - uStack_290 < (ulonglong)(uStack_380 < local_298));
        uVar41 = (uStack_370 - local_288) - uVar51;
        local_368 = (local_368 - uStack_280) -
                    (ulonglong)(uStack_370 < local_288 || uStack_370 - local_288 < uVar51);
      }
      uVar42 = (ulonglong)
               (uStack_2b0 < uVar42 ||
               uStack_2b0 - uVar42 <
               (ulonglong)
               (local_2b8 < local_388 ||
               local_2b8 - local_388 <
               (ulonglong)
               (uStack_2c0 < uStack_390 ||
               uStack_2c0 - uStack_390 < (ulonglong)(local_2c8 < local_398))));
      uVar51 = (local_2a8 - uVar43) - uVar42;
      lVar52 = local_4e0;
      if (-1 < (longlong)
               ((uStack_2a0 - uVar41) -
               (ulonglong)(local_2a8 < uVar43 || local_2a8 - uVar43 < uVar42))) break;
    }
    lVar46 = lVar46 + 1;
    lVar61 = lVar61 + 0x68;
    if (lVar52 <= lVar46) {
      return 1;
    }
  } while( true );
LAB_144d16425:
  local_4f8 = local_4f8 + 1;
  local_500 = local_500 + 1;
  if (local_4e0 <= local_500) {
    return 0;
  }
  goto LAB_144d15340;
}



// FUNCTION 144d16460 FUN_144d16460 body=437 status=ok
// SIG undefined FUN_144d16460(void)

longlong * FUN_144d16460(longlong *param_1,ulonglong *param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  bool bVar29;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  longlong lStack_50;
  
  uVar27 = (ulonglong)*param_3;
  uVar1 = *param_2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar27;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  uVar23 = SUB168(auVar9 * auVar16,8);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar27;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  uVar24 = SUB168(auVar10 * auVar17,8);
  uStack_80 = uVar2 * uVar27 + uVar23;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar27;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar25 = SUB168(auVar11 * auVar18,8);
  uVar23 = (ulonglong)CARRY8(uVar2 * uVar27,uVar23);
  uVar8 = uVar3 * uVar27 + uVar24;
  local_78 = uVar8 + uVar23;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar27;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar26 = SUB168(auVar12 * auVar19,8);
  uVar23 = (ulonglong)(CARRY8(uVar3 * uVar27,uVar24) || CARRY8(uVar8,uVar23));
  uVar8 = uVar4 * uVar27 + uVar25;
  uStack_70 = uVar8 + uVar23;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar27;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar24 = SUB168(auVar13 * auVar20,8);
  uVar23 = (ulonglong)(CARRY8(uVar4 * uVar27,uVar25) || CARRY8(uVar8,uVar23));
  uVar8 = uVar5 * uVar27 + uVar26;
  local_68 = uVar8 + uVar23;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar27;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar25 = SUB168(auVar14 * auVar21,8);
  uVar23 = (ulonglong)(CARRY8(uVar5 * uVar27,uVar26) || CARRY8(uVar8,uVar23));
  uVar8 = uVar6 * uVar27 + uVar24;
  uStack_60 = uVar8 + uVar23;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar27;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar7;
  uVar23 = (ulonglong)(CARRY8(uVar6 * uVar27,uVar24) || CARRY8(uVar8,uVar23));
  uVar8 = uVar7 * uVar27 + uVar25;
  local_58 = uVar8 + uVar23;
  lStack_50 = (ulonglong)(CARRY8(uVar7 * uVar27,uVar25) || CARRY8(uVar8,uVar23)) +
              SUB168(auVar15 * auVar22,8);
  if ((longlong)uVar7 < 0) {
    lStack_50 = lStack_50 - uVar27;
  }
  if (*param_3 < 0) {
    bVar28 = uStack_80 < uVar1;
    uStack_80 = uStack_80 - uVar1;
    bVar29 = local_78 < uVar2;
    uVar2 = local_78 - uVar2;
    local_78 = uVar2 - bVar28;
    uVar2 = (ulonglong)(bVar29 || uVar2 < bVar28);
    bVar28 = uStack_70 < uVar3;
    uVar3 = uStack_70 - uVar3;
    uStack_70 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar28 || uVar3 < uVar2);
    bVar28 = local_68 < uVar4;
    uVar4 = local_68 - uVar4;
    local_68 = uVar4 - uVar2;
    uVar2 = (ulonglong)(bVar28 || uVar4 < uVar2);
    bVar28 = uStack_60 < uVar5;
    uVar5 = uStack_60 - uVar5;
    uStack_60 = uVar5 - uVar2;
    uVar2 = (ulonglong)(bVar28 || uVar5 < uVar2);
    bVar28 = local_58 < uVar6;
    uVar6 = local_58 - uVar6;
    local_58 = uVar6 - uVar2;
    lStack_50 = (lStack_50 - uVar7) - (ulonglong)(bVar28 || uVar6 < uVar2);
  }
  *param_1 = uVar1 * uVar27;
  param_1[1] = uStack_80;
  param_1[2] = local_78;
  param_1[3] = uStack_70;
  param_1[4] = local_68;
  param_1[5] = uStack_60;
  param_1[6] = local_58;
  param_1[7] = lStack_50;
  return param_1;
}



// FUNCTION 144d16620 FUN_144d16620 body=694 status=ok
// SIG undefined FUN_144d16620(void)

longlong * FUN_144d16620(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  
  lVar31 = param_2[0x10];
  lVar32 = param_2[0x16];
  lVar33 = param_2[0x17];
  lVar34 = param_2[8];
  lVar35 = param_2[0xe];
  lVar36 = param_2[0xf];
  lVar37 = param_2[3];
  lVar38 = param_2[4];
  lVar39 = param_2[5];
  lVar40 = param_2[6];
  lVar41 = param_2[7];
  uVar1 = (ulonglong)(lVar31 != 0);
  uVar16 = -param_2[0x11];
  uVar2 = (ulonglong)(param_2[0x11] != 0 || uVar16 < uVar1);
  uVar17 = -param_2[0x12];
  uVar3 = (ulonglong)(param_2[0x12] != 0 || uVar17 < uVar2);
  uVar18 = -param_2[0x13];
  uVar4 = (ulonglong)(param_2[0x13] != 0 || uVar18 < uVar3);
  uVar19 = -param_2[0x14];
  uVar5 = (ulonglong)(param_2[0x14] != 0 || uVar19 < uVar4);
  uVar20 = -param_2[0x15];
  uVar6 = (ulonglong)(param_2[0x15] != 0 || uVar20 < uVar5);
  uVar21 = -lVar32;
  uVar7 = (ulonglong)(lVar34 != 0);
  uVar22 = -param_2[9];
  uVar8 = (ulonglong)(param_2[9] != 0 || uVar22 < uVar7);
  uVar23 = -param_2[10];
  uVar9 = (ulonglong)(param_2[10] != 0 || uVar23 < uVar8);
  uVar24 = -param_2[0xb];
  uVar10 = (ulonglong)(param_2[0xb] != 0 || uVar24 < uVar9);
  uVar25 = -param_2[0xc];
  uVar11 = (ulonglong)(param_2[0xc] != 0 || uVar25 < uVar10);
  uVar26 = -param_2[0xd];
  uVar12 = (ulonglong)(param_2[0xd] != 0 || uVar26 < uVar11);
  uVar27 = -lVar35;
  uVar13 = (ulonglong)(*param_2 != 0);
  uVar28 = -param_2[1];
  uVar14 = (ulonglong)(param_2[1] != 0 || uVar28 < uVar13);
  uVar29 = -param_2[2];
  uVar15 = (ulonglong)(param_2[2] != 0 || uVar29 < uVar14);
  uVar30 = -lVar37;
  *param_1 = -*param_2;
  param_1[1] = uVar28 - uVar13;
  uVar13 = (ulonglong)(lVar37 != 0 || uVar30 < uVar15);
  uVar28 = -lVar38;
  param_1[2] = uVar29 - uVar14;
  param_1[3] = uVar30 - uVar15;
  uVar14 = (ulonglong)(lVar38 != 0 || uVar28 < uVar13);
  uVar29 = -lVar39;
  uVar15 = (ulonglong)(lVar39 != 0 || uVar29 < uVar14);
  uVar30 = -lVar40;
  param_1[4] = uVar28 - uVar13;
  param_1[5] = uVar29 - uVar14;
  param_1[8] = -lVar34;
  param_1[9] = uVar22 - uVar7;
  param_1[6] = uVar30 - uVar15;
  param_1[7] = -(ulonglong)(lVar40 != 0 || uVar30 < uVar15) - lVar41;
  param_1[10] = uVar23 - uVar8;
  param_1[0xb] = uVar24 - uVar9;
  param_1[0xc] = uVar25 - uVar10;
  param_1[0xd] = uVar26 - uVar11;
  param_1[0xe] = uVar27 - uVar12;
  param_1[0xf] = -(ulonglong)(lVar35 != 0 || uVar27 < uVar12) - lVar36;
  param_1[0x10] = -lVar31;
  param_1[0x11] = uVar16 - uVar1;
  param_1[0x12] = uVar17 - uVar2;
  param_1[0x13] = uVar18 - uVar3;
  param_1[0x14] = uVar19 - uVar4;
  param_1[0x15] = uVar20 - uVar5;
  param_1[0x16] = uVar21 - uVar6;
  param_1[0x17] = -(ulonglong)(lVar32 != 0 || uVar21 < uVar6) - lVar33;
  return param_1;
}



// FUNCTION 144d168e0 FUN_144d168e0 body=746 status=ok
// SIG undefined FUN_144d168e0(void)

void FUN_144d168e0(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  byte local_res10;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  uint local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  
  lVar15 = param_2[2];
  uVar11 = *(int *)(param_1 + 0x20) * lVar15;
  lVar16 = *(longlong *)(param_1 + 0x10);
  local_res10 = 1;
  local_98 = uVar11 + param_2[3];
  local_90 = SUB168(SEXT816(lVar15) * SEXT816((longlong)*(int *)(param_1 + 0x20)),8) + param_2[4] +
             (ulonglong)CARRY8(uVar11,param_2[3]);
  uVar11 = *(int *)(param_1 + 0x24) * lVar15;
  local_a0 = *(longlong *)(param_1 + 0x18);
  local_88 = uVar11 + param_2[3];
  local_80 = SUB168(SEXT816(lVar15) * SEXT816((longlong)*(int *)(param_1 + 0x24)),8) + param_2[4] +
             (ulonglong)CARRY8(uVar11,param_2[3]);
  bVar5 = false;
  if (lVar16 != local_a0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    plVar10 = (longlong *)(lVar16 + 0x58);
    bVar8 = true;
    do {
      FUN_144cc6890(plVar10 + -7,uVar2,&local_f8,1);
      FUN_144cc6890(lVar16,uVar1,&local_78,1);
      local_c0 = local_78 + local_f8;
      local_b8 = local_70 + local_f0 + (ulonglong)CARRY8(local_78,local_f8);
      uVar11 = (ulonglong)
               (CARRY8(local_70,local_f0) ||
               CARRY8(local_70 + local_f0,(ulonglong)CARRY8(local_78,local_f8)));
      local_b0 = local_68 + local_e8 + uVar11;
      uVar11 = (ulonglong)(CARRY8(local_68,local_e8) || CARRY8(local_68 + local_e8,uVar11));
      local_a8 = local_60 + local_e0 + uVar11;
      lVar15 = local_58 + local_d8 +
               (ulonglong)(CARRY8(local_60,local_e0) || CARRY8(local_60 + local_e0,uVar11));
      FUN_144cc6970(plVar10 + -3,&local_98,&local_f8);
      uVar11 = local_e8;
      uVar12 = local_e0;
      uVar14 = local_d8;
      if (local_90 < 0) {
        uVar11 = local_e8 - plVar10[-3];
        uVar14 = (ulonglong)(local_e8 < (ulonglong)plVar10[-3]);
        uVar3 = local_e0 - plVar10[-2];
        uVar12 = uVar3 - uVar14;
        uVar3 = (ulonglong)(local_e0 < (ulonglong)plVar10[-2] || uVar3 < uVar14);
        uVar4 = local_d8 - plVar10[-1];
        uVar14 = uVar4 - uVar3;
        local_d0 = (local_d0 - *plVar10) -
                   (ulonglong)(local_d8 < (ulonglong)plVar10[-1] || uVar4 < uVar3);
      }
      uVar3 = (ulonglong)
              (CARRY8(local_b8,local_f0) ||
              CARRY8(local_b8 + local_f0,(ulonglong)CARRY8(local_c0,local_f8)));
      uVar4 = (ulonglong)(CARRY8(local_b0,uVar11) || CARRY8(local_b0 + uVar11,uVar3));
      lVar13 = lVar15 + uVar14 +
               (ulonglong)(CARRY8(local_a8,uVar12) || CARRY8(local_a8 + uVar12,uVar4));
      local_c8 = (uint)(lVar13 != 0 ||
                       ((local_b0 + uVar11 + uVar3 != 0 ||
                        (local_b8 + local_f0 + (ulonglong)CARRY8(local_c0,local_f8) != 0 ||
                        local_c0 + local_f8 != 0)) || local_a8 + uVar12 + uVar4 != 0)) |
                 (uint)(lVar13 >> 0x3f);
      FUN_144cc6970(plVar10 + -3,&local_88,&local_f8);
      uVar11 = local_e8;
      uVar12 = local_e0;
      uVar14 = local_d8;
      if (local_80 < 0) {
        uVar11 = local_e8 - plVar10[-3];
        uVar14 = (ulonglong)(local_e8 < (ulonglong)plVar10[-3]);
        uVar3 = local_e0 - plVar10[-2];
        uVar12 = uVar3 - uVar14;
        uVar3 = (ulonglong)(local_e0 < (ulonglong)plVar10[-2] || uVar3 < uVar14);
        uVar4 = local_d8 - plVar10[-1];
        uVar14 = uVar4 - uVar3;
        local_d0 = (local_d0 - *plVar10) -
                   (ulonglong)(local_d8 < (ulonglong)plVar10[-1] || uVar4 < uVar3);
      }
      uVar3 = (ulonglong)
              (CARRY8(local_b8,local_f0) ||
              CARRY8(local_b8 + local_f0,(ulonglong)CARRY8(local_c0,local_f8)));
      uVar4 = (ulonglong)(CARRY8(local_b0,uVar11) || CARRY8(local_b0 + uVar11,uVar3));
      lVar15 = lVar15 + uVar14 +
               (ulonglong)(CARRY8(local_a8,uVar12) || CARRY8(local_a8 + uVar12,uVar4));
      bVar7 = false;
      if (0 < (int)local_c8) {
        bVar7 = bVar8;
      }
      local_res10 = local_res10 & (byte)(lVar15 >> 0x3f) >> 7;
      if ((local_c8 == 0) &&
         ((lVar15 == 0 &&
          ((local_b0 + uVar11 + uVar3 == 0 &&
           (local_b8 + local_f0 + (ulonglong)CARRY8(local_c0,local_f8) == 0 &&
           local_c0 + local_f8 == 0)) && local_a8 + uVar12 + uVar4 == 0)) && -1 < lVar15)) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
      }
      bVar5 = (bool)(bVar5 | bVar6);
      lVar16 = lVar16 + 0x68;
      plVar10 = plVar10 + 0xd;
      bVar8 = bVar7;
    } while (lVar16 != local_a0);
    if ((!bVar7) && (local_res10 == 0)) {
      uVar9 = 1;
      goto LAB_144d16ba8;
    }
  }
  uVar9 = 0;
LAB_144d16ba8:
  *param_3 = uVar9;
  *(bool *)param_4 = !bVar5;
  return;
}



// FUNCTION 144d16bd0 FUN_144d16bd0 body=1060 status=ok
// SIG undefined FUN_144d16bd0(void)

bool FUN_144d16bd0(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong local_158;
  undefined4 local_150;
  ulonglong local_148;
  undefined4 local_140;
  ulonglong local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  longlong lStack_d0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_138 = *(ulonglong *)(param_1 + 0x10);
  uStack_130 = *(undefined8 *)(param_1 + 0x18);
  FUN_144d17c60(&local_138,&local_b8,&local_78);
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  local_128 = local_b8;
  uStack_120 = uStack_b0;
  local_118 = local_a8;
  lStack_110 = lStack_a0;
  local_108 = local_98;
  uStack_100 = uStack_90;
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  FUN_144ccf3e0(&local_108,uVar1,&local_e8);
  lVar5 = lStack_a0;
  uVar4 = uStack_b0;
  uVar3 = local_b8;
  local_158 = local_a8;
  if ((longlong)
      ((lStack_d0 - lStack_a0) -
      (ulonglong)
      (local_d8 < local_a8 ||
      local_d8 - local_a8 <
      (ulonglong)(uStack_e0 < uStack_b0 || uStack_e0 - uStack_b0 < (ulonglong)(local_e8 < local_b8))
      )) < 0) {
    local_108 = local_98;
    uStack_100 = uStack_90;
    local_f8 = local_88;
    uStack_f0 = uStack_80;
    local_128 = local_b8;
    uStack_120 = uStack_b0;
    local_118 = local_a8;
    lStack_110 = lStack_a0;
    FUN_144ccf3e0(&local_108,*(undefined4 *)((longlong)param_3 + 4),&local_e8);
    uVar2 = local_158;
    if ((longlong)
        ((lStack_d0 - lVar5) -
        (ulonglong)
        (local_d8 < local_158 ||
        local_d8 - local_158 <
        (ulonglong)(uStack_e0 < uVar4 || uStack_e0 - uVar4 < (ulonglong)(local_e8 < uVar3)))) < 0) {
      local_128 = local_b8;
      uStack_120 = uStack_b0;
      local_118 = local_a8;
      lStack_110 = lStack_a0;
      local_108 = local_98;
      uStack_100 = uStack_90;
      local_f8 = local_88;
      uStack_f0 = uStack_80;
      FUN_144ccf3e0(&local_108,*(undefined4 *)((longlong)param_4 + 4),&local_e8);
      if ((longlong)
          ((lStack_d0 - lVar5) -
          (ulonglong)
          (local_d8 < uVar2 ||
          local_d8 - uVar2 <
          (ulonglong)(uStack_e0 < uVar4 || uStack_e0 - uVar4 < (ulonglong)(local_e8 < uVar3)))) < 0)
      {
        return false;
      }
    }
  }
  else {
    local_128 = local_78;
    uStack_120 = uStack_70;
    local_118 = local_68;
    lStack_110 = lStack_60;
    local_108 = local_58;
    uStack_100 = uStack_50;
    local_f8 = local_48;
    uStack_f0 = uStack_40;
    FUN_144ccf3e0(&local_108,uVar1,&local_e8);
    lVar5 = lStack_60;
    uVar2 = local_68;
    uVar4 = uStack_70;
    uVar3 = local_78;
    if ((longlong)
        ((lStack_60 - lStack_d0) -
        (ulonglong)
        (local_68 < local_d8 ||
        local_68 - local_d8 <
        (ulonglong)
        (uStack_70 < uStack_e0 || uStack_70 - uStack_e0 < (ulonglong)(local_78 < local_e8)))) < 0) {
      local_108 = local_58;
      uStack_100 = uStack_50;
      local_f8 = local_48;
      uStack_f0 = uStack_40;
      local_128 = local_78;
      uStack_120 = uStack_70;
      local_118 = local_68;
      lStack_110 = lStack_60;
      FUN_144ccf3e0(&local_108,*(undefined4 *)((longlong)param_3 + 4),&local_e8);
      if ((longlong)
          ((lVar5 - lStack_d0) -
          (ulonglong)
          (uVar2 < local_d8 ||
          uVar2 - local_d8 <
          (ulonglong)(uVar4 < uStack_e0 || uVar4 - uStack_e0 < (ulonglong)(uVar3 < local_e8)))) < 0)
      {
        local_128 = local_78;
        uStack_120 = uStack_70;
        local_118 = local_68;
        lStack_110 = lStack_60;
        local_108 = local_58;
        uStack_100 = uStack_50;
        local_f8 = local_48;
        uStack_f0 = uStack_40;
        cVar6 = FUN_144d18030(*(undefined4 *)((longlong)param_4 + 4),&local_128);
        if (cVar6 != '\0') {
          return false;
        }
      }
    }
  }
  local_158 = *param_4;
  local_150 = (undefined4)param_4[1];
  local_148 = *param_3;
  local_140 = (undefined4)param_3[1];
  local_138 = *param_2;
  uStack_130._0_4_ = (int)param_2[1];
  cVar6 = FUN_144d180c0(param_1,&local_138,&local_148,&local_158);
  if (cVar6 == '\0') {
    local_138 = *param_2;
    uStack_130._0_4_ = (undefined4)param_2[1];
    local_148 = *param_4;
    local_140 = (undefined4)param_4[1];
    local_158 = *param_3;
    local_150 = (undefined4)param_3[1];
    cVar6 = FUN_144d180c0(param_1,&local_158,&local_148,&local_138);
    if (cVar6 == '\0') {
      local_138 = *param_3;
      local_148 = *param_2;
      uStack_130 = CONCAT44(uStack_130._4_4_,(int)param_3[1]);
      local_140 = (undefined4)param_2[1];
      local_158 = *param_4;
      local_150 = (undefined4)param_4[1];
      cVar6 = FUN_144d180c0(param_1,&local_158,&local_148,&local_138);
      return cVar6 == '\0';
    }
  }
  return false;
}



// FUNCTION 144d17000 FUN_144d17000 body=1055 status=ok
// SIG undefined FUN_144d17000(void)

bool FUN_144d17000(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong local_158;
  undefined4 local_150;
  ulonglong local_148;
  undefined4 local_140;
  ulonglong local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  longlong lStack_d0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_138 = *(ulonglong *)(param_1 + 0x10);
  uStack_130 = *(undefined8 *)(param_1 + 0x18);
  FUN_144d18390(&local_138,&local_b8,&local_78);
  uVar1 = *param_2;
  local_128 = local_b8;
  uStack_120 = uStack_b0;
  local_118 = local_a8;
  lStack_110 = lStack_a0;
  local_108 = local_98;
  uStack_100 = uStack_90;
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  FUN_144ccf3e0(&local_108,(int)uVar1,&local_e8);
  lVar4 = lStack_a0;
  uVar3 = uStack_b0;
  uVar2 = local_b8;
  local_158 = local_a8;
  if ((longlong)
      ((lStack_d0 - lStack_a0) -
      (ulonglong)
      (local_d8 < local_a8 ||
      local_d8 - local_a8 <
      (ulonglong)(uStack_e0 < uStack_b0 || uStack_e0 - uStack_b0 < (ulonglong)(local_e8 < local_b8))
      )) < 0) {
    local_108 = local_98;
    uStack_100 = uStack_90;
    local_f8 = local_88;
    uStack_f0 = uStack_80;
    local_128 = local_b8;
    uStack_120 = uStack_b0;
    local_118 = local_a8;
    lStack_110 = lStack_a0;
    FUN_144ccf3e0(&local_108,(int)*param_3,&local_e8);
    uVar1 = local_158;
    if ((longlong)
        ((lStack_d0 - lVar4) -
        (ulonglong)
        (local_d8 < local_158 ||
        local_d8 - local_158 <
        (ulonglong)(uStack_e0 < uVar3 || uStack_e0 - uVar3 < (ulonglong)(local_e8 < uVar2)))) < 0) {
      local_128 = local_b8;
      uStack_120 = uStack_b0;
      local_118 = local_a8;
      lStack_110 = lStack_a0;
      local_108 = local_98;
      uStack_100 = uStack_90;
      local_f8 = local_88;
      uStack_f0 = uStack_80;
      FUN_144ccf3e0(&local_108,(int)*param_4,&local_e8);
      if ((longlong)
          ((lStack_d0 - lVar4) -
          (ulonglong)
          (local_d8 < uVar1 ||
          local_d8 - uVar1 <
          (ulonglong)(uStack_e0 < uVar3 || uStack_e0 - uVar3 < (ulonglong)(local_e8 < uVar2)))) < 0)
      {
        return false;
      }
    }
  }
  else {
    local_128 = local_78;
    uStack_120 = uStack_70;
    local_118 = local_68;
    lStack_110 = lStack_60;
    local_108 = local_58;
    uStack_100 = uStack_50;
    local_f8 = local_48;
    uStack_f0 = uStack_40;
    FUN_144ccf3e0(&local_108,(int)uVar1,&local_e8);
    lVar4 = lStack_60;
    uVar3 = local_68;
    uVar2 = uStack_70;
    uVar1 = local_78;
    if ((longlong)
        ((lStack_60 - lStack_d0) -
        (ulonglong)
        (local_68 < local_d8 ||
        local_68 - local_d8 <
        (ulonglong)
        (uStack_70 < uStack_e0 || uStack_70 - uStack_e0 < (ulonglong)(local_78 < local_e8)))) < 0) {
      local_108 = local_58;
      uStack_100 = uStack_50;
      local_f8 = local_48;
      uStack_f0 = uStack_40;
      local_128 = local_78;
      uStack_120 = uStack_70;
      local_118 = local_68;
      lStack_110 = lStack_60;
      FUN_144ccf3e0(&local_108,(int)*param_3,&local_e8);
      if ((longlong)
          ((lVar4 - lStack_d0) -
          (ulonglong)
          (uVar3 < local_d8 ||
          uVar3 - local_d8 <
          (ulonglong)(uVar2 < uStack_e0 || uVar2 - uStack_e0 < (ulonglong)(uVar1 < local_e8)))) < 0)
      {
        local_128 = local_78;
        uStack_120 = uStack_70;
        local_118 = local_68;
        lStack_110 = lStack_60;
        local_108 = local_58;
        uStack_100 = uStack_50;
        local_f8 = local_48;
        uStack_f0 = uStack_40;
        cVar5 = FUN_144d18030((int)*param_4,&local_128);
        if (cVar5 != '\0') {
          return false;
        }
      }
    }
  }
  local_158 = *param_4;
  local_150 = (undefined4)param_4[1];
  local_148 = *param_3;
  local_140 = (undefined4)param_3[1];
  local_138 = *param_2;
  uStack_130._0_4_ = (int)param_2[1];
  cVar5 = FUN_144d18780(param_1,&local_138,&local_148,&local_158);
  if (cVar5 == '\0') {
    local_138 = *param_2;
    uStack_130._0_4_ = (undefined4)param_2[1];
    local_148 = *param_4;
    local_140 = (undefined4)param_4[1];
    local_158 = *param_3;
    local_150 = (undefined4)param_3[1];
    cVar5 = FUN_144d18780(param_1,&local_158,&local_148,&local_138);
    if (cVar5 == '\0') {
      local_138 = *param_3;
      local_148 = *param_2;
      uStack_130 = CONCAT44(uStack_130._4_4_,(int)param_3[1]);
      local_140 = (undefined4)param_2[1];
      local_158 = *param_4;
      local_150 = (undefined4)param_4[1];
      cVar5 = FUN_144d18780(param_1,&local_158,&local_148,&local_138);
      return cVar5 == '\0';
    }
  }
  return false;
}



// FUNCTION 144d17420 FUN_144d17420 body=736 status=ok
// SIG undefined FUN_144d17420(void)

uint FUN_144d17420(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  longlong local_150;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  
  FUN_147e5f6f6(param_1,param_3[1],&local_130,1);
  FUN_147e5f6f6(param_1 + 0x20,*param_3,&local_170,1);
  local_198 = local_170 - local_130;
  local_190 = (local_168 - local_128) - (ulonglong)(local_170 < local_130);
  uVar21 = (ulonglong)
           (local_168 < local_128 || local_168 - local_128 < (ulonglong)(local_170 < local_130));
  local_188 = (local_160 - local_120) - uVar21;
  uVar21 = (ulonglong)(local_160 < local_120 || local_160 - local_120 < uVar21);
  local_180 = (local_158 - local_118) - uVar21;
  local_178 = (local_150 - local_110) -
              (ulonglong)(local_158 < local_118 || local_158 - local_118 < uVar21);
  FUN_144cd87b0(param_2 + 0x40,&local_198,&local_98);
  if (local_178 < 0) {
    uVar22 = (ulonglong)(local_70 < *(ulonglong *)(param_2 + 0x40));
    uVar4 = local_68 - *(ulonglong *)(param_2 + 0x48);
    uVar21 = (ulonglong)(local_68 < *(ulonglong *)(param_2 + 0x48) || uVar4 < uVar22);
    uVar5 = local_60 - *(ulonglong *)(param_2 + 0x50);
    local_res20 = uVar5 - uVar21;
    local_58 = (local_58 - *(longlong *)(param_2 + 0x58)) -
               (ulonglong)(local_60 < *(ulonglong *)(param_2 + 0x50) || uVar5 < uVar21);
    uVar21 = local_70 - *(ulonglong *)(param_2 + 0x40);
    uVar22 = uVar4 - uVar22;
  }
  else {
    local_res20 = local_60;
    uVar21 = local_70;
    uVar22 = local_68;
  }
  FUN_147e5f6f6(param_2 + 0x20,*param_3,&local_170,1);
  FUN_147e5f6f6(param_2,param_3[1],&local_130,1);
  local_198 = local_130 - local_170;
  local_190 = (local_128 - local_168) - (ulonglong)(local_130 < local_170);
  uVar4 = (ulonglong)
          (local_128 < local_168 || local_128 - local_168 < (ulonglong)(local_130 < local_170));
  local_188 = (local_120 - local_160) - uVar4;
  uVar4 = (ulonglong)(local_120 < local_160 || local_120 - local_160 < uVar4);
  local_180 = (local_118 - local_158) - uVar4;
  local_178 = (local_110 - local_150) -
              (ulonglong)(local_118 < local_158 || local_118 - local_158 < uVar4);
  FUN_144cd87b0(param_1 + 0x40,&local_198,&local_e8);
  if (local_178 < 0) {
    local_res8 = local_c0 - *(ulonglong *)(param_1 + 0x40);
    uVar4 = (ulonglong)(local_c0 < *(ulonglong *)(param_1 + 0x40));
    uVar5 = local_b8 - *(ulonglong *)(param_1 + 0x48);
    local_res10 = uVar5 - uVar4;
    uVar4 = (ulonglong)(local_b8 < *(ulonglong *)(param_1 + 0x48) || uVar5 < uVar4);
    uVar5 = local_b0 - *(ulonglong *)(param_1 + 0x50);
    local_res18 = uVar5 - uVar4;
    local_a8 = (local_a8 - *(longlong *)(param_1 + 0x58)) -
               (ulonglong)(local_b0 < *(ulonglong *)(param_1 + 0x50) || uVar5 < uVar4);
  }
  else {
    local_res18 = local_b0;
    local_res10 = local_b8;
    local_res8 = local_c0;
  }
  puVar7 = (ulonglong *)FUN_144d18cc0(&local_130,param_1 + 0x20,param_2);
  puVar8 = (ulonglong *)FUN_144d18cc0(&local_170,param_1,param_2 + 0x20);
  uVar10 = *puVar8 - *puVar7;
  uVar4 = (ulonglong)(*puVar8 < *puVar7);
  uVar5 = puVar8[1] - puVar7[1];
  uVar9 = uVar5 - uVar4;
  uVar4 = (ulonglong)(puVar8[1] < puVar7[1] || uVar5 < uVar4);
  uVar5 = puVar8[2] - puVar7[2];
  uVar12 = uVar5 - uVar4;
  uVar4 = (ulonglong)(puVar8[2] < puVar7[2] || uVar5 < uVar4);
  uVar5 = puVar8[3] - puVar7[3];
  uVar20 = uVar5 - uVar4;
  uVar4 = (ulonglong)(puVar8[3] < puVar7[3] || uVar5 < uVar4);
  uVar5 = puVar8[4] - puVar7[4];
  uVar14 = uVar5 - uVar4;
  uVar4 = (ulonglong)(puVar8[4] < puVar7[4] || uVar5 < uVar4);
  uVar5 = puVar8[5] - puVar7[5];
  uVar16 = uVar5 - uVar4;
  uVar3 = (ulonglong)(puVar8[5] < puVar7[5] || uVar5 < uVar4);
  uVar6 = puVar8[6] - puVar7[6];
  uVar18 = uVar6 - uVar3;
  uVar11 = uVar10 + local_e8;
  uVar4 = (ulonglong)CARRY8(uVar10,local_e8);
  uVar5 = uVar9 + local_e0;
  uVar10 = uVar5 + uVar4;
  uVar4 = (ulonglong)(CARRY8(uVar9,local_e0) || CARRY8(uVar5,uVar4));
  uVar5 = uVar12 + local_d8;
  uVar13 = uVar5 + uVar4;
  uVar4 = (ulonglong)(CARRY8(uVar12,local_d8) || CARRY8(uVar5,uVar4));
  uVar5 = uVar20 + local_d0;
  uVar12 = uVar5 + uVar4;
  uVar4 = (ulonglong)(CARRY8(uVar20,local_d0) || CARRY8(uVar5,uVar4));
  uVar5 = uVar14 + local_c8;
  uVar15 = uVar5 + uVar4;
  uVar4 = (ulonglong)(CARRY8(uVar14,local_c8) || CARRY8(uVar5,uVar4));
  uVar5 = uVar16 + local_res8;
  uVar17 = uVar5 + uVar4;
  uVar4 = (ulonglong)(CARRY8(uVar16,local_res8) || CARRY8(uVar5,uVar4));
  uVar14 = uVar18 + local_res10;
  uVar19 = uVar14 + uVar4;
  uVar5 = (ulonglong)CARRY8(uVar11,local_98);
  uVar16 = uVar10 + local_90;
  uVar9 = (ulonglong)(CARRY8(uVar10,local_90) || CARRY8(uVar16,uVar5));
  uVar20 = uVar13 + local_88;
  uVar10 = (ulonglong)(CARRY8(uVar13,local_88) || CARRY8(uVar20,uVar9));
  uVar1 = uVar12 + local_80;
  uVar12 = (ulonglong)(CARRY8(uVar12,local_80) || CARRY8(uVar1,uVar10));
  uVar2 = uVar15 + local_78;
  uVar13 = (ulonglong)(CARRY8(uVar15,local_78) || CARRY8(uVar2,uVar12));
  uVar15 = uVar17 + uVar21;
  uVar21 = (ulonglong)(CARRY8(uVar17,uVar21) || CARRY8(uVar15,uVar13));
  uVar17 = uVar19 + uVar22;
  lVar23 = ((puVar8[7] - puVar7[7]) - (ulonglong)(puVar8[6] < puVar7[6] || uVar6 < uVar3)) +
           local_res18 + (ulonglong)(CARRY8(uVar18,local_res10) || CARRY8(uVar14,uVar4)) +
           local_res20 + (ulonglong)(CARRY8(uVar19,uVar22) || CARRY8(uVar17,uVar21));
  return (uint)((uVar17 + uVar21 != 0 ||
                ((uVar2 + uVar12 != 0 ||
                 ((uVar20 + uVar9 != 0 || (uVar16 + uVar5 != 0 || uVar11 + local_98 != 0)) ||
                 uVar1 + uVar10 != 0)) || uVar15 + uVar13 != 0)) || lVar23 != 0) |
         (uint)(lVar23 >> 0x3f);
}



// FUNCTION 144d17710 FUN_144d17710 body=131 status=ok
// SIG undefined FUN_144d17710(void)

longlong * FUN_144d17710(longlong *param_1,ulonglong *param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar6 = (ulonglong)*param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  uVar5 = SUB168(auVar1 * auVar3,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  uVar8 = param_2[1] * uVar6 + uVar5;
  lVar7 = param_2[2] * uVar6 + SUB168(auVar2 * auVar4,8) +
          (ulonglong)CARRY8(param_2[1] * uVar6,uVar5);
  if (*param_3 < 0) {
    bVar9 = uVar8 < *param_2;
    uVar8 = uVar8 - *param_2;
    lVar7 = (lVar7 - param_2[1]) - (ulonglong)bVar9;
  }
  *param_1 = *param_2 * uVar6;
  param_1[1] = uVar8;
  param_1[2] = lVar7;
  return param_1;
}



// FUNCTION 144d177a0 FUN_144d177a0 body=178 status=ok
// SIG undefined FUN_144d177a0(void)

void FUN_144d177a0(ulonglong *param_1,int param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar12;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_1;
  uVar10 = SUB168(auVar1 * auVar4,8);
  *param_3 = *param_1 * uVar12;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar12;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1[1];
  uVar11 = SUB168(auVar2 * auVar5,8);
  uVar7 = param_1[1] * uVar12;
  param_3[1] = uVar7 + uVar10;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar12;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[2];
  uVar8 = param_1[2] * uVar12;
  uVar7 = (ulonglong)CARRY8(uVar7,uVar10);
  uVar10 = uVar8 + uVar11;
  param_3[2] = uVar10 + uVar7;
  lVar9 = (ulonglong)(CARRY8(uVar8,uVar11) || CARRY8(uVar10,uVar7)) + SUB168(auVar3 * auVar6,8);
  param_3[3] = lVar9;
  if ((longlong)param_1[2] < 0) {
    param_3[3] = lVar9 - uVar12;
  }
  if (param_2 < 0) {
    uVar7 = param_3[1];
    uVar10 = *param_1;
    param_3[1] = uVar7 - *param_1;
    uVar8 = param_3[2];
    uVar10 = (ulonglong)(uVar7 < uVar10);
    uVar7 = param_1[1];
    uVar11 = uVar8 - param_1[1];
    param_3[2] = uVar11 - uVar10;
    param_3[3] = (param_3[3] - param_1[2]) - (ulonglong)(uVar8 < uVar7 || uVar11 < uVar10);
  }
  return;
}



// FUNCTION 144d17860 FUN_144d17860 body=269 status=ok
// SIG undefined FUN_144d17860(void)

longlong * FUN_144d17860(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  
  FUN_144ccf4c0(param_2 + 3,param_3 + 4,&local_60);
  uVar3 = local_48;
  uVar4 = local_40;
  if ((longlong)param_2[5] < 0) {
    uVar3 = local_48 - param_3[4];
    uVar1 = (ulonglong)(local_48 < param_3[4]);
    uVar2 = local_40 - param_3[5];
    uVar4 = uVar2 - uVar1;
    local_38 = (local_38 - param_3[6]) - (ulonglong)(local_40 < param_3[5] || uVar2 < uVar1);
  }
  if ((longlong)param_3[7] < 0) {
    bVar5 = uVar4 < param_2[3];
    uVar4 = uVar4 - param_2[3];
    local_38 = (local_38 - param_2[4]) - (ulonglong)bVar5;
  }
  FUN_144ccf4c0(param_2,param_3,&local_98);
  if ((longlong)param_2[2] < 0) {
    bVar5 = local_80 < *param_3;
    local_80 = local_80 - *param_3;
    bVar6 = local_78 < param_3[1];
    uVar1 = local_78 - param_3[1];
    local_78 = uVar1 - bVar5;
    local_70 = (local_70 - param_3[2]) - (ulonglong)(bVar6 || uVar1 < bVar5);
  }
  if ((longlong)param_3[3] < 0) {
    bVar5 = local_78 < *param_2;
    local_78 = local_78 - *param_2;
    local_70 = (local_70 - param_2[1]) - (ulonglong)bVar5;
  }
  *param_1 = local_98 + local_60;
  param_1[1] = local_90 + local_58 + (ulonglong)CARRY8(local_98,local_60);
  uVar1 = (ulonglong)
          (CARRY8(local_90,local_58) ||
          CARRY8(local_90 + local_58,(ulonglong)CARRY8(local_98,local_60)));
  param_1[2] = local_88 + local_50 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_88,local_50) || CARRY8(local_88 + local_50,uVar1));
  param_1[3] = local_80 + uVar3 + uVar1;
  uVar3 = (ulonglong)(CARRY8(local_80,uVar3) || CARRY8(local_80 + uVar3,uVar1));
  param_1[4] = local_78 + uVar4 + uVar3;
  param_1[5] = local_70 + local_38 +
               (ulonglong)(CARRY8(local_78,uVar4) || CARRY8(local_78 + uVar4,uVar3));
  return param_1;
}



// FUNCTION 144d17970 FUN_144d17970 body=181 status=ok
// SIG undefined FUN_144d17970(void)

undefined8 * FUN_144d17970(undefined8 *param_1,ulonglong *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  longlong lStack_20;
  
  iVar1 = *param_3;
  FUN_144d18ba0(param_2,(longlong)iVar1,&local_58,1);
  if (iVar1 < 0) {
    bVar4 = uStack_50 < *param_2;
    uStack_50 = uStack_50 - *param_2;
    uVar2 = (ulonglong)bVar4;
    bVar4 = local_48 < param_2[1];
    uVar3 = local_48 - param_2[1];
    local_48 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = uStack_40 < param_2[2];
    uVar3 = uStack_40 - param_2[2];
    uStack_40 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_38 < param_2[3];
    uVar3 = local_38 - param_2[3];
    local_38 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = uStack_30 < param_2[4];
    uVar3 = uStack_30 - param_2[4];
    uStack_30 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_28 < param_2[5];
    uVar3 = local_28 - param_2[5];
    local_28 = uVar3 - uVar2;
    lStack_20 = (lStack_20 - param_2[6]) - (ulonglong)(bVar4 || uVar3 < uVar2);
  }
  *param_1 = local_58;
  param_1[1] = uStack_50;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  param_1[4] = local_38;
  param_1[5] = uStack_30;
  param_1[6] = local_28;
  param_1[7] = lStack_20;
  return param_1;
}



// FUNCTION 144d17a30 FUN_144d17a30 body=174 status=ok
// SIG undefined FUN_144d17a30(void)

void FUN_144d17a30(ulonglong *param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144d18ba0(param_1,(longlong)param_2,param_3,1);
  if ((longlong)param_1[7] < 0) {
    *(longlong *)(param_3 + 0x40) = *(longlong *)(param_3 + 0x40) - (longlong)param_2;
  }
  if (param_2 < 0) {
    uVar1 = *(ulonglong *)(param_3 + 8);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 8) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x10);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x10) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x18);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x18) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x20);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar5 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x20) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x28);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[4];
    uVar5 = uVar2 - param_1[4];
    *(ulonglong *)(param_3 + 0x28) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[5];
    uVar5 = uVar3 - param_1[5];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x38);
    uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[6];
    uVar4 = uVar2 - param_1[6];
    *(ulonglong *)(param_3 + 0x38) = uVar4 - uVar3;
    *(ulonglong *)(param_3 + 0x40) =
         (*(longlong *)(param_3 + 0x40) - param_1[7]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  }
  return;
}



// FUNCTION 144d17ae0 FUN_144d17ae0 body=374 status=ok
// SIG undefined FUN_144d17ae0(void)

bool FUN_144d17ae0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  longlong lStack_70;
  
  FUN_144d19420(param_1 + 0xc,param_2,&local_c8);
  if (*(longlong *)(param_2 + 0x38) < 0) {
    bVar3 = local_88 < param_1[0xc];
    local_88 = local_88 - param_1[0xc];
    uVar1 = (ulonglong)bVar3;
    bVar3 = uStack_80 < param_1[0xd];
    uVar2 = uStack_80 - param_1[0xd];
    uStack_80 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_78 < param_1[0xe];
    uVar2 = local_78 - param_1[0xe];
    local_78 = uVar2 - uVar1;
    lStack_70 = (lStack_70 - param_1[0xf]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  return (longlong)
         ((param_1[0xb] - lStack_70) -
         (ulonglong)
         (param_1[10] < local_78 ||
         param_1[10] - local_78 <
         (ulonglong)
         (param_1[9] < uStack_80 ||
         param_1[9] - uStack_80 <
         (ulonglong)
         (param_1[8] < local_88 ||
         param_1[8] - local_88 <
         (ulonglong)
         (param_1[7] < uStack_90 ||
         param_1[7] - uStack_90 <
         (ulonglong)
         (param_1[6] < local_98 ||
         param_1[6] - local_98 <
         (ulonglong)
         (param_1[5] < uStack_a0 ||
         param_1[5] - uStack_a0 <
         (ulonglong)
         (param_1[4] < local_a8 ||
         param_1[4] - local_a8 <
         (ulonglong)
         (param_1[3] < uStack_b0 ||
         param_1[3] - uStack_b0 <
         (ulonglong)
         (param_1[2] < local_b8 ||
         param_1[2] - local_b8 <
         (ulonglong)
         (param_1[1] < uStack_c0 || param_1[1] - uStack_c0 < (ulonglong)(*param_1 < local_c8))))))))
         )))) < 0;
}



// FUNCTION 144d17c60 FUN_144d17c60 body=967 status=ok
// SIG undefined FUN_144d17c60(void)

longlong FUN_144d17c60(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
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
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar11 = *param_1;
  local_108 = *(undefined4 *)(lVar11 + 0x20);
  uStack_104 = *(undefined4 *)(lVar11 + 0x24);
  uStack_100 = *(undefined4 *)(lVar11 + 0x28);
  uStack_fc = *(undefined4 *)(lVar11 + 0x2c);
  local_f8 = *(undefined4 *)(lVar11 + 0x30);
  uStack_f4 = *(undefined4 *)(lVar11 + 0x34);
  uStack_f0 = *(undefined4 *)(lVar11 + 0x38);
  iStack_ec = *(int *)(lVar11 + 0x3c);
  local_e8 = *(undefined4 *)(lVar11 + 0x40);
  uStack_e4 = *(undefined4 *)(lVar11 + 0x44);
  uStack_e0 = *(undefined4 *)(lVar11 + 0x48);
  uStack_dc = *(undefined4 *)(lVar11 + 0x4c);
  local_d8 = *(undefined4 *)(lVar11 + 0x50);
  uStack_d4 = *(undefined4 *)(lVar11 + 0x54);
  uStack_d0 = *(undefined4 *)(lVar11 + 0x58);
  uStack_cc = *(undefined4 *)(lVar11 + 0x5c);
  lVar3 = (longlong)(int)((param_1[1] - lVar11) / 0x68);
  local_88 = local_108;
  uStack_84 = uStack_104;
  uStack_80 = uStack_100;
  uStack_7c = uStack_fc;
  local_78 = local_f8;
  uStack_74 = uStack_f4;
  uStack_70 = uStack_f0;
  iStack_6c = iStack_ec;
  local_68 = local_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  local_58 = local_d8;
  uStack_54 = uStack_d4;
  uStack_50 = uStack_d0;
  uStack_4c = uStack_cc;
  if (1 < lVar3) {
    puVar10 = (undefined4 *)(lVar11 + 0x88);
    lVar11 = lVar3 + -1;
    do {
      uStack_10c = uStack_4c;
      uStack_110 = uStack_50;
      uStack_114 = uStack_54;
      local_118 = local_58;
      uStack_11c = uStack_5c;
      uStack_120 = uStack_60;
      uStack_124 = uStack_64;
      local_128 = local_68;
      local_188 = *puVar10;
      uStack_184 = puVar10[1];
      uStack_180 = puVar10[2];
      uStack_17c = puVar10[3];
      local_178 = puVar10[4];
      uStack_174 = puVar10[5];
      uStack_170 = puVar10[6];
      iStack_16c = puVar10[7];
      local_a8 = (undefined4)*(ulonglong *)(puVar10 + 8);
      uStack_a4 = puVar10[9];
      local_168 = *(ulonglong *)(puVar10 + 8);
      uStack_a0 = (undefined4)*(ulonglong *)(puVar10 + 10);
      uStack_9c = puVar10[0xb];
      uStack_160 = *(ulonglong *)(puVar10 + 10);
      local_98 = (undefined4)*(ulonglong *)(puVar10 + 0xc);
      uStack_94 = puVar10[0xd];
      local_158 = *(ulonglong *)(puVar10 + 0xc);
      uStack_90 = (undefined4)*(longlong *)(puVar10 + 0xe);
      uStack_8c = puVar10[0xf];
      lStack_150 = *(longlong *)(puVar10 + 0xe);
      local_148 = CONCAT44(uStack_84,local_88);
      uStack_140 = CONCAT44(uStack_7c,uStack_80);
      local_138 = CONCAT44(uStack_74,local_78);
      uStack_130 = CONCAT44(iStack_6c,uStack_70);
      local_c8 = local_188;
      uStack_c4 = uStack_184;
      uStack_c0 = uStack_180;
      uStack_bc = uStack_17c;
      local_b8 = local_178;
      uStack_b4 = uStack_174;
      uStack_b0 = uStack_170;
      iStack_ac = iStack_16c;
      FUN_144cac5a0(&local_168,&local_148,&local_1c8);
      uVar6 = local_1a8;
      uVar7 = local_198;
      uVar8 = local_1a0;
      if (uStack_130 < 0) {
        uVar6 = local_1a8 - local_168;
        uVar8 = (local_1a0 - uStack_160) - (ulonglong)(local_1a8 < local_168);
        uVar4 = (ulonglong)
                (local_1a0 < uStack_160 ||
                local_1a0 - uStack_160 < (ulonglong)(local_1a8 < local_168));
        uVar7 = (local_198 - local_158) - uVar4;
        local_190 = (local_190 - lStack_150) -
                    (ulonglong)(local_198 < local_158 || local_198 - local_158 < uVar4);
      }
      FUN_144cac5a0(&local_128,&local_188,&local_208);
      uVar4 = local_1e8;
      uVar5 = local_1e0;
      uVar9 = local_1d8;
      if (iStack_16c < 0) {
        uVar4 = local_1e8 - CONCAT44(uStack_124,local_128);
        uVar9 = (ulonglong)(local_1e8 < CONCAT44(uStack_124,local_128));
        uVar1 = local_1e0 - CONCAT44(uStack_11c,uStack_120);
        uVar5 = uVar1 - uVar9;
        uVar1 = (ulonglong)(local_1e0 < CONCAT44(uStack_11c,uStack_120) || uVar1 < uVar9);
        uVar2 = local_1d8 - CONCAT44(uStack_114,local_118);
        uVar9 = uVar2 - uVar1;
        local_1d0 = (local_1d0 - CONCAT44(uStack_10c,uStack_110)) -
                    (ulonglong)(local_1d8 < CONCAT44(uStack_114,local_118) || uVar2 < uVar1);
      }
      uVar1 = (ulonglong)
              (local_1f8 < local_1b8 ||
              local_1f8 - local_1b8 <
              (ulonglong)
              (local_200 < local_1c0 || local_200 - local_1c0 < (ulonglong)(local_208 < local_1c8)))
      ;
      lVar3 = (local_1f0 - local_1b0) - uVar1;
      if ((longlong)
          ((uVar9 - uVar7) -
          (ulonglong)
          (uVar5 < uVar8 ||
          uVar5 - uVar8 <
          (ulonglong)
          (uVar4 < uVar6 ||
          uVar4 - uVar6 < (ulonglong)(local_1f0 < local_1b0 || local_1f0 - local_1b0 < uVar1)))) < 0
         ) {
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        local_78 = local_b8;
        uStack_74 = uStack_b4;
        uStack_70 = uStack_b0;
        iStack_6c = iStack_ac;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        local_58 = local_98;
        uStack_54 = uStack_94;
        uStack_50 = uStack_90;
        uStack_4c = uStack_8c;
      }
      else {
        local_188 = local_c8;
        uStack_184 = uStack_c4;
        uStack_180 = uStack_c0;
        uStack_17c = uStack_bc;
        local_168 = CONCAT44(uStack_a4,local_a8);
        uStack_160 = CONCAT44(uStack_9c,uStack_a0);
        local_178 = local_b8;
        uStack_174 = uStack_b4;
        uStack_170 = uStack_b0;
        iStack_16c = iStack_ac;
        local_158 = CONCAT44(uStack_94,local_98);
        lStack_150 = CONCAT44(uStack_8c,uStack_90);
        local_148 = CONCAT44(uStack_104,local_108);
        uStack_140 = CONCAT44(uStack_fc,uStack_100);
        local_138 = CONCAT44(uStack_f4,local_f8);
        uStack_130 = CONCAT44(iStack_ec,uStack_f0);
        local_128 = local_e8;
        uStack_124 = uStack_e4;
        uStack_120 = uStack_e0;
        uStack_11c = uStack_dc;
        local_118 = local_d8;
        uStack_114 = uStack_d4;
        uStack_110 = uStack_d0;
        uStack_10c = uStack_cc;
        FUN_144cac5a0(&local_128,&local_188,&local_208);
        uVar6 = local_1e8;
        uVar7 = local_1d8;
        uVar8 = local_1e0;
        if (iStack_16c < 0) {
          uVar6 = local_1e8 - CONCAT44(uStack_124,local_128);
          uVar7 = (ulonglong)(local_1e8 < CONCAT44(uStack_124,local_128));
          uVar4 = local_1e0 - CONCAT44(uStack_11c,uStack_120);
          uVar8 = uVar4 - uVar7;
          uVar4 = (ulonglong)(local_1e0 < CONCAT44(uStack_11c,uStack_120) || uVar4 < uVar7);
          uVar5 = local_1d8 - CONCAT44(uStack_114,local_118);
          uVar7 = uVar5 - uVar4;
          local_1d0 = (local_1d0 - CONCAT44(uStack_10c,uStack_110)) -
                      (ulonglong)(local_1d8 < CONCAT44(uStack_114,local_118) || uVar5 < uVar4);
        }
        FUN_144cac5a0(&local_168,&local_148,&local_1c8);
        uVar4 = local_1a8;
        uVar5 = local_1a0;
        uVar9 = local_198;
        if (uStack_130 < 0) {
          uVar4 = local_1a8 - local_168;
          uVar5 = (local_1a0 - uStack_160) - (ulonglong)(local_1a8 < local_168);
          uVar1 = (ulonglong)
                  (local_1a0 < uStack_160 ||
                  local_1a0 - uStack_160 < (ulonglong)(local_1a8 < local_168));
          uVar9 = (local_198 - local_158) - uVar1;
          local_190 = (local_190 - lStack_150) -
                      (ulonglong)(local_198 < local_158 || local_198 - local_158 < uVar1);
        }
        uVar1 = (ulonglong)
                (local_1b8 < local_1f8 ||
                local_1b8 - local_1f8 <
                (ulonglong)
                (local_1c0 < local_200 || local_1c0 - local_200 < (ulonglong)(local_1c8 < local_208)
                ));
        lVar3 = (local_1b0 - local_1f0) - uVar1;
        if ((longlong)
            ((uVar9 - uVar7) -
            (ulonglong)
            (uVar5 < uVar8 ||
            uVar5 - uVar8 <
            (ulonglong)
            (uVar4 < uVar6 ||
            uVar4 - uVar6 < (ulonglong)(local_1b0 < local_1f0 || local_1b0 - local_1f0 < uVar1)))) <
            0) {
          local_108 = local_c8;
          uStack_104 = uStack_c4;
          uStack_100 = uStack_c0;
          uStack_fc = uStack_bc;
          local_f8 = local_b8;
          uStack_f4 = uStack_b4;
          uStack_f0 = uStack_b0;
          iStack_ec = iStack_ac;
          local_e8 = local_a8;
          uStack_e4 = uStack_a4;
          uStack_e0 = uStack_a0;
          uStack_dc = uStack_9c;
          local_d8 = local_98;
          uStack_d4 = uStack_94;
          uStack_d0 = uStack_90;
          uStack_cc = uStack_8c;
        }
      }
      puVar10 = puVar10 + 0x1a;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *param_2 = local_88;
  param_2[1] = uStack_84;
  param_2[2] = uStack_80;
  param_2[3] = uStack_7c;
  param_2[4] = local_78;
  param_2[5] = uStack_74;
  param_2[6] = uStack_70;
  param_2[7] = iStack_6c;
  param_2[8] = local_68;
  param_2[9] = uStack_64;
  param_2[10] = uStack_60;
  param_2[0xb] = uStack_5c;
  param_2[0xc] = local_58;
  param_2[0xd] = uStack_54;
  param_2[0xe] = uStack_50;
  param_2[0xf] = uStack_4c;
  *param_3 = local_108;
  param_3[1] = uStack_104;
  param_3[2] = uStack_100;
  param_3[3] = uStack_fc;
  param_3[4] = local_f8;
  param_3[5] = uStack_f4;
  param_3[6] = uStack_f0;
  param_3[7] = iStack_ec;
  param_3[8] = local_e8;
  param_3[9] = uStack_e4;
  param_3[10] = uStack_e0;
  param_3[0xb] = uStack_dc;
  param_3[0xc] = local_d8;
  param_3[0xd] = uStack_d4;
  param_3[0xe] = uStack_d0;
  param_3[0xf] = uStack_cc;
  return lVar3;
}



// FUNCTION 144d18030 FUN_144d18030 body=139 status=ok
// SIG undefined FUN_144d18030(void)

bool FUN_144d18030(undefined4 param_1,ulonglong *param_2)

{
  ulonglong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [16];
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = param_2[4];
  uStack_20 = param_2[5];
  local_18 = (undefined4)param_2[6];
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = (undefined4)param_2[7];
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_144ccf3e0(&local_28,param_1,&local_78);
  return (longlong)
         ((param_2[3] - local_68._8_8_) -
         (ulonglong)
         (param_2[2] < local_68._0_8_ ||
         param_2[2] - local_68._0_8_ <
         (ulonglong)
         (param_2[1] < uStack_70 || param_2[1] - uStack_70 < (ulonglong)(*param_2 < local_78)))) < 0
  ;
}



// FUNCTION 144d180c0 FUN_144d180c0 body=720 status=ok
// SIG undefined FUN_144d180c0(void)

ulonglong FUN_144d180c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar9 = *(int *)(param_2 + 8) - *(int *)(param_3 + 8);
  iVar10 = *(int *)(param_3 + 4) - *(int *)(param_2 + 4);
  lVar8 = (longlong)*(int *)(param_2 + 8) * (longlong)iVar10 +
          (longlong)*(int *)(param_2 + 4) * (longlong)iVar9;
  if ((longlong)*(int *)(param_4 + 8) * (longlong)iVar10 +
      (longlong)*(int *)(param_4 + 4) * (longlong)iVar9 < lVar8) {
    iVar9 = -iVar9;
    iVar10 = -iVar10;
    lVar8 = -lVar8;
  }
  uVar13 = *(ulonglong *)(param_1 + 0x10);
  iVar1 = *(int *)(((longlong)iVar10 >> 0x3f & 0xfffffffffffffffcU) + 0x24 + param_1);
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  uVar7 = uVar2;
  while( true ) {
    if (uVar13 == uVar2) {
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    local_1c8 = *(undefined4 *)(uVar13 + 0x40);
    uStack_1c4 = *(undefined4 *)(uVar13 + 0x44);
    uStack_1c0 = *(undefined4 *)(uVar13 + 0x48);
    uStack_1bc = *(undefined4 *)(uVar13 + 0x4c);
    local_1b8 = *(undefined8 *)(uVar13 + 0x50);
    uStack_1b0 = *(undefined8 *)(uVar13 + 0x58);
    local_1e8 = *(undefined4 *)(uVar13 + 0x20);
    uStack_1e4 = *(undefined4 *)(uVar13 + 0x24);
    uStack_1e0 = *(undefined4 *)(uVar13 + 0x28);
    uStack_1dc = *(undefined4 *)(uVar13 + 0x2c);
    local_1d8 = *(undefined4 *)(uVar13 + 0x30);
    uStack_1d4 = *(undefined4 *)(uVar13 + 0x34);
    uStack_1d0 = *(undefined4 *)(uVar13 + 0x38);
    uStack_1cc = *(undefined4 *)(uVar13 + 0x3c);
    local_180 = local_1c8;
    uStack_17c = uStack_1c4;
    uStack_178 = uStack_1c0;
    uStack_174 = uStack_1bc;
    local_170 = local_1b8;
    uStack_168 = uStack_1b0;
    FUN_147e5f6f6(&local_1e8,iVar9,&local_1a8,1);
    uVar4 = local_198;
    uVar5 = local_1a0;
    uVar7 = local_1a8;
    uStack_68 = CONCAT44(uStack_174,uStack_178);
    local_1f8 = (undefined4)local_188;
    uStack_1f4 = (undefined4)((ulonglong)local_188 >> 0x20);
    local_60 = (undefined4)local_170;
    uStack_5c = local_170._4_4_;
    uStack_58 = (undefined4)uStack_168;
    uStack_54 = uStack_168._4_4_;
    local_158 = local_1a8;
    uStack_150 = local_1a0;
    local_148 = local_198;
    uStack_140 = local_190;
    uStack_78 = local_1f8;
    uStack_74 = uStack_1f4;
    local_70 = CONCAT44(uStack_17c,local_180);
    local_138._0_4_ = local_1f8;
    local_138._4_4_ = uStack_1f4;
    uStack_130 = local_180;
    uStack_12c = uStack_17c;
    local_118 = (undefined4)uStack_168;
    uStack_114 = uStack_168._4_4_;
    local_128 = uStack_178;
    uStack_124 = uStack_174;
    uStack_120 = (undefined4)local_170;
    uStack_11c = local_170._4_4_;
    FUN_144d19010(&uStack_130,(longlong)iVar1 * (longlong)iVar10,&local_1e8);
    uVar14 = uVar7 + CONCAT44(uStack_1e4,local_1e8);
    uStack_d8 = CONCAT44(uStack_174,uStack_178);
    uVar7 = (ulonglong)CARRY8(uVar7,CONCAT44(uStack_1e4,local_1e8));
    uVar3 = uVar5 + CONCAT44(uStack_1dc,uStack_1e0);
    uVar11 = uVar3 + uVar7;
    uVar7 = (ulonglong)(CARRY8(uVar5,CONCAT44(uStack_1dc,uStack_1e0)) || CARRY8(uVar3,uVar7));
    uVar3 = uVar4 + CONCAT44(uStack_1d4,local_1d8);
    uVar12 = uVar3 + uVar7;
    uVar7 = (ulonglong)(CARRY8(uVar4,CONCAT44(uStack_1d4,local_1d8)) || CARRY8(uVar3,uVar7));
    uVar3 = local_190 + CONCAT44(uStack_1cc,uStack_1d0);
    uVar5 = uVar3 + uVar7;
    lVar6 = local_188 + CONCAT44(uStack_1c4,local_1c8) +
            (ulonglong)(CARRY8(local_190,CONCAT44(uStack_1cc,uStack_1d0)) || CARRY8(uVar3,uVar7));
    local_d0 = (undefined4)local_170;
    uStack_cc = local_170._4_4_;
    uStack_c8 = (undefined4)uStack_168;
    uStack_c4 = uStack_168._4_4_;
    local_e0 = CONCAT44(uStack_17c,local_180);
    uStack_130 = local_180;
    uStack_12c = uStack_17c;
    local_128 = uStack_178;
    uStack_124 = uStack_174;
    uStack_120 = (undefined4)local_170;
    uStack_11c = local_170._4_4_;
    local_118 = (undefined4)uStack_168;
    uStack_114 = uStack_168._4_4_;
    local_158 = uVar14;
    uStack_150 = uVar11;
    local_148 = uVar12;
    uStack_140 = uVar5;
    uStack_e8 = lVar6;
    local_138 = lVar6;
    FUN_144d19010(&uStack_130,lVar8,&local_1e8);
    uVar7 = (lVar6 - CONCAT44(uStack_1c4,local_1c8)) -
            (ulonglong)
            (uVar5 < CONCAT44(uStack_1cc,uStack_1d0) ||
            uVar5 - CONCAT44(uStack_1cc,uStack_1d0) <
            (ulonglong)
            (uVar12 < CONCAT44(uStack_1d4,local_1d8) ||
            uVar12 - CONCAT44(uStack_1d4,local_1d8) <
            (ulonglong)
            (uVar11 < CONCAT44(uStack_1dc,uStack_1e0) ||
            uVar11 - CONCAT44(uStack_1dc,uStack_1e0) <
            (ulonglong)(uVar14 < CONCAT44(uStack_1e4,local_1e8)))));
    if (-1 < (longlong)uVar7) break;
    uVar13 = uVar13 + 0x68;
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 144d18390 FUN_144d18390 body=999 status=ok
// SIG undefined FUN_144d18390(void)

longlong FUN_144d18390(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  int iStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  puVar1 = (undefined4 *)*param_1;
  local_118 = *puVar1;
  uStack_114 = puVar1[1];
  uStack_110 = puVar1[2];
  uStack_10c = puVar1[3];
  local_108 = puVar1[4];
  uStack_104 = puVar1[5];
  uStack_100 = puVar1[6];
  iStack_fc = puVar1[7];
  local_f8 = puVar1[0x10];
  uStack_f4 = puVar1[0x11];
  uStack_f0 = puVar1[0x12];
  uStack_ec = puVar1[0x13];
  local_e8 = puVar1[0x14];
  uStack_e4 = puVar1[0x15];
  uStack_e0 = puVar1[0x16];
  uStack_dc = puVar1[0x17];
  lVar4 = (longlong)(int)((param_1[1] - (longlong)puVar1) / 0x68);
  local_98 = local_118;
  uStack_94 = uStack_114;
  uStack_90 = uStack_110;
  uStack_8c = uStack_10c;
  local_88 = local_108;
  uStack_84 = uStack_104;
  uStack_80 = uStack_100;
  iStack_7c = iStack_fc;
  local_78 = local_f8;
  uStack_74 = uStack_f4;
  uStack_70 = uStack_f0;
  uStack_6c = uStack_ec;
  local_68 = local_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  if (1 < lVar4) {
    lVar11 = lVar4 + -1;
    puVar12 = (ulonglong *)(puVar1 + 0x2a);
    do {
      uStack_11c = uStack_5c;
      uStack_120 = uStack_60;
      uStack_124 = uStack_64;
      local_128 = local_68;
      uStack_12c = uStack_6c;
      uStack_130 = uStack_70;
      uStack_134 = uStack_74;
      local_138 = local_78;
      local_198 = puVar1[0x1a];
      uStack_194 = puVar1[0x1b];
      uStack_190 = puVar1[0x1c];
      uStack_18c = puVar1[0x1d];
      local_188 = puVar1[0x1e];
      uStack_184 = puVar1[0x1f];
      uStack_180 = puVar1[0x20];
      iStack_17c = puVar1[0x21];
      local_b8 = (undefined4)*puVar12;
      uStack_b4 = *(undefined4 *)((longlong)puVar12 + 4);
      local_178 = *puVar12;
      uStack_b0 = (undefined4)puVar12[1];
      uStack_ac = *(undefined4 *)((longlong)puVar12 + 0xc);
      uStack_170 = puVar12[1];
      local_a8 = (undefined4)puVar12[2];
      uStack_a4 = *(undefined4 *)((longlong)puVar12 + 0x14);
      local_168 = puVar12[2];
      uStack_a0 = (undefined4)puVar12[3];
      uStack_9c = *(undefined4 *)((longlong)puVar12 + 0x1c);
      uStack_160 = puVar12[3];
      local_158 = CONCAT44(uStack_94,local_98);
      uStack_150 = CONCAT44(uStack_8c,uStack_90);
      local_148 = CONCAT44(uStack_84,local_88);
      uStack_140 = CONCAT44(iStack_7c,uStack_80);
      local_d8 = local_198;
      uStack_d4 = uStack_194;
      uStack_d0 = uStack_190;
      uStack_cc = uStack_18c;
      local_c8 = local_188;
      uStack_c4 = uStack_184;
      uStack_c0 = uStack_180;
      iStack_bc = iStack_17c;
      FUN_144cac5a0(&local_178,&local_158,&local_1d8);
      uVar7 = local_1b8;
      uVar8 = local_1a8;
      uVar9 = local_1b0;
      if (uStack_140 < 0) {
        uVar7 = local_1b8 - local_178;
        uVar9 = (local_1b0 - uStack_170) - (ulonglong)(local_1b8 < local_178);
        uVar5 = (ulonglong)
                (local_1b0 < uStack_170 ||
                local_1b0 - uStack_170 < (ulonglong)(local_1b8 < local_178));
        uVar8 = (local_1a8 - local_168) - uVar5;
        local_1a0 = (local_1a0 - uStack_160) -
                    (ulonglong)(local_1a8 < local_168 || local_1a8 - local_168 < uVar5);
      }
      FUN_144cac5a0(&local_138,&local_198,&local_218);
      uVar5 = local_1f8;
      uVar6 = local_1f0;
      uVar10 = local_1e8;
      if (iStack_17c < 0) {
        uVar5 = local_1f8 - CONCAT44(uStack_134,local_138);
        uVar10 = (ulonglong)(local_1f8 < CONCAT44(uStack_134,local_138));
        uVar2 = local_1f0 - CONCAT44(uStack_12c,uStack_130);
        uVar6 = uVar2 - uVar10;
        uVar2 = (ulonglong)(local_1f0 < CONCAT44(uStack_12c,uStack_130) || uVar2 < uVar10);
        uVar3 = local_1e8 - CONCAT44(uStack_124,local_128);
        uVar10 = uVar3 - uVar2;
        local_1e0 = (local_1e0 - CONCAT44(uStack_11c,uStack_120)) -
                    (ulonglong)(local_1e8 < CONCAT44(uStack_124,local_128) || uVar3 < uVar2);
      }
      uVar2 = (ulonglong)
              (local_208 < local_1c8 ||
              local_208 - local_1c8 <
              (ulonglong)
              (local_210 < local_1d0 || local_210 - local_1d0 < (ulonglong)(local_218 < local_1d8)))
      ;
      lVar4 = (local_200 - local_1c0) - uVar2;
      if ((longlong)
          ((uVar10 - uVar8) -
          (ulonglong)
          (uVar6 < uVar9 ||
          uVar6 - uVar9 <
          (ulonglong)
          (uVar5 < uVar7 ||
          uVar5 - uVar7 < (ulonglong)(local_200 < local_1c0 || local_200 - local_1c0 < uVar2)))) < 0
         ) {
        local_98 = local_d8;
        uStack_94 = uStack_d4;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        iStack_7c = iStack_bc;
        local_78 = local_b8;
        uStack_74 = uStack_b4;
        uStack_70 = uStack_b0;
        uStack_6c = uStack_ac;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
      }
      else {
        local_198 = local_d8;
        uStack_194 = uStack_d4;
        uStack_190 = uStack_d0;
        uStack_18c = uStack_cc;
        local_178 = CONCAT44(uStack_b4,local_b8);
        uStack_170 = CONCAT44(uStack_ac,uStack_b0);
        local_188 = local_c8;
        uStack_184 = uStack_c4;
        uStack_180 = uStack_c0;
        iStack_17c = iStack_bc;
        local_168 = CONCAT44(uStack_a4,local_a8);
        uStack_160 = CONCAT44(uStack_9c,uStack_a0);
        local_158 = CONCAT44(uStack_114,local_118);
        uStack_150 = CONCAT44(uStack_10c,uStack_110);
        local_148 = CONCAT44(uStack_104,local_108);
        uStack_140 = CONCAT44(iStack_fc,uStack_100);
        local_138 = local_f8;
        uStack_134 = uStack_f4;
        uStack_130 = uStack_f0;
        uStack_12c = uStack_ec;
        local_128 = local_e8;
        uStack_124 = uStack_e4;
        uStack_120 = uStack_e0;
        uStack_11c = uStack_dc;
        FUN_144cac5a0(&local_138,&local_198,&local_218);
        uVar7 = local_1f8;
        uVar8 = local_1e8;
        uVar9 = local_1f0;
        if (iStack_17c < 0) {
          uVar7 = local_1f8 - CONCAT44(uStack_134,local_138);
          uVar8 = (ulonglong)(local_1f8 < CONCAT44(uStack_134,local_138));
          uVar5 = local_1f0 - CONCAT44(uStack_12c,uStack_130);
          uVar9 = uVar5 - uVar8;
          uVar5 = (ulonglong)(local_1f0 < CONCAT44(uStack_12c,uStack_130) || uVar5 < uVar8);
          uVar6 = local_1e8 - CONCAT44(uStack_124,local_128);
          uVar8 = uVar6 - uVar5;
          local_1e0 = (local_1e0 - CONCAT44(uStack_11c,uStack_120)) -
                      (ulonglong)(local_1e8 < CONCAT44(uStack_124,local_128) || uVar6 < uVar5);
        }
        FUN_144cac5a0(&local_178,&local_158,&local_1d8);
        uVar5 = local_1b8;
        uVar6 = local_1b0;
        uVar10 = local_1a8;
        if (uStack_140 < 0) {
          uVar5 = local_1b8 - local_178;
          uVar6 = (local_1b0 - uStack_170) - (ulonglong)(local_1b8 < local_178);
          uVar2 = (ulonglong)
                  (local_1b0 < uStack_170 ||
                  local_1b0 - uStack_170 < (ulonglong)(local_1b8 < local_178));
          uVar10 = (local_1a8 - local_168) - uVar2;
          local_1a0 = (local_1a0 - uStack_160) -
                      (ulonglong)(local_1a8 < local_168 || local_1a8 - local_168 < uVar2);
        }
        uVar2 = (ulonglong)
                (local_1c8 < local_208 ||
                local_1c8 - local_208 <
                (ulonglong)
                (local_1d0 < local_210 || local_1d0 - local_210 < (ulonglong)(local_1d8 < local_218)
                ));
        lVar4 = (local_1c0 - local_200) - uVar2;
        if ((longlong)
            ((uVar10 - uVar8) -
            (ulonglong)
            (uVar6 < uVar9 ||
            uVar6 - uVar9 <
            (ulonglong)
            (uVar5 < uVar7 ||
            uVar5 - uVar7 < (ulonglong)(local_1c0 < local_200 || local_1c0 - local_200 < uVar2)))) <
            0) {
          local_118 = local_d8;
          uStack_114 = uStack_d4;
          uStack_110 = uStack_d0;
          uStack_10c = uStack_cc;
          local_108 = local_c8;
          uStack_104 = uStack_c4;
          uStack_100 = uStack_c0;
          iStack_fc = iStack_bc;
          local_f8 = local_b8;
          uStack_f4 = uStack_b4;
          uStack_f0 = uStack_b0;
          uStack_ec = uStack_ac;
          local_e8 = local_a8;
          uStack_e4 = uStack_a4;
          uStack_e0 = uStack_a0;
          uStack_dc = uStack_9c;
        }
      }
      puVar12 = puVar12 + 0xd;
      lVar11 = lVar11 + -1;
      puVar1 = puVar1 + 0x1a;
    } while (lVar11 != 0);
  }
  *param_2 = local_98;
  param_2[1] = uStack_94;
  param_2[2] = uStack_90;
  param_2[3] = uStack_8c;
  param_2[4] = local_88;
  param_2[5] = uStack_84;
  param_2[6] = uStack_80;
  param_2[7] = iStack_7c;
  param_2[8] = local_78;
  param_2[9] = uStack_74;
  param_2[10] = uStack_70;
  param_2[0xb] = uStack_6c;
  param_2[0xc] = local_68;
  param_2[0xd] = uStack_64;
  param_2[0xe] = uStack_60;
  param_2[0xf] = uStack_5c;
  *param_3 = local_118;
  param_3[1] = uStack_114;
  param_3[2] = uStack_110;
  param_3[3] = uStack_10c;
  param_3[4] = local_108;
  param_3[5] = uStack_104;
  param_3[6] = uStack_100;
  param_3[7] = iStack_fc;
  param_3[8] = local_f8;
  param_3[9] = uStack_f4;
  param_3[10] = uStack_f0;
  param_3[0xb] = uStack_ec;
  param_3[0xc] = local_e8;
  param_3[0xd] = uStack_e4;
  param_3[0xe] = uStack_e0;
  param_3[0xf] = uStack_dc;
  return lVar4;
}



// FUNCTION 144d18780 FUN_144d18780 body=737 status=ok
// SIG undefined FUN_144d18780(void)

ulonglong FUN_144d18780(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar10 = param_2[2] - param_3[2];
  iVar11 = *param_3 - *param_2;
  lVar9 = (longlong)param_2[2] * (longlong)iVar11 + (longlong)*param_2 * (longlong)iVar10;
  if ((longlong)param_4[2] * (longlong)iVar11 + (longlong)iVar10 * (longlong)*param_4 < lVar9) {
    iVar10 = -iVar10;
    iVar11 = -iVar11;
    lVar9 = -lVar9;
  }
  puVar14 = *(undefined4 **)(param_1 + 0x10);
  iVar1 = *(int *)(((longlong)iVar11 >> 0x3f & 0xfffffffffffffffcU) + 0x24 + param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  puVar8 = puVar2;
  while( true ) {
    if (puVar14 == puVar2) {
      return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
    }
    local_d8 = *(undefined8 *)(puVar14 + 0xc);
    uStack_d0 = *(undefined8 *)(puVar14 + 0xe);
    local_1b8 = *(undefined8 *)(puVar14 + 0x14);
    uStack_1b0 = *(undefined8 *)(puVar14 + 0x16);
    local_1e8 = *puVar14;
    uStack_1e4 = puVar14[1];
    uStack_1e0 = puVar14[2];
    uStack_1dc = puVar14[3];
    local_1d8 = puVar14[4];
    uStack_1d4 = puVar14[5];
    uStack_1d0 = puVar14[6];
    uStack_1cc = puVar14[7];
    local_e8._0_4_ = puVar14[8];
    local_e8._4_4_ = puVar14[9];
    uStack_e0 = *(undefined8 *)(puVar14 + 10);
    local_1c8 = puVar14[0x10];
    uStack_1c4 = puVar14[0x11];
    uStack_1c0 = puVar14[0x12];
    uStack_1bc = puVar14[0x13];
    local_180 = local_1c8;
    uStack_17c = uStack_1c4;
    uStack_178 = uStack_1c0;
    uStack_174 = uStack_1bc;
    local_170 = local_1b8;
    uStack_168 = uStack_1b0;
    FUN_147e5f6f6(&local_1e8,iVar10,&local_1a8,1);
    uVar5 = local_198;
    uVar6 = local_1a0;
    uVar3 = local_1a8;
    uStack_68 = CONCAT44(uStack_174,uStack_178);
    local_1f8 = (undefined4)local_188;
    uStack_1f4 = (undefined4)((ulonglong)local_188 >> 0x20);
    local_60 = (undefined4)local_170;
    uStack_5c = local_170._4_4_;
    uStack_58 = (undefined4)uStack_168;
    uStack_54 = uStack_168._4_4_;
    local_158 = local_1a8;
    uStack_150 = local_1a0;
    local_148 = local_198;
    uStack_140 = local_190;
    uStack_78 = local_1f8;
    uStack_74 = uStack_1f4;
    local_70 = CONCAT44(uStack_17c,local_180);
    local_138._0_4_ = local_1f8;
    local_138._4_4_ = uStack_1f4;
    uStack_130 = local_180;
    uStack_12c = uStack_17c;
    local_118 = (undefined4)uStack_168;
    uStack_114 = uStack_168._4_4_;
    local_128 = uStack_178;
    uStack_124 = uStack_174;
    uStack_120 = (undefined4)local_170;
    uStack_11c = local_170._4_4_;
    FUN_144d19010(&uStack_130,(longlong)iVar1 * (longlong)iVar11,&local_1e8);
    uVar15 = uVar3 + CONCAT44(uStack_1e4,local_1e8);
    local_d8 = CONCAT44(uStack_174,uStack_178);
    uVar3 = (ulonglong)CARRY8(uVar3,CONCAT44(uStack_1e4,local_1e8));
    uVar4 = uVar6 + CONCAT44(uStack_1dc,uStack_1e0);
    uVar12 = uVar4 + uVar3;
    uVar3 = (ulonglong)(CARRY8(uVar6,CONCAT44(uStack_1dc,uStack_1e0)) || CARRY8(uVar4,uVar3));
    uVar4 = uVar5 + CONCAT44(uStack_1d4,local_1d8);
    uVar13 = uVar4 + uVar3;
    uVar3 = (ulonglong)(CARRY8(uVar5,CONCAT44(uStack_1d4,local_1d8)) || CARRY8(uVar4,uVar3));
    uVar4 = local_190 + CONCAT44(uStack_1cc,uStack_1d0);
    uVar6 = uVar4 + uVar3;
    lVar7 = local_188 + CONCAT44(uStack_1c4,local_1c8) +
            (ulonglong)(CARRY8(local_190,CONCAT44(uStack_1cc,uStack_1d0)) || CARRY8(uVar4,uVar3));
    uStack_120 = (undefined4)local_170;
    uStack_d0 = local_170;
    uStack_c8 = (undefined4)uStack_168;
    uStack_c4 = uStack_168._4_4_;
    uStack_e0 = CONCAT44(uStack_17c,local_180);
    uStack_130 = local_180;
    uStack_12c = uStack_17c;
    local_128 = uStack_178;
    uStack_124 = uStack_174;
    uStack_11c = local_170._4_4_;
    local_118 = (undefined4)uStack_168;
    uStack_114 = uStack_168._4_4_;
    local_158 = uVar15;
    uStack_150 = uVar12;
    local_148 = uVar13;
    uStack_140 = uVar6;
    local_e8 = lVar7;
    local_138 = lVar7;
    FUN_144d19010(&uStack_130,lVar9,&local_1e8);
    puVar8 = (undefined4 *)
             ((lVar7 - CONCAT44(uStack_1c4,local_1c8)) -
             (ulonglong)
             (uVar6 < CONCAT44(uStack_1cc,uStack_1d0) ||
             uVar6 - CONCAT44(uStack_1cc,uStack_1d0) <
             (ulonglong)
             (uVar13 < CONCAT44(uStack_1d4,local_1d8) ||
             uVar13 - CONCAT44(uStack_1d4,local_1d8) <
             (ulonglong)
             (uVar12 < CONCAT44(uStack_1dc,uStack_1e0) ||
             uVar12 - CONCAT44(uStack_1dc,uStack_1e0) <
             (ulonglong)(uVar15 < CONCAT44(uStack_1e4,local_1e8))))));
    if (-1 < (longlong)puVar8) break;
    puVar14 = puVar14 + 0x1a;
  }
  return (ulonglong)puVar8 & 0xffffffffffffff00;
}



// FUNCTION 144d18a70 FUN_144d18a70 body=304 status=ok
// SIG undefined FUN_144d18a70(void)

uint * FUN_144d18a70(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = *param_2;
  *param_1 = *param_3;
  iVar1 = (*(code *)PTR_FUN_14c6da350)((-uVar5 & uVar5) - 1);
  iVar2 = (*(code *)PTR_FUN_14c6da350)(0xffffffff);
  if (0x1f < iVar1) {
    iVar1 = iVar2 + 0x20;
  }
  iVar2 = 0x20;
  if (iVar1 < 0x20) {
    iVar2 = iVar1;
  }
  uVar5 = uVar5 >> ((byte)iVar2 & 0x1f);
  iVar1 = (*(code *)PTR_FUN_14c6da350)((-*param_1 & *param_1) - 1);
  iVar3 = (*(code *)PTR_FUN_14c6da350)(0xffffffff);
  if (0x1f < iVar1) {
    iVar1 = iVar3 + 0x20;
  }
  iVar3 = 0x20;
  if (iVar1 < 0x20) {
    iVar3 = iVar1;
  }
  uVar4 = *param_1 >> ((byte)iVar3 & 0x1f);
  *param_1 = uVar4;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  bVar6 = uVar4 < uVar5;
  if (uVar4 != uVar5) {
    do {
      if (bVar6) {
        uVar5 = uVar5 - uVar4;
        iVar1 = (*(code *)PTR_FUN_14c6da350)((-uVar5 & uVar5) - 1);
        iVar2 = (*(code *)PTR_FUN_14c6da350)(0xffffffff);
        if (0x1f < iVar1) {
          iVar1 = iVar2 + 0x20;
        }
        iVar2 = 0;
        if (iVar1 < 0x20) {
          iVar2 = iVar1;
        }
        uVar5 = uVar5 >> ((byte)iVar2 & 0x1f);
      }
      else {
        uVar4 = uVar4 - uVar5;
        *param_1 = uVar4;
        iVar1 = (*(code *)PTR_FUN_14c6da350)((-uVar4 & uVar4) - 1);
        iVar2 = (*(code *)PTR_FUN_14c6da350)(0xffffffff);
        if (0x1f < iVar1) {
          iVar1 = iVar2 + 0x20;
        }
        iVar2 = 0;
        if (iVar1 < 0x20) {
          iVar2 = iVar1;
        }
        *param_1 = *param_1 >> ((byte)iVar2 & 0x1f);
      }
      uVar4 = *param_1;
      bVar6 = uVar4 < uVar5;
    } while (uVar4 != uVar5);
  }
  *param_1 = uVar4 << ((byte)iVar3 & 0x1f);
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 144d18ba0 FUN_144d18ba0 body=273 status=ok
// SIG undefined FUN_144d18ba0(void)

void FUN_144d18ba0(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_1;
  uVar17 = SUB168(auVar1 * auVar9,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1[1];
  uVar18 = SUB168(auVar2 * auVar10,8);
  uVar23 = param_1[1] * param_2;
  param_3[1] = uVar23 + uVar17;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1[2];
  uVar19 = SUB168(auVar3 * auVar11,8);
  uVar21 = param_1[2] * param_2;
  uVar17 = (ulonglong)CARRY8(uVar23,uVar17);
  uVar23 = uVar21 + uVar18;
  param_3[2] = uVar23 + uVar17;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1[3];
  uVar20 = SUB168(auVar4 * auVar12,8);
  uVar22 = param_1[3] * param_2;
  uVar17 = (ulonglong)(CARRY8(uVar21,uVar18) || CARRY8(uVar23,uVar17));
  uVar23 = uVar22 + uVar19;
  param_3[3] = uVar23 + uVar17;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_1[4];
  uVar18 = SUB168(auVar5 * auVar13,8);
  uVar21 = param_1[4] * param_2;
  uVar17 = (ulonglong)(CARRY8(uVar22,uVar19) || CARRY8(uVar23,uVar17));
  uVar23 = uVar21 + uVar20;
  param_3[4] = uVar23 + uVar17;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_1[5];
  uVar19 = SUB168(auVar6 * auVar14,8);
  uVar22 = param_1[5] * param_2;
  uVar17 = (ulonglong)(CARRY8(uVar21,uVar20) || CARRY8(uVar23,uVar17));
  uVar23 = uVar22 + uVar18;
  param_3[5] = uVar23 + uVar17;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_1[6];
  uVar20 = SUB168(auVar7 * auVar15,8);
  uVar21 = param_1[6] * param_2;
  uVar17 = (ulonglong)(CARRY8(uVar22,uVar18) || CARRY8(uVar23,uVar17));
  uVar23 = uVar21 + uVar19;
  param_3[6] = uVar23 + uVar17;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_1[7];
  param_2 = param_1[7] * param_2;
  uVar17 = (ulonglong)(CARRY8(uVar21,uVar19) || CARRY8(uVar23,uVar17));
  uVar23 = param_2 + uVar20;
  param_3[7] = uVar23 + uVar17;
  param_3[8] = (ulonglong)(CARRY8(param_2,uVar20) || CARRY8(uVar23,uVar17)) +
               SUB168(auVar8 * auVar16,8);
  return;
}



// FUNCTION 144d18cc0 FUN_144d18cc0 body=198 status=ok
// SIG undefined FUN_144d18cc0(void)

undefined8 * FUN_144d18cc0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  longlong lStack_10;
  
  FUN_144cac5a0(param_2,param_3,&local_48);
  if ((longlong)param_2[3] < 0) {
    bVar3 = local_28 < *param_3;
    local_28 = local_28 - *param_3;
    bVar4 = uStack_20 < param_3[1];
    uVar1 = uStack_20 - param_3[1];
    uStack_20 = uVar1 - bVar3;
    uVar1 = (ulonglong)(bVar4 || uVar1 < bVar3);
    bVar3 = local_18 < param_3[2];
    uVar2 = local_18 - param_3[2];
    local_18 = uVar2 - uVar1;
    lStack_10 = (lStack_10 - param_3[3]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  if ((longlong)param_3[3] < 0) {
    bVar3 = local_28 < *param_2;
    local_28 = local_28 - *param_2;
    bVar4 = uStack_20 < param_2[1];
    uVar1 = uStack_20 - param_2[1];
    uStack_20 = uVar1 - bVar3;
    uVar1 = (ulonglong)(bVar4 || uVar1 < bVar3);
    bVar3 = local_18 < param_2[2];
    uVar2 = local_18 - param_2[2];
    local_18 = uVar2 - uVar1;
    lStack_10 = (lStack_10 - param_2[3]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  param_1[4] = local_28;
  param_1[5] = uStack_20;
  param_1[6] = local_18;
  param_1[7] = lStack_10;
  return param_1;
}



// FUNCTION 144d18d90 FUN_144d18d90 body=325 status=ok
// SIG undefined FUN_144d18d90(void)

uint * FUN_144d18d90(uint *param_1,ulonglong *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  
  uVar6 = *param_2;
  *param_1 = *param_3;
  iVar1 = (*(code *)PTR_FUN_14c6da350)((-(uint)uVar6 & (uint)uVar6) - 1);
  uVar4 = (uint)(uVar6 >> 0x20);
  iVar2 = (*(code *)PTR_FUN_14c6da350)((-uVar4 & uVar4) - 1);
  if (0x1f < iVar1) {
    iVar1 = iVar2 + 0x20;
  }
  uVar6 = uVar6 >> ((byte)iVar1 & 0x3f);
  iVar2 = (*(code *)PTR_FUN_14c6da350)((-*param_1 & *param_1) - 1);
  iVar3 = (*(code *)PTR_FUN_14c6da350)(0xffffffff);
  if (0x1f < iVar2) {
    iVar2 = iVar3 + 0x20;
  }
  iVar3 = 0x20;
  if (iVar2 < 0x20) {
    iVar3 = iVar2;
  }
  uVar4 = *param_1 >> ((byte)iVar3 & 0x1f);
  uVar5 = (ulonglong)uVar4;
  *param_1 = uVar4;
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  if (uVar6 != uVar5) {
    do {
      if (uVar5 < uVar6) {
        uVar6 = uVar6 - (longlong)(int)uVar5;
        iVar1 = (*(code *)PTR_FUN_14c6da350)((-(uint)uVar6 & (uint)uVar6) - 1);
        uVar4 = (uint)(uVar6 >> 0x20);
        iVar2 = (*(code *)PTR_FUN_14c6da350)((-uVar4 & uVar4) - 1);
        if (0x1f < iVar1) {
          iVar1 = iVar2 + 0x20;
        }
        uVar6 = uVar6 >> ((byte)iVar1 & 0x3f);
      }
      else {
        uVar4 = (int)uVar5 - (int)uVar6;
        *param_1 = uVar4;
        iVar1 = (*(code *)PTR_FUN_14c6da350)((-uVar4 & uVar4) - 1);
        iVar2 = (*(code *)PTR_FUN_14c6da350)(0xffffffff);
        if (0x1f < iVar1) {
          iVar1 = iVar2 + 0x20;
        }
        iVar2 = 0;
        if (iVar1 < 0x20) {
          iVar2 = iVar1;
        }
        *param_1 = *param_1 >> ((byte)iVar2 & 0x1f);
      }
      uVar4 = *param_1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar6 != uVar4);
  }
  *param_1 = uVar4 << ((byte)iVar3 & 0x1f);
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 144d18ee0 FUN_144d18ee0 body=86 status=ok
// SIG undefined FUN_144d18ee0(void)

undefined8 * FUN_144d18ee0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_147e5f6f6(param_3,*param_2,&local_38,1);
  *param_1 = local_38;
  param_1[1] = local_30;
  param_1[2] = local_28;
  param_1[3] = local_20;
  param_1[4] = local_18;
  return param_1;
}



// FUNCTION 144d18f40 FUN_144d18f40 body=201 status=ok
// SIG undefined FUN_144d18f40(void)

void FUN_144d18f40(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144d190e0();
  if ((longlong)param_1[7] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x40);
    uVar2 = *param_2;
    *(ulonglong *)(param_3 + 0x40) = uVar1 - *param_2;
    uVar3 = *(ulonglong *)(param_3 + 0x48);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_2[1];
    uVar5 = uVar3 - param_2[1];
    *(ulonglong *)(param_3 + 0x48) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x50);
    uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[2];
    uVar4 = uVar2 - param_2[2];
    *(ulonglong *)(param_3 + 0x50) = uVar4 - uVar3;
    *(ulonglong *)(param_3 + 0x58) =
         (*(longlong *)(param_3 + 0x58) - param_2[3]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  }
  if ((longlong)param_2[3] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x20);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x20) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x28);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x28) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x38);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar5 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x38) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[4];
    uVar5 = uVar2 - param_1[4];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x48);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[5];
    uVar5 = uVar3 - param_1[5];
    *(ulonglong *)(param_3 + 0x48) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x50);
    uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[6];
    uVar4 = uVar2 - param_1[6];
    *(ulonglong *)(param_3 + 0x50) = uVar4 - uVar3;
    *(ulonglong *)(param_3 + 0x58) =
         (*(longlong *)(param_3 + 0x58) - param_1[7]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  }
  return;
}



// FUNCTION 144d19010 FUN_144d19010 body=208 status=ok
// SIG undefined FUN_144d19010(void)

void FUN_144d19010(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  uVar11 = SUB168(auVar1 * auVar5,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[1];
  uVar12 = SUB168(auVar2 * auVar6,8);
  uVar14 = param_1[1] * param_2;
  param_3[1] = uVar14 + uVar11;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1[2];
  uVar13 = SUB168(auVar3 * auVar7,8);
  uVar9 = param_1[2] * param_2;
  uVar11 = (ulonglong)CARRY8(uVar14,uVar11);
  uVar14 = uVar9 + uVar12;
  param_3[2] = uVar14 + uVar11;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1[3];
  uVar10 = param_1[3] * param_2;
  uVar11 = (ulonglong)(CARRY8(uVar9,uVar12) || CARRY8(uVar14,uVar11));
  uVar14 = uVar10 + uVar13;
  uVar9 = uVar14 + uVar11;
  param_3[3] = uVar9;
  param_3[4] = (ulonglong)(CARRY8(uVar10,uVar13) || CARRY8(uVar14,uVar11)) +
               SUB168(auVar4 * auVar8,8);
  if ((longlong)param_2 < 0) {
    uVar11 = param_3[1];
    uVar14 = *param_1;
    param_3[1] = uVar11 - *param_1;
    uVar10 = param_3[2];
    uVar14 = (ulonglong)(uVar11 < uVar14);
    uVar11 = param_1[1];
    uVar12 = uVar10 - param_1[1];
    param_3[2] = uVar12 - uVar14;
    uVar14 = (ulonglong)(uVar10 < uVar11 || uVar12 < uVar14);
    uVar11 = param_1[2];
    uVar10 = uVar9 - param_1[2];
    param_3[3] = uVar10 - uVar14;
    param_3[4] = (param_3[4] - param_1[3]) - (ulonglong)(uVar9 < uVar11 || uVar10 < uVar14);
  }
  return;
}



// FUNCTION 144d190e0 FUN_144d190e0 body=827 status=ok
// SIG undefined FUN_144d190e0(void)

void FUN_144d190e0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  int iVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong local_res8;
  ulonglong local_e8 [13];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar2 = *param_2;
  uVar38 = *param_1;
  uVar43 = param_1[1];
  lVar37 = uVar38 * uVar2;
  uVar3 = param_1[3];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar38;
  uVar39 = SUB168(auVar5 * auVar21,8);
  uVar49 = param_1[2];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar43;
  uVar40 = SUB168(auVar6 * auVar22,8);
  local_60 = uVar38;
  local_58 = uVar43;
  local_50 = uVar49;
  local_e8[1] = uVar43 * uVar2 + uVar39;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar49;
  uVar41 = SUB168(auVar7 * auVar23,8);
  uVar39 = (ulonglong)CARRY8(uVar43 * uVar2,uVar39);
  uVar4 = uVar49 * uVar2 + uVar40;
  local_e8[2] = uVar4 + uVar39;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar3;
  uVar42 = SUB168(auVar8 * auVar24,8);
  local_e8[0xc] = param_1[4];
  uVar39 = (ulonglong)(CARRY8(uVar49 * uVar2,uVar40) || CARRY8(uVar4,uVar39));
  uVar4 = uVar3 * uVar2 + uVar41;
  local_e8[3] = uVar4 + uVar39;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_e8[0xc];
  uVar40 = SUB168(auVar9 * auVar25,8);
  local_80 = param_1[5];
  uVar39 = (ulonglong)(CARRY8(uVar3 * uVar2,uVar41) || CARRY8(uVar4,uVar39));
  uVar4 = local_e8[0xc] * uVar2 + uVar42;
  local_e8[4] = uVar4 + uVar39;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = local_80;
  uVar41 = SUB168(auVar10 * auVar26,8);
  local_78 = param_1[6];
  uVar39 = (ulonglong)(CARRY8(local_e8[0xc] * uVar2,uVar42) || CARRY8(uVar4,uVar39));
  uVar4 = local_80 * uVar2 + uVar40;
  local_e8[5] = uVar4 + uVar39;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = local_78;
  uVar42 = SUB168(auVar11 * auVar27,8);
  local_70 = param_1[7];
  uVar39 = (ulonglong)(CARRY8(local_80 * uVar2,uVar40) || CARRY8(uVar4,uVar39));
  uVar4 = local_78 * uVar2 + uVar41;
  local_e8[6] = uVar4 + uVar39;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = local_70;
  local_res8 = 1;
  uVar39 = (ulonglong)(CARRY8(local_78 * uVar2,uVar41) || CARRY8(uVar4,uVar39));
  uVar4 = local_70 * uVar2 + uVar42;
  local_e8[7] = uVar4 + uVar39;
  local_e8[8] = SUB168(auVar12 * auVar28,8) +
                (ulonglong)(CARRY8(local_70 * uVar2,uVar42) || CARRY8(uVar4,uVar39));
  iVar45 = 1;
  do {
    uVar2 = param_2[local_res8];
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar38;
    uVar39 = SUB168(auVar13 * auVar29,8);
    uVar38 = uVar38 * uVar2;
    local_68 = uVar38;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar43;
    uVar40 = SUB168(auVar14 * auVar30,8);
    uVar4 = uVar43 * uVar2 + uVar39;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar2;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar49;
    uVar41 = SUB168(auVar15 * auVar31,8);
    uVar43 = (ulonglong)CARRY8(uVar43 * uVar2,uVar39);
    uVar39 = uVar49 * uVar2 + uVar40;
    uVar51 = uVar39 + uVar43;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar2;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar3;
    uVar42 = SUB168(auVar16 * auVar32,8);
    uVar43 = (ulonglong)(CARRY8(uVar49 * uVar2,uVar40) || CARRY8(uVar39,uVar43));
    uVar49 = uVar3 * uVar2 + uVar41;
    uVar50 = uVar49 + uVar43;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar2;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = local_e8[0xc];
    uVar39 = SUB168(auVar17 * auVar33,8);
    uVar43 = (ulonglong)(CARRY8(uVar3 * uVar2,uVar41) || CARRY8(uVar49,uVar43));
    uVar49 = local_e8[0xc] * uVar2 + uVar42;
    uVar41 = uVar49 + uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar2;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = local_80;
    uVar40 = SUB168(auVar18 * auVar34,8);
    uVar43 = (ulonglong)(CARRY8(local_e8[0xc] * uVar2,uVar42) || CARRY8(uVar49,uVar43));
    uVar49 = local_80 * uVar2 + uVar39;
    uVar44 = uVar49 + uVar43;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar2;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_78;
    uVar42 = SUB168(auVar19 * auVar35,8);
    uVar43 = (ulonglong)(CARRY8(local_80 * uVar2,uVar39) || CARRY8(uVar49,uVar43));
    uVar49 = local_78 * uVar2 + uVar40;
    uVar48 = uVar49 + uVar43;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar2;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = local_70;
    uVar46 = local_70 * uVar2;
    uVar39 = (ulonglong)(CARRY8(local_78 * uVar2,uVar40) || CARRY8(uVar49,uVar43));
    uVar40 = uVar46 + uVar42;
    uVar47 = uVar40 + uVar39;
    lVar1 = local_res8 + 1;
    uVar2 = local_e8[local_res8];
    local_e8[iVar45] = uVar38 + local_e8[local_res8];
    uVar38 = (ulonglong)CARRY8(uVar38,uVar2);
    uVar2 = local_e8[lVar1];
    uVar43 = uVar4 + local_e8[lVar1];
    local_e8[iVar45 + 1] = uVar43 + uVar38;
    uVar38 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar43,uVar38));
    uVar2 = local_e8[local_res8 + 2];
    uVar43 = uVar51 + local_e8[local_res8 + 2];
    local_e8[iVar45 + 2] = uVar43 + uVar38;
    uVar38 = (ulonglong)(CARRY8(uVar51,uVar2) || CARRY8(uVar43,uVar38));
    uVar2 = local_e8[local_res8 + 3];
    uVar43 = uVar50 + local_e8[local_res8 + 3];
    local_e8[iVar45 + 3] = uVar43 + uVar38;
    uVar49 = local_50;
    uVar38 = (ulonglong)(CARRY8(uVar50,uVar2) || CARRY8(uVar43,uVar38));
    uVar2 = local_e8[local_res8 + 4];
    uVar4 = uVar41 + local_e8[local_res8 + 4];
    local_e8[iVar45 + 4] = uVar4 + uVar38;
    uVar43 = local_58;
    uVar4 = (ulonglong)(CARRY8(uVar41,uVar2) || CARRY8(uVar4,uVar38));
    uVar2 = local_e8[local_res8 + 5];
    uVar41 = uVar44 + local_e8[local_res8 + 5];
    local_e8[iVar45 + 5] = uVar41 + uVar4;
    uVar38 = local_60;
    uVar4 = (ulonglong)(CARRY8(uVar44,uVar2) || CARRY8(uVar41,uVar4));
    uVar2 = local_e8[local_res8 + 6];
    uVar41 = uVar48 + local_e8[local_res8 + 6];
    local_e8[iVar45 + 6] = uVar41 + uVar4;
    uVar4 = (ulonglong)(CARRY8(uVar48,uVar2) || CARRY8(uVar41,uVar4));
    uVar2 = local_e8[local_res8 + 7];
    uVar41 = uVar47 + local_e8[local_res8 + 7];
    local_e8[iVar45 + 7] = uVar41 + uVar4;
    local_e8[iVar45 + 8] =
         SUB168(auVar20 * auVar36,8) + (ulonglong)(CARRY8(uVar46,uVar42) || CARRY8(uVar40,uVar39)) +
         (ulonglong)(CARRY8(uVar47,uVar2) || CARRY8(uVar41,uVar4));
    local_res8 = lVar1;
    iVar45 = iVar45 + 1;
  } while (lVar1 < 4);
  *param_3 = lVar37;
  param_3[1] = local_e8[1];
  param_3[2] = local_e8[2];
  param_3[3] = local_e8[3];
  param_3[4] = local_e8[4];
  param_3[5] = local_e8[5];
  param_3[6] = local_e8[6];
  param_3[7] = local_e8[7];
  param_3[8] = local_e8[8];
  param_3[9] = local_e8[9];
  param_3[10] = local_e8[10];
  param_3[0xb] = local_e8[0xb];
  return;
}



// FUNCTION 144d19420 FUN_144d19420 body=502 status=ok
// SIG undefined FUN_144d19420(void)

void FUN_144d19420(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_98 [9];
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_98[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_98[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_98[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_98[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_98[local_res8];
    local_98[iVar31] = uVar3 * uVar26 + local_98[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_98[lVar1];
    uVar9 = uVar7 + local_98[lVar1];
    local_98[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_98[local_res8 + 2];
    uVar7 = uVar33 + local_98[local_res8 + 2];
    local_98[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_98[local_res8 + 3];
    uVar7 = uVar32 + local_98[local_res8 + 3];
    local_98[iVar31 + 3] = uVar7 + uVar28;
    local_98[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 8);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_98[1];
  param_3[2] = local_98[2];
  param_3[3] = local_98[3];
  param_3[4] = local_98[4];
  param_3[5] = local_98[5];
  param_3[6] = local_98[6];
  param_3[7] = local_98[7];
  param_3[8] = local_98[8];
  param_3[9] = lStack_50;
  param_3[10] = local_48;
  param_3[0xb] = lStack_40;
  return;
}



// FUNCTION 144d19620 FUN_144d19620 body=835 status=ok
// SIG undefined FUN_144d19620(void)

uint FUN_144d19620(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  int iStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fVar9 = *(float *)(param_2 + 9) - *(float *)(param_3 + 9);
  fVar8 = (ABS(*(float *)(param_3 + 9)) + ABS(*(float *)(param_2 + 9))) * 3.5762787e-07;
  if (fVar9 < -fVar8) {
LAB_144d19947:
    uVar5 = 1;
  }
  else {
    if (fVar9 <= fVar8) {
      local_68 = param_2[8];
      uVar5 = 0;
      if (local_68 == param_3[8] && (param_2[7] == param_3[7] && param_2[6] == param_3[6])) {
        uVar3 = (ulonglong)(*param_2 < *param_3);
        uVar4 = param_2[1] - param_3[1];
        lVar6 = (param_2[2] - param_3[2]) - (ulonglong)(param_2[1] < param_3[1] || uVar4 < uVar3);
        if (lVar6 == 0) {
          uVar5 = (uint)(uVar4 == uVar3 && *param_2 == *param_3);
        }
        uVar5 = (uint)(lVar6 >> 0x3f) | 1 - uVar5;
        if (uVar5 != 0) {
          return uVar5 >> 0x1f;
        }
        return (uint)((longlong)
                      ((param_2[5] - param_3[5]) -
                      (ulonglong)
                      (param_2[4] < param_3[4] ||
                      param_2[4] - param_3[4] < (ulonglong)(param_2[3] < param_3[3]))) < 0);
      }
      local_48 = *param_3;
      uStack_40 = param_3[1];
      local_38 = (undefined4)param_3[2];
      iStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
      local_90._0_4_ = (undefined4)param_3[6];
      local_90._4_4_ = (undefined4)(param_3[6] >> 0x20);
      uStack_88._0_4_ = (undefined4)param_3[7];
      uStack_88._4_4_ = (undefined4)(param_3[7] >> 0x20);
      local_d8 = (undefined4)*param_2;
      uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_d0 = (undefined4)param_2[1];
      uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
      uStack_20 = (undefined4)param_3[8];
      uStack_1c = (undefined4)(param_3[8] >> 0x20);
      uStack_b0 = param_2[8];
      uStack_30 = (undefined4)local_90;
      uStack_2c = local_90._4_4_;
      uStack_c0 = param_2[6];
      local_b8 = param_2[7];
      local_28 = (undefined4)uStack_88;
      uStack_24 = uStack_88._4_4_;
      local_98 = (undefined4)param_2[2];
      iStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
      local_c8 = param_2[2];
      local_80 = (undefined4)uStack_b0;
      uStack_7c = (undefined4)(uStack_b0 >> 0x20);
      local_90 = uStack_c0;
      uStack_88 = local_b8;
      uVar5 = FUN_144d1eaa0(&local_d8,&local_48);
      if (uVar5 != 0) {
        return uVar5 >> 0x1f;
      }
      fVar9 = *(float *)((longlong)param_2 + 0x4c) - *(float *)((longlong)param_3 + 0x4c);
      fVar8 = (ABS(*(float *)((longlong)param_3 + 0x4c)) + ABS(*(float *)((longlong)param_2 + 0x4c))
              ) * 3.5762787e-07;
      if (fVar9 < -fVar8) goto LAB_144d19947;
      if (fVar9 <= fVar8) {
        local_90 = param_3[6];
        uStack_88 = param_3[7];
        local_a8 = param_3[3];
        uStack_a0 = param_3[4];
        local_98 = (undefined4)param_3[5];
        iStack_94 = *(int *)((longlong)param_3 + 0x2c);
        local_48 = param_2[3];
        uStack_40 = param_2[4];
        local_80 = (undefined4)param_3[8];
        uStack_7c = (undefined4)(param_3[8] >> 0x20);
        uStack_b0 = param_2[8];
        uVar3 = param_2[6];
        uVar4 = param_2[7];
        local_38 = (undefined4)param_2[5];
        iStack_34 = *(int *)((longlong)param_2 + 0x2c);
        local_c8 = param_2[5];
        uStack_c0._0_4_ = (undefined4)uVar3;
        uStack_c0._4_4_ = (undefined4)(uVar3 >> 0x20);
        local_b8._0_4_ = (undefined4)uVar4;
        local_b8._4_4_ = (undefined4)(uVar4 >> 0x20);
        uStack_20 = (undefined4)uStack_b0;
        uStack_1c = (undefined4)(uStack_b0 >> 0x20);
        local_28 = (undefined4)local_b8;
        uStack_24 = local_b8._4_4_;
        uStack_30 = (undefined4)uStack_c0;
        uStack_2c = uStack_c0._4_4_;
        uStack_c0 = uVar3;
        local_b8 = uVar4;
        FUN_147e51913(&uStack_30,&local_a8,&local_78);
        uVar3 = local_60;
        uVar4 = local_58;
        if (iStack_94 < 0) {
          uVar3 = local_60 - CONCAT44(uStack_2c,uStack_30);
          uVar1 = (ulonglong)(local_60 < CONCAT44(uStack_2c,uStack_30));
          uVar2 = local_58 - CONCAT44(uStack_24,local_28);
          uVar4 = uVar2 - uVar1;
          local_50 = (local_50 - CONCAT44(uStack_1c,uStack_20)) -
                     (ulonglong)(local_58 < CONCAT44(uStack_24,local_28) || uVar2 < uVar1);
        }
        FUN_147e51913(&local_90,&local_48,&local_d8);
        if (iStack_34 < 0) {
          bVar7 = uStack_c0 < local_90;
          uStack_c0 = uStack_c0 - local_90;
          local_b8 = (local_b8 - uStack_88) - (ulonglong)bVar7;
        }
        return (uint)((longlong)
                      ((local_b8 - uVar4) -
                      (ulonglong)
                      (uStack_c0 < uVar3 ||
                      uStack_c0 - uVar3 <
                      (ulonglong)
                      (local_c8 < local_68 ||
                      local_c8 - local_68 <
                      (ulonglong)
                      (CONCAT44(uStack_cc,uStack_d0) < local_70 ||
                      CONCAT44(uStack_cc,uStack_d0) - local_70 <
                      (ulonglong)(CONCAT44(uStack_d4,local_d8) < local_78))))) < 0);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144d19970 FUN_144d19970 body=696 status=ok
// SIG undefined FUN_144d19970(void)

ulonglong FUN_144d19970(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fVar6 = *(float *)(param_2 + 9) - *(float *)(param_3 + 9);
  fVar5 = (ABS(*(float *)(param_3 + 9)) + ABS(*(float *)(param_2 + 9))) * 3.5762787e-07;
  if (fVar5 < fVar6) {
LAB_144d19c09:
    uVar2 = 1;
  }
  else {
    if (-fVar5 <= fVar6) {
      if (param_2[8] == param_3[8] && (param_2[7] == param_3[7] && param_2[6] == param_3[6])) {
        uVar2 = (ulonglong)(*param_2 < *param_3);
        uVar1 = param_2[1] - param_3[1];
        lVar4 = (param_2[2] - param_3[2]) - (ulonglong)(param_2[1] < param_3[1] || uVar1 < uVar2);
        uVar3 = (uint)(lVar4 >> 0x3f) |
                (uint)(lVar4 != 0 || (uVar1 != uVar2 || *param_2 != *param_3));
        if (uVar3 == 0) {
          uVar2 = (ulonglong)(param_2[3] < param_3[3]);
          uVar1 = param_2[4] - param_3[4];
          lVar4 = (param_2[5] - param_3[5]) - (ulonglong)(param_2[4] < param_3[4] || uVar1 < uVar2);
          uVar3 = 0;
          if (lVar4 == 0) {
            uVar3 = (uint)(uVar1 == uVar2 && param_2[3] == param_3[3]);
          }
          uVar3 = (uint)(lVar4 >> 0x3f) | 1 - uVar3;
        }
        return (ulonglong)uVar3;
      }
      local_78 = *param_3;
      uStack_70 = param_3[1];
      local_68 = param_3[2];
      uStack_90 = (undefined4)param_3[6];
      uStack_8c = (undefined4)(param_3[6] >> 0x20);
      uStack_88 = (undefined4)param_3[7];
      uStack_84 = (undefined4)(param_3[7] >> 0x20);
      local_48 = *param_2;
      uStack_40 = param_2[1];
      uStack_50 = (undefined4)param_3[8];
      uStack_4c = (undefined4)(param_3[8] >> 0x20);
      uStack_60 = uStack_90;
      uStack_5c = uStack_8c;
      local_58 = uStack_88;
      uStack_54 = uStack_84;
      local_38 = (undefined4)param_2[2];
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_90 = (undefined4)param_2[6];
      uStack_8c = (undefined4)(param_2[6] >> 0x20);
      uStack_88 = (undefined4)param_2[7];
      uStack_84 = (undefined4)(param_2[7] >> 0x20);
      uStack_20 = (undefined4)param_2[8];
      uStack_1c = (undefined4)(param_2[8] >> 0x20);
      local_28 = uStack_88;
      uStack_24 = uStack_84;
      uStack_30 = uStack_90;
      uStack_2c = uStack_8c;
      uVar2 = FUN_144d1eaa0(&local_48,&local_78);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      fVar6 = *(float *)((longlong)param_2 + 0x4c) - *(float *)((longlong)param_3 + 0x4c);
      fVar5 = (ABS(*(float *)((longlong)param_3 + 0x4c)) + ABS(*(float *)((longlong)param_2 + 0x4c))
              ) * 3.5762787e-07;
      if (fVar5 < fVar6) goto LAB_144d19c09;
      if (-fVar5 <= fVar6) {
        local_48 = param_3[3];
        uStack_40 = param_3[4];
        local_38 = (undefined4)param_3[5];
        uStack_34 = *(undefined4 *)((longlong)param_3 + 0x2c);
        uStack_90 = (undefined4)param_3[6];
        uStack_8c = (undefined4)(param_3[6] >> 0x20);
        uStack_88 = (undefined4)param_3[7];
        uStack_84 = (undefined4)(param_3[7] >> 0x20);
        local_78 = param_2[3];
        uStack_70 = param_2[4];
        uStack_20 = (undefined4)param_3[8];
        uStack_1c = (undefined4)(param_3[8] >> 0x20);
        uStack_30 = uStack_90;
        uStack_2c = uStack_8c;
        local_28 = uStack_88;
        uStack_24 = uStack_84;
        local_68 = param_2[5];
        uStack_90 = (undefined4)param_2[6];
        uStack_8c = (undefined4)(param_2[6] >> 0x20);
        uStack_88 = (undefined4)param_2[7];
        uStack_84 = (undefined4)(param_2[7] >> 0x20);
        uStack_60 = uStack_90;
        uStack_5c = uStack_8c;
        uStack_50 = (undefined4)param_2[8];
        uStack_4c = (undefined4)(param_2[8] >> 0x20);
        local_58 = uStack_88;
        uStack_54 = uStack_84;
        uVar2 = FUN_144d1eaa0(&local_78,&local_48);
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144d19c30 FUN_144d19c30 body=969 status=ok
// SIG undefined FUN_144d19c30(void)

uint FUN_144d19c30(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  FUN_147e51913(param_2 + 0x30,param_1,&local_d8);
  uVar7 = local_b8;
  uVar8 = local_c0;
  if (*(longlong *)(param_1 + 0x10) < 0) {
    uVar8 = local_c0 - *(ulonglong *)(param_2 + 0x30);
    uVar5 = (ulonglong)(local_c0 < *(ulonglong *)(param_2 + 0x30));
    uVar6 = local_b8 - *(ulonglong *)(param_2 + 0x38);
    uVar7 = uVar6 - uVar5;
    local_b0 = (local_b0 - *(longlong *)(param_2 + 0x40)) -
               (ulonglong)(local_b8 < *(ulonglong *)(param_2 + 0x38) || uVar6 < uVar5);
  }
  puVar1 = (ulonglong *)(param_1 + 0x30);
  FUN_147e51913(puVar1,param_2,&local_188);
  uVar5 = local_170;
  uVar6 = local_168;
  if (*(longlong *)(param_2 + 0x10) < 0) {
    uVar5 = local_170 - *puVar1;
    uVar4 = local_168 - *(ulonglong *)(param_1 + 0x38);
    uVar6 = uVar4 - (local_170 < *puVar1);
    local_160 = (local_160 - *(longlong *)(param_1 + 0x40)) -
                (ulonglong)
                (local_168 < *(ulonglong *)(param_1 + 0x38) || uVar4 < (local_170 < *puVar1));
  }
  local_58 = local_188 - local_d8;
  local_50 = (local_180 - local_d0) - (ulonglong)(local_188 < local_d8);
  uVar4 = (ulonglong)
          (local_180 < local_d0 || local_180 - local_d0 < (ulonglong)(local_188 < local_d8));
  local_48 = (local_178 - local_c8) - uVar4;
  uVar4 = (ulonglong)(local_178 < local_c8 || local_178 - local_c8 < uVar4);
  local_40 = (uVar5 - uVar8) - uVar4;
  local_38 = (uVar6 - uVar7) - (ulonglong)(uVar5 < uVar8 || uVar5 - uVar8 < uVar4);
  FUN_147e51913(param_2 + 0x30,param_1 + 0x18,&local_108);
  uVar7 = local_e8;
  uVar8 = local_f0;
  if (*(longlong *)(param_1 + 0x28) < 0) {
    uVar8 = local_f0 - *(ulonglong *)(param_2 + 0x30);
    uVar5 = (ulonglong)(local_f0 < *(ulonglong *)(param_2 + 0x30));
    uVar6 = local_e8 - *(ulonglong *)(param_2 + 0x38);
    uVar7 = uVar6 - uVar5;
    local_e0 = (local_e0 - *(longlong *)(param_2 + 0x40)) -
               (ulonglong)(local_e8 < *(ulonglong *)(param_2 + 0x38) || uVar6 < uVar5);
  }
  FUN_147e51913(puVar1,param_2 + 0x18,&local_188);
  uVar5 = local_170;
  uVar6 = local_168;
  if (*(longlong *)(param_2 + 0x28) < 0) {
    uVar5 = local_170 - *puVar1;
    uVar4 = local_168 - *(ulonglong *)(param_1 + 0x38);
    uVar6 = uVar4 - (local_170 < *puVar1);
    local_160 = (local_160 - *(longlong *)(param_1 + 0x40)) -
                (ulonglong)
                (local_168 < *(ulonglong *)(param_1 + 0x38) || uVar4 < (local_170 < *puVar1));
  }
  local_d8 = local_188 - local_108;
  local_d0 = (local_180 - local_100) - (ulonglong)(local_188 < local_108);
  uVar4 = (ulonglong)
          (local_180 < local_100 || local_180 - local_100 < (ulonglong)(local_188 < local_108));
  local_c8 = (local_178 - local_f8) - uVar4;
  uVar4 = (ulonglong)(local_178 < local_f8 || local_178 - local_f8 < uVar4);
  local_c0 = (uVar5 - uVar8) - uVar4;
  local_b8 = (uVar6 - uVar7) - (ulonglong)(uVar5 < uVar8 || uVar5 - uVar8 < uVar4);
  FUN_147e51913(param_3 + 0x30,param_1,&local_158);
  uVar7 = local_140;
  uVar8 = local_138;
  if (*(longlong *)(param_1 + 0x10) < 0) {
    uVar7 = local_140 - *(ulonglong *)(param_3 + 0x30);
    uVar5 = (ulonglong)(local_140 < *(ulonglong *)(param_3 + 0x30));
    uVar6 = local_138 - *(ulonglong *)(param_3 + 0x38);
    uVar8 = uVar6 - uVar5;
    local_130 = (local_130 - *(longlong *)(param_3 + 0x40)) -
                (ulonglong)(local_138 < *(ulonglong *)(param_3 + 0x38) || uVar6 < uVar5);
  }
  FUN_147e51913(puVar1,param_3,&local_188);
  if (*(longlong *)(param_3 + 0x10) < 0) {
    bVar10 = local_170 < *puVar1;
    local_170 = local_170 - *puVar1;
    bVar11 = local_168 < *(ulonglong *)(param_1 + 0x38);
    uVar5 = local_168 - *(ulonglong *)(param_1 + 0x38);
    local_168 = uVar5 - bVar10;
    local_160 = (local_160 - *(longlong *)(param_1 + 0x40)) - (ulonglong)(bVar11 || uVar5 < bVar10);
  }
  local_108 = local_188 - local_158;
  local_100 = (local_180 - local_150) - (ulonglong)(local_188 < local_158);
  uVar5 = (ulonglong)
          (local_180 < local_150 || local_180 - local_150 < (ulonglong)(local_188 < local_158));
  local_f8 = (local_178 - local_148) - uVar5;
  uVar5 = (ulonglong)(local_178 < local_148 || local_178 - local_148 < uVar5);
  local_f0 = (local_170 - uVar7) - uVar5;
  local_e8 = (local_168 - uVar8) - (ulonglong)(local_170 < uVar7 || local_170 - uVar7 < uVar5);
  FUN_147e51913(param_3 + 0x30,param_1 + 0x18,&local_a8);
  uVar7 = local_90;
  uVar8 = local_88;
  if (*(longlong *)(param_1 + 0x28) < 0) {
    uVar7 = local_90 - *(ulonglong *)(param_3 + 0x30);
    uVar5 = (ulonglong)(local_90 < *(ulonglong *)(param_3 + 0x30));
    uVar6 = local_88 - *(ulonglong *)(param_3 + 0x38);
    uVar8 = uVar6 - uVar5;
    local_80 = (local_80 - *(longlong *)(param_3 + 0x40)) -
               (ulonglong)(local_88 < *(ulonglong *)(param_3 + 0x38) || uVar6 < uVar5);
  }
  FUN_147e51913(puVar1,param_3 + 0x18,&local_158);
  uVar5 = local_140;
  uVar6 = local_138;
  if (*(longlong *)(param_3 + 0x28) < 0) {
    uVar5 = local_140 - *puVar1;
    uVar4 = local_138 - *(ulonglong *)(param_1 + 0x38);
    uVar6 = uVar4 - (local_140 < *puVar1);
    local_130 = (local_130 - *(longlong *)(param_1 + 0x40)) -
                (ulonglong)
                (local_138 < *(ulonglong *)(param_1 + 0x38) || uVar4 < (local_140 < *puVar1));
  }
  local_188 = local_158 - local_a8;
  local_180 = (local_150 - local_a0) - (ulonglong)(local_158 < local_a8);
  uVar4 = (ulonglong)
          (local_150 < local_a0 || local_150 - local_a0 < (ulonglong)(local_158 < local_a8));
  local_178 = (local_148 - local_98) - uVar4;
  uVar4 = (ulonglong)(local_148 < local_98 || local_148 - local_98 < uVar4);
  local_170 = (uVar5 - uVar7) - uVar4;
  local_168 = (uVar6 - uVar8) - (ulonglong)(uVar5 < uVar7 || uVar5 - uVar7 < uVar4);
  FUN_144d1fad0(&local_d8,&local_108,&local_158);
  FUN_144d1fad0(&local_58,&local_188,&local_a8);
  uVar7 = (ulonglong)
          (local_a0 < local_150 || local_a0 - local_150 < (ulonglong)(local_a8 < local_158));
  uVar8 = (ulonglong)(local_98 < local_148 || local_98 - local_148 < uVar7);
  uVar5 = (ulonglong)(local_90 < local_140 || local_90 - local_140 < uVar8);
  uVar6 = (ulonglong)(local_88 < local_138 || local_88 - local_138 < uVar5);
  uVar4 = (ulonglong)(local_80 < local_130 || local_80 - local_130 < uVar6);
  uVar2 = (ulonglong)(local_78 < local_128 || local_78 - local_128 < uVar4);
  uVar3 = (ulonglong)(local_70 < local_120 || local_70 - local_120 < uVar2);
  lVar9 = (local_60 - local_110) - (ulonglong)(local_68 < local_118 || local_68 - local_118 < uVar3)
  ;
  return (uint)((local_68 - local_118 != uVar3 ||
                ((local_78 - local_128 != uVar4 ||
                 ((local_88 - local_138 != uVar5 ||
                  ((local_98 - local_148 != uVar7 ||
                   (local_a0 - local_150 != (ulonglong)(local_a8 < local_158) ||
                   local_a8 != local_158)) || local_90 - local_140 != uVar8)) ||
                 local_80 - local_130 != uVar6)) || local_70 - local_120 != uVar2)) || lVar9 != 0) |
         (uint)(lVar9 >> 0x3f);
}



// FUNCTION 144d1a000 FUN_144d1a000 body=440 status=ok
// SIG undefined FUN_144d1a000(void)

uint FUN_144d1a000(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 local_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  
  fVar11 = *(float *)(param_2 + 0x4c) * *(float *)(param_1 + 0x34) +
           *(float *)(param_1 + 0x30) * *(float *)(param_2 + 0x48) + *(float *)(param_1 + 0x38);
  fVar10 = (ABS(*(float *)(param_2 + 0x4c)) * ABS(*(float *)(param_1 + 0x34)) +
            ABS(*(float *)(param_2 + 0x48)) * ABS(*(float *)(param_1 + 0x30)) +
           ABS(*(float *)(param_1 + 0x38))) * 7.1525574e-07;
  if (fVar11 <= fVar10) {
    if (-fVar10 <= fVar11) {
      FUN_144cd89a0(param_2 + 0x30,param_1 + 0x20,&local_58);
      uVar7 = local_48;
      uVar8 = local_40;
      if (*(longlong *)(param_1 + 0x28) < 0) {
        uVar7 = local_48 - *(ulonglong *)(param_2 + 0x30);
        uVar3 = (ulonglong)(local_48 < *(ulonglong *)(param_2 + 0x30));
        uVar4 = local_40 - *(ulonglong *)(param_2 + 0x38);
        uVar8 = uVar4 - uVar3;
        local_38 = (local_38 - *(longlong *)(param_2 + 0x40)) -
                   (ulonglong)(local_40 < *(ulonglong *)(param_2 + 0x38) || uVar4 < uVar3);
      }
      puVar6 = (ulonglong *)FUN_144d1ebc0(local_78,param_1,param_2);
      uVar3 = (ulonglong)CARRY8(*puVar6,local_58);
      uVar1 = puVar6[1] + local_50;
      uVar4 = (ulonglong)(CARRY8(puVar6[1],local_50) || CARRY8(uVar1,uVar3));
      uVar2 = puVar6[2] + uVar7;
      lVar9 = puVar6[3] + uVar8 + (ulonglong)(CARRY8(puVar6[2],uVar7) || CARRY8(uVar2,uVar4));
      uVar5 = (uint)((uVar2 + uVar4 != 0 || (uVar1 + uVar3 != 0 || *puVar6 + local_58 != 0)) ||
                    lVar9 != 0) | (uint)(lVar9 >> 0x3f);
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144d1a1c0 FUN_144d1a1c0 body=298 status=ok
// SIG undefined FUN_144d1a1c0(void)

uint FUN_144d1a1c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  fVar7 = *(float *)(param_1 + 0x30) * *(float *)(param_2 + 0x34) -
          *(float *)(param_2 + 0x30) * *(float *)(param_1 + 0x34);
  fVar6 = (ABS(*(float *)(param_2 + 0x30)) * ABS(*(float *)(param_1 + 0x34)) +
          ABS(*(float *)(param_2 + 0x34)) * ABS(*(float *)(param_1 + 0x30))) * 4.7683716e-07;
  if (fVar6 < fVar7) {
    return 1;
  }
  if (fVar7 < -fVar6) {
    return 0xffffffff;
  }
  puVar3 = (ulonglong *)FUN_144d1f510(local_38,param_1 + 0x10,param_2);
  puVar4 = (ulonglong *)FUN_144d1f510(local_20,param_1,param_2 + 0x10);
  uVar1 = (ulonglong)(*puVar4 < *puVar3);
  uVar2 = puVar4[1] - puVar3[1];
  lVar5 = (puVar4[2] - puVar3[2]) - (ulonglong)(puVar4[1] < puVar3[1] || uVar2 < uVar1);
  return (uint)(lVar5 != 0 || (uVar2 != uVar1 || *puVar4 != *puVar3)) | (uint)(lVar5 >> 0x3f);
}



// FUNCTION 144d1a2f0 FUN_144d1a2f0 body=380 status=ok
// SIG undefined FUN_144d1a2f0(void)

longlong * FUN_144d1a2f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_50 [72];
  
  FUN_144d1fb90(&local_e0,param_2 + 0x18,param_3 + 0x18);
  FUN_144d1fb90(&local_98,param_2 + 0xc,param_3);
  puVar21 = (ulonglong *)FUN_144d1ecb0(local_50,param_2,(longlong *)(param_3 + 0x30));
  uVar25 = puVar21[6] + local_68;
  uVar2 = puVar21[7];
  uVar8 = (ulonglong)CARRY8(puVar21[6],local_68);
  uVar14 = uVar2 + local_60;
  uVar24 = uVar14 + uVar8;
  uVar3 = puVar21[8];
  uVar27 = puVar21[3] + local_80;
  uVar4 = puVar21[4];
  uVar9 = (ulonglong)CARRY8(puVar21[3],local_80);
  uVar15 = uVar4 + local_78;
  uVar26 = uVar15 + uVar9;
  uVar5 = puVar21[5];
  uVar23 = *puVar21 + local_98;
  uVar6 = puVar21[1];
  uVar10 = (ulonglong)CARRY8(*puVar21,local_98);
  uVar16 = uVar6 + local_90;
  uVar22 = uVar16 + uVar10;
  uVar7 = puVar21[2];
  uVar11 = (ulonglong)CARRY8(uVar25,local_b0);
  uVar17 = uVar24 + local_a8;
  uVar12 = (ulonglong)CARRY8(uVar27,uStack_c8);
  uVar18 = uVar26 + uStack_c0;
  uVar13 = (ulonglong)CARRY8(uVar23,local_e0);
  uVar19 = uVar22 + local_d8;
  *param_1 = uVar23 + local_e0;
  param_1[1] = uVar19 + uVar13;
  param_1[2] = uVar7 + local_88 + (ulonglong)(CARRY8(uVar6,local_90) || CARRY8(uVar16,uVar10)) +
               local_d0 + (ulonglong)(CARRY8(uVar22,local_d8) || CARRY8(uVar19,uVar13));
  param_1[3] = uVar27 + uStack_c8;
  param_1[4] = uVar18 + uVar12;
  param_1[5] = uVar5 + local_70 + (ulonglong)(CARRY8(uVar4,local_78) || CARRY8(uVar15,uVar9)) +
               lStack_b8 + (ulonglong)(CARRY8(uVar26,uStack_c0) || CARRY8(uVar18,uVar12));
  lVar1 = *(longlong *)(param_3 + 0x40);
  param_1[6] = uVar25 + local_b0;
  param_1[7] = uVar17 + uVar11;
  param_1[8] = uVar3 + local_58 + (ulonglong)(CARRY8(uVar2,local_60) || CARRY8(uVar14,uVar8)) +
               local_a0 + (ulonglong)(CARRY8(uVar24,local_a8) || CARRY8(uVar17,uVar11));
  lVar20 = *(longlong *)(param_3 + 0x38);
  param_1[9] = *(longlong *)(param_3 + 0x30);
  param_1[10] = lVar20;
  param_1[0xb] = lVar1;
  return param_1;
}



// FUNCTION 144d1a470 FUN_144d1a470 body=669 status=ok
// SIG undefined FUN_144d1a470(void)

undefined8 FUN_144d1a470(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  puVar3 = (ulonglong *)FUN_144d1f510(local_88,param_1 + 0x10,param_2);
  puVar4 = (ulonglong *)FUN_144d1f510(&local_c8,param_1,param_2 + 0x10);
  uVar12 = *puVar4 - *puVar3;
  uVar11 = (ulonglong)(*puVar4 < *puVar3);
  uVar1 = puVar4[1] - puVar3[1];
  uVar10 = uVar1 - uVar11;
  uVar11 = (puVar4[2] - puVar3[2]) - (ulonglong)(puVar4[1] < puVar3[1] || uVar1 < uVar11);
  if (uVar11 == 0 && (uVar10 == 0 && uVar12 == 0)) {
    uVar5 = 0;
  }
  else {
    local_98 = -*(longlong *)(param_2 + 0x20);
    local_90 = -(ulonglong)(*(longlong *)(param_2 + 0x20) != 0) - *(longlong *)(param_2 + 0x28);
    local_b0 = -*(longlong *)(param_1 + 0x20);
    lStack_a8 = -(ulonglong)(*(longlong *)(param_1 + 0x20) != 0) - *(longlong *)(param_1 + 0x28);
    puVar3 = (ulonglong *)FUN_144d20190(local_88,param_1 + 0x10,&local_98);
    puVar4 = (ulonglong *)FUN_144d20080(local_70,&local_b0,param_2 + 0x10);
    local_c8 = *puVar4 - *puVar3;
    uVar1 = (ulonglong)(*puVar4 < *puVar3);
    uVar2 = puVar4[1] - puVar3[1];
    lStack_c0 = uVar2 - uVar1;
    local_b8 = (puVar4[2] - puVar3[2]) - (ulonglong)(puVar4[1] < puVar3[1] || uVar2 < uVar1);
    local_b0 = -*(longlong *)(param_1 + 0x20);
    lStack_a8 = -(ulonglong)(*(longlong *)(param_1 + 0x20) != 0) - *(longlong *)(param_1 + 0x28);
    local_98 = -*(longlong *)(param_2 + 0x20);
    local_90 = -(ulonglong)(*(longlong *)(param_2 + 0x20) != 0) - *(longlong *)(param_2 + 0x28);
    local_78 = local_b8;
    puVar3 = (ulonglong *)FUN_144d20080(local_70,&local_b0,param_2);
    puVar4 = (ulonglong *)FUN_144d20190(local_58,param_1,&local_98);
    lVar7 = *puVar4 - *puVar3;
    uVar1 = (ulonglong)(*puVar4 < *puVar3);
    uVar2 = puVar4[1] - puVar3[1];
    lVar8 = uVar2 - uVar1;
    lVar9 = (puVar4[2] - puVar3[2]) - (ulonglong)(puVar4[1] < puVar3[1] || uVar2 < uVar1);
    if ((longlong)uVar11 < 0) {
      *param_3 = -local_c8;
      param_3[1] = -lStack_c0 - (ulonglong)(local_c8 != 0);
      param_3[2] = -(ulonglong)
                    (lStack_c0 != 0 || (ulonglong)-lStack_c0 < (ulonglong)(local_c8 != 0)) -
                   local_78;
      param_3[3] = -lVar7;
      param_3[4] = -lVar8 - (ulonglong)(lVar7 != 0);
      param_3[5] = -(ulonglong)(lVar8 != 0 || (ulonglong)-lVar8 < (ulonglong)(lVar7 != 0)) - lVar9;
    }
    else {
      *param_3 = local_c8;
      param_3[1] = lStack_c0;
      param_3[2] = local_b8;
      param_3[3] = lVar7;
      param_3[4] = lVar8;
      param_3[5] = lVar9;
    }
    uVar6 = (longlong)uVar11 >> 0x3f;
    uVar12 = uVar12 ^ uVar6;
    uVar10 = uVar10 ^ uVar6;
    uVar1 = (ulonglong)(uVar12 < uVar6);
    uVar2 = uVar10 - uVar6;
    param_3[6] = uVar12 - uVar6;
    param_3[7] = uVar2 - uVar1;
    uVar5 = 1;
    param_3[8] = ((uVar11 ^ uVar6) - uVar6) - (ulonglong)(uVar10 < uVar6 || uVar2 < uVar1);
  }
  return uVar5;
}



// FUNCTION 144d1a710 FUN_144d1a710 body=178 status=ok
// SIG undefined FUN_144d1a710(void)

undefined4 FUN_144d1a710(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  lVar4 = (longlong)param_2;
  iVar5 = iVar1 + param_2;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar5) {
    FUN_144cc8620((longlong *)(param_1 + 0x10),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  *(int *)(param_1 + 0x18) = iVar5;
  if (0 < param_2) {
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(param_1 + 0x10));
    do {
      puVar3[-1] = 0xffffffffffffffff;
      *puVar3 = 0xffffffffffffffff;
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff4 | 4;
      puVar3[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return uVar2;
}



// FUNCTION 144d1a7d0 FUN_144d1a7d0 body=285 status=ok
// SIG undefined FUN_144d1a7d0(void)

int FUN_144d1a7d0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x1a3c);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 0x30);
    iVar7 = iVar6 + 1;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar7) {
      FUN_144d1fd10(param_1 + 0x28,&PTR_vftable_14c6e47c0,(longlong)iVar7);
    }
    *(int *)(param_1 + 0x30) = iVar7;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a3c) =
         *(undefined4 *)((longlong)iVar6 * 0x68 + 0x60 + *(longlong *)(param_1 + 0x28));
  }
  uVar3 = param_2[1];
  puVar5 = (undefined8 *)((longlong)iVar6 * 0x68 + *(longlong *)(param_1 + 0x28));
  *puVar5 = *param_2;
  puVar5[1] = uVar3;
  uVar3 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar3;
  uVar3 = param_2[5];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar3;
  uVar3 = param_2[7];
  puVar5[6] = param_2[6];
  puVar5[7] = uVar3;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar1 = *(undefined4 *)(param_2 + 9);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar5 + 0x44) = uVar4;
  *(undefined4 *)(puVar5 + 9) = uVar1;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uVar2;
  puVar5[10] = param_2[10];
  puVar5[0xb] = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)puVar5 + 100) = 0;
  iVar7 = *(int *)(param_1 + 0x1a38);
  if (iVar7 == -1) {
    *(int *)(param_1 + 0x1a38) = iVar6;
    return iVar6;
  }
  if (iVar6 == -1) {
    *(int *)(param_1 + 0x1a38) = iVar7;
    return -1;
  }
  uVar4 = FUN_144d1a8f0(param_1,iVar7,iVar6);
  *(undefined4 *)(param_1 + 0x1a38) = uVar4;
  return iVar6;
}



// FUNCTION 144d1a8f0 FUN_144d1a8f0 body=701 status=ok
// SIG undefined FUN_144d1a8f0(void)

ulonglong FUN_144d1a8f0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar9 = (ulonglong)(int)param_2;
  lVar8 = *(longlong *)(param_1 + 10);
  lVar12 = uVar9 * 0x68;
  uVar10 = (ulonglong)(int)param_3;
  lVar11 = uVar10 * 0x68;
  puVar1 = (undefined8 *)(lVar12 + lVar8);
  puVar2 = (undefined8 *)(lVar11 + lVar8);
  if (*(char *)(lVar12 + 100 + lVar8) == '\0') {
    if (*(char *)((longlong)puVar2 + 100) == '\0') {
      local_b8 = *puVar2;
      uStack_b0 = puVar2[1];
      local_c8 = param_1[8];
      local_a8 = puVar2[2];
      uStack_a0 = puVar2[3];
      local_98 = puVar2[4];
      uStack_90 = puVar2[5];
      local_88 = puVar2[6];
      uStack_80 = puVar2[7];
      local_78 = puVar2[8];
      uStack_70 = puVar2[9];
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      local_58 = puVar1[2];
      uStack_50 = puVar1[3];
      local_48 = puVar1[4];
      uStack_40 = puVar1[5];
      local_38 = puVar1[6];
      uStack_30 = puVar1[7];
      local_28 = puVar1[8];
      uStack_20 = puVar1[9];
      local_e8 = *param_1;
      uStack_e4 = param_1[1];
      uStack_e0 = param_1[2];
      uStack_dc = param_1[3];
      local_d8 = param_1[4];
      uStack_d4 = param_1[5];
      uStack_d0 = param_1[6];
      uStack_cc = param_1[7];
      iVar7 = FUN_144d19970(&local_e8,&local_68,&local_b8);
      if (iVar7 < 0) {
        *(undefined4 *)((longlong)puVar2 + 0x5c) = *(undefined4 *)(puVar1 + 0xb);
        uVar10 = (ulonglong)param_2;
        *(uint *)(puVar1 + 0xb) = param_3;
      }
      else if (iVar7 < 1) {
        lVar5 = *(longlong *)(param_1 + 10);
        lVar8 = lVar12 + lVar5;
        iVar7 = *(int *)(lVar12 + 0x60 + lVar5);
        while (iVar7 != -1) {
          iVar7 = *(int *)(lVar11 + lVar5 + 0x60);
          if (iVar7 == -1) {
            *(uint *)(lVar11 + lVar5 + 0x60) = param_2;
            uVar6 = param_2;
            goto LAB_144d1aada;
          }
          lVar11 = (longlong)iVar7 * 0x68;
          lVar8 = (longlong)*(int *)(lVar8 + 0x60) * 0x68 + lVar5;
          iVar7 = *(int *)(lVar8 + 0x60);
        }
        *(uint *)(lVar8 + 0x60) = param_3;
        uVar6 = param_3;
        param_3 = param_2;
LAB_144d1aada:
        uVar10 = (ulonglong)param_3;
        iVar7 = *(int *)(puVar1 + 0xb);
        if (iVar7 == -1) {
LAB_144d1ab99:
          *(undefined4 *)((longlong)(int)param_3 * 0x68 + 0x58 + *(longlong *)(param_1 + 10)) =
               *(undefined4 *)(puVar2 + 0xb);
        }
        else {
          iVar3 = *(int *)(puVar2 + 0xb);
          lVar8 = *(longlong *)(param_1 + 10);
          if (iVar3 == -1) {
            *(int *)((longlong)(int)param_3 * 0x68 + 0x58 + lVar8) = iVar7;
          }
          else {
            lVar11 = (longlong)iVar7 * 0x68 + lVar8;
            iVar7 = *(int *)(lVar11 + 0x5c);
            iVar4 = iVar3;
            while (iVar7 != -1) {
              lVar12 = (longlong)iVar4 * 0x68 + lVar8;
              iVar4 = *(int *)(lVar12 + 0x5c);
              if (iVar4 == -1) {
                *(undefined4 *)(lVar12 + 0x5c) = *(undefined4 *)(puVar1 + 0xb);
                goto LAB_144d1ab99;
              }
              lVar11 = (longlong)*(int *)(lVar11 + 0x5c) * 0x68 + lVar8;
              iVar7 = *(int *)(lVar11 + 0x5c);
            }
            *(int *)(lVar11 + 0x5c) = iVar3;
            *(undefined4 *)((longlong)(int)param_3 * 0x68 + 0x58 + *(longlong *)(param_1 + 10)) =
                 *(undefined4 *)(puVar1 + 0xb);
          }
        }
        *(undefined4 *)((longlong)(int)uVar6 * 0x68 + 0x58 + *(longlong *)(param_1 + 10)) =
             0xffffffff;
      }
      else {
        *(undefined4 *)((longlong)puVar1 + 0x5c) = *(undefined4 *)(puVar2 + 0xb);
        uVar10 = (ulonglong)param_3;
        *(uint *)(puVar2 + 0xb) = param_2;
      }
    }
    else {
      iVar7 = *(int *)(puVar2 + 0xb);
      *(undefined4 *)(puVar2 + 0xc) = param_1[0x68f];
      param_1[0x68f] = param_3;
      while (iVar7 != -1) {
        lVar8 = (longlong)iVar7;
        iVar7 = *(int *)(lVar8 * 0x68 + 0x5c + *(longlong *)(param_1 + 10));
        *(undefined4 *)(lVar8 * 0x68 + 0x5c + *(longlong *)(param_1 + 10)) = 0xffffffff;
        uVar6 = FUN_144d1a8f0(param_1,uVar9 & 0xffffffff);
        uVar9 = (ulonglong)uVar6;
      }
      uVar10 = uVar9 & 0xffffffff;
    }
  }
  else {
    iVar7 = *(int *)(puVar1 + 0xb);
    *(undefined4 *)(puVar1 + 0xc) = param_1[0x68f];
    param_1[0x68f] = param_2;
    while (iVar7 != -1) {
      lVar8 = (longlong)iVar7;
      iVar7 = *(int *)(lVar8 * 0x68 + 0x5c + *(longlong *)(param_1 + 10));
      *(undefined4 *)(lVar8 * 0x68 + 0x5c + *(longlong *)(param_1 + 10)) = 0xffffffff;
      uVar6 = FUN_144d1a8f0(param_1,uVar10 & 0xffffffff);
      uVar10 = (ulonglong)uVar6;
    }
    uVar10 = uVar10 & 0xffffffff;
  }
  return uVar10;
}



// FUNCTION 144d1abb0 FUN_144d1abb0 body=910 status=ok
// SIG undefined FUN_144d1abb0(void)

uint FUN_144d1abb0(undefined4 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_2 == 0xffffffff) {
    return 0xffffffff;
  }
  do {
    uVar7 = 0xffffffff;
    uVar8 = param_2;
    while (param_2 = uVar7, uVar8 != 0xffffffff) {
      lVar11 = *(longlong *)(param_1 + 10);
      lVar15 = (longlong)(int)uVar8 * 0x68;
      uVar7 = *(uint *)(lVar15 + 0x5c + lVar11);
      uVar12 = (ulonglong)(int)uVar7;
      if (uVar7 == 0xffffffff) {
        if (param_2 == 0xffffffff) {
          return uVar8;
        }
        *(uint *)(lVar15 + lVar11 + 0x5c) = param_2;
        param_2 = uVar8;
        break;
      }
      lVar14 = uVar12 * 0x68;
      uVar3 = *(uint *)(lVar14 + 0x5c + lVar11);
      *(undefined4 *)(lVar15 + lVar11 + 0x5c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 10) + 0x5c + lVar14) = 0xffffffff;
      lVar11 = *(longlong *)(param_1 + 10);
      puVar1 = (undefined8 *)(lVar11 + lVar15);
      puVar2 = (undefined8 *)(lVar11 + lVar14);
      if (*(char *)(lVar11 + 100 + lVar15) == '\0') {
        if (*(char *)((longlong)puVar2 + 100) == '\0') {
          local_c8 = *puVar2;
          uStack_c0 = puVar2[1];
          local_d8 = param_1[8];
          local_b8 = puVar2[2];
          uStack_b0 = puVar2[3];
          local_a8 = puVar2[4];
          uStack_a0 = puVar2[5];
          local_98 = puVar2[6];
          uStack_90 = puVar2[7];
          local_88 = puVar2[8];
          uStack_80 = puVar2[9];
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          local_68 = puVar1[2];
          uStack_60 = puVar1[3];
          local_58 = puVar1[4];
          uStack_50 = puVar1[5];
          local_48 = puVar1[6];
          uStack_40 = puVar1[7];
          local_38 = puVar1[8];
          uStack_30 = puVar1[9];
          local_f8 = *param_1;
          uStack_f4 = param_1[1];
          uStack_f0 = param_1[2];
          uStack_ec = param_1[3];
          local_e8 = param_1[4];
          uStack_e4 = param_1[5];
          uStack_e0 = param_1[6];
          uStack_dc = param_1[7];
          iVar9 = FUN_144d19970(&local_f8,&local_78,&local_c8);
          if (iVar9 < 0) {
            *(undefined4 *)((longlong)puVar2 + 0x5c) = *(undefined4 *)(puVar1 + 0xb);
            *(uint *)(puVar1 + 0xb) = uVar7;
            uVar7 = uVar8;
          }
          else if (iVar9 < 1) {
            lVar6 = *(longlong *)(param_1 + 10);
            lVar11 = lVar6 + lVar15;
            iVar9 = *(int *)(lVar6 + 0x60 + lVar15);
            while (iVar9 != -1) {
              iVar9 = *(int *)(lVar6 + lVar14 + 0x60);
              if (iVar9 == -1) {
                *(uint *)(lVar6 + lVar14 + 0x60) = uVar8;
                uVar13 = uVar8;
                goto LAB_144d1ae19;
              }
              lVar14 = (longlong)iVar9 * 0x68;
              lVar11 = (longlong)*(int *)(lVar11 + 0x60) * 0x68 + lVar6;
              iVar9 = *(int *)(lVar11 + 0x60);
            }
            *(uint *)(lVar11 + 0x60) = uVar7;
            uVar13 = uVar7;
            uVar7 = uVar8;
LAB_144d1ae19:
            iVar9 = *(int *)(puVar1 + 0xb);
            if (iVar9 == -1) {
              lVar11 = (longlong)(int)uVar7 * 0x68;
              uVar10 = *(undefined4 *)(puVar2 + 0xb);
LAB_144d1ae97:
              *(undefined4 *)(lVar11 + 0x58 + *(longlong *)(param_1 + 10)) = uVar10;
            }
            else {
              iVar4 = *(int *)(puVar2 + 0xb);
              lVar11 = *(longlong *)(param_1 + 10);
              if (iVar4 != -1) {
                lVar15 = (longlong)iVar9 * 0x68 + lVar11;
                iVar9 = *(int *)(lVar15 + 0x5c);
                iVar5 = iVar4;
                while (iVar9 != -1) {
                  lVar14 = (longlong)iVar5 * 0x68 + lVar11;
                  iVar5 = *(int *)(lVar14 + 0x5c);
                  if (iVar5 == -1) {
                    *(undefined4 *)(lVar14 + 0x5c) = *(undefined4 *)(puVar1 + 0xb);
                    lVar11 = (longlong)(int)uVar7 * 0x68;
                    uVar10 = *(undefined4 *)(puVar2 + 0xb);
                    goto LAB_144d1ae97;
                  }
                  lVar15 = (longlong)*(int *)(lVar15 + 0x5c) * 0x68 + lVar11;
                  iVar9 = *(int *)(lVar15 + 0x5c);
                }
                lVar11 = (longlong)(int)uVar7 * 0x68;
                *(int *)(lVar15 + 0x5c) = iVar4;
                uVar10 = *(undefined4 *)(puVar1 + 0xb);
                goto LAB_144d1ae97;
              }
              *(int *)((longlong)(int)uVar7 * 0x68 + 0x58 + lVar11) = iVar9;
            }
            *(undefined4 *)((longlong)(int)uVar13 * 0x68 + 0x58 + *(longlong *)(param_1 + 10)) =
                 0xffffffff;
          }
          else {
            *(undefined4 *)((longlong)puVar1 + 0x5c) = *(undefined4 *)(puVar2 + 0xb);
            *(uint *)(puVar2 + 0xb) = uVar8;
          }
        }
        else {
          iVar9 = *(int *)(puVar2 + 0xb);
          *(undefined4 *)(puVar2 + 0xc) = param_1[0x68f];
          param_1[0x68f] = uVar7;
          while (uVar7 = uVar8, iVar9 != -1) {
            lVar11 = (longlong)iVar9;
            iVar9 = *(int *)(lVar11 * 0x68 + 0x5c + *(longlong *)(param_1 + 10));
            *(undefined4 *)(lVar11 * 0x68 + 0x5c + *(longlong *)(param_1 + 10)) = 0xffffffff;
            uVar8 = FUN_144d1a8f0(param_1,uVar8);
          }
        }
      }
      else {
        iVar9 = *(int *)(puVar1 + 0xb);
        *(undefined4 *)(puVar1 + 0xc) = param_1[0x68f];
        param_1[0x68f] = uVar8;
        while (iVar9 != -1) {
          lVar11 = (longlong)iVar9;
          iVar9 = *(int *)(lVar11 * 0x68 + 0x5c + *(longlong *)(param_1 + 10));
          *(undefined4 *)(lVar11 * 0x68 + 0x5c + *(longlong *)(param_1 + 10)) = 0xffffffff;
          uVar7 = FUN_144d1a8f0(param_1,uVar12 & 0xffffffff);
          uVar12 = (ulonglong)uVar7;
        }
      }
      *(uint *)((longlong)(int)uVar7 * 0x68 + 0x5c + *(longlong *)(param_1 + 10)) = param_2;
      uVar8 = uVar3;
    }
  } while( true );
}



// FUNCTION 144d1af40 FUN_144d1af40 body=273 status=ok
// SIG undefined FUN_144d1af40(void)

undefined4 * FUN_144d1af40(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  fVar2 = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0x94);
  if ((fVar2 < 0.0) || (16777216.0 <= fVar2)) {
    iVar1 = -0x7ffbfe00;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,
                  "The maximum step height must be less than half the generation domain size.");
    FUN_144bfc0d0(0x95560d5,local_208,
                  "NavMesh\\Generation\\FaceClipping\\hkaiNavMeshGenerationFaceClipping.cpp",0x21);
    FUN_144bde6e0(local_218);
    *param_2 = 0x80040200;
    return param_2;
  }
  if (*(int *)(param_1 + 0xa4) < 0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,"The face userdata striding must be nonnegative");
    FUN_144bfc0d0(0x2f0f1969,local_208,
                  "NavMesh\\Generation\\FaceClipping\\hkaiNavMeshGenerationFaceClipping.cpp",0x27);
    FUN_144bde6e0(local_218);
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d1b060 FUN_144d1b060 body=23 status=ok
// SIG undefined FUN_144d1b060(void)

void FUN_144d1b060(longlong param_1)

{
  FUN_144d1b210(param_1 + 0x38,param_1 + 0x250,param_1 + 0x2114);
  return;
}



// FUNCTION 144d1b080 FUN_144d1b080 body=387 status=ok
// SIG undefined FUN_144d1b080(void)

void FUN_144d1b080(undefined8 param_1,longlong param_2)

{
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  undefined1 local_138 [208];
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  
  local_178 = *(longlong *)(param_2 + 0x2000);
  lStack_170 = local_178 + (longlong)*(int *)(param_2 + 0x2008) * 0xc;
  local_168 = *(longlong *)(param_2 + 0x1ff0);
  lStack_160 = local_168 + (longlong)*(int *)(param_2 + 0x1ff8) * 4;
  local_158 = *(longlong *)(param_2 + 0x28);
  lStack_150 = local_158 + (longlong)*(int *)(param_2 + 0x30) * 4;
  local_148 = *(longlong *)(param_2 + 0x18);
  lStack_140 = (longlong)*(int *)(param_2 + 0x20) * 0x40 + local_148;
  local_188 = *(longlong *)(param_2 + 8);
  lStack_180 = local_188 + (longlong)*(int *)(param_2 + 0x10) * 0xc;
  FUN_1450464d0(local_138,param_2 + 0x2030,param_1,&local_188,&local_148,param_2 + 0x2010,&local_158
                ,&local_168,&local_178);
  FUN_144d1b760(local_138,param_2 + 0x250);
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144d1b210 FUN_144d1b210 body=1346 status=ok
// SIG undefined FUN_144d1b210(void)

void FUN_144d1b210(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *local_res8 [2];
  undefined8 local_res18;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  puVar1 = (undefined8 *)(param_2 + 0x1a98);
  *(undefined8 *)(param_2 + 0x1a80) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x1a90) = 0;
  local_res8[0] = param_1;
  local_res18 = param_3;
  FUN_147e4d8de(puVar1);
  puVar2 = (undefined4 *)(param_2 + 0x1c78);
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 0x1c88) = 0;
  if ((*(longlong *)(param_2 + 0x1c80) != param_2 + 0x1c90) && (-1 < *(int *)(param_2 + 0x1c8c))) {
    FUN_147e4da00(&PTR_vftable_14c6e47c0,(longlong *)(param_2 + 0x1c80),param_2 + 0x1c90,0x10);
  }
  *(undefined8 *)(param_2 + 0x1cb0) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x1cc0) = 0;
  *(undefined4 *)(param_2 + 0x1d48) = 0;
  *(undefined4 *)(param_2 + 0x1d58) = 0;
  *(undefined4 *)(param_2 + 0x1d68) = 0;
  *(undefined4 *)(param_2 + 0x1d78) = 0;
  *(undefined4 *)(param_2 + 0x1d88) = 0;
  *(undefined4 *)(param_2 + 0x1cf8) = 0;
  uVar3 = param_1[1];
  *(undefined8 *)(param_2 + 0x1d18) = *param_1;
  *(undefined8 *)(param_2 + 0x1d20) = uVar3;
  uVar3 = param_1[3];
  *(undefined8 *)(param_2 + 0x1d28) = param_1[2];
  *(undefined8 *)(param_2 + 0x1d30) = uVar3;
  *(undefined4 *)(param_2 + 0x1d38) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x1a90) = 0;
  uVar12 = *(undefined4 *)((longlong)param_1 + 4);
  uVar13 = *(undefined4 *)(param_1 + 1);
  uVar14 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + 0x24) = uVar12;
  *(undefined4 *)(param_2 + 0x28) = uVar13;
  *(undefined4 *)(param_2 + 0x2c) = uVar14;
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar13 = *(undefined4 *)(param_1 + 3);
  uVar14 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(param_2 + 0x34) = uVar12;
  *(undefined4 *)(param_2 + 0x38) = uVar13;
  *(undefined4 *)(param_2 + 0x3c) = uVar14;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 4);
  puVar11 = (undefined4 *)param_1[5];
  puVar4 = puVar11 + (longlong)*(int *)(param_1 + 6) * 0x38;
  if (puVar11 != puVar4) {
    puVar9 = puVar11 + 0x14;
    do {
      iVar10 = *(int *)(param_2 + 0x1a90) + 1;
      local_198 = *(longlong *)(puVar9 + 0x14);
      uStack_190 = *(longlong *)(puVar9 + 0x16);
      local_188 = puVar9[0x18];
      uStack_184 = puVar9[0x19];
      uStack_180 = puVar9[0x1a];
      uStack_17c = puVar9[0x1b];
      local_178 = puVar9[0x1c];
      uStack_174 = puVar9[0x1d];
      uStack_170 = puVar9[0x1e];
      uStack_16c = puVar9[0x1f];
      local_168 = puVar9[0x20];
      uStack_164 = puVar9[0x21];
      uStack_160 = puVar9[0x22];
      uStack_15c = puVar9[0x23];
      local_158 = *puVar9;
      uStack_154 = puVar9[1];
      uStack_150 = puVar9[2];
      uStack_14c = puVar9[3];
      local_148 = puVar9[4];
      uStack_144 = puVar9[5];
      uStack_140 = puVar9[6];
      uStack_13c = puVar9[7];
      local_138 = puVar9[8];
      uStack_134 = puVar9[9];
      uStack_130 = puVar9[10];
      uStack_12c = puVar9[0xb];
      local_128 = puVar9[0xc];
      uStack_124 = puVar9[0xd];
      uStack_120 = puVar9[0xe];
      uStack_11c = puVar9[0xf];
      local_118 = puVar9[0x10];
      uStack_114 = puVar9[0x11];
      uStack_110 = puVar9[0x12];
      uStack_10c = puVar9[0x13];
      local_108 = *puVar11;
      uStack_104 = puVar11[1];
      uStack_100 = puVar11[2];
      uStack_fc = puVar11[3];
      local_f8 = puVar11[4];
      uStack_f4 = puVar11[5];
      uStack_f0 = puVar11[6];
      uStack_ec = puVar11[7];
      local_e8 = puVar11[8];
      uStack_e4 = puVar11[9];
      uStack_e0 = puVar11[10];
      uStack_dc = puVar11[0xb];
      local_d8 = puVar11[0xc];
      uStack_d4 = puVar11[0xd];
      uStack_d0 = puVar11[0xe];
      uStack_cc = puVar11[0xf];
      local_c8 = puVar11[0x10];
      uStack_c4 = puVar11[0x11];
      uStack_c0 = puVar11[0x12];
      uStack_bc = puVar11[0x13];
      uVar12 = puVar9[0x14];
      uVar13 = puVar9[0x15];
      uVar14 = puVar9[0x16];
      uVar15 = puVar9[0x17];
      if ((int)(*(uint *)(param_2 + 0x1a94) & 0x7fffffff) < iVar10) {
        FUN_144d1ee30((longlong *)(param_2 + 0x1a88),&PTR_vftable_14c6e47a0,(longlong)iVar10);
        uVar12 = (undefined4)local_198;
        uVar13 = local_198._4_4_;
        uVar14 = (undefined4)uStack_190;
        uVar15 = uStack_190._4_4_;
      }
      iVar6 = *(int *)(param_2 + 0x1a90);
      puVar11 = puVar11 + 0x38;
      *(int *)(param_2 + 0x1a90) = iVar10;
      puVar9 = puVar9 + 0x38;
      puVar7 = (undefined4 *)((longlong)iVar6 * 0xf0 + *(longlong *)(param_2 + 0x1a88));
      puVar7[0x3a] = puVar7[0x3a] & 0xfffffffc;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *puVar7 = local_108;
      puVar7[1] = uStack_104;
      puVar7[2] = uStack_100;
      puVar7[3] = uStack_fc;
      puVar7[0x14] = local_158;
      puVar7[0x15] = uStack_154;
      puVar7[0x16] = uStack_150;
      puVar7[0x17] = uStack_14c;
      puVar7[4] = local_f8;
      puVar7[5] = uStack_f4;
      puVar7[6] = uStack_f0;
      puVar7[7] = uStack_ec;
      puVar7[0x18] = local_148;
      puVar7[0x19] = uStack_144;
      puVar7[0x1a] = uStack_140;
      puVar7[0x1b] = uStack_13c;
      puVar7[0x28] = uVar12;
      puVar7[0x29] = uVar13;
      puVar7[0x2a] = uVar14;
      puVar7[0x2b] = uVar15;
      puVar7[8] = local_e8;
      puVar7[9] = uStack_e4;
      puVar7[10] = uStack_e0;
      puVar7[0xb] = uStack_dc;
      puVar7[0x1c] = local_138;
      puVar7[0x1d] = uStack_134;
      puVar7[0x1e] = uStack_130;
      puVar7[0x1f] = uStack_12c;
      puVar7[0x2c] = local_188;
      puVar7[0x2d] = uStack_184;
      puVar7[0x2e] = uStack_180;
      puVar7[0x2f] = uStack_17c;
      puVar7[0xc] = local_d8;
      puVar7[0xd] = uStack_d4;
      puVar7[0xe] = uStack_d0;
      puVar7[0xf] = uStack_cc;
      puVar7[0x20] = local_128;
      puVar7[0x21] = uStack_124;
      puVar7[0x22] = uStack_120;
      puVar7[0x23] = uStack_11c;
      puVar7[0x30] = local_178;
      puVar7[0x31] = uStack_174;
      puVar7[0x32] = uStack_170;
      puVar7[0x33] = uStack_16c;
      puVar7[0x10] = local_c8;
      puVar7[0x11] = uStack_c4;
      puVar7[0x12] = uStack_c0;
      puVar7[0x13] = uStack_bc;
      puVar7[0x24] = local_118;
      puVar7[0x25] = uStack_114;
      puVar7[0x26] = uStack_110;
      puVar7[0x27] = uStack_10c;
      puVar7[0x34] = local_168;
      puVar7[0x35] = uStack_164;
      puVar7[0x36] = uStack_160;
      puVar7[0x37] = uStack_15c;
      param_1 = local_res8[0];
    } while (puVar11 != puVar4);
  }
  iVar10 = *(int *)(param_2 + 0x1a90);
  if ((int)(*(uint *)(param_2 + 0x1cc4) & 0x7fffffff) < iVar10) {
    FUN_144cc6670((undefined8 *)(param_2 + 0x1cb8),&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar6 = *(int *)(param_2 + 0x1cc0);
  if ((iVar6 < iVar10) || (iVar10 < iVar6)) {
    *(int *)(param_2 + 0x1cc0) = iVar10;
    iVar6 = iVar10;
  }
  puVar5 = *(undefined8 **)(param_2 + 0x1cb8);
  puVar8 = puVar5 + (longlong)iVar6 * 2;
  for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
    *puVar5 = 0xffffffffffffffff;
  }
  FUN_147e4d8de(puVar1);
  FUN_147e52952(puVar1,param_1 + 7);
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 0x1c88) = 0;
  if ((*(longlong *)(param_2 + 0x1c80) != param_2 + 0x1c90) && (-1 < *(int *)(param_2 + 0x1c8c))) {
    FUN_147e4da00(&PTR_vftable_14c6e47c0,(longlong *)(param_2 + 0x1c80),param_2 + 0x1c90,0x10);
  }
  *(undefined8 *)(param_2 + 0x1cb0) = 0xffffffffffffffff;
  FUN_144caf360(puVar2,puVar1);
  *(undefined4 *)(param_2 + 0x1cb0) = *(undefined4 *)(param_2 + 0x1c34);
  *(undefined4 *)(param_2 + 0x1cb4) = *(undefined4 *)(param_2 + 0x1c38);
  FUN_144caf480(puVar2,iVar10);
  if ((int)(*(uint *)(param_2 + 0x1cfc) & 0x7fffffff) < iVar10) {
    FUN_144cc6560((undefined8 *)(param_2 + 0x1cf0),&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar6 = *(int *)(param_2 + 0x1cf8);
  if ((iVar6 < iVar10) || (iVar10 < iVar6)) {
    *(int *)(param_2 + 0x1cf8) = iVar10;
    iVar6 = iVar10;
  }
  puVar8 = *(undefined8 **)(param_2 + 0x1cf0);
  puVar5 = puVar8 + iVar6;
  for (; puVar8 != puVar5; puVar8 = puVar8 + 1) {
    *puVar8 = 0xffffffffffffffff;
  }
  local_res8[0] = puVar1;
  FUN_144d1bb30(param_2 + 0x20,local_res8);
  local_198 = param_2 + 0x1d40;
  uStack_190 = param_2 + 0x1d50;
  FUN_144d1bdd0(param_2 + 0x20,&local_198,local_res18);
  return;
}



// FUNCTION 144d1b760 FUN_144d1b760 body=975 status=ok
// SIG undefined FUN_144d1b760(void)

undefined8 FUN_144d1b760(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *local_res18;
  longlong local_res20;
  longlong *local_240;
  longlong **local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  undefined8 uStack_160;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar6 = 0;
  local_238 = &local_res18;
  local_res20 = param_2[0x3b0];
  iVar9 = 0;
  puVar4 = (undefined8 *)param_2[0x3ac];
  iVar11 = 0;
  lVar1 = param_2[0x3ae];
  puVar8 = puVar4 + (longlong)(int)param_2[0x3ad] * 0xc;
  local_res18 = param_2;
  local_240 = param_2;
  while( true ) {
    if (puVar4 == puVar8) {
      local_158 = param_2[0x3a3];
      lStack_150 = param_2[0x3a4];
      local_138 = (undefined4)param_2[0x3a7];
      local_148 = (undefined4)param_2[0x3a5];
      uStack_144 = *(undefined4 *)((longlong)param_2 + 0x1d2c);
      uStack_140 = (undefined4)param_2[0x3a6];
      uStack_13c = *(undefined4 *)((longlong)param_2 + 0x1d34);
      FUN_144d1cf50(&local_158,param_2);
      local_128 = param_2[0x3a3];
      lStack_120 = param_2[0x3a4];
      local_108 = (undefined4)param_2[0x3a7];
      local_118 = (undefined4)param_2[0x3a5];
      uStack_114 = *(undefined4 *)((longlong)param_2 + 0x1d2c);
      uStack_110 = (undefined4)param_2[0x3a6];
      uStack_10c = *(undefined4 *)((longlong)param_2 + 0x1d34);
      FUN_145046640(param_1);
      iVar9 = (int)param_2[1];
      FUN_145046650(param_1,iVar9);
      lVar1 = *param_2;
      iVar11 = 0;
      if (0 < iVar9) {
        do {
          lVar3 = (longlong)iVar11;
          puVar4 = (undefined8 *)(lVar1 + lVar3 * 0x50);
          local_228 = *puVar4;
          uStack_220 = puVar4[1];
          puVar4 = (undefined8 *)(lVar1 + 0x10 + lVar3 * 0x50);
          local_218 = *puVar4;
          uStack_210 = puVar4[1];
          puVar4 = (undefined8 *)(lVar1 + 0x20 + lVar3 * 0x50);
          local_208 = *puVar4;
          uStack_200 = puVar4[1];
          puVar4 = (undefined8 *)(lVar1 + 0x30 + lVar3 * 0x50);
          local_1f8 = *puVar4;
          uStack_1f0 = puVar4[1];
          puVar4 = (undefined8 *)(lVar1 + 0x40 + lVar3 * 0x50);
          local_1e8 = *puVar4;
          uStack_1e0 = puVar4[1];
          FUN_144d1a2f0(&local_f8,&local_128,&local_228);
          local_98 = local_f8;
          uStack_90 = uStack_f0;
          local_88 = local_e8;
          uStack_80 = uStack_e0;
          local_78 = local_d8;
          uStack_70 = uStack_d0;
          local_68 = local_c8;
          uStack_60 = uStack_c0;
          local_58 = local_b8;
          uStack_50 = uStack_b0;
          local_48 = local_a8;
          uStack_44 = uStack_a4;
          uStack_40 = uStack_a0;
          uStack_3c = uStack_9c;
          FUN_145046710(param_1,iVar11,&local_98);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar9);
      }
      iVar9 = (int)param_2[3];
      lVar1 = param_2[2];
      FUN_145046760(param_1,iVar9);
      if (0 < iVar9) {
        do {
          puVar5 = (undefined4 *)((longlong)iVar6 * 0x20 + lVar1);
          if ((*(byte *)(puVar5 + 7) & 9) == 0) {
            FUN_145046800(param_1,puVar5[6]);
            lVar3 = (longlong)(int)puVar5[2] * 0x20;
            iVar11 = iVar6;
            do {
              puVar7 = (undefined4 *)(lVar3 + lVar1);
              puVar5[7] = puVar5[7] | 8;
              FUN_145046900(param_1,iVar11,*puVar5,*puVar7,puVar5[3],puVar5[5]);
              iVar11 = puVar5[2];
              lVar3 = (longlong)(int)puVar7[2] << 5;
              puVar5 = puVar7;
            } while (iVar11 != iVar6);
            FUN_145046c20(param_1);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar9);
      }
      FUN_145046c70(param_1);
      return 1;
    }
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    local_228 = *puVar4;
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = puVar4[1];
    local_1a8 = *(undefined4 *)(puVar4 + 2);
    uStack_1a4 = *(undefined4 *)((longlong)puVar4 + 0x14);
    local_218 = puVar4[2];
    uStack_1a0 = *(undefined4 *)(puVar4 + 3);
    uStack_19c = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uStack_210 = puVar4[3];
    local_198 = *(undefined4 *)(puVar4 + 4);
    uStack_194 = *(undefined4 *)((longlong)puVar4 + 0x24);
    local_208 = puVar4[4];
    uStack_190 = *(undefined4 *)(puVar4 + 5);
    uStack_18c = *(undefined4 *)((longlong)puVar4 + 0x2c);
    uStack_200 = puVar4[5];
    local_1d8 = lVar1 + (longlong)iVar9 * 4;
    local_1f8 = puVar4[6];
    uStack_1f0 = puVar4[7];
    iVar10 = *(int *)(puVar4 + 0xb);
    local_1e8 = puVar4[8];
    uStack_1e0 = puVar4[9];
    local_168 = puVar4[10];
    uStack_160 = puVar4[0xb];
    local_1d0 = lVar1 + ((longlong)iVar10 + (longlong)iVar9) * 4;
    local_188 = local_1f8;
    uStack_180 = uStack_1f0;
    local_178 = local_1e8;
    uStack_170 = uStack_1e0;
    cVar2 = FUN_144d1e510(&local_228,&local_1d8,param_2 + 0x399,&local_240);
    if (cVar2 == '\0') break;
    local_228 = CONCAT44(uStack_1b4,local_1b8);
    uStack_220 = CONCAT44(uStack_1ac,uStack_1b0);
    iVar9 = iVar10 + iVar9;
    local_218 = CONCAT44(uStack_1a4,local_1a8);
    uStack_210 = CONCAT44(uStack_19c,uStack_1a0);
    local_208 = CONCAT44(uStack_194,local_198);
    uStack_200 = CONCAT44(uStack_18c,uStack_190);
    local_1c8 = local_res20 + (longlong)iVar11 * 0xc;
    local_1f8 = local_188;
    uStack_1f0 = uStack_180;
    local_1e8 = local_178;
    uStack_1e0 = uStack_170;
    iVar10 = (int)((ulonglong)uStack_160 >> 0x20);
    local_1c0 = local_res20 + ((longlong)iVar10 + (longlong)iVar11) * 0xc;
    cVar2 = FUN_144d1e6c0(&local_228,local_168 & 0xffffffff,local_168 >> 0x20,&local_1c8,
                          param_2 + 0x399,&local_240);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar11 = iVar11 + iVar10;
    puVar4 = puVar4 + 0xc;
  }
  return 0;
}



// FUNCTION 144d1bb30 FUN_144d1bb30 body=662 status=ok
// SIG undefined FUN_144d1bb30(void)

void FUN_144d1bb30(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar24 = 0;
  lVar3 = param_1[0x34d];
  uVar12 = *param_1;
  uVar13 = param_1[1];
  uVar14 = param_1[2];
  uVar15 = param_1[3];
  lVar1 = (longlong)*(int *)(param_1 + 0x34e) * 0xf0 +
          SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)*(int *)(param_1 + 0x34e) * 0xf0),
                 8);
  iVar6 = (int)(lVar1 >> 7);
  iVar7 = (int)(lVar1 >> 0x3f);
  if (iVar6 != iVar7) {
    do {
      puVar23 = (undefined8 *)((longlong)(int)uVar24 * 0xf0 + lVar3);
      local_f8 = puVar23[10];
      uStack_f0 = puVar23[0xb];
      local_e8 = puVar23[0xc];
      uStack_e0 = puVar23[0xd];
      local_d8 = puVar23[0xe];
      uStack_d0 = puVar23[0xf];
      local_c8 = puVar23[0x10];
      uStack_c0 = puVar23[0x11];
      local_b8 = puVar23[0x12];
      uStack_b0 = puVar23[0x13];
      local_a8 = *puVar23;
      uStack_a0 = puVar23[1];
      local_98 = puVar23[2];
      uStack_90 = puVar23[3];
      local_88 = puVar23[4];
      uStack_80 = puVar23[5];
      local_78 = *(undefined4 *)(puVar23 + 6);
      uStack_74 = *(undefined4 *)((longlong)puVar23 + 0x34);
      uStack_70 = *(undefined4 *)(puVar23 + 7);
      uStack_6c = *(undefined4 *)((longlong)puVar23 + 0x3c);
      local_68 = *(undefined4 *)(puVar23 + 8);
      uStack_64 = *(undefined4 *)((longlong)puVar23 + 0x44);
      uStack_60 = *(undefined4 *)(puVar23 + 9);
      uStack_5c = *(undefined4 *)((longlong)puVar23 + 0x4c);
      local_128 = uVar12;
      uStack_120 = uVar13;
      local_118 = uVar14;
      uStack_110 = uVar15;
      local_108 = uVar2;
      iVar22 = FUN_144d19970(&local_128,&local_a8,&local_f8);
      if (iVar22 == 0) {
        *(uint *)(puVar23 + 0x1d) = *(uint *)(puVar23 + 0x1d) | 1;
      }
      else if (0 < iVar22) {
        uVar8 = *(undefined4 *)puVar23;
        uVar9 = *(undefined4 *)(puVar23 + 1);
        uVar10 = *(undefined4 *)(puVar23 + 2);
        uVar11 = *(undefined4 *)(puVar23 + 3);
        uVar16 = puVar23[4];
        uVar17 = puVar23[5];
        uVar18 = puVar23[6];
        uVar19 = puVar23[7];
        uVar20 = puVar23[8];
        uVar21 = puVar23[9];
        *puVar23 = puVar23[10];
        puVar23[1] = puVar23[0xb];
        puVar23[2] = puVar23[0xc];
        puVar23[3] = puVar23[0xd];
        puVar23[4] = puVar23[0xe];
        puVar23[5] = puVar23[0xf];
        puVar23[6] = puVar23[0x10];
        puVar23[7] = puVar23[0x11];
        puVar23[8] = puVar23[0x12];
        puVar23[9] = puVar23[0x13];
        *(undefined4 *)(puVar23 + 10) = uVar8;
        *(undefined4 *)((longlong)puVar23 + 0x54) = *(undefined4 *)((longlong)puVar23 + 4);
        *(undefined4 *)(puVar23 + 0xb) = uVar9;
        *(undefined4 *)((longlong)puVar23 + 0x5c) = *(undefined4 *)((longlong)puVar23 + 0xc);
        *(undefined4 *)(puVar23 + 0xc) = uVar10;
        *(undefined4 *)((longlong)puVar23 + 100) = *(undefined4 *)((longlong)puVar23 + 0x14);
        *(undefined4 *)(puVar23 + 0xd) = uVar11;
        *(undefined4 *)((longlong)puVar23 + 0x6c) = *(undefined4 *)((longlong)puVar23 + 0x1c);
        puVar23[0xe] = uVar16;
        puVar23[0xf] = uVar17;
        puVar23[0x10] = uVar18;
        puVar23[0x11] = uVar19;
        puVar23[0x12] = uVar20;
        puVar23[0x13] = uVar21;
        lVar1 = puVar23[0x16];
        lVar4 = puVar23[0x14];
        lVar5 = puVar23[0x18];
        puVar23[0x14] = -puVar23[0x14];
        puVar23[0x15] = -(ulonglong)(lVar4 != 0) - puVar23[0x15];
        puVar23[0x16] = -puVar23[0x16];
        puVar23[0x17] = -(ulonglong)(lVar1 != 0) - puVar23[0x17];
        puVar23[0x18] = -puVar23[0x18];
        puVar23[0x19] = -(ulonglong)(lVar5 != 0) - puVar23[0x19];
        *(uint *)(puVar23 + 0x1a) = *(uint *)(puVar23 + 0x1a) ^ 0x80000000;
        *(uint *)((longlong)puVar23 + 0xd4) = *(uint *)((longlong)puVar23 + 0xd4) ^ 0x80000000;
        *(uint *)(puVar23 + 0x1b) = *(uint *)(puVar23 + 0x1b) ^ 0x80000000;
        FUN_144cafb20(*param_2,uVar24);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < (uint)(iVar6 - iVar7));
  }
  return;
}



// FUNCTION 144d1bdd0 FUN_144d1bdd0 body=4479 status=ok
// SIG undefined FUN_144d1bdd0(void)

undefined8 FUN_144d1bdd0(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int *piVar22;
  char cVar23;
  undefined4 uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  int *piVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong lVar31;
  undefined8 *puVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int *piVar38;
  float fVar39;
  int local_res20 [2];
  int local_458 [2];
  undefined8 local_450;
  int local_448 [4];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  int local_408;
  int iStack_404;
  int iStack_400;
  int iStack_3fc;
  int local_3f8;
  int iStack_3f4;
  int iStack_3f0;
  int iStack_3ec;
  int *local_3e8;
  int local_3e0;
  uint local_3dc;
  int local_3d8 [16];
  int local_398 [4];
  int *local_388;
  int *piStack_380;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358 [4];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 *local_2f8;
  int *local_2e8;
  int *piStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  int *local_288;
  int *piStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  int local_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int local_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 local_198;
  int local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined4 local_138;
  int local_134;
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
  
  puVar32 = param_1 + 5;
  piVar4 = (int *)param_1[0x34d];
  *(undefined4 *)puVar32 = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0xc);
  piStack_2e0 = piVar4 + (longlong)*(int *)(param_1 + 0x34e) * 0x3c;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 4);
  lVar26 = ((longlong)piStack_2e0 - (longlong)piVar4) +
           SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)piStack_2e0 - (longlong)piVar4),8
                 );
  iVar37 = (int)(lVar26 >> 7) - (int)(lVar26 >> 0x3f);
  local_2f8 = puVar32;
  local_2e8 = piVar4;
  if ((int)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) < iVar37) {
    FUN_144d1f3c0(param_1 + 10,&PTR_vftable_14c6e47c0,(longlong)iVar37);
  }
  iVar36 = 0;
  if (0 < iVar37) {
    do {
      lVar26 = (longlong)iVar36;
      if ((*(byte *)(piVar4 + lVar26 * 0x3c + 0x3a) & 1) == 0) {
        iVar33 = *(int *)(param_1 + 0xb) + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) < iVar33) {
          FUN_144d1fd10(param_1 + 10,&PTR_vftable_14c6e47c0,(longlong)iVar33);
        }
        iVar35 = *(int *)(param_1 + 0xb);
        *(int *)(param_1 + 0xb) = iVar33;
        puVar29 = (undefined8 *)((longlong)iVar35 * 0x68 + param_1[10]);
        *(undefined4 *)(puVar29 + 0xb) = 0xffffffff;
        *(undefined4 *)((longlong)puVar29 + 0x5c) = *(undefined4 *)(param_1 + 0x34c);
        *(undefined4 *)(puVar29 + 0xc) = 0xffffffff;
        *(undefined1 *)((longlong)puVar29 + 100) = 0;
        *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0xb) + -1;
        *(undefined4 *)(puVar29 + 10) = 0;
        uVar8 = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 2);
        *puVar29 = *(undefined8 *)(piVar4 + lVar26 * 0x3c);
        puVar29[1] = uVar8;
        uVar8 = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 4 + 2);
        puVar29[2] = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 4);
        puVar29[3] = uVar8;
        uVar8 = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 8 + 2);
        puVar29[4] = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 8);
        puVar29[5] = uVar8;
        uVar8 = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 0xc + 2);
        puVar29[6] = *(undefined8 *)(piVar4 + lVar26 * 0x3c + 0xc);
        puVar29[7] = uVar8;
        piVar2 = piVar4 + lVar26 * 0x3c + 0x10;
        iVar33 = *piVar2;
        iVar35 = piVar2[1];
        iVar6 = piVar2[2];
        iVar7 = piVar2[3];
        *(int *)((longlong)puVar29 + 0x54) = iVar36;
        *(int *)(puVar29 + 8) = iVar33;
        *(int *)((longlong)puVar29 + 0x44) = iVar35;
        *(int *)(puVar29 + 9) = iVar6;
        *(int *)((longlong)puVar29 + 0x4c) = iVar7;
      }
      iVar36 = iVar36 + 1;
    } while (iVar36 < iVar37);
  }
  *param_3 = 0;
  FUN_144be90e0(0xe70ee67);
  uVar24 = FUN_144d1abb0(puVar32,*(undefined4 *)(param_1 + 0x34c));
  *(undefined4 *)(param_1 + 0x34c) = uVar24;
  *param_3 = 0;
  FUN_144be90e0(0xe0366c35);
  *param_3 = 0;
  FUN_144be90e0(0x197edd1b);
  piVar22 = piStack_2e0;
  piVar2 = local_2e8;
  uVar25 = *(uint *)(param_1 + 0x34c);
  local_3e8 = local_3d8;
  local_450 = 0xffffffffffffffff;
  local_3e0 = 0;
  local_3dc = 0x80000010;
joined_r0x000144d1bfdd:
  if (uVar25 == 0xffffffff) {
    *param_3 = 0;
    FUN_144be90e0(0xa6cc5fff);
    local_3e0 = 0;
    if ((-1 < (int)local_3dc) && (local_3e8 != (int *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_3e8,(ulonglong)(local_3dc & 0x7fffffff) << 2);
    }
    return 1;
  }
  uVar34 = (ulonglong)uVar25;
  local_3e0 = 0;
  iVar37 = -1;
  lVar30 = (longlong)(int)uVar25 * 0x68;
  lVar26 = puVar32[5];
  uVar8 = *(undefined8 *)(lVar30 + lVar26);
  uVar9 = ((undefined8 *)(lVar30 + lVar26))[1];
  puVar29 = (undefined8 *)(lVar30 + 0x10 + lVar26);
  uVar10 = *puVar29;
  uVar11 = puVar29[1];
  puVar29 = (undefined8 *)(lVar30 + 0x20 + lVar26);
  uVar12 = *puVar29;
  uVar13 = puVar29[1];
  puVar29 = (undefined8 *)(lVar30 + 0x30 + lVar26);
  uVar14 = *puVar29;
  uVar15 = puVar29[1];
  puVar29 = (undefined8 *)(lVar30 + 0x40 + lVar26);
  uVar16 = *puVar29;
  uVar17 = puVar29[1];
  while( true ) {
    while( true ) {
      lVar26 = puVar32[5];
      lVar30 = (longlong)(int)uVar34 * 0x68;
      if (*(int *)(lVar30 + 0x50 + lVar26) == 0) break;
      iVar36 = *(int *)(lVar30 + 0x54 + lVar26);
      uVar25 = *(uint *)(lVar30 + 0x60 + lVar26);
      if ((*(byte *)(piVar4 + (longlong)iVar36 * 0x3c + 0x3a) & 2) != 0) {
        iVar37 = iVar36;
      }
      while( true ) {
        if (uVar25 == 0xffffffff) {
          iVar36 = *(int *)(puVar32 + 0x347);
          uVar24 = *(undefined4 *)(lVar30 + 0x58 + lVar26);
          *(undefined4 *)((longlong)iVar36 * 0x68 + 0x60 + puVar32[5]) =
               *(undefined4 *)((longlong)puVar32 + 0x1a3c);
          *(int *)((longlong)puVar32 + 0x1a3c) = iVar36;
          uVar25 = FUN_144d1abb0(puVar32,uVar24);
          *(uint *)(puVar32 + 0x347) = uVar25;
          uVar34 = (ulonglong)uVar25;
          if (uVar25 != 0xffffffff) goto LAB_144d1c230;
          goto LAB_144d1c317;
        }
        uVar34 = (ulonglong)uVar25;
        lVar27 = puVar32[5];
        lVar31 = (longlong)(int)uVar25 * 0x68;
        if (*(char *)(lVar31 + 100 + lVar27) == '\0') break;
        uVar3 = *(uint *)(lVar31 + 0x60 + lVar27);
        *(undefined4 *)(lVar31 + 0x60 + lVar27) = *(undefined4 *)((longlong)puVar32 + 0x1a3c);
        *(uint *)((longlong)puVar32 + 0x1a3c) = uVar25;
        uVar25 = uVar3;
      }
      *(undefined4 *)(lVar31 + 0x58 + lVar27) = *(undefined4 *)(lVar30 + 0x58 + lVar26);
      iVar36 = *(int *)(puVar32 + 0x347);
      *(undefined4 *)((longlong)iVar36 * 0x68 + 0x60 + puVar32[5]) =
           *(undefined4 *)((longlong)puVar32 + 0x1a3c);
      *(int *)((longlong)puVar32 + 0x1a3c) = iVar36;
      *(uint *)(puVar32 + 0x347) = uVar25;
    }
    iVar36 = local_3e0 + 1;
    if ((int)(local_3dc & 0x7fffffff) < iVar36) {
      FUN_141807990(&local_3e8,&PTR_vftable_14c6e47c0,(longlong)iVar36);
    }
    if (local_3e8 + local_3e0 != (int *)0x0) {
      local_3e8[local_3e0] = *(int *)(lVar30 + 0x54 + lVar26);
    }
    lVar27 = (longlong)*(int *)(lVar30 + 0x54 + lVar26);
    uVar18 = *(undefined8 *)(piVar4 + lVar27 * 0x3c + 0x14 + 2);
    *(undefined8 *)(lVar30 + lVar26) = *(undefined8 *)(piVar4 + lVar27 * 0x3c + 0x14);
    ((undefined8 *)(lVar30 + lVar26))[1] = uVar18;
    uVar18 = *(undefined8 *)(piVar4 + lVar27 * 0x3c + 0x18 + 2);
    puVar29 = (undefined8 *)(lVar30 + 0x10 + lVar26);
    *puVar29 = *(undefined8 *)(piVar4 + lVar27 * 0x3c + 0x18);
    puVar29[1] = uVar18;
    uVar18 = *(undefined8 *)(piVar4 + lVar27 * 0x3c + 0x1c + 2);
    puVar29 = (undefined8 *)(lVar30 + 0x20 + lVar26);
    *puVar29 = *(undefined8 *)(piVar4 + lVar27 * 0x3c + 0x1c);
    puVar29[1] = uVar18;
    piVar38 = piVar4 + lVar27 * 0x3c + 0x20;
    iVar33 = piVar38[1];
    iVar35 = piVar38[2];
    iVar6 = piVar38[3];
    piVar28 = (int *)(lVar30 + 0x30 + lVar26);
    *piVar28 = *piVar38;
    piVar28[1] = iVar33;
    piVar28[2] = iVar35;
    piVar28[3] = iVar6;
    piVar28 = piVar4 + lVar27 * 0x3c + 0x24;
    iVar33 = *piVar28;
    iVar35 = piVar28[1];
    iVar6 = piVar28[2];
    iVar7 = piVar28[3];
    *(undefined4 *)(lVar30 + 0x50 + lVar26) = 1;
    piVar28 = (int *)(lVar30 + 0x40 + lVar26);
    *piVar28 = iVar33;
    piVar28[1] = iVar35;
    piVar28[2] = iVar6;
    piVar28[3] = iVar7;
    lVar26 = (longlong)*(int *)(puVar32 + 0x347) * 0x68 + puVar32[5];
    iVar33 = *(int *)(lVar26 + 0x60);
    uVar34 = (ulonglong)iVar33;
    local_3e0 = iVar36;
    if (iVar33 == -1) break;
    *(undefined4 *)(uVar34 * 0x68 + 0x58 + puVar32[5]) = *(undefined4 *)(lVar26 + 0x58);
    *(undefined8 *)(lVar26 + 0x58) = 0xffffffffffffffff;
    *(undefined4 *)(lVar26 + 0x60) = 0xffffffff;
    if (*(int *)(puVar32 + 0x347) != -1) {
      uVar25 = FUN_144d1a8f0(puVar32,*(int *)(puVar32 + 0x347),iVar33);
      uVar34 = (ulonglong)uVar25;
    }
    *(int *)(puVar32 + 0x347) = (int)uVar34;
  }
  *(undefined4 *)(lVar26 + 0x5c) = *(undefined4 *)(lVar26 + 0x58);
  *(undefined4 *)(lVar26 + 0x58) = 0xffffffff;
  *(undefined4 *)(lVar26 + 0x60) = 0xffffffff;
  uVar24 = FUN_144d1abb0(puVar32,*(undefined4 *)(puVar32 + 0x347));
  *(undefined4 *)(puVar32 + 0x347) = uVar24;
  goto LAB_144d1c317;
  while( true ) {
    *(undefined4 *)(lVar30 + 0x60 + lVar26) = *(undefined4 *)((longlong)puVar32 + 0x1a3c);
    *(int *)((longlong)puVar32 + 0x1a3c) = iVar36;
    uVar25 = FUN_144d1abb0(puVar32,uVar24);
    *(uint *)(puVar32 + 0x347) = uVar25;
    uVar34 = (ulonglong)uVar25;
    if (uVar25 == 0xffffffff) break;
LAB_144d1c230:
    lVar26 = puVar32[5];
    iVar36 = (int)uVar34;
    lVar30 = (longlong)iVar36 * 0x68;
    if (*(char *)(lVar30 + 100 + lVar26) == '\0') break;
    iVar33 = *(int *)(lVar30 + 0x60 + lVar26);
    uVar34 = (ulonglong)iVar33;
    uVar24 = *(undefined4 *)(lVar30 + 0x58 + lVar26);
    if (iVar33 != -1) {
      *(undefined4 *)(uVar34 * 0x68 + 0x58 + lVar26) = uVar24;
      iVar36 = *(int *)(puVar32 + 0x347);
      *(undefined4 *)((longlong)iVar36 * 0x68 + 0x60 + puVar32[5]) =
           *(undefined4 *)((longlong)puVar32 + 0x1a3c);
      *(int *)((longlong)puVar32 + 0x1a3c) = iVar36;
      *(int *)(puVar32 + 0x347) = iVar33;
      goto LAB_144d1c230;
    }
  }
LAB_144d1c317:
  local_388 = piVar2;
  piStack_380 = piVar22;
  local_128 = uVar8;
  uStack_120 = uVar9;
  local_118 = uVar10;
  uStack_110 = uVar11;
  local_108 = uVar12;
  uStack_100 = uVar13;
  local_f8 = uVar14;
  uStack_f0 = uVar15;
  local_e8 = uVar16;
  uStack_e0 = uVar17;
  FUN_144d1d670(&local_450,&local_388,&local_128,iVar37,local_res20,local_448,local_398,local_458);
  plVar5 = (longlong *)*param_2;
  iVar37 = (int)plVar5[1] + 1;
  if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar37) {
    FUN_144d1ef40(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar37);
  }
  iVar36 = local_398[0];
  lVar26 = plVar5[1];
  *(int *)(plVar5 + 1) = iVar37;
  puVar29 = (undefined8 *)((longlong)(int)lVar26 * 0x68 + *plVar5);
  *(int *)(puVar29 + 10) = local_res20[0];
  *(int *)((longlong)puVar29 + 0x54) = local_448[0];
  *(int *)(puVar29 + 0xb) = local_398[0];
  *(int *)((longlong)puVar29 + 0x5c) = local_458[0];
  *(undefined4 *)(puVar29 + 0xc) = 0;
  *puVar29 = uVar8;
  puVar29[1] = uVar9;
  puVar29[2] = uVar10;
  puVar29[3] = uVar11;
  puVar29[4] = uVar12;
  puVar29[5] = uVar13;
  puVar29[6] = uVar14;
  puVar29[7] = uVar15;
  puVar29[8] = uVar16;
  puVar29[9] = uVar17;
  uVar24 = *(undefined4 *)(param_1 + 4);
  local_388 = (int *)CONCAT44(local_388._4_4_,uVar24);
  uVar18 = *param_1;
  uVar19 = param_1[1];
  uVar20 = param_1[2];
  uVar21 = param_1[3];
  iVar37 = local_448[0];
  if (local_448[0] != -1) {
    while( true ) {
      local_438 = *(undefined8 *)(piVar4 + (longlong)iVar37 * 0x3c + 0x14);
      uStack_430 = *(undefined8 *)(piVar4 + (longlong)iVar37 * 0x3c + 0x16);
      local_428 = *(undefined8 *)(piVar4 + (longlong)iVar37 * 0x3c + 0x18);
      uStack_420 = *(undefined8 *)(piVar4 + (longlong)iVar37 * 0x3c + 0x1a);
      local_418 = *(undefined8 *)(piVar4 + (longlong)iVar37 * 0x3c + 0x1c);
      uStack_410 = *(undefined8 *)(piVar4 + (longlong)iVar37 * 0x3c + 0x1e);
      local_408 = piVar4[(longlong)iVar37 * 0x3c + 0x20];
      iStack_404 = piVar4[(longlong)iVar37 * 0x3c + 0x21];
      iStack_400 = piVar4[(longlong)iVar37 * 0x3c + 0x22];
      iStack_3fc = piVar4[(longlong)iVar37 * 0x3c + 0x23];
      local_3f8 = piVar4[(longlong)iVar37 * 0x3c + 0x24];
      iStack_3f4 = piVar4[(longlong)iVar37 * 0x3c + 0x25];
      iStack_3f0 = piVar4[(longlong)iVar37 * 0x3c + 0x26];
      iStack_3ec = piVar4[(longlong)iVar37 * 0x3c + 0x27];
      local_348 = uVar8;
      uStack_340 = uVar9;
      local_338 = uVar10;
      uStack_330 = uVar11;
      local_328 = uVar12;
      uStack_320 = uVar13;
      local_318 = uVar14;
      uStack_310 = uVar15;
      local_308 = uVar16;
      uStack_300 = uVar17;
      local_278 = uVar18;
      uStack_270 = uVar19;
      local_268 = uVar20;
      uStack_260 = uVar21;
      local_258 = uVar24;
      cVar23 = FUN_144d19620(&local_278,&local_348,&local_438);
      if (cVar23 != '\0') {
        iVar33 = local_3e0 + 1;
        if ((int)(local_3dc & 0x7fffffff) < iVar33) {
          FUN_141807990(&local_3e8,&PTR_vftable_14c6e47c0,(longlong)iVar33);
        }
        lVar26 = (longlong)local_3e0;
        local_3e0 = iVar33;
        if (local_3e8 + lVar26 != (int *)0x0) {
          local_3e8[lVar26] = iVar37;
        }
      }
      if (iVar37 == iVar36) break;
      iVar37 = piVar4[(longlong)iVar37 * 0x3c + 0x39];
    }
    if (local_448[0] != -1) {
      piVar4[(longlong)local_448[0] * 0x3c + 0x3a] =
           piVar4[(longlong)local_448[0] * 0x3c + 0x3a] & 0xfffffffd;
      iVar37 = piVar4[(longlong)local_448[0] * 0x3c + 0x39];
      (piVar4 + (longlong)local_448[0] * 0x3c + 0x38)[0] = -1;
      (piVar4 + (longlong)local_448[0] * 0x3c + 0x38)[1] = -1;
      iVar33 = local_448[0];
      while (iVar35 = iVar37, iVar33 != iVar36) {
        iVar37 = piVar4[(longlong)iVar35 * 0x3c + 0x39];
        (piVar4 + (longlong)iVar35 * 0x3c + 0x38)[0] = -1;
        (piVar4 + (longlong)iVar35 * 0x3c + 0x38)[1] = -1;
        piVar4[(longlong)iVar35 * 0x3c + 0x3a] = piVar4[(longlong)iVar35 * 0x3c + 0x3a] & 0xfffffffd
        ;
        iVar33 = iVar35;
      }
    }
  }
  iVar36 = local_458[0];
  iVar37 = local_res20[0];
  if (local_3e0 == 0) {
    if (local_res20[0] == -1) {
      piVar28 = (int *)&local_450;
    }
    else {
      piVar28 = piVar4 + (longlong)local_res20[0] * 0x3c + 0x39;
    }
    *piVar28 = local_458[0];
    if (local_458[0] == -1) {
      piVar28 = (int *)((longlong)&local_450 + 4);
    }
    else {
      piVar28 = piVar4 + (longlong)local_458[0] * 0x3c + 0x38;
    }
    *piVar28 = local_res20[0];
    *(undefined4 *)((longlong)(int)((longlong *)*param_2)[1] * 0x68 + -4 + *(longlong *)*param_2) =
         0;
    if ((local_res20[0] == -1) || (local_458[0] == -1)) goto LAB_144d1ce62;
    lVar26 = param_1[0x34d];
    lVar30 = (longlong)local_res20[0] * 0xf0;
    lVar27 = (longlong)local_458[0] * 0xf0;
    puVar29 = (undefined8 *)(lVar26 + 0x50 + lVar30);
    local_348 = *puVar29;
    uStack_340 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x60 + lVar30);
    local_338 = *puVar29;
    uStack_330 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x70 + lVar30);
    local_328 = *puVar29;
    uStack_320 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x80 + lVar30);
    local_318 = *puVar29;
    uStack_310 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x90 + lVar30);
    local_308 = *puVar29;
    uStack_300 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x60 + lVar27);
    local_2c8 = *puVar29;
    uStack_2c0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x50 + lVar27);
    local_2d8 = *puVar29;
    uStack_2d0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x80 + lVar27);
    local_2a8 = *puVar29;
    uStack_2a0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x70 + lVar27);
    local_2b8 = *puVar29;
    uStack_2b0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar26 + 0x90 + lVar27);
    local_298 = *puVar29;
    uStack_290 = puVar29[1];
    iVar37 = FUN_144d1a000(lVar26 + 0xa0 + lVar30,&local_2d8);
    if ((-1 < iVar37) ||
       (iVar37 = FUN_144d1a000(param_1[0x34d] + 0xa0 + lVar27,&local_348), iVar37 < 1))
    goto LAB_144d1ce62;
    cVar23 = FUN_144d1a470(param_1[0x34d] + 0xa0 + lVar30,param_1[0x34d] + 0xa0 + lVar27,&local_438)
    ;
    if (cVar23 != '\0') {
      fVar39 = (float)FUN_144d1d540(&local_408,&local_360);
      lVar26 = FUN_147e510dd(&local_438,&local_35c);
      iVar37 = local_360;
      if ((float)lVar26 == 0.0) {
        iStack_3f0 = 0;
      }
      else {
        iStack_3f0 = (local_35c - local_360) * 0x800000 + (int)((float)lVar26 / fVar39);
      }
      lVar26 = FUN_147e510dd(&uStack_420,local_358);
      if ((float)lVar26 == 0.0) {
        iStack_3ec = 0;
      }
      else {
        iStack_3ec = (local_358[0] - iVar37) * 0x800000 + (int)((float)lVar26 / fVar39);
      }
    }
    puVar29 = &local_188;
    local_188 = local_438;
    uStack_180 = uStack_430;
    local_168 = local_418;
    uStack_160 = uStack_410;
    local_178 = local_428;
    uStack_170 = uStack_420;
    local_148 = local_3f8;
    iStack_144 = iStack_3f4;
    iStack_140 = iStack_3f0;
    iStack_13c = iStack_3ec;
    local_138 = 2;
    local_158 = local_408;
    iStack_154 = iStack_404;
    iStack_150 = iStack_400;
    iStack_14c = iStack_3fc;
    local_134 = local_res20[0];
  }
  else {
    piStack_280 = piStack_2e0;
    iVar33 = (int)((longlong)local_3e0 * 4 >> 2);
    local_288 = piVar4;
    if (1 < iVar33) {
      piStack_380 = piStack_2e0;
      local_388 = piVar4;
      FUN_144d1f090(local_3e8,0,iVar33 + -1,&local_388);
    }
    local_348 = uVar8;
    uStack_340 = uVar9;
    local_338 = uVar10;
    uStack_330 = uVar11;
    local_328 = uVar12;
    uStack_320 = uVar13;
    local_318 = uVar14;
    uStack_310 = uVar15;
    local_308 = uVar16;
    uStack_300 = uVar17;
    FUN_144d1dc10(param_1,&local_3e8,&local_348);
    iVar33 = 0;
    iVar35 = (int)((longlong)local_3e0 * 4 >> 2) + -1;
    piVar28 = local_3e8;
    if (0 < iVar35) {
      do {
        piVar38 = piVar28 + 1;
        iVar33 = iVar33 + 1;
        piVar4[(longlong)*piVar28 * 0x3c + 0x39] = *piVar38;
        piVar4[(longlong)*piVar28 * 0x3c + 0x3a] = piVar4[(longlong)*piVar28 * 0x3c + 0x3a] | 2;
        piVar4[(longlong)*piVar38 * 0x3c + 0x38] = *piVar28;
        piVar28 = piVar38;
      } while (iVar33 < iVar35);
    }
    piVar4[(longlong)local_3e8[(longlong)local_3e0 + -1] * 0x3c + 0x3a] =
         piVar4[(longlong)local_3e8[(longlong)local_3e0 + -1] * 0x3c + 0x3a] | 2;
    piVar4[(longlong)*local_3e8 * 0x3c + 0x38] = iVar37;
    piVar4[(longlong)local_3e8[local_3e0 + -1] * 0x3c + 0x39] = iVar36;
    if (iVar37 != -1) {
      piVar4[(longlong)iVar37 * 0x3c + 0x39] = *local_3e8;
    }
    if (iVar36 != -1) {
      piVar4[(longlong)iVar36 * 0x3c + 0x38] = local_3e8[local_3e0 + -1];
    }
    iVar36 = 0;
    piVar28 = local_3e8 + local_3e0;
    piVar38 = local_3e8;
    local_388 = piVar28;
    if (local_3e8 != piVar28) {
      do {
        plVar5 = (longlong *)param_2[1];
        iVar37 = *piVar38;
        iVar33 = (int)plVar5[1] + 1;
        if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar33) {
          FUN_141807990(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar33);
          piVar28 = local_388;
        }
        piVar1 = (int *)(*plVar5 + (longlong)(int)plVar5[1] * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar37;
        }
        iVar36 = iVar36 + 1;
        *(int *)(plVar5 + 1) = iVar33;
        piVar38 = piVar38 + 1;
        puVar32 = local_2f8;
        iVar37 = local_res20[0];
      } while (piVar38 != piVar28);
    }
    *(int *)((longlong)(int)((longlong *)*param_2)[1] * 0x68 + -4 + *(longlong *)*param_2) = iVar36;
    if (iVar37 == -1) {
      local_450 = CONCAT44(local_450._4_4_,*local_3e8);
    }
    else {
      lVar30 = (longlong)iVar37 * 0xf0;
      piVar4[(longlong)iVar37 * 0x3c + 0x39] = *local_3e8;
      lVar26 = param_1[0x34d];
      puVar29 = (undefined8 *)(lVar26 + 0x50 + lVar30);
      local_2d8 = *puVar29;
      uStack_2d0 = puVar29[1];
      puVar29 = (undefined8 *)(lVar26 + 0x60 + lVar30);
      local_2c8 = *puVar29;
      uStack_2c0 = puVar29[1];
      lVar27 = (longlong)*local_3e8 * 0xf0;
      puVar29 = (undefined8 *)(lVar26 + 0x70 + lVar30);
      local_2b8 = *puVar29;
      uStack_2b0 = puVar29[1];
      puVar29 = (undefined8 *)(lVar26 + 0x80 + lVar30);
      local_2a8 = *puVar29;
      uStack_2a0 = puVar29[1];
      puVar29 = (undefined8 *)(lVar26 + 0x90 + lVar30);
      local_298 = *puVar29;
      uStack_290 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x60 + lVar26);
      local_338 = *puVar29;
      uStack_330 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x50 + lVar26);
      local_348 = *puVar29;
      uStack_340 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x80 + lVar26);
      local_318 = *puVar29;
      uStack_310 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x70 + lVar26);
      local_328 = *puVar29;
      uStack_320 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x90 + lVar26);
      local_308 = *puVar29;
      uStack_300 = puVar29[1];
      iVar37 = FUN_144d1a000(lVar26 + 0xa0 + lVar30,&local_348);
      if ((iVar37 < 0) &&
         (iVar37 = FUN_144d1a000(param_1[0x34d] + 0xa0 + lVar27,&local_2d8), 0 < iVar37)) {
        cVar23 = FUN_144d1a470(param_1[0x34d] + 0xa0 + lVar30,lVar27 + 0xa0 + param_1[0x34d],
                               &local_438);
        if (cVar23 != '\0') {
          fVar39 = (float)FUN_144d1d540(&local_408,&local_378);
          lVar26 = FUN_147e510dd(&local_438,&local_374);
          iVar37 = local_378;
          if ((float)lVar26 == 0.0) {
            iStack_3f0 = 0;
          }
          else {
            iStack_3f0 = (local_374 - local_378) * 0x800000 + (int)((float)lVar26 / fVar39);
          }
          lVar26 = FUN_147e510dd(&uStack_420,&local_370);
          if ((float)lVar26 == 0.0) {
            iStack_3ec = 0;
          }
          else {
            iStack_3ec = (local_370 - iVar37) * 0x800000 + (int)((float)lVar26 / fVar39);
          }
        }
        local_248 = local_438;
        uStack_240 = uStack_430;
        local_228 = local_418;
        uStack_220 = uStack_410;
        local_238 = local_428;
        uStack_230 = uStack_420;
        local_208 = local_3f8;
        iStack_204 = iStack_3f4;
        iStack_200 = iStack_3f0;
        iStack_1fc = iStack_3ec;
        local_1f8 = 2;
        local_218 = local_408;
        iStack_214 = iStack_404;
        iStack_210 = iStack_400;
        iStack_20c = iStack_3fc;
        local_1f4 = local_res20[0];
        FUN_144d1a7d0(puVar32,&local_248);
      }
    }
    if (local_458[0] == -1) {
      local_450 = CONCAT44(local_3e8[local_3e0 + -1],(int)local_450);
      goto LAB_144d1ce62;
    }
    lVar27 = (longlong)local_458[0] * 0xf0;
    piVar4[(longlong)local_458[0] * 0x3c + 0x38] = local_3e8[local_3e0 + -1];
    iVar37 = local_3e8[local_3e0 + -1];
    lVar26 = param_1[0x34d];
    lVar30 = (longlong)iVar37 * 0xf0;
    puVar29 = (undefined8 *)(lVar30 + 0x50 + lVar26);
    local_348 = *puVar29;
    uStack_340 = puVar29[1];
    puVar29 = (undefined8 *)(lVar30 + 0x60 + lVar26);
    local_338 = *puVar29;
    uStack_330 = puVar29[1];
    puVar29 = (undefined8 *)(lVar30 + 0x70 + lVar26);
    local_328 = *puVar29;
    uStack_320 = puVar29[1];
    puVar29 = (undefined8 *)(lVar30 + 0x80 + lVar26);
    local_318 = *puVar29;
    uStack_310 = puVar29[1];
    puVar29 = (undefined8 *)(lVar30 + 0x90 + lVar26);
    local_308 = *puVar29;
    uStack_300 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x50 + lVar26);
    local_2d8 = *puVar29;
    uStack_2d0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x60 + lVar26);
    local_2c8 = *puVar29;
    uStack_2c0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x70 + lVar26);
    local_2b8 = *puVar29;
    uStack_2b0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x80 + lVar26);
    local_2a8 = *puVar29;
    uStack_2a0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x90 + lVar26);
    local_298 = *puVar29;
    uStack_290 = puVar29[1];
    iVar36 = FUN_144d1a000(lVar30 + 0xa0 + lVar26,&local_2d8);
    if ((-1 < iVar36) ||
       (iVar36 = FUN_144d1a000(param_1[0x34d] + 0xa0 + lVar27,&local_348), iVar36 < 1))
    goto LAB_144d1ce62;
    cVar23 = FUN_144d1a470(lVar30 + 0xa0 + param_1[0x34d],lVar27 + 0xa0 + param_1[0x34d],&local_438)
    ;
    if (cVar23 != '\0') {
      fVar39 = (float)FUN_144d1d540(&local_408,&local_36c);
      lVar26 = FUN_147e510dd(&local_438,&local_368);
      iVar36 = local_36c;
      if ((float)lVar26 == 0.0) {
        iStack_3f0 = 0;
      }
      else {
        iStack_3f0 = (local_368 - local_36c) * 0x800000 + (int)((float)lVar26 / fVar39);
      }
      lVar26 = FUN_147e510dd(&uStack_420,&local_364);
      if ((float)lVar26 == 0.0) {
        iStack_3ec = 0;
      }
      else {
        iStack_3ec = (local_364 - iVar36) * 0x800000 + (int)((float)lVar26 / fVar39);
      }
    }
    puVar29 = &local_1e8;
    local_1e8 = local_438;
    uStack_1e0 = uStack_430;
    local_1c8 = local_418;
    uStack_1c0 = uStack_410;
    local_1d8 = local_428;
    uStack_1d0 = uStack_420;
    local_1a8 = local_3f8;
    iStack_1a4 = iStack_3f4;
    iStack_1a0 = iStack_3f0;
    iStack_19c = iStack_3ec;
    local_198 = 2;
    local_1b8 = local_408;
    iStack_1b4 = iStack_404;
    iStack_1b0 = iStack_400;
    iStack_1ac = iStack_3fc;
    local_194 = iVar37;
  }
  FUN_144d1a7d0(puVar32,puVar29);
LAB_144d1ce62:
  uVar25 = *(uint *)(puVar32 + 0x347);
  goto joined_r0x000144d1bfdd;
}



// FUNCTION 144d1cf50 FUN_144d1cf50 body=1508 status=ok
// SIG undefined FUN_144d1cf50(void)

void FUN_144d1cf50(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  longlong lVar27;
  uint uVar28;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
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
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  int *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar23 = 0;
  FUN_144be90e0(0xeab13cc2);
  uVar2 = *(uint *)(param_2 + 3);
  uVar28 = 0;
  if (uVar2 != 0) {
    do {
      lVar19 = param_2[2];
      piVar24 = (int *)((longlong)(int)uVar28 * 0x20 + lVar19);
      if ((*(byte *)(piVar24 + 7) & 5) == 0) {
        lVar21 = *param_2;
        iVar3 = piVar24[1];
        local_1b8 = (int *)((longlong)iVar3 * 0x20 + lVar19);
        lVar27 = (longlong)piVar24[3] * 0x20 + lVar19;
        iVar4 = *(int *)(lVar27 + 8);
        local_1b0 = (longlong)iVar4 * 0x20 + lVar19;
        lVar19 = (longlong)*(int *)((longlong)*(int *)(local_1b0 + 8) * 0x20 + lVar19);
        lVar20 = (longlong)*piVar24;
        puVar1 = (undefined8 *)(lVar21 + lVar19 * 0x50);
        local_2a8 = *puVar1;
        uStack_2a0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar19 * 0x50);
        local_298 = *puVar1;
        uStack_290 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar19 * 0x50);
        local_288 = *puVar1;
        uStack_280 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x30 + lVar19 * 0x50);
        local_278 = *puVar1;
        uStack_270 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x40 + lVar19 * 0x50);
        local_268 = *puVar1;
        uStack_260 = puVar1[1];
        lVar19 = (longlong)*local_1b8;
        puVar1 = (undefined8 *)(lVar21 + lVar20 * 0x50);
        local_258 = *puVar1;
        uStack_250 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar20 * 0x50);
        local_248 = *puVar1;
        uStack_240 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar20 * 0x50);
        local_238 = *puVar1;
        uStack_230 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x30 + lVar20 * 0x50);
        local_228 = *puVar1;
        uStack_220 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x40 + lVar20 * 0x50);
        local_218 = *puVar1;
        uStack_210 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + lVar19 * 0x50);
        local_208 = *puVar1;
        uStack_200 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar19 * 0x50);
        local_1f8 = *puVar1;
        uStack_1f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar19 * 0x50);
        local_1e8 = *puVar1;
        uStack_1e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x30 + lVar19 * 0x50);
        local_1d8 = *puVar1;
        uStack_1d0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + 0x40 + lVar19 * 0x50);
        local_1c8 = *puVar1;
        uStack_1c0 = puVar1[1];
        iVar17 = FUN_144d19c30(&local_208,&local_258,&local_2a8);
        uVar14 = uStack_210;
        uVar13 = local_218;
        uVar12 = uStack_220;
        uVar11 = local_228;
        uVar10 = uStack_230;
        uVar9 = local_238;
        uVar8 = uStack_240;
        uVar7 = local_248;
        uVar6 = uStack_250;
        uVar22 = local_258;
        if (iVar17 == 0) {
          local_188 = *(undefined4 *)(param_1 + 4);
          local_258 = local_208;
          uStack_250 = uStack_200;
          local_238 = local_1e8;
          uStack_230 = uStack_1e0;
          local_218 = local_1c8;
          uStack_210 = uStack_1c0;
          local_168 = param_1[2];
          uStack_160 = param_1[3];
          local_248 = local_1f8;
          uStack_240 = uStack_1f0;
          local_228 = local_1d8;
          uStack_220 = uStack_1d0;
          local_178 = *param_1;
          uStack_170 = param_1[1];
          local_208 = local_2a8;
          uStack_200 = uStack_2a0;
          local_1e8 = local_288;
          uStack_1e0 = uStack_280;
          local_1f8 = local_298;
          uStack_1f0 = uStack_290;
          local_1c8 = local_268;
          uStack_1c0 = uStack_260;
          local_1a8 = *param_1;
          uStack_1a0 = param_1[1];
          local_1d8 = local_278;
          uStack_1d0 = uStack_270;
          local_198 = param_1[2];
          uStack_190 = param_1[3];
          local_148 = uVar22;
          uStack_140 = uVar6;
          local_138 = uVar7;
          uStack_130 = uVar8;
          local_128 = uVar9;
          uStack_120 = uVar10;
          local_118 = uVar11;
          uStack_110 = uVar12;
          local_108 = uVar13;
          uStack_100 = uVar14;
          local_2a8 = uVar22;
          uStack_2a0 = uVar6;
          local_298 = uVar7;
          uStack_290 = uVar8;
          local_288 = uVar9;
          uStack_280 = uVar10;
          local_278 = uVar11;
          uStack_270 = uVar12;
          local_268 = uVar13;
          uStack_260 = uVar14;
          local_158 = local_188;
          bVar15 = FUN_144d19620(&local_1a8,&local_2a8,&local_208);
          bVar16 = FUN_144d19620(&local_178,&local_258,&local_148);
          bVar16 = bVar16 ^ bVar15;
        }
        else {
          bVar16 = (byte)((uint)iVar17 >> 0x1f);
        }
        if (bVar16 == 0) {
          lVar19 = *param_2;
          lVar21 = param_2[2];
          iVar17 = piVar24[2];
          iVar5 = *(int *)(lVar27 + 4);
          piVar26 = (int *)((longlong)iVar17 * 0x20 + lVar21);
          piVar25 = (int *)((longlong)iVar5 * 0x20 + lVar21);
          lVar21 = (longlong)*(int *)((longlong)piVar26[2] * 0x20 + lVar21);
          lVar20 = (longlong)*piVar26;
          puVar1 = (undefined8 *)(lVar19 + lVar21 * 0x50);
          local_258 = *puVar1;
          uStack_250 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar21 * 0x50);
          local_248 = *puVar1;
          uStack_240 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar21 * 0x50);
          local_238 = *puVar1;
          uStack_230 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar21 * 0x50);
          local_228 = *puVar1;
          uStack_220 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x40 + lVar21 * 0x50);
          local_218 = *puVar1;
          uStack_210 = puVar1[1];
          lVar21 = (longlong)*piVar25;
          puVar1 = (undefined8 *)(lVar19 + lVar20 * 0x50);
          local_2a8 = *puVar1;
          uStack_2a0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar20 * 0x50);
          local_298 = *puVar1;
          uStack_290 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar20 * 0x50);
          local_288 = *puVar1;
          uStack_280 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar20 * 0x50);
          local_278 = *puVar1;
          uStack_270 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x40 + lVar20 * 0x50);
          local_268 = *puVar1;
          uStack_260 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + lVar21 * 0x50);
          local_208 = *puVar1;
          uStack_200 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar21 * 0x50);
          local_1f8 = *puVar1;
          uStack_1f0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar21 * 0x50);
          local_1e8 = *puVar1;
          uStack_1e0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar21 * 0x50);
          local_1d8 = *puVar1;
          uStack_1d0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar19 + 0x40 + lVar21 * 0x50);
          local_1c8 = *puVar1;
          uStack_1c0 = puVar1[1];
          iVar18 = FUN_144d19c30(&local_208,&local_2a8,&local_258);
          if (iVar18 == 0) {
            local_188 = *(undefined4 *)(param_1 + 4);
            local_a8 = local_208;
            uStack_a0 = uStack_200;
            local_88 = local_1e8;
            uStack_80 = uStack_1e0;
            local_68 = local_1c8;
            uStack_60 = uStack_1c0;
            local_198 = param_1[2];
            uStack_190 = param_1[3];
            local_98 = local_1f8;
            uStack_90 = uStack_1f0;
            local_78 = local_1d8;
            uStack_70 = uStack_1d0;
            local_1a8 = *param_1;
            uStack_1a0 = param_1[1];
            local_148 = local_258;
            uStack_140 = uStack_250;
            local_128 = local_238;
            uStack_120 = uStack_230;
            local_138 = local_248;
            uStack_130 = uStack_240;
            local_108 = local_218;
            uStack_100 = uStack_210;
            local_178 = *param_1;
            uStack_170 = param_1[1];
            local_118 = local_228;
            uStack_110 = uStack_220;
            local_168 = param_1[2];
            uStack_160 = param_1[3];
            local_f8 = local_2a8;
            uStack_f0 = uStack_2a0;
            local_e8 = local_298;
            uStack_e0 = uStack_290;
            local_d8 = local_288;
            uStack_d0 = uStack_280;
            local_c8 = (undefined4)local_278;
            uStack_c4 = local_278._4_4_;
            uStack_c0 = (undefined4)uStack_270;
            uStack_bc = uStack_270._4_4_;
            local_b8 = (undefined4)local_268;
            uStack_b4 = local_268._4_4_;
            uStack_b0 = (undefined4)uStack_260;
            uStack_ac = uStack_260._4_4_;
            local_158 = local_188;
            bVar15 = FUN_144d19620(&local_178,&local_2a8,&local_148);
            bVar16 = FUN_144d19620(&local_1a8,&local_a8,&local_f8);
            bVar16 = bVar16 ^ bVar15;
          }
          else {
            bVar16 = (byte)((uint)iVar18 >> 0x1f);
          }
          if (bVar16 == 0) {
            uVar23 = uVar23 + 0x37af4db;
            local_1b8[2] = iVar4;
            *(int *)(local_1b0 + 4) = iVar3;
            piVar25[2] = iVar17;
            piVar26[1] = iVar5;
            piVar24[7] = piVar24[7] | 1;
            *(uint *)(lVar27 + 0x1c) = *(uint *)(lVar27 + 0x1c) | 1;
            piVar24[3] = -1;
            *(undefined4 *)(lVar27 + 0xc) = 0xffffffff;
            if (uVar23 < 0x37af4db) {
              uVar22 = 0x5dc7f46d;
              goto LAB_144d1d460;
            }
          }
          else {
            piVar24[7] = piVar24[7] | 4;
            uVar23 = uVar23 + 0x35e0369;
            *(uint *)(lVar27 + 0x1c) = *(uint *)(lVar27 + 0x1c) | 4;
            if (uVar23 < 0x35e0369) {
              uVar22 = 0xf0b79d89;
LAB_144d1d460:
              FUN_144be90e0(uVar22);
            }
          }
        }
        else {
          piVar24[7] = piVar24[7] | 4;
          uVar23 = uVar23 + 0x1c6bc32;
          *(uint *)(lVar27 + 0x1c) = *(uint *)(lVar27 + 0x1c) | 4;
          if (uVar23 < 0x1c6bc32) {
            FUN_144be90e0(0x92ca1871);
          }
        }
      }
      else {
        uVar23 = uVar23 + 0x238664;
        if (uVar23 < 0x238664) {
          FUN_144be90e0(0xf760a5aa);
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar2);
  }
  FUN_144be90e0(0x7f3c9adc);
  return;
}



// FUNCTION 144d1d540 FUN_144d1d540 body=301 status=ok
// SIG undefined FUN_144d1d540(void)

float FUN_144d1d540(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = 2;
  lVar4 = 2;
  do {
    uVar6 = param_1[lVar4];
    if (uVar6 != 0) {
      uVar5 = (uint)uVar6 | (uint)(uVar6 >> 1) & 0x7fffffff;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      uVar5 = (uint)(uVar6 >> 0x20);
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      iVar1 = 0x20 - iVar3;
      if (0x1f < 0x20 - iVar3) {
        iVar1 = 0x40 - iVar2;
      }
      *param_2 = iVar7 * 0x40 - iVar1;
      uVar6 = param_1[iVar7] << ((byte)iVar1 & 0x3f);
      if (iVar1 != 0) {
        uVar6 = uVar6 | param_1[(longlong)iVar7 + -1] >> (0x40 - (byte)iVar1 & 0x3f);
      }
      goto LAB_144d1d62d;
    }
    iVar7 = iVar7 + -1;
    lVar4 = lVar4 + -1;
  } while (0 < lVar4);
  *param_2 = 0;
  uVar6 = *param_1;
LAB_144d1d62d:
  if ((longlong)uVar6 < 0) {
    return (float)uVar6;
  }
  return (float)(longlong)uVar6;
}



// FUNCTION 144d1d670 FUN_144d1d670 body=1439 status=ok
// SIG undefined FUN_144d1d670(void)

void FUN_144d1d670(int *param_1,longlong *param_2,longlong param_3,int param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  int local_res20;
  int local_c8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined1 local_80 [88];
  
  if (param_4 == -1) {
    *param_5 = -1;
    *param_6 = -1;
    *param_7 = -1;
    *param_8 = -1;
    iVar14 = *param_1;
    if (iVar14 != -1) {
      lVar1 = *param_2;
      do {
        lVar15 = (longlong)iVar14 * 0xf0 + lVar1;
        fVar17 = *(float *)(lVar15 + 0xd4) * *(float *)(param_3 + 0x4c) +
                 *(float *)(lVar15 + 0xd0) * *(float *)(param_3 + 0x48) + *(float *)(lVar15 + 0xd8);
        fVar16 = (ABS(*(float *)(param_3 + 0x48)) * ABS(*(float *)(lVar15 + 0xd0)) +
                  ABS(*(float *)(param_3 + 0x4c)) * ABS(*(float *)(lVar15 + 0xd4)) +
                 ABS(*(float *)(lVar15 + 0xd8))) * 7.1525574e-07;
        piVar7 = param_5;
        if (fVar17 <= fVar16) {
          if (fVar17 < -fVar16) {
LAB_144d1dbd9:
            *param_8 = iVar14;
            return;
          }
          FUN_144cd89a0(param_3 + 0x30,lVar15 + 0xc0,&local_b0);
          uVar8 = local_a0;
          uVar11 = local_98;
          if (*(longlong *)(lVar15 + 200) < 0) {
            uVar8 = local_a0 - *(ulonglong *)(param_3 + 0x30);
            uVar4 = (ulonglong)(local_a0 < *(ulonglong *)(param_3 + 0x30));
            uVar5 = local_98 - *(ulonglong *)(param_3 + 0x38);
            uVar11 = uVar5 - uVar4;
            local_90 = (local_90 - *(longlong *)(param_3 + 0x40)) -
                       (ulonglong)(local_98 < *(ulonglong *)(param_3 + 0x38) || uVar5 < uVar4);
          }
          puVar6 = (ulonglong *)FUN_144d1ebc0(local_80,lVar15 + 0xa0,param_3);
          uVar4 = (ulonglong)CARRY8(*puVar6,local_b0);
          uVar2 = puVar6[1] + local_a8;
          uVar5 = (ulonglong)(CARRY8(puVar6[1],local_a8) || CARRY8(uVar2,uVar4));
          uVar3 = puVar6[2] + uVar8;
          lVar13 = puVar6[3] + uVar11 + (ulonglong)(CARRY8(puVar6[2],uVar8) || CARRY8(uVar3,uVar5));
          uVar12 = (uint)(lVar13 >> 0x3f) |
                   (uint)((uVar3 + uVar5 != 0 || (uVar2 + uVar4 != 0 || *puVar6 + local_b0 != 0)) ||
                         lVar13 != 0);
          if ((int)uVar12 < 1) {
            if (uVar12 != 0) goto LAB_144d1dbd9;
            piVar7 = param_7;
            if (*param_6 == -1) {
              *param_6 = iVar14;
            }
          }
        }
        *piVar7 = iVar14;
        iVar14 = *(int *)(lVar15 + 0xe4);
      } while (iVar14 != -1);
    }
  }
  else {
    lVar1 = *param_2;
    iVar14 = *(int *)((longlong)param_4 * 0xf0 + 0xe0 + lVar1);
    local_c8 = param_4;
    if (iVar14 != -1) {
      while( true ) {
        iVar10 = iVar14;
        lVar15 = (longlong)iVar10 * 0xf0 + lVar1;
        fVar17 = *(float *)(lVar15 + 0xd4) * *(float *)(param_3 + 0x4c) +
                 *(float *)(lVar15 + 0xd0) * *(float *)(param_3 + 0x48) + *(float *)(lVar15 + 0xd8);
        fVar16 = (ABS(*(float *)(param_3 + 0x48)) * ABS(*(float *)(lVar15 + 0xd0)) +
                  ABS(*(float *)(param_3 + 0x4c)) * ABS(*(float *)(lVar15 + 0xd4)) +
                 ABS(*(float *)(lVar15 + 0xd8))) * 7.1525574e-07;
        iVar14 = iVar10;
        if ((fVar16 < fVar17) || (fVar17 < -fVar16)) break;
        FUN_144cd89a0(param_3 + 0x30,lVar15 + 0xc0,&local_b0);
        uVar8 = local_a0;
        uVar11 = local_98;
        if (*(longlong *)(lVar15 + 200) < 0) {
          uVar8 = local_a0 - *(ulonglong *)(param_3 + 0x30);
          uVar4 = (ulonglong)(local_a0 < *(ulonglong *)(param_3 + 0x30));
          uVar5 = local_98 - *(ulonglong *)(param_3 + 0x38);
          uVar11 = uVar5 - uVar4;
          local_90 = (local_90 - *(longlong *)(param_3 + 0x40)) -
                     (ulonglong)(local_98 < *(ulonglong *)(param_3 + 0x38) || uVar5 < uVar4);
        }
        puVar6 = (ulonglong *)FUN_144d1ebc0(local_80,lVar15 + 0xa0,param_3);
        uVar4 = (ulonglong)CARRY8(*puVar6,local_b0);
        uVar2 = puVar6[1] + local_a8;
        uVar5 = (ulonglong)(CARRY8(puVar6[1],local_a8) || CARRY8(uVar2,uVar4));
        uVar3 = puVar6[2] + uVar8;
        lVar13 = puVar6[3] + uVar11 + (ulonglong)(CARRY8(puVar6[2],uVar8) || CARRY8(uVar3,uVar5));
        if ((lVar13 < 0 ||
             ((uVar3 + uVar5 != 0 || (uVar2 + uVar4 != 0 || *puVar6 + local_b0 != 0)) || lVar13 != 0
             )) || (iVar14 = *(int *)(lVar15 + 0xe0), local_c8 = iVar10, iVar14 == -1)) break;
      }
    }
    iVar10 = *(int *)((longlong)param_4 * 0xf0 + 0xe4 + lVar1);
    local_res20 = param_4;
    if (iVar10 != -1) {
      while( true ) {
        iVar9 = iVar10;
        lVar15 = (longlong)iVar9 * 0xf0 + lVar1;
        fVar17 = *(float *)(lVar15 + 0xd4) * *(float *)(param_3 + 0x4c) +
                 *(float *)(lVar15 + 0xd0) * *(float *)(param_3 + 0x48) + *(float *)(lVar15 + 0xd8);
        fVar16 = (ABS(*(float *)(lVar15 + 0xd0)) * ABS(*(float *)(param_3 + 0x48)) +
                  ABS(*(float *)(param_3 + 0x4c)) * ABS(*(float *)(lVar15 + 0xd4)) +
                 ABS(*(float *)(lVar15 + 0xd8))) * 7.1525574e-07;
        iVar10 = iVar9;
        if ((fVar16 < fVar17) || (fVar17 < -fVar16)) break;
        FUN_144cd89a0(param_3 + 0x30,lVar15 + 0xc0,&local_b0);
        uVar8 = local_a0;
        uVar11 = local_98;
        if (*(longlong *)(lVar15 + 200) < 0) {
          uVar8 = local_a0 - *(ulonglong *)(param_3 + 0x30);
          uVar4 = (ulonglong)(local_a0 < *(ulonglong *)(param_3 + 0x30));
          uVar5 = local_98 - *(ulonglong *)(param_3 + 0x38);
          uVar11 = uVar5 - uVar4;
          local_90 = (local_90 - *(longlong *)(param_3 + 0x40)) -
                     (ulonglong)(local_98 < *(ulonglong *)(param_3 + 0x38) || uVar5 < uVar4);
        }
        puVar6 = (ulonglong *)FUN_144d1ebc0(local_80,lVar15 + 0xa0,param_3);
        uVar4 = (ulonglong)CARRY8(*puVar6,local_b0);
        uVar2 = puVar6[1] + local_a8;
        uVar5 = (ulonglong)(CARRY8(puVar6[1],local_a8) || CARRY8(uVar2,uVar4));
        uVar3 = puVar6[2] + uVar8;
        lVar13 = puVar6[3] + uVar11 + (ulonglong)(CARRY8(puVar6[2],uVar8) || CARRY8(uVar3,uVar5));
        if ((((uVar3 + uVar5 != 0 || (uVar2 + uVar4 != 0 || *puVar6 + local_b0 != 0)) || lVar13 != 0
             ) || lVar13 < 0) ||
           (iVar10 = *(int *)(lVar15 + 0xe4), local_res20 = iVar9, iVar10 == -1)) break;
      }
    }
    *param_5 = iVar14;
    *param_6 = local_c8;
    *param_7 = local_res20;
    *param_8 = iVar10;
  }
  return;
}



// FUNCTION 144d1dc10 FUN_144d1dc10 body=2300 status=ok
// SIG undefined FUN_144d1dc10(void)

void FUN_144d1dc10(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  int iVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  longlong lVar43;
  float fVar44;
  longlong lVar45;
  int local_278;
  int local_274;
  int local_270;
  longlong local_260;
  undefined1 local_250 [16];
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  longlong lStack_230;
  longlong lStack_228;
  undefined1 local_220 [16];
  undefined8 uStack_210;
  undefined1 local_208 [16];
  longlong lStack_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  ulonglong local_1c8;
  longlong lStack_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  int iStack_194;
  ulonglong local_188;
  ulonglong uStack_180;
  longlong local_178;
  longlong lStack_170;
  undefined1 local_168 [16];
  ulonglong local_158;
  ulonglong uStack_150;
  longlong local_148;
  longlong lStack_140;
  undefined1 local_138 [16];
  undefined1 local_118 [16];
  ulonglong local_108;
  longlong lStack_100;
  longlong local_e8;
  undefined8 uStack_e0;
  
  iVar35 = (int)param_2[1];
  if (1 < iVar35) {
    local_274 = 0;
    lVar37 = 0;
    local_270 = 0;
    local_260 = 0;
    do {
      local_274 = local_274 + 1;
      local_278 = *(int *)(*param_2 + lVar37 * 4);
      lVar37 = lVar37 + 1;
      iVar32 = local_278;
      if (local_274 < iVar35) {
        do {
          iVar35 = *(int *)(*param_2 + lVar37 * 4);
          if (*(int *)(*param_2 + -4 + lVar37 * 4) != iVar35) {
            puVar33 = (undefined8 *)((longlong)iVar35 * 0xf0 + *(longlong *)(param_1 + 0x1a68));
            puVar34 = (undefined8 *)((longlong)iVar32 * 0xf0 + *(longlong *)(param_1 + 0x1a68));
            fVar44 = *(float *)(puVar34 + 0x1a) * *(float *)((longlong)puVar33 + 0xd4) -
                     *(float *)(puVar33 + 0x1a) * *(float *)((longlong)puVar34 + 0xd4);
            fVar42 = (ABS(*(float *)(puVar33 + 0x1a)) * ABS(*(float *)((longlong)puVar34 + 0xd4)) +
                     ABS(*(float *)((longlong)puVar33 + 0xd4)) * ABS(*(float *)(puVar34 + 0x1a))) *
                     4.7683716e-07;
            if ((fVar42 < fVar44) || (fVar44 < -fVar42)) break;
            puVar24 = (ulonglong *)FUN_144d1f510(local_250,puVar34 + 0x16,puVar33 + 0x14);
            puVar25 = (ulonglong *)FUN_144d1f510(local_220,puVar34 + 0x14,puVar33 + 0x16);
            uVar31 = (ulonglong)(*puVar25 < *puVar24);
            uVar4 = puVar25[1] - puVar24[1];
            uVar3 = (ulonglong)(puVar25[1] < puVar24[1] || uVar4 < uVar31);
            if ((longlong)((puVar25[2] - puVar24[2]) - uVar3) < 0 ||
                (puVar25[2] - puVar24[2] != uVar3 || (uVar4 != uVar31 || *puVar25 != *puVar24)))
            break;
            lVar36 = puVar33[0x12];
            uStack_e0 = puVar33[0x13];
            lVar17 = puVar34[0x12];
            uStack_1a0 = puVar34[0x13];
            local_118 = *(undefined1 (*) [16])(puVar33 + 0xc);
            lVar43 = local_118._0_8_;
            local_108 = puVar33[0xe];
            lVar30 = puVar33[0xf];
            local_1d8 = *(undefined1 (*) [16])(puVar34 + 0xc);
            lVar45 = local_1d8._0_8_;
            local_1c8 = puVar34[0xe];
            lVar9 = puVar34[0xf];
            uVar31 = puVar33[10];
            uVar3 = puVar33[0xb];
            auVar39 = *(undefined1 (*) [16])(puVar33 + 0x10);
            uVar4 = puVar34[10];
            uVar14 = puVar34[0xb];
            auVar40 = *(undefined1 (*) [16])(puVar34 + 0x10);
            fVar44 = (float)uStack_1a0 - (float)uStack_e0;
            fVar42 = (ABS((float)uStack_e0) + ABS((float)uStack_1a0)) * 3.5762787e-07;
            lStack_1c0 = lVar9;
            local_1a8 = lVar17;
            lStack_100 = lVar30;
            local_e8 = lVar36;
            if (fVar42 < fVar44) {
LAB_144d1e242:
              plVar2 = (longlong *)param_4[1];
              iVar32 = (int)plVar2[1];
              iVar38 = iVar32 + 2;
              if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar38) {
                FUN_140163394(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar38);
              }
              lVar30 = *plVar2;
              *(int *)(plVar2 + 1) = iVar38;
              *(int *)(lVar30 + (longlong)iVar32 * 4) = iVar35;
              *(int *)(lVar30 + 4 + (longlong)iVar32 * 4) = local_278;
              local_198 = 0;
              iStack_194 = local_278;
              piVar1 = (int *)((longlong)(int)((longlong *)*param_4)[1] * 0x68 + -8 +
                              *(longlong *)*param_4);
              *piVar1 = *piVar1 + 1;
              *(uint *)(puVar34 + 0x1d) = *(uint *)(puVar34 + 0x1d) & 0xfffffffd;
              uVar7 = puVar33[0xb];
              *puVar34 = puVar33[10];
              puVar34[1] = uVar7;
              uVar7 = puVar33[0xd];
              puVar34[2] = puVar33[0xc];
              puVar34[3] = uVar7;
              uVar7 = puVar33[0xf];
              puVar34[4] = puVar33[0xe];
              puVar34[5] = uVar7;
              *(undefined1 (*) [16])(puVar34 + 6) = *(undefined1 (*) [16])(puVar33 + 0x10);
              uVar7 = puVar33[0x13];
              puVar34[8] = puVar33[0x12];
              puVar34[9] = uVar7;
              uVar31 = (ulonglong)*(int *)(param_1 + 0x1a64);
              uVar18 = puVar33[10];
              uVar19 = puVar33[0xb];
              uVar7 = puVar33[0xc];
              uVar8 = puVar33[0xd];
              uVar10 = puVar33[0xe];
              uVar11 = puVar33[0xf];
              uVar12 = puVar33[0x10];
              uVar13 = puVar33[0x11];
              uVar15 = puVar33[0x12];
              uVar16 = puVar33[0x13];
              if (*(int *)(param_1 + 0x1a64) == -1) {
                uVar31 = (ulonglong)*(uint *)(param_1 + 0x58);
                iVar32 = *(uint *)(param_1 + 0x58) + 1;
                if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar32) {
                  FUN_144d1fd10(param_1 + 0x50,&PTR_vftable_14c6e47c0,(longlong)iVar32);
                }
                *(int *)(param_1 + 0x58) = iVar32;
              }
              else {
                *(undefined4 *)(param_1 + 0x1a64) =
                     *(undefined4 *)(uVar31 * 0x68 + 0x60 + *(longlong *)(param_1 + 0x50));
              }
              iVar29 = (int)uVar31;
              puVar33 = (undefined8 *)((longlong)iVar29 * 0x68 + *(longlong *)(param_1 + 0x50));
              *puVar33 = uVar18;
              puVar33[1] = uVar19;
              puVar33[0xb] = 0xffffffffffffffff;
              puVar33[2] = uVar7;
              puVar33[3] = uVar8;
              *(undefined4 *)(puVar33 + 0xc) = 0xffffffff;
              puVar33[4] = uVar10;
              puVar33[5] = uVar11;
              *(undefined1 *)((longlong)puVar33 + 100) = 0;
              puVar33[6] = uVar12;
              puVar33[7] = uVar13;
              puVar33[8] = uVar15;
              puVar33[9] = uVar16;
              puVar33[10] = CONCAT44(iStack_194,local_198);
              iVar32 = *(int *)(param_1 + 0x1a60);
              iVar38 = iVar29;
              if ((iVar32 != -1) && (iVar38 = iVar32, iVar29 != -1)) {
                iVar38 = FUN_144d1a8f0(param_1 + 0x28,iVar32,uVar31 & 0xffffffff);
              }
              *(int *)(param_1 + 0x1a60) = iVar38;
              iVar32 = iVar35;
              local_278 = iVar35;
            }
            else {
              if (-fVar42 <= fVar44) {
                lVar27 = auVar40._8_8_;
                lVar26 = auVar39._8_8_;
                if (lVar17 == lVar36 && (lVar27 == lVar26 && auVar40._0_8_ == auVar39._0_8_)) {
                  lVar36 = (lVar45 - lVar43) -
                           (ulonglong)
                           (uVar14 < uVar3 || uVar14 - uVar3 < (ulonglong)(uVar4 < uVar31));
                  uVar28 = (uint)(lVar36 != 0 ||
                                 (uVar14 - uVar3 != (ulonglong)(uVar4 < uVar31) || uVar4 != uVar31))
                           | (uint)(lVar36 >> 0x3f);
                  if (uVar28 == 0) {
                    uVar31 = (ulonglong)(local_1d8._8_8_ < local_118._8_8_);
                    lVar30 = (lVar9 - lVar30) -
                             (ulonglong)(local_1c8 < local_108 || local_1c8 - local_108 < uVar31);
                    uVar28 = (uint)(lVar30 >> 0x3f) |
                             (uint)(lVar30 != 0 ||
                                   (local_1c8 - local_108 != uVar31 ||
                                   local_1d8._8_8_ != local_118._8_8_));
                  }
                }
                else {
                  local_208._0_4_ = auVar39._0_4_;
                  uVar22 = local_208._0_4_;
                  local_208._4_4_ = auVar39._4_4_;
                  uVar23 = local_208._4_4_;
                  local_238 = auVar40._0_4_;
                  uVar20 = local_238;
                  uStack_234 = auVar40._4_4_;
                  uVar21 = uStack_234;
                  local_168._8_8_ = lVar36;
                  local_168._0_8_ = lVar26;
                  local_138._8_8_ = lVar17;
                  local_138._0_8_ = lVar27;
                  uStack_240 = lVar45;
                  lStack_230 = lVar27;
                  lStack_228 = lVar17;
                  uStack_210 = lVar43;
                  local_208 = auVar39;
                  lStack_1f8 = lVar36;
                  local_188 = uVar31;
                  uStack_180 = uVar3;
                  local_178 = lVar43;
                  lStack_170 = auVar39._0_8_;
                  local_158 = uVar4;
                  uStack_150 = uVar14;
                  local_148 = lVar45;
                  lStack_140 = auVar40._0_8_;
                  uVar28 = FUN_144d1eaa0(&local_158,&local_188);
                  if (uVar28 == 0) {
                    auVar39._4_4_ = uStack_1a0._4_4_;
                    auVar39._0_4_ = uStack_1a0._4_4_;
                    auVar39._8_4_ = uStack_1a0._4_4_;
                    auVar39._12_4_ = uStack_1a0._4_4_;
                    fVar42 = (ABS(uStack_e0._4_4_) + ABS(uStack_1a0._4_4_)) * 3.5762787e-07;
                    if (fVar42 < uStack_1a0._4_4_ - uStack_e0._4_4_) goto LAB_144d1e242;
                    if (uStack_1a0._4_4_ - uStack_e0._4_4_ < -fVar42) {
                      uVar28 = 0xffffffff;
                      goto LAB_144d1e149;
                    }
                    auVar5._4_8_ = auVar39._8_8_;
                    auVar5._0_4_ = uStack_210._4_4_;
                    auVar40._0_8_ = auVar5._0_8_ << 0x20;
                    auVar40._8_4_ = uVar22;
                    auVar40._12_4_ = uVar23;
                    local_138._8_8_ = lVar36;
                    local_138._0_8_ = lVar26;
                    lStack_140 = auVar40._8_8_;
                    local_168._8_8_ = lVar17;
                    local_168._0_8_ = lVar27;
                    local_208._8_8_ = lVar26;
                    local_208._0_8_ = lStack_140;
                    auVar6._4_8_ = lStack_140;
                    auVar6._0_4_ = uStack_240._4_4_;
                    auVar41._0_8_ = auVar6._0_8_ << 0x20;
                    auVar41._8_4_ = uVar20;
                    auVar41._12_4_ = uVar21;
                    local_158 = local_118._8_8_;
                    uStack_150 = local_108;
                    lStack_170 = auVar41._8_8_;
                    local_188 = local_1d8._8_8_;
                    uStack_180 = local_1c8;
                    uStack_240 = lVar9;
                    local_238 = uVar20;
                    uStack_234 = uVar21;
                    lStack_230 = lVar27;
                    lStack_228 = lVar17;
                    uStack_210 = lVar30;
                    lStack_1f8 = lVar36;
                    local_178 = lVar9;
                    local_148 = lVar30;
                    uVar28 = FUN_144d1eaa0(&local_188,&local_158);
                  }
                }
                if (0 < (int)uVar28) goto LAB_144d1e242;
              }
              else {
                uVar28 = 0xffffffff;
              }
LAB_144d1e149:
              plVar2 = (longlong *)param_4[1];
              iVar32 = (int)plVar2[1];
              iVar38 = iVar32 + 2;
              if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar38) {
                FUN_140163394(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar38);
              }
              lVar30 = *plVar2;
              *(int *)(plVar2 + 1) = iVar38;
              *(int *)(lVar30 + (longlong)iVar32 * 4) = local_278;
              *(int *)(lVar30 + 4 + (longlong)iVar32 * 4) = iVar35;
              piVar1 = (int *)((longlong)(int)((longlong *)*param_4)[1] * 0x68 + -8 +
                              *(longlong *)*param_4);
              *piVar1 = *piVar1 + 1;
              *(uint *)(puVar33 + 0x1d) = *(uint *)(puVar33 + 0x1d) & 0xfffffffd;
              iVar32 = local_278;
              if (uVar28 != 0) {
                uVar7 = puVar34[0xb];
                local_198 = 0;
                *puVar33 = puVar34[10];
                puVar33[1] = uVar7;
                uVar7 = puVar34[0xd];
                puVar33[2] = puVar34[0xc];
                puVar33[3] = uVar7;
                uVar7 = puVar34[0xf];
                puVar33[4] = puVar34[0xe];
                puVar33[5] = uVar7;
                uVar7 = puVar34[0x11];
                puVar33[6] = puVar34[0x10];
                puVar33[7] = uVar7;
                uVar7 = puVar34[0x13];
                puVar33[8] = puVar34[0x12];
                puVar33[9] = uVar7;
                local_1e8 = puVar34[10];
                uStack_1e0 = puVar34[0xb];
                local_1d8 = *(undefined1 (*) [16])(puVar34 + 0xc);
                local_1c8 = puVar34[0xe];
                lStack_1c0 = puVar34[0xf];
                local_1b8 = *(undefined1 (*) [16])(puVar34 + 0x10);
                local_1a8 = puVar34[0x12];
                uStack_1a0 = puVar34[0x13];
                iStack_194 = iVar35;
                FUN_144d1a7d0(param_1 + 0x28,&local_1e8);
              }
            }
          }
          lVar37 = lVar37 + 1;
          local_274 = local_274 + 1;
        } while (local_274 < (int)param_2[1]);
      }
      local_270 = local_270 + 1;
      *(int *)(local_260 + *param_2) = local_278;
      local_260 = local_260 + 4;
      iVar35 = (int)param_2[1];
    } while (local_274 < iVar35);
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < local_270) {
      FUN_140163394(param_2,&PTR_vftable_14c6e47c0,(longlong)local_270);
    }
    if (((int)param_2[1] < local_270) || (local_270 < (int)param_2[1])) {
      *(int *)(param_2 + 1) = local_270;
    }
  }
  return;
}



// FUNCTION 144d1e510 FUN_144d1e510 body=419 status=ok
// SIG undefined FUN_144d1e510(void)

ulonglong FUN_144d1e510(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  
  plVar3 = *(longlong **)(param_3 + 0x38);
  *(int *)(param_3 + 0x48) = (int)plVar3[1];
  iVar19 = (int)plVar3[1] + 1;
  if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar19) {
    FUN_144d1fe60(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar19);
  }
  uVar16 = (ulonglong)(int)plVar3[1];
  puVar17 = (undefined8 *)(uVar16 * 0x50 + *plVar3);
  if (puVar17 != (undefined8 *)0x0) {
    uVar11 = param_1[1];
    uVar12 = param_1[2];
    uVar13 = param_1[3];
    *puVar17 = *param_1;
    puVar17[1] = uVar11;
    uVar11 = param_1[4];
    uVar14 = param_1[5];
    puVar17[2] = uVar12;
    puVar17[3] = uVar13;
    uVar12 = param_1[6];
    uVar13 = param_1[7];
    puVar17[4] = uVar11;
    puVar17[5] = uVar14;
    uVar15 = *(undefined4 *)(param_1 + 8);
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x44);
    uVar9 = *(undefined4 *)(param_1 + 9);
    uVar10 = *(undefined4 *)((longlong)param_1 + 0x4c);
    puVar17[6] = uVar12;
    puVar17[7] = uVar13;
    *(undefined4 *)(puVar17 + 8) = uVar15;
    *(undefined4 *)((longlong)puVar17 + 0x44) = uVar8;
    *(undefined4 *)(puVar17 + 9) = uVar9;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar10;
  }
  *(int *)(plVar3 + 1) = iVar19;
  uVar21 = 0xffffffff;
  lVar4 = *(longlong *)(param_3 + 0x38);
  *(undefined1 *)(param_3 + 0x4c) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0xffffffffffffffff;
  piVar20 = (int *)*param_2;
  piVar5 = (int *)param_2[1];
  lVar6 = *(longlong *)(param_3 + 0x28);
  do {
    if (piVar20 == piVar5) {
      *(uint *)(param_3 + 0x44) = uVar21;
      return CONCAT71((int7)(uVar16 >> 8),1);
    }
    iVar19 = *(int *)(lVar6 + (longlong)*piVar20 * 8);
    puVar1 = (undefined4 *)(lVar6 + (longlong)*piVar20 * 8);
    if (iVar19 != -1) {
      if (uVar21 == 0xffffffff) {
        *(int *)(param_3 + 0x40) = iVar19;
      }
      else {
        lVar7 = *(longlong *)(lVar4 + 0x10);
        lVar18 = (longlong)iVar19 * 0x20;
        *(int *)((longlong)(int)uVar21 * 0x20 + 8 + lVar7) = iVar19;
        *(uint *)(lVar7 + 4 + lVar18) = uVar21;
        *(undefined4 *)(lVar7 + lVar18) = *(undefined4 *)(param_3 + 0x48);
        *(undefined1 *)(param_3 + 0x4c) = 1;
        puVar17 = (undefined8 *)param_4[1];
        lVar7 = *(longlong *)(*param_4 + 0x10);
        lVar18 = (longlong)*(int *)((longlong)*(int *)(lVar7 + 4 + lVar18) * 0x20 + 0x10 + lVar7);
        if ((*(byte *)(lVar18 * 0x20 + 0x1c + lVar7) & 2) != 0) {
          uVar15 = FUN_144d1f2e0(lVar18,iVar19);
          FUN_144d1f620(uVar15,*puVar17);
        }
        uVar16 = FUN_144d1f620(iVar19,*puVar17);
        if ((char)uVar16 == '\0') {
          return uVar16 & 0xffffffffffffff00;
        }
        uVar21 = 0xffffffff;
      }
      *puVar1 = 0xffffffff;
    }
    uVar2 = puVar1[1];
    uVar16 = (ulonglong)uVar2;
    if (uVar2 != 0xffffffff) {
      puVar1[1] = 0xffffffff;
      uVar21 = uVar2;
    }
    piVar20 = piVar20 + 1;
  } while( true );
}



// FUNCTION 144d1e6c0 FUN_144d1e6c0 body=977 status=ok
// SIG undefined FUN_144d1e6c0(void)

undefined8
FUN_144d1e6c0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4,longlong param_5,
             longlong *param_6)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint local_res18 [2];
  longlong local_res20;
  int local_50;
  undefined4 uStack_4c;
  
  plVar7 = param_6;
  lVar6 = param_5;
  uVar17 = 0xffffffff;
  puVar3 = (undefined8 *)param_4[1];
  param_4 = (undefined8 *)*param_4;
  local_res20 = *(longlong *)(param_5 + 0x28);
  lVar4 = *(longlong *)(param_5 + 0x38);
  local_res18[0] = 0xffffffff;
  if (param_4 != puVar3) {
    do {
      iVar16 = *(int *)(param_4 + 1);
      local_50 = (int)*param_4;
      puVar2 = (uint *)(local_res20 + (longlong)local_50 * 8);
      uStack_4c = (undefined4)((ulonglong)*param_4 >> 0x20);
      uVar9 = local_res18[0];
      if (param_3 != -1) {
        uVar9 = FUN_144d1a710(*(undefined8 *)(lVar6 + 0x38),1);
        lVar18 = (longlong)(int)uVar9 * 0x20 + *(longlong *)(lVar4 + 0x10);
        *puVar2 = uVar9;
        *(undefined4 *)(lVar18 + 0x14) = uStack_4c;
        *(int *)(lVar18 + 0x18) = param_3;
        iVar10 = (int)uVar17;
        if (iVar10 == -1) {
          iVar10 = *(int *)(lVar6 + 0x40);
          if (iVar10 == -1) goto LAB_144d1e825;
          bVar5 = false;
          *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
        }
        else {
          bVar5 = true;
          uVar17 = 0xffffffff;
        }
        lVar15 = *(longlong *)(lVar4 + 0x10);
        *(int *)(lVar18 + 8) = iVar10;
        lVar18 = (longlong)iVar10 * 0x20;
        *(uint *)(lVar15 + 4 + lVar18) = uVar9;
        *(undefined4 *)(lVar15 + lVar18) = *(undefined4 *)(lVar6 + 0x48);
        *(undefined1 *)(lVar6 + 0x4c) = 1;
        if (bVar5) {
          *(int *)(*(longlong *)(*plVar7 + 0x10) + 0x10 + lVar18) = iVar10;
          uVar9 = local_res18[0];
        }
        else {
          param_5._0_4_ = iVar10;
          cVar8 = FUN_144d1f250(&param_5,*(undefined4 *)(local_res20 + 4 + (longlong)param_2 * 8),
                                *plVar7);
          uVar9 = local_res18[0];
          if (cVar8 == '\0') {
            return 0;
          }
        }
      }
LAB_144d1e825:
      local_res18[0] = uVar9;
      if (iVar16 != -1) {
        uVar9 = FUN_144d1a710(*(undefined8 *)(lVar6 + 0x38),1);
        uVar17 = (ulonglong)(int)uVar9;
        puVar14 = (undefined4 *)(uVar17 * 0x20 + *(longlong *)(lVar4 + 0x10));
        puVar2[1] = uVar9;
        *puVar14 = *(undefined4 *)(lVar6 + 0x48);
        puVar14[5] = uStack_4c;
        puVar14[6] = iVar16;
        *(undefined1 *)(lVar6 + 0x4c) = 1;
        if (*puVar2 != 0xffffffff) {
          *(uint *)((longlong)(int)*puVar2 * 0x20 + 0xc + *(longlong *)(lVar4 + 0x10)) = uVar9;
          puVar14[3] = *puVar2;
        }
      }
      param_4 = (undefined8 *)((longlong)param_4 + 0xc);
      param_3 = iVar16;
    } while (param_4 != puVar3);
    iVar16 = (int)uVar17;
    if (local_res18[0] != 0xffffffff) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar18 = (longlong)iVar16 * 0x20;
      *(int *)((longlong)(int)local_res18[0] * 0x20 + 8 + lVar4) = iVar16;
      *(uint *)(lVar4 + 4 + lVar18) = local_res18[0];
      *(undefined4 *)(lVar4 + lVar18) = *(undefined4 *)(lVar6 + 0x48);
      *(undefined1 *)(lVar6 + 0x4c) = 1;
      lVar4 = *plVar7;
      iVar10 = *(int *)(local_res20 + 4 + (longlong)param_2 * 8);
      iVar13 = *(int *)(lVar4 + 0x18) + 2;
      if ((int)(*(uint *)(lVar4 + 0x1c) & 0x7fffffff) < iVar13) {
        FUN_144cc8530(lVar4 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar13);
      }
      lVar18 = (longlong)iVar10 * 0x20 + *(longlong *)(lVar4 + 0x10);
      iVar10 = FUN_144d1f2e0(uVar17 & 0xffffffff,*(undefined4 *)(lVar18 + 0x10),lVar4);
      *(int *)(lVar18 + 0x10) = iVar10 + 1;
      *(int *)(*(longlong *)(lVar4 + 0x10) + ((longlong)iVar16 * 4 + 2) * 8) = iVar16;
      goto LAB_144d1ea6f;
    }
    if (iVar16 != -1) {
      iVar10 = *(int *)(lVar6 + 0x44);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar15 = (longlong)iVar16 * 0x20;
      *(int *)((longlong)iVar10 * 0x20 + 8 + lVar4) = iVar16;
      *(int *)(lVar4 + 4 + lVar15) = iVar10;
      lVar4 = *plVar7;
      puVar3 = (undefined8 *)plVar7[1];
      lVar18 = *(longlong *)(lVar4 + 0x10);
      lVar15 = (longlong)*(int *)((longlong)*(int *)(lVar18 + 4 + lVar15) * 0x20 + 0x10 + lVar18);
      if ((*(byte *)(lVar15 * 0x20 + 0x1c + lVar18) & 2) != 0) {
        uVar11 = FUN_144d1f2e0(lVar15,uVar17 & 0xffffffff,lVar4);
        cVar8 = FUN_144d1f620(uVar11,*puVar3);
        if (cVar8 == '\0') {
          return 0;
        }
      }
      *(int *)(*(longlong *)(lVar4 + 0x10) + ((longlong)iVar16 * 4 + 2) * 8) = iVar16;
      goto LAB_144d1ea6f;
    }
  }
  local_res18[0] = *(uint *)(lVar6 + 0x40);
  if (local_res18[0] != 0xffffffff) {
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar16 = *(int *)(lVar6 + 0x44);
    lVar15 = (longlong)(int)local_res18[0] * 0x20;
    *(uint *)((longlong)iVar16 * 0x20 + 8 + lVar4) = local_res18[0];
    *(int *)(lVar4 + 4 + lVar15) = iVar16;
    *(undefined4 *)(lVar4 + lVar15) = *(undefined4 *)(lVar6 + 0x48);
    *(undefined1 *)(lVar6 + 0x4c) = 1;
    lVar4 = *plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    lVar18 = *(longlong *)(lVar4 + 0x10);
    uVar11 = *(undefined4 *)(local_res20 + 4 + (longlong)param_2 * 8);
    lVar15 = (longlong)*(int *)((longlong)*(int *)(lVar18 + 4 + lVar15) * 0x20 + 0x10 + lVar18);
    if ((*(byte *)(lVar15 * 0x20 + 0x1c + lVar18) & 2) != 0) {
      uVar12 = FUN_144d1f2e0(lVar15,local_res18[0],lVar4);
      cVar8 = FUN_144d1f620(uVar12,*puVar3);
      if (cVar8 == '\0') {
        return 0;
      }
    }
    cVar8 = FUN_144d1f250(local_res18,uVar11,lVar4,puVar3);
    if (cVar8 == '\0') {
      return 0;
    }
    puVar2 = (uint *)((longlong)(int)local_res18[0] * 0x20 + *(longlong *)(lVar4 + 0x10) + 0x1c);
    *puVar2 = *puVar2 | 2;
  }
LAB_144d1ea6f:
  if (*(char *)(lVar6 + 0x4c) == '\0') {
    piVar1 = (int *)(*(longlong *)(lVar6 + 0x38) + 8);
    *piVar1 = *piVar1 + -1;
  }
  *(undefined4 *)(lVar6 + 0x48) = 0xffffffff;
  return 1;
}



// FUNCTION 144d1eaa0 FUN_144d1eaa0 body=277 status=ok
// SIG undefined FUN_144d1eaa0(void)

uint FUN_144d1eaa0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  FUN_147e51913(param_2 + 0x18,param_1,&local_68);
  uVar3 = local_48;
  uVar6 = local_50;
  if (*(longlong *)(param_1 + 0x10) < 0) {
    uVar6 = local_50 - *(ulonglong *)(param_2 + 0x18);
    uVar1 = (ulonglong)(local_50 < *(ulonglong *)(param_2 + 0x18));
    uVar2 = local_48 - *(ulonglong *)(param_2 + 0x20);
    uVar3 = uVar2 - uVar1;
    local_40 = (local_40 - *(longlong *)(param_2 + 0x28)) -
               (ulonglong)(local_48 < *(ulonglong *)(param_2 + 0x20) || uVar2 < uVar1);
  }
  FUN_147e51913(param_1 + 0x18,param_2,&local_38);
  if (*(longlong *)(param_2 + 0x10) < 0) {
    bVar7 = local_20 < *(ulonglong *)(param_1 + 0x18);
    local_20 = local_20 - *(ulonglong *)(param_1 + 0x18);
    local_18 = (local_18 - *(longlong *)(param_1 + 0x20)) - (ulonglong)bVar7;
  }
  uVar1 = (ulonglong)(local_60 < local_30 || local_60 - local_30 < (ulonglong)(local_68 < local_38))
  ;
  uVar2 = (ulonglong)(local_58 < local_28 || local_58 - local_28 < uVar1);
  lVar4 = (uVar3 - local_18) - (ulonglong)(uVar6 < local_20 || uVar6 - local_20 < uVar2);
  uVar5 = 0;
  if (lVar4 == 0) {
    uVar5 = (uint)((local_58 - local_28 == uVar1 &&
                   (local_60 - local_30 == (ulonglong)(local_68 < local_38) && local_68 == local_38)
                   ) && uVar6 - local_20 == uVar2);
  }
  return 1 - uVar5 | (uint)(lVar4 >> 0x3f);
}



// FUNCTION 144d1ebc0 FUN_144d1ebc0 body=235 status=ok
// SIG undefined FUN_144d1ebc0(void)

longlong * FUN_144d1ebc0(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  
  FUN_144cc7110(param_2 + 2,param_3 + 3,&local_40);
  uVar2 = local_30;
  if (param_2[3] < 0) {
    uVar2 = local_30 - param_3[3];
    local_28 = (local_28 - param_3[4]) - (ulonglong)(local_30 < param_3[3]);
  }
  if ((longlong)param_3[5] < 0) {
    local_28 = local_28 - param_2[2];
  }
  FUN_144cc7110(param_2,param_3,&local_68);
  if (param_2[1] < 0) {
    bVar3 = local_58 < *param_3;
    local_58 = local_58 - *param_3;
    local_50 = (local_50 - param_3[1]) - (ulonglong)bVar3;
  }
  if ((longlong)param_3[2] < 0) {
    local_50 = local_50 - *param_2;
  }
  *param_1 = local_68 + local_40;
  param_1[1] = local_60 + local_38 + (ulonglong)CARRY8(local_68,local_40);
  uVar1 = (ulonglong)
          (CARRY8(local_60,local_38) ||
          CARRY8(local_60 + local_38,(ulonglong)CARRY8(local_68,local_40)));
  param_1[2] = local_58 + uVar2 + uVar1;
  param_1[3] = local_50 + local_28 +
               (ulonglong)(CARRY8(local_58,uVar2) || CARRY8(local_58 + uVar2,uVar1));
  return param_1;
}



// FUNCTION 144d1ecb0 FUN_144d1ecb0 body=377 status=ok
// SIG undefined FUN_144d1ecb0(void)

longlong * FUN_144d1ecb0(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  
  uVar23 = (ulonglong)param_2[2];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar23;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  uVar16 = SUB168(auVar4 * auVar10,8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar23;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  uVar17 = uVar2 * uVar23 + uVar16;
  lVar20 = uVar3 * uVar23 + SUB168(auVar5 * auVar11,8) + (ulonglong)CARRY8(uVar2 * uVar23,uVar16);
  if (param_2[2] < 0) {
    bVar26 = uVar17 < uVar1;
    uVar17 = uVar17 - uVar1;
    lVar20 = (lVar20 - uVar2) - (ulonglong)bVar26;
  }
  uVar21 = (ulonglong)param_2[1];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar21;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  uVar16 = SUB168(auVar6 * auVar12,8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar21;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  uVar24 = uVar2 * uVar21 + uVar16;
  lVar18 = uVar3 * uVar21 + SUB168(auVar7 * auVar13,8) + (ulonglong)CARRY8(uVar2 * uVar21,uVar16);
  if (param_2[1] < 0) {
    bVar26 = uVar24 < uVar1;
    uVar24 = uVar24 - uVar1;
    lVar18 = (lVar18 - uVar2) - (ulonglong)bVar26;
  }
  uVar22 = (ulonglong)*param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar22;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  uVar16 = SUB168(auVar8 * auVar14,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar22;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  uVar25 = uVar2 * uVar22 + uVar16;
  lVar19 = uVar3 * uVar22 + SUB168(auVar9 * auVar15,8) + (ulonglong)CARRY8(uVar2 * uVar22,uVar16);
  if (*param_2 < 0) {
    bVar26 = uVar25 < *param_3;
    uVar25 = uVar25 - *param_3;
    lVar19 = (lVar19 - uVar2) - (ulonglong)bVar26;
  }
  *param_1 = uVar1 * uVar22;
  param_1[1] = uVar25;
  param_1[3] = uVar1 * uVar21;
  param_1[4] = uVar24;
  param_1[2] = lVar19;
  param_1[5] = lVar18;
  param_1[6] = uVar1 * uVar23;
  param_1[7] = uVar17;
  param_1[8] = lVar20;
  return param_1;
}



// FUNCTION 144d1ee30 FUN_144d1ee30 body=267 status=ok
// SIG undefined FUN_144d1ee30(void)

ulonglong FUN_144d1ee30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xf0,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xf0);
  uVar3 = uVar4 * 0xf0 + 0xf0;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xf0;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xf0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0x8888888888888889) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xf0;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0xf0);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144d1ef40 FUN_144d1ef40 body=326 status=ok
// SIG undefined FUN_144d1ef40(void)

ulonglong FUN_144d1ef40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x68,&local_res8);
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
        uVar2 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar2;
        uVar2 = puVar5[7];
        puVar4[6] = puVar5[6];
        puVar4[7] = uVar2;
        uVar2 = puVar5[9];
        puVar4[8] = puVar5[8];
        puVar4[9] = uVar2;
        uVar2 = puVar5[0xb];
        puVar4[10] = puVar5[10];
        puVar4[0xb] = uVar2;
        puVar4[0xc] = puVar5[0xc];
      }
      puVar4 = puVar4 + 0xd;
      puVar5 = puVar5 + 0xd;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x68 + 0x68;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x68;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x68;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x68;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 0x68);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar8;
}



// FUNCTION 144d1f090 FUN_144d1f090 body=448 status=ok
// SIG undefined FUN_144d1f090(void)

void FUN_144d1f090(longlong param_1,uint param_2,int param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  uint local_res10;
  int local_68;
  ulonglong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar6 = (ulonglong)(int)param_2;
  uVar4 = *param_4;
  uVar8 = uVar6;
  local_res10 = param_2;
  do {
    local_48 = (ulonglong)param_3;
    uVar10 = uVar6 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)((int)uVar6 + param_3) >> 1) * 4);
    lVar7 = uVar4 + 0xa0 + (longlong)(int)uVar1 * 0xf0;
    local_68 = param_3;
    do {
      while( true ) {
        uVar9 = *(uint *)(param_1 + uVar8 * 4);
        iVar5 = FUN_144d1a1c0((longlong)(int)uVar9 * 0xf0 + 0xa0 + uVar4,lVar7);
        if (iVar5 == 0) {
          bVar11 = uVar9 < uVar1;
        }
        else {
          bVar11 = 0 < iVar5;
        }
        uVar9 = (uint)uVar10;
        uVar6 = local_48;
        if (!bVar11) break;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar8 = uVar8 + 1;
      }
      while( true ) {
        uVar2 = *(uint *)(param_1 + uVar6 * 4);
        iVar5 = FUN_144d1a1c0(lVar7,(longlong)(int)uVar2 * 0xf0 + 0xa0 + uVar4);
        if (iVar5 == 0) {
          bVar11 = uVar1 < uVar2;
        }
        else {
          bVar11 = 0 < iVar5;
        }
        if (!bVar11) break;
        local_68 = local_68 + -1;
        uVar6 = uVar6 - 1;
      }
      if ((longlong)uVar6 < (longlong)uVar8) break;
      if (uVar6 != uVar8) {
        uVar3 = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
        *(undefined4 *)(param_1 + uVar8 * 4) = uVar3;
      }
      local_68 = local_68 + -1;
      local_48 = uVar6 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)local_48);
    if ((int)local_res10 < local_68) {
      local_48 = *param_4;
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_144d1f090(param_1,local_res10,local_68,&local_48);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar6 = (ulonglong)uVar9;
    local_res10 = uVar9;
  } while( true );
}



// FUNCTION 144d1f250 FUN_144d1f250 body=144 status=ok
// SIG undefined FUN_144d1f250(void)

undefined8 FUN_144d1f250(int *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar6 = (longlong)param_2 * 0x20;
  lVar5 = (longlong)*(int *)(lVar6 + 0x10 + lVar1);
  lVar3 = lVar5 * 0x20;
  if ((*(byte *)(lVar3 + 0x1c + lVar1) & 2) == 0) {
    *(int *)(lVar6 + lVar1 + 0x10) = *param_1;
  }
  else {
    iVar2 = FUN_144d1f2e0(*param_1,lVar5,param_3);
    uVar4 = FUN_144d1f620(*param_1,*param_4);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
    *param_1 = iVar2 + 1;
    lVar3 = *(longlong *)(param_3 + 0x10);
    *(int *)(lVar3 + 0x10 + lVar6) = iVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 144d1f2e0 FUN_144d1f2e0 body=212 status=ok
// SIG undefined FUN_144d1f2e0(void)

int FUN_144d1f2e0(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar5 = FUN_144d1a710(param_3,2);
  lVar4 = *(longlong *)(param_3 + 0x10);
  puVar7 = (undefined4 *)((longlong)param_1 * 0x20 + lVar4);
  puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + lVar4);
  puVar8 = (undefined4 *)((longlong)param_2 * 0x20 + lVar4);
  iVar9 = iVar5 + 1;
  iVar1 = puVar7[1];
  iVar2 = puVar8[1];
  puVar7[1] = iVar5;
  puVar8[1] = iVar9;
  *(int *)((longlong)iVar1 * 0x20 + 8 + lVar4) = iVar9;
  *(int *)((longlong)iVar2 * 0x20 + 8 + lVar4) = iVar5;
  *puVar6 = *puVar8;
  puVar6[1] = iVar2;
  puVar6[2] = param_1;
  puVar6[3] = iVar9;
  uVar3 = puVar7[6];
  puVar6[7] = puVar6[7] & 0xfffffffb;
  puVar6[6] = uVar3;
  puVar6[5] = 0xffffffff;
  puVar6[8] = *puVar7;
  puVar6[10] = param_2;
  puVar6[0xb] = iVar5;
  puVar6[9] = iVar1;
  uVar3 = puVar8[6];
  puVar6[0xf] = puVar6[0xf] & 0xfffffffb;
  puVar6[0xe] = uVar3;
  puVar6[0xd] = 0xffffffff;
  return iVar5;
}



// FUNCTION 144d1f3c0 FUN_144d1f3c0 body=321 status=ok
// SIG undefined FUN_144d1f3c0(void)

ulonglong FUN_144d1f3c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar8) {
    uVar6 = uVar8;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar6 * 0x68;
  puVar3 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
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
        uVar2 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar2;
        uVar2 = puVar5[7];
        puVar4[6] = puVar5[6];
        puVar4[7] = uVar2;
        uVar2 = puVar5[9];
        puVar4[8] = puVar5[8];
        puVar4[9] = uVar2;
        uVar2 = puVar5[0xb];
        puVar4[10] = puVar5[10];
        puVar4[0xb] = uVar2;
        puVar4[0xc] = puVar5[0xc];
      }
      puVar4 = puVar4 + 0xd;
      puVar5 = puVar5 + 0xd;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x68 + 0x68;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x68;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x68;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x68;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = puVar3;
  return uVar8;
}



// FUNCTION 144d1f510 FUN_144d1f510 body=262 status=ok
// SIG undefined FUN_144d1f510(void)

longlong * FUN_144d1f510(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  uVar11 = SUB168(auVar5 * auVar8,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar13 = uVar3 * uVar2 + uVar11;
  uVar4 = param_3[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  lVar12 = uVar3 * uVar4 + SUB168(auVar7 * auVar10,8) +
           SUB168(auVar6 * auVar9,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar11) +
           (ulonglong)CARRY8(uVar1 * uVar4,uVar13);
  if ((longlong)uVar3 < 0) {
    lVar12 = lVar12 - uVar2;
  }
  if ((longlong)uVar4 < 0) {
    lVar12 = lVar12 - *param_2;
  }
  *param_1 = uVar1 * uVar2;
  param_1[2] = lVar12;
  param_1[1] = uVar1 * uVar4 + uVar13;
  return param_1;
}



// FUNCTION 144d1f620 FUN_144d1f620 body=1190 status=ok
// SIG undefined FUN_144d1f620(void)

undefined8 FUN_144d1f620(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  bool local_res8;
  uint local_res18;
  uint local_res20;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar21 = (ulonglong)param_1;
  lVar16 = param_2[2];
  uVar3 = *(uint *)(uVar21 * 0x20 + 4 + lVar16);
  uVar11 = *(uint *)(uVar21 * 0x20 + 8 + lVar16);
  puVar17 = (uint *)((longlong)(int)uVar3 * 0x20 + lVar16);
  puVar13 = (uint *)((longlong)(int)uVar11 * 0x20 + lVar16);
  uVar4 = *puVar13;
  uVar22 = *puVar17;
  if (uVar22 < uVar4) {
    local_res18 = puVar13[2];
    local_res20 = uVar3;
  }
  else {
    local_res20 = puVar17[1];
    local_res18 = uVar11;
  }
  local_res8 = uVar22 < uVar4;
  uVar9 = uVar11;
  if (uVar4 <= uVar22) {
    uVar9 = uVar3;
  }
  uVar22 = local_res20;
  if (uVar3 != uVar11) {
LAB_144d1f6c0:
    uVar4 = local_res18;
    lVar16 = param_2[2];
    uVar3 = *(uint *)((longlong)(int)local_res18 * 0x20 + lVar16);
    uVar11 = *(uint *)((longlong)(int)uVar22 * 0x20 + lVar16);
    if (uVar11 < uVar3) {
      local_res18 = *(uint *)((longlong)(int)local_res18 * 0x20 + 8 + lVar16);
      uVar23 = uVar22;
    }
    else {
      uVar23 = *(uint *)((longlong)(int)uVar22 * 0x20 + 4 + lVar16);
      local_res20 = uVar23;
    }
    bVar6 = uVar11 < uVar3;
    uVar12 = uVar4;
    if (uVar3 <= uVar11) {
      uVar12 = uVar22;
    }
    if (uVar22 != uVar4) {
      if (bVar6 == local_res8) {
        piVar18 = (int *)((longlong)(int)uVar12 * 0x20 + lVar16);
        lVar14 = (longlong)*piVar18;
        uVar22 = uVar23;
        if (uVar11 < uVar3) {
          lVar5 = *param_2;
          puVar1 = (undefined8 *)(lVar5 + lVar14 * 0x50);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar14 * 0x50);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          lVar15 = (longlong)*(int *)((longlong)piVar18[1] * 0x20 + lVar16);
          uVar20 = (ulonglong)*(int *)((longlong)piVar18[1] * 0x20 + 4 + lVar16);
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar14 * 0x50);
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          piVar18 = (int *)(uVar20 * 0x20 + lVar16);
          puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar14 * 0x50);
          local_68 = *puVar1;
          uStack_60 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar14 * 0x50);
          local_58 = *puVar1;
          uStack_50 = puVar1[1];
          lVar16 = (longlong)*piVar18;
          puVar1 = (undefined8 *)(lVar5 + lVar15 * 0x50);
          local_e8 = *puVar1;
          uStack_e0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar15 * 0x50);
          local_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar15 * 0x50);
          local_c8 = *puVar1;
          uStack_c0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar15 * 0x50);
          local_b8 = *puVar1;
          uStack_b0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar15 * 0x50);
          local_a8 = *puVar1;
          uStack_a0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + lVar16 * 0x50);
          local_138 = *puVar1;
          uStack_130 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar16 * 0x50);
          local_128 = *puVar1;
          uStack_120 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar16 * 0x50);
          local_118 = *puVar1;
          uStack_110 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar16 * 0x50);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          puVar2 = (undefined4 *)(lVar5 + 0x40 + lVar16 * 0x50);
          local_f8 = *puVar2;
          uStack_f4 = puVar2[1];
          uStack_f0 = puVar2[2];
          uStack_ec = puVar2[3];
          iVar10 = FUN_144d19c30(&local_98,&local_e8,&local_138);
          while (uVar9 = uVar12, iVar10 < 0) {
            uVar3 = piVar18[1];
            uVar11 = FUN_144d1f2e0(uVar12,uVar20 & 0xffffffff,param_2);
            if ((int)uVar20 == (int)uVar21) {
              uVar21 = (ulonglong)uVar11;
              break;
            }
            local_e8 = local_138;
            uStack_e0 = uStack_130;
            uVar20 = (ulonglong)uVar3;
            local_c8 = local_118;
            uStack_c0 = uStack_110;
            local_a8 = CONCAT44(uStack_f4,local_f8);
            uStack_a0 = CONCAT44(uStack_ec,uStack_f0);
            local_d8 = local_128;
            uStack_d0 = uStack_120;
            local_b8 = local_108;
            uStack_b0 = uStack_100;
            piVar18 = (int *)((longlong)(int)uVar3 * 0x20 + param_2[2]);
            lVar14 = (longlong)*piVar18;
            lVar16 = *param_2;
            puVar1 = (undefined8 *)(lVar16 + lVar14 * 0x50);
            local_138 = *puVar1;
            uStack_130 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar14 * 0x50);
            local_128 = *puVar1;
            uStack_120 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar14 * 0x50);
            local_118 = *puVar1;
            uStack_110 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar14 * 0x50);
            local_108 = *puVar1;
            uStack_100 = puVar1[1];
            puVar2 = (undefined4 *)(lVar16 + 0x40 + lVar14 * 0x50);
            local_f8 = *puVar2;
            uStack_f4 = puVar2[1];
            uStack_f0 = puVar2[2];
            uStack_ec = puVar2[3];
            iVar10 = FUN_144d19c30(&local_98,&local_e8,&local_138);
          }
        }
        else {
          lVar5 = *param_2;
          lVar19 = (longlong)piVar18[2] * 0x20;
          puVar1 = (undefined8 *)(lVar5 + lVar14 * 0x50);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar14 * 0x50);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          lVar15 = (longlong)*(int *)(lVar19 + lVar16);
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar14 * 0x50);
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar14 * 0x50);
          local_68 = *puVar1;
          uStack_60 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar14 * 0x50);
          local_58 = *puVar1;
          uStack_50 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + lVar15 * 0x50);
          local_138 = *puVar1;
          uStack_130 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar15 * 0x50);
          local_128 = *puVar1;
          uStack_120 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar15 * 0x50);
          local_118 = *puVar1;
          uStack_110 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar15 * 0x50);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          puVar2 = (undefined4 *)(lVar5 + 0x40 + lVar15 * 0x50);
          local_f8 = *puVar2;
          uStack_f4 = puVar2[1];
          uStack_f0 = puVar2[2];
          uStack_ec = puVar2[3];
          iVar10 = *(int *)(lVar19 + 8 + lVar16);
          iVar8 = piVar18[2];
          while (iVar7 = iVar10, uVar9 = uVar12, iVar8 != (int)uVar21) {
            piVar18 = (int *)((longlong)iVar7 * 0x20 + param_2[2]);
            lVar14 = (longlong)*piVar18;
            lVar16 = *param_2;
            puVar1 = (undefined8 *)(lVar16 + lVar14 * 0x50);
            local_e8 = *puVar1;
            uStack_e0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar14 * 0x50);
            local_d8 = *puVar1;
            uStack_d0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar14 * 0x50);
            local_c8 = *puVar1;
            uStack_c0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar14 * 0x50);
            local_b8 = *puVar1;
            uStack_b0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar14 * 0x50);
            local_a8 = *puVar1;
            uStack_a0 = puVar1[1];
            iVar10 = FUN_144d19c30(&local_98,&local_138,&local_e8);
            if (iVar10 < 1) break;
            iVar10 = piVar18[2];
            uVar12 = FUN_144d1f2e0(iVar7,uVar12,param_2);
            local_f8 = (undefined4)local_a8;
            uStack_f4 = local_a8._4_4_;
            uStack_f0 = (undefined4)uStack_a0;
            uStack_ec = uStack_a0._4_4_;
            local_138 = local_e8;
            uStack_130 = uStack_e0;
            local_128 = local_d8;
            uStack_120 = uStack_d0;
            local_118 = local_c8;
            uStack_110 = uStack_c0;
            local_108 = local_b8;
            uStack_100 = uStack_b0;
            iVar8 = iVar7;
          }
        }
      }
      else {
        uVar9 = FUN_144d1f2e0(uVar9,uVar12,param_2);
        uVar22 = uVar12;
        if (uVar11 < uVar3) {
          uVar22 = uVar9;
        }
        FUN_144d1ff60(uVar22,param_2);
        uVar22 = local_res20;
        local_res8 = bVar6;
        if (uVar11 < uVar3) {
          uVar21 = (ulonglong)(uVar9 + 1);
          uVar9 = uVar12;
        }
        else {
          uVar21 = (ulonglong)*(uint *)((longlong)(int)uVar9 * 0x20 + 8 + param_2[2]);
        }
      }
      goto LAB_144d1f6c0;
    }
    FUN_144d1ff60(uVar12,param_2);
  }
  return 1;
}



// FUNCTION 144d1fad0 FUN_144d1fad0 body=177 status=ok
// SIG undefined FUN_144d1fad0(void)

void FUN_144d1fad0(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144d202a0();
  if ((longlong)param_1[4] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x28);
    uVar2 = *param_2;
    *(ulonglong *)(param_3 + 0x28) = uVar1 - *param_2;
    uVar3 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_2[1];
    uVar5 = uVar3 - param_2[1];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x38);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[2];
    uVar5 = uVar2 - param_2[2];
    *(ulonglong *)(param_3 + 0x38) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[3];
    uVar4 = uVar3 - param_2[3];
    *(ulonglong *)(param_3 + 0x40) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x48) =
         (*(longlong *)(param_3 + 0x48) - param_2[4]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  if ((longlong)param_2[4] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x28);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x28) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x38);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x38) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar4 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x40) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x48) =
         (*(longlong *)(param_3 + 0x48) - param_1[4]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  return;
}



// FUNCTION 144d1fb90 FUN_144d1fb90 body=383 status=ok
// SIG undefined FUN_144d1fb90(void)

longlong * FUN_144d1fb90(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  
  uVar23 = (ulonglong)param_2[2];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar23;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  uVar16 = SUB168(auVar4 * auVar10,8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar23;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  uVar20 = uVar2 * uVar23 + uVar16;
  lVar17 = uVar3 * uVar23 + SUB168(auVar5 * auVar11,8) + (ulonglong)CARRY8(uVar2 * uVar23,uVar16);
  if (param_2[2] < 0) {
    bVar26 = uVar20 < uVar1;
    uVar20 = uVar20 - uVar1;
    lVar17 = (lVar17 - uVar2) - (ulonglong)bVar26;
  }
  uVar24 = (ulonglong)param_2[1];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar24;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  uVar16 = SUB168(auVar6 * auVar12,8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar24;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  uVar18 = uVar2 * uVar24 + uVar16;
  lVar21 = uVar3 * uVar24 + SUB168(auVar7 * auVar13,8) + (ulonglong)CARRY8(uVar2 * uVar24,uVar16);
  if (param_2[1] < 0) {
    bVar26 = uVar18 < uVar1;
    uVar18 = uVar18 - uVar1;
    lVar21 = (lVar21 - uVar2) - (ulonglong)bVar26;
  }
  uVar25 = (ulonglong)*param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar25;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  uVar16 = SUB168(auVar8 * auVar14,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar25;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  uVar19 = uVar2 * uVar25 + uVar16;
  lVar22 = uVar3 * uVar25 + SUB168(auVar9 * auVar15,8) + (ulonglong)CARRY8(uVar2 * uVar25,uVar16);
  if (*param_2 < 0) {
    bVar26 = uVar19 < *param_3;
    uVar19 = uVar19 - *param_3;
    lVar22 = (lVar22 - uVar2) - (ulonglong)bVar26;
  }
  *param_1 = uVar1 * uVar25;
  param_1[1] = uVar19;
  param_1[2] = lVar22;
  param_1[3] = uVar1 * uVar24;
  param_1[4] = uVar18;
  param_1[5] = lVar21;
  param_1[6] = uVar1 * uVar23;
  param_1[7] = uVar20;
  param_1[8] = lVar17;
  return param_1;
}



// FUNCTION 144d1fd10 FUN_144d1fd10 body=326 status=ok
// SIG undefined FUN_144d1fd10(void)

ulonglong FUN_144d1fd10(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x68,&local_res8);
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
        uVar2 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar2;
        uVar2 = puVar5[7];
        puVar4[6] = puVar5[6];
        puVar4[7] = uVar2;
        uVar2 = puVar5[9];
        puVar4[8] = puVar5[8];
        puVar4[9] = uVar2;
        uVar2 = puVar5[0xb];
        puVar4[10] = puVar5[10];
        puVar4[0xb] = uVar2;
        puVar4[0xc] = puVar5[0xc];
      }
      puVar4 = puVar4 + 0xd;
      puVar5 = puVar5 + 0xd;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x68 + 0x68;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x68;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x68;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x68;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 0x68);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar8;
}



// FUNCTION 144d1fe60 FUN_144d1fe60 body=254 status=ok
// SIG undefined FUN_144d1fe60(void)

ulonglong FUN_144d1fe60(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x50;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x50);
  uVar3 = uVar4 * 0x50 + 0x50;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x50;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x50;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x50;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144d1ff60 FUN_144d1ff60 body=288 status=ok
// SIG undefined FUN_144d1ff60(void)

void FUN_144d1ff60(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar6 = *(longlong *)(param_2 + 0x10);
  uVar12 = (ulonglong)param_1;
  iVar1 = *(int *)(uVar12 * 0x20 + 4 + lVar6);
  iVar2 = *(int *)((longlong)*(int *)(uVar12 * 0x20 + 8 + lVar6) * 0x20 + 8 + lVar6);
  while (iVar2 != iVar1) {
    uVar7 = FUN_144d1a710(param_2,2);
    lVar6 = *(longlong *)(param_2 + 0x10);
    lVar11 = (longlong)iVar2 * 0x20;
    iVar10 = uVar7 + 1;
    puVar9 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + lVar6);
    iVar3 = *(int *)(lVar11 + 4 + lVar6);
    puVar8 = (undefined4 *)((longlong)(int)uVar7 * 0x20 + lVar6);
    iVar4 = puVar9[1];
    *(uint *)(lVar11 + 4 + lVar6) = uVar7;
    puVar9[1] = iVar10;
    *(int *)((longlong)iVar3 * 0x20 + 8 + lVar6) = iVar10;
    *(uint *)((longlong)iVar4 * 0x20 + 8 + lVar6) = uVar7;
    *puVar8 = *puVar9;
    puVar8[1] = iVar4;
    puVar8[2] = iVar2;
    puVar8[3] = iVar10;
    uVar5 = *(undefined4 *)(lVar11 + 0x18 + lVar6);
    puVar8[7] = puVar8[7] & 0xfffffffb;
    puVar8[6] = uVar5;
    puVar8[5] = 0xffffffff;
    uVar5 = *(undefined4 *)(lVar11 + lVar6);
    puVar8[10] = (int)uVar12;
    uVar12 = (ulonglong)uVar7;
    puVar8[8] = uVar5;
    puVar8[9] = iVar3;
    puVar8[0xb] = uVar7;
    uVar5 = puVar9[6];
    puVar8[0xf] = puVar8[0xf] & 0xfffffffb;
    puVar8[0xe] = uVar5;
    puVar8[0xd] = 0xffffffff;
    iVar2 = *(int *)(lVar11 + 8 + *(longlong *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 144d20080 FUN_144d20080 body=262 status=ok
// SIG undefined FUN_144d20080(void)

longlong * FUN_144d20080(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  uVar11 = SUB168(auVar5 * auVar8,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar13 = uVar3 * uVar2 + uVar11;
  uVar4 = param_3[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  lVar12 = uVar3 * uVar4 + SUB168(auVar7 * auVar10,8) +
           SUB168(auVar6 * auVar9,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar11) +
           (ulonglong)CARRY8(uVar1 * uVar4,uVar13);
  if ((longlong)uVar3 < 0) {
    lVar12 = lVar12 - uVar2;
  }
  if ((longlong)uVar4 < 0) {
    lVar12 = lVar12 - *param_2;
  }
  *param_1 = uVar1 * uVar2;
  param_1[2] = lVar12;
  param_1[1] = uVar1 * uVar4 + uVar13;
  return param_1;
}



// FUNCTION 144d20190 FUN_144d20190 body=262 status=ok
// SIG undefined FUN_144d20190(void)

longlong * FUN_144d20190(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  uVar11 = SUB168(auVar5 * auVar8,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar13 = uVar3 * uVar2 + uVar11;
  uVar4 = param_3[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  lVar12 = uVar3 * uVar4 + SUB168(auVar7 * auVar10,8) +
           SUB168(auVar6 * auVar9,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar11) +
           (ulonglong)CARRY8(uVar1 * uVar4,uVar13);
  if ((longlong)uVar3 < 0) {
    lVar12 = lVar12 - uVar2;
  }
  if ((longlong)uVar4 < 0) {
    lVar12 = lVar12 - *param_2;
  }
  *param_1 = uVar1 * uVar2;
  param_1[2] = lVar12;
  param_1[1] = uVar1 * uVar4 + uVar13;
  return param_1;
}



// FUNCTION 144d202a0 FUN_144d202a0 body=557 status=ok
// SIG undefined FUN_144d202a0(void)

void FUN_144d202a0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int iVar39;
  longlong local_res8;
  ulonglong local_98 [11];
  
  uVar2 = *param_2;
  uVar3 = param_1[1];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar4;
  uVar30 = SUB168(auVar10 * auVar20,8);
  local_res8 = 1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  uVar31 = SUB168(auVar11 * auVar21,8);
  local_98[1] = uVar3 * uVar2 + uVar30;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  uVar32 = SUB168(auVar12 * auVar22,8);
  uVar30 = (ulonglong)CARRY8(uVar3 * uVar2,uVar30);
  uVar7 = uVar5 * uVar2 + uVar31;
  local_98[2] = uVar7 + uVar30;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar6;
  uVar33 = SUB168(auVar13 * auVar23,8);
  uVar7 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar31) || CARRY8(uVar7,uVar30));
  uVar31 = uVar6 * uVar2 + uVar32;
  uVar30 = param_1[4];
  local_98[3] = uVar31 + uVar7;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar30;
  uVar7 = (ulonglong)(CARRY8(uVar6 * uVar2,uVar32) || CARRY8(uVar31,uVar7));
  uVar31 = uVar30 * uVar2 + uVar33;
  local_98[4] = uVar31 + uVar7;
  local_98[5] = SUB168(auVar14 * auVar24,8) +
                (ulonglong)(CARRY8(uVar30 * uVar2,uVar33) || CARRY8(uVar31,uVar7));
  iVar39 = 1;
  do {
    uVar7 = param_2[local_res8];
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar7;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar4;
    uVar31 = SUB168(auVar15 * auVar25,8);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar7;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar3;
    uVar33 = SUB168(auVar16 * auVar26,8);
    uVar8 = uVar3 * uVar7 + uVar31;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar7;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar5;
    uVar34 = SUB168(auVar17 * auVar27,8);
    uVar31 = (ulonglong)CARRY8(uVar3 * uVar7,uVar31);
    uVar32 = uVar5 * uVar7 + uVar33;
    uVar36 = uVar32 + uVar31;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar7;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar6;
    uVar35 = SUB168(auVar18 * auVar28,8);
    uVar31 = (ulonglong)(CARRY8(uVar5 * uVar7,uVar33) || CARRY8(uVar32,uVar31));
    uVar32 = uVar6 * uVar7 + uVar34;
    uVar38 = uVar32 + uVar31;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar7;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar30;
    uVar32 = (ulonglong)(CARRY8(uVar6 * uVar7,uVar34) || CARRY8(uVar32,uVar31));
    uVar34 = uVar30 * uVar7 + uVar35;
    uVar37 = uVar34 + uVar32;
    uVar31 = local_98[local_res8];
    lVar1 = local_res8 + 1;
    local_98[iVar39] = uVar4 * uVar7 + local_98[local_res8];
    uVar33 = (ulonglong)CARRY8(uVar4 * uVar7,uVar31);
    uVar31 = local_98[lVar1];
    uVar9 = uVar8 + local_98[lVar1];
    local_98[iVar39 + 1] = uVar9 + uVar33;
    uVar33 = (ulonglong)(CARRY8(uVar8,uVar31) || CARRY8(uVar9,uVar33));
    uVar31 = local_98[local_res8 + 2];
    uVar8 = uVar36 + local_98[local_res8 + 2];
    local_98[iVar39 + 2] = uVar8 + uVar33;
    uVar33 = (ulonglong)(CARRY8(uVar36,uVar31) || CARRY8(uVar8,uVar33));
    uVar31 = local_98[local_res8 + 3];
    uVar8 = uVar38 + local_98[local_res8 + 3];
    local_98[iVar39 + 3] = uVar8 + uVar33;
    uVar33 = (ulonglong)(CARRY8(uVar38,uVar31) || CARRY8(uVar8,uVar33));
    uVar31 = local_98[local_res8 + 4];
    uVar8 = uVar37 + local_98[local_res8 + 4];
    local_98[iVar39 + 4] = uVar8 + uVar33;
    local_98[iVar39 + 5] =
         SUB168(auVar19 * auVar29,8) +
         (ulonglong)(CARRY8(uVar30 * uVar7,uVar35) || CARRY8(uVar34,uVar32)) +
         (ulonglong)(CARRY8(uVar37,uVar31) || CARRY8(uVar8,uVar33));
    local_res8 = lVar1;
    iVar39 = iVar39 + 1;
  } while (lVar1 < 5);
  *param_3 = uVar4 * uVar2;
  param_3[1] = local_98[1];
  param_3[2] = local_98[2];
  param_3[3] = local_98[3];
  param_3[4] = local_98[4];
  param_3[5] = local_98[5];
  param_3[6] = local_98[6];
  param_3[7] = local_98[7];
  param_3[8] = local_98[8];
  param_3[9] = local_98[9];
  return;
}



// FUNCTION 144d204d0 FUN_144d204d0 body=149 status=ok
// SIG undefined FUN_144d204d0(void)

undefined4 * FUN_144d204d0(longlong param_1,undefined4 *param_2)

{
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  if (*(float *)(param_1 + 0xa0) <= *(float *)(param_1 + 0x90) * 2.0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,
                  "The maximum edge length must be greater than twice the quantum (but *should* be much larger than that)."
                 );
    FUN_144bfc0d0(0x2876edf8,local_208,
                  "NavMesh\\Generation\\EdgeLengthLimiting\\hkaiNavMeshGenerationEdgeLengthLimiting.cpp"
                  ,0x17);
    FUN_144bde6e0(local_218);
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d20570 FUN_144d20570 body=1298 status=ok
// SIG undefined FUN_144d20570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d20570(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  uint uVar24;
  uint local_res10;
  longlong local_140;
  int local_130;
  int iStack_12c;
  int local_128;
  int local_120;
  int iStack_11c;
  int local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  fVar22 = *(float *)(param_2 + 0xa0) * *(float *)(param_2 + 0x94);
  uVar24 = local_res10;
  if (0.0 <= fVar22) {
    if (16777216.0 <= fVar22) {
      fVar22 = 16777216.0;
    }
    fVar23 = ((fVar22 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    uVar24 = -(uint)(fVar22 == -0.0 || 8388608.0 < ABS(fVar22));
    uVar24 = (int)(float)(~uVar24 & (uint)(fVar23 - (float)(-(uint)(fVar22 < fVar23) &
                                                           _DAT_14c6daca0)) | uVar24 & (uint)fVar22)
    ;
  }
  if (uVar24 != 0x3fffff) {
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    iVar14 = *(int *)(param_1 + 0x30);
    if (puVar5 != puVar5 + (longlong)iVar14 * 0xc) {
      puVar10 = puVar5 + 4;
      do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        *(undefined4 *)(puVar10 + 7) = 0;
        puVar1 = puVar10 + 8;
        puVar10 = puVar10 + 0xc;
      } while (puVar1 != puVar5 + (longlong)iVar14 * 0xc);
    }
    uVar3 = *(uint *)(param_1 + 0x30);
    local_110 = (ulonglong)(int)uVar3;
    local_res10 = 0;
    if (0 < (int)uVar3) {
      local_140 = 0;
      uVar13 = local_110;
      do {
        lVar20 = *(longlong *)(param_1 + 0x28);
        local_a8 = *(undefined8 *)(lVar20 + local_140);
        uStack_a0 = ((undefined8 *)(lVar20 + local_140))[1];
        piVar2 = (int *)(lVar20 + 0x10 + local_140);
        local_98 = *piVar2;
        iStack_94 = piVar2[1];
        iStack_90 = piVar2[2];
        iStack_8c = piVar2[3];
        puVar5 = (undefined8 *)(lVar20 + 0x20 + local_140);
        local_88 = *puVar5;
        uStack_80 = puVar5[1];
        puVar5 = (undefined8 *)(lVar20 + 0x30 + local_140);
        local_78 = *puVar5;
        uStack_70 = puVar5[1];
        puVar5 = (undefined8 *)(lVar20 + 0x40 + local_140);
        local_68 = *puVar5;
        uStack_60 = puVar5[1];
        puVar5 = (undefined8 *)(lVar20 + 0x50 + local_140);
        local_58 = *puVar5;
        uStack_50 = puVar5[1];
        if (((int)local_res10 < local_98) && (local_98 < (int)local_110)) {
          local_110 = uVar13;
          FUN_144cb6610(param_1,&local_a8,&local_120,&local_130);
          uVar16 = (ulonglong)uVar24 * (ulonglong)uVar24;
          uVar8 = (longlong)(iStack_12c - iStack_11c) * (longlong)(iStack_12c - iStack_11c) +
                  (longlong)(local_130 - local_120) * (longlong)(local_130 - local_120);
          uVar9 = uVar8 / uVar16;
          uVar11 = uVar9 + 1;
          if (uVar8 % uVar16 == 0) {
            uVar11 = uVar9;
          }
          auVar21._0_4_ = (float)uVar11;
          auVar21._4_4_ = auVar21._0_4_;
          auVar21._8_4_ = auVar21._0_4_;
          auVar21._12_4_ = auVar21._0_4_;
          auVar21 = sqrtps(auVar21,auVar21);
          fVar22 = ceilf(auVar21._0_4_);
          iVar14 = (int)fVar22 + -1;
          if (0 < iVar14) {
            iVar4 = *(int *)(param_1 + 0x50);
            iVar17 = iVar4 + iVar14;
            if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar17) {
              FUN_144d20a90(param_1 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar17);
            }
            *(int *)(param_1 + 0x50) = iVar17;
            iVar17 = (int)(((longlong)iVar14 * 0x60) / 0x60);
            lVar20 = (longlong)iVar17;
            if (0 < iVar17) {
              uVar15 = 1;
              plVar12 = (longlong *)((longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x48));
              do {
                uVar11 = (ulonglong)uVar15;
                uVar13 = (ulonglong)((iVar17 + 1U) - uVar15);
                uVar15 = uVar15 + 1;
                lStack_d8 = (longlong)iStack_11c * uVar13 + (longlong)iStack_12c * uVar11;
                local_c0 = (longlong)local_118 * uVar13 + (longlong)local_128 * uVar11;
                local_d0 = lStack_d8 >> 0x3f;
                lStack_b8 = local_c0 >> 0x3f;
                local_f0 = (longlong)local_120 * uVar13 + (longlong)local_130 * uVar11;
                lStack_e8 = local_f0 >> 0x3f;
                *plVar12 = local_f0;
                plVar12[1] = lStack_e8;
                local_108 = (ulonglong)(iVar17 + 1U);
                plVar12[2] = lStack_e8;
                plVar12[3] = lStack_d8;
                uStack_100 = 0;
                local_f8 = 0;
                plVar12[4] = local_d0;
                plVar12[5] = local_d0;
                plVar12[6] = local_c0;
                plVar12[7] = lStack_b8;
                plVar12[8] = lStack_b8;
                plVar12[9] = local_108;
                plVar12[10] = 0;
                plVar12[0xb] = 0;
                lVar20 = lVar20 + -1;
                plVar12 = plVar12 + 0xc;
                local_e0 = lStack_e8;
                lStack_c8 = local_d0;
                local_b0 = lStack_b8;
              } while (lVar20 != 0);
            }
            uVar13 = (ulonglong)local_res10;
            iVar17 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + local_140);
            *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + local_140) = 0xffffffff;
            iVar18 = 0;
            *(undefined4 *)((longlong)iVar17 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) =
                 0xffffffff;
            do {
              iVar19 = (int)uVar13;
              uVar15 = iVar4 + iVar18 | 0x40000000;
              iVar6 = FUN_144cb3d00(param_1,uVar13 & 0xffffffff,uVar15);
              uVar13 = (ulonglong)iVar6;
              iVar7 = FUN_144cb3d00(param_1,iVar17,uVar15);
              iVar18 = iVar18 + 1;
              *(int *)((longlong)iVar19 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar7;
              *(int *)((longlong)iVar7 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar19;
            } while (iVar18 < iVar14);
            *(int *)(uVar13 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar17;
            *(int *)((longlong)iVar17 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar6;
            uVar13 = local_110;
          }
          local_110 = (ulonglong)uVar3;
        }
        local_res10 = local_res10 + 1;
        local_140 = local_140 + 0x60;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      local_110 = 0;
    }
    FUN_144cb3890(param_1);
  }
  return;
}



// FUNCTION 144d20a90 FUN_144d20a90 body=262 status=ok
// SIG undefined FUN_144d20a90(void)

ulonglong FUN_144d20a90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x60,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  uVar3 = uVar4 * 0x60 + 0x60;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x60);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144d20ba0 FUN_144d20ba0 body=701 status=ok
// SIG undefined FUN_144d20ba0(void)

/* WARNING: Removing unreachable block (ram,0x000144d20c77) */
/* WARNING: Removing unreachable block (ram,0x000144d20bd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144d20ba0(float *param_1,undefined8 param_2,ulonglong *param_3)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 in_EAX;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [12];
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar19 [12];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  
  fVar12 = in_XMM1._0_4_;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  param_1[0x25] = 1.0 / fVar12;
  param_1[0x24] = fVar12;
  auVar33._0_8_ = uVar2 << 0x20;
  auVar33._8_8_ = uVar3 << 0x20 | uVar2 >> 0x20;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar33 >> 0x20;
  fVar6 = DAT_14c6dae7c;
  fVar5 = DAT_14c6dae78;
  fVar4 = DAT_14c6dae74;
  fVar1 = DAT_14c6dae70;
  uVar8 = uRam000000014c6dae48;
  fVar32 = (float)uVar2;
  fVar34 = (float)(uVar2 >> 0x20);
  fVar35 = (float)uVar3;
  auVar13._4_4_ = -(uint)(ABS(fVar34 - fRam000000014c6dae64) <= fRam000000014c6dae34);
  auVar13._0_4_ = -(uint)(ABS(fVar32 - _DAT_14c6dae60) <= _DAT_14c6dae30);
  auVar13._8_4_ = -(uint)(ABS(fVar35 - fRam000000014c6dae68) <= fRam000000014c6dae38);
  auVar13._12_4_ = -(uint)(ABS(0.0 - fRam000000014c6dae6c) <= fRam000000014c6dae3c);
  uVar10 = movmskps(in_EAX,auVar13);
  if (((byte)uVar10 & 7) == 7) {
    *(undefined8 *)param_1 = _DAT_14c6dae40;
    *(undefined8 *)(param_1 + 2) = uVar8;
    uVar8 = uRam000000014c6dae58;
    *(undefined8 *)(param_1 + 4) = _DAT_14c6dae50;
    *(undefined8 *)(param_1 + 6) = uVar8;
    uVar8 = CONCAT44(fRam000000014c6dae6c,fRam000000014c6dae68);
    *(ulonglong *)(param_1 + 8) = CONCAT44(fRam000000014c6dae64,_DAT_14c6dae60);
    *(undefined8 *)(param_1 + 10) = uVar8;
    uVar8 = CONCAT44(DAT_14c6dae7c,DAT_14c6dae78);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(DAT_14c6dae74,DAT_14c6dae70);
    *(undefined8 *)(param_1 + 0xe) = uVar8;
    uVar8 = uRam000000014c6dae48;
    *(undefined8 *)(param_1 + 0x10) = _DAT_14c6dae40;
    *(undefined8 *)(param_1 + 0x12) = uVar8;
    uVar8 = uRam000000014c6dae58;
    *(undefined8 *)(param_1 + 0x14) = _DAT_14c6dae50;
    *(undefined8 *)(param_1 + 0x16) = uVar8;
    uVar8 = CONCAT44(fRam000000014c6dae6c,fRam000000014c6dae68);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(fRam000000014c6dae64,_DAT_14c6dae60);
    *(undefined8 *)(param_1 + 0x1a) = uVar8;
    uVar8 = CONCAT44(DAT_14c6dae7c,DAT_14c6dae78);
    *(ulonglong *)(param_1 + 0x1c) = CONCAT44(DAT_14c6dae74,DAT_14c6dae70);
    *(undefined8 *)(param_1 + 0x1e) = uVar8;
  }
  else {
    fVar11 = fVar32 * fVar32;
    auVar16._0_4_ = fVar11 + fVar11;
    auVar16._4_4_ = fVar11 + fVar34 * fVar34;
    auVar16._8_4_ = fVar11 + fVar35 * fVar35;
    auVar16._12_4_ = fVar11 + 0.0;
    auVar13 = sqrtps(in_XMM1,auVar16);
    auVar7._12_4_ = fRam000000014c6dacac;
    auVar7._0_12_ = _DAT_14c6daca0;
    auVar13 = divps(auVar7,auVar13);
    uVar23 = ~-(uint)(auVar16._4_4_ == 0.0) & auVar13._4_4_;
    uVar25 = ~-(uint)(auVar16._8_4_ == 0.0) & auVar13._8_4_;
    uVar20 = -(uint)((int)auVar16._8_4_ < (int)auVar16._4_4_);
    uVar21 = -(uint)((int)auVar16._8_4_ < (int)auVar16._4_4_);
    uVar22 = -(uint)((int)auVar16._8_4_ < (int)auVar16._4_4_);
    auVar15._0_4_ = ~uVar20 & (uint)fVar35;
    auVar15._4_4_ = 0;
    auVar15._8_4_ = ~uVar22 & (uint)fVar32;
    auVar19._0_4_ = (uint)fVar34 & uVar20;
    auVar19._4_4_ = (uint)fVar32 & uVar21;
    auVar19._8_4_ = 0;
    auVar15 = auVar15 | auVar19;
    fVar14 = -auVar15._0_4_;
    fVar17 = auVar15._4_4_;
    fVar18 = auVar15._8_4_;
    fVar11 = (float)(~uVar20 & uVar25 | uVar23 & uVar20);
    fVar24 = (float)(~uVar21 & uVar25 | uVar23 & uVar21);
    fVar26 = (float)(~uVar22 & uVar25 | uVar23 & uVar22);
    fVar27 = (float)(~-(uint)((int)auVar16._8_4_ < (int)auVar16._4_4_) & uVar25 |
                    uVar23 & -(uint)((int)auVar16._8_4_ < (int)auVar16._4_4_));
    fVar28 = fVar11 * fVar14;
    fVar29 = fVar24 * fVar17;
    fVar30 = fVar26 * fVar18;
    fVar31 = fVar27 * 0.0;
    fVar11 = (fVar18 * fVar34 - fVar35 * fVar17) * fVar11;
    fVar24 = (fVar14 * fVar35 - fVar32 * fVar18) * fVar24;
    fVar26 = (fVar17 * fVar32 - fVar34 * fVar14) * fVar26;
    fVar27 = fVar27 * 0.0;
    *param_1 = fVar28;
    param_1[1] = fVar11;
    param_1[2] = fVar32;
    param_1[3] = fVar1;
    param_1[8] = fVar30;
    param_1[9] = fVar26;
    param_1[10] = fVar35;
    param_1[0xb] = fVar5;
    param_1[4] = fVar29;
    param_1[5] = fVar24;
    param_1[6] = fVar34;
    param_1[7] = fVar4;
    param_1[0xc] = fVar31;
    param_1[0xd] = fVar27;
    param_1[0xe] = 0.0;
    param_1[0xf] = fVar6;
    uVar8 = CONCAT44(DAT_14c6dae74,DAT_14c6dae70);
    uVar9 = CONCAT44(DAT_14c6dae7c,DAT_14c6dae78);
    param_1[0x10] = fVar28;
    param_1[0x11] = fVar29;
    param_1[0x12] = fVar30;
    param_1[0x13] = fVar31;
    *(undefined8 *)(param_1 + 0x1c) = uVar8;
    *(undefined8 *)(param_1 + 0x1e) = uVar9;
    param_1[0x14] = fVar11;
    param_1[0x15] = fVar24;
    param_1[0x16] = fVar26;
    param_1[0x17] = fVar27;
    *(undefined1 (*) [16])(param_1 + 0x18) = auVar33 >> 0x20;
  }
  fVar1 = param_1[0x25];
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar1 * fVar5;
  param_1[2] = fVar1 * fVar6;
  param_1[3] = fVar1 * param_1[3];
  fVar32 = param_1[4];
  fVar34 = param_1[5];
  fVar35 = param_1[6];
  param_1[4] = fVar1 * fVar32;
  param_1[5] = fVar1 * fVar34;
  param_1[6] = fVar1 * fVar35;
  param_1[7] = fVar1 * param_1[7];
  fVar11 = param_1[8];
  fVar24 = param_1[9];
  fVar26 = param_1[10];
  param_1[8] = fVar1 * fVar11;
  param_1[9] = fVar1 * fVar24;
  param_1[10] = fVar1 * fVar26;
  param_1[0xb] = fVar1 * param_1[0xb];
  fVar27 = param_1[0xc];
  fVar14 = param_1[0xd];
  fVar17 = param_1[0xe];
  param_1[0xc] = fVar1 * fVar27;
  param_1[0xd] = fVar1 * fVar14;
  param_1[0xe] = fVar1 * fVar17;
  param_1[0xf] = fVar1 * param_1[0xf];
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar1 * fVar5;
  param_1[2] = fVar1 * fVar6;
  param_1[3] = 0.0;
  param_1[4] = fVar1 * fVar32;
  param_1[5] = fVar1 * fVar34;
  param_1[6] = fVar1 * fVar35;
  param_1[7] = 0.0;
  param_1[8] = fVar1 * fVar11;
  param_1[9] = fVar1 * fVar24;
  param_1[10] = fVar1 * fVar26;
  param_1[0xb] = 0.0;
  fVar4 = fRam000000014c6dacac;
  param_1[0xc] = fVar1 * fVar27;
  param_1[0xd] = fVar1 * fVar14;
  param_1[0xe] = fVar1 * fVar17;
  param_1[0xf] = fVar4;
  param_1[0x10] = fVar12 * param_1[0x10];
  param_1[0x11] = fVar12 * param_1[0x11];
  param_1[0x12] = fVar12 * param_1[0x12];
  param_1[0x13] = fVar12 * param_1[0x13];
  param_1[0x14] = fVar12 * param_1[0x14];
  param_1[0x15] = fVar12 * param_1[0x15];
  param_1[0x16] = fVar12 * param_1[0x16];
  param_1[0x17] = fVar12 * param_1[0x17];
  param_1[0x18] = fVar12 * param_1[0x18];
  param_1[0x19] = fVar12 * param_1[0x19];
  param_1[0x1a] = fVar12 * param_1[0x1a];
  param_1[0x1b] = fVar12 * param_1[0x1b];
  param_1[0x1c] = fVar12 * param_1[0x1c];
  param_1[0x1d] = fVar12 * param_1[0x1d];
  param_1[0x1e] = fVar12 * param_1[0x1e];
  param_1[0x1f] = fVar12 * param_1[0x1f];
  param_1[0x10] = param_1[0x10];
  param_1[0x11] = param_1[0x11];
  param_1[0x12] = param_1[0x12];
  param_1[0x13] = 0.0;
  param_1[0x14] = param_1[0x14];
  param_1[0x15] = param_1[0x15];
  param_1[0x16] = param_1[0x16];
  param_1[0x17] = 0.0;
  param_1[0x18] = param_1[0x18];
  param_1[0x19] = param_1[0x19];
  param_1[0x1a] = param_1[0x1a];
  param_1[0x1b] = 0.0;
  fVar1 = fRam000000014c6dacac;
  param_1[0x1c] = param_1[0x1c];
  param_1[0x1d] = param_1[0x1d];
  param_1[0x1e] = param_1[0x1e];
  param_1[0x1f] = fVar1;
  return param_1;
}



// FUNCTION 144d20e60 FUN_144d20e60 body=136 status=ok
// SIG undefined FUN_144d20e60(void)

undefined4 * FUN_144d20e60(longlong param_1,undefined4 *param_2)

{
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  if (*(float *)(param_1 + 0xa0) <= 0.0 && *(float *)(param_1 + 0xa0) != 0.0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,"The erosion radius must be nonnegative.");
    FUN_144bfc0d0(0x7c989db3,local_208,
                  "NavMesh\\Generation\\MakeNavMesh\\hkaiNavMeshGenerationMakeNavMesh.cpp",0x1b);
    FUN_144bde6e0(local_218);
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d20ef0 FUN_144d20ef0 body=1452 status=ok
// SIG undefined FUN_144d20ef0(void)

/* WARNING: Removing unreachable block (ram,0x000144d2135e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d20ef0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  short sVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  undefined1 auVar20 [16];
  uint local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  uint local_res20 [2];
  int local_294;
  longlong local_290;
  undefined4 local_288;
  uint local_284;
  undefined4 local_280;
  undefined4 *local_278;
  longlong local_270;
  longlong *local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined1 local_248 [520];
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((*(int *)(param_1 + 0x30) < 0x400001) && (*(int *)(param_1 + 0x20) < 0x400001)) {
    local_res8[0] = 0;
    FUN_144be90e0(0xc92f31fa);
    local_res8[0] = local_res8[0] + 0x473d364;
    if (local_res8[0] < 0x473d364) {
      FUN_144be90e0(0x3bca8c3d);
    }
    FUN_144d214a0(param_1,param_2 + 0x40,param_3 + 0x38);
    local_268 = (longlong *)(param_3 + 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar1) {
      FUN_144c44340(local_268,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if ((*(int *)(param_3 + 0x20) < iVar1) || (iVar1 < *(int *)(param_3 + 0x20))) {
      *(int *)(param_3 + 0x20) = iVar1;
    }
    local_290 = 0;
    local_288 = 0;
    local_284 = 0x80000000;
    if (0 < *(int *)(param_1 + 0x30)) {
      FUN_144c586a0(&local_290,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x30));
    }
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < *(int *)(param_1 + 0x30)) {
      FUN_144c3b750(param_3 + 0x28,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x30));
    }
    local_res8[0] = local_res8[0] + 0xc59cd0d;
    if (local_res8[0] < 0xc59cd0d) {
      FUN_144be90e0(0x9609550c);
    }
    lVar17 = 0;
    local_294 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      local_270 = 0;
      do {
        local_258 = *(longlong *)(param_1 + 0x18);
        local_res8[0] = local_res8[0] + 0xa1bbfe;
        local_280 = *(undefined4 *)(param_3 + 0x30);
        sVar10 = 0;
        uVar12 = (ulonglong)*(int *)(lVar17 + local_258);
        local_278 = (undefined4 *)(uVar12 * 0x60 + *(longlong *)(param_1 + 0x28));
        local_res20[0] = local_278[3];
        lVar16 = local_res18;
        if (local_res8[0] < 0xa1bbfe) {
          FUN_144be90e0(0x4f4a00b5);
          lVar16 = local_res18;
        }
        do {
          puVar19 = (undefined4 *)
                    ((longlong)(int)local_res20[0] * 0x60 + *(longlong *)(param_1 + 0x28));
          *(undefined4 *)(local_290 + (longlong)(int)uVar12 * 4) = *(undefined4 *)(lVar16 + 0x30);
          lVar11 = (longlong)*(int *)(lVar16 + 0x30);
          lVar13 = *(longlong *)(lVar16 + 0x28);
          *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
          uVar7 = FUN_14502c770(param_1 + 0x38,*puVar19);
          uVar8 = FUN_14502c770(param_1 + 0x38,*local_278);
          uVar6 = local_res20[0];
          *(undefined4 *)(lVar13 + lVar11 * 0x14) = uVar8;
          sVar10 = sVar10 + 1;
          *(undefined4 *)(lVar13 + 4 + lVar11 * 0x14) = uVar7;
          uVar12 = (ulonglong)local_res20[0];
          *(undefined4 *)(lVar13 + 0x10 + lVar11 * 0x14) = 4;
          *(undefined8 *)(lVar13 + 8 + lVar11 * 0x14) = 0xffffffffffffffff;
          local_res20[0] = puVar19[3];
          local_res8[0] = local_res8[0] + 0x7dace2;
          local_278 = puVar19;
          if (local_res8[0] < 0x7dace2) {
            FUN_144be90e0(0x8d3d1192);
          }
          lVar13 = local_270;
        } while (uVar6 != *(uint *)(lVar17 + local_258));
        lVar16 = *local_268;
        *(undefined4 *)(local_270 + 4 + lVar16) = 0xffffffff;
        *(undefined2 *)(local_270 + 10 + lVar16) = 0;
        *(undefined4 *)(local_270 + lVar16) = local_280;
        *(short *)(local_270 + 8 + lVar16) = sVar10;
        local_res8[0] = local_res8[0] + 0x2a0953;
        if (local_res8[0] < 0x2a0953) {
          FUN_144be90e0(0xa97bf25);
        }
        local_294 = local_294 + 1;
        local_270 = lVar13 + 0xc;
        lVar17 = lVar17 + 4;
        param_3 = local_res18;
      } while (local_294 < *(int *)(param_1 + 0x20));
    }
    lVar17 = local_290;
    plVar18 = (longlong *)(param_3 + 0x28);
    lVar13 = 0;
    iVar1 = *(int *)(param_1 + 0x30);
    lVar16 = lVar13;
    if (0 < (longlong)iVar1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x28);
        iVar15 = *(int *)(lVar11 + 0x10 + lVar16);
        if (-1 < iVar15) {
          iVar2 = *(int *)(lVar17 + (longlong)iVar15 * 4);
          iVar3 = *(int *)(lVar17 + lVar13 * 4);
          lVar4 = *plVar18;
          uVar7 = *(undefined4 *)(lVar11 + 4 + lVar16);
          uVar8 = *(undefined4 *)((longlong)iVar15 * 0x60 + lVar11 + 4);
          *(int *)(lVar4 + 8 + (longlong)iVar3 * 0x14) = iVar2;
          *(undefined4 *)(lVar4 + 0xc + (longlong)iVar3 * 0x14) = uVar8;
          lVar11 = *plVar18;
          *(int *)(lVar11 + 8 + (longlong)iVar2 * 0x14) = iVar3;
          *(undefined4 *)(lVar11 + 0xc + (longlong)iVar2 * 0x14) = uVar7;
          local_res8[0] = local_res8[0] + 0xbce5bb;
          if (local_res8[0] < 0xbce5bb) {
            FUN_144be90e0(0x1bac99dc);
          }
        }
        lVar13 = lVar13 + 1;
        param_3 = local_res18;
        lVar16 = lVar16 + 0x60;
      } while (lVar13 < iVar1);
    }
    puVar9 = (undefined8 *)FUN_144cb4920(param_1,&local_268);
    iVar1 = *(int *)(param_3 + 0x60);
    puVar19 = (undefined4 *)puVar9[1];
    puVar14 = (undefined4 *)*puVar9;
    iVar15 = (int)((longlong)puVar19 - (longlong)puVar14 >> 2) + iVar1;
    if ((int)(*(uint *)(param_3 + 100) & 0x7fffffff) < iVar15) {
      FUN_141807aa8(param_3 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar15);
    }
    puVar5 = (undefined4 *)(*(longlong *)(param_3 + 0x58) + (longlong)iVar1 * 4);
    for (; puVar14 != puVar19; puVar14 = puVar14 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar14;
      }
      puVar5 = puVar5 + 1;
    }
    *(int *)(param_3 + 0x60) = iVar15;
    uVar7 = FUN_144cb4970(param_1);
    *(undefined4 *)(param_3 + 0x78) = uVar7;
    *(undefined4 *)(param_3 + 0x7c) = 0;
    auVar20._0_8_ = *(ulonglong *)(local_res10 + 0x80) << 0x20;
    auVar20._8_8_ =
         *(longlong *)(local_res10 + 0x88) << 0x20 | *(ulonglong *)(local_res10 + 0x80) >> 0x20;
    *(undefined1 (*) [16])(param_3 + 0xc0) = auVar20 >> 0x20;
    *(undefined4 *)(param_3 + 0xb0) = *(undefined4 *)(local_res10 + 0xa0);
    FUN_144c3b3a0(param_3,local_res20,1,0);
    local_res8[0] = local_res8[0] + 0x363926;
    if (local_res8[0] < 0x363926) {
      FUN_144be90e0(0x27164e8a);
    }
    local_268 = _DAT_14c6daca0;
    uStack_260 = uRam000000014c6daca8;
    FUN_144c52e40(param_3,&local_268,param_3 + 0x90,local_res8);
    local_res8[0] = 0;
    FUN_144be90e0(0xa2a4aa93);
    thunk_FUN_144c3b070(param_3,1);
    if ((-1 < (int)local_284) && (local_290 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_290,(ulonglong)(local_284 & 0x7fffffff) << 2);
      return;
    }
  }
  else {
    FUN_144bde670(&local_290,local_248,0x200);
    FUN_144be6160(&local_290,
                  "The unsimplified nav mesh had an edge count greater than HKAI_MAX_NUM_EDGES, or a face count greater than HKAI_MAX_NUM_FACES. Try generating with smaller bounds, or with less tessellated input geometry. Generation will abort."
                 );
    FUN_144bfc0d0(0x8238d868,local_248,
                  "NavMesh\\Generation\\MakeNavMesh\\hkaiNavMeshGenerationMakeNavMesh.cpp",0x66);
    FUN_144bde6e0(&local_290);
  }
  return;
}



// FUNCTION 144d214a0 FUN_144d214a0 body=1550 status=ok
// SIG undefined FUN_144d214a0(void)

void FUN_144d214a0(longlong param_1,float *param_2,longlong *param_3)

{
  float *pfVar1;
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
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  longlong local_res8;
  uint local_res10;
  int local_res18 [2];
  int local_res20 [2];
  int local_1f8;
  int local_1f4;
  int local_1f0 [2];
  longlong local_1e8;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  iVar28 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40);
  fVar34 = param_2[8];
  fVar27 = param_2[9];
  fVar35 = param_2[10];
  fVar2 = param_2[0xb];
  fVar3 = param_2[0xc];
  fVar4 = param_2[0xd];
  fVar5 = param_2[0xe];
  fVar6 = param_2[0xf];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[6];
  fVar14 = param_2[7];
  local_res8 = param_1;
  local_168 = fVar3;
  fStack_164 = fVar4;
  fStack_160 = fVar5;
  fStack_15c = fVar6;
  local_158 = fVar34;
  fStack_154 = fVar27;
  fStack_150 = fVar35;
  fStack_14c = fVar2;
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar28) {
    FUN_1418055da(param_3,&PTR_vftable_14c6e47a0);
  }
  if (((int)param_3[1] < iVar28) || (iVar28 < (int)param_3[1])) {
    *(int *)(param_3 + 1) = iVar28;
  }
  puVar30 = *(undefined8 **)(param_1 + 0x38);
  lVar25 = param_1 + 0x38;
  iVar29 = 0;
  local_res10 = 0;
  iVar28 = (int)(((longlong)*(int *)(param_1 + 0x40) * 0xc) / 0xc);
  lVar32 = (longlong)iVar28;
  local_1e8 = lVar25;
  if (0 < iVar28) {
    do {
      local_1d8 = *puVar30;
      iVar28 = *(int *)(puVar30 + 1);
      iVar24 = FUN_14502c770(lVar25,iVar29);
      iVar29 = iVar29 + 1;
      puVar30 = (undefined8 *)((longlong)puVar30 + 0xc);
      fVar37 = (float)(int)local_1d8;
      fVar33 = (float)(int)((ulonglong)local_1d8 >> 0x20);
      fVar36 = (float)iVar28;
      pfVar1 = (float *)(*param_3 + (longlong)iVar24 * 0x10);
      *pfVar1 = fVar37 * fVar7 + fVar3 + fVar33 * fVar11 + fVar36 * fVar34;
      pfVar1[1] = fVar37 * fVar8 + fVar4 + fVar33 * fVar12 + fVar36 * fVar27;
      pfVar1[2] = fVar37 * fVar9 + fVar5 + fVar33 * fVar13 + fVar36 * fVar35;
      pfVar1[3] = fVar37 * fVar10 + fVar6 + fVar33 * fVar14 + fVar36 * fVar2;
      lVar32 = lVar32 + -1;
      param_1 = local_res8;
    } while (lVar32 != 0);
  }
  uVar31 = 0;
  puVar30 = *(undefined8 **)(param_1 + 0x48);
  iVar28 = (int)(((longlong)*(int *)(param_1 + 0x50) * 0x60) / 0x60);
  lVar25 = (longlong)iVar28;
  if (0 < iVar28) {
    do {
      local_1b8 = puVar30[2];
      uStack_1b0 = puVar30[3];
      uStack_1a8 = puVar30[4];
      uStack_1a0 = puVar30[5];
      uVar20 = puVar30[10];
      puVar15 = puVar30 + 0xb;
      local_188 = *(undefined4 *)puVar15;
      uStack_184 = *(undefined4 *)((longlong)puVar30 + 0x5c);
      uVar21 = *puVar15;
      uStack_f0 = *puVar15;
      uVar16 = puVar30[8];
      uVar17 = puVar30[9];
      local_1c8 = *puVar30;
      uStack_1c0 = puVar30[1];
      uVar18 = puVar30[6];
      uVar19 = puVar30[7];
      local_198 = uVar17;
      uStack_190 = uVar20;
      local_138 = local_1b8;
      uStack_130 = uStack_1b0;
      local_128 = uStack_1a8;
      uStack_120 = uStack_1a0;
      local_108 = uVar16;
      uStack_100 = uVar17;
      local_f8 = uVar20;
      lVar32 = FUN_144d21ab0(&local_1c8,&local_148);
      fVar34 = (float)FUN_144d1d540(lVar32 + 0x30,local_res18);
      lVar26 = FUN_147e510dd(lVar32,local_res20);
      iVar28 = local_res18[0];
      if ((float)lVar26 == 0.0) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = (float)(local_res20[0] * 0x800000 + local_res18[0] * -0x800000 +
                        (int)((float)lVar26 / fVar34));
      }
      lVar32 = FUN_147e510dd(lVar32 + 0x18,local_1f0);
      if ((float)lVar32 == 0.0) {
        fVar34 = 0.0;
      }
      else {
        fVar34 = (float)((local_1f0[0] - iVar28) * 0x800000 + (int)((float)lVar32 / fVar34));
      }
      local_1c8 = uVar18;
      uStack_1c0 = uVar19;
      local_1b8 = uVar16;
      uStack_1b0 = uVar17;
      uStack_1a8 = uVar20;
      uStack_1a0 = uVar21;
      lVar32 = FUN_147e510dd(&local_1c8,&local_1f4);
      if ((float)lVar32 == 0.0) {
        fVar35 = 0.0;
      }
      else {
        fVar35 = (float)FUN_144d1d540(&uStack_1b0,&local_1f8);
        fVar35 = (float)(local_1f4 * 0x800000 + local_1f8 * -0x800000 +
                        (int)((float)lVar32 / fVar35));
      }
      iVar28 = FUN_14502c770(local_1e8,uVar31 | 0x40000000);
      uVar31 = uVar31 + 1;
      puVar30 = puVar30 + 0xc;
      pfVar1 = (float *)(*param_3 + (longlong)iVar28 * 0x10);
      *pfVar1 = fVar27 * fVar7 + local_168 + fVar34 * fVar11 + fVar35 * local_158;
      pfVar1[1] = fVar27 * fVar8 + fStack_164 + fVar34 * fVar12 + fVar35 * fStack_154;
      pfVar1[2] = fVar27 * fVar9 + fStack_160 + fVar34 * fVar13 + fVar35 * fStack_150;
      pfVar1[3] = fVar27 * fVar10 + fStack_15c + fVar34 * fVar14 + fVar35 * fStack_14c;
      lVar25 = lVar25 + -1;
      param_1 = local_res8;
    } while (lVar25 != 0);
  }
  uVar31 = 0;
  puVar30 = *(undefined8 **)(param_1 + 0x58);
  lVar25 = (longlong)*(int *)(param_1 + 0x60);
  if (0 < lVar25) {
    do {
      local_148 = *puVar30;
      uStack_140 = puVar30[1];
      local_138 = puVar30[2];
      uStack_130 = puVar30[3];
      local_128 = puVar30[4];
      uStack_120 = puVar30[5];
      local_118 = *(undefined4 *)(puVar30 + 6);
      uStack_114 = *(undefined4 *)((longlong)puVar30 + 0x34);
      uStack_110 = *(undefined4 *)(puVar30 + 7);
      uStack_10c = *(undefined4 *)((longlong)puVar30 + 0x3c);
      uVar16 = puVar30[0xc];
      uVar17 = puVar30[0xd];
      uVar18 = puVar30[0xe];
      uVar19 = puVar30[0xf];
      uVar20 = puVar30[8];
      uVar21 = puVar30[9];
      uVar22 = puVar30[10];
      uVar23 = puVar30[0xb];
      local_108 = uVar16;
      uStack_100 = uVar17;
      local_f8 = uVar18;
      uStack_f0 = uVar19;
      lVar32 = FUN_144cb9950(&local_148,&local_1c8);
      fVar34 = (float)FUN_144cc3f10(lVar32 + 0x40,&local_res8);
      lVar26 = FUN_147e59322(lVar32,local_res18);
      iVar28 = (int)local_res8;
      if ((float)lVar26 == 0.0) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = (float)(local_res18[0] * 0x800000 + (int)local_res8 * -0x800000 +
                        (int)((float)lVar26 / fVar34));
      }
      lVar32 = FUN_147e59322(lVar32 + 0x20,local_res20);
      if ((float)lVar32 == 0.0) {
        fVar34 = 0.0;
      }
      else {
        fVar34 = (float)((local_res20[0] - iVar28) * 0x800000 + (int)((float)lVar32 / fVar34));
      }
      local_1c8 = uVar20;
      uStack_1c0 = uVar21;
      local_1b8 = uVar22;
      uStack_1b0 = uVar23;
      uStack_1a8 = uVar16;
      uStack_1a0 = uVar17;
      local_198 = uVar18;
      uStack_190 = uVar19;
      lVar32 = FUN_147e59322(&local_1c8,&local_1f8);
      if ((float)lVar32 == 0.0) {
        fVar35 = 0.0;
      }
      else {
        fVar35 = (float)FUN_144cc3f10(&uStack_1a8,&local_1f4);
        fVar35 = (float)(local_1f8 * 0x800000 + local_1f4 * -0x800000 +
                        (int)((float)lVar32 / fVar35));
      }
      iVar28 = FUN_14502c770(local_1e8,uVar31 | 0x80000000);
      local_res10 = local_res10 + 1;
      puVar30 = puVar30 + 0x10;
      pfVar1 = (float *)(*param_3 + (longlong)iVar28 * 0x10);
      *pfVar1 = fVar27 * fVar7 + local_168 + fVar34 * fVar11 + fVar35 * local_158;
      pfVar1[1] = fVar27 * fVar8 + fStack_164 + fVar34 * fVar12 + fVar35 * fStack_154;
      pfVar1[2] = fVar27 * fVar9 + fStack_160 + fVar34 * fVar13 + fVar35 * fStack_150;
      pfVar1[3] = fVar27 * fVar10 + fStack_15c + fVar34 * fVar14 + fVar35 * fStack_14c;
      lVar25 = lVar25 + -1;
      uVar31 = local_res10;
    } while (lVar25 != 0);
  }
  return;
}



// FUNCTION 144d21ab0 FUN_144d21ab0 body=876 status=ok
// SIG undefined FUN_144d21ab0(void)

longlong * FUN_144d21ab0(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res18;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  uVar1 = param_1[2];
  if (uVar1 == 0 && (param_1[1] == 0 && *param_1 == 0)) {
    local_98 = param_1[3];
    uStack_90 = param_1[4];
    local_88 = param_1[5];
    uStack_80 = param_1[6];
    uStack_78 = param_1[7];
    uStack_70 = param_1[8];
    FUN_144d21e20(&local_98,&local_c8);
    *param_2 = 0;
    param_2[1] = 0;
    uStack_78._0_4_ = (undefined4)lStack_c0;
    uStack_78._4_4_ = (undefined4)((ulonglong)lStack_c0 >> 0x20);
    param_2[2] = 0;
    param_2[3] = local_c8;
    *(undefined4 *)(param_2 + 4) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_78._4_4_;
    *(undefined4 *)(param_2 + 5) = local_b8;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_b4;
    local_b8 = (undefined4)local_a0;
    uStack_b4 = (undefined4)((ulonglong)local_a0 >> 0x20);
    param_2[6] = local_b0;
    param_2[7] = lStack_a8;
  }
  else {
    uVar2 = param_1[5];
    if (uVar2 == 0 && (param_1[4] == 0 && param_1[3] == 0)) {
      local_98 = *param_1;
      uStack_90 = param_1[1];
      local_88 = param_1[2];
      uStack_80 = param_1[6];
      uStack_78 = param_1[7];
      uStack_70 = param_1[8];
      FUN_144d21e20(&local_98,&local_c8);
      *param_2 = local_c8;
      param_2[1] = lStack_c0;
      *(undefined4 *)(param_2 + 2) = local_b8;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_b4;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      local_b8 = (undefined4)local_a0;
      uStack_b4 = (undefined4)((ulonglong)local_a0 >> 0x20);
      param_2[6] = local_b0;
      param_2[7] = lStack_a8;
    }
    else {
      uVar6 = (longlong)uVar1 >> 0x3f;
      uVar7 = *param_1 ^ uVar6;
      local_f8 = uVar7 - uVar6;
      uVar8 = param_1[1] ^ uVar6;
      uVar7 = (ulonglong)(uVar7 < uVar6);
      uVar3 = uVar8 - uVar6;
      lStack_f0 = uVar3 - uVar7;
      local_e8 = ((uVar1 ^ uVar6) - uVar6) - (ulonglong)(uVar8 < uVar6 || uVar3 < uVar7);
      uVar6 = (longlong)param_1[5] >> 0x3f;
      uVar7 = param_1[3] ^ uVar6;
      local_48 = uVar7 - uVar6;
      uVar7 = (ulonglong)(uVar7 < uVar6);
      uVar3 = (param_1[4] ^ uVar6) - uVar6;
      lStack_40 = uVar3 - uVar7;
      local_38 = ((param_1[5] ^ uVar6) - uVar6) -
                 (ulonglong)((param_1[4] ^ uVar6) < uVar6 || uVar3 < uVar7);
      FUN_144d21fc0(&local_c8,&local_f8,&local_48,local_res18);
      FUN_147e5de6d(&local_98,&local_c8,param_1 + 6,local_res18);
      FUN_147e5e16d(&local_f8,&local_98,&local_e0,&local_c8);
      FUN_147e5e16d(&local_48,&local_98,&local_c8,&local_f8);
      lVar5 = lStack_d8;
      lVar4 = local_e0;
      local_f8 = local_e0;
      lStack_f0 = lStack_d8;
      local_e8 = local_d0;
      local_e0 = local_c8;
      lStack_d8 = lStack_c0;
      if ((longlong)uVar1 < 0) {
        local_f8 = -lVar4;
        uVar1 = (ulonglong)(lVar4 != 0);
        uVar7 = -lVar5;
        lStack_f0 = uVar7 - uVar1;
        local_e8 = -(ulonglong)(lVar5 != 0 || uVar7 < uVar1) - local_d0;
      }
      lVar4 = local_e8;
      local_48 = local_f8;
      lStack_40 = lStack_f0;
      local_d0 = CONCAT44(uStack_b4,local_b8);
      if ((longlong)uVar2 < 0) {
        local_e0 = -local_c8;
        lStack_d8 = -lStack_c0 - (ulonglong)(local_c8 != 0);
        local_d0 = -(ulonglong)
                    (lStack_c0 != 0 || (ulonglong)-lStack_c0 < (ulonglong)(local_c8 != 0)) -
                   CONCAT44(uStack_b4,local_b8);
      }
      lVar5 = local_d0;
      local_f8 = local_e0;
      lStack_f0 = lStack_d8;
      FUN_147e5e16d(param_1 + 6,&local_98,&local_c8,&local_e0);
      *param_2 = local_48;
      param_2[1] = lStack_40;
      param_2[2] = lVar4;
      param_2[3] = local_f8;
      param_2[4] = lStack_f0;
      param_2[5] = lVar5;
      param_2[6] = local_c8;
      param_2[7] = lStack_c0;
    }
  }
  param_2[8] = CONCAT44(uStack_b4,local_b8);
  return param_2;
}



// FUNCTION 144d21e20 FUN_144d21e20 body=416 status=ok
// SIG undefined FUN_144d21e20(void)

longlong * FUN_144d21e20(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res18;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined1 local_30 [24];
  
  uVar1 = param_1[2];
  if (uVar1 == 0 && (param_1[1] == 0 && *param_1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 1;
    return param_2;
  }
  uVar4 = (longlong)uVar1 >> 0x3f;
  uVar5 = *param_1 ^ uVar4;
  local_78 = uVar5 - uVar4;
  uVar6 = param_1[1] ^ uVar4;
  uVar5 = (ulonglong)(uVar5 < uVar4);
  uVar2 = uVar6 - uVar4;
  lStack_70 = uVar2 - uVar5;
  local_68 = ((uVar1 ^ uVar4) - uVar4) - (ulonglong)(uVar6 < uVar4 || uVar2 < uVar5);
  FUN_147e5de6d(local_30,&local_78,param_1 + 3,local_res18);
  FUN_147e5e16d(&local_78,local_30,&local_48,&local_60);
  local_60 = local_48;
  lStack_58 = lStack_40;
  local_50 = lStack_38;
  if ((longlong)uVar1 < 0) {
    local_60 = -local_48;
    lStack_58 = -lStack_40 - (ulonglong)(local_48 != 0);
    local_50 = -(ulonglong)(lStack_40 != 0 || (ulonglong)-lStack_40 < (ulonglong)(local_48 != 0)) -
               lStack_38;
  }
  lVar3 = local_50;
  local_78 = local_60;
  lStack_70 = lStack_58;
  FUN_147e5e16d(param_1 + 3,local_30,&local_48,&local_60);
  *param_2 = local_78;
  param_2[1] = lStack_70;
  param_2[2] = lVar3;
  param_2[3] = local_48;
  param_2[4] = lStack_40;
  param_2[5] = lStack_38;
  return param_2;
}



// FUNCTION 144d21fc0 FUN_144d21fc0 body=441 status=ok
// SIG undefined FUN_144d21fc0(void)

ulonglong * FUN_144d21fc0(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong local_28;
  
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  param_1[2] = *(ulonglong *)(param_3 + 4);
  iVar9 = FUN_147e5c17c(&local_78);
  FUN_147e5c1dc(&local_78,iVar9);
  iVar10 = FUN_147e5c17c(param_1);
  FUN_147e5c1dc(param_1);
  uVar6 = local_68;
  uVar7 = uStack_70;
  uVar8 = local_78;
  if (iVar9 < iVar10) {
    iVar10 = iVar9;
  }
  while (local_48 = param_1[2], uVar6 != local_48 || (uVar7 != param_1[1] || uVar8 != *param_1)) {
    uVar1 = *param_1;
    bVar11 = uVar6 <= local_48;
    bVar12 = param_1[1] < uVar7;
    if (uVar1 < uVar8) {
      bVar12 = param_1[1] <= uVar7 && !bVar12 || bVar12;
    }
    local_28 = local_48;
    if (!bVar11 || (bool)(bVar12 & ((!bVar11 || local_48 == uVar6) && bVar11))) {
      local_78 = uVar8 - uVar1;
      uVar2 = uVar7 - param_1[1];
      uStack_70 = uVar2 - (uVar8 < uVar1);
      local_68 = (uVar6 - local_48) - (ulonglong)(uVar7 < param_1[1] || uVar2 < (uVar8 < uVar1));
      local_58 = local_78;
      uStack_50 = uStack_70;
      local_48 = local_68;
      FUN_147e5c17c(&local_78);
      FUN_147e5c1dc(&local_78);
      uVar6 = local_68;
      uVar7 = uStack_70;
      uVar8 = local_78;
    }
    else {
      local_58 = uVar1 - uVar8;
      uVar2 = param_1[1] - uVar7;
      uStack_50 = uVar2 - (uVar1 < uVar8);
      local_48 = (local_48 - uVar6) - (ulonglong)(param_1[1] < uVar7 || uVar2 < (uVar1 < uVar8));
      *param_1 = local_58;
      param_1[1] = uStack_50;
      param_1[2] = local_48;
      FUN_147e5c17c(param_1);
      FUN_147e5c1dc(param_1);
    }
  }
  FUN_147e5e0a8(param_1,iVar10);
  param_1[2] = param_1[2] & 0x7fffffffffffff;
  return param_1;
}



// FUNCTION 144d221a0 FUN_144d221a0 body=1638 status=ok
// SIG undefined FUN_144d221a0(void)

void FUN_144d221a0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  uint local_res20;
  uint local_2c8;
  longlong local_2c0;
  ulonglong local_2b0;
  longlong local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  longlong local_288;
  undefined4 *local_280;
  ulonglong local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  puVar2 = *(undefined4 **)(param_1 + 0x28);
  local_2a0 = 0;
  local_298 = 0;
  lVar16 = (longlong)*(int *)(param_1 + 0x30) * 0x60;
  lVar16 = lVar16 / 6 + (lVar16 >> 0x3f);
  local_294 = 0x80000000;
  local_290 = 0;
  uVar15 = (lVar16 >> 4) - (lVar16 >> 0x3f);
  local_278 = uVar15;
  FUN_144c3fad0(&local_2a0,0,uVar15 & 0xffffffff,0);
  local_2c8 = 0;
  if (0 < (int)uVar15) {
    local_2b0 = 0;
    lVar16 = local_2a0;
    puVar19 = puVar2;
    do {
      if ((int)puVar19[4] < 0) {
        uVar14 = local_2b0 >> 5;
        if ((*(uint *)(lVar16 + uVar14 * 4) >> (sbyte)(local_2c8 & 0x1f) & 1) == 0) {
          local_288 = param_1 + 0x38;
          FUN_147e582da(local_288,&local_1e8,*puVar19);
          *(uint *)(lVar16 + uVar14 * 4) = *(uint *)(lVar16 + uVar14 * 4) | 1 << (local_2c8 & 0x1f);
          uVar7 = FUN_144cd9510(param_1,local_2c8);
          uVar13 = local_2c8;
          if (uVar7 != local_2c8) {
            local_2c0 = CONCAT44(uStack_184,local_188);
            lVar21 = CONCAT44(uStack_16c,uStack_170);
            lVar18 = CONCAT44(uStack_174,local_178);
            lVar20 = CONCAT44(uStack_17c,uStack_180);
            local_res20 = local_2c8;
            do {
              lVar16 = (longlong)(int)uVar7;
              FUN_147e582da(local_288,&local_168,puVar2[lVar16 * 0x18]);
              uVar30 = uStack_ec;
              uVar29 = uStack_f0;
              uVar28 = uStack_f4;
              uVar27 = local_f8;
              uVar26 = uStack_fc;
              uVar25 = uStack_100;
              uVar24 = uStack_104;
              uVar23 = local_108;
              uVar38 = uStack_14c;
              uVar37 = uStack_150;
              uVar36 = uStack_154;
              uVar35 = local_158;
              uVar34 = uStack_15c;
              uVar33 = uStack_160;
              uVar32 = uStack_164;
              uVar31 = local_168;
              if (CONCAT44(uStack_ec,uStack_f0) == lVar21 &&
                  (CONCAT44(uStack_f4,local_f8) == lVar18 &&
                  (CONCAT44(uStack_fc,uStack_100) == lVar20 &&
                  CONCAT44(uStack_104,local_108) == local_2c0))) {
                iVar8 = FUN_144d22810(&local_168,&local_1e8);
                lVar21 = CONCAT44(uStack_16c,uStack_170);
                local_2c0 = CONCAT44(uStack_184,local_188);
                lVar18 = CONCAT44(uStack_174,local_178);
                lVar20 = CONCAT44(uStack_17c,uStack_180);
                uVar23 = local_108;
                uVar24 = uStack_104;
                uVar25 = uStack_100;
                uVar26 = uStack_fc;
                uVar27 = local_f8;
                uVar28 = uStack_f4;
                uVar29 = uStack_f0;
                uVar30 = uStack_ec;
                uVar31 = local_168;
                uVar32 = uStack_164;
                uVar33 = uStack_160;
                uVar34 = uStack_15c;
                uVar35 = local_158;
                uVar36 = uStack_154;
                uVar37 = uStack_150;
                uVar38 = uStack_14c;
LAB_144d224f5:
                if (iVar8 != 0) goto LAB_144d22648;
                iVar9 = FUN_144cd9510(param_1,uVar7);
                puVar10 = puVar2 + (longlong)iVar9 * 0x18 + 6;
                local_280 = puVar2 + lVar16 * 0x18 + 6;
                fVar39 = (float)local_280[0xe] * (float)puVar10[0xf] -
                         (float)puVar10[0xe] * (float)local_280[0xf];
                fVar22 = (ABS((float)puVar10[0xe]) * ABS((float)local_280[0xf]) +
                         ABS((float)puVar10[0xf]) * ABS((float)local_280[0xe])) * 3.5762787e-07;
                if (fVar22 < fVar39) {
LAB_144d2263f:
                  iVar8 = -1;
                  goto LAB_144d2264a;
                }
                if (-fVar22 <= fVar39) {
                  puVar11 = (ulonglong *)FUN_144cc5990(&local_268,local_280 + 4,puVar10);
                  puVar12 = (ulonglong *)FUN_144cc5990(&local_228,local_280,puVar10 + 4);
                  uVar15 = (ulonglong)(*puVar12 < *puVar11);
                  uVar3 = puVar12[1] - puVar11[1];
                  uVar14 = (ulonglong)(puVar12[1] < puVar11[1] || uVar3 < uVar15);
                  uVar4 = puVar12[2] - puVar11[2];
                  lVar17 = (puVar12[3] - puVar11[3]) -
                           (ulonglong)(puVar12[2] < puVar11[2] || uVar4 < uVar14);
                  if (0 < (int)((uint)((uVar4 != uVar14 || (uVar3 != uVar15 || *puVar12 != *puVar11)
                                       ) || lVar17 != 0) | (uint)(lVar17 >> 0x3f)))
                  goto LAB_144d2263f;
                }
              }
              else {
                local_228 = CONCAT44(uStack_1e4,local_1e8);
                uStack_220 = CONCAT44(uStack_1dc,uStack_1e0);
                local_218 = CONCAT44(uStack_1d4,local_1d8);
                uStack_210 = CONCAT44(uStack_1cc,uStack_1d0);
                local_268 = CONCAT44(uStack_164,local_168);
                uStack_260 = CONCAT44(uStack_15c,uStack_160);
                local_258 = local_158;
                uStack_254 = uStack_154;
                uStack_250 = uStack_150;
                uStack_24c = uStack_14c;
                local_248 = local_108;
                uStack_244 = uStack_104;
                uStack_240 = uStack_100;
                uStack_23c = uStack_fc;
                local_238 = local_f8;
                uStack_234 = uStack_f4;
                uStack_230 = uStack_f0;
                uStack_22c = uStack_ec;
                iVar8 = FUN_144cab880(&local_268,&local_228);
                if (iVar8 == 0) {
                  local_228 = local_1c8;
                  uStack_220 = uStack_1c0;
                  local_218 = local_1b8;
                  uStack_210 = uStack_1b0;
                  local_268 = local_148;
                  uStack_260 = uStack_140;
                  local_258 = local_138;
                  uStack_254 = uStack_134;
                  uStack_250 = uStack_130;
                  uStack_24c = uStack_12c;
                  local_248 = uVar23;
                  uStack_244 = uVar24;
                  uStack_240 = uVar25;
                  uStack_23c = uVar26;
                  local_238 = uVar27;
                  uStack_234 = uVar28;
                  uStack_230 = uVar29;
                  uStack_22c = uVar30;
                  iVar8 = FUN_144cab880(&local_268,&local_228);
                  if (iVar8 == 0) {
                    local_228 = local_1a8;
                    uStack_220 = uStack_1a0;
                    local_218 = local_198;
                    uStack_210 = uStack_190;
                    local_268 = local_128;
                    uStack_260 = uStack_120;
                    local_258 = local_118;
                    uStack_254 = uStack_114;
                    uStack_250 = uStack_110;
                    uStack_24c = uStack_10c;
                    local_248 = uVar23;
                    uStack_244 = uVar24;
                    uStack_240 = uVar25;
                    uStack_23c = uVar26;
                    local_238 = uVar27;
                    uStack_234 = uVar28;
                    uStack_230 = uVar29;
                    uStack_22c = uVar30;
                    iVar8 = FUN_144cab880(&local_268,&local_228);
                    goto LAB_144d224f5;
                  }
                }
LAB_144d22648:
                if (iVar8 < 0) {
LAB_144d2264a:
                  local_1b8 = CONCAT44(uStack_134,local_138);
                  uStack_1b0 = CONCAT44(uStack_12c,uStack_130);
                  local_1c8 = local_148;
                  uStack_1c0 = uStack_140;
                  lVar18 = CONCAT44(uVar28,uVar27);
                  local_1a8 = local_128;
                  uStack_1a0 = uStack_120;
                  auVar6._4_4_ = uVar28;
                  auVar6._0_4_ = uVar27;
                  auVar6._8_4_ = uVar29;
                  auVar6._12_4_ = uVar30;
                  lVar21 = auVar6._8_8_;
                  local_198 = CONCAT44(uStack_114,local_118);
                  uStack_190 = CONCAT44(uStack_10c,uStack_110);
                  auVar5._4_4_ = uVar24;
                  auVar5._0_4_ = uVar23;
                  auVar5._8_4_ = uVar25;
                  auVar5._12_4_ = uVar26;
                  lVar20 = auVar5._8_8_;
                  local_2c0 = CONCAT44(uVar24,uVar23);
                  local_1e8 = uVar31;
                  uStack_1e4 = uVar32;
                  uStack_1e0 = uVar33;
                  uStack_1dc = uVar34;
                  local_1d8 = uVar35;
                  uStack_1d4 = uVar36;
                  uStack_1d0 = uVar37;
                  uStack_1cc = uVar38;
                  local_188 = uVar23;
                  uStack_184 = uVar24;
                  uStack_180 = uVar25;
                  uStack_17c = uVar26;
                  local_178 = uVar27;
                  uStack_174 = uVar28;
                  uStack_170 = uVar29;
                  uStack_16c = uVar30;
                }
              }
              uVar13 = uVar7;
              if (-1 < iVar8) {
                uVar13 = local_res20;
              }
              *(uint *)(local_2a0 + (lVar16 >> 5) * 4) =
                   *(uint *)(local_2a0 + (lVar16 >> 5) * 4) | 1 << (uVar7 & 0x1f);
              uVar7 = FUN_144cd9510(param_1,uVar7);
              lVar16 = local_2a0;
              local_res20 = uVar13;
            } while (uVar7 != local_2c8);
          }
          iVar8 = (int)param_2[1] + 1;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
            FUN_1401f86b2(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
          }
          puVar1 = (uint *)(*param_2 + (longlong)(int)param_2[1] * 4);
          if (puVar1 != (uint *)0x0) {
            *puVar1 = uVar13;
          }
          *(int *)(param_2 + 1) = iVar8;
          uVar15 = local_278;
        }
      }
      local_2c8 = local_2c8 + 1;
      local_2b0 = local_2b0 + 1;
      puVar19 = puVar19 + 0x18;
    } while ((int)local_2c8 < (int)uVar15);
  }
  FUN_144bf90d0(&local_2a0);
  return;
}



// FUNCTION 144d22810 FUN_144d22810 body=299 status=ok
// SIG undefined FUN_144d22810(void)

uint FUN_144d22810(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = (ulonglong)(*param_1 < *param_2);
  uVar3 = param_1[1] - param_2[1];
  uVar2 = (ulonglong)(param_1[1] < param_2[1] || uVar3 < uVar1);
  uVar4 = param_1[2] - param_2[2];
  lVar6 = (param_1[3] - param_2[3]) - (ulonglong)(param_1[2] < param_2[2] || uVar4 < uVar2);
  uVar5 = (uint)(lVar6 >> 0x3f) |
          (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || *param_1 != *param_2)) || lVar6 != 0);
  if (uVar5 != 0) {
    return uVar5;
  }
  uVar1 = (ulonglong)(param_1[4] < param_2[4]);
  uVar3 = param_1[5] - param_2[5];
  uVar2 = (ulonglong)(param_1[5] < param_2[5] || uVar3 < uVar1);
  uVar4 = param_1[6] - param_2[6];
  lVar6 = (param_1[7] - param_2[7]) - (ulonglong)(param_1[6] < param_2[6] || uVar4 < uVar2);
  uVar5 = (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || param_1[4] != param_2[4])) || lVar6 != 0) |
          (uint)(lVar6 >> 0x3f);
  if (uVar5 == 0) {
    uVar1 = (ulonglong)(param_1[8] < param_2[8]);
    uVar3 = param_1[9] - param_2[9];
    uVar2 = (ulonglong)(param_1[9] < param_2[9] || uVar3 < uVar1);
    uVar4 = param_1[10] - param_2[10];
    lVar6 = (param_1[0xb] - param_2[0xb]) - (ulonglong)(param_1[10] < param_2[10] || uVar4 < uVar2);
    uVar5 = (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || param_1[8] != param_2[8])) || lVar6 != 0) |
            (uint)(lVar6 >> 0x3f);
  }
  return uVar5;
}



// FUNCTION 144d22940 FUN_144d22940 body=637 status=ok
// SIG undefined FUN_144d22940(void)

undefined8
FUN_144d22940(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  float fVar9;
  int local_res10 [2];
  int local_res18 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_a8 = param_3[6];
  local_d8 = -param_3[4];
  uVar1 = (ulonglong)(param_3[4] != 0);
  uVar2 = -param_3[5];
  lStack_d0 = uVar2 - uVar1;
  local_c8 = -(ulonglong)(param_3[5] != 0 || uVar2 < uVar1) - local_a8;
  local_138 = -param_2[4];
  uVar1 = (ulonglong)(param_2[4] != 0);
  uVar2 = -param_2[5];
  uStack_130 = uVar2 - uVar1;
  local_108 = param_2[6];
  local_128 = -(ulonglong)(param_2[5] != 0 || uVar2 < uVar1) - local_108;
  local_b8 = *param_3;
  uStack_b0 = param_3[1];
  local_38 = param_3[2];
  uStack_30 = param_3[3];
  local_118 = *param_2;
  uStack_110 = param_2[1];
  local_f8 = param_2[2];
  uStack_f0 = param_2[3];
  local_e8 = local_128;
  cVar7 = FUN_144cc4040(&local_118,&local_f8,&local_b8,&local_38,&local_138,&local_d8,local_98);
  if (cVar7 == '\0') {
    return 0;
  }
  local_d8 = local_78;
  lStack_d0 = local_70;
  local_c8 = local_68;
  uStack_c0 = local_60;
  local_138._0_4_ = (undefined4)local_98._0_8_;
  local_138._4_4_ = SUB84(local_98._0_8_,4);
  uStack_130._0_4_ = (undefined4)local_98._8_8_;
  uStack_130._4_4_ = SUB84(local_98._8_8_,4);
  local_128._0_4_ = (undefined4)local_98._16_8_;
  local_128._4_4_ = SUB84(local_98._16_8_,4);
  uStack_120._0_4_ = (undefined4)local_98._24_8_;
  uStack_120._4_4_ = SUB84(local_98._24_8_,4);
  *param_4 = (undefined4)local_138;
  param_4[1] = local_138._4_4_;
  param_4[2] = (undefined4)uStack_130;
  param_4[3] = uStack_130._4_4_;
  local_138 = local_58;
  uVar3 = local_138;
  param_4[4] = (undefined4)local_128;
  param_4[5] = local_128._4_4_;
  param_4[6] = (undefined4)uStack_120;
  param_4[7] = uStack_120._4_4_;
  uStack_130 = local_50;
  uVar4 = uStack_130;
  local_138._0_4_ = (undefined4)local_58;
  local_138._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_130._0_4_ = (undefined4)local_50;
  uStack_130._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
  local_128 = local_48;
  uVar5 = local_128;
  *(longlong *)(param_4 + 8) = local_78;
  *(undefined8 *)(param_4 + 10) = local_70;
  uStack_120 = local_40;
  uVar6 = uStack_120;
  local_128._0_4_ = (undefined4)local_48;
  local_128._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_120._0_4_ = (undefined4)local_40;
  uStack_120._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
  *(undefined8 *)(param_4 + 0xc) = local_68;
  *(undefined8 *)(param_4 + 0xe) = local_60;
  param_4[0x10] = (undefined4)local_138;
  param_4[0x11] = local_138._4_4_;
  param_4[0x12] = (undefined4)uStack_130;
  param_4[0x13] = uStack_130._4_4_;
  param_4[0x14] = (undefined4)local_128;
  param_4[0x15] = local_128._4_4_;
  param_4[0x16] = (undefined4)uStack_120;
  param_4[0x17] = uStack_120._4_4_;
  local_138 = uVar3;
  uStack_130 = uVar4;
  local_128 = uVar5;
  uStack_120 = uVar6;
  fVar9 = (float)FUN_144cc3f10(param_4 + 0x10,local_res10);
  lVar8 = FUN_147e59322(param_4,local_res18);
  if ((float)lVar8 == 0.0) {
    param_4[0x18] = 0;
  }
  else {
    param_4[0x18] =
         local_res18[0] * 0x800000 + local_res10[0] * -0x800000 + (int)((float)lVar8 / fVar9);
  }
  lVar8 = FUN_147e59322(param_4 + 8,local_res18);
  if ((float)lVar8 == 0.0) {
    param_4[0x19] = 0;
  }
  else {
    param_4[0x19] = (local_res18[0] - local_res10[0]) * 0x800000 + (int)((float)lVar8 / fVar9);
  }
  return 1;
}



// FUNCTION 144d22bc0 FUN_144d22bc0 body=318 status=ok
// SIG undefined FUN_144d22bc0(void)

int FUN_144d22bc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x221c);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 0x10);
    iVar7 = iVar6 + 1;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
      FUN_144d26d30(param_1 + 8,&PTR_vftable_14c6e47c0,(longlong)iVar7);
    }
    *(int *)(param_1 + 0x10) = iVar7;
  }
  else {
    *(undefined4 *)(param_1 + 0x221c) =
         *(undefined4 *)((longlong)iVar6 * 0x88 + 0x80 + *(longlong *)(param_1 + 8));
  }
  uVar3 = param_2[1];
  puVar5 = (undefined8 *)((longlong)iVar6 * 0x88 + *(longlong *)(param_1 + 8));
  *puVar5 = *param_2;
  puVar5[1] = uVar3;
  uVar3 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar3;
  uVar3 = param_2[5];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar3;
  uVar3 = param_2[7];
  puVar5[6] = param_2[6];
  puVar5[7] = uVar3;
  uVar3 = param_2[9];
  puVar5[8] = param_2[8];
  puVar5[9] = uVar3;
  uVar3 = param_2[0xb];
  puVar5[10] = param_2[10];
  puVar5[0xb] = uVar3;
  uVar4 = *(undefined4 *)((longlong)param_2 + 100);
  uVar1 = *(undefined4 *)(param_2 + 0xd);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)puVar5 + 100) = uVar4;
  *(undefined4 *)(puVar5 + 0xd) = uVar1;
  *(undefined4 *)((longlong)puVar5 + 0x6c) = uVar2;
  puVar5[0xe] = param_2[0xe];
  puVar5[0xf] = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  *(undefined1 *)((longlong)puVar5 + 0x84) = 0;
  iVar7 = *(int *)(param_1 + 0x2218);
  if (iVar7 == -1) {
    *(int *)(param_1 + 0x2218) = iVar6;
    return iVar6;
  }
  if (iVar6 == -1) {
    *(int *)(param_1 + 0x2218) = iVar7;
    return -1;
  }
  uVar4 = FUN_144d22d00(param_1,iVar7,iVar6);
  *(undefined4 *)(param_1 + 0x2218) = uVar4;
  return iVar6;
}



// FUNCTION 144d22d00 FUN_144d22d00 body=633 status=ok
// SIG undefined FUN_144d22d00(void)

ulonglong FUN_144d22d00(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar9 = (ulonglong)(int)param_2;
  lVar13 = uVar9 * 0x88;
  uVar5 = (uint)param_3;
  uVar10 = (ulonglong)(int)uVar5;
  lVar12 = uVar10 * 0x88;
  lVar7 = lVar13 + *(longlong *)(param_1 + 8);
  lVar1 = lVar12 + *(longlong *)(param_1 + 8);
  if (*(char *)(lVar7 + 0x84) == '\0') {
    if (*(char *)(lVar1 + 0x84) == '\0') {
      iVar6 = FUN_144cb8980(lVar7,lVar1);
      if (iVar6 < 0) {
        *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(lVar7 + 0x78);
        uVar10 = (ulonglong)param_2;
        *(uint *)(lVar7 + 0x78) = uVar5;
      }
      else if (iVar6 < 1) {
        lVar4 = *(longlong *)(param_1 + 8);
        lVar8 = lVar13 + lVar4;
        iVar6 = *(int *)(lVar13 + 0x80 + lVar4);
        while (iVar6 != -1) {
          iVar6 = *(int *)(lVar12 + lVar4 + 0x80);
          if (iVar6 == -1) {
            *(uint *)(lVar12 + lVar4 + 0x80) = param_2;
            uVar10 = param_3 & 0xffffffff;
            goto LAB_144d22e8b;
          }
          lVar12 = (longlong)iVar6 * 0x88;
          lVar8 = (longlong)*(int *)(lVar8 + 0x80) * 0x88 + lVar4;
          iVar6 = *(int *)(lVar8 + 0x80);
        }
        uVar10 = (ulonglong)param_2;
        *(uint *)(lVar8 + 0x80) = uVar5;
        param_2 = uVar5;
LAB_144d22e8b:
        iVar6 = *(int *)(lVar7 + 0x78);
        iVar11 = (int)uVar10;
        if (iVar6 == -1) {
LAB_144d22f62:
          *(undefined4 *)((longlong)iVar11 * 0x88 + 0x78 + *(longlong *)(param_1 + 8)) =
               *(undefined4 *)(lVar1 + 0x78);
        }
        else {
          iVar2 = *(int *)(lVar1 + 0x78);
          lVar12 = *(longlong *)(param_1 + 8);
          if (iVar2 == -1) {
            *(int *)((longlong)iVar11 * 0x88 + 0x78 + lVar12) = iVar6;
          }
          else {
            lVar13 = (longlong)iVar6 * 0x88 + lVar12;
            iVar6 = *(int *)(lVar13 + 0x7c);
            iVar3 = iVar2;
            while (iVar6 != -1) {
              lVar8 = (longlong)iVar3 * 0x88 + lVar12;
              iVar3 = *(int *)(lVar8 + 0x7c);
              if (iVar3 == -1) {
                *(undefined4 *)(lVar8 + 0x7c) = *(undefined4 *)(lVar7 + 0x78);
                goto LAB_144d22f62;
              }
              lVar13 = (longlong)*(int *)(lVar13 + 0x7c) * 0x88 + lVar12;
              iVar6 = *(int *)(lVar13 + 0x7c);
            }
            *(int *)(lVar13 + 0x7c) = iVar2;
            *(undefined4 *)((longlong)iVar11 * 0x88 + 0x78 + *(longlong *)(param_1 + 8)) =
                 *(undefined4 *)(lVar7 + 0x78);
          }
        }
        *(undefined4 *)((longlong)(int)param_2 * 0x88 + 0x78 + *(longlong *)(param_1 + 8)) =
             0xffffffff;
      }
      else {
        *(undefined4 *)(lVar7 + 0x7c) = *(undefined4 *)(lVar1 + 0x78);
        uVar10 = param_3 & 0xffffffff;
        *(uint *)(lVar1 + 0x78) = param_2;
      }
    }
    else {
      iVar6 = *(int *)(lVar1 + 0x78);
      *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(param_1 + 0x221c);
      *(uint *)(param_1 + 0x221c) = uVar5;
      while (iVar6 != -1) {
        lVar7 = (longlong)iVar6;
        iVar6 = *(int *)(lVar7 * 0x88 + 0x7c + *(longlong *)(param_1 + 8));
        *(undefined4 *)(lVar7 * 0x88 + 0x7c + *(longlong *)(param_1 + 8)) = 0xffffffff;
        uVar5 = FUN_144d22d00(param_1,uVar9 & 0xffffffff);
        uVar9 = (ulonglong)uVar5;
      }
      uVar10 = uVar9 & 0xffffffff;
    }
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x78);
    *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(param_1 + 0x221c);
    *(uint *)(param_1 + 0x221c) = param_2;
    while (iVar6 != -1) {
      lVar7 = (longlong)iVar6;
      iVar6 = *(int *)(lVar7 * 0x88 + 0x7c + *(longlong *)(param_1 + 8));
      *(undefined4 *)(lVar7 * 0x88 + 0x7c + *(longlong *)(param_1 + 8)) = 0xffffffff;
      uVar5 = FUN_144d22d00(param_1,uVar10 & 0xffffffff);
      uVar10 = (ulonglong)uVar5;
    }
    uVar10 = uVar10 & 0xffffffff;
  }
  return uVar10;
}



// FUNCTION 144d22f80 FUN_144d22f80 body=802 status=ok
// SIG undefined FUN_144d22f80(void)

uint FUN_144d22f80(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_2 == 0xffffffff) {
    return 0xffffffff;
  }
  do {
    uVar6 = 0xffffffff;
    uVar7 = param_2;
    while (param_2 = uVar6, uVar7 != 0xffffffff) {
      lVar10 = *(longlong *)(param_1 + 8);
      lVar15 = (longlong)(int)uVar7 * 0x88;
      uVar6 = *(uint *)(lVar15 + 0x7c + lVar10);
      uVar12 = (ulonglong)(int)uVar6;
      if (uVar6 == 0xffffffff) {
        if (param_2 == 0xffffffff) {
          return uVar7;
        }
        *(uint *)(lVar15 + lVar10 + 0x7c) = param_2;
        param_2 = uVar7;
        break;
      }
      lVar14 = uVar12 * 0x88;
      uVar2 = *(uint *)(lVar14 + 0x7c + lVar10);
      *(undefined4 *)(lVar15 + lVar10 + 0x7c) = 0xffffffff;
      *(undefined4 *)(lVar14 + 0x7c + *(longlong *)(param_1 + 8)) = 0xffffffff;
      lVar10 = *(longlong *)(param_1 + 8) + lVar15;
      lVar1 = *(longlong *)(param_1 + 8) + lVar14;
      if (*(char *)(lVar10 + 0x84) == '\0') {
        if (*(char *)(lVar1 + 0x84) == '\0') {
          iVar8 = FUN_144cb8980(lVar10,lVar1);
          if (iVar8 < 0) {
            *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(lVar10 + 0x78);
            *(uint *)(lVar10 + 0x78) = uVar6;
            uVar6 = uVar7;
          }
          else if (iVar8 < 1) {
            lVar5 = *(longlong *)(param_1 + 8);
            lVar11 = lVar5 + lVar15;
            iVar8 = *(int *)(lVar5 + 0x80 + lVar15);
            while (iVar8 != -1) {
              iVar8 = *(int *)(lVar5 + lVar14 + 0x80);
              if (iVar8 == -1) {
                *(uint *)(lVar5 + lVar14 + 0x80) = uVar7;
                uVar13 = uVar7;
                goto LAB_144d2316b;
              }
              lVar14 = (longlong)iVar8 * 0x88;
              lVar11 = (longlong)*(int *)(lVar11 + 0x80) * 0x88 + lVar5;
              iVar8 = *(int *)(lVar11 + 0x80);
            }
            *(uint *)(lVar11 + 0x80) = uVar6;
            uVar13 = uVar6;
            uVar6 = uVar7;
LAB_144d2316b:
            iVar8 = *(int *)(lVar10 + 0x78);
            if (iVar8 == -1) {
              lVar15 = (longlong)(int)uVar6 * 0x88;
              uVar9 = *(undefined4 *)(lVar1 + 0x78);
LAB_144d2320a:
              *(undefined4 *)(lVar15 + 0x78 + *(longlong *)(param_1 + 8)) = uVar9;
            }
            else {
              iVar3 = *(int *)(lVar1 + 0x78);
              lVar15 = *(longlong *)(param_1 + 8);
              if (iVar3 != -1) {
                lVar14 = (longlong)iVar8 * 0x88 + lVar15;
                iVar8 = *(int *)(lVar14 + 0x7c);
                iVar4 = iVar3;
                while (iVar8 != -1) {
                  lVar11 = (longlong)iVar4 * 0x88 + lVar15;
                  iVar4 = *(int *)(lVar11 + 0x7c);
                  if (iVar4 == -1) {
                    *(undefined4 *)(lVar11 + 0x7c) = *(undefined4 *)(lVar10 + 0x78);
                    lVar15 = (longlong)(int)uVar6 * 0x88;
                    uVar9 = *(undefined4 *)(lVar1 + 0x78);
                    goto LAB_144d2320a;
                  }
                  lVar14 = (longlong)*(int *)(lVar14 + 0x7c) * 0x88 + lVar15;
                  iVar8 = *(int *)(lVar14 + 0x7c);
                }
                lVar15 = (longlong)(int)uVar6 * 0x88;
                *(int *)(lVar14 + 0x7c) = iVar3;
                uVar9 = *(undefined4 *)(lVar10 + 0x78);
                goto LAB_144d2320a;
              }
              *(int *)((longlong)(int)uVar6 * 0x88 + 0x78 + lVar15) = iVar8;
            }
            *(undefined4 *)((longlong)(int)uVar13 * 0x88 + 0x78 + *(longlong *)(param_1 + 8)) =
                 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar10 + 0x7c) = *(undefined4 *)(lVar1 + 0x78);
            *(uint *)(lVar1 + 0x78) = uVar7;
          }
        }
        else {
          iVar8 = *(int *)(lVar1 + 0x78);
          *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(param_1 + 0x221c);
          *(uint *)(param_1 + 0x221c) = uVar6;
          while (uVar6 = uVar7, iVar8 != -1) {
            lVar10 = (longlong)iVar8;
            iVar8 = *(int *)(lVar10 * 0x88 + 0x7c + *(longlong *)(param_1 + 8));
            *(undefined4 *)(lVar10 * 0x88 + 0x7c + *(longlong *)(param_1 + 8)) = 0xffffffff;
            uVar7 = FUN_144d22d00(param_1,uVar7);
          }
        }
      }
      else {
        iVar8 = *(int *)(lVar10 + 0x78);
        *(undefined4 *)(lVar10 + 0x80) = *(undefined4 *)(param_1 + 0x221c);
        *(uint *)(param_1 + 0x221c) = uVar7;
        while (iVar8 != -1) {
          lVar10 = (longlong)iVar8;
          iVar8 = *(int *)(lVar10 * 0x88 + 0x7c + *(longlong *)(param_1 + 8));
          *(undefined4 *)(lVar10 * 0x88 + 0x7c + *(longlong *)(param_1 + 8)) = 0xffffffff;
          uVar6 = FUN_144d22d00(param_1,uVar12 & 0xffffffff);
          uVar12 = (ulonglong)uVar6;
        }
      }
      *(uint *)((longlong)(int)uVar6 * 0x88 + 0x7c + *(longlong *)(param_1 + 8)) = param_2;
      uVar7 = uVar2;
    }
  } while( true );
}



// FUNCTION 144d232b0 FUN_144d232b0 body=178 status=ok
// SIG undefined FUN_144d232b0(void)

undefined4 FUN_144d232b0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  lVar4 = (longlong)param_2;
  iVar5 = iVar1 + param_2;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar5) {
    FUN_144cc8620((longlong *)(param_1 + 0x10),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  *(int *)(param_1 + 0x18) = iVar5;
  if (0 < param_2) {
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(param_1 + 0x10));
    do {
      puVar3[-1] = 0xffffffffffffffff;
      *puVar3 = 0xffffffffffffffff;
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff4 | 4;
      puVar3[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return uVar2;
}



// FUNCTION 144d23370 FUN_144d23370 body=170 status=ok
// SIG undefined FUN_144d23370(void)

void FUN_144d23370(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined8 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x70);
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = (ulonglong)uVar5;
    puVar4 = (undefined8 *)*param_1;
    puVar3 = puVar2;
    if (0 < (int)uVar5) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar1 = puVar4[3];
          puVar3[2] = puVar4[2];
          puVar3[3] = uVar1;
          uVar1 = puVar4[5];
          puVar3[4] = puVar4[4];
          puVar3[5] = uVar1;
          uVar1 = puVar4[7];
          puVar3[6] = puVar4[6];
          puVar3[7] = uVar1;
          uVar1 = puVar4[9];
          puVar3[8] = puVar4[8];
          puVar3[9] = uVar1;
          uVar1 = puVar4[0xb];
          puVar3[10] = puVar4[10];
          puVar3[0xb] = uVar1;
          uVar1 = puVar4[0xd];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xd] = uVar1;
        }
        puVar3 = puVar3 + 0xe;
        puVar4 = puVar4 + 0xe;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 144d23420 FUN_144d23420 body=35 status=ok
// SIG undefined FUN_144d23420(void)

void FUN_144d23420(undefined4 *param_1,undefined8 param_2)

{
  undefined1 local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_144d23450(&local_18,local_res8,param_2);
  return;
}



// FUNCTION 144d23450 FUN_144d23450 body=1452 status=ok
// SIG undefined FUN_144d23450(void)

bool FUN_144d23450(longlong *param_1,undefined1 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  char cVar14;
  undefined8 *puVar15;
  int *piVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 *puVar27;
  longlong *local_res8;
  int local_res10 [2];
  undefined4 *local_res18;
  longlong local_res20;
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  longlong local_190;
  longlong local_188;
  undefined4 *local_180;
  undefined4 *local_178;
  undefined4 **local_170;
  undefined4 *local_168;
  undefined4 **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  plVar1 = (longlong *)(param_3 + 0x8a6);
  param_3[6] = 0;
  puVar6 = (uint *)*plVar1;
  *(undefined8 *)(param_3 + 0x888) = 0xffffffffffffffff;
  param_3[0x88c] = 0;
  param_3[0x890] = 0;
  param_3[0x894] = 0;
  param_3[0x89a] = 0;
  param_3[0x8a4] = 0;
  local_res8 = param_1;
  local_res18 = param_3;
  if (puVar6 + (longlong)(int)param_3[0x8a8] * 0x52 != puVar6) {
    puVar23 = puVar6 + (longlong)(int)param_3[0x8a8] * 0x52 + 0x4f;
    do {
      puVar2 = puVar23 + -0x52;
      puVar23[-0x53] = 0;
      if ((-1 < (int)*puVar2) && (*(longlong *)(puVar23 + -0x55) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar23 + -0x55),
                   (ulonglong)(*puVar2 & 0x7fffffff) * 0x70);
      }
      puVar3 = puVar23 + -0xa1;
      puVar23[-0x55] = 0;
      puVar23[-0x54] = 0;
      *puVar2 = 0x80000000;
      puVar23 = puVar2;
    } while (puVar3 != puVar6);
  }
  lVar21 = (local_res8[1] - *local_res8) / 6 + (local_res8[1] - *local_res8 >> 0x3f);
  param_3[0x8a8] = 0;
  param_3[0x8ac] = 0;
  iVar5 = param_3[0x8a8];
  lVar21 = (lVar21 >> 5) - (lVar21 >> 0x3f);
  iVar17 = (int)lVar21;
  iVar20 = iVar5 + iVar17;
  local_res20 = CONCAT44(local_res20._4_4_,iVar20);
  local_190 = lVar21;
  if ((int)(param_3[0x8a9] & 0x7fffffff) < iVar20) {
    FUN_144d25fd0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar20);
    iVar20 = (int)local_res20;
  }
  lVar24 = (longlong)iVar17;
  puVar27 = (undefined4 *)((longlong)iVar5 * 0x148 + *plVar1);
  local_1a8 = puVar27 + lVar24 * 0x52;
  if (puVar27 != local_1a8) {
    puVar18 = puVar27 + 0x4f;
    do {
      if (puVar18 != (undefined4 *)&DAT_0000013c) {
        *(undefined8 *)(puVar18 + -3) = 0;
        puVar18[-1] = 0;
        *puVar18 = 0x80000000;
      }
      puVar4 = puVar18 + 3;
      puVar18 = puVar18 + 0x52;
    } while (puVar4 != local_1a8);
  }
  param_3[0x8a8] = iVar20;
  local_188 = lVar24;
  if (0 < iVar17) {
    lVar21 = *local_res8;
    lVar11 = 0;
    lVar12 = 0;
    lVar26 = (longlong)(iVar17 + -1) * 0xc0;
    local_res20 = (longlong)(iVar17 + -1) * 0x148;
    do {
      lVar25 = lVar12;
      lVar22 = lVar11;
      puVar15 = (undefined8 *)(lVar21 + 8 + lVar26);
      local_e8 = *puVar15;
      uStack_e0 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x18 + lVar26);
      local_d8 = *puVar15;
      uStack_d0 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x28 + lVar26);
      local_c8 = *puVar15;
      uStack_c0 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x38 + lVar26);
      local_b8 = *puVar15;
      uStack_b0 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x48 + lVar26);
      local_a8 = *puVar15;
      uStack_a0 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x58 + lVar26);
      local_98 = *puVar15;
      uStack_90 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x68 + lVar26);
      local_88 = *puVar15;
      uStack_80 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 8 + lVar22);
      local_158 = *puVar15;
      uStack_150 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x18 + lVar22);
      local_148 = *puVar15;
      uStack_140 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x28 + lVar22);
      local_138 = *puVar15;
      uStack_130 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x38 + lVar22);
      local_128 = *puVar15;
      uStack_120 = puVar15[1];
      puVar15 = (undefined8 *)(lVar21 + 0x48 + lVar22);
      local_118 = *puVar15;
      uStack_110 = puVar15[1];
      puVar18 = (undefined4 *)(lVar21 + 0x58 + lVar22);
      local_108 = *puVar18;
      uStack_104 = puVar18[1];
      uStack_100 = puVar18[2];
      uStack_fc = puVar18[3];
      puVar18 = (undefined4 *)(lVar21 + 0x68 + lVar22);
      local_f8 = *puVar18;
      uStack_f4 = puVar18[1];
      uStack_f0 = puVar18[2];
      uStack_ec = puVar18[3];
      bVar13 = FUN_144cb8700(&local_e8,&local_158);
      puVar15 = &local_e8;
      if (bVar13 == 0) {
        puVar15 = &local_158;
      }
      uVar7 = puVar15[1];
      uVar8 = puVar15[2];
      uVar9 = puVar15[3];
      *(undefined8 *)((longlong)puVar27 + local_res20) = *puVar15;
      ((undefined8 *)((longlong)puVar27 + local_res20))[1] = uVar7;
      uVar7 = puVar15[4];
      uVar10 = puVar15[5];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x10);
      *puVar19 = uVar8;
      puVar19[1] = uVar9;
      uVar8 = puVar15[6];
      uVar9 = puVar15[7];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x20);
      *puVar19 = uVar7;
      puVar19[1] = uVar10;
      uVar7 = puVar15[8];
      uVar10 = puVar15[9];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x30);
      *puVar19 = uVar8;
      puVar19[1] = uVar9;
      uVar8 = puVar15[10];
      uVar9 = puVar15[0xb];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x40);
      *puVar19 = uVar7;
      puVar19[1] = uVar10;
      uVar7 = puVar15[0xc];
      uVar10 = puVar15[0xd];
      puVar15 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x50);
      *puVar15 = uVar8;
      puVar15[1] = uVar9;
      puVar15 = &local_158;
      if (bVar13 == 0) {
        puVar15 = &local_e8;
      }
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x60);
      *puVar19 = uVar7;
      puVar19[1] = uVar10;
      uVar7 = puVar15[1];
      uVar8 = puVar15[2];
      uVar9 = puVar15[3];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x70);
      *puVar19 = *puVar15;
      puVar19[1] = uVar7;
      uVar7 = puVar15[4];
      uVar10 = puVar15[5];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x80);
      *puVar19 = uVar8;
      puVar19[1] = uVar9;
      uVar8 = puVar15[6];
      uVar9 = puVar15[7];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x90);
      *puVar19 = uVar7;
      puVar19[1] = uVar10;
      uVar7 = puVar15[8];
      uVar10 = puVar15[9];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0xa0);
      *puVar19 = uVar8;
      puVar19[1] = uVar9;
      uVar8 = puVar15[10];
      uVar9 = puVar15[0xb];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0xb0);
      *puVar19 = uVar7;
      puVar19[1] = uVar10;
      uVar7 = puVar15[0xc];
      uVar10 = puVar15[0xd];
      puVar15 = (undefined8 *)((longlong)puVar27 + local_res20 + 0xc0);
      *puVar15 = uVar8;
      puVar15[1] = uVar9;
      puVar15 = (undefined8 *)((longlong)puVar27 + local_res20 + 0xd0);
      *puVar15 = uVar7;
      puVar15[1] = uVar10;
      puVar15 = (undefined8 *)(lVar21 + 0x78 + lVar26);
      uVar7 = puVar15[1];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0xe0);
      *puVar19 = *puVar15;
      puVar19[1] = uVar7;
      puVar15 = (undefined8 *)(lVar21 + 0x88 + lVar26);
      uVar7 = puVar15[1];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0xf0);
      *puVar19 = *puVar15;
      puVar19[1] = uVar7;
      puVar15 = (undefined8 *)(lVar21 + 0x98 + lVar26);
      uVar7 = puVar15[1];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x100);
      *puVar19 = *puVar15;
      puVar19[1] = uVar7;
      puVar15 = (undefined8 *)(lVar21 + 0xa8 + lVar26);
      uVar7 = puVar15[1];
      puVar19 = (undefined8 *)((longlong)puVar27 + local_res20 + 0x110);
      *puVar19 = *puVar15;
      puVar19[1] = uVar7;
      *(undefined8 *)((longlong)puVar27 + local_res20 + 0x120) =
           *(undefined8 *)(lVar21 + 0xb8 + lVar26);
      *(uint *)((longlong)puVar27 + local_res20 + 0x140) =
           *(uint *)((longlong)puVar27 + local_res20 + 0x140) & 0xfffffffe | (uint)bVar13;
      *(undefined4 *)((longlong)puVar27 + local_res20 + 0x128) = *(undefined4 *)(lVar21 + lVar26);
      lVar24 = lVar24 + -1;
      lVar11 = lVar22 + 0xc0;
      lVar12 = lVar25 + 0x148;
      lVar26 = lVar22;
      local_res20 = lVar25;
    } while (lVar24 != 0);
    param_3 = local_res18;
    lVar21 = local_190;
    param_2 = (undefined1)local_res10[0];
  }
  lVar24 = local_188;
  puVar18 = local_1a8;
  local_res18 = (undefined4 *)CONCAT44(local_res18._4_4_,param_3[0x8a4]);
  iVar5 = (int)lVar21;
  local_res10[0] = param_3[0x8a4] + iVar5;
  if ((int)(param_3[0x8a5] & 0x7fffffff) < local_res10[0]) {
    FUN_144d25eb0(param_3 + 0x8a2,&PTR_vftable_14c6e47a0,(longlong)local_res10[0]);
  }
  param_3[0x8a4] = local_res10[0];
  iVar17 = 0;
  if (0 < lVar24) {
    piVar16 = (int *)(*(longlong *)(param_3 + 0x8a2) + (longlong)(int)local_res18 * 0x14 + 8);
    lVar21 = lVar24;
    do {
      piVar16[2] = piVar16[2] & 0xfffffffe;
      *piVar16 = iVar17;
      iVar17 = iVar17 + 1;
      piVar16[-2] = -1;
      piVar16[-1] = -1;
      piVar16[1] = -1;
      piVar16 = piVar16 + 5;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  uStack_1a0._0_4_ = SUB84(puVar18,0);
  uStack_1a0._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  local_78 = (undefined4)*local_res8;
  uStack_74 = *(undefined4 *)((longlong)local_res8 + 4);
  uStack_70 = (undefined4)local_res8[1];
  uStack_6c = *(undefined4 *)((longlong)local_res8 + 0xc);
  local_res8 = (longlong *)(param_3 + 0x88a);
  uStack_60 = (undefined4)uStack_1a0;
  uStack_5c = uStack_1a0._4_4_;
  param_3[0x88c] = 0;
  local_1a8 = puVar27;
  uStack_1a0 = (undefined4 **)puVar18;
  local_68 = puVar27;
  FUN_144d255e0(&local_78,&local_res8);
  local_168 = param_3 + 0x896;
  if ((int)(param_3[0x89b] & 0x7fffffff) < iVar5) {
    FUN_144cc6560(param_3 + 0x898,&PTR_vftable_14c6e47a0,lVar24);
  }
  iVar17 = param_3[0x89a];
  if ((iVar17 < iVar5) || (iVar5 < iVar17)) {
    param_3[0x89a] = iVar5;
    iVar17 = iVar5;
  }
  puVar19 = *(undefined8 **)(param_3 + 0x898);
  puVar15 = puVar19 + iVar17;
  for (; puVar19 != puVar15; puVar19 = puVar19 + 1) {
    *puVar19 = 0xffffffffffffffff;
  }
  local_170 = &local_180;
  puVar27 = param_3 + 0x88e;
  local_160 = &local_178;
  uStack_1a0 = &local_168;
  local_1a8 = param_3;
  local_180 = puVar27;
  local_178 = puVar27;
  FUN_144be90e0(0x8823679);
  cVar14 = FUN_144d23a00(param_3,&local_1a8,local_res10);
  if (cVar14 != '\0') {
    FUN_144d251b0(param_2,puVar27);
  }
  return cVar14 != '\0';
}



// FUNCTION 144d23a00 FUN_144d23a00 body=6053 status=ok
// SIG undefined FUN_144d23a00(void)

undefined8 FUN_144d23a00(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  int local_res20;
  int local_558;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  int local_4c8;
  longlong local_4c4;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  int *local_448;
  int local_440;
  uint local_43c;
  int local_438 [16];
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong local_3e8;
  undefined8 local_3e0;
  float fStack_3d8;
  float fStack_3d4;
  undefined8 local_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  longlong *local_3c0;
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  longlong *local_3a8;
  longlong *plStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_208;
  float fStack_204;
  undefined4 uStack_200;
  float fStack_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  undefined4 local_178;
  int local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 local_f8;
  int local_f4;
  
  lVar31 = param_1 + 8;
  plVar4 = *(longlong **)(param_1 + 0x2228);
  local_3c0 = plVar4 + (longlong)*(int *)(param_1 + 0x2230) * 0x27;
  iVar37 = (int)(((longlong)*(int *)(param_1 + 0x2230) * 0x138) / 0x138);
  local_3e8 = lVar31;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar37) {
    FUN_144d26bc0(param_1 + 0x10,&PTR_vftable_14c6e47c0,(longlong)iVar37);
  }
  iVar34 = 0;
  if (0 < iVar37) {
    do {
      lVar22 = (longlong)iVar34;
      if ((*(byte *)(plVar4 + lVar22 * 0x27 + 0x26) & 1) == 0) {
        iVar36 = *(int *)(param_1 + 0x18) + 1;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar36) {
          FUN_144d26d30(param_1 + 0x10,&PTR_vftable_14c6e47c0,(longlong)iVar36);
        }
        iVar35 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar36;
        plVar26 = (longlong *)((longlong)iVar35 * 0x88 + *(longlong *)(param_1 + 0x10));
        *(undefined4 *)(plVar26 + 0xf) = 0xffffffff;
        *(undefined4 *)((longlong)plVar26 + 0x7c) = *(undefined4 *)(param_1 + 0x2220);
        *(undefined4 *)(plVar26 + 0x10) = 0xffffffff;
        *(undefined1 *)((longlong)plVar26 + 0x84) = 0;
        *(int *)(param_1 + 0x2220) = *(int *)(param_1 + 0x18) + -1;
        *(undefined4 *)(plVar26 + 0xe) = 0;
        lVar27 = (plVar4 + lVar22 * 0x27)[1];
        *plVar26 = plVar4[lVar22 * 0x27];
        plVar26[1] = lVar27;
        lVar27 = (plVar4 + lVar22 * 0x27 + 2)[1];
        plVar26[2] = plVar4[lVar22 * 0x27 + 2];
        plVar26[3] = lVar27;
        lVar27 = (plVar4 + lVar22 * 0x27 + 4)[1];
        plVar26[4] = plVar4[lVar22 * 0x27 + 4];
        plVar26[5] = lVar27;
        lVar27 = (plVar4 + lVar22 * 0x27 + 6)[1];
        plVar26[6] = plVar4[lVar22 * 0x27 + 6];
        plVar26[7] = lVar27;
        lVar27 = (plVar4 + lVar22 * 0x27 + 8)[1];
        plVar26[8] = plVar4[lVar22 * 0x27 + 8];
        plVar26[9] = lVar27;
        lVar27 = (plVar4 + lVar22 * 0x27 + 10)[1];
        plVar26[10] = plVar4[lVar22 * 0x27 + 10];
        plVar26[0xb] = lVar27;
        plVar25 = plVar4 + lVar22 * 0x27 + 0xc;
        lVar22 = *plVar25;
        uVar17 = *(undefined4 *)((longlong)plVar25 + 4);
        lVar27 = plVar25[1];
        uVar39 = *(undefined4 *)((longlong)plVar25 + 0xc);
        *(int *)((longlong)plVar26 + 0x74) = iVar34;
        *(int *)(plVar26 + 0xc) = (int)lVar22;
        *(undefined4 *)((longlong)plVar26 + 100) = uVar17;
        *(int *)(plVar26 + 0xd) = (int)lVar27;
        *(undefined4 *)((longlong)plVar26 + 0x6c) = uVar39;
      }
      iVar34 = iVar34 + 1;
    } while (iVar34 < iVar37);
  }
  *param_3 = 0;
  FUN_144be90e0(0xe70ee67);
  uVar17 = FUN_144d22f80(lVar31,*(undefined4 *)(param_1 + 0x2220));
  *(undefined4 *)(param_1 + 0x2220) = uVar17;
  *param_3 = 0;
  FUN_144be90e0(0xe0366c35);
  *param_3 = 0;
  FUN_144be90e0(0x197edd1b);
  uVar18 = *(uint *)(param_1 + 0x2220);
  local_448 = local_438;
  local_4c8 = -1;
  local_440 = 0;
  local_43c = 0x80000010;
joined_r0x000144d23c56:
  if (uVar18 != 0xffffffff) {
    uVar33 = (ulonglong)uVar18;
    local_440 = 0;
    lVar27 = (longlong)(int)uVar18 * 0x88;
    lVar22 = *(longlong *)(lVar31 + 8);
    local_res20 = -1;
    puVar29 = (undefined8 *)(lVar27 + 0x10 + lVar22);
    uVar17 = *(undefined4 *)puVar29;
    uVar39 = *(undefined4 *)((longlong)puVar29 + 4);
    local_528 = *puVar29;
    local_548 = (longlong *)*puVar29;
    uStack_540 = puVar29 + 1;
    uVar40 = (undefined4)*uStack_540;
    uVar41 = *(undefined4 *)((longlong)puVar29 + 0xc);
    uStack_520 = *uStack_540;
    uStack_540 = (longlong *)*uStack_540;
    plVar25 = (longlong *)(lVar27 + 0x20 + lVar22);
    uVar53 = (undefined4)*plVar25;
    uVar54 = *(undefined4 *)((longlong)plVar25 + 4);
    local_518 = *plVar25;
    local_3f8 = *plVar25;
    uVar55 = (undefined4)plVar25[1];
    uVar56 = *(undefined4 *)((longlong)plVar25 + 0xc);
    uStack_510 = plVar25[1];
    plVar25 = (longlong *)(lVar27 + 0x30 + lVar22);
    uVar57 = (undefined4)*plVar25;
    uVar58 = *(undefined4 *)((longlong)plVar25 + 4);
    local_508 = *plVar25;
    local_3d0 = *plVar25;
    uVar59 = (undefined4)plVar25[1];
    uVar60 = *(undefined4 *)((longlong)plVar25 + 0xc);
    uStack_500 = plVar25[1];
    pfVar2 = (float *)(lVar27 + 0x60 + lVar22);
    fVar38 = *pfVar2;
    fVar42 = pfVar2[1];
    local_3e0 = *(longlong *)pfVar2;
    fVar43 = pfVar2[2];
    fVar44 = pfVar2[3];
    puVar29 = (undefined8 *)(lVar27 + lVar22);
    uVar61 = *(undefined4 *)puVar29;
    uVar62 = *(undefined4 *)((longlong)puVar29 + 4);
    uVar10 = *puVar29;
    local_538 = *puVar29;
    puVar5 = puVar29 + 1;
    uVar63 = *(undefined4 *)puVar5;
    uVar64 = *(undefined4 *)((longlong)puVar29 + 0xc);
    uVar11 = *puVar5;
    uStack_530 = *puVar5;
    puVar29 = (undefined8 *)(lVar27 + 0x40 + lVar22);
    uVar45 = *(undefined4 *)puVar29;
    uVar46 = *(undefined4 *)((longlong)puVar29 + 4);
    uVar12 = *puVar29;
    uVar30 = *puVar29;
    local_4f8 = *puVar29;
    puVar5 = puVar29 + 1;
    uVar47 = *(undefined4 *)puVar5;
    uVar48 = *(undefined4 *)((longlong)puVar29 + 0xc);
    uVar13 = *puVar5;
    uVar7 = *puVar5;
    uStack_4f0 = *puVar5;
    puVar29 = (undefined8 *)(lVar27 + 0x50 + lVar22);
    uVar49 = *(undefined4 *)puVar29;
    uVar50 = *(undefined4 *)((longlong)puVar29 + 4);
    uVar14 = *puVar29;
    uVar8 = *puVar29;
    puVar5 = puVar29 + 1;
    uVar51 = *(undefined4 *)puVar5;
    uVar52 = *(undefined4 *)((longlong)puVar29 + 0xc);
    uVar15 = *puVar5;
    uVar9 = *puVar5;
    local_4e8 = uVar49;
    uStack_4e4 = uVar50;
    uStack_4e0 = uVar51;
    uStack_4dc = uVar52;
    local_4d8 = fVar38;
    fStack_4d4 = fVar42;
    fStack_4d0 = fVar43;
    fStack_4cc = fVar44;
    uStack_3f0 = uVar55;
    uStack_3ec = uVar56;
    fStack_3d8 = fVar43;
    fStack_3d4 = fVar44;
    uStack_3c8 = uVar59;
    uStack_3c4 = uVar60;
    while( true ) {
      while( true ) {
        lVar22 = *(longlong *)(lVar31 + 8);
        lVar27 = (longlong)(int)uVar33 * 0x88;
        if (*(int *)(lVar27 + 0x70 + lVar22) == 0) break;
        iVar37 = *(int *)(lVar27 + 0x74 + lVar22);
        uVar18 = *(uint *)(lVar27 + 0x80 + lVar22);
        if ((*(byte *)(plVar4 + (longlong)iVar37 * 0x27 + 0x26) & 2) != 0) {
          local_res20 = iVar37;
        }
        while( true ) {
          if (uVar18 == 0xffffffff) {
            iVar37 = *(int *)(lVar31 + 0x2218);
            uVar19 = *(undefined4 *)(lVar27 + 0x78 + lVar22);
            *(undefined4 *)((longlong)iVar37 * 0x88 + 0x80 + *(longlong *)(lVar31 + 8)) =
                 *(undefined4 *)(lVar31 + 0x221c);
            *(int *)(lVar31 + 0x221c) = iVar37;
            uVar18 = FUN_144d22f80(lVar31,uVar19);
            *(uint *)(lVar31 + 0x2218) = uVar18;
            uVar33 = (ulonglong)uVar18;
            if (uVar18 != 0xffffffff) goto LAB_144d23f00;
            goto LAB_144d2400c;
          }
          uVar33 = (ulonglong)uVar18;
          lVar32 = *(longlong *)(lVar31 + 8);
          lVar23 = (longlong)(int)uVar18 * 0x88;
          if (*(char *)(lVar23 + 0x84 + lVar32) == '\0') break;
          uVar3 = *(uint *)(lVar23 + 0x80 + lVar32);
          *(undefined4 *)(lVar23 + 0x80 + lVar32) = *(undefined4 *)(lVar31 + 0x221c);
          *(uint *)(lVar31 + 0x221c) = uVar18;
          uVar18 = uVar3;
        }
        *(undefined4 *)(lVar23 + 0x78 + lVar32) = *(undefined4 *)(lVar27 + 0x78 + lVar22);
        iVar37 = *(int *)(lVar31 + 0x2218);
        *(undefined4 *)((longlong)iVar37 * 0x88 + 0x80 + *(longlong *)(lVar31 + 8)) =
             *(undefined4 *)(lVar31 + 0x221c);
        *(int *)(lVar31 + 0x221c) = iVar37;
        *(uint *)(lVar31 + 0x2218) = uVar18;
      }
      iVar37 = local_440 + 1;
      if ((int)(local_43c & 0x7fffffff) < iVar37) {
        FUN_141807990(&local_448,&PTR_vftable_14c6e47c0,(longlong)iVar37);
      }
      if (local_448 + local_440 != (int *)0x0) {
        local_448[local_440] = *(int *)(lVar27 + 0x74 + lVar22);
      }
      lVar23 = (longlong)*(int *)(lVar27 + 0x74 + lVar22);
      lVar32 = (plVar4 + lVar23 * 0x27 + 0xe)[1];
      *(longlong *)(lVar27 + lVar22) = plVar4[lVar23 * 0x27 + 0xe];
      ((longlong *)(lVar27 + lVar22))[1] = lVar32;
      lVar32 = (plVar4 + lVar23 * 0x27 + 0x10)[1];
      plVar25 = (longlong *)(lVar27 + 0x10 + lVar22);
      *plVar25 = plVar4[lVar23 * 0x27 + 0x10];
      plVar25[1] = lVar32;
      lVar32 = (plVar4 + lVar23 * 0x27 + 0x12)[1];
      plVar25 = (longlong *)(lVar27 + 0x20 + lVar22);
      *plVar25 = plVar4[lVar23 * 0x27 + 0x12];
      plVar25[1] = lVar32;
      lVar32 = (plVar4 + lVar23 * 0x27 + 0x14)[1];
      plVar25 = (longlong *)(lVar27 + 0x30 + lVar22);
      *plVar25 = plVar4[lVar23 * 0x27 + 0x14];
      plVar25[1] = lVar32;
      lVar32 = (plVar4 + lVar23 * 0x27 + 0x16)[1];
      plVar25 = (longlong *)(lVar27 + 0x40 + lVar22);
      *plVar25 = plVar4[lVar23 * 0x27 + 0x16];
      plVar25[1] = lVar32;
      plVar25 = plVar4 + lVar23 * 0x27 + 0x18;
      uVar19 = *(undefined4 *)((longlong)plVar25 + 4);
      lVar32 = plVar25[1];
      uVar6 = *(undefined4 *)((longlong)plVar25 + 0xc);
      puVar28 = (undefined4 *)(lVar27 + 0x50 + lVar22);
      *puVar28 = (int)*plVar25;
      puVar28[1] = uVar19;
      puVar28[2] = (int)lVar32;
      puVar28[3] = uVar6;
      plVar25 = plVar4 + lVar23 * 0x27 + 0x1a;
      lVar32 = *plVar25;
      uVar19 = *(undefined4 *)((longlong)plVar25 + 4);
      lVar23 = plVar25[1];
      uVar6 = *(undefined4 *)((longlong)plVar25 + 0xc);
      *(undefined4 *)(lVar27 + 0x70 + lVar22) = 1;
      puVar28 = (undefined4 *)(lVar27 + 0x60 + lVar22);
      *puVar28 = (int)lVar32;
      puVar28[1] = uVar19;
      puVar28[2] = (int)lVar23;
      puVar28[3] = uVar6;
      lVar22 = (longlong)*(int *)(lVar31 + 0x2218) * 0x88 + *(longlong *)(lVar31 + 8);
      iVar34 = *(int *)(lVar22 + 0x80);
      uVar33 = (ulonglong)iVar34;
      local_440 = iVar37;
      if (iVar34 == -1) break;
      *(undefined4 *)(uVar33 * 0x88 + 0x78 + *(longlong *)(lVar31 + 8)) =
           *(undefined4 *)(lVar22 + 0x78);
      *(undefined8 *)(lVar22 + 0x78) = 0xffffffffffffffff;
      *(undefined4 *)(lVar22 + 0x80) = 0xffffffff;
      if (*(int *)(lVar31 + 0x2218) != -1) {
        uVar18 = FUN_144d22d00(lVar31,*(int *)(lVar31 + 0x2218),iVar34);
        uVar33 = (ulonglong)uVar18;
      }
      *(int *)(lVar31 + 0x2218) = (int)uVar33;
    }
    *(undefined4 *)(lVar22 + 0x7c) = *(undefined4 *)(lVar22 + 0x78);
    *(undefined4 *)(lVar22 + 0x78) = 0xffffffff;
    *(undefined4 *)(lVar22 + 0x80) = 0xffffffff;
    uVar19 = FUN_144d22f80(lVar31,*(undefined4 *)(lVar31 + 0x2218));
    *(undefined4 *)(lVar31 + 0x2218) = uVar19;
    goto LAB_144d2400c;
  }
  *param_3 = 0;
  FUN_144be90e0(0xa6cc5fff);
  uVar30 = 1;
LAB_144d250be:
  local_440 = 0;
  if ((-1 < (int)local_43c) && (local_448 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_448,(ulonglong)(local_43c & 0x7fffffff) << 2);
  }
  return uVar30;
  while( true ) {
    *(undefined4 *)(lVar27 + 0x80 + lVar22) = *(undefined4 *)(lVar31 + 0x221c);
    *(int *)(lVar31 + 0x221c) = iVar37;
    uVar18 = FUN_144d22f80(lVar31,uVar19);
    *(uint *)(lVar31 + 0x2218) = uVar18;
    uVar33 = (ulonglong)uVar18;
    if (uVar18 == 0xffffffff) break;
LAB_144d23f00:
    lVar22 = *(longlong *)(lVar31 + 8);
    iVar37 = (int)uVar33;
    lVar27 = (longlong)iVar37 * 0x88;
    if (*(char *)(lVar27 + 0x84 + lVar22) == '\0') break;
    iVar34 = *(int *)(lVar27 + 0x80 + lVar22);
    uVar33 = (ulonglong)iVar34;
    uVar19 = *(undefined4 *)(lVar27 + 0x78 + lVar22);
    if (iVar34 != -1) {
      *(undefined4 *)(uVar33 * 0x88 + 0x78 + lVar22) = uVar19;
      iVar37 = *(int *)(lVar31 + 0x2218);
      *(undefined4 *)((longlong)iVar37 * 0x88 + 0x80 + *(longlong *)(lVar31 + 8)) =
           *(undefined4 *)(lVar31 + 0x221c);
      *(int *)(lVar31 + 0x221c) = iVar37;
      *(int *)(lVar31 + 0x2218) = iVar34;
      goto LAB_144d23f00;
    }
  }
LAB_144d2400c:
  local_398 = uVar61;
  uStack_394 = uVar62;
  uStack_390 = uVar63;
  uStack_38c = uVar64;
  local_388 = uVar17;
  uStack_384 = uVar39;
  uStack_380 = uVar40;
  uStack_37c = uVar41;
  local_378 = uVar53;
  uStack_374 = uVar54;
  uStack_370 = uVar55;
  uStack_36c = uVar56;
  local_368 = uVar57;
  uStack_364 = uVar58;
  uStack_360 = uVar59;
  uStack_35c = uVar60;
  local_358 = uVar45;
  uStack_354 = uVar46;
  uStack_350 = uVar47;
  uStack_34c = uVar48;
  local_348 = uVar49;
  uStack_344 = uVar50;
  uStack_340 = uVar51;
  uStack_33c = uVar52;
  local_338 = fVar38;
  fStack_334 = fVar42;
  fStack_330 = fVar43;
  fStack_32c = fVar44;
  if (local_res20 == -1) {
    iVar20 = -1;
    local_558 = -1;
    iVar36 = -1;
    local_res20 = -1;
    iVar35 = iVar20;
    iVar37 = iVar20;
    iVar34 = local_4c8;
    iVar21 = -1;
    if (local_4c8 != -1) {
      do {
        iVar36 = iVar21;
        plVar25 = plVar4 + (longlong)iVar34 * 0x27 + 0x1c;
        fVar42 = local_338 * *(float *)(plVar25 + 7) +
                 fStack_334 * *(float *)((longlong)plVar25 + 0x3c) + *(float *)(plVar25 + 8);
        fVar38 = (ABS(*(float *)((longlong)plVar25 + 0x3c)) * ABS(fStack_334) +
                  ABS(*(float *)(plVar25 + 7)) * ABS(local_338) + ABS(*(float *)(plVar25 + 8))) *
                 3.5762787e-07;
        iVar37 = iVar34;
        if (fVar42 <= fVar38) {
          if (fVar42 < -fVar38) break;
          iVar21 = FUN_144cb9080(plVar25,&local_398);
          if (iVar21 < 1) {
            if (iVar21 != 0) break;
            iVar37 = iVar35;
            local_res20 = iVar34;
            local_558 = iVar36;
            if (iVar36 == -1) {
              local_558 = iVar34;
              iVar36 = iVar34;
            }
          }
        }
        iVar35 = iVar37;
        iVar34 = *(int *)((longlong)iVar34 * 0x138 + 300 + (longlong)plVar4);
        iVar37 = iVar20;
        iVar21 = iVar36;
      } while (iVar34 != -1);
      goto LAB_144d243d4;
    }
  }
  else {
    iVar37 = (int)plVar4[(longlong)local_res20 * 0x27 + 0x25];
    iVar36 = local_res20;
    while (iVar35 = iVar37, iVar35 != -1) {
      plVar25 = plVar4 + (longlong)iVar35 * 0x27 + 0x1c;
      fVar42 = local_338 * *(float *)(plVar25 + 7) +
               fStack_334 * *(float *)((longlong)plVar25 + 0x3c) + *(float *)(plVar25 + 8);
      fVar38 = (ABS(*(float *)((longlong)plVar25 + 0x3c)) * ABS(fStack_334) +
                ABS(*(float *)(plVar25 + 7)) * ABS(local_338) + ABS(*(float *)(plVar25 + 8))) *
               3.5762787e-07;
      if (((fVar38 < fVar42) || (fVar42 < -fVar38)) ||
         (iVar37 = FUN_144cb9080(plVar25,&local_398), iVar37 != 0)) break;
      iVar36 = iVar35;
      iVar37 = (int)plVar4[(longlong)iVar35 * 0x27 + 0x25];
    }
    iVar37 = *(int *)((longlong)local_res20 * 0x138 + 300 + (longlong)plVar4);
    local_558 = iVar36;
    if (iVar37 != -1) {
      while( true ) {
        iVar34 = iVar37;
        plVar25 = plVar4 + (longlong)iVar34 * 0x27 + 0x1c;
        fVar42 = local_338 * *(float *)(plVar25 + 7) +
                 fStack_334 * *(float *)((longlong)plVar25 + 0x3c) + *(float *)(plVar25 + 8);
        fVar38 = (ABS(*(float *)((longlong)plVar25 + 0x3c)) * ABS(fStack_334) +
                  ABS(*(float *)(plVar25 + 7)) * ABS(local_338) + ABS(*(float *)(plVar25 + 8))) *
                 3.5762787e-07;
        iVar37 = iVar34;
        if ((fVar38 < fVar42) || (fVar42 < -fVar38)) break;
        iVar20 = FUN_144cb9080(plVar25,&local_398);
        if ((iVar20 != 0) ||
           (iVar37 = *(int *)((longlong)iVar34 * 0x138 + 300 + (longlong)plVar4),
           local_res20 = iVar34, iVar37 == -1)) break;
      }
      uVar53 = (undefined4)local_3f8;
      uVar54 = local_3f8._4_4_;
      uVar55 = uStack_3f0;
      uVar56 = uStack_3ec;
      uVar57 = (undefined4)local_3d0;
      uVar58 = local_3d0._4_4_;
      uVar59 = uStack_3c8;
      uVar60 = uStack_3c4;
    }
LAB_144d243d4:
    uVar17 = (undefined4)local_548;
    uVar39 = local_548._4_4_;
    uVar40 = (undefined4)uStack_540;
    uVar41 = uStack_540._4_4_;
    fVar38 = (float)local_3e0;
    fVar42 = local_3e0._4_4_;
    fVar43 = fStack_3d8;
    fVar44 = fStack_3d4;
    iVar20 = iVar35;
  }
  local_548 = (longlong *)param_2[1];
  local_3e0 = *param_2;
  if (iVar36 != -1) {
    lVar22 = *(longlong *)(local_3e0 + 0x2298);
    lVar27 = *(longlong *)(local_3e0 + 0x2288);
    local_3f8 = lVar22;
    local_3d0 = lVar27;
    iVar34 = iVar36;
    while (iVar34 != iVar37) {
      local_3f8 = (longlong)iVar34 * 5;
      lVar31 = (longlong)*(int *)(lVar27 + 8 + (longlong)iVar34 * 0x14) * 0x148 + lVar22;
      local_328 = *(undefined4 *)(lVar31 + 0x70);
      uStack_324 = *(undefined4 *)(lVar31 + 0x74);
      uStack_320 = *(undefined4 *)(lVar31 + 0x78);
      uStack_31c = *(undefined4 *)(lVar31 + 0x7c);
      local_318 = *(undefined4 *)(lVar31 + 0x80);
      uStack_314 = *(undefined4 *)(lVar31 + 0x84);
      uStack_310 = *(undefined4 *)(lVar31 + 0x88);
      uStack_30c = *(undefined4 *)(lVar31 + 0x8c);
      local_308 = *(undefined4 *)(lVar31 + 0xb0);
      uStack_304 = *(undefined4 *)(lVar31 + 0xb4);
      uStack_300 = *(undefined4 *)(lVar31 + 0xb8);
      uStack_2fc = *(undefined4 *)(lVar31 + 0xbc);
      local_2f8 = *(undefined4 *)(lVar31 + 0xc0);
      uStack_2f4 = *(undefined4 *)(lVar31 + 0xc4);
      uStack_2f0 = *(undefined4 *)(lVar31 + 200);
      uStack_2ec = *(undefined4 *)(lVar31 + 0xcc);
      local_2e8 = uVar61;
      uStack_2e4 = uVar62;
      uStack_2e0 = uVar63;
      uStack_2dc = uVar64;
      local_2d8 = uVar17;
      uStack_2d4 = uVar39;
      uStack_2d0 = uVar40;
      uStack_2cc = uVar41;
      local_2c8 = uVar45;
      uStack_2c4 = uVar46;
      uStack_2c0 = uVar47;
      uStack_2bc = uVar48;
      local_2b8 = uVar49;
      uStack_2b4 = uVar50;
      uStack_2b0 = uVar51;
      uStack_2ac = uVar52;
      cVar16 = FUN_144cabe50(&local_2e8,&local_328);
      if (cVar16 == '\0') {
LAB_144d24527:
        iVar34 = *(int *)(lVar31 + 0x138) + 1;
        if ((int)(*(uint *)(lVar31 + 0x13c) & 0x7fffffff) < iVar34) {
          FUN_144d275c0((longlong *)(lVar31 + 0x130),&PTR_vftable_14c6e47a0,(longlong)iVar34);
        }
        puVar28 = (undefined4 *)
                  ((longlong)*(int *)(lVar31 + 0x138) * 0x70 + *(longlong *)(lVar31 + 0x130));
        if (puVar28 != (undefined4 *)0x0) {
          *puVar28 = uVar61;
          puVar28[1] = uVar62;
          puVar28[2] = uVar63;
          puVar28[3] = uVar64;
          puVar28[4] = uVar17;
          puVar28[5] = uVar39;
          puVar28[6] = uVar40;
          puVar28[7] = uVar41;
          puVar28[8] = uVar53;
          puVar28[9] = uVar54;
          puVar28[10] = uVar55;
          puVar28[0xb] = uVar56;
          puVar28[0xc] = uVar57;
          puVar28[0xd] = uVar58;
          puVar28[0xe] = uVar59;
          puVar28[0xf] = uVar60;
          puVar28[0x10] = uVar45;
          puVar28[0x11] = uVar46;
          puVar28[0x12] = uVar47;
          puVar28[0x13] = uVar48;
          puVar28[0x14] = uVar49;
          puVar28[0x15] = uVar50;
          puVar28[0x16] = uVar51;
          puVar28[0x17] = uVar52;
          puVar28[0x18] = fVar38;
          puVar28[0x19] = fVar42;
          puVar28[0x1a] = fVar43;
          puVar28[0x1b] = fVar44;
        }
        *(int *)(lVar31 + 0x138) = iVar34;
        lVar27 = local_3d0;
      }
      else {
        local_2a8 = *(undefined4 *)(lVar31 + 0x90);
        uStack_2a4 = *(undefined4 *)(lVar31 + 0x94);
        uStack_2a0 = *(undefined4 *)(lVar31 + 0x98);
        uStack_29c = *(undefined4 *)(lVar31 + 0x9c);
        local_298 = *(undefined4 *)(lVar31 + 0xa0);
        uStack_294 = *(undefined4 *)(lVar31 + 0xa4);
        uStack_290 = *(undefined4 *)(lVar31 + 0xa8);
        uStack_28c = *(undefined4 *)(lVar31 + 0xac);
        local_288 = *(undefined4 *)(lVar31 + 0xb0);
        uStack_284 = *(undefined4 *)(lVar31 + 0xb4);
        uStack_280 = *(undefined4 *)(lVar31 + 0xb8);
        uStack_27c = *(undefined4 *)(lVar31 + 0xbc);
        local_278 = *(undefined4 *)(lVar31 + 0xc0);
        uStack_274 = *(undefined4 *)(lVar31 + 0xc4);
        uStack_270 = *(undefined4 *)(lVar31 + 200);
        uStack_26c = *(undefined4 *)(lVar31 + 0xcc);
        local_4b8 = CONCAT44(uVar54,uVar53);
        uStack_4b0 = CONCAT44(uVar56,uVar55);
        local_4a8 = CONCAT44(uVar58,uVar57);
        uStack_4a0 = CONCAT44(uVar60,uVar59);
        local_498 = uVar30;
        uStack_490 = uVar7;
        local_488 = uVar8;
        uStack_480 = uVar9;
        cVar16 = FUN_144cabe50(&local_4b8,&local_2a8);
        if (cVar16 == '\0') goto LAB_144d24527;
      }
      iVar34 = *(int *)(lVar27 + 0xc + local_3f8 * 4);
      if (-1 < iVar34) {
        lVar31 = (longlong)iVar34 * 0x148 + lVar22;
        local_4b8 = *(undefined8 *)(lVar31 + 0x70);
        uStack_4b0 = *(undefined8 *)(lVar31 + 0x78);
        local_4a8 = *(undefined8 *)(lVar31 + 0x80);
        uStack_4a0 = *(undefined8 *)(lVar31 + 0x88);
        local_498 = *(undefined8 *)(lVar31 + 0xb0);
        uStack_490 = *(undefined8 *)(lVar31 + 0xb8);
        local_488 = *(undefined8 *)(lVar31 + 0xc0);
        uStack_480 = *(undefined8 *)(lVar31 + 200);
        local_2a8 = uVar61;
        uStack_2a4 = uVar62;
        uStack_2a0 = uVar63;
        uStack_29c = uVar64;
        local_298 = uVar17;
        uStack_294 = uVar39;
        uStack_290 = uVar40;
        uStack_28c = uVar41;
        local_288 = uVar45;
        uStack_284 = uVar46;
        uStack_280 = uVar47;
        uStack_27c = uVar48;
        local_278 = uVar49;
        uStack_274 = uVar50;
        uStack_270 = uVar51;
        uStack_26c = uVar52;
        cVar16 = FUN_144cabe50(&local_2a8,&local_4b8);
        if (cVar16 != '\0') {
          local_2e8 = *(undefined4 *)(lVar31 + 0x90);
          uStack_2e4 = *(undefined4 *)(lVar31 + 0x94);
          uStack_2e0 = *(undefined4 *)(lVar31 + 0x98);
          uStack_2dc = *(undefined4 *)(lVar31 + 0x9c);
          local_2d8 = *(undefined4 *)(lVar31 + 0xa0);
          uStack_2d4 = *(undefined4 *)(lVar31 + 0xa4);
          uStack_2d0 = *(undefined4 *)(lVar31 + 0xa8);
          uStack_2cc = *(undefined4 *)(lVar31 + 0xac);
          local_2c8 = *(undefined4 *)(lVar31 + 0xb0);
          uStack_2c4 = *(undefined4 *)(lVar31 + 0xb4);
          uStack_2c0 = *(undefined4 *)(lVar31 + 0xb8);
          uStack_2bc = *(undefined4 *)(lVar31 + 0xbc);
          local_2b8 = *(undefined4 *)(lVar31 + 0xc0);
          uStack_2b4 = *(undefined4 *)(lVar31 + 0xc4);
          uStack_2b0 = *(undefined4 *)(lVar31 + 200);
          uStack_2ac = *(undefined4 *)(lVar31 + 0xcc);
          local_328 = uVar53;
          uStack_324 = uVar54;
          uStack_320 = uVar55;
          uStack_31c = uVar56;
          local_318 = uVar57;
          uStack_314 = uVar58;
          uStack_310 = uVar59;
          uStack_30c = uVar60;
          local_308 = uVar45;
          uStack_304 = uVar46;
          uStack_300 = uVar47;
          uStack_2fc = uVar48;
          local_2f8 = uVar49;
          uStack_2f4 = uVar50;
          uStack_2f0 = uVar51;
          uStack_2ec = uVar52;
          cVar16 = FUN_144cabe50(&local_328,&local_2e8);
          if (cVar16 != '\0') goto LAB_144d246d0;
        }
        iVar34 = *(int *)(lVar31 + 0x138) + 1;
        if ((int)(*(uint *)(lVar31 + 0x13c) & 0x7fffffff) < iVar34) {
          FUN_144d275c0((longlong *)(lVar31 + 0x130),&PTR_vftable_14c6e47a0,(longlong)iVar34);
        }
        puVar28 = (undefined4 *)
                  ((longlong)*(int *)(lVar31 + 0x138) * 0x70 + *(longlong *)(lVar31 + 0x130));
        if (puVar28 != (undefined4 *)0x0) {
          *puVar28 = uVar61;
          puVar28[1] = uVar62;
          puVar28[2] = uVar63;
          puVar28[3] = uVar64;
          puVar28[4] = uVar17;
          puVar28[5] = uVar39;
          puVar28[6] = uVar40;
          puVar28[7] = uVar41;
          puVar28[8] = uVar53;
          puVar28[9] = uVar54;
          puVar28[10] = uVar55;
          puVar28[0xb] = uVar56;
          puVar28[0xc] = uVar57;
          puVar28[0xd] = uVar58;
          puVar28[0xe] = uVar59;
          puVar28[0xf] = uVar60;
          puVar28[0x10] = uVar45;
          puVar28[0x11] = uVar46;
          puVar28[0x12] = uVar47;
          puVar28[0x13] = uVar48;
          puVar28[0x14] = uVar49;
          puVar28[0x15] = uVar50;
          puVar28[0x16] = uVar51;
          puVar28[0x17] = uVar52;
          puVar28[0x18] = fVar38;
          puVar28[0x19] = fVar42;
          puVar28[0x1a] = fVar43;
          puVar28[0x1b] = fVar44;
        }
        *(int *)(lVar31 + 0x138) = iVar34;
        lVar27 = local_3d0;
      }
LAB_144d246d0:
      lVar31 = local_3e8;
      iVar34 = *(int *)(lVar27 + 4 + local_3f8 * 4);
    }
  }
  lVar22 = local_3e0;
  puVar29 = local_548 + 1;
  uVar30 = *local_548;
  local_4a8 = CONCAT44(uVar39,uVar17);
  uStack_4a0 = CONCAT44(uVar41,uVar40);
  local_498 = CONCAT44(uVar54,uVar53);
  uStack_490 = CONCAT44(uVar56,uVar55);
  local_488 = CONCAT44(uVar58,uVar57);
  uStack_480 = CONCAT44(uVar60,uVar59);
  local_458 = CONCAT44(fVar42,fVar38);
  uStack_450 = CONCAT44(fVar44,fVar43);
  local_548 = &local_3b8;
  local_4b8 = uVar10;
  uStack_4b0 = uVar11;
  local_478 = uVar12;
  uStack_470 = uVar13;
  local_468 = uVar14;
  uStack_460 = uVar15;
  local_3b8 = local_3e0;
  local_3b0 = iVar36;
  local_3ac = iVar37;
  cVar16 = FUN_144d26ea0(&local_4b8,&local_548,uVar30,*puVar29);
  if (cVar16 == '\0') {
LAB_144d2519e:
    uVar30 = 0;
    goto LAB_144d250be;
  }
  if (iVar20 != -1) {
    *(int *)(*(longlong *)(lVar22 + 0x2288) + 4 + (longlong)iVar20 * 0x14) = iVar37;
  }
  if (iVar37 != -1) {
    *(int *)(*(longlong *)(lVar22 + 0x2288) + (longlong)iVar37 * 0x14) = iVar20;
  }
  if (iVar36 != -1) {
    while( true ) {
      cVar16 = FUN_144cb8700(&local_538,plVar4 + (longlong)iVar36 * 0x27 + 0xe);
      if (cVar16 != '\0') {
        iVar34 = local_440 + 1;
        if ((int)(local_43c & 0x7fffffff) < iVar34) {
          FUN_141807990(&local_448,&PTR_vftable_14c6e47c0,(longlong)iVar34);
        }
        lVar31 = (longlong)local_440;
        local_440 = iVar34;
        if (local_448 + lVar31 != (int *)0x0) {
          local_448[lVar31] = iVar36;
        }
      }
      if (iVar36 == local_res20) break;
      iVar36 = *(int *)((longlong)iVar36 * 0x138 + 300 + (longlong)plVar4);
    }
    *(uint *)(plVar4 + (longlong)local_558 * 0x27 + 0x26) =
         *(uint *)(plVar4 + (longlong)local_558 * 0x27 + 0x26) & 0xfffffffd;
    iVar34 = *(int *)((longlong)plVar4 + (longlong)local_558 * 0x138 + 300);
    plVar4[(longlong)local_558 * 0x27 + 0x25] = -1;
    while (iVar36 = iVar34, local_558 != local_res20) {
      iVar34 = *(int *)((longlong)plVar4 + (longlong)iVar36 * 0x138 + 300);
      plVar4[(longlong)iVar36 * 0x27 + 0x25] = -1;
      *(uint *)(plVar4 + (longlong)iVar36 * 0x27 + 0x26) =
           *(uint *)(plVar4 + (longlong)iVar36 * 0x27 + 0x26) & 0xfffffffd;
      local_558 = iVar36;
    }
    lVar31 = local_3e8;
    uVar17 = (undefined4)local_528;
    uVar39 = local_528._4_4_;
    uVar40 = (undefined4)uStack_520;
    uVar41 = uStack_520._4_4_;
    fVar38 = local_4d8;
    fVar42 = fStack_4d4;
    fVar43 = fStack_4d0;
    fVar44 = fStack_4cc;
    uVar45 = (undefined4)local_4f8;
    uVar46 = local_4f8._4_4_;
    uVar47 = (undefined4)uStack_4f0;
    uVar48 = uStack_4f0._4_4_;
    uVar49 = local_4e8;
    uVar50 = uStack_4e4;
    uVar51 = uStack_4e0;
    uVar52 = uStack_4dc;
    uVar53 = (undefined4)local_518;
    uVar54 = local_518._4_4_;
    uVar55 = (undefined4)uStack_510;
    uVar56 = uStack_510._4_4_;
    uVar57 = (undefined4)local_508;
    uVar58 = local_508._4_4_;
    uVar59 = (undefined4)uStack_500;
    uVar60 = uStack_500._4_4_;
    uVar61 = (undefined4)local_538;
    uVar62 = local_538._4_4_;
    uVar63 = (undefined4)uStack_530;
    uVar64 = uStack_530._4_4_;
  }
  if (local_440 == 0) {
    if (iVar20 == -1) {
      piVar24 = &local_4c8;
    }
    else {
      piVar24 = (int *)((longlong)iVar20 * 0x138 + 300 + (longlong)plVar4);
    }
    *piVar24 = iVar37;
    if (iVar37 == -1) {
      plVar25 = &local_4c4;
    }
    else {
      plVar25 = plVar4 + (longlong)iVar37 * 0x27 + 0x25;
    }
    *(int *)plVar25 = iVar20;
    local_538 = CONCAT44(uVar62,uVar61);
    uStack_530 = CONCAT44(uVar64,uVar63);
    local_528 = CONCAT44(uVar39,uVar17);
    uStack_520 = CONCAT44(uVar41,uVar40);
    local_548 = (longlong *)0x0;
    uStack_540 = (longlong *)0x0;
    local_518 = CONCAT44(uVar54,uVar53);
    uStack_510 = CONCAT44(uVar56,uVar55);
    local_508 = CONCAT44(uVar58,uVar57);
    uStack_500 = CONCAT44(uVar60,uVar59);
    local_4f8 = CONCAT44(uVar46,uVar45);
    uStack_4f0 = CONCAT44(uVar48,uVar47);
    local_4e8 = uVar49;
    uStack_4e4 = uVar50;
    uStack_4e0 = uVar51;
    uStack_4dc = uVar52;
    local_4d8 = fVar38;
    fStack_4d4 = fVar42;
    fStack_4d0 = fVar43;
    fStack_4cc = fVar44;
    cVar16 = FUN_144d26560(&local_538,iVar20,&local_548,iVar37,*param_2,param_2[1]);
    if (cVar16 == '\0') {
      *param_3 = 0;
      FUN_144be90e0(0x19b77753);
      goto LAB_144d2519e;
    }
    if ((iVar20 == -1) || (iVar37 == -1)) goto LAB_144d25094;
    lVar27 = (longlong)iVar20 * 0x138;
    lVar22 = *(longlong *)(param_1 + 0x2228);
    lVar32 = (longlong)iVar37 * 0x138;
    puVar29 = (undefined8 *)(lVar22 + 0x70 + lVar27);
    local_4b8 = *puVar29;
    uStack_4b0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0x80 + lVar27);
    local_4a8 = *puVar29;
    uStack_4a0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0x90 + lVar27);
    local_498 = *puVar29;
    uStack_490 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0xa0 + lVar27);
    local_488 = *puVar29;
    uStack_480 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0xb0 + lVar27);
    local_478 = *puVar29;
    uStack_470 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0xc0 + lVar27);
    local_468 = *puVar29;
    uStack_460 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0xd0 + lVar27);
    local_458 = *puVar29;
    uStack_450 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0x80 + lVar32);
    local_528 = *puVar29;
    uStack_520 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0x70 + lVar32);
    local_538 = *puVar29;
    uStack_530 = puVar29[1];
    plVar25 = (longlong *)(lVar22 + 0xa0 + lVar32);
    local_508 = *plVar25;
    uStack_500 = plVar25[1];
    plVar25 = (longlong *)(lVar22 + 0x90 + lVar32);
    local_518 = *plVar25;
    uStack_510 = plVar25[1];
    puVar28 = (undefined4 *)(lVar22 + 0xc0 + lVar32);
    local_4e8 = *puVar28;
    uStack_4e4 = puVar28[1];
    uStack_4e0 = puVar28[2];
    uStack_4dc = puVar28[3];
    puVar29 = (undefined8 *)(lVar22 + 0xb0 + lVar32);
    local_4f8 = *puVar29;
    uStack_4f0 = puVar29[1];
    pfVar2 = (float *)(lVar22 + 0xd0 + lVar32);
    local_4d8 = *pfVar2;
    fStack_4d4 = pfVar2[1];
    fStack_4d0 = pfVar2[2];
    fStack_4cc = pfVar2[3];
    iVar37 = FUN_144d11db0(lVar22 + 0xe0 + lVar27,&local_538);
    if ((-1 < iVar37) ||
       (iVar37 = FUN_144d11db0(*(longlong *)(param_1 + 0x2228) + 0xe0 + lVar32,&local_4b8),
       iVar37 < 1)) goto LAB_144d25094;
    FUN_144d22940(param_1,*(longlong *)(param_1 + 0x2228) + 0xe0 + lVar27,
                  *(longlong *)(param_1 + 0x2228) + 0xe0 + lVar32,&local_4b8);
    puVar29 = &local_168;
    local_168 = local_4b8;
    uStack_160 = uStack_4b0;
    local_f8 = 2;
    local_158 = (undefined4)local_4a8;
    uStack_154 = local_4a8._4_4_;
    uStack_150 = (undefined4)uStack_4a0;
    uStack_14c = uStack_4a0._4_4_;
    local_148 = (undefined4)local_498;
    uStack_144 = local_498._4_4_;
    uStack_140 = (undefined4)uStack_490;
    uStack_13c = uStack_490._4_4_;
    local_108 = (float)local_458;
    fStack_104 = local_458._4_4_;
    uStack_100 = 0xffffffff;
    fStack_fc = fStack_4cc;
    local_138 = (undefined4)local_488;
    uStack_134 = local_488._4_4_;
    uStack_130 = (undefined4)uStack_480;
    uStack_12c = uStack_480._4_4_;
    local_128 = local_478;
    uStack_120 = uStack_470;
    local_118 = local_468;
    uStack_110 = uStack_460;
    local_f4 = iVar20;
  }
  else {
    plStack_3a0 = local_3c0;
    iVar34 = (int)((longlong)local_440 * 4 >> 2);
    local_3a8 = plVar4;
    if (1 < iVar34) {
      uStack_540 = local_3c0;
      local_548 = plVar4;
      FUN_144d268f0(local_448,0,iVar34 + -1,&local_548);
    }
    local_538 = CONCAT44(uVar62,uVar61);
    uStack_530 = CONCAT44(uVar64,uVar63);
    local_528 = CONCAT44(uVar39,uVar17);
    uStack_520 = CONCAT44(uVar41,uVar40);
    local_518 = CONCAT44(uVar54,uVar53);
    uStack_510 = CONCAT44(uVar56,uVar55);
    local_508 = CONCAT44(uVar58,uVar57);
    uStack_500 = CONCAT44(uVar60,uVar59);
    local_4f8 = CONCAT44(uVar46,uVar45);
    uStack_4f0 = CONCAT44(uVar48,uVar47);
    local_4e8 = uVar49;
    uStack_4e4 = uVar50;
    uStack_4e0 = uVar51;
    uStack_4dc = uVar52;
    local_4d8 = fVar38;
    fStack_4d4 = fVar42;
    fStack_4d0 = fVar43;
    fStack_4cc = fVar44;
    FUN_144d259d0(param_1,&local_448,&local_538);
    iVar34 = 0;
    iVar36 = (int)((longlong)local_440 * 4 >> 2) + -1;
    piVar24 = local_448;
    if (0 < iVar36) {
      do {
        piVar1 = piVar24 + 1;
        iVar34 = iVar34 + 1;
        *(int *)((longlong)*piVar24 * 0x138 + 300 + (longlong)plVar4) = *piVar1;
        *(uint *)(plVar4 + (longlong)*piVar24 * 0x27 + 0x26) =
             *(uint *)(plVar4 + (longlong)*piVar24 * 0x27 + 0x26) | 2;
        *(int *)(plVar4 + (longlong)*piVar1 * 0x27 + 0x25) = *piVar24;
        piVar24 = piVar1;
      } while (iVar34 < iVar36);
    }
    *(uint *)(plVar4 + (longlong)local_448[(longlong)local_440 + -1] * 0x27 + 0x26) =
         *(uint *)(plVar4 + (longlong)local_448[(longlong)local_440 + -1] * 0x27 + 0x26) | 2;
    *(int *)(plVar4 + (longlong)*local_448 * 0x27 + 0x25) = iVar20;
    *(int *)((longlong)local_448[local_440 + -1] * 0x138 + 300 + (longlong)plVar4) = iVar37;
    if (iVar20 != -1) {
      *(int *)((longlong)iVar20 * 0x138 + 300 + (longlong)plVar4) = *local_448;
    }
    if (iVar37 != -1) {
      *(int *)(plVar4 + (longlong)iVar37 * 0x27 + 0x25) = local_448[local_440 + -1];
    }
    local_538 = CONCAT44(uVar62,uVar61);
    uStack_530 = CONCAT44(uVar64,uVar63);
    local_528 = CONCAT44(uVar39,uVar17);
    uStack_520 = CONCAT44(uVar41,uVar40);
    local_518 = CONCAT44(uVar54,uVar53);
    uStack_510 = CONCAT44(uVar56,uVar55);
    local_508 = CONCAT44(uVar58,uVar57);
    uStack_500 = CONCAT44(uVar60,uVar59);
    local_4f8 = CONCAT44(uVar46,uVar45);
    uStack_4f0 = CONCAT44(uVar48,uVar47);
    local_4e8 = uVar49;
    uStack_4e4 = uVar50;
    uStack_4e0 = uVar51;
    uStack_4dc = uVar52;
    local_4d8 = fVar38;
    fStack_4d4 = fVar42;
    fStack_4d0 = fVar43;
    fStack_4cc = fVar44;
    cVar16 = FUN_144d262d0(&local_538,iVar20,&local_448,iVar37,*param_2,param_2[1]);
    if (cVar16 == '\0') goto LAB_144d2519e;
    if (iVar20 == -1) {
      local_4c8 = *local_448;
    }
    else {
      lVar32 = (longlong)iVar20 * 0x138;
      *(int *)(lVar32 + 300 + (longlong)plVar4) = *local_448;
      lVar22 = *(longlong *)(param_1 + 0x2228);
      puVar29 = (undefined8 *)(lVar22 + 0x70 + lVar32);
      local_4b8 = *puVar29;
      uStack_4b0 = puVar29[1];
      puVar29 = (undefined8 *)(lVar22 + 0x80 + lVar32);
      local_4a8 = *puVar29;
      uStack_4a0 = puVar29[1];
      lVar27 = (longlong)*local_448 * 0x138;
      puVar29 = (undefined8 *)(lVar22 + 0x90 + lVar32);
      local_498 = *puVar29;
      uStack_490 = puVar29[1];
      puVar29 = (undefined8 *)(lVar22 + 0xa0 + lVar32);
      local_488 = *puVar29;
      uStack_480 = puVar29[1];
      puVar29 = (undefined8 *)(lVar22 + 0xb0 + lVar32);
      local_478 = *puVar29;
      uStack_470 = puVar29[1];
      puVar29 = (undefined8 *)(lVar22 + 0xc0 + lVar32);
      local_468 = *puVar29;
      uStack_460 = puVar29[1];
      puVar29 = (undefined8 *)(lVar22 + 0xd0 + lVar32);
      local_458 = *puVar29;
      uStack_450 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x80 + lVar22);
      local_528 = *puVar29;
      uStack_520 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x70 + lVar22);
      local_538 = *puVar29;
      uStack_530 = puVar29[1];
      plVar25 = (longlong *)(lVar27 + 0xa0 + lVar22);
      local_508 = *plVar25;
      uStack_500 = plVar25[1];
      plVar25 = (longlong *)(lVar27 + 0x90 + lVar22);
      local_518 = *plVar25;
      uStack_510 = plVar25[1];
      puVar28 = (undefined4 *)(lVar27 + 0xc0 + lVar22);
      local_4e8 = *puVar28;
      uStack_4e4 = puVar28[1];
      uStack_4e0 = puVar28[2];
      uStack_4dc = puVar28[3];
      puVar29 = (undefined8 *)(lVar27 + 0xb0 + lVar22);
      local_4f8 = *puVar29;
      uStack_4f0 = puVar29[1];
      pfVar2 = (float *)(lVar27 + 0xd0 + lVar22);
      local_4d8 = *pfVar2;
      fStack_4d4 = pfVar2[1];
      fStack_4d0 = pfVar2[2];
      fStack_4cc = pfVar2[3];
      iVar34 = FUN_144d11db0(lVar22 + 0xe0 + lVar32,&local_538);
      if ((iVar34 < 0) &&
         (iVar34 = FUN_144d11db0(*(longlong *)(param_1 + 0x2228) + 0xe0 + lVar27,&local_4b8),
         0 < iVar34)) {
        FUN_144d22940(param_1,*(longlong *)(param_1 + 0x2228) + 0xe0 + lVar32,
                      *(longlong *)(param_1 + 0x2228) + 0xe0 + lVar27,&local_4b8);
        local_268 = local_4b8;
        uStack_260 = uStack_4b0;
        local_1f8 = 2;
        local_258 = (undefined4)local_4a8;
        uStack_254 = local_4a8._4_4_;
        uStack_250 = (undefined4)uStack_4a0;
        uStack_24c = uStack_4a0._4_4_;
        local_248 = (undefined4)local_498;
        uStack_244 = local_498._4_4_;
        uStack_240 = (undefined4)uStack_490;
        uStack_23c = uStack_490._4_4_;
        local_4d8 = (float)local_458;
        fStack_4d4 = local_458._4_4_;
        fStack_4d0 = -NAN;
        local_208 = (float)local_458;
        fStack_204 = local_458._4_4_;
        uStack_200 = 0xffffffff;
        fStack_1fc = fStack_4cc;
        local_238 = (undefined4)local_488;
        uStack_234 = local_488._4_4_;
        uStack_230 = (undefined4)uStack_480;
        uStack_22c = uStack_480._4_4_;
        local_228 = local_478;
        uStack_220 = uStack_470;
        local_218 = local_468;
        uStack_210 = uStack_460;
        local_1f4 = iVar20;
        FUN_144d22bc0(lVar31,&local_268);
      }
    }
    if (iVar37 == -1) goto LAB_144d25094;
    lVar32 = (longlong)iVar37 * 0x138;
    *(int *)(plVar4 + (longlong)iVar37 * 0x27 + 0x25) = local_448[local_440 + -1];
    iVar37 = local_448[local_440 + -1];
    lVar22 = *(longlong *)(param_1 + 0x2228);
    lVar27 = (longlong)iVar37 * 0x138;
    puVar29 = (undefined8 *)(lVar27 + 0x70 + lVar22);
    local_4b8 = *puVar29;
    uStack_4b0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x80 + lVar22);
    local_4a8 = *puVar29;
    uStack_4a0 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0x90 + lVar22);
    local_498 = *puVar29;
    uStack_490 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0xa0 + lVar22);
    local_488 = *puVar29;
    uStack_480 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0xb0 + lVar22);
    local_478 = *puVar29;
    uStack_470 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0xc0 + lVar22);
    local_468 = *puVar29;
    uStack_460 = puVar29[1];
    puVar29 = (undefined8 *)(lVar27 + 0xd0 + lVar22);
    local_458 = *puVar29;
    uStack_450 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0x70 + lVar32);
    local_538 = *puVar29;
    uStack_530 = puVar29[1];
    puVar29 = (undefined8 *)(lVar22 + 0x80 + lVar32);
    local_528 = *puVar29;
    uStack_520 = puVar29[1];
    plVar25 = (longlong *)(lVar22 + 0x90 + lVar32);
    local_518 = *plVar25;
    uStack_510 = plVar25[1];
    plVar25 = (longlong *)(lVar22 + 0xa0 + lVar32);
    local_508 = *plVar25;
    uStack_500 = plVar25[1];
    puVar29 = (undefined8 *)(lVar22 + 0xb0 + lVar32);
    local_4f8 = *puVar29;
    uStack_4f0 = puVar29[1];
    puVar28 = (undefined4 *)(lVar22 + 0xc0 + lVar32);
    local_4e8 = *puVar28;
    uStack_4e4 = puVar28[1];
    uStack_4e0 = puVar28[2];
    uStack_4dc = puVar28[3];
    pfVar2 = (float *)(lVar22 + 0xd0 + lVar32);
    local_4d8 = *pfVar2;
    fStack_4d4 = pfVar2[1];
    fStack_4d0 = pfVar2[2];
    fStack_4cc = pfVar2[3];
    iVar34 = FUN_144d11db0(lVar22 + 0xe0 + lVar27,&local_538);
    if ((-1 < iVar34) ||
       (iVar34 = FUN_144d11db0(*(longlong *)(param_1 + 0x2228) + 0xe0 + lVar32,&local_4b8),
       iVar34 < 1)) goto LAB_144d25094;
    FUN_144d22940(param_1,*(longlong *)(param_1 + 0x2228) + 0xe0 + lVar27,
                  *(longlong *)(param_1 + 0x2228) + 0xe0 + lVar32,&local_4b8);
    puVar29 = &local_1e8;
    local_1e8 = local_4b8;
    uStack_1e0 = uStack_4b0;
    local_178 = 2;
    local_1d8 = (undefined4)local_4a8;
    uStack_1d4 = local_4a8._4_4_;
    uStack_1d0 = (undefined4)uStack_4a0;
    uStack_1cc = uStack_4a0._4_4_;
    local_1c8 = (undefined4)local_498;
    uStack_1c4 = local_498._4_4_;
    uStack_1c0 = (undefined4)uStack_490;
    uStack_1bc = uStack_490._4_4_;
    local_188 = (float)local_458;
    fStack_184 = local_458._4_4_;
    uStack_180 = 0xffffffff;
    fStack_17c = fStack_4cc;
    local_1b8 = (undefined4)local_488;
    uStack_1b4 = local_488._4_4_;
    uStack_1b0 = (undefined4)uStack_480;
    uStack_1ac = uStack_480._4_4_;
    local_1a8 = local_478;
    uStack_1a0 = uStack_470;
    local_198 = local_468;
    uStack_190 = uStack_460;
    local_174 = iVar37;
  }
  fStack_4d0 = -NAN;
  local_4d8 = (float)local_458;
  fStack_4d4 = local_458._4_4_;
  FUN_144d22bc0(lVar31,puVar29);
LAB_144d25094:
  uVar18 = *(uint *)(lVar31 + 0x2218);
  goto joined_r0x000144d23c56;
}



// FUNCTION 144d251b0 FUN_144d251b0 body=1065 status=ok
// SIG undefined FUN_144d251b0(void)

void FUN_144d251b0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar14 = 0;
  FUN_144be90e0(0xeab13cc2);
  uVar2 = *(uint *)(param_2 + 3);
  uVar20 = 0;
  if (uVar2 != 0) {
    do {
      lVar11 = param_2[2];
      piVar15 = (int *)((longlong)(int)uVar20 * 0x20 + lVar11);
      if ((*(byte *)(piVar15 + 7) & 5) == 0) {
        lVar13 = *param_2;
        iVar3 = piVar15[1];
        piVar16 = (int *)((longlong)iVar3 * 0x20 + lVar11);
        lVar19 = (longlong)piVar15[3] * 0x20 + lVar11;
        iVar4 = *(int *)(lVar19 + 8);
        lVar10 = (longlong)iVar4 * 0x20 + lVar11;
        lVar11 = (longlong)*(int *)((longlong)*(int *)(lVar10 + 8) * 0x20 + lVar11) * 0x70;
        local_a8 = *(undefined8 *)(lVar11 + lVar13);
        uStack_a0 = ((undefined8 *)(lVar11 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar13);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar13);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar13);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar13);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar13);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x60 + lVar13);
        local_48 = *puVar1;
        uStack_40 = puVar1[1];
        lVar11 = (longlong)*piVar15 * 0x70;
        local_188 = *(undefined8 *)(lVar11 + lVar13);
        uStack_180 = ((undefined8 *)(lVar11 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar13);
        local_178 = *puVar1;
        uStack_170 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar13);
        local_168 = *puVar1;
        uStack_160 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar13);
        local_158 = *puVar1;
        uStack_150 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar13);
        local_148 = *puVar1;
        uStack_140 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar13);
        local_138 = *puVar1;
        uStack_130 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x60 + lVar13);
        local_128 = *puVar1;
        uStack_120 = puVar1[1];
        lVar11 = (longlong)*piVar16 * 0x70;
        local_118 = *(undefined8 *)(lVar11 + lVar13);
        uStack_110 = ((undefined8 *)(lVar11 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar13);
        local_108 = *puVar1;
        uStack_100 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar13);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar13);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar13);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar13);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x60 + lVar13);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        iVar8 = FUN_144cb8b90(&local_118,&local_188,&local_a8);
        if (iVar8 == 0) {
          bVar6 = FUN_144cb8700(&local_118,&local_188);
          bVar7 = FUN_144cb8700(&local_188,&local_a8);
          bVar7 = bVar7 ^ bVar6;
        }
        else {
          bVar7 = (byte)((uint)iVar8 >> 0x1f);
        }
        if (bVar7 == 0) {
          lVar11 = *param_2;
          lVar13 = param_2[2];
          iVar8 = piVar15[2];
          iVar5 = *(int *)(lVar19 + 4);
          piVar18 = (int *)((longlong)iVar8 * 0x20 + lVar13);
          piVar17 = (int *)((longlong)iVar5 * 0x20 + lVar13);
          lVar13 = (longlong)*(int *)((longlong)piVar18[2] * 0x20 + lVar13) * 0x70;
          local_118 = *(undefined8 *)(lVar13 + lVar11);
          uStack_110 = ((undefined8 *)(lVar13 + lVar11))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar11);
          local_f8 = *puVar1;
          uStack_f0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar11);
          local_e8 = *puVar1;
          uStack_e0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar11);
          local_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar11);
          local_c8 = *puVar1;
          uStack_c0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x60 + lVar11);
          local_b8 = *puVar1;
          uStack_b0 = puVar1[1];
          lVar13 = (longlong)*piVar18 * 0x70;
          local_188 = *(undefined8 *)(lVar13 + lVar11);
          uStack_180 = ((undefined8 *)(lVar13 + lVar11))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          local_178 = *puVar1;
          uStack_170 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar11);
          local_168 = *puVar1;
          uStack_160 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar11);
          local_158 = *puVar1;
          uStack_150 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar11);
          local_148 = *puVar1;
          uStack_140 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar11);
          local_138 = *puVar1;
          uStack_130 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x60 + lVar11);
          local_128 = *puVar1;
          uStack_120 = puVar1[1];
          lVar13 = (longlong)*piVar17 * 0x70;
          local_a8 = *(undefined8 *)(lVar13 + lVar11);
          uStack_a0 = ((undefined8 *)(lVar13 + lVar11))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar11);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar11);
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar11);
          local_68 = *puVar1;
          uStack_60 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar11);
          local_58 = *puVar1;
          uStack_50 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x60 + lVar11);
          local_48 = *puVar1;
          uStack_40 = puVar1[1];
          iVar9 = FUN_144cb8b90(&local_a8,&local_188,&local_118);
          if (iVar9 == 0) {
            bVar6 = FUN_144cb8700(&local_a8,&local_188);
            bVar7 = FUN_144cb8700(&local_188,&local_118);
            bVar7 = bVar7 ^ bVar6;
          }
          else {
            bVar7 = (byte)((uint)iVar9 >> 0x1f);
          }
          if (bVar7 == 0) {
            uVar14 = uVar14 + 0x37af4db;
            piVar16[2] = iVar4;
            *(int *)(lVar10 + 4) = iVar3;
            piVar17[2] = iVar8;
            piVar18[1] = iVar5;
            piVar15[7] = piVar15[7] | 1;
            *(uint *)(lVar19 + 0x1c) = *(uint *)(lVar19 + 0x1c) | 1;
            piVar15[3] = -1;
            *(undefined4 *)(lVar19 + 0xc) = 0xffffffff;
            if (uVar14 < 0x37af4db) {
              uVar12 = 0x5dc7f46d;
              goto LAB_144d2558c;
            }
          }
          else {
            piVar15[7] = piVar15[7] | 4;
            uVar14 = uVar14 + 0x35e0369;
            *(uint *)(lVar19 + 0x1c) = *(uint *)(lVar19 + 0x1c) | 4;
            if (uVar14 < 0x35e0369) {
              uVar12 = 0xf0b79d89;
LAB_144d2558c:
              FUN_144be90e0(uVar12);
            }
          }
        }
        else {
          piVar15[7] = piVar15[7] | 4;
          uVar14 = uVar14 + 0x1c6bc32;
          *(uint *)(lVar19 + 0x1c) = *(uint *)(lVar19 + 0x1c) | 4;
          if (uVar14 < 0x1c6bc32) {
            uVar12 = 0x92ca1871;
            goto LAB_144d2558c;
          }
        }
      }
      else {
        uVar14 = uVar14 + 0x238664;
        if (uVar14 < 0x238664) {
          uVar12 = 0xf760a5aa;
          goto LAB_144d2558c;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar2);
  }
  FUN_144be90e0(0x7f3c9adc);
  return;
}



// FUNCTION 144d255e0 FUN_144d255e0 body=993 status=ok
// SIG undefined FUN_144d255e0(void)

void FUN_144d255e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
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
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  undefined4 *puVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  int iVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  
  iVar59 = (int)((param_1[1] - *param_1) / 0xc0);
  lVar58 = (longlong)iVar59;
  if (0 < iVar59) {
    lVar56 = 0;
    lVar57 = 0;
    do {
      lVar7 = *param_1;
      lVar8 = param_1[2];
      plVar1 = (longlong *)(lVar57 + 0x78 + lVar7);
      lVar10 = *plVar1;
      lVar52 = plVar1[1];
      plVar3 = (longlong *)(lVar57 + 0x88 + lVar7);
      lVar9 = *plVar3;
      lVar51 = plVar3[1];
      plVar4 = (longlong *)(lVar57 + 0x98 + lVar7);
      lVar11 = *plVar4;
      plVar12 = plVar4 + 1;
      lVar53 = *plVar12;
      plVar5 = (longlong *)(lVar57 + 0xa8 + lVar7);
      lVar54 = *plVar5;
      uVar61 = *(uint *)(plVar5 + 1);
      uVar62 = *(uint *)((longlong)plVar5 + 0xc);
      uVar6 = *(undefined8 *)(lVar57 + 0xb8 + lVar7);
      uVar60 = (uint)uVar6;
      if ((*(byte *)(lVar56 + 0x140 + lVar8) & 1) == 0) {
        lVar9 = -*plVar3;
        uVar61 = uVar61 ^ 0x80000000;
        uVar62 = uVar62 ^ 0x80000000;
        uVar60 = uVar60 ^ 0x80000000;
        lVar51 = -(ulonglong)(*plVar3 != 0) - plVar3[1];
        lVar10 = -*plVar1;
        lVar52 = -(ulonglong)(*plVar1 != 0) - plVar1[1];
        lVar11 = -*plVar4;
        lVar53 = -*plVar12 - (ulonglong)(*plVar4 != 0);
        lVar54 = -(ulonglong)(*plVar12 != 0 || (ulonglong)-*plVar12 < (ulonglong)(*plVar4 != 0)) -
                 *plVar5;
      }
      puVar2 = (undefined8 *)(lVar56 + 0x30 + lVar8);
      uVar33 = *puVar2;
      uVar34 = puVar2[1];
      plVar1 = (longlong *)*param_2;
      puVar55 = (undefined4 *)(lVar56 + 0xb0 + lVar8);
      uVar13 = *puVar55;
      uVar14 = puVar55[1];
      uVar15 = puVar55[2];
      uVar16 = puVar55[3];
      puVar2 = (undefined8 *)(lVar56 + 0xc0 + lVar8);
      uVar35 = *puVar2;
      uVar36 = puVar2[1];
      iVar59 = (int)plVar1[1] + 1;
      puVar55 = (undefined4 *)(lVar56 + 0xd0 + lVar8);
      uVar17 = *puVar55;
      uVar18 = puVar55[1];
      uVar19 = puVar55[2];
      uVar20 = puVar55[3];
      puVar2 = (undefined8 *)(lVar56 + 0x40 + lVar8);
      uVar37 = *puVar2;
      uVar38 = puVar2[1];
      puVar55 = (undefined4 *)(lVar56 + lVar8);
      uVar21 = *puVar55;
      uVar22 = puVar55[1];
      uVar23 = puVar55[2];
      uVar24 = puVar55[3];
      puVar2 = (undefined8 *)(lVar56 + 0x50 + lVar8);
      uVar39 = *puVar2;
      uVar40 = puVar2[1];
      puVar55 = (undefined4 *)(lVar56 + 0x10 + lVar8);
      uVar25 = *puVar55;
      uVar26 = puVar55[1];
      uVar27 = puVar55[2];
      uVar28 = puVar55[3];
      puVar2 = (undefined8 *)(lVar56 + 0x60 + lVar8);
      uVar41 = *puVar2;
      uVar42 = puVar2[1];
      puVar55 = (undefined4 *)(lVar56 + 0x20 + lVar8);
      uVar29 = *puVar55;
      uVar30 = puVar55[1];
      uVar31 = puVar55[2];
      uVar32 = puVar55[3];
      puVar2 = (undefined8 *)(lVar56 + 0x70 + lVar8);
      uVar43 = *puVar2;
      uVar44 = puVar2[1];
      puVar2 = (undefined8 *)(lVar56 + 0x80 + lVar8);
      uVar45 = *puVar2;
      uVar46 = puVar2[1];
      puVar2 = (undefined8 *)(lVar56 + 0x90 + lVar8);
      uVar47 = *puVar2;
      uVar48 = puVar2[1];
      puVar2 = (undefined8 *)(lVar56 + 0xa0 + lVar8);
      uVar49 = *puVar2;
      uVar50 = puVar2[1];
      if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar59) {
        FUN_144d267d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar59);
      }
      lVar7 = plVar1[1];
      lVar57 = lVar57 + 0xc0;
      *(int *)(plVar1 + 1) = iVar59;
      lVar56 = lVar56 + 0x148;
      puVar55 = (undefined4 *)((longlong)(int)lVar7 * 0x138 + *plVar1);
      puVar55[0x4c] = puVar55[0x4c] & 0xfffffffc;
      *(undefined8 *)(puVar55 + 0x4a) = 0xffffffffffffffff;
      *puVar55 = uVar21;
      puVar55[1] = uVar22;
      puVar55[2] = uVar23;
      puVar55[3] = uVar24;
      puVar55[4] = uVar25;
      puVar55[5] = uVar26;
      puVar55[6] = uVar27;
      puVar55[7] = uVar28;
      *(undefined8 *)(puVar55 + 0x1c) = uVar43;
      *(undefined8 *)(puVar55 + 0x1e) = uVar44;
      *(undefined8 *)(puVar55 + 0x20) = uVar45;
      *(undefined8 *)(puVar55 + 0x22) = uVar46;
      puVar55[8] = uVar29;
      puVar55[9] = uVar30;
      puVar55[10] = uVar31;
      puVar55[0xb] = uVar32;
      *(undefined8 *)(puVar55 + 0xc) = uVar33;
      *(undefined8 *)(puVar55 + 0xe) = uVar34;
      *(undefined8 *)(puVar55 + 0x24) = uVar47;
      *(undefined8 *)(puVar55 + 0x26) = uVar48;
      *(longlong *)(puVar55 + 0x38) = lVar10;
      *(longlong *)(puVar55 + 0x3a) = lVar52;
      *(undefined8 *)(puVar55 + 0x10) = uVar37;
      *(undefined8 *)(puVar55 + 0x12) = uVar38;
      *(undefined8 *)(puVar55 + 0x28) = uVar49;
      *(undefined8 *)(puVar55 + 0x2a) = uVar50;
      *(longlong *)(puVar55 + 0x3c) = lVar9;
      *(longlong *)(puVar55 + 0x3e) = lVar51;
      puVar55[0x2c] = uVar13;
      puVar55[0x2d] = uVar14;
      puVar55[0x2e] = uVar15;
      puVar55[0x2f] = uVar16;
      *(longlong *)(puVar55 + 0x40) = lVar11;
      *(longlong *)(puVar55 + 0x42) = lVar53;
      *(undefined8 *)(puVar55 + 0x14) = uVar39;
      *(undefined8 *)(puVar55 + 0x16) = uVar40;
      *(undefined8 *)(puVar55 + 0x30) = uVar35;
      *(undefined8 *)(puVar55 + 0x32) = uVar36;
      *(longlong *)(puVar55 + 0x44) = lVar54;
      puVar55[0x46] = uVar61;
      puVar55[0x47] = uVar62;
      *(ulonglong *)(puVar55 + 0x48) = CONCAT44((int)((ulonglong)uVar6 >> 0x20),uVar60);
      *(undefined8 *)(puVar55 + 0x18) = uVar41;
      *(undefined8 *)(puVar55 + 0x1a) = uVar42;
      puVar55[0x34] = uVar17;
      puVar55[0x35] = uVar18;
      puVar55[0x36] = uVar19;
      puVar55[0x37] = uVar20;
      lVar58 = lVar58 + -1;
    } while (lVar58 != 0);
  }
  return;
}



// FUNCTION 144d259d0 FUN_144d259d0 body=1243 status=ok
// SIG undefined FUN_144d259d0(void)

void FUN_144d259d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  undefined4 uVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  undefined4 *puVar35;
  int iVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  int iVar40;
  longlong lVar41;
  int iVar42;
  int local_158;
  int local_154;
  longlong local_148;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  
  iVar36 = (int)param_2[1];
  if (1 < iVar36) {
    lVar41 = 0;
    iVar42 = 0;
    local_148 = 0;
    local_154 = 0;
    do {
      iVar42 = iVar42 + 1;
      iVar40 = *(int *)(*param_2 + lVar41 * 4);
      lVar41 = lVar41 + 1;
      local_158 = iVar40;
      if (iVar42 < iVar36) {
        do {
          iVar36 = *(int *)(*param_2 + lVar41 * 4);
          if (*(int *)(*param_2 + -4 + lVar41 * 4) != iVar36) {
            puVar39 = (undefined8 *)((longlong)iVar40 * 0x138 + *(longlong *)(param_1 + 0x2228));
            puVar37 = (undefined8 *)((longlong)iVar36 * 0x138 + *(longlong *)(param_1 + 0x2228));
            iVar33 = FUN_144cb92c0(puVar39 + 0x1c,puVar37 + 0x1c);
            if (iVar33 != 0) break;
            iVar33 = FUN_144cb8980(puVar39 + 0xe,puVar37 + 0xe);
            lVar1 = (longlong)iVar40 * 0x14;
            lVar2 = (longlong)iVar36 * 0x14;
            lVar3 = *(longlong *)(*param_4 + 0x2288);
            if (iVar33 < 1) {
              *(undefined4 *)(lVar1 + 0xc + lVar3) = *(undefined4 *)(lVar2 + 8 + lVar3);
              *(uint *)(puVar37 + 0x26) = *(uint *)(puVar37 + 0x26) & 0xfffffffd;
              iVar40 = local_158;
              if (iVar33 != 0) {
                uVar32 = puVar39[0xf];
                local_58 = 0;
                *puVar37 = puVar39[0xe];
                puVar37[1] = uVar32;
                uVar32 = puVar39[0x11];
                puVar37[2] = puVar39[0x10];
                puVar37[3] = uVar32;
                uVar32 = puVar39[0x13];
                puVar37[4] = puVar39[0x12];
                puVar37[5] = uVar32;
                uVar32 = puVar39[0x15];
                puVar37[6] = puVar39[0x14];
                puVar37[7] = uVar32;
                uVar32 = puVar39[0x17];
                puVar37[8] = puVar39[0x16];
                puVar37[9] = uVar32;
                uVar32 = puVar39[0x19];
                puVar37[10] = puVar39[0x18];
                puVar37[0xb] = uVar32;
                uVar32 = puVar39[0x1b];
                puVar37[0xc] = puVar39[0x1a];
                puVar37[0xd] = uVar32;
                local_c8 = puVar39[0xe];
                uStack_c0 = puVar39[0xf];
                local_b8 = puVar39[0x10];
                uStack_b0 = puVar39[0x11];
                local_a8 = puVar39[0x12];
                uStack_a0 = puVar39[0x13];
                local_98 = puVar39[0x14];
                uStack_90 = puVar39[0x15];
                local_88 = puVar39[0x16];
                uStack_80 = puVar39[0x17];
                local_78 = *(undefined4 *)(puVar39 + 0x18);
                uStack_74 = *(undefined4 *)((longlong)puVar39 + 0xc4);
                uStack_70 = *(undefined4 *)(puVar39 + 0x19);
                uStack_6c = *(undefined4 *)((longlong)puVar39 + 0xcc);
                local_68 = *(undefined4 *)(puVar39 + 0x1a);
                uStack_64 = *(undefined4 *)((longlong)puVar39 + 0xd4);
                uStack_60 = *(undefined4 *)(puVar39 + 0x1b);
                uStack_5c = *(undefined4 *)((longlong)puVar39 + 0xdc);
                iStack_54 = iVar36;
                FUN_144d22bc0(param_1 + 8,&local_c8);
              }
            }
            else {
              *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)(lVar1 + 8 + lVar3);
              *(uint *)(puVar39 + 0x26) = *(uint *)(puVar39 + 0x26) & 0xfffffffd;
              uVar32 = puVar37[0xf];
              local_58 = 0;
              *puVar39 = puVar37[0xe];
              puVar39[1] = uVar32;
              iStack_54 = local_158;
              uVar32 = puVar37[0x11];
              puVar39[2] = puVar37[0x10];
              puVar39[3] = uVar32;
              uVar32 = puVar37[0x13];
              puVar39[4] = puVar37[0x12];
              puVar39[5] = uVar32;
              uVar32 = puVar37[0x15];
              puVar39[6] = puVar37[0x14];
              puVar39[7] = uVar32;
              uVar32 = puVar37[0x17];
              puVar39[8] = puVar37[0x16];
              puVar39[9] = uVar32;
              uVar32 = puVar37[0x19];
              puVar39[10] = puVar37[0x18];
              puVar39[0xb] = uVar32;
              uVar32 = puVar37[0x1b];
              puVar39[0xc] = puVar37[0x1a];
              puVar39[0xd] = uVar32;
              uVar4 = *(undefined4 *)(puVar37 + 0xe);
              uVar5 = *(undefined4 *)((longlong)puVar37 + 0x74);
              uVar6 = *(undefined4 *)(puVar37 + 0xf);
              uVar7 = *(undefined4 *)((longlong)puVar37 + 0x7c);
              uVar8 = *(undefined4 *)(puVar37 + 0x10);
              uVar9 = *(undefined4 *)((longlong)puVar37 + 0x84);
              uVar10 = *(undefined4 *)(puVar37 + 0x11);
              uVar11 = *(undefined4 *)((longlong)puVar37 + 0x8c);
              uVar12 = *(undefined4 *)(puVar37 + 0x12);
              uVar13 = *(undefined4 *)((longlong)puVar37 + 0x94);
              uVar14 = *(undefined4 *)(puVar37 + 0x13);
              uVar15 = *(undefined4 *)((longlong)puVar37 + 0x9c);
              uVar16 = *(undefined4 *)(puVar37 + 0x14);
              uVar17 = *(undefined4 *)((longlong)puVar37 + 0xa4);
              uVar18 = *(undefined4 *)(puVar37 + 0x15);
              uVar19 = *(undefined4 *)((longlong)puVar37 + 0xac);
              uVar20 = *(undefined4 *)(puVar37 + 0x16);
              uVar21 = *(undefined4 *)((longlong)puVar37 + 0xb4);
              uVar22 = *(undefined4 *)(puVar37 + 0x17);
              uVar23 = *(undefined4 *)((longlong)puVar37 + 0xbc);
              uVar24 = *(undefined4 *)(puVar37 + 0x18);
              uVar25 = *(undefined4 *)((longlong)puVar37 + 0xc4);
              uVar26 = *(undefined4 *)(puVar37 + 0x19);
              uVar27 = *(undefined4 *)((longlong)puVar37 + 0xcc);
              uVar28 = *(undefined4 *)(puVar37 + 0x1a);
              uVar29 = *(undefined4 *)((longlong)puVar37 + 0xd4);
              uVar30 = *(undefined4 *)(puVar37 + 0x1b);
              uVar31 = *(undefined4 *)((longlong)puVar37 + 0xdc);
              uVar38 = (ulonglong)*(int *)(param_1 + 0x2224);
              if (*(int *)(param_1 + 0x2224) == -1) {
                uVar38 = (ulonglong)*(uint *)(param_1 + 0x18);
                iVar40 = *(uint *)(param_1 + 0x18) + 1;
                if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar40) {
                  FUN_144d26d30(param_1 + 0x10,&PTR_vftable_14c6e47c0,(longlong)iVar40);
                }
                *(int *)(param_1 + 0x18) = iVar40;
              }
              else {
                *(undefined4 *)(param_1 + 0x2224) =
                     *(undefined4 *)(uVar38 * 0x88 + 0x80 + *(longlong *)(param_1 + 0x10));
              }
              iVar34 = (int)uVar38;
              puVar35 = (undefined4 *)((longlong)iVar34 * 0x88 + *(longlong *)(param_1 + 0x10));
              *puVar35 = uVar4;
              puVar35[1] = uVar5;
              puVar35[2] = uVar6;
              puVar35[3] = uVar7;
              *(undefined8 *)(puVar35 + 0x1e) = 0xffffffffffffffff;
              puVar35[4] = uVar8;
              puVar35[5] = uVar9;
              puVar35[6] = uVar10;
              puVar35[7] = uVar11;
              puVar35[0x20] = 0xffffffff;
              puVar35[8] = uVar12;
              puVar35[9] = uVar13;
              puVar35[10] = uVar14;
              puVar35[0xb] = uVar15;
              *(undefined1 *)(puVar35 + 0x21) = 0;
              puVar35[0xc] = uVar16;
              puVar35[0xd] = uVar17;
              puVar35[0xe] = uVar18;
              puVar35[0xf] = uVar19;
              puVar35[0x10] = uVar20;
              puVar35[0x11] = uVar21;
              puVar35[0x12] = uVar22;
              puVar35[0x13] = uVar23;
              puVar35[0x14] = uVar24;
              puVar35[0x15] = uVar25;
              puVar35[0x16] = uVar26;
              puVar35[0x17] = uVar27;
              puVar35[0x18] = uVar28;
              puVar35[0x19] = uVar29;
              puVar35[0x1a] = uVar30;
              puVar35[0x1b] = uVar31;
              *(ulonglong *)(puVar35 + 0x1c) = CONCAT44(iStack_54,local_58);
              iVar33 = *(int *)(param_1 + 0x2220);
              iVar40 = iVar36;
              local_158 = iVar36;
              if (iVar33 != -1) {
                if (iVar34 == -1) {
                  *(int *)(param_1 + 0x2220) = iVar33;
                  goto LAB_144d25be7;
                }
                iVar34 = FUN_144d22d00(param_1 + 8,iVar33,uVar38 & 0xffffffff);
              }
              *(int *)(param_1 + 0x2220) = iVar34;
            }
          }
LAB_144d25be7:
          iVar42 = iVar42 + 1;
          lVar41 = lVar41 + 1;
        } while (iVar42 < (int)param_2[1]);
      }
      local_154 = local_154 + 1;
      *(int *)(local_148 + *param_2) = iVar40;
      local_148 = local_148 + 4;
      iVar36 = (int)param_2[1];
    } while (iVar42 < iVar36);
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < local_154) {
      FUN_140163394(param_2,&PTR_vftable_14c6e47c0,(longlong)local_154);
    }
    if (((int)param_2[1] < local_154) || (local_154 < (int)param_2[1])) {
      *(int *)(param_2 + 1) = local_154;
    }
  }
  return;
}



// FUNCTION 144d25eb0 FUN_144d25eb0 body=287 status=ok
// SIG undefined FUN_144d25eb0(void)

ulonglong FUN_144d25eb0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x14,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        puVar6[4] = puVar7[4];
      }
      puVar6 = puVar6 + 5;
      puVar7 = puVar7 + 5;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x14 + 0x14;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x14;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x14;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x14;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x14);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144d25fd0 FUN_144d25fd0 body=762 status=ok
// SIG undefined FUN_144d25fd0(void)

ulonglong FUN_144d25fd0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_res18;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar10 * 2;
  uVar14 = param_3;
  if (param_3 < uVar12) {
    uVar14 = uVar12;
  }
  if ((0x7ffffffe < uVar14) && (uVar14 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,uVar14 * 0x148);
  puVar9 = (undefined8 *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar8 = (int *)((longlong)puVar9 + 0x13c);
  if (0 < (int)uVar1) {
    piVar11 = (int *)(lVar7 + 0x13c);
    uVar12 = (ulonglong)uVar1;
    piVar13 = piVar8;
    do {
      if (piVar11 + -0x4f != (int *)0x0) {
        uVar6 = puVar9[1];
        *(undefined8 *)(piVar11 + -0x4f) = *puVar9;
        *(undefined8 *)(piVar11 + -0x4d) = uVar6;
        uVar6 = puVar9[3];
        *(undefined8 *)(piVar11 + -0x4b) = puVar9[2];
        *(undefined8 *)(piVar11 + -0x49) = uVar6;
        uVar6 = puVar9[5];
        *(undefined8 *)(piVar11 + -0x47) = puVar9[4];
        *(undefined8 *)(piVar11 + -0x45) = uVar6;
        uVar6 = puVar9[7];
        *(undefined8 *)(piVar11 + -0x43) = puVar9[6];
        *(undefined8 *)(piVar11 + -0x41) = uVar6;
        uVar6 = puVar9[9];
        *(undefined8 *)(piVar11 + -0x3f) = puVar9[8];
        *(undefined8 *)(piVar11 + -0x3d) = uVar6;
        uVar6 = puVar9[0xb];
        *(undefined8 *)(piVar11 + -0x3b) = puVar9[10];
        *(undefined8 *)(piVar11 + -0x39) = uVar6;
        uVar6 = puVar9[0xd];
        *(undefined8 *)(piVar11 + -0x37) = puVar9[0xc];
        *(undefined8 *)(piVar11 + -0x35) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x31);
        *(undefined8 *)(piVar11 + -0x33) = *(undefined8 *)(piVar13 + -0x33);
        *(undefined8 *)(piVar11 + -0x31) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x2d);
        *(undefined8 *)(piVar11 + -0x2f) = *(undefined8 *)(piVar13 + -0x2f);
        *(undefined8 *)(piVar11 + -0x2d) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x29);
        *(undefined8 *)(piVar11 + -0x2b) = *(undefined8 *)(piVar13 + -0x2b);
        *(undefined8 *)(piVar11 + -0x29) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x25);
        *(undefined8 *)(piVar11 + -0x27) = *(undefined8 *)(piVar13 + -0x27);
        *(undefined8 *)(piVar11 + -0x25) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x21);
        *(undefined8 *)(piVar11 + -0x23) = *(undefined8 *)(piVar13 + -0x23);
        *(undefined8 *)(piVar11 + -0x21) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x1d);
        *(undefined8 *)(piVar11 + -0x1f) = *(undefined8 *)(piVar13 + -0x1f);
        *(undefined8 *)(piVar11 + -0x1d) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x19);
        *(undefined8 *)(piVar11 + -0x1b) = *(undefined8 *)(piVar13 + -0x1b);
        *(undefined8 *)(piVar11 + -0x19) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x15);
        *(undefined8 *)(piVar11 + -0x17) = *(undefined8 *)(piVar13 + -0x17);
        *(undefined8 *)(piVar11 + -0x15) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0x11);
        *(undefined8 *)(piVar11 + -0x13) = *(undefined8 *)(piVar13 + -0x13);
        *(undefined8 *)(piVar11 + -0x11) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0xd);
        *(undefined8 *)(piVar11 + -0xf) = *(undefined8 *)(piVar13 + -0xf);
        *(undefined8 *)(piVar11 + -0xd) = uVar6;
        iVar3 = piVar13[-10];
        iVar4 = piVar13[-9];
        iVar5 = piVar13[-8];
        piVar11[-0xb] = piVar13[-0xb];
        piVar11[-10] = iVar3;
        piVar11[-9] = iVar4;
        piVar11[-8] = iVar5;
        *(undefined8 *)(piVar11 + -7) = *(undefined8 *)(piVar13 + -7);
        piVar11[-5] = piVar13[-5];
        piVar11[-3] = 0;
        piVar11[-2] = 0;
        piVar11[-1] = 0;
        *piVar11 = -0x80000000;
        FUN_144d23370(piVar13 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar11 + -3) = *(undefined8 *)(piVar13 + -3);
        piVar11[-1] = piVar13[-1];
        *piVar11 = *piVar13;
        piVar13[-3] = 0;
        piVar13[-2] = 0;
        piVar13[-1] = 0;
        piVar13[0] = 0;
        piVar11[1] = piVar11[1] ^ (piVar11[1] ^ piVar13[1]) & 1U;
      }
      piVar11 = piVar11 + 0x52;
      puVar9 = puVar9 + 0x29;
      piVar13 = piVar13 + 0x52;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar12 = (ulonglong)uVar1;
    do {
      piVar8[-1] = 0;
      if ((-1 < *piVar8) && (*(longlong *)(piVar8 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      piVar8[-3] = 0;
      piVar8[-2] = 0;
      *piVar8 = -0x80000000;
      piVar8 = piVar8 + 0x52;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar14 * 0x148 + 0x148;
  uVar15 = uVar14;
  if (uVar12 <= local_res18) {
    uVar15 = uVar14 + 1;
    if (uVar12 <= local_res18 - 0x148) {
      uVar14 = (local_res18 - 0x148) + uVar14 * -0x148;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      uVar12 = SUB168(ZEXT816(0xc7ce0c7ce0c7ce0d) * auVar2,0);
      uVar15 = uVar15 + uVar14 / 0x148;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 * 0x148);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar15;
  return uVar12;
}



// FUNCTION 144d262d0 FUN_144d262d0 body=652 status=ok
// SIG undefined FUN_144d262d0(void)

void FUN_144d262d0(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,longlong param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  piVar9 = (int *)*param_3;
  bVar11 = false;
  iVar7 = -1;
  piVar2 = piVar9 + *(int *)(param_3 + 1);
  lVar6 = *(longlong *)(param_5 + 0x2288);
  iVar10 = param_2;
  for (; piVar9 != piVar2; piVar9 = piVar9 + 1) {
    iVar5 = *piVar9;
    if (!bVar11) {
      bVar11 = true;
      iVar7 = iVar5;
    }
    if (iVar10 != -1) {
      *(int *)(lVar6 + 4 + (longlong)iVar10 * 0x14) = iVar5;
    }
    *(int *)(lVar6 + (longlong)iVar5 * 0x14) = iVar10;
    iVar10 = iVar5;
  }
  if (iVar10 != -1) {
    *(int *)(lVar6 + 4 + (longlong)iVar10 * 0x14) = param_4;
  }
  if (param_4 != -1) {
    *(int *)(lVar6 + (longlong)param_4 * 0x14) = iVar10;
  }
  bVar11 = false;
  if (param_2 != -1) {
    bVar11 = (bool)(*(byte *)(lVar6 + 0x10 + (longlong)param_2 * 0x14) & 1);
  }
  piVar9 = (int *)*param_3;
  piVar2 = piVar9 + *(int *)(param_3 + 1);
  for (; piVar9 != piVar2; piVar9 = piVar9 + 1) {
    lVar3 = lVar6 + (longlong)*piVar9 * 0x14;
    if (*(int *)(lVar6 + 0xc + (longlong)*piVar9 * 0x14) < 0) {
      bVar11 = bVar11 == false;
    }
    puVar1 = (uint *)(lVar3 + 0x10);
    *puVar1 = *puVar1 ^ ((uint)bVar11 ^ *(uint *)(lVar3 + 0x10)) & 1;
  }
  piVar9 = (int *)*param_3;
  lVar6 = *(longlong *)(param_5 + 0x2288);
  lVar3 = *(longlong *)(param_5 + 0x2298);
  piVar2 = piVar9 + *(int *)(param_3 + 1);
  for (; piVar9 != piVar2; piVar9 = piVar9 + 1) {
    lVar4 = lVar6 + (longlong)*piVar9 * 0x14;
    if (-1 < *(int *)(lVar6 + 0xc + (longlong)*piVar9 * 0x14)) {
      iVar10 = *(int *)(param_5 + 0x22b0) + 1;
      if ((int)(*(uint *)(param_5 + 0x22b4) & 0x7fffffff) < iVar10) {
        FUN_144d27710((longlong *)(param_5 + 0x22a8),&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      iVar5 = *(int *)(param_5 + 0x22b0);
      *(int *)(param_5 + 0x22b0) = iVar10;
      puVar8 = (undefined4 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_5 + 0x22a8));
      *puVar8 = *(undefined4 *)(lVar4 + 8);
      puVar8[1] = *(undefined4 *)((longlong)*(int *)(lVar4 + 8) * 0x148 + 0x138 + lVar3);
      puVar8[2] = *(undefined4 *)(lVar4 + 0xc);
      puVar8[3] = *(undefined4 *)((longlong)*(int *)(lVar4 + 0xc) * 0x148 + 0x138 + lVar3);
    }
  }
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  local_98 = param_1[2];
  uStack_90 = param_1[3];
  local_88 = param_1[4];
  uStack_80 = param_1[5];
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  local_58 = *(undefined4 *)(param_1 + 10);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_50 = *(undefined4 *)(param_1 + 0xb);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 100);
  uStack_40 = *(undefined4 *)(param_1 + 0xd);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x6c);
  FUN_144d26ab0(&local_a8,param_2,iVar7,param_4,param_5,param_6);
  return;
}



// FUNCTION 144d26560 FUN_144d26560 body=621 status=ok
// SIG undefined FUN_144d26560(void)

void FUN_144d26560(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,longlong param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int local_res18;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  bVar7 = false;
  piVar5 = (int *)param_3[1];
  piVar10 = (int *)*param_3;
  lVar6 = *(longlong *)(param_5 + 0x2288);
  local_res18 = -1;
  iVar9 = param_2;
  for (; piVar10 != piVar5; piVar10 = piVar10 + 1) {
    iVar4 = *piVar10;
    if (!bVar7) {
      bVar7 = true;
      local_res18 = iVar4;
    }
    if (iVar9 != -1) {
      *(int *)(lVar6 + 4 + (longlong)iVar9 * 0x14) = iVar4;
    }
    *(int *)(lVar6 + (longlong)iVar4 * 0x14) = iVar9;
    iVar9 = iVar4;
  }
  if (iVar9 != -1) {
    *(int *)(lVar6 + 4 + (longlong)iVar9 * 0x14) = param_4;
  }
  if (param_4 != -1) {
    *(int *)(lVar6 + (longlong)param_4 * 0x14) = iVar9;
  }
  bVar7 = false;
  if (param_2 != -1) {
    bVar7 = (bool)(*(byte *)(lVar6 + 0x10 + (longlong)param_2 * 0x14) & 1);
  }
  piVar5 = (int *)param_3[1];
  for (piVar10 = (int *)*param_3; piVar10 != piVar5; piVar10 = piVar10 + 1) {
    lVar2 = lVar6 + (longlong)*piVar10 * 0x14;
    if (*(int *)(lVar6 + 0xc + (longlong)*piVar10 * 0x14) < 0) {
      bVar7 = bVar7 == false;
    }
    puVar1 = (uint *)(lVar2 + 0x10);
    *puVar1 = *puVar1 ^ ((uint)bVar7 ^ *(uint *)(lVar2 + 0x10)) & 1;
  }
  piVar5 = (int *)param_3[1];
  lVar6 = *(longlong *)(param_5 + 0x2288);
  lVar2 = *(longlong *)(param_5 + 0x2298);
  for (piVar10 = (int *)*param_3; piVar10 != piVar5; piVar10 = piVar10 + 1) {
    lVar3 = lVar6 + (longlong)*piVar10 * 0x14;
    if (-1 < *(int *)(lVar6 + 0xc + (longlong)*piVar10 * 0x14)) {
      iVar9 = *(int *)(param_5 + 0x22b0) + 1;
      if ((int)(*(uint *)(param_5 + 0x22b4) & 0x7fffffff) < iVar9) {
        FUN_144d27710((longlong *)(param_5 + 0x22a8),&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      iVar4 = *(int *)(param_5 + 0x22b0);
      *(int *)(param_5 + 0x22b0) = iVar9;
      puVar8 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_5 + 0x22a8));
      *puVar8 = *(undefined4 *)(lVar3 + 8);
      puVar8[1] = *(undefined4 *)((longlong)*(int *)(lVar3 + 8) * 0x148 + 0x138 + lVar2);
      puVar8[2] = *(undefined4 *)(lVar3 + 0xc);
      puVar8[3] = *(undefined4 *)((longlong)*(int *)(lVar3 + 0xc) * 0x148 + 0x138 + lVar2);
    }
  }
  local_b8 = *param_1;
  uStack_b0 = param_1[1];
  local_a8 = param_1[2];
  uStack_a0 = param_1[3];
  local_98 = param_1[4];
  uStack_90 = param_1[5];
  local_88 = param_1[6];
  uStack_80 = param_1[7];
  local_78 = param_1[8];
  uStack_70 = param_1[9];
  local_68 = *(undefined4 *)(param_1 + 10);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_60 = *(undefined4 *)(param_1 + 0xb);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_58 = *(undefined4 *)(param_1 + 0xc);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 100);
  uStack_50 = *(undefined4 *)(param_1 + 0xd);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x6c);
  FUN_144d26ab0(&local_b8,param_2,local_res18,param_4,param_5,param_6);
  return;
}



// FUNCTION 144d267d0 FUN_144d267d0 body=276 status=ok
// SIG undefined FUN_144d267d0(void)

ulonglong FUN_144d267d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar7 * 2;
  uVar5 = param_3;
  if (param_3 < uVar3) {
    uVar5 = uVar3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x138,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x138);
  uVar3 = uVar5 * 0x138 + 0x138;
  uVar6 = uVar5;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x138;
    uVar6 = uVar5 + 1;
    if (uVar3 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0x138;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      lVar4 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,8);
      uVar3 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,0);
      uVar6 = uVar6 + ((uVar5 - lVar4 >> 1) + lVar4 >> 8);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x138);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar3;
}



// FUNCTION 144d268f0 FUN_144d268f0 body=448 status=ok
// SIG undefined FUN_144d268f0(void)

void FUN_144d268f0(longlong param_1,uint param_2,int param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  uint local_res10;
  int local_68;
  ulonglong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar6 = (ulonglong)(int)param_2;
  uVar4 = *param_4;
  uVar8 = uVar6;
  local_res10 = param_2;
  do {
    local_48 = (ulonglong)param_3;
    uVar10 = uVar6 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)((int)uVar6 + param_3) >> 1) * 4);
    lVar7 = uVar4 + 0xe0 + (longlong)(int)uVar1 * 0x138;
    local_68 = param_3;
    do {
      while( true ) {
        uVar9 = *(uint *)(param_1 + uVar8 * 4);
        iVar5 = FUN_144cb92c0((longlong)(int)uVar9 * 0x138 + 0xe0 + uVar4,lVar7);
        if (iVar5 == 0) {
          bVar11 = uVar9 < uVar1;
        }
        else {
          bVar11 = 0 < iVar5;
        }
        uVar9 = (uint)uVar10;
        uVar6 = local_48;
        if (!bVar11) break;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar8 = uVar8 + 1;
      }
      while( true ) {
        uVar2 = *(uint *)(param_1 + uVar6 * 4);
        iVar5 = FUN_144cb92c0(lVar7,(longlong)(int)uVar2 * 0x138 + 0xe0 + uVar4);
        if (iVar5 == 0) {
          bVar11 = uVar1 < uVar2;
        }
        else {
          bVar11 = 0 < iVar5;
        }
        if (!bVar11) break;
        local_68 = local_68 + -1;
        uVar6 = uVar6 - 1;
      }
      if ((longlong)uVar6 < (longlong)uVar8) break;
      if (uVar6 != uVar8) {
        uVar3 = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
        *(undefined4 *)(param_1 + uVar8 * 4) = uVar3;
      }
      local_68 = local_68 + -1;
      local_48 = uVar6 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)local_48);
    if ((int)local_res10 < local_68) {
      local_48 = *param_4;
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_144d268f0(param_1,local_res10,local_68,&local_48);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar6 = (ulonglong)uVar9;
    local_res10 = uVar9;
  } while( true );
}



// FUNCTION 144d26ab0 FUN_144d26ab0 body=267 status=ok
// SIG undefined FUN_144d26ab0(void)

void FUN_144d26ab0(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,undefined8 *param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = (longlong)param_2;
  lVar1 = *(longlong *)(param_5 + 0x2288);
  if (param_2 != -1) {
    do {
      if (*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x14) < 0) break;
      param_2 = *(int *)(lVar1 + (longlong)param_2 * 0x14);
    } while (param_2 != -1);
    if ((*(byte *)(lVar1 + 0x10 + lVar3 * 0x14) & 1) != 0) {
      bVar2 = true;
      goto LAB_144d26b1a;
    }
  }
  bVar2 = false;
LAB_144d26b1a:
  local_78 = *param_1;
  uStack_70 = param_1[1];
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_58 = param_1[4];
  uStack_50 = param_1[5];
  uVar4 = 0xffffffff;
  if (bVar2) {
    uVar4 = 0;
  }
  local_48 = param_1[6];
  uStack_40 = param_1[7];
  local_88 = param_5;
  local_38 = param_1[8];
  uStack_30 = param_1[9];
  local_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 100);
  uStack_10 = *(undefined4 *)(param_1 + 0xd);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x6c);
  local_28 = *(undefined4 *)(param_1 + 10);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_20 = *(undefined4 *)(param_1 + 0xb);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_80 = param_3;
  local_7c = param_4;
  FUN_144d27110(&local_78,local_28,uVar4,&local_88,*param_6,param_6[1]);
  return;
}



// FUNCTION 144d26bc0 FUN_144d26bc0 body=355 status=ok
// SIG undefined FUN_144d26bc0(void)

ulonglong FUN_144d26bc0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar8) {
    uVar6 = uVar8;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar6 * 0x88;
  puVar3 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
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
        uVar2 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar2;
        uVar2 = puVar5[7];
        puVar4[6] = puVar5[6];
        puVar4[7] = uVar2;
        uVar2 = puVar5[9];
        puVar4[8] = puVar5[8];
        puVar4[9] = uVar2;
        uVar2 = puVar5[0xb];
        puVar4[10] = puVar5[10];
        puVar4[0xb] = uVar2;
        uVar2 = puVar5[0xd];
        puVar4[0xc] = puVar5[0xc];
        puVar4[0xd] = uVar2;
        uVar2 = puVar5[0xf];
        puVar4[0xe] = puVar5[0xe];
        puVar4[0xf] = uVar2;
        puVar4[0x10] = puVar5[0x10];
      }
      puVar4 = puVar4 + 0x11;
      puVar5 = puVar5 + 0x11;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x88 + 0x88;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x88;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x88;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0xf0f0f0f0f0f0f0f1) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x88;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = puVar3;
  return uVar8;
}



// FUNCTION 144d26d30 FUN_144d26d30 body=363 status=ok
// SIG undefined FUN_144d26d30(void)

ulonglong FUN_144d26d30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x88,&local_res8);
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
        uVar2 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar2;
        uVar2 = puVar5[7];
        puVar4[6] = puVar5[6];
        puVar4[7] = uVar2;
        uVar2 = puVar5[9];
        puVar4[8] = puVar5[8];
        puVar4[9] = uVar2;
        uVar2 = puVar5[0xb];
        puVar4[10] = puVar5[10];
        puVar4[0xb] = uVar2;
        uVar2 = puVar5[0xd];
        puVar4[0xc] = puVar5[0xc];
        puVar4[0xd] = uVar2;
        uVar2 = puVar5[0xf];
        puVar4[0xe] = puVar5[0xe];
        puVar4[0xf] = uVar2;
        puVar4[0x10] = puVar5[0x10];
      }
      puVar4 = puVar4 + 0x11;
      puVar5 = puVar5 + 0x11;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x88 + 0x88;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x88;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x88;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0xf0f0f0f0f0f0f0f1) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x88;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 0x88);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar8;
}



// FUNCTION 144d26ea0 FUN_144d26ea0 body=624 status=ok
// SIG undefined FUN_144d26ea0(void)

ulonglong FUN_144d26ea0(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  uint local_68;
  
  plVar5 = *(longlong **)(param_3 + 0x18);
  *(int *)(param_3 + 0x28) = (int)plVar5[1];
  iVar18 = (int)plVar5[1] + 1;
  if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar18) {
    FUN_144d275c0(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  puVar16 = (undefined8 *)((longlong)(int)plVar5[1] * 0x70 + *plVar5);
  if (puVar16 != (undefined8 *)0x0) {
    uVar10 = param_1[1];
    uVar11 = param_1[2];
    uVar12 = param_1[3];
    *puVar16 = *param_1;
    puVar16[1] = uVar10;
    uVar10 = param_1[4];
    uVar13 = param_1[5];
    puVar16[2] = uVar11;
    puVar16[3] = uVar12;
    uVar11 = param_1[6];
    uVar12 = param_1[7];
    puVar16[4] = uVar10;
    puVar16[5] = uVar13;
    uVar10 = param_1[8];
    uVar13 = param_1[9];
    puVar16[6] = uVar11;
    puVar16[7] = uVar12;
    uVar11 = param_1[10];
    uVar12 = param_1[0xb];
    puVar16[8] = uVar10;
    puVar16[9] = uVar13;
    uVar10 = param_1[0xc];
    uVar13 = param_1[0xd];
    puVar16[10] = uVar11;
    puVar16[0xb] = uVar12;
    puVar16[0xc] = uVar10;
    puVar16[0xd] = uVar13;
  }
  *(int *)(plVar5 + 1) = iVar18;
  iVar18 = -1;
  lVar6 = *(longlong *)(param_3 + 0x18);
  *(undefined1 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0xffffffffffffffff;
  param_2 = (longlong *)*param_2;
  lVar7 = *(longlong *)(param_3 + 8);
  lVar8 = *(longlong *)(*param_2 + 0x2288);
  uVar2 = *(uint *)((longlong)param_2 + 0xc);
  uVar3 = *(uint *)(param_2 + 1);
  local_68 = uVar2;
  if (uVar3 != 0xffffffff) {
    local_68 = uVar3;
  }
  uVar15 = (ulonglong)local_68;
  if (uVar3 != 0xffffffff) {
    while ((local_68 != uVar2 && (-1 < *(int *)(lVar8 + 0xc + (longlong)(int)uVar15 * 0x14)))) {
      local_68 = *(uint *)(lVar8 + 4 + (longlong)(int)uVar15 * 0x14);
      uVar15 = (ulonglong)local_68;
    }
  }
  uVar3 = (uint)uVar15;
  while (uVar3 != uVar2) {
    puVar1 = (undefined4 *)(lVar7 + (longlong)(int)uVar15 * 8);
    iVar4 = *(int *)(lVar7 + (longlong)(int)uVar15 * 8);
    if (iVar4 != -1) {
      if (iVar18 == -1) {
        *(int *)(param_3 + 0x20) = iVar4;
      }
      else {
        lVar9 = *(longlong *)(lVar6 + 0x10);
        lVar17 = (longlong)iVar4 * 0x20;
        *(int *)((longlong)iVar18 * 0x20 + 8 + lVar9) = iVar4;
        *(int *)(lVar9 + 4 + lVar17) = iVar18;
        *(undefined4 *)(lVar9 + lVar17) = *(undefined4 *)(param_3 + 0x28);
        *(undefined1 *)(param_3 + 0x2c) = 1;
        puVar16 = (undefined8 *)param_4[1];
        lVar9 = *(longlong *)(*param_4 + 0x10);
        lVar17 = (longlong)*(int *)((longlong)*(int *)(lVar9 + 4 + lVar17) * 0x20 + 0x10 + lVar9);
        if ((*(byte *)(lVar17 * 0x20 + 0x1c + lVar9) & 2) != 0) {
          uVar14 = FUN_144d27d60(lVar17,iVar4);
          FUN_144d27820(uVar14,*puVar16);
        }
        uVar15 = FUN_144d27820(iVar4,*puVar16);
        if ((char)uVar15 == '\0') {
          return uVar15 & 0xffffffffffffff00;
        }
        iVar18 = -1;
      }
      *puVar1 = 0xffffffff;
    }
    iVar4 = puVar1[1];
    if (iVar4 != -1) {
      puVar1[1] = 0xffffffff;
      iVar18 = iVar4;
    }
    do {
      local_68 = *(uint *)(lVar8 + 4 + (longlong)(int)local_68 * 0x14);
      uVar15 = (ulonglong)(int)local_68;
      if (local_68 == uVar2) goto LAB_144d270f2;
      uVar3 = local_68;
    } while (-1 < *(int *)(lVar8 + 0xc + uVar15 * 0x14));
  }
LAB_144d270f2:
  *(int *)(param_3 + 0x24) = iVar18;
  return CONCAT71((int7)(uVar15 >> 8),1);
}



// FUNCTION 144d27110 FUN_144d27110 body=1179 status=ok
// SIG undefined FUN_144d27110(void)

ulonglong FUN_144d27110(undefined8 param_1,int param_2,int param_3,longlong *param_4,
                       longlong param_5,longlong *param_6)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  int local_res18 [2];
  int local_res20 [2];
  
  lVar6 = param_5;
  uVar18 = 0xffffffff;
  lVar11 = *param_4;
  uVar22 = *(uint *)(param_4 + 1);
  uVar2 = *(uint *)((longlong)param_4 + 0xc);
  lVar3 = *(longlong *)(param_5 + 8);
  plVar21 = (longlong *)(*(longlong *)(param_5 + 0x18) + 0x10);
  lVar16 = *(longlong *)(lVar11 + 0x2298);
  lVar20 = *(longlong *)(lVar11 + 0x2288);
  param_5._0_4_ = -1;
  if (uVar22 != 0xffffffff) {
    while (uVar22 != uVar2) {
      uVar15 = (ulonglong)uVar22;
      lVar11 = (longlong)(int)uVar22;
      if (*(int *)(lVar20 + 0xc + lVar11 * 0x14) < 0) {
        if (uVar22 != uVar2) goto LAB_144d271c5;
        break;
      }
      uVar22 = *(uint *)(lVar20 + 4 + lVar11 * 0x14);
    }
  }
  goto LAB_144d274c4;
LAB_144d271c5:
  do {
    lVar11 = (longlong)(int)uVar15;
    uVar22 = *(uint *)(lVar20 + 8 + lVar11 * 0x14);
    piVar1 = (int *)(lVar3 + lVar11 * 8);
    uVar22 = *(int *)((longlong)(int)uVar22 * 0x148 + 0x138 + lVar16) << 0x10 | uVar22;
    uVar19 = *(uint *)(lVar20 + 0x10 + lVar11 * 0x14) & 1;
    local_res18[0] = -1;
    if (uVar19 != 0) {
      local_res18[0] = 0;
    }
    iVar7 = (int)param_5;
    if (param_3 != -1) {
      iVar7 = FUN_144d232b0(*(undefined8 *)(lVar6 + 0x18),1);
      lVar11 = (longlong)iVar7 * 0x20 + *plVar21;
      *piVar1 = iVar7;
      *(uint *)(lVar11 + 0x14) = uVar22;
      *(int *)(lVar11 + 0x18) = param_3;
      iVar8 = (int)uVar18;
      if (iVar8 == -1) {
        iVar8 = *(int *)(lVar6 + 0x20);
        if (iVar8 == -1) goto LAB_144d27303;
        bVar5 = false;
        *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      }
      else {
        bVar5 = true;
        uVar18 = 0xffffffff;
      }
      lVar17 = *plVar21;
      *(int *)(lVar11 + 8) = iVar8;
      lVar11 = (longlong)iVar8 * 0x20;
      *(int *)(lVar17 + 4 + lVar11) = iVar7;
      *(undefined4 *)(lVar17 + lVar11) = *(undefined4 *)(lVar6 + 0x28);
      *(undefined1 *)(lVar6 + 0x2c) = 1;
      if (bVar5) {
        *(int *)(*(longlong *)(*param_6 + 0x10) + 0x10 + lVar11) = iVar8;
        iVar7 = (int)param_5;
      }
      else {
        local_res20[0] = iVar8;
        uVar12 = FUN_144d27e40(local_res20,*(undefined4 *)(lVar3 + 4 + (longlong)param_2 * 8),
                               *param_6,param_6[1]);
        iVar7 = (int)param_5;
        if ((char)uVar12 == '\0') goto LAB_144d2756e;
      }
    }
LAB_144d27303:
    param_5._0_4_ = iVar7;
    if (uVar19 != 0) {
      iVar7 = FUN_144d232b0(*(undefined8 *)(lVar6 + 0x18),1);
      uVar18 = (ulonglong)iVar7;
      puVar14 = (undefined4 *)(uVar18 * 0x20 + *plVar21);
      piVar1[1] = iVar7;
      *puVar14 = *(undefined4 *)(lVar6 + 0x28);
      puVar14[5] = uVar22;
      puVar14[6] = local_res18[0];
      *(undefined1 *)(lVar6 + 0x2c) = 1;
      if (*piVar1 != -1) {
        *(int *)((longlong)*piVar1 * 0x20 + 0xc + *plVar21) = iVar7;
        puVar14[3] = *piVar1;
      }
    }
    do {
      lVar11 = (longlong)(int)uVar15;
      uVar22 = *(uint *)(lVar20 + 4 + lVar11 * 0x14);
      uVar15 = (ulonglong)(int)uVar22;
      if (uVar22 == uVar2) break;
    } while (-1 < *(int *)(lVar20 + 0xc + uVar15 * 0x14));
    param_3 = local_res18[0];
  } while (uVar22 != uVar2);
  iVar7 = (int)uVar18;
  if ((int)param_5 != -1) {
    lVar16 = *plVar21;
    lVar20 = (longlong)iVar7 * 0x20;
    *(int *)((longlong)(int)param_5 * 0x20 + 8 + lVar16) = iVar7;
    *(int *)(lVar16 + 4 + lVar20) = (int)param_5;
    *(undefined4 *)(lVar16 + lVar20) = *(undefined4 *)(lVar6 + 0x28);
    *(undefined1 *)(lVar6 + 0x2c) = 1;
    iVar8 = *(int *)(lVar3 + 4 + (longlong)param_2 * 8);
    lVar3 = *param_6;
    iVar13 = *(int *)(lVar3 + 0x18) + 2;
    if ((int)(*(uint *)(lVar3 + 0x1c) & 0x7fffffff) < iVar13) {
      FUN_144cc8530(lVar3 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    lVar16 = (longlong)iVar8 * 0x20 + *(longlong *)(lVar3 + 0x10);
    iVar8 = FUN_144d27d60(uVar18 & 0xffffffff,*(undefined4 *)(lVar16 + 0x10),lVar3);
    *(int *)(lVar16 + 0x10) = iVar8 + 1;
    lVar11 = *(longlong *)(lVar3 + 0x10);
    *(int *)(lVar20 + 0x10 + lVar11) = iVar7;
    goto LAB_144d27586;
  }
  if (iVar7 != -1) {
    iVar8 = *(int *)(lVar6 + 0x24);
    lVar3 = *plVar21;
    lVar17 = (longlong)iVar7 * 0x20;
    *(int *)((longlong)iVar8 * 0x20 + 8 + lVar3) = iVar7;
    *(int *)(lVar3 + 4 + lVar17) = iVar8;
    lVar3 = *param_6;
    puVar4 = (undefined8 *)param_6[1];
    lVar16 = *(longlong *)(lVar3 + 0x10);
    lVar20 = (longlong)*(int *)((longlong)*(int *)(lVar17 + 4 + lVar16) * 0x20 + 0x10 + lVar16);
    if ((*(byte *)(lVar20 * 0x20 + 0x1c + lVar16) & 2) != 0) {
      uVar9 = FUN_144d27d60(lVar20,uVar18 & 0xffffffff,lVar3);
      uVar12 = FUN_144d27820(uVar9,*puVar4);
      if ((char)uVar12 == '\0') goto LAB_144d2756e;
    }
    lVar11 = *(longlong *)(lVar3 + 0x10);
    *(int *)(lVar17 + 0x10 + lVar11) = iVar7;
    goto LAB_144d27586;
  }
LAB_144d274c4:
  local_res18[0] = *(int *)(lVar6 + 0x20);
  if (local_res18[0] != -1) {
    lVar16 = *plVar21;
    iVar7 = *(int *)(lVar6 + 0x24);
    lVar20 = (longlong)local_res18[0] * 0x20;
    *(int *)((longlong)iVar7 * 0x20 + 8 + lVar16) = local_res18[0];
    *(int *)(lVar16 + 4 + lVar20) = iVar7;
    *(undefined4 *)(lVar16 + lVar20) = *(undefined4 *)(lVar6 + 0x28);
    *(undefined1 *)(lVar6 + 0x2c) = 1;
    uVar9 = *(undefined4 *)(lVar3 + 4 + (longlong)param_2 * 8);
    lVar3 = *param_6;
    puVar4 = (undefined8 *)param_6[1];
    lVar16 = *(longlong *)(lVar3 + 0x10);
    lVar20 = (longlong)*(int *)((longlong)*(int *)(lVar16 + 4 + lVar20) * 0x20 + 0x10 + lVar16);
    if ((*(byte *)(lVar20 * 0x20 + 0x1c + lVar16) & 2) != 0) {
      uVar10 = FUN_144d27d60(lVar20,local_res18[0],lVar3);
      uVar12 = FUN_144d27820(uVar10,*puVar4);
      if ((char)uVar12 == '\0') goto LAB_144d2756e;
    }
    uVar12 = FUN_144d27e40(local_res18,uVar9,lVar3,puVar4);
    if ((char)uVar12 == '\0') {
LAB_144d2756e:
      return uVar12 & 0xffffffffffffff00;
    }
    lVar11 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x10);
    *(uint *)(lVar11 + 0x1c) = *(uint *)(lVar11 + 0x1c) | 2;
  }
LAB_144d27586:
  if (*(char *)(lVar6 + 0x2c) == '\0') {
    lVar11 = *(longlong *)(lVar6 + 0x18);
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
  }
  *(undefined4 *)(lVar6 + 0x28) = 0xffffffff;
  return CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
}



// FUNCTION 144d275c0 FUN_144d275c0 body=328 status=ok
// SIG undefined FUN_144d275c0(void)

ulonglong FUN_144d275c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar10 = param_3;
  if (param_3 < uVar12) {
    uVar10 = uVar12;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar10 * 0x70;
  puVar6 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar12 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar5;
        uVar5 = puVar8[3];
        puVar7[2] = puVar8[2];
        puVar7[3] = uVar5;
        uVar5 = puVar8[5];
        puVar7[4] = puVar8[4];
        puVar7[5] = uVar5;
        uVar5 = puVar8[7];
        puVar7[6] = puVar8[6];
        puVar7[7] = uVar5;
        uVar5 = puVar8[9];
        puVar7[8] = puVar8[8];
        puVar7[9] = uVar5;
        uVar5 = puVar8[0xb];
        puVar7[10] = puVar8[10];
        puVar7[0xb] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 100);
        uVar3 = *(undefined4 *)(puVar8 + 0xd);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x6c);
        *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar8 + 0xc);
        *(undefined4 *)((longlong)puVar7 + 100) = uVar2;
        *(undefined4 *)(puVar7 + 0xd) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar4;
      }
      puVar7 = puVar7 + 0xe;
      puVar8 = puVar8 + 0xe;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar10 * 0x70 + 0x70;
  uVar11 = uVar10;
  if (uVar12 <= local_res8) {
    local_res8 = local_res8 - 0x70;
    uVar11 = uVar10 + 1;
    if (uVar12 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x70;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      lVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      uVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
      uVar11 = uVar11 + ((uVar10 - lVar9 >> 1) + lVar9 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar12;
}



// FUNCTION 144d27710 FUN_144d27710 body=266 status=ok
// SIG undefined FUN_144d27710(void)

void FUN_144d27710(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144d27820 FUN_144d27820 body=1341 status=ok
// SIG undefined FUN_144d27820(void)

undefined8 FUN_144d27820(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool local_res8;
  uint local_res18;
  uint local_res20;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar20 = (ulonglong)param_1;
  lVar16 = param_2[2];
  uVar10 = *(uint *)(uVar20 * 0x20 + 4 + lVar16);
  uVar13 = *(uint *)(uVar20 * 0x20 + 8 + lVar16);
  puVar14 = (uint *)((longlong)(int)uVar10 * 0x20 + lVar16);
  puVar12 = (uint *)((longlong)(int)uVar13 * 0x20 + lVar16);
  uVar4 = *puVar12;
  uVar3 = *puVar14;
  if (uVar3 < uVar4) {
    local_res18 = puVar12[2];
    local_res20 = uVar10;
  }
  else {
    local_res20 = puVar14[1];
    local_res18 = uVar13;
  }
  local_res8 = uVar3 < uVar4;
  uVar8 = uVar13;
  if (uVar4 <= uVar3) {
    uVar8 = uVar10;
  }
  if (uVar10 != uVar13) {
LAB_144d278d0:
    uVar4 = local_res20;
    uVar13 = local_res18;
    lVar16 = param_2[2];
    uVar3 = *(uint *)((longlong)(int)local_res18 * 0x20 + lVar16);
    uVar10 = *(uint *)((longlong)(int)local_res20 * 0x20 + lVar16);
    if (uVar10 < uVar3) {
      local_res18 = *(uint *)((longlong)(int)local_res18 * 0x20 + 8 + lVar16);
    }
    else {
      local_res20 = *(uint *)((longlong)(int)local_res20 * 0x20 + 4 + lVar16);
    }
    bVar5 = uVar10 < uVar3;
    uVar11 = uVar13;
    if (uVar3 <= uVar10) {
      uVar11 = uVar4;
    }
    if (uVar4 != uVar13) {
      if (bVar5 == local_res8) {
        lVar17 = *param_2;
        piVar19 = (int *)((longlong)(int)uVar11 * 0x20 + lVar16);
        lVar15 = (longlong)*piVar19 * 0x70;
        local_b8 = *(undefined8 *)(lVar15 + lVar17);
        uStack_b0 = ((undefined8 *)(lVar15 + lVar17))[1];
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17);
        local_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar17);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar17);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar15 + 0x40 + lVar17);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar17);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar15 + 0x60 + lVar17);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        if (uVar10 < uVar3) {
          uVar21 = (ulonglong)*(int *)((longlong)piVar19[1] * 0x20 + 4 + lVar16);
          lVar15 = (longlong)*(int *)((longlong)piVar19[1] * 0x20 + lVar16) * 0x70;
          piVar19 = (int *)(uVar21 * 0x20 + lVar16);
          local_128 = *(undefined8 *)(lVar15 + lVar17);
          uStack_120 = ((undefined8 *)(lVar15 + lVar17))[1];
          puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17);
          local_118 = *puVar1;
          uStack_110 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar17);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar17);
          local_f8 = *puVar1;
          uStack_f0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x40 + lVar17);
          local_e8 = *puVar1;
          uStack_e0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar17);
          local_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x60 + lVar17);
          local_c8 = *puVar1;
          uStack_c0 = puVar1[1];
          lVar16 = (longlong)*piVar19 * 0x70;
          local_198 = *(undefined8 *)(lVar16 + lVar17);
          uStack_190 = ((undefined8 *)(lVar16 + lVar17))[1];
          puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17);
          local_188 = *puVar1;
          uStack_180 = puVar1[1];
          puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar17);
          local_178 = *puVar1;
          uStack_170 = puVar1[1];
          puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar17);
          local_168 = *puVar1;
          uStack_160 = puVar1[1];
          puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar17);
          local_158 = *puVar1;
          uStack_150 = puVar1[1];
          puVar1 = (undefined8 *)(lVar16 + 0x50 + lVar17);
          local_148 = *puVar1;
          uStack_140 = puVar1[1];
          puVar2 = (undefined4 *)(lVar16 + 0x60 + lVar17);
          local_138 = *puVar2;
          uStack_134 = puVar2[1];
          uStack_130 = puVar2[2];
          uStack_12c = puVar2[3];
          iVar9 = FUN_144cb8b90(&local_b8,&local_128,&local_198);
          while (uVar8 = uVar11, iVar9 < 0) {
            uVar3 = piVar19[1];
            uVar10 = FUN_144d27d60(uVar11,uVar21 & 0xffffffff,param_2);
            if ((int)uVar21 == (int)uVar20) {
              uVar20 = (ulonglong)uVar10;
              break;
            }
            local_128 = local_198;
            uStack_120 = uStack_190;
            uVar21 = (ulonglong)uVar3;
            local_108 = local_178;
            uStack_100 = uStack_170;
            local_e8 = local_158;
            uStack_e0 = uStack_150;
            local_c8 = CONCAT44(uStack_134,local_138);
            uStack_c0 = CONCAT44(uStack_12c,uStack_130);
            local_118 = local_188;
            uStack_110 = uStack_180;
            local_f8 = local_168;
            uStack_f0 = uStack_160;
            local_d8 = local_148;
            uStack_d0 = uStack_140;
            piVar19 = (int *)((longlong)(int)uVar3 * 0x20 + param_2[2]);
            lVar17 = (longlong)*piVar19 * 0x70;
            lVar16 = *param_2;
            local_198 = *(undefined8 *)(lVar17 + lVar16);
            uStack_190 = ((undefined8 *)(lVar17 + lVar16))[1];
            puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar16);
            local_188 = *puVar1;
            uStack_180 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar16);
            local_178 = *puVar1;
            uStack_170 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar16);
            local_168 = *puVar1;
            uStack_160 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar16);
            local_158 = *puVar1;
            uStack_150 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x50 + lVar16);
            local_148 = *puVar1;
            uStack_140 = puVar1[1];
            puVar2 = (undefined4 *)(lVar17 + 0x60 + lVar16);
            local_138 = *puVar2;
            uStack_134 = puVar2[1];
            uStack_130 = puVar2[2];
            uStack_12c = puVar2[3];
            iVar9 = FUN_144cb8b90(&local_b8,&local_128,&local_198);
          }
        }
        else {
          lVar18 = (longlong)piVar19[2] * 0x20;
          lVar15 = (longlong)*(int *)(lVar18 + lVar16) * 0x70;
          local_198 = *(undefined8 *)(lVar15 + lVar17);
          uStack_190 = ((undefined8 *)(lVar15 + lVar17))[1];
          puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17);
          local_188 = *puVar1;
          uStack_180 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar17);
          local_178 = *puVar1;
          uStack_170 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar17);
          local_168 = *puVar1;
          uStack_160 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x40 + lVar17);
          local_158 = *puVar1;
          uStack_150 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar17);
          local_148 = *puVar1;
          uStack_140 = puVar1[1];
          puVar2 = (undefined4 *)(lVar15 + 0x60 + lVar17);
          local_138 = *puVar2;
          uStack_134 = puVar2[1];
          uStack_130 = puVar2[2];
          uStack_12c = puVar2[3];
          iVar9 = *(int *)(lVar18 + 8 + lVar16);
          iVar7 = piVar19[2];
          while (iVar6 = iVar9, uVar8 = uVar11, iVar7 != (int)uVar20) {
            piVar19 = (int *)((longlong)iVar6 * 0x20 + param_2[2]);
            lVar17 = (longlong)*piVar19 * 0x70;
            lVar16 = *param_2;
            local_128 = *(undefined8 *)(lVar17 + lVar16);
            uStack_120 = ((undefined8 *)(lVar17 + lVar16))[1];
            puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar16);
            local_118 = *puVar1;
            uStack_110 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar16);
            local_108 = *puVar1;
            uStack_100 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar16);
            local_f8 = *puVar1;
            uStack_f0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar16);
            local_e8 = *puVar1;
            uStack_e0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x50 + lVar16);
            local_d8 = *puVar1;
            uStack_d0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar17 + 0x60 + lVar16);
            local_c8 = *puVar1;
            uStack_c0 = puVar1[1];
            iVar9 = FUN_144cb8b90(&local_b8,&local_198,&local_128);
            if (iVar9 < 1) break;
            iVar9 = piVar19[2];
            uVar11 = FUN_144d27d60(iVar6,uVar11,param_2);
            local_138 = (undefined4)local_c8;
            uStack_134 = local_c8._4_4_;
            uStack_130 = (undefined4)uStack_c0;
            uStack_12c = uStack_c0._4_4_;
            local_198 = local_128;
            uStack_190 = uStack_120;
            local_188 = local_118;
            uStack_180 = uStack_110;
            local_178 = local_108;
            uStack_170 = uStack_100;
            local_168 = local_f8;
            uStack_160 = uStack_f0;
            local_158 = local_e8;
            uStack_150 = uStack_e0;
            local_148 = local_d8;
            uStack_140 = uStack_d0;
            iVar7 = iVar6;
          }
        }
      }
      else {
        uVar8 = FUN_144d27d60(uVar8,uVar11,param_2);
        uVar13 = uVar11;
        if (uVar10 < uVar3) {
          uVar13 = uVar8;
        }
        FUN_144d27ed0(uVar13,param_2);
        local_res8 = bVar5;
        if (uVar10 < uVar3) {
          uVar20 = (ulonglong)(uVar8 + 1);
          uVar8 = uVar11;
        }
        else {
          uVar20 = (ulonglong)*(uint *)((longlong)(int)uVar8 * 0x20 + 8 + param_2[2]);
        }
      }
      goto LAB_144d278d0;
    }
    FUN_144d27ed0(uVar11,param_2);
  }
  return 1;
}



// FUNCTION 144d27d60 FUN_144d27d60 body=212 status=ok
// SIG undefined FUN_144d27d60(void)

int FUN_144d27d60(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar5 = FUN_144d232b0(param_3,2);
  lVar4 = *(longlong *)(param_3 + 0x10);
  puVar7 = (undefined4 *)((longlong)param_1 * 0x20 + lVar4);
  puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + lVar4);
  puVar8 = (undefined4 *)((longlong)param_2 * 0x20 + lVar4);
  iVar9 = iVar5 + 1;
  iVar1 = puVar7[1];
  iVar2 = puVar8[1];
  puVar7[1] = iVar5;
  puVar8[1] = iVar9;
  *(int *)((longlong)iVar1 * 0x20 + 8 + lVar4) = iVar9;
  *(int *)((longlong)iVar2 * 0x20 + 8 + lVar4) = iVar5;
  *puVar6 = *puVar8;
  puVar6[1] = iVar2;
  puVar6[2] = param_1;
  puVar6[3] = iVar9;
  uVar3 = puVar7[6];
  puVar6[7] = puVar6[7] & 0xfffffffb;
  puVar6[6] = uVar3;
  puVar6[5] = 0xffffffff;
  puVar6[8] = *puVar7;
  puVar6[10] = param_2;
  puVar6[0xb] = iVar5;
  puVar6[9] = iVar1;
  uVar3 = puVar8[6];
  puVar6[0xf] = puVar6[0xf] & 0xfffffffb;
  puVar6[0xe] = uVar3;
  puVar6[0xd] = 0xffffffff;
  return iVar5;
}



// FUNCTION 144d27e40 FUN_144d27e40 body=144 status=ok
// SIG undefined FUN_144d27e40(void)

undefined8 FUN_144d27e40(int *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar6 = (longlong)param_2 * 0x20;
  lVar5 = (longlong)*(int *)(lVar6 + 0x10 + lVar1);
  lVar3 = lVar5 * 0x20;
  if ((*(byte *)(lVar3 + 0x1c + lVar1) & 2) == 0) {
    *(int *)(lVar6 + lVar1 + 0x10) = *param_1;
  }
  else {
    iVar2 = FUN_144d27d60(*param_1,lVar5,param_3);
    uVar4 = FUN_144d27820(*param_1,*param_4);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
    *param_1 = iVar2 + 1;
    lVar3 = *(longlong *)(param_3 + 0x10);
    *(int *)(lVar3 + 0x10 + lVar6) = iVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 144d27ed0 FUN_144d27ed0 body=288 status=ok
// SIG undefined FUN_144d27ed0(void)

void FUN_144d27ed0(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar6 = *(longlong *)(param_2 + 0x10);
  uVar12 = (ulonglong)param_1;
  iVar1 = *(int *)(uVar12 * 0x20 + 4 + lVar6);
  iVar2 = *(int *)((longlong)*(int *)(uVar12 * 0x20 + 8 + lVar6) * 0x20 + 8 + lVar6);
  while (iVar2 != iVar1) {
    uVar7 = FUN_144d232b0(param_2,2);
    lVar6 = *(longlong *)(param_2 + 0x10);
    lVar11 = (longlong)iVar2 * 0x20;
    iVar10 = uVar7 + 1;
    puVar9 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + lVar6);
    iVar3 = *(int *)(lVar11 + 4 + lVar6);
    puVar8 = (undefined4 *)((longlong)(int)uVar7 * 0x20 + lVar6);
    iVar4 = puVar9[1];
    *(uint *)(lVar11 + 4 + lVar6) = uVar7;
    puVar9[1] = iVar10;
    *(int *)((longlong)iVar3 * 0x20 + 8 + lVar6) = iVar10;
    *(uint *)((longlong)iVar4 * 0x20 + 8 + lVar6) = uVar7;
    *puVar8 = *puVar9;
    puVar8[1] = iVar4;
    puVar8[2] = iVar2;
    puVar8[3] = iVar10;
    uVar5 = *(undefined4 *)(lVar11 + 0x18 + lVar6);
    puVar8[7] = puVar8[7] & 0xfffffffb;
    puVar8[6] = uVar5;
    puVar8[5] = 0xffffffff;
    uVar5 = *(undefined4 *)(lVar11 + lVar6);
    puVar8[10] = (int)uVar12;
    uVar12 = (ulonglong)uVar7;
    puVar8[8] = uVar5;
    puVar8[9] = iVar3;
    puVar8[0xb] = uVar7;
    uVar5 = puVar9[6];
    puVar8[0xf] = puVar8[0xf] & 0xfffffffb;
    puVar8[0xe] = uVar5;
    puVar8[0xd] = 0xffffffff;
    iVar2 = *(int *)(lVar11 + 8 + *(longlong *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 144d27ff0 FUN_144d27ff0 body=463 status=ok
// SIG undefined FUN_144d27ff0(void)

undefined8 * FUN_144d27ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar4 = *(undefined4 *)(param_2 + 0xf);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x16);
  puVar11 = (undefined4 *)param_2[0x15];
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
    param_1[0x15] = uVar7;
    uVar10 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x16) = uVar2;
    *(uint *)((longlong)param_1 + 0xb4) = uVar2;
    puVar8 = (undefined4 *)param_1[0x15];
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar11 = puVar11 + 4;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 4;
    } while (uVar10 != 0);
  }
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x18);
  puVar12 = (undefined8 *)param_2[0x17];
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
    param_1[0x17] = uVar7;
    uVar10 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x18) = uVar2;
    *(uint *)((longlong)param_1 + 0xc4) = uVar2;
    puVar9 = (undefined8 *)param_1[0x17];
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar7 = puVar12[1];
        *puVar9 = *puVar12;
        puVar9[1] = uVar7;
        puVar1 = puVar12 + 2;
        uVar7 = puVar12[3];
        puVar12 = puVar12 + 4;
        puVar9[2] = *puVar1;
        puVar9[3] = uVar7;
      }
      uVar10 = uVar10 - 1;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  return param_1;
}



// FUNCTION 144d281c0 FUN_144d281c0 body=380 status=ok
// SIG undefined FUN_144d281c0(void)

void FUN_144d281c0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  undefined1 local_5c8 [168];
  longlong local_520;
  undefined4 local_518;
  uint local_514;
  longlong local_510;
  undefined4 local_508;
  uint local_504;
  undefined1 local_4f8 [1232];
  
  FUN_144be3930(local_4f8);
  lVar1 = *param_1;
  local_res18[0] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
    FUN_144b3d910(lVar1);
  }
  uVar2 = FUN_144d27ff0(local_5c8,param_2);
  FUN_144d28340(local_res8,local_4f8,local_res18,uVar2,param_4,0xffff);
  local_508 = 0;
  if ((-1 < (int)local_504) && (local_510 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_510,(ulonglong)(local_504 & 0x7fffffff) << 5);
  }
  local_510 = 0;
  local_504 = 0x80000000;
  local_518 = 0;
  if ((-1 < (int)local_514) && (local_520 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_520,(ulonglong)(local_514 & 0x7fffffff) << 4);
  }
  local_520 = 0;
  local_514 = 0x80000000;
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  (**(code **)(*param_3 + 0x98))(param_3,local_4f8,0);
  FUN_144be39a0(local_4f8);
  if (*param_1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144d28340 FUN_144d28340 body=2885 status=ok
// SIG undefined FUN_144d28340(void)

short * FUN_144d28340(short *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                     undefined4 param_5,short param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  short sVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  float fVar19;
  undefined8 *local_res20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar20;
  undefined4 in_stack_fffffffffffffef0;
  undefined2 uVar21;
  undefined2 local_b8 [2];
  undefined2 local_b4 [2];
  short local_b0 [2];
  undefined2 local_ac [2];
  undefined2 local_a8 [2];
  undefined2 local_a4 [2];
  undefined2 local_a0 [2];
  undefined2 local_9c [2];
  short local_98 [4];
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58 [3];
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar21 = (undefined2)((uint)in_stack_fffffffffffffef0 >> 0x10);
  local_res20 = param_4;
  if (*(float *)(param_4 + 0x14) == 0.0) {
    *param_1 = param_6;
    lVar12 = *param_3;
  }
  else {
    local_80 = 0x1c10;
    lVar12 = (*DAT_14c787670)(0,&local_80,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar12,"Context");
    }
    puVar16 = (undefined8 *)0x0;
    puVar13 = puVar16;
    if (lVar12 != 0) {
      local_70 = (undefined8 *)*param_3;
      if (local_70 != (undefined8 *)0x0) {
        FUN_144b3d910();
      }
      puVar13 = (undefined8 *)FUN_144d290f0(lVar12,&local_70);
    }
    plVar17 = param_4 + 0x15;
    *(undefined4 *)(puVar13 + 3) = param_5;
    plVar1 = puVar13 + 0x373;
    *(float *)(puVar13 + 0x372) =
         *(float *)(param_4 + 0x14) / (*(float *)(param_4 + 0x12) * *(float *)(param_4 + 0x12));
    if (plVar17 != plVar1) {
      *(undefined4 *)(puVar13 + 0x374) = 0;
      if ((-1 < (int)*(uint *)((longlong)puVar13 + 0x1ba4)) && (*plVar1 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar1,
                   (ulonglong)(*(uint *)((longlong)puVar13 + 0x1ba4) & 0x7fffffff) << 4);
      }
      *plVar1 = 0;
      *(undefined4 *)(puVar13 + 0x374) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x1ba4) = 0x80000000;
      FUN_147e4a87c(plVar17,&PTR_vftable_14c6e47a0);
      *plVar1 = *plVar17;
      *(undefined4 *)(puVar13 + 0x374) = *(undefined4 *)(param_4 + 0x16);
      *(undefined4 *)((longlong)puVar13 + 0x1ba4) = *(undefined4 *)((longlong)param_4 + 0xb4);
      *plVar17 = 0;
      param_4[0x16] = 0;
    }
    plVar17 = param_4 + 0x17;
    plVar1 = puVar13 + 0x375;
    if (plVar17 != plVar1) {
      *(undefined4 *)(puVar13 + 0x376) = 0;
      if ((-1 < (int)*(uint *)((longlong)puVar13 + 0x1bb4)) && (*plVar1 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar1,
                   (ulonglong)(*(uint *)((longlong)puVar13 + 0x1bb4) & 0x7fffffff) << 5);
      }
      *plVar1 = 0;
      *(undefined4 *)(puVar13 + 0x376) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x1bb4) = 0x80000000;
      FUN_144d13040(plVar17,&PTR_vftable_14c6e47a0);
      *plVar1 = *plVar17;
      *(undefined4 *)(puVar13 + 0x376) = *(undefined4 *)(param_4 + 0x18);
      *(undefined4 *)((longlong)puVar13 + 0x1bb4) = *(undefined4 *)((longlong)param_4 + 0xc4);
      *plVar17 = 0;
      param_4[0x18] = 0;
    }
    uVar6 = param_4[1];
    puVar13[6] = *param_4;
    puVar13[7] = uVar6;
    uVar6 = param_4[3];
    puVar13[8] = param_4[2];
    puVar13[9] = uVar6;
    uVar6 = param_4[5];
    puVar13[10] = param_4[4];
    puVar13[0xb] = uVar6;
    uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
    uVar4 = *(undefined4 *)(param_4 + 7);
    uVar5 = *(undefined4 *)((longlong)param_4 + 0x3c);
    *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(param_4 + 6);
    *(undefined4 *)((longlong)puVar13 + 100) = uVar3;
    *(undefined4 *)(puVar13 + 0xd) = uVar4;
    *(undefined4 *)((longlong)puVar13 + 0x6c) = uVar5;
    fVar19 = *(float *)((longlong)param_4 + 0xa4) * *(float *)((longlong)param_4 + 0x94);
    local_60 = 0x60;
    *(float *)((longlong)puVar13 + 0x1b94) = fVar19 * fVar19;
    puVar14 = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar14,"InitPruningTask");
    }
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[1] = 0xffffffff;
      puVar14[2] = 1;
      *puVar14 = hkaiNavMeshGeneration::Pruning::InitPruningTask::vftable;
      puVar14[4] = hkaiNavMeshGeneration::Pruning::InitPruningTask::vftable;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = puVar13;
      FUN_144b3d910(puVar13);
      puVar16 = puVar14;
    }
    FUN_144be3b70(param_2,local_b0,puVar16,0x40);
    sVar10 = local_b0[0];
    if ((param_6 != -1) && (local_b0[0] != -1)) {
      iVar18 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
      }
      iVar2 = *(int *)(param_2 + 0x330);
      lVar12 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar18;
      *(short *)(lVar12 + (longlong)iVar2 * 4) = param_6;
      *(short *)(lVar12 + 2 + (longlong)iVar2 * 4) = sVar10;
    }
    lVar15 = 0;
    FUN_145047300(local_a8,param_2,*param_3 + 0x38,puVar13 + 5,CONCAT44(uVar20,param_5),
                  CONCAT22(uVar21,local_b0[0]));
    local_80 = 0x930;
    lVar12 = (*DAT_14c787670)(0,&local_80,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar12,"AddConnectivityEdgesTask");
    }
    if (lVar12 != 0) {
      lVar15 = FUN_144d2b100(lVar12,puVar13);
    }
    local_80 = lVar15;
    FUN_144be3b70(param_2,local_ac,lVar15,0x40);
    uVar8 = local_a8[0];
    uVar21 = local_ac[0];
    plVar17 = (longlong *)(param_2 + 0x328);
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar12 = *plVar17;
    *(int *)(param_2 + 0x330) = iVar18;
    local_58[0] = 0x40;
    *(undefined2 *)(lVar12 + (longlong)iVar2 * 4) = uVar8;
    *(undefined2 *)(lVar12 + 2 + (longlong)iVar2 * 4) = uVar21;
    puVar16[6] = local_80;
    puVar14 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
    local_70 = puVar14;
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar14,"FindRegionsTask");
    }
    puVar11 = puVar14;
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[2] = 1;
      puVar14[1] = 0xffffffff;
      puVar14[7] = puVar13;
      *puVar14 = hkaiNavMeshGeneration::Pruning::FindRegionsTask::vftable;
      puVar14[4] = hkaiNavMeshGeneration::Pruning::FindRegionsTask::vftable;
      FUN_144b3d910(puVar13);
      puVar11 = local_70;
    }
    local_70 = puVar11;
    FUN_144be3b70(param_2,local_b8,puVar14,0x40);
    uVar21 = local_b8[0];
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar12 = *plVar17;
    *(int *)(param_2 + 0x330) = iVar18;
    local_78 = 0x930;
    *(undefined2 *)(lVar12 + (longlong)iVar2 * 4) = local_ac[0];
    *(undefined2 *)(lVar12 + 2 + (longlong)iVar2 * 4) = uVar21;
    lVar12 = (*DAT_14c787670)(0,&local_78,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar12,"PruneRegionsByAreaTask");
    }
    if (lVar12 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = FUN_144d2ba20(lVar12,puVar13);
    }
    FUN_144be3b70(param_2,local_9c,local_78,0x40);
    uVar8 = local_9c[0];
    uVar21 = local_b8[0];
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar12 = *plVar17;
    *(int *)(param_2 + 0x330) = iVar18;
    *(undefined2 *)(lVar12 + (longlong)iVar2 * 4) = uVar21;
    *(undefined2 *)(lVar12 + 2 + (longlong)iVar2 * 4) = uVar8;
    local_70[6] = local_78;
    if ((*(int *)(puVar13 + 0x374) != 0) || (*(int *)(puVar13 + 0x376) != 0)) {
      local_88 = 0x930;
      lVar12 = (*DAT_14c787670)(0,&local_88,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar12,"BuildFaceAabbsAndPointsTask");
      }
      if (lVar12 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = FUN_144d29d00(lVar12,puVar13);
      }
      FUN_144be3b70(param_2,local_a4,local_88,0x40);
      uVar21 = local_a4[0];
      iVar18 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
        FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
      }
      iVar2 = *(int *)(param_2 + 0x330);
      lVar12 = *plVar17;
      *(int *)(param_2 + 0x330) = iVar18;
      lVar15 = 0;
      *(undefined2 *)(lVar12 + (longlong)iVar2 * 4) = local_a8[0];
      *(undefined2 *)(lVar12 + 2 + (longlong)iVar2 * 4) = uVar21;
      puVar16[8] = local_88;
      FUN_147e557be(local_a4[0],puVar13 + 0xe,puVar13 + 0x1c,puVar13 + 0x12,puVar13 + 0x10,param_5,
                    0x40,puVar13 + 0x36a,param_2,local_68,local_a0,0,0,0,0,0);
      if (*(int *)(puVar13 + 0x374) != 0) {
        local_90 = 0x930;
        lVar12 = (*DAT_14c787670)(0,&local_90,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(lVar12,"LocateSeedPointsTask");
        }
        if (lVar12 != 0) {
          lVar15 = FUN_144d2a6b0(lVar12,puVar13);
        }
        FUN_144be3b70(param_2,local_b4,lVar15,0x40);
        uVar8 = local_a0[0];
        uVar21 = local_b4[0];
        iVar18 = *(int *)(param_2 + 0x330) + 1;
        local_90._0_4_ = iVar18;
        if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
          FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        uVar9 = local_b4[0];
        uVar7 = local_b8[0];
        iVar18 = *(int *)(param_2 + 0x330);
        lVar12 = *plVar17;
        *(int *)(param_2 + 0x330) = (int)local_90;
        *(undefined2 *)(lVar12 + (longlong)iVar18 * 4) = uVar8;
        *(undefined2 *)(lVar12 + 2 + (longlong)iVar18 * 4) = uVar21;
        iVar18 = *(int *)(param_2 + 0x330) + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar18);
        if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
          FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        iVar18 = *(int *)(param_2 + 0x330);
        lVar12 = *plVar17;
        *(int *)(param_2 + 0x330) = (int)local_90;
        *(undefined2 *)(lVar12 + (longlong)iVar18 * 4) = uVar9;
        *(undefined2 *)(lVar12 + 2 + (longlong)iVar18 * 4) = uVar7;
        if (lVar15 != 0) {
          FUN_144b3f230(lVar15);
        }
      }
      lVar12 = 0;
      if (*(int *)(puVar13 + 0x376) != 0) {
        local_90 = 0x930;
        lVar15 = (*DAT_14c787670)(0,&local_90,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(lVar15,"LocateRegionConnectionsTask");
        }
        if (lVar15 != 0) {
          lVar12 = FUN_144d2adf0(lVar15,puVar13);
        }
        FUN_144be3b70(param_2,local_b4,lVar12,0x40);
        uVar21 = local_b4[0];
        iVar18 = *(int *)(param_2 + 0x330) + 1;
        if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
          FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        uVar8 = local_b8[0];
        iVar2 = *(int *)(param_2 + 0x330);
        lVar15 = *(longlong *)(param_2 + 0x328);
        *(int *)(param_2 + 0x330) = iVar18;
        *(undefined2 *)(lVar15 + (longlong)iVar2 * 4) = local_a0[0];
        *(undefined2 *)(lVar15 + 2 + (longlong)iVar2 * 4) = uVar21;
        iVar18 = *(int *)(param_2 + 0x330) + 1;
        if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
          FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        iVar2 = *(int *)(param_2 + 0x330);
        lVar15 = *(longlong *)(param_2 + 0x328);
        *(int *)(param_2 + 0x330) = iVar18;
        *(undefined2 *)(lVar15 + (longlong)iVar2 * 4) = local_b4[0];
        *(undefined2 *)(lVar15 + 2 + (longlong)iVar2 * 4) = uVar8;
        param_4 = local_res20;
        if (lVar12 != 0) {
          FUN_144b3f230(lVar12);
          param_4 = local_res20;
        }
      }
      if (local_88 != 0) {
        FUN_144b3f230(local_88);
      }
    }
    if (*(char *)(param_4 + 0x19) != '\0') {
      local_88 = 0x930;
      lVar12 = (*DAT_14c787670)(0,&local_88,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar12,"LocateBoundsEdgesTask");
      }
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = FUN_144d29fd0(lVar12,puVar13);
      }
      FUN_144be3b70(param_2,&local_res20,lVar12,0x40);
      uVar21 = local_res20._0_2_;
      puVar16[9] = lVar12;
      iVar18 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
      }
      iVar2 = *(int *)(param_2 + 0x330);
      lVar15 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar18;
      *(short *)(lVar15 + (longlong)iVar2 * 4) = local_b0[0];
      *(undefined2 *)(lVar15 + 2 + (longlong)iVar2 * 4) = uVar21;
      iVar18 = *(int *)(param_2 + 0x330) + 1;
      uVar21 = local_res20._0_2_;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
      }
      iVar2 = *(int *)(param_2 + 0x330);
      lVar15 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar18;
      *(undefined2 *)(lVar15 + (longlong)iVar2 * 4) = uVar21;
      *(undefined2 *)(lVar15 + 2 + (longlong)iVar2 * 4) = local_b8[0];
      if (lVar12 != 0) {
        FUN_144b3f230(lVar12);
      }
    }
    local_res20 = (undefined8 *)&DAT_00000040;
    puVar14 = (undefined8 *)(*DAT_14c787670)(0,&local_res20,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar14,"DoRemovalTask");
    }
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[2] = 1;
      puVar14[1] = 0xffffffff;
      puVar14[6] = puVar13;
      *puVar14 = hkaiNavMeshGeneration::Pruning::DoRemovalTask::vftable;
      puVar14[4] = hkaiNavMeshGeneration::Pruning::DoRemovalTask::vftable;
      FUN_144b3d910(puVar13);
    }
    FUN_144be3b70(param_2,local_98,puVar14,0x40);
    sVar10 = local_98[0];
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar12 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar18;
    *(short *)(lVar12 + 2 + (longlong)iVar2 * 4) = sVar10;
    *(undefined2 *)(lVar12 + (longlong)iVar2 * 4) = local_9c[0];
    *param_1 = local_98[0];
    if (puVar14 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar14);
    }
    if (local_78 != 0) {
      FUN_144b3f230(local_78);
    }
    FUN_144b3f230(local_70);
    if (local_80 != 0) {
      FUN_144b3f230(local_80);
    }
    FUN_144b3f230(puVar16);
    FUN_144b3f230(puVar13);
    lVar12 = *param_3;
  }
  if (lVar12 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144d28e90 FUN_144d28e90 body=594 status=ok
// SIG undefined FUN_144d28e90(void)

float FUN_144d28e90(uint *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  
  uVar1 = *param_1;
  lVar2 = *param_2;
  uVar9 = (ulonglong)uVar1;
  uVar7 = *(uint *)((longlong)(int)uVar1 * 0x60 + lVar2);
  uVar6 = *(uint *)((longlong)(int)uVar1 * 0x60 + 0xc + lVar2);
  uVar3 = *(undefined8 *)
           (*(longlong *)(param_3 + 0x18 + (ulonglong)(uVar7 >> 0x1e) * 0x10) +
           (ulonglong)(uVar7 & 0x3fffffff) * 0x10);
  local_res8 = (float)uVar3;
  fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
  fVar12 = local_res8;
  fVar13 = fStackX_c;
  do {
    uVar7 = *(uint *)((longlong)(int)uVar6 * 0x60 + lVar2);
    uVar3 = *(undefined8 *)
             (*(longlong *)(param_3 + 0x18 + (ulonglong)(uVar7 >> 0x1e) * 0x10) +
             (ulonglong)(uVar7 & 0x3fffffff) * 0x10);
    local_res8 = (float)uVar3;
    fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
    if (local_res8 == fVar12) {
      bVar11 = fVar13 == fStackX_c;
      bVar10 = fVar13 < fStackX_c;
    }
    else {
      bVar11 = fVar12 == local_res8;
      bVar10 = fVar12 < local_res8;
    }
    uVar7 = uVar6;
    if (bVar10 || bVar11) {
      uVar7 = (uint)uVar9;
      local_res8 = fVar12;
      fStackX_c = fVar13;
    }
    fVar13 = fStackX_c;
    fVar12 = local_res8;
    uVar9 = (ulonglong)(int)uVar7;
    uVar6 = *(uint *)((longlong)(int)uVar6 * 0x60 + 0xc + lVar2);
  } while (uVar6 != uVar1);
  uVar1 = *(uint *)(uVar9 * 0x60 + lVar2);
  uVar3 = *(undefined8 *)
           (*(longlong *)(param_3 + 0x18 + (ulonglong)(uVar1 >> 0x1e) * 0x10) +
           (ulonglong)(uVar1 & 0x3fffffff) * 0x10);
  local_res10 = (float)uVar3;
  fStackX_14 = (float)((ulonglong)uVar3 >> 0x20);
  lVar5 = (longlong)*(int *)(uVar9 * 0x60 + 0xc + lVar2) * 0x60;
  uVar1 = *(uint *)(lVar5 + lVar2);
  uVar6 = *(uint *)(lVar5 + 0xc + lVar2);
  puVar8 = (uint *)((longlong)(int)uVar6 * 0x60 + lVar2);
  uVar3 = *(undefined8 *)
           (*(longlong *)(param_3 + 0x18 + (ulonglong)(uVar1 >> 0x1e) * 0x10) +
           (ulonglong)(uVar1 & 0x3fffffff) * 0x10);
  local_res18 = (float)uVar3;
  uVar4 = *(undefined8 *)
           (*(longlong *)(param_3 + 0x18 + (ulonglong)(*puVar8 >> 0x1e) * 0x10) +
           (ulonglong)(*puVar8 & 0x3fffffff) * 0x10);
  fStackX_1c = (float)((ulonglong)uVar3 >> 0x20);
  local_res8 = (float)uVar4;
  fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
  fVar14 = ((local_res18 - local_res10) * (fStackX_c - fStackX_14) -
           (fStackX_1c - fStackX_14) * (local_res8 - local_res10)) + 0.0;
  fVar12 = local_res8 - local_res10;
  fVar13 = fStackX_c - fStackX_14;
  while (uVar6 != uVar7) {
    uVar6 = puVar8[3];
    puVar8 = (uint *)((longlong)(int)uVar6 * 0x60 + lVar2);
    uVar3 = *(undefined8 *)
             (*(longlong *)(param_3 + 0x18 + (ulonglong)(*puVar8 >> 0x1e) * 0x10) +
             (ulonglong)(*puVar8 & 0x3fffffff) * 0x10);
    fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
    local_res8 = (float)uVar3;
    fVar14 = fVar14 + ((fStackX_c - fStackX_14) * fVar12 - (local_res8 - local_res10) * fVar13);
    fVar12 = local_res8 - local_res10;
    fVar13 = fStackX_c - fStackX_14;
  }
  return fVar14 * 0.5;
}



// FUNCTION 144d290f0 FUN_144d290f0 body=563 status=ok
// SIG undefined FUN_144d290f0(void)

undefined8 * FUN_144d290f0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::Pruning::Context::vftable;
  lVar1 = *param_2;
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = &PTR_FUN_14aba39d0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x31d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18f4) = 0;
  param_1[799] = param_1 + 0x321;
  param_1[0x339] = param_1 + 0x33b;
  param_1[0x344] = param_1 + 0x346;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1904) = 0x80000010;
  *(undefined4 *)(param_1 + 0x33a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19d4) = 0x80000010;
  param_1[0x343] = 0;
  *(undefined4 *)(param_1 + 0x345) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a2c) = 0x80000020;
  *(undefined1 *)(param_1 + 0x366) = 0;
  param_1[0x367] = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  FUN_147e56b1c();
  param_1[0x36e] = 0;
  *(undefined4 *)(param_1 + 0x36f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b7c) = 0x80000000;
  param_1[0x370] = 0;
  *(undefined4 *)(param_1 + 0x371) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b8c) = 0x80000000;
  param_1[0x373] = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ba4) = 0x80000000;
  param_1[0x375] = 0;
  *(undefined4 *)(param_1 + 0x376) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bb4) = 0x80000000;
  param_1[0x377] = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x379) = 0;
  param_1[0x37a] = 0;
  *(undefined4 *)(param_1 + 0x37b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  FUN_144bdde80(param_1 + 0x37d);
  if (*param_2 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144d29330 FUN_144d29330 body=361 status=ok
// SIG undefined FUN_144d29330(void)

void FUN_144d29330(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x7c)) && (*(longlong *)(param_1 + 0x70) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x70),
               (ulonglong)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(longlong *)(param_1 + 0x80) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x80),
               (ulonglong)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  FUN_147e56b1c(param_1 + 0x1b50);
  *(undefined4 *)(param_1 + 0x1b78) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1b7c)) && (*(longlong *)(param_1 + 0x1b70) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1b70),
               (ulonglong)(*(uint *)(param_1 + 0x1b7c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x1b70) = 0;
  *(undefined4 *)(param_1 + 0x1b7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1b8c)) && (*(longlong *)(param_1 + 0x1b80) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1b80),
               (ulonglong)(*(uint *)(param_1 + 0x1b8c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x1b80) = 0;
  *(undefined4 *)(param_1 + 0x1b8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1bc8) = 0;
  *(undefined4 *)(param_1 + 0x1bc0) = 0;
  *(undefined4 *)(param_1 + 0x1be0) = 0;
  *(undefined4 *)(param_1 + 0x1bd8) = 0;
  return;
}



// FUNCTION 144d294a0 FUN_144d294a0 body=596 status=ok
// SIG undefined FUN_144d294a0(void)

void FUN_144d294a0(undefined8 *param_1)

{
  longlong lVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x37d));
  FUN_144bf90d0(param_1 + 0x37a);
  FUN_144bf90d0(param_1 + 0x377);
  *(undefined4 *)(param_1 + 0x376) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1bb4)) && (param_1[0x375] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x375],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1bb4) & 0x7fffffff) << 5);
  }
  param_1[0x375] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x374) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1ba4)) && (param_1[0x373] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x373],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1ba4) & 0x7fffffff) << 4);
  }
  param_1[0x373] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ba4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x371) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1b8c)) && (param_1[0x370] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x370],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1b8c) & 0x7fffffff) << 2);
  }
  param_1[0x370] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x36f) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1b7c)) && (param_1[0x36e] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x36e],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1b7c) & 0x7fffffff) << 2);
  }
  param_1[0x36e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b7c) = 0x80000000;
  if (*(int *)((longlong)param_1 + 0x1b5c) < 0) {
    lVar1 = (longlong)param_1 + param_1[0x36a] + 0x1b50;
    if (param_1[0x36a] == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_147e56e8a(param_1 + 0x1c);
  FUN_147e56a8a(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 4);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 5);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144d29700 FUN_144d29700 body=87 status=ok
// SIG undefined FUN_144d29700(void)

undefined8 FUN_144d29700(undefined8 param_1,ulonglong param_2)

{
  FUN_144d294a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1c10);
  }
  return param_1;
}



// FUNCTION 144d29760 FUN_144d29760 body=692 status=ok
// SIG undefined FUN_144d29760(void)

void FUN_144d29760(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  char *local_28;
  char *local_20;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar4;
  }
  lVar3 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar3 != 0) {
    local_28 = "TtAi";
    local_20 = "";
    FUN_144b3f370(lVar3,&local_28);
    local_28 = "TtGeneration";
    local_20 = "";
    FUN_144b3f370(lVar3,&local_28);
    local_28 = "TtInitPruning";
    local_20 = "";
    FUN_144b3f370(lVar3,&local_28);
  }
  local_res8 = 0x10;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20);
  lVar5 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"UnionFind");
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_145031d40(lVar5,*(int *)(lVar4 + 0x20) + 1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b68) = uVar6;
  lVar5 = *(longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((int)(*(uint *)(lVar5 + 0x7c) & 0x7fffffff) < iVar1) {
    FUN_141807cf8(lVar5 + 0x70,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar5 + 0x78) < iVar1) || (iVar1 < *(int *)(lVar5 + 0x78))) {
    *(int *)(lVar5 + 0x78) = iVar1;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((int)(*(uint *)(lVar5 + 0x8c) & 0x7fffffff) < iVar1) {
    FUN_147e57f40(lVar5 + 0x80,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar5 + 0x88) < iVar1) || (iVar1 < *(int *)(lVar5 + 0x88))) {
    *(int *)(lVar5 + 0x88) = iVar1;
  }
  FUN_144c3fad0(*(longlong *)(param_1 + 0x30) + 0x1bb8,0,*(undefined4 *)(lVar4 + 0x30),0);
  FUN_144c3fad0(*(longlong *)(param_1 + 0x30) + 0x1bd0,0,*(undefined4 *)(lVar4 + 0x20),0);
  lVar5 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(lVar4 + 0x30);
  *(undefined4 *)(lVar5 + 0x910) = uVar2;
  FUN_144bf95c0(lVar5 + 0x30,*(undefined4 *)(lVar5 + 0x914),uVar2,1);
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar2 = *(undefined4 *)(lVar4 + 0x20);
    *(undefined4 *)(lVar5 + 0x910) = uVar2;
    FUN_144bf95c0(lVar5 + 0x30,*(undefined4 *)(lVar5 + 0x914),uVar2,1);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 != 0) {
    uVar2 = *(undefined4 *)(lVar4 + 0x30);
    *(undefined4 *)(lVar5 + 0x910) = uVar2;
    FUN_144bf95c0(lVar5 + 0x30,*(undefined4 *)(lVar5 + 0x914),uVar2,1);
  }
  if (lVar3 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar3,&local_28);
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar3,&local_28);
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar3,&local_28);
  }
  return;
}



// FUNCTION 144d29a20 FUN_144d29a20 body=8 status=ok
// SIG undefined FUN_144d29a20(void)

char * FUN_144d29a20(void)

{
  return "InitPruning";
}



// FUNCTION 144d29a30 FUN_144d29a30 body=115 status=ok
// SIG undefined FUN_144d29a30(void)

undefined8 * FUN_144d29a30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[10] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
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



// FUNCTION 144d29ab0 FUN_144d29ab0 body=65 status=ok
// SIG undefined FUN_144d29ab0(void)

int * FUN_144d29ab0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144d29b00 FUN_144d29b00 body=489 status=ok
// SIG undefined FUN_144d29b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d29b00(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar21 [16];
  uint local_res8 [2];
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x900);
  local_res20 = *(longlong *)(lVar2 + 0x70);
  lVar3 = *(longlong *)(lVar2 + 0x80);
  lVar4 = *(longlong *)(lVar2 + 0x28);
  lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x28);
  local_res18 = (longlong)*(int *)(param_2 + 0x18) << 6;
  local_res10 = *(int *)(param_2 + 0x18) + 1;
  lVar13 = local_res20;
  do {
    puVar10 = (ulonglong *)
              ((longlong)*(int *)(local_res18 + 0x40 + *(longlong *)(param_1 + 0x50)) * 0x40 +
              *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar9 = *puVar10;
    *puVar10 = *puVar10 + 1;
    UNLOCK();
    uVar1 = (uint)uVar9;
    if ((uint)(uVar9 >> 0x20) <= (uint)uVar9) {
      iVar6 = FUN_144bf98f0(param_1 + 0x10,local_res10,1,local_res8);
      if (iVar6 == 0) {
        return;
      }
      uVar9 = (ulonglong)local_res8[0];
      lVar13 = local_res20;
      uVar1 = local_res8[0];
    }
    local_res8[0] = uVar1;
    iVar7 = (int)uVar9 + 1;
    lVar14 = (longlong)(int)uVar9;
    iVar6 = *(int *)(param_1 + 0x8f0);
    if (iVar7 < *(int *)(param_1 + 0x8f0)) {
      iVar6 = iVar7;
    }
    if (lVar14 < iVar6) {
      puVar15 = (uint *)(lVar14 * 0x10 + lVar3);
      pauVar12 = (undefined1 (*) [16])(lVar14 * 0x20 + lVar13);
      do {
        iVar7 = *(int *)(lVar5 + lVar14 * 4);
        auVar21._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
        auVar21._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
        auVar21._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
        auVar17 = _DAT_14c6dae80;
        iVar8 = iVar7;
        do {
          uVar1 = *(uint *)((longlong)iVar8 * 0x60 + lVar2);
          uVar11 = (ulonglong)(uVar1 & 0x3fffffff);
          lVar13 = *(longlong *)(lVar4 + 0x18 + (ulonglong)(uVar1 >> 0x1e) * 0x10);
          auVar17 = minps(auVar17,*(undefined1 (*) [16])(lVar13 + uVar11 * 0x10));
          auVar21 = maxps(auVar21,*(undefined1 (*) [16])(lVar13 + uVar11 * 0x10));
          iVar8 = *(int *)((longlong)iVar8 * 0x60 + 0xc + lVar2);
        } while (iVar8 != iVar7);
        *pauVar12 = auVar17;
        lVar14 = lVar14 + 1;
        pauVar12[1] = auVar21;
        pauVar12 = pauVar12 + 2;
        fVar16 = (auVar17._0_4_ + auVar21._0_4_) * _DAT_14c6dad90;
        fVar18 = (auVar17._4_4_ + auVar21._4_4_) * fRam000000014c6dad94;
        fVar19 = (auVar17._8_4_ + auVar21._8_4_) * fRam000000014c6dad98;
        fVar20 = (auVar17._12_4_ + auVar21._12_4_) * fRam000000014c6dad9c;
        *puVar15 = (uint)((int)fVar16 >> 0x1f) >> 1 ^ (uint)fVar16;
        puVar15[1] = (uint)((int)fVar18 >> 0x1f) >> 1 ^ (uint)fVar18;
        puVar15[2] = (uint)((int)fVar19 >> 0x1f) >> 1 ^ (uint)fVar19;
        puVar15[3] = (uint)((int)fVar20 >> 0x1f) >> 1 ^ (uint)fVar20;
        puVar15[3] = (uint)uVar9;
        uVar9 = (ulonglong)((uint)uVar9 + 1);
        puVar15 = puVar15 + 4;
        lVar13 = local_res20;
      } while (lVar14 < iVar6);
    }
  } while( true );
}



// FUNCTION 144d29d00 FUN_144d29d00 body=135 status=ok
// SIG undefined FUN_144d29d00(void)

undefined8 * FUN_144d29d00(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiNavMeshGeneration::Pruning::BuildFaceAabbsAndPointsTask::vftable;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = hkaiNavMeshGeneration::Pruning::BuildFaceAabbsAndPointsTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar1;
  param_1[0x124] = param_2;
  FUN_144b3d910(param_2);
  return param_1;
}


