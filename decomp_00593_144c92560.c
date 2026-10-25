// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c92560 FUN_144c92560 body=258 status=ok
// SIG undefined FUN_144c92560(void)

undefined8 * FUN_144c92560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != param_1) {
    iVar2 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144c3b850(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*param_1,uVar3,(longlong)iVar2 * 0x14);
    *(int *)(param_1 + 1) = iVar2;
  }
  puVar1 = param_1 + 2;
  if (param_2 + 2 != puVar1) {
    iVar2 = *(int *)(param_2 + 3);
    uVar3 = param_2[2];
    if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar2) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 3) = iVar2;
  }
  puVar1 = param_1 + 4;
  if (param_2 + 4 != puVar1) {
    iVar2 = *(int *)(param_2 + 5);
    uVar3 = param_2[4];
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_144c44f20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 5) = iVar2;
  }
  return param_1;
}



// FUNCTION 144c92670 FUN_144c92670 body=1883 status=ok
// SIG undefined FUN_144c92670(void)

longlong FUN_144c92670(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) {
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_144b3d910();
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    if (lVar4 != 0) {
      FUN_144b3f230();
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if ((undefined8 *)(param_2 + 0x70) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x78);
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x78) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x80);
  if ((undefined8 *)(param_2 + 0x80) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x88);
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x88) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x90);
  if ((undefined8 *)(param_2 + 0x90) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x98);
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x98) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  if ((undefined8 *)(param_2 + 0xa0) != puVar1) {
    iVar3 = *(int *)(param_2 + 0xa8);
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0xa8) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  if ((undefined8 *)(param_2 + 0xb0) != puVar1) {
    iVar3 = *(int *)(param_2 + 0xb8);
    uVar5 = *(undefined8 *)(param_2 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar3) {
      FUN_144c3b900(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 0xc);
    *(int *)(param_1 + 0xb8) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  if ((undefined8 *)(param_2 + 0xc0) != puVar1) {
    iVar3 = *(int *)(param_2 + 200);
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) < iVar3) {
      FUN_144c3b850(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 0x14);
    *(int *)(param_1 + 200) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if ((undefined8 *)(param_2 + 0xd0) != puVar1) {
    iVar3 = *(int *)(param_2 + 0xd8);
    uVar5 = *(undefined8 *)(param_2 + 0xd0);
    if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar3) {
      FUN_144c3b900(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 0xc);
    *(int *)(param_1 + 0xd8) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0xe0);
  if ((undefined8 *)(param_2 + 0xe0) != puVar1) {
    iVar3 = *(int *)(param_2 + 0xe8);
    uVar5 = *(undefined8 *)(param_2 + 0xe0);
    if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < iVar3) {
      FUN_144c3b850(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 0x14);
    *(int *)(param_1 + 0xe8) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  if ((undefined8 *)(param_2 + 0xf0) != puVar1) {
    iVar3 = *(int *)(param_2 + 0xf8);
    uVar5 = *(undefined8 *)(param_2 + 0xf0);
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar3) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 << 4);
    *(int *)(param_1 + 0xf8) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x100);
  if ((undefined8 *)(param_2 + 0x100) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x108);
    uVar5 = *(undefined8 *)(param_2 + 0x100);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar3) {
      FUN_144c44920(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3);
    *(int *)(param_1 + 0x108) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x110);
  if ((undefined8 *)(param_2 + 0x110) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x118);
    uVar5 = *(undefined8 *)(param_2 + 0x110);
    if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) < iVar3) {
      FUN_144c449c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 2);
    *(int *)(param_1 + 0x118) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x120);
  if ((undefined8 *)(param_2 + 0x120) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x128);
    uVar5 = *(undefined8 *)(param_2 + 0x120);
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x128) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x130);
  if ((undefined8 *)(param_2 + 0x130) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x138);
    uVar5 = *(undefined8 *)(param_2 + 0x130);
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x138) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x140);
  if ((undefined8 *)(param_2 + 0x140) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x148);
    uVar5 = *(undefined8 *)(param_2 + 0x140);
    if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x148) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x150);
  if ((undefined8 *)(param_2 + 0x150) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x158);
    uVar5 = *(undefined8 *)(param_2 + 0x150);
    if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x158) = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  if ((undefined8 *)(param_2 + 0x168) != puVar1) {
    iVar3 = *(int *)(param_2 + 0x170);
    uVar5 = *(undefined8 *)(param_2 + 0x168);
    if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar3) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    FUN_144b3d470(*puVar1,uVar5,(longlong)iVar3 * 4);
    *(int *)(param_1 + 0x170) = iVar3;
  }
  plVar2 = (longlong *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  uVar5 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  uVar8 = *(undefined4 *)(param_2 + 0x1a4);
  uVar9 = *(undefined4 *)(param_2 + 0x1a8);
  uVar10 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar8;
  *(undefined4 *)(param_1 + 0x1a8) = uVar9;
  *(undefined4 *)(param_1 + 0x1ac) = uVar10;
  uVar8 = *(undefined4 *)(param_2 + 0x1b4);
  uVar9 = *(undefined4 *)(param_2 + 0x1b8);
  uVar10 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar8;
  *(undefined4 *)(param_1 + 0x1b8) = uVar9;
  *(undefined4 *)(param_1 + 0x1bc) = uVar10;
  if (plVar2 != (longlong *)(param_2 + 0x1c0)) {
    lVar4 = *(longlong *)(param_2 + 0x1c0);
    iVar3 = *(int *)(param_2 + 0x1c8);
    if ((int)(*(uint *)(param_1 + 0x1cc) & 0x7fffffff) < iVar3) {
      FUN_144c44b00(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    if (iVar3 < *(int *)(param_1 + 0x1c8)) {
      lVar6 = *plVar2;
      for (lVar12 = (longlong)*(int *)(param_1 + 0x1c8) * 0x38 + *plVar2;
          lVar12 != (longlong)iVar3 * 0x38 + lVar6; lVar12 = lVar12 + -0x38) {
        FUN_144c432b0(lVar12 + -0x30);
      }
    }
    lVar6 = *plVar2;
    iVar7 = iVar3;
    if (*(int *)(param_1 + 0x1c8) < iVar3) {
      iVar7 = *(int *)(param_1 + 0x1c8);
    }
    if ((lVar6 != lVar4) && (lVar12 = (longlong)iVar7, 0 < iVar7)) {
      lVar13 = lVar6 + 8;
      do {
        *(undefined4 *)(lVar13 + -8) = *(undefined4 *)((lVar4 - lVar6) + -8 + lVar13);
        FUN_144c92560(lVar13,(lVar4 - lVar6) + lVar13);
        lVar13 = lVar13 + 0x38;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    puVar15 = (undefined4 *)(lVar4 + (longlong)iVar7 * 0x38);
    if (0 < iVar3 - iVar7) {
      uVar11 = (ulonglong)(uint)(iVar3 - iVar7);
      puVar14 = (undefined4 *)(*plVar2 + (longlong)iVar7 * 0x38);
      do {
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = *puVar15;
          FUN_144c43380(puVar14 + 2,puVar15 + 2);
          puVar15 = puVar15 + 0xe;
        }
        uVar11 = uVar11 - 1;
        puVar14 = puVar14 + 0xe;
      } while (uVar11 != 0);
    }
    *(int *)(param_1 + 0x1c8) = iVar3;
    plVar2 = (longlong *)(param_1 + 0x1d0);
    if ((longlong *)(param_2 + 0x1d0) != plVar2) {
      lVar4 = *plVar2;
      if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
        FUN_144b3ec00(plVar2);
      }
      FUN_140069ea2(plVar2,(longlong *)(param_2 + 0x1d0));
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 144c92df0 FUN_144c92df0 body=18 status=ok
// SIG undefined FUN_144c92df0(void)

undefined8 * FUN_144c92df0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eb650;
  return param_2;
}



// FUNCTION 144c92e10 FUN_144c92e10 body=18 status=ok
// SIG undefined FUN_144c92e10(void)

undefined8 * FUN_144c92e10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ee1a0;
  return param_2;
}



// FUNCTION 144c92e30 FUN_144c92e30 body=18 status=ok
// SIG undefined FUN_144c92e30(void)

undefined8 * FUN_144c92e30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ef0c0;
  return param_2;
}



// FUNCTION 144c92e50 FUN_144c92e50 body=18 status=ok
// SIG undefined FUN_144c92e50(void)

undefined8 * FUN_144c92e50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ea560;
  return param_2;
}



// FUNCTION 144c92e80 FUN_144c92e80 body=1160 status=ok
// SIG undefined FUN_144c92e80(void)

longlong * FUN_144c92e80(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  
  if (*param_1 != *param_2) {
    if (*param_2 != 0) {
      FUN_144b3d910();
    }
    lVar6 = *param_1;
    *param_1 = *param_2;
    if (lVar6 != 0) {
      FUN_144b3f230();
    }
  }
  if (param_1[1] != param_2[1]) {
    if (param_2[1] != 0) {
      FUN_144b3d910();
    }
    lVar6 = param_1[1];
    param_1[1] = param_2[1];
    if (lVar6 != 0) {
      FUN_144b3f230();
    }
  }
  plVar10 = param_1 + 2;
  if (param_2 + 2 != plVar10) {
    iVar1 = (int)param_2[3];
    plVar8 = (longlong *)param_2[2];
    if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar1) {
      FUN_144ca0800(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if (iVar1 < (int)param_1[3]) {
      lVar12 = *plVar10;
      lVar6 = lVar12 + (longlong)(int)param_1[3] * 8;
      while (lVar6 != lVar12 + (longlong)iVar1 * 8) {
        plVar7 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar7 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar7 = (longlong *)*plVar10;
    iVar3 = iVar1;
    if ((int)param_1[3] < iVar1) {
      iVar3 = (int)param_1[3];
    }
    if ((plVar7 != plVar8) && (lVar6 = (longlong)iVar3, 0 < iVar3)) {
      lVar12 = (longlong)plVar8 - (longlong)plVar7;
      do {
        lVar9 = *(longlong *)(lVar12 + (longlong)plVar7);
        if (*plVar7 != lVar9) {
          if (lVar9 != 0) {
            FUN_144b3d910();
          }
          lVar9 = *plVar7;
          *plVar7 = *(longlong *)(lVar12 + (longlong)plVar7);
          if (lVar9 != 0) {
            FUN_144b3f230();
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    plVar8 = plVar8 + iVar3;
    if (0 < iVar1 - iVar3) {
      uVar13 = (ulonglong)(uint)(iVar1 - iVar3);
      plVar10 = (longlong *)(*plVar10 + (longlong)iVar3 * 8);
      do {
        if (plVar10 != (longlong *)0x0) {
          lVar6 = *plVar8;
          *plVar10 = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          plVar8 = plVar8 + 1;
        }
        uVar13 = uVar13 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar13 != 0);
    }
    *(int *)(param_1 + 3) = iVar1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  plVar10 = param_1 + 0x18;
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 6) = (int)param_2[6];
  lVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar6;
  lVar6 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = lVar6;
  lVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar6;
  lVar6 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar6;
  lVar6 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = lVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x94);
  lVar6 = param_2[0x13];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  *(int *)(param_1 + 0x13) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xb4);
  lVar6 = param_2[0x17];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(int *)(param_1 + 0x16) = (int)param_2[0x16];
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  *(int *)(param_1 + 0x17) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  if (plVar10 != param_2 + 0x18) {
    iVar1 = (int)param_2[0x19];
    lVar6 = param_2[0x18];
    if ((int)(*(uint *)((longlong)param_1 + 0xcc) & 0x7fffffff) < iVar1) {
      FUN_144ca0dc0(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*plVar10,lVar6,(longlong)iVar1 * 8);
    *(int *)(param_1 + 0x19) = iVar1;
    plVar10 = param_1 + 0x1a;
    if (param_2 + 0x1a != plVar10) {
      lVar6 = *plVar10;
      if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar6,0);
        FUN_144b3ec00(plVar10);
      }
      FUN_140069ea2(plVar10,param_2 + 0x1a);
    }
  }
  plVar10 = param_1 + 0x1c;
  if (plVar10 != param_2 + 0x1c) {
    iVar1 = (int)param_2[0x1d];
    lVar6 = param_2[0x1c];
    if ((int)(*(uint *)((longlong)param_1 + 0xec) & 0x7fffffff) < iVar1) {
      FUN_144c9e700(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if (iVar1 < (int)param_1[0x1d]) {
      lVar12 = *plVar10;
      lVar9 = (longlong)(int)param_1[0x1d] * 0x10 + *plVar10;
      while (lVar9 != (longlong)iVar1 * 0x10 + lVar12) {
        plVar8 = (longlong *)(lVar9 + -8);
        lVar9 = lVar9 + -0x10;
        if (*plVar8 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar12 = *plVar10;
    iVar3 = iVar1;
    if ((int)param_1[0x1d] < iVar1) {
      iVar3 = (int)param_1[0x1d];
    }
    if ((lVar12 != lVar6) && (lVar9 = (longlong)iVar3, 0 < iVar3)) {
      plVar10 = (longlong *)(lVar6 + 8);
      lVar14 = lVar12 - lVar6;
      do {
        *(int *)(lVar14 + -8 + (longlong)plVar10) = (int)plVar10[-1];
        *(undefined4 *)((longlong)plVar10 + lVar14 + -4) =
             *(undefined4 *)((longlong)plVar10 + (lVar6 - lVar12) + lVar14 + -4);
        if (*(longlong *)(lVar14 + (longlong)plVar10) != *plVar10) {
          if (*plVar10 != 0) {
            FUN_144b3d910();
          }
          lVar2 = *(longlong *)(lVar14 + (longlong)plVar10);
          *(longlong *)(lVar14 + (longlong)plVar10) = *plVar10;
          if (lVar2 != 0) {
            FUN_144b3f230();
          }
        }
        plVar10 = plVar10 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar11 = (undefined4 *)((longlong)iVar3 * 0x10 + lVar6);
    if (0 < iVar1 - iVar3) {
      uVar13 = (ulonglong)(uint)(iVar1 - iVar3);
      puVar15 = (undefined4 *)(param_1[0x1c] + (longlong)iVar3 * 0x10);
      do {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = *puVar11;
          puVar15[1] = puVar11[1];
          lVar6 = *(longlong *)(puVar11 + 2);
          *(longlong *)(puVar15 + 2) = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          puVar11 = puVar11 + 4;
        }
        uVar13 = uVar13 - 1;
        puVar15 = puVar15 + 4;
      } while (uVar13 != 0);
    }
    *(int *)(param_1 + 0x1d) = iVar1;
    plVar10 = param_1 + 0x1e;
    if (param_2 + 0x1e != plVar10) {
      lVar6 = *plVar10;
      if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar6,0);
        FUN_144b3ec00(plVar10);
      }
      FUN_140069ea2(plVar10,param_2 + 0x1e);
    }
  }
  *(char *)(param_1 + 0x20) = (char)param_2[0x20];
  FUN_144c904b0(param_1 + 0x21,param_2 + 0x21);
  return param_1;
}



// FUNCTION 144c93310 FUN_144c93310 body=182 status=ok
// SIG undefined FUN_144c93310(void)

void FUN_144c93310(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    uVar1 = *(uint *)(param_1 + 1);
    plVar4 = (longlong *)*param_1;
    uVar5 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      uVar7 = (ulonglong)uVar1;
      plVar3 = plVar2;
      plVar6 = plVar4;
      do {
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = *plVar6;
          *plVar6 = 0;
        }
        plVar3 = plVar3 + 1;
        plVar6 = plVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      do {
        if (*plVar4 != 0) {
          FUN_144b3f230();
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *param_1 = plVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c933d0 FUN_144c933d0 body=103 status=ok
// SIG undefined FUN_144c933d0(void)

void FUN_144c933d0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c93440 FUN_144c93440 body=123 status=ok
// SIG undefined FUN_144c93440(void)

void FUN_144c93440(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c934c0 FUN_144c934c0 body=121 status=ok
// SIG undefined FUN_144c934c0(void)

undefined8 * FUN_144c934c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c933d0(param_2,&PTR_vftable_14c6e47a0);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar1 = FUN_144b3d480();
  param_2[2] = uVar1;
  *(undefined4 *)(param_2 + 3) = 0;
  return param_1;
}



// FUNCTION 144c93540 FUN_144c93540 body=279 status=ok
// SIG undefined FUN_144c93540(void)

void FUN_144c93540(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8);
    FUN_144b3ec00(param_1 + 2);
  }
  uVar7 = (longlong)(int)param_1[1] * 3;
  if (((int)param_1[1] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  uVar11 = 0;
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    do {
      iVar1 = *(int *)(lVar12 + *param_1);
      uVar9 = iVar1 * -0x61c8864f;
      iVar2 = *(int *)(lVar12 + 4 + *param_1);
      uVar10 = iVar2 * -0x61c8864f;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar1 * -0x4f000000;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
               iVar2 * -0x4f000000;
      lVar3 = param_1[2];
      uVar9 = uVar10 + uVar9 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar9;
      uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
      puVar8 = (uint *)(lVar3 + uVar7 * 8);
      if (-1 < *(int *)(lVar3 + 4 + uVar7 * 8)) {
        do {
          uVar7 = ((longlong)puVar8 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar8 = (uint *)(lVar3 + uVar7 * 8);
        } while (-1 < *(int *)(lVar3 + 4 + uVar7 * 8));
      }
      puVar8[1] = uVar11;
      lVar12 = lVar12 + 0x10;
      uVar11 = uVar11 + 1;
      *puVar8 = uVar9;
    } while ((int)uVar11 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c93660 FUN_144c93660 body=201 status=ok
// SIG undefined FUN_144c93660(void)

void FUN_144c93660(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
    ;
    uVar1 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar1;
    puVar2 = (undefined4 *)*param_1;
    uVar7 = (ulonglong)uVar1;
    puVar4 = puVar3;
    puVar8 = puVar2;
    if (0 < (int)uVar1) {
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar8;
          puVar4[1] = puVar8[1];
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)(puVar8 + 2) = 0;
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar5 != 0);
      plVar6 = (longlong *)(puVar2 + 2);
      do {
        if (*plVar6 != 0) {
          FUN_144b3f230();
        }
        plVar6 = plVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_1 = puVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c93730 FUN_144c93730 body=195 status=ok
// SIG undefined FUN_144c93730(void)

longlong * FUN_144c93730(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
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



// FUNCTION 144c93800 FUN_144c93800 body=178 status=ok
// SIG undefined FUN_144c93800(void)

void FUN_144c93800(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c938c0 FUN_144c938c0 body=121 status=ok
// SIG undefined FUN_144c938c0(void)

undefined8 * FUN_144c938c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144c93660(param_2,&PTR_vftable_14c6e47a0);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar1 = FUN_144b3d480();
  param_2[2] = uVar1;
  *(undefined4 *)(param_2 + 3) = 0;
  return param_1;
}



// FUNCTION 144c93940 FUN_144c93940 body=18 status=ok
// SIG undefined FUN_144c93940(void)

undefined8 * FUN_144c93940(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eeee0;
  return param_2;
}



// FUNCTION 144c93960 FUN_144c93960 body=1574 status=ok
// SIG undefined FUN_144c93960(void)

longlong FUN_144c93960(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_144b3d910();
    }
    lVar13 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
  }
  plVar11 = (longlong *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  if ((longlong *)(param_2 + 0x38) != plVar11) {
    uVar3 = *(uint *)(param_2 + 0x40);
    lVar13 = *(longlong *)(param_2 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < (int)uVar3) {
      FUN_144c9bd00(plVar11,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
    }
    if ((int)uVar3 < *(int *)(param_1 + 0x40)) {
      puVar15 = (uint *)((longlong)(int)uVar3 * 0x120 + *plVar11);
      puVar12 = (uint *)((longlong)*(int *)(param_1 + 0x40) * 0x120 + *plVar11);
      if (puVar12 != puVar15) {
        puVar12 = puVar12 + 7;
        do {
          puVar2 = puVar12 + -0x48;
          FUN_144bf90d0(puVar12 + -0xd);
          FUN_144c93800(puVar12 + -0x17);
          FUN_144c93440(puVar12 + -0x1f);
          lVar10 = *(longlong *)(puVar12 + -0x4b);
          lVar7 = lVar10 + (longlong)(int)puVar12[-0x49] * 8;
          while (lVar7 != lVar10) {
            plVar14 = (longlong *)(lVar7 + -8);
            lVar7 = lVar7 + -8;
            if (*plVar14 != 0) {
              FUN_144b3f230();
            }
          }
          puVar12[-0x49] = 0;
          if ((-1 < (int)*puVar2) && (*(longlong *)(puVar12 + -0x4b) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -0x4b),
                       (ulonglong)(*puVar2 & 0x7fffffff) << 3);
          }
          puVar12[-0x4b] = 0;
          puVar12[-0x4a] = 0;
          *puVar2 = 0x80000000;
          if (*(longlong *)(puVar12 + -0x4d) != 0) {
            FUN_144b3f230();
          }
          puVar1 = puVar12 + -0x4f;
          if (*(longlong *)(puVar12 + -0x4f) != 0) {
            FUN_144b3f230();
          }
          puVar12 = puVar2;
        } while (puVar1 != puVar15);
      }
    }
    lVar7 = *plVar11;
    uVar5 = uVar3;
    if (*(int *)(param_1 + 0x40) < (int)uVar3) {
      uVar5 = *(uint *)(param_1 + 0x40);
    }
    uVar16 = (ulonglong)uVar5;
    if ((lVar7 != lVar13) && (0 < (int)uVar5)) {
      lVar10 = lVar13 - lVar7;
      do {
        FUN_144c92e80(lVar7,lVar10 + lVar7);
        lVar7 = lVar7 + 0x120;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    lVar13 = (longlong)(int)uVar5 * 0x120 + lVar13;
    if (0 < (int)(uVar3 - uVar5)) {
      uVar16 = (ulonglong)(uVar3 - uVar5);
      lVar7 = *plVar11 + (longlong)(int)uVar5 * 0x120;
      do {
        if (lVar7 != 0) {
          FUN_145004380(lVar7,lVar13);
          lVar13 = lVar13 + 0x120;
        }
        uVar16 = uVar16 - 1;
        lVar7 = lVar7 + 0x120;
      } while (uVar16 != 0);
    }
    *(uint *)(param_1 + 0x40) = uVar3;
  }
  plVar11 = (longlong *)(param_1 + 0x48);
  if ((longlong *)(param_2 + 0x48) != plVar11) {
    iVar4 = *(int *)(param_2 + 0x50);
    plVar14 = *(longlong **)(param_2 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar4) {
      FUN_144c9c040(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    if (iVar4 < *(int *)(param_1 + 0x50)) {
      lVar13 = *plVar11;
      plVar8 = (longlong *)(lVar13 + (longlong)*(int *)(param_1 + 0x50) * 0x18);
      while (plVar8 != (longlong *)(lVar13 + (longlong)iVar4 * 0x18)) {
        lVar7 = plVar8[-2];
        plVar8 = plVar8 + -3;
        if (lVar7 != 0) {
          FUN_144be5d10(lVar7);
          (*DAT_14c787678)(0,lVar7,0);
        }
        if (*plVar8 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar8 = (longlong *)*plVar11;
    iVar6 = iVar4;
    if (*(int *)(param_1 + 0x50) < iVar4) {
      iVar6 = *(int *)(param_1 + 0x50);
    }
    if ((plVar8 != plVar14) && (lVar13 = (longlong)iVar6, 0 < iVar6)) {
      lVar7 = (longlong)plVar8 - (longlong)plVar14;
      plVar9 = plVar14;
      do {
        if (*(longlong *)(lVar7 + (longlong)plVar9) != *plVar9) {
          if (*plVar9 != 0) {
            FUN_144b3d910();
          }
          lVar10 = *(longlong *)(lVar7 + (longlong)plVar9);
          *(longlong *)(lVar7 + (longlong)plVar9) = *plVar9;
          if (lVar10 != 0) {
            FUN_144b3f230();
          }
        }
        *(undefined1 *)(lVar7 + 0x10 + (longlong)plVar9) =
             *(undefined1 *)
              ((longlong)plVar14 + (lVar7 - (longlong)plVar8) + 0x10 + (longlong)plVar9);
        plVar9 = plVar9 + 3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    plVar14 = plVar14 + (longlong)iVar6 * 3;
    if (0 < iVar4 - iVar6) {
      uVar16 = (ulonglong)(uint)(iVar4 - iVar6);
      plVar11 = (longlong *)(*plVar11 + (longlong)iVar6 * 0x18);
      do {
        if (plVar11 != (longlong *)0x0) {
          lVar13 = *plVar14;
          *plVar11 = lVar13;
          if (lVar13 != 0) {
            FUN_144b3d910();
          }
          plVar11[1] = 0;
          *(undefined1 *)(plVar11 + 2) = 0;
          plVar8 = plVar14 + 2;
          plVar14 = plVar14 + 3;
          *(char *)(plVar11 + 2) = (char)*plVar8;
        }
        uVar16 = uVar16 - 1;
        plVar11 = plVar11 + 3;
      } while (uVar16 != 0);
    }
    *(int *)(param_1 + 0x50) = iVar4;
  }
  if (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) {
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_144b3d910();
    }
    lVar13 = *(longlong *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  if (*(longlong *)(param_1 + 0xe0) != *(longlong *)(param_2 + 0xe0)) {
    if (*(longlong *)(param_2 + 0xe0) != 0) {
      FUN_144b3d910();
    }
    lVar13 = *(longlong *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != *(longlong *)(param_2 + 0xe8)) {
    if (*(longlong *)(param_2 + 0xe8) != 0) {
      FUN_144b3d910();
    }
    lVar13 = *(longlong *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != *(longlong *)(param_2 + 0xf0)) {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FUN_144b3d910();
    }
    lVar13 = *(longlong *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 144c93f90 FUN_144c93f90 body=87 status=ok
// SIG undefined FUN_144c93f90(void)

undefined8 FUN_144c93f90(undefined8 param_1,ulonglong param_2)

{
  FUN_144ca1fa0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 144c93ff0 FUN_144c93ff0 body=18 status=ok
// SIG undefined FUN_144c93ff0(void)

undefined8 * FUN_144c93ff0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ee0e0;
  return param_2;
}



// FUNCTION 144c94010 FUN_144c94010 body=18 status=ok
// SIG undefined FUN_144c94010(void)

undefined8 * FUN_144c94010(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ee270;
  return param_2;
}



// FUNCTION 144c94030 FUN_144c94030 body=18 status=ok
// SIG undefined FUN_144c94030(void)

undefined8 * FUN_144c94030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eefa0;
  return param_2;
}



// FUNCTION 144c94050 FUN_144c94050 body=18 status=ok
// SIG undefined FUN_144c94050(void)

undefined8 * FUN_144c94050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5b00;
  return param_2;
}



// FUNCTION 144c94070 FUN_144c94070 body=983 status=ok
// SIG undefined FUN_144c94070(void)

undefined8 * FUN_144c94070(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiSmoothPath::Details::EdgePath::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar16 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar6 = *(uint *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (0 < (int)uVar6) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 * 0x30);
    param_1[4] = uVar7;
    puVar8 = (undefined4 *)(lVar2 + 0xc);
    *(uint *)(param_1 + 5) = uVar6;
    uVar13 = (ulonglong)uVar6;
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    puVar9 = (undefined8 *)param_1[4];
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = *(undefined8 *)(puVar8 + -3);
        *(undefined4 *)(puVar9 + 1) = puVar8[-1];
        *(undefined4 *)((longlong)puVar9 + 0xc) = *puVar8;
        *(undefined4 *)(puVar9 + 2) = puVar8[1];
        *(undefined4 *)((longlong)puVar9 + 0x14) = puVar8[2];
        puVar11 = puVar8 + 5;
        uVar3 = puVar8[6];
        uVar4 = puVar8[7];
        uVar5 = puVar8[8];
        puVar8 = puVar8 + 0xc;
        *(undefined4 *)(puVar9 + 4) = *puVar11;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
        *(undefined4 *)(puVar9 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
      }
      uVar13 = uVar13 - 1;
      puVar9 = puVar9 + 6;
    } while (uVar13 != 0);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x38);
  puVar10 = *(undefined1 **)(param_2 + 0x30);
  if (0 < iVar1) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar1 * 0x2c);
    param_1[6] = uVar7;
    *(int *)(param_1 + 7) = iVar1;
    *(int *)((longlong)param_1 + 0x3c) = iVar1;
    puVar15 = (undefined1 *)param_1[6];
    if (3 < iVar1) {
      puVar9 = (undefined8 *)(puVar10 + 0x24);
      uVar6 = (iVar1 - 4U >> 2) + 1;
      puVar12 = (undefined8 *)(puVar10 + 0x1c);
      puVar14 = (undefined8 *)(puVar10 + 0x14);
      uVar13 = (ulonglong)uVar6;
      puVar8 = (undefined4 *)(puVar15 + 0x34);
      iVar16 = uVar6 * 4;
      do {
        if (puVar15 != (undefined1 *)0x0) {
          *puVar15 = *puVar10;
          puVar8[-0xc] = *(undefined4 *)(puVar10 + 4);
          puVar8[-0xb] = *(undefined4 *)(puVar10 + 8);
          puVar8[-10] = *(undefined4 *)(puVar10 + 0xc);
          puVar11 = (undefined4 *)(puVar10 + 0x10);
          puVar10 = puVar10 + 0x2c;
          puVar8[-9] = *puVar11;
          uVar7 = *puVar14;
          puVar14 = (undefined8 *)((longlong)puVar14 + 0x2c);
          *(undefined8 *)(puVar8 + -8) = uVar7;
          uVar7 = *puVar12;
          puVar12 = (undefined8 *)((longlong)puVar12 + 0x2c);
          *(undefined8 *)(puVar8 + -6) = uVar7;
          uVar7 = *puVar9;
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x2c);
          *(undefined8 *)(puVar8 + -4) = uVar7;
        }
        if (puVar8 + -2 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar8 + -2) = *puVar10;
          puVar8[-1] = *(undefined4 *)(puVar10 + 4);
          *puVar8 = *(undefined4 *)(puVar10 + 8);
          puVar8[1] = *(undefined4 *)(puVar10 + 0xc);
          puVar11 = (undefined4 *)(puVar10 + 0x10);
          puVar10 = puVar10 + 0x2c;
          puVar8[2] = *puVar11;
          uVar7 = *puVar14;
          puVar14 = (undefined8 *)((longlong)puVar14 + 0x2c);
          *(undefined8 *)(puVar8 + 3) = uVar7;
          uVar7 = *puVar12;
          puVar12 = (undefined8 *)((longlong)puVar12 + 0x2c);
          *(undefined8 *)(puVar8 + 5) = uVar7;
          uVar7 = *puVar9;
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x2c);
          *(undefined8 *)(puVar8 + 7) = uVar7;
        }
        if (puVar8 + 9 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar8 + 9) = *puVar10;
          puVar8[10] = *(undefined4 *)(puVar10 + 4);
          puVar8[0xb] = *(undefined4 *)(puVar10 + 8);
          puVar8[0xc] = *(undefined4 *)(puVar10 + 0xc);
          puVar11 = (undefined4 *)(puVar10 + 0x10);
          puVar10 = puVar10 + 0x2c;
          puVar8[0xd] = *puVar11;
          uVar7 = *puVar14;
          puVar14 = (undefined8 *)((longlong)puVar14 + 0x2c);
          *(undefined8 *)(puVar8 + 0xe) = uVar7;
          uVar7 = *puVar12;
          puVar12 = (undefined8 *)((longlong)puVar12 + 0x2c);
          *(undefined8 *)(puVar8 + 0x10) = uVar7;
          uVar7 = *puVar9;
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x2c);
          *(undefined8 *)(puVar8 + 0x12) = uVar7;
        }
        if (puVar8 + 0x14 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar8 + 0x14) = *puVar10;
          puVar8[0x15] = *(undefined4 *)(puVar10 + 4);
          puVar8[0x16] = *(undefined4 *)(puVar10 + 8);
          puVar8[0x17] = *(undefined4 *)(puVar10 + 0xc);
          puVar11 = (undefined4 *)(puVar10 + 0x10);
          puVar10 = puVar10 + 0x2c;
          puVar8[0x18] = *puVar11;
          uVar7 = *puVar14;
          puVar14 = (undefined8 *)((longlong)puVar14 + 0x2c);
          *(undefined8 *)(puVar8 + 0x19) = uVar7;
          uVar7 = *puVar12;
          puVar12 = (undefined8 *)((longlong)puVar12 + 0x2c);
          *(undefined8 *)(puVar8 + 0x1b) = uVar7;
          uVar7 = *puVar9;
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x2c);
          *(undefined8 *)(puVar8 + 0x1d) = uVar7;
        }
        puVar15 = puVar15 + 0xb0;
        puVar8 = puVar8 + 0x2c;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      if (iVar1 <= iVar16) goto LAB_144c94382;
    }
    puVar11 = (undefined4 *)(puVar10 + 8);
    puVar8 = (undefined4 *)(puVar15 + 8);
    uVar13 = (ulonglong)(uint)(iVar1 - iVar16);
    do {
      if (puVar8 + -2 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar8 + -2) = *(undefined1 *)(puVar11 + -2);
        puVar8[-1] = puVar11[-1];
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        *(undefined8 *)(puVar8 + 3) = *(undefined8 *)(puVar11 + 3);
        *(undefined8 *)(puVar8 + 5) = *(undefined8 *)(puVar11 + 5);
        puVar9 = (undefined8 *)(puVar11 + 7);
        puVar11 = puVar11 + 0xb;
        *(undefined8 *)(puVar8 + 7) = *puVar9;
      }
      puVar8 = puVar8 + 0xb;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_144c94382:
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar6 = *(uint *)(param_2 + 0x48);
  puVar9 = *(undefined8 **)(param_2 + 0x40);
  if (0 < (int)uVar6) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 * 0x24);
    param_1[8] = uVar7;
    uVar13 = (ulonglong)uVar6;
    *(uint *)(param_1 + 9) = uVar6;
    *(uint *)((longlong)param_1 + 0x4c) = uVar6;
    puVar12 = (undefined8 *)param_1[8];
    do {
      if (puVar12 != (undefined8 *)0x0) {
        uVar7 = puVar9[1];
        *puVar12 = *puVar9;
        puVar12[1] = uVar7;
        uVar7 = puVar9[3];
        puVar12[2] = puVar9[2];
        puVar12[3] = uVar7;
        puVar14 = puVar9 + 4;
        puVar9 = (undefined8 *)((longlong)puVar9 + 0x24);
        *(undefined4 *)(puVar12 + 4) = *(undefined4 *)puVar14;
      }
      uVar13 = uVar13 - 1;
      puVar12 = (undefined8 *)((longlong)puVar12 + 0x24);
    } while (uVar13 != 0);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 144c94450 FUN_144c94450 body=121 status=ok
// SIG undefined FUN_144c94450(void)

void FUN_144c94450(undefined8 *param_1,longlong *param_2)

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
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 5)
    ;
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
        }
        puVar3 = puVar3 + 4;
        puVar4 = puVar4 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = puVar2;
  }
  return;
}



// FUNCTION 144c944d0 FUN_144c944d0 body=104 status=ok
// SIG undefined FUN_144c944d0(void)

void FUN_144c944d0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 5);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144c94540 FUN_144c94540 body=101 status=ok
// SIG undefined FUN_144c94540(void)

void FUN_144c94540(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x1c);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x1c);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c945b0 FUN_144c945b0 body=435 status=ok
// SIG undefined FUN_144c945b0(void)

void FUN_144c945b0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar4 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x28);
    uVar2 = *(uint *)(param_1 + 1);
    puVar3 = (undefined8 *)*param_1;
    uVar7 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      puVar6 = (undefined4 *)(lVar4 + 0x1c);
      uVar8 = (ulonglong)uVar2;
      puVar9 = (undefined4 *)((longlong)puVar3 + 0x1c);
      puVar10 = puVar3;
      do {
        puVar1 = (undefined8 *)(puVar6 + -7);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar6[-5] = 0;
          puVar6[-4] = 0x80000000;
          FUN_144c94540(puVar10,&PTR_vftable_14c6e47a0);
          *puVar1 = *puVar10;
          puVar6[-5] = puVar9[-5];
          puVar6[-4] = puVar9[-4];
          *puVar10 = 0;
          *(undefined8 *)(puVar9 + -5) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          puVar6[-1] = 0;
          *puVar6 = 0x80000000;
          FUN_144c94450(puVar9 + -3,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar6 + -3) = *(undefined8 *)(puVar9 + -3);
          puVar6[-1] = puVar9[-1];
          *puVar6 = *puVar9;
          *(undefined8 *)(puVar9 + -3) = 0;
          *(undefined8 *)(puVar9 + -1) = 0;
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar9 + 1);
        }
        puVar6 = puVar6 + 10;
        puVar10 = puVar10 + 5;
        puVar9 = puVar9 + 10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      puVar5 = (uint *)((longlong)puVar3 + 0xc);
      do {
        FUN_144c944d0(puVar5 + 1);
        puVar5[-1] = 0;
        if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                     (ulonglong)(*puVar5 & 0x7fffffff) * 0x1c);
        }
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        *puVar5 = 0x80000000;
        puVar5 = puVar5 + 10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_1 = lVar4;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144c94770 FUN_144c94770 body=207 status=ok
// SIG undefined FUN_144c94770(void)

void FUN_144c94770(longlong *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 10 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 10 + 3;
    do {
      puVar1 = puVar4 + -10;
      FUN_144c944d0(puVar4 + -9);
      puVar4[-0xb] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar4 + -0xd) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0xd),
                   (ulonglong)(*puVar1 & 0x7fffffff) * 0x1c);
      }
      puVar2 = puVar4 + -0xd;
      *puVar1 = 0x80000000;
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar4 = puVar1;
    } while (puVar2 != puVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x28);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c94840 FUN_144c94840 body=396 status=ok
// SIG undefined FUN_144c94840(void)

undefined8 * FUN_144c94840(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar4 = *(uint *)(param_2 + 1);
  lVar5 = *param_2;
  if (0 < (int)uVar4) {
    puVar9 = (undefined8 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 * 0x28);
    *param_1 = puVar9;
    puVar13 = (uint *)(lVar5 + 8);
    *(uint *)(param_1 + 1) = uVar4;
    uVar15 = (ulonglong)uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0x80000000;
        uVar4 = *puVar13;
        puVar12 = *(undefined4 **)(puVar13 + -2);
        if (0 < (int)uVar4) {
          puVar10 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 * 0x1c);
          *puVar9 = puVar10;
          *(uint *)(puVar9 + 1) = uVar4;
          uVar14 = (ulonglong)uVar4;
          *(uint *)((longlong)puVar9 + 0xc) = uVar4;
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar6 = puVar12[1];
              uVar7 = puVar12[2];
              uVar8 = puVar12[3];
              *puVar10 = *puVar12;
              puVar10[1] = uVar6;
              puVar10[2] = uVar7;
              puVar10[3] = uVar8;
              *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar12 + 4);
              puVar1 = puVar12 + 6;
              puVar12 = puVar12 + 7;
              puVar10[6] = *puVar1;
            }
            uVar14 = uVar14 - 1;
            puVar10 = puVar10 + 7;
          } while (uVar14 != 0);
        }
        *(undefined4 *)((longlong)puVar9 + 0x1c) = 0x80000000;
        puVar9[2] = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        uVar4 = puVar13[4];
        puVar12 = *(undefined4 **)(puVar13 + 2);
        if (0 < (int)uVar4) {
          uVar11 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 5);
          puVar9[2] = uVar11;
          uVar14 = (ulonglong)uVar4;
          *(uint *)(puVar9 + 3) = uVar4;
          *(uint *)((longlong)puVar9 + 0x1c) = uVar4;
          puVar10 = (undefined4 *)puVar9[2];
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar6 = puVar12[1];
              uVar7 = puVar12[2];
              uVar8 = puVar12[3];
              *puVar10 = *puVar12;
              puVar10[1] = uVar6;
              puVar10[2] = uVar7;
              puVar10[3] = uVar8;
              puVar2 = (undefined8 *)(puVar12 + 4);
              uVar11 = *(undefined8 *)(puVar12 + 6);
              puVar12 = puVar12 + 8;
              *(undefined8 *)(puVar10 + 4) = *puVar2;
              *(undefined8 *)(puVar10 + 6) = uVar11;
            }
            uVar14 = uVar14 - 1;
            puVar10 = puVar10 + 8;
          } while (uVar14 != 0);
        }
        puVar3 = puVar13 + 6;
        puVar13 = puVar13 + 10;
        *(char *)(puVar9 + 4) = (char)*puVar3;
      }
      uVar15 = uVar15 - 1;
      puVar9 = puVar9 + 5;
    } while (uVar15 != 0);
  }
  return param_1;
}



// FUNCTION 144c949d0 FUN_144c949d0 body=1079 status=ok
// SIG undefined FUN_144c949d0(void)

longlong * FUN_144c949d0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  
  if (param_2 != param_1) {
    iVar7 = (int)param_2[1];
    lVar9 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
      FUN_144ca08e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    if (iVar7 < (int)param_1[1]) {
      puVar21 = (uint *)(*param_1 + (longlong)(int)param_1[1] * 0x28);
      puVar4 = (uint *)(*param_1 + (longlong)iVar7 * 0x28);
      if (puVar21 != puVar4) {
        puVar21 = puVar21 + 3;
        do {
          puVar5 = puVar21 + -10;
          FUN_144c944d0(puVar21 + -9);
          puVar21[-0xb] = 0;
          if ((-1 < (int)*puVar5) && (*(longlong *)(puVar21 + -0xd) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar21 + -0xd),
                       (ulonglong)(*puVar5 & 0x7fffffff) * 0x1c);
          }
          puVar1 = puVar21 + -0xd;
          *puVar5 = 0x80000000;
          puVar1[0] = 0;
          puVar1[1] = 0;
          puVar21 = puVar5;
        } while (puVar1 != puVar4);
      }
    }
    lVar15 = *param_1;
    iVar10 = iVar7;
    if ((int)param_1[1] < iVar7) {
      iVar10 = (int)param_1[1];
    }
    if ((lVar15 != lVar9) && (lVar26 = (longlong)iVar10, 0 < iVar10)) {
      puVar21 = (uint *)(lVar15 + 0x1c);
      lVar15 = lVar9 - lVar15;
      do {
        puVar5 = (uint *)(lVar15 + -0x1c + (longlong)puVar21);
        puVar4 = puVar21 + -7;
        if (puVar5 != puVar4) {
          uVar18 = *(undefined8 *)puVar5;
          uVar8 = *(uint *)(lVar15 + -0x14 + (longlong)puVar21);
          if ((int)(puVar21[-4] & 0x7fffffff) < (int)uVar8) {
            FUN_144ca12b0(puVar4,&PTR_vftable_14c6e47a0,(longlong)(int)uVar8);
          }
          FUN_144b3d470(*(undefined8 *)puVar4,uVar18,(longlong)(int)uVar8 * 0x1c);
          puVar21[-5] = uVar8;
        }
        puVar5 = (uint *)(lVar15 + -0xc + (longlong)puVar21);
        puVar4 = puVar21 + -3;
        if (puVar5 != puVar4) {
          puVar22 = *(undefined4 **)puVar5;
          uVar8 = *(uint *)(lVar15 + -4 + (longlong)puVar21);
          if ((int)(*puVar21 & 0x7fffffff) < (int)uVar8) {
            FUN_144ca11f0(puVar4,&PTR_vftable_14c6e47a0,(longlong)(int)uVar8);
          }
          puVar17 = *(undefined4 **)puVar4;
          uVar11 = uVar8;
          if ((int)puVar21[-1] < (int)uVar8) {
            uVar11 = puVar21[-1];
          }
          if ((puVar17 != puVar22) && (lVar19 = (longlong)(int)uVar11, 0 < (int)uVar11)) {
            puVar16 = puVar17;
            do {
              puVar6 = (undefined4 *)(((longlong)puVar22 - (longlong)puVar17) + (longlong)puVar16);
              uVar12 = puVar6[1];
              uVar13 = puVar6[2];
              uVar14 = puVar6[3];
              *puVar16 = *puVar6;
              puVar16[1] = uVar12;
              puVar16[2] = uVar13;
              puVar16[3] = uVar14;
              puVar25 = (undefined8 *)
                        (((longlong)puVar22 - (longlong)puVar17) + -0x10 + (longlong)(puVar16 + 8));
              uVar18 = puVar25[1];
              *(undefined8 *)(puVar16 + 4) = *puVar25;
              *(undefined8 *)(puVar16 + 6) = uVar18;
              lVar19 = lVar19 + -1;
              puVar16 = puVar16 + 8;
            } while (lVar19 != 0);
          }
          puVar22 = puVar22 + (longlong)(int)uVar11 * 8;
          if (0 < (int)(uVar8 - uVar11)) {
            uVar20 = (ulonglong)(uVar8 - uVar11);
            puVar17 = (undefined4 *)(*(longlong *)(puVar21 + -3) + (longlong)(int)uVar11 * 0x20);
            do {
              if (puVar17 != (undefined4 *)0x0) {
                uVar12 = puVar22[1];
                uVar13 = puVar22[2];
                uVar14 = puVar22[3];
                *puVar17 = *puVar22;
                puVar17[1] = uVar12;
                puVar17[2] = uVar13;
                puVar17[3] = uVar14;
                puVar25 = (undefined8 *)(puVar22 + 4);
                uVar18 = *(undefined8 *)(puVar22 + 6);
                puVar22 = puVar22 + 8;
                *(undefined8 *)(puVar17 + 4) = *puVar25;
                *(undefined8 *)(puVar17 + 6) = uVar18;
              }
              uVar20 = uVar20 - 1;
              puVar17 = puVar17 + 8;
            } while (uVar20 != 0);
          }
          puVar21[-1] = uVar8;
        }
        *(undefined1 *)(puVar21 + 1) = *(undefined1 *)((longlong)puVar21 + lVar15 + 4);
        puVar21 = puVar21 + 10;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    plVar23 = (longlong *)(lVar9 + (longlong)iVar10 * 0x28);
    if (0 < iVar7 - iVar10) {
      uVar20 = (ulonglong)(uint)(iVar7 - iVar10);
      puVar25 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
      do {
        if (puVar25 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)puVar25 + 0xc) = 0x80000000;
          *puVar25 = 0;
          *(undefined4 *)(puVar25 + 1) = 0;
          uVar8 = *(uint *)(plVar23 + 1);
          puVar22 = (undefined4 *)0x0;
          if ((undefined4 *)*plVar23 != (undefined4 *)0x0) {
            puVar22 = (undefined4 *)*plVar23;
          }
          if (0 < (int)uVar8) {
            puVar17 = (undefined4 *)
                      (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                (&PTR_vftable_14c6e47a0,(longlong)(int)uVar8 * 0x1c);
            *puVar25 = puVar17;
            *(uint *)(puVar25 + 1) = uVar8;
            uVar24 = (ulonglong)uVar8;
            *(uint *)((longlong)puVar25 + 0xc) = uVar8;
            do {
              if (puVar17 != (undefined4 *)0x0) {
                uVar12 = puVar22[1];
                uVar13 = puVar22[2];
                uVar14 = puVar22[3];
                *puVar17 = *puVar22;
                puVar17[1] = uVar12;
                puVar17[2] = uVar13;
                puVar17[3] = uVar14;
                *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar22 + 4);
                puVar16 = puVar22 + 6;
                puVar22 = puVar22 + 7;
                puVar17[6] = *puVar16;
              }
              uVar24 = uVar24 - 1;
              puVar17 = puVar17 + 7;
            } while (uVar24 != 0);
          }
          puVar25[2] = 0;
          *(undefined4 *)(puVar25 + 3) = 0;
          *(undefined4 *)((longlong)puVar25 + 0x1c) = 0x80000000;
          uVar8 = *(uint *)(plVar23 + 3);
          puVar22 = (undefined4 *)0x0;
          if ((undefined4 *)plVar23[2] != (undefined4 *)0x0) {
            puVar22 = (undefined4 *)plVar23[2];
          }
          if (0 < (int)uVar8) {
            uVar18 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                               (&PTR_vftable_14c6e47a0,(longlong)(int)uVar8 << 5);
            puVar25[2] = uVar18;
            uVar24 = (ulonglong)uVar8;
            *(uint *)(puVar25 + 3) = uVar8;
            *(uint *)((longlong)puVar25 + 0x1c) = uVar8;
            puVar17 = (undefined4 *)puVar25[2];
            do {
              if (puVar17 != (undefined4 *)0x0) {
                uVar12 = puVar22[1];
                uVar13 = puVar22[2];
                uVar14 = puVar22[3];
                *puVar17 = *puVar22;
                puVar17[1] = uVar12;
                puVar17[2] = uVar13;
                puVar17[3] = uVar14;
                puVar2 = (undefined8 *)(puVar22 + 4);
                uVar18 = *(undefined8 *)(puVar22 + 6);
                puVar22 = puVar22 + 8;
                *(undefined8 *)(puVar17 + 4) = *puVar2;
                *(undefined8 *)(puVar17 + 6) = uVar18;
              }
              uVar24 = uVar24 - 1;
              puVar17 = puVar17 + 8;
            } while (uVar24 != 0);
          }
          plVar3 = plVar23 + 4;
          plVar23 = plVar23 + 5;
          *(char *)(puVar25 + 4) = (char)*plVar3;
        }
        uVar20 = uVar20 - 1;
        puVar25 = puVar25 + 5;
      } while (uVar20 != 0);
    }
    *(int *)(param_1 + 1) = iVar7;
  }
  return param_1;
}



// FUNCTION 144c94e10 FUN_144c94e10 body=1029 status=ok
// SIG undefined FUN_144c94e10(void)

longlong FUN_144c94e10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_144b3d910();
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    if (lVar5 != 0) {
      FUN_144b3f230();
    }
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((longlong *)(param_2 + 0x20) != plVar1) {
    iVar4 = *(int *)(param_2 + 0x28);
    lVar5 = *(longlong *)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar4) {
      FUN_144c9c810(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    if (iVar4 < *(int *)(param_1 + 0x28)) {
      lVar16 = *plVar1;
      lVar14 = (longlong)*(int *)(param_1 + 0x28) * 0x140 + *plVar1;
      while (lVar14 != (longlong)iVar4 * 0x140 + lVar16) {
        lVar11 = lVar14 + -0x140;
        FUN_144c94770(lVar14 + -0xa0);
        if (*(longlong *)(lVar14 + -0xa8) != 0) {
          FUN_144b3f230();
        }
        plVar2 = (longlong *)(lVar14 + -0xb0);
        lVar14 = lVar11;
        if (*plVar2 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar16 = *plVar1;
    iVar6 = iVar4;
    if (*(int *)(param_1 + 0x28) < iVar4) {
      iVar6 = *(int *)(param_1 + 0x28);
    }
    if ((lVar16 != lVar5) && (lVar14 = (longlong)iVar6, 0 < iVar6)) {
      puVar12 = (undefined8 *)(lVar16 + 0x20);
      lVar16 = lVar5 - lVar16;
      do {
        *(undefined4 *)(puVar12 + -4) = *(undefined4 *)((longlong)puVar12 + lVar16 + -0x20);
        puVar3 = (undefined8 *)(lVar16 + -0x10 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[-2] = *puVar3;
        puVar12[-1] = uVar10;
        uVar10 = ((undefined8 *)(lVar16 + (longlong)puVar12))[1];
        *puVar12 = *(undefined8 *)(lVar16 + (longlong)puVar12);
        puVar12[1] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0x10 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[2] = *puVar3;
        puVar12[3] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0x20 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[4] = *puVar3;
        puVar12[5] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0x30 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[6] = *puVar3;
        puVar12[7] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0x40 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[8] = *puVar3;
        puVar12[9] = uVar10;
        puVar17 = (undefined4 *)(lVar16 + 0x50 + (longlong)puVar12);
        uVar7 = puVar17[1];
        uVar8 = puVar17[2];
        uVar9 = puVar17[3];
        *(undefined4 *)(puVar12 + 10) = *puVar17;
        *(undefined4 *)((longlong)puVar12 + 0x54) = uVar7;
        *(undefined4 *)(puVar12 + 0xb) = uVar8;
        *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar9;
        puVar17 = (undefined4 *)(lVar16 + 0x60 + (longlong)puVar12);
        uVar7 = puVar17[1];
        uVar8 = puVar17[2];
        uVar9 = puVar17[3];
        *(undefined4 *)(puVar12 + 0xc) = *puVar17;
        *(undefined4 *)((longlong)puVar12 + 100) = uVar7;
        *(undefined4 *)(puVar12 + 0xd) = uVar8;
        *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar9;
        lVar11 = *(longlong *)(lVar16 + 0x70 + (longlong)puVar12);
        if (puVar12[0xe] != lVar11) {
          if (lVar11 != 0) {
            FUN_144b3d910();
          }
          lVar11 = puVar12[0xe];
          puVar12[0xe] = *(undefined8 *)(lVar16 + 0x70 + (longlong)puVar12);
          if (lVar11 != 0) {
            FUN_144b3f230();
          }
        }
        lVar11 = *(longlong *)((longlong)puVar12 + lVar16 + 0x78);
        if (puVar12[0xf] != lVar11) {
          if (lVar11 != 0) {
            FUN_144b3d910();
          }
          lVar11 = puVar12[0xf];
          puVar12[0xf] = *(undefined8 *)((longlong)puVar12 + lVar16 + 0x78);
          if (lVar11 != 0) {
            FUN_144b3f230();
          }
        }
        FUN_144c949d0(puVar12 + 0x10,lVar16 + 0x80 + (longlong)puVar12);
        *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)((longlong)puVar12 + lVar16 + 0x90);
        puVar3 = (undefined8 *)((longlong)puVar12 + lVar16 + 0xa0);
        uVar10 = puVar3[1];
        puVar12[0x14] = *puVar3;
        puVar12[0x15] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0xb0 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[0x16] = *puVar3;
        puVar12[0x17] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0xc0 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[0x18] = *puVar3;
        puVar12[0x19] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0xd0 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[0x1a] = *puVar3;
        puVar12[0x1b] = uVar10;
        puVar3 = (undefined8 *)((longlong)puVar12 + lVar16 + 0xe0);
        uVar10 = puVar3[1];
        puVar12[0x1c] = *puVar3;
        puVar12[0x1d] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0xf0 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[0x1e] = *puVar3;
        puVar12[0x1f] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0x100 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[0x20] = *puVar3;
        puVar12[0x21] = uVar10;
        puVar3 = (undefined8 *)(lVar16 + 0x110 + (longlong)puVar12);
        uVar10 = puVar3[1];
        puVar12[0x22] = *puVar3;
        puVar12[0x23] = uVar10;
        puVar12 = puVar12 + 0x28;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar17 = (undefined4 *)(lVar5 + (longlong)iVar6 * 0x140);
    if (0 < iVar4 - iVar6) {
      puVar12 = (undefined8 *)(puVar17 + 0xc);
      uVar13 = (ulonglong)(uint)(iVar4 - iVar6);
      puVar15 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x140);
      do {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = *puVar17;
          uVar10 = puVar12[-3];
          *(undefined8 *)(puVar15 + 4) = puVar12[-4];
          *(undefined8 *)(puVar15 + 6) = uVar10;
          uVar10 = puVar12[-1];
          *(undefined8 *)(puVar15 + 8) = puVar12[-2];
          *(undefined8 *)(puVar15 + 10) = uVar10;
          uVar10 = puVar12[1];
          *(undefined8 *)(puVar15 + 0xc) = *puVar12;
          *(undefined8 *)(puVar15 + 0xe) = uVar10;
          uVar10 = puVar12[3];
          *(undefined8 *)(puVar15 + 0x10) = puVar12[2];
          *(undefined8 *)(puVar15 + 0x12) = uVar10;
          uVar10 = puVar12[5];
          *(undefined8 *)(puVar15 + 0x14) = puVar12[4];
          *(undefined8 *)(puVar15 + 0x16) = uVar10;
          uVar10 = puVar12[7];
          *(undefined8 *)(puVar15 + 0x18) = puVar12[6];
          *(undefined8 *)(puVar15 + 0x1a) = uVar10;
          uVar7 = *(undefined4 *)((longlong)puVar12 + 0x44);
          uVar8 = *(undefined4 *)(puVar12 + 9);
          uVar9 = *(undefined4 *)((longlong)puVar12 + 0x4c);
          puVar15[0x1c] = *(undefined4 *)(puVar12 + 8);
          puVar15[0x1d] = uVar7;
          puVar15[0x1e] = uVar8;
          puVar15[0x1f] = uVar9;
          uVar7 = *(undefined4 *)((longlong)puVar12 + 0x54);
          uVar8 = *(undefined4 *)(puVar12 + 0xb);
          uVar9 = *(undefined4 *)((longlong)puVar12 + 0x5c);
          puVar15[0x20] = *(undefined4 *)(puVar12 + 10);
          puVar15[0x21] = uVar7;
          puVar15[0x22] = uVar8;
          puVar15[0x23] = uVar9;
          lVar5 = puVar12[0xc];
          *(longlong *)(puVar15 + 0x24) = lVar5;
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = puVar12[0xd];
          *(longlong *)(puVar15 + 0x26) = lVar5;
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          FUN_144c94840(puVar15 + 0x28,puVar12 + 0xe);
          puVar17 = puVar17 + 0x50;
          puVar15[0x2c] = *(undefined4 *)(puVar12 + 0x10);
          uVar10 = puVar12[0x13];
          *(undefined8 *)(puVar15 + 0x30) = puVar12[0x12];
          *(undefined8 *)(puVar15 + 0x32) = uVar10;
          uVar10 = puVar12[0x15];
          *(undefined8 *)(puVar15 + 0x34) = puVar12[0x14];
          *(undefined8 *)(puVar15 + 0x36) = uVar10;
          uVar10 = puVar12[0x17];
          *(undefined8 *)(puVar15 + 0x38) = puVar12[0x16];
          *(undefined8 *)(puVar15 + 0x3a) = uVar10;
          uVar10 = puVar12[0x19];
          *(undefined8 *)(puVar15 + 0x3c) = puVar12[0x18];
          *(undefined8 *)(puVar15 + 0x3e) = uVar10;
          uVar10 = puVar12[0x1b];
          *(undefined8 *)(puVar15 + 0x40) = puVar12[0x1a];
          *(undefined8 *)(puVar15 + 0x42) = uVar10;
          uVar10 = puVar12[0x1d];
          *(undefined8 *)(puVar15 + 0x44) = puVar12[0x1c];
          *(undefined8 *)(puVar15 + 0x46) = uVar10;
          uVar10 = puVar12[0x1f];
          *(undefined8 *)(puVar15 + 0x48) = puVar12[0x1e];
          *(undefined8 *)(puVar15 + 0x4a) = uVar10;
          puVar3 = puVar12 + 0x20;
          uVar10 = puVar12[0x21];
          puVar12 = puVar12 + 0x28;
          *(undefined8 *)(puVar15 + 0x4c) = *puVar3;
          *(undefined8 *)(puVar15 + 0x4e) = uVar10;
        }
        uVar13 = uVar13 - 1;
        puVar15 = puVar15 + 0x50;
      } while (uVar13 != 0);
    }
    *(int *)(param_1 + 0x28) = iVar4;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}



// FUNCTION 144c95220 FUN_144c95220 body=122 status=ok
// SIG undefined FUN_144c95220(void)

undefined4 * FUN_144c95220(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  FUN_14382139c(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 144c952a0 FUN_144c952a0 body=166 status=ok
// SIG undefined FUN_144c952a0(void)

undefined8 * FUN_144c952a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_2;
  if (0 < (int)uVar2) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar2;
    uVar5 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 2;
        puVar3[1] = *puVar1;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c95350 FUN_144c95350 body=214 status=ok
// SIG undefined FUN_144c95350(void)

undefined8 * FUN_144c95350(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x28);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar1;
    puVar4 = (undefined1 *)(lVar2 + 0xd);
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(puVar4 + -0xd);
        puVar3[2] = *(undefined4 *)(puVar4 + -5);
        *(undefined1 *)(puVar3 + 3) = puVar4[-1];
        *(undefined1 *)((longlong)puVar3 + 0xd) = *puVar4;
        FUN_144c90410(puVar3 + 4,puVar4 + 3);
        puVar4 = puVar4 + 0x28;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 10;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c95430 FUN_144c95430 body=318 status=ok
// SIG undefined FUN_144c95430(void)

undefined8 * FUN_144c95430(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if (0 < (int)uVar2) {
    puVar4 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
    *param_1 = puVar4;
    puVar8 = (undefined8 *)(lVar3 + 8);
    *(uint *)(param_1 + 1) = uVar2;
    uVar10 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(puVar8 + -1);
        *(undefined8 *)(puVar4 + 2) = 0;
        puVar4[4] = 0;
        puVar4[5] = 0x80000000;
        uVar2 = *(uint *)(puVar8 + 1);
        puVar7 = (undefined4 *)*puVar8;
        if (0 < (int)uVar2) {
          uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                            (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(undefined8 *)(puVar4 + 2) = uVar5;
          uVar9 = (ulonglong)uVar2;
          puVar4[4] = uVar2;
          puVar4[5] = uVar2;
          puVar6 = *(undefined4 **)(puVar4 + 2);
          do {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar7;
              puVar1 = puVar7 + 1;
              puVar7 = puVar7 + 2;
              puVar6[1] = *puVar1;
            }
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 2;
          } while (uVar9 != 0);
        }
        puVar8 = puVar8 + 3;
      }
      uVar10 = uVar10 - 1;
      puVar4 = puVar4 + 6;
    } while (uVar10 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c95570 FUN_144c95570 body=1334 status=ok
// SIG undefined FUN_144c95570(void)

undefined4 * FUN_144c95570(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  
  *param_1 = *param_2;
  if (*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) {
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_144b3d910();
    }
    lVar7 = *(longlong *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    if (lVar7 != 0) {
      FUN_144b3f230();
    }
  }
  puVar1 = (undefined8 *)(param_1 + 4);
  if (puVar1 != (undefined8 *)(param_2 + 4)) {
    iVar5 = param_2[6];
    uVar9 = *(undefined8 *)(param_2 + 4);
    if ((int)(param_1[7] & 0x7fffffff) < iVar5) {
      FUN_144c9e170(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    FUN_144b3d470(*puVar1,uVar9,(longlong)iVar5 * 8);
    param_1[6] = iVar5;
    plVar11 = (longlong *)(param_1 + 8);
    if ((longlong *)(param_2 + 8) != plVar11) {
      lVar7 = *plVar11;
      if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar7,0);
        FUN_144b3ec00(plVar11);
      }
      FUN_140069ea2(plVar11,param_2 + 8);
    }
  }
  plVar11 = (longlong *)(param_1 + 0xc);
  if (plVar11 != (longlong *)(param_2 + 0xc)) {
    lVar7 = *(longlong *)(param_2 + 0xc);
    iVar5 = param_2[0xe];
    if ((int)(param_1[0xf] & 0x7fffffff) < iVar5) {
      FUN_144c9e210(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if (iVar5 < (int)param_1[0xe]) {
      lVar19 = *plVar11;
      for (lVar12 = lVar19 + (longlong)(int)param_1[0xe] * 0x28;
          lVar12 != lVar19 + (longlong)iVar5 * 0x28; lVar12 = lVar12 + -0x28) {
        FUN_144bf90d0(lVar12 + -0x18);
      }
    }
    lVar12 = *plVar11;
    iVar8 = iVar5;
    if ((int)param_1[0xe] < iVar5) {
      iVar8 = param_1[0xe];
    }
    if ((lVar12 != lVar7) && (lVar19 = (longlong)iVar8, 0 < iVar8)) {
      puVar13 = (undefined1 *)(lVar12 + 0xc);
      lVar12 = lVar7 - lVar12;
      do {
        *(undefined4 *)(puVar13 + -0xc) = *(undefined4 *)(puVar13 + lVar12 + -0xc);
        *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(puVar13 + lVar12 + -4);
        *puVar13 = puVar13[lVar12];
        puVar13[1] = puVar13[lVar12 + 1];
        FUN_144c904b0(puVar13 + 4,puVar13 + lVar12 + 4);
        puVar13 = puVar13 + 0x28;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    puVar14 = (undefined4 *)(lVar7 + (longlong)iVar8 * 0x28);
    if (0 < iVar5 - iVar8) {
      puVar13 = (undefined1 *)((longlong)puVar14 + 0xd);
      uVar17 = (ulonglong)(uint)(iVar5 - iVar8);
      puVar18 = (undefined4 *)(*plVar11 + (longlong)iVar8 * 0x28);
      do {
        if (puVar18 != (undefined4 *)0x0) {
          *puVar18 = *puVar14;
          puVar18[2] = *(undefined4 *)(puVar13 + -5);
          *(undefined1 *)(puVar18 + 3) = puVar13[-1];
          *(undefined1 *)((longlong)puVar18 + 0xd) = *puVar13;
          FUN_144c90410(puVar18 + 4,puVar13 + 3);
          puVar14 = puVar14 + 10;
          puVar13 = puVar13 + 0x28;
        }
        uVar17 = uVar17 - 1;
        puVar18 = puVar18 + 10;
      } while (uVar17 != 0);
    }
    param_1[0xe] = iVar5;
    plVar11 = (longlong *)(param_1 + 0x10);
    if ((longlong *)(param_2 + 0x10) != plVar11) {
      lVar7 = *plVar11;
      if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar7,0);
        FUN_144b3ec00(plVar11);
      }
      FUN_140069ea2(plVar11,param_2 + 0x10);
    }
  }
  plVar11 = (longlong *)(param_1 + 0x14);
  if (plVar11 != (longlong *)(param_2 + 0x14)) {
    iVar5 = param_2[0x16];
    lVar7 = *(longlong *)(param_2 + 0x14);
    if ((int)(param_1[0x17] & 0x7fffffff) < iVar5) {
      FUN_144c9e310(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if (iVar5 < (int)param_1[0x16]) {
      puVar14 = (undefined4 *)(*plVar11 + (longlong)(int)param_1[0x16] * 0x18);
      puVar18 = (undefined4 *)(*plVar11 + (longlong)iVar5 * 0x18);
      if (puVar14 != puVar18) {
        puVar14 = puVar14 + 5;
        do {
          puVar14[-7] = 0;
          if ((-1 < (int)puVar14[-6]) && (*(longlong *)(puVar14 + -9) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar14 + -9),
                       (ulonglong)(puVar14[-6] & 0x7fffffff) << 3);
          }
          puVar16 = puVar14 + -0xb;
          *(undefined8 *)(puVar14 + -9) = 0;
          puVar14[-6] = 0x80000000;
          puVar14 = puVar14 + -6;
        } while (puVar16 != puVar18);
      }
    }
    lVar12 = *plVar11;
    iVar8 = iVar5;
    if ((int)param_1[0x16] < iVar5) {
      iVar8 = param_1[0x16];
    }
    if ((lVar12 != lVar7) && (lVar19 = (longlong)iVar8, 0 < iVar8)) {
      puVar15 = (uint *)(lVar12 + 0x14);
      lVar12 = lVar7 - lVar12;
      do {
        puVar2 = puVar15 + -3;
        puVar15[-5] = *(uint *)(lVar12 + -0x14 + (longlong)puVar15);
        puVar4 = (uint *)((longlong)puVar15 + lVar12 + -0xc);
        if (puVar4 != puVar2) {
          uVar9 = *(undefined8 *)puVar4;
          uVar6 = *(uint *)(lVar12 + -4 + (longlong)puVar15);
          if ((int)(*puVar15 & 0x7fffffff) < (int)uVar6) {
            FUN_144ca0e60(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar6);
          }
          FUN_144b3d470(*(undefined8 *)puVar2,uVar9,(longlong)(int)uVar6 * 8);
          puVar15[-1] = uVar6;
        }
        puVar15 = puVar15 + 6;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    puVar14 = (undefined4 *)(lVar7 + (longlong)iVar8 * 0x18);
    if (0 < iVar5 - iVar8) {
      uVar17 = (ulonglong)(uint)(iVar5 - iVar8);
      puVar18 = (undefined4 *)(*plVar11 + (longlong)iVar8 * 0x18);
      do {
        if (puVar18 != (undefined4 *)0x0) {
          *puVar18 = *puVar14;
          *(undefined8 *)(puVar18 + 2) = 0;
          puVar18[4] = 0;
          puVar18[5] = 0x80000000;
          uVar6 = puVar14[4];
          puVar16 = (undefined4 *)0x0;
          if (*(undefined4 **)(puVar14 + 2) != (undefined4 *)0x0) {
            puVar16 = *(undefined4 **)(puVar14 + 2);
          }
          if (0 < (int)uVar6) {
            uVar9 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 << 3);
            *(undefined8 *)(puVar18 + 2) = uVar9;
            uVar20 = (ulonglong)uVar6;
            puVar18[4] = uVar6;
            puVar18[5] = uVar6;
            puVar10 = *(undefined4 **)(puVar18 + 2);
            do {
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = *puVar16;
                puVar3 = puVar16 + 1;
                puVar16 = puVar16 + 2;
                puVar10[1] = *puVar3;
              }
              uVar20 = uVar20 - 1;
              puVar10 = puVar10 + 2;
            } while (uVar20 != 0);
          }
          puVar14 = puVar14 + 6;
        }
        uVar17 = uVar17 - 1;
        puVar18 = puVar18 + 6;
      } while (uVar17 != 0);
    }
    plVar11 = (longlong *)(param_1 + 0x18);
    param_1[0x16] = iVar5;
    if ((longlong *)(param_2 + 0x18) != plVar11) {
      lVar7 = *plVar11;
      if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar7,0);
        FUN_144b3ec00(plVar11);
      }
      FUN_140069ea2(plVar11,param_2 + 0x18);
    }
  }
  return param_1;
}



// FUNCTION 144c95ab0 FUN_144c95ab0 body=62 status=ok
// SIG undefined FUN_144c95ab0(void)

undefined8 * FUN_144c95ab0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6eafa0);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eafa0;
  return param_2;
}



// FUNCTION 144c95af0 FUN_144c95af0 body=1553 status=ok
// SIG undefined FUN_144c95af0(void)

longlong FUN_144c95af0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  plVar12 = (longlong *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((longlong *)(param_2 + 0x20) != plVar12) {
    iVar2 = *(int *)(param_2 + 0x28);
    lVar6 = *(longlong *)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_144c9ca80(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x28)) {
      lVar10 = *plVar12;
      lVar5 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + *plVar12;
      while (lVar5 != (longlong)iVar2 * 0x38 + lVar10) {
        plVar11 = (longlong *)(lVar5 + -0x38);
        lVar5 = lVar5 + -0x38;
        (**(code **)(*plVar11 + 8))(lVar5,0);
      }
    }
    lVar10 = *plVar12;
    iVar4 = iVar2;
    if (*(int *)(param_1 + 0x28) < iVar2) {
      iVar4 = *(int *)(param_1 + 0x28);
    }
    if ((lVar10 != lVar6) && (lVar5 = (longlong)iVar4, 0 < iVar4)) {
      plVar11 = (longlong *)(lVar10 + 0x18);
      lVar10 = lVar6 - lVar10;
      do {
        if (*plVar11 != *(longlong *)(lVar10 + (longlong)plVar11)) {
          if (*(longlong *)(lVar10 + (longlong)plVar11) != 0) {
            FUN_144b3d910();
          }
          lVar3 = *plVar11;
          *plVar11 = *(longlong *)(lVar10 + (longlong)plVar11);
          if (lVar3 != 0) {
            FUN_144b3f230();
          }
        }
        lVar3 = *(longlong *)(lVar10 + 8 + (longlong)plVar11);
        if (plVar11[1] != lVar3) {
          if (lVar3 != 0) {
            FUN_144b3d910();
          }
          lVar3 = plVar11[1];
          plVar11[1] = *(longlong *)(lVar10 + 8 + (longlong)plVar11);
          if (lVar3 != 0) {
            FUN_144b3f230();
          }
        }
        plVar11[2] = *(longlong *)(lVar10 + 0x10 + (longlong)plVar11);
        *(undefined4 *)(plVar11 + 3) = *(undefined4 *)(lVar10 + 0x18 + (longlong)plVar11);
        *(undefined1 *)((longlong)plVar11 + 0x1c) =
             *(undefined1 *)(lVar10 + 0x1c + (longlong)plVar11);
        *(undefined1 *)((longlong)plVar11 + 0x1d) =
             *(undefined1 *)(lVar10 + 0x1d + (longlong)plVar11);
        *(undefined1 *)((longlong)plVar11 + 0x1e) =
             *(undefined1 *)(lVar10 + 0x1e + (longlong)plVar11);
        plVar11 = plVar11 + 7;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (0 < iVar2 - iVar4) {
      uVar8 = (ulonglong)(uint)(iVar2 - iVar4);
      plVar11 = (longlong *)(lVar6 + 0x20 + (longlong)iVar4 * 0x38);
      puVar9 = (undefined8 *)(*plVar12 + (longlong)iVar4 * 0x38);
      do {
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = 0xffffffff;
          puVar9[2] = 1;
          *puVar9 = hkaiNavMeshPathRequestInfo::vftable;
          lVar6 = plVar11[-1];
          puVar9[3] = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          lVar6 = *plVar11;
          puVar9[4] = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          puVar9[5] = plVar11[1];
          *(int *)(puVar9 + 6) = (int)plVar11[2];
          *(undefined1 *)((longlong)puVar9 + 0x34) = *(undefined1 *)((longlong)plVar11 + 0x14);
          *(undefined1 *)((longlong)puVar9 + 0x35) = *(undefined1 *)((longlong)plVar11 + 0x15);
          puVar1 = (undefined1 *)((longlong)plVar11 + 0x16);
          plVar11 = plVar11 + 7;
          *(undefined1 *)((longlong)puVar9 + 0x36) = *puVar1;
        }
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 7;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 0x28) = iVar2;
  }
  plVar12 = (longlong *)(param_1 + 0x30);
  if ((longlong *)(param_2 + 0x30) != plVar12) {
    iVar2 = *(int *)(param_2 + 0x38);
    lVar6 = *(longlong *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar2) {
      FUN_144c9cbb0(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x38)) {
      lVar10 = *plVar12;
      lVar5 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + *plVar12;
      while (lVar5 != (longlong)iVar2 * 0x38 + lVar10) {
        plVar11 = (longlong *)(lVar5 + -0x38);
        lVar5 = lVar5 + -0x38;
        (**(code **)(*plVar11 + 8))(lVar5,0);
      }
    }
    lVar10 = *plVar12;
    iVar4 = iVar2;
    if (*(int *)(param_1 + 0x38) < iVar2) {
      iVar4 = *(int *)(param_1 + 0x38);
    }
    if ((lVar10 != lVar6) && (lVar5 = (longlong)iVar4, 0 < iVar4)) {
      plVar11 = (longlong *)(lVar10 + 0x18);
      lVar10 = lVar6 - lVar10;
      do {
        if (*plVar11 != *(longlong *)((longlong)plVar11 + lVar10)) {
          if (*(longlong *)((longlong)plVar11 + lVar10) != 0) {
            FUN_144b3d910();
          }
          lVar3 = *plVar11;
          *plVar11 = *(longlong *)((longlong)plVar11 + lVar10);
          if (lVar3 != 0) {
            FUN_144b3f230();
          }
        }
        lVar3 = *(longlong *)(lVar10 + 8 + (longlong)plVar11);
        if (plVar11[1] != lVar3) {
          if (lVar3 != 0) {
            FUN_144b3d910();
          }
          lVar3 = plVar11[1];
          plVar11[1] = *(longlong *)(lVar10 + 8 + (longlong)plVar11);
          if (lVar3 != 0) {
            FUN_144b3f230();
          }
        }
        plVar11[2] = *(longlong *)(lVar10 + 0x10 + (longlong)plVar11);
        *(undefined4 *)(plVar11 + 3) = *(undefined4 *)(lVar10 + 0x18 + (longlong)plVar11);
        *(undefined1 *)((longlong)plVar11 + 0x1c) =
             *(undefined1 *)(lVar10 + 0x1c + (longlong)plVar11);
        *(undefined1 *)((longlong)plVar11 + 0x1d) =
             *(undefined1 *)(lVar10 + 0x1d + (longlong)plVar11);
        *(undefined1 *)((longlong)plVar11 + 0x1e) =
             *(undefined1 *)(lVar10 + 0x1e + (longlong)plVar11);
        plVar11 = plVar11 + 7;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (0 < iVar2 - iVar4) {
      uVar8 = (ulonglong)(uint)(iVar2 - iVar4);
      plVar11 = (longlong *)(lVar6 + 0x20 + (longlong)iVar4 * 0x38);
      puVar9 = (undefined8 *)(*plVar12 + (longlong)iVar4 * 0x38);
      do {
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = 0xffffffff;
          puVar9[2] = 1;
          *puVar9 = hkaiNavVolumePathRequestInfo::vftable;
          lVar6 = plVar11[-1];
          puVar9[3] = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          lVar6 = *plVar11;
          puVar9[4] = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          puVar9[5] = plVar11[1];
          *(int *)(puVar9 + 6) = (int)plVar11[2];
          *(undefined1 *)((longlong)puVar9 + 0x34) = *(undefined1 *)((longlong)plVar11 + 0x14);
          *(undefined1 *)((longlong)puVar9 + 0x35) = *(undefined1 *)((longlong)plVar11 + 0x15);
          puVar1 = (undefined1 *)((longlong)plVar11 + 0x16);
          plVar11 = plVar11 + 7;
          *(undefined1 *)((longlong)puVar9 + 0x36) = *puVar1;
        }
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 7;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 0x38) = iVar2;
  }
  plVar12 = (longlong *)(param_1 + 0x40);
  if ((longlong *)(param_2 + 0x40) != plVar12) {
    iVar2 = *(int *)(param_2 + 0x48);
    plVar11 = *(longlong **)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar2) {
      FUN_144c9cce0(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x48)) {
      lVar10 = *plVar12;
      lVar6 = lVar10 + (longlong)*(int *)(param_1 + 0x48) * 8;
      while (lVar6 != lVar10 + (longlong)iVar2 * 8) {
        plVar7 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar7 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar7 = (longlong *)*plVar12;
    iVar4 = iVar2;
    if (*(int *)(param_1 + 0x48) < iVar2) {
      iVar4 = *(int *)(param_1 + 0x48);
    }
    if ((plVar7 != plVar11) && (lVar6 = (longlong)iVar4, 0 < iVar4)) {
      lVar10 = (longlong)plVar11 - (longlong)plVar7;
      do {
        lVar5 = *(longlong *)(lVar10 + (longlong)plVar7);
        if (*plVar7 != lVar5) {
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = *plVar7;
          *plVar7 = *(longlong *)(lVar10 + (longlong)plVar7);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    plVar11 = plVar11 + iVar4;
    if (0 < iVar2 - iVar4) {
      uVar8 = (ulonglong)(uint)(iVar2 - iVar4);
      plVar12 = (longlong *)(*plVar12 + (longlong)iVar4 * 8);
      do {
        if (plVar12 != (longlong *)0x0) {
          lVar6 = *plVar11;
          *plVar12 = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          plVar11 = plVar11 + 1;
        }
        uVar8 = uVar8 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 0x48) = iVar2;
  }
  plVar12 = (longlong *)(param_1 + 0x50);
  if ((longlong *)(param_2 + 0x50) != plVar12) {
    iVar2 = *(int *)(param_2 + 0x58);
    plVar11 = *(longlong **)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar2) {
      FUN_144c9cdc0(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x58)) {
      lVar10 = *plVar12;
      lVar6 = lVar10 + (longlong)*(int *)(param_1 + 0x58) * 8;
      while (lVar6 != lVar10 + (longlong)iVar2 * 8) {
        plVar7 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar7 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar7 = (longlong *)*plVar12;
    iVar4 = iVar2;
    if (*(int *)(param_1 + 0x58) < iVar2) {
      iVar4 = *(int *)(param_1 + 0x58);
    }
    if ((plVar7 != plVar11) && (lVar6 = (longlong)iVar4, 0 < iVar4)) {
      lVar10 = (longlong)plVar11 - (longlong)plVar7;
      do {
        lVar5 = *(longlong *)(lVar10 + (longlong)plVar7);
        if (*plVar7 != lVar5) {
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = *plVar7;
          *plVar7 = *(longlong *)(lVar10 + (longlong)plVar7);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    plVar11 = plVar11 + iVar4;
    if (0 < iVar2 - iVar4) {
      uVar8 = (ulonglong)(uint)(iVar2 - iVar4);
      plVar12 = (longlong *)(*plVar12 + (longlong)iVar4 * 8);
      do {
        if (plVar12 != (longlong *)0x0) {
          lVar6 = *plVar11;
          *plVar12 = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          plVar11 = plVar11 + 1;
        }
        uVar8 = uVar8 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 0x58) = iVar2;
    return param_1;
  }
  return param_1;
}



// FUNCTION 144c96110 FUN_144c96110 body=260 status=ok
// SIG undefined FUN_144c96110(void)

void FUN_144c96110(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8);
    FUN_144b3ec00(param_1 + 2);
  }
  uVar5 = (longlong)(int)param_1[1] * 3;
  if (((int)param_1[1] < 0) || (0xffffffff < uVar5)) {
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
  if (((bool)(bVar4 & bVar3)) && ((uint)uVar2 < (uint)uVar5)) {
    FUN_144b2eb80(param_1 + 2);
  }
  uVar8 = 0;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    do {
      lVar1 = *param_1;
      uVar7 = (*(int *)(lVar9 + lVar1) << 0x16 ^ *(uint *)(lVar9 + 4 + lVar1)) << 5 ^
              *(uint *)(lVar9 + 8 + lVar1);
      uVar10 = uVar7 * -0x61c8864f;
      lVar1 = param_1[2];
      uVar7 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
              uVar7 * -0x4f000000;
      uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
      puVar6 = (uint *)(lVar1 + uVar5 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar5 * 8)) {
        do {
          uVar5 = ((longlong)puVar6 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar6 = (uint *)(lVar1 + uVar5 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar5 * 8));
      }
      puVar6[1] = uVar8;
      lVar9 = lVar9 + 0x10;
      uVar8 = uVar8 + 1;
      *puVar6 = uVar7;
    } while ((int)uVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c96220 FUN_144c96220 body=209 status=ok
// SIG undefined FUN_144c96220(void)

void FUN_144c96220(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c6d610(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c96110(param_1);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 4);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c96300 FUN_144c96300 body=198 status=ok
// SIG undefined FUN_144c96300(void)

undefined8 * FUN_144c96300(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if (0 < (int)uVar2) {
    plVar4 = (longlong *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
    *param_1 = plVar4;
    puVar6 = (undefined4 *)(lVar3 + 0xc);
    *(uint *)(param_1 + 1) = uVar2;
    uVar5 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *(longlong *)(puVar6 + -3);
        *plVar4 = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        *(undefined4 *)(plVar4 + 1) = puVar6[-1];
        *(undefined4 *)((longlong)plVar4 + 0xc) = *puVar6;
        puVar1 = puVar6 + 1;
        puVar6 = puVar6 + 6;
        *(undefined4 *)(plVar4 + 2) = *puVar1;
      }
      uVar5 = uVar5 - 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 144c963d0 FUN_144c963d0 body=108 status=ok
// SIG undefined FUN_144c963d0(void)

undefined8 * FUN_144c963d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_2 + 1);
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_144ca0750(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 * 0x18);
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}



// FUNCTION 144c96440 FUN_144c96440 body=519 status=ok
// SIG undefined FUN_144c96440(void)

longlong * FUN_144c96440(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (param_2 != param_1) {
    lVar14 = *param_2;
    iVar5 = (int)param_2[1];
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144c9e570(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if (iVar5 < (int)param_1[1]) {
      puVar7 = (uint *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
      puVar3 = (uint *)(*param_1 + (longlong)iVar5 * 0x18);
      if (puVar7 != puVar3) {
        puVar7 = puVar7 + 3;
        do {
          puVar1 = puVar7 + -6;
          uVar9 = 0;
          uVar12 = 0;
          if (0 < (int)puVar7[-7]) {
            do {
              pfVar4 = (float *)(uVar12 + 8 + *(longlong *)(puVar7 + -9));
              if ((0.0 < *pfVar4 || *pfVar4 == 0.0) &&
                 (*(longlong *)(uVar12 + *(longlong *)(puVar7 + -9)) != 0)) {
                FUN_144b3f230();
              }
              uVar10 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar10;
              uVar12 = uVar12 + 0x18;
            } while ((int)uVar10 < (int)puVar7[-7]);
          }
          puVar7[-7] = 0;
          if ((-1 < (int)*puVar1) && (*(longlong *)(puVar7 + -9) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar7 + -9),
                       (ulonglong)(*puVar1 & 0x7fffffff) * 0x18);
          }
          puVar2 = puVar7 + -9;
          *puVar1 = 0x80000000;
          puVar2[0] = 0;
          puVar2[1] = 0;
          puVar7 = puVar1;
        } while (puVar2 != puVar3);
      }
    }
    lVar13 = *param_1;
    iVar6 = iVar5;
    if ((int)param_1[1] < iVar5) {
      iVar6 = (int)param_1[1];
    }
    if ((lVar13 != lVar14) && (lVar11 = (longlong)iVar6, 0 < iVar6)) {
      puVar8 = (undefined4 *)(lVar13 + 0x10);
      lVar13 = lVar14 - lVar13;
      do {
        FUN_144c963d0(puVar8 + -4,lVar13 + -0x10 + (longlong)puVar8);
        *puVar8 = *(undefined4 *)(lVar13 + (longlong)puVar8);
        puVar8[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar8);
        puVar8 = puVar8 + 6;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    lVar14 = lVar14 + (longlong)iVar6 * 0x18;
    if (0 < iVar5 - iVar6) {
      uVar9 = (ulonglong)(uint)(iVar5 - iVar6);
      lVar13 = *param_1 + (longlong)iVar6 * 0x18;
      do {
        if (lVar13 != 0) {
          FUN_144c96300(lVar13,lVar14);
          *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(lVar14 + 0x10);
          puVar8 = (undefined4 *)(lVar14 + 0x14);
          lVar14 = lVar14 + 0x18;
          *(undefined4 *)(lVar13 + 0x14) = *puVar8;
        }
        uVar9 = uVar9 - 1;
        lVar13 = lVar13 + 0x18;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 1) = iVar5;
  }
  return param_1;
}



// FUNCTION 144c96650 FUN_144c96650 body=216 status=ok
// SIG undefined FUN_144c96650(void)

undefined8 * FUN_144c96650(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 144c96730 FUN_144c96730 body=18 status=ok
// SIG undefined FUN_144c96730(void)

undefined8 * FUN_144c96730(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6eaca0;
  return param_2;
}



// FUNCTION 144c96750 FUN_144c96750 body=247 status=ok
// SIG undefined FUN_144c96750(void)

void FUN_144c96750(longlong *param_1)

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
      lVar9 = lVar9 + 0x30;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c96850 FUN_144c96850 body=229 status=ok
// SIG undefined FUN_144c96850(void)

void FUN_144c96850(undefined8 *param_1,longlong *param_2)

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
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined4 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x30);
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
          puVar3[2] = puVar7[2];
          FUN_144c91f60(puVar3 + 4,puVar7 + 4);
        }
        puVar3 = puVar3 + 0xc;
        puVar7 = puVar7 + 0xc;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar4 = puVar4 + 4;
      do {
        FUN_144c91db0(puVar4);
        puVar4 = puVar4 + 0xc;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = puVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c96940 FUN_144c96940 body=192 status=ok
// SIG undefined FUN_144c96940(void)

longlong * FUN_144c96940(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = (longlong)(int)param_1[1] * 0x30 + lVar1; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    FUN_144c91db0(lVar2 + -0x20);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x30);
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



// FUNCTION 144c96a00 FUN_144c96a00 body=200 status=ok
// SIG undefined FUN_144c96a00(void)

undefined8 * FUN_144c96a00(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x30);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar1;
    puVar4 = (undefined4 *)(lVar2 + 8);
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar4[-2];
        puVar3[2] = *puVar4;
        FUN_144c91e80(puVar3 + 4,puVar4 + 2);
        puVar4 = puVar4 + 0xc;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 0xc;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c96ad0 FUN_144c96ad0 body=279 status=ok
// SIG undefined FUN_144c96ad0(void)

void FUN_144c96ad0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8);
    FUN_144b3ec00(param_1 + 2);
  }
  uVar7 = (longlong)(int)param_1[1] * 3;
  if (((int)param_1[1] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  uVar11 = 0;
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    do {
      iVar1 = *(int *)(lVar12 + *param_1);
      uVar9 = iVar1 * -0x61c8864f;
      iVar2 = *(int *)(lVar12 + 4 + *param_1);
      uVar10 = iVar2 * -0x61c8864f;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar1 * -0x4f000000;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
               iVar2 * -0x4f000000;
      lVar3 = param_1[2];
      uVar9 = uVar10 + uVar9 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar9;
      uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
      puVar8 = (uint *)(lVar3 + uVar7 * 8);
      if (-1 < *(int *)(lVar3 + 4 + uVar7 * 8)) {
        do {
          uVar7 = ((longlong)puVar8 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar8 = (uint *)(lVar3 + uVar7 * 8);
        } while (-1 < *(int *)(lVar3 + 4 + uVar7 * 8));
      }
      puVar8[1] = uVar11;
      lVar12 = lVar12 + 0xc;
      uVar11 = uVar11 + 1;
      *puVar8 = uVar9;
    } while ((int)uVar11 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c96bf0 FUN_144c96bf0 body=215 status=ok
// SIG undefined FUN_144c96bf0(void)

void FUN_144c96bf0(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c96cd0(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c96ad0(param_1);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c96cd0 FUN_144c96cd0 body=134 status=ok
// SIG undefined FUN_144c96cd0(void)

void FUN_144c96cd0(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = (undefined4 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    puVar3 = (undefined4 *)*param_1;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar3 + 2);
        }
        puVar2 = puVar2 + 3;
        puVar3 = puVar3 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 144c96d60 FUN_144c96d60 body=125 status=ok
// SIG undefined FUN_144c96d60(void)

void FUN_144c96d60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c96de0 FUN_144c96de0 body=175 status=ok
// SIG undefined FUN_144c96de0(void)

undefined8 * FUN_144c96de0(undefined8 *param_1,longlong *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if (0 < (int)uVar2) {
    puVar4 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
    *param_1 = puVar4;
    puVar5 = (undefined2 *)(lVar3 + 8);
    *(uint *)(param_1 + 1) = uVar2;
    uVar6 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(puVar5 + -4);
        puVar4[1] = *(undefined4 *)(puVar5 + -2);
        uVar1 = *puVar5;
        puVar5 = puVar5 + 6;
        *(undefined2 *)(puVar4 + 2) = uVar1;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar6 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144c96e90 FUN_144c96e90 body=104 status=ok
// SIG undefined FUN_144c96e90(void)

undefined8 * FUN_144c96e90(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  FUN_144ffd030(param_1 + 4);
  FUN_144ffd030(param_1 + 8,param_2);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  return param_1;
}



// FUNCTION 144c96f00 FUN_144c96f00 body=474 status=ok
// SIG undefined FUN_144c96f00(void)

undefined8 * FUN_144c96f00(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if (0 < (int)uVar2) {
    puVar7 = (undefined8 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x50);
    *param_1 = puVar7;
    puVar9 = (undefined8 *)(lVar3 + 0x10);
    *(uint *)(param_1 + 1) = uVar2;
    uVar10 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = puVar9[-1];
        *puVar7 = puVar9[-2];
        puVar7[1] = uVar8;
        uVar8 = puVar9[1];
        puVar7[2] = *puVar9;
        puVar7[3] = uVar8;
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uVar5 = *(undefined4 *)(puVar9 + 3);
        uVar6 = *(undefined4 *)((longlong)puVar9 + 0x1c);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
        *(undefined4 *)(puVar7 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar6;
        uVar8 = puVar9[5];
        puVar7[6] = puVar9[4];
        puVar7[7] = uVar8;
        *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(puVar9 + 6);
        puVar1 = (undefined4 *)((longlong)puVar9 + 0x34);
        puVar9 = puVar9 + 10;
        *(undefined4 *)((longlong)puVar7 + 0x44) = *puVar1;
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 10;
    } while (uVar10 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 3);
  lVar3 = param_2[2];
  if (0 < (int)uVar2) {
    uVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x50);
    param_1[2] = uVar8;
    puVar9 = (undefined8 *)(lVar3 + 0x10);
    *(uint *)(param_1 + 3) = uVar2;
    uVar10 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0x1c) = uVar2;
    puVar7 = (undefined8 *)param_1[2];
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = puVar9[-1];
        *puVar7 = puVar9[-2];
        puVar7[1] = uVar8;
        uVar8 = puVar9[1];
        puVar7[2] = *puVar9;
        puVar7[3] = uVar8;
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uVar5 = *(undefined4 *)(puVar9 + 3);
        uVar6 = *(undefined4 *)((longlong)puVar9 + 0x1c);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
        *(undefined4 *)(puVar7 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar6;
        uVar8 = puVar9[5];
        puVar7[6] = puVar9[4];
        puVar7[7] = uVar8;
        *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(puVar9 + 6);
        puVar1 = (undefined4 *)((longlong)puVar9 + 0x34);
        puVar9 = puVar9 + 10;
        *(undefined4 *)((longlong)puVar7 + 0x44) = *puVar1;
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 10;
    } while (uVar10 != 0);
  }
  FUN_144fcd390(param_1 + 4,param_2 + 4);
  FUN_144fcd390(param_1 + 8,param_2 + 8);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0xd);
  puVar9 = (undefined8 *)param_2[0xc];
  if (0 < (int)uVar2) {
    uVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
    param_1[0xc] = uVar8;
    uVar10 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0xd) = uVar2;
    *(uint *)((longlong)param_1 + 0x6c) = uVar2;
    puVar7 = (undefined8 *)param_1[0xc];
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar7 = uVar8;
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar10 != 0);
  }
  return param_1;
}



// FUNCTION 144c970e0 FUN_144c970e0 body=777 status=ok
// SIG undefined FUN_144c970e0(void)

longlong * FUN_144c970e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (param_2 != param_1) {
    iVar3 = (int)param_2[1];
    lVar12 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144c9d480(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    lVar11 = *param_1;
    iVar5 = iVar3;
    if ((int)param_1[1] < iVar3) {
      iVar5 = (int)param_1[1];
    }
    if ((lVar11 != lVar12) && (lVar13 = (longlong)iVar5, 0 < iVar5)) {
      puVar9 = (undefined8 *)(lVar11 + 0x30);
      lVar11 = lVar12 - lVar11;
      do {
        puVar10 = (undefined8 *)(lVar11 + -0x30 + (longlong)puVar9);
        uVar4 = puVar10[1];
        puVar9[-6] = *puVar10;
        puVar9[-5] = uVar4;
        puVar10 = (undefined8 *)(lVar11 + -0x20 + (longlong)puVar9);
        uVar4 = puVar10[1];
        puVar9[-4] = *puVar10;
        puVar9[-3] = uVar4;
        puVar2 = (undefined4 *)(lVar11 + -0x10 + (longlong)puVar9);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(undefined4 *)(puVar9 + -2) = *puVar2;
        *(undefined4 *)((longlong)puVar9 + -0xc) = uVar6;
        *(undefined4 *)(puVar9 + -1) = uVar7;
        *(undefined4 *)((longlong)puVar9 + -4) = uVar8;
        uVar4 = ((undefined8 *)((longlong)puVar9 + lVar11))[1];
        *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar11);
        puVar9[1] = uVar4;
        *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(lVar11 + 0x10 + (longlong)puVar9);
        *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(lVar11 + 0x14 + (longlong)puVar9)
        ;
        puVar9 = puVar9 + 10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar9 = (undefined8 *)((longlong)iVar5 * 0x50 + lVar12);
    if (0 < iVar3 - iVar5) {
      uVar14 = (ulonglong)(uint)(iVar3 - iVar5);
      puVar10 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x50);
      do {
        if (puVar10 != (undefined8 *)0x0) {
          uVar4 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar4;
          uVar4 = puVar9[3];
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar4;
          uVar6 = *(undefined4 *)((longlong)puVar9 + 0x24);
          uVar7 = *(undefined4 *)(puVar9 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar9 + 0x2c);
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar9 + 4);
          *(undefined4 *)((longlong)puVar10 + 0x24) = uVar6;
          *(undefined4 *)(puVar10 + 5) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar8;
          uVar4 = puVar9[7];
          puVar10[6] = puVar9[6];
          puVar10[7] = uVar4;
          *(undefined1 *)(puVar10 + 8) = *(undefined1 *)(puVar9 + 8);
          puVar2 = (undefined4 *)((longlong)puVar9 + 0x44);
          puVar9 = puVar9 + 10;
          *(undefined4 *)((longlong)puVar10 + 0x44) = *puVar2;
        }
        uVar14 = uVar14 - 1;
        puVar10 = puVar10 + 10;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  plVar1 = param_1 + 2;
  if (param_2 + 2 != plVar1) {
    iVar3 = (int)param_2[3];
    lVar12 = param_2[2];
    if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar3) {
      FUN_144c9d480(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    lVar11 = *plVar1;
    iVar5 = iVar3;
    if ((int)param_1[3] < iVar3) {
      iVar5 = (int)param_1[3];
    }
    if ((lVar11 != lVar12) && (lVar13 = (longlong)iVar5, 0 < iVar5)) {
      puVar9 = (undefined8 *)(lVar11 + 0x30);
      lVar11 = lVar12 - lVar11;
      do {
        puVar10 = (undefined8 *)(lVar11 + -0x30 + (longlong)puVar9);
        uVar4 = puVar10[1];
        puVar9[-6] = *puVar10;
        puVar9[-5] = uVar4;
        puVar10 = (undefined8 *)(lVar11 + -0x20 + (longlong)puVar9);
        uVar4 = puVar10[1];
        puVar9[-4] = *puVar10;
        puVar9[-3] = uVar4;
        puVar2 = (undefined4 *)(lVar11 + -0x10 + (longlong)puVar9);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(undefined4 *)(puVar9 + -2) = *puVar2;
        *(undefined4 *)((longlong)puVar9 + -0xc) = uVar6;
        *(undefined4 *)(puVar9 + -1) = uVar7;
        *(undefined4 *)((longlong)puVar9 + -4) = uVar8;
        uVar4 = ((undefined8 *)((longlong)puVar9 + lVar11))[1];
        *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar11);
        puVar9[1] = uVar4;
        *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(lVar11 + 0x10 + (longlong)puVar9);
        *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(lVar11 + 0x14 + (longlong)puVar9)
        ;
        puVar9 = puVar9 + 10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar9 = (undefined8 *)((longlong)iVar5 * 0x50 + lVar12);
    if (0 < iVar3 - iVar5) {
      uVar14 = (ulonglong)(uint)(iVar3 - iVar5);
      puVar10 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x50);
      do {
        if (puVar10 != (undefined8 *)0x0) {
          uVar4 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar4;
          uVar4 = puVar9[3];
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar4;
          uVar6 = *(undefined4 *)((longlong)puVar9 + 0x24);
          uVar7 = *(undefined4 *)(puVar9 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar9 + 0x2c);
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar9 + 4);
          *(undefined4 *)((longlong)puVar10 + 0x24) = uVar6;
          *(undefined4 *)(puVar10 + 5) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar8;
          uVar4 = puVar9[7];
          puVar10[6] = puVar9[6];
          puVar10[7] = uVar4;
          *(undefined1 *)(puVar10 + 8) = *(undefined1 *)(puVar9 + 8);
          puVar2 = (undefined4 *)((longlong)puVar9 + 0x44);
          puVar9 = puVar9 + 10;
          *(undefined4 *)((longlong)puVar10 + 0x44) = *puVar2;
        }
        uVar14 = uVar14 - 1;
        puVar10 = puVar10 + 10;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 3) = iVar3;
  }
  FUN_144fcd4d0(param_1 + 4,param_2 + 4);
  FUN_144fcd4d0(param_1 + 8,param_2 + 8);
  plVar1 = param_1 + 0xc;
  if (param_2 + 0xc != plVar1) {
    iVar3 = (int)param_2[0xd];
    puVar9 = (undefined8 *)param_2[0xc];
    if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar3) {
      FUN_144c9d570(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar10 = (undefined8 *)*plVar1;
    iVar5 = iVar3;
    if ((int)param_1[0xd] < iVar3) {
      iVar5 = (int)param_1[0xd];
    }
    if ((puVar10 != puVar9) && (lVar12 = (longlong)iVar5, 0 < iVar5)) {
      lVar11 = (longlong)puVar9 - (longlong)puVar10;
      do {
        *puVar10 = *(undefined8 *)(lVar11 + (longlong)puVar10);
        puVar10 = puVar10 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    puVar9 = puVar9 + iVar5;
    if (0 < iVar3 - iVar5) {
      uVar14 = (ulonglong)(uint)(iVar3 - iVar5);
      puVar10 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 8);
      do {
        if (puVar10 != (undefined8 *)0x0) {
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar10 = uVar4;
        }
        uVar14 = uVar14 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar14 != 0);
    }
    *(int *)(param_1 + 0xd) = iVar3;
  }
  return param_1;
}



// FUNCTION 144c973f0 FUN_144c973f0 body=792 status=ok
// SIG undefined FUN_144c973f0(void)

undefined4 * FUN_144c973f0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  
  *param_1 = *param_2;
  lVar3 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar3;
  if (lVar3 != 0) {
    FUN_144b3d910();
  }
  lVar3 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 != 0) {
    FUN_144b3d910();
  }
  uVar8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar8;
  uVar2 = param_2[0x2d];
  uVar4 = param_2[0x2e];
  uVar5 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar4;
  param_1[0x2f] = uVar5;
  uVar2 = param_2[0x31];
  uVar4 = param_2[0x32];
  uVar5 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar2;
  param_1[0x32] = uVar4;
  param_1[0x33] = uVar5;
  param_1[0x34] = param_2[0x34];
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x80000000;
  uVar1 = param_2[0x38];
  puVar15 = *(undefined8 **)(param_2 + 0x36);
  if (0 < (int)uVar1) {
    uVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    *(undefined8 *)(param_1 + 0x36) = uVar8;
    uVar14 = (ulonglong)uVar1;
    param_1[0x38] = uVar1;
    param_1[0x39] = uVar1;
    puVar11 = *(undefined8 **)(param_1 + 0x36);
    do {
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0x80000000;
        uVar1 = *(uint *)(puVar15 + 1);
        puVar10 = (undefined4 *)*puVar15;
        if (0 < (int)uVar1) {
          puVar9 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
          *puVar11 = puVar9;
          *(uint *)(puVar11 + 1) = uVar1;
          uVar13 = (ulonglong)uVar1;
          *(uint *)((longlong)puVar11 + 0xc) = uVar1;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar2 = *puVar10;
              puVar10 = puVar10 + 1;
              *puVar9 = uVar2;
            }
            uVar13 = uVar13 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar13 != 0);
        }
        puVar15 = puVar15 + 2;
      }
      uVar14 = uVar14 - 1;
      puVar11 = puVar11 + 2;
    } while (uVar14 != 0);
  }
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x80000000;
  uVar1 = param_2[0x3c];
  lVar3 = *(longlong *)(param_2 + 0x3a);
  if (0 < (int)uVar1) {
    uVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 6);
    *(undefined8 *)(param_1 + 0x3a) = uVar8;
    puVar12 = (uint *)(lVar3 + 0x38);
    param_1[0x3c] = uVar1;
    uVar14 = (ulonglong)uVar1;
    param_1[0x3d] = uVar1;
    puVar16 = *(uint **)(param_1 + 0x3a);
    do {
      if (puVar16 != (uint *)0x0) {
        *puVar16 = puVar12[-0xe];
        uVar1 = puVar12[-9];
        uVar6 = puVar12[-8];
        uVar7 = puVar12[-7];
        puVar16[4] = puVar12[-10];
        puVar16[5] = uVar1;
        puVar16[6] = uVar6;
        puVar16[7] = uVar7;
        uVar1 = puVar12[-5];
        uVar6 = puVar12[-4];
        uVar7 = puVar12[-3];
        puVar16[8] = puVar12[-6];
        puVar16[9] = uVar1;
        puVar16[10] = uVar6;
        puVar16[0xb] = uVar7;
        puVar16[0xc] = 0;
        puVar16[0xd] = 0;
        puVar16[0xe] = 0;
        puVar16[0xf] = 0x80000000;
        uVar1 = *puVar12;
        puVar10 = *(undefined4 **)(puVar12 + -2);
        if (0 < (int)uVar1) {
          uVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                            (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
          *(undefined8 *)(puVar16 + 0xc) = uVar8;
          uVar13 = (ulonglong)uVar1;
          puVar16[0xe] = uVar1;
          puVar16[0xf] = uVar1;
          puVar9 = *(undefined4 **)(puVar16 + 0xc);
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar2 = *puVar10;
              puVar10 = puVar10 + 1;
              *puVar9 = uVar2;
            }
            uVar13 = uVar13 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar13 != 0);
        }
        puVar12 = puVar12 + 0x10;
      }
      uVar14 = uVar14 - 1;
      puVar16 = puVar16 + 0x10;
    } while (uVar14 != 0);
  }
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)((longlong)param_2 + 0xf9);
  *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)((longlong)param_2 + 0xfa);
  return param_1;
}



// FUNCTION 144c97710 FUN_144c97710 body=1535 status=ok
// SIG undefined FUN_144c97710(void)

undefined4 * FUN_144c97710(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  uint *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  
  *param_1 = *param_2;
  if (*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) {
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_144b3d910();
    }
    lVar7 = *(longlong *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    if (lVar7 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) {
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_144b3d910();
    }
    lVar7 = *(longlong *)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    if (lVar7 != 0) {
      FUN_144b3f230();
    }
  }
  uVar17 = *(undefined8 *)(param_2 + 10);
  plVar2 = (longlong *)(param_1 + 0x36);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar17;
  uVar5 = param_2[0x2d];
  uVar9 = param_2[0x2e];
  uVar10 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar5;
  param_1[0x2e] = uVar9;
  param_1[0x2f] = uVar10;
  uVar5 = param_2[0x31];
  uVar9 = param_2[0x32];
  uVar10 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar5;
  param_1[0x32] = uVar9;
  param_1[0x33] = uVar10;
  param_1[0x34] = param_2[0x34];
  if ((longlong *)(param_2 + 0x36) != plVar2) {
    iVar3 = param_2[0x38];
    lVar7 = *(longlong *)(param_2 + 0x36);
    if ((int)(param_1[0x39] & 0x7fffffff) < iVar3) {
      FUN_144ca0ab0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    if (iVar3 < (int)param_1[0x38]) {
      lVar24 = *plVar2;
      plVar13 = (longlong *)((longlong)(int)param_1[0x38] * 0x10 + *plVar2);
      while (plVar13 != (longlong *)((longlong)iVar3 * 0x10 + lVar24)) {
        plVar19 = plVar13 + -2;
        *(undefined4 *)(plVar13 + -1) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar13 + -4)) && (*plVar19 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar19,
                     (ulonglong)(*(uint *)((longlong)plVar13 + -4) & 0x7fffffff) << 2);
        }
        *plVar19 = 0;
        *(undefined4 *)((longlong)plVar13 + -4) = 0x80000000;
        plVar13 = plVar19;
      }
    }
    lVar24 = *plVar2;
    iVar8 = iVar3;
    if ((int)param_1[0x38] < iVar3) {
      iVar8 = param_1[0x38];
    }
    if ((lVar24 != lVar7) && (lVar26 = (longlong)iVar8, 0 < iVar8)) {
      puVar20 = (uint *)(lVar24 + 0xc);
      do {
        puVar14 = (uint *)((lVar7 - lVar24) + -0xc + (longlong)puVar20);
        puVar1 = puVar20 + -3;
        if (puVar14 != puVar1) {
          uVar17 = *(undefined8 *)puVar14;
          uVar4 = *(uint *)((lVar7 - lVar24) + -4 + (longlong)puVar20);
          if ((int)(*puVar20 & 0x7fffffff) < (int)uVar4) {
            FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
          }
          FUN_144b3d470(*(undefined8 *)puVar1,uVar17,(longlong)(int)uVar4 * 4);
          puVar20[-1] = uVar4;
        }
        puVar20 = puVar20 + 4;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    puVar23 = (undefined8 *)(lVar7 + (longlong)iVar8 * 0x10);
    if (0 < iVar3 - iVar8) {
      uVar27 = (ulonglong)(uint)(iVar3 - iVar8);
      puVar16 = (undefined8 *)(*plVar2 + (longlong)iVar8 * 0x10);
      do {
        if (puVar16 != (undefined8 *)0x0) {
          *puVar16 = 0;
          *(undefined4 *)(puVar16 + 1) = 0;
          *(undefined4 *)((longlong)puVar16 + 0xc) = 0x80000000;
          uVar4 = *(uint *)(puVar23 + 1);
          puVar21 = (undefined4 *)0x0;
          if ((undefined4 *)*puVar23 != (undefined4 *)0x0) {
            puVar21 = (undefined4 *)*puVar23;
          }
          if (0 < (int)uVar4) {
            puVar15 = (undefined4 *)
                      (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 2);
            *puVar16 = puVar15;
            *(uint *)(puVar16 + 1) = uVar4;
            uVar25 = (ulonglong)uVar4;
            *(uint *)((longlong)puVar16 + 0xc) = uVar4;
            do {
              if (puVar15 != (undefined4 *)0x0) {
                uVar5 = *puVar21;
                puVar21 = puVar21 + 1;
                *puVar15 = uVar5;
              }
              uVar25 = uVar25 - 1;
              puVar15 = puVar15 + 1;
            } while (uVar25 != 0);
          }
          puVar23 = puVar23 + 2;
        }
        uVar27 = uVar27 - 1;
        puVar16 = puVar16 + 2;
      } while (uVar27 != 0);
    }
    param_1[0x38] = iVar3;
  }
  plVar2 = (longlong *)(param_1 + 0x3a);
  if ((longlong *)(param_2 + 0x3a) != plVar2) {
    iVar3 = param_2[0x3c];
    lVar7 = *(longlong *)(param_2 + 0x3a);
    if ((int)(param_1[0x3d] & 0x7fffffff) < iVar3) {
      FUN_144ca0c20(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    if (iVar3 < (int)param_1[0x3c]) {
      puVar15 = (undefined4 *)((longlong)iVar3 * 0x40 + *plVar2);
      puVar21 = (undefined4 *)((longlong)(int)param_1[0x3c] * 0x40 + *plVar2);
      if (puVar21 != puVar15) {
        puVar21 = puVar21 + 0xf;
        do {
          puVar21[-0x11] = 0;
          if ((-1 < (int)puVar21[-0x10]) && (*(longlong *)(puVar21 + -0x13) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar21 + -0x13),
                       (ulonglong)(puVar21[-0x10] & 0x7fffffff) << 2);
          }
          puVar22 = puVar21 + -0x1f;
          *(undefined8 *)(puVar21 + -0x13) = 0;
          puVar21[-0x10] = 0x80000000;
          puVar21 = puVar21 + -0x10;
        } while (puVar22 != puVar15);
      }
    }
    lVar24 = *plVar2;
    iVar8 = iVar3;
    if ((int)param_1[0x3c] < iVar3) {
      iVar8 = param_1[0x3c];
    }
    if ((lVar24 != lVar7) && (lVar26 = (longlong)iVar8, 0 < iVar8)) {
      puVar21 = (undefined4 *)(lVar24 + 0x20);
      lVar24 = lVar7 - lVar24;
      do {
        puVar23 = (undefined8 *)(puVar21 + 4);
        puVar21[-8] = *(undefined4 *)(lVar24 + -0x20 + (longlong)puVar21);
        puVar15 = (undefined4 *)(lVar24 + -0x10 + (longlong)puVar21);
        uVar5 = puVar15[1];
        uVar9 = puVar15[2];
        uVar10 = puVar15[3];
        puVar16 = (undefined8 *)((longlong)puVar21 + lVar24 + 0x10);
        puVar21[-4] = *puVar15;
        puVar21[-3] = uVar5;
        puVar21[-2] = uVar9;
        puVar21[-1] = uVar10;
        puVar15 = (undefined4 *)((longlong)puVar21 + lVar24);
        uVar5 = puVar15[1];
        uVar9 = puVar15[2];
        uVar10 = puVar15[3];
        *puVar21 = *puVar15;
        puVar21[1] = uVar5;
        puVar21[2] = uVar9;
        puVar21[3] = uVar10;
        if (puVar16 != puVar23) {
          uVar17 = *puVar16;
          iVar6 = *(int *)(lVar24 + 0x18 + (longlong)puVar21);
          if ((int)(puVar21[7] & 0x7fffffff) < iVar6) {
            FUN_144c6c5b0(puVar23,&PTR_vftable_14c6e47a0,(longlong)iVar6);
          }
          FUN_144b3d470(*puVar23,uVar17,(longlong)iVar6 * 4);
          puVar21[6] = iVar6;
        }
        puVar21 = puVar21 + 0x10;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    puVar21 = (undefined4 *)((longlong)iVar8 * 0x40 + lVar7);
    if (0 < iVar3 - iVar8) {
      puVar20 = puVar21 + 0xe;
      uVar27 = (ulonglong)(uint)(iVar3 - iVar8);
      puVar15 = (undefined4 *)(*plVar2 + (longlong)iVar8 * 0x40);
      do {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = *puVar21;
          uVar4 = puVar20[-9];
          uVar11 = puVar20[-8];
          uVar12 = puVar20[-7];
          puVar15[4] = puVar20[-10];
          puVar15[5] = uVar4;
          puVar15[6] = uVar11;
          puVar15[7] = uVar12;
          uVar4 = puVar20[-5];
          uVar11 = puVar20[-4];
          uVar12 = puVar20[-3];
          puVar15[8] = puVar20[-6];
          puVar15[9] = uVar4;
          puVar15[10] = uVar11;
          puVar15[0xb] = uVar12;
          *(undefined8 *)(puVar15 + 0xc) = 0;
          puVar15[0xe] = 0;
          puVar15[0xf] = 0x80000000;
          uVar4 = *puVar20;
          puVar22 = (undefined4 *)0x0;
          if (*(undefined4 **)(puVar20 + -2) != (undefined4 *)0x0) {
            puVar22 = *(undefined4 **)(puVar20 + -2);
          }
          if (0 < (int)uVar4) {
            uVar17 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                               (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 2);
            *(undefined8 *)(puVar15 + 0xc) = uVar17;
            uVar25 = (ulonglong)uVar4;
            puVar15[0xe] = uVar4;
            puVar15[0xf] = uVar4;
            puVar18 = *(undefined4 **)(puVar15 + 0xc);
            do {
              if (puVar18 != (undefined4 *)0x0) {
                uVar5 = *puVar22;
                puVar22 = puVar22 + 1;
                *puVar18 = uVar5;
              }
              uVar25 = uVar25 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar25 != 0);
          }
          puVar21 = puVar21 + 0x10;
          puVar20 = puVar20 + 0x10;
        }
        uVar27 = uVar27 - 1;
        puVar15 = puVar15 + 0x10;
      } while (uVar27 != 0);
    }
    param_1[0x3c] = iVar3;
  }
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)((longlong)param_2 + 0xf9);
  *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)((longlong)param_2 + 0xfa);
  return param_1;
}



// FUNCTION 144c97d20 FUN_144c97d20 body=338 status=ok
// SIG undefined FUN_144c97d20(void)

void FUN_144c97d20(longlong *param_1,longlong *param_2)

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
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar4 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] << 4);
    uVar2 = *(uint *)(param_1 + 1);
    puVar3 = (undefined8 *)*param_1;
    uVar9 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      puVar8 = (undefined4 *)(lVar4 + 0xc);
      puVar5 = puVar3;
      do {
        puVar1 = (undefined8 *)(puVar8 + -3);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar8[-1] = 0;
          *puVar8 = 0x80000000;
          FUN_143821c08(puVar5,&PTR_vftable_14c6e47a0);
          *puVar1 = *puVar5;
          puVar8[-1] = *(undefined4 *)(puVar5 + 1);
          *puVar8 = *(undefined4 *)((longlong)puVar5 + 0xc);
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar8 = puVar8 + 4;
        puVar5 = puVar5 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      puVar6 = (uint *)((longlong)puVar3 + 0xc);
      do {
        puVar6[-1] = 0;
        if ((-1 < (int)*puVar6) && (*(longlong *)(puVar6 + -3) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar6 + -3),
                     (ulonglong)(*puVar6 & 0x7fffffff) << 2);
        }
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        *puVar6 = 0x80000000;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    *param_1 = lVar4;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144c97e80 FUN_144c97e80 body=382 status=ok
// SIG undefined FUN_144c97e80(void)

void FUN_144c97e80(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar6 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] << 6);
    uVar1 = *(uint *)(param_1 + 1);
    puVar2 = (undefined4 *)*param_1;
    uVar9 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      puVar8 = (undefined4 *)(lVar6 + 0x38);
      uVar10 = (ulonglong)uVar1;
      puVar11 = (undefined8 *)(puVar2 + 0xe);
      puVar12 = puVar2;
      do {
        if (puVar8 + -0xe != (undefined4 *)0x0) {
          puVar8[-0xe] = *puVar12;
          uVar3 = *(undefined4 *)((longlong)puVar11 + -0x24);
          uVar4 = *(undefined4 *)(puVar11 + -4);
          uVar5 = *(undefined4 *)((longlong)puVar11 + -0x1c);
          puVar8[-10] = *(undefined4 *)(puVar11 + -5);
          puVar8[-9] = uVar3;
          puVar8[-8] = uVar4;
          puVar8[-7] = uVar5;
          uVar3 = *(undefined4 *)((longlong)puVar11 + -0x14);
          uVar4 = *(undefined4 *)(puVar11 + -2);
          uVar5 = *(undefined4 *)((longlong)puVar11 + -0xc);
          puVar8[-6] = *(undefined4 *)(puVar11 + -3);
          puVar8[-5] = uVar3;
          puVar8[-4] = uVar4;
          puVar8[-3] = uVar5;
          *(undefined8 *)(puVar8 + -2) = 0;
          *puVar8 = 0;
          puVar8[1] = 0x80000000;
          FUN_144c52690(puVar11 + -1,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar8 + -2) = puVar11[-1];
          *puVar8 = *(undefined4 *)puVar11;
          puVar8[1] = *(undefined4 *)((longlong)puVar11 + 4);
          puVar11[-1] = 0;
          *puVar11 = 0;
        }
        puVar8 = puVar8 + 0x10;
        puVar12 = puVar12 + 0x10;
        puVar11 = puVar11 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar7 = puVar2 + 0xf;
      do {
        puVar7[-1] = 0;
        if ((-1 < (int)*puVar7) && (*(longlong *)(puVar7 + -3) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar7 + -3),
                     (ulonglong)(*puVar7 & 0x7fffffff) << 2);
        }
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        *puVar7 = 0x80000000;
        puVar7 = puVar7 + 0x10;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    *param_1 = lVar6;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144c98000 FUN_144c98000 body=481 status=ok
// SIG undefined FUN_144c98000(void)

void FUN_144c98000(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1[0x2b] != 0) {
    FUN_144b3f230();
  }
  lVar2 = param_1[0x16];
  lVar3 = (longlong)*(int *)(param_1 + 0x17) * 0x60 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x60;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x16],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xbc) & 0x7fffffff) * 0x60);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  lVar2 = param_1[0x14];
  lVar3 = (longlong)*(int *)(param_1 + 0x15) * 0x60 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x60);
    lVar3 = lVar3 + -0x60;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x14],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) * 0x60);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  lVar2 = param_1[0x12];
  lVar3 = (longlong)*(int *)(param_1 + 0x13) * 0x100 + lVar2;
  while (lVar3 != lVar2) {
    lVar3 = lVar3 + -0x100;
    FUN_144fb0760(lVar3);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x12],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) << 8);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  FUN_1450119a0(param_1 + 4);
  param_1[3] = hkaiNavMeshSilhouetteSelector::vftable;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c981f0 FUN_144c981f0 body=1818 status=ok
// SIG undefined FUN_144c981f0(void)

longlong FUN_144c981f0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  
  FUN_144c970e0(param_1 + 0x20,param_2 + 0x20);
  plVar16 = (longlong *)(param_1 + 0x90);
  if ((longlong *)(param_2 + 0x90) != plVar16) {
    uVar3 = *(uint *)(param_2 + 0x98);
    lVar18 = *(longlong *)(param_2 + 0x90);
    if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < (int)uVar3) {
      FUN_144c9d630(plVar16,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
    }
    if ((int)uVar3 < *(int *)(param_1 + 0x98)) {
      lVar13 = *plVar16;
      lVar12 = (longlong)*(int *)(param_1 + 0x98) * 0x100 + *plVar16;
      while (lVar12 != (longlong)(int)uVar3 * 0x100 + lVar13) {
        lVar12 = lVar12 + -0x100;
        FUN_144fb0760(lVar12);
      }
    }
    lVar13 = *plVar16;
    uVar6 = uVar3;
    if (*(int *)(param_1 + 0x98) < (int)uVar3) {
      uVar6 = *(uint *)(param_1 + 0x98);
    }
    uVar21 = (ulonglong)uVar6;
    if ((lVar13 != lVar18) && (0 < (int)uVar6)) {
      lVar12 = lVar18 - lVar13;
      do {
        FUN_144c97710(lVar13,lVar12 + lVar13);
        lVar13 = lVar13 + 0x100;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    lVar18 = (longlong)(int)uVar6 * 0x100 + lVar18;
    if (0 < (int)(uVar3 - uVar6)) {
      uVar21 = (ulonglong)(uVar3 - uVar6);
      lVar13 = *plVar16 + (longlong)(int)uVar6 * 0x100;
      do {
        if (lVar13 != 0) {
          FUN_144c973f0(lVar13,lVar18);
          lVar18 = lVar18 + 0x100;
        }
        uVar21 = uVar21 - 1;
        lVar13 = lVar13 + 0x100;
      } while (uVar21 != 0);
    }
    *(uint *)(param_1 + 0x98) = uVar3;
  }
  plVar16 = (longlong *)(param_1 + 0xa0);
  if ((longlong *)(param_2 + 0xa0) != plVar16) {
    iVar4 = *(int *)(param_2 + 0xa8);
    lVar18 = *(longlong *)(param_2 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar4) {
      FUN_144c9d8c0(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    if (iVar4 < *(int *)(param_1 + 0xa8)) {
      lVar13 = *plVar16;
      lVar12 = (longlong)*(int *)(param_1 + 0xa8) * 0x60 + *plVar16;
      while (lVar12 != (longlong)iVar4 * 0x60 + lVar13) {
        plVar22 = (longlong *)(lVar12 + -0x60);
        lVar12 = lVar12 + -0x60;
        if (*plVar22 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar13 = *plVar16;
    iVar7 = iVar4;
    if (*(int *)(param_1 + 0xa8) < iVar4) {
      iVar7 = *(int *)(param_1 + 0xa8);
    }
    if ((lVar13 != lVar18) && (lVar12 = (longlong)iVar7, 0 < iVar7)) {
      puVar14 = (undefined8 *)(lVar13 + 0x20);
      lVar13 = lVar18 - lVar13;
      do {
        lVar5 = *(longlong *)(lVar13 + -0x20 + (longlong)puVar14);
        if (puVar14[-4] != lVar5) {
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = puVar14[-4];
          puVar14[-4] = *(undefined8 *)(lVar13 + -0x20 + (longlong)puVar14);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        puVar2 = (undefined8 *)(lVar13 + -0x10 + (longlong)puVar14);
        uVar11 = puVar2[1];
        puVar14[-2] = *puVar2;
        puVar14[-1] = uVar11;
        uVar11 = ((undefined8 *)(lVar13 + (longlong)puVar14))[1];
        *puVar14 = *(undefined8 *)(lVar13 + (longlong)puVar14);
        puVar14[1] = uVar11;
        puVar20 = (undefined4 *)(lVar13 + 0x10 + (longlong)puVar14);
        uVar8 = puVar20[1];
        uVar9 = puVar20[2];
        uVar10 = puVar20[3];
        *(undefined4 *)(puVar14 + 2) = *puVar20;
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar8;
        *(undefined4 *)(puVar14 + 3) = uVar9;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar10;
        puVar2 = (undefined8 *)(lVar13 + 0x20 + (longlong)puVar14);
        uVar11 = puVar2[1];
        puVar14[4] = *puVar2;
        puVar14[5] = uVar11;
        *(undefined1 *)(puVar14 + 6) = *(undefined1 *)(lVar13 + 0x30 + (longlong)puVar14);
        *(undefined1 *)((longlong)puVar14 + 0x31) =
             *(undefined1 *)(lVar13 + 0x31 + (longlong)puVar14);
        *(undefined1 *)((longlong)puVar14 + 0x32) =
             *(undefined1 *)(lVar13 + 0x32 + (longlong)puVar14);
        puVar14 = puVar14 + 0xc;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    plVar22 = (longlong *)(lVar18 + (longlong)iVar7 * 0x60);
    if (0 < iVar4 - iVar7) {
      plVar19 = plVar22 + 8;
      uVar21 = (ulonglong)(uint)(iVar4 - iVar7);
      plVar16 = (longlong *)(*plVar16 + (longlong)iVar7 * 0x60);
      do {
        if (plVar16 != (longlong *)0x0) {
          lVar18 = *plVar22;
          *plVar16 = lVar18;
          if (lVar18 != 0) {
            FUN_144b3d910();
          }
          lVar18 = plVar19[-5];
          plVar22 = plVar22 + 0xc;
          plVar16[2] = plVar19[-6];
          plVar16[3] = lVar18;
          lVar18 = plVar19[-3];
          plVar16[4] = plVar19[-4];
          plVar16[5] = lVar18;
          uVar8 = *(undefined4 *)((longlong)plVar19 + -0xc);
          lVar18 = plVar19[-1];
          uVar9 = *(undefined4 *)((longlong)plVar19 + -4);
          *(int *)(plVar16 + 6) = (int)plVar19[-2];
          *(undefined4 *)((longlong)plVar16 + 0x34) = uVar8;
          *(int *)(plVar16 + 7) = (int)lVar18;
          *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar9;
          lVar18 = plVar19[1];
          plVar16[8] = *plVar19;
          plVar16[9] = lVar18;
          *(char *)(plVar16 + 10) = (char)plVar19[2];
          *(undefined1 *)((longlong)plVar16 + 0x51) = *(undefined1 *)((longlong)plVar19 + 0x11);
          puVar1 = (undefined1 *)((longlong)plVar19 + 0x12);
          plVar19 = plVar19 + 0xc;
          *(undefined1 *)((longlong)plVar16 + 0x52) = *puVar1;
        }
        uVar21 = uVar21 - 1;
        plVar16 = plVar16 + 0xc;
      } while (uVar21 != 0);
    }
    *(int *)(param_1 + 0xa8) = iVar4;
  }
  plVar16 = (longlong *)(param_1 + 0xb0);
  if ((longlong *)(param_2 + 0xb0) != plVar16) {
    iVar4 = *(int *)(param_2 + 0xb8);
    lVar18 = *(longlong *)(param_2 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar4) {
      FUN_144c9d9f0(plVar16,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    if (iVar4 < *(int *)(param_1 + 0xb8)) {
      lVar13 = *plVar16;
      lVar12 = (longlong)*(int *)(param_1 + 0xb8) * 0x60 + *plVar16;
      while (lVar12 != (longlong)iVar4 * 0x60 + lVar13) {
        plVar22 = (longlong *)(lVar12 + -0x10);
        lVar12 = lVar12 + -0x60;
        if (*plVar22 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar13 = *plVar16;
    iVar7 = iVar4;
    if (*(int *)(param_1 + 0xb8) < iVar4) {
      iVar7 = *(int *)(param_1 + 0xb8);
    }
    if ((lVar13 != lVar18) && (lVar12 = (longlong)iVar7, 0 < iVar7)) {
      puVar14 = (undefined8 *)(lVar13 + 0x20);
      lVar13 = lVar18 - lVar13;
      do {
        *(undefined4 *)(puVar14 + -4) = *(undefined4 *)(lVar13 + -0x20 + (longlong)puVar14);
        *(undefined4 *)((longlong)puVar14 + -0x1c) =
             *(undefined4 *)(lVar13 + -0x1c + (longlong)puVar14);
        *(undefined1 *)(puVar14 + -3) = *(undefined1 *)(lVar13 + -0x18 + (longlong)puVar14);
        puVar2 = (undefined8 *)(lVar13 + -0x10 + (longlong)puVar14);
        uVar11 = puVar2[1];
        puVar14[-2] = *puVar2;
        puVar14[-1] = uVar11;
        uVar11 = ((undefined8 *)(lVar13 + (longlong)puVar14))[1];
        *puVar14 = *(undefined8 *)(lVar13 + (longlong)puVar14);
        puVar14[1] = uVar11;
        puVar20 = (undefined4 *)(lVar13 + 0x10 + (longlong)puVar14);
        uVar8 = puVar20[1];
        uVar9 = puVar20[2];
        uVar10 = puVar20[3];
        *(undefined4 *)(puVar14 + 2) = *puVar20;
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar8;
        *(undefined4 *)(puVar14 + 3) = uVar9;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar10;
        puVar20 = (undefined4 *)(lVar13 + 0x20 + (longlong)puVar14);
        uVar8 = puVar20[1];
        uVar9 = puVar20[2];
        uVar10 = puVar20[3];
        *(undefined4 *)(puVar14 + 4) = *puVar20;
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar8;
        *(undefined4 *)(puVar14 + 5) = uVar9;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar10;
        lVar5 = *(longlong *)(lVar13 + 0x30 + (longlong)puVar14);
        if (puVar14[6] != lVar5) {
          if (lVar5 != 0) {
            FUN_144b3d910();
          }
          lVar5 = puVar14[6];
          puVar14[6] = *(undefined8 *)(lVar13 + 0x30 + (longlong)puVar14);
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        puVar14 = puVar14 + 0xc;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    puVar20 = (undefined4 *)(lVar18 + (longlong)iVar7 * 0x60);
    if (0 < iVar4 - iVar7) {
      puVar15 = puVar20 + 0x10;
      uVar21 = (ulonglong)(uint)(iVar4 - iVar7);
      puVar17 = (undefined4 *)(*plVar16 + (longlong)iVar7 * 0x60);
      do {
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = *puVar20;
          puVar17[1] = puVar15[-0xf];
          *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(puVar15 + -0xe);
          uVar11 = *(undefined8 *)(puVar15 + -10);
          *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar15 + -0xc);
          *(undefined8 *)(puVar17 + 6) = uVar11;
          uVar11 = *(undefined8 *)(puVar15 + -6);
          *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(puVar15 + -8);
          *(undefined8 *)(puVar17 + 10) = uVar11;
          uVar8 = puVar15[-3];
          uVar9 = puVar15[-2];
          uVar10 = puVar15[-1];
          puVar17[0xc] = puVar15[-4];
          puVar17[0xd] = uVar8;
          puVar17[0xe] = uVar9;
          puVar17[0xf] = uVar10;
          uVar8 = puVar15[1];
          uVar9 = puVar15[2];
          uVar10 = puVar15[3];
          puVar17[0x10] = *puVar15;
          puVar17[0x11] = uVar8;
          puVar17[0x12] = uVar9;
          puVar17[0x13] = uVar10;
          lVar18 = *(longlong *)(puVar15 + 4);
          *(longlong *)(puVar17 + 0x14) = lVar18;
          if (lVar18 != 0) {
            FUN_144b3d910();
          }
          puVar20 = puVar20 + 0x18;
          puVar15 = puVar15 + 0x18;
        }
        uVar21 = uVar21 - 1;
        puVar17 = puVar17 + 0x18;
      } while (uVar21 != 0);
    }
    *(int *)(param_1 + 0xb8) = iVar4;
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  if (*(longlong *)(param_1 + 0x158) != *(longlong *)(param_2 + 0x158)) {
    if (*(longlong *)(param_2 + 0x158) != 0) {
      FUN_144b3d910();
    }
    lVar18 = *(longlong *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
    if (lVar18 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 144c98910 FUN_144c98910 body=62 status=ok
// SIG undefined FUN_144c98910(void)

undefined8 * FUN_144c98910(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6ecda0);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ecda0;
  return param_2;
}



// FUNCTION 144c98950 FUN_144c98950 body=18 status=ok
// SIG undefined FUN_144c98950(void)

undefined8 * FUN_144c98950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6350;
  return param_2;
}



// FUNCTION 144c98970 FUN_144c98970 body=185 status=ok
// SIG undefined FUN_144c98970(void)

undefined8 * FUN_144c98970(undefined8 *param_1)

{
  param_1[2] = 1;
  *param_1 = hkaiNavigator::NavigatorSettings::vftable;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  return param_1;
}



// FUNCTION 144c98a30 FUN_144c98a30 body=259 status=ok
// SIG undefined FUN_144c98a30(void)

longlong * FUN_144c98a30(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  if (param_2 != param_1) {
    lVar3 = *param_2;
    iVar2 = (int)param_2[1];
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144c9f4a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    lVar8 = *param_1;
    iVar4 = iVar2;
    if ((int)param_1[1] < iVar2) {
      iVar4 = (int)param_1[1];
    }
    if ((lVar8 != lVar3) && (lVar7 = (longlong)iVar4, 0 < iVar4)) {
      puVar6 = (undefined8 *)(lVar8 + 0x10);
      lVar8 = lVar3 - lVar8;
      do {
        puVar9 = (undefined8 *)(lVar8 + -0x10 + (longlong)puVar6);
        uVar5 = puVar9[1];
        puVar6[-2] = *puVar9;
        puVar6[-1] = uVar5;
        uVar5 = ((undefined8 *)(lVar8 + (longlong)puVar6))[1];
        *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
        puVar6[1] = uVar5;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(lVar8 + 0x10 + (longlong)puVar6);
        *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)(lVar8 + 0x14 + (longlong)puVar6);
        puVar6 = puVar6 + 6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar6 = (undefined8 *)((longlong)iVar4 * 0x30 + lVar3);
    if (0 < iVar2 - iVar4) {
      uVar10 = (ulonglong)(uint)(iVar2 - iVar4);
      puVar9 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x30);
      do {
        if (puVar9 != (undefined8 *)0x0) {
          uVar5 = puVar6[1];
          *puVar9 = *puVar6;
          puVar9[1] = uVar5;
          uVar5 = puVar6[3];
          puVar9[2] = puVar6[2];
          puVar9[3] = uVar5;
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar6 + 4);
          puVar1 = (undefined4 *)((longlong)puVar6 + 0x24);
          puVar6 = puVar6 + 6;
          *(undefined4 *)((longlong)puVar9 + 0x24) = *puVar1;
        }
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + 6;
      } while (uVar10 != 0);
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_1;
}



// FUNCTION 144c98b40 FUN_144c98b40 body=87 status=ok
// SIG undefined FUN_144c98b40(void)

undefined8 FUN_144c98b40(undefined8 param_1,ulonglong param_2)

{
  FUN_145011ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 144c98ba0 FUN_144c98ba0 body=18 status=ok
// SIG undefined FUN_144c98ba0(void)

undefined8 * FUN_144c98ba0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ebc40;
  return param_2;
}



// FUNCTION 144c98bc0 FUN_144c98bc0 body=951 status=ok
// SIG undefined FUN_144c98bc0(void)

longlong FUN_144c98bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  LOCK();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  UNLOCK();
  if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_144b3d910();
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    if (lVar9 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_144b3d910();
    }
    lVar9 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    if (lVar9 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_144b3d910();
    }
    lVar9 = *(longlong *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    if (lVar9 != 0) {
      FUN_144b3f230();
    }
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  if ((longlong *)(param_2 + 0x48) != plVar1) {
    lVar9 = *(longlong *)(param_2 + 0x48);
    iVar6 = *(int *)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar6) {
      FUN_144c9dbe0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    if (iVar6 < *(int *)(param_1 + 0x50)) {
      puVar17 = (undefined4 *)((longlong)*(int *)(param_1 + 0x50) * 0x60 + *plVar1);
      puVar21 = (undefined4 *)((longlong)iVar6 * 0x60 + *plVar1);
      if (puVar17 != puVar21) {
        puVar17 = puVar17 + 0x17;
        do {
          puVar17[-0x19] = 0;
          if ((-1 < (int)puVar17[-0x18]) && (*(longlong *)(puVar17 + -0x1b) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar17 + -0x1b),
                       (ulonglong)(puVar17[-0x18] & 0x7fffffff) << 2);
          }
          puVar20 = puVar17 + -0x2f;
          *(undefined8 *)(puVar17 + -0x1b) = 0;
          puVar17[-0x18] = 0x80000000;
          puVar17 = puVar17 + -0x18;
        } while (puVar20 != puVar21);
      }
    }
    lVar15 = *plVar1;
    iVar10 = iVar6;
    if (*(int *)(param_1 + 0x50) < iVar6) {
      iVar10 = *(int *)(param_1 + 0x50);
    }
    if ((lVar15 != lVar9) && (lVar24 = (longlong)iVar10, 0 < iVar10)) {
      puVar19 = (uint *)(lVar15 + 0x5c);
      lVar15 = lVar9 - lVar15;
      do {
        puVar2 = puVar19 + -3;
        puVar19[-0x17] = *(uint *)(lVar15 + -0x5c + (longlong)puVar19);
        puVar3 = (uint *)(lVar15 + -0xc + (longlong)puVar19);
        puVar4 = (undefined8 *)(lVar15 + -0x4c + (longlong)puVar19);
        uVar16 = puVar4[1];
        *(undefined8 *)(puVar19 + -0x13) = *puVar4;
        *(undefined8 *)(puVar19 + -0x11) = uVar16;
        puVar4 = (undefined8 *)(lVar15 + -0x3c + (longlong)puVar19);
        uVar16 = puVar4[1];
        *(undefined8 *)(puVar19 + -0xf) = *puVar4;
        *(undefined8 *)(puVar19 + -0xd) = uVar16;
        puVar5 = (uint *)(lVar15 + -0x2c + (longlong)puVar19);
        uVar7 = puVar5[1];
        uVar11 = puVar5[2];
        uVar12 = puVar5[3];
        puVar19[-0xb] = *puVar5;
        puVar19[-10] = uVar7;
        puVar19[-9] = uVar11;
        puVar19[-8] = uVar12;
        puVar5 = (uint *)(lVar15 + -0x1c + (longlong)puVar19);
        uVar7 = puVar5[1];
        uVar11 = puVar5[2];
        uVar12 = puVar5[3];
        puVar19[-7] = *puVar5;
        puVar19[-6] = uVar7;
        puVar19[-5] = uVar11;
        puVar19[-4] = uVar12;
        if (puVar3 != puVar2) {
          uVar16 = *(undefined8 *)puVar3;
          uVar7 = *(uint *)(lVar15 + -4 + (longlong)puVar19);
          if ((int)(*puVar19 & 0x7fffffff) < (int)uVar7) {
            FUN_141807e20(puVar2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar7);
          }
          FUN_144b3d470(*(undefined8 *)puVar2,uVar16,(longlong)(int)uVar7 * 4);
          puVar19[-1] = uVar7;
        }
        puVar19 = puVar19 + 0x18;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    puVar17 = (undefined4 *)((longlong)iVar10 * 0x60 + lVar9);
    if (0 < iVar6 - iVar10) {
      uVar23 = (ulonglong)(uint)(iVar6 - iVar10);
      puVar21 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar10 * 0x60);
      do {
        if (puVar21 != (undefined4 *)0x0) {
          *puVar21 = *puVar17;
          uVar16 = *(undefined8 *)(puVar17 + 6);
          *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar17 + 4);
          *(undefined8 *)(puVar21 + 6) = uVar16;
          uVar16 = *(undefined8 *)(puVar17 + 10);
          *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(puVar17 + 8);
          *(undefined8 *)(puVar21 + 10) = uVar16;
          uVar8 = puVar17[0xd];
          uVar13 = puVar17[0xe];
          uVar14 = puVar17[0xf];
          puVar21[0xc] = puVar17[0xc];
          puVar21[0xd] = uVar8;
          puVar21[0xe] = uVar13;
          puVar21[0xf] = uVar14;
          uVar8 = puVar17[0x11];
          uVar13 = puVar17[0x12];
          uVar14 = puVar17[0x13];
          puVar21[0x10] = puVar17[0x10];
          puVar21[0x11] = uVar8;
          puVar21[0x12] = uVar13;
          puVar21[0x13] = uVar14;
          *(undefined8 *)(puVar21 + 0x14) = 0;
          puVar21[0x16] = 0;
          puVar21[0x17] = 0x80000000;
          uVar7 = puVar17[0x16];
          puVar20 = (undefined4 *)0x0;
          if (*(undefined4 **)(puVar17 + 0x14) != (undefined4 *)0x0) {
            puVar20 = *(undefined4 **)(puVar17 + 0x14);
          }
          if (0 < (int)uVar7) {
            uVar16 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                               (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 << 2);
            *(undefined8 *)(puVar21 + 0x14) = uVar16;
            uVar22 = (ulonglong)uVar7;
            puVar21[0x16] = uVar7;
            puVar21[0x17] = uVar7;
            puVar18 = *(undefined4 **)(puVar21 + 0x14);
            do {
              if (puVar18 != (undefined4 *)0x0) {
                uVar8 = *puVar20;
                puVar20 = puVar20 + 1;
                *puVar18 = uVar8;
              }
              uVar22 = uVar22 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar22 != 0);
          }
          puVar17 = puVar17 + 0x18;
        }
        uVar23 = uVar23 - 1;
        puVar21 = puVar21 + 0x18;
      } while (uVar23 != 0);
    }
    *(int *)(param_1 + 0x50) = iVar6;
  }
  return param_1;
}



// FUNCTION 144c98f80 FUN_144c98f80 body=87 status=ok
// SIG undefined FUN_144c98f80(void)

undefined8 FUN_144c98f80(undefined8 param_1,ulonglong param_2)

{
  FUN_144fbdce0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 144c98fe0 FUN_144c98fe0 body=358 status=ok
// SIG undefined FUN_144c98fe0(void)

undefined8 * FUN_144c98fe0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  puVar10 = (undefined4 *)*param_2;
  if (0 < (int)uVar1) {
    puVar6 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    *param_1 = puVar6;
    uVar8 = (ulonglong)uVar1;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = *puVar10;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        puVar10 = puVar10 + 4;
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        puVar6[2] = uVar4;
        puVar6[3] = uVar5;
      }
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 4;
    } while (uVar8 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 3);
  puVar12 = (undefined8 *)param_2[2];
  if (0 < (int)uVar1) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    param_1[2] = uVar7;
    uVar8 = (ulonglong)uVar1;
    *(uint *)(param_1 + 3) = uVar1;
    *(uint *)((longlong)param_1 + 0x1c) = uVar1;
    puVar11 = (undefined8 *)param_1[2];
    do {
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0x80000000;
        uVar1 = *(uint *)(puVar12 + 1);
        puVar10 = (undefined4 *)*puVar12;
        if (0 < (int)uVar1) {
          puVar6 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
          *puVar11 = puVar6;
          uVar9 = (ulonglong)uVar1;
          *(uint *)(puVar11 + 1) = uVar1;
          *(uint *)((longlong)puVar11 + 0xc) = uVar1;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar2 = *puVar10;
              uVar3 = puVar10[1];
              uVar4 = puVar10[2];
              uVar5 = puVar10[3];
              puVar10 = puVar10 + 4;
              *puVar6 = uVar2;
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
            }
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = puVar12 + 2;
      }
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 2;
    } while (uVar8 != 0);
  }
  return param_1;
}



// FUNCTION 144c99150 FUN_144c99150 body=420 status=ok
// SIG undefined FUN_144c99150(void)

undefined4 * FUN_144c99150(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  *param_1 = *param_2;
  uVar7 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar7;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  uVar2 = param_2[0x18];
  puVar10 = *(undefined4 **)(param_2 + 0x16);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
    *(undefined8 *)(param_1 + 0x16) = uVar7;
    uVar9 = (ulonglong)uVar2;
    param_1[0x18] = uVar2;
    param_1[0x19] = uVar2;
    puVar8 = *(undefined4 **)(param_1 + 0x16);
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar10 = puVar10 + 4;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      uVar9 = uVar9 - 1;
      puVar8 = puVar8 + 4;
    } while (uVar9 != 0);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x80000000;
  uVar2 = param_2[0x1c];
  puVar10 = *(undefined4 **)(param_2 + 0x1a);
  if (0 < (int)uVar2) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
    *(undefined8 *)(param_1 + 0x1a) = uVar7;
    uVar9 = (ulonglong)uVar2;
    param_1[0x1c] = uVar2;
    param_1[0x1d] = uVar2;
    puVar8 = *(undefined4 **)(param_1 + 0x1a);
    do {
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        *puVar8 = *puVar10;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        puVar1 = (undefined8 *)(puVar10 + 4);
        uVar7 = *(undefined8 *)(puVar10 + 6);
        puVar10 = puVar10 + 8;
        *(undefined8 *)(puVar8 + 4) = *puVar1;
        *(undefined8 *)(puVar8 + 6) = uVar7;
      }
      uVar9 = uVar9 - 1;
      puVar8 = puVar8 + 8;
    } while (uVar9 != 0);
  }
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  FUN_144c98fe0(param_1 + 0x20,param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  return param_1;
}



// FUNCTION 144c99300 FUN_144c99300 body=359 status=ok
// SIG undefined FUN_144c99300(void)

void FUN_144c99300(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x1f];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x20) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1f],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x104) & 0x7fffffff) << 3);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  lVar2 = param_1[0x1d];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x1e) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1d],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xf4) & 0x7fffffff) << 3);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  if (param_1[0x1c] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1b] != 0) {
    FUN_144b3f230();
  }
  FUN_147e4aaf0(param_1 + 0x14);
  FUN_147e4ab7c(param_1 + 0xe);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c99470 FUN_144c99470 body=1128 status=ok
// SIG undefined FUN_144c99470(void)

longlong FUN_144c99470(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  puVar1 = (undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  if ((undefined8 *)(param_2 + 0x78) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x80);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0x80) = iVar2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if ((undefined8 *)(param_2 + 0x88) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x88);
    if ((int)(*(uint *)(param_1 + 0x94) & 0x7fffffff) < iVar2) {
      FUN_147e4a550(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 5);
    *(int *)(param_1 + 0x90) = iVar2;
  }
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  FUN_147e4a4bc(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  if (*(longlong *)(param_1 + 0xd8) != *(longlong *)(param_2 + 0xd8)) {
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      FUN_144b3d910();
    }
    lVar6 = *(longlong *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
    if (lVar6 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0xe0) != *(longlong *)(param_2 + 0xe0)) {
    if (*(longlong *)(param_2 + 0xe0) != 0) {
      FUN_144b3d910();
    }
    lVar6 = *(longlong *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    if (lVar6 != 0) {
      FUN_144b3f230();
    }
  }
  plVar10 = (longlong *)(param_1 + 0xe8);
  if ((longlong *)(param_2 + 0xe8) != plVar10) {
    iVar2 = *(int *)(param_2 + 0xf0);
    plVar8 = *(longlong **)(param_2 + 0xe8);
    if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar2) {
      FUN_144c9de40(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0xf0)) {
      lVar11 = *plVar10;
      lVar6 = lVar11 + (longlong)*(int *)(param_1 + 0xf0) * 8;
      while (lVar6 != lVar11 + (longlong)iVar2 * 8) {
        plVar7 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar7 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar7 = (longlong *)*plVar10;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0xf0) < iVar2) {
      iVar5 = *(int *)(param_1 + 0xf0);
    }
    if ((plVar7 != plVar8) && (lVar6 = (longlong)iVar5, 0 < iVar5)) {
      lVar11 = (longlong)plVar8 - (longlong)plVar7;
      do {
        lVar4 = *(longlong *)(lVar11 + (longlong)plVar7);
        if (*plVar7 != lVar4) {
          if (lVar4 != 0) {
            FUN_144b3d910();
          }
          lVar4 = *plVar7;
          *plVar7 = *(longlong *)(lVar11 + (longlong)plVar7);
          if (lVar4 != 0) {
            FUN_144b3f230();
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    plVar8 = plVar8 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar9 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar10 = (longlong *)(*plVar10 + (longlong)iVar5 * 8);
      do {
        if (plVar10 != (longlong *)0x0) {
          lVar6 = *plVar8;
          *plVar10 = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          plVar8 = plVar8 + 1;
        }
        uVar9 = uVar9 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 0xf0) = iVar2;
  }
  plVar10 = (longlong *)(param_1 + 0xf8);
  if ((longlong *)(param_2 + 0xf8) != plVar10) {
    iVar2 = *(int *)(param_2 + 0x100);
    plVar8 = *(longlong **)(param_2 + 0xf8);
    if ((int)(*(uint *)(param_1 + 0x104) & 0x7fffffff) < iVar2) {
      FUN_144c9df20(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x100)) {
      lVar11 = *plVar10;
      lVar6 = lVar11 + (longlong)*(int *)(param_1 + 0x100) * 8;
      while (lVar6 != lVar11 + (longlong)iVar2 * 8) {
        plVar7 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar7 != 0) {
          FUN_144b3f230();
        }
      }
    }
    plVar7 = (longlong *)*plVar10;
    iVar5 = iVar2;
    if (*(int *)(param_1 + 0x100) < iVar2) {
      iVar5 = *(int *)(param_1 + 0x100);
    }
    if ((plVar7 != plVar8) && (lVar6 = (longlong)iVar5, 0 < iVar5)) {
      lVar11 = (longlong)plVar8 - (longlong)plVar7;
      do {
        lVar4 = *(longlong *)(lVar11 + (longlong)plVar7);
        if (*plVar7 != lVar4) {
          if (lVar4 != 0) {
            FUN_144b3d910();
          }
          lVar4 = *plVar7;
          *plVar7 = *(longlong *)(lVar11 + (longlong)plVar7);
          if (lVar4 != 0) {
            FUN_144b3f230();
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    plVar8 = plVar8 + iVar5;
    if (0 < iVar2 - iVar5) {
      uVar9 = (ulonglong)(uint)(iVar2 - iVar5);
      plVar10 = (longlong *)(*plVar10 + (longlong)iVar5 * 8);
      do {
        if (plVar10 != (longlong *)0x0) {
          lVar6 = *plVar8;
          *plVar10 = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          plVar8 = plVar8 + 1;
        }
        uVar9 = uVar9 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 0x100) = iVar2;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  return param_1;
}



// FUNCTION 144c998e0 FUN_144c998e0 body=103 status=ok
// SIG undefined FUN_144c998e0(void)

void FUN_144c998e0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c99950 FUN_144c99950 body=247 status=ok
// SIG undefined FUN_144c99950(void)

void FUN_144c99950(longlong *param_1)

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
      lVar9 = lVar9 + 0x38;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c99a50 FUN_144c99a50 body=221 status=ok
// SIG undefined FUN_144c99a50(void)

void FUN_144c99a50(undefined8 *param_1,longlong *param_2)

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
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined4 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x38);
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
          FUN_144c92480(puVar3 + 2,puVar7 + 2);
        }
        puVar3 = puVar3 + 0xe;
        puVar7 = puVar7 + 0xe;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar4 = puVar4 + 2;
      do {
        FUN_144c432b0(puVar4);
        puVar4 = puVar4 + 0xe;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = puVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c99b30 FUN_144c99b30 body=188 status=ok
// SIG undefined FUN_144c99b30(void)

longlong * FUN_144c99b30(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = (longlong)(int)param_1[1] * 0x38 + lVar1; lVar2 != lVar1; lVar2 = lVar2 + -0x38) {
    FUN_144c432b0(lVar2 + -0x30);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x38);
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



// FUNCTION 144c99bf0 FUN_144c99bf0 body=247 status=ok
// SIG undefined FUN_144c99bf0(void)

void FUN_144c99bf0(longlong *param_1)

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
      lVar9 = lVar9 + 0x28;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c99cf0 FUN_144c99cf0 body=223 status=ok
// SIG undefined FUN_144c99cf0(void)

void FUN_144c99cf0(undefined8 *param_1,longlong *param_2)

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
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined4 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x28);
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
          FUN_144c91660(puVar3 + 2,puVar7 + 2);
        }
        puVar3 = puVar3 + 10;
        puVar7 = puVar7 + 10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar4 = puVar4 + 2;
      do {
        FUN_144c914e0(puVar4);
        puVar4 = puVar4 + 10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = puVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c99dd0 FUN_144c99dd0 body=192 status=ok
// SIG undefined FUN_144c99dd0(void)

longlong * FUN_144c99dd0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = lVar1 + (longlong)(int)param_1[1] * 0x28; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    FUN_144c914e0(lVar2 + -0x20);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x28);
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



// FUNCTION 144c99e90 FUN_144c99e90 body=247 status=ok
// SIG undefined FUN_144c99e90(void)

void FUN_144c99e90(longlong *param_1)

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
      lVar9 = lVar9 + 0x10;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c99f90 FUN_144c99f90 body=197 status=ok
// SIG undefined FUN_144c99f90(void)

void FUN_144c99f90(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
    ;
    uVar1 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar1;
    puVar2 = (undefined4 *)*param_1;
    uVar7 = (ulonglong)uVar1;
    puVar4 = puVar3;
    puVar8 = puVar2;
    if (0 < (int)uVar1) {
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar8;
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)(puVar8 + 2) = 0;
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar5 != 0);
      plVar6 = (longlong *)(puVar2 + 2);
      do {
        if (*plVar6 != 0) {
          FUN_144b3f230();
        }
        plVar6 = plVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_1 = puVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c9a060 FUN_144c9a060 body=195 status=ok
// SIG undefined FUN_144c9a060(void)

longlong * FUN_144c9a060(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
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



// FUNCTION 144c9a130 FUN_144c9a130 body=247 status=ok
// SIG undefined FUN_144c9a130(void)

void FUN_144c9a130(longlong *param_1)

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
      lVar9 = lVar9 + 0x68;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9a230 FUN_144c9a230 body=246 status=ok
// SIG undefined FUN_144c9a230(void)

void FUN_144c9a230(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != param_1) {
    FUN_144c9a460(param_1,0);
    if (param_1 != (longlong *)0x0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
      FUN_144c9a330(param_2,&PTR_vftable_14c6e47a0);
      *param_1 = *param_2;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  FUN_144c9a130(param_1);
  lVar2 = *param_2;
  lVar3 = (longlong)(int)param_2[1] * 0x68 + lVar2;
  if (lVar3 != lVar2) {
    lVar3 = lVar3 + 0x28;
    do {
      FUN_144c914e0(lVar3 + -0x48);
      FUN_144c91260(lVar3 + -0x68);
      FUN_144c90d90(lVar3 + -0x88);
      lVar1 = lVar3 + -0x90;
      lVar3 = lVar3 + -0x68;
    } while (lVar1 != lVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) * 0x68);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c9a330 FUN_144c9a330 body=290 status=ok
// SIG undefined FUN_144c9a330(void)

void FUN_144c9a330(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x68);
    uVar1 = *(uint *)(param_1 + 1);
    puVar4 = (undefined4 *)*param_1;
    uVar5 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      lVar3 = lVar2 + 0x48;
      puVar7 = puVar4 + 0x12;
      uVar8 = (ulonglong)uVar1;
      puVar6 = puVar4;
      do {
        if ((undefined4 *)(lVar3 + -0x48) != (undefined4 *)0x0) {
          *(undefined4 *)(lVar3 + -0x48) = *puVar6;
          FUN_144c90eb0(lVar3 + -0x40,puVar7 + -0x10);
          FUN_144c91390(lVar3 + -0x20,puVar7 + -8);
          FUN_144c91660(lVar3,puVar7);
        }
        lVar3 = lVar3 + 0x68;
        puVar6 = puVar6 + 0x1a;
        puVar7 = puVar7 + 0x1a;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      puVar4 = puVar4 + 10;
      do {
        FUN_144c914e0(puVar4 + 8);
        FUN_144c91260(puVar4);
        FUN_144c90d90(puVar4 + -8);
        puVar4 = puVar4 + 0x1a;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *param_1 = lVar2;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144c9a460 FUN_144c9a460 body=209 status=ok
// SIG undefined FUN_144c9a460(void)

longlong * FUN_144c9a460(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x68 + lVar2;
  if (lVar3 != lVar2) {
    lVar3 = lVar3 + 0x28;
    do {
      FUN_144c914e0(lVar3 + -0x48);
      FUN_144c91260(lVar3 + -0x68);
      FUN_144c90d90(lVar3 + -0x88);
      lVar1 = lVar3 + -0x90;
      lVar3 = lVar3 + -0x68;
    } while (lVar1 != lVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x68);
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



// FUNCTION 144c9a540 FUN_144c9a540 body=247 status=ok
// SIG undefined FUN_144c9a540(void)

void FUN_144c9a540(longlong *param_1)

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
      lVar9 = lVar9 + 0x18;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9a640 FUN_144c9a640 body=285 status=ok
// SIG undefined FUN_144c9a640(void)

void FUN_144c9a640(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != param_1) {
    FUN_144c9a8e0(param_1,0);
    if (param_1 != (longlong *)0x0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
      FUN_144c9a760(param_2,&PTR_vftable_14c6e47a0);
      *param_1 = *param_2;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  FUN_144c9a540(param_1);
  puVar2 = (undefined4 *)*param_2;
  if (puVar2 + (longlong)(int)param_2[1] * 6 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_2[1] * 6 + 5;
    do {
      puVar3[-7] = 0;
      if ((-1 < (int)puVar3[-6]) && (*(longlong *)(puVar3 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -9),
                   (ulonglong)(puVar3[-6] & 0x7fffffff) * 0x14);
      }
      puVar1 = puVar3 + -0xb;
      *(undefined8 *)(puVar3 + -9) = 0;
      puVar3[-6] = 0x80000000;
      puVar3 = puVar3 + -6;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c9a760 FUN_144c9a760 body=371 status=ok
// SIG undefined FUN_144c9a760(void)

void FUN_144c9a760(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x18);
    puVar7 = (uint *)*param_1;
    uVar1 = *(uint *)(param_1 + 1);
    puVar3 = puVar7 + 5;
    if (0 < (int)uVar1) {
      puVar4 = (uint *)(lVar2 + 0x14);
      uVar5 = (ulonglong)uVar1;
      puVar6 = puVar3;
      do {
        if (puVar4 + -5 != (uint *)0x0) {
          puVar4[-5] = *puVar7;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0x80000000;
          FUN_144c33a50(puVar6 + -3,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar6 + -3);
          puVar4[-1] = puVar6[-1];
          *puVar4 = *puVar6;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          puVar6[0] = 0;
        }
        puVar4 = puVar4 + 6;
        puVar7 = puVar7 + 6;
        puVar6 = puVar6 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar5 = (ulonglong)uVar1;
      do {
        puVar3[-1] = 0;
        if ((-1 < (int)*puVar3) && (*(longlong *)(puVar3 + -3) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -3),
                     (ulonglong)(*puVar3 & 0x7fffffff) * 0x14);
        }
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        *puVar3 = 0x80000000;
        puVar3 = puVar3 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 144c9a8e0 FUN_144c9a8e0 body=271 status=ok
// SIG undefined FUN_144c9a8e0(void)

longlong * FUN_144c9a8e0(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 6 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar3[-7] = 0;
      if ((-1 < (int)puVar3[-6]) && (*(longlong *)(puVar3 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -9),
                   (ulonglong)(puVar3[-6] & 0x7fffffff) * 0x14);
      }
      puVar1 = puVar3 + -0xb;
      *(undefined8 *)(puVar3 + -9) = 0;
      puVar3[-6] = 0x80000000;
      puVar3 = puVar3 + -6;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
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



// FUNCTION 144c9a9f0 FUN_144c9a9f0 body=247 status=ok
// SIG undefined FUN_144c9a9f0(void)

void FUN_144c9a9f0(longlong *param_1)

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
      lVar9 = lVar9 + 8;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9aaf0 FUN_144c9aaf0 body=209 status=ok
// SIG undefined FUN_144c9aaf0(void)

void FUN_144c9aaf0(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c9abd0(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c9a9f0(param_1);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c9abd0 FUN_144c9abd0 body=103 status=ok
// SIG undefined FUN_144c9abd0(void)

void FUN_144c9abd0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c9ac40 FUN_144c9ac40 body=247 status=ok
// SIG undefined FUN_144c9ac40(void)

void FUN_144c9ac40(longlong *param_1)

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
      lVar9 = lVar9 + 4;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9ad40 FUN_144c9ad40 body=209 status=ok
// SIG undefined FUN_144c9ad40(void)

void FUN_144c9ad40(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_143821c08(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c9ac40(param_1);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 2);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c9ae20 FUN_144c9ae20 body=247 status=ok
// SIG undefined FUN_144c9ae20(void)

void FUN_144c9ae20(longlong *param_1)

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
      lVar9 = lVar9 + 0x18;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9af20 FUN_144c9af20 body=297 status=ok
// SIG undefined FUN_144c9af20(void)

void FUN_144c9af20(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != param_1) {
    FUN_144c9b1d0(param_1,0);
    if (param_1 != (longlong *)0x0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
      FUN_144c9b050(param_2,&PTR_vftable_14c6e47a0);
      *param_1 = *param_2;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  FUN_144c9ae20(param_1);
  puVar2 = (undefined4 *)*param_2;
  if (puVar2 + (longlong)(int)param_2[1] * 6 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_2[1] * 6 + 5;
    do {
      puVar3[-7] = 0;
      if ((-1 < (int)puVar3[-6]) && (*(longlong *)(puVar3 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -9),
                   (ulonglong)(puVar3[-6] & 0x7fffffff) << 3);
      }
      puVar1 = puVar3 + -0xb;
      *(undefined8 *)(puVar3 + -9) = 0;
      puVar3[-6] = 0x80000000;
      puVar3 = puVar3 + -6;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c9b050 FUN_144c9b050 body=369 status=ok
// SIG undefined FUN_144c9b050(void)

void FUN_144c9b050(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x18);
    puVar7 = (uint *)*param_1;
    uVar1 = *(uint *)(param_1 + 1);
    puVar3 = puVar7 + 5;
    if (0 < (int)uVar1) {
      puVar4 = (uint *)(lVar2 + 0x14);
      uVar5 = (ulonglong)uVar1;
      puVar6 = puVar3;
      do {
        if (puVar4 + -5 != (uint *)0x0) {
          puVar4[-5] = *puVar7;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0x80000000;
          FUN_144c998e0(puVar6 + -3,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar6 + -3);
          puVar4[-1] = puVar6[-1];
          *puVar4 = *puVar6;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          puVar6[0] = 0;
        }
        puVar4 = puVar4 + 6;
        puVar7 = puVar7 + 6;
        puVar6 = puVar6 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar5 = (ulonglong)uVar1;
      do {
        puVar3[-1] = 0;
        if ((-1 < (int)*puVar3) && (*(longlong *)(puVar3 + -3) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -3),
                     (ulonglong)(*puVar3 & 0x7fffffff) << 3);
        }
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        *puVar3 = 0x80000000;
        puVar3 = puVar3 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 144c9b1d0 FUN_144c9b1d0 body=269 status=ok
// SIG undefined FUN_144c9b1d0(void)

longlong * FUN_144c9b1d0(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 6 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar3[-7] = 0;
      if ((-1 < (int)puVar3[-6]) && (*(longlong *)(puVar3 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -9),
                   (ulonglong)(puVar3[-6] & 0x7fffffff) << 3);
      }
      puVar1 = puVar3 + -0xb;
      *(undefined8 *)(puVar3 + -9) = 0;
      puVar3[-6] = 0x80000000;
      puVar3 = puVar3 + -6;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
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



// FUNCTION 144c9b2e0 FUN_144c9b2e0 body=247 status=ok
// SIG undefined FUN_144c9b2e0(void)

void FUN_144c9b2e0(longlong *param_1)

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
      lVar9 = lVar9 + 0x28;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9b3e0 FUN_144c9b3e0 body=223 status=ok
// SIG undefined FUN_144c9b3e0(void)

void FUN_144c9b3e0(undefined8 *param_1,longlong *param_2)

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
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined4 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x28);
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
          FUN_144c95220(puVar3 + 2,puVar7 + 2);
        }
        puVar3 = puVar3 + 10;
        puVar7 = puVar7 + 10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar4 = puVar4 + 4;
      do {
        FUN_144bf90d0(puVar4);
        puVar4 = puVar4 + 10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = puVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c9b4c0 FUN_144c9b4c0 body=192 status=ok
// SIG undefined FUN_144c9b4c0(void)

longlong * FUN_144c9b4c0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = lVar1 + (longlong)(int)param_1[1] * 0x28; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    FUN_144bf90d0(lVar2 + -0x18);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x28);
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



// FUNCTION 144c9b580 FUN_144c9b580 body=247 status=ok
// SIG undefined FUN_144c9b580(void)

void FUN_144c9b580(longlong *param_1)

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
      lVar9 = lVar9 + 8;
      uVar7 = uVar7 + 1;
      *puVar5 = uVar8;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144c9b680 FUN_144c9b680 body=209 status=ok
// SIG undefined FUN_144c9b680(void)

void FUN_144c9b680(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c9b760(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_144c9b580(param_1);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_2,
               (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c9b760 FUN_144c9b760 body=103 status=ok
// SIG undefined FUN_144c9b760(void)

void FUN_144c9b760(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144c9b7d0 FUN_144c9b7d0 body=158 status=ok
// SIG undefined FUN_144c9b7d0(void)

void FUN_144c9b7d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9b870 FUN_144c9b870 body=247 status=ok
// SIG undefined FUN_144c9b870(void)

void FUN_144c9b870(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9b970 FUN_144c9b970 body=163 status=ok
// SIG undefined FUN_144c9b970(void)

void FUN_144c9b970(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9ba20 FUN_144c9ba20 body=243 status=ok
// SIG undefined FUN_144c9ba20(void)

void FUN_144c9ba20(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  uVar4 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    lVar3 = lVar2;
    lVar5 = lVar6;
    do {
      if (lVar3 != 0) {
        FUN_144c6c690(lVar3,lVar5);
      }
      lVar3 = lVar3 + 0x10;
      lVar5 = lVar5 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    do {
      FUN_144c6c6b0(lVar6);
      lVar6 = lVar6 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9bb20 FUN_144c9bb20 body=159 status=ok
// SIG undefined FUN_144c9bb20(void)

void FUN_144c9bb20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9bbc0 FUN_144c9bbc0 body=309 status=ok
// SIG undefined FUN_144c9bbc0(void)

void FUN_144c9bbc0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  uVar1 = *(uint *)(param_1 + 1);
  plVar6 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined1 *)(lVar3 + 0x10);
    uVar8 = (ulonglong)uVar1;
    plVar5 = plVar6;
    do {
      if ((longlong *)(puVar4 + -0x10) != (longlong *)0x0) {
        *(longlong *)(puVar4 + -0x10) = *plVar5;
        *plVar5 = 0;
        *(undefined8 *)(puVar4 + -8) = 0;
        *puVar4 = 0;
        *(longlong *)(puVar4 + -8) = plVar5[1];
        *puVar4 = (char)plVar5[2];
        plVar5[1] = 0;
      }
      puVar4 = puVar4 + 0x18;
      plVar5 = plVar5 + 3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    do {
      lVar2 = plVar6[1];
      if (lVar2 != 0) {
        FUN_144be5d10(lVar2);
        (*DAT_14c787678)(0,lVar2,0);
      }
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9bd00 FUN_144c9bd00 body=832 status=ok
// SIG undefined FUN_144c9bd00(void)

void FUN_144c9bd00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar7 = (**(code **)(*param_2 + 8))(param_2);
  puVar14 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar12 = (uint *)((longlong)puVar14 + 0x1c);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar11 = (uint *)(lVar7 + 0x1c);
    uVar9 = uVar10;
    puVar13 = puVar12;
    do {
      if (puVar11 + -7 != (uint *)0x0) {
        *(undefined8 *)(puVar11 + -7) = *puVar14;
        uVar2 = *(undefined8 *)(puVar13 + -5);
        *puVar14 = 0;
        *(undefined8 *)(puVar11 + -5) = uVar2;
        puVar13[-5] = 0;
        puVar13[-4] = 0;
        puVar11[-3] = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        FUN_144c93310(puVar13 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar11 + -3) = *(undefined8 *)(puVar13 + -3);
        puVar11[-1] = puVar13[-1];
        *puVar11 = *puVar13;
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        puVar13[0] = 0;
        puVar11[1] = puVar13[1];
        puVar11[2] = puVar13[2];
        puVar11[3] = puVar13[3];
        puVar11[4] = puVar13[4];
        puVar11[5] = puVar13[5];
        uVar2 = *(undefined8 *)(puVar13 + 0xb);
        *(undefined8 *)(puVar11 + 9) = *(undefined8 *)(puVar13 + 9);
        *(undefined8 *)(puVar11 + 0xb) = uVar2;
        uVar2 = *(undefined8 *)(puVar13 + 0xf);
        *(undefined8 *)(puVar11 + 0xd) = *(undefined8 *)(puVar13 + 0xd);
        *(undefined8 *)(puVar11 + 0xf) = uVar2;
        uVar2 = *(undefined8 *)(puVar13 + 0x13);
        *(undefined8 *)(puVar11 + 0x11) = *(undefined8 *)(puVar13 + 0x11);
        *(undefined8 *)(puVar11 + 0x13) = uVar2;
        uVar2 = *(undefined8 *)(puVar13 + 0x17);
        *(undefined8 *)(puVar11 + 0x15) = *(undefined8 *)(puVar13 + 0x15);
        *(undefined8 *)(puVar11 + 0x17) = uVar2;
        uVar2 = *(undefined8 *)(puVar13 + 0x1b);
        *(undefined8 *)(puVar11 + 0x19) = *(undefined8 *)(puVar13 + 0x19);
        *(undefined8 *)(puVar11 + 0x1b) = uVar2;
        uVar4 = puVar13[0x1e];
        uVar5 = puVar13[0x1f];
        uVar6 = puVar13[0x20];
        puVar11[0x1d] = puVar13[0x1d];
        puVar11[0x1e] = uVar4;
        puVar11[0x1f] = uVar5;
        puVar11[0x20] = uVar6;
        *(char *)(puVar11 + 0x21) = (char)puVar13[0x21];
        uVar4 = puVar13[0x26];
        uVar5 = puVar13[0x27];
        uVar6 = puVar13[0x28];
        puVar11[0x25] = puVar13[0x25];
        puVar11[0x26] = uVar4;
        puVar11[0x27] = uVar5;
        puVar11[0x28] = uVar6;
        FUN_144c934c0(puVar11 + 0x29,puVar13 + 0x29);
        FUN_144c938c0(puVar11 + 0x31,puVar13 + 0x31);
        *(char *)(puVar11 + 0x39) = (char)puVar13[0x39];
        puVar11[0x3b] = 0;
        puVar11[0x3c] = 0;
        puVar11[0x3d] = 0;
        puVar11[0x3e] = 0x80000000;
        FUN_14382139c(puVar13 + 0x3b);
        *(undefined8 *)(puVar11 + 0x3b) = *(undefined8 *)(puVar13 + 0x3b);
        puVar11[0x3d] = puVar13[0x3d];
        puVar11[0x3e] = puVar13[0x3e];
        puVar13[0x3b] = 0;
        puVar13[0x3c] = 0;
        puVar13[0x3d] = 0;
        puVar13[0x3e] = 0;
        puVar11[0x3f] = puVar13[0x3f];
      }
      puVar11 = puVar11 + 0x48;
      puVar14 = puVar14 + 0x24;
      puVar13 = puVar13 + 0x48;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      FUN_144bf90d0(puVar12 + 0x3b);
      FUN_144c93800(puVar12 + 0x31);
      FUN_144c93440(puVar12 + 0x29);
      lVar3 = *(longlong *)(puVar12 + -3);
      lVar8 = lVar3 + (longlong)(int)puVar12[-1] * 8;
      while (lVar8 != lVar3) {
        plVar1 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
      puVar12[-1] = 0;
      if ((-1 < (int)*puVar12) && (*(longlong *)(puVar12 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar12 + -3),
                   (ulonglong)(*puVar12 & 0x7fffffff) << 3);
      }
      puVar12[-3] = 0;
      puVar12[-2] = 0;
      *puVar12 = 0x80000000;
      if (*(longlong *)(puVar12 + -5) != 0) {
        FUN_144b3f230();
      }
      if (*(longlong *)(puVar12 + -7) != 0) {
        FUN_144b3f230();
      }
      puVar12 = puVar12 + 0x48;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9c040 FUN_144c9c040 body=309 status=ok
// SIG undefined FUN_144c9c040(void)

void FUN_144c9c040(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  uVar1 = *(uint *)(param_1 + 1);
  plVar6 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined1 *)(lVar3 + 0x10);
    uVar8 = (ulonglong)uVar1;
    plVar5 = plVar6;
    do {
      if ((longlong *)(puVar4 + -0x10) != (longlong *)0x0) {
        *(longlong *)(puVar4 + -0x10) = *plVar5;
        *plVar5 = 0;
        *(undefined8 *)(puVar4 + -8) = 0;
        *puVar4 = 0;
        *(longlong *)(puVar4 + -8) = plVar5[1];
        *puVar4 = (char)plVar5[2];
        plVar5[1] = 0;
      }
      puVar4 = puVar4 + 0x18;
      plVar5 = plVar5 + 3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    do {
      lVar2 = plVar6[1];
      if (lVar2 != 0) {
        FUN_144be5d10(lVar2);
        (*DAT_14c787678)(0,lVar2,0);
      }
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9c180 FUN_144c9c180 body=163 status=ok
// SIG undefined FUN_144c9c180(void)

void FUN_144c9c180(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x90);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x90);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9c230 FUN_144c9c230 body=163 status=ok
// SIG undefined FUN_144c9c230(void)

void FUN_144c9c230(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9c2e0 FUN_144c9c2e0 body=163 status=ok
// SIG undefined FUN_144c9c2e0(void)

void FUN_144c9c2e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9c390 FUN_144c9c390 body=155 status=ok
// SIG undefined FUN_144c9c390(void)

void FUN_144c9c390(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x2c);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x2c);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9c430 FUN_144c9c430 body=163 status=ok
// SIG undefined FUN_144c9c430(void)

void FUN_144c9c430(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x24);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x24);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9c4e0 FUN_144c9c4e0 body=159 status=ok
// SIG undefined FUN_144c9c4e0(void)

void FUN_144c9c4e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9c580 FUN_144c9c580 body=174 status=ok
// SIG undefined FUN_144c9c580(void)

void FUN_144c9c580(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar1 = (undefined1 *)(**(code **)(*param_2 + 8))(param_2,param_3);
  puVar3 = (undefined1 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined1 *)0x0) {
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



// FUNCTION 144c9c630 FUN_144c9c630 body=158 status=ok
// SIG undefined FUN_144c9c630(void)

void FUN_144c9c630(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9c6d0 FUN_144c9c6d0 body=159 status=ok
// SIG undefined FUN_144c9c6d0(void)

void FUN_144c9c6d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9c770 FUN_144c9c770 body=158 status=ok
// SIG undefined FUN_144c9c770(void)

void FUN_144c9c770(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9c810 FUN_144c9c810 body=611 status=ok
// SIG undefined FUN_144c9c810(void)

void FUN_144c9c810(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar7 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined4 *)*param_1;
  uVar9 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar11 = (undefined8 *)(lVar7 + 0x30);
    puVar10 = (undefined8 *)(puVar2 + 0xc);
    uVar12 = (ulonglong)uVar1;
    puVar13 = puVar2;
    do {
      if (puVar11 + -6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar11 + -6) = *puVar13;
        uVar6 = puVar10[-3];
        puVar11[-4] = puVar10[-4];
        puVar11[-3] = uVar6;
        uVar6 = puVar10[-1];
        puVar11[-2] = puVar10[-2];
        puVar11[-1] = uVar6;
        uVar6 = puVar10[1];
        *puVar11 = *puVar10;
        puVar11[1] = uVar6;
        uVar6 = puVar10[3];
        puVar11[2] = puVar10[2];
        puVar11[3] = uVar6;
        uVar6 = puVar10[5];
        puVar11[4] = puVar10[4];
        puVar11[5] = uVar6;
        uVar6 = puVar10[7];
        puVar11[6] = puVar10[6];
        puVar11[7] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0x44);
        uVar4 = *(undefined4 *)(puVar10 + 9);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0x4c);
        *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar10 + 8);
        *(undefined4 *)((longlong)puVar11 + 0x44) = uVar3;
        *(undefined4 *)(puVar11 + 9) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x4c) = uVar5;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0x54);
        uVar4 = *(undefined4 *)(puVar10 + 0xb);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0x5c);
        *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar10 + 10);
        *(undefined4 *)((longlong)puVar11 + 0x54) = uVar3;
        *(undefined4 *)(puVar11 + 0xb) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x5c) = uVar5;
        puVar11[0xc] = puVar10[0xc];
        puVar10[0xc] = 0;
        puVar11[0xd] = puVar10[0xd];
        puVar10[0xd] = 0;
        puVar11[0xe] = 0;
        *(undefined4 *)(puVar11 + 0xf) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x7c) = 0x80000000;
        FUN_144c945b0(puVar10 + 0xe);
        puVar11[0xe] = puVar10[0xe];
        *(undefined4 *)(puVar11 + 0xf) = *(undefined4 *)(puVar10 + 0xf);
        *(undefined4 *)((longlong)puVar11 + 0x7c) = *(undefined4 *)((longlong)puVar10 + 0x7c);
        puVar10[0xe] = 0;
        puVar10[0xf] = 0;
        *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
        uVar6 = puVar10[0x13];
        puVar11[0x12] = puVar10[0x12];
        puVar11[0x13] = uVar6;
        uVar6 = puVar10[0x15];
        puVar11[0x14] = puVar10[0x14];
        puVar11[0x15] = uVar6;
        uVar6 = puVar10[0x17];
        puVar11[0x16] = puVar10[0x16];
        puVar11[0x17] = uVar6;
        uVar6 = puVar10[0x19];
        puVar11[0x18] = puVar10[0x18];
        puVar11[0x19] = uVar6;
        uVar6 = puVar10[0x1b];
        puVar11[0x1a] = puVar10[0x1a];
        puVar11[0x1b] = uVar6;
        uVar6 = puVar10[0x1d];
        puVar11[0x1c] = puVar10[0x1c];
        puVar11[0x1d] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0xf4);
        uVar4 = *(undefined4 *)(puVar10 + 0x1f);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0xfc);
        *(undefined4 *)(puVar11 + 0x1e) = *(undefined4 *)(puVar10 + 0x1e);
        *(undefined4 *)((longlong)puVar11 + 0xf4) = uVar3;
        *(undefined4 *)(puVar11 + 0x1f) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0xfc) = uVar5;
        uVar6 = puVar10[0x21];
        puVar11[0x20] = puVar10[0x20];
        puVar11[0x21] = uVar6;
      }
      puVar11 = puVar11 + 0x28;
      puVar13 = puVar13 + 0x50;
      puVar10 = puVar10 + 0x28;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    plVar8 = (longlong *)(puVar2 + 0x26);
    do {
      FUN_144c94770(plVar8 + 1);
      if (*plVar8 != 0) {
        FUN_144b3f230();
      }
      if (plVar8[-1] != 0) {
        FUN_144b3f230();
      }
      plVar8 = plVar8 + 0x28;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9ca80 FUN_144c9ca80 body=300 status=ok
// SIG undefined FUN_144c9ca80(void)

void FUN_144c9ca80(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x38);
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
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar2;
  return;
}



// FUNCTION 144c9cbb0 FUN_144c9cbb0 body=300 status=ok
// SIG undefined FUN_144c9cbb0(void)

void FUN_144c9cbb0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x38);
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
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar2;
  return;
}



// FUNCTION 144c9cce0 FUN_144c9cce0 body=221 status=ok
// SIG undefined FUN_144c9cce0(void)

void FUN_144c9cce0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9cdc0 FUN_144c9cdc0 body=221 status=ok
// SIG undefined FUN_144c9cdc0(void)

void FUN_144c9cdc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9cea0 FUN_144c9cea0 body=221 status=ok
// SIG undefined FUN_144c9cea0(void)

void FUN_144c9cea0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9cf80 FUN_144c9cf80 body=188 status=ok
// SIG undefined FUN_144c9cf80(void)

void FUN_144c9cf80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9d040 FUN_144c9d040 body=342 status=ok
// SIG undefined FUN_144c9d040(void)

void FUN_144c9d040(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2,param_3 << 5);
  uVar2 = *(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)(lVar3 + 8);
    uVar9 = (ulonglong)uVar2;
    puVar5 = puVar7;
    do {
      puVar1 = (undefined8 *)(puVar8 + -2);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        *puVar8 = 0;
        puVar8[1] = 0x80000000;
        FUN_144c52690(puVar5,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar5;
        *puVar8 = *(undefined4 *)(puVar5 + 1);
        puVar8[1] = *(undefined4 *)((longlong)puVar5 + 0xc);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined8 *)(puVar8 + 2) = puVar5[2];
        puVar8[4] = *(undefined4 *)(puVar5 + 3);
        uVar4 = FUN_144b3d480();
        puVar5[2] = uVar4;
        *(undefined4 *)(puVar5 + 3) = 0;
      }
      puVar8 = puVar8 + 8;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      FUN_144c90d90(puVar7);
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9d1a0 FUN_144c9d1a0 body=366 status=ok
// SIG undefined FUN_144c9d1a0(void)

void FUN_144c9d1a0(longlong *param_1,longlong *param_2,ulonglong param_3)

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
  lVar4 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
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
        FUN_144c90920(puVar5,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar5;
        puVar8[-1] = *(undefined4 *)(puVar5 + 1);
        *puVar8 = *(undefined4 *)((longlong)puVar5 + 0xc);
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar8 = puVar8 + 4;
      puVar5 = puVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar6 = (uint *)((longlong)puVar3 + 0xc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(longlong *)(puVar6 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar6 + -3),
                   (ulonglong)(*puVar6 & 0x7fffffff) << 5);
      }
      *puVar6 = 0x80000000;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6 = puVar6 + 4;
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



// FUNCTION 144c9d310 FUN_144c9d310 body=159 status=ok
// SIG undefined FUN_144c9d310(void)

void FUN_144c9d310(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9d3b0 FUN_144c9d3b0 body=194 status=ok
// SIG undefined FUN_144c9d3b0(void)

void FUN_144c9d3b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
      }
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
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



// FUNCTION 144c9d480 FUN_144c9d480 body=229 status=ok
// SIG undefined FUN_144c9d480(void)

void FUN_144c9d480(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x50);
  puVar7 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar6 + -2 != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        puVar6[-2] = *puVar7;
        puVar6[-1] = uVar4;
        uVar4 = puVar7[3];
        *puVar6 = puVar7[2];
        puVar6[1] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
        *(undefined4 *)(puVar6 + 3) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
        uVar4 = puVar7[7];
        puVar6[4] = puVar7[6];
        puVar6[5] = uVar4;
        *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(puVar7 + 8);
        *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)((longlong)puVar7 + 0x44);
      }
      puVar6 = puVar6 + 10;
      puVar7 = puVar7 + 10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9d570 FUN_144c9d570 body=188 status=ok
// SIG undefined FUN_144c9d570(void)

void FUN_144c9d570(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9d630 FUN_144c9d630 body=650 status=ok
// SIG undefined FUN_144c9d630(void)

void FUN_144c9d630(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(uint *)(param_1 + 1);
  puVar8 = (undefined4 *)*param_1;
  uVar12 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar7 = (undefined8 *)(lVar6 + 0x40);
    uVar10 = (ulonglong)uVar1;
    puVar9 = (undefined8 *)(puVar8 + 0x10);
    puVar11 = puVar8;
    do {
      if (puVar7 + -8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar7 + -8) = *puVar11;
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
      puVar11 = puVar11 + 0x40;
      puVar9 = puVar9 + 0x20;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    do {
      FUN_144fb0760(puVar8);
      puVar8 = puVar8 + 0x40;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9d8c0 FUN_144c9d8c0 body=293 status=ok
// SIG undefined FUN_144c9d8c0(void)

void FUN_144c9d8c0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
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
    plVar6 = (longlong *)(lVar5 + 0x40);
    uVar11 = (ulonglong)uVar1;
    plVar7 = plVar8 + 8;
    plVar10 = plVar8;
    do {
      if (plVar6 + -8 != (longlong *)0x0) {
        plVar6[-8] = *plVar10;
        *plVar10 = 0;
        lVar4 = plVar7[-5];
        plVar6[-6] = plVar7[-6];
        plVar6[-5] = lVar4;
        lVar4 = plVar7[-3];
        plVar6[-4] = plVar7[-4];
        plVar6[-3] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + -0xc);
        lVar4 = plVar7[-1];
        uVar3 = *(undefined4 *)((longlong)plVar7 + -4);
        *(int *)(plVar6 + -2) = (int)plVar7[-2];
        *(undefined4 *)((longlong)plVar6 + -0xc) = uVar2;
        *(int *)(plVar6 + -1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar6 + -4) = uVar3;
        lVar4 = plVar7[1];
        *plVar6 = *plVar7;
        plVar6[1] = lVar4;
        *(char *)(plVar6 + 2) = (char)plVar7[2];
        *(undefined1 *)((longlong)plVar6 + 0x11) = *(undefined1 *)((longlong)plVar7 + 0x11);
        *(undefined1 *)((longlong)plVar6 + 0x12) = *(undefined1 *)((longlong)plVar7 + 0x12);
      }
      plVar6 = plVar6 + 0xc;
      plVar10 = plVar10 + 0xc;
      plVar7 = plVar7 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    do {
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



// FUNCTION 144c9d9f0 FUN_144c9d9f0 body=302 status=ok
// SIG undefined FUN_144c9d9f0(void)

void FUN_144c9d9f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  puVar9 = (undefined4 *)*param_1;
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  plVar7 = (longlong *)(puVar9 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    plVar5 = (longlong *)(lVar4 + 0x40);
    plVar6 = plVar7;
    uVar10 = uVar8;
    do {
      if (plVar5 + -8 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + -8) = *puVar9;
        *(undefined4 *)((longlong)plVar5 + -0x3c) = *(undefined4 *)((longlong)plVar6 + -0x4c);
        *(char *)(plVar5 + -7) = (char)plVar6[-9];
        lVar3 = plVar6[-7];
        plVar5[-6] = plVar6[-8];
        plVar5[-5] = lVar3;
        lVar3 = plVar6[-5];
        plVar5[-4] = plVar6[-6];
        plVar5[-3] = lVar3;
        uVar1 = *(undefined4 *)((longlong)plVar6 + -0x1c);
        lVar3 = plVar6[-3];
        uVar2 = *(undefined4 *)((longlong)plVar6 + -0x14);
        *(int *)(plVar5 + -2) = (int)plVar6[-4];
        *(undefined4 *)((longlong)plVar5 + -0xc) = uVar1;
        *(int *)(plVar5 + -1) = (int)lVar3;
        *(undefined4 *)((longlong)plVar5 + -4) = uVar2;
        lVar3 = plVar6[-1];
        *plVar5 = plVar6[-2];
        plVar5[1] = lVar3;
        plVar5[2] = *plVar6;
        *plVar6 = 0;
      }
      plVar5 = plVar5 + 0xc;
      puVar9 = puVar9 + 0x18;
      plVar6 = plVar6 + 0xc;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    do {
      if (*plVar7 != 0) {
        FUN_144b3f230();
      }
      plVar7 = plVar7 + 0xc;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9db20 FUN_144c9db20 body=188 status=ok
// SIG undefined FUN_144c9db20(void)

void FUN_144c9db20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9dbe0 FUN_144c9dbe0 body=436 status=ok
// SIG undefined FUN_144c9dbe0(void)

void FUN_144c9dbe0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  piVar11 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar7 = piVar11 + 0x17;
  if (0 < (int)uVar1) {
    piVar8 = (int *)(lVar6 + 0x5c);
    uVar9 = (ulonglong)uVar1;
    piVar10 = piVar7;
    do {
      if (piVar8 + -0x17 != (int *)0x0) {
        piVar8[-0x17] = *piVar11;
        uVar5 = *(undefined8 *)(piVar10 + -0x11);
        *(undefined8 *)(piVar8 + -0x13) = *(undefined8 *)(piVar10 + -0x13);
        *(undefined8 *)(piVar8 + -0x11) = uVar5;
        uVar5 = *(undefined8 *)(piVar10 + -0xd);
        *(undefined8 *)(piVar8 + -0xf) = *(undefined8 *)(piVar10 + -0xf);
        *(undefined8 *)(piVar8 + -0xd) = uVar5;
        iVar2 = piVar10[-10];
        iVar3 = piVar10[-9];
        iVar4 = piVar10[-8];
        piVar8[-0xb] = piVar10[-0xb];
        piVar8[-10] = iVar2;
        piVar8[-9] = iVar3;
        piVar8[-8] = iVar4;
        iVar2 = piVar10[-6];
        iVar3 = piVar10[-5];
        iVar4 = piVar10[-4];
        piVar8[-7] = piVar10[-7];
        piVar8[-6] = iVar2;
        piVar8[-5] = iVar3;
        piVar8[-4] = iVar4;
        piVar8[-3] = 0;
        piVar8[-2] = 0;
        piVar8[-1] = 0;
        *piVar8 = -0x80000000;
        FUN_143821c08(piVar10 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar8 + -3) = *(undefined8 *)(piVar10 + -3);
        piVar8[-1] = piVar10[-1];
        *piVar8 = *piVar10;
        piVar10[-3] = 0;
        piVar10[-2] = 0;
        piVar10[-1] = 0;
        piVar10[0] = 0;
      }
      piVar8 = piVar8 + 0x18;
      piVar11 = piVar11 + 0x18;
      piVar10 = piVar10 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar9 = (ulonglong)uVar1;
    do {
      piVar7[-1] = 0;
      if ((-1 < *piVar7) && (*(longlong *)(piVar7 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar7 = -0x80000000;
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      piVar7 = piVar7 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9dda0 FUN_144c9dda0 body=158 status=ok
// SIG undefined FUN_144c9dda0(void)

void FUN_144c9dda0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9de40 FUN_144c9de40 body=221 status=ok
// SIG undefined FUN_144c9de40(void)

void FUN_144c9de40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9df20 FUN_144c9df20 body=221 status=ok
// SIG undefined FUN_144c9df20(void)

void FUN_144c9df20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9e000 FUN_144c9e000 body=188 status=ok
// SIG undefined FUN_144c9e000(void)

void FUN_144c9e000(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9e0c0 FUN_144c9e0c0 body=163 status=ok
// SIG undefined FUN_144c9e0c0(void)

void FUN_144c9e0c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9e170 FUN_144c9e170 body=159 status=ok
// SIG undefined FUN_144c9e170(void)

void FUN_144c9e170(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9e210 FUN_144c9e210 body=255 status=ok
// SIG undefined FUN_144c9e210(void)

void FUN_144c9e210(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x28);
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
        FUN_144c95220(puVar3 + 2,puVar7 + 2);
      }
      puVar3 = puVar3 + 10;
      puVar7 = puVar7 + 10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 4;
    do {
      FUN_144bf90d0(puVar4);
      puVar4 = puVar4 + 10;
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



// FUNCTION 144c9e310 FUN_144c9e310 body=389 status=ok
// SIG undefined FUN_144c9e310(void)

void FUN_144c9e310(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  piVar7 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar7 + 5;
  if (0 < (int)uVar1) {
    piVar4 = (int *)(lVar2 + 0x14);
    uVar5 = (ulonglong)uVar1;
    piVar6 = piVar3;
    do {
      if (piVar4 + -5 != (int *)0x0) {
        piVar4[-5] = *piVar7;
        piVar4[-3] = 0;
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        *piVar4 = -0x80000000;
        FUN_144c998e0(piVar6 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar4 + -3) = *(undefined8 *)(piVar6 + -3);
        piVar4[-1] = piVar6[-1];
        *piVar4 = *piVar6;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        piVar6[0] = 0;
      }
      piVar4 = piVar4 + 6;
      piVar7 = piVar7 + 6;
      piVar6 = piVar6 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)uVar1;
    do {
      piVar3[-1] = 0;
      if ((-1 < *piVar3) && (*(longlong *)(piVar3 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar3 = -0x80000000;
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      piVar3 = piVar3 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9e4a0 FUN_144c9e4a0 body=203 status=ok
// SIG undefined FUN_144c9e4a0(void)

void FUN_144c9e4a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0xc);
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar3 + 2);
      }
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
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



// FUNCTION 144c9e570 FUN_144c9e570 body=392 status=ok
// SIG undefined FUN_144c9e570(void)

void FUN_144c9e570(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  uVar6 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  uVar10 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    uVar7 = (ulonglong)uVar6;
    lVar4 = lVar3;
    lVar8 = lVar2;
    do {
      if (lVar4 != 0) {
        FUN_144c96300(lVar4,lVar8);
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar8 + 0x10);
        *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar8 + 0x14);
      }
      lVar4 = lVar4 + 0x18;
      lVar8 = lVar8 + 0x18;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar5 = (uint *)(lVar2 + 0xc);
    do {
      uVar7 = 0;
      uVar9 = 0;
      if (0 < (int)puVar5[-1]) {
        do {
          pfVar1 = (float *)(uVar9 + 8 + *(longlong *)(puVar5 + -3));
          if ((0.0 < *pfVar1 || *pfVar1 == 0.0) &&
             (*(longlong *)(uVar9 + *(longlong *)(puVar5 + -3)) != 0)) {
            FUN_144b3f230();
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar9 = uVar9 + 0x18;
        } while ((int)uVar6 < (int)puVar5[-1]);
      }
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) * 0x18);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9e700 FUN_144c9e700 body=237 status=ok
// SIG undefined FUN_144c9e700(void)

void FUN_144c9e700(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar8 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar8 = puVar8 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar3;
  return;
}



// FUNCTION 144c9e7f0 FUN_144c9e7f0 body=261 status=ok
// SIG undefined FUN_144c9e7f0(void)

void FUN_144c9e7f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x30);
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
        puVar3[2] = puVar7[2];
        FUN_144c91f60(puVar3 + 4,puVar7 + 4);
      }
      puVar3 = puVar3 + 0xc;
      puVar7 = puVar7 + 0xc;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 4;
    do {
      FUN_144c91db0(puVar4);
      puVar4 = puVar4 + 0xc;
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



// FUNCTION 144c9e900 FUN_144c9e900 body=158 status=ok
// SIG undefined FUN_144c9e900(void)

void FUN_144c9e900(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9e9a0 FUN_144c9e9a0 body=163 status=ok
// SIG undefined FUN_144c9e9a0(void)

void FUN_144c9e9a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9ea50 FUN_144c9ea50 body=179 status=ok
// SIG undefined FUN_144c9ea50(void)

void FUN_144c9ea50(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
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
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9eb10 FUN_144c9eb10 body=253 status=ok
// SIG undefined FUN_144c9eb10(void)

void FUN_144c9eb10(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x38);
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
        FUN_144c92480(puVar3 + 2,puVar7 + 2);
      }
      puVar3 = puVar3 + 0xe;
      puVar7 = puVar7 + 0xe;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 2;
    do {
      FUN_144c432b0(puVar4);
      puVar4 = puVar4 + 0xe;
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



// FUNCTION 144c9ec10 FUN_144c9ec10 body=255 status=ok
// SIG undefined FUN_144c9ec10(void)

void FUN_144c9ec10(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x28);
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
        FUN_144c91660(puVar3 + 2,puVar7 + 2);
      }
      puVar3 = puVar3 + 10;
      puVar7 = puVar7 + 10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 2;
    do {
      FUN_144c914e0(puVar4);
      puVar4 = puVar4 + 10;
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



// FUNCTION 144c9ed10 FUN_144c9ed10 body=229 status=ok
// SIG undefined FUN_144c9ed10(void)

void FUN_144c9ed10(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar8 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar8 = puVar8 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar3;
  return;
}



// FUNCTION 144c9ee00 FUN_144c9ee00 body=317 status=ok
// SIG undefined FUN_144c9ee00(void)

void FUN_144c9ee00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x68);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar5 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    lVar3 = lVar2 + 0x48;
    puVar7 = puVar4 + 0x12;
    uVar8 = (ulonglong)uVar1;
    puVar6 = puVar4;
    do {
      if ((undefined4 *)(lVar3 + -0x48) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar3 + -0x48) = *puVar6;
        FUN_144c90eb0(lVar3 + -0x40,puVar7 + -0x10);
        FUN_144c91390(lVar3 + -0x20,puVar7 + -8);
        FUN_144c91660(lVar3,puVar7);
      }
      lVar3 = lVar3 + 0x68;
      puVar6 = puVar6 + 0x1a;
      puVar7 = puVar7 + 0x1a;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = puVar4 + 10;
    do {
      FUN_144c914e0(puVar4 + 8);
      FUN_144c91260(puVar4);
      FUN_144c90d90(puVar4 + -8);
      puVar4 = puVar4 + 0x1a;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9ef40 FUN_144c9ef40 body=391 status=ok
// SIG undefined FUN_144c9ef40(void)

void FUN_144c9ef40(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  piVar7 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar7 + 5;
  if (0 < (int)uVar1) {
    piVar4 = (int *)(lVar2 + 0x14);
    uVar5 = (ulonglong)uVar1;
    piVar6 = piVar3;
    do {
      if (piVar4 + -5 != (int *)0x0) {
        piVar4[-5] = *piVar7;
        piVar4[-3] = 0;
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        *piVar4 = -0x80000000;
        FUN_144c33a50(piVar6 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar4 + -3) = *(undefined8 *)(piVar6 + -3);
        piVar4[-1] = piVar6[-1];
        *piVar4 = *piVar6;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        piVar6[0] = 0;
      }
      piVar4 = piVar4 + 6;
      piVar7 = piVar7 + 6;
      piVar6 = piVar6 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)uVar1;
    do {
      piVar3[-1] = 0;
      if ((-1 < *piVar3) && (*(longlong *)(piVar3 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9f0d0 FUN_144c9f0d0 body=159 status=ok
// SIG undefined FUN_144c9f0d0(void)

void FUN_144c9f0d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9f170 FUN_144c9f170 body=389 status=ok
// SIG undefined FUN_144c9f170(void)

void FUN_144c9f170(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  piVar7 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar7 + 5;
  if (0 < (int)uVar1) {
    piVar4 = (int *)(lVar2 + 0x14);
    uVar5 = (ulonglong)uVar1;
    piVar6 = piVar3;
    do {
      if (piVar4 + -5 != (int *)0x0) {
        piVar4[-5] = *piVar7;
        piVar4[-3] = 0;
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        *piVar4 = -0x80000000;
        FUN_144c998e0(piVar6 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar4 + -3) = *(undefined8 *)(piVar6 + -3);
        piVar4[-1] = piVar6[-1];
        *piVar4 = *piVar6;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        piVar6[0] = 0;
      }
      piVar4 = piVar4 + 6;
      piVar7 = piVar7 + 6;
      piVar6 = piVar6 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)uVar1;
    do {
      piVar3[-1] = 0;
      if ((-1 < *piVar3) && (*(longlong *)(piVar3 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar3 = -0x80000000;
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      piVar3 = piVar3 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9f300 FUN_144c9f300 body=255 status=ok
// SIG undefined FUN_144c9f300(void)

void FUN_144c9f300(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x28);
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
        FUN_144c95220(puVar3 + 2,puVar7 + 2);
      }
      puVar3 = puVar3 + 10;
      puVar7 = puVar7 + 10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar4 = puVar4 + 4;
    do {
      FUN_144bf90d0(puVar4);
      puVar4 = puVar4 + 10;
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



// FUNCTION 144c9f400 FUN_144c9f400 body=159 status=ok
// SIG undefined FUN_144c9f400(void)

void FUN_144c9f400(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144c9f4a0 FUN_144c9f4a0 body=212 status=ok
// SIG undefined FUN_144c9f4a0(void)

void FUN_144c9f4a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x30);
  puVar7 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar6 + -8 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        puVar6[-8] = *puVar7;
        puVar6[-7] = uVar1;
        puVar6[-6] = uVar2;
        puVar6[-5] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + -4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + -2) = uVar4;
        *puVar6 = puVar7[8];
        puVar6[1] = puVar7[9];
      }
      puVar6 = puVar6 + 0xc;
      puVar7 = puVar7 + 0xc;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c9f580 FUN_144c9f580 body=168 status=ok
// SIG undefined FUN_144c9f580(void)

undefined8 FUN_144c9f580(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_18;
  uint local_10;
  uint local_c;
  
  uVar2 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  if ((int)uVar2 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined8 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
    uVar4 = (ulonglong)uVar2;
    puVar3 = local_18;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *param_2;
        puVar1 = param_2 + 1;
        param_2 = (undefined8 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar1;
      }
      uVar4 = uVar4 - 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      local_10 = uVar2;
      local_c = uVar2;
    } while (uVar4 != 0);
  }
  FUN_144c91110(param_1,&local_18);
  return 1;
}



// FUNCTION 144c9f630 FUN_144c9f630 body=148 status=ok
// SIG undefined FUN_144c9f630(void)

undefined8 FUN_144c9f630(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  if ((int)uVar1 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined8 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    uVar4 = (ulonglong)uVar1;
    puVar3 = local_18;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *puVar3 = uVar2;
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
      local_10 = uVar1;
      local_c = uVar1;
    } while (uVar4 != 0);
  }
  FUN_144c91ab0(param_1,&local_18);
  return 1;
}



// FUNCTION 144c9f6d0 FUN_144c9f6d0 body=416 status=ok
// SIG undefined FUN_144c9f6d0(void)

undefined8 FUN_144c9f6d0(undefined4 **param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar7 = *(uint *)(param_2 + 1);
  lVar2 = 0;
  if (*param_2 != 0) {
    lVar2 = *param_2;
  }
  if ((int)uVar7 < 1) {
    puVar1 = (undefined4 *)0x0;
    uVar7 = 0;
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar6 = 0x80000000;
  }
  else {
    puVar1 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 << 4);
    plVar3 = (longlong *)(lVar2 + 8);
    uVar4 = (ulonglong)uVar7;
    puVar5 = puVar1;
    local_28 = puVar1;
    local_20 = uVar7;
    local_1c = uVar7;
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = (int)plVar3[-1];
        puVar5[1] = *(undefined4 *)((longlong)plVar3 + -4);
        lVar2 = *plVar3;
        *(longlong *)(puVar5 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        plVar3 = plVar3 + 2;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144c93730(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c93660(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar7 = 0;
    uVar6 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144c93540(param_1);
  puVar5 = puVar1 + (longlong)(int)uVar7 * 4;
  while (puVar5 != puVar1) {
    plVar3 = (longlong *)(puVar5 + -2);
    puVar5 = puVar5 + -4;
    if (*plVar3 != 0) {
      FUN_144b3f230();
    }
  }
  if ((-1 < (int)uVar6) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar6 & 0x7fffffff) << 4);
  }
  return 1;
}



// FUNCTION 144c9f870 FUN_144c9f870 body=176 status=ok
// SIG undefined FUN_144c9f870(void)

undefined8 FUN_144c9f870(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *local_18;
  uint local_10;
  uint local_c;
  
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if ((int)uVar2 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
    puVar4 = (undefined4 *)(lVar3 + 8);
    uVar6 = (ulonglong)uVar2;
    puVar5 = local_18;
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = puVar4[-2];
        puVar5[1] = puVar4[-1];
        puVar5[2] = *puVar4;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 4;
        puVar5[3] = *puVar1;
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 4;
      local_10 = uVar2;
      local_c = uVar2;
    } while (uVar6 != 0);
  }
  FUN_144c96220(param_1,&local_18);
  return 1;
}



// FUNCTION 144c9f920 FUN_144c9f920 body=172 status=ok
// SIG undefined FUN_144c9f920(void)

undefined8 FUN_144c9f920(undefined8 param_1,longlong *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *local_18;
  uint local_10;
  uint local_c;
  
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if ((int)uVar2 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
    puVar4 = (undefined2 *)(lVar3 + 8);
    uVar6 = (ulonglong)uVar2;
    puVar5 = local_18;
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *(undefined4 *)(puVar4 + -4);
        puVar5[1] = *(undefined4 *)(puVar4 + -2);
        uVar1 = *puVar4;
        puVar4 = puVar4 + 6;
        *(undefined2 *)(puVar5 + 2) = uVar1;
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 3;
      local_10 = uVar2;
      local_c = uVar2;
    } while (uVar6 != 0);
  }
  FUN_144c96bf0(param_1,&local_18);
  return 1;
}



// FUNCTION 144c9f9d0 FUN_144c9f9d0 body=148 status=ok
// SIG undefined FUN_144c9f9d0(void)

undefined8 FUN_144c9f9d0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  if ((int)uVar1 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined8 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    uVar4 = (ulonglong)uVar1;
    puVar3 = local_18;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *puVar3 = uVar2;
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
      local_10 = uVar1;
      local_c = uVar1;
    } while (uVar4 != 0);
  }
  FUN_144c9b680(param_1,&local_18);
  return 1;
}



// FUNCTION 144c9fa70 FUN_144c9fa70 body=446 status=ok
// SIG undefined FUN_144c9fa70(void)

undefined8 FUN_144c9fa70(undefined4 **param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar7 = *(uint *)(param_2 + 1);
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar4 = *param_2;
  }
  if ((int)uVar7 < 1) {
    puVar1 = (undefined4 *)0x0;
    uVar7 = 0;
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar6 = 0x80000000;
  }
  else {
    puVar1 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 * 0x28);
    puVar5 = (undefined1 *)(lVar4 + 0xd);
    uVar3 = (ulonglong)uVar7;
    puVar2 = puVar1;
    local_28 = puVar1;
    local_20 = uVar7;
    local_1c = uVar7;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(puVar5 + -0xd);
        puVar2[2] = *(undefined4 *)(puVar5 + -5);
        *(undefined1 *)(puVar2 + 3) = puVar5[-1];
        *(undefined1 *)((longlong)puVar2 + 0xd) = *puVar5;
        FUN_144c90410(puVar2 + 4,puVar5 + 3);
        puVar5 = puVar5 + 0x28;
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 10;
      uVar6 = uVar7;
    } while (uVar3 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144c9b4c0(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c9b3e0(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar7 = 0;
    uVar6 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144c9b2e0(param_1);
  for (puVar2 = puVar1 + (longlong)(int)uVar7 * 10; puVar2 != puVar1; puVar2 = puVar2 + -10) {
    FUN_144bf90d0(puVar2 + -6);
  }
  if ((-1 < (int)uVar6) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar6 & 0x7fffffff) * 0x28);
  }
  return 1;
}



// FUNCTION 144c9fc30 FUN_144c9fc30 body=323 status=ok
// SIG undefined FUN_144c9fc30(void)

undefined8 FUN_144c9fc30(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *local_38;
  uint local_30;
  uint local_2c;
  
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if ((int)uVar2 < 1) {
    local_2c = 0x80000000;
    local_38 = (undefined4 *)0x0;
    local_30 = 0;
  }
  else {
    local_38 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
    puVar8 = (undefined8 *)(lVar3 + 8);
    uVar10 = (ulonglong)uVar2;
    puVar7 = local_38;
    local_30 = uVar2;
    local_2c = uVar2;
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *(undefined4 *)(puVar8 + -1);
        *(undefined8 *)(puVar7 + 2) = 0;
        puVar7[4] = 0;
        puVar7[5] = 0x80000000;
        uVar2 = *(uint *)(puVar8 + 1);
        puVar6 = (undefined4 *)*puVar8;
        if (0 < (int)uVar2) {
          uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                            (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(undefined8 *)(puVar7 + 2) = uVar4;
          uVar9 = (ulonglong)uVar2;
          puVar7[4] = uVar2;
          puVar7[5] = uVar2;
          puVar5 = *(undefined4 **)(puVar7 + 2);
          do {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar6;
              puVar1 = puVar6 + 1;
              puVar6 = puVar6 + 2;
              puVar5[1] = *puVar1;
            }
            uVar9 = uVar9 - 1;
            puVar5 = puVar5 + 2;
          } while (uVar9 != 0);
        }
        puVar8 = puVar8 + 3;
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 6;
    } while (uVar10 != 0);
  }
  FUN_144c9af20(param_1,&local_38);
  return 1;
}



// FUNCTION 144c9fd80 FUN_144c9fd80 body=414 status=ok
// SIG undefined FUN_144c9fd80(void)

undefined8 FUN_144c9fd80(undefined4 **param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar7 = *(uint *)(param_2 + 1);
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar4 = *param_2;
  }
  if ((int)uVar7 < 1) {
    puVar1 = (undefined4 *)0x0;
    uVar7 = 0;
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar6 = 0x80000000;
  }
  else {
    puVar1 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 * 0x30);
    puVar5 = (undefined4 *)(lVar4 + 8);
    uVar3 = (ulonglong)uVar7;
    puVar2 = puVar1;
    local_28 = puVar1;
    local_20 = uVar7;
    local_1c = uVar7;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar5[-2];
        puVar2[2] = *puVar5;
        FUN_144c91e80(puVar2 + 4,puVar5 + 2);
        puVar5 = puVar5 + 0xc;
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0xc;
      uVar6 = uVar7;
    } while (uVar3 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144c96940(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c96850(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar7 = 0;
    uVar6 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144c96750(param_1);
  for (puVar2 = puVar1 + (longlong)(int)uVar7 * 0xc; puVar2 != puVar1; puVar2 = puVar2 + -0xc) {
    FUN_144c91db0(puVar2 + -8);
  }
  if ((-1 < (int)uVar6) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar6 & 0x7fffffff) * 0x30);
  }
  return 1;
}



// FUNCTION 144c9ff20 FUN_144c9ff20 body=146 status=ok
// SIG undefined FUN_144c9ff20(void)

undefined8 FUN_144c9ff20(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_2;
  if ((int)uVar1 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    uVar5 = (ulonglong)uVar1;
    puVar3 = local_18;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
      local_10 = uVar1;
      local_c = uVar1;
    } while (uVar5 != 0);
  }
  FUN_144c9ad40(param_1,&local_18);
  return 1;
}



// FUNCTION 144c9ffc0 FUN_144c9ffc0 body=148 status=ok
// SIG undefined FUN_144c9ffc0(void)

undefined8 FUN_144c9ffc0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  if ((int)uVar1 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined8 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    uVar4 = (ulonglong)uVar1;
    puVar3 = local_18;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *puVar3 = uVar2;
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
      local_10 = uVar1;
      local_c = uVar1;
    } while (uVar4 != 0);
  }
  FUN_144c9aaf0(param_1,&local_18);
  return 1;
}



// FUNCTION 144ca0060 FUN_144ca0060 body=325 status=ok
// SIG undefined FUN_144ca0060(void)

undefined8 FUN_144ca0060(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *local_38;
  uint local_30;
  uint local_2c;
  
  uVar2 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if ((int)uVar2 < 1) {
    local_2c = 0x80000000;
    local_38 = (undefined4 *)0x0;
    local_30 = 0;
  }
  else {
    local_38 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
    puVar11 = (undefined8 *)(lVar3 + 8);
    uVar13 = (ulonglong)uVar2;
    puVar10 = local_38;
    local_30 = uVar2;
    local_2c = uVar2;
    do {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *(undefined4 *)(puVar11 + -1);
        *(undefined8 *)(puVar10 + 2) = 0;
        puVar10[4] = 0;
        puVar10[5] = 0x80000000;
        uVar2 = *(uint *)(puVar11 + 1);
        puVar9 = (undefined4 *)*puVar11;
        if (0 < (int)uVar2) {
          uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                            (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x14);
          *(undefined8 *)(puVar10 + 2) = uVar7;
          uVar12 = (ulonglong)uVar2;
          puVar10[4] = uVar2;
          puVar10[5] = uVar2;
          puVar8 = *(undefined4 **)(puVar10 + 2);
          do {
            if (puVar8 != (undefined4 *)0x0) {
              uVar4 = puVar9[1];
              uVar5 = puVar9[2];
              uVar6 = puVar9[3];
              *puVar8 = *puVar9;
              puVar8[1] = uVar4;
              puVar8[2] = uVar5;
              puVar8[3] = uVar6;
              puVar1 = puVar9 + 4;
              puVar9 = puVar9 + 5;
              puVar8[4] = *puVar1;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 5;
          } while (uVar12 != 0);
        }
        puVar11 = puVar11 + 3;
      }
      uVar13 = uVar13 - 1;
      puVar10 = puVar10 + 6;
    } while (uVar13 != 0);
  }
  FUN_144c9a640(param_1,&local_38);
  return 1;
}



// FUNCTION 144ca01b0 FUN_144ca01b0 body=224 status=ok
// SIG undefined FUN_144ca01b0(void)

undefined8 FUN_144ca01b0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if ((int)uVar1 < 1) {
    local_c = 0x80000000;
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
  }
  else {
    local_18 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x68);
    lVar3 = lVar3 + 0x48;
    uVar4 = (ulonglong)uVar1;
    puVar2 = local_18;
    local_10 = uVar1;
    local_c = uVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(lVar3 + -0x48);
        FUN_144c90e10(puVar2 + 2,lVar3 + -0x40);
        FUN_144c912e0(puVar2 + 10,lVar3 + -0x20);
        FUN_144c915a0(puVar2 + 0x12,lVar3);
        lVar3 = lVar3 + 0x68;
      }
      uVar4 = uVar4 - 1;
      puVar2 = puVar2 + 0x1a;
    } while (uVar4 != 0);
  }
  FUN_144c9a230(param_1,&local_18);
  return 1;
}



// FUNCTION 144ca0290 FUN_144ca0290 body=416 status=ok
// SIG undefined FUN_144ca0290(void)

undefined8 FUN_144ca0290(undefined4 **param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar8 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)0x0;
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*param_2;
  }
  if ((int)uVar8 < 1) {
    puVar3 = (undefined4 *)0x0;
    uVar8 = 0;
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar7 = 0x80000000;
  }
  else {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar8 << 4);
    uVar5 = (ulonglong)uVar8;
    puVar6 = puVar3;
    local_28 = puVar3;
    local_20 = uVar8;
    local_1c = uVar8;
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
        lVar2 = *(longlong *)(puVar4 + 2);
        *(longlong *)(puVar6 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        puVar4 = puVar4 + 4;
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 4;
      uVar7 = uVar8;
    } while (uVar5 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144c9a060(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c99f90(&local_28,&PTR_vftable_14c6e47a0);
    puVar3 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar8 = 0;
    uVar7 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144c99e90(param_1);
  puVar4 = puVar3 + (longlong)(int)uVar8 * 4;
  while (puVar4 != puVar3) {
    plVar1 = (longlong *)(puVar4 + -2);
    puVar4 = puVar4 + -4;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if ((-1 < (int)uVar7) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar3,(ulonglong)(uVar7 & 0x7fffffff) << 4);
  }
  return 1;
}



// FUNCTION 144ca0430 FUN_144ca0430 body=398 status=ok
// SIG undefined FUN_144ca0430(void)

undefined8 FUN_144ca0430(undefined4 **param_1,undefined8 *param_2)

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
  puVar4 = (undefined4 *)0x0;
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*param_2;
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
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 * 0x28);
    uVar3 = (ulonglong)uVar6;
    puVar2 = puVar1;
    local_28 = puVar1;
    local_20 = uVar6;
    local_1c = uVar6;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar4;
        FUN_144c915a0(puVar2 + 2,puVar4 + 2);
        puVar4 = puVar4 + 10;
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 10;
      uVar5 = uVar6;
    } while (uVar3 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144c99dd0(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c99cf0(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar6 = 0;
    uVar5 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144c99bf0(param_1);
  for (puVar4 = puVar1 + (longlong)(int)uVar6 * 10; puVar4 != puVar1; puVar4 = puVar4 + -10) {
    FUN_144c914e0(puVar4 + -8);
  }
  if ((-1 < (int)uVar5) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar5 & 0x7fffffff) * 0x28);
  }
  return 1;
}



// FUNCTION 144ca05c0 FUN_144ca05c0 body=394 status=ok
// SIG undefined FUN_144ca05c0(void)

undefined8 FUN_144ca05c0(undefined4 **param_1,undefined8 *param_2)

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
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 * 0x38);
    uVar3 = (ulonglong)uVar6;
    puVar4 = puVar1;
    local_28 = puVar1;
    local_20 = uVar6;
    local_1c = uVar6;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar2;
        FUN_144c43380(puVar4 + 2,puVar2 + 2);
        puVar2 = puVar2 + 0xe;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 0xe;
      uVar5 = uVar6;
    } while (uVar3 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144c99b30(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144c99a50(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar6 = 0;
    uVar5 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144c99950(param_1);
  for (puVar2 = puVar1 + (longlong)(int)uVar6 * 0xe; puVar2 != puVar1; puVar2 = puVar2 + -0xe) {
    FUN_144c432b0(puVar2 + -0xc);
  }
  if ((-1 < (int)uVar5) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar5 & 0x7fffffff) * 0x38);
  }
  return 1;
}



// FUNCTION 144ca0750 FUN_144ca0750 body=163 status=ok
// SIG undefined FUN_144ca0750(void)

void FUN_144ca0750(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x18);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144ca0800 FUN_144ca0800 body=221 status=ok
// SIG undefined FUN_144ca0800(void)

void FUN_144ca0800(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144ca08e0 FUN_144ca08e0 body=456 status=ok
// SIG undefined FUN_144ca08e0(void)

void FUN_144ca08e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x28);
  uVar2 = *(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)(lVar4 + 0x1c);
    puVar7 = (undefined4 *)((longlong)puVar3 + 0x1c);
    uVar9 = (ulonglong)uVar2;
    puVar10 = puVar3;
    do {
      puVar1 = (undefined8 *)(puVar8 + -7);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0x80000000;
        FUN_144c94540(puVar10,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar10;
        puVar8[-5] = puVar7[-5];
        puVar8[-4] = puVar7[-4];
        *puVar10 = 0;
        *(undefined8 *)(puVar7 + -5) = 0;
        *(undefined8 *)(puVar8 + -3) = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        FUN_144c94450(puVar7 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar8 + -3) = *(undefined8 *)(puVar7 + -3);
        puVar8[-1] = puVar7[-1];
        *puVar8 = *puVar7;
        *(undefined8 *)(puVar7 + -3) = 0;
        *(undefined8 *)(puVar7 + -1) = 0;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar7 + 1);
      }
      puVar8 = puVar8 + 10;
      puVar10 = puVar10 + 5;
      puVar7 = puVar7 + 10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar5 = (uint *)((longlong)puVar3 + 0xc);
    do {
      FUN_144c944d0(puVar5 + 1);
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) * 0x1c);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + 10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144ca0ab0 FUN_144ca0ab0 body=366 status=ok
// SIG undefined FUN_144ca0ab0(void)

void FUN_144ca0ab0(longlong *param_1,longlong *param_2,ulonglong param_3)

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
  lVar4 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
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
        FUN_143821c08(puVar5,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar5;
        puVar8[-1] = *(undefined4 *)(puVar5 + 1);
        *puVar8 = *(undefined4 *)((longlong)puVar5 + 0xc);
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar8 = puVar8 + 4;
      puVar5 = puVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar6 = (uint *)((longlong)puVar3 + 0xc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(longlong *)(puVar6 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar6 + -3),
                   (ulonglong)(*puVar6 & 0x7fffffff) << 2);
      }
      *puVar6 = 0x80000000;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6 = puVar6 + 4;
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



// FUNCTION 144ca0c20 FUN_144ca0c20 body=404 status=ok
// SIG undefined FUN_144ca0c20(void)

void FUN_144ca0c20(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 8))(param_2,param_3 << 6);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined4 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar10 = (undefined4 *)(lVar6 + 0x38);
    puVar9 = (undefined8 *)(puVar2 + 0xe);
    uVar11 = (ulonglong)uVar1;
    puVar12 = puVar2;
    do {
      if (puVar10 + -0xe != (undefined4 *)0x0) {
        puVar10[-0xe] = *puVar12;
        uVar3 = *(undefined4 *)((longlong)puVar9 + -0x24);
        uVar4 = *(undefined4 *)(puVar9 + -4);
        uVar5 = *(undefined4 *)((longlong)puVar9 + -0x1c);
        puVar10[-10] = *(undefined4 *)(puVar9 + -5);
        puVar10[-9] = uVar3;
        puVar10[-8] = uVar4;
        puVar10[-7] = uVar5;
        uVar3 = *(undefined4 *)((longlong)puVar9 + -0x14);
        uVar4 = *(undefined4 *)(puVar9 + -2);
        uVar5 = *(undefined4 *)((longlong)puVar9 + -0xc);
        puVar10[-6] = *(undefined4 *)(puVar9 + -3);
        puVar10[-5] = uVar3;
        puVar10[-4] = uVar4;
        puVar10[-3] = uVar5;
        *(undefined8 *)(puVar10 + -2) = 0;
        *puVar10 = 0;
        puVar10[1] = 0x80000000;
        FUN_144c52690(puVar9 + -1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar10 + -2) = puVar9[-1];
        *puVar10 = *(undefined4 *)puVar9;
        puVar10[1] = *(undefined4 *)((longlong)puVar9 + 4);
        puVar9[-1] = 0;
        *puVar9 = 0;
      }
      puVar10 = puVar10 + 0x10;
      puVar12 = puVar12 + 0x10;
      puVar9 = puVar9 + 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    piVar7 = puVar2 + 0xf;
    do {
      piVar7[-1] = 0;
      if ((-1 < *piVar7) && (*(longlong *)(piVar7 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar7 = -0x80000000;
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      piVar7 = piVar7 + 0x10;
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



// FUNCTION 144ca0dc0 FUN_144ca0dc0 body=159 status=ok
// SIG undefined FUN_144ca0dc0(void)

void FUN_144ca0dc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144ca0e60 FUN_144ca0e60 body=159 status=ok
// SIG undefined FUN_144ca0e60(void)

void FUN_144ca0e60(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144ca0f00 FUN_144ca0f00 body=186 status=ok
// SIG undefined FUN_144ca0f00(void)

void FUN_144ca0f00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x14);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
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
        puVar5[4] = puVar6[4];
      }
      puVar5 = puVar5 + 5;
      puVar6 = puVar6 + 5;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144ca0fc0 FUN_144ca0fc0 body=229 status=ok
// SIG undefined FUN_144ca0fc0(void)

void FUN_144ca0fc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar8 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar8 = puVar8 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar3;
  return;
}



// FUNCTION 144ca10b0 FUN_144ca10b0 body=317 status=ok
// SIG undefined FUN_144ca10b0(void)

void FUN_144ca10b0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x68);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar5 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    lVar3 = lVar2 + 0x48;
    puVar7 = puVar4 + 0x12;
    uVar8 = (ulonglong)uVar1;
    puVar6 = puVar4;
    do {
      if ((undefined4 *)(lVar3 + -0x48) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar3 + -0x48) = *puVar6;
        FUN_144c90eb0(lVar3 + -0x40,puVar7 + -0x10);
        FUN_144c91390(lVar3 + -0x20,puVar7 + -8);
        FUN_144c91660(lVar3,puVar7);
      }
      lVar3 = lVar3 + 0x68;
      puVar6 = puVar6 + 0x1a;
      puVar7 = puVar7 + 0x1a;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = puVar4 + 10;
    do {
      FUN_144c914e0(puVar4 + 8);
      FUN_144c91260(puVar4);
      FUN_144c90d90(puVar4 + -8);
      puVar4 = puVar4 + 0x1a;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144ca11f0 FUN_144ca11f0 body=187 status=ok
// SIG undefined FUN_144ca11f0(void)

void FUN_144ca11f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 5);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144ca12b0 FUN_144ca12b0 body=155 status=ok
// SIG undefined FUN_144ca12b0(void)

void FUN_144ca12b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x1c);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x1c);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144ca1370 FUN_144ca1370 body=12 status=ok
// SIG undefined FUN_144ca1370(void)

undefined8 * FUN_144ca1370(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *param_2 = *(undefined8 *)(param_3 + 0x30);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 144ca1380 FUN_144ca1380 body=227 status=ok
// SIG undefined FUN_144ca1380(void)

undefined8 * FUN_144ca1380(undefined8 *param_1,longlong param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiStreamingSetInstance::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  lVar3 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = *(uint *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (0 < (int)uVar2) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
    param_1[5] = uVar4;
    puVar5 = (undefined4 *)(lVar3 + 4);
    *(uint *)(param_1 + 6) = uVar2;
    uVar7 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0x34) = uVar2;
    puVar6 = (undefined4 *)param_1[5];
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = puVar5[-1];
        puVar6[1] = *puVar5;
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 1);
        puVar1 = (undefined2 *)((longlong)puVar5 + 6);
        puVar5 = puVar5 + 3;
        *(undefined2 *)((longlong)puVar6 + 10) = *puVar1;
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 3;
    } while (uVar7 != 0);
  }
  return param_1;
}



// FUNCTION 144ca1470 FUN_144ca1470 body=101 status=ok
// SIG undefined FUN_144ca1470(void)

void FUN_144ca1470(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144ca14e0 FUN_144ca14e0 body=168 status=ok
// SIG undefined FUN_144ca14e0(void)

undefined8 * FUN_144ca14e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  puVar4 = (undefined2 *)*param_2;
  if (0 < (int)uVar2) {
    puVar3 = (undefined2 *)
             (**(code **)(PTR_vftable_14c6e47c0 + 8))
                       (&PTR_vftable_14c6e47c0,(longlong)(int)uVar2 * 2);
    *param_1 = puVar3;
    uVar5 = (ulonglong)uVar2;
    *(uint *)(param_1 + 1) = uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar3 != (undefined2 *)0x0) {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar1;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  FUN_144c90410(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 144ca1590 FUN_144ca1590 body=196 status=ok
// SIG undefined FUN_144ca1590(void)

undefined8 * FUN_144ca1590(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[2] = 1;
  *param_1 = hkaiClusteringSetupRegistrationManager::vftable;
  puVar1 = param_1 + 3;
  param_1[1] = 0xffffffff;
  lVar2 = 0x20;
  do {
    *(undefined4 *)puVar1 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
    puVar1 = puVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 144ca1660 FUN_144ca1660 body=147 status=ok
// SIG undefined FUN_144ca1660(void)

undefined8 * FUN_144ca1660(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[2] = 1;
  puVar1 = param_1 + 3;
  param_1[1] = 0xffffffff;
  param_2 = param_2 - (longlong)puVar1;
  *param_1 = hkaiClusteringSetupRegistrationManager::vftable;
  lVar2 = 0x20;
  do {
    FUN_144c5edf0(puVar1,param_2 + 0x18 + (longlong)puVar1,8,0x10,&LAB_144c92e70);
    puVar1 = puVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 144ca1700 FUN_144ca1700 body=288 status=ok
// SIG undefined FUN_144ca1700(void)

void FUN_144ca1700(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144ca6d90(param_1,(longlong)(int)param_1[1] * 8 + -8 + *param_1);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar1 = (undefined4 *)(*param_1 + ((longlong)(int)lVar6 + -1) * 8);
    puVar8 = (undefined4 *)(*param_1 + (longlong)(int)uVar3 * 8);
    if (puVar8 != puVar1) {
      lVar9 = (longlong)puVar1 - (longlong)puVar8;
      lVar6 = 2;
      do {
        *puVar8 = *(undefined4 *)(lVar9 + (longlong)puVar8);
        puVar8 = puVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  lVar6 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar10;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar10;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144ca1820 FUN_144ca1820 body=341 status=ok
// SIG undefined FUN_144ca1820(void)

void FUN_144ca1820(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144ca6e00(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  if (*(longlong *)(*param_1 + 8 + (longlong)(int)uVar3 * 0x10) != 0) {
    FUN_144b3f230();
  }
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar8 = (undefined4 *)(*param_1 + -0x10 + (longlong)(int)lVar6 * 0x10);
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)uVar3 * 0x10);
    if (puVar1 != puVar8) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar8;
        puVar1[1] = puVar8[1];
        *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
      }
      if (*(longlong *)(puVar8 + 2) != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar6 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar9;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar9;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144ca1980 FUN_144ca1980 body=194 status=ok
// SIG undefined FUN_144ca1980(void)

undefined8 FUN_144ca1980(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  FUN_144ca6c50(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar5 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144ca7d90(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar3 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_2;
      puVar3[1] = param_2[1];
      *(undefined8 *)(puVar3 + 2) = *param_3;
      *param_3 = 0;
    }
    *(int *)(param_1 + 1) = iVar5;
    uVar2 = 1;
  }
  else {
    uVar2 = *param_3;
    lVar4 = (longlong)local_res8[0] * 0x10 + *param_1;
    *param_3 = 0;
    lVar1 = *(longlong *)(lVar4 + 8);
    *(undefined8 *)(lVar4 + 8) = uVar2;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144ca1a50 FUN_144ca1a50 body=669 status=ok
// SIG undefined FUN_144ca1a50(void)

undefined8 * FUN_144ca1a50(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar3 = 0;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  local_res8 = 0x20;
  *param_1 = hkaiStreamingCollection::vftable;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkcdDynamicAabbTree");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144fcd2c0(lVar1);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_1[4] != lVar2) {
    if (lVar2 != 0) {
      FUN_144b3d910(lVar2);
    }
    lVar1 = param_1[4];
    param_1[4] = lVar2;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if (lVar2 != 0) {
    FUN_144b3f230(lVar2);
  }
  local_res10 = 0x1018;
  _Dst = (void *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  lVar1 = lVar3;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x1018);
    lVar1 = FUN_144ca1590(_Dst);
  }
  lVar2 = param_1[0x1e];
  param_1[0x1e] = lVar1;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  local_res10 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavMeshCollectionQueryMediator");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144c3b9b0(lVar1,param_1);
  }
  lVar1 = param_1[0x1c];
  param_1[0x1c] = lVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  local_res10 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavVolumeCollectionQueryMediator");
  }
  if (lVar1 != 0) {
    lVar3 = FUN_144ffb6e0(lVar1,param_1);
  }
  lVar1 = param_1[0x1d];
  param_1[0x1d] = lVar3;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144ca1cf0 FUN_144ca1cf0 body=682 status=ok
// SIG undefined FUN_144ca1cf0(void)

undefined8 * FUN_144ca1cf0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  
  param_1[2] = 1;
  lVar3 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  *param_1 = hkaiStreamingCollection::vftable;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = param_2;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkcdDynamicAabbTree");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144fcd2c0(lVar1);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_1[4] != lVar2) {
    if (lVar2 != 0) {
      FUN_144b3d910(lVar2);
    }
    lVar1 = param_1[4];
    param_1[4] = lVar2;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if (lVar2 != 0) {
    FUN_144b3f230(lVar2);
  }
  local_res10 = 0x1018;
  _Dst = (void *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  lVar1 = lVar3;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x1018);
    lVar1 = FUN_144ca1590(_Dst);
  }
  lVar2 = param_1[0x1e];
  param_1[0x1e] = lVar1;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  local_res10 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavMeshCollectionQueryMediator");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144c3b9b0(lVar1,param_1);
  }
  lVar1 = param_1[0x1c];
  param_1[0x1c] = lVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  local_res10 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiNavVolumeCollectionQueryMediator");
  }
  if (lVar1 != 0) {
    lVar3 = FUN_144ffb6e0(lVar1,param_1);
  }
  lVar1 = param_1[0x1d];
  param_1[0x1d] = lVar3;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144ca1fa0 FUN_144ca1fa0 body=618 status=ok
// SIG undefined FUN_144ca1fa0(void)

void FUN_144ca1fa0(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  
  *param_1 = hkaiStreamingCollection::vftable;
  FUN_144ca3850();
  if (param_1[0x1e] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1d] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1c] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0xb] != 0) {
    FUN_144b3f230();
  }
  plVar3 = (longlong *)param_1[9];
  plVar6 = plVar3 + (longlong)*(int *)(param_1 + 10) * 3;
  while (plVar6 != plVar3) {
    lVar7 = plVar6[-2];
    plVar6 = plVar6 + -3;
    if (lVar7 != 0) {
      FUN_144be5d10(lVar7);
      (*DAT_14c787678)(0,lVar7,0);
    }
    if (*plVar6 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) * 0x18);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  puVar4 = (uint *)param_1[7];
  if (puVar4 + (longlong)*(int *)(param_1 + 8) * 0x48 != puVar4) {
    puVar8 = puVar4 + (longlong)*(int *)(param_1 + 8) * 0x48 + 7;
    do {
      puVar2 = puVar8 + -0x48;
      FUN_144bf90d0(puVar8 + -0xd);
      FUN_144c93800(puVar8 + -0x17);
      FUN_144c93440(puVar8 + -0x1f);
      lVar5 = *(longlong *)(puVar8 + -0x4b);
      lVar7 = lVar5 + (longlong)(int)puVar8[-0x49] * 8;
      while (lVar7 != lVar5) {
        plVar6 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        if (*plVar6 != 0) {
          FUN_144b3f230();
        }
      }
      puVar8[-0x49] = 0;
      if ((-1 < (int)*puVar2) && (*(longlong *)(puVar8 + -0x4b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar8 + -0x4b),
                   (ulonglong)(*puVar2 & 0x7fffffff) << 3);
      }
      puVar8[-0x4b] = 0;
      puVar8[-0x4a] = 0;
      *puVar2 = 0x80000000;
      if (*(longlong *)(puVar8 + -0x4d) != 0) {
        FUN_144b3f230();
      }
      puVar1 = puVar8 + -0x4f;
      if (*(longlong *)(puVar8 + -0x4f) != 0) {
        FUN_144b3f230();
      }
      puVar8 = puVar2;
    } while (puVar1 != puVar4);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) * 0x120);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  lVar7 = param_1[5];
  if (lVar7 != 0) {
    FUN_144be5d10(lVar7);
    (*DAT_14c787678)(0,lVar7,0);
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144ca2210 FUN_144ca2210 body=199 status=ok
// SIG undefined FUN_144ca2210(void)

longlong * FUN_144ca2210(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res10;
  
  local_res10 = 0xf8;
  lVar2 = 0;
  *param_2 = 0;
  lVar1 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkaiStreamingCollection");
  }
  if (lVar1 != 0) {
    lVar2 = FUN_144ca53b0(lVar1,param_1);
  }
  lVar1 = *param_2;
  if ((lVar2 != lVar1) && (*param_2 = lVar2, lVar1 != 0)) {
    FUN_144b3f230();
  }
  *(undefined1 *)(*param_2 + 0x18) = 2;
  lVar1 = *(longlong *)(*param_2 + 0x38);
  lVar2 = (longlong)*(int *)(*param_2 + 0x40) * 0x120 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x120) {
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return param_2;
}



// FUNCTION 144ca22e0 FUN_144ca22e0 body=1234 status=ok
// SIG undefined FUN_144ca22e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ca22e0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  void *_Dst;
  undefined8 uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined4 local_res8 [2];
  longlong local_res18;
  undefined4 local_res20 [2];
  undefined1 local_68 [48];
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  local_res18 = param_3;
  FUN_144ca3850();
  if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) == 0) {
    FUN_144ca73f0(param_1 + 0x38,&PTR_vftable_14c6e47a0,1);
  }
  iVar8 = *(int *)(param_1 + 0x40);
  uVar16 = 0;
  if (iVar8 < 1) {
    puVar17 = (undefined4 *)((longlong)iVar8 * 0x120 + *(longlong *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x40) = 1;
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x120);
    if (puVar17 != puVar3) {
      puVar17 = puVar17 + 0x3e;
      do {
        if ((undefined8 *)(puVar17 + -0x3e) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar17 + -0x3e) = 0;
          *(undefined8 *)(puVar17 + -0x3c) = 0;
          *(undefined8 *)(puVar17 + -0x3a) = 0;
          puVar17[-0x38] = 0;
          *(undefined8 *)(puVar17 + -0x37) = 0xffffffff80000000;
          *(undefined8 *)(puVar17 + -0x35) = 0xffffffffffffffff;
          *(undefined8 *)(puVar17 + -0x33) = 0;
          uVar14 = uRam000000014c6dae48;
          *(undefined8 *)(puVar17 + -0x2e) = _DAT_14c6dae40;
          *(undefined8 *)(puVar17 + -0x2c) = uVar14;
          uVar14 = uRam000000014c6dae58;
          *(undefined8 *)(puVar17 + -0x2a) = _DAT_14c6dae50;
          *(undefined8 *)(puVar17 + -0x28) = uVar14;
          uVar12 = uRam000000014c6dae6c;
          uVar11 = uRam000000014c6dae68;
          uVar13 = uRam000000014c6dae64;
          puVar17[-0x26] = _DAT_14c6dae60;
          puVar17[-0x25] = uVar13;
          puVar17[-0x24] = uVar11;
          puVar17[-0x23] = uVar12;
          uVar12 = DAT_14c6dae7c;
          uVar11 = DAT_14c6dae78;
          uVar13 = DAT_14c6dae74;
          puVar17[-0x22] = DAT_14c6dae70;
          puVar17[-0x21] = uVar13;
          puVar17[-0x20] = uVar11;
          puVar17[-0x1f] = uVar12;
          *(undefined8 *)(puVar17 + -0x1e) = 0;
          *(undefined8 *)(puVar17 + -0x1c) = 0;
          *(undefined8 *)(puVar17 + -0x1a) = 0;
          *(undefined8 *)(puVar17 + -0x18) = 0;
          *(undefined8 *)(puVar17 + -0xe) = 0;
          puVar17[-0xc] = 0;
          puVar17[-0xb] = 0x80000000;
          uVar14 = FUN_144b3d480();
          *(undefined8 *)(puVar17 + -10) = uVar14;
          puVar17[-8] = 0;
          *(undefined8 *)(puVar17 + -6) = 0;
          puVar17[-4] = 0;
          puVar17[-3] = 0x80000000;
          uVar14 = FUN_144b3d480();
          *(undefined8 *)(puVar17 + -2) = uVar14;
          *puVar17 = 0;
          *(undefined1 *)(puVar17 + 2) = 0;
          *(undefined8 *)(puVar17 + 4) = 0;
          puVar17[6] = 0;
          puVar17[7] = 0x80000000;
          puVar17[8] = 0;
          *(undefined1 *)(puVar17 + -0x16) = 0;
          *(undefined8 *)(puVar17 + -0x12) = 0;
          *(undefined8 *)(puVar17 + -0x10) = 0;
        }
        puVar4 = puVar17 + 10;
        puVar17 = puVar17 + 0x48;
      } while (puVar4 != puVar3);
    }
  }
  else if (1 < iVar8) {
    puVar18 = (uint *)((longlong)iVar8 * 0x120 + *(longlong *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x40) = 1;
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x120);
    if (puVar18 != puVar5) {
      puVar18 = puVar18 + 7;
      do {
        puVar6 = puVar18 + -0x48;
        FUN_144bf90d0(puVar18 + -0xd);
        FUN_144c93800(puVar18 + -0x17);
        FUN_144c93440(puVar18 + -0x1f);
        lVar9 = *(longlong *)(puVar18 + -0x4b);
        lVar15 = lVar9 + (longlong)(int)puVar18[-0x49] * 8;
        while (lVar15 != lVar9) {
          plVar10 = (longlong *)(lVar15 + -8);
          lVar15 = lVar15 + -8;
          if (*plVar10 != 0) {
            FUN_144b3f230();
          }
        }
        puVar18[-0x49] = 0;
        if ((-1 < (int)*puVar6) && (*(longlong *)(puVar18 + -0x4b) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar18 + -0x4b),
                     (ulonglong)(*puVar6 & 0x7fffffff) << 3);
        }
        puVar18[-0x4b] = 0;
        puVar18[-0x4a] = 0;
        *puVar6 = 0x80000000;
        if (*(longlong *)(puVar18 + -0x4d) != 0) {
          FUN_144b3f230();
        }
        puVar1 = puVar18 + -0x4f;
        if (*(longlong *)(puVar18 + -0x4f) != 0) {
          FUN_144b3f230();
        }
        puVar18 = puVar6;
        param_3 = local_res18;
      } while (puVar1 != puVar5);
    }
    param_4 = (char)local_res20[0];
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar15 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar15 = FUN_147e4bb26(param_2 + 0x20);
  }
  *(undefined4 *)(lVar15 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x60 + (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x180) * 4) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x68) + 0xb0);
  plVar10 = *(longlong **)(param_1 + 0x38);
  FUN_144b3d910(param_2);
  lVar15 = *plVar10;
  *plVar10 = param_2;
  if (lVar15 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x24) =
       *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x178);
  lVar15 = *(longlong *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar15 + 0x48) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar15 + 0x58) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar15 + 0x68) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(lVar15 + 0x70) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(lVar15 + 0x78) = uVar14;
  uVar13 = *(undefined4 *)(param_2 + 0xa4);
  uVar11 = *(undefined4 *)(param_2 + 0xa8);
  uVar12 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(lVar15 + 0x80) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(lVar15 + 0x84) = uVar13;
  *(undefined4 *)(lVar15 + 0x88) = uVar11;
  *(undefined4 *)(lVar15 + 0x8c) = uVar12;
  uVar13 = *(undefined4 *)(param_2 + 0xb4);
  uVar11 = *(undefined4 *)(param_2 + 0xb8);
  uVar12 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(lVar15 + 0x90) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(lVar15 + 0x94) = uVar13;
  *(undefined4 *)(lVar15 + 0x98) = uVar11;
  *(undefined4 *)(lVar15 + 0x9c) = uVar12;
  piVar2 = (int *)(*(longlong *)(param_1 + 0x38) + 0x2c);
  *piVar2 = *piVar2 + 1;
  pbVar7 = (byte *)(*(longlong *)(param_1 + 0x38) + 0x100);
  *pbVar7 = *pbVar7 | 1;
  if (param_3 != 0) {
    local_res20[0] = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x60);
    local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x6c));
    FUN_144fa9d90(*(undefined8 *)(param_1 + 0xf0),local_res8,&local_res18,local_res20);
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar15 = *(longlong *)(param_3 + 0x20);
    }
    else {
      lVar15 = FUN_147e4bc84(param_3 + 0x20);
    }
    *(undefined4 *)(lVar15 + 100) = 0;
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar15 = *(longlong *)(param_3 + 0x20);
    }
    else {
      lVar15 = FUN_147e4bc84(param_3 + 0x20);
    }
    *(undefined4 *)(lVar15 + 0x68) = local_res8[0];
    FUN_145004680(*(undefined8 *)(param_1 + 0x38),param_3);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x38) + 0x2c);
    *piVar2 = *piVar2 + 1;
  }
  FUN_144c3ed40(param_2,local_68);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar14 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar14 = FUN_144ca6690();
  }
  uVar13 = FUN_144fcd550(uVar14,local_68,0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20) = uVar13;
  if (param_4 != '\0') {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_res18 = 0x330;
      _Dst = (void *)(*DAT_14c787670)(0,&local_res18,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(_Dst);
      }
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,0x330);
        uVar16 = FUN_144c2bf00(_Dst);
      }
      lVar15 = *(longlong *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar16;
      if (lVar15 != 0) {
        FUN_144b3f230();
      }
    }
    FUN_144ca59d0(param_1,param_2);
  }
  return;
}



// FUNCTION 144ca27c0 FUN_144ca27c0 body=937 status=ok
// SIG undefined FUN_144ca27c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ca27c0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_res18;
  
  plVar15 = (longlong *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar11 = *param_4 + 1;
  lVar12 = (longlong)iVar11;
  local_res18 = param_3;
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar11) {
    FUN_144ca73f0(plVar15,&PTR_vftable_14c6e47a0,lVar12);
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 < iVar11) {
    *(int *)(param_1 + 0x40) = iVar11;
    puVar13 = (undefined4 *)(lVar12 * 0x120 + *plVar15);
    puVar10 = (undefined4 *)((longlong)iVar4 * 0x120 + *plVar15);
    if (puVar10 != puVar13) {
      puVar10 = puVar10 + 0x3e;
      do {
        if ((undefined8 *)(puVar10 + -0x3e) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar10 + -0x3e) = 0;
          *(undefined8 *)(puVar10 + -0x3c) = 0;
          *(undefined8 *)(puVar10 + -0x3a) = 0;
          puVar10[-0x38] = 0;
          *(undefined8 *)(puVar10 + -0x37) = 0xffffffff80000000;
          *(undefined8 *)(puVar10 + -0x35) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + -0x33) = 0;
          uVar9 = uRam000000014c6dae48;
          *(undefined8 *)(puVar10 + -0x2e) = _DAT_14c6dae40;
          *(undefined8 *)(puVar10 + -0x2c) = uVar9;
          uVar9 = uRam000000014c6dae58;
          *(undefined8 *)(puVar10 + -0x2a) = _DAT_14c6dae50;
          *(undefined8 *)(puVar10 + -0x28) = uVar9;
          uVar8 = uRam000000014c6dae6c;
          uVar7 = uRam000000014c6dae68;
          uVar6 = uRam000000014c6dae64;
          puVar10[-0x26] = _DAT_14c6dae60;
          puVar10[-0x25] = uVar6;
          puVar10[-0x24] = uVar7;
          puVar10[-0x23] = uVar8;
          uVar8 = DAT_14c6dae7c;
          uVar7 = DAT_14c6dae78;
          uVar6 = DAT_14c6dae74;
          puVar10[-0x22] = DAT_14c6dae70;
          puVar10[-0x21] = uVar6;
          puVar10[-0x20] = uVar7;
          puVar10[-0x1f] = uVar8;
          *(undefined8 *)(puVar10 + -0x1e) = 0;
          *(undefined8 *)(puVar10 + -0x1c) = 0;
          *(undefined8 *)(puVar10 + -0x1a) = 0;
          *(undefined8 *)(puVar10 + -0x18) = 0;
          *(undefined8 *)(puVar10 + -0xe) = 0;
          puVar10[-0xc] = 0;
          puVar10[-0xb] = 0x80000000;
          uVar9 = FUN_144b3d480();
          *(undefined8 *)(puVar10 + -10) = uVar9;
          puVar10[-8] = 0;
          *(undefined8 *)(puVar10 + -6) = 0;
          puVar10[-4] = 0;
          puVar10[-3] = 0x80000000;
          uVar9 = FUN_144b3d480();
          *(undefined8 *)(puVar10 + -2) = uVar9;
          *puVar10 = 0;
          *(undefined1 *)(puVar10 + 2) = 0;
          *(undefined8 *)(puVar10 + 4) = 0;
          puVar10[6] = 0;
          puVar10[7] = 0x80000000;
          puVar10[8] = 0;
          *(undefined1 *)(puVar10 + -0x16) = 0;
          *(undefined8 *)(puVar10 + -0x12) = 0;
          *(undefined8 *)(puVar10 + -0x10) = 0;
        }
        puVar2 = puVar10 + 10;
        puVar10 = puVar10 + 0x48;
      } while (puVar2 != puVar13);
    }
  }
  else if (iVar11 < iVar4) {
    *(int *)(param_1 + 0x40) = iVar11;
    puVar16 = (uint *)(lVar12 * 0x120 + *plVar15);
    puVar14 = (uint *)((longlong)iVar4 * 0x120 + *plVar15);
    param_3 = local_res18;
    if (puVar14 != puVar16) {
      puVar14 = puVar14 + 7;
      do {
        puVar3 = puVar14 + -0x48;
        FUN_144bf90d0(puVar14 + -0xd);
        FUN_144c93800(puVar14 + -0x17);
        FUN_144c93440(puVar14 + -0x1f);
        lVar5 = *(longlong *)(puVar14 + -0x4b);
        lVar12 = lVar5 + (longlong)(int)puVar14[-0x49] * 8;
        while (lVar12 != lVar5) {
          plVar15 = (longlong *)(lVar12 + -8);
          lVar12 = lVar12 + -8;
          if (*plVar15 != 0) {
            FUN_144b3f230();
          }
        }
        puVar14[-0x49] = 0;
        if ((-1 < (int)*puVar3) && (*(longlong *)(puVar14 + -0x4b) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar14 + -0x4b),
                     (ulonglong)(*puVar3 & 0x7fffffff) << 3);
        }
        puVar14[-0x4b] = 0;
        puVar14[-0x4a] = 0;
        *puVar3 = 0x80000000;
        if (*(longlong *)(puVar14 + -0x4d) != 0) {
          FUN_144b3f230();
        }
        puVar1 = puVar14 + -0x4f;
        if (*(longlong *)(puVar14 + -0x4f) != 0) {
          FUN_144b3f230();
        }
        puVar14 = puVar3;
        param_3 = local_res18;
      } while (puVar1 != puVar16);
    }
  }
  plVar15 = (longlong *)((longlong)*param_4 * 0x120 + *(longlong *)(param_1 + 0x38));
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar12 = *plVar15;
  *plVar15 = param_2;
  if (lVar12 != 0) {
    FUN_144b3f230();
  }
  if (param_2 != 0) {
    iVar11 = *param_4;
    if (*(char *)(param_2 + 0x30) == '\x01') {
      lVar12 = *(longlong *)(param_2 + 0x20);
    }
    else {
      lVar12 = FUN_147e4bb26(param_2 + 0x20);
    }
    *(int *)(lVar12 + 0x17c) = iVar11;
    *(undefined4 *)(param_1 + 0x60 + (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x180) * 4)
         = *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x68) + 0xb0);
    *(byte *)(plVar15 + 0x20) = *(byte *)(plVar15 + 0x20) | 1;
  }
  if (param_3 != 0) {
    local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x60));
    local_res8[0] = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x6c);
    FUN_144fa9d90(*(undefined8 *)(param_1 + 0xf0),local_res10,local_res8,&local_res18);
    iVar11 = *param_4;
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar12 = *(longlong *)(param_3 + 0x20);
    }
    else {
      lVar12 = FUN_147e4bc84(param_3 + 0x20);
    }
    *(int *)(lVar12 + 100) = iVar11;
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar12 = *(longlong *)(param_3 + 0x20);
    }
    else {
      lVar12 = FUN_147e4bc84(param_3 + 0x20);
    }
    *(undefined4 *)(lVar12 + 0x68) = local_res10[0];
    FUN_145004680(plVar15,param_3);
  }
  return;
}



// FUNCTION 144ca2b70 FUN_144ca2b70 body=609 status=ok
// SIG undefined FUN_144ca2b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144ca2b70(longlong param_1,int *param_2,int *param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar7 = 0;
  *param_2 = -1;
  if ((int)uVar1 < 1) {
LAB_144ca2be3:
    if ((int)uVar1 < 1) goto LAB_144ca2c15;
  }
  else {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x38) + 0x24);
    uVar9 = uVar7;
    uVar14 = uVar7;
    do {
      iVar13 = (int)uVar14;
      if (*piVar6 == *param_3) {
        *param_2 = iVar13;
        if (iVar13 != -1) goto LAB_144ca2c15;
        goto LAB_144ca2be3;
      }
      uVar14 = (ulonglong)(iVar13 + 1);
      uVar9 = uVar9 + 1;
      piVar6 = piVar6 + 0x48;
    } while ((longlong)uVar9 < (longlong)(int)uVar1);
  }
  lVar10 = *(longlong *)(param_1 + 0x38);
  uVar9 = uVar7;
  do {
    if (*(int *)(lVar10 + 0x24) == -1) {
      *(int *)(lVar10 + 0x24) = *param_3;
      *param_2 = (int)uVar9;
      break;
    }
    uVar9 = (ulonglong)((int)uVar9 + 1);
    uVar7 = uVar7 + 1;
    lVar10 = lVar10 + 0x120;
  } while ((longlong)uVar7 < (longlong)(ulonglong)uVar1);
LAB_144ca2c15:
  iVar13 = *param_2;
  if (iVar13 == -1) {
    uVar1 = *(uint *)(param_1 + 0x44);
    iVar13 = *(int *)(param_1 + 0x40);
    iVar11 = *(int *)(param_1 + 0x40) + 1;
    *param_2 = iVar13;
    if ((int)(uVar1 & 0x7fffffff) < iVar11) {
      FUN_144ca73f0((longlong *)(param_1 + 0x38),&PTR_vftable_14c6e47a0,(longlong)iVar11);
      iVar13 = *param_2;
    }
    iVar2 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar11;
    puVar12 = (undefined8 *)((longlong)iVar2 * 0x120 + *(longlong *)(param_1 + 0x38));
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffff80000000;
      *(undefined8 *)((longlong)puVar12 + 0x24) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = 0;
      uVar8 = uRam000000014c6dae48;
      puVar12[8] = _DAT_14c6dae40;
      puVar12[9] = uVar8;
      uVar8 = uRam000000014c6dae58;
      puVar12[10] = _DAT_14c6dae50;
      puVar12[0xb] = uVar8;
      uVar5 = uRam000000014c6dae6c;
      uVar4 = uRam000000014c6dae68;
      uVar3 = uRam000000014c6dae64;
      *(undefined4 *)(puVar12 + 0xc) = _DAT_14c6dae60;
      *(undefined4 *)((longlong)puVar12 + 100) = uVar3;
      *(undefined4 *)(puVar12 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar5;
      uVar5 = DAT_14c6dae7c;
      uVar4 = DAT_14c6dae78;
      uVar3 = DAT_14c6dae74;
      *(undefined4 *)(puVar12 + 0xe) = DAT_14c6dae70;
      *(undefined4 *)((longlong)puVar12 + 0x74) = uVar3;
      *(undefined4 *)(puVar12 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x7c) = uVar5;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      puVar12[0x18] = 0;
      *(undefined4 *)(puVar12 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar12 + 0xcc) = 0x80000000;
      uVar8 = FUN_144b3d480();
      puVar12[0x1a] = uVar8;
      *(undefined4 *)(puVar12 + 0x1b) = 0;
      puVar12[0x1c] = 0;
      *(undefined4 *)(puVar12 + 0x1d) = 0;
      *(undefined4 *)((longlong)puVar12 + 0xec) = 0x80000000;
      uVar8 = FUN_144b3d480();
      iVar13 = *param_2;
      *(undefined4 *)(puVar12 + 0x1f) = 0;
      puVar12[0x1e] = uVar8;
      *(undefined1 *)(puVar12 + 0x20) = 0;
      puVar12[0x21] = 0;
      *(undefined4 *)(puVar12 + 0x22) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x114) = 0x80000000;
      *(undefined4 *)(puVar12 + 0x23) = 0;
      *(undefined1 *)(puVar12 + 0x14) = 0;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
    }
    *(int *)((longlong)puVar12 + 0x24) = *param_3;
  }
  lVar10 = (longlong)iVar13 * 0x120 + *(longlong *)(param_1 + 0x38);
  if ((param_4 & 1) != 0) {
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + 1;
  }
  if ((param_4 & 2) != 0) {
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + 1;
  }
  if ((param_4 & 4) != 0) {
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + 1;
  }
  return param_2;
}



// FUNCTION 144ca2de0 FUN_144ca2de0 body=741 status=ok
// SIG undefined FUN_144ca2de0(void)

void FUN_144ca2de0(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  void *_Dst;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 local_res8;
  int local_res20 [2];
  undefined1 local_58 [32];
  
  lVar12 = *(longlong *)(param_1 + 0x38);
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c);
  lVar14 = (longlong)iVar5 * 0x120;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar11 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar11 = FUN_147e4bb26(param_2 + 0x20);
  }
  *(int *)(lVar11 + 0x17c) = iVar5;
  FUN_144b3d910(param_2);
  lVar11 = *(longlong *)(lVar14 + lVar12);
  *(longlong *)(lVar14 + lVar12) = param_2;
  if (lVar11 != 0) {
    FUN_144b3f230();
  }
  pbVar2 = (byte *)(lVar14 + 0x100 + lVar12);
  *pbVar2 = *pbVar2 | 1;
  *(undefined4 *)(lVar14 + 0x28 + lVar12) = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x180);
  if ((param_4 & 2) == 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x68);
    puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar12);
    *puVar1 = *(undefined8 *)(param_2 + 0x60);
    puVar1[1] = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0x78);
    puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar12);
    *puVar1 = *(undefined8 *)(param_2 + 0x70);
    puVar1[1] = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0x88);
    puVar1 = (undefined8 *)(lVar14 + 0x60 + lVar12);
    *puVar1 = *(undefined8 *)(param_2 + 0x80);
    puVar1[1] = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 0x98);
    puVar1 = (undefined8 *)(lVar14 + 0x70 + lVar12);
    *puVar1 = *(undefined8 *)(param_2 + 0x90);
    puVar1[1] = uVar13;
    uVar10 = *(undefined4 *)(param_2 + 0xa4);
    uVar6 = *(undefined4 *)(param_2 + 0xa8);
    uVar7 = *(undefined4 *)(param_2 + 0xac);
    puVar3 = (undefined4 *)(lVar14 + 0x80 + lVar12);
    *puVar3 = *(undefined4 *)(param_2 + 0xa0);
    puVar3[1] = uVar10;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    uVar13 = *(undefined8 *)(param_2 + 0xb8);
    puVar1 = (undefined8 *)(lVar14 + 0x90 + lVar12);
    *puVar1 = *(undefined8 *)(param_2 + 0xb0);
    puVar1[1] = uVar13;
  }
  else {
    puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar12);
    uVar13 = puVar1[1];
    *(undefined8 *)(param_2 + 0x60) = *puVar1;
    *(undefined8 *)(param_2 + 0x68) = uVar13;
    puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar12);
    uVar13 = puVar1[1];
    *(undefined8 *)(param_2 + 0x70) = *puVar1;
    *(undefined8 *)(param_2 + 0x78) = uVar13;
    puVar1 = (undefined8 *)(lVar14 + 0x60 + lVar12);
    uVar13 = puVar1[1];
    *(undefined8 *)(param_2 + 0x80) = *puVar1;
    *(undefined8 *)(param_2 + 0x88) = uVar13;
    puVar1 = (undefined8 *)(lVar14 + 0x70 + lVar12);
    uVar13 = puVar1[1];
    *(undefined8 *)(param_2 + 0x90) = *puVar1;
    *(undefined8 *)(param_2 + 0x98) = uVar13;
    puVar3 = (undefined4 *)(lVar14 + 0x80 + lVar12);
    uVar10 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *(undefined4 *)(param_2 + 0xa0) = *puVar3;
    *(undefined4 *)(param_2 + 0xa4) = uVar10;
    *(undefined4 *)(param_2 + 0xa8) = uVar6;
    *(undefined4 *)(param_2 + 0xac) = uVar7;
    puVar3 = (undefined4 *)(lVar14 + 0x90 + lVar12);
    uVar10 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *(undefined4 *)(param_2 + 0xb0) = *puVar3;
    *(undefined4 *)(param_2 + 0xb4) = uVar10;
    *(undefined4 *)(param_2 + 0xb8) = uVar6;
    *(undefined4 *)(param_2 + 0xbc) = uVar7;
    FUN_144ca8090(*(longlong *)(param_2 + 0x20) + 400,param_2 + 0x60,param_2 + 0xc0);
  }
  FUN_144c3ed40(param_2,local_58);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar13 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar13 = FUN_144ca6690();
  }
  uVar10 = FUN_144fcd550(uVar13,local_58,iVar5);
  *(undefined4 *)(lVar14 + 0x20 + *(longlong *)(param_1 + 0x38)) = uVar10;
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x68) + 0xb0);
  lVar12 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x180);
  if (*(float *)(param_1 + 0x60 + lVar12 * 4) != fVar4) {
    *(float *)(param_1 + 0x60 + lVar12 * 4) = fVar4;
  }
  if ((param_4 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_res8 = 0x330;
      _Dst = (void *)(*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(_Dst);
      }
      if (_Dst == (void *)0x0) {
        uVar13 = 0;
      }
      else {
        memset(_Dst,0,0x330);
        uVar13 = FUN_144c2bf00(_Dst);
      }
      lVar12 = *(longlong *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar13;
      if (lVar12 != 0) {
        FUN_144b3f230();
      }
    }
    FUN_144ca59d0(param_1,param_2);
  }
  FUN_144be90e0(0xb6ef8c0e);
  puVar1 = (undefined8 *)param_3[1];
  iVar9 = iVar5;
  iVar8 = local_res20[0];
  for (param_3 = (undefined8 *)*param_3; local_res20[0] = iVar9, param_3 != puVar1;
      param_3 = param_3 + 1) {
    FUN_144ca5b10(param_1,local_res20,*param_3);
    iVar9 = local_res20[0];
    iVar8 = local_res20[0];
  }
  local_res20[0] = iVar8;
  FUN_144be90e0(0x38c113d8);
  lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x68);
  lVar14 = *(longlong *)(lVar12 + 0x48);
  lVar12 = (longlong)*(int *)(lVar12 + 0x50) * 0x10 + lVar14;
  local_res20[0] = iVar5;
  for (; lVar14 != lVar12; lVar14 = lVar14 + 0x10) {
    FUN_144ca5b10(param_1,local_res20,*(undefined8 *)(lVar14 + 8));
  }
  return;
}



// FUNCTION 144ca30d0 FUN_144ca30d0 body=179 status=ok
// SIG undefined FUN_144ca30d0(void)

void FUN_144ca30d0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res8 [2];
  
  plVar3 = (longlong *)((longlong)*param_2 * 0x120 + *(longlong *)(param_1 + 0x38));
  lVar1 = plVar3[4];
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_144ca6690();
  }
  FUN_144fcded0(uVar2,(int)lVar1);
  *(undefined4 *)(plVar3 + 4) = 0xffffffff;
  local_res8[0] = *param_2;
  FUN_144ca6370(param_1,local_res8);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  *(byte *)(plVar3 + 0x20) = *(byte *)(plVar3 + 0x20) | 1;
  local_res8[0] = *param_2;
  FUN_144ca58e0(param_1,local_res8,0xffffffff);
  return;
}



// FUNCTION 144ca3190 FUN_144ca3190 body=540 status=ok
// SIG undefined FUN_144ca3190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ca3190(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  lVar10 = *(longlong *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(lVar10 + 0x6c);
  iVar2 = *(int *)(lVar10 + 100);
  local_res8[0] = *(undefined4 *)(lVar10 + 0x60);
  local_res10[0] = uVar1;
  FUN_144fa9e40(*(undefined8 *)(param_1 + 0xf0),local_res20,local_res10,local_res8);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar10 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar10 = FUN_147e4bc84(param_2 + 0x20);
  }
  uVar4 = local_res20[0];
  *(int *)(lVar10 + 100) = iVar2;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar10 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar10 = FUN_147e4bc84(param_2 + 0x20);
  }
  *(undefined4 *)(lVar10 + 0x68) = uVar4;
  lVar10 = (longlong)iVar2 * 0x120 + *(longlong *)(param_1 + 0x38);
  FUN_145004680(lVar10,param_2);
  *(undefined4 *)(lVar10 + 0x28) = uVar1;
  uVar7 = uRam000000014c6dae48;
  if (param_4 == '\0') {
    *(undefined8 *)(lVar10 + 0x40) = _DAT_14c6dae40;
    *(undefined8 *)(lVar10 + 0x48) = uVar7;
    uVar7 = uRam000000014c6dae58;
    *(undefined8 *)(lVar10 + 0x50) = _DAT_14c6dae50;
    *(undefined8 *)(lVar10 + 0x58) = uVar7;
    uVar7 = uRam000000014c6dae68;
    *(undefined8 *)(lVar10 + 0x60) = _DAT_14c6dae60;
    *(undefined8 *)(lVar10 + 0x68) = uVar7;
    uVar7 = _DAT_14c6dae78;
    *(undefined8 *)(lVar10 + 0x70) = _DAT_14c6dae70;
    *(undefined8 *)(lVar10 + 0x78) = uVar7;
    *(undefined8 *)(lVar10 + 0x80) = 0;
    *(undefined8 *)(lVar10 + 0x88) = 0;
    *(undefined8 *)(lVar10 + 0x90) = 0;
    *(undefined8 *)(lVar10 + 0x98) = 0;
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar10 + 0x48) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar10 + 0x58) = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 100);
    uVar5 = *(undefined4 *)(param_2 + 0x68);
    uVar6 = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(lVar10 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(lVar10 + 100) = uVar4;
    *(undefined4 *)(lVar10 + 0x68) = uVar5;
    *(undefined4 *)(lVar10 + 0x6c) = uVar6;
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar10 + 0x78) = uVar7;
  }
  else {
    uVar7 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar10 + 0x40);
    *(undefined8 *)(param_2 + 0x48) = uVar7;
    uVar7 = *(undefined8 *)(lVar10 + 0x58);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(lVar10 + 0x50);
    *(undefined8 *)(param_2 + 0x58) = uVar7;
    uVar4 = *(undefined4 *)(lVar10 + 100);
    uVar5 = *(undefined4 *)(lVar10 + 0x68);
    uVar6 = *(undefined4 *)(lVar10 + 0x6c);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar10 + 0x60);
    *(undefined4 *)(param_2 + 100) = uVar4;
    *(undefined4 *)(param_2 + 0x68) = uVar5;
    *(undefined4 *)(param_2 + 0x6c) = uVar6;
    uVar7 = *(undefined8 *)(lVar10 + 0x78);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar10 + 0x70);
    *(undefined8 *)(param_2 + 0x78) = uVar7;
  }
  puVar3 = (undefined8 *)param_3[1];
  uVar6 = uVar1;
  iVar9 = iVar2;
  uVar4 = local_res8[0];
  uVar5 = local_res10[0];
  iVar8 = local_res18[0];
  local_res8[0] = local_res20[0];
  for (param_3 = (undefined8 *)*param_3; local_res18[0] = iVar9, local_res10[0] = uVar6,
      param_3 != puVar3; param_3 = param_3 + 1) {
    local_res20[0] = local_res8[0];
    FUN_144ca6210(param_1,local_res18,local_res10,local_res8,*param_3);
    uVar6 = local_res10[0];
    iVar9 = local_res18[0];
    uVar4 = local_res8[0];
    uVar5 = local_res10[0];
    iVar8 = local_res18[0];
    local_res8[0] = local_res20[0];
  }
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x70);
  lVar11 = *(longlong *)(lVar10 + 0x80);
  lVar10 = (longlong)*(int *)(lVar10 + 0x88) * 0x10 + lVar11;
  local_res10[0] = uVar1;
  local_res18[0] = iVar2;
  for (; lVar11 != lVar10; lVar11 = lVar11 + 0x10) {
    local_res20[0] = local_res8[0];
    FUN_144ca6210(param_1,local_res18,local_res10,local_res8,*(undefined8 *)(lVar11 + 8));
    uVar4 = local_res8[0];
    uVar5 = local_res10[0];
    iVar8 = local_res18[0];
    local_res8[0] = local_res20[0];
  }
  local_res8[0] = uVar4;
  local_res10[0] = uVar5;
  local_res18[0] = iVar8;
  FUN_145016d40(param_2,param_1);
  return;
}



// FUNCTION 144ca33b0 FUN_144ca33b0 body=264 status=ok
// SIG undefined FUN_144ca33b0(void)

void FUN_144ca33b0(longlong param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)(int)*param_2 * 0x120 + 0x10 + *(longlong *)(param_1 + 0x38)) +
           (longlong)(int)*param_3 * 8);
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + 0x6c);
  FUN_1450172d0(lVar3,param_1);
  local_res8[0] = *param_3;
  local_res10[0] = *param_2;
  FUN_144ca6520(param_1,local_res10,local_res8);
  lVar3 = *(longlong *)((longlong)(int)*param_2 * 0x120 + 0x10 + *(longlong *)(param_1 + 0x38));
  lVar4 = *(longlong *)(lVar3 + (longlong)(int)*param_3 * 8);
  *(undefined8 *)(lVar3 + (longlong)(int)*param_3 * 8) = 0;
  if (lVar4 != 0) {
    FUN_144b3f230(lVar4);
  }
  puVar1 = (uint *)(*(longlong *)
                     ((longlong)(int)*param_2 * 0x120 + 0x108 + *(longlong *)(param_1 + 0x38)) +
                   ((longlong)(int)*param_3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << (*param_3 & 0x1f);
  local_res8[0] = *param_2;
  FUN_144ca58e0(param_1,local_res8,0xffffffff);
  local_res8[0] = *param_3;
  local_res10[0] = uVar2;
  FUN_144fa9e10(*(undefined8 *)(param_1 + 0xf0),local_res10,local_res8);
  return;
}



// FUNCTION 144ca34c0 FUN_144ca34c0 body=640 status=ok
// SIG undefined FUN_144ca34c0(void)

void FUN_144ca34c0(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar13 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar29;
  uint uVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int local_res20 [2];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  plVar1 = (longlong *)(param_2 + 0x20);
  iVar2 = *(int *)(*plVar1 + 0x94);
  lVar8 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x120;
  FUN_144b3d910(param_2);
  lVar9 = *(longlong *)(lVar8 + 8);
  *(longlong *)(lVar8 + 8) = param_2;
  if (lVar9 != 0) {
    FUN_144b3f230();
  }
  *(byte *)(lVar8 + 0x100) = *(byte *)(lVar8 + 0x100) | 2;
  *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(*plVar1 + 0x98);
  if (param_4 == '\0') {
    *(undefined1 *)(lVar8 + 0xa0) = *(undefined1 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar8 + 0xb0) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar8 + 0xb8) = uVar7;
  }
  else {
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(lVar8 + 0xa0);
    uVar7 = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(lVar8 + 0xb0);
    *(undefined8 *)(param_2 + 0x58) = uVar7;
  }
  auVar13 = *(undefined1 (*) [16])(*(longlong *)(*plVar1 + 0x38) + 0x80);
  uVar18 = auVar13._0_4_;
  auVar28 = *(undefined1 (*) [16])(*(longlong *)(*plVar1 + 0x38) + 0x90);
  if (*(byte *)(param_2 + 0x40) != 0) {
    uVar12 = (uint)*(byte *)(param_2 + 0x40);
    uVar20 = -(uint)(0x16a8300 << uVar12 < 0);
    uVar21 = -(uint)(0x502ab000 << uVar12 < 0);
    uVar22 = -(uint)(0xa2a8c00 << uVar12 < 0);
    uVar19 = auVar13._4_4_;
    uVar15 = auVar13._8_4_;
    uVar23 = -(uint)(0xa154c00 << uVar12 < 0);
    uVar24 = -(uint)(0x1554300 << uVar12 < 0);
    uVar25 = -(uint)(0x50157000 << uVar12 < 0);
    uVar10 = (ulonglong)uVar12;
    uVar26 = auVar28._0_4_;
    uVar29 = auVar28._4_4_;
    uVar30 = auVar28._8_4_;
    uVar12 = (0xae71e0U >> uVar10) << 0x1f;
    uVar14 = (0xb9e306U >> uVar10) << 0x1f;
    uVar16 = (0xeb903cU >> uVar10) << 0x1f;
    uVar17 = (0U >> uVar10) << 0x1f;
    uVar7 = CONCAT44((~uVar24 & (uVar15 & uVar21 | ~uVar21 & uVar19) | uVar18 & uVar24) ^ uVar14,
                     (~uVar23 & (uVar19 & uVar20 | ~uVar20 & uVar18) | uVar15 & uVar23) ^ uVar12);
    uVar18 = (~uVar25 & (uVar18 & uVar22 | ~uVar22 & uVar15) | uVar19 & uVar25) ^ uVar16;
    uVar19 = auVar13._12_4_ ^ uVar17;
    auVar27._8_4_ = uVar18;
    auVar27._0_8_ = uVar7;
    auVar27._12_4_ = uVar19;
    auVar11._0_4_ = (~uVar23 & (uVar29 & uVar20 | ~uVar20 & uVar26) | uVar30 & uVar23) ^ uVar12;
    auVar11._4_4_ = (~uVar24 & (uVar30 & uVar21 | ~uVar21 & uVar29) | uVar26 & uVar24) ^ uVar14;
    auVar11._8_4_ = (~uVar25 & (uVar26 & uVar22 | ~uVar22 & uVar30) | uVar29 & uVar25) ^ uVar16;
    auVar11._12_4_ = auVar28._12_4_ ^ uVar17;
    auVar13._8_4_ = uVar18;
    auVar13._0_8_ = uVar7;
    auVar13._12_4_ = uVar19;
    auVar13 = minps(auVar13,auVar11);
    auVar28 = maxps(auVar27,auVar11);
  }
  local_58 = *(float *)(param_2 + 0x50) + auVar13._0_4_;
  fStack_54 = *(float *)(param_2 + 0x54) + auVar13._4_4_;
  fStack_50 = *(float *)(param_2 + 0x58) + auVar13._8_4_;
  fStack_4c = *(float *)(param_2 + 0x5c) + auVar13._12_4_;
  local_48 = *(float *)(param_2 + 0x50) + auVar28._0_4_;
  fStack_44 = *(float *)(param_2 + 0x54) + auVar28._4_4_;
  fStack_40 = *(float *)(param_2 + 0x58) + auVar28._8_4_;
  fStack_3c = *(float *)(param_2 + 0x5c) + auVar28._12_4_;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar7 = FUN_144ca6690();
  }
  uVar6 = FUN_144fcd550(uVar7,&local_58,iVar2);
  *(undefined4 *)((longlong)iVar2 * 0x120 + 0x20 + *(longlong *)(param_1 + 0x38)) = uVar6;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar9 = *plVar1;
  }
  else {
    lVar9 = FUN_147e4bde2(plVar1);
  }
  puVar3 = (undefined8 *)param_3[1];
  param_3 = (undefined8 *)*param_3;
  *(int *)(lVar9 + 0x94) = iVar2;
  iVar5 = iVar2;
  iVar4 = local_res20[0];
  for (; local_res20[0] = iVar5, param_3 != puVar3; param_3 = param_3 + 1) {
    FUN_144ca5e90(param_1,local_res20,*param_3);
    iVar5 = local_res20[0];
    iVar4 = local_res20[0];
  }
  lVar9 = *(longlong *)(*(longlong *)(*plVar1 + 0x38) + 0x58);
  lVar8 = (longlong)*(int *)(*(longlong *)(*plVar1 + 0x38) + 0x60) * 0x10 + lVar9;
  local_res20[0] = iVar2;
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0x10) {
    FUN_144ca5e90(param_1,local_res20,*(undefined8 *)(lVar9 + 8));
    iVar4 = local_res20[0];
  }
  local_res20[0] = iVar4;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar9 = *plVar1;
  }
  else {
    lVar9 = FUN_147e4bde2(plVar1);
  }
  FUN_145017670(lVar9,param_1);
  return;
}



// FUNCTION 144ca3740 FUN_144ca3740 body=265 status=ok
// SIG undefined FUN_144ca3740(void)

void FUN_144ca3740(longlong param_1,int *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_res8 [2];
  
  lVar3 = *(longlong *)((longlong)*param_2 * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
  uVar2 = *(undefined4 *)((longlong)*param_2 * 0x120 + 0x20 + *(longlong *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = FUN_144ca6690();
  }
  FUN_144fcded0(uVar4,uVar2);
  *(undefined4 *)((longlong)*param_2 * 0x120 + 0x20 + *(longlong *)(param_1 + 0x38)) = 0xffffffff;
  if (*(char *)(lVar3 + 0x30) == '\x01') {
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
  }
  else {
    uVar4 = FUN_147e4bde2();
  }
  FUN_1450179d0(uVar4,param_1);
  local_res8[0] = *param_2;
  FUN_144ca6370(param_1,local_res8);
  lVar3 = *(longlong *)((longlong)*param_2 * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
  *(undefined8 *)((longlong)*param_2 * 0x120 + 8 + *(longlong *)(param_1 + 0x38)) = 0;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  pbVar1 = (byte *)((longlong)*param_2 * 0x120 + 0x100 + *(longlong *)(param_1 + 0x38));
  *pbVar1 = *pbVar1 | 2;
  local_res8[0] = *param_2;
  FUN_144ca58e0(param_1,local_res8,0xffffffff);
  return;
}



// FUNCTION 144ca3850 FUN_144ca3850 body=342 status=ok
// SIG undefined FUN_144ca3850(void)

void FUN_144ca3850(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  
  puVar4 = *(uint **)(param_1 + 0x38);
  if (puVar4 + (longlong)*(int *)(param_1 + 0x40) * 0x48 != puVar4) {
    puVar7 = puVar4 + (longlong)*(int *)(param_1 + 0x40) * 0x48 + 7;
    do {
      puVar3 = puVar7 + -0x48;
      FUN_144bf90d0(puVar7 + -0xd);
      FUN_144c93800(puVar7 + -0x17);
      FUN_144c93440(puVar7 + -0x1f);
      lVar5 = *(longlong *)(puVar7 + -0x4b);
      lVar6 = lVar5 + (longlong)(int)puVar7[-0x49] * 8;
      while (lVar6 != lVar5) {
        plVar1 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
      puVar7[-0x49] = 0;
      if ((-1 < (int)*puVar3) && (*(longlong *)(puVar7 + -0x4b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar7 + -0x4b),
                   (ulonglong)(*puVar3 & 0x7fffffff) << 3);
      }
      puVar7[-0x4b] = 0;
      puVar7[-0x4a] = 0;
      *puVar3 = 0x80000000;
      if (*(longlong *)(puVar7 + -0x4d) != 0) {
        FUN_144b3f230();
      }
      puVar2 = puVar7 + -0x4f;
      if (*(longlong *)(puVar7 + -0x4f) != 0) {
        FUN_144b3f230();
      }
      puVar7 = puVar3;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x38),
               (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) * 0x120);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  return;
}



// FUNCTION 144ca39b0 FUN_144ca39b0 body=1349 status=ok
// SIG undefined FUN_144ca39b0(void)

void FUN_144ca39b0(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ushort uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ushort local_84 [2];
  float local_80;
  int local_7c;
  longlong local_78;
  int local_70 [2];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  
  puVar7 = (undefined8 *)0x0;
  iVar11 = *(int *)(param_3 + 0x30);
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar11 == *(int *)(param_3 + 0x34)) {
    if (0 < iVar3) {
      plVar15 = *(longlong **)(param_1 + 0x38);
      puVar8 = puVar7;
      do {
        iVar10 = (int)puVar8;
        if ((*(int *)((longlong)plVar15 + 0x24) == iVar11) && (*plVar15 != 0)) goto LAB_144ca3a13;
        puVar8 = (undefined8 *)(ulonglong)(iVar10 + 1);
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        plVar15 = plVar15 + 0x24;
      } while ((longlong)puVar7 < (longlong)iVar3);
    }
    iVar10 = -1;
LAB_144ca3a13:
    FUN_144c3eca0(*(undefined8 *)((longlong)iVar10 * 0x120 + *(longlong *)(param_1 + 0x38)),param_2,
                  param_3,param_4);
    return;
  }
  if (0 < iVar3) {
    plVar15 = *(longlong **)(param_1 + 0x38);
    puVar8 = puVar7;
    puVar16 = puVar7;
    do {
      iVar10 = (int)puVar16;
      if ((*(int *)((longlong)plVar15 + 0x24) == iVar11) && (*plVar15 != 0)) goto LAB_144ca3a95;
      puVar16 = (undefined8 *)(ulonglong)(iVar10 + 1);
      puVar8 = (undefined8 *)((longlong)puVar8 + 1);
      plVar15 = plVar15 + 0x24;
    } while ((longlong)puVar8 < (longlong)iVar3);
  }
  iVar10 = -1;
LAB_144ca3a95:
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar15 = *(longlong **)(param_1 + 0x38);
    puVar8 = puVar7;
    puVar16 = puVar7;
    do {
      iVar11 = (int)puVar16;
      if ((*(int *)((longlong)plVar15 + 0x24) == *(int *)(param_3 + 0x34)) && (*plVar15 != 0))
      goto LAB_144ca3ad2;
      puVar16 = (undefined8 *)(ulonglong)(iVar11 + 1);
      puVar8 = (undefined8 *)((longlong)puVar8 + 1);
      plVar15 = plVar15 + 0x24;
    } while ((longlong)puVar8 < (longlong)*(int *)(param_1 + 0x40));
  }
  iVar11 = -1;
LAB_144ca3ad2:
  plVar15 = (longlong *)(param_1 + 0x38);
  uVar9 = *(ushort *)(param_3 + 0x82);
  uVar13 = *(ushort *)(param_3 + 0x80);
  local_60 = (longlong)iVar10 * 0x120;
  local_78 = *(longlong *)(local_60 + *(longlong *)(param_1 + 0x38));
  local_68 = *(longlong *)((longlong)iVar11 * 0x120 + *(longlong *)(param_1 + 0x38));
  local_80 = (float)((uint)uVar13 << 0x10);
  local_7c = iVar11;
  local_70[0] = iVar10;
  if ((local_80 < 0.0) || ((float)((uint)uVar9 << 0x10) < 0.0)) {
    local_58 = (longlong *)(param_1 + 0x38);
    FUN_144c51ae0(local_84,local_78 + 0x60,local_68 + 0x60);
    plVar12 = plVar15;
    if (local_80 < 0.0) {
      plVar12 = local_58;
      uVar13 = local_84[0];
    }
    if ((float)((uint)uVar9 << 0x10) < 0.0) {
      plVar15 = plVar12;
      uVar9 = local_84[0];
    }
  }
  FUN_144c3ecf0(local_78,param_2,param_3,uVar13,param_4);
  FUN_144c3ecf0(local_68,param_2,param_3,uVar9,param_4 + 0x20);
  plVar12 = (longlong *)(local_60 + 0xc0 + *plVar15);
  lVar5 = FUN_144ca6d90(plVar12,&local_7c);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 4) < 0)) {
    local_60 = 0x38;
    iVar3 = *(int *)(param_1 + 0x50);
    plVar15 = (longlong *)(*plVar15 + 0xc0 + (longlong)iVar11 * 0x120);
    puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar8,"hkaiStreamingSetInstance");
    }
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[2] = 1;
      puVar8[1] = 0xffffffff;
      *puVar8 = hkaiStreamingSetInstance::vftable;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *(undefined4 *)(puVar8 + 6) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x34) = 0x80000000;
      puVar7 = puVar8;
    }
    *(int *)(puVar7 + 3) = iVar10;
    *(int *)((longlong)puVar7 + 0x1c) = iVar11;
    local_80 = (float)(*(int *)(param_1 + 0x50) + 1);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < (int)local_80) {
      FUN_144ca77a0(param_1 + 0x48,&PTR_vftable_14c6e47a0,(longlong)(int)local_80);
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18)
    ;
    *(float *)(param_1 + 0x50) = local_80;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined1 *)(plVar1 + 2) = 0;
      *(undefined1 *)(plVar1 + 2) = 1;
    }
    *(undefined1 *)(plVar1 + 2) = 1;
    if ((undefined8 *)*plVar1 != puVar7) {
      FUN_144b3d910(puVar7);
      lVar5 = *plVar1;
      *plVar1 = (longlong)puVar7;
      if (lVar5 != 0) {
        FUN_144b3f230();
      }
    }
    FUN_144b3f230(puVar7);
    FUN_144ca6b50(plVar12,&local_68,&local_7c);
    if ((int)local_68 == (int)plVar12[1]) {
      iVar14 = (int)plVar12[1] + 1;
      if ((int)(*(uint *)((longlong)plVar12 + 0xc) & 0x7fffffff) < iVar14) {
        FUN_144ca7c90(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar14);
      }
      piVar2 = (int *)(*plVar12 + (longlong)(int)plVar12[1] * 8);
      if (piVar2 != (int *)0x0) {
        piVar2[1] = iVar3;
        *piVar2 = iVar11;
      }
      *(int *)(plVar12 + 1) = iVar14;
    }
    else {
      *(int *)(*plVar12 + 4 + (longlong)(int)local_68 * 8) = iVar3;
    }
    FUN_144ca6b50(plVar15,&local_78,local_70);
    if ((int)local_78 == (int)plVar15[1]) {
      iVar11 = (int)plVar15[1] + 1;
      if ((int)(*(uint *)((longlong)plVar15 + 0xc) & 0x7fffffff) < iVar11) {
        FUN_144ca7c90(plVar15,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      piVar2 = (int *)(*plVar15 + (longlong)(int)plVar15[1] * 8);
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar10;
        piVar2[1] = iVar3;
      }
      *(int *)(plVar15 + 1) = iVar11;
    }
    else {
      *(int *)(*plVar15 + 4 + (longlong)(int)local_78 * 8) = iVar3;
    }
  }
  else {
    lVar5 = (longlong)*(int *)(*plVar12 + 4 + (longlong)*(int *)(lVar5 + 4) * 8);
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar5 * 0x18) == '\x01') {
      puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + lVar5 * 0x18);
    }
    else {
      puVar7 = (undefined8 *)FUN_144ca67f0();
    }
  }
  iVar11 = *(int *)(puVar7 + 6) + 1;
  if ((int)(*(uint *)((longlong)puVar7 + 0x34) & 0x7fffffff) < iVar11) {
    FUN_144ca71f0(puVar7 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  lVar6 = (longlong)*(int *)(puVar7 + 6);
  lVar5 = puVar7[5];
  *(int *)(puVar7 + 6) = iVar11;
  if (*(int *)(puVar7 + 3) == iVar10) {
    *(undefined4 *)(lVar5 + lVar6 * 0xc) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(lVar5 + 4 + lVar6 * 0xc) = *(undefined4 *)(param_3 + 0x3c);
    *(undefined2 *)(lVar5 + 8 + lVar6 * 0xc) = *(undefined2 *)(param_4 + 0x18);
    uVar4 = *(undefined2 *)(param_4 + 0x38);
  }
  else {
    *(undefined4 *)(lVar5 + lVar6 * 0xc) = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(lVar5 + 4 + lVar6 * 0xc) = *(undefined4 *)(param_3 + 0x38);
    *(undefined2 *)(lVar5 + 8 + lVar6 * 0xc) = *(undefined2 *)(param_4 + 0x38);
    uVar4 = *(undefined2 *)(param_4 + 0x18);
  }
  *(undefined2 *)(lVar5 + 10 + lVar6 * 0xc) = uVar4;
  return;
}



// FUNCTION 144ca3f00 FUN_144ca3f00 body=1054 status=ok
// SIG undefined FUN_144ca3f00(void)

void FUN_144ca3f00(longlong param_1,undefined4 param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint local_res18 [2];
  longlong local_res20;
  uint local_88 [2];
  longlong local_80;
  uint local_78;
  uint local_74;
  uint *local_70;
  int local_68;
  uint local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_48;
  longlong *local_40;
  
  uVar5 = param_3 >> 0x16 & 0x3ff;
  uVar13 = (uint)param_3 & 0x3fffff;
  iVar9 = 0;
  local_88[0] = (uint)uVar5;
  lVar8 = *(longlong *)(uVar5 * 0x120 + *(longlong *)(param_1 + 0x38));
  local_res20 = param_4;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if (*(char *)(lVar8 + 0x30) == '\x01') {
    lVar8 = *(longlong *)(lVar8 + 0x20);
  }
  else {
    lVar8 = FUN_147e4bb26();
    uVar5 = (ulonglong)local_88[0];
  }
  local_78 = uVar13;
  FUN_144c42eb0(lVar8,param_2,&local_78,param_4);
  if (*(char *)(param_4 + 0x28) != '\0') {
    if ((int)uVar13 < *(int *)(lVar8 + 0x20)) {
      uVar10 = uVar13;
      if (*(int *)(lVar8 + 0x98) != 0) {
        uVar10 = *(uint *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar13 * 4);
      }
      if (uVar10 == 0xffffffff) {
        lVar8 = *(longlong *)(lVar8 + 0x18);
        lVar16 = (ulonglong)uVar13 * 3;
      }
      else {
        lVar16 = (longlong)(int)uVar10 * 3;
        lVar8 = *(longlong *)(lVar8 + 0xb0);
      }
    }
    else {
      lVar16 = (longlong)(int)(uVar13 - *(int *)(lVar8 + 0x20)) * 3;
      lVar8 = *(longlong *)(lVar8 + 0xd0);
    }
    local_res18[0] =
         CONCAT22(local_res18[0]._2_2_,
                  *(short *)(lVar8 + 10 + lVar16 * 4) + *(short *)(lVar8 + lVar16 * 4 + 8));
    local_70 = local_60;
    local_68 = 0;
    local_64 = 0x80000004;
    local_40 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0 + (longlong)(int)uVar5 * 0x120);
    local_50 = (uint *)*local_40;
    local_48 = local_50 + (longlong)(int)local_40[1] * 2;
    if (local_50 != local_48) {
      do {
        uVar10 = local_res18[0];
        local_74 = *local_50;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)local_50[1] * 0x18);
        lVar8 = *plVar1;
        uVar6 = (ulonglong)(*(int *)(lVar8 + 0x18) != (int)uVar5);
        iVar17 = *(int *)(lVar8 + 0x30) + -1;
        lVar16 = (longlong)iVar17;
        local_80 = lVar8;
        iVar4 = iVar9;
        if (-1 < iVar17) {
          lVar12 = lVar16 * 0xc;
          do {
            lVar11 = *(longlong *)(lVar8 + 0x28) + lVar12;
            if (*(uint *)(lVar11 + uVar6 * 4) == uVar13) {
              if ((char)plVar1[2] == '\x01') {
                lVar15 = *plVar1;
              }
              else {
                lVar15 = FUN_144ca67f0(plVar1);
              }
              iVar9 = (int)*(short *)(lVar11 + 8 + uVar6 * 2) - (uVar10 & 0xffff);
              lVar8 = local_80;
              if ((*(uint *)(*(longlong *)(local_res20 + 0x10) + (longlong)(iVar9 >> 5) * 4) >>
                   ((byte)iVar9 & 0x1f) & 1) != 0) {
                iVar9 = *(int *)(lVar15 + 0x30);
                iVar4 = iVar9 + -1;
                *(int *)(lVar15 + 0x30) = iVar4;
                if (iVar4 != iVar17) {
                  puVar2 = (undefined4 *)
                           (*(longlong *)(lVar15 + 0x28) + ((longlong)iVar9 + -1) * 0xc);
                  puVar7 = (undefined4 *)(*(longlong *)(lVar15 + 0x28) + lVar12);
                  if (puVar7 != puVar2) {
                    lVar15 = (longlong)puVar2 - (longlong)puVar7;
                    lVar11 = 3;
                    do {
                      *puVar7 = *(undefined4 *)(lVar15 + (longlong)puVar7);
                      puVar7 = puVar7 + 1;
                      lVar11 = lVar11 + -1;
                    } while (lVar11 != 0);
                  }
                }
              }
            }
            iVar17 = iVar17 + -1;
            lVar12 = lVar12 + -0xc;
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
          uVar5 = (ulonglong)local_88[0];
          iVar4 = local_68;
        }
        puVar3 = local_50;
        uVar10 = local_74;
        iVar9 = iVar4;
        if ((*(int *)(lVar8 + 0x30) == 0) && (*(longlong *)(lVar8 + 0x20) == 0)) {
          iVar9 = iVar4 + 1;
          if ((int)(local_64 & 0x7fffffff) < iVar9) {
            FUN_144ca7ba0(&local_70,&PTR_vftable_14c6e47c0,(longlong)iVar9);
            iVar4 = local_68;
          }
          local_68 = iVar9;
          if (local_70 + iVar4 != (uint *)0x0) {
            local_70[iVar4] = uVar10;
          }
        }
        local_50 = puVar3 + 2;
      } while (local_50 != local_48);
    }
    plVar1 = local_40;
    puVar3 = local_70 + iVar9;
    for (puVar14 = local_70; puVar14 != puVar3; puVar14 = puVar14 + 1) {
      local_res18[0] = *puVar14;
      lVar16 = (longlong)(int)local_res18[0];
      lVar8 = FUN_144ca6d90(plVar1,local_res18);
      if (lVar8 == 0) {
        uVar13 = 0xffffffff;
        iVar9 = -1;
      }
      else {
        iVar9 = *(int *)(lVar8 + 4);
        uVar13 = (uint)(lVar8 - plVar1[2] >> 3);
      }
      lVar8 = *plVar1 + (longlong)iVar9 * 8;
      lVar12 = (longlong)*(int *)(lVar8 + 4);
      if ((*(uint *)(plVar1 + 3) < uVar13) ||
         (lVar11 = plVar1[2] + (longlong)(int)uVar13 * 8,
         *(int *)(plVar1[2] + 4 + (longlong)(int)uVar13 * 8) != iVar9)) {
        lVar11 = FUN_144ca6d90(plVar1,lVar8);
      }
      FUN_144ca1700(plVar1,lVar11);
      lVar16 = lVar16 * 0x120 + *(longlong *)(param_1 + 0x38);
      lVar8 = FUN_144ca6d90(lVar16 + 0xc0,local_88);
      if (lVar8 != 0) {
        FUN_144ca1700(lVar16 + 0xc0,lVar8);
      }
      lVar8 = *(longlong *)(param_1 + 0x48);
      *(undefined1 *)(lVar8 + 0x10 + lVar12 * 0x18) = 1;
      lVar16 = *(longlong *)(lVar8 + lVar12 * 0x18);
      *(undefined8 *)(lVar8 + lVar12 * 0x18) = 0;
      if (lVar16 != 0) {
        FUN_144b3f230(lVar16);
      }
    }
    local_68 = 0;
    if ((-1 < (int)local_64) && (local_70 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_70,(ulonglong)(local_64 & 0x7fffffff) << 2);
    }
  }
  return;
}



// FUNCTION 144ca4320 FUN_144ca4320 body=1712 status=ok
// SIG undefined FUN_144ca4320(void)

void FUN_144ca4320(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  short sVar14;
  short *psVar15;
  uint local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  short *local_148;
  int local_140;
  uint local_13c;
  short local_138 [4];
  longlong local_130;
  undefined4 local_128;
  int local_124;
  longlong local_120;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint local_a8 [2];
  longlong local_a0;
  int local_94;
  undefined1 local_90 [40];
  undefined8 local_68;
  short *psStack_60;
  undefined8 local_58;
  short *psStack_50;
  
  local_e8 = *(longlong *)((longlong)*param_2 * 0x120 + 0xc0 + *(longlong *)(param_1 + 0x38));
  local_c8 = local_e8 +
             (longlong)*(int *)((longlong)*param_2 * 0x120 + 200 + *(longlong *)(param_1 + 0x38)) *
             8;
  local_res18 = param_3;
  if (local_e8 != local_c8) {
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(local_e8 + 4) * 0x18)
      ;
      if ((char)plVar1[2] == '\x01') {
        local_f0 = *plVar1;
      }
      else {
        local_f0 = FUN_144ca67f0();
      }
      local_f8 = *(longlong *)(local_f0 + 0x28);
      lVar8 = (longlong)*(int *)(local_f0 + 0x30) * 0xc;
      lVar6 = local_f8 + lVar8;
      local_res20 = lVar6;
      if (local_f8 != lVar6) {
        local_100 = 0;
        lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
        local_d0 = (lVar8 >> 1) - (lVar8 >> 0x3f);
        local_e0 = local_f8 + 0xc;
        do {
          lVar4 = local_f0;
          lVar13 = local_f8;
          lVar8 = local_100;
          if (1 < (int)local_d0) {
            FUN_144ca6e90(local_f8,0,(int)local_d0 + -1);
          }
          lVar3 = 0;
          iVar12 = *(int *)(lVar4 + 0x18 + lVar8 * 4);
          lVar4 = *(longlong *)((longlong)iVar12 * 0x120 + *(longlong *)(param_1 + 0x38));
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x30) == '\x01') {
              lVar3 = *(longlong *)(lVar4 + 0x20);
            }
            else {
              lVar3 = FUN_147e4bb26();
            }
          }
          uVar10 = *(uint *)(lVar13 + lVar8 * 4);
          lVar13 = (longlong)(int)uVar10;
          if ((int)uVar10 < *(int *)(lVar3 + 0x20)) {
            uVar7 = uVar10;
            if (*(int *)(lVar3 + 0x98) != 0) {
              uVar7 = *(uint *)(*(longlong *)(lVar3 + 0x90) + lVar13 * 4);
            }
            if (uVar7 == 0xffffffff) {
              lVar4 = *(longlong *)(lVar3 + 0x18);
              lVar5 = lVar13 * 3;
            }
            else {
              lVar5 = (longlong)(int)uVar7 * 3;
              lVar4 = *(longlong *)(lVar3 + 0xb0);
            }
          }
          else {
            lVar5 = (longlong)(int)(uVar10 - *(int *)(lVar3 + 0x20)) * 3;
            lVar4 = *(longlong *)(lVar3 + 0xd0);
          }
          sVar14 = *(short *)(lVar4 + 10 + lVar5 * 4) + *(short *)(lVar4 + lVar5 * 4 + 8);
          psVar9 = local_138;
          local_13c = 0x80000004;
          local_138[0] = *(short *)(local_f8 + 8 + lVar8 * 2) - sVar14;
          local_140 = 1;
          local_148 = psVar9;
          if (local_e0 != lVar6) {
            psVar15 = (short *)(local_e0 + 8 + lVar8 * 2);
            local_d8 = (-4 - lVar8) * 2;
            do {
              uVar10 = (uint)lVar13;
              if (*(uint *)(psVar15 + lVar8 + -4) == uVar10) {
                sVar2 = *psVar15;
                iVar11 = local_140 + 1;
                if ((int)(local_13c & 0x7fffffff) < iVar11) {
                  FUN_144c44830(&local_148,&PTR_vftable_14c6e47a0,(longlong)iVar11);
                  psVar9 = local_148;
                }
                lVar6 = (longlong)local_140;
                param_3 = local_res18;
                lVar8 = local_100;
                local_140 = iVar11;
                if (psVar9 + lVar6 != (short *)0x0) {
                  psVar9[lVar6] = sVar2 - sVar14;
                  psVar9 = local_148;
                  lVar8 = local_100;
                }
              }
              else {
                local_130 = 0;
                local_128 = 0;
                psStack_60 = psVar9 + local_140;
                local_120 = 0;
                local_68._0_4_ = SUB84(psVar9,0);
                local_68._4_4_ = (undefined4)((ulonglong)psVar9 >> 0x20);
                local_118 = 0;
                local_110 = 0;
                local_b8 = (undefined4)local_68;
                uStack_b4 = local_68._4_4_;
                local_124 = -0x80000000;
                local_114 = 0x80000000;
                local_res10[0] = uVar10;
                local_68 = psVar9;
                uStack_b0 = psStack_60;
                FUN_144c43080(lVar3,local_res10,&local_b8);
                local_a8[0] = iVar12 << 0x16 | uVar10;
                FUN_144ca14e0(&local_a0,&local_130);
                iVar11 = (int)param_3[1] + 1;
                if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar11) {
                  FUN_144ca7930(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar11);
                }
                lVar6 = (longlong)(int)param_3[1] * 0x38 + *param_3;
                if (lVar6 != 0) {
                  FUN_144ca6a20(lVar6,local_a8);
                }
                *(int *)(param_3 + 1) = iVar11;
                FUN_144bf90d0(local_90);
                if ((-1 < local_94) && (local_a0 != 0)) {
                  (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                            (&PTR_vftable_14c6e47c0,local_a0,local_94 * 2);
                }
                iVar11 = *(int *)(psVar15 + lVar8 + -4);
                lVar13 = (longlong)iVar11;
                if (iVar11 < *(int *)(lVar3 + 0x20)) {
                  if (*(int *)(lVar3 + 0x98) != 0) {
                    iVar11 = *(int *)(*(longlong *)(lVar3 + 0x90) + lVar13 * 4);
                  }
                  if (iVar11 == -1) {
                    lVar6 = *(longlong *)(lVar3 + 0x18);
                    lVar4 = lVar13 * 3;
                  }
                  else {
                    lVar4 = (longlong)iVar11 * 3;
                    lVar6 = *(longlong *)(lVar3 + 0xb0);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar11 - *(int *)(lVar3 + 0x20)) * 3;
                  lVar6 = *(longlong *)(lVar3 + 0xd0);
                }
                sVar14 = *(short *)(lVar6 + 10 + lVar4 * 4) + *(short *)(lVar6 + lVar4 * 4 + 8);
                if ((local_13c & 0x7fffffff) == 0) {
                  FUN_144ca7300(&local_148,&PTR_vftable_14c6e47a0,1);
                }
                if (local_140 != 1) {
                  local_140 = 1;
                }
                *local_148 = *psVar15 - sVar14;
                FUN_144bf90d0(&local_120);
                local_128 = 0;
                psVar9 = local_148;
                if ((-1 < local_124) && (local_130 != 0)) {
                  (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                            (&PTR_vftable_14c6e47c0,local_130,local_124 * 2);
                  psVar9 = local_148;
                }
              }
              uVar10 = (uint)lVar13;
              psVar15 = psVar15 + 6;
              lVar6 = local_res20;
            } while (local_d8 + (longlong)psVar15 != local_res20);
          }
          local_130 = 0;
          local_128 = 0;
          psStack_50 = psVar9 + local_140;
          local_120 = 0;
          local_58._0_4_ = SUB84(psVar9,0);
          local_58._4_4_ = (undefined4)((ulonglong)psVar9 >> 0x20);
          local_118 = 0;
          local_110 = 0;
          local_b8 = (undefined4)local_58;
          uStack_b4 = local_58._4_4_;
          local_124 = -0x80000000;
          local_114 = 0x80000000;
          local_res10[0] = uVar10;
          local_58 = psVar9;
          uStack_b0 = psStack_50;
          FUN_144c43080(lVar3,local_res10,&local_b8);
          local_a8[0] = iVar12 << 0x16 | uVar10;
          FUN_144ca14e0(&local_a0);
          iVar12 = (int)param_3[1] + 1;
          if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_144ca7930(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar12);
          }
          if ((longlong)(int)param_3[1] * 0x38 + *param_3 != 0) {
            FUN_144ca6a20();
          }
          *(int *)(param_3 + 1) = iVar12;
          FUN_144bf90d0(local_90);
          if ((-1 < local_94) && (local_a0 != 0)) {
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,local_a0,local_94 * 2);
          }
          local_118 = 0;
          if ((-1 < (int)local_114) && (local_120 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_120,(ulonglong)(local_114 & 0x7fffffff) << 2);
          }
          local_120 = 0;
          local_114 = 0x80000000;
          local_128 = 0;
          if ((-1 < local_124) && (local_130 != 0)) {
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,local_130,local_124 * 2);
          }
          local_140 = 0;
          if ((-1 < (int)local_13c) && (local_148 != (short *)0x0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_148,local_13c * 2);
          }
          local_100 = lVar8 + 1;
        } while (local_100 < 2);
      }
      local_e8 = local_e8 + 8;
    } while (local_e8 != local_c8);
  }
  return;
}



// FUNCTION 144ca49d0 FUN_144ca49d0 body=80 status=ok
// SIG undefined FUN_144ca49d0(void)

ulonglong FUN_144ca49d0(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar1 = *(longlong *)((longlong)(int)uVar3 * 0x120 + *(longlong *)(param_1 + 0x38));
      if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x20) + 0x180) == *param_2)) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(param_1 + 0x40));
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 144ca4a20 FUN_144ca4a20 body=68 status=ok
// SIG undefined FUN_144ca4a20(void)

int * FUN_144ca4a20(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar3 = uVar2;
    do {
      if ((*(int *)((longlong)plVar1 + 0x24) == *param_3) && (*plVar1 != 0)) {
        *param_2 = (int)uVar3;
        return param_2;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x24;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 144ca4a70 FUN_144ca4a70 body=182 status=ok
// SIG undefined FUN_144ca4a70(void)

int * FUN_144ca4a70(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    piVar4 = (int *)(lVar2 + 0x24);
    uVar5 = uVar6;
    uVar8 = uVar6;
    do {
      iVar7 = (int)uVar8;
      if (*piVar4 == *param_3) {
        iVar1 = *(int *)((longlong)iVar7 * 0x120 + 0x18 + lVar2);
        if (0 < iVar1) {
          uVar5 = uVar6;
          do {
            lVar3 = *(longlong *)(*(longlong *)((longlong)iVar7 * 0x120 + 0x10 + lVar2) + uVar6 * 8)
            ;
            if ((lVar3 != 0) && (*(int *)(*(longlong *)(lVar3 + 0x20) + 0x60) == *param_4)) {
              *param_2 = iVar7;
              param_2[1] = (int)uVar5;
              return param_2;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
            uVar6 = uVar6 + 1;
          } while ((longlong)uVar6 < (longlong)iVar1);
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x48;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x40));
  }
  param_2[0] = -1;
  param_2[1] = -1;
  return param_2;
}



// FUNCTION 144ca4b30 FUN_144ca4b30 body=78 status=ok
// SIG undefined FUN_144ca4b30(void)

int * FUN_144ca4b30(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar3 = uVar2;
    do {
      if ((*(int *)((longlong)plVar1 + 0x1c) == *param_3) && (*plVar1 != 0)) {
        *param_2 = (int)uVar3;
        return param_2;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x24;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 144ca4b80 FUN_144ca4b80 body=310 status=ok
// SIG undefined FUN_144ca4b80(void)

void FUN_144ca4b80(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  lVar1 = param_3[1];
  plVar7 = (longlong *)((longlong)*param_2 * 0x120 + *(longlong *)(param_1 + 0x38));
  plVar7[8] = *param_3;
  plVar7[9] = lVar1;
  lVar1 = param_3[3];
  plVar7[10] = param_3[2];
  plVar7[0xb] = lVar1;
  lVar1 = param_3[5];
  plVar7[0xc] = param_3[4];
  plVar7[0xd] = lVar1;
  lVar1 = param_3[7];
  plVar7[0xe] = param_3[6];
  plVar7[0xf] = lVar1;
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    lVar4 = param_3[1];
    *(longlong *)(lVar1 + 0x60) = *param_3;
    *(longlong *)(lVar1 + 0x68) = lVar4;
    lVar4 = param_3[3];
    *(longlong *)(lVar1 + 0x70) = param_3[2];
    *(longlong *)(lVar1 + 0x78) = lVar4;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar4 = param_3[5];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(int *)(lVar1 + 0x80) = (int)param_3[4];
    *(undefined4 *)(lVar1 + 0x84) = uVar2;
    *(int *)(lVar1 + 0x88) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x8c) = uVar3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
    lVar4 = param_3[7];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(int *)(lVar1 + 0x90) = (int)param_3[6];
    *(undefined4 *)(lVar1 + 0x94) = uVar2;
    *(int *)(lVar1 + 0x98) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x9c) = uVar3;
    FUN_144ca8090(*(longlong *)(lVar1 + 0x20) + 400,param_3,lVar1 + 0xc0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_144c3ed40(lVar1,local_28);
      lVar1 = plVar7[4];
      if (*(char *)(param_1 + 0x30) == '\x01') {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar5 = FUN_144ca6690(param_1 + 0x20);
      }
      FUN_144fcd920(uVar5,(int)lVar1,local_28);
    }
  }
  plVar6 = (longlong *)plVar7[2];
  plVar7 = plVar6 + (int)plVar7[3];
  for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      lVar4 = param_3[1];
      *(longlong *)(lVar1 + 0x40) = *param_3;
      *(longlong *)(lVar1 + 0x48) = lVar4;
      lVar4 = param_3[3];
      *(longlong *)(lVar1 + 0x50) = param_3[2];
      *(longlong *)(lVar1 + 0x58) = lVar4;
      lVar4 = param_3[5];
      *(longlong *)(lVar1 + 0x60) = param_3[4];
      *(longlong *)(lVar1 + 0x68) = lVar4;
      lVar4 = param_3[7];
      *(longlong *)(lVar1 + 0x70) = param_3[6];
      *(longlong *)(lVar1 + 0x78) = lVar4;
    }
  }
  return;
}



// FUNCTION 144ca4cc0 FUN_144ca4cc0 body=281 status=ok
// SIG undefined FUN_144ca4cc0(void)

void FUN_144ca4cc0(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  plVar7 = (longlong *)((longlong)*param_2 * 0x120 + *(longlong *)(param_1 + 0x38));
  cVar5 = FUN_144fd2a90(plVar7 + 8,param_3);
  if (cVar5 != '\0') {
    lVar1 = param_3[1];
    plVar7[8] = *param_3;
    plVar7[9] = lVar1;
    lVar1 = param_3[3];
    plVar7[10] = param_3[2];
    plVar7[0xb] = lVar1;
    lVar1 = param_3[5];
    plVar7[0xc] = param_3[4];
    plVar7[0xd] = lVar1;
    lVar1 = param_3[7];
    plVar7[0xe] = param_3[6];
    plVar7[0xf] = lVar1;
    lVar1 = param_3[9];
    plVar7[0x10] = param_3[8];
    plVar7[0x11] = lVar1;
    lVar1 = param_3[0xb];
    plVar7[0x12] = param_3[10];
    plVar7[0x13] = lVar1;
    lVar1 = *plVar7;
    if (lVar1 != 0) {
      lVar4 = param_3[1];
      *(longlong *)(lVar1 + 0x60) = *param_3;
      *(longlong *)(lVar1 + 0x68) = lVar4;
      lVar4 = param_3[3];
      *(longlong *)(lVar1 + 0x70) = param_3[2];
      *(longlong *)(lVar1 + 0x78) = lVar4;
      lVar4 = param_3[5];
      *(longlong *)(lVar1 + 0x80) = param_3[4];
      *(longlong *)(lVar1 + 0x88) = lVar4;
      lVar4 = param_3[7];
      *(longlong *)(lVar1 + 0x90) = param_3[6];
      *(longlong *)(lVar1 + 0x98) = lVar4;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x44);
      lVar4 = param_3[9];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x4c);
      *(int *)(lVar1 + 0xa0) = (int)param_3[8];
      *(undefined4 *)(lVar1 + 0xa4) = uVar2;
      *(int *)(lVar1 + 0xa8) = (int)lVar4;
      *(undefined4 *)(lVar1 + 0xac) = uVar3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x54);
      lVar4 = param_3[0xb];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x5c);
      *(int *)(lVar1 + 0xb0) = (int)param_3[10];
      *(undefined4 *)(lVar1 + 0xb4) = uVar2;
      *(int *)(lVar1 + 0xb8) = (int)lVar4;
      *(undefined4 *)(lVar1 + 0xbc) = uVar3;
      FUN_144ca8090(*(longlong *)(lVar1 + 0x20) + 400,(longlong *)(lVar1 + 0x60),lVar1 + 0xc0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_144c3ed40(lVar1,local_28);
        lVar1 = plVar7[4];
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar6 = FUN_144ca6690(param_1 + 0x20);
        }
        FUN_144fcd920(uVar6,(int)lVar1,local_28);
      }
    }
  }
  return;
}



// FUNCTION 144ca4de0 FUN_144ca4de0 body=33 status=ok
// SIG undefined FUN_144ca4de0(void)

void FUN_144ca4de0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x94);
  FUN_144ca4e10(param_1,local_res10);
  return;
}



// FUNCTION 144ca4e10 FUN_144ca4e10 body=378 status=ok
// SIG undefined FUN_144ca4e10(void)

void FUN_144ca4e10(longlong param_1,int *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar10 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  undefined1 auVar20 [16];
  uint uVar23;
  uint uVar25;
  uint uVar26;
  undefined1 auVar24 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar4 = (longlong)*param_2 * 0x120 + *(longlong *)(param_1 + 0x38);
  *(undefined1 *)(lVar4 + 0xa0) = *param_3;
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar4 + 0xb8) = uVar6;
  lVar3 = *(longlong *)(lVar4 + 8);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar3 + 0x58) = uVar6;
    if (*plVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x38);
      auVar20 = *(undefined1 (*) [16])(lVar2 + 0x80);
      uVar7 = auVar20._0_4_;
      auVar24 = *(undefined1 (*) [16])(lVar2 + 0x90);
      if (*(byte *)(lVar3 + 0x40) != 0) {
        uVar8 = (uint)*(byte *)(lVar3 + 0x40);
        uVar14 = -(uint)(0x16a8300 << uVar8 < 0);
        uVar15 = -(uint)(0x502ab000 << uVar8 < 0);
        uVar16 = -(uint)(0xa2a8c00 << uVar8 < 0);
        uVar17 = -(uint)(0xa154c00 << uVar8 < 0);
        uVar18 = -(uint)(0x1554300 << uVar8 < 0);
        uVar19 = -(uint)(0x50157000 << uVar8 < 0);
        uVar21 = auVar20._4_4_;
        uVar22 = auVar20._8_4_;
        uVar5 = (ulonglong)uVar8;
        uVar23 = auVar24._0_4_;
        uVar25 = auVar24._4_4_;
        uVar26 = auVar24._8_4_;
        uVar9 = (0xae71e0U >> uVar5) << 0x1f;
        uVar11 = (0xb9e306U >> uVar5) << 0x1f;
        uVar12 = (0xeb903cU >> uVar5) << 0x1f;
        uVar13 = (0U >> uVar5) << 0x1f;
        uVar6 = CONCAT44(uVar11 ^ (~uVar18 & (uVar22 & uVar15 | ~uVar15 & uVar21) | uVar7 & uVar18),
                         uVar9 ^ (~uVar17 & (uVar21 & uVar14 | ~uVar14 & uVar7) | uVar22 & uVar17));
        uVar7 = uVar12 ^ (~uVar19 & (uVar7 & uVar16 | ~uVar16 & uVar22) | uVar21 & uVar19);
        uVar8 = uVar13 ^ auVar20._12_4_;
        auVar20._8_4_ = uVar7;
        auVar20._0_8_ = uVar6;
        auVar20._12_4_ = uVar8;
        auVar10._0_4_ = uVar9 ^ (~uVar17 & (uVar25 & uVar14 | ~uVar14 & uVar23) | uVar26 & uVar17);
        auVar10._4_4_ = uVar11 ^ (~uVar18 & (uVar26 & uVar15 | ~uVar15 & uVar25) | uVar23 & uVar18);
        auVar10._8_4_ = uVar12 ^ (~uVar19 & (uVar23 & uVar16 | ~uVar16 & uVar26) | uVar25 & uVar19);
        auVar10._12_4_ = uVar13 ^ auVar24._12_4_;
        auVar24._8_4_ = uVar7;
        auVar24._0_8_ = uVar6;
        auVar24._12_4_ = uVar8;
        auVar20 = minps(auVar20,auVar10);
        auVar24 = maxps(auVar24,auVar10);
      }
      local_58 = *(float *)(lVar3 + 0x50) + auVar20._0_4_;
      fStack_54 = *(float *)(lVar3 + 0x54) + auVar20._4_4_;
      fStack_50 = *(float *)(lVar3 + 0x58) + auVar20._8_4_;
      fStack_4c = *(float *)(lVar3 + 0x5c) + auVar20._12_4_;
      local_48 = *(float *)(lVar3 + 0x50) + auVar24._0_4_;
      fStack_44 = *(float *)(lVar3 + 0x54) + auVar24._4_4_;
      fStack_40 = *(float *)(lVar3 + 0x58) + auVar24._8_4_;
      fStack_3c = *(float *)(lVar3 + 0x5c) + auVar24._12_4_;
      if (*(char *)(param_1 + 0x30) == '\x01') {
        lVar3 = *plVar1;
      }
      else {
        lVar3 = FUN_144ca6690(plVar1);
      }
      FUN_144fcd920(lVar3,*(undefined4 *)(lVar4 + 0x20),&local_58);
    }
  }
  return;
}



// FUNCTION 144ca4f90 FUN_144ca4f90 body=23 status=ok
// SIG undefined FUN_144ca4f90(void)

longlong FUN_144ca4f90(longlong param_1,int *param_2)

{
  return *(longlong *)(param_1 + 0x38) + 0x40 + (longlong)*param_2 * 0x120;
}



// FUNCTION 144ca4fb0 FUN_144ca4fb0 body=210 status=ok
// SIG undefined FUN_144ca4fb0(void)

void FUN_144ca4fb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar11 = 0;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar9 + lVar4) == 0) {
        iVar3 = *(int *)(lVar9 + 0x18 + lVar4);
        iVar8 = 0;
        lVar7 = 0;
        if (0 < iVar3) {
          plVar6 = *(longlong **)(lVar9 + 0x10 + lVar4);
          do {
            if (*plVar6 != 0) {
              if (-1 < iVar8) goto LAB_144ca500e;
              break;
            }
            iVar8 = iVar8 + 1;
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
          } while (lVar7 < iVar3);
        }
      }
      else {
LAB_144ca500e:
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar4);
        uVar5 = puVar1[1];
        lVar7 = *param_2;
        *(undefined8 *)(lVar11 + lVar7) = *puVar1;
        ((undefined8 *)(lVar11 + lVar7))[1] = uVar5;
        puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar4);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar9 + 0x60 + lVar4);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar9 + 0x70 + lVar4);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2 = (undefined8 *)(lVar9 + 0x80 + lVar4);
        uVar5 = puVar2[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar7);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        puVar2 = (undefined8 *)(lVar9 + 0x90 + lVar4);
        uVar5 = puVar2[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar7);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x120;
      lVar11 = lVar11 + 0x60;
    } while (iVar10 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 144ca5090 FUN_144ca5090 body=215 status=ok
// SIG undefined FUN_144ca5090(void)

void FUN_144ca5090(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int local_38;
  int local_34;
  int local_30;
  
  local_34 = param_2[1];
  iVar1 = *param_2;
  local_30 = param_2[2];
  local_38 = iVar1;
  uVar7 = FUN_144fe7780(*(undefined8 *)(param_1 + 0x58),&local_38);
  iVar2 = *(int *)(param_1 + 0x40);
  uVar6 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = *(longlong *)(uVar6 * 0x120 + *(longlong *)(param_1 + 0x38));
      if ((lVar3 != 0) && (*(int *)(*(longlong *)(lVar3 + 0x20) + 0x180) == iVar1)) {
        local_38 = *param_2;
        local_34 = param_2[1];
        local_30 = param_2[2];
        uVar4 = FUN_144c3ed80(lVar3,&local_38);
        FUN_144fd2bc0(uVar4,lVar3,uVar7);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  return;
}



// FUNCTION 144ca5170 FUN_144ca5170 body=29 status=ok
// SIG undefined FUN_144ca5170(void)

void FUN_144ca5170(longlong param_1,undefined4 *param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_2;
  FUN_144fe7680(*(undefined8 *)(param_1 + 0x58),local_res8);
  return;
}



// FUNCTION 144ca5190 FUN_144ca5190 body=10 status=ok
// SIG undefined FUN_144ca5190(void)

undefined4 FUN_144ca5190(longlong param_1,int *param_2)

{
  return *(undefined4 *)(param_1 + 0x60 + (longlong)*param_2 * 4);
}



// FUNCTION 144ca51a0 FUN_144ca51a0 body=525 status=ok
// SIG undefined FUN_144ca51a0(void)

/* WARNING: Removing unreachable block (ram,0x000144ca5321) */
/* WARNING: Removing unreachable block (ram,0x000144ca529e) */
/* WARNING: Removing unreachable block (ram,0x000144ca5341) */

void FUN_144ca51a0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  
  lVar6 = (longlong)*(int *)(param_2 + 0x40);
  uVar5 = 0;
  uVar8 = uVar5;
  uVar10 = uVar5;
  if (0 < lVar6) {
    do {
      lVar7 = *(longlong *)(param_2 + 0x38) + uVar8;
      iVar9 = (int)uVar10;
      if (*(int *)(lVar7 + 0x24) != -1) {
        FUN_1450047c0((longlong)iVar9 * 0x120 + *(longlong *)(param_1 + 0x38),lVar7,param_1 + 0x20);
        local_res8[0] = iVar9;
        FUN_144ca58e0(param_1,local_res8,*(undefined4 *)(lVar7 + 0x30));
      }
      lVar6 = lVar6 + -1;
      uVar8 = uVar8 + 0x120;
      uVar10 = (ulonglong)(iVar9 + 1);
    } while (lVar6 != 0);
  }
  iVar9 = *(int *)(param_2 + 0x50);
  lVar6 = (longlong)iVar9;
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar9) {
    FUN_144ca77a0(param_1 + 0x48,&PTR_vftable_14c6e47a0,lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < iVar9) {
    *(int *)(param_1 + 0x50) = iVar9;
    if (0 < iVar9 - iVar1) {
      uVar8 = (ulonglong)(uint)(iVar9 - iVar1);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 0x18);
      do {
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          *(undefined1 *)(puVar11 + 2) = 1;
        }
        uVar8 = uVar8 - 1;
        puVar11 = puVar11 + 3;
      } while (uVar8 != 0);
    }
  }
  else if (iVar9 < iVar1) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    *(int *)(param_1 + 0x50) = iVar9;
    plVar4 = (longlong *)(lVar7 + (longlong)iVar1 * 0x18);
    while (plVar4 != (longlong *)(lVar7 + lVar6 * 0x18)) {
      lVar3 = plVar4[-2];
      plVar4 = plVar4 + -3;
      if (lVar3 != 0) {
        FUN_144be5d10(lVar3);
        (*DAT_14c787678)(0,lVar3,0);
      }
      if (*plVar4 != 0) {
        FUN_144b3f230();
      }
    }
  }
  if (0 < iVar9) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(uVar5 + *(longlong *)(param_2 + 0x48));
      *(undefined8 *)(uVar5 + *(longlong *)(param_2 + 0x48)) = 0;
      lVar3 = *(longlong *)(lVar7 + uVar5);
      *(undefined8 *)(lVar7 + uVar5) = uVar2;
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
      *(undefined1 *)(lVar7 + 0x10 + uVar5) = 1;
      uVar5 = uVar5 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_144b3d470(param_1 + 0x60,param_2 + 0x60,0x80);
  return;
}



// FUNCTION 144ca53b0 FUN_144ca53b0 body=1316 status=ok
// SIG undefined FUN_144ca53b0(void)

undefined8 * FUN_144ca53b0(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 local_res8;
  longlong local_res10;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar10 = 0;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiStreamingCollection::vftable;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_res10 = param_2;
  if (param_1[4] != *(longlong *)(param_2 + 0x20)) {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_144b3d910();
    }
    lVar18 = param_1[4];
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    if (lVar18 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined1 *)(param_2 + 0x30) = 0;
  if ((int)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) < *(int *)(param_2 + 0x50)) {
    FUN_144ca7050(param_1 + 9,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_2 + 0x50));
  }
  plVar12 = *(longlong **)(param_2 + 0x48);
  plVar16 = plVar12 + (longlong)*(int *)(param_2 + 0x50) * 3;
  for (; plVar12 != plVar16; plVar12 = plVar12 + 3) {
    iVar4 = *(int *)(param_1 + 10);
    lVar18 = param_1[9];
    iVar11 = iVar4 + 1;
    *(int *)(param_1 + 10) = iVar11;
    plVar3 = (longlong *)(lVar18 + (longlong)iVar4 * 0x18);
    for (plVar7 = plVar3; plVar7 != (longlong *)(lVar18 + (longlong)iVar11 * 0x18);
        plVar7 = plVar7 + 3) {
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined1 *)(plVar7 + 2) = 0;
        *(undefined1 *)(plVar7 + 2) = 1;
      }
    }
    *(undefined1 *)(plVar3 + 2) = 0;
    if (*plVar3 != *plVar12) {
      if (*plVar12 != 0) {
        FUN_144b3d910();
      }
      lVar18 = *plVar3;
      *plVar3 = *plVar12;
      if (lVar18 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined1 *)(plVar12 + 2) = 0;
  }
  plVar16 = param_1 + 7;
  if ((longlong *)(param_2 + 0x38) != plVar16) {
    lVar18 = *(longlong *)(param_2 + 0x38);
    uVar5 = *(uint *)(param_2 + 0x40);
    if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < (int)uVar5) {
      FUN_144c9bd00(plVar16,&PTR_vftable_14c6e47a0,(longlong)(int)uVar5);
    }
    if ((int)uVar5 < *(int *)(param_1 + 8)) {
      puVar14 = (uint *)((longlong)(int)uVar5 * 0x120 + *plVar16);
      puVar17 = (uint *)((longlong)*(int *)(param_1 + 8) * 0x120 + *plVar16);
      if (puVar17 != puVar14) {
        puVar17 = puVar17 + 7;
        do {
          puVar2 = puVar17 + -0x48;
          FUN_144bf90d0(puVar17 + -0xd);
          FUN_144c93800(puVar17 + -0x17);
          FUN_144c93440(puVar17 + -0x1f);
          lVar19 = *(longlong *)(puVar17 + -0x4b);
          lVar13 = lVar19 + (longlong)(int)puVar17[-0x49] * 8;
          while (lVar13 != lVar19) {
            plVar16 = (longlong *)(lVar13 + -8);
            lVar13 = lVar13 + -8;
            if (*plVar16 != 0) {
              FUN_144b3f230();
            }
          }
          puVar17[-0x49] = 0;
          if ((-1 < (int)*puVar2) && (*(longlong *)(puVar17 + -0x4b) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar17 + -0x4b),
                       (ulonglong)(*puVar2 & 0x7fffffff) << 3);
          }
          puVar17[-0x4b] = 0;
          puVar17[-0x4a] = 0;
          *puVar2 = 0x80000000;
          if (*(longlong *)(puVar17 + -0x4d) != 0) {
            FUN_144b3f230();
          }
          puVar1 = puVar17 + -0x4f;
          if (*(longlong *)(puVar17 + -0x4f) != 0) {
            FUN_144b3f230();
          }
          puVar17 = puVar2;
        } while (puVar1 != puVar14);
      }
    }
    lVar13 = param_1[7];
    uVar6 = uVar5;
    if (*(int *)(param_1 + 8) < (int)uVar5) {
      uVar6 = *(uint *)(param_1 + 8);
    }
    uVar15 = (ulonglong)uVar6;
    if ((lVar13 != lVar18) && (0 < (int)uVar6)) {
      lVar19 = lVar18 - lVar13;
      do {
        FUN_144c92e80(lVar13,lVar19 + lVar13);
        lVar13 = lVar13 + 0x120;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    lVar18 = (longlong)(int)uVar6 * 0x120 + lVar18;
    if (0 < (int)(uVar5 - uVar6)) {
      uVar15 = (ulonglong)(uVar5 - uVar6);
      lVar13 = param_1[7] + (longlong)(int)uVar6 * 0x120;
      do {
        if (lVar13 != 0) {
          FUN_145004380(lVar13,lVar18);
          lVar18 = lVar18 + 0x120;
        }
        uVar15 = uVar15 - 1;
        lVar13 = lVar13 + 0x120;
      } while (uVar15 != 0);
    }
    *(uint *)(param_1 + 8) = uVar5;
    param_2 = local_res10;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  local_res8 = 0x330;
  lVar18 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar18,"hkaiNavMeshClearanceCacheManager");
  }
  uVar8 = uVar10;
  if (lVar18 != 0) {
    uVar8 = FUN_144ca6950(lVar18,uVar9);
  }
  lVar18 = param_1[0xb];
  param_1[0xb] = uVar8;
  if (lVar18 != 0) {
    FUN_144b3f230();
  }
  FUN_144b3d470(param_1 + 0xc,param_2 + 0x60,0x80);
  uVar9 = *(undefined8 *)(param_2 + 0xf0);
  local_res8 = 0x1018;
  lVar18 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar18,"hkaiClusteringSetupRegistrationManager");
  }
  uVar8 = uVar10;
  if (lVar18 != 0) {
    uVar8 = FUN_144ca1660(lVar18,uVar9);
  }
  lVar18 = param_1[0x1e];
  param_1[0x1e] = uVar8;
  if (lVar18 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x28;
  lVar18 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar18,"hkaiNavMeshCollectionQueryMediator");
  }
  uVar9 = uVar10;
  if (lVar18 != 0) {
    uVar9 = FUN_144c3b9b0(lVar18,param_1);
  }
  lVar18 = param_1[0x1c];
  param_1[0x1c] = uVar9;
  if (lVar18 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x20;
  lVar18 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar18,"hkaiNavVolumeCollectionQueryMediator");
  }
  if (lVar18 != 0) {
    uVar10 = FUN_144ffb6e0(lVar18,param_1);
  }
  lVar18 = param_1[0x1d];
  param_1[0x1d] = uVar10;
  if (lVar18 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144ca58e0 FUN_144ca58e0 body=238 status=ok
// SIG undefined FUN_144ca58e0(void)

void FUN_144ca58e0(longlong param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    piVar1 = (int *)((longlong)*param_2 * 0x120 + 0x2c + *(longlong *)(param_1 + 0x38));
    *piVar1 = *piVar1 + param_3;
    if (*(int *)((longlong)*param_2 * 0x120 + 0x2c + *(longlong *)(param_1 + 0x38)) == 0) {
      *(undefined4 *)((longlong)*param_2 * 0x120 + 0x24 + *(longlong *)(param_1 + 0x38)) =
           0xffffffff;
      *(undefined4 *)((longlong)*param_2 * 0x120 + 0x28 + *(longlong *)(param_1 + 0x38)) =
           0xffffffff;
    }
  }
  else {
    if (cVar2 == '\x01') {
      FUN_144bde670(local_218,local_208,0x200);
      FUN_144be6160(local_218,"Cannot unload instances in a temporary streaming collection.");
      iVar4 = FUN_144bfc110(0x66cece4c,local_208,"NavMesh\\Streaming\\hkaiStreamingCollection.cpp",
                            0x141);
      if (iVar4 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_144bde6e0(local_218);
      return;
    }
    if (cVar2 == '\x02') {
      piVar1 = (int *)((longlong)*param_2 * 0x120 + 0x30 + *(longlong *)(param_1 + 0x38));
      *piVar1 = *piVar1 + param_3;
      return;
    }
  }
  return;
}



// FUNCTION 144ca59d0 FUN_144ca59d0 body=318 status=ok
// SIG undefined FUN_144ca59d0(void)

void FUN_144ca59d0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_res10 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  int local_10;
  uint local_c;
  
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c);
  if (iVar2 != -1) {
    lVar3 = *(longlong *)((longlong)iVar2 * 0x120 + *(longlong *)(param_1 + 0x38));
    local_res10[0] = *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x180);
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
    local_c = 0x80000000;
    FUN_144fe77c0(*(undefined8 *)(param_1 + 0x58),local_res10,&local_18);
    puVar7 = local_18 + (longlong)local_10 * 8;
    if (local_18 != puVar7) {
      puVar6 = local_18 + 2;
      do {
        local_28 = puVar6[-2];
        local_24 = puVar6[-1];
        local_20 = *puVar6;
        uVar5 = FUN_144c3ed80(lVar3,&local_28);
        FUN_144fd2bc0(uVar5,lVar3,puVar6[4]);
        puVar1 = puVar6 + 6;
        puVar6 = puVar6 + 8;
      } while (puVar1 != puVar7);
    }
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x68) + 0xe0);
    if (lVar4 != 0) {
      FUN_144c6d020(lVar4,*(undefined8 *)(param_1 + 0x58),lVar3);
    }
    local_10 = 0;
    if ((-1 < (int)local_c) && (local_18 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_18,(ulonglong)(local_c & 0x7fffffff) << 5);
    }
  }
  return;
}



// FUNCTION 144ca5b10 FUN_144ca5b10 body=885 status=ok
// SIG undefined FUN_144ca5b10(void)

void FUN_144ca5b10(longlong param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_58;
  int local_50 [2];
  int local_48 [4];
  
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    puVar6 = (undefined8 *)0x0;
    if (0 < (int)uVar2) {
      plVar12 = *(longlong **)(param_1 + 0x38);
      puVar7 = puVar6;
      puVar8 = puVar6;
      do {
        local_res18[0] = (int)puVar8;
        if ((*(int *)((longlong)plVar12 + 0x24) == *(int *)(param_3 + 0x18)) && (*plVar12 != 0)) {
          iVar5 = *(int *)(param_3 + 0x1c);
          goto LAB_144ca5b95;
        }
        puVar8 = (undefined8 *)(ulonglong)(local_res18[0] + 1);
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        plVar12 = plVar12 + 0x24;
      } while ((longlong)puVar7 < (longlong)(int)uVar2);
    }
    iVar5 = *(int *)(param_3 + 0x1c);
    local_res18[0] = -1;
    if (0 < (int)uVar2) {
LAB_144ca5b95:
      plVar12 = *(longlong **)(param_1 + 0x38);
      puVar7 = puVar6;
      puVar8 = puVar6;
      do {
        iVar10 = (int)puVar8;
        if ((*(int *)((longlong)plVar12 + 0x24) == iVar5) && (*plVar12 != 0)) goto LAB_144ca5bc0;
        puVar8 = (undefined8 *)(ulonglong)(iVar10 + 1);
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        plVar12 = plVar12 + 0x24;
      } while ((longlong)puVar7 < (longlong)(ulonglong)uVar2);
    }
    iVar10 = -1;
LAB_144ca5bc0:
    iVar5 = local_res18[0];
    if (((local_res18[0] != -1) && (iVar10 != -1)) &&
       ((local_res18[0] == *param_2 || (iVar10 == *param_2)))) {
      local_58 = 0x38;
      local_res20[0] = iVar10;
      puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar7,"hkaiStreamingSetInstance");
      }
      puVar8 = puVar6;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[2] = 1;
        puVar7[1] = 0xffffffff;
        *puVar7 = hkaiStreamingSetInstance::vftable;
        puVar7[4] = 0;
        puVar7[5] = 0;
        *(undefined4 *)(puVar7 + 6) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x34) = 0x80000000;
        puVar8 = puVar7;
      }
      *(int *)(puVar8 + 3) = iVar5;
      *(int *)((longlong)puVar8 + 0x1c) = iVar10;
      FUN_144b3d910(param_3);
      lVar4 = puVar8[4];
      puVar8[4] = param_3;
      if (lVar4 != 0) {
        FUN_144b3f230();
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        plVar12 = *(longlong **)(param_1 + 0x48);
        puVar7 = puVar6;
        do {
          iVar11 = (int)puVar7;
          if (*plVar12 == 0) {
            if (-1 < iVar11) goto LAB_144ca5d26;
            break;
          }
          puVar7 = (undefined8 *)(ulonglong)(iVar11 + 1);
          puVar6 = (undefined8 *)((longlong)puVar6 + 1);
          plVar12 = plVar12 + 3;
        } while ((longlong)puVar6 < (longlong)*(int *)(param_1 + 0x50));
      }
      iVar9 = *(int *)(param_1 + 0x50) + 1;
      iVar11 = *(int *)(param_1 + 0x50);
      if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar9) {
        FUN_144ca77a0((longlong *)(param_1 + 0x48),&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      iVar3 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar9;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined1 *)(puVar6 + 2) = 0;
        *(undefined1 *)(puVar6 + 2) = 1;
      }
LAB_144ca5d26:
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 0x18);
      *(undefined1 *)(plVar12 + 2) = 1;
      if ((undefined8 *)*plVar12 != puVar8) {
        FUN_144b3d910(puVar8);
        lVar4 = *plVar12;
        *plVar12 = (longlong)puVar8;
        if (lVar4 != 0) {
          FUN_144b3f230();
        }
      }
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0 + (longlong)iVar5 * 0x120);
      FUN_144ca6b50(plVar12,local_50,local_res20);
      if (local_50[0] == (int)plVar12[1]) {
        iVar9 = (int)plVar12[1] + 1;
        if ((int)(*(uint *)((longlong)plVar12 + 0xc) & 0x7fffffff) < iVar9) {
          FUN_144ca7c90(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar9);
        }
        piVar1 = (int *)(*plVar12 + (longlong)(int)plVar12[1] * 8);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar10;
          piVar1[1] = iVar11;
        }
        *(int *)(plVar12 + 1) = iVar9;
      }
      else {
        *(int *)(*plVar12 + 4 + (longlong)local_50[0] * 8) = iVar11;
      }
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0 + (longlong)iVar10 * 0x120);
      FUN_144ca6b50(plVar12,local_48,local_res18);
      if (local_48[0] == (int)plVar12[1]) {
        iVar10 = (int)plVar12[1] + 1;
        if ((int)(*(uint *)((longlong)plVar12 + 0xc) & 0x7fffffff) < iVar10) {
          FUN_144ca7c90(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        piVar1 = (int *)(*plVar12 + (longlong)(int)plVar12[1] * 8);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar5;
          piVar1[1] = iVar11;
        }
        *(int *)(plVar12 + 1) = iVar10;
      }
      else {
        *(int *)(*plVar12 + 4 + (longlong)local_48[0] * 8) = iVar11;
      }
      FUN_144b3f230(puVar8);
    }
  }
  return;
}



// FUNCTION 144ca5e90 FUN_144ca5e90 body=896 status=ok
// SIG undefined FUN_144ca5e90(void)

void FUN_144ca5e90(longlong param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_58;
  int local_50 [2];
  int local_48 [4];
  
  if (*(int *)(param_3 + 0x58) != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    puVar7 = (undefined8 *)0x0;
    if (0 < (int)uVar2) {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
      puVar8 = puVar7;
      puVar9 = puVar7;
      do {
        local_res18[0] = (int)puVar9;
        if ((*(int *)((longlong)plVar6 + 0x1c) == *(int *)(param_3 + 0x18)) && (*plVar6 != 0)) {
          iVar5 = *(int *)(param_3 + 0x1c);
          goto LAB_144ca5f1d;
        }
        puVar9 = (undefined8 *)(ulonglong)(local_res18[0] + 1);
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
        plVar6 = plVar6 + 0x24;
      } while ((longlong)puVar8 < (longlong)(int)uVar2);
    }
    iVar5 = *(int *)(param_3 + 0x1c);
    local_res18[0] = -1;
    if (0 < (int)uVar2) {
LAB_144ca5f1d:
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
      puVar8 = puVar7;
      puVar9 = puVar7;
      do {
        iVar11 = (int)puVar9;
        if ((*(int *)((longlong)plVar6 + 0x1c) == iVar5) && (*plVar6 != 0)) goto LAB_144ca5f48;
        puVar9 = (undefined8 *)(ulonglong)(iVar11 + 1);
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
        plVar6 = plVar6 + 0x24;
      } while ((longlong)puVar8 < (longlong)(ulonglong)uVar2);
    }
    iVar11 = -1;
LAB_144ca5f48:
    iVar5 = local_res18[0];
    if (((local_res18[0] != -1) && (iVar11 != -1)) &&
       ((local_res18[0] == *param_2 || (iVar11 == *param_2)))) {
      local_58 = 0x38;
      local_res20[0] = iVar11;
      puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar8,"hkaiStreamingSetInstance");
      }
      puVar9 = puVar7;
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[2] = 1;
        puVar8[1] = 0xffffffff;
        *puVar8 = hkaiStreamingSetInstance::vftable;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined4 *)(puVar8 + 6) = 0;
        *(undefined4 *)((longlong)puVar8 + 0x34) = 0x80000000;
        puVar9 = puVar8;
      }
      *(int *)(puVar9 + 3) = iVar5;
      *(int *)((longlong)puVar9 + 0x1c) = iVar11;
      FUN_144b3d910(param_3);
      lVar4 = puVar9[4];
      puVar9[4] = param_3;
      if (lVar4 != 0) {
        FUN_144b3f230();
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        plVar6 = *(longlong **)(param_1 + 0x48);
        puVar8 = puVar7;
        do {
          iVar12 = (int)puVar8;
          if (*plVar6 == 0) {
            if (-1 < iVar12) goto LAB_144ca60b1;
            break;
          }
          puVar8 = (undefined8 *)(ulonglong)(iVar12 + 1);
          puVar7 = (undefined8 *)((longlong)puVar7 + 1);
          plVar6 = plVar6 + 3;
        } while ((longlong)puVar7 < (longlong)*(int *)(param_1 + 0x50));
      }
      iVar10 = *(int *)(param_1 + 0x50) + 1;
      iVar12 = *(int *)(param_1 + 0x50);
      if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar10) {
        FUN_144ca77a0((longlong *)(param_1 + 0x48),&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      iVar3 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar10;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined1 *)(puVar7 + 2) = 0;
        *(undefined1 *)(puVar7 + 2) = 1;
      }
LAB_144ca60b1:
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar12 * 0x18);
      *(undefined1 *)(plVar6 + 2) = 1;
      if ((undefined8 *)*plVar6 != puVar9) {
        FUN_144b3d910(puVar9);
        lVar4 = *plVar6;
        *plVar6 = (longlong)puVar9;
        if (lVar4 != 0) {
          FUN_144b3f230();
        }
      }
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0 + (longlong)iVar5 * 0x120);
      FUN_144ca6b50(plVar6,local_50,local_res20);
      if (local_50[0] == (int)plVar6[1]) {
        iVar10 = (int)plVar6[1] + 1;
        if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar10) {
          FUN_144ca7c90(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        piVar1 = (int *)(*plVar6 + (longlong)(int)plVar6[1] * 8);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar11;
          piVar1[1] = iVar12;
        }
        *(int *)(plVar6 + 1) = iVar10;
      }
      else {
        *(int *)(*plVar6 + 4 + (longlong)local_50[0] * 8) = iVar12;
      }
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0 + (longlong)iVar11 * 0x120);
      FUN_144ca6b50(plVar6,local_48,local_res18);
      if (local_48[0] == (int)plVar6[1]) {
        iVar11 = (int)plVar6[1] + 1;
        if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar11) {
          FUN_144ca7c90(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        piVar1 = (int *)(*plVar6 + (longlong)(int)plVar6[1] * 8);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar5;
          piVar1[1] = iVar12;
        }
        *(int *)(plVar6 + 1) = iVar11;
      }
      else {
        *(int *)(*plVar6 + 4 + (longlong)local_48[0] * 8) = iVar12;
      }
      FUN_144b3f230(puVar9);
    }
  }
  return;
}



// FUNCTION 144ca6210 FUN_144ca6210 body=340 status=ok
// SIG undefined FUN_144ca6210(void)

void FUN_144ca6210(longlong param_1,int *param_2,int *param_3,undefined4 *param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  int local_res20 [2];
  int local_28 [4];
  
  local_res18[0] = *param_4;
  local_res20[0] = *param_3;
  FUN_144fa9e80(*(undefined8 *)(param_1 + 0xf0),local_res8,local_res20,local_res18);
  lVar1 = param_5;
  lVar2 = FUN_144ca6ae0(param_5 + 0x30,local_res8);
  if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) {
    local_res18[0] = *(undefined4 *)(lVar1 + 0x18);
    FUN_144ca4a70(param_1,local_28,local_res18,&param_5);
    param_5 = CONCAT44(param_5._4_4_,local_res8[0]);
    local_res18[0] = *(undefined4 *)(lVar1 + 0x1c);
    FUN_144ca4a70(param_1,local_res20,local_res18,&param_5);
    if (((local_28[0] != -1) && (local_res20[0] != -1)) &&
       ((local_28[0] == *param_2 || (local_res20[0] == *param_2)))) {
      param_5 = lVar1;
      FUN_144b3d910(lVar1);
      FUN_144ca1980(*(longlong *)(param_1 + 0x38) + (longlong)local_28[0] * 0x120 + 0xe0,local_res20
                    ,&param_5);
      if (param_5 != 0) {
        FUN_144b3f230();
      }
      param_5 = lVar1;
      FUN_144b3d910(lVar1);
      FUN_144ca1980((longlong)local_res20[0] * 0x120 + *(longlong *)(param_1 + 0x38) + 0xe0,local_28
                    ,&param_5);
      if (param_5 != 0) {
        FUN_144b3f230();
      }
    }
  }
  return;
}



// FUNCTION 144ca6370 FUN_144ca6370 body=429 status=ok
// SIG undefined FUN_144ca6370(void)

void FUN_144ca6370(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar7 = (longlong)*param_2 * 0x120 + *(longlong *)(param_1 + 0x38);
  piVar6 = *(int **)(lVar7 + 0xc0);
  piVar1 = piVar6 + (longlong)*(int *)(lVar7 + 200) * 2;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 2) {
    lVar9 = (longlong)piVar6[1];
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0 + (longlong)*piVar6 * 0x120);
    lVar3 = FUN_144ca6d90(plVar8,param_2);
    if (lVar3 == 0) {
      iVar5 = -1;
      uVar4 = 0xffffffff;
    }
    else {
      iVar5 = *(int *)(lVar3 + 4);
      uVar4 = (uint)(lVar3 - plVar8[2] >> 3);
    }
    if ((*(uint *)(plVar8 + 3) < uVar4) ||
       (lVar3 = plVar8[2] + (longlong)(int)uVar4 * 8,
       *(int *)(plVar8[2] + 4 + (longlong)(int)uVar4 * 8) != iVar5)) {
      lVar3 = FUN_144ca6d90(plVar8,*plVar8 + (longlong)iVar5 * 8);
    }
    FUN_144ca1700(plVar8,lVar3);
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(undefined1 *)(lVar3 + 0x10 + lVar9 * 0x18) = 1;
    lVar2 = *(longlong *)(lVar3 + lVar9 * 0x18);
    *(undefined8 *)(lVar3 + lVar9 * 0x18) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230(lVar2);
    }
  }
  *(undefined4 *)(lVar7 + 200) = 0;
  if ((-1 < (int)*(uint *)(lVar7 + 0xcc)) && (*(longlong *)(lVar7 + 0xc0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar7 + 0xc0),
               (ulonglong)(*(uint *)(lVar7 + 0xcc) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(lVar7 + 0xc0) = 0;
  *(undefined4 *)(lVar7 + 0xcc) = 0x80000000;
  lVar3 = *(longlong *)(lVar7 + 0xd0);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
    FUN_144b3ec00(lVar7 + 0xd0);
    return;
  }
  return;
}



// FUNCTION 144ca6520 FUN_144ca6520 body=360 status=ok
// SIG undefined FUN_144ca6520(void)

void FUN_144ca6520(longlong param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int local_res10;
  int local_res14;
  int local_res18;
  uint uStackX_1c;
  
  local_res10 = *param_2;
  local_res14 = *param_3;
  lVar7 = (longlong)local_res10 * 0x120 + *(longlong *)(param_1 + 0x38);
  iVar5 = *(int *)(lVar7 + 0xe8) + -1;
  if (-1 < iVar5) {
    plVar8 = (longlong *)(lVar7 + 0xe0);
    uStackX_1c = 0xffffffff;
    do {
      uVar1 = uStackX_1c;
      piVar4 = (int *)((longlong)iVar5 * 0x10 + *plVar8);
      if (piVar4[1] == *param_3) {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xe0 + (longlong)*piVar4 * 0x120);
        lVar3 = FUN_144ca6e00(plVar6,&local_res10);
        if (lVar3 == 0) {
          uVar2 = 0xffffffff;
          iVar9 = -1;
        }
        else {
          iVar9 = *(int *)(lVar3 + 4);
          uVar2 = (uint)(lVar3 - plVar6[2] >> 3);
        }
        if ((*(uint *)(plVar6 + 3) < uVar2) ||
           (lVar3 = plVar6[2] + (longlong)(int)uVar2 * 8,
           *(int *)(plVar6[2] + 4 + (longlong)(int)uVar2 * 8) != iVar9)) {
          lVar3 = FUN_144ca6e00(plVar6,(longlong)iVar9 * 0x10 + *plVar6);
        }
        FUN_144ca1820(plVar6,lVar3);
        if ((*(uint *)(lVar7 + 0xf8) < uVar1) ||
           (lVar3 = *(longlong *)(lVar7 + 0xf0) + (longlong)(int)uVar1 * 8,
           *(int *)(lVar3 + 4) != iVar5)) {
          lVar3 = FUN_144ca6e00(plVar8,(longlong)iVar5 * 0x10 + *plVar8);
        }
        FUN_144ca1820(plVar8,lVar3);
      }
      iVar5 = iVar5 + -1;
      local_res18 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 144ca6690 FUN_144ca6690 body=340 status=ok
// SIG undefined FUN_144ca6690(void)

longlong FUN_144ca6690(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  
  puVar5 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)param_1[1];
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    local_res8 = 0x40;
    puVar1 = (undefined4 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"hkAsyncThreadPoolMutex");
    }
    puVar6 = puVar5;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      FUN_144bdde80(puVar1 + 2);
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      puVar6 = puVar1;
    }
    LOCK();
    puVar2 = (undefined4 *)param_1[1];
    bVar7 = puVar2 == (undefined4 *)0x0;
    if (bVar7) {
      param_1[1] = (longlong)puVar6;
      puVar2 = (undefined4 *)0x0;
    }
    UNLOCK();
    puVar1 = puVar6;
    if ((!bVar7) && (puVar1 = puVar2, puVar6 != (undefined4 *)0x0)) {
      FUN_144be5d10(puVar6);
      (*DAT_14c787678)(0,puVar6,0);
    }
  }
  FUN_144be5d20(puVar1);
  if ((char)param_1[2] == '\0') {
    lVar3 = FUN_144be8020(*param_1);
    if (lVar3 != 1) {
      FUN_144be90e0(0x21dbd06c);
      lVar3 = *param_1;
      local_res10 = 0x20;
      lVar4 = (*DAT_14c787670)(0,&local_res10,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkcdDynamicAabbTree");
      }
      if (lVar4 != 0) {
        puVar5 = (undefined4 *)FUN_144fcd390(lVar4,lVar3);
      }
      FUN_144be90e0(0x25659f08);
      LOCK();
      UNLOCK();
      lVar3 = *param_1;
      *param_1 = (longlong)puVar5;
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_144be5e70(puVar1);
  return *param_1;
}



// FUNCTION 144ca67f0 FUN_144ca67f0 body=340 status=ok
// SIG undefined FUN_144ca67f0(void)

longlong FUN_144ca67f0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  
  puVar5 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)param_1[1];
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    local_res8 = 0x40;
    puVar1 = (undefined4 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"hkAsyncThreadPoolMutex");
    }
    puVar6 = puVar5;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      FUN_144bdde80(puVar1 + 2);
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      puVar6 = puVar1;
    }
    LOCK();
    puVar2 = (undefined4 *)param_1[1];
    bVar7 = puVar2 == (undefined4 *)0x0;
    if (bVar7) {
      param_1[1] = (longlong)puVar6;
      puVar2 = (undefined4 *)0x0;
    }
    UNLOCK();
    puVar1 = puVar6;
    if ((!bVar7) && (puVar1 = puVar2, puVar6 != (undefined4 *)0x0)) {
      FUN_144be5d10(puVar6);
      (*DAT_14c787678)(0,puVar6,0);
    }
  }
  FUN_144be5d20(puVar1);
  if ((char)param_1[2] == '\0') {
    lVar3 = FUN_144be8020(*param_1);
    if (lVar3 != 1) {
      FUN_144be90e0(0x21dbd06c);
      lVar3 = *param_1;
      local_res10 = 0x38;
      lVar4 = (*DAT_14c787670)(0,&local_res10,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkaiStreamingSetInstance");
      }
      if (lVar4 != 0) {
        puVar5 = (undefined4 *)FUN_144ca1380(lVar4,lVar3);
      }
      FUN_144be90e0(0x25659f08);
      LOCK();
      UNLOCK();
      lVar3 = *param_1;
      *param_1 = (longlong)puVar5;
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_144be5e70(puVar1);
  return *param_1;
}



// FUNCTION 144ca6950 FUN_144ca6950 body=103 status=ok
// SIG undefined FUN_144ca6950(void)

undefined8 * FUN_144ca6950(undefined8 *param_1,longlong param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = hkaiNavMeshClearanceCacheManager::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000020;
  param_1[3] = param_1 + 5;
  FUN_144c96440(param_1 + 3,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x328);
  return param_1;
}



// FUNCTION 144ca6a20 FUN_144ca6a20 body=183 status=ok
// SIG undefined FUN_144ca6a20(void)

undefined4 * FUN_144ca6a20(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  FUN_144ca1470(puVar1,&PTR_vftable_14c6e47c0);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  FUN_14382139c(param_2 + 6,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}


